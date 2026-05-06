#pragma once

#include "../CoreUObject_classes.hpp"
#include "Engine.hpp"

namespace SDK
{

// Package: OodleNetworkHandlerComponent
// Enums: 1
// Structs: 0
// Classes: 1

struct UOodleNetworkTrainerCommandlet;

// Object: Enum OodleNetworkHandlerComponent.EOodleEnableMode
enum class EOodleEnableMode : uint8_t
{
	AlwaysEnabled = 0,
	WhenCompressedPacketReceived = 1,
	EOodleEnableMode_MAX = 2
};

// Object: Class OodleNetworkHandlerComponent.OodleNetworkTrainerCommandlet
// Size: 0x98 (Inherited: 0x80)
struct UOodleNetworkTrainerCommandlet : UCommandlet
{
	DEFINE_UE_CLASS_HELPERS(UOodleNetworkTrainerCommandlet, "OodleNetworkTrainerCommandlet")

	bool bCompressionTest; // 0x79(0x1)
	int32_t HashTableSize; // 0x7C(0x4)
	int32_t DictionarySize; // 0x80(0x4)
	int32_t DictionaryTrials; // 0x84(0x4)
	int32_t TrialRandomness; // 0x88(0x4)
	int32_t TrialGenerations; // 0x8C(0x4)
	bool bNoTrials; // 0x90(0x1)
	uint8_t Pad_0x96[0x2]; // 0x96(0x2)
};

} // namespace SDK
