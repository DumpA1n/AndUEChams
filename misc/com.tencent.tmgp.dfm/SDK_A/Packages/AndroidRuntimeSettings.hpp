#pragma once

#include "../CoreUObject_classes.hpp"
#include "AudioPlatformConfiguration.hpp"
#include "Engine.hpp"

namespace SDK
{

// Package: AndroidRuntimeSettings
// Enums: 9
// Structs: 2
// Classes: 1

struct FGooglePlayLeaderboardMapping;
struct FGooglePlayAchievementMapping;
struct UAndroidRuntimeSettings;

// Object: Enum AndroidRuntimeSettings.EClangSanitizer
enum class EClangSanitizer : uint8_t
{
	None = 0,
	Address = 1,
	HwAddress = 2,
	UndefinedBehavior = 3,
	UndefinedBehaviorMinimal = 4,
	EClangSanitizer_MAX = 5
};

// Object: Enum AndroidRuntimeSettings.EAndroidGraphicsDebugger
enum class EAndroidGraphicsDebugger : uint8_t
{
	None = 0,
	Mali = 1,
	Adreno = 2,
	EAndroidGraphicsDebugger_MAX = 3
};

// Object: Enum AndroidRuntimeSettings.EGoogleVRCaps
enum class EGoogleVRCaps : uint8_t
{
	Cardboard = 0,
	Daydream33 = 1,
	Daydream63 = 2,
	Daydream66 = 3,
	EGoogleVRCaps_MAX = 4
};

// Object: Enum AndroidRuntimeSettings.EGoogleVRMode
enum class EGoogleVRMode : uint8_t
{
	Cardboard = 0,
	Daydream = 1,
	DaydreamAndCardboard = 2,
	EGoogleVRMode_MAX = 3
};

// Object: Enum AndroidRuntimeSettings.EAndroidAudio
enum class EAndroidAudio : uint8_t
{
	Default = 0,
	OGG = 1,
	ADPCM = 2,
	EAndroidAudio_MAX = 3
};

// Object: Enum AndroidRuntimeSettings.EOculusMobileDevice
enum class EOculusMobileDevice : uint8_t
{
	GearGo = 0,
	Quest = 1,
	EOculusMobileDevice_MAX = 2
};

// Object: Enum AndroidRuntimeSettings.EAndroidInstallLocation
enum class EAndroidInstallLocation : uint8_t
{
	InternalOnly = 0,
	PreferExternal = 1,
	Auto = 2,
	EAndroidInstallLocation_MAX = 3
};

// Object: Enum AndroidRuntimeSettings.EAndroidDepthBufferPreference
enum class EAndroidDepthBufferPreference : uint8_t
{
	Default = 0,
	Bits16 = 16,
	Bits24 = 24,
	Bits32 = 32,
	EAndroidDepthBufferPreference_MAX = 33
};

// Object: Enum AndroidRuntimeSettings.EAndroidScreenOrientation
enum class EAndroidScreenOrientation : uint8_t
{
	Portrait = 0,
	ReversePortrait = 1,
	SensorPortrait = 2,
	Landscape = 3,
	ReverseLandscape = 4,
	SensorLandscape = 5,
	Sensor = 6,
	FullSensor = 7,
	EAndroidScreenOrientation_MAX = 8
};

// Object: ScriptStruct AndroidRuntimeSettings.GooglePlayLeaderboardMapping
// Size: 0x20 (Inherited: 0x0)
struct FGooglePlayLeaderboardMapping
{
	struct FString Name; // 0x0(0x10)
	struct FString LeaderboardID; // 0x10(0x10)
};

// Object: ScriptStruct AndroidRuntimeSettings.GooglePlayAchievementMapping
// Size: 0x20 (Inherited: 0x0)
struct FGooglePlayAchievementMapping
{
	struct FString Name; // 0x0(0x10)
	struct FString AchievementId; // 0x10(0x10)
};

// Object: Class AndroidRuntimeSettings.AndroidRuntimeSettings
// Size: 0x2F8 (Inherited: 0x28)
struct UAndroidRuntimeSettings : UObject
{
	struct FString PackageName; // 0x28(0x10)
	int32_t StoreVersion; // 0x38(0x4)
	int32_t StoreVersionOffsetArmV7; // 0x3C(0x4)
	int32_t StoreVersionOffsetArm64; // 0x40(0x4)
	int32_t StoreVersionOffsetX8664; // 0x44(0x4)
	struct FString ApplicationDisplayName; // 0x48(0x10)
	struct FString VersionDisplayName; // 0x58(0x10)
	int32_t MinSDKVersion; // 0x68(0x4)
	int32_t TargetSDKVersion; // 0x6C(0x4)
	EAndroidInstallLocation InstallLocation; // 0x70(0x1)
	uint8_t bEnableGradle : 1; // 0x71(0x1), Mask(0x1)
	uint8_t BitPad_0x71_1 : 7; // 0x71(0x1)
	uint8_t bEnableLint : 1; // 0x72(0x1), Mask(0x1)
	uint8_t BitPad_0x72_1 : 7; // 0x72(0x1)
	uint8_t bPackageDataInsideApk : 1; // 0x73(0x1), Mask(0x1)
	uint8_t BitPad_0x73_1 : 7; // 0x73(0x1)
	uint8_t bCreateAllPlatformsInstall : 1; // 0x74(0x1), Mask(0x1)
	uint8_t BitPad_0x74_1 : 7; // 0x74(0x1)
	uint8_t bDisableVerifyOBBOnStartUp : 1; // 0x75(0x1), Mask(0x1)
	uint8_t BitPad_0x75_1 : 7; // 0x75(0x1)
	uint8_t bForceSmallOBBFiles : 1; // 0x76(0x1), Mask(0x1)
	uint8_t BitPad_0x76_1 : 7; // 0x76(0x1)
	uint8_t bAllowLargeOBBFiles : 1; // 0x77(0x1), Mask(0x1)
	uint8_t BitPad_0x77_1 : 7; // 0x77(0x1)
	uint8_t bAllowPatchOBBFile : 1; // 0x78(0x1), Mask(0x1)
	uint8_t BitPad_0x78_1 : 7; // 0x78(0x1)
	uint8_t bAllowOverflowOBBFiles : 1; // 0x79(0x1), Mask(0x1)
	uint8_t BitPad_0x79_1 : 7; // 0x79(0x1)
	uint8_t bUseExternalFilesDir : 1; // 0x7A(0x1), Mask(0x1)
	uint8_t BitPad_0x7A_1 : 7; // 0x7A(0x1)
	uint8_t bPublicLogFiles : 1; // 0x7B(0x1), Mask(0x1)
	uint8_t BitPad_0x7B_1 : 7; // 0x7B(0x1)
	EAndroidScreenOrientation Orientation; // 0x7C(0x1)
	uint8_t Pad_0x7D[0x3]; // 0x7D(0x3)
	float MaxAspectRatio; // 0x80(0x4)
	uint8_t bUseDisplayCutout : 1; // 0x84(0x1), Mask(0x1)
	uint8_t BitPad_0x84_1 : 7; // 0x84(0x1)
	uint8_t bRestoreNotificationsOnReboot : 1; // 0x85(0x1), Mask(0x1)
	uint8_t BitPad_0x85_1 : 7; // 0x85(0x1)
	uint8_t bFullScreen : 1; // 0x86(0x1), Mask(0x1)
	uint8_t BitPad_0x86_1 : 7; // 0x86(0x1)
	uint8_t bEnableNewKeyboard : 1; // 0x87(0x1), Mask(0x1)
	uint8_t BitPad_0x87_1 : 7; // 0x87(0x1)
	EAndroidDepthBufferPreference DepthBufferPreference; // 0x88(0x1)
	uint8_t bValidateTextureFormats : 1; // 0x89(0x1), Mask(0x1)
	uint8_t BitPad_0x89_1 : 7; // 0x89(0x1)
	uint8_t bEnableAdvancedBinaryCompression : 1; // 0x8A(0x1), Mask(0x1)
	uint8_t BitPad_0x8A_1 : 7; // 0x8A(0x1)
	uint8_t bEnableGNUHash : 1; // 0x8B(0x1), Mask(0x1)
	uint8_t BitPad_0x8B_1 : 7; // 0x8B(0x1)
	uint8_t bEnableBundle : 1; // 0x8C(0x1), Mask(0x1)
	uint8_t BitPad_0x8C_1 : 7; // 0x8C(0x1)
	uint8_t bEnableUniversalAPK : 1; // 0x8D(0x1), Mask(0x1)
	uint8_t BitPad_0x8D_1 : 7; // 0x8D(0x1)
	uint8_t bBundleABISplit : 1; // 0x8E(0x1), Mask(0x1)
	uint8_t BitPad_0x8E_1 : 7; // 0x8E(0x1)
	uint8_t bBundleLanguageSplit : 1; // 0x8F(0x1), Mask(0x1)
	uint8_t BitPad_0x8F_1 : 7; // 0x8F(0x1)
	uint8_t bBundleDensitySplit : 1; // 0x90(0x1), Mask(0x1)
	uint8_t BitPad_0x90_1 : 7; // 0x90(0x1)
	uint8_t Pad_0x91[0x7]; // 0x91(0x7)
	struct TArray<struct FString> ExtraManifestNodeTags; // 0x98(0x10)
	struct TArray<struct FString> ExtraApplicationNodeTags; // 0xA8(0x10)
	struct FString ExtraApplicationSettings; // 0xB8(0x10)
	struct TArray<struct FString> ExtraActivityNodeTags; // 0xC8(0x10)
	struct FString ExtraActivitySettings; // 0xD8(0x10)
	struct TArray<struct FString> ExtraPermissions; // 0xE8(0x10)
	uint8_t bAndroidVoiceEnabled : 1; // 0xF8(0x1), Mask(0x1)
	uint8_t BitPad_0xF8_1 : 7; // 0xF8(0x1)
	uint8_t Pad_0xF9[0x7]; // 0xF9(0x7)
	struct TArray<EOculusMobileDevice> PackageForOculusMobile; // 0x100(0x10)
	uint8_t bRemoveOSIG : 1; // 0x110(0x1), Mask(0x1)
	uint8_t BitPad_0x110_1 : 7; // 0x110(0x1)
	uint8_t Pad_0x111[0x7]; // 0x111(0x7)
	struct TArray<EGoogleVRCaps> GoogleVRCaps; // 0x118(0x10)
	uint8_t bGoogleVRSustainedPerformance : 1; // 0x128(0x1), Mask(0x1)
	uint8_t BitPad_0x128_1 : 7; // 0x128(0x1)
	uint8_t Pad_0x129[0x7]; // 0x129(0x7)
	struct FString KeyStore; // 0x130(0x10)
	struct FString KeyAlias; // 0x140(0x10)
	struct FString KeyStorePassword; // 0x150(0x10)
	struct FString KeyPassword; // 0x160(0x10)
	uint8_t bBuildForArmV7 : 1; // 0x170(0x1), Mask(0x1)
	uint8_t BitPad_0x170_1 : 7; // 0x170(0x1)
	uint8_t bBuildForArm64 : 1; // 0x171(0x1), Mask(0x1)
	uint8_t BitPad_0x171_1 : 7; // 0x171(0x1)
	uint8_t bBuildForX8664 : 1; // 0x172(0x1), Mask(0x1)
	uint8_t BitPad_0x172_1 : 7; // 0x172(0x1)
	uint8_t bBuildForES2 : 1; // 0x173(0x1), Mask(0x1)
	uint8_t BitPad_0x173_1 : 7; // 0x173(0x1)
	uint8_t bBuildForES31 : 1; // 0x174(0x1), Mask(0x1)
	uint8_t BitPad_0x174_1 : 7; // 0x174(0x1)
	uint8_t bSupportsVulkan : 1; // 0x175(0x1), Mask(0x1)
	uint8_t BitPad_0x175_1 : 7; // 0x175(0x1)
	uint8_t bDetectVulkanByDefault : 1; // 0x176(0x1), Mask(0x1)
	uint8_t BitPad_0x176_1 : 7; // 0x176(0x1)
	EClangSanitizer ClangSanitizer; // 0x177(0x1)
	uint8_t bAndroidOpenGLSupportsBackbufferSampling : 1; // 0x178(0x1), Mask(0x1)
	uint8_t BitPad_0x178_1 : 7; // 0x178(0x1)
	uint8_t bBuildWithHiddenSymbolVisibility : 1; // 0x179(0x1), Mask(0x1)
	uint8_t BitPad_0x179_1 : 7; // 0x179(0x1)
	uint8_t bSaveSymbols : 1; // 0x17A(0x1), Mask(0x1)
	uint8_t BitPad_0x17A_1 : 7; // 0x17A(0x1)
	uint8_t bEnableGooglePlaySupport : 1; // 0x17B(0x1), Mask(0x1)
	uint8_t BitPad_0x17B_1 : 7; // 0x17B(0x1)
	uint8_t bUseGetAccounts : 1; // 0x17C(0x1), Mask(0x1)
	uint8_t BitPad_0x17C_1 : 7; // 0x17C(0x1)
	uint8_t Pad_0x17D[0x3]; // 0x17D(0x3)
	struct FString GamesAppID; // 0x180(0x10)
	struct TArray<struct FGooglePlayAchievementMapping> AchievementMap; // 0x190(0x10)
	struct TArray<struct FGooglePlayLeaderboardMapping> LeaderboardMap; // 0x1A0(0x10)
	uint8_t bEnableSnapshots : 1; // 0x1B0(0x1), Mask(0x1)
	uint8_t BitPad_0x1B0_1 : 7; // 0x1B0(0x1)
	uint8_t bSupportAdMob : 1; // 0x1B1(0x1), Mask(0x1)
	uint8_t BitPad_0x1B1_1 : 7; // 0x1B1(0x1)
	uint8_t Pad_0x1B2[0x6]; // 0x1B2(0x6)
	struct FString AdMobAdUnitID; // 0x1B8(0x10)
	struct TArray<struct FString> AdMobAdUnitIDs; // 0x1C8(0x10)
	struct FString GooglePlayLicenseKey; // 0x1D8(0x10)
	struct FString GCMClientSenderID; // 0x1E8(0x10)
	uint8_t bShowLaunchImage : 1; // 0x1F8(0x1), Mask(0x1)
	uint8_t BitPad_0x1F8_1 : 7; // 0x1F8(0x1)
	uint8_t bAllowIMU : 1; // 0x1F9(0x1), Mask(0x1)
	uint8_t BitPad_0x1F9_1 : 7; // 0x1F9(0x1)
	uint8_t bAllowControllers : 1; // 0x1FA(0x1), Mask(0x1)
	uint8_t BitPad_0x1FA_1 : 7; // 0x1FA(0x1)
	uint8_t bBlockAndroidKeysOnControllers : 1; // 0x1FB(0x1), Mask(0x1)
	uint8_t BitPad_0x1FB_1 : 7; // 0x1FB(0x1)
	EAndroidAudio AndroidAudio; // 0x1FC(0x1)
	uint8_t Pad_0x1FD[0x3]; // 0x1FD(0x3)
	int32_t AudioSampleRate; // 0x200(0x4)
	int32_t AudioCallbackBufferFrameSize; // 0x204(0x4)
	int32_t AudioNumBuffersToEnqueue; // 0x208(0x4)
	int32_t AudioMaxChannels; // 0x20C(0x4)
	int32_t AudioNumSourceWorkers; // 0x210(0x4)
	uint8_t Pad_0x214[0x4]; // 0x214(0x4)
	struct FString SpatializationPlugin; // 0x218(0x10)
	struct FString ReverbPlugin; // 0x228(0x10)
	struct FString OcclusionPlugin; // 0x238(0x10)
	struct FPlatformRuntimeAudioCompressionOverrides CompressionOverrides; // 0x248(0x10)
	int32_t ChunkSizeKB; // 0x258(0x4)
	uint8_t bUseAudioStreamCaching : 1; // 0x25C(0x1), Mask(0x1)
	uint8_t BitPad_0x25C_1 : 7; // 0x25C(0x1)
	uint8_t Pad_0x25D[0x3]; // 0x25D(0x3)
	int32_t CacheSizeKB; // 0x260(0x4)
	uint8_t bResampleForDevice : 1; // 0x264(0x1), Mask(0x1)
	uint8_t BitPad_0x264_1 : 7; // 0x264(0x1)
	uint8_t Pad_0x265[0x3]; // 0x265(0x3)
	int32_t SoundCueCookQualityIndex; // 0x268(0x4)
	float MaxSampleRate; // 0x26C(0x4)
	float HighSampleRate; // 0x270(0x4)
	float MedSampleRate; // 0x274(0x4)
	float LowSampleRate; // 0x278(0x4)
	float MinSampleRate; // 0x27C(0x4)
	float CompressionQualityModifier; // 0x280(0x4)
	float AutoStreamingThreshold; // 0x284(0x4)
	EAndroidGraphicsDebugger AndroidGraphicsDebugger; // 0x288(0x1)
	uint8_t Pad_0x289[0x7]; // 0x289(0x7)
	struct FDirectoryPath MaliGraphicsDebuggerPath; // 0x290(0x10)
	uint8_t bMultiTargetFormat_ETC1 : 1; // 0x2A0(0x1), Mask(0x1)
	uint8_t BitPad_0x2A0_1 : 7; // 0x2A0(0x1)
	uint8_t bMultiTargetFormat_ETC1a : 1; // 0x2A1(0x1), Mask(0x1)
	uint8_t BitPad_0x2A1_1 : 7; // 0x2A1(0x1)
	uint8_t bMultiTargetFormat_ETC2 : 1; // 0x2A2(0x1), Mask(0x1)
	uint8_t BitPad_0x2A2_1 : 7; // 0x2A2(0x1)
	uint8_t bMultiTargetFormat_DXT : 1; // 0x2A3(0x1), Mask(0x1)
	uint8_t BitPad_0x2A3_1 : 7; // 0x2A3(0x1)
	uint8_t bMultiTargetFormat_PVRTC : 1; // 0x2A4(0x1), Mask(0x1)
	uint8_t BitPad_0x2A4_1 : 7; // 0x2A4(0x1)
	uint8_t bMultiTargetFormat_ATC : 1; // 0x2A5(0x1), Mask(0x1)
	uint8_t BitPad_0x2A5_1 : 7; // 0x2A5(0x1)
	uint8_t bMultiTargetFormat_ASTC : 1; // 0x2A6(0x1), Mask(0x1)
	uint8_t BitPad_0x2A6_1 : 7; // 0x2A6(0x1)
	uint8_t Pad_0x2A7[0x1]; // 0x2A7(0x1)
	float TextureFormatPriority_ETC1; // 0x2A8(0x4)
	float TextureFormatPriority_ETC1a; // 0x2AC(0x4)
	float TextureFormatPriority_ETC2; // 0x2B0(0x4)
	float TextureFormatPriority_DXT; // 0x2B4(0x4)
	float TextureFormatPriority_PVRTC; // 0x2B8(0x4)
	float TextureFormatPriority_ATC; // 0x2BC(0x4)
	float TextureFormatPriority_ASTC; // 0x2C0(0x4)
	uint8_t Pad_0x2C4[0x4]; // 0x2C4(0x4)
	struct FString SDKAPILevelOverride; // 0x2C8(0x10)
	struct FString NDKAPILevelOverride; // 0x2D8(0x10)
	struct TArray<struct FString> ObbFilters; // 0x2E8(0x10)
	DEFINE_UE_CLASS_HELPERS(UAndroidRuntimeSettings, "AndroidRuntimeSettings")

};

} // namespace SDK
