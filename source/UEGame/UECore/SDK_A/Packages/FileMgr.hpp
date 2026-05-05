#pragma once

#include "../CoreUObject_classes.hpp"

namespace SDK
{

// Package: FileMgr
// Enums: 0
// Structs: 0
// Classes: 4

struct UIFileMgr;
struct UAndroidFileMgr;
struct UIOSFileMgr;
struct UOpenHarmonyFileMgr;

// Object: Class FileMgr.IFileMgr
// Size: 0x38 (Inherited: 0x28)
struct UIFileMgr : UObject
{
	DEFINE_UE_CLASS_HELPERS(UIFileMgr, "IFileMgr")

	struct FMulticastInlineDelegate OnSaveToAlbum; // 0x28(0x10)

	// Object: Function FileMgr.IFileMgr.SaveToAlbum
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0x7c1e68c
	// Params: [ Num(2) Size(0x11) ]
	uint8_t SaveToAlbum(struct FString AbsolutePath);

	// Object: DelegateFunction FileMgr.IFileMgr.OnSaveToAlbum__DelegateSignature
	// Flags: [MulticastDelegate|Public|Delegate]
	// Offset: 0x101d2e88
	// Params: [ Num(2) Size(0x11) ]
	void OnSaveToAlbum__DelegateSignature(struct FString AbsolutePath, uint8_t Result);

	// Object: Function FileMgr.IFileMgr.GetFileMgr
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x7c1e658
	// Params: [ Num(1) Size(0x8) ]
	static struct UIFileMgr* GetFileMgr();
};

// Object: Class FileMgr.AndroidFileMgr
// Size: 0x38 (Inherited: 0x38)
struct UAndroidFileMgr : UIFileMgr
{
	DEFINE_UE_CLASS_HELPERS(UAndroidFileMgr, "AndroidFileMgr")
};

// Object: Class FileMgr.IOSFileMgr
// Size: 0x38 (Inherited: 0x38)
struct UIOSFileMgr : UIFileMgr
{
	DEFINE_UE_CLASS_HELPERS(UIOSFileMgr, "IOSFileMgr")
};

// Object: Class FileMgr.OpenHarmonyFileMgr
// Size: 0x38 (Inherited: 0x38)
struct UOpenHarmonyFileMgr : UIFileMgr
{
	DEFINE_UE_CLASS_HELPERS(UOpenHarmonyFileMgr, "OpenHarmonyFileMgr")
};

} // namespace SDK
