#pragma once

#include "../CoreUObject_classes.hpp"
#include "Engine.hpp"

namespace SDK
{

// Package: BPIniConfigHelper
// Enums: 0
// Structs: 0
// Classes: 1

struct UBPIniConfigFunctions;

// Object: Class BPIniConfigHelper.BPIniConfigFunctions
// Size: 0x28 (Inherited: 0x28)
struct UBPIniConfigFunctions : UBlueprintFunctionLibrary
{
	DEFINE_UE_CLASS_HELPERS(UBPIniConfigFunctions, "BPIniConfigFunctions")

	// Object: Function BPIniConfigHelper.BPIniConfigFunctions.SetStringConfigValue
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x7b0f734
	// Params: [ Num(3) Size(0x30) ]
	static void SetStringConfigValue(struct FString ConfigKey, struct FString SectionName, struct FString ConfigValue);

	// Object: Function BPIniConfigHelper.BPIniConfigFunctions.SetBoolConfigValue
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x7b0f610
	// Params: [ Num(3) Size(0x21) ]
	static void SetBoolConfigValue(struct FString ConfigKey, struct FString SectionName, uint8_t ConfigValue);

	// Object: Function BPIniConfigHelper.BPIniConfigFunctions.GetStringConfigValue
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x7b0f4ec
	// Params: [ Num(3) Size(0x30) ]
	static struct FString GetStringConfigValue(struct FString ConfigKey, struct FString SectionName);

	// Object: Function BPIniConfigHelper.BPIniConfigFunctions.GetBoolConfigValue
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x7b0f3f8
	// Params: [ Num(3) Size(0x21) ]
	static uint8_t GetBoolConfigValue(struct FString ConfigKey, struct FString SectionName);
};

} // namespace SDK
