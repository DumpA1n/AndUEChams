#pragma once

#include "../CoreUObject_classes.hpp"
#include "GPUserInterface.hpp"

namespace SDK
{

// Package: DFMGameUserInterface
// Enums: 0
// Structs: 0
// Classes: 1

struct UDFCommonTabWidget;
struct UHDKeyIconBoxWidget;
struct UNamedSlot;
struct UDFCommonTabNavigator;

// Object: Class DFMGameUserInterface.DFCommonTabNavigator
// Size: 0x3A8 (Inherited: 0x360)
struct UDFCommonTabNavigator : UDFCommonTabNavigatorBase
{
	struct FName PrevAction; // 0x360(0x8)
	struct FName NextAction; // 0x368(0x8)
	int32_t ActionPriority; // 0x370(0x4)
	uint8_t bLoop : 1; // 0x374(0x1), Mask(0x1)
	uint8_t BitPad_0x374_1 : 7; // 0x374(0x1)
	uint8_t bAutoBindActions : 1; // 0x375(0x1), Mask(0x1)
	uint8_t BitPad_0x375_1 : 7; // 0x375(0x1)
	uint8_t Pad_0x376[0x2]; // 0x376(0x2)
	float KeyIconHeight; // 0x378(0x4)
	uint8_t Pad_0x37C[0x4]; // 0x37C(0x4)
	struct UHDKeyIconBoxWidget* PrevKeyIcon; // 0x380(0x8)
	struct UHDKeyIconBoxWidget* NextKeyIcon; // 0x388(0x8)
	struct UNamedSlot* ChildSlot; // 0x390(0x8)
	uint8_t Pad_0x398[0x8]; // 0x398(0x8)
	struct UDFCommonTabWidget* TabWidget; // 0x3A0(0x8)


	// Object: Function DFMGameUserInterface.DFCommonTabNavigator.InitKeyIcons
	// Flags: [Final|Native|Public]
	// Offset: 0x1358fd24
	// Params: [ Num(0) Size(0x0) ]
	void InitKeyIcons();
	DEFINE_UE_CLASS_HELPERS(UDFCommonTabNavigator, "DFCommonTabNavigator")

};

} // namespace SDK
