#pragma once

#include "../CoreUObject_classes.hpp"
#include "DFMGameSDK.hpp"
#include "Engine.hpp"

namespace SDK
{

// Package: WBP_Loading_TipView
// Enums: 0
// Structs: 0
// Classes: 1

struct UBackgroundBlur;
struct UDFCommonButtonV1S2_C;
struct UDFCommonButtonV1_C;
struct UDFImage;
struct UDFRichTextBlock;
struct UImage;
struct UNamedSlot;
struct UWBP_Common_ScaleBg_C;
struct UWidgetAnimation;
struct UWBP_Loading_TipView_C;

// Object: WidgetBlueprintGeneratedClass WBP_Loading_TipView.WBP_Loading_TipView_C
// Size: 0x3E8 (Inherited: 0x350)
struct UWBP_Loading_TipView_C : UCommonTipView
{
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x350(0x8)
	struct UWidgetAnimation* Anim_Out; // 0x358(0x8)
	struct UWidgetAnimation* Anim_In; // 0x360(0x8)
	struct UBackgroundBlur* BackgroundBlur; // 0x368(0x8)
	struct UImage* BG; // 0x370(0x8)
	struct UDFImage* DFImage_title_line; // 0x378(0x8)
	struct UDFImage* DFImage_title_line_02; // 0x380(0x8)
	struct UImage* Image; // 0x388(0x8)
	struct UImage* Image_6; // 0x390(0x8)
	struct UImage* Image_88; // 0x398(0x8)
	struct UImage* Image_734; // 0x3A0(0x8)
	struct UImage* Image_0101; // 0x3A8(0x8)
	struct UImage* Image_0102; // 0x3B0(0x8)
	struct UImage* Image_HDBkg; // 0x3B8(0x8)
	struct UNamedSlot* NamedSlot_247; // 0x3C0(0x8)
	struct UDFRichTextBlock* ShowLabel; // 0x3C8(0x8)
	struct UWBP_Common_ScaleBg_C* WBP_Common_ScaleBg_1; // 0x3D0(0x8)
	struct UDFCommonButtonV1S2_C* wtCancelBtn; // 0x3D8(0x8)
	struct UDFCommonButtonV1_C* wtConfirmBtn; // 0x3E0(0x8)


	// Object: Function WBP_Loading_TipView.WBP_Loading_TipView_C.OnCloseCalled
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(0) Size(0x0) ]
	void OnCloseCalled();

	// Object: Function WBP_Loading_TipView.WBP_Loading_TipView_C.Construct
	// Flags: [BlueprintCosmetic|Event|Public|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(0) Size(0x0) ]
	void Construct();

	// Object: Function WBP_Loading_TipView.WBP_Loading_TipView_C.ExecuteUbergraph_WBP_Loading_TipView
	// Flags: [Final|UbergraphFunction]
	// Offset: 0x101d2e88
	// Params: [ Num(1) Size(0x4) ]
	void ExecuteUbergraph_WBP_Loading_TipView(int32_t EntryPoint);
	DEFINE_UE_CLASS_HELPERS(UWBP_Loading_TipView_C, "WBP_Loading_TipView_C")

};

} // namespace SDK
