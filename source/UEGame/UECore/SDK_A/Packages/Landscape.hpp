#pragma once

#include "../CoreUObject_classes.hpp"
#include "Engine.hpp"

namespace SDK
{

// Package: Landscape
// Enums: 14
// Structs: 32
// Classes: 36

struct AClipmapActor;
enum class ENavDataGatheringMode : uint8_t;
enum class ERuntimeVirtualTextureLayerType : uint8_t;
enum class ERuntimeVirtualTextureMainPassType : uint8_t;
enum class ESplineMeshAxis : uint8_t;
struct UBinaryAsset;
struct UDynamicTexture2DArray;
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
struct UTexture2DArray;
struct UTextureRenderTarget2D;
struct FCDLODMaterial;
struct FLandscapeLayerParameter;
struct FDTAPatchTextureIndices;
struct FLandscapeLayer;
struct FLandscapeLayerBrush;
struct FLandscapeCustomMaskDataProperties;
struct FLandscapeCustomMaskData;
struct FHeightmapData;
struct FWeightmapData;
struct FLandscapeLayerComponentData;
struct FWeightmapLayerAllocationInfo;
struct FLandscapeComponentMaterialOverride;
struct FLandscapeEditToolRenderData;
struct FGizmoSelectData;
struct FGrassVariety;
struct FLandscapeInfoLayerSettings;
struct FLandscapeCustomMaskDataLayer;
struct FLandscapeProxyMaterialOverride;
struct FLandscapeImportLayerInfo;
struct FLandscapeLayerStruct;
struct FLandscapeCustomMaskDataLayerSettings;
struct FLandscapeEditorLayerSettings;
struct FEditorLayerInfo;
struct FLandscapeSplineConnection;
struct FForeignWorldSplineData;
struct FForeignSplineSegmentData;
struct FForeignControlPointData;
struct FLandscapeSplineMeshEntry;
struct FLandscapeSplineSegmentConnection;
struct FLandscapeSplineInterpPoint;
struct FGrassInput;
struct FLayerBlendInput;
struct UCDLODComponent;
struct AControlPointMeshActor;
struct UControlPointMeshComponent;
struct UDTAComponent;
struct ALandscapeProxy;
struct ALandscape;
struct ALandscapeBlueprintBrushBase;
struct ULandscapeComponent;
struct ULandscapeComponentPatch;
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
struct ULandscapeCustomMaskDataLayersObject;
struct ULandscapeProxyPatch;
struct ULandscapeSettings;
struct ULandscapeSplinesComponent;
struct ULandscapeSplineControlPoint;
struct ULandscapeSplineSegment;
struct ALandscapeStreamingProxy;
struct ULandscapeWeightmapUsage;
struct UMaterialExpressionLandscapeGrassOutput;
struct UMaterialExpressionLandscapeLayerBlend;
struct UMaterialExpressionLandscapeLayerCoords;
struct UMaterialExpressionLandscapeLayerSample;
struct UMaterialExpressionLandscapeLayerSwitch;
struct UMaterialExpressionLandscapeLayerWeight;
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

// Object: ScriptStruct Landscape.CDLODMaterial
// Size: 0x28 (Inherited: 0x0)
struct FCDLODMaterial
{
	struct UMaterialInterface* Material; // 0x0(0x8)
	struct UMaterialInstanceConstant* MaterialInterface; // 0x8(0x8)
	struct UMaterialInstanceConstant* MaterialInterfaceNoVT; // 0x10(0x8)
	struct UMaterialInstanceDynamic* MaterialInstanceDynamic; // 0x18(0x8)
	float StartDistance; // 0x20(0x4)
	uint8_t Pad_0x24[0x4]; // 0x24(0x4)
};

// Object: ScriptStruct Landscape.LandscapeLayerParameter
// Size: 0x20 (Inherited: 0x0)
struct FLandscapeLayerParameter
{
	struct FVector4 TextureHeightScaleOffsetParameters; // 0x0(0x10)
	float TillingParameter; // 0x10(0x4)
	uint32_t TextureArrayIndexAndTillingStarEnd; // 0x14(0x4)
	float FarTillingScale; // 0x18(0x4)
	float SpecularParameter; // 0x1C(0x4)
};

// Object: ScriptStruct Landscape.DTAPatchTextureIndices
// Size: 0x18 (Inherited: 0x0)
struct FDTAPatchTextureIndices
{
	struct TArray<int32_t> TextureIndices; // 0x0(0x10)
	uint8_t Pad_0x10[0x8]; // 0x10(0x8)
};

// Object: ScriptStruct Landscape.LandscapeLayer
// Size: 0x88 (Inherited: 0x0)
struct FLandscapeLayer
{
	struct FGuid Guid; // 0x0(0x10)
	struct FName Name; // 0x10(0x8)
	uint8_t bVisible : 1; // 0x18(0x1), Mask(0x1)
	uint8_t BitPad_0x18_1 : 7; // 0x18(0x1)
	uint8_t bIsAdditiveLayer : 1; // 0x19(0x1), Mask(0x1)
	uint8_t BitPad_0x19_1 : 7; // 0x19(0x1)
	uint8_t bStoreInPatch : 1; // 0x1A(0x1), Mask(0x1)
	uint8_t BitPad_0x1A_1 : 7; // 0x1A(0x1)
	uint8_t bLocked : 1; // 0x1B(0x1), Mask(0x1)
	uint8_t BitPad_0x1B_1 : 7; // 0x1B(0x1)
	float HeightmapAlpha; // 0x1C(0x4)
	float WeightmapAlpha; // 0x20(0x4)
	ELandscapeBlendMode BlendMode; // 0x24(0x1)
	uint8_t Pad_0x25[0x3]; // 0x25(0x3)
	struct TArray<struct FLandscapeLayerBrush> Brushes; // 0x28(0x10)
	struct TMap<struct ULandscapeLayerInfoObject*, uint8_t> WeightmapLayerAllocationBlend; // 0x38(0x50)
};

// Object: ScriptStruct Landscape.LandscapeLayerBrush
// Size: 0x1 (Inherited: 0x0)
struct FLandscapeLayerBrush
{
	uint8_t Pad_0x0[0x1]; // 0x0(0x1)
};

// Object: ScriptStruct Landscape.LandscapeCustomMaskDataProperties
// Size: 0x10 (Inherited: 0x0)
struct FLandscapeCustomMaskDataProperties
{
	struct FLinearColor HighlightColor; // 0x0(0x10)
};

// Object: ScriptStruct Landscape.LandscapeCustomMaskData
// Size: 0x30 (Inherited: 0x0)
struct FLandscapeCustomMaskData
{
	struct FGuid Guid; // 0x0(0x10)
	struct UTexture2D* DataTexture; // 0x10(0x8)
	uint8_t bVisible : 1; // 0x18(0x1), Mask(0x1)
	uint8_t BitPad_0x18_1 : 7; // 0x18(0x1)
	uint8_t Pad_0x19[0x3]; // 0x19(0x3)
	struct FLandscapeCustomMaskDataProperties Properties; // 0x1C(0x10)
	uint8_t bUnused : 1; // 0x2C(0x1), Mask(0x1)
	uint8_t BitPad_0x2C_1 : 7; // 0x2C(0x1)
	uint8_t Pad_0x2D[0x3]; // 0x2D(0x3)
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
	struct FPerPlatformInt LodIndex; // 0x0(0x4)
	uint8_t Pad_0x4[0x4]; // 0x4(0x4)
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
// Size: 0x48 (Inherited: 0x0)
struct FGrassVariety
{
	struct UStaticMesh* GrassMesh; // 0x0(0x8)
	struct FPerPlatformFloat GrassDensity; // 0x8(0x4)
	uint8_t bUseGrid : 1; // 0xC(0x1), Mask(0x1)
	uint8_t BitPad_0xC_1 : 7; // 0xC(0x1)
	uint8_t Pad_0xD[0x3]; // 0xD(0x3)
	float PlacementJitter; // 0x10(0x4)
	struct FPerPlatformInt StartCullDistance; // 0x14(0x4)
	struct FPerPlatformInt EndCullDistance; // 0x18(0x4)
	int32_t MinLOD; // 0x1C(0x4)
	EGrassScaling Scaling; // 0x20(0x1)
	uint8_t Pad_0x21[0x3]; // 0x21(0x3)
	struct FFloatInterval ScaleX; // 0x24(0x8)
	struct FFloatInterval ScaleY; // 0x2C(0x8)
	struct FFloatInterval ScaleZ; // 0x34(0x8)
	uint8_t RandomRotation : 1; // 0x3C(0x1), Mask(0x1)
	uint8_t BitPad_0x3C_1 : 7; // 0x3C(0x1)
	uint8_t AlignToSurface : 1; // 0x3D(0x1), Mask(0x1)
	uint8_t BitPad_0x3D_1 : 7; // 0x3D(0x1)
	uint8_t bUseLandscapeLightmap : 1; // 0x3E(0x1), Mask(0x1)
	uint8_t BitPad_0x3E_1 : 7; // 0x3E(0x1)
	struct FLightingChannels LightingChannels; // 0x3F(0x1)
	uint8_t bReceivesDecals : 1; // 0x40(0x1), Mask(0x1)
	uint8_t BitPad_0x40_1 : 7; // 0x40(0x1)
	uint8_t bCastDynamicShadow : 1; // 0x41(0x1), Mask(0x1)
	uint8_t BitPad_0x41_1 : 7; // 0x41(0x1)
	uint8_t bKeepInstanceBufferCPUCopy : 1; // 0x42(0x1), Mask(0x1)
	uint8_t BitPad_0x42_1 : 7; // 0x42(0x1)
	uint8_t Pad_0x43[0x5]; // 0x43(0x5)
};

// Object: ScriptStruct Landscape.LandscapeInfoLayerSettings
// Size: 0x10 (Inherited: 0x0)
struct FLandscapeInfoLayerSettings
{
	struct ULandscapeLayerInfoObject* LayerInfoObj; // 0x0(0x8)
	struct FName LayerName; // 0x8(0x8)
};

// Object: ScriptStruct Landscape.LandscapeCustomMaskDataLayer
// Size: 0x44 (Inherited: 0x0)
struct FLandscapeCustomMaskDataLayer
{
	struct FGuid Guid; // 0x0(0x10)
	struct FName Name; // 0x10(0x8)
	int32_t MaterialID; // 0x18(0x4)
	struct FGuid ParentGuid; // 0x1C(0x10)
	struct FLandscapeCustomMaskDataProperties Properties; // 0x2C(0x10)
	uint8_t bLocked : 1; // 0x3C(0x1), Mask(0x1)
	uint8_t BitPad_0x3C_1 : 7; // 0x3C(0x1)
	uint8_t bEnableGroupMask : 1; // 0x3D(0x1), Mask(0x1)
	uint8_t BitPad_0x3D_1 : 7; // 0x3D(0x1)
	uint8_t bMutualExclusive : 1; // 0x3E(0x1), Mask(0x1)
	uint8_t BitPad_0x3E_1 : 7; // 0x3E(0x1)
	uint8_t bEnableErase : 1; // 0x3F(0x1), Mask(0x1)
	uint8_t BitPad_0x3F_1 : 7; // 0x3F(0x1)
	uint8_t bDisableFalloff : 1; // 0x40(0x1), Mask(0x1)
	uint8_t BitPad_0x40_1 : 7; // 0x40(0x1)
	uint8_t bVisible : 1; // 0x41(0x1), Mask(0x1)
	uint8_t BitPad_0x41_1 : 7; // 0x41(0x1)
	uint8_t Pad_0x42[0x2]; // 0x42(0x2)
};

// Object: ScriptStruct Landscape.LandscapeProxyMaterialOverride
// Size: 0x10 (Inherited: 0x0)
struct FLandscapeProxyMaterialOverride
{
	struct FPerPlatformInt LodIndex; // 0x0(0x4)
	uint8_t Pad_0x4[0x4]; // 0x4(0x4)
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

// Object: ScriptStruct Landscape.LandscapeCustomMaskDataLayerSettings
// Size: 0x1 (Inherited: 0x0)
struct FLandscapeCustomMaskDataLayerSettings
{
	uint8_t Pad_0x0[0x1]; // 0x0(0x1)
};

// Object: ScriptStruct Landscape.LandscapeEditorLayerSettings
// Size: 0x1 (Inherited: 0x0)
struct FLandscapeEditorLayerSettings
{
	uint8_t Pad_0x0[0x1]; // 0x0(0x1)
};

// Object: ScriptStruct Landscape.EditorLayerInfo
// Size: 0x20 (Inherited: 0x0)
struct FEditorLayerInfo
{
	struct FString Name; // 0x0(0x10)
	struct FGuid Guid; // 0x10(0x10)
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
	ELandscapeSplineMeshOrientation Orientation; // 0x34(0x1)
	ESplineMeshAxis ForwardAxis; // 0x35(0x1)
	ESplineMeshAxis UpAxis; // 0x36(0x1)
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
	ELandscapeLayerBlendType BlendType; // 0x8(0x1)
	uint8_t Pad_0x9[0x3]; // 0x9(0x3)
	struct FExpressionInput LayerInput; // 0xC(0xC)
	uint8_t Pad_0x18[0x8]; // 0x18(0x8)
	struct FExpressionInput HeightInput; // 0x20(0xC)
	uint8_t Pad_0x2C[0x8]; // 0x2C(0x8)
	float PreviewWeight; // 0x34(0x4)
	struct FVector ConstLayerInput; // 0x38(0xC)
	float ConstHeightInput; // 0x44(0x4)
};

// Object: Class Landscape.CDLODComponent
// Size: 0x7C0 (Inherited: 0x580)
struct UCDLODComponent : UPrimitiveComponent
{
	DEFINE_UE_CLASS_HELPERS(UCDLODComponent, "CDLODComponent")

	int32_t CDLODPatchSize; // 0x578(0x4)
	int32_t HeightmapAssetCoarseLod; // 0x57C(0x4)
	int32_t HeightmapAssetPatchSize; // 0x580(0x4)
	int32_t ValidPatchSize; // 0x584(0x4)
	struct FIntPoint PhysicalTextureSize; // 0x588(0x8)
	struct UTextureRenderTarget2D* HeightmapPhysicalTexture; // 0x590(0x8)
	struct UTextureRenderTarget2D* DeformationPhysicalTexture; // 0x598(0x8)
	struct TArray<struct FCDLODMaterial> CDLODMaterials; // 0x5A0(0x10)
	struct UMaterialInstanceDynamic* CDLODVTMaterial_DTA; // 0x5B0(0x8)
	struct UMaterialInstanceDynamic* CDLODVTMaterial_LowRes; // 0x5B8(0x8)
	struct UTexture2D* LandscapeShadowmask; // 0x5C0(0x8)
	struct FVector4 LandscapePositionAndSize; // 0x5D0(0x10)
	struct FBoxSphereBounds CachedLocalBounds; // 0x5E0(0x1C)
	struct FGuid MapBuildDataId; // 0x5FC(0x10)
	uint8_t Pad_0x60C[0x4]; // 0x60C(0x4)
	struct UBinaryAsset* HeaderAsset; // 0x610(0x8)
	struct UBinaryAsset* CoarseHeightmapAsset; // 0x618(0x8)
	struct FIntPoint HeightmapAssetMaxIndex; // 0x620(0x8)
	int32_t WeightmapClipmapPatchCount; // 0x628(0x4)
	uint32_t WeightmapClipmapPatchSize; // 0x62C(0x4)
	struct AClipmapActor* WeightmapClipmapActor; // 0x630(0x8)
	struct TArray<struct FString> TexArrayParamName; // 0x638(0x10)
	uint32_t DTASlotCount; // 0x648(0x4)
	uint32_t LODBias; // 0x64C(0x4)
	float HeightBiasInLocalSpace; // 0x650(0x4)
	float HeightScaleInLocalSpace; // 0x654(0x4)
	struct UDTAComponent* DTAComponent; // 0x658(0x8)
	struct TMap<struct FString, struct TSoftObjectPtr<UTexture2D>> LowQualityTexture; // 0x660(0x50)
	uint8_t Pad_0x6B0[0x28]; // 0x6B0(0x28)
	struct TMap<struct FIntPoint, struct UBinaryAsset*> HeightmapAssets; // 0x6D8(0x50)
	struct TArray<struct FBoxSphereBounds> LocalClipRectBounds; // 0x728(0x10)
	uint8_t Pad_0x738[0x8]; // 0x738(0x8)
	struct FVector4 DeformationCenterPositionAndRadiusScale; // 0x740(0x10)
	uint8_t Pad_0x750[0x70]; // 0x750(0x70)

	// Object: Function Landscape.CDLODComponent.AddDeformations
	// Flags: [Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x16433b88
	// Params: [ Num(1) Size(0x10) ]
	void AddDeformations(const struct TArray<struct FVector4>& InDeformationTasks);
};

// Object: Class Landscape.ControlPointMeshActor
// Size: 0x378 (Inherited: 0x370)
struct AControlPointMeshActor : AActor
{
	DEFINE_UE_CLASS_HELPERS(AControlPointMeshActor, "ControlPointMeshActor")

	struct UControlPointMeshComponent* ControlPointMeshComponent; // 0x370(0x8)
};

// Object: Class Landscape.ControlPointMeshComponent
// Size: 0x840 (Inherited: 0x830)
struct UControlPointMeshComponent : UStaticMeshComponent
{
	DEFINE_UE_CLASS_HELPERS(UControlPointMeshComponent, "ControlPointMeshComponent")

	float VirtualTextureMainPassMaxDrawDistance; // 0x830(0x4)
	uint8_t Pad_0x834[0xC]; // 0x834(0xC)
};

// Object: Class Landscape.DTAComponent
// Size: 0x398 (Inherited: 0xF8)
struct UDTAComponent : UActorComponent
{
	DEFINE_UE_CLASS_HELPERS(UDTAComponent, "DTAComponent")

	struct TArray<struct FString> TexArrayParamName; // 0xF8(0x10)
	struct TArray<struct UDynamicTexture2DArray*> DynamicTextureArrays; // 0x108(0x10)
	struct TArray<struct UTexture2DArray*> LowResTextureArrays; // 0x118(0x10)
	struct TArray<struct FLandscapeLayerParameter> LayerParameters; // 0x128(0x10)
	struct TArray<struct UDynamicTexture2DArray*> ResizeDynamicTextureArrays; // 0x138(0x10)
	struct AClipmapActor* WeightmapClipmapActor; // 0x148(0x8)
	struct TWeakObjectPtr<struct UCDLODComponent> CDLODComponent; // 0x150(0x8)
	uint32_t DTASlotCount; // 0x158(0x4)
	uint32_t LODBias; // 0x15C(0x4)
	uint8_t Pad_0x160[0x1D0]; // 0x160(0x1D0)
	struct TMap<struct FIntPoint, struct FDTAPatchTextureIndices> DTAPatchTextureIndices; // 0x330(0x50)
	uint8_t Pad_0x380[0x18]; // 0x380(0x18)
};

// Object: Class Landscape.LandscapeProxy
// Size: 0x6B0 (Inherited: 0x370)
struct ALandscapeProxy : AActor
{
	DEFINE_UE_CLASS_HELPERS(ALandscapeProxy, "LandscapeProxy")

	struct ULandscapeSplinesComponent* SplineComponent; // 0x370(0x8)
	struct FGuid LandscapeGuid; // 0x378(0x10)
	struct FIntPoint LandscapeSectionOffset; // 0x388(0x8)
	int32_t MaxLODLevel; // 0x390(0x4)
	float LODDistanceFactor; // 0x394(0x4)
	ELandscapeLODFalloff LODFalloff; // 0x398(0x1)
	uint8_t Pad_0x399[0x3]; // 0x399(0x3)
	float ComponentScreenSizeToUseSubSections; // 0x39C(0x4)
	float LOD0ScreenSize; // 0x3A0(0x4)
	float LOD0DistributionSetting; // 0x3A4(0x4)
	float LODDistributionSetting; // 0x3A8(0x4)
	float TessellationComponentScreenSize; // 0x3AC(0x4)
	uint8_t UseTessellationComponentScreenSizeFalloff : 1; // 0x3B0(0x1), Mask(0x1)
	uint8_t BitPad_0x3B0_1 : 7; // 0x3B0(0x1)
	uint8_t Pad_0x3B1[0x3]; // 0x3B1(0x3)
	float TessellationComponentScreenSizeFalloff; // 0x3B4(0x4)
	int32_t OccluderGeometryLOD; // 0x3B8(0x4)
	int32_t StaticLightingLOD; // 0x3BC(0x4)
	struct UPhysicalMaterial* DefaultPhysMaterial; // 0x3C0(0x8)
	float StreamingDistanceMultiplier; // 0x3C8(0x4)
	uint8_t Pad_0x3CC[0x4]; // 0x3CC(0x4)
	struct UMaterialInterface* LandscapeMaterial; // 0x3D0(0x8)
	struct UMaterialInterface* LandscapeHoleMaterial; // 0x3D8(0x8)
	struct UTexture2D* LandscapeShadowmask; // 0x3E0(0x8)
	uint8_t Pad_0x3E8[0x8]; // 0x3E8(0x8)
	struct FVector4 LandscapePositionAndSize; // 0x3F0(0x10)
	struct FVector4 LandscapeHeightInfo; // 0x400(0x10)
	struct TArray<struct FLandscapeProxyMaterialOverride> LandscapeMaterialsOverride; // 0x410(0x10)
	struct TArray<struct URuntimeVirtualTexture*> RuntimeVirtualTextures; // 0x420(0x10)
	int32_t VirtualTextureNumLods; // 0x430(0x4)
	int32_t VirtualTextureLodBias; // 0x434(0x4)
	ERuntimeVirtualTextureMainPassType VirtualTextureRenderPassType; // 0x438(0x1)
	ERuntimeVirtualTextureLayerType VirtualTextureRenderLayerType; // 0x439(0x1)
	uint8_t VirtualTextureRenderPriority; // 0x43A(0x1)
	uint8_t Pad_0x43B[0x1]; // 0x43B(0x1)
	float NegativeZBoundsExtension; // 0x43C(0x4)
	float PositiveZBoundsExtension; // 0x440(0x4)
	uint8_t Pad_0x444[0x4]; // 0x444(0x4)
	struct TArray<struct ULandscapeComponent*> LandscapeComponents; // 0x448(0x10)
	struct TArray<struct ULandscapeHeightfieldCollisionComponent*> CollisionComponents; // 0x458(0x10)
	struct TArray<struct UHierarchicalInstancedStaticMeshComponent*> FoliageComponents; // 0x468(0x10)
	uint8_t Pad_0x478[0x64]; // 0x478(0x64)
	uint8_t bHasLandscapeGrass : 1; // 0x4DC(0x1), Mask(0x1)
	uint8_t BitPad_0x4DC_1 : 7; // 0x4DC(0x1)
	uint8_t Pad_0x4DD[0x3]; // 0x4DD(0x3)
	float StaticLightingResolution; // 0x4E0(0x4)
	uint8_t bCastStaticShadow : 1; // 0x4E4(0x1), Mask(0x1)
	uint8_t bCastShadowAsTwoSided : 1; // 0x4E4(0x1), Mask(0x2)
	uint8_t bCastFarShadow : 1; // 0x4E4(0x1), Mask(0x4)
	uint8_t bAffectDistanceFieldLighting : 1; // 0x4E4(0x1), Mask(0x8)
	uint8_t BitPad_0x4E4_4 : 4; // 0x4E4(0x1)
	struct FLightingChannels LightingChannels; // 0x4E5(0x1)
	uint8_t bUseMaterialPositionOffsetInStaticLighting : 1; // 0x4E6(0x1), Mask(0x1)
	uint8_t bRenderCustomDepth : 1; // 0x4E6(0x1), Mask(0x2)
	uint8_t BitPad_0x4E6_2 : 6; // 0x4E6(0x1)
	uint8_t Pad_0x4E7[0x1]; // 0x4E7(0x1)
	int32_t CustomDepthStencilValue; // 0x4E8(0x4)
	float LDMaxDrawDistance; // 0x4EC(0x4)
	struct FLightmassPrimitiveSettings LightmassSettings; // 0x4F0(0x20)
	int32_t CollisionMipLevel; // 0x510(0x4)
	int32_t SimpleCollisionMipLevel; // 0x514(0x4)
	float CollisionThickness; // 0x518(0x4)
	uint8_t Pad_0x51C[0x4]; // 0x51C(0x4)
	struct FBodyInstance BodyInstance; // 0x520(0x120)
	uint8_t bGenerateOverlapEvents : 1; // 0x640(0x1), Mask(0x1)
	uint8_t bBakeMaterialPositionOffsetIntoCollision : 1; // 0x640(0x1), Mask(0x2)
	uint8_t BitPad_0x640_2 : 6; // 0x640(0x1)
	uint8_t Pad_0x641[0x3]; // 0x641(0x3)
	int32_t ComponentSizeQuads; // 0x644(0x4)
	int32_t SubsectionSizeQuads; // 0x648(0x4)
	int32_t NumSubsections; // 0x64C(0x4)
	uint8_t bUsedForNavigation : 1; // 0x650(0x1), Mask(0x1)
	uint8_t BitPad_0x650_1 : 7; // 0x650(0x1)
	uint8_t bUseDynamicMaterialInstance : 1; // 0x651(0x1), Mask(0x1)
	uint8_t BitPad_0x651_1 : 7; // 0x651(0x1)
	ENavDataGatheringMode NavigationGeometryGatheringMode; // 0x652(0x1)
	uint8_t bUseLandscapeForCullingInvisibleHLODVertices : 1; // 0x653(0x1), Mask(0x1)
	uint8_t BitPad_0x653_1 : 7; // 0x653(0x1)
	uint8_t bHasLayersContent : 1; // 0x654(0x1), Mask(0x1)
	uint8_t BitPad_0x654_1 : 7; // 0x654(0x1)
	uint8_t Pad_0x655[0x3]; // 0x655(0x3)
	struct TMap<struct UTexture2D*, struct ULandscapeWeightmapUsage*> WeightmapUsageMap; // 0x658(0x50)
	int32_t ExtraDetailForRender; // 0x6A8(0x4)
	uint8_t Pad_0x6AC[0x4]; // 0x6AC(0x4)

	// Object: Function Landscape.LandscapeProxy.SetLandscapeMaterialVectorParameterValue
	// Flags: [Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x16437db0
	// Params: [ Num(2) Size(0x18) ]
	void SetLandscapeMaterialVectorParameterValue(struct FName ParameterName, struct FLinearColor Value);

	// Object: Function Landscape.LandscapeProxy.SetLandscapeMaterialTextureParameterValue
	// Flags: [Final|RequiredAPI|Native|Public|BlueprintCallable]
	// Offset: 0x16437cd4
	// Params: [ Num(2) Size(0x10) ]
	void SetLandscapeMaterialTextureParameterValue(struct FName ParameterName, struct UTexture* Value);

	// Object: Function Landscape.LandscapeProxy.SetLandscapeMaterialScalarParameterValue
	// Flags: [Final|RequiredAPI|Native|Public|BlueprintCallable]
	// Offset: 0x16437bf4
	// Params: [ Num(2) Size(0xC) ]
	void SetLandscapeMaterialScalarParameterValue(struct FName ParameterName, float Value);

	// Object: Function Landscape.LandscapeProxy.EditorSetLandscapeMaxLODLevel
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x16437b50
	// Params: [ Num(1) Size(0x4) ]
	void EditorSetLandscapeMaxLODLevel(int32_t NewMaxLODLevel);

	// Object: Function Landscape.LandscapeProxy.EditorSetLandscapeMaterial
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x16437aac
	// Params: [ Num(1) Size(0x8) ]
	void EditorSetLandscapeMaterial(struct UMaterialInterface* NewLandscapeMaterial);

	// Object: Function Landscape.LandscapeProxy.EditorSetLandscapeHoleMaterial
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x16437a08
	// Params: [ Num(1) Size(0x8) ]
	void EditorSetLandscapeHoleMaterial(struct UMaterialInterface* NewLandscapeHoleMaterial);

	// Object: Function Landscape.LandscapeProxy.EditorApplySpline
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x164376fc
	// Params: [ Num(11) Size(0x30) ]
	void EditorApplySpline(struct USplineComponent* InSplineComponent, float StartWidth, float EndWidth, float StartSideFalloff, float EndSideFalloff, float StartRoll, float EndRoll, int32_t NumSubdivisions, uint8_t bRaiseHeights, uint8_t bLowerHeights, struct ULandscapeLayerInfoObject* PaintLayer);

	// Object: Function Landscape.LandscapeProxy.ChangeUseTessellationComponentScreenSizeFalloff
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0x16437648
	// Params: [ Num(1) Size(0x1) ]
	void ChangeUseTessellationComponentScreenSizeFalloff(uint8_t InComponentScreenSizeToUseSubSections);

	// Object: Function Landscape.LandscapeProxy.ChangeTessellationComponentScreenSizeFalloff
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0x1643759c
	// Params: [ Num(1) Size(0x4) ]
	void ChangeTessellationComponentScreenSizeFalloff(float InUseTessellationComponentScreenSizeFalloff);

	// Object: Function Landscape.LandscapeProxy.ChangeTessellationComponentScreenSize
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0x164374f0
	// Params: [ Num(1) Size(0x4) ]
	void ChangeTessellationComponentScreenSize(float InTessellationComponentScreenSize);

	// Object: Function Landscape.LandscapeProxy.ChangeLODDistanceFactor
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0x16437444
	// Params: [ Num(1) Size(0x4) ]
	void ChangeLODDistanceFactor(float InLODDistanceFactor);

	// Object: Function Landscape.LandscapeProxy.ChangeComponentScreenSizeToUseSubSections
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0x16437398
	// Params: [ Num(1) Size(0x4) ]
	void ChangeComponentScreenSizeToUseSubSections(float InComponentScreenSizeToUseSubSections);
};

// Object: Class Landscape.Landscape
// Size: 0x6C0 (Inherited: 0x6B0)
struct ALandscape : ALandscapeProxy
{
	DEFINE_UE_CLASS_HELPERS(ALandscape, "Landscape")

	uint8_t bEditingLayerPatchEnabled : 1; // 0x6AC(0x1), Mask(0x1)
	uint8_t bSyncPatchCustomMaskData : 1; // 0x6AD(0x1), Mask(0x1)
	uint8_t bTriggerMerge : 1; // 0x6AE(0x1), Mask(0x1)
	uint8_t bTriggerSplit : 1; // 0x6AF(0x1), Mask(0x1)
	struct UTextureRenderTarget2D* LocalHeightmap; // 0x6B0(0x8)
	uint8_t BitPad_0x6B8_4 : 4; // 0x6B8(0x1)
	uint8_t Pad_0x6B9[0x7]; // 0x6B9(0x7)
};

// Object: Class Landscape.LandscapeBlueprintBrushBase
// Size: 0x370 (Inherited: 0x370)
struct ALandscapeBlueprintBrushBase : AActor
{
	DEFINE_UE_CLASS_HELPERS(ALandscapeBlueprintBrushBase, "LandscapeBlueprintBrushBase")

	// Object: Function Landscape.LandscapeBlueprintBrushBase.RequestLandscapeUpdate
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x16433f90
	// Params: [ Num(0) Size(0x0) ]
	void RequestLandscapeUpdate();

	// Object: Function Landscape.LandscapeBlueprintBrushBase.Render
	// Flags: [Event|Public|HasOutParms|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(4) Size(0x20) ]
	struct UTextureRenderTarget2D* Render(uint8_t InIsHeightmap, struct UTextureRenderTarget2D* InCombinedResult, const struct FName& InWeightmapLayerName);

	// Object: Function Landscape.LandscapeBlueprintBrushBase.Initialize
	// Flags: [Event|Public|HasOutParms|HasDefaults|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(3) Size(0x40) ]
	void Initialize(const struct FTransform& InLandscapeTransform, const struct FIntPoint& InLandscapeSize, const struct FIntPoint& InLandscapeRenderTargetSize);

	// Object: Function Landscape.LandscapeBlueprintBrushBase.GetBlueprintRenderDependencies
	// Flags: [Event|Public|HasOutParms|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(1) Size(0x10) ]
	void GetBlueprintRenderDependencies(struct TArray<struct UTexture2D*>& OutStreamableAssets);
};

// Object: Class Landscape.LandscapeComponent
// Size: 0x7C0 (Inherited: 0x580)
struct ULandscapeComponent : UPrimitiveComponent
{
	DEFINE_UE_CLASS_HELPERS(ULandscapeComponent, "LandscapeComponent")

	int32_t SectionBaseX; // 0x578(0x4)
	int32_t SectionBaseY; // 0x57C(0x4)
	int32_t ComponentSizeQuads; // 0x580(0x4)
	int32_t SubsectionSizeQuads; // 0x584(0x4)
	int32_t NumSubsections; // 0x588(0x4)
	struct UMaterialInterface* OverrideMaterial; // 0x590(0x8)
	struct UMaterialInterface* OverrideHoleMaterial; // 0x598(0x8)
	struct TArray<struct FLandscapeComponentMaterialOverride> OverrideMaterials; // 0x5A0(0x10)
	struct TArray<struct UMaterialInstanceConstant*> MaterialInstances; // 0x5B0(0x10)
	struct TArray<struct UMaterialInstanceDynamic*> MaterialInstancesDynamic; // 0x5C0(0x10)
	struct TArray<int8_t> LODIndexToMaterialIndex; // 0x5D0(0x10)
	struct TArray<int8_t> MaterialIndexToDisabledTessellationMaterial; // 0x5E0(0x10)
	struct UTexture2D* XYOffsetmapTexture; // 0x5F0(0x8)
	uint8_t Pad_0x5FC[0x4]; // 0x5FC(0x4)
	struct FVector4 WeightmapScaleBias; // 0x600(0x10)
	float WeightmapSubsectionOffset; // 0x610(0x4)
	uint8_t Pad_0x614[0xC]; // 0x614(0xC)
	struct FVector4 HeightmapScaleBias; // 0x620(0x10)
	struct FBox CachedLocalBox; // 0x630(0x1C)
	struct TLazyObjectPtr<struct ULandscapeHeightfieldCollisionComponent> CollisionComponent; // 0x64C(0x1C)
	struct TMap<struct FGuid, struct FLandscapeLayerComponentData> LayersData; // 0x668(0x50)
	struct UTexture2D* HeightmapTexture; // 0x6B8(0x8)
	struct TArray<struct FWeightmapLayerAllocationInfo> WeightmapLayerAllocations; // 0x6C0(0x10)
	struct TArray<struct UTexture2D*> WeightmapTextures; // 0x6D0(0x10)
	struct FGuid MapBuildDataId; // 0x6E0(0x10)
	struct TArray<struct FGuid> IrrelevantLights; // 0x6F0(0x10)
	int32_t CollisionMipLevel; // 0x700(0x4)
	int32_t SimpleCollisionMipLevel; // 0x704(0x4)
	float NegativeZBoundsExtension; // 0x708(0x4)
	float PositiveZBoundsExtension; // 0x70C(0x4)
	float StaticLightingResolution; // 0x710(0x4)
	int32_t ForcedLOD; // 0x714(0x4)
	int32_t LODBias; // 0x718(0x4)
	struct FGuid StateId; // 0x71C(0x10)
	struct FGuid BakedTextureMaterialGuid; // 0x72C(0x10)
	uint8_t Pad_0x73C[0x4]; // 0x73C(0x4)
	struct UTexture2D* GIBakedBaseColorTexture; // 0x740(0x8)
	uint8_t MobileBlendableLayerMask; // 0x748(0x1)
	uint8_t Pad_0x749[0x7]; // 0x749(0x7)
	struct UMaterialInterface* MobileMaterialInterface; // 0x750(0x8)
	struct TArray<struct UMaterialInterface*> MobileMaterialInterfaces; // 0x758(0x10)
	struct TArray<struct UTexture2D*> MobileWeightmapTextures; // 0x768(0x10)
	uint8_t Pad_0x778[0x48]; // 0x778(0x48)

	// Object: Function Landscape.LandscapeComponent.GetMaterialInstanceDynamic
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x1643422c
	// Params: [ Num(2) Size(0x10) ]
	struct UMaterialInstanceDynamic* GetMaterialInstanceDynamic(int32_t InIndex);

	// Object: Function Landscape.LandscapeComponent.EditorGetPaintLayerWeightByNameAtLocation
	// Flags: [Final|RequiredAPI|Native|Public|HasOutParms|HasDefaults|BlueprintCallable]
	// Offset: 0x16434130
	// Params: [ Num(3) Size(0x18) ]
	float EditorGetPaintLayerWeightByNameAtLocation(const struct FVector& InLocation, struct FName InPaintLayerName);

	// Object: Function Landscape.LandscapeComponent.EditorGetPaintLayerWeightAtLocation
	// Flags: [Final|RequiredAPI|Native|Public|HasOutParms|HasDefaults|BlueprintCallable]
	// Offset: 0x16434034
	// Params: [ Num(3) Size(0x1C) ]
	float EditorGetPaintLayerWeightAtLocation(const struct FVector& InLocation, struct ULandscapeLayerInfoObject* PaintLayer);
};

// Object: Class Landscape.LandscapeComponentPatch
// Size: 0xC8 (Inherited: 0x28)
struct ULandscapeComponentPatch : UObject
{
	DEFINE_UE_CLASS_HELPERS(ULandscapeComponentPatch, "LandscapeComponentPatch")

	struct TMap<struct FGuid, struct FLandscapeLayerComponentData> EditorLayersData; // 0x28(0x50)
	struct UTexture2D* HeightmapTexture; // 0x78(0x8)
	uint8_t Pad_0x80[0x10]; // 0x80(0x10)
	struct TArray<struct FWeightmapLayerAllocationInfo> WeightmapLayerAllocations; // 0x90(0x10)
	struct TArray<struct UTexture2D*> WeightmapTextures; // 0xA0(0x10)
	struct FIntPoint ComponentXYPos; // 0xB0(0x8)
	struct TArray<struct FLandscapeCustomMaskData> CustomMaskData; // 0xB8(0x10)
};

// Object: Class Landscape.LandscapeGizmoActor
// Size: 0x370 (Inherited: 0x370)
struct ALandscapeGizmoActor : AActor
{
	DEFINE_UE_CLASS_HELPERS(ALandscapeGizmoActor, "LandscapeGizmoActor")
};

// Object: Class Landscape.LandscapeGizmoActiveActor
// Size: 0x3C0 (Inherited: 0x370)
struct ALandscapeGizmoActiveActor : ALandscapeGizmoActor
{
	DEFINE_UE_CLASS_HELPERS(ALandscapeGizmoActiveActor, "LandscapeGizmoActiveActor")

	uint8_t Pad_0x370[0x50]; // 0x370(0x50)
};

// Object: Class Landscape.LandscapeGizmoRenderComponent
// Size: 0x580 (Inherited: 0x580)
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
	uint8_t RandomRotation : 1; // 0x58(0x1), Mask(0x1)
	uint8_t BitPad_0x58_1 : 7; // 0x58(0x1)
	uint8_t AlignToSurface : 1; // 0x59(0x1), Mask(0x1)
	uint8_t BitPad_0x59_1 : 7; // 0x59(0x1)
	uint8_t Pad_0x5A[0x6]; // 0x5A(0x6)
};

// Object: Class Landscape.LandscapeHeightfieldCollisionComponent
// Size: 0x660 (Inherited: 0x580)
struct ULandscapeHeightfieldCollisionComponent : UPrimitiveComponent
{
	DEFINE_UE_CLASS_HELPERS(ULandscapeHeightfieldCollisionComponent, "LandscapeHeightfieldCollisionComponent")

	struct TArray<struct ULandscapeLayerInfoObject*> ComponentLayerInfos; // 0x578(0x10)
	int32_t SectionBaseX; // 0x588(0x4)
	int32_t SectionBaseY; // 0x58C(0x4)
	int32_t CollisionSizeQuads; // 0x590(0x4)
	float CollisionScale; // 0x594(0x4)
	int32_t SimpleCollisionSizeQuads; // 0x598(0x4)
	struct TArray<uint8_t> CollisionQuadFlags; // 0x5A0(0x10)
	struct FGuid HeightfieldGuid; // 0x5B0(0x10)
	struct FBox CachedLocalBox; // 0x5C0(0x1C)
	struct TLazyObjectPtr<struct ULandscapeComponent> RenderComponent; // 0x5DC(0x1C)
	uint8_t Pad_0x5FC[0xC]; // 0x5FC(0xC)
	struct TArray<struct UPhysicalMaterial*> CookedPhysicalMaterials; // 0x608(0x10)
	uint8_t Pad_0x618[0x48]; // 0x618(0x48)

	// Object: Function Landscape.LandscapeHeightfieldCollisionComponent.GetRenderComponent
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x16436f44
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
// Size: 0x90 (Inherited: 0x28)
struct ULandscapeLayerInfoObject : UObject
{
	DEFINE_UE_CLASS_HELPERS(ULandscapeLayerInfoObject, "LandscapeLayerInfoObject")

	struct FName LayerName; // 0x28(0x8)
	struct UPhysicalMaterial* PhysMaterial; // 0x30(0x8)
	float Hardness; // 0x38(0x4)
	float LayerTilling; // 0x3C(0x4)
	float LayerSpecular; // 0x40(0x4)
	uint8_t Pad_0x44[0xC]; // 0x44(0xC)
	struct FVector4 LayerHeightScaleOffset; // 0x50(0x10)
	uint32_t TextureArrayIndex; // 0x60(0x4)
	float FarTillingScale; // 0x64(0x4)
	uint8_t bOverride_FarTillingStart : 1; // 0x68(0x1), Mask(0x1)
	uint8_t BitPad_0x68_1 : 7; // 0x68(0x1)
	uint8_t Pad_0x69[0x3]; // 0x69(0x3)
	uint32_t FarTillingStart; // 0x6C(0x4)
	uint8_t bOverride_NearTillingEnd : 1; // 0x70(0x1), Mask(0x1)
	uint8_t BitPad_0x70_1 : 7; // 0x70(0x1)
	uint8_t Pad_0x71[0x3]; // 0x71(0x3)
	uint32_t NearTillingEnd; // 0x74(0x4)
	struct FLinearColor LayerUsageDebugColor; // 0x78(0x10)
	uint8_t Pad_0x88[0x8]; // 0x88(0x8)
};

// Object: Class Landscape.LandscapeMaterialInstanceConstant
// Size: 0x320 (Inherited: 0x318)
struct ULandscapeMaterialInstanceConstant : UMaterialInstanceConstant
{
	DEFINE_UE_CLASS_HELPERS(ULandscapeMaterialInstanceConstant, "LandscapeMaterialInstanceConstant")

	uint8_t bIsLayerThumbnail : 1; // 0x318(0x1), Mask(0x1)
	uint8_t bDisableTessellation : 1; // 0x318(0x1), Mask(0x2)
	uint8_t bMobile : 1; // 0x318(0x1), Mask(0x4)
	uint8_t bEditorToolUsage : 1; // 0x318(0x1), Mask(0x8)
	uint8_t bIsUsedWithCDLOD : 1; // 0x318(0x1), Mask(0x10)
	uint8_t BitPad_0x318_5 : 3; // 0x318(0x1)
	uint8_t Pad_0x319[0x7]; // 0x319(0x7)
};

// Object: Class Landscape.LandscapeMeshCollisionComponent
// Size: 0x670 (Inherited: 0x660)
struct ULandscapeMeshCollisionComponent : ULandscapeHeightfieldCollisionComponent
{
	DEFINE_UE_CLASS_HELPERS(ULandscapeMeshCollisionComponent, "LandscapeMeshCollisionComponent")

	struct FGuid MeshGuid; // 0x658(0x10)
};

// Object: Class Landscape.LandscapeMeshProxyActor
// Size: 0x378 (Inherited: 0x370)
struct ALandscapeMeshProxyActor : AActor
{
	DEFINE_UE_CLASS_HELPERS(ALandscapeMeshProxyActor, "LandscapeMeshProxyActor")

	struct ULandscapeMeshProxyComponent* LandscapeMeshProxyComponent; // 0x370(0x8)
};

// Object: Class Landscape.LandscapeMeshProxyComponent
// Size: 0x860 (Inherited: 0x830)
struct ULandscapeMeshProxyComponent : UStaticMeshComponent
{
	DEFINE_UE_CLASS_HELPERS(ULandscapeMeshProxyComponent, "LandscapeMeshProxyComponent")

	struct FGuid LandscapeGuid; // 0x830(0x10)
	struct TArray<struct FIntPoint> ProxyComponentBases; // 0x840(0x10)
	int8_t ProxyLOD; // 0x850(0x1)
	uint8_t Pad_0x851[0xF]; // 0x851(0xF)
};

// Object: Class Landscape.LandscapeCustomMaskDataLayersObject
// Size: 0x28 (Inherited: 0x28)
struct ULandscapeCustomMaskDataLayersObject : UObject
{
	DEFINE_UE_CLASS_HELPERS(ULandscapeCustomMaskDataLayersObject, "LandscapeCustomMaskDataLayersObject")
};

// Object: Class Landscape.LandscapeProxyPatch
// Size: 0x118 (Inherited: 0x28)
struct ULandscapeProxyPatch : UObject
{
	DEFINE_UE_CLASS_HELPERS(ULandscapeProxyPatch, "LandscapeProxyPatch")

	struct TArray<struct ULandscapeComponentPatch*> LandscapeComponentPatchs; // 0x28(0x10)
	struct TMap<struct FString, struct FGuid> PatchLayerGuid; // 0x38(0x50)
	struct FGuid PatchGuid; // 0x88(0x10)
	struct FName LandscapeName; // 0x98(0x8)
	struct TSoftObjectPtr<ALandscape> LandscapePtr; // 0xA0(0x28)
	uint8_t Pad_0xC8[0x50]; // 0xC8(0x50)
};

// Object: Class Landscape.LandscapeSettings
// Size: 0x50 (Inherited: 0x38)
struct ULandscapeSettings : UDeveloperSettings
{
	DEFINE_UE_CLASS_HELPERS(ULandscapeSettings, "LandscapeSettings")

	int32_t MaxNumberOfLayers; // 0x38(0x4)
	uint8_t Pad_0x3C[0x4]; // 0x3C(0x4)
	struct TArray<struct FString> MapsToLockToolModePaint; // 0x40(0x10)
};

// Object: Class Landscape.LandscapeSplinesComponent
// Size: 0x5B0 (Inherited: 0x580)
struct ULandscapeSplinesComponent : UPrimitiveComponent
{
	DEFINE_UE_CLASS_HELPERS(ULandscapeSplinesComponent, "LandscapeSplinesComponent")

	struct TArray<struct ULandscapeSplineControlPoint*> ControlPoints; // 0x578(0x10)
	struct TArray<struct ULandscapeSplineSegment*> Segments; // 0x588(0x10)
	struct TArray<struct UMeshComponent*> CookedForeignMeshComponents; // 0x598(0x10)

	// Object: Function Landscape.LandscapeSplinesComponent.GetSplineMeshComponents
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x1643a00c
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
// Size: 0x6D0 (Inherited: 0x6B0)
struct ALandscapeStreamingProxy : ALandscapeProxy
{
	DEFINE_UE_CLASS_HELPERS(ALandscapeStreamingProxy, "LandscapeStreamingProxy")

	struct TLazyObjectPtr<struct ALandscape> LandscapeActor; // 0x6AC(0x1C)
	uint8_t IsGenerateOccluder : 1; // 0x6C8(0x1), Mask(0x1)
	uint8_t BitPad_0x6CC_1 : 7; // 0x6CC(0x1)
	uint8_t Pad_0x6CD[0x3]; // 0x6CD(0x3)
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

	ETerrainCoordMappingType MappingType; // 0x39(0x1)
	ELandscapeCustomizedCoordType CustomUVType; // 0x3A(0x1)
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
// Size: 0x98 (Inherited: 0x40)
struct UMaterialExpressionLandscapeLayerWeight : UMaterialExpression
{
	DEFINE_UE_CLASS_HELPERS(UMaterialExpressionLandscapeLayerWeight, "MaterialExpressionLandscapeLayerWeight")

	struct FExpressionInput Base; // 0x3C(0xC)
	uint8_t Pad_0x4C[0x4]; // 0x4C(0x4)
	struct FExpressionInput Layer; // 0x50(0xC)
	uint8_t Pad_0x5C[0x8]; // 0x5C(0x8)
	int32_t SampleBlockOffsetIndex; // 0x64(0x4)
	int32_t SampleTextureSize; // 0x68(0x4)
	struct FName ParameterName; // 0x6C(0x8)
	float PreviewWeight; // 0x74(0x4)
	struct FVector ConstBase; // 0x78(0xC)
	struct FGuid ExpressionGUID; // 0x84(0x10)
	uint8_t Pad_0x94[0x4]; // 0x94(0x4)
};

// Object: Class Landscape.MaterialExpressionLandscapeVisibilityMask
// Size: 0x50 (Inherited: 0x40)
struct UMaterialExpressionLandscapeVisibilityMask : UMaterialExpression
{
	DEFINE_UE_CLASS_HELPERS(UMaterialExpressionLandscapeVisibilityMask, "MaterialExpressionLandscapeVisibilityMask")

	struct FGuid ExpressionGUID; // 0x3C(0x10)
};

} // namespace SDK
