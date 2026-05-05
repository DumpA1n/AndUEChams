#pragma once

#include "../CoreUObject_classes.hpp"
#include "Engine.hpp"

namespace SDK
{

// Package: MultiWorld
// Enums: 0
// Structs: 0
// Classes: 1

struct UWorld;
struct UMultiWorldManager;

// Object: Class MultiWorld.MultiWorldManager
// Size: 0x258 (Inherited: 0x30)
struct UMultiWorldManager : UGameInstanceSubsystem
{
	DEFINE_UE_CLASS_HELPERS(UMultiWorldManager, "MultiWorldManager")

	uint8_t Pad_0x30[0x8]; // 0x30(0x8)
	struct UWorld* MainWorld; // 0x38(0x8)
	uint8_t Pad_0x40[0x218]; // 0x40(0x218)
};

} // namespace SDK
