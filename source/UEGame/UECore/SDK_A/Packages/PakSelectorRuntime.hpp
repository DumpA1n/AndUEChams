#pragma once

#include "../CoreUObject_classes.hpp"
#include "Engine.hpp"

namespace SDK
{

// Package: PakSelectorRuntime
// Enums: 0
// Structs: 2
// Classes: 0

struct FMapPakSelectorTable;
struct FPakSelectorTable;

// Object: ScriptStruct PakSelectorRuntime.MapPakSelectorTable
// Size: 0x20 (Inherited: 0x8)
struct FMapPakSelectorTable : FTableRowBase
{
	struct FName ModuleName; // 0x8(0x8)
	struct TArray<struct FString> ModuleList; // 0x10(0x10)
};

// Object: ScriptStruct PakSelectorRuntime.PakSelectorTable
// Size: 0x38 (Inherited: 0x8)
struct FPakSelectorTable : FTableRowBase
{
	struct FName ID; // 0x8(0x8)
	struct FName PakSelectorCategoryName; // 0x10(0x8)
	struct TArray<struct FString> ModuleList; // 0x18(0x10)
	struct FName MultiModuleName; // 0x28(0x8)
	struct FName CategoryName; // 0x30(0x8)
};

} // namespace SDK
