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
	Quest = 1,
	Quest2 = 2,
	EOculusMobileDevice_MAX = 3
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
	struct FString AchievementID; // 0x10(0x10)
};

// Object: Class AndroidRuntimeSettings.AndroidRuntimeSettings
// Size: 0x2D0 (Inherited: 0x28)
struct UAndroidRuntimeSettings : UObject
{
	DEFINE_UE_CLASS_HELPERS(UAndroidRuntimeSettings, "AndroidRuntimeSettings")

	struct FString PackageName; // 0x28(0x10)
	int32_t StoreVersion; // 0x38(0x4)
	int32_t StoreVersionOffsetArmV7; // 0x3C(0x4)
	int32_t StoreVersionOffsetArm64; // 0x40(0x4)
	int32_t StoreVersionOffsetX8664; // 0x44(0x4)
	struct FString ApplicationDisplayName; // 0x48(0x10)
	struct FString VersionDisplayName; // 0x58(0x10)
	int32_t MinSDKVersion; // 0x68(0x4)
	int32_t TargetSDKVersion; // 0x6C(0x4)
	uint8_t InstallLocation; // 0x70(0x1)
	bool bEnableGradle; // 0x71(0x1)
	bool bEnableLint; // 0x72(0x1)
	bool bPackageDataInsideApk; // 0x73(0x1)
	bool bCreateAllPlatformsInstall; // 0x74(0x1)
	bool bDisableVerifyOBBOnStartUp; // 0x75(0x1)
	bool bForceSmallOBBFiles; // 0x76(0x1)
	bool bAllowLargeOBBFiles; // 0x77(0x1)
	bool bAllowPatchOBBFile; // 0x78(0x1)
	bool bAllowOverflowOBBFiles; // 0x79(0x1)
	bool bUseExternalFilesDir; // 0x7A(0x1)
	bool bPublicLogFiles; // 0x7B(0x1)
	uint8_t Orientation; // 0x7C(0x1)
	uint8_t Pad_0x7D[0x3]; // 0x7D(0x3)
	float MaxAspectRatio; // 0x80(0x4)
	bool bUseDisplayCutout; // 0x84(0x1)
	bool bRestoreNotificationsOnReboot; // 0x85(0x1)
	bool bFullScreen; // 0x86(0x1)
	bool bEnableNewKeyboard; // 0x87(0x1)
	uint8_t DepthBufferPreference; // 0x88(0x1)
	bool bValidateTextureFormats; // 0x89(0x1)
	bool bEnableBundle; // 0x8A(0x1)
	bool bEnableUniversalAPK; // 0x8B(0x1)
	bool bBundleABISplit; // 0x8C(0x1)
	bool bBundleLanguageSplit; // 0x8D(0x1)
	bool bBundleDensitySplit; // 0x8E(0x1)
	uint8_t Pad_0x8F[0x1]; // 0x8F(0x1)
	struct TArray<struct FString> ExtraManifestNodeTags; // 0x90(0x10)
	struct TArray<struct FString> ExtraApplicationNodeTags; // 0xA0(0x10)
	struct FString ExtraApplicationSettings; // 0xB0(0x10)
	struct TArray<struct FString> ExtraActivityNodeTags; // 0xC0(0x10)
	struct FString ExtraActivitySettings; // 0xD0(0x10)
	struct TArray<struct FString> ExtraPermissions; // 0xE0(0x10)
	bool bAndroidVoiceEnabled; // 0xF0(0x1)
	uint8_t Pad_0xF1[0x7]; // 0xF1(0x7)
	struct TArray<uint8_t> PackageForOculusMobile; // 0xF8(0x10)
	bool bRemoveOSIG; // 0x108(0x1)
	uint8_t Pad_0x109[0x7]; // 0x109(0x7)
	struct TArray<uint8_t> GoogleVRCaps; // 0x110(0x10)
	bool bGoogleVRSustainedPerformance; // 0x120(0x1)
	uint8_t Pad_0x121[0x7]; // 0x121(0x7)
	struct FString KeyStore; // 0x128(0x10)
	struct FString KeyAlias; // 0x138(0x10)
	struct FString KeyStorePassword; // 0x148(0x10)
	struct FString KeyPassword; // 0x158(0x10)
	bool bBuildForArmV7; // 0x168(0x1)
	bool bBuildForArm64; // 0x169(0x1)
	bool bBuildForX8664; // 0x16A(0x1)
	bool bBuildForES2; // 0x16B(0x1)
	bool bBuildForES31; // 0x16C(0x1)
	bool bSupportsVulkan; // 0x16D(0x1)
	bool bSupportsVulkanSM5; // 0x16E(0x1)
	uint8_t ClangSanitizer; // 0x16F(0x1)
	bool bAndroidOpenGLSupportsBackbufferSampling; // 0x170(0x1)
	bool bDetectVulkanByDefault; // 0x171(0x1)
	bool bBuildWithHiddenSymbolVisibility; // 0x172(0x1)
	bool bSaveSymbols; // 0x173(0x1)
	bool bForceLDLinker; // 0x174(0x1)
	bool bEnableGooglePlaySupport; // 0x175(0x1)
	bool bUseGetAccounts; // 0x176(0x1)
	uint8_t Pad_0x177[0x1]; // 0x177(0x1)
	struct FString GamesAppID; // 0x178(0x10)
	struct TArray<struct FGooglePlayAchievementMapping> AchievementMap; // 0x188(0x10)
	struct TArray<struct FGooglePlayLeaderboardMapping> LeaderboardMap; // 0x198(0x10)
	bool bEnableSnapshots; // 0x1A8(0x1)
	bool bSupportAdMob; // 0x1A9(0x1)
	uint8_t Pad_0x1AA[0x6]; // 0x1AA(0x6)
	struct FString AdMobAdUnitID; // 0x1B0(0x10)
	struct TArray<struct FString> AdMobAdUnitIDs; // 0x1C0(0x10)
	struct FString GooglePlayLicenseKey; // 0x1D0(0x10)
	struct FString GCMClientSenderID; // 0x1E0(0x10)
	bool bShowLaunchImage; // 0x1F0(0x1)
	bool bAllowIMU; // 0x1F1(0x1)
	bool bAllowControllers; // 0x1F2(0x1)
	bool bBlockAndroidKeysOnControllers; // 0x1F3(0x1)
	bool bControllersBlockDeviceFeedback; // 0x1F4(0x1)
	uint8_t AndroidAudio; // 0x1F5(0x1)
	uint8_t Pad_0x1F6[0x2]; // 0x1F6(0x2)
	int32_t AudioSampleRate; // 0x1F8(0x4)
	int32_t AudioCallbackBufferFrameSize; // 0x1FC(0x4)
	int32_t AudioNumBuffersToEnqueue; // 0x200(0x4)
	int32_t AudioMaxChannels; // 0x204(0x4)
	int32_t AudioNumSourceWorkers; // 0x208(0x4)
	uint8_t Pad_0x20C[0x4]; // 0x20C(0x4)
	struct FString SpatializationPlugin; // 0x210(0x10)
	struct FString ReverbPlugin; // 0x220(0x10)
	struct FString OcclusionPlugin; // 0x230(0x10)
	struct FPlatformRuntimeAudioCompressionOverrides CompressionOverrides; // 0x240(0x10)
	bool bUseAudioStreamCaching; // 0x250(0x1)
	uint8_t Pad_0x251[0x3]; // 0x251(0x3)
	int32_t CacheSizeKB; // 0x254(0x4)
	int32_t MaxChunkSizeOverrideKB; // 0x258(0x4)
	bool bResampleForDevice; // 0x25C(0x1)
	uint8_t Pad_0x25D[0x3]; // 0x25D(0x3)
	int32_t SoundCueCookQualityIndex; // 0x260(0x4)
	float MaxSampleRate; // 0x264(0x4)
	float HighSampleRate; // 0x268(0x4)
	float MedSampleRate; // 0x26C(0x4)
	float LowSampleRate; // 0x270(0x4)
	float MinSampleRate; // 0x274(0x4)
	float CompressionQualityModifier; // 0x278(0x4)
	float AutoStreamingThreshold; // 0x27C(0x4)
	uint8_t AndroidGraphicsDebugger; // 0x280(0x1)
	uint8_t Pad_0x281[0x7]; // 0x281(0x7)
	struct FDirectoryPath MaliGraphicsDebuggerPath; // 0x288(0x10)
	bool bMultiTargetFormat_ETC2; // 0x298(0x1)
	bool bMultiTargetFormat_DXT; // 0x299(0x1)
	bool bMultiTargetFormat_ASTC; // 0x29A(0x1)
	uint8_t Pad_0x29B[0x1]; // 0x29B(0x1)
	float TextureFormatPriority_ETC2; // 0x29C(0x4)
	float TextureFormatPriority_DXT; // 0x2A0(0x4)
	float TextureFormatPriority_ASTC; // 0x2A4(0x4)
	struct FString SDKAPILevelOverride; // 0x2A8(0x10)
	struct FString NDKAPILevelOverride; // 0x2B8(0x10)
	bool bStreamLandscapeMeshLODs; // 0x2C8(0x1)
	uint8_t Pad_0x2C9[0x7]; // 0x2C9(0x7)
};

} // namespace SDK
