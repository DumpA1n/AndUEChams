#pragma once

#include "../CoreUObject_classes.hpp"
#include "AssetPackerRuntime.hpp"
#include "Engine.hpp"
#include "PerfGear.hpp"

namespace SDK
{

// Package: GameCore
// Enums: 17
// Structs: 29
// Classes: 49

struct AActor;
struct APlayerController;
enum class EFXQualityLevel : uint8_t;
enum class EPrimaryAssetPakRule : uint8_t;
struct FFXInstance;
struct UActorComponent;
struct UDataTable;
struct UEngineSubsystem;
struct UGameInstance;
struct UGameInstanceSubsystem;
struct UParticleSystem;
struct USceneCaptureComponent2D;
struct UUserWidget;
struct UWorld;
struct UWorldSubsystem;
struct FDataTableUseSceneValue;
struct FDescRowBase;
struct FAppSettingForUpdate;
struct FLoginSettingRow;
struct FMapleSettingRow;
struct FAppSettingRow;
struct FAppSettingForMapleChannel;
struct FAppSettingForUpdateChannel;
struct FAsyncReqGroup;
struct FAsyncReqStruct;
struct FAssetRetargetInfoRow;
struct FPackageDescRow;
struct FAssetDescRowBase;
struct FPreloadAssetDescRowBase;
struct FAssetStoreItemRow;
struct FGameTypeConfig;
struct FCSV2Datatable;
struct FDataTableAssetInfo;
struct FDataTableLiteContent;
struct FDirIconRow;
struct FDirTextRow;
struct FFrameStackBgAssetRow;
struct FFrameStackTransitionRow;
struct FEnvVariables;
struct FLuaAssetRow;
struct FLuaAssetRowPCSplit;
struct FOneStringRow;
struct FSceneTODRow;
struct FTODSubLevelSequenceRow;
struct UAnimNotify_PlayParticleEffectGroup;
struct UAppSetting;
struct UAppSettingsExtend;
struct UAssetBaseManager;
struct UAssetBaseManagerSetting;
struct UAssetStore;
struct UBaseGameInstance;
struct UDataTableAssetInfoManager;
struct UDataTableSystemManagerBase;
struct UCSV2DatatableManager;
struct UGPSubsystemBase;
struct UDataTableSystemImpl;
struct UDataTableSystemImplDS;
struct IDataTableSystemInterface;
struct UDataTableSystemManagerLite;
struct IDataTableSystemManagerLiteInterface;
struct UDataTableSystemPlayerImpl;
struct UDeviceSetting;
struct UEditorVersionUtils;
struct UGameResVersion;
struct UGameVersionUtils;
struct UGameVersionBlueprintTools;
struct UWorldSingletonCollection;
struct UGameInstanceSingletonCollection;
struct UEngineSingletonCollection;
struct UWorldSingletonHelper;
struct UGameInstanceSingletonHelper;
struct UEngineSingletonHelper;
struct UGPAIUtils;
struct UGPBlueprintUtils;
struct UGPGConfigUtils;
struct UGPNetModeUtils;
struct UWorldSubsystemExample;
struct UGameInstanceSubsystemExample;
struct ALevelSubsystem;
struct ALevelSubsystemExample;
struct ANormalActorSingletonExample;
struct UNormalWorldObjectSingletonExample;
struct UNormalGameInstanceObjectSingletonExample;
struct UGPSingletonUtils;
struct UGPSubsystemManagerImpl;
struct IGPSubsystemManagerInterface;
struct AGPWorldSettingsBase;
struct ULevelSubsystemConfig;
struct ULevelSubsystemCollection;
struct UParticleSystemGroup;
struct USceneData;
struct ISceneDataInterface;
struct USceneDataInterfaceUtils;

// Object: Enum GameCore.EAppUpdateType
enum class EAppUpdateType : uint8_t
{
	Dolphin = 0,
	Puffer = 1,
	EAppUpdateType_MAX = 2
};

// Object: Enum GameCore.EPreloadType
enum class EPreloadType : uint8_t
{
	NoBlock = 0,
	Block = 1,
	EPreloadType_MAX = 2
};

// Object: Enum GameCore.EDataTableReplaceScene
enum class EDataTableReplaceScene : uint8_t
{
	FrontEnd = 2,
	InGameSOL = 3,
	InGameBattleField = 4,
	Login = 6,
	EDataTableReplaceScene_MAX = 7
};

// Object: Enum GameCore.EDataTableLoadingStep
enum class EDataTableLoadingStep : uint8_t
{
	None = 0,
	Loading = 1,
	Success = 2,
	Fail = 3,
	EDataTableLoadingStep_MAX = 4
};

// Object: Enum GameCore.EDataTableUseClientType
enum class EDataTableUseClientType : uint8_t
{
	All = 0,
	DS = 1,
	Editor = 2,
	Android = 3,
	IOS = 4,
	PC = 5,
	Console = 6,
	OpenHarmony = 7,
	EDataTableUseClientType_MAX = 8
};

// Object: Enum GameCore.EDataTableUseScene
enum class EDataTableUseScene : uint8_t
{
	None = 0,
	Common = 1,
	FrontEnd = 2,
	InGameSOL = 3,
	InGameBattleField = 4,
	Login = 5,
	Disable = 6,
	EDataTableUseScene_MAX = 7
};

// Object: Enum GameCore.EDatatableAssetinfoOPCode
enum class EDatatableAssetinfoOPCode : uint8_t
{
	Default = 0,
	Add = 1,
	Remove = 2,
	AddLoaded = 3,
	ReLoad = 4,
	EDatatableAssetinfoOPCode_MAX = 5
};

// Object: Enum GameCore.EDeviceLevel
enum class EDeviceLevel : uint8_t
{
	VeryLow = 0,
	Low = 1,
	Middle = 2,
	Standard = 3,
	High = 4,
	VeryHigh = 5,
	Unknown = 6,
	EDeviceLevel_MAX = 7
};

// Object: Enum GameCore.EBackgroundType
enum class EBackgroundType : uint8_t
{
	None = 0,
	Image = 1,
	Media = 2,
	CustomBP = 3,
	CDNImage = 4,
	DirectOnStackBP = 5,
	EBackgroundType_MAX = 6
};

// Object: Enum GameCore.EBackgroundScaleType
enum class EBackgroundScaleType : uint8_t
{
	Scale = 0,
	UnScale = 1,
	EBackgroundScaleType_MAX = 2
};

// Object: Enum GameCore.EGameVersionCompareResult
enum class EGameVersionCompareResult : uint8_t
{
	VERSION_COMPARE_EQUAL = 0,
	VERSION_COMPARE_LOWER = 1,
	VERSION_COMPARE_HIGHER = 2,
	VERSION_COMPARE_ERROR = 3,
	VERSION_COMPARE_MAX = 4
};

// Object: Enum GameCore.EResourceMSVersion
enum class EResourceMSVersion : uint8_t
{
	Unknown = 0,
	She1 = 11,
	She2 = 12,
	She3 = 13,
	She4 = 14,
	She5 = 15,
	Ma1 = 21,
	Ma2 = 22,
	Ma3 = 23,
	Ma4 = 24,
	Ma5 = 25,
	Yang1 = 31,
	Yang2 = 32,
	Yang3 = 33,
	Yang4 = 34,
	Yang5 = 35,
	Hou1 = 41,
	Hou2 = 42,
	Hou3 = 43,
	Hou4 = 45,
	Hou5 = 46,
	Ji1 = 51,
	Ji2 = 52,
	Ji3 = 53,
	Ji4 = 54,
	Ji5 = 55,
	Gou1 = 61,
	Gou2 = 62,
	Gou3 = 63,
	Gou4 = 64,
	Gou5 = 65,
	Zhu1 = 71,
	Zhu2 = 72,
	Zhu3 = 73,
	Zhu4 = 74,
	Zhu5 = 75,
	EResourceMSVersion_MAX = 76
};

// Object: Enum GameCore.EGameChannel
enum class EGameChannel : uint8_t
{
	Unknown = 0,
	Official = 1,
	WeGame = 2,
	Steam = 3,
	Epic = 4,
	Google = 5,
	EGameChannel_MAX = 6
};

// Object: Enum GameCore.EGameBuildRegion
enum class EGameBuildRegion : uint8_t
{
	Default = 0,
	CN = 1,
	CN_Exper = 2,
	CN_Match = 3,
	Global = 4,
	Global_Exper = 5,
	Global_Match = 6,
	GA = 7,
	GA_Exper = 8,
	EGameBuildRegion_MAX = 9
};

// Object: Enum GameCore.EGameBuildConfiguration
enum class EGameBuildConfiguration : uint8_t
{
	Default = 0,
	Daily = 1,
	Test = 2,
	Match = 3,
	Shipping = 4,
	ShippingTest = 5,
	Release = 6,
	EGameBuildConfiguration_MAX = 7
};

// Object: Enum GameCore.EPakAreaFilter
enum class EPakAreaFilter : uint8_t
{
	CN = 0,
	CN_Exper = 1,
	CN_Match = 2,
	Global = 3,
	Global_Exper = 4,
	Global_Match = 5,
	GA = 6,
	GA_Exper = 7,
	EPakAreaFilter_MAX = 8
};

// Object: Enum GameCore.ETODType
enum class ETODType : uint8_t
{
	Day = 0,
	Dusk = 1,
	Random = 2,
	DONOTUSE = 3,
	ETODType_MAX = 4
};

// Object: ScriptStruct GameCore.DataTableUseSceneValue
// Size: 0x8 (Inherited: 0x0)
struct FDataTableUseSceneValue
{
	uint64_t Value; // 0x0(0x8)
};

// Object: ScriptStruct GameCore.DescRowBase
// Size: 0x10 (Inherited: 0x8)
struct FDescRowBase : FTableRowBase
{
	struct FName RowDescription; // 0x8(0x8)
};

// Object: ScriptStruct GameCore.AppSettingForUpdate
// Size: 0x68 (Inherited: 0x0)
struct FAppSettingForUpdate
{
	uint8_t Pad_0x0[0x8]; // 0x0(0x8)
	struct FString DolphinPreDomain; // 0x8(0x10)
	struct FString DolphinDomain; // 0x18(0x10)
	struct TArray<struct FAppSettingForUpdateChannel> DolphinProductIdList; // 0x28(0x10)
	struct FString PufferPreDomain; // 0x38(0x10)
	struct FString PufferDomain; // 0x48(0x10)
	struct TArray<struct FAppSettingForUpdateChannel> PufferProductIdList; // 0x58(0x10)
};

// Object: ScriptStruct GameCore.LoginSettingRow
// Size: 0x70 (Inherited: 0x0)
struct FLoginSettingRow
{
	struct FString EditorLoginList; // 0x0(0x10)
	struct FString WindowsLoginList; // 0x10(0x10)
	struct FString AndroidLoginList; // 0x20(0x10)
	struct FString OpenHarmonyLoginList; // 0x30(0x10)
	struct FString IOSLoginList; // 0x40(0x10)
	struct FString XSXLoginList; // 0x50(0x10)
	struct FString PS5LoginList; // 0x60(0x10)
};

// Object: ScriptStruct GameCore.MapleSettingRow
// Size: 0x70 (Inherited: 0x0)
struct FMapleSettingRow
{
	struct FString MaplePreDomain; // 0x0(0x10)
	struct FString MapleDomain; // 0x10(0x10)
	struct FString DefaultCDNUrl; // 0x20(0x10)
	struct FString CDNUrl_PC; // 0x30(0x10)
	struct TArray<struct FString> CDNFallbackDomains; // 0x40(0x10)
	struct TArray<struct FString> CDNFallbackDomains_PC; // 0x50(0x10)
	struct TArray<struct FAppSettingForMapleChannel> MapleChannels; // 0x60(0x10)
};

// Object: ScriptStruct GameCore.AppSettingRow
// Size: 0x770 (Inherited: 0x0)
struct FAppSettingRow
{
	uint8_t Pad_0x0[0x8]; // 0x0(0x8)
	struct FString BundleDisplayName; // 0x8(0x10)
	struct FText ProjectDisplayedTitle; // 0x18(0x18)
	struct FString BundleName; // 0x30(0x10)
	struct FString BundleId; // 0x40(0x10)
	struct FString AppLinks; // 0x50(0x10)
	struct FString RegionCode; // 0x60(0x10)
	struct FString SdkBlackListStr; // 0x70(0x10)
	uint8_t IosMinimumiOSVersion; // 0x80(0x1)
	uint8_t Pad_0x81[0x7]; // 0x81(0x7)
	struct FString IosMobileProvision; // 0x88(0x10)
	struct FString IosSiningCertificate; // 0x98(0x10)
	uint8_t IosSupportItunesFileSharing : 1; // 0xA8(0x1), Mask(0x1)
	uint8_t BitPad_0xA8_1 : 7; // 0xA8(0x1)
	uint8_t Pad_0xA9[0x3]; // 0xA9(0x3)
	int32_t AndroidMinSDKVersion; // 0xAC(0x4)
	int32_t AndroidTargetSDKVersion; // 0xB0(0x4)
	uint8_t Pad_0xB4[0x4]; // 0xB4(0x4)
	struct FString AndroidKeyStore; // 0xB8(0x10)
	struct FString AndroidKeyStorePassword; // 0xC8(0x10)
	struct FString AndroidKeyAlias; // 0xD8(0x10)
	struct FString AndroidKeyAliasPassword; // 0xE8(0x10)
	struct FString OpenHarmonyBundleDisplayName; // 0xF8(0x10)
	struct FString OpenHarmonyBundleName; // 0x108(0x10)
	struct FString OpenHarmonyAppId; // 0x118(0x10)
	struct FString OpenHarmonyClientId; // 0x128(0x10)
	struct FString OpenHarmonyKeyStorePassword; // 0x138(0x10)
	struct FString OpenHarmonyKeyAlias; // 0x148(0x10)
	struct FString OpenHarmonyKeyAliasPassword; // 0x158(0x10)
	struct FName DefaultCulture; // 0x168(0x8)
	struct FName DefaultAudioCulture; // 0x170(0x8)
	struct TArray<struct FString> SupportCultures; // 0x178(0x10)
	struct FString GCloudId; // 0x188(0x10)
	struct FString GCloudKey; // 0x198(0x10)
	struct FString GVoiceId; // 0x1A8(0x10)
	struct FString GVoiceKey; // 0x1B8(0x10)
	struct FString ApolloId; // 0x1C8(0x10)
	struct FString ApolloKey; // 0x1D8(0x10)
	struct FString ApolloDH; // 0x1E8(0x10)
	struct FString ApolloKeyRelease; // 0x1F8(0x10)
	struct FString ApolloDHRelease; // 0x208(0x10)
	struct FString SdkGameId; // 0x218(0x10)
	struct FString WeGameId; // 0x228(0x10)
	struct FString SteamAppId; // 0x238(0x10)
	struct FString WeGameTestDlcId; // 0x248(0x10)
	struct FString WeGamePreDlcId; // 0x258(0x10)
	struct FString WeGameShippingDlcId; // 0x268(0x10)
	struct FString WeGameReleaseDlcId; // 0x278(0x10)
	struct FString SteamTestDlcId; // 0x288(0x10)
	struct FString SteamPreDlcId; // 0x298(0x10)
	struct FString SteamShippingDlcId; // 0x2A8(0x10)
	struct FString SteamReleaseDlcId; // 0x2B8(0x10)
	int32_t AuthType; // 0x2C8(0x4)
	uint8_t Pad_0x2CC[0x4]; // 0x2CC(0x4)
	struct FString GVoiceServerUrl; // 0x2D0(0x10)
	struct FString TSSGameId; // 0x2E0(0x10)
	struct FString QQAppId; // 0x2F0(0x10)
	struct FString WeixinAppId; // 0x300(0x10)
	struct FString CrashSightAndroidAppId; // 0x310(0x10)
	struct FString CrashSightAndroidAppId_Shipping; // 0x320(0x10)
	struct FString CrashSightOpenHarmonyAppId; // 0x330(0x10)
	struct FString CrashSightOpenHarmonyAppId_Shipping; // 0x340(0x10)
	struct FString CrashSightAndroidUrl; // 0x350(0x10)
	struct FString CrashSightOpenHarmonyUrl; // 0x360(0x10)
	struct FString CrashSightIosAppId; // 0x370(0x10)
	struct FString CrashSightIosAppId_Shipping; // 0x380(0x10)
	struct FString CrashSightXSXAppId; // 0x390(0x10)
	struct FString CrashSightXSXAppId_Shipping; // 0x3A0(0x10)
	struct FString CrashSightPS5AppId; // 0x3B0(0x10)
	struct FString CrashSightPS5AppId_Shipping; // 0x3C0(0x10)
	struct FString CrashSightWinAppKey; // 0x3D0(0x10)
	struct FString CrashSightWinAppKey_Shipping; // 0x3E0(0x10)
	struct FString CrashSightIosUrl; // 0x3F0(0x10)
	struct FString TDMSrcId; // 0x400(0x10)
	struct FString TDMServerChineseRouteAddress; // 0x410(0x10)
	struct FString TDMServerAbroadRouteAddress; // 0x420(0x10)
	struct FString TDMServerRouteAddressTest; // 0x430(0x10)
	struct FString ApmIOSConfigPath; // 0x440(0x10)
	struct FString MidasBusinessId; // 0x450(0x10)
	struct FString MidasOfferId; // 0x460(0x10)
	struct FString CentauriBusinessId; // 0x470(0x10)
	struct FString CentauriOfferId; // 0x480(0x10)
	struct FString DolphinBuildAccessName; // 0x490(0x10)
	struct FString DolphinBuildArea; // 0x4A0(0x10)
	int32_t DolphinConnectType; // 0x4B0(0x4)
	uint8_t Pad_0x4B4[0x4]; // 0x4B4(0x4)
	struct FAppSettingForUpdate UpdateInfo; // 0x4B8(0x68)
	struct FMapleSettingRow MapleInfo; // 0x520(0x70)
	struct FString CDNRoot; // 0x590(0x10)
	struct FLoginSettingRow LoginSetting; // 0x5A0(0x70)
	struct TSoftClassPtr<struct UUserWidget*> LoadingBackground; // 0x610(0x28)
	struct TSoftClassPtr<struct UUserWidget*> WindowsLoadingBackground; // 0x638(0x28)
	struct TSoftClassPtr<struct UUserWidget*> HealthTipView; // 0x660(0x28)
	struct TSoftClassPtr<struct UUserWidget*> LoadingView; // 0x688(0x28)
	struct TSoftClassPtr<struct UUserWidget*> ReconnectView; // 0x6B0(0x28)
	float HealthTipShowTime; // 0x6D8(0x4)
	uint8_t Pad_0x6DC[0x4]; // 0x6DC(0x4)
	struct FString AnnounceDefaultRegion; // 0x6E0(0x10)
	uint8_t bOverrideDefaultConfig : 1; // 0x6F0(0x1), Mask(0x1)
	uint8_t BitPad_0x6F0_1 : 7; // 0x6F0(0x1)
	uint8_t Pad_0x6F1[0x7]; // 0x6F1(0x7)
	struct TArray<struct FString> StartupMovies; // 0x6F8(0x10)
	struct FString ConfigFutureMovieStartTimes; // 0x708(0x10)
	struct FString ConfigFutureMovieEndTimes; // 0x718(0x10)
	struct TArray<struct FString> ConfigFutureMovieNames; // 0x728(0x10)
	uint8_t bOverrideDefaultConfig_HD : 1; // 0x738(0x1), Mask(0x1)
	uint8_t BitPad_0x738_1 : 7; // 0x738(0x1)
	uint8_t Pad_0x739[0x7]; // 0x739(0x7)
	struct TArray<struct FString> StartupMovies_HD; // 0x740(0x10)
	struct TArray<struct FString> ConsoleVariables; // 0x750(0x10)
	struct TArray<struct FString> ConsoleVariables_HD; // 0x760(0x10)
};

// Object: ScriptStruct GameCore.AppSettingForMapleChannel
// Size: 0x20 (Inherited: 0x0)
struct FAppSettingForMapleChannel
{
	EGameBuildConfiguration BuildType; // 0x0(0x1)
	uint8_t Pad_0x1[0x3]; // 0x1(0x3)
	int32_t AndroidTreeID; // 0x4(0x4)
	int32_t OpenHarmonyTreeID; // 0x8(0x4)
	int32_t IOSTreeID; // 0xC(0x4)
	int32_t PCTreeID; // 0x10(0x4)
	int32_t WinSETreeID; // 0x14(0x4)
	int32_t XSXTreeID; // 0x18(0x4)
	int32_t PS5TreeID; // 0x1C(0x4)
};

// Object: ScriptStruct GameCore.AppSettingForUpdateChannel
// Size: 0x80 (Inherited: 0x0)
struct FAppSettingForUpdateChannel
{
	uint8_t Pad_0x0[0x8]; // 0x0(0x8)
	EGameBuildConfiguration BuildType; // 0x8(0x1)
	uint8_t Pad_0x9[0x7]; // 0x9(0x7)
	struct FString AndroidProductId; // 0x10(0x10)
	struct FString OpenHarmonyProductId; // 0x20(0x10)
	struct FString IOSProductId; // 0x30(0x10)
	struct FString PCProductId; // 0x40(0x10)
	struct FString WinSEProductId; // 0x50(0x10)
	struct FString XSXProductId; // 0x60(0x10)
	struct FString PS5ProductId; // 0x70(0x10)
};

// Object: ScriptStruct GameCore.AsyncReqGroup
// Size: 0x48 (Inherited: 0x0)
struct FAsyncReqGroup
{
	uint8_t Pad_0x0[0x48]; // 0x0(0x48)
};

// Object: ScriptStruct GameCore.AsyncReqStruct
// Size: 0x38 (Inherited: 0x0)
struct FAsyncReqStruct
{
	uint64_t AsyncID; // 0x0(0x8)
	struct TArray<struct FSoftObjectPath> InPaths; // 0x8(0x10)
	uint8_t Pad_0x18[0x20]; // 0x18(0x20)
};

// Object: ScriptStruct GameCore.AssetRetargetInfoRow
// Size: 0x10 (Inherited: 0x8)
struct FAssetRetargetInfoRow : FTableRowBase
{
	struct FName RetargetPackageName; // 0x8(0x8)
};

// Object: ScriptStruct GameCore.PackageDescRow
// Size: 0x28 (Inherited: 0x10)
struct FPackageDescRow : FDescRowBase
{
	struct FName Catagory; // 0x10(0x8)
	EPrimaryAssetPakRule PakLevel; // 0x18(0x1)
	uint8_t Pad_0x19[0x3]; // 0x19(0x3)
	struct FName FallbackRowName; // 0x1C(0x8)
	uint8_t Pad_0x24[0x4]; // 0x24(0x4)
};

// Object: ScriptStruct GameCore.AssetDescRowBase
// Size: 0x30 (Inherited: 0x10)
struct FAssetDescRowBase : FDescRowBase
{
	struct FSoftObjectPath AssetPath; // 0x10(0x18)
	EPreloadType PreloadType; // 0x28(0x1)
	uint8_t Pad_0x29[0x7]; // 0x29(0x7)
};

// Object: ScriptStruct GameCore.PreloadAssetDescRowBase
// Size: 0x40 (Inherited: 0x30)
struct FPreloadAssetDescRowBase : FAssetDescRowBase
{
	struct AActor* Archetype; // 0x30(0x8)
	int32_t PreloadNum; // 0x38(0x4)
	uint8_t Pad_0x3C[0x4]; // 0x3C(0x4)
};

// Object: ScriptStruct GameCore.AssetStoreItemRow
// Size: 0x80 (Inherited: 0x8)
struct FAssetStoreItemRow : FTableRowBase
{
	struct FSoftObjectPath AssetPath; // 0x8(0x18)
	struct FSoftObjectPath SrcTablePath; // 0x20(0x18)
	struct FName Category; // 0x38(0x8)
	struct FName Tag; // 0x40(0x8)
	struct FSoftObjectPath MidAssetPath; // 0x48(0x18)
	struct FSoftObjectPath LowAssetPath; // 0x60(0x18)
	uint8_t BuildToMobile : 1; // 0x78(0x1), Mask(0x1)
	uint8_t BitPad_0x78_1 : 7; // 0x78(0x1)
	uint8_t Pad_0x79[0x7]; // 0x79(0x7)
};

// Object: ScriptStruct GameCore.GameTypeConfig
// Size: 0x18 (Inherited: 0x0)
struct FGameTypeConfig
{
	int32_t GameMapId; // 0x0(0x4)
	int32_t MainGameModeType; // 0x4(0x4)
	int32_t SubGameModeType; // 0x8(0x4)
	int32_t RoomType; // 0xC(0x4)
	int32_t TeamType; // 0x10(0x4)
	uint8_t bInited : 1; // 0x14(0x1), Mask(0x1)
	uint8_t BitPad_0x14_1 : 7; // 0x14(0x1)
	uint8_t Pad_0x15[0x3]; // 0x15(0x3)
};

// Object: ScriptStruct GameCore.CSV2Datatable
// Size: 0x48 (Inherited: 0x10)
struct FCSV2Datatable : FDescRowBase
{
	struct FSoftObjectPath DataTablePath; // 0x10(0x18)
	struct FName CSVName; // 0x28(0x8)
	struct TArray<struct FName> AssetInfoKeys; // 0x30(0x10)
	uint8_t Pad_0x40[0x8]; // 0x40(0x8)
};

// Object: ScriptStruct GameCore.DataTableAssetInfo
// Size: 0x178 (Inherited: 0x80)
struct FDataTableAssetInfo : FAssetPakerPakPolicyRow
{
	uint8_t SyncLoad : 1; // 0x80(0x1), Mask(0x1)
	uint8_t BitPad_0x80_1 : 7; // 0x80(0x1)
	uint8_t Pad_0x81[0x3]; // 0x81(0x3)
	int32_t UseScene; // 0x84(0x4)
	int32_t UseClientType; // 0x88(0x4)
	uint8_t HasSubTableInDir : 1; // 0x8C(0x1), Mask(0x1)
	uint8_t bCombineWithOtherTables : 1; // 0x8C(0x1), Mask(0x2)
	uint8_t BitPad_0x8C_2 : 6; // 0x8C(0x1)
	uint8_t Pad_0x8D[0x3]; // 0x8D(0x3)
	struct TArray<struct FSoftObjectPath> CombineWithThoseTables; // 0x90(0x10)
	uint8_t bReplaceDefaultPathWithUseScene : 1; // 0xA0(0x1), Mask(0x1)
	uint8_t BitPad_0xA0_1 : 7; // 0xA0(0x1)
	uint8_t Pad_0xA1[0x7]; // 0xA1(0x7)
	struct TMap<EDataTableReplaceScene, struct FSoftObjectPath> UseSceneToDataTables; // 0xA8(0x50)
	uint8_t bReplaceDefaultPathWithMatchModeId : 1; // 0xF8(0x1), Mask(0x1)
	uint8_t BitPad_0xF8_1 : 7; // 0xF8(0x1)
	uint8_t Pad_0xF9[0x7]; // 0xF9(0x7)
	struct TMap<struct FString, struct FSoftObjectPath> MatchModeIdToDataTables; // 0x100(0x50)
	uint8_t bCanMMapWithSubTable : 1; // 0x150(0x1), Mask(0x1)
	uint8_t bMaskToUseMMap : 1; // 0x150(0x1), Mask(0x2)
	uint8_t BitPad_0x150_2 : 6; // 0x150(0x1)
	uint8_t Pad_0x151[0x3]; // 0x151(0x3)
	struct FName CSVName; // 0x154(0x8)
	uint8_t bCleanWhenForceBatchLoad : 1; // 0x15C(0x1), Mask(0x1)
	uint8_t bEnableSQLite : 1; // 0x15C(0x1), Mask(0x2)
	uint8_t BitPad_0x15C_2 : 6; // 0x15C(0x1)
	uint8_t Pad_0x15D[0x1B]; // 0x15D(0x1B)
};

// Object: ScriptStruct GameCore.DataTableLiteContent
// Size: 0x218 (Inherited: 0x0)
struct FDataTableLiteContent
{
	uint8_t Pad_0x0[0x1D8]; // 0x0(0x1D8)
	struct TArray<struct UDataTable*> DataTables; // 0x1D8(0x10)
	uint8_t Pad_0x1E8[0x10]; // 0x1E8(0x10)
	struct UDataTable* CombineTable; // 0x1F8(0x8)
	uint8_t Pad_0x200[0x18]; // 0x200(0x18)
};

// Object: ScriptStruct GameCore.DirIconRow
// Size: 0x90 (Inherited: 0x30)
struct FDirIconRow : FAssetDescRowBase
{
	struct FName DirName; // 0x2C(0x8)
	struct FSoftObjectPath RegionTexturePath; // 0x38(0x18)
	struct FSoftObjectPath VersionTexturePath; // 0x50(0x18)
	float RegionScale; // 0x68(0x4)
	float VersionScale; // 0x6C(0x4)
	struct TArray<int32_t> RegionTexturePos; // 0x70(0x10)
	struct TArray<int32_t> VersionTexturePos; // 0x80(0x10)
};

// Object: ScriptStruct GameCore.DirTextRow
// Size: 0x70 (Inherited: 0x30)
struct FDirTextRow : FAssetDescRowBase
{
	struct FName DirName; // 0x2C(0x8)
	struct FName Text; // 0x34(0x8)
	struct TArray<int32_t> TextOffset; // 0x40(0x10)
	struct FName TextFont; // 0x50(0x8)
	int32_t FontSize; // 0x58(0x4)
	uint8_t Pad_0x5C[0x4]; // 0x5C(0x4)
	struct TArray<float> TColorAndOpacity; // 0x60(0x10)
};

// Object: ScriptStruct GameCore.FrameStackBgAssetRow
// Size: 0xC0 (Inherited: 0x10)
struct FFrameStackBgAssetRow : FDescRowBase
{
	struct FSoftObjectPath AssetPath; // 0x10(0x18)
	EBackgroundScaleType BackgroundScaleType; // 0x28(0x1)
	EBackgroundType BackgroundType; // 0x29(0x1)
	uint8_t Pad_0x2A[0x6]; // 0x2A(0x6)
	struct FSoftObjectPath DisplayAssetPath; // 0x30(0x18)
	struct FName MediaName; // 0x48(0x8)
	struct FString CDNUrl; // 0x50(0x10)
	uint8_t bMatchSize : 1; // 0x60(0x1), Mask(0x1)
	uint8_t BitPad_0x60_1 : 7; // 0x60(0x1)
	uint8_t Pad_0x61[0x7]; // 0x61(0x7)
	struct FString Tag; // 0x68(0x10)
	uint8_t IsMaskVisible : 1; // 0x78(0x1), Mask(0x1)
	uint8_t BitPad_0x78_1 : 7; // 0x78(0x1)
	uint8_t IsBlurVisible : 1; // 0x79(0x1), Mask(0x1)
	uint8_t BitPad_0x79_1 : 7; // 0x79(0x1)
	uint8_t Pad_0x7A[0x2]; // 0x7A(0x2)
	float BlurStrength; // 0x7C(0x4)
	uint8_t IsCustomPadding : 1; // 0x80(0x1), Mask(0x1)
	uint8_t BitPad_0x80_1 : 7; // 0x80(0x1)
	uint8_t Pad_0x81[0xF]; // 0x81(0xF)
	struct FVector4 CustomPadding; // 0x90(0x10)
	uint8_t IsAutoAudio : 1; // 0xA0(0x1), Mask(0x1)
	uint8_t BitPad_0xA0_1 : 7; // 0xA0(0x1)
	uint8_t Pad_0xA1[0x3]; // 0xA1(0x3)
	struct FName AudioEventName; // 0xA4(0x8)
	uint8_t IsForceRenderingWorld : 1; // 0xAC(0x1), Mask(0x1)
	uint8_t BitPad_0xAC_1 : 7; // 0xAC(0x1)
	uint8_t Pad_0xAD[0x3]; // 0xAD(0x3)
	struct FName CustomUIName; // 0xB0(0x8)
	uint8_t Pad_0xB8[0x8]; // 0xB8(0x8)
};

// Object: ScriptStruct GameCore.FrameStackTransitionRow
// Size: 0x38 (Inherited: 0x10)
struct FFrameStackTransitionRow : FDescRowBase
{
	struct FSoftObjectPath AssetPath; // 0x10(0x18)
	uint8_t IsForceTransition : 1; // 0x28(0x1), Mask(0x1)
	uint8_t BitPad_0x28_1 : 7; // 0x28(0x1)
	uint8_t Pad_0x29[0x3]; // 0x29(0x3)
	float MinTime; // 0x2C(0x4)
	float AniSpeedScale; // 0x30(0x4)
	uint8_t Pad_0x34[0x4]; // 0x34(0x4)
};

// Object: ScriptStruct GameCore.EnvVariables
// Size: 0x2 (Inherited: 0x0)
struct FEnvVariables
{
	uint8_t bAIDev : 1; // 0x0(0x1), Mask(0x1)
	uint8_t BitPad_0x0_1 : 7; // 0x0(0x1)
	uint8_t bAIPerf : 1; // 0x1(0x1), Mask(0x1)
	uint8_t BitPad_0x1_1 : 7; // 0x1(0x1)
};

// Object: ScriptStruct GameCore.LuaAssetRow
// Size: 0xC0 (Inherited: 0x80)
struct FLuaAssetRow : FAssetPakerPakPolicyRow
{
	struct FName AssetCatagory; // 0x80(0x8)
	struct FName BPPath; // 0x88(0x8)
	struct FName FullPath; // 0x90(0x8)
	struct FName BPClassName; // 0x98(0x8)
	struct FSoftObjectPath AssetPath; // 0xA0(0x18)
	int32_t LuaBPConfigSplit; // 0xB8(0x4)
	uint8_t AreaFilter; // 0xBC(0x1)
	uint8_t Pad_0xBD[0x3]; // 0xBD(0x3)
};

// Object: ScriptStruct GameCore.LuaAssetRowPCSplit
// Size: 0xB0 (Inherited: 0x80)
struct FLuaAssetRowPCSplit : FAssetPakerPakPolicyRow
{
	struct FName BPPath; // 0x80(0x8)
	struct FName FullPath; // 0x88(0x8)
	struct FName BPClassName; // 0x90(0x8)
	struct FSoftObjectPath AssetPathPcSplit; // 0x98(0x18)
};

// Object: ScriptStruct GameCore.OneStringRow
// Size: 0x10 (Inherited: 0x8)
struct FOneStringRow : FTableRowBase
{
	struct FName StringRow; // 0x8(0x8)
};

// Object: ScriptStruct GameCore.SceneTODRow
// Size: 0x40 (Inherited: 0x10)
struct FSceneTODRow : FDescRowBase
{
	struct FString SceneName; // 0x10(0x10)
	struct TArray<int64_t> WeatherIDs; // 0x20(0x10)
	struct TArray<int64_t> WeatherIDsHD; // 0x30(0x10)
};

// Object: ScriptStruct GameCore.TODSubLevelSequenceRow
// Size: 0xF0 (Inherited: 0x10)
struct FTODSubLevelSequenceRow : FDescRowBase
{
	int64_t WeatherID; // 0x10(0x8)
	uint8_t bLerpTOD : 1; // 0x18(0x1), Mask(0x1)
	uint8_t BitPad_0x18_1 : 7; // 0x18(0x1)
	uint8_t Pad_0x19[0x7]; // 0x19(0x7)
	int64_t AudioId; // 0x20(0x8)
	struct TArray<struct FString> SequenceCombinationArr; // 0x28(0x10)
	struct TArray<struct FString> SequenceCombinationArr_PC; // 0x38(0x10)
	struct TArray<struct FString> EnableVolumeKeyArr; // 0x48(0x10)
	struct TArray<struct FString> EnableVolumeKeyArr_PC; // 0x58(0x10)
	float StartTime; // 0x68(0x4)
	uint8_t Pad_0x6C[0x4]; // 0x6C(0x4)
	struct TMap<struct FName, float> WetParaMap; // 0x70(0x50)
	float WetParaLerpTime; // 0xC0(0x4)
	struct FName AmbientLightGroup; // 0xC4(0x8)
	struct FName AmbientLightGroupHD; // 0xCC(0x8)
	struct FName AmbientLightMPCGroup; // 0xD4(0x8)
	struct FName AmbientLightMPCGroupHD; // 0xDC(0x8)
	float OutSideHdrAdjustment; // 0xE4(0x4)
	float InsideHdrAdjustment; // 0xE8(0x4)
	uint8_t Pad_0xEC[0x4]; // 0xEC(0x4)
};

// Object: Class GameCore.AnimNotify_PlayParticleEffectGroup
// Size: 0x90 (Inherited: 0x38)
struct UAnimNotify_PlayParticleEffectGroup : UAnimNotify
{
	DEFINE_UE_CLASS_HELPERS(UAnimNotify_PlayParticleEffectGroup, "AnimNotify_PlayParticleEffectGroup")

	struct UParticleSystemGroup* PSGTemplate; // 0x38(0x8)
	struct FVector LocationOffset; // 0x40(0xC)
	struct FRotator RotationOffset; // 0x4C(0xC)
	struct FVector Scale; // 0x58(0xC)
	uint8_t Pad_0x64[0x1C]; // 0x64(0x1C)
	uint8_t Attached : 1; // 0x80(0x1), Mask(0x1)
	uint8_t BitPad_0x80_1 : 7; // 0x80(0x1)
	uint8_t Pad_0x81[0x3]; // 0x81(0x3)
	struct FName SocketName; // 0x84(0x8)
	uint8_t Pad_0x8C[0x4]; // 0x8C(0x4)
};

// Object: Class GameCore.AppSetting
// Size: 0x7A8 (Inherited: 0x28)
struct UAppSetting : UObject
{
	DEFINE_UE_CLASS_HELPERS(UAppSetting, "AppSetting")

	struct FString Name; // 0x28(0x10)
	struct FAppSettingRow Setting; // 0x38(0x770)

	// Object: Function GameCore.AppSetting.ResetGameBuildPlatformName
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x75bbfa8
	// Params: [ Num(0) Size(0x0) ]
	static void ResetGameBuildPlatformName();

	// Object: Function GameCore.AppSetting.IsInUseR13NFile
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults]
	// Offset: 0x75bbee4
	// Params: [ Num(2) Size(0x19) ]
	static uint8_t IsInUseR13NFile(const struct FSoftObjectPath& Path);

	// Object: Function GameCore.AppSetting.GetGameBuildRegionName
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x75bbe60
	// Params: [ Num(1) Size(0x10) ]
	static struct FString GetGameBuildRegionName();

	// Object: Function GameCore.AppSetting.GetGameBuildRegionFolderName
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x75bbddc
	// Params: [ Num(1) Size(0x10) ]
	static struct FString GetGameBuildRegionFolderName();

	// Object: Function GameCore.AppSetting.GetGameBuildRegion
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x75bbda8
	// Params: [ Num(1) Size(0x1) ]
	static EGameBuildRegion GetGameBuildRegion();

	// Object: Function GameCore.AppSetting.GetGameBuildPlatformName
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x75bbd10
	// Params: [ Num(1) Size(0x10) ]
	static struct FString GetGameBuildPlatformName();

	// Object: Function GameCore.AppSetting.GetCDNUrl
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x75bbc78
	// Params: [ Num(1) Size(0x10) ]
	static struct FString GetCDNUrl();

	// Object: Function GameCore.AppSetting.GetBuildRegionFolders
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x75bbc40
	// Params: [ Num(1) Size(0x10) ]
	static struct TArray<struct FString> GetBuildRegionFolders();

	// Object: Function GameCore.AppSetting.GetBuildRegionFileFolders
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x75bbc08
	// Params: [ Num(1) Size(0x10) ]
	static struct TArray<struct FString> GetBuildRegionFileFolders();

	// Object: Function GameCore.AppSetting.Get
	// Flags: [Final|Native|Static|Public]
	// Offset: 0xf4beaf0
	// Params: [ Num(1) Size(0x770) ]
	static struct FAppSettingRow Get();
};

// Object: Class GameCore.AppSettingsExtend
// Size: 0x78 (Inherited: 0x28)
struct UAppSettingsExtend : UObject
{
	DEFINE_UE_CLASS_HELPERS(UAppSettingsExtend, "AppSettingsExtend")

	struct TMap<struct FString, struct FAppSettingRow> Settings; // 0x28(0x50)
};

// Object: Class GameCore.AssetBaseManager
// Size: 0x208 (Inherited: 0x28)
struct UAssetBaseManager : UObject
{
	DEFINE_UE_CLASS_HELPERS(UAssetBaseManager, "AssetBaseManager")

	uint8_t Pad_0x28[0x18]; // 0x28(0x18)
	struct UAssetBaseManagerSetting* CachedSettings; // 0x40(0x8)
	uint8_t Pad_0x48[0x1C0]; // 0x48(0x1C0)
};

// Object: Class GameCore.AssetBaseManagerSetting
// Size: 0x50 (Inherited: 0x28)
struct UAssetBaseManagerSetting : UObject
{
	DEFINE_UE_CLASS_HELPERS(UAssetBaseManagerSetting, "AssetBaseManagerSetting")

	struct TSoftObjectPtr<UDataTable> AssetRetargetTablePath; // 0x28(0x28)
};

// Object: Class GameCore.AssetStore
// Size: 0x28 (Inherited: 0x28)
struct UAssetStore : UObject
{
	DEFINE_UE_CLASS_HELPERS(UAssetStore, "AssetStore")
};

// Object: Class GameCore.BaseGameInstance
// Size: 0x1D0 (Inherited: 0x1A0)
struct UBaseGameInstance : UGameInstance
{
	DEFINE_UE_CLASS_HELPERS(UBaseGameInstance, "BaseGameInstance")

	uint8_t Pad_0x1A0[0x30]; // 0x1A0(0x30)
};

// Object: Class GameCore.DataTableAssetInfoManager
// Size: 0x30 (Inherited: 0x28)
struct UDataTableAssetInfoManager : UObject
{
	DEFINE_UE_CLASS_HELPERS(UDataTableAssetInfoManager, "DataTableAssetInfoManager")

	struct UDataTable* DataTableCache; // 0x28(0x8)
};

// Object: Class GameCore.DataTableSystemManagerBase
// Size: 0x30 (Inherited: 0x28)
struct UDataTableSystemManagerBase : UObject
{
	DEFINE_UE_CLASS_HELPERS(UDataTableSystemManagerBase, "DataTableSystemManagerBase")

	uint8_t Pad_0x28[0x8]; // 0x28(0x8)

	// Object: Function GameCore.DataTableSystemManagerBase.Shutdown
	// Flags: [Native|Public]
	// Offset: 0x75bff68
	// Params: [ Num(0) Size(0x0) ]
	void Shutdown();

	// Object: Function GameCore.DataTableSystemManagerBase.Reset
	// Flags: [Native|Public]
	// Offset: 0x75bff4c
	// Params: [ Num(0) Size(0x0) ]
	void Reset();

	// Object: Function GameCore.DataTableSystemManagerBase.OnShutdown
	// Flags: [Native|Protected]
	// Offset: 0x75bff30
	// Params: [ Num(0) Size(0x0) ]
	void OnShutdown();

	// Object: Function GameCore.DataTableSystemManagerBase.OnReset
	// Flags: [Native|Protected]
	// Offset: 0x75bff14
	// Params: [ Num(0) Size(0x0) ]
	void OnReset();

	// Object: Function GameCore.DataTableSystemManagerBase.OnInit
	// Flags: [Native|Protected]
	// Offset: 0x75bfef8
	// Params: [ Num(0) Size(0x0) ]
	void OnInit();

	// Object: Function GameCore.DataTableSystemManagerBase.IsLoaded
	// Flags: [Native|Public]
	// Offset: 0x75bfeb8
	// Params: [ Num(1) Size(0x1) ]
	uint8_t IsLoaded();

	// Object: Function GameCore.DataTableSystemManagerBase.Init
	// Flags: [Native|Public]
	// Offset: 0x75bfe9c
	// Params: [ Num(0) Size(0x0) ]
	void Init();

	// Object: Function GameCore.DataTableSystemManagerBase.HotUpdateRows
	// Flags: [Final|Native|Private]
	// Offset: 0x75bfdf8
	// Params: [ Num(1) Size(0x8) ]
	void HotUpdateRows(struct UDataTable* TargetDataTable);

	// Object: Function GameCore.DataTableSystemManagerBase.HotRemoveRows
	// Flags: [Final|Native|Private]
	// Offset: 0x75bfd54
	// Params: [ Num(1) Size(0x8) ]
	void HotRemoveRows(struct UDataTable* TargetDataTable);

	// Object: Function GameCore.DataTableSystemManagerBase.HotAddRows
	// Flags: [Final|Native|Private]
	// Offset: 0x75bfcb0
	// Params: [ Num(1) Size(0x8) ]
	void HotAddRows(struct UDataTable* TargetDataTable);

	// Object: Function GameCore.DataTableSystemManagerBase.GetRowStruct
	// Flags: [Native|Public]
	// Offset: 0x75bfc74
	// Params: [ Num(1) Size(0x8) ]
	struct UScriptStruct* GetRowStruct();

	// Object: Function GameCore.DataTableSystemManagerBase.GetRowNames
	// Flags: [Final|Native|Public]
	// Offset: 0x75bfbf0
	// Params: [ Num(1) Size(0x10) ]
	struct TArray<struct FName> GetRowNames();

	// Object: Function GameCore.DataTableSystemManagerBase.GetDataTableFirst
	// Flags: [Native|Public]
	// Offset: 0x75bfbb4
	// Params: [ Num(1) Size(0x8) ]
	struct UDataTable* GetDataTableFirst();

	// Object: Function GameCore.DataTableSystemManagerBase.GetDataTable
	// Flags: [Final|Native|Public]
	// Offset: 0x75bfb80
	// Params: [ Num(1) Size(0x8) ]
	struct UDataTable* GetDataTable();
};

// Object: Class GameCore.CSV2DatatableManager
// Size: 0x40 (Inherited: 0x30)
struct UCSV2DatatableManager : UDataTableSystemManagerBase
{
	DEFINE_UE_CLASS_HELPERS(UCSV2DatatableManager, "CSV2DatatableManager")

	uint8_t Pad_0x30[0x10]; // 0x30(0x10)
};

// Object: Class GameCore.GPSubsystemBase
// Size: 0x30 (Inherited: 0x30)
struct UGPSubsystemBase : UGameInstanceSubsystem
{
	DEFINE_UE_CLASS_HELPERS(UGPSubsystemBase, "GPSubsystemBase")
};

// Object: Class GameCore.DataTableSystemImpl
// Size: 0xA0 (Inherited: 0x30)
struct UDataTableSystemImpl : UGPSubsystemBase
{
	DEFINE_UE_CLASS_HELPERS(UDataTableSystemImpl, "DataTableSystemImpl")

	uint8_t Pad_0x30[0x8]; // 0x30(0x8)
	struct TArray<struct UDataTableSystemManagerBase*> DataManagerList; // 0x38(0x10)
	struct TMap<struct UObject*, struct UDataTableSystemManagerBase*> DataManagerMap; // 0x48(0x50)
	uint8_t Pad_0x98[0x8]; // 0x98(0x8)

	// Object: Function GameCore.DataTableSystemImpl.RegisterDataTableManager
	// Flags: [Final|Native|Protected]
	// Offset: 0x75bf880
	// Params: [ Num(0) Size(0x0) ]
	void RegisterDataTableManager();

	// Object: Function GameCore.DataTableSystemImpl.OnRegisterDataTableManager
	// Flags: [Final|Native|Protected]
	// Offset: 0x75bf86c
	// Params: [ Num(0) Size(0x0) ]
	void OnRegisterDataTableManager();

	// Object: Function GameCore.DataTableSystemImpl.OnPostRegisterDataTableManager
	// Flags: [Final|Native|Protected]
	// Offset: 0x75bf858
	// Params: [ Num(0) Size(0x0) ]
	void OnPostRegisterDataTableManager();

	// Object: Function GameCore.DataTableSystemImpl.OnLiteDataTableReset
	// Flags: [Final|Native|Protected|HasOutParms]
	// Offset: 0xefaee38
	// Params: [ Num(1) Size(0x8) ]
	void OnLiteDataTableReset(const struct FName& TableName);

	// Object: Function GameCore.DataTableSystemImpl.OnLiteDataTableReload
	// Flags: [Final|Native|Protected|HasOutParms]
	// Offset: 0x75bf7a4
	// Params: [ Num(1) Size(0x8) ]
	void OnLiteDataTableReload(const struct FName& TableName);

	// Object: Function GameCore.DataTableSystemImpl.OnLiteDataTableReady
	// Flags: [Final|Native|Protected|HasOutParms]
	// Offset: 0xeea240c
	// Params: [ Num(2) Size(0xC) ]
	void OnLiteDataTableReady(const struct FName& TableName, float Progress);

	// Object: Function GameCore.DataTableSystemImpl.OnLiteDataTablePreLoadFinishPreHandle
	// Flags: [Final|Native|Protected|HasOutParms]
	// Offset: 0xfb96b24
	// Params: [ Num(2) Size(0xC) ]
	void OnLiteDataTablePreLoadFinishPreHandle(const struct FDataTableUseSceneValue& UseSceneValue, int32_t LoadedNum);

	// Object: Function GameCore.DataTableSystemImpl.OnAllLiteDataTableReset
	// Flags: [Final|Native|Protected|HasOutParms]
	// Offset: 0x75bf6f0
	// Params: [ Num(1) Size(0x8) ]
	void OnAllLiteDataTableReset(const struct FName& TableName);

	// Object: Function GameCore.DataTableSystemImpl.IsUseLiteTableManager
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x107ea5b8
	// Params: [ Num(1) Size(0x1) ]
	static uint8_t IsUseLiteTableManager();

	// Object: Function GameCore.DataTableSystemImpl.GetManagerLiteInterfaceBP
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x75bf68c
	// Params: [ Num(1) Size(0x10) ]
	struct TScriptInterface<IDataTableSystemManagerLiteInterface> GetManagerLiteInterfaceBP();

	// Object: Function GameCore.DataTableSystemImpl.Get
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x75bf5e8
	// Params: [ Num(2) Size(0x10) ]
	static struct UDataTableSystemImpl* Get(struct UObject* WorldContext);

	// Object: Function GameCore.DataTableSystemImpl.AsyncPreloadTableManager
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x75bf5d4
	// Params: [ Num(0) Size(0x0) ]
	void AsyncPreloadTableManager();
};

// Object: Class GameCore.DataTableSystemImplDS
// Size: 0x30 (Inherited: 0x30)
struct UDataTableSystemImplDS : UEngineSubsystem
{
	DEFINE_UE_CLASS_HELPERS(UDataTableSystemImplDS, "DataTableSystemImplDS")
};

// Object: Class GameCore.DataTableSystemInterface
// Size: 0x28 (Inherited: 0x28)
struct IDataTableSystemInterface : IInterface
{
	DEFINE_UE_CLASS_HELPERS(IDataTableSystemInterface, "DataTableSystemInterface")
};

// Object: Class GameCore.DataTableSystemManagerLite
// Size: 0x278 (Inherited: 0x30)
struct UDataTableSystemManagerLite : UGPSubsystemBase
{
	DEFINE_UE_CLASS_HELPERS(UDataTableSystemManagerLite, "DataTableSystemManagerLite")

	uint8_t Pad_0x30[0x28]; // 0x30(0x28)
	struct UDataTableAssetInfoManager* DataTableAssetInfo; // 0x58(0x8)
	struct FMulticastInlineDelegate OnPreloadFinishPreHandleDelegate; // 0x60(0x10)
	struct FMulticastInlineDelegate OnPreloadFinishDelegate; // 0x70(0x10)
	struct FMulticastInlineDelegate OnTableReadyDelegate; // 0x80(0x10)
	struct FMulticastInlineDelegate OnTableResetDelegate; // 0x90(0x10)
	struct FMulticastInlineDelegate OnTableReloadDelegate; // 0xA0(0x10)
	uint8_t Pad_0xB0[0x10]; // 0xB0(0x10)
	struct FMulticastInlineDelegate OnInitResourcesCallBack; // 0xC0(0x10)
	struct FMulticastInlineDelegate OnBeginLoadDataTableCallBack; // 0xD0(0x10)
	uint8_t Pad_0xE0[0x10]; // 0xE0(0x10)
	struct TMap<struct FString, struct UDataTable*> DataTableReferenceMap; // 0xF0(0x50)
	uint8_t Pad_0x140[0x138]; // 0x140(0x138)

	// Object: Function GameCore.DataTableSystemManagerLite.UpdateMatchId
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x75c0aec
	// Params: [ Num(1) Size(0x10) ]
	void UpdateMatchId(struct FString InMatchModeID);

	// Object: Function GameCore.DataTableSystemManagerLite.UnloadTable
	// Flags: [Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x75c0a30
	// Params: [ Num(1) Size(0x8) ]
	void UnloadTable(const struct FName& TableName);

	// Object: Function GameCore.DataTableSystemManagerLite.SyncPreloadAll
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x75c0a14
	// Params: [ Num(0) Size(0x0) ]
	void SyncPreloadAll();

	// Object: Function GameCore.DataTableSystemManagerLite.SetHotfixMD5
	// Flags: [Final|Native|Public|HasOutParms]
	// Offset: 0x75c091c
	// Params: [ Num(2) Size(0x18) ]
	void SetHotfixMD5(const struct FName& TableName, struct FString MD5);

	// Object: Function GameCore.DataTableSystemManagerLite.ResetTable
	// Flags: [Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x75c0860
	// Params: [ Num(1) Size(0x8) ]
	void ResetTable(const struct FName& TableName);

	// Object: Function GameCore.DataTableSystemManagerLite.PreloadTable
	// Flags: [Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x75c074c
	// Params: [ Num(3) Size(0x19) ]
	uint8_t PreloadTable(const struct FName& TableName, struct FDelegate Delegate);

	// Object: Function GameCore.DataTableSystemManagerLite.OnDataTableLoad
	// Flags: [Final|Native|Protected|HasOutParms|HasDefaults]
	// Offset: 0x75c05c8
	// Params: [ Num(4) Size(0x30) ]
	void OnDataTableLoad(const struct FSoftObjectPath& DataTablePath, struct FName TableName, uint8_t bAsync, uint64_t InBatachID);

	// Object: Function GameCore.DataTableSystemManagerLite.OnAsyncDataTableLoad
	// Flags: [Final|Native|Protected|HasOutParms|HasDefaults]
	// Offset: 0x75c0444
	// Params: [ Num(4) Size(0x30) ]
	void OnAsyncDataTableLoad(const struct FSoftObjectPath& DataTablePath, struct FName TableName, uint8_t bAsync, uint64_t InBatachID);

	// Object: Function GameCore.DataTableSystemManagerLite.IsPreloadFinish
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x108094cc
	// Params: [ Num(1) Size(0x1) ]
	uint8_t IsPreloadFinish();

	// Object: Function GameCore.DataTableSystemManagerLite.GetTableAssetGuid
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x75c036c
	// Params: [ Num(2) Size(0x18) ]
	static struct FString GetTableAssetGuid(struct UDataTable* Table);

	// Object: Function GameCore.DataTableSystemManagerLite.GetLiteInterface
	// Flags: [Final|Native|Public]
	// Offset: 0x75c032c
	// Params: [ Num(1) Size(0x10) ]
	struct TScriptInterface<IDataTableSystemManagerLiteInterface> GetLiteInterface();

	// Object: Function GameCore.DataTableSystemManagerLite.GetKeyNameFromCSVName
	// Flags: [Final|Native|Public|HasOutParms]
	// Offset: 0x75c0270
	// Params: [ Num(2) Size(0x10) ]
	struct FName GetKeyNameFromCSVName(const struct FName& CSVName);

	// Object: Function GameCore.DataTableSystemManagerLite.GetHotfixMD5
	// Flags: [Final|Native|Public|HasOutParms]
	// Offset: 0x75c0180
	// Params: [ Num(2) Size(0x18) ]
	struct FString GetHotfixMD5(const struct FName& TableName);

	// Object: Function GameCore.DataTableSystemManagerLite.GetDataTable
	// Flags: [Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0xf03fe3c
	// Params: [ Num(2) Size(0x10) ]
	struct UDataTable* GetDataTable(const struct FName& TableName);

	// Object: Function GameCore.DataTableSystemManagerLite.Get
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0xf9bb7c4
	// Params: [ Num(2) Size(0x10) ]
	static struct UDataTableSystemManagerLite* Get(struct UObject* WorldContextObject);

	// Object: Function GameCore.DataTableSystemManagerLite.ForceReloadDataTable
	// Flags: [Final|Native|Public|HasOutParms]
	// Offset: 0x75c00cc
	// Params: [ Num(1) Size(0x8) ]
	void ForceReloadDataTable(const struct FName& TableName);

	// Object: Function GameCore.DataTableSystemManagerLite.AsyncPreloadAll
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x75c00b0
	// Params: [ Num(0) Size(0x0) ]
	void AsyncPreloadAll();
};

// Object: Class GameCore.DataTableSystemManagerLiteInterface
// Size: 0x28 (Inherited: 0x28)
struct IDataTableSystemManagerLiteInterface : IInterface
{
	DEFINE_UE_CLASS_HELPERS(IDataTableSystemManagerLiteInterface, "DataTableSystemManagerLiteInterface")

	// Object: Function GameCore.DataTableSystemManagerLiteInterface.UnloadTable
	// Flags: [Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x75c0d50
	// Params: [ Num(1) Size(0x8) ]
	void UnloadTable(const struct FName& TableName);

	// Object: Function GameCore.DataTableSystemManagerLiteInterface.ResetTable
	// Flags: [Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x75c0c94
	// Params: [ Num(1) Size(0x8) ]
	void ResetTable(const struct FName& TableName);

	// Object: Function GameCore.DataTableSystemManagerLiteInterface.GetDataTable
	// Flags: [Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x75c0bd0
	// Params: [ Num(2) Size(0x10) ]
	struct UDataTable* GetDataTable(const struct FName& TableName);
};

// Object: Class GameCore.DataTableSystemPlayerImpl
// Size: 0xD8 (Inherited: 0x30)
struct UDataTableSystemPlayerImpl : UGameInstanceSubsystem
{
	DEFINE_UE_CLASS_HELPERS(UDataTableSystemPlayerImpl, "DataTableSystemPlayerImpl")

	uint8_t Pad_0x30[0x58]; // 0x30(0x58)
	struct TMap<struct FString, struct UDataTable*> TableNameAndHash2DataTable; // 0x88(0x50)
};

// Object: Class GameCore.DeviceSetting
// Size: 0x28 (Inherited: 0x28)
struct UDeviceSetting : UObject
{
	DEFINE_UE_CLASS_HELPERS(UDeviceSetting, "DeviceSetting")

	// Object: Function GameCore.DeviceSetting.SetDisturbingMode
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x75c11bc
	// Params: [ Num(2) Size(0x2) ]
	static uint8_t SetDisturbingMode(uint8_t bNoDisturbing);

	// Object: Function GameCore.DeviceSetting.IsRunningInSimulator
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x75c110c
	// Params: [ Num(2) Size(0x2) ]
	static uint8_t IsRunningInSimulator(uint8_t bNewCheck);

	// Object: Function GameCore.DeviceSetting.GetUsedPhysicalMemory
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x75c10d8
	// Params: [ Num(1) Size(0x8) ]
	static uint64_t GetUsedPhysicalMemory();

	// Object: Function GameCore.DeviceSetting.GetTotalPhysicalMemory
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x75c10a4
	// Params: [ Num(1) Size(0x8) ]
	static uint64_t GetTotalPhysicalMemory();

	// Object: Function GameCore.DeviceSetting.GetMemoryUsedFastMB
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x75c1070
	// Params: [ Num(1) Size(0x4) ]
	static float GetMemoryUsedFastMB();

	// Object: Function GameCore.DeviceSetting.GetMemoryUsedFast
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x75c103c
	// Params: [ Num(1) Size(0x8) ]
	static uint64_t GetMemoryUsedFast();

	// Object: Function GameCore.DeviceSetting.GetDisturbingMode
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x75c1004
	// Params: [ Num(1) Size(0x1) ]
	static uint8_t GetDisturbingMode();

	// Object: Function GameCore.DeviceSetting.GetDeviceModel
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x108064a4
	// Params: [ Num(1) Size(0x10) ]
	static struct FString GetDeviceModel();

	// Object: Function GameCore.DeviceSetting.GetDeviceLevel
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x75c0fd0
	// Params: [ Num(1) Size(0x1) ]
	static EDeviceLevel GetDeviceLevel();

	// Object: Function GameCore.DeviceSetting.ChangeBGMSoundEffectVolume
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x75c0f3c
	// Params: [ Num(1) Size(0x4) ]
	static void ChangeBGMSoundEffectVolume(int32_t Volume);
};

// Object: Class GameCore.EditorVersionUtils
// Size: 0x28 (Inherited: 0x28)
struct UEditorVersionUtils : UBlueprintFunctionLibrary
{
	DEFINE_UE_CLASS_HELPERS(UEditorVersionUtils, "EditorVersionUtils")
};

// Object: Class GameCore.GameResVersion
// Size: 0x60 (Inherited: 0x28)
struct UGameResVersion : UObject
{
	DEFINE_UE_CLASS_HELPERS(UGameResVersion, "GameResVersion")

	struct FString GameResVersionStr; // 0x28(0x10)
	struct FString GameResNewVersionStr; // 0x38(0x10)
	int32_t GameResVersionUpdateStartCount; // 0x48(0x4)
	int32_t GameResVersionUpdateSucCount; // 0x4C(0x4)
	struct FString PSOVersionStr; // 0x50(0x10)

	// Object: Function GameCore.GameResVersion.UpdatePSOVersion
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x75c35f0
	// Params: [ Num(0) Size(0x0) ]
	static void UpdatePSOVersion();

	// Object: Function GameCore.GameResVersion.SetResVersion
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x75c3508
	// Params: [ Num(1) Size(0x10) ]
	static void SetResVersion(struct FString Version);

	// Object: Function GameCore.GameResVersion.SetResNewVersion
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x75c3420
	// Params: [ Num(1) Size(0x10) ]
	static void SetResNewVersion(struct FString Version);

	// Object: Function GameCore.GameResVersion.SetGameResVersionUpdateSucCount
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x75c338c
	// Params: [ Num(1) Size(0x4) ]
	static void SetGameResVersionUpdateSucCount(int32_t Count);

	// Object: Function GameCore.GameResVersion.SetGameResVersionUpdateStartCount
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x75c32f8
	// Params: [ Num(1) Size(0x4) ]
	static void SetGameResVersionUpdateStartCount(int32_t Count);

	// Object: Function GameCore.GameResVersion.PSOVersionNeedUpdate
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x75c32c0
	// Params: [ Num(1) Size(0x1) ]
	static uint8_t PSOVersionNeedUpdate();

	// Object: Function GameCore.GameResVersion.GetResVersion
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x75c31e0
	// Params: [ Num(2) Size(0x18) ]
	static struct FString GetResVersion(uint8_t bNeedReloadConfig);

	// Object: Function GameCore.GameResVersion.GetResNewVersion
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x75c3148
	// Params: [ Num(1) Size(0x10) ]
	static struct FString GetResNewVersion();

	// Object: Function GameCore.GameResVersion.GetGameResVersionUpdateSucCount
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x75c3114
	// Params: [ Num(1) Size(0x4) ]
	static int32_t GetGameResVersionUpdateSucCount();

	// Object: Function GameCore.GameResVersion.GetGameResVersionUpdateStartCount
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x75c30e0
	// Params: [ Num(1) Size(0x4) ]
	static int32_t GetGameResVersionUpdateStartCount();
};

// Object: Class GameCore.GameVersionUtils
// Size: 0x138 (Inherited: 0x28)
struct UGameVersionUtils : UObject
{
	DEFINE_UE_CLASS_HELPERS(UGameVersionUtils, "GameVersionUtils")

	struct FString GameVersionStr; // 0x28(0x10)
	struct FString WeGameVersionStr; // 0x38(0x10)
	struct FString GameAppVersionStr; // 0x48(0x10)
	struct FString GameResVersionStr; // 0x58(0x10)
	EResourceMSVersion GameResourceMSVersionStr; // 0x68(0x1)
	uint8_t Pad_0x69[0x3]; // 0x69(0x3)
	int32_t SVNRevision; // 0x6C(0x4)
	struct FString CIPipeline; // 0x70(0x10)
	struct FString CIBuildNum; // 0x80(0x10)
	struct FString CIBuildTime; // 0x90(0x10)
	struct FString CIBranchName; // 0xA0(0x10)
	struct FString CIPlatform; // 0xB0(0x10)
	struct FString SyncFullTime; // 0xC0(0x10)
	EGameBuildConfiguration GameBuildConfiguration; // 0xD0(0x1)
	EGameBuildRegion GameBuildRegion; // 0xD1(0x1)
	uint8_t bUseTemporaryRegionFirst : 1; // 0xD2(0x1), Mask(0x1)
	uint8_t BitPad_0xD2_1 : 7; // 0xD2(0x1)
	uint8_t Pad_0xD3[0x5]; // 0xD3(0x5)
	struct TArray<struct FString> LatestGameCommits; // 0xD8(0x10)
	struct TArray<struct FString> LatestEngineCommits; // 0xE8(0x10)
	struct TArray<struct FString> OpenWorldBuildVersions; // 0xF8(0x10)
	uint8_t bOpenMicrocosm : 1; // 0x108(0x1), Mask(0x1)
	uint8_t BitPad_0x108_1 : 7; // 0x108(0x1)
	uint8_t bDisableShaderCompile : 1; // 0x109(0x1), Mask(0x1)
	uint8_t BitPad_0x109_1 : 7; // 0x109(0x1)
	uint8_t bDisableLog : 1; // 0x10A(0x1), Mask(0x1)
	uint8_t BitPad_0x10A_1 : 7; // 0x10A(0x1)
	uint8_t bDownloadBaseDlcOnly : 1; // 0x10B(0x1), Mask(0x1)
	uint8_t BitPad_0x10B_1 : 7; // 0x10B(0x1)
	uint8_t bSupportLitePackage : 1; // 0x10C(0x1), Mask(0x1)
	uint8_t BitPad_0x10C_1 : 7; // 0x10C(0x1)
	uint8_t Pad_0x10D[0x3]; // 0x10D(0x3)
	struct FString LanguageInAPK; // 0x110(0x10)
	struct TArray<struct FString> ClearFilePaths; // 0x120(0x10)
	uint8_t Pad_0x130[0x8]; // 0x130(0x8)

	// Object: Function GameCore.GameVersionUtils.VersionCompare
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x75c4810
	// Params: [ Num(3) Size(0x21) ]
	static EGameVersionCompareResult VersionCompare(struct FString OriginVersion, struct FString TargetVersion);

	// Object: Function GameCore.GameVersionUtils.UpdateStringTableVersion
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x10825e30
	// Params: [ Num(0) Size(0x0) ]
	static void UpdateStringTableVersion();

	// Object: Function GameCore.GameVersionUtils.SetResVersion
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x75c4728
	// Params: [ Num(1) Size(0x10) ]
	static void SetResVersion(struct FString Version);

	// Object: Function GameCore.GameVersionUtils.SetResNewVersion
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x75c4640
	// Params: [ Num(1) Size(0x10) ]
	static void SetResNewVersion(struct FString Version);

	// Object: Function GameCore.GameVersionUtils.SetOpenMicrocosm
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x75c45a4
	// Params: [ Num(1) Size(0x1) ]
	static void SetOpenMicrocosm(uint8_t IsOpen);

	// Object: Function GameCore.GameVersionUtils.SetLauncherQueryInfo
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x75c44bc
	// Params: [ Num(1) Size(0x10) ]
	static void SetLauncherQueryInfo(struct FString QueryInfo);

	// Object: Function GameCore.GameVersionUtils.SetGameResVersionUpdateSucCount
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x75c4428
	// Params: [ Num(1) Size(0x4) ]
	static void SetGameResVersionUpdateSucCount(int32_t Count);

	// Object: Function GameCore.GameVersionUtils.SetGameResVersionUpdateStartCount
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x75c4394
	// Params: [ Num(1) Size(0x4) ]
	static void SetGameResVersionUpdateStartCount(int32_t Count);

	// Object: Function GameCore.GameVersionUtils.SetDisableShaderCompile
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x75c42f8
	// Params: [ Num(1) Size(0x1) ]
	static void SetDisableShaderCompile(uint8_t IsDisable);

	// Object: Function GameCore.GameVersionUtils.SetDisableLog
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x75c425c
	// Params: [ Num(1) Size(0x1) ]
	static void SetDisableLog(uint8_t IsDisable);

	// Object: Function GameCore.GameVersionUtils.ResetResVersion
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x75c4248
	// Params: [ Num(0) Size(0x0) ]
	static void ResetResVersion();

	// Object: Function GameCore.GameVersionUtils.RemoveLauncherParamsByKey
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x75c4160
	// Params: [ Num(1) Size(0x10) ]
	static void RemoveLauncherParamsByKey(struct FString Key);

	// Object: Function GameCore.GameVersionUtils.IsVersionUsable
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x10b0b310
	// Params: [ Num(1) Size(0x1) ]
	static uint8_t IsVersionUsable();

	// Object: Function GameCore.GameVersionUtils.IsUseTemporaryRegionFirst
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x75c4128
	// Params: [ Num(1) Size(0x1) ]
	static uint8_t IsUseTemporaryRegionFirst();

	// Object: Function GameCore.GameVersionUtils.IsTestOrShippingTest
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x75c40f0
	// Params: [ Num(1) Size(0x1) ]
	static uint8_t IsTestOrShippingTest();

	// Object: Function GameCore.GameVersionUtils.IsSupportLitePackage
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x75c40b8
	// Params: [ Num(1) Size(0x1) ]
	static uint8_t IsSupportLitePackage();

	// Object: Function GameCore.GameVersionUtils.IsShipping
	// Flags: [Final|Native|Static|Public]
	// Offset: 0xf5c1678
	// Params: [ Num(1) Size(0x1) ]
	static uint8_t IsShipping();

	// Object: Function GameCore.GameVersionUtils.IsResVersionLegal
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x75c3f34
	// Params: [ Num(3) Size(0x21) ]
	static uint8_t IsResVersionLegal(struct FString AppVersion, struct FString ResVersion);

	// Object: Function GameCore.GameVersionUtils.IsPreRelease
	// Flags: [Final|Native|Static|Public]
	// Offset: 0xfc6d5dc
	// Params: [ Num(1) Size(0x1) ]
	static uint8_t IsPreRelease();

	// Object: Function GameCore.GameVersionUtils.IsOpenMicrocosm
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x10ac1e08
	// Params: [ Num(1) Size(0x1) ]
	static uint8_t IsOpenMicrocosm();

	// Object: Function GameCore.GameVersionUtils.IsInReview
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x1070a188
	// Params: [ Num(1) Size(0x1) ]
	static uint8_t IsInReview();

	// Object: Function GameCore.GameVersionUtils.IsDownloadBaseDlcOnly
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x75c3efc
	// Params: [ Num(1) Size(0x1) ]
	static uint8_t IsDownloadBaseDlcOnly();

	// Object: Function GameCore.GameVersionUtils.IsDisableShaderCompile
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x10ac1bd0
	// Params: [ Num(1) Size(0x1) ]
	static uint8_t IsDisableShaderCompile();

	// Object: Function GameCore.GameVersionUtils.IsDisableLog
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x10ac1998
	// Params: [ Num(1) Size(0x1) ]
	static uint8_t IsDisableLog();

	// Object: Function GameCore.GameVersionUtils.IsAndroidAppBundle
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x75c3ec4
	// Params: [ Num(1) Size(0x1) ]
	static uint8_t IsAndroidAppBundle();

	// Object: Function GameCore.GameVersionUtils.GetWeGameVersion
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x10abfab4
	// Params: [ Num(1) Size(0x10) ]
	static struct FString GetWeGameVersion();

	// Object: Function GameCore.GameVersionUtils.GetVersionNums
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x75c3e2c
	// Params: [ Num(1) Size(0x10) ]
	static struct TArray<int32_t> GetVersionNums();

	// Object: Function GameCore.GameVersionUtils.GetVersion
	// Flags: [Final|Native|Static|Public]
	// Offset: 0xeedbe98
	// Params: [ Num(1) Size(0x10) ]
	static struct FString GetVersion();

	// Object: Function GameCore.GameVersionUtils.GetUEBuildTargetType
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x109167d0
	// Params: [ Num(1) Size(0x10) ]
	static struct FString GetUEBuildTargetType();

	// Object: Function GameCore.GameVersionUtils.GetUEBuildConfiguration
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x10916658
	// Params: [ Num(1) Size(0x10) ]
	static struct FString GetUEBuildConfiguration();

	// Object: Function GameCore.GameVersionUtils.GetSyncFullTime
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x75c3d94
	// Params: [ Num(1) Size(0x10) ]
	static struct FString GetSyncFullTime();

	// Object: Function GameCore.GameVersionUtils.GetSVNRevision
	// Flags: [Final|Native|Static|Public]
	// Offset: 0xfc6dae4
	// Params: [ Num(1) Size(0x4) ]
	static int32_t GetSVNRevision();

	// Object: Function GameCore.GameVersionUtils.GetResVersion
	// Flags: [Final|Native|Static|Public]
	// Offset: 0xf4c3ea4
	// Params: [ Num(1) Size(0x10) ]
	static struct FString GetResVersion();

	// Object: Function GameCore.GameVersionUtils.GetResourceMSVersion
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x75c3d60
	// Params: [ Num(1) Size(0x1) ]
	static EResourceMSVersion GetResourceMSVersion();

	// Object: Function GameCore.GameVersionUtils.GetResNewVersion
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x75c3cc8
	// Params: [ Num(1) Size(0x10) ]
	static struct FString GetResNewVersion();

	// Object: Function GameCore.GameVersionUtils.GetOpenWorldBuildVersions
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x75c3c58
	// Params: [ Num(1) Size(0x10) ]
	static struct TArray<struct FString> GetOpenWorldBuildVersions();

	// Object: Function GameCore.GameVersionUtils.GetLauncherParamsByKey
	// Flags: [Final|Native|Static|Public]
	// Offset: 0xf07dc00
	// Params: [ Num(2) Size(0x20) ]
	static struct FString GetLauncherParamsByKey(struct FString Key);

	// Object: Function GameCore.GameVersionUtils.GetLauncherChannel
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x10a59874
	// Params: [ Num(1) Size(0x4) ]
	static int32_t GetLauncherChannel();

	// Object: Function GameCore.GameVersionUtils.GetLatestGameCommits
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x75c3be8
	// Params: [ Num(1) Size(0x10) ]
	static struct TArray<struct FString> GetLatestGameCommits();

	// Object: Function GameCore.GameVersionUtils.GetLatestEngineCommits
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x75c3b78
	// Params: [ Num(1) Size(0x10) ]
	static struct TArray<struct FString> GetLatestEngineCommits();

	// Object: Function GameCore.GameVersionUtils.GetLanguageInAPK
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x75c3ae0
	// Params: [ Num(1) Size(0x10) ]
	static struct FString GetLanguageInAPK();

	// Object: Function GameCore.GameVersionUtils.GetGameResVersionUpdateSucCount
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x75c3aac
	// Params: [ Num(1) Size(0x4) ]
	static int32_t GetGameResVersionUpdateSucCount();

	// Object: Function GameCore.GameVersionUtils.GetGameResVersionUpdateStartCount
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x75c3a78
	// Params: [ Num(1) Size(0x4) ]
	static int32_t GetGameResVersionUpdateStartCount();

	// Object: Function GameCore.GameVersionUtils.GetGameChannel
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x10a9246c
	// Params: [ Num(1) Size(0x1) ]
	static EGameChannel GetGameChannel();

	// Object: Function GameCore.GameVersionUtils.GetGameBuildRegion
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x109e2f4c
	// Params: [ Num(1) Size(0x1) ]
	static EGameBuildRegion GetGameBuildRegion();

	// Object: Function GameCore.GameVersionUtils.GetGameBuildInfoStr
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x75c39e0
	// Params: [ Num(1) Size(0x10) ]
	static struct FString GetGameBuildInfoStr();

	// Object: Function GameCore.GameVersionUtils.GetGameBuildConfiguration
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x109e2dec
	// Params: [ Num(1) Size(0x1) ]
	static EGameBuildConfiguration GetGameBuildConfiguration();

	// Object: Function GameCore.GameVersionUtils.GetEditorVersion
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x75c3948
	// Params: [ Num(1) Size(0x10) ]
	static struct FString GetEditorVersion();

	// Object: Function GameCore.GameVersionUtils.GetEditorBranchID
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x75c38b0
	// Params: [ Num(1) Size(0x10) ]
	static struct FString GetEditorBranchID();

	// Object: Function GameCore.GameVersionUtils.GetConfigVersion
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x75c37fc
	// Params: [ Num(2) Size(0x20) ]
	static struct FString GetConfigVersion(struct FString ConfigKey);

	// Object: Function GameCore.GameVersionUtils.GetClearFilePaths
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x75c378c
	// Params: [ Num(1) Size(0x10) ]
	static struct TArray<struct FString> GetClearFilePaths();

	// Object: Function GameCore.GameVersionUtils.GetCIPlatform
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x75c36f4
	// Params: [ Num(1) Size(0x10) ]
	static struct FString GetCIPlatform();

	// Object: Function GameCore.GameVersionUtils.GetCIPipeline
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x10a2367c
	// Params: [ Num(1) Size(0x10) ]
	static struct FString GetCIPipeline();

	// Object: Function GameCore.GameVersionUtils.GetCIBuildTime
	// Flags: [Final|Native|Static|Public]
	// Offset: 0xfc6fb1c
	// Params: [ Num(1) Size(0x10) ]
	static struct FString GetCIBuildTime();

	// Object: Function GameCore.GameVersionUtils.GetCIBuildNum
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x10a23454
	// Params: [ Num(1) Size(0x10) ]
	static struct FString GetCIBuildNum();

	// Object: Function GameCore.GameVersionUtils.GetCIBranchName
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x75c365c
	// Params: [ Num(1) Size(0x10) ]
	static struct FString GetCIBranchName();

	// Object: Function GameCore.GameVersionUtils.GetAppVersion
	// Flags: [Final|Native|Static|Public]
	// Offset: 0xf4c3530
	// Params: [ Num(1) Size(0x10) ]
	static struct FString GetAppVersion();

	// Object: Function GameCore.GameVersionUtils.GetAppProductVersion
	// Flags: [Final|Native|Static|Public]
	// Offset: 0xf4c46c8
	// Params: [ Num(1) Size(0x10) ]
	static struct FString GetAppProductVersion();

	// Object: Function GameCore.GameVersionUtils.CheckAppVersionChange
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x75c3624
	// Params: [ Num(1) Size(0x1) ]
	static uint8_t CheckAppVersionChange();
};

// Object: Class GameCore.GameVersionBlueprintTools
// Size: 0x28 (Inherited: 0x28)
struct UGameVersionBlueprintTools : UBlueprintFunctionLibrary
{
	DEFINE_UE_CLASS_HELPERS(UGameVersionBlueprintTools, "GameVersionBlueprintTools")

	// Object: Function GameCore.GameVersionBlueprintTools.IsShipping
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x75c4cbc
	// Params: [ Num(1) Size(0x1) ]
	static uint8_t IsShipping();

	// Object: Function GameCore.GameVersionBlueprintTools.GetWeGameVersion
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x75c4c24
	// Params: [ Num(1) Size(0x10) ]
	static struct FString GetWeGameVersion();

	// Object: Function GameCore.GameVersionBlueprintTools.GetOpenWorldRuntimeBuildVersion
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x75c4b44
	// Params: [ Num(2) Size(0x20) ]
	static struct FString GetOpenWorldRuntimeBuildVersion(struct FString InWorldName);

	// Object: Function GameCore.GameVersionBlueprintTools.GetGameVersion
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x75c4aac
	// Params: [ Num(1) Size(0x10) ]
	struct FString GetGameVersion();
};

// Object: Class GameCore.WorldSingletonCollection
// Size: 0x80 (Inherited: 0x30)
struct UWorldSingletonCollection : UWorldSubsystem
{
	DEFINE_UE_CLASS_HELPERS(UWorldSingletonCollection, "WorldSingletonCollection")

	struct TMap<struct UObject*, struct UObject*> InstMap; // 0x30(0x50)
};

// Object: Class GameCore.GameInstanceSingletonCollection
// Size: 0x80 (Inherited: 0x30)
struct UGameInstanceSingletonCollection : UGameInstanceSubsystem
{
	DEFINE_UE_CLASS_HELPERS(UGameInstanceSingletonCollection, "GameInstanceSingletonCollection")

	struct TMap<struct UObject*, struct UObject*> InstMap; // 0x30(0x50)
};

// Object: Class GameCore.EngineSingletonCollection
// Size: 0x80 (Inherited: 0x30)
struct UEngineSingletonCollection : UEngineSubsystem
{
	DEFINE_UE_CLASS_HELPERS(UEngineSingletonCollection, "EngineSingletonCollection")

	struct TMap<struct UObject*, struct UObject*> InstMap; // 0x30(0x50)
};

// Object: Class GameCore.WorldSingletonHelper
// Size: 0x30 (Inherited: 0x28)
struct UWorldSingletonHelper : UObject
{
	DEFINE_UE_CLASS_HELPERS(UWorldSingletonHelper, "WorldSingletonHelper")

	uint8_t Pad_0x28[0x8]; // 0x28(0x8)
};

// Object: Class GameCore.GameInstanceSingletonHelper
// Size: 0x30 (Inherited: 0x28)
struct UGameInstanceSingletonHelper : UObject
{
	DEFINE_UE_CLASS_HELPERS(UGameInstanceSingletonHelper, "GameInstanceSingletonHelper")

	uint8_t Pad_0x28[0x8]; // 0x28(0x8)
};

// Object: Class GameCore.EngineSingletonHelper
// Size: 0x30 (Inherited: 0x28)
struct UEngineSingletonHelper : UObject
{
	DEFINE_UE_CLASS_HELPERS(UEngineSingletonHelper, "EngineSingletonHelper")

	uint8_t Pad_0x28[0x8]; // 0x28(0x8)
};

// Object: Class GameCore.GPAIUtils
// Size: 0x28 (Inherited: 0x28)
struct UGPAIUtils : UBlueprintFunctionLibrary
{
	DEFINE_UE_CLASS_HELPERS(UGPAIUtils, "GPAIUtils")

	// Object: Function GameCore.GPAIUtils.SetTickPrerequisite
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x75c4e04
	// Params: [ Num(2) Size(0x10) ]
	static void SetTickPrerequisite(struct UActorComponent* A, struct UActorComponent* B);
};

// Object: Class GameCore.GPBlueprintUtils
// Size: 0x28 (Inherited: 0x28)
struct UGPBlueprintUtils : UBlueprintFunctionLibrary
{
	DEFINE_UE_CLASS_HELPERS(UGPBlueprintUtils, "GPBlueprintUtils")

	// Object: Function GameCore.GPBlueprintUtils.TrySetFolderPathInEditor
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x75c61f0
	// Params: [ Num(2) Size(0x10) ]
	static void TrySetFolderPathInEditor(struct AActor* Actor, struct FName FolderName);

	// Object: Function GameCore.GPBlueprintUtils.TrySetActorLabelInEditor
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x75c6118
	// Params: [ Num(2) Size(0x18) ]
	static void TrySetActorLabelInEditor(struct AActor* Actor, struct FString Label);

	// Object: Function GameCore.GPBlueprintUtils.ShowMessageDialog
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x75c5f58
	// Params: [ Num(3) Size(0x31) ]
	static uint8_t ShowMessageDialog(const struct FText& Message, const struct FText& Title);

	// Object: Function GameCore.GPBlueprintUtils.RerunConstructionScripts
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x75c5ec4
	// Params: [ Num(1) Size(0x8) ]
	static void RerunConstructionScripts(struct AActor* Actor);

	// Object: Function GameCore.GPBlueprintUtils.RegularConvertSpecialString
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x75c5e04
	// Params: [ Num(2) Size(0x11) ]
	static uint8_t RegularConvertSpecialString(struct FString& str);

	// Object: Function GameCore.GPBlueprintUtils.RebaseOntoZeroOrigin_Z
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x75c5d24
	// Params: [ Num(3) Size(0x14) ]
	static float RebaseOntoZeroOrigin_Z(float Z, struct UObject* WorldContextObject);

	// Object: Function GameCore.GPBlueprintUtils.RebaseOntoLocalOrigin_Z
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x75c5c44
	// Params: [ Num(3) Size(0x14) ]
	static float RebaseOntoLocalOrigin_Z(float Z, struct UObject* WorldContextObject);

	// Object: Function GameCore.GPBlueprintUtils.ReadTermText
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x75c5aa8
	// Params: [ Num(4) Size(0x39) ]
	static uint8_t ReadTermText(struct FString InTermName, struct FString InKey, struct FText& OutText);

	// Object: Function GameCore.GPBlueprintUtils.ReadPropertyText
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x75c58e0
	// Params: [ Num(4) Size(0x30) ]
	static struct FText ReadPropertyText(struct FName& TableName, struct FName& PropertyName, struct FName& KeyName);

	// Object: Function GameCore.GPBlueprintUtils.GetCurrentGameInstance
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x75c583c
	// Params: [ Num(2) Size(0x10) ]
	static struct UGameInstance* GetCurrentGameInstance(struct UObject* WorldContextObject);

	// Object: Function GameCore.GPBlueprintUtils.FindFirstActorByClassAndTag
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x75c5724
	// Params: [ Num(4) Size(0x20) ]
	static struct AActor* FindFirstActorByClassAndTag(struct UObject* WorldContextObject, struct AActor* ActorClass, struct FName Tag);

	// Object: Function GameCore.GPBlueprintUtils.FindFirstActorByClass
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x75c5648
	// Params: [ Num(3) Size(0x18) ]
	static struct AActor* FindFirstActorByClass(struct UObject* WorldContextObject, struct AActor* ActorClass);

	// Object: Function GameCore.GPBlueprintUtils.FindAllActorsByClassAndTag
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x75c54ec
	// Params: [ Num(4) Size(0x28) ]
	static void FindAllActorsByClassAndTag(struct UObject* WorldContextObject, struct AActor* ActorClass, struct FName Tag, struct TArray<struct AActor*>& OutActors);

	// Object: Function GameCore.GPBlueprintUtils.FindAllActorsByClass
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x75c53c8
	// Params: [ Num(3) Size(0x20) ]
	static void FindAllActorsByClass(struct UObject* WorldContextObject, struct AActor* ActorClass, struct TArray<struct AActor*>& OutActors);

	// Object: Function GameCore.GPBlueprintUtils.CovertSpecialString
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x75c5308
	// Params: [ Num(2) Size(0x11) ]
	static uint8_t CovertSpecialString(struct FString& str);

	// Object: Function GameCore.GPBlueprintUtils.ConvertTermText
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0xefc75c0
	// Params: [ Num(3) Size(0x31) ]
	static uint8_t ConvertTermText(const struct FText& InText, struct FText& OutText);

	// Object: Function GameCore.GPBlueprintUtils.CalcBoundingFromViewport
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure]
	// Offset: 0x75c50f0
	// Params: [ Num(7) Size(0x59) ]
	static uint8_t CalcBoundingFromViewport(struct UObject* WorldContextObject, struct FVector Origin, struct FVector Extend, struct FBox2D& BoxOut, struct TArray<struct FVector>& Points, struct TArray<struct FVector2D>& Points2D);

	// Object: Function GameCore.GPBlueprintUtils.CalcBoundingFromViewInfo
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure]
	// Offset: 0x75c4ed8
	// Params: [ Num(7) Size(0x59) ]
	static uint8_t CalcBoundingFromViewInfo(struct USceneCaptureComponent2D* RenderComponent, struct FVector Origin, struct FVector Extend, struct FBox2D& BoxOut, struct TArray<struct FVector>& Points, struct TArray<struct FVector2D>& Points2D);
};

// Object: Class GameCore.GPGConfigUtils
// Size: 0x28 (Inherited: 0x28)
struct UGPGConfigUtils : UBlueprintFunctionLibrary
{
	DEFINE_UE_CLASS_HELPERS(UGPGConfigUtils, "GPGConfigUtils")

	// Object: Function GameCore.GPGConfigUtils.SetVector4
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable]
	// Offset: 0x75c8ac8
	// Params: [ Num(4) Size(0x40) ]
	static void SetVector4(struct FString Section, struct FString Key, const struct FVector4& Value, struct FString IniName);

	// Object: Function GameCore.GPGConfigUtils.SetVector2D
	// Flags: [Final|Native|Static|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x75c896c
	// Params: [ Num(4) Size(0x38) ]
	static void SetVector2D(struct FString Section, struct FString Key, struct FVector2D Value, struct FString IniName);

	// Object: Function GameCore.GPGConfigUtils.SetVector
	// Flags: [Final|Native|Static|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x75c880c
	// Params: [ Num(4) Size(0x40) ]
	static void SetVector(struct FString Section, struct FString Key, struct FVector Value, struct FString IniName);

	// Object: Function GameCore.GPGConfigUtils.SetString
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x75c8658
	// Params: [ Num(4) Size(0x40) ]
	static void SetString(struct FString Section, struct FString Key, struct FString InValue, struct FString IniName);

	// Object: Function GameCore.GPGConfigUtils.SetSingleLineArray
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x75c84d8
	// Params: [ Num(4) Size(0x40) ]
	static void SetSingleLineArray(struct FString Section, struct FString Key, const struct TArray<struct FString>& In_Arr, struct FString IniName);

	// Object: Function GameCore.GPGConfigUtils.SetRotator
	// Flags: [Final|Native|Static|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x75c8378
	// Params: [ Num(4) Size(0x40) ]
	static void SetRotator(struct FString Section, struct FString Key, struct FRotator Value, struct FString IniName);

	// Object: Function GameCore.GPGConfigUtils.SetInt
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x10170d08
	// Params: [ Num(4) Size(0x38) ]
	static void SetInt(struct FString Section, struct FString Key, int32_t Value, struct FString IniName);

	// Object: Function GameCore.GPGConfigUtils.SetFloat
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x75c8218
	// Params: [ Num(4) Size(0x38) ]
	static void SetFloat(struct FString Section, struct FString Key, float Value, struct FString IniName);

	// Object: Function GameCore.GPGConfigUtils.SetColor
	// Flags: [Final|Native|Static|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x75c80bc
	// Params: [ Num(4) Size(0x38) ]
	static void SetColor(struct FString Section, struct FString Key, struct FColor Value, struct FString IniName);

	// Object: Function GameCore.GPGConfigUtils.SetBool
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x1017d02c
	// Params: [ Num(4) Size(0x38) ]
	static void SetBool(struct FString Section, struct FString Key, uint8_t Value, struct FString IniName);

	// Object: Function GameCore.GPGConfigUtils.SetArray
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x75c7f3c
	// Params: [ Num(4) Size(0x40) ]
	static void SetArray(struct FString Section, struct FString Key, const struct TArray<struct FString>& Value, struct FString IniName);

	// Object: Function GameCore.GPGConfigUtils.GetVector4
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable]
	// Offset: 0x75c7db0
	// Params: [ Num(5) Size(0x41) ]
	static uint8_t GetVector4(struct FString Section, struct FString Key, struct FVector4& Value, struct FString IniName);

	// Object: Function GameCore.GPGConfigUtils.GetVector2D
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable]
	// Offset: 0x75c7c30
	// Params: [ Num(5) Size(0x39) ]
	static uint8_t GetVector2D(struct FString Section, struct FString Key, struct FVector2D& Value, struct FString IniName);

	// Object: Function GameCore.GPGConfigUtils.GetVector
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable]
	// Offset: 0x75c7ab0
	// Params: [ Num(5) Size(0x41) ]
	static uint8_t GetVector(struct FString Section, struct FString Key, struct FVector& Value, struct FString IniName);

	// Object: Function GameCore.GPGConfigUtils.GetString
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x75c7924
	// Params: [ Num(5) Size(0x41) ]
	static uint8_t GetString(struct FString Section, struct FString Key, struct FString& OutResult, struct FString IniName);

	// Object: Function GameCore.GPGConfigUtils.GetSingleLineArray
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x75c779c
	// Params: [ Num(5) Size(0x44) ]
	static int32_t GetSingleLineArray(struct FString Section, struct FString Key, struct TArray<struct FString>& out_Arr, struct FString IniName);

	// Object: Function GameCore.GPGConfigUtils.GetRotator
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable]
	// Offset: 0x75c761c
	// Params: [ Num(5) Size(0x41) ]
	static uint8_t GetRotator(struct FString Section, struct FString Key, struct FRotator& Value, struct FString IniName);

	// Object: Function GameCore.GPGConfigUtils.GetInt
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x10902598
	// Params: [ Num(5) Size(0x39) ]
	static uint8_t GetInt(struct FString Section, struct FString Key, int32_t& Value, struct FString IniName);

	// Object: Function GameCore.GPGConfigUtils.GetFloat
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x75c7498
	// Params: [ Num(5) Size(0x39) ]
	static uint8_t GetFloat(struct FString Section, struct FString Key, float& Value, struct FString IniName);

	// Object: Function GameCore.GPGConfigUtils.GetColor
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable]
	// Offset: 0x75c7318
	// Params: [ Num(5) Size(0x39) ]
	static uint8_t GetColor(struct FString Section, struct FString Key, struct FColor& Value, struct FString IniName);

	// Object: Function GameCore.GPGConfigUtils.GetBool
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x75c7194
	// Params: [ Num(5) Size(0x39) ]
	static uint8_t GetBool(struct FString Section, struct FString Key, uint8_t& Value, struct FString IniName);

	// Object: Function GameCore.GPGConfigUtils.GetArray
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x75c700c
	// Params: [ Num(5) Size(0x44) ]
	static int32_t GetArray(struct FString Section, struct FString Key, struct TArray<struct FString>& out_Arr, struct FString IniName);
};

// Object: Class GameCore.GPNetModeUtils
// Size: 0x28 (Inherited: 0x28)
struct UGPNetModeUtils : UBlueprintFunctionLibrary
{
	DEFINE_UE_CLASS_HELPERS(UGPNetModeUtils, "GPNetModeUtils")

	// Object: Function GameCore.GPNetModeUtils.IsStandalone
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x75c8e64
	// Params: [ Num(2) Size(0x9) ]
	static uint8_t IsStandalone(struct UObject* WorldContextObject);

	// Object: Function GameCore.GPNetModeUtils.IsServer
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x10a8b9b0
	// Params: [ Num(3) Size(0xA) ]
	static uint8_t IsServer(struct UObject* WorldContextObject, uint8_t bIncludeStandalone);

	// Object: Function GameCore.GPNetModeUtils.IsClient
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x75c8d78
	// Params: [ Num(3) Size(0xA) ]
	static uint8_t IsClient(struct UObject* WorldContextObject, uint8_t bIncludeStandalone);

	// Object: Function GameCore.GPNetModeUtils.HasLocalPlayer
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0xf66a0a0
	// Params: [ Num(2) Size(0x9) ]
	static uint8_t HasLocalPlayer(struct UObject* WorldContextObject);

	// Object: Function GameCore.GPNetModeUtils.GetLocalPlayerController
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x75c8cd4
	// Params: [ Num(2) Size(0x10) ]
	static struct APlayerController* GetLocalPlayerController(struct UObject* WorldContextObject);
};

// Object: Class GameCore.WorldSubsystemExample
// Size: 0x30 (Inherited: 0x30)
struct UWorldSubsystemExample : UWorldSubsystem
{
	DEFINE_UE_CLASS_HELPERS(UWorldSubsystemExample, "WorldSubsystemExample")
};

// Object: Class GameCore.GameInstanceSubsystemExample
// Size: 0x30 (Inherited: 0x30)
struct UGameInstanceSubsystemExample : UGameInstanceSubsystem
{
	DEFINE_UE_CLASS_HELPERS(UGameInstanceSubsystemExample, "GameInstanceSubsystemExample")
};

// Object: Class GameCore.LevelSubsystem
// Size: 0x370 (Inherited: 0x370)
struct ALevelSubsystem : AActor
{
	DEFINE_UE_CLASS_HELPERS(ALevelSubsystem, "LevelSubsystem")
};

// Object: Class GameCore.LevelSubsystemExample
// Size: 0x370 (Inherited: 0x370)
struct ALevelSubsystemExample : ALevelSubsystem
{
	DEFINE_UE_CLASS_HELPERS(ALevelSubsystemExample, "LevelSubsystemExample")

	// Object: Function GameCore.LevelSubsystemExample.TestLevelSubsystem
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x75c9018
	// Params: [ Num(0) Size(0x0) ]
	void TestLevelSubsystem();

	// Object: Function GameCore.LevelSubsystemExample.GetLevelSubsystemExample
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x75c8f74
	// Params: [ Num(2) Size(0x10) ]
	static struct ALevelSubsystemExample* GetLevelSubsystemExample(struct UObject* WorldContextObject);
};

// Object: Class GameCore.NormalActorSingletonExample
// Size: 0x380 (Inherited: 0x370)
struct ANormalActorSingletonExample : AActor
{
	DEFINE_UE_CLASS_HELPERS(ANormalActorSingletonExample, "NormalActorSingletonExample")

	uint8_t Pad_0x370[0x10]; // 0x370(0x10)
};

// Object: Class GameCore.NormalWorldObjectSingletonExample
// Size: 0x38 (Inherited: 0x28)
struct UNormalWorldObjectSingletonExample : UObject
{
	DEFINE_UE_CLASS_HELPERS(UNormalWorldObjectSingletonExample, "NormalWorldObjectSingletonExample")

	uint8_t Pad_0x28[0x10]; // 0x28(0x10)
};

// Object: Class GameCore.NormalGameInstanceObjectSingletonExample
// Size: 0x28 (Inherited: 0x28)
struct UNormalGameInstanceObjectSingletonExample : UObject
{
	DEFINE_UE_CLASS_HELPERS(UNormalGameInstanceObjectSingletonExample, "NormalGameInstanceObjectSingletonExample")
};

// Object: Class GameCore.GPSingletonUtils
// Size: 0x28 (Inherited: 0x28)
struct UGPSingletonUtils : UBlueprintFunctionLibrary
{
	DEFINE_UE_CLASS_HELPERS(UGPSingletonUtils, "GPSingletonUtils")

	// Object: Function GameCore.GPSingletonUtils.GetWorldSubsystem
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x75c96b4
	// Params: [ Num(3) Size(0x18) ]
	static struct UWorldSubsystem* GetWorldSubsystem(struct UObject* WorldContextObject, struct UObject* Class);

	// Object: Function GameCore.GPSingletonUtils.GetWorldSingleton
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x75c95d8
	// Params: [ Num(3) Size(0x18) ]
	static struct UObject* GetWorldSingleton(struct UObject* WorldContextObject, struct UObject* Class);

	// Object: Function GameCore.GPSingletonUtils.GetLevelSubsystem
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x75c94fc
	// Params: [ Num(3) Size(0x18) ]
	static struct ALevelSubsystem* GetLevelSubsystem(struct UObject* WorldContextObject, struct UObject* Class);

	// Object: Function GameCore.GPSingletonUtils.GetGameInstanceSubsystem
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0xf5b6720
	// Params: [ Num(3) Size(0x18) ]
	static struct UGameInstanceSubsystem* GetGameInstanceSubsystem(struct UObject* GameContextObject, struct UObject* Class);

	// Object: Function GameCore.GPSingletonUtils.GetGameInstanceSingleton
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x75c9420
	// Params: [ Num(3) Size(0x18) ]
	static struct UObject* GetGameInstanceSingleton(struct UObject* WorldContextObject, struct UObject* Class);

	// Object: Function GameCore.GPSingletonUtils.GetEngineSubsystem
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x75c937c
	// Params: [ Num(2) Size(0x10) ]
	static struct UEngineSubsystem* GetEngineSubsystem(struct UObject* Class);

	// Object: Function GameCore.GPSingletonUtils.GetEngineSingleton
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x75c92d8
	// Params: [ Num(2) Size(0x10) ]
	static struct UObject* GetEngineSingleton(struct UObject* Class);

	// Object: Function GameCore.GPSingletonUtils.GetDefaultSingleton
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x75c91b8
	// Params: [ Num(4) Size(0x20) ]
	static struct UObject* GetDefaultSingleton(struct UObject* WorldContextObject, struct UObject* Class, uint8_t bForceCreate);
};

// Object: Class GameCore.GPSubsystemManagerImpl
// Size: 0x50 (Inherited: 0x30)
struct UGPSubsystemManagerImpl : UGameInstanceSubsystem
{
	DEFINE_UE_CLASS_HELPERS(UGPSubsystemManagerImpl, "GPSubsystemManagerImpl")

	uint8_t Pad_0x30[0x20]; // 0x30(0x20)
};

// Object: Class GameCore.GPSubsystemManagerInterface
// Size: 0x28 (Inherited: 0x28)
struct IGPSubsystemManagerInterface : IInterface
{
	DEFINE_UE_CLASS_HELPERS(IGPSubsystemManagerInterface, "GPSubsystemManagerInterface")
};

// Object: Class GameCore.GPWorldSettingsBase
// Size: 0x588 (Inherited: 0x580)
struct AGPWorldSettingsBase : AWorldSettings
{
	DEFINE_UE_CLASS_HELPERS(AGPWorldSettingsBase, "GPWorldSettingsBase")

	struct ULevelSubsystemConfig* SubsystemConfig; // 0x580(0x8)
};

// Object: Class GameCore.LevelSubsystemConfig
// Size: 0x38 (Inherited: 0x28)
struct ULevelSubsystemConfig : UObject
{
	DEFINE_UE_CLASS_HELPERS(ULevelSubsystemConfig, "LevelSubsystemConfig")

	struct TArray<struct ALevelSubsystem*> SubsystemClasses; // 0x28(0x10)
};

// Object: Class GameCore.LevelSubsystemCollection
// Size: 0xC0 (Inherited: 0x30)
struct ULevelSubsystemCollection : UWorldSubsystem
{
	DEFINE_UE_CLASS_HELPERS(ULevelSubsystemCollection, "LevelSubsystemCollection")

	struct TMap<struct ALevelSubsystem*, struct ALevelSubsystem*> LevelSubsystemMap; // 0x30(0x50)
	uint8_t Pad_0x80[0x28]; // 0x80(0x28)
	struct ULevelSubsystemConfig* LevelSubsystemConfig; // 0xA8(0x8)
	uint8_t Pad_0xB0[0x10]; // 0xB0(0x10)
};

// Object: Class GameCore.ParticleSystemGroup
// Size: 0xA8 (Inherited: 0x30)
struct UParticleSystemGroup : UDataAsset
{
	DEFINE_UE_CLASS_HELPERS(UParticleSystemGroup, "ParticleSystemGroup")

	struct TMap<EFXQualityLevel, struct FFXInstance> Templates; // 0x30(0x50)
	EFXQualityLevel CurrentQualityLevel; // 0x80(0x1)
	uint8_t Pad_0x81[0x7]; // 0x81(0x7)
	struct FMulticastInlineDelegate OnParticleSystemGroupInit; // 0x88(0x10)
	struct UParticleSystem* CurrentParticleSystem; // 0x98(0x8)
	uint8_t Pad_0xA0[0x8]; // 0xA0(0x8)

	// Object: Function GameCore.ParticleSystemGroup.SyncLoad
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x75c9f44
	// Params: [ Num(1) Size(0x8) ]
	struct UParticleSystem* SyncLoad();

	// Object: Function GameCore.ParticleSystemGroup.SetTemplates
	// Flags: [Final|Native|Private|BlueprintCallable]
	// Offset: 0x75c9d48
	// Params: [ Num(2) Size(0x50) ]
	void SetTemplates(EFXQualityLevel InQualityLevel, struct FFXInstance InInstance);

	// Object: Function GameCore.ParticleSystemGroup.GetTemplateSoftObjectPathByQuality
	// Flags: [Final|Native|Private|HasDefaults|BlueprintCallable]
	// Offset: 0x75c9ca4
	// Params: [ Num(1) Size(0x18) ]
	struct FSoftObjectPath GetTemplateSoftObjectPathByQuality();

	// Object: Function GameCore.ParticleSystemGroup.GetCurrentActiveParticleSystem
	// Flags: [Final|Native|Private|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x75c9c88
	// Params: [ Num(1) Size(0x8) ]
	struct UParticleSystem* GetCurrentActiveParticleSystem();

	// Object: Function GameCore.ParticleSystemGroup.AsyncLoad
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x75c9c74
	// Params: [ Num(0) Size(0x0) ]
	void AsyncLoad();
};

// Object: Class GameCore.SceneData
// Size: 0xA8 (Inherited: 0x30)
struct USceneData : UWorldSubsystem
{
	DEFINE_UE_CLASS_HELPERS(USceneData, "SceneData")

	uint8_t Pad_0x30[0x78]; // 0x30(0x78)

	// Object: Function GameCore.SceneData.FindAllActorsByClass
	// Flags: [Final|Native|Public]
	// Offset: 0x75ca030
	// Params: [ Num(2) Size(0x58) ]
	struct TSet<struct TWeakObjectPtr<struct AActor>> FindAllActorsByClass(struct UObject* InTargetType);
};

// Object: Class GameCore.SceneDataInterface
// Size: 0x28 (Inherited: 0x28)
struct ISceneDataInterface : IInterface
{
	DEFINE_UE_CLASS_HELPERS(ISceneDataInterface, "SceneDataInterface")

	// Object: Function GameCore.SceneDataInterface.UnregisterActor
	// Flags: [Native|Public]
	// Offset: 0x75ca4c8
	// Params: [ Num(2) Size(0x9) ]
	uint8_t UnregisterActor(struct AActor* InTargetActor);

	// Object: Function GameCore.SceneDataInterface.Shutdown
	// Flags: [Native|Public]
	// Offset: 0x75ca41c
	// Params: [ Num(1) Size(0x8) ]
	void Shutdown(struct UWorld* World);

	// Object: Function GameCore.SceneDataInterface.Reset
	// Flags: [Native|Public]
	// Offset: 0x75ca370
	// Params: [ Num(1) Size(0x8) ]
	void Reset(struct UWorld* World);

	// Object: Function GameCore.SceneDataInterface.RegisterActor
	// Flags: [Native|Public]
	// Offset: 0x75ca2b8
	// Params: [ Num(2) Size(0x9) ]
	uint8_t RegisterActor(struct AActor* InTargetActor);

	// Object: Function GameCore.SceneDataInterface.Init
	// Flags: [Native|Public]
	// Offset: 0x75ca20c
	// Params: [ Num(1) Size(0x8) ]
	void Init(struct UWorld* World);

	// Object: Function GameCore.SceneDataInterface.GetUnregisterActorDelegate
	// Flags: [Native|Public]
	// Offset: 0x75ca180
	// Params: [ Num(1) Size(0x10) ]
	struct FMulticastInlineDelegate GetUnregisterActorDelegate();

	// Object: Function GameCore.SceneDataInterface.GetRegisterActorDelegate
	// Flags: [Native|Public]
	// Offset: 0x75ca0f4
	// Params: [ Num(1) Size(0x10) ]
	struct FMulticastInlineDelegate GetRegisterActorDelegate();
};

// Object: Class GameCore.SceneDataInterfaceUtils
// Size: 0x28 (Inherited: 0x28)
struct USceneDataInterfaceUtils : UObject
{
	DEFINE_UE_CLASS_HELPERS(USceneDataInterfaceUtils, "SceneDataInterfaceUtils")

	// Object: Function GameCore.SceneDataInterfaceUtils.GetSceneDataInterface
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x75ca5a0
	// Params: [ Num(2) Size(0x10) ]
	static struct UObject* GetSceneDataInterface(struct UObject* WorldContextObject);
};

} // namespace SDK
