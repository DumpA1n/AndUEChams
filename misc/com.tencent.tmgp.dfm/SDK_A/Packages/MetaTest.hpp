#pragma once

#include "../CoreUObject_classes.hpp"
#include "Engine.hpp"

namespace SDK
{

// Package: MetaTest
// Enums: 0
// Structs: 1
// Classes: 1

struct FMTExpectStat;
struct UMetaTestManager;

// Object: ScriptStruct MetaTest.MTExpectStat
// Size: 0x10 (Inherited: 0x0)
struct FMTExpectStat
{
	uint64_t Passed; // 0x0(0x8)
	uint64_t Total; // 0x8(0x8)
};

// Object: Class MetaTest.MetaTestManager
// Size: 0x28 (Inherited: 0x28)
struct UMetaTestManager : UBlueprintFunctionLibrary
{

	// Object: Function MetaTest.MetaTestManager.StubCallCountPlusOne
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x15620630
	// Params: [ Num(1) Size(0x10) ]
	static void StubCallCountPlusOne(struct FString Func_);

	// Object: Function MetaTest.MetaTestManager.StopMetaTest
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x1562061c
	// Params: [ Num(0) Size(0x0) ]
	static void StopMetaTest();

	// Object: Function MetaTest.MetaTestManager.StartMetaTest
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x15620608
	// Params: [ Num(0) Size(0x0) ]
	static void StartMetaTest();

	// Object: Function MetaTest.MetaTestManager.ShowTypeExpectStat
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x15620520
	// Params: [ Num(1) Size(0x10) ]
	static void ShowTypeExpectStat(struct FString Title);

	// Object: Function MetaTest.MetaTestManager.ShowExpectStat
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x15620438
	// Params: [ Num(1) Size(0x10) ]
	static void ShowExpectStat(struct FString Title);

	// Object: Function MetaTest.MetaTestManager.ResetTypeExpectCount
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x15620424
	// Params: [ Num(0) Size(0x0) ]
	static void ResetTypeExpectCount();

	// Object: Function MetaTest.MetaTestManager.ResetExpectCount
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x15620410
	// Params: [ Num(0) Size(0x0) ]
	static void ResetExpectCount();

	// Object: Function MetaTest.MetaTestManager.ReportStubTestResult
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x156203fc
	// Params: [ Num(0) Size(0x0) ]
	static void ReportStubTestResult();

	// Object: Function MetaTest.MetaTestManager.ReportRTTITestResult
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x156203e8
	// Params: [ Num(0) Size(0x0) ]
	static void ReportRTTITestResult();

	// Object: Function MetaTest.MetaTestManager.RegisterStub
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x15620300
	// Params: [ Num(1) Size(0x10) ]
	static void RegisterStub(struct FString Func_);

	// Object: Function MetaTest.MetaTestManager.PerfTest
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x156202ec
	// Params: [ Num(0) Size(0x0) ]
	static void PerfTest();

	// Object: Function MetaTest.MetaTestManager.Init
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x156202d8
	// Params: [ Num(0) Size(0x0) ]
	static void Init();

	// Object: Function MetaTest.MetaTestManager.GetTypeExpectStatMap
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x156202a0
	// Params: [ Num(1) Size(0x50) ]
	static struct TMap<struct FString, struct FMTExpectStat> GetTypeExpectStatMap();

	// Object: Function MetaTest.MetaTestManager.GetExpectStatMap
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x15620268
	// Params: [ Num(1) Size(0x50) ]
	static struct TMap<struct FString, struct FMTExpectStat> GetExpectStatMap();

	// Object: Function MetaTest.MetaTestManager.GetExpectStat
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x15620170
	// Params: [ Num(2) Size(0x20) ]
	static struct FMTExpectStat GetExpectStat(struct FString Type);

	// Object: Function MetaTest.MetaTestManager.AddTypeExpectStat
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x1561ffb4
	// Params: [ Num(3) Size(0x21) ]
	static void AddTypeExpectStat(struct FString Property, struct FString TypeName, uint8_t bPassed);

	// Object: Function MetaTest.MetaTestManager.AddExpectStat
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x1561fe80
	// Params: [ Num(2) Size(0x11) ]
	static void AddExpectStat(struct FString Type, uint8_t bPassed);
	DEFINE_UE_CLASS_HELPERS(UMetaTestManager, "MetaTestManager")

};

} // namespace SDK
