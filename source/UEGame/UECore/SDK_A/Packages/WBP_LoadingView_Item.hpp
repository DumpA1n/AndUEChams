#pragma once

#include "../CoreUObject_classes.hpp"
#include "Engine.hpp"
#include "UMG.hpp"

namespace SDK
{

// Package: WBP_LoadingView_Item
// Enums: 0
// Structs: 0
// Classes: 1

struct UDFImage;
struct UDFTextBlock;
struct UPlatformPaddingBox;
struct UWBP_LoadingView_Item_C;

// Object: WidgetBlueprintGeneratedClass WBP_LoadingView_Item.WBP_LoadingView_Item_C
// Size: 0x378 (Inherited: 0x2F8)
struct UWBP_LoadingView_Item_C : UUserWidget
{
	DEFINE_UE_CLASS_HELPERS(UWBP_LoadingView_Item_C, "WBP_LoadingView_Item_C")

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2F8(0x8)
	struct UDFImage* DFImage_Bg; // 0x300(0x8)
	struct UPlatformPaddingBox* PlatformPaddingBox_4; // 0x308(0x8)
	struct UPlatformPaddingBox* PlatformPaddingBox_5; // 0x310(0x8)
	struct UDFTextBlock* Text_01; // 0x318(0x8)
	struct UDFTextBlock* Text_02; // 0x320(0x8)
	struct UDFTextBlock* Text_03; // 0x328(0x8)
	struct TArray<struct FText> ArrText_01; // 0x330(0x10)
	int32_t Index; // 0x340(0x4)
	uint8_t Pad_0x344[0x4]; // 0x344(0x4)
	struct TArray<struct FText> ArrText_02; // 0x348(0x10)
	struct TArray<struct FText> ArrText_03; // 0x358(0x10)
	struct TArray<struct TSoftObjectPtr<UObject>> ArrBg; // 0x368(0x10)

	// Object: Function WBP_LoadingView_Item.WBP_LoadingView_Item_C.SetInfo
	// Flags: [Public|HasDefaults|BlueprintCallable|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(1) Size(0x4) ]
	void SetInfo(int32_t Index);

	// Object: Function WBP_LoadingView_Item.WBP_LoadingView_Item_C.PreConstruct
	// Flags: [BlueprintCosmetic|Event|Public|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(1) Size(0x1) ]
	void PreConstruct(uint8_t IsDesignTime);

	// Object: Function WBP_LoadingView_Item.WBP_LoadingView_Item_C.ExecuteUbergraph_WBP_LoadingView_Item
	// Flags: [Final|UbergraphFunction]
	// Offset: 0x101d2e88
	// Params: [ Num(1) Size(0x4) ]
	void ExecuteUbergraph_WBP_LoadingView_Item(int32_t EntryPoint);
};

} // namespace SDK
