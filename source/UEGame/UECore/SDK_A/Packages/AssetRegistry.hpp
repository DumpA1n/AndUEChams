#pragma once

#include "../CoreUObject_classes.hpp"

namespace SDK
{

// Package: AssetRegistry
// Enums: 1
// Structs: 6
// Classes: 4

struct FARFilter;
struct FAssetBundleData;
struct FAssetBundleEntry;
struct FAssetData;
struct FTagAndValue;
struct FAssetRegistryDependencyOptions;
struct UAssetRegistryImpl;
struct UAssetRegistryHelpers;
struct IAssetRegistry;
struct ICrossPlatformAssetInterface;

// Object: Enum AssetRegistry.ECrossPlatformType
enum class ECrossPlatformType : uint8_t
{
	Mobile = 0,
	Desktop = 1,
	ECrossPlatformType_MAX = 2
};

// Object: ScriptStruct AssetRegistry.ARFilter
// Size: 0xE8 (Inherited: 0x0)
struct FARFilter
{
	struct TArray<struct FName> PackageNames; // 0x0(0x10)
	struct TArray<struct FName> PackagePaths; // 0x10(0x10)
	struct TArray<struct FName> ObjectPaths; // 0x20(0x10)
	struct TArray<struct FName> ClassNames; // 0x30(0x10)
	uint8_t Pad_0x40[0x50]; // 0x40(0x50)
	struct TSet<struct FName> RecursiveClassesExclusionSet; // 0x90(0x50)
	uint8_t bRecursivePaths : 1; // 0xE0(0x1), Mask(0x1)
	uint8_t BitPad_0xE0_1 : 7; // 0xE0(0x1)
	uint8_t bRecursiveClasses : 1; // 0xE1(0x1), Mask(0x1)
	uint8_t BitPad_0xE1_1 : 7; // 0xE1(0x1)
	uint8_t bIncludeOnlyOnDiskAssets : 1; // 0xE2(0x1), Mask(0x1)
	uint8_t BitPad_0xE2_1 : 7; // 0xE2(0x1)
	uint8_t Pad_0xE3[0x5]; // 0xE3(0x5)
};

// Object: ScriptStruct AssetRegistry.AssetBundleData
// Size: 0x10 (Inherited: 0x0)
struct FAssetBundleData
{
	struct TArray<struct FAssetBundleEntry> Bundles; // 0x0(0x10)
};

// Object: ScriptStruct AssetRegistry.AssetBundleEntry
// Size: 0x28 (Inherited: 0x0)
struct FAssetBundleEntry
{
	struct FPrimaryAssetId BundleScope; // 0x0(0x10)
	struct FName BundleName; // 0x10(0x8)
	struct TArray<struct FSoftObjectPath> BundleAssets; // 0x18(0x10)
};

// Object: ScriptStruct AssetRegistry.AssetData
// Size: 0x50 (Inherited: 0x0)
struct FAssetData
{
	struct FName ObjectPath; // 0x0(0x8)
	struct FName PackageName; // 0x8(0x8)
	struct FName PackagePath; // 0x10(0x8)
	struct FName AssetName; // 0x18(0x8)
	struct FName AssetClass; // 0x20(0x8)
	uint8_t Pad_0x28[0x28]; // 0x28(0x28)
};

// Object: ScriptStruct AssetRegistry.TagAndValue
// Size: 0x18 (Inherited: 0x0)
struct FTagAndValue
{
	struct FName Tag; // 0x0(0x8)
	struct FString Value; // 0x8(0x10)
};

// Object: ScriptStruct AssetRegistry.AssetRegistryDependencyOptions
// Size: 0x6 (Inherited: 0x0)
struct FAssetRegistryDependencyOptions
{
	uint8_t bIncludeSoftPackageReferences : 1; // 0x0(0x1), Mask(0x1)
	uint8_t BitPad_0x0_1 : 7; // 0x0(0x1)
	uint8_t bIncludeHardPackageReferences : 1; // 0x1(0x1), Mask(0x1)
	uint8_t BitPad_0x1_1 : 7; // 0x1(0x1)
	uint8_t bIncludeSearchableNames : 1; // 0x2(0x1), Mask(0x1)
	uint8_t BitPad_0x2_1 : 7; // 0x2(0x1)
	uint8_t bIncludeSoftManagementReferences : 1; // 0x3(0x1), Mask(0x1)
	uint8_t BitPad_0x3_1 : 7; // 0x3(0x1)
	uint8_t bIncludeHardManagementReferences : 1; // 0x4(0x1), Mask(0x1)
	uint8_t BitPad_0x4_1 : 7; // 0x4(0x1)
	uint8_t bIncludeSoftEditorOnlyPackageReferences : 1; // 0x5(0x1), Mask(0x1)
	uint8_t BitPad_0x5_1 : 7; // 0x5(0x1)
};

// Object: Class AssetRegistry.AssetRegistryImpl
// Size: 0x788 (Inherited: 0x28)
struct UAssetRegistryImpl : UObject
{
	DEFINE_UE_CLASS_HELPERS(UAssetRegistryImpl, "AssetRegistryImpl")

	uint8_t Pad_0x28[0x760]; // 0x28(0x760)
};

// Object: Class AssetRegistry.AssetRegistryHelpers
// Size: 0x28 (Inherited: 0x28)
struct UAssetRegistryHelpers : UObject
{
	DEFINE_UE_CLASS_HELPERS(UAssetRegistryHelpers, "AssetRegistryHelpers")

	// Object: Function AssetRegistry.AssetRegistryHelpers.ToSoftObjectPath
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure]
	// Offset: 0x16718d0c
	// Params: [ Num(2) Size(0x68) ]
	static struct FSoftObjectPath ToSoftObjectPath(const struct FAssetData& InAssetData);

	// Object: Function AssetRegistry.AssetRegistryHelpers.SetFilterTagsAndValues
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	// Offset: 0x16718af8
	// Params: [ Num(3) Size(0x1E0) ]
	static struct FARFilter SetFilterTagsAndValues(const struct FARFilter& InFilter, const struct TArray<struct FTagAndValue>& InTagsAndValues);

	// Object: Function AssetRegistry.AssetRegistryHelpers.IsValid
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	// Offset: 0x167189d0
	// Params: [ Num(2) Size(0x51) ]
	static uint8_t IsValid(const struct FAssetData& InAssetData);

	// Object: Function AssetRegistry.AssetRegistryHelpers.IsUAsset
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	// Offset: 0x167188a8
	// Params: [ Num(2) Size(0x51) ]
	static uint8_t IsUAsset(const struct FAssetData& InAssetData);

	// Object: Function AssetRegistry.AssetRegistryHelpers.IsRedirector
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	// Offset: 0x16718780
	// Params: [ Num(2) Size(0x51) ]
	static uint8_t IsRedirector(const struct FAssetData& InAssetData);

	// Object: Function AssetRegistry.AssetRegistryHelpers.IsAssetLoaded
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	// Offset: 0x16718658
	// Params: [ Num(2) Size(0x51) ]
	static uint8_t IsAssetLoaded(const struct FAssetData& InAssetData);

	// Object: Function AssetRegistry.AssetRegistryHelpers.GetTagValue
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	// Offset: 0x16718480
	// Params: [ Num(4) Size(0x69) ]
	static uint8_t GetTagValue(const struct FAssetData& InAssetData, const struct FName& InTagName, struct FString& OutTagValue);

	// Object: Function AssetRegistry.AssetRegistryHelpers.GetFullName
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	// Offset: 0x16718328
	// Params: [ Num(2) Size(0x60) ]
	static struct FString GetFullName(const struct FAssetData& InAssetData);

	// Object: Function AssetRegistry.AssetRegistryHelpers.GetExportTextName
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	// Offset: 0x167181d0
	// Params: [ Num(2) Size(0x60) ]
	static struct FString GetExportTextName(const struct FAssetData& InAssetData);

	// Object: Function AssetRegistry.AssetRegistryHelpers.GetClass
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	// Offset: 0x167180ac
	// Params: [ Num(2) Size(0x58) ]
	static struct UObject* GetClass(const struct FAssetData& InAssetData);

	// Object: Function AssetRegistry.AssetRegistryHelpers.GetAssetRegistry
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x16718048
	// Params: [ Num(1) Size(0x10) ]
	static struct TScriptInterface<IAssetRegistry> GetAssetRegistry();

	// Object: Function AssetRegistry.AssetRegistryHelpers.GetAsset
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	// Offset: 0x16717f24
	// Params: [ Num(2) Size(0x58) ]
	static struct UObject* GetAsset(const struct FAssetData& InAssetData);

	// Object: Function AssetRegistry.AssetRegistryHelpers.FindAssetNativeClass
	// Flags: [Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	// Offset: 0x16717e00
	// Params: [ Num(2) Size(0x58) ]
	static struct UObject* FindAssetNativeClass(const struct FAssetData& AssetData);

	// Object: Function AssetRegistry.AssetRegistryHelpers.CreateAssetData
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x16717bec
	// Params: [ Num(3) Size(0x60) ]
	static struct FAssetData CreateAssetData(struct UObject* InAsset, uint8_t bAllowBlueprintClass);
};

// Object: Class AssetRegistry.AssetRegistry
// Size: 0x28 (Inherited: 0x28)
struct IAssetRegistry : IInterface
{
	DEFINE_UE_CLASS_HELPERS(IAssetRegistry, "AssetRegistry")

	// Object: Function AssetRegistry.AssetRegistry.UseFilterToExcludeAssets
	// Flags: [Native|Public|HasOutParms|BlueprintCallable|Const]
	// Offset: 0x1671a440
	// Params: [ Num(2) Size(0xF8) ]
	void UseFilterToExcludeAssets(struct TArray<struct FAssetData>& AssetDataList, const struct FARFilter& Filter);

	// Object: Function AssetRegistry.AssetRegistry.SearchAllAssets
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0x1671a38c
	// Params: [ Num(1) Size(0x1) ]
	void SearchAllAssets(uint8_t bSynchronousSearch);

	// Object: Function AssetRegistry.AssetRegistry.ScanPathsSynchronous
	// Flags: [Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x1671a284
	// Params: [ Num(2) Size(0x11) ]
	void ScanPathsSynchronous(const struct TArray<struct FString>& InPaths, uint8_t bForceRescan);

	// Object: Function AssetRegistry.AssetRegistry.ScanModifiedAssetFiles
	// Flags: [Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x1671a1c0
	// Params: [ Num(1) Size(0x10) ]
	void ScanModifiedAssetFiles(const struct TArray<struct FString>& InFilePaths);

	// Object: Function AssetRegistry.AssetRegistry.ScanFilesSynchronous
	// Flags: [Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x1671a0b8
	// Params: [ Num(2) Size(0x11) ]
	void ScanFilesSynchronous(const struct TArray<struct FString>& InFilePaths, uint8_t bForceRescan);

	// Object: Function AssetRegistry.AssetRegistry.RunAssetsThroughFilter
	// Flags: [Native|Public|HasOutParms|BlueprintCallable|Const]
	// Offset: 0x16719f00
	// Params: [ Num(2) Size(0xF8) ]
	void RunAssetsThroughFilter(struct TArray<struct FAssetData>& AssetDataList, const struct FARFilter& Filter);

	// Object: Function AssetRegistry.AssetRegistry.PrioritizeSearchPath
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0x16719e4c
	// Params: [ Num(1) Size(0x10) ]
	void PrioritizeSearchPath(struct FString PathToPrioritize);

	// Object: Function AssetRegistry.AssetRegistry.K2_GetReferencers
	// Flags: [Native|Public|HasOutParms|BlueprintCallable|Const]
	// Offset: 0x16719ce4
	// Params: [ Num(4) Size(0x21) ]
	uint8_t K2_GetReferencers(struct FName PackageName, const struct FAssetRegistryDependencyOptions& ReferenceOptions, struct TArray<struct FName>& OutReferencers);

	// Object: Function AssetRegistry.AssetRegistry.K2_GetDependencies
	// Flags: [Native|Public|HasOutParms|BlueprintCallable|Const]
	// Offset: 0x16719b7c
	// Params: [ Num(4) Size(0x21) ]
	uint8_t K2_GetDependencies(struct FName PackageName, const struct FAssetRegistryDependencyOptions& DependencyOptions, struct TArray<struct FName>& OutDependencies);

	// Object: Function AssetRegistry.AssetRegistry.IsLoadingAssets
	// Flags: [Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x16719b3c
	// Params: [ Num(1) Size(0x1) ]
	uint8_t IsLoadingAssets();

	// Object: Function AssetRegistry.AssetRegistry.HasAssets
	// Flags: [Native|Public|BlueprintCallable|Const]
	// Offset: 0x16719a40
	// Params: [ Num(3) Size(0xA) ]
	uint8_t HasAssets(struct FName PackagePath, uint8_t bRecursive);

	// Object: Function AssetRegistry.AssetRegistry.GetSubPaths
	// Flags: [Native|Public|HasOutParms|BlueprintCallable|Const]
	// Offset: 0x167198f4
	// Params: [ Num(3) Size(0x21) ]
	void GetSubPaths(struct FString InBasePath, struct TArray<struct FString>& OutPathList, uint8_t bInRecurse);

	// Object: Function AssetRegistry.AssetRegistry.GetAssetsByPath
	// Flags: [Native|Public|HasOutParms|BlueprintCallable|Const]
	// Offset: 0x16719758
	// Params: [ Num(5) Size(0x1B) ]
	uint8_t GetAssetsByPath(struct FName PackagePath, struct TArray<struct FAssetData>& OutAssetData, uint8_t bRecursive, uint8_t bIncludeOnlyOnDiskAssets);

	// Object: Function AssetRegistry.AssetRegistry.GetAssetsByPackageName
	// Flags: [Native|Public|HasOutParms|BlueprintCallable|Const]
	// Offset: 0x16719600
	// Params: [ Num(4) Size(0x1A) ]
	uint8_t GetAssetsByPackageName(struct FName PackageName, struct TArray<struct FAssetData>& OutAssetData, uint8_t bIncludeOnlyOnDiskAssets);

	// Object: Function AssetRegistry.AssetRegistry.GetAssetsByClass
	// Flags: [Native|Public|HasOutParms|BlueprintCallable|Const]
	// Offset: 0x167194a8
	// Params: [ Num(4) Size(0x1A) ]
	uint8_t GetAssetsByClass(struct FName ClassName, struct TArray<struct FAssetData>& OutAssetData, uint8_t bSearchSubClasses);

	// Object: Function AssetRegistry.AssetRegistry.GetAssets
	// Flags: [Native|Public|HasOutParms|BlueprintCallable|Const]
	// Offset: 0x167192e4
	// Params: [ Num(3) Size(0xF9) ]
	uint8_t GetAssets(const struct FARFilter& Filter, struct TArray<struct FAssetData>& OutAssetData);

	// Object: Function AssetRegistry.AssetRegistry.GetAssetByObjectPath
	// Flags: [Native|Public|BlueprintCallable|Const]
	// Offset: 0x167190c0
	// Params: [ Num(3) Size(0x60) ]
	struct FAssetData GetAssetByObjectPath(struct FName ObjectPath, uint8_t bIncludeOnlyOnDiskAssets);

	// Object: Function AssetRegistry.AssetRegistry.GetAllCachedPaths
	// Flags: [Native|Public|HasOutParms|BlueprintCallable|Const]
	// Offset: 0x16718ffc
	// Params: [ Num(1) Size(0x10) ]
	void GetAllCachedPaths(struct TArray<struct FString>& OutPathList);

	// Object: Function AssetRegistry.AssetRegistry.GetAllAssets
	// Flags: [Native|Public|HasOutParms|BlueprintCallable|Const]
	// Offset: 0x16718ee0
	// Params: [ Num(3) Size(0x12) ]
	uint8_t GetAllAssets(struct TArray<struct FAssetData>& OutAssetData, uint8_t bIncludeOnlyOnDiskAssets);
};

// Object: Class AssetRegistry.CrossPlatformAssetInterface
// Size: 0x28 (Inherited: 0x28)
struct ICrossPlatformAssetInterface : IInterface
{
	DEFINE_UE_CLASS_HELPERS(ICrossPlatformAssetInterface, "CrossPlatformAssetInterface")
};

} // namespace SDK
