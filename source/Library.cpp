#include <chrono>
#include <cstdint>
#include <thread>

#include "AndroidPlatform/AndroidPlatform.h"
#include "AndroidPlatform/LooperDispatcher.h"
#include "ImGui/ImGuiHost.h"
#include "InputEvent/InputEventHook.h"
#include "UEGame/UE_Hack.h"
#include "Utils/Config/Config.h"
#include "Utils/CrashHandler/CrashHandler.h"
#include "Utils/ElfScanner/ElfScannerManager.h"
#include "Utils/HookUtils.h"
#include "Utils/KittyEx.h"
#include "Utils/Logger.h"

#include "imgui/backends/imgui_impl_android.h"

static LooperDispatcher g_MainLooperDispatcher;

void main_thread()
{
	KT::Init();

	if (!Elf.Scan({
			"libc.so",
			"libUE4.so",
			"libvulkan.so",
			"libinput.so",
			"libart.so",
			"libandroid_runtime.so",
		}))
	{
		LOGE("Failed to scan necessary libraries.");
		MAKE_CRASH();
	}

	// LOGI("Probing Activity via JNI...");
	// jobject activity = nullptr;
	// for (int i = 0; i < 500; ++i)
	// {
	// 	activity = AndroidPlatform::GetActivity();
	// 	if (activity) break;
	// 	std::this_thread::sleep_for(std::chrono::milliseconds(10));
	// }
	// if (activity) LOGI("[*] Activity: %p", activity);
	// else LOGW("[*] No Activity found in host process; Overlay mode will be unavailable");

	GetLogFile("DebugLog")->Append("{}    Hello\n", FormatedTime());

	// ── 渲染注入 ─────────────────────────────────────────────────────
	ImGuiHost::Init({
		.mode         = (CFG.InjectionMode == 0) ? InjectionMode::SwapHook : InjectionMode::Overlay,
		.preferredApi = static_cast<GraphicsAPI>(CFG.RenderBackend),
		.render = []()
		{
			UE_Hack::GetInstance().RenderMenu();
			// UE_Hack::GetInstance().Tick();
		},
		.postToMainThread = [](std::function<void()> task)
		{
			g_MainLooperDispatcher.post(std::move(task));
		},
	});
	g_MainLooperDispatcher.post([]() { g_MainLooperDispatcher.cleanup(); });

	// ── 输入事件 ─────────────────────────────────────────────────────
	InputEventHook::Initialize([](AInputEvent* event)
	{
		if (!event) return;

		if (ImGuiHost::IsInitialized())
		{
			ImGui_ImplAndroid_HandleInputEvent(event);
		}

		if (AInputEvent_getType(event) == AINPUT_EVENT_TYPE_KEY)
		{
			int32_t action = AKeyEvent_getAction(event);
			if (action == AKEY_EVENT_ACTION_DOWN)
			{
				int32_t key = AKeyEvent_getKeyCode(event);
				if (key == AKEYCODE_VOLUME_DOWN)
				{
					LOGI("keycode: AKEYCODE_VOLUME_DOWN, action: AKEY_EVENT_ACTION_DOWN");
				}
				else if (key == AKEYCODE_VOLUME_UP)
				{
					LOGI("keycode: AKEYCODE_VOLUME_UP, action: AKEY_EVENT_ACTION_DOWN");
				}
			}
		}
	});

	UE_Hack::GetInstance().Init();
}

extern "C" jint JNIEXPORT JNI_OnLoad(JavaVM* vm, void* key)
{
	// key 1337 is passed by injector
	if (key != (void*)20030331)
		return JNI_VERSION_1_6;

	CrashHandler::Install();

	LOGI("JNI_OnLoad called by injector.");

	LOGI("JavaVM: %p", vm);

	JNIEnv* env = nullptr;
	if (vm->GetEnv((void**)&env, JNI_VERSION_1_6) == JNI_OK)
	{
		LOGI("JavaEnv: %p", env);
		// ...
	}

	g_MainLooperDispatcher.init();

	std::thread(main_thread).detach();

	return JNI_VERSION_1_6;
}

__attribute__((constructor)) void ctor() { LOGI("ctor"); }

__attribute__((destructor)) void dtor() { LOGI("dtor"); }

#include "AndroidPlatform/android_native_app_glue.h"
extern "C" void android_main(struct android_app* /*state*/) { app_dummy(); }
