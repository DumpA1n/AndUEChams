#pragma once

#include "../CoreUObject_classes.hpp"

namespace SDK
{

// Package: MediaUtils
// Enums: 1
// Structs: 2
// Classes: 0

struct FMediaPlayerTrackOptions;
struct FMediaPlayerOptions;

// Object: Enum MediaUtils.EMediaPlayerOptionBooleanOverride
enum class EMediaPlayerOptionBooleanOverride : uint8_t
{
	UseMediaPlayerSetting = 0,
	Enabled = 1,
	Disabled = 2,
	EMediaPlayerOptionBooleanOverride_MAX = 3
};

// Object: ScriptStruct MediaUtils.MediaPlayerTrackOptions
// Size: 0x1C (Inherited: 0x0)
struct FMediaPlayerTrackOptions
{
	int32_t Audio; // 0x0(0x4)
	int32_t Caption; // 0x4(0x4)
	int32_t MetaData; // 0x8(0x4)
	int32_t Script; // 0xC(0x4)
	int32_t Subtitle; // 0x10(0x4)
	int32_t Text; // 0x14(0x4)
	int32_t Video; // 0x18(0x4)
};

// Object: ScriptStruct MediaUtils.MediaPlayerOptions
// Size: 0x30 (Inherited: 0x0)
struct FMediaPlayerOptions
{
	struct FMediaPlayerTrackOptions Tracks; // 0x0(0x1C)
	uint8_t Pad_0x1C[0x4]; // 0x1C(0x4)
	struct FTimespan SeekTime; // 0x20(0x8)
	EMediaPlayerOptionBooleanOverride PlayOnOpen; // 0x28(0x1)
	EMediaPlayerOptionBooleanOverride Loop; // 0x29(0x1)
	uint8_t Pad_0x2A[0x6]; // 0x2A(0x6)
};

} // namespace SDK
