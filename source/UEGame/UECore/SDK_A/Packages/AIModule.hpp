#pragma once

#include "../CoreUObject_classes.hpp"
#include "Engine.hpp"
#include "GameplayTags.hpp"
#include "GameplayTasks.hpp"
#include "NavigationSystem.hpp"

namespace SDK
{

// Package: AIModule
// Enums: 52
// Structs: 39
// Classes: 174

struct AActor;
struct AController;
struct ANavigationData;
struct APawn;
struct AVolume;
enum class EGameplayContainerMatchType : uint8_t;
struct FGameplayResourceSet;
struct FGameplayTag;
struct FHitResult;
struct FNavigationLink;
struct FNavigationSegmentLink;
struct UAnimInstance;
struct UAnimationAsset;
struct UGameplayTaskResource;
struct UGameplayTasksComponent;
struct UNavLinkCustomComponent;
struct UNavMovementComponent;
struct UNavigationPath;
struct UNavigationQueryFilter;
struct USkeletalMeshComponent;
struct USoundCue;
struct UUserDefinedStruct;
struct UWorld;
struct FAIRequestID;
struct FAIStimulus;
struct FActorPerceptionUpdateInfo;
struct FAINoiseEvent;
struct FAIDataProviderValue;
struct FAIDataProviderTypedValue;
struct FAIDamageEvent;
struct FAIDataProviderBoolValue;
struct FAIDataProviderFloatValue;
struct FAIDataProviderIntValue;
struct FAIDataProviderStructValue;
struct FActorPerceptionBlueprintInfo;
struct FAISenseAffiliationFilter;
struct FAIPredictionEvent;
struct FAISightEvent;
struct FAITeamStimulusEvent;
struct FAITouchEvent;
struct FIntervalCountdown;
struct FAIMoveRequest;
struct FBehaviorTreeTemplateInfo;
struct FBlackboardKeySelector;
struct FBlackboardEntry;
struct FBTCompositeChild;
struct FBTDecoratorLogic;
struct FCrowdAvoidanceSamplingPattern;
struct FCrowdAvoidanceConfig;
struct FEnvQueryInstanceCache;
struct FEnvQueryRequest;
struct FEQSParametrizedQueryExecutionRequest;
struct FAIDynamicParam;
struct FEnvQueryResult;
struct FEnvOverlapData;
struct FEnvTraceData;
struct FEnvDirection;
struct FEnvNamedValue;
struct FGenericTeamId;
struct FPawnActionStack;
struct FPawnActionEvent;
struct FDefault__AISenseBlueprintListener;
struct UEnvQueryNode;
struct UEnvQueryGenerator;
struct UEnvQueryGenerator_ProjectedPoints;
struct UEnvQueryGenerator_OnCircle;
struct UEnvQueryTest;
struct UEnvQueryGenerator_BlueprintBase;
struct UEnvQueryInstanceBlueprintWrapper;
struct UEnvQueryItemType;
struct UEnvQueryItemType_VectorBase;
struct UAISubsystem;
struct UEnvQueryManager;
struct ANavLinkProxy;
struct UPathFollowingComponent;
struct UAIPerceptionComponent;
struct UAIPerceptionSystem;
struct UAISense;
struct UAISense_Hearing;
struct UAISense_Sight;
struct UAISenseConfig;
struct UAISenseConfig_Hearing;
struct UAISenseConfig_Sight;
struct UAISenseEvent;
struct UAISystem;
struct UBTNode;
struct UBTAuxiliaryNode;
struct UBTDecorator;
struct UBTDecorator_BlackboardBase;
struct UBTDecorator_CompareBBEntries;
struct UBTDecorator_Cooldown;
struct UBTService;
struct UBTTaskNode;
struct UBTTask_BlackboardBase;
struct UBTTask_MoveTo;
struct AAIController;
struct UBrainComponent;
struct UBehaviorTreeComponent;
struct UAIAsyncTaskBlueprintProxy;
struct UAIBlueprintHelperLibrary;
struct UAIDataProvider;
struct UAIDataProvider_QueryParams;
struct UAIDataProvider_Random;
struct UAIHotSpotManager;
struct IAIPerceptionListenerInterface;
struct UAIPerceptionStimuliSourceComponent;
struct IAIResourceInterface;
struct UAIResource_Movement;
struct UAIResource_Logic;
struct UAISense_Blueprint;
struct UAISense_Damage;
struct UAISense_Prediction;
struct UAISense_Team;
struct UAISense_Touch;
struct UAISenseBlueprintListener;
struct UAISenseConfig_Blueprint;
struct UAISenseConfig_Damage;
struct UAISenseConfig_Prediction;
struct UAISenseConfig_Team;
struct UAISenseConfig_Touch;
struct UAISenseEvent_Damage;
struct UAISenseEvent_Hearing;
struct IAISightTargetInterface;
struct UAITask;
struct UAITask_LockLogic;
struct UAITask_MoveTo;
struct UAITask_RunEQS;
struct UBehaviorTree;
struct UBehaviorTreeManager;
struct UBehaviorTreeTypes;
struct IBlackboardAssetProvider;
struct UBlackboardComponent;
struct UBlackboardData;
struct UBlackboardKeyType;
struct UBlackboardKeyType_Bool;
struct UBlackboardKeyType_Class;
struct UBlackboardKeyType_Enum;
struct UBlackboardKeyType_Float;
struct UBlackboardKeyType_Int;
struct UBlackboardKeyType_Name;
struct UBlackboardKeyType_NativeEnum;
struct UBlackboardKeyType_Object;
struct UBlackboardKeyType_Rotator;
struct UBlackboardKeyType_String;
struct UBlackboardKeyType_Vector;
struct UBTCompositeNode;
struct UBTComposite_Selector;
struct UBTComposite_Sequence;
struct UBTComposite_SimpleParallel;
struct UBTDecorator_Blackboard;
struct UBTDecorator_BlueprintBase;
struct UBTDecorator_CheckGameplayTagsOnActor;
struct UBTDecorator_ConditionalLoop;
struct UBTDecorator_ConeCheck;
struct UBTDecorator_DoesPathExist;
struct UBTDecorator_ForceSuccess;
struct UBTDecorator_IsAtLocation;
struct UBTDecorator_IsBBEntryOfClass;
struct UBTDecorator_KeepInCone;
struct UBTDecorator_Loop;
struct UBTDecorator_ReachedMoveGoal;
struct UBTDecorator_SetTagCooldown;
struct UBTDecorator_TagCooldown;
struct UBTDecorator_TimeLimit;
struct UBTFunctionLibrary;
struct UBTService_BlackboardBase;
struct UBTService_BlueprintBase;
struct UBTService_DefaultFocus;
struct UBTService_RunEQS;
struct UBTTask_BlueprintBase;
struct UBTTask_FinishWithResult;
struct UBTTask_GameplayTaskBase;
struct UBTTask_MakeNoise;
struct UBTTask_MoveDirectlyToward;
struct UBTTask_PawnActionBase;
struct UBTTask_PlayAnimation;
struct UBTTask_PlaySound;
struct UBTTask_PushPawnAction;
struct UBTTask_RotateToFaceBBEntry;
struct UBTTask_RunBehavior;
struct UBTTask_RunBehaviorDynamic;
struct UBTTask_RunEQSQuery;
struct UBTTask_SetTagCooldown;
struct UBTTask_Wait;
struct UBTTask_WaitBlackboardTime;
struct ICrowdAgentInterface;
struct UCrowdFollowingComponent;
struct UCrowdManager;
struct ADetourCrowdAIController;
struct UEnvQuery;
struct UEnvQueryContext;
struct UEnvQueryContext_BlueprintBase;
struct UEnvQueryContext_Item;
struct UEnvQueryContext_Querier;
struct UEnvQueryDebugHelpers;
struct UEnvQueryGenerator_ActorsOfClass;
struct UEnvQueryGenerator_Composite;
struct UEnvQueryGenerator_Cone;
struct UEnvQueryGenerator_CurrentLocation;
struct UEnvQueryGenerator_Donut;
struct UEnvQueryGenerator_SimpleGrid;
struct UEnvQueryGenerator_PathingGrid;
struct UEnvQueryItemType_ActorBase;
struct UEnvQueryItemType_Actor;
struct UEnvQueryItemType_Direction;
struct UEnvQueryItemType_Point;
struct UEnvQueryOption;
struct UEnvQueryTest_Distance;
struct UEnvQueryTest_Dot;
struct UEnvQueryTest_GameplayTags;
struct UEnvQueryTest_Overlap;
struct UEnvQueryTest_Pathfinding;
struct UEnvQueryTest_PathfindingBatch;
struct UEnvQueryTest_Project;
struct UEnvQueryTest_Random;
struct UEnvQueryTest_Trace;
struct UEnvQueryTest_Volume;
struct UEnvQueryTypes;
struct IEQSQueryResultSourceInterface;
struct UEQSRenderingComponent;
struct AEQSTestingPawn;
struct IGenericTeamAgentInterface;
struct AGridPathAIController;
struct UGridPathFollowingComponent;
struct UNavFilter_AIControllerDefault;
struct UNavLocalGridManager;
struct UPathFollowingManager;
struct UPawnAction;
struct UPawnAction_BlueprintBase;
struct UPawnAction_Move;
struct UPawnAction_Repeat;
struct UPawnAction_Sequence;
struct UPawnAction_Wait;
struct UPawnActionsComponent;
struct UPawnSensingComponent;
struct UVisualLoggerExtension;

// Object: Enum AIModule.EPathFollowingResult
enum class EPathFollowingResult : uint8_t
{
	Success = 0,
	Blocked = 1,
	OffPath = 2,
	Aborted = 3,
	Skipped_DEPRECATED = 4,
	Invalid = 5,
	EPathFollowingResult_MAX = 6
};

// Object: Enum AIModule.EEnvQueryStatus
enum class EEnvQueryStatus : uint8_t
{
	Processing = 0,
	Success = 1,
	Failed = 2,
	Aborted = 3,
	OwnerLost = 4,
	MissingParam = 5,
	EEnvQueryStatus_MAX = 6
};

// Object: Enum AIModule.EPathFollowingRequestResult
enum class EPathFollowingRequestResult : uint8_t
{
	Failed = 0,
	AlreadyAtGoal = 1,
	RequestSuccessful = 2,
	EPathFollowingRequestResult_MAX = 3
};

// Object: Enum AIModule.EAISenseNotifyType
enum class EAISenseNotifyType : uint8_t
{
	OnEveryPerception = 0,
	OnPerceptionChange = 1,
	EAISenseNotifyType_MAX = 2
};

// Object: Enum AIModule.EAITaskPriority
enum class EAITaskPriority : uint8_t
{
	Lowest = 0,
	Low = 64,
	AutonomousAI = 127,
	High = 192,
	Ultimate = 254,
	EAITaskPriority_MAX = 255
};

// Object: Enum AIModule.EGenericAICheck
enum class EGenericAICheck : uint8_t
{
	Less = 0,
	LessOrEqual = 1,
	Equal = 2,
	NotEqual = 3,
	GreaterOrEqual = 4,
	Greater = 5,
	IsTrue = 6,
	MAX = 7
};

// Object: Enum AIModule.EAILockSource
enum class EAILockSource : uint8_t
{
	Animation = 0,
	Logic = 1,
	Script = 2,
	Gameplay = 3,
	MAX = 4
};

// Object: Enum AIModule.EAIRequestPriority
enum class EAIRequestPriority : uint8_t
{
	SoftScript = 0,
	Logic = 1,
	HardScript = 2,
	Reaction = 3,
	Ultimate = 4,
	MAX = 5
};

// Object: Enum AIModule.EPawnActionEventType
enum class EPawnActionEventType : uint8_t
{
	Invalid = 0,
	FailedToStart = 1,
	InstantAbort = 2,
	FinishedAborting = 3,
	FinishedExecution = 4,
	Push = 5,
	EPawnActionEventType_MAX = 6
};

// Object: Enum AIModule.EPawnActionResult
enum class EPawnActionResult : uint8_t
{
	NotStarted = 0,
	InProgress = 1,
	Success = 2,
	Failed = 3,
	Aborted = 4,
	EPawnActionResult_MAX = 5
};

// Object: Enum AIModule.EPawnActionAbortState
enum class EPawnActionAbortState : uint8_t
{
	NeverStarted = 0,
	NotBeingAborted = 1,
	MarkPendingAbort = 2,
	LatentAbortInProgress = 3,
	AbortDone = 4,
	MAX = 5
};

// Object: Enum AIModule.FAIDistanceType
enum class EFAIDistanceType : uint8_t
{
	Distance3D = 0,
	Distance2D = 1,
	DistanceZ = 2,
	MAX = 3
};

// Object: Enum AIModule.EAIOptionFlag
enum class EAIOptionFlag : uint8_t
{
	Default = 0,
	Enable = 1,
	Disable = 2,
	MAX = 3
};

// Object: Enum AIModule.EBTFlowAbortMode
enum class EBTFlowAbortMode : uint8_t
{
	None = 0,
	LowerPriority = 1,
	Self = 2,
	Both = 3,
	EBTFlowAbortMode_MAX = 4
};

// Object: Enum AIModule.EBTNodeResult
enum class EBTNodeResult : uint8_t
{
	Succeeded = 0,
	Failed = 1,
	Aborted = 2,
	InProgress = 3,
	EBTNodeResult_MAX = 4
};

// Object: Enum AIModule.ETextKeyOperation
enum class ETextKeyOperation : uint8_t
{
	Equal = 0,
	NotEqual = 1,
	Contain = 2,
	NotContain = 3,
	ETextKeyOperation_MAX = 4
};

// Object: Enum AIModule.EArithmeticKeyOperation
enum class EArithmeticKeyOperation : uint8_t
{
	Equal = 0,
	NotEqual = 1,
	Less = 2,
	LessOrEqual = 3,
	Greater = 4,
	GreaterOrEqual = 5,
	EArithmeticKeyOperation_MAX = 6
};

// Object: Enum AIModule.EBasicKeyOperation
enum class EBasicKeyOperation : uint8_t
{
	Set = 0,
	NotSet = 1,
	EBasicKeyOperation_MAX = 2
};

// Object: Enum AIModule.EBTParallelMode
enum class EBTParallelMode : uint8_t
{
	AbortBackground = 0,
	WaitForBackground = 1,
	EBTParallelMode_MAX = 2
};

// Object: Enum AIModule.EBTDecoratorLogic
enum class EBTDecoratorLogic : uint8_t
{
	Invalid = 0,
	Test = 1,
	And = 2,
	Or = 3,
	Not = 4,
	EBTDecoratorLogic_MAX = 5
};

// Object: Enum AIModule.EBTChildIndex
enum class EBTChildIndex : uint8_t
{
	FirstNode = 0,
	TaskNode = 1,
	EBTChildIndex_MAX = 2
};

// Object: Enum AIModule.EBTBlackboardRestart
enum class EBTBlackboardRestart : uint8_t
{
	ValueChange = 0,
	ResultChange = 1,
	EBTBlackboardRestart_MAX = 2
};

// Object: Enum AIModule.EBlackBoardEntryComparison
enum class EBlackBoardEntryComparison : uint8_t
{
	Equal = 0,
	NotEqual = 1,
	EBlackBoardEntryComparison_MAX = 2
};

// Object: Enum AIModule.EPathExistanceQueryType
enum class EPathExistanceQueryType : uint8_t
{
	NavmeshRaycast2D = 0,
	HierarchicalQuery = 1,
	RegularPathFinding = 2,
	EPathExistanceQueryType_MAX = 3
};

// Object: Enum AIModule.EPointOnCircleSpacingMethod
enum class EPointOnCircleSpacingMethod : uint8_t
{
	BySpaceBetween = 0,
	ByNumberOfPoints = 1,
	EPointOnCircleSpacingMethod_MAX = 2
};

// Object: Enum AIModule.EEQSNormalizationType
enum class EEQSNormalizationType : uint8_t
{
	Absolute = 0,
	RelativeToScores = 1,
	EEQSNormalizationType_MAX = 2
};

// Object: Enum AIModule.EEnvTestDistance
enum class EEnvTestDistance : uint8_t
{
	Distance3D = 0,
	Distance2D = 1,
	DistanceZ = 2,
	DistanceAbsoluteZ = 3,
	EEnvTestDistance_MAX = 4
};

// Object: Enum AIModule.EEnvTestDot
enum class EEnvTestDot : uint8_t
{
	Dot3D = 0,
	Dot2D = 1,
	EEnvTestDot_MAX = 2
};

// Object: Enum AIModule.EEnvTestPathfinding
enum class EEnvTestPathfinding : uint8_t
{
	PathExist = 0,
	PathCost = 1,
	PathLength = 2,
	EEnvTestPathfinding_MAX = 3
};

// Object: Enum AIModule.EEnvQueryTestClamping
enum class EEnvQueryTestClamping : uint8_t
{
	None = 0,
	SpecifiedValue = 1,
	FilterThreshold = 2,
	EEnvQueryTestClamping_MAX = 3
};

// Object: Enum AIModule.EEnvDirection
enum class EEnvDirection : uint8_t
{
	TwoPoints = 0,
	Rotation = 1,
	EEnvDirection_MAX = 2
};

// Object: Enum AIModule.EEnvOverlapShape
enum class EEnvOverlapShape : uint8_t
{
	Box = 0,
	Sphere = 1,
	Capsule = 2,
	EEnvOverlapShape_MAX = 3
};

// Object: Enum AIModule.EEnvTraceShape
enum class EEnvTraceShape : uint8_t
{
	Line = 0,
	Box = 1,
	Sphere = 2,
	Capsule = 3,
	EEnvTraceShape_MAX = 4
};

// Object: Enum AIModule.EEnvQueryTrace
enum class EEnvQueryTrace : uint8_t
{
	None = 0,
	Navigation = 1,
	Geometry = 2,
	NavigationOverLedges = 3,
	EEnvQueryTrace_MAX = 4
};

// Object: Enum AIModule.EAIParamType
enum class EAIParamType : uint8_t
{
	Float = 0,
	Int = 1,
	Bool = 2,
	MAX = 3
};

// Object: Enum AIModule.EEnvQueryParam
enum class EEnvQueryParam : uint8_t
{
	Float = 0,
	Int = 1,
	Bool = 2,
	EEnvQueryParam_MAX = 3
};

// Object: Enum AIModule.EEnvQueryRunMode
enum class EEnvQueryRunMode : uint8_t
{
	SingleResult = 0,
	RandomBest5Pct = 1,
	RandomBest25Pct = 2,
	AllMatching = 3,
	EEnvQueryRunMode_MAX = 4
};

// Object: Enum AIModule.EEnvTestScoreOperator
enum class EEnvTestScoreOperator : uint8_t
{
	AverageScore = 0,
	MinScore = 1,
	MaxScore = 2,
	Multiply = 3,
	EEnvTestScoreOperator_MAX = 4
};

// Object: Enum AIModule.EEnvTestFilterOperator
enum class EEnvTestFilterOperator : uint8_t
{
	AllPass = 0,
	AnyPass = 1,
	EEnvTestFilterOperator_MAX = 2
};

// Object: Enum AIModule.EEnvQueryPriority
enum class EEnvQueryPriority : uint8_t
{
	Normal = 0,
	High = 1,
	EEnvQueryPriority_MAX = 2
};

// Object: Enum AIModule.EEnvTestCost
enum class EEnvTestCost : uint8_t
{
	Low = 0,
	Medium = 1,
	High = 2,
	EEnvTestCost_MAX = 3
};

// Object: Enum AIModule.EEnvTestWeight
enum class EEnvTestWeight : uint8_t
{
	None = 0,
	Square = 1,
	Inverse = 2,
	Unused = 3,
	Constant = 4,
	Skip = 5,
	EEnvTestWeight_MAX = 6
};

// Object: Enum AIModule.EEnvTestScoreEquation
enum class EEnvTestScoreEquation : uint8_t
{
	Linear = 0,
	Square = 1,
	InverseLinear = 2,
	SquareRoot = 3,
	Constant = 4,
	EEnvTestScoreEquation_MAX = 5
};

// Object: Enum AIModule.EEnvTestFilterType
enum class EEnvTestFilterType : uint8_t
{
	Minimum = 0,
	Maximum = 1,
	Range = 2,
	Match = 3,
	EEnvTestFilterType_MAX = 4
};

// Object: Enum AIModule.EEnvTestPurpose
enum class EEnvTestPurpose : uint8_t
{
	Filter = 0,
	Score = 1,
	FilterAndScore = 2,
	EEnvTestPurpose_MAX = 3
};

// Object: Enum AIModule.EEnvQueryHightlightMode
enum class EEnvQueryHightlightMode : uint8_t
{
	All = 0,
	Best5Pct = 1,
	Best25Pct = 2,
	EEnvQueryHightlightMode_MAX = 3
};

// Object: Enum AIModule.ETeamAttitude
enum class ETeamAttitude : uint8_t
{
	Friendly = 0,
	Neutral = 1,
	Hostile = 2,
	ETeamAttitude_MAX = 3
};

// Object: Enum AIModule.EPathFollowingAction
enum class EPathFollowingAction : uint8_t
{
	Error = 0,
	NoMove = 1,
	DirectMove = 2,
	PartialPath = 3,
	PathToGoal = 4,
	EPathFollowingAction_MAX = 5
};

// Object: Enum AIModule.EPathFollowingStatus
enum class EPathFollowingStatus : uint8_t
{
	Idle = 0,
	Waiting = 1,
	Paused = 2,
	Moving = 3,
	EPathFollowingStatus_MAX = 4
};

// Object: Enum AIModule.EPawnActionFailHandling
enum class EPawnActionFailHandling : uint8_t
{
	RequireSuccess = 0,
	IgnoreFailure = 1,
	EPawnActionFailHandling_MAX = 2
};

// Object: Enum AIModule.EPawnSubActionTriggeringPolicy
enum class EPawnSubActionTriggeringPolicy : uint8_t
{
	CopyBeforeTriggering = 0,
	ReuseInstances = 1,
	EPawnSubActionTriggeringPolicy_MAX = 2
};

// Object: Enum AIModule.EPawnActionMoveMode
enum class EPawnActionMoveMode : uint8_t
{
	UsePathfinding = 0,
	StraightLine = 1,
	EPawnActionMoveMode_MAX = 2
};

// Object: ScriptStruct AIModule.AIRequestID
// Size: 0x4 (Inherited: 0x0)
struct FAIRequestID
{
	uint32_t RequestID; // 0x0(0x4)
};

// Object: ScriptStruct AIModule.AIStimulus
// Size: 0x3C (Inherited: 0x0)
struct FAIStimulus
{
	float Age; // 0x0(0x4)
	float ExpirationAge; // 0x4(0x4)
	float Strength; // 0x8(0x4)
	struct FVector StimulusLocation; // 0xC(0xC)
	struct FVector ReceiverLocation; // 0x18(0xC)
	struct FName Tag; // 0x24(0x8)
	uint8_t Pad_0x2C[0xC]; // 0x2C(0xC)
	uint8_t BitPad_0x38_0 : 1; // 0x38(0x1)
	uint8_t bSuccessfullySensed : 1; // 0x38(0x1), Mask(0x2)
	uint8_t BitPad_0x38_2 : 6; // 0x38(0x1)
	uint8_t Pad_0x39[0x3]; // 0x39(0x3)
};

// Object: ScriptStruct AIModule.ActorPerceptionUpdateInfo
// Size: 0x48 (Inherited: 0x0)
struct FActorPerceptionUpdateInfo
{
	int32_t TargetId; // 0x0(0x4)
	struct TWeakObjectPtr<struct AActor> Target; // 0x4(0x8)
	struct FAIStimulus Stimulus; // 0xC(0x3C)
};

// Object: ScriptStruct AIModule.AINoiseEvent
// Size: 0x38 (Inherited: 0x0)
struct FAINoiseEvent
{
	uint8_t Pad_0x0[0x4]; // 0x0(0x4)
	struct FVector NoiseLocation; // 0x4(0xC)
	float Loudness; // 0x10(0x4)
	float MaxRange; // 0x14(0x4)
	struct AActor* Instigator; // 0x18(0x8)
	struct AActor* NoiseRelator; // 0x20(0x8)
	struct FName Tag; // 0x28(0x8)
	uint8_t Pad_0x30[0x8]; // 0x30(0x8)
};

// Object: ScriptStruct AIModule.AIDataProviderValue
// Size: 0x20 (Inherited: 0x0)
struct FAIDataProviderValue
{
	uint8_t Pad_0x0[0x10]; // 0x0(0x10)
	struct UAIDataProvider* DataBinding; // 0x10(0x8)
	struct FName DataField; // 0x18(0x8)
};

// Object: ScriptStruct AIModule.AIDataProviderTypedValue
// Size: 0x30 (Inherited: 0x20)
struct FAIDataProviderTypedValue : FAIDataProviderValue
{
	struct UObject* PropertyType; // 0x20(0x8)
	uint8_t Pad_0x28[0x8]; // 0x28(0x8)
};

// Object: ScriptStruct AIModule.AIDamageEvent
// Size: 0x30 (Inherited: 0x0)
struct FAIDamageEvent
{
	float Amount; // 0x0(0x4)
	struct FVector Location; // 0x4(0xC)
	struct FVector HitLocation; // 0x10(0xC)
	uint8_t Pad_0x1C[0x4]; // 0x1C(0x4)
	struct AActor* DamagedActor; // 0x20(0x8)
	struct AActor* Instigator; // 0x28(0x8)
};

// Object: ScriptStruct AIModule.AIDataProviderBoolValue
// Size: 0x38 (Inherited: 0x30)
struct FAIDataProviderBoolValue : FAIDataProviderTypedValue
{
	bool DefaultValue; // 0x30(0x1)
	uint8_t Pad_0x31[0x7]; // 0x31(0x7)
};

// Object: ScriptStruct AIModule.AIDataProviderFloatValue
// Size: 0x38 (Inherited: 0x30)
struct FAIDataProviderFloatValue : FAIDataProviderTypedValue
{
	float DefaultValue; // 0x30(0x4)
	uint8_t Pad_0x34[0x4]; // 0x34(0x4)
};

// Object: ScriptStruct AIModule.AIDataProviderIntValue
// Size: 0x38 (Inherited: 0x30)
struct FAIDataProviderIntValue : FAIDataProviderTypedValue
{
	int32_t DefaultValue; // 0x30(0x4)
	uint8_t Pad_0x34[0x4]; // 0x34(0x4)
};

// Object: ScriptStruct AIModule.AIDataProviderStructValue
// Size: 0x30 (Inherited: 0x20)
struct FAIDataProviderStructValue : FAIDataProviderValue
{
	uint8_t Pad_0x20[0x10]; // 0x20(0x10)
};

// Object: ScriptStruct AIModule.ActorPerceptionBlueprintInfo
// Size: 0x20 (Inherited: 0x0)
struct FActorPerceptionBlueprintInfo
{
	struct AActor* Target; // 0x0(0x8)
	struct TArray<struct FAIStimulus> LastSensedStimuli; // 0x8(0x10)
	uint8_t bIsHostile : 1; // 0x18(0x1), Mask(0x1)
	uint8_t BitPad_0x18_1 : 7; // 0x18(0x1)
	uint8_t Pad_0x19[0x7]; // 0x19(0x7)
};

// Object: ScriptStruct AIModule.AISenseAffiliationFilter
// Size: 0x4 (Inherited: 0x0)
struct FAISenseAffiliationFilter
{
	uint8_t bDetectEnemies : 1; // 0x0(0x1), Mask(0x1)
	uint8_t bDetectNeutrals : 1; // 0x0(0x1), Mask(0x2)
	uint8_t bDetectFriendlies : 1; // 0x0(0x1), Mask(0x4)
	uint8_t BitPad_0x0_3 : 5; // 0x0(0x1)
	uint8_t Pad_0x1[0x3]; // 0x1(0x3)
};

// Object: ScriptStruct AIModule.AIPredictionEvent
// Size: 0x18 (Inherited: 0x0)
struct FAIPredictionEvent
{
	struct AActor* Requestor; // 0x0(0x8)
	struct AActor* PredictedActor; // 0x8(0x8)
	uint8_t Pad_0x10[0x8]; // 0x10(0x8)
};

// Object: ScriptStruct AIModule.AISightEvent
// Size: 0x18 (Inherited: 0x0)
struct FAISightEvent
{
	uint8_t Pad_0x0[0x8]; // 0x0(0x8)
	struct AActor* SeenActor; // 0x8(0x8)
	struct AActor* Observer; // 0x10(0x8)
};

// Object: ScriptStruct AIModule.AITeamStimulusEvent
// Size: 0x38 (Inherited: 0x0)
struct FAITeamStimulusEvent
{
	uint8_t Pad_0x0[0x28]; // 0x0(0x28)
	struct AActor* Broadcaster; // 0x28(0x8)
	struct AActor* Enemy; // 0x30(0x8)
};

// Object: ScriptStruct AIModule.AITouchEvent
// Size: 0x20 (Inherited: 0x0)
struct FAITouchEvent
{
	uint8_t Pad_0x0[0x10]; // 0x0(0x10)
	struct AActor* TouchReceiver; // 0x10(0x8)
	struct AActor* OtherActor; // 0x18(0x8)
};

// Object: ScriptStruct AIModule.IntervalCountdown
// Size: 0x8 (Inherited: 0x0)
struct FIntervalCountdown
{
	float Interval; // 0x0(0x4)
	uint8_t Pad_0x4[0x4]; // 0x4(0x4)
};

// Object: ScriptStruct AIModule.AIMoveRequest
// Size: 0x40 (Inherited: 0x0)
struct FAIMoveRequest
{
	struct AActor* GoalActor; // 0x0(0x8)
	uint8_t Pad_0x8[0x38]; // 0x8(0x38)
};

// Object: ScriptStruct AIModule.BehaviorTreeTemplateInfo
// Size: 0x18 (Inherited: 0x0)
struct FBehaviorTreeTemplateInfo
{
	struct UBehaviorTree* Asset; // 0x0(0x8)
	struct UBTCompositeNode* Template; // 0x8(0x8)
	uint8_t Pad_0x10[0x8]; // 0x10(0x8)
};

// Object: ScriptStruct AIModule.BlackboardKeySelector
// Size: 0x28 (Inherited: 0x0)
struct FBlackboardKeySelector
{
	struct TArray<struct UBlackboardKeyType*> AllowedTypes; // 0x0(0x10)
	struct FName SelectedKeyName; // 0x10(0x8)
	struct UBlackboardKeyType* SelectedKeyType; // 0x18(0x8)
	uint8_t SelectedKeyID; // 0x20(0x1)
	uint8_t bNoneIsAllowedValue : 1; // 0x21(0x1), Mask(0x1)
	uint8_t BitPad_0x21_1 : 7; // 0x21(0x1)
	uint8_t Pad_0x22[0x6]; // 0x22(0x6)
};

// Object: ScriptStruct AIModule.BlackboardEntry
// Size: 0x20 (Inherited: 0x0)
struct FBlackboardEntry
{
	struct FName EntryName; // 0x0(0x8)
	struct UBlackboardKeyType* KeyType; // 0x8(0x8)
	uint8_t bInstanceSynced : 1; // 0x10(0x1), Mask(0x1)
	uint8_t BitPad_0x10_1 : 7; // 0x10(0x1)
	uint8_t Pad_0x11[0x3]; // 0x11(0x3)
	struct FName Category; // 0x14(0x8)
	uint8_t Pad_0x1C[0x4]; // 0x1C(0x4)
};

// Object: ScriptStruct AIModule.BTCompositeChild
// Size: 0x30 (Inherited: 0x0)
struct FBTCompositeChild
{
	struct UBTCompositeNode* ChildComposite; // 0x0(0x8)
	struct UBTTaskNode* ChildTask; // 0x8(0x8)
	struct TArray<struct UBTDecorator*> Decorators; // 0x10(0x10)
	struct TArray<struct FBTDecoratorLogic> DecoratorOps; // 0x20(0x10)
};

// Object: ScriptStruct AIModule.BTDecoratorLogic
// Size: 0x4 (Inherited: 0x0)
struct FBTDecoratorLogic
{
	uint8_t Operation; // 0x0(0x1)
	uint8_t Pad_0x1[0x1]; // 0x1(0x1)
	uint16_t Number; // 0x2(0x2)
};

// Object: ScriptStruct AIModule.CrowdAvoidanceSamplingPattern
// Size: 0x20 (Inherited: 0x0)
struct FCrowdAvoidanceSamplingPattern
{
	struct TArray<float> Angles; // 0x0(0x10)
	struct TArray<float> Radii; // 0x10(0x10)
};

// Object: ScriptStruct AIModule.CrowdAvoidanceConfig
// Size: 0x1C (Inherited: 0x0)
struct FCrowdAvoidanceConfig
{
	float VelocityBias; // 0x0(0x4)
	float DesiredVelocityWeight; // 0x4(0x4)
	float CurrentVelocityWeight; // 0x8(0x4)
	float SideBiasWeight; // 0xC(0x4)
	float ImpactTimeWeight; // 0x10(0x4)
	float ImpactTimeRange; // 0x14(0x4)
	uint8_t CustomPatternIdx; // 0x18(0x1)
	uint8_t AdaptiveDivisions; // 0x19(0x1)
	uint8_t AdaptiveRings; // 0x1A(0x1)
	uint8_t AdaptiveDepth; // 0x1B(0x1)
};

// Object: ScriptStruct AIModule.EnvQueryInstanceCache
// Size: 0x178 (Inherited: 0x0)
struct FEnvQueryInstanceCache
{
	struct UEnvQuery* Template; // 0x0(0x8)
	uint8_t Pad_0x8[0x170]; // 0x8(0x170)
};

// Object: ScriptStruct AIModule.EnvQueryRequest
// Size: 0x68 (Inherited: 0x0)
struct FEnvQueryRequest
{
	struct UEnvQuery* QueryTemplate; // 0x0(0x8)
	struct UObject* Owner; // 0x8(0x8)
	struct UWorld* World; // 0x10(0x8)
	uint8_t Pad_0x18[0x50]; // 0x18(0x50)
};

// Object: ScriptStruct AIModule.EQSParametrizedQueryExecutionRequest
// Size: 0x48 (Inherited: 0x0)
struct FEQSParametrizedQueryExecutionRequest
{
	struct UEnvQuery* QueryTemplate; // 0x0(0x8)
	struct TArray<struct FAIDynamicParam> QueryConfig; // 0x8(0x10)
	struct FBlackboardKeySelector EQSQueryBlackboardKey; // 0x18(0x28)
	uint8_t RunMode; // 0x40(0x1)
	uint8_t bUseBBKeyForQueryTemplate : 1; // 0x41(0x1), Mask(0x1)
	uint8_t BitPad_0x41_1 : 7; // 0x41(0x1)
	uint8_t Pad_0x42[0x6]; // 0x42(0x6)
};

// Object: ScriptStruct AIModule.AIDynamicParam
// Size: 0x38 (Inherited: 0x0)
struct FAIDynamicParam
{
	struct FName ParamName; // 0x0(0x8)
	EAIParamType ParamType; // 0x8(0x1)
	uint8_t Pad_0x9[0x3]; // 0x9(0x3)
	float Value; // 0xC(0x4)
	struct FBlackboardKeySelector BBKey; // 0x10(0x28)
};

// Object: ScriptStruct AIModule.EnvQueryResult
// Size: 0x40 (Inherited: 0x0)
struct FEnvQueryResult
{
	uint8_t Pad_0x0[0x10]; // 0x0(0x10)
	struct UEnvQueryItemType* ItemType; // 0x10(0x8)
	uint8_t Pad_0x18[0x14]; // 0x18(0x14)
	int32_t OptionIndex; // 0x2C(0x4)
	int32_t QueryID; // 0x30(0x4)
	uint8_t Pad_0x34[0xC]; // 0x34(0xC)
};

// Object: ScriptStruct AIModule.EnvOverlapData
// Size: 0x1C (Inherited: 0x0)
struct FEnvOverlapData
{
	float ExtentX; // 0x0(0x4)
	float ExtentY; // 0x4(0x4)
	float ExtentZ; // 0x8(0x4)
	struct FVector ShapeOffset; // 0xC(0xC)
	uint8_t OverlapChannel; // 0x18(0x1)
	uint8_t OverlapShape; // 0x19(0x1)
	uint8_t bOnlyBlockingHits : 1; // 0x1A(0x1), Mask(0x1)
	uint8_t bOverlapComplex : 1; // 0x1A(0x1), Mask(0x2)
	uint8_t bSkipOverlapQuerier : 1; // 0x1A(0x1), Mask(0x4)
	uint8_t BitPad_0x1A_3 : 5; // 0x1A(0x1)
	uint8_t Pad_0x1B[0x1]; // 0x1B(0x1)
};

// Object: ScriptStruct AIModule.EnvTraceData
// Size: 0x30 (Inherited: 0x0)
struct FEnvTraceData
{
	int32_t VersionNum; // 0x0(0x4)
	uint8_t Pad_0x4[0x4]; // 0x4(0x4)
	struct UNavigationQueryFilter* NavigationFilter; // 0x8(0x8)
	float ProjectDown; // 0x10(0x4)
	float ProjectUp; // 0x14(0x4)
	float ExtentX; // 0x18(0x4)
	float ExtentY; // 0x1C(0x4)
	float ExtentZ; // 0x20(0x4)
	float PostProjectionVerticalOffset; // 0x24(0x4)
	uint8_t TraceChannel; // 0x28(0x1)
	uint8_t SerializedChannel; // 0x29(0x1)
	uint8_t TraceShape; // 0x2A(0x1)
	uint8_t TraceMode; // 0x2B(0x1)
	uint8_t bTraceComplex : 1; // 0x2C(0x1), Mask(0x1)
	uint8_t bOnlyBlockingHits : 1; // 0x2C(0x1), Mask(0x2)
	uint8_t bCanTraceOnNavMesh : 1; // 0x2C(0x1), Mask(0x4)
	uint8_t bCanTraceOnGeometry : 1; // 0x2C(0x1), Mask(0x8)
	uint8_t bCanDisableTrace : 1; // 0x2C(0x1), Mask(0x10)
	uint8_t bCanProjectDown : 1; // 0x2C(0x1), Mask(0x20)
	uint8_t BitPad_0x2C_6 : 2; // 0x2C(0x1)
	uint8_t Pad_0x2D[0x3]; // 0x2D(0x3)
};

// Object: ScriptStruct AIModule.EnvDirection
// Size: 0x20 (Inherited: 0x0)
struct FEnvDirection
{
	struct UEnvQueryContext* LineFrom; // 0x0(0x8)
	struct UEnvQueryContext* LineTo; // 0x8(0x8)
	struct UEnvQueryContext* Rotation; // 0x10(0x8)
	uint8_t DirMode; // 0x18(0x1)
	uint8_t Pad_0x19[0x7]; // 0x19(0x7)
};

// Object: ScriptStruct AIModule.EnvNamedValue
// Size: 0x10 (Inherited: 0x0)
struct FEnvNamedValue
{
	struct FName ParamName; // 0x0(0x8)
	EAIParamType ParamType; // 0x8(0x1)
	uint8_t Pad_0x9[0x3]; // 0x9(0x3)
	float Value; // 0xC(0x4)
};

// Object: ScriptStruct AIModule.GenericTeamId
// Size: 0x1 (Inherited: 0x0)
struct FGenericTeamId
{
	uint8_t TeamID; // 0x0(0x1)
};

// Object: ScriptStruct AIModule.PawnActionStack
// Size: 0x8 (Inherited: 0x0)
struct FPawnActionStack
{
	struct UPawnAction* TopAction; // 0x0(0x8)
};

// Object: ScriptStruct AIModule.PawnActionEvent
// Size: 0x18 (Inherited: 0x0)
struct FPawnActionEvent
{
	struct UPawnAction* Action; // 0x0(0x8)
	uint8_t Pad_0x8[0x10]; // 0x8(0x10)
};

// Object: AISenseBlueprintListener AIModule.Default__AISenseBlueprintListener
// Size: 0x0 (Inherited: 0x0)
struct FDefault__AISenseBlueprintListener
{
};

// Object: Class AIModule.EnvQueryNode
// Size: 0x30 (Inherited: 0x28)
struct UEnvQueryNode : UObject
{
	DEFINE_UE_CLASS_HELPERS(UEnvQueryNode, "EnvQueryNode")

	int32_t VerNum; // 0x28(0x4)
	uint8_t Pad_0x2C[0x4]; // 0x2C(0x4)
};

// Object: Class AIModule.EnvQueryGenerator
// Size: 0x50 (Inherited: 0x30)
struct UEnvQueryGenerator : UEnvQueryNode
{
	DEFINE_UE_CLASS_HELPERS(UEnvQueryGenerator, "EnvQueryGenerator")

	struct FString optionName; // 0x30(0x10)
	struct UEnvQueryItemType* ItemType; // 0x40(0x8)
	uint8_t bAutoSortTests : 1; // 0x48(0x1), Mask(0x1)
	uint8_t BitPad_0x48_1 : 7; // 0x48(0x1)
	uint8_t Pad_0x49[0x7]; // 0x49(0x7)
};

// Object: Class AIModule.EnvQueryGenerator_ProjectedPoints
// Size: 0x80 (Inherited: 0x50)
struct UEnvQueryGenerator_ProjectedPoints : UEnvQueryGenerator
{
	DEFINE_UE_CLASS_HELPERS(UEnvQueryGenerator_ProjectedPoints, "EnvQueryGenerator_ProjectedPoints")

	struct FEnvTraceData ProjectionData; // 0x50(0x30)
};

// Object: Class AIModule.EnvQueryGenerator_OnCircle
// Size: 0x210 (Inherited: 0x80)
struct UEnvQueryGenerator_OnCircle : UEnvQueryGenerator_ProjectedPoints
{
	DEFINE_UE_CLASS_HELPERS(UEnvQueryGenerator_OnCircle, "EnvQueryGenerator_OnCircle")

	struct FAIDataProviderFloatValue CircleRadius; // 0x80(0x38)
	struct FAIDataProviderFloatValue SpaceBetween; // 0xB8(0x38)
	struct FAIDataProviderIntValue NumberOfPoints; // 0xF0(0x38)
	EPointOnCircleSpacingMethod PointOnCircleSpacingMethod; // 0x128(0x1)
	uint8_t Pad_0x129[0x7]; // 0x129(0x7)
	struct FEnvDirection ArcDirection; // 0x130(0x20)
	struct FAIDataProviderFloatValue ArcAngle; // 0x150(0x38)
	float AngleRadians; // 0x188(0x4)
	uint8_t Pad_0x18C[0x4]; // 0x18C(0x4)
	struct UEnvQueryContext* CircleCenter; // 0x190(0x8)
	bool bIgnoreAnyContextActorsWhenGeneratingCircle; // 0x198(0x1)
	uint8_t Pad_0x199[0x7]; // 0x199(0x7)
	struct FAIDataProviderFloatValue CircleCenterZOffset; // 0x1A0(0x38)
	struct FEnvTraceData TraceData; // 0x1D8(0x30)
	uint8_t bDefineArc : 1; // 0x208(0x1), Mask(0x1)
	uint8_t BitPad_0x208_1 : 7; // 0x208(0x1)
	uint8_t Pad_0x209[0x7]; // 0x209(0x7)
};

// Object: Class AIModule.EnvQueryTest
// Size: 0x1F8 (Inherited: 0x30)
struct UEnvQueryTest : UEnvQueryNode
{
	DEFINE_UE_CLASS_HELPERS(UEnvQueryTest, "EnvQueryTest")

	int32_t TestOrder; // 0x2C(0x4)
	uint8_t TestPurpose; // 0x30(0x1)
	uint8_t Pad_0x35[0x3]; // 0x35(0x3)
	struct FString TestComment; // 0x38(0x10)
	uint8_t MultipleContextFilterOp; // 0x48(0x1)
	uint8_t MultipleContextScoreOp; // 0x49(0x1)
	uint8_t FilterType; // 0x4A(0x1)
	uint8_t Pad_0x4B[0x5]; // 0x4B(0x5)
	struct FAIDataProviderBoolValue BoolValue; // 0x50(0x38)
	struct FAIDataProviderFloatValue FloatValueMin; // 0x88(0x38)
	struct FAIDataProviderFloatValue FloatValueMax; // 0xC0(0x38)
	uint8_t Pad_0xF8[0x1]; // 0xF8(0x1)
	uint8_t ScoringEquation; // 0xF9(0x1)
	uint8_t ClampMinType; // 0xFA(0x1)
	uint8_t ClampMaxType; // 0xFB(0x1)
	EEQSNormalizationType NormalizationType; // 0xFC(0x1)
	uint8_t Pad_0xFD[0x3]; // 0xFD(0x3)
	struct FAIDataProviderFloatValue ScoreClampMin; // 0x100(0x38)
	struct FAIDataProviderFloatValue ScoreClampMax; // 0x138(0x38)
	struct FAIDataProviderFloatValue ScoringFactor; // 0x170(0x38)
	struct FAIDataProviderFloatValue ReferenceValue; // 0x1A8(0x38)
	bool bDefineReferenceValue; // 0x1E0(0x1)
	uint8_t Pad_0x1E1[0xF]; // 0x1E1(0xF)
	uint8_t bWorkOnFloatValues : 1; // 0x1F0(0x1), Mask(0x1)
	uint8_t BitPad_0x1F0_1 : 7; // 0x1F0(0x1)
	uint8_t Pad_0x1F1[0x7]; // 0x1F1(0x7)
};

// Object: Class AIModule.EnvQueryGenerator_BlueprintBase
// Size: 0x80 (Inherited: 0x50)
struct UEnvQueryGenerator_BlueprintBase : UEnvQueryGenerator
{
	DEFINE_UE_CLASS_HELPERS(UEnvQueryGenerator_BlueprintBase, "EnvQueryGenerator_BlueprintBase")

	struct FText GeneratorsActionDescription; // 0x50(0x18)
	struct UEnvQueryContext* Context; // 0x68(0x8)
	struct UEnvQueryItemType* GeneratedItemType; // 0x70(0x8)
	uint8_t Pad_0x78[0x8]; // 0x78(0x8)

	// Object: Function AIModule.EnvQueryGenerator_BlueprintBase.GetQuerier
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xbf168f0
	// Params: [ Num(1) Size(0x8) ]
	struct UObject* GetQuerier();

	// Object: Function AIModule.EnvQueryGenerator_BlueprintBase.DoItemGeneration
	// Flags: [Event|Public|HasOutParms|BlueprintEvent|Const]
	// Offset: 0x5d8cbc8
	// Params: [ Num(1) Size(0x10) ]
	void DoItemGeneration(const struct TArray<struct FVector>& ContextLocations);

	// Object: Function AIModule.EnvQueryGenerator_BlueprintBase.AddGeneratedVector
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable|Const]
	// Offset: 0xbf169cc
	// Params: [ Num(1) Size(0xC) ]
	void AddGeneratedVector(struct FVector GeneratedVector);

	// Object: Function AIModule.EnvQueryGenerator_BlueprintBase.AddGeneratedActor
	// Flags: [Final|Native|Public|BlueprintCallable|Const]
	// Offset: 0xbf16924
	// Params: [ Num(1) Size(0x8) ]
	void AddGeneratedActor(struct AActor* GeneratedActor);
};

// Object: Class AIModule.EnvQueryInstanceBlueprintWrapper
// Size: 0x78 (Inherited: 0x28)
struct UEnvQueryInstanceBlueprintWrapper : UObject
{
	DEFINE_UE_CLASS_HELPERS(UEnvQueryInstanceBlueprintWrapper, "EnvQueryInstanceBlueprintWrapper")

	uint8_t Pad_0x28[0x8]; // 0x28(0x8)
	int32_t QueryID; // 0x30(0x4)
	uint8_t Pad_0x34[0x24]; // 0x34(0x24)
	struct UEnvQueryItemType* ItemType; // 0x58(0x8)
	int32_t OptionIndex; // 0x60(0x4)
	uint8_t Pad_0x64[0x4]; // 0x64(0x4)
	struct FMulticastInlineDelegate OnQueryFinishedEvent; // 0x68(0x10)

	// Object: Function AIModule.EnvQueryInstanceBlueprintWrapper.SetNamedParam
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xbf19d6c
	// Params: [ Num(2) Size(0xC) ]
	void SetNamedParam(struct FName ParamName, float Value);

	// Object: Function AIModule.EnvQueryInstanceBlueprintWrapper.GetResultsAsLocations
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xbf19e54
	// Params: [ Num(1) Size(0x10) ]
	struct TArray<struct FVector> GetResultsAsLocations();

	// Object: Function AIModule.EnvQueryInstanceBlueprintWrapper.GetResultsAsActors
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xbf19ef0
	// Params: [ Num(1) Size(0x10) ]
	struct TArray<struct AActor*> GetResultsAsActors();

	// Object: Function AIModule.EnvQueryInstanceBlueprintWrapper.GetQueryResultsAsLocations
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable|Const]
	// Offset: 0xbf19f60
	// Params: [ Num(2) Size(0x11) ]
	bool GetQueryResultsAsLocations(struct TArray<struct FVector>& ResultLocations);

	// Object: Function AIModule.EnvQueryInstanceBlueprintWrapper.GetQueryResultsAsActors
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable|Const]
	// Offset: 0xbf1a030
	// Params: [ Num(2) Size(0x11) ]
	bool GetQueryResultsAsActors(struct TArray<struct AActor*>& ResultActors);

	// Object: Function AIModule.EnvQueryInstanceBlueprintWrapper.GetItemScore
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xbf1a100
	// Params: [ Num(2) Size(0x8) ]
	float GetItemScore(int32_t ItemIndex);

	// Object: DelegateFunction AIModule.EnvQueryInstanceBlueprintWrapper.EQSQueryDoneSignature__DelegateSignature
	// Flags: [MulticastDelegate|Public|Delegate]
	// Offset: 0x5d8cbc8
	// Params: [ Num(2) Size(0x9) ]
	void EQSQueryDoneSignature__DelegateSignature(struct UEnvQueryInstanceBlueprintWrapper* QueryInstance, uint8_t QueryStatus);
};

// Object: Class AIModule.EnvQueryItemType
// Size: 0x30 (Inherited: 0x28)
struct UEnvQueryItemType : UObject
{
	DEFINE_UE_CLASS_HELPERS(UEnvQueryItemType, "EnvQueryItemType")

	uint8_t Pad_0x28[0x8]; // 0x28(0x8)
};

// Object: Class AIModule.EnvQueryItemType_VectorBase
// Size: 0x30 (Inherited: 0x30)
struct UEnvQueryItemType_VectorBase : UEnvQueryItemType
{
	DEFINE_UE_CLASS_HELPERS(UEnvQueryItemType_VectorBase, "EnvQueryItemType_VectorBase")
};

// Object: Class AIModule.AISubsystem
// Size: 0x38 (Inherited: 0x28)
struct UAISubsystem : UObject
{
	DEFINE_UE_CLASS_HELPERS(UAISubsystem, "AISubsystem")

	uint8_t Pad_0x28[0x8]; // 0x28(0x8)
	struct UAISystem* AISystem; // 0x30(0x8)
};

// Object: Class AIModule.EnvQueryManager
// Size: 0x140 (Inherited: 0x38)
struct UEnvQueryManager : UAISubsystem
{
	DEFINE_UE_CLASS_HELPERS(UEnvQueryManager, "EnvQueryManager")

	uint8_t Pad_0x38[0x70]; // 0x38(0x70)
	struct TArray<struct FEnvQueryInstanceCache> InstanceCache; // 0xA8(0x10)
	struct TArray<struct UEnvQueryContext*> LocalContexts; // 0xB8(0x10)
	struct TArray<struct UEnvQueryInstanceBlueprintWrapper*> GCShieldedWrappers; // 0xC8(0x10)
	uint8_t Pad_0xD8[0x54]; // 0xD8(0x54)
	float MaxAllowedTestingTime; // 0x12C(0x4)
	bool bTestQueriesUsingBreadth; // 0x130(0x1)
	uint8_t Pad_0x131[0x3]; // 0x131(0x3)
	int32_t QueryCountWarningThreshold; // 0x134(0x4)
	double QueryCountWarningInterval; // 0x138(0x8)

	// Object: Function AIModule.EnvQueryManager.RunEQSQuery
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0xbf1a218
	// Params: [ Num(7) Size(0x38) ]
	static struct UEnvQueryInstanceBlueprintWrapper* RunEQSQuery(struct UObject* WorldContextObject, struct UEnvQuery* QueryTemplate, struct UObject* Querier, uint8_t RunMode, struct UEnvQueryInstanceBlueprintWrapper* WrapperClass, uint8_t QueryPriority);
};

// Object: Class AIModule.NavLinkProxy
// Size: 0x350 (Inherited: 0x300)
struct ANavLinkProxy : AActor
{
	DEFINE_UE_CLASS_HELPERS(ANavLinkProxy, "NavLinkProxy")

	uint8_t Pad_0x300[0x10]; // 0x300(0x10)
	struct TArray<struct FNavigationLink> PointLinks; // 0x310(0x10)
	struct TArray<struct FNavigationSegmentLink> SegmentLinks; // 0x320(0x10)
	struct UNavLinkCustomComponent* SmartLinkComp; // 0x330(0x8)
	bool bSmartLinkIsRelevant; // 0x338(0x1)
	uint8_t Pad_0x339[0x7]; // 0x339(0x7)
	struct FMulticastInlineDelegate OnSmartLinkReached; // 0x340(0x10)

	// Object: Function AIModule.NavLinkProxy.SetSmartLinkEnabled
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xbf1e56c
	// Params: [ Num(1) Size(0x1) ]
	void SetSmartLinkEnabled(bool bEnabled);

	// Object: Function AIModule.NavLinkProxy.ResumePathFollowing
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xbf1e654
	// Params: [ Num(1) Size(0x8) ]
	void ResumePathFollowing(struct AActor* Agent);

	// Object: Function AIModule.NavLinkProxy.ReceiveSmartLinkReached
	// Flags: [Event|Public|HasOutParms|HasDefaults|BlueprintEvent]
	// Offset: 0x5d8cbc8
	// Params: [ Num(2) Size(0x14) ]
	void ReceiveSmartLinkReached(struct AActor* Agent, const struct FVector& Destination);

	// Object: Function AIModule.NavLinkProxy.IsSmartLinkEnabled
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xbf1e61c
	// Params: [ Num(1) Size(0x1) ]
	bool IsSmartLinkEnabled();

	// Object: Function AIModule.NavLinkProxy.HasMovingAgents
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xbf1e534
	// Params: [ Num(1) Size(0x1) ]
	bool HasMovingAgents();
};

// Object: Class AIModule.PathFollowingComponent
// Size: 0x280 (Inherited: 0xE0)
struct UPathFollowingComponent : UActorComponent
{
	DEFINE_UE_CLASS_HELPERS(UPathFollowingComponent, "PathFollowingComponent")

	uint8_t Pad_0xE0[0x38]; // 0xE0(0x38)
	struct UNavMovementComponent* MovementComp; // 0x118(0x8)
	uint8_t Pad_0x120[0x8]; // 0x120(0x8)
	struct ANavigationData* MyNavData; // 0x128(0x8)
	uint8_t Pad_0x130[0x150]; // 0x130(0x150)

	// Object: Function AIModule.PathFollowingComponent.OnNavDataRegistered
	// Flags: [Final|Native|Protected]
	// Offset: 0xbf1f548
	// Params: [ Num(1) Size(0x8) ]
	void OnNavDataRegistered(struct ANavigationData* NavData);

	// Object: Function AIModule.PathFollowingComponent.OnActorBump
	// Flags: [Native|Public|HasOutParms|HasDefaults]
	// Offset: 0xbf1f660
	// Params: [ Num(4) Size(0xB8) ]
	void OnActorBump(struct AActor* SelfActor, struct AActor* OtherActor, struct FVector NormalImpulse, const struct FHitResult& Hit);

	// Object: Function AIModule.PathFollowingComponent.GetPathDestination
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xbf1f5f0
	// Params: [ Num(1) Size(0xC) ]
	struct FVector GetPathDestination();

	// Object: Function AIModule.PathFollowingComponent.GetPathActionType
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xbf1f62c
	// Params: [ Num(1) Size(0x1) ]
	uint8_t GetPathActionType();
};

// Object: Class AIModule.AIPerceptionComponent
// Size: 0x1C0 (Inherited: 0xE0)
struct UAIPerceptionComponent : UActorComponent
{
	DEFINE_UE_CLASS_HELPERS(UAIPerceptionComponent, "AIPerceptionComponent")

	struct TArray<struct UAISenseConfig*> SensesConfig; // 0xE0(0x10)
	struct UAISense* DominantSense; // 0xF0(0x8)
	uint8_t Pad_0xF8[0x10]; // 0xF8(0x10)
	struct AAIController* AIOwner; // 0x108(0x8)
	uint8_t Pad_0x110[0x80]; // 0x110(0x80)
	struct FMulticastInlineDelegate OnPerceptionUpdated; // 0x190(0x10)
	struct FMulticastInlineDelegate OnTargetPerceptionUpdated; // 0x1A0(0x10)
	struct FMulticastInlineDelegate OnTargetPerceptionInfoUpdated; // 0x1B0(0x10)

	// Object: Function AIModule.AIPerceptionComponent.SetSenseEnabled
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xbf013a8
	// Params: [ Num(2) Size(0x9) ]
	void SetSenseEnabled(struct UAISense* SenseClass, bool bEnable);

	// Object: Function AIModule.AIPerceptionComponent.RequestStimuliListenerUpdate
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xbf01a98
	// Params: [ Num(0) Size(0x0) ]
	void RequestStimuliListenerUpdate();

	// Object: Function AIModule.AIPerceptionComponent.OnOwnerEndPlay
	// Flags: [Final|Native|Public]
	// Offset: 0xbf01aac
	// Params: [ Num(2) Size(0x9) ]
	void OnOwnerEndPlay(struct AActor* Actor, uint8_t EndPlayReason);

	// Object: Function AIModule.AIPerceptionComponent.GetPerceivedHostileActorsBySense
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xbf018bc
	// Params: [ Num(2) Size(0x18) ]
	void GetPerceivedHostileActorsBySense(struct UAISense* SenseToUse, struct TArray<struct AActor*>& OutActors);

	// Object: Function AIModule.AIPerceptionComponent.GetPerceivedHostileActors
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xbf019c0
	// Params: [ Num(1) Size(0x10) ]
	void GetPerceivedHostileActors(struct TArray<struct AActor*>& OutActors);

	// Object: Function AIModule.AIPerceptionComponent.GetPerceivedActors
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xbf015b0
	// Params: [ Num(2) Size(0x18) ]
	void GetPerceivedActors(struct UAISense* SenseToUse, struct TArray<struct AActor*>& OutActors);

	// Object: Function AIModule.AIPerceptionComponent.GetKnownPerceivedActors
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xbf016b4
	// Params: [ Num(2) Size(0x18) ]
	void GetKnownPerceivedActors(struct UAISense* SenseToUse, struct TArray<struct AActor*>& OutActors);

	// Object: Function AIModule.AIPerceptionComponent.GetCurrentlyPerceivedActors
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xbf017b8
	// Params: [ Num(2) Size(0x18) ]
	void GetCurrentlyPerceivedActors(struct UAISense* SenseToUse, struct TArray<struct AActor*>& OutActors);

	// Object: Function AIModule.AIPerceptionComponent.GetActorsPerception
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0xbf01498
	// Params: [ Num(3) Size(0x29) ]
	bool GetActorsPerception(struct AActor* Actor, struct FActorPerceptionBlueprintInfo& Info);

	// Object: Function AIModule.AIPerceptionComponent.ForgetAll
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xbf01a84
	// Params: [ Num(0) Size(0x0) ]
	void ForgetAll();
};

// Object: Class AIModule.AIPerceptionSystem
// Size: 0x130 (Inherited: 0x38)
struct UAIPerceptionSystem : UAISubsystem
{
	DEFINE_UE_CLASS_HELPERS(UAIPerceptionSystem, "AIPerceptionSystem")

	uint8_t Pad_0x38[0x50]; // 0x38(0x50)
	struct TArray<struct UAISense*> Senses; // 0x88(0x10)
	float PerceptionAgingRate; // 0x98(0x4)
	uint8_t Pad_0x9C[0x94]; // 0x9C(0x94)

	// Object: Function AIModule.AIPerceptionSystem.ReportPerceptionEvent
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0xbf05bfc
	// Params: [ Num(2) Size(0x10) ]
	static void ReportPerceptionEvent(struct UObject* WorldContextObject, struct UAISenseEvent* PerceptionEvent);

	// Object: Function AIModule.AIPerceptionSystem.ReportEvent
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xbf05cd0
	// Params: [ Num(1) Size(0x8) ]
	void ReportEvent(struct UAISenseEvent* PerceptionEvent);

	// Object: Function AIModule.AIPerceptionSystem.RegisterPerceptionStimuliSource
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0xbf05ad4
	// Params: [ Num(4) Size(0x19) ]
	static bool RegisterPerceptionStimuliSource(struct UObject* WorldContextObject, struct UAISense* Sense, struct AActor* Target);

	// Object: Function AIModule.AIPerceptionSystem.OnPerceptionStimuliSourceEndPlay
	// Flags: [Final|Native|Protected]
	// Offset: 0xbf058a8
	// Params: [ Num(2) Size(0x9) ]
	void OnPerceptionStimuliSourceEndPlay(struct AActor* Actor, uint8_t EndPlayReason);

	// Object: Function AIModule.AIPerceptionSystem.GetSenseClassForStimulus
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0xbf05990
	// Params: [ Num(3) Size(0x50) ]
	static struct UAISense* GetSenseClassForStimulus(struct UObject* WorldContextObject, const struct FAIStimulus& Stimulus);
};

// Object: Class AIModule.AISense
// Size: 0x78 (Inherited: 0x28)
struct UAISense : UObject
{
	DEFINE_UE_CLASS_HELPERS(UAISense, "AISense")

	float DefaultExpirationAge; // 0x28(0x4)
	EAISenseNotifyType NotifyType; // 0x2C(0x1)
	uint8_t bWantsNewPawnNotification : 1; // 0x2D(0x1), Mask(0x1)
	uint8_t bAutoRegisterAllPawnsAsSources : 1; // 0x2D(0x1), Mask(0x2)
	uint8_t BitPad_0x2D_2 : 6; // 0x2D(0x1)
	uint8_t Pad_0x2E[0x2]; // 0x2E(0x2)
	struct UAIPerceptionSystem* PerceptionSystemInstance; // 0x30(0x8)
	uint8_t Pad_0x38[0x40]; // 0x38(0x40)
};

// Object: Class AIModule.AISense_Hearing
// Size: 0xE0 (Inherited: 0x78)
struct UAISense_Hearing : UAISense
{
	DEFINE_UE_CLASS_HELPERS(UAISense_Hearing, "AISense_Hearing")

	struct TArray<struct FAINoiseEvent> NoiseEvents; // 0x78(0x10)
	float SpeedOfSoundSq; // 0x88(0x4)
	uint8_t Pad_0x8C[0x54]; // 0x8C(0x54)

	// Object: Function AIModule.AISense_Hearing.ReportNoiseEvent
	// Flags: [Final|Native|Static|Public|HasDefaults|BlueprintCallable]
	// Offset: 0xbf0645c
	// Params: [ Num(6) Size(0x2C) ]
	static void ReportNoiseEvent(struct UObject* WorldContextObject, struct FVector NoiseLocation, float Loudness, struct AActor* Instigator, float MaxRange, struct FName Tag);
};

// Object: Class AIModule.AISense_Sight
// Size: 0x168 (Inherited: 0x78)
struct UAISense_Sight : UAISense
{
	DEFINE_UE_CLASS_HELPERS(UAISense_Sight, "AISense_Sight")

	uint8_t Pad_0x78[0xC8]; // 0x78(0xC8)
	int32_t MaxTracesPerTick; // 0x140(0x4)
	int32_t MinQueriesPerTimeSliceCheck; // 0x144(0x4)
	double MaxTimeSlicePerTick; // 0x148(0x8)
	float HighImportanceQueryDistanceThreshold; // 0x150(0x4)
	uint8_t Pad_0x154[0x4]; // 0x154(0x4)
	float MaxQueryImportance; // 0x158(0x4)
	float SightLimitQueryImportance; // 0x15C(0x4)
	uint8_t Pad_0x160[0x8]; // 0x160(0x8)
};

// Object: Class AIModule.AISenseConfig
// Size: 0x48 (Inherited: 0x28)
struct UAISenseConfig : UObject
{
	DEFINE_UE_CLASS_HELPERS(UAISenseConfig, "AISenseConfig")

	struct FColor DebugColor; // 0x28(0x4)
	float MaxAge; // 0x2C(0x4)
	uint8_t bStartsEnabled : 1; // 0x30(0x1), Mask(0x1)
	uint8_t BitPad_0x30_1 : 7; // 0x30(0x1)
	uint8_t Pad_0x31[0x17]; // 0x31(0x17)
};

// Object: Class AIModule.AISenseConfig_Hearing
// Size: 0x60 (Inherited: 0x48)
struct UAISenseConfig_Hearing : UAISenseConfig
{
	DEFINE_UE_CLASS_HELPERS(UAISenseConfig_Hearing, "AISenseConfig_Hearing")

	struct UAISense_Hearing* Implementation; // 0x48(0x8)
	float HearingRange; // 0x50(0x4)
	float LoSHearingRange; // 0x54(0x4)
	uint8_t bUseLoSHearing : 1; // 0x58(0x1), Mask(0x1)
	uint8_t BitPad_0x58_1 : 7; // 0x58(0x1)
	uint8_t Pad_0x59[0x3]; // 0x59(0x3)
	struct FAISenseAffiliationFilter DetectionByAffiliation; // 0x5C(0x4)
};

// Object: Class AIModule.AISenseConfig_Sight
// Size: 0x70 (Inherited: 0x48)
struct UAISenseConfig_Sight : UAISenseConfig
{
	DEFINE_UE_CLASS_HELPERS(UAISenseConfig_Sight, "AISenseConfig_Sight")

	struct UAISense_Sight* Implementation; // 0x48(0x8)
	float SightRadius; // 0x50(0x4)
	float LoseSightRadius; // 0x54(0x4)
	float PeripheralVisionAngleDegrees; // 0x58(0x4)
	struct FAISenseAffiliationFilter DetectionByAffiliation; // 0x5C(0x4)
	float AutoSuccessRangeFromLastSeenLocation; // 0x60(0x4)
	float PointOfViewBackwardOffset; // 0x64(0x4)
	float NearClippingRadius; // 0x68(0x4)
	uint8_t Pad_0x6C[0x4]; // 0x6C(0x4)
};

// Object: Class AIModule.AISenseEvent
// Size: 0x28 (Inherited: 0x28)
struct UAISenseEvent : UObject
{
	DEFINE_UE_CLASS_HELPERS(UAISenseEvent, "AISenseEvent")
};

// Object: Class AIModule.AISystem
// Size: 0x148 (Inherited: 0x58)
struct UAISystem : UAISystemBase
{
	DEFINE_UE_CLASS_HELPERS(UAISystem, "AISystem")

	struct FSoftClassPath PerceptionSystemClassName; // 0x58(0x18)
	struct FSoftClassPath EnvQueryManagerClassName; // 0x70(0x18)
	struct FSoftClassPath HotSpotManagerClassName; // 0x88(0x18)
	float AcceptanceRadius; // 0xA0(0x4)
	float PathfollowingRegularPathPointAcceptanceRadius; // 0xA4(0x4)
	float PathfollowingNavLinkAcceptanceRadius; // 0xA8(0x4)
	bool bFinishMoveOnGoalOverlap; // 0xAC(0x1)
	bool bAcceptPartialPaths; // 0xAD(0x1)
	bool bAllowStrafing; // 0xAE(0x1)
	bool bEnableBTAITasks; // 0xAF(0x1)
	bool bAllowControllersAsEQSQuerier; // 0xB0(0x1)
	bool bEnableDebuggerPlugin; // 0xB1(0x1)
	bool bForgetStaleActors; // 0xB2(0x1)
	bool bAddBlackboardSelfKey; // 0xB3(0x1)
	uint8_t DefaultSightCollisionChannel; // 0xB4(0x1)
	uint8_t Pad_0xB5[0x3]; // 0xB5(0x3)
	struct UBehaviorTreeManager* BehaviorTreeManager; // 0xB8(0x8)
	struct UEnvQueryManager* EnvironmentQueryManager; // 0xC0(0x8)
	struct UAIPerceptionSystem* PerceptionSystem; // 0xC8(0x8)
	struct TArray<struct UAIAsyncTaskBlueprintProxy*> AllProxyObjects; // 0xD0(0x10)
	struct UAIHotSpotManager* HotSpotManager; // 0xE0(0x8)
	struct UNavLocalGridManager* NavLocalGrids; // 0xE8(0x8)
	uint8_t Pad_0xF0[0x58]; // 0xF0(0x58)

	// Object: Function AIModule.AISystem.AILoggingVerbose
	// Flags: [Exec|Native|Public]
	// Offset: 0xbf06958
	// Params: [ Num(0) Size(0x0) ]
	void AILoggingVerbose();

	// Object: Function AIModule.AISystem.AIIgnorePlayers
	// Flags: [Exec|Native|Public]
	// Offset: 0xbf06974
	// Params: [ Num(0) Size(0x0) ]
	void AIIgnorePlayers();
};

// Object: Class AIModule.BTNode
// Size: 0x58 (Inherited: 0x28)
struct UBTNode : UObject
{
	DEFINE_UE_CLASS_HELPERS(UBTNode, "BTNode")

	uint8_t Pad_0x28[0x8]; // 0x28(0x8)
	struct FString NodeName; // 0x30(0x10)
	struct UBehaviorTree* TreeAsset; // 0x40(0x8)
	struct UBTCompositeNode* ParentNode; // 0x48(0x8)
	uint8_t Pad_0x50[0x8]; // 0x50(0x8)
};

// Object: Class AIModule.BTAuxiliaryNode
// Size: 0x58 (Inherited: 0x58)
struct UBTAuxiliaryNode : UBTNode
{
	DEFINE_UE_CLASS_HELPERS(UBTAuxiliaryNode, "BTAuxiliaryNode")
};

// Object: Class AIModule.BTDecorator
// Size: 0x60 (Inherited: 0x58)
struct UBTDecorator : UBTAuxiliaryNode
{
	DEFINE_UE_CLASS_HELPERS(UBTDecorator, "BTDecorator")

	uint8_t BitPad_0x58_0 : 7; // 0x58(0x1)
	uint8_t bInverseCondition : 1; // 0x58(0x1), Mask(0x80)
	uint8_t FlowAbortMode; // 0x59(0x1)
	uint8_t Pad_0x5A[0x6]; // 0x5A(0x6)
};

// Object: Class AIModule.BTDecorator_BlackboardBase
// Size: 0x88 (Inherited: 0x60)
struct UBTDecorator_BlackboardBase : UBTDecorator
{
	DEFINE_UE_CLASS_HELPERS(UBTDecorator_BlackboardBase, "BTDecorator_BlackboardBase")

	struct FBlackboardKeySelector BlackboardKey; // 0x60(0x28)
};

// Object: Class AIModule.BTDecorator_CompareBBEntries
// Size: 0xB0 (Inherited: 0x60)
struct UBTDecorator_CompareBBEntries : UBTDecorator
{
	DEFINE_UE_CLASS_HELPERS(UBTDecorator_CompareBBEntries, "BTDecorator_CompareBBEntries")

	uint8_t Operator; // 0x5A(0x1)
	struct FBlackboardKeySelector BlackboardKeyA; // 0x60(0x28)
	struct FBlackboardKeySelector BlackboardKeyB; // 0x88(0x28)
};

// Object: Class AIModule.BTDecorator_Cooldown
// Size: 0x60 (Inherited: 0x60)
struct UBTDecorator_Cooldown : UBTDecorator
{
	DEFINE_UE_CLASS_HELPERS(UBTDecorator_Cooldown, "BTDecorator_Cooldown")

	float CoolDownTime; // 0x5C(0x4)
};

// Object: Class AIModule.BTService
// Size: 0x68 (Inherited: 0x58)
struct UBTService : UBTAuxiliaryNode
{
	DEFINE_UE_CLASS_HELPERS(UBTService, "BTService")

	float Interval; // 0x58(0x4)
	float RandomDeviation; // 0x5C(0x4)
	uint8_t bCallTickOnSearchStart : 1; // 0x60(0x1), Mask(0x1)
	uint8_t bRestartTimerOnEachActivation : 1; // 0x60(0x1), Mask(0x2)
	uint8_t BitPad_0x60_2 : 6; // 0x60(0x1)
	uint8_t Pad_0x61[0x7]; // 0x61(0x7)

	// Object: Function AIModule.BTService.SetTickInterval
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xbf128ac
	// Params: [ Num(2) Size(0x8) ]
	void SetTickInterval(float TickInterval, float TickRandomDeviation);
};

// Object: Class AIModule.BTTaskNode
// Size: 0x70 (Inherited: 0x58)
struct UBTTaskNode : UBTNode
{
	DEFINE_UE_CLASS_HELPERS(UBTTaskNode, "BTTaskNode")

	struct TArray<struct UBTService*> Services; // 0x58(0x10)
	uint8_t bIgnoreRestartSelf : 1; // 0x68(0x1), Mask(0x1)
	uint8_t BitPad_0x68_1 : 7; // 0x68(0x1)
	uint8_t Pad_0x69[0x7]; // 0x69(0x7)
};

// Object: Class AIModule.BTTask_BlackboardBase
// Size: 0x98 (Inherited: 0x70)
struct UBTTask_BlackboardBase : UBTTaskNode
{
	DEFINE_UE_CLASS_HELPERS(UBTTask_BlackboardBase, "BTTask_BlackboardBase")

	struct FBlackboardKeySelector BlackboardKey; // 0x70(0x28)
};

// Object: Class AIModule.BTTask_MoveTo
// Size: 0xB0 (Inherited: 0x98)
struct UBTTask_MoveTo : UBTTask_BlackboardBase
{
	DEFINE_UE_CLASS_HELPERS(UBTTask_MoveTo, "BTTask_MoveTo")

	float AcceptableRadius; // 0x98(0x4)
	uint8_t Pad_0x9C[0x4]; // 0x9C(0x4)
	struct UNavigationQueryFilter* FilterClass; // 0xA0(0x8)
	float ObservedBlackboardValueTolerance; // 0xA8(0x4)
	uint8_t bObserveBlackboardValue : 1; // 0xAC(0x1), Mask(0x1)
	uint8_t bAllowStrafe : 1; // 0xAC(0x1), Mask(0x2)
	uint8_t bAllowPartialPath : 1; // 0xAC(0x1), Mask(0x4)
	uint8_t bTrackMovingGoal : 1; // 0xAC(0x1), Mask(0x8)
	uint8_t bProjectGoalLocation : 1; // 0xAC(0x1), Mask(0x10)
	uint8_t bReachTestIncludesAgentRadius : 1; // 0xAC(0x1), Mask(0x20)
	uint8_t bReachTestIncludesGoalRadius : 1; // 0xAC(0x1), Mask(0x40)
	uint8_t bStopOnOverlap : 1; // 0xAC(0x1), Mask(0x80)
	uint8_t bStopOnOverlapNeedsUpdate : 1; // 0xAD(0x1), Mask(0x1)
	uint8_t BitPad_0xAD_1 : 7; // 0xAD(0x1)
	uint8_t Pad_0xAE[0x2]; // 0xAE(0x2)
};

// Object: Class AIModule.AIController
// Size: 0x408 (Inherited: 0x378)
struct AAIController : AController
{
	DEFINE_UE_CLASS_HELPERS(AAIController, "AIController")

	uint8_t Pad_0x378[0x38]; // 0x378(0x38)
	uint8_t bStartAILogicOnPossess : 1; // 0x3B0(0x1), Mask(0x1)
	uint8_t bStopAILogicOnUnposses : 1; // 0x3B0(0x1), Mask(0x2)
	uint8_t bLOSflag : 1; // 0x3B0(0x1), Mask(0x4)
	uint8_t bSkipExtraLOSChecks : 1; // 0x3B0(0x1), Mask(0x8)
	uint8_t bAllowStrafe : 1; // 0x3B0(0x1), Mask(0x10)
	uint8_t bWantsPlayerState : 1; // 0x3B0(0x1), Mask(0x20)
	uint8_t bSetControlRotationFromPawnOrientation : 1; // 0x3B0(0x1), Mask(0x40)
	uint8_t BitPad_0x3B0_7 : 1; // 0x3B0(0x1)
	uint8_t Pad_0x3B1[0x7]; // 0x3B1(0x7)
	struct UPathFollowingComponent* PathFollowingComponent; // 0x3B8(0x8)
	struct UBrainComponent* BrainComponent; // 0x3C0(0x8)
	struct UAIPerceptionComponent* PerceptionComponent; // 0x3C8(0x8)
	struct UPawnActionsComponent* ActionsComp; // 0x3D0(0x8)
	struct UBlackboardComponent* Blackboard; // 0x3D8(0x8)
	struct UGameplayTasksComponent* CachedGameplayTasksComponent; // 0x3E0(0x8)
	struct UNavigationQueryFilter* DefaultNavigationFilterClass; // 0x3E8(0x8)
	struct FMulticastInlineDelegate ReceiveMoveCompleted; // 0x3F0(0x10)
	uint8_t Pad_0x400[0x8]; // 0x400(0x8)

	// Object: Function AIModule.AIController.UseBlackboard
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0xbf00990
	// Params: [ Num(3) Size(0x11) ]
	bool UseBlackboard(struct UBlackboardData* BlackboardAsset, struct UBlackboardComponent*& BlackboardComponent);

	// Object: Function AIModule.AIController.UnclaimTaskResource
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xbf00840
	// Params: [ Num(1) Size(0x8) ]
	void UnclaimTaskResource(struct UGameplayTaskResource* ResourceClass);

	// Object: Function AIModule.AIController.SetPathFollowingComponent
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xbf003e0
	// Params: [ Num(1) Size(0x8) ]
	void SetPathFollowingComponent(struct UPathFollowingComponent* NewPFComponent);

	// Object: Function AIModule.AIController.SetMoveBlockDetection
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xbf00b4c
	// Params: [ Num(1) Size(0x1) ]
	void SetMoveBlockDetection(bool bEnable);

	// Object: Function AIModule.AIController.RunBehaviorTree
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0xbf00a90
	// Params: [ Num(2) Size(0x9) ]
	bool RunBehaviorTree(struct UBehaviorTree* BTAsset);

	// Object: Function AIModule.AIController.OnUsingBlackBoard
	// Flags: [Event|Protected|BlueprintEvent]
	// Offset: 0x5d8cbc8
	// Params: [ Num(2) Size(0x10) ]
	void OnUsingBlackBoard(struct UBlackboardComponent* BlackboardComp, struct UBlackboardData* BlackboardAsset);

	// Object: Function AIModule.AIController.OnGameplayTaskResourcesClaimed
	// Flags: [Native|Public]
	// Offset: 0xbf004c0
	// Params: [ Num(2) Size(0x4) ]
	void OnGameplayTaskResourcesClaimed(struct FGameplayResourceSet NewlyClaimed, struct FGameplayResourceSet FreshlyReleased);

	// Object: Function AIModule.AIController.MoveToLocation
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable]
	// Offset: 0xbf00ca4
	// Params: [ Num(9) Size(0x22) ]
	uint8_t MoveToLocation(const struct FVector& Dest, float AcceptanceRadius, bool bStopOnOverlap, bool bUsePathfinding, bool bProjectDestinationToNavigation, bool bCanStrafe, struct UNavigationQueryFilter* FilterClass, bool bAllowPartialPath);

	// Object: Function AIModule.AIController.MoveToActor
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xbf00f5c
	// Params: [ Num(8) Size(0x1A) ]
	uint8_t MoveToActor(struct AActor* Goal, float AcceptanceRadius, bool bStopOnOverlap, bool bUsePathfinding, bool bCanStrafe, struct UNavigationQueryFilter* FilterClass, bool bAllowPartialPath);

	// Object: Function AIModule.AIController.K2_SetFocus
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xbf005f8
	// Params: [ Num(1) Size(0x8) ]
	void K2_SetFocus(struct AActor* NewFocus);

	// Object: Function AIModule.AIController.K2_SetFocalPoint
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	// Offset: 0xbf006a0
	// Params: [ Num(1) Size(0xC) ]
	void K2_SetFocalPoint(struct FVector FP);

	// Object: Function AIModule.AIController.K2_ClearFocus
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xbf005b0
	// Params: [ Num(0) Size(0x0) ]
	void K2_ClearFocus();

	// Object: Function AIModule.AIController.HasPartialPath
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xbf00c38
	// Params: [ Num(1) Size(0x1) ]
	bool HasPartialPath();

	// Object: Function AIModule.AIController.GetPathFollowingComponent
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xbf004a4
	// Params: [ Num(1) Size(0x8) ]
	struct UPathFollowingComponent* GetPathFollowingComponent();

	// Object: Function AIModule.AIController.GetMoveStatus
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xbf00c70
	// Params: [ Num(1) Size(0x1) ]
	uint8_t GetMoveStatus();

	// Object: Function AIModule.AIController.GetImmediateMoveDestination
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xbf00bfc
	// Params: [ Num(1) Size(0xC) ]
	struct FVector GetImmediateMoveDestination();

	// Object: Function AIModule.AIController.GetFocusActor
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xbf005c4
	// Params: [ Num(1) Size(0x8) ]
	struct AActor* GetFocusActor();

	// Object: Function AIModule.AIController.GetFocalPointOnActor
	// Flags: [Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xbf00748
	// Params: [ Num(2) Size(0x14) ]
	struct FVector GetFocalPointOnActor(struct AActor* Actor);

	// Object: Function AIModule.AIController.GetFocalPoint
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xbf00804
	// Params: [ Num(1) Size(0xC) ]
	struct FVector GetFocalPoint();

	// Object: Function AIModule.AIController.GetAIPerceptionComponent
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0xbf00488
	// Params: [ Num(1) Size(0x8) ]
	struct UAIPerceptionComponent* GetAIPerceptionComponent();

	// Object: Function AIModule.AIController.ClaimTaskResource
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xbf008e8
	// Params: [ Num(1) Size(0x8) ]
	void ClaimTaskResource(struct UGameplayTaskResource* ResourceClass);
};

// Object: Class AIModule.BrainComponent
// Size: 0x138 (Inherited: 0xE0)
struct UBrainComponent : UActorComponent
{
	DEFINE_UE_CLASS_HELPERS(UBrainComponent, "BrainComponent")

	uint8_t Pad_0xE0[0x8]; // 0xE0(0x8)
	struct UBlackboardComponent* BlackboardComp; // 0xE8(0x8)
	struct AAIController* AIOwner; // 0xF0(0x8)
	uint8_t Pad_0xF8[0x40]; // 0xF8(0x40)

	// Object: Function AIModule.BrainComponent.StopLogic
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0xbf0cc70
	// Params: [ Num(1) Size(0x10) ]
	void StopLogic(struct FString reason);

	// Object: Function AIModule.BrainComponent.StartLogic
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0xbf0cd48
	// Params: [ Num(0) Size(0x0) ]
	void StartLogic();

	// Object: Function AIModule.BrainComponent.RestartLogic
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0xbf0cd2c
	// Params: [ Num(0) Size(0x0) ]
	void RestartLogic();

	// Object: Function AIModule.BrainComponent.IsRunning
	// Flags: [Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xbf0cc30
	// Params: [ Num(1) Size(0x1) ]
	bool IsRunning();

	// Object: Function AIModule.BrainComponent.IsPaused
	// Flags: [Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xbf0cbf0
	// Params: [ Num(1) Size(0x1) ]
	bool IsPaused();
};

// Object: Class AIModule.BehaviorTreeComponent
// Size: 0x2C0 (Inherited: 0x138)
struct UBehaviorTreeComponent : UBrainComponent
{
	DEFINE_UE_CLASS_HELPERS(UBehaviorTreeComponent, "BehaviorTreeComponent")

	uint8_t Pad_0x138[0x20]; // 0x138(0x20)
	struct TArray<struct UBTNode*> NodeInstances; // 0x158(0x10)
	uint8_t Pad_0x168[0x140]; // 0x168(0x140)
	struct UBehaviorTree* DefaultBehaviorTreeAsset; // 0x2A8(0x8)
	uint8_t Pad_0x2B0[0x10]; // 0x2B0(0x10)

	// Object: Function AIModule.BehaviorTreeComponent.SetDynamicSubtree
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0xbf0b118
	// Params: [ Num(2) Size(0x10) ]
	void SetDynamicSubtree(struct FGameplayTag InjectTag, struct UBehaviorTree* BehaviorAsset);

	// Object: Function AIModule.BehaviorTreeComponent.GetTagCooldownEndTime
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xbf0b334
	// Params: [ Num(2) Size(0xC) ]
	float GetTagCooldownEndTime(struct FGameplayTag CooldownTag);

	// Object: Function AIModule.BehaviorTreeComponent.AddCooldownTagDuration
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xbf0b204
	// Params: [ Num(3) Size(0xD) ]
	void AddCooldownTagDuration(struct FGameplayTag CooldownTag, float CoolDownDuration, bool bAddToExistingDuration);
};

// Object: Class AIModule.AIAsyncTaskBlueprintProxy
// Size: 0x68 (Inherited: 0x28)
struct UAIAsyncTaskBlueprintProxy : UObject
{
	DEFINE_UE_CLASS_HELPERS(UAIAsyncTaskBlueprintProxy, "AIAsyncTaskBlueprintProxy")

	struct FMulticastInlineDelegate OnSuccess; // 0x28(0x10)
	struct FMulticastInlineDelegate OnFail; // 0x38(0x10)
	uint8_t Pad_0x48[0x20]; // 0x48(0x20)

	// Object: Function AIModule.AIAsyncTaskBlueprintProxy.OnMoveCompleted
	// Flags: [Final|Native|Public]
	// Offset: 0xbeff298
	// Params: [ Num(2) Size(0x5) ]
	void OnMoveCompleted(struct FAIRequestID RequestID, uint8_t MovementResult);
};

// Object: Class AIModule.AIBlueprintHelperLibrary
// Size: 0x28 (Inherited: 0x28)
struct UAIBlueprintHelperLibrary : UBlueprintFunctionLibrary
{
	DEFINE_UE_CLASS_HELPERS(UAIBlueprintHelperLibrary, "AIBlueprintHelperLibrary")

	// Object: Function AIModule.AIBlueprintHelperLibrary.UnlockAIResourcesWithAnimation
	// Flags: [Final|BlueprintAuthorityOnly|Native|Static|Public|BlueprintCallable]
	// Offset: 0xbeffa3c
	// Params: [ Num(3) Size(0xA) ]
	static void UnlockAIResourcesWithAnimation(struct UAnimInstance* AnimInstance, bool bUnlockMovement, bool UnlockAILogic);

	// Object: Function AIModule.AIBlueprintHelperLibrary.SpawnAIFromClass
	// Flags: [Final|Native|Static|Public|HasDefaults|BlueprintCallable]
	// Offset: 0xbeffdec
	// Params: [ Num(8) Size(0x48) ]
	static struct APawn* SpawnAIFromClass(struct UObject* WorldContextObject, struct APawn* PawnClass, struct UBehaviorTree* BehaviorTree, struct FVector Location, struct FRotator Rotation, bool bNoCollisionFail, struct AActor* Owner);

	// Object: Function AIModule.AIBlueprintHelperLibrary.SimpleMoveToLocation
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable]
	// Offset: 0xbeff38c
	// Params: [ Num(2) Size(0x14) ]
	static void SimpleMoveToLocation(struct AController* Controller, const struct FVector& Goal);

	// Object: Function AIModule.AIBlueprintHelperLibrary.SimpleMoveToActor
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0xbeff46c
	// Params: [ Num(2) Size(0x10) ]
	static void SimpleMoveToActor(struct AController* Controller, struct AActor* Goal);

	// Object: Function AIModule.AIBlueprintHelperLibrary.SendAIMessage
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0xbf00018
	// Params: [ Num(4) Size(0x19) ]
	static void SendAIMessage(struct APawn* Target, struct FName Message, struct UObject* MessageSource, bool bSuccess);

	// Object: Function AIModule.AIBlueprintHelperLibrary.LockAIResourcesWithAnimation
	// Flags: [Final|BlueprintAuthorityOnly|Native|Static|Public|BlueprintCallable]
	// Offset: 0xbeffb6c
	// Params: [ Num(3) Size(0xA) ]
	static void LockAIResourcesWithAnimation(struct UAnimInstance* AnimInstance, bool bLockMovement, bool LockAILogic);

	// Object: Function AIModule.AIBlueprintHelperLibrary.IsValidAIRotation
	// Flags: [Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure]
	// Offset: 0xbeff838
	// Params: [ Num(2) Size(0xD) ]
	static bool IsValidAIRotation(struct FRotator Rotation);

	// Object: Function AIModule.AIBlueprintHelperLibrary.IsValidAILocation
	// Flags: [Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure]
	// Offset: 0xbeff990
	// Params: [ Num(2) Size(0xD) ]
	static bool IsValidAILocation(struct FVector Location);

	// Object: Function AIModule.AIBlueprintHelperLibrary.IsValidAIDirection
	// Flags: [Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure]
	// Offset: 0xbeff8e4
	// Params: [ Num(2) Size(0xD) ]
	static bool IsValidAIDirection(struct FVector DirectionVector);

	// Object: Function AIModule.AIBlueprintHelperLibrary.GetNextNavLinkIndex
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0xbeff540
	// Params: [ Num(2) Size(0xC) ]
	static int32_t GetNextNavLinkIndex(struct AController* Controller);

	// Object: Function AIModule.AIBlueprintHelperLibrary.GetCurrentPathPoints
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0xbeff690
	// Params: [ Num(2) Size(0x18) ]
	static struct TArray<struct FVector> GetCurrentPathPoints(struct AController* Controller);

	// Object: Function AIModule.AIBlueprintHelperLibrary.GetCurrentPathIndex
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0xbeff5e8
	// Params: [ Num(2) Size(0xC) ]
	static int32_t GetCurrentPathIndex(struct AController* Controller);

	// Object: Function AIModule.AIBlueprintHelperLibrary.GetCurrentPath
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0xbeff790
	// Params: [ Num(2) Size(0x10) ]
	static struct UNavigationPath* GetCurrentPath(struct AController* Controller);

	// Object: Function AIModule.AIBlueprintHelperLibrary.GetBlackboard
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0xbeffc9c
	// Params: [ Num(2) Size(0x10) ]
	static struct UBlackboardComponent* GetBlackboard(struct AActor* Target);

	// Object: Function AIModule.AIBlueprintHelperLibrary.GetAIController
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0xbeffd44
	// Params: [ Num(2) Size(0x10) ]
	static struct AAIController* GetAIController(struct AActor* ControlledActor);

	// Object: Function AIModule.AIBlueprintHelperLibrary.CreateMoveToProxyObject
	// Flags: [Final|Native|Static|Public|HasDefaults|BlueprintCallable]
	// Offset: 0xbf00174
	// Params: [ Num(7) Size(0x38) ]
	static struct UAIAsyncTaskBlueprintProxy* CreateMoveToProxyObject(struct UObject* WorldContextObject, struct APawn* Pawn, struct FVector Destination, struct AActor* TargetActor, float AcceptanceRadius, bool bStopOnOverlap);
};

// Object: Class AIModule.AIDataProvider
// Size: 0x28 (Inherited: 0x28)
struct UAIDataProvider : UObject
{
	DEFINE_UE_CLASS_HELPERS(UAIDataProvider, "AIDataProvider")
};

// Object: Class AIModule.AIDataProvider_QueryParams
// Size: 0x40 (Inherited: 0x28)
struct UAIDataProvider_QueryParams : UAIDataProvider
{
	DEFINE_UE_CLASS_HELPERS(UAIDataProvider_QueryParams, "AIDataProvider_QueryParams")

	struct FName ParamName; // 0x28(0x8)
	float FloatValue; // 0x30(0x4)
	int32_t IntValue; // 0x34(0x4)
	bool BoolValue; // 0x38(0x1)
	uint8_t Pad_0x39[0x7]; // 0x39(0x7)
};

// Object: Class AIModule.AIDataProvider_Random
// Size: 0x48 (Inherited: 0x40)
struct UAIDataProvider_Random : UAIDataProvider_QueryParams
{
	DEFINE_UE_CLASS_HELPERS(UAIDataProvider_Random, "AIDataProvider_Random")

	float Min; // 0x3C(0x4)
	float Max; // 0x40(0x4)
	uint8_t bInteger : 1; // 0x44(0x1), Mask(0x1)
};

// Object: Class AIModule.AIHotSpotManager
// Size: 0x28 (Inherited: 0x28)
struct UAIHotSpotManager : UObject
{
	DEFINE_UE_CLASS_HELPERS(UAIHotSpotManager, "AIHotSpotManager")
};

// Object: Class AIModule.AIPerceptionListenerInterface
// Size: 0x28 (Inherited: 0x28)
struct IAIPerceptionListenerInterface : IInterface
{
	DEFINE_UE_CLASS_HELPERS(IAIPerceptionListenerInterface, "AIPerceptionListenerInterface")
};

// Object: Class AIModule.AIPerceptionStimuliSourceComponent
// Size: 0xF8 (Inherited: 0xE0)
struct UAIPerceptionStimuliSourceComponent : UActorComponent
{
	DEFINE_UE_CLASS_HELPERS(UAIPerceptionStimuliSourceComponent, "AIPerceptionStimuliSourceComponent")

	uint8_t bAutoRegisterAsSource : 1; // 0xE0(0x1), Mask(0x1)
	uint8_t BitPad_0xE0_1 : 7; // 0xE0(0x1)
	uint8_t Pad_0xE1[0x7]; // 0xE1(0x7)
	struct TArray<struct UAISense*> RegisterAsSourceForSenses; // 0xE8(0x10)

	// Object: Function AIModule.AIPerceptionStimuliSourceComponent.UnregisterFromSense
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xbf01bc0
	// Params: [ Num(1) Size(0x8) ]
	void UnregisterFromSense(struct UAISense* SenseClass);

	// Object: Function AIModule.AIPerceptionStimuliSourceComponent.UnregisterFromPerceptionSystem
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xbf01c68
	// Params: [ Num(0) Size(0x0) ]
	void UnregisterFromPerceptionSystem();

	// Object: Function AIModule.AIPerceptionStimuliSourceComponent.RegisterWithPerceptionSystem
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xbf01d24
	// Params: [ Num(0) Size(0x0) ]
	void RegisterWithPerceptionSystem();

	// Object: Function AIModule.AIPerceptionStimuliSourceComponent.RegisterForSense
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xbf01c7c
	// Params: [ Num(1) Size(0x8) ]
	void RegisterForSense(struct UAISense* SenseClass);
};

// Object: Class AIModule.AIResourceInterface
// Size: 0x28 (Inherited: 0x28)
struct IAIResourceInterface : IInterface
{
	DEFINE_UE_CLASS_HELPERS(IAIResourceInterface, "AIResourceInterface")
};

// Object: Class AIModule.AIResource_Movement
// Size: 0x30 (Inherited: 0x30)
struct UAIResource_Movement : UGameplayTaskResource
{
	DEFINE_UE_CLASS_HELPERS(UAIResource_Movement, "AIResource_Movement")
};

// Object: Class AIModule.AIResource_Logic
// Size: 0x30 (Inherited: 0x30)
struct UAIResource_Logic : UGameplayTaskResource
{
	DEFINE_UE_CLASS_HELPERS(UAIResource_Logic, "AIResource_Logic")
};

// Object: Class AIModule.AISense_Blueprint
// Size: 0xA0 (Inherited: 0x78)
struct UAISense_Blueprint : UAISense
{
	DEFINE_UE_CLASS_HELPERS(UAISense_Blueprint, "AISense_Blueprint")

	struct UUserDefinedStruct* ListenerDataType; // 0x78(0x8)
	struct TArray<struct UAIPerceptionComponent*> ListenerContainer; // 0x80(0x10)
	struct TArray<struct UAISenseEvent*> UnprocessedEvents; // 0x90(0x10)

	// Object: Function AIModule.AISense_Blueprint.OnUpdate
	// Flags: [Event|Public|HasOutParms|BlueprintEvent]
	// Offset: 0x5d8cbc8
	// Params: [ Num(2) Size(0x14) ]
	float OnUpdate(const struct TArray<struct UAISenseEvent*>& EventsToProcess);

	// Object: Function AIModule.AISense_Blueprint.OnListenerUpdated
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x5d8cbc8
	// Params: [ Num(2) Size(0x10) ]
	void OnListenerUpdated(struct AActor* ActorListener, struct UAIPerceptionComponent* PerceptionComponent);

	// Object: Function AIModule.AISense_Blueprint.OnListenerUnregistered
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x5d8cbc8
	// Params: [ Num(2) Size(0x10) ]
	void OnListenerUnregistered(struct AActor* ActorListener, struct UAIPerceptionComponent* PerceptionComponent);

	// Object: Function AIModule.AISense_Blueprint.OnListenerRegistered
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x5d8cbc8
	// Params: [ Num(2) Size(0x10) ]
	void OnListenerRegistered(struct AActor* ActorListener, struct UAIPerceptionComponent* PerceptionComponent);

	// Object: Function AIModule.AISense_Blueprint.K2_OnNewPawn
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x5d8cbc8
	// Params: [ Num(1) Size(0x8) ]
	void K2_OnNewPawn(struct APawn* NewPawn);

	// Object: Function AIModule.AISense_Blueprint.GetAllListenerComponents
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xbf05e60
	// Params: [ Num(1) Size(0x10) ]
	void GetAllListenerComponents(struct TArray<struct UAIPerceptionComponent*>& ListenerComponents);

	// Object: Function AIModule.AISense_Blueprint.GetAllListenerActors
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xbf05f20
	// Params: [ Num(1) Size(0x10) ]
	void GetAllListenerActors(struct TArray<struct AActor*>& ListenerActors);
};

// Object: Class AIModule.AISense_Damage
// Size: 0x88 (Inherited: 0x78)
struct UAISense_Damage : UAISense
{
	DEFINE_UE_CLASS_HELPERS(UAISense_Damage, "AISense_Damage")

	struct TArray<struct FAIDamageEvent> RegisteredEvents; // 0x78(0x10)

	// Object: Function AIModule.AISense_Damage.ReportDamageEvent
	// Flags: [Final|Native|Static|Public|HasDefaults|BlueprintCallable]
	// Offset: 0xbf06284
	// Params: [ Num(6) Size(0x34) ]
	static void ReportDamageEvent(struct UObject* WorldContextObject, struct AActor* DamagedActor, struct AActor* Instigator, float DamageAmount, struct FVector EventLocation, struct FVector HitLocation);
};

// Object: Class AIModule.AISense_Prediction
// Size: 0x88 (Inherited: 0x78)
struct UAISense_Prediction : UAISense
{
	DEFINE_UE_CLASS_HELPERS(UAISense_Prediction, "AISense_Prediction")

	struct TArray<struct FAIPredictionEvent> RegisteredEvents; // 0x78(0x10)

	// Object: Function AIModule.AISense_Prediction.RequestPawnPredictionEvent
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0xbf0663c
	// Params: [ Num(3) Size(0x14) ]
	static void RequestPawnPredictionEvent(struct APawn* Requestor, struct AActor* PredictedActor, float PredictionTime);

	// Object: Function AIModule.AISense_Prediction.RequestControllerPredictionEvent
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0xbf06750
	// Params: [ Num(3) Size(0x14) ]
	static void RequestControllerPredictionEvent(struct AAIController* Requestor, struct AActor* PredictedActor, float PredictionTime);
};

// Object: Class AIModule.AISense_Team
// Size: 0x88 (Inherited: 0x78)
struct UAISense_Team : UAISense
{
	DEFINE_UE_CLASS_HELPERS(UAISense_Team, "AISense_Team")

	struct TArray<struct FAITeamStimulusEvent> RegisteredEvents; // 0x78(0x10)
};

// Object: Class AIModule.AISense_Touch
// Size: 0x88 (Inherited: 0x78)
struct UAISense_Touch : UAISense
{
	DEFINE_UE_CLASS_HELPERS(UAISense_Touch, "AISense_Touch")

	struct TArray<struct FAITouchEvent> RegisteredEvents; // 0x78(0x10)
};

// Object: Class AIModule.AISenseBlueprintListener
// Size: 0x108 (Inherited: 0x108)
struct UAISenseBlueprintListener : UUserDefinedStruct
{
	DEFINE_UE_CLASS_HELPERS(UAISenseBlueprintListener, "AISenseBlueprintListener")
};

// Object: Class AIModule.AISenseConfig_Blueprint
// Size: 0x50 (Inherited: 0x48)
struct UAISenseConfig_Blueprint : UAISenseConfig
{
	DEFINE_UE_CLASS_HELPERS(UAISenseConfig_Blueprint, "AISenseConfig_Blueprint")

	struct UAISense_Blueprint* Implementation; // 0x48(0x8)
};

// Object: Class AIModule.AISenseConfig_Damage
// Size: 0x50 (Inherited: 0x48)
struct UAISenseConfig_Damage : UAISenseConfig
{
	DEFINE_UE_CLASS_HELPERS(UAISenseConfig_Damage, "AISenseConfig_Damage")

	struct UAISense_Damage* Implementation; // 0x48(0x8)
};

// Object: Class AIModule.AISenseConfig_Prediction
// Size: 0x48 (Inherited: 0x48)
struct UAISenseConfig_Prediction : UAISenseConfig
{
	DEFINE_UE_CLASS_HELPERS(UAISenseConfig_Prediction, "AISenseConfig_Prediction")
};

// Object: Class AIModule.AISenseConfig_Team
// Size: 0x48 (Inherited: 0x48)
struct UAISenseConfig_Team : UAISenseConfig
{
	DEFINE_UE_CLASS_HELPERS(UAISenseConfig_Team, "AISenseConfig_Team")
};

// Object: Class AIModule.AISenseConfig_Touch
// Size: 0x48 (Inherited: 0x48)
struct UAISenseConfig_Touch : UAISenseConfig
{
	DEFINE_UE_CLASS_HELPERS(UAISenseConfig_Touch, "AISenseConfig_Touch")
};

// Object: Class AIModule.AISenseEvent_Damage
// Size: 0x58 (Inherited: 0x28)
struct UAISenseEvent_Damage : UAISenseEvent
{
	DEFINE_UE_CLASS_HELPERS(UAISenseEvent_Damage, "AISenseEvent_Damage")

	struct FAIDamageEvent Event; // 0x28(0x30)
};

// Object: Class AIModule.AISenseEvent_Hearing
// Size: 0x60 (Inherited: 0x28)
struct UAISenseEvent_Hearing : UAISenseEvent
{
	DEFINE_UE_CLASS_HELPERS(UAISenseEvent_Hearing, "AISenseEvent_Hearing")

	struct FAINoiseEvent Event; // 0x28(0x38)
};

// Object: Class AIModule.AISightTargetInterface
// Size: 0x28 (Inherited: 0x28)
struct IAISightTargetInterface : IInterface
{
	DEFINE_UE_CLASS_HELPERS(IAISightTargetInterface, "AISightTargetInterface")
};

// Object: Class AIModule.AITask
// Size: 0x68 (Inherited: 0x60)
struct UAITask : UGameplayTask
{
	DEFINE_UE_CLASS_HELPERS(UAITask, "AITask")

	struct AAIController* OwnerController; // 0x60(0x8)
};

// Object: Class AIModule.AITask_LockLogic
// Size: 0x68 (Inherited: 0x68)
struct UAITask_LockLogic : UAITask
{
	DEFINE_UE_CLASS_HELPERS(UAITask_LockLogic, "AITask_LockLogic")
};

// Object: Class AIModule.AITask_MoveTo
// Size: 0x108 (Inherited: 0x68)
struct UAITask_MoveTo : UAITask
{
	DEFINE_UE_CLASS_HELPERS(UAITask_MoveTo, "AITask_MoveTo")

	struct FMulticastInlineDelegate OnRequestFailed; // 0x68(0x10)
	struct FMulticastInlineDelegate OnMoveFinished; // 0x78(0x10)
	struct FAIMoveRequest MoveRequest; // 0x88(0x40)
	uint8_t Pad_0xC8[0x40]; // 0xC8(0x40)

	// Object: Function AIModule.AITask_MoveTo.AIMoveTo
	// Flags: [Final|Native|Static|Public|HasDefaults|BlueprintCallable]
	// Offset: 0xbf06a54
	// Params: [ Num(11) Size(0x38) ]
	static struct UAITask_MoveTo* AIMoveTo(struct AAIController* Controller, struct FVector GoalLocation, struct AActor* GoalActor, float AcceptanceRadius, uint8_t StopOnOverlap, uint8_t AcceptPartialPath, bool bUsePathfinding, bool bLockAILogic, bool bUseContinuosGoalTracking, uint8_t ProjectGoalOnNavigation);
};

// Object: Class AIModule.AITask_RunEQS
// Size: 0xE0 (Inherited: 0x68)
struct UAITask_RunEQS : UAITask
{
	DEFINE_UE_CLASS_HELPERS(UAITask_RunEQS, "AITask_RunEQS")

	uint8_t Pad_0x68[0x78]; // 0x68(0x78)

	// Object: Function AIModule.AITask_RunEQS.RunEQS
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0xbf06d88
	// Params: [ Num(3) Size(0x18) ]
	static struct UAITask_RunEQS* RunEQS(struct AAIController* Controller, struct UEnvQuery* QueryTemplate);
};

// Object: Class AIModule.BehaviorTree
// Size: 0x68 (Inherited: 0x28)
struct UBehaviorTree : UObject
{
	DEFINE_UE_CLASS_HELPERS(UBehaviorTree, "BehaviorTree")

	uint8_t Pad_0x28[0x8]; // 0x28(0x8)
	struct UBTCompositeNode* RootNode; // 0x30(0x8)
	struct UBlackboardData* BlackboardAsset; // 0x38(0x8)
	struct TArray<struct UBTDecorator*> RootDecorators; // 0x40(0x10)
	struct TArray<struct FBTDecoratorLogic> RootDecoratorOps; // 0x50(0x10)
	uint8_t Pad_0x60[0x8]; // 0x60(0x8)
};

// Object: Class AIModule.BehaviorTreeManager
// Size: 0x50 (Inherited: 0x28)
struct UBehaviorTreeManager : UObject
{
	DEFINE_UE_CLASS_HELPERS(UBehaviorTreeManager, "BehaviorTreeManager")

	int32_t MaxDebuggerSteps; // 0x28(0x4)
	uint8_t Pad_0x2C[0x4]; // 0x2C(0x4)
	struct TArray<struct FBehaviorTreeTemplateInfo> LoadedTemplates; // 0x30(0x10)
	struct TArray<struct UBehaviorTreeComponent*> ActiveComponents; // 0x40(0x10)
};

// Object: Class AIModule.BehaviorTreeTypes
// Size: 0x28 (Inherited: 0x28)
struct UBehaviorTreeTypes : UObject
{
	DEFINE_UE_CLASS_HELPERS(UBehaviorTreeTypes, "BehaviorTreeTypes")
};

// Object: Class AIModule.BlackboardAssetProvider
// Size: 0x28 (Inherited: 0x28)
struct IBlackboardAssetProvider : IInterface
{
	DEFINE_UE_CLASS_HELPERS(IBlackboardAssetProvider, "BlackboardAssetProvider")

	// Object: Function AIModule.BlackboardAssetProvider.GetBlackboardAsset
	// Flags: [Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xbf0b4a8
	// Params: [ Num(1) Size(0x8) ]
	struct UBlackboardData* GetBlackboardAsset();
};

// Object: Class AIModule.BlackboardComponent
// Size: 0x1E8 (Inherited: 0xE0)
struct UBlackboardComponent : UActorComponent
{
	DEFINE_UE_CLASS_HELPERS(UBlackboardComponent, "BlackboardComponent")

	struct UBrainComponent* BrainComp; // 0xE0(0x8)
	struct UBlackboardData* DefaultBlackboardAsset; // 0xE8(0x8)
	struct UBlackboardData* BlackboardAsset; // 0xF0(0x8)
	uint8_t Pad_0xF8[0x20]; // 0xF8(0x20)
	struct TArray<struct UBlackboardKeyType*> KeyInstances; // 0x118(0x10)
	uint8_t Pad_0x128[0xC0]; // 0x128(0xC0)

	// Object: Function AIModule.BlackboardComponent.SetValueAsVector
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable]
	// Offset: 0xbf0b974
	// Params: [ Num(2) Size(0x14) ]
	void SetValueAsVector(const struct FName& KeyName, struct FVector VectorValue);

	// Object: Function AIModule.BlackboardComponent.SetValueAsString
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0xbf0bb5c
	// Params: [ Num(2) Size(0x18) ]
	void SetValueAsString(const struct FName& KeyName, struct FString StringValue);

	// Object: Function AIModule.BlackboardComponent.SetValueAsRotator
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable]
	// Offset: 0xbf0b880
	// Params: [ Num(2) Size(0x14) ]
	void SetValueAsRotator(const struct FName& KeyName, struct FRotator VectorValue);

	// Object: Function AIModule.BlackboardComponent.SetValueAsObject
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0xbf0c17c
	// Params: [ Num(2) Size(0x10) ]
	void SetValueAsObject(const struct FName& KeyName, struct UObject* ObjectValue);

	// Object: Function AIModule.BlackboardComponent.SetValueAsName
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0xbf0ba68
	// Params: [ Num(2) Size(0x10) ]
	void SetValueAsName(const struct FName& KeyName, struct FName NameValue);

	// Object: Function AIModule.BlackboardComponent.SetValueAsInt
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0xbf0bea0
	// Params: [ Num(2) Size(0xC) ]
	void SetValueAsInt(const struct FName& KeyName, int32_t IntValue);

	// Object: Function AIModule.BlackboardComponent.SetValueAsFloat
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0xbf0bdac
	// Params: [ Num(2) Size(0xC) ]
	void SetValueAsFloat(const struct FName& KeyName, float FloatValue);

	// Object: Function AIModule.BlackboardComponent.SetValueAsEnum
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0xbf0bf94
	// Params: [ Num(2) Size(0x9) ]
	void SetValueAsEnum(const struct FName& KeyName, uint8_t EnumValue);

	// Object: Function AIModule.BlackboardComponent.SetValueAsClass
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0xbf0c088
	// Params: [ Num(2) Size(0x10) ]
	void SetValueAsClass(const struct FName& KeyName, struct UObject* ClassValue);

	// Object: Function AIModule.BlackboardComponent.SetValueAsBool
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0xbf0bcb0
	// Params: [ Num(2) Size(0x9) ]
	void SetValueAsBool(const struct FName& KeyName, bool BoolValue);

	// Object: Function AIModule.BlackboardComponent.IsVectorValueSet
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xbf0b7c0
	// Params: [ Num(2) Size(0x9) ]
	bool IsVectorValueSet(const struct FName& KeyName);

	// Object: Function AIModule.BlackboardComponent.GetValueAsVector
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xbf0c334
	// Params: [ Num(2) Size(0x14) ]
	struct FVector GetValueAsVector(const struct FName& KeyName);

	// Object: Function AIModule.BlackboardComponent.GetValueAsString
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xbf0c4b4
	// Params: [ Num(2) Size(0x18) ]
	struct FString GetValueAsString(const struct FName& KeyName);

	// Object: Function AIModule.BlackboardComponent.GetValueAsRotator
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xbf0c270
	// Params: [ Num(2) Size(0x14) ]
	struct FRotator GetValueAsRotator(const struct FName& KeyName);

	// Object: Function AIModule.BlackboardComponent.GetValueAsObject
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xbf0c958
	// Params: [ Num(2) Size(0x10) ]
	struct UObject* GetValueAsObject(const struct FName& KeyName);

	// Object: Function AIModule.BlackboardComponent.GetValueAsName
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xbf0c3f8
	// Params: [ Num(2) Size(0x10) ]
	struct FName GetValueAsName(const struct FName& KeyName);

	// Object: Function AIModule.BlackboardComponent.GetValueAsInt
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xbf0c724
	// Params: [ Num(2) Size(0xC) ]
	int32_t GetValueAsInt(const struct FName& KeyName);

	// Object: Function AIModule.BlackboardComponent.GetValueAsFloat
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xbf0c668
	// Params: [ Num(2) Size(0xC) ]
	float GetValueAsFloat(const struct FName& KeyName);

	// Object: Function AIModule.BlackboardComponent.GetValueAsEnum
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xbf0c7e0
	// Params: [ Num(2) Size(0x9) ]
	uint8_t GetValueAsEnum(const struct FName& KeyName);

	// Object: Function AIModule.BlackboardComponent.GetValueAsClass
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xbf0c89c
	// Params: [ Num(2) Size(0x10) ]
	struct UObject* GetValueAsClass(const struct FName& KeyName);

	// Object: Function AIModule.BlackboardComponent.GetValueAsBool
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xbf0c5a8
	// Params: [ Num(2) Size(0x9) ]
	bool GetValueAsBool(const struct FName& KeyName);

	// Object: Function AIModule.BlackboardComponent.GetRotationFromEntry
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xbf0b5a0
	// Params: [ Num(3) Size(0x15) ]
	bool GetRotationFromEntry(const struct FName& KeyName, struct FRotator& ResultRotation);

	// Object: Function AIModule.BlackboardComponent.GetLocationFromEntry
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xbf0b6b0
	// Params: [ Num(3) Size(0x15) ]
	bool GetLocationFromEntry(const struct FName& KeyName, struct FVector& ResultLocation);

	// Object: Function AIModule.BlackboardComponent.ClearValue
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0xbf0b4ec
	// Params: [ Num(1) Size(0x8) ]
	void ClearValue(const struct FName& KeyName);
};

// Object: Class AIModule.BlackboardData
// Size: 0x50 (Inherited: 0x30)
struct UBlackboardData : UDataAsset
{
	DEFINE_UE_CLASS_HELPERS(UBlackboardData, "BlackboardData")

	struct UBlackboardData* Parent; // 0x30(0x8)
	struct TArray<struct FBlackboardEntry> Keys; // 0x38(0x10)
	uint8_t bHasSynchronizedKeys : 1; // 0x48(0x1), Mask(0x1)
	uint8_t BitPad_0x48_1 : 7; // 0x48(0x1)
	uint8_t Pad_0x49[0x7]; // 0x49(0x7)
};

// Object: Class AIModule.BlackboardKeyType
// Size: 0x30 (Inherited: 0x28)
struct UBlackboardKeyType : UObject
{
	DEFINE_UE_CLASS_HELPERS(UBlackboardKeyType, "BlackboardKeyType")

	uint8_t Pad_0x28[0x8]; // 0x28(0x8)
};

// Object: Class AIModule.BlackboardKeyType_Bool
// Size: 0x30 (Inherited: 0x30)
struct UBlackboardKeyType_Bool : UBlackboardKeyType
{
	DEFINE_UE_CLASS_HELPERS(UBlackboardKeyType_Bool, "BlackboardKeyType_Bool")
};

// Object: Class AIModule.BlackboardKeyType_Class
// Size: 0x38 (Inherited: 0x30)
struct UBlackboardKeyType_Class : UBlackboardKeyType
{
	DEFINE_UE_CLASS_HELPERS(UBlackboardKeyType_Class, "BlackboardKeyType_Class")

	struct UObject* BaseClass; // 0x30(0x8)
};

// Object: Class AIModule.BlackboardKeyType_Enum
// Size: 0x50 (Inherited: 0x30)
struct UBlackboardKeyType_Enum : UBlackboardKeyType
{
	DEFINE_UE_CLASS_HELPERS(UBlackboardKeyType_Enum, "BlackboardKeyType_Enum")

	struct UEnum* EnumType; // 0x30(0x8)
	struct FString EnumName; // 0x38(0x10)
	uint8_t bIsEnumNameValid : 1; // 0x48(0x1), Mask(0x1)
	uint8_t BitPad_0x48_1 : 7; // 0x48(0x1)
	uint8_t Pad_0x49[0x7]; // 0x49(0x7)
};

// Object: Class AIModule.BlackboardKeyType_Float
// Size: 0x30 (Inherited: 0x30)
struct UBlackboardKeyType_Float : UBlackboardKeyType
{
	DEFINE_UE_CLASS_HELPERS(UBlackboardKeyType_Float, "BlackboardKeyType_Float")
};

// Object: Class AIModule.BlackboardKeyType_Int
// Size: 0x30 (Inherited: 0x30)
struct UBlackboardKeyType_Int : UBlackboardKeyType
{
	DEFINE_UE_CLASS_HELPERS(UBlackboardKeyType_Int, "BlackboardKeyType_Int")
};

// Object: Class AIModule.BlackboardKeyType_Name
// Size: 0x30 (Inherited: 0x30)
struct UBlackboardKeyType_Name : UBlackboardKeyType
{
	DEFINE_UE_CLASS_HELPERS(UBlackboardKeyType_Name, "BlackboardKeyType_Name")
};

// Object: Class AIModule.BlackboardKeyType_NativeEnum
// Size: 0x48 (Inherited: 0x30)
struct UBlackboardKeyType_NativeEnum : UBlackboardKeyType
{
	DEFINE_UE_CLASS_HELPERS(UBlackboardKeyType_NativeEnum, "BlackboardKeyType_NativeEnum")

	struct FString EnumName; // 0x30(0x10)
	struct UEnum* EnumType; // 0x40(0x8)
};

// Object: Class AIModule.BlackboardKeyType_Object
// Size: 0x38 (Inherited: 0x30)
struct UBlackboardKeyType_Object : UBlackboardKeyType
{
	DEFINE_UE_CLASS_HELPERS(UBlackboardKeyType_Object, "BlackboardKeyType_Object")

	struct UObject* BaseClass; // 0x30(0x8)
};

// Object: Class AIModule.BlackboardKeyType_Rotator
// Size: 0x30 (Inherited: 0x30)
struct UBlackboardKeyType_Rotator : UBlackboardKeyType
{
	DEFINE_UE_CLASS_HELPERS(UBlackboardKeyType_Rotator, "BlackboardKeyType_Rotator")
};

// Object: Class AIModule.BlackboardKeyType_String
// Size: 0x40 (Inherited: 0x30)
struct UBlackboardKeyType_String : UBlackboardKeyType
{
	DEFINE_UE_CLASS_HELPERS(UBlackboardKeyType_String, "BlackboardKeyType_String")

	struct FString StringValue; // 0x30(0x10)
};

// Object: Class AIModule.BlackboardKeyType_Vector
// Size: 0x30 (Inherited: 0x30)
struct UBlackboardKeyType_Vector : UBlackboardKeyType
{
	DEFINE_UE_CLASS_HELPERS(UBlackboardKeyType_Vector, "BlackboardKeyType_Vector")
};

// Object: Class AIModule.BTCompositeNode
// Size: 0x90 (Inherited: 0x58)
struct UBTCompositeNode : UBTNode
{
	DEFINE_UE_CLASS_HELPERS(UBTCompositeNode, "BTCompositeNode")

	struct TArray<struct FBTCompositeChild> Children; // 0x58(0x10)
	struct TArray<struct UBTService*> Services; // 0x68(0x10)
	uint8_t Pad_0x78[0x10]; // 0x78(0x10)
	uint8_t bApplyDecoratorScope : 1; // 0x88(0x1), Mask(0x1)
	uint8_t BitPad_0x88_1 : 7; // 0x88(0x1)
	uint8_t Pad_0x89[0x7]; // 0x89(0x7)
};

// Object: Class AIModule.BTComposite_Selector
// Size: 0x90 (Inherited: 0x90)
struct UBTComposite_Selector : UBTCompositeNode
{
	DEFINE_UE_CLASS_HELPERS(UBTComposite_Selector, "BTComposite_Selector")
};

// Object: Class AIModule.BTComposite_Sequence
// Size: 0x90 (Inherited: 0x90)
struct UBTComposite_Sequence : UBTCompositeNode
{
	DEFINE_UE_CLASS_HELPERS(UBTComposite_Sequence, "BTComposite_Sequence")
};

// Object: Class AIModule.BTComposite_SimpleParallel
// Size: 0x90 (Inherited: 0x90)
struct UBTComposite_SimpleParallel : UBTCompositeNode
{
	DEFINE_UE_CLASS_HELPERS(UBTComposite_SimpleParallel, "BTComposite_SimpleParallel")

	uint8_t FinishMode; // 0x8C(0x1)
};

// Object: Class AIModule.BTDecorator_Blackboard
// Size: 0xB8 (Inherited: 0x88)
struct UBTDecorator_Blackboard : UBTDecorator_BlackboardBase
{
	DEFINE_UE_CLASS_HELPERS(UBTDecorator_Blackboard, "BTDecorator_Blackboard")

	int32_t IntValue; // 0x88(0x4)
	float FloatValue; // 0x8C(0x4)
	struct FString StringValue; // 0x90(0x10)
	struct FString CachedDescription; // 0xA0(0x10)
	uint8_t OperationType; // 0xB0(0x1)
	uint8_t NotifyObserver; // 0xB1(0x1)
	uint8_t Pad_0xB2[0x6]; // 0xB2(0x6)
};

// Object: Class AIModule.BTDecorator_BlueprintBase
// Size: 0x98 (Inherited: 0x60)
struct UBTDecorator_BlueprintBase : UBTDecorator
{
	DEFINE_UE_CLASS_HELPERS(UBTDecorator_BlueprintBase, "BTDecorator_BlueprintBase")

	struct AAIController* AIOwner; // 0x60(0x8)
	struct AActor* ActorOwner; // 0x68(0x8)
	struct TArray<struct FName> ObservedKeyNames; // 0x70(0x10)
	uint8_t Pad_0x80[0x10]; // 0x80(0x10)
	uint8_t bShowPropertyDetails : 1; // 0x90(0x1), Mask(0x1)
	uint8_t bCheckConditionOnlyBlackBoardChanges : 1; // 0x90(0x1), Mask(0x2)
	uint8_t bIsObservingBB : 1; // 0x90(0x1), Mask(0x4)
	uint8_t BitPad_0x90_3 : 5; // 0x90(0x1)
	uint8_t Pad_0x91[0x7]; // 0x91(0x7)

	// Object: Function AIModule.BTDecorator_BlueprintBase.ReceiveTickAI
	// Flags: [Event|Protected|BlueprintEvent]
	// Offset: 0x5d8cbc8
	// Params: [ Num(3) Size(0x14) ]
	void ReceiveTickAI(struct AAIController* OwnerController, struct APawn* ControlledPawn, float DeltaSeconds);

	// Object: Function AIModule.BTDecorator_BlueprintBase.ReceiveTick
	// Flags: [Event|Protected|BlueprintEvent]
	// Offset: 0x5d8cbc8
	// Params: [ Num(2) Size(0xC) ]
	void ReceiveTick(struct AActor* OwnerActor, float DeltaSeconds);

	// Object: Function AIModule.BTDecorator_BlueprintBase.ReceiveObserverDeactivatedAI
	// Flags: [Event|Protected|BlueprintEvent]
	// Offset: 0x5d8cbc8
	// Params: [ Num(2) Size(0x10) ]
	void ReceiveObserverDeactivatedAI(struct AAIController* OwnerController, struct APawn* ControlledPawn);

	// Object: Function AIModule.BTDecorator_BlueprintBase.ReceiveObserverDeactivated
	// Flags: [Event|Protected|BlueprintEvent]
	// Offset: 0x5d8cbc8
	// Params: [ Num(1) Size(0x8) ]
	void ReceiveObserverDeactivated(struct AActor* OwnerActor);

	// Object: Function AIModule.BTDecorator_BlueprintBase.ReceiveObserverActivatedAI
	// Flags: [Event|Protected|BlueprintEvent]
	// Offset: 0x5d8cbc8
	// Params: [ Num(2) Size(0x10) ]
	void ReceiveObserverActivatedAI(struct AAIController* OwnerController, struct APawn* ControlledPawn);

	// Object: Function AIModule.BTDecorator_BlueprintBase.ReceiveObserverActivated
	// Flags: [Event|Protected|BlueprintEvent]
	// Offset: 0x5d8cbc8
	// Params: [ Num(1) Size(0x8) ]
	void ReceiveObserverActivated(struct AActor* OwnerActor);

	// Object: Function AIModule.BTDecorator_BlueprintBase.ReceiveExecutionStartAI
	// Flags: [Event|Protected|BlueprintEvent]
	// Offset: 0x5d8cbc8
	// Params: [ Num(2) Size(0x10) ]
	void ReceiveExecutionStartAI(struct AAIController* OwnerController, struct APawn* ControlledPawn);

	// Object: Function AIModule.BTDecorator_BlueprintBase.ReceiveExecutionStart
	// Flags: [Event|Protected|BlueprintEvent]
	// Offset: 0x5d8cbc8
	// Params: [ Num(1) Size(0x8) ]
	void ReceiveExecutionStart(struct AActor* OwnerActor);

	// Object: Function AIModule.BTDecorator_BlueprintBase.ReceiveExecutionFinishAI
	// Flags: [Event|Protected|BlueprintEvent]
	// Offset: 0x5d8cbc8
	// Params: [ Num(3) Size(0x11) ]
	void ReceiveExecutionFinishAI(struct AAIController* OwnerController, struct APawn* ControlledPawn, uint8_t NodeResult);

	// Object: Function AIModule.BTDecorator_BlueprintBase.ReceiveExecutionFinish
	// Flags: [Event|Protected|BlueprintEvent]
	// Offset: 0x5d8cbc8
	// Params: [ Num(2) Size(0x9) ]
	void ReceiveExecutionFinish(struct AActor* OwnerActor, uint8_t NodeResult);

	// Object: Function AIModule.BTDecorator_BlueprintBase.PerformConditionCheckAI
	// Flags: [Event|Protected|BlueprintEvent]
	// Offset: 0x5d8cbc8
	// Params: [ Num(3) Size(0x11) ]
	bool PerformConditionCheckAI(struct AAIController* OwnerController, struct APawn* ControlledPawn);

	// Object: Function AIModule.BTDecorator_BlueprintBase.PerformConditionCheck
	// Flags: [Event|Protected|BlueprintEvent]
	// Offset: 0x5d8cbc8
	// Params: [ Num(2) Size(0x9) ]
	bool PerformConditionCheck(struct AActor* OwnerActor);

	// Object: Function AIModule.BTDecorator_BlueprintBase.IsDecoratorObserverActive
	// Flags: [Final|Native|Protected|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xbf0cf14
	// Params: [ Num(1) Size(0x1) ]
	bool IsDecoratorObserverActive();

	// Object: Function AIModule.BTDecorator_BlueprintBase.IsDecoratorExecutionActive
	// Flags: [Final|Native|Protected|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xbf0cf4c
	// Params: [ Num(1) Size(0x1) ]
	bool IsDecoratorExecutionActive();
};

// Object: Class AIModule.BTDecorator_CheckGameplayTagsOnActor
// Size: 0xC0 (Inherited: 0x60)
struct UBTDecorator_CheckGameplayTagsOnActor : UBTDecorator
{
	DEFINE_UE_CLASS_HELPERS(UBTDecorator_CheckGameplayTagsOnActor, "BTDecorator_CheckGameplayTagsOnActor")

	struct FBlackboardKeySelector ActorToCheck; // 0x60(0x28)
	EGameplayContainerMatchType TagsToMatch; // 0x88(0x1)
	uint8_t Pad_0x89[0x7]; // 0x89(0x7)
	struct FGameplayTagContainer GameplayTags; // 0x90(0x20)
	struct FString CachedDescription; // 0xB0(0x10)
};

// Object: Class AIModule.BTDecorator_ConditionalLoop
// Size: 0xB8 (Inherited: 0xB8)
struct UBTDecorator_ConditionalLoop : UBTDecorator_Blackboard
{
	DEFINE_UE_CLASS_HELPERS(UBTDecorator_ConditionalLoop, "BTDecorator_ConditionalLoop")
};

// Object: Class AIModule.BTDecorator_ConeCheck
// Size: 0xE0 (Inherited: 0x60)
struct UBTDecorator_ConeCheck : UBTDecorator
{
	DEFINE_UE_CLASS_HELPERS(UBTDecorator_ConeCheck, "BTDecorator_ConeCheck")

	float ConeHalfAngle; // 0x5C(0x4)
	struct FBlackboardKeySelector ConeOrigin; // 0x60(0x28)
	struct FBlackboardKeySelector ConeDirection; // 0x88(0x28)
	struct FBlackboardKeySelector Observed; // 0xB0(0x28)
	uint8_t Pad_0xDC[0x4]; // 0xDC(0x4)
};

// Object: Class AIModule.BTDecorator_DoesPathExist
// Size: 0xC0 (Inherited: 0x60)
struct UBTDecorator_DoesPathExist : UBTDecorator
{
	DEFINE_UE_CLASS_HELPERS(UBTDecorator_DoesPathExist, "BTDecorator_DoesPathExist")

	struct FBlackboardKeySelector BlackboardKeyA; // 0x60(0x28)
	struct FBlackboardKeySelector BlackboardKeyB; // 0x88(0x28)
	uint8_t bUseSelf : 1; // 0xB0(0x1), Mask(0x1)
	uint8_t BitPad_0xB0_1 : 7; // 0xB0(0x1)
	uint8_t PathQueryType; // 0xB1(0x1)
	uint8_t Pad_0xB2[0x6]; // 0xB2(0x6)
	struct UNavigationQueryFilter* FilterClass; // 0xB8(0x8)
};

// Object: Class AIModule.BTDecorator_ForceSuccess
// Size: 0x60 (Inherited: 0x60)
struct UBTDecorator_ForceSuccess : UBTDecorator
{
	DEFINE_UE_CLASS_HELPERS(UBTDecorator_ForceSuccess, "BTDecorator_ForceSuccess")
};

// Object: Class AIModule.BTDecorator_IsAtLocation
// Size: 0xD0 (Inherited: 0x88)
struct UBTDecorator_IsAtLocation : UBTDecorator_BlackboardBase
{
	DEFINE_UE_CLASS_HELPERS(UBTDecorator_IsAtLocation, "BTDecorator_IsAtLocation")

	float AcceptableRadius; // 0x88(0x4)
	uint8_t Pad_0x8C[0x4]; // 0x8C(0x4)
	struct FAIDataProviderFloatValue ParametrizedAcceptableRadius; // 0x90(0x38)
	EFAIDistanceType GeometricDistanceType; // 0xC8(0x1)
	uint8_t bUseParametrizedRadius : 1; // 0xC9(0x1), Mask(0x1)
	uint8_t bUseNavAgentGoalLocation : 1; // 0xC9(0x1), Mask(0x2)
	uint8_t bPathFindingBasedTest : 1; // 0xC9(0x1), Mask(0x4)
	uint8_t BitPad_0xC9_3 : 5; // 0xC9(0x1)
	uint8_t Pad_0xCA[0x6]; // 0xCA(0x6)
};

// Object: Class AIModule.BTDecorator_IsBBEntryOfClass
// Size: 0x90 (Inherited: 0x88)
struct UBTDecorator_IsBBEntryOfClass : UBTDecorator_BlackboardBase
{
	DEFINE_UE_CLASS_HELPERS(UBTDecorator_IsBBEntryOfClass, "BTDecorator_IsBBEntryOfClass")

	struct UObject* TestClass; // 0x88(0x8)
};

// Object: Class AIModule.BTDecorator_KeepInCone
// Size: 0xB8 (Inherited: 0x60)
struct UBTDecorator_KeepInCone : UBTDecorator
{
	DEFINE_UE_CLASS_HELPERS(UBTDecorator_KeepInCone, "BTDecorator_KeepInCone")

	float ConeHalfAngle; // 0x5C(0x4)
	struct FBlackboardKeySelector ConeOrigin; // 0x60(0x28)
	struct FBlackboardKeySelector Observed; // 0x88(0x28)
	uint8_t bUseSelfAsOrigin : 1; // 0xB0(0x1), Mask(0x1)
	uint8_t bUseSelfAsObserved : 1; // 0xB0(0x1), Mask(0x2)
	uint8_t BitPad_0xB4_2 : 6; // 0xB4(0x1)
	uint8_t Pad_0xB5[0x3]; // 0xB5(0x3)
};

// Object: Class AIModule.BTDecorator_Loop
// Size: 0x68 (Inherited: 0x60)
struct UBTDecorator_Loop : UBTDecorator
{
	DEFINE_UE_CLASS_HELPERS(UBTDecorator_Loop, "BTDecorator_Loop")

	int32_t NumLoops; // 0x5C(0x4)
	bool bInfiniteLoop; // 0x60(0x1)
	float InfiniteLoopTimeoutTime; // 0x64(0x4)
};

// Object: Class AIModule.BTDecorator_ReachedMoveGoal
// Size: 0x60 (Inherited: 0x60)
struct UBTDecorator_ReachedMoveGoal : UBTDecorator
{
	DEFINE_UE_CLASS_HELPERS(UBTDecorator_ReachedMoveGoal, "BTDecorator_ReachedMoveGoal")
};

// Object: Class AIModule.BTDecorator_SetTagCooldown
// Size: 0x70 (Inherited: 0x60)
struct UBTDecorator_SetTagCooldown : UBTDecorator
{
	DEFINE_UE_CLASS_HELPERS(UBTDecorator_SetTagCooldown, "BTDecorator_SetTagCooldown")

	struct FGameplayTag CooldownTag; // 0x5C(0x8)
	float CoolDownDuration; // 0x64(0x4)
	bool bAddToExistingDuration; // 0x68(0x1)
	uint8_t Pad_0x6D[0x3]; // 0x6D(0x3)
};

// Object: Class AIModule.BTDecorator_TagCooldown
// Size: 0x70 (Inherited: 0x60)
struct UBTDecorator_TagCooldown : UBTDecorator
{
	DEFINE_UE_CLASS_HELPERS(UBTDecorator_TagCooldown, "BTDecorator_TagCooldown")

	struct FGameplayTag CooldownTag; // 0x5C(0x8)
	float CoolDownDuration; // 0x64(0x4)
	bool bAddToExistingDuration; // 0x68(0x1)
	bool bActivatesCooldown; // 0x69(0x1)
	uint8_t Pad_0x6E[0x2]; // 0x6E(0x2)
};

// Object: Class AIModule.BTDecorator_TimeLimit
// Size: 0x60 (Inherited: 0x60)
struct UBTDecorator_TimeLimit : UBTDecorator
{
	DEFINE_UE_CLASS_HELPERS(UBTDecorator_TimeLimit, "BTDecorator_TimeLimit")

	float TimeLimit; // 0x5C(0x4)
};

// Object: Class AIModule.BTFunctionLibrary
// Size: 0x28 (Inherited: 0x28)
struct UBTFunctionLibrary : UBlueprintFunctionLibrary
{
	DEFINE_UE_CLASS_HELPERS(UBTFunctionLibrary, "BTFunctionLibrary")

	// Object: Function AIModule.BTFunctionLibrary.StopUsingExternalEvent
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0xbf10abc
	// Params: [ Num(1) Size(0x8) ]
	static void StopUsingExternalEvent(struct UBTNode* NodeOwner);

	// Object: Function AIModule.BTFunctionLibrary.StartUsingExternalEvent
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0xbf10b54
	// Params: [ Num(2) Size(0x10) ]
	static void StartUsingExternalEvent(struct UBTNode* NodeOwner, struct AActor* OwningActor);

	// Object: Function AIModule.BTFunctionLibrary.SetBlackboardValueAsVector
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable]
	// Offset: 0xbf10f68
	// Params: [ Num(3) Size(0x3C) ]
	static void SetBlackboardValueAsVector(struct UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key, struct FVector Value);

	// Object: Function AIModule.BTFunctionLibrary.SetBlackboardValueAsString
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0xbf111f4
	// Params: [ Num(3) Size(0x40) ]
	static void SetBlackboardValueAsString(struct UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key, struct FString Value);

	// Object: Function AIModule.BTFunctionLibrary.SetBlackboardValueAsRotator
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable]
	// Offset: 0xbf10d24
	// Params: [ Num(3) Size(0x3C) ]
	static void SetBlackboardValueAsRotator(struct UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key, struct FRotator Value);

	// Object: Function AIModule.BTFunctionLibrary.SetBlackboardValueAsObject
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0xbf11a08
	// Params: [ Num(3) Size(0x38) ]
	static void SetBlackboardValueAsObject(struct UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key, struct UObject* Value);

	// Object: Function AIModule.BTFunctionLibrary.SetBlackboardValueAsName
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0xbf110b0
	// Params: [ Num(3) Size(0x38) ]
	static void SetBlackboardValueAsName(struct UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key, struct FName Value);

	// Object: Function AIModule.BTFunctionLibrary.SetBlackboardValueAsInt
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0xbf11634
	// Params: [ Num(3) Size(0x34) ]
	static void SetBlackboardValueAsInt(struct UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key, int32_t Value);

	// Object: Function AIModule.BTFunctionLibrary.SetBlackboardValueAsFloat
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0xbf114ec
	// Params: [ Num(3) Size(0x34) ]
	static void SetBlackboardValueAsFloat(struct UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key, float Value);

	// Object: Function AIModule.BTFunctionLibrary.SetBlackboardValueAsEnum
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0xbf1177c
	// Params: [ Num(3) Size(0x31) ]
	static void SetBlackboardValueAsEnum(struct UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key, uint8_t Value);

	// Object: Function AIModule.BTFunctionLibrary.SetBlackboardValueAsClass
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0xbf118c4
	// Params: [ Num(3) Size(0x38) ]
	static void SetBlackboardValueAsClass(struct UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key, struct UObject* Value);

	// Object: Function AIModule.BTFunctionLibrary.SetBlackboardValueAsBool
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0xbf1139c
	// Params: [ Num(3) Size(0x31) ]
	static void SetBlackboardValueAsBool(struct UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key, bool Value);

	// Object: Function AIModule.BTFunctionLibrary.GetOwnersBlackboard
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0xbf127d8
	// Params: [ Num(2) Size(0x10) ]
	static struct UBlackboardComponent* GetOwnersBlackboard(struct UBTNode* NodeOwner);

	// Object: Function AIModule.BTFunctionLibrary.GetOwnerComponent
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0xbf12730
	// Params: [ Num(2) Size(0x10) ]
	static struct UBehaviorTreeComponent* GetOwnerComponent(struct UBTNode* NodeOwner);

	// Object: Function AIModule.BTFunctionLibrary.GetBlackboardValueAsVector
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure]
	// Offset: 0xbf11c5c
	// Params: [ Num(3) Size(0x3C) ]
	static struct FVector GetBlackboardValueAsVector(struct UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key);

	// Object: Function AIModule.BTFunctionLibrary.GetBlackboardValueAsString
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	// Offset: 0xbf11e7c
	// Params: [ Num(3) Size(0x40) ]
	static struct FString GetBlackboardValueAsString(struct UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key);

	// Object: Function AIModule.BTFunctionLibrary.GetBlackboardValueAsRotator
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure]
	// Offset: 0xbf11b4c
	// Params: [ Num(3) Size(0x3C) ]
	static struct FRotator GetBlackboardValueAsRotator(struct UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key);

	// Object: Function AIModule.BTFunctionLibrary.GetBlackboardValueAsObject
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	// Offset: 0xbf12620
	// Params: [ Num(3) Size(0x38) ]
	static struct UObject* GetBlackboardValueAsObject(struct UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key);

	// Object: Function AIModule.BTFunctionLibrary.GetBlackboardValueAsName
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	// Offset: 0xbf11d6c
	// Params: [ Num(3) Size(0x38) ]
	static struct FName GetBlackboardValueAsName(struct UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key);

	// Object: Function AIModule.BTFunctionLibrary.GetBlackboardValueAsInt
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	// Offset: 0xbf121e0
	// Params: [ Num(3) Size(0x34) ]
	static int32_t GetBlackboardValueAsInt(struct UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key);

	// Object: Function AIModule.BTFunctionLibrary.GetBlackboardValueAsFloat
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	// Offset: 0xbf120d4
	// Params: [ Num(3) Size(0x34) ]
	static float GetBlackboardValueAsFloat(struct UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key);

	// Object: Function AIModule.BTFunctionLibrary.GetBlackboardValueAsEnum
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	// Offset: 0xbf122f0
	// Params: [ Num(3) Size(0x31) ]
	static uint8_t GetBlackboardValueAsEnum(struct UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key);

	// Object: Function AIModule.BTFunctionLibrary.GetBlackboardValueAsClass
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	// Offset: 0xbf12400
	// Params: [ Num(3) Size(0x38) ]
	static struct UObject* GetBlackboardValueAsClass(struct UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key);

	// Object: Function AIModule.BTFunctionLibrary.GetBlackboardValueAsBool
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	// Offset: 0xbf11fc0
	// Params: [ Num(3) Size(0x31) ]
	static bool GetBlackboardValueAsBool(struct UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key);

	// Object: Function AIModule.BTFunctionLibrary.GetBlackboardValueAsActor
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	// Offset: 0xbf12510
	// Params: [ Num(3) Size(0x38) ]
	static struct AActor* GetBlackboardValueAsActor(struct UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key);

	// Object: Function AIModule.BTFunctionLibrary.ClearBlackboardValueAsVector
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0xbf10e6c
	// Params: [ Num(2) Size(0x30) ]
	static void ClearBlackboardValueAsVector(struct UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key);

	// Object: Function AIModule.BTFunctionLibrary.ClearBlackboardValue
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0xbf10c28
	// Params: [ Num(2) Size(0x30) ]
	static void ClearBlackboardValue(struct UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key);
};

// Object: Class AIModule.BTService_BlackboardBase
// Size: 0x90 (Inherited: 0x68)
struct UBTService_BlackboardBase : UBTService
{
	DEFINE_UE_CLASS_HELPERS(UBTService_BlackboardBase, "BTService_BlackboardBase")

	struct FBlackboardKeySelector BlackboardKey; // 0x68(0x28)
};

// Object: Class AIModule.BTService_BlueprintBase
// Size: 0x90 (Inherited: 0x68)
struct UBTService_BlueprintBase : UBTService
{
	DEFINE_UE_CLASS_HELPERS(UBTService_BlueprintBase, "BTService_BlueprintBase")

	struct AAIController* AIOwner; // 0x68(0x8)
	struct AActor* ActorOwner; // 0x70(0x8)
	uint8_t Pad_0x78[0x10]; // 0x78(0x10)
	uint8_t bShowPropertyDetails : 1; // 0x88(0x1), Mask(0x1)
	uint8_t bShowEventDetails : 1; // 0x88(0x1), Mask(0x2)
	uint8_t BitPad_0x88_2 : 6; // 0x88(0x1)
	uint8_t Pad_0x89[0x7]; // 0x89(0x7)

	// Object: Function AIModule.BTService_BlueprintBase.ReceiveTickAI
	// Flags: [Event|Protected|BlueprintEvent]
	// Offset: 0x5d8cbc8
	// Params: [ Num(3) Size(0x14) ]
	void ReceiveTickAI(struct AAIController* OwnerController, struct APawn* ControlledPawn, float DeltaSeconds);

	// Object: Function AIModule.BTService_BlueprintBase.ReceiveTick
	// Flags: [Event|Protected|BlueprintEvent]
	// Offset: 0x5d8cbc8
	// Params: [ Num(2) Size(0xC) ]
	void ReceiveTick(struct AActor* OwnerActor, float DeltaSeconds);

	// Object: Function AIModule.BTService_BlueprintBase.ReceiveSearchStartAI
	// Flags: [Event|Protected|BlueprintEvent]
	// Offset: 0x5d8cbc8
	// Params: [ Num(2) Size(0x10) ]
	void ReceiveSearchStartAI(struct AAIController* OwnerController, struct APawn* ControlledPawn);

	// Object: Function AIModule.BTService_BlueprintBase.ReceiveSearchStart
	// Flags: [Event|Protected|BlueprintEvent]
	// Offset: 0x5d8cbc8
	// Params: [ Num(1) Size(0x8) ]
	void ReceiveSearchStart(struct AActor* OwnerActor);

	// Object: Function AIModule.BTService_BlueprintBase.ReceiveDeactivationAI
	// Flags: [Event|Protected|BlueprintEvent]
	// Offset: 0x5d8cbc8
	// Params: [ Num(2) Size(0x10) ]
	void ReceiveDeactivationAI(struct AAIController* OwnerController, struct APawn* ControlledPawn);

	// Object: Function AIModule.BTService_BlueprintBase.ReceiveDeactivation
	// Flags: [Event|Protected|BlueprintEvent]
	// Offset: 0x5d8cbc8
	// Params: [ Num(1) Size(0x8) ]
	void ReceiveDeactivation(struct AActor* OwnerActor);

	// Object: Function AIModule.BTService_BlueprintBase.ReceiveActivationAI
	// Flags: [Event|Protected|BlueprintEvent]
	// Offset: 0x5d8cbc8
	// Params: [ Num(2) Size(0x10) ]
	void ReceiveActivationAI(struct AAIController* OwnerController, struct APawn* ControlledPawn);

	// Object: Function AIModule.BTService_BlueprintBase.ReceiveActivation
	// Flags: [Event|Protected|BlueprintEvent]
	// Offset: 0x5d8cbc8
	// Params: [ Num(1) Size(0x8) ]
	void ReceiveActivation(struct AActor* OwnerActor);

	// Object: Function AIModule.BTService_BlueprintBase.IsServiceActive
	// Flags: [Final|Native|Protected|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xbf129c4
	// Params: [ Num(1) Size(0x1) ]
	bool IsServiceActive();
};

// Object: Class AIModule.BTService_DefaultFocus
// Size: 0x98 (Inherited: 0x90)
struct UBTService_DefaultFocus : UBTService_BlackboardBase
{
	DEFINE_UE_CLASS_HELPERS(UBTService_DefaultFocus, "BTService_DefaultFocus")

	uint8_t FocusPriority; // 0x90(0x1)
	uint8_t Pad_0x91[0x7]; // 0x91(0x7)
};

// Object: Class AIModule.BTService_RunEQS
// Size: 0xE8 (Inherited: 0x90)
struct UBTService_RunEQS : UBTService_BlackboardBase
{
	DEFINE_UE_CLASS_HELPERS(UBTService_RunEQS, "BTService_RunEQS")

	struct FEQSParametrizedQueryExecutionRequest EQSRequest; // 0x90(0x48)
	uint8_t Pad_0xD8[0x10]; // 0xD8(0x10)
};

// Object: Class AIModule.BTTask_BlueprintBase
// Size: 0xA8 (Inherited: 0x70)
struct UBTTask_BlueprintBase : UBTTaskNode
{
	DEFINE_UE_CLASS_HELPERS(UBTTask_BlueprintBase, "BTTask_BlueprintBase")

	struct AAIController* AIOwner; // 0x70(0x8)
	struct AActor* ActorOwner; // 0x78(0x8)
	struct FIntervalCountdown TickInterval; // 0x80(0x8)
	uint8_t Pad_0x88[0x18]; // 0x88(0x18)
	uint8_t bShowPropertyDetails : 1; // 0xA0(0x1), Mask(0x1)
	uint8_t BitPad_0xA0_1 : 7; // 0xA0(0x1)
	uint8_t Pad_0xA1[0x7]; // 0xA1(0x7)

	// Object: Function AIModule.BTTask_BlueprintBase.SetFinishOnMessageWithId
	// Flags: [Final|Native|Protected|BlueprintCallable]
	// Offset: 0xbf12e4c
	// Params: [ Num(2) Size(0xC) ]
	void SetFinishOnMessageWithId(struct FName MessageName, int32_t RequestID);

	// Object: Function AIModule.BTTask_BlueprintBase.SetFinishOnMessage
	// Flags: [Final|Native|Protected|BlueprintCallable]
	// Offset: 0xbf12f34
	// Params: [ Num(1) Size(0x8) ]
	void SetFinishOnMessage(struct FName MessageName);

	// Object: Function AIModule.BTTask_BlueprintBase.ReceiveTickAI
	// Flags: [Event|Protected|BlueprintEvent]
	// Offset: 0x5d8cbc8
	// Params: [ Num(3) Size(0x14) ]
	void ReceiveTickAI(struct AAIController* OwnerController, struct APawn* ControlledPawn, float DeltaSeconds);

	// Object: Function AIModule.BTTask_BlueprintBase.ReceiveTick
	// Flags: [Event|Protected|BlueprintEvent]
	// Offset: 0x5d8cbc8
	// Params: [ Num(2) Size(0xC) ]
	void ReceiveTick(struct AActor* OwnerActor, float DeltaSeconds);

	// Object: Function AIModule.BTTask_BlueprintBase.ReceiveExecuteAI
	// Flags: [Event|Protected|BlueprintEvent]
	// Offset: 0x5d8cbc8
	// Params: [ Num(2) Size(0x10) ]
	void ReceiveExecuteAI(struct AAIController* OwnerController, struct APawn* ControlledPawn);

	// Object: Function AIModule.BTTask_BlueprintBase.ReceiveExecute
	// Flags: [Event|Protected|BlueprintEvent]
	// Offset: 0x5d8cbc8
	// Params: [ Num(1) Size(0x8) ]
	void ReceiveExecute(struct AActor* OwnerActor);

	// Object: Function AIModule.BTTask_BlueprintBase.ReceiveAbortAI
	// Flags: [Event|Protected|BlueprintEvent]
	// Offset: 0x5d8cbc8
	// Params: [ Num(2) Size(0x10) ]
	void ReceiveAbortAI(struct AAIController* OwnerController, struct APawn* ControlledPawn);

	// Object: Function AIModule.BTTask_BlueprintBase.ReceiveAbort
	// Flags: [Event|Protected|BlueprintEvent]
	// Offset: 0x5d8cbc8
	// Params: [ Num(1) Size(0x8) ]
	void ReceiveAbort(struct AActor* OwnerActor);

	// Object: Function AIModule.BTTask_BlueprintBase.IsTaskExecuting
	// Flags: [Final|Native|Protected|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xbf12e14
	// Params: [ Num(1) Size(0x1) ]
	bool IsTaskExecuting();

	// Object: Function AIModule.BTTask_BlueprintBase.IsTaskAborting
	// Flags: [Final|Native|Protected|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xbf12ddc
	// Params: [ Num(1) Size(0x1) ]
	bool IsTaskAborting();

	// Object: Function AIModule.BTTask_BlueprintBase.FinishExecute
	// Flags: [Final|Native|Protected|BlueprintCallable]
	// Offset: 0xbf12ff0
	// Params: [ Num(1) Size(0x1) ]
	void FinishExecute(bool bSuccess);

	// Object: Function AIModule.BTTask_BlueprintBase.FinishAbort
	// Flags: [Final|Native|Protected|BlueprintCallable]
	// Offset: 0xbf12fdc
	// Params: [ Num(0) Size(0x0) ]
	void FinishAbort();
};

// Object: Class AIModule.BTTask_FinishWithResult
// Size: 0x70 (Inherited: 0x70)
struct UBTTask_FinishWithResult : UBTTaskNode
{
	DEFINE_UE_CLASS_HELPERS(UBTTask_FinishWithResult, "BTTask_FinishWithResult")

	uint8_t Result; // 0x69(0x1)
};

// Object: Class AIModule.BTTask_GameplayTaskBase
// Size: 0x70 (Inherited: 0x70)
struct UBTTask_GameplayTaskBase : UBTTaskNode
{
	DEFINE_UE_CLASS_HELPERS(UBTTask_GameplayTaskBase, "BTTask_GameplayTaskBase")

	uint8_t bWaitForGameplayTask : 1; // 0x69(0x1), Mask(0x1)
};

// Object: Class AIModule.BTTask_MakeNoise
// Size: 0x70 (Inherited: 0x70)
struct UBTTask_MakeNoise : UBTTaskNode
{
	DEFINE_UE_CLASS_HELPERS(UBTTask_MakeNoise, "BTTask_MakeNoise")

	float Loudnes; // 0x6C(0x4)
};

// Object: Class AIModule.BTTask_MoveDirectlyToward
// Size: 0xB0 (Inherited: 0xB0)
struct UBTTask_MoveDirectlyToward : UBTTask_MoveTo
{
	DEFINE_UE_CLASS_HELPERS(UBTTask_MoveDirectlyToward, "BTTask_MoveDirectlyToward")

	uint8_t bDisablePathUpdateOnGoalLocationChange : 1; // 0xAE(0x1), Mask(0x1)
	uint8_t bProjectVectorGoalToNavigation : 1; // 0xAE(0x1), Mask(0x2)
	uint8_t bUpdatedDeprecatedProperties : 1; // 0xAE(0x1), Mask(0x4)
};

// Object: Class AIModule.BTTask_PawnActionBase
// Size: 0x70 (Inherited: 0x70)
struct UBTTask_PawnActionBase : UBTTaskNode
{
	DEFINE_UE_CLASS_HELPERS(UBTTask_PawnActionBase, "BTTask_PawnActionBase")
};

// Object: Class AIModule.BTTask_PlayAnimation
// Size: 0xB0 (Inherited: 0x70)
struct UBTTask_PlayAnimation : UBTTaskNode
{
	DEFINE_UE_CLASS_HELPERS(UBTTask_PlayAnimation, "BTTask_PlayAnimation")

	struct UAnimationAsset* AnimationToPlay; // 0x70(0x8)
	uint8_t bLooping : 1; // 0x78(0x1), Mask(0x1)
	uint8_t bNonBlocking : 1; // 0x78(0x1), Mask(0x2)
	uint8_t BitPad_0x78_2 : 6; // 0x78(0x1)
	uint8_t Pad_0x79[0x7]; // 0x79(0x7)
	struct UBehaviorTreeComponent* MyOwnerComp; // 0x80(0x8)
	struct USkeletalMeshComponent* CachedSkelMesh; // 0x88(0x8)
	uint8_t Pad_0x90[0x20]; // 0x90(0x20)
};

// Object: Class AIModule.BTTask_PlaySound
// Size: 0x78 (Inherited: 0x70)
struct UBTTask_PlaySound : UBTTaskNode
{
	DEFINE_UE_CLASS_HELPERS(UBTTask_PlaySound, "BTTask_PlaySound")

	struct USoundCue* SoundToPlay; // 0x70(0x8)
};

// Object: Class AIModule.BTTask_PushPawnAction
// Size: 0x78 (Inherited: 0x70)
struct UBTTask_PushPawnAction : UBTTask_PawnActionBase
{
	DEFINE_UE_CLASS_HELPERS(UBTTask_PushPawnAction, "BTTask_PushPawnAction")

	struct UPawnAction* Action; // 0x70(0x8)
};

// Object: Class AIModule.BTTask_RotateToFaceBBEntry
// Size: 0xA0 (Inherited: 0x98)
struct UBTTask_RotateToFaceBBEntry : UBTTask_BlackboardBase
{
	DEFINE_UE_CLASS_HELPERS(UBTTask_RotateToFaceBBEntry, "BTTask_RotateToFaceBBEntry")

	float Precision; // 0x98(0x4)
	uint8_t Pad_0x9C[0x4]; // 0x9C(0x4)
};

// Object: Class AIModule.BTTask_RunBehavior
// Size: 0x78 (Inherited: 0x70)
struct UBTTask_RunBehavior : UBTTaskNode
{
	DEFINE_UE_CLASS_HELPERS(UBTTask_RunBehavior, "BTTask_RunBehavior")

	struct UBehaviorTree* BehaviorAsset; // 0x70(0x8)
};

// Object: Class AIModule.BTTask_RunBehaviorDynamic
// Size: 0x88 (Inherited: 0x70)
struct UBTTask_RunBehaviorDynamic : UBTTaskNode
{
	DEFINE_UE_CLASS_HELPERS(UBTTask_RunBehaviorDynamic, "BTTask_RunBehaviorDynamic")

	struct FGameplayTag InjectionTag; // 0x6C(0x8)
	struct UBehaviorTree* DefaultBehaviorAsset; // 0x78(0x8)
	struct UBehaviorTree* BehaviorAsset; // 0x80(0x8)
};

// Object: Class AIModule.BTTask_RunEQSQuery
// Size: 0x150 (Inherited: 0x98)
struct UBTTask_RunEQSQuery : UBTTask_BlackboardBase
{
	DEFINE_UE_CLASS_HELPERS(UBTTask_RunEQSQuery, "BTTask_RunEQSQuery")

	struct UEnvQuery* QueryTemplate; // 0x98(0x8)
	struct TArray<struct FEnvNamedValue> QueryParams; // 0xA0(0x10)
	struct TArray<struct FAIDynamicParam> QueryConfig; // 0xB0(0x10)
	uint8_t RunMode; // 0xC0(0x1)
	uint8_t Pad_0xC1[0x7]; // 0xC1(0x7)
	struct FBlackboardKeySelector EQSQueryBlackboardKey; // 0xC8(0x28)
	bool bUseBBKey; // 0xF0(0x1)
	uint8_t Pad_0xF1[0x7]; // 0xF1(0x7)
	struct FEQSParametrizedQueryExecutionRequest EQSRequest; // 0xF8(0x48)
	uint8_t Pad_0x140[0x10]; // 0x140(0x10)
};

// Object: Class AIModule.BTTask_SetTagCooldown
// Size: 0x80 (Inherited: 0x70)
struct UBTTask_SetTagCooldown : UBTTaskNode
{
	DEFINE_UE_CLASS_HELPERS(UBTTask_SetTagCooldown, "BTTask_SetTagCooldown")

	struct FGameplayTag CooldownTag; // 0x6C(0x8)
	bool bAddToExistingDuration; // 0x74(0x1)
	float CoolDownDuration; // 0x78(0x4)
	uint8_t Pad_0x7D[0x3]; // 0x7D(0x3)
};

// Object: Class AIModule.BTTask_Wait
// Size: 0x78 (Inherited: 0x70)
struct UBTTask_Wait : UBTTaskNode
{
	DEFINE_UE_CLASS_HELPERS(UBTTask_Wait, "BTTask_Wait")

	float WaitTime; // 0x6C(0x4)
	float RandomDeviation; // 0x70(0x4)
};

// Object: Class AIModule.BTTask_WaitBlackboardTime
// Size: 0xA0 (Inherited: 0x78)
struct UBTTask_WaitBlackboardTime : UBTTask_Wait
{
	DEFINE_UE_CLASS_HELPERS(UBTTask_WaitBlackboardTime, "BTTask_WaitBlackboardTime")

	struct FBlackboardKeySelector BlackboardKey; // 0x78(0x28)
};

// Object: Class AIModule.CrowdAgentInterface
// Size: 0x28 (Inherited: 0x28)
struct ICrowdAgentInterface : IInterface
{
	DEFINE_UE_CLASS_HELPERS(ICrowdAgentInterface, "CrowdAgentInterface")
};

// Object: Class AIModule.CrowdFollowingComponent
// Size: 0x2C8 (Inherited: 0x280)
struct UCrowdFollowingComponent : UPathFollowingComponent
{
	DEFINE_UE_CLASS_HELPERS(UCrowdFollowingComponent, "CrowdFollowingComponent")

	uint8_t Pad_0x280[0x18]; // 0x280(0x18)
	struct FVector CrowdAgentMoveDirection; // 0x298(0xC)
	uint8_t Pad_0x2A4[0x24]; // 0x2A4(0x24)

	// Object: Function AIModule.CrowdFollowingComponent.SuspendCrowdSteering
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0xbf16460
	// Params: [ Num(1) Size(0x1) ]
	void SuspendCrowdSteering(bool bSuspend);
};

// Object: Class AIModule.CrowdManager
// Size: 0xF0 (Inherited: 0x28)
struct UCrowdManager : UCrowdManagerBase
{
	DEFINE_UE_CLASS_HELPERS(UCrowdManager, "CrowdManager")

	struct ANavigationData* MyNavData; // 0x28(0x8)
	struct TArray<struct FCrowdAvoidanceConfig> AvoidanceConfig; // 0x30(0x10)
	struct TArray<struct FCrowdAvoidanceSamplingPattern> SamplingPatterns; // 0x40(0x10)
	int32_t MaxAgents; // 0x50(0x4)
	float MaxAgentRadius; // 0x54(0x4)
	int32_t MaxAvoidedAgents; // 0x58(0x4)
	int32_t MaxAvoidedWalls; // 0x5C(0x4)
	float NavmeshCheckInterval; // 0x60(0x4)
	float PathOptimizationInterval; // 0x64(0x4)
	float SeparationDirClamp; // 0x68(0x4)
	float PathOffsetRadiusMultiplier; // 0x6C(0x4)
	uint8_t BitPad_0x70_0 : 4; // 0x70(0x1)
	uint8_t bResolveCollisions : 1; // 0x70(0x1), Mask(0x10)
	uint8_t BitPad_0x70_5 : 3; // 0x70(0x1)
	uint8_t Pad_0x71[0x7F]; // 0x71(0x7F)
};

// Object: Class AIModule.DetourCrowdAIController
// Size: 0x408 (Inherited: 0x408)
struct ADetourCrowdAIController : AAIController
{
	DEFINE_UE_CLASS_HELPERS(ADetourCrowdAIController, "DetourCrowdAIController")
};

// Object: Class AIModule.EnvQuery
// Size: 0x48 (Inherited: 0x30)
struct UEnvQuery : UDataAsset
{
	DEFINE_UE_CLASS_HELPERS(UEnvQuery, "EnvQuery")

	struct FName QueryName; // 0x30(0x8)
	struct TArray<struct UEnvQueryOption*> Options; // 0x38(0x10)
};

// Object: Class AIModule.EnvQueryContext
// Size: 0x28 (Inherited: 0x28)
struct UEnvQueryContext : UObject
{
	DEFINE_UE_CLASS_HELPERS(UEnvQueryContext, "EnvQueryContext")
};

// Object: Class AIModule.EnvQueryContext_BlueprintBase
// Size: 0x30 (Inherited: 0x28)
struct UEnvQueryContext_BlueprintBase : UEnvQueryContext
{
	DEFINE_UE_CLASS_HELPERS(UEnvQueryContext_BlueprintBase, "EnvQueryContext_BlueprintBase")

	uint8_t Pad_0x28[0x8]; // 0x28(0x8)

	// Object: Function AIModule.EnvQueryContext_BlueprintBase.ProvideSingleLocation
	// Flags: [Event|Public|HasOutParms|HasDefaults|BlueprintEvent|Const]
	// Offset: 0x5d8cbc8
	// Params: [ Num(3) Size(0x1C) ]
	void ProvideSingleLocation(struct UObject* QuerierObject, struct AActor* QuerierActor, struct FVector& ResultingLocation);

	// Object: Function AIModule.EnvQueryContext_BlueprintBase.ProvideSingleActor
	// Flags: [Event|Public|HasOutParms|BlueprintEvent|Const]
	// Offset: 0x5d8cbc8
	// Params: [ Num(3) Size(0x18) ]
	void ProvideSingleActor(struct UObject* QuerierObject, struct AActor* QuerierActor, struct AActor*& ResultingActor);

	// Object: Function AIModule.EnvQueryContext_BlueprintBase.ProvideLocationsSet
	// Flags: [Event|Public|HasOutParms|BlueprintEvent|Const]
	// Offset: 0x5d8cbc8
	// Params: [ Num(3) Size(0x20) ]
	void ProvideLocationsSet(struct UObject* QuerierObject, struct AActor* QuerierActor, struct TArray<struct FVector>& ResultingLocationSet);

	// Object: Function AIModule.EnvQueryContext_BlueprintBase.ProvideActorsSet
	// Flags: [Event|Public|HasOutParms|BlueprintEvent|Const]
	// Offset: 0x5d8cbc8
	// Params: [ Num(3) Size(0x20) ]
	void ProvideActorsSet(struct UObject* QuerierObject, struct AActor* QuerierActor, struct TArray<struct AActor*>& ResultingActorsSet);
};

// Object: Class AIModule.EnvQueryContext_Item
// Size: 0x28 (Inherited: 0x28)
struct UEnvQueryContext_Item : UEnvQueryContext
{
	DEFINE_UE_CLASS_HELPERS(UEnvQueryContext_Item, "EnvQueryContext_Item")
};

// Object: Class AIModule.EnvQueryContext_Querier
// Size: 0x28 (Inherited: 0x28)
struct UEnvQueryContext_Querier : UEnvQueryContext
{
	DEFINE_UE_CLASS_HELPERS(UEnvQueryContext_Querier, "EnvQueryContext_Querier")
};

// Object: Class AIModule.EnvQueryDebugHelpers
// Size: 0x28 (Inherited: 0x28)
struct UEnvQueryDebugHelpers : UObject
{
	DEFINE_UE_CLASS_HELPERS(UEnvQueryDebugHelpers, "EnvQueryDebugHelpers")
};

// Object: Class AIModule.EnvQueryGenerator_ActorsOfClass
// Size: 0xD0 (Inherited: 0x50)
struct UEnvQueryGenerator_ActorsOfClass : UEnvQueryGenerator
{
	DEFINE_UE_CLASS_HELPERS(UEnvQueryGenerator_ActorsOfClass, "EnvQueryGenerator_ActorsOfClass")

	struct AActor* SearchedActorClass; // 0x50(0x8)
	struct FAIDataProviderBoolValue GenerateOnlyActorsInRadius; // 0x58(0x38)
	struct FAIDataProviderFloatValue SearchRadius; // 0x90(0x38)
	struct UEnvQueryContext* SearchCenter; // 0xC8(0x8)
};

// Object: Class AIModule.EnvQueryGenerator_Composite
// Size: 0x70 (Inherited: 0x50)
struct UEnvQueryGenerator_Composite : UEnvQueryGenerator
{
	DEFINE_UE_CLASS_HELPERS(UEnvQueryGenerator_Composite, "EnvQueryGenerator_Composite")

	struct TArray<struct UEnvQueryGenerator*> Generators; // 0x50(0x10)
	uint8_t bAllowDifferentItemTypes : 1; // 0x60(0x1), Mask(0x1)
	uint8_t bHasMatchingItemType : 1; // 0x60(0x1), Mask(0x2)
	uint8_t BitPad_0x60_2 : 6; // 0x60(0x1)
	uint8_t Pad_0x61[0x7]; // 0x61(0x7)
	struct UEnvQueryItemType* ForcedItemType; // 0x68(0x8)
};

// Object: Class AIModule.EnvQueryGenerator_Cone
// Size: 0x170 (Inherited: 0x80)
struct UEnvQueryGenerator_Cone : UEnvQueryGenerator_ProjectedPoints
{
	DEFINE_UE_CLASS_HELPERS(UEnvQueryGenerator_Cone, "EnvQueryGenerator_Cone")

	struct FAIDataProviderFloatValue AlignedPointsDistance; // 0x80(0x38)
	struct FAIDataProviderFloatValue ConeDegrees; // 0xB8(0x38)
	struct FAIDataProviderFloatValue AngleStep; // 0xF0(0x38)
	struct FAIDataProviderFloatValue Range; // 0x128(0x38)
	struct UEnvQueryContext* CenterActor; // 0x160(0x8)
	uint8_t bIncludeContextLocation : 1; // 0x168(0x1), Mask(0x1)
	uint8_t BitPad_0x168_1 : 7; // 0x168(0x1)
	uint8_t Pad_0x169[0x7]; // 0x169(0x7)
};

// Object: Class AIModule.EnvQueryGenerator_CurrentLocation
// Size: 0x58 (Inherited: 0x50)
struct UEnvQueryGenerator_CurrentLocation : UEnvQueryGenerator
{
	DEFINE_UE_CLASS_HELPERS(UEnvQueryGenerator_CurrentLocation, "EnvQueryGenerator_CurrentLocation")

	struct UEnvQueryContext* QueryContext; // 0x50(0x8)
};

// Object: Class AIModule.EnvQueryGenerator_Donut
// Size: 0x1D0 (Inherited: 0x80)
struct UEnvQueryGenerator_Donut : UEnvQueryGenerator_ProjectedPoints
{
	DEFINE_UE_CLASS_HELPERS(UEnvQueryGenerator_Donut, "EnvQueryGenerator_Donut")

	struct FAIDataProviderFloatValue InnerRadius; // 0x80(0x38)
	struct FAIDataProviderFloatValue OuterRadius; // 0xB8(0x38)
	struct FAIDataProviderIntValue NumberOfRings; // 0xF0(0x38)
	struct FAIDataProviderIntValue PointsPerRing; // 0x128(0x38)
	struct FEnvDirection ArcDirection; // 0x160(0x20)
	struct FAIDataProviderFloatValue ArcAngle; // 0x180(0x38)
	bool bUseSpiralPattern; // 0x1B8(0x1)
	uint8_t Pad_0x1B9[0x7]; // 0x1B9(0x7)
	struct UEnvQueryContext* Center; // 0x1C0(0x8)
	uint8_t bDefineArc : 1; // 0x1C8(0x1), Mask(0x1)
	uint8_t BitPad_0x1C8_1 : 7; // 0x1C8(0x1)
	uint8_t Pad_0x1C9[0x7]; // 0x1C9(0x7)
};

// Object: Class AIModule.EnvQueryGenerator_SimpleGrid
// Size: 0xF8 (Inherited: 0x80)
struct UEnvQueryGenerator_SimpleGrid : UEnvQueryGenerator_ProjectedPoints
{
	DEFINE_UE_CLASS_HELPERS(UEnvQueryGenerator_SimpleGrid, "EnvQueryGenerator_SimpleGrid")

	struct FAIDataProviderFloatValue GridSize; // 0x80(0x38)
	struct FAIDataProviderFloatValue SpaceBetween; // 0xB8(0x38)
	struct UEnvQueryContext* GenerateAround; // 0xF0(0x8)
};

// Object: Class AIModule.EnvQueryGenerator_PathingGrid
// Size: 0x170 (Inherited: 0xF8)
struct UEnvQueryGenerator_PathingGrid : UEnvQueryGenerator_SimpleGrid
{
	DEFINE_UE_CLASS_HELPERS(UEnvQueryGenerator_PathingGrid, "EnvQueryGenerator_PathingGrid")

	struct FAIDataProviderBoolValue PathToItem; // 0xF8(0x38)
	struct UNavigationQueryFilter* NavigationFilter; // 0x130(0x8)
	struct FAIDataProviderFloatValue ScanRangeMultiplier; // 0x138(0x38)
};

// Object: Class AIModule.EnvQueryItemType_ActorBase
// Size: 0x30 (Inherited: 0x30)
struct UEnvQueryItemType_ActorBase : UEnvQueryItemType_VectorBase
{
	DEFINE_UE_CLASS_HELPERS(UEnvQueryItemType_ActorBase, "EnvQueryItemType_ActorBase")
};

// Object: Class AIModule.EnvQueryItemType_Actor
// Size: 0x30 (Inherited: 0x30)
struct UEnvQueryItemType_Actor : UEnvQueryItemType_ActorBase
{
	DEFINE_UE_CLASS_HELPERS(UEnvQueryItemType_Actor, "EnvQueryItemType_Actor")
};

// Object: Class AIModule.EnvQueryItemType_Direction
// Size: 0x30 (Inherited: 0x30)
struct UEnvQueryItemType_Direction : UEnvQueryItemType_VectorBase
{
	DEFINE_UE_CLASS_HELPERS(UEnvQueryItemType_Direction, "EnvQueryItemType_Direction")
};

// Object: Class AIModule.EnvQueryItemType_Point
// Size: 0x30 (Inherited: 0x30)
struct UEnvQueryItemType_Point : UEnvQueryItemType_VectorBase
{
	DEFINE_UE_CLASS_HELPERS(UEnvQueryItemType_Point, "EnvQueryItemType_Point")
};

// Object: Class AIModule.EnvQueryOption
// Size: 0x40 (Inherited: 0x28)
struct UEnvQueryOption : UObject
{
	DEFINE_UE_CLASS_HELPERS(UEnvQueryOption, "EnvQueryOption")

	struct UEnvQueryGenerator* Generator; // 0x28(0x8)
	struct TArray<struct UEnvQueryTest*> Tests; // 0x30(0x10)
};

// Object: Class AIModule.EnvQueryTest_Distance
// Size: 0x200 (Inherited: 0x1F8)
struct UEnvQueryTest_Distance : UEnvQueryTest
{
	DEFINE_UE_CLASS_HELPERS(UEnvQueryTest_Distance, "EnvQueryTest_Distance")

	uint8_t TestMode; // 0x1F1(0x1)
	struct UEnvQueryContext* DistanceTo; // 0x1F8(0x8)
};

// Object: Class AIModule.EnvQueryTest_Dot
// Size: 0x240 (Inherited: 0x1F8)
struct UEnvQueryTest_Dot : UEnvQueryTest
{
	DEFINE_UE_CLASS_HELPERS(UEnvQueryTest_Dot, "EnvQueryTest_Dot")

	struct FEnvDirection LineA; // 0x1F8(0x20)
	struct FEnvDirection LineB; // 0x218(0x20)
	EEnvTestDot TestMode; // 0x238(0x1)
	bool bAbsoluteValue; // 0x239(0x1)
	uint8_t Pad_0x23A[0x6]; // 0x23A(0x6)
};

// Object: Class AIModule.EnvQueryTest_GameplayTags
// Size: 0x268 (Inherited: 0x1F8)
struct UEnvQueryTest_GameplayTags : UEnvQueryTest
{
	DEFINE_UE_CLASS_HELPERS(UEnvQueryTest_GameplayTags, "EnvQueryTest_GameplayTags")

	struct FGameplayTagQuery TagQueryToMatch; // 0x1F8(0x48)
	bool bUpdatedToUseQuery; // 0x240(0x1)
	EGameplayContainerMatchType TagsToMatch; // 0x241(0x1)
	uint8_t Pad_0x242[0x6]; // 0x242(0x6)
	struct FGameplayTagContainer GameplayTags; // 0x248(0x20)
};

// Object: Class AIModule.EnvQueryTest_Overlap
// Size: 0x210 (Inherited: 0x1F8)
struct UEnvQueryTest_Overlap : UEnvQueryTest
{
	DEFINE_UE_CLASS_HELPERS(UEnvQueryTest_Overlap, "EnvQueryTest_Overlap")

	struct FEnvOverlapData OverlapData; // 0x1F4(0x1C)
};

// Object: Class AIModule.EnvQueryTest_Pathfinding
// Size: 0x278 (Inherited: 0x1F8)
struct UEnvQueryTest_Pathfinding : UEnvQueryTest
{
	DEFINE_UE_CLASS_HELPERS(UEnvQueryTest_Pathfinding, "EnvQueryTest_Pathfinding")

	uint8_t TestMode; // 0x1F1(0x1)
	struct UEnvQueryContext* Context; // 0x1F8(0x8)
	struct FAIDataProviderBoolValue PathFromContext; // 0x200(0x38)
	struct FAIDataProviderBoolValue SkipUnreachable; // 0x238(0x38)
	struct UNavigationQueryFilter* FilterClass; // 0x270(0x8)
};

// Object: Class AIModule.EnvQueryTest_PathfindingBatch
// Size: 0x2B0 (Inherited: 0x278)
struct UEnvQueryTest_PathfindingBatch : UEnvQueryTest_Pathfinding
{
	DEFINE_UE_CLASS_HELPERS(UEnvQueryTest_PathfindingBatch, "EnvQueryTest_PathfindingBatch")

	struct FAIDataProviderFloatValue ScanRangeMultiplier; // 0x278(0x38)
};

// Object: Class AIModule.EnvQueryTest_Project
// Size: 0x228 (Inherited: 0x1F8)
struct UEnvQueryTest_Project : UEnvQueryTest
{
	DEFINE_UE_CLASS_HELPERS(UEnvQueryTest_Project, "EnvQueryTest_Project")

	struct FEnvTraceData ProjectionData; // 0x1F8(0x30)
};

// Object: Class AIModule.EnvQueryTest_Random
// Size: 0x1F8 (Inherited: 0x1F8)
struct UEnvQueryTest_Random : UEnvQueryTest
{
	DEFINE_UE_CLASS_HELPERS(UEnvQueryTest_Random, "EnvQueryTest_Random")
};

// Object: Class AIModule.EnvQueryTest_Trace
// Size: 0x2D8 (Inherited: 0x1F8)
struct UEnvQueryTest_Trace : UEnvQueryTest
{
	DEFINE_UE_CLASS_HELPERS(UEnvQueryTest_Trace, "EnvQueryTest_Trace")

	struct FEnvTraceData TraceData; // 0x1F8(0x30)
	struct FAIDataProviderBoolValue TraceFromContext; // 0x228(0x38)
	struct FAIDataProviderFloatValue ItemHeightOffset; // 0x260(0x38)
	struct FAIDataProviderFloatValue ContextHeightOffset; // 0x298(0x38)
	struct UEnvQueryContext* Context; // 0x2D0(0x8)
};

// Object: Class AIModule.EnvQueryTest_Volume
// Size: 0x210 (Inherited: 0x1F8)
struct UEnvQueryTest_Volume : UEnvQueryTest
{
	DEFINE_UE_CLASS_HELPERS(UEnvQueryTest_Volume, "EnvQueryTest_Volume")

	struct UEnvQueryContext* VolumeContext; // 0x1F8(0x8)
	struct AVolume* VolumeClass; // 0x200(0x8)
	uint8_t bDoComplexVolumeTest : 1; // 0x208(0x1), Mask(0x1)
	uint8_t BitPad_0x208_1 : 7; // 0x208(0x1)
	uint8_t Pad_0x209[0x7]; // 0x209(0x7)
};

// Object: Class AIModule.EnvQueryTypes
// Size: 0x28 (Inherited: 0x28)
struct UEnvQueryTypes : UObject
{
	DEFINE_UE_CLASS_HELPERS(UEnvQueryTypes, "EnvQueryTypes")
};

// Object: Class AIModule.EQSQueryResultSourceInterface
// Size: 0x28 (Inherited: 0x28)
struct IEQSQueryResultSourceInterface : IInterface
{
	DEFINE_UE_CLASS_HELPERS(IEQSQueryResultSourceInterface, "EQSQueryResultSourceInterface")
};

// Object: Class AIModule.EQSRenderingComponent
// Size: 0x6B0 (Inherited: 0x680)
struct UEQSRenderingComponent : UPrimitiveComponent
{
	DEFINE_UE_CLASS_HELPERS(UEQSRenderingComponent, "EQSRenderingComponent")

	uint8_t Pad_0x680[0x30]; // 0x680(0x30)
};

// Object: Class AIModule.EQSTestingPawn
// Size: 0x650 (Inherited: 0x5C0)
struct AEQSTestingPawn : ACharacter
{
	DEFINE_UE_CLASS_HELPERS(AEQSTestingPawn, "EQSTestingPawn")

	struct UEnvQuery* QueryTemplate; // 0x5C0(0x8)
	struct TArray<struct FEnvNamedValue> QueryParams; // 0x5C8(0x10)
	struct TArray<struct FAIDynamicParam> QueryConfig; // 0x5D8(0x10)
	float TimeLimitPerStep; // 0x5E8(0x4)
	int32_t StepToDebugDraw; // 0x5EC(0x4)
	EEnvQueryHightlightMode HighlightMode; // 0x5F0(0x1)
	uint8_t bDrawLabels : 1; // 0x5F1(0x1), Mask(0x1)
	uint8_t bDrawFailedItems : 1; // 0x5F1(0x1), Mask(0x2)
	uint8_t bReRunQueryOnlyOnFinishedMove : 1; // 0x5F1(0x1), Mask(0x4)
	uint8_t bShouldBeVisibleInGame : 1; // 0x5F1(0x1), Mask(0x8)
	uint8_t bTickDuringGame : 1; // 0x5F1(0x1), Mask(0x10)
	uint8_t BitPad_0x5F1_5 : 3; // 0x5F1(0x1)
	uint8_t QueryingMode; // 0x5F2(0x1)
	uint8_t Pad_0x5F3[0x5]; // 0x5F3(0x5)
	struct FNavAgentProperties NavAgentProperties; // 0x5F8(0x30)
	uint8_t Pad_0x628[0x28]; // 0x628(0x28)
};

// Object: Class AIModule.GenericTeamAgentInterface
// Size: 0x28 (Inherited: 0x28)
struct IGenericTeamAgentInterface : IInterface
{
	DEFINE_UE_CLASS_HELPERS(IGenericTeamAgentInterface, "GenericTeamAgentInterface")
};

// Object: Class AIModule.GridPathAIController
// Size: 0x408 (Inherited: 0x408)
struct AGridPathAIController : AAIController
{
	DEFINE_UE_CLASS_HELPERS(AGridPathAIController, "GridPathAIController")
};

// Object: Class AIModule.GridPathFollowingComponent
// Size: 0x2B0 (Inherited: 0x280)
struct UGridPathFollowingComponent : UPathFollowingComponent
{
	DEFINE_UE_CLASS_HELPERS(UGridPathFollowingComponent, "GridPathFollowingComponent")

	struct UNavLocalGridManager* GridManager; // 0x280(0x8)
	uint8_t Pad_0x288[0x28]; // 0x288(0x28)
};

// Object: Class AIModule.NavFilter_AIControllerDefault
// Size: 0x48 (Inherited: 0x48)
struct UNavFilter_AIControllerDefault : UNavigationQueryFilter
{
	DEFINE_UE_CLASS_HELPERS(UNavFilter_AIControllerDefault, "NavFilter_AIControllerDefault")
};

// Object: Class AIModule.NavLocalGridManager
// Size: 0x58 (Inherited: 0x28)
struct UNavLocalGridManager : UObject
{
	DEFINE_UE_CLASS_HELPERS(UNavLocalGridManager, "NavLocalGridManager")

	uint8_t Pad_0x28[0x30]; // 0x28(0x30)

	// Object: Function AIModule.NavLocalGridManager.SetLocalNavigationGridDensity
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0xbf1f268
	// Params: [ Num(3) Size(0xD) ]
	static bool SetLocalNavigationGridDensity(struct UObject* WorldContextObject, float CellSize);

	// Object: Function AIModule.NavLocalGridManager.RemoveLocalNavigationGrid
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0xbf1e958
	// Params: [ Num(3) Size(0xD) ]
	static void RemoveLocalNavigationGrid(struct UObject* WorldContextObject, int32_t GridId, bool bRebuildGrids);

	// Object: Function AIModule.NavLocalGridManager.FindLocalNavigationGridPath
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable]
	// Offset: 0xbf1e7b0
	// Params: [ Num(5) Size(0x31) ]
	static bool FindLocalNavigationGridPath(struct UObject* WorldContextObject, const struct FVector& Start, const struct FVector& End, struct TArray<struct FVector>& PathPoints);

	// Object: Function AIModule.NavLocalGridManager.AddLocalNavigationGridForPoints
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0xbf1eee0
	// Params: [ Num(6) Size(0x28) ]
	static int32_t AddLocalNavigationGridForPoints(struct UObject* WorldContextObject, const struct TArray<struct FVector>& Locations, int32_t Radius2D, float Height, bool bRebuildGrids);

	// Object: Function AIModule.NavLocalGridManager.AddLocalNavigationGridForPoint
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable]
	// Offset: 0xbf1f0b0
	// Params: [ Num(6) Size(0x24) ]
	static int32_t AddLocalNavigationGridForPoint(struct UObject* WorldContextObject, const struct FVector& Location, int32_t Radius2D, float Height, bool bRebuildGrids);

	// Object: Function AIModule.NavLocalGridManager.AddLocalNavigationGridForCapsule
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable]
	// Offset: 0xbf1ea74
	// Params: [ Num(8) Size(0x2C) ]
	static int32_t AddLocalNavigationGridForCapsule(struct UObject* WorldContextObject, const struct FVector& Location, float CapsuleRadius, float CapsuleHalfHeight, int32_t Radius2D, float Height, bool bRebuildGrids);

	// Object: Function AIModule.NavLocalGridManager.AddLocalNavigationGridForBox
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable]
	// Offset: 0xbf1eca8
	// Params: [ Num(8) Size(0x3C) ]
	static int32_t AddLocalNavigationGridForBox(struct UObject* WorldContextObject, const struct FVector& Location, struct FVector Extent, struct FRotator Rotation, int32_t Radius2D, float Height, bool bRebuildGrids);
};

// Object: Class AIModule.PathFollowingManager
// Size: 0x28 (Inherited: 0x28)
struct UPathFollowingManager : UObject
{
	DEFINE_UE_CLASS_HELPERS(UPathFollowingManager, "PathFollowingManager")
};

// Object: Class AIModule.PawnAction
// Size: 0x98 (Inherited: 0x28)
struct UPawnAction : UObject
{
	DEFINE_UE_CLASS_HELPERS(UPawnAction, "PawnAction")

	struct UPawnAction* ChildAction; // 0x28(0x8)
	struct UPawnAction* ParentAction; // 0x30(0x8)
	struct UPawnActionsComponent* OwnerComponent; // 0x38(0x8)
	struct UObject* Instigator; // 0x40(0x8)
	struct UBrainComponent* BrainComp; // 0x48(0x8)
	uint8_t Pad_0x50[0x30]; // 0x50(0x30)
	uint8_t bAllowNewSameClassInstance : 1; // 0x80(0x1), Mask(0x1)
	uint8_t bReplaceActiveSameClassInstance : 1; // 0x80(0x1), Mask(0x2)
	uint8_t bShouldPauseMovement : 1; // 0x80(0x1), Mask(0x4)
	uint8_t bAlwaysNotifyOnFinished : 1; // 0x80(0x1), Mask(0x8)
	uint8_t BitPad_0x80_4 : 4; // 0x80(0x1)
	uint8_t Pad_0x81[0x17]; // 0x81(0x17)

	// Object: Function AIModule.PawnAction.GetActionPriority
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0xbf1fa1c
	// Params: [ Num(1) Size(0x1) ]
	uint8_t GetActionPriority();

	// Object: Function AIModule.PawnAction.Finish
	// Flags: [Native|Protected|BlueprintCallable]
	// Offset: 0xbf1f888
	// Params: [ Num(1) Size(0x1) ]
	void Finish(uint8_t WithResult);

	// Object: Function AIModule.PawnAction.CreateActionInstance
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0xbf1f938
	// Params: [ Num(3) Size(0x18) ]
	static struct UPawnAction* CreateActionInstance(struct UObject* WorldContextObject, struct UPawnAction* ActionClass);
};

// Object: Class AIModule.PawnAction_BlueprintBase
// Size: 0x98 (Inherited: 0x98)
struct UPawnAction_BlueprintBase : UPawnAction
{
	DEFINE_UE_CLASS_HELPERS(UPawnAction_BlueprintBase, "PawnAction_BlueprintBase")

	// Object: Function AIModule.PawnAction_BlueprintBase.ActionTick
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x5d8cbc8
	// Params: [ Num(2) Size(0xC) ]
	void ActionTick(struct APawn* ControlledPawn, float DeltaSeconds);

	// Object: Function AIModule.PawnAction_BlueprintBase.ActionStart
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x5d8cbc8
	// Params: [ Num(1) Size(0x8) ]
	void ActionStart(struct APawn* ControlledPawn);

	// Object: Function AIModule.PawnAction_BlueprintBase.ActionResume
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x5d8cbc8
	// Params: [ Num(1) Size(0x8) ]
	void ActionResume(struct APawn* ControlledPawn);

	// Object: Function AIModule.PawnAction_BlueprintBase.ActionPause
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x5d8cbc8
	// Params: [ Num(1) Size(0x8) ]
	void ActionPause(struct APawn* ControlledPawn);

	// Object: Function AIModule.PawnAction_BlueprintBase.ActionFinished
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x5d8cbc8
	// Params: [ Num(2) Size(0x9) ]
	void ActionFinished(struct APawn* ControlledPawn, uint8_t WithResult);
};

// Object: Class AIModule.PawnAction_Move
// Size: 0xE8 (Inherited: 0x98)
struct UPawnAction_Move : UPawnAction
{
	DEFINE_UE_CLASS_HELPERS(UPawnAction_Move, "PawnAction_Move")

	struct AActor* GoalActor; // 0x98(0x8)
	struct FVector GoalLocation; // 0xA0(0xC)
	float AcceptableRadius; // 0xAC(0x4)
	struct UNavigationQueryFilter* FilterClass; // 0xB0(0x8)
	uint8_t bAllowStrafe : 1; // 0xB8(0x1), Mask(0x1)
	uint8_t bFinishOnOverlap : 1; // 0xB8(0x1), Mask(0x2)
	uint8_t bUsePathfinding : 1; // 0xB8(0x1), Mask(0x4)
	uint8_t bAllowPartialPath : 1; // 0xB8(0x1), Mask(0x8)
	uint8_t bProjectGoalToNavigation : 1; // 0xB8(0x1), Mask(0x10)
	uint8_t bUpdatePathToGoal : 1; // 0xB8(0x1), Mask(0x20)
	uint8_t bAbortChildActionOnPathChange : 1; // 0xB8(0x1), Mask(0x40)
	uint8_t BitPad_0xB8_7 : 1; // 0xB8(0x1)
	uint8_t Pad_0xB9[0x2F]; // 0xB9(0x2F)
};

// Object: Class AIModule.PawnAction_Repeat
// Size: 0xB8 (Inherited: 0x98)
struct UPawnAction_Repeat : UPawnAction
{
	DEFINE_UE_CLASS_HELPERS(UPawnAction_Repeat, "PawnAction_Repeat")

	struct UPawnAction* ActionToRepeat; // 0x98(0x8)
	struct UPawnAction* RecentActionCopy; // 0xA0(0x8)
	uint8_t ChildFailureHandlingMode; // 0xA8(0x1)
	uint8_t Pad_0xA9[0xF]; // 0xA9(0xF)
};

// Object: Class AIModule.PawnAction_Sequence
// Size: 0xC0 (Inherited: 0x98)
struct UPawnAction_Sequence : UPawnAction
{
	DEFINE_UE_CLASS_HELPERS(UPawnAction_Sequence, "PawnAction_Sequence")

	struct TArray<struct UPawnAction*> ActionSequence; // 0x98(0x10)
	uint8_t ChildFailureHandlingMode; // 0xA8(0x1)
	uint8_t Pad_0xA9[0x7]; // 0xA9(0x7)
	struct UPawnAction* RecentActionCopy; // 0xB0(0x8)
	uint8_t Pad_0xB8[0x8]; // 0xB8(0x8)
};

// Object: Class AIModule.PawnAction_Wait
// Size: 0xA8 (Inherited: 0x98)
struct UPawnAction_Wait : UPawnAction
{
	DEFINE_UE_CLASS_HELPERS(UPawnAction_Wait, "PawnAction_Wait")

	float TimeToWait; // 0x94(0x4)
	uint8_t Pad_0x9C[0xC]; // 0x9C(0xC)
};

// Object: Class AIModule.PawnActionsComponent
// Size: 0x118 (Inherited: 0xE0)
struct UPawnActionsComponent : UActorComponent
{
	DEFINE_UE_CLASS_HELPERS(UPawnActionsComponent, "PawnActionsComponent")

	struct APawn* ControlledPawn; // 0xE0(0x8)
	struct TArray<struct FPawnActionStack> ActionStacks; // 0xE8(0x10)
	struct TArray<struct FPawnActionEvent> ActionEvents; // 0xF8(0x10)
	struct UPawnAction* CurrentAction; // 0x108(0x8)
	uint8_t Pad_0x110[0x8]; // 0x110(0x8)

	// Object: Function AIModule.PawnActionsComponent.K2_PushAction
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xbf1ff08
	// Params: [ Num(4) Size(0x19) ]
	bool K2_PushAction(struct UPawnAction* NewAction, uint8_t Priority, struct UObject* Instigator);

	// Object: Function AIModule.PawnActionsComponent.K2_PerformAction
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0xbf2003c
	// Params: [ Num(4) Size(0x12) ]
	static bool K2_PerformAction(struct APawn* Pawn, struct UPawnAction* Action, uint8_t Priority);

	// Object: Function AIModule.PawnActionsComponent.K2_ForceAbortAction
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xbf1fda8
	// Params: [ Num(2) Size(0x9) ]
	uint8_t K2_ForceAbortAction(struct UPawnAction* ActionToAbort);

	// Object: Function AIModule.PawnActionsComponent.K2_AbortAction
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xbf1fe58
	// Params: [ Num(2) Size(0x9) ]
	uint8_t K2_AbortAction(struct UPawnAction* ActionToAbort);
};

// Object: Class AIModule.PawnSensingComponent
// Size: 0x128 (Inherited: 0xE0)
struct UPawnSensingComponent : UActorComponent
{
	DEFINE_UE_CLASS_HELPERS(UPawnSensingComponent, "PawnSensingComponent")

	float HearingThreshold; // 0xE0(0x4)
	float LOSHearingThreshold; // 0xE4(0x4)
	float SightRadius; // 0xE8(0x4)
	float SensingInterval; // 0xEC(0x4)
	float HearingMaxSoundAge; // 0xF0(0x4)
	uint8_t bEnableSensingUpdates : 1; // 0xF4(0x1), Mask(0x1)
	uint8_t bOnlySensePlayers : 1; // 0xF4(0x1), Mask(0x2)
	uint8_t bSeePawns : 1; // 0xF4(0x1), Mask(0x4)
	uint8_t bHearNoises : 1; // 0xF4(0x1), Mask(0x8)
	uint8_t BitPad_0xF4_4 : 4; // 0xF4(0x1)
	uint8_t Pad_0xF5[0xB]; // 0xF5(0xB)
	struct FMulticastInlineDelegate OnSeePawn; // 0x100(0x10)
	struct FMulticastInlineDelegate OnHearNoise; // 0x110(0x10)
	float PeripheralVisionAngle; // 0x120(0x4)
	float PeripheralVisionCosine; // 0x124(0x4)

	// Object: Function AIModule.PawnSensingComponent.SetSensingUpdatesEnabled
	// Flags: [BlueprintAuthorityOnly|Native|Public|BlueprintCallable]
	// Offset: 0xbf2026c
	// Params: [ Num(1) Size(0x1) ]
	void SetSensingUpdatesEnabled(bool bEnabled);

	// Object: Function AIModule.PawnSensingComponent.SetSensingInterval
	// Flags: [BlueprintAuthorityOnly|Native|Public|BlueprintCallable]
	// Offset: 0xbf20324
	// Params: [ Num(1) Size(0x4) ]
	void SetSensingInterval(float NewSensingInterval);

	// Object: Function AIModule.PawnSensingComponent.SetPeripheralVisionAngle
	// Flags: [BlueprintAuthorityOnly|Native|Public|BlueprintCallable]
	// Offset: 0xbf201bc
	// Params: [ Num(1) Size(0x4) ]
	void SetPeripheralVisionAngle(float NewPeripheralVisionAngle);

	// Object: DelegateFunction AIModule.PawnSensingComponent.SeePawnDelegate__DelegateSignature
	// Flags: [MulticastDelegate|Public|Delegate]
	// Offset: 0x5d8cbc8
	// Params: [ Num(1) Size(0x8) ]
	void SeePawnDelegate__DelegateSignature(struct APawn* Pawn);

	// Object: DelegateFunction AIModule.PawnSensingComponent.HearNoiseDelegate__DelegateSignature
	// Flags: [MulticastDelegate|Public|Delegate|HasOutParms|HasDefaults]
	// Offset: 0x5d8cbc8
	// Params: [ Num(3) Size(0x18) ]
	void HearNoiseDelegate__DelegateSignature(struct APawn* Instigator, const struct FVector& Location, float Volume);

	// Object: Function AIModule.PawnSensingComponent.GetPeripheralVisionCosine
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xbf20184
	// Params: [ Num(1) Size(0x4) ]
	float GetPeripheralVisionCosine();

	// Object: Function AIModule.PawnSensingComponent.GetPeripheralVisionAngle
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xbf201a0
	// Params: [ Num(1) Size(0x4) ]
	float GetPeripheralVisionAngle();
};

// Object: Class AIModule.VisualLoggerExtension
// Size: 0x28 (Inherited: 0x28)
struct UVisualLoggerExtension : UObject
{
	DEFINE_UE_CLASS_HELPERS(UVisualLoggerExtension, "VisualLoggerExtension")
};

} // namespace SDK
