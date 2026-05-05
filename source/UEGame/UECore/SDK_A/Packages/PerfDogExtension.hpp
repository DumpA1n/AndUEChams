#pragma once

#include "../CoreUObject_classes.hpp"
#include "Engine.hpp"

namespace SDK
{

// Package: PerfDogExtension
// Enums: 0
// Structs: 0
// Classes: 1

struct UPerfDogSession;

// Object: Class PerfDogExtension.PerfDogSession
// Size: 0x68 (Inherited: 0x30)
struct UPerfDogSession : UGameInstanceSubsystem
{
	DEFINE_UE_CLASS_HELPERS(UPerfDogSession, "PerfDogSession")

	uint8_t Pad_0x30[0x38]; // 0x30(0x38)
};

} // namespace SDK
