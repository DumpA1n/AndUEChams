#include "GPTools.hpp"
#include "Engine.hpp"
#include <cstring> // memcpy for ArrayDim>1 param marshalling

namespace SDK
{

// UGPTFlowLogger
void UGPTFlowLogger::ResetBuffer()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPTFlowLogger", "ResetBuffer");
    struct
    {
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UGPTFlowLogger::LogFlow(struct UObject* WorldContextObject, EGPTFlowMessageLevel MsgLevel, struct FString Author, struct UObject* ActionInst, struct FString ActionName, struct FString ActionEvent, struct AActor* Target, struct FName TargetTag, struct AActor* Instigator, struct FString MsgText)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPTFlowLogger", "LogFlow");
    struct
    {
        struct UObject* WorldContextObject;
        enum EGPTFlowMessageLevel MsgLevel;
        struct FString Author;
        struct UObject* ActionInst;
        struct FString ActionName;
        struct FString ActionEvent;
        struct AActor* Target;
        struct FName TargetTag;
        struct AActor* Instigator;
        struct FString MsgText;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    Parms.MsgLevel = (enum EGPTFlowMessageLevel)MsgLevel;
    Parms.Author = (struct FString)Author;
    Parms.ActionInst = (struct UObject*)ActionInst;
    Parms.ActionName = (struct FString)ActionName;
    Parms.ActionEvent = (struct FString)ActionEvent;
    Parms.Target = (struct AActor*)Target;
    Parms.TargetTag = (struct FName)TargetTag;
    Parms.Instigator = (struct AActor*)Instigator;
    Parms.MsgText = (struct FString)MsgText;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UGPTFlowLogger::EndFlow()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPTFlowLogger", "EndFlow");
    struct
    {
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UGPTFlowLogger::BeginFlow(struct FString Name)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPTFlowLogger", "BeginFlow");
    struct
    {
        struct FString Name;
    } Parms{};
    Parms.Name = (struct FString)Name;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

// UGPToolBPBase
void UGPToolBPBase::OnImGUI()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPToolBPBase", "OnImGUI");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// UGPToolGUI
uint8_t UGPToolGUI::VSliderIntEx(struct FString Label, struct FVector2D size, int32_t& V, int32_t v_min, int32_t v_max, struct FString Format)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPToolGUI", "VSliderIntEx");
    struct
    {
        struct FString Label;
        struct FVector2D size;
        int32_t V;
        int32_t v_min;
        int32_t v_max;
        struct FString Format;
        uint8_t ReturnValue;
    } Parms{};
    Parms.Label = (struct FString)Label;
    Parms.size = (struct FVector2D)size;
    Parms.v_min = (int32_t)v_min;
    Parms.v_max = (int32_t)v_max;
    Parms.Format = (struct FString)Format;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    V = Parms.V;
    return Parms.ReturnValue;
}

uint8_t UGPToolGUI::VSliderInt(struct FString Label, struct FVector2D size, int32_t& V, int32_t v_min, int32_t v_max)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPToolGUI", "VSliderInt");
    struct
    {
        struct FString Label;
        struct FVector2D size;
        int32_t V;
        int32_t v_min;
        int32_t v_max;
        uint8_t ReturnValue;
    } Parms{};
    Parms.Label = (struct FString)Label;
    Parms.size = (struct FVector2D)size;
    Parms.v_min = (int32_t)v_min;
    Parms.v_max = (int32_t)v_max;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    V = Parms.V;
    return Parms.ReturnValue;
}

uint8_t UGPToolGUI::VSliderFloatEx(struct FString Label, struct FVector2D size, float& V, float v_min, float v_max, struct FString Format, float Power)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPToolGUI", "VSliderFloatEx");
    struct
    {
        struct FString Label;
        struct FVector2D size;
        float V;
        float v_min;
        float v_max;
        struct FString Format;
        float Power;
        uint8_t ReturnValue;
    } Parms{};
    Parms.Label = (struct FString)Label;
    Parms.size = (struct FVector2D)size;
    Parms.v_min = (float)v_min;
    Parms.v_max = (float)v_max;
    Parms.Format = (struct FString)Format;
    Parms.Power = (float)Power;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    V = Parms.V;
    return Parms.ReturnValue;
}

uint8_t UGPToolGUI::VSliderFloat(struct FString Label, struct FVector2D size, float& V, float v_min, float v_max)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPToolGUI", "VSliderFloat");
    struct
    {
        struct FString Label;
        struct FVector2D size;
        float V;
        float v_min;
        float v_max;
        uint8_t ReturnValue;
    } Parms{};
    Parms.Label = (struct FString)Label;
    Parms.size = (struct FVector2D)size;
    Parms.v_min = (float)v_min;
    Parms.v_max = (float)v_max;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    V = Parms.V;
    return Parms.ReturnValue;
}

void UGPToolGUI::ValueInt(struct FString Prefix, int32_t V)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPToolGUI", "ValueInt");
    struct
    {
        struct FString Prefix;
        int32_t V;
    } Parms{};
    Parms.Prefix = (struct FString)Prefix;
    Parms.V = (int32_t)V;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UGPToolGUI::ValueFloatEx(struct FString Prefix, float V, struct FString float_format)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPToolGUI", "ValueFloatEx");
    struct
    {
        struct FString Prefix;
        float V;
        struct FString float_format;
    } Parms{};
    Parms.Prefix = (struct FString)Prefix;
    Parms.V = (float)V;
    Parms.float_format = (struct FString)float_format;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UGPToolGUI::ValueFloat(struct FString Prefix, float V)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPToolGUI", "ValueFloat");
    struct
    {
        struct FString Prefix;
        float V;
    } Parms{};
    Parms.Prefix = (struct FString)Prefix;
    Parms.V = (float)V;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UGPToolGUI::Value(struct FString Prefix, uint8_t B)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPToolGUI", "Value");
    struct
    {
        struct FString Prefix;
        uint8_t B;
    } Parms{};
    Parms.Prefix = (struct FString)Prefix;
    Parms.B = (uint8_t)B;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UGPToolGUI::UnindentEx(float indent_w)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPToolGUI", "UnindentEx");
    struct
    {
        float indent_w;
    } Parms{};
    Parms.indent_w = (float)indent_w;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UGPToolGUI::Unindent()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPToolGUI", "Unindent");
    struct
    {
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UGPToolGUI::TreePush(struct FString str_id)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPToolGUI", "TreePush");
    struct
    {
        struct FString str_id;
    } Parms{};
    Parms.str_id = (struct FString)str_id;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UGPToolGUI::TreePop()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPToolGUI", "TreePop");
    struct
    {
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

uint8_t UGPToolGUI::TreeNodeEx(struct FString Label, int32_t Flags)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPToolGUI", "TreeNodeEx");
    struct
    {
        struct FString Label;
        int32_t Flags;
        uint8_t ReturnValue;
    } Parms{};
    Parms.Label = (struct FString)Label;
    Parms.Flags = (int32_t)Flags;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UGPToolGUI::TreeNode(struct FString Label)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPToolGUI", "TreeNode");
    struct
    {
        struct FString Label;
        uint8_t ReturnValue;
    } Parms{};
    Parms.Label = (struct FString)Label;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UGPToolGUI::TextWrapped(struct FString fmt)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPToolGUI", "TextWrapped");
    struct
    {
        struct FString fmt;
    } Parms{};
    Parms.fmt = (struct FString)fmt;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UGPToolGUI::TextDisabled(struct FString fmt)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPToolGUI", "TextDisabled");
    struct
    {
        struct FString fmt;
    } Parms{};
    Parms.fmt = (struct FString)fmt;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UGPToolGUI::TextColored(const struct FVector4& col, struct FString fmt)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPToolGUI", "TextColored");
    struct
    {
        struct FVector4 col;
        struct FString fmt;
    } Parms{};
    Parms.col = (struct FVector4)col;
    Parms.fmt = (struct FString)fmt;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UGPToolGUI::Text(struct FString fmt)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPToolGUI", "Text");
    struct
    {
        struct FString fmt;
    } Parms{};
    Parms.fmt = (struct FString)fmt;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UGPToolGUI::Spacing()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPToolGUI", "Spacing");
    struct
    {
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

uint8_t UGPToolGUI::SmallButton(struct FString Label)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPToolGUI", "SmallButton");
    struct
    {
        struct FString Label;
        uint8_t ReturnValue;
    } Parms{};
    Parms.Label = (struct FString)Label;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UGPToolGUI::SliderIntEx(struct FString Label, int32_t& V, int32_t v_min, int32_t v_max, struct FString Format)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPToolGUI", "SliderIntEx");
    struct
    {
        struct FString Label;
        int32_t V;
        int32_t v_min;
        int32_t v_max;
        struct FString Format;
        uint8_t ReturnValue;
    } Parms{};
    Parms.Label = (struct FString)Label;
    Parms.v_min = (int32_t)v_min;
    Parms.v_max = (int32_t)v_max;
    Parms.Format = (struct FString)Format;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    V = Parms.V;
    return Parms.ReturnValue;
}

uint8_t UGPToolGUI::SliderInt(struct FString Label, int32_t& V, int32_t v_min, int32_t v_max)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPToolGUI", "SliderInt");
    struct
    {
        struct FString Label;
        int32_t V;
        int32_t v_min;
        int32_t v_max;
        uint8_t ReturnValue;
    } Parms{};
    Parms.Label = (struct FString)Label;
    Parms.v_min = (int32_t)v_min;
    Parms.v_max = (int32_t)v_max;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    V = Parms.V;
    return Parms.ReturnValue;
}

uint8_t UGPToolGUI::SliderFloatEx(struct FString Label, float& V, float v_min, float v_max, struct FString Format, float Power)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPToolGUI", "SliderFloatEx");
    struct
    {
        struct FString Label;
        float V;
        float v_min;
        float v_max;
        struct FString Format;
        float Power;
        uint8_t ReturnValue;
    } Parms{};
    Parms.Label = (struct FString)Label;
    Parms.v_min = (float)v_min;
    Parms.v_max = (float)v_max;
    Parms.Format = (struct FString)Format;
    Parms.Power = (float)Power;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    V = Parms.V;
    return Parms.ReturnValue;
}

uint8_t UGPToolGUI::SliderFloat(struct FString Label, float& V, float v_min, float v_max)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPToolGUI", "SliderFloat");
    struct
    {
        struct FString Label;
        float V;
        float v_min;
        float v_max;
        uint8_t ReturnValue;
    } Parms{};
    Parms.Label = (struct FString)Label;
    Parms.v_min = (float)v_min;
    Parms.v_max = (float)v_max;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    V = Parms.V;
    return Parms.ReturnValue;
}

uint8_t UGPToolGUI::SliderAngleEx(struct FString Label, float& v_rad, float v_degrees_min, float v_degrees_max, struct FString Format)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPToolGUI", "SliderAngleEx");
    struct
    {
        struct FString Label;
        float v_rad;
        float v_degrees_min;
        float v_degrees_max;
        struct FString Format;
        uint8_t ReturnValue;
    } Parms{};
    Parms.Label = (struct FString)Label;
    Parms.v_degrees_min = (float)v_degrees_min;
    Parms.v_degrees_max = (float)v_degrees_max;
    Parms.Format = (struct FString)Format;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    v_rad = Parms.v_rad;
    return Parms.ReturnValue;
}

uint8_t UGPToolGUI::SliderAngle(struct FString Label, float& v_rad)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPToolGUI", "SliderAngle");
    struct
    {
        struct FString Label;
        float v_rad;
        uint8_t ReturnValue;
    } Parms{};
    Parms.Label = (struct FString)Label;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    v_rad = Parms.v_rad;
    return Parms.ReturnValue;
}

void UGPToolGUI::SetWindowSizeWithNameEx(struct FString Name, struct FVector2D size, int32_t Cond)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPToolGUI", "SetWindowSizeWithNameEx");
    struct
    {
        struct FString Name;
        struct FVector2D size;
        int32_t Cond;
    } Parms{};
    Parms.Name = (struct FString)Name;
    Parms.size = (struct FVector2D)size;
    Parms.Cond = (int32_t)Cond;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UGPToolGUI::SetWindowSizeWithName(struct FString Name, struct FVector2D size)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPToolGUI", "SetWindowSizeWithName");
    struct
    {
        struct FString Name;
        struct FVector2D size;
    } Parms{};
    Parms.Name = (struct FString)Name;
    Parms.size = (struct FVector2D)size;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UGPToolGUI::SetWindowSizeEx(struct FVector2D size, int32_t Cond)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPToolGUI", "SetWindowSizeEx");
    struct
    {
        struct FVector2D size;
        int32_t Cond;
    } Parms{};
    Parms.size = (struct FVector2D)size;
    Parms.Cond = (int32_t)Cond;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UGPToolGUI::SetWindowSize(struct FVector2D size)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPToolGUI", "SetWindowSize");
    struct
    {
        struct FVector2D size;
    } Parms{};
    Parms.size = (struct FVector2D)size;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UGPToolGUI::SetWindowPosWithNameEx(struct FString Name, struct FVector2D pos, int32_t Cond)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPToolGUI", "SetWindowPosWithNameEx");
    struct
    {
        struct FString Name;
        struct FVector2D pos;
        int32_t Cond;
    } Parms{};
    Parms.Name = (struct FString)Name;
    Parms.pos = (struct FVector2D)pos;
    Parms.Cond = (int32_t)Cond;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UGPToolGUI::SetWindowPosWithName(struct FString Name, struct FVector2D pos)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPToolGUI", "SetWindowPosWithName");
    struct
    {
        struct FString Name;
        struct FVector2D pos;
    } Parms{};
    Parms.Name = (struct FString)Name;
    Parms.pos = (struct FVector2D)pos;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UGPToolGUI::SetWindowPosEx(struct FVector2D pos, int32_t Cond)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPToolGUI", "SetWindowPosEx");
    struct
    {
        struct FVector2D pos;
        int32_t Cond;
    } Parms{};
    Parms.pos = (struct FVector2D)pos;
    Parms.Cond = (int32_t)Cond;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UGPToolGUI::SetWindowPos(struct FVector2D pos)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPToolGUI", "SetWindowPos");
    struct
    {
        struct FVector2D pos;
    } Parms{};
    Parms.pos = (struct FVector2D)pos;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UGPToolGUI::SetWindowFontScale(float Scale)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPToolGUI", "SetWindowFontScale");
    struct
    {
        float Scale;
    } Parms{};
    Parms.Scale = (float)Scale;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UGPToolGUI::SetWindowFocusWithName(struct FString Name)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPToolGUI", "SetWindowFocusWithName");
    struct
    {
        struct FString Name;
    } Parms{};
    Parms.Name = (struct FString)Name;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UGPToolGUI::SetWindowFocus()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPToolGUI", "SetWindowFocus");
    struct
    {
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UGPToolGUI::SetWindowCollapsedWithNameEx(struct FString Name, uint8_t Collapsed, int32_t Cond)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPToolGUI", "SetWindowCollapsedWithNameEx");
    struct
    {
        struct FString Name;
        uint8_t Collapsed;
        int32_t Cond;
    } Parms{};
    Parms.Name = (struct FString)Name;
    Parms.Collapsed = (uint8_t)Collapsed;
    Parms.Cond = (int32_t)Cond;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UGPToolGUI::SetWindowCollapsedWithName(struct FString Name, uint8_t Collapsed)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPToolGUI", "SetWindowCollapsedWithName");
    struct
    {
        struct FString Name;
        uint8_t Collapsed;
    } Parms{};
    Parms.Name = (struct FString)Name;
    Parms.Collapsed = (uint8_t)Collapsed;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UGPToolGUI::SetWindowCollapsedEx(uint8_t Collapsed, int32_t Cond)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPToolGUI", "SetWindowCollapsedEx");
    struct
    {
        uint8_t Collapsed;
        int32_t Cond;
    } Parms{};
    Parms.Collapsed = (uint8_t)Collapsed;
    Parms.Cond = (int32_t)Cond;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UGPToolGUI::SetWindowCollapsed(uint8_t Collapsed)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPToolGUI", "SetWindowCollapsed");
    struct
    {
        uint8_t Collapsed;
    } Parms{};
    Parms.Collapsed = (uint8_t)Collapsed;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UGPToolGUI::SetTabItemClosed(struct FString tab_or_docked_window_label)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPToolGUI", "SetTabItemClosed");
    struct
    {
        struct FString tab_or_docked_window_label;
    } Parms{};
    Parms.tab_or_docked_window_label = (struct FString)tab_or_docked_window_label;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UGPToolGUI::SetScrollY(float scroll_y)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPToolGUI", "SetScrollY");
    struct
    {
        float scroll_y;
    } Parms{};
    Parms.scroll_y = (float)scroll_y;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UGPToolGUI::SetScrollX(float scroll_x)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPToolGUI", "SetScrollX");
    struct
    {
        float scroll_x;
    } Parms{};
    Parms.scroll_x = (float)scroll_x;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UGPToolGUI::SetScrollHereYEx(float center_y_ratio)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPToolGUI", "SetScrollHereYEx");
    struct
    {
        float center_y_ratio;
    } Parms{};
    Parms.center_y_ratio = (float)center_y_ratio;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UGPToolGUI::SetScrollHereY()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPToolGUI", "SetScrollHereY");
    struct
    {
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UGPToolGUI::SetScrollHereXEx(float center_x_ratio)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPToolGUI", "SetScrollHereXEx");
    struct
    {
        float center_x_ratio;
    } Parms{};
    Parms.center_x_ratio = (float)center_x_ratio;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UGPToolGUI::SetScrollHereX()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPToolGUI", "SetScrollHereX");
    struct
    {
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UGPToolGUI::SetScrollFromPosYEx(float local_y, float center_y_ratio)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPToolGUI", "SetScrollFromPosYEx");
    struct
    {
        float local_y;
        float center_y_ratio;
    } Parms{};
    Parms.local_y = (float)local_y;
    Parms.center_y_ratio = (float)center_y_ratio;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UGPToolGUI::SetScrollFromPosY(float local_y)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPToolGUI", "SetScrollFromPosY");
    struct
    {
        float local_y;
    } Parms{};
    Parms.local_y = (float)local_y;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UGPToolGUI::SetScrollFromPosXEx(float local_x, float center_x_ratio)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPToolGUI", "SetScrollFromPosXEx");
    struct
    {
        float local_x;
        float center_x_ratio;
    } Parms{};
    Parms.local_x = (float)local_x;
    Parms.center_x_ratio = (float)center_x_ratio;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UGPToolGUI::SetScrollFromPosX(float local_x)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPToolGUI", "SetScrollFromPosX");
    struct
    {
        float local_x;
    } Parms{};
    Parms.local_x = (float)local_x;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UGPToolGUI::SetNextWindowSizeEx(struct FVector2D size, int32_t Cond)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPToolGUI", "SetNextWindowSizeEx");
    struct
    {
        struct FVector2D size;
        int32_t Cond;
    } Parms{};
    Parms.size = (struct FVector2D)size;
    Parms.Cond = (int32_t)Cond;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UGPToolGUI::SetNextWindowSize(struct FVector2D size)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPToolGUI", "SetNextWindowSize");
    struct
    {
        struct FVector2D size;
    } Parms{};
    Parms.size = (struct FVector2D)size;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UGPToolGUI::SetNextWindowPosEx(struct FVector2D pos, int32_t Cond, struct FVector2D Pivot)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPToolGUI", "SetNextWindowPosEx");
    struct
    {
        struct FVector2D pos;
        int32_t Cond;
        struct FVector2D Pivot;
    } Parms{};
    Parms.pos = (struct FVector2D)pos;
    Parms.Cond = (int32_t)Cond;
    Parms.Pivot = (struct FVector2D)Pivot;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UGPToolGUI::SetNextWindowPos(struct FVector2D pos)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPToolGUI", "SetNextWindowPos");
    struct
    {
        struct FVector2D pos;
    } Parms{};
    Parms.pos = (struct FVector2D)pos;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UGPToolGUI::SetNextWindowFocus()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPToolGUI", "SetNextWindowFocus");
    struct
    {
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UGPToolGUI::SetNextWindowContentSize(struct FVector2D size)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPToolGUI", "SetNextWindowContentSize");
    struct
    {
        struct FVector2D size;
    } Parms{};
    Parms.size = (struct FVector2D)size;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UGPToolGUI::SetNextWindowCollapsedEx(uint8_t Collapsed, int32_t Cond)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPToolGUI", "SetNextWindowCollapsedEx");
    struct
    {
        uint8_t Collapsed;
        int32_t Cond;
    } Parms{};
    Parms.Collapsed = (uint8_t)Collapsed;
    Parms.Cond = (int32_t)Cond;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UGPToolGUI::SetNextWindowCollapsed(uint8_t Collapsed)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPToolGUI", "SetNextWindowCollapsed");
    struct
    {
        uint8_t Collapsed;
    } Parms{};
    Parms.Collapsed = (uint8_t)Collapsed;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UGPToolGUI::SetNextWindowBgAlpha(float Alpha)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPToolGUI", "SetNextWindowBgAlpha");
    struct
    {
        float Alpha;
    } Parms{};
    Parms.Alpha = (float)Alpha;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UGPToolGUI::SetNextItemWidth(float item_width)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPToolGUI", "SetNextItemWidth");
    struct
    {
        float item_width;
    } Parms{};
    Parms.item_width = (float)item_width;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UGPToolGUI::SetNextItemOpenEx(uint8_t is_open, int32_t Cond)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPToolGUI", "SetNextItemOpenEx");
    struct
    {
        uint8_t is_open;
        int32_t Cond;
    } Parms{};
    Parms.is_open = (uint8_t)is_open;
    Parms.Cond = (int32_t)Cond;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UGPToolGUI::SetNextItemOpen(uint8_t is_open)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPToolGUI", "SetNextItemOpen");
    struct
    {
        uint8_t is_open;
    } Parms{};
    Parms.is_open = (uint8_t)is_open;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UGPToolGUI::SetMouseCursor(int32_t Type)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPToolGUI", "SetMouseCursor");
    struct
    {
        int32_t Type;
    } Parms{};
    Parms.Type = (int32_t)Type;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UGPToolGUI::SetKeyboardFocusHereEx(int32_t offset)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPToolGUI", "SetKeyboardFocusHereEx");
    struct
    {
        int32_t offset;
    } Parms{};
    Parms.offset = (int32_t)offset;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UGPToolGUI::SetKeyboardFocusHere()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPToolGUI", "SetKeyboardFocusHere");
    struct
    {
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UGPToolGUI::SetItemDefaultFocus()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPToolGUI", "SetItemDefaultFocus");
    struct
    {
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UGPToolGUI::SetItemAllowOverlap()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPToolGUI", "SetItemAllowOverlap");
    struct
    {
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UGPToolGUI::SetCursorScreenPos(struct FVector2D pos)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPToolGUI", "SetCursorScreenPos");
    struct
    {
        struct FVector2D pos;
    } Parms{};
    Parms.pos = (struct FVector2D)pos;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UGPToolGUI::SetCursorPosY(float local_y)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPToolGUI", "SetCursorPosY");
    struct
    {
        float local_y;
    } Parms{};
    Parms.local_y = (float)local_y;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UGPToolGUI::SetCursorPosX(float local_x)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPToolGUI", "SetCursorPosX");
    struct
    {
        float local_x;
    } Parms{};
    Parms.local_x = (float)local_x;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UGPToolGUI::SetCursorPos(struct FVector2D local_pos)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPToolGUI", "SetCursorPos");
    struct
    {
        struct FVector2D local_pos;
    } Parms{};
    Parms.local_pos = (struct FVector2D)local_pos;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UGPToolGUI::SetColumnWidth(int32_t column_index, float Width)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPToolGUI", "SetColumnWidth");
    struct
    {
        int32_t column_index;
        float Width;
    } Parms{};
    Parms.column_index = (int32_t)column_index;
    Parms.Width = (float)Width;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UGPToolGUI::SetColumnOffset(int32_t column_index, float offset_x)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPToolGUI", "SetColumnOffset");
    struct
    {
        int32_t column_index;
        float offset_x;
    } Parms{};
    Parms.column_index = (int32_t)column_index;
    Parms.offset_x = (float)offset_x;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UGPToolGUI::SetClipboardText(struct FString Text)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPToolGUI", "SetClipboardText");
    struct
    {
        struct FString Text;
    } Parms{};
    Parms.Text = (struct FString)Text;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UGPToolGUI::Separator()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPToolGUI", "Separator");
    struct
    {
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

uint8_t UGPToolGUI::SelectableWithPSelectedEx(struct FString Label, uint8_t& p_selected, int32_t Flags, struct FVector2D size)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPToolGUI", "SelectableWithPSelectedEx");
    struct
    {
        struct FString Label;
        uint8_t p_selected;
        int32_t Flags;
        struct FVector2D size;
        uint8_t ReturnValue;
    } Parms{};
    Parms.Label = (struct FString)Label;
    Parms.Flags = (int32_t)Flags;
    Parms.size = (struct FVector2D)size;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    p_selected = Parms.p_selected;
    return Parms.ReturnValue;
}

uint8_t UGPToolGUI::SelectableWithPSelected(struct FString Label, uint8_t& p_selected)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPToolGUI", "SelectableWithPSelected");
    struct
    {
        struct FString Label;
        uint8_t p_selected;
        uint8_t ReturnValue;
    } Parms{};
    Parms.Label = (struct FString)Label;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    p_selected = Parms.p_selected;
    return Parms.ReturnValue;
}

uint8_t UGPToolGUI::SelectableEx(struct FString Label, uint8_t Selected, int32_t Flags, struct FVector2D size)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPToolGUI", "SelectableEx");
    struct
    {
        struct FString Label;
        uint8_t Selected;
        int32_t Flags;
        struct FVector2D size;
        uint8_t ReturnValue;
    } Parms{};
    Parms.Label = (struct FString)Label;
    Parms.Selected = (uint8_t)Selected;
    Parms.Flags = (int32_t)Flags;
    Parms.size = (struct FVector2D)size;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UGPToolGUI::Selectable(struct FString Label)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPToolGUI", "Selectable");
    struct
    {
        struct FString Label;
        uint8_t ReturnValue;
    } Parms{};
    Parms.Label = (struct FString)Label;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UGPToolGUI::SameLineEx(float offset_from_start_x, float Spacing)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPToolGUI", "SameLineEx");
    struct
    {
        float offset_from_start_x;
        float Spacing;
    } Parms{};
    Parms.offset_from_start_x = (float)offset_from_start_x;
    Parms.Spacing = (float)Spacing;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UGPToolGUI::SameLine()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPToolGUI", "SameLine");
    struct
    {
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UGPToolGUI::ResetMouseDragDeltaEx(int32_t Button)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPToolGUI", "ResetMouseDragDeltaEx");
    struct
    {
        int32_t Button;
    } Parms{};
    Parms.Button = (int32_t)Button;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UGPToolGUI::ResetMouseDragDelta()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPToolGUI", "ResetMouseDragDelta");
    struct
    {
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

uint8_t UGPToolGUI::RadioVButton(struct FString Label, int32_t& V, int32_t v_button)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPToolGUI", "RadioVButton");
    struct
    {
        struct FString Label;
        int32_t V;
        int32_t v_button;
        uint8_t ReturnValue;
    } Parms{};
    Parms.Label = (struct FString)Label;
    Parms.v_button = (int32_t)v_button;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    V = Parms.V;
    return Parms.ReturnValue;
}

uint8_t UGPToolGUI::RadioButton(struct FString Label, uint8_t Active)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPToolGUI", "RadioButton");
    struct
    {
        struct FString Label;
        uint8_t Active;
        uint8_t ReturnValue;
    } Parms{};
    Parms.Label = (struct FString)Label;
    Parms.Active = (uint8_t)Active;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UGPToolGUI::PushTextWrapPosEx(float wrap_local_pos_x)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPToolGUI", "PushTextWrapPosEx");
    struct
    {
        float wrap_local_pos_x;
    } Parms{};
    Parms.wrap_local_pos_x = (float)wrap_local_pos_x;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UGPToolGUI::PushTextWrapPos()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPToolGUI", "PushTextWrapPos");
    struct
    {
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UGPToolGUI::PushStyleVarWithFVector2(int32_t Idx, struct FVector2D Val)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPToolGUI", "PushStyleVarWithFVector2");
    struct
    {
        int32_t Idx;
        struct FVector2D Val;
    } Parms{};
    Parms.Idx = (int32_t)Idx;
    Parms.Val = (struct FVector2D)Val;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UGPToolGUI::PushStyleVar(int32_t Idx, float Val)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPToolGUI", "PushStyleVar");
    struct
    {
        int32_t Idx;
        float Val;
    } Parms{};
    Parms.Idx = (int32_t)Idx;
    Parms.Val = (float)Val;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UGPToolGUI::PushStyleColorWithFVector4(int32_t Idx, const struct FVector4& col)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPToolGUI", "PushStyleColorWithFVector4");
    struct
    {
        int32_t Idx;
        struct FVector4 col;
    } Parms{};
    Parms.Idx = (int32_t)Idx;
    Parms.col = (struct FVector4)col;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UGPToolGUI::PushStyleColor(int32_t Idx, int32_t col)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPToolGUI", "PushStyleColor");
    struct
    {
        int32_t Idx;
        int32_t col;
    } Parms{};
    Parms.Idx = (int32_t)Idx;
    Parms.col = (int32_t)col;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UGPToolGUI::PushItemWidth(float item_width)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPToolGUI", "PushItemWidth");
    struct
    {
        float item_width;
    } Parms{};
    Parms.item_width = (float)item_width;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UGPToolGUI::PushIDWithStrIDBeginEnd(struct FString str_id_begin, struct FString str_id_end)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPToolGUI", "PushIDWithStrIDBeginEnd");
    struct
    {
        struct FString str_id_begin;
        struct FString str_id_end;
    } Parms{};
    Parms.str_id_begin = (struct FString)str_id_begin;
    Parms.str_id_end = (struct FString)str_id_end;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UGPToolGUI::PushIDWithStrID(struct FString str_id)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPToolGUI", "PushIDWithStrID");
    struct
    {
        struct FString str_id;
    } Parms{};
    Parms.str_id = (struct FString)str_id;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UGPToolGUI::PushIDWithIntID(int32_t int_id)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPToolGUI", "PushIDWithIntID");
    struct
    {
        int32_t int_id;
    } Parms{};
    Parms.int_id = (int32_t)int_id;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UGPToolGUI::PushClipRect(struct FVector2D clip_rect_min, struct FVector2D clip_rect_max, uint8_t intersect_with_current_clip_rect)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPToolGUI", "PushClipRect");
    struct
    {
        struct FVector2D clip_rect_min;
        struct FVector2D clip_rect_max;
        uint8_t intersect_with_current_clip_rect;
    } Parms{};
    Parms.clip_rect_min = (struct FVector2D)clip_rect_min;
    Parms.clip_rect_max = (struct FVector2D)clip_rect_max;
    Parms.intersect_with_current_clip_rect = (uint8_t)intersect_with_current_clip_rect;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UGPToolGUI::PushButtonRepeat(uint8_t repeat)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPToolGUI", "PushButtonRepeat");
    struct
    {
        uint8_t repeat;
    } Parms{};
    Parms.repeat = (uint8_t)repeat;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UGPToolGUI::PushAllowKeyboardFocus(uint8_t allow_keyboard_focus)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPToolGUI", "PushAllowKeyboardFocus");
    struct
    {
        uint8_t allow_keyboard_focus;
    } Parms{};
    Parms.allow_keyboard_focus = (uint8_t)allow_keyboard_focus;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UGPToolGUI::ProgressBarEx(float Fraction, struct FVector2D size_arg, struct FString Overlay)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPToolGUI", "ProgressBarEx");
    struct
    {
        float Fraction;
        struct FVector2D size_arg;
        struct FString Overlay;
    } Parms{};
    Parms.Fraction = (float)Fraction;
    Parms.size_arg = (struct FVector2D)size_arg;
    Parms.Overlay = (struct FString)Overlay;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UGPToolGUI::ProgressBar(float Fraction)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPToolGUI", "ProgressBar");
    struct
    {
        float Fraction;
    } Parms{};
    Parms.Fraction = (float)Fraction;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UGPToolGUI::PopTextWrapPos()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPToolGUI", "PopTextWrapPos");
    struct
    {
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UGPToolGUI::PopStyleVarEx(int32_t Count)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPToolGUI", "PopStyleVarEx");
    struct
    {
        int32_t Count;
    } Parms{};
    Parms.Count = (int32_t)Count;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UGPToolGUI::PopStyleVar()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPToolGUI", "PopStyleVar");
    struct
    {
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UGPToolGUI::PopStyleColorEx(int32_t Count)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPToolGUI", "PopStyleColorEx");
    struct
    {
        int32_t Count;
    } Parms{};
    Parms.Count = (int32_t)Count;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UGPToolGUI::PopStyleColor()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPToolGUI", "PopStyleColor");
    struct
    {
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UGPToolGUI::PopItemWidth()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPToolGUI", "PopItemWidth");
    struct
    {
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UGPToolGUI::PopID()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPToolGUI", "PopID");
    struct
    {
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UGPToolGUI::PopClipRect()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPToolGUI", "PopClipRect");
    struct
    {
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UGPToolGUI::PopButtonRepeat()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPToolGUI", "PopButtonRepeat");
    struct
    {
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UGPToolGUI::PopAllowKeyboardFocus()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPToolGUI", "PopAllowKeyboardFocus");
    struct
    {
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UGPToolGUI::PlotLinesEx(struct FString Label, float& Values, int32_t values_count, float scale_min, float scale_max, int32_t values_offset, struct FString overlay_text, struct FVector2D graph_size, int32_t stride)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPToolGUI", "PlotLinesEx");
    struct
    {
        struct FString Label;
        float Values;
        int32_t values_count;
        float scale_min;
        float scale_max;
        int32_t values_offset;
        struct FString overlay_text;
        struct FVector2D graph_size;
        int32_t stride;
    } Parms{};
    Parms.Label = (struct FString)Label;
    Parms.values_count = (int32_t)values_count;
    Parms.scale_min = (float)scale_min;
    Parms.scale_max = (float)scale_max;
    Parms.values_offset = (int32_t)values_offset;
    Parms.overlay_text = (struct FString)overlay_text;
    Parms.graph_size = (struct FVector2D)graph_size;
    Parms.stride = (int32_t)stride;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    Values = Parms.Values;
}

void UGPToolGUI::PlotLines(struct FString Label, float& Values, int32_t values_count)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPToolGUI", "PlotLines");
    struct
    {
        struct FString Label;
        float Values;
        int32_t values_count;
    } Parms{};
    Parms.Label = (struct FString)Label;
    Parms.values_count = (int32_t)values_count;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    Values = Parms.Values;
}

void UGPToolGUI::PlotHistogramEx(struct FString Label, float& Values, int32_t values_count, float scale_min, float scale_max, int32_t values_offset, struct FString overlay_text, struct FVector2D graph_size, int32_t stride)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPToolGUI", "PlotHistogramEx");
    struct
    {
        struct FString Label;
        float Values;
        int32_t values_count;
        float scale_min;
        float scale_max;
        int32_t values_offset;
        struct FString overlay_text;
        struct FVector2D graph_size;
        int32_t stride;
    } Parms{};
    Parms.Label = (struct FString)Label;
    Parms.values_count = (int32_t)values_count;
    Parms.scale_min = (float)scale_min;
    Parms.scale_max = (float)scale_max;
    Parms.values_offset = (int32_t)values_offset;
    Parms.overlay_text = (struct FString)overlay_text;
    Parms.graph_size = (struct FVector2D)graph_size;
    Parms.stride = (int32_t)stride;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    Values = Parms.Values;
}

void UGPToolGUI::PlotHistogram(struct FString Label, float& Values, int32_t values_count)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPToolGUI", "PlotHistogram");
    struct
    {
        struct FString Label;
        float Values;
        int32_t values_count;
    } Parms{};
    Parms.Label = (struct FString)Label;
    Parms.values_count = (int32_t)values_count;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    Values = Parms.Values;
}

uint8_t UGPToolGUI::OpenPopupOnItemClickEx(struct FString str_id, int32_t mouse_button)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPToolGUI", "OpenPopupOnItemClickEx");
    struct
    {
        struct FString str_id;
        int32_t mouse_button;
        uint8_t ReturnValue;
    } Parms{};
    Parms.str_id = (struct FString)str_id;
    Parms.mouse_button = (int32_t)mouse_button;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UGPToolGUI::OpenPopupOnItemClick()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPToolGUI", "OpenPopupOnItemClick");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UGPToolGUI::OpenPopup(struct FString str_id)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPToolGUI", "OpenPopup");
    struct
    {
        struct FString str_id;
    } Parms{};
    Parms.str_id = (struct FString)str_id;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UGPToolGUI::NextColumn()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPToolGUI", "NextColumn");
    struct
    {
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UGPToolGUI::NewLine()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPToolGUI", "NewLine");
    struct
    {
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

uint8_t UGPToolGUI::MenuItemWithPSelectedEx(struct FString Label, struct FString shortcut, uint8_t& p_selected, uint8_t Enabled)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPToolGUI", "MenuItemWithPSelectedEx");
    struct
    {
        struct FString Label;
        struct FString shortcut;
        uint8_t p_selected;
        uint8_t Enabled;
        uint8_t ReturnValue;
    } Parms{};
    Parms.Label = (struct FString)Label;
    Parms.shortcut = (struct FString)shortcut;
    Parms.Enabled = (uint8_t)Enabled;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    p_selected = Parms.p_selected;
    return Parms.ReturnValue;
}

uint8_t UGPToolGUI::MenuItemWithPSelected(struct FString Label, struct FString shortcut, uint8_t& p_selected)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPToolGUI", "MenuItemWithPSelected");
    struct
    {
        struct FString Label;
        struct FString shortcut;
        uint8_t p_selected;
        uint8_t ReturnValue;
    } Parms{};
    Parms.Label = (struct FString)Label;
    Parms.shortcut = (struct FString)shortcut;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    p_selected = Parms.p_selected;
    return Parms.ReturnValue;
}

uint8_t UGPToolGUI::MenuItemEx(struct FString Label, struct FString shortcut, uint8_t Selected, uint8_t Enabled)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPToolGUI", "MenuItemEx");
    struct
    {
        struct FString Label;
        struct FString shortcut;
        uint8_t Selected;
        uint8_t Enabled;
        uint8_t ReturnValue;
    } Parms{};
    Parms.Label = (struct FString)Label;
    Parms.shortcut = (struct FString)shortcut;
    Parms.Selected = (uint8_t)Selected;
    Parms.Enabled = (uint8_t)Enabled;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UGPToolGUI::MenuItem(struct FString Label)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPToolGUI", "MenuItem");
    struct
    {
        struct FString Label;
        uint8_t ReturnValue;
    } Parms{};
    Parms.Label = (struct FString)Label;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UGPToolGUI::LabelText(struct FString Label, struct FString fmt)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPToolGUI", "LabelText");
    struct
    {
        struct FString Label;
        struct FString fmt;
    } Parms{};
    Parms.Label = (struct FString)Label;
    Parms.fmt = (struct FString)fmt;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

uint8_t UGPToolGUI::IsWindowHoveredEx(int32_t Flags)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPToolGUI", "IsWindowHoveredEx");
    struct
    {
        int32_t Flags;
        uint8_t ReturnValue;
    } Parms{};
    Parms.Flags = (int32_t)Flags;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UGPToolGUI::IsWindowHovered()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPToolGUI", "IsWindowHovered");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UGPToolGUI::IsWindowFocusedEx(int32_t Flags)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPToolGUI", "IsWindowFocusedEx");
    struct
    {
        int32_t Flags;
        uint8_t ReturnValue;
    } Parms{};
    Parms.Flags = (int32_t)Flags;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UGPToolGUI::IsWindowFocused()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPToolGUI", "IsWindowFocused");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UGPToolGUI::IsWindowCollapsed()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPToolGUI", "IsWindowCollapsed");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UGPToolGUI::IsWindowAppearing()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPToolGUI", "IsWindowAppearing");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UGPToolGUI::IsRectVisibleTwoPar(struct FVector2D rect_min, struct FVector2D rect_max)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPToolGUI", "IsRectVisibleTwoPar");
    struct
    {
        struct FVector2D rect_min;
        struct FVector2D rect_max;
        uint8_t ReturnValue;
    } Parms{};
    Parms.rect_min = (struct FVector2D)rect_min;
    Parms.rect_max = (struct FVector2D)rect_max;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UGPToolGUI::IsRectVisible(struct FVector2D size)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPToolGUI", "IsRectVisible");
    struct
    {
        struct FVector2D size;
        uint8_t ReturnValue;
    } Parms{};
    Parms.size = (struct FVector2D)size;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UGPToolGUI::IsPopupOpen(struct FString str_id)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPToolGUI", "IsPopupOpen");
    struct
    {
        struct FString str_id;
        uint8_t ReturnValue;
    } Parms{};
    Parms.str_id = (struct FString)str_id;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UGPToolGUI::IsMouseReleased(int32_t Button)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPToolGUI", "IsMouseReleased");
    struct
    {
        int32_t Button;
        uint8_t ReturnValue;
    } Parms{};
    Parms.Button = (int32_t)Button;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UGPToolGUI::IsMousePosValid()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPToolGUI", "IsMousePosValid");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UGPToolGUI::IsMouseHoveringRectEx(struct FVector2D r_min, struct FVector2D r_max, uint8_t clip)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPToolGUI", "IsMouseHoveringRectEx");
    struct
    {
        struct FVector2D r_min;
        struct FVector2D r_max;
        uint8_t clip;
        uint8_t ReturnValue;
    } Parms{};
    Parms.r_min = (struct FVector2D)r_min;
    Parms.r_max = (struct FVector2D)r_max;
    Parms.clip = (uint8_t)clip;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UGPToolGUI::IsMouseHoveringRect(struct FVector2D r_min, struct FVector2D r_max)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPToolGUI", "IsMouseHoveringRect");
    struct
    {
        struct FVector2D r_min;
        struct FVector2D r_max;
        uint8_t ReturnValue;
    } Parms{};
    Parms.r_min = (struct FVector2D)r_min;
    Parms.r_max = (struct FVector2D)r_max;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UGPToolGUI::IsMouseDraggingEx(int32_t Button, float lock_threshold)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPToolGUI", "IsMouseDraggingEx");
    struct
    {
        int32_t Button;
        float lock_threshold;
        uint8_t ReturnValue;
    } Parms{};
    Parms.Button = (int32_t)Button;
    Parms.lock_threshold = (float)lock_threshold;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UGPToolGUI::IsMouseDragging()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPToolGUI", "IsMouseDragging");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UGPToolGUI::IsMouseDown(int32_t Button)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPToolGUI", "IsMouseDown");
    struct
    {
        int32_t Button;
        uint8_t ReturnValue;
    } Parms{};
    Parms.Button = (int32_t)Button;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UGPToolGUI::IsMouseDoubleClicked(int32_t Button)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPToolGUI", "IsMouseDoubleClicked");
    struct
    {
        int32_t Button;
        uint8_t ReturnValue;
    } Parms{};
    Parms.Button = (int32_t)Button;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UGPToolGUI::IsMouseClickedEx(int32_t Button, uint8_t repeat)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPToolGUI", "IsMouseClickedEx");
    struct
    {
        int32_t Button;
        uint8_t repeat;
        uint8_t ReturnValue;
    } Parms{};
    Parms.Button = (int32_t)Button;
    Parms.repeat = (uint8_t)repeat;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UGPToolGUI::IsMouseClicked(int32_t Button)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPToolGUI", "IsMouseClicked");
    struct
    {
        int32_t Button;
        uint8_t ReturnValue;
    } Parms{};
    Parms.Button = (int32_t)Button;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UGPToolGUI::IsKeyReleased(int32_t user_key_index)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPToolGUI", "IsKeyReleased");
    struct
    {
        int32_t user_key_index;
        uint8_t ReturnValue;
    } Parms{};
    Parms.user_key_index = (int32_t)user_key_index;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UGPToolGUI::IsKeyPressedEx(int32_t user_key_index, uint8_t repeat)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPToolGUI", "IsKeyPressedEx");
    struct
    {
        int32_t user_key_index;
        uint8_t repeat;
        uint8_t ReturnValue;
    } Parms{};
    Parms.user_key_index = (int32_t)user_key_index;
    Parms.repeat = (uint8_t)repeat;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UGPToolGUI::IsKeyPressed(int32_t user_key_index)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPToolGUI", "IsKeyPressed");
    struct
    {
        int32_t user_key_index;
        uint8_t ReturnValue;
    } Parms{};
    Parms.user_key_index = (int32_t)user_key_index;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UGPToolGUI::IsKeyDown(int32_t user_key_index)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPToolGUI", "IsKeyDown");
    struct
    {
        int32_t user_key_index;
        uint8_t ReturnValue;
    } Parms{};
    Parms.user_key_index = (int32_t)user_key_index;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UGPToolGUI::IsItemVisible()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPToolGUI", "IsItemVisible");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UGPToolGUI::IsItemToggledOpen()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPToolGUI", "IsItemToggledOpen");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UGPToolGUI::IsItemHoveredEx(int32_t Flags)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPToolGUI", "IsItemHoveredEx");
    struct
    {
        int32_t Flags;
        uint8_t ReturnValue;
    } Parms{};
    Parms.Flags = (int32_t)Flags;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UGPToolGUI::IsItemHovered()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPToolGUI", "IsItemHovered");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UGPToolGUI::IsItemFocused()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPToolGUI", "IsItemFocused");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UGPToolGUI::IsItemEdited()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPToolGUI", "IsItemEdited");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UGPToolGUI::IsItemDeactivatedAfterEdit()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPToolGUI", "IsItemDeactivatedAfterEdit");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UGPToolGUI::IsItemDeactivated()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPToolGUI", "IsItemDeactivated");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UGPToolGUI::IsItemClickedEx(int32_t mouse_button)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPToolGUI", "IsItemClickedEx");
    struct
    {
        int32_t mouse_button;
        uint8_t ReturnValue;
    } Parms{};
    Parms.mouse_button = (int32_t)mouse_button;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UGPToolGUI::IsItemClicked()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPToolGUI", "IsItemClicked");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UGPToolGUI::IsItemActive()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPToolGUI", "IsItemActive");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UGPToolGUI::IsItemActivated()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPToolGUI", "IsItemActivated");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UGPToolGUI::IsAnyMouseDown()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPToolGUI", "IsAnyMouseDown");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UGPToolGUI::IsAnyItemHovered()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPToolGUI", "IsAnyItemHovered");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UGPToolGUI::IsAnyItemFocused()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPToolGUI", "IsAnyItemFocused");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UGPToolGUI::IsAnyItemActive()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPToolGUI", "IsAnyItemActive");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UGPToolGUI::InvisibleButton(struct FString str_id, struct FVector2D size)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPToolGUI", "InvisibleButton");
    struct
    {
        struct FString str_id;
        struct FVector2D size;
        uint8_t ReturnValue;
    } Parms{};
    Parms.str_id = (struct FString)str_id;
    Parms.size = (struct FVector2D)size;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UGPToolGUI::InputVector3(struct FString Label, struct FVector& InOutVector)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPToolGUI", "InputVector3");
    struct
    {
        struct FString Label;
        struct FVector InOutVector;
        uint8_t ReturnValue;
    } Parms{};
    Parms.Label = (struct FString)Label;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    InOutVector = Parms.InOutVector;
    return Parms.ReturnValue;
}

uint8_t UGPToolGUI::InputTextWithHint(struct FString Label, struct FString Hint, struct FString& InOutResult)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPToolGUI", "InputTextWithHint");
    struct
    {
        struct FString Label;
        struct FString Hint;
        struct FString InOutResult;
        uint8_t ReturnValue;
    } Parms{};
    Parms.Label = (struct FString)Label;
    Parms.Hint = (struct FString)Hint;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    InOutResult = Parms.InOutResult;
    return Parms.ReturnValue;
}

uint8_t UGPToolGUI::InputTextMultilineEx(struct FString Label, struct FString& InOutResult, struct FVector2D size, int32_t Flags)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPToolGUI", "InputTextMultilineEx");
    struct
    {
        struct FString Label;
        struct FString InOutResult;
        struct FVector2D size;
        int32_t Flags;
        uint8_t ReturnValue;
    } Parms{};
    Parms.Label = (struct FString)Label;
    Parms.size = (struct FVector2D)size;
    Parms.Flags = (int32_t)Flags;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    InOutResult = Parms.InOutResult;
    return Parms.ReturnValue;
}

uint8_t UGPToolGUI::InputTextMultiline(struct FString Label, struct FString& InOutResult)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPToolGUI", "InputTextMultiline");
    struct
    {
        struct FString Label;
        struct FString InOutResult;
        uint8_t ReturnValue;
    } Parms{};
    Parms.Label = (struct FString)Label;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    InOutResult = Parms.InOutResult;
    return Parms.ReturnValue;
}

uint8_t UGPToolGUI::InputText(struct FString Label, struct FString& InOutResult)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPToolGUI", "InputText");
    struct
    {
        struct FString Label;
        struct FString InOutResult;
        uint8_t ReturnValue;
    } Parms{};
    Parms.Label = (struct FString)Label;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    InOutResult = Parms.InOutResult;
    return Parms.ReturnValue;
}

uint8_t UGPToolGUI::InputIntEx(struct FString Label, int32_t& V, int32_t Step, int32_t step_fast, int32_t Flags)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPToolGUI", "InputIntEx");
    struct
    {
        struct FString Label;
        int32_t V;
        int32_t Step;
        int32_t step_fast;
        int32_t Flags;
        uint8_t ReturnValue;
    } Parms{};
    Parms.Label = (struct FString)Label;
    Parms.Step = (int32_t)Step;
    Parms.step_fast = (int32_t)step_fast;
    Parms.Flags = (int32_t)Flags;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    V = Parms.V;
    return Parms.ReturnValue;
}

uint8_t UGPToolGUI::InputInt4Ex(struct FString Label, int32_t& v1, int32_t& v2, int32_t& v3, int32_t& v4, int32_t Flags)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPToolGUI", "InputInt4Ex");
    struct
    {
        struct FString Label;
        int32_t v1;
        int32_t v2;
        int32_t v3;
        int32_t v4;
        int32_t Flags;
        uint8_t ReturnValue;
    } Parms{};
    Parms.Label = (struct FString)Label;
    Parms.Flags = (int32_t)Flags;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    v1 = Parms.v1;
    v2 = Parms.v2;
    v3 = Parms.v3;
    v4 = Parms.v4;
    return Parms.ReturnValue;
}

uint8_t UGPToolGUI::InputInt4(struct FString Label, int32_t& v1, int32_t& v2, int32_t& v3, int32_t& v4)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPToolGUI", "InputInt4");
    struct
    {
        struct FString Label;
        int32_t v1;
        int32_t v2;
        int32_t v3;
        int32_t v4;
        uint8_t ReturnValue;
    } Parms{};
    Parms.Label = (struct FString)Label;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    v1 = Parms.v1;
    v2 = Parms.v2;
    v3 = Parms.v3;
    v4 = Parms.v4;
    return Parms.ReturnValue;
}

uint8_t UGPToolGUI::InputInt3Ex(struct FString Label, int32_t& v1, int32_t& v2, int32_t& v3, int32_t Flags)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPToolGUI", "InputInt3Ex");
    struct
    {
        struct FString Label;
        int32_t v1;
        int32_t v2;
        int32_t v3;
        int32_t Flags;
        uint8_t ReturnValue;
    } Parms{};
    Parms.Label = (struct FString)Label;
    Parms.Flags = (int32_t)Flags;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    v1 = Parms.v1;
    v2 = Parms.v2;
    v3 = Parms.v3;
    return Parms.ReturnValue;
}

uint8_t UGPToolGUI::InputInt3(struct FString Label, int32_t& v1, int32_t& v2, int32_t& v3)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPToolGUI", "InputInt3");
    struct
    {
        struct FString Label;
        int32_t v1;
        int32_t v2;
        int32_t v3;
        uint8_t ReturnValue;
    } Parms{};
    Parms.Label = (struct FString)Label;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    v1 = Parms.v1;
    v2 = Parms.v2;
    v3 = Parms.v3;
    return Parms.ReturnValue;
}

uint8_t UGPToolGUI::InputInt2Ex(struct FString Label, int32_t& v1, int32_t& v2, int32_t Flags)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPToolGUI", "InputInt2Ex");
    struct
    {
        struct FString Label;
        int32_t v1;
        int32_t v2;
        int32_t Flags;
        uint8_t ReturnValue;
    } Parms{};
    Parms.Label = (struct FString)Label;
    Parms.Flags = (int32_t)Flags;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    v1 = Parms.v1;
    v2 = Parms.v2;
    return Parms.ReturnValue;
}

uint8_t UGPToolGUI::InputInt2(struct FString Label, int32_t& v1, int32_t& v2)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPToolGUI", "InputInt2");
    struct
    {
        struct FString Label;
        int32_t v1;
        int32_t v2;
        uint8_t ReturnValue;
    } Parms{};
    Parms.Label = (struct FString)Label;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    v1 = Parms.v1;
    v2 = Parms.v2;
    return Parms.ReturnValue;
}

uint8_t UGPToolGUI::InputInt(struct FString Label, int32_t& V)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPToolGUI", "InputInt");
    struct
    {
        struct FString Label;
        int32_t V;
        uint8_t ReturnValue;
    } Parms{};
    Parms.Label = (struct FString)Label;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    V = Parms.V;
    return Parms.ReturnValue;
}

uint8_t UGPToolGUI::InputFloatEx(struct FString Label, float& V, float Step, float step_fast, struct FString Format, int32_t Flags)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPToolGUI", "InputFloatEx");
    struct
    {
        struct FString Label;
        float V;
        float Step;
        float step_fast;
        struct FString Format;
        int32_t Flags;
        uint8_t ReturnValue;
    } Parms{};
    Parms.Label = (struct FString)Label;
    Parms.Step = (float)Step;
    Parms.step_fast = (float)step_fast;
    Parms.Format = (struct FString)Format;
    Parms.Flags = (int32_t)Flags;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    V = Parms.V;
    return Parms.ReturnValue;
}

uint8_t UGPToolGUI::InputFloat4Ex(struct FString Label, float& v1, float& v2, float& v3, float& v4, struct FString Format, int32_t Flags)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPToolGUI", "InputFloat4Ex");
    struct
    {
        struct FString Label;
        float v1;
        float v2;
        float v3;
        float v4;
        struct FString Format;
        int32_t Flags;
        uint8_t ReturnValue;
    } Parms{};
    Parms.Label = (struct FString)Label;
    Parms.Format = (struct FString)Format;
    Parms.Flags = (int32_t)Flags;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    v1 = Parms.v1;
    v2 = Parms.v2;
    v3 = Parms.v3;
    v4 = Parms.v4;
    return Parms.ReturnValue;
}

uint8_t UGPToolGUI::InputFloat4(struct FString Label, float& v1, float& v2, float& v3, float& v4)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPToolGUI", "InputFloat4");
    struct
    {
        struct FString Label;
        float v1;
        float v2;
        float v3;
        float v4;
        uint8_t ReturnValue;
    } Parms{};
    Parms.Label = (struct FString)Label;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    v1 = Parms.v1;
    v2 = Parms.v2;
    v3 = Parms.v3;
    v4 = Parms.v4;
    return Parms.ReturnValue;
}

uint8_t UGPToolGUI::InputFloat3Ex(struct FString Label, float& v1, float& v2, float& v3, struct FString Format, int32_t Flags)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPToolGUI", "InputFloat3Ex");
    struct
    {
        struct FString Label;
        float v1;
        float v2;
        float v3;
        struct FString Format;
        int32_t Flags;
        uint8_t ReturnValue;
    } Parms{};
    Parms.Label = (struct FString)Label;
    Parms.Format = (struct FString)Format;
    Parms.Flags = (int32_t)Flags;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    v1 = Parms.v1;
    v2 = Parms.v2;
    v3 = Parms.v3;
    return Parms.ReturnValue;
}

uint8_t UGPToolGUI::InputFloat3(struct FString Label, float& v1, float& v2, float& v3)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPToolGUI", "InputFloat3");
    struct
    {
        struct FString Label;
        float v1;
        float v2;
        float v3;
        uint8_t ReturnValue;
    } Parms{};
    Parms.Label = (struct FString)Label;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    v1 = Parms.v1;
    v2 = Parms.v2;
    v3 = Parms.v3;
    return Parms.ReturnValue;
}

uint8_t UGPToolGUI::InputFloat2Ex(struct FString Label, float& v1, float& v2, struct FString Format, int32_t Flags)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPToolGUI", "InputFloat2Ex");
    struct
    {
        struct FString Label;
        float v1;
        float v2;
        struct FString Format;
        int32_t Flags;
        uint8_t ReturnValue;
    } Parms{};
    Parms.Label = (struct FString)Label;
    Parms.Format = (struct FString)Format;
    Parms.Flags = (int32_t)Flags;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    v1 = Parms.v1;
    v2 = Parms.v2;
    return Parms.ReturnValue;
}

uint8_t UGPToolGUI::InputFloat2(struct FString Label, float& v1, float& v2)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPToolGUI", "InputFloat2");
    struct
    {
        struct FString Label;
        float v1;
        float v2;
        uint8_t ReturnValue;
    } Parms{};
    Parms.Label = (struct FString)Label;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    v1 = Parms.v1;
    v2 = Parms.v2;
    return Parms.ReturnValue;
}

uint8_t UGPToolGUI::InputFloat(struct FString Label, float& V)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPToolGUI", "InputFloat");
    struct
    {
        struct FString Label;
        float V;
        uint8_t ReturnValue;
    } Parms{};
    Parms.Label = (struct FString)Label;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    V = Parms.V;
    return Parms.ReturnValue;
}

void UGPToolGUI::IndentEx(float indent_w)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPToolGUI", "IndentEx");
    struct
    {
        float indent_w;
    } Parms{};
    Parms.indent_w = (float)indent_w;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UGPToolGUI::Indent()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPToolGUI", "Indent");
    struct
    {
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

float UGPToolGUI::GetWindowWidth()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPToolGUI", "GetWindowWidth");
    struct
    {
        float ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FVector2D UGPToolGUI::GetWindowSize()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPToolGUI", "GetWindowSize");
    struct
    {
        struct FVector2D ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FVector2D UGPToolGUI::GetWindowPos()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPToolGUI", "GetWindowPos");
    struct
    {
        struct FVector2D ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UGPToolGUI::GetWindowHeight()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPToolGUI", "GetWindowHeight");
    struct
    {
        float ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UGPToolGUI::GetWindowContentRegionWidth()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPToolGUI", "GetWindowContentRegionWidth");
    struct
    {
        float ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FVector2D UGPToolGUI::GetWindowContentRegionMin()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPToolGUI", "GetWindowContentRegionMin");
    struct
    {
        struct FVector2D ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FVector2D UGPToolGUI::GetWindowContentRegionMax()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPToolGUI", "GetWindowContentRegionMax");
    struct
    {
        struct FVector2D ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UGPToolGUI::GetTreeNodeToLabelSpacing()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPToolGUI", "GetTreeNodeToLabelSpacing");
    struct
    {
        float ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UGPToolGUI::GetTime()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPToolGUI", "GetTime");
    struct
    {
        float ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UGPToolGUI::GetTextLineHeightWithSpacing()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPToolGUI", "GetTextLineHeightWithSpacing");
    struct
    {
        float ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UGPToolGUI::GetTextLineHeight()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPToolGUI", "GetTextLineHeight");
    struct
    {
        float ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FVector4 UGPToolGUI::GetStyleColorVec4(int32_t Idx)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPToolGUI", "GetStyleColorVec4");
    struct
    {
        int32_t Idx;
        struct FVector4 ReturnValue;
    } Parms{};
    Parms.Idx = (int32_t)Idx;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UGPToolGUI::GetStyleColorName(int32_t Idx)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPToolGUI", "GetStyleColorName");
    struct
    {
        int32_t Idx;
        struct FString ReturnValue;
    } Parms{};
    Parms.Idx = (int32_t)Idx;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UGPToolGUI::GetScrollY()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPToolGUI", "GetScrollY");
    struct
    {
        float ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UGPToolGUI::GetScrollX()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPToolGUI", "GetScrollX");
    struct
    {
        float ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UGPToolGUI::GetScrollMaxY()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPToolGUI", "GetScrollMaxY");
    struct
    {
        float ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UGPToolGUI::GetScrollMaxX()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPToolGUI", "GetScrollMaxX");
    struct
    {
        float ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FVector2D UGPToolGUI::GetMousePosOnOpeningCurrentPopup()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPToolGUI", "GetMousePosOnOpeningCurrentPopup");
    struct
    {
        struct FVector2D ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FVector2D UGPToolGUI::GetMousePos()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPToolGUI", "GetMousePos");
    struct
    {
        struct FVector2D ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FVector2D UGPToolGUI::GetMouseDragDeltaEx(int32_t Button, float lock_threshold)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPToolGUI", "GetMouseDragDeltaEx");
    struct
    {
        int32_t Button;
        float lock_threshold;
        struct FVector2D ReturnValue;
    } Parms{};
    Parms.Button = (int32_t)Button;
    Parms.lock_threshold = (float)lock_threshold;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FVector2D UGPToolGUI::GetMouseDragDelta()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPToolGUI", "GetMouseDragDelta");
    struct
    {
        struct FVector2D ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UGPToolGUI::GetMouseCursor()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPToolGUI", "GetMouseCursor");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UGPToolGUI::GetKeyPressedAmount(int32_t key_index, float repeat_delay, float Rate)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPToolGUI", "GetKeyPressedAmount");
    struct
    {
        int32_t key_index;
        float repeat_delay;
        float Rate;
        int32_t ReturnValue;
    } Parms{};
    Parms.key_index = (int32_t)key_index;
    Parms.repeat_delay = (float)repeat_delay;
    Parms.Rate = (float)Rate;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UGPToolGUI::GetKeyIndex(int32_t imgui_key)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPToolGUI", "GetKeyIndex");
    struct
    {
        int32_t imgui_key;
        int32_t ReturnValue;
    } Parms{};
    Parms.imgui_key = (int32_t)imgui_key;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FVector2D UGPToolGUI::GetItemRectSize()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPToolGUI", "GetItemRectSize");
    struct
    {
        struct FVector2D ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FVector2D UGPToolGUI::GetItemRectMin()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPToolGUI", "GetItemRectMin");
    struct
    {
        struct FVector2D ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FVector2D UGPToolGUI::GetItemRectMax()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPToolGUI", "GetItemRectMax");
    struct
    {
        struct FVector2D ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UGPToolGUI::GetIDWithStrIDBeginEnd(struct FString str_id_begin, struct FString str_id_end)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPToolGUI", "GetIDWithStrIDBeginEnd");
    struct
    {
        struct FString str_id_begin;
        struct FString str_id_end;
        int32_t ReturnValue;
    } Parms{};
    Parms.str_id_begin = (struct FString)str_id_begin;
    Parms.str_id_end = (struct FString)str_id_end;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UGPToolGUI::GetIDWithStrID(struct FString str_id)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPToolGUI", "GetIDWithStrID");
    struct
    {
        struct FString str_id;
        int32_t ReturnValue;
    } Parms{};
    Parms.str_id = (struct FString)str_id;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UGPToolGUI::GetFrameHeightWithSpacing()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPToolGUI", "GetFrameHeightWithSpacing");
    struct
    {
        float ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UGPToolGUI::GetFrameHeight()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPToolGUI", "GetFrameHeight");
    struct
    {
        float ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UGPToolGUI::GetFrameCount()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPToolGUI", "GetFrameCount");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FVector2D UGPToolGUI::GetFontTexUvWhitePixel()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPToolGUI", "GetFontTexUvWhitePixel");
    struct
    {
        struct FVector2D ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UGPToolGUI::GetFontSize()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPToolGUI", "GetFontSize");
    struct
    {
        float ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FVector2D UGPToolGUI::GetCursorStartPos()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPToolGUI", "GetCursorStartPos");
    struct
    {
        struct FVector2D ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FVector2D UGPToolGUI::GetCursorScreenPos()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPToolGUI", "GetCursorScreenPos");
    struct
    {
        struct FVector2D ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UGPToolGUI::GetCursorPosY()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPToolGUI", "GetCursorPosY");
    struct
    {
        float ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UGPToolGUI::GetCursorPosX()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPToolGUI", "GetCursorPosX");
    struct
    {
        float ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FVector2D UGPToolGUI::GetCursorPos()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPToolGUI", "GetCursorPos");
    struct
    {
        struct FVector2D ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FVector2D UGPToolGUI::GetContentRegionMax()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPToolGUI", "GetContentRegionMax");
    struct
    {
        struct FVector2D ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FVector2D UGPToolGUI::GetContentRegionAvail()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPToolGUI", "GetContentRegionAvail");
    struct
    {
        struct FVector2D ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UGPToolGUI::GetColumnWidthEx(int32_t column_index)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPToolGUI", "GetColumnWidthEx");
    struct
    {
        int32_t column_index;
        float ReturnValue;
    } Parms{};
    Parms.column_index = (int32_t)column_index;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UGPToolGUI::GetColumnWidth()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPToolGUI", "GetColumnWidth");
    struct
    {
        float ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UGPToolGUI::GetColumnsCount()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPToolGUI", "GetColumnsCount");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UGPToolGUI::GetColumnOffsetEx(int32_t column_index)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPToolGUI", "GetColumnOffsetEx");
    struct
    {
        int32_t column_index;
        float ReturnValue;
    } Parms{};
    Parms.column_index = (int32_t)column_index;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UGPToolGUI::GetColumnOffset()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPToolGUI", "GetColumnOffset");
    struct
    {
        float ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UGPToolGUI::GetColumnIndex()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPToolGUI", "GetColumnIndex");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UGPToolGUI::GetColorU32WithFVector4(const struct FVector4& col)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPToolGUI", "GetColorU32WithFVector4");
    struct
    {
        struct FVector4 col;
        int32_t ReturnValue;
    } Parms{};
    Parms.col = (struct FVector4)col;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UGPToolGUI::GetColorU32WithCol(int32_t col)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPToolGUI", "GetColorU32WithCol");
    struct
    {
        int32_t col;
        int32_t ReturnValue;
    } Parms{};
    Parms.col = (int32_t)col;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UGPToolGUI::GetColorU32Ex(int32_t Idx, float alpha_mul)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPToolGUI", "GetColorU32Ex");
    struct
    {
        int32_t Idx;
        float alpha_mul;
        int32_t ReturnValue;
    } Parms{};
    Parms.Idx = (int32_t)Idx;
    Parms.alpha_mul = (float)alpha_mul;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UGPToolGUI::GetColorU32(int32_t Idx)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPToolGUI", "GetColorU32");
    struct
    {
        int32_t Idx;
        int32_t ReturnValue;
    } Parms{};
    Parms.Idx = (int32_t)Idx;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UGPToolGUI::GetClipboardText()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPToolGUI", "GetClipboardText");
    struct
    {
        struct FString ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UGPToolGUI::EndTabItem()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPToolGUI", "EndTabItem");
    struct
    {
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UGPToolGUI::EndTabBar()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPToolGUI", "EndTabBar");
    struct
    {
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UGPToolGUI::EndPopup()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPToolGUI", "EndPopup");
    struct
    {
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UGPToolGUI::EndMenuBar()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPToolGUI", "EndMenuBar");
    struct
    {
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UGPToolGUI::EndMenu()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPToolGUI", "EndMenu");
    struct
    {
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UGPToolGUI::EndMainMenuBar()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPToolGUI", "EndMainMenuBar");
    struct
    {
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UGPToolGUI::EndGroup()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPToolGUI", "EndGroup");
    struct
    {
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UGPToolGUI::EndCombo()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPToolGUI", "EndCombo");
    struct
    {
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UGPToolGUI::EndChildFrame()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPToolGUI", "EndChildFrame");
    struct
    {
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UGPToolGUI::EndChild()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPToolGUI", "EndChild");
    struct
    {
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UGPToolGUI::End()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPToolGUI", "End");
    struct
    {
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UGPToolGUI::Dummy(struct FVector2D size)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPToolGUI", "Dummy");
    struct
    {
        struct FVector2D size;
    } Parms{};
    Parms.size = (struct FVector2D)size;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

uint8_t UGPToolGUI::DragIntRange2Ex(struct FString Label, int32_t& v_current_min, int32_t& v_current_max, float v_speed, int32_t v_min, int32_t v_max, struct FString Format, struct FString format_max)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPToolGUI", "DragIntRange2Ex");
    struct
    {
        struct FString Label;
        int32_t v_current_min;
        int32_t v_current_max;
        float v_speed;
        int32_t v_min;
        int32_t v_max;
        struct FString Format;
        struct FString format_max;
        uint8_t ReturnValue;
    } Parms{};
    Parms.Label = (struct FString)Label;
    Parms.v_speed = (float)v_speed;
    Parms.v_min = (int32_t)v_min;
    Parms.v_max = (int32_t)v_max;
    Parms.Format = (struct FString)Format;
    Parms.format_max = (struct FString)format_max;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    v_current_min = Parms.v_current_min;
    v_current_max = Parms.v_current_max;
    return Parms.ReturnValue;
}

uint8_t UGPToolGUI::DragIntRange2(struct FString Label, int32_t& v_current_min, int32_t& v_current_max)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPToolGUI", "DragIntRange2");
    struct
    {
        struct FString Label;
        int32_t v_current_min;
        int32_t v_current_max;
        uint8_t ReturnValue;
    } Parms{};
    Parms.Label = (struct FString)Label;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    v_current_min = Parms.v_current_min;
    v_current_max = Parms.v_current_max;
    return Parms.ReturnValue;
}

uint8_t UGPToolGUI::DragIntEx(struct FString Label, int32_t& V, float v_speed, int32_t v_min, int32_t v_max, struct FString Format)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPToolGUI", "DragIntEx");
    struct
    {
        struct FString Label;
        int32_t V;
        float v_speed;
        int32_t v_min;
        int32_t v_max;
        struct FString Format;
        uint8_t ReturnValue;
    } Parms{};
    Parms.Label = (struct FString)Label;
    Parms.v_speed = (float)v_speed;
    Parms.v_min = (int32_t)v_min;
    Parms.v_max = (int32_t)v_max;
    Parms.Format = (struct FString)Format;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    V = Parms.V;
    return Parms.ReturnValue;
}

uint8_t UGPToolGUI::DragInt(struct FString Label, int32_t& V)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPToolGUI", "DragInt");
    struct
    {
        struct FString Label;
        int32_t V;
        uint8_t ReturnValue;
    } Parms{};
    Parms.Label = (struct FString)Label;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    V = Parms.V;
    return Parms.ReturnValue;
}

uint8_t UGPToolGUI::DragFloatRange2Ex(struct FString Label, float& v_current_min, float& v_current_max, float v_speed, float v_min, float v_max, struct FString Format, struct FString format_max, float Power)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPToolGUI", "DragFloatRange2Ex");
    struct
    {
        struct FString Label;
        float v_current_min;
        float v_current_max;
        float v_speed;
        float v_min;
        float v_max;
        struct FString Format;
        struct FString format_max;
        float Power;
        uint8_t ReturnValue;
    } Parms{};
    Parms.Label = (struct FString)Label;
    Parms.v_speed = (float)v_speed;
    Parms.v_min = (float)v_min;
    Parms.v_max = (float)v_max;
    Parms.Format = (struct FString)Format;
    Parms.format_max = (struct FString)format_max;
    Parms.Power = (float)Power;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    v_current_min = Parms.v_current_min;
    v_current_max = Parms.v_current_max;
    return Parms.ReturnValue;
}

uint8_t UGPToolGUI::DragFloatRange2(struct FString Label, float& v_current_min, float& v_current_max)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPToolGUI", "DragFloatRange2");
    struct
    {
        struct FString Label;
        float v_current_min;
        float v_current_max;
        uint8_t ReturnValue;
    } Parms{};
    Parms.Label = (struct FString)Label;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    v_current_min = Parms.v_current_min;
    v_current_max = Parms.v_current_max;
    return Parms.ReturnValue;
}

uint8_t UGPToolGUI::DragFloatEx(struct FString Label, float& V, float v_speed, float v_min, float v_max, struct FString Format, float Power)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPToolGUI", "DragFloatEx");
    struct
    {
        struct FString Label;
        float V;
        float v_speed;
        float v_min;
        float v_max;
        struct FString Format;
        float Power;
        uint8_t ReturnValue;
    } Parms{};
    Parms.Label = (struct FString)Label;
    Parms.v_speed = (float)v_speed;
    Parms.v_min = (float)v_min;
    Parms.v_max = (float)v_max;
    Parms.Format = (struct FString)Format;
    Parms.Power = (float)Power;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    V = Parms.V;
    return Parms.ReturnValue;
}

uint8_t UGPToolGUI::DragFloat(struct FString Label, float& V)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPToolGUI", "DragFloat");
    struct
    {
        struct FString Label;
        float V;
        uint8_t ReturnValue;
    } Parms{};
    Parms.Label = (struct FString)Label;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    V = Parms.V;
    return Parms.ReturnValue;
}

uint8_t UGPToolGUI::ComboEx(struct FString Label, int32_t& current_item, struct FString items_separated_by_zeros, int32_t popup_max_height_in_items)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPToolGUI", "ComboEx");
    struct
    {
        struct FString Label;
        int32_t current_item;
        struct FString items_separated_by_zeros;
        int32_t popup_max_height_in_items;
        uint8_t ReturnValue;
    } Parms{};
    Parms.Label = (struct FString)Label;
    Parms.items_separated_by_zeros = (struct FString)items_separated_by_zeros;
    Parms.popup_max_height_in_items = (int32_t)popup_max_height_in_items;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    current_item = Parms.current_item;
    return Parms.ReturnValue;
}

uint8_t UGPToolGUI::Combo(struct FString Label, int32_t& current_item, struct FString items_separated_by_zeros)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPToolGUI", "Combo");
    struct
    {
        struct FString Label;
        int32_t current_item;
        struct FString items_separated_by_zeros;
        uint8_t ReturnValue;
    } Parms{};
    Parms.Label = (struct FString)Label;
    Parms.items_separated_by_zeros = (struct FString)items_separated_by_zeros;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    current_item = Parms.current_item;
    return Parms.ReturnValue;
}

void UGPToolGUI::ColumnsEx(int32_t Count, struct FString ID, uint8_t Border)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPToolGUI", "ColumnsEx");
    struct
    {
        int32_t Count;
        struct FString ID;
        uint8_t Border;
    } Parms{};
    Parms.Count = (int32_t)Count;
    Parms.ID = (struct FString)ID;
    Parms.Border = (uint8_t)Border;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UGPToolGUI::Columns(int32_t Count)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPToolGUI", "Columns");
    struct
    {
        int32_t Count;
    } Parms{};
    Parms.Count = (int32_t)Count;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

struct FVector4 UGPToolGUI::ColorConvertU32ToFloat4(int32_t In)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPToolGUI", "ColorConvertU32ToFloat4");
    struct
    {
        int32_t In;
        struct FVector4 ReturnValue;
    } Parms{};
    Parms.In = (int32_t)In;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UGPToolGUI::ColorConvertRGBtoHSV(float R, float G, float B, float& out_h, float& out_s, float& out_v)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPToolGUI", "ColorConvertRGBtoHSV");
    struct
    {
        float R;
        float G;
        float B;
        float out_h;
        float out_s;
        float out_v;
    } Parms{};
    Parms.R = (float)R;
    Parms.G = (float)G;
    Parms.B = (float)B;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    out_h = Parms.out_h;
    out_s = Parms.out_s;
    out_v = Parms.out_v;
}

void UGPToolGUI::ColorConvertHSVtoRGB(float H, float S, float V, float& out_r, float& out_g, float& out_b)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPToolGUI", "ColorConvertHSVtoRGB");
    struct
    {
        float H;
        float S;
        float V;
        float out_r;
        float out_g;
        float out_b;
    } Parms{};
    Parms.H = (float)H;
    Parms.S = (float)S;
    Parms.V = (float)V;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    out_r = Parms.out_r;
    out_g = Parms.out_g;
    out_b = Parms.out_b;
}

int32_t UGPToolGUI::ColorConvertFloat4ToU32(const struct FVector4& In)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPToolGUI", "ColorConvertFloat4ToU32");
    struct
    {
        struct FVector4 In;
        int32_t ReturnValue;
    } Parms{};
    Parms.In = (struct FVector4)In;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UGPToolGUI::CollapsingHeaderEx(struct FString Label, int32_t Flags)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPToolGUI", "CollapsingHeaderEx");
    struct
    {
        struct FString Label;
        int32_t Flags;
        uint8_t ReturnValue;
    } Parms{};
    Parms.Label = (struct FString)Label;
    Parms.Flags = (int32_t)Flags;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UGPToolGUI::CollapsingHeader(struct FString Label)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPToolGUI", "CollapsingHeader");
    struct
    {
        struct FString Label;
        uint8_t ReturnValue;
    } Parms{};
    Parms.Label = (struct FString)Label;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UGPToolGUI::CloseCurrentPopup()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPToolGUI", "CloseCurrentPopup");
    struct
    {
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

uint8_t UGPToolGUI::Checkbox(struct FString Label, uint8_t& V)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPToolGUI", "Checkbox");
    struct
    {
        struct FString Label;
        uint8_t V;
        uint8_t ReturnValue;
    } Parms{};
    Parms.Label = (struct FString)Label;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    V = Parms.V;
    return Parms.ReturnValue;
}

void UGPToolGUI::CaptureMouseFromAppEx(uint8_t want_capture_mouse_value)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPToolGUI", "CaptureMouseFromAppEx");
    struct
    {
        uint8_t want_capture_mouse_value;
    } Parms{};
    Parms.want_capture_mouse_value = (uint8_t)want_capture_mouse_value;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UGPToolGUI::CaptureMouseFromApp()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPToolGUI", "CaptureMouseFromApp");
    struct
    {
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UGPToolGUI::CaptureKeyboardFromAppEx(uint8_t want_capture_keyboard_value)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPToolGUI", "CaptureKeyboardFromAppEx");
    struct
    {
        uint8_t want_capture_keyboard_value;
    } Parms{};
    Parms.want_capture_keyboard_value = (uint8_t)want_capture_keyboard_value;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UGPToolGUI::CaptureKeyboardFromApp()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPToolGUI", "CaptureKeyboardFromApp");
    struct
    {
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

struct FVector2D UGPToolGUI::CalcTextSizeEx(struct FString Text, struct FString text_end, uint8_t hide_text_after_double_hash, float wrap_width)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPToolGUI", "CalcTextSizeEx");
    struct
    {
        struct FString Text;
        struct FString text_end;
        uint8_t hide_text_after_double_hash;
        float wrap_width;
        struct FVector2D ReturnValue;
    } Parms{};
    Parms.Text = (struct FString)Text;
    Parms.text_end = (struct FString)text_end;
    Parms.hide_text_after_double_hash = (uint8_t)hide_text_after_double_hash;
    Parms.wrap_width = (float)wrap_width;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FVector2D UGPToolGUI::CalcTextSize(struct FString Text)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPToolGUI", "CalcTextSize");
    struct
    {
        struct FString Text;
        struct FVector2D ReturnValue;
    } Parms{};
    Parms.Text = (struct FString)Text;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UGPToolGUI::CalcListClipping(int32_t items_count, float items_height, int32_t& out_items_display_start, int32_t& out_items_display_end)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPToolGUI", "CalcListClipping");
    struct
    {
        int32_t items_count;
        float items_height;
        int32_t out_items_display_start;
        int32_t out_items_display_end;
    } Parms{};
    Parms.items_count = (int32_t)items_count;
    Parms.items_height = (float)items_height;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    out_items_display_start = Parms.out_items_display_start;
    out_items_display_end = Parms.out_items_display_end;
}

float UGPToolGUI::CalcItemWidth()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPToolGUI", "CalcItemWidth");
    struct
    {
        float ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UGPToolGUI::ButtonEx(struct FString Label, int32_t Width, int32_t Height)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPToolGUI", "ButtonEx");
    struct
    {
        struct FString Label;
        int32_t Width;
        int32_t Height;
        uint8_t ReturnValue;
    } Parms{};
    Parms.Label = (struct FString)Label;
    Parms.Width = (int32_t)Width;
    Parms.Height = (int32_t)Height;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UGPToolGUI::Button(struct FString Label)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPToolGUI", "Button");
    struct
    {
        struct FString Label;
        uint8_t ReturnValue;
    } Parms{};
    Parms.Label = (struct FString)Label;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UGPToolGUI::BulletText(struct FString fmt)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPToolGUI", "BulletText");
    struct
    {
        struct FString fmt;
    } Parms{};
    Parms.fmt = (struct FString)fmt;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UGPToolGUI::Bullet()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPToolGUI", "Bullet");
    struct
    {
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

uint8_t UGPToolGUI::BeginTabItemEx(struct FString Label, uint8_t& p_open, int32_t Flags)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPToolGUI", "BeginTabItemEx");
    struct
    {
        struct FString Label;
        uint8_t p_open;
        int32_t Flags;
        uint8_t ReturnValue;
    } Parms{};
    Parms.Label = (struct FString)Label;
    Parms.Flags = (int32_t)Flags;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    p_open = Parms.p_open;
    return Parms.ReturnValue;
}

uint8_t UGPToolGUI::BeginTabItem(struct FString Label, uint8_t& p_open)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPToolGUI", "BeginTabItem");
    struct
    {
        struct FString Label;
        uint8_t p_open;
        uint8_t ReturnValue;
    } Parms{};
    Parms.Label = (struct FString)Label;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    p_open = Parms.p_open;
    return Parms.ReturnValue;
}

uint8_t UGPToolGUI::BeginTabBarEx(struct FString str_id, int32_t Flags)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPToolGUI", "BeginTabBarEx");
    struct
    {
        struct FString str_id;
        int32_t Flags;
        uint8_t ReturnValue;
    } Parms{};
    Parms.str_id = (struct FString)str_id;
    Parms.Flags = (int32_t)Flags;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UGPToolGUI::BeginTabBar(struct FString str_id)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPToolGUI", "BeginTabBar");
    struct
    {
        struct FString str_id;
        uint8_t ReturnValue;
    } Parms{};
    Parms.str_id = (struct FString)str_id;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UGPToolGUI::BeginPopupModalEx(struct FString Name, uint8_t& p_open, int32_t Flags)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPToolGUI", "BeginPopupModalEx");
    struct
    {
        struct FString Name;
        uint8_t p_open;
        int32_t Flags;
        uint8_t ReturnValue;
    } Parms{};
    Parms.Name = (struct FString)Name;
    Parms.Flags = (int32_t)Flags;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    p_open = Parms.p_open;
    return Parms.ReturnValue;
}

uint8_t UGPToolGUI::BeginPopupModal(struct FString Name, uint8_t& p_open)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPToolGUI", "BeginPopupModal");
    struct
    {
        struct FString Name;
        uint8_t p_open;
        uint8_t ReturnValue;
    } Parms{};
    Parms.Name = (struct FString)Name;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    p_open = Parms.p_open;
    return Parms.ReturnValue;
}

uint8_t UGPToolGUI::BeginPopupEx(struct FString str_id, int32_t Flags)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPToolGUI", "BeginPopupEx");
    struct
    {
        struct FString str_id;
        int32_t Flags;
        uint8_t ReturnValue;
    } Parms{};
    Parms.str_id = (struct FString)str_id;
    Parms.Flags = (int32_t)Flags;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UGPToolGUI::BeginPopupContextWindowEx(struct FString str_id, int32_t mouse_button, uint8_t also_over_items)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPToolGUI", "BeginPopupContextWindowEx");
    struct
    {
        struct FString str_id;
        int32_t mouse_button;
        uint8_t also_over_items;
        uint8_t ReturnValue;
    } Parms{};
    Parms.str_id = (struct FString)str_id;
    Parms.mouse_button = (int32_t)mouse_button;
    Parms.also_over_items = (uint8_t)also_over_items;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UGPToolGUI::BeginPopupContextWindow()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPToolGUI", "BeginPopupContextWindow");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UGPToolGUI::BeginPopupContextVoidEx(struct FString str_id, int32_t mouse_button)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPToolGUI", "BeginPopupContextVoidEx");
    struct
    {
        struct FString str_id;
        int32_t mouse_button;
        uint8_t ReturnValue;
    } Parms{};
    Parms.str_id = (struct FString)str_id;
    Parms.mouse_button = (int32_t)mouse_button;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UGPToolGUI::BeginPopupContextVoid()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPToolGUI", "BeginPopupContextVoid");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UGPToolGUI::BeginPopupContextItemEx(struct FString str_id, int32_t mouse_button)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPToolGUI", "BeginPopupContextItemEx");
    struct
    {
        struct FString str_id;
        int32_t mouse_button;
        uint8_t ReturnValue;
    } Parms{};
    Parms.str_id = (struct FString)str_id;
    Parms.mouse_button = (int32_t)mouse_button;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UGPToolGUI::BeginPopupContextItem()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPToolGUI", "BeginPopupContextItem");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UGPToolGUI::BeginPopup(struct FString str_id)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPToolGUI", "BeginPopup");
    struct
    {
        struct FString str_id;
        uint8_t ReturnValue;
    } Parms{};
    Parms.str_id = (struct FString)str_id;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UGPToolGUI::BeginMenuEx(struct FString Label, uint8_t Enabled)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPToolGUI", "BeginMenuEx");
    struct
    {
        struct FString Label;
        uint8_t Enabled;
        uint8_t ReturnValue;
    } Parms{};
    Parms.Label = (struct FString)Label;
    Parms.Enabled = (uint8_t)Enabled;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UGPToolGUI::BeginMenuBar()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPToolGUI", "BeginMenuBar");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UGPToolGUI::BeginMenu(struct FString Label)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPToolGUI", "BeginMenu");
    struct
    {
        struct FString Label;
        uint8_t ReturnValue;
    } Parms{};
    Parms.Label = (struct FString)Label;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UGPToolGUI::BeginMainMenuBar()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPToolGUI", "BeginMainMenuBar");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UGPToolGUI::BeginGroup()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPToolGUI", "BeginGroup");
    struct
    {
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

uint8_t UGPToolGUI::BeginComboEx(struct FString Label, struct FString preview_value, int32_t Flags)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPToolGUI", "BeginComboEx");
    struct
    {
        struct FString Label;
        struct FString preview_value;
        int32_t Flags;
        uint8_t ReturnValue;
    } Parms{};
    Parms.Label = (struct FString)Label;
    Parms.preview_value = (struct FString)preview_value;
    Parms.Flags = (int32_t)Flags;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UGPToolGUI::BeginCombo(struct FString Label, struct FString preview_value)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPToolGUI", "BeginCombo");
    struct
    {
        struct FString Label;
        struct FString preview_value;
        uint8_t ReturnValue;
    } Parms{};
    Parms.Label = (struct FString)Label;
    Parms.preview_value = (struct FString)preview_value;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UGPToolGUI::BeginChildFrameEx(int32_t ID, struct FVector2D size, int32_t Flags)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPToolGUI", "BeginChildFrameEx");
    struct
    {
        int32_t ID;
        struct FVector2D size;
        int32_t Flags;
        uint8_t ReturnValue;
    } Parms{};
    Parms.ID = (int32_t)ID;
    Parms.size = (struct FVector2D)size;
    Parms.Flags = (int32_t)Flags;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UGPToolGUI::BeginChildFrame(int32_t ID, struct FVector2D size)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPToolGUI", "BeginChildFrame");
    struct
    {
        int32_t ID;
        struct FVector2D size;
        uint8_t ReturnValue;
    } Parms{};
    Parms.ID = (int32_t)ID;
    Parms.size = (struct FVector2D)size;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UGPToolGUI::BeginChildEx(struct FString Name, struct FVector2D SizeArg, uint8_t Border, int32_t Flags)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPToolGUI", "BeginChildEx");
    struct
    {
        struct FString Name;
        struct FVector2D SizeArg;
        uint8_t Border;
        int32_t Flags;
        uint8_t ReturnValue;
    } Parms{};
    Parms.Name = (struct FString)Name;
    Parms.SizeArg = (struct FVector2D)SizeArg;
    Parms.Border = (uint8_t)Border;
    Parms.Flags = (int32_t)Flags;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UGPToolGUI::BeginChild(struct FString Name, struct FVector2D SizeArg)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPToolGUI", "BeginChild");
    struct
    {
        struct FString Name;
        struct FVector2D SizeArg;
        uint8_t ReturnValue;
    } Parms{};
    Parms.Name = (struct FString)Name;
    Parms.SizeArg = (struct FVector2D)SizeArg;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UGPToolGUI::Begin(struct FString Name)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPToolGUI", "Begin");
    struct
    {
        struct FString Name;
        uint8_t ReturnValue;
    } Parms{};
    Parms.Name = (struct FString)Name;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UGPToolGUI::ArrowButton(struct FString str_id, int32_t Dir)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPToolGUI", "ArrowButton");
    struct
    {
        struct FString str_id;
        int32_t Dir;
        uint8_t ReturnValue;
    } Parms{};
    Parms.str_id = (struct FString)str_id;
    Parms.Dir = (int32_t)Dir;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UGPToolGUI::AlignTextToFramePadding()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPToolGUI", "AlignTextToFramePadding");
    struct
    {
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

// UGPToolManager
void UGPToolManager::Show()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPToolManager", "Show");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UGPToolManager::RemoveTool(struct FString Name)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPToolManager", "RemoveTool");
    struct
    {
        struct FString Name;
    } Parms{};
    Parms.Name = (struct FString)Name;
    this->ProcessEvent(Func, &Parms);
}

void UGPToolManager::Hide()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPToolManager", "Hide");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

uint8_t UGPToolManager::HasTool(struct FString Name)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPToolManager", "HasTool");
    struct
    {
        struct FString Name;
        uint8_t ReturnValue;
    } Parms{};
    Parms.Name = (struct FString)Name;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UGPToolManager::HasLocalPlayer(struct UObject* WorldContextObject)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPToolManager", "HasLocalPlayer");
    struct
    {
        struct UObject* WorldContextObject;
        uint8_t ReturnValue;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct APlayerController* UGPToolManager::GetLocalPlayerController(struct UObject* WorldContextObject)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPToolManager", "GetLocalPlayerController");
    struct
    {
        struct UObject* WorldContextObject;
        struct APlayerController* ReturnValue;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UGPToolManager* UGPToolManager::Get(struct UObject* WorldContextObject)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPToolManager", "Get");
    struct
    {
        struct UObject* WorldContextObject;
        struct UGPToolManager* ReturnValue;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UGPToolManager::ExecConsoleCommand(struct FString Cmd, EGPTConsoleCommandScope Scope)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPToolManager", "ExecConsoleCommand");
    struct
    {
        struct FString Cmd;
        enum EGPTConsoleCommandScope Scope;
    } Parms{};
    Parms.Cmd = (struct FString)Cmd;
    Parms.Scope = (enum EGPTConsoleCommandScope)Scope;
    this->ProcessEvent(Func, &Parms);
}

void UGPToolManager::CSRpc(struct AActor* TargetActor, struct FString FuncName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPToolManager", "CSRpc");
    struct
    {
        struct AActor* TargetActor;
        struct FString FuncName;
    } Parms{};
    Parms.TargetActor = (struct AActor*)TargetActor;
    Parms.FuncName = (struct FString)FuncName;
    this->ProcessEvent(Func, &Parms);
}

void UGPToolManager::AddToolNative(struct FString Name, struct UGPToolBase* ToolClass, int32_t Permission)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPToolManager", "AddToolNative");
    struct
    {
        struct FString Name;
        struct UGPToolBase* ToolClass;
        int32_t Permission;
    } Parms{};
    Parms.Name = (struct FString)Name;
    Parms.ToolClass = (struct UGPToolBase*)ToolClass;
    Parms.Permission = (int32_t)Permission;
    this->ProcessEvent(Func, &Parms);
}

void UGPToolManager::AddTool(struct FString Name, struct FString ToolScriptPath, int32_t Permission)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPToolManager", "AddTool");
    struct
    {
        struct FString Name;
        struct FString ToolScriptPath;
        int32_t Permission;
    } Parms{};
    Parms.Name = (struct FString)Name;
    Parms.ToolScriptPath = (struct FString)ToolScriptPath;
    Parms.Permission = (int32_t)Permission;
    this->ProcessEvent(Func, &Parms);
}

// UGPTRPCComponent
void UGPTRPCComponent::ServerExecConsoleCommand(struct FString Cmd)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPTRPCComponent", "ServerExecConsoleCommand");
    struct
    {
        struct FString Cmd;
    } Parms{};
    Parms.Cmd = (struct FString)Cmd;
    this->ProcessEvent(Func, &Parms);
}

void UGPTRPCComponent::ServerCall(struct AActor* Target, struct FName FuncName, struct FString ArgJson)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPTRPCComponent", "ServerCall");
    struct
    {
        struct AActor* Target;
        struct FName FuncName;
        struct FString ArgJson;
    } Parms{};
    Parms.Target = (struct AActor*)Target;
    Parms.FuncName = (struct FName)FuncName;
    Parms.ArgJson = (struct FString)ArgJson;
    this->ProcessEvent(Func, &Parms);
}

} // namespace SDK
