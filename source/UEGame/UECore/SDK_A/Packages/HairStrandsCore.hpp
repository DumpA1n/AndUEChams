#pragma once

#include "../CoreUObject_classes.hpp"
#include "Engine.hpp"
#include "Niagara.hpp"

namespace SDK
{

// Package: HairStrandsCore
// Enums: 15
// Structs: 34
// Classes: 15

struct AActor;
struct UAssetUserData;
struct UMaterialInterface;
struct UNiagaraComponent;
struct UNiagaraSystem;
struct UPhysicsAsset;
struct USkeletalMesh;
struct UStaticMesh;
struct UTexture2D;
struct FHairGroupInfo;
struct FHairGroupInfoWithVisibility;
struct FHairGroupsMaterial;
struct FHairGroupCardsInfo;
struct FHairGroupCardsTextures;
struct FHairCardsClusterSettings;
struct FHairCardsGeometrySettings;
struct FHairCardsTextureSettings;
struct FHairGroupsProceduralCards;
struct FHairGroupsCardsSourceDescription;
struct FHairGroupsLOD;
struct FHairLODSettings;
struct FHairDecimationSettings;
struct FHairInterpolationSettings;
struct FHairGroupsInterpolation;
struct FHairGroupsMeshesSourceDescription;
struct FHairExternalForces;
struct FHairBendConstraint;
struct FHairCollisionConstraint;
struct FHairStretchConstraint;
struct FHairMaterialConstraints;
struct FHairSolverSettings;
struct FHairStrandsParameters;
struct FHairGroupsPhysics;
struct FHairAdvancedRenderingSettings;
struct FHairGeometrySettings;
struct FHairShadowSettings;
struct FHairGroupsRendering;
struct FGoomBindingGroupInfo;
struct FFollicleMaskOptions;
struct FHairGroupDesc;
struct FGroomHairGroupPreview;
struct FGroomBuildSettings;
struct FGroomConversionSettings;
struct AGroomActor;
struct UGroomAsset;
struct UGroomAssetImportData;
struct UGroomBindingAsset;
struct UGroomBlueprintLibrary;
struct UGroomComponent;
struct UGroomCreateBindingOptions;
struct UGroomCreateFollicleMaskOptions;
struct UGroomCreateStrandsTexturesOptions;
struct UGroomImportOptions;
struct UGroomHairGroupsPreview;
struct UNiagaraDataInterfaceHairStrands;
struct UNiagaraDataInterfacePhysicsAsset;
struct UNiagaraDataInterfaceVelocityGrid;
struct UNiagaraDataInterfacePressureGrid;

// Object: Enum HairStrandsCore.EHairCardsSourceType
enum class EHairCardsSourceType : uint8_t
{
	Procedural = 0,
	Imported = 1,
	EHairCardsSourceType_MAX = 2
};

// Object: Enum HairStrandsCore.EHairCardsGenerationType
enum class EHairCardsGenerationType : uint8_t
{
	CardsCount = 0,
	UseGuides = 1,
	EHairCardsGenerationType_MAX = 2
};

// Object: Enum HairStrandsCore.EHairCardsClusterType
enum class EHairCardsClusterType : uint8_t
{
	Low = 0,
	High = 1,
	EHairCardsClusterType_MAX = 2
};

// Object: Enum HairStrandsCore.EGroomGeometryType
enum class EGroomGeometryType : uint8_t
{
	Strands = 0,
	Cards = 1,
	Meshes = 2,
	EGroomGeometryType_MAX = 3
};

// Object: Enum HairStrandsCore.EHairLODSelectionType
enum class EHairLODSelectionType : uint8_t
{
	Cpu = 0,
	Gpu = 1,
	EHairLODSelectionType_MAX = 2
};

// Object: Enum HairStrandsCore.EHairInterpolationWeight
enum class EHairInterpolationWeight : uint8_t
{
	Parametric = 0,
	Root = 1,
	Index = 2,
	Unknown = 3,
	EHairInterpolationWeight_MAX = 4
};

// Object: Enum HairStrandsCore.EHairInterpolationQuality
enum class EHairInterpolationQuality : uint8_t
{
	Low = 0,
	Medium = 1,
	High = 2,
	Unknown = 3,
	EHairInterpolationQuality_MAX = 4
};

// Object: Enum HairStrandsCore.EGroomInterpolationType
enum class EGroomInterpolationType : uint8_t
{
	None = 0,
	RigidTransform = 2,
	OffsetTransform = 4,
	SmoothTransform = 8,
	EGroomInterpolationType_MAX = 9
};

// Object: Enum HairStrandsCore.EGroomStrandsSize
enum class EGroomStrandsSize : uint8_t
{
	None = 0,
	Size2 = 2,
	Size4 = 4,
	Size8 = 8,
	Size16 = 16,
	Size32 = 32,
	EGroomStrandsSize_MAX = 33
};

// Object: Enum HairStrandsCore.EGroomNiagaraSolvers
enum class EGroomNiagaraSolvers : uint8_t
{
	None = 0,
	CosseratRods = 2,
	AngularSprings = 4,
	CustomSolver = 8,
	EGroomNiagaraSolvers_MAX = 9
};

// Object: Enum HairStrandsCore.EFollicleMaskChannel
enum class EFollicleMaskChannel : uint8_t
{
	R = 0,
	G = 1,
	B = 2,
	A = 3,
	EFollicleMaskChannel_MAX = 4
};

// Object: Enum HairStrandsCore.EStrandsTexturesMeshType
enum class EStrandsTexturesMeshType : uint8_t
{
	Static = 0,
	Skeletal = 1,
	EStrandsTexturesMeshType_MAX = 2
};

// Object: Enum HairStrandsCore.EStrandsTexturesTraceType
enum class EStrandsTexturesTraceType : uint8_t
{
	TraceInside = 0,
	TraceOuside = 1,
	TraceBidirectional = 2,
	EStrandsTexturesTraceType_MAX = 3
};

// Object: Enum HairStrandsCore.EGroomInterpolationWeight
enum class EGroomInterpolationWeight : uint8_t
{
	Parametric = 0,
	Root = 1,
	Index = 2,
	Unknown = 3,
	EGroomInterpolationWeight_MAX = 4
};

// Object: Enum HairStrandsCore.EGroomInterpolationQuality
enum class EGroomInterpolationQuality : uint8_t
{
	Low = 0,
	Medium = 1,
	High = 2,
	Unknown = 3,
	EGroomInterpolationQuality_MAX = 4
};

// Object: ScriptStruct HairStrandsCore.HairGroupInfo
// Size: 0x14 (Inherited: 0x0)
struct FHairGroupInfo
{
	int32_t GroupID; // 0x0(0x4)
	int32_t NumCurves; // 0x4(0x4)
	int32_t NumGuides; // 0x8(0x4)
	int32_t NumCurveVertices; // 0xC(0x4)
	int32_t NumGuideVertices; // 0x10(0x4)
};

// Object: ScriptStruct HairStrandsCore.HairGroupInfoWithVisibility
// Size: 0x18 (Inherited: 0x14)
struct FHairGroupInfoWithVisibility : FHairGroupInfo
{
	bool bIsVisible; // 0x14(0x1)
	uint8_t Pad_0x15[0x3]; // 0x15(0x3)
};

// Object: ScriptStruct HairStrandsCore.HairGroupsMaterial
// Size: 0x10 (Inherited: 0x0)
struct FHairGroupsMaterial
{
	struct UMaterialInterface* Material; // 0x0(0x8)
	struct FName SlotName; // 0x8(0x8)
};

// Object: ScriptStruct HairStrandsCore.HairGroupCardsInfo
// Size: 0x8 (Inherited: 0x0)
struct FHairGroupCardsInfo
{
	int32_t NumCards; // 0x0(0x4)
	int32_t NumCardVertices; // 0x4(0x4)
};

// Object: ScriptStruct HairStrandsCore.HairGroupCardsTextures
// Size: 0x30 (Inherited: 0x0)
struct FHairGroupCardsTextures
{
	struct UTexture2D* DepthTexture; // 0x0(0x8)
	struct UTexture2D* CoverageTexture; // 0x8(0x8)
	struct UTexture2D* TangentTexture; // 0x10(0x8)
	struct UTexture2D* AttributeTexture; // 0x18(0x8)
	struct UTexture2D* AuxilaryDataTexture; // 0x20(0x8)
	uint8_t Pad_0x28[0x8]; // 0x28(0x8)
};

// Object: ScriptStruct HairStrandsCore.HairCardsClusterSettings
// Size: 0x8 (Inherited: 0x0)
struct FHairCardsClusterSettings
{
	float ClusterDecimation; // 0x0(0x4)
	EHairCardsClusterType Type; // 0x4(0x1)
	bool bUseGuide; // 0x5(0x1)
	uint8_t Pad_0x6[0x2]; // 0x6(0x2)
};

// Object: ScriptStruct HairStrandsCore.HairCardsGeometrySettings
// Size: 0x1C (Inherited: 0x0)
struct FHairCardsGeometrySettings
{
	EHairCardsGenerationType GenerationType; // 0x0(0x1)
	uint8_t Pad_0x1[0x3]; // 0x1(0x3)
	int32_t CardsCount; // 0x4(0x4)
	EHairCardsClusterType ClusterType; // 0x8(0x1)
	uint8_t Pad_0x9[0x3]; // 0x9(0x3)
	float MinSegmentLength; // 0xC(0x4)
	float AngularThreshold; // 0x10(0x4)
	float MinCardsLength; // 0x14(0x4)
	float MaxCardsLength; // 0x18(0x4)
};

// Object: ScriptStruct HairStrandsCore.HairCardsTextureSettings
// Size: 0x10 (Inherited: 0x0)
struct FHairCardsTextureSettings
{
	int32_t AtlasMaxResolution; // 0x0(0x4)
	int32_t PixelPerCentimeters; // 0x4(0x4)
	int32_t LengthTextureCount; // 0x8(0x4)
	int32_t DensityTextureCount; // 0xC(0x4)
};

// Object: ScriptStruct HairStrandsCore.HairGroupsProceduralCards
// Size: 0x38 (Inherited: 0x0)
struct FHairGroupsProceduralCards
{
	struct FHairCardsClusterSettings ClusterSettings; // 0x0(0x8)
	struct FHairCardsGeometrySettings GeometrySettings; // 0x8(0x1C)
	struct FHairCardsTextureSettings TextureSettings; // 0x24(0x10)
	int32_t Version; // 0x34(0x4)
};

// Object: ScriptStruct HairStrandsCore.HairGroupsCardsSourceDescription
// Size: 0xC0 (Inherited: 0x0)
struct FHairGroupsCardsSourceDescription
{
	struct UMaterialInterface* Material; // 0x0(0x8)
	struct FName MaterialSlotName; // 0x8(0x8)
	EHairCardsSourceType SourceType; // 0x10(0x1)
	uint8_t Pad_0x11[0x7]; // 0x11(0x7)
	struct UStaticMesh* ProceduralMesh; // 0x18(0x8)
	struct FString ProceduralMeshKey; // 0x20(0x10)
	struct UStaticMesh* ImportedMesh; // 0x30(0x8)
	struct FHairGroupsProceduralCards ProceduralSettings; // 0x38(0x38)
	struct FHairGroupCardsTextures Textures; // 0x70(0x30)
	int32_t GroupIndex; // 0xA0(0x4)
	int32_t LODIndex; // 0xA4(0x4)
	struct FHairGroupCardsInfo CardsInfo; // 0xA8(0x8)
	struct FString ImportedMeshKey; // 0xB0(0x10)
};

// Object: ScriptStruct HairStrandsCore.HairGroupsLOD
// Size: 0x18 (Inherited: 0x0)
struct FHairGroupsLOD
{
	struct TArray<struct FHairLODSettings> LODs; // 0x0(0x10)
	float ClusterWorldSize; // 0x10(0x4)
	float ClusterScreenSizeScale; // 0x14(0x4)
};

// Object: ScriptStruct HairStrandsCore.HairLODSettings
// Size: 0x18 (Inherited: 0x0)
struct FHairLODSettings
{
	float CurveDecimation; // 0x0(0x4)
	float VertexDecimation; // 0x4(0x4)
	float AngularThreshold; // 0x8(0x4)
	float ScreenSize; // 0xC(0x4)
	float ThicknessScale; // 0x10(0x4)
	bool bVisible; // 0x14(0x1)
	EGroomGeometryType GeometryType; // 0x15(0x1)
	uint8_t Pad_0x16[0x2]; // 0x16(0x2)
};

// Object: ScriptStruct HairStrandsCore.HairDecimationSettings
// Size: 0x8 (Inherited: 0x0)
struct FHairDecimationSettings
{
	float CurveDecimation; // 0x0(0x4)
	float VertexDecimation; // 0x4(0x4)
};

// Object: ScriptStruct HairStrandsCore.HairInterpolationSettings
// Size: 0xC (Inherited: 0x0)
struct FHairInterpolationSettings
{
	bool bOverrideGuides; // 0x0(0x1)
	uint8_t Pad_0x1[0x3]; // 0x1(0x3)
	float HairToGuideDensity; // 0x4(0x4)
	EHairInterpolationQuality InterpolationQuality; // 0x8(0x1)
	EHairInterpolationWeight InterpolationDistance; // 0x9(0x1)
	bool bRandomizeGuide; // 0xA(0x1)
	bool bUseUniqueGuide; // 0xB(0x1)
};

// Object: ScriptStruct HairStrandsCore.HairGroupsInterpolation
// Size: 0x14 (Inherited: 0x0)
struct FHairGroupsInterpolation
{
	struct FHairDecimationSettings DecimationSettings; // 0x0(0x8)
	struct FHairInterpolationSettings InterpolationSettings; // 0x8(0xC)
};

// Object: ScriptStruct HairStrandsCore.HairGroupsMeshesSourceDescription
// Size: 0x60 (Inherited: 0x0)
struct FHairGroupsMeshesSourceDescription
{
	struct UMaterialInterface* Material; // 0x0(0x8)
	struct FName MaterialSlotName; // 0x8(0x8)
	struct UStaticMesh* ImportedMesh; // 0x10(0x8)
	struct FHairGroupCardsTextures Textures; // 0x18(0x30)
	int32_t GroupIndex; // 0x48(0x4)
	int32_t LODIndex; // 0x4C(0x4)
	struct FString ImportedMeshKey; // 0x50(0x10)
};

// Object: ScriptStruct HairStrandsCore.HairExternalForces
// Size: 0x1C (Inherited: 0x0)
struct FHairExternalForces
{
	struct FVector GravityVector; // 0x0(0xC)
	float AirDrag; // 0xC(0x4)
	struct FVector AirVelocity; // 0x10(0xC)
};

// Object: ScriptStruct HairStrandsCore.HairBendConstraint
// Size: 0x98 (Inherited: 0x0)
struct FHairBendConstraint
{
	bool SolveBend; // 0x0(0x1)
	bool ProjectBend; // 0x1(0x1)
	uint8_t Pad_0x2[0x2]; // 0x2(0x2)
	float BendDamping; // 0x4(0x4)
	float BendStiffness; // 0x8(0x4)
	uint8_t Pad_0xC[0x4]; // 0xC(0x4)
	struct FRuntimeFloatCurve BendScale; // 0x10(0x88)
};

// Object: ScriptStruct HairStrandsCore.HairCollisionConstraint
// Size: 0xA8 (Inherited: 0x0)
struct FHairCollisionConstraint
{
	bool SolveCollision; // 0x0(0x1)
	bool ProjectCollision; // 0x1(0x1)
	uint8_t Pad_0x2[0x2]; // 0x2(0x2)
	float StaticFriction; // 0x4(0x4)
	float KineticFriction; // 0x8(0x4)
	float StrandsViscosity; // 0xC(0x4)
	struct FIntVector GridDimension; // 0x10(0xC)
	float CollisionRadius; // 0x1C(0x4)
	struct FRuntimeFloatCurve RadiusScale; // 0x20(0x88)
};

// Object: ScriptStruct HairStrandsCore.HairStretchConstraint
// Size: 0x98 (Inherited: 0x0)
struct FHairStretchConstraint
{
	bool SolveStretch; // 0x0(0x1)
	bool ProjectStretch; // 0x1(0x1)
	uint8_t Pad_0x2[0x2]; // 0x2(0x2)
	float StretchDamping; // 0x4(0x4)
	float StretchStiffness; // 0x8(0x4)
	uint8_t Pad_0xC[0x4]; // 0xC(0x4)
	struct FRuntimeFloatCurve StretchScale; // 0x10(0x88)
};

// Object: ScriptStruct HairStrandsCore.HairMaterialConstraints
// Size: 0x1D8 (Inherited: 0x0)
struct FHairMaterialConstraints
{
	struct FHairBendConstraint BendConstraint; // 0x0(0x98)
	struct FHairStretchConstraint StretchConstraint; // 0x98(0x98)
	struct FHairCollisionConstraint CollisionConstraint; // 0x130(0xA8)
};

// Object: ScriptStruct HairStrandsCore.HairSolverSettings
// Size: 0x38 (Inherited: 0x0)
struct FHairSolverSettings
{
	bool EnableSimulation; // 0x0(0x1)
	EGroomNiagaraSolvers NiagaraSolver; // 0x1(0x1)
	uint8_t Pad_0x2[0x6]; // 0x2(0x6)
	struct TSoftObjectPtr<UNiagaraSystem> CustomSystem; // 0x8(0x28)
	int32_t SubSteps; // 0x30(0x4)
	int32_t IterationCount; // 0x34(0x4)
};

// Object: ScriptStruct HairStrandsCore.HairStrandsParameters
// Size: 0x98 (Inherited: 0x0)
struct FHairStrandsParameters
{
	EGroomStrandsSize StrandsSize; // 0x0(0x1)
	uint8_t Pad_0x1[0x3]; // 0x1(0x3)
	float StrandsDensity; // 0x4(0x4)
	float StrandsSmoothing; // 0x8(0x4)
	float StrandsThickness; // 0xC(0x4)
	struct FRuntimeFloatCurve ThicknessScale; // 0x10(0x88)
};

// Object: ScriptStruct HairStrandsCore.HairGroupsPhysics
// Size: 0x2C8 (Inherited: 0x0)
struct FHairGroupsPhysics
{
	struct FHairSolverSettings SolverSettings; // 0x0(0x38)
	struct FHairExternalForces ExternalForces; // 0x38(0x1C)
	uint8_t Pad_0x54[0x4]; // 0x54(0x4)
	struct FHairMaterialConstraints MaterialConstraints; // 0x58(0x1D8)
	struct FHairStrandsParameters StrandsParameters; // 0x230(0x98)
};

// Object: ScriptStruct HairStrandsCore.HairAdvancedRenderingSettings
// Size: 0x2 (Inherited: 0x0)
struct FHairAdvancedRenderingSettings
{
	bool bUseStableRasterization; // 0x0(0x1)
	bool bScatterSceneLighting; // 0x1(0x1)
};

// Object: ScriptStruct HairStrandsCore.HairGeometrySettings
// Size: 0x10 (Inherited: 0x0)
struct FHairGeometrySettings
{
	float HairWidth; // 0x0(0x4)
	float HairRootScale; // 0x4(0x4)
	float HairTipScale; // 0x8(0x4)
	float HairClipScale; // 0xC(0x4)
};

// Object: ScriptStruct HairStrandsCore.HairShadowSettings
// Size: 0xC (Inherited: 0x0)
struct FHairShadowSettings
{
	float HairShadowDensity; // 0x0(0x4)
	float HairRaytracingRadiusScale; // 0x4(0x4)
	bool bUseHairRaytracingGeometry; // 0x8(0x1)
	bool bVoxelize; // 0x9(0x1)
	uint8_t Pad_0xA[0x2]; // 0xA(0x2)
};

// Object: ScriptStruct HairStrandsCore.HairGroupsRendering
// Size: 0x30 (Inherited: 0x0)
struct FHairGroupsRendering
{
	struct FName MaterialSlotName; // 0x0(0x8)
	struct UMaterialInterface* Material; // 0x8(0x8)
	struct FHairGeometrySettings GeometrySettings; // 0x10(0x10)
	struct FHairShadowSettings ShadowSettings; // 0x20(0xC)
	struct FHairAdvancedRenderingSettings AdvancedSettings; // 0x2C(0x2)
	uint8_t Pad_0x2E[0x2]; // 0x2E(0x2)
};

// Object: ScriptStruct HairStrandsCore.GoomBindingGroupInfo
// Size: 0x10 (Inherited: 0x0)
struct FGoomBindingGroupInfo
{
	int32_t RenRootCount; // 0x0(0x4)
	int32_t RenLODCount; // 0x4(0x4)
	int32_t SimRootCount; // 0x8(0x4)
	int32_t SimLODCount; // 0xC(0x4)
};

// Object: ScriptStruct HairStrandsCore.FollicleMaskOptions
// Size: 0x10 (Inherited: 0x0)
struct FFollicleMaskOptions
{
	struct UGroomAsset* Groom; // 0x0(0x8)
	EFollicleMaskChannel Channel; // 0x8(0x1)
	uint8_t Pad_0x9[0x7]; // 0x9(0x7)
};

// Object: ScriptStruct HairStrandsCore.HairGroupDesc
// Size: 0x4C (Inherited: 0x0)
struct FHairGroupDesc
{
	int32_t HairCount; // 0x0(0x4)
	int32_t GuideCount; // 0x4(0x4)
	float HairLength; // 0x8(0x4)
	float HairWidth; // 0xC(0x4)
	bool HairWidth_Override; // 0x10(0x1)
	uint8_t Pad_0x11[0x3]; // 0x11(0x3)
	float HairRootScale; // 0x14(0x4)
	bool HairRootScale_Override; // 0x18(0x1)
	uint8_t Pad_0x19[0x3]; // 0x19(0x3)
	float HairTipScale; // 0x1C(0x4)
	bool HairTipScale_Override; // 0x20(0x1)
	uint8_t Pad_0x21[0x3]; // 0x21(0x3)
	float HairClipLength; // 0x24(0x4)
	bool HairClipLength_Override; // 0x28(0x1)
	uint8_t Pad_0x29[0x3]; // 0x29(0x3)
	float HairShadowDensity; // 0x2C(0x4)
	bool HairShadowDensity_Override; // 0x30(0x1)
	uint8_t Pad_0x31[0x3]; // 0x31(0x3)
	float HairRaytracingRadiusScale; // 0x34(0x4)
	bool HairRaytracingRadiusScale_Override; // 0x38(0x1)
	bool bUseHairRaytracingGeometry; // 0x39(0x1)
	bool bUseHairRaytracingGeometry_Override; // 0x3A(0x1)
	uint8_t Pad_0x3B[0x1]; // 0x3B(0x1)
	float LODBias; // 0x3C(0x4)
	bool bUseStableRasterization; // 0x40(0x1)
	bool bUseStableRasterization_Override; // 0x41(0x1)
	bool bScatterSceneLighting; // 0x42(0x1)
	bool bScatterSceneLighting_Override; // 0x43(0x1)
	bool bSupportVoxelization; // 0x44(0x1)
	bool bSupportVoxelization_Override; // 0x45(0x1)
	uint8_t Pad_0x46[0x2]; // 0x46(0x2)
	int32_t LODForcedIndex; // 0x48(0x4)
};

// Object: ScriptStruct HairStrandsCore.GroomHairGroupPreview
// Size: 0x20 (Inherited: 0x0)
struct FGroomHairGroupPreview
{
	int32_t GroupID; // 0x0(0x4)
	int32_t CurveCount; // 0x4(0x4)
	int32_t GuideCount; // 0x8(0x4)
	struct FHairGroupsInterpolation InterpolationSettings; // 0xC(0x14)
};

// Object: ScriptStruct HairStrandsCore.GroomBuildSettings
// Size: 0xC (Inherited: 0x0)
struct FGroomBuildSettings
{
	bool bOverrideGuides; // 0x0(0x1)
	uint8_t Pad_0x1[0x3]; // 0x1(0x3)
	float HairToGuideDensity; // 0x4(0x4)
	EGroomInterpolationQuality InterpolationQuality; // 0x8(0x1)
	EGroomInterpolationWeight InterpolationDistance; // 0x9(0x1)
	bool bRandomizeGuide; // 0xA(0x1)
	bool bUseUniqueGuide; // 0xB(0x1)
};

// Object: ScriptStruct HairStrandsCore.GroomConversionSettings
// Size: 0x18 (Inherited: 0x0)
struct FGroomConversionSettings
{
	struct FVector Rotation; // 0x0(0xC)
	struct FVector Scale; // 0xC(0xC)
};

// Object: Class HairStrandsCore.GroomActor
// Size: 0x308 (Inherited: 0x300)
struct AGroomActor : AActor
{
	DEFINE_UE_CLASS_HELPERS(AGroomActor, "GroomActor")

	struct UGroomComponent* GroomComponent; // 0x300(0x8)
};

// Object: Class HairStrandsCore.GroomAsset
// Size: 0xF8 (Inherited: 0x28)
struct UGroomAsset : UObject
{
	DEFINE_UE_CLASS_HELPERS(UGroomAsset, "GroomAsset")

	uint8_t Pad_0x28[0x8]; // 0x28(0x8)
	struct TArray<struct FHairGroupInfoWithVisibility> HairGroupsInfo; // 0x30(0x10)
	struct TArray<struct FHairGroupsRendering> HairGroupsRendering; // 0x40(0x10)
	struct TArray<struct FHairGroupsPhysics> HairGroupsPhysics; // 0x50(0x10)
	struct TArray<struct FHairGroupsInterpolation> HairGroupsInterpolation; // 0x60(0x10)
	struct TArray<struct FHairGroupsLOD> HairGroupsLOD; // 0x70(0x10)
	struct TArray<struct FHairGroupsCardsSourceDescription> HairGroupsCards; // 0x80(0x10)
	struct TArray<struct FHairGroupsMeshesSourceDescription> HairGroupsMeshes; // 0x90(0x10)
	struct TArray<struct FHairGroupsMaterial> HairGroupsMaterials; // 0xA0(0x10)
	uint8_t Pad_0xB0[0x10]; // 0xB0(0x10)
	bool EnableGlobalInterpolation; // 0xC0(0x1)
	EGroomInterpolationType HairInterpolationType; // 0xC1(0x1)
	EHairLODSelectionType LODSelectionType; // 0xC2(0x1)
	uint8_t Pad_0xC3[0x1]; // 0xC3(0x1)
	struct FPerPlatformInt MinLOD; // 0xC4(0x8)
	struct FPerPlatformBool DisableBelowMinLodStripping; // 0xCC(0x1)
	uint8_t Pad_0xCD[0x3]; // 0xCD(0x3)
	struct TArray<float> EffectiveLODBias; // 0xD0(0x10)
	struct TArray<struct UAssetUserData*> AssetUserData; // 0xE0(0x10)
	uint8_t Pad_0xF0[0x8]; // 0xF0(0x8)
};

// Object: Class HairStrandsCore.GroomAssetImportData
// Size: 0x30 (Inherited: 0x28)
struct UGroomAssetImportData : UAssetImportData
{
	DEFINE_UE_CLASS_HELPERS(UGroomAssetImportData, "GroomAssetImportData")

	struct UGroomImportOptions* ImportOptions; // 0x28(0x8)
};

// Object: Class HairStrandsCore.GroomBindingAsset
// Size: 0xA0 (Inherited: 0x28)
struct UGroomBindingAsset : UObject
{
	DEFINE_UE_CLASS_HELPERS(UGroomBindingAsset, "GroomBindingAsset")

	struct UGroomAsset* Groom; // 0x28(0x8)
	struct USkeletalMesh* SourceSkeletalMesh; // 0x30(0x8)
	struct USkeletalMesh* TargetSkeletalMesh; // 0x38(0x8)
	int32_t NumInterpolationPoints; // 0x40(0x4)
	int32_t MatchingSection; // 0x44(0x4)
	struct TArray<struct FGoomBindingGroupInfo> GroupInfos; // 0x48(0x10)
	uint8_t Pad_0x58[0x48]; // 0x58(0x48)
};

// Object: Class HairStrandsCore.GroomBlueprintLibrary
// Size: 0x28 (Inherited: 0x28)
struct UGroomBlueprintLibrary : UBlueprintFunctionLibrary
{
	DEFINE_UE_CLASS_HELPERS(UGroomBlueprintLibrary, "GroomBlueprintLibrary")

	// Object: Function HairStrandsCore.GroomBlueprintLibrary.CreateNewGroomBindingAssetWithPath
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3937920
	// Params: [ Num(7) Size(0x40) ]
	static struct UGroomBindingAsset* CreateNewGroomBindingAssetWithPath(struct FString InDesiredPackagePath, struct UGroomAsset* InGroomAsset, struct USkeletalMesh* InSkeletalMesh, int32_t InNumInterpolationPoints, struct USkeletalMesh* InSourceSkeletalMeshForTransfer, int32_t InMatchingSection);

	// Object: Function HairStrandsCore.GroomBlueprintLibrary.CreateNewGroomBindingAsset
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3937778
	// Params: [ Num(6) Size(0x30) ]
	static struct UGroomBindingAsset* CreateNewGroomBindingAsset(struct UGroomAsset* InGroomAsset, struct USkeletalMesh* InSkeletalMesh, int32_t InNumInterpolationPoints, struct USkeletalMesh* InSourceSkeletalMeshForTransfer, int32_t InMatchingSection);
};

// Object: Class HairStrandsCore.GroomComponent
// Size: 0x7E0 (Inherited: 0x6D0)
struct UGroomComponent : UMeshComponent
{
	DEFINE_UE_CLASS_HELPERS(UGroomComponent, "GroomComponent")

	struct UGroomAsset* GroomAsset; // 0x6D0(0x8)
	struct TArray<struct UNiagaraComponent*> NiagaraComponents; // 0x6D8(0x10)
	struct USkeletalMesh* SourceSkeletalMesh; // 0x6E8(0x8)
	struct UGroomBindingAsset* BindingAsset; // 0x6F0(0x8)
	struct UPhysicsAsset* PhysicsAsset; // 0x6F8(0x8)
	struct UMaterialInterface* Strands_DebugMaterial; // 0x700(0x8)
	struct UMaterialInterface* Strands_DefaultMaterial; // 0x708(0x8)
	struct UMaterialInterface* Cards_DefaultMaterial; // 0x710(0x8)
	struct UMaterialInterface* Meshes_DefaultMaterial; // 0x718(0x8)
	struct UNiagaraSystem* AngularSpringsSystem; // 0x720(0x8)
	struct UNiagaraSystem* CosseratRodsSystem; // 0x728(0x8)
	struct FString AttachmentName; // 0x730(0x10)
	uint8_t Pad_0x740[0x50]; // 0x740(0x50)
	struct TArray<struct FHairGroupDesc> GroomGroupsDesc; // 0x790(0x10)
	uint8_t Pad_0x7A0[0x40]; // 0x7A0(0x40)

	// Object: Function HairStrandsCore.GroomComponent.SetGroomAsset
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3937bc4
	// Params: [ Num(1) Size(0x8) ]
	void SetGroomAsset(struct UGroomAsset* Asset);

	// Object: Function HairStrandsCore.GroomComponent.SetBindingAsset
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3937b1c
	// Params: [ Num(1) Size(0x8) ]
	void SetBindingAsset(struct UGroomBindingAsset* InBinding);
};

// Object: Class HairStrandsCore.GroomCreateBindingOptions
// Size: 0x40 (Inherited: 0x28)
struct UGroomCreateBindingOptions : UObject
{
	DEFINE_UE_CLASS_HELPERS(UGroomCreateBindingOptions, "GroomCreateBindingOptions")

	struct USkeletalMesh* SourceSkeletalMesh; // 0x28(0x8)
	struct USkeletalMesh* TargetSkeletalMesh; // 0x30(0x8)
	int32_t NumInterpolationPoints; // 0x38(0x4)
	int32_t MatchingSection; // 0x3C(0x4)
};

// Object: Class HairStrandsCore.GroomCreateFollicleMaskOptions
// Size: 0x40 (Inherited: 0x28)
struct UGroomCreateFollicleMaskOptions : UObject
{
	DEFINE_UE_CLASS_HELPERS(UGroomCreateFollicleMaskOptions, "GroomCreateFollicleMaskOptions")

	int32_t Resolution; // 0x28(0x4)
	int32_t RootRadius; // 0x2C(0x4)
	struct TArray<struct FFollicleMaskOptions> Grooms; // 0x30(0x10)
};

// Object: Class HairStrandsCore.GroomCreateStrandsTexturesOptions
// Size: 0x68 (Inherited: 0x28)
struct UGroomCreateStrandsTexturesOptions : UObject
{
	DEFINE_UE_CLASS_HELPERS(UGroomCreateStrandsTexturesOptions, "GroomCreateStrandsTexturesOptions")

	int32_t Resolution; // 0x28(0x4)
	EStrandsTexturesTraceType TraceType; // 0x2C(0x1)
	uint8_t Pad_0x2D[0x3]; // 0x2D(0x3)
	float TraceDistance; // 0x30(0x4)
	EStrandsTexturesMeshType MeshType; // 0x34(0x1)
	uint8_t Pad_0x35[0x3]; // 0x35(0x3)
	struct UStaticMesh* StaticMesh; // 0x38(0x8)
	struct USkeletalMesh* SkeletalMesh; // 0x40(0x8)
	int32_t LODIndex; // 0x48(0x4)
	int32_t SectionIndex; // 0x4C(0x4)
	int32_t UVChannelIndex; // 0x50(0x4)
	uint8_t Pad_0x54[0x4]; // 0x54(0x4)
	struct TArray<int32_t> GroupIndex; // 0x58(0x10)
};

// Object: Class HairStrandsCore.GroomImportOptions
// Size: 0x50 (Inherited: 0x28)
struct UGroomImportOptions : UObject
{
	DEFINE_UE_CLASS_HELPERS(UGroomImportOptions, "GroomImportOptions")

	struct FGroomConversionSettings ConversionSettings; // 0x28(0x18)
	struct TArray<struct FHairGroupsInterpolation> InterpolationSettings; // 0x40(0x10)
};

// Object: Class HairStrandsCore.GroomHairGroupsPreview
// Size: 0x38 (Inherited: 0x28)
struct UGroomHairGroupsPreview : UObject
{
	DEFINE_UE_CLASS_HELPERS(UGroomHairGroupsPreview, "GroomHairGroupsPreview")

	struct TArray<struct FGroomHairGroupPreview> Groups; // 0x28(0x10)
};

// Object: Class HairStrandsCore.NiagaraDataInterfaceHairStrands
// Size: 0x50 (Inherited: 0x38)
struct UNiagaraDataInterfaceHairStrands : UNiagaraDataInterface
{
	DEFINE_UE_CLASS_HELPERS(UNiagaraDataInterfaceHairStrands, "NiagaraDataInterfaceHairStrands")

	struct UGroomAsset* DefaultSource; // 0x38(0x8)
	struct AActor* SourceActor; // 0x40(0x8)
	uint8_t Pad_0x48[0x8]; // 0x48(0x8)
};

// Object: Class HairStrandsCore.NiagaraDataInterfacePhysicsAsset
// Size: 0x68 (Inherited: 0x38)
struct UNiagaraDataInterfacePhysicsAsset : UNiagaraDataInterface
{
	DEFINE_UE_CLASS_HELPERS(UNiagaraDataInterfacePhysicsAsset, "NiagaraDataInterfacePhysicsAsset")

	struct UPhysicsAsset* DefaultSource; // 0x38(0x8)
	struct AActor* SourceActor; // 0x40(0x8)
	uint8_t Pad_0x48[0x20]; // 0x48(0x20)
};

// Object: Class HairStrandsCore.NiagaraDataInterfaceVelocityGrid
// Size: 0xE8 (Inherited: 0xD8)
struct UNiagaraDataInterfaceVelocityGrid : UNiagaraDataInterfaceRWBase
{
	DEFINE_UE_CLASS_HELPERS(UNiagaraDataInterfaceVelocityGrid, "NiagaraDataInterfaceVelocityGrid")

	struct FIntVector GridSize; // 0xD8(0xC)
	uint8_t Pad_0xE4[0x4]; // 0xE4(0x4)
};

// Object: Class HairStrandsCore.NiagaraDataInterfacePressureGrid
// Size: 0xE8 (Inherited: 0xE8)
struct UNiagaraDataInterfacePressureGrid : UNiagaraDataInterfaceVelocityGrid
{
	DEFINE_UE_CLASS_HELPERS(UNiagaraDataInterfacePressureGrid, "NiagaraDataInterfacePressureGrid")
};

} // namespace SDK
