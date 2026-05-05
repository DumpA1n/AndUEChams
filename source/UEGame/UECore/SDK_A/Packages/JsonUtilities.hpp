#pragma once

#include "../CoreUObject_classes.hpp"

namespace SDK
{

// Package: JsonUtilities
// Enums: 0
// Structs: 1
// Classes: 1

struct FJsonObjectWrapper;
struct UJsonUtilitiesDummyObject;

// Object: ScriptStruct JsonUtilities.JsonObjectWrapper
// Size: 0x20 (Inherited: 0x0)
struct FJsonObjectWrapper
{
	struct FString JsonString; // 0x0(0x10)
	uint8_t Pad_0x10[0x10]; // 0x10(0x10)
};

// Object: Class JsonUtilities.JsonUtilitiesDummyObject
// Size: 0x28 (Inherited: 0x28)
struct UJsonUtilitiesDummyObject : UObject
{
	DEFINE_UE_CLASS_HELPERS(UJsonUtilitiesDummyObject, "JsonUtilitiesDummyObject")
};

} // namespace SDK
