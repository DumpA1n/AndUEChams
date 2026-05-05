#pragma once

#include "../CoreUObject_classes.hpp"
#include "AIModule.hpp"
#include "Engine.hpp"
#include "GameplayTags.hpp"

namespace SDK
{

// Package: HTN
// Enums: 5
// Structs: 2
// Classes: 41

struct AAIController;
struct AActor;
struct APawn;
enum class ECollisionChannel : uint8_t;
enum class EDrawDebugTrace : uint8_t;
enum class EEnvTraceShape : uint8_t;
struct FBlackboardKeySelector;
struct FGameplayTag;
struct UBlackboardComponent;
struct UBlackboardData;
struct UBrainComponent;
struct UNavigationQueryFilter;
struct FEQSParametrizedQueryExecutionRequestHTN;
struct FWorldstateSetValueContainer;
struct UAITask_HTNMoveTo;
struct UAITask_MakeHTNPlan;
struct UEnvQueryContext_HTNBlueprintBase;
struct UEnvQueryContext_HTNQuerierLocation;
struct UHTN;
struct UHTNBlueprintLibrary;
struct UHTNNodeLibrary;
struct UHTNComponent;
struct UHTNNode;
struct UHTNDecorator;
struct UHTNDecorator_BlackboardBase;
struct UHTNDecorator_Blackboard;
struct UHTNDecorator_BlueprintBase;
struct UHTNDecorator_Cooldown;
struct UHTNDecorator_DistanceCheck;
struct UHTNDecorator_FocusScope;
struct UHTNDecorator_GuardValue;
struct UHTNDecorator_ModifyCost;
struct UHTNDecorator_TraceTest;
struct UHTNStandaloneNode;
struct UHTNNode_TwoBranches;
struct UHTNNode_AnyOrder;
struct UHTNNode_If;
struct UHTNNode_Parallel;
struct UHTNNode_Scope;
struct UHTNNode_Sequence;
struct UHTNNode_SubNetwork;
struct UHTNNode_SubNetworkDynamic;
struct UHTNService;
struct UHTNService_BlueprintBase;
struct UHTNService_ReplanIfLocationChanges;
struct UHTNTask;
struct UHTNTask_BlackboardBase;
struct UHTNTask_BlueprintBase;
struct UHTNTask_ClearValue;
struct UHTNTask_EQSQuery;
struct UHTNTask_MoveTo;
struct UHTNTask_SetValue;
struct UHTNTask_Success;
struct UHTNTask_Wait;
struct UWorldStateProxy;

// Object: Enum HTN.EHTNDecoratorTestResult
enum class EHTNDecoratorTestResult : uint8_t
{
	Failed = 0,
	Passed = 1,
	NotTested = 2,
	EHTNDecoratorTestResult_MAX = 3
};

// Object: Enum HTN.EHTNDecoratorConditionCheckType
enum class EHTNDecoratorConditionCheckType : uint8_t
{
	PlanEnter = 0,
	PlanExit = 1,
	PlanRecheck = 2,
	Execution = 3,
	EHTNDecoratorConditionCheckType_MAX = 4
};

// Object: Enum HTN.EHTNTaskFunction
enum class EHTNTaskFunction : uint8_t
{
	None = 0,
	CreatePlanSteps = 1,
	RecheckPlan = 2,
	Execute = 3,
	Abort = 4,
	EHTNTaskFunction_MAX = 5
};

// Object: Enum HTN.EHTNTaskStatus
enum class EHTNTaskStatus : uint8_t
{
	Active = 0,
	Aborting = 1,
	Inactive = 2,
	EHTNTaskStatus_MAX = 3
};

// Object: Enum HTN.EHTNNodeResult
enum class EHTNNodeResult : uint8_t
{
	Succeeded = 0,
	Failed = 1,
	Aborted = 2,
	InProgress = 3,
	EHTNNodeResult_MAX = 4
};

// Object: ScriptStruct HTN.EQSParametrizedQueryExecutionRequestHTN
// Size: 0x48 (Inherited: 0x48)
struct FEQSParametrizedQueryExecutionRequestHTN : FEQSParametrizedQueryExecutionRequest
{
};

// Object: ScriptStruct HTN.WorldstateSetValueContainer
// Size: 0x40 (Inherited: 0x0)
struct FWorldstateSetValueContainer
{
	int32_t IntValue; // 0x0(0x4)
	float FloatValue; // 0x4(0x4)
	struct FVector VectorValue; // 0x8(0xC)
	struct FRotator RotatorValue; // 0x14(0xC)
	struct FString StringValue; // 0x20(0x10)
	struct FName NameValue; // 0x30(0x8)
	struct UObject* ObjectValue; // 0x38(0x8)
};

// Object: Class HTN.AITask_HTNMoveTo
// Size: 0x110 (Inherited: 0x108)
struct UAITask_HTNMoveTo : UAITask_MoveTo
{
	DEFINE_UE_CLASS_HELPERS(UAITask_HTNMoveTo, "AITask_HTNMoveTo")

	uint8_t Pad_0x108[0x8]; // 0x108(0x8)
};

// Object: Class HTN.AITask_MakeHTNPlan
// Size: 0xF0 (Inherited: 0x68)
struct UAITask_MakeHTNPlan : UAITask
{
	DEFINE_UE_CLASS_HELPERS(UAITask_MakeHTNPlan, "AITask_MakeHTNPlan")

	struct UHTNComponent* OwnerComponent; // 0x68(0x8)
	struct UHTN* TopLevelHTN; // 0x70(0x8)
	struct UBlackboardComponent* BlackboardComponent; // 0x78(0x8)
	uint8_t Pad_0x80[0x40]; // 0x80(0x40)
	struct UHTNTask* CurrentTask; // 0xC0(0x8)
	uint8_t Pad_0xC8[0x20]; // 0xC8(0x20)
	uint8_t bIsWaitingForTaskToProducePlanSteps : 1; // 0xE8(0x1), Mask(0x1)
	uint8_t BitPad_0xE8_1 : 7; // 0xE8(0x1)
	uint8_t Pad_0xE9[0x7]; // 0xE9(0x7)
};

// Object: Class HTN.EnvQueryContext_HTNBlueprintBase
// Size: 0x40 (Inherited: 0x28)
struct UEnvQueryContext_HTNBlueprintBase : UEnvQueryContext
{
	DEFINE_UE_CLASS_HELPERS(UEnvQueryContext_HTNBlueprintBase, "EnvQueryContext_HTNBlueprintBase")

	uint8_t Pad_0x28[0x8]; // 0x28(0x8)
	struct AActor* TempQuerierActor; // 0x30(0x8)
	uint8_t Pad_0x38[0x8]; // 0x38(0x8)

	// Object: Function HTN.EnvQueryContext_HTNBlueprintBase.ProvideSingleLocation
	// Flags: [Event|Public|HasOutParms|HasDefaults|BlueprintEvent|Const]
	// Offset: 0x101d2e88
	// Params: [ Num(3) Size(0x1C) ]
	void ProvideSingleLocation(struct UObject* QuerierObject, struct AActor* QuerierActor, struct FVector& ResultingLocation);

	// Object: Function HTN.EnvQueryContext_HTNBlueprintBase.ProvideSingleActor
	// Flags: [Event|Public|HasOutParms|BlueprintEvent|Const]
	// Offset: 0x101d2e88
	// Params: [ Num(3) Size(0x18) ]
	void ProvideSingleActor(struct UObject* QuerierObject, struct AActor* QuerierActor, struct AActor*& ResultingActor);

	// Object: Function HTN.EnvQueryContext_HTNBlueprintBase.ProvideLocationsSet
	// Flags: [Event|Public|HasOutParms|BlueprintEvent|Const]
	// Offset: 0x101d2e88
	// Params: [ Num(3) Size(0x20) ]
	void ProvideLocationsSet(struct UObject* QuerierObject, struct AActor* QuerierActor, struct TArray<struct FVector>& ResultingLocationSet);

	// Object: Function HTN.EnvQueryContext_HTNBlueprintBase.ProvideActorsSet
	// Flags: [Event|Public|HasOutParms|BlueprintEvent|Const]
	// Offset: 0x101d2e88
	// Params: [ Num(3) Size(0x20) ]
	void ProvideActorsSet(struct UObject* QuerierObject, struct AActor* QuerierActor, struct TArray<struct AActor*>& ResultingActorsSet);

	// Object: Function HTN.EnvQueryContext_HTNBlueprintBase.GetWorldState
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x7978484
	// Params: [ Num(1) Size(0x8) ]
	struct UWorldStateProxy* GetWorldState();

	// Object: Function HTN.EnvQueryContext_HTNBlueprintBase.GetQuerierLocation
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x797844c
	// Params: [ Num(1) Size(0xC) ]
	struct FVector GetQuerierLocation();
};

// Object: Class HTN.EnvQueryContext_HTNQuerierLocation
// Size: 0x28 (Inherited: 0x28)
struct UEnvQueryContext_HTNQuerierLocation : UEnvQueryContext
{
	DEFINE_UE_CLASS_HELPERS(UEnvQueryContext_HTNQuerierLocation, "EnvQueryContext_HTNQuerierLocation")
};

// Object: Class HTN.HTN
// Size: 0x60 (Inherited: 0x28)
struct UHTN : UObject
{
	DEFINE_UE_CLASS_HELPERS(UHTN, "HTN")

	struct TArray<struct UHTNStandaloneNode*> StartNodes; // 0x28(0x10)
	struct TArray<struct UHTNDecorator*> RootDecorators; // 0x38(0x10)
	struct TArray<struct UHTNService*> RootServices; // 0x48(0x10)
	struct UBlackboardData* BlackboardAsset; // 0x58(0x8)
};

// Object: Class HTN.HTNBlueprintLibrary
// Size: 0x28 (Inherited: 0x28)
struct UHTNBlueprintLibrary : UBlueprintFunctionLibrary
{
	DEFINE_UE_CLASS_HELPERS(UHTNBlueprintLibrary, "HTNBlueprintLibrary")

	// Object: Function HTN.HTNBlueprintLibrary.RunHTN
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x797858c
	// Params: [ Num(3) Size(0x11) ]
	static uint8_t RunHTN(struct AAIController* AIController, struct UHTN* HTNAsset);
};

// Object: Class HTN.HTNNodeLibrary
// Size: 0x28 (Inherited: 0x28)
struct UHTNNodeLibrary : UBlueprintFunctionLibrary
{
	DEFINE_UE_CLASS_HELPERS(UHTNNodeLibrary, "HTNNodeLibrary")

	// Object: Function HTN.HTNNodeLibrary.SetWorldStateValueAsVector
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable]
	// Offset: 0x797a240
	// Params: [ Num(3) Size(0x3C) ]
	static void SetWorldStateValueAsVector(struct UHTNNode* Node, const struct FBlackboardKeySelector& Key, struct FVector Value);

	// Object: Function HTN.HTNNodeLibrary.SetWorldStateValueAsString
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x797a0b0
	// Params: [ Num(3) Size(0x40) ]
	static void SetWorldStateValueAsString(struct UHTNNode* Node, const struct FBlackboardKeySelector& Key, struct FString Value);

	// Object: Function HTN.HTNNodeLibrary.SetWorldStateValueAsRotator
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable]
	// Offset: 0x7979f78
	// Params: [ Num(3) Size(0x3C) ]
	static void SetWorldStateValueAsRotator(struct UHTNNode* Node, const struct FBlackboardKeySelector& Key, struct FRotator Value);

	// Object: Function HTN.HTNNodeLibrary.SetWorldStateValueAsObject
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x7979e44
	// Params: [ Num(3) Size(0x38) ]
	static void SetWorldStateValueAsObject(struct UHTNNode* Node, const struct FBlackboardKeySelector& Key, struct UObject* Value);

	// Object: Function HTN.HTNNodeLibrary.SetWorldStateValueAsName
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x7979d10
	// Params: [ Num(3) Size(0x38) ]
	static void SetWorldStateValueAsName(struct UHTNNode* Node, const struct FBlackboardKeySelector& Key, struct FName Value);

	// Object: Function HTN.HTNNodeLibrary.SetWorldStateValueAsInt
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x7979bd8
	// Params: [ Num(3) Size(0x34) ]
	static void SetWorldStateValueAsInt(struct UHTNNode* Node, const struct FBlackboardKeySelector& Key, int32_t Value);

	// Object: Function HTN.HTNNodeLibrary.SetWorldStateValueAsFloat
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x7979aa0
	// Params: [ Num(3) Size(0x34) ]
	static void SetWorldStateValueAsFloat(struct UHTNNode* Node, const struct FBlackboardKeySelector& Key, float Value);

	// Object: Function HTN.HTNNodeLibrary.SetWorldStateValueAsEnum
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x7979968
	// Params: [ Num(3) Size(0x31) ]
	static void SetWorldStateValueAsEnum(struct UHTNNode* Node, const struct FBlackboardKeySelector& Key, uint8_t Value);

	// Object: Function HTN.HTNNodeLibrary.SetWorldStateValueAsClass
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x7979834
	// Params: [ Num(3) Size(0x38) ]
	static void SetWorldStateValueAsClass(struct UHTNNode* Node, const struct FBlackboardKeySelector& Key, struct UObject* Value);

	// Object: Function HTN.HTNNodeLibrary.SetWorldStateValueAsBool
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x79796f4
	// Params: [ Num(3) Size(0x31) ]
	static void SetWorldStateValueAsBool(struct UHTNNode* Node, const struct FBlackboardKeySelector& Key, uint8_t Value);

	// Object: Function HTN.HTNNodeLibrary.GetWorldStateValueAsVector
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure]
	// Offset: 0x79795ec
	// Params: [ Num(3) Size(0x3C) ]
	static struct FVector GetWorldStateValueAsVector(struct UHTNNode* Node, const struct FBlackboardKeySelector& Key);

	// Object: Function HTN.HTNNodeLibrary.GetWorldStateValueAsString
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	// Offset: 0x79794b4
	// Params: [ Num(3) Size(0x40) ]
	static struct FString GetWorldStateValueAsString(struct UHTNNode* Node, const struct FBlackboardKeySelector& Key);

	// Object: Function HTN.HTNNodeLibrary.GetWorldStateValueAsRotator
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure]
	// Offset: 0x79793ac
	// Params: [ Num(3) Size(0x3C) ]
	static struct FRotator GetWorldStateValueAsRotator(struct UHTNNode* Node, const struct FBlackboardKeySelector& Key);

	// Object: Function HTN.HTNNodeLibrary.GetWorldStateValueAsObject
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	// Offset: 0x79792a8
	// Params: [ Num(3) Size(0x38) ]
	static struct UObject* GetWorldStateValueAsObject(struct UHTNNode* Node, const struct FBlackboardKeySelector& Key);

	// Object: Function HTN.HTNNodeLibrary.GetWorldStateValueAsName
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	// Offset: 0x79791a4
	// Params: [ Num(3) Size(0x38) ]
	static struct FName GetWorldStateValueAsName(struct UHTNNode* Node, const struct FBlackboardKeySelector& Key);

	// Object: Function HTN.HTNNodeLibrary.GetWorldStateValueAsInt
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	// Offset: 0x79790a0
	// Params: [ Num(3) Size(0x34) ]
	static int32_t GetWorldStateValueAsInt(struct UHTNNode* Node, const struct FBlackboardKeySelector& Key);

	// Object: Function HTN.HTNNodeLibrary.GetWorldStateValueAsFloat
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	// Offset: 0x7978f9c
	// Params: [ Num(3) Size(0x34) ]
	static float GetWorldStateValueAsFloat(struct UHTNNode* Node, const struct FBlackboardKeySelector& Key);

	// Object: Function HTN.HTNNodeLibrary.GetWorldStateValueAsEnum
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	// Offset: 0x7978e98
	// Params: [ Num(3) Size(0x31) ]
	static uint8_t GetWorldStateValueAsEnum(struct UHTNNode* Node, const struct FBlackboardKeySelector& Key);

	// Object: Function HTN.HTNNodeLibrary.GetWorldStateValueAsClass
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	// Offset: 0x7978d94
	// Params: [ Num(3) Size(0x38) ]
	static struct UObject* GetWorldStateValueAsClass(struct UHTNNode* Node, const struct FBlackboardKeySelector& Key);

	// Object: Function HTN.HTNNodeLibrary.GetWorldStateValueAsBool
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	// Offset: 0x7978c8c
	// Params: [ Num(3) Size(0x31) ]
	static uint8_t GetWorldStateValueAsBool(struct UHTNNode* Node, const struct FBlackboardKeySelector& Key);

	// Object: Function HTN.HTNNodeLibrary.GetWorldStateValueAsActor
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	// Offset: 0x7978b88
	// Params: [ Num(3) Size(0x38) ]
	static struct AActor* GetWorldStateValueAsActor(struct UHTNNode* Node, const struct FBlackboardKeySelector& Key);

	// Object: Function HTN.HTNNodeLibrary.GetSelfLocationFromWorldState
	// Flags: [Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure]
	// Offset: 0x7978ae0
	// Params: [ Num(2) Size(0x14) ]
	static struct FVector GetSelfLocationFromWorldState(struct UHTNNode* Node);

	// Object: Function HTN.HTNNodeLibrary.GetOwnersWorldState
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x7978a3c
	// Params: [ Num(2) Size(0x10) ]
	static struct UWorldStateProxy* GetOwnersWorldState(struct UHTNNode* Node);

	// Object: Function HTN.HTNNodeLibrary.GetLocationFromWorldState
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable]
	// Offset: 0x7978898
	// Params: [ Num(5) Size(0x49) ]
	static uint8_t GetLocationFromWorldState(struct UHTNNode* Node, const struct FBlackboardKeySelector& KeySelector, struct FVector& OutLocation, struct AActor*& OutActor);

	// Object: Function HTN.HTNNodeLibrary.ForceReplan
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x7978774
	// Params: [ Num(3) Size(0xA) ]
	static void ForceReplan(struct UHTNNode* Node, uint8_t bForceAbortPlan, uint8_t bForceRestartActivePlanning);

	// Object: Function HTN.HTNNodeLibrary.ClearWorldStateValue
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x7978680
	// Params: [ Num(2) Size(0x30) ]
	static void ClearWorldStateValue(struct UHTNNode* Node, const struct FBlackboardKeySelector& Key);
};

// Object: Class HTN.HTNComponent
// Size: 0x2A0 (Inherited: 0x158)
struct UHTNComponent : UBrainComponent
{
	DEFINE_UE_CLASS_HELPERS(UHTNComponent, "HTNComponent")

	uint8_t Pad_0x158[0x10]; // 0x158(0x10)
	struct UHTN* CurrentHTNAsset; // 0x168(0x8)
	struct UAITask_MakeHTNPlan* CurrentPlanningTask; // 0x170(0x8)
	uint8_t Pad_0x178[0x40]; // 0x178(0x40)
	struct TArray<struct UHTNNode*> InstancedNodes; // 0x1B8(0x10)
	struct TArray<uint8_t> PlanMemory; // 0x1C8(0x10)
	struct UWorldStateProxy* PlanningWorldStateProxy; // 0x1D8(0x8)
	struct UWorldStateProxy* BlackboardProxy; // 0x1E0(0x8)
	struct TMap<struct UObject*, float> CooldownOwnerToEndTimeMap; // 0x1E8(0x50)
	struct TMap<struct FGameplayTag, struct UHTN*> GameplayTagToDynamicHTNMap; // 0x238(0x50)
	uint8_t Pad_0x288[0x18]; // 0x288(0x18)

	// Object: Function HTN.HTNComponent.StopHTN
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x797ac4c
	// Params: [ Num(1) Size(0x1) ]
	void StopHTN(uint8_t bDisregardLatentAbort);

	// Object: Function HTN.HTNComponent.StartHTN
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x797aba8
	// Params: [ Num(1) Size(0x8) ]
	void StartHTN(struct UHTN* Asset);

	// Object: Function HTN.HTNComponent.SetDynamicHTN
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x797aa7c
	// Params: [ Num(4) Size(0x12) ]
	uint8_t SetDynamicHTN(struct FGameplayTag InjectTag, struct UHTN* HTN, uint8_t bForceAbortCurrentPlanIfChanged);

	// Object: Function HTN.HTNComponent.NotifyEventBasedDecoratorCondition
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x797a93c
	// Params: [ Num(4) Size(0xB) ]
	uint8_t NotifyEventBasedDecoratorCondition(struct UHTNDecorator* Decorator, uint8_t bRawConditionValue, uint8_t bCanAbortPlanInstantly);

	// Object: Function HTN.HTNComponent.IsWaitingForAbortingTasks
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x797a904
	// Params: [ Num(1) Size(0x1) ]
	uint8_t IsWaitingForAbortingTasks();

	// Object: Function HTN.HTNComponent.IsPlanning
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x797a8cc
	// Params: [ Num(1) Size(0x1) ]
	uint8_t IsPlanning();

	// Object: Function HTN.HTNComponent.HasActivePlan
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x797a894
	// Params: [ Num(1) Size(0x1) ]
	uint8_t HasActivePlan();

	// Object: Function HTN.HTNComponent.GetWorldStateProxy
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x797a7dc
	// Params: [ Num(2) Size(0x10) ]
	struct UWorldStateProxy* GetWorldStateProxy(uint8_t bForPlanning);

	// Object: Function HTN.HTNComponent.GetPlanningWorldStateProxy
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x797a7c0
	// Params: [ Num(1) Size(0x8) ]
	struct UWorldStateProxy* GetPlanningWorldStateProxy();

	// Object: Function HTN.HTNComponent.GetDynamicHTN
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x797a714
	// Params: [ Num(2) Size(0x10) ]
	struct UHTN* GetDynamicHTN(struct FGameplayTag InjectTag);

	// Object: Function HTN.HTNComponent.GetCurrentHTN
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x797a6f8
	// Params: [ Num(1) Size(0x8) ]
	struct UHTN* GetCurrentHTN();

	// Object: Function HTN.HTNComponent.GetCooldownEndTime
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x797a64c
	// Params: [ Num(2) Size(0xC) ]
	float GetCooldownEndTime(struct UObject* CooldownOwner);

	// Object: Function HTN.HTNComponent.GetBlackboardProxy
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x797a630
	// Params: [ Num(1) Size(0x8) ]
	struct UWorldStateProxy* GetBlackboardProxy();

	// Object: Function HTN.HTNComponent.ForceReplan
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x797a4f4
	// Params: [ Num(3) Size(0x3) ]
	void ForceReplan(uint8_t bForceAbortPlan, uint8_t bForceRestartActivePlanning, uint8_t bForceDeferToNextFrame);

	// Object: Function HTN.HTNComponent.CancelActivePlanning
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x797a4e0
	// Params: [ Num(0) Size(0x0) ]
	void CancelActivePlanning();

	// Object: Function HTN.HTNComponent.AddCooldownDuration
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x797a3bc
	// Params: [ Num(3) Size(0xD) ]
	void AddCooldownDuration(struct UObject* CooldownOwner, float CooldownDuration, uint8_t bAddToExistingDuration);
};

// Object: Class HTN.HTNNode
// Size: 0x60 (Inherited: 0x28)
struct UHTNNode : UObject
{
	DEFINE_UE_CLASS_HELPERS(UHTNNode, "HTNNode")

	uint8_t Pad_0x28[0x8]; // 0x28(0x8)
	struct FString NodeName; // 0x30(0x10)
	struct UHTNNode* TemplateNode; // 0x40(0x8)
	uint8_t Pad_0x48[0x8]; // 0x48(0x8)
	struct UHTN* HTNAsset; // 0x50(0x8)
	struct UHTNComponent* OwnerComponent; // 0x58(0x8)

	// Object: Function HTN.HTNNode.GetOwnerComponent
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x797ca84
	// Params: [ Num(1) Size(0x8) ]
	struct UHTNComponent* GetOwnerComponent();

	// Object: Function HTN.HTNNode.GetNodeName
	// Flags: [Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x797c9e4
	// Params: [ Num(1) Size(0x10) ]
	struct FString GetNodeName();
};

// Object: Class HTN.HTNDecorator
// Size: 0x68 (Inherited: 0x60)
struct UHTNDecorator : UHTNNode
{
	DEFINE_UE_CLASS_HELPERS(UHTNDecorator, "HTNDecorator")

	uint8_t BitPad_0x60_0 : 6; // 0x60(0x1)
	uint8_t bInverseCondition : 1; // 0x60(0x1), Mask(0x40)
	uint8_t bCheckConditionOnPlanEnter : 1; // 0x60(0x1), Mask(0x80)
	uint8_t bCheckConditionOnPlanExit : 1; // 0x61(0x1), Mask(0x1)
	uint8_t bCheckConditionOnPlanRecheck : 1; // 0x61(0x1), Mask(0x2)
	uint8_t bCheckConditionOnTick : 1; // 0x61(0x1), Mask(0x4)
	uint8_t BitPad_0x61_3 : 5; // 0x61(0x1)
	uint8_t Pad_0x62[0x6]; // 0x62(0x6)

	// Object: Function HTN.HTNDecorator.IsInversed
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x797af24
	// Params: [ Num(1) Size(0x1) ]
	uint8_t IsInversed();
};

// Object: Class HTN.HTNDecorator_BlackboardBase
// Size: 0x90 (Inherited: 0x68)
struct UHTNDecorator_BlackboardBase : UHTNDecorator
{
	DEFINE_UE_CLASS_HELPERS(UHTNDecorator_BlackboardBase, "HTNDecorator_BlackboardBase")

	struct FBlackboardKeySelector BlackboardKey; // 0x68(0x28)
};

// Object: Class HTN.HTNDecorator_Blackboard
// Size: 0xC0 (Inherited: 0x90)
struct UHTNDecorator_Blackboard : UHTNDecorator_BlackboardBase
{
	DEFINE_UE_CLASS_HELPERS(UHTNDecorator_Blackboard, "HTNDecorator_Blackboard")

	int32_t IntValue; // 0x90(0x4)
	float FloatValue; // 0x94(0x4)
	struct FString StringValue; // 0x98(0x10)
	struct FString CachedDescription; // 0xA8(0x10)
	uint8_t OperationType; // 0xB8(0x1)
	uint8_t bCanAbortPlanInstantly : 1; // 0xB9(0x1), Mask(0x1)
	uint8_t BitPad_0xB9_1 : 7; // 0xB9(0x1)
	uint8_t Pad_0xBA[0x6]; // 0xBA(0x6)
};

// Object: Class HTN.HTNDecorator_BlueprintBase
// Size: 0x80 (Inherited: 0x68)
struct UHTNDecorator_BlueprintBase : UHTNDecorator
{
	DEFINE_UE_CLASS_HELPERS(UHTNDecorator_BlueprintBase, "HTNDecorator_BlueprintBase")

	uint8_t bShowPropertyDetails : 1; // 0x62(0x1), Mask(0x1)
	uint8_t BitPad_0x68_1 : 7; // 0x68(0x1)
	uint8_t Pad_0x69[0x17]; // 0x69(0x17)

	// Object: Function HTN.HTNDecorator_BlueprintBase.ReceiveTick
	// Flags: [Event|Protected|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(4) Size(0x1C) ]
	void ReceiveTick(struct AActor* Owner, struct AAIController* OwnerAsController, struct APawn* ControlledPawn, float DeltaTime);

	// Object: Function HTN.HTNDecorator_BlueprintBase.ReceiveOnPlanExit
	// Flags: [Event|Protected|BlueprintEvent|Const]
	// Offset: 0x101d2e88
	// Params: [ Num(3) Size(0x18) ]
	void ReceiveOnPlanExit(struct AActor* Owner, struct AAIController* OwnerAsController, struct APawn* ControlledPawn);

	// Object: Function HTN.HTNDecorator_BlueprintBase.ReceiveOnPlanEnter
	// Flags: [Event|Protected|BlueprintEvent|Const]
	// Offset: 0x101d2e88
	// Params: [ Num(3) Size(0x18) ]
	void ReceiveOnPlanEnter(struct AActor* Owner, struct AAIController* OwnerAsController, struct APawn* ControlledPawn);

	// Object: Function HTN.HTNDecorator_BlueprintBase.ReceiveModifyStepCost
	// Flags: [Event|Protected|BlueprintEvent|Const]
	// Offset: 0x101d2e88
	// Params: [ Num(5) Size(0x24) ]
	int32_t ReceiveModifyStepCost(int32_t OriginalCost, struct AActor* Owner, struct AAIController* OwnerAsController, struct APawn* ControlledPawn);

	// Object: Function HTN.HTNDecorator_BlueprintBase.ReceiveExecutionStart
	// Flags: [Event|Protected|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(3) Size(0x18) ]
	void ReceiveExecutionStart(struct AActor* Owner, struct AAIController* OwnerAsController, struct APawn* ControlledPawn);

	// Object: Function HTN.HTNDecorator_BlueprintBase.ReceiveExecutionFinish
	// Flags: [Event|Protected|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(4) Size(0x19) ]
	void ReceiveExecutionFinish(struct AActor* Owner, struct AAIController* OwnerAsController, struct APawn* ControlledPawn, EHTNNodeResult NodeResult);

	// Object: Function HTN.HTNDecorator_BlueprintBase.PerformConditionCheck
	// Flags: [Event|Protected|BlueprintEvent|Const]
	// Offset: 0x101d2e88
	// Params: [ Num(5) Size(0x1A) ]
	uint8_t PerformConditionCheck(struct AActor* Owner, struct AAIController* OwnerAsController, struct APawn* ControlledPawn, EHTNDecoratorConditionCheckType CheckType);
};

// Object: Class HTN.HTNDecorator_Cooldown
// Size: 0x68 (Inherited: 0x68)
struct UHTNDecorator_Cooldown : UHTNDecorator
{
	DEFINE_UE_CLASS_HELPERS(UHTNDecorator_Cooldown, "HTNDecorator_Cooldown")

	float CooldownDuration; // 0x64(0x4)
};

// Object: Class HTN.HTNDecorator_DistanceCheck
// Size: 0xC0 (Inherited: 0x68)
struct UHTNDecorator_DistanceCheck : UHTNDecorator
{
	DEFINE_UE_CLASS_HELPERS(UHTNDecorator_DistanceCheck, "HTNDecorator_DistanceCheck")

	struct FBlackboardKeySelector A; // 0x68(0x28)
	struct FBlackboardKeySelector B; // 0x90(0x28)
	float MinDistance; // 0xB8(0x4)
	float MaxDistance; // 0xBC(0x4)
};

// Object: Class HTN.HTNDecorator_FocusScope
// Size: 0x98 (Inherited: 0x68)
struct UHTNDecorator_FocusScope : UHTNDecorator
{
	DEFINE_UE_CLASS_HELPERS(UHTNDecorator_FocusScope, "HTNDecorator_FocusScope")

	uint8_t bSetNewFocus : 1; // 0x62(0x1), Mask(0x1)
	struct FBlackboardKeySelector FocusTarget; // 0x68(0x28)
	uint8_t FocusPriority; // 0x90(0x1)
	uint8_t BitPad_0x91_1 : 7; // 0x91(0x1)
	uint8_t Pad_0x92[0x6]; // 0x92(0x6)
};

// Object: Class HTN.HTNDecorator_GuardValue
// Size: 0xD8 (Inherited: 0x90)
struct UHTNDecorator_GuardValue : UHTNDecorator_BlackboardBase
{
	DEFINE_UE_CLASS_HELPERS(UHTNDecorator_GuardValue, "HTNDecorator_GuardValue")

	struct FWorldstateSetValueContainer Value; // 0x90(0x40)
	uint8_t bSetValueOnEnterPlan : 1; // 0xD0(0x1), Mask(0x1)
	uint8_t bRestoreValueOnExitPlan : 1; // 0xD0(0x1), Mask(0x2)
	uint8_t bRestoreValueOnAbort : 1; // 0xD0(0x1), Mask(0x4)
	uint8_t BitPad_0xD0_3 : 5; // 0xD0(0x1)
	uint8_t Pad_0xD1[0x7]; // 0xD1(0x7)
};

// Object: Class HTN.HTNDecorator_ModifyCost
// Size: 0x70 (Inherited: 0x68)
struct UHTNDecorator_ModifyCost : UHTNDecorator
{
	DEFINE_UE_CLASS_HELPERS(UHTNDecorator_ModifyCost, "HTNDecorator_ModifyCost")

	float Scale; // 0x64(0x4)
	int32_t Bias; // 0x68(0x4)
};

// Object: Class HTN.HTNDecorator_TraceTest
// Size: 0x110 (Inherited: 0x68)
struct UHTNDecorator_TraceTest : UHTNDecorator
{
	DEFINE_UE_CLASS_HELPERS(UHTNDecorator_TraceTest, "HTNDecorator_TraceTest")

	struct FBlackboardKeySelector TraceFrom; // 0x68(0x28)
	float TraceFromZOffset; // 0x90(0x4)
	uint8_t Pad_0x94[0x4]; // 0x94(0x4)
	struct FBlackboardKeySelector TraceTo; // 0x98(0x28)
	float TraceToZOffset; // 0xC0(0x4)
	ECollisionChannel CollisionChannel; // 0xC4(0x1)
	uint8_t bUseComplexCollision : 1; // 0xC5(0x1), Mask(0x1)
	uint8_t bIgnoreSelf : 1; // 0xC5(0x1), Mask(0x2)
	uint8_t BitPad_0xC5_2 : 6; // 0xC5(0x1)
	EEnvTraceShape TraceShape; // 0xC6(0x1)
	uint8_t Pad_0xC7[0x1]; // 0xC7(0x1)
	float TraceExtentX; // 0xC8(0x4)
	float TraceExtentY; // 0xCC(0x4)
	float TraceExtentZ; // 0xD0(0x4)
	EDrawDebugTrace DrawDebugType; // 0xD4(0x1)
	uint8_t Pad_0xD5[0x3]; // 0xD5(0x3)
	struct FLinearColor DebugColor; // 0xD8(0x10)
	struct FLinearColor DebugHitColor; // 0xE8(0x10)
	float DebugDrawTime; // 0xF8(0x4)
	uint8_t Pad_0xFC[0x4]; // 0xFC(0x4)
	struct TArray<struct AActor*> ActorsToIgnoreBuffer; // 0x100(0x10)
};

// Object: Class HTN.HTNStandaloneNode
// Size: 0x98 (Inherited: 0x60)
struct UHTNStandaloneNode : UHTNNode
{
	DEFINE_UE_CLASS_HELPERS(UHTNStandaloneNode, "HTNStandaloneNode")

	int32_t MaxRecursionLimit; // 0x60(0x4)
	uint8_t Pad_0x64[0x4]; // 0x64(0x4)
	struct TArray<struct UHTNStandaloneNode*> NextNodes; // 0x68(0x10)
	struct TArray<struct UHTNDecorator*> Decorators; // 0x78(0x10)
	struct TArray<struct UHTNService*> Services; // 0x88(0x10)
};

// Object: Class HTN.HTNNode_TwoBranches
// Size: 0xA0 (Inherited: 0x98)
struct UHTNNode_TwoBranches : UHTNStandaloneNode
{
	DEFINE_UE_CLASS_HELPERS(UHTNNode_TwoBranches, "HTNNode_TwoBranches")

	int32_t NumPrimaryNodes; // 0x98(0x4)
	uint8_t Pad_0x9C[0x4]; // 0x9C(0x4)
};

// Object: Class HTN.HTNNode_AnyOrder
// Size: 0xA0 (Inherited: 0xA0)
struct UHTNNode_AnyOrder : UHTNNode_TwoBranches
{
	DEFINE_UE_CLASS_HELPERS(UHTNNode_AnyOrder, "HTNNode_AnyOrder")
};

// Object: Class HTN.HTNNode_If
// Size: 0xA0 (Inherited: 0xA0)
struct UHTNNode_If : UHTNNode_TwoBranches
{
	DEFINE_UE_CLASS_HELPERS(UHTNNode_If, "HTNNode_If")

	uint8_t bCanConditionsInterruptTrueBranch : 1; // 0x9C(0x1), Mask(0x1)
	uint8_t bCanConditionsInterruptFalseBranch : 1; // 0x9C(0x1), Mask(0x2)
};

// Object: Class HTN.HTNNode_Parallel
// Size: 0xA0 (Inherited: 0xA0)
struct UHTNNode_Parallel : UHTNNode_TwoBranches
{
	DEFINE_UE_CLASS_HELPERS(UHTNNode_Parallel, "HTNNode_Parallel")

	uint8_t bWaitForSecondaryBranchToComplete : 1; // 0x9C(0x1), Mask(0x1)
	uint8_t bLoopSecondaryBranchUntilPrimaryBranchCompletes : 1; // 0x9C(0x1), Mask(0x2)
};

// Object: Class HTN.HTNNode_Scope
// Size: 0x98 (Inherited: 0x98)
struct UHTNNode_Scope : UHTNStandaloneNode
{
	DEFINE_UE_CLASS_HELPERS(UHTNNode_Scope, "HTNNode_Scope")
};

// Object: Class HTN.HTNNode_Sequence
// Size: 0xA0 (Inherited: 0xA0)
struct UHTNNode_Sequence : UHTNNode_TwoBranches
{
	DEFINE_UE_CLASS_HELPERS(UHTNNode_Sequence, "HTNNode_Sequence")
};

// Object: Class HTN.HTNNode_SubNetwork
// Size: 0xA0 (Inherited: 0x98)
struct UHTNNode_SubNetwork : UHTNStandaloneNode
{
	DEFINE_UE_CLASS_HELPERS(UHTNNode_SubNetwork, "HTNNode_SubNetwork")

	struct UHTN* HTN; // 0x98(0x8)
};

// Object: Class HTN.HTNNode_SubNetworkDynamic
// Size: 0xA8 (Inherited: 0x98)
struct UHTNNode_SubNetworkDynamic : UHTNStandaloneNode
{
	DEFINE_UE_CLASS_HELPERS(UHTNNode_SubNetworkDynamic, "HTNNode_SubNetworkDynamic")

	struct UHTN* DefaultHTN; // 0x98(0x8)
	struct FGameplayTag InjectTag; // 0xA0(0x8)
};

// Object: Class HTN.HTNService
// Size: 0x70 (Inherited: 0x60)
struct UHTNService : UHTNNode
{
	DEFINE_UE_CLASS_HELPERS(UHTNService, "HTNService")

	float TickInterval; // 0x60(0x4)
	float TickIntervalRandomDeviation; // 0x64(0x4)
	uint8_t Pad_0x68[0x8]; // 0x68(0x8)
};

// Object: Class HTN.HTNService_BlueprintBase
// Size: 0x88 (Inherited: 0x70)
struct UHTNService_BlueprintBase : UHTNService
{
	DEFINE_UE_CLASS_HELPERS(UHTNService_BlueprintBase, "HTNService_BlueprintBase")

	uint8_t bShowPropertyDetails : 1; // 0x69(0x1), Mask(0x1)
	uint8_t BitPad_0x70_1 : 7; // 0x70(0x1)
	uint8_t Pad_0x71[0x17]; // 0x71(0x17)

	// Object: Function HTN.HTNService_BlueprintBase.ReceiveTick
	// Flags: [Event|Protected|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(4) Size(0x1C) ]
	void ReceiveTick(struct AActor* Owner, struct AAIController* OwnerAsController, struct APawn* ControlledPawn, float DeltaTime);

	// Object: Function HTN.HTNService_BlueprintBase.ReceiveExecutionStart
	// Flags: [Event|Protected|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(3) Size(0x18) ]
	void ReceiveExecutionStart(struct AActor* Owner, struct AAIController* OwnerAsController, struct APawn* ControlledPawn);

	// Object: Function HTN.HTNService_BlueprintBase.ReceiveExecutionFinish
	// Flags: [Event|Protected|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(4) Size(0x19) ]
	void ReceiveExecutionFinish(struct AActor* Owner, struct AAIController* OwnerAsController, struct APawn* ControlledPawn, EHTNNodeResult NodeResult);
};

// Object: Class HTN.HTNService_ReplanIfLocationChanges
// Size: 0xA0 (Inherited: 0x70)
struct UHTNService_ReplanIfLocationChanges : UHTNService
{
	DEFINE_UE_CLASS_HELPERS(UHTNService_ReplanIfLocationChanges, "HTNService_ReplanIfLocationChanges")

	float Tolerance; // 0x6C(0x4)
	struct FBlackboardKeySelector BlackboardKey; // 0x70(0x28)
	uint8_t bForceAbortPlan : 1; // 0x98(0x1), Mask(0x1)
	uint8_t bForceRestartActivePlanning : 1; // 0x99(0x1), Mask(0x1)
	uint8_t BitPad_0x9C_2 : 6; // 0x9C(0x1)
	uint8_t Pad_0x9D[0x3]; // 0x9D(0x3)
};

// Object: Class HTN.HTNTask
// Size: 0xA0 (Inherited: 0x98)
struct UHTNTask : UHTNStandaloneNode
{
	DEFINE_UE_CLASS_HELPERS(UHTNTask, "HTNTask")

	uint8_t bShowTaskNameOnCurrentPlanVisualization : 1; // 0x98(0x1), Mask(0x1)
	uint8_t BitPad_0x98_1 : 7; // 0x98(0x1)
	uint8_t Pad_0x99[0x7]; // 0x99(0x7)
};

// Object: Class HTN.HTNTask_BlackboardBase
// Size: 0xC8 (Inherited: 0xA0)
struct UHTNTask_BlackboardBase : UHTNTask
{
	DEFINE_UE_CLASS_HELPERS(UHTNTask_BlackboardBase, "HTNTask_BlackboardBase")

	struct FBlackboardKeySelector BlackboardKey; // 0xA0(0x28)
};

// Object: Class HTN.HTNTask_BlueprintBase
// Size: 0xF0 (Inherited: 0xA0)
struct UHTNTask_BlueprintBase : UHTNTask
{
	DEFINE_UE_CLASS_HELPERS(UHTNTask_BlueprintBase, "HTNTask_BlueprintBase")

	uint8_t Pad_0xA0[0x20]; // 0xA0(0x20)
	struct UAITask_MakeHTNPlan* OutPlanningTask; // 0xC0(0x8)
	struct FIntervalCountdown TickInterval; // 0xC8(0x8)
	uint8_t bShowPropertyDetails : 1; // 0xD0(0x1), Mask(0x1)
	uint8_t BitPad_0xD0_1 : 7; // 0xD0(0x1)
	uint8_t Pad_0xD1[0x1F]; // 0xD1(0x1F)

	// Object: Function HTN.HTNTask_BlueprintBase.SubmitPlanStep
	// Flags: [Final|Native|Protected|BlueprintCallable|Const]
	// Offset: 0x797d390
	// Params: [ Num(1) Size(0x4) ]
	void SubmitPlanStep(int32_t Cost);

	// Object: Function HTN.HTNTask_BlueprintBase.ReceiveTick
	// Flags: [Event|Protected|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(4) Size(0x1C) ]
	void ReceiveTick(struct AActor* Owner, struct AAIController* OwnerController, struct APawn* ControlledPawn, float DeltaSeconds);

	// Object: Function HTN.HTNTask_BlueprintBase.ReceiveRecheckPlan
	// Flags: [Event|Protected|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(4) Size(0x19) ]
	uint8_t ReceiveRecheckPlan(struct AActor* Owner, struct AAIController* OwnerController, struct APawn* ControlledPawn);

	// Object: Function HTN.HTNTask_BlueprintBase.ReceiveOnFinished
	// Flags: [Event|Protected|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(4) Size(0x19) ]
	void ReceiveOnFinished(struct AActor* Owner, struct AAIController* OwnerController, struct APawn* ControlledPawn, EHTNNodeResult Result);

	// Object: Function HTN.HTNTask_BlueprintBase.ReceiveExecute
	// Flags: [Event|Protected|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(3) Size(0x18) ]
	void ReceiveExecute(struct AActor* Owner, struct AAIController* OwnerController, struct APawn* ControlledPawn);

	// Object: Function HTN.HTNTask_BlueprintBase.ReceiveDescribePlanStepToVisualLog
	// Flags: [Event|Protected|BlueprintEvent|Const]
	// Offset: 0x101d2e88
	// Params: [ Num(4) Size(0x20) ]
	void ReceiveDescribePlanStepToVisualLog(struct AActor* Owner, struct AAIController* OwnerController, struct APawn* ControlledPawn, struct FName VisLogCategoryName);

	// Object: Function HTN.HTNTask_BlueprintBase.ReceiveCreatePlanSteps
	// Flags: [Event|Protected|BlueprintEvent|Const]
	// Offset: 0x101d2e88
	// Params: [ Num(3) Size(0x18) ]
	void ReceiveCreatePlanSteps(struct AActor* Owner, struct AAIController* OwnerController, struct APawn* ControlledPawn);

	// Object: Function HTN.HTNTask_BlueprintBase.ReceiveAbort
	// Flags: [Event|Protected|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(3) Size(0x18) ]
	void ReceiveAbort(struct AActor* Owner, struct AAIController* OwnerController, struct APawn* ControlledPawn);

	// Object: Function HTN.HTNTask_BlueprintBase.IsTaskExecuting
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x797d358
	// Params: [ Num(1) Size(0x1) ]
	uint8_t IsTaskExecuting();

	// Object: Function HTN.HTNTask_BlueprintBase.IsTaskAborting
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x797d320
	// Params: [ Num(1) Size(0x1) ]
	uint8_t IsTaskAborting();

	// Object: Function HTN.HTNTask_BlueprintBase.FinishExecute
	// Flags: [Final|Native|Protected|BlueprintCallable]
	// Offset: 0x797d274
	// Params: [ Num(1) Size(0x1) ]
	void FinishExecute(uint8_t bSuccess);

	// Object: Function HTN.HTNTask_BlueprintBase.FinishAbort
	// Flags: [Final|Native|Protected|BlueprintCallable]
	// Offset: 0x797d260
	// Params: [ Num(0) Size(0x0) ]
	void FinishAbort();
};

// Object: Class HTN.HTNTask_ClearValue
// Size: 0xC8 (Inherited: 0xC8)
struct UHTNTask_ClearValue : UHTNTask_BlackboardBase
{
	DEFINE_UE_CLASS_HELPERS(UHTNTask_ClearValue, "HTNTask_ClearValue")
};

// Object: Class HTN.HTNTask_EQSQuery
// Size: 0x118 (Inherited: 0xC8)
struct UHTNTask_EQSQuery : UHTNTask_BlackboardBase
{
	DEFINE_UE_CLASS_HELPERS(UHTNTask_EQSQuery, "HTNTask_EQSQuery")

	struct FEQSParametrizedQueryExecutionRequestHTN EQSRequest; // 0xC8(0x48)
	int32_t MaxNumCandidatePlans; // 0x110(0x4)
	uint8_t Pad_0x114[0x4]; // 0x114(0x4)
};

// Object: Class HTN.HTNTask_MoveTo
// Size: 0xE8 (Inherited: 0xC8)
struct UHTNTask_MoveTo : UHTNTask_BlackboardBase
{
	DEFINE_UE_CLASS_HELPERS(UHTNTask_MoveTo, "HTNTask_MoveTo")

	float AcceptableRadius; // 0xC8(0x4)
	uint8_t Pad_0xCC[0x4]; // 0xCC(0x4)
	struct UNavigationQueryFilter* FilterClass; // 0xD0(0x8)
	float ObservedBlackboardValueTolerance; // 0xD8(0x4)
	uint8_t bObserveBlackboardValue : 1; // 0xDC(0x1), Mask(0x1)
	uint8_t bAllowStrafe : 1; // 0xDC(0x1), Mask(0x2)
	uint8_t bAllowPartialPath : 1; // 0xDC(0x1), Mask(0x4)
	uint8_t bTrackMovingGoal : 1; // 0xDC(0x1), Mask(0x8)
	uint8_t bProjectGoalLocation : 1; // 0xDC(0x1), Mask(0x10)
	uint8_t bReachTestIncludesAgentRadius : 1; // 0xDC(0x1), Mask(0x20)
	uint8_t bReachTestIncludesGoalRadius : 1; // 0xDC(0x1), Mask(0x40)
	uint8_t BitPad_0xDC_7 : 1; // 0xDC(0x1)
	uint8_t bTestPathDuringPlanning : 1; // 0xDD(0x1), Mask(0x1)
	uint8_t bUsePathCostInsteadOfLength : 1; // 0xDD(0x1), Mask(0x2)
	uint8_t bForcePlanTimeStringPulling : 1; // 0xDD(0x1), Mask(0x4)
	uint8_t BitPad_0xDD_3 : 5; // 0xDD(0x1)
	uint8_t Pad_0xDE[0x2]; // 0xDE(0x2)
	float CostPerUnitPathLength; // 0xE0(0x4)
	uint8_t Pad_0xE4[0x4]; // 0xE4(0x4)
};

// Object: Class HTN.HTNTask_SetValue
// Size: 0x108 (Inherited: 0xC8)
struct UHTNTask_SetValue : UHTNTask_BlackboardBase
{
	DEFINE_UE_CLASS_HELPERS(UHTNTask_SetValue, "HTNTask_SetValue")

	struct FWorldstateSetValueContainer Value; // 0xC8(0x40)
};

// Object: Class HTN.HTNTask_Success
// Size: 0xA0 (Inherited: 0xA0)
struct UHTNTask_Success : UHTNTask
{
	DEFINE_UE_CLASS_HELPERS(UHTNTask_Success, "HTNTask_Success")

	int32_t Cost; // 0x9C(0x4)
};

// Object: Class HTN.HTNTask_Wait
// Size: 0xA8 (Inherited: 0xA0)
struct UHTNTask_Wait : UHTNTask
{
	DEFINE_UE_CLASS_HELPERS(UHTNTask_Wait, "HTNTask_Wait")

	float WaitTime; // 0x9C(0x4)
	float RandomDeviation; // 0xA0(0x4)
};

// Object: Class HTN.WorldStateProxy
// Size: 0x48 (Inherited: 0x28)
struct UWorldStateProxy : UObject
{
	DEFINE_UE_CLASS_HELPERS(UWorldStateProxy, "WorldStateProxy")

	struct UBrainComponent* Owner; // 0x28(0x8)
	uint8_t Pad_0x30[0x10]; // 0x30(0x10)
	uint8_t bIsEditable : 1; // 0x40(0x1), Mask(0x1)
	uint8_t BitPad_0x40_1 : 7; // 0x40(0x1)
	uint8_t Pad_0x41[0x7]; // 0x41(0x7)

	// Object: Function HTN.WorldStateProxy.SetValueAsVector
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable]
	// Offset: 0x797ecb0
	// Params: [ Num(2) Size(0x14) ]
	void SetValueAsVector(const struct FName& KeyName, struct FVector Value);

	// Object: Function HTN.WorldStateProxy.SetValueAsString
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x797eb6c
	// Params: [ Num(2) Size(0x18) ]
	void SetValueAsString(const struct FName& KeyName, struct FString Value);

	// Object: Function HTN.WorldStateProxy.SetValueAsRotator
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable]
	// Offset: 0x797ea7c
	// Params: [ Num(2) Size(0x14) ]
	void SetValueAsRotator(const struct FName& KeyName, struct FRotator Value);

	// Object: Function HTN.WorldStateProxy.SetValueAsObject
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x797e98c
	// Params: [ Num(2) Size(0x10) ]
	void SetValueAsObject(const struct FName& KeyName, struct UObject* Value);

	// Object: Function HTN.WorldStateProxy.SetValueAsName
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x797e89c
	// Params: [ Num(2) Size(0x10) ]
	void SetValueAsName(const struct FName& KeyName, struct FName Value);

	// Object: Function HTN.WorldStateProxy.SetValueAsInt
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x797e7ac
	// Params: [ Num(2) Size(0xC) ]
	void SetValueAsInt(const struct FName& KeyName, int32_t Value);

	// Object: Function HTN.WorldStateProxy.SetValueAsFloat
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x797e6bc
	// Params: [ Num(2) Size(0xC) ]
	void SetValueAsFloat(const struct FName& KeyName, float Value);

	// Object: Function HTN.WorldStateProxy.SetValueAsEnum
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x797e5cc
	// Params: [ Num(2) Size(0x9) ]
	void SetValueAsEnum(const struct FName& KeyName, uint8_t Value);

	// Object: Function HTN.WorldStateProxy.SetValueAsClass
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x797e4dc
	// Params: [ Num(2) Size(0x10) ]
	void SetValueAsClass(const struct FName& KeyName, struct UObject* Value);

	// Object: Function HTN.WorldStateProxy.SetValueAsBool
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x797e3e4
	// Params: [ Num(2) Size(0x9) ]
	void SetValueAsBool(const struct FName& KeyName, uint8_t Value);

	// Object: Function HTN.WorldStateProxy.IsVectorValueSet
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x797e324
	// Params: [ Num(2) Size(0x9) ]
	uint8_t IsVectorValueSet(const struct FName& KeyName);

	// Object: Function HTN.WorldStateProxy.GetValueAsVector
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x797e264
	// Params: [ Num(2) Size(0x14) ]
	struct FVector GetValueAsVector(const struct FName& KeyName);

	// Object: Function HTN.WorldStateProxy.GetValueAsString
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x797e174
	// Params: [ Num(2) Size(0x18) ]
	struct FString GetValueAsString(const struct FName& KeyName);

	// Object: Function HTN.WorldStateProxy.GetValueAsRotator
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x797e0b4
	// Params: [ Num(2) Size(0x14) ]
	struct FRotator GetValueAsRotator(const struct FName& KeyName);

	// Object: Function HTN.WorldStateProxy.GetValueAsObject
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x797dff8
	// Params: [ Num(2) Size(0x10) ]
	struct UObject* GetValueAsObject(const struct FName& KeyName);

	// Object: Function HTN.WorldStateProxy.GetValueAsName
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x797df3c
	// Params: [ Num(2) Size(0x10) ]
	struct FName GetValueAsName(const struct FName& KeyName);

	// Object: Function HTN.WorldStateProxy.GetValueAsInt
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x797de80
	// Params: [ Num(2) Size(0xC) ]
	int32_t GetValueAsInt(const struct FName& KeyName);

	// Object: Function HTN.WorldStateProxy.GetValueAsFloat
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x797ddc4
	// Params: [ Num(2) Size(0xC) ]
	float GetValueAsFloat(const struct FName& KeyName);

	// Object: Function HTN.WorldStateProxy.GetValueAsEnum
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x797dd08
	// Params: [ Num(2) Size(0x9) ]
	uint8_t GetValueAsEnum(const struct FName& KeyName);

	// Object: Function HTN.WorldStateProxy.GetValueAsClass
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x797dc4c
	// Params: [ Num(2) Size(0x10) ]
	struct UObject* GetValueAsClass(const struct FName& KeyName);

	// Object: Function HTN.WorldStateProxy.GetValueAsBool
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x797db8c
	// Params: [ Num(2) Size(0x9) ]
	uint8_t GetValueAsBool(const struct FName& KeyName);

	// Object: Function HTN.WorldStateProxy.GetValueAsActor
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x797dad0
	// Params: [ Num(2) Size(0x10) ]
	struct AActor* GetValueAsActor(const struct FName& KeyName);

	// Object: Function HTN.WorldStateProxy.GetSelfLocation
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x797da80
	// Params: [ Num(1) Size(0xC) ]
	struct FVector GetSelfLocation();

	// Object: Function HTN.WorldStateProxy.GetRotationFromEntry
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x797d970
	// Params: [ Num(3) Size(0x15) ]
	uint8_t GetRotationFromEntry(const struct FName& KeyName, struct FRotator& ResultRotation);

	// Object: Function HTN.WorldStateProxy.GetLocationFromEntry
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x797d860
	// Params: [ Num(3) Size(0x15) ]
	uint8_t GetLocationFromEntry(const struct FName& KeyName, struct FVector& ResultLocation);

	// Object: Function HTN.WorldStateProxy.GetLocation
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x797d6f0
	// Params: [ Num(4) Size(0x41) ]
	uint8_t GetLocation(const struct FBlackboardKeySelector& KeySelector, struct FVector& OutLocation, struct AActor*& OutActor);

	// Object: Function HTN.WorldStateProxy.ClearValue
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x797d63c
	// Params: [ Num(1) Size(0x8) ]
	void ClearValue(const struct FName& KeyName);
};

} // namespace SDK
