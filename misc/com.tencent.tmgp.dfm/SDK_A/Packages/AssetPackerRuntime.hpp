#pragma once

#include "../CoreUObject_classes.hpp"
#include "Engine.hpp"

namespace SDK
{

// Package: AssetPackerRuntime
// Enums: 3
// Structs: 10
// Classes: 6

enum class EPrimaryAssetPakRule : uint8_t;
struct UDataTable;
struct UPakWorker;
struct FAssetPakerPakPolicyRow;
struct FAssetPackerAssetInfoContainer;
struct FAssetPackerChunkDescInfo;
struct FAssetPackerAssetInfo;
struct FAssetPakerCollectorConfigRow;
struct FAssetPackerSimpleCollectorConfigRow;
struct FAssetPakerCollectorDependencyTreeNodeRow;
struct FAssetPakerCollectorDependencyTreeNode;
struct FAssetPakerPakItemRow;
struct FAssetPakerDescRowBase;
struct UAssetPackerAssetStore;
struct UAssetPackerBlueprintFunctionLibrary;
struct UAssetPackerPlaceHolderAsset;
struct UHashCalculator;
struct UPakWorkerListener;
struct URuntimeAssetLabel;

// Object: Enum AssetPackerRuntime.EHashType
enum class EHashType : uint8_t
{
	MD5 = 0,
	EHashType_MAX = 1
};

// Object: Enum AssetPackerRuntime.FAssetPackerAssetType
enum class EFAssetPackerAssetType : uint8_t
{
	Unknown = 0,
	UFS = 1,
	NonUFS = 2,
	FAssetPackerAssetType_MAX = 3
};

// Object: Enum AssetPackerRuntime.EPackagingConfigurations
enum class EPackagingConfigurations : uint8_t
{
	Shipping = 0,
	Test = 1,
	Deprecated = 2,
	EPackagingConfigurations_MAX = 3
};

// Object: ScriptStruct AssetPackerRuntime.AssetPakerPakPolicyRow
// Size: 0x80 (Inherited: 0x8)
struct FAssetPakerPakPolicyRow : FTableRowBase
{
	struct FName ID; // 0x8(0x8)
	struct FName Tag; // 0x10(0x8)
	struct FName Category; // 0x18(0x8)
	struct FName SubCategory; // 0x20(0x8)
	struct FSoftObjectPath DefaultPath; // 0x28(0x18)
	struct FString DefaultUFSPath; // 0x40(0x10)
	struct FString DefaultNonUFSPath; // 0x50(0x10)
	uint8_t bPure : 1; // 0x60(0x1), Mask(0x1)
	uint8_t BitPad_0x60_1 : 7; // 0x60(0x1)
	uint8_t Pad_0x61[0x3]; // 0x61(0x3)
	struct FName FallbackId; // 0x64(0x8)
	EPackagingConfigurations PublishType; // 0x6C(0x1)
	uint8_t Pad_0x6D[0x3]; // 0x6D(0x3)
	struct FName PublishVersion; // 0x70(0x8)
	struct FName RowDescription; // 0x78(0x8)
};

// Object: ScriptStruct AssetPackerRuntime.AssetPackerAssetInfoContainer
// Size: 0x10 (Inherited: 0x0)
struct FAssetPackerAssetInfoContainer
{
	struct TArray<struct FAssetPackerAssetInfo> AssetInfos; // 0x0(0x10)
};

// Object: ScriptStruct AssetPackerRuntime.AssetPackerChunkDescInfo
// Size: 0x10 (Inherited: 0x0)
struct FAssetPackerChunkDescInfo
{
	struct FName CategoryName; // 0x0(0x8)
	uint32_t SubCategoryNumber; // 0x8(0x4)
	uint32_t SubEntityNumber; // 0xC(0x4)
};

// Object: ScriptStruct AssetPackerRuntime.AssetPackerAssetInfo
// Size: 0xB8 (Inherited: 0x0)
struct FAssetPackerAssetInfo
{
	uint64_t ID; // 0x0(0x8)
	EFAssetPackerAssetType AssetType; // 0x8(0x1)
	uint8_t Pad_0x9[0x7]; // 0x9(0x7)
	struct FString OriginObjectPath; // 0x10(0x10)
	struct FString LowQualityObjectPath; // 0x20(0x10)
	struct FString HighQualityObjectPath; // 0x30(0x10)
	struct FString ObjectPath_HD; // 0x40(0x10)
	struct FString LowQualityObjectPath_HD; // 0x50(0x10)
	struct FString HighQualityObjectPath_HD; // 0x60(0x10)
	struct FName OriginRowName; // 0x70(0x8)
	struct FName OriginRowDesc; // 0x78(0x8)
	struct FString PropertyPath; // 0x80(0x10)
	struct FName OriginModuleName; // 0x90(0x8)
	struct FName TagName; // 0x98(0x8)
	int32_t PublishVersionNum; // 0xA0(0x4)
	struct FAssetPackerChunkDescInfo PakChunkInfo; // 0xA4(0x10)
	uint8_t Pad_0xB4[0x4]; // 0xB4(0x4)
};

// Object: ScriptStruct AssetPackerRuntime.AssetPakerCollectorConfigRow
// Size: 0x38 (Inherited: 0x8)
struct FAssetPakerCollectorConfigRow : FTableRowBase
{
	struct TSoftObjectPtr<UDataTable> PolicyTable; // 0x8(0x28)
	struct FName RowDescription; // 0x30(0x8)
};

// Object: ScriptStruct AssetPackerRuntime.AssetPackerSimpleCollectorConfigRow
// Size: 0x38 (Inherited: 0x8)
struct FAssetPackerSimpleCollectorConfigRow : FTableRowBase
{
	struct TSoftObjectPtr<UDataTable> PolicyTable; // 0x8(0x28)
	struct FName RowDescription; // 0x30(0x8)
};

// Object: ScriptStruct AssetPackerRuntime.AssetPakerCollectorDependencyTreeNodeRow
// Size: 0x50 (Inherited: 0x8)
struct FAssetPakerCollectorDependencyTreeNodeRow : FTableRowBase
{
	struct FName ParentNodeName; // 0x8(0x8)
	struct FName ParentKeyFieldName; // 0x10(0x8)
	struct TSoftObjectPtr<UDataTable> RefTable; // 0x18(0x28)
	struct FName KeyFieldName; // 0x40(0x8)
	struct FName RowDescription; // 0x48(0x8)
};

// Object: ScriptStruct AssetPackerRuntime.AssetPakerCollectorDependencyTreeNode
// Size: 0x38 (Inherited: 0x0)
struct FAssetPakerCollectorDependencyTreeNode
{
	uint8_t Pad_0x0[0x20]; // 0x0(0x20)
	struct UDataTable* SourceTable; // 0x20(0x8)
	uint8_t Pad_0x28[0x10]; // 0x28(0x10)
};

// Object: ScriptStruct AssetPackerRuntime.AssetPakerPakItemRow
// Size: 0x78 (Inherited: 0x8)
struct FAssetPakerPakItemRow : FTableRowBase
{
	struct FName ID; // 0x8(0x8)
	struct FName Name; // 0x10(0x8)
	struct FString ExplicitPaths; // 0x18(0x10)
	uint8_t bApplyRecursively : 1; // 0x28(0x1), Mask(0x1)
	uint8_t BitPad_0x28_1 : 7; // 0x28(0x1)
	EPrimaryAssetPakRule PakRule; // 0x29(0x1)
	uint8_t Pad_0x2A[0x2]; // 0x2A(0x2)
	struct FName ModuleName; // 0x2C(0x8)
	EPrimaryAssetPakRule LitePakRule; // 0x34(0x1)
	uint8_t Pad_0x35[0x3]; // 0x35(0x3)
	int32_t Priority; // 0x38(0x4)
	struct FName ParentName; // 0x3C(0x8)
	uint8_t bAlwaysCook : 1; // 0x44(0x1), Mask(0x1)
	uint8_t BitPad_0x44_1 : 7; // 0x44(0x1)
	uint8_t PakRuleForAndroid; // 0x45(0x1)
	uint8_t PakRuleForIOS; // 0x46(0x1)
	uint8_t PakRuleForOpenHarmony; // 0x47(0x1)
	uint8_t PakRuleForWin; // 0x48(0x1)
	uint8_t PakRuleForPS5; // 0x49(0x1)
	uint8_t PakRuleForXSX; // 0x4A(0x1)
	uint8_t Pad_0x4B[0x1]; // 0x4B(0x1)
	struct FName ParentNameForMobile; // 0x4C(0x8)
	struct FName ParentNameForWin; // 0x54(0x8)
	struct FName ParentNameForPS5; // 0x5C(0x8)
	struct FName ParentNameForXSX; // 0x64(0x8)
	uint8_t bSplitPakEnable : 1; // 0x6C(0x1), Mask(0x1)
	uint8_t BitPad_0x6C_1 : 7; // 0x6C(0x1)
	uint8_t Pad_0x6D[0x3]; // 0x6D(0x3)
	struct FName RowDescription; // 0x70(0x8)
};

// Object: ScriptStruct AssetPackerRuntime.AssetPakerDescRowBase
// Size: 0x10 (Inherited: 0x8)
struct FAssetPakerDescRowBase : FTableRowBase
{
	struct FName RowDescription; // 0x8(0x8)
};

// Object: Class AssetPackerRuntime.AssetPackerAssetStore
// Size: 0x28 (Inherited: 0x28)
struct UAssetPackerAssetStore : UObject
{	DEFINE_UE_CLASS_HELPERS(UAssetPackerAssetStore, "AssetPackerAssetStore")

};

// Object: Class AssetPackerRuntime.AssetPackerBlueprintFunctionLibrary
// Size: 0x28 (Inherited: 0x28)
struct UAssetPackerBlueprintFunctionLibrary : UBlueprintFunctionLibrary
{

	// Object: Function AssetPackerRuntime.AssetPackerBlueprintFunctionLibrary.ReleaseOldPakReaders
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0xf41c94c
	// Params: [ Num(2) Size(0x5) ]
	static uint8_t ReleaseOldPakReaders(float MaxAgeSeconds);

	// Object: Function AssetPackerRuntime.AssetPackerBlueprintFunctionLibrary.PreprocessPaksAsync
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x7af29b0
	// Params: [ Num(6) Size(0x40) ]
	static struct UPakWorker* PreprocessPaksAsync(struct FString InSrcPaksDir, struct FString InOutputPaksDir, struct FString InConfigFilePath, int32_t InFilterMask, int32_t InMaxConcurrency);

	// Object: Function AssetPackerRuntime.AssetPackerBlueprintFunctionLibrary.MergePaksAsyncChecked2
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x7af2500
	// Params: [ Num(9) Size(0x88) ]
	static struct UPakWorker* MergePaksAsyncChecked2(struct FString InSrcPakFileName, struct FString InExpectedSrcPakFileMD5, struct FString InPatchPakFileName, struct FString InExpectedPatchPakFileMD5, struct FString InCachedPakFileName, struct FString InExpectedCachedPakFileMD5, struct FString InOutputPakFileName, struct FString InExpectedOutputPakFileMD5);

	// Object: Function AssetPackerRuntime.AssetPackerBlueprintFunctionLibrary.MergePaksAsyncChecked
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x7af2160
	// Params: [ Num(7) Size(0x68) ]
	static struct UPakWorker* MergePaksAsyncChecked(struct FString InSrcPakFileName, struct FString InExpectedSrcPakFileMD5, struct FString InPatchPakFileName, struct FString InExpectedPatchPakFileMD5, struct FString InOutputPakFileName, struct FString InExpectedOutputPakFileMD5);

	// Object: Function AssetPackerRuntime.AssetPackerBlueprintFunctionLibrary.MergePaksAsync
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x7af1f14
	// Params: [ Num(5) Size(0x40) ]
	static struct UPakWorker* MergePaksAsync(struct FString SrcPakFileName, struct FString PatchPakFileName, struct FString OutputPath, uint8_t bCalculateMD5);

	// Object: Function AssetPackerRuntime.AssetPackerBlueprintFunctionLibrary.MergePaks
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x7af1cc8
	// Params: [ Num(5) Size(0x38) ]
	static int32_t MergePaks(struct FString SrcPakFileName, struct FString PatchPakFileName, struct FString OutputPath, uint8_t bCalculateMD5);

	// Object: Function AssetPackerRuntime.AssetPackerBlueprintFunctionLibrary.GetResourceLimit
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x7af1c58
	// Params: [ Num(1) Size(0x4) ]
	static int32_t GetResourceLimit();

	// Object: Function AssetPackerRuntime.AssetPackerBlueprintFunctionLibrary.GetFileDescriptorCount
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x7af1c24
	// Params: [ Num(1) Size(0x4) ]
	static int32_t GetFileDescriptorCount();

	// Object: Function AssetPackerRuntime.AssetPackerBlueprintFunctionLibrary.CreatePakWorker
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x7af1bf0
	// Params: [ Num(1) Size(0x8) ]
	static struct UPakWorker* CreatePakWorker();
	DEFINE_UE_CLASS_HELPERS(UAssetPackerBlueprintFunctionLibrary, "AssetPackerBlueprintFunctionLibrary")

};

// Object: Class AssetPackerRuntime.AssetPackerPlaceHolderAsset
// Size: 0x30 (Inherited: 0x30)
struct UAssetPackerPlaceHolderAsset : UDataAsset
{	DEFINE_UE_CLASS_HELPERS(UAssetPackerPlaceHolderAsset, "AssetPackerPlaceHolderAsset")

};

// Object: Class AssetPackerRuntime.HashCalculator
// Size: 0x28 (Inherited: 0x28)
struct UHashCalculator : UBlueprintFunctionLibrary
{

	// Object: Function AssetPackerRuntime.HashCalculator.AsyncCalculateFileMD5
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0xfab4ed4
	// Params: [ Num(2) Size(0x20) ]
	static void AsyncCalculateFileMD5(struct FString FilePath, const struct FDelegate& OnHashCompleted);
	DEFINE_UE_CLASS_HELPERS(UHashCalculator, "HashCalculator")

};

// Object: Class AssetPackerRuntime.PakWorkerListener
// Size: 0x30 (Inherited: 0x28)
struct UPakWorkerListener : UObject
{
	int32_t Counter; // 0x28(0x4)
	uint8_t Pad_0x2C[0x4]; // 0x2C(0x4)


	// Object: Function AssetPackerRuntime.PakWorkerListener.OnMergePaksComplete
	// Flags: [Final|Native|Public]
	// Offset: 0x7af2dcc
	// Params: [ Num(5) Size(0x48) ]
	void OnMergePaksComplete(int32_t ErrCode, struct FString SrcPakPath, struct FString PatchPakPath, struct FString OutputPakPath, struct FString OutputPakFileMD5);
	DEFINE_UE_CLASS_HELPERS(UPakWorkerListener, "PakWorkerListener")

};

// Object: Class AssetPackerRuntime.RuntimeAssetLabel
// Size: 0x40 (Inherited: 0x30)
struct URuntimeAssetLabel : UDataAsset
{
	struct TArray<struct FName> PackageNames; // 0x30(0x10)
	DEFINE_UE_CLASS_HELPERS(URuntimeAssetLabel, "RuntimeAssetLabel")

};

} // namespace SDK
