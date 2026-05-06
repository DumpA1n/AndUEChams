#pragma once

#include "../CoreUObject_classes.hpp"

namespace SDK
{

// Package: MaterialShaderQualitySettings
// Enums: 1
// Structs: 1
// Classes: 2

struct FMaterialQualityOverrides;
struct UMaterialShaderQualitySettings;
struct UShaderPlatformQualitySettings;

// Object: Enum MaterialShaderQualitySettings.EMobileShadowQuality
enum class EMobileShadowQuality : uint8_t
{
	NoFiltering = 0,
	PCF_1x1 = 1,
	PCF_2x2 = 2,
	PCF_3x3 = 3,
	EMobileShadowQuality_MAX = 4
};

// Object: ScriptStruct MaterialShaderQualitySettings.MaterialQualityOverrides
// Size: 0x14 (Inherited: 0x0)
struct FMaterialQualityOverrides
{
	bool bDiscardQualityDuringCook; // 0x0(0x1)
	bool bEnableOverride; // 0x1(0x1)
	bool bForceFullyRough; // 0x2(0x1)
	bool bForceNonMetal; // 0x3(0x1)
	bool bForceDisableLMDirectionality; // 0x4(0x1)
	bool bForceLQReflections; // 0x5(0x1)
	bool bForceDisablePreintegratedGF; // 0x6(0x1)
	bool bDisableMaterialNormalCalculation; // 0x7(0x1)
	EMobileShadowQuality MobileShadowQuality; // 0x8(0x1)
	bool bDisableAdditiveReflection; // 0x9(0x1)
	bool bDisableMaterialPlanarReflection; // 0xA(0x1)
	bool bCalcILCPerVertex; // 0xB(0x1)
	bool b1dSHForTransferTexture; // 0xC(0x1)
	bool bDisableGeometricSpecularAA; // 0xD(0x1)
	uint8_t Pad_0xE[0x2]; // 0xE(0x2)
	int32_t MaxNumHQReflectionCaptures; // 0x10(0x4)
};

// Object: Class MaterialShaderQualitySettings.MaterialShaderQualitySettings
// Size: 0x78 (Inherited: 0x28)
struct UMaterialShaderQualitySettings : UObject
{
	DEFINE_UE_CLASS_HELPERS(UMaterialShaderQualitySettings, "MaterialShaderQualitySettings")

	struct TMap<struct FName, struct UShaderPlatformQualitySettings*> ForwardSettingMap; // 0x28(0x50)
};

// Object: Class MaterialShaderQualitySettings.ShaderPlatformQualitySettings
// Size: 0xA0 (Inherited: 0x28)
struct UShaderPlatformQualitySettings : UObject
{
	DEFINE_UE_CLASS_HELPERS(UShaderPlatformQualitySettings, "ShaderPlatformQualitySettings")

	struct FMaterialQualityOverrides QualityOverrides[0x5]; // 0x28(0x64)
	uint8_t Pad_0x8C[0x14]; // 0x8C(0x14)
};

} // namespace SDK
