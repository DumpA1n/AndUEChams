#include "UMG.hpp"
#include "Engine.hpp"
#include "InputCore.hpp"
#include "Slate.hpp"
#include "SlateCore.hpp"
#include <cstring> // memcpy for ArrayDim>1 param marshalling

namespace SDK
{

// ---- UWidget::* ----
void UWidget::SetVisibility(ESlateVisibility InVisibility)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("Widget", "SetVisibility");
    struct
    {
        enum ESlateVisibility InVisibility;
    } Parms{};
    Parms.InVisibility = (enum ESlateVisibility)InVisibility;
    this->ProcessEvent(Func, &Parms);
}

void UWidget::SetUserFocus(struct APlayerController* PlayerController)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("Widget", "SetUserFocus");
    struct
    {
        struct APlayerController* PlayerController;
    } Parms{};
    Parms.PlayerController = (struct APlayerController*)PlayerController;
    this->ProcessEvent(Func, &Parms);
}

void UWidget::SetToolTipText(const struct FText& InToolTipText)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("Widget", "SetToolTipText");
    struct
    {
        struct FText InToolTipText;
    } Parms{};
    Parms.InToolTipText = (struct FText)InToolTipText;
    this->ProcessEvent(Func, &Parms);
}

void UWidget::SetToolTip(struct UWidget* Widget)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("Widget", "SetToolTip");
    struct
    {
        struct UWidget* Widget;
    } Parms{};
    Parms.Widget = (struct UWidget*)Widget;
    this->ProcessEvent(Func, &Parms);
}

void UWidget::SetRenderTranslation(struct FVector2D translation)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("Widget", "SetRenderTranslation");
    struct
    {
        struct FVector2D translation;
    } Parms{};
    Parms.translation = (struct FVector2D)translation;
    this->ProcessEvent(Func, &Parms);
}

void UWidget::SetRenderTransformPivot(struct FVector2D Pivot)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("Widget", "SetRenderTransformPivot");
    struct
    {
        struct FVector2D Pivot;
    } Parms{};
    Parms.Pivot = (struct FVector2D)Pivot;
    this->ProcessEvent(Func, &Parms);
}

void UWidget::SetRenderTransformAngle(float Angle)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("Widget", "SetRenderTransformAngle");
    struct
    {
        float Angle;
    } Parms{};
    Parms.Angle = (float)Angle;
    this->ProcessEvent(Func, &Parms);
}

void UWidget::SetRenderTransform(struct FWidgetTransform InTransform)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("Widget", "SetRenderTransform");
    struct
    {
        struct FWidgetTransform InTransform;
    } Parms{};
    Parms.InTransform = (struct FWidgetTransform)InTransform;
    this->ProcessEvent(Func, &Parms);
}

void UWidget::SetRenderShear(struct FVector2D Shear)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("Widget", "SetRenderShear");
    struct
    {
        struct FVector2D Shear;
    } Parms{};
    Parms.Shear = (struct FVector2D)Shear;
    this->ProcessEvent(Func, &Parms);
}

void UWidget::SetRenderScale(struct FVector2D Scale)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("Widget", "SetRenderScale");
    struct
    {
        struct FVector2D Scale;
    } Parms{};
    Parms.Scale = (struct FVector2D)Scale;
    this->ProcessEvent(Func, &Parms);
}

void UWidget::SetRenderOpacity(float InOpacity)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("Widget", "SetRenderOpacity");
    struct
    {
        float InOpacity;
    } Parms{};
    Parms.InOpacity = (float)InOpacity;
    this->ProcessEvent(Func, &Parms);
}

void UWidget::SetPositionZ(float InPositionZ)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("Widget", "SetPositionZ");
    struct
    {
        float InPositionZ;
    } Parms{};
    Parms.InPositionZ = (float)InPositionZ;
    this->ProcessEvent(Func, &Parms);
}

void UWidget::SetPixelSnapping(EWidgetPixelSnapping InPixelSnapping)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("Widget", "SetPixelSnapping");
    struct
    {
        enum EWidgetPixelSnapping InPixelSnapping;
    } Parms{};
    Parms.InPixelSnapping = (enum EWidgetPixelSnapping)InPixelSnapping;
    this->ProcessEvent(Func, &Parms);
}

void UWidget::SetOverrideMaterial(struct UMaterialInterface* InMaterial)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("Widget", "SetOverrideMaterial");
    struct
    {
        struct UMaterialInterface* InMaterial;
    } Parms{};
    Parms.InMaterial = (struct UMaterialInterface*)InMaterial;
    this->ProcessEvent(Func, &Parms);
}

void UWidget::SetNavigationRuleExplicit(EUINavigation Direction, struct UWidget* InWidget)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("Widget", "SetNavigationRuleExplicit");
    struct
    {
        enum EUINavigation Direction;
        struct UWidget* InWidget;
    } Parms{};
    Parms.Direction = (enum EUINavigation)Direction;
    Parms.InWidget = (struct UWidget*)InWidget;
    this->ProcessEvent(Func, &Parms);
}

void UWidget::SetNavigationRuleCustomBoundary(EUINavigation Direction, struct FDelegate InCustomDelegate)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("Widget", "SetNavigationRuleCustomBoundary");
    struct
    {
        enum EUINavigation Direction;
        struct FDelegate InCustomDelegate;
    } Parms{};
    Parms.Direction = (enum EUINavigation)Direction;
    Parms.InCustomDelegate = (struct FDelegate)InCustomDelegate;
    this->ProcessEvent(Func, &Parms);
}

void UWidget::SetNavigationRuleCustom(EUINavigation Direction, struct FDelegate InCustomDelegate)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("Widget", "SetNavigationRuleCustom");
    struct
    {
        enum EUINavigation Direction;
        struct FDelegate InCustomDelegate;
    } Parms{};
    Parms.Direction = (enum EUINavigation)Direction;
    Parms.InCustomDelegate = (struct FDelegate)InCustomDelegate;
    this->ProcessEvent(Func, &Parms);
}

void UWidget::SetNavigationRuleBase(EUINavigation Direction, EUINavigationRule Rule)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("Widget", "SetNavigationRuleBase");
    struct
    {
        enum EUINavigation Direction;
        enum EUINavigationRule Rule;
    } Parms{};
    Parms.Direction = (enum EUINavigation)Direction;
    Parms.Rule = (enum EUINavigationRule)Rule;
    this->ProcessEvent(Func, &Parms);
}

void UWidget::SetNavigationRule(EUINavigation Direction, EUINavigationRule Rule, struct FName WidgetToFocus)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("Widget", "SetNavigationRule");
    struct
    {
        enum EUINavigation Direction;
        enum EUINavigationRule Rule;
        struct FName WidgetToFocus;
    } Parms{};
    Parms.Direction = (enum EUINavigation)Direction;
    Parms.Rule = (enum EUINavigationRule)Rule;
    Parms.WidgetToFocus = (struct FName)WidgetToFocus;
    this->ProcessEvent(Func, &Parms);
}

void UWidget::SetMaterialStrategy(EMaterialStrategy InStrategy)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("Widget", "SetMaterialStrategy");
    struct
    {
        enum EMaterialStrategy InStrategy;
    } Parms{};
    Parms.InStrategy = (enum EMaterialStrategy)InStrategy;
    this->ProcessEvent(Func, &Parms);
}

void UWidget::SetKeyboardFocus()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("Widget", "SetKeyboardFocus");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UWidget::SetIsEnabled(uint8_t bInIsEnabled)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("Widget", "SetIsEnabled");
    struct
    {
        uint8_t bInIsEnabled;
    } Parms{};
    Parms.bInIsEnabled = (uint8_t)bInIsEnabled;
    this->ProcessEvent(Func, &Parms);
}

void UWidget::SetFocus()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("Widget", "SetFocus");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UWidget::SetExtendHitMargin(float Left, float Top, float Right, float Bottom)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("Widget", "SetExtendHitMargin");
    struct
    {
        float Left;
        float Top;
        float Right;
        float Bottom;
    } Parms{};
    Parms.Left = (float)Left;
    Parms.Top = (float)Top;
    Parms.Right = (float)Right;
    Parms.Bottom = (float)Bottom;
    this->ProcessEvent(Func, &Parms);
}

void UWidget::SetCursor(EMouseCursor InCursor)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("Widget", "SetCursor");
    struct
    {
        enum EMouseCursor InCursor;
    } Parms{};
    Parms.InCursor = (enum EMouseCursor)InCursor;
    this->ProcessEvent(Func, &Parms);
}

void UWidget::SetClipping(EWidgetClipping InClipping)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("Widget", "SetClipping");
    struct
    {
        enum EWidgetClipping InClipping;
    } Parms{};
    Parms.InClipping = (enum EWidgetClipping)InClipping;
    this->ProcessEvent(Func, &Parms);
}

void UWidget::SetAllNavigationRules(EUINavigationRule Rule, struct FName WidgetToFocus)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("Widget", "SetAllNavigationRules");
    struct
    {
        enum EUINavigationRule Rule;
        struct FName WidgetToFocus;
    } Parms{};
    Parms.Rule = (enum EUINavigationRule)Rule;
    Parms.WidgetToFocus = (struct FName)WidgetToFocus;
    this->ProcessEvent(Func, &Parms);
}

void UWidget::ResetCursor()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("Widget", "ResetCursor");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UWidget::RemoveFromParent()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("Widget", "RemoveFromParent");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UWidget::OnWidgetInvalidated__DelegateSignature(struct FInvalidateWidgetReason InvalidatedReason)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("Widget", "OnWidgetInvalidated__DelegateSignature");
    struct
    {
        struct FInvalidateWidgetReason InvalidatedReason;
    } Parms{};
    Parms.InvalidatedReason = (struct FInvalidateWidgetReason)InvalidatedReason;
    this->ProcessEvent(Func, &Parms);
}

struct FEventReply UWidget::OnReply__DelegateSignature()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("Widget", "OnReply__DelegateSignature");
    struct
    {
        struct FEventReply ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FEventReply UWidget::OnPointerEvent__DelegateSignature(struct FGeometry MyGeometry, const struct FPointerEvent& MouseEvent)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("Widget", "OnPointerEvent__DelegateSignature");
    struct
    {
        struct FGeometry MyGeometry;
        struct FPointerEvent MouseEvent;
        struct FEventReply ReturnValue;
    } Parms{};
    Parms.MyGeometry = (struct FGeometry)MyGeometry;
    Parms.MouseEvent = (struct FPointerEvent)MouseEvent;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UWidget::IsVisible()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("Widget", "IsVisible");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UWidget::IsHovered()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("Widget", "IsHovered");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UWidget::InvalidateLayoutAndVolatility()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("Widget", "InvalidateLayoutAndVolatility");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

uint8_t UWidget::HasUserFocusedDescendants(struct APlayerController* PlayerController)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("Widget", "HasUserFocusedDescendants");
    struct
    {
        struct APlayerController* PlayerController;
        uint8_t ReturnValue;
    } Parms{};
    Parms.PlayerController = (struct APlayerController*)PlayerController;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UWidget::HasUserFocus(struct APlayerController* PlayerController)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("Widget", "HasUserFocus");
    struct
    {
        struct APlayerController* PlayerController;
        uint8_t ReturnValue;
    } Parms{};
    Parms.PlayerController = (struct APlayerController*)PlayerController;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UWidget::HasMouseCaptureByUser(int32_t UserIndex, int32_t PointerIndex)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("Widget", "HasMouseCaptureByUser");
    struct
    {
        int32_t UserIndex;
        int32_t PointerIndex;
        uint8_t ReturnValue;
    } Parms{};
    Parms.UserIndex = (int32_t)UserIndex;
    Parms.PointerIndex = (int32_t)PointerIndex;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UWidget::HasMouseCapture()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("Widget", "HasMouseCapture");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UWidget::HasKeyboardFocus()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("Widget", "HasKeyboardFocus");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UWidget::HasFocusedDescendants()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("Widget", "HasFocusedDescendants");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UWidget::HasAnyUserFocus()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("Widget", "HasAnyUserFocus");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UWidget* UWidget::GetWidget__DelegateSignature()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("Widget", "GetWidget__DelegateSignature");
    struct
    {
        struct UWidget* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

ESlateVisibility UWidget::GetVisibility()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("Widget", "GetVisibility");
    struct
    {
        enum ESlateVisibility ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FGeometry UWidget::GetTickSpaceGeometry()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("Widget", "GetTickSpaceGeometry");
    struct
    {
        struct FGeometry ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FText UWidget::GetText__DelegateSignature()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("Widget", "GetText__DelegateSignature");
    struct
    {
        struct FText ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

ESlateVisibility UWidget::GetSlateVisibility__DelegateSignature()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("Widget", "GetSlateVisibility__DelegateSignature");
    struct
    {
        enum ESlateVisibility ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FSlateColor UWidget::GetSlateColor__DelegateSignature()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("Widget", "GetSlateColor__DelegateSignature");
    struct
    {
        struct FSlateColor ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FSlateBrush UWidget::GetSlateBrush__DelegateSignature()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("Widget", "GetSlateBrush__DelegateSignature");
    struct
    {
        struct FSlateBrush ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UWidget::GetRenderTransformAngle()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("Widget", "GetRenderTransformAngle");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UWidget::GetRenderOpacity()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("Widget", "GetRenderOpacity");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UWidget::GetPositionZ()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("Widget", "GetPositionZ");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

EWidgetPixelSnapping UWidget::GetPixelSnapping()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("Widget", "GetPixelSnapping");
    struct
    {
        enum EWidgetPixelSnapping ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UPanelWidget* UWidget::GetParent()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("Widget", "GetParent");
    struct
    {
        struct UPanelWidget* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FGeometry UWidget::GetPaintSpaceGeometry()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("Widget", "GetPaintSpaceGeometry");
    struct
    {
        struct FGeometry ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct APlayerController* UWidget::GetOwningPlayer()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("Widget", "GetOwningPlayer");
    struct
    {
        struct APlayerController* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct ULocalPlayer* UWidget::GetOwningLocalPlayer()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("Widget", "GetOwningLocalPlayer");
    struct
    {
        struct ULocalPlayer* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UMaterialInterface* UWidget::GetOverrideMaterial()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("Widget", "GetOverrideMaterial");
    struct
    {
        struct UMaterialInterface* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

EMouseCursor UWidget::GetMouseCursor__DelegateSignature()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("Widget", "GetMouseCursor__DelegateSignature");
    struct
    {
        enum EMouseCursor ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

EMaterialStrategy UWidget::GetMaterialStrategy()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("Widget", "GetMaterialStrategy");
    struct
    {
        enum EMaterialStrategy ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FLinearColor UWidget::GetLinearColor__DelegateSignature()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("Widget", "GetLinearColor__DelegateSignature");
    struct
    {
        struct FLinearColor ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UWidget::GetIsEnabled()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("Widget", "GetIsEnabled");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UWidget::GetInt32__DelegateSignature()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("Widget", "GetInt32__DelegateSignature");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UGameInstance* UWidget::GetGameInstance()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("Widget", "GetGameInstance");
    struct
    {
        struct UGameInstance* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UWidget::GetFloat__DelegateSignature()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("Widget", "GetFloat__DelegateSignature");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FVector2D UWidget::GetDesiredSize()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("Widget", "GetDesiredSize");
    struct
    {
        struct FVector2D ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

EWidgetClipping UWidget::GetClipping()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("Widget", "GetClipping");
    struct
    {
        enum EWidgetClipping ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

ECheckBoxState UWidget::GetCheckBoxState__DelegateSignature()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("Widget", "GetCheckBoxState__DelegateSignature");
    struct
    {
        enum ECheckBoxState ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FGeometry UWidget::GetCachedGeometry()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("Widget", "GetCachedGeometry");
    struct
    {
        struct FGeometry ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UWidget::GetBool__DelegateSignature()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("Widget", "GetBool__DelegateSignature");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UWidget* UWidget::GenerateWidgetForString__DelegateSignature(struct FString Item)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("Widget", "GenerateWidgetForString__DelegateSignature");
    struct
    {
        struct FString Item;
        struct UWidget* ReturnValue;
    } Parms{};
    Parms.Item = (struct FString)Item;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UWidget* UWidget::GenerateWidgetForObject__DelegateSignature(struct UObject* Item)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("Widget", "GenerateWidgetForObject__DelegateSignature");
    struct
    {
        struct UObject* Item;
        struct UWidget* ReturnValue;
    } Parms{};
    Parms.Item = (struct UObject*)Item;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UWidget::ForceVolatile(uint8_t bForce)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("Widget", "ForceVolatile");
    struct
    {
        uint8_t bForce;
    } Parms{};
    Parms.bForce = (uint8_t)bForce;
    this->ProcessEvent(Func, &Parms);
}

void UWidget::ForceLayoutPrepass()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("Widget", "ForceLayoutPrepass");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// ---- UUserWidget::* ----
void UUserWidget::UnregisterInputComponent()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("UserWidget", "UnregisterInputComponent");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UUserWidget::UnbindFromAnimationStarted(struct UWidgetAnimation* Animation, struct FDelegate Delegate)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("UserWidget", "UnbindFromAnimationStarted");
    struct
    {
        struct UWidgetAnimation* Animation;
        struct FDelegate Delegate;
    } Parms{};
    Parms.Animation = (struct UWidgetAnimation*)Animation;
    Parms.Delegate = (struct FDelegate)Delegate;
    this->ProcessEvent(Func, &Parms);
}

void UUserWidget::UnbindFromAnimationFinished(struct UWidgetAnimation* Animation, struct FDelegate Delegate)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("UserWidget", "UnbindFromAnimationFinished");
    struct
    {
        struct UWidgetAnimation* Animation;
        struct FDelegate Delegate;
    } Parms{};
    Parms.Animation = (struct UWidgetAnimation*)Animation;
    Parms.Delegate = (struct FDelegate)Delegate;
    this->ProcessEvent(Func, &Parms);
}

void UUserWidget::UnbindAllFromAnimationStarted(struct UWidgetAnimation* Animation)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("UserWidget", "UnbindAllFromAnimationStarted");
    struct
    {
        struct UWidgetAnimation* Animation;
    } Parms{};
    Parms.Animation = (struct UWidgetAnimation*)Animation;
    this->ProcessEvent(Func, &Parms);
}

void UUserWidget::UnbindAllFromAnimationFinished(struct UWidgetAnimation* Animation)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("UserWidget", "UnbindAllFromAnimationFinished");
    struct
    {
        struct UWidgetAnimation* Animation;
    } Parms{};
    Parms.Animation = (struct UWidgetAnimation*)Animation;
    this->ProcessEvent(Func, &Parms);
}

void UUserWidget::Tick(struct FGeometry MyGeometry, float InDeltaTime)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("UserWidget", "Tick");
    struct
    {
        struct FGeometry MyGeometry;
        float InDeltaTime;
    } Parms{};
    Parms.MyGeometry = (struct FGeometry)MyGeometry;
    Parms.InDeltaTime = (float)InDeltaTime;
    this->ProcessEvent(Func, &Parms);
}

void UUserWidget::StopListeningForInputAction(struct FName ActionName, EInputEvent EventType)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("UserWidget", "StopListeningForInputAction");
    struct
    {
        struct FName ActionName;
        enum EInputEvent EventType;
    } Parms{};
    Parms.ActionName = (struct FName)ActionName;
    Parms.EventType = (enum EInputEvent)EventType;
    this->ProcessEvent(Func, &Parms);
}

void UUserWidget::StopListeningForAllInputActions()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("UserWidget", "StopListeningForAllInputActions");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UUserWidget::StopAnimationsAndLatentActions()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("UserWidget", "StopAnimationsAndLatentActions");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UUserWidget::StopAnimationByName(struct FName InAnimationName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("UserWidget", "StopAnimationByName");
    struct
    {
        struct FName InAnimationName;
    } Parms{};
    Parms.InAnimationName = (struct FName)InAnimationName;
    this->ProcessEvent(Func, &Parms);
}

void UUserWidget::StopAnimation(struct UWidgetAnimation* InAnimation)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("UserWidget", "StopAnimation");
    struct
    {
        struct UWidgetAnimation* InAnimation;
    } Parms{};
    Parms.InAnimation = (struct UWidgetAnimation*)InAnimation;
    this->ProcessEvent(Func, &Parms);
}

void UUserWidget::StopAllAnimations()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("UserWidget", "StopAllAnimations");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UUserWidget::SetPositionInViewport(struct FVector2D Position, uint8_t bRemoveDPIScale)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("UserWidget", "SetPositionInViewport");
    struct
    {
        struct FVector2D Position;
        uint8_t bRemoveDPIScale;
    } Parms{};
    Parms.Position = (struct FVector2D)Position;
    Parms.bRemoveDPIScale = (uint8_t)bRemoveDPIScale;
    this->ProcessEvent(Func, &Parms);
}

void UUserWidget::SetPlaybackSpeed(struct UWidgetAnimation* InAnimation, float PlaybackSpeed)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("UserWidget", "SetPlaybackSpeed");
    struct
    {
        struct UWidgetAnimation* InAnimation;
        float PlaybackSpeed;
    } Parms{};
    Parms.InAnimation = (struct UWidgetAnimation*)InAnimation;
    Parms.PlaybackSpeed = (float)PlaybackSpeed;
    this->ProcessEvent(Func, &Parms);
}

void UUserWidget::SetPadding(struct FMargin InPadding)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("UserWidget", "SetPadding");
    struct
    {
        struct FMargin InPadding;
    } Parms{};
    Parms.InPadding = (struct FMargin)InPadding;
    this->ProcessEvent(Func, &Parms);
}

void UUserWidget::SetOwningPlayer(struct APlayerController* LocalPlayerController)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("UserWidget", "SetOwningPlayer");
    struct
    {
        struct APlayerController* LocalPlayerController;
    } Parms{};
    Parms.LocalPlayerController = (struct APlayerController*)LocalPlayerController;
    this->ProcessEvent(Func, &Parms);
}

void UUserWidget::SetNumLoopsToPlay(struct UWidgetAnimation* InAnimation, int32_t NumLoopsToPlay)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("UserWidget", "SetNumLoopsToPlay");
    struct
    {
        struct UWidgetAnimation* InAnimation;
        int32_t NumLoopsToPlay;
    } Parms{};
    Parms.InAnimation = (struct UWidgetAnimation*)InAnimation;
    Parms.NumLoopsToPlay = (int32_t)NumLoopsToPlay;
    this->ProcessEvent(Func, &Parms);
}

void UUserWidget::SetInputActionPriority(int32_t NewPriority)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("UserWidget", "SetInputActionPriority");
    struct
    {
        int32_t NewPriority;
    } Parms{};
    Parms.NewPriority = (int32_t)NewPriority;
    this->ProcessEvent(Func, &Parms);
}

void UUserWidget::SetInputActionBlocking(uint8_t bShouldBlock)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("UserWidget", "SetInputActionBlocking");
    struct
    {
        uint8_t bShouldBlock;
    } Parms{};
    Parms.bShouldBlock = (uint8_t)bShouldBlock;
    this->ProcessEvent(Func, &Parms);
}

void UUserWidget::SetForegroundColor(struct FSlateColor InForegroundColor)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("UserWidget", "SetForegroundColor");
    struct
    {
        struct FSlateColor InForegroundColor;
    } Parms{};
    Parms.InForegroundColor = (struct FSlateColor)InForegroundColor;
    this->ProcessEvent(Func, &Parms);
}

void UUserWidget::SetDesiredSizeInViewport(struct FVector2D size)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("UserWidget", "SetDesiredSizeInViewport");
    struct
    {
        struct FVector2D size;
    } Parms{};
    Parms.size = (struct FVector2D)size;
    this->ProcessEvent(Func, &Parms);
}

void UUserWidget::SetColorAndOpacity(struct FLinearColor InColorAndOpacity)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("UserWidget", "SetColorAndOpacity");
    struct
    {
        struct FLinearColor InColorAndOpacity;
    } Parms{};
    Parms.InColorAndOpacity = (struct FLinearColor)InColorAndOpacity;
    this->ProcessEvent(Func, &Parms);
}

void UUserWidget::SetAnchorsInViewport(struct FAnchors Anchors)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("UserWidget", "SetAnchorsInViewport");
    struct
    {
        struct FAnchors Anchors;
    } Parms{};
    Parms.Anchors = (struct FAnchors)Anchors;
    this->ProcessEvent(Func, &Parms);
}

void UUserWidget::SetAlignmentInViewport(struct FVector2D Alignment)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("UserWidget", "SetAlignmentInViewport");
    struct
    {
        struct FVector2D Alignment;
    } Parms{};
    Parms.Alignment = (struct FVector2D)Alignment;
    this->ProcessEvent(Func, &Parms);
}

void UUserWidget::ReverseAnimation(struct UWidgetAnimation* InAnimation)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("UserWidget", "ReverseAnimation");
    struct
    {
        struct UWidgetAnimation* InAnimation;
    } Parms{};
    Parms.InAnimation = (struct UWidgetAnimation*)InAnimation;
    this->ProcessEvent(Func, &Parms);
}

void UUserWidget::RemoveFromViewport()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("UserWidget", "RemoveFromViewport");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UUserWidget::RegisterInputComponent()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("UserWidget", "RegisterInputComponent");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UUserWidget::PreConstruct(uint8_t IsDesignTime)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("UserWidget", "PreConstruct");
    struct
    {
        uint8_t IsDesignTime;
    } Parms{};
    Parms.IsDesignTime = (uint8_t)IsDesignTime;
    this->ProcessEvent(Func, &Parms);
}

void UUserWidget::PlaySound(struct USoundBase* SoundToPlay)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("UserWidget", "PlaySound");
    struct
    {
        struct USoundBase* SoundToPlay;
    } Parms{};
    Parms.SoundToPlay = (struct USoundBase*)SoundToPlay;
    this->ProcessEvent(Func, &Parms);
}

struct UUMGSequencePlayer* UUserWidget::PlayAnimationTimeRange(struct UWidgetAnimation* InAnimation, float StartAtTime, float EndAtTime, int32_t NumLoopsToPlay, EUMGSequencePlayMode PlayMode, float PlaybackSpeed, uint8_t bRestoreState)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("UserWidget", "PlayAnimationTimeRange");
    struct
    {
        struct UWidgetAnimation* InAnimation;
        float StartAtTime;
        float EndAtTime;
        int32_t NumLoopsToPlay;
        enum EUMGSequencePlayMode PlayMode;
        float PlaybackSpeed;
        uint8_t bRestoreState;
        struct UUMGSequencePlayer* ReturnValue;
    } Parms{};
    Parms.InAnimation = (struct UWidgetAnimation*)InAnimation;
    Parms.StartAtTime = (float)StartAtTime;
    Parms.EndAtTime = (float)EndAtTime;
    Parms.NumLoopsToPlay = (int32_t)NumLoopsToPlay;
    Parms.PlayMode = (enum EUMGSequencePlayMode)PlayMode;
    Parms.PlaybackSpeed = (float)PlaybackSpeed;
    Parms.bRestoreState = (uint8_t)bRestoreState;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UUMGSequencePlayer* UUserWidget::PlayAnimationReverse(struct UWidgetAnimation* InAnimation, float PlaybackSpeed, uint8_t bRestoreState)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("UserWidget", "PlayAnimationReverse");
    struct
    {
        struct UWidgetAnimation* InAnimation;
        float PlaybackSpeed;
        uint8_t bRestoreState;
        struct UUMGSequencePlayer* ReturnValue;
    } Parms{};
    Parms.InAnimation = (struct UWidgetAnimation*)InAnimation;
    Parms.PlaybackSpeed = (float)PlaybackSpeed;
    Parms.bRestoreState = (uint8_t)bRestoreState;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UUMGSequencePlayer* UUserWidget::PlayAnimationForward(struct UWidgetAnimation* InAnimation, float PlaybackSpeed, uint8_t bRestoreState)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("UserWidget", "PlayAnimationForward");
    struct
    {
        struct UWidgetAnimation* InAnimation;
        float PlaybackSpeed;
        uint8_t bRestoreState;
        struct UUMGSequencePlayer* ReturnValue;
    } Parms{};
    Parms.InAnimation = (struct UWidgetAnimation*)InAnimation;
    Parms.PlaybackSpeed = (float)PlaybackSpeed;
    Parms.bRestoreState = (uint8_t)bRestoreState;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UUserWidget::PlayAnimationByName(struct FName InAnimationName, float StartAtTime, int32_t NumLoopsToPlay, EUMGSequencePlayMode PlayMode, float PlaybackSpeed, uint8_t bRestoreState)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("UserWidget", "PlayAnimationByName");
    struct
    {
        struct FName InAnimationName;
        float StartAtTime;
        int32_t NumLoopsToPlay;
        enum EUMGSequencePlayMode PlayMode;
        float PlaybackSpeed;
        uint8_t bRestoreState;
    } Parms{};
    Parms.InAnimationName = (struct FName)InAnimationName;
    Parms.StartAtTime = (float)StartAtTime;
    Parms.NumLoopsToPlay = (int32_t)NumLoopsToPlay;
    Parms.PlayMode = (enum EUMGSequencePlayMode)PlayMode;
    Parms.PlaybackSpeed = (float)PlaybackSpeed;
    Parms.bRestoreState = (uint8_t)bRestoreState;
    this->ProcessEvent(Func, &Parms);
}

struct UUMGSequencePlayer* UUserWidget::PlayAnimation(struct UWidgetAnimation* InAnimation, float StartAtTime, int32_t NumLoopsToPlay, EUMGSequencePlayMode PlayMode, float PlaybackSpeed, uint8_t bRestoreState)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("UserWidget", "PlayAnimation");
    struct
    {
        struct UWidgetAnimation* InAnimation;
        float StartAtTime;
        int32_t NumLoopsToPlay;
        enum EUMGSequencePlayMode PlayMode;
        float PlaybackSpeed;
        uint8_t bRestoreState;
        struct UUMGSequencePlayer* ReturnValue;
    } Parms{};
    Parms.InAnimation = (struct UWidgetAnimation*)InAnimation;
    Parms.StartAtTime = (float)StartAtTime;
    Parms.NumLoopsToPlay = (int32_t)NumLoopsToPlay;
    Parms.PlayMode = (enum EUMGSequencePlayMode)PlayMode;
    Parms.PlaybackSpeed = (float)PlaybackSpeed;
    Parms.bRestoreState = (uint8_t)bRestoreState;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UUserWidget::PauseAnimationByName(struct FName InAnimationName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("UserWidget", "PauseAnimationByName");
    struct
    {
        struct FName InAnimationName;
        float ReturnValue;
    } Parms{};
    Parms.InAnimationName = (struct FName)InAnimationName;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UUserWidget::PauseAnimation(struct UWidgetAnimation* InAnimation)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("UserWidget", "PauseAnimation");
    struct
    {
        struct UWidgetAnimation* InAnimation;
        float ReturnValue;
    } Parms{};
    Parms.InAnimation = (struct UWidgetAnimation*)InAnimation;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FEventReply UUserWidget::OnTouchStarted(struct FGeometry MyGeometry, const struct FPointerEvent& InTouchEvent)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("UserWidget", "OnTouchStarted");
    struct
    {
        struct FGeometry MyGeometry;
        struct FPointerEvent InTouchEvent;
        struct FEventReply ReturnValue;
    } Parms{};
    Parms.MyGeometry = (struct FGeometry)MyGeometry;
    Parms.InTouchEvent = (struct FPointerEvent)InTouchEvent;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FEventReply UUserWidget::OnTouchMoved(struct FGeometry MyGeometry, const struct FPointerEvent& InTouchEvent)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("UserWidget", "OnTouchMoved");
    struct
    {
        struct FGeometry MyGeometry;
        struct FPointerEvent InTouchEvent;
        struct FEventReply ReturnValue;
    } Parms{};
    Parms.MyGeometry = (struct FGeometry)MyGeometry;
    Parms.InTouchEvent = (struct FPointerEvent)InTouchEvent;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FEventReply UUserWidget::OnTouchGesture(struct FGeometry MyGeometry, const struct FPointerEvent& GestureEvent)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("UserWidget", "OnTouchGesture");
    struct
    {
        struct FGeometry MyGeometry;
        struct FPointerEvent GestureEvent;
        struct FEventReply ReturnValue;
    } Parms{};
    Parms.MyGeometry = (struct FGeometry)MyGeometry;
    Parms.GestureEvent = (struct FPointerEvent)GestureEvent;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FEventReply UUserWidget::OnTouchForceChanged(struct FGeometry MyGeometry, const struct FPointerEvent& InTouchEvent)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("UserWidget", "OnTouchForceChanged");
    struct
    {
        struct FGeometry MyGeometry;
        struct FPointerEvent InTouchEvent;
        struct FEventReply ReturnValue;
    } Parms{};
    Parms.MyGeometry = (struct FGeometry)MyGeometry;
    Parms.InTouchEvent = (struct FPointerEvent)InTouchEvent;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FEventReply UUserWidget::OnTouchEnded(struct FGeometry MyGeometry, const struct FPointerEvent& InTouchEvent)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("UserWidget", "OnTouchEnded");
    struct
    {
        struct FGeometry MyGeometry;
        struct FPointerEvent InTouchEvent;
        struct FEventReply ReturnValue;
    } Parms{};
    Parms.MyGeometry = (struct FGeometry)MyGeometry;
    Parms.InTouchEvent = (struct FPointerEvent)InTouchEvent;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UUserWidget::OnRemovedFromFocusPath(struct FFocusEvent InFocusEvent)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("UserWidget", "OnRemovedFromFocusPath");
    struct
    {
        struct FFocusEvent InFocusEvent;
    } Parms{};
    Parms.InFocusEvent = (struct FFocusEvent)InFocusEvent;
    this->ProcessEvent(Func, &Parms);
}

struct FEventReply UUserWidget::OnPreviewMouseButtonDown(struct FGeometry MyGeometry, const struct FPointerEvent& MouseEvent)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("UserWidget", "OnPreviewMouseButtonDown");
    struct
    {
        struct FGeometry MyGeometry;
        struct FPointerEvent MouseEvent;
        struct FEventReply ReturnValue;
    } Parms{};
    Parms.MyGeometry = (struct FGeometry)MyGeometry;
    Parms.MouseEvent = (struct FPointerEvent)MouseEvent;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FEventReply UUserWidget::OnPreviewKeyDown(struct FGeometry MyGeometry, struct FKeyEvent InKeyEvent)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("UserWidget", "OnPreviewKeyDown");
    struct
    {
        struct FGeometry MyGeometry;
        struct FKeyEvent InKeyEvent;
        struct FEventReply ReturnValue;
    } Parms{};
    Parms.MyGeometry = (struct FGeometry)MyGeometry;
    Parms.InKeyEvent = (struct FKeyEvent)InKeyEvent;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UUserWidget::OnPaint(struct FPaintContext& Context)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("UserWidget", "OnPaint");
    struct
    {
        struct FPaintContext Context;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    Context = Parms.Context;
}

struct FEventReply UUserWidget::OnMouseWheel(struct FGeometry MyGeometry, const struct FPointerEvent& MouseEvent)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("UserWidget", "OnMouseWheel");
    struct
    {
        struct FGeometry MyGeometry;
        struct FPointerEvent MouseEvent;
        struct FEventReply ReturnValue;
    } Parms{};
    Parms.MyGeometry = (struct FGeometry)MyGeometry;
    Parms.MouseEvent = (struct FPointerEvent)MouseEvent;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FEventReply UUserWidget::OnMouseMove(struct FGeometry MyGeometry, const struct FPointerEvent& MouseEvent)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("UserWidget", "OnMouseMove");
    struct
    {
        struct FGeometry MyGeometry;
        struct FPointerEvent MouseEvent;
        struct FEventReply ReturnValue;
    } Parms{};
    Parms.MyGeometry = (struct FGeometry)MyGeometry;
    Parms.MouseEvent = (struct FPointerEvent)MouseEvent;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UUserWidget::OnMouseLeave(const struct FPointerEvent& MouseEvent)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("UserWidget", "OnMouseLeave");
    struct
    {
        struct FPointerEvent MouseEvent;
    } Parms{};
    Parms.MouseEvent = (struct FPointerEvent)MouseEvent;
    this->ProcessEvent(Func, &Parms);
}

void UUserWidget::OnMouseEnter(struct FGeometry MyGeometry, const struct FPointerEvent& MouseEvent)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("UserWidget", "OnMouseEnter");
    struct
    {
        struct FGeometry MyGeometry;
        struct FPointerEvent MouseEvent;
    } Parms{};
    Parms.MyGeometry = (struct FGeometry)MyGeometry;
    Parms.MouseEvent = (struct FPointerEvent)MouseEvent;
    this->ProcessEvent(Func, &Parms);
}

void UUserWidget::OnMouseCaptureLost()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("UserWidget", "OnMouseCaptureLost");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

struct FEventReply UUserWidget::OnMouseButtonUp(struct FGeometry MyGeometry, const struct FPointerEvent& MouseEvent)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("UserWidget", "OnMouseButtonUp");
    struct
    {
        struct FGeometry MyGeometry;
        struct FPointerEvent MouseEvent;
        struct FEventReply ReturnValue;
    } Parms{};
    Parms.MyGeometry = (struct FGeometry)MyGeometry;
    Parms.MouseEvent = (struct FPointerEvent)MouseEvent;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FEventReply UUserWidget::OnMouseButtonDown(struct FGeometry MyGeometry, const struct FPointerEvent& MouseEvent)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("UserWidget", "OnMouseButtonDown");
    struct
    {
        struct FGeometry MyGeometry;
        struct FPointerEvent MouseEvent;
        struct FEventReply ReturnValue;
    } Parms{};
    Parms.MyGeometry = (struct FGeometry)MyGeometry;
    Parms.MouseEvent = (struct FPointerEvent)MouseEvent;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FEventReply UUserWidget::OnMouseButtonDoubleClick(struct FGeometry InMyGeometry, const struct FPointerEvent& InMouseEvent)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("UserWidget", "OnMouseButtonDoubleClick");
    struct
    {
        struct FGeometry InMyGeometry;
        struct FPointerEvent InMouseEvent;
        struct FEventReply ReturnValue;
    } Parms{};
    Parms.InMyGeometry = (struct FGeometry)InMyGeometry;
    Parms.InMouseEvent = (struct FPointerEvent)InMouseEvent;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FEventReply UUserWidget::OnMotionDetected(struct FGeometry MyGeometry, struct FMotionEvent InMotionEvent)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("UserWidget", "OnMotionDetected");
    struct
    {
        struct FGeometry MyGeometry;
        struct FMotionEvent InMotionEvent;
        struct FEventReply ReturnValue;
    } Parms{};
    Parms.MyGeometry = (struct FGeometry)MyGeometry;
    Parms.InMotionEvent = (struct FMotionEvent)InMotionEvent;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FEventReply UUserWidget::OnKeyUp(struct FGeometry MyGeometry, struct FKeyEvent InKeyEvent)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("UserWidget", "OnKeyUp");
    struct
    {
        struct FGeometry MyGeometry;
        struct FKeyEvent InKeyEvent;
        struct FEventReply ReturnValue;
    } Parms{};
    Parms.MyGeometry = (struct FGeometry)MyGeometry;
    Parms.InKeyEvent = (struct FKeyEvent)InKeyEvent;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FEventReply UUserWidget::OnKeyDown(struct FGeometry MyGeometry, struct FKeyEvent InKeyEvent)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("UserWidget", "OnKeyDown");
    struct
    {
        struct FGeometry MyGeometry;
        struct FKeyEvent InKeyEvent;
        struct FEventReply ReturnValue;
    } Parms{};
    Parms.MyGeometry = (struct FGeometry)MyGeometry;
    Parms.InKeyEvent = (struct FKeyEvent)InKeyEvent;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FEventReply UUserWidget::OnKeyChar(struct FGeometry MyGeometry, struct FCharacterEvent InCharacterEvent)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("UserWidget", "OnKeyChar");
    struct
    {
        struct FGeometry MyGeometry;
        struct FCharacterEvent InCharacterEvent;
        struct FEventReply ReturnValue;
    } Parms{};
    Parms.MyGeometry = (struct FGeometry)MyGeometry;
    Parms.InCharacterEvent = (struct FCharacterEvent)InCharacterEvent;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UUserWidget::OnInitialized()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("UserWidget", "OnInitialized");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

struct FEventReply UUserWidget::OnFocusReceived(struct FGeometry MyGeometry, struct FFocusEvent InFocusEvent)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("UserWidget", "OnFocusReceived");
    struct
    {
        struct FGeometry MyGeometry;
        struct FFocusEvent InFocusEvent;
        struct FEventReply ReturnValue;
    } Parms{};
    Parms.MyGeometry = (struct FGeometry)MyGeometry;
    Parms.InFocusEvent = (struct FFocusEvent)InFocusEvent;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UUserWidget::OnFocusLost(struct FFocusEvent InFocusEvent)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("UserWidget", "OnFocusLost");
    struct
    {
        struct FFocusEvent InFocusEvent;
    } Parms{};
    Parms.InFocusEvent = (struct FFocusEvent)InFocusEvent;
    this->ProcessEvent(Func, &Parms);
}

uint8_t UUserWidget::OnDrop(struct FGeometry MyGeometry, struct FPointerEvent PointerEvent, struct UDragDropOperation* Operation)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("UserWidget", "OnDrop");
    struct
    {
        struct FGeometry MyGeometry;
        struct FPointerEvent PointerEvent;
        struct UDragDropOperation* Operation;
        uint8_t ReturnValue;
    } Parms{};
    Parms.MyGeometry = (struct FGeometry)MyGeometry;
    Parms.PointerEvent = (struct FPointerEvent)PointerEvent;
    Parms.Operation = (struct UDragDropOperation*)Operation;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UUserWidget::OnDragOver(struct FGeometry MyGeometry, struct FPointerEvent PointerEvent, struct UDragDropOperation* Operation)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("UserWidget", "OnDragOver");
    struct
    {
        struct FGeometry MyGeometry;
        struct FPointerEvent PointerEvent;
        struct UDragDropOperation* Operation;
        uint8_t ReturnValue;
    } Parms{};
    Parms.MyGeometry = (struct FGeometry)MyGeometry;
    Parms.PointerEvent = (struct FPointerEvent)PointerEvent;
    Parms.Operation = (struct UDragDropOperation*)Operation;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UUserWidget::OnDragLeave(struct FPointerEvent PointerEvent, struct UDragDropOperation* Operation)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("UserWidget", "OnDragLeave");
    struct
    {
        struct FPointerEvent PointerEvent;
        struct UDragDropOperation* Operation;
    } Parms{};
    Parms.PointerEvent = (struct FPointerEvent)PointerEvent;
    Parms.Operation = (struct UDragDropOperation*)Operation;
    this->ProcessEvent(Func, &Parms);
}

void UUserWidget::OnDragEnter(struct FGeometry MyGeometry, struct FPointerEvent PointerEvent, struct UDragDropOperation* Operation)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("UserWidget", "OnDragEnter");
    struct
    {
        struct FGeometry MyGeometry;
        struct FPointerEvent PointerEvent;
        struct UDragDropOperation* Operation;
    } Parms{};
    Parms.MyGeometry = (struct FGeometry)MyGeometry;
    Parms.PointerEvent = (struct FPointerEvent)PointerEvent;
    Parms.Operation = (struct UDragDropOperation*)Operation;
    this->ProcessEvent(Func, &Parms);
}

void UUserWidget::OnDragDetected(struct FGeometry MyGeometry, const struct FPointerEvent& PointerEvent, struct UDragDropOperation*& Operation)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("UserWidget", "OnDragDetected");
    struct
    {
        struct FGeometry MyGeometry;
        struct FPointerEvent PointerEvent;
        struct UDragDropOperation* Operation;
    } Parms{};
    Parms.MyGeometry = (struct FGeometry)MyGeometry;
    Parms.PointerEvent = (struct FPointerEvent)PointerEvent;
    this->ProcessEvent(Func, &Parms);
    Operation = Parms.Operation;
}

void UUserWidget::OnDragCancelled(const struct FPointerEvent& PointerEvent, struct UDragDropOperation* Operation)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("UserWidget", "OnDragCancelled");
    struct
    {
        struct FPointerEvent PointerEvent;
        struct UDragDropOperation* Operation;
    } Parms{};
    Parms.PointerEvent = (struct FPointerEvent)PointerEvent;
    Parms.Operation = (struct UDragDropOperation*)Operation;
    this->ProcessEvent(Func, &Parms);
}

void UUserWidget::OnAnimationStarted(struct UWidgetAnimation* Animation)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("UserWidget", "OnAnimationStarted");
    struct
    {
        struct UWidgetAnimation* Animation;
    } Parms{};
    Parms.Animation = (struct UWidgetAnimation*)Animation;
    this->ProcessEvent(Func, &Parms);
}

void UUserWidget::OnAnimationFinished(struct UWidgetAnimation* Animation)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("UserWidget", "OnAnimationFinished");
    struct
    {
        struct UWidgetAnimation* Animation;
    } Parms{};
    Parms.Animation = (struct UWidgetAnimation*)Animation;
    this->ProcessEvent(Func, &Parms);
}

struct FEventReply UUserWidget::OnAnalogValueChanged(struct FGeometry MyGeometry, struct FAnalogInputEvent InAnalogInputEvent)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("UserWidget", "OnAnalogValueChanged");
    struct
    {
        struct FGeometry MyGeometry;
        struct FAnalogInputEvent InAnalogInputEvent;
        struct FEventReply ReturnValue;
    } Parms{};
    Parms.MyGeometry = (struct FGeometry)MyGeometry;
    Parms.InAnalogInputEvent = (struct FAnalogInputEvent)InAnalogInputEvent;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UUserWidget::OnAddedToFocusPath(struct FFocusEvent InFocusEvent)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("UserWidget", "OnAddedToFocusPath");
    struct
    {
        struct FFocusEvent InFocusEvent;
    } Parms{};
    Parms.InFocusEvent = (struct FFocusEvent)InFocusEvent;
    this->ProcessEvent(Func, &Parms);
}

void UUserWidget::ListenForInputAction(struct FName ActionName, EInputEvent EventType, uint8_t bConsume, struct FDelegate callback)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("UserWidget", "ListenForInputAction");
    struct
    {
        struct FName ActionName;
        enum EInputEvent EventType;
        uint8_t bConsume;
        struct FDelegate callback;
    } Parms{};
    Parms.ActionName = (struct FName)ActionName;
    Parms.EventType = (enum EInputEvent)EventType;
    Parms.bConsume = (uint8_t)bConsume;
    Parms.callback = (struct FDelegate)callback;
    this->ProcessEvent(Func, &Parms);
}

uint8_t UUserWidget::IsPlayingAnimation()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("UserWidget", "IsPlayingAnimation");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UUserWidget::IsListeningForInputAction(struct FName ActionName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("UserWidget", "IsListeningForInputAction");
    struct
    {
        struct FName ActionName;
        uint8_t ReturnValue;
    } Parms{};
    Parms.ActionName = (struct FName)ActionName;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UUserWidget::IsInViewport()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("UserWidget", "IsInViewport");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UUserWidget::IsInteractable()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("UserWidget", "IsInteractable");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UUserWidget::IsAnyAnimationPlaying()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("UserWidget", "IsAnyAnimationPlaying");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UUserWidget::IsAnimationPlayingForward(struct UWidgetAnimation* InAnimation)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("UserWidget", "IsAnimationPlayingForward");
    struct
    {
        struct UWidgetAnimation* InAnimation;
        uint8_t ReturnValue;
    } Parms{};
    Parms.InAnimation = (struct UWidgetAnimation*)InAnimation;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UUserWidget::IsAnimationPlaying(struct UWidgetAnimation* InAnimation)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("UserWidget", "IsAnimationPlaying");
    struct
    {
        struct UWidgetAnimation* InAnimation;
        uint8_t ReturnValue;
    } Parms{};
    Parms.InAnimation = (struct UWidgetAnimation*)InAnimation;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct APawn* UUserWidget::GetOwningPlayerPawn()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("UserWidget", "GetOwningPlayerPawn");
    struct
    {
        struct APawn* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UUserWidget::GetIsVisible()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("UserWidget", "GetIsVisible");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UUserWidget::GetAnimationCurrentTime(struct UWidgetAnimation* InAnimation)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("UserWidget", "GetAnimationCurrentTime");
    struct
    {
        struct UWidgetAnimation* InAnimation;
        float ReturnValue;
    } Parms{};
    Parms.InAnimation = (struct UWidgetAnimation*)InAnimation;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FAnchors UUserWidget::GetAnchorsInViewport()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("UserWidget", "GetAnchorsInViewport");
    struct
    {
        struct FAnchors ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FVector2D UUserWidget::GetAlignmentInViewport()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("UserWidget", "GetAlignmentInViewport");
    struct
    {
        struct FVector2D ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UUserWidget::Destruct()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("UserWidget", "Destruct");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UUserWidget::Construct()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("UserWidget", "Construct");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UUserWidget::CancelLatentActions()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("UserWidget", "CancelLatentActions");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UUserWidget::BindToAnimationStarted(struct UWidgetAnimation* Animation, struct FDelegate Delegate)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("UserWidget", "BindToAnimationStarted");
    struct
    {
        struct UWidgetAnimation* Animation;
        struct FDelegate Delegate;
    } Parms{};
    Parms.Animation = (struct UWidgetAnimation*)Animation;
    Parms.Delegate = (struct FDelegate)Delegate;
    this->ProcessEvent(Func, &Parms);
}

void UUserWidget::BindToAnimationFinished(struct UWidgetAnimation* Animation, struct FDelegate Delegate)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("UserWidget", "BindToAnimationFinished");
    struct
    {
        struct UWidgetAnimation* Animation;
        struct FDelegate Delegate;
    } Parms{};
    Parms.Animation = (struct UWidgetAnimation*)Animation;
    Parms.Delegate = (struct FDelegate)Delegate;
    this->ProcessEvent(Func, &Parms);
}

void UUserWidget::BindToAnimationEvent(struct UWidgetAnimation* Animation, struct FDelegate Delegate, EWidgetAnimationEvent AnimationEvent, struct FName UserTag)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("UserWidget", "BindToAnimationEvent");
    struct
    {
        struct UWidgetAnimation* Animation;
        struct FDelegate Delegate;
        enum EWidgetAnimationEvent AnimationEvent;
        struct FName UserTag;
    } Parms{};
    Parms.Animation = (struct UWidgetAnimation*)Animation;
    Parms.Delegate = (struct FDelegate)Delegate;
    Parms.AnimationEvent = (enum EWidgetAnimationEvent)AnimationEvent;
    Parms.UserTag = (struct FName)UserTag;
    this->ProcessEvent(Func, &Parms);
}

void UUserWidget::AddToViewport(int32_t ZOrder)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("UserWidget", "AddToViewport");
    struct
    {
        int32_t ZOrder;
    } Parms{};
    Parms.ZOrder = (int32_t)ZOrder;
    this->ProcessEvent(Func, &Parms);
}

uint8_t UUserWidget::AddToPlayerScreen(int32_t ZOrder)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("UserWidget", "AddToPlayerScreen");
    struct
    {
        int32_t ZOrder;
        uint8_t ReturnValue;
    } Parms{};
    Parms.ZOrder = (int32_t)ZOrder;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// ---- UPanelWidget::* ----
uint8_t UPanelWidget::ReplaceChildAt(int32_t Index, struct UWidget* Content)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PanelWidget", "ReplaceChildAt");
    struct
    {
        int32_t Index;
        struct UWidget* Content;
        uint8_t ReturnValue;
    } Parms{};
    Parms.Index = (int32_t)Index;
    Parms.Content = (struct UWidget*)Content;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UPanelWidget::RemoveChildAt(int32_t Index)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PanelWidget", "RemoveChildAt");
    struct
    {
        int32_t Index;
        uint8_t ReturnValue;
    } Parms{};
    Parms.Index = (int32_t)Index;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UPanelWidget::RemoveChild(struct UWidget* Content)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PanelWidget", "RemoveChild");
    struct
    {
        struct UWidget* Content;
        uint8_t ReturnValue;
    } Parms{};
    Parms.Content = (struct UWidget*)Content;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UPanelWidget::ReleaseSlateResources(uint8_t bReleaseChildren)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PanelWidget", "ReleaseSlateResources");
    struct
    {
        uint8_t bReleaseChildren;
    } Parms{};
    Parms.bReleaseChildren = (uint8_t)bReleaseChildren;
    this->ProcessEvent(Func, &Parms);
}

void UPanelWidget::OnSlotRemoved(struct UPanelSlot* InSlot)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PanelWidget", "OnSlotRemoved");
    struct
    {
        struct UPanelSlot* InSlot;
    } Parms{};
    Parms.InSlot = (struct UPanelSlot*)InSlot;
    this->ProcessEvent(Func, &Parms);
}

void UPanelWidget::OnSlotInserted(struct UPanelSlot* InSlot, int32_t Index)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PanelWidget", "OnSlotInserted");
    struct
    {
        struct UPanelSlot* InSlot;
        int32_t Index;
    } Parms{};
    Parms.InSlot = (struct UPanelSlot*)InSlot;
    Parms.Index = (int32_t)Index;
    this->ProcessEvent(Func, &Parms);
}

void UPanelWidget::OnSlotAdded(struct UPanelSlot* InSlot)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PanelWidget", "OnSlotAdded");
    struct
    {
        struct UPanelSlot* InSlot;
    } Parms{};
    Parms.InSlot = (struct UPanelSlot*)InSlot;
    this->ProcessEvent(Func, &Parms);
}

struct UPanelSlot* UPanelWidget::InternalInsertChildAt(int32_t Index, struct UWidget* Content)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PanelWidget", "InternalInsertChildAt");
    struct
    {
        int32_t Index;
        struct UWidget* Content;
        struct UPanelSlot* ReturnValue;
    } Parms{};
    Parms.Index = (int32_t)Index;
    Parms.Content = (struct UWidget*)Content;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UPanelSlot* UPanelWidget::InsertChildAt(int32_t Index, struct UWidget* Content)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PanelWidget", "InsertChildAt");
    struct
    {
        int32_t Index;
        struct UWidget* Content;
        struct UPanelSlot* ReturnValue;
    } Parms{};
    Parms.Index = (int32_t)Index;
    Parms.Content = (struct UWidget*)Content;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UPanelWidget::HasChild(struct UWidget* Content)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PanelWidget", "HasChild");
    struct
    {
        struct UWidget* Content;
        uint8_t ReturnValue;
    } Parms{};
    Parms.Content = (struct UWidget*)Content;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UPanelWidget::HasAnyChildren()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PanelWidget", "HasAnyChildren");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct TArray<struct UPanelSlot*> UPanelWidget::GetSlots()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PanelWidget", "GetSlots");
    struct
    {
        struct TArray<struct UPanelSlot*> ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UObject* UPanelWidget::GetSlotClass()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PanelWidget", "GetSlotClass");
    struct
    {
        struct UObject* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UPanelWidget::GetChildrenCount()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PanelWidget", "GetChildrenCount");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UPanelWidget::GetChildIndex(struct UWidget* Content)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PanelWidget", "GetChildIndex");
    struct
    {
        struct UWidget* Content;
        int32_t ReturnValue;
    } Parms{};
    Parms.Content = (struct UWidget*)Content;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UWidget* UPanelWidget::GetChildAt(int32_t Index)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PanelWidget", "GetChildAt");
    struct
    {
        int32_t Index;
        struct UWidget* ReturnValue;
    } Parms{};
    Parms.Index = (int32_t)Index;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct TArray<struct UWidget*> UPanelWidget::GetAllChildren()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PanelWidget", "GetAllChildren");
    struct
    {
        struct TArray<struct UWidget*> ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UPanelWidget::ClearChildren()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PanelWidget", "ClearChildren");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

uint8_t UPanelWidget::CanHaveMultipleChildren()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PanelWidget", "CanHaveMultipleChildren");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UPanelWidget::CanAddMoreChildren()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PanelWidget", "CanAddMoreChildren");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UPanelSlot* UPanelWidget::AddChild(struct UWidget* Content)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PanelWidget", "AddChild");
    struct
    {
        struct UWidget* Content;
        struct UPanelSlot* ReturnValue;
    } Parms{};
    Parms.Content = (struct UWidget*)Content;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// ---- UWidgetSwitcher::* ----
void UWidgetSwitcher::SetActiveWidgetIndex(int32_t Index)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WidgetSwitcher", "SetActiveWidgetIndex");
    struct
    {
        int32_t Index;
    } Parms{};
    Parms.Index = (int32_t)Index;
    this->ProcessEvent(Func, &Parms);
}

void UWidgetSwitcher::SetActiveWidget(struct UWidget* Widget)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WidgetSwitcher", "SetActiveWidget");
    struct
    {
        struct UWidget* Widget;
    } Parms{};
    Parms.Widget = (struct UWidget*)Widget;
    this->ProcessEvent(Func, &Parms);
}

struct UWidget* UWidgetSwitcher::GetWidgetAtIndex(int32_t Index)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WidgetSwitcher", "GetWidgetAtIndex");
    struct
    {
        int32_t Index;
        struct UWidget* ReturnValue;
    } Parms{};
    Parms.Index = (int32_t)Index;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UWidgetSwitcher::GetNumWidgets()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WidgetSwitcher", "GetNumWidgets");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UWidgetSwitcher::GetActiveWidgetIndex()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WidgetSwitcher", "GetActiveWidgetIndex");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UWidget* UWidgetSwitcher::GetActiveWidget()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WidgetSwitcher", "GetActiveWidget");
    struct
    {
        struct UWidget* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// ---- UContentWidget::* ----
struct UPanelSlot* UContentWidget::SetContent(struct UWidget* Content)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ContentWidget", "SetContent");
    struct
    {
        struct UWidget* Content;
        struct UPanelSlot* ReturnValue;
    } Parms{};
    Parms.Content = (struct UWidget*)Content;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UPanelSlot* UContentWidget::GetContentSlot()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ContentWidget", "GetContentSlot");
    struct
    {
        struct UPanelSlot* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UWidget* UContentWidget::GetContent()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ContentWidget", "GetContent");
    struct
    {
        struct UWidget* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// ---- UBorder::* ----
void UBorder::SetVerticalAlignment(EVerticalAlignment InVerticalAlignment)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("Border", "SetVerticalAlignment");
    struct
    {
        enum EVerticalAlignment InVerticalAlignment;
    } Parms{};
    Parms.InVerticalAlignment = (enum EVerticalAlignment)InVerticalAlignment;
    this->ProcessEvent(Func, &Parms);
}

void UBorder::SetPadding(struct FMargin InPadding)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("Border", "SetPadding");
    struct
    {
        struct FMargin InPadding;
    } Parms{};
    Parms.InPadding = (struct FMargin)InPadding;
    this->ProcessEvent(Func, &Parms);
}

void UBorder::SetHorizontalAlignment(EHorizontalAlignment InHorizontalAlignment)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("Border", "SetHorizontalAlignment");
    struct
    {
        enum EHorizontalAlignment InHorizontalAlignment;
    } Parms{};
    Parms.InHorizontalAlignment = (enum EHorizontalAlignment)InHorizontalAlignment;
    this->ProcessEvent(Func, &Parms);
}

void UBorder::SetDesiredSizeScale(struct FVector2D InScale)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("Border", "SetDesiredSizeScale");
    struct
    {
        struct FVector2D InScale;
    } Parms{};
    Parms.InScale = (struct FVector2D)InScale;
    this->ProcessEvent(Func, &Parms);
}

void UBorder::SetContentColorAndOpacity(struct FLinearColor InContentColorAndOpacity)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("Border", "SetContentColorAndOpacity");
    struct
    {
        struct FLinearColor InContentColorAndOpacity;
    } Parms{};
    Parms.InContentColorAndOpacity = (struct FLinearColor)InContentColorAndOpacity;
    this->ProcessEvent(Func, &Parms);
}

void UBorder::SetBrushFromTexture(struct UTexture2D* Texture)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("Border", "SetBrushFromTexture");
    struct
    {
        struct UTexture2D* Texture;
    } Parms{};
    Parms.Texture = (struct UTexture2D*)Texture;
    this->ProcessEvent(Func, &Parms);
}

void UBorder::SetBrushFromMaterial(struct UMaterialInterface* Material)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("Border", "SetBrushFromMaterial");
    struct
    {
        struct UMaterialInterface* Material;
    } Parms{};
    Parms.Material = (struct UMaterialInterface*)Material;
    this->ProcessEvent(Func, &Parms);
}

void UBorder::SetBrushFromAsset(struct USlateBrushAsset* Asset)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("Border", "SetBrushFromAsset");
    struct
    {
        struct USlateBrushAsset* Asset;
    } Parms{};
    Parms.Asset = (struct USlateBrushAsset*)Asset;
    this->ProcessEvent(Func, &Parms);
}

void UBorder::SetBrushColor(struct FLinearColor InBrushColor)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("Border", "SetBrushColor");
    struct
    {
        struct FLinearColor InBrushColor;
    } Parms{};
    Parms.InBrushColor = (struct FLinearColor)InBrushColor;
    this->ProcessEvent(Func, &Parms);
}

void UBorder::SetBrush(const struct FSlateBrush& InBrush)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("Border", "SetBrush");
    struct
    {
        struct FSlateBrush InBrush;
    } Parms{};
    Parms.InBrush = (struct FSlateBrush)InBrush;
    this->ProcessEvent(Func, &Parms);
}

struct UMaterialInstanceDynamic* UBorder::GetDynamicMaterial()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("Border", "GetDynamicMaterial");
    struct
    {
        struct UMaterialInstanceDynamic* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// ---- UTextLayoutWidget::* ----
void UTextLayoutWidget::SetVerticalJustification(ETextVerticalJustify VJustification)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("TextLayoutWidget", "SetVerticalJustification");
    struct
    {
        enum ETextVerticalJustify VJustification;
    } Parms{};
    Parms.VJustification = (enum ETextVerticalJustify)VJustification;
    this->ProcessEvent(Func, &Parms);
}

void UTextLayoutWidget::SetJustification(ETextJustify InJustification)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("TextLayoutWidget", "SetJustification");
    struct
    {
        enum ETextJustify InJustification;
    } Parms{};
    Parms.InJustification = (enum ETextJustify)InJustification;
    this->ProcessEvent(Func, &Parms);
}

// ---- UTextBlock::* ----
void UTextBlock::SetTextUpperPolicy(ETextUpperPolicy InTextUpperPolicy)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("TextBlock", "SetTextUpperPolicy");
    struct
    {
        enum ETextUpperPolicy InTextUpperPolicy;
    } Parms{};
    Parms.InTextUpperPolicy = (enum ETextUpperPolicy)InTextUpperPolicy;
    this->ProcessEvent(Func, &Parms);
}

void UTextBlock::SetTextOverflowAutoEllipse(ETextOverflowPolicy InOverflowAutoEllipse)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("TextBlock", "SetTextOverflowAutoEllipse");
    struct
    {
        enum ETextOverflowPolicy InOverflowAutoEllipse;
    } Parms{};
    Parms.InOverflowAutoEllipse = (enum ETextOverflowPolicy)InOverflowAutoEllipse;
    this->ProcessEvent(Func, &Parms);
}

void UTextBlock::SetText(struct FText InText)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("TextBlock", "SetText");
    struct
    {
        struct FText InText;
    } Parms{};
    Parms.InText = (struct FText)InText;
    this->ProcessEvent(Func, &Parms);
}

void UTextBlock::SetStrikeBrush(struct FSlateBrush InStrikeBrush)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("TextBlock", "SetStrikeBrush");
    struct
    {
        struct FSlateBrush InStrikeBrush;
    } Parms{};
    Parms.InStrikeBrush = (struct FSlateBrush)InStrikeBrush;
    this->ProcessEvent(Func, &Parms);
}

void UTextBlock::SetShadowOffset(struct FVector2D InShadowOffset)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("TextBlock", "SetShadowOffset");
    struct
    {
        struct FVector2D InShadowOffset;
    } Parms{};
    Parms.InShadowOffset = (struct FVector2D)InShadowOffset;
    this->ProcessEvent(Func, &Parms);
}

void UTextBlock::SetShadowColorAndOpacity(struct FLinearColor InShadowColorAndOpacity)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("TextBlock", "SetShadowColorAndOpacity");
    struct
    {
        struct FLinearColor InShadowColorAndOpacity;
    } Parms{};
    Parms.InShadowColorAndOpacity = (struct FLinearColor)InShadowColorAndOpacity;
    this->ProcessEvent(Func, &Parms);
}

void UTextBlock::SetOpacity(float InOpacity)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("TextBlock", "SetOpacity");
    struct
    {
        float InOpacity;
    } Parms{};
    Parms.InOpacity = (float)InOpacity;
    this->ProcessEvent(Func, &Parms);
}

void UTextBlock::SetMinDesiredWidth(float InMinDesiredWidth)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("TextBlock", "SetMinDesiredWidth");
    struct
    {
        float InMinDesiredWidth;
    } Parms{};
    Parms.InMinDesiredWidth = (float)InMinDesiredWidth;
    this->ProcessEvent(Func, &Parms);
}

void UTextBlock::SetMaxSize(struct FVector2D InSize)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("TextBlock", "SetMaxSize");
    struct
    {
        struct FVector2D InSize;
    } Parms{};
    Parms.InSize = (struct FVector2D)InSize;
    this->ProcessEvent(Func, &Parms);
}

void UTextBlock::SetFontStyleID(const struct FName& InNewFontStyleID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("TextBlock", "SetFontStyleID");
    struct
    {
        struct FName InNewFontStyleID;
    } Parms{};
    Parms.InNewFontStyleID = (struct FName)InNewFontStyleID;
    this->ProcessEvent(Func, &Parms);
}

void UTextBlock::SetFont(struct FSlateFontInfo InFontInfo)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("TextBlock", "SetFont");
    struct
    {
        struct FSlateFontInfo InFontInfo;
    } Parms{};
    Parms.InFontInfo = (struct FSlateFontInfo)InFontInfo;
    this->ProcessEvent(Func, &Parms);
}

void UTextBlock::SetDynamicAdaptType(EDynamicAdaptType InType)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("TextBlock", "SetDynamicAdaptType");
    struct
    {
        enum EDynamicAdaptType InType;
    } Parms{};
    Parms.InType = (enum EDynamicAdaptType)InType;
    this->ProcessEvent(Func, &Parms);
}

void UTextBlock::SetCustomTextFlowPolicy(ECustomTextFlowPolicy InCustomTextFlowPolicy)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("TextBlock", "SetCustomTextFlowPolicy");
    struct
    {
        enum ECustomTextFlowPolicy InCustomTextFlowPolicy;
    } Parms{};
    Parms.InCustomTextFlowPolicy = (enum ECustomTextFlowPolicy)InCustomTextFlowPolicy;
    this->ProcessEvent(Func, &Parms);
}

void UTextBlock::SetColorAndOpacity(struct FSlateColor InColorAndOpacity)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("TextBlock", "SetColorAndOpacity");
    struct
    {
        struct FSlateColor InColorAndOpacity;
    } Parms{};
    Parms.InColorAndOpacity = (struct FSlateColor)InColorAndOpacity;
    this->ProcessEvent(Func, &Parms);
}

void UTextBlock::SetAutoWrapText(uint8_t InAutoTextWrap)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("TextBlock", "SetAutoWrapText");
    struct
    {
        uint8_t InAutoTextWrap;
    } Parms{};
    Parms.InAutoTextWrap = (uint8_t)InAutoTextWrap;
    this->ProcessEvent(Func, &Parms);
}

struct FText UTextBlock::GetText()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("TextBlock", "GetText");
    struct
    {
        struct FText ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UTextBlock::GetRealTextBlockWidth()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("TextBlock", "GetRealTextBlockWidth");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FVector2D UTextBlock::GetMaxSize()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("TextBlock", "GetMaxSize");
    struct
    {
        struct FVector2D ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FName UTextBlock::GetFontStyleID()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("TextBlock", "GetFontStyleID");
    struct
    {
        struct FName ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UMaterialInstanceDynamic* UTextBlock::GetDynamicOutlineMaterial()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("TextBlock", "GetDynamicOutlineMaterial");
    struct
    {
        struct UMaterialInstanceDynamic* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UMaterialInstanceDynamic* UTextBlock::GetDynamicFontMaterial()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("TextBlock", "GetDynamicFontMaterial");
    struct
    {
        struct UMaterialInstanceDynamic* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

EDynamicAdaptType UTextBlock::GetDynamicAdaptType()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("TextBlock", "GetDynamicAdaptType");
    struct
    {
        enum EDynamicAdaptType ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UTextBlock::BP_SetWrapTextAt(float TextAt)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("TextBlock", "BP_SetWrapTextAt");
    struct
    {
        float TextAt;
    } Parms{};
    Parms.TextAt = (float)TextAt;
    this->ProcessEvent(Func, &Parms);
}

// ---- UScrollBox::* ----
void UScrollBox::SetWheelScrollMultiplier(float NewWheelScrollMultiplier)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ScrollBox", "SetWheelScrollMultiplier");
    struct
    {
        float NewWheelScrollMultiplier;
    } Parms{};
    Parms.NewWheelScrollMultiplier = (float)NewWheelScrollMultiplier;
    this->ProcessEvent(Func, &Parms);
}

void UScrollBox::SetScrollOffset(float NewScrollOffset)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ScrollBox", "SetScrollOffset");
    struct
    {
        float NewScrollOffset;
    } Parms{};
    Parms.NewScrollOffset = (float)NewScrollOffset;
    this->ProcessEvent(Func, &Parms);
}

void UScrollBox::SetScrollBarVisibility(ESlateVisibility NewScrollBarVisibility)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ScrollBox", "SetScrollBarVisibility");
    struct
    {
        enum ESlateVisibility NewScrollBarVisibility;
    } Parms{};
    Parms.NewScrollBarVisibility = (enum ESlateVisibility)NewScrollBarVisibility;
    this->ProcessEvent(Func, &Parms);
}

void UScrollBox::SetScrollbarThickness(const struct FVector2D& NewScrollbarThickness)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ScrollBox", "SetScrollbarThickness");
    struct
    {
        struct FVector2D NewScrollbarThickness;
    } Parms{};
    Parms.NewScrollbarThickness = (struct FVector2D)NewScrollbarThickness;
    this->ProcessEvent(Func, &Parms);
}

void UScrollBox::SetScrollbarPadding(const struct FMargin& NewScrollbarPadding)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ScrollBox", "SetScrollbarPadding");
    struct
    {
        struct FMargin NewScrollbarPadding;
    } Parms{};
    Parms.NewScrollbarPadding = (struct FMargin)NewScrollbarPadding;
    this->ProcessEvent(Func, &Parms);
}

void UScrollBox::SetOverrideDragTriggerDistance(float InOverrideDragTriggerDistance)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ScrollBox", "SetOverrideDragTriggerDistance");
    struct
    {
        float InOverrideDragTriggerDistance;
    } Parms{};
    Parms.InOverrideDragTriggerDistance = (float)InOverrideDragTriggerDistance;
    this->ProcessEvent(Func, &Parms);
}

void UScrollBox::SetOrientation(EOrientation NewOrientation)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ScrollBox", "SetOrientation");
    struct
    {
        enum EOrientation NewOrientation;
    } Parms{};
    Parms.NewOrientation = (enum EOrientation)NewOrientation;
    this->ProcessEvent(Func, &Parms);
}

void UScrollBox::SetItemVisibility(ESlateVisibility InItemVisibility)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ScrollBox", "SetItemVisibility");
    struct
    {
        enum ESlateVisibility InItemVisibility;
    } Parms{};
    Parms.InItemVisibility = (enum ESlateVisibility)InItemVisibility;
    this->ProcessEvent(Func, &Parms);
}

void UScrollBox::SetConsumeMouseWheel(EConsumeMouseWheel NewConsumeMouseWheel)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ScrollBox", "SetConsumeMouseWheel");
    struct
    {
        enum EConsumeMouseWheel NewConsumeMouseWheel;
    } Parms{};
    Parms.NewConsumeMouseWheel = (enum EConsumeMouseWheel)NewConsumeMouseWheel;
    this->ProcessEvent(Func, &Parms);
}

void UScrollBox::SetAnimateWheelScrolling(uint8_t bShouldAnimateWheelScrolling)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ScrollBox", "SetAnimateWheelScrolling");
    struct
    {
        uint8_t bShouldAnimateWheelScrolling;
    } Parms{};
    Parms.bShouldAnimateWheelScrolling = (uint8_t)bShouldAnimateWheelScrolling;
    this->ProcessEvent(Func, &Parms);
}

void UScrollBox::SetAlwaysShowScrollbar(uint8_t NewAlwaysShowScrollbar)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ScrollBox", "SetAlwaysShowScrollbar");
    struct
    {
        uint8_t NewAlwaysShowScrollbar;
    } Parms{};
    Parms.NewAlwaysShowScrollbar = (uint8_t)NewAlwaysShowScrollbar;
    this->ProcessEvent(Func, &Parms);
}

void UScrollBox::SetAllowOverscroll(uint8_t NewAllowOverscroll)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ScrollBox", "SetAllowOverscroll");
    struct
    {
        uint8_t NewAllowOverscroll;
    } Parms{};
    Parms.NewAllowOverscroll = (uint8_t)NewAllowOverscroll;
    this->ProcessEvent(Func, &Parms);
}

void UScrollBox::ScrollWidgetIntoView(struct UWidget* WidgetToFind, uint8_t AnimateScroll, EDescendantScrollDestination ScrollDestination)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ScrollBox", "ScrollWidgetIntoView");
    struct
    {
        struct UWidget* WidgetToFind;
        uint8_t AnimateScroll;
        enum EDescendantScrollDestination ScrollDestination;
    } Parms{};
    Parms.WidgetToFind = (struct UWidget*)WidgetToFind;
    Parms.AnimateScroll = (uint8_t)AnimateScroll;
    Parms.ScrollDestination = (enum EDescendantScrollDestination)ScrollDestination;
    this->ProcessEvent(Func, &Parms);
}

void UScrollBox::ScrollToStart()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ScrollBox", "ScrollToStart");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UScrollBox::ScrollToEnd()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ScrollBox", "ScrollToEnd");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UScrollBox::RefreshItem(int32_t ItemIndex)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ScrollBox", "RefreshItem");
    struct
    {
        int32_t ItemIndex;
    } Parms{};
    Parms.ItemIndex = (int32_t)ItemIndex;
    this->ProcessEvent(Func, &Parms);
}

void UScrollBox::RefreshAllItems()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ScrollBox", "RefreshAllItems");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

float UScrollBox::GetViewOffsetFraction()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ScrollBox", "GetViewOffsetFraction");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UScrollBox::GetScrollOffsetOfEnd()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ScrollBox", "GetScrollOffsetOfEnd");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UScrollBox::GetScrollOffset()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ScrollBox", "GetScrollOffset");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UScrollBox::GetItemCount()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ScrollBox", "GetItemCount");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UWidget* UScrollBox::GetItemByIndex(int32_t ItemIndex)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ScrollBox", "GetItemByIndex");
    struct
    {
        int32_t ItemIndex;
        struct UWidget* ReturnValue;
    } Parms{};
    Parms.ItemIndex = (int32_t)ItemIndex;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UScrollBox::EndInertialScrolling()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ScrollBox", "EndInertialScrolling");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UScrollBox::CheckAllowDynamicCreateItem()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ScrollBox", "CheckAllowDynamicCreateItem");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// ---- UImage::* ----
void UImage::SetRotateUV(uint8_t bInRotateUV)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("Image", "SetRotateUV");
    struct
    {
        uint8_t bInRotateUV;
    } Parms{};
    Parms.bInRotateUV = (uint8_t)bInRotateUV;
    this->ProcessEvent(Func, &Parms);
}

void UImage::SetOpacity(float InOpacity)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("Image", "SetOpacity");
    struct
    {
        float InOpacity;
    } Parms{};
    Parms.InOpacity = (float)InOpacity;
    this->ProcessEvent(Func, &Parms);
}

void UImage::SetColorAndOpacity(struct FLinearColor InColorAndOpacity)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("Image", "SetColorAndOpacity");
    struct
    {
        struct FLinearColor InColorAndOpacity;
    } Parms{};
    Parms.InColorAndOpacity = (struct FLinearColor)InColorAndOpacity;
    this->ProcessEvent(Func, &Parms);
}

void UImage::SetBrushTintColor(struct FSlateColor TintColor)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("Image", "SetBrushTintColor");
    struct
    {
        struct FSlateColor TintColor;
    } Parms{};
    Parms.TintColor = (struct FSlateColor)TintColor;
    this->ProcessEvent(Func, &Parms);
}

void UImage::SetBrushSize(struct FVector2D DesiredSize)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("Image", "SetBrushSize");
    struct
    {
        struct FVector2D DesiredSize;
    } Parms{};
    Parms.DesiredSize = (struct FVector2D)DesiredSize;
    this->ProcessEvent(Func, &Parms);
}

void UImage::SetBrushResourceObject(struct UObject* ResourceObject)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("Image", "SetBrushResourceObject");
    struct
    {
        struct UObject* ResourceObject;
    } Parms{};
    Parms.ResourceObject = (struct UObject*)ResourceObject;
    this->ProcessEvent(Func, &Parms);
}

void UImage::SetBrushFromTextureDynamic(struct UTexture2DDynamic* Texture, uint8_t bMatchSize)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("Image", "SetBrushFromTextureDynamic");
    struct
    {
        struct UTexture2DDynamic* Texture;
        uint8_t bMatchSize;
    } Parms{};
    Parms.Texture = (struct UTexture2DDynamic*)Texture;
    Parms.bMatchSize = (uint8_t)bMatchSize;
    this->ProcessEvent(Func, &Parms);
}

void UImage::SetBrushFromTexture(struct UTexture2D* Texture, uint8_t bMatchSize)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("Image", "SetBrushFromTexture");
    struct
    {
        struct UTexture2D* Texture;
        uint8_t bMatchSize;
    } Parms{};
    Parms.Texture = (struct UTexture2D*)Texture;
    Parms.bMatchSize = (uint8_t)bMatchSize;
    this->ProcessEvent(Func, &Parms);
}

void UImage::SetBrushFromSoftTexture(struct TSoftObjectPtr<UTexture2D> SoftTexture, uint8_t bMatchSize)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("Image", "SetBrushFromSoftTexture");
    struct
    {
        struct TSoftObjectPtr<UTexture2D> SoftTexture;
        uint8_t bMatchSize;
    } Parms{};
    Parms.SoftTexture = (struct TSoftObjectPtr<UTexture2D>)SoftTexture;
    Parms.bMatchSize = (uint8_t)bMatchSize;
    this->ProcessEvent(Func, &Parms);
}

void UImage::SetBrushFromSoftMaterial(struct TSoftObjectPtr<UMaterialInterface> SoftMaterial)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("Image", "SetBrushFromSoftMaterial");
    struct
    {
        struct TSoftObjectPtr<UMaterialInterface> SoftMaterial;
    } Parms{};
    Parms.SoftMaterial = (struct TSoftObjectPtr<UMaterialInterface>)SoftMaterial;
    this->ProcessEvent(Func, &Parms);
}

void UImage::SetBrushFromSoftAtlasInterfaceWithAmplifiedRate(struct TSoftObjectPtr<UObject> SoftTexture, uint8_t bMatchSize, uint8_t bMatchAmplifiedRate)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("Image", "SetBrushFromSoftAtlasInterfaceWithAmplifiedRate");
    struct
    {
        struct TSoftObjectPtr<UObject> SoftTexture;
        uint8_t bMatchSize;
        uint8_t bMatchAmplifiedRate;
    } Parms{};
    Parms.SoftTexture = (struct TSoftObjectPtr<UObject>)SoftTexture;
    Parms.bMatchSize = (uint8_t)bMatchSize;
    Parms.bMatchAmplifiedRate = (uint8_t)bMatchAmplifiedRate;
    this->ProcessEvent(Func, &Parms);
}

void UImage::SetBrushFromSoftAtlasInterface(struct TSoftObjectPtr<UObject> SoftTexture, uint8_t bMatchSize)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("Image", "SetBrushFromSoftAtlasInterface");
    struct
    {
        struct TSoftObjectPtr<UObject> SoftTexture;
        uint8_t bMatchSize;
    } Parms{};
    Parms.SoftTexture = (struct TSoftObjectPtr<UObject>)SoftTexture;
    Parms.bMatchSize = (uint8_t)bMatchSize;
    this->ProcessEvent(Func, &Parms);
}

void UImage::SetBrushFromMaterial(struct UMaterialInterface* Material)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("Image", "SetBrushFromMaterial");
    struct
    {
        struct UMaterialInterface* Material;
    } Parms{};
    Parms.Material = (struct UMaterialInterface*)Material;
    this->ProcessEvent(Func, &Parms);
}

void UImage::SetBrushFromAtlasInterfaceWithAmplifiedRate(struct TScriptInterface<ISlateTextureAtlasInterface> AtlasRegion, uint8_t bMatchSize, uint8_t bMatchAmplifiedRate)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("Image", "SetBrushFromAtlasInterfaceWithAmplifiedRate");
    struct
    {
        struct TScriptInterface<ISlateTextureAtlasInterface> AtlasRegion;
        uint8_t bMatchSize;
        uint8_t bMatchAmplifiedRate;
    } Parms{};
    Parms.AtlasRegion = (struct TScriptInterface<ISlateTextureAtlasInterface>)AtlasRegion;
    Parms.bMatchSize = (uint8_t)bMatchSize;
    Parms.bMatchAmplifiedRate = (uint8_t)bMatchAmplifiedRate;
    this->ProcessEvent(Func, &Parms);
}

void UImage::SetBrushFromAtlasInterface(struct TScriptInterface<ISlateTextureAtlasInterface> AtlasRegion, uint8_t bMatchSize)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("Image", "SetBrushFromAtlasInterface");
    struct
    {
        struct TScriptInterface<ISlateTextureAtlasInterface> AtlasRegion;
        uint8_t bMatchSize;
    } Parms{};
    Parms.AtlasRegion = (struct TScriptInterface<ISlateTextureAtlasInterface>)AtlasRegion;
    Parms.bMatchSize = (uint8_t)bMatchSize;
    this->ProcessEvent(Func, &Parms);
}

void UImage::SetBrushFromAsset(struct USlateBrushAsset* Asset)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("Image", "SetBrushFromAsset");
    struct
    {
        struct USlateBrushAsset* Asset;
    } Parms{};
    Parms.Asset = (struct USlateBrushAsset*)Asset;
    this->ProcessEvent(Func, &Parms);
}

void UImage::SetBrush(const struct FSlateBrush& InBrush)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("Image", "SetBrush");
    struct
    {
        struct FSlateBrush InBrush;
    } Parms{};
    Parms.InBrush = (struct FSlateBrush)InBrush;
    this->ProcessEvent(Func, &Parms);
}

struct UMaterialInstanceDynamic* UImage::GetDynamicMaterial()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("Image", "GetDynamicMaterial");
    struct
    {
        struct UMaterialInstanceDynamic* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// ---- URichTextBlock::* ----
void URichTextBlock::SetTextUpperPolicy(ETextUpperPolicy InTextUpperPolicy)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("RichTextBlock", "SetTextUpperPolicy");
    struct
    {
        enum ETextUpperPolicy InTextUpperPolicy;
    } Parms{};
    Parms.InTextUpperPolicy = (enum ETextUpperPolicy)InTextUpperPolicy;
    this->ProcessEvent(Func, &Parms);
}

void URichTextBlock::SetTextStyleSet(struct UDataTable* NewTextStyleSet)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("RichTextBlock", "SetTextStyleSet");
    struct
    {
        struct UDataTable* NewTextStyleSet;
    } Parms{};
    Parms.NewTextStyleSet = (struct UDataTable*)NewTextStyleSet;
    this->ProcessEvent(Func, &Parms);
}

void URichTextBlock::SetTextOverflowAutoEllipse(ETextOverflowPolicy InAutoOverflowEllipse)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("RichTextBlock", "SetTextOverflowAutoEllipse");
    struct
    {
        enum ETextOverflowPolicy InAutoOverflowEllipse;
    } Parms{};
    Parms.InAutoOverflowEllipse = (enum ETextOverflowPolicy)InAutoOverflowEllipse;
    this->ProcessEvent(Func, &Parms);
}

void URichTextBlock::SetText(const struct FText& InText)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("RichTextBlock", "SetText");
    struct
    {
        struct FText InText;
    } Parms{};
    Parms.InText = (struct FText)InText;
    this->ProcessEvent(Func, &Parms);
}

void URichTextBlock::SetMinDesiredWidth(float InMinDesiredWidth)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("RichTextBlock", "SetMinDesiredWidth");
    struct
    {
        float InMinDesiredWidth;
    } Parms{};
    Parms.InMinDesiredWidth = (float)InMinDesiredWidth;
    this->ProcessEvent(Func, &Parms);
}

void URichTextBlock::SetFontStyleID(const struct FName& InNewFontStyleID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("RichTextBlock", "SetFontStyleID");
    struct
    {
        struct FName InNewFontStyleID;
    } Parms{};
    Parms.InNewFontStyleID = (struct FName)InNewFontStyleID;
    this->ProcessEvent(Func, &Parms);
}

void URichTextBlock::SetDefaultTextStyle(const struct FTextBlockStyle& InDefaultTextStyle)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("RichTextBlock", "SetDefaultTextStyle");
    struct
    {
        struct FTextBlockStyle InDefaultTextStyle;
    } Parms{};
    Parms.InDefaultTextStyle = (struct FTextBlockStyle)InDefaultTextStyle;
    this->ProcessEvent(Func, &Parms);
}

void URichTextBlock::SetDefaultStrikeBrush(struct FSlateBrush& InStrikeBrush)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("RichTextBlock", "SetDefaultStrikeBrush");
    struct
    {
        struct FSlateBrush InStrikeBrush;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    InStrikeBrush = Parms.InStrikeBrush;
}

void URichTextBlock::SetDefaultShadowOffset(struct FVector2D InShadowOffset)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("RichTextBlock", "SetDefaultShadowOffset");
    struct
    {
        struct FVector2D InShadowOffset;
    } Parms{};
    Parms.InShadowOffset = (struct FVector2D)InShadowOffset;
    this->ProcessEvent(Func, &Parms);
}

void URichTextBlock::SetDefaultShadowColorAndOpacity(struct FLinearColor InShadowColorAndOpacity)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("RichTextBlock", "SetDefaultShadowColorAndOpacity");
    struct
    {
        struct FLinearColor InShadowColorAndOpacity;
    } Parms{};
    Parms.InShadowColorAndOpacity = (struct FLinearColor)InShadowColorAndOpacity;
    this->ProcessEvent(Func, &Parms);
}

void URichTextBlock::SetDefaultFont(struct FSlateFontInfo InFontInfo)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("RichTextBlock", "SetDefaultFont");
    struct
    {
        struct FSlateFontInfo InFontInfo;
    } Parms{};
    Parms.InFontInfo = (struct FSlateFontInfo)InFontInfo;
    this->ProcessEvent(Func, &Parms);
}

void URichTextBlock::SetDefaultColorAndOpacity(struct FSlateColor InColorAndOpacity)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("RichTextBlock", "SetDefaultColorAndOpacity");
    struct
    {
        struct FSlateColor InColorAndOpacity;
    } Parms{};
    Parms.InColorAndOpacity = (struct FSlateColor)InColorAndOpacity;
    this->ProcessEvent(Func, &Parms);
}

void URichTextBlock::SetCustomTextFlowPolicy(ECustomTextFlowPolicy InCustomTextFlowPolicy)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("RichTextBlock", "SetCustomTextFlowPolicy");
    struct
    {
        enum ECustomTextFlowPolicy InCustomTextFlowPolicy;
    } Parms{};
    Parms.InCustomTextFlowPolicy = (enum ECustomTextFlowPolicy)InCustomTextFlowPolicy;
    this->ProcessEvent(Func, &Parms);
}

void URichTextBlock::SetAutoWrapText(uint8_t InAutoTextWrap)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("RichTextBlock", "SetAutoWrapText");
    struct
    {
        uint8_t InAutoTextWrap;
    } Parms{};
    Parms.InAutoTextWrap = (uint8_t)InAutoTextWrap;
    this->ProcessEvent(Func, &Parms);
}

struct FText URichTextBlock::GetText()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("RichTextBlock", "GetText");
    struct
    {
        struct FText ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t URichTextBlock::GetIsOverrideDefaultStyle()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("RichTextBlock", "GetIsOverrideDefaultStyle");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FName URichTextBlock::GetFontStyleID()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("RichTextBlock", "GetFontStyleID");
    struct
    {
        struct FName ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct URichTextBlockDecorator* URichTextBlock::GetDecoratorByClass(struct URichTextBlockDecorator* DecoratorClass)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("RichTextBlock", "GetDecoratorByClass");
    struct
    {
        struct URichTextBlockDecorator* DecoratorClass;
        struct URichTextBlockDecorator* ReturnValue;
    } Parms{};
    Parms.DecoratorClass = (struct URichTextBlockDecorator*)DecoratorClass;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void URichTextBlock::ClearAllDefaultStyleOverrides()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("RichTextBlock", "ClearAllDefaultStyleOverrides");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void URichTextBlock::BP_SetWrapTextAt(float TextAt)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("RichTextBlock", "BP_SetWrapTextAt");
    struct
    {
        float TextAt;
    } Parms{};
    Parms.TextAt = (float)TextAt;
    this->ProcessEvent(Func, &Parms);
}

// ---- USizeBox::* ----
void USizeBox::SetWidthOverride(float InWidthOverride)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SizeBox", "SetWidthOverride");
    struct
    {
        float InWidthOverride;
    } Parms{};
    Parms.InWidthOverride = (float)InWidthOverride;
    this->ProcessEvent(Func, &Parms);
}

void USizeBox::SetMinDesiredWidth(float InMinDesiredWidth)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SizeBox", "SetMinDesiredWidth");
    struct
    {
        float InMinDesiredWidth;
    } Parms{};
    Parms.InMinDesiredWidth = (float)InMinDesiredWidth;
    this->ProcessEvent(Func, &Parms);
}

void USizeBox::SetMinDesiredHeight(float InMinDesiredHeight)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SizeBox", "SetMinDesiredHeight");
    struct
    {
        float InMinDesiredHeight;
    } Parms{};
    Parms.InMinDesiredHeight = (float)InMinDesiredHeight;
    this->ProcessEvent(Func, &Parms);
}

void USizeBox::SetMinAspectRatio(float InMinAspectRatio)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SizeBox", "SetMinAspectRatio");
    struct
    {
        float InMinAspectRatio;
    } Parms{};
    Parms.InMinAspectRatio = (float)InMinAspectRatio;
    this->ProcessEvent(Func, &Parms);
}

void USizeBox::SetMaxDesiredWidth(float InMaxDesiredWidth)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SizeBox", "SetMaxDesiredWidth");
    struct
    {
        float InMaxDesiredWidth;
    } Parms{};
    Parms.InMaxDesiredWidth = (float)InMaxDesiredWidth;
    this->ProcessEvent(Func, &Parms);
}

void USizeBox::SetMaxDesiredHeight(float InMaxDesiredHeight)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SizeBox", "SetMaxDesiredHeight");
    struct
    {
        float InMaxDesiredHeight;
    } Parms{};
    Parms.InMaxDesiredHeight = (float)InMaxDesiredHeight;
    this->ProcessEvent(Func, &Parms);
}

void USizeBox::SetMaxAspectRatio(float InMaxAspectRatio)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SizeBox", "SetMaxAspectRatio");
    struct
    {
        float InMaxAspectRatio;
    } Parms{};
    Parms.InMaxAspectRatio = (float)InMaxAspectRatio;
    this->ProcessEvent(Func, &Parms);
}

void USizeBox::SetHeightOverride(float InHeightOverride)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SizeBox", "SetHeightOverride");
    struct
    {
        float InHeightOverride;
    } Parms{};
    Parms.InHeightOverride = (float)InHeightOverride;
    this->ProcessEvent(Func, &Parms);
}

void USizeBox::ClearWidthOverride()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SizeBox", "ClearWidthOverride");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void USizeBox::ClearMinDesiredWidth()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SizeBox", "ClearMinDesiredWidth");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void USizeBox::ClearMinDesiredHeight()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SizeBox", "ClearMinDesiredHeight");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void USizeBox::ClearMinAspectRatio()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SizeBox", "ClearMinAspectRatio");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void USizeBox::ClearMaxDesiredWidth()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SizeBox", "ClearMaxDesiredWidth");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void USizeBox::ClearMaxDesiredHeight()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SizeBox", "ClearMaxDesiredHeight");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void USizeBox::ClearMaxAspectRatio()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SizeBox", "ClearMaxAspectRatio");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void USizeBox::ClearHeightOverride()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SizeBox", "ClearHeightOverride");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// ---- UWidgetBlueprintGeneratedClass::* ----
void UWidgetBlueprintGeneratedClass::UnloadWidgetTree(uint8_t bSetPackageReload)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WidgetBlueprintGeneratedClass", "UnloadWidgetTree");
    struct
    {
        uint8_t bSetPackageReload;
    } Parms{};
    Parms.bSetPackageReload = (uint8_t)bSetPackageReload;
    this->ProcessEvent(Func, &Parms);
}

// ---- UCanvasPanel::* ----
void UCanvasPanel::ReleaseCacheSlateWidget()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("CanvasPanel", "ReleaseCacheSlateWidget");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

struct UCanvasPanelSlot* UCanvasPanel::AddChildToCanvas(struct UWidget* Content)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("CanvasPanel", "AddChildToCanvas");
    struct
    {
        struct UWidget* Content;
        struct UCanvasPanelSlot* ReturnValue;
    } Parms{};
    Parms.Content = (struct UWidget*)Content;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// ---- UButton::* ----
void UButton::SetTouchMethod(EButtonTouchMethod InTouchMethod)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("Button", "SetTouchMethod");
    struct
    {
        enum EButtonTouchMethod InTouchMethod;
    } Parms{};
    Parms.InTouchMethod = (enum EButtonTouchMethod)InTouchMethod;
    this->ProcessEvent(Func, &Parms);
}

void UButton::SetStyle(const struct FButtonStyle& InStyle)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("Button", "SetStyle");
    struct
    {
        struct FButtonStyle InStyle;
    } Parms{};
    Parms.InStyle = (struct FButtonStyle)InStyle;
    this->ProcessEvent(Func, &Parms);
}

void UButton::SetPressMethod(EButtonPressMethod InPressMethod)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("Button", "SetPressMethod");
    struct
    {
        enum EButtonPressMethod InPressMethod;
    } Parms{};
    Parms.InPressMethod = (enum EButtonPressMethod)InPressMethod;
    this->ProcessEvent(Func, &Parms);
}

void UButton::SetColorAndOpacity(struct FLinearColor InColorAndOpacity)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("Button", "SetColorAndOpacity");
    struct
    {
        struct FLinearColor InColorAndOpacity;
    } Parms{};
    Parms.InColorAndOpacity = (struct FLinearColor)InColorAndOpacity;
    this->ProcessEvent(Func, &Parms);
}

void UButton::SetClickMethod(EButtonClickMethod InClickMethod)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("Button", "SetClickMethod");
    struct
    {
        enum EButtonClickMethod InClickMethod;
    } Parms{};
    Parms.InClickMethod = (enum EButtonClickMethod)InClickMethod;
    this->ProcessEvent(Func, &Parms);
}

void UButton::SetBackgroundColor(struct FLinearColor InBackgroundColor)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("Button", "SetBackgroundColor");
    struct
    {
        struct FLinearColor InBackgroundColor;
    } Parms{};
    Parms.InBackgroundColor = (struct FLinearColor)InBackgroundColor;
    this->ProcessEvent(Func, &Parms);
}

uint8_t UButton::IsPressed()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("Button", "IsPressed");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// ---- UBackgroundBlur::* ----
void UBackgroundBlur::SetVerticalAlignment(EVerticalAlignment InVerticalAlignment)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BackgroundBlur", "SetVerticalAlignment");
    struct
    {
        enum EVerticalAlignment InVerticalAlignment;
    } Parms{};
    Parms.InVerticalAlignment = (enum EVerticalAlignment)InVerticalAlignment;
    this->ProcessEvent(Func, &Parms);
}

void UBackgroundBlur::SetSimulate3DUIParams(struct FVector4 InSimulate3DUIParams)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BackgroundBlur", "SetSimulate3DUIParams");
    struct
    {
        struct FVector4 InSimulate3DUIParams;
    } Parms{};
    Parms.InSimulate3DUIParams = (struct FVector4)InSimulate3DUIParams;
    this->ProcessEvent(Func, &Parms);
}

void UBackgroundBlur::SetPadding(struct FMargin InPadding)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BackgroundBlur", "SetPadding");
    struct
    {
        struct FMargin InPadding;
    } Parms{};
    Parms.InPadding = (struct FMargin)InPadding;
    this->ProcessEvent(Func, &Parms);
}

void UBackgroundBlur::SetLowQualityFallbackBrush(const struct FSlateBrush& InBrush)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BackgroundBlur", "SetLowQualityFallbackBrush");
    struct
    {
        struct FSlateBrush InBrush;
    } Parms{};
    Parms.InBrush = (struct FSlateBrush)InBrush;
    this->ProcessEvent(Func, &Parms);
}

void UBackgroundBlur::SetHorizontalAlignment(EHorizontalAlignment InHorizontalAlignment)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BackgroundBlur", "SetHorizontalAlignment");
    struct
    {
        enum EHorizontalAlignment InHorizontalAlignment;
    } Parms{};
    Parms.InHorizontalAlignment = (enum EHorizontalAlignment)InHorizontalAlignment;
    this->ProcessEvent(Func, &Parms);
}

void UBackgroundBlur::SetFake3DBlurType(EFake3DBlurType InFake3DBlurType)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BackgroundBlur", "SetFake3DBlurType");
    struct
    {
        enum EFake3DBlurType InFake3DBlurType;
    } Parms{};
    Parms.InFake3DBlurType = (enum EFake3DBlurType)InFake3DBlurType;
    this->ProcessEvent(Func, &Parms);
}

void UBackgroundBlur::SetFake3DBlur(uint8_t bEnable)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BackgroundBlur", "SetFake3DBlur");
    struct
    {
        uint8_t bEnable;
    } Parms{};
    Parms.bEnable = (uint8_t)bEnable;
    this->ProcessEvent(Func, &Parms);
}

void UBackgroundBlur::SetBlurStrength(float InStrength)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BackgroundBlur", "SetBlurStrength");
    struct
    {
        float InStrength;
    } Parms{};
    Parms.InStrength = (float)InStrength;
    this->ProcessEvent(Func, &Parms);
}

void UBackgroundBlur::SetBlurShapeMaskBrush(const struct FSlateBrush& InBrush)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BackgroundBlur", "SetBlurShapeMaskBrush");
    struct
    {
        struct FSlateBrush InBrush;
    } Parms{};
    Parms.InBrush = (struct FSlateBrush)InBrush;
    this->ProcessEvent(Func, &Parms);
}

void UBackgroundBlur::SetBlurRadius(int32_t InBlurRadius)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BackgroundBlur", "SetBlurRadius");
    struct
    {
        int32_t InBlurRadius;
    } Parms{};
    Parms.InBlurRadius = (int32_t)InBlurRadius;
    this->ProcessEvent(Func, &Parms);
}

void UBackgroundBlur::SetApplyBlurShapeMask(uint8_t bInApplyBlurShapeMask)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BackgroundBlur", "SetApplyBlurShapeMask");
    struct
    {
        uint8_t bInApplyBlurShapeMask;
    } Parms{};
    Parms.bInApplyBlurShapeMask = (uint8_t)bInApplyBlurShapeMask;
    this->ProcessEvent(Func, &Parms);
}

void UBackgroundBlur::SetApplyAlphaToBlur(uint8_t bInApplyAlphaToBlur)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BackgroundBlur", "SetApplyAlphaToBlur");
    struct
    {
        uint8_t bInApplyAlphaToBlur;
    } Parms{};
    Parms.bInApplyAlphaToBlur = (uint8_t)bInApplyAlphaToBlur;
    this->ProcessEvent(Func, &Parms);
}

// ---- UCheckbox::* ----
void UCheckbox::SetIsChecked(uint8_t InIsChecked)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("Checkbox", "SetIsChecked");
    struct
    {
        uint8_t InIsChecked;
    } Parms{};
    Parms.InIsChecked = (uint8_t)InIsChecked;
    this->ProcessEvent(Func, &Parms);
}

void UCheckbox::SetCheckedState(ECheckBoxState InCheckedState)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("Checkbox", "SetCheckedState");
    struct
    {
        enum ECheckBoxState InCheckedState;
    } Parms{};
    Parms.InCheckedState = (enum ECheckBoxState)InCheckedState;
    this->ProcessEvent(Func, &Parms);
}

uint8_t UCheckbox::IsPressed()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("Checkbox", "IsPressed");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UCheckbox::IsChecked()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("Checkbox", "IsChecked");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

ECheckBoxState UCheckbox::GetCheckedState()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("Checkbox", "GetCheckedState");
    struct
    {
        enum ECheckBoxState ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// ---- UComboBoxString::* ----
void UComboBoxString::SetSelectedOption(struct FString Option)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ComboBoxString", "SetSelectedOption");
    struct
    {
        struct FString Option;
    } Parms{};
    Parms.Option = (struct FString)Option;
    this->ProcessEvent(Func, &Parms);
}

void UComboBoxString::SetSelectedIndex(int32_t Index)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ComboBoxString", "SetSelectedIndex");
    struct
    {
        int32_t Index;
    } Parms{};
    Parms.Index = (int32_t)Index;
    this->ProcessEvent(Func, &Parms);
}

uint8_t UComboBoxString::RemoveOption(struct FString Option)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ComboBoxString", "RemoveOption");
    struct
    {
        struct FString Option;
        uint8_t ReturnValue;
    } Parms{};
    Parms.Option = (struct FString)Option;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UComboBoxString::RefreshOptions()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ComboBoxString", "RefreshOptions");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UComboBoxString::OnSelectionChangedEvent__DelegateSignature(struct FString SelectedItem, ESelectInfo SelectionType)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ComboBoxString", "OnSelectionChangedEvent__DelegateSignature");
    struct
    {
        struct FString SelectedItem;
        enum ESelectInfo SelectionType;
    } Parms{};
    Parms.SelectedItem = (struct FString)SelectedItem;
    Parms.SelectionType = (enum ESelectInfo)SelectionType;
    this->ProcessEvent(Func, &Parms);
}

void UComboBoxString::OnOpeningEvent__DelegateSignature()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ComboBoxString", "OnOpeningEvent__DelegateSignature");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

uint8_t UComboBoxString::IsOpen()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ComboBoxString", "IsOpen");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UComboBoxString::GetSelectedOption()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ComboBoxString", "GetSelectedOption");
    struct
    {
        struct FString ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UComboBoxString::GetSelectedIndex()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ComboBoxString", "GetSelectedIndex");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UComboBoxString::GetOptionCount()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ComboBoxString", "GetOptionCount");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UComboBoxString::GetOptionAtIndex(int32_t Index)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ComboBoxString", "GetOptionAtIndex");
    struct
    {
        int32_t Index;
        struct FString ReturnValue;
    } Parms{};
    Parms.Index = (int32_t)Index;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UComboBoxString::FindOptionIndex(struct FString Option)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ComboBoxString", "FindOptionIndex");
    struct
    {
        struct FString Option;
        int32_t ReturnValue;
    } Parms{};
    Parms.Option = (struct FString)Option;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UComboBoxString::ClearSelection()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ComboBoxString", "ClearSelection");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UComboBoxString::ClearOptions()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ComboBoxString", "ClearOptions");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UComboBoxString::AddOption(struct FString Option)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ComboBoxString", "AddOption");
    struct
    {
        struct FString Option;
    } Parms{};
    Parms.Option = (struct FString)Option;
    this->ProcessEvent(Func, &Parms);
}

// ---- UListViewBase::* ----
void UListViewBase::SetWheelScrollMultiplier(float NewWheelScrollMultiplier)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ListViewBase", "SetWheelScrollMultiplier");
    struct
    {
        float NewWheelScrollMultiplier;
    } Parms{};
    Parms.NewWheelScrollMultiplier = (float)NewWheelScrollMultiplier;
    this->ProcessEvent(Func, &Parms);
}

void UListViewBase::SetScrollOffset(float InScrollOffset)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ListViewBase", "SetScrollOffset");
    struct
    {
        float InScrollOffset;
    } Parms{};
    Parms.InScrollOffset = (float)InScrollOffset;
    this->ProcessEvent(Func, &Parms);
}

void UListViewBase::SetScrollBarVisibility(ESlateVisibility InVisibility)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ListViewBase", "SetScrollBarVisibility");
    struct
    {
        enum ESlateVisibility InVisibility;
    } Parms{};
    Parms.InVisibility = (enum ESlateVisibility)InVisibility;
    this->ProcessEvent(Func, &Parms);
}

void UListViewBase::ScrollToTop()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ListViewBase", "ScrollToTop");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UListViewBase::ScrollToBottom()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ListViewBase", "ScrollToBottom");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UListViewBase::RequestRefresh()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ListViewBase", "RequestRefresh");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UListViewBase::RegenerateAllEntries()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ListViewBase", "RegenerateAllEntries");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

struct TArray<struct UUserWidget*> UListViewBase::GetDisplayedEntryWidgets()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ListViewBase", "GetDisplayedEntryWidgets");
    struct
    {
        struct TArray<struct UUserWidget*> ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// ---- UListView::* ----
void UListView::SetSelectionMode(ESelectionMode SelectionMode)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ListView", "SetSelectionMode");
    struct
    {
        enum ESelectionMode SelectionMode;
    } Parms{};
    Parms.SelectionMode = (enum ESelectionMode)SelectionMode;
    this->ProcessEvent(Func, &Parms);
}

void UListView::SetSelectedIndex(int32_t Index)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ListView", "SetSelectedIndex");
    struct
    {
        int32_t Index;
    } Parms{};
    Parms.Index = (int32_t)Index;
    this->ProcessEvent(Func, &Parms);
}

void UListView::ScrollIndexIntoView(int32_t Index)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ListView", "ScrollIndexIntoView");
    struct
    {
        int32_t Index;
    } Parms{};
    Parms.Index = (int32_t)Index;
    this->ProcessEvent(Func, &Parms);
}

void UListView::RemoveItem(struct UObject* Item)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ListView", "RemoveItem");
    struct
    {
        struct UObject* Item;
    } Parms{};
    Parms.Item = (struct UObject*)Item;
    this->ProcessEvent(Func, &Parms);
}

void UListView::NavigateToIndex(int32_t Index)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ListView", "NavigateToIndex");
    struct
    {
        int32_t Index;
    } Parms{};
    Parms.Index = (int32_t)Index;
    this->ProcessEvent(Func, &Parms);
}

uint8_t UListView::IsRefreshPending()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ListView", "IsRefreshPending");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UListView::GetNumItems()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ListView", "GetNumItems");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct TArray<struct UObject*> UListView::GetListItems()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ListView", "GetListItems");
    struct
    {
        struct TArray<struct UObject*> ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UObject* UListView::GetItemAt(int32_t Index)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ListView", "GetItemAt");
    struct
    {
        int32_t Index;
        struct UObject* ReturnValue;
    } Parms{};
    Parms.Index = (int32_t)Index;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UListView::GetIndexForItem(struct UObject* Item)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ListView", "GetIndexForItem");
    struct
    {
        struct UObject* Item;
        int32_t ReturnValue;
    } Parms{};
    Parms.Item = (struct UObject*)Item;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UListView::ClearListItems()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ListView", "ClearListItems");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UListView::BP_SetSelectedItem(struct UObject* Item)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ListView", "BP_SetSelectedItem");
    struct
    {
        struct UObject* Item;
    } Parms{};
    Parms.Item = (struct UObject*)Item;
    this->ProcessEvent(Func, &Parms);
}

void UListView::BP_SetListItems(const struct TArray<struct UObject*>& InListItems)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ListView", "BP_SetListItems");
    struct
    {
        struct TArray<struct UObject*> InListItems;
    } Parms{};
    Parms.InListItems = (struct TArray<struct UObject*>)InListItems;
    this->ProcessEvent(Func, &Parms);
}

void UListView::BP_SetItemSelection(struct UObject* Item, uint8_t bSelected)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ListView", "BP_SetItemSelection");
    struct
    {
        struct UObject* Item;
        uint8_t bSelected;
    } Parms{};
    Parms.Item = (struct UObject*)Item;
    Parms.bSelected = (uint8_t)bSelected;
    this->ProcessEvent(Func, &Parms);
}

void UListView::BP_ScrollItemIntoView(struct UObject* Item)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ListView", "BP_ScrollItemIntoView");
    struct
    {
        struct UObject* Item;
    } Parms{};
    Parms.Item = (struct UObject*)Item;
    this->ProcessEvent(Func, &Parms);
}

void UListView::BP_NavigateToItem(struct UObject* Item)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ListView", "BP_NavigateToItem");
    struct
    {
        struct UObject* Item;
    } Parms{};
    Parms.Item = (struct UObject*)Item;
    this->ProcessEvent(Func, &Parms);
}

uint8_t UListView::BP_IsItemVisible(struct UObject* Item)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ListView", "BP_IsItemVisible");
    struct
    {
        struct UObject* Item;
        uint8_t ReturnValue;
    } Parms{};
    Parms.Item = (struct UObject*)Item;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UListView::BP_GetSelectedItems(struct TArray<struct UObject*>& Items)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ListView", "BP_GetSelectedItems");
    struct
    {
        struct TArray<struct UObject*> Items;
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    Items = Parms.Items;
    return Parms.ReturnValue;
}

struct UObject* UListView::BP_GetSelectedItem()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ListView", "BP_GetSelectedItem");
    struct
    {
        struct UObject* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UListView::BP_GetNumItemsSelected()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ListView", "BP_GetNumItemsSelected");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UListView::BP_ClearSelection()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ListView", "BP_ClearSelection");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UListView::BP_CancelScrollIntoView()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ListView", "BP_CancelScrollIntoView");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UListView::AddItem(struct UObject* Item)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ListView", "AddItem");
    struct
    {
        struct UObject* Item;
    } Parms{};
    Parms.Item = (struct UObject*)Item;
    this->ProcessEvent(Func, &Parms);
}

// ---- UEditableText::* ----
void UEditableText::SetText(struct FText InText)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("EditableText", "SetText");
    struct
    {
        struct FText InText;
    } Parms{};
    Parms.InText = (struct FText)InText;
    this->ProcessEvent(Func, &Parms);
}

void UEditableText::SetJustification(ETextJustify InJustification)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("EditableText", "SetJustification");
    struct
    {
        enum ETextJustify InJustification;
    } Parms{};
    Parms.InJustification = (enum ETextJustify)InJustification;
    this->ProcessEvent(Func, &Parms);
}

void UEditableText::SetIsReadOnly(uint8_t InbIsReadyOnly)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("EditableText", "SetIsReadOnly");
    struct
    {
        uint8_t InbIsReadyOnly;
    } Parms{};
    Parms.InbIsReadyOnly = (uint8_t)InbIsReadyOnly;
    this->ProcessEvent(Func, &Parms);
}

void UEditableText::SetIsPassword(uint8_t InbIsPassword)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("EditableText", "SetIsPassword");
    struct
    {
        uint8_t InbIsPassword;
    } Parms{};
    Parms.InbIsPassword = (uint8_t)InbIsPassword;
    this->ProcessEvent(Func, &Parms);
}

void UEditableText::SetHintText(struct FText InHintText)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("EditableText", "SetHintText");
    struct
    {
        struct FText InHintText;
    } Parms{};
    Parms.InHintText = (struct FText)InHintText;
    this->ProcessEvent(Func, &Parms);
}

void UEditableText::SetCustomTextFlowPolicy(ECustomTextFlowPolicy InCustomTextFlowPolicy)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("EditableText", "SetCustomTextFlowPolicy");
    struct
    {
        enum ECustomTextFlowPolicy InCustomTextFlowPolicy;
    } Parms{};
    Parms.InCustomTextFlowPolicy = (enum ECustomTextFlowPolicy)InCustomTextFlowPolicy;
    this->ProcessEvent(Func, &Parms);
}

void UEditableText::OnEditableTextCommittedEvent__DelegateSignature(const struct FText& Text, ETextCommit CommitMethod)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("EditableText", "OnEditableTextCommittedEvent__DelegateSignature");
    struct
    {
        struct FText Text;
        enum ETextCommit CommitMethod;
    } Parms{};
    Parms.Text = (struct FText)Text;
    Parms.CommitMethod = (enum ETextCommit)CommitMethod;
    this->ProcessEvent(Func, &Parms);
}

void UEditableText::OnEditableTextChangedEvent__DelegateSignature(const struct FText& Text)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("EditableText", "OnEditableTextChangedEvent__DelegateSignature");
    struct
    {
        struct FText Text;
    } Parms{};
    Parms.Text = (struct FText)Text;
    this->ProcessEvent(Func, &Parms);
}

struct FText UEditableText::GetText()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("EditableText", "GetText");
    struct
    {
        struct FText ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// ---- UEditableTextBox::* ----
void UEditableTextBox::SetText(struct FText InText)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("EditableTextBox", "SetText");
    struct
    {
        struct FText InText;
    } Parms{};
    Parms.InText = (struct FText)InText;
    this->ProcessEvent(Func, &Parms);
}

void UEditableTextBox::SetJustification(ETextJustify InJustification)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("EditableTextBox", "SetJustification");
    struct
    {
        enum ETextJustify InJustification;
    } Parms{};
    Parms.InJustification = (enum ETextJustify)InJustification;
    this->ProcessEvent(Func, &Parms);
}

void UEditableTextBox::SetIsReadOnly(uint8_t bReadOnly)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("EditableTextBox", "SetIsReadOnly");
    struct
    {
        uint8_t bReadOnly;
    } Parms{};
    Parms.bReadOnly = (uint8_t)bReadOnly;
    this->ProcessEvent(Func, &Parms);
}

void UEditableTextBox::SetIsPassword(uint8_t bIsPassword)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("EditableTextBox", "SetIsPassword");
    struct
    {
        uint8_t bIsPassword;
    } Parms{};
    Parms.bIsPassword = (uint8_t)bIsPassword;
    this->ProcessEvent(Func, &Parms);
}

void UEditableTextBox::SetHintText(struct FText InText)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("EditableTextBox", "SetHintText");
    struct
    {
        struct FText InText;
    } Parms{};
    Parms.InText = (struct FText)InText;
    this->ProcessEvent(Func, &Parms);
}

void UEditableTextBox::SetError(struct FText InError)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("EditableTextBox", "SetError");
    struct
    {
        struct FText InError;
    } Parms{};
    Parms.InError = (struct FText)InError;
    this->ProcessEvent(Func, &Parms);
}

void UEditableTextBox::SetCustomTextFlowPolicy(ECustomTextFlowPolicy InCustomTextFlowPolicy)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("EditableTextBox", "SetCustomTextFlowPolicy");
    struct
    {
        enum ECustomTextFlowPolicy InCustomTextFlowPolicy;
    } Parms{};
    Parms.InCustomTextFlowPolicy = (enum ECustomTextFlowPolicy)InCustomTextFlowPolicy;
    this->ProcessEvent(Func, &Parms);
}

void UEditableTextBox::OnEditableTextBoxCommittedEvent__DelegateSignature(const struct FText& Text, ETextCommit CommitMethod)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("EditableTextBox", "OnEditableTextBoxCommittedEvent__DelegateSignature");
    struct
    {
        struct FText Text;
        enum ETextCommit CommitMethod;
    } Parms{};
    Parms.Text = (struct FText)Text;
    Parms.CommitMethod = (enum ETextCommit)CommitMethod;
    this->ProcessEvent(Func, &Parms);
}

void UEditableTextBox::OnEditableTextBoxChangedEvent__DelegateSignature(const struct FText& Text)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("EditableTextBox", "OnEditableTextBoxChangedEvent__DelegateSignature");
    struct
    {
        struct FText Text;
    } Parms{};
    Parms.Text = (struct FText)Text;
    this->ProcessEvent(Func, &Parms);
}

uint8_t UEditableTextBox::HasError()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("EditableTextBox", "HasError");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FText UEditableTextBox::GetText()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("EditableTextBox", "GetText");
    struct
    {
        struct FText ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UEditableTextBox::ClearError()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("EditableTextBox", "ClearError");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// ---- UExpandableArea::* ----
void UExpandableArea::SetIsExpanded_Animated(uint8_t IsExpanded)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ExpandableArea", "SetIsExpanded_Animated");
    struct
    {
        uint8_t IsExpanded;
    } Parms{};
    Parms.IsExpanded = (uint8_t)IsExpanded;
    this->ProcessEvent(Func, &Parms);
}

void UExpandableArea::SetIsExpanded(uint8_t IsExpanded)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ExpandableArea", "SetIsExpanded");
    struct
    {
        uint8_t IsExpanded;
    } Parms{};
    Parms.IsExpanded = (uint8_t)IsExpanded;
    this->ProcessEvent(Func, &Parms);
}

uint8_t UExpandableArea::GetIsExpanded()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ExpandableArea", "GetIsExpanded");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// ---- UGridPanel::* ----
void UGridPanel::SetRowFill(int32_t ColumnIndex, float Coefficient)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GridPanel", "SetRowFill");
    struct
    {
        int32_t ColumnIndex;
        float Coefficient;
    } Parms{};
    Parms.ColumnIndex = (int32_t)ColumnIndex;
    Parms.Coefficient = (float)Coefficient;
    this->ProcessEvent(Func, &Parms);
}

void UGridPanel::SetColumnFill(int32_t ColumnIndex, float Coefficient)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GridPanel", "SetColumnFill");
    struct
    {
        int32_t ColumnIndex;
        float Coefficient;
    } Parms{};
    Parms.ColumnIndex = (int32_t)ColumnIndex;
    Parms.Coefficient = (float)Coefficient;
    this->ProcessEvent(Func, &Parms);
}

struct UGridSlot* UGridPanel::AddChildToGrid(struct UWidget* Content, int32_t InRow, int32_t InColumn)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GridPanel", "AddChildToGrid");
    struct
    {
        struct UWidget* Content;
        int32_t InRow;
        int32_t InColumn;
        struct UGridSlot* ReturnValue;
    } Parms{};
    Parms.Content = (struct UWidget*)Content;
    Parms.InRow = (int32_t)InRow;
    Parms.InColumn = (int32_t)InColumn;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// ---- UHorizontalBox::* ----
struct UHorizontalBoxSlot* UHorizontalBox::AddChildToHorizontalBox(struct UWidget* Content)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HorizontalBox", "AddChildToHorizontalBox");
    struct
    {
        struct UWidget* Content;
        struct UHorizontalBoxSlot* ReturnValue;
    } Parms{};
    Parms.Content = (struct UWidget*)Content;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// ---- UInvalidationBox::* ----
void UInvalidationBox::SetCanCache(uint8_t CanCache)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("InvalidationBox", "SetCanCache");
    struct
    {
        uint8_t CanCache;
    } Parms{};
    Parms.CanCache = (uint8_t)CanCache;
    this->ProcessEvent(Func, &Parms);
}

void UInvalidationBox::InvalidateCache()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("InvalidationBox", "InvalidateCache");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

uint8_t UInvalidationBox::GetCanCache()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("InvalidationBox", "GetCanCache");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// ---- UMultiLineEditableText::* ----
void UMultiLineEditableText::SetWidgetStyle(const struct FTextBlockStyle& InWidgetStyle)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MultiLineEditableText", "SetWidgetStyle");
    struct
    {
        struct FTextBlockStyle InWidgetStyle;
    } Parms{};
    Parms.InWidgetStyle = (struct FTextBlockStyle)InWidgetStyle;
    this->ProcessEvent(Func, &Parms);
}

void UMultiLineEditableText::SetText(struct FText InText)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MultiLineEditableText", "SetText");
    struct
    {
        struct FText InText;
    } Parms{};
    Parms.InText = (struct FText)InText;
    this->ProcessEvent(Func, &Parms);
}

void UMultiLineEditableText::SetIsReadOnly(uint8_t bReadOnly)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MultiLineEditableText", "SetIsReadOnly");
    struct
    {
        uint8_t bReadOnly;
    } Parms{};
    Parms.bReadOnly = (uint8_t)bReadOnly;
    this->ProcessEvent(Func, &Parms);
}

void UMultiLineEditableText::SetHintText(struct FText InHintText)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MultiLineEditableText", "SetHintText");
    struct
    {
        struct FText InHintText;
    } Parms{};
    Parms.InHintText = (struct FText)InHintText;
    this->ProcessEvent(Func, &Parms);
}

void UMultiLineEditableText::SetCustomTextFlowPolicy(ECustomTextFlowPolicy InCustomTextFlowPolicy)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MultiLineEditableText", "SetCustomTextFlowPolicy");
    struct
    {
        enum ECustomTextFlowPolicy InCustomTextFlowPolicy;
    } Parms{};
    Parms.InCustomTextFlowPolicy = (enum ECustomTextFlowPolicy)InCustomTextFlowPolicy;
    this->ProcessEvent(Func, &Parms);
}

void UMultiLineEditableText::OnMultiLineEditableTextCommittedEvent__DelegateSignature(const struct FText& Text, ETextCommit CommitMethod)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MultiLineEditableText", "OnMultiLineEditableTextCommittedEvent__DelegateSignature");
    struct
    {
        struct FText Text;
        enum ETextCommit CommitMethod;
    } Parms{};
    Parms.Text = (struct FText)Text;
    Parms.CommitMethod = (enum ETextCommit)CommitMethod;
    this->ProcessEvent(Func, &Parms);
}

void UMultiLineEditableText::OnMultiLineEditableTextChangedEvent__DelegateSignature(const struct FText& Text)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MultiLineEditableText", "OnMultiLineEditableTextChangedEvent__DelegateSignature");
    struct
    {
        struct FText Text;
    } Parms{};
    Parms.Text = (struct FText)Text;
    this->ProcessEvent(Func, &Parms);
}

struct FText UMultiLineEditableText::GetText()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MultiLineEditableText", "GetText");
    struct
    {
        struct FText ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FText UMultiLineEditableText::GetHintText()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MultiLineEditableText", "GetHintText");
    struct
    {
        struct FText ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// ---- UMultiLineEditableTextBox::* ----
void UMultiLineEditableTextBox::SetTextStyle(const struct FTextBlockStyle& InTextStyle)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MultiLineEditableTextBox", "SetTextStyle");
    struct
    {
        struct FTextBlockStyle InTextStyle;
    } Parms{};
    Parms.InTextStyle = (struct FTextBlockStyle)InTextStyle;
    this->ProcessEvent(Func, &Parms);
}

void UMultiLineEditableTextBox::SetText(struct FText InText)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MultiLineEditableTextBox", "SetText");
    struct
    {
        struct FText InText;
    } Parms{};
    Parms.InText = (struct FText)InText;
    this->ProcessEvent(Func, &Parms);
}

void UMultiLineEditableTextBox::SetIsReadOnly(uint8_t bReadOnly)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MultiLineEditableTextBox", "SetIsReadOnly");
    struct
    {
        uint8_t bReadOnly;
    } Parms{};
    Parms.bReadOnly = (uint8_t)bReadOnly;
    this->ProcessEvent(Func, &Parms);
}

void UMultiLineEditableTextBox::SetHintText(struct FText InHintText)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MultiLineEditableTextBox", "SetHintText");
    struct
    {
        struct FText InHintText;
    } Parms{};
    Parms.InHintText = (struct FText)InHintText;
    this->ProcessEvent(Func, &Parms);
}

void UMultiLineEditableTextBox::SetError(struct FText InError)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MultiLineEditableTextBox", "SetError");
    struct
    {
        struct FText InError;
    } Parms{};
    Parms.InError = (struct FText)InError;
    this->ProcessEvent(Func, &Parms);
}

void UMultiLineEditableTextBox::SetCustomTextFlowPolicy(ECustomTextFlowPolicy InCustomTextFlowPolicy)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MultiLineEditableTextBox", "SetCustomTextFlowPolicy");
    struct
    {
        enum ECustomTextFlowPolicy InCustomTextFlowPolicy;
    } Parms{};
    Parms.InCustomTextFlowPolicy = (enum ECustomTextFlowPolicy)InCustomTextFlowPolicy;
    this->ProcessEvent(Func, &Parms);
}

void UMultiLineEditableTextBox::OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature(const struct FText& Text, ETextCommit CommitMethod)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MultiLineEditableTextBox", "OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature");
    struct
    {
        struct FText Text;
        enum ETextCommit CommitMethod;
    } Parms{};
    Parms.Text = (struct FText)Text;
    Parms.CommitMethod = (enum ETextCommit)CommitMethod;
    this->ProcessEvent(Func, &Parms);
}

void UMultiLineEditableTextBox::OnMultiLineEditableTextBoxChangedEvent__DelegateSignature(const struct FText& Text)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MultiLineEditableTextBox", "OnMultiLineEditableTextBoxChangedEvent__DelegateSignature");
    struct
    {
        struct FText Text;
    } Parms{};
    Parms.Text = (struct FText)Text;
    this->ProcessEvent(Func, &Parms);
}

struct FText UMultiLineEditableTextBox::GetText()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MultiLineEditableTextBox", "GetText");
    struct
    {
        struct FText ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FText UMultiLineEditableTextBox::GetHintText()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MultiLineEditableTextBox", "GetHintText");
    struct
    {
        struct FText ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// ---- UOverlay::* ----
struct UOverlaySlot* UOverlay::AddChildToOverlay(struct UWidget* Content)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("Overlay", "AddChildToOverlay");
    struct
    {
        struct UWidget* Content;
        struct UOverlaySlot* ReturnValue;
    } Parms{};
    Parms.Content = (struct UWidget*)Content;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// ---- UProgressBar::* ----
void UProgressBar::SetPercent(float InPercent)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ProgressBar", "SetPercent");
    struct
    {
        float InPercent;
    } Parms{};
    Parms.InPercent = (float)InPercent;
    this->ProcessEvent(Func, &Parms);
}

void UProgressBar::SetIsMarquee(uint8_t InbIsMarquee)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ProgressBar", "SetIsMarquee");
    struct
    {
        uint8_t InbIsMarquee;
    } Parms{};
    Parms.InbIsMarquee = (uint8_t)InbIsMarquee;
    this->ProcessEvent(Func, &Parms);
}

void UProgressBar::SetFillColorAndOpacity(struct FLinearColor InColor)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ProgressBar", "SetFillColorAndOpacity");
    struct
    {
        struct FLinearColor InColor;
    } Parms{};
    Parms.InColor = (struct FLinearColor)InColor;
    this->ProcessEvent(Func, &Parms);
}

void UProgressBar::SetBidirectionalValue(float InLeftValue, float InRightValue)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ProgressBar", "SetBidirectionalValue");
    struct
    {
        float InLeftValue;
        float InRightValue;
    } Parms{};
    Parms.InLeftValue = (float)InLeftValue;
    Parms.InRightValue = (float)InRightValue;
    this->ProcessEvent(Func, &Parms);
}

void UProgressBar::SetBidirectionalRightValue(float InRightValue)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ProgressBar", "SetBidirectionalRightValue");
    struct
    {
        float InRightValue;
    } Parms{};
    Parms.InRightValue = (float)InRightValue;
    this->ProcessEvent(Func, &Parms);
}

void UProgressBar::SetBidirectionalLeftValue(float InLeftValue)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ProgressBar", "SetBidirectionalLeftValue");
    struct
    {
        float InLeftValue;
    } Parms{};
    Parms.InLeftValue = (float)InLeftValue;
    this->ProcessEvent(Func, &Parms);
}

// ---- URadialImage::* ----
void URadialImage::SetPercent(float InPercent)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("RadialImage", "SetPercent");
    struct
    {
        float InPercent;
    } Parms{};
    Parms.InPercent = (float)InPercent;
    this->ProcessEvent(Func, &Parms);
}

void URadialImage::SetOpacity(float InOpacity)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("RadialImage", "SetOpacity");
    struct
    {
        float InOpacity;
    } Parms{};
    Parms.InOpacity = (float)InOpacity;
    this->ProcessEvent(Func, &Parms);
}

void URadialImage::SetIsClockWise(uint8_t InClockWise)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("RadialImage", "SetIsClockWise");
    struct
    {
        uint8_t InClockWise;
    } Parms{};
    Parms.InClockWise = (uint8_t)InClockWise;
    this->ProcessEvent(Func, &Parms);
}

void URadialImage::SetColorAndOpacity(struct FLinearColor InColorAndOpacity)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("RadialImage", "SetColorAndOpacity");
    struct
    {
        struct FLinearColor InColorAndOpacity;
    } Parms{};
    Parms.InColorAndOpacity = (struct FLinearColor)InColorAndOpacity;
    this->ProcessEvent(Func, &Parms);
}

void URadialImage::SetBrushTintColor(struct FSlateColor TintColor)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("RadialImage", "SetBrushTintColor");
    struct
    {
        struct FSlateColor TintColor;
    } Parms{};
    Parms.TintColor = (struct FSlateColor)TintColor;
    this->ProcessEvent(Func, &Parms);
}

void URadialImage::SetBrushSize(struct FVector2D DesiredSize)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("RadialImage", "SetBrushSize");
    struct
    {
        struct FVector2D DesiredSize;
    } Parms{};
    Parms.DesiredSize = (struct FVector2D)DesiredSize;
    this->ProcessEvent(Func, &Parms);
}

void URadialImage::SetBrushResourceObject(struct UObject* ResourceObject)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("RadialImage", "SetBrushResourceObject");
    struct
    {
        struct UObject* ResourceObject;
    } Parms{};
    Parms.ResourceObject = (struct UObject*)ResourceObject;
    this->ProcessEvent(Func, &Parms);
}

void URadialImage::SetBrush(const struct FSlateBrush& InBrush)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("RadialImage", "SetBrush");
    struct
    {
        struct FSlateBrush InBrush;
    } Parms{};
    Parms.InBrush = (struct FSlateBrush)InBrush;
    this->ProcessEvent(Func, &Parms);
}

struct UMaterialInstanceDynamic* URadialImage::GetDynamicMaterial()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("RadialImage", "GetDynamicMaterial");
    struct
    {
        struct UMaterialInstanceDynamic* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// ---- URetainerBox::* ----
void URetainerBox::SetTextureParameter(struct FName TextureParameter)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("RetainerBox", "SetTextureParameter");
    struct
    {
        struct FName TextureParameter;
    } Parms{};
    Parms.TextureParameter = (struct FName)TextureParameter;
    this->ProcessEvent(Func, &Parms);
}

void URetainerBox::SetRetainRendering(uint8_t bInRetainRendering)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("RetainerBox", "SetRetainRendering");
    struct
    {
        uint8_t bInRetainRendering;
    } Parms{};
    Parms.bInRetainRendering = (uint8_t)bInRetainRendering;
    this->ProcessEvent(Func, &Parms);
}

void URetainerBox::SetRenderingPhase(int32_t RenderPhase, int32_t TotalPhases)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("RetainerBox", "SetRenderingPhase");
    struct
    {
        int32_t RenderPhase;
        int32_t TotalPhases;
    } Parms{};
    Parms.RenderPhase = (int32_t)RenderPhase;
    Parms.TotalPhases = (int32_t)TotalPhases;
    this->ProcessEvent(Func, &Parms);
}

void URetainerBox::SetEffectMaterial(struct UMaterialInterface* EffectMaterial)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("RetainerBox", "SetEffectMaterial");
    struct
    {
        struct UMaterialInterface* EffectMaterial;
    } Parms{};
    Parms.EffectMaterial = (struct UMaterialInterface*)EffectMaterial;
    this->ProcessEvent(Func, &Parms);
}

void URetainerBox::RequestRender()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("RetainerBox", "RequestRender");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

struct UMaterialInstanceDynamic* URetainerBox::GetEffectMaterial()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("RetainerBox", "GetEffectMaterial");
    struct
    {
        struct UMaterialInstanceDynamic* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// ---- USafeZone::* ----
void USafeZone::SetSidesToPad(uint8_t InPadLeft, uint8_t InPadRight, uint8_t InPadTop, uint8_t InPadBottom)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SafeZone", "SetSidesToPad");
    struct
    {
        uint8_t InPadLeft;
        uint8_t InPadRight;
        uint8_t InPadTop;
        uint8_t InPadBottom;
    } Parms{};
    Parms.InPadLeft = (uint8_t)InPadLeft;
    Parms.InPadRight = (uint8_t)InPadRight;
    Parms.InPadTop = (uint8_t)InPadTop;
    Parms.InPadBottom = (uint8_t)InPadBottom;
    this->ProcessEvent(Func, &Parms);
}

// ---- UScaleBox::* ----
void UScaleBox::SetUserSpecifiedScale(float InUserSpecifiedScale)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ScaleBox", "SetUserSpecifiedScale");
    struct
    {
        float InUserSpecifiedScale;
    } Parms{};
    Parms.InUserSpecifiedScale = (float)InUserSpecifiedScale;
    this->ProcessEvent(Func, &Parms);
}

void UScaleBox::SetStretchDirection(EStretchDirection InStretchDirection)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ScaleBox", "SetStretchDirection");
    struct
    {
        enum EStretchDirection InStretchDirection;
    } Parms{};
    Parms.InStretchDirection = (enum EStretchDirection)InStretchDirection;
    this->ProcessEvent(Func, &Parms);
}

void UScaleBox::SetStretch(EStretch InStretch)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ScaleBox", "SetStretch");
    struct
    {
        enum EStretch InStretch;
    } Parms{};
    Parms.InStretch = (enum EStretch)InStretch;
    this->ProcessEvent(Func, &Parms);
}

void UScaleBox::SetIgnoreInheritedScale(uint8_t bInIgnoreInheritedScale)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ScaleBox", "SetIgnoreInheritedScale");
    struct
    {
        uint8_t bInIgnoreInheritedScale;
    } Parms{};
    Parms.bInIgnoreInheritedScale = (uint8_t)bInIgnoreInheritedScale;
    this->ProcessEvent(Func, &Parms);
}

void UScaleBox::SetCheckExceedBounds(uint8_t bInCheckExceedBounds)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ScaleBox", "SetCheckExceedBounds");
    struct
    {
        uint8_t bInCheckExceedBounds;
    } Parms{};
    Parms.bInCheckExceedBounds = (uint8_t)bInCheckExceedBounds;
    this->ProcessEvent(Func, &Parms);
}

// ---- USlider::* ----
void USlider::SetValue(float InValue)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("Slider", "SetValue");
    struct
    {
        float InValue;
    } Parms{};
    Parms.InValue = (float)InValue;
    this->ProcessEvent(Func, &Parms);
}

void USlider::SetStepSize(float InValue)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("Slider", "SetStepSize");
    struct
    {
        float InValue;
    } Parms{};
    Parms.InValue = (float)InValue;
    this->ProcessEvent(Func, &Parms);
}

void USlider::SetSliderHandleColor(struct FLinearColor InValue)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("Slider", "SetSliderHandleColor");
    struct
    {
        struct FLinearColor InValue;
    } Parms{};
    Parms.InValue = (struct FLinearColor)InValue;
    this->ProcessEvent(Func, &Parms);
}

void USlider::SetSliderBarColor(struct FLinearColor InValue)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("Slider", "SetSliderBarColor");
    struct
    {
        struct FLinearColor InValue;
    } Parms{};
    Parms.InValue = (struct FLinearColor)InValue;
    this->ProcessEvent(Func, &Parms);
}

void USlider::SetMinValue(float InValue)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("Slider", "SetMinValue");
    struct
    {
        float InValue;
    } Parms{};
    Parms.InValue = (float)InValue;
    this->ProcessEvent(Func, &Parms);
}

void USlider::SetMaxValue(float InValue)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("Slider", "SetMaxValue");
    struct
    {
        float InValue;
    } Parms{};
    Parms.InValue = (float)InValue;
    this->ProcessEvent(Func, &Parms);
}

void USlider::SetLocked(uint8_t InValue)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("Slider", "SetLocked");
    struct
    {
        uint8_t InValue;
    } Parms{};
    Parms.InValue = (uint8_t)InValue;
    this->ProcessEvent(Func, &Parms);
}

void USlider::SetIndentHandle(uint8_t InValue)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("Slider", "SetIndentHandle");
    struct
    {
        uint8_t InValue;
    } Parms{};
    Parms.InValue = (uint8_t)InValue;
    this->ProcessEvent(Func, &Parms);
}

float USlider::GetValue()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("Slider", "GetValue");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float USlider::GetNormalizedValue()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("Slider", "GetNormalizedValue");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// ---- USpacer::* ----
void USpacer::SetSize(struct FVector2D InSize)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("Spacer", "SetSize");
    struct
    {
        struct FVector2D InSize;
    } Parms{};
    Parms.InSize = (struct FVector2D)InSize;
    this->ProcessEvent(Func, &Parms);
}

// ---- USpinBox::* ----
void USpinBox::SetValue(float NewValue)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SpinBox", "SetValue");
    struct
    {
        float NewValue;
    } Parms{};
    Parms.NewValue = (float)NewValue;
    this->ProcessEvent(Func, &Parms);
}

void USpinBox::SetMinValue(float NewValue)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SpinBox", "SetMinValue");
    struct
    {
        float NewValue;
    } Parms{};
    Parms.NewValue = (float)NewValue;
    this->ProcessEvent(Func, &Parms);
}

void USpinBox::SetMinSliderValue(float NewValue)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SpinBox", "SetMinSliderValue");
    struct
    {
        float NewValue;
    } Parms{};
    Parms.NewValue = (float)NewValue;
    this->ProcessEvent(Func, &Parms);
}

void USpinBox::SetMaxValue(float NewValue)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SpinBox", "SetMaxValue");
    struct
    {
        float NewValue;
    } Parms{};
    Parms.NewValue = (float)NewValue;
    this->ProcessEvent(Func, &Parms);
}

void USpinBox::SetMaxSliderValue(float NewValue)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SpinBox", "SetMaxSliderValue");
    struct
    {
        float NewValue;
    } Parms{};
    Parms.NewValue = (float)NewValue;
    this->ProcessEvent(Func, &Parms);
}

void USpinBox::SetForegroundColor(struct FSlateColor InForegroundColor)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SpinBox", "SetForegroundColor");
    struct
    {
        struct FSlateColor InForegroundColor;
    } Parms{};
    Parms.InForegroundColor = (struct FSlateColor)InForegroundColor;
    this->ProcessEvent(Func, &Parms);
}

void USpinBox::OnSpinBoxValueCommittedEvent__DelegateSignature(float InValue, ETextCommit CommitMethod)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SpinBox", "OnSpinBoxValueCommittedEvent__DelegateSignature");
    struct
    {
        float InValue;
        enum ETextCommit CommitMethod;
    } Parms{};
    Parms.InValue = (float)InValue;
    Parms.CommitMethod = (enum ETextCommit)CommitMethod;
    this->ProcessEvent(Func, &Parms);
}

void USpinBox::OnSpinBoxValueChangedEvent__DelegateSignature(float InValue)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SpinBox", "OnSpinBoxValueChangedEvent__DelegateSignature");
    struct
    {
        float InValue;
    } Parms{};
    Parms.InValue = (float)InValue;
    this->ProcessEvent(Func, &Parms);
}

void USpinBox::OnSpinBoxBeginSliderMovement__DelegateSignature()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SpinBox", "OnSpinBoxBeginSliderMovement__DelegateSignature");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

float USpinBox::GetValue()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SpinBox", "GetValue");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float USpinBox::GetMinValue()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SpinBox", "GetMinValue");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float USpinBox::GetMinSliderValue()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SpinBox", "GetMinSliderValue");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float USpinBox::GetMaxValue()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SpinBox", "GetMaxValue");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float USpinBox::GetMaxSliderValue()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SpinBox", "GetMaxSliderValue");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void USpinBox::ClearMinValue()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SpinBox", "ClearMinValue");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void USpinBox::ClearMinSliderValue()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SpinBox", "ClearMinSliderValue");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void USpinBox::ClearMaxValue()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SpinBox", "ClearMaxValue");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void USpinBox::ClearMaxSliderValue()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SpinBox", "ClearMaxSliderValue");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// ---- UTileView::* ----
void UTileView::SetEntryWidth(float NewWidth)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("TileView", "SetEntryWidth");
    struct
    {
        float NewWidth;
    } Parms{};
    Parms.NewWidth = (float)NewWidth;
    this->ProcessEvent(Func, &Parms);
}

void UTileView::SetEntryHeight(float NewHeight)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("TileView", "SetEntryHeight");
    struct
    {
        float NewHeight;
    } Parms{};
    Parms.NewHeight = (float)NewHeight;
    this->ProcessEvent(Func, &Parms);
}

// ---- UTreeView::* ----
void UTreeView::SetItemExpansion(struct UObject* Item, uint8_t bExpandItem)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("TreeView", "SetItemExpansion");
    struct
    {
        struct UObject* Item;
        uint8_t bExpandItem;
    } Parms{};
    Parms.Item = (struct UObject*)Item;
    Parms.bExpandItem = (uint8_t)bExpandItem;
    this->ProcessEvent(Func, &Parms);
}

void UTreeView::ExpandAll()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("TreeView", "ExpandAll");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UTreeView::CollapseAll()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("TreeView", "CollapseAll");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// ---- UUniformGridPanel::* ----
void UUniformGridPanel::SetSlotPadding(struct FMargin InSlotPadding)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("UniformGridPanel", "SetSlotPadding");
    struct
    {
        struct FMargin InSlotPadding;
    } Parms{};
    Parms.InSlotPadding = (struct FMargin)InSlotPadding;
    this->ProcessEvent(Func, &Parms);
}

void UUniformGridPanel::SetMinDesiredSlotWidth(float InMinDesiredSlotWidth)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("UniformGridPanel", "SetMinDesiredSlotWidth");
    struct
    {
        float InMinDesiredSlotWidth;
    } Parms{};
    Parms.InMinDesiredSlotWidth = (float)InMinDesiredSlotWidth;
    this->ProcessEvent(Func, &Parms);
}

void UUniformGridPanel::SetMinDesiredSlotHeight(float InMinDesiredSlotHeight)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("UniformGridPanel", "SetMinDesiredSlotHeight");
    struct
    {
        float InMinDesiredSlotHeight;
    } Parms{};
    Parms.InMinDesiredSlotHeight = (float)InMinDesiredSlotHeight;
    this->ProcessEvent(Func, &Parms);
}

struct UUniformGridSlot* UUniformGridPanel::AddChildToUniformGrid(struct UWidget* Content, int32_t InRow, int32_t InColumn)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("UniformGridPanel", "AddChildToUniformGrid");
    struct
    {
        struct UWidget* Content;
        int32_t InRow;
        int32_t InColumn;
        struct UUniformGridSlot* ReturnValue;
    } Parms{};
    Parms.Content = (struct UWidget*)Content;
    Parms.InRow = (int32_t)InRow;
    Parms.InColumn = (int32_t)InColumn;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// ---- UVerticalBox::* ----
void UVerticalBox::SwitchWidgetsByIndex(int32_t Index1, int32_t Index2)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("VerticalBox", "SwitchWidgetsByIndex");
    struct
    {
        int32_t Index1;
        int32_t Index2;
    } Parms{};
    Parms.Index1 = (int32_t)Index1;
    Parms.Index2 = (int32_t)Index2;
    this->ProcessEvent(Func, &Parms);
}

void UVerticalBox::SwitchWidgets(struct UWidget* Content1, struct UWidget* Content2)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("VerticalBox", "SwitchWidgets");
    struct
    {
        struct UWidget* Content1;
        struct UWidget* Content2;
    } Parms{};
    Parms.Content1 = (struct UWidget*)Content1;
    Parms.Content2 = (struct UWidget*)Content2;
    this->ProcessEvent(Func, &Parms);
}

struct UVerticalBoxSlot* UVerticalBox::AddChildToVerticalBox(struct UWidget* Content)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("VerticalBox", "AddChildToVerticalBox");
    struct
    {
        struct UWidget* Content;
        struct UVerticalBoxSlot* ReturnValue;
    } Parms{};
    Parms.Content = (struct UWidget*)Content;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// ---- UWrapBox::* ----
void UWrapBox::SetInnerSlotPadding(struct FVector2D InPadding)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WrapBox", "SetInnerSlotPadding");
    struct
    {
        struct FVector2D InPadding;
    } Parms{};
    Parms.InPadding = (struct FVector2D)InPadding;
    this->ProcessEvent(Func, &Parms);
}

struct UWrapBoxSlot* UWrapBox::AddChildToWrapBox(struct UWidget* Content)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WrapBox", "AddChildToWrapBox");
    struct
    {
        struct UWidget* Content;
        struct UWrapBoxSlot* ReturnValue;
    } Parms{};
    Parms.Content = (struct UWidget*)Content;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// ---- UDragDropOperation::* ----
void UDragDropOperation::Drop(const struct FPointerEvent& PointerEvent)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DragDropOperation", "Drop");
    struct
    {
        struct FPointerEvent PointerEvent;
    } Parms{};
    Parms.PointerEvent = (struct FPointerEvent)PointerEvent;
    this->ProcessEvent(Func, &Parms);
}

void UDragDropOperation::Dragged(const struct FPointerEvent& PointerEvent)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DragDropOperation", "Dragged");
    struct
    {
        struct FPointerEvent PointerEvent;
    } Parms{};
    Parms.PointerEvent = (struct FPointerEvent)PointerEvent;
    this->ProcessEvent(Func, &Parms);
}

void UDragDropOperation::DragCancelled(const struct FPointerEvent& PointerEvent)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DragDropOperation", "DragCancelled");
    struct
    {
        struct FPointerEvent PointerEvent;
    } Parms{};
    Parms.PointerEvent = (struct FPointerEvent)PointerEvent;
    this->ProcessEvent(Func, &Parms);
}

// ---- UWidgetComponent::* ----
void UWidgetComponent::SetWindowVisibility(EWindowVisibility InVisibility)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WidgetComponent", "SetWindowVisibility");
    struct
    {
        enum EWindowVisibility InVisibility;
    } Parms{};
    Parms.InVisibility = (enum EWindowVisibility)InVisibility;
    this->ProcessEvent(Func, &Parms);
}

void UWidgetComponent::SetWindowFocusable(uint8_t bInWindowFocusable)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WidgetComponent", "SetWindowFocusable");
    struct
    {
        uint8_t bInWindowFocusable;
    } Parms{};
    Parms.bInWindowFocusable = (uint8_t)bInWindowFocusable;
    this->ProcessEvent(Func, &Parms);
}

void UWidgetComponent::SetWidgetSpace(EWidgetSpace NewSpace)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WidgetComponent", "SetWidgetSpace");
    struct
    {
        enum EWidgetSpace NewSpace;
    } Parms{};
    Parms.NewSpace = (enum EWidgetSpace)NewSpace;
    this->ProcessEvent(Func, &Parms);
}

void UWidgetComponent::SetWidget(struct UUserWidget* Widget)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WidgetComponent", "SetWidget");
    struct
    {
        struct UUserWidget* Widget;
    } Parms{};
    Parms.Widget = (struct UUserWidget*)Widget;
    this->ProcessEvent(Func, &Parms);
}

void UWidgetComponent::SetTwoSided(uint8_t bWantTwoSided)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WidgetComponent", "SetTwoSided");
    struct
    {
        uint8_t bWantTwoSided;
    } Parms{};
    Parms.bWantTwoSided = (uint8_t)bWantTwoSided;
    this->ProcessEvent(Func, &Parms);
}

void UWidgetComponent::SetTintColorAndOpacity(struct FLinearColor NewTintColorAndOpacity)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WidgetComponent", "SetTintColorAndOpacity");
    struct
    {
        struct FLinearColor NewTintColorAndOpacity;
    } Parms{};
    Parms.NewTintColorAndOpacity = (struct FLinearColor)NewTintColorAndOpacity;
    this->ProcessEvent(Func, &Parms);
}

void UWidgetComponent::SetTickWhenOffscreen(uint8_t bWantTickWhenOffscreen)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WidgetComponent", "SetTickWhenOffscreen");
    struct
    {
        uint8_t bWantTickWhenOffscreen;
    } Parms{};
    Parms.bWantTickWhenOffscreen = (uint8_t)bWantTickWhenOffscreen;
    this->ProcessEvent(Func, &Parms);
}

void UWidgetComponent::SetRedrawTime(float InRedrawTime)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WidgetComponent", "SetRedrawTime");
    struct
    {
        float InRedrawTime;
    } Parms{};
    Parms.InRedrawTime = (float)InRedrawTime;
    this->ProcessEvent(Func, &Parms);
}

void UWidgetComponent::SetPivot(const struct FVector2D& InPivot)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WidgetComponent", "SetPivot");
    struct
    {
        struct FVector2D InPivot;
    } Parms{};
    Parms.InPivot = (struct FVector2D)InPivot;
    this->ProcessEvent(Func, &Parms);
}

void UWidgetComponent::SetOwnerPlayer(struct ULocalPlayer* LocalPlayer)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WidgetComponent", "SetOwnerPlayer");
    struct
    {
        struct ULocalPlayer* LocalPlayer;
    } Parms{};
    Parms.LocalPlayer = (struct ULocalPlayer*)LocalPlayer;
    this->ProcessEvent(Func, &Parms);
}

void UWidgetComponent::SetManuallyRedraw(uint8_t bUseManualRedraw)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WidgetComponent", "SetManuallyRedraw");
    struct
    {
        uint8_t bUseManualRedraw;
    } Parms{};
    Parms.bUseManualRedraw = (uint8_t)bUseManualRedraw;
    this->ProcessEvent(Func, &Parms);
}

void UWidgetComponent::SetGeometryMode(EWidgetGeometryMode InGeometryMode)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WidgetComponent", "SetGeometryMode");
    struct
    {
        enum EWidgetGeometryMode InGeometryMode;
    } Parms{};
    Parms.InGeometryMode = (enum EWidgetGeometryMode)InGeometryMode;
    this->ProcessEvent(Func, &Parms);
}

void UWidgetComponent::SetDrawSize(struct FVector2D size)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WidgetComponent", "SetDrawSize");
    struct
    {
        struct FVector2D size;
    } Parms{};
    Parms.size = (struct FVector2D)size;
    this->ProcessEvent(Func, &Parms);
}

void UWidgetComponent::SetDrawAtDesiredSize(uint8_t bInDrawAtDesiredSize)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WidgetComponent", "SetDrawAtDesiredSize");
    struct
    {
        uint8_t bInDrawAtDesiredSize;
    } Parms{};
    Parms.bInDrawAtDesiredSize = (uint8_t)bInDrawAtDesiredSize;
    this->ProcessEvent(Func, &Parms);
}

void UWidgetComponent::SetCylinderArcAngle(float InCylinderArcAngle)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WidgetComponent", "SetCylinderArcAngle");
    struct
    {
        float InCylinderArcAngle;
    } Parms{};
    Parms.InCylinderArcAngle = (float)InCylinderArcAngle;
    this->ProcessEvent(Func, &Parms);
}

void UWidgetComponent::SetBackgroundColor(struct FLinearColor NewBackgroundColor)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WidgetComponent", "SetBackgroundColor");
    struct
    {
        struct FLinearColor NewBackgroundColor;
    } Parms{};
    Parms.NewBackgroundColor = (struct FLinearColor)NewBackgroundColor;
    this->ProcessEvent(Func, &Parms);
}

void UWidgetComponent::RequestRedraw()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WidgetComponent", "RequestRedraw");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

EWindowVisibility UWidgetComponent::GetWindowVisiblility()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WidgetComponent", "GetWindowVisiblility");
    struct
    {
        enum EWindowVisibility ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UWidgetComponent::GetWindowFocusable()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WidgetComponent", "GetWindowFocusable");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

EWidgetSpace UWidgetComponent::GetWidgetSpace()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WidgetComponent", "GetWidgetSpace");
    struct
    {
        enum EWidgetSpace ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UUserWidget* UWidgetComponent::GetUserWidgetObject()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WidgetComponent", "GetUserWidgetObject");
    struct
    {
        struct UUserWidget* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UWidgetComponent::GetTwoSided()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WidgetComponent", "GetTwoSided");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UWidgetComponent::GetTickWhenOffscreen()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WidgetComponent", "GetTickWhenOffscreen");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UTextureRenderTarget2D* UWidgetComponent::GetRenderTarget()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WidgetComponent", "GetRenderTarget");
    struct
    {
        struct UTextureRenderTarget2D* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UWidgetComponent::GetRedrawTime()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WidgetComponent", "GetRedrawTime");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FVector2D UWidgetComponent::GetPivot()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WidgetComponent", "GetPivot");
    struct
    {
        struct FVector2D ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct ULocalPlayer* UWidgetComponent::GetOwnerPlayer()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WidgetComponent", "GetOwnerPlayer");
    struct
    {
        struct ULocalPlayer* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UMaterialInstanceDynamic* UWidgetComponent::GetMaterialInstance()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WidgetComponent", "GetMaterialInstance");
    struct
    {
        struct UMaterialInstanceDynamic* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UWidgetComponent::GetManuallyRedraw()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WidgetComponent", "GetManuallyRedraw");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

EWidgetGeometryMode UWidgetComponent::GetGeometryMode()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WidgetComponent", "GetGeometryMode");
    struct
    {
        enum EWidgetGeometryMode ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FVector2D UWidgetComponent::GetDrawSize()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WidgetComponent", "GetDrawSize");
    struct
    {
        struct FVector2D ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UWidgetComponent::GetDrawAtDesiredSize()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WidgetComponent", "GetDrawAtDesiredSize");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UWidgetComponent::GetCylinderArcAngle()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WidgetComponent", "GetCylinderArcAngle");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FVector2D UWidgetComponent::GetCurrentDrawSize()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WidgetComponent", "GetCurrentDrawSize");
    struct
    {
        struct FVector2D ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// ---- UAsyncTaskDownloadImage::* ----
struct UAsyncTaskDownloadImage* UAsyncTaskDownloadImage::DownloadImage(struct FString URL)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AsyncTaskDownloadImage", "DownloadImage");
    struct
    {
        struct FString URL;
        struct UAsyncTaskDownloadImage* ReturnValue;
    } Parms{};
    Parms.URL = (struct FString)URL;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// ---- UBackgroundBlurSlot::* ----
void UBackgroundBlurSlot::SetVerticalAlignment(EVerticalAlignment InVerticalAlignment)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BackgroundBlurSlot", "SetVerticalAlignment");
    struct
    {
        enum EVerticalAlignment InVerticalAlignment;
    } Parms{};
    Parms.InVerticalAlignment = (enum EVerticalAlignment)InVerticalAlignment;
    this->ProcessEvent(Func, &Parms);
}

void UBackgroundBlurSlot::SetPadding(struct FMargin InPadding)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BackgroundBlurSlot", "SetPadding");
    struct
    {
        struct FMargin InPadding;
    } Parms{};
    Parms.InPadding = (struct FMargin)InPadding;
    this->ProcessEvent(Func, &Parms);
}

void UBackgroundBlurSlot::SetHorizontalAlignment(EHorizontalAlignment InHorizontalAlignment)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BackgroundBlurSlot", "SetHorizontalAlignment");
    struct
    {
        enum EHorizontalAlignment InHorizontalAlignment;
    } Parms{};
    Parms.InHorizontalAlignment = (enum EHorizontalAlignment)InHorizontalAlignment;
    this->ProcessEvent(Func, &Parms);
}

// ---- UBoolBinding::* ----
uint8_t UBoolBinding::GetValue()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BoolBinding", "GetValue");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// ---- UBorderSlot::* ----
void UBorderSlot::SetVerticalAlignment(EVerticalAlignment InVerticalAlignment)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BorderSlot", "SetVerticalAlignment");
    struct
    {
        enum EVerticalAlignment InVerticalAlignment;
    } Parms{};
    Parms.InVerticalAlignment = (enum EVerticalAlignment)InVerticalAlignment;
    this->ProcessEvent(Func, &Parms);
}

void UBorderSlot::SetPadding(struct FMargin InPadding)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BorderSlot", "SetPadding");
    struct
    {
        struct FMargin InPadding;
    } Parms{};
    Parms.InPadding = (struct FMargin)InPadding;
    this->ProcessEvent(Func, &Parms);
}

void UBorderSlot::SetHorizontalAlignment(EHorizontalAlignment InHorizontalAlignment)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BorderSlot", "SetHorizontalAlignment");
    struct
    {
        enum EHorizontalAlignment InHorizontalAlignment;
    } Parms{};
    Parms.InHorizontalAlignment = (enum EHorizontalAlignment)InHorizontalAlignment;
    this->ProcessEvent(Func, &Parms);
}

// ---- UBrushBinding::* ----
struct FSlateBrush UBrushBinding::GetValue()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BrushBinding", "GetValue");
    struct
    {
        struct FSlateBrush ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// ---- UButtonSlot::* ----
void UButtonSlot::SetVerticalAlignment(EVerticalAlignment InVerticalAlignment)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ButtonSlot", "SetVerticalAlignment");
    struct
    {
        enum EVerticalAlignment InVerticalAlignment;
    } Parms{};
    Parms.InVerticalAlignment = (enum EVerticalAlignment)InVerticalAlignment;
    this->ProcessEvent(Func, &Parms);
}

void UButtonSlot::SetPadding(struct FMargin InPadding)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ButtonSlot", "SetPadding");
    struct
    {
        struct FMargin InPadding;
    } Parms{};
    Parms.InPadding = (struct FMargin)InPadding;
    this->ProcessEvent(Func, &Parms);
}

void UButtonSlot::SetHorizontalAlignment(EHorizontalAlignment InHorizontalAlignment)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ButtonSlot", "SetHorizontalAlignment");
    struct
    {
        enum EHorizontalAlignment InHorizontalAlignment;
    } Parms{};
    Parms.InHorizontalAlignment = (enum EHorizontalAlignment)InHorizontalAlignment;
    this->ProcessEvent(Func, &Parms);
}

// ---- UCanvasPanelSlot::* ----
void UCanvasPanelSlot::SetZOrder(int32_t InZOrder)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("CanvasPanelSlot", "SetZOrder");
    struct
    {
        int32_t InZOrder;
    } Parms{};
    Parms.InZOrder = (int32_t)InZOrder;
    this->ProcessEvent(Func, &Parms);
}

void UCanvasPanelSlot::SetSublingIndex(int32_t InSublingIndex)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("CanvasPanelSlot", "SetSublingIndex");
    struct
    {
        int32_t InSublingIndex;
    } Parms{};
    Parms.InSublingIndex = (int32_t)InSublingIndex;
    this->ProcessEvent(Func, &Parms);
}

void UCanvasPanelSlot::SetSize(struct FVector2D InSize)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("CanvasPanelSlot", "SetSize");
    struct
    {
        struct FVector2D InSize;
    } Parms{};
    Parms.InSize = (struct FVector2D)InSize;
    this->ProcessEvent(Func, &Parms);
}

void UCanvasPanelSlot::SetPosition(struct FVector2D InPosition)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("CanvasPanelSlot", "SetPosition");
    struct
    {
        struct FVector2D InPosition;
    } Parms{};
    Parms.InPosition = (struct FVector2D)InPosition;
    this->ProcessEvent(Func, &Parms);
}

void UCanvasPanelSlot::SetOffsets(struct FMargin InOffset)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("CanvasPanelSlot", "SetOffsets");
    struct
    {
        struct FMargin InOffset;
    } Parms{};
    Parms.InOffset = (struct FMargin)InOffset;
    this->ProcessEvent(Func, &Parms);
}

void UCanvasPanelSlot::SetMinimum(struct FVector2D InMinimumAnchors)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("CanvasPanelSlot", "SetMinimum");
    struct
    {
        struct FVector2D InMinimumAnchors;
    } Parms{};
    Parms.InMinimumAnchors = (struct FVector2D)InMinimumAnchors;
    this->ProcessEvent(Func, &Parms);
}

void UCanvasPanelSlot::SetMaximum(struct FVector2D InMaximumAnchors)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("CanvasPanelSlot", "SetMaximum");
    struct
    {
        struct FVector2D InMaximumAnchors;
    } Parms{};
    Parms.InMaximumAnchors = (struct FVector2D)InMaximumAnchors;
    this->ProcessEvent(Func, &Parms);
}

void UCanvasPanelSlot::SetLayout(const struct FAnchorData& InLayoutData)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("CanvasPanelSlot", "SetLayout");
    struct
    {
        struct FAnchorData InLayoutData;
    } Parms{};
    Parms.InLayoutData = (struct FAnchorData)InLayoutData;
    this->ProcessEvent(Func, &Parms);
}

void UCanvasPanelSlot::SetAutoSize(uint8_t InbAutoSize)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("CanvasPanelSlot", "SetAutoSize");
    struct
    {
        uint8_t InbAutoSize;
    } Parms{};
    Parms.InbAutoSize = (uint8_t)InbAutoSize;
    this->ProcessEvent(Func, &Parms);
}

void UCanvasPanelSlot::SetAnchors(struct FAnchors InAnchors)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("CanvasPanelSlot", "SetAnchors");
    struct
    {
        struct FAnchors InAnchors;
    } Parms{};
    Parms.InAnchors = (struct FAnchors)InAnchors;
    this->ProcessEvent(Func, &Parms);
}

void UCanvasPanelSlot::SetAlignment(struct FVector2D InAlignment)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("CanvasPanelSlot", "SetAlignment");
    struct
    {
        struct FVector2D InAlignment;
    } Parms{};
    Parms.InAlignment = (struct FVector2D)InAlignment;
    this->ProcessEvent(Func, &Parms);
}

int32_t UCanvasPanelSlot::GetZOrder()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("CanvasPanelSlot", "GetZOrder");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FVector2D UCanvasPanelSlot::GetSize()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("CanvasPanelSlot", "GetSize");
    struct
    {
        struct FVector2D ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FVector2D UCanvasPanelSlot::GetPosition()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("CanvasPanelSlot", "GetPosition");
    struct
    {
        struct FVector2D ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FMargin UCanvasPanelSlot::GetOffsets()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("CanvasPanelSlot", "GetOffsets");
    struct
    {
        struct FMargin ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FAnchorData UCanvasPanelSlot::GetLayout()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("CanvasPanelSlot", "GetLayout");
    struct
    {
        struct FAnchorData ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UCanvasPanelSlot::GetAutoSize()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("CanvasPanelSlot", "GetAutoSize");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FAnchors UCanvasPanelSlot::GetAnchors()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("CanvasPanelSlot", "GetAnchors");
    struct
    {
        struct FAnchors ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FVector2D UCanvasPanelSlot::GetAlignment()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("CanvasPanelSlot", "GetAlignment");
    struct
    {
        struct FVector2D ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// ---- UCheckedStateBinding::* ----
ECheckBoxState UCheckedStateBinding::GetValue()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("CheckedStateBinding", "GetValue");
    struct
    {
        enum ECheckBoxState ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// ---- UCircularThrobber::* ----
void UCircularThrobber::SetRadius(float InRadius)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("CircularThrobber", "SetRadius");
    struct
    {
        float InRadius;
    } Parms{};
    Parms.InRadius = (float)InRadius;
    this->ProcessEvent(Func, &Parms);
}

void UCircularThrobber::SetPeriod(float InPeriod)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("CircularThrobber", "SetPeriod");
    struct
    {
        float InPeriod;
    } Parms{};
    Parms.InPeriod = (float)InPeriod;
    this->ProcessEvent(Func, &Parms);
}

void UCircularThrobber::SetNumberOfPieces(int32_t InNumberOfPieces)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("CircularThrobber", "SetNumberOfPieces");
    struct
    {
        int32_t InNumberOfPieces;
    } Parms{};
    Parms.InNumberOfPieces = (int32_t)InNumberOfPieces;
    this->ProcessEvent(Func, &Parms);
}

// ---- UColorBinding::* ----
struct FSlateColor UColorBinding::GetSlateValue()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ColorBinding", "GetSlateValue");
    struct
    {
        struct FSlateColor ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FLinearColor UColorBinding::GetLinearValue()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ColorBinding", "GetLinearValue");
    struct
    {
        struct FLinearColor ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// ---- UDynamicEntryBoxBase::* ----
void UDynamicEntryBoxBase::SetEntrySpacing(const struct FVector2D& InEntrySpacing)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DynamicEntryBoxBase", "SetEntrySpacing");
    struct
    {
        struct FVector2D InEntrySpacing;
    } Parms{};
    Parms.InEntrySpacing = (struct FVector2D)InEntrySpacing;
    this->ProcessEvent(Func, &Parms);
}

int32_t UDynamicEntryBoxBase::GetNumEntries()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DynamicEntryBoxBase", "GetNumEntries");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct TArray<struct UUserWidget*> UDynamicEntryBoxBase::GetAllEntries()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DynamicEntryBoxBase", "GetAllEntries");
    struct
    {
        struct TArray<struct UUserWidget*> ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// ---- UDynamicEntryBox::* ----
void UDynamicEntryBox::Reset(uint8_t bDeleteWidgets)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DynamicEntryBox", "Reset");
    struct
    {
        uint8_t bDeleteWidgets;
    } Parms{};
    Parms.bDeleteWidgets = (uint8_t)bDeleteWidgets;
    this->ProcessEvent(Func, &Parms);
}

void UDynamicEntryBox::RemoveEntry(struct UUserWidget* EntryWidget)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DynamicEntryBox", "RemoveEntry");
    struct
    {
        struct UUserWidget* EntryWidget;
    } Parms{};
    Parms.EntryWidget = (struct UUserWidget*)EntryWidget;
    this->ProcessEvent(Func, &Parms);
}

struct UUserWidget* UDynamicEntryBox::BP_CreateEntryOfClass(struct UUserWidget* EntryClass)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DynamicEntryBox", "BP_CreateEntryOfClass");
    struct
    {
        struct UUserWidget* EntryClass;
        struct UUserWidget* ReturnValue;
    } Parms{};
    Parms.EntryClass = (struct UUserWidget*)EntryClass;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UUserWidget* UDynamicEntryBox::BP_CreateEntry()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DynamicEntryBox", "BP_CreateEntry");
    struct
    {
        struct UUserWidget* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// ---- UFloatBinding::* ----
float UFloatBinding::GetValue()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("FloatBinding", "GetValue");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// ---- UGridSlot::* ----
void UGridSlot::SetVerticalAlignment(EVerticalAlignment InVerticalAlignment)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GridSlot", "SetVerticalAlignment");
    struct
    {
        enum EVerticalAlignment InVerticalAlignment;
    } Parms{};
    Parms.InVerticalAlignment = (enum EVerticalAlignment)InVerticalAlignment;
    this->ProcessEvent(Func, &Parms);
}

void UGridSlot::SetRowSpan(int32_t InRowSpan)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GridSlot", "SetRowSpan");
    struct
    {
        int32_t InRowSpan;
    } Parms{};
    Parms.InRowSpan = (int32_t)InRowSpan;
    this->ProcessEvent(Func, &Parms);
}

void UGridSlot::SetRow(int32_t InRow)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GridSlot", "SetRow");
    struct
    {
        int32_t InRow;
    } Parms{};
    Parms.InRow = (int32_t)InRow;
    this->ProcessEvent(Func, &Parms);
}

void UGridSlot::SetPadding(struct FMargin InPadding)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GridSlot", "SetPadding");
    struct
    {
        struct FMargin InPadding;
    } Parms{};
    Parms.InPadding = (struct FMargin)InPadding;
    this->ProcessEvent(Func, &Parms);
}

void UGridSlot::SetNudge(struct FVector2D InNudge)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GridSlot", "SetNudge");
    struct
    {
        struct FVector2D InNudge;
    } Parms{};
    Parms.InNudge = (struct FVector2D)InNudge;
    this->ProcessEvent(Func, &Parms);
}

void UGridSlot::SetLayer(int32_t InLayer)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GridSlot", "SetLayer");
    struct
    {
        int32_t InLayer;
    } Parms{};
    Parms.InLayer = (int32_t)InLayer;
    this->ProcessEvent(Func, &Parms);
}

void UGridSlot::SetHorizontalAlignment(EHorizontalAlignment InHorizontalAlignment)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GridSlot", "SetHorizontalAlignment");
    struct
    {
        enum EHorizontalAlignment InHorizontalAlignment;
    } Parms{};
    Parms.InHorizontalAlignment = (enum EHorizontalAlignment)InHorizontalAlignment;
    this->ProcessEvent(Func, &Parms);
}

void UGridSlot::SetColumnSpan(int32_t InColumnSpan)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GridSlot", "SetColumnSpan");
    struct
    {
        int32_t InColumnSpan;
    } Parms{};
    Parms.InColumnSpan = (int32_t)InColumnSpan;
    this->ProcessEvent(Func, &Parms);
}

void UGridSlot::SetColumn(int32_t InColumn)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GridSlot", "SetColumn");
    struct
    {
        int32_t InColumn;
    } Parms{};
    Parms.InColumn = (int32_t)InColumn;
    this->ProcessEvent(Func, &Parms);
}

// ---- UHorizontalBoxSlot::* ----
void UHorizontalBoxSlot::SetVerticalAlignment(EVerticalAlignment InVerticalAlignment)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HorizontalBoxSlot", "SetVerticalAlignment");
    struct
    {
        enum EVerticalAlignment InVerticalAlignment;
    } Parms{};
    Parms.InVerticalAlignment = (enum EVerticalAlignment)InVerticalAlignment;
    this->ProcessEvent(Func, &Parms);
}

void UHorizontalBoxSlot::SetSize(struct FSlateChildSize InSize)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HorizontalBoxSlot", "SetSize");
    struct
    {
        struct FSlateChildSize InSize;
    } Parms{};
    Parms.InSize = (struct FSlateChildSize)InSize;
    this->ProcessEvent(Func, &Parms);
}

void UHorizontalBoxSlot::SetPadding(struct FMargin InPadding)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HorizontalBoxSlot", "SetPadding");
    struct
    {
        struct FMargin InPadding;
    } Parms{};
    Parms.InPadding = (struct FMargin)InPadding;
    this->ProcessEvent(Func, &Parms);
}

void UHorizontalBoxSlot::SetHorizontalAlignment(EHorizontalAlignment InHorizontalAlignment)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HorizontalBoxSlot", "SetHorizontalAlignment");
    struct
    {
        enum EHorizontalAlignment InHorizontalAlignment;
    } Parms{};
    Parms.InHorizontalAlignment = (enum EHorizontalAlignment)InHorizontalAlignment;
    this->ProcessEvent(Func, &Parms);
}

// ---- UInputKeySelector::* ----
void UInputKeySelector::SetTextBlockVisibility(ESlateVisibility InVisibility)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("InputKeySelector", "SetTextBlockVisibility");
    struct
    {
        enum ESlateVisibility InVisibility;
    } Parms{};
    Parms.InVisibility = (enum ESlateVisibility)InVisibility;
    this->ProcessEvent(Func, &Parms);
}

void UInputKeySelector::SetSelectedKey(const struct FInputChord& InSelectedKey)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("InputKeySelector", "SetSelectedKey");
    struct
    {
        struct FInputChord InSelectedKey;
    } Parms{};
    Parms.InSelectedKey = (struct FInputChord)InSelectedKey;
    this->ProcessEvent(Func, &Parms);
}

void UInputKeySelector::SetNoKeySpecifiedText(struct FText InNoKeySpecifiedText)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("InputKeySelector", "SetNoKeySpecifiedText");
    struct
    {
        struct FText InNoKeySpecifiedText;
    } Parms{};
    Parms.InNoKeySpecifiedText = (struct FText)InNoKeySpecifiedText;
    this->ProcessEvent(Func, &Parms);
}

void UInputKeySelector::SetKeySelectionText(struct FText InKeySelectionText)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("InputKeySelector", "SetKeySelectionText");
    struct
    {
        struct FText InKeySelectionText;
    } Parms{};
    Parms.InKeySelectionText = (struct FText)InKeySelectionText;
    this->ProcessEvent(Func, &Parms);
}

void UInputKeySelector::SetEscapeKeys(const struct TArray<struct FKey>& InKeys)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("InputKeySelector", "SetEscapeKeys");
    struct
    {
        struct TArray<struct FKey> InKeys;
    } Parms{};
    Parms.InKeys = (struct TArray<struct FKey>)InKeys;
    this->ProcessEvent(Func, &Parms);
}

void UInputKeySelector::SetAllowModifierKeys(uint8_t bInAllowModifierKeys)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("InputKeySelector", "SetAllowModifierKeys");
    struct
    {
        uint8_t bInAllowModifierKeys;
    } Parms{};
    Parms.bInAllowModifierKeys = (uint8_t)bInAllowModifierKeys;
    this->ProcessEvent(Func, &Parms);
}

void UInputKeySelector::SetAllowGamepadKeys(uint8_t bInAllowGamepadKeys)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("InputKeySelector", "SetAllowGamepadKeys");
    struct
    {
        uint8_t bInAllowGamepadKeys;
    } Parms{};
    Parms.bInAllowGamepadKeys = (uint8_t)bInAllowGamepadKeys;
    this->ProcessEvent(Func, &Parms);
}

void UInputKeySelector::OnKeySelected__DelegateSignature(struct FInputChord SelectedKey)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("InputKeySelector", "OnKeySelected__DelegateSignature");
    struct
    {
        struct FInputChord SelectedKey;
    } Parms{};
    Parms.SelectedKey = (struct FInputChord)SelectedKey;
    this->ProcessEvent(Func, &Parms);
}

void UInputKeySelector::OnIsSelectingKeyChanged__DelegateSignature()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("InputKeySelector", "OnIsSelectingKeyChanged__DelegateSignature");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

uint8_t UInputKeySelector::GetIsSelectingKey()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("InputKeySelector", "GetIsSelectingKey");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// ---- UInt32Binding::* ----
int32_t UInt32Binding::GetValue()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("Int32Binding", "GetValue");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// ---- IUserListEntry::* ----
void IUserListEntry::BP_OnItemSelectionChanged(uint8_t bIsSelected)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("UserListEntry", "BP_OnItemSelectionChanged");
    struct
    {
        uint8_t bIsSelected;
    } Parms{};
    Parms.bIsSelected = (uint8_t)bIsSelected;
    this->ProcessEvent(Func, &Parms);
}

void IUserListEntry::BP_OnItemExpansionChanged(uint8_t bIsExpanded)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("UserListEntry", "BP_OnItemExpansionChanged");
    struct
    {
        uint8_t bIsExpanded;
    } Parms{};
    Parms.bIsExpanded = (uint8_t)bIsExpanded;
    this->ProcessEvent(Func, &Parms);
}

void IUserListEntry::BP_OnEntryReleased()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("UserListEntry", "BP_OnEntryReleased");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// ---- UUserListEntryLibrary::* ----
uint8_t UUserListEntryLibrary::IsListItemSelected(struct TScriptInterface<IUserListEntry> UserListEntry)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UserListEntryLibrary", "IsListItemSelected");
    struct
    {
        struct TScriptInterface<IUserListEntry> UserListEntry;
        uint8_t ReturnValue;
    } Parms{};
    Parms.UserListEntry = (struct TScriptInterface<IUserListEntry>)UserListEntry;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UUserListEntryLibrary::IsListItemExpanded(struct TScriptInterface<IUserListEntry> UserListEntry)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UserListEntryLibrary", "IsListItemExpanded");
    struct
    {
        struct TScriptInterface<IUserListEntry> UserListEntry;
        uint8_t ReturnValue;
    } Parms{};
    Parms.UserListEntry = (struct TScriptInterface<IUserListEntry>)UserListEntry;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UListViewBase* UUserListEntryLibrary::GetOwningListView(struct TScriptInterface<IUserListEntry> UserListEntry)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UserListEntryLibrary", "GetOwningListView");
    struct
    {
        struct TScriptInterface<IUserListEntry> UserListEntry;
        struct UListViewBase* ReturnValue;
    } Parms{};
    Parms.UserListEntry = (struct TScriptInterface<IUserListEntry>)UserListEntry;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// ---- IUserObjectListEntry::* ----
void IUserObjectListEntry::OnListItemObjectSet(struct UObject* ListItemObject)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("UserObjectListEntry", "OnListItemObjectSet");
    struct
    {
        struct UObject* ListItemObject;
    } Parms{};
    Parms.ListItemObject = (struct UObject*)ListItemObject;
    this->ProcessEvent(Func, &Parms);
}

// ---- UUserObjectListEntryLibrary::* ----
struct UObject* UUserObjectListEntryLibrary::GetListItemObject(struct TScriptInterface<IUserObjectListEntry> UserObjectListEntry)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UserObjectListEntryLibrary", "GetListItemObject");
    struct
    {
        struct TScriptInterface<IUserObjectListEntry> UserObjectListEntry;
        struct UObject* ReturnValue;
    } Parms{};
    Parms.UserObjectListEntry = (struct TScriptInterface<IUserObjectListEntry>)UserObjectListEntry;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// ---- ULine::* ----
void ULine::SetThickness(float InThickness)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("Line", "SetThickness");
    struct
    {
        float InThickness;
    } Parms{};
    Parms.InThickness = (float)InThickness;
    this->ProcessEvent(Func, &Parms);
}

void ULine::SetOpacity(float InOpacity)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("Line", "SetOpacity");
    struct
    {
        float InOpacity;
    } Parms{};
    Parms.InOpacity = (float)InOpacity;
    this->ProcessEvent(Func, &Parms);
}

void ULine::SetColorAndOpacity(struct FLinearColor InColorAndOpacity)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("Line", "SetColorAndOpacity");
    struct
    {
        struct FLinearColor InColorAndOpacity;
    } Parms{};
    Parms.InColorAndOpacity = (struct FLinearColor)InColorAndOpacity;
    this->ProcessEvent(Func, &Parms);
}

// ---- UMenuAnchor::* ----
void UMenuAnchor::ToggleOpen(uint8_t bFocusOnOpen)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MenuAnchor", "ToggleOpen");
    struct
    {
        uint8_t bFocusOnOpen;
    } Parms{};
    Parms.bFocusOnOpen = (uint8_t)bFocusOnOpen;
    this->ProcessEvent(Func, &Parms);
}

uint8_t UMenuAnchor::ShouldOpenDueToClick()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MenuAnchor", "ShouldOpenDueToClick");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UMenuAnchor::SetPlacement(EMenuPlacement InPlacement)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MenuAnchor", "SetPlacement");
    struct
    {
        enum EMenuPlacement InPlacement;
    } Parms{};
    Parms.InPlacement = (enum EMenuPlacement)InPlacement;
    this->ProcessEvent(Func, &Parms);
}

void UMenuAnchor::Open(uint8_t bFocusMenu)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MenuAnchor", "Open");
    struct
    {
        uint8_t bFocusMenu;
    } Parms{};
    Parms.bFocusMenu = (uint8_t)bFocusMenu;
    this->ProcessEvent(Func, &Parms);
}

uint8_t UMenuAnchor::IsOpen()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MenuAnchor", "IsOpen");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UMenuAnchor::HasOpenSubMenus()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MenuAnchor", "HasOpenSubMenus");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FVector2D UMenuAnchor::GetMenuPosition()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MenuAnchor", "GetMenuPosition");
    struct
    {
        struct FVector2D ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UMenuAnchor::FitInWindow(uint8_t bFit)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MenuAnchor", "FitInWindow");
    struct
    {
        uint8_t bFit;
    } Parms{};
    Parms.bFit = (uint8_t)bFit;
    this->ProcessEvent(Func, &Parms);
}

void UMenuAnchor::Close()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MenuAnchor", "Close");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// ---- UMirrorImage::* ----
void UMirrorImage::SetOpacity(float InOpacity)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MirrorImage", "SetOpacity");
    struct
    {
        float InOpacity;
    } Parms{};
    Parms.InOpacity = (float)InOpacity;
    this->ProcessEvent(Func, &Parms);
}

void UMirrorImage::SetColorAndOpacity(struct FLinearColor InColorAndOpacity)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MirrorImage", "SetColorAndOpacity");
    struct
    {
        struct FLinearColor InColorAndOpacity;
    } Parms{};
    Parms.InColorAndOpacity = (struct FLinearColor)InColorAndOpacity;
    this->ProcessEvent(Func, &Parms);
}

void UMirrorImage::SetBrushTintColor(struct FSlateColor TintColor)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MirrorImage", "SetBrushTintColor");
    struct
    {
        struct FSlateColor TintColor;
    } Parms{};
    Parms.TintColor = (struct FSlateColor)TintColor;
    this->ProcessEvent(Func, &Parms);
}

void UMirrorImage::SetBrushSize(struct FVector2D DesiredSize)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MirrorImage", "SetBrushSize");
    struct
    {
        struct FVector2D DesiredSize;
    } Parms{};
    Parms.DesiredSize = (struct FVector2D)DesiredSize;
    this->ProcessEvent(Func, &Parms);
}

void UMirrorImage::SetBrushResourceObject(struct UObject* ResourceObject)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MirrorImage", "SetBrushResourceObject");
    struct
    {
        struct UObject* ResourceObject;
    } Parms{};
    Parms.ResourceObject = (struct UObject*)ResourceObject;
    this->ProcessEvent(Func, &Parms);
}

void UMirrorImage::SetBrushFromTextureDynamic(struct UTexture2DDynamic* Texture, uint8_t bMatchSize)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MirrorImage", "SetBrushFromTextureDynamic");
    struct
    {
        struct UTexture2DDynamic* Texture;
        uint8_t bMatchSize;
    } Parms{};
    Parms.Texture = (struct UTexture2DDynamic*)Texture;
    Parms.bMatchSize = (uint8_t)bMatchSize;
    this->ProcessEvent(Func, &Parms);
}

void UMirrorImage::SetBrushFromTexture(struct UTexture2D* Texture, uint8_t bMatchSize)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MirrorImage", "SetBrushFromTexture");
    struct
    {
        struct UTexture2D* Texture;
        uint8_t bMatchSize;
    } Parms{};
    Parms.Texture = (struct UTexture2D*)Texture;
    Parms.bMatchSize = (uint8_t)bMatchSize;
    this->ProcessEvent(Func, &Parms);
}

void UMirrorImage::SetBrushFromSoftTexture(struct TSoftObjectPtr<UTexture2D> SoftTexture, uint8_t bMatchSize)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MirrorImage", "SetBrushFromSoftTexture");
    struct
    {
        struct TSoftObjectPtr<UTexture2D> SoftTexture;
        uint8_t bMatchSize;
    } Parms{};
    Parms.SoftTexture = (struct TSoftObjectPtr<UTexture2D>)SoftTexture;
    Parms.bMatchSize = (uint8_t)bMatchSize;
    this->ProcessEvent(Func, &Parms);
}

void UMirrorImage::SetBrushFromSoftMaterial(struct TSoftObjectPtr<UMaterialInterface> SoftMaterial)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MirrorImage", "SetBrushFromSoftMaterial");
    struct
    {
        struct TSoftObjectPtr<UMaterialInterface> SoftMaterial;
    } Parms{};
    Parms.SoftMaterial = (struct TSoftObjectPtr<UMaterialInterface>)SoftMaterial;
    this->ProcessEvent(Func, &Parms);
}

void UMirrorImage::SetBrushFromSoftAtlasInterfaceWithAmplifiedRate(struct TSoftObjectPtr<UObject> SoftTexture, uint8_t bMatchSize, uint8_t bMatchAmplifiedRate)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MirrorImage", "SetBrushFromSoftAtlasInterfaceWithAmplifiedRate");
    struct
    {
        struct TSoftObjectPtr<UObject> SoftTexture;
        uint8_t bMatchSize;
        uint8_t bMatchAmplifiedRate;
    } Parms{};
    Parms.SoftTexture = (struct TSoftObjectPtr<UObject>)SoftTexture;
    Parms.bMatchSize = (uint8_t)bMatchSize;
    Parms.bMatchAmplifiedRate = (uint8_t)bMatchAmplifiedRate;
    this->ProcessEvent(Func, &Parms);
}

void UMirrorImage::SetBrushFromSoftAtlasInterface(struct TSoftObjectPtr<UObject> SoftTexture, uint8_t bMatchSize)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MirrorImage", "SetBrushFromSoftAtlasInterface");
    struct
    {
        struct TSoftObjectPtr<UObject> SoftTexture;
        uint8_t bMatchSize;
    } Parms{};
    Parms.SoftTexture = (struct TSoftObjectPtr<UObject>)SoftTexture;
    Parms.bMatchSize = (uint8_t)bMatchSize;
    this->ProcessEvent(Func, &Parms);
}

void UMirrorImage::SetBrushFromMaterial(struct UMaterialInterface* Material)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MirrorImage", "SetBrushFromMaterial");
    struct
    {
        struct UMaterialInterface* Material;
    } Parms{};
    Parms.Material = (struct UMaterialInterface*)Material;
    this->ProcessEvent(Func, &Parms);
}

void UMirrorImage::SetBrushFromAtlasInterfaceWithAmplifiedRate(struct TScriptInterface<ISlateTextureAtlasInterface> AtlasRegion, uint8_t bMatchSize, uint8_t bMatchAmplifiedRate)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MirrorImage", "SetBrushFromAtlasInterfaceWithAmplifiedRate");
    struct
    {
        struct TScriptInterface<ISlateTextureAtlasInterface> AtlasRegion;
        uint8_t bMatchSize;
        uint8_t bMatchAmplifiedRate;
    } Parms{};
    Parms.AtlasRegion = (struct TScriptInterface<ISlateTextureAtlasInterface>)AtlasRegion;
    Parms.bMatchSize = (uint8_t)bMatchSize;
    Parms.bMatchAmplifiedRate = (uint8_t)bMatchAmplifiedRate;
    this->ProcessEvent(Func, &Parms);
}

void UMirrorImage::SetBrushFromAtlasInterface(struct TScriptInterface<ISlateTextureAtlasInterface> AtlasRegion, uint8_t bMatchSize)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MirrorImage", "SetBrushFromAtlasInterface");
    struct
    {
        struct TScriptInterface<ISlateTextureAtlasInterface> AtlasRegion;
        uint8_t bMatchSize;
    } Parms{};
    Parms.AtlasRegion = (struct TScriptInterface<ISlateTextureAtlasInterface>)AtlasRegion;
    Parms.bMatchSize = (uint8_t)bMatchSize;
    this->ProcessEvent(Func, &Parms);
}

void UMirrorImage::SetBrushFromAsset(struct USlateBrushAsset* Asset)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MirrorImage", "SetBrushFromAsset");
    struct
    {
        struct USlateBrushAsset* Asset;
    } Parms{};
    Parms.Asset = (struct USlateBrushAsset*)Asset;
    this->ProcessEvent(Func, &Parms);
}

void UMirrorImage::SetBrush(const struct FSlateBrush& InBrush)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MirrorImage", "SetBrush");
    struct
    {
        struct FSlateBrush InBrush;
    } Parms{};
    Parms.InBrush = (struct FSlateBrush)InBrush;
    this->ProcessEvent(Func, &Parms);
}

struct UMaterialInstanceDynamic* UMirrorImage::GetDynamicMaterial()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MirrorImage", "GetDynamicMaterial");
    struct
    {
        struct UMaterialInstanceDynamic* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// ---- UMouseCursorBinding::* ----
EMouseCursor UMouseCursorBinding::GetValue()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MouseCursorBinding", "GetValue");
    struct
    {
        enum EMouseCursor ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// ---- UOverlaySlot::* ----
void UOverlaySlot::SetVerticalAlignment(EVerticalAlignment InVerticalAlignment)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("OverlaySlot", "SetVerticalAlignment");
    struct
    {
        enum EVerticalAlignment InVerticalAlignment;
    } Parms{};
    Parms.InVerticalAlignment = (enum EVerticalAlignment)InVerticalAlignment;
    this->ProcessEvent(Func, &Parms);
}

void UOverlaySlot::SetPadding(struct FMargin InPadding)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("OverlaySlot", "SetPadding");
    struct
    {
        struct FMargin InPadding;
    } Parms{};
    Parms.InPadding = (struct FMargin)InPadding;
    this->ProcessEvent(Func, &Parms);
}

void UOverlaySlot::SetHorizontalAlignment(EHorizontalAlignment InHorizontalAlignment)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("OverlaySlot", "SetHorizontalAlignment");
    struct
    {
        enum EHorizontalAlignment InHorizontalAlignment;
    } Parms{};
    Parms.InHorizontalAlignment = (enum EHorizontalAlignment)InHorizontalAlignment;
    this->ProcessEvent(Func, &Parms);
}

// ---- UScaleBoxSlot::* ----
void UScaleBoxSlot::SetVerticalAlignment(EVerticalAlignment InVerticalAlignment)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ScaleBoxSlot", "SetVerticalAlignment");
    struct
    {
        enum EVerticalAlignment InVerticalAlignment;
    } Parms{};
    Parms.InVerticalAlignment = (enum EVerticalAlignment)InVerticalAlignment;
    this->ProcessEvent(Func, &Parms);
}

void UScaleBoxSlot::SetPadding(struct FMargin InPadding)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ScaleBoxSlot", "SetPadding");
    struct
    {
        struct FMargin InPadding;
    } Parms{};
    Parms.InPadding = (struct FMargin)InPadding;
    this->ProcessEvent(Func, &Parms);
}

void UScaleBoxSlot::SetHorizontalAlignment(EHorizontalAlignment InHorizontalAlignment)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ScaleBoxSlot", "SetHorizontalAlignment");
    struct
    {
        enum EHorizontalAlignment InHorizontalAlignment;
    } Parms{};
    Parms.InHorizontalAlignment = (enum EHorizontalAlignment)InHorizontalAlignment;
    this->ProcessEvent(Func, &Parms);
}

// ---- UScrollBar::* ----
void UScrollBar::SetState(float InOffsetFraction, float InThumbSizeFraction)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ScrollBar", "SetState");
    struct
    {
        float InOffsetFraction;
        float InThumbSizeFraction;
    } Parms{};
    Parms.InOffsetFraction = (float)InOffsetFraction;
    Parms.InThumbSizeFraction = (float)InThumbSizeFraction;
    this->ProcessEvent(Func, &Parms);
}

// ---- UScrollBoxSlot::* ----
void UScrollBoxSlot::SetVerticalAlignment(EVerticalAlignment InVerticalAlignment)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ScrollBoxSlot", "SetVerticalAlignment");
    struct
    {
        enum EVerticalAlignment InVerticalAlignment;
    } Parms{};
    Parms.InVerticalAlignment = (enum EVerticalAlignment)InVerticalAlignment;
    this->ProcessEvent(Func, &Parms);
}

void UScrollBoxSlot::SetPadding(struct FMargin InPadding)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ScrollBoxSlot", "SetPadding");
    struct
    {
        struct FMargin InPadding;
    } Parms{};
    Parms.InPadding = (struct FMargin)InPadding;
    this->ProcessEvent(Func, &Parms);
}

void UScrollBoxSlot::SetHorizontalAlignment(EHorizontalAlignment InHorizontalAlignment)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ScrollBoxSlot", "SetHorizontalAlignment");
    struct
    {
        enum EHorizontalAlignment InHorizontalAlignment;
    } Parms{};
    Parms.InHorizontalAlignment = (enum EHorizontalAlignment)InHorizontalAlignment;
    this->ProcessEvent(Func, &Parms);
}

// ---- USizeBoxSlot::* ----
void USizeBoxSlot::SetVerticalAlignment(EVerticalAlignment InVerticalAlignment)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SizeBoxSlot", "SetVerticalAlignment");
    struct
    {
        enum EVerticalAlignment InVerticalAlignment;
    } Parms{};
    Parms.InVerticalAlignment = (enum EVerticalAlignment)InVerticalAlignment;
    this->ProcessEvent(Func, &Parms);
}

void USizeBoxSlot::SetPadding(struct FMargin InPadding)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SizeBoxSlot", "SetPadding");
    struct
    {
        struct FMargin InPadding;
    } Parms{};
    Parms.InPadding = (struct FMargin)InPadding;
    this->ProcessEvent(Func, &Parms);
}

void USizeBoxSlot::SetHorizontalAlignment(EHorizontalAlignment InHorizontalAlignment)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SizeBoxSlot", "SetHorizontalAlignment");
    struct
    {
        enum EHorizontalAlignment InHorizontalAlignment;
    } Parms{};
    Parms.InHorizontalAlignment = (enum EHorizontalAlignment)InHorizontalAlignment;
    this->ProcessEvent(Func, &Parms);
}

// ---- USlateBlueprintLibrary::* ----
struct FVector2D USlateBlueprintLibrary::TransformVectorLocalToAbsolute(const struct FGeometry& Geometry, struct FVector2D LocalVector)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("SlateBlueprintLibrary", "TransformVectorLocalToAbsolute");
    struct
    {
        struct FGeometry Geometry;
        struct FVector2D LocalVector;
        struct FVector2D ReturnValue;
    } Parms{};
    Parms.Geometry = (struct FGeometry)Geometry;
    Parms.LocalVector = (struct FVector2D)LocalVector;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FVector2D USlateBlueprintLibrary::TransformVectorAbsoluteToLocal(const struct FGeometry& Geometry, struct FVector2D AbsoluteVector)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("SlateBlueprintLibrary", "TransformVectorAbsoluteToLocal");
    struct
    {
        struct FGeometry Geometry;
        struct FVector2D AbsoluteVector;
        struct FVector2D ReturnValue;
    } Parms{};
    Parms.Geometry = (struct FGeometry)Geometry;
    Parms.AbsoluteVector = (struct FVector2D)AbsoluteVector;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float USlateBlueprintLibrary::TransformScalarLocalToAbsolute(const struct FGeometry& Geometry, float LocalScalar)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("SlateBlueprintLibrary", "TransformScalarLocalToAbsolute");
    struct
    {
        struct FGeometry Geometry;
        float LocalScalar;
        float ReturnValue;
    } Parms{};
    Parms.Geometry = (struct FGeometry)Geometry;
    Parms.LocalScalar = (float)LocalScalar;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float USlateBlueprintLibrary::TransformScalarAbsoluteToLocal(const struct FGeometry& Geometry, float AbsoluteScalar)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("SlateBlueprintLibrary", "TransformScalarAbsoluteToLocal");
    struct
    {
        struct FGeometry Geometry;
        float AbsoluteScalar;
        float ReturnValue;
    } Parms{};
    Parms.Geometry = (struct FGeometry)Geometry;
    Parms.AbsoluteScalar = (float)AbsoluteScalar;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void USlateBlueprintLibrary::ScreenToWidgetLocal(struct UObject* WorldContextObject, const struct FGeometry& Geometry, struct FVector2D ScreenPosition, struct FVector2D& LocalCoordinate)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("SlateBlueprintLibrary", "ScreenToWidgetLocal");
    struct
    {
        struct UObject* WorldContextObject;
        struct FGeometry Geometry;
        struct FVector2D ScreenPosition;
        struct FVector2D LocalCoordinate;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    Parms.Geometry = (struct FGeometry)Geometry;
    Parms.ScreenPosition = (struct FVector2D)ScreenPosition;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    LocalCoordinate = Parms.LocalCoordinate;
}

void USlateBlueprintLibrary::ScreenToWidgetAbsolute(struct UObject* WorldContextObject, struct FVector2D ScreenPosition, struct FVector2D& AbsoluteCoordinate)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("SlateBlueprintLibrary", "ScreenToWidgetAbsolute");
    struct
    {
        struct UObject* WorldContextObject;
        struct FVector2D ScreenPosition;
        struct FVector2D AbsoluteCoordinate;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    Parms.ScreenPosition = (struct FVector2D)ScreenPosition;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    AbsoluteCoordinate = Parms.AbsoluteCoordinate;
}

void USlateBlueprintLibrary::ScreenToViewport(struct UObject* WorldContextObject, struct FVector2D ScreenPosition, struct FVector2D& ViewportPosition)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("SlateBlueprintLibrary", "ScreenToViewport");
    struct
    {
        struct UObject* WorldContextObject;
        struct FVector2D ScreenPosition;
        struct FVector2D ViewportPosition;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    Parms.ScreenPosition = (struct FVector2D)ScreenPosition;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    ViewportPosition = Parms.ViewportPosition;
}

void USlateBlueprintLibrary::LocalToViewport(struct UObject* WorldContextObject, const struct FGeometry& Geometry, struct FVector2D LocalCoordinate, struct FVector2D& PixelPosition, struct FVector2D& ViewportPosition)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("SlateBlueprintLibrary", "LocalToViewport");
    struct
    {
        struct UObject* WorldContextObject;
        struct FGeometry Geometry;
        struct FVector2D LocalCoordinate;
        struct FVector2D PixelPosition;
        struct FVector2D ViewportPosition;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    Parms.Geometry = (struct FGeometry)Geometry;
    Parms.LocalCoordinate = (struct FVector2D)LocalCoordinate;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    PixelPosition = Parms.PixelPosition;
    ViewportPosition = Parms.ViewportPosition;
}

struct FVector2D USlateBlueprintLibrary::LocalToAbsolute(const struct FGeometry& Geometry, struct FVector2D LocalCoordinate)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("SlateBlueprintLibrary", "LocalToAbsolute");
    struct
    {
        struct FGeometry Geometry;
        struct FVector2D LocalCoordinate;
        struct FVector2D ReturnValue;
    } Parms{};
    Parms.Geometry = (struct FGeometry)Geometry;
    Parms.LocalCoordinate = (struct FVector2D)LocalCoordinate;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t USlateBlueprintLibrary::IsUnderLocation(const struct FGeometry& Geometry, const struct FVector2D& AbsoluteCoordinate)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("SlateBlueprintLibrary", "IsUnderLocation");
    struct
    {
        struct FGeometry Geometry;
        struct FVector2D AbsoluteCoordinate;
        uint8_t ReturnValue;
    } Parms{};
    Parms.Geometry = (struct FGeometry)Geometry;
    Parms.AbsoluteCoordinate = (struct FVector2D)AbsoluteCoordinate;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FVector2D USlateBlueprintLibrary::GetLocalTopLeft(const struct FGeometry& Geometry)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("SlateBlueprintLibrary", "GetLocalTopLeft");
    struct
    {
        struct FGeometry Geometry;
        struct FVector2D ReturnValue;
    } Parms{};
    Parms.Geometry = (struct FGeometry)Geometry;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FVector2D USlateBlueprintLibrary::GetLocalSize(const struct FGeometry& Geometry)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("SlateBlueprintLibrary", "GetLocalSize");
    struct
    {
        struct FGeometry Geometry;
        struct FVector2D ReturnValue;
    } Parms{};
    Parms.Geometry = (struct FGeometry)Geometry;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FVector2D USlateBlueprintLibrary::GetAbsoluteSize(const struct FGeometry& Geometry)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("SlateBlueprintLibrary", "GetAbsoluteSize");
    struct
    {
        struct FGeometry Geometry;
        struct FVector2D ReturnValue;
    } Parms{};
    Parms.Geometry = (struct FGeometry)Geometry;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t USlateBlueprintLibrary::EqualEqual_SlateBrush(const struct FSlateBrush& A, const struct FSlateBrush& B)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("SlateBlueprintLibrary", "EqualEqual_SlateBrush");
    struct
    {
        struct FSlateBrush A;
        struct FSlateBrush B;
        uint8_t ReturnValue;
    } Parms{};
    Parms.A = (struct FSlateBrush)A;
    Parms.B = (struct FSlateBrush)B;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void USlateBlueprintLibrary::AbsoluteToViewport(struct UObject* WorldContextObject, struct FVector2D AbsoluteDesktopCoordinate, struct FVector2D& PixelPosition, struct FVector2D& ViewportPosition)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("SlateBlueprintLibrary", "AbsoluteToViewport");
    struct
    {
        struct UObject* WorldContextObject;
        struct FVector2D AbsoluteDesktopCoordinate;
        struct FVector2D PixelPosition;
        struct FVector2D ViewportPosition;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    Parms.AbsoluteDesktopCoordinate = (struct FVector2D)AbsoluteDesktopCoordinate;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    PixelPosition = Parms.PixelPosition;
    ViewportPosition = Parms.ViewportPosition;
}

struct FVector2D USlateBlueprintLibrary::AbsoluteToLocal(const struct FGeometry& Geometry, struct FVector2D AbsoluteCoordinate)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("SlateBlueprintLibrary", "AbsoluteToLocal");
    struct
    {
        struct FGeometry Geometry;
        struct FVector2D AbsoluteCoordinate;
        struct FVector2D ReturnValue;
    } Parms{};
    Parms.Geometry = (struct FGeometry)Geometry;
    Parms.AbsoluteCoordinate = (struct FVector2D)AbsoluteCoordinate;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// ---- UTextBinding::* ----
struct FText UTextBinding::GetTextValue()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("TextBinding", "GetTextValue");
    struct
    {
        struct FText ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UTextBinding::GetStringValue()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("TextBinding", "GetStringValue");
    struct
    {
        struct FString ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// ---- UThrobber::* ----
void UThrobber::SetNumberOfPieces(int32_t InNumberOfPieces)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("Throbber", "SetNumberOfPieces");
    struct
    {
        int32_t InNumberOfPieces;
    } Parms{};
    Parms.InNumberOfPieces = (int32_t)InNumberOfPieces;
    this->ProcessEvent(Func, &Parms);
}

void UThrobber::SetAnimateVertically(uint8_t bInAnimateVertically)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("Throbber", "SetAnimateVertically");
    struct
    {
        uint8_t bInAnimateVertically;
    } Parms{};
    Parms.bInAnimateVertically = (uint8_t)bInAnimateVertically;
    this->ProcessEvent(Func, &Parms);
}

void UThrobber::SetAnimateOpacity(uint8_t bInAnimateOpacity)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("Throbber", "SetAnimateOpacity");
    struct
    {
        uint8_t bInAnimateOpacity;
    } Parms{};
    Parms.bInAnimateOpacity = (uint8_t)bInAnimateOpacity;
    this->ProcessEvent(Func, &Parms);
}

void UThrobber::SetAnimateHorizontally(uint8_t bInAnimateHorizontally)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("Throbber", "SetAnimateHorizontally");
    struct
    {
        uint8_t bInAnimateHorizontally;
    } Parms{};
    Parms.bInAnimateHorizontally = (uint8_t)bInAnimateHorizontally;
    this->ProcessEvent(Func, &Parms);
}

// ---- UUMGSequencePlayer::* ----
void UUMGSequencePlayer::SetUserTag(struct FName InUserTag)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("UMGSequencePlayer", "SetUserTag");
    struct
    {
        struct FName InUserTag;
    } Parms{};
    Parms.InUserTag = (struct FName)InUserTag;
    this->ProcessEvent(Func, &Parms);
}

struct FName UUMGSequencePlayer::GetUserTag()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("UMGSequencePlayer", "GetUserTag");
    struct
    {
        struct FName ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// ---- UUniformGridSlot::* ----
void UUniformGridSlot::SetVerticalAlignment(EVerticalAlignment InVerticalAlignment)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("UniformGridSlot", "SetVerticalAlignment");
    struct
    {
        enum EVerticalAlignment InVerticalAlignment;
    } Parms{};
    Parms.InVerticalAlignment = (enum EVerticalAlignment)InVerticalAlignment;
    this->ProcessEvent(Func, &Parms);
}

void UUniformGridSlot::SetRow(int32_t InRow)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("UniformGridSlot", "SetRow");
    struct
    {
        int32_t InRow;
    } Parms{};
    Parms.InRow = (int32_t)InRow;
    this->ProcessEvent(Func, &Parms);
}

void UUniformGridSlot::SetHorizontalAlignment(EHorizontalAlignment InHorizontalAlignment)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("UniformGridSlot", "SetHorizontalAlignment");
    struct
    {
        enum EHorizontalAlignment InHorizontalAlignment;
    } Parms{};
    Parms.InHorizontalAlignment = (enum EHorizontalAlignment)InHorizontalAlignment;
    this->ProcessEvent(Func, &Parms);
}

void UUniformGridSlot::SetColumn(int32_t InColumn)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("UniformGridSlot", "SetColumn");
    struct
    {
        int32_t InColumn;
    } Parms{};
    Parms.InColumn = (int32_t)InColumn;
    this->ProcessEvent(Func, &Parms);
}

// ---- UVerticalBoxSlot::* ----
void UVerticalBoxSlot::SetVerticalAlignment(EVerticalAlignment InVerticalAlignment)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("VerticalBoxSlot", "SetVerticalAlignment");
    struct
    {
        enum EVerticalAlignment InVerticalAlignment;
    } Parms{};
    Parms.InVerticalAlignment = (enum EVerticalAlignment)InVerticalAlignment;
    this->ProcessEvent(Func, &Parms);
}

void UVerticalBoxSlot::SetSize(struct FSlateChildSize InSize)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("VerticalBoxSlot", "SetSize");
    struct
    {
        struct FSlateChildSize InSize;
    } Parms{};
    Parms.InSize = (struct FSlateChildSize)InSize;
    this->ProcessEvent(Func, &Parms);
}

void UVerticalBoxSlot::SetPadding(struct FMargin InPadding)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("VerticalBoxSlot", "SetPadding");
    struct
    {
        struct FMargin InPadding;
    } Parms{};
    Parms.InPadding = (struct FMargin)InPadding;
    this->ProcessEvent(Func, &Parms);
}

void UVerticalBoxSlot::SetHorizontalAlignment(EHorizontalAlignment InHorizontalAlignment)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("VerticalBoxSlot", "SetHorizontalAlignment");
    struct
    {
        enum EHorizontalAlignment InHorizontalAlignment;
    } Parms{};
    Parms.InHorizontalAlignment = (enum EHorizontalAlignment)InHorizontalAlignment;
    this->ProcessEvent(Func, &Parms);
}

// ---- UViewport::* ----
struct AActor* UViewport::Spawn(struct AActor* ActorClass)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("Viewport", "Spawn");
    struct
    {
        struct AActor* ActorClass;
        struct AActor* ReturnValue;
    } Parms{};
    Parms.ActorClass = (struct AActor*)ActorClass;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UViewport::SetViewRotation(struct FRotator Rotation)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("Viewport", "SetViewRotation");
    struct
    {
        struct FRotator Rotation;
    } Parms{};
    Parms.Rotation = (struct FRotator)Rotation;
    this->ProcessEvent(Func, &Parms);
}

void UViewport::SetViewLocation(struct FVector Location)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("Viewport", "SetViewLocation");
    struct
    {
        struct FVector Location;
    } Parms{};
    Parms.Location = (struct FVector)Location;
    this->ProcessEvent(Func, &Parms);
}

struct FRotator UViewport::GetViewRotation()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("Viewport", "GetViewRotation");
    struct
    {
        struct FRotator ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UWorld* UViewport::GetViewportWorld()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("Viewport", "GetViewportWorld");
    struct
    {
        struct UWorld* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FVector UViewport::GetViewLocation()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("Viewport", "GetViewLocation");
    struct
    {
        struct FVector ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// ---- UVisibilityBinding::* ----
ESlateVisibility UVisibilityBinding::GetValue()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("VisibilityBinding", "GetValue");
    struct
    {
        enum ESlateVisibility ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// ---- UWidgetAnimation::* ----
void UWidgetAnimation::UnbindFromAnimationStarted(struct UUserWidget* Widget, struct FDelegate Delegate)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WidgetAnimation", "UnbindFromAnimationStarted");
    struct
    {
        struct UUserWidget* Widget;
        struct FDelegate Delegate;
    } Parms{};
    Parms.Widget = (struct UUserWidget*)Widget;
    Parms.Delegate = (struct FDelegate)Delegate;
    this->ProcessEvent(Func, &Parms);
}

void UWidgetAnimation::UnbindFromAnimationFinished(struct UUserWidget* Widget, struct FDelegate Delegate)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WidgetAnimation", "UnbindFromAnimationFinished");
    struct
    {
        struct UUserWidget* Widget;
        struct FDelegate Delegate;
    } Parms{};
    Parms.Widget = (struct UUserWidget*)Widget;
    Parms.Delegate = (struct FDelegate)Delegate;
    this->ProcessEvent(Func, &Parms);
}

void UWidgetAnimation::UnbindAllFromAnimationStarted(struct UUserWidget* Widget)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WidgetAnimation", "UnbindAllFromAnimationStarted");
    struct
    {
        struct UUserWidget* Widget;
    } Parms{};
    Parms.Widget = (struct UUserWidget*)Widget;
    this->ProcessEvent(Func, &Parms);
}

void UWidgetAnimation::UnbindAllFromAnimationFinished(struct UUserWidget* Widget)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WidgetAnimation", "UnbindAllFromAnimationFinished");
    struct
    {
        struct UUserWidget* Widget;
    } Parms{};
    Parms.Widget = (struct UUserWidget*)Widget;
    this->ProcessEvent(Func, &Parms);
}

float UWidgetAnimation::GetStartTime()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WidgetAnimation", "GetStartTime");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UWidgetAnimation::GetEndTime()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WidgetAnimation", "GetEndTime");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UWidgetAnimation::BindToAnimationStarted(struct UUserWidget* Widget, struct FDelegate Delegate)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WidgetAnimation", "BindToAnimationStarted");
    struct
    {
        struct UUserWidget* Widget;
        struct FDelegate Delegate;
    } Parms{};
    Parms.Widget = (struct UUserWidget*)Widget;
    Parms.Delegate = (struct FDelegate)Delegate;
    this->ProcessEvent(Func, &Parms);
}

void UWidgetAnimation::BindToAnimationFinished(struct UUserWidget* Widget, struct FDelegate Delegate)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WidgetAnimation", "BindToAnimationFinished");
    struct
    {
        struct UUserWidget* Widget;
        struct FDelegate Delegate;
    } Parms{};
    Parms.Widget = (struct UUserWidget*)Widget;
    Parms.Delegate = (struct FDelegate)Delegate;
    this->ProcessEvent(Func, &Parms);
}

// ---- UWidgetAnimationPlayCallbackProxy::* ----
struct UWidgetAnimationPlayCallbackProxy* UWidgetAnimationPlayCallbackProxy::CreatePlayAnimationTimeRangeProxyObject(struct UUMGSequencePlayer*& Result, struct UUserWidget* Widget, struct UWidgetAnimation* InAnimation, float StartAtTime, float EndAtTime, int32_t NumLoopsToPlay, EUMGSequencePlayMode PlayMode, float PlaybackSpeed)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("WidgetAnimationPlayCallbackProxy", "CreatePlayAnimationTimeRangeProxyObject");
    struct
    {
        struct UUMGSequencePlayer* Result;
        struct UUserWidget* Widget;
        struct UWidgetAnimation* InAnimation;
        float StartAtTime;
        float EndAtTime;
        int32_t NumLoopsToPlay;
        enum EUMGSequencePlayMode PlayMode;
        float PlaybackSpeed;
        struct UWidgetAnimationPlayCallbackProxy* ReturnValue;
    } Parms{};
    Parms.Widget = (struct UUserWidget*)Widget;
    Parms.InAnimation = (struct UWidgetAnimation*)InAnimation;
    Parms.StartAtTime = (float)StartAtTime;
    Parms.EndAtTime = (float)EndAtTime;
    Parms.NumLoopsToPlay = (int32_t)NumLoopsToPlay;
    Parms.PlayMode = (enum EUMGSequencePlayMode)PlayMode;
    Parms.PlaybackSpeed = (float)PlaybackSpeed;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    Result = Parms.Result;
    return Parms.ReturnValue;
}

struct UWidgetAnimationPlayCallbackProxy* UWidgetAnimationPlayCallbackProxy::CreatePlayAnimationProxyObject(struct UUMGSequencePlayer*& Result, struct UUserWidget* Widget, struct UWidgetAnimation* InAnimation, float StartAtTime, int32_t NumLoopsToPlay, EUMGSequencePlayMode PlayMode, float PlaybackSpeed)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("WidgetAnimationPlayCallbackProxy", "CreatePlayAnimationProxyObject");
    struct
    {
        struct UUMGSequencePlayer* Result;
        struct UUserWidget* Widget;
        struct UWidgetAnimation* InAnimation;
        float StartAtTime;
        int32_t NumLoopsToPlay;
        enum EUMGSequencePlayMode PlayMode;
        float PlaybackSpeed;
        struct UWidgetAnimationPlayCallbackProxy* ReturnValue;
    } Parms{};
    Parms.Widget = (struct UUserWidget*)Widget;
    Parms.InAnimation = (struct UWidgetAnimation*)InAnimation;
    Parms.StartAtTime = (float)StartAtTime;
    Parms.NumLoopsToPlay = (int32_t)NumLoopsToPlay;
    Parms.PlayMode = (enum EUMGSequencePlayMode)PlayMode;
    Parms.PlaybackSpeed = (float)PlaybackSpeed;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    Result = Parms.Result;
    return Parms.ReturnValue;
}

// ---- UWidgetBinding::* ----
struct UWidget* UWidgetBinding::GetValue()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WidgetBinding", "GetValue");
    struct
    {
        struct UWidget* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// ---- UWidgetBlueprintLibrary::* ----
struct FEventReply UWidgetBlueprintLibrary::UnlockMouse(struct FEventReply& Reply)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("WidgetBlueprintLibrary", "UnlockMouse");
    struct
    {
        struct FEventReply Reply;
        struct FEventReply ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    Reply = Parms.Reply;
    return Parms.ReturnValue;
}

struct FEventReply UWidgetBlueprintLibrary::Unhandled()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("WidgetBlueprintLibrary", "Unhandled");
    struct
    {
        struct FEventReply ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UWidgetBlueprintLibrary::SetWindowTitleBarState(struct UWidget* TitleBarContent, EWindowTitleBarMode Mode, uint8_t bTitleBarDragEnabled, uint8_t bWindowButtonsVisible, uint8_t bTitleBarVisible)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("WidgetBlueprintLibrary", "SetWindowTitleBarState");
    struct
    {
        struct UWidget* TitleBarContent;
        enum EWindowTitleBarMode Mode;
        uint8_t bTitleBarDragEnabled;
        uint8_t bWindowButtonsVisible;
        uint8_t bTitleBarVisible;
    } Parms{};
    Parms.TitleBarContent = (struct UWidget*)TitleBarContent;
    Parms.Mode = (enum EWindowTitleBarMode)Mode;
    Parms.bTitleBarDragEnabled = (uint8_t)bTitleBarDragEnabled;
    Parms.bWindowButtonsVisible = (uint8_t)bWindowButtonsVisible;
    Parms.bTitleBarVisible = (uint8_t)bTitleBarVisible;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UWidgetBlueprintLibrary::SetWindowTitleBarOnCloseClickedDelegate(struct FDelegate Delegate)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("WidgetBlueprintLibrary", "SetWindowTitleBarOnCloseClickedDelegate");
    struct
    {
        struct FDelegate Delegate;
    } Parms{};
    Parms.Delegate = (struct FDelegate)Delegate;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UWidgetBlueprintLibrary::SetWindowTitleBarCloseButtonActive(uint8_t bActive)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("WidgetBlueprintLibrary", "SetWindowTitleBarCloseButtonActive");
    struct
    {
        uint8_t bActive;
    } Parms{};
    Parms.bActive = (uint8_t)bActive;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

struct FEventReply UWidgetBlueprintLibrary::SetUserFocus(struct FEventReply& Reply, struct UWidget* FocusWidget, uint8_t bInAllUsers)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("WidgetBlueprintLibrary", "SetUserFocus");
    struct
    {
        struct FEventReply Reply;
        struct UWidget* FocusWidget;
        uint8_t bInAllUsers;
        struct FEventReply ReturnValue;
    } Parms{};
    Parms.FocusWidget = (struct UWidget*)FocusWidget;
    Parms.bInAllUsers = (uint8_t)bInAllUsers;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    Reply = Parms.Reply;
    return Parms.ReturnValue;
}

struct FEventReply UWidgetBlueprintLibrary::SetMousePosition(struct FEventReply& Reply, struct FVector2D NewMousePosition)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("WidgetBlueprintLibrary", "SetMousePosition");
    struct
    {
        struct FEventReply Reply;
        struct FVector2D NewMousePosition;
        struct FEventReply ReturnValue;
    } Parms{};
    Parms.NewMousePosition = (struct FVector2D)NewMousePosition;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    Reply = Parms.Reply;
    return Parms.ReturnValue;
}

void UWidgetBlueprintLibrary::SetInputMode_UIOnlyEx(struct APlayerController* PlayerController, struct UWidget* InWidgetToFocus, EMouseLockMode InMouseLockMode)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("WidgetBlueprintLibrary", "SetInputMode_UIOnlyEx");
    struct
    {
        struct APlayerController* PlayerController;
        struct UWidget* InWidgetToFocus;
        enum EMouseLockMode InMouseLockMode;
    } Parms{};
    Parms.PlayerController = (struct APlayerController*)PlayerController;
    Parms.InWidgetToFocus = (struct UWidget*)InWidgetToFocus;
    Parms.InMouseLockMode = (enum EMouseLockMode)InMouseLockMode;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UWidgetBlueprintLibrary::SetInputMode_UIOnly(struct APlayerController* Target, struct UWidget* InWidgetToFocus, uint8_t bLockMouseToViewport)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("WidgetBlueprintLibrary", "SetInputMode_UIOnly");
    struct
    {
        struct APlayerController* Target;
        struct UWidget* InWidgetToFocus;
        uint8_t bLockMouseToViewport;
    } Parms{};
    Parms.Target = (struct APlayerController*)Target;
    Parms.InWidgetToFocus = (struct UWidget*)InWidgetToFocus;
    Parms.bLockMouseToViewport = (uint8_t)bLockMouseToViewport;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UWidgetBlueprintLibrary::SetInputMode_GameOnly(struct APlayerController* PlayerController)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("WidgetBlueprintLibrary", "SetInputMode_GameOnly");
    struct
    {
        struct APlayerController* PlayerController;
    } Parms{};
    Parms.PlayerController = (struct APlayerController*)PlayerController;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UWidgetBlueprintLibrary::SetInputMode_GameAndUIEx(struct APlayerController* PlayerController, struct UWidget* InWidgetToFocus, EMouseLockMode InMouseLockMode, uint8_t bHideCursorDuringCapture)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("WidgetBlueprintLibrary", "SetInputMode_GameAndUIEx");
    struct
    {
        struct APlayerController* PlayerController;
        struct UWidget* InWidgetToFocus;
        enum EMouseLockMode InMouseLockMode;
        uint8_t bHideCursorDuringCapture;
    } Parms{};
    Parms.PlayerController = (struct APlayerController*)PlayerController;
    Parms.InWidgetToFocus = (struct UWidget*)InWidgetToFocus;
    Parms.InMouseLockMode = (enum EMouseLockMode)InMouseLockMode;
    Parms.bHideCursorDuringCapture = (uint8_t)bHideCursorDuringCapture;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UWidgetBlueprintLibrary::SetInputMode_GameAndUI(struct APlayerController* Target, struct UWidget* InWidgetToFocus, uint8_t bLockMouseToViewport, uint8_t bHideCursorDuringCapture)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("WidgetBlueprintLibrary", "SetInputMode_GameAndUI");
    struct
    {
        struct APlayerController* Target;
        struct UWidget* InWidgetToFocus;
        uint8_t bLockMouseToViewport;
        uint8_t bHideCursorDuringCapture;
    } Parms{};
    Parms.Target = (struct APlayerController*)Target;
    Parms.InWidgetToFocus = (struct UWidget*)InWidgetToFocus;
    Parms.bLockMouseToViewport = (uint8_t)bLockMouseToViewport;
    Parms.bHideCursorDuringCapture = (uint8_t)bHideCursorDuringCapture;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

uint8_t UWidgetBlueprintLibrary::SetHardwareCursor(struct UObject* WorldContextObject, EMouseCursor CursorShape, struct FName CursorName, struct FVector2D HotSpot)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("WidgetBlueprintLibrary", "SetHardwareCursor");
    struct
    {
        struct UObject* WorldContextObject;
        enum EMouseCursor CursorShape;
        struct FName CursorName;
        struct FVector2D HotSpot;
        uint8_t ReturnValue;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    Parms.CursorShape = (enum EMouseCursor)CursorShape;
    Parms.CursorName = (struct FName)CursorName;
    Parms.HotSpot = (struct FVector2D)HotSpot;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UWidgetBlueprintLibrary::SetFocusToGameViewport()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("WidgetBlueprintLibrary", "SetFocusToGameViewport");
    struct
    {
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UWidgetBlueprintLibrary::SetColorVisionDeficiencyType(EColorVisionDeficiency Type, float Severity, uint8_t CorrectDeficiency, uint8_t ShowCorrectionWithDeficiency)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("WidgetBlueprintLibrary", "SetColorVisionDeficiencyType");
    struct
    {
        enum EColorVisionDeficiency Type;
        float Severity;
        uint8_t CorrectDeficiency;
        uint8_t ShowCorrectionWithDeficiency;
    } Parms{};
    Parms.Type = (enum EColorVisionDeficiency)Type;
    Parms.Severity = (float)Severity;
    Parms.CorrectDeficiency = (uint8_t)CorrectDeficiency;
    Parms.ShowCorrectionWithDeficiency = (uint8_t)ShowCorrectionWithDeficiency;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UWidgetBlueprintLibrary::SetBrushResourceToTexture(struct FSlateBrush& Brush, struct UTexture2D* Texture)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("WidgetBlueprintLibrary", "SetBrushResourceToTexture");
    struct
    {
        struct FSlateBrush Brush;
        struct UTexture2D* Texture;
    } Parms{};
    Parms.Texture = (struct UTexture2D*)Texture;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    Brush = Parms.Brush;
}

void UWidgetBlueprintLibrary::SetBrushResourceToMaterial(struct FSlateBrush& Brush, struct UMaterialInterface* Material)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("WidgetBlueprintLibrary", "SetBrushResourceToMaterial");
    struct
    {
        struct FSlateBrush Brush;
        struct UMaterialInterface* Material;
    } Parms{};
    Parms.Material = (struct UMaterialInterface*)Material;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    Brush = Parms.Brush;
}

void UWidgetBlueprintLibrary::RestorePreviousWindowTitleBarState()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("WidgetBlueprintLibrary", "RestorePreviousWindowTitleBarState");
    struct
    {
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

struct FEventReply UWidgetBlueprintLibrary::ReleaseMouseCapture(struct FEventReply& Reply)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("WidgetBlueprintLibrary", "ReleaseMouseCapture");
    struct
    {
        struct FEventReply Reply;
        struct FEventReply ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    Reply = Parms.Reply;
    return Parms.ReturnValue;
}

struct FEventReply UWidgetBlueprintLibrary::ReleaseJoystickCapture(struct FEventReply& Reply, uint8_t bInAllJoysticks)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("WidgetBlueprintLibrary", "ReleaseJoystickCapture");
    struct
    {
        struct FEventReply Reply;
        uint8_t bInAllJoysticks;
        struct FEventReply ReturnValue;
    } Parms{};
    Parms.bInAllJoysticks = (uint8_t)bInAllJoysticks;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    Reply = Parms.Reply;
    return Parms.ReturnValue;
}

void UWidgetBlueprintLibrary::OnGameWindowCloseButtonClickedDelegate__DelegateSignature()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WidgetBlueprintLibrary", "OnGameWindowCloseButtonClickedDelegate__DelegateSignature");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

struct FSlateBrush UWidgetBlueprintLibrary::NoResourceBrush()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("WidgetBlueprintLibrary", "NoResourceBrush");
    struct
    {
        struct FSlateBrush ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FSlateBrush UWidgetBlueprintLibrary::MakeBrushFromTexture(struct UTexture2D* Texture, int32_t Width, int32_t Height)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("WidgetBlueprintLibrary", "MakeBrushFromTexture");
    struct
    {
        struct UTexture2D* Texture;
        int32_t Width;
        int32_t Height;
        struct FSlateBrush ReturnValue;
    } Parms{};
    Parms.Texture = (struct UTexture2D*)Texture;
    Parms.Width = (int32_t)Width;
    Parms.Height = (int32_t)Height;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FSlateBrush UWidgetBlueprintLibrary::MakeBrushFromMaterial(struct UMaterialInterface* Material, int32_t Width, int32_t Height)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("WidgetBlueprintLibrary", "MakeBrushFromMaterial");
    struct
    {
        struct UMaterialInterface* Material;
        int32_t Width;
        int32_t Height;
        struct FSlateBrush ReturnValue;
    } Parms{};
    Parms.Material = (struct UMaterialInterface*)Material;
    Parms.Width = (int32_t)Width;
    Parms.Height = (int32_t)Height;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FSlateBrush UWidgetBlueprintLibrary::MakeBrushFromAsset(struct USlateBrushAsset* BrushAsset)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("WidgetBlueprintLibrary", "MakeBrushFromAsset");
    struct
    {
        struct USlateBrushAsset* BrushAsset;
        struct FSlateBrush ReturnValue;
    } Parms{};
    Parms.BrushAsset = (struct USlateBrushAsset*)BrushAsset;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FEventReply UWidgetBlueprintLibrary::LockMouse(struct FEventReply& Reply, struct UWidget* CapturingWidget)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("WidgetBlueprintLibrary", "LockMouse");
    struct
    {
        struct FEventReply Reply;
        struct UWidget* CapturingWidget;
        struct FEventReply ReturnValue;
    } Parms{};
    Parms.CapturingWidget = (struct UWidget*)CapturingWidget;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    Reply = Parms.Reply;
    return Parms.ReturnValue;
}

uint8_t UWidgetBlueprintLibrary::IsDragDropping()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("WidgetBlueprintLibrary", "IsDragDropping");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FEventReply UWidgetBlueprintLibrary::Handled()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("WidgetBlueprintLibrary", "Handled");
    struct
    {
        struct FEventReply ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UWidgetBlueprintLibrary::GetSafeZonePadding(struct UObject* WorldContextObject, struct FVector4& SafePadding, struct FVector2D& SafePaddingScale, struct FVector4& SpillOverPadding)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("WidgetBlueprintLibrary", "GetSafeZonePadding");
    struct
    {
        struct UObject* WorldContextObject;
        struct FVector4 SafePadding;
        struct FVector2D SafePaddingScale;
        struct FVector4 SpillOverPadding;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    SafePadding = Parms.SafePadding;
    SafePaddingScale = Parms.SafePaddingScale;
    SpillOverPadding = Parms.SpillOverPadding;
}

struct FKeyEvent UWidgetBlueprintLibrary::GetKeyEventFromAnalogInputEvent(const struct FAnalogInputEvent& Event)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("WidgetBlueprintLibrary", "GetKeyEventFromAnalogInputEvent");
    struct
    {
        struct FAnalogInputEvent Event;
        struct FKeyEvent ReturnValue;
    } Parms{};
    Parms.Event = (struct FAnalogInputEvent)Event;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FInputEvent UWidgetBlueprintLibrary::GetInputEventFromPointerEvent(const struct FPointerEvent& Event)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("WidgetBlueprintLibrary", "GetInputEventFromPointerEvent");
    struct
    {
        struct FPointerEvent Event;
        struct FInputEvent ReturnValue;
    } Parms{};
    Parms.Event = (struct FPointerEvent)Event;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FInputEvent UWidgetBlueprintLibrary::GetInputEventFromNavigationEvent(const struct FNavigationEvent& Event)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("WidgetBlueprintLibrary", "GetInputEventFromNavigationEvent");
    struct
    {
        struct FNavigationEvent Event;
        struct FInputEvent ReturnValue;
    } Parms{};
    Parms.Event = (struct FNavigationEvent)Event;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FInputEvent UWidgetBlueprintLibrary::GetInputEventFromKeyEvent(const struct FKeyEvent& Event)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("WidgetBlueprintLibrary", "GetInputEventFromKeyEvent");
    struct
    {
        struct FKeyEvent Event;
        struct FInputEvent ReturnValue;
    } Parms{};
    Parms.Event = (struct FKeyEvent)Event;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FInputEvent UWidgetBlueprintLibrary::GetInputEventFromCharacterEvent(const struct FCharacterEvent& Event)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("WidgetBlueprintLibrary", "GetInputEventFromCharacterEvent");
    struct
    {
        struct FCharacterEvent Event;
        struct FInputEvent ReturnValue;
    } Parms{};
    Parms.Event = (struct FCharacterEvent)Event;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UMaterialInstanceDynamic* UWidgetBlueprintLibrary::GetDynamicMaterial(struct FSlateBrush& Brush)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("WidgetBlueprintLibrary", "GetDynamicMaterial");
    struct
    {
        struct FSlateBrush Brush;
        struct UMaterialInstanceDynamic* ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    Brush = Parms.Brush;
    return Parms.ReturnValue;
}

struct UDragDropOperation* UWidgetBlueprintLibrary::GetDragDroppingContent()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("WidgetBlueprintLibrary", "GetDragDroppingContent");
    struct
    {
        struct UDragDropOperation* ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UTexture2D* UWidgetBlueprintLibrary::GetBrushResourceAsTexture2D(const struct FSlateBrush& Brush)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("WidgetBlueprintLibrary", "GetBrushResourceAsTexture2D");
    struct
    {
        struct FSlateBrush Brush;
        struct UTexture2D* ReturnValue;
    } Parms{};
    Parms.Brush = (struct FSlateBrush)Brush;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UMaterialInterface* UWidgetBlueprintLibrary::GetBrushResourceAsMaterial(const struct FSlateBrush& Brush)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("WidgetBlueprintLibrary", "GetBrushResourceAsMaterial");
    struct
    {
        struct FSlateBrush Brush;
        struct UMaterialInterface* ReturnValue;
    } Parms{};
    Parms.Brush = (struct FSlateBrush)Brush;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UObject* UWidgetBlueprintLibrary::GetBrushResource(const struct FSlateBrush& Brush)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("WidgetBlueprintLibrary", "GetBrushResource");
    struct
    {
        struct FSlateBrush Brush;
        struct UObject* ReturnValue;
    } Parms{};
    Parms.Brush = (struct FSlateBrush)Brush;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UWidgetBlueprintLibrary::GetAllWidgetsWithInterface(struct UObject* WorldContextObject, struct TArray<struct UUserWidget*>& FoundWidgets, struct IInterface* Interface, uint8_t TopLevelOnly)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("WidgetBlueprintLibrary", "GetAllWidgetsWithInterface");
    struct
    {
        struct UObject* WorldContextObject;
        struct TArray<struct UUserWidget*> FoundWidgets;
        struct IInterface* Interface;
        uint8_t TopLevelOnly;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    Parms.Interface = (struct IInterface*)Interface;
    Parms.TopLevelOnly = (uint8_t)TopLevelOnly;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    FoundWidgets = Parms.FoundWidgets;
}

void UWidgetBlueprintLibrary::GetAllWidgetsOfClass(struct UObject* WorldContextObject, struct TArray<struct UUserWidget*>& FoundWidgets, struct UUserWidget* WidgetClass, uint8_t TopLevelOnly)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("WidgetBlueprintLibrary", "GetAllWidgetsOfClass");
    struct
    {
        struct UObject* WorldContextObject;
        struct TArray<struct UUserWidget*> FoundWidgets;
        struct UUserWidget* WidgetClass;
        uint8_t TopLevelOnly;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    Parms.WidgetClass = (struct UUserWidget*)WidgetClass;
    Parms.TopLevelOnly = (uint8_t)TopLevelOnly;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    FoundWidgets = Parms.FoundWidgets;
}

struct FEventReply UWidgetBlueprintLibrary::EndDragDrop(struct FEventReply& Reply)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("WidgetBlueprintLibrary", "EndDragDrop");
    struct
    {
        struct FEventReply Reply;
        struct FEventReply ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    Reply = Parms.Reply;
    return Parms.ReturnValue;
}

void UWidgetBlueprintLibrary::DrawTextFormatted(struct FPaintContext& Context, const struct FText& Text, struct FVector2D Position, struct UFont* Font, int32_t FontSize, struct FName FontTypeFace, struct FLinearColor Tint)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("WidgetBlueprintLibrary", "DrawTextFormatted");
    struct
    {
        struct FPaintContext Context;
        struct FText Text;
        struct FVector2D Position;
        struct UFont* Font;
        int32_t FontSize;
        struct FName FontTypeFace;
        struct FLinearColor Tint;
    } Parms{};
    Parms.Text = (struct FText)Text;
    Parms.Position = (struct FVector2D)Position;
    Parms.Font = (struct UFont*)Font;
    Parms.FontSize = (int32_t)FontSize;
    Parms.FontTypeFace = (struct FName)FontTypeFace;
    Parms.Tint = (struct FLinearColor)Tint;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    Context = Parms.Context;
}

void UWidgetBlueprintLibrary::DrawText(struct FPaintContext& Context, struct FString inString, struct FVector2D Position, struct FLinearColor Tint)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("WidgetBlueprintLibrary", "DrawText");
    struct
    {
        struct FPaintContext Context;
        struct FString inString;
        struct FVector2D Position;
        struct FLinearColor Tint;
    } Parms{};
    Parms.inString = (struct FString)inString;
    Parms.Position = (struct FVector2D)Position;
    Parms.Tint = (struct FLinearColor)Tint;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    Context = Parms.Context;
}

void UWidgetBlueprintLibrary::DrawLines(struct FPaintContext& Context, const struct TArray<struct FVector2D>& Points, struct FLinearColor Tint, uint8_t bAntiAlias, float Thickness)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("WidgetBlueprintLibrary", "DrawLines");
    struct
    {
        struct FPaintContext Context;
        struct TArray<struct FVector2D> Points;
        struct FLinearColor Tint;
        uint8_t bAntiAlias;
        float Thickness;
    } Parms{};
    Parms.Points = (struct TArray<struct FVector2D>)Points;
    Parms.Tint = (struct FLinearColor)Tint;
    Parms.bAntiAlias = (uint8_t)bAntiAlias;
    Parms.Thickness = (float)Thickness;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    Context = Parms.Context;
}

void UWidgetBlueprintLibrary::DrawLine(struct FPaintContext& Context, struct FVector2D PositionA, struct FVector2D PositionB, struct FLinearColor Tint, uint8_t bAntiAlias, float Thickness)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("WidgetBlueprintLibrary", "DrawLine");
    struct
    {
        struct FPaintContext Context;
        struct FVector2D PositionA;
        struct FVector2D PositionB;
        struct FLinearColor Tint;
        uint8_t bAntiAlias;
        float Thickness;
    } Parms{};
    Parms.PositionA = (struct FVector2D)PositionA;
    Parms.PositionB = (struct FVector2D)PositionB;
    Parms.Tint = (struct FLinearColor)Tint;
    Parms.bAntiAlias = (uint8_t)bAntiAlias;
    Parms.Thickness = (float)Thickness;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    Context = Parms.Context;
}

void UWidgetBlueprintLibrary::DrawBox(struct FPaintContext& Context, struct FVector2D Position, struct FVector2D size, struct USlateBrushAsset* Brush, struct FLinearColor Tint)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("WidgetBlueprintLibrary", "DrawBox");
    struct
    {
        struct FPaintContext Context;
        struct FVector2D Position;
        struct FVector2D size;
        struct USlateBrushAsset* Brush;
        struct FLinearColor Tint;
    } Parms{};
    Parms.Position = (struct FVector2D)Position;
    Parms.size = (struct FVector2D)size;
    Parms.Brush = (struct USlateBrushAsset*)Brush;
    Parms.Tint = (struct FLinearColor)Tint;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    Context = Parms.Context;
}

void UWidgetBlueprintLibrary::DismissAllMenus()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("WidgetBlueprintLibrary", "DismissAllMenus");
    struct
    {
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

struct FEventReply UWidgetBlueprintLibrary::DetectDragIfPressed(const struct FPointerEvent& PointerEvent, struct UWidget* WidgetDetectingDrag, struct FKey DragKey)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("WidgetBlueprintLibrary", "DetectDragIfPressed");
    struct
    {
        struct FPointerEvent PointerEvent;
        struct UWidget* WidgetDetectingDrag;
        struct FKey DragKey;
        struct FEventReply ReturnValue;
    } Parms{};
    Parms.PointerEvent = (struct FPointerEvent)PointerEvent;
    Parms.WidgetDetectingDrag = (struct UWidget*)WidgetDetectingDrag;
    Parms.DragKey = (struct FKey)DragKey;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FEventReply UWidgetBlueprintLibrary::DetectDrag(struct FEventReply& Reply, struct UWidget* WidgetDetectingDrag, struct FKey DragKey)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("WidgetBlueprintLibrary", "DetectDrag");
    struct
    {
        struct FEventReply Reply;
        struct UWidget* WidgetDetectingDrag;
        struct FKey DragKey;
        struct FEventReply ReturnValue;
    } Parms{};
    Parms.WidgetDetectingDrag = (struct UWidget*)WidgetDetectingDrag;
    Parms.DragKey = (struct FKey)DragKey;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    Reply = Parms.Reply;
    return Parms.ReturnValue;
}

struct UDragDropOperation* UWidgetBlueprintLibrary::CreateDragDropOperation(struct UDragDropOperation* OperationClass)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("WidgetBlueprintLibrary", "CreateDragDropOperation");
    struct
    {
        struct UDragDropOperation* OperationClass;
        struct UDragDropOperation* ReturnValue;
    } Parms{};
    Parms.OperationClass = (struct UDragDropOperation*)OperationClass;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UUserWidget* UWidgetBlueprintLibrary::Create(struct UObject* WorldContextObject, struct UUserWidget* WidgetType, struct APlayerController* OwningPlayer)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("WidgetBlueprintLibrary", "Create");
    struct
    {
        struct UObject* WorldContextObject;
        struct UUserWidget* WidgetType;
        struct APlayerController* OwningPlayer;
        struct UUserWidget* ReturnValue;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    Parms.WidgetType = (struct UUserWidget*)WidgetType;
    Parms.OwningPlayer = (struct APlayerController*)OwningPlayer;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FEventReply UWidgetBlueprintLibrary::ClearUserFocus(struct FEventReply& Reply, uint8_t bInAllUsers)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("WidgetBlueprintLibrary", "ClearUserFocus");
    struct
    {
        struct FEventReply Reply;
        uint8_t bInAllUsers;
        struct FEventReply ReturnValue;
    } Parms{};
    Parms.bInAllUsers = (uint8_t)bInAllUsers;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    Reply = Parms.Reply;
    return Parms.ReturnValue;
}

struct FEventReply UWidgetBlueprintLibrary::CaptureMouse(struct FEventReply& Reply, struct UWidget* CapturingWidget)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("WidgetBlueprintLibrary", "CaptureMouse");
    struct
    {
        struct FEventReply Reply;
        struct UWidget* CapturingWidget;
        struct FEventReply ReturnValue;
    } Parms{};
    Parms.CapturingWidget = (struct UWidget*)CapturingWidget;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    Reply = Parms.Reply;
    return Parms.ReturnValue;
}

struct FEventReply UWidgetBlueprintLibrary::CaptureJoystick(struct FEventReply& Reply, struct UWidget* CapturingWidget, uint8_t bInAllJoysticks)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("WidgetBlueprintLibrary", "CaptureJoystick");
    struct
    {
        struct FEventReply Reply;
        struct UWidget* CapturingWidget;
        uint8_t bInAllJoysticks;
        struct FEventReply ReturnValue;
    } Parms{};
    Parms.CapturingWidget = (struct UWidget*)CapturingWidget;
    Parms.bInAllJoysticks = (uint8_t)bInAllJoysticks;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    Reply = Parms.Reply;
    return Parms.ReturnValue;
}

void UWidgetBlueprintLibrary::CancelDragDrop()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("WidgetBlueprintLibrary", "CancelDragDrop");
    struct
    {
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

// ---- UWidgetComponent3DUI::* ----
void UWidgetComponent3DUI::Show()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WidgetComponent3DUI", "Show");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UWidgetComponent3DUI::SetWidget(struct UUserWidget* Widget)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WidgetComponent3DUI", "SetWidget");
    struct
    {
        struct UUserWidget* Widget;
    } Parms{};
    Parms.Widget = (struct UUserWidget*)Widget;
    this->ProcessEvent(Func, &Parms);
}

void UWidgetComponent3DUI::SetOwnerPlayer(struct ULocalPlayer* LocalPlayer)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WidgetComponent3DUI", "SetOwnerPlayer");
    struct
    {
        struct ULocalPlayer* LocalPlayer;
    } Parms{};
    Parms.LocalPlayer = (struct ULocalPlayer*)LocalPlayer;
    this->ProcessEvent(Func, &Parms);
}

void UWidgetComponent3DUI::SetIsDraw(uint8_t InIsDraw)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WidgetComponent3DUI", "SetIsDraw");
    struct
    {
        uint8_t InIsDraw;
    } Parms{};
    Parms.InIsDraw = (uint8_t)InIsDraw;
    this->ProcessEvent(Func, &Parms);
}

void UWidgetComponent3DUI::RemoveFromParent()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WidgetComponent3DUI", "RemoveFromParent");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UWidgetComponent3DUI::Hide()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WidgetComponent3DUI", "Hide");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

struct UUserWidget* UWidgetComponent3DUI::GetUserWidgetObject()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WidgetComponent3DUI", "GetUserWidgetObject");
    struct
    {
        struct UUserWidget* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct ULocalPlayer* UWidgetComponent3DUI::GetOwnerPlayer()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WidgetComponent3DUI", "GetOwnerPlayer");
    struct
    {
        struct ULocalPlayer* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FVector2D UWidgetComponent3DUI::GetDrawSize()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WidgetComponent3DUI", "GetDrawSize");
    struct
    {
        struct FVector2D ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UWidgetComponent3DUI::AddToViewport()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WidgetComponent3DUI", "AddToViewport");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// ---- UWidgetInteractionComponent::* ----
void UWidgetInteractionComponent::SetFocus(struct UWidget* FocusWidget)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WidgetInteractionComponent", "SetFocus");
    struct
    {
        struct UWidget* FocusWidget;
    } Parms{};
    Parms.FocusWidget = (struct UWidget*)FocusWidget;
    this->ProcessEvent(Func, &Parms);
}

void UWidgetInteractionComponent::SetCustomHitResult(const struct FHitResult& HitResult)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WidgetInteractionComponent", "SetCustomHitResult");
    struct
    {
        struct FHitResult HitResult;
    } Parms{};
    Parms.HitResult = (struct FHitResult)HitResult;
    this->ProcessEvent(Func, &Parms);
}

uint8_t UWidgetInteractionComponent::SendKeyChar(struct FString Characters, uint8_t bRepeat)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WidgetInteractionComponent", "SendKeyChar");
    struct
    {
        struct FString Characters;
        uint8_t bRepeat;
        uint8_t ReturnValue;
    } Parms{};
    Parms.Characters = (struct FString)Characters;
    Parms.bRepeat = (uint8_t)bRepeat;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UWidgetInteractionComponent::ScrollWheel(float ScrollDelta)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WidgetInteractionComponent", "ScrollWheel");
    struct
    {
        float ScrollDelta;
    } Parms{};
    Parms.ScrollDelta = (float)ScrollDelta;
    this->ProcessEvent(Func, &Parms);
}

void UWidgetInteractionComponent::ReleasePointerKey(struct FKey Key)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WidgetInteractionComponent", "ReleasePointerKey");
    struct
    {
        struct FKey Key;
    } Parms{};
    Parms.Key = (struct FKey)Key;
    this->ProcessEvent(Func, &Parms);
}

uint8_t UWidgetInteractionComponent::ReleaseKey(struct FKey Key)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WidgetInteractionComponent", "ReleaseKey");
    struct
    {
        struct FKey Key;
        uint8_t ReturnValue;
    } Parms{};
    Parms.Key = (struct FKey)Key;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UWidgetInteractionComponent::PressPointerKey(struct FKey Key)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WidgetInteractionComponent", "PressPointerKey");
    struct
    {
        struct FKey Key;
    } Parms{};
    Parms.Key = (struct FKey)Key;
    this->ProcessEvent(Func, &Parms);
}

uint8_t UWidgetInteractionComponent::PressKey(struct FKey Key, uint8_t bRepeat)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WidgetInteractionComponent", "PressKey");
    struct
    {
        struct FKey Key;
        uint8_t bRepeat;
        uint8_t ReturnValue;
    } Parms{};
    Parms.Key = (struct FKey)Key;
    Parms.bRepeat = (uint8_t)bRepeat;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UWidgetInteractionComponent::PressAndReleaseKey(struct FKey Key)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WidgetInteractionComponent", "PressAndReleaseKey");
    struct
    {
        struct FKey Key;
        uint8_t ReturnValue;
    } Parms{};
    Parms.Key = (struct FKey)Key;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UWidgetInteractionComponent::IsOverInteractableWidget()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WidgetInteractionComponent", "IsOverInteractableWidget");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UWidgetInteractionComponent::IsOverHitTestVisibleWidget()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WidgetInteractionComponent", "IsOverHitTestVisibleWidget");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UWidgetInteractionComponent::IsOverFocusableWidget()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WidgetInteractionComponent", "IsOverFocusableWidget");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FHitResult UWidgetInteractionComponent::GetLastHitResult()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WidgetInteractionComponent", "GetLastHitResult");
    struct
    {
        struct FHitResult ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UWidgetComponent* UWidgetInteractionComponent::GetHoveredWidgetComponent()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WidgetInteractionComponent", "GetHoveredWidgetComponent");
    struct
    {
        struct UWidgetComponent* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FVector2D UWidgetInteractionComponent::Get2DHitLocation()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WidgetInteractionComponent", "Get2DHitLocation");
    struct
    {
        struct FVector2D ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// ---- UWidgetLayoutLibrary::* ----
struct UWrapBoxSlot* UWidgetLayoutLibrary::SlotAsWrapBoxSlot(struct UWidget* Widget)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("WidgetLayoutLibrary", "SlotAsWrapBoxSlot");
    struct
    {
        struct UWidget* Widget;
        struct UWrapBoxSlot* ReturnValue;
    } Parms{};
    Parms.Widget = (struct UWidget*)Widget;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UWidgetSwitcherSlot* UWidgetLayoutLibrary::SlotAsWidgetSwitcherSlot(struct UWidget* Widget)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("WidgetLayoutLibrary", "SlotAsWidgetSwitcherSlot");
    struct
    {
        struct UWidget* Widget;
        struct UWidgetSwitcherSlot* ReturnValue;
    } Parms{};
    Parms.Widget = (struct UWidget*)Widget;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UVerticalBoxSlot* UWidgetLayoutLibrary::SlotAsVerticalBoxSlot(struct UWidget* Widget)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("WidgetLayoutLibrary", "SlotAsVerticalBoxSlot");
    struct
    {
        struct UWidget* Widget;
        struct UVerticalBoxSlot* ReturnValue;
    } Parms{};
    Parms.Widget = (struct UWidget*)Widget;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UUniformGridSlot* UWidgetLayoutLibrary::SlotAsUniformGridSlot(struct UWidget* Widget)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("WidgetLayoutLibrary", "SlotAsUniformGridSlot");
    struct
    {
        struct UWidget* Widget;
        struct UUniformGridSlot* ReturnValue;
    } Parms{};
    Parms.Widget = (struct UWidget*)Widget;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct USizeBoxSlot* UWidgetLayoutLibrary::SlotAsSizeBoxSlot(struct UWidget* Widget)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("WidgetLayoutLibrary", "SlotAsSizeBoxSlot");
    struct
    {
        struct UWidget* Widget;
        struct USizeBoxSlot* ReturnValue;
    } Parms{};
    Parms.Widget = (struct UWidget*)Widget;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UScrollBoxSlot* UWidgetLayoutLibrary::SlotAsScrollBoxSlot(struct UWidget* Widget)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("WidgetLayoutLibrary", "SlotAsScrollBoxSlot");
    struct
    {
        struct UWidget* Widget;
        struct UScrollBoxSlot* ReturnValue;
    } Parms{};
    Parms.Widget = (struct UWidget*)Widget;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UScaleBoxSlot* UWidgetLayoutLibrary::SlotAsScaleBoxSlot(struct UWidget* Widget)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("WidgetLayoutLibrary", "SlotAsScaleBoxSlot");
    struct
    {
        struct UWidget* Widget;
        struct UScaleBoxSlot* ReturnValue;
    } Parms{};
    Parms.Widget = (struct UWidget*)Widget;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct USafeZoneSlot* UWidgetLayoutLibrary::SlotAsSafeBoxSlot(struct UWidget* Widget)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("WidgetLayoutLibrary", "SlotAsSafeBoxSlot");
    struct
    {
        struct UWidget* Widget;
        struct USafeZoneSlot* ReturnValue;
    } Parms{};
    Parms.Widget = (struct UWidget*)Widget;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UOverlaySlot* UWidgetLayoutLibrary::SlotAsOverlaySlot(struct UWidget* Widget)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("WidgetLayoutLibrary", "SlotAsOverlaySlot");
    struct
    {
        struct UWidget* Widget;
        struct UOverlaySlot* ReturnValue;
    } Parms{};
    Parms.Widget = (struct UWidget*)Widget;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UHorizontalBoxSlot* UWidgetLayoutLibrary::SlotAsHorizontalBoxSlot(struct UWidget* Widget)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("WidgetLayoutLibrary", "SlotAsHorizontalBoxSlot");
    struct
    {
        struct UWidget* Widget;
        struct UHorizontalBoxSlot* ReturnValue;
    } Parms{};
    Parms.Widget = (struct UWidget*)Widget;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UGridSlot* UWidgetLayoutLibrary::SlotAsGridSlot(struct UWidget* Widget)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("WidgetLayoutLibrary", "SlotAsGridSlot");
    struct
    {
        struct UWidget* Widget;
        struct UGridSlot* ReturnValue;
    } Parms{};
    Parms.Widget = (struct UWidget*)Widget;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UCanvasPanelSlot* UWidgetLayoutLibrary::SlotAsCanvasSlot(struct UWidget* Widget)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("WidgetLayoutLibrary", "SlotAsCanvasSlot");
    struct
    {
        struct UWidget* Widget;
        struct UCanvasPanelSlot* ReturnValue;
    } Parms{};
    Parms.Widget = (struct UWidget*)Widget;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UBorderSlot* UWidgetLayoutLibrary::SlotAsBorderSlot(struct UWidget* Widget)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("WidgetLayoutLibrary", "SlotAsBorderSlot");
    struct
    {
        struct UWidget* Widget;
        struct UBorderSlot* ReturnValue;
    } Parms{};
    Parms.Widget = (struct UWidget*)Widget;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UWidgetLayoutLibrary::RemoveAllWidgets(struct UObject* WorldContextObject)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("WidgetLayoutLibrary", "RemoveAllWidgets");
    struct
    {
        struct UObject* WorldContextObject;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

uint8_t UWidgetLayoutLibrary::ProjectWorldLocationToWidgetPosition(struct APlayerController* PlayerController, struct FVector WorldLocation, struct FVector2D& ScreenPosition)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("WidgetLayoutLibrary", "ProjectWorldLocationToWidgetPosition");
    struct
    {
        struct APlayerController* PlayerController;
        struct FVector WorldLocation;
        struct FVector2D ScreenPosition;
        uint8_t ReturnValue;
    } Parms{};
    Parms.PlayerController = (struct APlayerController*)PlayerController;
    Parms.WorldLocation = (struct FVector)WorldLocation;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    ScreenPosition = Parms.ScreenPosition;
    return Parms.ReturnValue;
}

struct FGeometry UWidgetLayoutLibrary::GetViewportWidgetGeometry(struct UObject* WorldContextObject)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("WidgetLayoutLibrary", "GetViewportWidgetGeometry");
    struct
    {
        struct UObject* WorldContextObject;
        struct FGeometry ReturnValue;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FVector2D UWidgetLayoutLibrary::GetViewportSize(struct UObject* WorldContextObject)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("WidgetLayoutLibrary", "GetViewportSize");
    struct
    {
        struct UObject* WorldContextObject;
        struct FVector2D ReturnValue;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UWidgetLayoutLibrary::GetViewportScale(struct UObject* WorldContextObject)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("WidgetLayoutLibrary", "GetViewportScale");
    struct
    {
        struct UObject* WorldContextObject;
        float ReturnValue;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FGeometry UWidgetLayoutLibrary::GetPlayerScreenWidgetGeometry(struct APlayerController* PlayerController)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("WidgetLayoutLibrary", "GetPlayerScreenWidgetGeometry");
    struct
    {
        struct APlayerController* PlayerController;
        struct FGeometry ReturnValue;
    } Parms{};
    Parms.PlayerController = (struct APlayerController*)PlayerController;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UWidgetLayoutLibrary::GetMousePositionScaledByDPI(struct APlayerController* Player, float& LocationX, float& LocationY)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("WidgetLayoutLibrary", "GetMousePositionScaledByDPI");
    struct
    {
        struct APlayerController* Player;
        float LocationX;
        float LocationY;
        uint8_t ReturnValue;
    } Parms{};
    Parms.Player = (struct APlayerController*)Player;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    LocationX = Parms.LocationX;
    LocationY = Parms.LocationY;
    return Parms.ReturnValue;
}

struct FVector2D UWidgetLayoutLibrary::GetMousePositionOnViewport(struct UObject* WorldContextObject)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("WidgetLayoutLibrary", "GetMousePositionOnViewport");
    struct
    {
        struct UObject* WorldContextObject;
        struct FVector2D ReturnValue;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FVector2D UWidgetLayoutLibrary::GetMousePositionOnPlatform()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("WidgetLayoutLibrary", "GetMousePositionOnPlatform");
    struct
    {
        struct FVector2D ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// ---- UWidgetSwitcherSlot::* ----
void UWidgetSwitcherSlot::SetVerticalAlignment(EVerticalAlignment InVerticalAlignment)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WidgetSwitcherSlot", "SetVerticalAlignment");
    struct
    {
        enum EVerticalAlignment InVerticalAlignment;
    } Parms{};
    Parms.InVerticalAlignment = (enum EVerticalAlignment)InVerticalAlignment;
    this->ProcessEvent(Func, &Parms);
}

void UWidgetSwitcherSlot::SetPadding(struct FMargin InPadding)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WidgetSwitcherSlot", "SetPadding");
    struct
    {
        struct FMargin InPadding;
    } Parms{};
    Parms.InPadding = (struct FMargin)InPadding;
    this->ProcessEvent(Func, &Parms);
}

void UWidgetSwitcherSlot::SetHorizontalAlignment(EHorizontalAlignment InHorizontalAlignment)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WidgetSwitcherSlot", "SetHorizontalAlignment");
    struct
    {
        enum EHorizontalAlignment InHorizontalAlignment;
    } Parms{};
    Parms.InHorizontalAlignment = (enum EHorizontalAlignment)InHorizontalAlignment;
    this->ProcessEvent(Func, &Parms);
}

// ---- UWindowTitleBarArea::* ----
void UWindowTitleBarArea::SetVerticalAlignment(EVerticalAlignment InVerticalAlignment)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WindowTitleBarArea", "SetVerticalAlignment");
    struct
    {
        enum EVerticalAlignment InVerticalAlignment;
    } Parms{};
    Parms.InVerticalAlignment = (enum EVerticalAlignment)InVerticalAlignment;
    this->ProcessEvent(Func, &Parms);
}

void UWindowTitleBarArea::SetPadding(struct FMargin InPadding)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WindowTitleBarArea", "SetPadding");
    struct
    {
        struct FMargin InPadding;
    } Parms{};
    Parms.InPadding = (struct FMargin)InPadding;
    this->ProcessEvent(Func, &Parms);
}

void UWindowTitleBarArea::SetHorizontalAlignment(EHorizontalAlignment InHorizontalAlignment)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WindowTitleBarArea", "SetHorizontalAlignment");
    struct
    {
        enum EHorizontalAlignment InHorizontalAlignment;
    } Parms{};
    Parms.InHorizontalAlignment = (enum EHorizontalAlignment)InHorizontalAlignment;
    this->ProcessEvent(Func, &Parms);
}

// ---- UWindowTitleBarAreaSlot::* ----
void UWindowTitleBarAreaSlot::SetVerticalAlignment(EVerticalAlignment InVerticalAlignment)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WindowTitleBarAreaSlot", "SetVerticalAlignment");
    struct
    {
        enum EVerticalAlignment InVerticalAlignment;
    } Parms{};
    Parms.InVerticalAlignment = (enum EVerticalAlignment)InVerticalAlignment;
    this->ProcessEvent(Func, &Parms);
}

void UWindowTitleBarAreaSlot::SetPadding(struct FMargin InPadding)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WindowTitleBarAreaSlot", "SetPadding");
    struct
    {
        struct FMargin InPadding;
    } Parms{};
    Parms.InPadding = (struct FMargin)InPadding;
    this->ProcessEvent(Func, &Parms);
}

void UWindowTitleBarAreaSlot::SetHorizontalAlignment(EHorizontalAlignment InHorizontalAlignment)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WindowTitleBarAreaSlot", "SetHorizontalAlignment");
    struct
    {
        enum EHorizontalAlignment InHorizontalAlignment;
    } Parms{};
    Parms.InHorizontalAlignment = (enum EHorizontalAlignment)InHorizontalAlignment;
    this->ProcessEvent(Func, &Parms);
}

// ---- UWrapBoxSlot::* ----
void UWrapBoxSlot::SetVerticalAlignment(EVerticalAlignment InVerticalAlignment)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WrapBoxSlot", "SetVerticalAlignment");
    struct
    {
        enum EVerticalAlignment InVerticalAlignment;
    } Parms{};
    Parms.InVerticalAlignment = (enum EVerticalAlignment)InVerticalAlignment;
    this->ProcessEvent(Func, &Parms);
}

void UWrapBoxSlot::SetPadding(struct FMargin InPadding)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WrapBoxSlot", "SetPadding");
    struct
    {
        struct FMargin InPadding;
    } Parms{};
    Parms.InPadding = (struct FMargin)InPadding;
    this->ProcessEvent(Func, &Parms);
}

void UWrapBoxSlot::SetHorizontalAlignment(EHorizontalAlignment InHorizontalAlignment)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WrapBoxSlot", "SetHorizontalAlignment");
    struct
    {
        enum EHorizontalAlignment InHorizontalAlignment;
    } Parms{};
    Parms.InHorizontalAlignment = (enum EHorizontalAlignment)InHorizontalAlignment;
    this->ProcessEvent(Func, &Parms);
}

void UWrapBoxSlot::SetFillSpanWhenLessThan(float InFillSpanWhenLessThan)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WrapBoxSlot", "SetFillSpanWhenLessThan");
    struct
    {
        float InFillSpanWhenLessThan;
    } Parms{};
    Parms.InFillSpanWhenLessThan = (float)InFillSpanWhenLessThan;
    this->ProcessEvent(Func, &Parms);
}

void UWrapBoxSlot::SetFillEmptySpace(uint8_t InbFillEmptySpace)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WrapBoxSlot", "SetFillEmptySpace");
    struct
    {
        uint8_t InbFillEmptySpace;
    } Parms{};
    Parms.InbFillEmptySpace = (uint8_t)InbFillEmptySpace;
    this->ProcessEvent(Func, &Parms);
}

} // namespace SDK
