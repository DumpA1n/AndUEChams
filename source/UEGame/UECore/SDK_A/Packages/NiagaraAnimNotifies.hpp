#pragma once

#include "../CoreUObject_classes.hpp"
#include "Engine.hpp"

namespace SDK
{

// Package: NiagaraAnimNotifies
// Enums: 0
// Structs: 0
// Classes: 2

struct UFXSystemComponent;
struct UNiagaraSystem;
struct UAnimNotify_PlayNiagaraEffect;
struct UAnimNotifyState_TimedNiagaraEffect;

// Object: Class NiagaraAnimNotifies.AnimNotify_PlayNiagaraEffect
// Size: 0x90 (Inherited: 0x38)
struct UAnimNotify_PlayNiagaraEffect : UAnimNotify
{
	DEFINE_UE_CLASS_HELPERS(UAnimNotify_PlayNiagaraEffect, "AnimNotify_PlayNiagaraEffect")

	struct UNiagaraSystem* Template; // 0x38(0x8)
	struct FVector LocationOffset; // 0x40(0xC)
	struct FRotator RotationOffset; // 0x4C(0xC)
	struct FVector Scale; // 0x58(0xC)
	bool bAbsoluteScale; // 0x64(0x1)
	uint8_t Pad_0x65[0x1B]; // 0x65(0x1B)
	uint8_t Attached : 1; // 0x80(0x1), Mask(0x1)
	uint8_t BitPad_0x80_1 : 7; // 0x80(0x1)
	uint8_t Pad_0x81[0x3]; // 0x81(0x3)
	struct FName SocketName; // 0x84(0x8)
	uint8_t Pad_0x8C[0x4]; // 0x8C(0x4)

	// Object: Function NiagaraAnimNotifies.AnimNotify_PlayNiagaraEffect.GetSpawnedEffect
	// Flags: [Final|Native|Public|BlueprintCallable|Const]
	// Offset: 0x384bf68
	// Params: [ Num(1) Size(0x8) ]
	struct UFXSystemComponent* GetSpawnedEffect();
};

// Object: Class NiagaraAnimNotifies.AnimNotifyState_TimedNiagaraEffect
// Size: 0x60 (Inherited: 0x30)
struct UAnimNotifyState_TimedNiagaraEffect : UAnimNotifyState
{
	DEFINE_UE_CLASS_HELPERS(UAnimNotifyState_TimedNiagaraEffect, "AnimNotifyState_TimedNiagaraEffect")

	struct UNiagaraSystem* Template; // 0x30(0x8)
	struct FName SocketName; // 0x38(0x8)
	struct FVector LocationOffset; // 0x40(0xC)
	struct FRotator RotationOffset; // 0x4C(0xC)
	bool bDestroyAtEnd; // 0x58(0x1)
	uint8_t Pad_0x59[0x7]; // 0x59(0x7)
};

} // namespace SDK
