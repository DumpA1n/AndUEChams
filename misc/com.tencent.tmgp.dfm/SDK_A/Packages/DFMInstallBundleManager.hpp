#pragma once

#include "../CoreUObject_classes.hpp"

namespace SDK
{

// Package: DFMInstallBundleManager
// Enums: 0
// Structs: 1
// Classes: 1

struct FPakMountShaderCodeLibraryRule;
struct UPakMountListenerSettings;

// Object: ScriptStruct DFMInstallBundleManager.PakMountShaderCodeLibraryRule
// Size: 0x18 (Inherited: 0x0)
struct FPakMountShaderCodeLibraryRule
{
	int32_t PakChunkIndex; // 0x0(0x4)
	uint8_t Pad_0x4[0x4]; // 0x4(0x4)
	struct FString LibraryName; // 0x8(0x10)
};

// Object: Class DFMInstallBundleManager.PakMountListenerSettings
// Size: 0x38 (Inherited: 0x28)
struct UPakMountListenerSettings : UObject
{
	struct TArray<struct FPakMountShaderCodeLibraryRule> ShaderCodeLibraryRules; // 0x28(0x10)
	DEFINE_UE_CLASS_HELPERS(UPakMountListenerSettings, "PakMountListenerSettings")

};

} // namespace SDK
