#include "MFAnimationRuntime.hpp"
#include "Engine.hpp"
#include <cstring> // memcpy for ArrayDim>1 param marshalling

namespace SDK
{

// UMFAnimationtFunctionLibrary
void UMFAnimationtFunctionLibrary::SpringDamper_Stiffness_Damping(float& X, float& V, float x_goal, float v_goal, float Stiffness, float Damping, float dt, float eps)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFAnimationtFunctionLibrary", "SpringDamper_Stiffness_Damping");
    struct
    {
        float X;
        float V;
        float x_goal;
        float v_goal;
        float Stiffness;
        float Damping;
        float dt;
        float eps;
    } Parms{};
    Parms.x_goal = (float)x_goal;
    Parms.v_goal = (float)v_goal;
    Parms.Stiffness = (float)Stiffness;
    Parms.Damping = (float)Damping;
    Parms.dt = (float)dt;
    Parms.eps = (float)eps;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    X = Parms.X;
    V = Parms.V;
}

bool UMFAnimationtFunctionLibrary::SoftGetBoneTransformByBoneIndex(struct FTransform& OutTransform, struct TSoftObjectPtr<UAnimSequence> InAnimSequence, int32_t InBoneIndex, bool bUseRawData)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFAnimationtFunctionLibrary", "SoftGetBoneTransformByBoneIndex");
    struct
    {
        struct FTransform OutTransform;
        struct TSoftObjectPtr<UAnimSequence> InAnimSequence;
        int32_t InBoneIndex;
        bool bUseRawData;
        bool ReturnValue;
    } Parms{};
    Parms.InAnimSequence = (struct TSoftObjectPtr<UAnimSequence>)InAnimSequence;
    Parms.InBoneIndex = (int32_t)InBoneIndex;
    Parms.bUseRawData = (bool)bUseRawData;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    OutTransform = Parms.OutTransform;
    return Parms.ReturnValue;
}

int32_t UMFAnimationtFunctionLibrary::RemoveAnimationNotifyEventsByName(struct UAnimMontage* AnimMontage, struct FName NotifyName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFAnimationtFunctionLibrary", "RemoveAnimationNotifyEventsByName");
    struct
    {
        struct UAnimMontage* AnimMontage;
        struct FName NotifyName;
        int32_t ReturnValue;
    } Parms{};
    Parms.AnimMontage = (struct UAnimMontage*)AnimMontage;
    Parms.NotifyName = (struct FName)NotifyName;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UMFAnimationtFunctionLibrary::IsExistSample(struct UBlendSpaceBase* InBlendSpace, float InTransitionType)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFAnimationtFunctionLibrary", "IsExistSample");
    struct
    {
        struct UBlendSpaceBase* InBlendSpace;
        float InTransitionType;
        bool ReturnValue;
    } Parms{};
    Parms.InBlendSpace = (struct UBlendSpaceBase*)InBlendSpace;
    Parms.InTransitionType = (float)InTransitionType;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UMFAnimationtFunctionLibrary::GetCurveValueByName(struct UAnimSequenceBase* InAnimSequence, struct FName CurveName, float Time, bool bUseRawData)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFAnimationtFunctionLibrary", "GetCurveValueByName");
    struct
    {
        struct UAnimSequenceBase* InAnimSequence;
        struct FName CurveName;
        float Time;
        bool bUseRawData;
        float ReturnValue;
    } Parms{};
    Parms.InAnimSequence = (struct UAnimSequenceBase*)InAnimSequence;
    Parms.CurveName = (struct FName)CurveName;
    Parms.Time = (float)Time;
    Parms.bUseRawData = (bool)bUseRawData;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UMFAnimationtFunctionLibrary::GetBoneTransformByBoneIndex(struct FTransform& OutTransform, struct UAnimSequence* InAnimSequence, int32_t InBoneIndex, bool bUseRawData, float Time)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFAnimationtFunctionLibrary", "GetBoneTransformByBoneIndex");
    struct
    {
        struct FTransform OutTransform;
        struct UAnimSequence* InAnimSequence;
        int32_t InBoneIndex;
        bool bUseRawData;
        float Time;
        bool ReturnValue;
    } Parms{};
    Parms.InAnimSequence = (struct UAnimSequence*)InAnimSequence;
    Parms.InBoneIndex = (int32_t)InBoneIndex;
    Parms.bUseRawData = (bool)bUseRawData;
    Parms.Time = (float)Time;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    OutTransform = Parms.OutTransform;
    return Parms.ReturnValue;
}

struct UAnimSequence* UMFAnimationtFunctionLibrary::GetBlendSpaceAnimationByType(struct UBlendSpace1D* BlendSpace, int32_t BlendType)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFAnimationtFunctionLibrary", "GetBlendSpaceAnimationByType");
    struct
    {
        struct UBlendSpace1D* BlendSpace;
        int32_t BlendType;
        struct UAnimSequence* ReturnValue;
    } Parms{};
    Parms.BlendSpace = (struct UBlendSpace1D*)BlendSpace;
    Parms.BlendType = (int32_t)BlendType;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UAnimSequence* UMFAnimationtFunctionLibrary::GetBlendSpaceAnimationByInput(struct UBlendSpaceBase* BlendSpace, struct FVector& BlendInput)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFAnimationtFunctionLibrary", "GetBlendSpaceAnimationByInput");
    struct
    {
        struct UBlendSpaceBase* BlendSpace;
        struct FVector BlendInput;
        struct UAnimSequence* ReturnValue;
    } Parms{};
    Parms.BlendSpace = (struct UBlendSpaceBase*)BlendSpace;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    BlendInput = Parms.BlendInput;
    return Parms.ReturnValue;
}

float UMFAnimationtFunctionLibrary::FindBlendSpaceNormalizeTimeFromCurveValue(struct UBlendSpaceBase* InBlendSpace, struct FName Curve, float CurveValue, float InputX, float InputY, float& AnimSeqLength, float& AnimSeqTime, struct UAnimSequenceBase*& OutAnimSequence, float LastEvaluateTime)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFAnimationtFunctionLibrary", "FindBlendSpaceNormalizeTimeFromCurveValue");
    struct
    {
        struct UBlendSpaceBase* InBlendSpace;
        struct FName Curve;
        float CurveValue;
        float InputX;
        float InputY;
        float AnimSeqLength;
        float AnimSeqTime;
        struct UAnimSequenceBase* OutAnimSequence;
        float LastEvaluateTime;
        float ReturnValue;
    } Parms{};
    Parms.InBlendSpace = (struct UBlendSpaceBase*)InBlendSpace;
    Parms.Curve = (struct FName)Curve;
    Parms.CurveValue = (float)CurveValue;
    Parms.InputX = (float)InputX;
    Parms.InputY = (float)InputY;
    Parms.LastEvaluateTime = (float)LastEvaluateTime;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    AnimSeqLength = Parms.AnimSeqLength;
    AnimSeqTime = Parms.AnimSeqTime;
    OutAnimSequence = Parms.OutAnimSequence;
    return Parms.ReturnValue;
}

float UMFAnimationtFunctionLibrary::FindAnimSeqTimeFromCurveValue(struct UAnimSequenceBase* InAnimSequence, struct FName CurveName, float CurveValue, float LastEvaluateTime, float ErrorTolerance, int32_t CompareType)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFAnimationtFunctionLibrary", "FindAnimSeqTimeFromCurveValue");
    struct
    {
        struct UAnimSequenceBase* InAnimSequence;
        struct FName CurveName;
        float CurveValue;
        float LastEvaluateTime;
        float ErrorTolerance;
        int32_t CompareType;
        float ReturnValue;
    } Parms{};
    Parms.InAnimSequence = (struct UAnimSequenceBase*)InAnimSequence;
    Parms.CurveName = (struct FName)CurveName;
    Parms.CurveValue = (float)CurveValue;
    Parms.LastEvaluateTime = (float)LastEvaluateTime;
    Parms.ErrorTolerance = (float)ErrorTolerance;
    Parms.CompareType = (int32_t)CompareType;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UMFAnimationtFunctionLibrary::DrawDebugSphere(struct UWorld* InWorld, const struct FVector& InPosition, float InRadius, const struct FColor& InColor, float InDuration)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFAnimationtFunctionLibrary", "DrawDebugSphere");
    struct
    {
        struct UWorld* InWorld;
        struct FVector InPosition;
        float InRadius;
        struct FColor InColor;
        float InDuration;
    } Parms{};
    Parms.InWorld = (struct UWorld*)InWorld;
    Parms.InPosition = (struct FVector)InPosition;
    Parms.InRadius = (float)InRadius;
    Parms.InColor = (struct FColor)InColor;
    Parms.InDuration = (float)InDuration;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UMFAnimationtFunctionLibrary::DrawDebugLine(struct UWorld* InWorld, const struct FVector& InStart, const struct FVector& InEnd, const struct FColor& InColor, float InDuration)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFAnimationtFunctionLibrary", "DrawDebugLine");
    struct
    {
        struct UWorld* InWorld;
        struct FVector InStart;
        struct FVector InEnd;
        struct FColor InColor;
        float InDuration;
    } Parms{};
    Parms.InWorld = (struct UWorld*)InWorld;
    Parms.InStart = (struct FVector)InStart;
    Parms.InEnd = (struct FVector)InEnd;
    Parms.InColor = (struct FColor)InColor;
    Parms.InDuration = (float)InDuration;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UMFAnimationtFunctionLibrary::DrawDebugCone(struct UWorld* InWorld, const struct FVector& Origin, const struct FVector& Direction, float Length, float AngleWidth, float AngleHeight, const struct FColor& DrawColor, float Duration)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFAnimationtFunctionLibrary", "DrawDebugCone");
    struct
    {
        struct UWorld* InWorld;
        struct FVector Origin;
        struct FVector Direction;
        float Length;
        float AngleWidth;
        float AngleHeight;
        struct FColor DrawColor;
        float Duration;
    } Parms{};
    Parms.InWorld = (struct UWorld*)InWorld;
    Parms.Origin = (struct FVector)Origin;
    Parms.Direction = (struct FVector)Direction;
    Parms.Length = (float)Length;
    Parms.AngleWidth = (float)AngleWidth;
    Parms.AngleHeight = (float)AngleHeight;
    Parms.DrawColor = (struct FColor)DrawColor;
    Parms.Duration = (float)Duration;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UMFAnimationtFunctionLibrary::DrawDebugCapsule(struct UWorld* InWorld, const struct FVector& P0, const struct FVector& P1, float InRadius, const struct FColor& InColor, float InDuration)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFAnimationtFunctionLibrary", "DrawDebugCapsule");
    struct
    {
        struct UWorld* InWorld;
        struct FVector P0;
        struct FVector P1;
        float InRadius;
        struct FColor InColor;
        float InDuration;
    } Parms{};
    Parms.InWorld = (struct UWorld*)InWorld;
    Parms.P0 = (struct FVector)P0;
    Parms.P1 = (struct FVector)P1;
    Parms.InRadius = (float)InRadius;
    Parms.InColor = (struct FColor)InColor;
    Parms.InDuration = (float)InDuration;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UMFAnimationtFunctionLibrary::DrawCoordinateSystem(struct UWorld* InWorld, struct FTransform& InTransform, float InScale, float InDuration)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFAnimationtFunctionLibrary", "DrawCoordinateSystem");
    struct
    {
        struct UWorld* InWorld;
        struct FTransform InTransform;
        float InScale;
        float InDuration;
    } Parms{};
    Parms.InWorld = (struct UWorld*)InWorld;
    Parms.InScale = (float)InScale;
    Parms.InDuration = (float)InDuration;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    InTransform = Parms.InTransform;
}

struct FVector UMFAnimationtFunctionLibrary::Damper_Exact_Vector(struct FVector InVector, struct FVector TargetVector, float Damping, float DeltaTime)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFAnimationtFunctionLibrary", "Damper_Exact_Vector");
    struct
    {
        struct FVector InVector;
        struct FVector TargetVector;
        float Damping;
        float DeltaTime;
        struct FVector ReturnValue;
    } Parms{};
    Parms.InVector = (struct FVector)InVector;
    Parms.TargetVector = (struct FVector)TargetVector;
    Parms.Damping = (float)Damping;
    Parms.DeltaTime = (float)DeltaTime;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FRotator UMFAnimationtFunctionLibrary::Damper_Exact_Rotator(struct FRotator InRotator, struct FRotator TargetRotator, float Damping, float DeltaTime)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFAnimationtFunctionLibrary", "Damper_Exact_Rotator");
    struct
    {
        struct FRotator InRotator;
        struct FRotator TargetRotator;
        float Damping;
        float DeltaTime;
        struct FRotator ReturnValue;
    } Parms{};
    Parms.InRotator = (struct FRotator)InRotator;
    Parms.TargetRotator = (struct FRotator)TargetRotator;
    Parms.Damping = (float)Damping;
    Parms.DeltaTime = (float)DeltaTime;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UMFAnimationtFunctionLibrary::Damper_Exact_Damping(float X, float G, float Damping, float dt)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFAnimationtFunctionLibrary", "Damper_Exact_Damping");
    struct
    {
        float X;
        float G;
        float Damping;
        float dt;
        float ReturnValue;
    } Parms{};
    Parms.X = (float)X;
    Parms.G = (float)G;
    Parms.Damping = (float)Damping;
    Parms.dt = (float)dt;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UAnimNotify* UMFAnimationtFunctionLibrary::AddAnimationNotifyEvent(struct UAnimMontage* AnimMontage, struct FName NotifyTrackName, float startTime, struct UAnimNotify* NotifyClass)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFAnimationtFunctionLibrary", "AddAnimationNotifyEvent");
    struct
    {
        struct UAnimMontage* AnimMontage;
        struct FName NotifyTrackName;
        float startTime;
        struct UAnimNotify* NotifyClass;
        struct UAnimNotify* ReturnValue;
    } Parms{};
    Parms.AnimMontage = (struct UAnimMontage*)AnimMontage;
    Parms.NotifyTrackName = (struct FName)NotifyTrackName;
    Parms.startTime = (float)startTime;
    Parms.NotifyClass = (struct UAnimNotify*)NotifyClass;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

} // namespace SDK
