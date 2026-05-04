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
// Size: 0x48 (Inherited: 0x28)
struct UAndroidPermissionCallbackProxy : UObject
{
	struct FMulticastInlineDelegate OnPermissionsGrantedDynamicDelegate; // 0x28(0x10)
	uint8_t Pad_0x38[0x10]; // 0x38(0x10)
	DEFINE_UE_CLASS_HELPERS(UAndroidPermissionCallbackProxy, "AndroidPermissionCallbackProxy")

};

// Object: Class AndroidPermission.AndroidPermissionFunctionLibrary
// Size: 0x28 (Inherited: 0x28)
struct UAndroidPermissionFunctionLibrary : UBlueprintFunctionLibrary
{

	// Object: Function AndroidPermission.AndroidPermissionFunctionLibrary.CheckPermission
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x8e7121c
	// Params: [ Num(2) Size(0x11) ]
	static uint8_t CheckPermission(struct FString Permission);

	// Object: Function AndroidPermission.AndroidPermissionFunctionLibrary.AcquirePermissions
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x8e71160
	// Params: [ Num(2) Size(0x18) ]
	static struct UAndroidPermissionCallbackProxy* AcquirePermissions(const struct TArray<struct FString>& Permissions);
	DEFINE_UE_CLASS_HELPERS(UAndroidPermissionFunctionLibrary, "AndroidPermissionFunctionLibrary")

};

} // namespace SDK
