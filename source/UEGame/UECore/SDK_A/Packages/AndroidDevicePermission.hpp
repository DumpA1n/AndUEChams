#pragma once

#include "../CoreUObject_classes.hpp"

namespace SDK
{

// Package: AndroidDevicePermission
// Enums: 0
// Structs: 0
// Classes: 1

struct UAndroidDevicePermissionHelper;

// Object: Class AndroidDevicePermission.AndroidDevicePermissionHelper
// Size: 0x28 (Inherited: 0x28)
struct UAndroidDevicePermissionHelper : UObject
{
	DEFINE_UE_CLASS_HELPERS(UAndroidDevicePermissionHelper, "AndroidDevicePermissionHelper")

	// Object: Function AndroidDevicePermission.AndroidDevicePermissionHelper.SetQQLogin
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3e424a0
	// Params: [ Num(0) Size(0x0) ]
	static void SetQQLogin();

	// Object: Function AndroidDevicePermission.AndroidDevicePermissionHelper.SetID_V2
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3e4212c
	// Params: [ Num(1) Size(0x10) ]
	static void SetID_V2(struct FString InID);

	// Object: Function AndroidDevicePermission.AndroidDevicePermissionHelper.RefreshMediaStore
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3e422f4
	// Params: [ Num(1) Size(0x10) ]
	static void RefreshMediaStore(struct FString Path);

	// Object: Function AndroidDevicePermission.AndroidDevicePermissionHelper.JumpPermissionPage
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3e423e8
	// Params: [ Num(0) Size(0x0) ]
	static void JumpPermissionPage();

	// Object: Function AndroidDevicePermission.AndroidDevicePermissionHelper.IsFoldableDevice
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3e42220
	// Params: [ Num(1) Size(0x1) ]
	static bool IsFoldableDevice();

	// Object: Function AndroidDevicePermission.AndroidDevicePermissionHelper.GetID_V2
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x940c714
	// Params: [ Num(1) Size(0x10) ]
	static struct FString GetID_V2();

	// Object: Function AndroidDevicePermission.AndroidDevicePermissionHelper.GetDeviceId_V2
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3e424b4
	// Params: [ Num(1) Size(0x10) ]
	static struct FString GetDeviceId_V2();

	// Object: Function AndroidDevicePermission.AndroidDevicePermissionHelper.GetAndroidMemInfo
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3e42258
	// Params: [ Num(1) Size(0x10) ]
	static struct FString GetAndroidMemInfo();

	// Object: Function AndroidDevicePermission.AndroidDevicePermissionHelper.CheckNotificationPermission
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x92ddcd8
	// Params: [ Num(1) Size(0x1) ]
	static bool CheckNotificationPermission();

	// Object: Function AndroidDevicePermission.AndroidDevicePermissionHelper.AddGlobalModelForSystemJump
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3e423fc
	// Params: [ Num(1) Size(0x10) ]
	static void AddGlobalModelForSystemJump(struct FString InModels);
};

} // namespace SDK
