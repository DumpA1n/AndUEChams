#pragma once

#include "../CoreUObject_classes.hpp"
#include "Engine.hpp"

namespace SDK
{

// Package: GameplayTasks
// Enums: 3
// Structs: 1
// Classes: 8

struct AActor;
struct FGameplayResourceSet;
struct UGameplayTasksComponent;
struct UGameplayTask;
struct UGameplayTask_ClaimResource;
struct UGameplayTask_SpawnActor;
struct UGameplayTask_TimeLimitedExecution;
struct UGameplayTask_WaitDelay;
struct IGameplayTaskOwnerInterface;
struct UGameplayTaskResource;

// Object: Enum GameplayTasks.ETaskResourceOverlapPolicy
enum class ETaskResourceOverlapPolicy : uint8_t
{
	StartOnTop = 0,
	StartAtEnd = 1,
	ETaskResourceOverlapPolicy_MAX = 2
};

// Object: Enum GameplayTasks.EGameplayTaskRunResult
enum class EGameplayTaskRunResult : uint8_t
{
	Error = 0,
	Failed = 1,
	Success_Paused = 2,
	Success_Active = 3,
	Success_Finished = 4,
	EGameplayTaskRunResult_MAX = 5
};

// Object: Enum GameplayTasks.EGameplayTaskState
enum class EGameplayTaskState : uint8_t
{
	Uninitialized = 0,
	AwaitingActivation = 1,
	Paused = 2,
	Active = 3,
	Finished = 4,
	EGameplayTaskState_MAX = 5
};

// Object: ScriptStruct GameplayTasks.GameplayResourceSet
// Size: 0x2 (Inherited: 0x0)
struct FGameplayResourceSet
{
	uint8_t Pad_0x0[0x2]; // 0x0(0x2)
};

// Object: Class GameplayTasks.GameplayTasksComponent
// Size: 0x150 (Inherited: 0xE0)
struct UGameplayTasksComponent : UActorComponent
{
	DEFINE_UE_CLASS_HELPERS(UGameplayTasksComponent, "GameplayTasksComponent")

	uint8_t Pad_0xE0[0xC]; // 0xE0(0xC)
	uint8_t BitPad_0xEC_0 : 1; // 0xEC(0x1)
	uint8_t bIsNetDirty : 1; // 0xEC(0x1), Mask(0x2)
	uint8_t BitPad_0xEC_2 : 6; // 0xEC(0x1)
	uint8_t Pad_0xED[0x3]; // 0xED(0x3)
	struct TArray<struct UGameplayTask*> SimulatedTasks; // 0xF0(0x10)
	struct TArray<struct UGameplayTask*> TaskPriorityQueue; // 0x100(0x10)
	uint8_t Pad_0x110[0x10]; // 0x110(0x10)
	struct TArray<struct UGameplayTask*> TickingTasks; // 0x120(0x10)
	struct TArray<struct UGameplayTask*> KnownTasks; // 0x130(0x10)
	struct FMulticastInlineDelegate OnClaimedResourcesChange; // 0x140(0x10)

	// Object: Function GameplayTasks.GameplayTasksComponent.OnRep_SimulatedTasks
	// Flags: [Final|Native|Public]
	// Offset: 0xbdecf64
	// Params: [ Num(0) Size(0x0) ]
	void OnRep_SimulatedTasks();

	// Object: Function GameplayTasks.GameplayTasksComponent.K2_RunGameplayTask
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0xbdeccf0
	// Params: [ Num(6) Size(0x41) ]
	static EGameplayTaskRunResult K2_RunGameplayTask(struct TScriptInterface<IGameplayTaskOwnerInterface> TaskOwner, struct UGameplayTask* Task, uint8_t Priority, struct TArray<struct UGameplayTaskResource*> AdditionalRequiredResources, struct TArray<struct UGameplayTaskResource*> AdditionalClaimedResources);
};

// Object: Class GameplayTasks.GameplayTask
// Size: 0x60 (Inherited: 0x28)
struct UGameplayTask : UObject
{
	DEFINE_UE_CLASS_HELPERS(UGameplayTask, "GameplayTask")

	uint8_t Pad_0x28[0x8]; // 0x28(0x8)
	struct FName InstanceName; // 0x30(0x8)
	uint8_t Pad_0x38[0x2]; // 0x38(0x2)
	ETaskResourceOverlapPolicy ResourceOverlapPolicy; // 0x3A(0x1)
	uint8_t Pad_0x3B[0x1D]; // 0x3B(0x1D)
	struct UGameplayTask* ChildTask; // 0x58(0x8)

	// Object: Function GameplayTasks.GameplayTask.ReadyForActivation
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x8b44980
	// Params: [ Num(0) Size(0x0) ]
	void ReadyForActivation();

	// Object: DelegateFunction GameplayTasks.GameplayTask.GenericGameplayTaskDelegate__DelegateSignature
	// Flags: [MulticastDelegate|Public|Delegate]
	// Offset: 0x5d8cbc8
	// Params: [ Num(0) Size(0x0) ]
	void GenericGameplayTaskDelegate__DelegateSignature();

	// Object: Function GameplayTasks.GameplayTask.EndTask
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xbdec3d8
	// Params: [ Num(0) Size(0x0) ]
	void EndTask();
};

// Object: Class GameplayTasks.GameplayTask_ClaimResource
// Size: 0x60 (Inherited: 0x60)
struct UGameplayTask_ClaimResource : UGameplayTask
{
	DEFINE_UE_CLASS_HELPERS(UGameplayTask_ClaimResource, "GameplayTask_ClaimResource")

	// Object: Function GameplayTasks.GameplayTask_ClaimResource.ClaimResources
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0xbdec3f4
	// Params: [ Num(5) Size(0x38) ]
	static struct UGameplayTask_ClaimResource* ClaimResources(struct TScriptInterface<IGameplayTaskOwnerInterface> InTaskOwner, struct TArray<struct UGameplayTaskResource*> ResourceClasses, uint8_t Priority, struct FName TaskInstanceName);

	// Object: Function GameplayTasks.GameplayTask_ClaimResource.ClaimResource
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0xbdec5c4
	// Params: [ Num(5) Size(0x30) ]
	static struct UGameplayTask_ClaimResource* ClaimResource(struct TScriptInterface<IGameplayTaskOwnerInterface> InTaskOwner, struct UGameplayTaskResource* ResourceClass, uint8_t Priority, struct FName TaskInstanceName);
};

// Object: Class GameplayTasks.GameplayTask_SpawnActor
// Size: 0xA0 (Inherited: 0x60)
struct UGameplayTask_SpawnActor : UGameplayTask
{
	DEFINE_UE_CLASS_HELPERS(UGameplayTask_SpawnActor, "GameplayTask_SpawnActor")

	struct FMulticastInlineDelegate Success; // 0x60(0x10)
	struct FMulticastInlineDelegate DidNotSpawn; // 0x70(0x10)
	uint8_t Pad_0x80[0x18]; // 0x80(0x18)
	struct AActor* ClassToSpawn; // 0x98(0x8)

	// Object: Function GameplayTasks.GameplayTask_SpawnActor.SpawnActor
	// Flags: [Final|Native|Static|Public|HasDefaults|BlueprintCallable]
	// Offset: 0xbdec938
	// Params: [ Num(6) Size(0x40) ]
	static struct UGameplayTask_SpawnActor* SpawnActor(struct TScriptInterface<IGameplayTaskOwnerInterface> TaskOwner, struct FVector SpawnLocation, struct FRotator SpawnRotation, struct AActor* Class, bool bSpawnOnlyOnAuthority);

	// Object: Function GameplayTasks.GameplayTask_SpawnActor.FinishSpawningActor
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0xbdec744
	// Params: [ Num(2) Size(0x10) ]
	void FinishSpawningActor(struct UObject* WorldContextObject, struct AActor* SpawnedActor);

	// Object: Function GameplayTasks.GameplayTask_SpawnActor.BeginSpawningActor
	// Flags: [Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0xbdec830
	// Params: [ Num(3) Size(0x11) ]
	bool BeginSpawningActor(struct UObject* WorldContextObject, struct AActor*& SpawnedActor);
};

// Object: Class GameplayTasks.GameplayTask_TimeLimitedExecution
// Size: 0x90 (Inherited: 0x60)
struct UGameplayTask_TimeLimitedExecution : UGameplayTask
{
	DEFINE_UE_CLASS_HELPERS(UGameplayTask_TimeLimitedExecution, "GameplayTask_TimeLimitedExecution")

	struct FMulticastInlineDelegate OnFinished; // 0x60(0x10)
	struct FMulticastInlineDelegate OnTimeExpired; // 0x70(0x10)
	uint8_t Pad_0x80[0x10]; // 0x80(0x10)
};

// Object: Class GameplayTasks.GameplayTask_WaitDelay
// Size: 0x78 (Inherited: 0x60)
struct UGameplayTask_WaitDelay : UGameplayTask
{
	DEFINE_UE_CLASS_HELPERS(UGameplayTask_WaitDelay, "GameplayTask_WaitDelay")

	struct FMulticastInlineDelegate OnFinish; // 0x60(0x10)
	uint8_t Pad_0x70[0x8]; // 0x70(0x8)

	// Object: Function GameplayTasks.GameplayTask_WaitDelay.TaskWaitDelay
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0xbdecb24
	// Params: [ Num(4) Size(0x20) ]
	static struct UGameplayTask_WaitDelay* TaskWaitDelay(struct TScriptInterface<IGameplayTaskOwnerInterface> TaskOwner, float Time, uint8_t Priority);

	// Object: DelegateFunction GameplayTasks.GameplayTask_WaitDelay.TaskDelayDelegate__DelegateSignature
	// Flags: [MulticastDelegate|Public|Delegate]
	// Offset: 0x5d8cbc8
	// Params: [ Num(0) Size(0x0) ]
	void TaskDelayDelegate__DelegateSignature();
};

// Object: Class GameplayTasks.GameplayTaskOwnerInterface
// Size: 0x28 (Inherited: 0x28)
struct IGameplayTaskOwnerInterface : IInterface
{
	DEFINE_UE_CLASS_HELPERS(IGameplayTaskOwnerInterface, "GameplayTaskOwnerInterface")
};

// Object: Class GameplayTasks.GameplayTaskResource
// Size: 0x30 (Inherited: 0x28)
struct UGameplayTaskResource : UObject
{
	DEFINE_UE_CLASS_HELPERS(UGameplayTaskResource, "GameplayTaskResource")

	int32_t ManualResourceID; // 0x28(0x4)
	int8_t AutoResourceID; // 0x2C(0x1)
	uint8_t bManuallySetID : 1; // 0x2D(0x1), Mask(0x1)
	uint8_t BitPad_0x2D_1 : 7; // 0x2D(0x1)
	uint8_t Pad_0x2E[0x2]; // 0x2E(0x2)
};

} // namespace SDK
