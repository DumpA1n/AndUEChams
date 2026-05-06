#include "LevelSequence.hpp"
#include "Engine.hpp"
#include "MediaAssets.hpp"
#include "MovieScene.hpp"
#include <cstring> // memcpy for ArrayDim>1 param marshalling

namespace SDK
{

// ULevelSequence
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

struct UObject* ULevelSequence::CopyMetaData(struct UObject* InMetaData)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LevelSequence", "CopyMetaData");
    struct
    {
        struct UObject* InMetaData;
        struct UObject* ReturnValue;
    } Parms{};
    Parms.InMetaData = (struct UObject*)InMetaData;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// ALevelSequenceActor
void ALevelSequenceActor::ShowBurnin()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LevelSequenceActor", "ShowBurnin");
    struct
    {
    } Parms{};
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

void ALevelSequenceActor::SetReplicatePlayback(bool ReplicatePlayback)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LevelSequenceActor", "SetReplicatePlayback");
    struct
    {
        bool ReplicatePlayback;
    } Parms{};
    Parms.ReplicatePlayback = (bool)ReplicatePlayback;
    this->ProcessEvent(Func, &Parms);
}

void ALevelSequenceActor::SetBindingByTag(struct FName BindingTag, const struct TArray<struct AActor*>& Actors, bool bAllowBindingsFromAsset)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LevelSequenceActor", "SetBindingByTag");
    struct
    {
        struct FName BindingTag;
        struct TArray<struct AActor*> Actors;
        bool bAllowBindingsFromAsset;
    } Parms{};
    Parms.BindingTag = (struct FName)BindingTag;
    Parms.Actors = (struct TArray<struct AActor*>)Actors;
    Parms.bAllowBindingsFromAsset = (bool)bAllowBindingsFromAsset;
    this->ProcessEvent(Func, &Parms);
}

void ALevelSequenceActor::SetBinding(struct FMovieSceneObjectBindingID Binding, const struct TArray<struct AActor*>& Actors, bool bAllowBindingsFromAsset)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LevelSequenceActor", "SetBinding");
    struct
    {
        struct FMovieSceneObjectBindingID Binding;
        struct TArray<struct AActor*> Actors;
        bool bAllowBindingsFromAsset;
    } Parms{};
    Parms.Binding = (struct FMovieSceneObjectBindingID)Binding;
    Parms.Actors = (struct TArray<struct AActor*>)Actors;
    Parms.bAllowBindingsFromAsset = (bool)bAllowBindingsFromAsset;
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

void ALevelSequenceActor::AddBindingByTag(struct FName BindingTag, struct AActor* Actor, bool bAllowBindingsFromAsset)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LevelSequenceActor", "AddBindingByTag");
    struct
    {
        struct FName BindingTag;
        struct AActor* Actor;
        bool bAllowBindingsFromAsset;
    } Parms{};
    Parms.BindingTag = (struct FName)BindingTag;
    Parms.Actor = (struct AActor*)Actor;
    Parms.bAllowBindingsFromAsset = (bool)bAllowBindingsFromAsset;
    this->ProcessEvent(Func, &Parms);
}

void ALevelSequenceActor::AddBinding(struct FMovieSceneObjectBindingID Binding, struct AActor* Actor, bool bAllowBindingsFromAsset)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LevelSequenceActor", "AddBinding");
    struct
    {
        struct FMovieSceneObjectBindingID Binding;
        struct AActor* Actor;
        bool bAllowBindingsFromAsset;
    } Parms{};
    Parms.Binding = (struct FMovieSceneObjectBindingID)Binding;
    Parms.Actor = (struct AActor*)Actor;
    Parms.bAllowBindingsFromAsset = (bool)bAllowBindingsFromAsset;
    this->ProcessEvent(Func, &Parms);
}

// ULevelSequenceBurnInOptions
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

// ULevelSequenceBurnIn
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

// ULevelSequenceDirector
void ULevelSequenceDirector::OnCreated()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LevelSequenceDirector", "OnCreated");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// ULevelSequencePlayer
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

// ALevelSequenceMediaController
void ALevelSequenceMediaController::SynchronizeToServer(float DesyncThresholdSeconds)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LevelSequenceMediaController", "SynchronizeToServer");
    struct
    {
        float DesyncThresholdSeconds;
    } Parms{};
    Parms.DesyncThresholdSeconds = (float)DesyncThresholdSeconds;
    this->ProcessEvent(Func, &Parms);
}

void ALevelSequenceMediaController::Play()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LevelSequenceMediaController", "Play");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ALevelSequenceMediaController::OnRep_ServerStartTimeSeconds()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LevelSequenceMediaController", "OnRep_ServerStartTimeSeconds");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

struct ALevelSequenceActor* ALevelSequenceMediaController::GetSequence()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LevelSequenceMediaController", "GetSequence");
    struct
    {
        struct ALevelSequenceActor* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UMediaComponent* ALevelSequenceMediaController::GetMediaComponent()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LevelSequenceMediaController", "GetMediaComponent");
    struct
    {
        struct UMediaComponent* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

} // namespace SDK
