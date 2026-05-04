#include "DFImGuiFramework.hpp"
#include <cstring> // memcpy for ArrayDim>1 param marshalling

namespace SDK
{

// ---- UImGuiNetworkProxyComponent::* ----
void UImGuiNetworkProxyComponent::ServerDestroyPanel(struct FName PanelName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ImGuiNetworkProxyComponent", "ServerDestroyPanel");
    struct
    {
        struct FName PanelName;
    } Parms{};
    Parms.PanelName = (struct FName)PanelName;
    this->ProcessEvent(Func, &Parms);
}

void UImGuiNetworkProxyComponent::ServerCreatePanel(struct FName PanelName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ImGuiNetworkProxyComponent", "ServerCreatePanel");
    struct
    {
        struct FName PanelName;
    } Parms{};
    Parms.PanelName = (struct FName)PanelName;
    this->ProcessEvent(Func, &Parms);
}

void UImGuiNetworkProxyComponent::BroadcastToastMessage(EToastingMessageType Type, struct FString Message)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ImGuiNetworkProxyComponent", "BroadcastToastMessage");
    struct
    {
        enum EToastingMessageType Type;
        struct FString Message;
    } Parms{};
    Parms.Type = (enum EToastingMessageType)Type;
    Parms.Message = (struct FString)Message;
    this->ProcessEvent(Func, &Parms);
}

// ---- UImGuiPanelManager::* ----
void UImGuiPanelManager::ToggleLuaImGuiPanel(struct FName PanelName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ImGuiPanelManager", "ToggleLuaImGuiPanel");
    struct
    {
        struct FName PanelName;
    } Parms{};
    Parms.PanelName = (struct FName)PanelName;
    this->ProcessEvent(Func, &Parms);
}

void UImGuiPanelManager::ToggleImGuiPanel(struct FName PanelName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ImGuiPanelManager", "ToggleImGuiPanel");
    struct
    {
        struct FName PanelName;
    } Parms{};
    Parms.PanelName = (struct FName)PanelName;
    this->ProcessEvent(Func, &Parms);
}

void UImGuiPanelManager::ShowLuaImGuiPanel(struct FName PanelName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ImGuiPanelManager", "ShowLuaImGuiPanel");
    struct
    {
        struct FName PanelName;
    } Parms{};
    Parms.PanelName = (struct FName)PanelName;
    this->ProcessEvent(Func, &Parms);
}

void UImGuiPanelManager::ShowImGuiPanel(struct FName PanelName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ImGuiPanelManager", "ShowImGuiPanel");
    struct
    {
        struct FName PanelName;
    } Parms{};
    Parms.PanelName = (struct FName)PanelName;
    this->ProcessEvent(Func, &Parms);
}

void UImGuiPanelManager::RemoveDirectShowLuaPanel(const struct FName& PanelName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("ImGuiPanelManager", "RemoveDirectShowLuaPanel");
    struct
    {
        struct FName PanelName;
    } Parms{};
    Parms.PanelName = (struct FName)PanelName;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UImGuiPanelManager::KillLuaImGuiPanel(struct FName PanelName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ImGuiPanelManager", "KillLuaImGuiPanel");
    struct
    {
        struct FName PanelName;
    } Parms{};
    Parms.PanelName = (struct FName)PanelName;
    this->ProcessEvent(Func, &Parms);
}

void UImGuiPanelManager::KillImGuiPanel(struct FName PanelName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ImGuiPanelManager", "KillImGuiPanel");
    struct
    {
        struct FName PanelName;
    } Parms{};
    Parms.PanelName = (struct FName)PanelName;
    this->ProcessEvent(Func, &Parms);
}

uint8_t UImGuiPanelManager::IsLuaImGuiPanelVisible(struct FName PanelName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ImGuiPanelManager", "IsLuaImGuiPanelVisible");
    struct
    {
        struct FName PanelName;
        uint8_t ReturnValue;
    } Parms{};
    Parms.PanelName = (struct FName)PanelName;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UImGuiPanelManager::IsImGuiPanelVisible(struct FName PanelName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ImGuiPanelManager", "IsImGuiPanelVisible");
    struct
    {
        struct FName PanelName;
        uint8_t ReturnValue;
    } Parms{};
    Parms.PanelName = (struct FName)PanelName;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UImGuiPanelManager::HideLuaImGuiPanel(struct FName PanelName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ImGuiPanelManager", "HideLuaImGuiPanel");
    struct
    {
        struct FName PanelName;
    } Parms{};
    Parms.PanelName = (struct FName)PanelName;
    this->ProcessEvent(Func, &Parms);
}

void UImGuiPanelManager::HideImGuiPanel(struct FName PanelName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ImGuiPanelManager", "HideImGuiPanel");
    struct
    {
        struct FName PanelName;
    } Parms{};
    Parms.PanelName = (struct FName)PanelName;
    this->ProcessEvent(Func, &Parms);
}

void UImGuiPanelManager::HideAllImGuiPanels()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ImGuiPanelManager", "HideAllImGuiPanels");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

struct ALuaImGuiPanel* UImGuiPanelManager::GetLuaImGuiPanelActor(struct FName PanelName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ImGuiPanelManager", "GetLuaImGuiPanelActor");
    struct
    {
        struct FName PanelName;
        struct ALuaImGuiPanel* ReturnValue;
    } Parms{};
    Parms.PanelName = (struct FName)PanelName;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct AImGuiPanel* UImGuiPanelManager::GetImGuiPanelActor(struct FName PanelName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ImGuiPanelManager", "GetImGuiPanelActor");
    struct
    {
        struct FName PanelName;
        struct AImGuiPanel* ReturnValue;
    } Parms{};
    Parms.PanelName = (struct FName)PanelName;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UImGuiPanelManager::ForceEnableImGuiPanel()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("ImGuiPanelManager", "ForceEnableImGuiPanel");
    struct
    {
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UImGuiPanelManager::AddDirectShowLuaPanel(const struct FName& PanelName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("ImGuiPanelManager", "AddDirectShowLuaPanel");
    struct
    {
        struct FName PanelName;
    } Parms{};
    Parms.PanelName = (struct FName)PanelName;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UImGuiPanelManager::AcquireMouseCursor()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ImGuiPanelManager", "AcquireMouseCursor");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

} // namespace SDK
