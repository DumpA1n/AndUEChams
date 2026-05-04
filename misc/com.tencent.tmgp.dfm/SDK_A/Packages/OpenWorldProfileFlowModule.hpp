#pragma once

#include "../CoreUObject_classes.hpp"

namespace SDK
{

// Package: OpenWorldProfileFlowModule
// Enums: 0
// Structs: 0
// Classes: 1

struct UProfileSettingsConfig;

// Object: Class OpenWorldProfileFlowModule.ProfileSettingsConfig
// Size: 0x78 (Inherited: 0x28)
struct UProfileSettingsConfig : UObject
{
	struct FString TriggerLevelMap; // 0x28(0x10)
	struct TArray<struct FString> ProfileMapLines; // 0x38(0x10)
	struct TArray<struct FString> DefaultCaptureMaps; // 0x48(0x10)
	struct TArray<struct FString> DefaultCaptureMapRuntimeConfigs; // 0x58(0x10)
	struct TArray<struct FString> DefaultProfileMaps; // 0x68(0x10)
	DEFINE_UE_CLASS_HELPERS(UProfileSettingsConfig, "ProfileSettingsConfig")

};

} // namespace SDK
