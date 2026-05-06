#pragma once

#include "../CoreUObject_classes.hpp"
#include "Engine.hpp"

namespace SDK
{

// Package: AndroidPermission
// Enums: 0
// Structs: 0
// Classes: 2

struct UAndroidPermissionCallbackProxy;
struct UAndroidPermissionFunctionLibrary;

// Object: Class AndroidPermission.AndroidPermissionCallbackProxy
// Size: 0x68 (Inherited: 0x28)
struct UAndroidPermissionCallbackProxy : UObject
{
	DEFINE_UE_CLASS_HELPERS(UAndroidPermissionCallbackProxy, "AndroidPermissionCallbackProxy")

	struct FMulticastInlineDelegate OnPermissionsGrantedDynamicDelegate; // 0x28(0x10)
	struct FMulticastInlineDelegate OnExternalStagePermissionsGrantedDynamicDelegate; // 0x38(0x10)
	struct FMulticastInlineDelegate OnLocationPermissionsGrantedDynamicDelegate; // 0x48(0x10)
	uint8_t Pad_0x58[0x10]; // 0x58(0x10)
};

// Object: Class AndroidPermission.AndroidPermissionFunctionLibrary
// Size: 0x28 (Inherited: 0x28)
struct UAndroidPermissionFunctionLibrary : UBlueprintFunctionLibrary
{
	DEFINE_UE_CLASS_HELPERS(UAndroidPermissionFunctionLibrary, "AndroidPermissionFunctionLibrary")

	// Object: Function AndroidPermission.AndroidPermissionFunctionLibrary.CheckPermission
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x521e8c0
	// Params: [ Num(2) Size(0x11) ]
	static bool CheckPermission(struct FString permission);

	// Object: Function AndroidPermission.AndroidPermissionFunctionLibrary.AcquirePermissions
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x521e804
	// Params: [ Num(2) Size(0x18) ]
	static struct UAndroidPermissionCallbackProxy* AcquirePermissions(const struct TArray<struct FString>& Permissions);
};

} // namespace SDK
