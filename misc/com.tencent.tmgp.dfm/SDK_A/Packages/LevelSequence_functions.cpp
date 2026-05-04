#include "LevelSequence.hpp"
#include "Engine.hpp"
#include "MovieScene.hpp"
#include <cstring> // memcpy for ArrayDim>1 param marshalling

namespace SDK
{

// ---- ALevelSequenceActor::* ----
void ALevelSequenceActor::ShowBurnin()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LevelSequenceActor", "ShowBurnin");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ALevelSequenceActor::SetSubSequenceCombination(const struct TSet<struct FString>& InState, uint8_t bImmediate)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LevelSequenceActor", "SetSubSequenceCombination");
    struct
    {
        struct TSet<struct FString> InState;
        uint8_t bImmediate;
    } Parms{};
    Parms.InState = (struct TSet<struct FString>)InState;
    Parms.bImmediate = (uint8_t)bImmediate;
    this->ProcessEvent(Func, &Parms);
}

void ALevelSequenceActor::SetSequence(struct ULevelSequence* InSequence)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LevelSequenceActor", "SetSequence");
    struct
    {
        struct ULevelSequence* InSequence;
    } Parms{};
    Parms.InSequence = (struct ULevelSequence*)InSequence;
    this->ProcessEvent(Func, &Parms);
}

void ALevelSequenceActor::SetReplicatePlayback(uint8_t ReplicatePlayback)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LevelSequenceActor", "SetReplicatePlayback");
    struct
    {
        uint8_t ReplicatePlayback;
    } Parms{};
    Parms.ReplicatePlayback = (uint8_t)ReplicatePlayback;
    this->ProcessEvent(Func, &Parms);
}

void ALevelSequenceActor::SetPriority(uint8_t InPriority)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LevelSequenceActor", "SetPriority");
    struct
    {
        uint8_t InPriority;
    } Parms{};
    Parms.InPriority = (uint8_t)InPriority;
    this->ProcessEvent(Func, &Parms);
}

void ALevelSequenceActor::SetEventReceivers(struct TArray<struct AActor*> AdditionalReceivers)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LevelSequenceActor", "SetEventReceivers");
    struct
    {
        struct TArray<struct AActor*> AdditionalReceivers;
    } Parms{};
    Parms.AdditionalReceivers = (struct TArray<struct AActor*>)AdditionalReceivers;
    this->ProcessEvent(Func, &Parms);
}

void ALevelSequenceActor::SetBindingByTag(struct FName BindingTag, const struct TArray<struct AActor*>& Actors, uint8_t bAllowBindingsFromAsset)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LevelSequenceActor", "SetBindingByTag");
    struct
    {
        struct FName BindingTag;
        struct TArray<struct AActor*> Actors;
        uint8_t bAllowBindingsFromAsset;
    } Parms{};
    Parms.BindingTag = (struct FName)BindingTag;
    Parms.Actors = (struct TArray<struct AActor*>)Actors;
    Parms.bAllowBindingsFromAsset = (uint8_t)bAllowBindingsFromAsset;
    this->ProcessEvent(Func, &Parms);
}

void ALevelSequenceActor::SetBinding(struct FMovieSceneObjectBindingID Binding, const struct TArray<struct AActor*>& Actors, uint8_t bAllowBindingsFromAsset)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LevelSequenceActor", "SetBinding");
    struct
    {
        struct FMovieSceneObjectBindingID Binding;
        struct TArray<struct AActor*> Actors;
        uint8_t bAllowBindingsFromAsset;
    } Parms{};
    Parms.Binding = (struct FMovieSceneObjectBindingID)Binding;
    Parms.Actors = (struct TArray<struct AActor*>)Actors;
    Parms.bAllowBindingsFromAsset = (uint8_t)bAllowBindingsFromAsset;
    this->ProcessEvent(Func, &Parms);
}

void ALevelSequenceActor::ResetBindings()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LevelSequenceActor", "ResetBindings");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ALevelSequenceActor::ResetBinding(struct FMovieSceneObjectBindingID Binding)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LevelSequenceActor", "ResetBinding");
    struct
    {
        struct FMovieSceneObjectBindingID Binding;
    } Parms{};
    Parms.Binding = (struct FMovieSceneObjectBindingID)Binding;
    this->ProcessEvent(Func, &Parms);
}

void ALevelSequenceActor::RemoveBindingByTag(struct FName Tag, struct AActor* Actor)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LevelSequenceActor", "RemoveBindingByTag");
    struct
    {
        struct FName Tag;
        struct AActor* Actor;
    } Parms{};
    Parms.Tag = (struct FName)Tag;
    Parms.Actor = (struct AActor*)Actor;
    this->ProcessEvent(Func, &Parms);
}

void ALevelSequenceActor::RemoveBinding(struct FMovieSceneObjectBindingID Binding, struct AActor* Actor)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LevelSequenceActor", "RemoveBinding");
    struct
    {
        struct FMovieSceneObjectBindingID Binding;
        struct AActor* Actor;
    } Parms{};
    Parms.Binding = (struct FMovieSceneObjectBindingID)Binding;
    Parms.Actor = (struct AActor*)Actor;
    this->ProcessEvent(Func, &Parms);
}

void ALevelSequenceActor::OnLevelSequenceLoaded__DelegateSignature()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LevelSequenceActor", "OnLevelSequenceLoaded__DelegateSignature");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

struct ULevelSequence* ALevelSequenceActor::LoadSequence()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LevelSequenceActor", "LoadSequence");
    struct
    {
        struct ULevelSequence* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void ALevelSequenceActor::HideBurnin()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LevelSequenceActor", "HideBurnin");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

struct ULevelSequencePlayer* ALevelSequenceActor::GetSequencePlayer()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LevelSequenceActor", "GetSequencePlayer");
    struct
    {
        struct ULevelSequencePlayer* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct ULevelSequence* ALevelSequenceActor::GetSequence()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LevelSequenceActor", "GetSequence");
    struct
    {
        struct ULevelSequence* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct TMap<struct FString, struct FSoftObjectPath> ALevelSequenceActor::GetPCSequencesUsedForSublevelSequenceVolume()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LevelSequenceActor", "GetPCSequencesUsedForSublevelSequenceVolume");
    struct
    {
        struct TMap<struct FString, struct FSoftObjectPath> ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct TMap<struct FString, struct FSoftObjectPath> ALevelSequenceActor::GetMobileSequencesUsedForSublevelSequenceVolume()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LevelSequenceActor", "GetMobileSequencesUsedForSublevelSequenceVolume");
    struct
    {
        struct TMap<struct FString, struct FSoftObjectPath> ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct TArray<struct FMovieSceneObjectBindingID> ALevelSequenceActor::FindNamedBindings(struct FName Tag)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LevelSequenceActor", "FindNamedBindings");
    struct
    {
        struct FName Tag;
        struct TArray<struct FMovieSceneObjectBindingID> ReturnValue;
    } Parms{};
    Parms.Tag = (struct FName)Tag;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FMovieSceneObjectBindingID ALevelSequenceActor::FindNamedBinding(struct FName Tag)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LevelSequenceActor", "FindNamedBinding");
    struct
    {
        struct FName Tag;
        struct FMovieSceneObjectBindingID ReturnValue;
    } Parms{};
    Parms.Tag = (struct FName)Tag;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void ALevelSequenceActor::ApplySubSequenceCombination(const struct TSet<struct FString>& InState, float InSeconds, const struct TArray<struct FString>& VolumeSequenceStates)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LevelSequenceActor", "ApplySubSequenceCombination");
    struct
    {
        struct TSet<struct FString> InState;
        float InSeconds;
        struct TArray<struct FString> VolumeSequenceStates;
    } Parms{};
    Parms.InState = (struct TSet<struct FString>)InState;
    Parms.InSeconds = (float)InSeconds;
    Parms.VolumeSequenceStates = (struct TArray<struct FString>)VolumeSequenceStates;
    this->ProcessEvent(Func, &Parms);
}

void ALevelSequenceActor::AddBindingByTag(struct FName BindingTag, struct AActor* Actor, uint8_t bAllowBindingsFromAsset)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LevelSequenceActor", "AddBindingByTag");
    struct
    {
        struct FName BindingTag;
        struct AActor* Actor;
        uint8_t bAllowBindingsFromAsset;
    } Parms{};
    Parms.BindingTag = (struct FName)BindingTag;
    Parms.Actor = (struct AActor*)Actor;
    Parms.bAllowBindingsFromAsset = (uint8_t)bAllowBindingsFromAsset;
    this->ProcessEvent(Func, &Parms);
}

void ALevelSequenceActor::AddBinding(struct FMovieSceneObjectBindingID Binding, struct AActor* Actor, uint8_t bAllowBindingsFromAsset)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LevelSequenceActor", "AddBinding");
    struct
    {
        struct FMovieSceneObjectBindingID Binding;
        struct AActor* Actor;
        uint8_t bAllowBindingsFromAsset;
    } Parms{};
    Parms.Binding = (struct FMovieSceneObjectBindingID)Binding;
    Parms.Actor = (struct AActor*)Actor;
    Parms.bAllowBindingsFromAsset = (uint8_t)bAllowBindingsFromAsset;
    this->ProcessEvent(Func, &Parms);
}

// ---- ULevelSequenceDirector::* ----
void ULevelSequenceDirector::OnCreated()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LevelSequenceDirector", "OnCreated");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// ---- UInteriorFogComponent::* ----
void UInteriorFogComponent::SetExtinctionScale(float NewExtinctionScale)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("InteriorFogComponent", "SetExtinctionScale");
    struct
    {
        float NewExtinctionScale;
    } Parms{};
    Parms.NewExtinctionScale = (float)NewExtinctionScale;
    this->ProcessEvent(Func, &Parms);
}

void UInteriorFogComponent::SetExtendVisibleDistance(float NewFadeDistance)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("InteriorFogComponent", "SetExtendVisibleDistance");
    struct
    {
        float NewFadeDistance;
    } Parms{};
    Parms.NewFadeDistance = (float)NewFadeDistance;
    this->ProcessEvent(Func, &Parms);
}

void UInteriorFogComponent::SetExcludeRange(float NewExcludeRange)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("InteriorFogComponent", "SetExcludeRange");
    struct
    {
        float NewExcludeRange;
    } Parms{};
    Parms.NewExcludeRange = (float)NewExcludeRange;
    this->ProcessEvent(Func, &Parms);
}

void UInteriorFogComponent::SetExcludeOpacity(float NewExcludeOpacity)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("InteriorFogComponent", "SetExcludeOpacity");
    struct
    {
        float NewExcludeOpacity;
    } Parms{};
    Parms.NewExcludeOpacity = (float)NewExcludeOpacity;
    this->ProcessEvent(Func, &Parms);
}

void UInteriorFogComponent::SetAlbedo(struct FLinearColor NewAlbedo)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("InteriorFogComponent", "SetAlbedo");
    struct
    {
        struct FLinearColor NewAlbedo;
    } Parms{};
    Parms.NewAlbedo = (struct FLinearColor)NewAlbedo;
    this->ProcessEvent(Func, &Parms);
}

// ---- ULevelSequence::* ----
void ULevelSequence::RemoveMetaDataByClass(struct UObject* InClass)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LevelSequence", "RemoveMetaDataByClass");
    struct
    {
        struct UObject* InClass;
    } Parms{};
    Parms.InClass = (struct UObject*)InClass;
    this->ProcessEvent(Func, &Parms);
}

struct UObject* ULevelSequence::FindOrAddMetaDataByClass(struct UObject* InClass)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LevelSequence", "FindOrAddMetaDataByClass");
    struct
    {
        struct UObject* InClass;
        struct UObject* ReturnValue;
    } Parms{};
    Parms.InClass = (struct UObject*)InClass;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UObject* ULevelSequence::FindMetaDataByClass(struct UObject* InClass)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LevelSequence", "FindMetaDataByClass");
    struct
    {
        struct UObject* InClass;
        struct UObject* ReturnValue;
    } Parms{};
    Parms.InClass = (struct UObject*)InClass;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UObject* ULevelSequence::CopyMetaData(struct UObject* InMetadata)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LevelSequence", "CopyMetaData");
    struct
    {
        struct UObject* InMetadata;
        struct UObject* ReturnValue;
    } Parms{};
    Parms.InMetadata = (struct UObject*)InMetadata;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// ---- ULevelSequenceBurnInOptions::* ----
void ULevelSequenceBurnInOptions::SetBurnIn(struct FSoftClassPath InBurnInClass)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LevelSequenceBurnInOptions", "SetBurnIn");
    struct
    {
        struct FSoftClassPath InBurnInClass;
    } Parms{};
    Parms.InBurnInClass = (struct FSoftClassPath)InBurnInClass;
    this->ProcessEvent(Func, &Parms);
}

// ---- ULevelSequenceBurnIn::* ----
void ULevelSequenceBurnIn::SetSettings(struct UObject* InSettings)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LevelSequenceBurnIn", "SetSettings");
    struct
    {
        struct UObject* InSettings;
    } Parms{};
    Parms.InSettings = (struct UObject*)InSettings;
    this->ProcessEvent(Func, &Parms);
}

struct ULevelSequenceBurnInInitSettings* ULevelSequenceBurnIn::GetSettingsClass()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LevelSequenceBurnIn", "GetSettingsClass");
    struct
    {
        struct ULevelSequenceBurnInInitSettings* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// ---- ULevelSequencePlayer::* ----
struct UCameraComponent* ULevelSequencePlayer::GetActiveCameraComponent()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LevelSequencePlayer", "GetActiveCameraComponent");
    struct
    {
        struct UCameraComponent* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct ULevelSequencePlayer* ULevelSequencePlayer::CreateLevelSequencePlayer(struct UObject* WorldContextObject, struct ULevelSequence* LevelSequence, struct FMovieSceneSequencePlaybackSettings Settings, struct ALevelSequenceActor*& OutActor)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("LevelSequencePlayer", "CreateLevelSequencePlayer");
    struct
    {
        struct UObject* WorldContextObject;
        struct ULevelSequence* LevelSequence;
        struct FMovieSceneSequencePlaybackSettings Settings;
        struct ALevelSequenceActor* OutActor;
        struct ULevelSequencePlayer* ReturnValue;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    Parms.LevelSequence = (struct ULevelSequence*)LevelSequence;
    Parms.Settings = (struct FMovieSceneSequencePlaybackSettings)Settings;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    OutActor = Parms.OutActor;
    return Parms.ReturnValue;
}

// ---- USubLevelSequenceVolume::* ----
void USubLevelSequenceVolume::SetVolumeSequence(struct FString SequenceNameInManager, struct FSoftObjectPath Path, int32_t Priority)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SubLevelSequenceVolume", "SetVolumeSequence");
    struct
    {
        struct FString SequenceNameInManager;
        struct FSoftObjectPath Path;
        int32_t Priority;
    } Parms{};
    Parms.SequenceNameInManager = (struct FString)SequenceNameInManager;
    Parms.Path = (struct FSoftObjectPath)Path;
    Parms.Priority = (int32_t)Priority;
    this->ProcessEvent(Func, &Parms);
}

void USubLevelSequenceVolume::SetGroupName(struct FString InGroupName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SubLevelSequenceVolume", "SetGroupName");
    struct
    {
        struct FString InGroupName;
    } Parms{};
    Parms.InGroupName = (struct FString)InGroupName;
    this->ProcessEvent(Func, &Parms);
}

} // namespace SDK
