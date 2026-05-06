#pragma once

#include "../CoreUObject_classes.hpp"
#include "Engine.hpp"

namespace SDK
{

// Package: MFBenchmark
// Enums: 0
// Structs: 1
// Classes: 3

struct UDataTable;
struct FMFMarkerPosDataTabelData;
struct AMFBenchmarkManager;
struct AMFBenchmarkMarker;
struct AMFMarkerDataWriter;

// Object: ScriptStruct MFBenchmark.MFMarkerPosDataTabelData
// Size: 0x20 (Inherited: 0x8)
struct FMFMarkerPosDataTabelData : FTableRowBase
{
	float PosX; // 0x8(0x4)
	float PosY; // 0xC(0x4)
	float PosZ; // 0x10(0x4)
	float RotX; // 0x14(0x4)
	float RotY; // 0x18(0x4)
	float RotZ; // 0x1C(0x4)
};

// Object: Class MFBenchmark.MFBenchmarkManager
// Size: 0x418 (Inherited: 0x300)
struct AMFBenchmarkManager : AActor
{
	DEFINE_UE_CLASS_HELPERS(AMFBenchmarkManager, "MFBenchmarkManager")

	bool bTickTrs; // 0x300(0x1)
	uint8_t Pad_0x301[0x117]; // 0x301(0x117)

	// Object: Function MFBenchmark.MFBenchmarkManager.PerformBenchmark
	// Flags: [Final|Native|Public]
	// Offset: 0x407c910
	// Params: [ Num(0) Size(0x0) ]
	void PerformBenchmark();
};

// Object: Class MFBenchmark.MFBenchmarkMarker
// Size: 0x330 (Inherited: 0x328)
struct AMFBenchmarkMarker : ANavigationObjectBase
{
	DEFINE_UE_CLASS_HELPERS(AMFBenchmarkMarker, "MFBenchmarkMarker")

	struct FName GamePerfPositionTag; // 0x324(0x8)
};

// Object: Class MFBenchmark.MFMarkerDataWriter
// Size: 0x308 (Inherited: 0x300)
struct AMFMarkerDataWriter : AActor
{
	DEFINE_UE_CLASS_HELPERS(AMFMarkerDataWriter, "MFMarkerDataWriter")

	struct UDataTable* TargetTable; // 0x300(0x8)

	// Object: Function MFBenchmark.MFMarkerDataWriter.WriteTestData
	// Flags: [Final|Native|Public]
	// Offset: 0x407c958
	// Params: [ Num(0) Size(0x0) ]
	void WriteTestData();

	// Object: Function MFBenchmark.MFMarkerDataWriter.WriteMarkerData
	// Flags: [Final|Native|Public]
	// Offset: 0x407c944
	// Params: [ Num(0) Size(0x0) ]
	void WriteMarkerData();
};

} // namespace SDK
