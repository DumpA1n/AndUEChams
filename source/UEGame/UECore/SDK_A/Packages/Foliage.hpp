#pragma once

#include "../CoreUObject_classes.hpp"
#include "Engine.hpp"

namespace SDK
{

// Package: Foliage
// Enums: 5
// Structs: 4
// Classes: 13

struct AActor;
struct AVolume;
enum class ELightmapType : uint8_t;
enum class ERendererStencilMask : uint8_t;
enum class ERuntimeVirtualTextureMainPassType : uint8_t;
enum class EShadowCaptureLayer : uint8_t;
struct FHitResult;
struct UCapsuleComponent;
struct UMaterialInterface;
struct UPrimitiveComponent;
struct URuntimeVirtualTexture;
struct UStaticMesh;
struct FFoliageVertexColorChannelMask;
struct FSpecificClimateStaticMesh;
struct FFoliageTypeObject;
struct FProceduralFoliageInstance;
struct UFoliageInstancedStaticMeshComponent;
struct UFoliageStatistics;
struct UFoliageType;
struct UFoliageType_Actor;
struct UFoliageType_InstancedStaticMesh;
struct AInstancedFoliageActor;
struct AInteractiveFoliageActor;
struct UInteractiveFoliageComponent;
struct AProceduralFoliageBlockingVolume;
struct UProceduralFoliageComponent;
struct UProceduralFoliageSpawner;
struct UProceduralFoliageTile;
struct AProceduralFoliageVolume;

// Object: Enum Foliage.EFoliageScaling
enum class EFoliageScaling : uint8_t
{
	Uniform = 0,
	Free = 1,
	LockXY = 2,
	LockXZ = 3,
	LockYZ = 4,
	EFoliageScaling_MAX = 5
};

// Object: Enum Foliage.EVertexColorMaskChannel
enum class EVertexColorMaskChannel : uint8_t
{
	Red = 0,
	Green = 1,
	Blue = 2,
	Alpha = 3,
	MAX_None = 4,
	EVertexColorMaskChannel_MAX = 5
};

// Object: Enum Foliage.FoliageVertexColorMask
enum class EFoliageVertexColorMask : uint8_t
{
	FOLIAGEVERTEXCOLORMASK_Disabled = 0,
	FOLIAGEVERTEXCOLORMASK_Red = 1,
	FOLIAGEVERTEXCOLORMASK_Green = 2,
	FOLIAGEVERTEXCOLORMASK_Blue = 3,
	FOLIAGEVERTEXCOLORMASK_Alpha = 4,
	FOLIAGEVERTEXCOLORMASK_MAX = 5
};

// Object: Enum Foliage.ESimulationQuery
enum class ESimulationQuery : uint8_t
{
	None = 0,
	CollisionOverlap = 1,
	ShadeOverlap = 2,
	AnyOverlap = 3,
	ESimulationQuery_MAX = 4
};

// Object: Enum Foliage.ESimulationOverlap
enum class ESimulationOverlap : uint8_t
{
	CollisionOverlap = 0,
	ShadeOverlap = 1,
	None = 2,
	ESimulationOverlap_MAX = 3
};

// Object: ScriptStruct Foliage.FoliageVertexColorChannelMask
// Size: 0xC (Inherited: 0x0)
struct FFoliageVertexColorChannelMask
{
	uint8_t UseMask : 1; // 0x0(0x1), Mask(0x1)
	uint8_t BitPad_0x0_1 : 7; // 0x0(0x1)
	uint8_t Pad_0x1[0x3]; // 0x1(0x3)
	float MaskThreshold; // 0x4(0x4)
	uint8_t InvertMask : 1; // 0x8(0x1), Mask(0x1)
	uint8_t BitPad_0x8_1 : 7; // 0x8(0x1)
	uint8_t Pad_0x9[0x3]; // 0x9(0x3)
};

// Object: ScriptStruct Foliage.SpecificClimateStaticMesh
// Size: 0x18 (Inherited: 0x0)
struct FSpecificClimateStaticMesh
{
	struct FSoftObjectPath StaticMeshPath; // 0x0(0x18)
};

// Object: ScriptStruct Foliage.FoliageTypeObject
// Size: 0x20 (Inherited: 0x0)
struct FFoliageTypeObject
{
	struct UObject* FoliageTypeObject; // 0x0(0x8)
	struct UFoliageType* TypeInstance; // 0x8(0x8)
	bool bIsAsset; // 0x10(0x1)
	uint8_t Pad_0x11[0x7]; // 0x11(0x7)
	struct UFoliageType_InstancedStaticMesh* Type; // 0x18(0x8)
};

// Object: ScriptStruct Foliage.ProceduralFoliageInstance
// Size: 0x50 (Inherited: 0x0)
struct FProceduralFoliageInstance
{
	struct FQuat Rotation; // 0x0(0x10)
	struct FVector Location; // 0x10(0xC)
	float Age; // 0x1C(0x4)
	struct FVector Normal; // 0x20(0xC)
	float Scale; // 0x2C(0x4)
	struct UFoliageType* Type; // 0x30(0x8)
	uint8_t Pad_0x38[0x18]; // 0x38(0x18)
};

// Object: Class Foliage.FoliageInstancedStaticMeshComponent
// Size: 0x980 (Inherited: 0x950)
struct UFoliageInstancedStaticMeshComponent : UHierarchicalInstancedStaticMeshComponent
{
	DEFINE_UE_CLASS_HELPERS(UFoliageInstancedStaticMeshComponent, "FoliageInstancedStaticMeshComponent")

	struct FMulticastInlineDelegate OnInstanceTakePointDamage; // 0x948(0x10)
	struct FMulticastInlineDelegate OnInstanceTakeRadialDamage; // 0x958(0x10)
	struct FGuid GenerationGuid; // 0x968(0x10)
};

// Object: Class Foliage.FoliageStatistics
// Size: 0x28 (Inherited: 0x28)
struct UFoliageStatistics : UBlueprintFunctionLibrary
{
	DEFINE_UE_CLASS_HELPERS(UFoliageStatistics, "FoliageStatistics")

	// Object: Function Foliage.FoliageStatistics.FoliageOverlappingSphereCount
	// Flags: [Final|Native|Static|Public|HasDefaults|BlueprintCallable]
	// Offset: 0xae07c74
	// Params: [ Num(5) Size(0x24) ]
	static int32_t FoliageOverlappingSphereCount(struct UObject* WorldContextObject, struct UStaticMesh* StaticMesh, struct FVector CenterPosition, float Radius);

	// Object: Function Foliage.FoliageStatistics.FoliageOverlappingBoxCount
	// Flags: [Final|Native|Static|Public|HasDefaults|BlueprintCallable]
	// Offset: 0xae07b44
	// Params: [ Num(4) Size(0x30) ]
	static int32_t FoliageOverlappingBoxCount(struct UObject* WorldContextObject, struct UStaticMesh* StaticMesh, struct FBox Box);
};

// Object: Class Foliage.FoliageType
// Size: 0x3B0 (Inherited: 0x28)
struct UFoliageType : UObject
{
	DEFINE_UE_CLASS_HELPERS(UFoliageType, "FoliageType")

	struct FGuid UpdateGuid; // 0x28(0x10)
	float Density; // 0x38(0x4)
	float DensityAdjustmentFactor; // 0x3C(0x4)
	float Radius; // 0x40(0x4)
	bool bSingleInstanceModeOverrideRadius; // 0x44(0x1)
	uint8_t Pad_0x45[0x3]; // 0x45(0x3)
	float SingleInstanceModeRadius; // 0x48(0x4)
	EFoliageScaling Scaling; // 0x4C(0x1)
	uint8_t Pad_0x4D[0x3]; // 0x4D(0x3)
	struct FFloatInterval ScaleX; // 0x50(0x8)
	struct FFloatInterval ScaleY; // 0x58(0x8)
	struct FFloatInterval ScaleZ; // 0x60(0x8)
	struct FFoliageVertexColorChannelMask VertexColorMaskByChannel[0x4]; // 0x68(0x30)
	uint8_t VertexColorMask; // 0x98(0x1)
	uint8_t Pad_0x99[0x3]; // 0x99(0x3)
	float VertexColorMaskThreshold; // 0x9C(0x4)
	uint8_t VertexColorMaskInvert : 1; // 0xA0(0x1), Mask(0x1)
	uint8_t BitPad_0xA0_1 : 7; // 0xA0(0x1)
	uint8_t Pad_0xA1[0x3]; // 0xA1(0x3)
	struct FFloatInterval ZOffset; // 0xA4(0x8)
	uint8_t AlignToNormal : 1; // 0xAC(0x1), Mask(0x1)
	uint8_t BitPad_0xAC_1 : 7; // 0xAC(0x1)
	uint8_t Pad_0xAD[0x3]; // 0xAD(0x3)
	float AlignMaxAngle; // 0xB0(0x4)
	uint8_t RandomYaw : 1; // 0xB4(0x1), Mask(0x1)
	uint8_t BitPad_0xB4_1 : 7; // 0xB4(0x1)
	uint8_t Pad_0xB5[0x3]; // 0xB5(0x3)
	float RandomPitchAngle; // 0xB8(0x4)
	struct FFloatInterval GroundSlopeAngle; // 0xBC(0x8)
	struct FFloatInterval Height; // 0xC4(0x8)
	uint8_t Pad_0xCC[0x4]; // 0xCC(0x4)
	struct TArray<struct FName> LandscapeLayers; // 0xD0(0x10)
	float MinimumLayerWeight; // 0xE0(0x4)
	uint8_t Pad_0xE4[0x4]; // 0xE4(0x4)
	struct TArray<struct FName> ExclusionLandscapeLayers; // 0xE8(0x10)
	float MinimumExclusionLayerWeight; // 0xF8(0x4)
	struct FName LandscapeLayer; // 0xFC(0x8)
	uint8_t CollisionWithWorld : 1; // 0x104(0x1), Mask(0x1)
	uint8_t BitPad_0x104_1 : 7; // 0x104(0x1)
	uint8_t Pad_0x105[0x3]; // 0x105(0x3)
	struct FVector CollisionScale; // 0x108(0xC)
	struct FBoxSphereBounds MeshBounds; // 0x114(0x1C)
	struct FVector LowBoundOriginRadius; // 0x130(0xC)
	uint8_t bReMergeInstancing : 1; // 0x13C(0x1), Mask(0x1)
	uint8_t BitPad_0x13C_1 : 7; // 0x13C(0x1)
	EShadowCaptureLayer ShadowCaptureLayer; // 0x13D(0x1)
	uint8_t bHiddenShadowOnShadowCapture : 1; // 0x13E(0x1), Mask(0x1)
	uint8_t BitPad_0x13E_1 : 7; // 0x13E(0x1)
	uint8_t Mobility; // 0x13F(0x1)
	struct FInt32Interval CullDistance; // 0x140(0x8)
	uint8_t bEnableStaticLighting : 1; // 0x148(0x1), Mask(0x1)
	uint8_t CastShadow : 1; // 0x148(0x1), Mask(0x2)
	uint8_t bAffectDynamicIndirectLighting : 1; // 0x148(0x1), Mask(0x4)
	uint8_t bAffectDistanceFieldLighting : 1; // 0x148(0x1), Mask(0x8)
	uint8_t bCastDynamicShadow : 1; // 0x148(0x1), Mask(0x10)
	uint8_t bCastStaticShadow : 1; // 0x148(0x1), Mask(0x20)
	uint8_t bCastShadowAsTwoSided : 1; // 0x148(0x1), Mask(0x40)
	uint8_t bCSMCacheForceEnable : 1; // 0x148(0x1), Mask(0x80)
	uint8_t bReceivesDecals : 1; // 0x149(0x1), Mask(0x1)
	uint8_t bOverrideLightmapRes : 1; // 0x149(0x1), Mask(0x2)
	uint8_t BitPad_0x149_2 : 6; // 0x149(0x1)
	uint8_t Pad_0x14A[0x2]; // 0x14A(0x2)
	int32_t OverriddenLightMapRes; // 0x14C(0x4)
	ELightmapType LightmapType; // 0x150(0x1)
	uint8_t IndirectLightingCacheQuality; // 0x151(0x1)
	uint8_t bForceUseSkyLightAsDiffuseGI : 1; // 0x152(0x1), Mask(0x1)
	uint8_t bUseAsOccluder : 1; // 0x152(0x1), Mask(0x2)
	uint8_t BitPad_0x152_2 : 6; // 0x152(0x1)
	uint8_t Pad_0x153[0x5]; // 0x153(0x5)
	struct FBodyInstance BodyInstance; // 0x158(0x150)
	uint8_t CustomNavigableGeometry; // 0x2A8(0x1)
	struct FLightingChannels LightingChannels; // 0x2A9(0x1)
	uint8_t bRenderCustomDepth : 1; // 0x2AA(0x1), Mask(0x1)
	uint8_t BitPad_0x2AA_1 : 7; // 0x2AA(0x1)
	ERendererStencilMask CustomDepthStencilWriteMask; // 0x2AB(0x1)
	int32_t CustomDepthStencilValue; // 0x2AC(0x4)
	int32_t TranslucencySortPriority; // 0x2B0(0x4)
	float CollisionRadius; // 0x2B4(0x4)
	float ShadeRadius; // 0x2B8(0x4)
	int32_t NumSteps; // 0x2BC(0x4)
	float InitialSeedDensity; // 0x2C0(0x4)
	float AverageSpreadDistance; // 0x2C4(0x4)
	float SpreadVariance; // 0x2C8(0x4)
	int32_t SeedsPerStep; // 0x2CC(0x4)
	int32_t DistributionSeed; // 0x2D0(0x4)
	float MaxInitialSeedOffset; // 0x2D4(0x4)
	bool bCanGrowInShade; // 0x2D8(0x1)
	bool bSpawnsInShade; // 0x2D9(0x1)
	uint8_t Pad_0x2DA[0x2]; // 0x2DA(0x2)
	float MaxInitialAge; // 0x2DC(0x4)
	float MaxAge; // 0x2E0(0x4)
	float OverlapPriority; // 0x2E4(0x4)
	struct FFloatInterval ProceduralScale; // 0x2E8(0x8)
	struct FRuntimeFloatCurve ScaleCurve; // 0x2F0(0x88)
	int32_t ChangeCount; // 0x378(0x4)
	uint8_t ReapplyDensity : 1; // 0x37C(0x1), Mask(0x1)
	uint8_t ReapplyRadius : 1; // 0x37C(0x1), Mask(0x2)
	uint8_t ReapplyAlignToNormal : 1; // 0x37C(0x1), Mask(0x4)
	uint8_t ReapplyRandomYaw : 1; // 0x37C(0x1), Mask(0x8)
	uint8_t ReapplyScaling : 1; // 0x37C(0x1), Mask(0x10)
	uint8_t ReapplyScaleX : 1; // 0x37C(0x1), Mask(0x20)
	uint8_t ReapplyScaleY : 1; // 0x37C(0x1), Mask(0x40)
	uint8_t ReapplyScaleZ : 1; // 0x37C(0x1), Mask(0x80)
	uint8_t ReapplyRandomPitchAngle : 1; // 0x37D(0x1), Mask(0x1)
	uint8_t ReapplyGroundSlope : 1; // 0x37D(0x1), Mask(0x2)
	uint8_t ReapplyHeight : 1; // 0x37D(0x1), Mask(0x4)
	uint8_t ReapplyLandscapeLayers : 1; // 0x37D(0x1), Mask(0x8)
	uint8_t ReapplyZOffset : 1; // 0x37D(0x1), Mask(0x10)
	uint8_t ReapplyCollisionWithWorld : 1; // 0x37D(0x1), Mask(0x20)
	uint8_t ReapplyVertexColorMask : 1; // 0x37D(0x1), Mask(0x40)
	uint8_t bEnableDensityScaling : 1; // 0x37D(0x1), Mask(0x80)
	uint8_t bEnableDiscardOnLoad : 1; // 0x37E(0x1), Mask(0x1)
	uint8_t BitPad_0x37E_1 : 7; // 0x37E(0x1)
	uint8_t Pad_0x37F[0x1]; // 0x37F(0x1)
	int32_t MinLODForLowEndDevice; // 0x380(0x4)
	uint8_t Pad_0x384[0x4]; // 0x384(0x4)
	struct TArray<struct URuntimeVirtualTexture*> RuntimeVirtualTextures; // 0x388(0x10)
	int32_t VirtualTextureCullMips; // 0x398(0x4)
	ERuntimeVirtualTextureMainPassType VirtualTextureRenderPassType; // 0x39C(0x1)
	uint8_t Pad_0x39D[0x3]; // 0x39D(0x3)
	struct FString CachedFoliageTypeName; // 0x3A0(0x10)
};

// Object: Class Foliage.FoliageType_Actor
// Size: 0x3C0 (Inherited: 0x3B0)
struct UFoliageType_Actor : UFoliageType
{
	DEFINE_UE_CLASS_HELPERS(UFoliageType_Actor, "FoliageType_Actor")

	struct AActor* ActorClass; // 0x3B0(0x8)
	bool bShouldAttachToBaseComponent; // 0x3B8(0x1)
	uint8_t Pad_0x3B9[0x7]; // 0x3B9(0x7)
};

// Object: Class Foliage.FoliageType_InstancedStaticMesh
// Size: 0x470 (Inherited: 0x3B0)
struct UFoliageType_InstancedStaticMesh : UFoliageType
{
	DEFINE_UE_CLASS_HELPERS(UFoliageType_InstancedStaticMesh, "FoliageType_InstancedStaticMesh")

	struct UStaticMesh* Mesh; // 0x3B0(0x8)
	struct TArray<struct UMaterialInterface*> OverrideMaterials; // 0x3B8(0x10)
	struct UFoliageInstancedStaticMeshComponent* ComponentClass; // 0x3C8(0x8)
	struct TMap<struct FString, struct FSpecificClimateStaticMesh> SpecificClimateStaticMeshes; // 0x3D0(0x50)
	struct TMap<struct FString, struct FSpecificClimateStaticMesh> OverrideSpecificStaticMeshes; // 0x420(0x50)
};

// Object: Class Foliage.InstancedFoliageActor
// Size: 0x378 (Inherited: 0x300)
struct AInstancedFoliageActor : AActor
{
	DEFINE_UE_CLASS_HELPERS(AInstancedFoliageActor, "InstancedFoliageActor")

	uint8_t Pad_0x300[0x78]; // 0x300(0x78)
};

// Object: Class Foliage.InteractiveFoliageActor
// Size: 0x370 (Inherited: 0x310)
struct AInteractiveFoliageActor : AStaticMeshActor
{
	DEFINE_UE_CLASS_HELPERS(AInteractiveFoliageActor, "InteractiveFoliageActor")

	struct UCapsuleComponent* CapsuleComponent; // 0x310(0x8)
	struct FVector TouchingActorEntryPosition; // 0x318(0xC)
	struct FVector FoliageVelocity; // 0x324(0xC)
	struct FVector FoliageForce; // 0x330(0xC)
	struct FVector FoliagePosition; // 0x33C(0xC)
	float FoliageDamageImpulseScale; // 0x348(0x4)
	float FoliageTouchImpulseScale; // 0x34C(0x4)
	float FoliageStiffness; // 0x350(0x4)
	float FoliageStiffnessQuadratic; // 0x354(0x4)
	float FoliageDamping; // 0x358(0x4)
	float MaxDamageImpulse; // 0x35C(0x4)
	float MaxTouchImpulse; // 0x360(0x4)
	float MaxForce; // 0x364(0x4)
	float Mass; // 0x368(0x4)
	uint8_t Pad_0x36C[0x4]; // 0x36C(0x4)

	// Object: Function Foliage.InteractiveFoliageActor.CapsuleTouched
	// Flags: [Final|Native|Protected|HasOutParms]
	// Offset: 0xae081f4
	// Params: [ Num(6) Size(0xB8) ]
	void CapsuleTouched(struct UPrimitiveComponent* OverlappedComp, struct AActor* Other, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, const struct FHitResult& OverlapInfo);
};

// Object: Class Foliage.InteractiveFoliageComponent
// Size: 0x7A0 (Inherited: 0x790)
struct UInteractiveFoliageComponent : UStaticMeshComponent
{
	DEFINE_UE_CLASS_HELPERS(UInteractiveFoliageComponent, "InteractiveFoliageComponent")

	uint8_t Pad_0x790[0x10]; // 0x790(0x10)
};

// Object: Class Foliage.ProceduralFoliageBlockingVolume
// Size: 0x340 (Inherited: 0x338)
struct AProceduralFoliageBlockingVolume : AVolume
{
	DEFINE_UE_CLASS_HELPERS(AProceduralFoliageBlockingVolume, "ProceduralFoliageBlockingVolume")

	struct AProceduralFoliageVolume* ProceduralFoliageVolume; // 0x338(0x8)
};

// Object: Class Foliage.ProceduralFoliageComponent
// Size: 0x108 (Inherited: 0xE0)
struct UProceduralFoliageComponent : UActorComponent
{
	DEFINE_UE_CLASS_HELPERS(UProceduralFoliageComponent, "ProceduralFoliageComponent")

	struct UProceduralFoliageSpawner* FoliageSpawner; // 0xE0(0x8)
	float TileOverlap; // 0xE8(0x4)
	uint8_t Pad_0xEC[0x4]; // 0xEC(0x4)
	struct AVolume* SpawningVolume; // 0xF0(0x8)
	struct FGuid ProceduralGuid; // 0xF8(0x10)
};

// Object: Class Foliage.ProceduralFoliageSpawner
// Size: 0x68 (Inherited: 0x28)
struct UProceduralFoliageSpawner : UObject
{
	DEFINE_UE_CLASS_HELPERS(UProceduralFoliageSpawner, "ProceduralFoliageSpawner")

	int32_t RandomSeed; // 0x28(0x4)
	float TileSize; // 0x2C(0x4)
	int32_t NumUniqueTiles; // 0x30(0x4)
	float MinimumQuadTreeSize; // 0x34(0x4)
	uint8_t Pad_0x38[0x8]; // 0x38(0x8)
	struct TArray<struct FFoliageTypeObject> FoliageTypes; // 0x40(0x10)
	uint8_t Pad_0x50[0x18]; // 0x50(0x18)

	// Object: Function Foliage.ProceduralFoliageSpawner.Simulate
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xae08500
	// Params: [ Num(1) Size(0x4) ]
	void Simulate(int32_t NumSteps);
};

// Object: Class Foliage.ProceduralFoliageTile
// Size: 0x158 (Inherited: 0x28)
struct UProceduralFoliageTile : UObject
{
	DEFINE_UE_CLASS_HELPERS(UProceduralFoliageTile, "ProceduralFoliageTile")

	struct UProceduralFoliageSpawner* FoliageSpawner; // 0x28(0x8)
	uint8_t Pad_0x30[0xA0]; // 0x30(0xA0)
	struct TArray<struct FProceduralFoliageInstance> InstancesArray; // 0xD0(0x10)
	uint8_t Pad_0xE0[0x78]; // 0xE0(0x78)
};

// Object: Class Foliage.ProceduralFoliageVolume
// Size: 0x340 (Inherited: 0x338)
struct AProceduralFoliageVolume : AVolume
{
	DEFINE_UE_CLASS_HELPERS(AProceduralFoliageVolume, "ProceduralFoliageVolume")

	struct UProceduralFoliageComponent* ProceduralComponent; // 0x338(0x8)
};

} // namespace SDK
