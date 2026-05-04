#include "SpinePlugin.hpp"
#include <cstring> // memcpy for ArrayDim>1 param marshalling

namespace SDK
{

// ---- USpineBoneDriverComponent::* ----
void USpineBoneDriverComponent::BeforeUpdateWorldTransform(struct USpineSkeletonComponent* Skeleton)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SpineBoneDriverComponent", "BeforeUpdateWorldTransform");
    struct
    {
        struct USpineSkeletonComponent* Skeleton;
    } Parms{};
    Parms.Skeleton = (struct USpineSkeletonComponent*)Skeleton;
    this->ProcessEvent(Func, &Parms);
}

// ---- UTrackEntry::* ----
void UTrackEntry::SetTrackTime(float TrackTime)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("TrackEntry", "SetTrackTime");
    struct
    {
        float TrackTime;
    } Parms{};
    Parms.TrackTime = (float)TrackTime;
    this->ProcessEvent(Func, &Parms);
}

void UTrackEntry::SetTrackEnd(float trackEnd)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("TrackEntry", "SetTrackEnd");
    struct
    {
        float trackEnd;
    } Parms{};
    Parms.trackEnd = (float)trackEnd;
    this->ProcessEvent(Func, &Parms);
}

void UTrackEntry::SetTimeScale(float TimeScale)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("TrackEntry", "SetTimeScale");
    struct
    {
        float TimeScale;
    } Parms{};
    Parms.TimeScale = (float)TimeScale;
    this->ProcessEvent(Func, &Parms);
}

void UTrackEntry::SetMixTime(float mixTime)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("TrackEntry", "SetMixTime");
    struct
    {
        float mixTime;
    } Parms{};
    Parms.mixTime = (float)mixTime;
    this->ProcessEvent(Func, &Parms);
}

void UTrackEntry::SetMixDuration(float mixDuration)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("TrackEntry", "SetMixDuration");
    struct
    {
        float mixDuration;
    } Parms{};
    Parms.mixDuration = (float)mixDuration;
    this->ProcessEvent(Func, &Parms);
}

void UTrackEntry::SetLoop(uint8_t Loop)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("TrackEntry", "SetLoop");
    struct
    {
        uint8_t Loop;
    } Parms{};
    Parms.Loop = (uint8_t)Loop;
    this->ProcessEvent(Func, &Parms);
}

void UTrackEntry::SetEventThreshold(float eventThreshold)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("TrackEntry", "SetEventThreshold");
    struct
    {
        float eventThreshold;
    } Parms{};
    Parms.eventThreshold = (float)eventThreshold;
    this->ProcessEvent(Func, &Parms);
}

void UTrackEntry::SetDrawOrderThreshold(float drawOrderThreshold)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("TrackEntry", "SetDrawOrderThreshold");
    struct
    {
        float drawOrderThreshold;
    } Parms{};
    Parms.drawOrderThreshold = (float)drawOrderThreshold;
    this->ProcessEvent(Func, &Parms);
}

void UTrackEntry::SetDelay(float Delay)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("TrackEntry", "SetDelay");
    struct
    {
        float Delay;
    } Parms{};
    Parms.Delay = (float)Delay;
    this->ProcessEvent(Func, &Parms);
}

void UTrackEntry::SetAttachmentThreshold(float attachmentThreshold)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("TrackEntry", "SetAttachmentThreshold");
    struct
    {
        float attachmentThreshold;
    } Parms{};
    Parms.attachmentThreshold = (float)attachmentThreshold;
    this->ProcessEvent(Func, &Parms);
}

void UTrackEntry::SetAnimationStart(float animationStart)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("TrackEntry", "SetAnimationStart");
    struct
    {
        float animationStart;
    } Parms{};
    Parms.animationStart = (float)animationStart;
    this->ProcessEvent(Func, &Parms);
}

void UTrackEntry::SetAnimationLast(float animationLast)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("TrackEntry", "SetAnimationLast");
    struct
    {
        float animationLast;
    } Parms{};
    Parms.animationLast = (float)animationLast;
    this->ProcessEvent(Func, &Parms);
}

void UTrackEntry::SetAnimationEnd(float animationEnd)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("TrackEntry", "SetAnimationEnd");
    struct
    {
        float animationEnd;
    } Parms{};
    Parms.animationEnd = (float)animationEnd;
    this->ProcessEvent(Func, &Parms);
}

void UTrackEntry::SetAlpha(float Alpha)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("TrackEntry", "SetAlpha");
    struct
    {
        float Alpha;
    } Parms{};
    Parms.Alpha = (float)Alpha;
    this->ProcessEvent(Func, &Parms);
}

uint8_t UTrackEntry::isValidAnimation()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("TrackEntry", "isValidAnimation");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UTrackEntry::GetTrackTime()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("TrackEntry", "GetTrackTime");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UTrackEntry::GetTrackIndex()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("TrackEntry", "GetTrackIndex");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UTrackEntry::GetTrackEnd()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("TrackEntry", "GetTrackEnd");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UTrackEntry::GetTimeScale()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("TrackEntry", "GetTimeScale");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UTrackEntry::GetMixTime()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("TrackEntry", "GetMixTime");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UTrackEntry::GetMixDuration()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("TrackEntry", "GetMixDuration");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UTrackEntry::GetLoop()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("TrackEntry", "GetLoop");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UTrackEntry::GetEventThreshold()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("TrackEntry", "GetEventThreshold");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UTrackEntry::GetDrawOrderThreshold()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("TrackEntry", "GetDrawOrderThreshold");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UTrackEntry::GetDelay()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("TrackEntry", "GetDelay");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UTrackEntry::GetAttachmentThreshold()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("TrackEntry", "GetAttachmentThreshold");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UTrackEntry::GetAnimationStart()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("TrackEntry", "GetAnimationStart");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UTrackEntry::getAnimationName()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("TrackEntry", "getAnimationName");
    struct
    {
        struct FString ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UTrackEntry::GetAnimationLast()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("TrackEntry", "GetAnimationLast");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UTrackEntry::GetAnimationEnd()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("TrackEntry", "GetAnimationEnd");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UTrackEntry::getAnimationDuration()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("TrackEntry", "getAnimationDuration");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UTrackEntry::GetAlpha()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("TrackEntry", "GetAlpha");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// ---- USpineSkeletonComponent::* ----
void USpineSkeletonComponent::UpdateWorldTransform()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SpineSkeletonComponent", "UpdateWorldTransform");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void USpineSkeletonComponent::SetToSetupPose()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SpineSkeletonComponent", "SetToSetupPose");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void USpineSkeletonComponent::SetSlotsToSetupPose()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SpineSkeletonComponent", "SetSlotsToSetupPose");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void USpineSkeletonComponent::SetSlotColor(struct FString SlotName, struct FColor Color)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SpineSkeletonComponent", "SetSlotColor");
    struct
    {
        struct FString SlotName;
        struct FColor Color;
    } Parms{};
    Parms.SlotName = (struct FString)SlotName;
    Parms.Color = (struct FColor)Color;
    this->ProcessEvent(Func, &Parms);
}

uint8_t USpineSkeletonComponent::SetSkins(struct TArray<struct FString>& SkinNames)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SpineSkeletonComponent", "SetSkins");
    struct
    {
        struct TArray<struct FString> SkinNames;
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    SkinNames = Parms.SkinNames;
    return Parms.ReturnValue;
}

uint8_t USpineSkeletonComponent::SetSkin(struct FString SkinName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SpineSkeletonComponent", "SetSkin");
    struct
    {
        struct FString SkinName;
        uint8_t ReturnValue;
    } Parms{};
    Parms.SkinName = (struct FString)SkinName;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void USpineSkeletonComponent::SetScaleY(float ScaleY)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SpineSkeletonComponent", "SetScaleY");
    struct
    {
        float ScaleY;
    } Parms{};
    Parms.ScaleY = (float)ScaleY;
    this->ProcessEvent(Func, &Parms);
}

void USpineSkeletonComponent::SetScaleX(float ScaleX)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SpineSkeletonComponent", "SetScaleX");
    struct
    {
        float ScaleX;
    } Parms{};
    Parms.ScaleX = (float)ScaleX;
    this->ProcessEvent(Func, &Parms);
}

void USpineSkeletonComponent::SetBoneWorldPosition(struct FString BoneName, const struct FVector& Position)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SpineSkeletonComponent", "SetBoneWorldPosition");
    struct
    {
        struct FString BoneName;
        struct FVector Position;
    } Parms{};
    Parms.BoneName = (struct FString)BoneName;
    Parms.Position = (struct FVector)Position;
    this->ProcessEvent(Func, &Parms);
}

void USpineSkeletonComponent::SetBonesToSetupPose()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SpineSkeletonComponent", "SetBonesToSetupPose");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

uint8_t USpineSkeletonComponent::SetAttachment(struct FString SlotName, struct FString attachmentName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SpineSkeletonComponent", "SetAttachment");
    struct
    {
        struct FString SlotName;
        struct FString attachmentName;
        uint8_t ReturnValue;
    } Parms{};
    Parms.SlotName = (struct FString)SlotName;
    Parms.attachmentName = (struct FString)attachmentName;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t USpineSkeletonComponent::HasSlot(struct FString SlotName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SpineSkeletonComponent", "HasSlot");
    struct
    {
        struct FString SlotName;
        uint8_t ReturnValue;
    } Parms{};
    Parms.SlotName = (struct FString)SlotName;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t USpineSkeletonComponent::HasSkin(struct FString SkinName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SpineSkeletonComponent", "HasSkin");
    struct
    {
        struct FString SkinName;
        uint8_t ReturnValue;
    } Parms{};
    Parms.SkinName = (struct FString)SkinName;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t USpineSkeletonComponent::HasBone(struct FString BoneName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SpineSkeletonComponent", "HasBone");
    struct
    {
        struct FString BoneName;
        uint8_t ReturnValue;
    } Parms{};
    Parms.BoneName = (struct FString)BoneName;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t USpineSkeletonComponent::HasAnimation(struct FString AnimationName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SpineSkeletonComponent", "HasAnimation");
    struct
    {
        struct FString AnimationName;
        uint8_t ReturnValue;
    } Parms{};
    Parms.AnimationName = (struct FString)AnimationName;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void USpineSkeletonComponent::GetSlots(struct TArray<struct FString>& Slots)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SpineSkeletonComponent", "GetSlots");
    struct
    {
        struct TArray<struct FString> Slots;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    Slots = Parms.Slots;
}

void USpineSkeletonComponent::GetSkins(struct TArray<struct FString>& Skins)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SpineSkeletonComponent", "GetSkins");
    struct
    {
        struct TArray<struct FString> Skins;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    Skins = Parms.Skins;
}

float USpineSkeletonComponent::GetScaleY()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SpineSkeletonComponent", "GetScaleY");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float USpineSkeletonComponent::GetScaleX()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SpineSkeletonComponent", "GetScaleX");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FTransform USpineSkeletonComponent::GetBoneWorldTransform(struct FString BoneName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SpineSkeletonComponent", "GetBoneWorldTransform");
    struct
    {
        struct FString BoneName;
        struct FTransform ReturnValue;
    } Parms{};
    Parms.BoneName = (struct FString)BoneName;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void USpineSkeletonComponent::GetBones(struct TArray<struct FString>& Bones)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SpineSkeletonComponent", "GetBones");
    struct
    {
        struct TArray<struct FString> Bones;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    Bones = Parms.Bones;
}

void USpineSkeletonComponent::GetAnimations(struct TArray<struct FString>& Animations)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SpineSkeletonComponent", "GetAnimations");
    struct
    {
        struct TArray<struct FString> Animations;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    Animations = Parms.Animations;
}

float USpineSkeletonComponent::getAnimationDuration(struct FString AnimationName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SpineSkeletonComponent", "getAnimationDuration");
    struct
    {
        struct FString AnimationName;
        float ReturnValue;
    } Parms{};
    Parms.AnimationName = (struct FString)AnimationName;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// ---- USpineSkeletonAnimationComponent::* ----
void USpineSkeletonAnimationComponent::SetTimeScale(float TimeScale)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SpineSkeletonAnimationComponent", "SetTimeScale");
    struct
    {
        float TimeScale;
    } Parms{};
    Parms.TimeScale = (float)TimeScale;
    this->ProcessEvent(Func, &Parms);
}

void USpineSkeletonAnimationComponent::SetPlaybackTime(float InPlaybackTime, uint8_t bCallDelegates)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SpineSkeletonAnimationComponent", "SetPlaybackTime");
    struct
    {
        float InPlaybackTime;
        uint8_t bCallDelegates;
    } Parms{};
    Parms.InPlaybackTime = (float)InPlaybackTime;
    Parms.bCallDelegates = (uint8_t)bCallDelegates;
    this->ProcessEvent(Func, &Parms);
}

struct UTrackEntry* USpineSkeletonAnimationComponent::SetEmptyAnimation(int32_t TrackIndex, float mixDuration)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SpineSkeletonAnimationComponent", "SetEmptyAnimation");
    struct
    {
        int32_t TrackIndex;
        float mixDuration;
        struct UTrackEntry* ReturnValue;
    } Parms{};
    Parms.TrackIndex = (int32_t)TrackIndex;
    Parms.mixDuration = (float)mixDuration;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void USpineSkeletonAnimationComponent::SetAutoPlay(uint8_t bInAutoPlays)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SpineSkeletonAnimationComponent", "SetAutoPlay");
    struct
    {
        uint8_t bInAutoPlays;
    } Parms{};
    Parms.bInAutoPlays = (uint8_t)bInAutoPlays;
    this->ProcessEvent(Func, &Parms);
}

struct UTrackEntry* USpineSkeletonAnimationComponent::SetAnimation(int32_t TrackIndex, struct FString AnimationName, uint8_t Loop)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SpineSkeletonAnimationComponent", "SetAnimation");
    struct
    {
        int32_t TrackIndex;
        struct FString AnimationName;
        uint8_t Loop;
        struct UTrackEntry* ReturnValue;
    } Parms{};
    Parms.TrackIndex = (int32_t)TrackIndex;
    Parms.AnimationName = (struct FString)AnimationName;
    Parms.Loop = (uint8_t)Loop;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float USpineSkeletonAnimationComponent::GetTimeScale()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SpineSkeletonAnimationComponent", "GetTimeScale");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UTrackEntry* USpineSkeletonAnimationComponent::GetCurrent(int32_t TrackIndex)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SpineSkeletonAnimationComponent", "GetCurrent");
    struct
    {
        int32_t TrackIndex;
        struct UTrackEntry* ReturnValue;
    } Parms{};
    Parms.TrackIndex = (int32_t)TrackIndex;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void USpineSkeletonAnimationComponent::ClearTracks()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SpineSkeletonAnimationComponent", "ClearTracks");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void USpineSkeletonAnimationComponent::ClearTrack(int32_t TrackIndex)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SpineSkeletonAnimationComponent", "ClearTrack");
    struct
    {
        int32_t TrackIndex;
    } Parms{};
    Parms.TrackIndex = (int32_t)TrackIndex;
    this->ProcessEvent(Func, &Parms);
}

struct UTrackEntry* USpineSkeletonAnimationComponent::AddEmptyAnimation(int32_t TrackIndex, float mixDuration, float Delay)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SpineSkeletonAnimationComponent", "AddEmptyAnimation");
    struct
    {
        int32_t TrackIndex;
        float mixDuration;
        float Delay;
        struct UTrackEntry* ReturnValue;
    } Parms{};
    Parms.TrackIndex = (int32_t)TrackIndex;
    Parms.mixDuration = (float)mixDuration;
    Parms.Delay = (float)Delay;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UTrackEntry* USpineSkeletonAnimationComponent::AddAnimation(int32_t TrackIndex, struct FString AnimationName, uint8_t Loop, float Delay)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SpineSkeletonAnimationComponent", "AddAnimation");
    struct
    {
        int32_t TrackIndex;
        struct FString AnimationName;
        uint8_t Loop;
        float Delay;
        struct UTrackEntry* ReturnValue;
    } Parms{};
    Parms.TrackIndex = (int32_t)TrackIndex;
    Parms.AnimationName = (struct FString)AnimationName;
    Parms.Loop = (uint8_t)Loop;
    Parms.Delay = (float)Delay;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// ---- USpineSkeletonRendererComponent::* ----
void USpineSkeletonRendererComponent::UpdateRenderer(struct USpineSkeletonComponent* Skeleton)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SpineSkeletonRendererComponent", "UpdateRenderer");
    struct
    {
        struct USpineSkeletonComponent* Skeleton;
    } Parms{};
    Parms.Skeleton = (struct USpineSkeletonComponent*)Skeleton;
    this->ProcessEvent(Func, &Parms);
}

void USpineSkeletonRendererComponent::Clear()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SpineSkeletonRendererComponent", "Clear");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// ---- USpineWidget::* ----
void USpineWidget::UpdateWorldTransform()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SpineWidget", "UpdateWorldTransform");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void USpineWidget::Tick(float DeltaTime, uint8_t CallDelegates)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SpineWidget", "Tick");
    struct
    {
        float DeltaTime;
        uint8_t CallDelegates;
    } Parms{};
    Parms.DeltaTime = (float)DeltaTime;
    Parms.CallDelegates = (uint8_t)CallDelegates;
    this->ProcessEvent(Func, &Parms);
}

void USpineWidget::SetToSetupPose()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SpineWidget", "SetToSetupPose");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void USpineWidget::SetTimeScale(float TimeScale)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SpineWidget", "SetTimeScale");
    struct
    {
        float TimeScale;
    } Parms{};
    Parms.TimeScale = (float)TimeScale;
    this->ProcessEvent(Func, &Parms);
}

void USpineWidget::SetSlotsToSetupPose()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SpineWidget", "SetSlotsToSetupPose");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

uint8_t USpineWidget::SetSkins(struct TArray<struct FString>& SkinNames)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SpineWidget", "SetSkins");
    struct
    {
        struct TArray<struct FString> SkinNames;
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    SkinNames = Parms.SkinNames;
    return Parms.ReturnValue;
}

uint8_t USpineWidget::SetSkin(struct FString SkinName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SpineWidget", "SetSkin");
    struct
    {
        struct FString SkinName;
        uint8_t ReturnValue;
    } Parms{};
    Parms.SkinName = (struct FString)SkinName;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void USpineWidget::SetScaleY(float ScaleY)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SpineWidget", "SetScaleY");
    struct
    {
        float ScaleY;
    } Parms{};
    Parms.ScaleY = (float)ScaleY;
    this->ProcessEvent(Func, &Parms);
}

void USpineWidget::SetScaleX(float ScaleX)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SpineWidget", "SetScaleX");
    struct
    {
        float ScaleX;
    } Parms{};
    Parms.ScaleX = (float)ScaleX;
    this->ProcessEvent(Func, &Parms);
}

void USpineWidget::SetPlaybackTime(float InPlaybackTime, uint8_t bCallDelegates)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SpineWidget", "SetPlaybackTime");
    struct
    {
        float InPlaybackTime;
        uint8_t bCallDelegates;
    } Parms{};
    Parms.InPlaybackTime = (float)InPlaybackTime;
    Parms.bCallDelegates = (uint8_t)bCallDelegates;
    this->ProcessEvent(Func, &Parms);
}

struct UTrackEntry* USpineWidget::SetEmptyAnimation(int32_t TrackIndex, float mixDuration)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SpineWidget", "SetEmptyAnimation");
    struct
    {
        int32_t TrackIndex;
        float mixDuration;
        struct UTrackEntry* ReturnValue;
    } Parms{};
    Parms.TrackIndex = (int32_t)TrackIndex;
    Parms.mixDuration = (float)mixDuration;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void USpineWidget::SetBonesToSetupPose()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SpineWidget", "SetBonesToSetupPose");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void USpineWidget::SetAutoPlay(uint8_t bInAutoPlays)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SpineWidget", "SetAutoPlay");
    struct
    {
        uint8_t bInAutoPlays;
    } Parms{};
    Parms.bInAutoPlays = (uint8_t)bInAutoPlays;
    this->ProcessEvent(Func, &Parms);
}

uint8_t USpineWidget::SetAttachment(struct FString SlotName, struct FString attachmentName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SpineWidget", "SetAttachment");
    struct
    {
        struct FString SlotName;
        struct FString attachmentName;
        uint8_t ReturnValue;
    } Parms{};
    Parms.SlotName = (struct FString)SlotName;
    Parms.attachmentName = (struct FString)attachmentName;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void USpineWidget::SetAsyncLoad(uint8_t Async)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SpineWidget", "SetAsyncLoad");
    struct
    {
        uint8_t Async;
    } Parms{};
    Parms.Async = (uint8_t)Async;
    this->ProcessEvent(Func, &Parms);
}

struct UTrackEntry* USpineWidget::SetAnimation(int32_t TrackIndex, struct FString AnimationName, uint8_t Loop)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SpineWidget", "SetAnimation");
    struct
    {
        int32_t TrackIndex;
        struct FString AnimationName;
        uint8_t Loop;
        struct UTrackEntry* ReturnValue;
    } Parms{};
    Parms.TrackIndex = (int32_t)TrackIndex;
    Parms.AnimationName = (struct FString)AnimationName;
    Parms.Loop = (uint8_t)Loop;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t USpineWidget::HasSlot(struct FString SlotName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SpineWidget", "HasSlot");
    struct
    {
        struct FString SlotName;
        uint8_t ReturnValue;
    } Parms{};
    Parms.SlotName = (struct FString)SlotName;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t USpineWidget::HasSkin(struct FString SkinName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SpineWidget", "HasSkin");
    struct
    {
        struct FString SkinName;
        uint8_t ReturnValue;
    } Parms{};
    Parms.SkinName = (struct FString)SkinName;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t USpineWidget::HasBone(struct FString BoneName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SpineWidget", "HasBone");
    struct
    {
        struct FString BoneName;
        uint8_t ReturnValue;
    } Parms{};
    Parms.BoneName = (struct FString)BoneName;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t USpineWidget::HasAnimation(struct FString AnimationName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SpineWidget", "HasAnimation");
    struct
    {
        struct FString AnimationName;
        uint8_t ReturnValue;
    } Parms{};
    Parms.AnimationName = (struct FString)AnimationName;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float USpineWidget::GetTimeScale()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SpineWidget", "GetTimeScale");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void USpineWidget::GetSlots(struct TArray<struct FString>& Slots)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SpineWidget", "GetSlots");
    struct
    {
        struct TArray<struct FString> Slots;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    Slots = Parms.Slots;
}

void USpineWidget::GetSkins(struct TArray<struct FString>& Skins)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SpineWidget", "GetSkins");
    struct
    {
        struct TArray<struct FString> Skins;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    Skins = Parms.Skins;
}

float USpineWidget::GetScaleY()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SpineWidget", "GetScaleY");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float USpineWidget::GetScaleX()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SpineWidget", "GetScaleX");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UTrackEntry* USpineWidget::GetCurrent(int32_t TrackIndex)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SpineWidget", "GetCurrent");
    struct
    {
        int32_t TrackIndex;
        struct UTrackEntry* ReturnValue;
    } Parms{};
    Parms.TrackIndex = (int32_t)TrackIndex;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void USpineWidget::GetBones(struct TArray<struct FString>& Bones)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SpineWidget", "GetBones");
    struct
    {
        struct TArray<struct FString> Bones;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    Bones = Parms.Bones;
}

void USpineWidget::GetAnimations(struct TArray<struct FString>& Animations)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SpineWidget", "GetAnimations");
    struct
    {
        struct TArray<struct FString> Animations;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    Animations = Parms.Animations;
}

float USpineWidget::getAnimationDuration(struct FString AnimationName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SpineWidget", "getAnimationDuration");
    struct
    {
        struct FString AnimationName;
        float ReturnValue;
    } Parms{};
    Parms.AnimationName = (struct FString)AnimationName;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void USpineWidget::ClearTracks()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SpineWidget", "ClearTracks");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void USpineWidget::ClearTrack(int32_t TrackIndex)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SpineWidget", "ClearTrack");
    struct
    {
        int32_t TrackIndex;
    } Parms{};
    Parms.TrackIndex = (int32_t)TrackIndex;
    this->ProcessEvent(Func, &Parms);
}

struct UTrackEntry* USpineWidget::AddEmptyAnimation(int32_t TrackIndex, float mixDuration, float Delay)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SpineWidget", "AddEmptyAnimation");
    struct
    {
        int32_t TrackIndex;
        float mixDuration;
        float Delay;
        struct UTrackEntry* ReturnValue;
    } Parms{};
    Parms.TrackIndex = (int32_t)TrackIndex;
    Parms.mixDuration = (float)mixDuration;
    Parms.Delay = (float)Delay;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UTrackEntry* USpineWidget::AddAnimation(int32_t TrackIndex, struct FString AnimationName, uint8_t Loop, float Delay)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SpineWidget", "AddAnimation");
    struct
    {
        int32_t TrackIndex;
        struct FString AnimationName;
        uint8_t Loop;
        float Delay;
        struct UTrackEntry* ReturnValue;
    } Parms{};
    Parms.TrackIndex = (int32_t)TrackIndex;
    Parms.AnimationName = (struct FString)AnimationName;
    Parms.Loop = (uint8_t)Loop;
    Parms.Delay = (float)Delay;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

} // namespace SDK
