#pragma once

#include "../CoreUObject_classes.hpp"
#include "DFMGameHud.hpp"
#include "Engine.hpp"

namespace SDK
{

// Package: WBP_ModeLoading2
// Enums: 0
// Structs: 0
// Classes: 1

enum class EGPLoadingDestination : uint8_t;
struct FSlateBrush;
struct UDFImage;
struct UDFRetainerBox;
struct UPlatformPaddingBox;
struct UWBP_Common_ScaleBg_C;
struct UWidgetAnimation;
struct UWBP_ModeLoading2_C;

// Object: WidgetBlueprintGeneratedClass WBP_ModeLoading2.WBP_ModeLoading2_C
// Size: 0x3E0 (Inherited: 0x350)
struct UWBP_ModeLoading2_C : UModeLoadingView
{
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x350(0x8)
	struct UWidgetAnimation* WBP_ModeLoading_Type0_loop; // 0x358(0x8)
	struct UDFImage* DFImage_60; // 0x360(0x8)
	struct UDFImage* DFImage_138; // 0x368(0x8)
	struct UDFImage* DFImage_208; // 0x370(0x8)
	struct UDFRetainerBox* DFRetainerBox_0; // 0x378(0x8)
	struct UDFImage* logo_fx; // 0x380(0x8)
	struct UPlatformPaddingBox* PlatformPaddingBox_0; // 0x388(0x8)
	struct UWBP_Common_ScaleBg_C* WBP_Common_ScaleBg; // 0x390(0x8)
	int32_t Type; // 0x398(0x4)
	uint8_t Pad_0x39C[0x4]; // 0x39C(0x4)
	struct TArray<struct FSlateBrush> BG; // 0x3A0(0x10)
	struct FText ModeText_0; // 0x3B0(0x18)
	struct FText ModeText_1; // 0x3C8(0x18)


	// Object: Function WBP_ModeLoading2.WBP_ModeLoading2_C.SetStyle
	// Flags: [Public|HasDefaults|BlueprintCallable|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(1) Size(0x4) ]
	void SetStyle(int32_t Type);

	// Object: Function WBP_ModeLoading2.WBP_ModeLoading2_C.PreConstruct
	// Flags: [BlueprintCosmetic|Event|Public|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(1) Size(0x1) ]
	void PreConstruct(uint8_t IsDesignTime);

	// Object: Function WBP_ModeLoading2.WBP_ModeLoading2_C.BP_InitMode
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(1) Size(0x1) ]
	void BP_InitMode(EGPLoadingDestination LoadingDestination);

	// Object: Function WBP_ModeLoading2.WBP_ModeLoading2_C.LoadingViewDelayClose
	// Flags: [BlueprintCallable|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(0) Size(0x0) ]
	void LoadingViewDelayClose();

	// Object: Function WBP_ModeLoading2.WBP_ModeLoading2_C.ExecuteUbergraph_WBP_ModeLoading2
	// Flags: [Final|UbergraphFunction]
	// Offset: 0x101d2e88
	// Params: [ Num(1) Size(0x4) ]
	void ExecuteUbergraph_WBP_ModeLoading2(int32_t EntryPoint);
	DEFINE_UE_CLASS_HELPERS(UWBP_ModeLoading2_C, "WBP_ModeLoading2_C")

};

} // namespace SDK
