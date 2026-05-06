#include "MotionWarping.hpp"
#include "Engine.hpp"
#include <cstring> // memcpy for ArrayDim>1 param marshalling

namespace SDK
{

// UAnimNotifyState_MotionWarping
void UAnimNotifyState_MotionWarping::OnWarpUpdate(struct UMotionWarpingComponent* MotionWarpingComp, struct URootMotionModifier* Modifier)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AnimNotifyState_MotionWarping", "OnWarpUpdate");
    struct
    {
        struct UMotionWarpingComponent* MotionWarpingComp;
        struct URootMotionModifier* Modifier;
    } Parms{};
    Parms.MotionWarpingComp = (struct UMotionWarpingComponent*)MotionWarpingComp;
    Parms.Modifier = (struct URootMotionModifier*)Modifier;
    this->ProcessEvent(Func, &Parms);
}

void UAnimNotifyState_MotionWarping::OnWarpEnd(struct UMotionWarpingComponent* MotionWarpingComp, struct URootMotionModifier* Modifier)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AnimNotifyState_MotionWarping", "OnWarpEnd");
    struct
    {
        struct UMotionWarpingComponent* MotionWarpingComp;
        struct URootMotionModifier* Modifier;
    } Parms{};
    Parms.MotionWarpingComp = (struct UMotionWarpingComponent*)MotionWarpingComp;
    Parms.Modifier = (struct URootMotionModifier*)Modifier;
    this->ProcessEvent(Func, &Parms);
}

void UAnimNotifyState_MotionWarping::OnWarpBegin(struct UMotionWarpingComponent* MotionWarpingComp, struct URootMotionModifier* Modifier)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AnimNotifyState_MotionWarping", "OnWarpBegin");
    struct
    {
        struct UMotionWarpingComponent* MotionWarpingComp;
        struct URootMotionModifier* Modifier;
    } Parms{};
    Parms.MotionWarpingComp = (struct UMotionWarpingComponent*)MotionWarpingComp;
    Parms.Modifier = (struct URootMotionModifier*)Modifier;
    this->ProcessEvent(Func, &Parms);
}

void UAnimNotifyState_MotionWarping::OnRootMotionModifierUpdate(struct UMotionWarpingComponent* MotionWarpingComp, struct URootMotionModifier* Modifier)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AnimNotifyState_MotionWarping", "OnRootMotionModifierUpdate");
    struct
    {
        struct UMotionWarpingComponent* MotionWarpingComp;
        struct URootMotionModifier* Modifier;
    } Parms{};
    Parms.MotionWarpingComp = (struct UMotionWarpingComponent*)MotionWarpingComp;
    Parms.Modifier = (struct URootMotionModifier*)Modifier;
    this->ProcessEvent(Func, &Parms);
}

void UAnimNotifyState_MotionWarping::OnRootMotionModifierDeactivate(struct UMotionWarpingComponent* MotionWarpingComp, struct URootMotionModifier* Modifier)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AnimNotifyState_MotionWarping", "OnRootMotionModifierDeactivate");
    struct
    {
        struct UMotionWarpingComponent* MotionWarpingComp;
        struct URootMotionModifier* Modifier;
    } Parms{};
    Parms.MotionWarpingComp = (struct UMotionWarpingComponent*)MotionWarpingComp;
    Parms.Modifier = (struct URootMotionModifier*)Modifier;
    this->ProcessEvent(Func, &Parms);
}

void UAnimNotifyState_MotionWarping::OnRootMotionModifierActivate(struct UMotionWarpingComponent* MotionWarpingComp, struct URootMotionModifier* Modifier)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AnimNotifyState_MotionWarping", "OnRootMotionModifierActivate");
    struct
    {
        struct UMotionWarpingComponent* MotionWarpingComp;
        struct URootMotionModifier* Modifier;
    } Parms{};
    Parms.MotionWarpingComp = (struct UMotionWarpingComponent*)MotionWarpingComp;
    Parms.Modifier = (struct URootMotionModifier*)Modifier;
    this->ProcessEvent(Func, &Parms);
}

struct URootMotionModifier* UAnimNotifyState_MotionWarping::AddRootMotionModifier(struct UMotionWarpingComponent* MotionWarpingComp, struct UAnimSequenceBase* Animation, float startTime, float endTime)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AnimNotifyState_MotionWarping", "AddRootMotionModifier");
    struct
    {
        struct UMotionWarpingComponent* MotionWarpingComp;
        struct UAnimSequenceBase* Animation;
        float startTime;
        float endTime;
        struct URootMotionModifier* ReturnValue;
    } Parms{};
    Parms.MotionWarpingComp = (struct UMotionWarpingComponent*)MotionWarpingComp;
    Parms.Animation = (struct UAnimSequenceBase*)Animation;
    Parms.startTime = (float)startTime;
    Parms.endTime = (float)endTime;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UMotionWarpingUtilities
struct FMotionWarpingSyncPoint UMotionWarpingUtilities::MakeMotionWarpingSyncPoint(struct FVector Location, struct FRotator Rotation)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MotionWarpingUtilities", "MakeMotionWarpingSyncPoint");
    struct
    {
        struct FVector Location;
        struct FRotator Rotation;
        struct FMotionWarpingSyncPoint ReturnValue;
    } Parms{};
    Parms.Location = (struct FVector)Location;
    Parms.Rotation = (struct FRotator)Rotation;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UMotionWarpingUtilities::GetMotionWarpingWindowsFromAnimation(struct UAnimSequenceBase* Animation, struct TArray<struct FMotionWarpingWindowData>& OutWindows)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MotionWarpingUtilities", "GetMotionWarpingWindowsFromAnimation");
    struct
    {
        struct UAnimSequenceBase* Animation;
        struct TArray<struct FMotionWarpingWindowData> OutWindows;
    } Parms{};
    Parms.Animation = (struct UAnimSequenceBase*)Animation;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    OutWindows = Parms.OutWindows;
}

void UMotionWarpingUtilities::GetMotionWarpingWindowsForSyncPointFromAnimation(struct UAnimSequenceBase* Animation, struct FName WarpTargetName, struct TArray<struct FMotionWarpingWindowData>& OutWindows)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MotionWarpingUtilities", "GetMotionWarpingWindowsForSyncPointFromAnimation");
    struct
    {
        struct UAnimSequenceBase* Animation;
        struct FName WarpTargetName;
        struct TArray<struct FMotionWarpingWindowData> OutWindows;
    } Parms{};
    Parms.Animation = (struct UAnimSequenceBase*)Animation;
    Parms.WarpTargetName = (struct FName)WarpTargetName;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    OutWindows = Parms.OutWindows;
}

struct FTransform UMotionWarpingUtilities::ExtractRootMotionFromAnimation(struct UAnimSequenceBase* Animation, float startTime, float endTime)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MotionWarpingUtilities", "ExtractRootMotionFromAnimation");
    struct
    {
        struct UAnimSequenceBase* Animation;
        float startTime;
        float endTime;
        struct FTransform ReturnValue;
    } Parms{};
    Parms.Animation = (struct UAnimSequenceBase*)Animation;
    Parms.startTime = (float)startTime;
    Parms.endTime = (float)endTime;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UMotionWarpingUtilities::BreakMotionWarpingSyncPoint(const struct FMotionWarpingSyncPoint& SyncPoint, struct FVector& Location, struct FRotator& Rotation)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MotionWarpingUtilities", "BreakMotionWarpingSyncPoint");
    struct
    {
        struct FMotionWarpingSyncPoint SyncPoint;
        struct FVector Location;
        struct FRotator Rotation;
    } Parms{};
    Parms.SyncPoint = (struct FMotionWarpingSyncPoint)SyncPoint;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    Location = Parms.Location;
    Rotation = Parms.Rotation;
}

// UMotionWarpingComponent
int32_t UMotionWarpingComponent::RemoveSyncPoint(struct FName Name)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MotionWarpingComponent", "RemoveSyncPoint");
    struct
    {
        struct FName Name;
        int32_t ReturnValue;
    } Parms{};
    Parms.Name = (struct FName)Name;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UMotionWarpingComponent::OnCharacterPhysicsMontageEnded(struct UAnimMontage* Montage, bool bInterrupted)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MotionWarpingComponent", "OnCharacterPhysicsMontageEnded");
    struct
    {
        struct UAnimMontage* Montage;
        bool bInterrupted;
    } Parms{};
    Parms.Montage = (struct UAnimMontage*)Montage;
    Parms.bInterrupted = (bool)bInterrupted;
    this->ProcessEvent(Func, &Parms);
}

void UMotionWarpingComponent::AddOrUpdateSyncPoint(struct FName Name, const struct FMotionWarpingSyncPoint& SyncPoint)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MotionWarpingComponent", "AddOrUpdateSyncPoint");
    struct
    {
        struct FName Name;
        struct FMotionWarpingSyncPoint SyncPoint;
    } Parms{};
    Parms.Name = (struct FName)Name;
    Parms.SyncPoint = (struct FMotionWarpingSyncPoint)SyncPoint;
    this->ProcessEvent(Func, &Parms);
}

// URootMotionModifier_Warp
struct URootMotionModifier_Warp* URootMotionModifier_Warp::AddRootMotionModifierSimpleWarp(struct UMotionWarpingComponent* InMotionWarpingComp, struct UAnimSequenceBase* InAnimation, float InStartTime, float InEndTime, struct FName InWarpTargetName, EWarpPointAnimProvider InWarpPointAnimProvider, struct FTransform InWarpPointAnimTransform, struct FName InWarpPointAnimBoneName, bool bInWarpTranslation, bool bInIgnoreZAxis, bool bInWarpRotation, EMotionWarpRotationType InRotationType, float InWarpRotationTimeMultiplier)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("RootMotionModifier_Warp", "AddRootMotionModifierSimpleWarp");
    struct
    {
        struct UMotionWarpingComponent* InMotionWarpingComp;
        struct UAnimSequenceBase* InAnimation;
        float InStartTime;
        float InEndTime;
        struct FName InWarpTargetName;
        enum EWarpPointAnimProvider InWarpPointAnimProvider;
        struct FTransform InWarpPointAnimTransform;
        struct FName InWarpPointAnimBoneName;
        bool bInWarpTranslation;
        bool bInIgnoreZAxis;
        bool bInWarpRotation;
        enum EMotionWarpRotationType InRotationType;
        float InWarpRotationTimeMultiplier;
        struct URootMotionModifier_Warp* ReturnValue;
    } Parms{};
    Parms.InMotionWarpingComp = (struct UMotionWarpingComponent*)InMotionWarpingComp;
    Parms.InAnimation = (struct UAnimSequenceBase*)InAnimation;
    Parms.InStartTime = (float)InStartTime;
    Parms.InEndTime = (float)InEndTime;
    Parms.InWarpTargetName = (struct FName)InWarpTargetName;
    Parms.InWarpPointAnimProvider = (enum EWarpPointAnimProvider)InWarpPointAnimProvider;
    Parms.InWarpPointAnimTransform = (struct FTransform)InWarpPointAnimTransform;
    Parms.InWarpPointAnimBoneName = (struct FName)InWarpPointAnimBoneName;
    Parms.bInWarpTranslation = (bool)bInWarpTranslation;
    Parms.bInIgnoreZAxis = (bool)bInIgnoreZAxis;
    Parms.bInWarpRotation = (bool)bInWarpRotation;
    Parms.InRotationType = (enum EMotionWarpRotationType)InRotationType;
    Parms.InWarpRotationTimeMultiplier = (float)InWarpRotationTimeMultiplier;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// URootMotionModifier_AdjustmentBlendWarp
void URootMotionModifier_AdjustmentBlendWarp::GetAdjustmentBlendIKBoneTransformAndAlpha(struct ACharacter* Character, struct FName BoneName, struct FTransform& OutTransform, float& OutAlpha)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("RootMotionModifier_AdjustmentBlendWarp", "GetAdjustmentBlendIKBoneTransformAndAlpha");
    struct
    {
        struct ACharacter* Character;
        struct FName BoneName;
        struct FTransform OutTransform;
        float OutAlpha;
    } Parms{};
    Parms.Character = (struct ACharacter*)Character;
    Parms.BoneName = (struct FName)BoneName;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    OutTransform = Parms.OutTransform;
    OutAlpha = Parms.OutAlpha;
}

struct URootMotionModifier_AdjustmentBlendWarp* URootMotionModifier_AdjustmentBlendWarp::AddRootMotionModifierAdjustmentBlendWarp(struct UMotionWarpingComponent* InMotionWarpingComp, struct UAnimSequenceBase* InAnimation, float InStartTime, float InEndTime, struct FName InWarpTargetName, EWarpPointAnimProvider InWarpPointAnimProvider, struct FTransform InWarpPointAnimTransform, struct FName InWarpPointAnimBoneName, bool bInWarpTranslation, bool bInIgnoreZAxis, bool bInWarpRotation, bool bInWarpIKBones, const struct TArray<struct FName>& InIKBones)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("RootMotionModifier_AdjustmentBlendWarp", "AddRootMotionModifierAdjustmentBlendWarp");
    struct
    {
        struct UMotionWarpingComponent* InMotionWarpingComp;
        struct UAnimSequenceBase* InAnimation;
        float InStartTime;
        float InEndTime;
        struct FName InWarpTargetName;
        enum EWarpPointAnimProvider InWarpPointAnimProvider;
        struct FTransform InWarpPointAnimTransform;
        struct FName InWarpPointAnimBoneName;
        bool bInWarpTranslation;
        bool bInIgnoreZAxis;
        bool bInWarpRotation;
        bool bInWarpIKBones;
        struct TArray<struct FName> InIKBones;
        struct URootMotionModifier_AdjustmentBlendWarp* ReturnValue;
    } Parms{};
    Parms.InMotionWarpingComp = (struct UMotionWarpingComponent*)InMotionWarpingComp;
    Parms.InAnimation = (struct UAnimSequenceBase*)InAnimation;
    Parms.InStartTime = (float)InStartTime;
    Parms.InEndTime = (float)InEndTime;
    Parms.InWarpTargetName = (struct FName)InWarpTargetName;
    Parms.InWarpPointAnimProvider = (enum EWarpPointAnimProvider)InWarpPointAnimProvider;
    Parms.InWarpPointAnimTransform = (struct FTransform)InWarpPointAnimTransform;
    Parms.InWarpPointAnimBoneName = (struct FName)InWarpPointAnimBoneName;
    Parms.bInWarpTranslation = (bool)bInWarpTranslation;
    Parms.bInIgnoreZAxis = (bool)bInIgnoreZAxis;
    Parms.bInWarpRotation = (bool)bInWarpRotation;
    Parms.bInWarpIKBones = (bool)bInWarpIKBones;
    Parms.InIKBones = (struct TArray<struct FName>)InIKBones;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// URootMotionModifier_SkewWarp
struct URootMotionModifier_SkewWarp* URootMotionModifier_SkewWarp::AddRootMotionModifierSkewWarp(struct UMotionWarpingComponent* InMotionWarpingComp, struct UAnimSequenceBase* InAnimation, float InStartTime, float InEndTime, struct FName InWarpTargetName, EWarpPointAnimProvider InWarpPointAnimProvider, struct FTransform InWarpPointAnimTransform, struct FName InWarpPointAnimBoneName, bool bInWarpTranslation, bool bInIgnoreZAxis, bool bInWarpRotation, EMotionWarpRotationType InRotationType, float InWarpRotationTimeMultiplier)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("RootMotionModifier_SkewWarp", "AddRootMotionModifierSkewWarp");
    struct
    {
        struct UMotionWarpingComponent* InMotionWarpingComp;
        struct UAnimSequenceBase* InAnimation;
        float InStartTime;
        float InEndTime;
        struct FName InWarpTargetName;
        enum EWarpPointAnimProvider InWarpPointAnimProvider;
        struct FTransform InWarpPointAnimTransform;
        struct FName InWarpPointAnimBoneName;
        bool bInWarpTranslation;
        bool bInIgnoreZAxis;
        bool bInWarpRotation;
        enum EMotionWarpRotationType InRotationType;
        float InWarpRotationTimeMultiplier;
        struct URootMotionModifier_SkewWarp* ReturnValue;
    } Parms{};
    Parms.InMotionWarpingComp = (struct UMotionWarpingComponent*)InMotionWarpingComp;
    Parms.InAnimation = (struct UAnimSequenceBase*)InAnimation;
    Parms.InStartTime = (float)InStartTime;
    Parms.InEndTime = (float)InEndTime;
    Parms.InWarpTargetName = (struct FName)InWarpTargetName;
    Parms.InWarpPointAnimProvider = (enum EWarpPointAnimProvider)InWarpPointAnimProvider;
    Parms.InWarpPointAnimTransform = (struct FTransform)InWarpPointAnimTransform;
    Parms.InWarpPointAnimBoneName = (struct FName)InWarpPointAnimBoneName;
    Parms.bInWarpTranslation = (bool)bInWarpTranslation;
    Parms.bInIgnoreZAxis = (bool)bInIgnoreZAxis;
    Parms.bInWarpRotation = (bool)bInWarpRotation;
    Parms.InRotationType = (enum EMotionWarpRotationType)InRotationType;
    Parms.InWarpRotationTimeMultiplier = (float)InWarpRotationTimeMultiplier;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

} // namespace SDK
