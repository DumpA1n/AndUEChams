#pragma once

#include "../CoreUObject_classes.hpp"
#include "Engine.hpp"

namespace SDK
{

// Package: AssetManagerEx
// Enums: 1
// Structs: 4
// Classes: 1

struct FAssetDetail;
struct FAssetDependenciesDetail;
struct FAssetDependenciesInfo;
struct FHotPatcherPackageInfo;
struct UFLibAssetManageHelperEx;

// Object: Enum AssetManagerEx.EAssetRegistryDependencyTypeEx
enum class EAssetRegistryDependencyTypeEx : uint8_t
{
	None = 0,
	Soft = 1,
	Hard = 2,
	SearchableName = 3,
	SoftManage = 4,
	HardManage = 5,
	Packages = 6,
	Manage = 7,
	All = 8,
	EAssetRegistryDependencyTypeEx_MAX = 9
};

// Object: ScriptStruct AssetManagerEx.AssetDetail
// Size: 0x30 (Inherited: 0x0)
struct FAssetDetail
{
	struct FString mPackagePath; // 0x0(0x10)
	struct FString mAssetType; // 0x10(0x10)
	struct FString mGuid; // 0x20(0x10)
};

// Object: ScriptStruct AssetManagerEx.AssetDependenciesDetail
// Size: 0x60 (Inherited: 0x0)
struct FAssetDependenciesDetail
{
	struct FString ModuleCategory; // 0x0(0x10)
	struct TMap<struct FString, struct FAssetDetail> AssetDependencyDetails; // 0x10(0x50)
};

// Object: ScriptStruct AssetManagerEx.AssetDependenciesInfo
// Size: 0x50 (Inherited: 0x0)
struct FAssetDependenciesInfo
{
	struct TMap<struct FString, struct FAssetDependenciesDetail> AssetsDependenciesMap; // 0x0(0x50)
};

// Object: ScriptStruct AssetManagerEx.HotPatcherPackageInfo
// Size: 0x20 (Inherited: 0x0)
struct FHotPatcherPackageInfo
{
	struct FString AssetName; // 0x0(0x10)
	struct FString AssetGuid; // 0x10(0x10)
};

// Object: Class AssetManagerEx.FLibAssetManageHelperEx
// Size: 0x28 (Inherited: 0x28)
struct UFLibAssetManageHelperEx : UBlueprintFunctionLibrary
{

	// Object: Function AssetManagerEx.FLibAssetManageHelperEx.SerializeAssetDetialArrayToString
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x8680138
	// Params: [ Num(2) Size(0x20) ]
	static struct FString SerializeAssetDetialArrayToString(const struct TArray<struct FAssetDetail>& InAssetDetialList);

	// Object: Function AssetManagerEx.FLibAssetManageHelperEx.SerializeAssetDependenciesToJson
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x867fff4
	// Params: [ Num(3) Size(0x61) ]
	static uint8_t SerializeAssetDependenciesToJson(const struct FAssetDependenciesInfo& InAssetDependencies, struct FString& OutJsonStr);

	// Object: Function AssetManagerEx.FLibAssetManageHelperEx.SaveStringToFile
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x867ff00
	// Params: [ Num(3) Size(0x21) ]
	static uint8_t SaveStringToFile(struct FString InFile, struct FString inString);

	// Object: Function AssetManagerEx.FLibAssetManageHelperEx.ModuleIsEnabled
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x867fe50
	// Params: [ Num(2) Size(0x11) ]
	static uint8_t ModuleIsEnabled(struct FString InModuleName);

	// Object: Function AssetManagerEx.FLibAssetManageHelperEx.LoadFileToString
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x867fd4c
	// Params: [ Num(3) Size(0x21) ]
	static uint8_t LoadFileToString(struct FString InFile, struct FString& OutString);

	// Object: Function AssetManagerEx.FLibAssetManageHelperEx.IsValidPlatform
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x867fc9c
	// Params: [ Num(2) Size(0x11) ]
	static uint8_t IsValidPlatform(struct FString PlatformName);

	// Object: Function AssetManagerEx.FLibAssetManageHelperEx.GetSpecifyAssetDetail
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	// Offset: 0x867fb80
	// Params: [ Num(3) Size(0x41) ]
	static uint8_t GetSpecifyAssetDetail(struct FString InLongPackageName, struct FAssetDetail& OutAssetDetail);

	// Object: Function AssetManagerEx.FLibAssetManageHelperEx.GetRedirectorList
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	// Offset: 0x867fa6c
	// Params: [ Num(3) Size(0x21) ]
	static uint8_t GetRedirectorList(const struct TArray<struct FString>& InFilterPackagePaths, struct TArray<struct FAssetDetail>& OutRedirector);

	// Object: Function AssetManagerEx.FLibAssetManageHelperEx.GetPluginModuleAbsDir
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x867f968
	// Params: [ Num(3) Size(0x21) ]
	static uint8_t GetPluginModuleAbsDir(struct FString InPluginModuleName, struct FString& OutPath);

	// Object: Function AssetManagerEx.FLibAssetManageHelperEx.GetModuleNameByRelativePath
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x867f864
	// Params: [ Num(3) Size(0x21) ]
	static uint8_t GetModuleNameByRelativePath(struct FString InRelativePath, struct FString& OutModuleName);

	// Object: Function AssetManagerEx.FLibAssetManageHelperEx.GetModuleAssetsList
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	// Offset: 0x867f620
	// Params: [ Num(6) Size(0x91) ]
	static uint8_t GetModuleAssetsList(struct FString InModuleName, const struct TArray<struct FString>& InExFilterPackagePaths, const struct TArray<EAssetRegistryDependencyTypeEx>& AssetRegistryDependencyTypes, struct TArray<struct FAssetDetail>& OutAssetList, struct TMap<struct FString, struct FAssetDependenciesInfo>& ScanedCaches);

	// Object: Function AssetManagerEx.FLibAssetManageHelperEx.GetLongPackageNameFromPackagePath
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x867f540
	// Params: [ Num(2) Size(0x20) ]
	static struct FString GetLongPackageNameFromPackagePath(struct FString InPackagePath);

	// Object: Function AssetManagerEx.FLibAssetManageHelperEx.GetEnableModuleAbsDir
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x867f43c
	// Params: [ Num(3) Size(0x21) ]
	static uint8_t GetEnableModuleAbsDir(struct FString InModuleName, struct FString& OutPath);

	// Object: Function AssetManagerEx.FLibAssetManageHelperEx.GetAssetsList
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	// Offset: 0x867f1ec
	// Params: [ Num(6) Size(0x82) ]
	static uint8_t GetAssetsList(const struct TArray<struct FString>& InFilterPackagePaths, const struct TArray<EAssetRegistryDependencyTypeEx>& AssetRegistryDependencyTypes, struct TArray<struct FAssetDetail>& OutAssetList, struct TMap<struct FString, struct FAssetDependenciesInfo>& ScanedCaches, uint8_t bReTargetRedirector);

	// Object: Function AssetManagerEx.FLibAssetManageHelperEx.GetAssetReferenceEx
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	// Offset: 0x867f064
	// Params: [ Num(4) Size(0x51) ]
	static uint8_t GetAssetReferenceEx(const struct FAssetDetail& InAsset, const struct TArray<EAssetRegistryDependencyTypeEx>& SearchAssetDepTypes, struct TArray<struct FAssetDetail>& OutRefAsset);

	// Object: Function AssetManagerEx.FLibAssetManageHelperEx.GetAssetPackageGUID
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x867ef60
	// Params: [ Num(3) Size(0x21) ]
	static uint8_t GetAssetPackageGUID(struct FString InPackagePath, struct FString& OutGUID);

	// Object: Function AssetManagerEx.FLibAssetManageHelperEx.GetAssetNameFromPackagePath
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x867ee80
	// Params: [ Num(2) Size(0x20) ]
	static struct FString GetAssetNameFromPackagePath(struct FString InPackagePath);

	// Object: Function AssetManagerEx.FLibAssetManageHelperEx.GetAssetListDependenciesForAssetDetail
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	// Offset: 0x867ec64
	// Params: [ Num(4) Size(0xC0) ]
	static void GetAssetListDependenciesForAssetDetail(const struct TArray<struct FAssetDetail>& InAssetsDetailList, const struct TArray<EAssetRegistryDependencyTypeEx>& AssetRegistryDependencyTypes, struct FAssetDependenciesInfo& OutDependices, struct TMap<struct FString, struct FAssetDependenciesInfo>& ScandCaches);

	// Object: Function AssetManagerEx.FLibAssetManageHelperEx.GetAssetListDependencies
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	// Offset: 0x867ea48
	// Params: [ Num(4) Size(0xC0) ]
	static void GetAssetListDependencies(const struct TArray<struct FString>& InLongPackageNameList, const struct TArray<EAssetRegistryDependencyTypeEx>& AssetRegistryDependencyTypes, struct FAssetDependenciesInfo& OutDependices, struct TMap<struct FString, struct FAssetDependenciesInfo>& ScandCaches);

	// Object: Function AssetManagerEx.FLibAssetManageHelperEx.GetAssetDependencyByDetail
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	// Offset: 0x867e7d0
	// Params: [ Num(6) Size(0xA2) ]
	static uint8_t GetAssetDependencyByDetail(const struct FAssetDetail& InAsset, const struct TArray<EAssetRegistryDependencyTypeEx>& AssetRegistryDependencyTypes, struct TArray<struct FAssetDetail>& OutRefAsset, struct TMap<struct FString, struct FAssetDependenciesInfo>& ScandCaches, uint8_t bRecursively);

	// Object: Function AssetManagerEx.FLibAssetManageHelperEx.GetAssetDependency
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	// Offset: 0x867e59c
	// Params: [ Num(6) Size(0x82) ]
	static uint8_t GetAssetDependency(struct FString InLongPackageName, const struct TArray<EAssetRegistryDependencyTypeEx>& AssetRegistryDependencyTypes, struct TArray<struct FAssetDetail>& OutRefAsset, struct TMap<struct FString, struct FAssetDependenciesInfo>& ScandCaches, uint8_t bRecursively);

	// Object: Function AssetManagerEx.FLibAssetManageHelperEx.GetAssetDependenciesForAssetDetail
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	// Offset: 0x867e364
	// Params: [ Num(4) Size(0xE0) ]
	static void GetAssetDependenciesForAssetDetail(const struct FAssetDetail& InAssetDetail, const struct TArray<EAssetRegistryDependencyTypeEx>& AssetRegistryDependencyTypes, struct FAssetDependenciesInfo& OutDependices, struct TMap<struct FString, struct FAssetDependenciesInfo>& ScandCaches);

	// Object: Function AssetManagerEx.FLibAssetManageHelperEx.GetAssetDependencies
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	// Offset: 0x867e164
	// Params: [ Num(4) Size(0xC0) ]
	static void GetAssetDependencies(struct FString InLongPackageName, const struct TArray<EAssetRegistryDependencyTypeEx>& AssetRegistryDependencyTypes, struct FAssetDependenciesInfo& OutDependices, struct TMap<struct FString, struct FAssetDependenciesInfo>& ScanedCaches);

	// Object: Function AssetManagerEx.FLibAssetManageHelperEx.GetAllTargetPlatform
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x867e0f4
	// Params: [ Num(1) Size(0x10) ]
	static struct TArray<struct FString> GetAllTargetPlatform();

	// Object: Function AssetManagerEx.FLibAssetManageHelperEx.GetAllEnabledModuleName
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x867e01c
	// Params: [ Num(1) Size(0x50) ]
	static void GetAllEnabledModuleName(struct TMap<struct FString, struct FString>& OutModules);

	// Object: Function AssetManagerEx.FLibAssetManageHelperEx.FindFilesRecursive
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x867ded4
	// Params: [ Num(4) Size(0x22) ]
	static uint8_t FindFilesRecursive(struct FString InStartDir, struct TArray<struct FString>& OutFileList, uint8_t InRecursive);

	// Object: Function AssetManagerEx.FLibAssetManageHelperEx.FilterNoRefAssetsWithIgnoreFilter
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	// Offset: 0x867dd1c
	// Params: [ Num(4) Size(0x40) ]
	static void FilterNoRefAssetsWithIgnoreFilter(const struct TArray<struct FAssetDetail>& InAssetsDetail, const struct TArray<struct FString>& InIgnoreFilters, struct TArray<struct FAssetDetail>& OutHasRefAssetsDetail, struct TArray<struct FAssetDetail>& OutDontHasRefAssetsDetail);

	// Object: Function AssetManagerEx.FLibAssetManageHelperEx.FilterNoRefAssets
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	// Offset: 0x867dbc0
	// Params: [ Num(3) Size(0x30) ]
	static void FilterNoRefAssets(const struct TArray<struct FAssetDetail>& InAssetsDetail, struct TArray<struct FAssetDetail>& OutHasRefAssetsDetail, struct TArray<struct FAssetDetail>& OutDontHasRefAssetsDetail);

	// Object: Function AssetManagerEx.FLibAssetManageHelperEx.ExportCookPakCommandToFile
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x867dabc
	// Params: [ Num(3) Size(0x21) ]
	static uint8_t ExportCookPakCommandToFile(const struct TArray<struct FString>& InCommand, struct FString InFile);

	// Object: Function AssetManagerEx.FLibAssetManageHelperEx.DeserializeAssetDependencies
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x867d988
	// Params: [ Num(3) Size(0x61) ]
	static uint8_t DeserializeAssetDependencies(struct FString InStream, struct FAssetDependenciesInfo& OutAssetDependencies);

	// Object: Function AssetManagerEx.FLibAssetManageHelperEx.ConvVirtualToAbsPath
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x867d8a8
	// Params: [ Num(2) Size(0x20) ]
	static struct FString ConvVirtualToAbsPath(struct FString InPackagePath);

	// Object: Function AssetManagerEx.FLibAssetManageHelperEx.ConvRelativeDirToAbsDir
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x867d7a4
	// Params: [ Num(3) Size(0x21) ]
	static uint8_t ConvRelativeDirToAbsDir(struct FString InRelativePath, struct FString& OutAbsPath);

	// Object: Function AssetManagerEx.FLibAssetManageHelperEx.ConvPackagePathToLongPackageName
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x867d6a0
	// Params: [ Num(3) Size(0x21) ]
	static uint8_t ConvPackagePathToLongPackageName(struct FString InPackagePath, struct FString& OutLongPackageName);

	// Object: Function AssetManagerEx.FLibAssetManageHelperEx.ConvLongPackageNameToPackagePath
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x867d59c
	// Params: [ Num(3) Size(0x21) ]
	static uint8_t ConvLongPackageNameToPackagePath(struct FString InLongPackageName, struct FString& OutPackagePath);

	// Object: Function AssetManagerEx.FLibAssetManageHelperEx.ConvLongPackageNameToCookedPath
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x867d3bc
	// Params: [ Num(6) Size(0x51) ]
	static uint8_t ConvLongPackageNameToCookedPath(struct FString InProjectAbsDir, struct FString InPlatformName, struct FString InLongPackageName, struct TArray<struct FString>& OutCookedAssetPath, struct TArray<struct FString>& OutCookedAssetRelativePath);

	// Object: Function AssetManagerEx.FLibAssetManageHelperEx.ConvAbsToVirtualPath
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x867d2b8
	// Params: [ Num(3) Size(0x21) ]
	static uint8_t ConvAbsToVirtualPath(struct FString InAbsPath, struct FString& OutPackagePath);

	// Object: Function AssetManagerEx.FLibAssetManageHelperEx.CombineAssetsDetailAsFAssetDepenInfo
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	// Offset: 0x867d170
	// Params: [ Num(3) Size(0x61) ]
	static uint8_t CombineAssetsDetailAsFAssetDepenInfo(const struct TArray<struct FAssetDetail>& InAssetsDetailList, struct FAssetDependenciesInfo& OutAssetInfo);

	// Object: Function AssetManagerEx.FLibAssetManageHelperEx.CombineAssetDependencies
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	// Offset: 0x867cfd8
	// Params: [ Num(3) Size(0xF0) ]
	static struct FAssetDependenciesInfo CombineAssetDependencies(const struct FAssetDependenciesInfo& A, const struct FAssetDependenciesInfo& B);
	DEFINE_UE_CLASS_HELPERS(UFLibAssetManageHelperEx, "FLibAssetManageHelperEx")

};

} // namespace SDK
