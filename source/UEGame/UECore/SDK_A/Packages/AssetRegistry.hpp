#pragma once

#include "../CoreUObject_classes.hpp"

namespace SDK
{

// Package: AssetRegistry
// Enums: 0
// Structs: 2
// Classes: 3

struct FTagAndValue;
struct FAssetRegistryDependencyOptions;
struct UAssetRegistryImpl;
struct UAssetRegistryHelpers;
struct IAssetRegistry;

// Object: ScriptStruct AssetRegistry.TagAndValue
// Size: 0x18 (Inherited: 0x0)
struct FTagAndValue
{
	struct FName Tag; // 0x0(0x8)
	struct FString Value; // 0x8(0x10)
};

// Object: ScriptStruct AssetRegistry.AssetRegistryDependencyOptions
// Size: 0x5 (Inherited: 0x0)
struct FAssetRegistryDependencyOptions
{
	bool bIncludeSoftPackageReferences; // 0x0(0x1)
	bool bIncludeHardPackageReferences; // 0x1(0x1)
	bool bIncludeSearchableNames; // 0x2(0x1)
	bool bIncludeSoftManagementReferences; // 0x3(0x1)
	bool bIncludeHardManagementReferences; // 0x4(0x1)
};

// Object: Class AssetRegistry.AssetRegistryImpl
// Size: 0x7B8 (Inherited: 0x28)
struct UAssetRegistryImpl : UObject
{
	DEFINE_UE_CLASS_HELPERS(UAssetRegistryImpl, "AssetRegistryImpl")

	uint8_t Pad_0x28[0x790]; // 0x28(0x790)
};

// Object: Class AssetRegistry.AssetRegistryHelpers
// Size: 0x28 (Inherited: 0x28)
struct UAssetRegistryHelpers : UObject
{
	DEFINE_UE_CLASS_HELPERS(UAssetRegistryHelpers, "AssetRegistryHelpers")

	// Object: Function AssetRegistry.AssetRegistryHelpers.ToSoftObjectPath
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure]
	// Offset: 0xb18371c
	// Params: [ Num(2) Size(0x68) ]
	static struct FSoftObjectPath ToSoftObjectPath(const struct FAssetData& InAssetData);

	// Object: Function AssetRegistry.AssetRegistryHelpers.SetFilterTagsAndValues
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure]
	// Offset: 0xb182d98
	// Params: [ Num(3) Size(0x1F0) ]
	static struct FARFilter SetFilterTagsAndValues(const struct FARFilter& InFilter, const struct TArray<struct FTagAndValue>& InTagsAndValues);

	// Object: Function AssetRegistry.AssetRegistryHelpers.IsValid
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure]
	// Offset: 0xb183c24
	// Params: [ Num(2) Size(0x51) ]
	static bool IsValid(const struct FAssetData& InAssetData);

	// Object: Function AssetRegistry.AssetRegistryHelpers.IsUAsset
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure]
	// Offset: 0xb183afc
	// Params: [ Num(2) Size(0x51) ]
	static bool IsUAsset(const struct FAssetData& InAssetData);

	// Object: Function AssetRegistry.AssetRegistryHelpers.IsRedirector
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure]
	// Offset: 0xb1839d4
	// Params: [ Num(2) Size(0x51) ]
	static bool IsRedirector(const struct FAssetData& InAssetData);

	// Object: Function AssetRegistry.AssetRegistryHelpers.IsAssetLoaded
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure]
	// Offset: 0xb1833ac
	// Params: [ Num(2) Size(0x51) ]
	static bool IsAssetLoaded(const struct FAssetData& InAssetData);

	// Object: Function AssetRegistry.AssetRegistryHelpers.GetTagValue
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure]
	// Offset: 0xb183078
	// Params: [ Num(4) Size(0x69) ]
	static bool GetTagValue(const struct FAssetData& InAssetData, const struct FName& InTagName, struct FString& OutTagValue);

	// Object: Function AssetRegistry.AssetRegistryHelpers.GetFullName
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure]
	// Offset: 0xb18387c
	// Params: [ Num(2) Size(0x60) ]
	static struct FString GetFullName(const struct FAssetData& InAssetData);

	// Object: Function AssetRegistry.AssetRegistryHelpers.GetExportTextName
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure]
	// Offset: 0xb183254
	// Params: [ Num(2) Size(0x60) ]
	static struct FString GetExportTextName(const struct FAssetData& InAssetData);

	// Object: Function AssetRegistry.AssetRegistryHelpers.GetClass
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure]
	// Offset: 0xb1835f8
	// Params: [ Num(2) Size(0x58) ]
	static struct UObject* GetClass(const struct FAssetData& InAssetData);

	// Object: Function AssetRegistry.AssetRegistryHelpers.GetAssetRegistry
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0xb183f60
	// Params: [ Num(1) Size(0x10) ]
	static struct TScriptInterface<IAssetRegistry> GetAssetRegistry();

	// Object: Function AssetRegistry.AssetRegistryHelpers.GetAsset
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure]
	// Offset: 0xb1834d4
	// Params: [ Num(2) Size(0x58) ]
	static struct UObject* GetAsset(const struct FAssetData& InAssetData);

	// Object: Function AssetRegistry.AssetRegistryHelpers.CreateAssetData
	// Flags: [Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure]
	// Offset: 0xb183d4c
	// Params: [ Num(3) Size(0x60) ]
	static struct FAssetData CreateAssetData(struct UObject* InAsset, bool bAllowBlueprintClass);
};

// Object: Class AssetRegistry.AssetRegistry
// Size: 0x28 (Inherited: 0x28)
struct IAssetRegistry : IInterface
{
	DEFINE_UE_CLASS_HELPERS(IAssetRegistry, "AssetRegistry")

	// Object: Function AssetRegistry.AssetRegistry.WaitForCompletion
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0xb184210
	// Params: [ Num(0) Size(0x0) ]
	void WaitForCompletion();

	// Object: Function AssetRegistry.AssetRegistry.UseFilterToExcludeAssets
	// Flags: [Native|Public|HasOutParms|HasDefaults|BlueprintCallable|Const]
	// Offset: 0xb1844fc
	// Params: [ Num(2) Size(0x100) ]
	void UseFilterToExcludeAssets(struct TArray<struct FAssetData>& AssetDataList, const struct FARFilter& Filter);

	// Object: Function AssetRegistry.AssetRegistry.SearchAllAssets
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0xb18422c
	// Params: [ Num(1) Size(0x1) ]
	void SearchAllAssets(bool bSynchronousSearch);

	// Object: Function AssetRegistry.AssetRegistry.ScanPathsSynchronous
	// Flags: [Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0xb1843f0
	// Params: [ Num(2) Size(0x11) ]
	void ScanPathsSynchronous(const struct TArray<struct FString>& InPaths, bool bForceRescan);

	// Object: Function AssetRegistry.AssetRegistry.ScanModifiedAssetFiles
	// Flags: [Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0xb184090
	// Params: [ Num(1) Size(0x10) ]
	void ScanModifiedAssetFiles(const struct TArray<struct FString>& InFilePaths);

	// Object: Function AssetRegistry.AssetRegistry.ScanFilesSynchronous
	// Flags: [Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0xb1842e4
	// Params: [ Num(2) Size(0x11) ]
	void ScanFilesSynchronous(const struct TArray<struct FString>& InFilePaths, bool bForceRescan);

	// Object: Function AssetRegistry.AssetRegistry.RunAssetsThroughFilter
	// Flags: [Native|Public|HasOutParms|HasDefaults|BlueprintCallable|Const]
	// Offset: 0xb184660
	// Params: [ Num(2) Size(0x100) ]
	void RunAssetsThroughFilter(struct TArray<struct FAssetData>& AssetDataList, const struct FARFilter& Filter);

	// Object: Function AssetRegistry.AssetRegistry.PrioritizeSearchPath
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0xb184154
	// Params: [ Num(1) Size(0x10) ]
	void PrioritizeSearchPath(struct FString PathToPrioritize);

	// Object: Function AssetRegistry.AssetRegistry.K2_GetReferencers
	// Flags: [Native|Public|HasOutParms|BlueprintCallable|Const]
	// Offset: 0xb1849e4
	// Params: [ Num(4) Size(0x21) ]
	bool K2_GetReferencers(struct FName PackageName, const struct FAssetRegistryDependencyOptions& ReferenceOptions, struct TArray<struct FName>& OutReferencers);

	// Object: Function AssetRegistry.AssetRegistry.K2_GetDependencies
	// Flags: [Native|Public|HasOutParms|BlueprintCallable|Const]
	// Offset: 0xb184b5c
	// Params: [ Num(4) Size(0x21) ]
	bool K2_GetDependencies(struct FName PackageName, const struct FAssetRegistryDependencyOptions& DependencyOptions, struct TArray<struct FName>& OutDependencies);

	// Object: Function AssetRegistry.AssetRegistry.IsLoadingAssets
	// Flags: [Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xb184050
	// Params: [ Num(1) Size(0x1) ]
	bool IsLoadingAssets();

	// Object: Function AssetRegistry.AssetRegistry.HasAssets
	// Flags: [Native|Public|BlueprintCallable|Const]
	// Offset: 0xb1855f0
	// Params: [ Num(3) Size(0xA) ]
	bool HasAssets(struct FName PackagePath, bool bRecursive);

	// Object: Function AssetRegistry.AssetRegistry.GetSubPaths
	// Flags: [Native|Public|HasOutParms|BlueprintCallable|Const]
	// Offset: 0xb1847c4
	// Params: [ Num(3) Size(0x21) ]
	void GetSubPaths(struct FString InBasePath, struct TArray<struct FString>& OutPathList, bool bInRecurse);

	// Object: Function AssetRegistry.AssetRegistry.GetAssetsByPath
	// Flags: [Native|Public|HasOutParms|BlueprintCallable|Const]
	// Offset: 0xb1852e8
	// Params: [ Num(5) Size(0x1B) ]
	bool GetAssetsByPath(struct FName PackagePath, struct TArray<struct FAssetData>& OutAssetData, bool bRecursive, bool bIncludeOnlyOnDiskAssets);

	// Object: Function AssetRegistry.AssetRegistry.GetAssetsByPackageName
	// Flags: [Native|Public|HasOutParms|BlueprintCallable|Const]
	// Offset: 0xb185490
	// Params: [ Num(4) Size(0x1A) ]
	bool GetAssetsByPackageName(struct FName PackageName, struct TArray<struct FAssetData>& OutAssetData, bool bIncludeOnlyOnDiskAssets);

	// Object: Function AssetRegistry.AssetRegistry.GetAssetsByClass
	// Flags: [Native|Public|HasOutParms|BlueprintCallable|Const]
	// Offset: 0xb185188
	// Params: [ Num(4) Size(0x1A) ]
	bool GetAssetsByClass(struct FName ClassName, struct TArray<struct FAssetData>& OutAssetData, bool bSearchSubClasses);

	// Object: Function AssetRegistry.AssetRegistry.GetAssets
	// Flags: [Native|Public|HasOutParms|HasDefaults|BlueprintCallable|Const]
	// Offset: 0xb185018
	// Params: [ Num(3) Size(0x101) ]
	bool GetAssets(const struct FARFilter& Filter, struct TArray<struct FAssetData>& OutAssetData);

	// Object: Function AssetRegistry.AssetRegistry.GetAssetByObjectPath
	// Flags: [Native|Public|HasDefaults|BlueprintCallable|Const]
	// Offset: 0xb184df4
	// Params: [ Num(3) Size(0x60) ]
	struct FAssetData GetAssetByObjectPath(struct FName ObjectPath, bool bIncludeOnlyOnDiskAssets);

	// Object: Function AssetRegistry.AssetRegistry.GetAllCachedPaths
	// Flags: [Native|Public|HasOutParms|BlueprintCallable|Const]
	// Offset: 0xb184920
	// Params: [ Num(1) Size(0x10) ]
	void GetAllCachedPaths(struct TArray<struct FString>& OutPathList);

	// Object: Function AssetRegistry.AssetRegistry.GetAllAssets
	// Flags: [Native|Public|HasOutParms|BlueprintCallable|Const]
	// Offset: 0xb184cd4
	// Params: [ Num(3) Size(0x12) ]
	bool GetAllAssets(struct TArray<struct FAssetData>& OutAssetData, bool bIncludeOnlyOnDiskAssets);
};

} // namespace SDK
