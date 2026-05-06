#pragma once

#include "../CoreUObject_classes.hpp"

namespace SDK
{

// Package: MFBaseModule
// Enums: 4
// Structs: 3
// Classes: 8

struct UEngine;
struct UGameUserSettings;
struct UWorld;
struct FDeviceConsoleConfig;
struct FDeviceQualityConfig;
struct FMemorySettingConfig;
struct UMFBaseServices;
struct UMFDeviceConsole;
struct UMFBaseDeviceQualityScalability;
struct UMFSolutionQualityScalability;
struct UMFDeviceQualityScalability;
struct UMFMemoryScalability;
struct UMFPhoneModelLimitation;
struct UMFUObjectCheckTool;

// Object: Enum MFBaseModule.EGameSceneType
enum class EGameSceneType : uint8_t
{
	GST_None = 0,
	GST_Lobby = 1,
	GST_InBattle = 2,
	GST_CG = 3,
	GST_ShootingRoom = 4,
	GST_MAX = 5
};

// Object: Enum MFBaseModule.EPlayGameMode
enum class EPlayGameMode : uint8_t
{
	PGM_ClassicGameMode = 0,
	PGM_RoundGameMode = 1,
	PGM_PVEGameMode = 2,
	PGM_BRGameMode = 3,
	PGM_TutorialGameMode = 4,
	PGM_MAX = 5
};

// Object: Enum MFBaseModule.EQCCFileType
enum class EQCCFileType : uint8_t
{
	None = 0,
	Domestic = 1,
	Oversea = 2,
	EQCCFileType_MAX = 3
};

// Object: Enum MFBaseModule.EMobileDeviceLevel
enum class EMobileDeviceLevel : uint8_t
{
	MobileDeviceLevel_0_VeryVeryLow = 0,
	MobileDeviceLevel_1_VeryLow = 1,
	MobileDeviceLevel_2_Low = 2,
	MobileDeviceLevel_3_Medium = 3,
	MobileDeviceLevel_4_Medium = 4,
	MobileDeviceLevel_5_High = 5,
	MobileDeviceLevel_6_HDR = 6,
	MobileDeviceLevel_7_Ultra = 7,
	MobileDeviceLevel_Num = 8,
	MobileDeviceLevel_MAX = 9
};

// Object: ScriptStruct MFBaseModule.DeviceConsoleConfig
// Size: 0x98 (Inherited: 0x0)
struct FDeviceConsoleConfig
{
	uint8_t Pad_0x0[0x98]; // 0x0(0x98)
};

// Object: ScriptStruct MFBaseModule.DeviceQualityConfig
// Size: 0x30 (Inherited: 0x0)
struct FDeviceQualityConfig
{
	uint8_t Pad_0x0[0x30]; // 0x0(0x30)
};

// Object: ScriptStruct MFBaseModule.MemorySettingConfig
// Size: 0xD0 (Inherited: 0x0)
struct FMemorySettingConfig
{
	uint8_t Pad_0x0[0xD0]; // 0x0(0xD0)
};

// Object: Class MFBaseModule.MFBaseServices
// Size: 0x28 (Inherited: 0x28)
struct UMFBaseServices : UObject
{
	DEFINE_UE_CLASS_HELPERS(UMFBaseServices, "MFBaseServices")

	// Object: Function MFBaseModule.MFBaseServices.ZipRecentDetailLogAsync
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3e679c8
	// Params: [ Num(5) Size(0x2C) ]
	static int32_t ZipRecentDetailLogAsync(struct FDelegate InCallback, struct FString InZipName, int32_t LimitSize, int32_t MaxFileCount);

	// Object: Function MFBaseModule.MFBaseServices.ZipRecentDetailLog
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3e67e04
	// Params: [ Num(4) Size(0x1C) ]
	static int32_t ZipRecentDetailLog(struct FString InZipName, int32_t LimitSize, int32_t MaxFileCount);

	// Object: Function MFBaseModule.MFBaseServices.ZipLogFile
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3e6817c
	// Params: [ Num(1) Size(0x1) ]
	static bool ZipLogFile();

	// Object: Function MFBaseModule.MFBaseServices.ZipLogDirectoryAsync
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3e67b4c
	// Params: [ Num(5) Size(0x2C) ]
	static int32_t ZipLogDirectoryAsync(struct FDelegate InCallback, struct FString InZipName, int32_t InCuttingBigFile, int32_t MaxFileCount);

	// Object: Function MFBaseModule.MFBaseServices.ZipLogDirectory
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3e67cd0
	// Params: [ Num(4) Size(0x1C) ]
	static int32_t ZipLogDirectory(struct FString InZipName, int32_t InCuttingBigFile, int32_t MaxFileCount);

	// Object: Function MFBaseModule.MFBaseServices.ZipFilesEx
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x3e67620
	// Params: [ Num(4) Size(0x28) ]
	static int32_t ZipFilesEx(struct FString InZipName, const struct TArray<struct FString>& InFiles, bool InAppendMode);

	// Object: Function MFBaseModule.MFBaseServices.ZipFilesCompressionEx
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x3e6747c
	// Params: [ Num(5) Size(0x28) ]
	static int32_t ZipFilesCompressionEx(struct FString InZipName, const struct TArray<struct FString>& InFiles, bool InAppendMode, bool IsCompression);

	// Object: Function MFBaseModule.MFBaseServices.ZipFiles
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x3e67774
	// Params: [ Num(4) Size(0x28) ]
	static int32_t ZipFiles(struct FString InZipName, const struct TArray<struct FString>& InFiles, int32_t CuttingSize);

	// Object: Function MFBaseModule.MFBaseServices.UnzipFiles
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3e678c0
	// Params: [ Num(3) Size(0x21) ]
	static bool UnzipFiles(struct FString ZipFilePath, struct FString OutputDir);

	// Object: Function MFBaseModule.MFBaseServices.SavePNGToDCIM_Android
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3e67248
	// Params: [ Num(4) Size(0x31) ]
	static bool SavePNGToDCIM_Android(struct FString InImagePath, struct FString InFolderName, struct FString InDisplayName);

	// Object: Function MFBaseModule.MFBaseServices.RestartApplication
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3e67f38
	// Params: [ Num(1) Size(0x1) ]
	static bool RestartApplication();

	// Object: DelegateFunction MFBaseModule.MFBaseServices.OnZipLogFilesCompleted__DelegateSignature
	// Flags: [Public|Delegate]
	// Offset: 0x5d8cbc8
	// Params: [ Num(2) Size(0x14) ]
	void OnZipLogFilesCompleted__DelegateSignature(struct FString InZipFileName, int32_t InRetValue);

	// Object: Function MFBaseModule.MFBaseServices.MountPak
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3e67f70
	// Params: [ Num(4) Size(0x29) ]
	static bool MountPak(struct FString InPakFile, int32_t InOrder, struct FString InMountPoint);

	// Object: Function MFBaseModule.MFBaseServices.IsUAGameDebugMode
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x8f4f328
	// Params: [ Num(1) Size(0x1) ]
	static bool IsUAGameDebugMode();

	// Object: Function MFBaseModule.MFBaseServices.IsMuteAudio
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x92c831c
	// Params: [ Num(3) Size(0x3) ]
	static bool IsMuteAudio(bool IsRead, bool MuteAudio);

	// Object: Function MFBaseModule.MFBaseServices.IsEditorRuntime
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x8b59824
	// Params: [ Num(1) Size(0x1) ]
	static bool IsEditorRuntime();

	// Object: Function MFBaseModule.MFBaseServices.IsEditor
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x8169ac4
	// Params: [ Num(1) Size(0x1) ]
	static bool IsEditor();

	// Object: Function MFBaseModule.MFBaseServices.GetScreenSize
	// Flags: [Final|Native|Static|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x3e683dc
	// Params: [ Num(1) Size(0x8) ]
	static struct FIntPoint GetScreenSize();

	// Object: Function MFBaseModule.MFBaseServices.GetPublishedVersionType
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x95bd0b0
	// Params: [ Num(1) Size(0x10) ]
	static struct FString GetPublishedVersionType();

	// Object: Function MFBaseModule.MFBaseServices.GetPlatform
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x953c50c
	// Params: [ Num(1) Size(0x10) ]
	static struct FString GetPlatform();

	// Object: Function MFBaseModule.MFBaseServices.GetNetModeByWorldContextObject
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x9558968
	// Params: [ Num(2) Size(0x18) ]
	static struct FString GetNetModeByWorldContextObject(struct UObject* WorldContextObject);

	// Object: Function MFBaseModule.MFBaseServices.GetNetMode
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3e68410
	// Params: [ Num(1) Size(0x10) ]
	static struct FString GetNetMode();

	// Object: Function MFBaseModule.MFBaseServices.GetLocalIPAddress
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x98213d4
	// Params: [ Num(1) Size(0x10) ]
	static struct FString GetLocalIPAddress();

	// Object: Function MFBaseModule.MFBaseServices.GetGameUserSettings
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3e686d0
	// Params: [ Num(1) Size(0x8) ]
	static struct UGameUserSettings* GetGameUserSettings();

	// Object: Function MFBaseModule.MFBaseServices.GetGameSceneTypeByMapName
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3e681b4
	// Params: [ Num(2) Size(0x11) ]
	static EGameSceneType GetGameSceneTypeByMapName(struct FString InMapName);

	// Object: Function MFBaseModule.MFBaseServices.GetGameSceneType
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x996d90c
	// Params: [ Num(2) Size(0x9) ]
	static EGameSceneType GetGameSceneType(struct UWorld* InWorld);

	// Object: Function MFBaseModule.MFBaseServices.GetGameMode
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3e67178
	// Params: [ Num(1) Size(0x1) ]
	static EPlayGameMode GetGameMode();

	// Object: Function MFBaseModule.MFBaseServices.GetGameMapName
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3e671ac
	// Params: [ Num(1) Size(0x10) ]
	static struct FString GetGameMapName();

	// Object: Function MFBaseModule.MFBaseServices.GetExecutablePath
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3e68634
	// Params: [ Num(1) Size(0x10) ]
	static struct FString GetExecutablePath();

	// Object: Function MFBaseModule.MFBaseServices.GetEngine
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3e68704
	// Params: [ Num(1) Size(0x8) ]
	static struct UEngine* GetEngine();

	// Object: Function MFBaseModule.MFBaseServices.GetDeviceModel
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x90c3dbc
	// Params: [ Num(1) Size(0x10) ]
	static struct FString GetDeviceModel();

	// Object: Function MFBaseModule.MFBaseServices.GetCurrentGameSceneType
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3e682bc
	// Params: [ Num(1) Size(0x1) ]
	static EGameSceneType GetCurrentGameSceneType();

	// Object: Function MFBaseModule.MFBaseServices.GetAppVersionDisplay
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3e680e0
	// Params: [ Num(1) Size(0x10) ]
	static struct FString GetAppVersionDisplay();

	// Object: Function MFBaseModule.MFBaseServices.EncodeBase64
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x9547f1c
	// Params: [ Num(2) Size(0x20) ]
	static struct FString EncodeBase64(struct FString Source);

	// Object: Function MFBaseModule.MFBaseServices.DownloadVersionPakPackage
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3e680b8
	// Params: [ Num(0) Size(0x0) ]
	static void DownloadVersionPakPackage();

	// Object: Function MFBaseModule.MFBaseServices.DownloadLuaFixPackage
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3e680cc
	// Params: [ Num(0) Size(0x0) ]
	static void DownloadLuaFixPackage();

	// Object: Function MFBaseModule.MFBaseServices.DecodeBase64
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3e682f0
	// Params: [ Num(2) Size(0x20) ]
	static struct FString DecodeBase64(struct FString Source);

	// Object: Function MFBaseModule.MFBaseServices.CreateProc
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3e684ac
	// Params: [ Num(2) Size(0x20) ]
	static void CreateProc(struct FString URL, struct FString Parms_);
};

// Object: Class MFBaseModule.MFDeviceConsole
// Size: 0x28 (Inherited: 0x28)
struct UMFDeviceConsole : UObject
{
	DEFINE_UE_CLASS_HELPERS(UMFDeviceConsole, "MFDeviceConsole")

	// Object: Function MFBaseModule.MFDeviceConsole.InitDeviceConsoleConfig
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x8cb4010
	// Params: [ Num(0) Size(0x0) ]
	static void InitDeviceConsoleConfig();
};

// Object: Class MFBaseModule.MFBaseDeviceQualityScalability
// Size: 0x28 (Inherited: 0x28)
struct UMFBaseDeviceQualityScalability : UObject
{
	DEFINE_UE_CLASS_HELPERS(UMFBaseDeviceQualityScalability, "MFBaseDeviceQualityScalability")
};

// Object: Class MFBaseModule.MFSolutionQualityScalability
// Size: 0x28 (Inherited: 0x28)
struct UMFSolutionQualityScalability : UObject
{
	DEFINE_UE_CLASS_HELPERS(UMFSolutionQualityScalability, "MFSolutionQualityScalability")

	// Object: Function MFBaseModule.MFSolutionQualityScalability.InitQualitySettingConfig
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x8808764
	// Params: [ Num(0) Size(0x0) ]
	static void InitQualitySettingConfig();
};

// Object: Class MFBaseModule.MFDeviceQualityScalability
// Size: 0x28 (Inherited: 0x28)
struct UMFDeviceQualityScalability : UMFBaseDeviceQualityScalability
{
	DEFINE_UE_CLASS_HELPERS(UMFDeviceQualityScalability, "MFDeviceQualityScalability")

	// Object: Function MFBaseModule.MFDeviceQualityScalability.InitQualitySettingConfig
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x9590e0c
	// Params: [ Num(0) Size(0x0) ]
	static void InitQualitySettingConfig();
};

// Object: Class MFBaseModule.MFMemoryScalability
// Size: 0x28 (Inherited: 0x28)
struct UMFMemoryScalability : UObject
{
	DEFINE_UE_CLASS_HELPERS(UMFMemoryScalability, "MFMemoryScalability")

	// Object: Function MFBaseModule.MFMemoryScalability.SetMemoryScalabilityIndex
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x3e68834
	// Params: [ Num(1) Size(0x4) ]
	static void SetMemoryScalabilityIndex(int32_t Index);

	// Object: Function MFBaseModule.MFMemoryScalability.InitMemorySettingConfig
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x9081504
	// Params: [ Num(0) Size(0x0) ]
	static void InitMemorySettingConfig();

	// Object: Function MFBaseModule.MFMemoryScalability.GetTotalMemoryInGB
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x8957370
	// Params: [ Num(1) Size(0x4) ]
	static int32_t GetTotalMemoryInGB();

	// Object: Function MFBaseModule.MFMemoryScalability.GetIntValue
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x996eaa4
	// Params: [ Num(3) Size(0x18) ]
	static int32_t GetIntValue(struct FString Key, int32_t DefaultValue);

	// Object: Function MFBaseModule.MFMemoryScalability.GetFloatValue
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x3e688cc
	// Params: [ Num(3) Size(0x18) ]
	static float GetFloatValue(struct FString Key, float DefaultValue);

	// Object: Function MFBaseModule.MFMemoryScalability.ExecConsoleVarsInLobby
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x3e68820
	// Params: [ Num(0) Size(0x0) ]
	static void ExecConsoleVarsInLobby();

	// Object: Function MFBaseModule.MFMemoryScalability.ExecConsoleVarsInBattle
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x3e6880c
	// Params: [ Num(0) Size(0x0) ]
	static void ExecConsoleVarsInBattle();
};

// Object: Class MFBaseModule.MFPhoneModelLimitation
// Size: 0x28 (Inherited: 0x28)
struct UMFPhoneModelLimitation : UObject
{
	DEFINE_UE_CLASS_HELPERS(UMFPhoneModelLimitation, "MFPhoneModelLimitation")

	// Object: Function MFBaseModule.MFPhoneModelLimitation.UpdateMobileQCCConfig
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x9342394
	// Params: [ Num(0) Size(0x0) ]
	static void UpdateMobileQCCConfig();

	// Object: Function MFBaseModule.MFPhoneModelLimitation.SetUnknownDevice
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3e68a94
	// Params: [ Num(1) Size(0x1) ]
	static void SetUnknownDevice(bool bInUnknownDevice);

	// Object: Function MFBaseModule.MFPhoneModelLimitation.SetTargetDisplayRefreshRate
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x8bc1fec
	// Params: [ Num(2) Size(0x5) ]
	static bool SetTargetDisplayRefreshRate(int32_t TargetFramerate);

	// Object: Function MFBaseModule.MFPhoneModelLimitation.SetIsGPURangeMatchEnabled
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3e68b6c
	// Params: [ Num(1) Size(0x1) ]
	static void SetIsGPURangeMatchEnabled(bool bEnable);

	// Object: Function MFBaseModule.MFPhoneModelLimitation.SetGPUJudgedMobileLevel
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x984410c
	// Params: [ Num(1) Size(0x4) ]
	static void SetGPUJudgedMobileLevel(int32_t InGPULevel);

	// Object: Function MFBaseModule.MFPhoneModelLimitation.SetCurrentMobileLevel
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x98495cc
	// Params: [ Num(1) Size(0x4) ]
	static void SetCurrentMobileLevel(int32_t Level);

	// Object: Function MFBaseModule.MFPhoneModelLimitation.RawGetCurrentMobileLevel
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x97f47c0
	// Params: [ Num(1) Size(0x4) ]
	static int32_t RawGetCurrentMobileLevel();

	// Object: Function MFBaseModule.MFPhoneModelLimitation.NeedEnableAA
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3e68f08
	// Params: [ Num(1) Size(0x1) ]
	static bool NeedEnableAA();

	// Object: Function MFBaseModule.MFPhoneModelLimitation.IsYuenanClient
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x6b6db48
	// Params: [ Num(1) Size(0x1) ]
	static bool IsYuenanClient();

	// Object: Function MFBaseModule.MFPhoneModelLimitation.IsXiaomiClient
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3e68f40
	// Params: [ Num(1) Size(0x1) ]
	static bool IsXiaomiClient();

	// Object: Function MFBaseModule.MFPhoneModelLimitation.IsVeryVeryLowDevice
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3e68e60
	// Params: [ Num(1) Size(0x1) ]
	static bool IsVeryVeryLowDevice();

	// Object: Function MFBaseModule.MFPhoneModelLimitation.IsVeryLowDevice
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3e68e98
	// Params: [ Num(1) Size(0x1) ]
	static bool IsVeryLowDevice();

	// Object: Function MFBaseModule.MFPhoneModelLimitation.IsUnknownMobileLevel
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3e68b34
	// Params: [ Num(1) Size(0x1) ]
	static bool IsUnknownMobileLevel();

	// Object: Function MFBaseModule.MFPhoneModelLimitation.IsTaiwanClient
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x6b6e7c0
	// Params: [ Num(1) Size(0x1) ]
	static bool IsTaiwanClient();

	// Object: Function MFBaseModule.MFPhoneModelLimitation.IsLowPowerMode
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3e68d4c
	// Params: [ Num(1) Size(0x1) ]
	static bool IsLowPowerMode();

	// Object: Function MFBaseModule.MFPhoneModelLimitation.IsHuaweiClient
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3e68f78
	// Params: [ Num(1) Size(0x1) ]
	static bool IsHuaweiClient();

	// Object: Function MFBaseModule.MFPhoneModelLimitation.IsGlobalClient
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3e68fb0
	// Params: [ Num(1) Size(0x1) ]
	static bool IsGlobalClient();

	// Object: Function MFBaseModule.MFPhoneModelLimitation.IsFrameRateLevelSupported
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x85c5240
	// Params: [ Num(2) Size(0x5) ]
	static bool IsFrameRateLevelSupported(int32_t TargetFramerate);

	// Object: Function MFBaseModule.MFPhoneModelLimitation.IsConfigLoaded
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3e68ed0
	// Params: [ Num(1) Size(0x1) ]
	static bool IsConfigLoaded();

	// Object: Function MFBaseModule.MFPhoneModelLimitation.IsAndroidLite
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x996ee5c
	// Params: [ Num(1) Size(0x1) ]
	static bool IsAndroidLite();

	// Object: Function MFBaseModule.MFPhoneModelLimitation.IOSSetUpFrameRateCalculator
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x8b390f8
	// Params: [ Num(0) Size(0x0) ]
	static void IOSSetUpFrameRateCalculator();

	// Object: Function MFBaseModule.MFPhoneModelLimitation.InitMobileQCCConfig
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3e69020
	// Params: [ Num(0) Size(0x0) ]
	static void InitMobileQCCConfig();

	// Object: Function MFBaseModule.MFPhoneModelLimitation.GetModelName
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x849a8f8
	// Params: [ Num(1) Size(0x10) ]
	static struct FString GetModelName();

	// Object: Function MFBaseModule.MFPhoneModelLimitation.GetMobileMaxFrameRate
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x83a0dd8
	// Params: [ Num(1) Size(0x4) ]
	static int32_t GetMobileMaxFrameRate();

	// Object: Function MFBaseModule.MFPhoneModelLimitation.GetMobileLimition
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x930a564
	// Params: [ Num(1) Size(0x1) ]
	static bool GetMobileLimition();

	// Object: Function MFBaseModule.MFPhoneModelLimitation.GetMobileDeviceLevel
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x996ee94
	// Params: [ Num(1) Size(0x4) ]
	static int32_t GetMobileDeviceLevel();

	// Object: Function MFBaseModule.MFPhoneModelLimitation.GetMobileCurrentFrameRate
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x7fb7fb8
	// Params: [ Num(1) Size(0x4) ]
	static int32_t GetMobileCurrentFrameRate();

	// Object: Function MFBaseModule.MFPhoneModelLimitation.GetIsInMpeUse1cha1List
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3e68db8
	// Params: [ Num(1) Size(0x1) ]
	static bool GetIsInMpeUse1cha1List();

	// Object: Function MFBaseModule.MFPhoneModelLimitation.GetIsInList
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3e68c0c
	// Params: [ Num(2) Size(0x11) ]
	static bool GetIsInList(struct FString ListName);

	// Object: Function MFBaseModule.MFPhoneModelLimitation.GetIsInHighFPSBlackList
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x849f548
	// Params: [ Num(1) Size(0x1) ]
	static bool GetIsInHighFPSBlackList();

	// Object: Function MFBaseModule.MFPhoneModelLimitation.GetIsInFPS90WhiteList
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3e68e28
	// Params: [ Num(1) Size(0x1) ]
	static bool GetIsInFPS90WhiteList();

	// Object: Function MFBaseModule.MFPhoneModelLimitation.GetIsInFPS144WhiteList
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x8803dc8
	// Params: [ Num(1) Size(0x1) ]
	static bool GetIsInFPS144WhiteList();

	// Object: Function MFBaseModule.MFPhoneModelLimitation.GetIsInFPS120WhiteList
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3e68df0
	// Params: [ Num(1) Size(0x1) ]
	static bool GetIsInFPS120WhiteList();

	// Object: Function MFBaseModule.MFPhoneModelLimitation.GetIsGPURangeMatchEnabled
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x936c988
	// Params: [ Num(2) Size(0x2) ]
	static bool GetIsGPURangeMatchEnabled(bool bSet);

	// Object: Function MFBaseModule.MFPhoneModelLimitation.GetCurrentSceneResolution
	// Flags: [Final|Native|Static|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x3e68d18
	// Params: [ Num(1) Size(0x8) ]
	static struct FIntPoint GetCurrentSceneResolution();

	// Object: Function MFBaseModule.MFPhoneModelLimitation.GetCurrentFPS
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3e68d84
	// Params: [ Num(1) Size(0x4) ]
	static int32_t GetCurrentFPS();

	// Object: Function MFBaseModule.MFPhoneModelLimitation.CheckRayTracingWhiteList
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3e68fe8
	// Params: [ Num(1) Size(0x1) ]
	static bool CheckRayTracingWhiteList();
};

// Object: Class MFBaseModule.MFUObjectCheckTool
// Size: 0x28 (Inherited: 0x28)
struct UMFUObjectCheckTool : UObject
{
	DEFINE_UE_CLASS_HELPERS(UMFUObjectCheckTool, "MFUObjectCheckTool")

	// Object: Function MFBaseModule.MFUObjectCheckTool.CheckUObjectLeak
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x3e69174
	// Params: [ Num(2) Size(0x60) ]
	static struct TMap<struct FString, struct FString> CheckUObjectLeak(struct TArray<struct FString>& WhiteList);
};

} // namespace SDK
