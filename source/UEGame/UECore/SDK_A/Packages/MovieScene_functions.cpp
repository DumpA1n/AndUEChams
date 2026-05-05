#include "MovieScene.hpp"
#include "Engine.hpp"
#include <cstring> // memcpy for ArrayDim>1 param marshalling

namespace SDK
{

// UMovieSceneSection
void UMovieSceneSection::SetRowIndex(int32_t NewRowIndex)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MovieSceneSection", "SetRowIndex");
    struct
    {
        int32_t NewRowIndex;
    } Parms{};
    Parms.NewRowIndex = (int32_t)NewRowIndex;
    this->ProcessEvent(Func, &Parms);
}

void UMovieSceneSection::SetPreRollFrames(int32_t InPreRollFrames)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MovieSceneSection", "SetPreRollFrames");
    struct
    {
        int32_t InPreRollFrames;
    } Parms{};
    Parms.InPreRollFrames = (int32_t)InPreRollFrames;
    this->ProcessEvent(Func, &Parms);
}

void UMovieSceneSection::SetPostRollFrames(int32_t InPostRollFrames)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MovieSceneSection", "SetPostRollFrames");
    struct
    {
        int32_t InPostRollFrames;
    } Parms{};
    Parms.InPostRollFrames = (int32_t)InPostRollFrames;
    this->ProcessEvent(Func, &Parms);
}

void UMovieSceneSection::SetOverlapPriority(int32_t NewPriority)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MovieSceneSection", "SetOverlapPriority");
    struct
    {
        int32_t NewPriority;
    } Parms{};
    Parms.NewPriority = (int32_t)NewPriority;
    this->ProcessEvent(Func, &Parms);
}

void UMovieSceneSection::SetIsLocked(uint8_t bInIsLocked)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MovieSceneSection", "SetIsLocked");
    struct
    {
        uint8_t bInIsLocked;
    } Parms{};
    Parms.bInIsLocked = (uint8_t)bInIsLocked;
    this->ProcessEvent(Func, &Parms);
}

void UMovieSceneSection::SetIsActive(uint8_t bInIsActive)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MovieSceneSection", "SetIsActive");
    struct
    {
        uint8_t bInIsActive;
    } Parms{};
    Parms.bInIsActive = (uint8_t)bInIsActive;
    this->ProcessEvent(Func, &Parms);
}

void UMovieSceneSection::SetCompletionMode(EMovieSceneCompletionMode InCompletionMode)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MovieSceneSection", "SetCompletionMode");
    struct
    {
        enum EMovieSceneCompletionMode InCompletionMode;
    } Parms{};
    Parms.InCompletionMode = (enum EMovieSceneCompletionMode)InCompletionMode;
    this->ProcessEvent(Func, &Parms);
}

void UMovieSceneSection::SetBlendType(EMovieSceneBlendType InBlendType)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MovieSceneSection", "SetBlendType");
    struct
    {
        enum EMovieSceneBlendType InBlendType;
    } Parms{};
    Parms.InBlendType = (enum EMovieSceneBlendType)InBlendType;
    this->ProcessEvent(Func, &Parms);
}

uint8_t UMovieSceneSection::IsLocked()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MovieSceneSection", "IsLocked");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UMovieSceneSection::IsActive()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MovieSceneSection", "IsActive");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UMovieSceneSection::GetRowIndex()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MovieSceneSection", "GetRowIndex");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UMovieSceneSection::GetPreRollFrames()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MovieSceneSection", "GetPreRollFrames");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UMovieSceneSection::GetPostRollFrames()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MovieSceneSection", "GetPostRollFrames");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UMovieSceneSection::GetOverlapPriority()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MovieSceneSection", "GetOverlapPriority");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

EMovieSceneCompletionMode UMovieSceneSection::GetCompletionMode()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MovieSceneSection", "GetCompletionMode");
    struct
    {
        enum EMovieSceneCompletionMode ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FOptionalMovieSceneBlendType UMovieSceneSection::GetBlendType()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MovieSceneSection", "GetBlendType");
    struct
    {
        struct FOptionalMovieSceneBlendType ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UMovieSceneSequence
void UMovieSceneSequence::UnbindPossessableObjects(const struct FGuid& ObjectId)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MovieSceneSequence", "UnbindPossessableObjects");
    struct
    {
        struct FGuid ObjectId;
    } Parms{};
    Parms.ObjectId = (struct FGuid)ObjectId;
    this->ProcessEvent(Func, &Parms);
}

void UMovieSceneSequence::UnbindObjects(const struct FGuid& ObjectId, const struct TArray<struct UObject*>& InObjects, struct UObject* Context)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MovieSceneSequence", "UnbindObjects");
    struct
    {
        struct FGuid ObjectId;
        struct TArray<struct UObject*> InObjects;
        struct UObject* Context;
    } Parms{};
    Parms.ObjectId = (struct FGuid)ObjectId;
    Parms.InObjects = (struct TArray<struct UObject*>)InObjects;
    Parms.Context = (struct UObject*)Context;
    this->ProcessEvent(Func, &Parms);
}

void UMovieSceneSequence::UnbindInvalidObjects(const struct FGuid& ObjectId, struct UObject* Context)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MovieSceneSequence", "UnbindInvalidObjects");
    struct
    {
        struct FGuid ObjectId;
        struct UObject* Context;
    } Parms{};
    Parms.ObjectId = (struct FGuid)ObjectId;
    Parms.Context = (struct UObject*)Context;
    this->ProcessEvent(Func, &Parms);
}

struct UObject* UMovieSceneSequence::GetParentObject(struct UObject* Object)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MovieSceneSequence", "GetParentObject");
    struct
    {
        struct UObject* Object;
        struct UObject* ReturnValue;
    } Parms{};
    Parms.Object = (struct UObject*)Object;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UMovieScene* UMovieSceneSequence::GetMovieScene()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MovieSceneSequence", "GetMovieScene");
    struct
    {
        struct UMovieScene* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct TArray<struct FMovieSceneObjectBindingID> UMovieSceneSequence::FindBindingsByTag(struct FName InBindingName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MovieSceneSequence", "FindBindingsByTag");
    struct
    {
        struct FName InBindingName;
        struct TArray<struct FMovieSceneObjectBindingID> ReturnValue;
    } Parms{};
    Parms.InBindingName = (struct FName)InBindingName;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FMovieSceneObjectBindingID UMovieSceneSequence::FindBindingByTag(struct FName InBindingName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MovieSceneSequence", "FindBindingByTag");
    struct
    {
        struct FName InBindingName;
        struct FMovieSceneObjectBindingID ReturnValue;
    } Parms{};
    Parms.InBindingName = (struct FName)InBindingName;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FGuid UMovieSceneSequence::CreateSpawnable(struct UObject* ObjectToSpawn)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MovieSceneSequence", "CreateSpawnable");
    struct
    {
        struct UObject* ObjectToSpawn;
        struct FGuid ReturnValue;
    } Parms{};
    Parms.ObjectToSpawn = (struct UObject*)ObjectToSpawn;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FGuid UMovieSceneSequence::CreatePossessable(struct UObject* ObjectToPossess)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MovieSceneSequence", "CreatePossessable");
    struct
    {
        struct UObject* ObjectToPossess;
        struct FGuid ReturnValue;
    } Parms{};
    Parms.ObjectToPossess = (struct UObject*)ObjectToPossess;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UMovieSceneSequence::CanRebindPossessable(const struct FMovieScenePossessable& InPossessable)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MovieSceneSequence", "CanRebindPossessable");
    struct
    {
        struct FMovieScenePossessable InPossessable;
        uint8_t ReturnValue;
    } Parms{};
    Parms.InPossessable = (struct FMovieScenePossessable)InPossessable;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UMovieSceneSequence::AllowsSpawnableObjects()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MovieSceneSequence", "AllowsSpawnableObjects");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UMovieSceneSequencePlayer
void UMovieSceneSequencePlayer::UpdateTimeCursorPosition(struct FFrameTime NewPosition, EUpdatePositionMethod Method)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MovieSceneSequencePlayer", "UpdateTimeCursorPosition");
    struct
    {
        struct FFrameTime NewPosition;
        enum EUpdatePositionMethod Method;
    } Parms{};
    Parms.NewPosition = (struct FFrameTime)NewPosition;
    Parms.Method = (enum EUpdatePositionMethod)Method;
    this->ProcessEvent(Func, &Parms);
}

void UMovieSceneSequencePlayer::UpdateMovieSceneInstanceOuter()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MovieSceneSequencePlayer", "UpdateMovieSceneInstanceOuter");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UMovieSceneSequencePlayer::Update(float DeltaSeconds)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MovieSceneSequencePlayer", "Update");
    struct
    {
        float DeltaSeconds;
    } Parms{};
    Parms.DeltaSeconds = (float)DeltaSeconds;
    this->ProcessEvent(Func, &Parms);
}

void UMovieSceneSequencePlayer::StopInternal(struct FFrameTime TimeToResetTo)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MovieSceneSequencePlayer", "StopInternal");
    struct
    {
        struct FFrameTime TimeToResetTo;
    } Parms{};
    Parms.TimeToResetTo = (struct FFrameTime)TimeToResetTo;
    this->ProcessEvent(Func, &Parms);
}

void UMovieSceneSequencePlayer::StopAtCurrentTime()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MovieSceneSequencePlayer", "StopAtCurrentTime");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UMovieSceneSequencePlayer::Stop()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MovieSceneSequencePlayer", "Stop");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

uint8_t UMovieSceneSequencePlayer::ShouldStopOrLoop(struct FFrameTime NewPosition)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MovieSceneSequencePlayer", "ShouldStopOrLoop");
    struct
    {
        struct FFrameTime NewPosition;
        uint8_t ReturnValue;
    } Parms{};
    Parms.NewPosition = (struct FFrameTime)NewPosition;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UMovieSceneSequencePlayer::SetTimeRange(float StartTime, float Duration)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MovieSceneSequencePlayer", "SetTimeRange");
    struct
    {
        float StartTime;
        float Duration;
    } Parms{};
    Parms.StartTime = (float)StartTime;
    Parms.Duration = (float)Duration;
    this->ProcessEvent(Func, &Parms);
}

void UMovieSceneSequencePlayer::SetPlayRate(float PlayRate)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MovieSceneSequencePlayer", "SetPlayRate");
    struct
    {
        float PlayRate;
    } Parms{};
    Parms.PlayRate = (float)PlayRate;
    this->ProcessEvent(Func, &Parms);
}

void UMovieSceneSequencePlayer::SetPlayPosition(uint32_t InFrameTime)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MovieSceneSequencePlayer", "SetPlayPosition");
    struct
    {
        uint32_t InFrameTime;
    } Parms{};
    Parms.InFrameTime = (uint32_t)InFrameTime;
    this->ProcessEvent(Func, &Parms);
}

void UMovieSceneSequencePlayer::SetPlaybackRange(float NewStartTime, float NewEndTime)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MovieSceneSequencePlayer", "SetPlaybackRange");
    struct
    {
        float NewStartTime;
        float NewEndTime;
    } Parms{};
    Parms.NewStartTime = (float)NewStartTime;
    Parms.NewEndTime = (float)NewEndTime;
    this->ProcessEvent(Func, &Parms);
}

void UMovieSceneSequencePlayer::SetPlaybackPosition(float NewPlaybackPosition)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MovieSceneSequencePlayer", "SetPlaybackPosition");
    struct
    {
        float NewPlaybackPosition;
    } Parms{};
    Parms.NewPlaybackPosition = (float)NewPlaybackPosition;
    this->ProcessEvent(Func, &Parms);
}

void UMovieSceneSequencePlayer::SetPlaybackClient(struct TScriptInterface<IMovieScenePlaybackClient> InPlaybackClient)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MovieSceneSequencePlayer", "SetPlaybackClient");
    struct
    {
        struct TScriptInterface<IMovieScenePlaybackClient> InPlaybackClient;
    } Parms{};
    Parms.InPlaybackClient = (struct TScriptInterface<IMovieScenePlaybackClient>)InPlaybackClient;
    this->ProcessEvent(Func, &Parms);
}

void UMovieSceneSequencePlayer::SetFrameRate(struct FFrameRate FrameRate)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MovieSceneSequencePlayer", "SetFrameRate");
    struct
    {
        struct FFrameRate FrameRate;
    } Parms{};
    Parms.FrameRate = (struct FFrameRate)FrameRate;
    this->ProcessEvent(Func, &Parms);
}

void UMovieSceneSequencePlayer::SetFrameRange(int32_t StartFrame, int32_t Duration)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MovieSceneSequencePlayer", "SetFrameRange");
    struct
    {
        int32_t StartFrame;
        int32_t Duration;
    } Parms{};
    Parms.StartFrame = (int32_t)StartFrame;
    Parms.Duration = (int32_t)Duration;
    this->ProcessEvent(Func, &Parms);
}

void UMovieSceneSequencePlayer::SetDisableCameraCuts(uint8_t bInDisableCameraCuts)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MovieSceneSequencePlayer", "SetDisableCameraCuts");
    struct
    {
        uint8_t bInDisableCameraCuts;
    } Parms{};
    Parms.bInDisableCameraCuts = (uint8_t)bInDisableCameraCuts;
    this->ProcessEvent(Func, &Parms);
}

void UMovieSceneSequencePlayer::ScrubToSeconds(float TimeInSeconds)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MovieSceneSequencePlayer", "ScrubToSeconds");
    struct
    {
        float TimeInSeconds;
    } Parms{};
    Parms.TimeInSeconds = (float)TimeInSeconds;
    this->ProcessEvent(Func, &Parms);
}

uint8_t UMovieSceneSequencePlayer::ScrubToMarkedFrame(struct FString InLabel)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MovieSceneSequencePlayer", "ScrubToMarkedFrame");
    struct
    {
        struct FString InLabel;
        uint8_t ReturnValue;
    } Parms{};
    Parms.InLabel = (struct FString)InLabel;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UMovieSceneSequencePlayer::ScrubToFrame(struct FFrameTime NewPosition)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MovieSceneSequencePlayer", "ScrubToFrame");
    struct
    {
        struct FFrameTime NewPosition;
    } Parms{};
    Parms.NewPosition = (struct FFrameTime)NewPosition;
    this->ProcessEvent(Func, &Parms);
}

void UMovieSceneSequencePlayer::Scrub()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MovieSceneSequencePlayer", "Scrub");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UMovieSceneSequencePlayer::RPC_OnStopEvent(struct FFrameTime StoppedTime)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MovieSceneSequencePlayer", "RPC_OnStopEvent");
    struct
    {
        struct FFrameTime StoppedTime;
    } Parms{};
    Parms.StoppedTime = (struct FFrameTime)StoppedTime;
    this->ProcessEvent(Func, &Parms);
}

void UMovieSceneSequencePlayer::RPC_ExplicitServerUpdateEvent(EUpdatePositionMethod Method, struct FFrameTime RelevantTime)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MovieSceneSequencePlayer", "RPC_ExplicitServerUpdateEvent");
    struct
    {
        enum EUpdatePositionMethod Method;
        struct FFrameTime RelevantTime;
    } Parms{};
    Parms.Method = (enum EUpdatePositionMethod)Method;
    Parms.RelevantTime = (struct FFrameTime)RelevantTime;
    this->ProcessEvent(Func, &Parms);
}

void UMovieSceneSequencePlayer::PlayToSeconds(float TimeInSeconds)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MovieSceneSequencePlayer", "PlayToSeconds");
    struct
    {
        float TimeInSeconds;
    } Parms{};
    Parms.TimeInSeconds = (float)TimeInSeconds;
    this->ProcessEvent(Func, &Parms);
}

uint8_t UMovieSceneSequencePlayer::PlayToMarkedFrame(struct FString InLabel)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MovieSceneSequencePlayer", "PlayToMarkedFrame");
    struct
    {
        struct FString InLabel;
        uint8_t ReturnValue;
    } Parms{};
    Parms.InLabel = (struct FString)InLabel;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UMovieSceneSequencePlayer::PlayToFrame(struct FFrameTime NewPosition)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MovieSceneSequencePlayer", "PlayToFrame");
    struct
    {
        struct FFrameTime NewPosition;
    } Parms{};
    Parms.NewPosition = (struct FFrameTime)NewPosition;
    this->ProcessEvent(Func, &Parms);
}

void UMovieSceneSequencePlayer::PlayReverse()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MovieSceneSequencePlayer", "PlayReverse");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UMovieSceneSequencePlayer::PlayLooping(int32_t NumLoops)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MovieSceneSequencePlayer", "PlayLooping");
    struct
    {
        int32_t NumLoops;
    } Parms{};
    Parms.NumLoops = (int32_t)NumLoops;
    this->ProcessEvent(Func, &Parms);
}

void UMovieSceneSequencePlayer::PlayInternal()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MovieSceneSequencePlayer", "PlayInternal");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UMovieSceneSequencePlayer::Play()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MovieSceneSequencePlayer", "Play");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UMovieSceneSequencePlayer::Pause()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MovieSceneSequencePlayer", "Pause");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UMovieSceneSequencePlayer::JumpToSeconds(float TimeInSeconds)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MovieSceneSequencePlayer", "JumpToSeconds");
    struct
    {
        float TimeInSeconds;
    } Parms{};
    Parms.TimeInSeconds = (float)TimeInSeconds;
    this->ProcessEvent(Func, &Parms);
}

void UMovieSceneSequencePlayer::JumpToPosition(float NewPlaybackPosition)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MovieSceneSequencePlayer", "JumpToPosition");
    struct
    {
        float NewPlaybackPosition;
    } Parms{};
    Parms.NewPlaybackPosition = (float)NewPlaybackPosition;
    this->ProcessEvent(Func, &Parms);
}

uint8_t UMovieSceneSequencePlayer::JumpToMarkedFrame(struct FString InLabel)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MovieSceneSequencePlayer", "JumpToMarkedFrame");
    struct
    {
        struct FString InLabel;
        uint8_t ReturnValue;
    } Parms{};
    Parms.InLabel = (struct FString)InLabel;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UMovieSceneSequencePlayer::JumpToFrame(struct FFrameTime NewPosition)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MovieSceneSequencePlayer", "JumpToFrame");
    struct
    {
        struct FFrameTime NewPosition;
    } Parms{};
    Parms.NewPosition = (struct FFrameTime)NewPosition;
    this->ProcessEvent(Func, &Parms);
}

uint8_t UMovieSceneSequencePlayer::IsReversed()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MovieSceneSequencePlayer", "IsReversed");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UMovieSceneSequencePlayer::IsPlaying()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MovieSceneSequencePlayer", "IsPlaying");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UMovieSceneSequencePlayer::IsPaused()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MovieSceneSequencePlayer", "IsPaused");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UMovieSceneSequencePlayer::Initialize(struct UMovieSceneSequence* InSequence, const struct FMovieSceneSequencePlaybackSettings& InSettings)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MovieSceneSequencePlayer", "Initialize");
    struct
    {
        struct UMovieSceneSequence* InSequence;
        struct FMovieSceneSequencePlaybackSettings InSettings;
    } Parms{};
    Parms.InSequence = (struct UMovieSceneSequence*)InSequence;
    Parms.InSettings = (struct FMovieSceneSequencePlaybackSettings)InSettings;
    this->ProcessEvent(Func, &Parms);
}

void UMovieSceneSequencePlayer::GoToEndAndStop()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MovieSceneSequencePlayer", "GoToEndAndStop");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

struct FQualifiedFrameTime UMovieSceneSequencePlayer::GetStartTime()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MovieSceneSequencePlayer", "GetStartTime");
    struct
    {
        struct FQualifiedFrameTime ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UMovieSceneSequence* UMovieSceneSequencePlayer::GetSequence()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MovieSceneSequencePlayer", "GetSequence");
    struct
    {
        struct UMovieSceneSequence* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UMovieSceneSequencePlayer::GetPlayRate()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MovieSceneSequencePlayer", "GetPlayRate");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UWorld* UMovieSceneSequencePlayer::GetPlaybackWorld()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MovieSceneSequencePlayer", "GetPlaybackWorld");
    struct
    {
        struct UWorld* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UMovieSceneSequencePlayer::GetPlaybackStart()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MovieSceneSequencePlayer", "GetPlaybackStart");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UMovieSceneSequencePlayer::GetPlaybackPosition()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MovieSceneSequencePlayer", "GetPlaybackPosition");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UMovieSceneSequencePlayer::GetPlaybackEnd()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MovieSceneSequencePlayer", "GetPlaybackEnd");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct TArray<struct FMovieSceneObjectBindingID> UMovieSceneSequencePlayer::GetObjectBindings(struct UObject* InObject)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MovieSceneSequencePlayer", "GetObjectBindings");
    struct
    {
        struct UObject* InObject;
        struct TArray<struct FMovieSceneObjectBindingID> ReturnValue;
    } Parms{};
    Parms.InObject = (struct UObject*)InObject;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UMovieScene* UMovieSceneSequencePlayer::GetMovieScene()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MovieSceneSequencePlayer", "GetMovieScene");
    struct
    {
        struct UMovieScene* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UMovieSceneSequencePlayer::GetLength()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MovieSceneSequencePlayer", "GetLength");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FFrameTime UMovieSceneSequencePlayer::GetLastValidTime()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MovieSceneSequencePlayer", "GetLastValidTime");
    struct
    {
        struct FFrameTime ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FFrameRate UMovieSceneSequencePlayer::GetFrameRate()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MovieSceneSequencePlayer", "GetFrameRate");
    struct
    {
        struct FFrameRate ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UMovieSceneSequencePlayer::GetFrameDuration()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MovieSceneSequencePlayer", "GetFrameDuration");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FQualifiedFrameTime UMovieSceneSequencePlayer::GetEndTime()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MovieSceneSequencePlayer", "GetEndTime");
    struct
    {
        struct FQualifiedFrameTime ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FQualifiedFrameTime UMovieSceneSequencePlayer::GetDuration()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MovieSceneSequencePlayer", "GetDuration");
    struct
    {
        struct FQualifiedFrameTime ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UMovieSceneSequencePlayer::GetDisableCameraCuts()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MovieSceneSequencePlayer", "GetDisableCameraCuts");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FQualifiedFrameTime UMovieSceneSequencePlayer::GetCurrentTime()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MovieSceneSequencePlayer", "GetCurrentTime");
    struct
    {
        struct FQualifiedFrameTime ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct TArray<struct UObject*> UMovieSceneSequencePlayer::GetBoundObjects(struct FMovieSceneObjectBindingID ObjectBinding)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MovieSceneSequencePlayer", "GetBoundObjects");
    struct
    {
        struct FMovieSceneObjectBindingID ObjectBinding;
        struct TArray<struct UObject*> ReturnValue;
    } Parms{};
    Parms.ObjectBinding = (struct FMovieSceneObjectBindingID)ObjectBinding;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UMovieSceneSequencePlayer::GetAllBoundObjects(struct TArray<struct UObject*>& OutObjects)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MovieSceneSequencePlayer", "GetAllBoundObjects");
    struct
    {
        struct TArray<struct UObject*> OutObjects;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    OutObjects = Parms.OutObjects;
}

int32_t UMovieSceneSequencePlayer::FindMarkedFrameByLabel(struct FString InLabel)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MovieSceneSequencePlayer", "FindMarkedFrameByLabel");
    struct
    {
        struct FString InLabel;
        int32_t ReturnValue;
    } Parms{};
    Parms.InLabel = (struct FString)InLabel;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UMovieSceneSequencePlayer::ChangePlaybackDirection()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MovieSceneSequencePlayer", "ChangePlaybackDirection");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// IMovieSceneEasingFunction
float IMovieSceneEasingFunction::OnEvaluate(float Interp)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MovieSceneEasingFunction", "OnEvaluate");
    struct
    {
        float Interp;
        float ReturnValue;
    } Parms{};
    Parms.Interp = (float)Interp;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UMovieSceneSubSection
void UMovieSceneSubSection::SetSequence(struct UMovieSceneSequence* Sequence)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MovieSceneSubSection", "SetSequence");
    struct
    {
        struct UMovieSceneSequence* Sequence;
    } Parms{};
    Parms.Sequence = (struct UMovieSceneSequence*)Sequence;
    this->ProcessEvent(Func, &Parms);
}

struct UMovieSceneSequence* UMovieSceneSubSection::GetSequence()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MovieSceneSubSection", "GetSequence");
    struct
    {
        struct UMovieSceneSequence* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

} // namespace SDK
