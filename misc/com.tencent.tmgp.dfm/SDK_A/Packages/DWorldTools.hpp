#pragma once

#include "../CoreUObject_classes.hpp"

namespace SDK
{

// Package: DWorldTools
// Enums: 0
// Structs: 2
// Classes: 0

struct FMapEconomyReportData;
struct FMapEconomyReportItem;

// Object: ScriptStruct DWorldTools.MapEconomyReportData
// Size: 0x30 (Inherited: 0x0)
struct FMapEconomyReportData
{
	struct FString platform; // 0x0(0x10)
	struct FString Version; // 0x10(0x10)
	struct TArray<struct FMapEconomyReportItem> resource; // 0x20(0x10)
};

// Object: ScriptStruct DWorldTools.MapEconomyReportItem
// Size: 0x40 (Inherited: 0x0)
struct FMapEconomyReportItem
{
	int32_t map_id; // 0x0(0x4)
	int32_t battle_level; // 0x4(0x4)
	int32_t loc_id; // 0x8(0x4)
	uint8_t Pad_0xC[0x4]; // 0xC(0x4)
	struct FString loc_xyz; // 0x10(0x10)
	struct FString item_name; // 0x20(0x10)
	uint64_t item_id; // 0x30(0x8)
	uint32_t item_num; // 0x38(0x4)
	uint32_t item_value; // 0x3C(0x4)
};

} // namespace SDK
