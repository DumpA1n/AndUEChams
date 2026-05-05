#pragma once

#include "../CoreUObject_classes.hpp"
#include "Engine.hpp"

namespace SDK
{

// Package: CustomStats
// Enums: 0
// Structs: 0
// Classes: 2

struct UCustomGameStats;
struct UGameStatsOnFetchBaseSystem;

// Object: Class CustomStats.CustomGameStats
// Size: 0xC8 (Inherited: 0x30)
struct UCustomGameStats : UGameInstanceSubsystem
{
	DEFINE_UE_CLASS_HELPERS(UCustomGameStats, "CustomGameStats")

	uint8_t Pad_0x30[0x98]; // 0x30(0x98)
};

// Object: Class CustomStats.GameStatsOnFetchBaseSystem
// Size: 0x50 (Inherited: 0x30)
struct UGameStatsOnFetchBaseSystem : UGameInstanceSubsystem
{
	DEFINE_UE_CLASS_HELPERS(UGameStatsOnFetchBaseSystem, "GameStatsOnFetchBaseSystem")

	uint8_t Pad_0x30[0x20]; // 0x30(0x20)

	// Object: Function CustomStats.GameStatsOnFetchBaseSystem.StatsEvent
	// Flags: [Native|Public]
	// Offset: 0x7b18948
	// Params: [ Num(0) Size(0x0) ]
	void StatsEvent();
};

} // namespace SDK
