#include "AkAudio.hpp"
#include "Engine.hpp"
#include "PhysicsCore.hpp"
#include "SlateCore.hpp"
#include <cstring> // memcpy for ArrayDim>1 param marshalling

namespace SDK
{

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
void UAkAndroidInitializationSettings::MigrateMultiCoreRendering(bool NewValue)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AkAndroidInitializationSettings", "MigrateMultiCoreRendering");
    struct
    {
        bool NewValue;
    } Parms{};
    Parms.NewValue = (bool)NewValue;
    this->ProcessEvent(Func, &Parms);
}

// UAkAudioEvent
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

bool UAkAudioEvent::GetIsInfinite()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AkAudioEvent", "GetIsInfinite");
    struct
    {
        bool ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UAkGameObject
void UAkGameObject::Stop()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AkGameObject", "Stop");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UAkGameObject::PostAssociatedAkEventAsync(struct UObject* WorldContextObject, int32_t CallbackMask, const struct FDelegate& PostEventCallback, const struct TArray<struct FAkExternalSourceInfo>& ExternalSources, struct FLatentActionInfo LatentInfo, int32_t& PlayingID)
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
        int32_t PlayingID;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    Parms.CallbackMask = (int32_t)CallbackMask;
    Parms.PostEventCallback = (struct FDelegate)PostEventCallback;
    Parms.ExternalSources = (struct TArray<struct FAkExternalSourceInfo>)ExternalSources;
    Parms.LatentInfo = (struct FLatentActionInfo)LatentInfo;
    this->ProcessEvent(Func, &Parms);
    PlayingID = Parms.PlayingID;
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

void UAkGameObject::PostAkEventAsync(struct UObject* WorldContextObject, struct UAkAudioEvent* AkEvent, int32_t& PlayingID, int32_t CallbackMask, const struct FDelegate& PostEventCallback, const struct TArray<struct FAkExternalSourceInfo>& ExternalSources, struct FLatentActionInfo LatentInfo)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AkGameObject", "PostAkEventAsync");
    struct
    {
        struct UObject* WorldContextObject;
        struct UAkAudioEvent* AkEvent;
        int32_t PlayingID;
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
    PlayingID = Parms.PlayingID;
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
void UAkComponent::UseReverbVolumes(bool inUseReverbVolumes)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AkComponent", "UseReverbVolumes");
    struct
    {
        bool inUseReverbVolumes;
    } Parms{};
    Parms.inUseReverbVolumes = (bool)inUseReverbVolumes;
    this->ProcessEvent(Func, &Parms);
}

void UAkComponent::UseEarlyReflections(struct UAkAuxBus* AuxBus, int32_t Order, float BusSendGain, float MaxPathLength, bool SpotReflectors, struct FString AuxBusName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AkComponent", "UseEarlyReflections");
    struct
    {
        struct UAkAuxBus* AuxBus;
        int32_t Order;
        float BusSendGain;
        float MaxPathLength;
        bool SpotReflectors;
        struct FString AuxBusName;
    } Parms{};
    Parms.AuxBus = (struct UAkAuxBus*)AuxBus;
    Parms.Order = (int32_t)Order;
    Parms.BusSendGain = (float)BusSendGain;
    Parms.MaxPathLength = (float)MaxPathLength;
    Parms.SpotReflectors = (bool)SpotReflectors;
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

void UAkComponent::SetStopWhenOwnerDestroyed(bool bStopWhenOwnerDestroyed)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AkComponent", "SetStopWhenOwnerDestroyed");
    struct
    {
        bool bStopWhenOwnerDestroyed;
    } Parms{};
    Parms.bStopWhenOwnerDestroyed = (bool)bStopWhenOwnerDestroyed;
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

bool UAkComponent::SetAttenuationScalingFactor(float Value)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AkComponent", "SetAttenuationScalingFactor");
    struct
    {
        float Value;
        bool ReturnValue;
    } Parms{};
    Parms.Value = (float)Value;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UAkComponent::ResetObstructionOcclusionImmediately()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AkComponent", "ResetObstructionOcclusionImmediately");
    struct
    {
    } Parms{};
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

void UAkComponent::PostAssociatedAkEventAndWaitForEndAsync(int32_t& PlayingID, const struct TArray<struct FAkExternalSourceInfo>& ExternalSources, struct FLatentActionInfo LatentInfo)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AkComponent", "PostAssociatedAkEventAndWaitForEndAsync");
    struct
    {
        int32_t PlayingID;
        struct TArray<struct FAkExternalSourceInfo> ExternalSources;
        struct FLatentActionInfo LatentInfo;
    } Parms{};
    Parms.ExternalSources = (struct TArray<struct FAkExternalSourceInfo>)ExternalSources;
    Parms.LatentInfo = (struct FLatentActionInfo)LatentInfo;
    this->ProcessEvent(Func, &Parms);
    PlayingID = Parms.PlayingID;
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

void UAkComponent::PostAkEventAndWaitForEndAsync(struct UAkAudioEvent* AkEvent, int32_t& PlayingID, const struct TArray<struct FAkExternalSourceInfo>& ExternalSources, struct FLatentActionInfo LatentInfo)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AkComponent", "PostAkEventAndWaitForEndAsync");
    struct
    {
        struct UAkAudioEvent* AkEvent;
        int32_t PlayingID;
        struct TArray<struct FAkExternalSourceInfo> ExternalSources;
        struct FLatentActionInfo LatentInfo;
    } Parms{};
    Parms.AkEvent = (struct UAkAudioEvent*)AkEvent;
    Parms.ExternalSources = (struct TArray<struct FAkExternalSourceInfo>)ExternalSources;
    Parms.LatentInfo = (struct FLatentActionInfo)LatentInfo;
    this->ProcessEvent(Func, &Parms);
    PlayingID = Parms.PlayingID;
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

int32_t UAkComponent::PlayVoiceDialog(struct FString VoiceEventName, bool WaitUntilCurrentEnd, struct FString ExternalFileName, int32_t RandomCount)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AkComponent", "PlayVoiceDialog");
    struct
    {
        struct FString VoiceEventName;
        bool WaitUntilCurrentEnd;
        struct FString ExternalFileName;
        int32_t RandomCount;
        int32_t ReturnValue;
    } Parms{};
    Parms.VoiceEventName = (struct FString)VoiceEventName;
    Parms.WaitUntilCurrentEnd = (bool)WaitUntilCurrentEnd;
    Parms.ExternalFileName = (struct FString)ExternalFileName;
    Parms.RandomCount = (int32_t)RandomCount;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UAkComponent::OnVoiceDialogEndCallback(EAkCallbackType CallbackType, struct UAkCallbackInfo* CallbackInfo)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AkComponent", "OnVoiceDialogEndCallback");
    struct
    {
        enum EAkCallbackType CallbackType;
        struct UAkCallbackInfo* CallbackInfo;
    } Parms{};
    Parms.CallbackType = (enum EAkCallbackType)CallbackType;
    Parms.CallbackInfo = (struct UAkCallbackInfo*)CallbackInfo;
    this->ProcessEvent(Func, &Parms);
}

void UAkComponent::GetRTPCValue(struct UAkRtpc* RTPCValue, ERTPCValueType InputValueType, float& Value, ERTPCValueType& OutputValueType, struct FString RTPC, int32_t PlayingID)
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
        int32_t PlayingID;
    } Parms{};
    Parms.RTPCValue = (struct UAkRtpc*)RTPCValue;
    Parms.InputValueType = (enum ERTPCValueType)InputValueType;
    Parms.RTPC = (struct FString)RTPC;
    Parms.PlayingID = (int32_t)PlayingID;
    this->ProcessEvent(Func, &Parms);
    Value = Parms.Value;
    OutputValueType = Parms.OutputValueType;
}

struct FVector UAkComponent::GetPosition()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AkComponent", "GetPosition");
    struct
    {
        struct FVector ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct AActor* UAkComponent::GetOwnerActor()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AkComponent", "GetOwnerActor");
    struct
    {
        struct AActor* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UAkComponent* UAkComponent::GetListener()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AkComponent", "GetListener");
    struct
    {
        struct UAkComponent* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UAkRoomComponent* UAkComponent::GetCurrentRoom()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AkComponent", "GetCurrentRoom");
    struct
    {
        struct UAkRoomComponent* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UAkLateReverbComponent* UAkComponent::GetCurrentLateReverb()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AkComponent", "GetCurrentLateReverb");
    struct
    {
        struct UAkLateReverbComponent* ReturnValue;
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
void UAkCheckBox::SetIsChecked(bool InIsChecked)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AkCheckBox", "SetIsChecked");
    struct
    {
        bool InIsChecked;
    } Parms{};
    Parms.InIsChecked = (bool)InIsChecked;
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

void UAkCheckBox::SetAkItemId(const struct FGuid& itemID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AkCheckBox", "SetAkItemId");
    struct
    {
        struct FGuid itemID;
    } Parms{};
    Parms.itemID = (struct FGuid)itemID;
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

bool UAkCheckBox::IsPressed()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AkCheckBox", "IsPressed");
    struct
    {
        bool ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UAkCheckBox::IsChecked()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AkCheckBox", "IsChecked");
    struct
    {
        bool ReturnValue;
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

// UAkGameplayStatics
void UAkGameplayStatics::UseReverbVolumes(bool inUseReverbVolumes, struct AActor* Actor)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AkGameplayStatics", "UseReverbVolumes");
    struct
    {
        bool inUseReverbVolumes;
        struct AActor* Actor;
    } Parms{};
    Parms.inUseReverbVolumes = (bool)inUseReverbVolumes;
    Parms.Actor = (struct AActor*)Actor;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UAkGameplayStatics::UseEarlyReflections(struct AActor* Actor, struct UAkAuxBus* AuxBus, int32_t Order, float BusSendGain, float MaxPathLength, bool SpotReflectors, struct FString AuxBusName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AkGameplayStatics", "UseEarlyReflections");
    struct
    {
        struct AActor* Actor;
        struct UAkAuxBus* AuxBus;
        int32_t Order;
        float BusSendGain;
        float MaxPathLength;
        bool SpotReflectors;
        struct FString AuxBusName;
    } Parms{};
    Parms.Actor = (struct AActor*)Actor;
    Parms.AuxBus = (struct UAkAuxBus*)AuxBus;
    Parms.Order = (int32_t)Order;
    Parms.BusSendGain = (float)BusSendGain;
    Parms.MaxPathLength = (float)MaxPathLength;
    Parms.SpotReflectors = (bool)SpotReflectors;
    Parms.AuxBusName = (struct FString)AuxBusName;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UAkGameplayStatics::UnloadBankByName(struct FString BankName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AkGameplayStatics", "UnloadBankByName");
    struct
    {
        struct FString BankName;
    } Parms{};
    Parms.BankName = (struct FString)BankName;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UAkGameplayStatics::UnloadBankAsync(struct UAkAudioBank* Bank, const struct FDelegate& BankUnloadedCallback)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AkGameplayStatics", "UnloadBankAsync");
    struct
    {
        struct UAkAudioBank* Bank;
        struct FDelegate BankUnloadedCallback;
    } Parms{};
    Parms.Bank = (struct UAkAudioBank*)Bank;
    Parms.BankUnloadedCallback = (struct FDelegate)BankUnloadedCallback;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UAkGameplayStatics::UnloadBank(struct UAkAudioBank* Bank, struct FString BankName, struct FLatentActionInfo LatentInfo, struct UObject* WorldContextObject)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AkGameplayStatics", "UnloadBank");
    struct
    {
        struct UAkAudioBank* Bank;
        struct FString BankName;
        struct FLatentActionInfo LatentInfo;
        struct UObject* WorldContextObject;
    } Parms{};
    Parms.Bank = (struct UAkAudioBank*)Bank;
    Parms.BankName = (struct FString)BankName;
    Parms.LatentInfo = (struct FLatentActionInfo)LatentInfo;
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UAkGameplayStatics::StopProfilerCapture()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AkGameplayStatics", "StopProfilerCapture");
    struct
    {
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UAkGameplayStatics::StopOutputCapture()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AkGameplayStatics", "StopOutputCapture");
    struct
    {
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UAkGameplayStatics::StopAllAmbientSounds(struct UObject* WorldContextObject)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AkGameplayStatics", "StopAllAmbientSounds");
    struct
    {
        struct UObject* WorldContextObject;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UAkGameplayStatics::StopAll()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AkGameplayStatics", "StopAll");
    struct
    {
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UAkGameplayStatics::StopActor(struct AActor* Actor)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AkGameplayStatics", "StopActor");
    struct
    {
        struct AActor* Actor;
    } Parms{};
    Parms.Actor = (struct AActor*)Actor;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UAkGameplayStatics::StartProfilerCapture(struct FString Filename)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AkGameplayStatics", "StartProfilerCapture");
    struct
    {
        struct FString Filename;
    } Parms{};
    Parms.Filename = (struct FString)Filename;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UAkGameplayStatics::StartOutputCapture(struct FString Filename)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AkGameplayStatics", "StartOutputCapture");
    struct
    {
        struct FString Filename;
    } Parms{};
    Parms.Filename = (struct FString)Filename;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UAkGameplayStatics::StartAllAmbientSounds(struct UObject* WorldContextObject)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AkGameplayStatics", "StartAllAmbientSounds");
    struct
    {
        struct UObject* WorldContextObject;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

struct UAkComponent* UAkGameplayStatics::SpawnAkComponentAtLocation(struct UObject* WorldContextObject, struct UAkAudioEvent* AkEvent, struct FVector Location, struct FRotator Orientation, bool AutoPost, struct FString EventName, bool AutoDestroy)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AkGameplayStatics", "SpawnAkComponentAtLocation");
    struct
    {
        struct UObject* WorldContextObject;
        struct UAkAudioEvent* AkEvent;
        struct FVector Location;
        struct FRotator Orientation;
        bool AutoPost;
        struct FString EventName;
        bool AutoDestroy;
        struct UAkComponent* ReturnValue;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    Parms.AkEvent = (struct UAkAudioEvent*)AkEvent;
    Parms.Location = (struct FVector)Location;
    Parms.Orientation = (struct FRotator)Orientation;
    Parms.AutoPost = (bool)AutoPost;
    Parms.EventName = (struct FString)EventName;
    Parms.AutoDestroy = (bool)AutoDestroy;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
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

void UAkGameplayStatics::SetState(struct UAkStateValue* StateValue, struct FName StateGroup, struct FName State)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AkGameplayStatics", "SetState");
    struct
    {
        struct UAkStateValue* StateValue;
        struct FName StateGroup;
        struct FName State;
    } Parms{};
    Parms.StateValue = (struct UAkStateValue*)StateValue;
    Parms.StateGroup = (struct FName)StateGroup;
    Parms.State = (struct FName)State;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UAkGameplayStatics::SetSpeakerAngles(const struct TArray<float>& SpeakerAngles, float HeightAngle, struct FString DeviceShareset)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AkGameplayStatics", "SetSpeakerAngles");
    struct
    {
        struct TArray<float> SpeakerAngles;
        float HeightAngle;
        struct FString DeviceShareset;
    } Parms{};
    Parms.SpeakerAngles = (struct TArray<float>)SpeakerAngles;
    Parms.HeightAngle = (float)HeightAngle;
    Parms.DeviceShareset = (struct FString)DeviceShareset;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UAkGameplayStatics::SetRTPCValue(struct UAkRtpc* RTPCValue, float Value, int32_t InterpolationTimeMs, struct AActor* Actor, struct FName RTPC)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AkGameplayStatics", "SetRTPCValue");
    struct
    {
        struct UAkRtpc* RTPCValue;
        float Value;
        int32_t InterpolationTimeMs;
        struct AActor* Actor;
        struct FName RTPC;
    } Parms{};
    Parms.RTPCValue = (struct UAkRtpc*)RTPCValue;
    Parms.Value = (float)Value;
    Parms.InterpolationTimeMs = (int32_t)InterpolationTimeMs;
    Parms.Actor = (struct AActor*)Actor;
    Parms.RTPC = (struct FName)RTPC;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UAkGameplayStatics::SetReflectionsOrder(int32_t Order, bool RefreshPaths)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AkGameplayStatics", "SetReflectionsOrder");
    struct
    {
        int32_t Order;
        bool RefreshPaths;
    } Parms{};
    Parms.Order = (int32_t)Order;
    Parms.RefreshPaths = (bool)RefreshPaths;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UAkGameplayStatics::SetPanningRule(EPanningRule PanRule)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AkGameplayStatics", "SetPanningRule");
    struct
    {
        enum EPanningRule PanRule;
    } Parms{};
    Parms.PanRule = (enum EPanningRule)PanRule;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UAkGameplayStatics::SetOutputBusVolume(float BusVolume, struct AActor* Actor)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AkGameplayStatics", "SetOutputBusVolume");
    struct
    {
        float BusVolume;
        struct AActor* Actor;
    } Parms{};
    Parms.BusVolume = (float)BusVolume;
    Parms.Actor = (struct AActor*)Actor;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UAkGameplayStatics::SetOcclusionScalingFactor(float ScalingFactor)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AkGameplayStatics", "SetOcclusionScalingFactor");
    struct
    {
        float ScalingFactor;
    } Parms{};
    Parms.ScalingFactor = (float)ScalingFactor;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UAkGameplayStatics::SetOcclusionRefreshInterval(float RefreshInterval, struct AActor* Actor)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AkGameplayStatics", "SetOcclusionRefreshInterval");
    struct
    {
        float RefreshInterval;
        struct AActor* Actor;
    } Parms{};
    Parms.RefreshInterval = (float)RefreshInterval;
    Parms.Actor = (struct AActor*)Actor;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UAkGameplayStatics::SetMultiplePositions(struct UAkComponent* GameObjectAkComponent, struct TArray<struct FTransform> Positions, EAkMultiPositionType MultiPositionType)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AkGameplayStatics", "SetMultiplePositions");
    struct
    {
        struct UAkComponent* GameObjectAkComponent;
        struct TArray<struct FTransform> Positions;
        enum EAkMultiPositionType MultiPositionType;
    } Parms{};
    Parms.GameObjectAkComponent = (struct UAkComponent*)GameObjectAkComponent;
    Parms.Positions = (struct TArray<struct FTransform>)Positions;
    Parms.MultiPositionType = (enum EAkMultiPositionType)MultiPositionType;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UAkGameplayStatics::SetMultipleChannelMaskEmitterPositions(struct UAkComponent* GameObjectAkComponent, struct TArray<struct FAkChannelMask> ChannelMasks, struct TArray<struct FTransform> Positions, EAkMultiPositionType MultiPositionType)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AkGameplayStatics", "SetMultipleChannelMaskEmitterPositions");
    struct
    {
        struct UAkComponent* GameObjectAkComponent;
        struct TArray<struct FAkChannelMask> ChannelMasks;
        struct TArray<struct FTransform> Positions;
        enum EAkMultiPositionType MultiPositionType;
    } Parms{};
    Parms.GameObjectAkComponent = (struct UAkComponent*)GameObjectAkComponent;
    Parms.ChannelMasks = (struct TArray<struct FAkChannelMask>)ChannelMasks;
    Parms.Positions = (struct TArray<struct FTransform>)Positions;
    Parms.MultiPositionType = (enum EAkMultiPositionType)MultiPositionType;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UAkGameplayStatics::SetMultipleChannelEmitterPositions(struct UAkComponent* GameObjectAkComponent, struct TArray<EAkChannelConfiguration> ChannelMasks, struct TArray<struct FTransform> Positions, EAkMultiPositionType MultiPositionType)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AkGameplayStatics", "SetMultipleChannelEmitterPositions");
    struct
    {
        struct UAkComponent* GameObjectAkComponent;
        struct TArray<EAkChannelConfiguration> ChannelMasks;
        struct TArray<struct FTransform> Positions;
        enum EAkMultiPositionType MultiPositionType;
    } Parms{};
    Parms.GameObjectAkComponent = (struct UAkComponent*)GameObjectAkComponent;
    Parms.ChannelMasks = (struct TArray<EAkChannelConfiguration>)ChannelMasks;
    Parms.Positions = (struct TArray<struct FTransform>)Positions;
    Parms.MultiPositionType = (enum EAkMultiPositionType)MultiPositionType;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UAkGameplayStatics::SetCurrentAudioCultureAsync(struct FString AudioCulture, const struct FDelegate& Completed)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AkGameplayStatics", "SetCurrentAudioCultureAsync");
    struct
    {
        struct FString AudioCulture;
        struct FDelegate Completed;
    } Parms{};
    Parms.AudioCulture = (struct FString)AudioCulture;
    Parms.Completed = (struct FDelegate)Completed;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UAkGameplayStatics::SetCurrentAudioCulture(struct FString AudioCulture, struct FLatentActionInfo LatentInfo, struct UObject* WorldContextObject)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AkGameplayStatics", "SetCurrentAudioCulture");
    struct
    {
        struct FString AudioCulture;
        struct FLatentActionInfo LatentInfo;
        struct UObject* WorldContextObject;
    } Parms{};
    Parms.AudioCulture = (struct FString)AudioCulture;
    Parms.LatentInfo = (struct FLatentActionInfo)LatentInfo;
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UAkGameplayStatics::SetBusConfig(struct FString BusName, EAkChannelConfiguration ChannelConfiguration)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AkGameplayStatics", "SetBusConfig");
    struct
    {
        struct FString BusName;
        enum EAkChannelConfiguration ChannelConfiguration;
    } Parms{};
    Parms.BusName = (struct FString)BusName;
    Parms.ChannelConfiguration = (enum EAkChannelConfiguration)ChannelConfiguration;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UAkGameplayStatics::PostTrigger(struct UAkTrigger* TriggerValue, struct AActor* Actor, struct FName Trigger)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AkGameplayStatics", "PostTrigger");
    struct
    {
        struct UAkTrigger* TriggerValue;
        struct AActor* Actor;
        struct FName Trigger;
    } Parms{};
    Parms.TriggerValue = (struct UAkTrigger*)TriggerValue;
    Parms.Actor = (struct AActor*)Actor;
    Parms.Trigger = (struct FName)Trigger;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UAkGameplayStatics::PostEventByName(struct FString EventName, struct AActor* Actor, bool bStopWhenAttachedToDestroyed)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AkGameplayStatics", "PostEventByName");
    struct
    {
        struct FString EventName;
        struct AActor* Actor;
        bool bStopWhenAttachedToDestroyed;
    } Parms{};
    Parms.EventName = (struct FString)EventName;
    Parms.Actor = (struct AActor*)Actor;
    Parms.bStopWhenAttachedToDestroyed = (bool)bStopWhenAttachedToDestroyed;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

int32_t UAkGameplayStatics::PostEventAttached(struct UAkAudioEvent* AkEvent, struct AActor* Actor, struct FName AttachPointName, bool bStopWhenAttachedToDestroyed, struct FString EventName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AkGameplayStatics", "PostEventAttached");
    struct
    {
        struct UAkAudioEvent* AkEvent;
        struct AActor* Actor;
        struct FName AttachPointName;
        bool bStopWhenAttachedToDestroyed;
        struct FString EventName;
        int32_t ReturnValue;
    } Parms{};
    Parms.AkEvent = (struct UAkAudioEvent*)AkEvent;
    Parms.Actor = (struct AActor*)Actor;
    Parms.AttachPointName = (struct FName)AttachPointName;
    Parms.bStopWhenAttachedToDestroyed = (bool)bStopWhenAttachedToDestroyed;
    Parms.EventName = (struct FString)EventName;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UAkGameplayStatics::PostEventAtLocationByName(struct FString EventName, struct FVector Location, struct FRotator Orientation, struct UObject* WorldContextObject)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AkGameplayStatics", "PostEventAtLocationByName");
    struct
    {
        struct FString EventName;
        struct FVector Location;
        struct FRotator Orientation;
        struct UObject* WorldContextObject;
    } Parms{};
    Parms.EventName = (struct FString)EventName;
    Parms.Location = (struct FVector)Location;
    Parms.Orientation = (struct FRotator)Orientation;
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

int32_t UAkGameplayStatics::PostEventAtLocation(struct UAkAudioEvent* AkEvent, struct FVector Location, struct FRotator Orientation, struct FString EventName, struct UObject* WorldContextObject)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AkGameplayStatics", "PostEventAtLocation");
    struct
    {
        struct UAkAudioEvent* AkEvent;
        struct FVector Location;
        struct FRotator Orientation;
        struct FString EventName;
        struct UObject* WorldContextObject;
        int32_t ReturnValue;
    } Parms{};
    Parms.AkEvent = (struct UAkAudioEvent*)AkEvent;
    Parms.Location = (struct FVector)Location;
    Parms.Orientation = (struct FRotator)Orientation;
    Parms.EventName = (struct FString)EventName;
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UAkGameplayStatics::PostEvent(struct UAkAudioEvent* AkEvent, struct AActor* Actor, int32_t CallbackMask, const struct FDelegate& PostEventCallback, const struct TArray<struct FAkExternalSourceInfo>& ExternalSources, bool bStopWhenAttachedToDestroyed, struct FString EventName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AkGameplayStatics", "PostEvent");
    struct
    {
        struct UAkAudioEvent* AkEvent;
        struct AActor* Actor;
        int32_t CallbackMask;
        struct FDelegate PostEventCallback;
        struct TArray<struct FAkExternalSourceInfo> ExternalSources;
        bool bStopWhenAttachedToDestroyed;
        struct FString EventName;
        int32_t ReturnValue;
    } Parms{};
    Parms.AkEvent = (struct UAkAudioEvent*)AkEvent;
    Parms.Actor = (struct AActor*)Actor;
    Parms.CallbackMask = (int32_t)CallbackMask;
    Parms.PostEventCallback = (struct FDelegate)PostEventCallback;
    Parms.ExternalSources = (struct TArray<struct FAkExternalSourceInfo>)ExternalSources;
    Parms.bStopWhenAttachedToDestroyed = (bool)bStopWhenAttachedToDestroyed;
    Parms.EventName = (struct FString)EventName;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UAkGameplayStatics::PostAndWaitForEndOfEventAsync(struct UAkAudioEvent* AkEvent, struct AActor* Actor, int32_t& PlayingID, bool bStopWhenAttachedToDestroyed, const struct TArray<struct FAkExternalSourceInfo>& ExternalSources, struct FLatentActionInfo LatentInfo)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AkGameplayStatics", "PostAndWaitForEndOfEventAsync");
    struct
    {
        struct UAkAudioEvent* AkEvent;
        struct AActor* Actor;
        int32_t PlayingID;
        bool bStopWhenAttachedToDestroyed;
        struct TArray<struct FAkExternalSourceInfo> ExternalSources;
        struct FLatentActionInfo LatentInfo;
    } Parms{};
    Parms.AkEvent = (struct UAkAudioEvent*)AkEvent;
    Parms.Actor = (struct AActor*)Actor;
    Parms.bStopWhenAttachedToDestroyed = (bool)bStopWhenAttachedToDestroyed;
    Parms.ExternalSources = (struct TArray<struct FAkExternalSourceInfo>)ExternalSources;
    Parms.LatentInfo = (struct FLatentActionInfo)LatentInfo;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    PlayingID = Parms.PlayingID;
}

int32_t UAkGameplayStatics::PostAndWaitForEndOfEvent(struct UAkAudioEvent* AkEvent, struct AActor* Actor, bool bStopWhenAttachedToDestroyed, const struct TArray<struct FAkExternalSourceInfo>& ExternalSources, struct FString EventName, struct FLatentActionInfo LatentInfo)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AkGameplayStatics", "PostAndWaitForEndOfEvent");
    struct
    {
        struct UAkAudioEvent* AkEvent;
        struct AActor* Actor;
        bool bStopWhenAttachedToDestroyed;
        struct TArray<struct FAkExternalSourceInfo> ExternalSources;
        struct FString EventName;
        struct FLatentActionInfo LatentInfo;
        int32_t ReturnValue;
    } Parms{};
    Parms.AkEvent = (struct UAkAudioEvent*)AkEvent;
    Parms.Actor = (struct AActor*)Actor;
    Parms.bStopWhenAttachedToDestroyed = (bool)bStopWhenAttachedToDestroyed;
    Parms.ExternalSources = (struct TArray<struct FAkExternalSourceInfo>)ExternalSources;
    Parms.EventName = (struct FString)EventName;
    Parms.LatentInfo = (struct FLatentActionInfo)LatentInfo;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UAkGameplayStatics::LoadInitBank()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AkGameplayStatics", "LoadInitBank");
    struct
    {
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UAkGameplayStatics::LoadBanks(const struct TArray<struct UAkAudioBank*>& SoundBanks, bool SynchronizeSoundBanks)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AkGameplayStatics", "LoadBanks");
    struct
    {
        struct TArray<struct UAkAudioBank*> SoundBanks;
        bool SynchronizeSoundBanks;
    } Parms{};
    Parms.SoundBanks = (struct TArray<struct UAkAudioBank*>)SoundBanks;
    Parms.SynchronizeSoundBanks = (bool)SynchronizeSoundBanks;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UAkGameplayStatics::LoadBankByName(struct FString BankName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AkGameplayStatics", "LoadBankByName");
    struct
    {
        struct FString BankName;
    } Parms{};
    Parms.BankName = (struct FString)BankName;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UAkGameplayStatics::LoadBankAsync(struct UAkAudioBank* Bank, const struct FDelegate& BankLoadedCallback)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AkGameplayStatics", "LoadBankAsync");
    struct
    {
        struct UAkAudioBank* Bank;
        struct FDelegate BankLoadedCallback;
    } Parms{};
    Parms.Bank = (struct UAkAudioBank*)Bank;
    Parms.BankLoadedCallback = (struct FDelegate)BankLoadedCallback;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UAkGameplayStatics::LoadBank(struct UAkAudioBank* Bank, struct FString BankName, struct FLatentActionInfo LatentInfo, struct UObject* WorldContextObject)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AkGameplayStatics", "LoadBank");
    struct
    {
        struct UAkAudioBank* Bank;
        struct FString BankName;
        struct FLatentActionInfo LatentInfo;
        struct UObject* WorldContextObject;
    } Parms{};
    Parms.Bank = (struct UAkAudioBank*)Bank;
    Parms.BankName = (struct FString)BankName;
    Parms.LatentInfo = (struct FLatentActionInfo)LatentInfo;
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

bool UAkGameplayStatics::IsGame(struct UObject* WorldContextObject)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AkGameplayStatics", "IsGame");
    struct
    {
        struct UObject* WorldContextObject;
        bool ReturnValue;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UAkGameplayStatics::IsEditor()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AkGameplayStatics", "IsEditor");
    struct
    {
        bool ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UAkGameplayStatics::GetSpeakerAngles(struct TArray<float>& SpeakerAngles, float& HeightAngle, struct FString DeviceShareset)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AkGameplayStatics", "GetSpeakerAngles");
    struct
    {
        struct TArray<float> SpeakerAngles;
        float HeightAngle;
        struct FString DeviceShareset;
    } Parms{};
    Parms.DeviceShareset = (struct FString)DeviceShareset;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    SpeakerAngles = Parms.SpeakerAngles;
    HeightAngle = Parms.HeightAngle;
}

void UAkGameplayStatics::GetRTPCValue(struct UAkRtpc* RTPCValue, int32_t PlayingID, ERTPCValueType InputValueType, float& Value, ERTPCValueType& OutputValueType, struct AActor* Actor, struct FName RTPC)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AkGameplayStatics", "GetRTPCValue");
    struct
    {
        struct UAkRtpc* RTPCValue;
        int32_t PlayingID;
        enum ERTPCValueType InputValueType;
        float Value;
        enum ERTPCValueType OutputValueType;
        struct AActor* Actor;
        struct FName RTPC;
    } Parms{};
    Parms.RTPCValue = (struct UAkRtpc*)RTPCValue;
    Parms.PlayingID = (int32_t)PlayingID;
    Parms.InputValueType = (enum ERTPCValueType)InputValueType;
    Parms.Actor = (struct AActor*)Actor;
    Parms.RTPC = (struct FName)RTPC;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    Value = Parms.Value;
    OutputValueType = Parms.OutputValueType;
}

float UAkGameplayStatics::GetOcclusionScalingFactor()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AkGameplayStatics", "GetOcclusionScalingFactor");
    struct
    {
        float ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UAkGameplayStatics::GetCurrentAudioCulture()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AkGameplayStatics", "GetCurrentAudioCulture");
    struct
    {
        struct FString ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct TArray<struct FString> UAkGameplayStatics::GetAvailableAudioCultures()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AkGameplayStatics", "GetAvailableAudioCultures");
    struct
    {
        struct TArray<struct FString> ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UObject* UAkGameplayStatics::GetAkMediaAssetUserData(struct UAkMediaAsset* Instance, struct UObject* Type)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AkGameplayStatics", "GetAkMediaAssetUserData");
    struct
    {
        struct UAkMediaAsset* Instance;
        struct UObject* Type;
        struct UObject* ReturnValue;
    } Parms{};
    Parms.Instance = (struct UAkMediaAsset*)Instance;
    Parms.Type = (struct UObject*)Type;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UAkComponent* UAkGameplayStatics::GetAkComponent(struct USceneComponent* AttachToComponent, bool& ComponentCreated, struct FName AttachPointName, struct FVector Location, uint8_t LocationType)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AkGameplayStatics", "GetAkComponent");
    struct
    {
        struct USceneComponent* AttachToComponent;
        bool ComponentCreated;
        struct FName AttachPointName;
        struct FVector Location;
        uint8_t LocationType;
        struct UAkComponent* ReturnValue;
    } Parms{};
    Parms.AttachToComponent = (struct USceneComponent*)AttachToComponent;
    Parms.AttachPointName = (struct FName)AttachPointName;
    Parms.Location = (struct FVector)Location;
    Parms.LocationType = (uint8_t)LocationType;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    ComponentCreated = Parms.ComponentCreated;
    return Parms.ReturnValue;
}

struct UObject* UAkGameplayStatics::GetAkAudioTypeUserData(struct UAkAudioType* Instance, struct UObject* Type)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AkGameplayStatics", "GetAkAudioTypeUserData");
    struct
    {
        struct UAkAudioType* Instance;
        struct UObject* Type;
        struct UObject* ReturnValue;
    } Parms{};
    Parms.Instance = (struct UAkAudioType*)Instance;
    Parms.Type = (struct UObject*)Type;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UAkGameplayStatics::ExecuteActionOnPlayingID(EAkActionOnEventType ActionType, int32_t PlayingID, int32_t TransitionDuration, EAkCurveInterpolation FadeCurve)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AkGameplayStatics", "ExecuteActionOnPlayingID");
    struct
    {
        enum EAkActionOnEventType ActionType;
        int32_t PlayingID;
        int32_t TransitionDuration;
        enum EAkCurveInterpolation FadeCurve;
    } Parms{};
    Parms.ActionType = (enum EAkActionOnEventType)ActionType;
    Parms.PlayingID = (int32_t)PlayingID;
    Parms.TransitionDuration = (int32_t)TransitionDuration;
    Parms.FadeCurve = (enum EAkCurveInterpolation)FadeCurve;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UAkGameplayStatics::ExecuteActionOnEvent(struct UAkAudioEvent* AkEvent, EAkActionOnEventType ActionType, struct AActor* Actor, int32_t TransitionDuration, EAkCurveInterpolation FadeCurve, int32_t PlayingID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AkGameplayStatics", "ExecuteActionOnEvent");
    struct
    {
        struct UAkAudioEvent* AkEvent;
        enum EAkActionOnEventType ActionType;
        struct AActor* Actor;
        int32_t TransitionDuration;
        enum EAkCurveInterpolation FadeCurve;
        int32_t PlayingID;
    } Parms{};
    Parms.AkEvent = (struct UAkAudioEvent*)AkEvent;
    Parms.ActionType = (enum EAkActionOnEventType)ActionType;
    Parms.Actor = (struct AActor*)Actor;
    Parms.TransitionDuration = (int32_t)TransitionDuration;
    Parms.FadeCurve = (enum EAkCurveInterpolation)FadeCurve;
    Parms.PlayingID = (int32_t)PlayingID;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UAkGameplayStatics::ClearBanks()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AkGameplayStatics", "ClearBanks");
    struct
    {
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UAkGameplayStatics::CancelEventCallback(const struct FDelegate& PostEventCallback)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AkGameplayStatics", "CancelEventCallback");
    struct
    {
        struct FDelegate PostEventCallback;
    } Parms{};
    Parms.PostEventCallback = (struct FDelegate)PostEventCallback;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UAkGameplayStatics::AddOutputCaptureMarker(struct FString MarkerText)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AkGameplayStatics", "AddOutputCaptureMarker");
    struct
    {
        struct FString MarkerText;
    } Parms{};
    Parms.MarkerText = (struct FString)MarkerText;
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

bool UAkMIDIEventCallbackInfo::GetProgramChange(struct FAkMidiProgramChange& AsProgramChange)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AkMIDIEventCallbackInfo", "GetProgramChange");
    struct
    {
        struct FAkMidiProgramChange AsProgramChange;
        bool ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    AsProgramChange = Parms.AsProgramChange;
    return Parms.ReturnValue;
}

bool UAkMIDIEventCallbackInfo::GetPitchBend(struct FAkMidiPitchBend& AsPitchBend)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AkMIDIEventCallbackInfo", "GetPitchBend");
    struct
    {
        struct FAkMidiPitchBend AsPitchBend;
        bool ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    AsPitchBend = Parms.AsPitchBend;
    return Parms.ReturnValue;
}

bool UAkMIDIEventCallbackInfo::GetNoteOn(struct FAkMidiNoteOnOff& AsNoteOn)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AkMIDIEventCallbackInfo", "GetNoteOn");
    struct
    {
        struct FAkMidiNoteOnOff AsNoteOn;
        bool ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    AsNoteOn = Parms.AsNoteOn;
    return Parms.ReturnValue;
}

bool UAkMIDIEventCallbackInfo::GetNoteOff(struct FAkMidiNoteOnOff& AsNoteOff)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AkMIDIEventCallbackInfo", "GetNoteOff");
    struct
    {
        struct FAkMidiNoteOnOff AsNoteOff;
        bool ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    AsNoteOff = Parms.AsNoteOff;
    return Parms.ReturnValue;
}

bool UAkMIDIEventCallbackInfo::GetNoteAftertouch(struct FAkMidiNoteAftertouch& AsNoteAftertouch)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AkMIDIEventCallbackInfo", "GetNoteAftertouch");
    struct
    {
        struct FAkMidiNoteAftertouch AsNoteAftertouch;
        bool ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    AsNoteAftertouch = Parms.AsNoteAftertouch;
    return Parms.ReturnValue;
}

bool UAkMIDIEventCallbackInfo::GetGeneric(struct FAkMidiGeneric& AsGeneric)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AkMIDIEventCallbackInfo", "GetGeneric");
    struct
    {
        struct FAkMidiGeneric AsGeneric;
        bool ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    AsGeneric = Parms.AsGeneric;
    return Parms.ReturnValue;
}

bool UAkMIDIEventCallbackInfo::GetChannelAftertouch(struct FAkMidiChannelAftertouch& AsChannelAftertouch)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AkMIDIEventCallbackInfo", "GetChannelAftertouch");
    struct
    {
        struct FAkMidiChannelAftertouch AsChannelAftertouch;
        bool ReturnValue;
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

bool UAkMIDIEventCallbackInfo::GetCc(struct FAkMidiCc& AsCc)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AkMIDIEventCallbackInfo", "GetCc");
    struct
    {
        struct FAkMidiCc AsCc;
        bool ReturnValue;
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
void UAkItemBoolProperties::SetSearchText(struct FString newText)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AkItemBoolProperties", "SetSearchText");
    struct
    {
        struct FString newText;
    } Parms{};
    Parms.newText = (struct FString)newText;
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
void UAkItemProperties::SetSearchText(struct FString newText)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AkItemProperties", "SetSearchText");
    struct
    {
        struct FString newText;
    } Parms{};
    Parms.newText = (struct FString)newText;
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
void UAkLinuxInitializationSettings::MigrateMultiCoreRendering(bool NewValue)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AkLinuxInitializationSettings", "MigrateMultiCoreRendering");
    struct
    {
        bool NewValue;
    } Parms{};
    Parms.NewValue = (bool)NewValue;
    this->ProcessEvent(Func, &Parms);
}

// UAkMacInitializationSettings
void UAkMacInitializationSettings::MigrateMultiCoreRendering(bool NewValue)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AkMacInitializationSettings", "MigrateMultiCoreRendering");
    struct
    {
        bool NewValue;
    } Parms{};
    Parms.NewValue = (bool)NewValue;
    this->ProcessEvent(Func, &Parms);
}

// UAkOpenHarmonyInitializationSettings
void UAkOpenHarmonyInitializationSettings::MigrateMultiCoreRendering(bool NewValue)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AkOpenHarmonyInitializationSettings", "MigrateMultiCoreRendering");
    struct
    {
        bool NewValue;
    } Parms{};
    Parms.NewValue = (bool)NewValue;
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

void UAkSlider::SetLocked(bool InValue)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AkSlider", "SetLocked");
    struct
    {
        bool InValue;
    } Parms{};
    Parms.InValue = (bool)InValue;
    this->ProcessEvent(Func, &Parms);
}

void UAkSlider::SetIndentHandle(bool InValue)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AkSlider", "SetIndentHandle");
    struct
    {
        bool InValue;
    } Parms{};
    Parms.InValue = (bool)InValue;
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

void UAkSlider::SetAkSliderItemId(const struct FGuid& itemID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AkSlider", "SetAkSliderItemId");
    struct
    {
        struct FGuid itemID;
    } Parms{};
    Parms.itemID = (struct FGuid)itemID;
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

// AAkSpatialAudioVolume
float AAkSpatialAudioVolume::GetVolumeInMeters()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AkSpatialAudioVolume", "GetVolumeInMeters");
    struct
    {
        float ReturnValue;
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

// UAkWaapiCalls
struct FAKWaapiJsonObject UAkWaapiCalls::Unsubscribe(const struct FAkWaapiSubscriptionId& SubscriptionId, bool& UnsubscriptionDone)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AkWaapiCalls", "Unsubscribe");
    struct
    {
        struct FAkWaapiSubscriptionId SubscriptionId;
        bool UnsubscriptionDone;
        struct FAKWaapiJsonObject ReturnValue;
    } Parms{};
    Parms.SubscriptionId = (struct FAkWaapiSubscriptionId)SubscriptionId;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    UnsubscriptionDone = Parms.UnsubscriptionDone;
    return Parms.ReturnValue;
}

struct FAKWaapiJsonObject UAkWaapiCalls::SubscribeToWaapi(const struct FAkWaapiUri& WaapiUri, const struct FAKWaapiJsonObject& WaapiOptions, const struct FDelegate& Callback, struct FAkWaapiSubscriptionId& SubscriptionId, bool& SubscriptionDone)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AkWaapiCalls", "SubscribeToWaapi");
    struct
    {
        struct FAkWaapiUri WaapiUri;
        struct FAKWaapiJsonObject WaapiOptions;
        struct FDelegate Callback;
        struct FAkWaapiSubscriptionId SubscriptionId;
        bool SubscriptionDone;
        struct FAKWaapiJsonObject ReturnValue;
    } Parms{};
    Parms.WaapiUri = (struct FAkWaapiUri)WaapiUri;
    Parms.WaapiOptions = (struct FAKWaapiJsonObject)WaapiOptions;
    Parms.Callback = (struct FDelegate)Callback;
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

bool UAkWaapiCalls::RegisterWaapiProjectLoadedCallback(const struct FDelegate& Callback)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AkWaapiCalls", "RegisterWaapiProjectLoadedCallback");
    struct
    {
        struct FDelegate Callback;
        bool ReturnValue;
    } Parms{};
    Parms.Callback = (struct FDelegate)Callback;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UAkWaapiCalls::RegisterWaapiConnectionLostCallback(const struct FDelegate& Callback)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AkWaapiCalls", "RegisterWaapiConnectionLostCallback");
    struct
    {
        struct FDelegate Callback;
        bool ReturnValue;
    } Parms{};
    Parms.Callback = (struct FDelegate)Callback;
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

struct FAKWaapiJsonObject UAkWaapiJsonManager::SetBoolField(const struct FAkWaapiFieldNames& FieldName, bool FieldValue, struct FAKWaapiJsonObject Target)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AkWaapiJsonManager", "SetBoolField");
    struct
    {
        struct FAkWaapiFieldNames FieldName;
        bool FieldValue;
        struct FAKWaapiJsonObject Target;
        struct FAKWaapiJsonObject ReturnValue;
    } Parms{};
    Parms.FieldName = (struct FAkWaapiFieldNames)FieldName;
    Parms.FieldValue = (bool)FieldValue;
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

bool UAkWaapiJsonManager::GetBoolField(const struct FAkWaapiFieldNames& FieldName, struct FAKWaapiJsonObject Target)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AkWaapiJsonManager", "GetBoolField");
    struct
    {
        struct FAkWaapiFieldNames FieldName;
        struct FAKWaapiJsonObject Target;
        bool ReturnValue;
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
void UAkWindowsInitializationSettings::MigrateMultiCoreRendering(bool NewValue)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AkWindowsInitializationSettings", "MigrateMultiCoreRendering");
    struct
    {
        bool NewValue;
    } Parms{};
    Parms.NewValue = (bool)NewValue;
    this->ProcessEvent(Func, &Parms);
}

// UAkWwiseTree
void UAkWwiseTree::SetSearchText(struct FString newText)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AkWwiseTree", "SetSearchText");
    struct
    {
        struct FString newText;
    } Parms{};
    Parms.newText = (struct FString)newText;
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

// UAnimNotify_AudioBank
void UAnimNotify_AudioBank::UnloadBank()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AnimNotify_AudioBank", "UnloadBank");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UAnimNotify_AudioBank::LoadBank()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AnimNotify_AudioBank", "LoadBank");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// UAnimNotify_PlayAudio
void UAnimNotify_PlayAudio::ProcessAudioPlayingID(struct USkeletalMeshComponent* MeshComp, int32_t InPlayingID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AnimNotify_PlayAudio", "ProcessAudioPlayingID");
    struct
    {
        struct USkeletalMeshComponent* MeshComp;
        int32_t InPlayingID;
    } Parms{};
    Parms.MeshComp = (struct USkeletalMeshComponent*)MeshComp;
    Parms.InPlayingID = (int32_t)InPlayingID;
    this->ProcessEvent(Func, &Parms);
}

void UAnimNotify_PlayAudio::OnMontageEnded(struct UAnimMontage* Montage, bool Interrupted)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AnimNotify_PlayAudio", "OnMontageEnded");
    struct
    {
        struct UAnimMontage* Montage;
        bool Interrupted;
    } Parms{};
    Parms.Montage = (struct UAnimMontage*)Montage;
    Parms.Interrupted = (bool)Interrupted;
    this->ProcessEvent(Func, &Parms);
}

// AAudioEmitter3D
void AAudioEmitter3D::DeactivateSoundData()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AudioEmitter3D", "DeactivateSoundData");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AAudioEmitter3D::ActivateSoundData()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AudioEmitter3D", "ActivateSoundData");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// UAudioManager
void UAudioManager::WakeupWwiseFromSuspend()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AudioManager", "WakeupWwiseFromSuspend");
    struct
    {
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UAudioManager::UnmuteWwiseAudio()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AudioManager", "UnmuteWwiseAudio");
    struct
    {
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

int32_t UAudioManager::UnloadBankByName(struct FString BankName, struct FString Source, bool IgnoreCounter, bool Async, const struct FDelegate& UnloadFinishCallback)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AudioManager", "UnloadBankByName");
    struct
    {
        struct FString BankName;
        struct FString Source;
        bool IgnoreCounter;
        bool Async;
        struct FDelegate UnloadFinishCallback;
        int32_t ReturnValue;
    } Parms{};
    Parms.BankName = (struct FString)BankName;
    Parms.Source = (struct FString)Source;
    Parms.IgnoreCounter = (bool)IgnoreCounter;
    Parms.Async = (bool)Async;
    Parms.UnloadFinishCallback = (struct FDelegate)UnloadFinishCallback;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UAudioManager::UnloadBank(struct UAkAudioBank* BankReference, struct UObject* Source, bool IgnoreCounter, bool Async, const struct FDelegate& UnloadFinishCallback)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AudioManager", "UnloadBank");
    struct
    {
        struct UAkAudioBank* BankReference;
        struct UObject* Source;
        bool IgnoreCounter;
        bool Async;
        struct FDelegate UnloadFinishCallback;
        int32_t ReturnValue;
    } Parms{};
    Parms.BankReference = (struct UAkAudioBank*)BankReference;
    Parms.Source = (struct UObject*)Source;
    Parms.IgnoreCounter = (bool)IgnoreCounter;
    Parms.Async = (bool)Async;
    Parms.UnloadFinishCallback = (struct FDelegate)UnloadFinishCallback;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UAudioManager::TogglePortalAtLocation(struct FVector Location, bool Open, struct UObject* Source)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AudioManager", "TogglePortalAtLocation");
    struct
    {
        struct FVector Location;
        bool Open;
        struct UObject* Source;
    } Parms{};
    Parms.Location = (struct FVector)Location;
    Parms.Open = (bool)Open;
    Parms.Source = (struct UObject*)Source;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UAudioManager::SuspendWwise(bool in_bRenderAnyway)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AudioManager", "SuspendWwise");
    struct
    {
        bool in_bRenderAnyway;
    } Parms{};
    Parms.in_bRenderAnyway = (bool)in_bRenderAnyway;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UAudioManager::StopWwiseEventByName(struct FString EventName, struct AActor* Emitter, float FadeOutTime, struct FString ComponentName, int32_t PlayingID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AudioManager", "StopWwiseEventByName");
    struct
    {
        struct FString EventName;
        struct AActor* Emitter;
        float FadeOutTime;
        struct FString ComponentName;
        int32_t PlayingID;
    } Parms{};
    Parms.EventName = (struct FString)EventName;
    Parms.Emitter = (struct AActor*)Emitter;
    Parms.FadeOutTime = (float)FadeOutTime;
    Parms.ComponentName = (struct FString)ComponentName;
    Parms.PlayingID = (int32_t)PlayingID;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UAudioManager::StopWwiseEvent(struct UAkAudioEvent* EventReference, struct AActor* Emitter, float FadeOutTime, struct FString ComponentName, int32_t PlayingID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AudioManager", "StopWwiseEvent");
    struct
    {
        struct UAkAudioEvent* EventReference;
        struct AActor* Emitter;
        float FadeOutTime;
        struct FString ComponentName;
        int32_t PlayingID;
    } Parms{};
    Parms.EventReference = (struct UAkAudioEvent*)EventReference;
    Parms.Emitter = (struct AActor*)Emitter;
    Parms.FadeOutTime = (float)FadeOutTime;
    Parms.ComponentName = (struct FString)ComponentName;
    Parms.PlayingID = (int32_t)PlayingID;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UAudioManager::StopMIDIMetronome(struct FString EventName, struct AActor* Emitter, bool StopCurrentNote)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AudioManager", "StopMIDIMetronome");
    struct
    {
        struct FString EventName;
        struct AActor* Emitter;
        bool StopCurrentNote;
    } Parms{};
    Parms.EventName = (struct FString)EventName;
    Parms.Emitter = (struct AActor*)Emitter;
    Parms.StopCurrentNote = (bool)StopCurrentNote;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UAudioManager::StopBackgroundMusic(float FadeOutTime)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AudioManager", "StopBackgroundMusic");
    struct
    {
        float FadeOutTime;
    } Parms{};
    Parms.FadeOutTime = (float)FadeOutTime;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UAudioManager::StopAudioFunctionCallRecord()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AudioManager", "StopAudioFunctionCallRecord");
    struct
    {
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UAudioManager::StopAnimationSound(struct AActor* Emitter, float FadeOutTime)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AudioManager", "StopAnimationSound");
    struct
    {
        struct AActor* Emitter;
        float FadeOutTime;
    } Parms{};
    Parms.Emitter = (struct AActor*)Emitter;
    Parms.FadeOutTime = (float)FadeOutTime;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UAudioManager::StopAll(struct AActor* Emitter)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AudioManager", "StopAll");
    struct
    {
        struct AActor* Emitter;
    } Parms{};
    Parms.Emitter = (struct AActor*)Emitter;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UAudioManager::StartMIDIMetronome(float TickInterval, struct FString EventName, struct AActor* Emitter)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AudioManager", "StartMIDIMetronome");
    struct
    {
        float TickInterval;
        struct FString EventName;
        struct AActor* Emitter;
    } Parms{};
    Parms.TickInterval = (float)TickInterval;
    Parms.EventName = (struct FString)EventName;
    Parms.Emitter = (struct AActor*)Emitter;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UAudioManager::StartAudioFunctionCallRecord()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AudioManager", "StartAudioFunctionCallRecord");
    struct
    {
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UAudioManager::SetVoiceVolume(float Volume)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AudioManager", "SetVoiceVolume");
    struct
    {
        float Volume;
    } Parms{};
    Parms.Volume = (float)Volume;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UAudioManager::SetVoiceLanguage(struct FString NewCulture)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AudioManager", "SetVoiceLanguage");
    struct
    {
        struct FString NewCulture;
    } Parms{};
    Parms.NewCulture = (struct FString)NewCulture;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UAudioManager::SetVoiceEnabled(bool Enabled)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AudioManager", "SetVoiceEnabled");
    struct
    {
        bool Enabled;
    } Parms{};
    Parms.Enabled = (bool)Enabled;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UAudioManager::SetUserExternalBluetoothState(bool UserExternalBluetoothState)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AudioManager", "SetUserExternalBluetoothState");
    struct
    {
        bool UserExternalBluetoothState;
    } Parms{};
    Parms.UserExternalBluetoothState = (bool)UserExternalBluetoothState;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UAudioManager::SetSwitchByReference(struct UAkSwitchValue* SwitchReference, struct AActor* TargetActor, struct FString ComponentName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AudioManager", "SetSwitchByReference");
    struct
    {
        struct UAkSwitchValue* SwitchReference;
        struct AActor* TargetActor;
        struct FString ComponentName;
    } Parms{};
    Parms.SwitchReference = (struct UAkSwitchValue*)SwitchReference;
    Parms.TargetActor = (struct AActor*)TargetActor;
    Parms.ComponentName = (struct FString)ComponentName;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UAudioManager::SetSwitchByName(struct FString SwitchGroupName, struct FString SwitchName, struct AActor* TargetActor, struct FString ComponentName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AudioManager", "SetSwitchByName");
    struct
    {
        struct FString SwitchGroupName;
        struct FString SwitchName;
        struct AActor* TargetActor;
        struct FString ComponentName;
    } Parms{};
    Parms.SwitchGroupName = (struct FString)SwitchGroupName;
    Parms.SwitchName = (struct FString)SwitchName;
    Parms.TargetActor = (struct AActor*)TargetActor;
    Parms.ComponentName = (struct FString)ComponentName;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UAudioManager::SetStateByReference(struct UAkStateValue* StateReference, struct UObject* Source)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AudioManager", "SetStateByReference");
    struct
    {
        struct UAkStateValue* StateReference;
        struct UObject* Source;
    } Parms{};
    Parms.StateReference = (struct UAkStateValue*)StateReference;
    Parms.Source = (struct UObject*)Source;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UAudioManager::SetStateByName(struct FString StateGroupName, struct FString StateName, struct FString Source)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AudioManager", "SetStateByName");
    struct
    {
        struct FString StateGroupName;
        struct FString StateName;
        struct FString Source;
    } Parms{};
    Parms.StateGroupName = (struct FString)StateGroupName;
    Parms.StateName = (struct FString)StateName;
    Parms.Source = (struct FString)Source;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UAudioManager::SetSoundVolume(float Volume)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AudioManager", "SetSoundVolume");
    struct
    {
        float Volume;
    } Parms{};
    Parms.Volume = (float)Volume;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UAudioManager::SetSoundEnabled(bool Enabled)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AudioManager", "SetSoundEnabled");
    struct
    {
        bool Enabled;
    } Parms{};
    Parms.Enabled = (bool)Enabled;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UAudioManager::SetRTPCValueByPlayingID(struct FString ParameterName, float Value, int32_t PlayingID, int32_t ValueChangeDuration, bool BypassInternalValueInterpolation)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AudioManager", "SetRTPCValueByPlayingID");
    struct
    {
        struct FString ParameterName;
        float Value;
        int32_t PlayingID;
        int32_t ValueChangeDuration;
        bool BypassInternalValueInterpolation;
    } Parms{};
    Parms.ParameterName = (struct FString)ParameterName;
    Parms.Value = (float)Value;
    Parms.PlayingID = (int32_t)PlayingID;
    Parms.ValueChangeDuration = (int32_t)ValueChangeDuration;
    Parms.BypassInternalValueInterpolation = (bool)BypassInternalValueInterpolation;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UAudioManager::SetRTPCByReference(struct UAkRtpc* ParameterReference, float Value, struct AActor* TargetActor, float InterpolateTime, struct FString ComponentName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AudioManager", "SetRTPCByReference");
    struct
    {
        struct UAkRtpc* ParameterReference;
        float Value;
        struct AActor* TargetActor;
        float InterpolateTime;
        struct FString ComponentName;
    } Parms{};
    Parms.ParameterReference = (struct UAkRtpc*)ParameterReference;
    Parms.Value = (float)Value;
    Parms.TargetActor = (struct AActor*)TargetActor;
    Parms.InterpolateTime = (float)InterpolateTime;
    Parms.ComponentName = (struct FString)ComponentName;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UAudioManager::SetReverbEnabled(bool Enabled)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AudioManager", "SetReverbEnabled");
    struct
    {
        bool Enabled;
    } Parms{};
    Parms.Enabled = (bool)Enabled;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UAudioManager::SetOcclusionObstructionEnabled(bool Enabled)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AudioManager", "SetOcclusionObstructionEnabled");
    struct
    {
        bool Enabled;
    } Parms{};
    Parms.Enabled = (bool)Enabled;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UAudioManager::SetMusicVolume(float Volume)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AudioManager", "SetMusicVolume");
    struct
    {
        float Volume;
    } Parms{};
    Parms.Volume = (float)Volume;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UAudioManager::SetMusicEnabled(bool Enabled)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AudioManager", "SetMusicEnabled");
    struct
    {
        bool Enabled;
    } Parms{};
    Parms.Enabled = (bool)Enabled;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UAudioManager::SetLastUnplugHeadsetTime()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AudioManager", "SetLastUnplugHeadsetTime");
    struct
    {
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UAudioManager::SetGlobalRTPC(struct FString ParameterName, float Value, struct FString Source, float InterpolateTime)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AudioManager", "SetGlobalRTPC");
    struct
    {
        struct FString ParameterName;
        float Value;
        struct FString Source;
        float InterpolateTime;
    } Parms{};
    Parms.ParameterName = (struct FString)ParameterName;
    Parms.Value = (float)Value;
    Parms.Source = (struct FString)Source;
    Parms.InterpolateTime = (float)InterpolateTime;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UAudioManager::SetEnableWwiseLevel(int32_t InEnableWwiseLevel)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AudioManager", "SetEnableWwiseLevel");
    struct
    {
        int32_t InEnableWwiseLevel;
    } Parms{};
    Parms.InEnableWwiseLevel = (int32_t)InEnableWwiseLevel;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UAudioManager::SetEmitterRTPC(struct FString ParameterName, float Value, struct AActor* Emitter, float InterpolateTime, struct FString ComponentName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AudioManager", "SetEmitterRTPC");
    struct
    {
        struct FString ParameterName;
        float Value;
        struct AActor* Emitter;
        float InterpolateTime;
        struct FString ComponentName;
    } Parms{};
    Parms.ParameterName = (struct FString)ParameterName;
    Parms.Value = (float)Value;
    Parms.Emitter = (struct AActor*)Emitter;
    Parms.InterpolateTime = (float)InterpolateTime;
    Parms.ComponentName = (struct FString)ComponentName;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UAudioManager::SetEarlyReflectionEnabled(bool Enabled)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AudioManager", "SetEarlyReflectionEnabled");
    struct
    {
        bool Enabled;
    } Parms{};
    Parms.Enabled = (bool)Enabled;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UAudioManager::SetDiffractionEnabled(bool Enabled)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AudioManager", "SetDiffractionEnabled");
    struct
    {
        bool Enabled;
    } Parms{};
    Parms.Enabled = (bool)Enabled;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UAudioManager::SetDeviceLevel(int32_t DeviceLevelIndex)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AudioManager", "SetDeviceLevel");
    struct
    {
        int32_t DeviceLevelIndex;
    } Parms{};
    Parms.DeviceLevelIndex = (int32_t)DeviceLevelIndex;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UAudioManager::SetBusEffect(struct FString PluginName, struct FString BusName, int32_t PluginSlotIndex, bool IsEnable)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AudioManager", "SetBusEffect");
    struct
    {
        struct FString PluginName;
        struct FString BusName;
        int32_t PluginSlotIndex;
        bool IsEnable;
    } Parms{};
    Parms.PluginName = (struct FString)PluginName;
    Parms.BusName = (struct FString)BusName;
    Parms.PluginSlotIndex = (int32_t)PluginSlotIndex;
    Parms.IsEnable = (bool)IsEnable;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UAudioManager::SetBusConfig(struct FString BusName, EAkChannelConfiguration ChannelConfiguration)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AudioManager", "SetBusConfig");
    struct
    {
        struct FString BusName;
        enum EAkChannelConfiguration ChannelConfiguration;
    } Parms{};
    Parms.BusName = (struct FString)BusName;
    Parms.ChannelConfiguration = (enum EAkChannelConfiguration)ChannelConfiguration;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UAudioManager::SetBluetoothState(bool BluetoothState)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AudioManager", "SetBluetoothState");
    struct
    {
        bool BluetoothState;
    } Parms{};
    Parms.BluetoothState = (bool)BluetoothState;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UAudioManager::SetAudioQuality(uint8_t NewQuality)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AudioManager", "SetAudioQuality");
    struct
    {
        uint8_t NewQuality;
    } Parms{};
    Parms.NewQuality = (uint8_t)NewQuality;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

bool UAudioManager::SetAttenuationScaling(struct AActor* Emitter, float Scale, bool IsAbsolute, struct FString ComponentName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AudioManager", "SetAttenuationScaling");
    struct
    {
        struct AActor* Emitter;
        float Scale;
        bool IsAbsolute;
        struct FString ComponentName;
        bool ReturnValue;
    } Parms{};
    Parms.Emitter = (struct AActor*)Emitter;
    Parms.Scale = (float)Scale;
    Parms.IsAbsolute = (bool)IsAbsolute;
    Parms.ComponentName = (struct FString)ComponentName;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UAudioManager::SeekOnWwiseEventByName(struct FString EventName, int32_t Location)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AudioManager", "SeekOnWwiseEventByName");
    struct
    {
        struct FString EventName;
        int32_t Location;
    } Parms{};
    Parms.EventName = (struct FString)EventName;
    Parms.Location = (int32_t)Location;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UAudioManager::SeekOnWwiseEvent(struct UAkAudioEvent* EventReference, int32_t Location)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AudioManager", "SeekOnWwiseEvent");
    struct
    {
        struct UAkAudioEvent* EventReference;
        int32_t Location;
    } Parms{};
    Parms.EventReference = (struct UAkAudioEvent*)EventReference;
    Parms.Location = (int32_t)Location;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UAudioManager::ResumeSound(struct UAkAudioEvent* EventReference, struct AActor* Emitter, struct FString ComponentName, int32_t PlayingID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AudioManager", "ResumeSound");
    struct
    {
        struct UAkAudioEvent* EventReference;
        struct AActor* Emitter;
        struct FString ComponentName;
        int32_t PlayingID;
    } Parms{};
    Parms.EventReference = (struct UAkAudioEvent*)EventReference;
    Parms.Emitter = (struct AActor*)Emitter;
    Parms.ComponentName = (struct FString)ComponentName;
    Parms.PlayingID = (int32_t)PlayingID;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UAudioManager::ResetRTPCValue(struct FString ParameterName, struct AActor* GameObject, float InterpolateTime, struct FString ComponentName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AudioManager", "ResetRTPCValue");
    struct
    {
        struct FString ParameterName;
        struct AActor* GameObject;
        float InterpolateTime;
        struct FString ComponentName;
    } Parms{};
    Parms.ParameterName = (struct FString)ParameterName;
    Parms.GameObject = (struct AActor*)GameObject;
    Parms.InterpolateTime = (float)InterpolateTime;
    Parms.ComponentName = (struct FString)ComponentName;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UAudioManager::ReloadBank(struct FString BankName, struct FString Source)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AudioManager", "ReloadBank");
    struct
    {
        struct FString BankName;
        struct FString Source;
    } Parms{};
    Parms.BankName = (struct FString)BankName;
    Parms.Source = (struct FString)Source;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UAudioManager::ReloadAllLoadedBanks()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AudioManager", "ReloadAllLoadedBanks");
    struct
    {
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UAudioManager::ReinvokeAudioFunctionCallRecords()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AudioManager", "ReinvokeAudioFunctionCallRecords");
    struct
    {
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

int32_t UAudioManager::PostWwiseEventByName(struct FString EventName, struct AActor* Emitter, bool StopOnDestroy)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AudioManager", "PostWwiseEventByName");
    struct
    {
        struct FString EventName;
        struct AActor* Emitter;
        bool StopOnDestroy;
        int32_t ReturnValue;
    } Parms{};
    Parms.EventName = (struct FString)EventName;
    Parms.Emitter = (struct AActor*)Emitter;
    Parms.StopOnDestroy = (bool)StopOnDestroy;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UAudioManager::PostWwiseEvent(struct UAkAudioEvent* EventReference, struct AActor* Emitter, bool StopOnDestroy)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AudioManager", "PostWwiseEvent");
    struct
    {
        struct UAkAudioEvent* EventReference;
        struct AActor* Emitter;
        bool StopOnDestroy;
        int32_t ReturnValue;
    } Parms{};
    Parms.EventReference = (struct UAkAudioEvent*)EventReference;
    Parms.Emitter = (struct AActor*)Emitter;
    Parms.StopOnDestroy = (bool)StopOnDestroy;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UAudioManager::PostTriggerByReference(struct UAkTrigger* TriggerReference, struct AActor* TargetActor, struct FString ComponentName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AudioManager", "PostTriggerByReference");
    struct
    {
        struct UAkTrigger* TriggerReference;
        struct AActor* TargetActor;
        struct FString ComponentName;
    } Parms{};
    Parms.TriggerReference = (struct UAkTrigger*)TriggerReference;
    Parms.TargetActor = (struct AActor*)TargetActor;
    Parms.ComponentName = (struct FString)ComponentName;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UAudioManager::PostTriggerByName(struct FString TriggerName, struct AActor* TargetActor, struct FString ComponentName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AudioManager", "PostTriggerByName");
    struct
    {
        struct FString TriggerName;
        struct AActor* TargetActor;
        struct FString ComponentName;
    } Parms{};
    Parms.TriggerName = (struct FString)TriggerName;
    Parms.TargetActor = (struct AActor*)TargetActor;
    Parms.ComponentName = (struct FString)ComponentName;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

int32_t UAudioManager::PlayVoice3DByName(struct FString EventName, struct AActor* Speaker, bool WaitUntilCurrentEnd, struct FString ExternalFileName, int32_t RandomCount)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AudioManager", "PlayVoice3DByName");
    struct
    {
        struct FString EventName;
        struct AActor* Speaker;
        bool WaitUntilCurrentEnd;
        struct FString ExternalFileName;
        int32_t RandomCount;
        int32_t ReturnValue;
    } Parms{};
    Parms.EventName = (struct FString)EventName;
    Parms.Speaker = (struct AActor*)Speaker;
    Parms.WaitUntilCurrentEnd = (bool)WaitUntilCurrentEnd;
    Parms.ExternalFileName = (struct FString)ExternalFileName;
    Parms.RandomCount = (int32_t)RandomCount;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UAudioManager::PlayVoice3D(struct UAkAudioEvent* EventReference, struct AActor* Speaker, bool WaitUntilCurrentEnd, struct FString ExternalFileName, int32_t RandomCount)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AudioManager", "PlayVoice3D");
    struct
    {
        struct UAkAudioEvent* EventReference;
        struct AActor* Speaker;
        bool WaitUntilCurrentEnd;
        struct FString ExternalFileName;
        int32_t RandomCount;
        int32_t ReturnValue;
    } Parms{};
    Parms.EventReference = (struct UAkAudioEvent*)EventReference;
    Parms.Speaker = (struct AActor*)Speaker;
    Parms.WaitUntilCurrentEnd = (bool)WaitUntilCurrentEnd;
    Parms.ExternalFileName = (struct FString)ExternalFileName;
    Parms.RandomCount = (int32_t)RandomCount;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UAudioManager::PlayVoice2DByName(struct FString EventName, struct FString ExternalFileName, int32_t RandomCount, struct FString Source)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AudioManager", "PlayVoice2DByName");
    struct
    {
        struct FString EventName;
        struct FString ExternalFileName;
        int32_t RandomCount;
        struct FString Source;
        int32_t ReturnValue;
    } Parms{};
    Parms.EventName = (struct FString)EventName;
    Parms.ExternalFileName = (struct FString)ExternalFileName;
    Parms.RandomCount = (int32_t)RandomCount;
    Parms.Source = (struct FString)Source;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UAudioManager::PlayVoice2D(struct UAkAudioEvent* EventReference, struct FString ExternalFileName, int32_t RandomCount, struct FString Source)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AudioManager", "PlayVoice2D");
    struct
    {
        struct UAkAudioEvent* EventReference;
        struct FString ExternalFileName;
        int32_t RandomCount;
        struct FString Source;
        int32_t ReturnValue;
    } Parms{};
    Parms.EventReference = (struct UAkAudioEvent*)EventReference;
    Parms.ExternalFileName = (struct FString)ExternalFileName;
    Parms.RandomCount = (int32_t)RandomCount;
    Parms.Source = (struct FString)Source;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int64_t UAudioManager::PlaySoundAtLocationByName(struct FString EventName, struct UObject* Source, struct FVector Location, struct FRotator Orientation, bool UseAuxSend)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AudioManager", "PlaySoundAtLocationByName");
    struct
    {
        struct FString EventName;
        struct UObject* Source;
        struct FVector Location;
        struct FRotator Orientation;
        bool UseAuxSend;
        int64_t ReturnValue;
    } Parms{};
    Parms.EventName = (struct FString)EventName;
    Parms.Source = (struct UObject*)Source;
    Parms.Location = (struct FVector)Location;
    Parms.Orientation = (struct FRotator)Orientation;
    Parms.UseAuxSend = (bool)UseAuxSend;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int64_t UAudioManager::PlaySoundAtLocation(struct UAkAudioEvent* EventReference, struct UObject* Source, struct FVector Location, struct FRotator Orientation, bool UseAuxSend)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AudioManager", "PlaySoundAtLocation");
    struct
    {
        struct UAkAudioEvent* EventReference;
        struct UObject* Source;
        struct FVector Location;
        struct FRotator Orientation;
        bool UseAuxSend;
        int64_t ReturnValue;
    } Parms{};
    Parms.EventReference = (struct UAkAudioEvent*)EventReference;
    Parms.Source = (struct UObject*)Source;
    Parms.Location = (struct FVector)Location;
    Parms.Orientation = (struct FRotator)Orientation;
    Parms.UseAuxSend = (bool)UseAuxSend;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UAudioManager::PlaySound3DByName(struct FString EventName, struct AActor* Emitter, struct FString ComponentName, bool StopOnDestroy, struct FString Source)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AudioManager", "PlaySound3DByName");
    struct
    {
        struct FString EventName;
        struct AActor* Emitter;
        struct FString ComponentName;
        bool StopOnDestroy;
        struct FString Source;
        int32_t ReturnValue;
    } Parms{};
    Parms.EventName = (struct FString)EventName;
    Parms.Emitter = (struct AActor*)Emitter;
    Parms.ComponentName = (struct FString)ComponentName;
    Parms.StopOnDestroy = (bool)StopOnDestroy;
    Parms.Source = (struct FString)Source;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UAudioManager::PlaySound3D(struct UAkAudioEvent* EventReference, struct AActor* Emitter, struct FString ComponentName, bool StopOnDestroy, struct FString Source)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AudioManager", "PlaySound3D");
    struct
    {
        struct UAkAudioEvent* EventReference;
        struct AActor* Emitter;
        struct FString ComponentName;
        bool StopOnDestroy;
        struct FString Source;
        int32_t ReturnValue;
    } Parms{};
    Parms.EventReference = (struct UAkAudioEvent*)EventReference;
    Parms.Emitter = (struct AActor*)Emitter;
    Parms.ComponentName = (struct FString)ComponentName;
    Parms.StopOnDestroy = (bool)StopOnDestroy;
    Parms.Source = (struct FString)Source;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UAudioManager::PlaySound2DByName(struct FString EventName, struct FString Source)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AudioManager", "PlaySound2DByName");
    struct
    {
        struct FString EventName;
        struct FString Source;
        int32_t ReturnValue;
    } Parms{};
    Parms.EventName = (struct FString)EventName;
    Parms.Source = (struct FString)Source;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UAudioManager::PlaySound2D(struct UAkAudioEvent* EventReference, struct UObject* Source)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AudioManager", "PlaySound2D");
    struct
    {
        struct UAkAudioEvent* EventReference;
        struct UObject* Source;
        int32_t ReturnValue;
    } Parms{};
    Parms.EventReference = (struct UAkAudioEvent*)EventReference;
    Parms.Source = (struct UObject*)Source;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UAudioManager::PlayMovieSound(struct UAkAudioEvent* EventReference, struct UObject* Source, int32_t CallbackTypes)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AudioManager", "PlayMovieSound");
    struct
    {
        struct UAkAudioEvent* EventReference;
        struct UObject* Source;
        int32_t CallbackTypes;
        int32_t ReturnValue;
    } Parms{};
    Parms.EventReference = (struct UAkAudioEvent*)EventReference;
    Parms.Source = (struct UObject*)Source;
    Parms.CallbackTypes = (int32_t)CallbackTypes;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UAudioManager::PlayIncidentalMusicByName(struct FString EventName, struct AActor* Player)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AudioManager", "PlayIncidentalMusicByName");
    struct
    {
        struct FString EventName;
        struct AActor* Player;
        int32_t ReturnValue;
    } Parms{};
    Parms.EventName = (struct FString)EventName;
    Parms.Player = (struct AActor*)Player;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UAudioManager::PlayIncidentalMusic(struct UAkAudioEvent* EventReference, struct AActor* Player)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AudioManager", "PlayIncidentalMusic");
    struct
    {
        struct UAkAudioEvent* EventReference;
        struct AActor* Player;
        int32_t ReturnValue;
    } Parms{};
    Parms.EventReference = (struct UAkAudioEvent*)EventReference;
    Parms.Player = (struct AActor*)Player;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UAudioManager::PlayBackgroundMusicByName(struct FString EventName, struct FString Source)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AudioManager", "PlayBackgroundMusicByName");
    struct
    {
        struct FString EventName;
        struct FString Source;
        int32_t ReturnValue;
    } Parms{};
    Parms.EventName = (struct FString)EventName;
    Parms.Source = (struct FString)Source;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UAudioManager::PlayBackgroundMusic(struct UAkAudioEvent* EventReference, struct UObject* Source)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AudioManager", "PlayBackgroundMusic");
    struct
    {
        struct UAkAudioEvent* EventReference;
        struct UObject* Source;
        int32_t ReturnValue;
    } Parms{};
    Parms.EventReference = (struct UAkAudioEvent*)EventReference;
    Parms.Source = (struct UObject*)Source;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UAudioManager::PauseSound(struct UAkAudioEvent* EventReference, struct AActor* Emitter, struct FString ComponentName, int32_t PlayingID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AudioManager", "PauseSound");
    struct
    {
        struct UAkAudioEvent* EventReference;
        struct AActor* Emitter;
        struct FString ComponentName;
        int32_t PlayingID;
    } Parms{};
    Parms.EventReference = (struct UAkAudioEvent*)EventReference;
    Parms.Emitter = (struct AActor*)Emitter;
    Parms.ComponentName = (struct FString)ComponentName;
    Parms.PlayingID = (int32_t)PlayingID;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UAudioManager::MuteWwiseAudio()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AudioManager", "MuteWwiseAudio");
    struct
    {
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

int32_t UAudioManager::LoadBankByName(struct FString BankName, struct FString Source, bool Async, const struct FDelegate& LoadFinishCallback)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AudioManager", "LoadBankByName");
    struct
    {
        struct FString BankName;
        struct FString Source;
        bool Async;
        struct FDelegate LoadFinishCallback;
        int32_t ReturnValue;
    } Parms{};
    Parms.BankName = (struct FString)BankName;
    Parms.Source = (struct FString)Source;
    Parms.Async = (bool)Async;
    Parms.LoadFinishCallback = (struct FDelegate)LoadFinishCallback;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UAudioManager::LoadBank(struct UAkAudioBank* BankReference, struct UObject* Source, bool Async, const struct FDelegate& LoadFinishCallback)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AudioManager", "LoadBank");
    struct
    {
        struct UAkAudioBank* BankReference;
        struct UObject* Source;
        bool Async;
        struct FDelegate LoadFinishCallback;
        int32_t ReturnValue;
    } Parms{};
    Parms.BankReference = (struct UAkAudioBank*)BankReference;
    Parms.Source = (struct UObject*)Source;
    Parms.Async = (bool)Async;
    Parms.LoadFinishCallback = (struct FDelegate)LoadFinishCallback;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UAudioManager::IsUsingWwiseLite()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AudioManager", "IsUsingWwiseLite");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UAudioManager::IsSwitchAt(struct FString SwitchGroupName, struct FString SwitchName, struct AActor* TargetActor, struct FString ComponentName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AudioManager", "IsSwitchAt");
    struct
    {
        struct FString SwitchGroupName;
        struct FString SwitchName;
        struct AActor* TargetActor;
        struct FString ComponentName;
        bool ReturnValue;
    } Parms{};
    Parms.SwitchGroupName = (struct FString)SwitchGroupName;
    Parms.SwitchName = (struct FString)SwitchName;
    Parms.TargetActor = (struct AActor*)TargetActor;
    Parms.ComponentName = (struct FString)ComponentName;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UAudioManager::IsSupportDolby()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AudioManager", "IsSupportDolby");
    struct
    {
        bool ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UAudioManager::IsStateAt(struct FString StateGroupName, struct FString StateName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AudioManager", "IsStateAt");
    struct
    {
        struct FString StateGroupName;
        struct FString StateName;
        bool ReturnValue;
    } Parms{};
    Parms.StateGroupName = (struct FString)StateGroupName;
    Parms.StateName = (struct FString)StateName;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UAudioManager::IsPlayingIDActiveByName(struct FString EventName, int32_t PlayingID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AudioManager", "IsPlayingIDActiveByName");
    struct
    {
        struct FString EventName;
        int32_t PlayingID;
        bool ReturnValue;
    } Parms{};
    Parms.EventName = (struct FString)EventName;
    Parms.PlayingID = (int32_t)PlayingID;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UAudioManager::IsPlayingIDActive(struct UAkAudioEvent* EventReference, int32_t PlayingID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AudioManager", "IsPlayingIDActive");
    struct
    {
        struct UAkAudioEvent* EventReference;
        int32_t PlayingID;
        bool ReturnValue;
    } Parms{};
    Parms.EventReference = (struct UAkAudioEvent*)EventReference;
    Parms.PlayingID = (int32_t)PlayingID;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UAudioManager::IsCharacterSpeakingVoice(struct AActor* Speaker)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AudioManager", "IsCharacterSpeakingVoice");
    struct
    {
        struct AActor* Speaker;
        bool ReturnValue;
    } Parms{};
    Parms.Speaker = (struct AActor*)Speaker;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UAudioManager::GetWwiseLevel()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AudioManager", "GetWwiseLevel");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UAudioManager::GetSourcePlayPosition(int32_t PlayingID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AudioManager", "GetSourcePlayPosition");
    struct
    {
        int32_t PlayingID;
        int32_t ReturnValue;
    } Parms{};
    Parms.PlayingID = (int32_t)PlayingID;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UAudioManager::GetRTPCValue(struct FString ParameterName, struct AActor* Emitter, struct FString ComponentName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AudioManager", "GetRTPCValue");
    struct
    {
        struct FString ParameterName;
        struct AActor* Emitter;
        struct FString ComponentName;
        float ReturnValue;
    } Parms{};
    Parms.ParameterName = (struct FString)ParameterName;
    Parms.Emitter = (struct AActor*)Emitter;
    Parms.ComponentName = (struct FString)ComponentName;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UAudioManager::GetBluetoothState()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AudioManager", "GetBluetoothState");
    struct
    {
        bool ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UAudioManager::GetBankCountByName(struct FString BankName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AudioManager", "GetBankCountByName");
    struct
    {
        struct FString BankName;
        int32_t ReturnValue;
    } Parms{};
    Parms.BankName = (struct FString)BankName;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UAudioManager::ForcedUnLoadAllBanks()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AudioManager", "ForcedUnLoadAllBanks");
    struct
    {
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UAudioManager::BreakSoundByName(struct FString EventName, struct AActor* Emitter, struct FString ComponentName, int32_t PlayingID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AudioManager", "BreakSoundByName");
    struct
    {
        struct FString EventName;
        struct AActor* Emitter;
        struct FString ComponentName;
        int32_t PlayingID;
    } Parms{};
    Parms.EventName = (struct FString)EventName;
    Parms.Emitter = (struct AActor*)Emitter;
    Parms.ComponentName = (struct FString)ComponentName;
    Parms.PlayingID = (int32_t)PlayingID;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UAudioManager::BreakSound(struct UAkAudioEvent* EventReference, struct AActor* Emitter, struct FString ComponentName, int32_t PlayingID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AudioManager", "BreakSound");
    struct
    {
        struct UAkAudioEvent* EventReference;
        struct AActor* Emitter;
        struct FString ComponentName;
        int32_t PlayingID;
    } Parms{};
    Parms.EventReference = (struct UAkAudioEvent*)EventReference;
    Parms.Emitter = (struct AActor*)Emitter;
    Parms.ComponentName = (struct FString)ComponentName;
    Parms.PlayingID = (int32_t)PlayingID;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UAudioManager::AddWwiseEventStopDelegateByName(struct FString in_EventName, int32_t PlayingID, struct UObject* Obj, const struct FName& FunName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AudioManager", "AddWwiseEventStopDelegateByName");
    struct
    {
        struct FString in_EventName;
        int32_t PlayingID;
        struct UObject* Obj;
        struct FName FunName;
    } Parms{};
    Parms.in_EventName = (struct FString)in_EventName;
    Parms.PlayingID = (int32_t)PlayingID;
    Parms.Obj = (struct UObject*)Obj;
    Parms.FunName = (struct FName)FunName;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UAudioManager::AddWwiseEventStopDelegateByDelegate(struct FString in_EventName, int32_t PlayingID, struct FDelegate WwiseEventStopDelegate)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AudioManager", "AddWwiseEventStopDelegateByDelegate");
    struct
    {
        struct FString in_EventName;
        int32_t PlayingID;
        struct FDelegate WwiseEventStopDelegate;
    } Parms{};
    Parms.in_EventName = (struct FString)in_EventName;
    Parms.PlayingID = (int32_t)PlayingID;
    Parms.WwiseEventStopDelegate = (struct FDelegate)WwiseEventStopDelegate;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

// UAudioProfileInfoManager
void UAudioProfileInfoManager::UnRegister()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AudioProfileInfoManager", "UnRegister");
    struct
    {
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UAudioProfileInfoManager::StartAvgRecord()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AudioProfileInfoManager", "StartAvgRecord");
    struct
    {
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UAudioProfileInfoManager::SetShowSplineSoundOpen(bool Value)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AudioProfileInfoManager", "SetShowSplineSoundOpen");
    struct
    {
        bool Value;
    } Parms{};
    Parms.Value = (bool)Value;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UAudioProfileInfoManager::SetShowSpatialVolumeOpen(bool Value)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AudioProfileInfoManager", "SetShowSpatialVolumeOpen");
    struct
    {
        bool Value;
    } Parms{};
    Parms.Value = (bool)Value;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UAudioProfileInfoManager::SetShowEmitHintOpen(bool Value)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AudioProfileInfoManager", "SetShowEmitHintOpen");
    struct
    {
        bool Value;
    } Parms{};
    Parms.Value = (bool)Value;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UAudioProfileInfoManager::SetReverbOpen(bool Value)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AudioProfileInfoManager", "SetReverbOpen");
    struct
    {
        bool Value;
    } Parms{};
    Parms.Value = (bool)Value;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UAudioProfileInfoManager::SetOBOCOpen(bool Value)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AudioProfileInfoManager", "SetOBOCOpen");
    struct
    {
        bool Value;
    } Parms{};
    Parms.Value = (bool)Value;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UAudioProfileInfoManager::Register()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AudioProfileInfoManager", "Register");
    struct
    {
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UAudioProfileInfoManager::PTStopWwiseEventByName(struct FString EventName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AudioProfileInfoManager", "PTStopWwiseEventByName");
    struct
    {
        struct FString EventName;
    } Parms{};
    Parms.EventName = (struct FString)EventName;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UAudioProfileInfoManager::PTPostWwiseEventByName(struct FString EventName, int32_t Count)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AudioProfileInfoManager", "PTPostWwiseEventByName");
    struct
    {
        struct FString EventName;
        int32_t Count;
    } Parms{};
    Parms.EventName = (struct FString)EventName;
    Parms.Count = (int32_t)Count;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

struct FAudioStudioProfileData UAudioProfileInfoManager::GetLastAudioDebugInfo()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AudioProfileInfoManager", "GetLastAudioDebugInfo");
    struct
    {
        struct FAudioStudioProfileData ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FAudioStudioProfileData UAudioProfileInfoManager::GetAverageAvgAudioDebugInfo(bool clearEvents)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AudioProfileInfoManager", "GetAverageAvgAudioDebugInfo");
    struct
    {
        bool clearEvents;
        struct FAudioStudioProfileData ReturnValue;
    } Parms{};
    Parms.clearEvents = (bool)clearEvents;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FAudioStudioProfileData UAudioProfileInfoManager::GetAverageAudioDebugInfo(bool clearEvents)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AudioProfileInfoManager", "GetAverageAudioDebugInfo");
    struct
    {
        bool clearEvents;
        struct FAudioStudioProfileData ReturnValue;
    } Parms{};
    Parms.clearEvents = (bool)clearEvents;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FAudioConsoleMessage UAudioProfileInfoManager::GetAudioEventMsg(int32_t Index)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AudioProfileInfoManager", "GetAudioEventMsg");
    struct
    {
        int32_t Index;
        struct FAudioConsoleMessage ReturnValue;
    } Parms{};
    Parms.Index = (int32_t)Index;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UAudioProfileInfoManager::GetAudioEventCount()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AudioProfileInfoManager", "GetAudioEventCount");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UAudioProfileInfoManager::EndAvgRecord()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AudioProfileInfoManager", "EndAvgRecord");
    struct
    {
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UAudioProfileInfoManager::DebugEmitHintAnim()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AudioProfileInfoManager", "DebugEmitHintAnim");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UAudioProfileInfoManager::ClearAudioEventMsg()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AudioProfileInfoManager", "ClearAudioEventMsg");
    struct
    {
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UAudioProfileInfoManager::AddEmitHintIgnoreEvent(struct FString ignoreEvent)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AudioProfileInfoManager", "AddEmitHintIgnoreEvent");
    struct
    {
        struct FString ignoreEvent;
    } Parms{};
    Parms.ignoreEvent = (struct FString)ignoreEvent;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

// UAudioStudioComponent
void UAudioStudioComponent::OnDeactivate(struct UActorComponent* Component)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AudioStudioComponent", "OnDeactivate");
    struct
    {
        struct UActorComponent* Component;
    } Parms{};
    Parms.Component = (struct UActorComponent*)Component;
    this->ProcessEvent(Func, &Parms);
}

void UAudioStudioComponent::OnActivate(struct UActorComponent* Component, bool bReset)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AudioStudioComponent", "OnActivate");
    struct
    {
        struct UActorComponent* Component;
        bool bReset;
    } Parms{};
    Parms.Component = (struct UActorComponent*)Component;
    Parms.bReset = (bool)bReset;
    this->ProcessEvent(Func, &Parms);
}

void UAudioStudioComponent::DeactivateSoundData()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AudioStudioComponent", "DeactivateSoundData");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UAudioStudioComponent::ActivateSoundData()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AudioStudioComponent", "ActivateSoundData");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// UAudioStudioSettings
bool UAudioStudioSettings::UnloadLevelAudioDataByName(struct FString LevelName, int64_t PlayModeID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AudioStudioSettings", "UnloadLevelAudioDataByName");
    struct
    {
        struct FString LevelName;
        int64_t PlayModeID;
        bool ReturnValue;
    } Parms{};
    Parms.LevelName = (struct FString)LevelName;
    Parms.PlayModeID = (int64_t)PlayModeID;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UAudioStudioSettings::UnloadLevelAudioData(struct UWorld* World)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AudioStudioSettings", "UnloadLevelAudioData");
    struct
    {
        struct UWorld* World;
        bool ReturnValue;
    } Parms{};
    Parms.World = (struct UWorld*)World;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UAudioStudioSettings::ReInitAkAudioDevice()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AudioStudioSettings", "ReInitAkAudioDevice");
    struct
    {
        bool ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UAudioStudioSettings::LoadLevelAudioDataByName(struct FString LevelName, int64_t PlayModeID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AudioStudioSettings", "LoadLevelAudioDataByName");
    struct
    {
        struct FString LevelName;
        int64_t PlayModeID;
        bool ReturnValue;
    } Parms{};
    Parms.LevelName = (struct FString)LevelName;
    Parms.PlayModeID = (int64_t)PlayModeID;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UAudioStudioSettings::LoadLevelAudioData(struct UWorld* World)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AudioStudioSettings", "LoadLevelAudioData");
    struct
    {
        struct UWorld* World;
        bool ReturnValue;
    } Parms{};
    Parms.World = (struct UWorld*)World;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UAudioStudioSettings::LoadInitAudioData()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AudioStudioSettings", "LoadInitAudioData");
    struct
    {
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

struct TArray<struct FString> UAudioStudioSettings::GetBankReferencedLevels(struct FString BankName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AudioStudioSettings", "GetBankReferencedLevels");
    struct
    {
        struct FString BankName;
        struct TArray<struct FString> ReturnValue;
    } Parms{};
    Parms.BankName = (struct FString)BankName;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UEmitterListenerManager
struct FVector UEmitterListenerManager::GetListenerLocation(int32_t ListenerIndex)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("EmitterListenerManager", "GetListenerLocation");
    struct
    {
        int32_t ListenerIndex;
        struct FVector ReturnValue;
    } Parms{};
    Parms.ListenerIndex = (int32_t)ListenerIndex;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UEmitterListenerManager* UEmitterListenerManager::GetInstance(struct UObject* WorldContextObject)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("EmitterListenerManager", "GetInstance");
    struct
    {
        struct UObject* WorldContextObject;
        struct UEmitterListenerManager* ReturnValue;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UMultiSourceSoundComponent
void UMultiSourceSoundComponent::DeactivateSoundData()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MultiSourceSoundComponent", "DeactivateSoundData");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UMultiSourceSoundComponent::ActivateSoundData()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MultiSourceSoundComponent", "ActivateSoundData");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// AMyAudioDebugEmitHint
void AMyAudioDebugEmitHint::OnAudioDebugSpatialVolumeHintTrigger()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MyAudioDebugEmitHint", "OnAudioDebugSpatialVolumeHintTrigger");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AMyAudioDebugEmitHint::OnAudioDebugEmitHintTrigger()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MyAudioDebugEmitHint", "OnAudioDebugEmitHintTrigger");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// UParticleSoundComponent
void UParticleSoundComponent::OnParticleSpawn(struct FName EventName, float EmitterTime, struct FVector Location, struct FVector Velocity)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ParticleSoundComponent", "OnParticleSpawn");
    struct
    {
        struct FName EventName;
        float EmitterTime;
        struct FVector Location;
        struct FVector Velocity;
    } Parms{};
    Parms.EventName = (struct FName)EventName;
    Parms.EmitterTime = (float)EmitterTime;
    Parms.Location = (struct FVector)Location;
    Parms.Velocity = (struct FVector)Velocity;
    this->ProcessEvent(Func, &Parms);
}

void UParticleSoundComponent::OnParticleDeath(struct FName EventName, float EmitterTime, int32_t ParticleTime, struct FVector Location, struct FVector Velocity, struct FVector Direction)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ParticleSoundComponent", "OnParticleDeath");
    struct
    {
        struct FName EventName;
        float EmitterTime;
        int32_t ParticleTime;
        struct FVector Location;
        struct FVector Velocity;
        struct FVector Direction;
    } Parms{};
    Parms.EventName = (struct FName)EventName;
    Parms.EmitterTime = (float)EmitterTime;
    Parms.ParticleTime = (int32_t)ParticleTime;
    Parms.Location = (struct FVector)Location;
    Parms.Velocity = (struct FVector)Velocity;
    Parms.Direction = (struct FVector)Direction;
    this->ProcessEvent(Func, &Parms);
}

void UParticleSoundComponent::OnParticleCollide(struct FName EventName, float EmitterTime, int32_t ParticleTime, struct FVector Location, struct FVector Velocity, struct FVector Direction, struct FVector Normal, struct FName BoneName, struct UPhysicalMaterial* PhysMat)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ParticleSoundComponent", "OnParticleCollide");
    struct
    {
        struct FName EventName;
        float EmitterTime;
        int32_t ParticleTime;
        struct FVector Location;
        struct FVector Velocity;
        struct FVector Direction;
        struct FVector Normal;
        struct FName BoneName;
        struct UPhysicalMaterial* PhysMat;
    } Parms{};
    Parms.EventName = (struct FName)EventName;
    Parms.EmitterTime = (float)EmitterTime;
    Parms.ParticleTime = (int32_t)ParticleTime;
    Parms.Location = (struct FVector)Location;
    Parms.Velocity = (struct FVector)Velocity;
    Parms.Direction = (struct FVector)Direction;
    Parms.Normal = (struct FVector)Normal;
    Parms.BoneName = (struct FName)BoneName;
    Parms.PhysMat = (struct UPhysicalMaterial*)PhysMat;
    this->ProcessEvent(Func, &Parms);
}

void UParticleSoundComponent::OnParticleBurst(struct FName EventName, float EmitterTime, int32_t ParticleCount)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ParticleSoundComponent", "OnParticleBurst");
    struct
    {
        struct FName EventName;
        float EmitterTime;
        int32_t ParticleCount;
    } Parms{};
    Parms.EventName = (struct FName)EventName;
    Parms.EmitterTime = (float)EmitterTime;
    Parms.ParticleCount = (int32_t)ParticleCount;
    this->ProcessEvent(Func, &Parms);
}

// UPostEventAsync
struct UPostEventAsync* UPostEventAsync::PostEventAsync(struct UObject* WorldContextObject, struct UAkAudioEvent* AkEvent, struct AActor* Actor, int32_t CallbackMask, const struct FDelegate& PostEventCallback, const struct TArray<struct FAkExternalSourceInfo>& ExternalSources, bool bStopWhenAttachedToDestroyed)
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
        bool bStopWhenAttachedToDestroyed;
        struct UPostEventAsync* ReturnValue;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    Parms.AkEvent = (struct UAkAudioEvent*)AkEvent;
    Parms.Actor = (struct AActor*)Actor;
    Parms.CallbackMask = (int32_t)CallbackMask;
    Parms.PostEventCallback = (struct FDelegate)PostEventCallback;
    Parms.ExternalSources = (struct TArray<struct FAkExternalSourceInfo>)ExternalSources;
    Parms.bStopWhenAttachedToDestroyed = (bool)bStopWhenAttachedToDestroyed;
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

// USetSwitchComponent
void USetSwitchComponent::DeactivateSwitchOnOtherActor(struct AActor* Actor)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SetSwitchComponent", "DeactivateSwitchOnOtherActor");
    struct
    {
        struct AActor* Actor;
    } Parms{};
    Parms.Actor = (struct AActor*)Actor;
    this->ProcessEvent(Func, &Parms);
}

void USetSwitchComponent::ActivateSwitchOnOtherActor(struct AActor* Actor)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SetSwitchComponent", "ActivateSwitchOnOtherActor");
    struct
    {
        struct AActor* Actor;
    } Parms{};
    Parms.Actor = (struct AActor*)Actor;
    this->ProcessEvent(Func, &Parms);
}

// ASplineSound
void ASplineSound::SetInSamePlane()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SplineSound", "SetInSamePlane");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ASplineSound::ReversePointsOrder()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SplineSound", "ReversePointsOrder");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

bool ASplineSound::IsEmitterWithinRegion(struct FVector EmitterLocation)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SplineSound", "IsEmitterWithinRegion");
    struct
    {
        struct FVector EmitterLocation;
        bool ReturnValue;
    } Parms{};
    Parms.EmitterLocation = (struct FVector)EmitterLocation;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

} // namespace SDK
