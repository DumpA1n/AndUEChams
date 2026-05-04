#pragma once

#include "../CoreUObject_classes.hpp"

namespace SDK
{

// Package: PixUIProfiler
// Enums: 1
// Structs: 0
// Classes: 1

struct UPxProfilerMgr;

// Object: Enum PixUIProfiler.EPxProfilerCapability
enum class EPxProfilerCapability : uint8_t
{
	PrintSizeChange = 0,
	PrintCountChange = 1,
	AsyncInnerData = 2,
	Count = 3,
	EPxProfilerCapability_MAX = 4
};

// Object: Class PixUIProfiler.PxProfilerMgr
// Size: 0x28 (Inherited: 0x28)
struct UPxProfilerMgr : UObject
{

	// Object: Function PixUIProfiler.PxProfilerMgr.StartProfiler
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x8b0acc0
	// Params: [ Num(0) Size(0x0) ]
	static void StartProfiler();

	// Object: Function PixUIProfiler.PxProfilerMgr.PxProfilerCapabilitySwitch
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x8b0abe8
	// Params: [ Num(2) Size(0x2) ]
	static void PxProfilerCapabilitySwitch(EPxProfilerCapability EPxProfilerCapability, uint8_t bOpen);

	// Object: Function PixUIProfiler.PxProfilerMgr.Print
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x8b0abd4
	// Params: [ Num(0) Size(0x0) ]
	static void Print();

	// Object: Function PixUIProfiler.PxProfilerMgr.GetPxProfilerCapability
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x8b0ab2c
	// Params: [ Num(2) Size(0x2) ]
	static uint8_t GetPxProfilerCapability(EPxProfilerCapability EPxProfilerCapability);

	// Object: Function PixUIProfiler.PxProfilerMgr.EndProfiler
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x8b0ab18
	// Params: [ Num(0) Size(0x0) ]
	static void EndProfiler();

	// Object: Function PixUIProfiler.PxProfilerMgr.Check
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x8b0ab04
	// Params: [ Num(0) Size(0x0) ]
	static void Check();
	DEFINE_UE_CLASS_HELPERS(UPxProfilerMgr, "PxProfilerMgr")

};

} // namespace SDK
