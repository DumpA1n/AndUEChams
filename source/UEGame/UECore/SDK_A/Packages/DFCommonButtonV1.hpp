#pragma once

#include "../CoreUObject_classes.hpp"
#include "Engine.hpp"
#include "GPUserInterface.hpp"

namespace SDK
{

// Package: DFCommonButtonV1
// Enums: 0
// Structs: 0
// Classes: 1

struct UDFImage;
struct UDFNamedSlot;
struct UWidgetAnimation;
struct UDFCommonButtonV1_C;

// Object: WidgetBlueprintGeneratedClass DFCommonButtonV1.DFCommonButtonV1_C
// Size: 0x2958 (Inherited: 0x28D0)
struct UDFCommonButtonV1_C : UDFCommonButton
{
	DEFINE_UE_CLASS_HELPERS(UDFCommonButtonV1_C, "DFCommonButtonV1_C")

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x28D0(0x8)
	struct UWidgetAnimation* RecoverDeHoverAni; // 0x28D8(0x8)
	struct UWidgetAnimation* RecoverHoverAni; // 0x28E0(0x8)
	struct UWidgetAnimation* LoopAni; // 0x28E8(0x8)
	struct UWidgetAnimation* FadeOutAni_weak; // 0x28F0(0x8)
	struct UWidgetAnimation* FadeInAni_weak; // 0x28F8(0x8)
	struct UWidgetAnimation* FadeOutAni; // 0x2900(0x8)
	struct UWidgetAnimation* FadeInAni; // 0x2908(0x8)
	struct UWidgetAnimation* DeHoverAni; // 0x2910(0x8)
	struct UWidgetAnimation* HoverAni; // 0x2918(0x8)
	struct UWidgetAnimation* DeDownAni; // 0x2920(0x8)
	struct UWidgetAnimation* DeUpAni; // 0x2928(0x8)
	struct UWidgetAnimation* DownAni; // 0x2930(0x8)
	struct UWidgetAnimation* UpAni; // 0x2938(0x8)
	struct UDFImage* DFImage_80; // 0x2940(0x8)
	struct UDFNamedSlot* DFNamedSlot_Content; // 0x2948(0x8)
	struct UDFImage* DownAni_fx_1; // 0x2950(0x8)

	// Object: Function DFCommonButtonV1.DFCommonButtonV1_C.OnSetThemeIDChanged
	// Flags: [BlueprintCosmetic|Event|Public|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(1) Size(0x10) ]
	void OnSetThemeIDChanged(struct FString InThemeID);

	// Object: Function DFCommonButtonV1.DFCommonButtonV1_C.ExecuteUbergraph_DFCommonButtonV1
	// Flags: [Final|UbergraphFunction]
	// Offset: 0x101d2e88
	// Params: [ Num(1) Size(0x4) ]
	void ExecuteUbergraph_DFCommonButtonV1(int32_t EntryPoint);
};

} // namespace SDK
