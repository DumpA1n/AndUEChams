#pragma once

#include "../CoreUObject_classes.hpp"
#include "Engine.hpp"
#include "GameCore.hpp"

namespace SDK
{

// Package: DFMLocalization
// Enums: 4
// Structs: 12
// Classes: 12

struct UGameInstance;
struct FAreaCultureSearchingData;
struct FServerHotPatchData;
struct FHotPatchVersionEntry;
struct FLocalizeVoiceRow;
struct FMidasbuyURLConfigRow;
struct FCurrencyCodeLUTRow;
struct FR13NRegionCodeConfigRow;
struct FComputeTextConfigRow;
struct FLocalizeCultureRow;
struct FLocalizeCommonTextConfigRow;
struct FLocalizeNumberConfigRow;
struct FLocalizeTimeConfigRow;
struct UDFMLocalizationIniConfig;
struct UDFMLocalizationConfig;
struct UDFMLocalizationManager;
struct UDFMLocalizationSettings;
struct UBasePathConfig;
struct UDFMTextFormatData;
struct UDFStringTableManager;
struct UKismetLocalizationLibrary;
struct ULocalizeTimeConfigManager;
struct ULocalizeNumberConfigManager;
struct ULocalizeCommonTextOutGameConfigManager;
struct ULocalizeCommonTextInGameConfigManager;

// Object: Enum DFMLocalization.ECommonTextType
enum class ECommonTextType : uint8_t
{
	InGame = 0,
	OutGame = 1,
	ECommonTextType_MAX = 2
};

// Object: Enum DFMLocalization.ETimeType
enum class ETimeType : uint8_t
{
	Default = 0,
	Short = 1,
	Medium = 2,
	Long = 3,
	Full = 4,
	ETimeType_MAX = 5
};

// Object: Enum DFMLocalization.ECulturePlatformType
enum class ECulturePlatformType : uint8_t
{
	Default = 0,
	Common = 1,
	Console_Only = 2,
	ECulturePlatformType_MAX = 3
};

// Object: Enum DFMLocalization.EVersionType
enum class EVersionType : uint8_t
{
	None = 0,
	Test = 1,
	Shipping = 2,
	EVersionType_MAX = 3
};

// Object: ScriptStruct DFMLocalization.AreaCultureSearchingData
// Size: 0x10 (Inherited: 0x0)
struct FAreaCultureSearchingData
{
	struct TArray<struct FString> SearchingChain; // 0x0(0x10)
};

// Object: ScriptStruct DFMLocalization.ServerHotPatchData
// Size: 0x50 (Inherited: 0x0)
struct FServerHotPatchData
{
	struct FString Namespace; // 0x0(0x10)
	struct FString Key; // 0x10(0x10)
	struct FString SourceString; // 0x20(0x10)
	struct FString CultureSign; // 0x30(0x10)
	struct FString Trans; // 0x40(0x10)
};

// Object: ScriptStruct DFMLocalization.HotPatchVersionEntry
// Size: 0x18 (Inherited: 0x0)
struct FHotPatchVersionEntry
{
	struct FString CultureSign; // 0x0(0x10)
	int32_t Version; // 0x10(0x4)
	uint8_t Pad_0x14[0x4]; // 0x14(0x4)
};

// Object: ScriptStruct DFMLocalization.LocalizeVoiceRow
// Size: 0x80 (Inherited: 0x8)
struct FLocalizeVoiceRow : FTableRowBase
{
	int32_t SortNum; // 0x8(0x4)
	struct FName CultureWwise; // 0xC(0x8)
	uint8_t Pad_0x14[0x4]; // 0x14(0x4)
	struct FText CultureWwiseDisplayName; // 0x18(0x18)
	struct FString RowDescription; // 0x30(0x10)
	struct TArray<EVersionType> Versions; // 0x40(0x10)
	struct TArray<ECulturePlatformType> Platforms; // 0x50(0x10)
	struct FString DownloadKey; // 0x60(0x10)
	struct FString CultureSign; // 0x70(0x10)
};

// Object: ScriptStruct DFMLocalization.MidasbuyURLConfigRow
// Size: 0x38 (Inherited: 0x8)
struct FMidasbuyURLConfigRow : FTableRowBase
{
	struct FString Desc; // 0x8(0x10)
	struct FString RegionCode; // 0x18(0x10)
	struct FString URLString; // 0x28(0x10)
};

// Object: ScriptStruct DFMLocalization.CurrencyCodeLUTRow
// Size: 0x48 (Inherited: 0x8)
struct FCurrencyCodeLUTRow : FTableRowBase
{
	struct FString Desc; // 0x8(0x10)
	struct FString CurrencyCode; // 0x18(0x10)
	struct FString GoogleRegionCode; // 0x28(0x10)
	struct FString AppleRegionCode; // 0x38(0x10)
};

// Object: ScriptStruct DFMLocalization.R13NRegionCodeConfigRow
// Size: 0x20 (Inherited: 0x8)
struct FR13NRegionCodeConfigRow : FTableRowBase
{
	int32_t RegionCode; // 0x8(0x4)
	uint8_t Pad_0xC[0x4]; // 0xC(0x4)
	struct FString RegionDesc; // 0x10(0x10)
};

// Object: ScriptStruct DFMLocalization.ComputeTextConfigRow
// Size: 0x28 (Inherited: 0x8)
struct FComputeTextConfigRow : FTableRowBase
{
	struct FText RandTextConfig; // 0x8(0x18)
	int32_t RandSeedConfig; // 0x20(0x4)
	uint8_t Pad_0x24[0x4]; // 0x24(0x4)
};

// Object: ScriptStruct DFMLocalization.LocalizeCultureRow
// Size: 0x58 (Inherited: 0x8)
struct FLocalizeCultureRow : FTableRowBase
{
	struct FName CultureSign; // 0x8(0x8)
	struct FString RowDescription; // 0x10(0x10)
	struct FName CultureDisplayName; // 0x20(0x8)
	struct FName CultureWwise; // 0x28(0x8)
	struct TArray<EVersionType> Versions; // 0x30(0x10)
	struct TArray<ECulturePlatformType> Platforms; // 0x40(0x10)
	int32_t SecurityReportId; // 0x50(0x4)
	int32_t IsGuideDownload; // 0x54(0x4)
};

// Object: ScriptStruct DFMLocalization.LocalizeCommonTextConfigRow
// Size: 0x40 (Inherited: 0x8)
struct FLocalizeCommonTextConfigRow : FTableRowBase
{
	struct FString TextKey; // 0x8(0x10)
	struct FString Desc; // 0x18(0x10)
	struct FText Text; // 0x28(0x18)
};

// Object: ScriptStruct DFMLocalization.LocalizeNumberConfigRow
// Size: 0x38 (Inherited: 0x8)
struct FLocalizeNumberConfigRow : FTableRowBase
{
	struct FString Desc; // 0x8(0x10)
	struct FString FormatStr; // 0x18(0x10)
	struct TArray<struct FString> UsingCultureList; // 0x28(0x10)
};

// Object: ScriptStruct DFMLocalization.LocalizeTimeConfigRow
// Size: 0x78 (Inherited: 0x8)
struct FLocalizeTimeConfigRow : FTableRowBase
{
	struct FString Name; // 0x8(0x10)
	struct FString Desc; // 0x18(0x10)
	struct TMap<struct FString, struct FString> TimeFormatConfig; // 0x28(0x50)
};

// Object: Class DFMLocalization.DFMLocalizationIniConfig
// Size: 0x58 (Inherited: 0x28)
struct UDFMLocalizationIniConfig : UObject
{
	DEFINE_UE_CLASS_HELPERS(UDFMLocalizationIniConfig, "DFMLocalizationIniConfig")

	struct FSoftClassPath DFMLocalizationConfigPath; // 0x28(0x18)
	struct FSoftObjectPath DFDefaultCodeTablePath; // 0x40(0x18)
};

// Object: Class DFMLocalization.DFMLocalizationConfig
// Size: 0x78 (Inherited: 0x28)
struct UDFMLocalizationConfig : UObject
{
	DEFINE_UE_CLASS_HELPERS(UDFMLocalizationConfig, "DFMLocalizationConfig")

	struct TMap<struct FString, struct FAreaCultureSearchingData> CustomCultureSearchingChainMap; // 0x28(0x50)

	// Object: Function DFMLocalization.DFMLocalizationConfig.RefreshCustomCultureRedirects
	// Flags: [Final|Native|Public]
	// Offset: 0x7bc5940
	// Params: [ Num(0) Size(0x0) ]
	void RefreshCustomCultureRedirects();
};

// Object: Class DFMLocalization.DFMLocalizationManager
// Size: 0x78 (Inherited: 0x30)
struct UDFMLocalizationManager : UGameInstanceSubsystem
{
	DEFINE_UE_CLASS_HELPERS(UDFMLocalizationManager, "DFMLocalizationManager")

	struct FMulticastInlineDelegate OnCultureChanged; // 0x30(0x10)
	struct FMulticastInlineDelegate OnTextCultureChanged; // 0x40(0x10)
	struct FString FallbackCulture; // 0x50(0x10)
	struct UDFMLocalizationSettings* DFMLocalizationSettings; // 0x60(0x8)
	struct UBasePathConfig* LocalizeBasePath; // 0x68(0x8)
	struct UDFMLocalizationConfig* DFMLocalizationConfig; // 0x70(0x8)

	// Object: Function DFMLocalization.DFMLocalizationManager.UpdateDisplayString
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x7bc68d0
	// Params: [ Num(5) Size(0x41) ]
	uint8_t UpdateDisplayString(struct FString& SourceString, struct FString& NewString, struct FString& Namespace, struct FString& Key);

	// Object: Function DFMLocalization.DFMLocalizationManager.UpdateDbVersionByCulture
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x7bc67d4
	// Params: [ Num(3) Size(0x21) ]
	uint8_t UpdateDbVersionByCulture(struct FString InCulture, struct FString InVersion);

	// Object: Function DFMLocalization.DFMLocalizationManager.SetHotPatchVersion
	// Flags: [Final|Native|Public]
	// Offset: 0x7bc6730
	// Params: [ Num(1) Size(0x4) ]
	void SetHotPatchVersion(int32_t InVersion);

	// Object: Function DFMLocalization.DFMLocalizationManager.SetCurrentVoiceCulture
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x7bc6678
	// Params: [ Num(2) Size(0x11) ]
	uint8_t SetCurrentVoiceCulture(struct FString Culture);

	// Object: Function DFMLocalization.DFMLocalizationManager.SetCurrentTextCulture
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x7bc65c0
	// Params: [ Num(2) Size(0x11) ]
	uint8_t SetCurrentTextCulture(struct FString Culture);

	// Object: Function DFMLocalization.DFMLocalizationManager.SetCurrentCulture
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xfa19898
	// Params: [ Num(3) Size(0x12) ]
	uint8_t SetCurrentCulture(struct FString Culture, uint8_t IsInit);

	// Object: Function DFMLocalization.DFMLocalizationManager.LoadR13NLocalizationResource
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x7bc65ac
	// Params: [ Num(0) Size(0x0) ]
	void LoadR13NLocalizationResource();

	// Object: Function DFMLocalization.DFMLocalizationManager.IsLoadCultureRes
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x7bc6574
	// Params: [ Num(1) Size(0x1) ]
	uint8_t IsLoadCultureRes();

	// Object: Function DFMLocalization.DFMLocalizationManager.IsChineseEnv
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x7bc653c
	// Params: [ Num(1) Size(0x1) ]
	uint8_t IsChineseEnv();

	// Object: Function DFMLocalization.DFMLocalizationManager.InitCurrentCulture
	// Flags: [Final|Native|Public]
	// Offset: 0x10b06ce0
	// Params: [ Num(0) Size(0x0) ]
	void InitCurrentCulture();

	// Object: Function DFMLocalization.DFMLocalizationManager.HandleCultureChanged
	// Flags: [Final|Native|Private]
	// Offset: 0x7bc6444
	// Params: [ Num(1) Size(0x10) ]
	void HandleCultureChanged(struct FString Culture);

	// Object: Function DFMLocalization.DFMLocalizationManager.GetSuitableCulture
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x7bc62fc
	// Params: [ Num(3) Size(0x30) ]
	struct FString GetSuitableCulture(const struct TArray<struct FString>& AvalibleCultures, struct FString CultureToMatch);

	// Object: Function DFMLocalization.DFMLocalizationManager.GetSecurityReportId
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xf9d4a2c
	// Params: [ Num(1) Size(0x4) ]
	int32_t GetSecurityReportId();

	// Object: Function DFMLocalization.DFMLocalizationManager.GetRegionName
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x7bc6264
	// Params: [ Num(1) Size(0x10) ]
	struct FString GetRegionName();

	// Object: Function DFMLocalization.DFMLocalizationManager.GetNativeCulture
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x7bc61cc
	// Params: [ Num(1) Size(0x10) ]
	struct FString GetNativeCulture();

	// Object: Function DFMLocalization.DFMLocalizationManager.GetLocalizedCultures
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x7bc615c
	// Params: [ Num(1) Size(0x10) ]
	struct TArray<struct FString> GetLocalizedCultures();

	// Object: Function DFMLocalization.DFMLocalizationManager.GetDisplayString
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x7bc6004
	// Params: [ Num(3) Size(0x30) ]
	struct FString GetDisplayString(struct FString& Namespace, struct FString& Key);

	// Object: Function DFMLocalization.DFMLocalizationManager.GetDBVersionByCulture
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x7bc5f1c
	// Params: [ Num(2) Size(0x20) ]
	struct FString GetDBVersionByCulture(struct FString InCulture);

	// Object: Function DFMLocalization.DFMLocalizationManager.GetCurrentVoiceCulture
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x109ddc54
	// Params: [ Num(1) Size(0x10) ]
	struct FString GetCurrentVoiceCulture();

	// Object: Function DFMLocalization.DFMLocalizationManager.GetCurrentCulture
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xf76df74
	// Params: [ Num(1) Size(0x10) ]
	struct FString GetCurrentCulture();

	// Object: Function DFMLocalization.DFMLocalizationManager.GetCurLanguageVoiceCulture
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x7bc5e84
	// Params: [ Num(1) Size(0x10) ]
	struct FString GetCurLanguageVoiceCulture();

	// Object: Function DFMLocalization.DFMLocalizationManager.GetCurHotPatchVersion
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x1070c378
	// Params: [ Num(1) Size(0x4) ]
	int32_t GetCurHotPatchVersion();

	// Object: Function DFMLocalization.DFMLocalizationManager.Get
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0xf9af584
	// Params: [ Num(2) Size(0x10) ]
	static struct UDFMLocalizationManager* Get(struct UObject* GameInst);

	// Object: Function DFMLocalization.DFMLocalizationManager.DumpTextLocalizationMemory
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x7bc5e70
	// Params: [ Num(0) Size(0x0) ]
	void DumpTextLocalizationMemory();

	// Object: Function DFMLocalization.DFMLocalizationManager.ClearFixDFMLocData
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x7bc5e5c
	// Params: [ Num(0) Size(0x0) ]
	void ClearFixDFMLocData();

	// Object: Function DFMLocalization.DFMLocalizationManager.ApplyServerHotPatch
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x7bc5e48
	// Params: [ Num(0) Size(0x0) ]
	void ApplyServerHotPatch();

	// Object: Function DFMLocalization.DFMLocalizationManager.ApplyHotfix
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x7bc5d9c
	// Params: [ Num(1) Size(0x10) ]
	void ApplyHotfix(struct FString Filename);

	// Object: Function DFMLocalization.DFMLocalizationManager.AddServerHotPatchData
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x7bc5c90
	// Params: [ Num(3) Size(0x15) ]
	uint8_t AddServerHotPatchData(const struct TArray<struct FServerHotPatchData>& ServerHotPatchData, int32_t LastestVersion);

	// Object: Function DFMLocalization.DFMLocalizationManager.AddPolyglotData
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x7bc5acc
	// Params: [ Num(5) Size(0x81) ]
	uint8_t AddPolyglotData(struct FString Namespace, struct FString Key, struct FString SourceString, const struct TMap<struct FString, struct FString>& LocalizedData);
};

// Object: Class DFMLocalization.DFMLocalizationSettings
// Size: 0xF8 (Inherited: 0x28)
struct UDFMLocalizationSettings : UObject
{
	DEFINE_UE_CLASS_HELPERS(UDFMLocalizationSettings, "DFMLocalizationSettings")

	struct TArray<struct FString> LocalizedCultures; // 0x28(0x10)
	struct FString CurrentCulture; // 0x38(0x10)
	struct FString CurrentTextCulture; // 0x48(0x10)
	struct FString CurrentVoiceCulture; // 0x58(0x10)
	struct FString DefaultCulture; // 0x68(0x10)
	struct FString DefaultLanguage; // 0x78(0x10)
	uint8_t bIsFirstOpen : 1; // 0x88(0x1), Mask(0x1)
	uint8_t BitPad_0x88_1 : 7; // 0x88(0x1)
	uint8_t Pad_0x89[0x7]; // 0x89(0x7)
	struct TMap<struct FString, struct FString> CachedCulture2SqlDbVersion; // 0x90(0x50)
	struct TArray<struct FHotPatchVersionEntry> HotPatchVersion; // 0xE0(0x10)
	uint8_t Pad_0xF0[0x8]; // 0xF0(0x8)

	// Object: Function DFMLocalization.DFMLocalizationSettings.UpdateDbVersionByCulture
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x7bc72f8
	// Params: [ Num(3) Size(0x21) ]
	uint8_t UpdateDbVersionByCulture(struct FString InCulture, struct FString InVersion);

	// Object: Function DFMLocalization.DFMLocalizationSettings.UpdateConfig
	// Flags: [Final|Native|Public]
	// Offset: 0x7bc72e4
	// Params: [ Num(0) Size(0x0) ]
	void UpdateConfig();

	// Object: Function DFMLocalization.DFMLocalizationSettings.SetCurrentVoiceCulture
	// Flags: [Final|Native|Public]
	// Offset: 0x7bc7238
	// Params: [ Num(1) Size(0x10) ]
	void SetCurrentVoiceCulture(struct FString Culture);

	// Object: Function DFMLocalization.DFMLocalizationSettings.SetCurrentTextCulture
	// Flags: [Final|Native|Public]
	// Offset: 0x7bc7140
	// Params: [ Num(1) Size(0x10) ]
	void SetCurrentTextCulture(struct FString Culture);

	// Object: Function DFMLocalization.DFMLocalizationSettings.SetCurrentCulture
	// Flags: [Final|Native|Public]
	// Offset: 0x7bc7048
	// Params: [ Num(1) Size(0x10) ]
	void SetCurrentCulture(struct FString Culture);

	// Object: Function DFMLocalization.DFMLocalizationSettings.IsCultureExist
	// Flags: [Final|Native|Private]
	// Offset: 0x7bc6f44
	// Params: [ Num(2) Size(0x11) ]
	uint8_t IsCultureExist(struct FString Culture);

	// Object: Function DFMLocalization.DFMLocalizationSettings.InitCultureList
	// Flags: [Final|Native|Private]
	// Offset: 0x7bc6f0c
	// Params: [ Num(1) Size(0x1) ]
	uint8_t InitCultureList();

	// Object: Function DFMLocalization.DFMLocalizationSettings.GetLocalizedCultures
	// Flags: [Final|Native|Public]
	// Offset: 0x7bc6e9c
	// Params: [ Num(1) Size(0x10) ]
	struct TArray<struct FString> GetLocalizedCultures();

	// Object: Function DFMLocalization.DFMLocalizationSettings.GetDBVersionByCulture
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x7bc6db4
	// Params: [ Num(2) Size(0x20) ]
	struct FString GetDBVersionByCulture(struct FString InCulture);

	// Object: Function DFMLocalization.DFMLocalizationSettings.GetCurrentVoiceCulture
	// Flags: [Final|Native|Public]
	// Offset: 0x7bc6d1c
	// Params: [ Num(1) Size(0x10) ]
	struct FString GetCurrentVoiceCulture();

	// Object: Function DFMLocalization.DFMLocalizationSettings.GetCurrentTextCulture
	// Flags: [Final|Native|Public]
	// Offset: 0x7bc6c84
	// Params: [ Num(1) Size(0x10) ]
	struct FString GetCurrentTextCulture();

	// Object: Function DFMLocalization.DFMLocalizationSettings.GetCurrentCulture
	// Flags: [Final|Native|Public]
	// Offset: 0x7bc6bec
	// Params: [ Num(1) Size(0x10) ]
	struct FString GetCurrentCulture();

	// Object: Function DFMLocalization.DFMLocalizationSettings.CheckPlatformUsable
	// Flags: [Final|Native|Public|HasOutParms]
	// Offset: 0x7bc6b24
	// Params: [ Num(2) Size(0x11) ]
	uint8_t CheckPlatformUsable(const struct TArray<ECulturePlatformType>& InPlatformConfig);
};

// Object: Class DFMLocalization.BasePathConfig
// Size: 0x90 (Inherited: 0x28)
struct UBasePathConfig : UObject
{
	DEFINE_UE_CLASS_HELPERS(UBasePathConfig, "BasePathConfig")

	uint8_t Pad_0x28[0x8]; // 0x28(0x8)
	struct FString BaseRootPath; // 0x30(0x10)
	struct FString DefaultIncrementalHotfixPath; // 0x40(0x10)
	struct FString DefaultHotfixFile; // 0x50(0x10)
	struct FString DefaultServerDataFile; // 0x60(0x10)
	struct FString DefaultServerHotPatchFile; // 0x70(0x10)
	struct FString DefaultPufferLocPath; // 0x80(0x10)

	// Object: Function DFMLocalization.BasePathConfig.GetPufferLocPath
	// Flags: [Final|Native|Public]
	// Offset: 0x7bc785c
	// Params: [ Num(1) Size(0x10) ]
	struct FString GetPufferLocPath();

	// Object: Function DFMLocalization.BasePathConfig.GetPathBasedPuffer
	// Flags: [Final|Native|Public]
	// Offset: 0x7bc7730
	// Params: [ Num(3) Size(0x28) ]
	struct FString GetPathBasedPuffer(struct FString InPath, uint8_t bIsContentDir);

	// Object: Function DFMLocalization.BasePathConfig.GetDefaultServerHotPatchFilePath
	// Flags: [Final|Native|Public]
	// Offset: 0x7bc7698
	// Params: [ Num(1) Size(0x10) ]
	struct FString GetDefaultServerHotPatchFilePath();

	// Object: Function DFMLocalization.BasePathConfig.GetDefaultServerDataFilePath
	// Flags: [Final|Native|Public]
	// Offset: 0x7bc7600
	// Params: [ Num(1) Size(0x10) ]
	struct FString GetDefaultServerDataFilePath();

	// Object: Function DFMLocalization.BasePathConfig.GetDefaultIncrementalHotfixPath
	// Flags: [Final|Native|Public]
	// Offset: 0x7bc7568
	// Params: [ Num(1) Size(0x10) ]
	struct FString GetDefaultIncrementalHotfixPath();

	// Object: Function DFMLocalization.BasePathConfig.GetDefaultHotfixFilePath
	// Flags: [Final|Native|Public]
	// Offset: 0x7bc74d0
	// Params: [ Num(1) Size(0x10) ]
	struct FString GetDefaultHotfixFilePath();

	// Object: Function DFMLocalization.BasePathConfig.GetBaseRootPath
	// Flags: [Final|Native|Public]
	// Offset: 0x7bc7438
	// Params: [ Num(1) Size(0x10) ]
	struct FString GetBaseRootPath();
};

// Object: Class DFMLocalization.DFMTextFormatData
// Size: 0xB0 (Inherited: 0x28)
struct UDFMTextFormatData : UObject
{
	DEFINE_UE_CLASS_HELPERS(UDFMTextFormatData, "DFMTextFormatData")

	uint8_t Pad_0x28[0x88]; // 0x28(0x88)

	// Object: Function DFMLocalization.DFMTextFormatData.SetFormatText
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x7bc7e18
	// Params: [ Num(1) Size(0x18) ]
	void SetFormatText(const struct FText& InText);

	// Object: Function DFMLocalization.DFMTextFormatData.DoFormatText
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x7bc7d48
	// Params: [ Num(1) Size(0x18) ]
	struct FText DoFormatText();

	// Object: Function DFMLocalization.DFMTextFormatData.CreateNewFormatData
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x7bc7d14
	// Params: [ Num(1) Size(0x8) ]
	static struct UDFMTextFormatData* CreateNewFormatData();

	// Object: Function DFMLocalization.DFMTextFormatData.AddArg_Text
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x7bc7bc0
	// Params: [ Num(2) Size(0x28) ]
	void AddArg_Text(struct FString InName, const struct FText& InData);

	// Object: Function DFMLocalization.DFMTextFormatData.AddArg_Int
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x7bc7ad8
	// Params: [ Num(2) Size(0x14) ]
	void AddArg_Int(struct FString InName, int32_t InData);

	// Object: Function DFMLocalization.DFMTextFormatData.AddArg_Float
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x7bc79f0
	// Params: [ Num(2) Size(0x14) ]
	void AddArg_Float(struct FString InName, float InData);

	// Object: Function DFMLocalization.DFMTextFormatData.AddArg_Double
	// Flags: [Final|Native|Public]
	// Offset: 0x7bc7908
	// Params: [ Num(2) Size(0x18) ]
	void AddArg_Double(struct FString InName, double InData);
};

// Object: Class DFMLocalization.DFStringTableManager
// Size: 0x30 (Inherited: 0x30)
struct UDFStringTableManager : UGameInstanceSubsystem
{
	DEFINE_UE_CLASS_HELPERS(UDFStringTableManager, "DFStringTableManager")

	// Object: Function DFMLocalization.DFStringTableManager.UnloadStringTable
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x7bc804c
	// Params: [ Num(1) Size(0x8) ]
	void UnloadStringTable(struct FName InTableId);

	// Object: Function DFMLocalization.DFStringTableManager.UnloadAllStringTableStructs
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x7bc8038
	// Params: [ Num(0) Size(0x0) ]
	void UnloadAllStringTableStructs();

	// Object: Function DFMLocalization.DFStringTableManager.UnloadAllStringTables
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x7bc8024
	// Params: [ Num(0) Size(0x0) ]
	void UnloadAllStringTables();

	// Object: Function DFMLocalization.DFStringTableManager.OnStringTableLoaded
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x7bc8010
	// Params: [ Num(0) Size(0x0) ]
	void OnStringTableLoaded();

	// Object: Function DFMLocalization.DFStringTableManager.Get
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x10941ed0
	// Params: [ Num(2) Size(0x10) ]
	static struct UDFStringTableManager* Get(struct UGameInstance* InGameInstance);

	// Object: Function DFMLocalization.DFStringTableManager.EnableStringTableSqlite
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x7bc7fd8
	// Params: [ Num(1) Size(0x1) ]
	uint8_t EnableStringTableSqlite();

	// Object: Function DFMLocalization.DFStringTableManager.EnableSqlite
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x7bc7fa0
	// Params: [ Num(1) Size(0x1) ]
	uint8_t EnableSqlite();

	// Object: Function DFMLocalization.DFStringTableManager.EnableReleaseStringTable
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x10aec090
	// Params: [ Num(1) Size(0x1) ]
	uint8_t EnableReleaseStringTable();

	// Object: Function DFMLocalization.DFStringTableManager.EnableLocalizationSqlite
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x7bc7f68
	// Params: [ Num(1) Size(0x1) ]
	uint8_t EnableLocalizationSqlite();

	// Object: Function DFMLocalization.DFStringTableManager.EnableLoadStringTableFromBin
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x7bc7f30
	// Params: [ Num(1) Size(0x1) ]
	uint8_t EnableLoadStringTableFromBin();
};

// Object: Class DFMLocalization.KismetLocalizationLibrary
// Size: 0x28 (Inherited: 0x28)
struct UKismetLocalizationLibrary : UBlueprintFunctionLibrary
{
	DEFINE_UE_CLASS_HELPERS(UKismetLocalizationLibrary, "KismetLocalizationLibrary")

	// Object: Function DFMLocalization.KismetLocalizationLibrary.Loc_SetBeforeLoginStage
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x7bc91d0
	// Params: [ Num(1) Size(0x1) ]
	static void Loc_SetBeforeLoginStage(uint8_t IsBeforeLoginStage);

	// Object: Function DFMLocalization.KismetLocalizationLibrary.Loc_OnDownloadCurrentCultureDB
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x7bc91bc
	// Params: [ Num(0) Size(0x0) ]
	static void Loc_OnDownloadCurrentCultureDB();

	// Object: Function DFMLocalization.KismetLocalizationLibrary.Loc_NormalizeNumber2Str_Int64
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x7bc9014
	// Params: [ Num(4) Size(0x30) ]
	static struct FString Loc_NormalizeNumber2Str_Int64(int64_t InNum, struct FString InTargetCulture, int32_t MaximumFractionalDigits);

	// Object: Function DFMLocalization.KismetLocalizationLibrary.Loc_NormalizeNumber2Str_Int
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0xeaa5e30
	// Params: [ Num(4) Size(0x30) ]
	static struct FString Loc_NormalizeNumber2Str_Int(int32_t InNum, struct FString InTargetCulture, int32_t MaximumFractionalDigits);

	// Object: Function DFMLocalization.KismetLocalizationLibrary.Loc_NormalizeNumber2Str_Float
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x7bc8e64
	// Params: [ Num(4) Size(0x30) ]
	static struct FString Loc_NormalizeNumber2Str_Float(float InNum, struct FString InTargetCulture, int32_t MaximumFractionalDigits);

	// Object: Function DFMLocalization.KismetLocalizationLibrary.Loc_NormalizeNumber2Str_Double
	// Flags: [Final|Native|Static|Public]
	// Offset: 0xeaa7f88
	// Params: [ Num(4) Size(0x30) ]
	static struct FString Loc_NormalizeNumber2Str_Double(double InNum, struct FString InTargetCulture, int32_t MaximumFractionalDigits);

	// Object: Function DFMLocalization.KismetLocalizationLibrary.Loc_NormalizeNumber2Percentage
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x7bc8d8c
	// Params: [ Num(2) Size(0x18) ]
	static struct FString Loc_NormalizeNumber2Percentage(float InNum);

	// Object: Function DFMLocalization.KismetLocalizationLibrary.Loc_GetTimeStrWithFormatName
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable]
	// Offset: 0x7bc8c60
	// Params: [ Num(3) Size(0x28) ]
	static struct FString Loc_GetTimeStrWithFormatName(const struct FDateTime& InDateTime, struct FString InRowName);

	// Object: Function DFMLocalization.KismetLocalizationLibrary.Loc_GetTimeFormatStr
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x7bc8b80
	// Params: [ Num(2) Size(0x20) ]
	static struct FString Loc_GetTimeFormatStr(struct FString InRowName);

	// Object: Function DFMLocalization.KismetLocalizationLibrary.Loc_GetTextFromLoc
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0xe7acbac
	// Params: [ Num(3) Size(0x38) ]
	static struct FText Loc_GetTextFromLoc(struct FString InTableName, struct FString InKey);

	// Object: Function DFMLocalization.KismetLocalizationLibrary.Loc_GetTextFromBuffer
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x7bc8a68
	// Params: [ Num(2) Size(0x28) ]
	static struct FText Loc_GetTextFromBuffer(struct FString InBuffer);

	// Object: Function DFMLocalization.KismetLocalizationLibrary.Loc_GetTableIdByName
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x7bc89bc
	// Params: [ Num(2) Size(0x18) ]
	static struct FName Loc_GetTableIdByName(struct FString InTableName);

	// Object: Function DFMLocalization.KismetLocalizationLibrary.Loc_GetStrMD5Hash
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0xeffe420
	// Params: [ Num(2) Size(0x20) ]
	static struct FString Loc_GetStrMD5Hash(struct FString InStr);

	// Object: Function DFMLocalization.KismetLocalizationLibrary.Loc_GetNormalizedTimeWithFormat
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable]
	// Offset: 0x7bc8890
	// Params: [ Num(3) Size(0x28) ]
	static struct FString Loc_GetNormalizedTimeWithFormat(const struct FDateTime& InDateTime, struct FString InFormat);

	// Object: Function DFMLocalization.KismetLocalizationLibrary.Loc_GetNormalizedTimeWithCulture
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable]
	// Offset: 0x7bc8718
	// Params: [ Num(4) Size(0x30) ]
	static struct FString Loc_GetNormalizedTimeWithCulture(const struct FDateTime& InDateTime, struct FString InTargetCulture, const ETimeType& InDateTimeStyle);

	// Object: Function DFMLocalization.KismetLocalizationLibrary.Loc_GetNormalizedTime
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable]
	// Offset: 0x7bc8634
	// Params: [ Num(2) Size(0x18) ]
	static struct FString Loc_GetNormalizedTime(const struct FDateTime& InDateTime);

	// Object: Function DFMLocalization.KismetLocalizationLibrary.Loc_GetCommonText
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x7bc8490
	// Params: [ Num(3) Size(0x30) ]
	static struct FText Loc_GetCommonText(ECommonTextType TextType, struct FString InTextKey);

	// Object: Function DFMLocalization.KismetLocalizationLibrary.Loc_DecompressCultureDB
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x7bc839c
	// Params: [ Num(3) Size(0x12) ]
	static uint8_t Loc_DecompressCultureDB(struct FString InCultureName, uint8_t bIsForceDecompress);

	// Object: Function DFMLocalization.KismetLocalizationLibrary.Loc_BuildFTextWithNamespaceAndKey
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x7bc81fc
	// Params: [ Num(4) Size(0x48) ]
	static struct FText Loc_BuildFTextWithNamespaceAndKey(struct FString InNamespace, struct FString InKey, struct FString InSourceString);
};

// Object: Class DFMLocalization.LocalizeTimeConfigManager
// Size: 0x38 (Inherited: 0x30)
struct ULocalizeTimeConfigManager : UDataTableSystemManagerBase
{
	DEFINE_UE_CLASS_HELPERS(ULocalizeTimeConfigManager, "LocalizeTimeConfigManager")

	uint8_t Pad_0x30[0x8]; // 0x30(0x8)
};

// Object: Class DFMLocalization.LocalizeNumberConfigManager
// Size: 0x1C0 (Inherited: 0x30)
struct ULocalizeNumberConfigManager : UGameInstanceSubsystem
{
	DEFINE_UE_CLASS_HELPERS(ULocalizeNumberConfigManager, "LocalizeNumberConfigManager")

	uint8_t Pad_0x30[0x190]; // 0x30(0x190)

	// Object: Function DFMLocalization.LocalizeNumberConfigManager.UpdateSeparatorStr
	// Flags: [Final|Native|Private]
	// Offset: 0xfc5ba2c
	// Params: [ Num(1) Size(0x10) ]
	void UpdateSeparatorStr(struct FString InCulture);

	// Object: Function DFMLocalization.LocalizeNumberConfigManager.GetNumberSeparatorStr
	// Flags: [Final|Native|Public]
	// Offset: 0x7bc933c
	// Params: [ Num(1) Size(0x10) ]
	struct FString GetNumberSeparatorStr();

	// Object: Function DFMLocalization.LocalizeNumberConfigManager.GetDecimalSeparatorStr
	// Flags: [Final|Native|Public]
	// Offset: 0x7bc92a4
	// Params: [ Num(1) Size(0x10) ]
	struct FString GetDecimalSeparatorStr();
};

// Object: Class DFMLocalization.LocalizeCommonTextOutGameConfigManager
// Size: 0x50 (Inherited: 0x30)
struct ULocalizeCommonTextOutGameConfigManager : UDataTableSystemManagerBase
{
	DEFINE_UE_CLASS_HELPERS(ULocalizeCommonTextOutGameConfigManager, "LocalizeCommonTextOutGameConfigManager")

	uint8_t Pad_0x30[0x20]; // 0x30(0x20)
};

// Object: Class DFMLocalization.LocalizeCommonTextInGameConfigManager
// Size: 0x50 (Inherited: 0x30)
struct ULocalizeCommonTextInGameConfigManager : UDataTableSystemManagerBase
{
	DEFINE_UE_CLASS_HELPERS(ULocalizeCommonTextInGameConfigManager, "LocalizeCommonTextInGameConfigManager")

	uint8_t Pad_0x30[0x20]; // 0x30(0x20)
};

} // namespace SDK
