#include "AkAudio.hpp"
#include "Engine.hpp"
#include "SlateCore.hpp"
#include <cstring> // memcpy for ArrayDim>1 param marshalling

namespace SDK
{

// UAkGameObject
void UAkGameObject::PostAssociatedAkEventAsync(struct UObject* WorldContextObject, int32_t CallbackMask, const struct FDelegate& PostEventCallback, const struct TArray<struct FAkExternalSourceInfo>& ExternalSources, struct FLatentActionInfo LatentInfo, int32_t& PlayingId)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AkGameObject", "PostAssociatedAkEventAsync");
    struct
    {
        struct UObject* WorldContextObject;
        int32_t CallbackMask;
        struct FDelegate PostEventCallback;
        struct TArray<struct FAkExternalSourceInfo> ExternalSources;
        struct FLatentActionInfo LatentInfo;
        int32_t PlayingId;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    Parms.CallbackMask = (int32_t)CallbackMask;
    Parms.PostEventCallback = (struct FDelegate)PostEventCallback;
    Parms.ExternalSources = (struct TArray<struct FAkExternalSourceInfo>)ExternalSources;
    Parms.LatentInfo = (struct FLatentActionInfo)LatentInfo;
    this->ProcessEvent(Func, &Parms);
    PlayingId = Parms.PlayingId;
}

int32_t UAkGameObject::PostAssociatedAkEvent(int32_t CallbackMask, const struct FDelegate& PostEventCallback, const struct TArray<struct FAkExternalSourceInfo>& ExternalSources)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AkGameObject", "PostAssociatedAkEvent");
    struct
    {
        int32_t CallbackMask;
        struct FDelegate PostEventCallback;
        struct TArray<struct FAkExternalSourceInfo> ExternalSources;
        int32_t ReturnValue;
    } Parms{};
    Parms.CallbackMask = (int32_t)CallbackMask;
    Parms.PostEventCallback = (struct FDelegate)PostEventCallback;
    Parms.ExternalSources = (struct TArray<struct FAkExternalSourceInfo>)ExternalSources;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UAkGameObject::PostAkEventAsync(struct UObject* WorldContextObject, struct UAkAudioEvent* AkEvent, int32_t& PlayingId, int32_t CallbackMask, const struct FDelegate& PostEventCallback, const struct TArray<struct FAkExternalSourceInfo>& ExternalSources, struct FLatentActionInfo LatentInfo)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AkGameObject", "PostAkEventAsync");
    struct
    {
        struct UObject* WorldContextObject;
        struct UAkAudioEvent* AkEvent;
        int32_t PlayingId;
        int32_t CallbackMask;
        struct FDelegate PostEventCallback;
        struct TArray<struct FAkExternalSourceInfo> ExternalSources;
        struct FLatentActionInfo LatentInfo;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    Parms.AkEvent = (struct UAkAudioEvent*)AkEvent;
    Parms.CallbackMask = (int32_t)CallbackMask;
    Parms.PostEventCallback = (struct FDelegate)PostEventCallback;
    Parms.ExternalSources = (struct TArray<struct FAkExternalSourceInfo>)ExternalSources;
    Parms.LatentInfo = (struct FLatentActionInfo)LatentInfo;
    this->ProcessEvent(Func, &Parms);
    PlayingId = Parms.PlayingId;
}

int32_t UAkGameObject::PostAkEvent(struct UAkAudioEvent* AkEvent, int32_t CallbackMask, const struct FDelegate& PostEventCallback, const struct TArray<struct FAkExternalSourceInfo>& ExternalSources, struct FString in_EventName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AkGameObject", "PostAkEvent");
    struct
    {
        struct UAkAudioEvent* AkEvent;
        int32_t CallbackMask;
        struct FDelegate PostEventCallback;
        struct TArray<struct FAkExternalSourceInfo> ExternalSources;
        struct FString in_EventName;
        int32_t ReturnValue;
    } Parms{};
    Parms.AkEvent = (struct UAkAudioEvent*)AkEvent;
    Parms.CallbackMask = (int32_t)CallbackMask;
    Parms.PostEventCallback = (struct FDelegate)PostEventCallback;
    Parms.ExternalSources = (struct TArray<struct FAkExternalSourceInfo>)ExternalSources;
    Parms.in_EventName = (struct FString)in_EventName;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UAkComponent
void UAkComponent::UseReverbVolumes(uint8_t inUseReverbVolumes)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AkComponent", "UseReverbVolumes");
    struct
    {
        uint8_t inUseReverbVolumes;
    } Parms{};
    Parms.inUseReverbVolumes = (uint8_t)inUseReverbVolumes;
    this->ProcessEvent(Func, &Parms);
}

void UAkComponent::UseEarlyReflections(struct UAkAuxBus* AuxBus, int32_t Order, float BusSendGain, float MaxPathLength, uint8_t SpotReflectors, struct FString AuxBusName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AkComponent", "UseEarlyReflections");
    struct
    {
        struct UAkAuxBus* AuxBus;
        int32_t Order;
        float BusSendGain;
        float MaxPathLength;
        uint8_t SpotReflectors;
        struct FString AuxBusName;
    } Parms{};
    Parms.AuxBus = (struct UAkAuxBus*)AuxBus;
    Parms.Order = (int32_t)Order;
    Parms.BusSendGain = (float)BusSendGain;
    Parms.MaxPathLength = (float)MaxPathLength;
    Parms.SpotReflectors = (uint8_t)SpotReflectors;
    Parms.AuxBusName = (struct FString)AuxBusName;
    this->ProcessEvent(Func, &Parms);
}

void UAkComponent::SetSwitch(struct UAkSwitchValue* SwitchValue, struct FString SwitchGroup, struct FString SwitchState)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AkComponent", "SetSwitch");
    struct
    {
        struct UAkSwitchValue* SwitchValue;
        struct FString SwitchGroup;
        struct FString SwitchState;
    } Parms{};
    Parms.SwitchValue = (struct UAkSwitchValue*)SwitchValue;
    Parms.SwitchGroup = (struct FString)SwitchGroup;
    Parms.SwitchState = (struct FString)SwitchState;
    this->ProcessEvent(Func, &Parms);
}

void UAkComponent::SetStopWhenOwnerDestroyed(uint8_t bStopWhenOwnerDestroyed)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AkComponent", "SetStopWhenOwnerDestroyed");
    struct
    {
        uint8_t bStopWhenOwnerDestroyed;
    } Parms{};
    Parms.bStopWhenOwnerDestroyed = (uint8_t)bStopWhenOwnerDestroyed;
    this->ProcessEvent(Func, &Parms);
}

void UAkComponent::SetRTPCValue(struct UAkRtpc* RTPCValue, float Value, int32_t InterpolationTimeMs, struct FString RTPC)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AkComponent", "SetRTPCValue");
    struct
    {
        struct UAkRtpc* RTPCValue;
        float Value;
        int32_t InterpolationTimeMs;
        struct FString RTPC;
    } Parms{};
    Parms.RTPCValue = (struct UAkRtpc*)RTPCValue;
    Parms.Value = (float)Value;
    Parms.InterpolationTimeMs = (int32_t)InterpolationTimeMs;
    Parms.RTPC = (struct FString)RTPC;
    this->ProcessEvent(Func, &Parms);
}

void UAkComponent::SetOutputBusVolume(float BusVolume)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AkComponent", "SetOutputBusVolume");
    struct
    {
        float BusVolume;
    } Parms{};
    Parms.BusVolume = (float)BusVolume;
    this->ProcessEvent(Func, &Parms);
}

void UAkComponent::SetListeners(const struct TArray<struct UAkComponent*>& Listeners)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AkComponent", "SetListeners");
    struct
    {
        struct TArray<struct UAkComponent*> Listeners;
    } Parms{};
    Parms.Listeners = (struct TArray<struct UAkComponent*>)Listeners;
    this->ProcessEvent(Func, &Parms);
}

void UAkComponent::SetEarlyReflectionsVolume(float SendVolume)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AkComponent", "SetEarlyReflectionsVolume");
    struct
    {
        float SendVolume;
    } Parms{};
    Parms.SendVolume = (float)SendVolume;
    this->ProcessEvent(Func, &Parms);
}

void UAkComponent::SetEarlyReflectionsAuxBus(struct FString AuxBusName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AkComponent", "SetEarlyReflectionsAuxBus");
    struct
    {
        struct FString AuxBusName;
    } Parms{};
    Parms.AuxBusName = (struct FString)AuxBusName;
    this->ProcessEvent(Func, &Parms);
}

void UAkComponent::SetAttenuationScalingFactor(float Value)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AkComponent", "SetAttenuationScalingFactor");
    struct
    {
        float Value;
    } Parms{};
    Parms.Value = (float)Value;
    this->ProcessEvent(Func, &Parms);
}

void UAkComponent::PostTrigger(struct UAkTrigger* TriggerValue, struct FString Trigger)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AkComponent", "PostTrigger");
    struct
    {
        struct UAkTrigger* TriggerValue;
        struct FString Trigger;
    } Parms{};
    Parms.TriggerValue = (struct UAkTrigger*)TriggerValue;
    Parms.Trigger = (struct FString)Trigger;
    this->ProcessEvent(Func, &Parms);
}

void UAkComponent::PostAssociatedAkEventAndWaitForEndAsync(int32_t& PlayingId, const struct TArray<struct FAkExternalSourceInfo>& ExternalSources, struct FLatentActionInfo LatentInfo)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AkComponent", "PostAssociatedAkEventAndWaitForEndAsync");
    struct
    {
        int32_t PlayingId;
        struct TArray<struct FAkExternalSourceInfo> ExternalSources;
        struct FLatentActionInfo LatentInfo;
    } Parms{};
    Parms.ExternalSources = (struct TArray<struct FAkExternalSourceInfo>)ExternalSources;
    Parms.LatentInfo = (struct FLatentActionInfo)LatentInfo;
    this->ProcessEvent(Func, &Parms);
    PlayingId = Parms.PlayingId;
}

int32_t UAkComponent::PostAssociatedAkEventAndWaitForEnd(const struct TArray<struct FAkExternalSourceInfo>& ExternalSources, struct FLatentActionInfo LatentInfo)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AkComponent", "PostAssociatedAkEventAndWaitForEnd");
    struct
    {
        struct TArray<struct FAkExternalSourceInfo> ExternalSources;
        struct FLatentActionInfo LatentInfo;
        int32_t ReturnValue;
    } Parms{};
    Parms.ExternalSources = (struct TArray<struct FAkExternalSourceInfo>)ExternalSources;
    Parms.LatentInfo = (struct FLatentActionInfo)LatentInfo;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UAkComponent::PostAkEventByName(struct FString in_EventName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AkComponent", "PostAkEventByName");
    struct
    {
        struct FString in_EventName;
        int32_t ReturnValue;
    } Parms{};
    Parms.in_EventName = (struct FString)in_EventName;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UAkComponent::PostAkEventAndWaitForEndAsync(struct UAkAudioEvent* AkEvent, int32_t& PlayingId, const struct TArray<struct FAkExternalSourceInfo>& ExternalSources, struct FLatentActionInfo LatentInfo)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AkComponent", "PostAkEventAndWaitForEndAsync");
    struct
    {
        struct UAkAudioEvent* AkEvent;
        int32_t PlayingId;
        struct TArray<struct FAkExternalSourceInfo> ExternalSources;
        struct FLatentActionInfo LatentInfo;
    } Parms{};
    Parms.AkEvent = (struct UAkAudioEvent*)AkEvent;
    Parms.ExternalSources = (struct TArray<struct FAkExternalSourceInfo>)ExternalSources;
    Parms.LatentInfo = (struct FLatentActionInfo)LatentInfo;
    this->ProcessEvent(Func, &Parms);
    PlayingId = Parms.PlayingId;
}

int32_t UAkComponent::PostAkEventAndWaitForEnd(struct UAkAudioEvent* AkEvent, struct FString in_EventName, const struct TArray<struct FAkExternalSourceInfo>& ExternalSources, struct FLatentActionInfo LatentInfo)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AkComponent", "PostAkEventAndWaitForEnd");
    struct
    {
        struct UAkAudioEvent* AkEvent;
        struct FString in_EventName;
        struct TArray<struct FAkExternalSourceInfo> ExternalSources;
        struct FLatentActionInfo LatentInfo;
        int32_t ReturnValue;
    } Parms{};
    Parms.AkEvent = (struct UAkAudioEvent*)AkEvent;
    Parms.in_EventName = (struct FString)in_EventName;
    Parms.ExternalSources = (struct TArray<struct FAkExternalSourceInfo>)ExternalSources;
    Parms.LatentInfo = (struct FLatentActionInfo)LatentInfo;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UAkComponent::GetRTPCValue(struct UAkRtpc* RTPCValue, ERTPCValueType InputValueType, float& Value, ERTPCValueType& OutputValueType, struct FString RTPC, int32_t PlayingId)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AkComponent", "GetRTPCValue");
    struct
    {
        struct UAkRtpc* RTPCValue;
        enum ERTPCValueType InputValueType;
        float Value;
        enum ERTPCValueType OutputValueType;
        struct FString RTPC;
        int32_t PlayingId;
    } Parms{};
    Parms.RTPCValue = (struct UAkRtpc*)RTPCValue;
    Parms.InputValueType = (enum ERTPCValueType)InputValueType;
    Parms.RTPC = (struct FString)RTPC;
    Parms.PlayingId = (int32_t)PlayingId;
    this->ProcessEvent(Func, &Parms);
    Value = Parms.Value;
    OutputValueType = Parms.OutputValueType;
}

float UAkComponent::GetDistanceFromNearestListener()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AkComponent", "GetDistanceFromNearestListener");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UAkComponent::GetDistanceFromFirstListener()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AkComponent", "GetDistanceFromFirstListener");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UAkComponent::GetAttenuationRadius()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AkComponent", "GetAttenuationRadius");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// AAkAcousticPortal
void AAkAcousticPortal::OpenPortal()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AkAcousticPortal", "OpenPortal");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

EAkAcousticPortalState AAkAcousticPortal::GetCurrentState()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AkAcousticPortal", "GetCurrentState");
    struct
    {
        enum EAkAcousticPortalState ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void AAkAcousticPortal::ClosePortal()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AkAcousticPortal", "ClosePortal");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// AAkAmbientSound
void AAkAmbientSound::StopAmbientSound()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AkAmbientSound", "StopAmbientSound");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AAkAmbientSound::StartAmbientSound()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AkAmbientSound", "StartAmbientSound");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// UAkAndroidInitializationSettings
void UAkAndroidInitializationSettings::MigrateMultiCoreRendering(uint8_t NewValue)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AkAndroidInitializationSettings", "MigrateMultiCoreRendering");
    struct
    {
        uint8_t NewValue;
    } Parms{};
    Parms.NewValue = (uint8_t)NewValue;
    this->ProcessEvent(Func, &Parms);
}

// UAkAudioEvent
uint32_t UAkAudioEvent::GetStopShortID()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AkAudioEvent", "GetStopShortID");
    struct
    {
        uint32_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UAkAudioEvent::GetMinimumDuration()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AkAudioEvent", "GetMinimumDuration");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UAkAudioEvent::GetMaximumDuration()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AkAudioEvent", "GetMaximumDuration");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UAkAudioEvent::GetMaxAttenuationRadius()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AkAudioEvent", "GetMaxAttenuationRadius");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UAkAudioEvent::GetIsInfinite()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AkAudioEvent", "GetIsInfinite");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UAkAudioInputComponent
int32_t UAkAudioInputComponent::PostAssociatedAudioInputEvent()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AkAudioInputComponent", "PostAssociatedAudioInputEvent");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UAkCheckBox
void UAkCheckBox::SetIsChecked(uint8_t InIsChecked)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AkCheckBox", "SetIsChecked");
    struct
    {
        uint8_t InIsChecked;
    } Parms{};
    Parms.InIsChecked = (uint8_t)InIsChecked;
    this->ProcessEvent(Func, &Parms);
}

void UAkCheckBox::SetCheckedState(ECheckBoxState InCheckedState)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AkCheckBox", "SetCheckedState");
    struct
    {
        enum ECheckBoxState InCheckedState;
    } Parms{};
    Parms.InCheckedState = (enum ECheckBoxState)InCheckedState;
    this->ProcessEvent(Func, &Parms);
}

void UAkCheckBox::SetAkItemId(const struct FGuid& ItemID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AkCheckBox", "SetAkItemId");
    struct
    {
        struct FGuid ItemID;
    } Parms{};
    Parms.ItemID = (struct FGuid)ItemID;
    this->ProcessEvent(Func, &Parms);
}

void UAkCheckBox::SetAkBoolProperty(struct FString ItemProperty)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AkCheckBox", "SetAkBoolProperty");
    struct
    {
        struct FString ItemProperty;
    } Parms{};
    Parms.ItemProperty = (struct FString)ItemProperty;
    this->ProcessEvent(Func, &Parms);
}

uint8_t UAkCheckBox::IsPressed()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AkCheckBox", "IsPressed");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UAkCheckBox::IsChecked()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AkCheckBox", "IsChecked");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

ECheckBoxState UAkCheckBox::GetCheckedState()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AkCheckBox", "GetCheckedState");
    struct
    {
        enum ECheckBoxState ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UAkCheckBox::GetAkProperty()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AkCheckBox", "GetAkProperty");
    struct
    {
        struct FString ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FGuid UAkCheckBox::GetAkItemId()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AkCheckBox", "GetAkItemId");
    struct
    {
        struct FGuid ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UAkEventMemoryStatistics
void UAkEventMemoryStatistics::LogMemInfo()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AkEventMemoryStatistics", "LogMemInfo");
    struct
    {
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UAkEventMemoryStatistics::ForceUnloadNonPlayingLeakingMediaMems()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AkEventMemoryStatistics", "ForceUnloadNonPlayingLeakingMediaMems");
    struct
    {
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

// UAkGameplayStatics
uint8_t UAkGameplayStatics::TestGetAudioSamplesFromSinkRecordPlugin(struct TArray<float>& OutSamples)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AkGameplayStatics", "TestGetAudioSamplesFromSinkRecordPlugin");
    struct
    {
        struct TArray<float> OutSamples;
        uint8_t ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    OutSamples = Parms.OutSamples;
    return Parms.ReturnValue;
}

void UAkGameplayStatics::SetSwitch(struct UAkSwitchValue* SwitchValue, struct AActor* Actor, struct FName SwitchGroup, struct FName SwitchState)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AkGameplayStatics", "SetSwitch");
    struct
    {
        struct UAkSwitchValue* SwitchValue;
        struct AActor* Actor;
        struct FName SwitchGroup;
        struct FName SwitchState;
    } Parms{};
    Parms.SwitchValue = (struct UAkSwitchValue*)SwitchValue;
    Parms.Actor = (struct AActor*)Actor;
    Parms.SwitchGroup = (struct FName)SwitchGroup;
    Parms.SwitchState = (struct FName)SwitchState;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

// UAkMIDIEventCallbackInfo
EAkMidiEventType UAkMIDIEventCallbackInfo::GetType()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AkMIDIEventCallbackInfo", "GetType");
    struct
    {
        enum EAkMidiEventType ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UAkMIDIEventCallbackInfo::GetProgramChange(struct FAkMidiProgramChange& AsProgramChange)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AkMIDIEventCallbackInfo", "GetProgramChange");
    struct
    {
        struct FAkMidiProgramChange AsProgramChange;
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    AsProgramChange = Parms.AsProgramChange;
    return Parms.ReturnValue;
}

uint8_t UAkMIDIEventCallbackInfo::GetPitchBend(struct FAkMidiPitchBend& AsPitchBend)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AkMIDIEventCallbackInfo", "GetPitchBend");
    struct
    {
        struct FAkMidiPitchBend AsPitchBend;
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    AsPitchBend = Parms.AsPitchBend;
    return Parms.ReturnValue;
}

uint8_t UAkMIDIEventCallbackInfo::GetNoteOn(struct FAkMidiNoteOnOff& AsNoteOn)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AkMIDIEventCallbackInfo", "GetNoteOn");
    struct
    {
        struct FAkMidiNoteOnOff AsNoteOn;
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    AsNoteOn = Parms.AsNoteOn;
    return Parms.ReturnValue;
}

uint8_t UAkMIDIEventCallbackInfo::GetNoteOff(struct FAkMidiNoteOnOff& AsNoteOff)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AkMIDIEventCallbackInfo", "GetNoteOff");
    struct
    {
        struct FAkMidiNoteOnOff AsNoteOff;
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    AsNoteOff = Parms.AsNoteOff;
    return Parms.ReturnValue;
}

uint8_t UAkMIDIEventCallbackInfo::GetNoteAftertouch(struct FAkMidiNoteAftertouch& AsNoteAftertouch)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AkMIDIEventCallbackInfo", "GetNoteAftertouch");
    struct
    {
        struct FAkMidiNoteAftertouch AsNoteAftertouch;
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    AsNoteAftertouch = Parms.AsNoteAftertouch;
    return Parms.ReturnValue;
}

uint8_t UAkMIDIEventCallbackInfo::GetGeneric(struct FAkMidiGeneric& AsGeneric)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AkMIDIEventCallbackInfo", "GetGeneric");
    struct
    {
        struct FAkMidiGeneric AsGeneric;
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    AsGeneric = Parms.AsGeneric;
    return Parms.ReturnValue;
}

uint8_t UAkMIDIEventCallbackInfo::GetChannelAftertouch(struct FAkMidiChannelAftertouch& AsChannelAftertouch)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AkMIDIEventCallbackInfo", "GetChannelAftertouch");
    struct
    {
        struct FAkMidiChannelAftertouch AsChannelAftertouch;
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    AsChannelAftertouch = Parms.AsChannelAftertouch;
    return Parms.ReturnValue;
}

uint8_t UAkMIDIEventCallbackInfo::GetChannel()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AkMIDIEventCallbackInfo", "GetChannel");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UAkMIDIEventCallbackInfo::GetCc(struct FAkMidiCc& AsCc)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AkMIDIEventCallbackInfo", "GetCc");
    struct
    {
        struct FAkMidiCc AsCc;
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    AsCc = Parms.AsCc;
    return Parms.ReturnValue;
}

// UAkGeometryComponent
void UAkGeometryComponent::UpdateGeometry()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AkGeometryComponent", "UpdateGeometry");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UAkGeometryComponent::RemoveGeometry()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AkGeometryComponent", "RemoveGeometry");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UAkGeometryComponent::ConvertMesh()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AkGeometryComponent", "ConvertMesh");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// UAkHololensInitializationSettings
void UAkHololensInitializationSettings::MigrateMultiCoreRendering(uint8_t NewValue)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AkHololensInitializationSettings", "MigrateMultiCoreRendering");
    struct
    {
        uint8_t NewValue;
    } Parms{};
    Parms.NewValue = (uint8_t)NewValue;
    this->ProcessEvent(Func, &Parms);
}

// UAkItemBoolPropertiesConv
struct FText UAkItemBoolPropertiesConv::Conv_FAkBoolPropertyToControlToText(const struct FAkBoolPropertyToControl& INAkBoolPropertyToControl)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AkItemBoolPropertiesConv", "Conv_FAkBoolPropertyToControlToText");
    struct
    {
        struct FAkBoolPropertyToControl INAkBoolPropertyToControl;
        struct FText ReturnValue;
    } Parms{};
    Parms.INAkBoolPropertyToControl = (struct FAkBoolPropertyToControl)INAkBoolPropertyToControl;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UAkItemBoolPropertiesConv::Conv_FAkBoolPropertyToControlToString(const struct FAkBoolPropertyToControl& INAkBoolPropertyToControl)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AkItemBoolPropertiesConv", "Conv_FAkBoolPropertyToControlToString");
    struct
    {
        struct FAkBoolPropertyToControl INAkBoolPropertyToControl;
        struct FString ReturnValue;
    } Parms{};
    Parms.INAkBoolPropertyToControl = (struct FAkBoolPropertyToControl)INAkBoolPropertyToControl;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UAkItemBoolProperties
void UAkItemBoolProperties::SetSearchText(struct FString NewText)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AkItemBoolProperties", "SetSearchText");
    struct
    {
        struct FString NewText;
    } Parms{};
    Parms.NewText = (struct FString)NewText;
    this->ProcessEvent(Func, &Parms);
}

struct FString UAkItemBoolProperties::GetSelectedProperty()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AkItemBoolProperties", "GetSelectedProperty");
    struct
    {
        struct FString ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UAkItemBoolProperties::GetSearchText()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AkItemBoolProperties", "GetSearchText");
    struct
    {
        struct FString ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UAkItemPropertiesConv
struct FText UAkItemPropertiesConv::Conv_FAkPropertyToControlToText(const struct FAkPropertyToControl& INAkPropertyToControl)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AkItemPropertiesConv", "Conv_FAkPropertyToControlToText");
    struct
    {
        struct FAkPropertyToControl INAkPropertyToControl;
        struct FText ReturnValue;
    } Parms{};
    Parms.INAkPropertyToControl = (struct FAkPropertyToControl)INAkPropertyToControl;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UAkItemPropertiesConv::Conv_FAkPropertyToControlToString(const struct FAkPropertyToControl& INAkPropertyToControl)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AkItemPropertiesConv", "Conv_FAkPropertyToControlToString");
    struct
    {
        struct FAkPropertyToControl INAkPropertyToControl;
        struct FString ReturnValue;
    } Parms{};
    Parms.INAkPropertyToControl = (struct FAkPropertyToControl)INAkPropertyToControl;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UAkItemProperties
void UAkItemProperties::SetSearchText(struct FString NewText)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AkItemProperties", "SetSearchText");
    struct
    {
        struct FString NewText;
    } Parms{};
    Parms.NewText = (struct FString)NewText;
    this->ProcessEvent(Func, &Parms);
}

struct FString UAkItemProperties::GetSelectedProperty()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AkItemProperties", "GetSelectedProperty");
    struct
    {
        struct FString ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UAkItemProperties::GetSearchText()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AkItemProperties", "GetSearchText");
    struct
    {
        struct FString ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UAkLinuxInitializationSettings
void UAkLinuxInitializationSettings::MigrateMultiCoreRendering(uint8_t NewValue)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AkLinuxInitializationSettings", "MigrateMultiCoreRendering");
    struct
    {
        uint8_t NewValue;
    } Parms{};
    Parms.NewValue = (uint8_t)NewValue;
    this->ProcessEvent(Func, &Parms);
}

// UAkLuminInitializationSettings
void UAkLuminInitializationSettings::MigrateMultiCoreRendering(uint8_t NewValue)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AkLuminInitializationSettings", "MigrateMultiCoreRendering");
    struct
    {
        uint8_t NewValue;
    } Parms{};
    Parms.NewValue = (uint8_t)NewValue;
    this->ProcessEvent(Func, &Parms);
}

// UAkMacInitializationSettings
void UAkMacInitializationSettings::MigrateMultiCoreRendering(uint8_t NewValue)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AkMacInitializationSettings", "MigrateMultiCoreRendering");
    struct
    {
        uint8_t NewValue;
    } Parms{};
    Parms.NewValue = (uint8_t)NewValue;
    this->ProcessEvent(Func, &Parms);
}

// UAkOpenHarmonyInitializationSettings
void UAkOpenHarmonyInitializationSettings::MigrateMultiCoreRendering(uint8_t NewValue)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AkOpenHarmonyInitializationSettings", "MigrateMultiCoreRendering");
    struct
    {
        uint8_t NewValue;
    } Parms{};
    Parms.NewValue = (uint8_t)NewValue;
    this->ProcessEvent(Func, &Parms);
}

// UAkPS4InitializationSettings
void UAkPS4InitializationSettings::MigrateMultiCoreRendering(uint8_t NewValue)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AkPS4InitializationSettings", "MigrateMultiCoreRendering");
    struct
    {
        uint8_t NewValue;
    } Parms{};
    Parms.NewValue = (uint8_t)NewValue;
    this->ProcessEvent(Func, &Parms);
}

// UAkSlider
void UAkSlider::SetValue(float InValue)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AkSlider", "SetValue");
    struct
    {
        float InValue;
    } Parms{};
    Parms.InValue = (float)InValue;
    this->ProcessEvent(Func, &Parms);
}

void UAkSlider::SetStepSize(float InValue)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AkSlider", "SetStepSize");
    struct
    {
        float InValue;
    } Parms{};
    Parms.InValue = (float)InValue;
    this->ProcessEvent(Func, &Parms);
}

void UAkSlider::SetSliderHandleColor(struct FLinearColor InValue)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AkSlider", "SetSliderHandleColor");
    struct
    {
        struct FLinearColor InValue;
    } Parms{};
    Parms.InValue = (struct FLinearColor)InValue;
    this->ProcessEvent(Func, &Parms);
}

void UAkSlider::SetSliderBarColor(struct FLinearColor InValue)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AkSlider", "SetSliderBarColor");
    struct
    {
        struct FLinearColor InValue;
    } Parms{};
    Parms.InValue = (struct FLinearColor)InValue;
    this->ProcessEvent(Func, &Parms);
}

void UAkSlider::SetLocked(uint8_t InValue)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AkSlider", "SetLocked");
    struct
    {
        uint8_t InValue;
    } Parms{};
    Parms.InValue = (uint8_t)InValue;
    this->ProcessEvent(Func, &Parms);
}

void UAkSlider::SetIndentHandle(uint8_t InValue)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AkSlider", "SetIndentHandle");
    struct
    {
        uint8_t InValue;
    } Parms{};
    Parms.InValue = (uint8_t)InValue;
    this->ProcessEvent(Func, &Parms);
}

void UAkSlider::SetAkSliderItemProperty(struct FString ItemProperty)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AkSlider", "SetAkSliderItemProperty");
    struct
    {
        struct FString ItemProperty;
    } Parms{};
    Parms.ItemProperty = (struct FString)ItemProperty;
    this->ProcessEvent(Func, &Parms);
}

void UAkSlider::SetAkSliderItemId(const struct FGuid& ItemID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AkSlider", "SetAkSliderItemId");
    struct
    {
        struct FGuid ItemID;
    } Parms{};
    Parms.ItemID = (struct FGuid)ItemID;
    this->ProcessEvent(Func, &Parms);
}

float UAkSlider::GetValue()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AkSlider", "GetValue");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UAkSlider::GetAkSliderItemProperty()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AkSlider", "GetAkSliderItemProperty");
    struct
    {
        struct FString ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FGuid UAkSlider::GetAkSliderItemId()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AkSlider", "GetAkSliderItemId");
    struct
    {
        struct FGuid ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UAkSurfaceReflectorSetComponent
void UAkSurfaceReflectorSetComponent::UpdateSurfaceReflectorSet()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AkSurfaceReflectorSetComponent", "UpdateSurfaceReflectorSet");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UAkSurfaceReflectorSetComponent::SendSurfaceReflectorSet()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AkSurfaceReflectorSetComponent", "SendSurfaceReflectorSet");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UAkSurfaceReflectorSetComponent::RemoveSurfaceReflectorSet()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AkSurfaceReflectorSetComponent", "RemoveSurfaceReflectorSet");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// UAkSwitchInitializationSettings
void UAkSwitchInitializationSettings::MigrateMultiCoreRendering(uint8_t NewValue)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AkSwitchInitializationSettings", "MigrateMultiCoreRendering");
    struct
    {
        uint8_t NewValue;
    } Parms{};
    Parms.NewValue = (uint8_t)NewValue;
    this->ProcessEvent(Func, &Parms);
}

// UAkWaapiCalls
struct FAKWaapiJsonObject UAkWaapiCalls::Unsubscribe(const struct FAkWaapiSubscriptionId& SubscriptionId, uint8_t& UnsubscriptionDone)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AkWaapiCalls", "Unsubscribe");
    struct
    {
        struct FAkWaapiSubscriptionId SubscriptionId;
        uint8_t UnsubscriptionDone;
        struct FAKWaapiJsonObject ReturnValue;
    } Parms{};
    Parms.SubscriptionId = (struct FAkWaapiSubscriptionId)SubscriptionId;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    UnsubscriptionDone = Parms.UnsubscriptionDone;
    return Parms.ReturnValue;
}

struct FAKWaapiJsonObject UAkWaapiCalls::SubscribeToWaapi(const struct FAkWaapiUri& WaapiUri, const struct FAKWaapiJsonObject& WaapiOptions, const struct FDelegate& callback, struct FAkWaapiSubscriptionId& SubscriptionId, uint8_t& SubscriptionDone)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AkWaapiCalls", "SubscribeToWaapi");
    struct
    {
        struct FAkWaapiUri WaapiUri;
        struct FAKWaapiJsonObject WaapiOptions;
        struct FDelegate callback;
        struct FAkWaapiSubscriptionId SubscriptionId;
        uint8_t SubscriptionDone;
        struct FAKWaapiJsonObject ReturnValue;
    } Parms{};
    Parms.WaapiUri = (struct FAkWaapiUri)WaapiUri;
    Parms.WaapiOptions = (struct FAKWaapiJsonObject)WaapiOptions;
    Parms.callback = (struct FDelegate)callback;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    SubscriptionId = Parms.SubscriptionId;
    SubscriptionDone = Parms.SubscriptionDone;
    return Parms.ReturnValue;
}

void UAkWaapiCalls::SetSubscriptionID(const struct FAkWaapiSubscriptionId& Subscription, int32_t ID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AkWaapiCalls", "SetSubscriptionID");
    struct
    {
        struct FAkWaapiSubscriptionId Subscription;
        int32_t ID;
    } Parms{};
    Parms.Subscription = (struct FAkWaapiSubscriptionId)Subscription;
    Parms.ID = (int32_t)ID;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

uint8_t UAkWaapiCalls::RegisterWaapiProjectLoadedCallback(const struct FDelegate& callback)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AkWaapiCalls", "RegisterWaapiProjectLoadedCallback");
    struct
    {
        struct FDelegate callback;
        uint8_t ReturnValue;
    } Parms{};
    Parms.callback = (struct FDelegate)callback;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UAkWaapiCalls::RegisterWaapiConnectionLostCallback(const struct FDelegate& callback)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AkWaapiCalls", "RegisterWaapiConnectionLostCallback");
    struct
    {
        struct FDelegate callback;
        uint8_t ReturnValue;
    } Parms{};
    Parms.callback = (struct FDelegate)callback;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UAkWaapiCalls::GetSubscriptionID(const struct FAkWaapiSubscriptionId& Subscription)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AkWaapiCalls", "GetSubscriptionID");
    struct
    {
        struct FAkWaapiSubscriptionId Subscription;
        int32_t ReturnValue;
    } Parms{};
    Parms.Subscription = (struct FAkWaapiSubscriptionId)Subscription;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FText UAkWaapiCalls::Conv_FAkWaapiSubscriptionIdToText(const struct FAkWaapiSubscriptionId& INAkWaapiSubscriptionId)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AkWaapiCalls", "Conv_FAkWaapiSubscriptionIdToText");
    struct
    {
        struct FAkWaapiSubscriptionId INAkWaapiSubscriptionId;
        struct FText ReturnValue;
    } Parms{};
    Parms.INAkWaapiSubscriptionId = (struct FAkWaapiSubscriptionId)INAkWaapiSubscriptionId;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UAkWaapiCalls::Conv_FAkWaapiSubscriptionIdToString(const struct FAkWaapiSubscriptionId& INAkWaapiSubscriptionId)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AkWaapiCalls", "Conv_FAkWaapiSubscriptionIdToString");
    struct
    {
        struct FAkWaapiSubscriptionId INAkWaapiSubscriptionId;
        struct FString ReturnValue;
    } Parms{};
    Parms.INAkWaapiSubscriptionId = (struct FAkWaapiSubscriptionId)INAkWaapiSubscriptionId;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FAKWaapiJsonObject UAkWaapiCalls::CallWaapi(const struct FAkWaapiUri& WaapiUri, const struct FAKWaapiJsonObject& WaapiArgs, const struct FAKWaapiJsonObject& WaapiOptions)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AkWaapiCalls", "CallWaapi");
    struct
    {
        struct FAkWaapiUri WaapiUri;
        struct FAKWaapiJsonObject WaapiArgs;
        struct FAKWaapiJsonObject WaapiOptions;
        struct FAKWaapiJsonObject ReturnValue;
    } Parms{};
    Parms.WaapiUri = (struct FAkWaapiUri)WaapiUri;
    Parms.WaapiArgs = (struct FAKWaapiJsonObject)WaapiArgs;
    Parms.WaapiOptions = (struct FAKWaapiJsonObject)WaapiOptions;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// USAkWaapiFieldNamesConv
struct FText USAkWaapiFieldNamesConv::Conv_FAkWaapiFieldNamesToText(const struct FAkWaapiFieldNames& INAkWaapiFieldNames)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("SAkWaapiFieldNamesConv", "Conv_FAkWaapiFieldNamesToText");
    struct
    {
        struct FAkWaapiFieldNames INAkWaapiFieldNames;
        struct FText ReturnValue;
    } Parms{};
    Parms.INAkWaapiFieldNames = (struct FAkWaapiFieldNames)INAkWaapiFieldNames;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString USAkWaapiFieldNamesConv::Conv_FAkWaapiFieldNamesToString(const struct FAkWaapiFieldNames& INAkWaapiFieldNames)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("SAkWaapiFieldNamesConv", "Conv_FAkWaapiFieldNamesToString");
    struct
    {
        struct FAkWaapiFieldNames INAkWaapiFieldNames;
        struct FString ReturnValue;
    } Parms{};
    Parms.INAkWaapiFieldNames = (struct FAkWaapiFieldNames)INAkWaapiFieldNames;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UAkWaapiJsonManager
struct FAKWaapiJsonObject UAkWaapiJsonManager::SetStringField(const struct FAkWaapiFieldNames& FieldName, struct FString FieldValue, struct FAKWaapiJsonObject Target)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AkWaapiJsonManager", "SetStringField");
    struct
    {
        struct FAkWaapiFieldNames FieldName;
        struct FString FieldValue;
        struct FAKWaapiJsonObject Target;
        struct FAKWaapiJsonObject ReturnValue;
    } Parms{};
    Parms.FieldName = (struct FAkWaapiFieldNames)FieldName;
    Parms.FieldValue = (struct FString)FieldValue;
    Parms.Target = (struct FAKWaapiJsonObject)Target;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FAKWaapiJsonObject UAkWaapiJsonManager::SetObjectField(const struct FAkWaapiFieldNames& FieldName, struct FAKWaapiJsonObject FieldValue, struct FAKWaapiJsonObject Target)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AkWaapiJsonManager", "SetObjectField");
    struct
    {
        struct FAkWaapiFieldNames FieldName;
        struct FAKWaapiJsonObject FieldValue;
        struct FAKWaapiJsonObject Target;
        struct FAKWaapiJsonObject ReturnValue;
    } Parms{};
    Parms.FieldName = (struct FAkWaapiFieldNames)FieldName;
    Parms.FieldValue = (struct FAKWaapiJsonObject)FieldValue;
    Parms.Target = (struct FAKWaapiJsonObject)Target;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FAKWaapiJsonObject UAkWaapiJsonManager::SetNumberField(const struct FAkWaapiFieldNames& FieldName, float FieldValue, struct FAKWaapiJsonObject Target)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AkWaapiJsonManager", "SetNumberField");
    struct
    {
        struct FAkWaapiFieldNames FieldName;
        float FieldValue;
        struct FAKWaapiJsonObject Target;
        struct FAKWaapiJsonObject ReturnValue;
    } Parms{};
    Parms.FieldName = (struct FAkWaapiFieldNames)FieldName;
    Parms.FieldValue = (float)FieldValue;
    Parms.Target = (struct FAKWaapiJsonObject)Target;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FAKWaapiJsonObject UAkWaapiJsonManager::SetBoolField(const struct FAkWaapiFieldNames& FieldName, uint8_t FieldValue, struct FAKWaapiJsonObject Target)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AkWaapiJsonManager", "SetBoolField");
    struct
    {
        struct FAkWaapiFieldNames FieldName;
        uint8_t FieldValue;
        struct FAKWaapiJsonObject Target;
        struct FAKWaapiJsonObject ReturnValue;
    } Parms{};
    Parms.FieldName = (struct FAkWaapiFieldNames)FieldName;
    Parms.FieldValue = (uint8_t)FieldValue;
    Parms.Target = (struct FAKWaapiJsonObject)Target;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FAKWaapiJsonObject UAkWaapiJsonManager::SetArrayStringFields(const struct FAkWaapiFieldNames& FieldName, const struct TArray<struct FString>& FieldStringValues, struct FAKWaapiJsonObject Target)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AkWaapiJsonManager", "SetArrayStringFields");
    struct
    {
        struct FAkWaapiFieldNames FieldName;
        struct TArray<struct FString> FieldStringValues;
        struct FAKWaapiJsonObject Target;
        struct FAKWaapiJsonObject ReturnValue;
    } Parms{};
    Parms.FieldName = (struct FAkWaapiFieldNames)FieldName;
    Parms.FieldStringValues = (struct TArray<struct FString>)FieldStringValues;
    Parms.Target = (struct FAKWaapiJsonObject)Target;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FAKWaapiJsonObject UAkWaapiJsonManager::SetArrayObjectFields(const struct FAkWaapiFieldNames& FieldName, const struct TArray<struct FAKWaapiJsonObject>& FieldObjectValues, struct FAKWaapiJsonObject Target)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AkWaapiJsonManager", "SetArrayObjectFields");
    struct
    {
        struct FAkWaapiFieldNames FieldName;
        struct TArray<struct FAKWaapiJsonObject> FieldObjectValues;
        struct FAKWaapiJsonObject Target;
        struct FAKWaapiJsonObject ReturnValue;
    } Parms{};
    Parms.FieldName = (struct FAkWaapiFieldNames)FieldName;
    Parms.FieldObjectValues = (struct TArray<struct FAKWaapiJsonObject>)FieldObjectValues;
    Parms.Target = (struct FAKWaapiJsonObject)Target;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UAkWaapiJsonManager::GetStringField(const struct FAkWaapiFieldNames& FieldName, struct FAKWaapiJsonObject Target)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AkWaapiJsonManager", "GetStringField");
    struct
    {
        struct FAkWaapiFieldNames FieldName;
        struct FAKWaapiJsonObject Target;
        struct FString ReturnValue;
    } Parms{};
    Parms.FieldName = (struct FAkWaapiFieldNames)FieldName;
    Parms.Target = (struct FAKWaapiJsonObject)Target;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FAKWaapiJsonObject UAkWaapiJsonManager::GetObjectField(const struct FAkWaapiFieldNames& FieldName, struct FAKWaapiJsonObject Target)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AkWaapiJsonManager", "GetObjectField");
    struct
    {
        struct FAkWaapiFieldNames FieldName;
        struct FAKWaapiJsonObject Target;
        struct FAKWaapiJsonObject ReturnValue;
    } Parms{};
    Parms.FieldName = (struct FAkWaapiFieldNames)FieldName;
    Parms.Target = (struct FAKWaapiJsonObject)Target;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UAkWaapiJsonManager::GetNumberField(const struct FAkWaapiFieldNames& FieldName, struct FAKWaapiJsonObject Target)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AkWaapiJsonManager", "GetNumberField");
    struct
    {
        struct FAkWaapiFieldNames FieldName;
        struct FAKWaapiJsonObject Target;
        float ReturnValue;
    } Parms{};
    Parms.FieldName = (struct FAkWaapiFieldNames)FieldName;
    Parms.Target = (struct FAKWaapiJsonObject)Target;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UAkWaapiJsonManager::GetIntegerField(const struct FAkWaapiFieldNames& FieldName, struct FAKWaapiJsonObject Target)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AkWaapiJsonManager", "GetIntegerField");
    struct
    {
        struct FAkWaapiFieldNames FieldName;
        struct FAKWaapiJsonObject Target;
        int32_t ReturnValue;
    } Parms{};
    Parms.FieldName = (struct FAkWaapiFieldNames)FieldName;
    Parms.Target = (struct FAKWaapiJsonObject)Target;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UAkWaapiJsonManager::GetBoolField(const struct FAkWaapiFieldNames& FieldName, struct FAKWaapiJsonObject Target)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AkWaapiJsonManager", "GetBoolField");
    struct
    {
        struct FAkWaapiFieldNames FieldName;
        struct FAKWaapiJsonObject Target;
        uint8_t ReturnValue;
    } Parms{};
    Parms.FieldName = (struct FAkWaapiFieldNames)FieldName;
    Parms.Target = (struct FAKWaapiJsonObject)Target;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct TArray<struct FAKWaapiJsonObject> UAkWaapiJsonManager::GetArrayField(const struct FAkWaapiFieldNames& FieldName, struct FAKWaapiJsonObject Target)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AkWaapiJsonManager", "GetArrayField");
    struct
    {
        struct FAkWaapiFieldNames FieldName;
        struct FAKWaapiJsonObject Target;
        struct TArray<struct FAKWaapiJsonObject> ReturnValue;
    } Parms{};
    Parms.FieldName = (struct FAkWaapiFieldNames)FieldName;
    Parms.Target = (struct FAKWaapiJsonObject)Target;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FText UAkWaapiJsonManager::Conv_FAKWaapiJsonObjectToText(struct FAKWaapiJsonObject INAKWaapiJsonObject)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AkWaapiJsonManager", "Conv_FAKWaapiJsonObjectToText");
    struct
    {
        struct FAKWaapiJsonObject INAKWaapiJsonObject;
        struct FText ReturnValue;
    } Parms{};
    Parms.INAKWaapiJsonObject = (struct FAKWaapiJsonObject)INAKWaapiJsonObject;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UAkWaapiJsonManager::Conv_FAKWaapiJsonObjectToString(struct FAKWaapiJsonObject INAKWaapiJsonObject)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AkWaapiJsonManager", "Conv_FAKWaapiJsonObjectToString");
    struct
    {
        struct FAKWaapiJsonObject INAKWaapiJsonObject;
        struct FString ReturnValue;
    } Parms{};
    Parms.INAKWaapiJsonObject = (struct FAKWaapiJsonObject)INAKWaapiJsonObject;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UAkWaapiUriConv
struct FText UAkWaapiUriConv::Conv_FAkWaapiUriToText(const struct FAkWaapiUri& INAkWaapiUri)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AkWaapiUriConv", "Conv_FAkWaapiUriToText");
    struct
    {
        struct FAkWaapiUri INAkWaapiUri;
        struct FText ReturnValue;
    } Parms{};
    Parms.INAkWaapiUri = (struct FAkWaapiUri)INAkWaapiUri;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UAkWaapiUriConv::Conv_FAkWaapiUriToString(const struct FAkWaapiUri& INAkWaapiUri)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AkWaapiUriConv", "Conv_FAkWaapiUriToString");
    struct
    {
        struct FAkWaapiUri INAkWaapiUri;
        struct FString ReturnValue;
    } Parms{};
    Parms.INAkWaapiUri = (struct FAkWaapiUri)INAkWaapiUri;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UAkWindowsInitializationSettings
void UAkWindowsInitializationSettings::MigrateMultiCoreRendering(uint8_t NewValue)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AkWindowsInitializationSettings", "MigrateMultiCoreRendering");
    struct
    {
        uint8_t NewValue;
    } Parms{};
    Parms.NewValue = (uint8_t)NewValue;
    this->ProcessEvent(Func, &Parms);
}

// UAkWwiseTree
void UAkWwiseTree::SetSearchText(struct FString NewText)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AkWwiseTree", "SetSearchText");
    struct
    {
        struct FString NewText;
    } Parms{};
    Parms.NewText = (struct FString)NewText;
    this->ProcessEvent(Func, &Parms);
}

struct FAkWwiseObjectDetails UAkWwiseTree::GetSelectedItem()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AkWwiseTree", "GetSelectedItem");
    struct
    {
        struct FAkWwiseObjectDetails ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UAkWwiseTree::GetSearchText()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AkWwiseTree", "GetSearchText");
    struct
    {
        struct FString ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UAkXboxOneInitializationSettings
void UAkXboxOneInitializationSettings::MigrateMultiCoreRendering(uint8_t NewValue)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AkXboxOneInitializationSettings", "MigrateMultiCoreRendering");
    struct
    {
        uint8_t NewValue;
    } Parms{};
    Parms.NewValue = (uint8_t)NewValue;
    this->ProcessEvent(Func, &Parms);
}

// UPostEventAsync
struct UPostEventAsync* UPostEventAsync::PostEventAsync(struct UObject* WorldContextObject, struct UAkAudioEvent* AkEvent, struct AActor* Actor, int32_t CallbackMask, const struct FDelegate& PostEventCallback, const struct TArray<struct FAkExternalSourceInfo>& ExternalSources, uint8_t bStopWhenAttachedToDestroyed)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("PostEventAsync", "PostEventAsync");
    struct
    {
        struct UObject* WorldContextObject;
        struct UAkAudioEvent* AkEvent;
        struct AActor* Actor;
        int32_t CallbackMask;
        struct FDelegate PostEventCallback;
        struct TArray<struct FAkExternalSourceInfo> ExternalSources;
        uint8_t bStopWhenAttachedToDestroyed;
        struct UPostEventAsync* ReturnValue;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    Parms.AkEvent = (struct UAkAudioEvent*)AkEvent;
    Parms.Actor = (struct AActor*)Actor;
    Parms.CallbackMask = (int32_t)CallbackMask;
    Parms.PostEventCallback = (struct FDelegate)PostEventCallback;
    Parms.ExternalSources = (struct TArray<struct FAkExternalSourceInfo>)ExternalSources;
    Parms.bStopWhenAttachedToDestroyed = (uint8_t)bStopWhenAttachedToDestroyed;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UPostEventAsync::PollPostEventFuture()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PostEventAsync", "PollPostEventFuture");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// UPostEventAtLocationAsync
struct UPostEventAtLocationAsync* UPostEventAtLocationAsync::PostEventAtLocationAsync(struct UObject* WorldContextObject, struct UAkAudioEvent* AkEvent, struct FVector Location, struct FRotator Orientation)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("PostEventAtLocationAsync", "PostEventAtLocationAsync");
    struct
    {
        struct UObject* WorldContextObject;
        struct UAkAudioEvent* AkEvent;
        struct FVector Location;
        struct FRotator Orientation;
        struct UPostEventAtLocationAsync* ReturnValue;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    Parms.AkEvent = (struct UAkAudioEvent*)AkEvent;
    Parms.Location = (struct FVector)Location;
    Parms.Orientation = (struct FRotator)Orientation;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UPostEventAtLocationAsync::PollPostEventFuture()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PostEventAtLocationAsync", "PollPostEventFuture");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

} // namespace SDK
