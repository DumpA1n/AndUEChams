#include "DFMReplaySystem.hpp"
#include "DFMGameplay.hpp"
#include "Engine.hpp"
#include "GPGameFlow.hpp"
#include "GPGameplay.hpp"
#include "GPGlobalDefines.hpp"
#include "UMG.hpp"
#include <cstring> // memcpy for ArrayDim>1 param marshalling

namespace SDK
{

// UDFMNetworkPlayerReplayComponent
void UDFMNetworkPlayerReplayComponent::ServerStartReplayRecording()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMNetworkPlayerReplayComponent", "ServerStartReplayRecording");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMNetworkPlayerReplayComponent::ServerSaveReplay(uint64_t PlayerUin, int64_t RequestTokenTicks, EReplayRequestType RequestType, float RequestReplayTime, uint8_t bForceSendReplay)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMNetworkPlayerReplayComponent", "ServerSaveReplay");
    struct
    {
        uint64_t PlayerUin;
        int64_t RequestTokenTicks;
        enum EReplayRequestType RequestType;
        float RequestReplayTime;
        uint8_t bForceSendReplay;
    } Parms{};
    Parms.PlayerUin = (uint64_t)PlayerUin;
    Parms.RequestTokenTicks = (int64_t)RequestTokenTicks;
    Parms.RequestType = (enum EReplayRequestType)RequestType;
    Parms.RequestReplayTime = (float)RequestReplayTime;
    Parms.bForceSendReplay = (uint8_t)bForceSendReplay;
    this->ProcessEvent(Func, &Parms);
}

void UDFMNetworkPlayerReplayComponent::OnServerPlayerGameEnd(EMatchOverReason MatchOverReason, int64_t InPlayerUin)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMNetworkPlayerReplayComponent", "OnServerPlayerGameEnd");
    struct
    {
        enum EMatchOverReason MatchOverReason;
        int64_t InPlayerUin;
    } Parms{};
    Parms.MatchOverReason = (enum EMatchOverReason)MatchOverReason;
    Parms.InPlayerUin = (int64_t)InPlayerUin;
    this->ProcessEvent(Func, &Parms);
}

void UDFMNetworkPlayerReplayComponent::OnSeamlessTravelToGameWorldEnd(uint8_t bReconnect)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMNetworkPlayerReplayComponent", "OnSeamlessTravelToGameWorldEnd");
    struct
    {
        uint8_t bReconnect;
    } Parms{};
    Parms.bReconnect = (uint8_t)bReconnect;
    this->ProcessEvent(Func, &Parms);
}

void UDFMNetworkPlayerReplayComponent::OnRequestPlayReplay(struct UDFReplayBase* ReplayIns)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMNetworkPlayerReplayComponent", "OnRequestPlayReplay");
    struct
    {
        struct UDFReplayBase* ReplayIns;
    } Parms{};
    Parms.ReplayIns = (struct UDFReplayBase*)ReplayIns;
    this->ProcessEvent(Func, &Parms);
}

void UDFMNetworkPlayerReplayComponent::OnReplayRealStart(float TimeInMS)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMNetworkPlayerReplayComponent", "OnReplayRealStart");
    struct
    {
        float TimeInMS;
    } Parms{};
    Parms.TimeInMS = (float)TimeInMS;
    this->ProcessEvent(Func, &Parms);
}

void UDFMNetworkPlayerReplayComponent::OnRepDeadDamageInfo()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMNetworkPlayerReplayComponent", "OnRepDeadDamageInfo");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMNetworkPlayerReplayComponent::OnRep_RequestTimeTicks()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMNetworkPlayerReplayComponent", "OnRep_RequestTimeTicks");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMNetworkPlayerReplayComponent::OnRep_bPlayerEnableKillCam()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMNetworkPlayerReplayComponent", "OnRep_bPlayerEnableKillCam");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMNetworkPlayerReplayComponent::OnRep_bEnablePlayKillCamera()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMNetworkPlayerReplayComponent", "OnRep_bEnablePlayKillCamera");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMNetworkPlayerReplayComponent::OnPlayReplayEnd()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMNetworkPlayerReplayComponent", "OnPlayReplayEnd");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMNetworkPlayerReplayComponent::ClientReceiveReplayHeaderChunk(struct TArray<struct FReplayHeaderChunk> Chunks)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMNetworkPlayerReplayComponent", "ClientReceiveReplayHeaderChunk");
    struct
    {
        struct TArray<struct FReplayHeaderChunk> Chunks;
    } Parms{};
    Parms.Chunks = (struct TArray<struct FReplayHeaderChunk>)Chunks;
    this->ProcessEvent(Func, &Parms);
}

void UDFMNetworkPlayerReplayComponent::ClientReceiveReplayDataChunk(struct TArray<struct FReplayDataChunk> Chunks)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMNetworkPlayerReplayComponent", "ClientReceiveReplayDataChunk");
    struct
    {
        struct TArray<struct FReplayDataChunk> Chunks;
    } Parms{};
    Parms.Chunks = (struct TArray<struct FReplayDataChunk>)Chunks;
    this->ProcessEvent(Func, &Parms);
}

void UDFMNetworkPlayerReplayComponent::ClientReceiveReplayCheckpointChunk(struct TArray<struct FReplayCheckpointChunk> Chunks)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMNetworkPlayerReplayComponent", "ClientReceiveReplayCheckpointChunk");
    struct
    {
        struct TArray<struct FReplayCheckpointChunk> Chunks;
    } Parms{};
    Parms.Chunks = (struct TArray<struct FReplayCheckpointChunk>)Chunks;
    this->ProcessEvent(Func, &Parms);
}

void UDFMNetworkPlayerReplayComponent::CharacterImpendingDeath(struct AGPCharacterBase* GPChar)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMNetworkPlayerReplayComponent", "CharacterImpendingDeath");
    struct
    {
        struct AGPCharacterBase* GPChar;
    } Parms{};
    Parms.GPChar = (struct AGPCharacterBase*)GPChar;
    this->ProcessEvent(Func, &Parms);
}

void UDFMNetworkPlayerReplayComponent::CharacterDied(struct AGPCharacterBase* GPChar)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMNetworkPlayerReplayComponent", "CharacterDied");
    struct
    {
        struct AGPCharacterBase* GPChar;
    } Parms{};
    Parms.GPChar = (struct AGPCharacterBase*)GPChar;
    this->ProcessEvent(Func, &Parms);
}

// UDFMNetworkReplaySubsystem
uint8_t UDFMNetworkReplaySubsystem::PlayLastKillCamReplay()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMNetworkReplaySubsystem", "PlayLastKillCamReplay");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UDFMNetworkReplaySubsystem::OnGameFlowLeave(EGameFlowStageType GameFlowStage)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMNetworkReplaySubsystem", "OnGameFlowLeave");
    struct
    {
        enum EGameFlowStageType GameFlowStage;
    } Parms{};
    Parms.GameFlowStage = (enum EGameFlowStageType)GameFlowStage;
    this->ProcessEvent(Func, &Parms);
}

void UDFMNetworkReplaySubsystem::OnGameFlowEnter(EGameFlowStageType GameFlowStage)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMNetworkReplaySubsystem", "OnGameFlowEnter");
    struct
    {
        enum EGameFlowStageType GameFlowStage;
    } Parms{};
    Parms.GameFlowStage = (enum EGameFlowStageType)GameFlowStage;
    this->ProcessEvent(Func, &Parms);
}

void UDFMNetworkReplaySubsystem::OnCharacterLiveStatusChanged(struct AGPCharacterBase* CharacterBase, ECharacterLiveStatus OldStatus, ECharacterLiveStatus NewStatus)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMNetworkReplaySubsystem", "OnCharacterLiveStatusChanged");
    struct
    {
        struct AGPCharacterBase* CharacterBase;
        enum ECharacterLiveStatus OldStatus;
        enum ECharacterLiveStatus NewStatus;
    } Parms{};
    Parms.CharacterBase = (struct AGPCharacterBase*)CharacterBase;
    Parms.OldStatus = (enum ECharacterLiveStatus)OldStatus;
    Parms.NewStatus = (enum ECharacterLiveStatus)NewStatus;
    this->ProcessEvent(Func, &Parms);
}

uint8_t UDFMNetworkReplaySubsystem::IsLastKillCamReplayReady()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMNetworkReplaySubsystem", "IsLastKillCamReplayReady");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UDFMNetworkReplaySubsystem::IsAllowPlayKillCamReplay()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMNetworkReplaySubsystem", "IsAllowPlayKillCamReplay");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UDFMNetworkReplaySubsystem* UDFMNetworkReplaySubsystem::GetReplaySubsystem(struct UObject* WorldContextObject)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFMNetworkReplaySubsystem", "GetReplaySubsystem");
    struct
    {
        struct UObject* WorldContextObject;
        struct UDFMNetworkReplaySubsystem* ReturnValue;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UDFMNetworkReplaySubsystem::GetParseProtocolProgress()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMNetworkReplaySubsystem", "GetParseProtocolProgress");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint64_t UDFMNetworkReplaySubsystem::GetLastDeathUTCTimeStamp()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMNetworkReplaySubsystem", "GetLastDeathUTCTimeStamp");
    struct
    {
        uint64_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UDFMNetworkReplaySubsystem::GetDownloadKillCamProgress()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMNetworkReplaySubsystem", "GetDownloadKillCamProgress");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UDFMReplayInstance
uint8_t UDFMReplayInstance::StopReplayRecording()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMReplayInstance", "StopReplayRecording");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UDFMReplayInstance::StopReplay()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMReplayInstance", "StopReplay");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UDFMReplayInstance::StartReplayRecording()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMReplayInstance", "StartReplayRecording");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UDFMReplayInstance::SetPlayRate(float PlayRate)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMReplayInstance", "SetPlayRate");
    struct
    {
        float PlayRate;
        uint8_t ReturnValue;
    } Parms{};
    Parms.PlayRate = (float)PlayRate;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UDFMReplayInstance::ResetReplay()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMReplayInstance", "ResetReplay");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UDFMReplayInstance::PauseReplay(uint8_t isPause)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMReplayInstance", "PauseReplay");
    struct
    {
        uint8_t isPause;
        uint8_t ReturnValue;
    } Parms{};
    Parms.isPause = (uint8_t)isPause;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UDFMReplayInstance::OnReplayEnd()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMReplayInstance", "OnReplayEnd");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

uint8_t UDFMReplayInstance::GotoReplayAtTime(float TimeInMS)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMReplayInstance", "GotoReplayAtTime");
    struct
    {
        float TimeInMS;
        uint8_t ReturnValue;
    } Parms{};
    Parms.TimeInMS = (float)TimeInMS;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UDFMReplayInstance::GetTotalRecordTime()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMReplayInstance", "GetTotalRecordTime");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UDFMReplayInstance::GetCurrentRecordTime()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMReplayInstance", "GetCurrentRecordTime");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UDFMReplayInstance::Destory()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMReplayInstance", "Destory");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// ADFMReplayPlayerController
void ADFMReplayPlayerController::OnUnregisterActor(struct AActor* ChangedActor)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMReplayPlayerController", "OnUnregisterActor");
    struct
    {
        struct AActor* ChangedActor;
    } Parms{};
    Parms.ChangedActor = (struct AActor*)ChangedActor;
    this->ProcessEvent(Func, &Parms);
}

void ADFMReplayPlayerController::OnSeamlessToReplayEnd(uint8_t bReconnect)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMReplayPlayerController", "OnSeamlessToReplayEnd");
    struct
    {
        uint8_t bReconnect;
    } Parms{};
    Parms.bReconnect = (uint8_t)bReconnect;
    this->ProcessEvent(Func, &Parms);
}

void ADFMReplayPlayerController::OnRegisterActor(struct AActor* ChangedActor)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMReplayPlayerController", "OnRegisterActor");
    struct
    {
        struct AActor* ChangedActor;
    } Parms{};
    Parms.ChangedActor = (struct AActor*)ChangedActor;
    this->ProcessEvent(Func, &Parms);
}

void ADFMReplayPlayerController::GMSetPlayRate(float PlayRate)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMReplayPlayerController", "GMSetPlayRate");
    struct
    {
        float PlayRate;
    } Parms{};
    Parms.PlayRate = (float)PlayRate;
    this->ProcessEvent(Func, &Parms);
}

void ADFMReplayPlayerController::GMResetReplay()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMReplayPlayerController", "GMResetReplay");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ADFMReplayPlayerController::GMPauseReplay(uint8_t isPause)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMReplayPlayerController", "GMPauseReplay");
    struct
    {
        uint8_t isPause;
    } Parms{};
    Parms.isPause = (uint8_t)isPause;
    this->ProcessEvent(Func, &Parms);
}

void ADFMReplayPlayerController::GMGotoReplayPercent(float Percent)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMReplayPlayerController", "GMGotoReplayPercent");
    struct
    {
        float Percent;
    } Parms{};
    Parms.Percent = (float)Percent;
    this->ProcessEvent(Func, &Parms);
}

void ADFMReplayPlayerController::BeginRecordReplay()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMReplayPlayerController", "BeginRecordReplay");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ADFMReplayPlayerController::BeginPlayReplay()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMReplayPlayerController", "BeginPlayReplay");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// UDFMReplaySystemBlueprintHelper
void UDFMReplaySystemBlueprintHelper::StartParseProtocolFile(struct UObject* WorldContextObject, struct FString FilePath)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFMReplaySystemBlueprintHelper", "StartParseProtocolFile");
    struct
    {
        struct UObject* WorldContextObject;
        struct FString FilePath;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    Parms.FilePath = (struct FString)FilePath;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

uint8_t UDFMReplaySystemBlueprintHelper::SetReplayRate(struct UDFMReplayInstance* ReplayInstance, struct UObject* WorldContextObject, float Rate)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFMReplaySystemBlueprintHelper", "SetReplayRate");
    struct
    {
        struct UDFMReplayInstance* ReplayInstance;
        struct UObject* WorldContextObject;
        float Rate;
        uint8_t ReturnValue;
    } Parms{};
    Parms.ReplayInstance = (struct UDFMReplayInstance*)ReplayInstance;
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    Parms.Rate = (float)Rate;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UDFMReplaySystemBlueprintHelper::RestartReplay(struct UDFMReplayInstance* ReplayInstance, struct UObject* WorldContextObject)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFMReplaySystemBlueprintHelper", "RestartReplay");
    struct
    {
        struct UDFMReplayInstance* ReplayInstance;
        struct UObject* WorldContextObject;
        uint8_t ReturnValue;
    } Parms{};
    Parms.ReplayInstance = (struct UDFMReplayInstance*)ReplayInstance;
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UDFMReplaySystemBlueprintHelper::RequestMyNearestKillcam(struct UObject* WorldContextObject)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFMReplaySystemBlueprintHelper", "RequestMyNearestKillcam");
    struct
    {
        struct UObject* WorldContextObject;
        uint8_t ReturnValue;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UDFMReplaySystemBlueprintHelper::RepeatKillcam(struct UObject* WorldContextObject)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFMReplaySystemBlueprintHelper", "RepeatKillcam");
    struct
    {
        struct UObject* WorldContextObject;
        uint8_t ReturnValue;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UDFMReplaySystemBlueprintHelper::PlayReplay(struct UDFMReplayInstance* ReplayInstance, struct UObject* WorldContextObject)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFMReplaySystemBlueprintHelper", "PlayReplay");
    struct
    {
        struct UDFMReplayInstance* ReplayInstance;
        struct UObject* WorldContextObject;
        uint8_t ReturnValue;
    } Parms{};
    Parms.ReplayInstance = (struct UDFMReplayInstance*)ReplayInstance;
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UDFMReplaySystemBlueprintHelper::PlayerStopReplayRecording(struct UObject* WorldContextObject, struct UDFMReplayInstance* ReplayInstance)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFMReplaySystemBlueprintHelper", "PlayerStopReplayRecording");
    struct
    {
        struct UObject* WorldContextObject;
        struct UDFMReplayInstance* ReplayInstance;
        uint8_t ReturnValue;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    Parms.ReplayInstance = (struct UDFMReplayInstance*)ReplayInstance;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UDFMReplayInstance* UDFMReplaySystemBlueprintHelper::PlayerStartReplayRecording(ENetworkReplayStreamerType StreamerType, struct FString ReplayName, struct FString FriendlyName, struct UObject* WorldContextObject)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFMReplaySystemBlueprintHelper", "PlayerStartReplayRecording");
    struct
    {
        enum ENetworkReplayStreamerType StreamerType;
        struct FString ReplayName;
        struct FString FriendlyName;
        struct UObject* WorldContextObject;
        struct UDFMReplayInstance* ReturnValue;
    } Parms{};
    Parms.StreamerType = (enum ENetworkReplayStreamerType)StreamerType;
    Parms.ReplayName = (struct FString)ReplayName;
    Parms.FriendlyName = (struct FString)FriendlyName;
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UDFMReplaySystemBlueprintHelper::PauseReplay(struct UDFMReplayInstance* ReplayInstance, struct UObject* WorldContextObject, uint8_t isPause)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFMReplaySystemBlueprintHelper", "PauseReplay");
    struct
    {
        struct UDFMReplayInstance* ReplayInstance;
        struct UObject* WorldContextObject;
        uint8_t isPause;
        uint8_t ReturnValue;
    } Parms{};
    Parms.ReplayInstance = (struct UDFMReplayInstance*)ReplayInstance;
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    Parms.isPause = (uint8_t)isPause;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UDFMReplaySystemBlueprintHelper::IsInReplay(struct UObject* WorldContextObject)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFMReplaySystemBlueprintHelper", "IsInReplay");
    struct
    {
        struct UObject* WorldContextObject;
        uint8_t ReturnValue;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UDFMReplaySystemBlueprintHelper::HasReplayData(struct UObject* WorldContextObject)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFMReplaySystemBlueprintHelper", "HasReplayData");
    struct
    {
        struct UObject* WorldContextObject;
        uint8_t ReturnValue;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UDFMReplaySystemBlueprintHelper::GotoReplayAtTime(struct UDFMReplayInstance* ReplayInstance, struct UObject* WorldContextObject, float Time)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFMReplaySystemBlueprintHelper", "GotoReplayAtTime");
    struct
    {
        struct UDFMReplayInstance* ReplayInstance;
        struct UObject* WorldContextObject;
        float Time;
        uint8_t ReturnValue;
    } Parms{};
    Parms.ReplayInstance = (struct UDFMReplayInstance*)ReplayInstance;
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    Parms.Time = (float)Time;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UDFMReplayInstance* UDFMReplaySystemBlueprintHelper::GetReplayWithName(struct FString Name, struct UObject* WorldContextObject)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFMReplaySystemBlueprintHelper", "GetReplayWithName");
    struct
    {
        struct FString Name;
        struct UObject* WorldContextObject;
        struct UDFMReplayInstance* ReturnValue;
    } Parms{};
    Parms.Name = (struct FString)Name;
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UDFMReplayInstance* UDFMReplaySystemBlueprintHelper::GetCurrentRuntimeReplay(struct UObject* WorldContextObject)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFMReplaySystemBlueprintHelper", "GetCurrentRuntimeReplay");
    struct
    {
        struct UObject* WorldContextObject;
        struct UDFMReplayInstance* ReturnValue;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UDFMReplaySystemBlueprintHelper::GetAllReplaysFromServer(struct UObject* WorldContextObject)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFMReplaySystemBlueprintHelper", "GetAllReplaysFromServer");
    struct
    {
        struct UObject* WorldContextObject;
        uint8_t ReturnValue;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct TArray<struct UDFMReplayInstance*> UDFMReplaySystemBlueprintHelper::GetAllReplaysFromFile(struct UObject* WorldContextObject, uint8_t ForceRefresh, uint8_t onlyGetData)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFMReplaySystemBlueprintHelper", "GetAllReplaysFromFile");
    struct
    {
        struct UObject* WorldContextObject;
        uint8_t ForceRefresh;
        uint8_t onlyGetData;
        struct TArray<struct UDFMReplayInstance*> ReturnValue;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    Parms.ForceRefresh = (uint8_t)ForceRefresh;
    Parms.onlyGetData = (uint8_t)onlyGetData;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct TArray<struct UDFMReplayInstance*> UDFMReplaySystemBlueprintHelper::GetAllProtocolReplaysFromFile(struct UObject* WorldContextObject, struct FString ProtocolReplayFolderName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFMReplaySystemBlueprintHelper", "GetAllProtocolReplaysFromFile");
    struct
    {
        struct UObject* WorldContextObject;
        struct FString ProtocolReplayFolderName;
        struct TArray<struct UDFMReplayInstance*> ReturnValue;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    Parms.ProtocolReplayFolderName = (struct FString)ProtocolReplayFolderName;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct TArray<struct FString> UDFMReplaySystemBlueprintHelper::GetAllProtocolFiles(struct UObject* WorldContextObject)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFMReplaySystemBlueprintHelper", "GetAllProtocolFiles");
    struct
    {
        struct UObject* WorldContextObject;
        struct TArray<struct FString> ReturnValue;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UDFMReplaySystemBlueprintHelper::GenerateTimeString()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFMReplaySystemBlueprintHelper", "GenerateTimeString");
    struct
    {
        struct FString ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UDFMReplaySystemBlueprintHelper::GenerateReplayNameAndFilePath(struct UObject* WorldContextObject, struct FString& ReplayName, struct FString& FilePath)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFMReplaySystemBlueprintHelper", "GenerateReplayNameAndFilePath");
    struct
    {
        struct UObject* WorldContextObject;
        struct FString ReplayName;
        struct FString FilePath;
        uint8_t ReturnValue;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    ReplayName = Parms.ReplayName;
    FilePath = Parms.FilePath;
    return Parms.ReturnValue;
}

uint8_t UDFMReplaySystemBlueprintHelper::DirectStopReplayRecording(struct UObject* WorldContextObject, struct UDFMReplayInstance* ReplayInstance)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFMReplaySystemBlueprintHelper", "DirectStopReplayRecording");
    struct
    {
        struct UObject* WorldContextObject;
        struct UDFMReplayInstance* ReplayInstance;
        uint8_t ReturnValue;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    Parms.ReplayInstance = (struct UDFMReplayInstance*)ReplayInstance;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UDFMReplayInstance* UDFMReplaySystemBlueprintHelper::DirectStartReplayRecording(ENetworkReplayStreamerType StreamerType, struct FString ReplayName, struct FString FriendlyName, struct UObject* WorldContextObject, uint8_t usingCustomPath, struct FString FilePath, float RecordMaxTime)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFMReplaySystemBlueprintHelper", "DirectStartReplayRecording");
    struct
    {
        enum ENetworkReplayStreamerType StreamerType;
        struct FString ReplayName;
        struct FString FriendlyName;
        struct UObject* WorldContextObject;
        uint8_t usingCustomPath;
        struct FString FilePath;
        float RecordMaxTime;
        struct UDFMReplayInstance* ReturnValue;
    } Parms{};
    Parms.StreamerType = (enum ENetworkReplayStreamerType)StreamerType;
    Parms.ReplayName = (struct FString)ReplayName;
    Parms.FriendlyName = (struct FString)FriendlyName;
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    Parms.usingCustomPath = (uint8_t)usingCustomPath;
    Parms.FilePath = (struct FString)FilePath;
    Parms.RecordMaxTime = (float)RecordMaxTime;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UKillCamHUDView
void UKillCamHUDView::UpdateKillerWeapon()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("KillCamHUDView", "UpdateKillerWeapon");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UKillCamHUDView::UpdateKillerDetail()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("KillCamHUDView", "UpdateKillerDetail");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UKillCamHUDView::UpdateKillerAvatar()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("KillCamHUDView", "UpdateKillerAvatar");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UKillCamHUDView::UpdateExitHDKeyIconText(const int32_t& CountDownNum)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("KillCamHUDView", "UpdateExitHDKeyIconText");
    struct
    {
        int32_t CountDownNum;
    } Parms{};
    Parms.CountDownNum = (int32_t)CountDownNum;
    this->ProcessEvent(Func, &Parms);
}

void UKillCamHUDView::StopCharacter()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("KillCamHUDView", "StopCharacter");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UKillCamHUDView::SetNoKiller(uint8_t bNoKiller, uint8_t bNoKillerType)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("KillCamHUDView", "SetNoKiller");
    struct
    {
        uint8_t bNoKiller;
        uint8_t bNoKillerType;
    } Parms{};
    Parms.bNoKiller = (uint8_t)bNoKiller;
    Parms.bNoKillerType = (uint8_t)bNoKillerType;
    this->ProcessEvent(Func, &Parms);
}

void UKillCamHUDView::ReplayRealStart()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("KillCamHUDView", "ReplayRealStart");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UKillCamHUDView::RefreshKillerInfo()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("KillCamHUDView", "RefreshKillerInfo");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UKillCamHUDView::OpenWorldExitStage()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("KillCamHUDView", "OpenWorldExitStage");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UKillCamHUDView::OpenWorldEnterStage()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("KillCamHUDView", "OpenWorldEnterStage");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UKillCamHUDView::OnPlayReplayEnd()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("KillCamHUDView", "OnPlayReplayEnd");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UKillCamHUDView::OnLocalPlayerPawnChanged(struct AActor* OldCharacter, struct AActor* NewCharacter)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("KillCamHUDView", "OnLocalPlayerPawnChanged");
    struct
    {
        struct AActor* OldCharacter;
        struct AActor* NewCharacter;
    } Parms{};
    Parms.OldCharacter = (struct AActor*)OldCharacter;
    Parms.NewCharacter = (struct AActor*)NewCharacter;
    this->ProcessEvent(Func, &Parms);
}

void UKillCamHUDView::OnFirstTickReplayAfterCheckpoint(float TimeInMS)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("KillCamHUDView", "OnFirstTickReplayAfterCheckpoint");
    struct
    {
        float TimeInMS;
    } Parms{};
    Parms.TimeInMS = (float)TimeInMS;
    this->ProcessEvent(Func, &Parms);
}

void UKillCamHUDView::OnClientSeamlessTravelEnd(uint8_t bReconnect)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("KillCamHUDView", "OnClientSeamlessTravelEnd");
    struct
    {
        uint8_t bReconnect;
    } Parms{};
    Parms.bReconnect = (uint8_t)bReconnect;
    this->ProcessEvent(Func, &Parms);
}

void UKillCamHUDView::OnClickReportBtn()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("KillCamHUDView", "OnClickReportBtn");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UKillCamHUDView::OnClickPlackback()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("KillCamHUDView", "OnClickPlackback");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UKillCamHUDView::OnClickExitReplay()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("KillCamHUDView", "OnClickExitReplay");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UKillCamHUDView::InitHDKeyIcon()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("KillCamHUDView", "InitHDKeyIcon");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UKillCamHUDView::InitGamepadKeyIcon(const struct FName& InActionName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("KillCamHUDView", "InitGamepadKeyIcon");
    struct
    {
        struct FName InActionName;
    } Parms{};
    Parms.InActionName = (struct FName)InActionName;
    this->ProcessEvent(Func, &Parms);
}

void UKillCamHUDView::DisableProcessPlayerInputInReplay(uint8_t bDisable)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("KillCamHUDView", "DisableProcessPlayerInputInReplay");
    struct
    {
        uint8_t bDisable;
    } Parms{};
    Parms.bDisable = (uint8_t)bDisable;
    this->ProcessEvent(Func, &Parms);
}

void UKillCamHUDView::DelayReplayRealStart()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("KillCamHUDView", "DelayReplayRealStart");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UKillCamHUDView::ClearForReplayEnd()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("KillCamHUDView", "ClearForReplayEnd");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UKillCamHUDView::AddCharacterMarkerAndOutLine()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("KillCamHUDView", "AddCharacterMarkerAndOutLine");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// UProtocolFileDebugItem
void UProtocolFileDebugItem::OnClickPlayButton()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ProtocolFileDebugItem", "OnClickPlayButton");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// UReplayClienSDK
uint8_t UReplayClienSDK::UnloadReplayClientSDK()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("ReplayClienSDK", "UnloadReplayClientSDK");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UReplayClienSDK::Tick(float Delta)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("ReplayClienSDK", "Tick");
    struct
    {
        float Delta;
        uint8_t ReturnValue;
    } Parms{};
    Parms.Delta = (float)Delta;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UReplayClienSDK::TestPlayVideo(struct UObject* WorldContextObject)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("ReplayClienSDK", "TestPlayVideo");
    struct
    {
        struct UObject* WorldContextObject;
        uint8_t ReturnValue;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UReplayClienSDK::LoadReplayClientSDK(struct FString Folder, struct UObject* WorldContextObject)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("ReplayClienSDK", "LoadReplayClientSDK");
    struct
    {
        struct FString Folder;
        struct UObject* WorldContextObject;
        uint8_t ReturnValue;
    } Parms{};
    Parms.Folder = (struct FString)Folder;
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UReplayControllerView
void UReplayControllerView::TrySkipReplayTime()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ReplayControllerView", "TrySkipReplayTime");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UReplayControllerView::OnRegisterActor(struct AActor* ChangedActor)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ReplayControllerView", "OnRegisterActor");
    struct
    {
        struct AActor* ChangedActor;
    } Parms{};
    Parms.ChangedActor = (struct AActor*)ChangedActor;
    this->ProcessEvent(Func, &Parms);
}

void UReplayControllerView::OnGotoTimeSuccess()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ReplayControllerView", "OnGotoTimeSuccess");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UReplayControllerView::OnClientCharacterRebornInReplay(struct AGPCharacterBase* CHARACTER)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ReplayControllerView", "OnClientCharacterRebornInReplay");
    struct
    {
        struct AGPCharacterBase* CHARACTER;
    } Parms{};
    Parms.CHARACTER = (struct AGPCharacterBase*)CHARACTER;
    this->ProcessEvent(Func, &Parms);
}

void UReplayControllerView::OnClickSpeedButton()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ReplayControllerView", "OnClickSpeedButton");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UReplayControllerView::OnClickPlayButton()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ReplayControllerView", "OnClickPlayButton");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UReplayControllerView::OnClickPauseButton()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ReplayControllerView", "OnClickPauseButton");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UReplayControllerView::OnClickExitButton()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ReplayControllerView", "OnClickExitButton");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// UReplayDebugFileItemView
void UReplayDebugFileItemView::PlayReplay()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ReplayDebugFileItemView", "PlayReplay");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UReplayDebugFileItemView::OnSetData()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ReplayDebugFileItemView", "OnSetData");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// UReplayDebugMainView
void UReplayDebugMainView::RemoveFromViewPortHide()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ReplayDebugMainView", "RemoveFromViewPortHide");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UReplayDebugMainView::OnStopReplayRecording()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ReplayDebugMainView", "OnStopReplayRecording");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UReplayDebugMainView::OnStartReplayRecording()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ReplayDebugMainView", "OnStartReplayRecording");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UReplayDebugMainView::OnShow()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ReplayDebugMainView", "OnShow");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UReplayDebugMainView::OnRecordingStateChange(uint8_t Enable)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ReplayDebugMainView", "OnRecordingStateChange");
    struct
    {
        uint8_t Enable;
    } Parms{};
    Parms.Enable = (uint8_t)Enable;
    this->ProcessEvent(Func, &Parms);
}

void UReplayDebugMainView::OnLoadAllReplayFilesComplete()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ReplayDebugMainView", "OnLoadAllReplayFilesComplete");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UReplayDebugMainView::AddToViewPortShow()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ReplayDebugMainView", "AddToViewPortShow");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// UReplayKillCamHudController
void UReplayKillCamHudController::StopCharacter()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ReplayKillCamHudController", "StopCharacter");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UReplayKillCamHudController::ShowCharacterOutLine(uint8_t bShow, struct ADFMCharacter* InCharacter, uint8_t bSelf, uint8_t bTeammate)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ReplayKillCamHudController", "ShowCharacterOutLine");
    struct
    {
        uint8_t bShow;
        struct ADFMCharacter* InCharacter;
        uint8_t bSelf;
        uint8_t bTeammate;
    } Parms{};
    Parms.bShow = (uint8_t)bShow;
    Parms.InCharacter = (struct ADFMCharacter*)InCharacter;
    Parms.bSelf = (uint8_t)bSelf;
    Parms.bTeammate = (uint8_t)bTeammate;
    this->ProcessEvent(Func, &Parms);
}

void UReplayKillCamHudController::ReplayRealStart()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ReplayKillCamHudController", "ReplayRealStart");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UReplayKillCamHudController::RefreshKillerWeapon()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ReplayKillCamHudController", "RefreshKillerWeapon");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UReplayKillCamHudController::RefreshKillerDetail()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ReplayKillCamHudController", "RefreshKillerDetail");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UReplayKillCamHudController::RefreshKillerAvatar()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ReplayKillCamHudController", "RefreshKillerAvatar");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UReplayKillCamHudController::OpenWorldExitStage()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ReplayKillCamHudController", "OpenWorldExitStage");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UReplayKillCamHudController::OpenWorldEnterStage()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ReplayKillCamHudController", "OpenWorldEnterStage");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UReplayKillCamHudController::OnPlayReplayEnd()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ReplayKillCamHudController", "OnPlayReplayEnd");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UReplayKillCamHudController::OnLocalPlayerPawnChanged(struct AActor* OldCharacter, struct AActor* NewCharacter)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ReplayKillCamHudController", "OnLocalPlayerPawnChanged");
    struct
    {
        struct AActor* OldCharacter;
        struct AActor* NewCharacter;
    } Parms{};
    Parms.OldCharacter = (struct AActor*)OldCharacter;
    Parms.NewCharacter = (struct AActor*)NewCharacter;
    this->ProcessEvent(Func, &Parms);
}

void UReplayKillCamHudController::OnFirstTickReplayAfterCheckpoint(float TimeInMS)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ReplayKillCamHudController", "OnFirstTickReplayAfterCheckpoint");
    struct
    {
        float TimeInMS;
    } Parms{};
    Parms.TimeInMS = (float)TimeInMS;
    this->ProcessEvent(Func, &Parms);
}

void UReplayKillCamHudController::OnClientSeamlessTravelEnd(uint8_t bReconnect)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ReplayKillCamHudController", "OnClientSeamlessTravelEnd");
    struct
    {
        uint8_t bReconnect;
    } Parms{};
    Parms.bReconnect = (uint8_t)bReconnect;
    this->ProcessEvent(Func, &Parms);
}

void UReplayKillCamHudController::OnClickReportBtn()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ReplayKillCamHudController", "OnClickReportBtn");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UReplayKillCamHudController::OnClickPlackback()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ReplayKillCamHudController", "OnClickPlackback");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UReplayKillCamHudController::OnClickExitReplay()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ReplayKillCamHudController", "OnClickExitReplay");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UReplayKillCamHudController::DisableProcessPlayerInputInReplay(uint8_t bDisable)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ReplayKillCamHudController", "DisableProcessPlayerInputInReplay");
    struct
    {
        uint8_t bDisable;
    } Parms{};
    Parms.bDisable = (uint8_t)bDisable;
    this->ProcessEvent(Func, &Parms);
}

void UReplayKillCamHudController::DelayShowCharacterOutLine(uint8_t bShow, struct ADFMCharacter* InCharacter, uint8_t bSelf, uint8_t bTeammate)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ReplayKillCamHudController", "DelayShowCharacterOutLine");
    struct
    {
        uint8_t bShow;
        struct ADFMCharacter* InCharacter;
        uint8_t bSelf;
        uint8_t bTeammate;
    } Parms{};
    Parms.bShow = (uint8_t)bShow;
    Parms.InCharacter = (struct ADFMCharacter*)InCharacter;
    Parms.bSelf = (uint8_t)bSelf;
    Parms.bTeammate = (uint8_t)bTeammate;
    this->ProcessEvent(Func, &Parms);
}

void UReplayKillCamHudController::DelayReplayRealStart()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ReplayKillCamHudController", "DelayReplayRealStart");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UReplayKillCamHudController::ClearForReplayShow()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ReplayKillCamHudController", "ClearForReplayShow");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UReplayKillCamHudController::ClearForReplayPlayback()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ReplayKillCamHudController", "ClearForReplayPlayback");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UReplayKillCamHudController::ClearForReplayEnd()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ReplayKillCamHudController", "ClearForReplayEnd");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UReplayKillCamHudController::AddCharacterMarkerAndOutLine()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ReplayKillCamHudController", "AddCharacterMarkerAndOutLine");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// UReplayKillCamHUDView
void UReplayKillCamHUDView::UpdateExitHDKeyIconText(const int32_t& CountDownNum)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ReplayKillCamHUDView", "UpdateExitHDKeyIconText");
    struct
    {
        int32_t CountDownNum;
    } Parms{};
    Parms.CountDownNum = (int32_t)CountDownNum;
    this->ProcessEvent(Func, &Parms);
}

void UReplayKillCamHUDView::SetNoKiller(uint8_t bNoKiller, uint8_t bNoKillerType)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ReplayKillCamHUDView", "SetNoKiller");
    struct
    {
        uint8_t bNoKiller;
        uint8_t bNoKillerType;
    } Parms{};
    Parms.bNoKiller = (uint8_t)bNoKiller;
    Parms.bNoKillerType = (uint8_t)bNoKillerType;
    this->ProcessEvent(Func, &Parms);
}

void UReplayKillCamHUDView::InitHDKeyIcon()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ReplayKillCamHUDView", "InitHDKeyIcon");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// UReplayListDisplayView
void UReplayListDisplayView::RemoveFromViewPortHide()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ReplayListDisplayView", "RemoveFromViewPortHide");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UReplayListDisplayView::OnShow()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ReplayListDisplayView", "OnShow");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

int32_t UReplayListDisplayView::OnReplayItemCount()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ReplayListDisplayView", "OnReplayItemCount");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UReplayListDisplayView::OnProtocolFileItemCount()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ReplayListDisplayView", "OnProtocolFileItemCount");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UReplayListDisplayView::OnParseProtocolFileSuccess()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ReplayListDisplayView", "OnParseProtocolFileSuccess");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UReplayListDisplayView::OnOneReplayItemSetData(int32_t Position, struct UWidget* ItemWidget)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ReplayListDisplayView", "OnOneReplayItemSetData");
    struct
    {
        int32_t Position;
        struct UWidget* ItemWidget;
    } Parms{};
    Parms.Position = (int32_t)Position;
    Parms.ItemWidget = (struct UWidget*)ItemWidget;
    this->ProcessEvent(Func, &Parms);
}

void UReplayListDisplayView::OnOneProtocolFileItemSetData(int32_t Position, struct UWidget* ItemWidget)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ReplayListDisplayView", "OnOneProtocolFileItemSetData");
    struct
    {
        int32_t Position;
        struct UWidget* ItemWidget;
    } Parms{};
    Parms.Position = (int32_t)Position;
    Parms.ItemWidget = (struct UWidget*)ItemWidget;
    this->ProcessEvent(Func, &Parms);
}

void UReplayListDisplayView::OnLoadAllReplayFilesComplete()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ReplayListDisplayView", "OnLoadAllReplayFilesComplete");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UReplayListDisplayView::OnClickPlayButton()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ReplayListDisplayView", "OnClickPlayButton");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UReplayListDisplayView::AddToViewPortShow()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ReplayListDisplayView", "AddToViewPortShow");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// UReplayLoadingView
void UReplayLoadingView::OnReplayRealStart()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ReplayLoadingView", "OnReplayRealStart");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// UReplayOBView
void UReplayOBView::OnClientCharacterListChanged(struct AGPCharacterBase* CHARACTER)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ReplayOBView", "OnClientCharacterListChanged");
    struct
    {
        struct AGPCharacterBase* CHARACTER;
    } Parms{};
    Parms.CHARACTER = (struct AGPCharacterBase*)CHARACTER;
    this->ProcessEvent(Func, &Parms);
}

void UReplayOBView::BP_OnCharacterListChanged()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ReplayOBView", "BP_OnCharacterListChanged");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// UReplayPlaybackHudController
void UReplayPlaybackHudController::OnRegisterActor(struct AActor* ChangedActor)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ReplayPlaybackHudController", "OnRegisterActor");
    struct
    {
        struct AActor* ChangedActor;
    } Parms{};
    Parms.ChangedActor = (struct AActor*)ChangedActor;
    this->ProcessEvent(Func, &Parms);
}

void UReplayPlaybackHudController::OnGotoTimeSuccess()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ReplayPlaybackHudController", "OnGotoTimeSuccess");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UReplayPlaybackHudController::OnClientCharacterRebornInReplay(struct AGPCharacterBase* CHARACTER)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ReplayPlaybackHudController", "OnClientCharacterRebornInReplay");
    struct
    {
        struct AGPCharacterBase* CHARACTER;
    } Parms{};
    Parms.CHARACTER = (struct AGPCharacterBase*)CHARACTER;
    this->ProcessEvent(Func, &Parms);
}

void UReplayPlaybackHudController::OnClickSpeedButton()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ReplayPlaybackHudController", "OnClickSpeedButton");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UReplayPlaybackHudController::OnClickPlayButton()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ReplayPlaybackHudController", "OnClickPlayButton");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UReplayPlaybackHudController::OnClickPauseButton()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ReplayPlaybackHudController", "OnClickPauseButton");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UReplayPlaybackHudController::OnClickExitButton()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ReplayPlaybackHudController", "OnClickExitButton");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

} // namespace SDK
