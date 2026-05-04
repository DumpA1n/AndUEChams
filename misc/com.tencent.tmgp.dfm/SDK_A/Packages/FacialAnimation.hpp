#pragma once

#include "../CoreUObject_classes.hpp"
#include "Engine.hpp"

namespace SDK
{

// Package: FacialAnimation
// Enums: 0
// Structs: 0
// Classes: 1

struct UAudioCurveSourceComponent;

// Object: Class FacialAnimation.AudioCurveSourceComponent
// Size: 0x810 (Inherited: 0x7D0)
struct UAudioCurveSourceComponent : UAudioComponent
{
	uint8_t Pad_0x7D0[0x8]; // 0x7D0(0x8)
	struct FName CurveSourceBindingName; // 0x7D8(0x8)
	float CurveSyncOffset; // 0x7E0(0x4)
	uint8_t Pad_0x7E4[0x2C]; // 0x7E4(0x2C)
	DEFINE_UE_CLASS_HELPERS(UAudioCurveSourceComponent, "AudioCurveSourceComponent")

};

} // namespace SDK
