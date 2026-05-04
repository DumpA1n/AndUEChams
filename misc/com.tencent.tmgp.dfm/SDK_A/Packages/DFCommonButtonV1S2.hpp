#pragma once

#include "../CoreUObject_classes.hpp"
#include "Engine.hpp"
#include "GPUserInterface.hpp"

namespace SDK
{

// Package: DFCommonButtonV1S2
// Enums: 0
// Structs: 0
// Classes: 1

struct UDFImage;
struct UDFNamedSlot;
struct UWidgetAnimation;
struct UDFCommonButtonV1S2_C;

// Object: WidgetBlueprintGeneratedClass DFCommonButtonV1S2.DFCommonButtonV1S2_C
// Size: 0x2958 (Inherited: 0x28D0)
struct UDFCommonButtonV1S2_C : UDFCommonButton
{
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
	struct UDFImage* DFImage_120; // 0x2940(0x8)
	struct UDFNamedSlot* DFNamedSlot_Content; // 0x2948(0x8)
	struct UDFImage* DownAni_fx; // 0x2950(0x8)


	// Object: Function DFCommonButtonV1S2.DFCommonButtonV1S2_C.OnSetThemeIDChanged
	// Flags: [BlueprintCosmetic|Event|Public|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(1) Size(0x10) ]
	void OnSetThemeIDChanged(struct FString InThemeID);

	// Object: Function DFCommonButtonV1S2.DFCommonButtonV1S2_C.ExecuteUbergraph_DFCommonButtonV1S2
	// Flags: [Final|UbergraphFunction]
	// Offset: 0x101d2e88
	// Params: [ Num(1) Size(0x4) ]
	void ExecuteUbergraph_DFCommonButtonV1S2(int32_t EntryPoint);
	DEFINE_UE_CLASS_HELPERS(UDFCommonButtonV1S2_C, "DFCommonButtonV1S2_C")

};

} // namespace SDK
