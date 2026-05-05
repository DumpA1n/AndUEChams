#pragma once

#include "../CoreUObject_classes.hpp"
#include "Engine.hpp"

namespace SDK
{

// Package: LitePackage
// Enums: 0
// Structs: 2
// Classes: 2

struct FMultiModuleInfo;
struct FModulePakInfo;
struct ULiteModuleInfo;
struct ULiteMultiModuleInfo;

// Object: ScriptStruct LitePackage.MultiModuleInfo
// Size: 0x28 (Inherited: 0x8)
struct FMultiModuleInfo : FTableRowBase
{
	struct FString MultiModuleName; // 0x8(0x10)
	struct TArray<struct FString> ChildModules; // 0x18(0x10)
};

// Object: ScriptStruct LitePackage.ModulePakInfo
// Size: 0x28 (Inherited: 0x8)
struct FModulePakInfo : FTableRowBase
{
	struct FString ModuleName; // 0x8(0x10)
	struct TArray<struct FString> PakList; // 0x18(0x10)
};

// Object: Class LitePackage.LiteModuleInfo
// Size: 0x38 (Inherited: 0x28)
struct ULiteModuleInfo : UObject
{
	DEFINE_UE_CLASS_HELPERS(ULiteModuleInfo, "LiteModuleInfo")

	struct TArray<struct FModulePakInfo> ModuleInfo; // 0x28(0x10)

	// Object: Function LitePackage.LiteModuleInfo.WriteDefaultConfigValueToIni
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x86f4304
	// Params: [ Num(0) Size(0x0) ]
	static void WriteDefaultConfigValueToIni();

	// Object: Function LitePackage.LiteModuleInfo.ReloadConfigValueInfo2
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x86f4294
	// Params: [ Num(1) Size(0x10) ]
	static struct TArray<struct FModulePakInfo> ReloadConfigValueInfo2();

	// Object: Function LitePackage.LiteModuleInfo.ReloadConfigValueInfo
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x86f4188
	// Params: [ Num(2) Size(0x20) ]
	static struct TArray<struct FModulePakInfo> ReloadConfigValueInfo(struct FString PufferPath);

	// Object: Function LitePackage.LiteModuleInfo.GetPakIsDownloadBeforeLogin
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x86f4054
	// Params: [ Num(3) Size(0x18) ]
	static int32_t GetPakIsDownloadBeforeLogin(struct FString PakName, int32_t platform);

	// Object: Function LitePackage.LiteModuleInfo.GetConfigValueInfo
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x86f3fe4
	// Params: [ Num(1) Size(0x10) ]
	static struct TArray<struct FModulePakInfo> GetConfigValueInfo();
};

// Object: Class LitePackage.LiteMultiModuleInfo
// Size: 0x38 (Inherited: 0x28)
struct ULiteMultiModuleInfo : UObject
{
	DEFINE_UE_CLASS_HELPERS(ULiteMultiModuleInfo, "LiteMultiModuleInfo")

	struct TArray<struct FMultiModuleInfo> MultiModule; // 0x28(0x10)

	// Object: Function LitePackage.LiteMultiModuleInfo.WriteDefaultConfigValueToIni
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x86f450c
	// Params: [ Num(0) Size(0x0) ]
	static void WriteDefaultConfigValueToIni();

	// Object: Function LitePackage.LiteMultiModuleInfo.ReloadConfigValueInfo2
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x86f449c
	// Params: [ Num(1) Size(0x10) ]
	static struct TArray<struct FMultiModuleInfo> ReloadConfigValueInfo2();

	// Object: Function LitePackage.LiteMultiModuleInfo.ReloadConfigValueInfo
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x86f4390
	// Params: [ Num(2) Size(0x20) ]
	static struct TArray<struct FMultiModuleInfo> ReloadConfigValueInfo(struct FString PufferPath);

	// Object: Function LitePackage.LiteMultiModuleInfo.GetConfigValueInfo
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x86f4320
	// Params: [ Num(1) Size(0x10) ]
	static struct TArray<struct FMultiModuleInfo> GetConfigValueInfo();
};

} // namespace SDK
