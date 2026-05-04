#pragma once

#include "../CoreUObject_classes.hpp"
#include "AIModule.hpp"
#include "Engine.hpp"

namespace SDK
{

// Package: BlueprintNodeTemplate
// Enums: 1
// Structs: 2
// Classes: 5

struct AAIController;
struct AActor;
struct APawn;
struct APlayerController;
enum class ESpawnActorCollisionHandlingMethod : uint8_t;
struct UUserWidget;
struct UWorld;
struct FAITask_TickFunction;
struct FBlueprintTaskTickFunction;
struct UBlueprintAITaskTemplate;
struct UBlueprintAITaskTemplate_Tickable;
struct UBlueprintTaskTemplate;
struct UBlueprintTaskTemplateTickable;
struct UExtendConstructObject_FnLib;

// Object: Enum BlueprintNodeTemplate.ETickPrerequisite_BP
enum class ETickPrerequisite_BP : uint8_t
{
	IndependentTick = 0,
	TickBeforeOwner = 1,
	TickAfterOwner = 2,
	ETickPrerequisite_MAX = 3
};

// Object: ScriptStruct BlueprintNodeTemplate.AITask_TickFunction
// Size: 0x68 (Inherited: 0x60)
struct FAITask_TickFunction : FTickFunction
{
	uint8_t Pad_0x60[0x8]; // 0x60(0x8)
};

// Object: ScriptStruct BlueprintNodeTemplate.BlueprintTaskTickFunction
// Size: 0x68 (Inherited: 0x60)
struct FBlueprintTaskTickFunction : FTickFunction
{
	uint8_t Pad_0x60[0x8]; // 0x60(0x8)
};

// Object: Class BlueprintNodeTemplate.BlueprintAITaskTemplate
// Size: 0xB8 (Inherited: 0x68)
struct UBlueprintAITaskTemplate : UAITask
{
	uint8_t IsPausable : 1; // 0x68(0x1), Mask(0x1)
	uint8_t BitPad_0x68_1 : 7; // 0x68(0x1)
	uint8_t Pad_0x69[0x7]; // 0x69(0x7)
	struct FMulticastInlineDelegate OnStartTaskDelegate; // 0x70(0x10)
	struct FMulticastInlineDelegate OnPauseTaskDelegate; // 0x80(0x10)
	struct FMulticastInlineDelegate OnResumeTaskDelegate; // 0x90(0x10)
	struct FMulticastInlineDelegate OnEndTaskDelegate; // 0xA0(0x10)
	struct UWorld* WorldPrivate; // 0xB0(0x8)


	// Object: Function BlueprintNodeTemplate.BlueprintAITaskTemplate.StartTask
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x791c888
	// Params: [ Num(0) Size(0x0) ]
	void StartTask();

	// Object: Function BlueprintNodeTemplate.BlueprintAITaskTemplate.ResumeTask
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x791c874
	// Params: [ Num(0) Size(0x0) ]
	void ResumeTask();

	// Object: Function BlueprintNodeTemplate.BlueprintAITaskTemplate.PauseTask
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x791c860
	// Params: [ Num(0) Size(0x0) ]
	void PauseTask();

	// Object: Function BlueprintNodeTemplate.BlueprintAITaskTemplate.On_StartTask_BP
	// Flags: [Event|Protected|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(0) Size(0x0) ]
	void On_StartTask_BP();

	// Object: Function BlueprintNodeTemplate.BlueprintAITaskTemplate.On_ResumeTask_BP
	// Flags: [Event|Protected|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(0) Size(0x0) ]
	void On_ResumeTask_BP();

	// Object: Function BlueprintNodeTemplate.BlueprintAITaskTemplate.On_PauseTask_BP
	// Flags: [Event|Protected|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(0) Size(0x0) ]
	void On_PauseTask_BP();

	// Object: Function BlueprintNodeTemplate.BlueprintAITaskTemplate.On_EndTask_BP
	// Flags: [Event|Protected|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(0) Size(0x0) ]
	void On_EndTask_BP();

	// Object: Function BlueprintNodeTemplate.BlueprintAITaskTemplate.GetPawn
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x791c82c
	// Params: [ Num(1) Size(0x8) ]
	struct APawn* GetPawn();

	// Object: Function BlueprintNodeTemplate.BlueprintAITaskTemplate.GetAIController_BP
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x791c7f8
	// Params: [ Num(1) Size(0x8) ]
	struct AAIController* GetAIController_BP();

	// Object: Function BlueprintNodeTemplate.BlueprintAITaskTemplate.ExtendConstructAiTask
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x791c71c
	// Params: [ Num(3) Size(0x18) ]
	static struct UBlueprintAITaskTemplate* ExtendConstructAiTask(struct AAIController* Controller, struct UBlueprintAITaskTemplate* Class);

	// Object: Function BlueprintNodeTemplate.BlueprintAITaskTemplate.EndTask_BP
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x791c708
	// Params: [ Num(0) Size(0x0) ]
	void EndTask_BP();
	DEFINE_UE_CLASS_HELPERS(UBlueprintAITaskTemplate, "BlueprintAITaskTemplate")

};

// Object: Class BlueprintNodeTemplate.BlueprintAITaskTemplate_Tickable
// Size: 0x128 (Inherited: 0xB8)
struct UBlueprintAITaskTemplate_Tickable : UBlueprintAITaskTemplate
{
	struct FAITask_TickFunction TickFunc; // 0xB8(0x68)
	ETickPrerequisite_BP TickPrerequisite; // 0x120(0x1)
	uint8_t bIsTickPausable : 1; // 0x121(0x1), Mask(0x1)
	uint8_t BitPad_0x121_1 : 7; // 0x121(0x1)
	uint8_t Pad_0x122[0x6]; // 0x122(0x6)


	// Object: Function BlueprintNodeTemplate.BlueprintAITaskTemplate_Tickable.UnRegTick
	// Flags: [Final|Native|Protected]
	// Offset: 0x791cab8
	// Params: [ Num(0) Size(0x0) ]
	void UnRegTick();

	// Object: Function BlueprintNodeTemplate.BlueprintAITaskTemplate_Tickable.UnPauseTick
	// Flags: [Final|Native|Protected]
	// Offset: 0x791caa4
	// Params: [ Num(0) Size(0x0) ]
	void UnPauseTick();

	// Object: Function BlueprintNodeTemplate.BlueprintAITaskTemplate_Tickable.SetTickEnable
	// Flags: [Final|Native|Protected|BlueprintCallable]
	// Offset: 0x791c9f8
	// Params: [ Num(1) Size(0x1) ]
	void SetTickEnable(uint8_t bEnable);

	// Object: Function BlueprintNodeTemplate.BlueprintAITaskTemplate_Tickable.RegTick
	// Flags: [Final|Native|Protected]
	// Offset: 0x791c9e4
	// Params: [ Num(0) Size(0x0) ]
	void RegTick();

	// Object: Function BlueprintNodeTemplate.BlueprintAITaskTemplate_Tickable.ReceiveTick
	// Flags: [Event|Protected|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(1) Size(0x4) ]
	void ReceiveTick(float DeltaSeconds);

	// Object: Function BlueprintNodeTemplate.BlueprintAITaskTemplate_Tickable.PauseTick
	// Flags: [Final|Native|Protected]
	// Offset: 0x791c9d0
	// Params: [ Num(0) Size(0x0) ]
	void PauseTick();
	DEFINE_UE_CLASS_HELPERS(UBlueprintAITaskTemplate_Tickable, "BlueprintAITaskTemplate_Tickable")

};

// Object: Class BlueprintNodeTemplate.BlueprintTaskTemplate
// Size: 0x30 (Inherited: 0x28)
struct UBlueprintTaskTemplate : UObject
{
	struct UWorld* WorldPrivate; // 0x28(0x8)


	// Object: Function BlueprintNodeTemplate.BlueprintTaskTemplate.BlueprintTaskTemplate
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x791cbf0
	// Params: [ Num(3) Size(0x18) ]
	static struct UBlueprintTaskTemplate* BlueprintTaskTemplate(struct UObject* Outer, struct UBlueprintTaskTemplate* Class);

	// Object: Function BlueprintNodeTemplate.BlueprintTaskTemplate.Activate_BP
	// Flags: [Event|Protected|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(0) Size(0x0) ]
	void Activate_BP();

	// Object: Function BlueprintNodeTemplate.BlueprintTaskTemplate.Activate
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x791cbd4
	// Params: [ Num(0) Size(0x0) ]
	void Activate();
	DEFINE_UE_CLASS_HELPERS(UBlueprintTaskTemplate, "BlueprintTaskTemplate")

};

// Object: Class BlueprintNodeTemplate.BlueprintTaskTemplateTickable
// Size: 0xA0 (Inherited: 0x30)
struct UBlueprintTaskTemplateTickable : UBlueprintTaskTemplate
{
	struct FBlueprintTaskTickFunction TickFunc; // 0x30(0x68)
	ETickPrerequisite_BP TickPrerequisite; // 0x98(0x1)
	uint8_t Pad_0x99[0x7]; // 0x99(0x7)


	// Object: Function BlueprintNodeTemplate.BlueprintTaskTemplateTickable.SetTickEnable
	// Flags: [Final|Native|Protected|BlueprintCallable]
	// Offset: 0x791ce50
	// Params: [ Num(1) Size(0x1) ]
	void SetTickEnable(uint8_t bEnable);

	// Object: Function BlueprintNodeTemplate.BlueprintTaskTemplateTickable.ReceiveTick
	// Flags: [Event|Protected|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(1) Size(0x4) ]
	void ReceiveTick(float DeltaSeconds);
	DEFINE_UE_CLASS_HELPERS(UBlueprintTaskTemplateTickable, "BlueprintTaskTemplateTickable")

};

// Object: Class BlueprintNodeTemplate.ExtendConstructObject_FnLib
// Size: 0x28 (Inherited: 0x28)
struct UExtendConstructObject_FnLib : UBlueprintFunctionLibrary
{

	// Object: Function BlueprintNodeTemplate.ExtendConstructObject_FnLib.ExtendSpawnActor
	// Flags: [Final|Native|Static|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x791d104
	// Params: [ Num(5) Size(0x50) ]
	static struct AActor* ExtendSpawnActor(struct UObject* WorldContextObject, struct AActor* Class, struct FTransform SpawnTransform, ESpawnActorCollisionHandlingMethod CollisionHandling);

	// Object: Function BlueprintNodeTemplate.ExtendConstructObject_FnLib.ExtendConstructWidget
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x791cfec
	// Params: [ Num(4) Size(0x20) ]
	static struct UUserWidget* ExtendConstructWidget(struct UObject* WorldContextObject, struct UUserWidget* Class, struct APlayerController* OwningPlayer);

	// Object: Function BlueprintNodeTemplate.ExtendConstructObject_FnLib.ExtendConstructObject
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x791cf10
	// Params: [ Num(3) Size(0x18) ]
	static struct UObject* ExtendConstructObject(struct UObject* Outer, struct UObject* Class);
	DEFINE_UE_CLASS_HELPERS(UExtendConstructObject_FnLib, "ExtendConstructObject_FnLib")

};

} // namespace SDK
