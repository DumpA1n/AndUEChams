#pragma once

#include "../CoreUObject_classes.hpp"
#include "Engine.hpp"

namespace SDK
{

// Package: VirtualMaterialRuntime
// Enums: 1
// Structs: 14
// Classes: 3

struct FMaterialTextureInfo;
struct FScalarParameterValue;
struct FVectorParameterValue;
struct UMaterialInterface;
struct UTexture;
struct UTexture2D;
struct FVMSourceTextureProperties;
struct FVMIPerPlatformParameters;
struct FVMIPerPlatformData;
struct FVMIAllPlatformData;
struct FVMIPerPlatformTextureParameter;
struct FVMParameterGroup;
struct FVMTextureParameter;
struct FVMaterialGenTextureInfo;
struct FVMaterialHighTextureInfo;
struct FVMTPerPlatformConfig;
struct FVMTAllPlatformConfig;
struct FVMaterialConfig;
struct FVMGenTextureConfig;
struct FVMSourceTextureConfig;
struct UVirtualMaterialInstanceConstant;
struct UVirtualMaterialSettings;
struct UVirtualMaterialTemplate;

// Object: Enum VirtualMaterialRuntime.EVirtualMaterialPlatform
enum class EVirtualMaterialPlatform : uint8_t
{
	Unknown = 0,
	Mobile = 1,
	Desktop = 2,
	EVirtualMaterialPlatform_MAX = 3
};

// Object: ScriptStruct VirtualMaterialRuntime.VMSourceTextureProperties
// Size: 0x10 (Inherited: 0x0)
struct FVMSourceTextureProperties
{
	struct TArray<struct FString> Properties; // 0x0(0x10)
};

// Object: ScriptStruct VirtualMaterialRuntime.VMIPerPlatformParameters
// Size: 0xA8 (Inherited: 0x0)
struct FVMIPerPlatformParameters
{
	struct TSoftObjectPtr<UMaterialInterface> Parent; // 0x0(0x28)
	struct FStaticParameterSet StaticParameters; // 0x28(0x40)
	struct TArray<struct FScalarParameterValue> ScalarParameters; // 0x68(0x10)
	struct TArray<struct FVectorParameterValue> VectorParameters; // 0x78(0x10)
	struct TArray<struct FVMIPerPlatformTextureParameter> TextureParameters; // 0x88(0x10)
	struct TArray<struct FMaterialTextureInfo> TextureStreamingData; // 0x98(0x10)
};

// Object: ScriptStruct VirtualMaterialRuntime.VMIPerPlatformData
// Size: 0xB0 (Inherited: 0x0)
struct FVMIPerPlatformData
{
	int32_t OverrideTemplateIndex; // 0x0(0x4)
	uint8_t Pad_0x4[0x4]; // 0x4(0x4)
	struct FVMIPerPlatformParameters MaterialParameters; // 0x8(0xA8)
};

// Object: ScriptStruct VirtualMaterialRuntime.VMIAllPlatformData
// Size: 0x50 (Inherited: 0x0)
struct FVMIAllPlatformData
{
	struct TMap<EVirtualMaterialPlatform, struct FVMIPerPlatformData> PlatformData; // 0x0(0x50)
};

// Object: ScriptStruct VirtualMaterialRuntime.VMIPerPlatformTextureParameter
// Size: 0x48 (Inherited: 0x0)
struct FVMIPerPlatformTextureParameter
{
	struct FMaterialParameterInfo ParameterInfo; // 0x0(0x10)
	struct TSoftObjectPtr<UTexture> ParameterValue; // 0x10(0x28)
	struct FGuid ExpressionGUID; // 0x38(0x10)
};

// Object: ScriptStruct VirtualMaterialRuntime.VMParameterGroup
// Size: 0x70 (Inherited: 0x0)
struct FVMParameterGroup
{
	struct FStaticParameterSet StaticParameters; // 0x0(0x40)
	struct TArray<struct FScalarParameterValue> ScalarParameters; // 0x40(0x10)
	struct TArray<struct FVectorParameterValue> VectorParameters; // 0x50(0x10)
	struct TArray<struct FVMTextureParameter> TextureParameters; // 0x60(0x10)
};

// Object: ScriptStruct VirtualMaterialRuntime.VMTextureParameter
// Size: 0x38 (Inherited: 0x0)
struct FVMTextureParameter
{
	struct FMaterialParameterInfo ParameterInfo; // 0x0(0x10)
	struct TSoftObjectPtr<UTexture> ParameterValue; // 0x10(0x28)
};

// Object: ScriptStruct VirtualMaterialRuntime.VMaterialGenTextureInfo
// Size: 0x20 (Inherited: 0x0)
struct FVMaterialGenTextureInfo
{
	struct FString TextureName; // 0x0(0x10)
	struct UTexture* TheTexture; // 0x10(0x8)
	uint8_t bCreated : 1; // 0x18(0x1), Mask(0x1)
	uint8_t BitPad_0x18_1 : 7; // 0x18(0x1)
	uint8_t bRegenerated : 1; // 0x19(0x1), Mask(0x1)
	uint8_t BitPad_0x19_1 : 7; // 0x19(0x1)
	uint8_t Pad_0x1A[0x6]; // 0x1A(0x6)
};

// Object: ScriptStruct VirtualMaterialRuntime.VMaterialHighTextureInfo
// Size: 0xE8 (Inherited: 0x0)
struct FVMaterialHighTextureInfo
{
	struct FString TextureName; // 0x0(0x10)
	struct TSoftObjectPtr<UTexture2D> TheTexture; // 0x10(0x28)
	struct FString TheTextureObjectPathBackup; // 0x38(0x10)
	struct TMap<EVirtualMaterialPlatform, struct FString> CachedTextureHashMap; // 0x48(0x50)
	struct TMap<EVirtualMaterialPlatform, struct FVector2D> CachedSizeXYMap; // 0x98(0x50)
};

// Object: ScriptStruct VirtualMaterialRuntime.VMTPerPlatformConfig
// Size: 0x50 (Inherited: 0x0)
struct FVMTPerPlatformConfig
{
	int32_t EnableConfigIndex; // 0x0(0x4)
	uint8_t Pad_0x4[0x4]; // 0x4(0x4)
	struct TArray<struct FVMaterialConfig> MaterialConfigs; // 0x8(0x10)
	struct UMaterialInterface* MaterialParent; // 0x18(0x8)
	uint8_t bAllowMaterialSubclass : 1; // 0x20(0x1), Mask(0x1)
	uint8_t BitPad_0x20_1 : 7; // 0x20(0x1)
	uint8_t bAllowMaterialUsedInMI : 1; // 0x21(0x1), Mask(0x1)
	uint8_t BitPad_0x21_1 : 7; // 0x21(0x1)
	uint8_t Pad_0x22[0x6]; // 0x22(0x6)
	struct TSoftObjectPtr<UMaterialInterface> HiResPreviewMaterial; // 0x28(0x28)
};

// Object: ScriptStruct VirtualMaterialRuntime.VMTAllPlatformConfig
// Size: 0x50 (Inherited: 0x0)
struct FVMTAllPlatformConfig
{
	struct TMap<EVirtualMaterialPlatform, struct FVMTPerPlatformConfig> PlatformConfigs; // 0x0(0x50)
};

// Object: ScriptStruct VirtualMaterialRuntime.VMaterialConfig
// Size: 0x28 (Inherited: 0x0)
struct FVMaterialConfig
{
	struct FName Title; // 0x0(0x8)
	struct TArray<struct FVMGenTextureConfig> GenTextureConfig; // 0x8(0x10)
	struct TArray<int32_t> GenTextureQualityMips; // 0x18(0x10)
};

// Object: ScriptStruct VirtualMaterialRuntime.VMGenTextureConfig
// Size: 0x90 (Inherited: 0x0)
struct FVMGenTextureConfig
{
	struct FString Name; // 0x0(0x10)
	struct FIntPoint size; // 0x10(0x8)
	struct FIntPoint MinSize; // 0x18(0x8)
	int32_t DefaultSizeIndex; // 0x20(0x4)
	uint8_t Pad_0x24[0x4]; // 0x24(0x4)
	struct UTexture2D* TextureConfigTemplate; // 0x28(0x8)
	struct UMaterialInterface* MaterialUsedToGen; // 0x30(0x8)
	uint8_t bUseMaterialToGenAllMips : 1; // 0x38(0x1), Mask(0x1)
	uint8_t BitPad_0x38_1 : 7; // 0x38(0x1)
	uint8_t Pad_0x39[0x7]; // 0x39(0x7)
	struct TMap<struct FString, struct FVMSourceTextureProperties> SourceTextureOverridePropertyWhiteList; // 0x40(0x50)
};

// Object: ScriptStruct VirtualMaterialRuntime.VMSourceTextureConfig
// Size: 0x18 (Inherited: 0x0)
struct FVMSourceTextureConfig
{
	struct FString Name; // 0x0(0x10)
	struct UTexture2D* TextureConfigTemplate; // 0x10(0x8)
};

// Object: Class VirtualMaterialRuntime.VirtualMaterialInstanceConstant
// Size: 0x320 (Inherited: 0x318)
struct UVirtualMaterialInstanceConstant : UMaterialInstanceConstant
{
	DEFINE_UE_CLASS_HELPERS(UVirtualMaterialInstanceConstant, "VirtualMaterialInstanceConstant")

	uint8_t Pad_0x318[0x8]; // 0x318(0x8)
};

// Object: Class VirtualMaterialRuntime.VirtualMaterialSettings
// Size: 0x1D0 (Inherited: 0x38)
struct UVirtualMaterialSettings : UDeveloperSettings
{
	DEFINE_UE_CLASS_HELPERS(UVirtualMaterialSettings, "VirtualMaterialSettings")

	uint32_t DefaultConfigIndex; // 0x38(0x4)
	uint8_t Pad_0x3C[0x4]; // 0x3C(0x4)
	struct TMap<EVirtualMaterialPlatform, struct FString> PlatformGenTextureSaveDir; // 0x40(0x50)
	uint8_t bUseSmartSubDir : 1; // 0x90(0x1), Mask(0x1)
	uint8_t BitPad_0x90_1 : 7; // 0x90(0x1)
	uint8_t bAutoGenOnPostSaveMaterialInstance : 1; // 0x91(0x1), Mask(0x1)
	uint8_t BitPad_0x91_1 : 7; // 0x91(0x1)
	uint8_t bAllowValidation : 1; // 0x92(0x1), Mask(0x1)
	uint8_t BitPad_0x92_1 : 7; // 0x92(0x1)
	uint8_t bAllowValidation_VMTextureSize : 1; // 0x93(0x1), Mask(0x1)
	uint8_t BitPad_0x93_1 : 7; // 0x93(0x1)
	uint8_t bAllowValidation_VMTextureGroup : 1; // 0x94(0x1), Mask(0x1)
	uint8_t BitPad_0x94_1 : 7; // 0x94(0x1)
	uint8_t Pad_0x95[0x3]; // 0x95(0x3)
	struct TArray<struct FString> VMBaseMaterialUsedInMIAllowRegex; // 0x98(0x10)
	uint8_t bShowVMExt : 1; // 0xA8(0x1), Mask(0x1)
	uint8_t BitPad_0xA8_1 : 7; // 0xA8(0x1)
	uint8_t Pad_0xA9[0x7]; // 0xA9(0x7)
	struct TMap<EVirtualMaterialPlatform, struct FString> PlatformGenerateTextureRecordFilePath; // 0xB0(0x50)
	struct FString Comment; // 0x100(0x10)
	struct FVMSourceTextureProperties TemplateTexturePropertyBlackList; // 0x110(0x10)
	struct TMap<struct FString, struct FVMSourceTextureProperties> SourceTexturePropertyWhiteList; // 0x120(0x50)
	struct TArray<struct FString> ExcludePathOfTexturesFromRefreshVMTexturesProperty; // 0x170(0x10)
	struct TMap<struct FString, struct FString> ExcludeMetaDataValueEqualFromRefreshVMTexturesProperty; // 0x180(0x50)
};

// Object: Class VirtualMaterialRuntime.VirtualMaterialTemplate
// Size: 0x28 (Inherited: 0x28)
struct UVirtualMaterialTemplate : UObject
{
	DEFINE_UE_CLASS_HELPERS(UVirtualMaterialTemplate, "VirtualMaterialTemplate")
};

} // namespace SDK
