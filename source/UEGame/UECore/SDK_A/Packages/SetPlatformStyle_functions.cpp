#include "SetPlatformStyle.hpp"
#include "EFontConfigData_zh.hpp"
#include "UMG.hpp"
#include <cstring> // memcpy for ArrayDim>1 param marshalling

namespace SDK
{

// USetPlatformStyle_C
void USetPlatformStyle_C::SetDefaultImage(struct UImage* Image, int32_t DefaultType, struct UObject* __WorldContext)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("SetPlatformStyle_C", "SetDefaultImage");
    struct
    {
        struct UImage* Image;
        int32_t DefaultType;
        struct UObject* __WorldContext;
    } Parms{};
    Parms.Image = (struct UImage*)Image;
    Parms.DefaultType = (int32_t)DefaultType;
    Parms.__WorldContext = (struct UObject*)__WorldContext;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void USetPlatformStyle_C::SetCommonPressed(struct UImage* Image, struct UObject* __WorldContext)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("SetPlatformStyle_C", "SetCommonPressed");
    struct
    {
        struct UImage* Image;
        struct UObject* __WorldContext;
    } Parms{};
    Parms.Image = (struct UImage*)Image;
    Parms.__WorldContext = (struct UObject*)__WorldContext;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void USetPlatformStyle_C::SetSize(struct UWidget* Widget, struct FVector2D PC, struct FVector2D Mobile, struct UObject* __WorldContext)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("SetPlatformStyle_C", "SetSize");
    struct
    {
        struct UWidget* Widget;
        struct FVector2D PC;
        struct FVector2D Mobile;
        struct UObject* __WorldContext;
    } Parms{};
    Parms.Widget = (struct UWidget*)Widget;
    Parms.PC = (struct FVector2D)PC;
    Parms.Mobile = (struct FVector2D)Mobile;
    Parms.__WorldContext = (struct UObject*)__WorldContext;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void USetPlatformStyle_C::SetPosition(struct UWidget* __, struct FVector2D PC, struct FVector2D Mobile, struct UObject* __WorldContext)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("SetPlatformStyle_C", "SetPosition");
    struct
    {
        struct UWidget* __;
        struct FVector2D PC;
        struct FVector2D Mobile;
        struct UObject* __WorldContext;
    } Parms{};
    Parms.__ = (struct UWidget*)__;
    Parms.PC = (struct FVector2D)PC;
    Parms.Mobile = (struct FVector2D)Mobile;
    Parms.__WorldContext = (struct UObject*)__WorldContext;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void USetPlatformStyle_C::SetImageSize(struct UImage* __, struct FVector2D PC, struct FVector2D Mobile, struct UObject* __WorldContext)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("SetPlatformStyle_C", "SetImageSize");
    struct
    {
        struct UImage* __;
        struct FVector2D PC;
        struct FVector2D Mobile;
        struct UObject* __WorldContext;
    } Parms{};
    Parms.__ = (struct UImage*)__;
    Parms.PC = (struct FVector2D)PC;
    Parms.Mobile = (struct FVector2D)Mobile;
    Parms.__WorldContext = (struct UObject*)__WorldContext;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void USetPlatformStyle_C::SetImageColor(struct UImage* __, struct FLinearColor PC, struct FLinearColor Mobile, struct UObject* __WorldContext)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("SetPlatformStyle_C", "SetImageColor");
    struct
    {
        struct UImage* __;
        struct FLinearColor PC;
        struct FLinearColor Mobile;
        struct UObject* __WorldContext;
    } Parms{};
    Parms.__ = (struct UImage*)__;
    Parms.PC = (struct FLinearColor)PC;
    Parms.Mobile = (struct FLinearColor)Mobile;
    Parms.__WorldContext = (struct UObject*)__WorldContext;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void USetPlatformStyle_C::Set_Image_Color_ID(struct UImage* InImage, struct FName PC, struct FName Mobile, struct UObject* __WorldContext)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("SetPlatformStyle_C", "Set Image Color_ID");
    struct
    {
        struct UImage* InImage;
        struct FName PC;
        struct FName Mobile;
        struct UObject* __WorldContext;
    } Parms{};
    Parms.InImage = (struct UImage*)InImage;
    Parms.PC = (struct FName)PC;
    Parms.Mobile = (struct FName)Mobile;
    Parms.__WorldContext = (struct UObject*)__WorldContext;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void USetPlatformStyle_C::SetTextColor(struct UTextLayoutWidget* InTextWidget, struct FName PC, struct FName Mobile, struct UObject* __WorldContext)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("SetPlatformStyle_C", "SetTextColor");
    struct
    {
        struct UTextLayoutWidget* InTextWidget;
        struct FName PC;
        struct FName Mobile;
        struct UObject* __WorldContext;
    } Parms{};
    Parms.InTextWidget = (struct UTextLayoutWidget*)InTextWidget;
    Parms.PC = (struct FName)PC;
    Parms.Mobile = (struct FName)Mobile;
    Parms.__WorldContext = (struct UObject*)__WorldContext;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void USetPlatformStyle_C::SetRichTextSize(struct URichTextBlock* __, EFontConfigData_zh PC, EFontConfigData_zh Mobile, struct UObject* __WorldContext)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("SetPlatformStyle_C", "SetRichTextSize");
    struct
    {
        struct URichTextBlock* __;
        enum EFontConfigData_zh PC;
        enum EFontConfigData_zh Mobile;
        struct UObject* __WorldContext;
    } Parms{};
    Parms.__ = (struct URichTextBlock*)__;
    Parms.PC = (enum EFontConfigData_zh)PC;
    Parms.Mobile = (enum EFontConfigData_zh)Mobile;
    Parms.__WorldContext = (struct UObject*)__WorldContext;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void USetPlatformStyle_C::SetTextSize(struct UTextBlock* Target, EFontConfigData_zh PC, EFontConfigData_zh Mobile, struct UObject* __WorldContext)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("SetPlatformStyle_C", "SetTextSize");
    struct
    {
        struct UTextBlock* Target;
        enum EFontConfigData_zh PC;
        enum EFontConfigData_zh Mobile;
        struct UObject* __WorldContext;
    } Parms{};
    Parms.Target = (struct UTextBlock*)Target;
    Parms.PC = (enum EFontConfigData_zh)PC;
    Parms.Mobile = (enum EFontConfigData_zh)Mobile;
    Parms.__WorldContext = (struct UObject*)__WorldContext;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

} // namespace SDK
