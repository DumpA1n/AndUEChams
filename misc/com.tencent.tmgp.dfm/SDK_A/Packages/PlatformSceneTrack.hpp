#pragma once

#include "../CoreUObject_classes.hpp"
#include "MovieScene.hpp"

namespace SDK
{

// Package: PlatformSceneTrack
// Enums: 0
// Structs: 0
// Classes: 1

struct UPlatformSceneTrack;

// Object: Class PlatformSceneTrack.PlatformSceneTrack
// Size: 0x88 (Inherited: 0x80)
struct UPlatformSceneTrack : UMovieSceneSubTrack
{
	uint8_t isHDOnly : 1; // 0x80(0x1), Mask(0x1)
	uint8_t BitPad_0x80_1 : 7; // 0x80(0x1)
	uint8_t Pad_0x81[0x7]; // 0x81(0x7)
	DEFINE_UE_CLASS_HELPERS(UPlatformSceneTrack, "PlatformSceneTrack")

};

} // namespace SDK
