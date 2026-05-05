#pragma once

#include "../CoreUObject_classes.hpp"

namespace SDK
{

// Package: PermissionMgr
// Enums: 2
// Structs: 0
// Classes: 4

struct UIDFPermissionMgr;
struct UDFAndroidPermissionMgr;
struct UDFiOSPermissionMgr;
struct UDFOpenHarmonyPermissionMgr;

// Object: Enum PermissionMgr.EDFPermissionType
enum class EDFPermissionType : uint8_t
{
	Unknow = 0,
	AccessAlbum = 1,
	Camera = 2,
	RecordAudio = 3,
	WriteSettings = 4,
	InstallPackages = 5,
	Notifications = 6,
	Location = 7,
	Calendar = 8,
	BlueTooth = 9,
	ManageExternalStorage = 10,
	AppTrackingConsent = 11,
	EDFPermissionType_MAX = 12
};

// Object: Enum PermissionMgr.EDFPermissionShowType
enum class EDFPermissionShowType : uint8_t
{
	Director = 0,
	ShowConfirmWindow = 1,
	ShowFloatingWindow = 2,
	EDFPermissionShowType_MAX = 3
};

// Object: Class PermissionMgr.IDFPermissionMgr
// Size: 0x38 (Inherited: 0x28)
struct UIDFPermissionMgr : UObject
{
	DEFINE_UE_CLASS_HELPERS(UIDFPermissionMgr, "IDFPermissionMgr")

	struct FMulticastInlineDelegate OnPermissionRequestResultEvent; // 0x28(0x10)

	// Object: Function PermissionMgr.IDFPermissionMgr.ShouldShowRequestPermissionRationale
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0x8b4e940
	// Params: [ Num(2) Size(0x2) ]
	uint8_t ShouldShowRequestPermissionRationale(EDFPermissionType Permission);

	// Object: Function PermissionMgr.IDFPermissionMgr.RequestPermissions
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0x8b4e84c
	// Params: [ Num(3) Size(0x9) ]
	uint8_t RequestPermissions(EDFPermissionType Permission, int32_t RequestCode);

	// Object: DelegateFunction PermissionMgr.IDFPermissionMgr.OnPermissionRequestResultDelegate__DelegateSignature
	// Flags: [MulticastDelegate|Public|Delegate|HasOutParms]
	// Offset: 0x101d2e88
	// Params: [ Num(2) Size(0x5) ]
	void OnPermissionRequestResultDelegate__DelegateSignature(const int32_t& RequestCode, uint8_t IsGranted);

	// Object: Function PermissionMgr.IDFPermissionMgr.JumpToSysSetting
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0x8b4e830
	// Params: [ Num(0) Size(0x0) ]
	void JumpToSysSetting();

	// Object: Function PermissionMgr.IDFPermissionMgr.IsFirstTimeRequest
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0x10a23acc
	// Params: [ Num(2) Size(0x2) ]
	uint8_t IsFirstTimeRequest(EDFPermissionType Permission);

	// Object: Function PermissionMgr.IDFPermissionMgr.IfRequestPermissionSupport
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0x8b4e778
	// Params: [ Num(2) Size(0x2) ]
	uint8_t IfRequestPermissionSupport(EDFPermissionType Permission);

	// Object: Function PermissionMgr.IDFPermissionMgr.IfPermissionGranted
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0x10036d70
	// Params: [ Num(2) Size(0x2) ]
	uint8_t IfPermissionGranted(EDFPermissionType Permission);

	// Object: Function PermissionMgr.IDFPermissionMgr.GetPermissionMgr
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x101d1e60
	// Params: [ Num(1) Size(0x8) ]
	static struct UIDFPermissionMgr* GetPermissionMgr();

	// Object: Function PermissionMgr.IDFPermissionMgr.GetDFPermissionTypeName
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x8b4e6d4
	// Params: [ Num(2) Size(0xC) ]
	static struct FName GetDFPermissionTypeName(EDFPermissionType Type);
};

// Object: Class PermissionMgr.DFAndroidPermissionMgr
// Size: 0x38 (Inherited: 0x38)
struct UDFAndroidPermissionMgr : UIDFPermissionMgr
{
	DEFINE_UE_CLASS_HELPERS(UDFAndroidPermissionMgr, "DFAndroidPermissionMgr")
};

// Object: Class PermissionMgr.DFiOSPermissionMgr
// Size: 0x38 (Inherited: 0x38)
struct UDFiOSPermissionMgr : UIDFPermissionMgr
{
	DEFINE_UE_CLASS_HELPERS(UDFiOSPermissionMgr, "DFiOSPermissionMgr")
};

// Object: Class PermissionMgr.DFOpenHarmonyPermissionMgr
// Size: 0x38 (Inherited: 0x38)
struct UDFOpenHarmonyPermissionMgr : UIDFPermissionMgr
{
	DEFINE_UE_CLASS_HELPERS(UDFOpenHarmonyPermissionMgr, "DFOpenHarmonyPermissionMgr")
};

} // namespace SDK
