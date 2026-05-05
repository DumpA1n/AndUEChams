#pragma once

#include "../CoreUObject_classes.hpp"
#include "Engine.hpp"

namespace SDK
{

// Package: DestructionLevelRuntime
// Enums: 0
// Structs: 8
// Classes: 4

struct UDataTable;
struct ULevel;
struct UPrimitiveComponent;
struct UWorld;
struct FDesHLODSingleSourceCompInfo;
struct FDesBatchHLODConfig;
struct FDesBatchISMConfig;
struct FDesTerrainAreaRuntimeConfig;
struct FDesTerrainAreaData;
struct FDesTerrainGridData;
struct FDesTerrainPointData;
struct FDesTerrainAreaBuildConfig;
struct UDesHLODLevelRuntimeMeshComponent;
struct ADesTerrainAreaVolume;
struct UDesTerrainLevelArea;
struct UDesBatchBuildConfig;

// Object: ScriptStruct DestructionLevelRuntime.DesHLODSingleSourceCompInfo
// Size: 0x28 (Inherited: 0x0)
struct FDesHLODSingleSourceCompInfo
{
	uint32_t UniqueId; // 0x0(0x4)
	struct TLazyObjectPtr<struct UPrimitiveComponent> SourceCompPtr; // 0x4(0x1C)
	int32_t PartStartIndex; // 0x20(0x4)
	int32_t PartNum; // 0x24(0x4)
};

// Object: ScriptStruct DestructionLevelRuntime.DesBatchHLODConfig
// Size: 0x10 (Inherited: 0x0)
struct FDesBatchHLODConfig
{
	int32_t HLODLevel; // 0x0(0x4)
	float MinDrawDistance; // 0x4(0x4)
	float GridSize; // 0x8(0x4)
	uint8_t bForceUseMaxLOD : 1; // 0xC(0x1), Mask(0x1)
	uint8_t BitPad_0xC_1 : 7; // 0xC(0x1)
	uint8_t Pad_0xD[0x3]; // 0xD(0x3)
};

// Object: ScriptStruct DestructionLevelRuntime.DesBatchISMConfig
// Size: 0xC (Inherited: 0x0)
struct FDesBatchISMConfig
{
	int32_t MinISMInsNum; // 0x0(0x4)
	float ExpectGridBound; // 0x4(0x4)
	float ExpectISMClusterBound; // 0x8(0x4)
};

// Object: ScriptStruct DestructionLevelRuntime.DesTerrainAreaRuntimeConfig
// Size: 0x14 (Inherited: 0x0)
struct FDesTerrainAreaRuntimeConfig
{
	int32_t GridSize; // 0x0(0x4)
	int32_t GridXNum; // 0x4(0x4)
	int32_t GridYNum; // 0x8(0x4)
	float MaxAllowHeightDiff; // 0xC(0x4)
	float MaxAllowNormalAngleDiff; // 0x10(0x4)
};

// Object: ScriptStruct DestructionLevelRuntime.DesTerrainAreaData
// Size: 0x28 (Inherited: 0x0)
struct FDesTerrainAreaData
{
	struct FDesTerrainAreaRuntimeConfig Config; // 0x0(0x14)
	uint8_t Pad_0x14[0x4]; // 0x14(0x4)
	struct TArray<struct FDesTerrainGridData> Grids; // 0x18(0x10)
};

// Object: ScriptStruct DestructionLevelRuntime.DesTerrainGridData
// Size: 0x18 (Inherited: 0x0)
struct FDesTerrainGridData
{
	struct FVector FitPlaneNormal; // 0x0(0xC)
	struct FVector RelativeLocation; // 0xC(0xC)
};

// Object: ScriptStruct DestructionLevelRuntime.DesTerrainPointData
// Size: 0x18 (Inherited: 0x0)
struct FDesTerrainPointData
{
	struct FIntPoint GridPoint; // 0x0(0x8)
	struct FVector Normal; // 0x8(0xC)
	float Height; // 0x14(0x4)
};

// Object: ScriptStruct DestructionLevelRuntime.DesTerrainAreaBuildConfig
// Size: 0x18 (Inherited: 0x0)
struct FDesTerrainAreaBuildConfig
{
	int32_t GridSize; // 0x0(0x4)
	int32_t SampleInterval; // 0x4(0x4)
	float MaxAllowHeightDiff; // 0x8(0x4)
	float MaxAllowNormalAngleDiff; // 0xC(0x4)
	float MaxMeshPercent; // 0x10(0x4)
	uint8_t bOnlySupportLandscape : 1; // 0x14(0x1), Mask(0x1)
	uint8_t BitPad_0x14_1 : 7; // 0x14(0x1)
	uint8_t Pad_0x15[0x3]; // 0x15(0x3)
};

// Object: Class DestructionLevelRuntime.DesHLODLevelRuntimeMeshComponent
// Size: 0x8C0 (Inherited: 0x8B0)
struct UDesHLODLevelRuntimeMeshComponent : UDestructibleStaticMeshComponent
{
	DEFINE_UE_CLASS_HELPERS(UDesHLODLevelRuntimeMeshComponent, "DesHLODLevelRuntimeMeshComponent")

	struct TArray<struct FDesHLODSingleSourceCompInfo> RefSourceCompInfos; // 0x8A8(0x10)
};

// Object: Class DestructionLevelRuntime.DesTerrainAreaVolume
// Size: 0x3E8 (Inherited: 0x3A8)
struct ADesTerrainAreaVolume : AVolume
{
	DEFINE_UE_CLASS_HELPERS(ADesTerrainAreaVolume, "DesTerrainAreaVolume")

	struct FDesTerrainAreaBuildConfig BuildConfig; // 0x3A8(0x18)
	struct FDesTerrainAreaData BakeAreaData; // 0x3C0(0x28)
};

// Object: Class DestructionLevelRuntime.DesTerrainLevelArea
// Size: 0x58 (Inherited: 0x28)
struct UDesTerrainLevelArea : UObject
{
	DEFINE_UE_CLASS_HELPERS(UDesTerrainLevelArea, "DesTerrainLevelArea")

	struct FName SectorID; // 0x28(0x8)
	struct FDesTerrainAreaData AreaData; // 0x30(0x28)
};

// Object: Class DestructionLevelRuntime.DesBatchBuildConfig
// Size: 0x88 (Inherited: 0x28)
struct UDesBatchBuildConfig : UObject
{
	DEFINE_UE_CLASS_HELPERS(UDesBatchBuildConfig, "DesBatchBuildConfig")

	struct TArray<struct TSoftObjectPtr<UDataTable>> ResTables; // 0x28(0x10)
	uint8_t bEnableHLOD : 1; // 0x38(0x1), Mask(0x1)
	uint8_t BitPad_0x38_1 : 7; // 0x38(0x1)
	uint8_t bBatchHLOD : 1; // 0x39(0x1), Mask(0x1)
	uint8_t BitPad_0x39_1 : 7; // 0x39(0x1)
	uint8_t bEnableISM : 1; // 0x3A(0x1), Mask(0x1)
	uint8_t BitPad_0x3A_1 : 7; // 0x3A(0x1)
	uint8_t Pad_0x3B[0x5]; // 0x3B(0x5)
	struct TArray<struct FDesBatchHLODConfig> HLODLayersConfig; // 0x40(0x10)
	struct FDesBatchISMConfig ISMConfig; // 0x50(0xC)
	uint8_t Pad_0x5C[0x4]; // 0x5C(0x4)
	struct ULevel* RuntimeLevel; // 0x60(0x8)
	struct ULevel* InterActorLevel; // 0x68(0x8)
	struct UWorld* World; // 0x70(0x8)
	uint8_t Pad_0x78[0x10]; // 0x78(0x10)
};

} // namespace SDK
