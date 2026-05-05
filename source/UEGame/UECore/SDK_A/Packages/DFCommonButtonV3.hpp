#pragma once

#include "../CoreUObject_classes.hpp"
#include "GPUserInterface.hpp"

namespace SDK
{

// Package: DFCommonButtonV3
// Enums: 0
// Structs: 0
// Classes: 1

struct UDFNamedSlot;
struct UDFScaleBox;
struct UDFSizeBox;
struct UWidgetAnimation;
struct UDFCommonButtonV3_C;

// Object: WidgetBlueprintGeneratedClass DFCommonButtonV3.DFCommonButtonV3_C
// Size: 0x2938 (Inherited: 0x28D0)
struct UDFCommonButtonV3_C : UDFCommonButton
{
	DEFINE_UE_CLASS_HELPERS(UDFCommonButtonV3_C, "DFCommonButtonV3_C")

	struct UWidgetAnimation* RecoverDeHoverAni; // 0x28D0(0x8)
	struct UWidgetAnimation* RecoverHoverAni; // 0x28D8(0x8)
	struct UWidgetAnimation* FadeOutAni; // 0x28E0(0x8)
	struct UWidgetAnimation* FadeInAni; // 0x28E8(0x8)
	struct UWidgetAnimation* DeHoverAni; // 0x28F0(0x8)
	struct UWidgetAnimation* HoverAni; // 0x28F8(0x8)
	struct UWidgetAnimation* DeDownAni; // 0x2900(0x8)
	struct UWidgetAnimation* DeUpAni; // 0x2908(0x8)
	struct UWidgetAnimation* DownAni; // 0x2910(0x8)
	struct UWidgetAnimation* UpAni; // 0x2918(0x8)
	struct UDFSizeBox* DFImageSizeBox; // 0x2920(0x8)
	struct UDFNamedSlot* DFNamedSlot_Content; // 0x2928(0x8)
	struct UDFScaleBox* DFScaleBox_0; // 0x2930(0x8)

	// Object: Function DFCommonButtonV3.DFCommonButtonV3_C.SetCheckExceedBounds
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(1) Size(0x1) ]
	void SetCheckExceedBounds(uint8_t bInCheckExceedBounds);
};

} // namespace SDK
