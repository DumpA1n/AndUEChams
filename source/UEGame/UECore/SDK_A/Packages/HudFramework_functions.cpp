#include "HudFramework.hpp"
#include "Engine.hpp"
#include "UMG.hpp"
#include <cstring> // memcpy for ArrayDim>1 param marshalling

namespace SDK
{

// UBaseHudController
uint8_t UBaseHudController::Show(struct UObject* InHudOwner, uint8_t bShowByState)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BaseHudController", "Show");
    struct
    {
        struct UObject* InHudOwner;
        uint8_t bShowByState;
        uint8_t ReturnValue;
    } Parms{};
    Parms.InHudOwner = (struct UObject*)InHudOwner;
    Parms.bShowByState = (uint8_t)bShowByState;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UBaseHudController::MoveToNewLayer(EHudLayer NewHudLayer, int32_t NewZOrderOffset)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BaseHudController", "MoveToNewLayer");
    struct
    {
        enum EHudLayer NewHudLayer;
        int32_t NewZOrderOffset;
        uint8_t ReturnValue;
    } Parms{};
    Parms.NewHudLayer = (enum EHudLayer)NewHudLayer;
    Parms.NewZOrderOffset = (int32_t)NewZOrderOffset;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UObject* UBaseHudController::GetView()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BaseHudController", "GetView");
    struct
    {
        struct UObject* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UBaseHudView
void UBaseHudView::StopFadeOutAnimation()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BaseHudView", "StopFadeOutAnimation");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UBaseHudView::StopFadeInAnimation()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BaseHudView", "StopFadeInAnimation");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UBaseHudView::RefreshFadeOutAnimation()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BaseHudView", "RefreshFadeOutAnimation");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

uint8_t UBaseHudView::PlayFadeOutAnimation()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BaseHudView", "PlayFadeOutAnimation");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UBaseHudView::PlayFadeInAnimation()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BaseHudView", "PlayFadeInAnimation");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UBaseHudView::OnFadeOutAnimationEnd()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BaseHudView", "OnFadeOutAnimationEnd");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UBaseHudView::OnFadeInAnimationEnd()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BaseHudView", "OnFadeInAnimationEnd");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UBaseHudView::OnAnimationFinished_Implementation(struct UWidgetAnimation* Animation)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BaseHudView", "OnAnimationFinished_Implementation");
    struct
    {
        struct UWidgetAnimation* Animation;
    } Parms{};
    Parms.Animation = (struct UWidgetAnimation*)Animation;
    this->ProcessEvent(Func, &Parms);
}

uint8_t UBaseHudView::HasFadeOutAnimation()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BaseHudView", "HasFadeOutAnimation");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UBaseHudView::HasFadeInAnimation()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BaseHudView", "HasFadeInAnimation");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UWidgetAnimation* UBaseHudView::GetUMGFadeOutAnim()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BaseHudView", "GetUMGFadeOutAnim");
    struct
    {
        struct UWidgetAnimation* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UWidgetAnimation* UBaseHudView::GetUMGFadeInAnim()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BaseHudView", "GetUMGFadeInAnim");
    struct
    {
        struct UWidgetAnimation* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct TArray<struct UWidgetAnimation*> UBaseHudView::GetAllAnimations()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BaseHudView", "GetAllAnimations");
    struct
    {
        struct TArray<struct UWidgetAnimation*> ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UBaseHudView::BP_OnShow()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BaseHudView", "BP_OnShow");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UBaseHudView::BP_OnPostHide()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BaseHudView", "BP_OnPostHide");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UBaseHudView::BP_OnInit()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BaseHudView", "BP_OnInit");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UBaseHudView::BP_OnHide()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BaseHudView", "BP_OnHide");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UBaseHudView::BP_OnDestroy()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BaseHudView", "BP_OnDestroy");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UBaseHudView::AddToRoot(struct UWidget* UIIns, int32_t ZOrder, EHudLayer InHudLayer)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BaseHudView", "AddToRoot");
    struct
    {
        struct UWidget* UIIns;
        int32_t ZOrder;
        enum EHudLayer InHudLayer;
    } Parms{};
    Parms.UIIns = (struct UWidget*)UIIns;
    Parms.ZOrder = (int32_t)ZOrder;
    Parms.InHudLayer = (enum EHudLayer)InHudLayer;
    this->ProcessEvent(Func, &Parms);
}

// UHudDebugWidget
void UHudDebugWidget::OnTab4Clicked()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HudDebugWidget", "OnTab4Clicked");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UHudDebugWidget::OnTab3Clicked()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HudDebugWidget", "OnTab3Clicked");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UHudDebugWidget::OnTab2Clicked()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HudDebugWidget", "OnTab2Clicked");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UHudDebugWidget::OnTab1Clicked()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HudDebugWidget", "OnTab1Clicked");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UHudDebugWidget::OnRefreshClicked()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HudDebugWidget", "OnRefreshClicked");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UHudDebugWidget::OnCloseClicked()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HudDebugWidget", "OnCloseClicked");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// UHudEntity
void UHudEntity::OnAsyncLoadViewClassAssetCompleted(const struct FSoftObjectPath& AssetPath, struct FName ViewName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HudEntity", "OnAsyncLoadViewClassAssetCompleted");
    struct
    {
        struct FSoftObjectPath AssetPath;
        struct FName ViewName;
    } Parms{};
    Parms.AssetPath = (struct FSoftObjectPath)AssetPath;
    Parms.ViewName = (struct FName)ViewName;
    this->ProcessEvent(Func, &Parms);
}

// UHudManager
void UHudManager::ResetToDefaultLayer(struct FName PanelConfigName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HudManager", "ResetToDefaultLayer");
    struct
    {
        struct FName PanelConfigName;
    } Parms{};
    Parms.PanelConfigName = (struct FName)PanelConfigName;
    this->ProcessEvent(Func, &Parms);
}

void UHudManager::RemoveHudOrState(struct FName Name, uint8_t bReleasePanel, uint8_t bForceRefreshHudState)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HudManager", "RemoveHudOrState");
    struct
    {
        struct FName Name;
        uint8_t bReleasePanel;
        uint8_t bForceRefreshHudState;
    } Parms{};
    Parms.Name = (struct FName)Name;
    Parms.bReleasePanel = (uint8_t)bReleasePanel;
    Parms.bForceRefreshHudState = (uint8_t)bForceRefreshHudState;
    this->ProcessEvent(Func, &Parms);
}

void UHudManager::NotifyHudVersionChanged(int32_t OldVer, int32_t NewVer)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HudManager", "NotifyHudVersionChanged");
    struct
    {
        int32_t OldVer;
        int32_t NewVer;
    } Parms{};
    Parms.OldVer = (int32_t)OldVer;
    Parms.NewVer = (int32_t)NewVer;
    this->ProcessEvent(Func, &Parms);
}

uint8_t UHudManager::MoveToNewLayer(struct FName PanelConfigName, EHudLayer NewHudLayer, int32_t NewZOrderOffset)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HudManager", "MoveToNewLayer");
    struct
    {
        struct FName PanelConfigName;
        enum EHudLayer NewHudLayer;
        int32_t NewZOrderOffset;
        uint8_t ReturnValue;
    } Parms{};
    Parms.PanelConfigName = (struct FName)PanelConfigName;
    Parms.NewHudLayer = (enum EHudLayer)NewHudLayer;
    Parms.NewZOrderOffset = (int32_t)NewZOrderOffset;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UHudManager::LowMemoryWarningNtf()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HudManager", "LowMemoryWarningNtf");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

uint8_t UHudManager::IsHudVisible(struct FName ViewName, uint8_t bIncludeOutAnim)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HudManager", "IsHudVisible");
    struct
    {
        struct FName ViewName;
        uint8_t bIncludeOutAnim;
        uint8_t ReturnValue;
    } Parms{};
    Parms.ViewName = (struct FName)ViewName;
    Parms.bIncludeOutAnim = (uint8_t)bIncludeOutAnim;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UHudManager::HasState(struct FName State)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HudManager", "HasState");
    struct
    {
        struct FName State;
        uint8_t ReturnValue;
    } Parms{};
    Parms.State = (struct FName)State;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UDataTable* UHudManager::GetSwitchableHudTable()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HudManager", "GetSwitchableHudTable");
    struct
    {
        struct UDataTable* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UBaseHudController* UHudManager::GetHudControllerByName(struct FName ViewName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HudManager", "GetHudControllerByName");
    struct
    {
        struct FName ViewName;
        struct UBaseHudController* ReturnValue;
    } Parms{};
    Parms.ViewName = (struct FName)ViewName;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FName UHudManager::GetCurrentBaseLayout()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HudManager", "GetCurrentBaseLayout");
    struct
    {
        struct FName ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UHudManager::DestroyHud(struct FName Name)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HudManager", "DestroyHud");
    struct
    {
        struct FName Name;
    } Parms{};
    Parms.Name = (struct FName)Name;
    this->ProcessEvent(Func, &Parms);
}

void UHudManager::AddHudOrState(struct FName Name, struct UObject* InHudOwner, uint8_t bForceRefreshHudState)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HudManager", "AddHudOrState");
    struct
    {
        struct FName Name;
        struct UObject* InHudOwner;
        uint8_t bForceRefreshHudState;
    } Parms{};
    Parms.Name = (struct FName)Name;
    Parms.InHudOwner = (struct UObject*)InHudOwner;
    Parms.bForceRefreshHudState = (uint8_t)bForceRefreshHudState;
    this->ProcessEvent(Func, &Parms);
}

} // namespace SDK
