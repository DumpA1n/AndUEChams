#include "MovieScene.hpp"
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

void UMovieSceneSection::SetIsLocked(bool bInIsLocked)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MovieSceneSection", "SetIsLocked");
    struct
    {
        bool bInIsLocked;
    } Parms{};
    Parms.bInIsLocked = (bool)bInIsLocked;
    this->ProcessEvent(Func, &Parms);
}

void UMovieSceneSection::SetIsActive(bool bInIsActive)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MovieSceneSection", "SetIsActive");
    struct
    {
        bool bInIsActive;
    } Parms{};
    Parms.bInIsActive = (bool)bInIsActive;
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

bool UMovieSceneSection::IsLocked()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MovieSceneSection", "IsLocked");
    struct
    {
        bool ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UMovieSceneSection::IsActive()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MovieSceneSection", "IsActive");
    struct
    {
        bool ReturnValue;
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

// IMovieSceneCustomClockSource
void IMovieSceneCustomClockSource::OnTick(float DeltaSeconds, float InPlayRate)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MovieSceneCustomClockSource", "OnTick");
    struct
    {
        float DeltaSeconds;
        float InPlayRate;
    } Parms{};
    Parms.DeltaSeconds = (float)DeltaSeconds;
    Parms.InPlayRate = (float)InPlayRate;
    this->ProcessEvent(Func, &Parms);
}

void IMovieSceneCustomClockSource::OnStopPlaying(const struct FQualifiedFrameTime& InStopTime)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MovieSceneCustomClockSource", "OnStopPlaying");
    struct
    {
        struct FQualifiedFrameTime InStopTime;
    } Parms{};
    Parms.InStopTime = (struct FQualifiedFrameTime)InStopTime;
    this->ProcessEvent(Func, &Parms);
}

void IMovieSceneCustomClockSource::OnStartPlaying(const struct FQualifiedFrameTime& InStartTime)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MovieSceneCustomClockSource", "OnStartPlaying");
    struct
    {
        struct FQualifiedFrameTime InStartTime;
    } Parms{};
    Parms.InStartTime = (struct FQualifiedFrameTime)InStartTime;
    this->ProcessEvent(Func, &Parms);
}

struct FFrameTime IMovieSceneCustomClockSource::OnRequestCurrentTime(const struct FQualifiedFrameTime& InCurrentTime, float InPlayRate)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MovieSceneCustomClockSource", "OnRequestCurrentTime");
    struct
    {
        struct FQualifiedFrameTime InCurrentTime;
        float InPlayRate;
        struct FFrameTime ReturnValue;
    } Parms{};
    Parms.InCurrentTime = (struct FQualifiedFrameTime)InCurrentTime;
    Parms.InPlayRate = (float)InPlayRate;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
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

// UMovieSceneSequencePlayer
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

void UMovieSceneSequencePlayer::SetTimeRange(float startTime, float Duration)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MovieSceneSequencePlayer", "SetTimeRange");
    struct
    {
        float startTime;
        float Duration;
    } Parms{};
    Parms.startTime = (float)startTime;
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

void UMovieSceneSequencePlayer::SetPlaybackPosition(struct FMovieSceneSequencePlaybackParams PlaybackParams)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MovieSceneSequencePlayer", "SetPlaybackPosition");
    struct
    {
        struct FMovieSceneSequencePlaybackParams PlaybackParams;
    } Parms{};
    Parms.PlaybackParams = (struct FMovieSceneSequencePlaybackParams)PlaybackParams;
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

void UMovieSceneSequencePlayer::SetFrameRange(int32_t StartFrame, int32_t Duration, float SubFrames)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MovieSceneSequencePlayer", "SetFrameRange");
    struct
    {
        int32_t StartFrame;
        int32_t Duration;
        float SubFrames;
    } Parms{};
    Parms.StartFrame = (int32_t)StartFrame;
    Parms.Duration = (int32_t)Duration;
    Parms.SubFrames = (float)SubFrames;
    this->ProcessEvent(Func, &Parms);
}

void UMovieSceneSequencePlayer::SetDisableCameraCuts(bool bInDisableCameraCuts)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MovieSceneSequencePlayer", "SetDisableCameraCuts");
    struct
    {
        bool bInDisableCameraCuts;
    } Parms{};
    Parms.bInDisableCameraCuts = (bool)bInDisableCameraCuts;
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

bool UMovieSceneSequencePlayer::ScrubToMarkedFrame(struct FString InLabel)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MovieSceneSequencePlayer", "ScrubToMarkedFrame");
    struct
    {
        struct FString InLabel;
        bool ReturnValue;
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

bool UMovieSceneSequencePlayer::PlayToMarkedFrame(struct FString InLabel)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MovieSceneSequencePlayer", "PlayToMarkedFrame");
    struct
    {
        struct FString InLabel;
        bool ReturnValue;
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

void UMovieSceneSequencePlayer::PlayTo(struct FMovieSceneSequencePlaybackParams PlaybackParams)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MovieSceneSequencePlayer", "PlayTo");
    struct
    {
        struct FMovieSceneSequencePlaybackParams PlaybackParams;
    } Parms{};
    Parms.PlaybackParams = (struct FMovieSceneSequencePlaybackParams)PlaybackParams;
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

bool UMovieSceneSequencePlayer::JumpToMarkedFrame(struct FString InLabel)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MovieSceneSequencePlayer", "JumpToMarkedFrame");
    struct
    {
        struct FString InLabel;
        bool ReturnValue;
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

bool UMovieSceneSequencePlayer::IsReversed()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MovieSceneSequencePlayer", "IsReversed");
    struct
    {
        bool ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UMovieSceneSequencePlayer::IsPlaying()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MovieSceneSequencePlayer", "IsPlaying");
    struct
    {
        bool ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UMovieSceneSequencePlayer::IsPaused()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MovieSceneSequencePlayer", "IsPaused");
    struct
    {
        bool ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
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

bool UMovieSceneSequencePlayer::GetDisableCameraCuts()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MovieSceneSequencePlayer", "GetDisableCameraCuts");
    struct
    {
        bool ReturnValue;
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

void UMovieSceneSequencePlayer::ChangePlaybackDirection()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MovieSceneSequencePlayer", "ChangePlaybackDirection");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
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
