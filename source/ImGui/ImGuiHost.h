#pragma once

#include <functional>

#include "imgui/imgui.h"

enum class GraphicsAPI { OpenGL, Vulkan };

enum class InjectionMode
{
    Overlay,     // 独立 overlay 窗口
    SwapHook,    // hook eglSwapBuffers / vkQueuePresentKHR
};

// ---------------------------------------------------------------------------
// ImGuiHost —— ImGui runtime 在 host 进程内的统一 facade
//
// 调用方只面向此 namespace；底层由两条平行实现支撑：
//   - Overlay  模式：自建 SurfaceView + GPU 上下文（IGraphicsBackend）
//   - SwapHook 模式：劫持游戏 swap 函数（SwapChainHook）
//
// 帧驱动语义：
//   - SwapHook 由内部 swap hook 自驱，调用方无需 Tick
//   - Overlay  由调用方在每帧的稳定脉冲源（如 UE PostRender）调用 Tick
//   - 调用方可在两种模式下都无脑调 Tick：SwapHook 模式 Tick 为 no-op
// ---------------------------------------------------------------------------
namespace ImGuiHost
{

struct InitOptions
{
    InjectionMode mode         = InjectionMode::Overlay;
    GraphicsAPI   preferredApi = GraphicsAPI::Vulkan;

    // 每帧 ImGui 绘制回调（在 NewFrame 之后、Render 之前调用）
    std::function<void()> render;

    // Overlay 模式所需：将一个任务投递到主线程（用于创建 SurfaceView）。
    // SwapHook 模式不会调用此回调。
    std::function<void(std::function<void()>)> postToMainThread;
};

bool Init(const InitOptions &opt);
void Clean();

// 每帧脉冲。Overlay 模式驱动一帧绘制；SwapHook 模式 no-op。
void Tick();

bool          IsInitialized();
InjectionMode GetMode();

// 统一逻辑显示尺寸（横屏）。
//   SwapHook：返回 SwapChainHook 检测到的尺寸（处理过 preTransform）
//   Overlay ：返回 io.DisplaySize，回退到 ScreenMetrics
ImVec2 GetDisplaySize();

// 仅 Overlay 模式有意义；SwapHook 下 RequestSwitchBackend 为 no-op，
// GetCurrentApi 返回内部记录值（自动检测前可能不准）。
void        RequestSwitchBackend(GraphicsAPI api);
GraphicsAPI GetCurrentApi();

} // namespace ImGuiHost
