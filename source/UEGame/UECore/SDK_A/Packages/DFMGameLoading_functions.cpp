#include "DFMGameLoading.hpp"
#include "DFMGameHud.hpp"
#include "Engine.hpp"
#include "GPGameFlow.hpp"
#include "GPGameHud.hpp"
#include "GPGameLoading.hpp"
#include "GameCore.hpp"
#include <cstring> // memcpy for ArrayDim>1 param marshalling

namespace SDK
{

// UDFMFlowBase
void UDFMFlowBase::OnFlowStart()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMFlowBase", "OnFlowStart");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMFlowBase::OnFlowProcessing(float Progress)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMFlowBase", "OnFlowProcessing");
    struct
    {
        float Progress;
    } Parms{};
    Parms.Progress = (float)Progress;
    this->ProcessEvent(Func, &Parms);
}

void UDFMFlowBase::OnFlowFinish(EFlowResult Result)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMFlowBase", "OnFlowFinish");
    struct
    {
        enum EFlowResult Result;
    } Parms{};
    Parms.Result = (enum EFlowResult)Result;
    this->ProcessEvent(Func, &Parms);
}

struct UGameInstance* UDFMFlowBase::GetGameInstance()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMFlowBase", "GetGameInstance");
    struct
    {
        struct UGameInstance* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UDFMFlowBase::GetFlowProcess()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMFlowBase", "GetFlowProcess");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UDFMFlowBPBase
void UDFMFlowBPBase::BP_Tick(float DeltaSeconds)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMFlowBPBase", "BP_Tick");
    struct
    {
        float DeltaSeconds;
    } Parms{};
    Parms.DeltaSeconds = (float)DeltaSeconds;
    this->ProcessEvent(Func, &Parms);
}

void UDFMFlowBPBase::BP_ShutDown()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMFlowBPBase", "BP_ShutDown");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMFlowBPBase::BP_OnOverTime()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMFlowBPBase", "BP_OnOverTime");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMFlowBPBase::BP_OnFlowStart()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMFlowBPBase", "BP_OnFlowStart");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMFlowBPBase::BP_OnFlowProcessing(float Progress)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMFlowBPBase", "BP_OnFlowProcessing");
    struct
    {
        float Progress;
    } Parms{};
    Parms.Progress = (float)Progress;
    this->ProcessEvent(Func, &Parms);
}

void UDFMFlowBPBase::BP_OnFlowFinish(EFlowResult Result)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMFlowBPBase", "BP_OnFlowFinish");
    struct
    {
        enum EFlowResult Result;
    } Parms{};
    Parms.Result = (enum EFlowResult)Result;
    this->ProcessEvent(Func, &Parms);
}

uint8_t UDFMFlowBPBase::BP_IsMainFlow()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMFlowBPBase", "BP_IsMainFlow");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UDFMFlowBPBase::BP_Init(struct UDFMFlowManager* inFlowManager)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMFlowBPBase", "BP_Init");
    struct
    {
        struct UDFMFlowManager* inFlowManager;
    } Parms{};
    Parms.inFlowManager = (struct UDFMFlowManager*)inFlowManager;
    this->ProcessEvent(Func, &Parms);
}

uint8_t UDFMFlowBPBase::BP_IfStopOnError()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMFlowBPBase", "BP_IfStopOnError");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UDFMFlowLoadDataTable
void UDFMFlowLoadDataTable::OnPreloadFinish(const struct FDataTableUseSceneValue& UseSceneType, int32_t LoadedNum)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMFlowLoadDataTable", "OnPreloadFinish");
    struct
    {
        struct FDataTableUseSceneValue UseSceneType;
        int32_t LoadedNum;
    } Parms{};
    Parms.UseSceneType = (struct FDataTableUseSceneValue)UseSceneType;
    Parms.LoadedNum = (int32_t)LoadedNum;
    this->ProcessEvent(Func, &Parms);
}

void UDFMFlowLoadDataTable::OnAttributeGlobalPreloadFinish(uint8_t bFinish)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMFlowLoadDataTable", "OnAttributeGlobalPreloadFinish");
    struct
    {
        uint8_t bFinish;
    } Parms{};
    Parms.bFinish = (uint8_t)bFinish;
    this->ProcessEvent(Func, &Parms);
}

// UDFMFlowManager
void UDFMFlowManager::StartFlowsWithConfigIns(struct ULoadingFlowStepsConfig* ConfigIns)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMFlowManager", "StartFlowsWithConfigIns");
    struct
    {
        struct ULoadingFlowStepsConfig* ConfigIns;
    } Parms{};
    Parms.ConfigIns = (struct ULoadingFlowStepsConfig*)ConfigIns;
    this->ProcessEvent(Func, &Parms);
}

void UDFMFlowManager::StartFlowsWithConfig(const struct TSoftClassPtr<struct ULoadingFlowStepsConfig*>& FlowStepsConfigPath)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMFlowManager", "StartFlowsWithConfig");
    struct
    {
        struct TSoftClassPtr<struct ULoadingFlowStepsConfig*> FlowStepsConfigPath;
    } Parms{};
    Parms.FlowStepsConfigPath = (struct TSoftClassPtr<struct ULoadingFlowStepsConfig*>)FlowStepsConfigPath;
    this->ProcessEvent(Func, &Parms);
}

uint8_t UDFMFlowManager::StartFlows(ELoadingTypeInner InLoadingType)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMFlowManager", "StartFlows");
    struct
    {
        enum ELoadingTypeInner InLoadingType;
        uint8_t ReturnValue;
    } Parms{};
    Parms.InLoadingType = (enum ELoadingTypeInner)InLoadingType;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UDFMFlowManager::SetLoadingReady(uint8_t InIsReady)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMFlowManager", "SetLoadingReady");
    struct
    {
        uint8_t InIsReady;
    } Parms{};
    Parms.InIsReady = (uint8_t)InIsReady;
    this->ProcessEvent(Func, &Parms);
}

void UDFMFlowManager::RunFlowsDirectly(const struct TSoftClassPtr<struct ULoadingFlowStepsConfig*>& FlowStepsConfigPath, ELoadingTypeInner InLoadingType)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMFlowManager", "RunFlowsDirectly");
    struct
    {
        struct TSoftClassPtr<struct ULoadingFlowStepsConfig*> FlowStepsConfigPath;
        enum ELoadingTypeInner InLoadingType;
    } Parms{};
    Parms.FlowStepsConfigPath = (struct TSoftClassPtr<struct ULoadingFlowStepsConfig*>)FlowStepsConfigPath;
    Parms.InLoadingType = (enum ELoadingTypeInner)InLoadingType;
    this->ProcessEvent(Func, &Parms);
}

void UDFMFlowManager::RunFlows(ELoadingTypeInner InLoadingType)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMFlowManager", "RunFlows");
    struct
    {
        enum ELoadingTypeInner InLoadingType;
    } Parms{};
    Parms.InLoadingType = (enum ELoadingTypeInner)InLoadingType;
    this->ProcessEvent(Func, &Parms);
}

void UDFMFlowManager::ProcessNextMainFlow()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMFlowManager", "ProcessNextMainFlow");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMFlowManager::OnLoadingMainFlowFinished(ELoadingTypeInner InLoadingType, EFlowResult InFlowResult)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMFlowManager", "OnLoadingMainFlowFinished");
    struct
    {
        enum ELoadingTypeInner InLoadingType;
        enum EFlowResult InFlowResult;
    } Parms{};
    Parms.InLoadingType = (enum ELoadingTypeInner)InLoadingType;
    Parms.InFlowResult = (enum EFlowResult)InFlowResult;
    this->ProcessEvent(Func, &Parms);
}

void UDFMFlowManager::OnFlowStepConfigLoadFinished()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMFlowManager", "OnFlowStepConfigLoadFinished");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

struct UGameInstance* UDFMFlowManager::GetGameInstance()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMFlowManager", "GetGameInstance");
    struct
    {
        struct UGameInstance* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UDFMFlowOpenTargetLevel
void UDFMFlowOpenTargetLevel::LoadMapProgress(float Progress)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMFlowOpenTargetLevel", "LoadMapProgress");
    struct
    {
        float Progress;
    } Parms{};
    Parms.Progress = (float)Progress;
    this->ProcessEvent(Func, &Parms);
}

void UDFMFlowOpenTargetLevel::CancelAllPending()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMFlowOpenTargetLevel", "CancelAllPending");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// UDFMSubFlowBPBase
void UDFMSubFlowBPBase::BP_Tick(float DeltaSeconds)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMSubFlowBPBase", "BP_Tick");
    struct
    {
        float DeltaSeconds;
    } Parms{};
    Parms.DeltaSeconds = (float)DeltaSeconds;
    this->ProcessEvent(Func, &Parms);
}

void UDFMSubFlowBPBase::BP_ShutDown()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMSubFlowBPBase", "BP_ShutDown");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMSubFlowBPBase::BP_OnOverTime()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMSubFlowBPBase", "BP_OnOverTime");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMSubFlowBPBase::BP_OnFlowStart()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMSubFlowBPBase", "BP_OnFlowStart");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMSubFlowBPBase::BP_OnFlowProcessing(float Progress)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMSubFlowBPBase", "BP_OnFlowProcessing");
    struct
    {
        float Progress;
    } Parms{};
    Parms.Progress = (float)Progress;
    this->ProcessEvent(Func, &Parms);
}

void UDFMSubFlowBPBase::BP_OnFlowFinish(EFlowResult Result)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMSubFlowBPBase", "BP_OnFlowFinish");
    struct
    {
        enum EFlowResult Result;
    } Parms{};
    Parms.Result = (enum EFlowResult)Result;
    this->ProcessEvent(Func, &Parms);
}

uint8_t UDFMSubFlowBPBase::BP_IsMainFlow()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMSubFlowBPBase", "BP_IsMainFlow");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UDFMSubFlowBPBase::BP_Init(struct UDFMFlowManager* inFlowManager)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMSubFlowBPBase", "BP_Init");
    struct
    {
        struct UDFMFlowManager* inFlowManager;
    } Parms{};
    Parms.inFlowManager = (struct UDFMFlowManager*)inFlowManager;
    this->ProcessEvent(Func, &Parms);
}

uint8_t UDFMSubFlowBPBase::BP_IfStopOnError()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMSubFlowBPBase", "BP_IfStopOnError");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UDFMFlowPrepareSafeHouse
void UDFMFlowPrepareSafeHouse::TeleportEnd()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMFlowPrepareSafeHouse", "TeleportEnd");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// UDFMFlowPrepareStartupBP
void UDFMFlowPrepareStartupBP::OnPreloadFinished(struct TArray<struct FSoftObjectPath> Paths)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMFlowPrepareStartupBP", "OnPreloadFinished");
    struct
    {
        struct TArray<struct FSoftObjectPath> Paths;
    } Parms{};
    Parms.Paths = (struct TArray<struct FSoftObjectPath>)Paths;
    this->ProcessEvent(Func, &Parms);
}

// UDFMFlowRestartLuaBase
void UDFMFlowRestartLuaBase::UpdateProgress(float Progress)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMFlowRestartLuaBase", "UpdateProgress");
    struct
    {
        float Progress;
    } Parms{};
    Parms.Progress = (float)Progress;
    this->ProcessEvent(Func, &Parms);
}

struct FTimerHandle UDFMFlowRestartLuaBase::LF_SetTimerByEvent(struct FDelegate Delegate, float Time, uint8_t bLooping, float InitialStartDelay, float InitialStartDelayVariance)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMFlowRestartLuaBase", "LF_SetTimerByEvent");
    struct
    {
        struct FDelegate Delegate;
        float Time;
        uint8_t bLooping;
        float InitialStartDelay;
        float InitialStartDelayVariance;
        struct FTimerHandle ReturnValue;
    } Parms{};
    Parms.Delegate = (struct FDelegate)Delegate;
    Parms.Time = (float)Time;
    Parms.bLooping = (uint8_t)bLooping;
    Parms.InitialStartDelay = (float)InitialStartDelay;
    Parms.InitialStartDelayVariance = (float)InitialStartDelayVariance;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UDFMFlowRestartLuaBase::LF_RemoveTimerByEvent(struct FTimerHandle TimerHandle)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMFlowRestartLuaBase", "LF_RemoveTimerByEvent");
    struct
    {
        struct FTimerHandle TimerHandle;
    } Parms{};
    Parms.TimerHandle = (struct FTimerHandle)TimerHandle;
    this->ProcessEvent(Func, &Parms);
}

void UDFMFlowRestartLuaBase::FinishFlow(EFlowResult Result)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMFlowRestartLuaBase", "FinishFlow");
    struct
    {
        enum EFlowResult Result;
    } Parms{};
    Parms.Result = (enum EFlowResult)Result;
    this->ProcessEvent(Func, &Parms);
}

void UDFMFlowRestartLuaBase::DoHotUpdateSecretly()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMFlowRestartLuaBase", "DoHotUpdateSecretly");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMFlowRestartLuaBase::CloseLoadingBG()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMFlowRestartLuaBase", "CloseLoadingBG");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMFlowRestartLuaBase::ClearAllTimer()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMFlowRestartLuaBase", "ClearAllTimer");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMFlowRestartLuaBase::CallLuaModuleFunction(struct FString ModuleFunc, struct FString ArgStr)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMFlowRestartLuaBase", "CallLuaModuleFunction");
    struct
    {
        struct FString ModuleFunc;
        struct FString ArgStr;
    } Parms{};
    Parms.ModuleFunc = (struct FString)ModuleFunc;
    Parms.ArgStr = (struct FString)ArgStr;
    this->ProcessEvent(Func, &Parms);
}

void UDFMFlowRestartLuaBase::CallLuaGlobalFunction(struct FString FuncName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMFlowRestartLuaBase", "CallLuaGlobalFunction");
    struct
    {
        struct FString FuncName;
    } Parms{};
    Parms.FuncName = (struct FString)FuncName;
    this->ProcessEvent(Func, &Parms);
}

void UDFMFlowRestartLuaBase::BP_OnFlowStart()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMFlowRestartLuaBase", "BP_OnFlowStart");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

struct FName UDFMFlowRestartLuaBase::BP_GetFlowName()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMFlowRestartLuaBase", "BP_GetFlowName");
    struct
    {
        struct FName ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UDFMFlowRestartLuaBase::ApplyHotfixCheck()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMFlowRestartLuaBase", "ApplyHotfixCheck");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UDFMFlowStreamingLevelWatch
void UDFMFlowStreamingLevelWatch::OnStreamingLevelLoadPercentage(int32_t Percentage)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMFlowStreamingLevelWatch", "OnStreamingLevelLoadPercentage");
    struct
    {
        int32_t Percentage;
    } Parms{};
    Parms.Percentage = (int32_t)Percentage;
    this->ProcessEvent(Func, &Parms);
}

// UDFMFlowUIAsyncLoadWatch
void UDFMFlowUIAsyncLoadWatch::OnUIAsyncLoadPercentage(float Percentage, struct TArray<struct FName> BlockGameFlowViewNameArray)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMFlowUIAsyncLoadWatch", "OnUIAsyncLoadPercentage");
    struct
    {
        float Percentage;
        struct TArray<struct FName> BlockGameFlowViewNameArray;
    } Parms{};
    Parms.Percentage = (float)Percentage;
    Parms.BlockGameFlowViewNameArray = (struct TArray<struct FName>)BlockGameFlowViewNameArray;
    this->ProcessEvent(Func, &Parms);
}

void UDFMFlowUIAsyncLoadWatch::OnForceFinish()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMFlowUIAsyncLoadWatch", "OnForceFinish");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// UDFMGameLoadingManager
void UDFMGameLoadingManager::WarmUpLoadingView()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGameLoadingManager", "WarmUpLoadingView");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMGameLoadingManager::UpdateLoadingProgressManually(float InLoadingPercent)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGameLoadingManager", "UpdateLoadingProgressManually");
    struct
    {
        float InLoadingPercent;
    } Parms{};
    Parms.InLoadingPercent = (float)InLoadingPercent;
    this->ProcessEvent(Func, &Parms);
}

uint8_t UDFMGameLoadingManager::TakeAsyncLoadingView()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGameLoadingManager", "TakeAsyncLoadingView");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UDFMGameLoadingManager::StopPreShowLoadingView()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGameLoadingManager", "StopPreShowLoadingView");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMGameLoadingManager::StartPreSLoadSOLMapRealLoadingView()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGameLoadingManager", "StartPreSLoadSOLMapRealLoadingView");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMGameLoadingManager::StartPreShowLoadingView(struct FString InPreShowViewPath)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGameLoadingManager", "StartPreShowLoadingView");
    struct
    {
        struct FString InPreShowViewPath;
    } Parms{};
    Parms.InPreShowViewPath = (struct FString)InPreShowViewPath;
    this->ProcessEvent(Func, &Parms);
}

void UDFMGameLoadingManager::ShutDownLoadingView()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGameLoadingManager", "ShutDownLoadingView");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMGameLoadingManager::SetUseMultiDomain(uint8_t useMultiDomain)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGameLoadingManager", "SetUseMultiDomain");
    struct
    {
        uint8_t useMultiDomain;
    } Parms{};
    Parms.useMultiDomain = (uint8_t)useMultiDomain;
    this->ProcessEvent(Func, &Parms);
}

void UDFMGameLoadingManager::SetIsReconnect(uint8_t bIsReconnect)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGameLoadingManager", "SetIsReconnect");
    struct
    {
        uint8_t bIsReconnect;
    } Parms{};
    Parms.bIsReconnect = (uint8_t)bIsReconnect;
    this->ProcessEvent(Func, &Parms);
}

void UDFMGameLoadingManager::SetCloseLoadingViewAfterLoading(uint8_t bInClose)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGameLoadingManager", "SetCloseLoadingViewAfterLoading");
    struct
    {
        uint8_t bInClose;
    } Parms{};
    Parms.bInClose = (uint8_t)bInClose;
    this->ProcessEvent(Func, &Parms);
}

void UDFMGameLoadingManager::ResetLoadingState()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGameLoadingManager", "ResetLoadingState");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMGameLoadingManager::Reset()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGameLoadingManager", "Reset");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMGameLoadingManager::ReleaseLoadingView()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGameLoadingManager", "ReleaseLoadingView");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMGameLoadingManager::ProcessAPM()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGameLoadingManager", "ProcessAPM");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMGameLoadingManager::PrepareReleaseGameResource()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGameLoadingManager", "PrepareReleaseGameResource");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMGameLoadingManager::Prepare2Game()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGameLoadingManager", "Prepare2Game");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMGameLoadingManager::OpenLevelWithConfig(struct UObject* WorldContextObject, struct FName LevelName, struct ULoadingFlowStepsConfig* LoadingFlowStepsConfig, uint8_t bAbsolute, struct FString Options, int32_t MapID, int64_t DSRoomId)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGameLoadingManager", "OpenLevelWithConfig");
    struct
    {
        struct UObject* WorldContextObject;
        struct FName LevelName;
        struct ULoadingFlowStepsConfig* LoadingFlowStepsConfig;
        uint8_t bAbsolute;
        struct FString Options;
        int32_t MapID;
        int64_t DSRoomId;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    Parms.LevelName = (struct FName)LevelName;
    Parms.LoadingFlowStepsConfig = (struct ULoadingFlowStepsConfig*)LoadingFlowStepsConfig;
    Parms.bAbsolute = (uint8_t)bAbsolute;
    Parms.Options = (struct FString)Options;
    Parms.MapID = (int32_t)MapID;
    Parms.DSRoomId = (int64_t)DSRoomId;
    this->ProcessEvent(Func, &Parms);
}

void UDFMGameLoadingManager::OpenLevel(struct UObject* WorldContextObject, struct FName LevelName, uint8_t bAbsolute, struct FString Options, int32_t MapID, int64_t DSRoomId)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGameLoadingManager", "OpenLevel");
    struct
    {
        struct UObject* WorldContextObject;
        struct FName LevelName;
        uint8_t bAbsolute;
        struct FString Options;
        int32_t MapID;
        int64_t DSRoomId;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    Parms.LevelName = (struct FName)LevelName;
    Parms.bAbsolute = (uint8_t)bAbsolute;
    Parms.Options = (struct FString)Options;
    Parms.MapID = (int32_t)MapID;
    Parms.DSRoomId = (int64_t)DSRoomId;
    this->ProcessEvent(Func, &Parms);
}

void UDFMGameLoadingManager::OnWarfareLoadingSkipped()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGameLoadingManager", "OnWarfareLoadingSkipped");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMGameLoadingManager::OnStartMatchCheck()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGameLoadingManager", "OnStartMatchCheck");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMGameLoadingManager::OnSOLMatchRealStart()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGameLoadingManager", "OnSOLMatchRealStart");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMGameLoadingManager::OnReloadingFailed()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGameLoadingManager", "OnReloadingFailed");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMGameLoadingManager::OnPostLoadMap(struct UWorld* InWorld)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGameLoadingManager", "OnPostLoadMap");
    struct
    {
        struct UWorld* InWorld;
    } Parms{};
    Parms.InWorld = (struct UWorld*)InWorld;
    this->ProcessEvent(Func, &Parms);
}

void UDFMGameLoadingManager::OnPostConnectDS(struct UNetConnection* InNetConnection)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGameLoadingManager", "OnPostConnectDS");
    struct
    {
        struct UNetConnection* InNetConnection;
    } Parms{};
    Parms.InNetConnection = (struct UNetConnection*)InNetConnection;
    this->ProcessEvent(Func, &Parms);
}

void UDFMGameLoadingManager::OnLoadingViewVisibleOnScreen()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGameLoadingManager", "OnLoadingViewVisibleOnScreen");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMGameLoadingManager::OnLoadingViewRemoved()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGameLoadingManager", "OnLoadingViewRemoved");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMGameLoadingManager::OnLoadingViewPreShowCalled()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGameLoadingManager", "OnLoadingViewPreShowCalled");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMGameLoadingManager::OnLoadingViewLoadFinish()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGameLoadingManager", "OnLoadingViewLoadFinish");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMGameLoadingManager::OnLoadingMainFlowsFinished(ELoadingTypeInner InLoadingType, EFlowResult InFlowResult)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGameLoadingManager", "OnLoadingMainFlowsFinished");
    struct
    {
        enum ELoadingTypeInner InLoadingType;
        enum EFlowResult InFlowResult;
    } Parms{};
    Parms.InLoadingType = (enum ELoadingTypeInner)InLoadingType;
    Parms.InFlowResult = (enum EFlowResult)InFlowResult;
    this->ProcessEvent(Func, &Parms);
}

void UDFMGameLoadingManager::OnLoadingFlowProgressUpdate(float UpdateProgress)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGameLoadingManager", "OnLoadingFlowProgressUpdate");
    struct
    {
        float UpdateProgress;
    } Parms{};
    Parms.UpdateProgress = (float)UpdateProgress;
    this->ProcessEvent(Func, &Parms);
}

void UDFMGameLoadingManager::OnLoadingFinished(EFlowResult InFlowResult)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGameLoadingManager", "OnLoadingFinished");
    struct
    {
        enum EFlowResult InFlowResult;
    } Parms{};
    Parms.InFlowResult = (enum EFlowResult)InFlowResult;
    this->ProcessEvent(Func, &Parms);
}

void UDFMGameLoadingManager::OnLoadingEndWithFailed()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGameLoadingManager", "OnLoadingEndWithFailed");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMGameLoadingManager::OnGameStateCurStageChanged(uint8_t IsFightStage)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGameLoadingManager", "OnGameStateCurStageChanged");
    struct
    {
        uint8_t IsFightStage;
    } Parms{};
    Parms.IsFightStage = (uint8_t)IsFightStage;
    this->ProcessEvent(Func, &Parms);
}

void UDFMGameLoadingManager::OnGameFlowStagePostEnter(EGameFlowStageType InFlowStage)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGameLoadingManager", "OnGameFlowStagePostEnter");
    struct
    {
        enum EGameFlowStageType InFlowStage;
    } Parms{};
    Parms.InFlowStage = (enum EGameFlowStageType)InFlowStage;
    this->ProcessEvent(Func, &Parms);
}

void UDFMGameLoadingManager::OnGameFlowStageEnter(EGameFlowStageType InFlowStage)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGameLoadingManager", "OnGameFlowStageEnter");
    struct
    {
        enum EGameFlowStageType InFlowStage;
    } Parms{};
    Parms.InFlowStage = (enum EGameFlowStageType)InFlowStage;
    this->ProcessEvent(Func, &Parms);
}

void UDFMGameLoadingManager::OnGameFlowStageChanged(EGameFlowStageType InFlowStage)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGameLoadingManager", "OnGameFlowStageChanged");
    struct
    {
        enum EGameFlowStageType InFlowStage;
    } Parms{};
    Parms.InFlowStage = (enum EGameFlowStageType)InFlowStage;
    this->ProcessEvent(Func, &Parms);
}

void UDFMGameLoadingManager::OnClientConnectDSResultNotify(uint8_t bSucc, struct UNetConnection* Conn)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGameLoadingManager", "OnClientConnectDSResultNotify");
    struct
    {
        uint8_t bSucc;
        struct UNetConnection* Conn;
    } Parms{};
    Parms.bSucc = (uint8_t)bSucc;
    Parms.Conn = (struct UNetConnection*)Conn;
    this->ProcessEvent(Func, &Parms);
}

void UDFMGameLoadingManager::LoadingToTargetMap()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGameLoadingManager", "LoadingToTargetMap");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

uint8_t UDFMGameLoadingManager::IsPendingLoadSOL()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGameLoadingManager", "IsPendingLoadSOL");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UDFMGameLoadingManager::IsPendingLoadRaid()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGameLoadingManager", "IsPendingLoadRaid");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UDFMGameLoadingManager::IsPendingLoadMP()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGameLoadingManager", "IsPendingLoadMP");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UDFMGameLoadingManager::IsLoadingAssetFinished()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGameLoadingManager", "IsLoadingAssetFinished");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UDFMGameLoadingManager::IsLoading()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGameLoadingManager", "IsLoading");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UDFMGameLoadingManager::IsEnableSwitchPerfDuringSquareShow()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGameLoadingManager", "IsEnableSwitchPerfDuringSquareShow");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UDFMGameLoadingManager::IsEnableSeamlessTravel(struct UObject* WorldContextObject)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGameLoadingManager", "IsEnableSeamlessTravel");
    struct
    {
        struct UObject* WorldContextObject;
        uint8_t ReturnValue;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UDFMGameLoadingManager::IsEnablePostProcessLogin2FrontEnd()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGameLoadingManager", "IsEnablePostProcessLogin2FrontEnd");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UDFMGameLoadingManager::HandleTravelFailure(struct UWorld* InWorld, ETravelFailure FailureType, struct FString ErrorString)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGameLoadingManager", "HandleTravelFailure");
    struct
    {
        struct UWorld* InWorld;
        enum ETravelFailure FailureType;
        struct FString ErrorString;
    } Parms{};
    Parms.InWorld = (struct UWorld*)InWorld;
    Parms.FailureType = (enum ETravelFailure)FailureType;
    Parms.ErrorString = (struct FString)ErrorString;
    this->ProcessEvent(Func, &Parms);
}

void UDFMGameLoadingManager::HandleNetWorkFailure(struct UWorld* World, struct UNetDriver* NetDriver, ENetworkFailure FailureType, struct FString ErrorString)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGameLoadingManager", "HandleNetWorkFailure");
    struct
    {
        struct UWorld* World;
        struct UNetDriver* NetDriver;
        enum ENetworkFailure FailureType;
        struct FString ErrorString;
    } Parms{};
    Parms.World = (struct UWorld*)World;
    Parms.NetDriver = (struct UNetDriver*)NetDriver;
    Parms.FailureType = (enum ENetworkFailure)FailureType;
    Parms.ErrorString = (struct FString)ErrorString;
    this->ProcessEvent(Func, &Parms);
}

uint8_t UDFMGameLoadingManager::GetPendingLoadMapName(struct FString& OutName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGameLoadingManager", "GetPendingLoadMapName");
    struct
    {
        struct FString OutName;
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    OutName = Parms.OutName;
    return Parms.ReturnValue;
}

struct ULoadingSubDataWrapper* UDFMGameLoadingManager::GetLoadingSubDataWrapper()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGameLoadingManager", "GetLoadingSubDataWrapper");
    struct
    {
        struct ULoadingSubDataWrapper* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct ULoadingConfigSettings* UDFMGameLoadingManager::GetLoadingConfigSettings()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGameLoadingManager", "GetLoadingConfigSettings");
    struct
    {
        struct ULoadingConfigSettings* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UDFMGameLoadingManager* UDFMGameLoadingManager::GetGameLoadingManager(struct UObject* WorldContextObject)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFMGameLoadingManager", "GetGameLoadingManager");
    struct
    {
        struct UObject* WorldContextObject;
        struct UDFMGameLoadingManager* ReturnValue;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UDFMGameLoadingManager::ForceExit2Login()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGameLoadingManager", "ForceExit2Login");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

uint8_t UDFMGameLoadingManager::EnableNewDFLoading()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGameLoadingManager", "EnableNewDFLoading");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UDFMGameLoadingManager::CreateLoadingView(struct ULoadingViewBase* DefaultLoadingViewClass)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGameLoadingManager", "CreateLoadingView");
    struct
    {
        struct ULoadingViewBase* DefaultLoadingViewClass;
        uint8_t ReturnValue;
    } Parms{};
    Parms.DefaultLoadingViewClass = (struct ULoadingViewBase*)DefaultLoadingViewClass;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UDFMGameLoadingManager::BroadcastSeamlessTravelFailed2Loading()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGameLoadingManager", "BroadcastSeamlessTravelFailed2Loading");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMGameLoadingManager::BroadcastLoadingFailed2Login()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGameLoadingManager", "BroadcastLoadingFailed2Login");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// UDFMPreloadManager
struct UDFMPreloadManager* UDFMPreloadManager::GetInstance(struct UObject* WorldContextObject)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFMPreloadManager", "GetInstance");
    struct
    {
        struct UObject* WorldContextObject;
        struct UDFMPreloadManager* ReturnValue;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UDFMPreloadManager::CleanupObjectPoolManager()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPreloadManager", "CleanupObjectPoolManager");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// ULoadingSubDataWrapper
void ULoadingSubDataWrapper::UpdateShouldShowGuideInfo(uint8_t InShouldShowGuideInfo)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LoadingSubDataWrapper", "UpdateShouldShowGuideInfo");
    struct
    {
        uint8_t InShouldShowGuideInfo;
    } Parms{};
    Parms.InShouldShowGuideInfo = (uint8_t)InShouldShowGuideInfo;
    this->ProcessEvent(Func, &Parms);
}

void ULoadingSubDataWrapper::UpdatePlayerLevel(int32_t InPlayerLevel)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LoadingSubDataWrapper", "UpdatePlayerLevel");
    struct
    {
        int32_t InPlayerLevel;
    } Parms{};
    Parms.InPlayerLevel = (int32_t)InPlayerLevel;
    this->ProcessEvent(Func, &Parms);
}

void ULoadingSubDataWrapper::UpdatePlayerGameNum(int32_t InSOLGameNum, int32_t InMPGameNum)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LoadingSubDataWrapper", "UpdatePlayerGameNum");
    struct
    {
        int32_t InSOLGameNum;
        int32_t InMPGameNum;
    } Parms{};
    Parms.InSOLGameNum = (int32_t)InSOLGameNum;
    Parms.InMPGameNum = (int32_t)InMPGameNum;
    this->ProcessEvent(Func, &Parms);
}

void ULoadingSubDataWrapper::UpdateMatchId(struct FString InMatchModeID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LoadingSubDataWrapper", "UpdateMatchId");
    struct
    {
        struct FString InMatchModeID;
    } Parms{};
    Parms.InMatchModeID = (struct FString)InMatchModeID;
    this->ProcessEvent(Func, &Parms);
}

void ULoadingSubDataWrapper::UpdateLoadingDestination(EGPLoadingDestination InLoadingDestination)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LoadingSubDataWrapper", "UpdateLoadingDestination");
    struct
    {
        enum EGPLoadingDestination InLoadingDestination;
    } Parms{};
    Parms.InLoadingDestination = (enum EGPLoadingDestination)InLoadingDestination;
    this->ProcessEvent(Func, &Parms);
}

void ULoadingSubDataWrapper::UpdateCampType(int32_t InCampType)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LoadingSubDataWrapper", "UpdateCampType");
    struct
    {
        int32_t InCampType;
    } Parms{};
    Parms.InCampType = (int32_t)InCampType;
    this->ProcessEvent(Func, &Parms);
}

void ULoadingSubDataWrapper::Reset()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LoadingSubDataWrapper", "Reset");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

uint8_t ULoadingSubDataWrapper::GetSuitableLoadingSubData(struct FGameLoadingSubData& OutConfigData)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LoadingSubDataWrapper", "GetSuitableLoadingSubData");
    struct
    {
        struct FGameLoadingSubData OutConfigData;
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    OutConfigData = Parms.OutConfigData;
    return Parms.ReturnValue;
}

EGPLoadingDestination ULoadingSubDataWrapper::GetLoadingDestination()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LoadingSubDataWrapper", "GetLoadingDestination");
    struct
    {
        enum EGPLoadingDestination ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// ULoadingViewContext
void ULoadingViewContext::PreLoadRealSOLMapLoadingViewClass()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LoadingViewContext", "PreLoadRealSOLMapLoadingViewClass");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ULoadingViewContext::OnRealSOLMapLoadingViewClassLoaded()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LoadingViewContext", "OnRealSOLMapLoadingViewClassLoaded");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ULoadingViewContext::OnLoadingViewClassLoaded()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LoadingViewContext", "OnLoadingViewClassLoaded");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

struct UBaseUIView* ULoadingViewContext::GetSolMapRealLoadingUIView()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LoadingViewContext", "GetSolMapRealLoadingUIView");
    struct
    {
        struct UBaseUIView* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FSoftClassPath ULoadingViewContext::GetSOLMapLoadingViewPath()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LoadingViewContext", "GetSOLMapLoadingViewPath");
    struct
    {
        struct FSoftClassPath ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FSoftClassPath ULoadingViewContext::GetDefaultLoadingViewPath()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LoadingViewContext", "GetDefaultLoadingViewPath");
    struct
    {
        struct FSoftClassPath ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

} // namespace SDK
