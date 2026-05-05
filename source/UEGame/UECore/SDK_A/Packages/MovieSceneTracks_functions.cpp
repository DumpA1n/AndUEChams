#include "MovieSceneTracks.hpp"
#include "Engine.hpp"
#include "MovieScene.hpp"
#include <cstring> // memcpy for ArrayDim>1 param marshalling

namespace SDK
{

// IMovieSceneTransformOrigin
struct FTransform IMovieSceneTransformOrigin::BP_GetTransformOrigin()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MovieSceneTransformOrigin", "BP_GetTransformOrigin");
    struct
    {
        struct FTransform ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UMovieScene3DConstraintSection
void UMovieScene3DConstraintSection::SetConstraintBindingID(const struct FMovieSceneObjectBindingID& InConstraintBindingID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MovieScene3DConstraintSection", "SetConstraintBindingID");
    struct
    {
        struct FMovieSceneObjectBindingID InConstraintBindingID;
    } Parms{};
    Parms.InConstraintBindingID = (struct FMovieSceneObjectBindingID)InConstraintBindingID;
    this->ProcessEvent(Func, &Parms);
}

struct FMovieSceneObjectBindingID UMovieScene3DConstraintSection::GetConstraintBindingID()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MovieScene3DConstraintSection", "GetConstraintBindingID");
    struct
    {
        struct FMovieSceneObjectBindingID ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UMovieSceneAudioSection
void UMovieSceneAudioSection::SetStartOffset(struct FFrameNumber InStartOffset)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MovieSceneAudioSection", "SetStartOffset");
    struct
    {
        struct FFrameNumber InStartOffset;
    } Parms{};
    Parms.InStartOffset = (struct FFrameNumber)InStartOffset;
    this->ProcessEvent(Func, &Parms);
}

void UMovieSceneAudioSection::SetSound(struct USoundBase* InSound)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MovieSceneAudioSection", "SetSound");
    struct
    {
        struct USoundBase* InSound;
    } Parms{};
    Parms.InSound = (struct USoundBase*)InSound;
    this->ProcessEvent(Func, &Parms);
}

struct FFrameNumber UMovieSceneAudioSection::GetStartOffset()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MovieSceneAudioSection", "GetStartOffset");
    struct
    {
        struct FFrameNumber ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct USoundBase* UMovieSceneAudioSection::GetSound()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MovieSceneAudioSection", "GetSound");
    struct
    {
        struct USoundBase* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UMovieSceneCameraCutSection
void UMovieSceneCameraCutSection::SetCameraBindingID(const struct FMovieSceneObjectBindingID& InCameraBindingID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MovieSceneCameraCutSection", "SetCameraBindingID");
    struct
    {
        struct FMovieSceneObjectBindingID InCameraBindingID;
    } Parms{};
    Parms.InCameraBindingID = (struct FMovieSceneObjectBindingID)InCameraBindingID;
    this->ProcessEvent(Func, &Parms);
}

struct FMovieSceneObjectBindingID UMovieSceneCameraCutSection::GetCameraBindingID()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MovieSceneCameraCutSection", "GetCameraBindingID");
    struct
    {
        struct FMovieSceneObjectBindingID ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UMovieSceneCinematicShotSection
void UMovieSceneCinematicShotSection::SetShotDisplayName(struct FString InShotDisplayName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MovieSceneCinematicShotSection", "SetShotDisplayName");
    struct
    {
        struct FString InShotDisplayName;
    } Parms{};
    Parms.InShotDisplayName = (struct FString)InShotDisplayName;
    this->ProcessEvent(Func, &Parms);
}

struct FString UMovieSceneCinematicShotSection::GetShotDisplayName()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MovieSceneCinematicShotSection", "GetShotDisplayName");
    struct
    {
        struct FString ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UMovieSceneLevelVisibilitySection
void UMovieSceneLevelVisibilitySection::SetVisibility(ELevelVisibility InVisibility)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MovieSceneLevelVisibilitySection", "SetVisibility");
    struct
    {
        enum ELevelVisibility InVisibility;
    } Parms{};
    Parms.InVisibility = (enum ELevelVisibility)InVisibility;
    this->ProcessEvent(Func, &Parms);
}

void UMovieSceneLevelVisibilitySection::SetLevelNames(const struct TArray<struct FName>& InLevelNames)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MovieSceneLevelVisibilitySection", "SetLevelNames");
    struct
    {
        struct TArray<struct FName> InLevelNames;
    } Parms{};
    Parms.InLevelNames = (struct TArray<struct FName>)InLevelNames;
    this->ProcessEvent(Func, &Parms);
}

ELevelVisibility UMovieSceneLevelVisibilitySection::GetVisibility()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MovieSceneLevelVisibilitySection", "GetVisibility");
    struct
    {
        enum ELevelVisibility ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct TArray<struct FName> UMovieSceneLevelVisibilitySection::GetLevelNames()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MovieSceneLevelVisibilitySection", "GetLevelNames");
    struct
    {
        struct TArray<struct FName> ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

} // namespace SDK
