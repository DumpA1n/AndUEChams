#pragma once

#include "../CoreUObject_classes.hpp"
#include "Engine.hpp"

namespace SDK
{

// Package: DFCharacterProfiler
// Enums: 0
// Structs: 1
// Classes: 1

struct FDFCharacterProfiler;
struct UDFCharacterProfilerManager;

// Object: ScriptStruct DFCharacterProfiler.DFCharacterProfiler
// Size: 0x10 (Inherited: 0x0)
struct FDFCharacterProfiler
{
	uint8_t Pad_0x0[0x10]; // 0x0(0x10)
};

// Object: Class DFCharacterProfiler.DFCharacterProfilerManager
// Size: 0x88 (Inherited: 0x30)
struct UDFCharacterProfilerManager : UGameInstanceSubsystem
{
	DEFINE_UE_CLASS_HELPERS(UDFCharacterProfilerManager, "DFCharacterProfilerManager")

	uint8_t Pad_0x30[0x58]; // 0x30(0x58)

	// Object: Function DFCharacterProfiler.DFCharacterProfilerManager.Get
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x7a61d08
	// Params: [ Num(2) Size(0x10) ]
	static struct UDFCharacterProfilerManager* Get(struct UObject* WorldContextObject);

	// Object: Function DFCharacterProfiler.DFCharacterProfilerManager.EnableAutoProfiling
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x7a61c7c
	// Params: [ Num(1) Size(0x1) ]
	void EnableAutoProfiling(uint8_t bEnable);

	// Object: Function DFCharacterProfiler.DFCharacterProfilerManager.DumpResults
	// Flags: [Final|Native|Public|BlueprintCallable|Const]
	// Offset: 0x7a61c68
	// Params: [ Num(0) Size(0x0) ]
	void DumpResults();

	// Object: Function DFCharacterProfiler.DFCharacterProfilerManager.ClearCurData
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x7a61c54
	// Params: [ Num(0) Size(0x0) ]
	void ClearCurData();
};

} // namespace SDK
