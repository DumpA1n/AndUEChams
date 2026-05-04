#pragma once

#include "../CoreUObject_classes.hpp"
#include "Engine.hpp"
#include "OpenWorldStreaming.hpp"

namespace SDK
{

// Package: OpenWorldFoliageStreaming
// Enums: 1
// Structs: 2
// Classes: 5

enum class EComponentMobility : uint8_t;
struct FPhysXSerialActor;
struct FPhysXSerialBodyInstance;
struct UHierarchicalInstancedStaticMeshComponent;
struct UMaterialInterface;
struct UOpenWorldBillboardBatchComponent;
struct FFoliagePhysicsData;
struct FOpenWorldFoliageRawData;
struct UOpenWorldFoliageAsset;
struct UOpenWorldFoliageStatics;
struct ACrackedInfoManager;
struct AFoliageAssetsStreamer;
struct AFoliageSwapVolume;

// Object: Enum OpenWorldFoliageStreaming.EFoliageSwapType
enum class EFoliageSwapType : uint8_t
{
	OnlyMainWorld = 0,
	OnlySubWorld = 1,
	Both = 2,
	None = 3,
	Num = 4,
	EFoliageSwapType_MAX = 5
};

// Object: ScriptStruct OpenWorldFoliageStreaming.FoliagePhysicsData
// Size: 0x40 (Inherited: 0x0)
struct FFoliagePhysicsData
{
	struct TArray<struct FPhysXSerialActor> SerialActors; // 0x0(0x10)
	struct TArray<struct FPhysXSerialBodyInstance> SerialBodyInstances; // 0x10(0x10)
	struct FVector Position; // 0x20(0xC)
	uint8_t Pad_0x2C[0x4]; // 0x2C(0x4)
	struct FDateTime Timestamp; // 0x30(0x8)
	float DamageInterestRadius; // 0x38(0x4)
	uint8_t bDestructible : 1; // 0x3C(0x1), Mask(0x1)
	uint8_t BitPad_0x3C_1 : 7; // 0x3C(0x1)
	uint8_t Pad_0x3D[0x3]; // 0x3D(0x3)
};

// Object: ScriptStruct OpenWorldFoliageStreaming.OpenWorldFoliageRawData
// Size: 0xE0 (Inherited: 0x0)
struct FOpenWorldFoliageRawData
{
	struct TArray<struct FTransform> Transforms; // 0x0(0x10)
	struct FSoftObjectPath MeshType; // 0x10(0x18)
	struct TArray<struct UMaterialInterface*> OverrideMaterials; // 0x28(0x10)
	uint8_t Pad_0x38[0x15]; // 0x38(0x15)
	uint8_t bCastShadow : 1; // 0x4D(0x1), Mask(0x1)
	uint8_t BitPad_0x4D_1 : 7; // 0x4D(0x1)
	uint8_t bCastDynamicShadow : 1; // 0x4E(0x1), Mask(0x1)
	uint8_t BitPad_0x4E_1 : 7; // 0x4E(0x1)
	uint8_t bCastStaticShadow : 1; // 0x4F(0x1), Mask(0x1)
	uint8_t BitPad_0x4F_1 : 7; // 0x4F(0x1)
	uint8_t bCastShadowAsTwoSided : 1; // 0x50(0x1), Mask(0x1)
	uint8_t BitPad_0x50_1 : 7; // 0x50(0x1)
	uint8_t bAffectDynamicIndirectLighting : 1; // 0x51(0x1), Mask(0x1)
	uint8_t BitPad_0x51_1 : 7; // 0x51(0x1)
	uint8_t bAffectDistanceFieldLighting : 1; // 0x52(0x1), Mask(0x1)
	uint8_t BitPad_0x52_1 : 7; // 0x52(0x1)
	EComponentMobility Mobility; // 0x53(0x1)
	uint8_t bSupportDestruction : 1; // 0x54(0x1), Mask(0x1)
	uint8_t BitPad_0x54_1 : 7; // 0x54(0x1)
	uint8_t bSupportsGPUDriven : 1; // 0x55(0x1), Mask(0x1)
	uint8_t BitPad_0x55_1 : 7; // 0x55(0x1)
	uint8_t Pad_0x56[0x2]; // 0x56(0x2)
	int32_t Hash; // 0x58(0x4)
	int32_t bEnableDensityScaling; // 0x5C(0x4)
	struct FSoftObjectPath SourcePath; // 0x60(0x18)
	int32_t RawHash; // 0x78(0x4)
	uint8_t Pad_0x7C[0x4]; // 0x7C(0x4)
	struct FSoftObjectPath RawMeshType; // 0x80(0x18)
	struct TArray<struct UMaterialInterface*> RawOverrideMaterials; // 0x98(0x10)
	struct FOpenWorldFoliageTypeRawData ScalabilityFoliageType; // 0xA8(0x28)
	uint8_t Pad_0xD0[0x10]; // 0xD0(0x10)
};

// Object: Class OpenWorldFoliageStreaming.OpenWorldFoliageAsset
// Size: 0xA8 (Inherited: 0x28)
struct UOpenWorldFoliageAsset : UObject
{
	struct TArray<struct FOpenWorldFoliageRawData> FoliageData; // 0x28(0x10)
	struct TArray<int8_t> CoverTypeMask; // 0x38(0x10)
	struct FFoliagePhysicsData PhysicsData; // 0x48(0x40)
	struct FBox Bounds; // 0x88(0x1C)
	uint8_t Pad_0xA4[0x4]; // 0xA4(0x4)
	DEFINE_UE_CLASS_HELPERS(UOpenWorldFoliageAsset, "OpenWorldFoliageAsset")

};

// Object: Class OpenWorldFoliageStreaming.OpenWorldFoliageStatics
// Size: 0x28 (Inherited: 0x28)
struct UOpenWorldFoliageStatics : UBlueprintFunctionLibrary
{

	// Object: Function OpenWorldFoliageStreaming.OpenWorldFoliageStatics.QueryCoverType
	// Flags: [Final|Native|Static|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x7cf2b90
	// Params: [ Num(2) Size(0x14) ]
	static struct FName QueryCoverType(struct FVector WorldPosition);
	DEFINE_UE_CLASS_HELPERS(UOpenWorldFoliageStatics, "OpenWorldFoliageStatics")

};

// Object: Class OpenWorldFoliageStreaming.CrackedInfoManager
// Size: 0x410 (Inherited: 0x370)
struct ACrackedInfoManager : AActor
{
	uint8_t Pad_0x370[0xA0]; // 0x370(0xA0)
	DEFINE_UE_CLASS_HELPERS(ACrackedInfoManager, "CrackedInfoManager")

};

// Object: Class OpenWorldFoliageStreaming.FoliageAssetsStreamer
// Size: 0xBF0 (Inherited: 0x7B0)
struct AFoliageAssetsStreamer : AAssetsStreamer
{
	uint8_t bEnableShadow : 1; // 0x7A1(0x1), Mask(0x1)
	uint8_t bEnableCollision : 1; // 0x7A2(0x1), Mask(0x1)
	uint8_t bSpawnInstance : 1; // 0x7A3(0x1), Mask(0x1)
	uint8_t BitPad_0x7B0_3 : 5; // 0x7B0(0x1)
	uint8_t Pad_0x7B1[0x3F]; // 0x7B1(0x3F)
	struct UHierarchicalInstancedStaticMeshComponent* ComponentClass; // 0x7F0(0x8)
	struct FName FoliageCategory; // 0x7F8(0x8)
	uint8_t bUseCustomizedHISMC : 1; // 0x800(0x1), Mask(0x1)
	uint8_t BitPad_0x800_1 : 7; // 0x800(0x1)
	uint8_t Pad_0x801[0x3]; // 0x801(0x3)
	int32_t TickInterval; // 0x804(0x4)
	uint8_t Pad_0x808[0x258]; // 0x808(0x258)
	struct TWeakObjectPtr<struct UOpenWorldBillboardBatchComponent> BillboardBatcher; // 0xA60(0x8)
	struct TWeakObjectPtr<struct UOpenWorldBillboardBatchComponent> Billboard2DirBatcher; // 0xA68(0x8)
	uint8_t Pad_0xA70[0x180]; // 0xA70(0x180)
	DEFINE_UE_CLASS_HELPERS(AFoliageAssetsStreamer, "FoliageAssetsStreamer")

};

// Object: Class OpenWorldFoliageStreaming.FoliageSwapVolume
// Size: 0x3D0 (Inherited: 0x3A8)
struct AFoliageSwapVolume : AVolume
{
	struct TArray<struct FSoftObjectPath> MainWorldStreamers; // 0x3A8(0x10)
	struct TArray<struct FSoftObjectPath> SubWorldStreamers; // 0x3B8(0x10)
	EFoliageSwapType Switches; // 0x3C8(0x4)
	uint8_t Pad_0x3CC[0x4]; // 0x3CC(0x4)
	DEFINE_UE_CLASS_HELPERS(AFoliageSwapVolume, "FoliageSwapVolume")

};

} // namespace SDK
