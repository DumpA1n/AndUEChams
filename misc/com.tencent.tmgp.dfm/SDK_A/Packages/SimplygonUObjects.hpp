#pragma once

#include "../CoreUObject_classes.hpp"

namespace SDK
{

// Package: SimplygonUObjects
// Enums: 30
// Structs: 42
// Classes: 29

struct FSimplygonPipelineSettings;
struct FHighDensityMeshReductionSettings;
struct FHighDensityMeshReductionPipelineSettings;
struct FAttributeTessellationSettings;
struct FImpostorFromSingleViewSettings;
struct FChartAggregatorSettings;
struct FParameterizerSettings;
struct FMappingImageSettings;
struct FImpostorFromSingleViewPipelineSettings;
struct FOutputMaterialSettings;
struct FInputMaterialSettings;
struct FFlipbookSettings;
struct FFlipbookPipelineSettings;
struct FFoliageSettings;
struct FBillboardCloudSettings;
struct FBillboardCloudVegetationPipelineSettings;
struct FBillboardCloudPipelineSettings;
struct FAggregationSettings;
struct FGenerateLightmapTexCoordSettings;
struct FGeometryCullingSettings;
struct FVertexWeightSettings;
struct FVisibilitySettings;
struct FAggregationPipelineSettings;
struct FBoneSettings;
struct FRemeshingSettings;
struct FRemeshingPipelineSettings;
struct FColorCasterSettings;
struct FBaseColorCasterSettingsWrapper;
struct FNormalCasterSettings;
struct FNormalCasterSettingsWrapper;
struct FRawMappingImageSettings;
struct FRawRemeshingPipelineSettings;
struct FNormalCalculationSettings;
struct FReductionSettings;
struct FRepairSettings;
struct FReductionPipelineSettings;
struct FComputeCasterSettings;
struct FVertexColorCasterSettings;
struct FGeometryDataCasterSettings;
struct FAmbientOcclusionCasterSettings;
struct FDisplacementCasterSettings;
struct FOpacityCasterSettings;
struct USimplygonStandinPipeline;
struct UStandinNearPipeline;
struct UStandinFarPipeline;
struct UBillboardCloudPipeline;
struct USimplygonPipeline;
struct UFlipbookPipeline;
struct UBillboardCloudVegetationPipeline;
struct URemeshingPipeline;
struct UHighDensityMeshReductionPipeline;
struct USimplygonMaterialCaster;
struct USimplygonColorCaster;
struct UBaseColorCaster;
struct UMetallicCaster;
struct USpecualarCaster;
struct URoughnessCaster;
struct USimplygonNormalCaster;
struct UNormalCaster;
struct USimplygonOpacityCaster;
struct UOpacityCaster;
struct UEmissiveCaster;
struct UOpacityMaskCaster;
struct UAmbientOcclusionMaskCaster;
struct UReductionPipeline;
struct UAggregationPipeline;
struct USimplygonDisplacementCaster;
struct USimplygonAmbientOcclusionCaster;
struct USimplygonGeometryDataCaster;
struct USimplygonVertexColorCaster;
struct USimplygonComputeCaster;

// Object: Enum SimplygonUObjects.EShaderCodeInputMode
enum class EShaderCodeInputMode : uint8_t
{
	Source = 0,
	Binary = 1,
	EShaderCodeInputMode_MAX = 2
};

// Object: Enum SimplygonUObjects.EOutputColorSpace
enum class EOutputColorSpace : uint8_t
{
	Undefined = 0,
	Linear = 1,
	sRGB = 2,
	EOutputColorSpace_MAX = 3
};

// Object: Enum SimplygonUObjects.EGeometryDataFieldType
enum class EGeometryDataFieldType : uint8_t
{
	Coords = 0,
	TexCoords = 1,
	Normals = 2,
	Tangents = 3,
	Bitangents = 4,
	Colors = 5,
	TriangleIds = 6,
	MaterialIds = 7,
	VertexIds = 8,
	UserVertexField = 9,
	UserCornerField = 10,
	UserTriangleField = 11,
	CustomField = 12,
	EGeometryDataFieldType_MAX = 13
};

// Object: Enum SimplygonUObjects.EFlipBackfacingMode
enum class EFlipBackfacingMode : uint8_t
{
	PixelNormal = 0,
	FaceNormal = 1,
	EFlipBackfacingMode_MAX = 2
};

// Object: Enum SimplygonUObjects.EOutputOpacityType
enum class EOutputOpacityType : uint8_t
{
	Opacity = 0,
	Transparency = 1,
	EOutputOpacityType_MAX = 2
};

// Object: Enum SimplygonUObjects.EOutputDDSCompressionType
enum class EOutputDDSCompressionType : uint8_t
{
	NoCompression = 0,
	BC1 = 1,
	BC2 = 2,
	BC3 = 3,
	BC4 = 4,
	BC5 = 5,
	EOutputDDSCompressionType_MAX = 6
};

// Object: Enum SimplygonUObjects.EOutputImageFileFormat
enum class EOutputImageFileFormat : uint8_t
{
	BMP = 0,
	DDS = 1,
	JPEG = 2,
	PNG = 3,
	TGA = 4,
	TIFF = 5,
	EXR = 8,
	EOutputImageFileFormat_MAX = 9
};

// Object: Enum SimplygonUObjects.EOutputPixelFormat
enum class EOutputPixelFormat : uint8_t
{
	R8G8B8A8 = 0,
	R8G8B8 = 1,
	R8 = 2,
	R16G16B16A16 = 3,
	R16G16B16 = 4,
	R16 = 5,
	R32G32B32A32F = 6,
	EOutputPixelFormat_MAX = 7
};

// Object: Enum SimplygonUObjects.EFillMode
enum class EFillMode : uint8_t
{
	Interpolate = 0,
	NearestNeighbor = 1,
	NoFill = 2,
	EFillMode_MAX = 3
};

// Object: Enum SimplygonUObjects.EDitherType
enum class EDitherType : uint8_t
{
	NoDither = 0,
	FloydSteinberg = 1,
	JarvisJudiceNinke = 2,
	Sierra = 3,
	EDitherType_MAX = 4
};

// Object: Enum SimplygonUObjects.EOpacityChannelComponent
enum class EOpacityChannelComponent : uint8_t
{
	Red = 0,
	Green = 1,
	Blue = 2,
	Alpha = 3,
	EOpacityChannelComponent_MAX = 4
};

// Object: Enum SimplygonUObjects.EStopCondition
enum class EStopCondition : uint8_t
{
	Any = 0,
	All = 1,
	EStopCondition_MAX = 2
};

// Object: Enum SimplygonUObjects.EBillboardMode
enum class EBillboardMode : uint8_t
{
	OuterShell = 0,
	Foliage = 1,
	EBillboardMode_MAX = 2
};

// Object: Enum SimplygonUObjects.ESurfaceTransferMode
enum class ESurfaceTransferMode : uint8_t
{
	Fast = 0,
	Accurate = 1,
	ESurfaceTransferMode_MAX = 2
};

// Object: Enum SimplygonUObjects.ERemeshingMode
enum class ERemeshingMode : uint8_t
{
	Outside = 0,
	Inside = 1,
	Manual = 2,
	ERemeshingMode_MAX = 3
};

// Object: Enum SimplygonUObjects.EHoleFilling
enum class EHoleFilling : uint8_t
{
	Disabled = 0,
	Low = 1,
	Medium = 2,
	High = 3,
	EHoleFilling_MAX = 4
};

// Object: Enum SimplygonUObjects.ESurfaceAreaScale
enum class ESurfaceAreaScale : uint8_t
{
	LargestInstance = 0,
	SmallestInstance = 1,
	Average = 2,
	ESurfaceAreaScale_MAX = 3
};

// Object: Enum SimplygonUObjects.EChartAggregatorMode
enum class EChartAggregatorMode : uint8_t
{
	TextureSizeProportions = 0,
	SurfaceArea = 1,
	OriginalPixelDensity = 2,
	UVSizeProportions = 3,
	EChartAggregatorMode_MAX = 4
};

// Object: Enum SimplygonUObjects.ETexCoordGeneratorType
enum class ETexCoordGeneratorType : uint8_t
{
	Parameterizer = 0,
	ChartAggregator = 1,
	ETexCoordGeneratorType_MAX = 2
};

// Object: Enum SimplygonUObjects.ETransformationSpace
enum class ETransformationSpace : uint8_t
{
	Global = 0,
	Local = 1,
	Tangent = 2,
	View = 3,
	ETransformationSpace_MAX = 4
};

// Object: Enum SimplygonUObjects.EAttributeTessellationDensityMode
enum class EAttributeTessellationDensityMode : uint8_t
{
	RelativeArea = 0,
	AbsoluteArea = 1,
	RelativeLength = 2,
	AbsoluteLength = 3,
	UserDefined = 4,
	OnScreenSize = 5,
	EAttributeTessellationDensityMode_MAX = 6
};

// Object: Enum SimplygonUObjects.EWeightsFromColorMode
enum class EWeightsFromColorMode : uint8_t
{
	Standard = 0,
	High = 1,
	Low = 2,
	EWeightsFromColorMode_MAX = 3
};

// Object: Enum SimplygonUObjects.EWeightsFromColorComponent
enum class EWeightsFromColorComponent : uint8_t
{
	Red = 0,
	Green = 1,
	Blue = 2,
	Alpha = 3,
	EWeightsFromColorComponent_MAX = 4
};

// Object: Enum SimplygonUObjects.EBoneReductionTargetStopCondition
enum class EBoneReductionTargetStopCondition : uint8_t
{
	Any = 0,
	All = 1,
	EBoneReductionTargetStopCondition_MAX = 2
};

// Object: Enum SimplygonUObjects.EComputeVisibilityMode
enum class EComputeVisibilityMode : uint8_t
{
	DirectX = 0,
	Software = 1,
	EComputeVisibilityMode_MAX = 2
};

// Object: Enum SimplygonUObjects.EDataCreationPreferences
enum class EDataCreationPreferences : uint8_t
{
	OnlyUseOriginalData = 0,
	PreferOriginalData = 1,
	PreferOptimizedResult = 2,
	EDataCreationPreferences_MAX = 3
};

// Object: Enum SimplygonUObjects.ESymmetryAxis
enum class ESymmetryAxis : uint8_t
{
	X = 0,
	Y = 1,
	Z = 2,
	ESymmetryAxis_MAX = 3
};

// Object: Enum SimplygonUObjects.EReductionHeuristics
enum class EReductionHeuristics : uint8_t
{
	Fast = 0,
	Consistent = 1,
	EReductionHeuristics_MAX = 2
};

// Object: Enum SimplygonUObjects.EReductionTargetStopCondition
enum class EReductionTargetStopCondition : uint8_t
{
	Any = 0,
	All = 1,
	EReductionTargetStopCondition_MAX = 2
};

// Object: Enum SimplygonUObjects.EReductionPerformanceMode
enum class EReductionPerformanceMode : uint8_t
{
	AllFeatures = 0,
	HighPerformance = 1,
	EReductionPerformanceMode_MAX = 2
};

// Object: ScriptStruct SimplygonUObjects.SimplygonPipelineSettings
// Size: 0x8 (Inherited: 0x0)
struct FSimplygonPipelineSettings
{
	uint8_t Pad_0x0[0x8]; // 0x0(0x8)
};

// Object: ScriptStruct SimplygonUObjects.HighDensityMeshReductionSettings
// Size: 0x28 (Inherited: 0x0)
struct FHighDensityMeshReductionSettings
{
	uint8_t OnScreenSizeEnabled : 1; // 0x0(0x1), Mask(0x1)
	uint8_t BitPad_0x0_1 : 7; // 0x0(0x1)
	uint8_t Pad_0x1[0x3]; // 0x1(0x3)
	int32_t OnScreenSize; // 0x4(0x4)
	uint8_t MaxDeviationEnabled : 1; // 0x8(0x1), Mask(0x1)
	uint8_t BitPad_0x8_1 : 7; // 0x8(0x1)
	uint8_t Pad_0x9[0x3]; // 0x9(0x3)
	float MaxDeviation; // 0xC(0x4)
	EStopCondition StopCondition; // 0x10(0x1)
	uint8_t Pad_0x11[0x7]; // 0x11(0x7)
	struct FString ProcessSelectionSetName; // 0x18(0x10)
};

// Object: ScriptStruct SimplygonUObjects.HighDensityMeshReductionPipelineSettings
// Size: 0x30 (Inherited: 0x8)
struct FHighDensityMeshReductionPipelineSettings : FSimplygonPipelineSettings
{
	struct FHighDensityMeshReductionSettings HighDensityMeshReductionSettings; // 0x8(0x28)
};

// Object: ScriptStruct SimplygonUObjects.AttributeTessellationSettings
// Size: 0x20 (Inherited: 0x0)
struct FAttributeTessellationSettings
{
	uint8_t EnableAttributeTessellation : 1; // 0x0(0x1), Mask(0x1)
	uint8_t BitPad_0x0_1 : 7; // 0x0(0x1)
	EAttributeTessellationDensityMode AttributeTessellationDensityMode; // 0x1(0x1)
	ETransformationSpace TransformationSpace; // 0x2(0x1)
	uint8_t Pad_0x3[0x1]; // 0x3(0x1)
	float MaxAreaOfTessellatedValue; // 0x4(0x4)
	float MaxLengthOfTessellatedValue; // 0x8(0x4)
	int32_t OnScreenSize; // 0xC(0x4)
	uint8_t OnlyAllowOneLevelOfDifference : 1; // 0x10(0x1), Mask(0x1)
	uint8_t BitPad_0x10_1 : 7; // 0x10(0x1)
	uint8_t Pad_0x11[0x3]; // 0x11(0x3)
	int32_t MinTessellationLevel; // 0x14(0x4)
	int32_t MaxTessellationLevel; // 0x18(0x4)
	int32_t MaxTotalValuesCount; // 0x1C(0x4)
};

// Object: ScriptStruct SimplygonUObjects.ImpostorFromSingleViewSettings
// Size: 0x1C (Inherited: 0x0)
struct FImpostorFromSingleViewSettings
{
	uint8_t UseTightFitting : 1; // 0x0(0x1), Mask(0x1)
	uint8_t BitPad_0x0_1 : 7; // 0x0(0x1)
	uint8_t Pad_0x1[0x3]; // 0x1(0x3)
	float TightFittingDepthOffset; // 0x4(0x4)
	uint8_t TwoSided : 1; // 0x8(0x1), Mask(0x1)
	uint8_t BitPad_0x8_1 : 7; // 0x8(0x1)
	uint8_t Pad_0x9[0x3]; // 0x9(0x3)
	struct FVector ViewDirection; // 0xC(0xC)
	float TexCoordPadding; // 0x18(0x4)
};

// Object: ScriptStruct SimplygonUObjects.ChartAggregatorSettings
// Size: 0x38 (Inherited: 0x0)
struct FChartAggregatorSettings
{
	EChartAggregatorMode ChartAggregatorMode; // 0x0(0x1)
	ESurfaceAreaScale SurfaceAreaScale; // 0x1(0x1)
	uint8_t Pad_0x2[0x2]; // 0x2(0x2)
	int32_t OriginalTexCoordLevel; // 0x4(0x4)
	struct FString OriginalTexCoordName; // 0x8(0x10)
	uint8_t SeparateOverlappingCharts : 1; // 0x18(0x1), Mask(0x1)
	uint8_t BitPad_0x18_1 : 7; // 0x18(0x1)
	uint8_t Pad_0x19[0x7]; // 0x19(0x7)
	struct FString OriginalChartProportionsChannel; // 0x20(0x10)
	uint8_t LockUVRotation : 1; // 0x30(0x1), Mask(0x1)
	uint8_t BitPad_0x30_1 : 7; // 0x30(0x1)
	uint8_t Pad_0x31[0x7]; // 0x31(0x7)
};

// Object: ScriptStruct SimplygonUObjects.ParameterizerSettings
// Size: 0x8 (Inherited: 0x0)
struct FParameterizerSettings
{
	float MaxStretch; // 0x0(0x4)
	float LargeChartsImportance; // 0x4(0x4)
};

// Object: ScriptStruct SimplygonUObjects.MappingImageSettings
// Size: 0x98 (Inherited: 0x0)
struct FMappingImageSettings
{
	uint8_t GenerateMappingImage : 1; // 0x0(0x1), Mask(0x1)
	uint8_t GenerateTexCoords : 1; // 0x0(0x1), Mask(0x2)
	uint8_t GenerateTangents : 1; // 0x0(0x1), Mask(0x4)
	uint8_t ReplaceMappingImages : 1; // 0x0(0x1), Mask(0x8)
	uint8_t UseFullRetexturing : 1; // 0x0(0x1), Mask(0x10)
	uint8_t ApplyNewMaterialIds : 1; // 0x0(0x1), Mask(0x20)
	uint8_t UseAutomaticTextureSize : 1; // 0x0(0x1), Mask(0x40)
	uint8_t BitPad_0x0_7 : 1; // 0x0(0x1)
	uint8_t Pad_0x1[0x3]; // 0x1(0x3)
	float AutomaticTextureSizeMultiplier; // 0x4(0x4)
	uint8_t ForcePower2Texture : 1; // 0x8(0x1), Mask(0x1)
	uint8_t OnlyParameterizeInvalidUVs : 1; // 0x8(0x1), Mask(0x2)
	uint8_t AllowTransparencyMapping : 1; // 0x8(0x1), Mask(0x4)
	uint8_t BitPad_0x8_3 : 5; // 0x8(0x1)
	uint8_t Pad_0x9[0x3]; // 0x9(0x3)
	int32_t MaximumLayers; // 0xC(0x4)
	int32_t TexCoordLevel; // 0x10(0x4)
	uint8_t Pad_0x14[0x4]; // 0x14(0x4)
	struct FString TexCoordName; // 0x18(0x10)
	ETexCoordGeneratorType TexCoordGeneratorType; // 0x28(0x1)
	uint8_t Pad_0x29[0x3]; // 0x29(0x3)
	int32_t OutputMaterialCount; // 0x2C(0x4)
	int32_t InputMaterialCount; // 0x30(0x4)
	uint8_t Pad_0x34[0x4]; // 0x34(0x4)
	struct FChartAggregatorSettings ChartAggregatorSettings; // 0x38(0x38)
	struct FParameterizerSettings ParameterizerSettings; // 0x70(0x8)
	struct TArray<struct FInputMaterialSettings> InputMaterialSettings; // 0x78(0x10)
	struct TArray<struct FOutputMaterialSettings> OutputMaterialSettings; // 0x88(0x10)
};

// Object: ScriptStruct SimplygonUObjects.ImpostorFromSingleViewPipelineSettings
// Size: 0xF0 (Inherited: 0x8)
struct FImpostorFromSingleViewPipelineSettings : FSimplygonPipelineSettings
{
	struct FImpostorFromSingleViewSettings ImpostorFromSingleViewSettings; // 0x8(0x1C)
	struct FAttributeTessellationSettings AttributeTessellationSettings; // 0x24(0x20)
	uint8_t Pad_0x44[0x4]; // 0x44(0x4)
	struct FMappingImageSettings MappingImageSettings; // 0x48(0x98)
	struct TArray<struct USimplygonMaterialCaster*> MaterialPropertyCasters; // 0xE0(0x10)
};

// Object: ScriptStruct SimplygonUObjects.OutputMaterialSettings
// Size: 0x10 (Inherited: 0x0)
struct FOutputMaterialSettings
{
	int32_t TextureWidth; // 0x0(0x4)
	int32_t TextureHeight; // 0x4(0x4)
	int32_t MultisamplingLevel; // 0x8(0x4)
	int32_t GutterSpace; // 0xC(0x4)
};

// Object: ScriptStruct SimplygonUObjects.InputMaterialSettings
// Size: 0x4 (Inherited: 0x0)
struct FInputMaterialSettings
{
	int32_t MaterialMapping; // 0x0(0x4)
};

// Object: ScriptStruct SimplygonUObjects.FlipbookSettings
// Size: 0x30 (Inherited: 0x0)
struct FFlipbookSettings
{
	int32_t NumberOfViews; // 0x0(0x4)
	struct FVector ViewDirection; // 0x4(0xC)
	struct FVector UpVector; // 0x10(0xC)
	int32_t NumberOfColumns; // 0x1C(0x4)
	int32_t NumberOfRows; // 0x20(0x4)
	uint8_t FlipRowColumnOrder : 1; // 0x24(0x1), Mask(0x1)
	uint8_t BitPad_0x24_1 : 7; // 0x24(0x1)
	uint8_t Pad_0x25[0x3]; // 0x25(0x3)
	int32_t OverrideFlipbookTextureWidth; // 0x28(0x4)
	uint8_t PivotAroundOrigin : 1; // 0x2C(0x1), Mask(0x1)
	uint8_t BitPad_0x2C_1 : 7; // 0x2C(0x1)
	uint8_t Pad_0x2D[0x3]; // 0x2D(0x3)
};

// Object: ScriptStruct SimplygonUObjects.FlipbookPipelineSettings
// Size: 0x100 (Inherited: 0x8)
struct FFlipbookPipelineSettings : FSimplygonPipelineSettings
{
	struct FFlipbookSettings FlipbookSettings; // 0x8(0x30)
	struct FAttributeTessellationSettings AttributeTessellationSettings; // 0x38(0x20)
	struct FMappingImageSettings MappingImageSettings; // 0x58(0x98)
	struct TArray<struct USimplygonMaterialCaster*> MaterialPropertyCasters; // 0xF0(0x10)
};

// Object: ScriptStruct SimplygonUObjects.FoliageSettings
// Size: 0x18 (Inherited: 0x0)
struct FFoliageSettings
{
	uint8_t SeparateTrunkAndFoliage : 1; // 0x0(0x1), Mask(0x1)
	uint8_t MaintainLeafConnections : 1; // 0x0(0x1), Mask(0x2)
	uint8_t BitPad_0x0_2 : 6; // 0x0(0x1)
	uint8_t Pad_0x1[0x3]; // 0x1(0x3)
	float SeparateFoliageTriangleRatio; // 0x4(0x4)
	int32_t SeparateFoliageTriangleThreshold; // 0x8(0x4)
	float SeparateFoliageAreaThreshold; // 0xC(0x4)
	float SeparateFoliageSizeThreshold; // 0x10(0x4)
	float TrunkReductionRatio; // 0x14(0x4)
};

// Object: ScriptStruct SimplygonUObjects.BillboardCloudSettings
// Size: 0x34 (Inherited: 0x0)
struct FBillboardCloudSettings
{
	EBillboardMode BillboardMode; // 0x0(0x1)
	uint8_t FavorVerticalPlanes : 1; // 0x1(0x1), Mask(0x1)
	uint8_t TwoSided : 1; // 0x1(0x1), Mask(0x2)
	uint8_t UseVisibilityWeights : 1; // 0x1(0x1), Mask(0x4)
	uint8_t BitPad_0x1_3 : 5; // 0x1(0x1)
	uint8_t Pad_0x2[0x2]; // 0x2(0x2)
	float BillboardDensity; // 0x4(0x4)
	int32_t MaxPlaneCount; // 0x8(0x4)
	float GeometricComplexity; // 0xC(0x4)
	struct FVector UpVector; // 0x10(0xC)
	struct FFoliageSettings FoliageSettings; // 0x1C(0x18)
};

// Object: ScriptStruct SimplygonUObjects.BillboardCloudVegetationPipelineSettings
// Size: 0x108 (Inherited: 0x8)
struct FBillboardCloudVegetationPipelineSettings : FSimplygonPipelineSettings
{
	struct FBillboardCloudSettings BillboardCloudSettings; // 0x8(0x34)
	struct FAttributeTessellationSettings AttributeTessellationSettings; // 0x3C(0x20)
	uint8_t Pad_0x5C[0x4]; // 0x5C(0x4)
	struct FMappingImageSettings MappingImageSettings; // 0x60(0x98)
	struct TArray<struct USimplygonMaterialCaster*> MaterialPropertyCasters; // 0xF8(0x10)
};

// Object: ScriptStruct SimplygonUObjects.BillboardCloudPipelineSettings
// Size: 0x108 (Inherited: 0x8)
struct FBillboardCloudPipelineSettings : FSimplygonPipelineSettings
{
	struct FBillboardCloudSettings BillboardCloudSettings; // 0x8(0x34)
	struct FAttributeTessellationSettings AttributeTessellationSettings; // 0x3C(0x20)
	uint8_t Pad_0x5C[0x4]; // 0x5C(0x4)
	struct FMappingImageSettings MappingImageSettings; // 0x60(0x98)
	struct TArray<struct USimplygonMaterialCaster*> MaterialPropertyCasters; // 0xF8(0x10)
};

// Object: ScriptStruct SimplygonUObjects.AggregationSettings
// Size: 0x30 (Inherited: 0x0)
struct FAggregationSettings
{
	uint8_t MergeGeometries : 1; // 0x0(0x1), Mask(0x1)
	uint8_t EnableGeometryCulling : 1; // 0x0(0x1), Mask(0x2)
	uint8_t BitPad_0x0_2 : 6; // 0x0(0x1)
	uint8_t Pad_0x1[0x3]; // 0x1(0x3)
	float GeometryCullingPrecision; // 0x4(0x4)
	uint8_t SubdivideGeometryBasedOnUVTiles : 1; // 0x8(0x1), Mask(0x1)
	uint8_t BitPad_0x8_1 : 7; // 0x8(0x1)
	uint8_t Pad_0x9[0x3]; // 0x9(0x3)
	int32_t SubdivisionTileSize; // 0xC(0x4)
	int32_t ProcessSelectionSetID; // 0x10(0x4)
	uint8_t Pad_0x14[0x4]; // 0x14(0x4)
	struct FString ProcessSelectionSetName; // 0x18(0x10)
	uint8_t KeepUnprocessedSceneMeshes : 1; // 0x28(0x1), Mask(0x1)
	uint8_t BitPad_0x28_1 : 7; // 0x28(0x1)
	uint8_t Pad_0x29[0x7]; // 0x29(0x7)
};

// Object: ScriptStruct SimplygonUObjects.GenerateLightmapTexCoordSettings
// Size: 0x28 (Inherited: 0x0)
struct FGenerateLightmapTexCoordSettings
{
	uint8_t GenerateLightmapTexCoord : 1; // 0x0(0x1), Mask(0x1)
	uint8_t BitPad_0x0_1 : 7; // 0x0(0x1)
	uint8_t Pad_0x1[0x3]; // 0x1(0x3)
	int32_t LightmapTexCoordLevel; // 0x4(0x4)
	struct FString LightmapTexCoordName; // 0x8(0x10)
	EChartAggregatorMode ChartAggregatorMode; // 0x18(0x1)
	uint8_t Pad_0x19[0x3]; // 0x19(0x3)
	int32_t TextureWidth; // 0x1C(0x4)
	int32_t TextureHeight; // 0x20(0x4)
	int32_t GutterSpace; // 0x24(0x4)
};

// Object: ScriptStruct SimplygonUObjects.GeometryCullingSettings
// Size: 0x30 (Inherited: 0x0)
struct FGeometryCullingSettings
{
	uint8_t UseClippingPlanes : 1; // 0x0(0x1), Mask(0x1)
	uint8_t BitPad_0x0_1 : 7; // 0x0(0x1)
	uint8_t Pad_0x1[0x3]; // 0x1(0x3)
	int32_t ClippingPlaneSelectionSetID; // 0x4(0x4)
	struct FString ClippingPlaneSelectionSetName; // 0x8(0x10)
	uint8_t UseClippingGeometry : 1; // 0x18(0x1), Mask(0x1)
	uint8_t BitPad_0x18_1 : 7; // 0x18(0x1)
	uint8_t Pad_0x19[0x3]; // 0x19(0x3)
	int32_t ClippingGeometrySelectionSetID; // 0x1C(0x4)
	struct FString ClippingGeometrySelectionSetName; // 0x20(0x10)
};

// Object: ScriptStruct SimplygonUObjects.VertexWeightSettings
// Size: 0x28 (Inherited: 0x0)
struct FVertexWeightSettings
{
	uint8_t UseVertexWeightsInReducer : 1; // 0x0(0x1), Mask(0x1)
	uint8_t UseVertexWeightsInTexcoordGenerator : 1; // 0x0(0x1), Mask(0x2)
	uint8_t BitPad_0x0_2 : 6; // 0x0(0x1)
	uint8_t Pad_0x1[0x3]; // 0x1(0x3)
	int32_t WeightsFromColorLevel; // 0x4(0x4)
	struct FString WeightsFromColorName; // 0x8(0x10)
	EWeightsFromColorComponent WeightsFromColorComponent; // 0x18(0x1)
	uint8_t Pad_0x19[0x3]; // 0x19(0x3)
	float WeightsFromColorMultiplier; // 0x1C(0x4)
	EWeightsFromColorMode WeightsFromColorMode; // 0x20(0x1)
	uint8_t Pad_0x21[0x7]; // 0x21(0x7)
};

// Object: ScriptStruct SimplygonUObjects.VisibilitySettings
// Size: 0x40 (Inherited: 0x0)
struct FVisibilitySettings
{
	uint8_t UseVisibilityWeightsInReducer : 1; // 0x0(0x1), Mask(0x1)
	uint8_t UseVisibilityWeightsInTexcoordGenerator : 1; // 0x0(0x1), Mask(0x2)
	uint8_t BitPad_0x0_2 : 6; // 0x0(0x1)
	uint8_t Pad_0x1[0x3]; // 0x1(0x3)
	float VisibilityWeightsPower; // 0x4(0x4)
	uint8_t CullOccludedGeometry : 1; // 0x8(0x1), Mask(0x1)
	uint8_t ForceVisibilityCalculation : 1; // 0x8(0x1), Mask(0x2)
	uint8_t UseBackfaceCulling : 1; // 0x8(0x1), Mask(0x4)
	uint8_t BitPad_0x8_3 : 5; // 0x8(0x1)
	uint8_t Pad_0x9[0x3]; // 0x9(0x3)
	int32_t CameraSelectionSetID; // 0xC(0x4)
	struct FString CameraSelectionSetName; // 0x10(0x10)
	int32_t OccluderSelectionSetID; // 0x20(0x4)
	uint8_t Pad_0x24[0x4]; // 0x24(0x4)
	struct FString OccluderSelectionSetName; // 0x28(0x10)
	float FillNonVisibleAreaThreshold; // 0x38(0x4)
	uint8_t RemoveTrianglesNotOccludingOtherTriangles : 1; // 0x3C(0x1), Mask(0x1)
	uint8_t ConservativeMode : 1; // 0x3C(0x1), Mask(0x2)
	uint8_t BitPad_0x3C_2 : 6; // 0x3C(0x1)
	EComputeVisibilityMode ComputeVisibilityMode; // 0x3D(0x1)
	uint8_t Pad_0x3E[0x2]; // 0x3E(0x2)
};

// Object: ScriptStruct SimplygonUObjects.AggregationPipelineSettings
// Size: 0x1C0 (Inherited: 0x8)
struct FAggregationPipelineSettings : FSimplygonPipelineSettings
{
	struct FAggregationSettings AggregationSettings; // 0x8(0x30)
	struct FVisibilitySettings VisibilitySettings; // 0x38(0x40)
	struct FGeometryCullingSettings GeometryCullingSettings; // 0x78(0x30)
	struct FVertexWeightSettings VertexWeightSettings; // 0xA8(0x28)
	struct FAttributeTessellationSettings AttributeTessellationSettings; // 0xD0(0x20)
	struct FMappingImageSettings MappingImageSettings; // 0xF0(0x98)
	struct FGenerateLightmapTexCoordSettings GenerateLightmapTexCoordSettings; // 0x188(0x28)
	struct TArray<struct USimplygonMaterialCaster*> MaterialPropertyCasters; // 0x1B0(0x10)
};

// Object: ScriptStruct SimplygonUObjects.BoneSettings
// Size: 0x58 (Inherited: 0x0)
struct FBoneSettings
{
	uint8_t UseBoneReducer : 1; // 0x0(0x1), Mask(0x1)
	uint8_t RemoveUnusedBones : 1; // 0x0(0x1), Mask(0x2)
	uint8_t LimitBonesPerVertex : 1; // 0x0(0x1), Mask(0x4)
	uint8_t BitPad_0x0_3 : 5; // 0x0(0x1)
	uint8_t Pad_0x1[0x3]; // 0x1(0x3)
	int32_t MaxBonePerVertex; // 0x4(0x4)
	uint8_t BoneReductionTargetBoneRatioEnabled : 1; // 0x8(0x1), Mask(0x1)
	uint8_t BitPad_0x8_1 : 7; // 0x8(0x1)
	uint8_t Pad_0x9[0x3]; // 0x9(0x3)
	float BoneReductionTargetBoneRatio; // 0xC(0x4)
	uint8_t BoneReductionTargetBoneCountEnabled : 1; // 0x10(0x1), Mask(0x1)
	uint8_t BitPad_0x10_1 : 7; // 0x10(0x1)
	uint8_t Pad_0x11[0x3]; // 0x11(0x3)
	int32_t BoneReductionTargetBoneCount; // 0x14(0x4)
	uint8_t BoneReductionTargetMaxDeviationEnabled : 1; // 0x18(0x1), Mask(0x1)
	uint8_t BitPad_0x18_1 : 7; // 0x18(0x1)
	uint8_t Pad_0x19[0x3]; // 0x19(0x3)
	float BoneReductionTargetMaxDeviation; // 0x1C(0x4)
	uint8_t BoneReductionTargetOnScreenSizeEnabled : 1; // 0x20(0x1), Mask(0x1)
	uint8_t BitPad_0x20_1 : 7; // 0x20(0x1)
	uint8_t Pad_0x21[0x3]; // 0x21(0x3)
	int32_t BoneReductionTargetOnScreenSize; // 0x24(0x4)
	EBoneReductionTargetStopCondition BoneReductionTargetStopCondition; // 0x28(0x1)
	uint8_t Pad_0x29[0x3]; // 0x29(0x3)
	int32_t LockBoneSelectionSetID; // 0x2C(0x4)
	struct FString LockBoneSelectionSetName; // 0x30(0x10)
	int32_t RemoveBoneSelectionSetID; // 0x40(0x4)
	uint8_t Pad_0x44[0x4]; // 0x44(0x4)
	struct FString RemoveBoneSelectionSetName; // 0x48(0x10)
};

// Object: ScriptStruct SimplygonUObjects.RemeshingSettings
// Size: 0x40 (Inherited: 0x0)
struct FRemeshingSettings
{
	int32_t OnScreenSize; // 0x0(0x4)
	EHoleFilling HoleFilling; // 0x4(0x1)
	ERemeshingMode RemeshingMode; // 0x5(0x1)
	ESurfaceTransferMode SurfaceTransferMode; // 0x6(0x1)
	uint8_t Pad_0x7[0x1]; // 0x7(0x1)
	float HardEdgeAngle; // 0x8(0x4)
	uint8_t TransferNormals : 1; // 0xC(0x1), Mask(0x1)
	uint8_t TransferColors : 1; // 0xC(0x1), Mask(0x2)
	uint8_t PopulateAttributeTessellationDisplacement : 1; // 0xC(0x1), Mask(0x4)
	uint8_t BitPad_0xC_3 : 5; // 0xC(0x1)
	uint8_t Pad_0xD[0x3]; // 0xD(0x3)
	float GeometricalAccuracy; // 0x10(0x4)
	float TopologicalAccuracy; // 0x14(0x4)
	float RemeshingModeManualPositionX; // 0x18(0x4)
	float RemeshingModeManualPositionY; // 0x1C(0x4)
	float RemeshingModeManualPositionZ; // 0x20(0x4)
	uint8_t Pad_0x24[0x4]; // 0x24(0x4)
	struct FString ProcessSelectionSetName; // 0x28(0x10)
	int32_t ProcessSelectionSetID; // 0x38(0x4)
	uint8_t KeepUnprocessedSceneMeshes : 1; // 0x3C(0x1), Mask(0x1)
	uint8_t ForceSoftEdgesWithinTextureCharts : 1; // 0x3C(0x1), Mask(0x2)
	uint8_t BitPad_0x3C_2 : 6; // 0x3C(0x1)
	uint8_t Pad_0x3D[0x3]; // 0x3D(0x3)
};

// Object: ScriptStruct SimplygonUObjects.RemeshingPipelineSettings
// Size: 0x1D8 (Inherited: 0x8)
struct FRemeshingPipelineSettings : FSimplygonPipelineSettings
{
	struct FRemeshingSettings RemeshingSettings; // 0x8(0x40)
	struct FBoneSettings BoneSettings; // 0x48(0x58)
	struct FGeometryCullingSettings GeometryCullingSettings; // 0xA0(0x30)
	struct FVisibilitySettings VisibilitySettings; // 0xD0(0x40)
	struct FAttributeTessellationSettings AttributeTessellationSettings; // 0x110(0x20)
	struct FMappingImageSettings MappingImageSettings; // 0x130(0x98)
	struct TArray<struct USimplygonMaterialCaster*> MaterialPropertyCasters; // 0x1C8(0x10)
};

// Object: ScriptStruct SimplygonUObjects.ColorCasterSettings
// Size: 0x30 (Inherited: 0x0)
struct FColorCasterSettings
{
	struct FString MaterialChannel; // 0x0(0x10)
	struct FString OpacityChannel; // 0x10(0x10)
	EOpacityChannelComponent OpacityChannelComponent; // 0x20(0x1)
	EDitherType DitherType; // 0x21(0x1)
	EFillMode FillMode; // 0x22(0x1)
	uint8_t Pad_0x23[0x1]; // 0x23(0x1)
	int32_t Dilation; // 0x24(0x4)
	uint8_t UseMultisampling : 1; // 0x28(0x1), Mask(0x1)
	uint8_t BitPad_0x28_1 : 7; // 0x28(0x1)
	EOutputPixelFormat OutputPixelFormat; // 0x29(0x1)
	EOutputImageFileFormat OutputImageFileFormat; // 0x2A(0x1)
	EOutputDDSCompressionType OutputDDSCompressionType; // 0x2B(0x1)
	uint8_t OutputSRGB : 1; // 0x2C(0x1), Mask(0x1)
	uint8_t BakeOpacityInAlpha : 1; // 0x2C(0x1), Mask(0x2)
	uint8_t SkipCastingIfNoInputChannel : 1; // 0x2C(0x1), Mask(0x4)
	uint8_t BitPad_0x2C_3 : 5; // 0x2C(0x1)
	EOutputOpacityType OutputOpacityType; // 0x2D(0x1)
	uint8_t Pad_0x2E[0x2]; // 0x2E(0x2)
};

// Object: ScriptStruct SimplygonUObjects.BaseColorCasterSettingsWrapper
// Size: 0x30 (Inherited: 0x0)
struct FBaseColorCasterSettingsWrapper
{
	struct FColorCasterSettings BaseColorCasterSettings; // 0x0(0x30)
};

// Object: ScriptStruct SimplygonUObjects.NormalCasterSettings
// Size: 0x30 (Inherited: 0x0)
struct FNormalCasterSettings
{
	struct FString MaterialChannel; // 0x0(0x10)
	struct FString OpacityChannel; // 0x10(0x10)
	EOpacityChannelComponent OpacityChannelComponent; // 0x20(0x1)
	EDitherType DitherType; // 0x21(0x1)
	EFillMode FillMode; // 0x22(0x1)
	uint8_t Pad_0x23[0x1]; // 0x23(0x1)
	int32_t Dilation; // 0x24(0x4)
	uint8_t UseMultisampling : 1; // 0x28(0x1), Mask(0x1)
	uint8_t BitPad_0x28_1 : 7; // 0x28(0x1)
	EOutputPixelFormat OutputPixelFormat; // 0x29(0x1)
	EOutputImageFileFormat OutputImageFileFormat; // 0x2A(0x1)
	EOutputDDSCompressionType OutputDDSCompressionType; // 0x2B(0x1)
	uint8_t FlipBackfacingNormals : 1; // 0x2C(0x1), Mask(0x1)
	uint8_t BitPad_0x2C_1 : 7; // 0x2C(0x1)
	EFlipBackfacingMode FlipBackfacingMode; // 0x2D(0x1)
	uint8_t GenerateTangentSpaceNormals : 1; // 0x2E(0x1), Mask(0x1)
	uint8_t FlipGreen : 1; // 0x2E(0x1), Mask(0x2)
	uint8_t CalculateBitangentPerFragment : 1; // 0x2E(0x1), Mask(0x4)
	uint8_t NormalizeInterpolatedTangentSpace : 1; // 0x2E(0x1), Mask(0x8)
	uint8_t BitPad_0x2E_4 : 4; // 0x2E(0x1)
	uint8_t Pad_0x2F[0x1]; // 0x2F(0x1)
};

// Object: ScriptStruct SimplygonUObjects.NormalCasterSettingsWrapper
// Size: 0x30 (Inherited: 0x0)
struct FNormalCasterSettingsWrapper
{
	struct FNormalCasterSettings NormalCasterSettings; // 0x0(0x30)
};

// Object: ScriptStruct SimplygonUObjects.RawMappingImageSettings
// Size: 0x98 (Inherited: 0x0)
struct FRawMappingImageSettings
{
	uint8_t GenerateMappingImage : 1; // 0x0(0x1), Mask(0x1)
	uint8_t GenerateTexCoords : 1; // 0x0(0x1), Mask(0x2)
	uint8_t GenerateTangents : 1; // 0x0(0x1), Mask(0x4)
	uint8_t ReplaceMappingImages : 1; // 0x0(0x1), Mask(0x8)
	uint8_t UseFullRetexturing : 1; // 0x0(0x1), Mask(0x10)
	uint8_t ApplyNewMaterialIds : 1; // 0x0(0x1), Mask(0x20)
	uint8_t UseAutomaticTextureSize : 1; // 0x0(0x1), Mask(0x40)
	uint8_t BitPad_0x0_7 : 1; // 0x0(0x1)
	uint8_t Pad_0x1[0x3]; // 0x1(0x3)
	float AutomaticTextureSizeMultiplier; // 0x4(0x4)
	uint8_t ForcePower2Texture : 1; // 0x8(0x1), Mask(0x1)
	uint8_t OnlyParameterizeInvalidUVs : 1; // 0x8(0x1), Mask(0x2)
	uint8_t AllowTransparencyMapping : 1; // 0x8(0x1), Mask(0x4)
	uint8_t BitPad_0x8_3 : 5; // 0x8(0x1)
	uint8_t Pad_0x9[0x3]; // 0x9(0x3)
	int32_t MaximumLayers; // 0xC(0x4)
	int32_t TexCoordLevel; // 0x10(0x4)
	uint8_t Pad_0x14[0x4]; // 0x14(0x4)
	struct FString TexCoordName; // 0x18(0x10)
	ETexCoordGeneratorType TexCoordGeneratorType; // 0x28(0x1)
	uint8_t Pad_0x29[0x3]; // 0x29(0x3)
	int32_t OutputMaterialCount; // 0x2C(0x4)
	int32_t InputMaterialCount; // 0x30(0x4)
	uint8_t Pad_0x34[0x4]; // 0x34(0x4)
	struct FChartAggregatorSettings ChartAggregatorSettings; // 0x38(0x38)
	struct FParameterizerSettings ParameterizerSettings; // 0x70(0x8)
	struct TArray<struct FInputMaterialSettings> InputMaterialSettings; // 0x78(0x10)
	struct TArray<struct FOutputMaterialSettings> OutputMaterialSettings; // 0x88(0x10)
};

// Object: ScriptStruct SimplygonUObjects.RawRemeshingPipelineSettings
// Size: 0x220 (Inherited: 0x0)
struct FRawRemeshingPipelineSettings
{
	struct FRemeshingSettings RemeshingSettings; // 0x0(0x40)
	struct FBoneSettings BoneSettings; // 0x40(0x58)
	struct FGeometryCullingSettings GeometryCullingSettings; // 0x98(0x30)
	struct FVisibilitySettings VisibilitySettings; // 0xC8(0x40)
	struct FAttributeTessellationSettings AttributeTessellationSettings; // 0x108(0x20)
	struct FRawMappingImageSettings MappingImageSettings; // 0x128(0x98)
	struct FBaseColorCasterSettingsWrapper BaseColorCasterSettings; // 0x1C0(0x30)
	struct FNormalCasterSettingsWrapper NormalCasterSettings; // 0x1F0(0x30)
};

// Object: ScriptStruct SimplygonUObjects.NormalCalculationSettings
// Size: 0xC (Inherited: 0x0)
struct FNormalCalculationSettings
{
	uint8_t ReplaceNormals : 1; // 0x0(0x1), Mask(0x1)
	uint8_t RepairInvalidNormals : 1; // 0x0(0x1), Mask(0x2)
	uint8_t BitPad_0x0_2 : 6; // 0x0(0x1)
	uint8_t Pad_0x1[0x3]; // 0x1(0x3)
	float HardEdgeAngle; // 0x4(0x4)
	uint8_t ReplaceTangents : 1; // 0x8(0x1), Mask(0x1)
	uint8_t ReorthogonalizeTangentSpace : 1; // 0x8(0x1), Mask(0x2)
	uint8_t ScaleByArea : 1; // 0x8(0x1), Mask(0x4)
	uint8_t ScaleByAngle : 1; // 0x8(0x1), Mask(0x8)
	uint8_t SnapNormalsToFlatSurfaces : 1; // 0x8(0x1), Mask(0x10)
	uint8_t BitPad_0x8_5 : 3; // 0x8(0x1)
	uint8_t Pad_0x9[0x3]; // 0x9(0x3)
};

// Object: ScriptStruct SimplygonUObjects.ReductionSettings
// Size: 0x80 (Inherited: 0x0)
struct FReductionSettings
{
	uint8_t ReductionTargetTriangleRatioEnabled : 1; // 0x0(0x1), Mask(0x1)
	uint8_t BitPad_0x0_1 : 7; // 0x0(0x1)
	uint8_t Pad_0x1[0x3]; // 0x1(0x3)
	float ReductionTargetTriangleRatio; // 0x4(0x4)
	uint8_t ReductionTargetTriangleCountEnabled : 1; // 0x8(0x1), Mask(0x1)
	uint8_t BitPad_0x8_1 : 7; // 0x8(0x1)
	uint8_t Pad_0x9[0x3]; // 0x9(0x3)
	int32_t ReductionTargetTriangleCount; // 0xC(0x4)
	uint8_t ReductionTargetMaxDeviationEnabled : 1; // 0x10(0x1), Mask(0x1)
	uint8_t BitPad_0x10_1 : 7; // 0x10(0x1)
	uint8_t Pad_0x11[0x3]; // 0x11(0x3)
	float ReductionTargetMaxDeviation; // 0x14(0x4)
	uint8_t ReductionTargetOnScreenSizeEnabled : 1; // 0x18(0x1), Mask(0x1)
	uint8_t BitPad_0x18_1 : 7; // 0x18(0x1)
	uint8_t Pad_0x19[0x3]; // 0x19(0x3)
	int32_t ReductionTargetOnScreenSize; // 0x1C(0x4)
	EReductionPerformanceMode ReductionPerformanceMode; // 0x20(0x1)
	EReductionTargetStopCondition ReductionTargetStopCondition; // 0x21(0x1)
	EReductionHeuristics ReductionHeuristics; // 0x22(0x1)
	uint8_t Pad_0x23[0x1]; // 0x23(0x1)
	float GeometryImportance; // 0x24(0x4)
	float MaterialImportance; // 0x28(0x4)
	float TextureImportance; // 0x2C(0x4)
	float ShadingImportance; // 0x30(0x4)
	float GroupImportance; // 0x34(0x4)
	float VertexColorImportance; // 0x38(0x4)
	float EdgeSetImportance; // 0x3C(0x4)
	float SkinningImportance; // 0x40(0x4)
	float OutwardMoveMultiplier; // 0x44(0x4)
	float InwardMoveMultiplier; // 0x48(0x4)
	float MaxEdgeLength; // 0x4C(0x4)
	uint8_t KeepSymmetry : 1; // 0x50(0x1), Mask(0x1)
	uint8_t UseSymmetryQuadRetriangulator : 1; // 0x50(0x1), Mask(0x2)
	uint8_t UseAutomaticSymmetryDetection : 1; // 0x50(0x1), Mask(0x4)
	uint8_t BitPad_0x50_3 : 5; // 0x50(0x1)
	uint8_t Pad_0x51[0x3]; // 0x51(0x3)
	float SymmetryDetectionTolerance; // 0x54(0x4)
	ESymmetryAxis SymmetryAxis; // 0x58(0x1)
	uint8_t Pad_0x59[0x3]; // 0x59(0x3)
	float SymmetryOffset; // 0x5C(0x4)
	uint8_t CreateGeomorphGeometry : 1; // 0x60(0x1), Mask(0x1)
	uint8_t GenerateGeomorphData : 1; // 0x60(0x1), Mask(0x2)
	uint8_t BitPad_0x60_2 : 6; // 0x60(0x1)
	EDataCreationPreferences DataCreationPreferences; // 0x61(0x1)
	uint8_t UseHighQualityNormalCalculation : 1; // 0x62(0x1), Mask(0x1)
	uint8_t LockGeometricBorder : 1; // 0x62(0x1), Mask(0x2)
	uint8_t MergeGeometries : 1; // 0x62(0x1), Mask(0x4)
	uint8_t AllowDegenerateTexCoords : 1; // 0x62(0x1), Mask(0x8)
	uint8_t BitPad_0x62_4 : 4; // 0x62(0x1)
	uint8_t Pad_0x63[0x1]; // 0x63(0x1)
	int32_t ProcessSelectionSetID; // 0x64(0x4)
	struct FString ProcessSelectionSetName; // 0x68(0x10)
	uint8_t KeepUnprocessedSceneMeshes : 1; // 0x78(0x1), Mask(0x1)
	uint8_t PreserveQuadFlags : 1; // 0x78(0x1), Mask(0x2)
	uint8_t BitPad_0x78_2 : 6; // 0x78(0x1)
	uint8_t Pad_0x79[0x7]; // 0x79(0x7)
};

// Object: ScriptStruct SimplygonUObjects.RepairSettings
// Size: 0x14 (Inherited: 0x0)
struct FRepairSettings
{
	uint8_t UseTJunctionRemover : 1; // 0x0(0x1), Mask(0x1)
	uint8_t BitPad_0x0_1 : 7; // 0x0(0x1)
	uint8_t Pad_0x1[0x3]; // 0x1(0x3)
	float TJuncDist; // 0x4(0x4)
	uint8_t UseWelding : 1; // 0x8(0x1), Mask(0x1)
	uint8_t WeldOnlyBorderVertices : 1; // 0x8(0x1), Mask(0x2)
	uint8_t WeldOnlyWithinMaterial : 1; // 0x8(0x1), Mask(0x4)
	uint8_t WeldOnlyWithinSceneNode : 1; // 0x8(0x1), Mask(0x8)
	uint8_t WeldOnlyBetweenSceneNodes : 1; // 0x8(0x1), Mask(0x10)
	uint8_t BitPad_0x8_5 : 3; // 0x8(0x1)
	uint8_t Pad_0x9[0x3]; // 0x9(0x3)
	float WeldDist; // 0xC(0x4)
	int32_t ProgressivePasses; // 0x10(0x4)
};

// Object: ScriptStruct SimplygonUObjects.ReductionPipelineSettings
// Size: 0x230 (Inherited: 0x8)
struct FReductionPipelineSettings : FSimplygonPipelineSettings
{
	struct FReductionSettings ReductionSettings; // 0x8(0x80)
	struct FRepairSettings RepairSettings; // 0x88(0x14)
	struct FNormalCalculationSettings NormalCalculationSettings; // 0x9C(0xC)
	struct FVisibilitySettings VisibilitySettings; // 0xA8(0x40)
	struct FBoneSettings BoneSettings; // 0xE8(0x58)
	struct FVertexWeightSettings VertexWeightSettings; // 0x140(0x28)
	struct FAttributeTessellationSettings AttributeTessellationSettings; // 0x168(0x20)
	struct FMappingImageSettings MappingImageSettings; // 0x188(0x98)
	struct TArray<struct USimplygonMaterialCaster*> MaterialPropertyCasters; // 0x220(0x10)
};

// Object: ScriptStruct SimplygonUObjects.ComputeCasterSettings
// Size: 0x38 (Inherited: 0x0)
struct FComputeCasterSettings
{
	struct FString MaterialChannel; // 0x0(0x10)
	struct FString OpacityChannel; // 0x10(0x10)
	EOpacityChannelComponent OpacityChannelComponent; // 0x20(0x1)
	EDitherType DitherType; // 0x21(0x1)
	EFillMode FillMode; // 0x22(0x1)
	uint8_t Pad_0x23[0x1]; // 0x23(0x1)
	int32_t Dilation; // 0x24(0x4)
	uint8_t UseMultisampling : 1; // 0x28(0x1), Mask(0x1)
	uint8_t BitPad_0x28_1 : 7; // 0x28(0x1)
	EOutputPixelFormat OutputPixelFormat; // 0x29(0x1)
	EOutputImageFileFormat OutputImageFileFormat; // 0x2A(0x1)
	EOutputDDSCompressionType OutputDDSCompressionType; // 0x2B(0x1)
	EOutputColorSpace OutputColorSpace; // 0x2C(0x1)
	uint8_t CastLayersFrontToBack : 1; // 0x2D(0x1), Mask(0x1)
	uint8_t BitPad_0x2D_1 : 7; // 0x2D(0x1)
	uint8_t Pad_0x2E[0x2]; // 0x2E(0x2)
	int32_t MaxCastLayers; // 0x30(0x4)
	EShaderCodeInputMode ShaderCodeInputMode; // 0x34(0x1)
	uint8_t Pad_0x35[0x3]; // 0x35(0x3)
};

// Object: ScriptStruct SimplygonUObjects.VertexColorCasterSettings
// Size: 0x48 (Inherited: 0x0)
struct FVertexColorCasterSettings
{
	struct FString MaterialChannel; // 0x0(0x10)
	struct FString OpacityChannel; // 0x10(0x10)
	EOpacityChannelComponent OpacityChannelComponent; // 0x20(0x1)
	EDitherType DitherType; // 0x21(0x1)
	EFillMode FillMode; // 0x22(0x1)
	uint8_t Pad_0x23[0x1]; // 0x23(0x1)
	int32_t Dilation; // 0x24(0x4)
	uint8_t UseMultisampling : 1; // 0x28(0x1), Mask(0x1)
	uint8_t BitPad_0x28_1 : 7; // 0x28(0x1)
	EOutputPixelFormat OutputPixelFormat; // 0x29(0x1)
	EOutputImageFileFormat OutputImageFileFormat; // 0x2A(0x1)
	EOutputDDSCompressionType OutputDDSCompressionType; // 0x2B(0x1)
	int32_t OutputColorLevel; // 0x2C(0x4)
	struct FString OutputColorName; // 0x30(0x10)
	float ColorSpaceEdgeThreshold; // 0x40(0x4)
	uint8_t Pad_0x44[0x4]; // 0x44(0x4)
};

// Object: ScriptStruct SimplygonUObjects.GeometryDataCasterSettings
// Size: 0x60 (Inherited: 0x0)
struct FGeometryDataCasterSettings
{
	struct FString MaterialChannel; // 0x0(0x10)
	struct FString OpacityChannel; // 0x10(0x10)
	EOpacityChannelComponent OpacityChannelComponent; // 0x20(0x1)
	EDitherType DitherType; // 0x21(0x1)
	EFillMode FillMode; // 0x22(0x1)
	uint8_t Pad_0x23[0x1]; // 0x23(0x1)
	int32_t Dilation; // 0x24(0x4)
	uint8_t UseMultisampling : 1; // 0x28(0x1), Mask(0x1)
	uint8_t BitPad_0x28_1 : 7; // 0x28(0x1)
	EOutputPixelFormat OutputPixelFormat; // 0x29(0x1)
	EOutputImageFileFormat OutputImageFileFormat; // 0x2A(0x1)
	EOutputDDSCompressionType OutputDDSCompressionType; // 0x2B(0x1)
	EGeometryDataFieldType GeometryDataFieldType; // 0x2C(0x1)
	uint8_t Pad_0x2D[0x3]; // 0x2D(0x3)
	int32_t GeometryDataFieldIndex; // 0x30(0x4)
	int32_t MappingLayerIndex; // 0x34(0x4)
	uint8_t Pad_0x38[0x8]; // 0x38(0x8)
	struct FVector4 MappingInf; // 0x40(0x10)
	struct FVector4 MappingSup; // 0x50(0x10)
};

// Object: ScriptStruct SimplygonUObjects.AmbientOcclusionCasterSettings
// Size: 0x40 (Inherited: 0x0)
struct FAmbientOcclusionCasterSettings
{
	struct FString MaterialChannel; // 0x0(0x10)
	struct FString OpacityChannel; // 0x10(0x10)
	EOpacityChannelComponent OpacityChannelComponent; // 0x20(0x1)
	EDitherType DitherType; // 0x21(0x1)
	EFillMode FillMode; // 0x22(0x1)
	uint8_t Pad_0x23[0x1]; // 0x23(0x1)
	int32_t Dilation; // 0x24(0x4)
	uint8_t UseMultisampling : 1; // 0x28(0x1), Mask(0x1)
	uint8_t BitPad_0x28_1 : 7; // 0x28(0x1)
	EOutputPixelFormat OutputPixelFormat; // 0x29(0x1)
	EOutputImageFileFormat OutputImageFileFormat; // 0x2A(0x1)
	EOutputDDSCompressionType OutputDDSCompressionType; // 0x2B(0x1)
	int32_t RaysPerPixel; // 0x2C(0x4)
	float OcclusionFalloff; // 0x30(0x4)
	float OcclusionMultiplier; // 0x34(0x4)
	uint8_t UseSimpleOcclusionMode : 1; // 0x38(0x1), Mask(0x1)
	uint8_t FlipBackfacingNormals : 1; // 0x38(0x1), Mask(0x2)
	uint8_t BitPad_0x38_2 : 6; // 0x38(0x1)
	uint8_t Pad_0x39[0x7]; // 0x39(0x7)
};

// Object: ScriptStruct SimplygonUObjects.DisplacementCasterSettings
// Size: 0x38 (Inherited: 0x0)
struct FDisplacementCasterSettings
{
	struct FString MaterialChannel; // 0x0(0x10)
	struct FString OpacityChannel; // 0x10(0x10)
	EOpacityChannelComponent OpacityChannelComponent; // 0x20(0x1)
	EDitherType DitherType; // 0x21(0x1)
	EFillMode FillMode; // 0x22(0x1)
	uint8_t Pad_0x23[0x1]; // 0x23(0x1)
	int32_t Dilation; // 0x24(0x4)
	uint8_t UseMultisampling : 1; // 0x28(0x1), Mask(0x1)
	uint8_t BitPad_0x28_1 : 7; // 0x28(0x1)
	EOutputPixelFormat OutputPixelFormat; // 0x29(0x1)
	EOutputImageFileFormat OutputImageFileFormat; // 0x2A(0x1)
	EOutputDDSCompressionType OutputDDSCompressionType; // 0x2B(0x1)
	float DistanceScaling; // 0x2C(0x4)
	uint8_t GenerateScalarDisplacement : 1; // 0x30(0x1), Mask(0x1)
	uint8_t OutputToTessellatedAttributes : 1; // 0x30(0x1), Mask(0x2)
	uint8_t GenerateTangentSpaceDisplacement : 1; // 0x30(0x1), Mask(0x4)
	uint8_t BitPad_0x30_3 : 5; // 0x30(0x1)
	uint8_t Pad_0x31[0x3]; // 0x31(0x3)
	int32_t NormalMapTexCoordLevel; // 0x34(0x4)
};

// Object: ScriptStruct SimplygonUObjects.OpacityCasterSettings
// Size: 0x30 (Inherited: 0x0)
struct FOpacityCasterSettings
{
	struct FString MaterialChannel; // 0x0(0x10)
	struct FString OpacityChannel; // 0x10(0x10)
	EOpacityChannelComponent OpacityChannelComponent; // 0x20(0x1)
	EDitherType DitherType; // 0x21(0x1)
	EFillMode FillMode; // 0x22(0x1)
	uint8_t Pad_0x23[0x1]; // 0x23(0x1)
	int32_t Dilation; // 0x24(0x4)
	uint8_t UseMultisampling : 1; // 0x28(0x1), Mask(0x1)
	uint8_t BitPad_0x28_1 : 7; // 0x28(0x1)
	EOutputPixelFormat OutputPixelFormat; // 0x29(0x1)
	EOutputImageFileFormat OutputImageFileFormat; // 0x2A(0x1)
	EOutputDDSCompressionType OutputDDSCompressionType; // 0x2B(0x1)
	uint8_t OutputSRGB : 1; // 0x2C(0x1), Mask(0x1)
	uint8_t OutputToTessellatedAttributes : 1; // 0x2C(0x1), Mask(0x2)
	uint8_t BitPad_0x2C_2 : 6; // 0x2C(0x1)
	EOutputOpacityType OutputOpacityType; // 0x2D(0x1)
	uint8_t Pad_0x2E[0x2]; // 0x2E(0x2)
};

// Object: Class SimplygonUObjects.SimplygonStandinPipeline
// Size: 0x60 (Inherited: 0x28)
struct USimplygonStandinPipeline : UObject
{
	struct FChartAggregatorSettings ChartAggregatorSettings; // 0x28(0x38)
	DEFINE_UE_CLASS_HELPERS(USimplygonStandinPipeline, "SimplygonStandinPipeline")

};

// Object: Class SimplygonUObjects.StandinNearPipeline
// Size: 0x220 (Inherited: 0x60)
struct UStandinNearPipeline : USimplygonStandinPipeline
{
	struct FAggregationPipelineSettings Settings; // 0x60(0x1C0)
	DEFINE_UE_CLASS_HELPERS(UStandinNearPipeline, "StandinNearPipeline")

};

// Object: Class SimplygonUObjects.StandinFarPipeline
// Size: 0x238 (Inherited: 0x60)
struct UStandinFarPipeline : USimplygonStandinPipeline
{
	struct FRemeshingPipelineSettings Settings; // 0x60(0x1D8)
	DEFINE_UE_CLASS_HELPERS(UStandinFarPipeline, "StandinFarPipeline")

};

// Object: Class SimplygonUObjects.BillboardCloudPipeline
// Size: 0x168 (Inherited: 0x60)
struct UBillboardCloudPipeline : USimplygonStandinPipeline
{
	struct FBillboardCloudPipelineSettings Settings; // 0x60(0x108)
	DEFINE_UE_CLASS_HELPERS(UBillboardCloudPipeline, "BillboardCloudPipeline")

};

// Object: Class SimplygonUObjects.SimplygonPipeline
// Size: 0x28 (Inherited: 0x28)
struct USimplygonPipeline : UObject
{	DEFINE_UE_CLASS_HELPERS(USimplygonPipeline, "SimplygonPipeline")

};

// Object: Class SimplygonUObjects.FlipbookPipeline
// Size: 0x128 (Inherited: 0x28)
struct UFlipbookPipeline : USimplygonPipeline
{
	struct FFlipbookPipelineSettings Settings; // 0x28(0x100)
	DEFINE_UE_CLASS_HELPERS(UFlipbookPipeline, "FlipbookPipeline")

};

// Object: Class SimplygonUObjects.BillboardCloudVegetationPipeline
// Size: 0x130 (Inherited: 0x28)
struct UBillboardCloudVegetationPipeline : USimplygonPipeline
{
	struct FBillboardCloudVegetationPipelineSettings Settings; // 0x28(0x108)
	DEFINE_UE_CLASS_HELPERS(UBillboardCloudVegetationPipeline, "BillboardCloudVegetationPipeline")

};

// Object: Class SimplygonUObjects.RemeshingPipeline
// Size: 0x200 (Inherited: 0x28)
struct URemeshingPipeline : USimplygonPipeline
{
	struct FRemeshingPipelineSettings Settings; // 0x28(0x1D8)
	DEFINE_UE_CLASS_HELPERS(URemeshingPipeline, "RemeshingPipeline")

};

// Object: Class SimplygonUObjects.HighDensityMeshReductionPipeline
// Size: 0x58 (Inherited: 0x28)
struct UHighDensityMeshReductionPipeline : USimplygonPipeline
{
	struct FHighDensityMeshReductionPipelineSettings Settings; // 0x28(0x30)
	DEFINE_UE_CLASS_HELPERS(UHighDensityMeshReductionPipeline, "HighDensityMeshReductionPipeline")

};

// Object: Class SimplygonUObjects.SimplygonMaterialCaster
// Size: 0x28 (Inherited: 0x28)
struct USimplygonMaterialCaster : UObject
{	DEFINE_UE_CLASS_HELPERS(USimplygonMaterialCaster, "SimplygonMaterialCaster")

};

// Object: Class SimplygonUObjects.SimplygonColorCaster
// Size: 0x58 (Inherited: 0x28)
struct USimplygonColorCaster : USimplygonMaterialCaster
{
	struct FColorCasterSettings ColorCasterSettings; // 0x28(0x30)
	DEFINE_UE_CLASS_HELPERS(USimplygonColorCaster, "SimplygonColorCaster")

};

// Object: Class SimplygonUObjects.BaseColorCaster
// Size: 0x58 (Inherited: 0x58)
struct UBaseColorCaster : USimplygonColorCaster
{	DEFINE_UE_CLASS_HELPERS(UBaseColorCaster, "BaseColorCaster")

};

// Object: Class SimplygonUObjects.MetallicCaster
// Size: 0x58 (Inherited: 0x58)
struct UMetallicCaster : UBaseColorCaster
{	DEFINE_UE_CLASS_HELPERS(UMetallicCaster, "MetallicCaster")

};

// Object: Class SimplygonUObjects.SpecualarCaster
// Size: 0x58 (Inherited: 0x58)
struct USpecualarCaster : UBaseColorCaster
{	DEFINE_UE_CLASS_HELPERS(USpecualarCaster, "SpecualarCaster")

};

// Object: Class SimplygonUObjects.RoughnessCaster
// Size: 0x58 (Inherited: 0x58)
struct URoughnessCaster : UBaseColorCaster
{	DEFINE_UE_CLASS_HELPERS(URoughnessCaster, "RoughnessCaster")

};

// Object: Class SimplygonUObjects.SimplygonNormalCaster
// Size: 0x58 (Inherited: 0x28)
struct USimplygonNormalCaster : USimplygonMaterialCaster
{
	struct FNormalCasterSettings NormalCasterSettings; // 0x28(0x30)
	DEFINE_UE_CLASS_HELPERS(USimplygonNormalCaster, "SimplygonNormalCaster")

};

// Object: Class SimplygonUObjects.NormalCaster
// Size: 0x58 (Inherited: 0x58)
struct UNormalCaster : USimplygonNormalCaster
{	DEFINE_UE_CLASS_HELPERS(UNormalCaster, "NormalCaster")

};

// Object: Class SimplygonUObjects.SimplygonOpacityCaster
// Size: 0x58 (Inherited: 0x28)
struct USimplygonOpacityCaster : USimplygonMaterialCaster
{
	struct FOpacityCasterSettings OpacityCasterSettings; // 0x28(0x30)
	DEFINE_UE_CLASS_HELPERS(USimplygonOpacityCaster, "SimplygonOpacityCaster")

};

// Object: Class SimplygonUObjects.OpacityCaster
// Size: 0x58 (Inherited: 0x58)
struct UOpacityCaster : USimplygonOpacityCaster
{	DEFINE_UE_CLASS_HELPERS(UOpacityCaster, "OpacityCaster")

};

// Object: Class SimplygonUObjects.EmissiveCaster
// Size: 0x58 (Inherited: 0x58)
struct UEmissiveCaster : UBaseColorCaster
{	DEFINE_UE_CLASS_HELPERS(UEmissiveCaster, "EmissiveCaster")

};

// Object: Class SimplygonUObjects.OpacityMaskCaster
// Size: 0x58 (Inherited: 0x58)
struct UOpacityMaskCaster : USimplygonOpacityCaster
{	DEFINE_UE_CLASS_HELPERS(UOpacityMaskCaster, "OpacityMaskCaster")

};

// Object: Class SimplygonUObjects.AmbientOcclusionMaskCaster
// Size: 0x58 (Inherited: 0x58)
struct UAmbientOcclusionMaskCaster : UBaseColorCaster
{	DEFINE_UE_CLASS_HELPERS(UAmbientOcclusionMaskCaster, "AmbientOcclusionMaskCaster")

};

// Object: Class SimplygonUObjects.ReductionPipeline
// Size: 0x258 (Inherited: 0x28)
struct UReductionPipeline : USimplygonPipeline
{
	struct FReductionPipelineSettings Settings; // 0x28(0x230)
	DEFINE_UE_CLASS_HELPERS(UReductionPipeline, "ReductionPipeline")

};

// Object: Class SimplygonUObjects.AggregationPipeline
// Size: 0x1E8 (Inherited: 0x28)
struct UAggregationPipeline : USimplygonPipeline
{
	struct FAggregationPipelineSettings Settings; // 0x28(0x1C0)
	DEFINE_UE_CLASS_HELPERS(UAggregationPipeline, "AggregationPipeline")

};

// Object: Class SimplygonUObjects.SimplygonDisplacementCaster
// Size: 0x60 (Inherited: 0x28)
struct USimplygonDisplacementCaster : USimplygonMaterialCaster
{
	struct FDisplacementCasterSettings DisplacementCasterSettings; // 0x28(0x38)
	DEFINE_UE_CLASS_HELPERS(USimplygonDisplacementCaster, "SimplygonDisplacementCaster")

};

// Object: Class SimplygonUObjects.SimplygonAmbientOcclusionCaster
// Size: 0x68 (Inherited: 0x28)
struct USimplygonAmbientOcclusionCaster : USimplygonMaterialCaster
{
	struct FAmbientOcclusionCasterSettings AmbientOcclusionCasterSettings; // 0x28(0x40)
	DEFINE_UE_CLASS_HELPERS(USimplygonAmbientOcclusionCaster, "SimplygonAmbientOcclusionCaster")

};

// Object: Class SimplygonUObjects.SimplygonGeometryDataCaster
// Size: 0x90 (Inherited: 0x28)
struct USimplygonGeometryDataCaster : USimplygonMaterialCaster
{
	uint8_t Pad_0x28[0x8]; // 0x28(0x8)
	struct FGeometryDataCasterSettings GeometryDataCasterSettings; // 0x30(0x60)
	DEFINE_UE_CLASS_HELPERS(USimplygonGeometryDataCaster, "SimplygonGeometryDataCaster")

};

// Object: Class SimplygonUObjects.SimplygonVertexColorCaster
// Size: 0x70 (Inherited: 0x28)
struct USimplygonVertexColorCaster : USimplygonMaterialCaster
{
	struct FVertexColorCasterSettings VertexColorCasterSettings; // 0x28(0x48)
	DEFINE_UE_CLASS_HELPERS(USimplygonVertexColorCaster, "SimplygonVertexColorCaster")

};

// Object: Class SimplygonUObjects.SimplygonComputeCaster
// Size: 0x60 (Inherited: 0x28)
struct USimplygonComputeCaster : USimplygonMaterialCaster
{
	struct FComputeCasterSettings ComputeCasterSettings; // 0x28(0x38)
	DEFINE_UE_CLASS_HELPERS(USimplygonComputeCaster, "SimplygonComputeCaster")

};

} // namespace SDK
