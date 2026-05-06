#pragma once

#include "../CoreUObject_classes.hpp"
#include "Engine.hpp"

namespace SDK
{

// Package: MFGlobalEvent
// Enums: 1
// Structs: 1
// Classes: 1

struct FMFGlobalEventListenerData;
struct UMFGlobalEventSubsystem;

// Object: Enum MFGlobalEvent.EMFGlobalEventTriggerType
enum class EMFGlobalEventTriggerType : uint8_t
{
	Owner = 0,
	Global = 1,
	EMFGlobalEventTriggerType_MAX = 2
};

// Object: ScriptStruct MFGlobalEvent.MFGlobalEventListenerData
// Size: 0x70 (Inherited: 0x0)
struct FMFGlobalEventListenerData
{
	uint8_t Pad_0x0[0x70]; // 0x0(0x70)
};

// Object: Class MFGlobalEvent.MFGlobalEventSubsystem
// Size: 0x80 (Inherited: 0x30)
struct UMFGlobalEventSubsystem : UWorldSubsystem
{
	DEFINE_UE_CLASS_HELPERS(UMFGlobalEventSubsystem, "MFGlobalEventSubsystem")

	uint8_t Pad_0x30[0x50]; // 0x30(0x50)
};

} // namespace SDK
