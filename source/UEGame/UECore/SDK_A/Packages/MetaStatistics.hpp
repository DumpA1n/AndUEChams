#pragma once

#include "../CoreUObject_classes.hpp"
#include "Engine.hpp"

namespace SDK
{

// Package: MetaStatistics
// Enums: 0
// Structs: 6
// Classes: 2

struct FMTCallRecord;
struct FMTDorianTrace;
struct FMTDorianTraceRecord;
struct FMTCallTrace;
struct FMTCallCollector;
struct FMTAlertRecord;
struct UMTStatisticsMonitor;
struct UMTStatisticsHelper;

// Object: ScriptStruct MetaStatistics.MTCallRecord
// Size: 0x50 (Inherited: 0x0)
struct FMTCallRecord
{
	double BeginSeconds; // 0x0(0x8)
	double Duration; // 0x8(0x8)
	struct FDateTime BeginTime; // 0x10(0x8)
	uint32_t FrameNumber; // 0x18(0x4)
	uint8_t Pad_0x1C[0x4]; // 0x1C(0x4)
	struct FString DorianFunc; // 0x20(0x10)
	struct FName CallName; // 0x30(0x8)
	struct FString DebugStr; // 0x38(0x10)
	uint64_t ID; // 0x48(0x8)
};

// Object: ScriptStruct MetaStatistics.MTDorianTrace
// Size: 0x30 (Inherited: 0x0)
struct FMTDorianTrace
{
	struct FString DorianFuncName; // 0x0(0x10)
	struct TArray<struct FMTDorianTraceRecord> Records; // 0x10(0x10)
	uint64_t CallNum; // 0x20(0x8)
	double AvgDurationMS; // 0x28(0x8)
};

// Object: ScriptStruct MetaStatistics.MTDorianTraceRecord
// Size: 0x18 (Inherited: 0x0)
struct FMTDorianTraceRecord
{
	uint64_t ID; // 0x0(0x8)
	struct FString CallName; // 0x8(0x10)
};

// Object: ScriptStruct MetaStatistics.MTCallTrace
// Size: 0x30 (Inherited: 0x0)
struct FMTCallTrace
{
	struct FString CallName; // 0x0(0x10)
	uint64_t CallNum; // 0x10(0x8)
	double AvgDurationMS; // 0x18(0x8)
	struct TArray<struct FMTCallRecord> Records; // 0x20(0x10)
};

// Object: ScriptStruct MetaStatistics.MTCallCollector
// Size: 0x60 (Inherited: 0x0)
struct FMTCallCollector
{
	struct FString CallName; // 0x0(0x10)
	struct FMTCallRecord Record; // 0x10(0x50)
};

// Object: ScriptStruct MetaStatistics.MTAlertRecord
// Size: 0x80 (Inherited: 0x0)
struct FMTAlertRecord
{
	double Baseline; // 0x0(0x8)
	struct FString Annotation; // 0x8(0x10)
	struct TMap<struct FString, uint32_t> Records; // 0x18(0x50)
	struct TArray<uint32_t> WarningLines; // 0x68(0x10)
	uint32_t LastTriggeredFramenumber; // 0x78(0x4)
	uint8_t Pad_0x7C[0x4]; // 0x7C(0x4)
};

// Object: Class MetaStatistics.MTStatisticsMonitor
// Size: 0x3B8 (Inherited: 0x28)
struct UMTStatisticsMonitor : UObject
{
	DEFINE_UE_CLASS_HELPERS(UMTStatisticsMonitor, "MTStatisticsMonitor")

	struct FMulticastInlineDelegate OnCollectOneCallTrace; // 0x28(0x10)
	uint8_t bShowAlertMonitorMessage : 1; // 0x38(0x1), Mask(0x1)
	uint8_t BitPad_0x38_1 : 7; // 0x38(0x1)
	uint8_t bShowAlertTriggerMessage : 1; // 0x39(0x1), Mask(0x1)
	uint8_t BitPad_0x39_1 : 7; // 0x39(0x1)
	uint8_t Pad_0x3A[0x6]; // 0x3A(0x6)
	struct TArray<struct FMTAlertRecord> FrameDurationAlertRecords; // 0x40(0x10)
	struct TArray<struct FMTAlertRecord> MTCallDurationAlertRecords; // 0x50(0x10)
	struct TArray<struct FMTAlertRecord> DorianDurationAlertRecords; // 0x60(0x10)
	struct TArray<struct FMTAlertRecord> MTCallAvgDurationAlertRecords; // 0x70(0x10)
	struct TArray<struct FMTAlertRecord> DorianAvgDurationAlertRecords; // 0x80(0x10)
	int32_t Int1; // 0x90(0x4)
	int32_t Int2; // 0x94(0x4)
	int32_t Int3; // 0x98(0x4)
	uint8_t Pad_0x9C[0x4]; // 0x9C(0x4)
	double Double1; // 0xA0(0x8)
	double Double2; // 0xA8(0x8)
	struct FString String1; // 0xB0(0x10)
	struct FString String2; // 0xC0(0x10)
	struct TMap<struct FString, int32_t> DataMap1; // 0xD0(0x50)
	struct TMap<struct FString, int32_t> DataMap2; // 0x120(0x50)
	struct TMap<struct FString, int32_t> DataMap3; // 0x170(0x50)
	struct TMap<struct FString, struct FString> DataMap4; // 0x1C0(0x50)
	struct TMap<struct FString, struct FString> DataMap5; // 0x210(0x50)
	struct TMap<struct FString, double> DataMap6; // 0x260(0x50)
	struct TMap<struct FString, double> DataMap7; // 0x2B0(0x50)
	struct TArray<int32_t> DataArray1; // 0x300(0x10)
	struct TArray<int32_t> DataArray2; // 0x310(0x10)
	struct TArray<int32_t> DataArray3; // 0x320(0x10)
	struct TArray<struct FString> DataArray4; // 0x330(0x10)
	struct TArray<struct FString> DataArray5; // 0x340(0x10)
	struct TArray<double> DataArray6; // 0x350(0x10)
	struct TArray<double> DataArray7; // 0x360(0x10)
	double CurrentFrameDorianCallDuration; // 0x370(0x8)
	double CurrentFrameMTCallDuration; // 0x378(0x8)
	uint64_t CurrentFrameNumber; // 0x380(0x8)
	uint64_t CurrentFrameDorianCallCount; // 0x388(0x8)
	uint64_t CurrentFrameMTCallCount; // 0x390(0x8)
	uint64_t TotalDorianCallCount; // 0x398(0x8)
	uint64_t TotalMTCallCount; // 0x3A0(0x8)
	double TotalDorianCallDuration; // 0x3A8(0x8)
	double TotalMTCallDuration; // 0x3B0(0x8)

	// Object: Function MetaStatistics.MTStatisticsMonitor.ResetData
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x15611b24
	// Params: [ Num(0) Size(0x0) ]
	static void ResetData();

	// Object: Function MetaStatistics.MTStatisticsMonitor.NewFrameReset
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x15611a90
	// Params: [ Num(1) Size(0x8) ]
	static void NewFrameReset(uint64_t FrameNumber);

	// Object: Function MetaStatistics.MTStatisticsMonitor.Get
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x15611a5c
	// Params: [ Num(1) Size(0x8) ]
	static struct UMTStatisticsMonitor* Get();
};

// Object: Class MetaStatistics.MTStatisticsHelper
// Size: 0x28 (Inherited: 0x28)
struct UMTStatisticsHelper : UBlueprintFunctionLibrary
{
	DEFINE_UE_CLASS_HELPERS(UMTStatisticsHelper, "MTStatisticsHelper")

	// Object: Function MetaStatistics.MTStatisticsHelper.SetInTimeMonitorEnabled
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x15613270
	// Params: [ Num(2) Size(0x2) ]
	static uint8_t SetInTimeMonitorEnabled(uint8_t bEnable);

	// Object: Function MetaStatistics.MTStatisticsHelper.SetEnabledStat
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x156131d4
	// Params: [ Num(1) Size(0x1) ]
	static void SetEnabledStat(uint8_t Value);

	// Object: Function MetaStatistics.MTStatisticsHelper.PrintDorianFuncCallStat
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x156130f4
	// Params: [ Num(2) Size(0x11) ]
	static void PrintDorianFuncCallStat(struct FString InDorianFuncName, uint8_t bShowDetail);

	// Object: Function MetaStatistics.MTStatisticsHelper.PrintCallRecordStat
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x15613014
	// Params: [ Num(2) Size(0x11) ]
	static void PrintCallRecordStat(struct FString InCallName, uint8_t bShowDetail);

	// Object: Function MetaStatistics.MTStatisticsHelper.PrintAllDorianFuncCallStat
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x15612f78
	// Params: [ Num(1) Size(0x1) ]
	static void PrintAllDorianFuncCallStat(uint8_t bShowDetail);

	// Object: Function MetaStatistics.MTStatisticsHelper.PrintAllCallRecordStatByCall
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x15612edc
	// Params: [ Num(1) Size(0x1) ]
	static void PrintAllCallRecordStatByCall(uint8_t bShowDetail);

	// Object: Function MetaStatistics.MTStatisticsHelper.PrintAllCallRecord
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x15612e40
	// Params: [ Num(1) Size(0x1) ]
	static void PrintAllCallRecord(uint8_t bShowDetail);

	// Object: Function MetaStatistics.MTStatisticsHelper.IsEnabledStat
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x15612e08
	// Params: [ Num(1) Size(0x1) ]
	static uint8_t IsEnabledStat();

	// Object: Function MetaStatistics.MTStatisticsHelper.GetSingleCallRecord
	// Flags: [Final|Native|Static|Public|HasOutParms]
	// Offset: 0x15612c84
	// Params: [ Num(3) Size(0x68) ]
	static struct FMTCallRecord GetSingleCallRecord(struct FString InCallName, const uint64_t& InID);

	// Object: Function MetaStatistics.MTStatisticsHelper.GetDorianTrace
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x15612b88
	// Params: [ Num(2) Size(0x40) ]
	static struct FMTDorianTrace GetDorianTrace(struct FString InDorianName);

	// Object: Function MetaStatistics.MTStatisticsHelper.GetDorianFunctionBindingInfo
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x15612af0
	// Params: [ Num(1) Size(0x10) ]
	static struct FString GetDorianFunctionBindingInfo();

	// Object: Function MetaStatistics.MTStatisticsHelper.GetDorianFuncCallStatStr
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x156129cc
	// Params: [ Num(3) Size(0x28) ]
	static struct FString GetDorianFuncCallStatStr(struct FString InDorianFuncName, uint8_t bShowDetail);

	// Object: Function MetaStatistics.MTStatisticsHelper.GetDorianCallRecords
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x1561290c
	// Params: [ Num(2) Size(0x20) ]
	static struct TArray<struct FMTCallRecord> GetDorianCallRecords(struct FString InDorianFuncName);

	// Object: Function MetaStatistics.MTStatisticsHelper.GetDorianCallCount
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x15612860
	// Params: [ Num(2) Size(0x18) ]
	static uint64_t GetDorianCallCount(struct FString InDorianName);

	// Object: Function MetaStatistics.MTStatisticsHelper.GetDorianAvgDurationMS
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x156127b4
	// Params: [ Num(2) Size(0x18) ]
	static double GetDorianAvgDurationMS(struct FString InDorianName);

	// Object: Function MetaStatistics.MTStatisticsHelper.GetCallTrace
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x156126b8
	// Params: [ Num(2) Size(0x40) ]
	static struct FMTCallTrace GetCallTrace(struct FString InCallName);

	// Object: Function MetaStatistics.MTStatisticsHelper.GetCallRecordStr
	// Flags: [Final|Native|Static|Public|HasOutParms]
	// Offset: 0x15612550
	// Params: [ Num(3) Size(0x68) ]
	static struct FString GetCallRecordStr(const struct FMTCallRecord& Record, uint8_t bShowDetail);

	// Object: Function MetaStatistics.MTStatisticsHelper.GetCallRecordStatStr
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x1561242c
	// Params: [ Num(3) Size(0x28) ]
	static struct FString GetCallRecordStatStr(struct FString InCallName, uint8_t bShowDetail);

	// Object: Function MetaStatistics.MTStatisticsHelper.GetCallRecords
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x1561236c
	// Params: [ Num(2) Size(0x20) ]
	static struct TArray<struct FMTCallRecord> GetCallRecords(struct FString InCallName);

	// Object: Function MetaStatistics.MTStatisticsHelper.GetCallCount
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x156122c0
	// Params: [ Num(2) Size(0x18) ]
	static uint64_t GetCallCount(struct FString InCallName);

	// Object: Function MetaStatistics.MTStatisticsHelper.GetCallAvgDurationMS
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x15612214
	// Params: [ Num(2) Size(0x18) ]
	static double GetCallAvgDurationMS(struct FString InCallName);

	// Object: Function MetaStatistics.MTStatisticsHelper.GetBoundDorianFuncV2
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x156120e8
	// Params: [ Num(2) Size(0x20) ]
	static struct FString GetBoundDorianFuncV2(struct FString Token);

	// Object: Function MetaStatistics.MTStatisticsHelper.GetBoundDorianFunc
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x15611f34
	// Params: [ Num(3) Size(0x30) ]
	static struct FString GetBoundDorianFunc(struct FString ModuleName, struct FString FuncName);

	// Object: Function MetaStatistics.MTStatisticsHelper.GetAvgDorianCallInterval
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x15611e88
	// Params: [ Num(2) Size(0x18) ]
	static double GetAvgDorianCallInterval(struct FString InDorianName);

	// Object: Function MetaStatistics.MTStatisticsHelper.GetAvgCallInterval
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x15611ddc
	// Params: [ Num(2) Size(0x18) ]
	static double GetAvgCallInterval(struct FString InCallName);

	// Object: Function MetaStatistics.MTStatisticsHelper.GetAllCallRecords
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x15611d6c
	// Params: [ Num(1) Size(0x10) ]
	static struct TArray<struct FMTCallRecord> GetAllCallRecords();

	// Object: Function MetaStatistics.MTStatisticsHelper.GetActivatedStubsInModule
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x15611c60
	// Params: [ Num(2) Size(0x20) ]
	static struct TArray<struct FString> GetActivatedStubsInModule(struct FString ModuleName);

	// Object: Function MetaStatistics.MTStatisticsHelper.GetActivatedStubs
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x15611bf0
	// Params: [ Num(1) Size(0x10) ]
	static struct TArray<struct FString> GetActivatedStubs();

	// Object: Function MetaStatistics.MTStatisticsHelper.GetActivatedModules
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x15611b80
	// Params: [ Num(1) Size(0x10) ]
	static struct TArray<struct FString> GetActivatedModules();

	// Object: Function MetaStatistics.MTStatisticsHelper.CleanStatData
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x15611b6c
	// Params: [ Num(0) Size(0x0) ]
	static void CleanStatData();

	// Object: Function MetaStatistics.MTStatisticsHelper.AnalyzeStatData
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x15611b58
	// Params: [ Num(0) Size(0x0) ]
	static void AnalyzeStatData();
};

} // namespace SDK
