#pragma once

#include "../CoreUObject_classes.hpp"

namespace SDK
{

// Package: ImgMediaFactory
// Enums: 0
// Structs: 0
// Classes: 1

struct UImgMediaSettings;

// Object: Class ImgMediaFactory.ImgMediaSettings
// Size: 0x68 (Inherited: 0x28)
struct UImgMediaSettings : UObject
{
	DEFINE_UE_CLASS_HELPERS(UImgMediaSettings, "ImgMediaSettings")

	struct FFrameRate DefaultFrameRate; // 0x28(0x8)
	float CacheBehindPercentage; // 0x30(0x4)
	float CacheSizeGB; // 0x34(0x4)
	int32_t CacheThreads; // 0x38(0x4)
	int32_t CacheThreadStackSizeKB; // 0x3C(0x4)
	float GlobalCacheSizeGB; // 0x40(0x4)
	uint8_t UseGlobalCache : 1; // 0x44(0x1), Mask(0x1)
	uint8_t BitPad_0x44_1 : 7; // 0x44(0x1)
	uint8_t Pad_0x45[0x3]; // 0x45(0x3)
	uint32_t ExrDecoderThreads; // 0x48(0x4)
	uint8_t Pad_0x4C[0x4]; // 0x4C(0x4)
	struct FString DefaultProxy; // 0x50(0x10)
	uint8_t UseDefaultProxy : 1; // 0x60(0x1), Mask(0x1)
	uint8_t BitPad_0x60_1 : 7; // 0x60(0x1)
	uint8_t Pad_0x61[0x7]; // 0x61(0x7)
};

} // namespace SDK
