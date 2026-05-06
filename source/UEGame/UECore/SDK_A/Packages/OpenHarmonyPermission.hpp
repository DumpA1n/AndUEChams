#pragma once

#include "../CoreUObject_classes.hpp"
#include "Engine.hpp"

namespace SDK
{

// Package: OpenHarmonyPermission
// Enums: 0
// Structs: 0
// Classes: 1

struct UOpenHarmonyPermissionFunctionLibrary;

// Object: Class OpenHarmonyPermission.OpenHarmonyPermissionFunctionLibrary
// Size: 0x28 (Inherited: 0x28)
struct UOpenHarmonyPermissionFunctionLibrary : UBlueprintFunctionLibrary
{
	DEFINE_UE_CLASS_HELPERS(UOpenHarmonyPermissionFunctionLibrary, "OpenHarmonyPermissionFunctionLibrary")

	// Object: Function OpenHarmonyPermission.OpenHarmonyPermissionFunctionLibrary.CheckPermission
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x522e360
	// Params: [ Num(2) Size(0x11) ]
	static bool CheckPermission(struct FString permission);

	// Object: Function OpenHarmonyPermission.OpenHarmonyPermissionFunctionLibrary.AcquirePermissions
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x522e26c
	// Params: [ Num(2) Size(0x20) ]
	static struct TArray<bool> AcquirePermissions(const struct TArray<struct FString>& Permissions);
};

} // namespace SDK
