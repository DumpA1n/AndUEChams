#include "GPUserInterfaceCore.hpp"
#include "GPGameInput.hpp"
#include "SlateCore.hpp"
#include "UMG.hpp"
#include <cstring> // memcpy for ArrayDim>1 param marshalling

namespace SDK
{

// ULuaUIBaseView
void ULuaUIBaseView::UserWidgetDelegate__DelegateSignature()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LuaUIBaseView", "UserWidgetDelegate__DelegateSignature");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ULuaUIBaseView::UpdateThemeIDOnly(struct FString InThemeID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LuaUIBaseView", "UpdateThemeIDOnly");
    struct
    {
        struct FString InThemeID;
    } Parms{};
    Parms.InThemeID = (struct FString)InThemeID;
    this->ProcessEvent(Func, &Parms);
}

uint8_t ULuaUIBaseView::TryFindNavigationFoucasable(struct UUserWidget* RootWidget)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LuaUIBaseView", "TryFindNavigationFoucasable");
    struct
    {
        struct UUserWidget* RootWidget;
        uint8_t ReturnValue;
    } Parms{};
    Parms.RootWidget = (struct UUserWidget*)RootWidget;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void ULuaUIBaseView::SetSkipDragStartDistanceCheck(uint8_t bIsEnable)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LuaUIBaseView", "SetSkipDragStartDistanceCheck");
    struct
    {
        uint8_t bIsEnable;
    } Parms{};
    Parms.bIsEnable = (uint8_t)bIsEnable;
    this->ProcessEvent(Func, &Parms);
}

void ULuaUIBaseView::SetPanelOwner(struct UObject* InOwner)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LuaUIBaseView", "SetPanelOwner");
    struct
    {
        struct UObject* InOwner;
    } Parms{};
    Parms.InOwner = (struct UObject*)InOwner;
    this->ProcessEvent(Func, &Parms);
}

void ULuaUIBaseView::RegisterLifeFunction(EUIState LifeFunction)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LuaUIBaseView", "RegisterLifeFunction");
    struct
    {
        enum EUIState LifeFunction;
    } Parms{};
    Parms.LifeFunction = (enum EUIState)LifeFunction;
    this->ProcessEvent(Func, &Parms);
}

void ULuaUIBaseView::RecursiveCallLuaLifeFunction(EUIState LifeFunction)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LuaUIBaseView", "RecursiveCallLuaLifeFunction");
    struct
    {
        enum EUIState LifeFunction;
    } Parms{};
    Parms.LifeFunction = (enum EUIState)LifeFunction;
    this->ProcessEvent(Func, &Parms);
}

void ULuaUIBaseView::PlayAniLua(uint8_t bForward)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LuaUIBaseView", "PlayAniLua");
    struct
    {
        uint8_t bForward;
    } Parms{};
    Parms.bForward = (uint8_t)bForward;
    this->ProcessEvent(Func, &Parms);
}

void ULuaUIBaseView::PlayAni(uint8_t bForward)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LuaUIBaseView", "PlayAni");
    struct
    {
        uint8_t bForward;
    } Parms{};
    Parms.bForward = (uint8_t)bForward;
    this->ProcessEvent(Func, &Parms);
}

void ULuaUIBaseView::OnSetThemeIDChanged(struct FString InThemeID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LuaUIBaseView", "OnSetThemeIDChanged");
    struct
    {
        struct FString InThemeID;
    } Parms{};
    Parms.InThemeID = (struct FString)InThemeID;
    this->ProcessEvent(Func, &Parms);
}

void ULuaUIBaseView::OnMouseEnterLeave__DelegateSignature()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LuaUIBaseView", "OnMouseEnterLeave__DelegateSignature");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ULuaUIBaseView::OnLongPressed_Test()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LuaUIBaseView", "OnLongPressed_Test");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ULuaUIBaseView::OnImmediateClicked_Test()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LuaUIBaseView", "OnImmediateClicked_Test");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ULuaUIBaseView::OnDoubleClicked_Test()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LuaUIBaseView", "OnDoubleClicked_Test");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ULuaUIBaseView::OnCustomDragLogic__DelegateSignature(const struct FPointerEvent& InGestureEvent)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LuaUIBaseView", "OnCustomDragLogic__DelegateSignature");
    struct
    {
        struct FPointerEvent InGestureEvent;
    } Parms{};
    Parms.InGestureEvent = (struct FPointerEvent)InGestureEvent;
    this->ProcessEvent(Func, &Parms);
}

void ULuaUIBaseView::OnClickEvent__DelegateSignature()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LuaUIBaseView", "OnClickEvent__DelegateSignature");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ULuaUIBaseView::OnClicked_Test()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LuaUIBaseView", "OnClicked_Test");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ULuaUIBaseView::LuaRemoveFromParent()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LuaUIBaseView", "LuaRemoveFromParent");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ULuaUIBaseView::LuaInsHasRelease()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LuaUIBaseView", "LuaInsHasRelease");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

uint8_t ULuaUIBaseView::IsInSafeZone()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LuaUIBaseView", "IsInSafeZone");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t ULuaUIBaseView::IsAnyAnimationPlayingRealtime()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LuaUIBaseView", "IsAnyAnimationPlayingRealtime");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t ULuaUIBaseView::IsAnimationPlayingExactly(struct UWidgetAnimation* InAnimation)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LuaUIBaseView", "IsAnimationPlayingExactly");
    struct
    {
        struct UWidgetAnimation* InAnimation;
        uint8_t ReturnValue;
    } Parms{};
    Parms.InAnimation = (struct UWidgetAnimation*)InAnimation;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UWidget* ULuaUIBaseView::GetWidgetByName_CheckLuaBinding(struct FName WidgetName, uint8_t& bRelyLuaBinding)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LuaUIBaseView", "GetWidgetByName_CheckLuaBinding");
    struct
    {
        struct FName WidgetName;
        uint8_t bRelyLuaBinding;
        struct UWidget* ReturnValue;
    } Parms{};
    Parms.WidgetName = (struct FName)WidgetName;
    this->ProcessEvent(Func, &Parms);
    bRelyLuaBinding = Parms.bRelyLuaBinding;
    return Parms.ReturnValue;
}

struct UWidget* ULuaUIBaseView::GetWidgetByName(struct FName WidgetName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LuaUIBaseView", "GetWidgetByName");
    struct
    {
        struct FName WidgetName;
        struct UWidget* ReturnValue;
    } Parms{};
    Parms.WidgetName = (struct FName)WidgetName;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UUserWidget* ULuaUIBaseView::GetViewParent(uint8_t bLuaParentOnly)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LuaUIBaseView", "GetViewParent");
    struct
    {
        uint8_t bLuaParentOnly;
        struct UUserWidget* ReturnValue;
    } Parms{};
    Parms.bLuaParentOnly = (uint8_t)bLuaParentOnly;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FMargin ULuaUIBaseView::GetSafeZoneSize()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LuaUIBaseView", "GetSafeZoneSize");
    struct
    {
        struct FMargin ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UObject* ULuaUIBaseView::GetPanelOwner()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LuaUIBaseView", "GetPanelOwner");
    struct
    {
        struct UObject* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

EFocusCause ULuaUIBaseView::GetLastFocusCause()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LuaUIBaseView", "GetLastFocusCause");
    struct
    {
        enum EFocusCause ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString ULuaUIBaseView::GetLastDragCurveDataText()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("LuaUIBaseView", "GetLastDragCurveDataText");
    struct
    {
        struct FString ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct TArray<struct FVector2D> ULuaUIBaseView::GetLastDragCurveData()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("LuaUIBaseView", "GetLastDragCurveData");
    struct
    {
        struct TArray<struct FVector2D> ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UWidget* ULuaUIBaseView::GetDesiredFocusWidget()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LuaUIBaseView", "GetDesiredFocusWidget");
    struct
    {
        struct UWidget* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void ULuaUIBaseView::ForceStopLongPressTimer()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LuaUIBaseView", "ForceStopLongPressTimer");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ULuaUIBaseView::DragDrop_LuaCall(struct FString FuncName, struct ULuaDragDropOperation* Operation)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LuaUIBaseView", "DragDrop_LuaCall");
    struct
    {
        struct FString FuncName;
        struct ULuaDragDropOperation* Operation;
    } Parms{};
    Parms.FuncName = (struct FString)FuncName;
    Parms.Operation = (struct ULuaDragDropOperation*)Operation;
    this->ProcessEvent(Func, &Parms);
}

void ULuaUIBaseView::CallLuaLifeFunction(EUIState LifeFunction)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LuaUIBaseView", "CallLuaLifeFunction");
    struct
    {
        enum EUIState LifeFunction;
    } Parms{};
    Parms.LifeFunction = (enum EUIState)LifeFunction;
    this->ProcessEvent(Func, &Parms);
}

void ULuaUIBaseView::Bp_SynchronizePropertiesEditorOnly()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LuaUIBaseView", "Bp_SynchronizePropertiesEditorOnly");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ULuaUIBaseView::Bp_SynchronizeProperties()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LuaUIBaseView", "Bp_SynchronizeProperties");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// IDFNavigationSelectorStyleInterface
struct UWidget* IDFNavigationSelectorStyleInterface::GetNavigationSelectorTarget()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFNavigationSelectorStyleInterface", "GetNavigationSelectorTarget");
    struct
    {
        struct UWidget* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FName IDFNavigationSelectorStyleInterface::GetNavigationSelectorStyle()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFNavigationSelectorStyleInterface", "GetNavigationSelectorStyle");
    struct
    {
        struct FName ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UDFNavigationSelectorStyle
void UDFNavigationSelectorStyle::StopAutoAnimation(struct FName AnimationName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFNavigationSelectorStyle", "StopAutoAnimation");
    struct
    {
        struct FName AnimationName;
    } Parms{};
    Parms.AnimationName = (struct FName)AnimationName;
    this->ProcessEvent(Func, &Parms);
}

void UDFNavigationSelectorStyle::ResetState()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFNavigationSelectorStyle", "ResetState");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFNavigationSelectorStyle::PlayStyleEffect()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFNavigationSelectorStyle", "PlayStyleEffect");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

struct UUMGSequencePlayer* UDFNavigationSelectorStyle::PlayAutoAnimation(struct FName AnimationName, int32_t NumberOfLoops, EUMGSequencePlayMode PlayMode, uint8_t bJumpToEnd)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFNavigationSelectorStyle", "PlayAutoAnimation");
    struct
    {
        struct FName AnimationName;
        int32_t NumberOfLoops;
        enum EUMGSequencePlayMode PlayMode;
        uint8_t bJumpToEnd;
        struct UUMGSequencePlayer* ReturnValue;
    } Parms{};
    Parms.AnimationName = (struct FName)AnimationName;
    Parms.NumberOfLoops = (int32_t)NumberOfLoops;
    Parms.PlayMode = (enum EUMGSequencePlayMode)PlayMode;
    Parms.bJumpToEnd = (uint8_t)bJumpToEnd;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UDFNavigationSelectorBase
void UDFNavigationSelectorBase::Unbind()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFNavigationSelectorBase", "Unbind");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFNavigationSelectorBase::ShowSelector()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFNavigationSelectorBase", "ShowSelector");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFNavigationSelectorBase::SetHighlight_DirectlyOrNavigation(uint8_t bEnable)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFNavigationSelectorBase", "SetHighlight_DirectlyOrNavigation");
    struct
    {
        uint8_t bEnable;
    } Parms{};
    Parms.bEnable = (uint8_t)bEnable;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UDFNavigationSelectorBase::SetForceHideSelectorRoot(uint8_t bEnable)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFNavigationSelectorBase", "SetForceHideSelectorRoot");
    struct
    {
        uint8_t bEnable;
    } Parms{};
    Parms.bEnable = (uint8_t)bEnable;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UDFNavigationSelectorBase::OnStyleChanged(struct FName InNewStyle)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFNavigationSelectorBase", "OnStyleChanged");
    struct
    {
        struct FName InNewStyle;
    } Parms{};
    Parms.InNewStyle = (struct FName)InNewStyle;
    this->ProcessEvent(Func, &Parms);
}

void UDFNavigationSelectorBase::OnFocusMenuEvent(uint8_t bInMenu)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFNavigationSelectorBase", "OnFocusMenuEvent");
    struct
    {
        uint8_t bInMenu;
    } Parms{};
    Parms.bInMenu = (uint8_t)bInMenu;
    this->ProcessEvent(Func, &Parms);
}

void UDFNavigationSelectorBase::HideSelector()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFNavigationSelectorBase", "HideSelector");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFNavigationSelectorBase::Bind()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFNavigationSelectorBase", "Bind");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// UGPUINavigationGroup
void UGPUINavigationGroup::SetWidgetFocusedAction(EGPUINavWidgetFocusedAction InNewFoucsedAction)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPUINavigationGroup", "SetWidgetFocusedAction");
    struct
    {
        enum EGPUINavWidgetFocusedAction InNewFoucsedAction;
    } Parms{};
    Parms.InNewFoucsedAction = (enum EGPUINavWidgetFocusedAction)InNewFoucsedAction;
    this->ProcessEvent(Func, &Parms);
}

uint8_t UGPUINavigationGroup::SetUserFocus(struct UWidget* Widget, uint8_t bUseSelectedEffect, uint8_t bScrollToTarget)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPUINavigationGroup", "SetUserFocus");
    struct
    {
        struct UWidget* Widget;
        uint8_t bUseSelectedEffect;
        uint8_t bScrollToTarget;
        uint8_t ReturnValue;
    } Parms{};
    Parms.Widget = (struct UWidget*)Widget;
    Parms.bUseSelectedEffect = (uint8_t)bUseSelectedEffect;
    Parms.bScrollToTarget = (uint8_t)bScrollToTarget;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UGPUINavigationGroup::SetUpdateFocusOnScrollEnabled(uint8_t bEnable)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPUINavigationGroup", "SetUpdateFocusOnScrollEnabled");
    struct
    {
        uint8_t bEnable;
    } Parms{};
    Parms.bEnable = (uint8_t)bEnable;
    this->ProcessEvent(Func, &Parms);
}

void UGPUINavigationGroup::SetSimulatedClickIsIgnored(uint8_t bInIgnore)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPUINavigationGroup", "SetSimulatedClickIsIgnored");
    struct
    {
        uint8_t bInIgnore;
    } Parms{};
    Parms.bInIgnore = (uint8_t)bInIgnore;
    this->ProcessEvent(Func, &Parms);
}

void UGPUINavigationGroup::SetScrollRecipient(struct UWidget* InScrollRecipient)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPUINavigationGroup", "SetScrollRecipient");
    struct
    {
        struct UWidget* InScrollRecipient;
    } Parms{};
    Parms.InScrollRecipient = (struct UWidget*)InScrollRecipient;
    this->ProcessEvent(Func, &Parms);
}

void UGPUINavigationGroup::SetScrollInfo(struct UWidget* InScrollRecipient, EGPUINavScrollingCondition InScrollingCondition)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPUINavigationGroup", "SetScrollInfo");
    struct
    {
        struct UWidget* InScrollRecipient;
        enum EGPUINavScrollingCondition InScrollingCondition;
    } Parms{};
    Parms.InScrollRecipient = (struct UWidget*)InScrollRecipient;
    Parms.InScrollingCondition = (enum EGPUINavScrollingCondition)InScrollingCondition;
    this->ProcessEvent(Func, &Parms);
}

void UGPUINavigationGroup::SetScrollAnalogStick(EGPUIAnalogStick InAnalogStick)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPUINavigationGroup", "SetScrollAnalogStick");
    struct
    {
        enum EGPUIAnalogStick InAnalogStick;
    } Parms{};
    Parms.InAnalogStick = (enum EGPUIAnalogStick)InAnalogStick;
    this->ProcessEvent(Func, &Parms);
}

void UGPUINavigationGroup::SetRootWidget(struct UWidget* InWidget)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPUINavigationGroup", "SetRootWidget");
    struct
    {
        struct UWidget* InWidget;
    } Parms{};
    Parms.InWidget = (struct UWidget*)InWidget;
    this->ProcessEvent(Func, &Parms);
}

void UGPUINavigationGroup::SetRestoreOnFocusLostEnabled(uint8_t bEnable)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPUINavigationGroup", "SetRestoreOnFocusLostEnabled");
    struct
    {
        uint8_t bEnable;
    } Parms{};
    Parms.bEnable = (uint8_t)bEnable;
    this->ProcessEvent(Func, &Parms);
}

void UGPUINavigationGroup::SetParentGroup(struct UGPUINavigationGroup* InGroup)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPUINavigationGroup", "SetParentGroup");
    struct
    {
        struct UGPUINavigationGroup* InGroup;
    } Parms{};
    Parms.InGroup = (struct UGPUINavigationGroup*)InGroup;
    this->ProcessEvent(Func, &Parms);
}

void UGPUINavigationGroup::SetOwnerWidget(struct UWidget* InWidget)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPUINavigationGroup", "SetOwnerWidget");
    struct
    {
        struct UWidget* InWidget;
    } Parms{};
    Parms.InWidget = (struct UWidget*)InWidget;
    this->ProcessEvent(Func, &Parms);
}

void UGPUINavigationGroup::SetOnlyNavInUINavWidgets(uint8_t Inbool)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPUINavigationGroup", "SetOnlyNavInUINavWidgets");
    struct
    {
        uint8_t Inbool;
    } Parms{};
    Parms.Inbool = (uint8_t)Inbool;
    this->ProcessEvent(Func, &Parms);
}

void UGPUINavigationGroup::SetNavSelectorWidgetVisibility(uint8_t bSelectorVisible)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPUINavigationGroup", "SetNavSelectorWidgetVisibility");
    struct
    {
        uint8_t bSelectorVisible;
    } Parms{};
    Parms.bSelectorVisible = (uint8_t)bSelectorVisible;
    this->ProcessEvent(Func, &Parms);
}

void UGPUINavigationGroup::SetNavSelectorStyle(const struct FName& InStyle)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPUINavigationGroup", "SetNavSelectorStyle");
    struct
    {
        struct FName InStyle;
    } Parms{};
    Parms.InStyle = (struct FName)InStyle;
    this->ProcessEvent(Func, &Parms);
}

void UGPUINavigationGroup::SetFocusRecoveryEnabled(uint8_t bEnable)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPUINavigationGroup", "SetFocusRecoveryEnabled");
    struct
    {
        uint8_t bEnable;
    } Parms{};
    Parms.bEnable = (uint8_t)bEnable;
    this->ProcessEvent(Func, &Parms);
}

void UGPUINavigationGroup::SetEnableRightStickScrolling(uint8_t bEnableScrolling)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPUINavigationGroup", "SetEnableRightStickScrolling");
    struct
    {
        uint8_t bEnableScrolling;
    } Parms{};
    Parms.bEnableScrolling = (uint8_t)bEnableScrolling;
    this->ProcessEvent(Func, &Parms);
}

void UGPUINavigationGroup::SetCustomSimulateMouseKeyConfigName(struct FName InConfigName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPUINavigationGroup", "SetCustomSimulateMouseKeyConfigName");
    struct
    {
        struct FName InConfigName;
    } Parms{};
    Parms.InConfigName = (struct FName)InConfigName;
    this->ProcessEvent(Func, &Parms);
}

void UGPUINavigationGroup::SetAutoUseRootGeometrySize(uint8_t bAutoUse)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPUINavigationGroup", "SetAutoUseRootGeometrySize");
    struct
    {
        uint8_t bAutoUse;
    } Parms{};
    Parms.bAutoUse = (uint8_t)bAutoUse;
    this->ProcessEvent(Func, &Parms);
}

void UGPUINavigationGroup::SetAutoScrollDestination(EGPNavScrollDestination InDestination)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPUINavigationGroup", "SetAutoScrollDestination");
    struct
    {
        enum EGPNavScrollDestination InDestination;
    } Parms{};
    Parms.InDestination = (enum EGPNavScrollDestination)InDestination;
    this->ProcessEvent(Func, &Parms);
}

void UGPUINavigationGroup::SetAnalogCursorStickySlowdownFactor(float InFactor)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPUINavigationGroup", "SetAnalogCursorStickySlowdownFactor");
    struct
    {
        float InFactor;
    } Parms{};
    Parms.InFactor = (float)InFactor;
    this->ProcessEvent(Func, &Parms);
}

uint8_t UGPUINavigationGroup::RestoreFocus()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPUINavigationGroup", "RestoreFocus");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UGPUINavigationGroup::RemoveParentGroup()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPUINavigationGroup", "RemoveParentGroup");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UGPUINavigationGroup::RemoveNodeRelations()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPUINavigationGroup", "RemoveNodeRelations");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UGPUINavigationGroup::RemoveChildGroup(struct UGPUINavigationGroup* InGroup)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPUINavigationGroup", "RemoveChildGroup");
    struct
    {
        struct UGPUINavigationGroup* InGroup;
    } Parms{};
    Parms.InGroup = (struct UGPUINavigationGroup*)InGroup;
    this->ProcessEvent(Func, &Parms);
}

void UGPUINavigationGroup::OnNavGroupFocusReceivedEvent__DelegateSignature(struct UGPUINavigationGroup* FocusedNavGroup)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPUINavigationGroup", "OnNavGroupFocusReceivedEvent__DelegateSignature");
    struct
    {
        struct UGPUINavigationGroup* FocusedNavGroup;
    } Parms{};
    Parms.FocusedNavGroup = (struct UGPUINavigationGroup*)FocusedNavGroup;
    this->ProcessEvent(Func, &Parms);
}

void UGPUINavigationGroup::OnNavGroupFocusLostEvent__DelegateSignature(struct UGPUINavigationGroup* FocusedNavGroup)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPUINavigationGroup", "OnNavGroupFocusLostEvent__DelegateSignature");
    struct
    {
        struct UGPUINavigationGroup* FocusedNavGroup;
    } Parms{};
    Parms.FocusedNavGroup = (struct UGPUINavigationGroup*)FocusedNavGroup;
    this->ProcessEvent(Func, &Parms);
}

void UGPUINavigationGroup::MarkIsStackControlGroup()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPUINavigationGroup", "MarkIsStackControlGroup");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UGPUINavigationGroup::MarkIsGlobalGroup(uint8_t bIsGlobal)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPUINavigationGroup", "MarkIsGlobalGroup");
    struct
    {
        uint8_t bIsGlobal;
    } Parms{};
    Parms.bIsGlobal = (uint8_t)bIsGlobal;
    this->ProcessEvent(Func, &Parms);
}

void UGPUINavigationGroup::MarkIsDefaultFocusGroup()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPUINavigationGroup", "MarkIsDefaultFocusGroup");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

uint8_t UGPUINavigationGroup::IsShowNavSelectorWidget()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPUINavigationGroup", "IsShowNavSelectorWidget");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UGPUINavigationGroup::IsGroupType(EGPUINavigationGroupType InTestType)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPUINavigationGroup", "IsGroupType");
    struct
    {
        enum EGPUINavigationGroupType InTestType;
        uint8_t ReturnValue;
    } Parms{};
    Parms.InTestType = (enum EGPUINavigationGroupType)InTestType;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UGPUINavigationGroup::IsGroupEnabled()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPUINavigationGroup", "IsGroupEnabled");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UGPUINavigationGroup::IsFocusRecoveryEnabled()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPUINavigationGroup", "IsFocusRecoveryEnabled");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UGPUINavigationGroup::GetUpdateFocusOnScrollEnabled()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPUINavigationGroup", "GetUpdateFocusOnScrollEnabled");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UWidget* UGPUINavigationGroup::GetRootWidget()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPUINavigationGroup", "GetRootWidget");
    struct
    {
        struct UWidget* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UGPUINavigationGroup::GetRestoreOnFocusLostEnabled()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPUINavigationGroup", "GetRestoreOnFocusLostEnabled");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UGPUINavigationGroup* UGPUINavigationGroup::GetParentGroup()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPUINavigationGroup", "GetParentGroup");
    struct
    {
        struct UGPUINavigationGroup* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UWidget* UGPUINavigationGroup::GetOwnerWidget()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPUINavigationGroup", "GetOwnerWidget");
    struct
    {
        struct UWidget* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UGPUINavigationStrategyBase* UGPUINavigationGroup::GetOwnerNavStrategy()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPUINavigationGroup", "GetOwnerNavStrategy");
    struct
    {
        struct UGPUINavigationStrategyBase* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FName UGPUINavigationGroup::GetNavSelectorStyle()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPUINavigationGroup", "GetNavSelectorStyle");
    struct
    {
        struct FName ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

EUINavigation UGPUINavigationGroup::GetLastNavigationType()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPUINavigationGroup", "GetLastNavigationType");
    struct
    {
        enum EUINavigation ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UWidget* UGPUINavigationGroup::GetLastFocusUWidget()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPUINavigationGroup", "GetLastFocusUWidget");
    struct
    {
        struct UWidget* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UGPUINavigationGroup::GetLastFocusLostTime()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPUINavigationGroup", "GetLastFocusLostTime");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UGPUINavigationGroup::GetLastFocusLostElapsedTime()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPUINavigationGroup", "GetLastFocusLostElapsedTime");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

EFocusCause UGPUINavigationGroup::GetLastFocusLostCause()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPUINavigationGroup", "GetLastFocusLostCause");
    struct
    {
        enum EFocusCause ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FName UGPUINavigationGroup::GetCustomSimulateMouseKeyConfigName()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPUINavigationGroup", "GetCustomSimulateMouseKeyConfigName");
    struct
    {
        struct FName ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

EGPNavScrollDestination UGPUINavigationGroup::GetAutoScrollDestination()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPUINavigationGroup", "GetAutoScrollDestination");
    struct
    {
        enum EGPNavScrollDestination ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UGPUINavigationGroup::GetAnalogCursorStickySlowdownFactor()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPUINavigationGroup", "GetAnalogCursorStickySlowdownFactor");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UGPUINavigationGroup::FocusWidgetByProxy(struct TArray<int64_t> ProxyHandle, uint8_t bUseSelectedEffect)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPUINavigationGroup", "FocusWidgetByProxy");
    struct
    {
        struct TArray<int64_t> ProxyHandle;
        uint8_t bUseSelectedEffect;
    } Parms{};
    Parms.ProxyHandle = (struct TArray<int64_t>)ProxyHandle;
    Parms.bUseSelectedEffect = (uint8_t)bUseSelectedEffect;
    this->ProcessEvent(Func, &Parms);
}

void UGPUINavigationGroup::ClearCustomSimulateMouseKeyConfigName()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPUINavigationGroup", "ClearCustomSimulateMouseKeyConfigName");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

uint8_t UGPUINavigationGroup::CanSimulateClick()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPUINavigationGroup", "CanSimulateClick");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UGPUINavigationGroup::BuildNavigation()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPUINavigationGroup", "BuildNavigation");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UGPUINavigationGroup::BindDynamicNavConfig(struct FName InConfigName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPUINavigationGroup", "BindDynamicNavConfig");
    struct
    {
        struct FName InConfigName;
    } Parms{};
    Parms.InConfigName = (struct FName)InConfigName;
    this->ProcessEvent(Func, &Parms);
}

void UGPUINavigationGroup::AddNavWidgetToArray(struct UWidget* InWidget)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPUINavigationGroup", "AddNavWidgetToArray");
    struct
    {
        struct UWidget* InWidget;
    } Parms{};
    Parms.InWidget = (struct UWidget*)InWidget;
    this->ProcessEvent(Func, &Parms);
}

void UGPUINavigationGroup::AddChildGroup(struct UGPUINavigationGroup* InGroup)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPUINavigationGroup", "AddChildGroup");
    struct
    {
        struct UGPUINavigationGroup* InGroup;
    } Parms{};
    Parms.InGroup = (struct UGPUINavigationGroup*)InGroup;
    this->ProcessEvent(Func, &Parms);
}

// UGPUINavigationManager
uint8_t UGPUINavigationManager::UsingFreeAnalogCursor()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPUINavigationManager", "UsingFreeAnalogCursor");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UGPUINavigationManager::UnRegisterAnalogCursor()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPUINavigationManager", "UnRegisterAnalogCursor");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

uint8_t UGPUINavigationManager::TrySimulateMouseDrag(struct UWidget* TryDragWidget)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPUINavigationManager", "TrySimulateMouseDrag");
    struct
    {
        struct UWidget* TryDragWidget;
        uint8_t ReturnValue;
    } Parms{};
    Parms.TryDragWidget = (struct UWidget*)TryDragWidget;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UGPUINavigationManager::TrySimulateMouseClick()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPUINavigationManager", "TrySimulateMouseClick");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UGPUINavigationManager::TryRestoreProxy(struct UWidget* InWidget)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPUINavigationManager", "TryRestoreProxy");
    struct
    {
        struct UWidget* InWidget;
    } Parms{};
    Parms.InWidget = (struct UWidget*)InWidget;
    this->ProcessEvent(Func, &Parms);
}

void UGPUINavigationManager::TryRecordProxy(struct UWidget* InWidget)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPUINavigationManager", "TryRecordProxy");
    struct
    {
        struct UWidget* InWidget;
    } Parms{};
    Parms.InWidget = (struct UWidget*)InWidget;
    this->ProcessEvent(Func, &Parms);
}

uint8_t UGPUINavigationManager::TryFocusLastGroupByOwner(struct UWidget* Owner)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPUINavigationManager", "TryFocusLastGroupByOwner");
    struct
    {
        struct UWidget* Owner;
        uint8_t ReturnValue;
    } Parms{};
    Parms.Owner = (struct UWidget*)Owner;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UGPUINavigationManager::TryFocusLastGroup(struct TArray<struct UGPUINavigationGroup*> InGroups)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPUINavigationManager", "TryFocusLastGroup");
    struct
    {
        struct TArray<struct UGPUINavigationGroup*> InGroups;
        uint8_t ReturnValue;
    } Parms{};
    Parms.InGroups = (struct TArray<struct UGPUINavigationGroup*>)InGroups;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UGPUINavigationManager::TryFocusDefaultWidgetByGroup(struct UGPUINavigationGroup* TargetGroup)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPUINavigationManager", "TryFocusDefaultWidgetByGroup");
    struct
    {
        struct UGPUINavigationGroup* TargetGroup;
    } Parms{};
    Parms.TargetGroup = (struct UGPUINavigationGroup*)TargetGroup;
    this->ProcessEvent(Func, &Parms);
}

struct UGPUINavigationGroup* UGPUINavigationManager::TryFindTargetGroup(struct UGPUINavigationGroup* BeginGroup, struct UGPUINavigationGroup* BaseGroup, EUINavigation InNavigationType)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPUINavigationManager", "TryFindTargetGroup");
    struct
    {
        struct UGPUINavigationGroup* BeginGroup;
        struct UGPUINavigationGroup* BaseGroup;
        enum EUINavigation InNavigationType;
        struct UGPUINavigationGroup* ReturnValue;
    } Parms{};
    Parms.BeginGroup = (struct UGPUINavigationGroup*)BeginGroup;
    Parms.BaseGroup = (struct UGPUINavigationGroup*)BaseGroup;
    Parms.InNavigationType = (enum EUINavigation)InNavigationType;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UGPUINavigationManager::StopSimulateMouseDrag()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPUINavigationManager", "StopSimulateMouseDrag");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UGPUINavigationManager::ShowFreeAnalogCursor(struct UWidget* WidgetTocenterize)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPUINavigationManager", "ShowFreeAnalogCursor");
    struct
    {
        struct UWidget* WidgetTocenterize;
    } Parms{};
    Parms.WidgetTocenterize = (struct UWidget*)WidgetTocenterize;
    this->ProcessEvent(Func, &Parms);
}

void UGPUINavigationManager::SetUpdateFocusOnScrolling(uint8_t bEnable)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPUINavigationManager", "SetUpdateFocusOnScrolling");
    struct
    {
        uint8_t bEnable;
    } Parms{};
    Parms.bEnable = (uint8_t)bEnable;
    this->ProcessEvent(Func, &Parms);
}

void UGPUINavigationManager::SetTrySimulateMouseDrag(uint8_t bEnableSimulatedDrag)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPUINavigationManager", "SetTrySimulateMouseDrag");
    struct
    {
        uint8_t bEnableSimulatedDrag;
    } Parms{};
    Parms.bEnableSimulatedDrag = (uint8_t)bEnableSimulatedDrag;
    this->ProcessEvent(Func, &Parms);
}

void UGPUINavigationManager::SetGlobalRootWidget(struct UWidget* InWidget)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPUINavigationManager", "SetGlobalRootWidget");
    struct
    {
        struct UWidget* InWidget;
    } Parms{};
    Parms.InWidget = (struct UWidget*)InWidget;
    this->ProcessEvent(Func, &Parms);
}

void UGPUINavigationManager::SetFreeAnalogCursorIsBlockedByKey(struct FString InKey, uint8_t bInBlock, uint8_t bAllowAnalogNavigation, EGPAnalogCursorBlockOption InOption)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPUINavigationManager", "SetFreeAnalogCursorIsBlockedByKey");
    struct
    {
        struct FString InKey;
        uint8_t bInBlock;
        uint8_t bAllowAnalogNavigation;
        enum EGPAnalogCursorBlockOption InOption;
    } Parms{};
    Parms.InKey = (struct FString)InKey;
    Parms.bInBlock = (uint8_t)bInBlock;
    Parms.bAllowAnalogNavigation = (uint8_t)bAllowAnalogNavigation;
    Parms.InOption = (enum EGPAnalogCursorBlockOption)InOption;
    this->ProcessEvent(Func, &Parms);
}

void UGPUINavigationManager::SetFreeAnalogCursorIsBlocked(struct UWidget* InWidget, uint8_t bInBlock, uint8_t bAllowAnalogNavigation, EGPAnalogCursorBlockOption InOption)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPUINavigationManager", "SetFreeAnalogCursorIsBlocked");
    struct
    {
        struct UWidget* InWidget;
        uint8_t bInBlock;
        uint8_t bAllowAnalogNavigation;
        enum EGPAnalogCursorBlockOption InOption;
    } Parms{};
    Parms.InWidget = (struct UWidget*)InWidget;
    Parms.bInBlock = (uint8_t)bInBlock;
    Parms.bAllowAnalogNavigation = (uint8_t)bAllowAnalogNavigation;
    Parms.InOption = (enum EGPAnalogCursorBlockOption)InOption;
    this->ProcessEvent(Func, &Parms);
}

void UGPUINavigationManager::SetFreeAnalogCursorAutoFocusDisabled(struct UWidget* InWidget, uint8_t bInDisabled)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPUINavigationManager", "SetFreeAnalogCursorAutoFocusDisabled");
    struct
    {
        struct UWidget* InWidget;
        uint8_t bInDisabled;
    } Parms{};
    Parms.InWidget = (struct UWidget*)InWidget;
    Parms.bInDisabled = (uint8_t)bInDisabled;
    this->ProcessEvent(Func, &Parms);
}

void UGPUINavigationManager::Resume()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPUINavigationManager", "Resume");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

uint8_t UGPUINavigationManager::RestoreFocus(struct UWidget* InTargetUIWidget, uint8_t bSkipCheckCurSelect)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPUINavigationManager", "RestoreFocus");
    struct
    {
        struct UWidget* InTargetUIWidget;
        uint8_t bSkipCheckCurSelect;
        uint8_t ReturnValue;
    } Parms{};
    Parms.InTargetUIWidget = (struct UWidget*)InTargetUIWidget;
    Parms.bSkipCheckCurSelect = (uint8_t)bSkipCheckCurSelect;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UGPUINavigationManager::RemoveOneNavigationGroup(struct UGPUINavigationGroup* InGroup)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPUINavigationManager", "RemoveOneNavigationGroup");
    struct
    {
        struct UGPUINavigationGroup* InGroup;
    } Parms{};
    Parms.InGroup = (struct UGPUINavigationGroup*)InGroup;
    this->ProcessEvent(Func, &Parms);
}

void UGPUINavigationManager::RemoveNavigationGroup(struct UWidget* InWidget)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPUINavigationManager", "RemoveNavigationGroup");
    struct
    {
        struct UWidget* InWidget;
    } Parms{};
    Parms.InWidget = (struct UWidget*)InWidget;
    this->ProcessEvent(Func, &Parms);
}

void UGPUINavigationManager::RemoveFocusHistoryFromWidget(struct UWidget* InWidget)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPUINavigationManager", "RemoveFocusHistoryFromWidget");
    struct
    {
        struct UWidget* InWidget;
    } Parms{};
    Parms.InWidget = (struct UWidget*)InWidget;
    this->ProcessEvent(Func, &Parms);
}

struct UGPUINavigationGroup* UGPUINavigationManager::RegisterNavigationGroup(struct UWidget* RootWidget, struct UWidget* OwnerWidget, struct FName NavStrategyName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPUINavigationManager", "RegisterNavigationGroup");
    struct
    {
        struct UWidget* RootWidget;
        struct UWidget* OwnerWidget;
        struct FName NavStrategyName;
        struct UGPUINavigationGroup* ReturnValue;
    } Parms{};
    Parms.RootWidget = (struct UWidget*)RootWidget;
    Parms.OwnerWidget = (struct UWidget*)OwnerWidget;
    Parms.NavStrategyName = (struct FName)NavStrategyName;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UGPUINavigationManager::RegisterAnalogCursor()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPUINavigationManager", "RegisterAnalogCursor");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UGPUINavigationManager::Pause(int32_t FramesToResume)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPUINavigationManager", "Pause");
    struct
    {
        int32_t FramesToResume;
    } Parms{};
    Parms.FramesToResume = (int32_t)FramesToResume;
    this->ProcessEvent(Func, &Parms);
}

void UGPUINavigationManager::OnStackUIPreChange()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPUINavigationManager", "OnStackUIPreChange");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UGPUINavigationManager::OnStackUIChange(struct UWidget* StackUI)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPUINavigationManager", "OnStackUIChange");
    struct
    {
        struct UWidget* StackUI;
    } Parms{};
    Parms.StackUI = (struct UWidget*)StackUI;
    this->ProcessEvent(Func, &Parms);
}

void UGPUINavigationManager::OnScrollingWithOffset(float ScrollOffset)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPUINavigationManager", "OnScrollingWithOffset");
    struct
    {
        float ScrollOffset;
    } Parms{};
    Parms.ScrollOffset = (float)ScrollOffset;
    this->ProcessEvent(Func, &Parms);
}

void UGPUINavigationManager::OnScrolling()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPUINavigationManager", "OnScrolling");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UGPUINavigationManager::OnScrollEnd()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPUINavigationManager", "OnScrollEnd");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UGPUINavigationManager::OnPopUIPreChange()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPUINavigationManager", "OnPopUIPreChange");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UGPUINavigationManager::OnPopUIChanged(struct UWidget* PopUI, struct UWidget* StackUI, uint8_t bAdd)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPUINavigationManager", "OnPopUIChanged");
    struct
    {
        struct UWidget* PopUI;
        struct UWidget* StackUI;
        uint8_t bAdd;
    } Parms{};
    Parms.PopUI = (struct UWidget*)PopUI;
    Parms.StackUI = (struct UWidget*)StackUI;
    Parms.bAdd = (uint8_t)bAdd;
    this->ProcessEvent(Func, &Parms);
}

void UGPUINavigationManager::MarkIsGlobalGroup(struct UGPUINavigationGroup* InGroup, uint8_t bIsGlobal)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPUINavigationManager", "MarkIsGlobalGroup");
    struct
    {
        struct UGPUINavigationGroup* InGroup;
        uint8_t bIsGlobal;
    } Parms{};
    Parms.InGroup = (struct UGPUINavigationGroup*)InGroup;
    Parms.bIsGlobal = (uint8_t)bIsGlobal;
    this->ProcessEvent(Func, &Parms);
}

uint8_t UGPUINavigationManager::IsStopSimulatedMouseDrag()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPUINavigationManager", "IsStopSimulatedMouseDrag");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UGPUINavigationManager::IsOnSimulatedMouseDraging()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPUINavigationManager", "IsOnSimulatedMouseDraging");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UGPUINavigationManager::IsFreeAnalogCursorMoving()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPUINavigationManager", "IsFreeAnalogCursorMoving");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UGPUINavigationManager::HideFreeAnalogCursor(uint8_t bRestoreFocus)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPUINavigationManager", "HideFreeAnalogCursor");
    struct
    {
        uint8_t bRestoreFocus;
    } Parms{};
    Parms.bRestoreFocus = (uint8_t)bRestoreFocus;
    this->ProcessEvent(Func, &Parms);
}

void UGPUINavigationManager::HandleInputModeChanged(EGPInputModeType OldType, EGPInputModeType NewType)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPUINavigationManager", "HandleInputModeChanged");
    struct
    {
        enum EGPInputModeType OldType;
        enum EGPInputModeType NewType;
    } Parms{};
    Parms.OldType = (enum EGPInputModeType)OldType;
    Parms.NewType = (enum EGPInputModeType)NewType;
    this->ProcessEvent(Func, &Parms);
}

void UGPUINavigationManager::HandleInputMethodChanged(EGPInputType NewInputMethod)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPUINavigationManager", "HandleInputMethodChanged");
    struct
    {
        enum EGPInputType NewInputMethod;
    } Parms{};
    Parms.NewInputMethod = (enum EGPInputType)NewInputMethod;
    this->ProcessEvent(Func, &Parms);
}

struct UGPUINavigationManager* UGPUINavigationManager::Get(struct UObject* WorldContext)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPUINavigationManager", "Get");
    struct
    {
        struct UObject* WorldContext;
        struct UGPUINavigationManager* ReturnValue;
    } Parms{};
    Parms.WorldContext = (struct UObject*)WorldContext;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UGPUINavigationManager::FocusWidgetByProxy(struct UGPUINavigationGroup* TargetGroup, struct TArray<int64_t> ProxyHandle)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPUINavigationManager", "FocusWidgetByProxy");
    struct
    {
        struct UGPUINavigationGroup* TargetGroup;
        struct TArray<int64_t> ProxyHandle;
    } Parms{};
    Parms.TargetGroup = (struct UGPUINavigationGroup*)TargetGroup;
    Parms.ProxyHandle = (struct TArray<int64_t>)ProxyHandle;
    this->ProcessEvent(Func, &Parms);
}

struct UGPUINavigationGroup* UGPUINavigationManager::FindNearGroup(struct UGPUINavigationGroup* InGroup, struct TArray<struct TWeakObjectPtr<struct UGPUINavigationGroup>> TargetGroups)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPUINavigationManager", "FindNearGroup");
    struct
    {
        struct UGPUINavigationGroup* InGroup;
        struct TArray<struct TWeakObjectPtr<struct UGPUINavigationGroup>> TargetGroups;
        struct UGPUINavigationGroup* ReturnValue;
    } Parms{};
    Parms.InGroup = (struct UGPUINavigationGroup*)InGroup;
    Parms.TargetGroups = (struct TArray<struct TWeakObjectPtr<struct UGPUINavigationGroup>>)TargetGroups;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UGPUINavigationManager::DeactivateDynamicConfigsbyWidget(struct UObject* InOwnerWidget)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPUINavigationManager", "DeactivateDynamicConfigsbyWidget");
    struct
    {
        struct UObject* InOwnerWidget;
    } Parms{};
    Parms.InOwnerWidget = (struct UObject*)InOwnerWidget;
    this->ProcessEvent(Func, &Parms);
}

void UGPUINavigationManager::DeactivateDynamicConfig(int32_t InHandle)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPUINavigationManager", "DeactivateDynamicConfig");
    struct
    {
        int32_t InHandle;
    } Parms{};
    Parms.InHandle = (int32_t)InHandle;
    this->ProcessEvent(Func, &Parms);
}

void UGPUINavigationManager::DeactivateAllDynamicConfigs()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPUINavigationManager", "DeactivateAllDynamicConfigs");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

uint8_t UGPUINavigationManager::CanSimulateClickUnderCursor()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPUINavigationManager", "CanSimulateClickUnderCursor");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UGPUINavigationManager::BuildGroupTreeAuto(struct UWidget* StartWidget)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPUINavigationManager", "BuildGroupTreeAuto");
    struct
    {
        struct UWidget* StartWidget;
    } Parms{};
    Parms.StartWidget = (struct UWidget*)StartWidget;
    this->ProcessEvent(Func, &Parms);
}

void UGPUINavigationManager::BuildGroupTree(struct UWidget* MainRootWidget)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPUINavigationManager", "BuildGroupTree");
    struct
    {
        struct UWidget* MainRootWidget;
    } Parms{};
    Parms.MainRootWidget = (struct UWidget*)MainRootWidget;
    this->ProcessEvent(Func, &Parms);
}

int32_t UGPUINavigationManager::ActivateDynamicConfig(struct FName InConfigName, struct UObject* InOwnerWidget, int32_t InPriority)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPUINavigationManager", "ActivateDynamicConfig");
    struct
    {
        struct FName InConfigName;
        struct UObject* InOwnerWidget;
        int32_t InPriority;
        int32_t ReturnValue;
    } Parms{};
    Parms.InConfigName = (struct FName)InConfigName;
    Parms.InOwnerWidget = (struct UObject*)InOwnerWidget;
    Parms.InPriority = (int32_t)InPriority;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UGPUINavigationStrategyBase
void UGPUINavigationStrategyBase::WrapBoundary(struct TArray<EUINavigation> InNavDirections)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPUINavigationStrategyBase", "WrapBoundary");
    struct
    {
        struct TArray<EUINavigation> InNavDirections;
    } Parms{};
    Parms.InNavDirections = (struct TArray<EUINavigation>)InNavDirections;
    this->ProcessEvent(Func, &Parms);
}

void UGPUINavigationStrategyBase::SetSameParentTransStrategy(EGPUINavGroupTransSimpleStrategy InNewStrategy)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPUINavigationStrategyBase", "SetSameParentTransStrategy");
    struct
    {
        enum EGPUINavGroupTransSimpleStrategy InNewStrategy;
    } Parms{};
    Parms.InNewStrategy = (enum EGPUINavGroupTransSimpleStrategy)InNewStrategy;
    this->ProcessEvent(Func, &Parms);
}

void UGPUINavigationStrategyBase::SetDifferentParentTransStrategy(EGPUINavGroupTransSimpleStrategy InNewStrategy)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPUINavigationStrategyBase", "SetDifferentParentTransStrategy");
    struct
    {
        enum EGPUINavGroupTransSimpleStrategy InNewStrategy;
    } Parms{};
    Parms.InNewStrategy = (enum EGPUINavGroupTransSimpleStrategy)InNewStrategy;
    this->ProcessEvent(Func, &Parms);
}

void UGPUINavigationStrategyBase::SetBestFocusWidgetDefaultType(EGPUINavGroupBestDefaultType InNewBestDefaultType)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPUINavigationStrategyBase", "SetBestFocusWidgetDefaultType");
    struct
    {
        enum EGPUINavGroupBestDefaultType InNewBestDefaultType;
    } Parms{};
    Parms.InNewBestDefaultType = (enum EGPUINavGroupBestDefaultType)InNewBestDefaultType;
    this->ProcessEvent(Func, &Parms);
}

void UGPUINavigationStrategyBase::SetBestFocusNoEditableText(uint8_t bInCondition)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPUINavigationStrategyBase", "SetBestFocusNoEditableText");
    struct
    {
        uint8_t bInCondition;
    } Parms{};
    Parms.bInCondition = (uint8_t)bInCondition;
    this->ProcessEvent(Func, &Parms);
}

uint8_t UGPUINavigationStrategyBase::GetBestFocusNoEditableText()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPUINavigationStrategyBase", "GetBestFocusNoEditableText");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UGPUINavigationStrategy_Closest
void UGPUINavigationStrategy_Closest::SetVerticalDistanceType(EGPUINavigationDistanceType InDistanceType)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPUINavigationStrategy_Closest", "SetVerticalDistanceType");
    struct
    {
        enum EGPUINavigationDistanceType InDistanceType;
    } Parms{};
    Parms.InDistanceType = (enum EGPUINavigationDistanceType)InDistanceType;
    this->ProcessEvent(Func, &Parms);
}

void UGPUINavigationStrategy_Closest::SetHorizontalDistanceType(EGPUINavigationDistanceType InDistanceType)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPUINavigationStrategy_Closest", "SetHorizontalDistanceType");
    struct
    {
        enum EGPUINavigationDistanceType InDistanceType;
    } Parms{};
    Parms.InDistanceType = (enum EGPUINavigationDistanceType)InDistanceType;
    this->ProcessEvent(Func, &Parms);
}

// UGPUINavigationStrategy_Grid1D
void UGPUINavigationStrategy_Grid1D::SetUsePrevNextNavigation(uint8_t UsePrevNextNavigation)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPUINavigationStrategy_Grid1D", "SetUsePrevNextNavigation");
    struct
    {
        uint8_t UsePrevNextNavigation;
    } Parms{};
    Parms.UsePrevNextNavigation = (uint8_t)UsePrevNextNavigation;
    this->ProcessEvent(Func, &Parms);
}

void UGPUINavigationStrategy_Grid1D::SetIsVerticalType(uint8_t IsVerticalType)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPUINavigationStrategy_Grid1D", "SetIsVerticalType");
    struct
    {
        uint8_t IsVerticalType;
    } Parms{};
    Parms.IsVerticalType = (uint8_t)IsVerticalType;
    this->ProcessEvent(Func, &Parms);
}

// UGPUINavigationStrategy_Gunsmith
void UGPUINavigationStrategy_Gunsmith::SetGunCenter(struct FVector2D NewGunCenter)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPUINavigationStrategy_Gunsmith", "SetGunCenter");
    struct
    {
        struct FVector2D NewGunCenter;
    } Parms{};
    Parms.NewGunCenter = (struct FVector2D)NewGunCenter;
    this->ProcessEvent(Func, &Parms);
}

// UGPUINavigationStrategy_Hittest
void UGPUINavigationStrategy_Hittest::SetSweptOffset(float InOffset)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPUINavigationStrategy_Hittest", "SetSweptOffset");
    struct
    {
        float InOffset;
    } Parms{};
    Parms.InOffset = (float)InOffset;
    this->ProcessEvent(Func, &Parms);
}

void UGPUINavigationStrategy_Hittest::SetHittestFallbackDistanceType(EGPUINavHittestFallbackType HittestFallbackType, EGPUINavigationDistanceType DistanceType)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPUINavigationStrategy_Hittest", "SetHittestFallbackDistanceType");
    struct
    {
        enum EGPUINavHittestFallbackType HittestFallbackType;
        enum EGPUINavigationDistanceType DistanceType;
    } Parms{};
    Parms.HittestFallbackType = (enum EGPUINavHittestFallbackType)HittestFallbackType;
    Parms.DistanceType = (enum EGPUINavigationDistanceType)DistanceType;
    this->ProcessEvent(Func, &Parms);
}

void UGPUINavigationStrategy_Hittest::SetHittestFallbackConfig(EGPUINavHittestFallbackType HittestFallbackType, uint8_t bEnable, uint8_t bEnableOtherSweptTest)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPUINavigationStrategy_Hittest", "SetHittestFallbackConfig");
    struct
    {
        enum EGPUINavHittestFallbackType HittestFallbackType;
        uint8_t bEnable;
        uint8_t bEnableOtherSweptTest;
    } Parms{};
    Parms.HittestFallbackType = (enum EGPUINavHittestFallbackType)HittestFallbackType;
    Parms.bEnable = (uint8_t)bEnable;
    Parms.bEnableOtherSweptTest = (uint8_t)bEnableOtherSweptTest;
    this->ProcessEvent(Func, &Parms);
}

void UGPUINavigationStrategy_Hittest::SetHitPadding(float InHitPadding)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPUINavigationStrategy_Hittest", "SetHitPadding");
    struct
    {
        float InHitPadding;
    } Parms{};
    Parms.InHitPadding = (float)InHitPadding;
    this->ProcessEvent(Func, &Parms);
}

// UGPUINavigationStrategy_LuaExtension
void UGPUINavigationStrategy_LuaExtension::SetSweptOffset(float InOffset)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPUINavigationStrategy_LuaExtension", "SetSweptOffset");
    struct
    {
        float InOffset;
    } Parms{};
    Parms.InOffset = (float)InOffset;
    this->ProcessEvent(Func, &Parms);
}

void UGPUINavigationStrategy_LuaExtension::SetHittestFallbackDistanceType(EGPUINavHittestFallbackType HittestFallbackType, EGPUINavigationDistanceType DistanceType)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPUINavigationStrategy_LuaExtension", "SetHittestFallbackDistanceType");
    struct
    {
        enum EGPUINavHittestFallbackType HittestFallbackType;
        enum EGPUINavigationDistanceType DistanceType;
    } Parms{};
    Parms.HittestFallbackType = (enum EGPUINavHittestFallbackType)HittestFallbackType;
    Parms.DistanceType = (enum EGPUINavigationDistanceType)DistanceType;
    this->ProcessEvent(Func, &Parms);
}

void UGPUINavigationStrategy_LuaExtension::SetHittestFallbackConfig(EGPUINavHittestFallbackType HittestFallbackType, uint8_t bEnable, uint8_t bEnableOtherSweptTest)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPUINavigationStrategy_LuaExtension", "SetHittestFallbackConfig");
    struct
    {
        enum EGPUINavHittestFallbackType HittestFallbackType;
        uint8_t bEnable;
        uint8_t bEnableOtherSweptTest;
    } Parms{};
    Parms.HittestFallbackType = (enum EGPUINavHittestFallbackType)HittestFallbackType;
    Parms.bEnable = (uint8_t)bEnable;
    Parms.bEnableOtherSweptTest = (uint8_t)bEnableOtherSweptTest;
    this->ProcessEvent(Func, &Parms);
}

void UGPUINavigationStrategy_LuaExtension::SetHitPadding(float InHitPadding)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPUINavigationStrategy_LuaExtension", "SetHitPadding");
    struct
    {
        float InHitPadding;
    } Parms{};
    Parms.InHitPadding = (float)InHitPadding;
    this->ProcessEvent(Func, &Parms);
}

// UGPUINavigationUtils
uint8_t UGPUINavigationUtils::TryAutoFocus(uint32_t UserIndex, struct UUserWidget* RootWidget)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPUINavigationUtils", "TryAutoFocus");
    struct
    {
        uint32_t UserIndex;
        struct UUserWidget* RootWidget;
        uint8_t ReturnValue;
    } Parms{};
    Parms.UserIndex = (uint32_t)UserIndex;
    Parms.RootWidget = (struct UUserWidget*)RootWidget;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UGPUINavigationUtils::SetUserFocusToWidget(struct UObject* InObject, struct UWidget* InWidget, uint8_t bUseSelectedEffect)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPUINavigationUtils", "SetUserFocusToWidget");
    struct
    {
        struct UObject* InObject;
        struct UWidget* InWidget;
        uint8_t bUseSelectedEffect;
        uint8_t ReturnValue;
    } Parms{};
    Parms.InObject = (struct UObject*)InObject;
    Parms.InWidget = (struct UWidget*)InWidget;
    Parms.bUseSelectedEffect = (uint8_t)bUseSelectedEffect;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UGPUINavigationUtils::SetUserFocusToGameViewport(struct UObject* InObject)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPUINavigationUtils", "SetUserFocusToGameViewport");
    struct
    {
        struct UObject* InObject;
        uint8_t ReturnValue;
    } Parms{};
    Parms.InObject = (struct UObject*)InObject;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UGPUINavigationUtils::IsWidgetInParent_PathLength(struct UWidget* InWidget, struct UWidget* Parent, int32_t& OutPathLength)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPUINavigationUtils", "IsWidgetInParent_PathLength");
    struct
    {
        struct UWidget* InWidget;
        struct UWidget* Parent;
        int32_t OutPathLength;
        uint8_t ReturnValue;
    } Parms{};
    Parms.InWidget = (struct UWidget*)InWidget;
    Parms.Parent = (struct UWidget*)Parent;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    OutPathLength = Parms.OutPathLength;
    return Parms.ReturnValue;
}

uint8_t UGPUINavigationUtils::IsWidgetInParent(struct UWidget* InWidget, struct UWidget* Parent)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPUINavigationUtils", "IsWidgetInParent");
    struct
    {
        struct UWidget* InWidget;
        struct UWidget* Parent;
        uint8_t ReturnValue;
    } Parms{};
    Parms.InWidget = (struct UWidget*)InWidget;
    Parms.Parent = (struct UWidget*)Parent;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UGPUINavigationUtils::IsWidgetInFocusPath(uint32_t UserIndex, struct UWidget* Widget)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPUINavigationUtils", "IsWidgetInFocusPath");
    struct
    {
        uint32_t UserIndex;
        struct UWidget* Widget;
        uint8_t ReturnValue;
    } Parms{};
    Parms.UserIndex = (uint32_t)UserIndex;
    Parms.Widget = (struct UWidget*)Widget;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UGPUINavigationUtils::IsNavigationEnabled()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPUINavigationUtils", "IsNavigationEnabled");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UGPUINavigationUtils::IsDirectChildWidgetOf(struct UWidget* InWidget, struct UWidget* Parent)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPUINavigationUtils", "IsDirectChildWidgetOf");
    struct
    {
        struct UWidget* InWidget;
        struct UWidget* Parent;
        uint8_t ReturnValue;
    } Parms{};
    Parms.InWidget = (struct UWidget*)InWidget;
    Parms.Parent = (struct UWidget*)Parent;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UWidget* UGPUINavigationUtils::GetTopWidgetBelow(struct UWidget* From, struct UWidget* Below)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPUINavigationUtils", "GetTopWidgetBelow");
    struct
    {
        struct UWidget* From;
        struct UWidget* Below;
        struct UWidget* ReturnValue;
    } Parms{};
    Parms.From = (struct UWidget*)From;
    Parms.Below = (struct UWidget*)Below;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UWidget* UGPUINavigationUtils::GetParentWidgetByClassName(struct UWidget* From, struct FString ClassName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPUINavigationUtils", "GetParentWidgetByClassName");
    struct
    {
        struct UWidget* From;
        struct FString ClassName;
        struct UWidget* ReturnValue;
    } Parms{};
    Parms.From = (struct UWidget*)From;
    Parms.ClassName = (struct FString)ClassName;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

ENavigationGenesis UGPUINavigationUtils::GetNavigationGenesisFromNavigationEvent(const struct FNavigationEvent& Event)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPUINavigationUtils", "GetNavigationGenesisFromNavigationEvent");
    struct
    {
        struct FNavigationEvent Event;
        enum ENavigationGenesis ReturnValue;
    } Parms{};
    Parms.Event = (struct FNavigationEvent)Event;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

EUINavigation UGPUINavigationUtils::GetNatigationTypeFromNavigationEvent(const struct FNavigationEvent& Event)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPUINavigationUtils", "GetNatigationTypeFromNavigationEvent");
    struct
    {
        struct FNavigationEvent Event;
        enum EUINavigation ReturnValue;
    } Parms{};
    Parms.Event = (struct FNavigationEvent)Event;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct TArray<struct ULuaUIBaseView*> UGPUINavigationUtils::GetAllLuaParents(struct UWidget* InWidget)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPUINavigationUtils", "GetAllLuaParents");
    struct
    {
        struct UWidget* InWidget;
        struct TArray<struct ULuaUIBaseView*> ReturnValue;
    } Parms{};
    Parms.InWidget = (struct UWidget*)InWidget;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// IGPUIScreenAdaptInterface
void IGPUIScreenAdaptInterface::OverrideScreenAdaptType(EGPScreenAdaptType InType)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPUIScreenAdaptInterface", "OverrideScreenAdaptType");
    struct
    {
        enum EGPScreenAdaptType InType;
    } Parms{};
    Parms.InType = (enum EGPScreenAdaptType)InType;
    this->ProcessEvent(Func, &Parms);
}

// UGPUIScreenAdaptProvider
EGPScreenAdaptType UGPUIScreenAdaptProvider::UpdateGlobalScreenAdaptType()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPUIScreenAdaptProvider", "UpdateGlobalScreenAdaptType");
    struct
    {
        enum EGPScreenAdaptType ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UGPUIScreenAdaptProvider::SetUserOverrideType(EGPUserOverrideAdaptType InType)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPUIScreenAdaptProvider", "SetUserOverrideType");
    struct
    {
        enum EGPUserOverrideAdaptType InType;
    } Parms{};
    Parms.InType = (enum EGPUserOverrideAdaptType)InType;
    this->ProcessEvent(Func, &Parms);
}

uint8_t UGPUIScreenAdaptProvider::QueryScreenParams(struct FSimpleScreenParams& OutParams)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPUIScreenAdaptProvider", "QueryScreenParams");
    struct
    {
        struct FSimpleScreenParams OutParams;
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    OutParams = Parms.OutParams;
    return Parms.ReturnValue;
}

EGPUserOverrideAdaptType UGPUIScreenAdaptProvider::GetUserOverrideType()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPUIScreenAdaptProvider", "GetUserOverrideType");
    struct
    {
        enum EGPUserOverrideAdaptType ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UGPUIScreenAdaptProvider* UGPUIScreenAdaptProvider::Get()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPUIScreenAdaptProvider", "Get");
    struct
    {
        struct UGPUIScreenAdaptProvider* ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

} // namespace SDK
