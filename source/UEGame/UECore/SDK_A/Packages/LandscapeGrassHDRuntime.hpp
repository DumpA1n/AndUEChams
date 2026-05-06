#pragma once

#include "../CoreUObject_classes.hpp"
#include "Engine.hpp"

namespace SDK
{

// Package: LandscapeGrassHDRuntime
// Enums: 1
// Structs: 2
// Classes: 7

struct ULandscapeComponent;
struct ULandscapeGrassType;
struct FGrassOrientedBox;
struct FGrassHDDataKey;
struct UGrassHDBuildData;
struct UGrassHDComponent;
struct UGrassHDComponentBuildData;
struct UGrassHDData;
struct UGrassHDRuntimeData;
struct AGrassHDSettingsActor;
struct UMaterialExpressionLandscapeGrassHDOutput;

// Object: Enum LandscapeGrassHDRuntime.EGrassHDBuildState
enum class EGrassHDBuildState : uint8_t
{
	CullOBBs_Started_GameThread = 0,
	CullOBBs_Started_RenderThread = 1,
	CullOBBs_NeedRetry = 2,
	CullOBBs_PreparingNormalizedOBBs = 3,
	CullOBBs_WaitingForOBBsFilling = 4,
	CullOBBs_WaitingForNextFrame = 5,
	CullOBBs_WaitingForReadbackStart = 6,
	CullOBBs_WaitingForReadbackReady = 7,
	CullOBBs_WaitingForResult = 8,
	OBBsReady = 9,
	AddingBuildData = 10,
	Completed = 11,
	Invalid = 12,
	EGrassHDBuildState_MAX = 13
};

// Object: ScriptStruct LandscapeGrassHDRuntime.GrassOrientedBox
// Size: 0x20 (Inherited: 0x0)
struct FGrassOrientedBox
{
	struct FVector4 Center; // 0x0(0x10)
	struct FVector4 Extent; // 0x10(0x10)
};

// Object: ScriptStruct LandscapeGrassHDRuntime.GrassHDDataKey
// Size: 0x10 (Inherited: 0x0)
struct FGrassHDDataKey
{
	struct ULandscapeGrassType* GrassType; // 0x0(0x8)
	int32_t GrassVarietyIndex; // 0x8(0x4)
	uint8_t Pad_0xC[0x4]; // 0xC(0x4)
};

// Object: Class LandscapeGrassHDRuntime.GrassHDBuildData
// Size: 0x440 (Inherited: 0x28)
struct UGrassHDBuildData : UObject
{
	DEFINE_UE_CLASS_HELPERS(UGrassHDBuildData, "GrassHDBuildData")

	uint8_t Pad_0x28[0x3D8]; // 0x28(0x3D8)
	EGrassHDBuildState State; // 0x400(0x1)
	uint8_t Pad_0x401[0x7]; // 0x401(0x7)
	struct FString Description; // 0x408(0x10)
	uint8_t Pad_0x418[0x28]; // 0x418(0x28)
};

// Object: Class LandscapeGrassHDRuntime.GrassHDComponent
// Size: 0x148 (Inherited: 0xE0)
struct UGrassHDComponent : UActorComponent
{
	DEFINE_UE_CLASS_HELPERS(UGrassHDComponent, "GrassHDComponent")

	struct TArray<struct UGrassHDBuildData*> BuildDataCollection; // 0xE0(0x10)
	struct TMap<struct ULandscapeComponent*, struct UGrassHDComponentBuildData*> ComponentBuildDataMap; // 0xF0(0x50)
	uint8_t Pad_0x140[0x8]; // 0x140(0x8)
};

// Object: Class LandscapeGrassHDRuntime.GrassHDComponentBuildData
// Size: 0x40 (Inherited: 0x28)
struct UGrassHDComponentBuildData : UObject
{
	DEFINE_UE_CLASS_HELPERS(UGrassHDComponentBuildData, "GrassHDComponentBuildData")

	struct TArray<struct UGrassHDBuildData*> GrassHDBuildDatas; // 0x28(0x10)
	uint8_t Pad_0x38[0x8]; // 0x38(0x8)
};

// Object: Class LandscapeGrassHDRuntime.GrassHDData
// Size: 0x78 (Inherited: 0x28)
struct UGrassHDData : UAssetUserData
{
	DEFINE_UE_CLASS_HELPERS(UGrassHDData, "GrassHDData")

	struct TMap<struct FGrassHDDataKey, struct UGrassHDRuntimeData*> RuntimeDataMap; // 0x28(0x50)
};

// Object: Class LandscapeGrassHDRuntime.GrassHDRuntimeData
// Size: 0x100 (Inherited: 0x28)
struct UGrassHDRuntimeData : UObject
{
	DEFINE_UE_CLASS_HELPERS(UGrassHDRuntimeData, "GrassHDRuntimeData")

	struct TArray<uint8_t> CompressedData; // 0x28(0x10)
	int32_t OBBsNum; // 0x38(0x4)
	uint8_t CompressionVersion; // 0x3C(0x1)
	bool bRequireCPUAccess; // 0x3D(0x1)
	bool bUseLandscapeLightmap; // 0x3E(0x1)
	uint8_t Pad_0x3F[0x1]; // 0x3F(0x1)
	struct FVector ComponentOrigin; // 0x40(0xC)
	struct FVector2D LightmapBaseBias; // 0x4C(0x8)
	struct FVector2D LightmapBaseScale; // 0x54(0x8)
	struct FVector2D ShadowmapBaseBias; // 0x5C(0x8)
	struct FVector2D ShadowmapBaseScale; // 0x64(0x8)
	struct FVector2D LightMapComponentBias; // 0x6C(0x8)
	struct FVector2D LightMapComponentScale; // 0x74(0x8)
	struct FVector MeshBoxMin; // 0x7C(0xC)
	struct FVector MeshBoxMax; // 0x88(0xC)
	int32_t DesiredInstancesPerLeaf; // 0x94(0x4)
	int32_t RandomSeed; // 0x98(0x4)
	struct FVector DrawScale; // 0x9C(0xC)
	struct FIntPoint SectionBase; // 0xA8(0x8)
	struct FIntPoint LandscapeSectionOffset; // 0xB0(0x8)
	struct FVector LandscapeLocationOffset; // 0xB8(0xC)
	uint8_t Pad_0xC4[0x3C]; // 0xC4(0x3C)
};

// Object: Class LandscapeGrassHDRuntime.GrassHDSettingsActor
// Size: 0x308 (Inherited: 0x300)
struct AGrassHDSettingsActor : AActor
{
	DEFINE_UE_CLASS_HELPERS(AGrassHDSettingsActor, "GrassHDSettingsActor")

	uint8_t CompressionVersion; // 0x300(0x1)
	bool bEnabled; // 0x301(0x1)
	bool bNormalFixEnabled; // 0x302(0x1)
	uint8_t Pad_0x303[0x5]; // 0x303(0x5)
};

// Object: Class LandscapeGrassHDRuntime.MaterialExpressionLandscapeGrassHDOutput
// Size: 0x68 (Inherited: 0x40)
struct UMaterialExpressionLandscapeGrassHDOutput : UMaterialExpressionCustomOutput
{
	DEFINE_UE_CLASS_HELPERS(UMaterialExpressionLandscapeGrassHDOutput, "MaterialExpressionLandscapeGrassHDOutput")

	struct FExpressionInput MinGrassWeight; // 0x3C(0xC)
	uint8_t Pad_0x4C[0x4]; // 0x4C(0x4)
	struct FExpressionInput Tolerance; // 0x50(0xC)
	uint8_t Pad_0x5C[0xC]; // 0x5C(0xC)
};

} // namespace SDK
