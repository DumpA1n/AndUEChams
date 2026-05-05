#include "ZZAnimationLib.hpp"
#include "Engine.hpp"
#include <cstring> // memcpy for ArrayDim>1 param marshalling

namespace SDK
{

// UZZAnimationLibBPLibrary
void UZZAnimationLibBPLibrary::ZZPredictStopOffset(struct UCharacterMovementComponent* inCharacterMovementComp, uint8_t isPivot, struct FVector& outPredictOffset, uint8_t& Success)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("ZZAnimationLibBPLibrary", "ZZPredictStopOffset");
    struct
    {
        struct UCharacterMovementComponent* inCharacterMovementComp;
        uint8_t isPivot;
        struct FVector outPredictOffset;
        uint8_t Success;
    } Parms{};
    Parms.inCharacterMovementComp = (struct UCharacterMovementComponent*)inCharacterMovementComp;
    Parms.isPivot = (uint8_t)isPivot;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    outPredictOffset = Parms.outPredictOffset;
    Success = Parms.Success;
}

struct FAnimInstanceAttributeDict UZZAnimationLibBPLibrary::ZZMergeAttrDicts(struct TArray<struct FAnimInstanceAttributeDict>& inDicts)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("ZZAnimationLibBPLibrary", "ZZMergeAttrDicts");
    struct
    {
        struct TArray<struct FAnimInstanceAttributeDict> inDicts;
        struct FAnimInstanceAttributeDict ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    inDicts = Parms.inDicts;
    return Parms.ReturnValue;
}

struct FVector UZZAnimationLibBPLibrary::ZZGetVectorAttrFromMap(const struct FAnimInstanceAttributeDict& inDict, struct FName KeyName, uint8_t& Success)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("ZZAnimationLibBPLibrary", "ZZGetVectorAttrFromMap");
    struct
    {
        struct FAnimInstanceAttributeDict inDict;
        struct FName KeyName;
        uint8_t Success;
        struct FVector ReturnValue;
    } Parms{};
    Parms.inDict = (struct FAnimInstanceAttributeDict)inDict;
    Parms.KeyName = (struct FName)KeyName;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    Success = Parms.Success;
    return Parms.ReturnValue;
}

float UZZAnimationLibBPLibrary::ZZGetStrafeMovingDirectionWithCustomRange(struct FCustomizedOrientationWarpingAngleSetting AngleSetting, struct FVector MovingDirectionInLocalSpace, struct FVector ForwardAxis, struct FVector UpAxis)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("ZZAnimationLibBPLibrary", "ZZGetStrafeMovingDirectionWithCustomRange");
    struct
    {
        struct FCustomizedOrientationWarpingAngleSetting AngleSetting;
        struct FVector MovingDirectionInLocalSpace;
        struct FVector ForwardAxis;
        struct FVector UpAxis;
        float ReturnValue;
    } Parms{};
    Parms.AngleSetting = (struct FCustomizedOrientationWarpingAngleSetting)AngleSetting;
    Parms.MovingDirectionInLocalSpace = (struct FVector)MovingDirectionInLocalSpace;
    Parms.ForwardAxis = (struct FVector)ForwardAxis;
    Parms.UpAxis = (struct FVector)UpAxis;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UZZAnimationLibBPLibrary::ZZGetStrafeMovingDirectionWithBufferWithCustomRangeByReference(struct FCustomizedOrientationWarpingAngleSetting& AngleSetting, float inStrafeMovingDirection, int32_t& DirectionA, float& directionAngle, int32_t PreviousDirection, float bufferValue)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("ZZAnimationLibBPLibrary", "ZZGetStrafeMovingDirectionWithBufferWithCustomRangeByReference");
    struct
    {
        struct FCustomizedOrientationWarpingAngleSetting AngleSetting;
        float inStrafeMovingDirection;
        int32_t DirectionA;
        float directionAngle;
        int32_t PreviousDirection;
        float bufferValue;
    } Parms{};
    Parms.inStrafeMovingDirection = (float)inStrafeMovingDirection;
    Parms.PreviousDirection = (int32_t)PreviousDirection;
    Parms.bufferValue = (float)bufferValue;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    AngleSetting = Parms.AngleSetting;
    DirectionA = Parms.DirectionA;
    directionAngle = Parms.directionAngle;
}

void UZZAnimationLibBPLibrary::ZZGetStrafeMovingDirectionWithBufferWithCustomRange(struct FCustomizedOrientationWarpingAngleSetting AngleSetting, float inStrafeMovingDirection, int32_t& DirectionA, int32_t PreviousDirection, float bufferValue)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("ZZAnimationLibBPLibrary", "ZZGetStrafeMovingDirectionWithBufferWithCustomRange");
    struct
    {
        struct FCustomizedOrientationWarpingAngleSetting AngleSetting;
        float inStrafeMovingDirection;
        int32_t DirectionA;
        int32_t PreviousDirection;
        float bufferValue;
    } Parms{};
    Parms.AngleSetting = (struct FCustomizedOrientationWarpingAngleSetting)AngleSetting;
    Parms.inStrafeMovingDirection = (float)inStrafeMovingDirection;
    Parms.PreviousDirection = (int32_t)PreviousDirection;
    Parms.bufferValue = (float)bufferValue;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    DirectionA = Parms.DirectionA;
}

void UZZAnimationLibBPLibrary::ZZGetStrafeMovingDirectionWithBuffer(float inStrafeMovingDirection, ECharacterLocalDirection& DirectionA, ECharacterLocalDirection PreviousDirection, float bufferValue)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("ZZAnimationLibBPLibrary", "ZZGetStrafeMovingDirectionWithBuffer");
    struct
    {
        float inStrafeMovingDirection;
        enum ECharacterLocalDirection DirectionA;
        enum ECharacterLocalDirection PreviousDirection;
        float bufferValue;
    } Parms{};
    Parms.inStrafeMovingDirection = (float)inStrafeMovingDirection;
    Parms.PreviousDirection = (enum ECharacterLocalDirection)PreviousDirection;
    Parms.bufferValue = (float)bufferValue;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    DirectionA = Parms.DirectionA;
}

void UZZAnimationLibBPLibrary::ZZGetStrafeMovingDirectionsWithCustomRange(struct FCustomizedOrientationWarpingAngleSetting AngleSetting, float inStrafeMovingDirection, ECharacterLocalDirection& DirectionA, ECharacterLocalDirection& DirectionB, float& BlendAlpha)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("ZZAnimationLibBPLibrary", "ZZGetStrafeMovingDirectionsWithCustomRange");
    struct
    {
        struct FCustomizedOrientationWarpingAngleSetting AngleSetting;
        float inStrafeMovingDirection;
        enum ECharacterLocalDirection DirectionA;
        enum ECharacterLocalDirection DirectionB;
        float BlendAlpha;
    } Parms{};
    Parms.AngleSetting = (struct FCustomizedOrientationWarpingAngleSetting)AngleSetting;
    Parms.inStrafeMovingDirection = (float)inStrafeMovingDirection;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    DirectionA = Parms.DirectionA;
    DirectionB = Parms.DirectionB;
    BlendAlpha = Parms.BlendAlpha;
}

void UZZAnimationLibBPLibrary::ZZGetStrafeMovingDirections(float inStrafeMovingDirection, ECharacterLocalDirection& DirectionA, ECharacterLocalDirection& DirectionB, float& BlendAlpha)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("ZZAnimationLibBPLibrary", "ZZGetStrafeMovingDirections");
    struct
    {
        float inStrafeMovingDirection;
        enum ECharacterLocalDirection DirectionA;
        enum ECharacterLocalDirection DirectionB;
        float BlendAlpha;
    } Parms{};
    Parms.inStrafeMovingDirection = (float)inStrafeMovingDirection;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    DirectionA = Parms.DirectionA;
    DirectionB = Parms.DirectionB;
    BlendAlpha = Parms.BlendAlpha;
}

float UZZAnimationLibBPLibrary::ZZGetStrafeMovingDirection(struct FVector MovingDirectionInLocalSpace, struct FVector ForwardAxis, struct FVector UpAxis)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("ZZAnimationLibBPLibrary", "ZZGetStrafeMovingDirection");
    struct
    {
        struct FVector MovingDirectionInLocalSpace;
        struct FVector ForwardAxis;
        struct FVector UpAxis;
        float ReturnValue;
    } Parms{};
    Parms.MovingDirectionInLocalSpace = (struct FVector)MovingDirectionInLocalSpace;
    Parms.ForwardAxis = (struct FVector)ForwardAxis;
    Parms.UpAxis = (struct FVector)UpAxis;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UZZAnimationLibBPLibrary::ZZGetStrafeMainDirectionWithCustomRange(struct FCustomizedOrientationWarpingAngleSetting AngleSetting, float inMovingCardinalDirection)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("ZZAnimationLibBPLibrary", "ZZGetStrafeMainDirectionWithCustomRange");
    struct
    {
        struct FCustomizedOrientationWarpingAngleSetting AngleSetting;
        float inMovingCardinalDirection;
        int32_t ReturnValue;
    } Parms{};
    Parms.AngleSetting = (struct FCustomizedOrientationWarpingAngleSetting)AngleSetting;
    Parms.inMovingCardinalDirection = (float)inMovingCardinalDirection;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

ECharacterLocalDirection UZZAnimationLibBPLibrary::ZZGetStrafeMainDirection(float inMovingCardinalDirection)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("ZZAnimationLibBPLibrary", "ZZGetStrafeMainDirection");
    struct
    {
        float inMovingCardinalDirection;
        enum ECharacterLocalDirection ReturnValue;
    } Parms{};
    Parms.inMovingCardinalDirection = (float)inMovingCardinalDirection;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UZZAnimationLibBPLibrary::ZZGetSpecificStateWeightByNames(struct UAnimInstance* inAnimInstance, struct FName inMachineName, struct FName inStateName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("ZZAnimationLibBPLibrary", "ZZGetSpecificStateWeightByNames");
    struct
    {
        struct UAnimInstance* inAnimInstance;
        struct FName inMachineName;
        struct FName inStateName;
        float ReturnValue;
    } Parms{};
    Parms.inAnimInstance = (struct UAnimInstance*)inAnimInstance;
    Parms.inMachineName = (struct FName)inMachineName;
    Parms.inStateName = (struct FName)inStateName;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FRotator UZZAnimationLibBPLibrary::ZZGetRotatorAttrFromMap(const struct FAnimInstanceAttributeDict& inDict, struct FName KeyName, uint8_t& Success)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("ZZAnimationLibBPLibrary", "ZZGetRotatorAttrFromMap");
    struct
    {
        struct FAnimInstanceAttributeDict inDict;
        struct FName KeyName;
        uint8_t Success;
        struct FRotator ReturnValue;
    } Parms{};
    Parms.inDict = (struct FAnimInstanceAttributeDict)inDict;
    Parms.KeyName = (struct FName)KeyName;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    Success = Parms.Success;
    return Parms.ReturnValue;
}

void UZZAnimationLibBPLibrary::ZZGetMovementRelatedInfo(struct UCharacterMovementComponent* inCharacterMovement, struct FAnimMovementData& outAnimMovementData)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("ZZAnimationLibBPLibrary", "ZZGetMovementRelatedInfo");
    struct
    {
        struct UCharacterMovementComponent* inCharacterMovement;
        struct FAnimMovementData outAnimMovementData;
    } Parms{};
    Parms.inCharacterMovement = (struct UCharacterMovementComponent*)inCharacterMovement;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    outAnimMovementData = Parms.outAnimMovementData;
}

int32_t UZZAnimationLibBPLibrary::ZZGetIntegerAttrFromMap(const struct FAnimInstanceAttributeDict& inDict, struct FName KeyName, uint8_t& Success)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("ZZAnimationLibBPLibrary", "ZZGetIntegerAttrFromMap");
    struct
    {
        struct FAnimInstanceAttributeDict inDict;
        struct FName KeyName;
        uint8_t Success;
        int32_t ReturnValue;
    } Parms{};
    Parms.inDict = (struct FAnimInstanceAttributeDict)inDict;
    Parms.KeyName = (struct FName)KeyName;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    Success = Parms.Success;
    return Parms.ReturnValue;
}

float UZZAnimationLibBPLibrary::ZZGetFloatAttrFromMap(const struct FAnimInstanceAttributeDict& inDict, struct FName KeyName, uint8_t& Success)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("ZZAnimationLibBPLibrary", "ZZGetFloatAttrFromMap");
    struct
    {
        struct FAnimInstanceAttributeDict inDict;
        struct FName KeyName;
        uint8_t Success;
        float ReturnValue;
    } Parms{};
    Parms.inDict = (struct FAnimInstanceAttributeDict)inDict;
    Parms.KeyName = (struct FName)KeyName;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    Success = Parms.Success;
    return Parms.ReturnValue;
}

float UZZAnimationLibBPLibrary::ZZGetCurrentStateWeightByName(struct UAnimInstance* inAnimInstance, struct FName inMachineName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("ZZAnimationLibBPLibrary", "ZZGetCurrentStateWeightByName");
    struct
    {
        struct UAnimInstance* inAnimInstance;
        struct FName inMachineName;
        float ReturnValue;
    } Parms{};
    Parms.inAnimInstance = (struct UAnimInstance*)inAnimInstance;
    Parms.inMachineName = (struct FName)inMachineName;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FName UZZAnimationLibBPLibrary::ZZGetCurrentStateNameByMachineName(struct UAnimInstance* inAnimInstance, struct FName inMachineName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("ZZAnimationLibBPLibrary", "ZZGetCurrentStateNameByMachineName");
    struct
    {
        struct UAnimInstance* inAnimInstance;
        struct FName inMachineName;
        struct FName ReturnValue;
    } Parms{};
    Parms.inAnimInstance = (struct UAnimInstance*)inAnimInstance;
    Parms.inMachineName = (struct FName)inMachineName;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UZZAnimationLibBPLibrary::ZZGetBoolAttrFromMap(const struct FAnimInstanceAttributeDict& inDict, struct FName KeyName, uint8_t& Success)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("ZZAnimationLibBPLibrary", "ZZGetBoolAttrFromMap");
    struct
    {
        struct FAnimInstanceAttributeDict inDict;
        struct FName KeyName;
        uint8_t Success;
        uint8_t ReturnValue;
    } Parms{};
    Parms.inDict = (struct FAnimInstanceAttributeDict)inDict;
    Parms.KeyName = (struct FName)KeyName;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    Success = Parms.Success;
    return Parms.ReturnValue;
}

struct UAnimSequence* UZZAnimationLibBPLibrary::ZZGetAnimSeqAttrFromMap(const struct FAnimInstanceAttributeDict& inDict, struct FName KeyName, uint8_t& Success)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("ZZAnimationLibBPLibrary", "ZZGetAnimSeqAttrFromMap");
    struct
    {
        struct FAnimInstanceAttributeDict inDict;
        struct FName KeyName;
        uint8_t Success;
        struct UAnimSequence* ReturnValue;
    } Parms{};
    Parms.inDict = (struct FAnimInstanceAttributeDict)inDict;
    Parms.KeyName = (struct FName)KeyName;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    Success = Parms.Success;
    return Parms.ReturnValue;
}

float UZZAnimationLibBPLibrary::ZZEvaluateCurveName(struct UAnimSequence* inAnimSeq, float InTime, uint8_t& Success, struct FName CurveName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("ZZAnimationLibBPLibrary", "ZZEvaluateCurveName");
    struct
    {
        struct UAnimSequence* inAnimSeq;
        float InTime;
        uint8_t Success;
        struct FName CurveName;
        float ReturnValue;
    } Parms{};
    Parms.inAnimSeq = (struct UAnimSequence*)inAnimSeq;
    Parms.InTime = (float)InTime;
    Parms.CurveName = (struct FName)CurveName;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    Success = Parms.Success;
    return Parms.ReturnValue;
}

struct FAnimInstanceAttributeDict UZZAnimationLibBPLibrary::ZZCollectAnimBPAttributeFromComponents(struct AActor* TargetActor, uint8_t useCustomComponentTagName, struct FName customComponentTagName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("ZZAnimationLibBPLibrary", "ZZCollectAnimBPAttributeFromComponents");
    struct
    {
        struct AActor* TargetActor;
        uint8_t useCustomComponentTagName;
        struct FName customComponentTagName;
        struct FAnimInstanceAttributeDict ReturnValue;
    } Parms{};
    Parms.TargetActor = (struct AActor*)TargetActor;
    Parms.useCustomComponentTagName = (uint8_t)useCustomComponentTagName;
    Parms.customComponentTagName = (struct FName)customComponentTagName;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UZZAnimationLibBPLibrary::ZZCalculatTargetFrame(float InTargetValue, struct UAnimSequence* inAnimSequence, EFindTargetFrameResult& OutResult, struct FName CurveName, uint8_t curveIsInOrder)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("ZZAnimationLibBPLibrary", "ZZCalculatTargetFrame");
    struct
    {
        float InTargetValue;
        struct UAnimSequence* inAnimSequence;
        enum EFindTargetFrameResult OutResult;
        struct FName CurveName;
        uint8_t curveIsInOrder;
        float ReturnValue;
    } Parms{};
    Parms.InTargetValue = (float)InTargetValue;
    Parms.inAnimSequence = (struct UAnimSequence*)inAnimSequence;
    Parms.CurveName = (struct FName)CurveName;
    Parms.curveIsInOrder = (uint8_t)curveIsInOrder;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    OutResult = Parms.OutResult;
    return Parms.ReturnValue;
}

void UZZAnimationLibBPLibrary::ZZCalculatOrientationWarpingAngle(float directionAngle, float& outLocomotionNorthAngle, float& outLocomotionWestAngle, float& outLocomotionSouthAngle, float& outLocomotionEastAngle)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("ZZAnimationLibBPLibrary", "ZZCalculatOrientationWarpingAngle");
    struct
    {
        float directionAngle;
        float outLocomotionNorthAngle;
        float outLocomotionWestAngle;
        float outLocomotionSouthAngle;
        float outLocomotionEastAngle;
    } Parms{};
    Parms.directionAngle = (float)directionAngle;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    outLocomotionNorthAngle = Parms.outLocomotionNorthAngle;
    outLocomotionWestAngle = Parms.outLocomotionWestAngle;
    outLocomotionSouthAngle = Parms.outLocomotionSouthAngle;
    outLocomotionEastAngle = Parms.outLocomotionEastAngle;
}

struct TArray<struct FString> UZZAnimationLibBPLibrary::ZZAttrDictDebugStrs(const struct FAnimInstanceAttributeDict& inDict)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("ZZAnimationLibBPLibrary", "ZZAttrDictDebugStrs");
    struct
    {
        struct FAnimInstanceAttributeDict inDict;
        struct TArray<struct FString> ReturnValue;
    } Parms{};
    Parms.inDict = (struct FAnimInstanceAttributeDict)inDict;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UZZAnimationLibBPLibrary::ZZAnimationLibSampleFunction(float Param)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("ZZAnimationLibBPLibrary", "ZZAnimationLibSampleFunction");
    struct
    {
        float Param;
        float ReturnValue;
    } Parms{};
    Parms.Param = (float)Param;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UZZAnimationLibBPLibrary::SwitchToCPUSkinning(struct USkinnedMeshComponent* InMesh, uint8_t inEnableCPUSkinning)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("ZZAnimationLibBPLibrary", "SwitchToCPUSkinning");
    struct
    {
        struct USkinnedMeshComponent* InMesh;
        uint8_t inEnableCPUSkinning;
    } Parms{};
    Parms.InMesh = (struct USkinnedMeshComponent*)InMesh;
    Parms.inEnableCPUSkinning = (uint8_t)inEnableCPUSkinning;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

struct FQuat UZZAnimationLibBPLibrary::SolveAimWithHardClamp(const struct FTransform& CurrentTransform, const struct FVector& TargetPosition, const struct FVector& AimVector, float UpVectorWeight, const struct FVector& UpVector, float AimClampInDegree)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("ZZAnimationLibBPLibrary", "SolveAimWithHardClamp");
    struct
    {
        struct FTransform CurrentTransform;
        struct FVector TargetPosition;
        struct FVector AimVector;
        float UpVectorWeight;
        struct FVector UpVector;
        float AimClampInDegree;
        struct FQuat ReturnValue;
    } Parms{};
    Parms.CurrentTransform = (struct FTransform)CurrentTransform;
    Parms.TargetPosition = (struct FVector)TargetPosition;
    Parms.AimVector = (struct FVector)AimVector;
    Parms.UpVectorWeight = (float)UpVectorWeight;
    Parms.UpVector = (struct FVector)UpVector;
    Parms.AimClampInDegree = (float)AimClampInDegree;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UZZAnimationLibBPLibrary::GetValidSectionFromCustomizedOrientationWarpingAngleSetting(struct FCustomizedOrientationWarpingAngleSetting OrientationWarpingAngleSetting, float directionAngle)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("ZZAnimationLibBPLibrary", "GetValidSectionFromCustomizedOrientationWarpingAngleSetting");
    struct
    {
        struct FCustomizedOrientationWarpingAngleSetting OrientationWarpingAngleSetting;
        float directionAngle;
        int32_t ReturnValue;
    } Parms{};
    Parms.OrientationWarpingAngleSetting = (struct FCustomizedOrientationWarpingAngleSetting)OrientationWarpingAngleSetting;
    Parms.directionAngle = (float)directionAngle;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct TArray<float> UZZAnimationLibBPLibrary::GetLocomotionOfAllDirections(struct FCustomizedOrientationWarpingAngleSetting OrientationWarpingAngleSetting, float directionAngle)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("ZZAnimationLibBPLibrary", "GetLocomotionOfAllDirections");
    struct
    {
        struct FCustomizedOrientationWarpingAngleSetting OrientationWarpingAngleSetting;
        float directionAngle;
        struct TArray<float> ReturnValue;
    } Parms{};
    Parms.OrientationWarpingAngleSetting = (struct FCustomizedOrientationWarpingAngleSetting)OrientationWarpingAngleSetting;
    Parms.directionAngle = (float)directionAngle;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UZZAnimationLibBPLibrary::GetLocomotionOfACertainDirection(struct FCustomizedOrientationWarpingAngleSetting OrientationWarpingAngleSetting, float directionAngle, int32_t DirectionIndex)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("ZZAnimationLibBPLibrary", "GetLocomotionOfACertainDirection");
    struct
    {
        struct FCustomizedOrientationWarpingAngleSetting OrientationWarpingAngleSetting;
        float directionAngle;
        int32_t DirectionIndex;
        float ReturnValue;
    } Parms{};
    Parms.OrientationWarpingAngleSetting = (struct FCustomizedOrientationWarpingAngleSetting)OrientationWarpingAngleSetting;
    Parms.directionAngle = (float)directionAngle;
    Parms.DirectionIndex = (int32_t)DirectionIndex;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FTransform UZZAnimationLibBPLibrary::GetLocalSpaceBoneTransformOfRefPose(struct UAnimSequence* inAnimSequence, struct FName InBoneName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("ZZAnimationLibBPLibrary", "GetLocalSpaceBoneTransformOfRefPose");
    struct
    {
        struct UAnimSequence* inAnimSequence;
        struct FName InBoneName;
        struct FTransform ReturnValue;
    } Parms{};
    Parms.inAnimSequence = (struct UAnimSequence*)inAnimSequence;
    Parms.InBoneName = (struct FName)InBoneName;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FTransform UZZAnimationLibBPLibrary::GetLocalSpaceBoneTransformOfAnimSequence(struct UAnimSequence* inAnimSequence, float InTime, struct FName InBoneName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("ZZAnimationLibBPLibrary", "GetLocalSpaceBoneTransformOfAnimSequence");
    struct
    {
        struct UAnimSequence* inAnimSequence;
        float InTime;
        struct FName InBoneName;
        struct FTransform ReturnValue;
    } Parms{};
    Parms.inAnimSequence = (struct UAnimSequence*)inAnimSequence;
    Parms.InTime = (float)InTime;
    Parms.InBoneName = (struct FName)InBoneName;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FTransform UZZAnimationLibBPLibrary::GetComponentSpaceBoneTransformOfAnimSequenceNew(struct UAnimSequence* inAnimSequence, const float& InTime, const struct FName& InBoneName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("ZZAnimationLibBPLibrary", "GetComponentSpaceBoneTransformOfAnimSequenceNew");
    struct
    {
        struct UAnimSequence* inAnimSequence;
        float InTime;
        struct FName InBoneName;
        struct FTransform ReturnValue;
    } Parms{};
    Parms.inAnimSequence = (struct UAnimSequence*)inAnimSequence;
    Parms.InTime = (float)InTime;
    Parms.InBoneName = (struct FName)InBoneName;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FTransform UZZAnimationLibBPLibrary::GetComponentSpaceBoneTransformOfAnimSequenceInEditor(struct UAnimSequence* inAnimSequence, float InTime, struct FName InBoneName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("ZZAnimationLibBPLibrary", "GetComponentSpaceBoneTransformOfAnimSequenceInEditor");
    struct
    {
        struct UAnimSequence* inAnimSequence;
        float InTime;
        struct FName InBoneName;
        struct FTransform ReturnValue;
    } Parms{};
    Parms.inAnimSequence = (struct UAnimSequence*)inAnimSequence;
    Parms.InTime = (float)InTime;
    Parms.InBoneName = (struct FName)InBoneName;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UZZAnimationLibBPLibrary::ConvertStrengthToSpringParams(float& OutSpring, float& OutDamping, float InStrength, float InDampingRatio, float InExtraDamping)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("ZZAnimationLibBPLibrary", "ConvertStrengthToSpringParams");
    struct
    {
        float OutSpring;
        float OutDamping;
        float InStrength;
        float InDampingRatio;
        float InExtraDamping;
    } Parms{};
    Parms.InStrength = (float)InStrength;
    Parms.InDampingRatio = (float)InDampingRatio;
    Parms.InExtraDamping = (float)InExtraDamping;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    OutSpring = Parms.OutSpring;
    OutDamping = Parms.OutDamping;
}

void UZZAnimationLibBPLibrary::ConvertSpringToStrengthParams(float& OutStrength, float& OutDampingRatio, float& OutExtraDamping, float InSpring, float InDamping)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("ZZAnimationLibBPLibrary", "ConvertSpringToStrengthParams");
    struct
    {
        float OutStrength;
        float OutDampingRatio;
        float OutExtraDamping;
        float InSpring;
        float InDamping;
    } Parms{};
    Parms.InSpring = (float)InSpring;
    Parms.InDamping = (float)InDamping;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    OutStrength = Parms.OutStrength;
    OutDampingRatio = Parms.OutDampingRatio;
    OutExtraDamping = Parms.OutExtraDamping;
}

void UZZAnimationLibBPLibrary::CalcVectorSpringDamper(struct FVector& InOutValue, struct FVector& InOutValueRate, const struct FVector& InTargetValue, const struct FVector& InTargetValueRate, float InDeltaTime, float InUndampedFrequency, float InDampingRatio)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("ZZAnimationLibBPLibrary", "CalcVectorSpringDamper");
    struct
    {
        struct FVector InOutValue;
        struct FVector InOutValueRate;
        struct FVector InTargetValue;
        struct FVector InTargetValueRate;
        float InDeltaTime;
        float InUndampedFrequency;
        float InDampingRatio;
    } Parms{};
    Parms.InTargetValue = (struct FVector)InTargetValue;
    Parms.InTargetValueRate = (struct FVector)InTargetValueRate;
    Parms.InDeltaTime = (float)InDeltaTime;
    Parms.InUndampedFrequency = (float)InUndampedFrequency;
    Parms.InDampingRatio = (float)InDampingRatio;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    InOutValue = Parms.InOutValue;
    InOutValueRate = Parms.InOutValueRate;
}

void UZZAnimationLibBPLibrary::CalcSpringDamper(float& InOutValue, float& InOutValueRate, const float& InTargetValue, const float& InTargetValueRate, float InDeltaTime, float InUndampedFrequency, float InDampingRatio)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("ZZAnimationLibBPLibrary", "CalcSpringDamper");
    struct
    {
        float InOutValue;
        float InOutValueRate;
        float InTargetValue;
        float InTargetValueRate;
        float InDeltaTime;
        float InUndampedFrequency;
        float InDampingRatio;
    } Parms{};
    Parms.InTargetValue = (float)InTargetValue;
    Parms.InTargetValueRate = (float)InTargetValueRate;
    Parms.InDeltaTime = (float)InDeltaTime;
    Parms.InUndampedFrequency = (float)InUndampedFrequency;
    Parms.InDampingRatio = (float)InDampingRatio;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    InOutValue = Parms.InOutValue;
    InOutValueRate = Parms.InOutValueRate;
}

// IZZAnimAttrFetchInterface
struct FAnimInstanceAttributeDict IZZAnimAttrFetchInterface::FetchAnimAttr()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ZZAnimAttrFetchInterface", "FetchAnimAttr");
    struct
    {
        struct FAnimInstanceAttributeDict ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

} // namespace SDK
