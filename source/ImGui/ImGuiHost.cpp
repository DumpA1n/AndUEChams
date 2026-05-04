#include "ImGuiHost.h"

#include <android/native_window.h>
#include <android/native_window_jni.h>
#include <memory>

#include "imgui/imgui.h"
#include "imgui/backends/imgui_impl_android.h"

#include "AndroidPlatform/AndroidPlatform.h"
#include "Graphics/IGraphicsBackend.h"
#include "Graphics/OpenGLBackend.h"
#include "Graphics/SwapChainHook.h"
#include "Graphics/VulkanBackend.h"
#include "ImGuiExtern/ImGuiSoftKeyboard.h"
#include "ImGuiSetup.h"
#include "Logger.h"
#include "Resource/ResourceManager.h"

namespace ImGuiHost
{

// ===========================================================================
// 共享状态
// ===========================================================================
namespace
{

InjectionMode         g_Mode        = InjectionMode::Overlay;
bool                  g_Initialized = false;
std::function<void()> g_RenderCallback;

// ── Overlay 模式状态 ───────────────────────────────────────────
std::unique_ptr<IGraphicsBackend> g_Backend;
GraphicsAPI                       g_CurrentApi    = GraphicsAPI::Vulkan;

bool                              g_PendingSwitch = false;
GraphicsAPI                       g_PendingApi    = GraphicsAPI::Vulkan;

ANativeWindow                    *g_OverlayWindow = nullptr;
ANativeWindow                    *g_PrevAppWindow = nullptr;

// host Activity 上挂载的 overlay SurfaceView 的 GlobalRef，
// 由 OverlayCreateSurfaceViewOnMainThread 在 UI 线程上初始化。
jobject                           g_OverlaySurfaceView = nullptr;

// ===========================================================================
// Overlay SurfaceView —— 通过 JNI 在 host Activity 上 addView 一个独立 surface。
// 全部为 ImGuiHost.cpp 私有：状态、JNI 反射、主线程入口；外部只见 ImGuiHost 公开 API。
// ===========================================================================

// LayoutParams：TYPE_APPLICATION（2），FLAG_NOT_FOCUSABLE | NOT_TOUCH_MODAL |
// LAYOUT_NO_LIMITS | LAYOUT_IN_SCREEN | HARDWARE_ACCELERATED 等。
jobject CreateOverlayLayoutParams(JNIEnv* env, int width, int height)
{
    jclass lpClass = env->FindClass("android/view/WindowManager$LayoutParams");
    jmethodID lpInit = env->GetMethodID(lpClass, "<init>", "()V");
    jobject lp = env->NewObject(lpClass, lpInit);

    env->SetIntField(lp, env->GetFieldID(lpClass, "type",    "I"), 2);
    env->SetIntField(lp, env->GetFieldID(lpClass, "flags",   "I"),
                     512 | 8 | 16 | 32 | 1024 | 256 | 0x01000000 | 1073741824);
    env->SetIntField(lp, env->GetFieldID(lpClass, "gravity", "I"), 3 | 48);
    env->SetIntField(lp, env->GetFieldID(lpClass, "format",  "I"), 1);
    env->SetIntField(lp, env->GetFieldID(lpClass, "width",   "I"), width);
    env->SetIntField(lp, env->GetFieldID(lpClass, "height",  "I"), height);

    env->DeleteLocalRef(lpClass);
    return lp;
}

// 创建 SurfaceView 并通过 WindowManager.addView 挂上去；返回 GlobalRef。
jobject CreateAndAttachSurfaceView(JNIEnv* env, jobject activity, int width, int height)
{
    // WindowManager
    jclass actClass = env->GetObjectClass(activity);
    jmethodID getSystemService = env->GetMethodID(actClass,
        "getSystemService", "(Ljava/lang/String;)Ljava/lang/Object;");
    jstring windowStr = env->NewStringUTF("window");
    jobject windowManager = env->CallObjectMethod(activity, getSystemService, windowStr);
    env->DeleteLocalRef(windowStr);

    jclass wmClass = env->GetObjectClass(windowManager);
    jmethodID addView = env->GetMethodID(wmClass, "addView",
        "(Landroid/view/View;Landroid/view/ViewGroup$LayoutParams;)V");

    // SurfaceView
    jclass svClass = env->FindClass("android/view/SurfaceView");
    jmethodID svInit = env->GetMethodID(svClass, "<init>", "(Landroid/content/Context;)V");
    jobject sv = env->NewObject(svClass, svInit, activity);

    // SurfaceHolder.setFormat(TRANSLUCENT)
    jmethodID getHolder = env->GetMethodID(svClass, "getHolder", "()Landroid/view/SurfaceHolder;");
    jobject surfaceHolder = env->CallObjectMethod(sv, getHolder);
    jclass shClass = env->GetObjectClass(surfaceHolder);
    jmethodID setFormat = env->GetMethodID(shClass, "setFormat", "(I)V");
    env->CallVoidMethod(surfaceHolder, setFormat, -2);

    // addView
    jobject lp = CreateOverlayLayoutParams(env, width, height);
    env->CallVoidMethod(windowManager, addView, sv, lp);

    env->DeleteLocalRef(actClass);
    env->DeleteLocalRef(wmClass);
    env->DeleteLocalRef(windowManager);
    env->DeleteLocalRef(svClass);
    env->DeleteLocalRef(shClass);
    env->DeleteLocalRef(surfaceHolder);
    env->DeleteLocalRef(lp);

    return env->NewGlobalRef(sv);
}

// 必须在 UI 线程调用：创建 overlay SurfaceView 并把 GlobalRef 缓存到 g_OverlaySurfaceView。
// 由 InitOptions::postToMainThread 投递。
void OverlayCreateSurfaceViewOnMainThread()
{
    if (g_OverlaySurfaceView) return;

    jobject activity = AndroidPlatform::GetActivity();
    if (!activity)
    {
        LOGE("[ImGuiHost] no Activity available, cannot create overlay");
        return;
    }

    JNIEnv* env = AndroidPlatform::GetJavaEnv();
    if (!env) return;

    AndroidPlatform::DisplaySize size = AndroidPlatform::GetDisplaySize();
    g_OverlaySurfaceView = CreateAndAttachSurfaceView(env, activity, size.width, size.height);
    LOGI("[ImGuiHost] Overlay SurfaceView ready %dx%d view=%p",
         size.width, size.height, g_OverlaySurfaceView);
}

// 从 g_OverlaySurfaceView 取 ANativeWindow*（已 acquire；调用方负责 release）。
ANativeWindow* AcquireOverlayWindow()
{
    if (!g_OverlaySurfaceView) return nullptr;

    JNIEnv* env = AndroidPlatform::GetJavaEnv();
    if (!env) return nullptr;

    jclass svClass = env->GetObjectClass(g_OverlaySurfaceView);
    jmethodID getHolder = env->GetMethodID(svClass, "getHolder", "()Landroid/view/SurfaceHolder;");
    jobject surfaceHolder = env->CallObjectMethod(g_OverlaySurfaceView, getHolder);
    env->DeleteLocalRef(svClass);
    if (!surfaceHolder) return nullptr;

    jclass shClass = env->GetObjectClass(surfaceHolder);
    jmethodID getSurface = env->GetMethodID(shClass, "getSurface", "()Landroid/view/Surface;");
    jobject surface = env->CallObjectMethod(surfaceHolder, getSurface);
    env->DeleteLocalRef(shClass);
    env->DeleteLocalRef(surfaceHolder);
    if (!surface) return nullptr;

    ANativeWindow* w = ANativeWindow_fromSurface(env, surface);
    env->DeleteLocalRef(surface);
    return w;
}

// ===========================================================================
// Overlay backend 创建/销毁
// ===========================================================================
std::unique_ptr<IGraphicsBackend> CreateBackend(GraphicsAPI api)
{
    switch (api)
    {
    case GraphicsAPI::Vulkan: return std::make_unique<VulkanBackend>();
    case GraphicsAPI::OpenGL: return std::make_unique<OpenGLBackend>();
    }
    return std::make_unique<OpenGLBackend>();
}

bool OverlayInitBackend(ANativeWindow *window, GraphicsAPI api)
{
    if (g_Backend)
        return true;

    ANativeWindow_acquire(window);

    // ImGui 平台后端（context/style/font 之前的部分）
    // ImGui_ImplAndroid_Init 应绑到游戏窗口（输入坐标参考），不是 overlay 窗口
    ANativeWindow* platformWindow = AndroidPlatform::GetNativeWindow();
    ImGuiSetup::EnsureContext(platformWindow ? platformWindow : window);

    AndroidPlatform::DisplaySize ds = AndroidPlatform::GetDisplaySize();
    g_Backend = CreateBackend(api);
    if (!g_Backend->Init(window, ds.width, ds.height))
    {
        LOGE("[ImGuiHost] backend Init failed");
        g_Backend.reset();
        ImGuiSetup::TeardownContext();
        ANativeWindow_release(window);
        return false;
    }

    ResourceManager::GetInstance().initializeFonts(30.0f);

    ANativeWindow_release(window);
    g_CurrentApi  = api;

    LOGI("[+] ImGuiHost Overlay backend ready  api=%s",
         api == GraphicsAPI::Vulkan ? "Vulkan" : "OpenGL");
    return true;
}

void OverlayTeardownBackend()
{
    if (!g_Backend)
        return;

    g_Backend->Shutdown();
    g_Backend.reset();
    ImGuiSetup::TeardownContext();
}

// ===========================================================================
// Overlay 帧驱动
// ===========================================================================
void OverlayDrawFrame()
{
    if (!g_Backend || !g_Backend->IsReady())
        return;

    g_Backend->BeginFrame();
    ImGui_ImplAndroid_NewFrame();

    ImGui::NewFrame();
    ImGuiSoftKeyboard::PreUpdate();

    if (g_RenderCallback)
        g_RenderCallback();

    // 软键盘绘制需在 ImGui::Render 之前
    ImGuiSoftKeyboard::Draw();

    ImGui::Render();

    g_Backend->EndFrame();
}

void OverlayTick()
{
    ANativeWindow* appWindow = AndroidPlatform::GetNativeWindow();

    // 1. 窗口变化：清理旧资源，等待下一帧重建
    if (g_PrevAppWindow && appWindow && appWindow != g_PrevAppWindow)
    {
        OverlayTeardownBackend();
        g_OverlayWindow = nullptr;
        g_PrevAppWindow = nullptr;
    }

    // 2. 后端切换：清理后按 pendingApi 重建
    if (g_PendingSwitch)
    {
        OverlayTeardownBackend();
        g_OverlayWindow = nullptr;
        g_CurrentApi    = g_PendingApi;
        g_PendingSwitch = false;
    }

    // 3. SurfaceView 尚未在主线程创建完成 → 等
    if (!g_OverlayWindow)
    {
        if (!g_OverlaySurfaceView)
            return;

        g_OverlayWindow = AcquireOverlayWindow();
        if (!g_OverlayWindow)
            return;
        g_PrevAppWindow = appWindow;

        if (!OverlayInitBackend(g_OverlayWindow, g_CurrentApi))
        {
            g_OverlayWindow = nullptr;
            g_PrevAppWindow = nullptr;
            return;
        }
    }

    // 4. 绘制
    OverlayDrawFrame();
}

} // anonymous namespace

// ===========================================================================
// 公开 API
// ===========================================================================

bool Init(const InitOptions &opt)
{
    if (g_Initialized)
    {
        LOGW("[ImGuiHost] Init called twice");
        return false;
    }

    g_Mode           = opt.mode;
    g_RenderCallback = opt.render;
    g_CurrentApi     = opt.preferredApi;

    if (opt.mode == InjectionMode::SwapHook)
    {
        SwapChainHook::SetRenderCallback(opt.render);
        SwapChainHook::Install();
        g_Initialized = true;
        LOGI("[+] ImGuiHost::Init  mode=SwapHook");
        return true;
    }

    // Overlay 模式硬依赖 host 进程里有 Activity（要 Activity 引用 addView SurfaceView）
    if (!AndroidPlatform::GetActivity())
    {
        LOGE("[ImGuiHost] Overlay mode requires an Activity, aborting Init");
        return false;
    }

    // Overlay：把 SurfaceView 创建投递到主线程
    if (!opt.postToMainThread)
    {
        LOGE("[ImGuiHost] Overlay mode requires postToMainThread");
        return false;
    }
    opt.postToMainThread([] { OverlayCreateSurfaceViewOnMainThread(); });

    g_Initialized = true;
    LOGI("[+] ImGuiHost::Init  mode=Overlay  preferredApi=%s",
         opt.preferredApi == GraphicsAPI::Vulkan ? "Vulkan" : "OpenGL");
    return true;
}

void Clean()
{
    if (!g_Initialized)
        return;

    if (g_Mode == InjectionMode::SwapHook)
    {
        SwapChainHook::Uninstall();
    }
    else
    {
        OverlayTeardownBackend();
        g_OverlayWindow = nullptr;
        g_PrevAppWindow = nullptr;
        g_PendingSwitch = false;
    }

    g_RenderCallback = nullptr;
    g_Initialized    = false;

    LOGI("[+] ImGuiHost::Clean");
}

void Tick()
{
    if (!g_Initialized)
        return;

    // SwapHook 模式由 swap hook 自驱，外部脉冲为 no-op
    if (g_Mode == InjectionMode::SwapHook)
        return;

    OverlayTick();
}

bool IsInitialized()
{
    if (!g_Initialized)
        return false;
    if (g_Mode == InjectionMode::SwapHook)
        return SwapChainHook::IsInitialized();
    return g_Backend != nullptr && g_Backend->IsReady();
}

InjectionMode GetMode() { return g_Mode; }

ImVec2 GetDisplaySize()
{
    if (g_Mode == InjectionMode::SwapHook)
    {
        int w = SwapChainHook::GetWidth();
        int h = SwapChainHook::GetHeight();
        if (w > 0 && h > 0)
            return ImVec2((float)w, (float)h);
    }

    if (ImGui::GetCurrentContext())
    {
        ImVec2 ds = ImGui::GetIO().DisplaySize;
        if (ds.x > 0 && ds.y > 0)
            return ds;
    }

    AndroidPlatform::DisplaySize ds = AndroidPlatform::GetDisplaySize();
    return ImVec2((float)ds.width, (float)ds.height);
}

void RequestSwitchBackend(GraphicsAPI api)
{
    if (g_Mode != InjectionMode::Overlay)
        return;
    if (api == g_CurrentApi)
        return;
    g_PendingSwitch = true;
    g_PendingApi    = api;
}

GraphicsAPI GetCurrentApi() { return g_CurrentApi; }

} // namespace ImGuiHost
