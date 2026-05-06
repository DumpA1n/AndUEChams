#pragma once

#include "../CoreUObject_classes.hpp"
#include "DeveloperSettings.hpp"
#include "Engine.hpp"

namespace SDK
{

// Package: Landscape
// Enums: 14
// Structs: 26
// Classes: 35

enum class ENavDataGatheringMode : uint8_t;
enum class ERendererStencilMask : uint8_t;
enum class ERuntimeVirtualTextureMainPassType : uint8_t;
enum class EShadowCaptureLayer : uint8_t;
struct UHierarchicalInstancedStaticMeshComponent;
struct UMaterialInstanceConstant;
struct UMaterialInstanceDynamic;
struct UMaterialInterface;
struct UMeshComponent;
struct UPhysicalMaterial;
struct URuntimeVirtualTexture;
struct USplineComponent;
struct USplineMeshComponent;
struct UStaticMesh;
struct UTexture;
struct UTexture2D;
struct UTextureRenderTarget2D;
struct FLandscapeLayer;
struct FLandscapeLayerBrush;
struct FHeightmapData;
struct FWeightmapData;
struct FLandscapeLayerComponentData;
struct FWeightmapLayerAllocationInfo;
struct FLandscapeComponentMaterialOverride;
struct FLandscapeEditToolRenderData;
struct FGizmoSelectData;
struct FGrassVariety;
struct FLandscapeInfoLayerSettings;
struct FLandscapeMaterialTextureStreamingInfo;
struct FLandscapeProxyMaterialOverride;
struct FLandscapeImportLayerInfo;
struct FLandscapeLayerStruct;
struct FLandscapeEditorLayerSettings;
struct FLandscapeSplineConnection;
struct FForeignWorldSplineData;
struct FForeignSplineSegmentData;
struct FForeignControlPointData;
struct FLandscapeSplineMeshEntry;
struct FLandscapeSplineSegmentConnection;
struct FLandscapeSplineInterpPoint;
struct FGrassInput;
struct FLayerBlendInput;
struct FPhysicalMaterialInput;
struct AControlPointMeshActor;
struct UControlPointMeshComponent;
struct UGPUDrivenLandscapeBatchingComponent;
struct ALandscapeProxy;
struct ALandscape;
struct ALandscapeBlueprintBrushBase;
struct ULandscapeLODStreamingProxy;
struct ULandscapeComponent;
struct ALandscapeGizmoActor;
struct ALandscapeGizmoActiveActor;
struct ULandscapeGizmoRenderComponent;
struct ULandscapeGrassType;
struct ULandscapeHeightfieldCollisionComponent;
struct ULandscapeInfo;
struct ULandscapeInfoMap;
struct ULandscapeLayerInfoObject;
struct ULandscapeMaterialInstanceConstant;
struct ULandscapeMeshCollisionComponent;
struct ALandscapeMeshProxyActor;
struct ULandscapeMeshProxyComponent;
struct ULandscapeSettings;
struct ULandscapeSplinesComponent;
struct ULandscapeSplineControlPoint;
struct ULandscapeSplineSegment;
struct ALandscapeStreamingProxy;
struct ULandscapeSubsystem;
struct ULandscapeWeightmapUsage;
struct UMaterialExpressionLandscapeGrassOutput;
struct UMaterialExpressionLandscapeLayerBlend;
struct UMaterialExpressionLandscapeLayerCoords;
struct UMaterialExpressionLandscapeLayerSample;
struct UMaterialExpressionLandscapeLayerSwitch;
struct UMaterialExpressionLandscapeLayerWeight;
struct UMaterialExpressionLandscapePhysicalMaterialOutput;
struct UMaterialExpressionLandscapeVisibilityMask;

// Object: Enum Landscape.ELandscapeBlendMode
enum class ELandscapeBlendMode : uint8_t
{
	LSBM_AdditiveBlend = 0,
	LSBM_AlphaBlend = 1,
	LSBM_MAX = 2
};

// Object: Enum Landscape.ELandscapeSetupErrors
enum class ELandscapeSetupErrors : uint8_t
{
	LSE_None = 0,
	LSE_NoLandscapeInfo = 1,
	LSE_CollsionXY = 2,
	LSE_NoLayerInfo = 3,
	LSE_MAX = 4
};

// Object: Enum Landscape.ELandscapeClearMode
enum class ELandscapeClearMode : uint8_t
{
	Clear_Weightmap = 1,
	Clear_Heightmap = 2,
	Clear_All = 3,
	Clear_MAX = 4
};

// Object: Enum Landscape.ELandscapeGizmoType
enum class ELandscapeGizmoType : uint8_t
{
	LGT_None = 0,
	LGT_Height = 1,
	LGT_Weight = 2,
	LGT_MAX = 3
};

// Object: Enum Landscape.EGrassScaling
enum class EGrassScaling : uint8_t
{
	Uniform = 0,
	Free = 1,
	LockXY = 2,
	EGrassScaling_MAX = 3
};

// Object: Enum Landscape.ESplineModulationColorMask
enum class ESplineModulationColorMask : uint8_t
{
	Red = 0,
	Green = 1,
	Blue = 2,
	Alpha = 3,
	ESplineModulationColorMask_MAX = 4
};

// Object: Enum Landscape.ELandscapeLODFalloff
enum class ELandscapeLODFalloff : uint8_t
{
	Linear = 0,
	SquareRoot = 1,
	ELandscapeLODFalloff_MAX = 2
};

// Object: Enum Landscape.ELandscapeLayerDisplayMode
enum class ELandscapeLayerDisplayMode : uint8_t
{
	Default = 0,
	Alphabetical = 1,
	UserSpecific = 2,
	ELandscapeLayerDisplayMode_MAX = 3
};

// Object: Enum Landscape.ELandscapeLayerPaintingRestriction
enum class ELandscapeLayerPaintingRestriction : uint8_t
{
	None = 0,
	UseMaxLayers = 1,
	ExistingOnly = 2,
	UseComponentWhitelist = 3,
	ELandscapeLayerPaintingRestriction_MAX = 4
};

// Object: Enum Landscape.ELandscapeImportAlphamapType
enum class ELandscapeImportAlphamapType : uint8_t
{
	Additive = 0,
	Layered = 1,
	ELandscapeImportAlphamapType_MAX = 2
};

// Object: Enum Landscape.LandscapeSplineMeshOrientation
enum class ELandscapeSplineMeshOrientation : uint8_t
{
	LSMO_XUp = 0,
	LSMO_YUp = 1,
	LSMO_MAX = 2
};

// Object: Enum Landscape.ELandscapeLayerBlendType
enum class ELandscapeLayerBlendType : uint8_t
{
	LB_WeightBlend = 0,
	LB_AlphaBlend = 1,
	LB_HeightBlend = 2,
	LB_MAX = 3
};

// Object: Enum Landscape.ELandscapeCustomizedCoordType
enum class ELandscapeCustomizedCoordType : uint8_t
{
	LCCT_None = 0,
	LCCT_CustomUV0 = 1,
	LCCT_CustomUV1 = 2,
	LCCT_CustomUV2 = 3,
	LCCT_WeightMapUV = 4,
	LCCT_MAX = 5
};

// Object: Enum Landscape.ETerrainCoordMappingType
enum class ETerrainCoordMappingType : uint8_t
{
	TCMT_Auto = 0,
	TCMT_XY = 1,
	TCMT_XZ = 2,
	TCMT_YZ = 3,
	TCMT_MAX = 4
};

// Object: ScriptStruct Landscape.LandscapeLayer
// Size: 0x88 (Inherited: 0x0)
struct FLandscapeLayer
{
	struct FGuid Guid; // 0x0(0x10)
	struct FName Name; // 0x10(0x8)
	bool bVisible; // 0x18(0x1)
	bool bLocked; // 0x19(0x1)
	uint8_t Pad_0x1A[0x2]; // 0x1A(0x2)
	float HeightmapAlpha; // 0x1C(0x4)
	float WeightmapAlpha; // 0x20(0x4)
	uint8_t BlendMode; // 0x24(0x1)
	uint8_t Pad_0x25[0x3]; // 0x25(0x3)
	struct TArray<struct FLandscapeLayerBrush> Brushes; // 0x28(0x10)
	struct TMap<struct ULandscapeLayerInfoObject*, bool> WeightmapLayerAllocationBlend; // 0x38(0x50)
};

// Object: ScriptStruct Landscape.LandscapeLayerBrush
// Size: 0x1 (Inherited: 0x0)
struct FLandscapeLayerBrush
{
	uint8_t Pad_0x0[0x1]; // 0x0(0x1)
};

// Object: ScriptStruct Landscape.HeightmapData
// Size: 0x8 (Inherited: 0x0)
struct FHeightmapData
{
	struct UTexture2D* Texture; // 0x0(0x8)
};

// Object: ScriptStruct Landscape.WeightmapData
// Size: 0x30 (Inherited: 0x0)
struct FWeightmapData
{
	struct TArray<struct UTexture2D*> Textures; // 0x0(0x10)
	struct TArray<struct FWeightmapLayerAllocationInfo> LayerAllocations; // 0x10(0x10)
	struct TArray<struct ULandscapeWeightmapUsage*> TextureUsages; // 0x20(0x10)
};

// Object: ScriptStruct Landscape.LandscapeLayerComponentData
// Size: 0x38 (Inherited: 0x0)
struct FLandscapeLayerComponentData
{
	struct FHeightmapData HeightmapData; // 0x0(0x8)
	struct FWeightmapData WeightmapData; // 0x8(0x30)
};

// Object: ScriptStruct Landscape.WeightmapLayerAllocationInfo
// Size: 0x10 (Inherited: 0x0)
struct FWeightmapLayerAllocationInfo
{
	struct ULandscapeLayerInfoObject* LayerInfo; // 0x0(0x8)
	uint8_t WeightmapTextureIndex; // 0x8(0x1)
	uint8_t WeightmapTextureChannel; // 0x9(0x1)
	uint8_t Pad_0xA[0x6]; // 0xA(0x6)
};

// Object: ScriptStruct Landscape.LandscapeComponentMaterialOverride
// Size: 0x10 (Inherited: 0x0)
struct FLandscapeComponentMaterialOverride
{
	struct FPerPlatformInt LODIndex; // 0x0(0x8)
	struct UMaterialInterface* Material; // 0x8(0x8)
};

// Object: ScriptStruct Landscape.LandscapeEditToolRenderData
// Size: 0x38 (Inherited: 0x0)
struct FLandscapeEditToolRenderData
{
	struct UMaterialInterface* ToolMaterial; // 0x0(0x8)
	struct UMaterialInterface* GizmoMaterial; // 0x8(0x8)
	int32_t SelectedType; // 0x10(0x4)
	int32_t DebugChannelR; // 0x14(0x4)
	int32_t DebugChannelG; // 0x18(0x4)
	int32_t DebugChannelB; // 0x1C(0x4)
	struct UTexture2D* DataTexture; // 0x20(0x8)
	struct UTexture2D* LayerContributionTexture; // 0x28(0x8)
	struct UTexture2D* DirtyTexture; // 0x30(0x8)
};

// Object: ScriptStruct Landscape.GizmoSelectData
// Size: 0x50 (Inherited: 0x0)
struct FGizmoSelectData
{
	uint8_t Pad_0x0[0x50]; // 0x0(0x50)
};

// Object: ScriptStruct Landscape.GrassVariety
// Size: 0x60 (Inherited: 0x0)
struct FGrassVariety
{
	struct UStaticMesh* GrassMesh; // 0x0(0x8)
	struct TArray<struct UMaterialInterface*> OverrideMaterials; // 0x8(0x10)
	struct FPerPlatformFloat GrassDensity; // 0x18(0x4)
	bool bUseGrid; // 0x1C(0x1)
	uint8_t Pad_0x1D[0x3]; // 0x1D(0x3)
	float PlacementJitter; // 0x20(0x4)
	struct FPerPlatformInt StartCullDistance; // 0x24(0x8)
	struct FPerPlatformInt EndCullDistance; // 0x2C(0x8)
	int32_t MinLOD; // 0x34(0x4)
	EGrassScaling Scaling; // 0x38(0x1)
	uint8_t Pad_0x39[0x3]; // 0x39(0x3)
	struct FFloatInterval ScaleX; // 0x3C(0x8)
	struct FFloatInterval ScaleY; // 0x44(0x8)
	struct FFloatInterval ScaleZ; // 0x4C(0x8)
	bool RandomRotation; // 0x54(0x1)
	bool AlignToSurface; // 0x55(0x1)
	bool bUseLandscapeLightmap; // 0x56(0x1)
	struct FLightingChannels LightingChannels; // 0x57(0x1)
	bool bReceivesDecals; // 0x58(0x1)
	bool bCastDynamicShadow; // 0x59(0x1)
	bool bKeepInstanceBufferCPUCopy; // 0x5A(0x1)
	bool bForceUseSkyLightAsDiffuseGI; // 0x5B(0x1)
	uint8_t IndirectLightingCacheQuality; // 0x5C(0x1)
	bool bReMergeInstancing; // 0x5D(0x1)
	bool bHiddenShadowOnShadowCapture; // 0x5E(0x1)
	EShadowCaptureLayer ShadowCaptureLayer; // 0x5F(0x1)
};

// Object: ScriptStruct Landscape.LandscapeInfoLayerSettings
// Size: 0x10 (Inherited: 0x0)
struct FLandscapeInfoLayerSettings
{
	struct ULandscapeLayerInfoObject* LayerInfoObj; // 0x0(0x8)
	struct FName LayerName; // 0x8(0x8)
};

// Object: ScriptStruct Landscape.LandscapeMaterialTextureStreamingInfo
// Size: 0xC (Inherited: 0x0)
struct FLandscapeMaterialTextureStreamingInfo
{
	struct FName TextureName; // 0x0(0x8)
	float TexelFactor; // 0x8(0x4)
};

// Object: ScriptStruct Landscape.LandscapeProxyMaterialOverride
// Size: 0x10 (Inherited: 0x0)
struct FLandscapeProxyMaterialOverride
{
	struct FPerPlatformInt LODIndex; // 0x0(0x8)
	struct UMaterialInterface* Material; // 0x8(0x8)
};

// Object: ScriptStruct Landscape.LandscapeImportLayerInfo
// Size: 0x1 (Inherited: 0x0)
struct FLandscapeImportLayerInfo
{
	uint8_t Pad_0x0[0x1]; // 0x0(0x1)
};

// Object: ScriptStruct Landscape.LandscapeLayerStruct
// Size: 0x8 (Inherited: 0x0)
struct FLandscapeLayerStruct
{
	struct ULandscapeLayerInfoObject* LayerInfoObj; // 0x0(0x8)
};

// Object: ScriptStruct Landscape.LandscapeEditorLayerSettings
// Size: 0x1 (Inherited: 0x0)
struct FLandscapeEditorLayerSettings
{
	uint8_t Pad_0x0[0x1]; // 0x0(0x1)
};

// Object: ScriptStruct Landscape.LandscapeSplineConnection
// Size: 0x10 (Inherited: 0x0)
struct FLandscapeSplineConnection
{
	struct ULandscapeSplineSegment* Segment; // 0x0(0x8)
	uint8_t End : 1; // 0x8(0x1), Mask(0x1)
	uint8_t BitPad_0x8_1 : 7; // 0x8(0x1)
	uint8_t Pad_0x9[0x7]; // 0x9(0x7)
};

// Object: ScriptStruct Landscape.ForeignWorldSplineData
// Size: 0x1 (Inherited: 0x0)
struct FForeignWorldSplineData
{
	uint8_t Pad_0x0[0x1]; // 0x0(0x1)
};

// Object: ScriptStruct Landscape.ForeignSplineSegmentData
// Size: 0x1 (Inherited: 0x0)
struct FForeignSplineSegmentData
{
	uint8_t Pad_0x0[0x1]; // 0x0(0x1)
};

// Object: ScriptStruct Landscape.ForeignControlPointData
// Size: 0x1 (Inherited: 0x0)
struct FForeignControlPointData
{
	uint8_t Pad_0x0[0x1]; // 0x0(0x1)
};

// Object: ScriptStruct Landscape.LandscapeSplineMeshEntry
// Size: 0x38 (Inherited: 0x0)
struct FLandscapeSplineMeshEntry
{
	struct UStaticMesh* Mesh; // 0x0(0x8)
	struct TArray<struct UMaterialInterface*> MaterialOverrides; // 0x8(0x10)
	uint8_t bCenterH : 1; // 0x18(0x1), Mask(0x1)
	uint8_t BitPad_0x18_1 : 7; // 0x18(0x1)
	uint8_t Pad_0x19[0x3]; // 0x19(0x3)
	struct FVector2D CenterAdjust; // 0x1C(0x8)
	uint8_t bScaleToWidth : 1; // 0x24(0x1), Mask(0x1)
	uint8_t BitPad_0x24_1 : 7; // 0x24(0x1)
	uint8_t Pad_0x25[0x3]; // 0x25(0x3)
	struct FVector Scale; // 0x28(0xC)
	uint8_t Orientation; // 0x34(0x1)
	uint8_t ForwardAxis; // 0x35(0x1)
	uint8_t UpAxis; // 0x36(0x1)
	uint8_t Pad_0x37[0x1]; // 0x37(0x1)
};

// Object: ScriptStruct Landscape.LandscapeSplineSegmentConnection
// Size: 0x18 (Inherited: 0x0)
struct FLandscapeSplineSegmentConnection
{
	struct ULandscapeSplineControlPoint* ControlPoint; // 0x0(0x8)
	float TangentLen; // 0x8(0x4)
	struct FName SocketName; // 0xC(0x8)
	uint8_t Pad_0x14[0x4]; // 0x14(0x4)
};

// Object: ScriptStruct Landscape.LandscapeSplineInterpPoint
// Size: 0x70 (Inherited: 0x0)
struct FLandscapeSplineInterpPoint
{
	struct FVector Center; // 0x0(0xC)
	struct FVector Left; // 0xC(0xC)
	struct FVector Right; // 0x18(0xC)
	struct FVector FalloffLeft; // 0x24(0xC)
	struct FVector FalloffRight; // 0x30(0xC)
	struct FVector LayerLeft; // 0x3C(0xC)
	struct FVector LayerRight; // 0x48(0xC)
	struct FVector LayerFalloffLeft; // 0x54(0xC)
	struct FVector LayerFalloffRight; // 0x60(0xC)
	float StartEndFalloff; // 0x6C(0x4)
};

// Object: ScriptStruct Landscape.GrassInput
// Size: 0x28 (Inherited: 0x0)
struct FGrassInput
{
	struct FName Name; // 0x0(0x8)
	struct ULandscapeGrassType* GrassType; // 0x8(0x8)
	struct FExpressionInput Input; // 0x10(0xC)
	uint8_t Pad_0x1C[0xC]; // 0x1C(0xC)
};

// Object: ScriptStruct Landscape.LayerBlendInput
// Size: 0x48 (Inherited: 0x0)
struct FLayerBlendInput
{
	struct FName LayerName; // 0x0(0x8)
	uint8_t BlendType; // 0x8(0x1)
	uint8_t Pad_0x9[0x3]; // 0x9(0x3)
	struct FExpressionInput LayerInput; // 0xC(0xC)
	uint8_t Pad_0x18[0x8]; // 0x18(0x8)
	struct FExpressionInput HeightInput; // 0x20(0xC)
	uint8_t Pad_0x2C[0x8]; // 0x2C(0x8)
	float PreviewWeight; // 0x34(0x4)
	struct FVector ConstLayerInput; // 0x38(0xC)
	float ConstHeightInput; // 0x44(0x4)
};

// Object: ScriptStruct Landscape.PhysicalMaterialInput
// Size: 0x20 (Inherited: 0x0)
struct FPhysicalMaterialInput
{
	struct UPhysicalMaterial* PhysicalMaterial; // 0x0(0x8)
	struct FExpressionInput Input; // 0x8(0xC)
	uint8_t Pad_0x14[0xC]; // 0x14(0xC)
};

// Object: Class Landscape.ControlPointMeshActor
// Size: 0x308 (Inherited: 0x300)
struct AControlPointMeshActor : AActor
{
	DEFINE_UE_CLASS_HELPERS(AControlPointMeshActor, "ControlPointMeshActor")

	struct UControlPointMeshComponent* ControlPointMeshComponent; // 0x300(0x8)
};

// Object: Class Landscape.ControlPointMeshComponent
// Size: 0x790 (Inherited: 0x790)
struct UControlPointMeshComponent : UStaticMeshComponent
{
	DEFINE_UE_CLASS_HELPERS(UControlPointMeshComponent, "ControlPointMeshComponent")

	float VirtualTextureMainPassMaxDrawDistance; // 0x78C(0x4)
};

// Object: Class Landscape.GPUDrivenLandscapeBatchingComponent
// Size: 0x720 (Inherited: 0x680)
struct UGPUDrivenLandscapeBatchingComponent : UPrimitiveComponent
{
	DEFINE_UE_CLASS_HELPERS(UGPUDrivenLandscapeBatchingComponent, "GPUDrivenLandscapeBatchingComponent")

	struct FVector MasterLocation; // 0x678(0xC)
	struct FVector MasterScale; // 0x684(0xC)
	struct FVector4 LandscapeBound; // 0x690(0x10)
	struct UMaterialInterface* LandscapeMaterial; // 0x6A0(0x8)
	struct UMaterialInstanceConstant* MaterialInstance; // 0x6A8(0x8)
	struct UMaterialInstanceConstant* MaterialInstanceMobile; // 0x6B0(0x8)
	struct FGuid LandscapeGuid; // 0x6B8(0x10)
	bool bIsEnableGPUDriven; // 0x6C8(0x1)
	int32_t SubsectionSizeQuads; // 0x6CC(0x4)
	int32_t NumSubsections; // 0x6D0(0x4)
	bool bIsUseBuildConfig; // 0x6D4(0x1)
	struct FVector2D ComponentBaseMin; // 0x6D8(0x8)
	struct FVector2D ComponentBaseSize; // 0x6E0(0x8)
	int32_t LastLOD; // 0x6E8(0x4)
	struct FVector2D HeightmapUVScale; // 0x6EC(0x8)
	uint8_t Pad_0x6F6[0xA]; // 0x6F6(0xA)
	struct FVector4 WeightmapUVScaleBias; // 0x700(0x10)
	struct FVector4 SubsectionOffsetParams; // 0x710(0x10)
};

// Object: Class Landscape.LandscapeProxy
// Size: 0x678 (Inherited: 0x300)
struct ALandscapeProxy : AActor
{
	DEFINE_UE_CLASS_HELPERS(ALandscapeProxy, "LandscapeProxy")

	struct ULandscapeSplinesComponent* SplineComponent; // 0x300(0x8)
	bool bIsEnableGPUDriven; // 0x308(0x1)
	uint8_t Pad_0x309[0x3]; // 0x309(0x3)
	struct FVector2D ComponentBaseSize; // 0x30C(0x8)
	struct FVector2D ComponentBaseMin; // 0x314(0x8)
	struct FGuid LandscapeGuid; // 0x31C(0x10)
	struct FIntPoint LandscapeSectionOffset; // 0x32C(0x8)
	int32_t MaxLODLevel; // 0x334(0x4)
	float LODDistanceFactor; // 0x338(0x4)
	uint8_t LODFalloff; // 0x33C(0x1)
	uint8_t Pad_0x33D[0x3]; // 0x33D(0x3)
	float ComponentScreenSizeToUseSubSections; // 0x340(0x4)
	float LOD0ScreenSize; // 0x344(0x4)
	float LOD0DistributionSetting; // 0x348(0x4)
	float LODDistributionSetting; // 0x34C(0x4)
	float TessellationComponentScreenSize; // 0x350(0x4)
	bool UseTessellationComponentScreenSizeFalloff; // 0x354(0x1)
	uint8_t Pad_0x355[0x3]; // 0x355(0x3)
	float TessellationComponentScreenSizeFalloff; // 0x358(0x4)
	int32_t OccluderGeometryLOD; // 0x35C(0x4)
	bool bUseAsOccluder; // 0x360(0x1)
	uint8_t Pad_0x361[0x3]; // 0x361(0x3)
	int32_t StaticLightingLOD; // 0x364(0x4)
	struct UPhysicalMaterial* DefaultPhysMaterial; // 0x368(0x8)
	float StreamingDistanceMultiplier; // 0x370(0x4)
	uint8_t Pad_0x374[0x4]; // 0x374(0x4)
	struct UMaterialInterface* LandscapeMaterial; // 0x378(0x8)
	uint8_t Pad_0x380[0x20]; // 0x380(0x20)
	struct UMaterialInterface* LandscapeHoleMaterial; // 0x3A0(0x8)
	struct TArray<struct FLandscapeProxyMaterialOverride> LandscapeMaterialsOverride; // 0x3A8(0x10)
	bool bMeshHoles; // 0x3B8(0x1)
	uint8_t MeshHolesMaxLod; // 0x3B9(0x1)
	uint8_t Pad_0x3BA[0x6]; // 0x3BA(0x6)
	struct TArray<struct URuntimeVirtualTexture*> RuntimeVirtualTextures; // 0x3C0(0x10)
	int32_t VirtualTextureNumLods; // 0x3D0(0x4)
	int32_t VirtualTextureLodBias; // 0x3D4(0x4)
	int32_t RVTTranslucencySortPriority; // 0x3D8(0x4)
	ERuntimeVirtualTextureMainPassType VirtualTextureRenderPassType; // 0x3DC(0x1)
	uint8_t Pad_0x3DD[0x3]; // 0x3DD(0x3)
	float NegativeZBoundsExtension; // 0x3E0(0x4)
	float PositiveZBoundsExtension; // 0x3E4(0x4)
	struct TArray<struct ULandscapeComponent*> LandscapeComponents; // 0x3E8(0x10)
	struct TArray<struct ULandscapeHeightfieldCollisionComponent*> CollisionComponents; // 0x3F8(0x10)
	struct TArray<struct UHierarchicalInstancedStaticMeshComponent*> FoliageComponents; // 0x408(0x10)
	uint8_t Pad_0x418[0x64]; // 0x418(0x64)
	bool bHasLandscapeGrass; // 0x47C(0x1)
	uint8_t Pad_0x47D[0x3]; // 0x47D(0x3)
	float StaticLightingResolution; // 0x480(0x4)
	uint8_t CastShadow : 1; // 0x484(0x1), Mask(0x1)
	uint8_t bCastDynamicShadow : 1; // 0x484(0x1), Mask(0x2)
	uint8_t bCastStaticShadow : 1; // 0x484(0x1), Mask(0x4)
	uint8_t bCastFarShadow : 1; // 0x484(0x1), Mask(0x8)
	uint8_t bCastHiddenShadow : 1; // 0x484(0x1), Mask(0x10)
	uint8_t bHiddenShadowOnShadowCapture : 1; // 0x484(0x1), Mask(0x20)
	uint8_t BitPad_0x484_6 : 2; // 0x484(0x1)
	EShadowCaptureLayer ShadowCaptureLayer; // 0x485(0x1)
	uint8_t bCastShadowAsTwoSided : 1; // 0x486(0x1), Mask(0x1)
	uint8_t bAffectDistanceFieldLighting : 1; // 0x486(0x1), Mask(0x2)
	uint8_t BitPad_0x486_2 : 6; // 0x486(0x1)
	struct FLightingChannels LightingChannels; // 0x487(0x1)
	uint8_t bUseMaterialPositionOffsetInStaticLighting : 1; // 0x488(0x1), Mask(0x1)
	uint8_t bStaticShadowMaskOnly : 1; // 0x488(0x1), Mask(0x2)
	uint8_t bForceUseSkyLightAsDiffuseGI : 1; // 0x488(0x1), Mask(0x4)
	uint8_t bRenderCustomDepth : 1; // 0x488(0x1), Mask(0x8)
	uint8_t BitPad_0x488_4 : 4; // 0x488(0x1)
	ERendererStencilMask CustomDepthStencilWriteMask; // 0x489(0x1)
	uint8_t Pad_0x48A[0x2]; // 0x48A(0x2)
	int32_t CustomDepthStencilValue; // 0x48C(0x4)
	float LDMaxDrawDistance; // 0x490(0x4)
	uint8_t bForceUseSkyReflectionCaptureOnly : 1; // 0x494(0x1), Mask(0x1)
	uint8_t BitPad_0x494_1 : 7; // 0x494(0x1)
	uint8_t Pad_0x495[0x3]; // 0x495(0x3)
	struct FLightmassPrimitiveSettings LightmassSettings; // 0x498(0x18)
	int32_t CollisionMipLevel; // 0x4B0(0x4)
	int32_t SimpleCollisionMipLevel; // 0x4B4(0x4)
	float CollisionThickness; // 0x4B8(0x4)
	uint8_t Pad_0x4BC[0x4]; // 0x4BC(0x4)
	struct FBodyInstance BodyInstance; // 0x4C0(0x150)
	uint8_t bGenerateOverlapEvents : 1; // 0x610(0x1), Mask(0x1)
	uint8_t bBakeMaterialPositionOffsetIntoCollision : 1; // 0x610(0x1), Mask(0x2)
	uint8_t BitPad_0x610_2 : 6; // 0x610(0x1)
	uint8_t Pad_0x611[0x3]; // 0x611(0x3)
	int32_t ComponentSizeQuads; // 0x614(0x4)
	int32_t SubsectionSizeQuads; // 0x618(0x4)
	int32_t NumSubsections; // 0x61C(0x4)
	uint8_t bUsedForNavigation : 1; // 0x620(0x1), Mask(0x1)
	uint8_t bFillCollisionUnderLandscapeForNavmesh : 1; // 0x620(0x1), Mask(0x2)
	uint8_t BitPad_0x620_2 : 6; // 0x620(0x1)
	bool bUseDynamicMaterialInstance; // 0x621(0x1)
	ENavDataGatheringMode NavigationGeometryGatheringMode; // 0x622(0x1)
	bool bUseLandscapeForCullingInvisibleHLODVertices; // 0x623(0x1)
	bool bHasLayersContent; // 0x624(0x1)
	uint8_t Pad_0x625[0x3]; // 0x625(0x3)
	struct TMap<struct UTexture2D*, struct ULandscapeWeightmapUsage*> WeightmapUsageMap; // 0x628(0x50)

	// Object: Function Landscape.LandscapeProxy.SetLandscapeMaterialVectorParameterValue
	// Flags: [Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable]
	// Offset: 0xae59e58
	// Params: [ Num(2) Size(0x18) ]
	void SetLandscapeMaterialVectorParameterValue(struct FName ParameterName, struct FLinearColor Value);

	// Object: Function Landscape.LandscapeProxy.SetLandscapeMaterialTextureParameterValue
	// Flags: [Final|RequiredAPI|Native|Public|BlueprintCallable]
	// Offset: 0xae59f40
	// Params: [ Num(2) Size(0x10) ]
	void SetLandscapeMaterialTextureParameterValue(struct FName ParameterName, struct UTexture* Value);

	// Object: Function Landscape.LandscapeProxy.SetLandscapeMaterialScalarParameterValue
	// Flags: [Final|RequiredAPI|Native|Public|BlueprintCallable]
	// Offset: 0xae59d70
	// Params: [ Num(2) Size(0xC) ]
	void SetLandscapeMaterialScalarParameterValue(struct FName ParameterName, float Value);

	// Object: Function Landscape.LandscapeProxy.LandscapeExportHeightmapToRenderTarget
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xae59c24
	// Params: [ Num(4) Size(0xB) ]
	bool LandscapeExportHeightmapToRenderTarget(struct UTextureRenderTarget2D* InRenderTarget, bool InExportHeightIntoRGChannel, bool InExportLandscapeProxies);

	// Object: Function Landscape.LandscapeProxy.EditorSetLandscapeMaterial
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xae5a398
	// Params: [ Num(1) Size(0x8) ]
	void EditorSetLandscapeMaterial(struct UMaterialInterface* NewLandscapeMaterial);

	// Object: Function Landscape.LandscapeProxy.EditorApplySpline
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xae5a024
	// Params: [ Num(12) Size(0x38) ]
	void EditorApplySpline(struct USplineComponent* InSplineComponent, float StartWidth, float EndWidth, float StartSideFalloff, float EndSideFalloff, float StartRoll, float EndRoll, int32_t NumSubdivisions, bool bRaiseHeights, bool bLowerHeights, struct ULandscapeLayerInfoObject* PaintLayer, struct FName EditLayerName);

	// Object: Function Landscape.LandscapeProxy.ChangeUseTessellationComponentScreenSizeFalloff
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0xae5a4f0
	// Params: [ Num(1) Size(0x1) ]
	void ChangeUseTessellationComponentScreenSizeFalloff(bool InComponentScreenSizeToUseSubSections);

	// Object: Function Landscape.LandscapeProxy.ChangeTessellationComponentScreenSizeFalloff
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0xae5a440
	// Params: [ Num(1) Size(0x4) ]
	void ChangeTessellationComponentScreenSizeFalloff(float InUseTessellationComponentScreenSizeFalloff);

	// Object: Function Landscape.LandscapeProxy.ChangeTessellationComponentScreenSize
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0xae5a658
	// Params: [ Num(1) Size(0x4) ]
	void ChangeTessellationComponentScreenSize(float InTessellationComponentScreenSize);

	// Object: Function Landscape.LandscapeProxy.ChangeLODDistanceFactor
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0xae5a708
	// Params: [ Num(1) Size(0x4) ]
	void ChangeLODDistanceFactor(float InLODDistanceFactor);

	// Object: Function Landscape.LandscapeProxy.ChangeComponentScreenSizeToUseSubSections
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0xae5a5a8
	// Params: [ Num(1) Size(0x4) ]
	void ChangeComponentScreenSizeToUseSubSections(float InComponentScreenSizeToUseSubSections);
};

// Object: Class Landscape.Landscape
// Size: 0x678 (Inherited: 0x678)
struct ALandscape : ALandscapeProxy
{
	DEFINE_UE_CLASS_HELPERS(ALandscape, "Landscape")
};

// Object: Class Landscape.LandscapeBlueprintBrushBase
// Size: 0x300 (Inherited: 0x300)
struct ALandscapeBlueprintBrushBase : AActor
{
	DEFINE_UE_CLASS_HELPERS(ALandscapeBlueprintBrushBase, "LandscapeBlueprintBrushBase")

	// Object: Function Landscape.LandscapeBlueprintBrushBase.RequestLandscapeUpdate
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xae55514
	// Params: [ Num(0) Size(0x0) ]
	void RequestLandscapeUpdate();

	// Object: Function Landscape.LandscapeBlueprintBrushBase.Render
	// Flags: [Native|Event|Public|HasOutParms|BlueprintEvent]
	// Offset: 0xae556a4
	// Params: [ Num(4) Size(0x20) ]
	struct UTextureRenderTarget2D* Render(bool InIsHeightmap, struct UTextureRenderTarget2D* InCombinedResult, const struct FName& InWeightmapLayerName);

	// Object: Function Landscape.LandscapeBlueprintBrushBase.Initialize
	// Flags: [Native|Event|Public|HasOutParms|HasDefaults|BlueprintEvent]
	// Offset: 0xae55528
	// Params: [ Num(3) Size(0x40) ]
	void Initialize(const struct FTransform& InLandscapeTransform, const struct FIntPoint& InLandscapeSize, const struct FIntPoint& InLandscapeRenderTargetSize);

	// Object: Function Landscape.LandscapeBlueprintBrushBase.GetBlueprintRenderDependencies
	// Flags: [Event|Public|HasOutParms|BlueprintEvent]
	// Offset: 0x5d8cbc8
	// Params: [ Num(1) Size(0x10) ]
	void GetBlueprintRenderDependencies(struct TArray<struct UObject*>& OutStreamableAssets);
};

// Object: Class Landscape.LandscapeLODStreamingProxy
// Size: 0x70 (Inherited: 0x68)
struct ULandscapeLODStreamingProxy : UStreamableRenderAsset
{
	DEFINE_UE_CLASS_HELPERS(ULandscapeLODStreamingProxy, "LandscapeLODStreamingProxy")

	uint8_t Pad_0x68[0x8]; // 0x68(0x8)
};

// Object: Class Landscape.LandscapeComponent
// Size: 0x8A0 (Inherited: 0x680)
struct ULandscapeComponent : UPrimitiveComponent
{
	DEFINE_UE_CLASS_HELPERS(ULandscapeComponent, "LandscapeComponent")

	int32_t SectionBaseX; // 0x678(0x4)
	int32_t SectionBaseY; // 0x67C(0x4)
	int32_t ComponentSizeQuads; // 0x680(0x4)
	int32_t SubsectionSizeQuads; // 0x684(0x4)
	int32_t NumSubsections; // 0x688(0x4)
	struct UMaterialInterface* OverrideMaterial; // 0x690(0x8)
	struct UMaterialInterface* OverrideHoleMaterial; // 0x698(0x8)
	struct TArray<struct FLandscapeComponentMaterialOverride> OverrideMaterials; // 0x6A0(0x10)
	bool bRemoveMobileWeightmap; // 0x6B0(0x1)
	uint8_t Pad_0x6B5[0x3]; // 0x6B5(0x3)
	struct TArray<struct UMaterialInstanceConstant*> MaterialInstances; // 0x6B8(0x10)
	struct TArray<struct UMaterialInstanceDynamic*> MaterialInstancesDynamic; // 0x6C8(0x10)
	struct TArray<int8_t> LODIndexToMaterialIndex; // 0x6D8(0x10)
	struct TArray<int8_t> MaterialIndexToDisabledTessellationMaterial; // 0x6E8(0x10)
	struct UTexture2D* XYOffsetmapTexture; // 0x6F8(0x8)
	struct FVector4 WeightmapScaleBias; // 0x700(0x10)
	float WeightmapSubsectionOffset; // 0x710(0x4)
	uint8_t Pad_0x714[0xC]; // 0x714(0xC)
	struct FVector4 HeightmapScaleBias; // 0x720(0x10)
	struct FBox CachedLocalBox; // 0x730(0x1C)
	struct TLazyObjectPtr<struct ULandscapeHeightfieldCollisionComponent> CollisionComponent; // 0x74C(0x1C)
	struct UTexture2D* HeightmapTexture; // 0x768(0x8)
	struct TArray<struct FWeightmapLayerAllocationInfo> WeightmapLayerAllocations; // 0x770(0x10)
	struct TArray<struct UTexture2D*> WeightmapTextures; // 0x780(0x10)
	struct ULandscapeLODStreamingProxy* LODStreamingProxy; // 0x790(0x8)
	struct FGuid MapBuildDataId; // 0x798(0x10)
	struct TArray<struct FGuid> IrrelevantLights; // 0x7A8(0x10)
	int32_t CollisionMipLevel; // 0x7B8(0x4)
	int32_t SimpleCollisionMipLevel; // 0x7BC(0x4)
	float NegativeZBoundsExtension; // 0x7C0(0x4)
	float PositiveZBoundsExtension; // 0x7C4(0x4)
	float StaticLightingResolution; // 0x7C8(0x4)
	int32_t ForcedLOD; // 0x7CC(0x4)
	int32_t LODBias; // 0x7D0(0x4)
	struct FGuid StateId; // 0x7D4(0x10)
	struct FGuid BakedTextureMaterialGuid; // 0x7E4(0x10)
	uint8_t Pad_0x7F4[0x4]; // 0x7F4(0x4)
	struct UTexture2D* GIBakedBaseColorTexture; // 0x7F8(0x8)
	uint8_t MobileBlendableLayerMask; // 0x800(0x1)
	uint8_t Pad_0x801[0x7]; // 0x801(0x7)
	struct UMaterialInterface* MobileMaterialInterface; // 0x808(0x8)
	struct TArray<struct UMaterialInterface*> MobileMaterialInterfaces; // 0x810(0x10)
	struct TArray<struct UTexture2D*> MobileWeightmapTextures; // 0x820(0x10)
	uint8_t Pad_0x830[0x70]; // 0x830(0x70)

	// Object: Function Landscape.LandscapeComponent.GetMaterialInstanceDynamic
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xae55a7c
	// Params: [ Num(2) Size(0x10) ]
	struct UMaterialInstanceDynamic* GetMaterialInstanceDynamic(int32_t InIndex);

	// Object: Function Landscape.LandscapeComponent.EditorGetPaintLayerWeightByNameAtLocation
	// Flags: [Final|RequiredAPI|Native|Public|HasOutParms|HasDefaults|BlueprintCallable]
	// Offset: 0xae5587c
	// Params: [ Num(3) Size(0x18) ]
	float EditorGetPaintLayerWeightByNameAtLocation(const struct FVector& InLocation, struct FName InPaintLayerName);

	// Object: Function Landscape.LandscapeComponent.EditorGetPaintLayerWeightAtLocation
	// Flags: [Final|RequiredAPI|Native|Public|HasOutParms|HasDefaults|BlueprintCallable]
	// Offset: 0xae5597c
	// Params: [ Num(3) Size(0x1C) ]
	float EditorGetPaintLayerWeightAtLocation(const struct FVector& InLocation, struct ULandscapeLayerInfoObject* PaintLayer);
};

// Object: Class Landscape.LandscapeGizmoActor
// Size: 0x300 (Inherited: 0x300)
struct ALandscapeGizmoActor : AActor
{
	DEFINE_UE_CLASS_HELPERS(ALandscapeGizmoActor, "LandscapeGizmoActor")
};

// Object: Class Landscape.LandscapeGizmoActiveActor
// Size: 0x350 (Inherited: 0x300)
struct ALandscapeGizmoActiveActor : ALandscapeGizmoActor
{
	DEFINE_UE_CLASS_HELPERS(ALandscapeGizmoActiveActor, "LandscapeGizmoActiveActor")

	uint8_t Pad_0x300[0x50]; // 0x300(0x50)
};

// Object: Class Landscape.LandscapeGizmoRenderComponent
// Size: 0x680 (Inherited: 0x680)
struct ULandscapeGizmoRenderComponent : UPrimitiveComponent
{
	DEFINE_UE_CLASS_HELPERS(ULandscapeGizmoRenderComponent, "LandscapeGizmoRenderComponent")
};

// Object: Class Landscape.LandscapeGrassType
// Size: 0x60 (Inherited: 0x28)
struct ULandscapeGrassType : UObject
{
	DEFINE_UE_CLASS_HELPERS(ULandscapeGrassType, "LandscapeGrassType")

	struct TArray<struct FGrassVariety> GrassVarieties; // 0x28(0x10)
	uint8_t bEnableDensityScaling : 1; // 0x38(0x1), Mask(0x1)
	uint8_t BitPad_0x38_1 : 7; // 0x38(0x1)
	uint8_t Pad_0x39[0x7]; // 0x39(0x7)
	struct UStaticMesh* GrassMesh; // 0x40(0x8)
	float GrassDensity; // 0x48(0x4)
	float PlacementJitter; // 0x4C(0x4)
	int32_t StartCullDistance; // 0x50(0x4)
	int32_t EndCullDistance; // 0x54(0x4)
	bool RandomRotation; // 0x58(0x1)
	bool AlignToSurface; // 0x59(0x1)
	uint8_t Pad_0x5A[0x6]; // 0x5A(0x6)
};

// Object: Class Landscape.LandscapeHeightfieldCollisionComponent
// Size: 0x760 (Inherited: 0x680)
struct ULandscapeHeightfieldCollisionComponent : UPrimitiveComponent
{
	DEFINE_UE_CLASS_HELPERS(ULandscapeHeightfieldCollisionComponent, "LandscapeHeightfieldCollisionComponent")

	struct TArray<struct ULandscapeLayerInfoObject*> ComponentLayerInfos; // 0x678(0x10)
	int32_t SectionBaseX; // 0x688(0x4)
	int32_t SectionBaseY; // 0x68C(0x4)
	int32_t CollisionSizeQuads; // 0x690(0x4)
	float CollisionScale; // 0x694(0x4)
	int32_t SimpleCollisionSizeQuads; // 0x698(0x4)
	struct TArray<uint8_t> CollisionQuadFlags; // 0x6A0(0x10)
	struct FGuid HeightfieldGuid; // 0x6B0(0x10)
	struct FBox CachedLocalBox; // 0x6C0(0x1C)
	struct TLazyObjectPtr<struct ULandscapeComponent> RenderComponent; // 0x6DC(0x1C)
	uint8_t Pad_0x6FC[0xC]; // 0x6FC(0xC)
	struct TArray<struct UPhysicalMaterial*> CookedPhysicalMaterials; // 0x708(0x10)
	uint8_t Pad_0x718[0x48]; // 0x718(0x48)

	// Object: Function Landscape.LandscapeHeightfieldCollisionComponent.GetRenderComponent
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xae55d98
	// Params: [ Num(1) Size(0x8) ]
	struct ULandscapeComponent* GetRenderComponent();
};

// Object: Class Landscape.LandscapeInfo
// Size: 0x210 (Inherited: 0x28)
struct ULandscapeInfo : UObject
{
	DEFINE_UE_CLASS_HELPERS(ULandscapeInfo, "LandscapeInfo")

	struct TLazyObjectPtr<struct ALandscape> LandscapeActor; // 0x28(0x1C)
	struct FGuid LandscapeGuid; // 0x44(0x10)
	int32_t ComponentSizeQuads; // 0x54(0x4)
	int32_t SubsectionSizeQuads; // 0x58(0x4)
	int32_t ComponentNumSubsections; // 0x5C(0x4)
	struct FVector DrawScale; // 0x60(0xC)
	uint8_t Pad_0x6C[0xA4]; // 0x6C(0xA4)
	struct TArray<struct ALandscapeStreamingProxy*> Proxies; // 0x110(0x10)
	uint8_t Pad_0x120[0xF0]; // 0x120(0xF0)
};

// Object: Class Landscape.LandscapeInfoMap
// Size: 0x80 (Inherited: 0x28)
struct ULandscapeInfoMap : UObject
{
	DEFINE_UE_CLASS_HELPERS(ULandscapeInfoMap, "LandscapeInfoMap")

	uint8_t Pad_0x28[0x58]; // 0x28(0x58)
};

// Object: Class Landscape.LandscapeLayerInfoObject
// Size: 0x50 (Inherited: 0x28)
struct ULandscapeLayerInfoObject : UObject
{
	DEFINE_UE_CLASS_HELPERS(ULandscapeLayerInfoObject, "LandscapeLayerInfoObject")

	struct FName LayerName; // 0x28(0x8)
	struct UPhysicalMaterial* PhysMaterial; // 0x30(0x8)
	float Hardness; // 0x38(0x4)
	struct FLinearColor LayerUsageDebugColor; // 0x3C(0x10)
	uint8_t Pad_0x4C[0x4]; // 0x4C(0x4)
};

// Object: Class Landscape.LandscapeMaterialInstanceConstant
// Size: 0x3C8 (Inherited: 0x3B0)
struct ULandscapeMaterialInstanceConstant : UMaterialInstanceConstant
{
	DEFINE_UE_CLASS_HELPERS(ULandscapeMaterialInstanceConstant, "LandscapeMaterialInstanceConstant")

	struct TArray<struct FLandscapeMaterialTextureStreamingInfo> TextureStreamingInfo; // 0x3B0(0x10)
	uint8_t bIsLayerThumbnail : 1; // 0x3C0(0x1), Mask(0x1)
	uint8_t bDisableTessellation : 1; // 0x3C0(0x1), Mask(0x2)
	uint8_t bMobile : 1; // 0x3C0(0x1), Mask(0x4)
	uint8_t bEditorToolUsage : 1; // 0x3C0(0x1), Mask(0x8)
	uint8_t BitPad_0x3C0_4 : 4; // 0x3C0(0x1)
	uint8_t Pad_0x3C1[0x7]; // 0x3C1(0x7)
};

// Object: Class Landscape.LandscapeMeshCollisionComponent
// Size: 0x780 (Inherited: 0x760)
struct ULandscapeMeshCollisionComponent : ULandscapeHeightfieldCollisionComponent
{
	DEFINE_UE_CLASS_HELPERS(ULandscapeMeshCollisionComponent, "LandscapeMeshCollisionComponent")

	struct FGuid MeshGuid; // 0x75C(0x10)
	uint8_t Pad_0x770[0x10]; // 0x770(0x10)
};

// Object: Class Landscape.LandscapeMeshProxyActor
// Size: 0x308 (Inherited: 0x300)
struct ALandscapeMeshProxyActor : AActor
{
	DEFINE_UE_CLASS_HELPERS(ALandscapeMeshProxyActor, "LandscapeMeshProxyActor")

	struct ULandscapeMeshProxyComponent* LandscapeMeshProxyComponent; // 0x300(0x8)
};

// Object: Class Landscape.LandscapeMeshProxyComponent
// Size: 0x7C0 (Inherited: 0x790)
struct ULandscapeMeshProxyComponent : UStaticMeshComponent
{
	DEFINE_UE_CLASS_HELPERS(ULandscapeMeshProxyComponent, "LandscapeMeshProxyComponent")

	struct FGuid LandscapeGuid; // 0x78C(0x10)
	struct TArray<struct FIntPoint> ProxyComponentBases; // 0x7A0(0x10)
	int8_t ProxyLOD; // 0x7B0(0x1)
	uint8_t Pad_0x7B1[0xF]; // 0x7B1(0xF)
};

// Object: Class Landscape.LandscapeSettings
// Size: 0x40 (Inherited: 0x38)
struct ULandscapeSettings : UDeveloperSettings
{
	DEFINE_UE_CLASS_HELPERS(ULandscapeSettings, "LandscapeSettings")

	int32_t MaxNumberOfLayers; // 0x38(0x4)
	uint8_t Pad_0x3C[0x4]; // 0x3C(0x4)
};

// Object: Class Landscape.LandscapeSplinesComponent
// Size: 0x6B0 (Inherited: 0x680)
struct ULandscapeSplinesComponent : UPrimitiveComponent
{
	DEFINE_UE_CLASS_HELPERS(ULandscapeSplinesComponent, "LandscapeSplinesComponent")

	struct TArray<struct ULandscapeSplineControlPoint*> ControlPoints; // 0x678(0x10)
	struct TArray<struct ULandscapeSplineSegment*> Segments; // 0x688(0x10)
	struct TArray<struct UMeshComponent*> CookedForeignMeshComponents; // 0x698(0x10)

	// Object: Function Landscape.LandscapeSplinesComponent.GetSplineMeshComponents
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xae5d9b8
	// Params: [ Num(1) Size(0x10) ]
	struct TArray<struct USplineMeshComponent*> GetSplineMeshComponents();
};

// Object: Class Landscape.LandscapeSplineControlPoint
// Size: 0xA8 (Inherited: 0x28)
struct ULandscapeSplineControlPoint : UObject
{
	DEFINE_UE_CLASS_HELPERS(ULandscapeSplineControlPoint, "LandscapeSplineControlPoint")

	struct FVector Location; // 0x28(0xC)
	struct FRotator Rotation; // 0x34(0xC)
	float Width; // 0x40(0x4)
	float LayerWidthRatio; // 0x44(0x4)
	float SideFalloff; // 0x48(0x4)
	float LeftSideFalloffFactor; // 0x4C(0x4)
	float RightSideFalloffFactor; // 0x50(0x4)
	float LeftSideLayerFalloffFactor; // 0x54(0x4)
	float RightSideLayerFalloffFactor; // 0x58(0x4)
	float EndFalloff; // 0x5C(0x4)
	struct TArray<struct FLandscapeSplineConnection> ConnectedSegments; // 0x60(0x10)
	struct TArray<struct FLandscapeSplineInterpPoint> Points; // 0x70(0x10)
	struct FBox Bounds; // 0x80(0x1C)
	uint8_t Pad_0x9C[0x4]; // 0x9C(0x4)
	struct UControlPointMeshComponent* LocalMeshComponent; // 0xA0(0x8)
};

// Object: Class Landscape.LandscapeSplineSegment
// Size: 0xB0 (Inherited: 0x28)
struct ULandscapeSplineSegment : UObject
{
	DEFINE_UE_CLASS_HELPERS(ULandscapeSplineSegment, "LandscapeSplineSegment")

	struct FLandscapeSplineSegmentConnection Connections[0x2]; // 0x28(0x30)
	struct FInterpCurveVector SplineInfo; // 0x58(0x18)
	struct TArray<struct FLandscapeSplineInterpPoint> Points; // 0x70(0x10)
	struct FBox Bounds; // 0x80(0x1C)
	uint8_t Pad_0x9C[0x4]; // 0x9C(0x4)
	struct TArray<struct USplineMeshComponent*> LocalMeshComponents; // 0xA0(0x10)
};

// Object: Class Landscape.LandscapeStreamingProxy
// Size: 0x698 (Inherited: 0x678)
struct ALandscapeStreamingProxy : ALandscapeProxy
{
	DEFINE_UE_CLASS_HELPERS(ALandscapeStreamingProxy, "LandscapeStreamingProxy")

	struct TLazyObjectPtr<struct ALandscape> LandscapeActor; // 0x678(0x1C)
	uint8_t Pad_0x694[0x4]; // 0x694(0x4)
};

// Object: Class Landscape.LandscapeSubsystem
// Size: 0xF0 (Inherited: 0x30)
struct ULandscapeSubsystem : UWorldSubsystem
{
	DEFINE_UE_CLASS_HELPERS(ULandscapeSubsystem, "LandscapeSubsystem")

	uint8_t Pad_0x30[0xC0]; // 0x30(0xC0)
};

// Object: Class Landscape.LandscapeWeightmapUsage
// Size: 0x58 (Inherited: 0x28)
struct ULandscapeWeightmapUsage : UObject
{
	DEFINE_UE_CLASS_HELPERS(ULandscapeWeightmapUsage, "LandscapeWeightmapUsage")

	struct ULandscapeComponent* ChannelUsage[0x4]; // 0x28(0x20)
	struct FGuid LayerGuid; // 0x48(0x10)
};

// Object: Class Landscape.MaterialExpressionLandscapeGrassOutput
// Size: 0x50 (Inherited: 0x40)
struct UMaterialExpressionLandscapeGrassOutput : UMaterialExpressionCustomOutput
{
	DEFINE_UE_CLASS_HELPERS(UMaterialExpressionLandscapeGrassOutput, "MaterialExpressionLandscapeGrassOutput")

	struct TArray<struct FGrassInput> GrassTypes; // 0x40(0x10)
};

// Object: Class Landscape.MaterialExpressionLandscapeLayerBlend
// Size: 0x60 (Inherited: 0x40)
struct UMaterialExpressionLandscapeLayerBlend : UMaterialExpression
{
	DEFINE_UE_CLASS_HELPERS(UMaterialExpressionLandscapeLayerBlend, "MaterialExpressionLandscapeLayerBlend")

	struct TArray<struct FLayerBlendInput> Layers; // 0x40(0x10)
	struct FGuid ExpressionGUID; // 0x50(0x10)
};

// Object: Class Landscape.MaterialExpressionLandscapeLayerCoords
// Size: 0x50 (Inherited: 0x40)
struct UMaterialExpressionLandscapeLayerCoords : UMaterialExpression
{
	DEFINE_UE_CLASS_HELPERS(UMaterialExpressionLandscapeLayerCoords, "MaterialExpressionLandscapeLayerCoords")

	uint8_t MappingType; // 0x39(0x1)
	uint8_t CustomUVType; // 0x3A(0x1)
	float MappingScale; // 0x3C(0x4)
	float MappingRotation; // 0x40(0x4)
	float MappingPanU; // 0x44(0x4)
	float MappingPanV; // 0x48(0x4)
};

// Object: Class Landscape.MaterialExpressionLandscapeLayerSample
// Size: 0x58 (Inherited: 0x40)
struct UMaterialExpressionLandscapeLayerSample : UMaterialExpression
{
	DEFINE_UE_CLASS_HELPERS(UMaterialExpressionLandscapeLayerSample, "MaterialExpressionLandscapeLayerSample")

	struct FName ParameterName; // 0x3C(0x8)
	float PreviewWeight; // 0x44(0x4)
	struct FGuid ExpressionGUID; // 0x48(0x10)
};

// Object: Class Landscape.MaterialExpressionLandscapeLayerSwitch
// Size: 0x80 (Inherited: 0x40)
struct UMaterialExpressionLandscapeLayerSwitch : UMaterialExpression
{
	DEFINE_UE_CLASS_HELPERS(UMaterialExpressionLandscapeLayerSwitch, "MaterialExpressionLandscapeLayerSwitch")

	struct FExpressionInput LayerUsed; // 0x3C(0xC)
	uint8_t Pad_0x4C[0x4]; // 0x4C(0x4)
	struct FExpressionInput LayerNotUsed; // 0x50(0xC)
	uint8_t Pad_0x5C[0x8]; // 0x5C(0x8)
	struct FName ParameterName; // 0x64(0x8)
	uint8_t PreviewUsed : 1; // 0x6C(0x1), Mask(0x1)
	uint8_t BitPad_0x6C_1 : 7; // 0x6C(0x1)
	uint8_t Pad_0x6D[0x3]; // 0x6D(0x3)
	struct FGuid ExpressionGUID; // 0x70(0x10)
};

// Object: Class Landscape.MaterialExpressionLandscapeLayerWeight
// Size: 0x90 (Inherited: 0x40)
struct UMaterialExpressionLandscapeLayerWeight : UMaterialExpression
{
	DEFINE_UE_CLASS_HELPERS(UMaterialExpressionLandscapeLayerWeight, "MaterialExpressionLandscapeLayerWeight")

	struct FExpressionInput Base; // 0x3C(0xC)
	uint8_t Pad_0x4C[0x4]; // 0x4C(0x4)
	struct FExpressionInput Layer; // 0x50(0xC)
	uint8_t Pad_0x5C[0x8]; // 0x5C(0x8)
	struct FName ParameterName; // 0x64(0x8)
	float PreviewWeight; // 0x6C(0x4)
	struct FVector ConstBase; // 0x70(0xC)
	struct FGuid ExpressionGUID; // 0x7C(0x10)
	uint8_t Pad_0x8C[0x4]; // 0x8C(0x4)
};

// Object: Class Landscape.MaterialExpressionLandscapePhysicalMaterialOutput
// Size: 0x50 (Inherited: 0x40)
struct UMaterialExpressionLandscapePhysicalMaterialOutput : UMaterialExpressionCustomOutput
{
	DEFINE_UE_CLASS_HELPERS(UMaterialExpressionLandscapePhysicalMaterialOutput, "MaterialExpressionLandscapePhysicalMaterialOutput")

	struct TArray<struct FPhysicalMaterialInput> Inputs; // 0x40(0x10)
};

// Object: Class Landscape.MaterialExpressionLandscapeVisibilityMask
// Size: 0x50 (Inherited: 0x40)
struct UMaterialExpressionLandscapeVisibilityMask : UMaterialExpression
{
	DEFINE_UE_CLASS_HELPERS(UMaterialExpressionLandscapeVisibilityMask, "MaterialExpressionLandscapeVisibilityMask")

	struct FGuid ExpressionGUID; // 0x3C(0x10)
};

} // namespace SDK
