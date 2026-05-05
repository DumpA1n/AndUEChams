#pragma once

#include "../CoreUObject_classes.hpp"
#include "Engine.hpp"

namespace SDK
{

// Package: ImageStyleCustom
// Enums: 0
// Structs: 1
// Classes: 1

struct FImageStyle;
struct UImageStyleConfig;

// Object: ScriptStruct ImageStyleCustom.ImageStyle
// Size: 0x28 (Inherited: 0x8)
struct FImageStyle : FTableRowBase
{
	struct FLinearColor ColorAndOpacity; // 0x8(0x10)
	struct FName RowDescription; // 0x18(0x8)
	struct FName ColorKey; // 0x20(0x8)
};

// Object: Class ImageStyleCustom.ImageStyleConfig
// Size: 0x48 (Inherited: 0x28)
struct UImageStyleConfig : UObject
{
	DEFINE_UE_CLASS_HELPERS(UImageStyleConfig, "ImageStyleConfig")

	struct FSoftObjectPath ImageStyleTable; // 0x28(0x18)
	uint8_t bSwitch : 1; // 0x40(0x1), Mask(0x1)
	uint8_t BitPad_0x40_1 : 7; // 0x40(0x1)
	uint8_t Pad_0x41[0x7]; // 0x41(0x7)
};

} // namespace SDK
