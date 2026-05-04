#pragma once

struct ANativeWindow;

// ---------------------------------------------------------------------------
// ImGuiSetup —— ImGui 平台无关初始化的单点入口
//
// 负责：CreateContext + 自定义 Style + ImGui_ImplAndroid_Init
//
// 不负责（由调用方按渲染后端各自处理）：
//   - ImGui_ImplOpenGL3_Init / ImGui_ImplVulkan_Init
//   - ResourceManager::initializeFonts（需要在渲染后端 Init 之后）
//   - io.DisplaySize（每帧由 ImGui_ImplAndroid_NewFrame 自动更新；
//     如需在 Init 时显式设定（如 Vulkan preTransform 旋转），调用方在
//     EnsureContext 之后写入 io.DisplaySize）
// ---------------------------------------------------------------------------
namespace ImGuiSetup
{
    // 幂等：已建好则 no-op。platformWindow 用于 ImGui_ImplAndroid_Init。
    void EnsureContext(ANativeWindow *platformWindow);

    // ImGui_ImplAndroid_Shutdown + DestroyContext。
    // 调用方需在此之前先 Shutdown 渲染后端（ImGui_ImplOpenGL3_Shutdown / ImGui_ImplVulkan_Shutdown）。
    void TeardownContext();
}
