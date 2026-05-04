#include "GPGameHud.hpp"
#include "Engine.hpp"
#include "GPUserInterfaceCore.hpp"
#include "GameCore.hpp"
#include "HudFramework.hpp"
#include "InputCore.hpp"
#include "SlateCore.hpp"
#include "UMG.hpp"
#include <cstring> // memcpy for ArrayDim>1 param marshalling

namespace SDK
{

// ---- UBaseUIView::* ----
void UBaseUIView::StopFadeOutAnimation()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BaseUIView", "StopFadeOutAnimation");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UBaseUIView::StopFadeInAnimation()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BaseUIView", "StopFadeInAnimation");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UBaseUIView::ShowSelf()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BaseUIView", "ShowSelf");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UBaseUIView::SetDynamicRoot(struct UWidget* root)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BaseUIView", "SetDynamicRoot");
    struct
    {
        struct UWidget* root;
    } Parms{};
    Parms.root = (struct UWidget*)root;
    this->ProcessEvent(Func, &Parms);
}

void UBaseUIView::RemoveScreenOCStaticMesh()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BaseUIView", "RemoveScreenOCStaticMesh");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UBaseUIView::RefreshFadeOutAnimation()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BaseUIView", "RefreshFadeOutAnimation");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UBaseUIView::PreInit()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BaseUIView", "PreInit");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

uint8_t UBaseUIView::PlayFadeOutAnimation()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BaseUIView", "PlayFadeOutAnimation");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UBaseUIView::PlayFadeInAnimation()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BaseUIView", "PlayFadeInAnimation");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UBaseUIView::OnFadeOutAnimationEnd()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BaseUIView", "OnFadeOutAnimationEnd");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UBaseUIView::OnFadeInAnimationEnd()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BaseUIView", "OnFadeInAnimationEnd");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UBaseUIView::OnAnimationFinished_Implementation(struct UWidgetAnimation* Animation)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BaseUIView", "OnAnimationFinished_Implementation");
    struct
    {
        struct UWidgetAnimation* Animation;
    } Parms{};
    Parms.Animation = (struct UWidgetAnimation*)Animation;
    this->ProcessEvent(Func, &Parms);
}

uint8_t UBaseUIView::IsEnableScreenOCStaticMeshWhenShow()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BaseUIView", "IsEnableScreenOCStaticMeshWhenShow");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UBaseUIView::InitGameHudState()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BaseUIView", "InitGameHudState");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UBaseUIView::Init()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BaseUIView", "Init");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UBaseUIView::HideSelf()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BaseUIView", "HideSelf");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

uint8_t UBaseUIView::HasFadeOutAnimation()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BaseUIView", "HasFadeOutAnimation");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UBaseUIView::HasFadeInAnimation()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BaseUIView", "HasFadeInAnimation");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UWidgetAnimation* UBaseUIView::GetUMGFadeOutAnim()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BaseUIView", "GetUMGFadeOutAnim");
    struct
    {
        struct UWidgetAnimation* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UWidgetAnimation* UBaseUIView::GetUMGFadeInAnim()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BaseUIView", "GetUMGFadeInAnim");
    struct
    {
        struct UWidgetAnimation* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UObject* UBaseUIView::GetPanelOwner()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BaseUIView", "GetPanelOwner");
    struct
    {
        struct UObject* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UWidget* UBaseUIView::GetDynamicRoot()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BaseUIView", "GetDynamicRoot");
    struct
    {
        struct UWidget* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct TArray<struct UWidgetAnimation*> UBaseUIView::GetAllAnimations()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BaseUIView", "GetAllAnimations");
    struct
    {
        struct TArray<struct UWidgetAnimation*> ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UBaseUIView::CheckPrepareShow()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BaseUIView", "CheckPrepareShow");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UBaseUIView::BP_OnShowWithWeaponEnable()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BaseUIView", "BP_OnShowWithWeaponEnable");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UBaseUIView::BP_OnShow()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BaseUIView", "BP_OnShow");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UBaseUIView::BP_OnInit()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BaseUIView", "BP_OnInit");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UBaseUIView::BP_OnHide()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BaseUIView", "BP_OnHide");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UBaseUIView::BP_InitVisibleGameHudState()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BaseUIView", "BP_InitVisibleGameHudState");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UBaseUIView::BP_InitInVisibleGameHudState()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BaseUIView", "BP_InitInVisibleGameHudState");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UBaseUIView::BP_InitAlwaysShowGameHUDState()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BaseUIView", "BP_InitAlwaysShowGameHUDState");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UBaseUIView::BP_BeginTouch(ETouchIndex FingerIndex, struct FVector Location)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BaseUIView", "BP_BeginTouch");
    struct
    {
        enum ETouchIndex FingerIndex;
        struct FVector Location;
    } Parms{};
    Parms.FingerIndex = (enum ETouchIndex)FingerIndex;
    Parms.Location = (struct FVector)Location;
    this->ProcessEvent(Func, &Parms);
}

void UBaseUIView::AddScreenOCStaticMesh()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BaseUIView", "AddScreenOCStaticMesh");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// ---- ABaseHUD::* ----
void ABaseHUD::UpdatePanelSwitcherHD()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BaseHUD", "UpdatePanelSwitcherHD");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ABaseHUD::StartInGame()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BaseHUD", "StartInGame");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ABaseHUD::ShowPanelWithFunctionName(struct FName PanelConfigName, struct UObject* PanelOwner, struct FString FunctionName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BaseHUD", "ShowPanelWithFunctionName");
    struct
    {
        struct FName PanelConfigName;
        struct UObject* PanelOwner;
        struct FString FunctionName;
    } Parms{};
    Parms.PanelConfigName = (struct FName)PanelConfigName;
    Parms.PanelOwner = (struct UObject*)PanelOwner;
    Parms.FunctionName = (struct FString)FunctionName;
    this->ProcessEvent(Func, &Parms);
}

void ABaseHUD::ShowPanelDelegate(struct FName PanelConfigName, struct UObject* PanelOwner, struct FMulticastInlineDelegate ViewShowDelegate)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BaseHUD", "ShowPanelDelegate");
    struct
    {
        struct FName PanelConfigName;
        struct UObject* PanelOwner;
        struct FMulticastInlineDelegate ViewShowDelegate;
    } Parms{};
    Parms.PanelConfigName = (struct FName)PanelConfigName;
    Parms.PanelOwner = (struct UObject*)PanelOwner;
    Parms.ViewShowDelegate = (struct FMulticastInlineDelegate)ViewShowDelegate;
    this->ProcessEvent(Func, &Parms);
}

void ABaseHUD::ShowPanel(struct FName PanelConfigName, struct UObject* PanelOwner)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BaseHUD", "ShowPanel");
    struct
    {
        struct FName PanelConfigName;
        struct UObject* PanelOwner;
    } Parms{};
    Parms.PanelConfigName = (struct FName)PanelConfigName;
    Parms.PanelOwner = (struct UObject*)PanelOwner;
    this->ProcessEvent(Func, &Parms);
}

void ABaseHUD::ShowLuaPanelWithSubUIList(struct FName PanelConfigName, struct UObject* PanelOwner, const struct TArray<struct FName>& SubUIs)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BaseHUD", "ShowLuaPanelWithSubUIList");
    struct
    {
        struct FName PanelConfigName;
        struct UObject* PanelOwner;
        struct TArray<struct FName> SubUIs;
    } Parms{};
    Parms.PanelConfigName = (struct FName)PanelConfigName;
    Parms.PanelOwner = (struct UObject*)PanelOwner;
    Parms.SubUIs = (struct TArray<struct FName>)SubUIs;
    this->ProcessEvent(Func, &Parms);
}

void ABaseHUD::ShowGamepad(uint8_t bShowGamepad)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BaseHUD", "ShowGamepad");
    struct
    {
        uint8_t bShowGamepad;
    } Parms{};
    Parms.bShowGamepad = (uint8_t)bShowGamepad;
    this->ProcessEvent(Func, &Parms);
}

void ABaseHUD::SetRootUISafeZone(float InSafeZoneValue)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BaseHUD", "SetRootUISafeZone");
    struct
    {
        float InSafeZoneValue;
    } Parms{};
    Parms.InSafeZoneValue = (float)InSafeZoneValue;
    this->ProcessEvent(Func, &Parms);
}

void ABaseHUD::ResetToDefaultLayer(struct FName PanelConfigName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BaseHUD", "ResetToDefaultLayer");
    struct
    {
        struct FName PanelConfigName;
    } Parms{};
    Parms.PanelConfigName = (struct FName)PanelConfigName;
    this->ProcessEvent(Func, &Parms);
}

uint8_t ABaseHUD::RemoveUI(struct UWidget* UIIns)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BaseHUD", "RemoveUI");
    struct
    {
        struct UWidget* UIIns;
        uint8_t ReturnValue;
    } Parms{};
    Parms.UIIns = (struct UWidget*)UIIns;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void ABaseHUD::RemoveHudOrState(struct FName Name, uint8_t bReleasePanel, uint8_t bForceRefreshHudState)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BaseHUD", "RemoveHudOrState");
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

void ABaseHUD::OnShowPanel(struct FName PanelConfigName, struct UObject* PanelOwner)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BaseHUD", "OnShowPanel");
    struct
    {
        struct FName PanelConfigName;
        struct UObject* PanelOwner;
    } Parms{};
    Parms.PanelConfigName = (struct FName)PanelConfigName;
    Parms.PanelOwner = (struct UObject*)PanelOwner;
    this->ProcessEvent(Func, &Parms);
}

void ABaseHUD::OnSetCinematicMode(uint8_t bCinematicMode)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BaseHUD", "OnSetCinematicMode");
    struct
    {
        uint8_t bCinematicMode;
    } Parms{};
    Parms.bCinematicMode = (uint8_t)bCinematicMode;
    this->ProcessEvent(Func, &Parms);
}

void ABaseHUD::OnSeamlessTravelEnd(uint8_t bReconnect)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BaseHUD", "OnSeamlessTravelEnd");
    struct
    {
        uint8_t bReconnect;
    } Parms{};
    Parms.bReconnect = (uint8_t)bReconnect;
    this->ProcessEvent(Func, &Parms);
}

void ABaseHUD::OnPreGarbageCollect()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BaseHUD", "OnPreGarbageCollect");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ABaseHUD::OnLoadingViewShutDown()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BaseHUD", "OnLoadingViewShutDown");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ABaseHUD::OnInitializeAsyncLoadingFinish()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BaseHUD", "OnInitializeAsyncLoadingFinish");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ABaseHUD::OnHudMutexChanged(struct FMutexQueueItem PreHolder, struct FMutexQueueItem CurHolder, EMutexChangeReason ChangeReason, struct UGPCommonHUDScreenMutex* MutexObj)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BaseHUD", "OnHudMutexChanged");
    struct
    {
        struct FMutexQueueItem PreHolder;
        struct FMutexQueueItem CurHolder;
        enum EMutexChangeReason ChangeReason;
        struct UGPCommonHUDScreenMutex* MutexObj;
    } Parms{};
    Parms.PreHolder = (struct FMutexQueueItem)PreHolder;
    Parms.CurHolder = (struct FMutexQueueItem)CurHolder;
    Parms.ChangeReason = (enum EMutexChangeReason)ChangeReason;
    Parms.MutexObj = (struct UGPCommonHUDScreenMutex*)MutexObj;
    this->ProcessEvent(Func, &Parms);
}

void ABaseHUD::OnHUDInitializeAsyncLoadCompelted(struct TArray<struct FName> BlockGameFlowViewNameArray)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BaseHUD", "OnHUDInitializeAsyncLoadCompelted");
    struct
    {
        struct TArray<struct FName> BlockGameFlowViewNameArray;
    } Parms{};
    Parms.BlockGameFlowViewNameArray = (struct TArray<struct FName>)BlockGameFlowViewNameArray;
    this->ProcessEvent(Func, &Parms);
}

void ABaseHUD::OnHidePanel(struct FName PanelConfigName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BaseHUD", "OnHidePanel");
    struct
    {
        struct FName PanelConfigName;
    } Parms{};
    Parms.PanelConfigName = (struct FName)PanelConfigName;
    this->ProcessEvent(Func, &Parms);
}

void ABaseHUD::OnGameHudStateChangedNew(struct UHudManager* InHudManager)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BaseHUD", "OnGameHudStateChangedNew");
    struct
    {
        struct UHudManager* InHudManager;
    } Parms{};
    Parms.InHudManager = (struct UHudManager*)InHudManager;
    this->ProcessEvent(Func, &Parms);
}

void ABaseHUD::OnGameHudStateChanged()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BaseHUD", "OnGameHudStateChanged");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ABaseHUD::OnDestroyPanel(struct FName PanelConfigName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BaseHUD", "OnDestroyPanel");
    struct
    {
        struct FName PanelConfigName;
    } Parms{};
    Parms.PanelConfigName = (struct FName)PanelConfigName;
    this->ProcessEvent(Func, &Parms);
}

void ABaseHUD::OnCreateNewFirstPlayerController(struct APlayerController* NewPlayerController)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BaseHUD", "OnCreateNewFirstPlayerController");
    struct
    {
        struct APlayerController* NewPlayerController;
    } Parms{};
    Parms.NewPlayerController = (struct APlayerController*)NewPlayerController;
    this->ProcessEvent(Func, &Parms);
}

void ABaseHUD::OnAsyncLoadAllViewClassCompleted(struct TArray<struct FSoftObjectPath> Assets, struct TArray<struct FName> ViewNames, struct FSoftObjectPath AssetPath)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BaseHUD", "OnAsyncLoadAllViewClassCompleted");
    struct
    {
        struct TArray<struct FSoftObjectPath> Assets;
        struct TArray<struct FName> ViewNames;
        struct FSoftObjectPath AssetPath;
    } Parms{};
    Parms.Assets = (struct TArray<struct FSoftObjectPath>)Assets;
    Parms.ViewNames = (struct TArray<struct FName>)ViewNames;
    Parms.AssetPath = (struct FSoftObjectPath)AssetPath;
    this->ProcessEvent(Func, &Parms);
}

void ABaseHUD::NotifyLuaHUDStartInGame()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BaseHUD", "NotifyLuaHUDStartInGame");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

uint8_t ABaseHUD::MoveToNewLayer(struct FName PanelConfigName, EHudLayer NewHudLayer, int32_t NewZOrderOffset)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BaseHUD", "MoveToNewLayer");
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

uint8_t ABaseHUD::MovePanelToLayer(struct FName PanelConfigName, ELayerZorder NewLayerZOrder)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BaseHUD", "MovePanelToLayer");
    struct
    {
        struct FName PanelConfigName;
        enum ELayerZorder NewLayerZOrder;
        uint8_t ReturnValue;
    } Parms{};
    Parms.PanelConfigName = (struct FName)PanelConfigName;
    Parms.NewLayerZOrder = (enum ELayerZorder)NewLayerZOrder;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t ABaseHUD::IsUseNewHudFramework()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BaseHUD", "IsUseNewHudFramework");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t ABaseHUD::IsInitializeFinished()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BaseHUD", "IsInitializeFinished");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void ABaseHUD::Initialize()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BaseHUD", "Initialize");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ABaseHUD::HidePanel(struct FName PanelConfigName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BaseHUD", "HidePanel");
    struct
    {
        struct FName PanelConfigName;
    } Parms{};
    Parms.PanelConfigName = (struct FName)PanelConfigName;
    this->ProcessEvent(Func, &Parms);
}

struct TArray<struct UUserWidget*> ABaseHUD::GetPanel_NewHudFrameWork(struct FName PanelConfigName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BaseHUD", "GetPanel_NewHudFrameWork");
    struct
    {
        struct FName PanelConfigName;
        struct TArray<struct UUserWidget*> ReturnValue;
    } Parms{};
    Parms.PanelConfigName = (struct FName)PanelConfigName;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct TArray<struct UBaseUIView*> ABaseHUD::GetPanel(struct FName PanelConfigName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BaseHUD", "GetPanel");
    struct
    {
        struct FName PanelConfigName;
        struct TArray<struct UBaseUIView*> ReturnValue;
    } Parms{};
    Parms.PanelConfigName = (struct FName)PanelConfigName;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct TArray<struct FName> ABaseHUD::GetNotLoadedBlockGameFlowHUDNames()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BaseHUD", "GetNotLoadedBlockGameFlowHUDNames");
    struct
    {
        struct TArray<struct FName> ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FName ABaseHUD::GetLuaPanelDesc(struct FName LuaPanelName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BaseHUD", "GetLuaPanelDesc");
    struct
    {
        struct FName LuaPanelName;
        struct FName ReturnValue;
    } Parms{};
    Parms.LuaPanelName = (struct FName)LuaPanelName;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct ULuaUIBaseView* ABaseHUD::GetLuaPanel(struct FName PanelConfigName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BaseHUD", "GetLuaPanel");
    struct
    {
        struct FName PanelConfigName;
        struct ULuaUIBaseView* ReturnValue;
    } Parms{};
    Parms.PanelConfigName = (struct FName)PanelConfigName;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct AActor* ABaseHUD::GetLocalFocusActor()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BaseHUD", "GetLocalFocusActor");
    struct
    {
        struct AActor* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UHudManager* ABaseHUD::GetHudMananger(struct UObject* WorldContext, EHUDType HUDType)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("BaseHUD", "GetHudMananger");
    struct
    {
        struct UObject* WorldContext;
        enum EHUDType HUDType;
        struct UHudManager* ReturnValue;
    } Parms{};
    Parms.WorldContext = (struct UObject*)WorldContext;
    Parms.HUDType = (enum EHUDType)HUDType;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct ABaseHUD* ABaseHUD::GetHUD(struct UObject* WorldContext, EHUDType HUDType)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("BaseHUD", "GetHUD");
    struct
    {
        struct UObject* WorldContext;
        enum EHUDType HUDType;
        struct ABaseHUD* ReturnValue;
    } Parms{};
    Parms.WorldContext = (struct UObject*)WorldContext;
    Parms.HUDType = (enum EHUDType)HUDType;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct TArray<struct FName> ABaseHUD::GetAllLuaPanelName()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BaseHUD", "GetAllLuaPanelName");
    struct
    {
        struct TArray<struct FName> ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void ABaseHUD::GenerateVisiableConfig()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BaseHUD", "GenerateVisiableConfig");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ABaseHUD::DestroyPanel(struct FName PanelConfigName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BaseHUD", "DestroyPanel");
    struct
    {
        struct FName PanelConfigName;
    } Parms{};
    Parms.PanelConfigName = (struct FName)PanelConfigName;
    this->ProcessEvent(Func, &Parms);
}

void ABaseHUD::DeletePanels(const struct FName& UIDataTableType)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BaseHUD", "DeletePanels");
    struct
    {
        struct FName UIDataTableType;
    } Parms{};
    Parms.UIDataTableType = (struct FName)UIDataTableType;
    this->ProcessEvent(Func, &Parms);
}

void ABaseHUD::CreatePanels(const struct FName& UIDataTableType, struct FString RuleOnlyLuaHudTableName, struct FString RuleOnlyLuaBaseHudTableName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BaseHUD", "CreatePanels");
    struct
    {
        struct FName UIDataTableType;
        struct FString RuleOnlyLuaHudTableName;
        struct FString RuleOnlyLuaBaseHudTableName;
    } Parms{};
    Parms.UIDataTableType = (struct FName)UIDataTableType;
    Parms.RuleOnlyLuaHudTableName = (struct FString)RuleOnlyLuaHudTableName;
    Parms.RuleOnlyLuaBaseHudTableName = (struct FString)RuleOnlyLuaBaseHudTableName;
    this->ProcessEvent(Func, &Parms);
}

void ABaseHUD::CreatePanel(struct FName PanelConfigName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BaseHUD", "CreatePanel");
    struct
    {
        struct FName PanelConfigName;
    } Parms{};
    Parms.PanelConfigName = (struct FName)PanelConfigName;
    this->ProcessEvent(Func, &Parms);
}

void ABaseHUD::CreateLuaPanelWithSubUIList(struct FName PanelConfigName, struct UObject* PanelOwner, const struct TArray<struct FName>& SubUIs)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BaseHUD", "CreateLuaPanelWithSubUIList");
    struct
    {
        struct FName PanelConfigName;
        struct UObject* PanelOwner;
        struct TArray<struct FName> SubUIs;
    } Parms{};
    Parms.PanelConfigName = (struct FName)PanelConfigName;
    Parms.PanelOwner = (struct UObject*)PanelOwner;
    Parms.SubUIs = (struct TArray<struct FName>)SubUIs;
    this->ProcessEvent(Func, &Parms);
}

void ABaseHUD::CallBaseUIViewShowDelegate(struct FString FunctionName, struct UBaseUIView* View)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BaseHUD", "CallBaseUIViewShowDelegate");
    struct
    {
        struct FString FunctionName;
        struct UBaseUIView* View;
    } Parms{};
    Parms.FunctionName = (struct FString)FunctionName;
    Parms.View = (struct UBaseUIView*)View;
    this->ProcessEvent(Func, &Parms);
}

void ABaseHUD::AsyncLoadPanelDelegate(struct FName PanelConfigName, struct UObject* PanelOwner, struct FMulticastInlineDelegate LoadedDelegate)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BaseHUD", "AsyncLoadPanelDelegate");
    struct
    {
        struct FName PanelConfigName;
        struct UObject* PanelOwner;
        struct FMulticastInlineDelegate LoadedDelegate;
    } Parms{};
    Parms.PanelConfigName = (struct FName)PanelConfigName;
    Parms.PanelOwner = (struct UObject*)PanelOwner;
    Parms.LoadedDelegate = (struct FMulticastInlineDelegate)LoadedDelegate;
    this->ProcessEvent(Func, &Parms);
}

void ABaseHUD::AsyncLoadPanel(struct FName PanelConfigName, struct UObject* PanelOwner)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BaseHUD", "AsyncLoadPanel");
    struct
    {
        struct FName PanelConfigName;
        struct UObject* PanelOwner;
    } Parms{};
    Parms.PanelConfigName = (struct FName)PanelConfigName;
    Parms.PanelOwner = (struct UObject*)PanelOwner;
    this->ProcessEvent(Func, &Parms);
}

uint8_t ABaseHUD::AddUI(struct UWidget* UIIns, uint8_t bIsInSafeZone, int32_t ZOrder)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BaseHUD", "AddUI");
    struct
    {
        struct UWidget* UIIns;
        uint8_t bIsInSafeZone;
        int32_t ZOrder;
        uint8_t ReturnValue;
    } Parms{};
    Parms.UIIns = (struct UWidget*)UIIns;
    Parms.bIsInSafeZone = (uint8_t)bIsInSafeZone;
    Parms.ZOrder = (int32_t)ZOrder;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t ABaseHUD::AddToRoot(struct UWidget* UIIns, int32_t UILayer, int32_t ZOrder)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BaseHUD", "AddToRoot");
    struct
    {
        struct UWidget* UIIns;
        int32_t UILayer;
        int32_t ZOrder;
        uint8_t ReturnValue;
    } Parms{};
    Parms.UIIns = (struct UWidget*)UIIns;
    Parms.UILayer = (int32_t)UILayer;
    Parms.ZOrder = (int32_t)ZOrder;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void ABaseHUD::AddHudOrState(struct FName Name, struct UObject* InHudOwner, uint8_t bForceRefreshHudState)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BaseHUD", "AddHudOrState");
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

void ABaseHUD::AcumInitializeAsyncLoadingProgress(struct FName LoadedViewName, int32_t AccNum)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BaseHUD", "AcumInitializeAsyncLoadingProgress");
    struct
    {
        struct FName LoadedViewName;
        int32_t AccNum;
    } Parms{};
    Parms.LoadedViewName = (struct FName)LoadedViewName;
    Parms.AccNum = (int32_t)AccNum;
    this->ProcessEvent(Func, &Parms);
}

// ---- UBaseUIController::* ----
void UBaseUIController::StartInGame()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BaseUIController", "StartInGame");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UBaseUIController::OnStartInGame()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BaseUIController", "OnStartInGame");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UBaseUIController::OnInit()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BaseUIController", "OnInit");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

uint8_t UBaseUIController::IsNeverSleep()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BaseUIController", "IsNeverSleep");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UBaseUIController::Init(struct ABaseHUD* HUD)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BaseUIController", "Init");
    struct
    {
        struct ABaseHUD* HUD;
    } Parms{};
    Parms.HUD = (struct ABaseHUD*)HUD;
    this->ProcessEvent(Func, &Parms);
}

struct APlayerController* UBaseUIController::GetPlayerOwner()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BaseUIController", "GetPlayerOwner");
    struct
    {
        struct APlayerController* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// ---- UBatchUIView::* ----
void UBatchUIView::SetRootUISafeZone(float InSafeZoneValue)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BatchUIView", "SetRootUISafeZone");
    struct
    {
        float InSafeZoneValue;
    } Parms{};
    Parms.InSafeZoneValue = (float)InSafeZoneValue;
    this->ProcessEvent(Func, &Parms);
}

uint8_t UBatchUIView::RemoveUI(struct UWidget* UIIns)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BatchUIView", "RemoveUI");
    struct
    {
        struct UWidget* UIIns;
        uint8_t ReturnValue;
    } Parms{};
    Parms.UIIns = (struct UWidget*)UIIns;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UBatchUIView::AddUI(struct UWidget* UIIns, uint8_t bIsInSafeZone, int32_t ZOrder)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BatchUIView", "AddUI");
    struct
    {
        struct UWidget* UIIns;
        uint8_t bIsInSafeZone;
        int32_t ZOrder;
        uint8_t ReturnValue;
    } Parms{};
    Parms.UIIns = (struct UWidget*)UIIns;
    Parms.bIsInSafeZone = (uint8_t)bIsInSafeZone;
    Parms.ZOrder = (int32_t)ZOrder;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// ---- UCommonHUDView::* ----
void UCommonHUDView::OnHUDStateChanged()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("CommonHUDView", "OnHUDStateChanged");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UCommonHUDView::BPTickFromCpp(float DateTime)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("CommonHUDView", "BPTickFromCpp");
    struct
    {
        float DateTime;
    } Parms{};
    Parms.DateTime = (float)DateTime;
    this->ProcessEvent(Func, &Parms);
}

// ---- UGPBaseHudView::* ----
void UGPBaseHudView::ShowSelf()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPBaseHudView", "ShowSelf");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UGPBaseHudView::RemoveScreenOCStaticMesh()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPBaseHudView", "RemoveScreenOCStaticMesh");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

uint8_t UGPBaseHudView::IsEnableScreenOCStaticMeshWhenShow()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPBaseHudView", "IsEnableScreenOCStaticMeshWhenShow");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UGPBaseHudView::HideSelf(uint8_t bReleasePanel)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPBaseHudView", "HideSelf");
    struct
    {
        uint8_t bReleasePanel;
    } Parms{};
    Parms.bReleasePanel = (uint8_t)bReleasePanel;
    this->ProcessEvent(Func, &Parms);
}

void UGPBaseHudView::AddScreenOCStaticMesh()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPBaseHudView", "AddScreenOCStaticMesh");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// ---- UGPCommonHUDScreenMutex::* ----
void UGPCommonHUDScreenMutex::TickMutex(float DeltaTime)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPCommonHUDScreenMutex", "TickMutex");
    struct
    {
        float DeltaTime;
    } Parms{};
    Parms.DeltaTime = (float)DeltaTime;
    this->ProcessEvent(Func, &Parms);
}

void UGPCommonHUDScreenMutex::RequestMutex(struct FName RegisteredName, struct UUserWidget* Widget)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPCommonHUDScreenMutex", "RequestMutex");
    struct
    {
        struct FName RegisteredName;
        struct UUserWidget* Widget;
    } Parms{};
    Parms.RegisteredName = (struct FName)RegisteredName;
    Parms.Widget = (struct UUserWidget*)Widget;
    this->ProcessEvent(Func, &Parms);
}

void UGPCommonHUDScreenMutex::ReleaseMutex_Inner(EMutexChangeReason ChangeReason)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPCommonHUDScreenMutex", "ReleaseMutex_Inner");
    struct
    {
        enum EMutexChangeReason ChangeReason;
    } Parms{};
    Parms.ChangeReason = (enum EMutexChangeReason)ChangeReason;
    this->ProcessEvent(Func, &Parms);
}

void UGPCommonHUDScreenMutex::ReleaseMutex(struct FName RegisteredName, struct UUserWidget* Widget)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPCommonHUDScreenMutex", "ReleaseMutex");
    struct
    {
        struct FName RegisteredName;
        struct UUserWidget* Widget;
    } Parms{};
    Parms.RegisteredName = (struct FName)RegisteredName;
    Parms.Widget = (struct UUserWidget*)Widget;
    this->ProcessEvent(Func, &Parms);
}

uint8_t UGPCommonHUDScreenMutex::PushMutexWaitingQueue(struct FMutexQueueItem InQueueItem)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPCommonHUDScreenMutex", "PushMutexWaitingQueue");
    struct
    {
        struct FMutexQueueItem InQueueItem;
        uint8_t ReturnValue;
    } Parms{};
    Parms.InQueueItem = (struct FMutexQueueItem)InQueueItem;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UGPCommonHUDScreenMutex::PopMutexWaitingQueue(struct FMutexQueueItem& OutQueueItem)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPCommonHUDScreenMutex", "PopMutexWaitingQueue");
    struct
    {
        struct FMutexQueueItem OutQueueItem;
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    OutQueueItem = Parms.OutQueueItem;
    return Parms.ReturnValue;
}

uint8_t UGPCommonHUDScreenMutex::IsCurrentHolder(struct UBaseMutexUIView* MutexUIView)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPCommonHUDScreenMutex", "IsCurrentHolder");
    struct
    {
        struct UBaseMutexUIView* MutexUIView;
        uint8_t ReturnValue;
    } Parms{};
    Parms.MutexUIView = (struct UBaseMutexUIView*)MutexUIView;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UGPCommonHUDScreenMutex::InitMutex(struct FName InMutexName, struct UDataTableSystemManagerBase* InMutexRegisterTableManager)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPCommonHUDScreenMutex", "InitMutex");
    struct
    {
        struct FName InMutexName;
        struct UDataTableSystemManagerBase* InMutexRegisterTableManager;
    } Parms{};
    Parms.InMutexName = (struct FName)InMutexName;
    Parms.InMutexRegisterTableManager = (struct UDataTableSystemManagerBase*)InMutexRegisterTableManager;
    this->ProcessEvent(Func, &Parms);
}

float UGPCommonHUDScreenMutex::GetWaitingMutexSeconds(struct FName RegisteredName, struct UUserWidget* Widget)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPCommonHUDScreenMutex", "GetWaitingMutexSeconds");
    struct
    {
        struct FName RegisteredName;
        struct UUserWidget* Widget;
        float ReturnValue;
    } Parms{};
    Parms.RegisteredName = (struct FName)RegisteredName;
    Parms.Widget = (struct UUserWidget*)Widget;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UGPCommonHUDScreenMutex::ForceRefresh()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPCommonHUDScreenMutex", "ForceRefresh");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

uint8_t UGPCommonHUDScreenMutex::Contains(struct UBaseMutexUIView* MutexUIView)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPCommonHUDScreenMutex", "Contains");
    struct
    {
        struct UBaseMutexUIView* MutexUIView;
        uint8_t ReturnValue;
    } Parms{};
    Parms.MutexUIView = (struct UBaseMutexUIView*)MutexUIView;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UGPCommonHUDScreenMutex::AddTailMutexWaitingQueue(struct FMutexQueueItem InQueueItem)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPCommonHUDScreenMutex", "AddTailMutexWaitingQueue");
    struct
    {
        struct FMutexQueueItem InQueueItem;
        uint8_t ReturnValue;
    } Parms{};
    Parms.InQueueItem = (struct FMutexQueueItem)InQueueItem;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// ---- UGPGameHudDelegates::* ----
struct UGPGameHudDelegates* UGPGameHudDelegates::Get(struct UObject* GameContextObject)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPGameHudDelegates", "Get");
    struct
    {
        struct UObject* GameContextObject;
        struct UGPGameHudDelegates* ReturnValue;
    } Parms{};
    Parms.GameContextObject = (struct UObject*)GameContextObject;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// ---- UGPMobileCustomLayoutBPLibrary::* ----
void UGPMobileCustomLayoutBPLibrary::FetchAllCustomLayoutAppearance(struct UObject* WorldContextObject)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPMobileCustomLayoutBPLibrary", "FetchAllCustomLayoutAppearance");
    struct
    {
        struct UObject* WorldContextObject;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

// ---- UGPParkourHudViewController::* ----
void UGPParkourHudViewController::OnStartParkour(float InParkourMaxTime, int32_t InTotalCheckPointsNum)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPParkourHudViewController", "OnStartParkour");
    struct
    {
        float InParkourMaxTime;
        int32_t InTotalCheckPointsNum;
    } Parms{};
    Parms.InParkourMaxTime = (float)InParkourMaxTime;
    Parms.InTotalCheckPointsNum = (int32_t)InTotalCheckPointsNum;
    this->ProcessEvent(Func, &Parms);
}

void UGPParkourHudViewController::OnReadyTimerCountdown()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPParkourHudViewController", "OnReadyTimerCountdown");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UGPParkourHudViewController::OnLeaveReadyCheckPoint(uint8_t bFalseStart)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPParkourHudViewController", "OnLeaveReadyCheckPoint");
    struct
    {
        uint8_t bFalseStart;
    } Parms{};
    Parms.bFalseStart = (uint8_t)bFalseStart;
    this->ProcessEvent(Func, &Parms);
}

void UGPParkourHudViewController::OnFinishParkour(float UsedTime, uint8_t bCompleted)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPParkourHudViewController", "OnFinishParkour");
    struct
    {
        float UsedTime;
        uint8_t bCompleted;
    } Parms{};
    Parms.UsedTime = (float)UsedTime;
    Parms.bCompleted = (uint8_t)bCompleted;
    this->ProcessEvent(Func, &Parms);
}

void UGPParkourHudViewController::OnArriveNewCheckPoint(int32_t CheckPointIndex, int32_t InFirstCheckPointWaitTime, float CurUsedTime)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPParkourHudViewController", "OnArriveNewCheckPoint");
    struct
    {
        int32_t CheckPointIndex;
        int32_t InFirstCheckPointWaitTime;
        float CurUsedTime;
    } Parms{};
    Parms.CheckPointIndex = (int32_t)CheckPointIndex;
    Parms.InFirstCheckPointWaitTime = (int32_t)InFirstCheckPointWaitTime;
    Parms.CurUsedTime = (float)CurUsedTime;
    this->ProcessEvent(Func, &Parms);
}

// ---- UGPParkourRankListItem::* ----
void UGPParkourRankListItem::BP_SetData(struct FParkourRankDataItem DataItem)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPParkourRankListItem", "BP_SetData");
    struct
    {
        struct FParkourRankDataItem DataItem;
    } Parms{};
    Parms.DataItem = (struct FParkourRankDataItem)DataItem;
    this->ProcessEvent(Func, &Parms);
}

void UGPParkourRankListItem::BP_PlayAnim(int32_t AnimType)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPParkourRankListItem", "BP_PlayAnim");
    struct
    {
        int32_t AnimType;
    } Parms{};
    Parms.AnimType = (int32_t)AnimType;
    this->ProcessEvent(Func, &Parms);
}

// ---- UGPParkourRankViewController::* ----
void UGPParkourRankViewController::OnResquestRankData()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPParkourRankViewController", "OnResquestRankData");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UGPParkourRankViewController::OnResquestFriendData()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPParkourRankViewController", "OnResquestFriendData");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// ---- UGPSwitchableBaseHudController::* ----
void UGPSwitchableBaseHudController::OnHudVersionChanged(int32_t OldVer, int32_t NewVer)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPSwitchableBaseHudController", "OnHudVersionChanged");
    struct
    {
        int32_t OldVer;
        int32_t NewVer;
    } Parms{};
    Parms.OldVer = (int32_t)OldVer;
    Parms.NewVer = (int32_t)NewVer;
    this->ProcessEvent(Func, &Parms);
}

struct FSoftClassPath UGPSwitchableBaseHudController::GetCurrentViewClass()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPSwitchableBaseHudController", "GetCurrentViewClass");
    struct
    {
        struct FSoftClassPath ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FSwitchableHudConfigRow UGPSwitchableBaseHudController::GetCurrentHudConfig()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPSwitchableBaseHudController", "GetCurrentHudConfig");
    struct
    {
        struct FSwitchableHudConfigRow ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// ---- UHUDMutexManager::* ----
void UHUDMutexManager::TickMutex(float DeltaTime)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HUDMutexManager", "TickMutex");
    struct
    {
        float DeltaTime;
    } Parms{};
    Parms.DeltaTime = (float)DeltaTime;
    this->ProcessEvent(Func, &Parms);
}

void UHUDMutexManager::RequestMutex(struct UBaseMutexUIView* BaseMutexUIView)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HUDMutexManager", "RequestMutex");
    struct
    {
        struct UBaseMutexUIView* BaseMutexUIView;
    } Parms{};
    Parms.BaseMutexUIView = (struct UBaseMutexUIView*)BaseMutexUIView;
    this->ProcessEvent(Func, &Parms);
}

void UHUDMutexManager::ReleaseMutex(struct UBaseMutexUIView* BaseMutexUIView)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HUDMutexManager", "ReleaseMutex");
    struct
    {
        struct UBaseMutexUIView* BaseMutexUIView;
    } Parms{};
    Parms.BaseMutexUIView = (struct UBaseMutexUIView*)BaseMutexUIView;
    this->ProcessEvent(Func, &Parms);
}

uint8_t UHUDMutexManager::IsVisible(struct UBaseUIView* UIView)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HUDMutexManager", "IsVisible");
    struct
    {
        struct UBaseUIView* UIView;
        uint8_t ReturnValue;
    } Parms{};
    Parms.UIView = (struct UBaseUIView*)UIView;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UHUDMutexManager* UHUDMutexManager::Get(struct UObject* WorldContext)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("HUDMutexManager", "Get");
    struct
    {
        struct UObject* WorldContext;
        struct UHUDMutexManager* ReturnValue;
    } Parms{};
    Parms.WorldContext = (struct UObject*)WorldContext;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UHUDMutexManager::ForceRefreshMutex()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HUDMutexManager", "ForceRefreshMutex");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// ---- UHUDStateManager::* ----
void UHUDStateManager::RemoveState(EGameHUDSate State, uint8_t bForceRefresh)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HUDStateManager", "RemoveState");
    struct
    {
        enum EGameHUDSate State;
        uint8_t bForceRefresh;
    } Parms{};
    Parms.State = (enum EGameHUDSate)State;
    Parms.bForceRefresh = (uint8_t)bForceRefresh;
    this->ProcessEvent(Func, &Parms);
}

uint8_t UHUDStateManager::IsVisible_Lua(struct ULuaUIHudBaseView* UIView)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HUDStateManager", "IsVisible_Lua");
    struct
    {
        struct ULuaUIHudBaseView* UIView;
        uint8_t ReturnValue;
    } Parms{};
    Parms.UIView = (struct ULuaUIHudBaseView*)UIView;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UHUDStateManager::HasState(EGameHUDSate State)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HUDStateManager", "HasState");
    struct
    {
        enum EGameHUDSate State;
        uint8_t ReturnValue;
    } Parms{};
    Parms.State = (enum EGameHUDSate)State;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UHUDStateManager::HasAllState(const struct TArray<EGameHUDSate>& States)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HUDStateManager", "HasAllState");
    struct
    {
        struct TArray<EGameHUDSate> States;
        uint8_t ReturnValue;
    } Parms{};
    Parms.States = (struct TArray<EGameHUDSate>)States;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct TArray<int32_t> UHUDStateManager::GetStateArray()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HUDStateManager", "GetStateArray");
    struct
    {
        struct TArray<int32_t> ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UHUDStateManager* UHUDStateManager::Get(struct UObject* WorldContext)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("HUDStateManager", "Get");
    struct
    {
        struct UObject* WorldContext;
        struct UHUDStateManager* ReturnValue;
    } Parms{};
    Parms.WorldContext = (struct UObject*)WorldContext;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UHUDStateManager::AddState(EGameHUDSate State, uint8_t bForceRefresh)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HUDStateManager", "AddState");
    struct
    {
        enum EGameHUDSate State;
        uint8_t bForceRefresh;
    } Parms{};
    Parms.State = (enum EGameHUDSate)State;
    Parms.bForceRefresh = (uint8_t)bForceRefresh;
    this->ProcessEvent(Func, &Parms);
}

// ---- ULuaHudView::* ----
void ULuaHudView::StopLocalFocus()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LuaHudView", "StopLocalFocus");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ULuaHudView::StartLocalFocus(struct AActor* TargetActor)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LuaHudView", "StartLocalFocus");
    struct
    {
        struct AActor* TargetActor;
    } Parms{};
    Parms.TargetActor = (struct AActor*)TargetActor;
    this->ProcessEvent(Func, &Parms);
}

void ULuaHudView::ShowSelf()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LuaHudView", "ShowSelf");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ULuaHudView::Show_Lua()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LuaHudView", "Show_Lua");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ULuaHudView::SetSafeZone(uint8_t bInSafeZone)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LuaHudView", "SetSafeZone");
    struct
    {
        uint8_t bInSafeZone;
    } Parms{};
    Parms.bInSafeZone = (uint8_t)bInSafeZone;
    this->ProcessEvent(Func, &Parms);
}

void ULuaHudView::SetNeedInvalidationRoot(uint8_t bNeedRoot)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LuaHudView", "SetNeedInvalidationRoot");
    struct
    {
        uint8_t bNeedRoot;
    } Parms{};
    Parms.bNeedRoot = (uint8_t)bNeedRoot;
    this->ProcessEvent(Func, &Parms);
}

void ULuaHudView::OnStopLocalFocus()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LuaHudView", "OnStopLocalFocus");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ULuaHudView::OnStartLocalFocus(struct AActor* TargetActor)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LuaHudView", "OnStartLocalFocus");
    struct
    {
        struct AActor* TargetActor;
    } Parms{};
    Parms.TargetActor = (struct AActor*)TargetActor;
    this->ProcessEvent(Func, &Parms);
}

void ULuaHudView::OnInit()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LuaHudView", "OnInit");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

uint8_t ULuaHudView::IsSafeZone()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LuaHudView", "IsSafeZone");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t ULuaHudView::IsInShowState_Lua()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LuaHudView", "IsInShowState_Lua");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t ULuaHudView::IsInShowState()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LuaHudView", "IsInShowState");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void ULuaHudView::HideSelf()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LuaHudView", "HideSelf");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ULuaHudView::Hide_Lua()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LuaHudView", "Hide_Lua");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

struct APlayerState* ULuaHudView::GetPlayerState()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LuaHudView", "GetPlayerState");
    struct
    {
        struct APlayerState* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t ULuaHudView::GetNeedInvalidationRoot()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LuaHudView", "GetNeedInvalidationRoot");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void ULuaHudView::DoTick(float DeltaTime)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LuaHudView", "DoTick");
    struct
    {
        float DeltaTime;
    } Parms{};
    Parms.DeltaTime = (float)DeltaTime;
    this->ProcessEvent(Func, &Parms);
}

void ULuaHudView::Destroy_Lua()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LuaHudView", "Destroy_Lua");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ULuaHudView::BP_OnShow()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LuaHudView", "BP_OnShow");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ULuaHudView::BP_OnInit()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LuaHudView", "BP_OnInit");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ULuaHudView::BP_OnHide()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LuaHudView", "BP_OnHide");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ULuaHudView::BP_OnDestroy()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LuaHudView", "BP_OnDestroy");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ULuaHudView::BeforeOnStopLocalFocus()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LuaHudView", "BeforeOnStopLocalFocus");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ULuaHudView::BeforeOnStartLocalFocus(struct AActor* TargetActor)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LuaHudView", "BeforeOnStartLocalFocus");
    struct
    {
        struct AActor* TargetActor;
    } Parms{};
    Parms.TargetActor = (struct AActor*)TargetActor;
    this->ProcessEvent(Func, &Parms);
}

// ---- ULuaUIHudBaseView::* ----
void ULuaUIHudBaseView::Update(float Delta)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LuaUIHudBaseView", "Update");
    struct
    {
        float Delta;
    } Parms{};
    Parms.Delta = (float)Delta;
    this->ProcessEvent(Func, &Parms);
}

void ULuaUIHudBaseView::StopLocalFocus()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LuaUIHudBaseView", "StopLocalFocus");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ULuaUIHudBaseView::StartLocalFocus(struct AActor* TargetActor)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LuaUIHudBaseView", "StartLocalFocus");
    struct
    {
        struct AActor* TargetActor;
    } Parms{};
    Parms.TargetActor = (struct AActor*)TargetActor;
    this->ProcessEvent(Func, &Parms);
}

void ULuaUIHudBaseView::ShowSelf()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LuaUIHudBaseView", "ShowSelf");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ULuaUIHudBaseView::Show_Lua()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LuaUIHudBaseView", "Show_Lua");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ULuaUIHudBaseView::Show()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LuaUIHudBaseView", "Show");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ULuaUIHudBaseView::SetSafeZone(uint8_t bInSafeZone)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LuaUIHudBaseView", "SetSafeZone");
    struct
    {
        uint8_t bInSafeZone;
    } Parms{};
    Parms.bInSafeZone = (uint8_t)bInSafeZone;
    this->ProcessEvent(Func, &Parms);
}

void ULuaUIHudBaseView::SetNeedInvalidationRoot(uint8_t bNeedRoot)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LuaUIHudBaseView", "SetNeedInvalidationRoot");
    struct
    {
        uint8_t bNeedRoot;
    } Parms{};
    Parms.bNeedRoot = (uint8_t)bNeedRoot;
    this->ProcessEvent(Func, &Parms);
}

void ULuaUIHudBaseView::SetDynamicRoot(struct UWidget* root)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LuaUIHudBaseView", "SetDynamicRoot");
    struct
    {
        struct UWidget* root;
    } Parms{};
    Parms.root = (struct UWidget*)root;
    this->ProcessEvent(Func, &Parms);
}

void ULuaUIHudBaseView::RemoveStateFromVisibleGameHudState(EGameHUDSate State)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LuaUIHudBaseView", "RemoveStateFromVisibleGameHudState");
    struct
    {
        enum EGameHUDSate State;
    } Parms{};
    Parms.State = (enum EGameHUDSate)State;
    this->ProcessEvent(Func, &Parms);
}

void ULuaUIHudBaseView::RemoveStateFromInVisibleGameHudState(EGameHUDSate State)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LuaUIHudBaseView", "RemoveStateFromInVisibleGameHudState");
    struct
    {
        enum EGameHUDSate State;
    } Parms{};
    Parms.State = (enum EGameHUDSate)State;
    this->ProcessEvent(Func, &Parms);
}

void ULuaUIHudBaseView::RemoveStateFromAlwaysShowGameHudState(EGameHUDSate State)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LuaUIHudBaseView", "RemoveStateFromAlwaysShowGameHudState");
    struct
    {
        enum EGameHUDSate State;
    } Parms{};
    Parms.State = (enum EGameHUDSate)State;
    this->ProcessEvent(Func, &Parms);
}

void ULuaUIHudBaseView::OnStopLocalFocus()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LuaUIHudBaseView", "OnStopLocalFocus");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ULuaUIHudBaseView::OnStartLocalFocus(struct AActor* TargetActor)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LuaUIHudBaseView", "OnStartLocalFocus");
    struct
    {
        struct AActor* TargetActor;
    } Parms{};
    Parms.TargetActor = (struct AActor*)TargetActor;
    this->ProcessEvent(Func, &Parms);
}

void ULuaUIHudBaseView::OnShow()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LuaUIHudBaseView", "OnShow");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ULuaUIHudBaseView::OnPreOpen()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LuaUIHudBaseView", "OnPreOpen");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ULuaUIHudBaseView::OnOpen()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LuaUIHudBaseView", "OnOpen");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ULuaUIHudBaseView::OnHide()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LuaUIHudBaseView", "OnHide");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ULuaUIHudBaseView::OnGameHudStateChanged()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LuaUIHudBaseView", "OnGameHudStateChanged");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ULuaUIHudBaseView::OnClose()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LuaUIHudBaseView", "OnClose");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

uint8_t ULuaUIHudBaseView::IsSafeZone()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LuaUIHudBaseView", "IsSafeZone");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t ULuaUIHudBaseView::IsInShowState_Lua()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LuaUIHudBaseView", "IsInShowState_Lua");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t ULuaUIHudBaseView::IsInShowState()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LuaUIHudBaseView", "IsInShowState");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void ULuaUIHudBaseView::InitGameHudState()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LuaUIHudBaseView", "InitGameHudState");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ULuaUIHudBaseView::HideSelf()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LuaUIHudBaseView", "HideSelf");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ULuaUIHudBaseView::Hide_Lua()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LuaUIHudBaseView", "Hide_Lua");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ULuaUIHudBaseView::Hide()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LuaUIHudBaseView", "Hide");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

struct APlayerState* ULuaUIHudBaseView::GetPlayerState()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LuaUIHudBaseView", "GetPlayerState");
    struct
    {
        struct APlayerState* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t ULuaUIHudBaseView::GetNeedInvalidationRoot()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LuaUIHudBaseView", "GetNeedInvalidationRoot");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct AGameStateBase* ULuaUIHudBaseView::GetGameState()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LuaUIHudBaseView", "GetGameState");
    struct
    {
        struct AGameStateBase* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UWidget* ULuaUIHudBaseView::GetDynamicRoot()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LuaUIHudBaseView", "GetDynamicRoot");
    struct
    {
        struct UWidget* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void ULuaUIHudBaseView::BeforeOnStopLocalFocus()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LuaUIHudBaseView", "BeforeOnStopLocalFocus");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ULuaUIHudBaseView::BeforeOnStartLocalFocus(struct AActor* TargetActor)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LuaUIHudBaseView", "BeforeOnStartLocalFocus");
    struct
    {
        struct AActor* TargetActor;
    } Parms{};
    Parms.TargetActor = (struct AActor*)TargetActor;
    this->ProcessEvent(Func, &Parms);
}

void ULuaUIHudBaseView::AddStateToVisibleGameHudState(EGameHUDSate State)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LuaUIHudBaseView", "AddStateToVisibleGameHudState");
    struct
    {
        enum EGameHUDSate State;
    } Parms{};
    Parms.State = (enum EGameHUDSate)State;
    this->ProcessEvent(Func, &Parms);
}

void ULuaUIHudBaseView::AddStateToInVisibleGameHudState(EGameHUDSate State)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LuaUIHudBaseView", "AddStateToInVisibleGameHudState");
    struct
    {
        enum EGameHUDSate State;
    } Parms{};
    Parms.State = (enum EGameHUDSate)State;
    this->ProcessEvent(Func, &Parms);
}

void ULuaUIHudBaseView::AddStateToAlwaysShowGameHudState(EGameHUDSate State)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LuaUIHudBaseView", "AddStateToAlwaysShowGameHudState");
    struct
    {
        enum EGameHUDSate State;
    } Parms{};
    Parms.State = (enum EGameHUDSate)State;
    this->ProcessEvent(Func, &Parms);
}

// ---- UMobileDraggableButton::* ----
uint8_t UMobileDraggableButton::IsDragging()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MobileDraggableButton", "IsDragging");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UMobileDraggableButton::FetchCustomLayoutAppearance()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MobileDraggableButton", "FetchCustomLayoutAppearance");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UMobileDraggableButton::CompositionWidgetPosition(const struct FVector2D& DeltaMove, const struct FGeometry& MyGeometry)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MobileDraggableButton", "CompositionWidgetPosition");
    struct
    {
        struct FVector2D DeltaMove;
        struct FGeometry MyGeometry;
    } Parms{};
    Parms.DeltaMove = (struct FVector2D)DeltaMove;
    Parms.MyGeometry = (struct FGeometry)MyGeometry;
    this->ProcessEvent(Func, &Parms);
}

// ---- UMobileGamePad::* ----
void UMobileGamePad::OnSetCinematicMode(uint8_t bCinematicMode)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MobileGamePad", "OnSetCinematicMode");
    struct
    {
        uint8_t bCinematicMode;
    } Parms{};
    Parms.bCinematicMode = (uint8_t)bCinematicMode;
    this->ProcessEvent(Func, &Parms);
}

void UMobileGamePad::OnFinishCreateButtonViews()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MobileGamePad", "OnFinishCreateButtonViews");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UMobileGamePad::OnCreateNewFirstPlayerController(struct APlayerController* NewPlayerController)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MobileGamePad", "OnCreateNewFirstPlayerController");
    struct
    {
        struct APlayerController* NewPlayerController;
    } Parms{};
    Parms.NewPlayerController = (struct APlayerController*)NewPlayerController;
    this->ProcessEvent(Func, &Parms);
}

struct UMobileGamePadView* UMobileGamePad::FindViewByClass(struct UMobileGamePadView* ViewClass)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MobileGamePad", "FindViewByClass");
    struct
    {
        struct UMobileGamePadView* ViewClass;
        struct UMobileGamePadView* ReturnValue;
    } Parms{};
    Parms.ViewClass = (struct UMobileGamePadView*)ViewClass;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// ---- UMobileGamePadView::* ----
void UMobileGamePadView::OpenGMMainView4Lua()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MobileGamePadView", "OpenGMMainView4Lua");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UMobileGamePadView::OnCreateNewFirstPlayerController(struct APlayerController* NewPlayerController)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MobileGamePadView", "OnCreateNewFirstPlayerController");
    struct
    {
        struct APlayerController* NewPlayerController;
    } Parms{};
    Parms.NewPlayerController = (struct APlayerController*)NewPlayerController;
    this->ProcessEvent(Func, &Parms);
}

// ---- URootUIView::* ----
void URootUIView::SetRootUISafeZone(float SafeZoneValue)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("RootUIView", "SetRootUISafeZone");
    struct
    {
        float SafeZoneValue;
    } Parms{};
    Parms.SafeZoneValue = (float)SafeZoneValue;
    this->ProcessEvent(Func, &Parms);
}

uint8_t URootUIView::RemoveUI(struct UWidget* UIIns)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("RootUIView", "RemoveUI");
    struct
    {
        struct UWidget* UIIns;
        uint8_t ReturnValue;
    } Parms{};
    Parms.UIIns = (struct UWidget*)UIIns;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t URootUIView::AddUI(struct UWidget* UIIns, uint8_t bIsInSafeZone, int32_t ZOrder)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("RootUIView", "AddUI");
    struct
    {
        struct UWidget* UIIns;
        uint8_t bIsInSafeZone;
        int32_t ZOrder;
        uint8_t ReturnValue;
    } Parms{};
    Parms.UIIns = (struct UWidget*)UIIns;
    Parms.bIsInSafeZone = (uint8_t)bIsInSafeZone;
    Parms.ZOrder = (int32_t)ZOrder;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

} // namespace SDK
