#pragma once

#include "../CoreUObject_classes.hpp"
#include "Engine.hpp"
#include "GPWeaponDefineForPlugin.hpp"

namespace SDK
{

// Package: GPWeaponFSM
// Enums: 2
// Structs: 7
// Classes: 7

struct FGotoStateCmd;
struct FNameArray;
struct FStateTransitions;
struct FRTStateTransition;
struct FRTStateTransitionSourceConditionFinish;
struct FRTStateTransitionSourceFinish;
struct FRTStateTransitionEventHit;
struct UGPFSMBase;
struct UGPFSMStateBase;
struct UGPFSMBlueprint;
struct UStateTransition;
struct UStateTransitionSourceFinish;
struct UStateTransitionSourceConditionFinish;
struct UStateTransitionEventHit;

// Object: Enum GPWeaponFSM.EEventEnumBase
enum class EEventEnumBase : uint8_t
{
	EBeginJump = 0,
	EStartRun = 1,
	EOnHit = 2,
	EEventEnumBase_MAX = 3
};

// Object: Enum GPWeaponFSM.EStateEnumBase
enum class EStateEnumBase : uint8_t
{
	EBegin = 0,
	ERunning = 1,
	EFinish = 2,
	EStateEnumBase_MAX = 3
};

// Object: ScriptStruct GPWeaponFSM.GotoStateCmd
// Size: 0x20 (Inherited: 0x0)
struct FGotoStateCmd
{
	struct FName NewStateName; // 0x0(0x8)
	struct FName EventName; // 0x8(0x8)
	struct FGPWeaponEventDataBase EventObject; // 0x10(0x8)
	uint8_t Force : 1; // 0x18(0x1), Mask(0x1)
	uint8_t BitPad_0x18_1 : 7; // 0x18(0x1)
	uint8_t Pad_0x19[0x7]; // 0x19(0x7)
};

// Object: ScriptStruct GPWeaponFSM.NameArray
// Size: 0x10 (Inherited: 0x0)
struct FNameArray
{
	uint8_t Pad_0x0[0x10]; // 0x0(0x10)
};

// Object: ScriptStruct GPWeaponFSM.StateTransitions
// Size: 0x38 (Inherited: 0x0)
struct FStateTransitions
{
	uint8_t Pad_0x0[0x8]; // 0x0(0x8)
	struct TArray<struct FRTStateTransitionEventHit> TransEventHits; // 0x8(0x10)
	struct TArray<struct FRTStateTransitionSourceFinish> TransSourceFinishes; // 0x18(0x10)
	struct TArray<struct FRTStateTransitionSourceConditionFinish> TransSourceConditionFinishes; // 0x28(0x10)
};

// Object: ScriptStruct GPWeaponFSM.RTStateTransition
// Size: 0x18 (Inherited: 0x0)
struct FRTStateTransition
{
	uint8_t Pad_0x0[0x8]; // 0x0(0x8)
	struct FName SourceState; // 0x8(0x8)
	struct FName TargetState; // 0x10(0x8)
};

// Object: ScriptStruct GPWeaponFSM.RTStateTransitionSourceConditionFinish
// Size: 0x28 (Inherited: 0x18)
struct FRTStateTransitionSourceConditionFinish : FRTStateTransition
{
	uint8_t bOverrideTargetState : 1; // 0x18(0x1), Mask(0x1)
	uint8_t BitPad_0x18_1 : 7; // 0x18(0x1)
	uint8_t Pad_0x19[0x3]; // 0x19(0x3)
	struct FName OverrideTargetState; // 0x1C(0x8)
	uint8_t Pad_0x24[0x4]; // 0x24(0x4)
};

// Object: ScriptStruct GPWeaponFSM.RTStateTransitionSourceFinish
// Size: 0x18 (Inherited: 0x18)
struct FRTStateTransitionSourceFinish : FRTStateTransition
{
};

// Object: ScriptStruct GPWeaponFSM.RTStateTransitionEventHit
// Size: 0x20 (Inherited: 0x18)
struct FRTStateTransitionEventHit : FRTStateTransition
{
	struct FName HitEventName; // 0x18(0x8)
};

// Object: Class GPWeaponFSM.GPFSMBase
// Size: 0x2D0 (Inherited: 0x28)
struct UGPFSMBase : UObject
{
	DEFINE_UE_CLASS_HELPERS(UGPFSMBase, "GPFSMBase")

	uint8_t Pad_0x28[0x20]; // 0x28(0x20)
	struct UGPFSMStateBase* CurrentStateInstance; // 0x48(0x8)
	uint8_t Pad_0x50[0x8]; // 0x50(0x8)
	struct FName EntryState; // 0x58(0x8)
	struct TMap<struct FName, struct UGPFSMStateBase*> StateClassMap; // 0x60(0x50)
	struct TMap<int64_t, struct FName> StateNameMap; // 0xB0(0x50)
	struct TMap<struct FName, struct UGPFSMStateBase*> StateInstanceMap; // 0x100(0x50)
	uint8_t Pad_0x150[0x8]; // 0x150(0x8)
	struct TMap<int64_t, struct FName> EventNameMap; // 0x158(0x50)
	uint8_t Pad_0x1A8[0x8]; // 0x1A8(0x8)
	struct TArray<struct FName> FSMStateList; // 0x1B0(0x10)
	struct TMap<struct FName, struct FStateTransitions> FSMStateTransitionMap; // 0x1C0(0x50)
	struct TMap<struct FName, struct FName> FSMAnyStateTransitionMap; // 0x210(0x50)
	struct TMap<struct FName, struct FNameArray> FSMAnyStateTransitionBlacklist; // 0x260(0x50)
	uint8_t Pad_0x2B0[0x10]; // 0x2B0(0x10)
	struct TArray<struct FGotoStateCmd> GotoStateCmdQue; // 0x2C0(0x10)
};

// Object: Class GPWeaponFSM.GPFSMStateBase
// Size: 0x60 (Inherited: 0x28)
struct UGPFSMStateBase : UObject
{
	DEFINE_UE_CLASS_HELPERS(UGPFSMStateBase, "GPFSMStateBase")

	struct UGPFSMBase* FSM; // 0x28(0x8)
	uint8_t Pad_0x30[0x30]; // 0x30(0x30)
};

// Object: Class GPWeaponFSM.GPFSMBlueprint
// Size: 0xA0 (Inherited: 0xA0)
struct UGPFSMBlueprint : UBlueprint
{
	DEFINE_UE_CLASS_HELPERS(UGPFSMBlueprint, "GPFSMBlueprint")
};

// Object: Class GPWeaponFSM.StateTransition
// Size: 0x38 (Inherited: 0x28)
struct UStateTransition : UObject
{
	DEFINE_UE_CLASS_HELPERS(UStateTransition, "StateTransition")

	struct FName SourceState; // 0x28(0x8)
	struct FName TargetState; // 0x30(0x8)
};

// Object: Class GPWeaponFSM.StateTransitionSourceFinish
// Size: 0x38 (Inherited: 0x38)
struct UStateTransitionSourceFinish : UStateTransition
{
	DEFINE_UE_CLASS_HELPERS(UStateTransitionSourceFinish, "StateTransitionSourceFinish")
};

// Object: Class GPWeaponFSM.StateTransitionSourceConditionFinish
// Size: 0x38 (Inherited: 0x38)
struct UStateTransitionSourceConditionFinish : UStateTransition
{
	DEFINE_UE_CLASS_HELPERS(UStateTransitionSourceConditionFinish, "StateTransitionSourceConditionFinish")
};

// Object: Class GPWeaponFSM.StateTransitionEventHit
// Size: 0x40 (Inherited: 0x38)
struct UStateTransitionEventHit : UStateTransition
{
	DEFINE_UE_CLASS_HELPERS(UStateTransitionEventHit, "StateTransitionEventHit")

	struct FName HitEventName; // 0x38(0x8)
};

} // namespace SDK
