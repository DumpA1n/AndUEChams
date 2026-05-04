#pragma once

#include "../CoreUObject_classes.hpp"
#include "Engine.hpp"

namespace SDK
{

// Package: ModularRuntime
// Enums: 0
// Structs: 1
// Classes: 1

struct FModularGridSize;
struct AModularLevelActor;

// Object: ScriptStruct ModularRuntime.ModularGridSize
// Size: 0xC (Inherited: 0x0)
struct FModularGridSize
{
	float SizeX; // 0x0(0x4)
	float SizeY; // 0x4(0x4)
	float SizeZ; // 0x8(0x4)
};

// Object: Class ModularRuntime.ModularLevelActor
// Size: 0x3C0 (Inherited: 0x370)
struct AModularLevelActor : AActor
{
	struct TMap<struct FString, struct FModularGridSize> GridSizes; // 0x370(0x50)
	DEFINE_UE_CLASS_HELPERS(AModularLevelActor, "ModularLevelActor")

};

} // namespace SDK
