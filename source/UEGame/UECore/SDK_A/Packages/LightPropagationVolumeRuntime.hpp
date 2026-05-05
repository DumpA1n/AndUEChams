#pragma once

#include "../CoreUObject_classes.hpp"
#include "Renderer.hpp"

namespace SDK
{

// Package: LightPropagationVolumeRuntime
// Enums: 0
// Structs: 0
// Classes: 1

struct ULightPropagationVolumeBlendable;

// Object: Class LightPropagationVolumeRuntime.LightPropagationVolumeBlendable
// Size: 0x78 (Inherited: 0x28)
struct ULightPropagationVolumeBlendable : UObject
{
	DEFINE_UE_CLASS_HELPERS(ULightPropagationVolumeBlendable, "LightPropagationVolumeBlendable")

	uint8_t Pad_0x28[0x8]; // 0x28(0x8)
	struct FLightPropagationVolumeSettings Settings; // 0x30(0x40)
	float BlendWeight; // 0x70(0x4)
	uint8_t Pad_0x74[0x4]; // 0x74(0x4)
};

} // namespace SDK
