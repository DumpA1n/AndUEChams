#pragma once

#include "../CoreUObject_classes.hpp"
#include "Engine.hpp"

namespace SDK
{

// Package: HDiff
// Enums: 0
// Structs: 0
// Classes: 1

struct UHDiffPatch;

// Object: Class HDiff.HDiffPatch
// Size: 0x28 (Inherited: 0x28)
struct UHDiffPatch : UBlueprintFunctionLibrary
{
	DEFINE_UE_CLASS_HELPERS(UHDiffPatch, "HDiffPatch")

	// Object: Function HDiff.HDiffPatch.MergePatch
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x5049298
	// Params: [ Num(4) Size(0x34) ]
	static int32_t MergePatch(struct FString& oldFileName, struct FString& diffFileName, struct FString& outNewFileName);

	// Object: Function HDiff.HDiffPatch.HashFile
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x50491a0
	// Params: [ Num(2) Size(0x20) ]
	static struct FString HashFile(struct FString& InFilename);

	// Object: Function HDiff.HDiffPatch.ForceMergeFail
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x5048d50
	// Params: [ Num(1) Size(0x1) ]
	static void ForceMergeFail(bool bEnable);

	// Object: Function HDiff.HDiffPatch.AsyncMergePatchList
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x5048fb8
	// Params: [ Num(5) Size(0x38) ]
	static void AsyncMergePatchList(struct FString& InTaskName, int32_t InFileID, int32_t InErrorCode, const struct TArray<struct FString>& InPakList, const struct TArray<struct FString>& InPakHashList);

	// Object: Function HDiff.HDiffPatch.AsyncCheckHash
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x5048df0
	// Params: [ Num(4) Size(0x40) ]
	static void AsyncCheckHash(struct FString& InTaskName, const struct TArray<struct FString>& InPakList, const struct TArray<struct FString>& InToCheckPakList, const struct TArray<struct FString>& InToCheckPakHashList);
};

} // namespace SDK
