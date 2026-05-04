#pragma once

#include "../CoreUObject_classes.hpp"

namespace SDK
{

// Package: TextAsset
// Enums: 0
// Structs: 0
// Classes: 1

struct UTextAsset;

// Object: Class TextAsset.TextAsset
// Size: 0x40 (Inherited: 0x28)
struct UTextAsset : UObject
{
	struct FText Text; // 0x28(0x18)
	DEFINE_UE_CLASS_HELPERS(UTextAsset, "TextAsset")

};

} // namespace SDK
