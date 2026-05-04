#pragma once

#include "../CoreUObject_classes.hpp"
#include "Engine.hpp"

namespace SDK
{

// Package: DFMAnalysTool
// Enums: 3
// Structs: 2
// Classes: 3

struct FDataOfTimer;
struct FUICostData;
struct UAnalyseSettings;
struct UDFMAnalyseManager;
struct UDFUICostMonitor;

// Object: Enum DFMAnalysTool.EParamType
enum class EParamType : uint8_t
{
	Invalid = 0,
	P_BOOL = 1,
	P_INT = 2,
	P_FLOAT = 3,
	P_DOUBLE = 4,
	P_FSTRING = 5,
	P_JSON_DATA = 6,
	EParamType_MAX = 7
};

// Object: Enum DFMAnalysTool.EJsonDataType
enum class EJsonDataType : uint8_t
{
	Empty = 0,
	ENTRY = 1,
	array = 2,
	Section = 3,
	EJsonDataType_MAX = 4
};

// Object: Enum DFMAnalysTool.EUICostType
enum class EUICostType : uint16_t
{
	None = 0,
	TotalTime = 1,
	Open = 2,
	Close = 3,
	AsyncLoad = 4,
	CreateSub = 10,
	ProtoReceive = 20,
	GameFlow = 30,
	Other = 255,
	EUICostType_MAX = 256
};

// Object: ScriptStruct DFMAnalysTool.DataOfTimer
// Size: 0x28 (Inherited: 0x0)
struct FDataOfTimer
{
	uint8_t Pad_0x0[0x28]; // 0x0(0x28)
};

// Object: ScriptStruct DFMAnalysTool.UICostData
// Size: 0x98 (Inherited: 0x0)
struct FUICostData
{
	uint8_t Pad_0x0[0x98]; // 0x0(0x98)
};

// Object: Class DFMAnalysTool.AnalyseSettings
// Size: 0x38 (Inherited: 0x28)
struct UAnalyseSettings : UObject
{
	struct FString DefaultJsonFileName; // 0x28(0x10)
	DEFINE_UE_CLASS_HELPERS(UAnalyseSettings, "AnalyseSettings")

};

// Object: Class DFMAnalysTool.DFMAnalyseManager
// Size: 0xE8 (Inherited: 0x30)
struct UDFMAnalyseManager : UGameInstanceSubsystem
{
	uint8_t Pad_0x30[0xB8]; // 0x30(0xB8)


	// Object: Function DFMAnalysTool.DFMAnalyseManager.SaveData
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0x7b8e14c
	// Params: [ Num(1) Size(0x10) ]
	void SaveData(struct FString InDataPath);

	// Object: Function DFMAnalysTool.DFMAnalyseManager.GetIns
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x7b8e0a8
	// Params: [ Num(2) Size(0x10) ]
	static struct UDFMAnalyseManager* GetIns(struct UObject* Context);

	// Object: Function DFMAnalysTool.DFMAnalyseManager.AddMapData2Section
	// Flags: [Native|Public|HasOutParms]
	// Offset: 0x7b8df30
	// Params: [ Num(3) Size(0x70) ]
	void AddMapData2Section(struct FString SectionName, struct FString InKey, const struct TMap<struct FString, struct FString>& InMap);

	// Object: Function DFMAnalysTool.DFMAnalyseManager.AddEntryData_String
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0x7b8de38
	// Params: [ Num(2) Size(0x20) ]
	void AddEntryData_String(struct FString InKey, struct FString InData);

	// Object: Function DFMAnalysTool.DFMAnalyseManager.AddEntryData_Int
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0x7b8dd48
	// Params: [ Num(2) Size(0x14) ]
	void AddEntryData_Int(struct FString InKey, int32_t InData);

	// Object: Function DFMAnalysTool.DFMAnalyseManager.AddEntryData_Float
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0x7b8dc58
	// Params: [ Num(2) Size(0x14) ]
	void AddEntryData_Float(struct FString InKey, float InData);

	// Object: Function DFMAnalysTool.DFMAnalyseManager.AddEntryData_Double
	// Flags: [Native|Public]
	// Offset: 0x7b8db68
	// Params: [ Num(2) Size(0x18) ]
	void AddEntryData_Double(struct FString InKey, double InData);

	// Object: Function DFMAnalysTool.DFMAnalyseManager.AddData2Section
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0x7b8da2c
	// Params: [ Num(3) Size(0x30) ]
	void AddData2Section(struct FString SectionName, struct FString InKey, struct FString InData);

	// Object: Function DFMAnalysTool.DFMAnalyseManager.AddArrayData2Section
	// Flags: [Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x7b8d8e0
	// Params: [ Num(3) Size(0x30) ]
	void AddArrayData2Section(struct FString SectionName, struct FString InKey, const struct TArray<struct FString>& inArray);

	// Object: Function DFMAnalysTool.DFMAnalyseManager.AddArrayData
	// Flags: [Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x7b8d7d8
	// Params: [ Num(2) Size(0x20) ]
	void AddArrayData(struct FString InKey, const struct TArray<struct FString>& inArray);
	DEFINE_UE_CLASS_HELPERS(UDFMAnalyseManager, "DFMAnalyseManager")

};

// Object: Class DFMAnalysTool.DFUICostMonitor
// Size: 0xE8 (Inherited: 0x30)
struct UDFUICostMonitor : UGameInstanceSubsystem
{
	uint8_t Pad_0x30[0x8]; // 0x30(0x8)
	uint8_t bEnabled : 1; // 0x38(0x1), Mask(0x1)
	uint8_t BitPad_0x38_1 : 7; // 0x38(0x1)
	uint8_t bMonitorMoreFramesCost : 1; // 0x39(0x1), Mask(0x1)
	uint8_t BitPad_0x39_1 : 7; // 0x39(0x1)
	uint8_t Pad_0x3A[0x2]; // 0x3A(0x2)
	int32_t MonitorMoreFramesNum; // 0x3C(0x4)
	float UIEmitThreshold; // 0x40(0x4)
	float ProtoEmitThreshold; // 0x44(0x4)
	uint8_t Pad_0x48[0xA0]; // 0x48(0xA0)


	// Object: Function DFMAnalysTool.DFUICostMonitor.SaveData
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0x7b8e794
	// Params: [ Num(1) Size(0x10) ]
	void SaveData(struct FString InFilePath);

	// Object: Function DFMAnalysTool.DFUICostMonitor.HeavyTaskMonitorInShipping
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x7b8e6b4
	// Params: [ Num(2) Size(0x20) ]
	static void HeavyTaskMonitorInShipping(struct FString TaskKey, struct FString TaskPath);

	// Object: Function DFMAnalysTool.DFUICostMonitor.GetCurTime
	// Flags: [Final|Native|Public]
	// Offset: 0x7b8e680
	// Params: [ Num(1) Size(0x8) ]
	int64_t GetCurTime();

	// Object: Function DFMAnalysTool.DFUICostMonitor.Get
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x106ff984
	// Params: [ Num(2) Size(0x10) ]
	static struct UDFUICostMonitor* Get(struct UObject* WorldContextObj);

	// Object: Function DFMAnalysTool.DFUICostMonitor.DataTimerStart
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0x7b8e510
	// Params: [ Num(4) Size(0x28) ]
	void DataTimerStart(struct FString SectionName, struct FString InKey, EUICostType CostType, float EmitThreshold);

	// Object: Function DFMAnalysTool.DFUICostMonitor.DataTimerEndWithStartTime
	// Flags: [Native|Public]
	// Offset: 0x7b8e364
	// Params: [ Num(5) Size(0x30) ]
	void DataTimerEndWithStartTime(int64_t StartTime, struct FString SectionName, struct FString InKey, EUICostType CostType, float EmitThreshold);

	// Object: Function DFMAnalysTool.DFUICostMonitor.DataTimerEnd
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0x7b8e26c
	// Params: [ Num(2) Size(0x20) ]
	void DataTimerEnd(struct FString SectionName, struct FString InKey);
	DEFINE_UE_CLASS_HELPERS(UDFUICostMonitor, "DFUICostMonitor")

};

} // namespace SDK
