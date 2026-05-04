#pragma once

#include "../CoreUObject_classes.hpp"

namespace SDK
{

// Package: AnimationDataTableImportTool
// Enums: 0
// Structs: 0
// Classes: 1

struct FDirectoryPath;
struct UDataTable;
struct UAnimationImport;

// Object: Class AnimationDataTableImportTool.AnimationImport
// Size: 0x28 (Inherited: 0x28)
struct UAnimationImport : UObject
{

	// Object: Function AnimationDataTableImportTool.AnimationImport.ImportDataTable
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x872bb7c
	// Params: [ Num(5) Size(0x40) ]
	static void ImportDataTable(struct UDataTable* Source, struct UDataTable* Destination, struct FString Prefix, struct FDirectoryPath ProjectPath, struct FDirectoryPath ChangeLogPath);
	DEFINE_UE_CLASS_HELPERS(UAnimationImport, "AnimationImport")

};

} // namespace SDK
