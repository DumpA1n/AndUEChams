#pragma once

#include "../CoreUObject_classes.hpp"
#include "DFMGameplay.hpp"
#include "GPGameplay.hpp"

namespace SDK
{

// Package: DFMFighting
// Enums: 0
// Structs: 0
// Classes: 6

struct ADFMCharacter;
enum class ECharacterFSMEventDefine : uint8_t;
enum class EFSMCharacterState : uint8_t;
struct UDFMFSM_AssassinateCheck_Transition;
struct UDFMFSM_DragRescueCheckAction;
struct UDFMFSM_DragRescueEndAction;
struct UDFMFSM_DragRescueGlobalAction;
struct UDFMFSM_DragRescueStartAction;
struct UDFMFSM_DragRescuingAction;

// Object: Class DFMFighting.DFMFSM_AssassinateCheck_Transition
// Size: 0xB0 (Inherited: 0xB0)
struct UDFMFSM_AssassinateCheck_Transition : UGPFSMTransitionInstance
{	DEFINE_UE_CLASS_HELPERS(UDFMFSM_AssassinateCheck_Transition, "DFMFSM_AssassinateCheck_Transition")

};

// Object: Class DFMFighting.DFMFSM_DragRescueCheckAction
// Size: 0x110 (Inherited: 0x108)
struct UDFMFSM_DragRescueCheckAction : UDFMFSMAction
{
	uint8_t CheckBeginRescue : 1; // 0x108(0x1), Mask(0x1)
	uint8_t BitPad_0x108_1 : 7; // 0x108(0x1)
	uint8_t CheckCancelRescue : 1; // 0x109(0x1), Mask(0x1)
	uint8_t BitPad_0x109_1 : 7; // 0x109(0x1)
	uint8_t Pad_0x10A[0x6]; // 0x10A(0x6)


	// Object: Function DFMFighting.DFMFSM_DragRescueCheckAction.TryRescue
	// Flags: [Final|Native|Public]
	// Offset: 0x14fbc130
	// Params: [ Num(3) Size(0x10) ]
	void TryRescue(ECharacterFSMEventDefine FSMEvent, float Value, struct UObject* EventObject);

	// Object: Function DFMFighting.DFMFSM_DragRescueCheckAction.TryCancel
	// Flags: [Final|Native|Public]
	// Offset: 0x14fbc014
	// Params: [ Num(3) Size(0x10) ]
	void TryCancel(ECharacterFSMEventDefine FSMEvent, float Value, struct UObject* EventObject);
	DEFINE_UE_CLASS_HELPERS(UDFMFSM_DragRescueCheckAction, "DFMFSM_DragRescueCheckAction")

};

// Object: Class DFMFighting.DFMFSM_DragRescueEndAction
// Size: 0x108 (Inherited: 0x108)
struct UDFMFSM_DragRescueEndAction : UDFMFSMAction
{	DEFINE_UE_CLASS_HELPERS(UDFMFSM_DragRescueEndAction, "DFMFSM_DragRescueEndAction")

};

// Object: Class DFMFighting.DFMFSM_DragRescueGlobalAction
// Size: 0x1A0 (Inherited: 0x108)
struct UDFMFSM_DragRescueGlobalAction : UDFMFSMAction
{
	uint8_t Pad_0x108[0x4]; // 0x108(0x4)
	float ForwardOffset; // 0x10C(0x4)
	float MaxZOffset; // 0x110(0x4)
	float TraceSphereRadius; // 0x114(0x4)
	float RescueDistanceThreshold; // 0x118(0x4)
	float FindNearCharacterDistance; // 0x11C(0x4)
	float DownTraceDistance; // 0x120(0x4)
	float NearDragStep; // 0x124(0x4)
	int32_t NearDragMaxCount; // 0x128(0x4)
	uint8_t Pad_0x12C[0x4]; // 0x12C(0x4)
	struct TArray<EFSMCharacterState> InterruptStates; // 0x130(0x10)
	float MaxStateTime; // 0x140(0x4)
	uint8_t Pad_0x144[0x4]; // 0x144(0x4)
	struct ADFMCharacter* Target; // 0x148(0x8)
	uint8_t Pad_0x150[0x3C]; // 0x150(0x3C)
	float ForbidMoveTime; // 0x18C(0x4)
	uint8_t Pad_0x190[0x4]; // 0x190(0x4)
	float YawInterpSpeed; // 0x194(0x4)
	float BeRescueYawInterpSpeed; // 0x198(0x4)
	uint8_t Pad_0x19C[0x4]; // 0x19C(0x4)


	// Object: Function DFMFighting.DFMFSM_DragRescueGlobalAction.OnTargetBeAssassinate
	// Flags: [Final|Native|Protected]
	// Offset: 0x14fbdc6c
	// Params: [ Num(1) Size(0x1) ]
	void OnTargetBeAssassinate(uint8_t bAssassinate);

	// Object: Function DFMFighting.DFMFSM_DragRescueGlobalAction.InterruptRescue
	// Flags: [Final|Native|Protected]
	// Offset: 0x14fbdbc8
	// Params: [ Num(1) Size(0x1) ]
	void InterruptRescue(EFSMCharacterState State);
	DEFINE_UE_CLASS_HELPERS(UDFMFSM_DragRescueGlobalAction, "DFMFSM_DragRescueGlobalAction")

};

// Object: Class DFMFighting.DFMFSM_DragRescueStartAction
// Size: 0x110 (Inherited: 0x108)
struct UDFMFSM_DragRescueStartAction : UDFMFSMAction
{
	float MaxStateTime; // 0x108(0x4)
	uint8_t Pad_0x10C[0x4]; // 0x10C(0x4)
	DEFINE_UE_CLASS_HELPERS(UDFMFSM_DragRescueStartAction, "DFMFSM_DragRescueStartAction")

};

// Object: Class DFMFighting.DFMFSM_DragRescuingAction
// Size: 0x108 (Inherited: 0x108)
struct UDFMFSM_DragRescuingAction : UDFMFSMAction
{	DEFINE_UE_CLASS_HELPERS(UDFMFSM_DragRescuingAction, "DFMFSM_DragRescuingAction")

};

} // namespace SDK
