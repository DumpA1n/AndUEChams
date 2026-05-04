#pragma once

#include "../CoreUObject_classes.hpp"
#include "Engine.hpp"

namespace SDK
{

// Package: GeneBatchValidation
// Enums: 0
// Structs: 0
// Classes: 1

struct AActor;
struct UGeneBatchValidationComponent;

// Object: Class GeneBatchValidation.GeneBatchValidationComponent
// Size: 0x130 (Inherited: 0xF8)
struct UGeneBatchValidationComponent : UActorComponent
{
	struct TArray<struct AActor*> ShotPositionActor; // 0xF8(0x10)
	uint8_t Pad_0x108[0x28]; // 0x108(0x28)
	DEFINE_UE_CLASS_HELPERS(UGeneBatchValidationComponent, "GeneBatchValidationComponent")

};

} // namespace SDK
