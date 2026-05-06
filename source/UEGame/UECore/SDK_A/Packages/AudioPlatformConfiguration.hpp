#pragma once

#include "../CoreUObject_classes.hpp"

namespace SDK
{

// Package: AudioPlatformConfiguration
// Enums: 1
// Structs: 1
// Classes: 0

struct FPlatformRuntimeAudioCompressionOverrides;

// Object: Enum AudioPlatformConfiguration.ESoundwaveSampleRateSettings
enum class ESoundwaveSampleRateSettings : uint8_t
{
	Max = 0,
	High = 1,
	Medium = 2,
	Low = 3,
	Min = 4,
	MatchDevice = 5
};

// Object: ScriptStruct AudioPlatformConfiguration.PlatformRuntimeAudioCompressionOverrides
// Size: 0x10 (Inherited: 0x0)
struct FPlatformRuntimeAudioCompressionOverrides
{
	bool bOverrideCompressionTimes; // 0x0(0x1)
	uint8_t Pad_0x1[0x3]; // 0x1(0x3)
	float DurationThreshold; // 0x4(0x4)
	int32_t MaxNumRandomBranches; // 0x8(0x4)
	int32_t SoundCueQualityIndex; // 0xC(0x4)
};

} // namespace SDK
