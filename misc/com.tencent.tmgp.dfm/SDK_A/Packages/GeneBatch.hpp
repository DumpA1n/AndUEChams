#pragma once

#include "../CoreUObject_classes.hpp"
#include "Engine.hpp"

namespace SDK
{

// Package: GeneBatch
// Enums: 10
// Structs: 118
// Classes: 20

struct AActor;
struct AReflectionCapture;
enum class EMaterialAtlasUsage : uint8_t;
enum class ERuntimeVirtualTextureLayerType : uint8_t;
enum class ERuntimeVirtualTextureMainPassType : uint8_t;
enum class ETextureGroup : uint8_t;
struct UDataTable;
struct UDecalComponent;
struct ULocalLightGroupBake;
struct UMaterial;
struct UMaterialInstance;
struct UMaterialInstanceDynamic;
struct UMaterialInterface;
struct UPrimitiveComponent;
struct URuntimeVirtualTexture;
struct UStaticMesh;
struct UStaticMeshComponent;
struct UTexture;
struct UWorld;
struct FGeneBatchSMCInputData;
struct FGeneBatchMaterialInputData;
struct FGeneBatchTheme;
struct FGeneBatchParameterOptimizationConfig;
struct FGeneBatchParameterOptimizationConfigIntArray;
struct FGeneBatchPrimitiveInstanceData;
struct FGeneBatchTableRowResultHLODData;
struct FGeneBatchPrimitiveInstanceLODData;
struct FGeneBatchTableRowResultHLODDataLODData;
struct FGeneBatchTableRowResultHLODDataMergeDrawSection;
struct FGeneBatchResultDrawSectionIndex;
struct FGeneBatchDrawableLODInfo;
struct FGeneBatchMergeResultInfo;
struct FGeneBatchMergeResultLODInfo;
struct FGeneBatchMergeResultSectionInfo;
struct FGeneBatchMergeResultSourceSectionInfo;
struct FGeneBatchMergeResultComponentInfo;
struct FGeneBatchMergeInputInfo;
struct FGeneAtlasMapsArrayLayers;
struct FMaterialParameterValue;
struct FGeneBatchMaterialParameterValuePack;
struct FGeneBatchTextureBaseChannelUsage;
struct FGeneBatchTextureChannelUsage;
struct FGeneBatchTextureSet;
struct FGeneBatchTableRowResultMergeDrawSection;
struct FGeneAtlasMapsArray;
struct FGeneAtlasParamVsAtlasMap;
struct FGeneBatchAtlasMapIndex;
struct FGeneBatchMaterialTextureParameter;
struct FGeneBatchTableRowResultAtlasMapIndex;
struct FGeneBatchResultUsageHashedAtlasMaps;
struct FGeneBatchTableRowResultMeshReuseKey;
struct FGeneBatchTableRowResultMesh;
struct FGeneBatchTableRowResultMeshReuseKeyLOD;
struct FGeneBatchTableRowResultMeshReuseKeyMergeDrawSection;
struct FGeneBatchTableRowResultMeshReuseKeySourceDrawSection;
struct FGeneBatchTableRowResultMeshLOD;
struct FGeneBatchPOI;
struct FGeneBatchAnalyzeHLODSettings;
struct FGeneBatchLODScreenSizeConfig;
struct FGeneBatchStrictAlignUsages;
struct FGeneBatchAnalyzeAtlasGroupSetting;
struct FGeneBatchAnalyzePrimitiveFilter;
struct FGeneBatchAnalyzeSettings;
struct FGeneBatchFloatArray;
struct FGeneBatchIntArray;
struct FGeneBatchLightMapUVSettings;
struct FGeneBatchManualGroupSetting;
struct FGeneBatchReductionSettings;
struct FGeneBatchAnalyzeHLODSetting;
struct FGeneBatchReductionCondition;
struct FGeneBatchCustomMaterialParameterClusterLevelIndex;
struct FGeneBatchAtlasCountDetails;
struct FGeneBatchAtlasCountDetailsItem;
struct FGeneBatchReflectionCaptureKey;
struct FGeneBatchMeshMapBuildDataKey;
struct FInstancedStaticMeshComponentProperties;
struct FGeneOpenWorldGridData;
struct FGeneBatchTableRowWhyNotBatchMaterialDetail;
struct FGeneBatchSMCProperties;
struct FGeneBatchTableRowWhyNotBatchComponentDetail;
struct FGeneBatchStaticMeshProxyInputTableRow;
struct FGeneBatchStaticMeshProxyInputElement;
struct FGeneBatchTableRowConvertedPrimitive;
struct FGeneBatchPrimitiveHLODParentDataRow;
struct FGeneBatchMeshComponentDataRow;
struct FGeneBatchMaterial;
struct FGeneBatchMaterialTextureParam;
struct FGeneBatchRuntimeMergingMeshInputLOD;
struct FGeneBatchRuntimeMergingMeshInputMergeDrawSection;
struct FGeneBatchRuntimeMergingMeshInputElement;
struct FGeneAtlasResultMap;
struct FGeneBatchTextureAtlasTableRow;
struct FGeneAtlasResultRegion;
struct FGeneBatchStaticMeshTableRow;
struct FGeneBakeTableRowResultPrimitives;
struct FGeneBakeTableRowResultPrimitive;
struct FGeneAtlasResultAtlas;
struct FGeneBakeTableRowResultPrimitveTexture;
struct FGeneBatchTableRowResourceConfig;
struct FGeneBatchTableRowResultMaterial;
struct FGeneBatchResultAtlasMaterial;
struct FGeneAtlasResultMapArray;
struct FGeneAtlasResultRegionGroup;
struct FGeneAtlasTableRowResultAtlasMaterialGroup;
struct FGeneAtlasStrictAlignGroup;
struct FGeneBatchTableRowParameterOptimization;
struct FGeneBatchTableRowWhyNotBatchStats;
struct FGeneBatchWhyNotBatchPair;
struct FGeneBatchWhyNotBatchPairInDrawSection;
struct FGeneBatchMeshInfo;
struct FGeneBatchBatchableGroup;
struct FGeneBatchWhyNotBatchPairInDrawSectionItem;
struct FGeneBatchTableRowMergeFailureData;
struct FMergeFailureDetail;
struct FGeneBatchTableRowResultDrawSection;
struct FGeneBatchTableRowResultParameterTexture;
struct FGeneBatchPrimitiveInstanceCustomData;
struct FGeneBatchTableRowResultMesReuseLOD;
struct FGeneBatchTableRowInputTexture;
struct FGeneBatchInputMaterialChannelUsages;
struct FGeneBatchTableRowInputMaterial;
struct FGeneBatchISMProperties;
struct FGeneBatchTableRowInputComponent;
struct FGeneBatchVertexColorData;
struct FGeneBatchTableRowInputComponentLOD;
struct FGeneBatchTableRowInputComponentSection;
struct FGeneBatchTableRowInputMesh;
struct FGeneBatchTableRowInputLevel;
struct FGeneBatchAllowMaterialPermutation;
struct FGeneBatchTableRowAllowMaterial;
struct FGeneBatchAllowMaterialTextureParameter;
struct FGeneBatchAllowMaterialLayer;
struct FGeneBatchAllowMaterialNumericParameter;
struct FGeneBatchMaterialParameterClusterConfigLevel;
struct FGeneBatchMaterialParameterClusterConfig;
struct FGeneBatchMaterialParameterNumericClusterMapping;
struct FGeneBatchTableRowResultPrimitiveInstanceData;
struct UDeveloperSettingsWithSubsettings;
struct UGeneBatchLibrary;
struct AGeneBatchPOIVolume;
struct UGeneBatchPOISettingsObject;
struct UGeneBatchSettingsFunctionalConfiguration;
struct UGeneBatchWhyNotBatch;
struct UGeneBatchSettingsObject;
struct UGeneBatchDefaultSettings;
struct UGeneBatchInfo;
struct UGeneBatchSettings;
struct UGeneBatchTableRowResultMeshReuseProperties;
struct UGeneBatchSettings_SOL;
struct UGeneBatchSettings_SOL_POI;
struct UGeneBatchSettings_SOL_POI_SafeHouse;
struct UGeneBatchSettings_Theme_CommonTextures;
struct UGeneBatchSettings_Theme_SOL;
struct UGeneBatchSettings_Theme_MP;
struct UGeneBatchSettings_LQ_SOL;
struct UGeneBatchSettings_LQ_MP;
struct UGeneBatchSettings_IceLand;

// Object: Enum GeneBatch.EGeneAtlasObjectiveType
enum class EGeneAtlasObjectiveType : uint8_t
{
	TotalAtlasNum = 0,
	TotalAtlasNetResolution = 1,
	AllObjectiveNum = 2,
	TotalAtlasResolution = 3,
	TotalDrawSectionNum = 4,
	EGeneAtlasObjectiveType_MAX = 5
};

// Object: Enum GeneBatch.EGeneBatchObjectiveType
enum class EGeneBatchObjectiveType : uint8_t
{
	TotalMeshVertexCount = 0,
	TotalDrawCallNum = 1,
	TotalDrawInstancingNum = 2,
	TotalBoundingBoxVolume = 3,
	AllObjectiveNum = 4,
	TotalAtlasResolution = 5,
	EGeneBatchObjectiveType_MAX = 6
};

// Object: Enum GeneBatch.EGeneBatchWhyNotBatchDetailType
enum class EGeneBatchWhyNotBatchDetailType : uint8_t
{
	Batchable = 0,
	NumericDataCount = 1,
	AtlasResolution = 2,
	RegionGroupCount = 3,
	SourceMaterialCount = 4,
	AtlasMaterial = 5,
	MergeMaterialKey = 6,
	ISMCluster = 7,
	ComponentMergeKey = 8,
	MeshMergeKey = 9,
	ComponentKey = 10,
	VertexOrBounds = 11,
	Root = 12,
	POI = 13,
	NotBatchable = 14,
	EGeneBatchWhyNotBatchDetailType_MAX = 15
};

// Object: Enum GeneBatch.EGeneBatchWhyNotBatchReason
enum class EGeneBatchWhyNotBatchReason : uint8_t
{
	Unknown = 0,
	Config = 1,
	LevelKey = 2,
	ActorResource = 3,
	MeshBuildData = 4,
	StaticMeshTag = 5,
	CastShadow = 6,
	Grid = 7,
	AtlasMap = 8,
	AtlasChannelUsage = 9,
	PreferNot = 10,
	BaseMaterial = 11,
	MaterialParameter = 12,
	ChannelUsage = 13,
	MaterialInstanceCount = 14,
	NumericParameterCount = 15,
	Bound = 16,
	VertexCount = 17,
	CanMerge = 18,
	NUM_REASONS = 19,
	EGeneBatchWhyNotBatchReason_MAX = 20
};

// Object: Enum GeneBatch.EMaterialParameterClusterSaveMode
enum class EMaterialParameterClusterSaveMode : uint8_t
{
	Median = 0,
	ResetToDefault = 1,
	EMaterialParameterClusterSaveMode_MAX = 2
};

// Object: Enum GeneBatch.EMaterialParameterClusterMode
enum class EMaterialParameterClusterMode : uint8_t
{
	None = 0,
	Cluster = 1,
	ResetToDefault = 2,
	EMaterialParameterClusterMode_MAX = 3
};

// Object: Enum GeneBatch.EMaterialParameterDataType
enum class EMaterialParameterDataType : uint8_t
{
	Unknown = 0,
	Scalar = 1,
	Vector = 2,
	Texture = 3,
	StaticSwitch = 4,
	BasePropertyOverrides = 5,
	Font = 6,
	StaticComponentMask = 7,
	MaterialLayers = 8,
	EMaterialParameterDataType_MAX = 9
};

// Object: Enum GeneBatch.EGeneBatchBakeMethod
enum class EGeneBatchBakeMethod : uint8_t
{
	Unknown = 0,
	RuntimeBake = 1,
	EditorBake = 2,
	EGeneBatchBakeMethod_MAX = 3
};

// Object: Enum GeneBatch.EGeneJointBatchObjectiveType
enum class EGeneJointBatchObjectiveType : uint8_t
{
	TotalMeshVertexCount = 0,
	TotalDrawCallCount = 1,
	TotalDrawInstancingCount = 2,
	TotalBoundingBoxVolume = 3,
	TotalAtlasMapCount = 4,
	AllObjectiveNum = 5,
	EGeneJointBatchObjectiveType_MAX = 6
};

// Object: Enum GeneBatch.EGeneUnionBatchObjectiveType
enum class EGeneUnionBatchObjectiveType : uint8_t
{
	TotalMeshVertexCount = 0,
	TotalDrawCallCount = 1,
	TotalDrawInstancingCount = 2,
	TotalBoundingBoxVolume = 3,
	TotalAtlasMapCount = 4,
	AllObjectiveNum = 5,
	EGeneUnionBatchObjectiveType_MAX = 6
};

// Object: ScriptStruct GeneBatch.GeneBatchSMCInputData
// Size: 0x28 (Inherited: 0x0)
struct FGeneBatchSMCInputData
{
	struct UStaticMeshComponent* SMC; // 0x0(0x8)
	struct FString OverrideLevelKey; // 0x8(0x10)
	struct FString AdditionalLevelKey; // 0x18(0x10)
};

// Object: ScriptStruct GeneBatch.GeneBatchMaterialInputData
// Size: 0x28 (Inherited: 0x0)
struct FGeneBatchMaterialInputData
{
	struct TSoftObjectPtr<UMaterialInterface> Material; // 0x0(0x28)
};

// Object: ScriptStruct GeneBatch.GeneBatchTheme
// Size: 0x40 (Inherited: 0x0)
struct FGeneBatchTheme
{
	struct FName Name; // 0x0(0x8)
	struct TArray<struct FName> Collections; // 0x8(0x10)
	struct TArray<struct FName> BlacklistCollections; // 0x18(0x10)
	struct TArray<struct FName> ReferencedThemes; // 0x28(0x10)
	uint8_t bAcceptTextureCollection : 1; // 0x38(0x1), Mask(0x1)
	uint8_t BitPad_0x38_1 : 7; // 0x38(0x1)
	uint8_t bAcceptDecorationOnlyTextures : 1; // 0x39(0x1), Mask(0x1)
	uint8_t BitPad_0x39_1 : 7; // 0x39(0x1)
	uint8_t bRootInPARENT : 1; // 0x3A(0x1), Mask(0x1)
	uint8_t BitPad_0x3A_1 : 7; // 0x3A(0x1)
	uint8_t Pad_0x3B[0x5]; // 0x3B(0x5)
};

// Object: ScriptStruct GeneBatch.GeneBatchParameterOptimizationConfig
// Size: 0x40 (Inherited: 0x0)
struct FGeneBatchParameterOptimizationConfig
{
	struct TArray<int32_t> BaseSizes; // 0x0(0x10)
	struct TArray<struct FGeneBatchParameterOptimizationConfigIntArray> Sizes; // 0x10(0x10)
	struct TArray<struct FGeneBatchParameterOptimizationConfigIntArray> LoadPatterns; // 0x20(0x10)
	struct TArray<struct FGeneBatchParameterOptimizationConfigIntArray> ISMNums; // 0x30(0x10)
};

// Object: ScriptStruct GeneBatch.GeneBatchParameterOptimizationConfigIntArray
// Size: 0x10 (Inherited: 0x0)
struct FGeneBatchParameterOptimizationConfigIntArray
{
	struct TArray<int32_t> Arr; // 0x0(0x10)
};

// Object: ScriptStruct GeneBatch.GeneBatchPrimitiveInstanceData
// Size: 0x80 (Inherited: 0x0)
struct FGeneBatchPrimitiveInstanceData
{
	struct FTransform Transform; // 0x0(0x30)
	struct FBoxSphereBounds Bounds; // 0x30(0x1C)
	struct FName StaticMesh; // 0x4C(0x8)
	struct FName LocalLightGroupBake; // 0x54(0x8)
	uint8_t CastShadow : 1; // 0x5C(0x1), Mask(0x1)
	uint8_t BitPad_0x5C_1 : 7; // 0x5C(0x1)
	uint8_t Pad_0x5D[0x3]; // 0x5D(0x3)
	struct TArray<struct FGeneBatchPrimitiveInstanceLODData> LODData; // 0x60(0x10)
	struct FGuid PrimitiveInstancingGuid; // 0x70(0x10)
};

// Object: ScriptStruct GeneBatch.GeneBatchTableRowResultHLODData
// Size: 0x260 (Inherited: 0x8)
struct FGeneBatchTableRowResultHLODData : FTableRowBase
{
	struct FGuid Guid; // 0x8(0x10)
	int32_t HLODLevel; // 0x18(0x4)
	struct FGuid ParentGuid; // 0x1C(0x10)
	uint8_t Pad_0x2C[0x4]; // 0x2C(0x4)
	struct FString LevelKey; // 0x30(0x10)
	uint8_t bStandalone : 1; // 0x40(0x1), Mask(0x1)
	uint8_t BitPad_0x40_1 : 7; // 0x40(0x1)
	uint8_t bUseStaticMeshProxy : 1; // 0x41(0x1), Mask(0x1)
	uint8_t BitPad_0x41_1 : 7; // 0x41(0x1)
	uint8_t bUseOriginalSMC : 1; // 0x42(0x1), Mask(0x1)
	uint8_t BitPad_0x42_1 : 7; // 0x42(0x1)
	EGeneBatchBakeMethod BakeMethod; // 0x43(0x1)
	uint8_t bUseISM : 1; // 0x44(0x1), Mask(0x1)
	uint8_t BitPad_0x44_1 : 7; // 0x44(0x1)
	uint8_t bUseMergeMeshTypeComponent : 1; // 0x45(0x1), Mask(0x1)
	uint8_t BitPad_0x45_1 : 7; // 0x45(0x1)
	uint8_t bIgnoreTransform : 1; // 0x46(0x1), Mask(0x1)
	uint8_t BitPad_0x46_1 : 7; // 0x46(0x1)
	uint8_t bUseOriginalStaticMeshTags : 1; // 0x47(0x1), Mask(0x1)
	uint8_t BitPad_0x47_1 : 7; // 0x47(0x1)
	struct TSoftObjectPtr<UStaticMesh> OverrideOccluderMesh; // 0x48(0x28)
	struct TArray<struct FGeneBatchDrawableLODInfo> DrawableLODInfo; // 0x70(0x10)
	struct FGuid MergedMeshGuid; // 0x80(0x10)
	struct FGuid MergeDrawSectionGroupGuid; // 0x90(0x10)
	struct FName ISMName; // 0xA0(0x8)
	struct TArray<struct FGeneBatchTableRowResultHLODDataLODData> LODs; // 0xA8(0x10)
	struct FVector PivotLocation; // 0xB8(0xC)
	float DrawDistance; // 0xC4(0x4)
	struct FBoxSphereBounds StaticMeshBounds; // 0xC8(0x1C)
	float CullScreenSize; // 0xE4(0x4)
	float CullDistance; // 0xE8(0x4)
	uint8_t bDisableLightmap : 1; // 0xEC(0x1), Mask(0x1)
	uint8_t BitPad_0xEC_1 : 7; // 0xEC(0x1)
	uint8_t Pad_0xED[0x3]; // 0xED(0x3)
	int32_t NumVertices; // 0xF0(0x4)
	uint8_t Pad_0xF4[0x4]; // 0xF4(0x4)
	struct TArray<int32_t> UsedUVs; // 0xF8(0x10)
	int32_t LightMapUVIndex; // 0x108(0x4)
	uint8_t Pad_0x10C[0x4]; // 0x10C(0x4)
	struct TArray<float> LODScreenSizes; // 0x110(0x10)
	struct TSoftObjectPtr<UStaticMesh> MergedMeshPtr; // 0x120(0x28)
	struct TSoftObjectPtr<UGeneBatchTableRowResultMeshReuseProperties> ReuseProperties; // 0x148(0x28)
	struct FGeneBatchPrimitiveInstanceData PrimitiveInstanceData; // 0x170(0x80)
	float UVDensityScale; // 0x1F0(0x4)
	uint8_t bCastShadow : 1; // 0x1F4(0x1), Mask(0x1)
	uint8_t BitPad_0x1F4_1 : 7; // 0x1F4(0x1)
	uint8_t bIgnoreIBL : 1; // 0x1F5(0x1), Mask(0x1)
	uint8_t BitPad_0x1F5_1 : 7; // 0x1F5(0x1)
	uint8_t Pad_0x1F6[0x2]; // 0x1F6(0x2)
	struct TSet<struct FName> SourceComponentTags; // 0x1F8(0x50)
	struct FName StreamingLayer; // 0x248(0x8)
	struct FIntPoint GridKey; // 0x250(0x8)
	int32_t ZIdx; // 0x258(0x4)
	uint8_t Pad_0x25C[0x4]; // 0x25C(0x4)
};

// Object: ScriptStruct GeneBatch.GeneBatchPrimitiveInstanceLODData
// Size: 0x30 (Inherited: 0x0)
struct FGeneBatchPrimitiveInstanceLODData
{
	struct FGuid MapBuildDataGuid; // 0x0(0x10)
	struct FVector2D LightMapCoordinateScale; // 0x10(0x8)
	struct FVector2D LightMapCoordinateBias; // 0x18(0x8)
	struct FGuid UnitScaleBiasDummyGuid; // 0x20(0x10)
};

// Object: ScriptStruct GeneBatch.GeneBatchTableRowResultHLODDataLODData
// Size: 0x10 (Inherited: 0x0)
struct FGeneBatchTableRowResultHLODDataLODData
{
	struct TArray<struct FGeneBatchTableRowResultHLODDataMergeDrawSection> MergeDrawSections; // 0x0(0x10)
};

// Object: ScriptStruct GeneBatch.GeneBatchTableRowResultHLODDataMergeDrawSection
// Size: 0x20 (Inherited: 0x0)
struct FGeneBatchTableRowResultHLODDataMergeDrawSection
{
	struct TArray<struct FGeneBatchResultDrawSectionIndex> SourceDrawSections; // 0x0(0x10)
	struct FGuid MergeDrawSectionGuid; // 0x10(0x10)
};

// Object: ScriptStruct GeneBatch.GeneBatchResultDrawSectionIndex
// Size: 0x40 (Inherited: 0x0)
struct FGeneBatchResultDrawSectionIndex
{
	struct FName Primitive; // 0x0(0x8)
	struct TSoftObjectPtr<UStaticMesh> Mesh; // 0x8(0x28)
	int32_t LodIndex; // 0x30(0x4)
	int32_t DrawSectionIndex; // 0x34(0x4)
	uint8_t bOverrideMaterial : 1; // 0x38(0x1), Mask(0x1)
	uint8_t BitPad_0x38_1 : 7; // 0x38(0x1)
	uint8_t Pad_0x39[0x7]; // 0x39(0x7)
};

// Object: ScriptStruct GeneBatch.GeneBatchDrawableLODInfo
// Size: 0x28 (Inherited: 0x0)
struct FGeneBatchDrawableLODInfo
{
	int32_t TargetLODIndex; // 0x0(0x4)
	uint8_t Pad_0x4[0x4]; // 0x4(0x4)
	struct TArray<int32_t> SectionIndices; // 0x8(0x10)
	struct TArray<struct TSoftObjectPtr<UMaterialInterface>> Materials; // 0x18(0x10)
};

// Object: ScriptStruct GeneBatch.GeneBatchMergeResultInfo
// Size: 0x38 (Inherited: 0x0)
struct FGeneBatchMergeResultInfo
{
	struct TSoftObjectPtr<UStaticMesh> ResultMesh; // 0x0(0x28)
	struct TArray<struct FGeneBatchMergeResultLODInfo> LODs; // 0x28(0x10)
};

// Object: ScriptStruct GeneBatch.GeneBatchMergeResultLODInfo
// Size: 0x10 (Inherited: 0x0)
struct FGeneBatchMergeResultLODInfo
{
	struct TArray<struct FGeneBatchMergeResultSectionInfo> MergedSections; // 0x0(0x10)
};

// Object: ScriptStruct GeneBatch.GeneBatchMergeResultSectionInfo
// Size: 0x10 (Inherited: 0x0)
struct FGeneBatchMergeResultSectionInfo
{
	struct TArray<struct FGeneBatchMergeResultSourceSectionInfo> SourceSections; // 0x0(0x10)
};

// Object: ScriptStruct GeneBatch.GeneBatchMergeResultSourceSectionInfo
// Size: 0x30 (Inherited: 0x0)
struct FGeneBatchMergeResultSourceSectionInfo
{
	struct TSoftObjectPtr<UStaticMesh> SourceMesh; // 0x0(0x28)
	int32_t LodIndex; // 0x28(0x4)
	int32_t SectionIndex; // 0x2C(0x4)
};

// Object: ScriptStruct GeneBatch.GeneBatchMergeResultComponentInfo
// Size: 0x70 (Inherited: 0x0)
struct FGeneBatchMergeResultComponentInfo
{
	struct TArray<struct UStaticMeshComponent*> SourceComponents; // 0x0(0x10)
	struct TSoftObjectPtr<UStaticMesh> ResultMesh; // 0x10(0x28)
	uint8_t Pad_0x38[0x8]; // 0x38(0x8)
	struct FTransform ResultTransform; // 0x40(0x30)
};

// Object: ScriptStruct GeneBatch.GeneBatchMergeInputInfo
// Size: 0x20 (Inherited: 0x0)
struct FGeneBatchMergeInputInfo
{
	struct FString LevelName; // 0x0(0x10)
	struct TArray<struct UStaticMeshComponent*> Components; // 0x10(0x10)
};

// Object: ScriptStruct GeneBatch.GeneAtlasMapsArrayLayers
// Size: 0x10 (Inherited: 0x0)
struct FGeneAtlasMapsArrayLayers
{
	struct TArray<struct FGeneAtlasMapsArray> LayerdAtlasMapsArray; // 0x0(0x10)
};

// Object: ScriptStruct GeneBatch.MaterialParameterValue
// Size: 0x24 (Inherited: 0x0)
struct FMaterialParameterValue
{
	float ScalarValue; // 0x0(0x4)
	struct FLinearColor VectorValue; // 0x4(0x10)
	struct FName ObjectValue; // 0x14(0x8)
	uint32_t UIntValue; // 0x1C(0x4)
	EMaterialParameterDataType ParameterType; // 0x20(0x1)
	uint8_t Pad_0x21[0x3]; // 0x21(0x3)
};

// Object: ScriptStruct GeneBatch.GeneBatchMaterialParameterValuePack
// Size: 0x50 (Inherited: 0x0)
struct FGeneBatchMaterialParameterValuePack
{
	struct TMap<struct FName, struct FMaterialParameterValue> Values; // 0x0(0x50)
};

// Object: ScriptStruct GeneBatch.GeneBatchTextureBaseChannelUsage
// Size: 0xC (Inherited: 0x0)
struct FGeneBatchTextureBaseChannelUsage
{
	struct FName ChannelUsageName; // 0x0(0x8)
	EMaterialAtlasUsage MaterialAtlasUsage; // 0x8(0x1)
	uint8_t bUseAlpha : 1; // 0x9(0x1), Mask(0x1)
	uint8_t BitPad_0x9_1 : 7; // 0x9(0x1)
	uint8_t bForceLinearColor : 1; // 0xA(0x1), Mask(0x1)
	uint8_t BitPad_0xA_1 : 7; // 0xA(0x1)
	uint8_t bAnisotropic : 1; // 0xB(0x1), Mask(0x1)
	uint8_t BitPad_0xB_1 : 7; // 0xB(0x1)
};

// Object: ScriptStruct GeneBatch.GeneBatchTextureChannelUsage
// Size: 0x60 (Inherited: 0xC)
struct FGeneBatchTextureChannelUsage : FGeneBatchTextureBaseChannelUsage
{
	uint8_t Pad_0xC[0x4]; // 0xC(0x4)
	struct TMap<struct FName, EPixelFormat> PlatformPixelFormats; // 0x10(0x50)
};

// Object: ScriptStruct GeneBatch.GeneBatchTextureSet
// Size: 0x50 (Inherited: 0x0)
struct FGeneBatchTextureSet
{
	struct TSet<struct TSoftObjectPtr<UTexture>> TextureSet; // 0x0(0x50)
};

// Object: ScriptStruct GeneBatch.GeneBatchTableRowResultMergeDrawSection
// Size: 0x418 (Inherited: 0x8)
struct FGeneBatchTableRowResultMergeDrawSection : FTableRowBase
{
	struct FString LevelKey; // 0x8(0x10)
	struct TSoftObjectPtr<AActor> ActorResource; // 0x18(0x28)
	int32_t HLODLevel; // 0x40(0x4)
	uint8_t bOverrideMaterial : 1; // 0x44(0x1), Mask(0x1)
	uint8_t BitPad_0x44_1 : 7; // 0x44(0x1)
	uint8_t Pad_0x45[0x3]; // 0x45(0x3)
	struct TSoftObjectPtr<UMaterial> BaseMaterial; // 0x48(0x28)
	struct TSoftObjectPtr<UMaterialInterface> MaterialInstance; // 0x70(0x28)
	struct TArray<struct FGeneBatchResultUsageHashedAtlasMaps> AtlasMapsLayers; // 0x98(0x10)
	struct TArray<int32_t> AtlasBatchIndirectIndices; // 0xA8(0x10)
	int32_t DrawSectionNum; // 0xB8(0x4)
	uint8_t Pad_0xBC[0x4]; // 0xBC(0x4)
	struct TArray<struct FGeneBatchResultDrawSectionIndex> DrawSections; // 0xC0(0x10)
	struct TSet<struct TSoftObjectPtr<UMaterialInterface>> SourceMaterialInstances; // 0xD0(0x50)
	struct TSet<struct FLinearColor> NumericParameters; // 0x120(0x50)
	int32_t MeshNum; // 0x170(0x4)
	struct FGuid ResultMeshGuid; // 0x174(0x10)
	uint8_t Pad_0x184[0x4]; // 0x184(0x4)
	struct TSet<struct FGuid> ResultTextureGuid; // 0x188(0x50)
	struct TMap<struct FGeneBatchTextureChannelUsage, struct FGeneBatchTextureSet> ResultTextures; // 0x1D8(0x50)
	struct TSet<struct TSoftObjectPtr<UStaticMesh>> MeshPtrs; // 0x228(0x50)
	struct TSoftObjectPtr<UStaticMesh> OcclusionMesh; // 0x278(0x28)
	struct FGuid InstancingGuid; // 0x2A0(0x10)
	int32_t InstancingNum; // 0x2B0(0x4)
	uint8_t Pad_0x2B4[0x4]; // 0x2B4(0x4)
	struct TArray<float> CustomPrimitiveData; // 0x2B8(0x10)
	uint8_t bSectionCastShadow : 1; // 0x2C8(0x1), Mask(0x1)
	uint8_t BitPad_0x2C8_1 : 7; // 0x2C8(0x1)
	uint8_t Pad_0x2C9[0x7]; // 0x2C9(0x7)
	struct TMap<struct FName, int32_t> TextureMipIndices; // 0x2D0(0x50)
	struct TArray<struct FGeneBatchAtlasMapIndex> AtlasMapIndices; // 0x320(0x10)
	uint8_t bMergeMaterial : 1; // 0x330(0x1), Mask(0x1)
	uint8_t BitPad_0x330_1 : 7; // 0x330(0x1)
	uint8_t bIgnoreTransform : 1; // 0x331(0x1), Mask(0x1)
	uint8_t BitPad_0x331_1 : 7; // 0x331(0x1)
	uint8_t Pad_0x332[0x2]; // 0x332(0x2)
	struct FVector PivotLocation; // 0x334(0xC)
	int32_t NumUsedUVs; // 0x340(0x4)
	int32_t MaterialParameterClusterLevelIndex; // 0x344(0x4)
	struct FGeneBatchPrimitiveInstanceLODData PivotLODData; // 0x348(0x30)
	struct TArray<struct FGeneBatchPrimitiveInstanceLODData> UsedLODData; // 0x378(0x10)
	struct FGuid MergeDrawSectionGroupGuid; // 0x388(0x10)
	struct FGeneAtlasMapsArrayLayers AtlasMapsArrayLayers; // 0x398(0x10)
	struct FGeneBatchMaterialParameterValuePack MaterialParameters; // 0x3A8(0x50)
	struct TArray<struct FGuid> InputMeshDataHashes; // 0x3F8(0x10)
	struct TArray<struct FGuid> InputMaterialDataHashes; // 0x408(0x10)
};

// Object: ScriptStruct GeneBatch.GeneAtlasMapsArray
// Size: 0x10 (Inherited: 0x0)
struct FGeneAtlasMapsArray
{
	struct TArray<struct FGeneAtlasParamVsAtlasMap> AtlasMapsArray; // 0x0(0x10)
};

// Object: ScriptStruct GeneBatch.GeneAtlasParamVsAtlasMap
// Size: 0x78 (Inherited: 0x0)
struct FGeneAtlasParamVsAtlasMap
{
	struct FGeneBatchTextureChannelUsage ChannelUsage; // 0x0(0x60)
	struct FGuid AtlasGuid; // 0x60(0x10)
	int32_t AtlasMapIndex; // 0x70(0x4)
	uint8_t Pad_0x74[0x4]; // 0x74(0x4)
};

// Object: ScriptStruct GeneBatch.GeneBatchAtlasMapIndex
// Size: 0x14 (Inherited: 0x0)
struct FGeneBatchAtlasMapIndex
{
	struct FGuid AtlasGroupGuid; // 0x0(0x10)
	int32_t AtlasMapIndex; // 0x10(0x4)
};

// Object: ScriptStruct GeneBatch.GeneBatchMaterialTextureParameter
// Size: 0x78 (Inherited: 0x0)
struct FGeneBatchMaterialTextureParameter
{
	struct FGeneBatchTextureChannelUsage ChannelUsage; // 0x0(0x60)
	struct FString SourceMaterialTextureParamRegex; // 0x60(0x10)
	struct FName AtlasMaterialTextureParam; // 0x70(0x8)
};

// Object: ScriptStruct GeneBatch.GeneBatchTableRowResultAtlasMapIndex
// Size: 0x14 (Inherited: 0x0)
struct FGeneBatchTableRowResultAtlasMapIndex
{
	struct FGuid AtlasGuid; // 0x0(0x10)
	int32_t AtlasMapIndex; // 0x10(0x4)
};

// Object: ScriptStruct GeneBatch.GeneBatchResultUsageHashedAtlasMaps
// Size: 0x50 (Inherited: 0x0)
struct FGeneBatchResultUsageHashedAtlasMaps
{
	struct TMap<struct FGeneBatchMaterialTextureParameter, struct FGeneBatchTableRowResultAtlasMapIndex> AtlasMaps; // 0x0(0x50)
};

// Object: ScriptStruct GeneBatch.GeneBatchTableRowResultMeshReuseKey
// Size: 0x18 (Inherited: 0x0)
struct FGeneBatchTableRowResultMeshReuseKey
{
	struct TArray<struct FGeneBatchTableRowResultMeshReuseKeyLOD> LODs; // 0x0(0x10)
	int32_t HLODLevel; // 0x10(0x4)
	uint8_t Pad_0x14[0x4]; // 0x14(0x4)
};

// Object: ScriptStruct GeneBatch.GeneBatchTableRowResultMesh
// Size: 0x158 (Inherited: 0x8)
struct FGeneBatchTableRowResultMesh : FTableRowBase
{
	struct FGuid Guid; // 0x8(0x10)
	int32_t AssetNum; // 0x18(0x4)
	uint8_t Pad_0x1C[0x4]; // 0x1C(0x4)
	struct TArray<struct TSoftObjectPtr<UStaticMesh>> MergeAssets; // 0x20(0x10)
	struct TArray<struct TSoftObjectPtr<UMaterialInterface>> MergeMaterialInstances; // 0x30(0x10)
	struct TArray<struct FGeneBatchTableRowResultMeshLOD> LODs; // 0x40(0x10)
	struct TSoftObjectPtr<UStaticMesh> MergedMeshPtr; // 0x50(0x28)
	struct TSoftObjectPtr<UStaticMesh> OcclusionMeshPtr; // 0x78(0x28)
	uint8_t bUseOriginalMesh : 1; // 0xA0(0x1), Mask(0x1)
	uint8_t BitPad_0xA0_1 : 7; // 0xA0(0x1)
	uint8_t bMergeMaterialOnly : 1; // 0xA1(0x1), Mask(0x1)
	uint8_t BitPad_0xA1_1 : 7; // 0xA1(0x1)
	EGeneBatchBakeMethod BakeMethod; // 0xA2(0x1)
	uint8_t bDisableLightmap : 1; // 0xA3(0x1), Mask(0x1)
	uint8_t BitPad_0xA3_1 : 7; // 0xA3(0x1)
	int32_t LightMapUVIndex; // 0xA4(0x4)
	uint8_t bMergeAssetTags : 1; // 0xA8(0x1), Mask(0x1)
	uint8_t BitPad_0xA8_1 : 7; // 0xA8(0x1)
	uint8_t Pad_0xA9[0x7]; // 0xA9(0x7)
	struct TArray<struct FGuid> ShouldBakeOcclusionMeshMergeDrawSectionGroups; // 0xB0(0x10)
	uint8_t bBakeOcclusionMesh : 1; // 0xC0(0x1), Mask(0x1)
	uint8_t BitPad_0xC0_1 : 7; // 0xC0(0x1)
	uint8_t bSelfAsOccluder : 1; // 0xC1(0x1), Mask(0x1)
	uint8_t BitPad_0xC1_1 : 7; // 0xC1(0x1)
	uint8_t Pad_0xC2[0x6]; // 0xC2(0x6)
	struct TArray<int32_t> NumVertices; // 0xC8(0x10)
	struct TArray<float> ReductionLODPercentVertices; // 0xD8(0x10)
	uint8_t bCastShadow : 1; // 0xE8(0x1), Mask(0x1)
	uint8_t BitPad_0xE8_1 : 7; // 0xE8(0x1)
	uint8_t bMergeCollision : 1; // 0xE9(0x1), Mask(0x1)
	uint8_t BitPad_0xE9_1 : 7; // 0xE9(0x1)
	uint8_t Pad_0xEA[0x2]; // 0xEA(0x2)
	int32_t HLODLevel; // 0xEC(0x4)
	uint8_t bUseFullPrecisionUVs : 1; // 0xF0(0x1), Mask(0x1)
	uint8_t BitPad_0xF0_1 : 7; // 0xF0(0x1)
	uint8_t bUseNormalizedLightMapUV : 1; // 0xF1(0x1), Mask(0x1)
	uint8_t BitPad_0xF1_1 : 7; // 0xF1(0x1)
	uint8_t Pad_0xF2[0x6]; // 0xF2(0x6)
	struct FGeneBatchTableRowResultMeshReuseKey ReuseKey; // 0xF8(0x18)
	struct TSoftObjectPtr<UGeneBatchTableRowResultMeshReuseProperties> ReuseProperties; // 0x110(0x28)
	struct TArray<float> LODScreenSizes; // 0x138(0x10)
	struct FGuid DataHash; // 0x148(0x10)
};

// Object: ScriptStruct GeneBatch.GeneBatchTableRowResultMeshReuseKeyLOD
// Size: 0x10 (Inherited: 0x0)
struct FGeneBatchTableRowResultMeshReuseKeyLOD
{
	struct TArray<struct FGeneBatchTableRowResultMeshReuseKeyMergeDrawSection> MergeDrawSections; // 0x0(0x10)
};

// Object: ScriptStruct GeneBatch.GeneBatchTableRowResultMeshReuseKeyMergeDrawSection
// Size: 0x10 (Inherited: 0x0)
struct FGeneBatchTableRowResultMeshReuseKeyMergeDrawSection
{
	struct TArray<struct FGeneBatchTableRowResultMeshReuseKeySourceDrawSection> SourceDrawSections; // 0x0(0x10)
};

// Object: ScriptStruct GeneBatch.GeneBatchTableRowResultMeshReuseKeySourceDrawSection
// Size: 0x20 (Inherited: 0x0)
struct FGeneBatchTableRowResultMeshReuseKeySourceDrawSection
{
	struct FName MeshName; // 0x0(0x8)
	int32_t LodIndex; // 0x8(0x4)
	int32_t DrawSectionIndex; // 0xC(0x4)
	struct FLinearColor UVScaleOffset; // 0x10(0x10)
};

// Object: ScriptStruct GeneBatch.GeneBatchTableRowResultMeshLOD
// Size: 0x10 (Inherited: 0x0)
struct FGeneBatchTableRowResultMeshLOD
{
	struct TArray<struct FGuid> MergeDrawSectionGuids; // 0x0(0x10)
};

// Object: ScriptStruct GeneBatch.GeneBatchPOI
// Size: 0x40 (Inherited: 0x0)
struct FGeneBatchPOI
{
	struct FName Name; // 0x0(0x8)
	struct TArray<struct FTransform> Areas; // 0x8(0x10)
	struct TArray<struct FString> LevelNamePatterns; // 0x18(0x10)
	struct FName GameplayAreaName; // 0x28(0x8)
	struct TArray<struct FName> ReferencedThemes; // 0x30(0x10)
};

// Object: ScriptStruct GeneBatch.GeneBatchAnalyzeHLODSettings
// Size: 0xD8 (Inherited: 0x0)
struct FGeneBatchAnalyzeHLODSettings
{
	struct TArray<struct FGeneBatchAnalyzeHLODSetting> HLODs; // 0x0(0x10)
	uint8_t bHLOD0UseOriginalSMC : 1; // 0x10(0x1), Mask(0x1)
	uint8_t BitPad_0x10_1 : 7; // 0x10(0x1)
	uint8_t bKeepDrawSectionOrder : 1; // 0x11(0x1), Mask(0x1)
	uint8_t BitPad_0x11_1 : 7; // 0x11(0x1)
	uint8_t Pad_0x12[0x6]; // 0x12(0x6)
	struct TArray<struct FGeneBatchAnalyzeAtlasGroupSetting> AtlasGroupSettings; // 0x18(0x10)
	struct TArray<struct FGeneBatchStrictAlignUsages> StrictAlignUsages; // 0x28(0x10)
	struct TArray<struct FName> BakeAtlasUsages; // 0x38(0x10)
	struct TArray<struct FName> StreamingLayers; // 0x48(0x10)
	struct TMap<struct FName, float> StreamingLayerGridSizes; // 0x58(0x50)
	struct TArray<struct FGeneBatchLODScreenSizeConfig> LODScreenSizeConfigs; // 0xA8(0x10)
	struct TArray<struct FGeneBatchLODScreenSizeConfig> SubBoundsLODScreenSizeConfigs; // 0xB8(0x10)
	struct TArray<int32_t> CheapLODVertexNumThresholds; // 0xC8(0x10)
};

// Object: ScriptStruct GeneBatch.GeneBatchLODScreenSizeConfig
// Size: 0x30 (Inherited: 0x0)
struct FGeneBatchLODScreenSizeConfig
{
	struct TArray<struct FName> StreamingLayers; // 0x0(0x10)
	struct TArray<int32_t> HLODLevels; // 0x10(0x10)
	struct TArray<float> MinLODScreenSizes; // 0x20(0x10)
};

// Object: ScriptStruct GeneBatch.GeneBatchStrictAlignUsages
// Size: 0x10 (Inherited: 0x0)
struct FGeneBatchStrictAlignUsages
{
	struct TArray<struct FName> ChannelUsages; // 0x0(0x10)
};

// Object: ScriptStruct GeneBatch.GeneBatchAnalyzeAtlasGroupSetting
// Size: 0x30 (Inherited: 0x0)
struct FGeneBatchAnalyzeAtlasGroupSetting
{
	int32_t DesiredAtlasResolution; // 0x0(0x4)
	uint8_t Pad_0x4[0x4]; // 0x4(0x4)
	struct TArray<int32_t> ExtraAtlasResolutions; // 0x8(0x10)
	uint8_t bAllowDuplicatedTextures : 1; // 0x18(0x1), Mask(0x1)
	uint8_t BitPad_0x18_1 : 7; // 0x18(0x1)
	uint8_t bAtlasCrossMergeMaterial : 1; // 0x19(0x1), Mask(0x1)
	uint8_t BitPad_0x19_1 : 7; // 0x19(0x1)
	uint8_t bIgnoreAnisotropic : 1; // 0x1A(0x1), Mask(0x1)
	uint8_t BitPad_0x1A_1 : 7; // 0x1A(0x1)
	EPixelFormat ForcePixelFormat; // 0x1B(0x1)
	uint8_t Pad_0x1C[0x4]; // 0x1C(0x4)
	struct FString DisplayName; // 0x20(0x10)
};

// Object: ScriptStruct GeneBatch.GeneBatchAnalyzePrimitiveFilter
// Size: 0x78 (Inherited: 0x0)
struct FGeneBatchAnalyzePrimitiveFilter
{
	struct TArray<struct FString> TagWhitelist; // 0x0(0x10)
	struct TArray<struct FString> TagBlacklist; // 0x10(0x10)
	float MinScreenSize; // 0x20(0x4)
	uint8_t Pad_0x24[0x4]; // 0x24(0x4)
	struct TArray<struct FString> StaticMeshAssetPathWhitelist; // 0x28(0x10)
	struct TArray<struct FString> StreamingLayerWhitelist; // 0x38(0x10)
	struct TArray<struct FName> MeshGroupBlacklist; // 0x48(0x10)
	struct TArray<struct FName> MeshGroupWhitelist; // 0x58(0x10)
	struct TArray<struct FString> LevelPathBlacklistWildcards; // 0x68(0x10)
};

// Object: ScriptStruct GeneBatch.GeneBatchAnalyzeSettings
// Size: 0x78 (Inherited: 0x0)
struct FGeneBatchAnalyzeSettings
{
	int32_t ExpectedVertexCount; // 0x0(0x4)
	float ExpectedBoundSize; // 0x4(0x4)
	struct TMap<struct FName, float> StreamingLayerExpectedBoundSizes; // 0x8(0x50)
	float HeightGroupUnit; // 0x58(0x4)
	uint8_t bAggressive : 1; // 0x5C(0x1), Mask(0x1)
	uint8_t BitPad_0x5C_1 : 7; // 0x5C(0x1)
	uint8_t Pad_0x5D[0x3]; // 0x5D(0x3)
	int32_t MinISMNum; // 0x60(0x4)
	int32_t MinISMTotalVertexCount; // 0x64(0x4)
	float MinForceISMGridDensity; // 0x68(0x4)
	int32_t MaxVertexCount; // 0x6C(0x4)
	int32_t CanMergeMeshLODVertexMaxNum; // 0x70(0x4)
	uint8_t Pad_0x74[0x4]; // 0x74(0x4)
};

// Object: ScriptStruct GeneBatch.GeneBatchFloatArray
// Size: 0x10 (Inherited: 0x0)
struct FGeneBatchFloatArray
{
	struct TArray<float> array; // 0x0(0x10)
};

// Object: ScriptStruct GeneBatch.GeneBatchIntArray
// Size: 0x10 (Inherited: 0x0)
struct FGeneBatchIntArray
{
	struct TArray<int32_t> array; // 0x0(0x10)
};

// Object: ScriptStruct GeneBatch.GeneBatchLightMapUVSettings
// Size: 0x18 (Inherited: 0x0)
struct FGeneBatchLightMapUVSettings
{
	float LightMapUVRangeLimit; // 0x0(0x4)
	float ISMLightMapUVRangeLimit; // 0x4(0x4)
	float ISMLightMapUVErrorLimit; // 0x8(0x4)
	uint8_t bForceFullPrecisionUV : 1; // 0xC(0x1), Mask(0x1)
	uint8_t BitPad_0xC_1 : 7; // 0xC(0x1)
	uint8_t Pad_0xD[0x3]; // 0xD(0x3)
	float FullPrecisionUVErrorPercentageThreshold; // 0x10(0x4)
	uint8_t bForceNormalizedLightMapUV : 1; // 0x14(0x1), Mask(0x1)
	uint8_t BitPad_0x14_1 : 7; // 0x14(0x1)
	uint8_t Pad_0x15[0x3]; // 0x15(0x3)
};

// Object: ScriptStruct GeneBatch.GeneBatchManualGroupSetting
// Size: 0x3 (Inherited: 0x0)
struct FGeneBatchManualGroupSetting
{
	uint8_t bEnable : 1; // 0x0(0x1), Mask(0x1)
	uint8_t BitPad_0x0_1 : 7; // 0x0(0x1)
	uint8_t bCrossGrid : 1; // 0x1(0x1), Mask(0x1)
	uint8_t BitPad_0x1_1 : 7; // 0x1(0x1)
	uint8_t bCrossLayer : 1; // 0x2(0x1), Mask(0x1)
	uint8_t BitPad_0x2_1 : 7; // 0x2(0x1)
};

// Object: ScriptStruct GeneBatch.GeneBatchReductionSettings
// Size: 0x10 (Inherited: 0x0)
struct FGeneBatchReductionSettings
{
	struct TArray<struct FGeneBatchReductionCondition> Conditions; // 0x0(0x10)
};

// Object: ScriptStruct GeneBatch.GeneBatchAnalyzeHLODSetting
// Size: 0x3E0 (Inherited: 0x0)
struct FGeneBatchAnalyzeHLODSetting
{
	struct FString Name; // 0x0(0x10)
	int32_t HLODIndex; // 0x10(0x4)
	int32_t ParentHLODIndex; // 0x14(0x4)
	struct FString Label; // 0x18(0x10)
	struct FGeneBatchAnalyzeSettings AnalyzeSettings; // 0x28(0x78)
	struct TArray<float> DrawDistances; // 0xA0(0x10)
	struct TArray<int32_t> MinLODIndex; // 0xB0(0x10)
	struct FString MinLODIndex_MeshOverridePrefix; // 0xC0(0x10)
	int32_t MipIndex; // 0xD0(0x4)
	int32_t AtlasGroupKey; // 0xD4(0x4)
	struct FGeneBatchAnalyzePrimitiveFilter PrimitiveFilter; // 0xD8(0x78)
	int32_t MaterialParameterClusterLevelIndex; // 0x150(0x4)
	uint8_t Pad_0x154[0x4]; // 0x154(0x4)
	struct TArray<struct FGeneBatchCustomMaterialParameterClusterLevelIndex> CustomMaterialParameterClusterLevelIndices; // 0x158(0x10)
	uint8_t bOverrideCastShadow : 1; // 0x168(0x1), Mask(0x1)
	uint8_t BitPad_0x168_1 : 7; // 0x168(0x1)
	uint8_t bOverrideBaseMaterial : 1; // 0x169(0x1), Mask(0x1)
	uint8_t BitPad_0x169_1 : 7; // 0x169(0x1)
	uint8_t bIgnoreLightmap : 1; // 0x16A(0x1), Mask(0x1)
	uint8_t BitPad_0x16A_1 : 7; // 0x16A(0x1)
	uint8_t bIgnoreAOLightmap : 1; // 0x16B(0x1), Mask(0x1)
	uint8_t BitPad_0x16B_1 : 7; // 0x16B(0x1)
	uint8_t bIgnoreIBL : 1; // 0x16C(0x1), Mask(0x1)
	uint8_t BitPad_0x16C_1 : 7; // 0x16C(0x1)
	uint8_t bIgnoreIBLForManualGroup : 1; // 0x16D(0x1), Mask(0x1)
	uint8_t BitPad_0x16D_1 : 7; // 0x16D(0x1)
	uint8_t bClusterISM : 1; // 0x16E(0x1), Mask(0x1)
	uint8_t BitPad_0x16E_1 : 7; // 0x16E(0x1)
	uint8_t bMergeMeshInstance : 1; // 0x16F(0x1), Mask(0x1)
	uint8_t BitPad_0x16F_1 : 7; // 0x16F(0x1)
	uint8_t bMergeMaterial : 1; // 0x170(0x1), Mask(0x1)
	uint8_t BitPad_0x170_1 : 7; // 0x170(0x1)
	uint8_t bMergeMeshType : 1; // 0x171(0x1), Mask(0x1)
	uint8_t BitPad_0x171_1 : 7; // 0x171(0x1)
	uint8_t Pad_0x172[0x2]; // 0x172(0x2)
	int32_t MergeMaterialMinLOD; // 0x174(0x4)
	uint8_t bCrossGrid : 1; // 0x178(0x1), Mask(0x1)
	uint8_t BitPad_0x178_1 : 7; // 0x178(0x1)
	uint8_t bCrossLayer : 1; // 0x179(0x1), Mask(0x1)
	uint8_t BitPad_0x179_1 : 7; // 0x179(0x1)
	uint8_t bBakeMeshes : 1; // 0x17A(0x1), Mask(0x1)
	uint8_t BitPad_0x17A_1 : 7; // 0x17A(0x1)
	uint8_t bBakeMaterials : 1; // 0x17B(0x1), Mask(0x1)
	uint8_t BitPad_0x17B_1 : 7; // 0x17B(0x1)
	uint8_t bMergeCollision : 1; // 0x17C(0x1), Mask(0x1)
	uint8_t BitPad_0x17C_1 : 7; // 0x17C(0x1)
	uint8_t bUseOriginalPivotLocation : 1; // 0x17D(0x1), Mask(0x1)
	uint8_t BitPad_0x17D_1 : 7; // 0x17D(0x1)
	uint8_t bUseOriginalMesh : 1; // 0x17E(0x1), Mask(0x1)
	uint8_t BitPad_0x17E_1 : 7; // 0x17E(0x1)
	uint8_t bAllowNonSquareAtlas : 1; // 0x17F(0x1), Mask(0x1)
	uint8_t BitPad_0x17F_1 : 7; // 0x17F(0x1)
	struct TMap<struct FName, uint8_t> UseOriginalMesh_MeshGroupOverride; // 0x180(0x50)
	struct TMap<struct FName, uint8_t> MergeMeshInstance_StreamingLayerOverride; // 0x1D0(0x50)
	struct TMap<struct FName, struct FGeneBatchIntArray> MinLODIndex_StreamingLayerOverride; // 0x220(0x50)
	struct TMap<struct FName, struct FGeneBatchFloatArray> DrawDistances_StreamingLayerOverride; // 0x270(0x50)
	struct TMap<struct FName, int32_t> AtlasGroupKey_StreamingLayerOverride; // 0x2C0(0x50)
	struct TMap<struct FName, int32_t> MaterialParameterClusterLevelIndex_StreamingLayerOverride; // 0x310(0x50)
	struct TMap<struct FName, uint8_t> OverrideBaseMaterial_StreamingLayerOverride; // 0x360(0x50)
	struct FGeneBatchReductionSettings ReductionSettings; // 0x3B0(0x10)
	struct FGeneBatchManualGroupSetting ManualGroupSetting; // 0x3C0(0x3)
	uint8_t Pad_0x3C3[0x1]; // 0x3C3(0x1)
	struct FGeneBatchLightMapUVSettings LightMapUVSettings; // 0x3C4(0x18)
	uint8_t Pad_0x3DC[0x4]; // 0x3DC(0x4)
};

// Object: ScriptStruct GeneBatch.GeneBatchReductionCondition
// Size: 0x30 (Inherited: 0x0)
struct FGeneBatchReductionCondition
{
	uint8_t bEnable : 1; // 0x0(0x1), Mask(0x1)
	uint8_t BitPad_0x0_1 : 7; // 0x0(0x1)
	uint8_t Pad_0x1[0x3]; // 0x1(0x3)
	int32_t AllowLODOffsetFromFirst; // 0x4(0x4)
	int32_t AllowLODOffsetFromLast; // 0x8(0x4)
	uint8_t Pad_0xC[0x4]; // 0xC(0x4)
	struct TArray<struct FName> TagBlacklist; // 0x10(0x10)
	int32_t VertexNum; // 0x20(0x4)
	float VertexSurfaceDensity; // 0x24(0x4)
	int32_t BoundHeight; // 0x28(0x4)
	float ReductionPercentage; // 0x2C(0x4)
};

// Object: ScriptStruct GeneBatch.GeneBatchCustomMaterialParameterClusterLevelIndex
// Size: 0x30 (Inherited: 0x0)
struct FGeneBatchCustomMaterialParameterClusterLevelIndex
{
	struct TSoftObjectPtr<UMaterial> Material; // 0x0(0x28)
	int32_t MaterialParameterClusterLevelIndex; // 0x28(0x4)
	uint8_t Pad_0x2C[0x4]; // 0x2C(0x4)
};

// Object: ScriptStruct GeneBatch.GeneBatchAtlasCountDetails
// Size: 0x20 (Inherited: 0x0)
struct FGeneBatchAtlasCountDetails
{
	int32_t CountIn2K; // 0x0(0x4)
	int32_t CountIn4K; // 0x4(0x4)
	int32_t CountIn2K_Set; // 0x8(0x4)
	int32_t CountIn2K_Set_Tight; // 0xC(0x4)
	struct TArray<struct FGeneBatchAtlasCountDetailsItem> Items; // 0x10(0x10)
};

// Object: ScriptStruct GeneBatch.GeneBatchAtlasCountDetailsItem
// Size: 0xB0 (Inherited: 0x0)
struct FGeneBatchAtlasCountDetailsItem
{
	struct TSoftObjectPtr<UTexture> Texture; // 0x0(0x28)
	struct FIntPoint Resolution; // 0x28(0x8)
	int32_t NumUsedPixels; // 0x30(0x4)
	uint8_t Pad_0x34[0x4]; // 0x34(0x4)
	struct FGeneBatchTextureChannelUsage ChannelUsage; // 0x38(0x60)
	int32_t AtlasGroupKey; // 0x98(0x4)
	uint8_t Pad_0x9C[0x4]; // 0x9C(0x4)
	struct TArray<struct TSoftObjectPtr<UTexture>> SourceTextures; // 0xA0(0x10)
};

// Object: ScriptStruct GeneBatch.GeneBatchReflectionCaptureKey
// Size: 0x1C (Inherited: 0x0)
struct FGeneBatchReflectionCaptureKey
{
	uint8_t bOnlySkylight : 1; // 0x0(0x1), Mask(0x1)
	uint8_t BitPad_0x0_1 : 7; // 0x0(0x1)
	uint8_t bForceSkylightReflection : 1; // 0x1(0x1), Mask(0x1)
	uint8_t BitPad_0x1_1 : 7; // 0x1(0x1)
	uint8_t Pad_0x2[0x2]; // 0x2(0x2)
	struct FName LocalReflectionGroupBake; // 0x4(0x8)
	struct FGuid LocalReflectionGroupBakeBuildID; // 0xC(0x10)
};

// Object: ScriptStruct GeneBatch.GeneBatchMeshMapBuildDataKey
// Size: 0x20 (Inherited: 0x0)
struct FGeneBatchMeshMapBuildDataKey
{
	uint8_t bValid : 1; // 0x0(0x1), Mask(0x1)
	uint8_t BitPad_0x0_1 : 7; // 0x0(0x1)
	uint8_t Pad_0x1[0x3]; // 0x1(0x3)
	struct FName LocalLightGroupBake; // 0x4(0x8)
	uint8_t bLODsShareStaticLighting : 1; // 0xC(0x1), Mask(0x1)
	uint8_t BitPad_0xC_1 : 7; // 0xC(0x1)
	uint8_t bEnableAOLightmap : 1; // 0xD(0x1), Mask(0x1)
	uint8_t BitPad_0xD_1 : 7; // 0xD(0x1)
	uint8_t Pad_0xE[0x2]; // 0xE(0x2)
	struct TArray<struct FName> Textures; // 0x10(0x10)
};

// Object: ScriptStruct GeneBatch.InstancedStaticMeshComponentProperties
// Size: 0x98 (Inherited: 0x0)
struct FInstancedStaticMeshComponentProperties
{
	struct TSoftObjectPtr<UStaticMesh> StaticMesh; // 0x0(0x28)
	uint8_t bCustomizedPhysicsCreating : 1; // 0x28(0x1), Mask(0x1)
	uint8_t BitPad_0x28_1 : 7; // 0x28(0x1)
	uint8_t bOnlySkylight : 1; // 0x29(0x1), Mask(0x1)
	uint8_t BitPad_0x29_1 : 7; // 0x29(0x1)
	uint8_t bForceSkylight : 1; // 0x2A(0x1), Mask(0x1)
	uint8_t BitPad_0x2A_1 : 7; // 0x2A(0x1)
	uint8_t bEnableAOLightmap : 1; // 0x2B(0x1), Mask(0x1)
	uint8_t BitPad_0x2B_1 : 7; // 0x2B(0x1)
	uint8_t bReverseCulling : 1; // 0x2C(0x1), Mask(0x1)
	uint8_t BitPad_0x2C_1 : 7; // 0x2C(0x1)
	uint8_t Pad_0x2D[0x3]; // 0x2D(0x3)
	struct FName CollisionProfile; // 0x30(0x8)
	struct TSoftObjectPtr<AReflectionCapture> ManuallySpecifyReflectionCapture; // 0x38(0x28)
	struct TArray<struct TSoftObjectPtr<UMaterialInterface>> OverrideMaterials; // 0x60(0x10)
	struct TArray<struct TSoftObjectPtr<URuntimeVirtualTexture>> RuntimeVirtualTextures; // 0x70(0x10)
	int8_t VirtualTextureLodBias; // 0x80(0x1)
	int8_t VirtualTextureCullMips; // 0x81(0x1)
	int8_t VirtualTextureMinCoverage; // 0x82(0x1)
	ERuntimeVirtualTextureMainPassType VirtualTextureRenderPassType; // 0x83(0x1)
	ERuntimeVirtualTextureLayerType VirtualTextureRenderLayerType; // 0x84(0x1)
	uint8_t bHiddenInGame : 1; // 0x85(0x1), Mask(0x1)
	uint8_t BitPad_0x85_1 : 7; // 0x85(0x1)
	uint8_t bOverrideCullScreenSize : 1; // 0x86(0x1), Mask(0x1)
	uint8_t BitPad_0x86_1 : 7; // 0x86(0x1)
	uint8_t bCastShadow : 1; // 0x87(0x1), Mask(0x1)
	uint8_t BitPad_0x87_1 : 7; // 0x87(0x1)
	uint8_t bCastDynamicShadow : 1; // 0x88(0x1), Mask(0x1)
	uint8_t BitPad_0x88_1 : 7; // 0x88(0x1)
	uint8_t bCastStaticShadow : 1; // 0x89(0x1), Mask(0x1)
	uint8_t BitPad_0x89_1 : 7; // 0x89(0x1)
	uint8_t bReceiveShadow : 1; // 0x8A(0x1), Mask(0x1)
	uint8_t BitPad_0x8A_1 : 7; // 0x8A(0x1)
	uint8_t bUseAsOccluder : 1; // 0x8B(0x1), Mask(0x1)
	uint8_t BitPad_0x8B_1 : 7; // 0x8B(0x1)
	uint8_t bNotAsSocOccluder : 1; // 0x8C(0x1), Mask(0x1)
	uint8_t BitPad_0x8C_1 : 7; // 0x8C(0x1)
	uint8_t Pad_0x8D[0x3]; // 0x8D(0x3)
	float CullingScreenSize; // 0x90(0x4)
	float CullingDistance; // 0x94(0x4)
};

// Object: ScriptStruct GeneBatch.GeneOpenWorldGridData
// Size: 0x40 (Inherited: 0x0)
struct FGeneOpenWorldGridData
{
	struct FIntPoint GridKey; // 0x0(0x8)
	struct FBox GridBox; // 0x8(0x1C)
	struct FName GridLayerName; // 0x24(0x8)
	uint8_t Pad_0x2C[0x4]; // 0x2C(0x4)
	struct FString POIName; // 0x30(0x10)
};

// Object: ScriptStruct GeneBatch.GeneBatchTableRowWhyNotBatchMaterialDetail
// Size: 0xE0 (Inherited: 0x8)
struct FGeneBatchTableRowWhyNotBatchMaterialDetail : FTableRowBase
{
	struct FGuid Guid; // 0x8(0x10)
	EGeneBatchWhyNotBatchDetailType Type; // 0x18(0x1)
	uint8_t Pad_0x19[0x3]; // 0x19(0x3)
	struct FGuid ParentGuid; // 0x1C(0x10)
	struct FName BaseMaterial; // 0x2C(0x8)
	int32_t MaterialParameterClusterLevelIndex; // 0x34(0x4)
	struct FGeneBatchMaterialParameterValuePack MaterialParameters; // 0x38(0x50)
	struct TArray<struct FGeneBatchTextureChannelUsage> ChannelUsages_Flatten; // 0x88(0x10)
	int32_t AtlasGroupKey; // 0x98(0x4)
	uint8_t Pad_0x9C[0x4]; // 0x9C(0x4)
	struct TArray<EGeneBatchWhyNotBatchDetailType> UnitAtlasMaterialReasons; // 0xA0(0x10)
	struct TArray<int32_t> UnitAtlasMaterialReasonStartIndices; // 0xB0(0x10)
	struct TArray<int32_t> UnitAtlasMaterialReasonEndIndices; // 0xC0(0x10)
	struct TArray<struct FName> Units; // 0xD0(0x10)
};

// Object: ScriptStruct GeneBatch.GeneBatchSMCProperties
// Size: 0x40 (Inherited: 0x0)
struct FGeneBatchSMCProperties
{
	struct FGeneBatchMeshMapBuildDataKey MeshMapBuildDataKey; // 0x0(0x20)
	struct FGeneBatchReflectionCaptureKey ReflectionCaptureKey; // 0x20(0x1C)
	uint8_t bHiddenInGame : 1; // 0x3C(0x1), Mask(0x1)
	uint8_t BitPad_0x3C_1 : 7; // 0x3C(0x1)
	uint8_t Pad_0x3D[0x3]; // 0x3D(0x3)
};

// Object: ScriptStruct GeneBatch.GeneBatchTableRowWhyNotBatchComponentDetail
// Size: 0x138 (Inherited: 0x8)
struct FGeneBatchTableRowWhyNotBatchComponentDetail : FTableRowBase
{
	struct FGuid Guid; // 0x8(0x10)
	EGeneBatchWhyNotBatchDetailType Type; // 0x18(0x1)
	uint8_t Pad_0x19[0x3]; // 0x19(0x3)
	struct FGuid ParentGuid; // 0x1C(0x10)
	int32_t HLODIndex; // 0x2C(0x4)
	struct TArray<struct FName> StaticMeshTags; // 0x30(0x10)
	struct TArray<struct FName> ComponentTags; // 0x40(0x10)
	struct FName MeshName; // 0x50(0x8)
	struct FIntPoint GridLevel; // 0x58(0x8)
	struct FGeneBatchSMCProperties SMCProperties; // 0x60(0x40)
	struct FName POI; // 0xA0(0x8)
	struct FString LevelKey; // 0xA8(0x10)
	int32_t VertexCount; // 0xB8(0x4)
	struct FVector BoundSize; // 0xBC(0xC)
	struct FBox2D LightMapUVRange; // 0xC8(0x14)
	int32_t HLODLevel; // 0xDC(0x4)
	int32_t OriginalMeshKey; // 0xE0(0x4)
	uint8_t bUseOriginalMesh : 1; // 0xE4(0x1), Mask(0x1)
	uint8_t BitPad_0xE4_1 : 7; // 0xE4(0x1)
	uint8_t Pad_0xE5[0x3]; // 0xE5(0x3)
	int32_t MaterialGroupKey; // 0xE8(0x4)
	uint8_t Pad_0xEC[0x4]; // 0xEC(0x4)
	struct TArray<struct FName> OverrideMaterials; // 0xF0(0x10)
	struct TArray<int32_t> VertexColorIndices; // 0x100(0x10)
	int32_t MergeMeshTypeKey; // 0x110(0x4)
	int32_t ISMKey; // 0x114(0x4)
	int32_t OriginalISMKey; // 0x118(0x4)
	uint8_t bIgnoreTransform : 1; // 0x11C(0x1), Mask(0x1)
	uint8_t BitPad_0x11C_1 : 7; // 0x11C(0x1)
	uint8_t bCastShadow : 1; // 0x11D(0x1), Mask(0x1)
	uint8_t BitPad_0x11D_1 : 7; // 0x11D(0x1)
	uint8_t bCastDynamicShadow : 1; // 0x11E(0x1), Mask(0x1)
	uint8_t BitPad_0x11E_1 : 7; // 0x11E(0x1)
	uint8_t bCastStaticShadow : 1; // 0x11F(0x1), Mask(0x1)
	uint8_t BitPad_0x11F_1 : 7; // 0x11F(0x1)
	uint8_t bReuseMesh : 1; // 0x120(0x1), Mask(0x1)
	uint8_t BitPad_0x120_1 : 7; // 0x120(0x1)
	uint8_t Pad_0x121[0x7]; // 0x121(0x7)
	struct TArray<struct FName> Units; // 0x128(0x10)
};

// Object: ScriptStruct GeneBatch.GeneBatchStaticMeshProxyInputTableRow
// Size: 0x18 (Inherited: 0x8)
struct FGeneBatchStaticMeshProxyInputTableRow : FTableRowBase
{
	struct TArray<struct FGeneBatchStaticMeshProxyInputElement> InputElements; // 0x8(0x10)
};

// Object: ScriptStruct GeneBatch.GeneBatchStaticMeshProxyInputElement
// Size: 0x8 (Inherited: 0x0)
struct FGeneBatchStaticMeshProxyInputElement
{
	int32_t IndexInStaticMeshTable; // 0x0(0x4)
	int32_t LodIndex; // 0x4(0x4)
};

// Object: ScriptStruct GeneBatch.GeneBatchTableRowConvertedPrimitive
// Size: 0x40 (Inherited: 0x8)
struct FGeneBatchTableRowConvertedPrimitive : FTableRowBase
{
	struct TArray<struct TSoftObjectPtr<UPrimitiveComponent>> SourcePrimitives; // 0x8(0x10)
	struct TSoftObjectPtr<UPrimitiveComponent> TargetPrimitive; // 0x18(0x28)
};

// Object: ScriptStruct GeneBatch.GeneBatchPrimitiveHLODParentDataRow
// Size: 0x40 (Inherited: 0x8)
struct FGeneBatchPrimitiveHLODParentDataRow : FTableRowBase
{
	struct TLazyObjectPtr<struct UPrimitiveComponent> Primitive; // 0x8(0x1C)
	struct TLazyObjectPtr<struct UPrimitiveComponent> Parent; // 0x24(0x1C)
};

// Object: ScriptStruct GeneBatch.GeneBatchMeshComponentDataRow
// Size: 0x40 (Inherited: 0x8)
struct FGeneBatchMeshComponentDataRow : FTableRowBase
{
	uint8_t bStandalone : 1; // 0x8(0x1), Mask(0x1)
	uint8_t BitPad_0x8_1 : 7; // 0x8(0x1)
	uint8_t Pad_0x9[0x7]; // 0x9(0x7)
	struct TArray<struct FGeneBatchRuntimeMergingMeshInputLOD> LODs; // 0x10(0x10)
	struct FGuid MeshGuid; // 0x20(0x10)
	struct TArray<struct FGeneBatchMaterial> GeneBatchMaterials; // 0x30(0x10)
};

// Object: ScriptStruct GeneBatch.GeneBatchMaterial
// Size: 0x38 (Inherited: 0x0)
struct FGeneBatchMaterial
{
	struct TSoftObjectPtr<UMaterialInterface> MaterialInstance; // 0x0(0x28)
	struct TArray<struct FGeneBatchMaterialTextureParam> TextureParamAndTextureGuid; // 0x28(0x10)
};

// Object: ScriptStruct GeneBatch.GeneBatchMaterialTextureParam
// Size: 0x18 (Inherited: 0x0)
struct FGeneBatchMaterialTextureParam
{
	struct FName TextureParamName; // 0x0(0x8)
	struct FGuid TextureGuid; // 0x8(0x10)
};

// Object: ScriptStruct GeneBatch.GeneBatchRuntimeMergingMeshInputLOD
// Size: 0x10 (Inherited: 0x0)
struct FGeneBatchRuntimeMergingMeshInputLOD
{
	struct TArray<struct FGeneBatchRuntimeMergingMeshInputMergeDrawSection> MergeDrawSections; // 0x0(0x10)
};

// Object: ScriptStruct GeneBatch.GeneBatchRuntimeMergingMeshInputMergeDrawSection
// Size: 0x18 (Inherited: 0x0)
struct FGeneBatchRuntimeMergingMeshInputMergeDrawSection
{
	struct TArray<struct FGeneBatchRuntimeMergingMeshInputElement> Elements; // 0x0(0x10)
	int32_t MaterialIndex; // 0x10(0x4)
	uint8_t Pad_0x14[0x4]; // 0x14(0x4)
};

// Object: ScriptStruct GeneBatch.GeneBatchRuntimeMergingMeshInputElement
// Size: 0x60 (Inherited: 0x0)
struct FGeneBatchRuntimeMergingMeshInputElement
{
	int32_t IndexInStaticMeshTable; // 0x0(0x4)
	int32_t LodIndex; // 0x4(0x4)
	int32_t DrawSectionIndex; // 0x8(0x4)
	uint8_t Pad_0xC[0x4]; // 0xC(0x4)
	struct FTransform StaticMeshTransform; // 0x10(0x30)
	int32_t LocalMaterialIndex; // 0x40(0x4)
	uint8_t bHasLightMap : 1; // 0x44(0x1), Mask(0x1)
	uint8_t BitPad_0x44_1 : 7; // 0x44(0x1)
	uint8_t Pad_0x45[0x3]; // 0x45(0x3)
	struct FVector2D CoordinateBias; // 0x48(0x8)
	struct FVector2D CoordinateScale; // 0x50(0x8)
	uint8_t Pad_0x58[0x8]; // 0x58(0x8)
};

// Object: ScriptStruct GeneBatch.GeneAtlasResultMap
// Size: 0x68 (Inherited: 0x0)
struct FGeneAtlasResultMap
{
	struct FIntPoint POTBoundingResolution; // 0x0(0x8)
	struct FIntPoint BoundingResolution; // 0x8(0x8)
	struct FIntPoint NetResolution; // 0x10(0x8)
	struct TArray<struct FGeneAtlasResultRegion> Regions; // 0x18(0x10)
	struct TSoftObjectPtr<UTexture> EditorBakedMapTexture; // 0x28(0x28)
	EMaterialAtlasUsage MaterialAtlasUsage; // 0x50(0x1)
	EGeneBatchBakeMethod BakeMethod; // 0x51(0x1)
	uint8_t Pad_0x52[0x2]; // 0x52(0x2)
	struct FGuid DataHash; // 0x54(0x10)
	uint8_t bAllowNonSquareAtlas : 1; // 0x64(0x1), Mask(0x1)
	uint8_t BitPad_0x64_1 : 7; // 0x64(0x1)
	uint8_t Pad_0x65[0x3]; // 0x65(0x3)
};

// Object: ScriptStruct GeneBatch.GeneBatchTextureAtlasTableRow
// Size: 0x80 (Inherited: 0x8)
struct FGeneBatchTextureAtlasTableRow : FTableRowBase
{
	struct FGuid Guid; // 0x8(0x10)
	struct FGeneAtlasResultMap GeneAtlasResultMap; // 0x18(0x68)
};

// Object: ScriptStruct GeneBatch.GeneAtlasResultRegion
// Size: 0x50 (Inherited: 0x0)
struct FGeneAtlasResultRegion
{
	struct FIntPoint Location; // 0x0(0x8)
	struct FIntPoint Resolution; // 0x8(0x8)
	struct TSoftObjectPtr<UTexture> SourceTexture; // 0x10(0x28)
	int32_t SourceMipIndex; // 0x38(0x4)
	EMaterialAtlasUsage MaterialAtlasUsage; // 0x3C(0x1)
	uint8_t Pad_0x3D[0x3]; // 0x3D(0x3)
	struct FGuid InputTextureDataHash; // 0x40(0x10)
};

// Object: ScriptStruct GeneBatch.GeneBatchStaticMeshTableRow
// Size: 0x30 (Inherited: 0x8)
struct FGeneBatchStaticMeshTableRow : FTableRowBase
{
	struct TSoftObjectPtr<UStaticMesh> StaticMesh; // 0x8(0x28)
};

// Object: ScriptStruct GeneBatch.GeneBakeTableRowResultPrimitives
// Size: 0x68 (Inherited: 0x8)
struct FGeneBakeTableRowResultPrimitives : FTableRowBase
{
	struct TSoftObjectPtr<AActor> ActorResource; // 0x8(0x28)
	struct TSoftObjectPtr<UMaterial> BaseMaterial; // 0x30(0x28)
	struct TArray<struct FGeneBakeTableRowResultPrimitive> Primitives; // 0x58(0x10)
};

// Object: ScriptStruct GeneBatch.GeneBakeTableRowResultPrimitive
// Size: 0x78 (Inherited: 0x8)
struct FGeneBakeTableRowResultPrimitive : FTableRowBase
{
	struct TSoftObjectPtr<UStaticMesh> Mesh; // 0x8(0x28)
	struct FVector Location; // 0x30(0xC)
	uint8_t Pad_0x3C[0x4]; // 0x3C(0x4)
	struct TArray<struct FGeneBakeTableRowResultPrimitveTexture> UseTextures; // 0x40(0x10)
	struct TSoftObjectPtr<UMaterialInstance> MaterialInstance; // 0x50(0x28)
};

// Object: ScriptStruct GeneBatch.GeneAtlasResultAtlas
// Size: 0xA8 (Inherited: 0x0)
struct FGeneAtlasResultAtlas
{
	struct FGuid OwnerGroupGuid; // 0x0(0x10)
	int32_t AssetNum; // 0x10(0x4)
	uint8_t Pad_0x14[0x4]; // 0x14(0x4)
	struct FGeneBatchTextureChannelUsage ChannelUsage; // 0x18(0x60)
	struct TArray<struct FGeneAtlasResultMap> maps; // 0x78(0x10)
	EGeneBatchBakeMethod BakeMethod; // 0x88(0x1)
	uint8_t Pad_0x89[0x7]; // 0x89(0x7)
	struct TArray<struct FGuid> TextureAtlasGuids; // 0x90(0x10)
	int32_t StrictAlignGroupIndex; // 0xA0(0x4)
	uint8_t Pad_0xA4[0x4]; // 0xA4(0x4)
};

// Object: ScriptStruct GeneBatch.GeneBakeTableRowResultPrimitveTexture
// Size: 0x108 (Inherited: 0x8)
struct FGeneBakeTableRowResultPrimitveTexture : FTableRowBase
{
	struct FGeneAtlasResultAtlas Atlas; // 0x8(0xA8)
	int32_t MapIndex; // 0xB0(0x4)
	uint8_t Pad_0xB4[0x4]; // 0xB4(0x4)
	struct FGeneAtlasResultRegion Region; // 0xB8(0x50)
};

// Object: ScriptStruct GeneBatch.GeneBatchTableRowResourceConfig
// Size: 0x38 (Inherited: 0x8)
struct FGeneBatchTableRowResourceConfig : FTableRowBase
{
	struct TSoftObjectPtr<UObject> Object; // 0x8(0x28)
	int32_t TextureSize; // 0x30(0x4)
	uint8_t Pad_0x34[0x4]; // 0x34(0x4)
};

// Object: ScriptStruct GeneBatch.GeneBatchTableRowResultMaterial
// Size: 0x180 (Inherited: 0x8)
struct FGeneBatchTableRowResultMaterial : FTableRowBase
{
	struct TArray<struct FGeneBatchResultAtlasMaterial> AtlasMaterials; // 0x8(0x10)
	struct TSoftObjectPtr<UMaterial> BaseMaterial; // 0x18(0x28)
	struct FGeneAtlasMapsArrayLayers AtlasMapsArrayLayers; // 0x40(0x10)
	struct FGeneBatchMaterialParameterValuePack Parameters; // 0x50(0x50)
	struct TSoftObjectPtr<UMaterialInterface> ParentAtlasMaterial; // 0xA0(0x28)
	struct FGeneBatchMaterialParameterValuePack StaticParameters; // 0xC8(0x50)
	struct FMaterialInstanceBasePropertyOverrides BasePropertyOverrides; // 0x118(0x28)
	struct FStaticParameterSet StaticParameterSet; // 0x140(0x40)
};

// Object: ScriptStruct GeneBatch.GeneBatchResultAtlasMaterial
// Size: 0x188 (Inherited: 0x0)
struct FGeneBatchResultAtlasMaterial
{
	struct TSoftObjectPtr<UMaterialInstance> AtlasMaterial; // 0x0(0x28)
	struct TSet<struct TSoftObjectPtr<UMaterialInterface>> LocalUniqueSourceMaterialsSet; // 0x28(0x50)
	struct TMap<struct FName, struct FGeneBatchIntArray> ResolvedAtlasBatchIndexerLayers; // 0x78(0x50)
	struct TArray<struct FGeneAtlasResultRegionGroup> AtlasRegionGroupLayers; // 0xC8(0x10)
	struct TMap<struct FName, int32_t> ResolvedAtlasBatchIndirectIndex; // 0xD8(0x50)
	struct TArray<struct FGeneBatchIntArray> AtlasBatchIndexerLayers; // 0x128(0x10)
	struct TArray<struct FGeneAtlasResultMapArray> ParameterAtlasMapGroupLayers; // 0x138(0x10)
	struct TArray<struct FLinearColor> AtlasBatchNumericData; // 0x148(0x10)
	struct FString AtlasMaterialObjectName; // 0x158(0x10)
	struct FString AtlasMaterialPackageName; // 0x168(0x10)
	struct FGuid DataHash; // 0x178(0x10)
};

// Object: ScriptStruct GeneBatch.GeneAtlasResultMapArray
// Size: 0x10 (Inherited: 0x0)
struct FGeneAtlasResultMapArray
{
	struct TArray<struct FGeneAtlasResultMap> AtlasMaps; // 0x0(0x10)
};

// Object: ScriptStruct GeneBatch.GeneAtlasResultRegionGroup
// Size: 0x10 (Inherited: 0x0)
struct FGeneAtlasResultRegionGroup
{
	struct TArray<struct FGeneAtlasResultRegion> Regions; // 0x0(0x10)
};

// Object: ScriptStruct GeneBatch.GeneAtlasTableRowResultAtlasMaterialGroup
// Size: 0x80 (Inherited: 0x8)
struct FGeneAtlasTableRowResultAtlasMaterialGroup : FTableRowBase
{
	struct FGuid Guid; // 0x8(0x10)
	struct TMap<struct FGeneBatchTextureChannelUsage, struct FGeneAtlasResultAtlas> ChannelUsageAtlases; // 0x18(0x50)
	int32_t AtlasGroupKey; // 0x68(0x4)
	uint8_t bIgnoreAnisotropic : 1; // 0x6C(0x1), Mask(0x1)
	uint8_t BitPad_0x6C_1 : 7; // 0x6C(0x1)
	EPixelFormat ForcePixelFormat; // 0x6D(0x1)
	uint8_t Pad_0x6E[0x2]; // 0x6E(0x2)
	struct TArray<struct FGeneAtlasStrictAlignGroup> StrictAlignGroups; // 0x70(0x10)
};

// Object: ScriptStruct GeneBatch.GeneAtlasStrictAlignGroup
// Size: 0x20 (Inherited: 0x0)
struct FGeneAtlasStrictAlignGroup
{
	struct TArray<struct FGeneBatchTextureChannelUsage> ChannelUsages; // 0x0(0x10)
	struct TArray<int32_t> MapIndices; // 0x10(0x10)
};

// Object: ScriptStruct GeneBatch.GeneBatchTableRowParameterOptimization
// Size: 0x88 (Inherited: 0x8)
struct FGeneBatchTableRowParameterOptimization : FTableRowBase
{
	struct TArray<int32_t> Sizes; // 0x8(0x10)
	struct TArray<int32_t> LoadPattern; // 0x18(0x10)
	struct TArray<int32_t> ISMNums; // 0x28(0x10)
	int32_t EstimateMemoryOff; // 0x38(0x4)
	int32_t EstimateMemoryOn; // 0x3C(0x4)
	int32_t EstimateMemoryDiff; // 0x40(0x4)
	int32_t EstimateDrawCallAvgOff; // 0x44(0x4)
	int32_t EstimateDrawCallAvgOn; // 0x48(0x4)
	int32_t EstimateDrawCallAvgDiff; // 0x4C(0x4)
	int32_t EstimateDrawCallAvgOff150; // 0x50(0x4)
	int32_t EstimateDrawCallAvgOn150; // 0x54(0x4)
	int32_t EstimateDrawCallAvgDiff150; // 0x58(0x4)
	int32_t EstimateDrawCallMaxOff; // 0x5C(0x4)
	int32_t EstimateDrawCallMaxOn; // 0x60(0x4)
	uint8_t Pad_0x64[0x4]; // 0x64(0x4)
	struct TArray<int32_t> NumComponentsEachHLOD; // 0x68(0x10)
	struct TArray<int32_t> NumISMsEachHLOD; // 0x78(0x10)
};

// Object: ScriptStruct GeneBatch.GeneBatchTableRowWhyNotBatchStats
// Size: 0x30 (Inherited: 0x8)
struct FGeneBatchTableRowWhyNotBatchStats : FTableRowBase
{
	int32_t HLODLevel; // 0x8(0x4)
	uint8_t Pad_0xC[0x4]; // 0xC(0x4)
	struct TArray<struct FGeneBatchBatchableGroup> Groups; // 0x10(0x10)
	struct TArray<struct FGeneBatchWhyNotBatchPair> GroupPairs; // 0x20(0x10)
};

// Object: ScriptStruct GeneBatch.GeneBatchWhyNotBatchPair
// Size: 0x20 (Inherited: 0x0)
struct FGeneBatchWhyNotBatchPair
{
	int32_t Group1; // 0x0(0x4)
	int32_t Group2; // 0x4(0x4)
	EGeneBatchWhyNotBatchReason Reason; // 0x8(0x1)
	uint8_t Pad_0x9[0x7]; // 0x9(0x7)
	struct TArray<struct FGeneBatchWhyNotBatchPairInDrawSection> DrawSectionPairs; // 0x10(0x10)
};

// Object: ScriptStruct GeneBatch.GeneBatchWhyNotBatchPairInDrawSection
// Size: 0x18 (Inherited: 0x0)
struct FGeneBatchWhyNotBatchPairInDrawSection
{
	int32_t PrimitiveIndex1; // 0x0(0x4)
	int32_t PrimitiveIndex2; // 0x4(0x4)
	struct TArray<EGeneBatchWhyNotBatchReason> Reasons; // 0x8(0x10)
};

// Object: ScriptStruct GeneBatch.GeneBatchMeshInfo
// Size: 0x18 (Inherited: 0x0)
struct FGeneBatchMeshInfo
{
	struct FGuid MeshGuid; // 0x0(0x10)
	int32_t LodIndex; // 0x10(0x4)
	int32_t SectionIndex; // 0x14(0x4)
};

// Object: ScriptStruct GeneBatch.GeneBatchBatchableGroup
// Size: 0x48 (Inherited: 0x0)
struct FGeneBatchBatchableGroup
{
	struct TArray<struct FName> Primitives; // 0x0(0x10)
	struct TArray<int32_t> LODIndices; // 0x10(0x10)
	struct TArray<int32_t> SectionIndices; // 0x20(0x10)
	struct FGeneBatchMeshInfo MeshInfo; // 0x30(0x18)
};

// Object: ScriptStruct GeneBatch.GeneBatchWhyNotBatchPairInDrawSectionItem
// Size: 0x10 (Inherited: 0x0)
struct FGeneBatchWhyNotBatchPairInDrawSectionItem
{
	struct FName Primitive; // 0x0(0x8)
	int32_t LodIndex; // 0x8(0x4)
	int32_t SectionIndex; // 0xC(0x4)
};

// Object: ScriptStruct GeneBatch.GeneBatchTableRowMergeFailureData
// Size: 0x30 (Inherited: 0x8)
struct FGeneBatchTableRowMergeFailureData : FTableRowBase
{
	struct FString MergeFailureReason; // 0x8(0x10)
	int32_t HLODLayer; // 0x18(0x4)
	int32_t PairNum; // 0x1C(0x4)
	struct TArray<struct FString> PrimitivePairs; // 0x20(0x10)
};

// Object: ScriptStruct GeneBatch.MergeFailureDetail
// Size: 0x18 (Inherited: 0x0)
struct FMergeFailureDetail
{
	int32_t PairNum; // 0x0(0x4)
	uint8_t Pad_0x4[0x4]; // 0x4(0x4)
	struct TArray<struct FString> PrimitivePairs; // 0x8(0x10)
};

// Object: ScriptStruct GeneBatch.GeneBatchTableRowResultDrawSection
// Size: 0xA8 (Inherited: 0x8)
struct FGeneBatchTableRowResultDrawSection : FTableRowBase
{
	struct FName ActorResource; // 0x8(0x8)
	struct FName Primitive; // 0x10(0x8)
	struct TSoftObjectPtr<UStaticMesh> Mesh; // 0x18(0x28)
	struct TSoftObjectPtr<UMaterial> BaseMaterial; // 0x40(0x28)
	struct TSoftObjectPtr<UMaterialInterface> Material; // 0x68(0x28)
	struct FGuid InstancingGuid; // 0x90(0x10)
	int32_t InstancingNum; // 0xA0(0x4)
	uint8_t Pad_0xA4[0x4]; // 0xA4(0x4)
};

// Object: ScriptStruct GeneBatch.GeneBatchTableRowResultParameterTexture
// Size: 0x120 (Inherited: 0x8)
struct FGeneBatchTableRowResultParameterTexture : FTableRowBase
{
	struct FGuid Guid; // 0x8(0x10)
	struct TSet<struct FGuid> OwnerGuid; // 0x18(0x50)
	int32_t AssetNum; // 0x68(0x4)
	uint8_t Pad_0x6C[0x4]; // 0x6C(0x4)
	struct FGeneBatchTextureChannelUsage ChannelUsage; // 0x70(0x60)
	struct TSet<struct TSoftObjectPtr<UTexture>> MergeAssets; // 0xD0(0x50)
};

// Object: ScriptStruct GeneBatch.GeneBatchPrimitiveInstanceCustomData
// Size: 0x18 (Inherited: 0x0)
struct FGeneBatchPrimitiveInstanceCustomData
{
	int32_t LodIndex; // 0x0(0x4)
	int32_t SectionIndex; // 0x4(0x4)
	struct TArray<float> Data; // 0x8(0x10)
};

// Object: ScriptStruct GeneBatch.GeneBatchTableRowResultMesReuseLOD
// Size: 0x10 (Inherited: 0x0)
struct FGeneBatchTableRowResultMesReuseLOD
{
	struct TArray<struct FColor> VertexColors; // 0x0(0x10)
};

// Object: ScriptStruct GeneBatch.GeneBatchTableRowInputTexture
// Size: 0xB8 (Inherited: 0x8)
struct FGeneBatchTableRowInputTexture : FTableRowBase
{
	struct FName TextureName; // 0x8(0x8)
	struct TSoftObjectPtr<UTexture> Texture; // 0x10(0x28)
	struct FGeneBatchTextureChannelUsage ChannelUsage; // 0x38(0x60)
	struct FIntPoint Resolution; // 0x98(0x8)
	struct FIntPoint OriginalResolution; // 0xA0(0x8)
	struct FGuid DataHash; // 0xA8(0x10)
};

// Object: ScriptStruct GeneBatch.GeneBatchInputMaterialChannelUsages
// Size: 0x10 (Inherited: 0x0)
struct FGeneBatchInputMaterialChannelUsages
{
	struct TArray<struct FGeneBatchTextureChannelUsage> ChannelUsages_Flattened; // 0x0(0x10)
};

// Object: ScriptStruct GeneBatch.GeneBatchTableRowInputMaterial
// Size: 0x170 (Inherited: 0x8)
struct FGeneBatchTableRowInputMaterial : FTableRowBase
{
	struct FName MaterialName; // 0x8(0x8)
	struct TSoftObjectPtr<UMaterialInterface> MaterialInterface; // 0x10(0x28)
	struct FName BaseMaterial; // 0x38(0x8)
	struct TMap<int32_t, struct FGeneBatchMaterialParameterValuePack> ClusteredParameters; // 0x40(0x50)
	struct FLinearColor UVScaleOffset; // 0x90(0x10)
	struct TArray<int32_t> UsedUVs; // 0xA0(0x10)
	uint8_t bIsOverrideMaterial : 1; // 0xB0(0x1), Mask(0x1)
	uint8_t BitPad_0xB0_1 : 7; // 0xB0(0x1)
	uint8_t Pad_0xB1[0x7]; // 0xB1(0x7)
	struct TSoftObjectPtr<UMaterialInterface> SourceMaterialInterface; // 0xB8(0x28)
	struct FName OverrideMaterialName; // 0xE0(0x8)
	struct TMap<int32_t, struct FGeneBatchInputMaterialChannelUsages> ClusteredChannelUsages_Flattened; // 0xE8(0x50)
	struct TArray<struct FName> Textures_Flattened; // 0x138(0x10)
	struct TArray<struct FLinearColor> NumericData_Flattened; // 0x148(0x10)
	int32_t Layer0NumericDataSize; // 0x158(0x4)
	struct FGuid DataHash; // 0x15C(0x10)
	uint8_t Pad_0x16C[0x4]; // 0x16C(0x4)
};

// Object: ScriptStruct GeneBatch.GeneBatchISMProperties
// Size: 0xD8 (Inherited: 0x0)
struct FGeneBatchISMProperties
{
	struct FInstancedStaticMeshComponentProperties Properties; // 0x0(0x98)
	struct FGeneBatchSMCProperties SMCProperties; // 0x98(0x40)
};

// Object: ScriptStruct GeneBatch.GeneBatchTableRowInputComponent
// Size: 0x270 (Inherited: 0x8)
struct FGeneBatchTableRowInputComponent : FTableRowBase
{
	struct FName PrimitiveName; // 0x8(0x8)
	struct FName Level; // 0x10(0x8)
	struct TArray<struct FGeneBatchTableRowInputComponentLOD> LODs; // 0x18(0x10)
	uint8_t Pad_0x28[0x8]; // 0x28(0x8)
	struct FTransform Transform; // 0x30(0x30)
	struct FBoxSphereBounds Bounds; // 0x60(0x1C)
	float BoundsScale; // 0x7C(0x4)
	float CullScreenSize; // 0x80(0x4)
	float CullDistance; // 0x84(0x4)
	struct FName StreamingLayer; // 0x88(0x8)
	struct FIntPoint StreamingLayerGrid; // 0x90(0x8)
	struct FName Mesh; // 0x98(0x8)
	struct TArray<struct FName> Materials; // 0xA0(0x10)
	struct FGeneBatchSMCProperties SMCProperties; // 0xB0(0x40)
	struct FGeneBatchISMProperties ISMProperties; // 0xF0(0xD8)
	uint8_t bCanClusterISM : 1; // 0x1C8(0x1), Mask(0x1)
	uint8_t BitPad_0x1C8_1 : 7; // 0x1C8(0x1)
	uint8_t bCastShadow : 1; // 0x1C9(0x1), Mask(0x1)
	uint8_t BitPad_0x1C9_1 : 7; // 0x1C9(0x1)
	uint8_t bCastDynamicShadow : 1; // 0x1CA(0x1), Mask(0x1)
	uint8_t BitPad_0x1CA_1 : 7; // 0x1CA(0x1)
	uint8_t bCastStaticShadow : 1; // 0x1CB(0x1), Mask(0x1)
	uint8_t BitPad_0x1CB_1 : 7; // 0x1CB(0x1)
	uint8_t Pad_0x1CC[0x4]; // 0x1CC(0x4)
	struct TSoftObjectPtr<ULocalLightGroupBake> LocalLightGroupBake; // 0x1D0(0x28)
	struct TArray<struct FGeneBatchPrimitiveInstanceLODData> PrimitiveInstanceLODData; // 0x1F8(0x10)
	struct TArray<struct FGeneBatchPrimitiveInstanceLODData> PerInstancePrimitiveInstanceLODData; // 0x208(0x10)
	struct TArray<struct FName> StaticMeshTags; // 0x218(0x10)
	struct TArray<struct FName> ComponentTags; // 0x228(0x10)
	struct FName MeshGroup; // 0x238(0x8)
	int32_t ISMInstanceNum; // 0x240(0x4)
	uint8_t Pad_0x244[0x4]; // 0x244(0x4)
	struct TArray<struct FBoxSphereBounds> ISMSubBounds; // 0x248(0x10)
	struct FString LevelKey; // 0x258(0x10)
	struct FName POI; // 0x268(0x8)
};

// Object: ScriptStruct GeneBatch.GeneBatchVertexColorData
// Size: 0x30 (Inherited: 0x0)
struct FGeneBatchVertexColorData
{
	struct FGuid Guid; // 0x0(0x10)
	struct FName SourceComponent; // 0x10(0x8)
	int32_t LodIndex; // 0x18(0x4)
	int32_t NumVertices; // 0x1C(0x4)
	uint8_t Pad_0x20[0x10]; // 0x20(0x10)
};

// Object: ScriptStruct GeneBatch.GeneBatchTableRowInputComponentLOD
// Size: 0x40 (Inherited: 0x0)
struct FGeneBatchTableRowInputComponentLOD
{
	struct TArray<struct FGeneBatchTableRowInputComponentSection> DrawSections; // 0x0(0x10)
	struct FGeneBatchVertexColorData VertexColorData; // 0x10(0x30)
};

// Object: ScriptStruct GeneBatch.GeneBatchTableRowInputComponentSection
// Size: 0x2C (Inherited: 0x0)
struct FGeneBatchTableRowInputComponentSection
{
	struct FName Primitive; // 0x0(0x8)
	int32_t LodIndex; // 0x8(0x4)
	int32_t SectionIndex; // 0xC(0x4)
	struct FName Mesh; // 0x10(0x8)
	struct FName Material; // 0x18(0x8)
	int32_t NumVertices; // 0x20(0x4)
	int32_t NumInstances; // 0x24(0x4)
	uint8_t bCastShadow : 1; // 0x28(0x1), Mask(0x1)
	uint8_t BitPad_0x28_1 : 7; // 0x28(0x1)
	uint8_t Pad_0x29[0x3]; // 0x29(0x3)
};

// Object: ScriptStruct GeneBatch.GeneBatchTableRowInputMesh
// Size: 0xD0 (Inherited: 0x8)
struct FGeneBatchTableRowInputMesh : FTableRowBase
{
	struct FName MeshName; // 0x8(0x8)
	struct TSoftObjectPtr<UStaticMesh> Mesh; // 0x10(0x28)
	struct TArray<struct FName> StaticMeshTags; // 0x38(0x10)
	int32_t LightMapCoordinateIndex; // 0x48(0x4)
	int32_t NumUsedUVs; // 0x4C(0x4)
	int32_t TotalNumVertices; // 0x50(0x4)
	uint8_t Pad_0x54[0x4]; // 0x54(0x4)
	struct TArray<int32_t> NumSectionsEachLOD; // 0x58(0x10)
	struct TArray<int32_t> NumVerticesEachLOD; // 0x68(0x10)
	struct TArray<float> LODScreenSizes; // 0x78(0x10)
	struct TArray<float> LODDrawDistances; // 0x88(0x10)
	struct FBoxSphereBounds Bounds; // 0x98(0x1C)
	struct FName OcclusionMesh; // 0xB4(0x8)
	uint8_t bSelfAsOccluder : 1; // 0xBC(0x1), Mask(0x1)
	uint8_t BitPad_0xBC_1 : 7; // 0xBC(0x1)
	uint8_t Pad_0xBD[0x3]; // 0xBD(0x3)
	struct FGuid DataHash; // 0xC0(0x10)
};

// Object: ScriptStruct GeneBatch.GeneBatchTableRowInputLevel
// Size: 0x58 (Inherited: 0x8)
struct FGeneBatchTableRowInputLevel : FTableRowBase
{
	struct FName LevelName; // 0x8(0x8)
	struct TSoftObjectPtr<UWorld> Level; // 0x10(0x28)
	struct FString LevelPath; // 0x38(0x10)
	struct FGuid DataHash; // 0x48(0x10)
};

// Object: ScriptStruct GeneBatch.GeneBatchAllowMaterialPermutation
// Size: 0x60 (Inherited: 0x0)
struct FGeneBatchAllowMaterialPermutation
{
	struct TMap<struct FName, uint8_t> StaticSwitchArguments; // 0x0(0x50)
	struct TArray<struct FGeneBatchAllowMaterialLayer> BatchParameterLayers; // 0x50(0x10)
};

// Object: ScriptStruct GeneBatch.GeneBatchTableRowAllowMaterial
// Size: 0xD8 (Inherited: 0x8)
struct FGeneBatchTableRowAllowMaterial : FTableRowBase
{
	struct TSoftObjectPtr<UMaterial> Material; // 0x8(0x28)
	struct TArray<struct FGeneBatchAllowMaterialPermutation> BatchParameterPermutations; // 0x30(0x10)
	struct TArray<struct FGeneBatchMaterialParameterClusterConfigLevel> ParameterClusterLevels; // 0x40(0x10)
	struct TSoftObjectPtr<UMaterialInterface> OverrideMaterial; // 0x50(0x28)
	struct FGeneBatchAllowMaterialPermutation OverrideMaterialParameterPermutations; // 0x78(0x60)
};

// Object: ScriptStruct GeneBatch.GeneBatchAllowMaterialTextureParameter
// Size: 0x30 (Inherited: 0x0)
struct FGeneBatchAllowMaterialTextureParameter
{
	struct FGeneBatchTextureBaseChannelUsage ChannelUsage; // 0x0(0xC)
	uint8_t Pad_0xC[0x4]; // 0xC(0x4)
	struct FString SourceMaterialTextureParamRegex; // 0x10(0x10)
	struct FName AtlasMaterialTextureParam; // 0x20(0x8)
	EMaterialAtlasUsage SamplingMaterialAtlasUsage; // 0x28(0x1)
	uint8_t Pad_0x29[0x7]; // 0x29(0x7)
};

// Object: ScriptStruct GeneBatch.GeneBatchAllowMaterialLayer
// Size: 0x60 (Inherited: 0x0)
struct FGeneBatchAllowMaterialLayer
{
	struct TSet<struct FGeneBatchAllowMaterialTextureParameter> TextureParameters; // 0x0(0x50)
	struct TArray<struct FGeneBatchAllowMaterialNumericParameter> NumericParameters; // 0x50(0x10)
};

// Object: ScriptStruct GeneBatch.GeneBatchAllowMaterialNumericParameter
// Size: 0x18 (Inherited: 0x0)
struct FGeneBatchAllowMaterialNumericParameter
{
	struct FString Name; // 0x0(0x10)
	int32_t offset; // 0x10(0x4)
	uint8_t Pad_0x14[0x4]; // 0x14(0x4)
};

// Object: ScriptStruct GeneBatch.GeneBatchMaterialParameterClusterConfigLevel
// Size: 0x10 (Inherited: 0x0)
struct FGeneBatchMaterialParameterClusterConfigLevel
{
	struct TArray<struct FGeneBatchMaterialParameterClusterConfig> ParameterClusterConfigs; // 0x0(0x10)
};

// Object: ScriptStruct GeneBatch.GeneBatchMaterialParameterClusterConfig
// Size: 0x50 (Inherited: 0x0)
struct FGeneBatchMaterialParameterClusterConfig
{
	struct FString ParameterNameRegex; // 0x0(0x10)
	EMaterialParameterDataType ParameterType; // 0x10(0x1)
	EMaterialParameterClusterMode ClusterMode; // 0x11(0x1)
	EMaterialParameterClusterSaveMode ClusterSaveMode; // 0x12(0x1)
	uint8_t Pad_0x13[0x5]; // 0x13(0x5)
	struct TArray<struct FGeneBatchMaterialParameterNumericClusterMapping> NumericClusterMap; // 0x18(0x10)
	float NumericClusterStep; // 0x28(0x4)
	float DefaultScalarValue; // 0x2C(0x4)
	struct FLinearColor DefaultVectorValue; // 0x30(0x10)
	struct FName DefaultObjectValue; // 0x40(0x8)
	int32_t DefaultUIntValue; // 0x48(0x4)
	uint8_t Pad_0x4C[0x4]; // 0x4C(0x4)
};

// Object: ScriptStruct GeneBatch.GeneBatchMaterialParameterNumericClusterMapping
// Size: 0x14 (Inherited: 0x0)
struct FGeneBatchMaterialParameterNumericClusterMapping
{
	struct FFloatRange ClusterRange; // 0x0(0x10)
	float ClusterTarget; // 0x10(0x4)
};

// Object: ScriptStruct GeneBatch.GeneBatchTableRowResultPrimitiveInstanceData
// Size: 0x90 (Inherited: 0x8)
struct FGeneBatchTableRowResultPrimitiveInstanceData : FTableRowBase
{
	struct FName Primitive; // 0x8(0x8)
	struct FGeneBatchPrimitiveInstanceData PrimitiveInstanceData; // 0x10(0x80)
};

// Object: Class GeneBatch.DeveloperSettingsWithSubsettings
// Size: 0x88 (Inherited: 0x38)
struct UDeveloperSettingsWithSubsettings : UDeveloperSettings
{
	uint8_t Pad_0x38[0x50]; // 0x38(0x50)
	DEFINE_UE_CLASS_HELPERS(UDeveloperSettingsWithSubsettings, "DeveloperSettingsWithSubsettings")

};

// Object: Class GeneBatch.GeneBatchLibrary
// Size: 0x28 (Inherited: 0x28)
struct UGeneBatchLibrary : UBlueprintFunctionLibrary
{

	// Object: Function GeneBatch.GeneBatchLibrary.RegexSearchCapture
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x77be2c0
	// Params: [ Num(7) Size(0x49) ]
	static uint8_t RegexSearchCapture(struct FString inString, struct FString InRegexPattern, const struct TArray<int32_t>& InCaptureIndex, struct TArray<struct FString>& OutCaptureGroup, int32_t BeginIndex, int32_t EndIndex);

	// Object: Function GeneBatch.GeneBatchLibrary.RegexSearch
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x77be158
	// Params: [ Num(5) Size(0x29) ]
	static uint8_t RegexSearch(struct FString inString, struct FString InRegexPattern, int32_t BeginIndex, int32_t EndIndex);
	DEFINE_UE_CLASS_HELPERS(UGeneBatchLibrary, "GeneBatchLibrary")

};

// Object: Class GeneBatch.GeneBatchPOIVolume
// Size: 0x3E0 (Inherited: 0x3A8)
struct AGeneBatchPOIVolume : AVolume
{
	struct UGeneBatchPOISettingsObject* POISettingsObject; // 0x3A8(0x8)
	struct FName POIName; // 0x3B0(0x8)
	int32_t AreaIndex; // 0x3B8(0x4)
	struct FName GameplayAreaName; // 0x3BC(0x8)
	uint8_t Pad_0x3C4[0x4]; // 0x3C4(0x4)
	struct UDecalComponent* DecalComponent; // 0x3C8(0x8)
	struct UMaterialInstanceDynamic* DecalMaterialInstance; // 0x3D0(0x8)
	uint8_t Pad_0x3D8[0x8]; // 0x3D8(0x8)


	// Object: Function GeneBatch.GeneBatchPOIVolume.UpdatePOISettingsObject
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x77be608
	// Params: [ Num(1) Size(0x8) ]
	void UpdatePOISettingsObject(struct UGeneBatchPOISettingsObject* NewPOISettingsObject);

	// Object: Function GeneBatch.GeneBatchPOIVolume.UpdateLevelGeneBatchPOIVolumeActors
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x77be4f8
	// Params: [ Num(3) Size(0x11) ]
	static void UpdateLevelGeneBatchPOIVolumeActors(struct AActor* BlueprintActor, struct UGeneBatchPOISettingsObject* InPOISettingsObject, uint8_t bForceRecreate);
	DEFINE_UE_CLASS_HELPERS(AGeneBatchPOIVolume, "GeneBatchPOIVolume")

};

// Object: Class GeneBatch.GeneBatchPOISettingsObject
// Size: 0x48 (Inherited: 0x28)
struct UGeneBatchPOISettingsObject : UObject
{
	struct TArray<struct FGeneBatchPOI> POIs; // 0x28(0x10)
	struct TArray<struct FGeneBatchTheme> Themes; // 0x38(0x10)


	// Object: Function GeneBatch.GeneBatchPOISettingsObject.GetPOIGeneBatchSettings
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x77be6e4
	// Params: [ Num(1) Size(0x10) ]
	struct TArray<struct UGeneBatchSettingsObject*> GetPOIGeneBatchSettings();
	DEFINE_UE_CLASS_HELPERS(UGeneBatchPOISettingsObject, "GeneBatchPOISettingsObject")

};

// Object: Class GeneBatch.GeneBatchSettingsFunctionalConfiguration
// Size: 0x28 (Inherited: 0x28)
struct UGeneBatchSettingsFunctionalConfiguration : UObject
{

	// Object: Function GeneBatch.GeneBatchSettingsFunctionalConfiguration.MeshBakeMethod
	// Flags: [Native|Event|Public|HasOutParms|BlueprintEvent|Const]
	// Offset: 0x77bf04c
	// Params: [ Num(4) Size(0x279) ]
	EGeneBatchBakeMethod MeshBakeMethod(const struct FGeneBatchTableRowResultHLODData& HLODData, int32_t TotalNumVertices, const struct TArray<int32_t>& MeshInstanceCounts);

	// Object: Function GeneBatch.GeneBatchSettingsFunctionalConfiguration.GetTotalResolution
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x77bef50
	// Params: [ Num(2) Size(0x6C) ]
	int32_t GetTotalResolution(const struct FGeneAtlasResultMap& AtlasMap);

	// Object: Function GeneBatch.GeneBatchSettingsFunctionalConfiguration.GetOccupiedResolution
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x77bee54
	// Params: [ Num(2) Size(0x6C) ]
	int32_t GetOccupiedResolution(const struct FGeneAtlasResultMap& AtlasMap);

	// Object: Function GeneBatch.GeneBatchSettingsFunctionalConfiguration.AtlasBakeMethod
	// Flags: [Native|Event|Public|HasOutParms|BlueprintEvent|Const]
	// Offset: 0x77becd0
	// Params: [ Num(3) Size(0x111) ]
	EGeneBatchBakeMethod AtlasBakeMethod(const struct FGeneAtlasResultMap& AtlasMap, const struct FGeneAtlasResultAtlas& Atlas);
	DEFINE_UE_CLASS_HELPERS(UGeneBatchSettingsFunctionalConfiguration, "GeneBatchSettingsFunctionalConfiguration")

};

// Object: Class GeneBatch.GeneBatchWhyNotBatch
// Size: 0x38 (Inherited: 0x28)
struct UGeneBatchWhyNotBatch : UObject
{
	struct TArray<struct FGeneBatchTableRowWhyNotBatchStats> GeneBatchTableRowWhyNotBatchStats; // 0x28(0x10)
	DEFINE_UE_CLASS_HELPERS(UGeneBatchWhyNotBatch, "GeneBatchWhyNotBatch")

};

// Object: Class GeneBatch.GeneBatchSettingsObject
// Size: 0x360 (Inherited: 0x28)
struct UGeneBatchSettingsObject : UObject
{
	struct FString ProjectSettingName; // 0x28(0x10)
	struct FString AnalyzeBasePath; // 0x38(0x10)
	struct UGeneBatchPOISettingsObject* POISettings; // 0x48(0x8)
	int32_t POIIndex; // 0x50(0x4)
	int32_t ThemeIndex; // 0x54(0x4)
	int32_t StartHLODLevel; // 0x58(0x4)
	int32_t GenerationNum; // 0x5C(0x4)
	int32_t IndividualNum; // 0x60(0x4)
	int32_t CanMergeMeshCheapestLODVertexMaxNum; // 0x64(0x4)
	int32_t CanMergeGridAllInstancesVertexMaxNum; // 0x68(0x4)
	uint8_t Pad_0x6C[0x4]; // 0x6C(0x4)
	struct FGeneBatchAnalyzeHLODSettings LODSettings; // 0x70(0xD8)
	uint8_t bEnableStatsObjective : 1; // 0x148(0x1), Mask(0x1)
	uint8_t BitPad_0x148_1 : 7; // 0x148(0x1)
	uint8_t bEnableStatsIndividual : 1; // 0x149(0x1), Mask(0x1)
	uint8_t BitPad_0x149_1 : 7; // 0x149(0x1)
	uint8_t bEnableMultithread : 1; // 0x14A(0x1), Mask(0x1)
	uint8_t BitPad_0x14A_1 : 7; // 0x14A(0x1)
	uint8_t bExportResult : 1; // 0x14B(0x1), Mask(0x1)
	uint8_t BitPad_0x14B_1 : 7; // 0x14B(0x1)
	uint8_t Pad_0x14C[0x4]; // 0x14C(0x4)
	struct UGeneBatchSettingsFunctionalConfiguration* FunctionalConfiguration; // 0x150(0x8)
	struct TSoftObjectPtr<UDataTable> AllowAnalyzeDataTablePtr; // 0x158(0x28)
	uint8_t Pad_0x180[0x50]; // 0x180(0x50)
	struct TArray<struct FString> StaticMeshTagGroupRegex; // 0x1D0(0x10)
	uint8_t bSeparateLocalLightGroupBakeBlueprintComponents : 1; // 0x1E0(0x1), Mask(0x1)
	uint8_t BitPad_0x1E0_1 : 7; // 0x1E0(0x1)
	uint8_t Pad_0x1E1[0x7]; // 0x1E1(0x7)
	struct FString BakedMaterialBasePath; // 0x1E8(0x10)
	struct FString BakedAtlasBasePath; // 0x1F8(0x10)
	struct FString BakedMeshBasePath; // 0x208(0x10)
	struct TSoftObjectPtr<UDataTable> GeneBatchStaticMeshDataTablePtr; // 0x218(0x28)
	struct TSoftObjectPtr<UDataTable> GeneBatchStaticMeshProxyInputDataTablePtr; // 0x240(0x28)
	struct TSoftObjectPtr<UDataTable> GeneBatchMeshComponentDataTablePtr; // 0x268(0x28)
	struct TSoftObjectPtr<UDataTable> GeneBatchTextureAtlasDataTablePtr; // 0x290(0x28)
	struct TSoftObjectPtr<UDataTable> GeneBatchPrimitiveHLODParentDataTablePtr; // 0x2B8(0x28)
	uint8_t Pad_0x2E0[0x80]; // 0x2E0(0x80)
	DEFINE_UE_CLASS_HELPERS(UGeneBatchSettingsObject, "GeneBatchSettingsObject")

};

// Object: Class GeneBatch.GeneBatchDefaultSettings
// Size: 0x1A8 (Inherited: 0x38)
struct UGeneBatchDefaultSettings : UDeveloperSettings
{
	struct TSoftObjectPtr<UGeneBatchSettingsObject> GeneBatchSettingsObject; // 0x38(0x28)
	struct FString EditorBlueprintsPath; // 0x60(0x10)
	struct TArray<struct FString> EnablePlatforms; // 0x70(0x10)
	struct TArray<struct FString> AnalysisPlatforms; // 0x80(0x10)
	uint8_t bForceSlowCheck : 1; // 0x90(0x1), Mask(0x1)
	uint8_t BitPad_0x90_1 : 7; // 0x90(0x1)
	uint8_t Pad_0x91[0x7]; // 0x91(0x7)
	struct TArray<ETextureGroup> AnisotropicTextureGroups; // 0x98(0x10)
	struct TArray<struct FName> StreamingLayers; // 0xA8(0x10)
	struct TMap<struct FName, float> GridStreamingLayerSizes; // 0xB8(0x50)
	struct TArray<struct FName> OverrideGridStreamingLayerSizeMapName; // 0x108(0x10)
	struct TMap<struct FName, float> OverrideGridStreamingLayerSizes; // 0x118(0x50)
	uint8_t bEnableFuzzyMatchingInGeneBatchSettings : 1; // 0x168(0x1), Mask(0x1)
	uint8_t BitPad_0x168_1 : 7; // 0x168(0x1)
	uint8_t Pad_0x169[0x7]; // 0x169(0x7)
	struct TArray<struct TSoftObjectPtr<UGeneBatchPOISettingsObject>> AllPOISettingsObjects; // 0x170(0x10)
	struct TSoftClassPtr<struct UObject*> AutoCreationMethod; // 0x180(0x28)
	DEFINE_UE_CLASS_HELPERS(UGeneBatchDefaultSettings, "GeneBatchDefaultSettings")

};

// Object: Class GeneBatch.GeneBatchInfo
// Size: 0x38 (Inherited: 0x28)
struct UGeneBatchInfo : UObject
{
	struct UStaticMesh* StaticMesh; // 0x28(0x8)
	int32_t LodIndex; // 0x30(0x4)
	int32_t SectionIndex; // 0x34(0x4)
	DEFINE_UE_CLASS_HELPERS(UGeneBatchInfo, "GeneBatchInfo")

};

// Object: Class GeneBatch.GeneBatchSettings
// Size: 0x1D8 (Inherited: 0x88)
struct UGeneBatchSettings : UDeveloperSettingsWithSubsettings
{
	struct TArray<struct FString> Wildcard; // 0x88(0x10)
	struct TArray<struct FString> BlacklistWildcard; // 0x98(0x10)
	int32_t GenerationNum; // 0xA8(0x4)
	int32_t IndividualNum; // 0xAC(0x4)
	int32_t CanMergeMeshCheapestLODVertexMaxNum; // 0xB0(0x4)
	int32_t CanMergeGridAllInstancesVertexMaxNum; // 0xB4(0x4)
	struct FGeneBatchAnalyzeHLODSettings LODSettings; // 0xB8(0xD8)
	uint8_t bEnableStatsObjective : 1; // 0x190(0x1), Mask(0x1)
	uint8_t BitPad_0x190_1 : 7; // 0x190(0x1)
	uint8_t bEnableStatsIndividual : 1; // 0x191(0x1), Mask(0x1)
	uint8_t BitPad_0x191_1 : 7; // 0x191(0x1)
	uint8_t bEnableMultithread : 1; // 0x192(0x1), Mask(0x1)
	uint8_t BitPad_0x192_1 : 7; // 0x192(0x1)
	uint8_t bExportResult : 1; // 0x193(0x1), Mask(0x1)
	uint8_t BitPad_0x193_1 : 7; // 0x193(0x1)
	uint8_t Pad_0x194[0x4]; // 0x194(0x4)
	struct TSoftObjectPtr<UDataTable> AllowAnalyzeDataTablePtr; // 0x198(0x28)
	struct TArray<struct FString> StaticMeshTagGroupRegex; // 0x1C0(0x10)
	uint8_t bSeparateLocalLightGroupBakeBlueprintComponents : 1; // 0x1D0(0x1), Mask(0x1)
	uint8_t BitPad_0x1D0_1 : 7; // 0x1D0(0x1)
	uint8_t Pad_0x1D1[0x7]; // 0x1D1(0x7)
	DEFINE_UE_CLASS_HELPERS(UGeneBatchSettings, "GeneBatchSettings")

};

// Object: Class GeneBatch.GeneBatchTableRowResultMeshReuseProperties
// Size: 0x60 (Inherited: 0x28)
struct UGeneBatchTableRowResultMeshReuseProperties : UObject
{
	struct FGeneBatchTableRowResultMeshReuseKey ReuseKey; // 0x28(0x18)
	struct TArray<struct TSoftObjectPtr<UMaterialInterface>> OverrideMaterials; // 0x40(0x10)
	struct TArray<struct FGeneBatchTableRowResultMesReuseLOD> LODs; // 0x50(0x10)
	DEFINE_UE_CLASS_HELPERS(UGeneBatchTableRowResultMeshReuseProperties, "GeneBatchTableRowResultMeshReuseProperties")

};

// Object: Class GeneBatch.GeneBatchSettings~SOL
// Size: 0x1D8 (Inherited: 0x1D8)
struct UGeneBatchSettings_SOL : UGeneBatchSettings
{	DEFINE_UE_CLASS_HELPERS(UGeneBatchSettings_SOL, "GeneBatchSettings~SOL")

};

// Object: Class GeneBatch.GeneBatchSettings~SOL~POI
// Size: 0x1D8 (Inherited: 0x1D8)
struct UGeneBatchSettings_SOL_POI : UGeneBatchSettings_SOL
{	DEFINE_UE_CLASS_HELPERS(UGeneBatchSettings_SOL_POI, "GeneBatchSettings~SOL~POI")

};

// Object: Class GeneBatch.GeneBatchSettings~SOL~POI~SafeHouse
// Size: 0x1D8 (Inherited: 0x1D8)
struct UGeneBatchSettings_SOL_POI_SafeHouse : UGeneBatchSettings_SOL_POI
{	DEFINE_UE_CLASS_HELPERS(UGeneBatchSettings_SOL_POI_SafeHouse, "GeneBatchSettings~SOL~POI~SafeHouse")

};

// Object: Class GeneBatch.GeneBatchSettings~Theme-CommonTextures
// Size: 0x1D8 (Inherited: 0x1D8)
struct UGeneBatchSettings_Theme_CommonTextures : UGeneBatchSettings
{	DEFINE_UE_CLASS_HELPERS(UGeneBatchSettings_Theme_CommonTextures, "GeneBatchSettings~Theme-CommonTextures")

};

// Object: Class GeneBatch.GeneBatchSettings~Theme-SOL
// Size: 0x1D8 (Inherited: 0x1D8)
struct UGeneBatchSettings_Theme_SOL : UGeneBatchSettings
{	DEFINE_UE_CLASS_HELPERS(UGeneBatchSettings_Theme_SOL, "GeneBatchSettings~Theme-SOL")

};

// Object: Class GeneBatch.GeneBatchSettings~Theme-MP
// Size: 0x1D8 (Inherited: 0x1D8)
struct UGeneBatchSettings_Theme_MP : UGeneBatchSettings
{	DEFINE_UE_CLASS_HELPERS(UGeneBatchSettings_Theme_MP, "GeneBatchSettings~Theme-MP")

};

// Object: Class GeneBatch.GeneBatchSettings~LQ-SOL
// Size: 0x1D8 (Inherited: 0x1D8)
struct UGeneBatchSettings_LQ_SOL : UGeneBatchSettings
{	DEFINE_UE_CLASS_HELPERS(UGeneBatchSettings_LQ_SOL, "GeneBatchSettings~LQ-SOL")

};

// Object: Class GeneBatch.GeneBatchSettings~LQ-MP
// Size: 0x1D8 (Inherited: 0x1D8)
struct UGeneBatchSettings_LQ_MP : UGeneBatchSettings
{	DEFINE_UE_CLASS_HELPERS(UGeneBatchSettings_LQ_MP, "GeneBatchSettings~LQ-MP")

};

// Object: Class GeneBatch.GeneBatchSettings~IceLand
// Size: 0x1D8 (Inherited: 0x1D8)
struct UGeneBatchSettings_IceLand : UGeneBatchSettings
{	DEFINE_UE_CLASS_HELPERS(UGeneBatchSettings_IceLand, "GeneBatchSettings~IceLand")

};

} // namespace SDK
