#pragma once

#include "../CoreUObject_classes.hpp"
#include "Engine.hpp"

namespace SDK
{

// Package: GPAbilityBase
// Enums: 0
// Structs: 0
// Classes: 2

struct AActor;
struct UGPAbilityManager;
struct UGPSkillComponentBase;

// Object: Class GPAbilityBase.GPAbilityManager
// Size: 0x68 (Inherited: 0x30)
struct UGPAbilityManager : UWorldSubsystem
{
	uint8_t Pad_0x30[0x18]; // 0x30(0x18)
	struct TArray<struct TWeakObjectPtr<struct AActor>> RegisteredAbilityActors; // 0x48(0x10)
	struct TArray<struct TWeakObjectPtr<struct UGPSkillComponentBase>> RegisteredSkillComponents; // 0x58(0x10)


	// Object: Function GPAbilityBase.GPAbilityManager.UnRegisterSkillComponent
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x8f6a2f0
	// Params: [ Num(1) Size(0x8) ]
	void UnRegisterSkillComponent(struct UGPSkillComponentBase* SkillComponent);

	// Object: Function GPAbilityBase.GPAbilityManager.UnRegisterAbilityActor
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x8f6a24c
	// Params: [ Num(1) Size(0x8) ]
	void UnRegisterAbilityActor(struct AActor* Actor);

	// Object: Function GPAbilityBase.GPAbilityManager.ResetAllAbility
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x8f6a238
	// Params: [ Num(0) Size(0x0) ]
	void ResetAllAbility();

	// Object: Function GPAbilityBase.GPAbilityManager.RegisterSkillComponent
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x8f6a194
	// Params: [ Num(1) Size(0x8) ]
	void RegisterSkillComponent(struct UGPSkillComponentBase* SkillComponent);

	// Object: Function GPAbilityBase.GPAbilityManager.RegisterAbilityActor
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x8f6a0f0
	// Params: [ Num(1) Size(0x8) ]
	void RegisterAbilityActor(struct AActor* Actor);

	// Object: Function GPAbilityBase.GPAbilityManager.GetRegisteredSkillComponentCount
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x8f6a0d4
	// Params: [ Num(1) Size(0x4) ]
	int32_t GetRegisteredSkillComponentCount();

	// Object: Function GPAbilityBase.GPAbilityManager.GetRegisteredAbilityActorCount
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x8f6a0b8
	// Params: [ Num(1) Size(0x4) ]
	int32_t GetRegisteredAbilityActorCount();

	// Object: Function GPAbilityBase.GPAbilityManager.Get
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x8f6a014
	// Params: [ Num(2) Size(0x10) ]
	static struct UGPAbilityManager* Get(struct UObject* WorldContextObject);

	// Object: Function GPAbilityBase.GPAbilityManager.ClearAllSkills
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x8f6a000
	// Params: [ Num(0) Size(0x0) ]
	void ClearAllSkills();

	// Object: Function GPAbilityBase.GPAbilityManager.ClearAllAbilityActors
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x8f69fec
	// Params: [ Num(0) Size(0x0) ]
	void ClearAllAbilityActors();

	// Object: Function GPAbilityBase.GPAbilityManager.ClearAllAbility
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x8f69fd8
	// Params: [ Num(0) Size(0x0) ]
	void ClearAllAbility();
	DEFINE_UE_CLASS_HELPERS(UGPAbilityManager, "GPAbilityManager")

};

// Object: Class GPAbilityBase.GPSkillComponentBase
// Size: 0xF8 (Inherited: 0xF8)
struct UGPSkillComponentBase : UActorComponent
{

	// Object: Function GPAbilityBase.GPSkillComponentBase.ReAddRelativeSkill
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0x8f6a938
	// Params: [ Num(0) Size(0x0) ]
	void ReAddRelativeSkill();

	// Object: Function GPAbilityBase.GPSkillComponentBase.EndAllSkills
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0x8f6a91c
	// Params: [ Num(0) Size(0x0) ]
	void EndAllSkills();
	DEFINE_UE_CLASS_HELPERS(UGPSkillComponentBase, "GPSkillComponentBase")

};

} // namespace SDK
