#pragma once

#include "../CoreUObject_classes.hpp"
#include "Engine.hpp"

namespace SDK
{

// Package: PerfGear
// Enums: 20
// Structs: 37
// Classes: 13

enum class EPSCPoolMethod : uint8_t;
enum class EParticleSystemLODMethod : uint8_t;
struct FParticleSysParam;
struct UDataTable;
struct UParticleSystem;
struct UParticleSystemComponent;
struct FFXInstanceParams;
struct FFXInstance;
struct FEffectTODDataRow;
struct FIOSPerfGearBlackListStructure;
struct FPerfGearConsoleItem;
struct FPerfGearConsoleCommand;
struct FPerfGearCompareMemory;
struct FPerfGearVersion;
struct FPerfGearCompareVersion;
struct FOpenHarmonyPerfGearBlackListStructure;
struct FAndroidPerfGearBlackListStructure;
struct FPerfGearDefaultQualityAndFPS;
struct FPerfGearDefaultQualityAndFPSStructure;
struct FPerfGearFeatureData;
struct FPerfGearIOSDeviceFeatureStructure;
struct FOpenHarmonyGPUFeatureStructure;
struct FPerfGearOpenHarmonyDeviceFeatureStructure;
struct FAndroidGPUFeatureStructure;
struct FPerfGearAndroidDeviceFeatureStructure;
struct FPerfGearExternalStructure;
struct FPerfGearExternalMapWithGroup;
struct FFakeQualityLevelSetting;
struct FModeSwitchItem;
struct FPerfGearStructure;
struct FPSClampSetting;
struct FLowMemoryFeatureRow;
struct FPerfGearMemoryFeatureRow;
struct FDeviceFeatureItem;
struct FDeviceLevelFeatureStruct;
struct FPerfGearDeviceLevelFeature;
struct FFpsConfig;
struct FQualityFpsSetting;
struct FOpenHarmonyPadResolutionConfig;
struct FGPMOpenHarmonyPadSizeConfig;
struct FAndroidPadResolutionConfig;
struct FGPMAndroidPadSizeConfig;
struct FPGPlatformInfoMsg;
struct AFXProxyActor;
struct UFXProxyActorManager;
struct UDeviceFakeQualityConfig;
struct UDeviceFakeQualityConfigOverSeas;
struct UPerfGearMode;
struct UPerfGearPipeline;
struct UPerfGearFuncLib;
struct UPerfGearAndroidPadSizeConfig;
struct UPerfGearOpenHarmonyPadSizeConfig;
struct UPerfGearPlatformConfig;
struct UPerfGearPlatformConfigOverSeas;
struct UPerfGearQualityFPSManager;
struct ULowMemoryQualityManager;

// Object: Enum PerfGear.EPerfGearQualityLevel
enum class EPerfGearQualityLevel : uint8_t
{
	EQuality_VeryLow = 0,
	EQuality_Low = 1,
	EQuality_Medium = 2,
	EQuality_High = 3,
	EQuality_VeryHigh = 4,
	EQuality_TotalNum = 5,
	EQuality_Custom90 = 6,
	EQuality_Custom120 = 7,
	EQuality_Custom144 = 8,
	EQuality_CustomQuality1 = 9,
	EQuality_Custom165 = 10,
	EQuality_CustomTotal = 11,
	EQuality_MAX = 12
};

// Object: Enum PerfGear.ELowFpsOP
enum class ELowFpsOP : uint8_t
{
	EHighToLow = 0,
	ELowToHigh = 1,
	ELowFpsOP_MAX = 2
};

// Object: Enum PerfGear.EFXVisibleState
enum class EFXVisibleState : uint8_t
{
	Override = 0,
	TOD = 1,
	DES = 2,
	Light = 3,
	Num = 4,
	EFXVisibleState_MAX = 5
};

// Object: Enum PerfGear.EFXQualityLevel
enum class EFXQualityLevel : uint8_t
{
	None = 0,
	Low = 1,
	Middle = 2,
	High = 3,
	Num = 4,
	EFXQualityLevel_MAX = 5
};

// Object: Enum PerfGear.EPerfGearOSType
enum class EPerfGearOSType : uint16_t
{
	DontCare = 0,
	iOS = 1,
	Android = 2,
	OpenHarmony = 3,
	Switch = 4,
	Windows = 128,
	Linux = 129,
	MacOS = 130,
	XBox = 192,
	PlayStation = 193,
	WebOS = 194,
	Unknown = 255,
	EPerfGearOSType_MAX = 256
};

// Object: Enum PerfGear.EPerfGearRHIType
enum class EPerfGearRHIType : uint8_t
{
	Unknow = 0,
	Metal = 3,
	Vulkan = 4,
	OpenGLES = 5,
	EPerfGearRHIType_MAX = 6
};

// Object: Enum PerfGear.EPerfGearCompareType
enum class EPerfGearCompareType : uint8_t
{
	EQUAL = 0,
	NOT_EQUAL = 1,
	LESS = 2,
	GREATER = 3,
	LESS_OR_EQUALTO = 4,
	GREATER_OR_EQUALTO = 5,
	EPerfGearCompareType_MAX = 6
};

// Object: Enum PerfGear.EPerfGearLogicType
enum class EPerfGearLogicType : uint8_t
{
	LOGICTYPE_OR = 0,
	LOGICTYPE_AND = 1,
	LOGICTYPE_MAX = 2
};

// Object: Enum PerfGear.EPerfGearInternalLevel
enum class EPerfGearInternalLevel : uint8_t
{
	ELevel1 = 0,
	ELevel2 = 1,
	ELevel3 = 2,
	ELevel4 = 3,
	ELevel5 = 4,
	ELevel6 = 5,
	ELevel_TotalNum = 6,
	ELevelCustom90 = 7,
	ELevelCustom120 = 8,
	ELevelCustom144 = 9,
	ELevelCustom165 = 10,
	ELevel_CustomTotal = 11,
	EPerfGearInternalLevel_MAX = 12
};

// Object: Enum PerfGear.ESwitchStatus
enum class ESwitchStatus : uint8_t
{
	ESwitchStatus_OFF = 0,
	ESwitchStatus_ON = 1,
	ESwitchStatus_MAX = 2
};

// Object: Enum PerfGear.EModeSwitchType
enum class EModeSwitchType : uint8_t
{
	ESwitchOffCustom = 0,
	ESwitchOverride = 1,
	EModeSwitchType_MAX = 2
};

// Object: Enum PerfGear.ERHIType
enum class ERHIType : uint8_t
{
	Unknown = 0,
	D3D11 = 1,
	D3D12 = 2,
	Metal = 3,
	Vulkan = 4,
	OpenGLES = 5,
	ERHIType_MAX = 6
};

// Object: Enum PerfGear.ELowFpsType
enum class ELowFpsType : uint8_t
{
	EUI = 0,
	ECUTSCENE = 1,
	EIMPENDINGDEATH = 2,
	EDEATH = 3,
	ERedeploy = 4,
	ESetting = 5,
	ELowFpsType_MAX = 6
};

// Object: Enum PerfGear.EBlackVarType
enum class EBlackVarType : uint8_t
{
	EBV_ALLLEVEL = 0,
	EBV_SUBLEVEL = 1,
	EBV_MAX = 2
};

// Object: Enum PerfGear.EBlackVarPriority
enum class EBlackVarPriority : uint8_t
{
	EBLACK_HIGHEST = 0,
	EBLACK_UNDER_SWITCH = 1,
	EBLACK_MAX = 2
};

// Object: Enum PerfGear.ELowMemoryFeatureExecuteFlag
enum class ELowMemoryFeatureExecuteFlag : uint8_t
{
	OVERRIDE = 0,
	NEW = 1,
	ELowMemoryFeatureExecuteFlag_MAX = 2
};

// Object: Enum PerfGear.EOpenHarmonyPadSizeType
enum class EOpenHarmonyPadSizeType : uint8_t
{
	PADSIZE_SMALL = 0,
	PADSIZE_MID = 1,
	PADSIZE_BIG = 2,
	PADSIZE_MAX = 3
};

// Object: Enum PerfGear.EAndroidPadSizeType
enum class EAndroidPadSizeType : uint8_t
{
	PADSIZE_SMALL = 0,
	PADSIZE_MID = 1,
	PADSIZE_BIG = 2,
	PADSIZE_MAX = 3
};

// Object: Enum PerfGear.EDeviceMemoryType
enum class EDeviceMemoryType : uint8_t
{
	MEMORY_NORMAL = 0,
	MEMORY_LOW = 1,
	MEMORY_VERYLOW = 2,
	MEMORY_UNKNOWN = 3,
	MEMORY_MAX = 4
};

// Object: Enum PerfGear.EQaulityFpsStatus
enum class EQaulityFpsStatus : uint8_t
{
	ENABLE = 0,
	DISABLE = 1,
	UNSUPPORT = 2,
	EQaulityFpsStatus_MAX = 3
};

// Object: ScriptStruct PerfGear.FXInstanceParams
// Size: 0x20 (Inherited: 0x0)
struct FFXInstanceParams
{
	struct TArray<struct FParticleSysParam> ParticleParams; // 0x0(0x10)
	EPSCPoolMethod PoolingMethod; // 0x10(0x1)
	uint8_t bOverrideLod : 1; // 0x11(0x1), Mask(0x1)
	uint8_t BitPad_0x11_1 : 7; // 0x11(0x1)
	uint8_t Pad_0x12[0x2]; // 0x12(0x2)
	int32_t TranslucencySortPriority; // 0x14(0x4)
	EParticleSystemLODMethod LODMethod; // 0x18(0x1)
	uint8_t Pad_0x19[0x7]; // 0x19(0x7)
};

// Object: ScriptStruct PerfGear.FXInstance
// Size: 0x48 (Inherited: 0x0)
struct FFXInstance
{
	struct TSoftObjectPtr<UParticleSystem> Template; // 0x0(0x28)
	struct FFXInstanceParams InstanceParams; // 0x28(0x20)
};

// Object: ScriptStruct PerfGear.EffectTODDataRow
// Size: 0x30 (Inherited: 0x8)
struct FEffectTODDataRow : FTableRowBase
{
	struct FString WeatherDesc; // 0x8(0x10)
	int32_t WeatherType; // 0x18(0x4)
	uint8_t Pad_0x1C[0x4]; // 0x1C(0x4)
	struct TArray<int32_t> TODIDs; // 0x20(0x10)
};

// Object: ScriptStruct PerfGear.IOSPerfGearBlackListStructure
// Size: 0x58 (Inherited: 0x8)
struct FIOSPerfGearBlackListStructure : FTableRowBase
{
	struct FString DeviceName; // 0x8(0x10)
	struct TArray<struct FPerfGearCompareVersion> CompareVersions; // 0x18(0x10)
	struct TArray<struct FPerfGearCompareMemory> CompareMemory; // 0x28(0x10)
	struct TArray<struct FPerfGearConsoleCommand> ConsoleList; // 0x38(0x10)
	struct TArray<struct FPerfGearConsoleItem> PerfgearConsoleItems; // 0x48(0x10)
};

// Object: ScriptStruct PerfGear.PerfGearConsoleItem
// Size: 0x80 (Inherited: 0x0)
struct FPerfGearConsoleItem
{
	struct FString ConsoleItemName; // 0x0(0x10)
	struct FString UltraLowValue; // 0x10(0x10)
	struct FString LowValue; // 0x20(0x10)
	struct FString MidValue; // 0x30(0x10)
	struct FString HighValue; // 0x40(0x10)
	struct FString UltraHighValue; // 0x50(0x10)
	struct FString SuperValue; // 0x60(0x10)
	struct TArray<struct FString> ModeNames; // 0x70(0x10)
};

// Object: ScriptStruct PerfGear.PerfGearConsoleCommand
// Size: 0x20 (Inherited: 0x0)
struct FPerfGearConsoleCommand
{
	struct FString ConsoleName; // 0x0(0x10)
	struct FString ConsoleValue; // 0x10(0x10)
};

// Object: ScriptStruct PerfGear.PerfGearCompareMemory
// Size: 0x8 (Inherited: 0x0)
struct FPerfGearCompareMemory
{
	EPerfGearLogicType LogcType; // 0x0(0x1)
	EPerfGearCompareType CompareType; // 0x1(0x1)
	uint8_t Pad_0x2[0x2]; // 0x2(0x2)
	int32_t MemoryInGB; // 0x4(0x4)
};

// Object: ScriptStruct PerfGear.PerfGearVersion
// Size: 0xC (Inherited: 0x0)
struct FPerfGearVersion
{
	int32_t MajorVersion; // 0x0(0x4)
	int32_t MinorVersion; // 0x4(0x4)
	int32_t PatchVersion; // 0x8(0x4)
};

// Object: ScriptStruct PerfGear.PerfGearCompareVersion
// Size: 0x10 (Inherited: 0x0)
struct FPerfGearCompareVersion
{
	EPerfGearLogicType LogcType; // 0x0(0x1)
	EPerfGearCompareType CompareType; // 0x1(0x1)
	uint8_t Pad_0x2[0x2]; // 0x2(0x2)
	struct FPerfGearVersion Version; // 0x4(0xC)
};

// Object: ScriptStruct PerfGear.OpenHarmonyPerfGearBlackListStructure
// Size: 0x80 (Inherited: 0x8)
struct FOpenHarmonyPerfGearBlackListStructure : FTableRowBase
{
	struct FString GPUName; // 0x8(0x10)
	struct FString DeviceName; // 0x18(0x10)
	EPerfGearRHIType RHIType; // 0x28(0x1)
	uint8_t Pad_0x29[0x7]; // 0x29(0x7)
	struct TArray<struct FPerfGearCompareVersion> CompareVersions; // 0x30(0x10)
	struct TArray<struct FPerfGearCompareMemory> CompareMemory; // 0x40(0x10)
	struct TArray<struct FPerfGearCompareVersion> CompareDriverVersions; // 0x50(0x10)
	struct TArray<struct FPerfGearConsoleCommand> ConsoleList; // 0x60(0x10)
	struct TArray<struct FPerfGearConsoleItem> PerfgearConsoleItems; // 0x70(0x10)
};

// Object: ScriptStruct PerfGear.AndroidPerfGearBlackListStructure
// Size: 0x80 (Inherited: 0x8)
struct FAndroidPerfGearBlackListStructure : FTableRowBase
{
	struct FString GPUName; // 0x8(0x10)
	struct FString DeviceName; // 0x18(0x10)
	EPerfGearRHIType RHIType; // 0x28(0x1)
	EPerfGearOSType OSType; // 0x29(0x1)
	uint8_t Pad_0x2A[0x6]; // 0x2A(0x6)
	struct TArray<struct FPerfGearCompareVersion> CompareVersions; // 0x30(0x10)
	struct TArray<struct FPerfGearCompareMemory> CompareMemory; // 0x40(0x10)
	struct TArray<struct FPerfGearCompareVersion> CompareDriverVersions; // 0x50(0x10)
	struct TArray<struct FPerfGearConsoleCommand> ConsoleList; // 0x60(0x10)
	struct TArray<struct FPerfGearConsoleItem> PerfgearConsoleItems; // 0x70(0x10)
};

// Object: ScriptStruct PerfGear.PerfGearDefaultQualityAndFPS
// Size: 0x2 (Inherited: 0x0)
struct FPerfGearDefaultQualityAndFPS
{
	EPerfGearQualityLevel DefaultQualityLevel; // 0x0(0x1)
	EPerfGearQualityLevel DefaultFPSLevel; // 0x1(0x1)
};

// Object: ScriptStruct PerfGear.PerfGearDefaultQualityAndFPSStructure
// Size: 0x30 (Inherited: 0x8)
struct FPerfGearDefaultQualityAndFPSStructure : FTableRowBase
{
	struct FPerfGearDefaultQualityAndFPS DefaultQualityAndFPS; // 0x8(0x2)
	uint8_t Pad_0xA[0x6]; // 0xA(0x6)
	struct TArray<struct FString> DeviceNames; // 0x10(0x10)
	struct TArray<struct FString> GPUNames; // 0x20(0x10)
};

// Object: ScriptStruct PerfGear.PerfGearFeatureData
// Size: 0xC0 (Inherited: 0x0)
struct FPerfGearFeatureData
{
	int32_t DefaultQualityLevel; // 0x0(0x4)
	int32_t DefaultFPSLevel; // 0x4(0x4)
	int32_t MaxQualityLevel; // 0x8(0x4)
	int32_t SuperQualityFPS; // 0xC(0x4)
	int32_t QualityVeryHighFPS; // 0x10(0x4)
	int32_t QualityHighFPS; // 0x14(0x4)
	int32_t QualityMediumFPS; // 0x18(0x4)
	int32_t QualityLowFPS; // 0x1C(0x4)
	int32_t QualityVeryLowFPS; // 0x20(0x4)
	int32_t MSAACount; // 0x24(0x4)
	int32_t BackBufferResoution; // 0x28(0x4)
	int32_t QualitySuperResolution; // 0x2C(0x4)
	int32_t QualityVeryHighResolution; // 0x30(0x4)
	int32_t QualityHighResolution; // 0x34(0x4)
	int32_t QualityMediumResolution; // 0x38(0x4)
	int32_t QualityLowResolution; // 0x3C(0x4)
	int32_t QualityVeryLowResolution; // 0x40(0x4)
	int32_t QualitySuperFSR; // 0x44(0x4)
	int32_t QualityVeryHighFSR; // 0x48(0x4)
	int32_t QualityHighFSR; // 0x4C(0x4)
	int32_t QualityMediumpFSR; // 0x50(0x4)
	int32_t QualityLowFSR; // 0x54(0x4)
	int32_t QualityVeryLowFSR; // 0x58(0x4)
	int32_t VRSDrawcall; // 0x5C(0x4)
	int32_t VRSMask; // 0x60(0x4)
	int32_t VRRM; // 0x64(0x4)
	int32_t LowMemoryDeviceType; // 0x68(0x4)
	uint8_t Pad_0x6C[0x4]; // 0x6C(0x4)
	struct TMap<struct FString, struct FString> DeviceConsoleList; // 0x70(0x50)
};

// Object: ScriptStruct PerfGear.PerfGearIOSDeviceFeatureStructure
// Size: 0xE8 (Inherited: 0x8)
struct FPerfGearIOSDeviceFeatureStructure : FTableRowBase
{
	struct FString DeviceName; // 0x8(0x10)
	struct FString IOSVersion; // 0x18(0x10)
	struct FPerfGearFeatureData FeatureData; // 0x28(0xC0)
};

// Object: ScriptStruct PerfGear.OpenHarmonyGPUFeatureStructure
// Size: 0x108 (Inherited: 0x8)
struct FOpenHarmonyGPUFeatureStructure : FTableRowBase
{
	struct FString GPUName; // 0x8(0x10)
	struct FString VendorName; // 0x18(0x10)
	struct FString DeviceName; // 0x28(0x10)
	struct FString OpenHarmonyVersionName; // 0x38(0x10)
	struct FPerfGearFeatureData FeatureData; // 0x48(0xC0)
};

// Object: ScriptStruct PerfGear.PerfGearOpenHarmonyDeviceFeatureStructure
// Size: 0xF8 (Inherited: 0x8)
struct FPerfGearOpenHarmonyDeviceFeatureStructure : FTableRowBase
{
	struct FString DeviceName; // 0x8(0x10)
	struct FString VendorName; // 0x18(0x10)
	struct FString OpenHarmonyVersion; // 0x28(0x10)
	struct FPerfGearFeatureData FeatureData; // 0x38(0xC0)
};

// Object: ScriptStruct PerfGear.AndroidGPUFeatureStructure
// Size: 0x108 (Inherited: 0x8)
struct FAndroidGPUFeatureStructure : FTableRowBase
{
	struct FString GPUName; // 0x8(0x10)
	struct FString VendorName; // 0x18(0x10)
	struct FString DeviceName; // 0x28(0x10)
	struct FString AndroidVersionName; // 0x38(0x10)
	struct FPerfGearFeatureData FeatureData; // 0x48(0xC0)
};

// Object: ScriptStruct PerfGear.PerfGearAndroidDeviceFeatureStructure
// Size: 0xF8 (Inherited: 0x8)
struct FPerfGearAndroidDeviceFeatureStructure : FTableRowBase
{
	struct FString DeviceName; // 0x8(0x10)
	struct FString VendorName; // 0x18(0x10)
	struct FString AndroidVersion; // 0x28(0x10)
	struct FPerfGearFeatureData FeatureData; // 0x38(0xC0)
};

// Object: ScriptStruct PerfGear.PerfGearExternalStructure
// Size: 0x80 (Inherited: 0x8)
struct FPerfGearExternalStructure : FTableRowBase
{
	int32_t ExternalLevel; // 0x8(0x4)
	uint8_t Pad_0xC[0x4]; // 0xC(0x4)
	struct TMap<struct FString, struct FString> ExternalMaps; // 0x10(0x50)
	struct TArray<struct FPerfGearExternalMapWithGroup> ExternalMapsWithGroup; // 0x60(0x10)
	struct FString Help; // 0x70(0x10)
};

// Object: ScriptStruct PerfGear.PerfGearExternalMapWithGroup
// Size: 0x30 (Inherited: 0x0)
struct FPerfGearExternalMapWithGroup
{
	struct FString ParamGroup; // 0x0(0x10)
	struct FString ConsoleName; // 0x10(0x10)
	struct FString Value; // 0x20(0x10)
};

// Object: ScriptStruct PerfGear.FakeQualityLevelSetting
// Size: 0x14 (Inherited: 0x0)
struct FFakeQualityLevelSetting
{
	int32_t FakeQualityUlturalLow; // 0x0(0x4)
	int32_t FakeQualityVeryLow; // 0x4(0x4)
	int32_t FakeQualityMedium; // 0x8(0x4)
	int32_t FakeQualityHigh; // 0xC(0x4)
	int32_t FakeQualityVeryHigh; // 0x10(0x4)
};

// Object: ScriptStruct PerfGear.ModeSwitchItem
// Size: 0x30 (Inherited: 0x0)
struct FModeSwitchItem
{
	EModeSwitchType SwitchType; // 0x0(0x1)
	ESwitchStatus DefaultSwitchStatus; // 0x1(0x1)
	uint8_t Pad_0x2[0x6]; // 0x2(0x6)
	struct FString DefaultOffSwitchValue; // 0x8(0x10)
	struct TArray<struct FString> CustomValue; // 0x18(0x10)
	uint8_t Pad_0x28[0x8]; // 0x28(0x8)
};

// Object: ScriptStruct PerfGear.PerfGearStructure
// Size: 0x148 (Inherited: 0x8)
struct FPerfGearStructure : FTableRowBase
{
	struct FString ParamGroup; // 0x8(0x10)
	struct FString ConsoleName; // 0x18(0x10)
	struct FString Level1; // 0x28(0x10)
	struct FString Level2; // 0x38(0x10)
	struct FString Level3; // 0x48(0x10)
	struct FString Level4; // 0x58(0x10)
	struct FString Level5; // 0x68(0x10)
	struct FString Level6; // 0x78(0x10)
	uint8_t bEditOnly : 1; // 0x88(0x1), Mask(0x1)
	uint8_t BitPad_0x88_1 : 7; // 0x88(0x1)
	uint8_t bPIEOnly : 1; // 0x89(0x1), Mask(0x1)
	uint8_t BitPad_0x89_1 : 7; // 0x89(0x1)
	uint8_t bRuntimeOnly : 1; // 0x8A(0x1), Mask(0x1)
	uint8_t BitPad_0x8A_1 : 7; // 0x8A(0x1)
	uint8_t Pad_0x8B[0x1]; // 0x8B(0x1)
	int32_t Priority; // 0x8C(0x4)
	EPerfGearQualityLevel MinLevel; // 0x90(0x1)
	uint8_t Pad_0x91[0x7]; // 0x91(0x7)
	struct TMap<struct FString, struct FModeSwitchItem> SwitchMap; // 0x98(0x50)
	struct TMap<struct FString, struct FModeSwitchItem> MapSwitchMap; // 0xE8(0x50)
	struct FString Help; // 0x138(0x10)
};

// Object: ScriptStruct PerfGear.PSClampSetting
// Size: 0x3 (Inherited: 0x0)
struct FPSClampSetting
{
	EPerfGearQualityLevel QualityLevel; // 0x0(0x1)
	EPerfGearQualityLevel OriFPSLevel; // 0x1(0x1)
	EPerfGearQualityLevel OverrideFPSLevel; // 0x2(0x1)
};

// Object: ScriptStruct PerfGear.LowMemoryFeatureRow
// Size: 0x40 (Inherited: 0x8)
struct FLowMemoryFeatureRow : FTableRowBase
{
	struct FString ConsoleName; // 0x8(0x10)
	struct FString LowValue; // 0x18(0x10)
	struct FString NormalValue; // 0x28(0x10)
	ELowMemoryFeatureExecuteFlag ExecuteFlag; // 0x38(0x1)
	uint8_t Pad_0x39[0x7]; // 0x39(0x7)
};

// Object: ScriptStruct PerfGear.PerfGearMemoryFeatureRow
// Size: 0x20 (Inherited: 0x8)
struct FPerfGearMemoryFeatureRow : FTableRowBase
{
	EDeviceMemoryType MemoryType; // 0x8(0x1)
	uint8_t Pad_0x9[0x3]; // 0x9(0x3)
	int32_t MaxQualityLevel; // 0xC(0x4)
	struct TArray<struct FDeviceFeatureItem> MemoryFeatureItems; // 0x10(0x10)
};

// Object: ScriptStruct PerfGear.DeviceFeatureItem
// Size: 0x70 (Inherited: 0x0)
struct FDeviceFeatureItem
{
	struct FString ConsoleName; // 0x0(0x10)
	struct FString UltraLowValue; // 0x10(0x10)
	struct FString LowValue; // 0x20(0x10)
	struct FString MediumValue; // 0x30(0x10)
	struct FString HighValue; // 0x40(0x10)
	struct FString VeryHighValue; // 0x50(0x10)
	struct FString SuperValue; // 0x60(0x10)
};

// Object: ScriptStruct PerfGear.DeviceLevelFeatureStruct
// Size: 0x88 (Inherited: 0x0)
struct FDeviceLevelFeatureStruct
{
	int32_t BackBufferResolution; // 0x0(0x4)
	int32_t MinLobbyQualityLevel; // 0x4(0x4)
	struct FDeviceFeatureItem SceneColorResolutionItem; // 0x8(0x70)
	struct TArray<struct FDeviceFeatureItem> FeatureItems; // 0x78(0x10)
};

// Object: ScriptStruct PerfGear.PerfGearDeviceLevelFeature
// Size: 0x98 (Inherited: 0x8)
struct FPerfGearDeviceLevelFeature : FTableRowBase
{
	int32_t DeviceLevel; // 0x8(0x4)
	uint8_t Pad_0xC[0x4]; // 0xC(0x4)
	struct FDeviceLevelFeatureStruct DeviceLevelFeature; // 0x10(0x88)
};

// Object: ScriptStruct PerfGear.FpsConfig
// Size: 0x9 (Inherited: 0x0)
struct FFpsConfig
{
	EQaulityFpsStatus VeryLow; // 0x0(0x1)
	EQaulityFpsStatus Low; // 0x1(0x1)
	EQaulityFpsStatus Mid; // 0x2(0x1)
	EQaulityFpsStatus High; // 0x3(0x1)
	EQaulityFpsStatus VeryHigh; // 0x4(0x1)
	EQaulityFpsStatus Status90; // 0x5(0x1)
	EQaulityFpsStatus Status120; // 0x6(0x1)
	EQaulityFpsStatus Status144; // 0x7(0x1)
	EQaulityFpsStatus Status165; // 0x8(0x1)
};

// Object: ScriptStruct PerfGear.QualityFpsSetting
// Size: 0x31 (Inherited: 0x0)
struct FQualityFpsSetting
{
	struct FFpsConfig QualityVeryLow; // 0x0(0x9)
	struct FFpsConfig QualityLow; // 0x9(0x9)
	struct FFpsConfig QualityMid; // 0x12(0x9)
	struct FFpsConfig QualityHigh; // 0x1B(0x9)
	struct FFpsConfig QualityVeryHigh; // 0x24(0x9)
	EPerfGearQualityLevel DefaultQualityLevel; // 0x2D(0x1)
	EPerfGearQualityLevel DefaultFPSLevel; // 0x2E(0x1)
	EPerfGearQualityLevel InnerTestQualityLevel; // 0x2F(0x1)
	EPerfGearQualityLevel InnerTestFPSLevel; // 0x30(0x1)
};

// Object: ScriptStruct PerfGear.OpenHarmonyPadResolutionConfig
// Size: 0x1C (Inherited: 0x0)
struct FOpenHarmonyPadResolutionConfig
{
	int32_t BackBuffer; // 0x0(0x4)
	int32_t UltraLowResolution; // 0x4(0x4)
	int32_t LowResolution; // 0x8(0x4)
	int32_t MidResolution; // 0xC(0x4)
	int32_t HighResolution; // 0x10(0x4)
	int32_t UltraHighResolution; // 0x14(0x4)
	int32_t SuperResolution; // 0x18(0x4)
};

// Object: ScriptStruct PerfGear.GPMOpenHarmonyPadSizeConfig
// Size: 0x8C (Inherited: 0x0)
struct FGPMOpenHarmonyPadSizeConfig
{
	struct FOpenHarmonyPadResolutionConfig Level1Config; // 0x0(0x1C)
	struct FOpenHarmonyPadResolutionConfig Level2Config; // 0x1C(0x1C)
	struct FOpenHarmonyPadResolutionConfig Level3Config; // 0x38(0x1C)
	struct FOpenHarmonyPadResolutionConfig Level4Config; // 0x54(0x1C)
	struct FOpenHarmonyPadResolutionConfig Level5Config; // 0x70(0x1C)
};

// Object: ScriptStruct PerfGear.AndroidPadResolutionConfig
// Size: 0x1C (Inherited: 0x0)
struct FAndroidPadResolutionConfig
{
	int32_t BackBuffer; // 0x0(0x4)
	int32_t UltraLowResolution; // 0x4(0x4)
	int32_t LowResolution; // 0x8(0x4)
	int32_t MidResolution; // 0xC(0x4)
	int32_t HighResolution; // 0x10(0x4)
	int32_t UltraHighResolution; // 0x14(0x4)
	int32_t SuperResolution; // 0x18(0x4)
};

// Object: ScriptStruct PerfGear.GPMAndroidPadSizeConfig
// Size: 0x8C (Inherited: 0x0)
struct FGPMAndroidPadSizeConfig
{
	struct FAndroidPadResolutionConfig Level1Config; // 0x0(0x1C)
	struct FAndroidPadResolutionConfig Level2Config; // 0x1C(0x1C)
	struct FAndroidPadResolutionConfig Level3Config; // 0x38(0x1C)
	struct FAndroidPadResolutionConfig Level4Config; // 0x54(0x1C)
	struct FAndroidPadResolutionConfig Level5Config; // 0x70(0x1C)
};

// Object: ScriptStruct PerfGear.PGPlatformInfoMsg
// Size: 0x68 (Inherited: 0x0)
struct FPGPlatformInfoMsg
{
	struct FString EngineVer; // 0x0(0x10)
	struct FString GameVer; // 0x10(0x10)
	struct FString OsMajorVer; // 0x20(0x10)
	struct FString OsSubVer; // 0x30(0x10)
	struct FString CPUBrand; // 0x40(0x10)
	struct FString GPUBrand; // 0x50(0x10)
	uint32_t MemoryTotal; // 0x60(0x4)
	uint8_t Pad_0x64[0x4]; // 0x64(0x4)
};

// Object: Class PerfGear.FXProxyActor
// Size: 0x490 (Inherited: 0x370)
struct AFXProxyActor : AActor
{
	struct UDataTable* EffectTODData; // 0x370(0x8)
	struct TArray<int32_t> TODTypes; // 0x378(0x10)
	uint8_t bNeedTick : 1; // 0x388(0x1), Mask(0x1)
	uint8_t BitPad_0x388_1 : 7; // 0x388(0x1)
	uint8_t Pad_0x389[0x7]; // 0x389(0x7)
	struct TMap<EFXQualityLevel, struct FFXInstance> Templates; // 0x390(0x50)
	struct TMap<EFXQualityLevel, struct FFXInstance> HDTemplates; // 0x3E0(0x50)
	uint8_t bAutoActivate : 1; // 0x430(0x1), Mask(0x1)
	uint8_t BitPad_0x430_1 : 7; // 0x430(0x1)
	uint8_t bPostUpdateTickGroup : 1; // 0x431(0x1), Mask(0x1)
	uint8_t BitPad_0x431_1 : 7; // 0x431(0x1)
	uint8_t Pad_0x432[0x2]; // 0x432(0x2)
	float CullingDistance; // 0x434(0x4)
	uint8_t bLimitTickRate : 1; // 0x438(0x1), Mask(0x1)
	uint8_t BitPad_0x438_1 : 7; // 0x438(0x1)
	EFXQualityLevel CurrentQualityLevel; // 0x439(0x1)
	uint8_t bEnableDSActivatePSC : 1; // 0x43A(0x1), Mask(0x1)
	uint8_t BitPad_0x43A_1 : 7; // 0x43A(0x1)
	uint8_t Pad_0x43B[0x5]; // 0x43B(0x5)
	struct UParticleSystemComponent* PSC; // 0x440(0x8)
	struct FName AudioResourceId; // 0x448(0x8)
	uint8_t bDSActivatePSC : 1; // 0x450(0x1), Mask(0x1)
	uint8_t BitPad_0x450_1 : 7; // 0x450(0x1)
	uint8_t Pad_0x451[0x3F]; // 0x451(0x3F)


	// Object: Function PerfGear.FXProxyActor.UpdatePlatformAssetSign
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x86e4940
	// Params: [ Num(0) Size(0x0) ]
	void UpdatePlatformAssetSign();

	// Object: Function PerfGear.FXProxyActor.Test_SetDSActivatePSC_True
	// Flags: [Final|Native|Protected]
	// Offset: 0x86e48bc
	// Params: [ Num(0) Size(0x0) ]
	void Test_SetDSActivatePSC_True();

	// Object: Function PerfGear.FXProxyActor.Test_SetDSActivatePSC_False
	// Flags: [Final|Native|Protected]
	// Offset: 0x86e483c
	// Params: [ Num(0) Size(0x0) ]
	void Test_SetDSActivatePSC_False();

	// Object: Function PerfGear.FXProxyActor.SetTemplateTransSortPriority
	// Flags: [Native|Event|Public|BlueprintCallable|BlueprintEvent]
	// Offset: 0x86e4790
	// Params: [ Num(1) Size(0x4) ]
	void SetTemplateTransSortPriority(int32_t sortLayer);

	// Object: Function PerfGear.FXProxyActor.SetParticleSystemColorParam
	// Flags: [Native|Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent]
	// Offset: 0x86e46a8
	// Params: [ Num(2) Size(0x18) ]
	void SetParticleSystemColorParam(struct FName ParamName, struct FLinearColor Color);

	// Object: Function PerfGear.FXProxyActor.SetManagingSignificance
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x86e45fc
	// Params: [ Num(1) Size(0x1) ]
	void SetManagingSignificance(uint8_t bManaged);

	// Object: Function PerfGear.FXProxyActor.SetFxProxyVisible
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0x86e450c
	// Params: [ Num(2) Size(0x2) ]
	void SetFxProxyVisible(uint8_t bVisible, EFXVisibleState State);

	// Object: Function PerfGear.FXProxyActor.SetDSActivatePSC
	// Flags: [Native|Event|Public|BlueprintCallable|BlueprintEvent]
	// Offset: 0x101ae648
	// Params: [ Num(1) Size(0x1) ]
	void SetDSActivatePSC(uint8_t bValue);

	// Object: Function PerfGear.FXProxyActor.OnRep_DSActivatePSC
	// Flags: [Native|Protected]
	// Offset: 0x86e44f0
	// Params: [ Num(0) Size(0x0) ]
	void OnRep_DSActivatePSC();

	// Object: Function PerfGear.FXProxyActor.OnParticleSystemLoaded
	// Flags: [Final|Native|Protected|HasOutParms|HasDefaults]
	// Offset: 0x86e4430
	// Params: [ Num(1) Size(0x18) ]
	void OnParticleSystemLoaded(const struct FSoftObjectPath& FXPathRef);

	// Object: Function PerfGear.FXProxyActor.OnParticleSystemFinished
	// Flags: [Native|Protected]
	// Offset: 0xff5bb44
	// Params: [ Num(1) Size(0x8) ]
	void OnParticleSystemFinished(struct UParticleSystemComponent* FinishedComponent);
	DEFINE_UE_CLASS_HELPERS(AFXProxyActor, "FXProxyActor")

};

// Object: Class PerfGear.FXProxyActorManager
// Size: 0x40 (Inherited: 0x30)
struct UFXProxyActorManager : UWorldSubsystem
{
	uint8_t Pad_0x30[0x10]; // 0x30(0x10)


	// Object: Function PerfGear.FXProxyActorManager.SetEffectTOD
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x86e4a8c
	// Params: [ Num(1) Size(0x4) ]
	static void SetEffectTOD(int32_t TODID);
	DEFINE_UE_CLASS_HELPERS(UFXProxyActorManager, "FXProxyActorManager")

};

// Object: Class PerfGear.DeviceFakeQualityConfig
// Size: 0xB0 (Inherited: 0x38)
struct UDeviceFakeQualityConfig : UDeveloperSettings
{
	struct FFakeQualityLevelSetting Device0FakeQualityConfig; // 0x38(0x14)
	struct FFakeQualityLevelSetting Device1FakeQualityConfig; // 0x4C(0x14)
	struct FFakeQualityLevelSetting Device2FakeQualityConfig; // 0x60(0x14)
	struct FFakeQualityLevelSetting Device3FakeQualityConfig; // 0x74(0x14)
	struct FFakeQualityLevelSetting Device4FakeQualityConfig; // 0x88(0x14)
	struct FFakeQualityLevelSetting Device5FakeQualityConfig; // 0x9C(0x14)
	DEFINE_UE_CLASS_HELPERS(UDeviceFakeQualityConfig, "DeviceFakeQualityConfig")

};

// Object: Class PerfGear.DeviceFakeQualityConfigOverSeas
// Size: 0xB0 (Inherited: 0x38)
struct UDeviceFakeQualityConfigOverSeas : UDeveloperSettings
{
	struct FFakeQualityLevelSetting Device0FakeQualityConfig; // 0x38(0x14)
	struct FFakeQualityLevelSetting Device1FakeQualityConfig; // 0x4C(0x14)
	struct FFakeQualityLevelSetting Device2FakeQualityConfig; // 0x60(0x14)
	struct FFakeQualityLevelSetting Device3FakeQualityConfig; // 0x74(0x14)
	struct FFakeQualityLevelSetting Device4FakeQualityConfig; // 0x88(0x14)
	struct FFakeQualityLevelSetting Device5FakeQualityConfig; // 0x9C(0x14)
	DEFINE_UE_CLASS_HELPERS(UDeviceFakeQualityConfigOverSeas, "DeviceFakeQualityConfigOverSeas")

};

// Object: Class PerfGear.PerfGearMode
// Size: 0x48 (Inherited: 0x38)
struct UPerfGearMode : UDeveloperSettings
{
	struct TArray<struct FString> ModeNames; // 0x38(0x10)
	DEFINE_UE_CLASS_HELPERS(UPerfGearMode, "PerfGearMode")

};

// Object: Class PerfGear.PerfGearPipeline
// Size: 0x7A8 (Inherited: 0x28)
struct UPerfGearPipeline : UObject
{
	struct FMulticastInlineDelegate OnQualityChanged; // 0x28(0x10)
	struct FMulticastInlineDelegate OnFPSChanged; // 0x38(0x10)
	struct FMulticastInlineDelegate OnQualityApplied; // 0x48(0x10)
	struct FMulticastInlineDelegate OnDeviceLevelSet; // 0x58(0x10)
	uint8_t Pad_0x68[0x740]; // 0x68(0x740)


	// Object: Function PerfGear.PerfGearPipeline.SetSwitchStatus
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x86eae3c
	// Params: [ Num(3) Size(0x21) ]
	void SetSwitchStatus(struct FString InParamName, struct FString InMode, const ESwitchStatus& InStatus);

	// Object: Function PerfGear.PerfGearPipeline.SetRecommendLevel
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x86ead3c
	// Params: [ Num(2) Size(0x2) ]
	void SetRecommendLevel(const EPerfGearQualityLevel& InQualityLevel, const EPerfGearQualityLevel& InFpsLevel);

	// Object: Function PerfGear.PerfGearPipeline.SetQualityLevel
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0xfc754a0
	// Params: [ Num(1) Size(0x1) ]
	void SetQualityLevel(const EPerfGearQualityLevel& InLevel);

	// Object: Function PerfGear.PerfGearPipeline.SetQualityAndFPSLevel
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x86eac3c
	// Params: [ Num(2) Size(0x2) ]
	void SetQualityAndFPSLevel(const EPerfGearQualityLevel& InQualityLevel, const EPerfGearQualityLevel& InFpsLevel);

	// Object: Function PerfGear.PerfGearPipeline.SetMPOverrideSetting
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x107709b4
	// Params: [ Num(1) Size(0x10) ]
	void SetMPOverrideSetting(struct TArray<struct FPSClampSetting>& ClampSettings);

	// Object: Function PerfGear.PerfGearPipeline.SetFPSLevel
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0xef835e8
	// Params: [ Num(1) Size(0x1) ]
	void SetFPSLevel(const EPerfGearQualityLevel& InLevel);

	// Object: Function PerfGear.PerfGearPipeline.SetDeviceLevelHD
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x86eab98
	// Params: [ Num(1) Size(0x4) ]
	void SetDeviceLevelHD(int32_t InLevel);

	// Object: Function PerfGear.PerfGearPipeline.SetDeviceLevel
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xfc744d4
	// Params: [ Num(1) Size(0x4) ]
	void SetDeviceLevel(int32_t APMDeviceLevel);

	// Object: Function PerfGear.PerfGearPipeline.SetCurMode
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xf78f6e4
	// Params: [ Num(2) Size(0x11) ]
	uint8_t SetCurMode(struct FString InMode);

	// Object: Function PerfGear.PerfGearPipeline.SetCurMapName
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x86eaae4
	// Params: [ Num(1) Size(0x8) ]
	void SetCurMapName(const struct FName& InMapName);

	// Object: Function PerfGear.PerfGearPipeline.Reset
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x86eaad0
	// Params: [ Num(0) Size(0x0) ]
	void Reset();

	// Object: Function PerfGear.PerfGearPipeline.PerfQualityToString
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x86ea9e0
	// Params: [ Num(2) Size(0x18) ]
	struct FString PerfQualityToString(const EPerfGearQualityLevel& InLevel);

	// Object: Function PerfGear.PerfGearPipeline.IsSwitchEnable
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x86ea8dc
	// Params: [ Num(3) Size(0x12) ]
	uint8_t IsSwitchEnable(struct FString InParamName, const EPerfGearQualityLevel& InLevel);

	// Object: Function PerfGear.PerfGearPipeline.IsParamInBlackList
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xef86bc8
	// Params: [ Num(2) Size(0x11) ]
	uint8_t IsParamInBlackList(struct FString InParamName);

	// Object: Function PerfGear.PerfGearPipeline.GetVulkanVersion
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x86ea844
	// Params: [ Num(1) Size(0x10) ]
	struct FString GetVulkanVersion();

	// Object: Function PerfGear.PerfGearPipeline.GetSwitchStatus
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xf667910
	// Params: [ Num(3) Size(0x21) ]
	ESwitchStatus GetSwitchStatus(struct FString InParamName, struct FString InMode);

	// Object: Function PerfGear.PerfGearPipeline.GetSwitchMinLevel
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xf667d64
	// Params: [ Num(2) Size(0x11) ]
	EPerfGearQualityLevel GetSwitchMinLevel(struct FString InParamName);

	// Object: Function PerfGear.PerfGearPipeline.GetScreenEffectQualityLevel
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xeb5a158
	// Params: [ Num(1) Size(0x1) ]
	EPerfGearQualityLevel GetScreenEffectQualityLevel();

	// Object: Function PerfGear.PerfGearPipeline.GetRHIType
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x86ea810
	// Params: [ Num(1) Size(0x1) ]
	static ERHIType GetRHIType();

	// Object: Function PerfGear.PerfGearPipeline.GetRHIInfo
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xeb51ef8
	// Params: [ Num(1) Size(0x4) ]
	int32_t GetRHIInfo();

	// Object: Function PerfGear.PerfGearPipeline.GetQualityLevel
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xeb556b8
	// Params: [ Num(1) Size(0x1) ]
	EPerfGearQualityLevel GetQualityLevel();

	// Object: Function PerfGear.PerfGearPipeline.GetPlatformName
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x102390cc
	// Params: [ Num(1) Size(0x10) ]
	struct FString GetPlatformName();

	// Object: Function PerfGear.PerfGearPipeline.GetParticleQualityLevel
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x86ea7dc
	// Params: [ Num(1) Size(0x1) ]
	EPerfGearQualityLevel GetParticleQualityLevel();

	// Object: Function PerfGear.PerfGearPipeline.GetOSVersion
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x86ea744
	// Params: [ Num(1) Size(0x10) ]
	struct FString GetOSVersion();

	// Object: Function PerfGear.PerfGearPipeline.GetOSType
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x86ea710
	// Params: [ Num(1) Size(0x1) ]
	static EPerfGearOSType GetOSType();

	// Object: Function PerfGear.PerfGearPipeline.GetOSMajorVersion
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xeccf730
	// Params: [ Num(1) Size(0x4) ]
	int32_t GetOSMajorVersion();

	// Object: Function PerfGear.PerfGearPipeline.GetOriQualityLevel
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x86ea6dc
	// Params: [ Num(1) Size(0x1) ]
	EPerfGearQualityLevel GetOriQualityLevel();

	// Object: Function PerfGear.PerfGearPipeline.GetOriFpsLevel
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x86ea6a8
	// Params: [ Num(1) Size(0x1) ]
	EPerfGearQualityLevel GetOriFpsLevel();

	// Object: Function PerfGear.PerfGearPipeline.GetOpenHarmonyVersoin
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x86ea610
	// Params: [ Num(1) Size(0x10) ]
	struct FString GetOpenHarmonyVersoin();

	// Object: Function PerfGear.PerfGearPipeline.GetMemoryType
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x86ea5dc
	// Params: [ Num(1) Size(0x4) ]
	int32_t GetMemoryType();

	// Object: Function PerfGear.PerfGearPipeline.GetMemoryTotal
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xf4bd268
	// Params: [ Num(1) Size(0x4) ]
	int32_t GetMemoryTotal();

	// Object: Function PerfGear.PerfGearPipeline.GetMaxSupportRefreshRate
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x86ea5a8
	// Params: [ Num(1) Size(0x4) ]
	int32_t GetMaxSupportRefreshRate();

	// Object: Function PerfGear.PerfGearPipeline.GetMaxQualityLevelByFPS
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x10a2ba90
	// Params: [ Num(2) Size(0x2) ]
	EPerfGearQualityLevel GetMaxQualityLevelByFPS(EPerfGearQualityLevel FPSLevel);

	// Object: Function PerfGear.PerfGearPipeline.GetMaxFPSLevelByQulaity
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xef801a4
	// Params: [ Num(2) Size(0x2) ]
	EPerfGearQualityLevel GetMaxFPSLevelByQulaity(EPerfGearQualityLevel QualityLevel);

	// Object: Function PerfGear.PerfGearPipeline.GetMaterialQualityByDeviceLevel
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x86ea4fc
	// Params: [ Num(2) Size(0x8) ]
	int32_t GetMaterialQualityByDeviceLevel(int32_t InDeviceLevel);

	// Object: Function PerfGear.PerfGearPipeline.GetLobbyClampedLevel
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x86ea4c8
	// Params: [ Num(1) Size(0x4) ]
	int32_t GetLobbyClampedLevel();

	// Object: Function PerfGear.PerfGearPipeline.GetIsDeviceCheck
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x1073b9c4
	// Params: [ Num(1) Size(0x1) ]
	uint8_t GetIsDeviceCheck();

	// Object: Function PerfGear.PerfGearPipeline.GetGPUBrand
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xf4bda04
	// Params: [ Num(1) Size(0x10) ]
	struct FString GetGPUBrand();

	// Object: Function PerfGear.PerfGearPipeline.GetGMCurQualityLevel
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x86ea494
	// Params: [ Num(1) Size(0x4) ]
	int32_t GetGMCurQualityLevel();

	// Object: Function PerfGear.PerfGearPipeline.GetGLVersion
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x86ea3fc
	// Params: [ Num(1) Size(0x10) ]
	struct FString GetGLVersion();

	// Object: Function PerfGear.PerfGearPipeline.GetGLMaxVertexUniformComponents
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x86ea3c8
	// Params: [ Num(1) Size(0x4) ]
	int32_t GetGLMaxVertexUniformComponents();

	// Object: Function PerfGear.PerfGearPipeline.GetGLMaxPixelUniformComponents
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x86ea394
	// Params: [ Num(1) Size(0x4) ]
	int32_t GetGLMaxPixelUniformComponents();

	// Object: Function PerfGear.PerfGearPipeline.GetFPSLevel
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xea2cb10
	// Params: [ Num(1) Size(0x1) ]
	EPerfGearQualityLevel GetFPSLevel();

	// Object: Function PerfGear.PerfGearPipeline.GetDriverVersion
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x10117914
	// Params: [ Num(1) Size(0x10) ]
	struct FString GetDriverVersion();

	// Object: Function PerfGear.PerfGearPipeline.GetDeviceUnSupportQualityLevel
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x1098cb98
	// Params: [ Num(1) Size(0x10) ]
	struct TArray<EPerfGearQualityLevel> GetDeviceUnSupportQualityLevel();

	// Object: Function PerfGear.PerfGearPipeline.GetDeviceUnSupportMaterialQualityLevel
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x86ea2fc
	// Params: [ Num(1) Size(0x10) ]
	struct TArray<int32_t> GetDeviceUnSupportMaterialQualityLevel();

	// Object: Function PerfGear.PerfGearPipeline.GetDeviceUnSupportFPSLevel
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x1098caec
	// Params: [ Num(1) Size(0x10) ]
	struct TArray<EPerfGearQualityLevel> GetDeviceUnSupportFPSLevel();

	// Object: Function PerfGear.PerfGearPipeline.GetDeviceRecommendQualityLevel
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x86ea2c8
	// Params: [ Num(1) Size(0x1) ]
	EPerfGearQualityLevel GetDeviceRecommendQualityLevel();

	// Object: Function PerfGear.PerfGearPipeline.GetDeviceRecommendFPSLevel
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x86ea294
	// Params: [ Num(1) Size(0x1) ]
	EPerfGearQualityLevel GetDeviceRecommendFPSLevel();

	// Object: Function PerfGear.PerfGearPipeline.GetDeviceName
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xeccf890
	// Params: [ Num(1) Size(0x10) ]
	struct FString GetDeviceName();

	// Object: Function PerfGear.PerfGearPipeline.GetDeviceLevel
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x86ea278
	// Params: [ Num(1) Size(0x4) ]
	int32_t GetDeviceLevel();

	// Object: Function PerfGear.PerfGearPipeline.GetDebugApplyQuality
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x86ea244
	// Params: [ Num(1) Size(0x4) ]
	int32_t GetDebugApplyQuality();

	// Object: Function PerfGear.PerfGearPipeline.GetCurrentRefreshRate
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x86ea210
	// Params: [ Num(1) Size(0x4) ]
	int32_t GetCurrentRefreshRate();

	// Object: Function PerfGear.PerfGearPipeline.GetCurQualityLevel
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x86ea1dc
	// Params: [ Num(1) Size(0x1) ]
	EPerfGearQualityLevel GetCurQualityLevel();

	// Object: Function PerfGear.PerfGearPipeline.GetCurMode
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xf8ce7cc
	// Params: [ Num(1) Size(0x10) ]
	struct FString GetCurMode();

	// Object: Function PerfGear.PerfGearPipeline.GetCurGroupQualityLevel
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x86ea128
	// Params: [ Num(2) Size(0x11) ]
	EPerfGearQualityLevel GetCurGroupQualityLevel(struct FString GroupName);

	// Object: Function PerfGear.PerfGearPipeline.GetCurFPSLevel
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x86ea0f4
	// Params: [ Num(1) Size(0x1) ]
	EPerfGearQualityLevel GetCurFPSLevel();

	// Object: Function PerfGear.PerfGearPipeline.GetCurApplyQuality
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x86ea0d8
	// Params: [ Num(1) Size(0x1) ]
	EPerfGearQualityLevel GetCurApplyQuality();

	// Object: Function PerfGear.PerfGearPipeline.GetAndroidVersoin
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x86ea040
	// Params: [ Num(1) Size(0x10) ]
	struct FString GetAndroidVersoin();

	// Object: Function PerfGear.PerfGearPipeline.Get
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x86e9ff0
	// Params: [ Num(1) Size(0x8) ]
	static struct UPerfGearPipeline* Get();

	// Object: Function PerfGear.PerfGearPipeline.ClearCurMapName
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x86e9fdc
	// Params: [ Num(0) Size(0x0) ]
	void ClearCurMapName();

	// Object: Function PerfGear.PerfGearPipeline.ChangeFpsOp
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xef80250
	// Params: [ Num(2) Size(0x2) ]
	void ChangeFpsOp(ELowFpsType FpsType, ELowFpsOP FpsOP);

	// Object: Function PerfGear.PerfGearPipeline.Apply
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xef7eba8
	// Params: [ Num(3) Size(0x3) ]
	void Apply(uint8_t bSlient, uint8_t bFPSOnly, uint8_t bForceQualityLevel);

	// Object: Function PerfGear.PerfGearPipeline.AddForceUpdateConsoleName
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x105f7204
	// Params: [ Num(1) Size(0x10) ]
	void AddForceUpdateConsoleName(struct FString& ConsoleName);

	// Object: Function PerfGear.PerfGearPipeline.AddBlackVarListSubLevel
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x86e9e00
	// Params: [ Num(4) Size(0x78) ]
	void AddBlackVarListSubLevel(struct FString InParamName, const struct TMap<EPerfGearQualityLevel, struct FString>& LevelValues, const EBlackVarPriority& Priority, const struct TArray<struct FString>& InModeArray);

	// Object: Function PerfGear.PerfGearPipeline.AddBlackVarListAllLevel
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x86e9c70
	// Params: [ Num(4) Size(0x38) ]
	void AddBlackVarListAllLevel(struct FString InParamName, struct FString ConsoleValue, const EBlackVarPriority& Priority, const struct TArray<struct FString>& InModeArray);
	DEFINE_UE_CLASS_HELPERS(UPerfGearPipeline, "PerfGearPipeline")

};

// Object: Class PerfGear.PerfGearFuncLib
// Size: 0x28 (Inherited: 0x28)
struct UPerfGearFuncLib : UBlueprintFunctionLibrary
{

	// Object: Function PerfGear.PerfGearFuncLib.MakeFPSClampSetting
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0xf7a00ac
	// Params: [ Num(4) Size(0x6) ]
	static struct FPSClampSetting MakeFPSClampSetting(EPerfGearQualityLevel InQualityLevel, EPerfGearQualityLevel InOriFpsLevel, EPerfGearQualityLevel InOverrideFpsLevel);

	// Object: Function PerfGear.PerfGearFuncLib.GetPerfGearInst
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x86eb07c
	// Params: [ Num(1) Size(0x8) ]
	static struct UPerfGearPipeline* GetPerfGearInst();
	DEFINE_UE_CLASS_HELPERS(UPerfGearFuncLib, "PerfGearFuncLib")

};

// Object: Class PerfGear.PerfGearAndroidPadSizeConfig
// Size: 0x1E0 (Inherited: 0x38)
struct UPerfGearAndroidPadSizeConfig : UDeveloperSettings
{
	struct FGPMAndroidPadSizeConfig SmallPadConfig; // 0x38(0x8C)
	struct FGPMAndroidPadSizeConfig MidPadConfig; // 0xC4(0x8C)
	struct FGPMAndroidPadSizeConfig BigPadConfig; // 0x150(0x8C)
	uint8_t Pad_0x1DC[0x4]; // 0x1DC(0x4)
	DEFINE_UE_CLASS_HELPERS(UPerfGearAndroidPadSizeConfig, "PerfGearAndroidPadSizeConfig")

};

// Object: Class PerfGear.PerfGearOpenHarmonyPadSizeConfig
// Size: 0x1E0 (Inherited: 0x38)
struct UPerfGearOpenHarmonyPadSizeConfig : UDeveloperSettings
{
	struct FGPMOpenHarmonyPadSizeConfig SmallPadConfig; // 0x38(0x8C)
	struct FGPMOpenHarmonyPadSizeConfig MidPadConfig; // 0xC4(0x8C)
	struct FGPMOpenHarmonyPadSizeConfig BigPadConfig; // 0x150(0x8C)
	uint8_t Pad_0x1DC[0x4]; // 0x1DC(0x4)
	DEFINE_UE_CLASS_HELPERS(UPerfGearOpenHarmonyPadSizeConfig, "PerfGearOpenHarmonyPadSizeConfig")

};

// Object: Class PerfGear.PerfGearPlatformConfig
// Size: 0x78 (Inherited: 0x38)
struct UPerfGearPlatformConfig : UDeveloperSettings
{
	struct TArray<struct FQualityFpsSetting> AndroidSettings; // 0x38(0x10)
	struct TArray<struct FQualityFpsSetting> OpenHarmonySettings; // 0x48(0x10)
	struct TArray<struct FQualityFpsSetting> IOSSettings; // 0x58(0x10)
	struct TArray<struct FQualityFpsSetting> PCSettings; // 0x68(0x10)
	DEFINE_UE_CLASS_HELPERS(UPerfGearPlatformConfig, "PerfGearPlatformConfig")

};

// Object: Class PerfGear.PerfGearPlatformConfigOverSeas
// Size: 0x78 (Inherited: 0x38)
struct UPerfGearPlatformConfigOverSeas : UDeveloperSettings
{
	struct TArray<struct FQualityFpsSetting> AndroidSettings; // 0x38(0x10)
	struct TArray<struct FQualityFpsSetting> OpenHarmonySettings; // 0x48(0x10)
	struct TArray<struct FQualityFpsSetting> IOSSettings; // 0x58(0x10)
	struct TArray<struct FQualityFpsSetting> PCSettings; // 0x68(0x10)
	DEFINE_UE_CLASS_HELPERS(UPerfGearPlatformConfigOverSeas, "PerfGearPlatformConfigOverSeas")

};

// Object: Class PerfGear.PerfGearQualityFPSManager
// Size: 0x1E8 (Inherited: 0x28)
struct UPerfGearQualityFPSManager : UObject
{
	uint8_t Pad_0x28[0x1C0]; // 0x28(0x1C0)
	DEFINE_UE_CLASS_HELPERS(UPerfGearQualityFPSManager, "PerfGearQualityFPSManager")

};

// Object: Class PerfGear.LowMemoryQualityManager
// Size: 0xE0 (Inherited: 0x28)
struct ULowMemoryQualityManager : UObject
{
	uint8_t Pad_0x28[0xB8]; // 0x28(0xB8)


	// Object: Function PerfGear.LowMemoryQualityManager.SetLowMemoryMode
	// Flags: [Final|Native|Public]
	// Offset: 0x86eb678
	// Params: [ Num(1) Size(0x4) ]
	void SetLowMemoryMode(int32_t Value);

	// Object: Function PerfGear.LowMemoryQualityManager.IsLowMemoryModeOpen
	// Flags: [Final|Native|Public]
	// Offset: 0x86eb640
	// Params: [ Num(1) Size(0x1) ]
	uint8_t IsLowMemoryModeOpen();

	// Object: Function PerfGear.LowMemoryQualityManager.Get
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x86eb60c
	// Params: [ Num(1) Size(0x8) ]
	static struct ULowMemoryQualityManager* Get();

	// Object: Function PerfGear.LowMemoryQualityManager.FindConsoleValueLowMemoryOverride
	// Flags: [Final|Native|Public|HasOutParms]
	// Offset: 0x86eb500
	// Params: [ Num(3) Size(0x21) ]
	uint8_t FindConsoleValueLowMemoryOverride(struct FString ConsoleName, struct FString& InOutConsoleValue);

	// Object: Function PerfGear.LowMemoryQualityManager.ExecuteConsoleCommandOverride
	// Flags: [Final|Native|Public]
	// Offset: 0x86eb410
	// Params: [ Num(2) Size(0x20) ]
	void ExecuteConsoleCommandOverride(struct FString ConsoleName, struct FString ConsoleValue);

	// Object: Function PerfGear.LowMemoryQualityManager.ExecuteAllLowMemoryConsoleCommand
	// Flags: [Final|Native|Public]
	// Offset: 0x86eb364
	// Params: [ Num(1) Size(0x1) ]
	void ExecuteAllLowMemoryConsoleCommand(uint8_t isLowMemory);

	// Object: Function PerfGear.LowMemoryQualityManager.CanOpenLowMemoryMode
	// Flags: [Final|Native|Public]
	// Offset: 0x86eb32c
	// Params: [ Num(1) Size(0x1) ]
	uint8_t CanOpenLowMemoryMode();
	DEFINE_UE_CLASS_HELPERS(ULowMemoryQualityManager, "LowMemoryQualityManager")

};

} // namespace SDK
