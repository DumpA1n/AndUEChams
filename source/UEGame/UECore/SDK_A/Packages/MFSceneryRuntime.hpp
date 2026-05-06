#pragma once

#include "../CoreUObject_classes.hpp"
#include "DeveloperSettings.hpp"
#include "Engine.hpp"

namespace SDK
{

// Package: MFSceneryRuntime
// Enums: 0
// Structs: 3
// Classes: 8

struct ALandscape;
struct ULandscapeComponent;
struct UTexture2D;
struct UTextureRenderTarget2D;
struct UTextureRenderTarget2DArray;
struct FMFSceneryStreamingAsset;
struct FLandscapeIndexMapSetting;
struct FT2DArrayStreamingRuntimeIndexMapData;
struct ULandscapeComponentDataBase;
struct UIndexMapData;
struct UPigmentData;
struct UHeightMapComponentData;
struct UIndexMapStreamingLoadSubsystem;
struct AMFSceneryRuntimeSettingsActor;
struct UMFScenerySettings;
struct UT2DArrayStreamingLoadSubsystem;

// Object: ScriptStruct MFSceneryRuntime.MFSceneryStreamingAsset
// Size: 0x10 (Inherited: 0x0)
struct FMFSceneryStreamingAsset
{
	struct UTextureRenderTarget2DArray* StreamingTexture; // 0x0(0x8)
	struct ULandscapeComponentDataBase* StreamingTextureType; // 0x8(0x8)
};

// Object: ScriptStruct MFSceneryRuntime.LandscapeIndexMapSetting
// Size: 0x30 (Inherited: 0x0)
struct FLandscapeIndexMapSetting
{
	struct FSoftObjectPath LandscapeMaterialPath; // 0x0(0x18)
	struct FSoftObjectPath IndexMapMPCPath; // 0x18(0x18)
};

// Object: ScriptStruct MFSceneryRuntime.T2DArrayStreamingRuntimeIndexMapData
// Size: 0x8 (Inherited: 0x0)
struct FT2DArrayStreamingRuntimeIndexMapData
{
	uint8_t Pad_0x0[0x8]; // 0x0(0x8)
};

// Object: Class MFSceneryRuntime.LandscapeComponentDataBase
// Size: 0x28 (Inherited: 0x28)
struct ULandscapeComponentDataBase : UAssetUserData
{
	DEFINE_UE_CLASS_HELPERS(ULandscapeComponentDataBase, "LandscapeComponentDataBase")
};

// Object: Class MFSceneryRuntime.IndexMapData
// Size: 0x40 (Inherited: 0x28)
struct UIndexMapData : ULandscapeComponentDataBase
{
	DEFINE_UE_CLASS_HELPERS(UIndexMapData, "IndexMapData")

	struct UTexture2D* IndexMap; // 0x28(0x8)
	struct FLinearColor LandscapeInfo; // 0x30(0x10)
};

// Object: Class MFSceneryRuntime.PigmentData
// Size: 0x30 (Inherited: 0x28)
struct UPigmentData : ULandscapeComponentDataBase
{
	DEFINE_UE_CLASS_HELPERS(UPigmentData, "PigmentData")

	struct UTexture2D* PigmentMap; // 0x28(0x8)
};

// Object: Class MFSceneryRuntime.HeightMapComponentData
// Size: 0x40 (Inherited: 0x28)
struct UHeightMapComponentData : ULandscapeComponentDataBase
{
	DEFINE_UE_CLASS_HELPERS(UHeightMapComponentData, "HeightMapComponentData")

	struct UTexture2D* HeightMap; // 0x28(0x8)
	struct FVector TexOffset; // 0x30(0xC)
	uint8_t Pad_0x3C[0x4]; // 0x3C(0x4)
};

// Object: Class MFSceneryRuntime.IndexMapStreamingLoadSubsystem
// Size: 0xA0 (Inherited: 0x30)
struct UIndexMapStreamingLoadSubsystem : UWorldSubsystem
{
	DEFINE_UE_CLASS_HELPERS(UIndexMapStreamingLoadSubsystem, "IndexMapStreamingLoadSubsystem")

	uint8_t Pad_0x30[0x70]; // 0x30(0x70)
};

// Object: Class MFSceneryRuntime.MFSceneryRuntimeSettingsActor
// Size: 0x3B0 (Inherited: 0x300)
struct AMFSceneryRuntimeSettingsActor : AActor
{
	DEFINE_UE_CLASS_HELPERS(AMFSceneryRuntimeSettingsActor, "MFSceneryRuntimeSettingsActor")

	float LayerNum; // 0x300(0x4)
	float LodMipBegin; // 0x304(0x4)
	float LodMipEnd; // 0x308(0x4)
	uint8_t Pad_0x30C[0x4]; // 0x30C(0x4)
	struct TArray<struct TLazyObjectPtr<struct ALandscape>> Landscapes; // 0x310(0x10)
	struct UTextureRenderTarget2D* IndirectTexture; // 0x320(0x8)
	struct TArray<struct FMFSceneryStreamingAsset> StreamingAssets; // 0x328(0x10)
	uint8_t Pad_0x338[0x78]; // 0x338(0x78)
};

// Object: Class MFSceneryRuntime.MFScenerySettings
// Size: 0x48 (Inherited: 0x38)
struct UMFScenerySettings : UDeveloperSettings
{
	DEFINE_UE_CLASS_HELPERS(UMFScenerySettings, "MFScenerySettings")

	struct TArray<struct FLandscapeIndexMapSetting> UVSettings; // 0x38(0x10)
};

// Object: Class MFSceneryRuntime.T2DArrayStreamingLoadSubsystem
// Size: 0x1D8 (Inherited: 0x30)
struct UT2DArrayStreamingLoadSubsystem : UWorldSubsystem
{
	DEFINE_UE_CLASS_HELPERS(UT2DArrayStreamingLoadSubsystem, "T2DArrayStreamingLoadSubsystem")

	uint8_t Pad_0x30[0x8]; // 0x30(0x8)
	struct TSet<struct ULandscapeComponent*> LandscapeComponentSet; // 0x38(0x50)
	struct TMap<struct ULandscapeComponent*, struct FT2DArrayStreamingRuntimeIndexMapData> LandscapeIndexMapInfo; // 0x88(0x50)
	uint8_t Pad_0xD8[0x100]; // 0xD8(0x100)
};

} // namespace SDK
