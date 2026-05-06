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
	DEFINE_UE_CLASS_HELPERS(UAndroidMediaSettings, "AndroidMediaSettings")

	bool CacheableVideoSampleBuffers; // 0x28(0x1)
	uint8_t Pad_0x29[0x7]; // 0x29(0x7)
};

} // namespace SDK
