#pragma once

#include "../CoreUObject_classes.hpp"
#include "Engine.hpp"
#include "slua_unreal.hpp"

namespace SDK
{

// Package: NZLuaRuntime
// Enums: 1
// Structs: 1
// Classes: 4

struct FLuaBPVar;
struct FLuaFileTag;
struct ULuaBlueprintBridge;
struct ULuaScript;
struct ANZLuaGameModeBase;
struct UNZLuaUIViewWithFileTag;

// Object: Enum NZLuaRuntime.ELuaArgumentType
enum class ELuaArgumentType : uint8_t
{
	None = 0,
	Boolean = 1,
	Int = 2,
	Float = 3,
	String = 4,
	Object = 5,
	ELuaArgumentType_MAX = 6
};

// Object: ScriptStruct NZLuaRuntime.LuaFileTag
// Size: 0x10 (Inherited: 0x0)
struct FLuaFileTag
{
	struct FString LuaFilePath; // 0x0(0x10)
};

// Object: Class NZLuaRuntime.LuaBlueprintBridge
// Size: 0x28 (Inherited: 0x28)
struct ULuaBlueprintBridge : UBlueprintFunctionLibrary
{

	// Object: Function NZLuaRuntime.LuaBlueprintBridge.LuaCtorCallFunction
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x77595d0
	// Params: [ Num(5) Size(0x48) ]
	static void LuaCtorCallFunction(struct UObject* WorldContextObject, struct FString Filename, struct FString FuncName, const struct TArray<struct FLuaBPVar>& Args, struct FString StateName);

	// Object: Function NZLuaRuntime.LuaBlueprintBridge.LuaCallFunction
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x77593c4
	// Params: [ Num(4) Size(0x38) ]
	static void LuaCallFunction(struct UObject* WorldContextObject, struct FString FuncName, const struct TArray<struct FLuaBPVar>& Args, struct FString StateName);

	// Object: Function NZLuaRuntime.LuaBlueprintBridge.CreateVarFromObject
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x77592a8
	// Params: [ Num(3) Size(0x30) ]
	static struct FLuaBPVar CreateVarFromObject(struct UObject* WorldContextObject, struct UObject* InTheObject);
	DEFINE_UE_CLASS_HELPERS(ULuaBlueprintBridge, "LuaBlueprintBridge")

};

// Object: Class NZLuaRuntime.LuaScript
// Size: 0x58 (Inherited: 0x28)
struct ULuaScript : UObject
{
	struct FString Code; // 0x28(0x10)
	struct FString ImportPath; // 0x38(0x10)
	struct TArray<uint8_t> CodeBuffer; // 0x48(0x10)
	DEFINE_UE_CLASS_HELPERS(ULuaScript, "LuaScript")

};

// Object: Class NZLuaRuntime.NZLuaGameModeBase
// Size: 0x458 (Inherited: 0x458)
struct ANZLuaGameModeBase : AGameMode
{	DEFINE_UE_CLASS_HELPERS(ANZLuaGameModeBase, "NZLuaGameModeBase")

};

// Object: Class NZLuaRuntime.NZLuaUIViewWithFileTag
// Size: 0x400 (Inherited: 0x3F0)
struct UNZLuaUIViewWithFileTag : ULuaUserWidget
{
	struct FLuaFileTag LuaFileTag; // 0x3F0(0x10)
	DEFINE_UE_CLASS_HELPERS(UNZLuaUIViewWithFileTag, "NZLuaUIViewWithFileTag")

};

} // namespace SDK
