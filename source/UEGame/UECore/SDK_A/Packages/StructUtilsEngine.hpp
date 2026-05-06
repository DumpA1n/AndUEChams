#pragma once

#include "../CoreUObject_classes.hpp"
#include "Engine.hpp"

namespace SDK
{

// Package: StructUtilsEngine
// Enums: 1
// Structs: 0
// Classes: 1

struct FInstancedStruct;
struct UStructUtilsFunctionLibrary;

// Object: Enum StructUtilsEngine.EStructUtilsResult
enum class EStructUtilsResult : uint8_t
{
	Valid = 0,
	NotValid = 1,
	EStructUtilsResult_MAX = 2
};

// Object: Class StructUtilsEngine.StructUtilsFunctionLibrary
// Size: 0x28 (Inherited: 0x28)
struct UStructUtilsFunctionLibrary : UBlueprintFunctionLibrary
{
	DEFINE_UE_CLASS_HELPERS(UStructUtilsFunctionLibrary, "StructUtilsFunctionLibrary")

	// Object: Function StructUtilsEngine.StructUtilsFunctionLibrary.SetInstancedStructValue
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x4f33a10
	// Params: [ Num(2) Size(0x14) ]
	static void SetInstancedStructValue(struct FInstancedStruct& InstancedStruct, const int32_t& Value);

	// Object: Function StructUtilsEngine.StructUtilsFunctionLibrary.Reset
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x4f360ac
	// Params: [ Num(2) Size(0x18) ]
	static void Reset(struct FInstancedStruct& InstancedStruct, struct UScriptStruct* StructType);

	// Object: Function StructUtilsEngine.StructUtilsFunctionLibrary.NotEqual_InstancedStruct
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	// Offset: 0x4f35d84
	// Params: [ Num(3) Size(0x21) ]
	static bool NotEqual_InstancedStruct(const struct FInstancedStruct& A, const struct FInstancedStruct& B);

	// Object: Function StructUtilsEngine.StructUtilsFunctionLibrary.MakeInstancedStruct
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x4f33820
	// Params: [ Num(2) Size(0x18) ]
	static struct FInstancedStruct MakeInstancedStruct(const int32_t& Value);

	// Object: Function StructUtilsEngine.StructUtilsFunctionLibrary.IsValid_InstancedStruct
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	// Offset: 0x4f35ca0
	// Params: [ Num(2) Size(0x11) ]
	static bool IsValid_InstancedStruct(const struct FInstancedStruct& InstancedStruct);

	// Object: Function StructUtilsEngine.StructUtilsFunctionLibrary.IsInstancedStructValid
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x4f35fc8
	// Params: [ Num(2) Size(0x11) ]
	static EStructUtilsResult IsInstancedStructValid(const struct FInstancedStruct& InstancedStruct);

	// Object: Function StructUtilsEngine.StructUtilsFunctionLibrary.GetInstancedStructValue
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x4f33c54
	// Params: [ Num(3) Size(0x1C) ]
	static void GetInstancedStructValue(EStructUtilsResult& ExecResult, const struct FInstancedStruct& InstancedStruct, int32_t& Value);

	// Object: Function StructUtilsEngine.StructUtilsFunctionLibrary.EqualEqual_InstancedStruct
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	// Offset: 0x4f35ea8
	// Params: [ Num(3) Size(0x21) ]
	static bool EqualEqual_InstancedStruct(const struct FInstancedStruct& A, const struct FInstancedStruct& B);
};

} // namespace SDK
