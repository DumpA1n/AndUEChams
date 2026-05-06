#include "AnimGraphRuntime.hpp"
#include "Engine.hpp"
#include <cstring> // memcpy for ArrayDim>1 param marshalling

namespace SDK
{

// UKismetAnimationLibrary
void UKismetAnimationLibrary::K2_TwoBoneIK(const struct FVector& RootPos, const struct FVector& JointPos, const struct FVector& EndPos, const struct FVector& JointTarget, const struct FVector& Effector, struct FVector& OutJointPos, struct FVector& OutEndPos, bool bAllowStretching, float StartStretchRatio, float MaxStretchScale)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("KismetAnimationLibrary", "K2_TwoBoneIK");
    struct
    {
        struct FVector RootPos;
        struct FVector JointPos;
        struct FVector EndPos;
        struct FVector JointTarget;
        struct FVector Effector;
        struct FVector OutJointPos;
        struct FVector OutEndPos;
        bool bAllowStretching;
        float StartStretchRatio;
        float MaxStretchScale;
    } Parms{};
    Parms.RootPos = (struct FVector)RootPos;
    Parms.JointPos = (struct FVector)JointPos;
    Parms.EndPos = (struct FVector)EndPos;
    Parms.JointTarget = (struct FVector)JointTarget;
    Parms.Effector = (struct FVector)Effector;
    Parms.bAllowStretching = (bool)bAllowStretching;
    Parms.StartStretchRatio = (float)StartStretchRatio;
    Parms.MaxStretchScale = (float)MaxStretchScale;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    OutJointPos = Parms.OutJointPos;
    OutEndPos = Parms.OutEndPos;
}

void UKismetAnimationLibrary::K2_StartProfilingTimer()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("KismetAnimationLibrary", "K2_StartProfilingTimer");
    struct
    {
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

struct FVector UKismetAnimationLibrary::K2_MakePerlinNoiseVectorAndRemap(float X, float Y, float Z, float RangeOutMinX, float RangeOutMaxX, float RangeOutMinY, float RangeOutMaxY, float RangeOutMinZ, float RangeOutMaxZ)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("KismetAnimationLibrary", "K2_MakePerlinNoiseVectorAndRemap");
    struct
    {
        float X;
        float Y;
        float Z;
        float RangeOutMinX;
        float RangeOutMaxX;
        float RangeOutMinY;
        float RangeOutMaxY;
        float RangeOutMinZ;
        float RangeOutMaxZ;
        struct FVector ReturnValue;
    } Parms{};
    Parms.X = (float)X;
    Parms.Y = (float)Y;
    Parms.Z = (float)Z;
    Parms.RangeOutMinX = (float)RangeOutMinX;
    Parms.RangeOutMaxX = (float)RangeOutMaxX;
    Parms.RangeOutMinY = (float)RangeOutMinY;
    Parms.RangeOutMaxY = (float)RangeOutMaxY;
    Parms.RangeOutMinZ = (float)RangeOutMinZ;
    Parms.RangeOutMaxZ = (float)RangeOutMaxZ;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UKismetAnimationLibrary::K2_MakePerlinNoiseAndRemap(float Value, float RangeOutMin, float RangeOutMax)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("KismetAnimationLibrary", "K2_MakePerlinNoiseAndRemap");
    struct
    {
        float Value;
        float RangeOutMin;
        float RangeOutMax;
        float ReturnValue;
    } Parms{};
    Parms.Value = (float)Value;
    Parms.RangeOutMin = (float)RangeOutMin;
    Parms.RangeOutMax = (float)RangeOutMax;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FTransform UKismetAnimationLibrary::K2_LookAt(const struct FTransform& CurrentTransform, const struct FVector& TargetPosition, struct FVector LookAtVector, bool bUseUpVector, struct FVector UpVector, float ClampConeInDegree)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("KismetAnimationLibrary", "K2_LookAt");
    struct
    {
        struct FTransform CurrentTransform;
        struct FVector TargetPosition;
        struct FVector LookAtVector;
        bool bUseUpVector;
        struct FVector UpVector;
        float ClampConeInDegree;
        struct FTransform ReturnValue;
    } Parms{};
    Parms.CurrentTransform = (struct FTransform)CurrentTransform;
    Parms.TargetPosition = (struct FVector)TargetPosition;
    Parms.LookAtVector = (struct FVector)LookAtVector;
    Parms.bUseUpVector = (bool)bUseUpVector;
    Parms.UpVector = (struct FVector)UpVector;
    Parms.ClampConeInDegree = (float)ClampConeInDegree;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UKismetAnimationLibrary::K2_EndProfilingTimer(bool bLog, struct FString LogPrefix)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("KismetAnimationLibrary", "K2_EndProfilingTimer");
    struct
    {
        bool bLog;
        struct FString LogPrefix;
        float ReturnValue;
    } Parms{};
    Parms.bLog = (bool)bLog;
    Parms.LogPrefix = (struct FString)LogPrefix;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UKismetAnimationLibrary::K2_DistanceBetweenTwoSocketsAndMapRange(struct USkeletalMeshComponent* Component, struct FName SocketOrBoneNameA, uint8_t SocketSpaceA, struct FName SocketOrBoneNameB, uint8_t SocketSpaceB, bool bRemapRange, float InRangeMin, float InRangeMax, float OutRangeMin, float OutRangeMax)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("KismetAnimationLibrary", "K2_DistanceBetweenTwoSocketsAndMapRange");
    struct
    {
        struct USkeletalMeshComponent* Component;
        struct FName SocketOrBoneNameA;
        uint8_t SocketSpaceA;
        struct FName SocketOrBoneNameB;
        uint8_t SocketSpaceB;
        bool bRemapRange;
        float InRangeMin;
        float InRangeMax;
        float OutRangeMin;
        float OutRangeMax;
        float ReturnValue;
    } Parms{};
    Parms.Component = (struct USkeletalMeshComponent*)Component;
    Parms.SocketOrBoneNameA = (struct FName)SocketOrBoneNameA;
    Parms.SocketSpaceA = (uint8_t)SocketSpaceA;
    Parms.SocketOrBoneNameB = (struct FName)SocketOrBoneNameB;
    Parms.SocketSpaceB = (uint8_t)SocketSpaceB;
    Parms.bRemapRange = (bool)bRemapRange;
    Parms.InRangeMin = (float)InRangeMin;
    Parms.InRangeMax = (float)InRangeMax;
    Parms.OutRangeMin = (float)OutRangeMin;
    Parms.OutRangeMax = (float)OutRangeMax;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FVector UKismetAnimationLibrary::K2_DirectionBetweenSockets(struct USkeletalMeshComponent* Component, struct FName SocketOrBoneNameFrom, struct FName SocketOrBoneNameTo)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("KismetAnimationLibrary", "K2_DirectionBetweenSockets");
    struct
    {
        struct USkeletalMeshComponent* Component;
        struct FName SocketOrBoneNameFrom;
        struct FName SocketOrBoneNameTo;
        struct FVector ReturnValue;
    } Parms{};
    Parms.Component = (struct USkeletalMeshComponent*)Component;
    Parms.SocketOrBoneNameFrom = (struct FName)SocketOrBoneNameFrom;
    Parms.SocketOrBoneNameTo = (struct FName)SocketOrBoneNameTo;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UKismetAnimationLibrary::K2_CalculateVelocityFromSockets(float DeltaSeconds, struct USkeletalMeshComponent* Component, struct FName SocketOrBoneName, struct FName ReferenceSocketOrBone, uint8_t SocketSpace, struct FVector OffsetInBoneSpace, struct FPositionHistory& History, int32_t NumberOfSamples, float VelocityMin, float VelocityMax, EEasingFuncType EasingType, const struct FRuntimeFloatCurve& CustomCurve)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("KismetAnimationLibrary", "K2_CalculateVelocityFromSockets");
    struct
    {
        float DeltaSeconds;
        struct USkeletalMeshComponent* Component;
        struct FName SocketOrBoneName;
        struct FName ReferenceSocketOrBone;
        uint8_t SocketSpace;
        struct FVector OffsetInBoneSpace;
        struct FPositionHistory History;
        int32_t NumberOfSamples;
        float VelocityMin;
        float VelocityMax;
        enum EEasingFuncType EasingType;
        struct FRuntimeFloatCurve CustomCurve;
        float ReturnValue;
    } Parms{};
    Parms.DeltaSeconds = (float)DeltaSeconds;
    Parms.Component = (struct USkeletalMeshComponent*)Component;
    Parms.SocketOrBoneName = (struct FName)SocketOrBoneName;
    Parms.ReferenceSocketOrBone = (struct FName)ReferenceSocketOrBone;
    Parms.SocketSpace = (uint8_t)SocketSpace;
    Parms.OffsetInBoneSpace = (struct FVector)OffsetInBoneSpace;
    Parms.NumberOfSamples = (int32_t)NumberOfSamples;
    Parms.VelocityMin = (float)VelocityMin;
    Parms.VelocityMax = (float)VelocityMax;
    Parms.EasingType = (enum EEasingFuncType)EasingType;
    Parms.CustomCurve = (struct FRuntimeFloatCurve)CustomCurve;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    History = Parms.History;
    return Parms.ReturnValue;
}

float UKismetAnimationLibrary::K2_CalculateVelocityFromPositionHistory(float DeltaSeconds, struct FVector position, struct FPositionHistory& History, int32_t NumberOfSamples, float VelocityMin, float VelocityMax)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("KismetAnimationLibrary", "K2_CalculateVelocityFromPositionHistory");
    struct
    {
        float DeltaSeconds;
        struct FVector position;
        struct FPositionHistory History;
        int32_t NumberOfSamples;
        float VelocityMin;
        float VelocityMax;
        float ReturnValue;
    } Parms{};
    Parms.DeltaSeconds = (float)DeltaSeconds;
    Parms.position = (struct FVector)position;
    Parms.NumberOfSamples = (int32_t)NumberOfSamples;
    Parms.VelocityMin = (float)VelocityMin;
    Parms.VelocityMax = (float)VelocityMax;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    History = Parms.History;
    return Parms.ReturnValue;
}

// UPlayMontageCallbackProxy
void UPlayMontageCallbackProxy::OnNotifyEndReceived(struct FName NotifyName, const struct FBranchingPointNotifyPayload& BranchingPointNotifyPayload)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PlayMontageCallbackProxy", "OnNotifyEndReceived");
    struct
    {
        struct FName NotifyName;
        struct FBranchingPointNotifyPayload BranchingPointNotifyPayload;
    } Parms{};
    Parms.NotifyName = (struct FName)NotifyName;
    Parms.BranchingPointNotifyPayload = (struct FBranchingPointNotifyPayload)BranchingPointNotifyPayload;
    this->ProcessEvent(Func, &Parms);
}

void UPlayMontageCallbackProxy::OnNotifyBeginReceived(struct FName NotifyName, const struct FBranchingPointNotifyPayload& BranchingPointNotifyPayload)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PlayMontageCallbackProxy", "OnNotifyBeginReceived");
    struct
    {
        struct FName NotifyName;
        struct FBranchingPointNotifyPayload BranchingPointNotifyPayload;
    } Parms{};
    Parms.NotifyName = (struct FName)NotifyName;
    Parms.BranchingPointNotifyPayload = (struct FBranchingPointNotifyPayload)BranchingPointNotifyPayload;
    this->ProcessEvent(Func, &Parms);
}

void UPlayMontageCallbackProxy::OnMontageEnded(struct UAnimMontage* Montage, bool bInterrupted)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PlayMontageCallbackProxy", "OnMontageEnded");
    struct
    {
        struct UAnimMontage* Montage;
        bool bInterrupted;
    } Parms{};
    Parms.Montage = (struct UAnimMontage*)Montage;
    Parms.bInterrupted = (bool)bInterrupted;
    this->ProcessEvent(Func, &Parms);
}

void UPlayMontageCallbackProxy::OnMontageBlendingOut(struct UAnimMontage* Montage, bool bInterrupted)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PlayMontageCallbackProxy", "OnMontageBlendingOut");
    struct
    {
        struct UAnimMontage* Montage;
        bool bInterrupted;
    } Parms{};
    Parms.Montage = (struct UAnimMontage*)Montage;
    Parms.bInterrupted = (bool)bInterrupted;
    this->ProcessEvent(Func, &Parms);
}

struct UPlayMontageCallbackProxy* UPlayMontageCallbackProxy::CreateProxyObjectForPlayMontage(struct USkeletalMeshComponent* InSkeletalMeshComponent, struct UAnimMontage* MontageToPlay, float PlayRate, float StartingPosition, struct FName StartingSection)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("PlayMontageCallbackProxy", "CreateProxyObjectForPlayMontage");
    struct
    {
        struct USkeletalMeshComponent* InSkeletalMeshComponent;
        struct UAnimMontage* MontageToPlay;
        float PlayRate;
        float StartingPosition;
        struct FName StartingSection;
        struct UPlayMontageCallbackProxy* ReturnValue;
    } Parms{};
    Parms.InSkeletalMeshComponent = (struct USkeletalMeshComponent*)InSkeletalMeshComponent;
    Parms.MontageToPlay = (struct UAnimMontage*)MontageToPlay;
    Parms.PlayRate = (float)PlayRate;
    Parms.StartingPosition = (float)StartingPosition;
    Parms.StartingSection = (struct FName)StartingSection;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

} // namespace SDK
