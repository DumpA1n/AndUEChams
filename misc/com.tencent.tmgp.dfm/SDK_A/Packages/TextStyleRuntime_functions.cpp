#include "TextStyleRuntime.hpp"
#include "SlateCore.hpp"
#include "UMG.hpp"
#include <cstring> // memcpy for ArrayDim>1 param marshalling

namespace SDK
{

// ---- UFontStyleRuntimeManager::* ----
void UFontStyleRuntimeManager::WarmupText(const struct FName& InStyleName, struct FString InContent)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("FontStyleRuntimeManager", "WarmupText");
    struct
    {
        struct FName InStyleName;
        struct FString InContent;
    } Parms{};
    Parms.InStyleName = (struct FName)InStyleName;
    Parms.InContent = (struct FString)InContent;
    this->ProcessEvent(Func, &Parms);
}

void UFontStyleRuntimeManager::OnTextWidgetFontStyleCustomize(struct UWidget* InWidget)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("FontStyleRuntimeManager", "OnTextWidgetFontStyleCustomize");
    struct
    {
        struct UWidget* InWidget;
    } Parms{};
    Parms.InWidget = (struct UWidget*)InWidget;
    this->ProcessEvent(Func, &Parms);
}

void UFontStyleRuntimeManager::OnCultureChanged()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("FontStyleRuntimeManager", "OnCultureChanged");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

uint8_t UFontStyleRuntimeManager::GetFontConfigData(const struct FName& InName, struct FSlateFontInfo& OutSlateFontInfo)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("FontStyleRuntimeManager", "GetFontConfigData");
    struct
    {
        struct FName InName;
        struct FSlateFontInfo OutSlateFontInfo;
        uint8_t ReturnValue;
    } Parms{};
    Parms.InName = (struct FName)InName;
    this->ProcessEvent(Func, &Parms);
    OutSlateFontInfo = Parms.OutSlateFontInfo;
    return Parms.ReturnValue;
}

struct UFontStyleRuntimeManager* UFontStyleRuntimeManager::Get()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("FontStyleRuntimeManager", "Get");
    struct
    {
        struct UFontStyleRuntimeManager* ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// ---- UTextStyleBlueprintLib::* ----
void UTextStyleBlueprintLib::Blueprint_SetTextStyle(struct UTextLayoutWidget* InTextWidget, struct FName InTextStyleIdx)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("TextStyleBlueprintLib", "Blueprint_SetTextStyle");
    struct
    {
        struct UTextLayoutWidget* InTextWidget;
        struct FName InTextStyleIdx;
    } Parms{};
    Parms.InTextWidget = (struct UTextLayoutWidget*)InTextWidget;
    Parms.InTextStyleIdx = (struct FName)InTextStyleIdx;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

// ---- UTextStyleRuntimeManager::* ----
uint8_t UTextStyleRuntimeManager::GetTextStyleCfgData(const struct FName& InName, struct FCustomTextStyle& OutCustomTextStyle)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("TextStyleRuntimeManager", "GetTextStyleCfgData");
    struct
    {
        struct FName InName;
        struct FCustomTextStyle OutCustomTextStyle;
        uint8_t ReturnValue;
    } Parms{};
    Parms.InName = (struct FName)InName;
    this->ProcessEvent(Func, &Parms);
    OutCustomTextStyle = Parms.OutCustomTextStyle;
    return Parms.ReturnValue;
}

struct UTextStyleRuntimeManager* UTextStyleRuntimeManager::Get()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("TextStyleRuntimeManager", "Get");
    struct
    {
        struct UTextStyleRuntimeManager* ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

} // namespace SDK
