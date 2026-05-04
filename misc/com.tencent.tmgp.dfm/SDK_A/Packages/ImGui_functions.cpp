#include "ImGui.hpp"
#include <cstring> // memcpy for ArrayDim>1 param marshalling

namespace SDK
{

// ---- UImGuiWidgetProxy::* ----
void UImGuiWidgetProxy::SetWantShareMouseInput(uint8_t bShare)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ImGuiWidgetProxy", "SetWantShareMouseInput");
    struct
    {
        uint8_t bShare;
    } Parms{};
    Parms.bShare = (uint8_t)bShare;
    this->ProcessEvent(Func, &Parms);
}

void UImGuiWidgetProxy::SetWantShareKeyboardInput(uint8_t bShare)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ImGuiWidgetProxy", "SetWantShareKeyboardInput");
    struct
    {
        uint8_t bShare;
    } Parms{};
    Parms.bShare = (uint8_t)bShare;
    this->ProcessEvent(Func, &Parms);
}

void UImGuiWidgetProxy::SetWantShareGamepadInput(uint8_t bShare)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ImGuiWidgetProxy", "SetWantShareGamepadInput");
    struct
    {
        uint8_t bShare;
    } Parms{};
    Parms.bShare = (uint8_t)bShare;
    this->ProcessEvent(Func, &Parms);
}

void UImGuiWidgetProxy::SetWantEnableInput(uint8_t bEnable)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ImGuiWidgetProxy", "SetWantEnableInput");
    struct
    {
        uint8_t bEnable;
    } Parms{};
    Parms.bEnable = (uint8_t)bEnable;
    this->ProcessEvent(Func, &Parms);
}

uint8_t UImGuiWidgetProxy::IsWantShareMouseInput()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ImGuiWidgetProxy", "IsWantShareMouseInput");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UImGuiWidgetProxy::IsWantShareKeyboardInput()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ImGuiWidgetProxy", "IsWantShareKeyboardInput");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UImGuiWidgetProxy::IsWantShareGamepadInput()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ImGuiWidgetProxy", "IsWantShareGamepadInput");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UImGuiWidgetProxy::IsWantEnableInput()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ImGuiWidgetProxy", "IsWantEnableInput");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UImGuiWidgetProxy* UImGuiWidgetProxy::Get(struct UObject* WorldContextObject)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("ImGuiWidgetProxy", "Get");
    struct
    {
        struct UObject* WorldContextObject;
        struct UImGuiWidgetProxy* ReturnValue;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

} // namespace SDK
