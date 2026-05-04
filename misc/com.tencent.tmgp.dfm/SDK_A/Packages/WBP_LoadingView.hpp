#pragma once

#include "../CoreUObject_classes.hpp"
#include "DFMGameHud.hpp"
#include "Engine.hpp"

namespace SDK
{

// Package: WBP_LoadingView
// Enums: 0
// Structs: 0
// Classes: 1

enum class ESlateVisibility : uint8_t;
struct UCanvasPanel;
struct UDFBlurSlotReContainer;
struct UDFHorizontalBox;
struct UDFImage;
struct UDFSafeZone;
struct UImage;
struct UPaperSprite;
struct UPlatformPaddingBox;
struct UWBP_Common_ScaleBg_C;
struct UWBP_LoadingView_Item_C;
struct UWidgetAnimation;
struct UWBP_LoadingView_C;

// Object: WidgetBlueprintGeneratedClass WBP_LoadingView.WBP_LoadingView_C
// Size: 0x608 (Inherited: 0x4F0)
struct UWBP_LoadingView_C : ULoadingView
{
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4F0(0x8)
	struct UWidgetAnimation* WBP_LoadingView_out; // 0x4F8(0x8)
	struct UWidgetAnimation* WBP_LoadingView_weaken; // 0x500(0x8)
	struct UWidgetAnimation* WBP_LoadingView_highlight; // 0x508(0x8)
	struct UWidgetAnimation* WBP_LoadingView_Bg; // 0x510(0x8)
	struct UWidgetAnimation* logo; // 0x518(0x8)
	struct UWidgetAnimation* WBP_LoadingView_in; // 0x520(0x8)
	struct UImage* BgImage_2; // 0x528(0x8)
	struct UDFHorizontalBox* DFHorizontalBox_119; // 0x530(0x8)
	struct UDFImage* DFImage; // 0x538(0x8)
	struct UDFImage* DFImage_185; // 0x540(0x8)
	struct UDFImage* DFImage_213; // 0x548(0x8)
	struct UDFImage* DFImage_Bg; // 0x550(0x8)
	struct UDFImage* DFImage_Bg_2; // 0x558(0x8)
	struct UDFImage* DFImage_Line_17; // 0x560(0x8)
	struct UDFBlurSlotReContainer* DFNamedSlot_BlurPC; // 0x568(0x8)
	struct UDFSafeZone* DFSafeZone_90; // 0x570(0x8)
	struct UDFImage* logo_fx; // 0x578(0x8)
	struct UPlatformPaddingBox* PlatformPaddingBox_0; // 0x580(0x8)
	struct UPlatformPaddingBox* PlatformPaddingBox_1; // 0x588(0x8)
	struct UPlatformPaddingBox* PlatformPaddingBox_2; // 0x590(0x8)
	struct UPlatformPaddingBox* PlatformPaddingBox_3; // 0x598(0x8)
	struct UPlatformPaddingBox* PlatformPaddingBox_4; // 0x5A0(0x8)
	struct UPlatformPaddingBox* PlatformPaddingBox_5; // 0x5A8(0x8)
	struct UPlatformPaddingBox* PlatformPaddingBox_6; // 0x5B0(0x8)
	struct UWBP_Common_ScaleBg_C* WBP_Common_ScaleBg; // 0x5B8(0x8)
	struct UWBP_LoadingView_Item_C* WBP_LoadingView_Item; // 0x5C0(0x8)
	struct UWBP_LoadingView_Item_C* WBP_LoadingView_Item_1; // 0x5C8(0x8)
	struct UWBP_LoadingView_Item_C* WBP_LoadingView_Item_2; // 0x5D0(0x8)
	struct UCanvasPanel* wt_DesPanel; // 0x5D8(0x8)
	struct TArray<struct TSoftObjectPtr<UPaperSprite>> RefImage; // 0x5E0(0x10)
	float LastPlayTime; // 0x5F0(0x4)
	float LoopAnimTotalTime; // 0x5F4(0x4)
	struct FName Body2_24pt; // 0x5F8(0x8)
	struct FName Body4_28pt; // 0x600(0x8)


	// Object: Function WBP_LoadingView.WBP_LoadingView_C.IsPC
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(0) Size(0x0) ]
	void IsPC();

	// Object: Function WBP_LoadingView.WBP_LoadingView_C.GetVisibility_1
	// Flags: [Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure]
	// Offset: 0x101d2e88
	// Params: [ Num(1) Size(0x1) ]
	ESlateVisibility GetVisibility_1();

	// Object: Function WBP_LoadingView.WBP_LoadingView_C.OnLoaded_5DE1524C41D54E4D21FC39BF55283609
	// Flags: [BlueprintCallable|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(1) Size(0x8) ]
	void OnLoaded_5DE1524C41D54E4D21FC39BF55283609(struct UObject* Loaded);

	// Object: Function WBP_LoadingView.WBP_LoadingView_C.PreConstruct
	// Flags: [BlueprintCosmetic|Event|Public|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(1) Size(0x1) ]
	void PreConstruct(uint8_t IsDesignTime);

	// Object: Function WBP_LoadingView.WBP_LoadingView_C.Construct
	// Flags: [BlueprintCosmetic|Event|Public|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(0) Size(0x0) ]
	void Construct();

	// Object: Function WBP_LoadingView.WBP_LoadingView_C.OnPercentageAnimUpdated
	// Flags: [BlueprintCallable|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(1) Size(0x4) ]
	void OnPercentageAnimUpdated(float NewPercent);

	// Object: Function WBP_LoadingView.WBP_LoadingView_C.BP_UpdateCampImage
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(1) Size(0x4) ]
	void BP_UpdateCampImage(int32_t InCampType);

	// Object: Function WBP_LoadingView.WBP_LoadingView_C.Destruct
	// Flags: [BlueprintCosmetic|Event|Public|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(0) Size(0x0) ]
	void Destruct();

	// Object: Function WBP_LoadingView.WBP_LoadingView_C.ê~e¤I_0
	// Flags: [BlueprintCallable|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(1) Size(0x10) ]
	void __e_I_0(struct FString NewCulture);

	// Object: Function WBP_LoadingView.WBP_LoadingView_C.BP_UpdateMapAnimation
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(0) Size(0x0) ]
	void BP_UpdateMapAnimation();

	// Object: Function WBP_LoadingView.WBP_LoadingView_C.BP_OnLoadingViewPrepared_Impl
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(0) Size(0x0) ]
	void BP_OnLoadingViewPrepared_Impl();

	// Object: Function WBP_LoadingView.WBP_LoadingView_C.ExecuteUbergraph_WBP_LoadingView
	// Flags: [Final|UbergraphFunction|HasDefaults]
	// Offset: 0x101d2e88
	// Params: [ Num(1) Size(0x4) ]
	void ExecuteUbergraph_WBP_LoadingView(int32_t EntryPoint);
	DEFINE_UE_CLASS_HELPERS(UWBP_LoadingView_C, "WBP_LoadingView_C")

};

} // namespace SDK
