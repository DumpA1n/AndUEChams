#pragma once

#include "../CoreUObject_classes.hpp"
#include "Engine.hpp"
#include "UMG.hpp"

namespace SDK
{

// Package: WBP_Common_ScaleBg
// Enums: 0
// Structs: 0
// Classes: 1

struct UDFBackgroundBox;
struct UNamedSlot;
struct UPlatformScaleBox;
struct USafeZone;
struct UWidgetAnimation;
struct UWBP_Common_ScaleBg_C;

// Object: WidgetBlueprintGeneratedClass WBP_Common_ScaleBg.WBP_Common_ScaleBg_C
// Size: 0x33B (Inherited: 0x2F8)
struct UWBP_Common_ScaleBg_C : UUserWidget
{
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2F8(0x8)
	struct UWidgetAnimation* WBP_Common_ScaleBg_in; // 0x300(0x8)
	struct UWidgetAnimation* WBP_Common_ScaleBg_out; // 0x308(0x8)
	struct UDFBackgroundBox* DFBackgroundBox_0; // 0x310(0x8)
	struct UNamedSlot* NamedSlot_195; // 0x318(0x8)
	struct UPlatformScaleBox* PlatformScaleBox_0; // 0x320(0x8)
	struct USafeZone* SafeZone_BG; // 0x328(0x8)
	struct FIntPoint OverrideContentSize; // 0x330(0x8)
	uint8_t bSwallowTouch : 1; // 0x338(0x1), Mask(0x1)
	uint8_t BitPad_0x338_1 : 7; // 0x338(0x1)
	uint8_t bDisableMobile : 1; // 0x339(0x1), Mask(0x1)
	uint8_t BitPad_0x339_1 : 7; // 0x339(0x1)
	uint8_t bDisableHD : 1; // 0x33A(0x1), Mask(0x1)
	uint8_t BitPad_0x33A_1 : 7; // 0x33A(0x1)


	// Object: Function WBP_Common_ScaleBg.WBP_Common_ScaleBg_C.PreConstruct
	// Flags: [BlueprintCosmetic|Event|Public|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(1) Size(0x1) ]
	void PreConstruct(uint8_t IsDesignTime);

	// Object: Function WBP_Common_ScaleBg.WBP_Common_ScaleBg_C.ExecuteUbergraph_WBP_Common_ScaleBg
	// Flags: [Final|UbergraphFunction]
	// Offset: 0x101d2e88
	// Params: [ Num(1) Size(0x4) ]
	void ExecuteUbergraph_WBP_Common_ScaleBg(int32_t EntryPoint);
	DEFINE_UE_CLASS_HELPERS(UWBP_Common_ScaleBg_C, "WBP_Common_ScaleBg_C")

};

} // namespace SDK
