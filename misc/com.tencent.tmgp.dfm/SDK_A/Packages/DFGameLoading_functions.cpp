#include "DFGameLoading.hpp"
#include "DFLoading.hpp"
#include "DFMGameplay.hpp"
#include "Engine.hpp"
#include "GPGameInput.hpp"
#include "GPGameLoading.hpp"
#include "GameCore.hpp"
#include <cstring> // memcpy for ArrayDim>1 param marshalling

namespace SDK
{

// ---- UGPFlow_OpenTargetLevel::* ----
void UGPFlow_OpenTargetLevel::OnPostLoadMap(struct UWorld* InWorld)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPFlow_OpenTargetLevel", "OnPostLoadMap");
    struct
    {
        struct UWorld* InWorld;
    } Parms{};
    Parms.InWorld = (struct UWorld*)InWorld;
    this->ProcessEvent(Func, &Parms);
}

// ---- UGPFlow_PreloadDataTable::* ----
void UGPFlow_PreloadDataTable::OnPreloadFinish(const struct FDataTableUseSceneValue& UseSceneValue, int32_t LoadedNum)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPFlow_PreloadDataTable", "OnPreloadFinish");
    struct
    {
        struct FDataTableUseSceneValue UseSceneValue;
        int32_t LoadedNum;
    } Parms{};
    Parms.UseSceneValue = (struct FDataTableUseSceneValue)UseSceneValue;
    Parms.LoadedNum = (int32_t)LoadedNum;
    this->ProcessEvent(Func, &Parms);
}

void UGPFlow_PreloadDataTable::OnAttributeGlobalPreloadFinish(uint8_t bFinish)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPFlow_PreloadDataTable", "OnAttributeGlobalPreloadFinish");
    struct
    {
        uint8_t bFinish;
    } Parms{};
    Parms.bFinish = (uint8_t)bFinish;
    this->ProcessEvent(Func, &Parms);
}

// ---- UGPFlow_PreloadGamePlayData::* ----
void UGPFlow_PreloadGamePlayData::OnPreloadTimeOut()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPFlow_PreloadGamePlayData", "OnPreloadTimeOut");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UGPFlow_PreloadGamePlayData::CheckPreloadProgress()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPFlow_PreloadGamePlayData", "CheckPreloadProgress");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// ---- UGPFlow_PreloadHUD::* ----
void UGPFlow_PreloadHUD::OnUIAsyncLoadPercentage(float Progress, struct TArray<struct FName> names)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPFlow_PreloadHUD", "OnUIAsyncLoadPercentage");
    struct
    {
        float Progress;
        struct TArray<struct FName> names;
    } Parms{};
    Parms.Progress = (float)Progress;
    Parms.names = (struct TArray<struct FName>)names;
    this->ProcessEvent(Func, &Parms);
}

void UGPFlow_PreloadHUD::OnForceFinish()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPFlow_PreloadHUD", "OnForceFinish");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// ---- UGPFlow_PrepareStartupBP::* ----
void UGPFlow_PrepareStartupBP::OnPreloadFinished(struct TArray<struct FSoftObjectPath> SoftObjectPaths)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPFlow_PrepareStartupBP", "OnPreloadFinished");
    struct
    {
        struct TArray<struct FSoftObjectPath> SoftObjectPaths;
    } Parms{};
    Parms.SoftObjectPaths = (struct TArray<struct FSoftObjectPath>)SoftObjectPaths;
    this->ProcessEvent(Func, &Parms);
}

// ---- UGPFlow_ShowLoadingView::* ----
void UGPFlow_ShowLoadingView::ProcessPreload()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPFlow_ShowLoadingView", "ProcessPreload");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UGPFlow_ShowLoadingView::OnAssetLoaded(struct TArray<struct FSoftObjectPath> AssetPathList)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPFlow_ShowLoadingView", "OnAssetLoaded");
    struct
    {
        struct TArray<struct FSoftObjectPath> AssetPathList;
    } Parms{};
    Parms.AssetPathList = (struct TArray<struct FSoftObjectPath>)AssetPathList;
    this->ProcessEvent(Func, &Parms);
}

void UGPFlow_ShowLoadingView::GatherPreloadAsset(const struct FSoftObjectPath& InAssetPath)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPFlow_ShowLoadingView", "GatherPreloadAsset");
    struct
    {
        struct FSoftObjectPath InAssetPath;
    } Parms{};
    Parms.InAssetPath = (struct FSoftObjectPath)InAssetPath;
    this->ProcessEvent(Func, &Parms);
}

void UGPFlow_ShowLoadingView::GatherLoadingViewAssetPath(struct FName InLoadingConfigName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPFlow_ShowLoadingView", "GatherLoadingViewAssetPath");
    struct
    {
        struct FName InLoadingConfigName;
    } Parms{};
    Parms.InLoadingConfigName = (struct FName)InLoadingConfigName;
    this->ProcessEvent(Func, &Parms);
}

// ---- UGPFlow_ShutDownLoadingView::* ----
void UGPFlow_ShutDownLoadingView::OnLoadingViewSimulateTimeEnd()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPFlow_ShutDownLoadingView", "OnLoadingViewSimulateTimeEnd");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// ---- UGPFlow_StreamingLevelWatch::* ----
void UGPFlow_StreamingLevelWatch::OnStreamingLevelLoadPercentage(int32_t Progress)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPFlow_StreamingLevelWatch", "OnStreamingLevelLoadPercentage");
    struct
    {
        int32_t Progress;
    } Parms{};
    Parms.Progress = (int32_t)Progress;
    this->ProcessEvent(Func, &Parms);
}

void UGPFlow_StreamingLevelWatch::FinishFlow()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPFlow_StreamingLevelWatch", "FinishFlow");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// ---- UGPFlow_WaitingForGamePlayStateReady::* ----
void UGPFlow_WaitingForGamePlayStateReady::OnPreMatchStageFlowHasActorBegunPlay()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPFlow_WaitingForGamePlayStateReady", "OnPreMatchStageFlowHasActorBegunPlay");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UGPFlow_WaitingForGamePlayStateReady::OnGameStateChanged(uint8_t bIsFightStage)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPFlow_WaitingForGamePlayStateReady", "OnGameStateChanged");
    struct
    {
        uint8_t bIsFightStage;
    } Parms{};
    Parms.bIsFightStage = (uint8_t)bIsFightStage;
    this->ProcessEvent(Func, &Parms);
}

uint8_t UGPFlow_WaitingForGamePlayStateReady::CheckGamePlayStateReady()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPFlow_WaitingForGamePlayStateReady", "CheckGamePlayStateReady");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// ---- UGPFlow_WaitingForGameStatePrepared::* ----
void UGPFlow_WaitingForGameStatePrepared::TargetMapPostLoadingProcess()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPFlow_WaitingForGameStatePrepared", "TargetMapPostLoadingProcess");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

uint8_t UGPFlow_WaitingForGameStatePrepared::SOL_CheckTargetMapAllowedPostLoading()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPFlow_WaitingForGameStatePrepared", "SOL_CheckTargetMapAllowedPostLoading");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UGPFlow_WaitingForGameStatePrepared::OnWarfareLoadingSkipped()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPFlow_WaitingForGameStatePrepared", "OnWarfareLoadingSkipped");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UGPFlow_WaitingForGameStatePrepared::OnSOLMatchRealStart()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPFlow_WaitingForGameStatePrepared", "OnSOLMatchRealStart");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UGPFlow_WaitingForGameStatePrepared::OnGameStateChanged(uint8_t bIsFightState)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPFlow_WaitingForGameStatePrepared", "OnGameStateChanged");
    struct
    {
        uint8_t bIsFightState;
    } Parms{};
    Parms.bIsFightState = (uint8_t)bIsFightState;
    this->ProcessEvent(Func, &Parms);
}

uint8_t UGPFlow_WaitingForGameStatePrepared::MP_CheckCurStateReady()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPFlow_WaitingForGameStatePrepared", "MP_CheckCurStateReady");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// ---- UGPGameLoadingBusinessProxy::* ----
void UGPGameLoadingBusinessProxy::RemoveListeners()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPGameLoadingBusinessProxy", "RemoveListeners");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UGPGameLoadingBusinessProxy::ProcessAPM()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPGameLoadingBusinessProxy", "ProcessAPM");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UGPGameLoadingBusinessProxy::OnPostConnectDS(struct UNetConnection* InNetConnection)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPGameLoadingBusinessProxy", "OnPostConnectDS");
    struct
    {
        struct UNetConnection* InNetConnection;
    } Parms{};
    Parms.InNetConnection = (struct UNetConnection*)InNetConnection;
    this->ProcessEvent(Func, &Parms);
}

void UGPGameLoadingBusinessProxy::OnLoadingViewClosed()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPGameLoadingBusinessProxy", "OnLoadingViewClosed");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UGPGameLoadingBusinessProxy::OnLoadingRecordMainDataOnFinished(EDFLoadingFlowStepResult Result, struct FString Reason)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPGameLoadingBusinessProxy", "OnLoadingRecordMainDataOnFinished");
    struct
    {
        enum EDFLoadingFlowStepResult Result;
        struct FString Reason;
    } Parms{};
    Parms.Result = (enum EDFLoadingFlowStepResult)Result;
    Parms.Reason = (struct FString)Reason;
    this->ProcessEvent(Func, &Parms);
}

void UGPGameLoadingBusinessProxy::OnLoadingRecordMainDataOnBeginning(struct FString InLevelUrl)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPGameLoadingBusinessProxy", "OnLoadingRecordMainDataOnBeginning");
    struct
    {
        struct FString InLevelUrl;
    } Parms{};
    Parms.InLevelUrl = (struct FString)InLevelUrl;
    this->ProcessEvent(Func, &Parms);
}

void UGPGameLoadingBusinessProxy::OnClientConnectDSResultNotify(uint8_t bSucc, struct UNetConnection* Conn)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPGameLoadingBusinessProxy", "OnClientConnectDSResultNotify");
    struct
    {
        uint8_t bSucc;
        struct UNetConnection* Conn;
    } Parms{};
    Parms.bSucc = (uint8_t)bSucc;
    Parms.Conn = (struct UNetConnection*)Conn;
    this->ProcessEvent(Func, &Parms);
}

void UGPGameLoadingBusinessProxy::InitListeners()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPGameLoadingBusinessProxy", "InitListeners");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// ---- UGPGameLoadingUtil::* ----
struct FBattleFieldDynamicLayoutRow UGPGameLoadingUtil::GetDynamicLayoutConfigByLayoutId(int32_t InLayoutId)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPGameLoadingUtil", "GetDynamicLayoutConfigByLayoutId");
    struct
    {
        int32_t InLayoutId;
        struct FBattleFieldDynamicLayoutRow ReturnValue;
    } Parms{};
    Parms.InLayoutId = (int32_t)InLayoutId;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// ---- ULoadingView_Default::* ----
void ULoadingView_Default::UpdateTips()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LoadingView_Default", "UpdateTips");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ULoadingView_Default::UpdateProgressInfo(float Percentage)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LoadingView_Default", "UpdateProgressInfo");
    struct
    {
        float Percentage;
    } Parms{};
    Parms.Percentage = (float)Percentage;
    this->ProcessEvent(Func, &Parms);
}

void ULoadingView_Default::UpdateProgress(float InProgress)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LoadingView_Default", "UpdateProgress");
    struct
    {
        float InProgress;
    } Parms{};
    Parms.InProgress = (float)InProgress;
    this->ProcessEvent(Func, &Parms);
}

void ULoadingView_Default::TickTipsStatus(float InDeltaTime)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LoadingView_Default", "TickTipsStatus");
    struct
    {
        float InDeltaTime;
    } Parms{};
    Parms.InDeltaTime = (float)InDeltaTime;
    this->ProcessEvent(Func, &Parms);
}

uint8_t ULoadingView_Default::ShouldShowGuideInfo()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LoadingView_Default", "ShouldShowGuideInfo");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void ULoadingView_Default::SetUpTipsData(struct UGPGameLoadingContext* InContext)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LoadingView_Default", "SetUpTipsData");
    struct
    {
        struct UGPGameLoadingContext* InContext;
    } Parms{};
    Parms.InContext = (struct UGPGameLoadingContext*)InContext;
    this->ProcessEvent(Func, &Parms);
}

void ULoadingView_Default::SetUpModeRule(struct UGPGameLoadingContext* InContext)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LoadingView_Default", "SetUpModeRule");
    struct
    {
        struct UGPGameLoadingContext* InContext;
    } Parms{};
    Parms.InContext = (struct UGPGameLoadingContext*)InContext;
    this->ProcessEvent(Func, &Parms);
}

void ULoadingView_Default::SetUpModeName(struct UGPGameLoadingContext* InContext)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LoadingView_Default", "SetUpModeName");
    struct
    {
        struct UGPGameLoadingContext* InContext;
    } Parms{};
    Parms.InContext = (struct UGPGameLoadingContext*)InContext;
    this->ProcessEvent(Func, &Parms);
}

void ULoadingView_Default::SetUpMapName(struct UGPGameLoadingContext* InContext)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LoadingView_Default", "SetUpMapName");
    struct
    {
        struct UGPGameLoadingContext* InContext;
    } Parms{};
    Parms.InContext = (struct UGPGameLoadingContext*)InContext;
    this->ProcessEvent(Func, &Parms);
}

void ULoadingView_Default::SetUpLoadingImage(struct UGPGameLoadingContext* InContext)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LoadingView_Default", "SetUpLoadingImage");
    struct
    {
        struct UGPGameLoadingContext* InContext;
    } Parms{};
    Parms.InContext = (struct UGPGameLoadingContext*)InContext;
    this->ProcessEvent(Func, &Parms);
}

void ULoadingView_Default::SetUpCampType(struct UGPGameLoadingContext* InContext)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LoadingView_Default", "SetUpCampType");
    struct
    {
        struct UGPGameLoadingContext* InContext;
    } Parms{};
    Parms.InContext = (struct UGPGameLoadingContext*)InContext;
    this->ProcessEvent(Func, &Parms);
}

uint8_t ULoadingView_Default::QuickSimulateLeftPercent()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LoadingView_Default", "QuickSimulateLeftPercent");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void ULoadingView_Default::OnLoadingViewRemoved()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LoadingView_Default", "OnLoadingViewRemoved");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ULoadingView_Default::OnLoadingTextureLoadCompleted(const struct FSoftObjectPath& TextureAssetPath)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LoadingView_Default", "OnLoadingTextureLoadCompleted");
    struct
    {
        struct FSoftObjectPath TextureAssetPath;
    } Parms{};
    Parms.TextureAssetPath = (struct FSoftObjectPath)TextureAssetPath;
    this->ProcessEvent(Func, &Parms);
}

void ULoadingView_Default::InitDynamicLayoutDisplay()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LoadingView_Default", "InitDynamicLayoutDisplay");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

float ULoadingView_Default::GetSimulateTime()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LoadingView_Default", "GetSimulateTime");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void ULoadingView_Default::BP_UpdateGuideInfo(uint8_t bShouldShowGuide)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LoadingView_Default", "BP_UpdateGuideInfo");
    struct
    {
        uint8_t bShouldShowGuide;
    } Parms{};
    Parms.bShouldShowGuide = (uint8_t)bShouldShowGuide;
    this->ProcessEvent(Func, &Parms);
}

void ULoadingView_Default::BP_UpdateCampImage(int32_t InCampType)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LoadingView_Default", "BP_UpdateCampImage");
    struct
    {
        int32_t InCampType;
    } Parms{};
    Parms.InCampType = (int32_t)InCampType;
    this->ProcessEvent(Func, &Parms);
}

// ---- ULoadingView_SOL::* ----
void ULoadingView_SOL::UpdateProgressInfo(float Percentage)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LoadingView_SOL", "UpdateProgressInfo");
    struct
    {
        float Percentage;
    } Parms{};
    Parms.Percentage = (float)Percentage;
    this->ProcessEvent(Func, &Parms);
}

void ULoadingView_SOL::SetUpLoadingData(struct UGPGameLoadingContext* InContext)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LoadingView_SOL", "SetUpLoadingData");
    struct
    {
        struct UGPGameLoadingContext* InContext;
    } Parms{};
    Parms.InContext = (struct UGPGameLoadingContext*)InContext;
    this->ProcessEvent(Func, &Parms);
}

void ULoadingView_SOL::OnLoadingViewRemoved()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LoadingView_SOL", "OnLoadingViewRemoved");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// ---- ULoadingView_Warfare::* ----
void ULoadingView_Warfare::OnSkipButtonClicked()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LoadingView_Warfare", "OnSkipButtonClicked");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ULoadingView_Warfare::OnLoadingSucceed(EDFLoadingFlowStepResult Result, struct FString Reason)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LoadingView_Warfare", "OnLoadingSucceed");
    struct
    {
        enum EDFLoadingFlowStepResult Result;
        struct FString Reason;
    } Parms{};
    Parms.Result = (enum EDFLoadingFlowStepResult)Result;
    Parms.Reason = (struct FString)Reason;
    this->ProcessEvent(Func, &Parms);
}

void ULoadingView_Warfare::OnInputTypeChanged(EGPInputType InputType)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LoadingView_Warfare", "OnInputTypeChanged");
    struct
    {
        enum EGPInputType InputType;
    } Parms{};
    Parms.InputType = (enum EGPInputType)InputType;
    this->ProcessEvent(Func, &Parms);
}

void ULoadingView_Warfare::OnEnterTargetLevel()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LoadingView_Warfare", "OnEnterTargetLevel");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ULoadingView_Warfare::OnDelayCloseTransitionLoading()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LoadingView_Warfare", "OnDelayCloseTransitionLoading");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ULoadingView_Warfare::InitDynamicLayoutDisplay()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LoadingView_Warfare", "InitDynamicLayoutDisplay");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ULoadingView_Warfare::BP_ToggleDefaultSkipTipsGamepad(uint8_t bIsOpen, struct FName DisplayActionName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LoadingView_Warfare", "BP_ToggleDefaultSkipTipsGamepad");
    struct
    {
        uint8_t bIsOpen;
        struct FName DisplayActionName;
    } Parms{};
    Parms.bIsOpen = (uint8_t)bIsOpen;
    Parms.DisplayActionName = (struct FName)DisplayActionName;
    this->ProcessEvent(Func, &Parms);
}

void ULoadingView_Warfare::BP_PlayTitleAnim()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LoadingView_Warfare", "BP_PlayTitleAnim");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

} // namespace SDK
