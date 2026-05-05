#pragma once

#include "../CoreUObject_classes.hpp"
#include "AssetManagerEx.hpp"
#include "Engine.hpp"

namespace SDK
{

// Package: HotPatcherRuntime
// Enums: 6
// Structs: 37
// Classes: 5

enum class EAssetRegistryDependencyTypeEx : uint8_t;
enum class EBinariesPatchFeature : uint8_t;
struct FAssetDependenciesInfo;
struct FAssetDetail;
struct FDirectoryPath;
struct FFilePath;
struct FPakMountInfo;
struct FBinariesPatchConfig;
struct FPatchMatchRule;
struct FPlatformBasePak;
struct FPakCommandItem;
struct FChunkAssetDescribe;
struct FChunkPakCommand;
struct FPakInternalInfo;
struct FChunkInfo;
struct FPlatformExternAssets;
struct FExternDirectoryInfo;
struct FExternFileInfo;
struct FPatcherSpecifyAsset;
struct FPakFileProxy;
struct FPakCommand;
struct FCookerConfig;
struct FHotPatcherSettingBase;
struct FIoStorePlatformContainers;
struct FIoStoreSettings;
struct FPakEncryptSettings;
struct FUnrealPakSettings;
struct FExportPatchSettings;
struct FReplaceText;
struct FExportReleaseSettings;
struct FPlatformPakListFiles;
struct FPlatformPakAssets;
struct FHotPatcherAssetDependency;
struct FHotPatcherVersion;
struct FPakFileInfo;
struct FPakVersion;
struct FPatchVersionAssetDiff;
struct FPatchVersionExternDiff;
struct FPatchVersionDiff;
struct FPlatformExternFiles;
struct FHotPatcherContext;
struct FHotPatcherReleaseContext;
struct FHotPatcherPatchContext;
struct UFlibPakHelper;
struct UFlibPatchParserHelper;
struct UFlibShaderPipelineCacheHelper;
struct UMountListener;
struct UScopedSlowTaskContext;

// Object: Enum HotPatcherRuntime.ETargetPlatform
enum class ETargetPlatform : uint8_t
{
	None = 0,
	AllPlatforms = 1,
	AllDesktop = 2,
	MacClient = 3,
	MacNoEditor = 4,
	MacServer = 5,
	Mac = 6,
	WindowsClient = 7,
	WindowsNoEditor = 8,
	WindowsServer = 9,
	Windows = 10,
	Android = 11,
	Android_ASTC = 12,
	Android_ATC = 13,
	Android_DXT = 14,
	Android_ETC1 = 15,
	Android_ETC1a = 16,
	Android_ETC2 = 17,
	Android_PVRTC = 18,
	AndroidClient = 19,
	Android_ASTCClient = 20,
	Android_ATCClient = 21,
	Android_DXTClient = 22,
	Android_ETC1Client = 23,
	Android_ETC1aClient = 24,
	Android_ETC2Client = 25,
	Android_PVRTCClient = 26,
	Android_Multi = 27,
	Android_MultiClient = 28,
	OpenHarmony = 29,
	OpenHarmony_ASTC = 30,
	OpenHarmony_DXT = 31,
	OpenHarmony_ETC2 = 32,
	OpenHarmonyClient = 33,
	OpenHarmony_ASTCClient = 34,
	OpenHarmony_DXTClient = 35,
	OpenHarmony_ETC2Client = 36,
	HTML5 = 37,
	IOSClient = 38,
	IOS = 39,
	TVOSClient = 40,
	TVOS = 41,
	LinuxClient = 42,
	LinuxNoEditor = 43,
	LinuxServer = 44,
	Linux = 45,
	Lumin = 46,
	LuminClient = 47,
	XSX = 48,
	PS5 = 49,
	ETargetPlatform_MAX = 50
};

// Object: Enum HotPatcherRuntime.EMatchOperator
enum class EMatchOperator : uint8_t
{
	None = 0,
	GREAT_THAN = 1,
	LESS_THAN = 2,
	EQUAL = 3,
	EMatchOperator_MAX = 4
};

// Object: Enum HotPatcherRuntime.EMatchRule
enum class EMatchRule : uint8_t
{
	MATCH = 0,
	IGNORE = 1,
	EMatchRule_MAX = 2
};

// Object: Enum HotPatcherRuntime.EMonolithicPathMode
enum class EMonolithicPathMode : uint8_t
{
	MountPath = 0,
	PackagePath = 1,
	EMonolithicPathMode_MAX = 2
};

// Object: Enum HotPatcherRuntime.EPSOSaveMode
enum class EPSOSaveMode : uint8_t
{
	Incremental = 0,
	BoundPSOsOnly = 1,
	SortedBoundPSOs = 2,
	EPSOSaveMode_MAX = 3
};

// Object: Enum HotPatcherRuntime.ESearchCaseMode
enum class ESearchCaseMode : uint8_t
{
	CaseSensitive = 0,
	IgnoreCase = 1,
	ESearchCaseMode_MAX = 2
};

// Object: ScriptStruct HotPatcherRuntime.PakMountInfo
// Size: 0x18 (Inherited: 0x0)
struct FPakMountInfo
{
	struct FString Pak; // 0x0(0x10)
	int32_t PakOrder; // 0x10(0x4)
	uint8_t Pad_0x14[0x4]; // 0x14(0x4)
};

// Object: ScriptStruct HotPatcherRuntime.BinariesPatchConfig
// Size: 0x48 (Inherited: 0x0)
struct FBinariesPatchConfig
{
	EBinariesPatchFeature BinariesPatchType; // 0x0(0x1)
	uint8_t Pad_0x1[0x17]; // 0x1(0x17)
	struct FFilePath ExtractCryptoJson; // 0x18(0x10)
	struct TArray<struct FPlatformBasePak> BaseVersionPaks; // 0x28(0x10)
	struct TArray<struct FPatchMatchRule> MatchRules; // 0x38(0x10)
};

// Object: ScriptStruct HotPatcherRuntime.PatchMatchRule
// Size: 0x18 (Inherited: 0x0)
struct FPatchMatchRule
{
	EMatchRule Rule; // 0x0(0x1)
	EMatchOperator Operator; // 0x1(0x1)
	uint8_t Pad_0x2[0x2]; // 0x2(0x2)
	float size; // 0x4(0x4)
	struct TArray<struct FString> Formaters; // 0x8(0x10)
};

// Object: ScriptStruct HotPatcherRuntime.PlatformBasePak
// Size: 0x18 (Inherited: 0x0)
struct FPlatformBasePak
{
	ETargetPlatform platform; // 0x0(0x1)
	uint8_t Pad_0x1[0x7]; // 0x1(0x7)
	struct TArray<struct FFilePath> Paks; // 0x8(0x10)
};

// Object: ScriptStruct HotPatcherRuntime.PakCommandItem
// Size: 0x20 (Inherited: 0x0)
struct FPakCommandItem
{
	struct FString AssetAbsPath; // 0x0(0x10)
	struct FString AssetMountPath; // 0x10(0x10)
};

// Object: ScriptStruct HotPatcherRuntime.ChunkAssetDescribe
// Size: 0x148 (Inherited: 0x0)
struct FChunkAssetDescribe
{
	uint8_t Pad_0x0[0x148]; // 0x0(0x148)
};

// Object: ScriptStruct HotPatcherRuntime.ChunkPakCommand
// Size: 0x40 (Inherited: 0x0)
struct FChunkPakCommand
{
	uint8_t Pad_0x0[0x40]; // 0x0(0x40)
};

// Object: ScriptStruct HotPatcherRuntime.PakInternalInfo
// Size: 0x6 (Inherited: 0x0)
struct FPakInternalInfo
{
	uint8_t bIncludeAssetRegistry : 1; // 0x0(0x1), Mask(0x1)
	uint8_t BitPad_0x0_1 : 7; // 0x0(0x1)
	uint8_t bIncludeGlobalShaderCache : 1; // 0x1(0x1), Mask(0x1)
	uint8_t BitPad_0x1_1 : 7; // 0x1(0x1)
	uint8_t bIncludeShaderBytecode : 1; // 0x2(0x1), Mask(0x1)
	uint8_t BitPad_0x2_1 : 7; // 0x2(0x1)
	uint8_t bIncludeEngineIni : 1; // 0x3(0x1), Mask(0x1)
	uint8_t BitPad_0x3_1 : 7; // 0x3(0x1)
	uint8_t bIncludePluginIni : 1; // 0x4(0x1), Mask(0x1)
	uint8_t BitPad_0x4_1 : 7; // 0x4(0x1)
	uint8_t bIncludeProjectIni : 1; // 0x5(0x1), Mask(0x1)
	uint8_t BitPad_0x5_1 : 7; // 0x5(0x1)
};

// Object: ScriptStruct HotPatcherRuntime.ChunkInfo
// Size: 0x88 (Inherited: 0x0)
struct FChunkInfo
{
	struct FString ChunkName; // 0x0(0x10)
	uint8_t Pad_0x10[0x2]; // 0x10(0x2)
	uint8_t bStorageUnrealPakList : 1; // 0x12(0x1), Mask(0x1)
	uint8_t BitPad_0x12_1 : 7; // 0x12(0x1)
	uint8_t bStorageIoStorePakList : 1; // 0x13(0x1), Mask(0x1)
	uint8_t BitPad_0x13_1 : 7; // 0x13(0x1)
	uint8_t Pad_0x14[0x4]; // 0x14(0x4)
	struct TArray<struct FDirectoryPath> AssetIncludeFilters; // 0x18(0x10)
	struct TArray<struct FDirectoryPath> AssetIgnoreFilters; // 0x28(0x10)
	uint8_t bAnalysisFilterDependencies : 1; // 0x38(0x1), Mask(0x1)
	uint8_t BitPad_0x38_1 : 7; // 0x38(0x1)
	uint8_t Pad_0x39[0x7]; // 0x39(0x7)
	struct TArray<EAssetRegistryDependencyTypeEx> AssetRegistryDependencyTypes; // 0x40(0x10)
	struct TArray<struct FPatcherSpecifyAsset> IncludeSpecifyAssets; // 0x50(0x10)
	struct TArray<struct FPlatformExternAssets> AddExternAssetsToPlatform; // 0x60(0x10)
	struct FPakInternalInfo InternalFiles; // 0x70(0x6)
	uint8_t Pad_0x76[0x12]; // 0x76(0x12)
};

// Object: ScriptStruct HotPatcherRuntime.PlatformExternAssets
// Size: 0x28 (Inherited: 0x0)
struct FPlatformExternAssets
{
	ETargetPlatform TargetPlatform; // 0x0(0x1)
	uint8_t Pad_0x1[0x7]; // 0x1(0x7)
	struct TArray<struct FExternFileInfo> AddExternFileToPak; // 0x8(0x10)
	struct TArray<struct FExternDirectoryInfo> AddExternDirectoryToPak; // 0x18(0x10)
};

// Object: ScriptStruct HotPatcherRuntime.ExternDirectoryInfo
// Size: 0x20 (Inherited: 0x0)
struct FExternDirectoryInfo
{
	struct FDirectoryPath DirectoryPath; // 0x0(0x10)
	struct FString MountPoint; // 0x10(0x10)
};

// Object: ScriptStruct HotPatcherRuntime.ExternFileInfo
// Size: 0x38 (Inherited: 0x0)
struct FExternFileInfo
{
	struct FFilePath FilePath; // 0x0(0x10)
	struct FString MountPath; // 0x10(0x10)
	struct FString FileHash; // 0x20(0x10)
	uint8_t Pad_0x30[0x8]; // 0x30(0x8)
};

// Object: ScriptStruct HotPatcherRuntime.PatcherSpecifyAsset
// Size: 0x30 (Inherited: 0x0)
struct FPatcherSpecifyAsset
{
	struct FSoftObjectPath Asset; // 0x0(0x18)
	uint8_t bAnalysisAssetDependencies : 1; // 0x18(0x1), Mask(0x1)
	uint8_t BitPad_0x18_1 : 7; // 0x18(0x1)
	uint8_t Pad_0x19[0x7]; // 0x19(0x7)
	struct TArray<EAssetRegistryDependencyTypeEx> AssetRegistryDependencyTypes; // 0x20(0x10)
};

// Object: ScriptStruct HotPatcherRuntime.PakFileProxy
// Size: 0x48 (Inherited: 0x0)
struct FPakFileProxy
{
	struct FString ChunkStoreName; // 0x0(0x10)
	ETargetPlatform platform; // 0x10(0x1)
	uint8_t Pad_0x11[0x7]; // 0x11(0x7)
	struct FString StorageDirectory; // 0x18(0x10)
	struct TArray<struct FPakCommand> PakCommands; // 0x28(0x10)
	struct TArray<struct FString> IoStoreCommands; // 0x38(0x10)
};

// Object: ScriptStruct HotPatcherRuntime.PakCommand
// Size: 0x58 (Inherited: 0x0)
struct FPakCommand
{
	struct FString ChunkName; // 0x0(0x10)
	struct FString MountPath; // 0x10(0x10)
	struct FString AssetPackage; // 0x20(0x10)
	struct TArray<struct FString> PakCommands; // 0x30(0x10)
	struct TArray<struct FString> IoStoreCommands; // 0x40(0x10)
	uint8_t Pad_0x50[0x8]; // 0x50(0x8)
};

// Object: ScriptStruct HotPatcherRuntime.CookerConfig
// Size: 0x88 (Inherited: 0x0)
struct FCookerConfig
{
	struct FString EngineBin; // 0x0(0x10)
	struct FString ProjectPath; // 0x10(0x10)
	struct FString EngineParams; // 0x20(0x10)
	struct TArray<struct FString> CookPlatforms; // 0x30(0x10)
	uint8_t bCookAllMap : 1; // 0x40(0x1), Mask(0x1)
	uint8_t BitPad_0x40_1 : 7; // 0x40(0x1)
	uint8_t Pad_0x41[0x7]; // 0x41(0x7)
	struct TArray<struct FString> CookMaps; // 0x48(0x10)
	struct TArray<struct FString> CookFilter; // 0x58(0x10)
	struct TArray<struct FString> CookSettings; // 0x68(0x10)
	struct FString Options; // 0x78(0x10)
};

// Object: ScriptStruct HotPatcherRuntime.HotPatcherSettingBase
// Size: 0x90 (Inherited: 0x0)
struct FHotPatcherSettingBase
{
	uint8_t Pad_0x0[0x8]; // 0x0(0x8)
	uint8_t bBackupMetadata : 1; // 0x8(0x1), Mask(0x1)
	uint8_t BitPad_0x8_1 : 7; // 0x8(0x1)
	uint8_t bStorageConfig : 1; // 0x9(0x1), Mask(0x1)
	uint8_t BitPad_0x9_1 : 7; // 0x9(0x1)
	uint8_t Pad_0xA[0x6]; // 0xA(0x6)
	struct FDirectoryPath SavePath; // 0x10(0x10)
	uint8_t bStandaloneMode : 1; // 0x20(0x1), Mask(0x1)
	uint8_t BitPad_0x20_1 : 7; // 0x20(0x1)
	uint8_t Pad_0x21[0x7]; // 0x21(0x7)
	struct TArray<struct FString> AdditionalCommandletArgs; // 0x28(0x10)
	uint8_t Pad_0x38[0x58]; // 0x38(0x58)
};

// Object: ScriptStruct HotPatcherRuntime.IoStorePlatformContainers
// Size: 0x38 (Inherited: 0x0)
struct FIoStorePlatformContainers
{
	struct FDirectoryPath BasePackageStagedRootDir; // 0x0(0x10)
	uint8_t bGenerateDiffPatch : 1; // 0x10(0x1), Mask(0x1)
	uint8_t BitPad_0x10_1 : 7; // 0x10(0x1)
	uint8_t Pad_0x11[0x7]; // 0x11(0x7)
	struct FFilePath GlobalContainersOverride; // 0x18(0x10)
	struct FFilePath PatchSourceOverride; // 0x28(0x10)
};

// Object: ScriptStruct HotPatcherRuntime.IoStoreSettings
// Size: 0x80 (Inherited: 0x0)
struct FIoStoreSettings
{
	uint8_t bIoStore : 1; // 0x0(0x1), Mask(0x1)
	uint8_t BitPad_0x0_1 : 7; // 0x0(0x1)
	uint8_t bAllowBulkDataInIoStore : 1; // 0x1(0x1), Mask(0x1)
	uint8_t BitPad_0x1_1 : 7; // 0x1(0x1)
	uint8_t Pad_0x2[0x6]; // 0x2(0x6)
	struct TArray<struct FString> IoStorePakListOptions; // 0x8(0x10)
	struct TArray<struct FString> IoStoreCommandletOptions; // 0x18(0x10)
	struct TMap<ETargetPlatform, struct FIoStorePlatformContainers> PlatformContainers; // 0x28(0x50)
	uint8_t bStoragePakList : 1; // 0x78(0x1), Mask(0x1)
	uint8_t BitPad_0x78_1 : 7; // 0x78(0x1)
	uint8_t bStorageBulkDataInfo : 1; // 0x79(0x1), Mask(0x1)
	uint8_t BitPad_0x79_1 : 7; // 0x79(0x1)
	uint8_t Pad_0x7A[0x6]; // 0x7A(0x6)
};

// Object: ScriptStruct HotPatcherRuntime.PakEncryptSettings
// Size: 0x18 (Inherited: 0x0)
struct FPakEncryptSettings
{
	uint8_t bEncrypt : 1; // 0x0(0x1), Mask(0x1)
	uint8_t BitPad_0x0_1 : 7; // 0x0(0x1)
	uint8_t bEncryptIndex : 1; // 0x1(0x1), Mask(0x1)
	uint8_t BitPad_0x1_1 : 7; // 0x1(0x1)
	uint8_t bUseDefaultCryptoIni : 1; // 0x2(0x1), Mask(0x1)
	uint8_t BitPad_0x2_1 : 7; // 0x2(0x1)
	uint8_t bSign : 1; // 0x3(0x1), Mask(0x1)
	uint8_t BitPad_0x3_1 : 7; // 0x3(0x1)
	uint8_t Pad_0x4[0x4]; // 0x4(0x4)
	struct FFilePath CryptoKeys; // 0x8(0x10)
};

// Object: ScriptStruct HotPatcherRuntime.UnrealPakSettings
// Size: 0x28 (Inherited: 0x0)
struct FUnrealPakSettings
{
	struct TArray<struct FString> UnrealPakListOptions; // 0x0(0x10)
	struct TArray<struct FString> UnrealCommandletOptions; // 0x10(0x10)
	uint8_t bStoragePakList : 1; // 0x20(0x1), Mask(0x1)
	uint8_t BitPad_0x20_1 : 7; // 0x20(0x1)
	uint8_t Pad_0x21[0x7]; // 0x21(0x7)
};

// Object: ScriptStruct HotPatcherRuntime.ExportPatchSettings
// Size: 0x368 (Inherited: 0x90)
struct FExportPatchSettings : FHotPatcherSettingBase
{
	uint8_t bByBaseVersion : 1; // 0x90(0x1), Mask(0x1)
	uint8_t BitPad_0x90_1 : 7; // 0x90(0x1)
	uint8_t Pad_0x91[0x7]; // 0x91(0x7)
	struct FFilePath BaseVersion; // 0x98(0x10)
	struct FString VersionId; // 0xA8(0x10)
	uint8_t bBinariesPatch : 1; // 0xB8(0x1), Mask(0x1)
	uint8_t BitPad_0xB8_1 : 7; // 0xB8(0x1)
	uint8_t Pad_0xB9[0x7]; // 0xB9(0x7)
	struct FBinariesPatchConfig BinariesPatchConfig; // 0xC0(0x48)
	struct TArray<struct FDirectoryPath> AssetIncludeFilters; // 0x108(0x10)
	struct TArray<struct FDirectoryPath> AssetIgnoreFilters; // 0x118(0x10)
	uint8_t bForceSkipContent : 1; // 0x128(0x1), Mask(0x1)
	uint8_t BitPad_0x128_1 : 7; // 0x128(0x1)
	uint8_t Pad_0x129[0x7]; // 0x129(0x7)
	struct TArray<struct FDirectoryPath> ForceSkipContentRules; // 0x130(0x10)
	struct TArray<struct FSoftObjectPath> ForceSkipAssets; // 0x140(0x10)
	uint8_t bIncludeHasRefAssetsOnly : 1; // 0x150(0x1), Mask(0x1)
	uint8_t BitPad_0x150_1 : 7; // 0x150(0x1)
	uint8_t bAnalysisFilterDependencies : 1; // 0x151(0x1), Mask(0x1)
	uint8_t BitPad_0x151_1 : 7; // 0x151(0x1)
	uint8_t bAnalysisDiffAssetDependenciesOnly : 1; // 0x152(0x1), Mask(0x1)
	uint8_t BitPad_0x152_1 : 7; // 0x152(0x1)
	uint8_t bRecursiveWidgetTree : 1; // 0x153(0x1), Mask(0x1)
	uint8_t BitPad_0x153_1 : 7; // 0x153(0x1)
	uint8_t Pad_0x154[0x4]; // 0x154(0x4)
	struct TArray<EAssetRegistryDependencyTypeEx> AssetRegistryDependencyTypes; // 0x158(0x10)
	struct TArray<struct FPatcherSpecifyAsset> IncludeSpecifyAssets; // 0x168(0x10)
	uint8_t bIncludeAssetRegistry : 1; // 0x178(0x1), Mask(0x1)
	uint8_t BitPad_0x178_1 : 7; // 0x178(0x1)
	uint8_t bIncludeGlobalShaderCache : 1; // 0x179(0x1), Mask(0x1)
	uint8_t BitPad_0x179_1 : 7; // 0x179(0x1)
	uint8_t bIncludeShaderBytecode : 1; // 0x17A(0x1), Mask(0x1)
	uint8_t BitPad_0x17A_1 : 7; // 0x17A(0x1)
	uint8_t Pad_0x17B[0x1]; // 0x17B(0x1)
	uint8_t bIncludeEngineIni : 1; // 0x17C(0x1), Mask(0x1)
	uint8_t BitPad_0x17C_1 : 7; // 0x17C(0x1)
	uint8_t bIncludePluginIni : 1; // 0x17D(0x1), Mask(0x1)
	uint8_t BitPad_0x17D_1 : 7; // 0x17D(0x1)
	uint8_t bIncludeProjectIni : 1; // 0x17E(0x1), Mask(0x1)
	uint8_t BitPad_0x17E_1 : 7; // 0x17E(0x1)
	uint8_t bEnableExternFilesDiff : 1; // 0x17F(0x1), Mask(0x1)
	uint8_t BitPad_0x17F_1 : 7; // 0x17F(0x1)
	struct TArray<struct FString> IgnoreDeletionModulesAsset; // 0x180(0x10)
	uint8_t Pad_0x190[0x20]; // 0x190(0x20)
	struct TArray<struct FPlatformExternAssets> AddExternAssetsToPlatform; // 0x1B0(0x10)
	uint8_t bIncludePakVersionFile : 1; // 0x1C0(0x1), Mask(0x1)
	uint8_t BitPad_0x1C0_1 : 7; // 0x1C0(0x1)
	uint8_t Pad_0x1C1[0x7]; // 0x1C1(0x7)
	struct FString PakVersionFileMountPoint; // 0x1C8(0x10)
	uint8_t bEnableChunk : 1; // 0x1D8(0x1), Mask(0x1)
	uint8_t BitPad_0x1D8_1 : 7; // 0x1D8(0x1)
	uint8_t bCreateDefaultChunk : 1; // 0x1D9(0x1), Mask(0x1)
	uint8_t BitPad_0x1D9_1 : 7; // 0x1D9(0x1)
	uint8_t Pad_0x1DA[0x6]; // 0x1DA(0x6)
	struct TArray<struct FChunkInfo> ChunkInfos; // 0x1E0(0x10)
	uint8_t bCookPatchAssets : 1; // 0x1F0(0x1), Mask(0x1)
	uint8_t BitPad_0x1F0_1 : 7; // 0x1F0(0x1)
	uint8_t Pad_0x1F1[0x7]; // 0x1F1(0x7)
	struct FIoStoreSettings IoStoreSettings; // 0x1F8(0x80)
	struct FUnrealPakSettings UnrealPakSettings; // 0x278(0x28)
	struct TArray<struct FString> DefaultPakListOptions; // 0x2A0(0x10)
	struct TArray<struct FString> DefaultCommandletOptions; // 0x2B0(0x10)
	struct FPakEncryptSettings EncryptSettings; // 0x2C0(0x18)
	struct TArray<struct FReplaceText> ReplacePakListTexts; // 0x2D8(0x10)
	struct TArray<ETargetPlatform> PakTargetPlatforms; // 0x2E8(0x10)
	uint8_t bCustomPakNameRegular : 1; // 0x2F8(0x1), Mask(0x1)
	uint8_t BitPad_0x2F8_1 : 7; // 0x2F8(0x1)
	uint8_t Pad_0x2F9[0x7]; // 0x2F9(0x7)
	struct FString PakNameRegular; // 0x300(0x10)
	uint8_t bStorageNewRelease : 1; // 0x310(0x1), Mask(0x1)
	uint8_t BitPad_0x310_1 : 7; // 0x310(0x1)
	uint8_t bStoragePakFileInfo : 1; // 0x311(0x1), Mask(0x1)
	uint8_t BitPad_0x311_1 : 7; // 0x311(0x1)
	uint8_t bIgnoreDeleatedAssetsInfo : 1; // 0x312(0x1), Mask(0x1)
	uint8_t BitPad_0x312_1 : 7; // 0x312(0x1)
	uint8_t bStorageDeletedAssetsToNewReleaseJson : 1; // 0x313(0x1), Mask(0x1)
	uint8_t BitPad_0x313_1 : 7; // 0x313(0x1)
	uint8_t bStorageDiffAnalysisResults : 1; // 0x314(0x1), Mask(0x1)
	uint8_t BitPad_0x314_1 : 7; // 0x314(0x1)
	uint8_t bStorageAssetDependencies : 1; // 0x315(0x1), Mask(0x1)
	uint8_t BitPad_0x315_1 : 7; // 0x315(0x1)
	uint8_t Pad_0x316[0x52]; // 0x316(0x52)
};

// Object: ScriptStruct HotPatcherRuntime.ReplaceText
// Size: 0x28 (Inherited: 0x0)
struct FReplaceText
{
	struct FString From; // 0x0(0x10)
	struct FString To; // 0x10(0x10)
	ESearchCaseMode SearchCase; // 0x20(0x1)
	uint8_t Pad_0x21[0x7]; // 0x21(0x7)
};

// Object: ScriptStruct HotPatcherRuntime.ExportReleaseSettings
// Size: 0x150 (Inherited: 0x90)
struct FExportReleaseSettings : FHotPatcherSettingBase
{
	struct FString VersionId; // 0x90(0x10)
	uint8_t ByPakList : 1; // 0xA0(0x1), Mask(0x1)
	uint8_t BitPad_0xA0_1 : 7; // 0xA0(0x1)
	uint8_t Pad_0xA1[0x7]; // 0xA1(0x7)
	struct TArray<struct FPlatformPakListFiles> PlatformsPakListFiles; // 0xA8(0x10)
	struct TArray<struct FDirectoryPath> AssetIncludeFilters; // 0xB8(0x10)
	struct TArray<struct FDirectoryPath> AssetIgnoreFilters; // 0xC8(0x10)
	uint8_t bAnalysisFilterDependencies : 1; // 0xD8(0x1), Mask(0x1)
	uint8_t BitPad_0xD8_1 : 7; // 0xD8(0x1)
	uint8_t Pad_0xD9[0x7]; // 0xD9(0x7)
	struct TArray<EAssetRegistryDependencyTypeEx> AssetRegistryDependencyTypes; // 0xE0(0x10)
	uint8_t bIncludeHasRefAssetsOnly : 1; // 0xF0(0x1), Mask(0x1)
	uint8_t BitPad_0xF0_1 : 7; // 0xF0(0x1)
	uint8_t Pad_0xF1[0x7]; // 0xF1(0x7)
	struct TArray<struct FPatcherSpecifyAsset> IncludeSpecifyAssets; // 0xF8(0x10)
	uint8_t Pad_0x108[0x20]; // 0x108(0x20)
	struct TArray<struct FPlatformExternAssets> AddExternAssetsToPlatform; // 0x128(0x10)
	uint8_t bStorageAssetDependencies : 1; // 0x138(0x1), Mask(0x1)
	uint8_t BitPad_0x138_1 : 7; // 0x138(0x1)
	uint8_t Pad_0x139[0x7]; // 0x139(0x7)
	struct TArray<ETargetPlatform> BackupMetadataPlatforms; // 0x140(0x10)
};

// Object: ScriptStruct HotPatcherRuntime.PlatformPakListFiles
// Size: 0x38 (Inherited: 0x0)
struct FPlatformPakListFiles
{
	ETargetPlatform TargetPlatform; // 0x0(0x1)
	uint8_t Pad_0x1[0x7]; // 0x1(0x7)
	struct TArray<struct FFilePath> PakResponseFiles; // 0x8(0x10)
	struct TArray<struct FFilePath> PakFiles; // 0x18(0x10)
	struct FString AESKey; // 0x28(0x10)
};

// Object: ScriptStruct HotPatcherRuntime.PlatformPakAssets
// Size: 0x28 (Inherited: 0x0)
struct FPlatformPakAssets
{
	ETargetPlatform platform; // 0x0(0x1)
	uint8_t Pad_0x1[0x7]; // 0x1(0x7)
	struct TArray<struct FPatcherSpecifyAsset> Assets; // 0x8(0x10)
	struct TArray<struct FExternFileInfo> ExternFiles; // 0x18(0x10)
};

// Object: ScriptStruct HotPatcherRuntime.HotPatcherAssetDependency
// Size: 0x50 (Inherited: 0x0)
struct FHotPatcherAssetDependency
{
	struct FAssetDetail Asset; // 0x0(0x30)
	struct TArray<struct FAssetDetail> AssetReference; // 0x30(0x10)
	struct TArray<struct FAssetDetail> AssetDependency; // 0x40(0x10)
};

// Object: ScriptStruct HotPatcherRuntime.HotPatcherVersion
// Size: 0x118 (Inherited: 0x0)
struct FHotPatcherVersion
{
	struct FString VersionId; // 0x0(0x10)
	struct FString BaseVersionId; // 0x10(0x10)
	struct FString Date; // 0x20(0x10)
	uint8_t Pad_0x30[0x48]; // 0x30(0x48)
	struct FAssetDependenciesInfo AssetInfo; // 0x78(0x50)
	struct TMap<ETargetPlatform, struct FPlatformExternAssets> PlatformAssets; // 0xC8(0x50)
};

// Object: ScriptStruct HotPatcherRuntime.PakFileInfo
// Size: 0x28 (Inherited: 0x0)
struct FPakFileInfo
{
	struct FString Filename; // 0x0(0x10)
	struct FString Hash; // 0x10(0x10)
	int32_t FileSize; // 0x20(0x4)
	uint8_t Pad_0x24[0x4]; // 0x24(0x4)
};

// Object: ScriptStruct HotPatcherRuntime.PakVersion
// Size: 0x40 (Inherited: 0x0)
struct FPakVersion
{
	struct FString VersionId; // 0x0(0x10)
	struct FString BaseVersionId; // 0x10(0x10)
	struct FString Date; // 0x20(0x10)
	struct FString CheckCode; // 0x30(0x10)
};

// Object: ScriptStruct HotPatcherRuntime.PatchVersionAssetDiff
// Size: 0xF0 (Inherited: 0x0)
struct FPatchVersionAssetDiff
{
	struct FAssetDependenciesInfo AddAssetDependInfo; // 0x0(0x50)
	struct FAssetDependenciesInfo ModifyAssetDependInfo; // 0x50(0x50)
	struct FAssetDependenciesInfo DeleteAssetDependInfo; // 0xA0(0x50)
};

// Object: ScriptStruct HotPatcherRuntime.PatchVersionExternDiff
// Size: 0x38 (Inherited: 0x0)
struct FPatchVersionExternDiff
{
	ETargetPlatform platform; // 0x0(0x1)
	uint8_t Pad_0x1[0x7]; // 0x1(0x7)
	struct TArray<struct FExternFileInfo> AddExternalFiles; // 0x8(0x10)
	struct TArray<struct FExternFileInfo> ModifyExternalFiles; // 0x18(0x10)
	struct TArray<struct FExternFileInfo> DeleteExternalFiles; // 0x28(0x10)
};

// Object: ScriptStruct HotPatcherRuntime.PatchVersionDiff
// Size: 0x140 (Inherited: 0x0)
struct FPatchVersionDiff
{
	struct FPatchVersionAssetDiff AssetDiffInfo; // 0x0(0xF0)
	struct TMap<ETargetPlatform, struct FPatchVersionExternDiff> PlatformExternDiffInfo; // 0xF0(0x50)
};

// Object: ScriptStruct HotPatcherRuntime.PlatformExternFiles
// Size: 0x18 (Inherited: 0x0)
struct FPlatformExternFiles
{
	ETargetPlatform platform; // 0x0(0x1)
	uint8_t Pad_0x1[0x7]; // 0x1(0x7)
	struct TArray<struct FExternFileInfo> ExternFiles; // 0x8(0x10)
};

// Object: ScriptStruct HotPatcherRuntime.HotPatcherContext
// Size: 0x58 (Inherited: 0x0)
struct FHotPatcherContext
{
	uint8_t Pad_0x0[0x40]; // 0x0(0x40)
	struct UScopedSlowTaskContext* UnrealPakSlowTask; // 0x40(0x8)
	uint8_t Pad_0x48[0x10]; // 0x48(0x10)
};

// Object: ScriptStruct HotPatcherRuntime.HotPatcherReleaseContext
// Size: 0x170 (Inherited: 0x58)
struct FHotPatcherReleaseContext : FHotPatcherContext
{
	struct FHotPatcherVersion NewReleaseVersion; // 0x58(0x118)
};

// Object: ScriptStruct HotPatcherRuntime.HotPatcherPatchContext
// Size: 0x5E0 (Inherited: 0x58)
struct FHotPatcherPatchContext : FHotPatcherContext
{
	uint8_t Pad_0x58[0x8]; // 0x58(0x8)
	struct FHotPatcherVersion BaseVersion; // 0x60(0x118)
	struct FHotPatcherVersion CurrentVersion; // 0x178(0x118)
	struct FPatchVersionDiff VersionDiff; // 0x290(0x140)
	struct FHotPatcherVersion NewReleaseVersion; // 0x3D0(0x118)
	struct FChunkInfo NewVersionChunk; // 0x4E8(0x88)
	struct TArray<struct FChunkInfo> PakChunks; // 0x570(0x10)
	struct TArray<struct FPakCommand> AdditionalFileToPak; // 0x580(0x10)
	uint8_t Pad_0x590[0x50]; // 0x590(0x50)
};

// Object: Class HotPatcherRuntime.FlibPakHelper
// Size: 0x28 (Inherited: 0x28)
struct UFlibPakHelper : UBlueprintFunctionLibrary
{
	DEFINE_UE_CLASS_HELPERS(UFlibPakHelper, "FlibPakHelper")

	// Object: Function HotPatcherRuntime.FlibPakHelper.UnMountPak
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x86619e8
	// Params: [ Num(2) Size(0x11) ]
	static uint8_t UnMountPak(struct FString PakPath);

	// Object: Function HotPatcherRuntime.FlibPakHelper.SerializePakVersionToString
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x86618ac
	// Params: [ Num(3) Size(0x51) ]
	static uint8_t SerializePakVersionToString(const struct FPakVersion& InPakVersion, struct FString& OutString);

	// Object: Function HotPatcherRuntime.FlibPakHelper.ScanPlatformDirectory
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x86616d4
	// Params: [ Num(6) Size(0x29) ]
	static uint8_t ScanPlatformDirectory(struct FString InRelativePath, uint8_t bIncludeFile, uint8_t bIncludeDir, uint8_t bRecursively, struct TArray<struct FString>& OutResault);

	// Object: Function HotPatcherRuntime.FlibPakHelper.ScanPakFilesByPath
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0xf6386a8
	// Params: [ Num(2) Size(0x20) ]
	static struct TArray<struct FString> ScanPakFilesByPath(struct FString DirectoryName);

	// Object: Function HotPatcherRuntime.FlibPakHelper.ScanExtenPakFiles
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0xf639500
	// Params: [ Num(2) Size(0x20) ]
	static struct TArray<struct FString> ScanExtenPakFiles(struct FString DirectoryName);

	// Object: Function HotPatcherRuntime.FlibPakHelper.ScanExtenFilesInDirectory
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x8661548
	// Params: [ Num(5) Size(0x39) ]
	static uint8_t ScanExtenFilesInDirectory(struct FString InRelativePath, struct FString InExtenPostfix, uint8_t InRecursively, struct TArray<struct FString>& OutFiles);

	// Object: Function HotPatcherRuntime.FlibPakHelper.ScanExtenFilesByPostFix
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x86613b4
	// Params: [ Num(3) Size(0x30) ]
	static struct TArray<struct FString> ScanExtenFilesByPostFix(struct FString DirectoryName, struct FString Postfix);

	// Object: Function HotPatcherRuntime.FlibPakHelper.ScanAllVersionDescribleFiles
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x8661344
	// Params: [ Num(1) Size(0x10) ]
	static struct TArray<struct FString> ScanAllVersionDescribleFiles();

	// Object: Function HotPatcherRuntime.FlibPakHelper.OpenPSO
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x8661294
	// Params: [ Num(2) Size(0x11) ]
	static uint8_t OpenPSO(struct FString Name);

	// Object: Function HotPatcherRuntime.FlibPakHelper.MountPak
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0xf4aa5e4
	// Params: [ Num(4) Size(0x29) ]
	static uint8_t MountPak(struct FString PakPath, int32_t PakOrder, struct FString InMountPoint);

	// Object: Function HotPatcherRuntime.FlibPakHelper.LoadAssetRegistry
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x86611e4
	// Params: [ Num(2) Size(0x11) ]
	static uint8_t LoadAssetRegistry(struct FString InAssetRegistryBin);

	// Object: Function HotPatcherRuntime.FlibPakHelper.GetPakOrderByPakPath
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x8661138
	// Params: [ Num(2) Size(0x14) ]
	static int32_t GetPakOrderByPakPath(struct FString PakFile);

	// Object: Function HotPatcherRuntime.FlibPakHelper.GetExtenFileSize
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x8661040
	// Params: [ Num(2) Size(0x18) ]
	static int64_t GetExtenFileSize(struct FString FilePath);

	// Object: Function HotPatcherRuntime.FlibPakHelper.GetAllMountedPaks
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x8660fd0
	// Params: [ Num(1) Size(0x10) ]
	static struct TArray<struct FString> GetAllMountedPaks();

	// Object: Function HotPatcherRuntime.FlibPakHelper.ExecMountPak
	// Flags: [Final|Exec|Native|Static|Public]
	// Offset: 0x8660e20
	// Params: [ Num(3) Size(0x28) ]
	static void ExecMountPak(struct FString InPakPath, int32_t InPakOrder, struct FString InMountPoint);

	// Object: Function HotPatcherRuntime.FlibPakHelper.DeserializeStringToPakVersion
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x8660cfc
	// Params: [ Num(3) Size(0x51) ]
	static uint8_t DeserializeStringToPakVersion(struct FString inString, struct FPakVersion& OutPakVersion);

	// Object: Function HotPatcherRuntime.FlibPakHelper.CreateFileByBytes
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x8660bbc
	// Params: [ Num(4) Size(0x25) ]
	static uint8_t CreateFileByBytes(struct FString InFile, const struct TArray<uint8_t>& InBytes, int32_t InWriteFlag);
};

// Object: Class HotPatcherRuntime.FlibPatchParserHelper
// Size: 0x28 (Inherited: 0x28)
struct UFlibPatchParserHelper : UBlueprintFunctionLibrary
{
	DEFINE_UE_CLASS_HELPERS(UFlibPatchParserHelper, "FlibPatchParserHelper")

	// Object: Function HotPatcherRuntime.FlibPatchParserHelper.ReloadShaderbytecode
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x866320c
	// Params: [ Num(0) Size(0x0) ]
	static void ReloadShaderbytecode();

	// Object: Function HotPatcherRuntime.FlibPatchParserHelper.LoadShaderbytecode
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x8663118
	// Params: [ Num(3) Size(0x21) ]
	static uint8_t LoadShaderbytecode(struct FString LibraryName, struct FString LibraryDir);

	// Object: Function HotPatcherRuntime.FlibPatchParserHelper.HashStringWithSHA1
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x8663038
	// Params: [ Num(2) Size(0x20) ]
	static struct FString HashStringWithSHA1(struct FString inString);

	// Object: Function HotPatcherRuntime.FlibPatchParserHelper.GetProjectName
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x8662fa0
	// Params: [ Num(1) Size(0x10) ]
	static struct FString GetProjectName();

	// Object: Function HotPatcherRuntime.FlibPatchParserHelper.GetProjectIniFiles
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x8662e9c
	// Params: [ Num(3) Size(0x30) ]
	static struct TArray<struct FString> GetProjectIniFiles(struct FString InProjectDir, struct FString InPlatformName);

	// Object: Function HotPatcherRuntime.FlibPatchParserHelper.GetProjectFilePath
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x8662e04
	// Params: [ Num(1) Size(0x10) ]
	static struct FString GetProjectFilePath();

	// Object: Function HotPatcherRuntime.FlibPatchParserHelper.GetPakFileInfo
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x8662cf4
	// Params: [ Num(3) Size(0x39) ]
	static uint8_t GetPakFileInfo(struct FString InFile, struct FPakFileInfo& OutFileInfo);

	// Object: Function HotPatcherRuntime.FlibPatchParserHelper.GetIniConfigs
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x8662bf0
	// Params: [ Num(3) Size(0x30) ]
	static struct TArray<struct FString> GetIniConfigs(struct FString InSearchDir, struct FString InPlatformName);

	// Object: Function HotPatcherRuntime.FlibPatchParserHelper.GetEngineConfigs
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x8662b30
	// Params: [ Num(2) Size(0x20) ]
	static struct TArray<struct FString> GetEngineConfigs(struct FString InPlatformName);

	// Object: Function HotPatcherRuntime.FlibPatchParserHelper.GetEnabledPluginConfigs
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x8662a70
	// Params: [ Num(2) Size(0x20) ]
	static struct TArray<struct FString> GetEnabledPluginConfigs(struct FString InPlatformName);

	// Object: Function HotPatcherRuntime.FlibPatchParserHelper.GetCookedShaderBytecodeFiles
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x8662854
	// Params: [ Num(7) Size(0x49) ]
	static uint8_t GetCookedShaderBytecodeFiles(struct FString InProjectAbsDir, struct FString InProjectName, struct FString InPlatformName, uint8_t InGalobalBytecode, uint8_t InProjectBytecode, struct TArray<struct FString>& OutFiles);

	// Object: Function HotPatcherRuntime.FlibPatchParserHelper.GetCookedGlobalShaderCacheFiles
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x8662750
	// Params: [ Num(3) Size(0x30) ]
	static struct TArray<struct FString> GetCookedGlobalShaderCacheFiles(struct FString InProjectDir, struct FString InPlatformName);

	// Object: Function HotPatcherRuntime.FlibPatchParserHelper.GetCookedAssetRegistryFiles
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x86625c4
	// Params: [ Num(5) Size(0x41) ]
	static uint8_t GetCookedAssetRegistryFiles(struct FString InProjectAbsDir, struct FString InProjectName, struct FString InPlatformName, struct FString& OutFiles);

	// Object: Function HotPatcherRuntime.FlibPatchParserHelper.GetAvailableMaps
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x86623e4
	// Params: [ Num(5) Size(0x28) ]
	static struct TArray<struct FString> GetAvailableMaps(struct FString gameName, uint8_t IncludeEngineMaps, uint8_t IncludePluginMaps, uint8_t Sorted);

	// Object: Function HotPatcherRuntime.FlibPatchParserHelper.GetAllExFilesByPlatform
	// Flags: [Final|Native|Static|Public|HasOutParms]
	// Offset: 0x86622a8
	// Params: [ Num(3) Size(0x48) ]
	static struct FPlatformExternFiles GetAllExFilesByPlatform(const struct FPlatformExternAssets& InPlatformConf, uint8_t InGeneratedHash);

	// Object: Function HotPatcherRuntime.FlibPatchParserHelper.GetAllAssetDependencyDetails
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x8662094
	// Params: [ Num(5) Size(0xB0) ]
	static struct TArray<struct FAssetDetail> GetAllAssetDependencyDetails(const struct FAssetDetail& Asset, const struct TArray<EAssetRegistryDependencyTypeEx>& Types, struct FString AssetType, struct TMap<struct FString, struct FAssetDependenciesInfo>& ScanedCaches);

	// Object: Function HotPatcherRuntime.FlibPatchParserHelper.DiffVersionAssets
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x8661d84
	// Params: [ Num(6) Size(0x191) ]
	static uint8_t DiffVersionAssets(const struct FAssetDependenciesInfo& InNewVersion, const struct FAssetDependenciesInfo& InBaseVersion, struct FAssetDependenciesInfo& OutAddAsset, struct FAssetDependenciesInfo& OutModifyAsset, struct FAssetDependenciesInfo& OutDeleteAsset);

	// Object: Function HotPatcherRuntime.FlibPatchParserHelper.DiffVersionAllPlatformExFiles
	// Flags: [Final|Native|Static|Public|HasOutParms]
	// Offset: 0x8661b3c
	// Params: [ Num(4) Size(0x281) ]
	static uint8_t DiffVersionAllPlatformExFiles(const struct FHotPatcherVersion& InBaseVersion, const struct FHotPatcherVersion& InNewVersion, struct TMap<ETargetPlatform, struct FPatchVersionExternDiff>& OutDiff);
};

// Object: Class HotPatcherRuntime.FlibShaderPipelineCacheHelper
// Size: 0x28 (Inherited: 0x28)
struct UFlibShaderPipelineCacheHelper : UBlueprintFunctionLibrary
{
	DEFINE_UE_CLASS_HELPERS(UFlibShaderPipelineCacheHelper, "FlibShaderPipelineCacheHelper")

	// Object: Function HotPatcherRuntime.FlibShaderPipelineCacheHelper.SavePipelineFileCache
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x8663684
	// Params: [ Num(2) Size(0x2) ]
	static uint8_t SavePipelineFileCache(EPSOSaveMode Mode);

	// Object: Function HotPatcherRuntime.FlibShaderPipelineCacheHelper.LoadShaderPipelineCache
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x86635d4
	// Params: [ Num(2) Size(0x11) ]
	static uint8_t LoadShaderPipelineCache(struct FString Name);

	// Object: Function HotPatcherRuntime.FlibShaderPipelineCacheHelper.IsEnabledUsePSO
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x866359c
	// Params: [ Num(1) Size(0x1) ]
	static uint8_t IsEnabledUsePSO();

	// Object: Function HotPatcherRuntime.FlibShaderPipelineCacheHelper.IsEnabledSaveBoundPSOLog
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x8663564
	// Params: [ Num(1) Size(0x1) ]
	static uint8_t IsEnabledSaveBoundPSOLog();

	// Object: Function HotPatcherRuntime.FlibShaderPipelineCacheHelper.IsEnabledLogPSO
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x866352c
	// Params: [ Num(1) Size(0x1) ]
	static uint8_t IsEnabledLogPSO();

	// Object: Function HotPatcherRuntime.FlibShaderPipelineCacheHelper.EnableShaderPipelineCache
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x866347c
	// Params: [ Num(2) Size(0x2) ]
	static uint8_t EnableShaderPipelineCache(uint8_t bEnable);

	// Object: Function HotPatcherRuntime.FlibShaderPipelineCacheHelper.EnableSaveBoundPSOLog
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x86633cc
	// Params: [ Num(2) Size(0x2) ]
	static uint8_t EnableSaveBoundPSOLog(uint8_t bEnable);

	// Object: Function HotPatcherRuntime.FlibShaderPipelineCacheHelper.EnableLogPSO
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x866331c
	// Params: [ Num(2) Size(0x2) ]
	static uint8_t EnableLogPSO(uint8_t bEnable);
};

// Object: Class HotPatcherRuntime.MountListener
// Size: 0x98 (Inherited: 0x28)
struct UMountListener : UObject
{
	DEFINE_UE_CLASS_HELPERS(UMountListener, "MountListener")

	struct FMulticastInlineDelegate OnMountPakDelegate; // 0x28(0x10)
	struct FMulticastInlineDelegate OnUnMountPakDelegate; // 0x38(0x10)
	uint8_t Pad_0x48[0x50]; // 0x48(0x50)

	// Object: Function HotPatcherRuntime.MountListener.Init
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x8663858
	// Params: [ Num(0) Size(0x0) ]
	void Init();
};

// Object: Class HotPatcherRuntime.ScopedSlowTaskContext
// Size: 0x30 (Inherited: 0x28)
struct UScopedSlowTaskContext : UObject
{
	DEFINE_UE_CLASS_HELPERS(UScopedSlowTaskContext, "ScopedSlowTaskContext")

	uint8_t Pad_0x28[0x8]; // 0x28(0x8)
};

} // namespace SDK
