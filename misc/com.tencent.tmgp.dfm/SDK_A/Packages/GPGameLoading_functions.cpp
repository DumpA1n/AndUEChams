#include "GPGameLoading.hpp"
#include "DFLoading.hpp"
#include "Engine.hpp"
#include "HudFramework.hpp"
#include <cstring> // memcpy for ArrayDim>1 param marshalling

namespace SDK
{

// ---- UGPGameLoadingContext::* ----
void UGPGameLoadingContext::UpdateShouldShowGuideInfo(uint8_t InShouldShowGuideInfo)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPGameLoadingContext", "UpdateShouldShowGuideInfo");
    struct
    {
        uint8_t InShouldShowGuideInfo;
    } Parms{};
    Parms.InShouldShowGuideInfo = (uint8_t)InShouldShowGuideInfo;
    this->ProcessEvent(Func, &Parms);
}

void UGPGameLoadingContext::UpdatePlayerLevel(int32_t InPlayerLevel)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPGameLoadingContext", "UpdatePlayerLevel");
    struct
    {
        int32_t InPlayerLevel;
    } Parms{};
    Parms.InPlayerLevel = (int32_t)InPlayerLevel;
    this->ProcessEvent(Func, &Parms);
}

void UGPGameLoadingContext::UpdatePendingLevelMapID(int32_t InPendingLevelMapID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPGameLoadingContext", "UpdatePendingLevelMapID");
    struct
    {
        int32_t InPendingLevelMapID;
    } Parms{};
    Parms.InPendingLevelMapID = (int32_t)InPendingLevelMapID;
    this->ProcessEvent(Func, &Parms);
}

void UGPGameLoadingContext::UpdateMPLayoutId(int32_t InLayoutId)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPGameLoadingContext", "UpdateMPLayoutId");
    struct
    {
        int32_t InLayoutId;
    } Parms{};
    Parms.InLayoutId = (int32_t)InLayoutId;
    this->ProcessEvent(Func, &Parms);
}

void UGPGameLoadingContext::UpdateMatchId(struct FString InMatchModeID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPGameLoadingContext", "UpdateMatchId");
    struct
    {
        struct FString InMatchModeID;
    } Parms{};
    Parms.InMatchModeID = (struct FString)InMatchModeID;
    this->ProcessEvent(Func, &Parms);
}

void UGPGameLoadingContext::UpdateLoadingDestination(EGPLoadingDestination InDest)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPGameLoadingContext", "UpdateLoadingDestination");
    struct
    {
        enum EGPLoadingDestination InDest;
    } Parms{};
    Parms.InDest = (enum EGPLoadingDestination)InDest;
    this->ProcessEvent(Func, &Parms);
}

void UGPGameLoadingContext::UpdateIsReconnect(uint8_t InIsReconnect)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPGameLoadingContext", "UpdateIsReconnect");
    struct
    {
        uint8_t InIsReconnect;
    } Parms{};
    Parms.InIsReconnect = (uint8_t)InIsReconnect;
    this->ProcessEvent(Func, &Parms);
}

void UGPGameLoadingContext::UpdateCampType(int32_t InCampType)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPGameLoadingContext", "UpdateCampType");
    struct
    {
        int32_t InCampType;
    } Parms{};
    Parms.InCampType = (int32_t)InCampType;
    this->ProcessEvent(Func, &Parms);
}

void UGPGameLoadingContext::Reset()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPGameLoadingContext", "Reset");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

struct FString UGPGameLoadingContext::GetLoadingMainInfo()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPGameLoadingContext", "GetLoadingMainInfo");
    struct
    {
        struct FString ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

EGPLoadingDestination UGPGameLoadingContext::GetLoadingDestination()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPGameLoadingContext", "GetLoadingDestination");
    struct
    {
        enum EGPLoadingDestination ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// ---- UGPGameLoadingDelegates::* ----
struct UGPGameLoadingDelegates* UGPGameLoadingDelegates::Get(struct UObject* InObj)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPGameLoadingDelegates", "Get");
    struct
    {
        struct UObject* InObj;
        struct UGPGameLoadingDelegates* ReturnValue;
    } Parms{};
    Parms.InObj = (struct UObject*)InObj;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// ---- UGPGameLoadingManager::* ----
void UGPGameLoadingManager::UpdatePreMapId(struct FString InPreMapId)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPGameLoadingManager", "UpdatePreMapId");
    struct
    {
        struct FString InPreMapId;
    } Parms{};
    Parms.InPreMapId = (struct FString)InPreMapId;
    this->ProcessEvent(Func, &Parms);
}

void UGPGameLoadingManager::SeamlessToLevel(struct FName InFlowName, struct FName LevelUrl)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPGameLoadingManager", "SeamlessToLevel");
    struct
    {
        struct FName InFlowName;
        struct FName LevelUrl;
    } Parms{};
    Parms.InFlowName = (struct FName)InFlowName;
    Parms.LevelUrl = (struct FName)LevelUrl;
    this->ProcessEvent(Func, &Parms);
}

void UGPGameLoadingManager::RecordMainDataOnBeginning(struct FString InLevelUrl)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPGameLoadingManager", "RecordMainDataOnBeginning");
    struct
    {
        struct FString InLevelUrl;
    } Parms{};
    Parms.InLevelUrl = (struct FString)InLevelUrl;
    this->ProcessEvent(Func, &Parms);
}

void UGPGameLoadingManager::OnLoadingStateChanged(EDFLoadingFlowStates FlowState)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPGameLoadingManager", "OnLoadingStateChanged");
    struct
    {
        enum EDFLoadingFlowStates FlowState;
    } Parms{};
    Parms.FlowState = (enum EDFLoadingFlowStates)FlowState;
    this->ProcessEvent(Func, &Parms);
}

void UGPGameLoadingManager::OnLoadingFlowProgressUpdate(float Progress)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPGameLoadingManager", "OnLoadingFlowProgressUpdate");
    struct
    {
        float Progress;
    } Parms{};
    Parms.Progress = (float)Progress;
    this->ProcessEvent(Func, &Parms);
}

void UGPGameLoadingManager::OnLoadingFlowFinished(EDFLoadingFlowStepResult FlowResult, struct FString Reason)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPGameLoadingManager", "OnLoadingFlowFinished");
    struct
    {
        enum EDFLoadingFlowStepResult FlowResult;
        struct FString Reason;
    } Parms{};
    Parms.FlowResult = (enum EDFLoadingFlowStepResult)FlowResult;
    Parms.Reason = (struct FString)Reason;
    this->ProcessEvent(Func, &Parms);
}

void UGPGameLoadingManager::OnGPGameAssetsLoadingEnd(EDFLoadingFlowStepResult InResult, struct FString InReason)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPGameLoadingManager", "OnGPGameAssetsLoadingEnd");
    struct
    {
        enum EDFLoadingFlowStepResult InResult;
        struct FString InReason;
    } Parms{};
    Parms.InResult = (enum EDFLoadingFlowStepResult)InResult;
    Parms.InReason = (struct FString)InReason;
    this->ProcessEvent(Func, &Parms);
}

void UGPGameLoadingManager::LoadingToLevel(struct FName InFlowName, struct FName LevelUrl)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPGameLoadingManager", "LoadingToLevel");
    struct
    {
        struct FName InFlowName;
        struct FName LevelUrl;
    } Parms{};
    Parms.InFlowName = (struct FName)InFlowName;
    Parms.LevelUrl = (struct FName)LevelUrl;
    this->ProcessEvent(Func, &Parms);
}

uint8_t UGPGameLoadingManager::IsLoadingAssetFinished()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPGameLoadingManager", "IsLoadingAssetFinished");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UGPGameLoadingManager::IsLoading2Game()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPGameLoadingManager", "IsLoading2Game");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UGPGameLoadingManager::IsLoading()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPGameLoadingManager", "IsLoading");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UGPGameLoadingManager::GetPreMapId()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPGameLoadingManager", "GetPreMapId");
    struct
    {
        struct FString ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

EGPLoadingDestination UGPGameLoadingManager::GetPendingLoadDestination()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPGameLoadingManager", "GetPendingLoadDestination");
    struct
    {
        enum EGPLoadingDestination ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UGPGameLoadingManager::GetMapPathWithMapID(int32_t InMapID, struct FString& OutLevelUrl)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPGameLoadingManager", "GetMapPathWithMapID");
    struct
    {
        int32_t InMapID;
        struct FString OutLevelUrl;
        uint8_t ReturnValue;
    } Parms{};
    Parms.InMapID = (int32_t)InMapID;
    this->ProcessEvent(Func, &Parms);
    OutLevelUrl = Parms.OutLevelUrl;
    return Parms.ReturnValue;
}

int32_t UGPGameLoadingManager::GetMapIDFromLevelUrl(struct FString InLevelUrl)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPGameLoadingManager", "GetMapIDFromLevelUrl");
    struct
    {
        struct FString InLevelUrl;
        int32_t ReturnValue;
    } Parms{};
    Parms.InLevelUrl = (struct FString)InLevelUrl;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UGPGameLoadingContext* UGPGameLoadingManager::GetLoadingContext()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPGameLoadingManager", "GetLoadingContext");
    struct
    {
        struct UGPGameLoadingContext* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UGPGameLoadingManager* UGPGameLoadingManager::GetGPGameLoadingManager(struct UObject* InContext)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPGameLoadingManager", "GetGPGameLoadingManager");
    struct
    {
        struct UObject* InContext;
        struct UGPGameLoadingManager* ReturnValue;
    } Parms{};
    Parms.InContext = (struct UObject*)InContext;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint64_t UGPGameLoadingManager::GetDSRoomIdFromLevelUrl(struct FString InLevelUrl)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPGameLoadingManager", "GetDSRoomIdFromLevelUrl");
    struct
    {
        struct FString InLevelUrl;
        uint64_t ReturnValue;
    } Parms{};
    Parms.InLevelUrl = (struct FString)InLevelUrl;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UGPGameLoadingManager::EnableClientQuitBroadcast2BPByLua()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPGameLoadingManager", "EnableClientQuitBroadcast2BPByLua");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UGPGameLoadingManager::DumpLoadingDebugInfo(uint8_t bDumpToLog)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPGameLoadingManager", "DumpLoadingDebugInfo");
    struct
    {
        uint8_t bDumpToLog;
        struct FString ReturnValue;
    } Parms{};
    Parms.bDumpToLog = (uint8_t)bDumpToLog;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UGPGameLoadingManager::CheckLevelUrlValid(struct FString InLevelUrl)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPGameLoadingManager", "CheckLevelUrlValid");
    struct
    {
        struct FString InLevelUrl;
        uint8_t ReturnValue;
    } Parms{};
    Parms.InLevelUrl = (struct FString)InLevelUrl;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UGPGameLoadingManager::BreakLoading(struct FString InBreakReason)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPGameLoadingManager", "BreakLoading");
    struct
    {
        struct FString InBreakReason;
    } Parms{};
    Parms.InBreakReason = (struct FString)InBreakReason;
    this->ProcessEvent(Func, &Parms);
}

// ---- UGPLoadingViewBase::* ----
void UGPLoadingViewBase::TickProgress(float InDeltaTime)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPLoadingViewBase", "TickProgress");
    struct
    {
        float InDeltaTime;
    } Parms{};
    Parms.InDeltaTime = (float)InDeltaTime;
    this->ProcessEvent(Func, &Parms);
}

void UGPLoadingViewBase::LoadingViewPrepared()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPLoadingViewBase", "LoadingViewPrepared");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UGPLoadingViewBase::BP_UpdateProgress(float InProgress)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPLoadingViewBase", "BP_UpdateProgress");
    struct
    {
        float InProgress;
    } Parms{};
    Parms.InProgress = (float)InProgress;
    this->ProcessEvent(Func, &Parms);
}

// ---- ULoadingViewFactoryBase::* ----
uint8_t ULoadingViewFactoryBase::BP_Usable(struct UGPGameLoadingContext* InContext)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LoadingViewFactoryBase", "BP_Usable");
    struct
    {
        struct UGPGameLoadingContext* InContext;
        uint8_t ReturnValue;
    } Parms{};
    Parms.InContext = (struct UGPGameLoadingContext*)InContext;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t ULoadingViewFactoryBase::BP_GetPriority()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LoadingViewFactoryBase", "BP_GetPriority");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FName ULoadingViewFactoryBase::BP_GetLoadingViewConfigName()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LoadingViewFactoryBase", "BP_GetLoadingViewConfigName");
    struct
    {
        struct FName ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// ---- ULoadingViewManager::* ----
void ULoadingViewManager::WarmUp()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LoadingViewManager", "WarmUp");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ULoadingViewManager::RemoveLoadingView()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LoadingViewManager", "RemoveLoadingView");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

uint8_t ULoadingViewManager::QuickSimulateLeftPercent()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LoadingViewManager", "QuickSimulateLeftPercent");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void ULoadingViewManager::OnPostLoadMap(struct UWorld* World)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LoadingViewManager", "OnPostLoadMap");
    struct
    {
        struct UWorld* World;
    } Parms{};
    Parms.World = (struct UWorld*)World;
    this->ProcessEvent(Func, &Parms);
}

void ULoadingViewManager::OnLoadingFlowProgressUpdated(float InProgress)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LoadingViewManager", "OnLoadingFlowProgressUpdated");
    struct
    {
        float InProgress;
    } Parms{};
    Parms.InProgress = (float)InProgress;
    this->ProcessEvent(Func, &Parms);
}

void ULoadingViewManager::OnHudManagerCreated(struct AActor* InPlayerController, struct UHudManager* InHudManager)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LoadingViewManager", "OnHudManagerCreated");
    struct
    {
        struct AActor* InPlayerController;
        struct UHudManager* InHudManager;
    } Parms{};
    Parms.InPlayerController = (struct AActor*)InPlayerController;
    Parms.InHudManager = (struct UHudManager*)InHudManager;
    this->ProcessEvent(Func, &Parms);
}

uint8_t ULoadingViewManager::IsLoadingViewActive()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LoadingViewManager", "IsLoadingViewActive");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void ULoadingViewManager::InitializeContext(struct UGPGameLoadingContext* InContext)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LoadingViewManager", "InitializeContext");
    struct
    {
        struct UGPGameLoadingContext* InContext;
    } Parms{};
    Parms.InContext = (struct UGPGameLoadingContext*)InContext;
    this->ProcessEvent(Func, &Parms);
}

float ULoadingViewManager::GetSimulateTime()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LoadingViewManager", "GetSimulateTime");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct ULoadingViewManager* ULoadingViewManager::GetLoadingViewManager(struct UGameInstance* InGameInstance)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("LoadingViewManager", "GetLoadingViewManager");
    struct
    {
        struct UGameInstance* InGameInstance;
        struct ULoadingViewManager* ReturnValue;
    } Parms{};
    Parms.InGameInstance = (struct UGameInstance*)InGameInstance;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FName ULoadingViewManager::GetCurLoadingView()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LoadingViewManager", "GetCurLoadingView");
    struct
    {
        struct FName ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void ULoadingViewManager::CreateLoadingView()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LoadingViewManager", "CreateLoadingView");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

} // namespace SDK
