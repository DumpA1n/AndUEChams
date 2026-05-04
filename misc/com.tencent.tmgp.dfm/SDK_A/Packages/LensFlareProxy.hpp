#pragma once

#include "../CoreUObject_classes.hpp"
#include "PerfGear.hpp"

namespace SDK
{

// Package: LensFlareProxy
// Enums: 0
// Structs: 0
// Classes: 1

struct APlayerController;
enum class ECollisionChannel : uint8_t;
struct ALensFlareFXProxyActor;

// Object: Class LensFlareProxy.LensFlareFXProxyActor
// Size: 0x4F8 (Inherited: 0x490)
struct ALensFlareFXProxyActor : AFXProxyActor
{
	uint8_t Pad_0x490[0x8]; // 0x490(0x8)
	float VisibilityChangeRate; // 0x498(0x4)
	float VisibilityConeAngle; // 0x49C(0x4)
	float VisibilityDistance; // 0x4A0(0x4)
	float VisibilityFadeRange; // 0x4A4(0x4)
	float VisibilityIgnoreRadius; // 0x4A8(0x4)
	float SunDistance; // 0x4AC(0x4)
	uint8_t bIsSunMode : 1; // 0x4B0(0x1), Mask(0x1)
	uint8_t BitPad_0x4B0_1 : 7; // 0x4B0(0x1)
	uint8_t Pad_0x4B1[0x2F]; // 0x4B1(0x2F)
	struct APlayerController* PlayerController; // 0x4E0(0x8)
	float FullDetailDistance; // 0x4E8(0x4)
	float ReducedTickDistance; // 0x4EC(0x4)
	uint8_t IgnoreRecentlyRendered : 1; // 0x4F0(0x1), Mask(0x1)
	uint8_t BitPad_0x4F0_1 : 7; // 0x4F0(0x1)
	ECollisionChannel LensFlareTraceChannel; // 0x4F1(0x1)
	uint8_t Pad_0x4F2[0x6]; // 0x4F2(0x6)
	DEFINE_UE_CLASS_HELPERS(ALensFlareFXProxyActor, "LensFlareFXProxyActor")

};

} // namespace SDK
