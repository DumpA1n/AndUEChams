#pragma once

#include "../CoreUObject_classes.hpp"

namespace SDK
{

// Package: MaterialShaderQualitySettings
// Enums: 3
// Structs: 1
// Classes: 2

struct FMaterialQualityOverrides;
struct UMaterialShaderQualitySettings;
struct UShaderPlatformQualitySettings;

// Object: Enum MaterialShaderQualitySettings.EVolGiQuality
enum class EVolGiQuality : uint8_t
{
	Low = 0,
	Medium = 1,
	High = 2,
	EVolGiQuality_MAX = 3
};

// Object: Enum MaterialShaderQualitySettings.EMaterialQualityTier
enum class EMaterialQualityTier : uint8_t
{
	Impatient = 0,
	Ultra_Low = 1,
	Low = 2,
	Medium = 3,
	High = 4,
	Ultra_High = 5,
	EMaterialQualityTier_MAX = 6
};

// Object: Enum MaterialShaderQualitySettings.EMobileCSMQuality
enum class EMobileCSMQuality : uint8_t
{
	NoFiltering = 0,
	PCF_1x1 = 1,
	PCF_2x2 = 2,
	EMobileCSMQuality_MAX = 3
};

// Object: ScriptStruct MaterialShaderQualitySettings.MaterialQualityOverrides
// Size: 0xB (Inherited: 0x0)
struct FMaterialQualityOverrides
{
	uint8_t bDiscardQualityDuringCook : 1; // 0x0(0x1), Mask(0x1)
	uint8_t BitPad_0x0_1 : 7; // 0x0(0x1)
	uint8_t bEnableOverride : 1; // 0x1(0x1), Mask(0x1)
	uint8_t BitPad_0x1_1 : 7; // 0x1(0x1)
	uint8_t bForceFullyRough : 1; // 0x2(0x1), Mask(0x1)
	uint8_t BitPad_0x2_1 : 7; // 0x2(0x1)
	uint8_t bForceNonMetal : 1; // 0x3(0x1), Mask(0x1)
	uint8_t BitPad_0x3_1 : 7; // 0x3(0x1)
	uint8_t bForceDisableLMDirectionality : 1; // 0x4(0x1), Mask(0x1)
	uint8_t BitPad_0x4_1 : 7; // 0x4(0x1)
	uint8_t bForceLQReflections : 1; // 0x5(0x1), Mask(0x1)
	uint8_t BitPad_0x5_1 : 7; // 0x5(0x1)
	uint8_t bDisableMaterialNormalCalculation : 1; // 0x6(0x1), Mask(0x1)
	uint8_t BitPad_0x6_1 : 7; // 0x6(0x1)
	EVolGiQuality VolumeGIQuality; // 0x7(0x1)
	EMobileCSMQuality MobileCSMQuality; // 0x8(0x1)
	EMaterialQualityTier MaterialQualityTier; // 0x9(0x1)
	uint8_t bEnableDitheredLODTransition : 1; // 0xA(0x1), Mask(0x1)
	uint8_t BitPad_0xA_1 : 7; // 0xA(0x1)
};

// Object: Class MaterialShaderQualitySettings.MaterialShaderQualitySettings
// Size: 0x78 (Inherited: 0x28)
struct UMaterialShaderQualitySettings : UObject
{
	DEFINE_UE_CLASS_HELPERS(UMaterialShaderQualitySettings, "MaterialShaderQualitySettings")

	struct TMap<struct FName, struct UShaderPlatformQualitySettings*> ForwardSettingMap; // 0x28(0x50)
};

// Object: Class MaterialShaderQualitySettings.ShaderPlatformQualitySettings
// Size: 0x80 (Inherited: 0x28)
struct UShaderPlatformQualitySettings : UObject
{
	DEFINE_UE_CLASS_HELPERS(UShaderPlatformQualitySettings, "ShaderPlatformQualitySettings")

	struct FMaterialQualityOverrides QualityOverrides[0x6]; // 0x28(0x42)
	uint8_t Pad_0x6A[0x16]; // 0x6A(0x16)
};

} // namespace SDK
