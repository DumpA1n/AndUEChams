#pragma once

#include "../CoreUObject_classes.hpp"
#include "DFMGameHud.hpp"
#include "Engine.hpp"

namespace SDK
{

// Package: WBP_SOLMapLoadingView
// Enums: 0
// Structs: 0
// Classes: 1

enum class ESlateVisibility : uint8_t;
struct UDFSafeZone;
struct UPaperSprite;
struct UWidgetAnimation;
struct UWBP_SOLMapLoadingView_C;

// Object: WidgetBlueprintGeneratedClass WBP_SOLMapLoadingView.WBP_SOLMapLoadingView_C
// Size: 0x3A8 (Inherited: 0x340)
struct UWBP_SOLMapLoadingView_C : USOLMapLoadingView
{
	DEFINE_UE_CLASS_HELPERS(UWBP_SOLMapLoadingView_C, "WBP_SOLMapLoadingView_C")

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x340(0x8)
	struct UWidgetAnimation* WBP_LoadingView_out; // 0x348(0x8)
	struct UWidgetAnimation* WBP_LoadingView_weaken; // 0x350(0x8)
	struct UWidgetAnimation* WBP_LoadingView_highlight; // 0x358(0x8)
	struct UWidgetAnimation* WBP_LoadingView_Bg; // 0x360(0x8)
	struct UWidgetAnimation* logo; // 0x368(0x8)
	struct UWidgetAnimation* WBP_LoadingView_in; // 0x370(0x8)
	struct UDFSafeZone* DFSafeZone_90; // 0x378(0x8)
	struct TArray<struct TSoftObjectPtr<UPaperSprite>> RefImage; // 0x380(0x10)
	float LastPlayTime; // 0x390(0x4)
	float LoopAnimTotalTime; // 0x394(0x4)
	struct FName Body2_24pt; // 0x398(0x8)
	struct FName Body4_28pt; // 0x3A0(0x8)

	// Object: Function WBP_SOLMapLoadingView.WBP_SOLMapLoadingView_C.IsPC
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(0) Size(0x0) ]
	void IsPC();

	// Object: Function WBP_SOLMapLoadingView.WBP_SOLMapLoadingView_C.GetVisibility_1
	// Flags: [Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure]
	// Offset: 0x101d2e88
	// Params: [ Num(1) Size(0x1) ]
	ESlateVisibility GetVisibility_1();

	// Object: Function WBP_SOLMapLoadingView.WBP_SOLMapLoadingView_C.Construct
	// Flags: [BlueprintCosmetic|Event|Public|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(0) Size(0x0) ]
	void Construct();

	// Object: Function WBP_SOLMapLoadingView.WBP_SOLMapLoadingView_C.ExecuteUbergraph_WBP_SOLMapLoadingView
	// Flags: [Final|UbergraphFunction]
	// Offset: 0x101d2e88
	// Params: [ Num(1) Size(0x4) ]
	void ExecuteUbergraph_WBP_SOLMapLoadingView(int32_t EntryPoint);
};

} // namespace SDK
