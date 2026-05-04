#include "GPAudioRuntime.hpp"
#include "AkAudio.hpp"
#include "Engine.hpp"
#include <cstring> // memcpy for ArrayDim>1 param marshalling

namespace SDK
{

// ---- UAnimNotify_GPAudioBase::* ----
uint8_t UAnimNotify_GPAudioBase::CheckNeedPlay(struct AActor* Owner)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AnimNotify_GPAudioBase", "CheckNeedPlay");
    struct
    {
        struct AActor* Owner;
        uint8_t ReturnValue;
    } Parms{};
    Parms.Owner = (struct AActor*)Owner;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// ---- UAnimNotifyState_AudioEventBase::* ----
uint8_t UAnimNotifyState_AudioEventBase::CheckNeedPlay(struct AActor* Owner)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AnimNotifyState_AudioEventBase", "CheckNeedPlay");
    struct
    {
        struct AActor* Owner;
        uint8_t ReturnValue;
    } Parms{};
    Parms.Owner = (struct AActor*)Owner;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// ---- UAnimNotifyState_GPAudioEvent::* ----
void UAnimNotifyState_GPAudioEvent::ReceivedNotifyEnd(struct USkeletalMeshComponent* MeshComp, struct UAnimSequenceBase* Animation, float TotalDuration, uint8_t bIsFPP)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AnimNotifyState_GPAudioEvent", "ReceivedNotifyEnd");
    struct
    {
        struct USkeletalMeshComponent* MeshComp;
        struct UAnimSequenceBase* Animation;
        float TotalDuration;
        uint8_t bIsFPP;
    } Parms{};
    Parms.MeshComp = (struct USkeletalMeshComponent*)MeshComp;
    Parms.Animation = (struct UAnimSequenceBase*)Animation;
    Parms.TotalDuration = (float)TotalDuration;
    Parms.bIsFPP = (uint8_t)bIsFPP;
    this->ProcessEvent(Func, &Parms);
}

void UAnimNotifyState_GPAudioEvent::ReceivedNotifyBegin(struct USkeletalMeshComponent* MeshComp, struct UAnimSequenceBase* Animation, float TotalDuration, uint8_t bIsFPP)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AnimNotifyState_GPAudioEvent", "ReceivedNotifyBegin");
    struct
    {
        struct USkeletalMeshComponent* MeshComp;
        struct UAnimSequenceBase* Animation;
        float TotalDuration;
        uint8_t bIsFPP;
    } Parms{};
    Parms.MeshComp = (struct USkeletalMeshComponent*)MeshComp;
    Parms.Animation = (struct UAnimSequenceBase*)Animation;
    Parms.TotalDuration = (float)TotalDuration;
    Parms.bIsFPP = (uint8_t)bIsFPP;
    this->ProcessEvent(Func, &Parms);
}

// ---- AGameAudioVolume::* ----
void AGameAudioVolume::OnAudioWeatherTypeChanged(EAudioWeatherType WeatherType)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GameAudioVolume", "OnAudioWeatherTypeChanged");
    struct
    {
        enum EAudioWeatherType WeatherType;
    } Parms{};
    Parms.WeatherType = (enum EAudioWeatherType)WeatherType;
    this->ProcessEvent(Func, &Parms);
}

// ---- AGameAcousticPortal::* ----
EAkAcousticPortalState AGameAcousticPortal::GetCurrentState()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GameAcousticPortal", "GetCurrentState");
    struct
    {
        enum EAkAcousticPortalState ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void AGameAcousticPortal::EnablePortal(struct FString InReason)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GameAcousticPortal", "EnablePortal");
    struct
    {
        struct FString InReason;
    } Parms{};
    Parms.InReason = (struct FString)InReason;
    this->ProcessEvent(Func, &Parms);
}

void AGameAcousticPortal::DisablePortal(struct FString InReason)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GameAcousticPortal", "DisablePortal");
    struct
    {
        struct FString InReason;
    } Parms{};
    Parms.InReason = (struct FString)InReason;
    this->ProcessEvent(Func, &Parms);
}

// ---- UGameAkComponent::* ----
void UGameAkComponent::TickWaterState(struct UGameAkComponent* InListener)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GameAkComponent", "TickWaterState");
    struct
    {
        struct UGameAkComponent* InListener;
    } Parms{};
    Parms.InListener = (struct UGameAkComponent*)InListener;
    this->ProcessEvent(Func, &Parms);
}

void UGameAkComponent::StopGameAk()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GameAkComponent", "StopGameAk");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UGameAkComponent::StopDoppler()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GameAkComponent", "StopDoppler");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UGameAkComponent::StartDoppler(float ScalingFactor, float TimeStep)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GameAkComponent", "StartDoppler");
    struct
    {
        float ScalingFactor;
        float TimeStep;
    } Parms{};
    Parms.ScalingFactor = (float)ScalingFactor;
    Parms.TimeStep = (float)TimeStep;
    this->ProcessEvent(Func, &Parms);
}

void UGameAkComponent::SetWaterStateRTPC(float TargetWaterStateRTPCValue)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GameAkComponent", "SetWaterStateRTPC");
    struct
    {
        float TargetWaterStateRTPCValue;
    } Parms{};
    Parms.TargetWaterStateRTPCValue = (float)TargetWaterStateRTPCValue;
    this->ProcessEvent(Func, &Parms);
}

void UGameAkComponent::SetWaterStateCheckService(uint8_t bEnable)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GameAkComponent", "SetWaterStateCheckService");
    struct
    {
        uint8_t bEnable;
    } Parms{};
    Parms.bEnable = (uint8_t)bEnable;
    this->ProcessEvent(Func, &Parms);
}

void UGameAkComponent::SetWaterPreset(EGPAudioWaterPreset InState)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GameAkComponent", "SetWaterPreset");
    struct
    {
        enum EGPAudioWaterPreset InState;
    } Parms{};
    Parms.InState = (enum EGPAudioWaterPreset)InState;
    this->ProcessEvent(Func, &Parms);
}

struct FGPAudioFuturePlayingID UGameAkComponent::PostGPAudio(struct UGPAudioEventAsset* AudioAsset, uint8_t bMakeNoise, EGPAudioBlueprintType AudioType, uint8_t bPreCutted)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GameAkComponent", "PostGPAudio");
    struct
    {
        struct UGPAudioEventAsset* AudioAsset;
        uint8_t bMakeNoise;
        enum EGPAudioBlueprintType AudioType;
        uint8_t bPreCutted;
        struct FGPAudioFuturePlayingID ReturnValue;
    } Parms{};
    Parms.AudioAsset = (struct UGPAudioEventAsset*)AudioAsset;
    Parms.bMakeNoise = (uint8_t)bMakeNoise;
    Parms.AudioType = (enum EGPAudioBlueprintType)AudioType;
    Parms.bPreCutted = (uint8_t)bPreCutted;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UGameAkComponent::PlayPathwayAudio(EGPAudioFootSoundType InAudioFootType, EGPAudioFloorType InFloorType)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GameAkComponent", "PlayPathwayAudio");
    struct
    {
        enum EGPAudioFootSoundType InAudioFootType;
        enum EGPAudioFloorType InFloorType;
    } Parms{};
    Parms.InAudioFootType = (enum EGPAudioFootSoundType)InAudioFootType;
    Parms.InFloorType = (enum EGPAudioFloorType)InFloorType;
    this->ProcessEvent(Func, &Parms);
}

void UGameAkComponent::PlayFoliageOverlapStirAudio()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GameAkComponent", "PlayFoliageOverlapStirAudio");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UGameAkComponent::PlayFoliageOverlapAudio(struct UGPAudioEventAsset* AudioEvent)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GameAkComponent", "PlayFoliageOverlapAudio");
    struct
    {
        struct UGPAudioEventAsset* AudioEvent;
    } Parms{};
    Parms.AudioEvent = (struct UGPAudioEventAsset*)AudioEvent;
    this->ProcessEvent(Func, &Parms);
}

void UGameAkComponent::OnAudioFinishCallbackDelay(EGPEventCallbackType CallbackType, int32_t PlayingId)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GameAkComponent", "OnAudioFinishCallbackDelay");
    struct
    {
        enum EGPEventCallbackType CallbackType;
        int32_t PlayingId;
    } Parms{};
    Parms.CallbackType = (enum EGPEventCallbackType)CallbackType;
    Parms.PlayingId = (int32_t)PlayingId;
    this->ProcessEvent(Func, &Parms);
}

void UGameAkComponent::OnAudioFinishCallback(EGPEventCallbackType CallbackType, int32_t PlayingId)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GameAkComponent", "OnAudioFinishCallback");
    struct
    {
        enum EGPEventCallbackType CallbackType;
        int32_t PlayingId;
    } Parms{};
    Parms.CallbackType = (enum EGPEventCallbackType)CallbackType;
    Parms.PlayingId = (int32_t)PlayingId;
    this->ProcessEvent(Func, &Parms);
}

void UGameAkComponent::OnAttenuationScaleUpdated()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GameAkComponent", "OnAttenuationScaleUpdated");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

uint8_t UGameAkComponent::NeedCheckWaterBeforePlay()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GameAkComponent", "NeedCheckWaterBeforePlay");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UGameAkComponent::IsGameAkUnderWater()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GameAkComponent", "IsGameAkUnderWater");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UGameAkComponent::GetFootLocation(struct FVector& FootLocation)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GameAkComponent", "GetFootLocation");
    struct
    {
        struct FVector FootLocation;
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    FootLocation = Parms.FootLocation;
    return Parms.ReturnValue;
}

uint8_t UGameAkComponent::CheckWaterFrameLimit()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GameAkComponent", "CheckWaterFrameLimit");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UGameAkComponent::CheckGameAkWaterState()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GameAkComponent", "CheckGameAkWaterState");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// ---- UGameAudioPolygonEmitter::* ----
uint8_t UGameAudioPolygonEmitter::Play3DAudio(struct UGPAudioEventAsset* Event)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GameAudioPolygonEmitter", "Play3DAudio");
    struct
    {
        struct UGPAudioEventAsset* Event;
        uint8_t ReturnValue;
    } Parms{};
    Parms.Event = (struct UGPAudioEventAsset*)Event;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// ---- UGameAudioRiverEmitter::* ----
uint8_t UGameAudioRiverEmitter::Play3DAudio(struct UGPAudioEventAsset* Event)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GameAudioRiverEmitter", "Play3DAudio");
    struct
    {
        struct UGPAudioEventAsset* Event;
        uint8_t ReturnValue;
    } Parms{};
    Parms.Event = (struct UGPAudioEventAsset*)Event;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UGameAudioRiverEmitter::CopySplineCurvePoints(struct USplineComponent* CopyFrom)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GameAudioRiverEmitter", "CopySplineCurvePoints");
    struct
    {
        struct USplineComponent* CopyFrom;
    } Parms{};
    Parms.CopyFrom = (struct USplineComponent*)CopyFrom;
    this->ProcessEvent(Func, &Parms);
}

void UGameAudioRiverEmitter::CopySplineCurve(struct USplineComponent* CopyTo, struct USplineComponent* CopyFrom)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GameAudioRiverEmitter", "CopySplineCurve");
    struct
    {
        struct USplineComponent* CopyTo;
        struct USplineComponent* CopyFrom;
    } Parms{};
    Parms.CopyTo = (struct USplineComponent*)CopyTo;
    Parms.CopyFrom = (struct USplineComponent*)CopyFrom;
    this->ProcessEvent(Func, &Parms);
}

// ---- UGPAMultiEmitterComponent::* ----
void UGPAMultiEmitterComponent::StopEmitterAudio(struct FGPAAttachEmitterInfo EmitterInfo)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPAMultiEmitterComponent", "StopEmitterAudio");
    struct
    {
        struct FGPAAttachEmitterInfo EmitterInfo;
    } Parms{};
    Parms.EmitterInfo = (struct FGPAAttachEmitterInfo)EmitterInfo;
    this->ProcessEvent(Func, &Parms);
}

void UGPAMultiEmitterComponent::StopAudioByIndex(int32_t Index, struct UGPAudioEventAsset* PlayEvent)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPAMultiEmitterComponent", "StopAudioByIndex");
    struct
    {
        int32_t Index;
        struct UGPAudioEventAsset* PlayEvent;
    } Parms{};
    Parms.Index = (int32_t)Index;
    Parms.PlayEvent = (struct UGPAudioEventAsset*)PlayEvent;
    this->ProcessEvent(Func, &Parms);
}

void UGPAMultiEmitterComponent::StopAudioByActor(struct AActor* EmitterOwner)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPAMultiEmitterComponent", "StopAudioByActor");
    struct
    {
        struct AActor* EmitterOwner;
    } Parms{};
    Parms.EmitterOwner = (struct AActor*)EmitterOwner;
    this->ProcessEvent(Func, &Parms);
}

void UGPAMultiEmitterComponent::StopAllEmittersAudio()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPAMultiEmitterComponent", "StopAllEmittersAudio");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UGPAMultiEmitterComponent::SetWorldLocationByIndex(const struct FVector& Location, int32_t Index)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPAMultiEmitterComponent", "SetWorldLocationByIndex");
    struct
    {
        struct FVector Location;
        int32_t Index;
    } Parms{};
    Parms.Location = (struct FVector)Location;
    Parms.Index = (int32_t)Index;
    this->ProcessEvent(Func, &Parms);
}

struct FGPAudioFuturePlayingID UGPAMultiEmitterComponent::PlayEmitterAudio(struct FGPAAttachEmitterInfo EmitterInfo)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPAMultiEmitterComponent", "PlayEmitterAudio");
    struct
    {
        struct FGPAAttachEmitterInfo EmitterInfo;
        struct FGPAudioFuturePlayingID ReturnValue;
    } Parms{};
    Parms.EmitterInfo = (struct FGPAAttachEmitterInfo)EmitterInfo;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FGPAudioFuturePlayingID UGPAMultiEmitterComponent::PlayAudioByIndex(struct UGPAudioEventAsset* PlayEvent, int32_t Index, EGPAudioBlueprintType PlayType)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPAMultiEmitterComponent", "PlayAudioByIndex");
    struct
    {
        struct UGPAudioEventAsset* PlayEvent;
        int32_t Index;
        enum EGPAudioBlueprintType PlayType;
        struct FGPAudioFuturePlayingID ReturnValue;
    } Parms{};
    Parms.PlayEvent = (struct UGPAudioEventAsset*)PlayEvent;
    Parms.Index = (int32_t)Index;
    Parms.PlayType = (enum EGPAudioBlueprintType)PlayType;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FGPAudioFuturePlayingID UGPAMultiEmitterComponent::PlayActorEmitterAudio(struct AActor* EmitterOwner, struct UGPAudioEventAsset* PlayEvent, EGPAudioBlueprintType PlayType)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPAMultiEmitterComponent", "PlayActorEmitterAudio");
    struct
    {
        struct AActor* EmitterOwner;
        struct UGPAudioEventAsset* PlayEvent;
        enum EGPAudioBlueprintType PlayType;
        struct FGPAudioFuturePlayingID ReturnValue;
    } Parms{};
    Parms.EmitterOwner = (struct AActor*)EmitterOwner;
    Parms.PlayEvent = (struct UGPAudioEventAsset*)PlayEvent;
    Parms.PlayType = (enum EGPAudioBlueprintType)PlayType;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UGPAMultiEmitterComponent::InitNultiAttachComEmitters(const struct TArray<struct FGPAAttachEmitterInfo>& AttachEmitterInfos, uint8_t bPlayEvent)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPAMultiEmitterComponent", "InitNultiAttachComEmitters");
    struct
    {
        struct TArray<struct FGPAAttachEmitterInfo> AttachEmitterInfos;
        uint8_t bPlayEvent;
    } Parms{};
    Parms.AttachEmitterInfos = (struct TArray<struct FGPAAttachEmitterInfo>)AttachEmitterInfos;
    Parms.bPlayEvent = (uint8_t)bPlayEvent;
    this->ProcessEvent(Func, &Parms);
}

void UGPAMultiEmitterComponent::InitEmittersByActors(const struct TArray<struct AActor*>& AttachActors)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPAMultiEmitterComponent", "InitEmittersByActors");
    struct
    {
        struct TArray<struct AActor*> AttachActors;
    } Parms{};
    Parms.AttachActors = (struct TArray<struct AActor*>)AttachActors;
    this->ProcessEvent(Func, &Parms);
}

void UGPAMultiEmitterComponent::InitEmitters(struct USkeletalMeshComponent* SkeletalMC, struct TArray<struct FName> AttachNodeNames)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPAMultiEmitterComponent", "InitEmitters");
    struct
    {
        struct USkeletalMeshComponent* SkeletalMC;
        struct TArray<struct FName> AttachNodeNames;
    } Parms{};
    Parms.SkeletalMC = (struct USkeletalMeshComponent*)SkeletalMC;
    Parms.AttachNodeNames = (struct TArray<struct FName>)AttachNodeNames;
    this->ProcessEvent(Func, &Parms);
}

void UGPAMultiEmitterComponent::CreateEmitters(int32_t EmitterNum)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPAMultiEmitterComponent", "CreateEmitters");
    struct
    {
        int32_t EmitterNum;
    } Parms{};
    Parms.EmitterNum = (int32_t)EmitterNum;
    this->ProcessEvent(Func, &Parms);
}

// ---- UGPAudioDataAssetManager::* ----
void UGPAudioDataAssetManager::OnCompanionAssetsLoadedComplete(struct TArray<struct FSoftObjectPath> Paths)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPAudioDataAssetManager", "OnCompanionAssetsLoadedComplete");
    struct
    {
        struct TArray<struct FSoftObjectPath> Paths;
    } Parms{};
    Parms.Paths = (struct TArray<struct FSoftObjectPath>)Paths;
    this->ProcessEvent(Func, &Parms);
}

void UGPAudioDataAssetManager::OnAsyncLoadSpatialAudioConfigsFinished(struct TArray<struct FSoftObjectPath> ObjectPaths)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPAudioDataAssetManager", "OnAsyncLoadSpatialAudioConfigsFinished");
    struct
    {
        struct TArray<struct FSoftObjectPath> ObjectPaths;
    } Parms{};
    Parms.ObjectPaths = (struct TArray<struct FSoftObjectPath>)ObjectPaths;
    this->ProcessEvent(Func, &Parms);
}

void UGPAudioDataAssetManager::OnAsyncLoadScatteredAudioEventsFinished(struct TArray<struct FSoftObjectPath> ObjectPaths)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPAudioDataAssetManager", "OnAsyncLoadScatteredAudioEventsFinished");
    struct
    {
        struct TArray<struct FSoftObjectPath> ObjectPaths;
    } Parms{};
    Parms.ObjectPaths = (struct TArray<struct FSoftObjectPath>)ObjectPaths;
    this->ProcessEvent(Func, &Parms);
}

void UGPAudioDataAssetManager::OnAsyncLoadAssetsWhenStartModuleFinished(struct TArray<struct FSoftObjectPath> ObjectPaths)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPAudioDataAssetManager", "OnAsyncLoadAssetsWhenStartModuleFinished");
    struct
    {
        struct TArray<struct FSoftObjectPath> ObjectPaths;
    } Parms{};
    Parms.ObjectPaths = (struct TArray<struct FSoftObjectPath>)ObjectPaths;
    this->ProcessEvent(Func, &Parms);
}

struct UCurveFloat* UGPAudioDataAssetManager::GetTransmissionDistanceSubtractionCurve()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPAudioDataAssetManager", "GetTransmissionDistanceSubtractionCurve");
    struct
    {
        struct UCurveFloat* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UCurveFloat* UGPAudioDataAssetManager::GetOccFloorResultMappingCurve()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPAudioDataAssetManager", "GetOccFloorResultMappingCurve");
    struct
    {
        struct UCurveFloat* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UCurveFloat* UGPAudioDataAssetManager::GetDiffractionPortalAttenFactorCurve()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPAudioDataAssetManager", "GetDiffractionPortalAttenFactorCurve");
    struct
    {
        struct UCurveFloat* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UCurveFloat* UGPAudioDataAssetManager::GetDiffractionDistanceFactorCurve()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPAudioDataAssetManager", "GetDiffractionDistanceFactorCurve");
    struct
    {
        struct UCurveFloat* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UCurveFloat* UGPAudioDataAssetManager::GetDiffractionAngleFactorCurve()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPAudioDataAssetManager", "GetDiffractionAngleFactorCurve");
    struct
    {
        struct UCurveFloat* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// ---- UGPAudioPriorityMethod::* ----
uint8_t UGPAudioPriorityMethod::ShouldEventPlayUnderLimit(struct UGameAkComponent* Listener, const struct FGPAudioPriorityParam& InParam, float& OutPriority)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPAudioPriorityMethod", "ShouldEventPlayUnderLimit");
    struct
    {
        struct UGameAkComponent* Listener;
        struct FGPAudioPriorityParam InParam;
        float OutPriority;
        uint8_t ReturnValue;
    } Parms{};
    Parms.Listener = (struct UGameAkComponent*)Listener;
    Parms.InParam = (struct FGPAudioPriorityParam)InParam;
    this->ProcessEvent(Func, &Parms);
    OutPriority = Parms.OutPriority;
    return Parms.ReturnValue;
}

uint8_t UGPAudioPriorityMethod::CheckEventUnderLimit(struct UGameAkComponent* Listener, const struct FGPAudioPriorityParam& InParam)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPAudioPriorityMethod", "CheckEventUnderLimit");
    struct
    {
        struct UGameAkComponent* Listener;
        struct FGPAudioPriorityParam InParam;
        uint8_t ReturnValue;
    } Parms{};
    Parms.Listener = (struct UGameAkComponent*)Listener;
    Parms.InParam = (struct FGPAudioPriorityParam)InParam;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// ---- AGPAudioPointEmitter::* ----
void AGPAudioPointEmitter::StopAudio()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPAudioPointEmitter", "StopAudio");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

uint8_t AGPAudioPointEmitter::PlayAudio()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPAudioPointEmitter", "PlayAudio");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UGPAudioRoomBakeDataAsset* AGPAudioPointEmitter::GetRoomBakeData()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPAudioPointEmitter", "GetRoomBakeData");
    struct
    {
        struct UGPAudioRoomBakeDataAsset* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void AGPAudioPointEmitter::DebugDrawCurrentRoomBakeValues()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPAudioPointEmitter", "DebugDrawCurrentRoomBakeValues");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AGPAudioPointEmitter::DebugDrawCurrentRoomBakeNeighbors()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPAudioPointEmitter", "DebugDrawCurrentRoomBakeNeighbors");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// ---- AGPAudioMultiPointEmitter::* ----
void AGPAudioMultiPointEmitter::DebugDrawMultiEmitters(float DrawTime)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPAudioMultiPointEmitter", "DebugDrawMultiEmitters");
    struct
    {
        float DrawTime;
    } Parms{};
    Parms.DrawTime = (float)DrawTime;
    this->ProcessEvent(Func, &Parms);
}

void AGPAudioMultiPointEmitter::CopySplinePointsToRelativeTransforms(struct USplineComponent* TargetSpline)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPAudioMultiPointEmitter", "CopySplinePointsToRelativeTransforms");
    struct
    {
        struct USplineComponent* TargetSpline;
    } Parms{};
    Parms.TargetSpline = (struct USplineComponent*)TargetSpline;
    this->ProcessEvent(Func, &Parms);
}

// ---- UGPAudioMusicPlayer::* ----
uint8_t UGPAudioMusicPlayer::PlayMusic()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPAudioMusicPlayer", "PlayMusic");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UGPAudioMusicPlayer::PauseMusic()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPAudioMusicPlayer", "PauseMusic");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UGPAudioMusicPlayer::InitPlaylistConfig(struct FPlaylistConfig InPlaylistConfig)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPAudioMusicPlayer", "InitPlaylistConfig");
    struct
    {
        struct FPlaylistConfig InPlaylistConfig;
        uint8_t ReturnValue;
    } Parms{};
    Parms.InPlaylistConfig = (struct FPlaylistConfig)InPlaylistConfig;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UGPAudioMusicPlayer::EndMusic()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPAudioMusicPlayer", "EndMusic");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

uint8_t UGPAudioMusicPlayer::ActivePlaylist(struct UGPAudioMusicPlaylist* InMusicPlaylistComp, struct FPlaylistConfig InPlaylistConfig)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPAudioMusicPlayer", "ActivePlaylist");
    struct
    {
        struct UGPAudioMusicPlaylist* InMusicPlaylistComp;
        struct FPlaylistConfig InPlaylistConfig;
        uint8_t ReturnValue;
    } Parms{};
    Parms.InMusicPlaylistComp = (struct UGPAudioMusicPlaylist*)InMusicPlaylistComp;
    Parms.InPlaylistConfig = (struct FPlaylistConfig)InPlaylistConfig;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// ---- UGPAudioMusicPlaylist::* ----
void UGPAudioMusicPlaylist::OnRepCurrentMusicPassedTimeMS()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPAudioMusicPlaylist", "OnRepCurrentMusicPassedTimeMS");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

int32_t UGPAudioMusicPlaylist::GetPlayIndexByPlayCount(int32_t PlayCount)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPAudioMusicPlaylist", "GetPlayIndexByPlayCount");
    struct
    {
        int32_t PlayCount;
        int32_t ReturnValue;
    } Parms{};
    Parms.PlayCount = (int32_t)PlayCount;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UGPAudioMusicPlaylist::ClientEndMusic()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPAudioMusicPlaylist", "ClientEndMusic");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// ---- IGPAudioProxyInterface::* ----
uint16_t IGPAudioProxyInterface::GetCharacterStateParamsFromAudioProxy(struct ACHARACTER* InCharacter)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPAudioProxyInterface", "GetCharacterStateParamsFromAudioProxy");
    struct
    {
        struct ACHARACTER* InCharacter;
        uint16_t ReturnValue;
    } Parms{};
    Parms.InCharacter = (struct ACHARACTER*)InCharacter;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FVector IGPAudioProxyInterface::GetCharacterLocationFromAudioProxy(struct ACHARACTER* InCharacter)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPAudioProxyInterface", "GetCharacterLocationFromAudioProxy");
    struct
    {
        struct ACHARACTER* InCharacter;
        struct FVector ReturnValue;
    } Parms{};
    Parms.InCharacter = (struct ACHARACTER*)InCharacter;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t IGPAudioProxyInterface::GetCharacterAudioProxyInfo(struct ACHARACTER* InCharacter, struct FPVSAudioActorInfo& OutInfo)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPAudioProxyInterface", "GetCharacterAudioProxyInfo");
    struct
    {
        struct ACHARACTER* InCharacter;
        struct FPVSAudioActorInfo OutInfo;
        uint8_t ReturnValue;
    } Parms{};
    Parms.InCharacter = (struct ACHARACTER*)InCharacter;
    this->ProcessEvent(Func, &Parms);
    OutInfo = Parms.OutInfo;
    return Parms.ReturnValue;
}

// ---- UGPAudioRadio::* ----
uint8_t UGPAudioRadio::TurnUP()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPAudioRadio", "TurnUP");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UGPAudioRadio::TurnON(uint8_t bResetFm)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPAudioRadio", "TurnON");
    struct
    {
        uint8_t bResetFm;
        uint8_t ReturnValue;
    } Parms{};
    Parms.bResetFm = (uint8_t)bResetFm;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UGPAudioRadio::TurnOFF()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPAudioRadio", "TurnOFF");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

float UGPAudioRadio::TurnFm(float Delta)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPAudioRadio", "TurnFm");
    struct
    {
        float Delta;
        float ReturnValue;
    } Parms{};
    Parms.Delta = (float)Delta;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UGPAudioRadio::TurnDown()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPAudioRadio", "TurnDown");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UGPAudioRadio::TurnChannel(struct FName InChannelID, uint8_t bNeedNoise)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPAudioRadio", "TurnChannel");
    struct
    {
        struct FName InChannelID;
        uint8_t bNeedNoise;
        uint8_t ReturnValue;
    } Parms{};
    Parms.InChannelID = (struct FName)InChannelID;
    Parms.bNeedNoise = (uint8_t)bNeedNoise;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UGPAudioRadio::RadioStart()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPAudioRadio", "RadioStart");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UGPAudioRadio::InitRCConfigs(struct TArray<struct FGPAudioRadioChannelRow> ConfigRows)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPAudioRadio", "InitRCConfigs");
    struct
    {
        struct TArray<struct FGPAudioRadioChannelRow> ConfigRows;
    } Parms{};
    Parms.ConfigRows = (struct TArray<struct FGPAudioRadioChannelRow>)ConfigRows;
    this->ProcessEvent(Func, &Parms);
}

// ---- UGPAudioStatics::* ----
void UGPAudioStatics::UpdateSlapbackActivated()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPAudioStatics", "UpdateSlapbackActivated");
    struct
    {
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UGPAudioStatics::UpdateBreakableItemStatus(struct FString& VolumeIDString, float BrokenPercent, struct AActor* BreakableItemActor)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPAudioStatics", "UpdateBreakableItemStatus");
    struct
    {
        struct FString VolumeIDString;
        float BrokenPercent;
        struct AActor* BreakableItemActor;
    } Parms{};
    Parms.BrokenPercent = (float)BrokenPercent;
    Parms.BreakableItemActor = (struct AActor*)BreakableItemActor;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    VolumeIDString = Parms.VolumeIDString;
}

void UGPAudioStatics::UpdateAudioPortalStatus(struct FString PortalIDString, uint8_t bOpen, struct FString InReason)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPAudioStatics", "UpdateAudioPortalStatus");
    struct
    {
        struct FString PortalIDString;
        uint8_t bOpen;
        struct FString InReason;
    } Parms{};
    Parms.PortalIDString = (struct FString)PortalIDString;
    Parms.bOpen = (uint8_t)bOpen;
    Parms.InReason = (struct FString)InReason;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

uint8_t UGPAudioStatics::UnregisterVolumeWithListener()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPAudioStatics", "UnregisterVolumeWithListener");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UGPAudioStatics::UnregisterAttenuationForListener(EGPAttenuationScaleReason InReason)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPAudioStatics", "UnregisterAttenuationForListener");
    struct
    {
        enum EGPAttenuationScaleReason InReason;
    } Parms{};
    Parms.InReason = (enum EGPAttenuationScaleReason)InReason;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UGPAudioStatics::UnloadAllNonPlayingAudioEvents()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPAudioStatics", "UnloadAllNonPlayingAudioEvents");
    struct
    {
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

uint8_t UGPAudioStatics::StopSlapback(struct UGameAkComponent* Emitter)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPAudioStatics", "StopSlapback");
    struct
    {
        struct UGameAkComponent* Emitter;
        uint8_t ReturnValue;
    } Parms{};
    Parms.Emitter = (struct UGameAkComponent*)Emitter;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UGPAudioStatics::StopPlayingByPlayingId(int32_t PlayingId, int32_t TransitionMS)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPAudioStatics", "StopPlayingByPlayingId");
    struct
    {
        int32_t PlayingId;
        int32_t TransitionMS;
    } Parms{};
    Parms.PlayingId = (int32_t)PlayingId;
    Parms.TransitionMS = (int32_t)TransitionMS;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UGPAudioStatics::StopPlaying(struct FGPAudioFuturePlayingID PlayingId, int32_t TransitionMS)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPAudioStatics", "StopPlaying");
    struct
    {
        struct FGPAudioFuturePlayingID PlayingId;
        int32_t TransitionMS;
    } Parms{};
    Parms.PlayingId = (struct FGPAudioFuturePlayingID)PlayingId;
    Parms.TransitionMS = (int32_t)TransitionMS;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UGPAudioStatics::StopMonitorRecord()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPAudioStatics", "StopMonitorRecord");
    struct
    {
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UGPAudioStatics::StopLastPlayingEvent(struct UGPAudioEventAsset* InEvent, struct AActor* InPlayer, int32_t StopNum)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPAudioStatics", "StopLastPlayingEvent");
    struct
    {
        struct UGPAudioEventAsset* InEvent;
        struct AActor* InPlayer;
        int32_t StopNum;
    } Parms{};
    Parms.InEvent = (struct UGPAudioEventAsset*)InEvent;
    Parms.InPlayer = (struct AActor*)InPlayer;
    Parms.StopNum = (int32_t)StopNum;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UGPAudioStatics::StopIngameSound(struct FString Reason)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPAudioStatics", "StopIngameSound");
    struct
    {
        struct FString Reason;
    } Parms{};
    Parms.Reason = (struct FString)Reason;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UGPAudioStatics::StopGlobalWeaponMIDI(const struct FGPAudioMIDIEventAsset& GPAudioMIDIEvent, int32_t FireCount)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPAudioStatics", "StopGlobalWeaponMIDI");
    struct
    {
        struct FGPAudioMIDIEventAsset GPAudioMIDIEvent;
        int32_t FireCount;
    } Parms{};
    Parms.GPAudioMIDIEvent = (struct FGPAudioMIDIEventAsset)GPAudioMIDIEvent;
    Parms.FireCount = (int32_t)FireCount;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UGPAudioStatics::StopAttachAudioByEvent(struct UGPAudioEventAsset* InEvent, struct AActor* InPlayer, uint8_t bStopAllFlag)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPAudioStatics", "StopAttachAudioByEvent");
    struct
    {
        struct UGPAudioEventAsset* InEvent;
        struct AActor* InPlayer;
        uint8_t bStopAllFlag;
    } Parms{};
    Parms.InEvent = (struct UGPAudioEventAsset*)InEvent;
    Parms.InPlayer = (struct AActor*)InPlayer;
    Parms.bStopAllFlag = (uint8_t)bStopAllFlag;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UGPAudioStatics::StopAllSounds(EStopAllSoundType StopType)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPAudioStatics", "StopAllSounds");
    struct
    {
        enum EStopAllSoundType StopType;
    } Parms{};
    Parms.StopType = (enum EStopAllSoundType)StopType;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UGPAudioStatics::StopActorSound(struct AActor* InPlayer)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPAudioStatics", "StopActorSound");
    struct
    {
        struct AActor* InPlayer;
    } Parms{};
    Parms.InPlayer = (struct AActor*)InPlayer;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UGPAudioStatics::Stop2DLoopEvent()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPAudioStatics", "Stop2DLoopEvent");
    struct
    {
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

int32_t UGPAudioStatics::StartSlapback(struct UGameAkComponent* Emitter, struct UGPAudioEventAsset* Event)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPAudioStatics", "StartSlapback");
    struct
    {
        struct UGameAkComponent* Emitter;
        struct UGPAudioEventAsset* Event;
        int32_t ReturnValue;
    } Parms{};
    Parms.Emitter = (struct UGameAkComponent*)Emitter;
    Parms.Event = (struct UGPAudioEventAsset*)Event;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UGPAudioStatics::StartReplay()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPAudioStatics", "StartReplay");
    struct
    {
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UGPAudioStatics::StartMonitorRecord()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPAudioStatics", "StartMonitorRecord");
    struct
    {
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UGPAudioStatics::SetWindowOpen(struct FVector WinPostion, int32_t OpenScal_0_100)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPAudioStatics", "SetWindowOpen");
    struct
    {
        struct FVector WinPostion;
        int32_t OpenScal_0_100;
    } Parms{};
    Parms.WinPostion = (struct FVector)WinPostion;
    Parms.OpenScal_0_100 = (int32_t)OpenScal_0_100;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UGPAudioStatics::SetWeatherAudioID(int64_t WeatherAudioID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPAudioStatics", "SetWeatherAudioID");
    struct
    {
        int64_t WeatherAudioID;
    } Parms{};
    Parms.WeatherAudioID = (int64_t)WeatherAudioID;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UGPAudioStatics::SetSwitch(struct AActor* Actor, struct UAkSwitchValue* SwitchValue, struct FString SwitchGroup, struct FString SwitchState)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPAudioStatics", "SetSwitch");
    struct
    {
        struct AActor* Actor;
        struct UAkSwitchValue* SwitchValue;
        struct FString SwitchGroup;
        struct FString SwitchState;
    } Parms{};
    Parms.Actor = (struct AActor*)Actor;
    Parms.SwitchValue = (struct UAkSwitchValue*)SwitchValue;
    Parms.SwitchGroup = (struct FString)SwitchGroup;
    Parms.SwitchState = (struct FString)SwitchState;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UGPAudioStatics::SetSlapbackIsActivated(uint8_t bIsActivated)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPAudioStatics", "SetSlapbackIsActivated");
    struct
    {
        uint8_t bIsActivated;
    } Parms{};
    Parms.bIsActivated = (uint8_t)bIsActivated;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UGPAudioStatics::SetRTPCByStr(struct FString RTPCName, float RTPCValue, struct AActor* Actor, int32_t InterpolationTimeMs)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPAudioStatics", "SetRTPCByStr");
    struct
    {
        struct FString RTPCName;
        float RTPCValue;
        struct AActor* Actor;
        int32_t InterpolationTimeMs;
    } Parms{};
    Parms.RTPCName = (struct FString)RTPCName;
    Parms.RTPCValue = (float)RTPCValue;
    Parms.Actor = (struct AActor*)Actor;
    Parms.InterpolationTimeMs = (int32_t)InterpolationTimeMs;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UGPAudioStatics::SetRTPCByName(struct FName RTPCName, float RTPCValue, struct AActor* Actor, int32_t InterpolationTimeMs, uint8_t bCreateGameAkIfNotExist)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPAudioStatics", "SetRTPCByName");
    struct
    {
        struct FName RTPCName;
        float RTPCValue;
        struct AActor* Actor;
        int32_t InterpolationTimeMs;
        uint8_t bCreateGameAkIfNotExist;
    } Parms{};
    Parms.RTPCName = (struct FName)RTPCName;
    Parms.RTPCValue = (float)RTPCValue;
    Parms.Actor = (struct AActor*)Actor;
    Parms.InterpolationTimeMs = (int32_t)InterpolationTimeMs;
    Parms.bCreateGameAkIfNotExist = (uint8_t)bCreateGameAkIfNotExist;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UGPAudioStatics::SetRTPC(struct TSoftObjectPtr<UObject> RTPCKey, float RTPCValue, struct AActor* Actor, int32_t InterpolationTimeMs)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPAudioStatics", "SetRTPC");
    struct
    {
        struct TSoftObjectPtr<UObject> RTPCKey;
        float RTPCValue;
        struct AActor* Actor;
        int32_t InterpolationTimeMs;
    } Parms{};
    Parms.RTPCKey = (struct TSoftObjectPtr<UObject>)RTPCKey;
    Parms.RTPCValue = (float)RTPCValue;
    Parms.Actor = (struct AActor*)Actor;
    Parms.InterpolationTimeMs = (int32_t)InterpolationTimeMs;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UGPAudioStatics::SetResonanceEnable(uint8_t bEnable)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPAudioStatics", "SetResonanceEnable");
    struct
    {
        uint8_t bEnable;
    } Parms{};
    Parms.bEnable = (uint8_t)bEnable;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UGPAudioStatics::SetObserveredGameAk(struct UGameAkComponent* InGameAk, uint8_t bObserverd, EObserveredAudioState InObserveredAudioState, EAudioCharacterGroup InCharacterGroup)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPAudioStatics", "SetObserveredGameAk");
    struct
    {
        struct UGameAkComponent* InGameAk;
        uint8_t bObserverd;
        enum EObserveredAudioState InObserveredAudioState;
        enum EAudioCharacterGroup InCharacterGroup;
    } Parms{};
    Parms.InGameAk = (struct UGameAkComponent*)InGameAk;
    Parms.bObserverd = (uint8_t)bObserverd;
    Parms.InObserveredAudioState = (enum EObserveredAudioState)InObserveredAudioState;
    Parms.InCharacterGroup = (enum EAudioCharacterGroup)InCharacterGroup;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UGPAudioStatics::SetObserveredActor(struct AActor* InActor, uint8_t bObserverd, EObserveredAudioState InObserveredAudioState, EAudioCharacterGroup InCharacterGroup)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPAudioStatics", "SetObserveredActor");
    struct
    {
        struct AActor* InActor;
        uint8_t bObserverd;
        enum EObserveredAudioState InObserveredAudioState;
        enum EAudioCharacterGroup InCharacterGroup;
    } Parms{};
    Parms.InActor = (struct AActor*)InActor;
    Parms.bObserverd = (uint8_t)bObserverd;
    Parms.InObserveredAudioState = (enum EObserveredAudioState)InObserveredAudioState;
    Parms.InCharacterGroup = (enum EAudioCharacterGroup)InCharacterGroup;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UGPAudioStatics::SetLocallyListenRangeFactor(float InRangefator)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPAudioStatics", "SetLocallyListenRangeFactor");
    struct
    {
        float InRangefator;
    } Parms{};
    Parms.InRangefator = (float)InRangefator;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UGPAudioStatics::SetHRTFs(int32_t HRTFIndex)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPAudioStatics", "SetHRTFs");
    struct
    {
        int32_t HRTFIndex;
    } Parms{};
    Parms.HRTFIndex = (int32_t)HRTFIndex;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UGPAudioStatics::SetHRTFPluginMode(int32_t ModeNum)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPAudioStatics", "SetHRTFPluginMode");
    struct
    {
        int32_t ModeNum;
    } Parms{};
    Parms.ModeNum = (int32_t)ModeNum;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UGPAudioStatics::SetHRTFPluginEnable(uint8_t bEnable)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPAudioStatics", "SetHRTFPluginEnable");
    struct
    {
        uint8_t bEnable;
    } Parms{};
    Parms.bEnable = (uint8_t)bEnable;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

uint8_t UGPAudioStatics::SetHeadSetArg(const struct FGPAudioHeadSetRow& HeadSetRowConfig, uint8_t PutOn)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPAudioStatics", "SetHeadSetArg");
    struct
    {
        struct FGPAudioHeadSetRow HeadSetRowConfig;
        uint8_t PutOn;
        uint8_t ReturnValue;
    } Parms{};
    Parms.HeadSetRowConfig = (struct FGPAudioHeadSetRow)HeadSetRowConfig;
    Parms.PutOn = (uint8_t)PutOn;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UGPAudioStatics::SetGPAudioWeaponCompositeArgs(const struct FGPAudioCompositeParam& CompositeParam, struct AActor* InPlayer)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPAudioStatics", "SetGPAudioWeaponCompositeArgs");
    struct
    {
        struct FGPAudioCompositeParam CompositeParam;
        struct AActor* InPlayer;
    } Parms{};
    Parms.CompositeParam = (struct FGPAudioCompositeParam)CompositeParam;
    Parms.InPlayer = (struct AActor*)InPlayer;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UGPAudioStatics::SetGlobalRTPCByStr(struct FString RTPCName, float RTPCValue, int32_t InterpolationTimeMs)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPAudioStatics", "SetGlobalRTPCByStr");
    struct
    {
        struct FString RTPCName;
        float RTPCValue;
        int32_t InterpolationTimeMs;
    } Parms{};
    Parms.RTPCName = (struct FString)RTPCName;
    Parms.RTPCValue = (float)RTPCValue;
    Parms.InterpolationTimeMs = (int32_t)InterpolationTimeMs;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UGPAudioStatics::SetGlobalRTPCByName(struct FName RTPCName, float RTPCValue, int32_t InterpolationTimeMs)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPAudioStatics", "SetGlobalRTPCByName");
    struct
    {
        struct FName RTPCName;
        float RTPCValue;
        int32_t InterpolationTimeMs;
    } Parms{};
    Parms.RTPCName = (struct FName)RTPCName;
    Parms.RTPCValue = (float)RTPCValue;
    Parms.InterpolationTimeMs = (int32_t)InterpolationTimeMs;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UGPAudioStatics::SetGlobalRTPC(struct TSoftObjectPtr<UObject> RTPCKey, float RTPCValue, int32_t InterpolationTimeMs)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPAudioStatics", "SetGlobalRTPC");
    struct
    {
        struct TSoftObjectPtr<UObject> RTPCKey;
        float RTPCValue;
        int32_t InterpolationTimeMs;
    } Parms{};
    Parms.RTPCKey = (struct TSoftObjectPtr<UObject>)RTPCKey;
    Parms.RTPCValue = (float)RTPCValue;
    Parms.InterpolationTimeMs = (int32_t)InterpolationTimeMs;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UGPAudioStatics::SetGameAkViewStateAndGroup(struct AActor* InPlayer, const EAudioCharacterViewState& InViewState, const EAudioCharacterGroup& InCharacterGroup)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPAudioStatics", "SetGameAkViewStateAndGroup");
    struct
    {
        struct AActor* InPlayer;
        enum EAudioCharacterViewState InViewState;
        enum EAudioCharacterGroup InCharacterGroup;
    } Parms{};
    Parms.InPlayer = (struct AActor*)InPlayer;
    Parms.InViewState = (enum EAudioCharacterViewState)InViewState;
    Parms.InCharacterGroup = (enum EAudioCharacterGroup)InCharacterGroup;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

uint8_t UGPAudioStatics::SetGameAkMute(struct AActor* InPlayer, uint8_t in_Mute)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPAudioStatics", "SetGameAkMute");
    struct
    {
        struct AActor* InPlayer;
        uint8_t in_Mute;
        uint8_t ReturnValue;
    } Parms{};
    Parms.InPlayer = (struct AActor*)InPlayer;
    Parms.in_Mute = (uint8_t)in_Mute;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UGPAudioStatics::SetGameAkHardMute(struct AActor* InActor, uint8_t in_Mute)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPAudioStatics", "SetGameAkHardMute");
    struct
    {
        struct AActor* InActor;
        uint8_t in_Mute;
        uint8_t ReturnValue;
    } Parms{};
    Parms.InActor = (struct AActor*)InActor;
    Parms.in_Mute = (uint8_t)in_Mute;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UGPAudioStatics::SetGameAkComponentManagerTick(struct AActor* InPlayer, uint8_t ManagerTick, uint8_t bCreateIfNotExist, uint8_t bEnableDiffraction)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPAudioStatics", "SetGameAkComponentManagerTick");
    struct
    {
        struct AActor* InPlayer;
        uint8_t ManagerTick;
        uint8_t bCreateIfNotExist;
        uint8_t bEnableDiffraction;
    } Parms{};
    Parms.InPlayer = (struct AActor*)InPlayer;
    Parms.ManagerTick = (uint8_t)ManagerTick;
    Parms.bCreateIfNotExist = (uint8_t)bCreateIfNotExist;
    Parms.bEnableDiffraction = (uint8_t)bEnableDiffraction;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UGPAudioStatics::SetForceUseWindowsApiLevelWithRestart(uint32_t ApiLevel)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPAudioStatics", "SetForceUseWindowsApiLevelWithRestart");
    struct
    {
        uint32_t ApiLevel;
    } Parms{};
    Parms.ApiLevel = (uint32_t)ApiLevel;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UGPAudioStatics::SetForceUseWindowsApiLevel(uint32_t ApiLevel)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPAudioStatics", "SetForceUseWindowsApiLevel");
    struct
    {
        uint32_t ApiLevel;
    } Parms{};
    Parms.ApiLevel = (uint32_t)ApiLevel;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UGPAudioStatics::SetEnableImmersePersonalized(uint8_t bEnable)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPAudioStatics", "SetEnableImmersePersonalized");
    struct
    {
        uint8_t bEnable;
    } Parms{};
    Parms.bEnable = (uint8_t)bEnable;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UGPAudioStatics::SetEnableGPAudioDebugger(uint8_t bEnable)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPAudioStatics", "SetEnableGPAudioDebugger");
    struct
    {
        uint8_t bEnable;
    } Parms{};
    Parms.bEnable = (uint8_t)bEnable;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UGPAudioStatics::SetEmoteSoundOn()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPAudioStatics", "SetEmoteSoundOn");
    struct
    {
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UGPAudioStatics::SetEmoteSoundOff()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPAudioStatics", "SetEmoteSoundOff");
    struct
    {
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UGPAudioStatics::SetDolbyPluginEnable(uint8_t bEnable)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPAudioStatics", "SetDolbyPluginEnable");
    struct
    {
        uint8_t bEnable;
    } Parms{};
    Parms.bEnable = (uint8_t)bEnable;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UGPAudioStatics::SetDolbyNotDownMix(uint8_t bEnable)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPAudioStatics", "SetDolbyNotDownMix");
    struct
    {
        uint8_t bEnable;
    } Parms{};
    Parms.bEnable = (uint8_t)bEnable;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UGPAudioStatics::SetCurrentAudioCulture(struct FString AudioCulture)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPAudioStatics", "SetCurrentAudioCulture");
    struct
    {
        struct FString AudioCulture;
    } Parms{};
    Parms.AudioCulture = (struct FString)AudioCulture;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UGPAudioStatics::SetCharacterListenRangeFactor(struct ACHARACTER* TargetCacharacter, float AttenuationFactor)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPAudioStatics", "SetCharacterListenRangeFactor");
    struct
    {
        struct ACHARACTER* TargetCacharacter;
        float AttenuationFactor;
    } Parms{};
    Parms.TargetCacharacter = (struct ACHARACTER*)TargetCacharacter;
    Parms.AttenuationFactor = (float)AttenuationFactor;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UGPAudioStatics::SetCharacterDieStatus(struct ACHARACTER* InCharacter, uint8_t bDie)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPAudioStatics", "SetCharacterDieStatus");
    struct
    {
        struct ACHARACTER* InCharacter;
        uint8_t bDie;
    } Parms{};
    Parms.InCharacter = (struct ACHARACTER*)InCharacter;
    Parms.bDie = (uint8_t)bDie;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

uint8_t UGPAudioStatics::SetBusEffect(struct FString BusName, int32_t uFXIndex, struct FString ShareSetName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPAudioStatics", "SetBusEffect");
    struct
    {
        struct FString BusName;
        int32_t uFXIndex;
        struct FString ShareSetName;
        uint8_t ReturnValue;
    } Parms{};
    Parms.BusName = (struct FString)BusName;
    Parms.uFXIndex = (int32_t)uFXIndex;
    Parms.ShareSetName = (struct FString)ShareSetName;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UGPAudioStatics::SetAutoSlapbackActive(uint8_t bAutoUpdate)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPAudioStatics", "SetAutoSlapbackActive");
    struct
    {
        uint8_t bAutoUpdate;
    } Parms{};
    Parms.bAutoUpdate = (uint8_t)bAutoUpdate;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UGPAudioStatics::SetAKStateValue(struct UAkStateValue* in_stateValue)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPAudioStatics", "SetAKStateValue");
    struct
    {
        struct UAkStateValue* in_stateValue;
    } Parms{};
    Parms.in_stateValue = (struct UAkStateValue*)in_stateValue;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UGPAudioStatics::SetAKStateByNameSkipTransitionTime(struct FString StateGroup, struct FString State)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPAudioStatics", "SetAKStateByNameSkipTransitionTime");
    struct
    {
        struct FString StateGroup;
        struct FString State;
    } Parms{};
    Parms.StateGroup = (struct FString)StateGroup;
    Parms.State = (struct FString)State;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UGPAudioStatics::SetAKStateByName(struct FString StateGroup, struct FString State)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPAudioStatics", "SetAKStateByName");
    struct
    {
        struct FString StateGroup;
        struct FString State;
    } Parms{};
    Parms.StateGroup = (struct FString)StateGroup;
    Parms.State = (struct FString)State;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UGPAudioStatics::SetAkComponentWaterState(struct UGameAkComponent* AkComp, EGPAudioWaterPreset WaterPresetState)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPAudioStatics", "SetAkComponentWaterState");
    struct
    {
        struct UGameAkComponent* AkComp;
        enum EGPAudioWaterPreset WaterPresetState;
    } Parms{};
    Parms.AkComp = (struct UGameAkComponent*)AkComp;
    Parms.WaterPresetState = (enum EGPAudioWaterPreset)WaterPresetState;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UGPAudioStatics::SetActorOutputBusVolume(struct AActor* InPlayer, float BusVolume)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPAudioStatics", "SetActorOutputBusVolume");
    struct
    {
        struct AActor* InPlayer;
        float BusVolume;
    } Parms{};
    Parms.InPlayer = (struct AActor*)InPlayer;
    Parms.BusVolume = (float)BusVolume;
    this->ProcessEvent(Func, &Parms);
}

void UGPAudioStatics::SetActorAttenuationScalingFactor(struct AActor* InPlayer, float Value)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPAudioStatics", "SetActorAttenuationScalingFactor");
    struct
    {
        struct AActor* InPlayer;
        float Value;
    } Parms{};
    Parms.InPlayer = (struct AActor*)InPlayer;
    Parms.Value = (float)Value;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UGPAudioStatics::Set714OutPut(uint8_t bEnable)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPAudioStatics", "Set714OutPut");
    struct
    {
        uint8_t bEnable;
    } Parms{};
    Parms.bEnable = (uint8_t)bEnable;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UGPAudioStatics::SeekOnGlobalEvent(struct UGPAudioEventAsset* InEvent, float Percent, struct FGPAudioFuturePlayingID PlayingId)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPAudioStatics", "SeekOnGlobalEvent");
    struct
    {
        struct UGPAudioEventAsset* InEvent;
        float Percent;
        struct FGPAudioFuturePlayingID PlayingId;
    } Parms{};
    Parms.InEvent = (struct UGPAudioEventAsset*)InEvent;
    Parms.Percent = (float)Percent;
    Parms.PlayingId = (struct FGPAudioFuturePlayingID)PlayingId;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UGPAudioStatics::SeekOnEvent(struct UGPAudioEventAsset* InEvent, struct AActor* in_pActor, float Percent, struct FGPAudioFuturePlayingID PlayingId, EGPAudioBlueprintType AudioType)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPAudioStatics", "SeekOnEvent");
    struct
    {
        struct UGPAudioEventAsset* InEvent;
        struct AActor* in_pActor;
        float Percent;
        struct FGPAudioFuturePlayingID PlayingId;
        enum EGPAudioBlueprintType AudioType;
    } Parms{};
    Parms.InEvent = (struct UGPAudioEventAsset*)InEvent;
    Parms.in_pActor = (struct AActor*)in_pActor;
    Parms.Percent = (float)Percent;
    Parms.PlayingId = (struct FGPAudioFuturePlayingID)PlayingId;
    Parms.AudioType = (enum EGPAudioBlueprintType)AudioType;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UGPAudioStatics::ResetOutputDevice()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPAudioStatics", "ResetOutputDevice");
    struct
    {
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UGPAudioStatics::ResetMeteringPeakArray()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPAudioStatics", "ResetMeteringPeakArray");
    struct
    {
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UGPAudioStatics::ResetBusMeteringPeakArray(struct FString BusName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPAudioStatics", "ResetBusMeteringPeakArray");
    struct
    {
        struct FString BusName;
    } Parms{};
    Parms.BusName = (struct FString)BusName;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

uint8_t UGPAudioStatics::ReplaceOutputDevice(uint32_t DeviceID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPAudioStatics", "ReplaceOutputDevice");
    struct
    {
        uint32_t DeviceID;
        uint8_t ReturnValue;
    } Parms{};
    Parms.DeviceID = (uint32_t)DeviceID;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UGPAudioStatics::Remove714Output()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPAudioStatics", "Remove714Output");
    struct
    {
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UGPAudioStatics::RegisterHighFreqUpdatePos(struct AActor* InActor, EGameAkHighFreqUpdatePosReason InReason)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPAudioStatics", "RegisterHighFreqUpdatePos");
    struct
    {
        struct AActor* InActor;
        enum EGameAkHighFreqUpdatePosReason InReason;
    } Parms{};
    Parms.InActor = (struct AActor*)InActor;
    Parms.InReason = (enum EGameAkHighFreqUpdatePosReason)InReason;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UGPAudioStatics::RegisterBreakableItemToVolume(struct AActor* BreakableItemActor, struct FString& VolumeIDString)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPAudioStatics", "RegisterBreakableItemToVolume");
    struct
    {
        struct AActor* BreakableItemActor;
        struct FString VolumeIDString;
    } Parms{};
    Parms.BreakableItemActor = (struct AActor*)BreakableItemActor;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    VolumeIDString = Parms.VolumeIDString;
}

void UGPAudioStatics::RegisterAttenuationForListener(EGPAttenuationScaleReason InReason, float Scalar, float Duration)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPAudioStatics", "RegisterAttenuationForListener");
    struct
    {
        enum EGPAttenuationScaleReason InReason;
        float Scalar;
        float Duration;
    } Parms{};
    Parms.InReason = (enum EGPAttenuationScaleReason)InReason;
    Parms.Scalar = (float)Scalar;
    Parms.Duration = (float)Duration;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

uint8_t UGPAudioStatics::ReceiveAnimationNotifyWithEnumType(const struct FName& Notify, EGPAudioBlueprintType EType, struct AActor* PlayActor, const struct FGPAudioEventAdditionalFunction& AddFunc, uint8_t isLogicTrigger)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPAudioStatics", "ReceiveAnimationNotifyWithEnumType");
    struct
    {
        struct FName Notify;
        enum EGPAudioBlueprintType EType;
        struct AActor* PlayActor;
        struct FGPAudioEventAdditionalFunction AddFunc;
        uint8_t isLogicTrigger;
        uint8_t ReturnValue;
    } Parms{};
    Parms.Notify = (struct FName)Notify;
    Parms.EType = (enum EGPAudioBlueprintType)EType;
    Parms.PlayActor = (struct AActor*)PlayActor;
    Parms.AddFunc = (struct FGPAudioEventAdditionalFunction)AddFunc;
    Parms.isLogicTrigger = (uint8_t)isLogicTrigger;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UGPAudioStatics::PreGetRangeAndDuration(struct UGPAudioEventAsset* InAudioAsset, struct AActor* InPlayer, float& Range, float& Duration)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPAudioStatics", "PreGetRangeAndDuration");
    struct
    {
        struct UGPAudioEventAsset* InAudioAsset;
        struct AActor* InPlayer;
        float Range;
        float Duration;
        uint8_t ReturnValue;
    } Parms{};
    Parms.InAudioAsset = (struct UGPAudioEventAsset*)InAudioAsset;
    Parms.InPlayer = (struct AActor*)InPlayer;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    Range = Parms.Range;
    Duration = Parms.Duration;
    return Parms.ReturnValue;
}

void UGPAudioStatics::PostponeLongAudioExpireCheckTimeBP(struct FGPAudioFuturePlayingID InFuturePlayingId)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPAudioStatics", "PostponeLongAudioExpireCheckTimeBP");
    struct
    {
        struct FGPAudioFuturePlayingID InFuturePlayingId;
    } Parms{};
    Parms.InFuturePlayingId = (struct FGPAudioFuturePlayingID)InFuturePlayingId;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UGPAudioStatics::PostponeLongAudioExpireCheckTime(uint32_t InPlayingID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPAudioStatics", "PostponeLongAudioExpireCheckTime");
    struct
    {
        uint32_t InPlayingID;
    } Parms{};
    Parms.InPlayingID = (uint32_t)InPlayingID;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UGPAudioStatics::PlayStopGPAudioEventAtLocationOpt(struct UGPAudioEventAsset* InEvent, struct FGPAudioFuturePlayingID PlayingId, struct UObject* WorldContext)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPAudioStatics", "PlayStopGPAudioEventAtLocationOpt");
    struct
    {
        struct UGPAudioEventAsset* InEvent;
        struct FGPAudioFuturePlayingID PlayingId;
        struct UObject* WorldContext;
    } Parms{};
    Parms.InEvent = (struct UGPAudioEventAsset*)InEvent;
    Parms.PlayingId = (struct FGPAudioFuturePlayingID)PlayingId;
    Parms.WorldContext = (struct UObject*)WorldContext;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

struct UGPAudioEventAsset* UGPAudioStatics::PlayPhysicalFootStep(struct AActor* Actor, EGPAudioFootSoundType AudioType, struct UPhysicalMaterialAudioDataAsset* PhyFSConfig, uint8_t bIsLeft, float Scale)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPAudioStatics", "PlayPhysicalFootStep");
    struct
    {
        struct AActor* Actor;
        enum EGPAudioFootSoundType AudioType;
        struct UPhysicalMaterialAudioDataAsset* PhyFSConfig;
        uint8_t bIsLeft;
        float Scale;
        struct UGPAudioEventAsset* ReturnValue;
    } Parms{};
    Parms.Actor = (struct AActor*)Actor;
    Parms.AudioType = (enum EGPAudioFootSoundType)AudioType;
    Parms.PhyFSConfig = (struct UPhysicalMaterialAudioDataAsset*)PhyFSConfig;
    Parms.bIsLeft = (uint8_t)bIsLeft;
    Parms.Scale = (float)Scale;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FGPAudioFuturePlayingID UGPAudioStatics::PlayGPAudioEventAtLocationOpt(struct UGPAudioEventAsset* InEvent, struct FVector Location, struct FRotator Rotator, const struct FName& AudioTypeName, struct UObject* WorldContext, uint8_t bActiveStopRequired, EGameAkType InGameAkType, uint8_t bPreCutted, float AttenuationScalar, uint8_t bCalcSimplifiedTranDiff, struct FVector LocationOffset, uint8_t bCalcCompletedTranDiff, float RTPCValue, EGPAudioWaterPreset WaterPresetState)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPAudioStatics", "PlayGPAudioEventAtLocationOpt");
    struct
    {
        struct UGPAudioEventAsset* InEvent;
        struct FVector Location;
        struct FRotator Rotator;
        struct FName AudioTypeName;
        struct UObject* WorldContext;
        uint8_t bActiveStopRequired;
        enum EGameAkType InGameAkType;
        uint8_t bPreCutted;
        float AttenuationScalar;
        uint8_t bCalcSimplifiedTranDiff;
        struct FVector LocationOffset;
        uint8_t bCalcCompletedTranDiff;
        float RTPCValue;
        enum EGPAudioWaterPreset WaterPresetState;
        struct FGPAudioFuturePlayingID ReturnValue;
    } Parms{};
    Parms.InEvent = (struct UGPAudioEventAsset*)InEvent;
    Parms.Location = (struct FVector)Location;
    Parms.Rotator = (struct FRotator)Rotator;
    Parms.AudioTypeName = (struct FName)AudioTypeName;
    Parms.WorldContext = (struct UObject*)WorldContext;
    Parms.bActiveStopRequired = (uint8_t)bActiveStopRequired;
    Parms.InGameAkType = (enum EGameAkType)InGameAkType;
    Parms.bPreCutted = (uint8_t)bPreCutted;
    Parms.AttenuationScalar = (float)AttenuationScalar;
    Parms.bCalcSimplifiedTranDiff = (uint8_t)bCalcSimplifiedTranDiff;
    Parms.LocationOffset = (struct FVector)LocationOffset;
    Parms.bCalcCompletedTranDiff = (uint8_t)bCalcCompletedTranDiff;
    Parms.RTPCValue = (float)RTPCValue;
    Parms.WaterPresetState = (enum EGPAudioWaterPreset)WaterPresetState;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FGPAudioFuturePlayingID UGPAudioStatics::PlayGPAudioEventAtLocationEnumTypeOpt(struct UGPAudioEventAsset* InEvent, struct FVector Location, struct FRotator Rotator, EGPAudioBlueprintType EType, struct UObject* WorldContext, uint8_t bActiveStopRequired, EGameAkType InGameAkType, uint8_t bPreCutted, float AttenuationScalar, uint8_t bCalcSimplifiedTranDiff, struct FVector LocationOffset, uint8_t bCalcCompletedTranDiff, float RTPCValue, EGPAudioWaterPreset WaterPresetState)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPAudioStatics", "PlayGPAudioEventAtLocationEnumTypeOpt");
    struct
    {
        struct UGPAudioEventAsset* InEvent;
        struct FVector Location;
        struct FRotator Rotator;
        enum EGPAudioBlueprintType EType;
        struct UObject* WorldContext;
        uint8_t bActiveStopRequired;
        enum EGameAkType InGameAkType;
        uint8_t bPreCutted;
        float AttenuationScalar;
        uint8_t bCalcSimplifiedTranDiff;
        struct FVector LocationOffset;
        uint8_t bCalcCompletedTranDiff;
        float RTPCValue;
        enum EGPAudioWaterPreset WaterPresetState;
        struct FGPAudioFuturePlayingID ReturnValue;
    } Parms{};
    Parms.InEvent = (struct UGPAudioEventAsset*)InEvent;
    Parms.Location = (struct FVector)Location;
    Parms.Rotator = (struct FRotator)Rotator;
    Parms.EType = (enum EGPAudioBlueprintType)EType;
    Parms.WorldContext = (struct UObject*)WorldContext;
    Parms.bActiveStopRequired = (uint8_t)bActiveStopRequired;
    Parms.InGameAkType = (enum EGameAkType)InGameAkType;
    Parms.bPreCutted = (uint8_t)bPreCutted;
    Parms.AttenuationScalar = (float)AttenuationScalar;
    Parms.bCalcSimplifiedTranDiff = (uint8_t)bCalcSimplifiedTranDiff;
    Parms.LocationOffset = (struct FVector)LocationOffset;
    Parms.bCalcCompletedTranDiff = (uint8_t)bCalcCompletedTranDiff;
    Parms.RTPCValue = (float)RTPCValue;
    Parms.WaterPresetState = (enum EGPAudioWaterPreset)WaterPresetState;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FGPAudioFuturePlayingID UGPAudioStatics::PlayGPAudioEventAtLocationEnumType(struct UGPAudioEventAsset* InEvent, struct FVector Location, struct FRotator Rotator, EGPAudioBlueprintType EType, struct AActor* SourceActor, uint8_t bAutoUnRegisterGameObjID, EAttenuationScaleType AttenuationType, uint8_t bPreCutted)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPAudioStatics", "PlayGPAudioEventAtLocationEnumType");
    struct
    {
        struct UGPAudioEventAsset* InEvent;
        struct FVector Location;
        struct FRotator Rotator;
        enum EGPAudioBlueprintType EType;
        struct AActor* SourceActor;
        uint8_t bAutoUnRegisterGameObjID;
        enum EAttenuationScaleType AttenuationType;
        uint8_t bPreCutted;
        struct FGPAudioFuturePlayingID ReturnValue;
    } Parms{};
    Parms.InEvent = (struct UGPAudioEventAsset*)InEvent;
    Parms.Location = (struct FVector)Location;
    Parms.Rotator = (struct FRotator)Rotator;
    Parms.EType = (enum EGPAudioBlueprintType)EType;
    Parms.SourceActor = (struct AActor*)SourceActor;
    Parms.bAutoUnRegisterGameObjID = (uint8_t)bAutoUnRegisterGameObjID;
    Parms.AttenuationType = (enum EAttenuationScaleType)AttenuationType;
    Parms.bPreCutted = (uint8_t)bPreCutted;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FGPAudioFuturePlayingID UGPAudioStatics::PlayGPAudioCharacterVoice(struct UGPAudioEventAsset* InEvent, struct UGameAkComponent* GameAk, const struct FName& AudioTypeName, uint8_t is2DAudio, float Duration, uint8_t bNeedMakeNoise, uint8_t bPreCutted)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPAudioStatics", "PlayGPAudioCharacterVoice");
    struct
    {
        struct UGPAudioEventAsset* InEvent;
        struct UGameAkComponent* GameAk;
        struct FName AudioTypeName;
        uint8_t is2DAudio;
        float Duration;
        uint8_t bNeedMakeNoise;
        uint8_t bPreCutted;
        struct FGPAudioFuturePlayingID ReturnValue;
    } Parms{};
    Parms.InEvent = (struct UGPAudioEventAsset*)InEvent;
    Parms.GameAk = (struct UGameAkComponent*)GameAk;
    Parms.AudioTypeName = (struct FName)AudioTypeName;
    Parms.is2DAudio = (uint8_t)is2DAudio;
    Parms.Duration = (float)Duration;
    Parms.bNeedMakeNoise = (uint8_t)bNeedMakeNoise;
    Parms.bPreCutted = (uint8_t)bPreCutted;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FGPAudioFuturePlayingID UGPAudioStatics::PlayGPAudioAttachWithType(struct UGPAudioEventAsset* InEvent, struct AActor* InPlayer, const struct FName& AudioTypeName, float Duration, uint8_t bNeedGetPosion)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPAudioStatics", "PlayGPAudioAttachWithType");
    struct
    {
        struct UGPAudioEventAsset* InEvent;
        struct AActor* InPlayer;
        struct FName AudioTypeName;
        float Duration;
        uint8_t bNeedGetPosion;
        struct FGPAudioFuturePlayingID ReturnValue;
    } Parms{};
    Parms.InEvent = (struct UGPAudioEventAsset*)InEvent;
    Parms.InPlayer = (struct AActor*)InPlayer;
    Parms.AudioTypeName = (struct FName)AudioTypeName;
    Parms.Duration = (float)Duration;
    Parms.bNeedGetPosion = (uint8_t)bNeedGetPosion;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FGPAudioFuturePlayingID UGPAudioStatics::PlayGPAudioAttachWithEnumType(struct UGPAudioEventAsset* InEvent, struct AActor* InPlayer, EGPAudioBlueprintType EType, float Duration, uint8_t bNeedMakeNoise, uint8_t bPreCutted, float AttenuationScalar, uint8_t bNeedGetPosion)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPAudioStatics", "PlayGPAudioAttachWithEnumType");
    struct
    {
        struct UGPAudioEventAsset* InEvent;
        struct AActor* InPlayer;
        enum EGPAudioBlueprintType EType;
        float Duration;
        uint8_t bNeedMakeNoise;
        uint8_t bPreCutted;
        float AttenuationScalar;
        uint8_t bNeedGetPosion;
        struct FGPAudioFuturePlayingID ReturnValue;
    } Parms{};
    Parms.InEvent = (struct UGPAudioEventAsset*)InEvent;
    Parms.InPlayer = (struct AActor*)InPlayer;
    Parms.EType = (enum EGPAudioBlueprintType)EType;
    Parms.Duration = (float)Duration;
    Parms.bNeedMakeNoise = (uint8_t)bNeedMakeNoise;
    Parms.bPreCutted = (uint8_t)bPreCutted;
    Parms.AttenuationScalar = (float)AttenuationScalar;
    Parms.bNeedGetPosion = (uint8_t)bNeedGetPosion;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FGPAudioFuturePlayingID UGPAudioStatics::PlayGPAudioAttachWithEndCallback(struct UGPAudioEventAsset* InEvent, struct AActor* InPlayer, EGPAudioBlueprintType EType, const struct FDelegate& EndPlayCallback, float Duration, uint8_t bNeedMakeNoise, uint8_t bPreCutted)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPAudioStatics", "PlayGPAudioAttachWithEndCallback");
    struct
    {
        struct UGPAudioEventAsset* InEvent;
        struct AActor* InPlayer;
        enum EGPAudioBlueprintType EType;
        struct FDelegate EndPlayCallback;
        float Duration;
        uint8_t bNeedMakeNoise;
        uint8_t bPreCutted;
        struct FGPAudioFuturePlayingID ReturnValue;
    } Parms{};
    Parms.InEvent = (struct UGPAudioEventAsset*)InEvent;
    Parms.InPlayer = (struct AActor*)InPlayer;
    Parms.EType = (enum EGPAudioBlueprintType)EType;
    Parms.EndPlayCallback = (struct FDelegate)EndPlayCallback;
    Parms.Duration = (float)Duration;
    Parms.bNeedMakeNoise = (uint8_t)bNeedMakeNoise;
    Parms.bPreCutted = (uint8_t)bPreCutted;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FGPAudioFuturePlayingID UGPAudioStatics::PlayGPAudioAttachWithBeginCallback(struct UGPAudioEventAsset* InEvent, struct AActor* InPlayer, EGPAudioBlueprintType EType, const struct FDelegate& BeginPlayCallback, float Duration, uint8_t bNeedMakeNoise, uint8_t bPreCutted, float AttenuationScalar, uint8_t bNeedGetPosion)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPAudioStatics", "PlayGPAudioAttachWithBeginCallback");
    struct
    {
        struct UGPAudioEventAsset* InEvent;
        struct AActor* InPlayer;
        enum EGPAudioBlueprintType EType;
        struct FDelegate BeginPlayCallback;
        float Duration;
        uint8_t bNeedMakeNoise;
        uint8_t bPreCutted;
        float AttenuationScalar;
        uint8_t bNeedGetPosion;
        struct FGPAudioFuturePlayingID ReturnValue;
    } Parms{};
    Parms.InEvent = (struct UGPAudioEventAsset*)InEvent;
    Parms.InPlayer = (struct AActor*)InPlayer;
    Parms.EType = (enum EGPAudioBlueprintType)EType;
    Parms.BeginPlayCallback = (struct FDelegate)BeginPlayCallback;
    Parms.Duration = (float)Duration;
    Parms.bNeedMakeNoise = (uint8_t)bNeedMakeNoise;
    Parms.bPreCutted = (uint8_t)bPreCutted;
    Parms.AttenuationScalar = (float)AttenuationScalar;
    Parms.bNeedGetPosion = (uint8_t)bNeedGetPosion;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FGPAudioFuturePlayingID UGPAudioStatics::PlayGPAudioAttachStaticComponentWithEndCallback(struct UGPAudioEventAsset* InEvent, struct UGameStaticAkComponent* GameAk, EGPAudioBlueprintType EType, const struct FDelegate& EndPlayCallback, uint8_t bNeedMakeNoise, uint8_t bPreCutted)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPAudioStatics", "PlayGPAudioAttachStaticComponentWithEndCallback");
    struct
    {
        struct UGPAudioEventAsset* InEvent;
        struct UGameStaticAkComponent* GameAk;
        enum EGPAudioBlueprintType EType;
        struct FDelegate EndPlayCallback;
        uint8_t bNeedMakeNoise;
        uint8_t bPreCutted;
        struct FGPAudioFuturePlayingID ReturnValue;
    } Parms{};
    Parms.InEvent = (struct UGPAudioEventAsset*)InEvent;
    Parms.GameAk = (struct UGameStaticAkComponent*)GameAk;
    Parms.EType = (enum EGPAudioBlueprintType)EType;
    Parms.EndPlayCallback = (struct FDelegate)EndPlayCallback;
    Parms.bNeedMakeNoise = (uint8_t)bNeedMakeNoise;
    Parms.bPreCutted = (uint8_t)bPreCutted;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FGPAudioFuturePlayingID UGPAudioStatics::PlayGPAudioAttachStaticComponent(struct UGPAudioEventAsset* InEvent, struct UGameStaticAkComponent* GameAk, EGPAudioBlueprintType EType, uint8_t bNeedMakeNoise, uint8_t bPreCutted)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPAudioStatics", "PlayGPAudioAttachStaticComponent");
    struct
    {
        struct UGPAudioEventAsset* InEvent;
        struct UGameStaticAkComponent* GameAk;
        enum EGPAudioBlueprintType EType;
        uint8_t bNeedMakeNoise;
        uint8_t bPreCutted;
        struct FGPAudioFuturePlayingID ReturnValue;
    } Parms{};
    Parms.InEvent = (struct UGPAudioEventAsset*)InEvent;
    Parms.GameAk = (struct UGameStaticAkComponent*)GameAk;
    Parms.EType = (enum EGPAudioBlueprintType)EType;
    Parms.bNeedMakeNoise = (uint8_t)bNeedMakeNoise;
    Parms.bPreCutted = (uint8_t)bPreCutted;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FGPAudioFuturePlayingID UGPAudioStatics::PlayGPAudioAttachByComponent(struct UGPAudioEventAsset* InEvent, struct UGameAkComponent* GameAk, const struct FName& AudioTypeName, float Duration, uint8_t bNeedMakeNoise, uint8_t bPreCutted)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPAudioStatics", "PlayGPAudioAttachByComponent");
    struct
    {
        struct UGPAudioEventAsset* InEvent;
        struct UGameAkComponent* GameAk;
        struct FName AudioTypeName;
        float Duration;
        uint8_t bNeedMakeNoise;
        uint8_t bPreCutted;
        struct FGPAudioFuturePlayingID ReturnValue;
    } Parms{};
    Parms.InEvent = (struct UGPAudioEventAsset*)InEvent;
    Parms.GameAk = (struct UGameAkComponent*)GameAk;
    Parms.AudioTypeName = (struct FName)AudioTypeName;
    Parms.Duration = (float)Duration;
    Parms.bNeedMakeNoise = (uint8_t)bNeedMakeNoise;
    Parms.bPreCutted = (uint8_t)bPreCutted;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UGPAudioStatics::PlayGlobalWeaponMIDIAk(struct AActor* Actor, float FirstCoolDownMs, float NoteDuration, uint8_t IsStopByNoteOff, struct UGPAudioEventAsset* FireAudioEvent, struct UGPAudioEventAsset* StartEvent, struct UGPAudioEventAsset* EndEvent, struct UGPAudioEventAsset* EFAtomEvent)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPAudioStatics", "PlayGlobalWeaponMIDIAk");
    struct
    {
        struct AActor* Actor;
        float FirstCoolDownMs;
        float NoteDuration;
        uint8_t IsStopByNoteOff;
        struct UGPAudioEventAsset* FireAudioEvent;
        struct UGPAudioEventAsset* StartEvent;
        struct UGPAudioEventAsset* EndEvent;
        struct UGPAudioEventAsset* EFAtomEvent;
        uint8_t ReturnValue;
    } Parms{};
    Parms.Actor = (struct AActor*)Actor;
    Parms.FirstCoolDownMs = (float)FirstCoolDownMs;
    Parms.NoteDuration = (float)NoteDuration;
    Parms.IsStopByNoteOff = (uint8_t)IsStopByNoteOff;
    Parms.FireAudioEvent = (struct UGPAudioEventAsset*)FireAudioEvent;
    Parms.StartEvent = (struct UGPAudioEventAsset*)StartEvent;
    Parms.EndEvent = (struct UGPAudioEventAsset*)EndEvent;
    Parms.EFAtomEvent = (struct UGPAudioEventAsset*)EFAtomEvent;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UGPAudioStatics::PlayFootStepByAnimName(struct AActor* Actor, struct FString AnimName, struct UGPAudioEventAsset*& OutEventAsset)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPAudioStatics", "PlayFootStepByAnimName");
    struct
    {
        struct AActor* Actor;
        struct FString AnimName;
        struct UGPAudioEventAsset* OutEventAsset;
        uint8_t ReturnValue;
    } Parms{};
    Parms.Actor = (struct AActor*)Actor;
    Parms.AnimName = (struct FString)AnimName;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    OutEventAsset = Parms.OutEventAsset;
    return Parms.ReturnValue;
}

struct UGPAudioEventAsset* UGPAudioStatics::PlayBindPhysicalFootStep(struct AActor* Actor, struct UPhysicalMaterial* PhysMat, EGPAudioFootSoundType AudioType, struct UPhysicalMaterialAudioDataAsset* BindCofig)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPAudioStatics", "PlayBindPhysicalFootStep");
    struct
    {
        struct AActor* Actor;
        struct UPhysicalMaterial* PhysMat;
        enum EGPAudioFootSoundType AudioType;
        struct UPhysicalMaterialAudioDataAsset* BindCofig;
        struct UGPAudioEventAsset* ReturnValue;
    } Parms{};
    Parms.Actor = (struct AActor*)Actor;
    Parms.PhysMat = (struct UPhysicalMaterial*)PhysMat;
    Parms.AudioType = (enum EGPAudioFootSoundType)AudioType;
    Parms.BindCofig = (struct UPhysicalMaterialAudioDataAsset*)BindCofig;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UGPAudioStatics::Play3PGlobalWeaponMIDIAk(struct AActor* Actor, float FirstCoolDownMs, float NoteDuration, uint8_t IsStopByNoteOff, struct UGPAudioEventAsset* FireAudioEvent, struct UGPAudioEventAsset* StartEvent, struct UGPAudioEventAsset* EndEvent)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPAudioStatics", "Play3PGlobalWeaponMIDIAk");
    struct
    {
        struct AActor* Actor;
        float FirstCoolDownMs;
        float NoteDuration;
        uint8_t IsStopByNoteOff;
        struct UGPAudioEventAsset* FireAudioEvent;
        struct UGPAudioEventAsset* StartEvent;
        struct UGPAudioEventAsset* EndEvent;
        uint8_t ReturnValue;
    } Parms{};
    Parms.Actor = (struct AActor*)Actor;
    Parms.FirstCoolDownMs = (float)FirstCoolDownMs;
    Parms.NoteDuration = (float)NoteDuration;
    Parms.IsStopByNoteOff = (uint8_t)IsStopByNoteOff;
    Parms.FireAudioEvent = (struct UGPAudioEventAsset*)FireAudioEvent;
    Parms.StartEvent = (struct UGPAudioEventAsset*)StartEvent;
    Parms.EndEvent = (struct UGPAudioEventAsset*)EndEvent;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FGPAudioFuturePlayingID UGPAudioStatics::Play2DGlobalAudioWithEndCallback(struct UGPAudioEventAsset* InAudioAsset, const struct FDelegate& EndPlayCallback)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPAudioStatics", "Play2DGlobalAudioWithEndCallback");
    struct
    {
        struct UGPAudioEventAsset* InAudioAsset;
        struct FDelegate EndPlayCallback;
        struct FGPAudioFuturePlayingID ReturnValue;
    } Parms{};
    Parms.InAudioAsset = (struct UGPAudioEventAsset*)InAudioAsset;
    Parms.EndPlayCallback = (struct FDelegate)EndPlayCallback;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FGPAudioFuturePlayingID UGPAudioStatics::Play2DGlobalAudioWithBeginEndCallback(struct UGPAudioEventAsset* InAudioAsset, const struct FDelegate& BeginPlayCallback, const struct FDelegate& EndPlayCallback)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPAudioStatics", "Play2DGlobalAudioWithBeginEndCallback");
    struct
    {
        struct UGPAudioEventAsset* InAudioAsset;
        struct FDelegate BeginPlayCallback;
        struct FDelegate EndPlayCallback;
        struct FGPAudioFuturePlayingID ReturnValue;
    } Parms{};
    Parms.InAudioAsset = (struct UGPAudioEventAsset*)InAudioAsset;
    Parms.BeginPlayCallback = (struct FDelegate)BeginPlayCallback;
    Parms.EndPlayCallback = (struct FDelegate)EndPlayCallback;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FGPAudioFuturePlayingID UGPAudioStatics::Play2DGlobalAudioWithBeginCallback(struct UGPAudioEventAsset* InAudioAsset, const struct FDelegate& BeginPlayCallback)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPAudioStatics", "Play2DGlobalAudioWithBeginCallback");
    struct
    {
        struct UGPAudioEventAsset* InAudioAsset;
        struct FDelegate BeginPlayCallback;
        struct FGPAudioFuturePlayingID ReturnValue;
    } Parms{};
    Parms.InAudioAsset = (struct UGPAudioEventAsset*)InAudioAsset;
    Parms.BeginPlayCallback = (struct FDelegate)BeginPlayCallback;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FGPAudioFuturePlayingID UGPAudioStatics::Play2DGlobalAudio(struct UGPAudioEventAsset* InAudioAsset, uint8_t bNeedGetPosion)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPAudioStatics", "Play2DGlobalAudio");
    struct
    {
        struct UGPAudioEventAsset* InAudioAsset;
        uint8_t bNeedGetPosion;
        struct FGPAudioFuturePlayingID ReturnValue;
    } Parms{};
    Parms.InAudioAsset = (struct UGPAudioEventAsset*)InAudioAsset;
    Parms.bNeedGetPosion = (uint8_t)bNeedGetPosion;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UGPAudioStatics::OpenWarTapeMode(uint8_t bOpen)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPAudioStatics", "OpenWarTapeMode");
    struct
    {
        uint8_t bOpen;
    } Parms{};
    Parms.bOpen = (uint8_t)bOpen;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UGPAudioStatics::MuteIngameSound(struct FString Reason)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPAudioStatics", "MuteIngameSound");
    struct
    {
        struct FString Reason;
    } Parms{};
    Parms.Reason = (struct FString)Reason;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

float UGPAudioStatics::MakeNoise(struct UGPAudioEventAsset* InEvent, struct UGameAkComponent* GameAk, const struct FName& AudioType, float MakeNoiseRatio)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPAudioStatics", "MakeNoise");
    struct
    {
        struct UGPAudioEventAsset* InEvent;
        struct UGameAkComponent* GameAk;
        struct FName AudioType;
        float MakeNoiseRatio;
        float ReturnValue;
    } Parms{};
    Parms.InEvent = (struct UGPAudioEventAsset*)InEvent;
    Parms.GameAk = (struct UGameAkComponent*)GameAk;
    Parms.AudioType = (struct FName)AudioType;
    Parms.MakeNoiseRatio = (float)MakeNoiseRatio;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UGPAudioStatics::LogSplitLine(struct FString HeadStr)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPAudioStatics", "LogSplitLine");
    struct
    {
        struct FString HeadStr;
    } Parms{};
    Parms.HeadStr = (struct FString)HeadStr;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UGPAudioStatics::LogPerformanceReport()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPAudioStatics", "LogPerformanceReport");
    struct
    {
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UGPAudioStatics::LogAudioError(struct FString LogStr)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPAudioStatics", "LogAudioError");
    struct
    {
        struct FString LogStr;
    } Parms{};
    Parms.LogStr = (struct FString)LogStr;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UGPAudioStatics::LogAudio(struct FString LogStr)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPAudioStatics", "LogAudio");
    struct
    {
        struct FString LogStr;
    } Parms{};
    Parms.LogStr = (struct FString)LogStr;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UGPAudioStatics::LoadPhysicalMaterialConfig(struct AActor* InPlayer, const struct FSoftObjectPath& SoPath)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPAudioStatics", "LoadPhysicalMaterialConfig");
    struct
    {
        struct AActor* InPlayer;
        struct FSoftObjectPath SoPath;
    } Parms{};
    Parms.InPlayer = (struct AActor*)InPlayer;
    Parms.SoPath = (struct FSoftObjectPath)SoPath;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

uint8_t UGPAudioStatics::IsWarTapeModeOpen()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPAudioStatics", "IsWarTapeModeOpen");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UGPAudioStatics::IsUserMono()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPAudioStatics", "IsUserMono");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UGPAudioStatics::IsPlayingByPlayingID(int32_t InPlayingID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPAudioStatics", "IsPlayingByPlayingID");
    struct
    {
        int32_t InPlayingID;
        uint8_t ReturnValue;
    } Parms{};
    Parms.InPlayingID = (int32_t)InPlayingID;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UGPAudioStatics::IsPlaying(struct FGPAudioFuturePlayingID& PlayingId)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPAudioStatics", "IsPlaying");
    struct
    {
        struct FGPAudioFuturePlayingID PlayingId;
        uint8_t ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    PlayingId = Parms.PlayingId;
    return Parms.ReturnValue;
}

uint8_t UGPAudioStatics::IsMuteAudio_ForIOS()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPAudioStatics", "IsMuteAudio_ForIOS");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UGPAudioStatics::IsMonoAudioEnabled_Mobile()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPAudioStatics", "IsMonoAudioEnabled_Mobile");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UGPAudioStatics::IsLocalPlayerControlledPawn(struct AActor* InActor)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPAudioStatics", "IsLocalPlayerControlledPawn");
    struct
    {
        struct AActor* InActor;
        uint8_t ReturnValue;
    } Parms{};
    Parms.InActor = (struct AActor*)InActor;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UGPAudioStatics::IsInMpAudioLowMemoryMode()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPAudioStatics", "IsInMpAudioLowMemoryMode");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UGPAudioStatics::IsInAudioLowMemoryMode()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPAudioStatics", "IsInAudioLowMemoryMode");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UGPAudioStatics::IsInAudio4GBDeviceMode()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPAudioStatics", "IsInAudio4GBDeviceMode");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UGPAudioStatics::IsGlobalWeaponMIDIPlaying(struct AActor* SourceActor)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPAudioStatics", "IsGlobalWeaponMIDIPlaying");
    struct
    {
        struct AActor* SourceActor;
        uint8_t ReturnValue;
    } Parms{};
    Parms.SourceActor = (struct AActor*)SourceActor;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UGPAudioStatics::IsDolbyAtmosSupported()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPAudioStatics", "IsDolbyAtmosSupported");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UGPAudioStatics::IsCurrentIdPlaying(struct FGPAudioFuturePlayingID PlayingId)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPAudioStatics", "IsCurrentIdPlaying");
    struct
    {
        struct FGPAudioFuturePlayingID PlayingId;
        uint8_t ReturnValue;
    } Parms{};
    Parms.PlayingId = (struct FGPAudioFuturePlayingID)PlayingId;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UGPAudioStatics::IsCurrentDeviceMultiChannel()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPAudioStatics", "IsCurrentDeviceMultiChannel");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UGPAudioStatics::IsConvolutionReverbOpen()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPAudioStatics", "IsConvolutionReverbOpen");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UGPAudioStatics::IsAudioMuted()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPAudioStatics", "IsAudioMuted");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UGPAudioStatics::IsAnimPreviewActor(struct AActor* Actor)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPAudioStatics", "IsAnimPreviewActor");
    struct
    {
        struct AActor* Actor;
        uint8_t ReturnValue;
    } Parms{};
    Parms.Actor = (struct AActor*)Actor;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UGPAudioStatics::HasReplacedOutputDevice()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPAudioStatics", "HasReplacedOutputDevice");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FName UGPAudioStatics::GetWeaponFireShadowAkName()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPAudioStatics", "GetWeaponFireShadowAkName");
    struct
    {
        struct FName ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct TArray<struct FGPAudioSysDeviceInfo> UGPAudioStatics::GetSystemDeviceList()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPAudioStatics", "GetSystemDeviceList");
    struct
    {
        struct TArray<struct FGPAudioSysDeviceInfo> ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UGPAudioStatics::GetSourcePlayPosition(struct FGPAudioFuturePlayingID PlayingId, uint8_t bExtrapolate)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPAudioStatics", "GetSourcePlayPosition");
    struct
    {
        struct FGPAudioFuturePlayingID PlayingId;
        uint8_t bExtrapolate;
        int32_t ReturnValue;
    } Parms{};
    Parms.PlayingId = (struct FGPAudioFuturePlayingID)PlayingId;
    Parms.bExtrapolate = (uint8_t)bExtrapolate;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FSoftObjectPath UGPAudioStatics::GetScatteredAudioEventPathByName(struct FString InEventIDString)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPAudioStatics", "GetScatteredAudioEventPathByName");
    struct
    {
        struct FString InEventIDString;
        struct FSoftObjectPath ReturnValue;
    } Parms{};
    Parms.InEventIDString = (struct FString)InEventIDString;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UGPAudioStatics::GetRTPCValue(struct AActor* Actor, struct FName RTPC, float& Value)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPAudioStatics", "GetRTPCValue");
    struct
    {
        struct AActor* Actor;
        struct FName RTPC;
        float Value;
        uint8_t ReturnValue;
    } Parms{};
    Parms.Actor = (struct AActor*)Actor;
    Parms.RTPC = (struct FName)RTPC;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    Value = Parms.Value;
    return Parms.ReturnValue;
}

int32_t UGPAudioStatics::GetPlayingCount(struct AActor* InPlayer)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPAudioStatics", "GetPlayingCount");
    struct
    {
        struct AActor* InPlayer;
        int32_t ReturnValue;
    } Parms{};
    Parms.InPlayer = (struct AActor*)InPlayer;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UGPAudioStatics::GetMeteringPeakArray(struct TArray<float>& OutMeteringPeakArray, int32_t OutSamples, int32_t StartIndex, uint8_t MultiChannel)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPAudioStatics", "GetMeteringPeakArray");
    struct
    {
        struct TArray<float> OutMeteringPeakArray;
        int32_t OutSamples;
        int32_t StartIndex;
        uint8_t MultiChannel;
        int32_t ReturnValue;
    } Parms{};
    Parms.OutSamples = (int32_t)OutSamples;
    Parms.StartIndex = (int32_t)StartIndex;
    Parms.MultiChannel = (uint8_t)MultiChannel;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    OutMeteringPeakArray = Parms.OutMeteringPeakArray;
    return Parms.ReturnValue;
}

uint32_t UGPAudioStatics::GetIDFromString(struct FString DeviceID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPAudioStatics", "GetIDFromString");
    struct
    {
        struct FString DeviceID;
        uint32_t ReturnValue;
    } Parms{};
    Parms.DeviceID = (struct FString)DeviceID;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UGPAudioStatics::GetHRTFPluginEnable()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPAudioStatics", "GetHRTFPluginEnable");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UGPAudioStatics::GetGlobalRTPCValue(struct FName RTPC, float& Value)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPAudioStatics", "GetGlobalRTPCValue");
    struct
    {
        struct FName RTPC;
        float Value;
        uint8_t ReturnValue;
    } Parms{};
    Parms.RTPC = (struct FName)RTPC;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    Value = Parms.Value;
    return Parms.ReturnValue;
}

float UGPAudioStatics::GetGlobalAttenuationValueFromListener(const struct TSet<EGPAttenuationScaleReason>& InReasons)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPAudioStatics", "GetGlobalAttenuationValueFromListener");
    struct
    {
        struct TSet<EGPAttenuationScaleReason> InReasons;
        float ReturnValue;
    } Parms{};
    Parms.InReasons = (struct TSet<EGPAttenuationScaleReason>)InReasons;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UGPAudioStatics::GetGameAkInfo(struct AActor* InPlayer, struct FGameAkInfo& OutGameAkInfo)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPAudioStatics", "GetGameAkInfo");
    struct
    {
        struct AActor* InPlayer;
        struct FGameAkInfo OutGameAkInfo;
        uint8_t ReturnValue;
    } Parms{};
    Parms.InPlayer = (struct AActor*)InPlayer;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    OutGameAkInfo = Parms.OutGameAkInfo;
    return Parms.ReturnValue;
}

struct UPhysicalMaterial* UGPAudioStatics::GetGameAkFloorPhysMat(struct AActor* InPlayer)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPAudioStatics", "GetGameAkFloorPhysMat");
    struct
    {
        struct AActor* InPlayer;
        struct UPhysicalMaterial* ReturnValue;
    } Parms{};
    Parms.InPlayer = (struct AActor*)InPlayer;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UGameAkComponent* UGPAudioStatics::GetGameAkComponent(struct AActor* InPlayer, uint8_t bCreateIfNotExist)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPAudioStatics", "GetGameAkComponent");
    struct
    {
        struct AActor* InPlayer;
        uint8_t bCreateIfNotExist;
        struct UGameAkComponent* ReturnValue;
    } Parms{};
    Parms.InPlayer = (struct AActor*)InPlayer;
    Parms.bCreateIfNotExist = (uint8_t)bCreateIfNotExist;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UGPAudioStatics::GetGameAKAttenuationForListener(struct FName ShadowGameAKName, struct UWorld* World, struct AActor* EmitterActor)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPAudioStatics", "GetGameAKAttenuationForListener");
    struct
    {
        struct FName ShadowGameAKName;
        struct UWorld* World;
        struct AActor* EmitterActor;
        float ReturnValue;
    } Parms{};
    Parms.ShadowGameAKName = (struct FName)ShadowGameAKName;
    Parms.World = (struct UWorld*)World;
    Parms.EmitterActor = (struct AActor*)EmitterActor;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UGPAudioStatics::GetEnableGPAudioDolby()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPAudioStatics", "GetEnableGPAudioDolby");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UGPAudioStatics::GetDolbyNotDownMix()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPAudioStatics", "GetDolbyNotDownMix");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UGPAudioStatics::GetDeviceSpatialAudioSupport(uint32_t DeviceID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPAudioStatics", "GetDeviceSpatialAudioSupport");
    struct
    {
        uint32_t DeviceID;
        uint8_t ReturnValue;
    } Parms{};
    Parms.DeviceID = (uint32_t)DeviceID;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UGameAkComponent* UGPAudioStatics::GetDefaultListener(struct UWorld* InWorld)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPAudioStatics", "GetDefaultListener");
    struct
    {
        struct UWorld* InWorld;
        struct UGameAkComponent* ReturnValue;
    } Parms{};
    Parms.InWorld = (struct UWorld*)InWorld;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint32_t UGPAudioStatics::GetCurUsingSystemDeviceID(uint8_t ForceUseOldWay)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPAudioStatics", "GetCurUsingSystemDeviceID");
    struct
    {
        uint8_t ForceUseOldWay;
        uint32_t ReturnValue;
    } Parms{};
    Parms.ForceUseOldWay = (uint8_t)ForceUseOldWay;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UGPAudioStatics::GetCurrentAudioCulture()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPAudioStatics", "GetCurrentAudioCulture");
    struct
    {
        struct FString ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FName UGPAudioStatics::GetCrouchFootstepShadowAkName()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPAudioStatics", "GetCrouchFootstepShadowAkName");
    struct
    {
        struct FName ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UGPAudioStatics::GetBusMeteringPeakArray(struct FString BusName, struct TArray<float>& OutMeteringPeakArray, int32_t OutSamples, int32_t StartIndex, uint8_t MultiChannel)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPAudioStatics", "GetBusMeteringPeakArray");
    struct
    {
        struct FString BusName;
        struct TArray<float> OutMeteringPeakArray;
        int32_t OutSamples;
        int32_t StartIndex;
        uint8_t MultiChannel;
        int32_t ReturnValue;
    } Parms{};
    Parms.BusName = (struct FString)BusName;
    Parms.OutSamples = (int32_t)OutSamples;
    Parms.StartIndex = (int32_t)StartIndex;
    Parms.MultiChannel = (uint8_t)MultiChannel;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    OutMeteringPeakArray = Parms.OutMeteringPeakArray;
    return Parms.ReturnValue;
}

float UGPAudioStatics::GetAttenuationScaleForListener(EGPAudioBlueprintType InAudioType, EGPAttenuationScaleReason InScaleType)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPAudioStatics", "GetAttenuationScaleForListener");
    struct
    {
        enum EGPAudioBlueprintType InAudioType;
        enum EGPAttenuationScaleReason InScaleType;
        float ReturnValue;
    } Parms{};
    Parms.InAudioType = (enum EGPAudioBlueprintType)InAudioType;
    Parms.InScaleType = (enum EGPAttenuationScaleReason)InScaleType;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UGPAudioStatics::GetAsyncTraceResults(struct AActor* Actor, struct FHitResult& Out_HitResult)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPAudioStatics", "GetAsyncTraceResults");
    struct
    {
        struct AActor* Actor;
        struct FHitResult Out_HitResult;
        uint8_t ReturnValue;
    } Parms{};
    Parms.Actor = (struct AActor*)Actor;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    Out_HitResult = Parms.Out_HitResult;
    return Parms.ReturnValue;
}

int32_t UGPAudioStatics::GetAllPlayingCount()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPAudioStatics", "GetAllPlayingCount");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UGPAudioStatics::GetActorPlayingRangeAndDurationByTypeName(struct AActor* InPlayer, struct FName AudioTypeName, float& Range, float& Duration)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPAudioStatics", "GetActorPlayingRangeAndDurationByTypeName");
    struct
    {
        struct AActor* InPlayer;
        struct FName AudioTypeName;
        float Range;
        float Duration;
        uint8_t ReturnValue;
    } Parms{};
    Parms.InPlayer = (struct AActor*)InPlayer;
    Parms.AudioTypeName = (struct FName)AudioTypeName;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    Range = Parms.Range;
    Duration = Parms.Duration;
    return Parms.ReturnValue;
}

uint8_t UGPAudioStatics::GetActorPlayingRangeAndDuration(struct AActor* InPlayer, struct FGPAudioFuturePlayingID& PlayingId, float& Range, float& Duration)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPAudioStatics", "GetActorPlayingRangeAndDuration");
    struct
    {
        struct AActor* InPlayer;
        struct FGPAudioFuturePlayingID PlayingId;
        float Range;
        float Duration;
        uint8_t ReturnValue;
    } Parms{};
    Parms.InPlayer = (struct AActor*)InPlayer;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    PlayingId = Parms.PlayingId;
    Range = Parms.Range;
    Duration = Parms.Duration;
    return Parms.ReturnValue;
}

uint8_t UGPAudioStatics::GetActorPlayingItemByTypeName(struct AActor* InPlayer, struct FName AudioTypeName, struct FGameAkPlayingItem& OutItem)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPAudioStatics", "GetActorPlayingItemByTypeName");
    struct
    {
        struct AActor* InPlayer;
        struct FName AudioTypeName;
        struct FGameAkPlayingItem OutItem;
        uint8_t ReturnValue;
    } Parms{};
    Parms.InPlayer = (struct AActor*)InPlayer;
    Parms.AudioTypeName = (struct FName)AudioTypeName;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    OutItem = Parms.OutItem;
    return Parms.ReturnValue;
}

uint8_t UGPAudioStatics::GetActorPlayingItem(struct AActor* InPlayer, struct FGPAudioFuturePlayingID& PlayingId, struct FGameAkPlayingItem& OutItem)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPAudioStatics", "GetActorPlayingItem");
    struct
    {
        struct AActor* InPlayer;
        struct FGPAudioFuturePlayingID PlayingId;
        struct FGameAkPlayingItem OutItem;
        uint8_t ReturnValue;
    } Parms{};
    Parms.InPlayer = (struct AActor*)InPlayer;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    PlayingId = Parms.PlayingId;
    OutItem = Parms.OutItem;
    return Parms.ReturnValue;
}

float UGPAudioStatics::GetActorMaxMakeNoiseRange(struct AActor* InPlayer)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPAudioStatics", "GetActorMaxMakeNoiseRange");
    struct
    {
        struct AActor* InPlayer;
        float ReturnValue;
    } Parms{};
    Parms.InPlayer = (struct AActor*)InPlayer;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UGPAudioStatics::GetActorMaxLocalListenRange(struct AActor* InPlayer)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPAudioStatics", "GetActorMaxLocalListenRange");
    struct
    {
        struct AActor* InPlayer;
        float ReturnValue;
    } Parms{};
    Parms.InPlayer = (struct AActor*)InPlayer;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UGPAudioStatics::GameAkInDoorArea(struct AActor* InPlayer)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPAudioStatics", "GameAkInDoorArea");
    struct
    {
        struct AActor* InPlayer;
        uint8_t ReturnValue;
    } Parms{};
    Parms.InPlayer = (struct AActor*)InPlayer;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UGPAudioStatics::ForceStopGlobalWeaponMIDI(int32_t FireCount)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPAudioStatics", "ForceStopGlobalWeaponMIDI");
    struct
    {
        int32_t FireCount;
    } Parms{};
    Parms.FireCount = (int32_t)FireCount;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

uint32_t UGPAudioStatics::FindMatchDeviceIDByDirectSoundGUID(struct FString InGUID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPAudioStatics", "FindMatchDeviceIDByDirectSoundGUID");
    struct
    {
        struct FString InGUID;
        uint32_t ReturnValue;
    } Parms{};
    Parms.InGUID = (struct FString)InGUID;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UGPAudioStatics::ExecActionOnPlayingID(struct FGPAudioFuturePlayingID PlayingId, EGPAudioActionOnEventType ActionType)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPAudioStatics", "ExecActionOnPlayingID");
    struct
    {
        struct FGPAudioFuturePlayingID PlayingId;
        enum EGPAudioActionOnEventType ActionType;
    } Parms{};
    Parms.PlayingId = (struct FGPAudioFuturePlayingID)PlayingId;
    Parms.ActionType = (enum EGPAudioActionOnEventType)ActionType;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UGPAudioStatics::EndReplay()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPAudioStatics", "EndReplay");
    struct
    {
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

uint8_t UGPAudioStatics::EnableSingleAudio()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPAudioStatics", "EnableSingleAudio");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UGPAudioStatics::EnableOculus(uint8_t bEnable)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPAudioStatics", "EnableOculus");
    struct
    {
        uint8_t bEnable;
    } Parms{};
    Parms.bEnable = (uint8_t)bEnable;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

uint8_t UGPAudioStatics::EnableLogAudio()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPAudioStatics", "EnableLogAudio");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UGPAudioStatics::EnableIngameSound(struct FString Reason)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPAudioStatics", "EnableIngameSound");
    struct
    {
        struct FString Reason;
    } Parms{};
    Parms.Reason = (struct FString)Reason;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

uint8_t UGPAudioStatics::EnableGPAudioDebugger()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPAudioStatics", "EnableGPAudioDebugger");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UGPAudioStatics::EnableBusMetering(struct FString BusName, uint8_t bEnable)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPAudioStatics", "EnableBusMetering");
    struct
    {
        struct FString BusName;
        uint8_t bEnable;
        uint8_t ReturnValue;
    } Parms{};
    Parms.BusName = (struct FString)BusName;
    Parms.bEnable = (uint8_t)bEnable;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UGPAudioStatics::DeregisterHighFreqUpdatePos(struct AActor* InActor, EGameAkHighFreqUpdatePosReason InReason)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPAudioStatics", "DeregisterHighFreqUpdatePos");
    struct
    {
        struct AActor* InActor;
        enum EGameAkHighFreqUpdatePosReason InReason;
    } Parms{};
    Parms.InActor = (struct AActor*)InActor;
    Parms.InReason = (enum EGameAkHighFreqUpdatePosReason)InReason;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

uint8_t UGPAudioStatics::CreateGameAkComponent(struct AActor* InPlayer, struct UGameAkComponent*& OutGameAk)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPAudioStatics", "CreateGameAkComponent");
    struct
    {
        struct AActor* InPlayer;
        struct UGameAkComponent* OutGameAk;
        uint8_t ReturnValue;
    } Parms{};
    Parms.InPlayer = (struct AActor*)InPlayer;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    OutGameAk = Parms.OutGameAk;
    return Parms.ReturnValue;
}

void UGPAudioStatics::CollectLoop2DEvent(uint8_t bCollect)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPAudioStatics", "CollectLoop2DEvent");
    struct
    {
        uint8_t bCollect;
    } Parms{};
    Parms.bCollect = (uint8_t)bCollect;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UGPAudioStatics::CloseGVoiceInit()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPAudioStatics", "CloseGVoiceInit");
    struct
    {
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UGPAudioStatics::ClearWindowOpen()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPAudioStatics", "ClearWindowOpen");
    struct
    {
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UGPAudioStatics::ClearCutsceneAudio(uint8_t bDelayStop)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPAudioStatics", "ClearCutsceneAudio");
    struct
    {
        uint8_t bDelayStop;
    } Parms{};
    Parms.bDelayStop = (uint8_t)bDelayStop;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

uint8_t UGPAudioStatics::CheckAnimationNotifyKeys(const struct FName& AniNotifyKey, struct AActor* EditorActor)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPAudioStatics", "CheckAnimationNotifyKeys");
    struct
    {
        struct FName AniNotifyKey;
        struct AActor* EditorActor;
        uint8_t ReturnValue;
    } Parms{};
    Parms.AniNotifyKey = (struct FName)AniNotifyKey;
    Parms.EditorActor = (struct AActor*)EditorActor;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UGPAudioStatics::bGVoiceInit()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPAudioStatics", "bGVoiceInit");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UGPAudioStatics::AsyncTraceToGround(struct AActor* Actor)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPAudioStatics", "AsyncTraceToGround");
    struct
    {
        struct AActor* Actor;
        uint8_t ReturnValue;
    } Parms{};
    Parms.Actor = (struct AActor*)Actor;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UGPAudioStatics::AddOutput(struct FString DeviceShareSetName, int32_t IdDevice)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPAudioStatics", "AddOutput");
    struct
    {
        struct FString DeviceShareSetName;
        int32_t IdDevice;
        uint8_t ReturnValue;
    } Parms{};
    Parms.DeviceShareSetName = (struct FString)DeviceShareSetName;
    Parms.IdDevice = (int32_t)IdDevice;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UGPAudioStatics::Add714Output()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPAudioStatics", "Add714Output");
    struct
    {
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

// ---- UGPIOSAudioStatics::* ----
void UGPIOSAudioStatics::ReleaseMuteDetector()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPIOSAudioStatics", "ReleaseMuteDetector");
    struct
    {
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

uint8_t UGPIOSAudioStatics::IsMono()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPIOSAudioStatics", "IsMono");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UGPIOSAudioStatics::GetMuteState()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPIOSAudioStatics", "GetMuteState");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UGPIOSAudioStatics::DetectMuteStatus()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPIOSAudioStatics", "DetectMuteStatus");
    struct
    {
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

// ---- UPluginAudioSubsystem::* ----
void UPluginAudioSubsystem::UpdateListeningBuffIcon(struct UWorld* World, float Scalar)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PluginAudioSubsystem", "UpdateListeningBuffIcon");
    struct
    {
        struct UWorld* World;
        float Scalar;
    } Parms{};
    Parms.World = (struct UWorld*)World;
    Parms.Scalar = (float)Scalar;
    this->ProcessEvent(Func, &Parms);
}

uint8_t UPluginAudioSubsystem::IsWolfOverload(struct ACHARACTER* CHARACTER)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PluginAudioSubsystem", "IsWolfOverload");
    struct
    {
        struct ACHARACTER* CHARACTER;
        uint8_t ReturnValue;
    } Parms{};
    Parms.CHARACTER = (struct ACHARACTER*)CHARACTER;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UPluginAudioSubsystem::IsMatchOverNotInSpectating(struct AActor* InActor)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PluginAudioSubsystem", "IsMatchOverNotInSpectating");
    struct
    {
        struct AActor* InActor;
        uint8_t ReturnValue;
    } Parms{};
    Parms.InActor = (struct AActor*)InActor;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UPluginAudioSubsystem::IsCharacterEscape(struct ACHARACTER* CHARACTER)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PluginAudioSubsystem", "IsCharacterEscape");
    struct
    {
        struct ACHARACTER* CHARACTER;
        uint8_t ReturnValue;
    } Parms{};
    Parms.CHARACTER = (struct ACHARACTER*)CHARACTER;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UPluginAudioSubsystem::IsAlexieInBlastShield(struct ACHARACTER* CHARACTER)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PluginAudioSubsystem", "IsAlexieInBlastShield");
    struct
    {
        struct ACHARACTER* CHARACTER;
        uint8_t ReturnValue;
    } Parms{};
    Parms.CHARACTER = (struct ACHARACTER*)CHARACTER;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct AActor* UPluginAudioSubsystem::GetVehicleByCharacter(struct ACHARACTER* CHARACTER)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PluginAudioSubsystem", "GetVehicleByCharacter");
    struct
    {
        struct ACHARACTER* CHARACTER;
        struct AActor* ReturnValue;
    } Parms{};
    Parms.CHARACTER = (struct ACHARACTER*)CHARACTER;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UPluginAudioSubsystem::GetLocalFocusAttributeListenRange(struct UWorld* InWorld)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PluginAudioSubsystem", "GetLocalFocusAttributeListenRange");
    struct
    {
        struct UWorld* InWorld;
        float ReturnValue;
    } Parms{};
    Parms.InWorld = (struct UWorld*)InWorld;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UPluginAudioSubsystem::GetHRTFTypeHD(struct UWorld* InWorld)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PluginAudioSubsystem", "GetHRTFTypeHD");
    struct
    {
        struct UWorld* InWorld;
        int32_t ReturnValue;
    } Parms{};
    Parms.InWorld = (struct UWorld*)InWorld;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint64_t UPluginAudioSubsystem::GetCurrentClientCharacterAvatarID(struct ACHARACTER* CHARACTER)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PluginAudioSubsystem", "GetCurrentClientCharacterAvatarID");
    struct
    {
        struct ACHARACTER* CHARACTER;
        uint64_t ReturnValue;
    } Parms{};
    Parms.CHARACTER = (struct ACHARACTER*)CHARACTER;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct ACHARACTER* UPluginAudioSubsystem::GetCarryBodyCharacter(struct ACHARACTER* CHARACTER)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PluginAudioSubsystem", "GetCarryBodyCharacter");
    struct
    {
        struct ACHARACTER* CHARACTER;
        struct ACHARACTER* ReturnValue;
    } Parms{};
    Parms.CHARACTER = (struct ACHARACTER*)CHARACTER;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UPluginAudioSubsystem* UPluginAudioSubsystem::Get(struct UWorld* World)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("PluginAudioSubsystem", "Get");
    struct
    {
        struct UWorld* World;
        struct UPluginAudioSubsystem* ReturnValue;
    } Parms{};
    Parms.World = (struct UWorld*)World;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

} // namespace SDK
