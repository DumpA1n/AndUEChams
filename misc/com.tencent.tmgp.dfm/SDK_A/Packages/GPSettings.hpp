#pragma once

#include "../CoreUObject_classes.hpp"
#include "Engine.hpp"
#include "GameCore.hpp"

namespace SDK
{

// Package: GPSettings
// Enums: 9
// Structs: 15
// Classes: 4

struct FMemoryDeviceInfo;
struct FResizableBarInfo;
struct FDeviceTempInfo;
struct FMonitorInfoHD;
struct FDisplayModeHD;
struct FGPUDriverVersionHD;
struct FGPUDriverCompatibilityRowHD;
struct FGraphicsQualityMappingRowHD;
struct FMemoryBenchmarkRowHD;
struct FVRamBenchmarkRowHD;
struct FRamBenchmarkRowHD;
struct FGPUBenchmarkRowHD;
struct FCPUBenchmarkRowHD;
struct FHardwareBenchmarkRowHD;
struct FSystemInfoHD;
struct UGPScalabilityBlueprintTools;
struct UHardwareParamHelper;
struct UNvidiaDRSSetting;
struct UVideoSettingHelper;

// Object: Enum GPSettings.EMainFlowState
enum class EMainFlowState : uint8_t
{
	Default = 0,
	Lobby = 1,
	Loading = 2,
	SafeHouse = 3,
	InGame = 4,
	LobbyBHD = 5,
	EMainFlowState_MAX = 6
};

// Object: Enum GPSettings.EGPDriverCompatibilityHandleMethod
enum class EGPDriverCompatibilityHandleMethod : uint8_t
{
	Warning = 0,
	Block = 1,
	EGPDriverCompatibilityHandleMethod_MAX = 2
};

// Object: Enum GPSettings.EGPDriverCompatibilityVendorTypeHD
enum class EGPDriverCompatibilityVendorTypeHD : uint8_t
{
	None = 0,
	Nvidia = 1,
	AMD = 2,
	Intel = 4,
	EGPDriverCompatibilityVendorTypeHD_MAX = 5
};

// Object: Enum GPSettings.EGPDriverCompatibilityConditionTypeHD
enum class EGPDriverCompatibilityConditionTypeHD : uint8_t
{
	None = 0,
	Whitelist = 1,
	Blacklist = 2,
	EGPDriverCompatibilityConditionTypeHD_MAX = 3
};

// Object: Enum GPSettings.EGPDriverCompatibilityConditionOpHD
enum class EGPDriverCompatibilityConditionOpHD : uint8_t
{
	None = 0,
	G = 1,
	GE = 2,
	L = 3,
	LE = 4,
	E = 5,
	EGPDriverCompatibilityConditionOpHD_MAX = 6
};

// Object: Enum GPSettings.EGPUDriverSectionTypeHD
enum class EGPUDriverSectionTypeHD : uint8_t
{
	None = 0,
	WDDMVersion = 1,
	DXVersion = 2,
	BaseAndBuild = 3,
	FullVersion = 4,
	FullVersionV2 = 5,
	DriverDate = 6,
	EGPUDriverSectionTypeHD_MAX = 7
};

// Object: Enum GPSettings.EHardwareTypeHD
enum class EHardwareTypeHD : uint8_t
{
	None = 0,
	CPU = 1,
	GPU = 2,
	MEM = 3,
	EHardwareTypeHD_MAX = 4
};

// Object: Enum GPSettings.EGraphicsQualityLevelHD
enum class EGraphicsQualityLevelHD : uint8_t
{
	None = 0,
	INVALIDMEM = 1,
	INVALIDCPU = 2,
	INVALIDGPU = 3,
	BELOW = 4,
	LOW = 5,
	MID = 6,
	HIGH = 7,
	EPIC = 8,
	WILD = 9,
	EGraphicsQualityLevelHD_MAX = 10
};

// Object: Enum GPSettings.EGPUVendorHD
enum class EGPUVendorHD : uint8_t
{
	Other = 0,
	Nvidia = 1,
	AMD = 2,
	Intel = 3,
	EGPUVendorHD_MAX = 4
};

// Object: ScriptStruct GPSettings.MemoryDeviceInfo
// Size: 0x30 (Inherited: 0x0)
struct FMemoryDeviceInfo
{
	uint8_t Pad_0x0[0x30]; // 0x0(0x30)
};

// Object: ScriptStruct GPSettings.ResizableBarInfo
// Size: 0x2 (Inherited: 0x0)
struct FResizableBarInfo
{
	uint8_t bSupported : 1; // 0x0(0x1), Mask(0x1)
	uint8_t BitPad_0x0_1 : 7; // 0x0(0x1)
	uint8_t bEnabled : 1; // 0x1(0x1), Mask(0x1)
	uint8_t BitPad_0x1_1 : 7; // 0x1(0x1)
};

// Object: ScriptStruct GPSettings.DeviceTempInfo
// Size: 0x10 (Inherited: 0x0)
struct FDeviceTempInfo
{
	float CPUTemp; // 0x0(0x4)
	float MaxCPUTemp; // 0x4(0x4)
	float GPUTemp; // 0x8(0x4)
	float MaxGPUTemp; // 0xC(0x4)
};

// Object: ScriptStruct GPSettings.MonitorInfoHD
// Size: 0x78 (Inherited: 0x0)
struct FMonitorInfoHD
{
	struct FString MonitorID; // 0x0(0x10)
	struct FString MonitorName; // 0x10(0x10)
	uint8_t bIsCurrent : 1; // 0x20(0x1), Mask(0x1)
	uint8_t BitPad_0x20_1 : 7; // 0x20(0x1)
	uint8_t Pad_0x21[0x57]; // 0x21(0x57)
};

// Object: ScriptStruct GPSettings.DisplayModeHD
// Size: 0x20 (Inherited: 0x0)
struct FDisplayModeHD
{
	int32_t Width; // 0x0(0x4)
	int32_t Height; // 0x4(0x4)
	int32_t RefreshRate; // 0x8(0x4)
	int32_t AdapterID; // 0xC(0x4)
	struct FString MonitorID; // 0x10(0x10)
};

// Object: ScriptStruct GPSettings.GPUDriverVersionHD
// Size: 0x10 (Inherited: 0x0)
struct FGPUDriverVersionHD
{
	int32_t WDDM; // 0x0(0x4)
	int32_t DX; // 0x4(0x4)
	int32_t Base; // 0x8(0x4)
	int32_t Build; // 0xC(0x4)
};

// Object: ScriptStruct GPSettings.GPUDriverCompatibilityRowHD
// Size: 0x58 (Inherited: 0x10)
struct FGPUDriverCompatibilityRowHD : FDescRowBase
{
	EGPDriverCompatibilityConditionTypeHD ConditoinType; // 0x10(0x1)
	EGPUDriverSectionTypeHD SectionType; // 0x11(0x1)
	uint8_t Pad_0x12[0x2]; // 0x12(0x2)
	struct FGPUDriverVersionHD VersionValue; // 0x14(0x10)
	uint8_t Pad_0x24[0x4]; // 0x24(0x4)
	struct FString DriverDate; // 0x28(0x10)
	EGPDriverCompatibilityConditionOpHD ConditionOperator; // 0x38(0x1)
	uint8_t VendorType; // 0x39(0x1)
	uint8_t Pad_0x3A[0x6]; // 0x3A(0x6)
	struct TArray<struct FString> AdapterList; // 0x40(0x10)
	EGPDriverCompatibilityHandleMethod HandleMethod; // 0x50(0x1)
	uint8_t bOnlyPrimaryGPU : 1; // 0x51(0x1), Mask(0x1)
	uint8_t BitPad_0x51_1 : 7; // 0x51(0x1)
	uint8_t Pad_0x52[0x6]; // 0x52(0x6)
};

// Object: ScriptStruct GPSettings.GraphicsQualityMappingRowHD
// Size: 0x30 (Inherited: 0x10)
struct FGraphicsQualityMappingRowHD : FDescRowBase
{
	struct FName SettingID; // 0x10(0x8)
	int32_t Below; // 0x18(0x4)
	int32_t Low; // 0x1C(0x4)
	int32_t Mid; // 0x20(0x4)
	int32_t High; // 0x24(0x4)
	int32_t Epic; // 0x28(0x4)
	int32_t Wild; // 0x2C(0x4)
};

// Object: ScriptStruct GPSettings.MemoryBenchmarkRowHD
// Size: 0x18 (Inherited: 0x10)
struct FMemoryBenchmarkRowHD : FDescRowBase
{
	int32_t GB; // 0x10(0x4)
	EGraphicsQualityLevelHD Level; // 0x14(0x1)
	uint8_t Pad_0x15[0x3]; // 0x15(0x3)
};

// Object: ScriptStruct GPSettings.VRamBenchmarkRowHD
// Size: 0x18 (Inherited: 0x18)
struct FVRamBenchmarkRowHD : FMemoryBenchmarkRowHD
{
};

// Object: ScriptStruct GPSettings.RamBenchmarkRowHD
// Size: 0x18 (Inherited: 0x18)
struct FRamBenchmarkRowHD : FMemoryBenchmarkRowHD
{
};

// Object: ScriptStruct GPSettings.GPUBenchmarkRowHD
// Size: 0x68 (Inherited: 0x10)
struct FGPUBenchmarkRowHD : FDescRowBase
{
	struct FString Brand; // 0x10(0x10)
	struct FString Model; // 0x20(0x10)
	struct FString OfficialModel; // 0x30(0x10)
	EGraphicsQualityLevelHD RankValue; // 0x40(0x1)
	uint8_t Pad_0x41[0x3]; // 0x41(0x3)
	int32_t BenchmarkValue; // 0x44(0x4)
	int32_t VRam; // 0x48(0x4)
	int32_t platform; // 0x4C(0x4)
	uint8_t bSupported : 1; // 0x50(0x1), Mask(0x1)
	uint8_t BitPad_0x50_1 : 7; // 0x50(0x1)
	uint8_t Pad_0x51[0x7]; // 0x51(0x7)
	struct TArray<struct FString> OtherModels; // 0x58(0x10)
};

// Object: ScriptStruct GPSettings.CPUBenchmarkRowHD
// Size: 0x58 (Inherited: 0x10)
struct FCPUBenchmarkRowHD : FDescRowBase
{
	struct FString Brand; // 0x10(0x10)
	struct FString Model; // 0x20(0x10)
	EGraphicsQualityLevelHD RankValue; // 0x30(0x1)
	uint8_t Pad_0x31[0x3]; // 0x31(0x3)
	int32_t BenchmarkValue; // 0x34(0x4)
	int32_t SingleCoreScore; // 0x38(0x4)
	int32_t platform; // 0x3C(0x4)
	int32_t Cores; // 0x40(0x4)
	int32_t Threads; // 0x44(0x4)
	struct TArray<struct FString> OtherModels; // 0x48(0x10)
};

// Object: ScriptStruct GPSettings.HardwareBenchmarkRowHD
// Size: 0x48 (Inherited: 0x10)
struct FHardwareBenchmarkRowHD : FDescRowBase
{
	EHardwareTypeHD Type; // 0x10(0x1)
	uint8_t Pad_0x11[0x7]; // 0x11(0x7)
	struct FString Brand; // 0x18(0x10)
	struct FString Model; // 0x28(0x10)
	EGraphicsQualityLevelHD RankValue; // 0x38(0x1)
	uint8_t Pad_0x39[0x3]; // 0x39(0x3)
	int32_t BenchmarkValue; // 0x3C(0x4)
	int32_t platform; // 0x40(0x4)
	uint8_t Pad_0x44[0x4]; // 0x44(0x4)
};

// Object: ScriptStruct GPSettings.SystemInfoHD
// Size: 0x90 (Inherited: 0x0)
struct FSystemInfoHD
{
	struct FString OperatingSystemName; // 0x0(0x10)
	int32_t platform; // 0x10(0x4)
	uint8_t Pad_0x14[0x4]; // 0x14(0x4)
	struct FString CPUBrand; // 0x18(0x10)
	float CPUClockSpeed; // 0x28(0x4)
	int32_t CPUCores; // 0x2C(0x4)
	int32_t CPUThreads; // 0x30(0x4)
	int32_t Ram; // 0x34(0x4)
	int32_t CurrentGPU; // 0x38(0x4)
	uint8_t Pad_0x3C[0x4]; // 0x3C(0x4)
	struct FString GPUBrand; // 0x40(0x10)
	struct FString GPUDeviceID; // 0x50(0x10)
	struct FString GPUSubSysID; // 0x60(0x10)
	struct FString GPURevision; // 0x70(0x10)
	EGPUVendorHD GPUVendor; // 0x80(0x1)
	uint8_t Pad_0x81[0x3]; // 0x81(0x3)
	int32_t VRam; // 0x84(0x4)
	uint8_t bWithBattery : 1; // 0x88(0x1), Mask(0x1)
	uint8_t BitPad_0x88_1 : 7; // 0x88(0x1)
	uint8_t bIntegratedGPU : 1; // 0x89(0x1), Mask(0x1)
	uint8_t BitPad_0x89_1 : 7; // 0x89(0x1)
	uint8_t Pad_0x8A[0x6]; // 0x8A(0x6)
};

// Object: Class GPSettings.GPScalabilityBlueprintTools
// Size: 0x28 (Inherited: 0x28)
struct UGPScalabilityBlueprintTools : UBlueprintFunctionLibrary
{

	// Object: Function GPSettings.GPScalabilityBlueprintTools.SetMaxFPS
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0xae49fa0
	// Params: [ Num(1) Size(0x4) ]
	static void SetMaxFPS(float InMaxFPS);

	// Object: Function GPSettings.GPScalabilityBlueprintTools.SetMainFlowState
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0xfaaf784
	// Params: [ Num(1) Size(0x1) ]
	static void SetMainFlowState(EMainFlowState InCurrentMainFlowState);

	// Object: Function GPSettings.GPScalabilityBlueprintTools.SetGameQuality
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0xae49f0c
	// Params: [ Num(1) Size(0x4) ]
	static void SetGameQuality(int32_t InGameQualityLevel);

	// Object: Function GPSettings.GPScalabilityBlueprintTools.SetGameModeName
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0xae49e28
	// Params: [ Num(1) Size(0x10) ]
	static void SetGameModeName(struct FString InGameModeName);

	// Object: Function GPSettings.GPScalabilityBlueprintTools.SetGameMode
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0xae49d94
	// Params: [ Num(1) Size(0x4) ]
	static void SetGameMode(int32_t InGameMode);

	// Object: Function GPSettings.GPScalabilityBlueprintTools.GetMainFlowState
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0xae49d60
	// Params: [ Num(1) Size(0x1) ]
	static EMainFlowState GetMainFlowState();

	// Object: Function GPSettings.GPScalabilityBlueprintTools.GetGameQuality
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0xae49d2c
	// Params: [ Num(1) Size(0x4) ]
	static int32_t GetGameQuality();

	// Object: Function GPSettings.GPScalabilityBlueprintTools.GetGameMode
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0xae49cf8
	// Params: [ Num(1) Size(0x4) ]
	static int32_t GetGameMode();
	DEFINE_UE_CLASS_HELPERS(UGPScalabilityBlueprintTools, "GPScalabilityBlueprintTools")

};

// Object: Class GPSettings.HardwareParamHelper
// Size: 0x28 (Inherited: 0x28)
struct UHardwareParamHelper : UObject
{

	// Object: Function GPSettings.HardwareParamHelper.Warning
	// Flags: [Final|Native|Static|Public]
	// Offset: 0xae4b628
	// Params: [ Num(1) Size(0x10) ]
	static void Warning(struct FString InMessage);

	// Object: Function GPSettings.HardwareParamHelper.SetWorkingSetSize
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0xae4b55c
	// Params: [ Num(2) Size(0x8) ]
	static void SetWorkingSetSize(int32_t MiniWorkingSetSizeGB, int32_t MaxWorkingSetSizeGB);

	// Object: Function GPSettings.HardwareParamHelper.SetMemoryMiniSpeed
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0xae4b4c8
	// Params: [ Num(1) Size(0x4) ]
	static void SetMemoryMiniSpeed(int32_t Speed);

	// Object: Function GPSettings.HardwareParamHelper.PrintCurrentVideoMemoryInfo
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0xae4b4b4
	// Params: [ Num(0) Size(0x0) ]
	static void PrintCurrentVideoMemoryInfo();

	// Object: Function GPSettings.HardwareParamHelper.LogMemoryStat
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0xae4b4a0
	// Params: [ Num(0) Size(0x0) ]
	static void LogMemoryStat();

	// Object: Function GPSettings.HardwareParamHelper.Log
	// Flags: [Final|Native|Static|Public]
	// Offset: 0xae4b3e0
	// Params: [ Num(1) Size(0x10) ]
	static void Log(struct FString InMessage);

	// Object: Function GPSettings.HardwareParamHelper.IsMemoryEnough
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0xae4b338
	// Params: [ Num(2) Size(0x5) ]
	static uint8_t IsMemoryEnough(int32_t MemorySizeMB);

	// Object: Function GPSettings.HardwareParamHelper.IsMemoryBandWidthEnough
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0xae4b218
	// Params: [ Num(2) Size(0x11) ]
	static uint8_t IsMemoryBandWidthEnough(struct TArray<struct FMemoryDeviceInfo> MemoryArray);

	// Object: Function GPSettings.HardwareParamHelper.IsMeetMemoryStandards
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0xae4b1e0
	// Params: [ Num(1) Size(0x1) ]
	static uint8_t IsMeetMemoryStandards();

	// Object: Function GPSettings.HardwareParamHelper.IsHardDriveHDD
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0xae4b1a8
	// Params: [ Num(1) Size(0x1) ]
	static uint8_t IsHardDriveHDD();

	// Object: Function GPSettings.HardwareParamHelper.HasNVIDIADevice
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0xae4b170
	// Params: [ Num(1) Size(0x1) ]
	static uint8_t HasNVIDIADevice();

	// Object: Function GPSettings.HardwareParamHelper.GetTotalDedicatedVideoMemoryMB
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0xae4b13c
	// Params: [ Num(1) Size(0x4) ]
	static int32_t GetTotalDedicatedVideoMemoryMB();

	// Object: Function GPSettings.HardwareParamHelper.GetTotalBudgetVideoMemoryMB
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0xae4b108
	// Params: [ Num(1) Size(0x4) ]
	static int32_t GetTotalBudgetVideoMemoryMB();

	// Object: Function GPSettings.HardwareParamHelper.GetSystemHandleCount
	// Flags: [Final|Native|Static|Public]
	// Offset: 0xae4b0d4
	// Params: [ Num(1) Size(0x8) ]
	static uint64_t GetSystemHandleCount();

	// Object: Function GPSettings.HardwareParamHelper.GetPlatformPhysicalMemoryLeft
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0xae4b0a0
	// Params: [ Num(1) Size(0x4) ]
	static float GetPlatformPhysicalMemoryLeft();

	// Object: Function GPSettings.HardwareParamHelper.GetPlatformCommittedMemoryLeft
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0xae4b06c
	// Params: [ Num(1) Size(0x4) ]
	static float GetPlatformCommittedMemoryLeft();

	// Object: Function GPSettings.HardwareParamHelper.GetNumberOfCores
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0xae4b038
	// Params: [ Num(1) Size(0x4) ]
	static int32_t GetNumberOfCores();

	// Object: Function GPSettings.HardwareParamHelper.GetMemoryMiniSpeed
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0xae4b004
	// Params: [ Num(1) Size(0x4) ]
	static int32_t GetMemoryMiniSpeed();

	// Object: Function GPSettings.HardwareParamHelper.GetMemoryInfoInterface
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0xae4af94
	// Params: [ Num(1) Size(0x10) ]
	static struct TArray<struct FMemoryDeviceInfo> GetMemoryInfoInterface();

	// Object: Function GPSettings.HardwareParamHelper.GetGameUsedVideoMemory
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0xae4af60
	// Params: [ Num(1) Size(0x4) ]
	static float GetGameUsedVideoMemory();

	// Object: Function GPSettings.HardwareParamHelper.GetCurrentUsedVideoMemoryOnLogin
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0xae4af2c
	// Params: [ Num(1) Size(0x4) ]
	static float GetCurrentUsedVideoMemoryOnLogin();

	// Object: Function GPSettings.HardwareParamHelper.GetCurrentUsedVideoMemory_Deprecated
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0xae4aef8
	// Params: [ Num(1) Size(0x4) ]
	static float GetCurrentUsedVideoMemory_Deprecated();

	// Object: Function GPSettings.HardwareParamHelper.GetCurrentUsedVideoMemory
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0xae4aec4
	// Params: [ Num(1) Size(0x4) ]
	static float GetCurrentUsedVideoMemory();

	// Object: Function GPSettings.HardwareParamHelper.GetConsoleVariableRefIntValue
	// Flags: [Final|Native|Static|Public]
	// Offset: 0xf9d5580
	// Params: [ Num(2) Size(0x14) ]
	static int32_t GetConsoleVariableRefIntValue(struct FString VariableName);

	// Object: Function GPSettings.HardwareParamHelper.GetConsoleVariableRefFloatValue
	// Flags: [Final|Native|Static|Public]
	// Offset: 0xae4adf4
	// Params: [ Num(2) Size(0x14) ]
	static float GetConsoleVariableRefFloatValue(struct FString VariableName);

	// Object: Function GPSettings.HardwareParamHelper.GetConsoleVariableRefBoolValue
	// Flags: [Final|Native|Static|Public]
	// Offset: 0xf851bf8
	// Params: [ Num(2) Size(0x11) ]
	static uint8_t GetConsoleVariableRefBoolValue(struct FString VariableName);

	// Object: Function GPSettings.HardwareParamHelper.GetAvailablePageFileMB
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0xae4adc0
	// Params: [ Num(1) Size(0x4) ]
	static int32_t GetAvailablePageFileMB();

	// Object: Function GPSettings.HardwareParamHelper.GetAllMappedFileMemorySizeMB
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0xae4ac84
	// Params: [ Num(3) Size(0xC) ]
	static void GetAllMappedFileMemorySizeMB(uint8_t isPrintLog, float& OutCommittedMB, float& OutWorkingsetMB);

	// Object: Function GPSettings.HardwareParamHelper.GetAllImagesMemorySizeMB
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0xae4ab48
	// Params: [ Num(3) Size(0xC) ]
	static void GetAllImagesMemorySizeMB(uint8_t isPrintLog, float& OutCommittedMB, float& OutWorkingsetMB);

	// Object: Function GPSettings.HardwareParamHelper.Error
	// Flags: [Final|Native|Static|Public]
	// Offset: 0xae4aa88
	// Params: [ Num(1) Size(0x10) ]
	static void Error(struct FString InMessage);

	// Object: Function GPSettings.HardwareParamHelper.CrashSightSetCustomKeyValTypeI
	// Flags: [Final|Native|Static|Public]
	// Offset: 0xae4a92c
	// Params: [ Num(2) Size(0x20) ]
	static void CrashSightSetCustomKeyValTypeI(struct FString CustomKey, struct FString CustomValue);

	// Object: Function GPSettings.HardwareParamHelper.CrashSightSetCustomKeyVal
	// Flags: [Final|Native|Static|Public]
	// Offset: 0xae4a7d0
	// Params: [ Num(2) Size(0x20) ]
	static void CrashSightSetCustomKeyVal(struct FString CustomKey, struct FString CustomValue);

	// Object: Function GPSettings.HardwareParamHelper.CheckHardDriveType
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0xae4a718
	// Params: [ Num(2) Size(0x2) ]
	static uint8_t CheckHardDriveType(uint8_t& isHDD);

	// Object: Function GPSettings.HardwareParamHelper.ApplyCVarSettings
	// Flags: [Final|Native|Static|Public]
	// Offset: 0xae4a580
	// Params: [ Num(4) Size(0x25) ]
	static void ApplyCVarSettings(struct FString InSectionBaseName, struct FString InIniFilename, uint32_t SetBy, uint8_t bAllowCheating);

	// Object: Function GPSettings.HardwareParamHelper.AddXMemTransferMemoryOnlyOnce
	// Flags: [Final|Native|Static|Public]
	// Offset: 0xae4a4ec
	// Params: [ Num(1) Size(0x4) ]
	static void AddXMemTransferMemoryOnlyOnce(int32_t var);

	// Object: Function GPSettings.HardwareParamHelper.AddXMemTransferMemory
	// Flags: [Final|Native|Static|Public]
	// Offset: 0xae4a458
	// Params: [ Num(1) Size(0x4) ]
	static void AddXMemTransferMemory(int32_t var);
	DEFINE_UE_CLASS_HELPERS(UHardwareParamHelper, "HardwareParamHelper")

};

// Object: Class GPSettings.NvidiaDRSSetting
// Size: 0x28 (Inherited: 0x28)
struct UNvidiaDRSSetting : UObject
{	DEFINE_UE_CLASS_HELPERS(UNvidiaDRSSetting, "NvidiaDRSSetting")

};

// Object: Class GPSettings.VideoSettingHelper
// Size: 0x28 (Inherited: 0x28)
struct UVideoSettingHelper : UObject
{

	// Object: Function GPSettings.VideoSettingHelper.WithACLine
	// Flags: [Final|Native|Static|Public]
	// Offset: 0xae4deb4
	// Params: [ Num(1) Size(0x1) ]
	static uint8_t WithACLine();

	// Object: Function GPSettings.VideoSettingHelper.UsingIntegratedIntelGPU
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0xae4dcec
	// Params: [ Num(3) Size(0x21) ]
	static uint8_t UsingIntegratedIntelGPU(struct FString InAdatpterName, struct TArray<struct FString> InNameList);

	// Object: Function GPSettings.VideoSettingHelper.ParseMonthDayYearDate
	// Flags: [Final|Native|Static|Public|HasDefaults|BlueprintCallable]
	// Offset: 0xae4dc18
	// Params: [ Num(2) Size(0x18) ]
	static struct FDateTime ParseMonthDayYearDate(struct FString DateString);

	// Object: Function GPSettings.VideoSettingHelper.ParseGPUDriverHD
	// Flags: [Final|Native|Static|Public]
	// Offset: 0xae4db20
	// Params: [ Num(2) Size(0x20) ]
	static struct FGPUDriverVersionHD ParseGPUDriverHD(struct FString VersionStr);

	// Object: Function GPSettings.VideoSettingHelper.OnlyOneIntegratedAdapter
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0xae4dae8
	// Params: [ Num(1) Size(0x1) ]
	static uint8_t OnlyOneIntegratedAdapter();

	// Object: Function GPSettings.VideoSettingHelper.MarkResolutionForceRefresh
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0xae4dad4
	// Params: [ Num(0) Size(0x0) ]
	static void MarkResolutionForceRefresh();

	// Object: Function GPSettings.VideoSettingHelper.LogSystemInfo
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0xae4dac0
	// Params: [ Num(0) Size(0x0) ]
	static void LogSystemInfo();

	// Object: Function GPSettings.VideoSettingHelper.IsWindowsVerOrGreater
	// Flags: [Final|Native|Static|Public]
	// Offset: 0xae4d9a4
	// Params: [ Num(4) Size(0xD) ]
	static uint8_t IsWindowsVerOrGreater(int32_t InMajorVer, int32_t InMinorVer, int32_t InBuildVer);

	// Object: Function GPSettings.VideoSettingHelper.IsValidGPUDriverVersionHD
	// Flags: [Final|Native|Static|Public|HasOutParms]
	// Offset: 0xae4d718
	// Params: [ Num(6) Size(0x33) ]
	static uint8_t IsValidGPUDriverVersionHD(struct FString VersionStr, struct FString DateStr, struct FString AdapterName, uint8_t bBHD, EGPDriverCompatibilityHandleMethod& OutHandleMethod);

	// Object: Function GPSettings.VideoSettingHelper.IsSystemConfigEpic
	// Flags: [Final|Native|Static|Public]
	// Offset: 0xae4d6e0
	// Params: [ Num(1) Size(0x1) ]
	static uint8_t IsSystemConfigEpic();

	// Object: Function GPSettings.VideoSettingHelper.IsRHIUseDualGPU
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0xae4d6a8
	// Params: [ Num(1) Size(0x1) ]
	static uint8_t IsRHIUseDualGPU();

	// Object: Function GPSettings.VideoSettingHelper.IsGPUSupportedHD
	// Flags: [Final|Native|Static|Public]
	// Offset: 0xae4d670
	// Params: [ Num(1) Size(0x1) ]
	static uint8_t IsGPUSupportedHD();

	// Object: Function GPSettings.VideoSettingHelper.GetVRamBenchmarkLevelHD
	// Flags: [Final|Native|Static|Public]
	// Offset: 0xae4d5cc
	// Params: [ Num(2) Size(0x5) ]
	static EGraphicsQualityLevelHD GetVRamBenchmarkLevelHD(int32_t VRam);

	// Object: Function GPSettings.VideoSettingHelper.GetSystemInfoHD
	// Flags: [Final|Native|Static|Public]
	// Offset: 0xae4d528
	// Params: [ Num(1) Size(0x90) ]
	static struct FSystemInfoHD GetSystemInfoHD();

	// Object: Function GPSettings.VideoSettingHelper.GetSystemConfigValueHD
	// Flags: [Final|Native|Static|Public]
	// Offset: 0xae4d4f4
	// Params: [ Num(1) Size(0x1) ]
	static EGraphicsQualityLevelHD GetSystemConfigValueHD();

	// Object: Function GPSettings.VideoSettingHelper.GetResizableBarInfo
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0xae4d4c0
	// Params: [ Num(1) Size(0x2) ]
	static struct FResizableBarInfo GetResizableBarInfo();

	// Object: Function GPSettings.VideoSettingHelper.GetRamBenchmarkLevelHD
	// Flags: [Final|Native|Static|Public]
	// Offset: 0xae4d41c
	// Params: [ Num(2) Size(0x5) ]
	static EGraphicsQualityLevelHD GetRamBenchmarkLevelHD(int32_t RamGB);

	// Object: Function GPSettings.VideoSettingHelper.GetPureResolutionList
	// Flags: [Final|Native|Static|Public|HasOutParms]
	// Offset: 0xae4d304
	// Params: [ Num(2) Size(0x20) ]
	static struct TArray<struct FIntPoint> GetPureResolutionList(const struct TArray<struct FDisplayModeHD>& DisplayModes);

	// Object: Function GPSettings.VideoSettingHelper.GetMonitorInfos
	// Flags: [Final|Native|Static|Public]
	// Offset: 0xae4d270
	// Params: [ Num(1) Size(0x10) ]
	static struct TArray<struct FMonitorInfoHD> GetMonitorInfos();

	// Object: Function GPSettings.VideoSettingHelper.GetMonitorInfoByID
	// Flags: [Final|Native|Static|Public|HasOutParms]
	// Offset: 0xae4d0f4
	// Params: [ Num(3) Size(0x89) ]
	static uint8_t GetMonitorInfoByID(struct FString MonitorID, struct FMonitorInfoHD& OutInfo);

	// Object: Function GPSettings.VideoSettingHelper.GetGPUDriverVersionHD
	// Flags: [Final|Native|Static|Public]
	// Offset: 0xae4cfc8
	// Params: [ Num(2) Size(0x20) ]
	static struct FString GetGPUDriverVersionHD(struct FString AdapterName);

	// Object: Function GPSettings.VideoSettingHelper.GetGPUDriverDateHD
	// Flags: [Final|Native|Static|Public]
	// Offset: 0xae4ce9c
	// Params: [ Num(2) Size(0x20) ]
	static struct FString GetGPUDriverDateHD(struct FString AdapterName);

	// Object: Function GPSettings.VideoSettingHelper.GetGPUBenchmarkLevelHD
	// Flags: [Final|Native|Static|Public]
	// Offset: 0xae4cd60
	// Params: [ Num(3) Size(0x12) ]
	static EGraphicsQualityLevelHD GetGPUBenchmarkLevelHD(struct FString GPUBrand, uint8_t bIntegratedGPU);

	// Object: Function GPSettings.VideoSettingHelper.GetGPUBenchmarkHD
	// Flags: [Final|Native|Static|Public]
	// Offset: 0xae4cd2c
	// Params: [ Num(1) Size(0x4) ]
	static int32_t GetGPUBenchmarkHD();

	// Object: Function GPSettings.VideoSettingHelper.GetGPUBenchmarkByNameHD
	// Flags: [Final|Native|Static|Public]
	// Offset: 0xae4cc5c
	// Params: [ Num(2) Size(0x14) ]
	static int32_t GetGPUBenchmarkByNameHD(struct FString InGPU);

	// Object: Function GPSettings.VideoSettingHelper.GetGFrame
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0xae4cc28
	// Params: [ Num(1) Size(0x8) ]
	static int64_t GetGFrame();

	// Object: Function GPSettings.VideoSettingHelper.GetDisplayModes
	// Flags: [Final|Native|Static|Public]
	// Offset: 0xae4caf4
	// Params: [ Num(3) Size(0x28) ]
	static struct TArray<struct FDisplayModeHD> GetDisplayModes(int32_t AdapterID, struct FString MonitorID);

	// Object: Function GPSettings.VideoSettingHelper.GetDeviceTempInfo
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0xae4cabc
	// Params: [ Num(1) Size(0x10) ]
	static struct FDeviceTempInfo GetDeviceTempInfo();

	// Object: Function GPSettings.VideoSettingHelper.GetCPUBenchmarkLevelHD
	// Flags: [Final|Native|Static|Public]
	// Offset: 0xae4c9c8
	// Params: [ Num(2) Size(0x11) ]
	static EGraphicsQualityLevelHD GetCPUBenchmarkLevelHD(struct FString CPUBrand);

	// Object: Function GPSettings.VideoSettingHelper.GetBenchmarkLevelHD
	// Flags: [Final|Native|Static|Public]
	// Offset: 0xae4c994
	// Params: [ Num(1) Size(0x1) ]
	static EGraphicsQualityLevelHD GetBenchmarkLevelHD();

	// Object: Function GPSettings.VideoSettingHelper.FetchDisplayModes
	// Flags: [Final|Native|Static|Public]
	// Offset: 0xae4c900
	// Params: [ Num(1) Size(0x4) ]
	static void FetchDisplayModes(int32_t ChosenAdapter);

	// Object: Function GPSettings.VideoSettingHelper.EnableMinimize
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0xae4c8ec
	// Params: [ Num(0) Size(0x0) ]
	static void EnableMinimize();

	// Object: Function GPSettings.VideoSettingHelper.CheckGPUDriverVersionV2
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0xae4c694
	// Params: [ Num(6) Size(0x39) ]
	static uint8_t CheckGPUDriverVersionV2(uint8_t bBHD, EGPDriverCompatibilityHandleMethod& OutHandleMethod, struct FString& OutAdapterName, struct FString& OutDriverVersion, struct FString& OutDriverDate);

	// Object: Function GPSettings.VideoSettingHelper.CheckGPUDriverVersion
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0xae4c65c
	// Params: [ Num(1) Size(0x1) ]
	static uint8_t CheckGPUDriverVersion();

	// Object: Function GPSettings.VideoSettingHelper.AnyGPUSupportedHD
	// Flags: [Final|Native|Static|Public]
	// Offset: 0xae4c624
	// Params: [ Num(1) Size(0x1) ]
	static uint8_t AnyGPUSupportedHD();
	DEFINE_UE_CLASS_HELPERS(UVideoSettingHelper, "VideoSettingHelper")

};

} // namespace SDK
