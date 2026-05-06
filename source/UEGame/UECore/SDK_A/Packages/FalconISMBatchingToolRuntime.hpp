#pragma once

#include "../CoreUObject_classes.hpp"
#include "DeveloperSettings.hpp"
#include "Engine.hpp"

namespace SDK
{

// Package: FalconISMBatchingToolRuntime
// Enums: 0
// Structs: 3
// Classes: 7

struct AActor;
struct UInstancedStaticMeshComponent;
struct ULevel;
struct UMaterialInterface;
struct UStaticMesh;
struct UStaticMeshComponent;
struct FFalconISMBatchingKey;
struct FFalconISMBatchingParam;
struct FFalconISMBatchingSMHideMeta;
struct AFalconBatchedISMActor;
struct UFalconISMBatchingKeyComponent;
struct UFalconISMBatchingSettings;
struct UFalconISMBatchingSMHideMetaComponent;
struct UFalconISMBatchingStrategy;
struct UFalconISMBatchingStrategyTK;
struct UFalconISMBatchingToolLibrary;

// Object: ScriptStruct FalconISMBatchingToolRuntime.FalconISMBatchingKey
// Size: 0x50 (Inherited: 0x0)
struct FFalconISMBatchingKey
{
	struct UStaticMesh* StaticMesh; // 0x0(0x8)
	struct TArray<struct UMaterialInterface*> Materials; // 0x8(0x10)
	struct ULevel* Level; // 0x18(0x8)
	struct FName CollisionProfile; // 0x20(0x8)
	bool bNegativeDeterminant; // 0x28(0x1)
	bool bCastShadow; // 0x29(0x1)
	uint8_t DetailMode; // 0x2A(0x1)
	bool bOverrideLightmapRes; // 0x2B(0x1)
	int32_t OverrideLightmapRes; // 0x2C(0x4)
	struct FVector CenterPoint; // 0x30(0xC)
	bool bHasCenterPoint; // 0x3C(0x1)
	uint8_t Pad_0x3D[0x3]; // 0x3D(0x3)
	struct TArray<struct FString> OriginalSMCPaths; // 0x40(0x10)
};

// Object: ScriptStruct FalconISMBatchingToolRuntime.FalconISMBatchingParam
// Size: 0x30 (Inherited: 0x0)
struct FFalconISMBatchingParam
{
	bool bEnable; // 0x0(0x1)
	uint8_t Pad_0x1[0x7]; // 0x1(0x7)
	struct FString ExcludeStaticMeshPathRegex; // 0x8(0x10)
	int32_t MinInstancesCount; // 0x18(0x4)
	bool bSupportRuntimeBatchUnbatch; // 0x1C(0x1)
	uint8_t Pad_0x1D[0x3]; // 0x1D(0x3)
	float BatchCellSize; // 0x20(0x4)
	float BoundsMaxMultiplier; // 0x24(0x4)
	float BoundsSphereMaxRadius; // 0x28(0x4)
	uint8_t Pad_0x2C[0x4]; // 0x2C(0x4)
};

// Object: ScriptStruct FalconISMBatchingToolRuntime.FalconISMBatchingSMHideMeta
// Size: 0x1 (Inherited: 0x0)
struct FFalconISMBatchingSMHideMeta
{
	bool bCastShadow; // 0x0(0x1)
};

// Object: Class FalconISMBatchingToolRuntime.FalconBatchedISMActor
// Size: 0x300 (Inherited: 0x300)
struct AFalconBatchedISMActor : AActor
{
	DEFINE_UE_CLASS_HELPERS(AFalconBatchedISMActor, "FalconBatchedISMActor")
};

// Object: Class FalconISMBatchingToolRuntime.FalconISMBatchingKeyComponent
// Size: 0x280 (Inherited: 0x230)
struct UFalconISMBatchingKeyComponent : USceneComponent
{
	DEFINE_UE_CLASS_HELPERS(UFalconISMBatchingKeyComponent, "FalconISMBatchingKeyComponent")

	struct FFalconISMBatchingKey Key; // 0x228(0x50)
};

// Object: Class FalconISMBatchingToolRuntime.FalconISMBatchingSettings
// Size: 0x88 (Inherited: 0x38)
struct UFalconISMBatchingSettings : UDeveloperSettings
{
	DEFINE_UE_CLASS_HELPERS(UFalconISMBatchingSettings, "FalconISMBatchingSettings")

	struct TMap<struct TSoftObjectPtr<UWorld>, struct FFalconISMBatchingParam> MapBatchingParams; // 0x38(0x50)
};

// Object: Class FalconISMBatchingToolRuntime.FalconISMBatchingSMHideMetaComponent
// Size: 0x230 (Inherited: 0x230)
struct UFalconISMBatchingSMHideMetaComponent : USceneComponent
{
	DEFINE_UE_CLASS_HELPERS(UFalconISMBatchingSMHideMetaComponent, "FalconISMBatchingSMHideMetaComponent")

	struct FFalconISMBatchingSMHideMeta Meta; // 0x224(0x1)
};

// Object: Class FalconISMBatchingToolRuntime.FalconISMBatchingStrategy
// Size: 0x28 (Inherited: 0x28)
struct UFalconISMBatchingStrategy : UObject
{
	DEFINE_UE_CLASS_HELPERS(UFalconISMBatchingStrategy, "FalconISMBatchingStrategy")
};

// Object: Class FalconISMBatchingToolRuntime.FalconISMBatchingStrategyTK
// Size: 0x38 (Inherited: 0x28)
struct UFalconISMBatchingStrategyTK : UFalconISMBatchingStrategy
{
	DEFINE_UE_CLASS_HELPERS(UFalconISMBatchingStrategyTK, "FalconISMBatchingStrategyTK")

	float BatchCellSize; // 0x28(0x4)
	float BoundsMaxMultiplier; // 0x2C(0x4)
	float BoundsSphereMaxRadius; // 0x30(0x4)
	uint8_t Pad_0x34[0x4]; // 0x34(0x4)
};

// Object: Class FalconISMBatchingToolRuntime.FalconISMBatchingToolLibrary
// Size: 0x28 (Inherited: 0x28)
struct UFalconISMBatchingToolLibrary : UBlueprintFunctionLibrary
{
	DEFINE_UE_CLASS_HELPERS(UFalconISMBatchingToolLibrary, "FalconISMBatchingToolLibrary")

	// Object: Function FalconISMBatchingToolRuntime.FalconISMBatchingToolLibrary.UnbatchAll
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3f74bd0
	// Params: [ Num(0) Size(0x0) ]
	static void UnbatchAll();

	// Object: Function FalconISMBatchingToolRuntime.FalconISMBatchingToolLibrary.ShouldBatch
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x3f74984
	// Params: [ Num(3) Size(0x39) ]
	static bool ShouldBatch(const struct FFalconISMBatchingParam& Param, struct UStaticMeshComponent* SMC);

	// Object: Function FalconISMBatchingToolRuntime.FalconISMBatchingToolLibrary.IsBlueprintActorWithLogic
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3f7474c
	// Params: [ Num(2) Size(0x9) ]
	static bool IsBlueprintActorWithLogic(struct AActor* Actor);

	// Object: Function FalconISMBatchingToolRuntime.FalconISMBatchingToolLibrary.IsBatched
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3f748d8
	// Params: [ Num(2) Size(0x9) ]
	static bool IsBatched(struct UStaticMeshComponent* SMC);

	// Object: Function FalconISMBatchingToolRuntime.FalconISMBatchingToolLibrary.GetSettings
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3f74ab8
	// Params: [ Num(1) Size(0x8) ]
	static struct UFalconISMBatchingSettings* GetSettings();

	// Object: Function FalconISMBatchingToolRuntime.FalconISMBatchingToolLibrary.GetOriginalSMCs
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3f747f8
	// Params: [ Num(2) Size(0x18) ]
	static struct TArray<struct UStaticMeshComponent*> GetOriginalSMCs(struct UInstancedStaticMeshComponent* ISMC);

	// Object: Function FalconISMBatchingToolRuntime.FalconISMBatchingToolLibrary.CleanupLevel
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3f74aec
	// Params: [ Num(2) Size(0x9) ]
	static bool CleanupLevel(struct ULevel* Level);

	// Object: Function FalconISMBatchingToolRuntime.FalconISMBatchingToolLibrary.Cleanup
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3f74b98
	// Params: [ Num(1) Size(0x1) ]
	static bool Cleanup();

	// Object: Function FalconISMBatchingToolRuntime.FalconISMBatchingToolLibrary.BatchAll
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3f74be4
	// Params: [ Num(0) Size(0x0) ]
	static void BatchAll();
};

} // namespace SDK
