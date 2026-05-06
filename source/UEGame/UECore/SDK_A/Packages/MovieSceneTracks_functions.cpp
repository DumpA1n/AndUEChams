#include "MovieSceneTracks.hpp"
#include "Engine.hpp"
#include "MovieScene.hpp"
#include <cstring> // memcpy for ArrayDim>1 param marshalling

namespace SDK
{

// UMovieSceneParameterSection
bool UMovieSceneParameterSection::RemoveVectorParameter(struct FName InParameterName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MovieSceneParameterSection", "RemoveVectorParameter");
    struct
    {
        struct FName InParameterName;
        bool ReturnValue;
    } Parms{};
    Parms.InParameterName = (struct FName)InParameterName;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UMovieSceneParameterSection::RemoveVector2DParameter(struct FName InParameterName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MovieSceneParameterSection", "RemoveVector2DParameter");
    struct
    {
        struct FName InParameterName;
        bool ReturnValue;
    } Parms{};
    Parms.InParameterName = (struct FName)InParameterName;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UMovieSceneParameterSection::RemoveTransformParameter(struct FName InParameterName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MovieSceneParameterSection", "RemoveTransformParameter");
    struct
    {
        struct FName InParameterName;
        bool ReturnValue;
    } Parms{};
    Parms.InParameterName = (struct FName)InParameterName;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UMovieSceneParameterSection::RemoveScalarParameter(struct FName InParameterName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MovieSceneParameterSection", "RemoveScalarParameter");
    struct
    {
        struct FName InParameterName;
        bool ReturnValue;
    } Parms{};
    Parms.InParameterName = (struct FName)InParameterName;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UMovieSceneParameterSection::RemoveColorParameter(struct FName InParameterName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MovieSceneParameterSection", "RemoveColorParameter");
    struct
    {
        struct FName InParameterName;
        bool ReturnValue;
    } Parms{};
    Parms.InParameterName = (struct FName)InParameterName;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UMovieSceneParameterSection::RemoveBoolParameter(struct FName InParameterName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MovieSceneParameterSection", "RemoveBoolParameter");
    struct
    {
        struct FName InParameterName;
        bool ReturnValue;
    } Parms{};
    Parms.InParameterName = (struct FName)InParameterName;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UMovieSceneParameterSection::GetParameterNames(struct TSet<struct FName>& ParameterNames)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MovieSceneParameterSection", "GetParameterNames");
    struct
    {
        struct TSet<struct FName> ParameterNames;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    ParameterNames = Parms.ParameterNames;
}

void UMovieSceneParameterSection::AddVectorParameterKey(struct FName InParameterName, struct FFrameNumber InTime, struct FVector InValue)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MovieSceneParameterSection", "AddVectorParameterKey");
    struct
    {
        struct FName InParameterName;
        struct FFrameNumber InTime;
        struct FVector InValue;
    } Parms{};
    Parms.InParameterName = (struct FName)InParameterName;
    Parms.InTime = (struct FFrameNumber)InTime;
    Parms.InValue = (struct FVector)InValue;
    this->ProcessEvent(Func, &Parms);
}

void UMovieSceneParameterSection::AddVector2DParameterKey(struct FName InParameterName, struct FFrameNumber InTime, struct FVector2D InValue)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MovieSceneParameterSection", "AddVector2DParameterKey");
    struct
    {
        struct FName InParameterName;
        struct FFrameNumber InTime;
        struct FVector2D InValue;
    } Parms{};
    Parms.InParameterName = (struct FName)InParameterName;
    Parms.InTime = (struct FFrameNumber)InTime;
    Parms.InValue = (struct FVector2D)InValue;
    this->ProcessEvent(Func, &Parms);
}

void UMovieSceneParameterSection::AddTransformParameterKey(struct FName InParameterName, struct FFrameNumber InTime, const struct FTransform& InValue)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MovieSceneParameterSection", "AddTransformParameterKey");
    struct
    {
        struct FName InParameterName;
        struct FFrameNumber InTime;
        struct FTransform InValue;
    } Parms{};
    Parms.InParameterName = (struct FName)InParameterName;
    Parms.InTime = (struct FFrameNumber)InTime;
    Parms.InValue = (struct FTransform)InValue;
    this->ProcessEvent(Func, &Parms);
}

void UMovieSceneParameterSection::AddScalarParameterKey(struct FName InParameterName, struct FFrameNumber InTime, float InValue)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MovieSceneParameterSection", "AddScalarParameterKey");
    struct
    {
        struct FName InParameterName;
        struct FFrameNumber InTime;
        float InValue;
    } Parms{};
    Parms.InParameterName = (struct FName)InParameterName;
    Parms.InTime = (struct FFrameNumber)InTime;
    Parms.InValue = (float)InValue;
    this->ProcessEvent(Func, &Parms);
}

void UMovieSceneParameterSection::AddColorParameterKey(struct FName InParameterName, struct FFrameNumber InTime, struct FLinearColor InValue)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MovieSceneParameterSection", "AddColorParameterKey");
    struct
    {
        struct FName InParameterName;
        struct FFrameNumber InTime;
        struct FLinearColor InValue;
    } Parms{};
    Parms.InParameterName = (struct FName)InParameterName;
    Parms.InTime = (struct FFrameNumber)InTime;
    Parms.InValue = (struct FLinearColor)InValue;
    this->ProcessEvent(Func, &Parms);
}

void UMovieSceneParameterSection::AddBoolParameterKey(struct FName InParameterName, struct FFrameNumber InTime, bool InValue)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MovieSceneParameterSection", "AddBoolParameterKey");
    struct
    {
        struct FName InParameterName;
        struct FFrameNumber InTime;
        bool InValue;
    } Parms{};
    Parms.InParameterName = (struct FName)InParameterName;
    Parms.InTime = (struct FFrameNumber)InTime;
    Parms.InValue = (bool)InValue;
    this->ProcessEvent(Func, &Parms);
}

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
