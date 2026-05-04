#pragma once

#include "../CoreUObject_classes.hpp"

namespace SDK
{

// Package: UObjectPlugin
// Enums: 0
// Structs: 1
// Classes: 1

struct FMyPluginStruct;
struct UMyPluginObject;

// Object: ScriptStruct UObjectPlugin.MyPluginStruct
// Size: 0x10 (Inherited: 0x0)
struct FMyPluginStruct
{
	struct FString TestString; // 0x0(0x10)
};

// Object: Class UObjectPlugin.MyPluginObject
// Size: 0x38 (Inherited: 0x28)
struct UMyPluginObject : UObject
{
	struct FMyPluginStruct MyStruct; // 0x28(0x10)
	DEFINE_UE_CLASS_HELPERS(UMyPluginObject, "MyPluginObject")

};

} // namespace SDK
