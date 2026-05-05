#pragma once

#include "../CoreUObject_classes.hpp"
#include "Engine.hpp"

namespace SDK
{

// Package: PerfSnapshot
// Enums: 0
// Structs: 0
// Classes: 1

struct UPerfSnapshotBlueprintFunctionLibrary;

// Object: Class PerfSnapshot.PerfSnapshotBlueprintFunctionLibrary
// Size: 0x28 (Inherited: 0x28)
struct UPerfSnapshotBlueprintFunctionLibrary : UBlueprintFunctionLibrary
{
	DEFINE_UE_CLASS_HELPERS(UPerfSnapshotBlueprintFunctionLibrary, "PerfSnapshotBlueprintFunctionLibrary")

	// Object: Function PerfSnapshot.PerfSnapshotBlueprintFunctionLibrary.StopPerfSnapshot
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x8b4b668
	// Params: [ Num(1) Size(0x8) ]
	static void StopPerfSnapshot(struct UObject* WorldContext);

	// Object: Function PerfSnapshot.PerfSnapshotBlueprintFunctionLibrary.StartPerfSnapshot
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x8b4b5d4
	// Params: [ Num(1) Size(0x8) ]
	static void StartPerfSnapshot(struct UObject* WorldContext);
};

} // namespace SDK
