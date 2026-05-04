#pragma once

#include "../CoreUObject_classes.hpp"
#include "Engine.hpp"

namespace SDK
{

// Package: ArchVisCharacter
// Enums: 0
// Structs: 0
// Classes: 2

struct AArchVisCharacter;
struct UArchVisCharMovementComponent;

// Object: Class ArchVisCharacter.ArchVisCharacter
// Size: 0x7F0 (Inherited: 0x790)
struct AArchVisCharacter : ACHARACTER
{
	struct FString LookUpAxisName; // 0x788(0x10)
	struct FString LookUpAtRateAxisName; // 0x798(0x10)
	struct FString TurnAxisName; // 0x7A8(0x10)
	struct FString TurnAtRateAxisName; // 0x7B8(0x10)
	struct FString MoveForwardAxisName; // 0x7C8(0x10)
	struct FString MoveRightAxisName; // 0x7D8(0x10)
	float MouseSensitivityScale_Pitch; // 0x7E8(0x4)
	float MouseSensitivityScale_Yaw; // 0x7EC(0x4)
	DEFINE_UE_CLASS_HELPERS(AArchVisCharacter, "ArchVisCharacter")

};

// Object: Class ArchVisCharacter.ArchVisCharMovementComponent
// Size: 0x7E0 (Inherited: 0x790)
struct UArchVisCharMovementComponent : UCharacterMovementComponent
{
	struct FRotator RotationalAcceleration; // 0x790(0xC)
	struct FRotator RotationalDeceleration; // 0x79C(0xC)
	struct FRotator MaxRotationalVelocity; // 0x7A8(0xC)
	float MinPitch; // 0x7B4(0x4)
	float MaxPitch; // 0x7B8(0x4)
	float WalkingFriction; // 0x7BC(0x4)
	float WalkingSpeed; // 0x7C0(0x4)
	float WalkingAcceleration; // 0x7C4(0x4)
	uint8_t Pad_0x7C8[0x18]; // 0x7C8(0x18)
	DEFINE_UE_CLASS_HELPERS(UArchVisCharMovementComponent, "ArchVisCharMovementComponent")

};

} // namespace SDK
