#pragma once

#include "../CoreUObject_classes.hpp"

namespace SDK
{

// Package: AndroidMediaFactory
// Enums: 0
// Structs: 0
// Classes: 1

struct UAndroidMediaSettings;

// Object: Class AndroidMediaFactory.AndroidMediaSettings
// Size: 0x30 (Inherited: 0x28)
struct UAndroidMediaSettings : UObject
{
	uint8_t CacheableVideoSampleBuffers : 1; // 0x28(0x1), Mask(0x1)
	uint8_t BitPad_0x28_1 : 7; // 0x28(0x1)
	uint8_t Pad_0x29[0x7]; // 0x29(0x7)
	DEFINE_UE_CLASS_HELPERS(UAndroidMediaSettings, "AndroidMediaSettings")

};

} // namespace SDK
