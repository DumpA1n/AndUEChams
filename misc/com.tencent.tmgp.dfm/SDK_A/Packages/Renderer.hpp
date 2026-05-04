#pragma once

#include "../CoreUObject_classes.hpp"

namespace SDK
{

// Package: Renderer
// Enums: 0
// Structs: 2
// Classes: 1

struct FLightPropagationVolumeSettings;
struct FPRTBufferAllocationBucketSetting;
struct UPRTBufferAllocationSettings;

// Object: ScriptStruct Renderer.LightPropagationVolumeSettings
// Size: 0x40 (Inherited: 0x0)
struct FLightPropagationVolumeSettings
{
	uint8_t bOverride_LPVIntensity : 1; // 0x0(0x1), Mask(0x1)
	uint8_t bOverride_LPVDirectionalOcclusionIntensity : 1; // 0x0(0x1), Mask(0x2)
	uint8_t bOverride_LPVDirectionalOcclusionRadius : 1; // 0x0(0x1), Mask(0x4)
	uint8_t bOverride_LPVDiffuseOcclusionExponent : 1; // 0x0(0x1), Mask(0x8)
	uint8_t bOverride_LPVSpecularOcclusionExponent : 1; // 0x0(0x1), Mask(0x10)
	uint8_t bOverride_LPVDiffuseOcclusionIntensity : 1; // 0x0(0x1), Mask(0x20)
	uint8_t bOverride_LPVSpecularOcclusionIntensity : 1; // 0x0(0x1), Mask(0x40)
	uint8_t bOverride_LPVSize : 1; // 0x0(0x1), Mask(0x80)
	uint8_t bOverride_LPVSecondaryOcclusionIntensity : 1; // 0x1(0x1), Mask(0x1)
	uint8_t bOverride_LPVSecondaryBounceIntensity : 1; // 0x1(0x1), Mask(0x2)
	uint8_t bOverride_LPVGeometryVolumeBias : 1; // 0x1(0x1), Mask(0x4)
	uint8_t bOverride_LPVVplInjectionBias : 1; // 0x1(0x1), Mask(0x8)
	uint8_t bOverride_LPVEmissiveInjectionIntensity : 1; // 0x1(0x1), Mask(0x10)
	uint8_t BitPad_0x1_5 : 3; // 0x1(0x1)
	uint8_t Pad_0x2[0x2]; // 0x2(0x2)
	float LPVIntensity; // 0x4(0x4)
	float LPVVplInjectionBias; // 0x8(0x4)
	float LPVSize; // 0xC(0x4)
	float LPVSecondaryOcclusionIntensity; // 0x10(0x4)
	float LPVSecondaryBounceIntensity; // 0x14(0x4)
	float LPVGeometryVolumeBias; // 0x18(0x4)
	float LPVEmissiveInjectionIntensity; // 0x1C(0x4)
	float LPVDirectionalOcclusionIntensity; // 0x20(0x4)
	float LPVDirectionalOcclusionRadius; // 0x24(0x4)
	float LPVDiffuseOcclusionExponent; // 0x28(0x4)
	float LPVSpecularOcclusionExponent; // 0x2C(0x4)
	float LPVDiffuseOcclusionIntensity; // 0x30(0x4)
	float LPVSpecularOcclusionIntensity; // 0x34(0x4)
	float LPVFadeRange; // 0x38(0x4)
	float LPVDirectionalOcclusionFadeRange; // 0x3C(0x4)
};

// Object: ScriptStruct Renderer.PRTBufferAllocationBucketSetting
// Size: 0x8 (Inherited: 0x0)
struct FPRTBufferAllocationBucketSetting
{
	int32_t BucketSizeMB; // 0x0(0x4)
	int32_t NumBuckets; // 0x4(0x4)
};

// Object: Class Renderer.PRTBufferAllocationSettings
// Size: 0x40 (Inherited: 0x28)
struct UPRTBufferAllocationSettings : UObject
{
	int32_t MinBufferSizeWithPool; // 0x28(0x4)
	float MaxBufferSizeWasteRatio; // 0x2C(0x4)
	struct TArray<struct FPRTBufferAllocationBucketSetting> BucketSettings; // 0x30(0x10)
	DEFINE_UE_CLASS_HELPERS(UPRTBufferAllocationSettings, "PRTBufferAllocationSettings")

};

} // namespace SDK
