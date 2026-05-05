#pragma once

#include "../CoreUObject_classes.hpp"

namespace SDK
{

// Package: NetCore
// Enums: 0
// Structs: 1
// Classes: 1

struct FNetAnalyticsDataConfig;
struct UNetAnalyticsAggregatorConfig;

// Object: ScriptStruct NetCore.NetAnalyticsDataConfig
// Size: 0xC (Inherited: 0x0)
struct FNetAnalyticsDataConfig
{
	struct FName DataName; // 0x0(0x8)
	uint8_t bEnabled : 1; // 0x8(0x1), Mask(0x1)
	uint8_t BitPad_0x8_1 : 7; // 0x8(0x1)
	uint8_t Pad_0x9[0x3]; // 0x9(0x3)
};

// Object: Class NetCore.NetAnalyticsAggregatorConfig
// Size: 0x38 (Inherited: 0x28)
struct UNetAnalyticsAggregatorConfig : UObject
{
	DEFINE_UE_CLASS_HELPERS(UNetAnalyticsAggregatorConfig, "NetAnalyticsAggregatorConfig")

	struct TArray<struct FNetAnalyticsDataConfig> NetAnalyticsData; // 0x28(0x10)
};

} // namespace SDK
