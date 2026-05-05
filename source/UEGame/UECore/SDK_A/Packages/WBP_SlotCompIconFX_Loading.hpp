#pragma once

#include "../CoreUObject_classes.hpp"
#include "DFMGlobalDefines.hpp"
#include "Engine.hpp"

namespace SDK
{

// Package: WBP_SlotCompIconFX_Loading
// Enums: 0
// Structs: 0
// Classes: 1

struct UDFCanvasPanel;
struct UWidgetAnimation;
struct UWBP_SlotCompIconFX_Loading_C;

// Object: WidgetBlueprintGeneratedClass WBP_SlotCompIconFX_Loading.WBP_SlotCompIconFX_Loading_C
// Size: 0x320 (Inherited: 0x308)
struct UWBP_SlotCompIconFX_Loading_C : UDFMImageLoadingWidget
{
	DEFINE_UE_CLASS_HELPERS(UWBP_SlotCompIconFX_Loading_C, "WBP_SlotCompIconFX_Loading_C")

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x308(0x8)
	struct UWidgetAnimation* WPB_SlotCompIconImage_Loading_loop_Triangle; // 0x310(0x8)
	struct UDFCanvasPanel* wtRootCanvas_; // 0x318(0x8)

	// Object: Function WBP_SlotCompIconFX_Loading.WBP_SlotCompIconFX_Loading_C.PlayLoadingAnim_BP
	// Flags: [Event|Protected|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(0) Size(0x0) ]
	void PlayLoadingAnim_BP();

	// Object: Function WBP_SlotCompIconFX_Loading.WBP_SlotCompIconFX_Loading_C.StopLoadingAnim_BP
	// Flags: [Event|Protected|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(0) Size(0x0) ]
	void StopLoadingAnim_BP();

	// Object: Function WBP_SlotCompIconFX_Loading.WBP_SlotCompIconFX_Loading_C.OnIconSizeChange
	// Flags: [Event|Protected|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(1) Size(0x8) ]
	void OnIconSizeChange(struct FVector2D LocalSize);

	// Object: Function WBP_SlotCompIconFX_Loading.WBP_SlotCompIconFX_Loading_C.ExecuteUbergraph_WBP_SlotCompIconFX_Loading
	// Flags: [Final|UbergraphFunction]
	// Offset: 0x101d2e88
	// Params: [ Num(1) Size(0x4) ]
	void ExecuteUbergraph_WBP_SlotCompIconFX_Loading(int32_t EntryPoint);
};

} // namespace SDK
