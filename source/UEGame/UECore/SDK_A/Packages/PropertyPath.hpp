#pragma once

#include "../CoreUObject_classes.hpp"

namespace SDK
{

// Package: PropertyPath
// Enums: 0
// Structs: 2
// Classes: 0

struct FCachedPropertyPath;
struct FPropertyPathSegment;

// Object: ScriptStruct PropertyPath.CachedPropertyPath
// Size: 0x28 (Inherited: 0x0)
struct FCachedPropertyPath
{
	struct TArray<struct FPropertyPathSegment> Segments; // 0x0(0x10)
	uint8_t Pad_0x10[0x8]; // 0x10(0x8)
	struct UFunction* CachedFunction; // 0x18(0x8)
	uint8_t Pad_0x20[0x8]; // 0x20(0x8)
};

// Object: ScriptStruct PropertyPath.PropertyPathSegment
// Size: 0x28 (Inherited: 0x0)
struct FPropertyPathSegment
{
	struct FName Name; // 0x0(0x8)
	int32_t ArrayIndex; // 0x8(0x4)
	uint8_t Pad_0xC[0x4]; // 0xC(0x4)
	struct UStruct* Struct; // 0x10(0x8)
	uint8_t Pad_0x18[0x10]; // 0x18(0x10)
};

} // namespace SDK
