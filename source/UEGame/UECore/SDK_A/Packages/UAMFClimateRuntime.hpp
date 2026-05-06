#pragma once

#include "../CoreUObject_classes.hpp"
#include "Engine.hpp"
#include "MFClimateRuntime.hpp"

namespace SDK
{

// Package: UAMFClimateRuntime
// Enums: 0
// Structs: 2
// Classes: 6

struct AActor;
struct ASkyLight;
struct UIBLPrecomputedDataAsset;
struct UMFClimateSunMoonSceneLightComponent;
struct UMaterialParameterCollection;
struct UParticleSystem;
struct UParticleSystemComponent;
struct UTextureCube;
struct FCubemapDataCollection;
struct FCubemapData;
struct UUAClimateExtraParametersControlComponent;
struct AUAMFClimateRain;
struct UUASkyLightCubemapBakerComponent;
struct UUASkyLightCubemapUpdaterComponent;
struct AWaveEffectController;
struct AWaveEffectMarker;

// Object: ScriptStruct UAMFClimateRuntime.CubemapDataCollection
// Size: 0x18 (Inherited: 0x0)
struct FCubemapDataCollection
{
	int32_t ConfigID; // 0x0(0x4)
	uint8_t Pad_0x4[0x4]; // 0x4(0x4)
	struct TArray<struct FCubemapData> DataArray; // 0x8(0x10)
};

// Object: ScriptStruct UAMFClimateRuntime.CubemapData
// Size: 0xE0 (Inherited: 0x0)
struct FCubemapData
{
	float TODTime; // 0x0(0x4)
	uint8_t Pad_0x4[0x4]; // 0x4(0x4)
	struct TSoftObjectPtr<UTextureCube> CubemapTexture; // 0x8(0x28)
	float AverageBrightness; // 0x30(0x4)
	uint8_t Pad_0x34[0x4]; // 0x34(0x4)
	struct TArray<float> IrradianceEnvironmentMapFloats; // 0x38(0x10)
	uint8_t Pad_0x48[0x98]; // 0x48(0x98)
};

// Object: Class UAMFClimateRuntime.UAClimateExtraParametersControlComponent
// Size: 0x118 (Inherited: 0xE0)
struct UUAClimateExtraParametersControlComponent : UActorComponent
{
	DEFINE_UE_CLASS_HELPERS(UUAClimateExtraParametersControlComponent, "UAClimateExtraParametersControlComponent")

	uint8_t Pad_0xE0[0x8]; // 0xE0(0x8)
	struct UMFClimateSunMoonSceneLightComponent* SunMoonLightComponent; // 0xE8(0x8)
	bool bDebugDisableControlDawnSceneLightInfo; // 0xF0(0x1)
	uint8_t Pad_0xF1[0x3]; // 0xF1(0x3)
	float Cloud2DDetailsTiling; // 0xF4(0x4)
	float Cloud2DDetailsWarping; // 0xF8(0x4)
	float Cloud2DOverallStrength; // 0xFC(0x4)
	struct FLinearColor SkyAndCloudTint; // 0x100(0x10)
	struct UMaterialParameterCollection* MPC; // 0x110(0x8)
};

// Object: Class UAMFClimateRuntime.UAMFClimateRain
// Size: 0x5B0 (Inherited: 0x5B0)
struct AUAMFClimateRain : AMFClimateParticleRain
{
	DEFINE_UE_CLASS_HELPERS(AUAMFClimateRain, "UAMFClimateRain")
};

// Object: Class UAMFClimateRuntime.UASkyLightCubemapBakerComponent
// Size: 0x170 (Inherited: 0xF8)
struct UUASkyLightCubemapBakerComponent : UMFClimateComponent
{
	DEFINE_UE_CLASS_HELPERS(UUASkyLightCubemapBakerComponent, "UASkyLightCubemapBakerComponent")

	uint8_t Pad_0xF8[0x38]; // 0xF8(0x38)
	struct UIBLPrecomputedDataAsset* CachedDataAsset; // 0x130(0x8)
	struct UIBLPrecomputedDataAsset* CachedDataAsset2; // 0x138(0x8)
	struct TArray<float> SceneCapturingTODTimes; // 0x140(0x10)
	struct ASkyLight* SkyLight; // 0x150(0x8)
	struct TArray<struct FCubemapDataCollection> CubemapDataCollections; // 0x158(0x10)
	uint8_t Pad_0x168[0x8]; // 0x168(0x8)
};

// Object: Class UAMFClimateRuntime.UASkyLightCubemapUpdaterComponent
// Size: 0x108 (Inherited: 0xF8)
struct UUASkyLightCubemapUpdaterComponent : UMFClimateComponent
{
	DEFINE_UE_CLASS_HELPERS(UUASkyLightCubemapUpdaterComponent, "UASkyLightCubemapUpdaterComponent")

	struct ASkyLight* SkyLight; // 0xF8(0x8)
	struct UTextureCube* SkylightCubemap; // 0x100(0x8)
};

// Object: Class UAMFClimateRuntime.WaveEffectController
// Size: 0x3A0 (Inherited: 0x300)
struct AWaveEffectController : AActor
{
	DEFINE_UE_CLASS_HELPERS(AWaveEffectController, "WaveEffectController")

	uint8_t Pad_0x300[0x28]; // 0x300(0x28)
	float SpawnDistance; // 0x328(0x4)
	uint8_t Pad_0x32C[0x4]; // 0x32C(0x4)
	struct UParticleSystem* WaveEffect; // 0x330(0x8)
	uint8_t Pad_0x338[0x8]; // 0x338(0x8)
	struct TMap<uint32_t, struct UParticleSystemComponent*> GeneratedWaveEffecPSCMap; // 0x340(0x50)
	struct TArray<struct FTransform> WaveEffectMarkTransforms; // 0x390(0x10)
};

// Object: Class UAMFClimateRuntime.WaveEffectMarker
// Size: 0x360 (Inherited: 0x300)
struct AWaveEffectMarker : AActor
{
	DEFINE_UE_CLASS_HELPERS(AWaveEffectMarker, "WaveEffectMarker")

	struct TSoftObjectPtr<AActor> WaveEffectController; // 0x300(0x28)
	struct TSoftObjectPtr<AActor> FollowedActor; // 0x328(0x28)
	struct FVector FollowedRange; // 0x350(0xC)
	uint8_t Pad_0x35C[0x4]; // 0x35C(0x4)
};

} // namespace SDK
