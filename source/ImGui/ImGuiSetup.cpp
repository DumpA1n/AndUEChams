#include "ImGuiSetup.h"

#include <android/native_window.h>

#include "imgui/imgui.h"
#include "imgui/backends/imgui_impl_android.h"

namespace ImGuiSetup
{

static bool g_ContextReady = false;

void EnsureContext(ANativeWindow *platformWindow)
{
    if (g_ContextReady)
        return;

    IMGUI_CHECKVERSION();
    ImGui::CreateContext();

    ImGuiIO &io = ImGui::GetIO();
    io.IniFilename = nullptr;
    io.ConfigFlags |= ImGuiConfigFlags_NavEnableKeyboard;

    ImGui::StyleColorsDark();
    ImGuiStyle &style = ImGui::GetStyle();
    style.WindowBorderSize  = 1.0f;
    style.WindowRounding    = 0.0f;
    style.WindowTitleAlign  = ImVec2(0.5f, 0.5f);
    style.ScrollbarSize     = 20.0f;
    style.FramePadding      = ImVec2(8.0f, 6.0f);
    style.TouchExtraPadding = ImVec2(4.0f, 4.0f);
    style.AntiAliasedLines  = true;
    style.AntiAliasedFill   = true;
    style.ScaleAllSizes(2.0f);

    ImGui_ImplAndroid_Init(platformWindow);

    g_ContextReady = true;
}

void TeardownContext()
{
    if (!g_ContextReady)
        return;

    ImGui_ImplAndroid_Shutdown();
    ImGui::DestroyContext();

    g_ContextReady = false;
}

} // namespace ImGuiSetup
