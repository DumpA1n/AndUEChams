#pragma once

#include "../CoreUObject_classes.hpp"
#include "Engine.hpp"

namespace SDK
{

// Package: Foliage
// Enums: 6
// Structs: 4
// Classes: 15

struct AActor;
struct AVolume;
enum class EComponentMobility : uint8_t;
enum class EHasCustomNavigableGeometry : uint8_t;
enum class ELightmapType : uint8_t;
enum class ERuntimeVirtualTextureMainPassType : uint8_t;
struct FHitResult;
struct UCapsuleComponent;
struct UMaterialInterface;
struct UPrimitiveComponent;
struct URuntimeVirtualTexture;
struct UStaticMesh;
struct FFoliageImportType;
struct FFoliageVertexColorChannelMask;
struct FFoliageTypeObject;
struct FProceduralFoliageInstance;
struct UFoliageEd_ImportTypeRedirector;
struct UFoliageEd_LogicTypeRedirector;
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

// Object: Enum Foliage.EFoliageTypeMode
enum class EFoliageTypeMode : uint8_t
{
	Share = 0,
	HDReplace = 1,
	HDOnly = 2,
	MobileOnly = 3,
	EFoliageTypeMode_MAX = 4
};

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

// Object: ScriptStruct Foliage.FoliageImportType
// Size: 0x18 (Inherited: 0x0)
struct FFoliageImportType
{
	struct FString StringType; // 0x0(0x10)
	struct UFoliageType* FoliageType; // 0x10(0x8)
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

// Object: ScriptStruct Foliage.FoliageTypeObject
// Size: 0x20 (Inherited: 0x0)
struct FFoliageTypeObject
{
	struct UObject* FoliageTypeObject; // 0x0(0x8)
	struct UFoliageType* TypeInstance; // 0x8(0x8)
	uint8_t bIsAsset : 1; // 0x10(0x1), Mask(0x1)
	uint8_t BitPad_0x10_1 : 7; // 0x10(0x1)
	uint8_t Pad_0x11[0x7]; // 0x11(0x7)
	struct UFoliageType_InstancedStaticMesh* Type; // 0x18(0x8)
};

// Object: ScriptStruct Foliage.ProceduralFoliageInstance
// Size: 0x60 (Inherited: 0x0)
struct FProceduralFoliageInstance
{
	struct FVector Location; // 0x0(0xC)
	uint8_t Pad_0xC[0x4]; // 0xC(0x4)
	struct FQuat Rotation; // 0x10(0x10)
	struct FVector Normal; // 0x20(0xC)
	float Age; // 0x2C(0x4)
	float Scale; // 0x30(0x4)
	uint8_t Pad_0x34[0x4]; // 0x34(0x4)
	struct UFoliageType* Type; // 0x38(0x8)
	uint8_t Pad_0x40[0x20]; // 0x40(0x20)
};

// Object: Class Foliage.FoliageEd_ImportTypeRedirector
// Size: 0x38 (Inherited: 0x28)
struct UFoliageEd_ImportTypeRedirector : UObject
{
	DEFINE_UE_CLASS_HELPERS(UFoliageEd_ImportTypeRedirector, "FoliageEd_ImportTypeRedirector")

	struct TArray<struct FFoliageImportType> Types; // 0x28(0x10)
};

// Object: Class Foliage.FoliageEd_LogicTypeRedirector
// Size: 0x48 (Inherited: 0x28)
struct UFoliageEd_LogicTypeRedirector : UObject
{
	DEFINE_UE_CLASS_HELPERS(UFoliageEd_LogicTypeRedirector, "FoliageEd_LogicTypeRedirector")

	struct FString LogicType; // 0x28(0x10)
	struct TArray<struct UFoliageType*> FoliageTypes; // 0x38(0x10)

	// Object: Function Foliage.FoliageEd_LogicTypeRedirector.AddFoliageType
	// Flags: [Final|BlueprintCosmetic|Native|Public|BlueprintCallable]
	// Offset: 0x163b3c00
	// Params: [ Num(1) Size(0x8) ]
	void AddFoliageType(struct UFoliageType* InFoliageType);
};

// Object: Class Foliage.FoliageInstancedStaticMeshComponent
// Size: 0xB50 (Inherited: 0xB30)
struct UFoliageInstancedStaticMeshComponent : UHierarchicalInstancedStaticMeshComponent
{
	DEFINE_UE_CLASS_HELPERS(UFoliageInstancedStaticMeshComponent, "FoliageInstancedStaticMeshComponent")

	struct FMulticastInlineDelegate OnInstanceTakePointDamage; // 0xB28(0x10)
	struct FMulticastInlineDelegate OnInstanceTakeRadialDamage; // 0xB38(0x10)
};

// Object: Class Foliage.FoliageStatistics
// Size: 0x28 (Inherited: 0x28)
struct UFoliageStatistics : UBlueprintFunctionLibrary
{
	DEFINE_UE_CLASS_HELPERS(UFoliageStatistics, "FoliageStatistics")

	// Object: Function Foliage.FoliageStatistics.FoliageOverlappingSphereCount
	// Flags: [Final|Native|Static|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x163b3dec
	// Params: [ Num(5) Size(0x24) ]
	static int32_t FoliageOverlappingSphereCount(struct UObject* WorldContextObject, struct UStaticMesh* StaticMesh, struct FVector CenterPosition, float radius);

	// Object: Function Foliage.FoliageStatistics.FoliageOverlappingBoxCount
	// Flags: [Final|Native|Static|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x163b3cc8
	// Params: [ Num(4) Size(0x30) ]
	static int32_t FoliageOverlappingBoxCount(struct UObject* WorldContextObject, struct UStaticMesh* StaticMesh, struct FBox Box);
};

// Object: Class Foliage.FoliageType
// Size: 0x388 (Inherited: 0x28)
struct UFoliageType : UObject
{
	DEFINE_UE_CLASS_HELPERS(UFoliageType, "FoliageType")

	EFoliageTypeMode FoliageTypeMode; // 0x28(0x1)
	uint8_t Pad_0x29[0x3]; // 0x29(0x3)
	struct FGuid UpdateGuid; // 0x2C(0x10)
	float Density; // 0x3C(0x4)
	float DensityAdjustmentFactor; // 0x40(0x4)
	float radius; // 0x44(0x4)
	uint8_t bSingleInstanceModeOverrideRadius : 1; // 0x48(0x1), Mask(0x1)
	uint8_t BitPad_0x48_1 : 7; // 0x48(0x1)
	uint8_t Pad_0x49[0x3]; // 0x49(0x3)
	float SingleInstanceModeRadius; // 0x4C(0x4)
	EFoliageScaling Scaling; // 0x50(0x1)
	uint8_t Pad_0x51[0x3]; // 0x51(0x3)
	struct FFloatInterval ScaleX; // 0x54(0x8)
	struct FFloatInterval ScaleY; // 0x5C(0x8)
	struct FFloatInterval ScaleZ; // 0x64(0x8)
	struct FFoliageVertexColorChannelMask VertexColorMaskByChannel[0x4]; // 0x6C(0x30)
	EFoliageVertexColorMask VertexColorMask; // 0x9C(0x1)
	uint8_t Pad_0x9D[0x3]; // 0x9D(0x3)
	float VertexColorMaskThreshold; // 0xA0(0x4)
	uint8_t VertexColorMaskInvert : 1; // 0xA4(0x1), Mask(0x1)
	uint8_t BitPad_0xA4_1 : 7; // 0xA4(0x1)
	uint8_t Pad_0xA5[0x3]; // 0xA5(0x3)
	struct FFloatInterval ZOffset; // 0xA8(0x8)
	uint8_t AlignToNormal : 1; // 0xB0(0x1), Mask(0x1)
	uint8_t BitPad_0xB0_1 : 7; // 0xB0(0x1)
	uint8_t Pad_0xB1[0x3]; // 0xB1(0x3)
	float AlignMaxAngle; // 0xB4(0x4)
	uint8_t RandomYaw : 1; // 0xB8(0x1), Mask(0x1)
	uint8_t BitPad_0xB8_1 : 7; // 0xB8(0x1)
	uint8_t Pad_0xB9[0x3]; // 0xB9(0x3)
	float RandomPitchAngle; // 0xBC(0x4)
	struct FFloatInterval GroundSlopeAngle; // 0xC0(0x8)
	struct FFloatInterval Height; // 0xC8(0x8)
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
	EComponentMobility Mobility; // 0x13C(0x1)
	uint8_t Pad_0x13D[0x3]; // 0x13D(0x3)
	struct FInt32Interval CullDistance; // 0x140(0x8)
	struct FInt32Interval CullDistance_HD; // 0x148(0x8)
	uint8_t bEnableStaticLighting : 1; // 0x150(0x1), Mask(0x1)
	uint8_t CastShadow : 1; // 0x150(0x1), Mask(0x2)
	uint8_t CastShadow_HD : 1; // 0x150(0x1), Mask(0x4)
	uint8_t bAffectDynamicIndirectLighting : 1; // 0x150(0x1), Mask(0x8)
	uint8_t bAffectDistanceFieldLighting : 1; // 0x150(0x1), Mask(0x10)
	uint8_t bCastDynamicShadow : 1; // 0x150(0x1), Mask(0x20)
	uint8_t bCastStaticShadow : 1; // 0x150(0x1), Mask(0x40)
	uint8_t bCastShadowAsTwoSided : 1; // 0x150(0x1), Mask(0x80)
	uint8_t bCastDynamicShadow_HD : 1; // 0x151(0x1), Mask(0x1)
	uint8_t bCastStaticShadow_HD : 1; // 0x151(0x1), Mask(0x2)
	uint8_t bCastShadowAsTwoSided_HD : 1; // 0x151(0x1), Mask(0x4)
	uint8_t bReceivesDecals : 1; // 0x151(0x1), Mask(0x8)
	uint8_t bOverrideLightMapRes : 1; // 0x151(0x1), Mask(0x10)
	uint8_t BitPad_0x151_5 : 3; // 0x151(0x1)
	uint8_t Pad_0x152[0x2]; // 0x152(0x2)
	int32_t OverriddenLightMapRes; // 0x154(0x4)
	ELightmapType LightmapType; // 0x158(0x1)
	uint8_t bUseAsOccluder : 1; // 0x159(0x1), Mask(0x1)
	uint8_t bVisibleInRayTracing : 1; // 0x159(0x1), Mask(0x2)
	uint8_t bUseGPUDriven : 1; // 0x159(0x1), Mask(0x4)
	uint8_t BitPad_0x159_3 : 5; // 0x159(0x1)
	uint8_t Pad_0x15A[0x6]; // 0x15A(0x6)
	struct FBodyInstance BodyInstance; // 0x160(0x120)
	EHasCustomNavigableGeometry CustomNavigableGeometry; // 0x280(0x1)
	struct FLightingChannels LightingChannels; // 0x281(0x1)
	uint8_t bRenderCustomDepth : 1; // 0x282(0x1), Mask(0x1)
	uint8_t BitPad_0x282_1 : 7; // 0x282(0x1)
	uint8_t Pad_0x283[0x1]; // 0x283(0x1)
	int32_t CustomDepthStencilValue; // 0x284(0x4)
	int32_t TranslucencySortPriority; // 0x288(0x4)
	float CollisionRadius; // 0x28C(0x4)
	float ShadeRadius; // 0x290(0x4)
	int32_t NumSteps; // 0x294(0x4)
	float InitialSeedDensity; // 0x298(0x4)
	float AverageSpreadDistance; // 0x29C(0x4)
	float SpreadVariance; // 0x2A0(0x4)
	int32_t SeedsPerStep; // 0x2A4(0x4)
	int32_t DistributionSeed; // 0x2A8(0x4)
	float MaxInitialSeedOffset; // 0x2AC(0x4)
	uint8_t bCanGrowInShade : 1; // 0x2B0(0x1), Mask(0x1)
	uint8_t BitPad_0x2B0_1 : 7; // 0x2B0(0x1)
	uint8_t bSpawnsInShade : 1; // 0x2B1(0x1), Mask(0x1)
	uint8_t BitPad_0x2B1_1 : 7; // 0x2B1(0x1)
	uint8_t Pad_0x2B2[0x2]; // 0x2B2(0x2)
	float MaxInitialAge; // 0x2B4(0x4)
	float MaxAge; // 0x2B8(0x4)
	float OverlapPriority; // 0x2BC(0x4)
	struct FFloatInterval ProceduralScale; // 0x2C0(0x8)
	struct FRuntimeFloatCurve ScaleCurve; // 0x2C8(0xA0)
	int32_t ChangeCount; // 0x368(0x4)
	uint8_t ReapplyDensity : 1; // 0x36C(0x1), Mask(0x1)
	uint8_t ReapplyRadius : 1; // 0x36C(0x1), Mask(0x2)
	uint8_t ReapplyAlignToNormal : 1; // 0x36C(0x1), Mask(0x4)
	uint8_t ReapplyRandomYaw : 1; // 0x36C(0x1), Mask(0x8)
	uint8_t ReapplyScaling : 1; // 0x36C(0x1), Mask(0x10)
	uint8_t ReapplyScaleX : 1; // 0x36C(0x1), Mask(0x20)
	uint8_t ReapplyScaleY : 1; // 0x36C(0x1), Mask(0x40)
	uint8_t ReapplyScaleZ : 1; // 0x36C(0x1), Mask(0x80)
	uint8_t ReapplyRandomPitchAngle : 1; // 0x36D(0x1), Mask(0x1)
	uint8_t ReapplyGroundSlope : 1; // 0x36D(0x1), Mask(0x2)
	uint8_t ReapplyHeight : 1; // 0x36D(0x1), Mask(0x4)
	uint8_t ReapplyLandscapeLayers : 1; // 0x36D(0x1), Mask(0x8)
	uint8_t ReapplyZOffset : 1; // 0x36D(0x1), Mask(0x10)
	uint8_t ReapplyCollisionWithWorld : 1; // 0x36D(0x1), Mask(0x20)
	uint8_t ReapplyVertexColorMask : 1; // 0x36D(0x1), Mask(0x40)
	uint8_t bEnableDensityScaling : 1; // 0x36D(0x1), Mask(0x80)
	uint8_t Pad_0x36E[0x2]; // 0x36E(0x2)
	struct TArray<struct URuntimeVirtualTexture*> RuntimeVirtualTextures; // 0x370(0x10)
	int32_t VirtualTextureCullMips; // 0x380(0x4)
	ERuntimeVirtualTextureMainPassType VirtualTextureRenderPassType; // 0x384(0x1)
	uint8_t Pad_0x385[0x3]; // 0x385(0x3)

	// Object: Function Foliage.FoliageType.SetCullDistanceHD
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x163b42f0
	// Params: [ Num(2) Size(0x8) ]
	void SetCullDistanceHD(int32_t InMin, int32_t InMax);

	// Object: Function Foliage.FoliageType.SetCullDistance
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x163b4214
	// Params: [ Num(2) Size(0x8) ]
	void SetCullDistance(int32_t InMin, int32_t InMax);

	// Object: Function Foliage.FoliageType.GetCullDistanceMin
	// Flags: [Final|RequiredAPI|Native|Public|BlueprintCallable]
	// Offset: 0x163b41f8
	// Params: [ Num(1) Size(0x4) ]
	int32_t GetCullDistanceMin();

	// Object: Function Foliage.FoliageType.GetCullDistanceMax
	// Flags: [Final|RequiredAPI|Native|Public|BlueprintCallable]
	// Offset: 0x163b41dc
	// Params: [ Num(1) Size(0x4) ]
	int32_t GetCullDistanceMax();

	// Object: Function Foliage.FoliageType.GetCullDistanceHDMin
	// Flags: [Final|RequiredAPI|Native|Public|BlueprintCallable]
	// Offset: 0x163b41c0
	// Params: [ Num(1) Size(0x4) ]
	int32_t GetCullDistanceHDMin();

	// Object: Function Foliage.FoliageType.GetCullDistanceHDMax
	// Flags: [Final|RequiredAPI|Native|Public|BlueprintCallable]
	// Offset: 0x163b41a4
	// Params: [ Num(1) Size(0x4) ]
	int32_t GetCullDistanceHDMax();
};

// Object: Class Foliage.FoliageType_Actor
// Size: 0x3A0 (Inherited: 0x388)
struct UFoliageType_Actor : UFoliageType
{
	DEFINE_UE_CLASS_HELPERS(UFoliageType_Actor, "FoliageType_Actor")

	struct AActor* ActorClass; // 0x388(0x8)
	struct AActor* ActorClassHD; // 0x390(0x8)
	uint8_t bShouldAttachToBaseComponent : 1; // 0x398(0x1), Mask(0x1)
	uint8_t BitPad_0x398_1 : 7; // 0x398(0x1)
	uint8_t Pad_0x399[0x7]; // 0x399(0x7)
};

// Object: Class Foliage.FoliageType_InstancedStaticMesh
// Size: 0x3C0 (Inherited: 0x388)
struct UFoliageType_InstancedStaticMesh : UFoliageType
{
	DEFINE_UE_CLASS_HELPERS(UFoliageType_InstancedStaticMesh, "FoliageType_InstancedStaticMesh")

	struct UStaticMesh* Mesh; // 0x388(0x8)
	struct UStaticMesh* HDMesh; // 0x390(0x8)
	struct TArray<struct UMaterialInterface*> OverrideMaterials; // 0x398(0x10)
	struct TArray<struct UMaterialInterface*> OverrideMaterials_HD; // 0x3A8(0x10)
	struct UFoliageInstancedStaticMeshComponent* ComponentClass; // 0x3B8(0x8)
};

// Object: Class Foliage.InstancedFoliageActor
// Size: 0x3C0 (Inherited: 0x370)
struct AInstancedFoliageActor : AActor
{
	DEFINE_UE_CLASS_HELPERS(AInstancedFoliageActor, "InstancedFoliageActor")

	uint8_t Pad_0x370[0x50]; // 0x370(0x50)
};

// Object: Class Foliage.InteractiveFoliageActor
// Size: 0x3E0 (Inherited: 0x380)
struct AInteractiveFoliageActor : AStaticMeshActor
{
	DEFINE_UE_CLASS_HELPERS(AInteractiveFoliageActor, "InteractiveFoliageActor")

	struct UCapsuleComponent* CapsuleComponent; // 0x380(0x8)
	struct FVector TouchingActorEntryPosition; // 0x388(0xC)
	struct FVector FoliageVelocity; // 0x394(0xC)
	struct FVector FoliageForce; // 0x3A0(0xC)
	struct FVector FoliagePosition; // 0x3AC(0xC)
	float FoliageDamageImpulseScale; // 0x3B8(0x4)
	float FoliageTouchImpulseScale; // 0x3BC(0x4)
	float FoliageStiffness; // 0x3C0(0x4)
	float FoliageStiffnessQuadratic; // 0x3C4(0x4)
	float FoliageDamping; // 0x3C8(0x4)
	float MaxDamageImpulse; // 0x3CC(0x4)
	float MaxTouchImpulse; // 0x3D0(0x4)
	float MaxForce; // 0x3D4(0x4)
	float Mass; // 0x3D8(0x4)
	uint8_t Pad_0x3DC[0x4]; // 0x3DC(0x4)

	// Object: Function Foliage.InteractiveFoliageActor.CapsuleTouched
	// Flags: [Final|Native|Protected|HasOutParms]
	// Offset: 0x163b46b4
	// Params: [ Num(6) Size(0xA8) ]
	void CapsuleTouched(struct UPrimitiveComponent* OverlappedComp, struct AActor* Other, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, uint8_t bFromSweep, const struct FHitResult& OverlapInfo);
};

// Object: Class Foliage.InteractiveFoliageComponent
// Size: 0x840 (Inherited: 0x830)
struct UInteractiveFoliageComponent : UStaticMeshComponent
{
	DEFINE_UE_CLASS_HELPERS(UInteractiveFoliageComponent, "InteractiveFoliageComponent")

	uint8_t Pad_0x830[0x10]; // 0x830(0x10)
};

// Object: Class Foliage.ProceduralFoliageBlockingVolume
// Size: 0x3B0 (Inherited: 0x3A8)
struct AProceduralFoliageBlockingVolume : AVolume
{
	DEFINE_UE_CLASS_HELPERS(AProceduralFoliageBlockingVolume, "ProceduralFoliageBlockingVolume")

	struct AProceduralFoliageVolume* ProceduralFoliageVolume; // 0x3A8(0x8)
};

// Object: Class Foliage.ProceduralFoliageComponent
// Size: 0x120 (Inherited: 0xF8)
struct UProceduralFoliageComponent : UActorComponent
{
	DEFINE_UE_CLASS_HELPERS(UProceduralFoliageComponent, "ProceduralFoliageComponent")

	struct UProceduralFoliageSpawner* FoliageSpawner; // 0xF8(0x8)
	float TileOverlap; // 0x100(0x4)
	uint8_t Pad_0x104[0x4]; // 0x104(0x4)
	struct AVolume* SpawningVolume; // 0x108(0x8)
	struct FGuid ProceduralGuid; // 0x110(0x10)
};

// Object: Class Foliage.ProceduralFoliageSpawner
// Size: 0x70 (Inherited: 0x28)
struct UProceduralFoliageSpawner : UObject
{
	DEFINE_UE_CLASS_HELPERS(UProceduralFoliageSpawner, "ProceduralFoliageSpawner")

	int32_t RandomSeed; // 0x28(0x4)
	float TileSize; // 0x2C(0x4)
	int32_t NumUniqueTiles; // 0x30(0x4)
	float MinimumQuadTreeSize; // 0x34(0x4)
	uint8_t Pad_0x38[0x8]; // 0x38(0x8)
	struct TArray<struct FFoliageTypeObject> FoliageTypes; // 0x40(0x10)
	uint8_t bNeedsSimulation : 1; // 0x50(0x1), Mask(0x1)
	uint8_t BitPad_0x50_1 : 7; // 0x50(0x1)
	uint8_t Pad_0x51[0x1F]; // 0x51(0x1F)

	// Object: Function Foliage.ProceduralFoliageSpawner.Simulate
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x163b4a54
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
// Size: 0x3B0 (Inherited: 0x3A8)
struct AProceduralFoliageVolume : AVolume
{
	DEFINE_UE_CLASS_HELPERS(AProceduralFoliageVolume, "ProceduralFoliageVolume")

	struct UProceduralFoliageComponent* ProceduralComponent; // 0x3A8(0x8)
};

} // namespace SDK
