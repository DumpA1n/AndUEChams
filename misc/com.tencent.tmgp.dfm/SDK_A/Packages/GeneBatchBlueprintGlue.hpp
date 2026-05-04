#pragma once

#include "../CoreUObject_classes.hpp"
#include "Engine.hpp"
#include "GeneBatch.hpp"

namespace SDK
{

// Package: GeneBatchBlueprintGlue
// Enums: 1
// Structs: 9
// Classes: 2

struct AActor;
enum class EComponentMobility : uint8_t;
struct FGeneBatchAnalyzeHLODSettings;
struct FGeneBatchAtlasCountDetails;
struct FGeneBatchMaterialInputData;
struct FGeneBatchMergeInputInfo;
struct FGeneBatchMergeResultComponentInfo;
struct FGeneBatchMergeResultInfo;
struct FGeneBatchPOI;
struct FGeneBatchParameterOptimizationConfig;
struct FGeneBatchSMCInputData;
struct FGeneBatchTableRowResultHLODData;
struct FGeneBatchTableRowResultMergeDrawSection;
struct FGeneBatchTableRowResultMesh;
struct FGeneBatchTheme;
struct UActorComponent;
struct UDataTable;
struct UGeneBatchPOISettingsObject;
struct UGeneBatchSettingsObject;
struct ULevel;
struct ULocalLightGroupBake;
struct UMaterialInterface;
struct UPrimitiveComponent;
struct UStaticMesh;
struct UStaticMeshComponent;
struct UTexture2D;
struct UWorld;
struct FGeneBatchStaticMeshMergeInfo;
struct FGeneBatchCustomLevelFilterContext;
struct FGeneBatchPOIInputData;
struct FGeneBatchStaticMeshComponentArray;
struct FMaterialFilterInfo;
struct FLocalLightGroupBakeFilterInfo;
struct FBatchConfig;
struct FStaticMeshMergeInfo;
struct FSwapVertexColorObject;
struct UBatchHelper;
struct UGeneBatchBlueprintGlue;

// Object: Enum GeneBatchBlueprintGlue.EVertexColorChannel
enum class EVertexColorChannel : uint8_t
{
	Red = 0,
	Green = 1,
	Blue = 2,
	Alpha = 3,
	EVertexColorChannel_MAX = 4
};

// Object: ScriptStruct GeneBatchBlueprintGlue.GeneBatchStaticMeshMergeInfo
// Size: 0x50 (Inherited: 0x0)
struct FGeneBatchStaticMeshMergeInfo
{
	struct FString LevelKey; // 0x0(0x10)
	struct TArray<struct UStaticMeshComponent*> InputStaticMeshes; // 0x10(0x10)
	struct UStaticMeshComponent* MergedStaticMesh; // 0x20(0x8)
	struct AActor* BindToActor; // 0x28(0x8)
	struct FString AdditionalLevelKey; // 0x30(0x10)
	struct FVector ReferenceLocation; // 0x40(0xC)
	uint8_t Pad_0x4C[0x4]; // 0x4C(0x4)
};

// Object: ScriptStruct GeneBatchBlueprintGlue.GeneBatchCustomLevelFilterContext
// Size: 0x80 (Inherited: 0x0)
struct FGeneBatchCustomLevelFilterContext
{
	uint8_t bIsInitialized : 1; // 0x0(0x1), Mask(0x1)
	uint8_t BitPad_0x0_1 : 7; // 0x0(0x1)
	uint8_t Pad_0x1[0x7]; // 0x1(0x7)
	struct TSoftObjectPtr<UGeneBatchPOISettingsObject> POISettings; // 0x8(0x28)
	struct TArray<struct FName> ShouldBuildThemes; // 0x30(0x10)
	struct TArray<struct FName> ShouldBuildPOIs; // 0x40(0x10)
	struct TArray<struct FName> ShouldLoadPOIs; // 0x50(0x10)
	struct TArray<struct FName> ShouldLoadGameplayAreas; // 0x60(0x10)
	struct TArray<struct FString> CleanLevels; // 0x70(0x10)
};

// Object: ScriptStruct GeneBatchBlueprintGlue.GeneBatchPOIInputData
// Size: 0x50 (Inherited: 0x0)
struct FGeneBatchPOIInputData
{
	struct TArray<struct FGeneBatchSMCInputData> SMCInputData; // 0x0(0x10)
	struct FGeneBatchPOI POI; // 0x10(0x40)
};

// Object: ScriptStruct GeneBatchBlueprintGlue.GeneBatchStaticMeshComponentArray
// Size: 0x10 (Inherited: 0x0)
struct FGeneBatchStaticMeshComponentArray
{
	struct TArray<struct UStaticMeshComponent*> Items; // 0x0(0x10)
};

// Object: ScriptStruct GeneBatchBlueprintGlue.MaterialFilterInfo
// Size: 0x20 (Inherited: 0x0)
struct FMaterialFilterInfo
{
	struct TArray<struct UStaticMeshComponent*> StaticMeshCompoents; // 0x0(0x10)
	struct FString MaterialNames; // 0x10(0x10)
};

// Object: ScriptStruct GeneBatchBlueprintGlue.LocalLightGroupBakeFilterInfo
// Size: 0x18 (Inherited: 0x0)
struct FLocalLightGroupBakeFilterInfo
{
	struct TArray<struct UStaticMeshComponent*> StaticMeshCompoents; // 0x0(0x10)
	struct ULocalLightGroupBake* LocalLightGroupBake; // 0x10(0x8)
};

// Object: ScriptStruct GeneBatchBlueprintGlue.BatchConfig
// Size: 0x20 (Inherited: 0x0)
struct FBatchConfig
{
	int32_t GridX; // 0x0(0x4)
	int32_t GridY; // 0x4(0x4)
	int32_t RefMaxCount; // 0x8(0x4)
	float MaxVolume; // 0xC(0x4)
	struct FString PackageName; // 0x10(0x10)
};

// Object: ScriptStruct GeneBatchBlueprintGlue.StaticMeshMergeInfo
// Size: 0x20 (Inherited: 0x0)
struct FStaticMeshMergeInfo
{
	struct TArray<struct UStaticMeshComponent*> InputStaticMeshs; // 0x0(0x10)
	struct UStaticMeshComponent* MergeStaticMesh; // 0x10(0x8)
	struct AActor* BindToActor; // 0x18(0x8)
};

// Object: ScriptStruct GeneBatchBlueprintGlue.SwapVertexColorObject
// Size: 0x28 (Inherited: 0x8)
struct FSwapVertexColorObject : FTableRowBase
{
	struct FSoftObjectPath SoftObjectPath; // 0x8(0x18)
	int32_t SwapCount; // 0x20(0x4)
	uint8_t Pad_0x24[0x4]; // 0x24(0x4)
};

// Object: Class GeneBatchBlueprintGlue.BatchHelper
// Size: 0x28 (Inherited: 0x28)
struct UBatchHelper : UObject
{

	// Object: Function GeneBatchBlueprintGlue.BatchHelper.FilterByVolume
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x780cf38
	// Params: [ Num(3) Size(0x28) ]
	static struct TArray<struct UStaticMeshComponent*> FilterByVolume(const struct TArray<struct UStaticMeshComponent*>& InStaticMeshComps, float VolumeLimit);

	// Object: Function GeneBatchBlueprintGlue.BatchHelper.FilterByVirtualTextureDeco
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x780ce48
	// Params: [ Num(2) Size(0x20) ]
	static struct TArray<struct UStaticMeshComponent*> FilterByVirtualTextureDeco(const struct TArray<struct UStaticMeshComponent*>& InStaticMeshComps);

	// Object: Function GeneBatchBlueprintGlue.BatchHelper.FilterByValidMesh
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x780cd58
	// Params: [ Num(2) Size(0x20) ]
	static struct TArray<struct UStaticMeshComponent*> FilterByValidMesh(const struct TArray<struct UStaticMeshComponent*>& InStaticMeshComps);

	// Object: Function GeneBatchBlueprintGlue.BatchHelper.FilterByReplicated
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x780cc20
	// Params: [ Num(3) Size(0x28) ]
	static struct TArray<struct UStaticMeshComponent*> FilterByReplicated(const struct TArray<struct UStaticMeshComponent*>& InStaticMeshComps, uint8_t Replicated);

	// Object: Function GeneBatchBlueprintGlue.BatchHelper.FilterByMobility
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x780caf0
	// Params: [ Num(3) Size(0x28) ]
	static struct TArray<struct UStaticMeshComponent*> FilterByMobility(const struct TArray<struct UStaticMeshComponent*>& InStaticMeshComps, EComponentMobility Mobility);

	// Object: Function GeneBatchBlueprintGlue.BatchHelper.FilterByMeshAssetsTags
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x780c9a8
	// Params: [ Num(3) Size(0x30) ]
	static struct TArray<struct UStaticMeshComponent*> FilterByMeshAssetsTags(const struct TArray<struct UStaticMeshComponent*>& InStaticMeshComps, const struct TArray<struct FName>& InBlockTags);

	// Object: Function GeneBatchBlueprintGlue.BatchHelper.FilterByMaterial
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x780c8d8
	// Params: [ Num(2) Size(0x20) ]
	static struct TArray<struct FMaterialFilterInfo> FilterByMaterial(const struct TArray<struct UStaticMeshComponent*>& InStaticMeshComps);

	// Object: Function GeneBatchBlueprintGlue.BatchHelper.FilterByLocalLightGroupBake
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x780c808
	// Params: [ Num(2) Size(0x20) ]
	static struct TArray<struct FLocalLightGroupBakeFilterInfo> FilterByLocalLightGroupBake(const struct TArray<struct UStaticMeshComponent*>& InStaticMeshComps);

	// Object: Function GeneBatchBlueprintGlue.BatchHelper.DrawTextureToScreen
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x780c774
	// Params: [ Num(1) Size(0x8) ]
	static void DrawTextureToScreen(struct UTexture2D* Texture2D);

	// Object: Function GeneBatchBlueprintGlue.BatchHelper.ClearBatchData
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x780c6d8
	// Params: [ Num(1) Size(0x10) ]
	static void ClearBatchData(struct FString BatchDataPath);

	// Object: Function GeneBatchBlueprintGlue.BatchHelper.BatchWorld
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x780c5b0
	// Params: [ Num(3) Size(0x40) ]
	static struct TArray<struct FStaticMeshMergeInfo> BatchWorld(const struct TArray<struct UStaticMeshComponent*>& InStaticMeshComps, const struct FBatchConfig& BatchSetting);
	DEFINE_UE_CLASS_HELPERS(UBatchHelper, "BatchHelper")

};

// Object: Class GeneBatchBlueprintGlue.GeneBatchBlueprintGlue
// Size: 0x28 (Inherited: 0x28)
struct UGeneBatchBlueprintGlue : UBlueprintFunctionLibrary
{

	// Object: Function GeneBatchBlueprintGlue.GeneBatchBlueprintGlue.TryCreateGeneBatchRuntime
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x7813cac
	// Params: [ Num(3) Size(0x11) ]
	static uint8_t TryCreateGeneBatchRuntime(struct UWorld* World, struct UGeneBatchSettingsObject* InSettingObject);

	// Object: Function GeneBatchBlueprintGlue.GeneBatchBlueprintGlue.SwapVertexColorChannelForStaticMeshComponent
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x7813a98
	// Params: [ Num(7) Size(0x20) ]
	static void SwapVertexColorChannelForStaticMeshComponent(struct UStaticMeshComponent* InStaticMeshComponent, struct UMaterialInterface* MaterialInterface, EVertexColorChannel VertexColorChannel1, EVertexColorChannel VertexColorChannel2, uint8_t bApplyToStaticMesh, uint8_t bApplyToComponent, struct UDataTable* SwapVertexColorObjectDataTable);

	// Object: Function GeneBatchBlueprintGlue.GeneBatchBlueprintGlue.SwapVertexColorChannelForStaticMesh
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x78138d0
	// Params: [ Num(6) Size(0x21) ]
	static void SwapVertexColorChannelForStaticMesh(struct UStaticMesh* StaticMesh, struct UMaterialInterface* MaterialInterface, EVertexColorChannel VertexColorChannel1, EVertexColorChannel VertexColorChannel2, struct UDataTable* SwapVertexColorObjectDataTable, uint8_t bUseUE4Method);

	// Object: Function GeneBatchBlueprintGlue.GeneBatchBlueprintGlue.SendMessageToCompanyChat
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x78137f0
	// Params: [ Num(2) Size(0x20) ]
	static void SendMessageToCompanyChat(struct FString URL, struct FString Content);

	// Object: Function GeneBatchBlueprintGlue.GeneBatchBlueprintGlue.SendImageToCompanyChat
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x7813710
	// Params: [ Num(2) Size(0x20) ]
	static void SendImageToCompanyChat(struct FString URL, struct FString PNGFilename);

	// Object: Function GeneBatchBlueprintGlue.GeneBatchBlueprintGlue.PrepareBuildGridComponents
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x781352c
	// Params: [ Num(5) Size(0x79) ]
	static uint8_t PrepareBuildGridComponents(const struct TArray<struct UStaticMeshComponent*>& InComponents, const struct TArray<struct UGeneBatchSettingsObject*>& InGeneBatchSettingsObjects, float GridLength, struct TMap<struct FIntPoint, struct FGeneBatchStaticMeshComponentArray>& OutGridComponents);

	// Object: DelegateFunction GeneBatchBlueprintGlue.GeneBatchBlueprintGlue.PositionToGridKeyDelegate__DelegateSignature
	// Flags: [Public|Delegate|HasDefaults]
	// Offset: 0x101d2e88
	// Params: [ Num(2) Size(0x14) ]
	struct FIntPoint PositionToGridKeyDelegate__DelegateSignature(struct FVector Position);

	// Object: Function GeneBatchBlueprintGlue.GeneBatchBlueprintGlue.POISettingsContainPOIs
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x7813430
	// Params: [ Num(3) Size(0x19) ]
	static uint8_t POISettingsContainPOIs(struct UGeneBatchPOISettingsObject* POISettings, const struct TArray<struct FName>& POINames);

	// Object: Function GeneBatchBlueprintGlue.GeneBatchBlueprintGlue.GetPOIsInGameplayArea
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x78132c8
	// Params: [ Num(3) Size(0x28) ]
	static struct TArray<struct FName> GetPOIsInGameplayArea(struct FString LevelName, struct FName GameplayArea);

	// Object: Function GeneBatchBlueprintGlue.GeneBatchBlueprintGlue.GetMaterialUsedTextureCoordinates
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x78131f0
	// Params: [ Num(2) Size(0x18) ]
	static struct TArray<int32_t> GetMaterialUsedTextureCoordinates(struct UMaterialInterface* Material);

	// Object: Function GeneBatchBlueprintGlue.GeneBatchBlueprintGlue.GetGameplayAreas
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x78130c4
	// Params: [ Num(2) Size(0x20) ]
	static struct TArray<struct FName> GetGameplayAreas(struct FString LevelName);

	// Object: Function GeneBatchBlueprintGlue.GeneBatchBlueprintGlue.GetAtlasMapCountInPOI
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x7812f38
	// Params: [ Num(4) Size(0x3C) ]
	static int32_t GetAtlasMapCountInPOI(struct FString LevelName, struct FName POIName, struct FGeneBatchAtlasCountDetails& AtlasCountDetails);

	// Object: Function GeneBatchBlueprintGlue.GeneBatchBlueprintGlue.GetAtlasMapCountInGameplayArea
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x7812dac
	// Params: [ Num(4) Size(0x3C) ]
	static int32_t GetAtlasMapCountInGameplayArea(struct FString LevelName, struct FName GameplayAreaName, struct FGeneBatchAtlasCountDetails& AtlasCountDetails);

	// Object: Function GeneBatchBlueprintGlue.GeneBatchBlueprintGlue.GetAtlasMapCount
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x7812cb0
	// Params: [ Num(3) Size(0x2C) ]
	static int32_t GetAtlasMapCount(struct UGeneBatchSettingsObject* SettingsObject, struct FGeneBatchAtlasCountDetails& AtlasCountDetails);

	// Object: Function GeneBatchBlueprintGlue.GeneBatchBlueprintGlue.GetAnalyzeBasePathOfWorld
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x7812b44
	// Params: [ Num(3) Size(0x28) ]
	static struct FString GetAnalyzeBasePathOfWorld(struct UWorld* World, struct FString InSubspace);

	// Object: Function GeneBatchBlueprintGlue.GeneBatchBlueprintGlue.GetAnalyzeBasePathOfTheme
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	// Offset: 0x7812958
	// Params: [ Num(4) Size(0x68) ]
	static struct FString GetAnalyzeBasePathOfTheme(struct UWorld* World, const struct FGeneBatchTheme& Theme, struct FString InSubspace);

	// Object: Function GeneBatchBlueprintGlue.GeneBatchBlueprintGlue.GetAnalyzeBasePathOfPOI
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	// Offset: 0x7812770
	// Params: [ Num(4) Size(0x68) ]
	static struct FString GetAnalyzeBasePathOfPOI(struct UWorld* World, const struct FGeneBatchPOI& POI, struct FString InSubspace);

	// Object: Function GeneBatchBlueprintGlue.GeneBatchBlueprintGlue.GeneUnionBatchAnalyzeRaw
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x781232c
	// Params: [ Num(14) Size(0x128) ]
	static void GeneUnionBatchAnalyzeRaw(int32_t GenerationNum, int32_t IndividualNum, struct FGeneBatchAnalyzeHLODSettings GeneBatchAnalyzeSettings, uint8_t bEnableStatsObjective, uint8_t bEnableStatsIndividual, uint8_t bEnableMultithread, struct UDataTable* DrawSectionResultDataTable, struct UDataTable* MeshResultDataTable, struct UDataTable* TextureResultDataTable, struct UDataTable* AtlasResultDataTable, struct UDataTable* CanNotMergeDrawSectionTable, struct UDataTable* CanMergeDrawSectionTable, struct UDataTable* PrimitiveInstanceDataDataTable, struct UDataTable* HLODResultDataTable);

	// Object: Function GeneBatchBlueprintGlue.GeneBatchBlueprintGlue.GeneSplitBatchAnalyzeRaw
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x7812298
	// Params: [ Num(1) Size(0x8) ]
	static void GeneSplitBatchAnalyzeRaw(struct UGeneBatchSettingsObject* GeneBatchSettingsObject);

	// Object: Function GeneBatchBlueprintGlue.GeneBatchBlueprintGlue.GeneSplitBatchAnalyze
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x78121c0
	// Params: [ Num(2) Size(0x9) ]
	static void GeneSplitBatchAnalyze(struct UGeneBatchSettingsObject* InSettingsObject, uint8_t bSaveResult);

	// Object: Function GeneBatchBlueprintGlue.GeneBatchBlueprintGlue.GenerateGeneBatchRuntimeDataTable
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x7811f84
	// Params: [ Num(9) Size(0x48) ]
	static struct UDataTable* GenerateGeneBatchRuntimeDataTable(struct UDataTable* InOutAtlasResultDataTable, struct UDataTable* InResultHLODDataTable, struct UDataTable* InDrawSectionFinalResultDataTable, struct UDataTable* InOutGeneBatchTextureAtlasDataTable, struct UDataTable* InOutGeneBatchStaticMeshDataTable, struct UDataTable* InOutGeneBatchMeshComponentDataTable, struct UDataTable* InOutGeneBatchStaticMeshProxyInputDataTable, int32_t InQuality);

	// Object: Function GeneBatchBlueprintGlue.GeneBatchBlueprintGlue.GeneJointBatchParameterOptimizationWithConfig
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x7811dc0
	// Params: [ Num(2) Size(0x48) ]
	static void GeneJointBatchParameterOptimizationWithConfig(struct UGeneBatchSettingsObject* InSettingsObject, struct FGeneBatchParameterOptimizationConfig ParameterOptimizationConfig);

	// Object: Function GeneBatchBlueprintGlue.GeneBatchBlueprintGlue.GeneJointBatchParameterOptimizationRaw
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x78119b4
	// Params: [ Num(9) Size(0x138) ]
	static void GeneJointBatchParameterOptimizationRaw(int32_t GenerationNum, int32_t IndividualNum, struct FGeneBatchAnalyzeHLODSettings GeneBatchAnalyzeSettings, struct UGeneBatchSettingsObject* GeneBatchSettingsObject, uint8_t bEnableStatsObjective, uint8_t bEnableStatsIndividual, uint8_t bEnableMultithread, struct FGeneBatchParameterOptimizationConfig ParameterOptimizationConfigs, struct UDataTable* ParameterOptimizationDataTable);

	// Object: Function GeneBatchBlueprintGlue.GeneBatchBlueprintGlue.GeneJointBatchParameterOptimization
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x7811920
	// Params: [ Num(1) Size(0x8) ]
	static void GeneJointBatchParameterOptimization(struct UGeneBatchSettingsObject* InSettingsObject);

	// Object: Function GeneBatchBlueprintGlue.GeneBatchBlueprintGlue.GeneJointBatchAnalyzeRaw
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x7811424
	// Params: [ Num(17) Size(0x140) ]
	static void GeneJointBatchAnalyzeRaw(int32_t GenerationNum, int32_t IndividualNum, struct FGeneBatchAnalyzeHLODSettings GeneBatchAnalyzeSettings, struct UGeneBatchSettingsObject* GeneBatchSettingsObject, uint8_t bEnableStatsObjective, uint8_t bEnableStatsIndividual, uint8_t bEnableMultithread, struct UDataTable* DrawSectionResultDataTable, struct UDataTable* MeshResultDataTable, struct UDataTable* TextureResultDataTable, struct UDataTable* AtlasResultDataTable, struct UDataTable* CanNotMergeDrawSectionTable, struct UDataTable* CanMergeDrawSectionTable, struct UDataTable* PrimitiveInstanceDataDataTable, struct UDataTable* HLODResultDataTable, struct UDataTable* MergeFailureDataTable, struct UDataTable* InWhyNotBatchStatsDataTable);

	// Object: Function GeneBatchBlueprintGlue.GeneBatchBlueprintGlue.GeneJointBatchAnalyze
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x7811390
	// Params: [ Num(1) Size(0x8) ]
	static void GeneJointBatchAnalyze(struct UGeneBatchSettingsObject* InSettingsObject);

	// Object: Function GeneBatchBlueprintGlue.GeneBatchBlueprintGlue.GeneBatchUpdatePrimitiveHLODParentMap
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x7811270
	// Params: [ Num(2) Size(0x58) ]
	static void GeneBatchUpdatePrimitiveHLODParentMap(const struct TMap<struct TSoftObjectPtr<UPrimitiveComponent>, struct TSoftObjectPtr<UPrimitiveComponent>>& ConvertedPrimitivesMap, struct UDataTable* InOutGeneBatchPrimitiveHLODParentDataTable);

	// Object: Function GeneBatchBlueprintGlue.GeneBatchBlueprintGlue.GeneBatchSplitPOIAnalyzeData
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x78110d8
	// Params: [ Num(4) Size(0x38) ]
	static void GeneBatchSplitPOIAnalyzeData(struct UGeneBatchPOISettingsObject* InPOISettings, const struct TArray<struct FGeneBatchSMCInputData>& InSMCInputData, const struct TArray<struct FName>& BuildGameplayAreas, struct TArray<struct FGeneBatchPOIInputData>& OutPOIInputData);

	// Object: Function GeneBatchBlueprintGlue.GeneBatchBlueprintGlue.GeneBatchSetLazyLODParentComponent
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x7811000
	// Params: [ Num(1) Size(0x50) ]
	static void GeneBatchSetLazyLODParentComponent(const struct TMap<struct TSoftObjectPtr<UPrimitiveComponent>, struct TSoftObjectPtr<UPrimitiveComponent>>& ConvertedPrimitivesMap);

	// Object: Function GeneBatchBlueprintGlue.GeneBatchBlueprintGlue.GeneBatchSaveConvertedPrimitives
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x7810ee0
	// Params: [ Num(2) Size(0x58) ]
	static void GeneBatchSaveConvertedPrimitives(const struct TMap<struct TSoftObjectPtr<UPrimitiveComponent>, struct TSoftObjectPtr<UPrimitiveComponent>>& GenerationMapReversed, struct UGeneBatchSettingsObject* GeneBatchSettings);

	// Object: Function GeneBatchBlueprintGlue.GeneBatchBlueprintGlue.GeneBatchReBakeMeshes
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x7810c54
	// Params: [ Num(6) Size(0x50) ]
	static void GeneBatchReBakeMeshes(struct UGeneBatchSettingsObject* InSettingsObject, const struct TArray<struct FGeneBatchTableRowResultHLODData>& InHLODData, const struct TArray<struct FGeneBatchTableRowResultMesh>& InMeshData, struct TArray<struct FGeneBatchTableRowResultMergeDrawSection> InMergeDrawSections, uint8_t bReplace, struct TArray<struct UPackage*>& OutDirtyPackages);

	// Object: Function GeneBatchBlueprintGlue.GeneBatchBlueprintGlue.GeneBatchPreAnalyze
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x7810c40
	// Params: [ Num(0) Size(0x0) ]
	static void GeneBatchPreAnalyze();

	// Object: Function GeneBatchBlueprintGlue.GeneBatchBlueprintGlue.GeneBatchGenerateAnalyzeDataForPendingLevels
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x7810ac8
	// Params: [ Num(4) Size(0x1A) ]
	static void GeneBatchGenerateAnalyzeDataForPendingLevels(struct UGeneBatchSettingsObject* InSettingsObject, struct TArray<struct FString>& OutDirtyLevelPaths, uint8_t bSaveResult, uint8_t bRebuild);

	// Object: Function GeneBatchBlueprintGlue.GeneBatchBlueprintGlue.GeneBatchCreateRuntimeBakedMeshComponentsDeprecated
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x78108c0
	// Params: [ Num(4) Size(0x38) ]
	static void GeneBatchCreateRuntimeBakedMeshComponentsDeprecated(struct FString LevelKey, struct TArray<struct UStaticMeshComponent*> StaticMeshComponents, struct UGeneBatchSettingsObject* InSettings, struct TArray<struct FGeneBatchStaticMeshMergeInfo>& BakedMeshInfo);

	// Object: Function GeneBatchBlueprintGlue.GeneBatchBlueprintGlue.GeneBatchCreateRuntimeBakedMeshComponents
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x78106ec
	// Params: [ Num(4) Size(0x38) ]
	static void GeneBatchCreateRuntimeBakedMeshComponents(struct FString LevelKey, const struct TArray<struct FGeneBatchSMCInputData>& InSMCInputData, struct UGeneBatchSettingsObject* InSettings, struct TArray<struct FGeneBatchStaticMeshMergeInfo>& BakedMeshInfo);

	// Object: Function GeneBatchBlueprintGlue.GeneBatchBlueprintGlue.GeneBatchCreateBakedMeshComponentDeprecated
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x78104e4
	// Params: [ Num(4) Size(0x38) ]
	static void GeneBatchCreateBakedMeshComponentDeprecated(struct FString LevelKey, struct TArray<struct UStaticMeshComponent*> StaticMeshComponents, struct UGeneBatchSettingsObject* InSettings, struct TArray<struct FGeneBatchStaticMeshMergeInfo>& BakedMeshInfo);

	// Object: Function GeneBatchBlueprintGlue.GeneBatchBlueprintGlue.GeneBatchCreateBakedMeshComponent
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x7810310
	// Params: [ Num(4) Size(0x38) ]
	static void GeneBatchCreateBakedMeshComponent(struct FString LevelKey, const struct TArray<struct FGeneBatchSMCInputData>& InSMCInputData, struct UGeneBatchSettingsObject* InSettings, struct TArray<struct FGeneBatchStaticMeshMergeInfo>& BakedMeshInfo);

	// Object: Function GeneBatchBlueprintGlue.GeneBatchBlueprintGlue.GeneBatchCreateAllBakedMeshComponents
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x781013c
	// Params: [ Num(4) Size(0x38) ]
	static void GeneBatchCreateAllBakedMeshComponents(struct FString InLevelKey, const struct TArray<struct FGeneBatchSMCInputData>& InSMCInputData, struct UGeneBatchSettingsObject* InSettings, struct TArray<struct FGeneBatchStaticMeshMergeInfo>& OutBakedMeshInfo);

	// Object: Function GeneBatchBlueprintGlue.GeneBatchBlueprintGlue.GeneBatchCollectShouldLoadAndBuildPOIsAndThemes
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x780fe64
	// Params: [ Num(8) Size(0x5A) ]
	static void GeneBatchCollectShouldLoadAndBuildPOIsAndThemes(struct UGeneBatchPOISettingsObject* InPOISettings, const struct TArray<struct FName>& BuildGameplayAreas, struct TArray<struct FName>& ShouldBuildThemes, struct TArray<struct FName>& ShouldBuildPOIs, struct TArray<struct FName>& ShouldLoadPOIs, struct TArray<struct FName>& ShouldLoadGameplayAreas, uint8_t bKeepValid, uint8_t bPrintLog);

	// Object: Function GeneBatchBlueprintGlue.GeneBatchBlueprintGlue.GeneBatchClearUsedStaticMeshComponents
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x780fe50
	// Params: [ Num(0) Size(0x0) ]
	static void GeneBatchClearUsedStaticMeshComponents();

	// Object: Function GeneBatchBlueprintGlue.GeneBatchBlueprintGlue.GeneBatchCheckBoxIntersectsPOI
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable]
	// Offset: 0x780fd0c
	// Params: [ Num(4) Size(0x35) ]
	static uint8_t GeneBatchCheckBoxIntersectsPOI(struct UGeneBatchPOISettingsObject* InPOISettings, const struct TArray<struct FName>& BuildGameplayAreas, const struct FBox& Box);

	// Object: Function GeneBatchBlueprintGlue.GeneBatchBlueprintGlue.GeneBatchBakeMIDs
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x780f97c
	// Params: [ Num(11) Size(0x68) ]
	static void GeneBatchBakeMIDs(struct UGeneBatchSettingsObject* InSettingsObject, struct FString InBakedMaterialPath, struct FString InBakedMeshesPath, struct UDataTable* InAllowAnalyzeDataTable, struct UDataTable* InPrimitiveInstanceDataDataTable, struct UDataTable* AtlasResultDataTable, struct UDataTable* DrawSectionResultDataTable, struct UDataTable* DrawSectionFinalResultDataTable, struct UDataTable* ResultHLODDataTable, struct UDataTable* InResultMeshDataTable, struct UDataTable* InResultMaterialDataTable);

	// Object: Function GeneBatchBlueprintGlue.GeneBatchBlueprintGlue.GeneBatchBakeMeshesMultiProcess
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x780f770
	// Params: [ Num(6) Size(0x38) ]
	static void GeneBatchBakeMeshesMultiProcess(struct FString BakedMeshesPath, struct UDataTable* InAllowAnalyzeDataTable, struct UDataTable* InPrimitiveInstanceDataDataTable, struct UDataTable* AtlasResultDataTable, struct UDataTable* DrawSectionResultDataTable, struct UDataTable* DrawSectionFinalResultDataTable);

	// Object: Function GeneBatchBlueprintGlue.GeneBatchBlueprintGlue.GeneBatchBakeMeshes
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x780f698
	// Params: [ Num(2) Size(0x9) ]
	static void GeneBatchBakeMeshes(struct UGeneBatchSettingsObject* InSettingsObject, uint8_t bRebuild);

	// Object: Function GeneBatchBlueprintGlue.GeneBatchBlueprintGlue.GeneBatchBakeAtlas
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x780f5c0
	// Params: [ Num(2) Size(0x9) ]
	static void GeneBatchBakeAtlas(struct UGeneBatchSettingsObject* InSettingsObject, uint8_t bRebuild);

	// Object: Function GeneBatchBlueprintGlue.GeneBatchBlueprintGlue.GeneBatchAnalyzeRaw
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x780f2b4
	// Params: [ Num(11) Size(0x40) ]
	static void GeneBatchAnalyzeRaw(int32_t GenerationNum, int32_t IndividualNum, uint8_t bEnableStatsObjective, uint8_t bEnableStatsIndividual, uint8_t bEnableMultithread, struct UDataTable* DrawSectionResultDataTable, struct UDataTable* MeshResultDataTable, struct UDataTable* TextureResultDataTable, struct UDataTable* AtlasResultDataTable, struct UDataTable* CanNotMergeDrawSectionTable, struct UDataTable* CanMergeDrawSectionTable);

	// Object: Function GeneBatchBlueprintGlue.GeneBatchBlueprintGlue.GeneBatchAnalyze
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x780f220
	// Params: [ Num(1) Size(0x8) ]
	static void GeneBatchAnalyze(struct UGeneBatchSettingsObject* InSettingsObject);

	// Object: Function GeneBatchBlueprintGlue.GeneBatchBlueprintGlue.GeneBatchAddAnalyzeDataWithMergeableMaterials
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x780f04c
	// Params: [ Num(4) Size(0x38) ]
	static void GeneBatchAddAnalyzeDataWithMergeableMaterials(struct FString GridKey, const struct TArray<struct FGeneBatchSMCInputData>& InSMCInputData, const struct TArray<struct FGeneBatchMaterialInputData>& InMaterialInputData, struct UGeneBatchSettingsObject* InSettingsObject);

	// Object: Function GeneBatchBlueprintGlue.GeneBatchBlueprintGlue.GeneBatchAddAnalyzeDataDeprecated
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x780eecc
	// Params: [ Num(3) Size(0x28) ]
	static void GeneBatchAddAnalyzeDataDeprecated(struct FString InLevelName, const struct TArray<struct UStaticMeshComponent*>& InSMC, struct UGeneBatchSettingsObject* InSettingsObject);

	// Object: Function GeneBatchBlueprintGlue.GeneBatchBlueprintGlue.GeneBatchAddAnalyzeData
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x780ed4c
	// Params: [ Num(3) Size(0x28) ]
	static void GeneBatchAddAnalyzeData(struct FString GridKey, const struct TArray<struct FGeneBatchSMCInputData>& InSMCInputData, struct UGeneBatchSettingsObject* InSettingsObject);

	// Object: Function GeneBatchBlueprintGlue.GeneBatchBlueprintGlue.FindPOISettingsGloballyByPOINames
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x780ec90
	// Params: [ Num(2) Size(0x18) ]
	static struct UGeneBatchPOISettingsObject* FindPOISettingsGloballyByPOINames(const struct TArray<struct FName>& POIName);

	// Object: Function GeneBatchBlueprintGlue.GeneBatchBlueprintGlue.FindPOISettingObject
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x780eb98
	// Params: [ Num(2) Size(0x18) ]
	static struct UGeneBatchPOISettingsObject* FindPOISettingObject(struct FString InAnalyzeBasePath);

	// Object: Function GeneBatchBlueprintGlue.GeneBatchBlueprintGlue.FindLeafHLODChildrenCurrent
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x780ea84
	// Params: [ Num(3) Size(0x20) ]
	static struct TArray<struct UPrimitiveComponent*> FindLeafHLODChildrenCurrent(struct UWorld* World, struct UPrimitiveComponent* PrimitiveComponent);

	// Object: Function GeneBatchBlueprintGlue.GeneBatchBlueprintGlue.FindAndLoadAllRuntimeComponent
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x780e9f0
	// Params: [ Num(1) Size(0x8) ]
	static void FindAndLoadAllRuntimeComponent(struct UWorld* World);

	// Object: Function GeneBatchBlueprintGlue.GeneBatchBlueprintGlue.DirectMergeMultipleMeshes
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x780e7e0
	// Params: [ Num(5) Size(0x38) ]
	static void DirectMergeMultipleMeshes(const struct TArray<struct FGeneBatchMergeInputInfo>& InMergeInputInfos, struct FString InSavePath, int32_t DesiredAtlasResolution, EPixelFormat DesiredPixelFormat, struct TArray<struct FGeneBatchMergeResultComponentInfo>& OutMergeResultComponentInfos);

	// Object: Function GeneBatchBlueprintGlue.GeneBatchBlueprintGlue.DirectMergeMeshes
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x780e60c
	// Params: [ Num(4) Size(0x38) ]
	static void DirectMergeMeshes(const struct TArray<struct UStaticMeshComponent*>& InStaticMeshComponents, struct FString InSavePath, int32_t DesiredAtlasResolution, struct TArray<struct FGeneBatchMergeResultInfo>& OutMergeResultInfos);

	// Object: Function GeneBatchBlueprintGlue.GeneBatchBlueprintGlue.DirectMerge
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x780e3fc
	// Params: [ Num(5) Size(0x3C) ]
	static void DirectMerge(const struct TArray<struct UStaticMeshComponent*>& InStaticMeshComponents, struct FString InSavePath, int32_t DesiredAtlasResolution, struct TArray<struct FGeneBatchMergeResultInfo>& OutMergeResultInfos, int32_t AtlasGroupKey);

	// Object: Function GeneBatchBlueprintGlue.GeneBatchBlueprintGlue.CustomLevelFilter
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable]
	// Offset: 0x780e0e8
	// Params: [ Num(8) Size(0xD1) ]
	static uint8_t CustomLevelFilter(struct FString LevelPath, struct FBox Box, struct UWorld* World, const struct TArray<struct FName>& BuildGameplayAreas, uint8_t bRebuild, uint8_t bAnalyzeOnly, struct FGeneBatchCustomLevelFilterContext& Context);

	// Object: Function GeneBatchBlueprintGlue.GeneBatchBlueprintGlue.CreateHLODISM
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x780deac
	// Params: [ Num(2) Size(0x2B0) ]
	static void CreateHLODISM(const struct FGeneBatchTableRowResultHLODData& HLOD, struct FGeneBatchStaticMeshMergeInfo& NewStaticMeshMergeInfo);

	// Object: Function GeneBatchBlueprintGlue.GeneBatchBlueprintGlue.CreateGeneBatchParameterOptimizationConfig
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x780dd98
	// Params: [ Num(2) Size(0x48) ]
	static struct FGeneBatchParameterOptimizationConfig CreateGeneBatchParameterOptimizationConfig(struct UGeneBatchSettingsObject* InSettingsObject);

	// Object: Function GeneBatchBlueprintGlue.GeneBatchBlueprintGlue.CreateAnalyzeSettingObject
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x780db34
	// Params: [ Num(8) Size(0x38) ]
	static struct UGeneBatchSettingsObject* CreateAnalyzeSettingObject(struct FString InAnalyzeBasePath, int32_t InQuality, struct UGeneBatchPOISettingsObject* POISettings, int32_t InPOIIndex, int32_t InThemeIndex, uint8_t bInAutoLoadTable, int32_t InStartHLODLevel);

	// Object: Function GeneBatchBlueprintGlue.GeneBatchBlueprintGlue.CollectReferencedSettingsObjects
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x780da5c
	// Params: [ Num(2) Size(0x18) ]
	static struct TArray<struct UGeneBatchSettingsObject*> CollectReferencedSettingsObjects(struct UGeneBatchSettingsObject* SettingsObject);

	// Object: Function GeneBatchBlueprintGlue.GeneBatchBlueprintGlue.CollectMergeableMaterialsInTheme
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x780d884
	// Params: [ Num(5) Size(0x78) ]
	static struct TArray<struct FGeneBatchMaterialInputData> CollectMergeableMaterialsInTheme(struct UGeneBatchPOISettingsObject* POISettingsObject, const struct FGeneBatchTheme& Theme, const struct TArray<struct FGeneBatchSMCInputData>& InSMCs, struct TArray<struct FGeneBatchSMCInputData>& OutMergeableSMCs);

	// Object: Function GeneBatchBlueprintGlue.GeneBatchBlueprintGlue.ClusterISMs
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x780d750
	// Params: [ Num(4) Size(0x20) ]
	static struct UGeneBatchSettingsObject* ClusterISMs(const struct TArray<struct FGeneBatchSMCInputData>& InSMCInputData, int32_t MinISMNum, float ExpectedBoundSize);

	// Object: Function GeneBatchBlueprintGlue.GeneBatchBlueprintGlue.CheckMaterialMergeableInSettings
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x780d670
	// Params: [ Num(3) Size(0x11) ]
	static uint8_t CheckMaterialMergeableInSettings(struct UGeneBatchSettingsObject* SettingsObject, struct UMaterialInterface* Material);

	// Object: Function GeneBatchBlueprintGlue.GeneBatchBlueprintGlue.CastToSMC
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x780d568
	// Params: [ Num(2) Size(0x20) ]
	static void CastToSMC(const struct TArray<struct UActorComponent*>& InComps, struct TArray<struct UStaticMeshComponent*>& OutSMCs);

	// Object: Function GeneBatchBlueprintGlue.GeneBatchBlueprintGlue.CalculateCombinedSMTags
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x780d420
	// Params: [ Num(3) Size(0x30) ]
	static struct TArray<struct FName> CalculateCombinedSMTags(const struct TArray<struct UStaticMesh*>& InSMs, const struct TArray<struct FName>& InSortedMergableTags);

	// Object: Function GeneBatchBlueprintGlue.GeneBatchBlueprintGlue.CalculateCombinedSMCTags
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x780d2cc
	// Params: [ Num(3) Size(0x28) ]
	void CalculateCombinedSMCTags(const struct TArray<struct UStaticMeshComponent*>& InSMCs, const struct TArray<struct FName>& InSortedMergableTags, struct UStaticMesh* OutSM);

	// Object: Function GeneBatchBlueprintGlue.GeneBatchBlueprintGlue.BatchStaticMeshActors
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x780d198
	// Params: [ Num(3) Size(0x20) ]
	static struct AActor* BatchStaticMeshActors(struct TArray<struct UStaticMeshComponent*> InStaticMeshComponents, struct AActor* InOutParentActor);

	// Object: Function GeneBatchBlueprintGlue.GeneBatchBlueprintGlue.AppendInputLevels
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x780d0ec
	// Params: [ Num(1) Size(0x10) ]
	static void AppendInputLevels(const struct TArray<struct ULevel*>& GridLevels);
	DEFINE_UE_CLASS_HELPERS(UGeneBatchBlueprintGlue, "GeneBatchBlueprintGlue")

};

} // namespace SDK
