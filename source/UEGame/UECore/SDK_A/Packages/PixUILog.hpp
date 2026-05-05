#pragma once

#include "../CoreUObject_classes.hpp"

namespace SDK
{

// Package: PixUILog
// Enums: 2
// Structs: 0
// Classes: 1

struct UPxLogMgr;

// Object: Enum PixUILog.EPxLogLevels
enum class EPxLogLevels : uint8_t
{
	Log = 0,
	Warning = 1,
	Error = 2,
	Debug = 3,
	Count = 4,
	EPxLogLevels_MAX = 5
};

// Object: Enum PixUILog.EPxLogGroups
enum class EPxLogGroups : uint8_t
{
	Core = 0,
	Plugin = 1,
	Script = 2,
	Profiler = 3,
	Count = 4,
	EPxLogGroups_MAX = 5
};

// Object: Class PixUILog.PxLogMgr
// Size: 0x38 (Inherited: 0x28)
struct UPxLogMgr : UObject
{
	DEFINE_UE_CLASS_HELPERS(UPxLogMgr, "PxLogMgr")

	struct FMulticastInlineDelegate LogDelegate; // 0x28(0x10)

	// Object: Function PixUILog.PxLogMgr.PxLogToggleSwitchLevel
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x8b0a074
	// Params: [ Num(2) Size(0x2) ]
	static void PxLogToggleSwitchLevel(EPxLogLevels eLogLevel, uint8_t beOpen);

	// Object: Function PixUILog.PxLogMgr.PxLogToggleSwitchGroup
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x8b09f9c
	// Params: [ Num(2) Size(0x2) ]
	static void PxLogToggleSwitchGroup(EPxLogGroups eLogGroup, uint8_t beOpen);

	// Object: Function PixUILog.PxLogMgr.PxLogToggleForceLocalOutPut
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x8b09f00
	// Params: [ Num(1) Size(0x1) ]
	static void PxLogToggleForceLocalOutPut(uint8_t beOpen);

	// Object: Function PixUILog.PxLogMgr.PxLogEnable
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x8b09e64
	// Params: [ Num(1) Size(0x1) ]
	static void PxLogEnable(uint8_t beEnable);

	// Object: Function PixUILog.PxLogMgr.Get
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x8b09e30
	// Params: [ Num(1) Size(0x8) ]
	static struct UPxLogMgr* Get();

	// Object: Function PixUILog.PxLogMgr.DispatchLog
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x8b09d1c
	// Params: [ Num(3) Size(0x18) ]
	static void DispatchLog(EPxLogGroups eLogGroup, EPxLogLevels eLogLevel, struct FString strLogContent);
};

} // namespace SDK
