#include "PoseSearch.hpp"
#include "Engine.hpp"
#include <cstring> // memcpy for ArrayDim>1 param marshalling

namespace SDK
{

// UPoseSearchFeatureChannel_Heading
struct FQuat UPoseSearchFeatureChannel_Heading::BP_GetWorldRotation(struct UAnimInstance* AnimInstance)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PoseSearchFeatureChannel_Heading", "BP_GetWorldRotation");
    struct
    {
        struct UAnimInstance* AnimInstance;
        struct FQuat ReturnValue;
    } Parms{};
    Parms.AnimInstance = (struct UAnimInstance*)AnimInstance;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UPoseSearchFeatureChannel_Position
struct FVector UPoseSearchFeatureChannel_Position::BP_GetWorldPosition(struct UAnimInstance* AnimInstance)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PoseSearchFeatureChannel_Position", "BP_GetWorldPosition");
    struct
    {
        struct UAnimInstance* AnimInstance;
        struct FVector ReturnValue;
    } Parms{};
    Parms.AnimInstance = (struct UAnimInstance*)AnimInstance;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UPoseSearchFeatureChannel_TimeToEvent
float UPoseSearchFeatureChannel_TimeToEvent::BP_GetTimeToEvent(struct UAnimInstance* AnimInstance)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PoseSearchFeatureChannel_TimeToEvent", "BP_GetTimeToEvent");
    struct
    {
        struct UAnimInstance* AnimInstance;
        float ReturnValue;
    } Parms{};
    Parms.AnimInstance = (struct UAnimInstance*)AnimInstance;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UPoseSearchFeatureChannel_Velocity
struct FVector UPoseSearchFeatureChannel_Velocity::BP_GetWorldVelocity(struct UAnimInstance* AnimInstance)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PoseSearchFeatureChannel_Velocity", "BP_GetWorldVelocity");
    struct
    {
        struct UAnimInstance* AnimInstance;
        struct FVector ReturnValue;
    } Parms{};
    Parms.AnimInstance = (struct UAnimInstance*)AnimInstance;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UPoseSearchLibrary
void UPoseSearchLibrary::SetPoseSearchNotifyStateCostValue(struct UAnimNotifyState* PoseSearchNotify, float Value)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("PoseSearchLibrary", "SetPoseSearchNotifyStateCostValue");
    struct
    {
        struct UAnimNotifyState* PoseSearchNotify;
        float Value;
    } Parms{};
    Parms.PoseSearchNotify = (struct UAnimNotifyState*)PoseSearchNotify;
    Parms.Value = (float)Value;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UPoseSearchLibrary::MotionMatchMulti(struct TArray<struct ACharacter*> AnimInstances, struct TArray<struct FName> Roles, struct TArray<struct UObject*> AssetsToSearch, struct FName PoseHistoryName, struct FPoseSearchBlueprintResult& Result, int32_t DebugSessionUniqueIdentifier)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("PoseSearchLibrary", "MotionMatchMulti");
    struct
    {
        struct TArray<struct ACharacter*> AnimInstances;
        struct TArray<struct FName> Roles;
        struct TArray<struct UObject*> AssetsToSearch;
        struct FName PoseHistoryName;
        struct FPoseSearchBlueprintResult Result;
        int32_t DebugSessionUniqueIdentifier;
    } Parms{};
    Parms.AnimInstances = (struct TArray<struct ACharacter*>)AnimInstances;
    Parms.Roles = (struct TArray<struct FName>)Roles;
    Parms.AssetsToSearch = (struct TArray<struct UObject*>)AssetsToSearch;
    Parms.PoseHistoryName = (struct FName)PoseHistoryName;
    Parms.DebugSessionUniqueIdentifier = (int32_t)DebugSessionUniqueIdentifier;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    Result = Parms.Result;
}

void UPoseSearchLibrary::MotionMatch(struct UAnimInstance* AnimInstance, struct TArray<struct UObject*> AssetsToSearch, struct FName PoseHistoryName, struct FPoseSearchFutureProperties Future, struct FPoseSearchBlueprintResult& Result, int32_t DebugSessionUniqueIdentifier)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("PoseSearchLibrary", "MotionMatch");
    struct
    {
        struct UAnimInstance* AnimInstance;
        struct TArray<struct UObject*> AssetsToSearch;
        struct FName PoseHistoryName;
        struct FPoseSearchFutureProperties Future;
        struct FPoseSearchBlueprintResult Result;
        int32_t DebugSessionUniqueIdentifier;
    } Parms{};
    Parms.AnimInstance = (struct UAnimInstance*)AnimInstance;
    Parms.AssetsToSearch = (struct TArray<struct UObject*>)AssetsToSearch;
    Parms.PoseHistoryName = (struct FName)PoseHistoryName;
    Parms.Future = (struct FPoseSearchFutureProperties)Future;
    Parms.DebugSessionUniqueIdentifier = (int32_t)DebugSessionUniqueIdentifier;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    Result = Parms.Result;
}

// UPoseSearchMultiSequence
struct UAnimSequenceBase* UPoseSearchMultiSequence::GetSequence(const struct FName& Role)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PoseSearchMultiSequence", "GetSequence");
    struct
    {
        struct FName Role;
        struct UAnimSequenceBase* ReturnValue;
    } Parms{};
    Parms.Role = (struct FName)Role;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UPoseSearchTrajectoryLibrary
void UPoseSearchTrajectoryLibrary::PoseSearchGenerateTrajectory(struct UAnimInstance* InAnimInstance, const struct FPoseSearchTrajectoryData& InTrajectoryData, float InDeltaTime, struct FPoseSearchQueryTrajectory& InOutTrajectory, float& InOutDesiredControllerYawLastUpdate, struct FPoseSearchQueryTrajectory& OutTrajectory, float InHistorySamplingInterval, int32_t InTrajectoryHistoryCount, float InPredictionSamplingInterval, int32_t InTrajectoryPredictionCount)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("PoseSearchTrajectoryLibrary", "PoseSearchGenerateTrajectory");
    struct
    {
        struct UAnimInstance* InAnimInstance;
        struct FPoseSearchTrajectoryData InTrajectoryData;
        float InDeltaTime;
        struct FPoseSearchQueryTrajectory InOutTrajectory;
        float InOutDesiredControllerYawLastUpdate;
        struct FPoseSearchQueryTrajectory OutTrajectory;
        float InHistorySamplingInterval;
        int32_t InTrajectoryHistoryCount;
        float InPredictionSamplingInterval;
        int32_t InTrajectoryPredictionCount;
    } Parms{};
    Parms.InAnimInstance = (struct UAnimInstance*)InAnimInstance;
    Parms.InTrajectoryData = (struct FPoseSearchTrajectoryData)InTrajectoryData;
    Parms.InDeltaTime = (float)InDeltaTime;
    Parms.InHistorySamplingInterval = (float)InHistorySamplingInterval;
    Parms.InTrajectoryHistoryCount = (int32_t)InTrajectoryHistoryCount;
    Parms.InPredictionSamplingInterval = (float)InPredictionSamplingInterval;
    Parms.InTrajectoryPredictionCount = (int32_t)InTrajectoryPredictionCount;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    InOutTrajectory = Parms.InOutTrajectory;
    InOutDesiredControllerYawLastUpdate = Parms.InOutDesiredControllerYawLastUpdate;
    OutTrajectory = Parms.OutTrajectory;
}

void UPoseSearchTrajectoryLibrary::HandleTrajectoryWorldCollisions(struct UObject* WorldContextObject, struct UAnimInstance* AnimInstance, const struct FPoseSearchQueryTrajectory& InTrajectory, bool bApplyGravity, float FloorCollisionsOffset, struct FPoseSearchQueryTrajectory& OutTrajectory, struct FPoseSearchTrajectory_WorldCollisionResults& CollisionResult, uint8_t TraceChannel, bool bTraceComplex, const struct TArray<struct AActor*>& ActorsToIgnore, uint8_t DrawDebugType, bool bIgnoreSelf, float MaxObstacleHeight, struct FLinearColor TraceColor, struct FLinearColor TraceHitColor, float DrawTime)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("PoseSearchTrajectoryLibrary", "HandleTrajectoryWorldCollisions");
    struct
    {
        struct UObject* WorldContextObject;
        struct UAnimInstance* AnimInstance;
        struct FPoseSearchQueryTrajectory InTrajectory;
        bool bApplyGravity;
        float FloorCollisionsOffset;
        struct FPoseSearchQueryTrajectory OutTrajectory;
        struct FPoseSearchTrajectory_WorldCollisionResults CollisionResult;
        uint8_t TraceChannel;
        bool bTraceComplex;
        struct TArray<struct AActor*> ActorsToIgnore;
        uint8_t DrawDebugType;
        bool bIgnoreSelf;
        float MaxObstacleHeight;
        struct FLinearColor TraceColor;
        struct FLinearColor TraceHitColor;
        float DrawTime;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    Parms.AnimInstance = (struct UAnimInstance*)AnimInstance;
    Parms.InTrajectory = (struct FPoseSearchQueryTrajectory)InTrajectory;
    Parms.bApplyGravity = (bool)bApplyGravity;
    Parms.FloorCollisionsOffset = (float)FloorCollisionsOffset;
    Parms.TraceChannel = (uint8_t)TraceChannel;
    Parms.bTraceComplex = (bool)bTraceComplex;
    Parms.ActorsToIgnore = (struct TArray<struct AActor*>)ActorsToIgnore;
    Parms.DrawDebugType = (uint8_t)DrawDebugType;
    Parms.bIgnoreSelf = (bool)bIgnoreSelf;
    Parms.MaxObstacleHeight = (float)MaxObstacleHeight;
    Parms.TraceColor = (struct FLinearColor)TraceColor;
    Parms.TraceHitColor = (struct FLinearColor)TraceHitColor;
    Parms.DrawTime = (float)DrawTime;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    OutTrajectory = Parms.OutTrajectory;
    CollisionResult = Parms.CollisionResult;
}

void UPoseSearchTrajectoryLibrary::GetTrajectorySampleAtTime(const struct FPoseSearchQueryTrajectory& InTrajectory, float Time, struct FPoseSearchQueryTrajectorySample& OutTrajectorySample, bool bExtrapolate)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("PoseSearchTrajectoryLibrary", "GetTrajectorySampleAtTime");
    struct
    {
        struct FPoseSearchQueryTrajectory InTrajectory;
        float Time;
        struct FPoseSearchQueryTrajectorySample OutTrajectorySample;
        bool bExtrapolate;
    } Parms{};
    Parms.InTrajectory = (struct FPoseSearchQueryTrajectory)InTrajectory;
    Parms.Time = (float)Time;
    Parms.bExtrapolate = (bool)bExtrapolate;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    OutTrajectorySample = Parms.OutTrajectorySample;
}

} // namespace SDK
