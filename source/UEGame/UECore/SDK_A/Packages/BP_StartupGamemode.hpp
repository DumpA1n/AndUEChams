#pragma once

#include "../CoreUObject_classes.hpp"
#include "Engine.hpp"

namespace SDK
{

// Package: BP_StartupGamemode
// Enums: 0
// Structs: 0
// Classes: 1

struct USceneComponent;
struct ABP_StartupGamemode_C;

// Object: BlueprintGeneratedClass BP_StartupGamemode.BP_StartupGamemode_C
// Size: 0x3F0 (Inherited: 0x3E8)
struct ABP_StartupGamemode_C : AGameMode
{
	DEFINE_UE_CLASS_HELPERS(ABP_StartupGamemode_C, "BP_StartupGamemode_C")

	struct USceneComponent* DefaultSceneRoot; // 0x3E8(0x8)
};

} // namespace SDK
