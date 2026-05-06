#pragma once

#include "../CoreUObject_classes.hpp"
#include "G6Base.hpp"

namespace SDK
{

// Package: G6
// Enums: 0
// Structs: 0
// Classes: 6

struct UG6LogicStep_CleanGameEnv;
struct UG6LogicStep_GlobalInitialize;
struct UG6LogicStep_LanchLua;
struct UG6LogicStep_Update;
struct UG6LuaAppMain;
struct UG6LuaScriptManager;

// Object: Class G6.G6LogicStep_CleanGameEnv
// Size: 0x30 (Inherited: 0x30)
struct UG6LogicStep_CleanGameEnv : UG6LogicStep
{
	DEFINE_UE_CLASS_HELPERS(UG6LogicStep_CleanGameEnv, "G6LogicStep_CleanGameEnv")
};

// Object: Class G6.G6LogicStep_GlobalInitialize
// Size: 0x30 (Inherited: 0x30)
struct UG6LogicStep_GlobalInitialize : UG6LogicStep
{
	DEFINE_UE_CLASS_HELPERS(UG6LogicStep_GlobalInitialize, "G6LogicStep_GlobalInitialize")
};

// Object: Class G6.G6LogicStep_LanchLua
// Size: 0x30 (Inherited: 0x30)
struct UG6LogicStep_LanchLua : UG6LogicStep
{
	DEFINE_UE_CLASS_HELPERS(UG6LogicStep_LanchLua, "G6LogicStep_LanchLua")
};

// Object: Class G6.G6LogicStep_Update
// Size: 0x30 (Inherited: 0x30)
struct UG6LogicStep_Update : UG6LogicStep
{
	DEFINE_UE_CLASS_HELPERS(UG6LogicStep_Update, "G6LogicStep_Update")
};

// Object: Class G6.G6LuaAppMain
// Size: 0x58 (Inherited: 0x28)
struct UG6LuaAppMain : UObject
{
	DEFINE_UE_CLASS_HELPERS(UG6LuaAppMain, "G6LuaAppMain")

	uint8_t Pad_0x28[0x30]; // 0x28(0x30)
};

// Object: Class G6.G6LuaScriptManager
// Size: 0x50 (Inherited: 0x28)
struct UG6LuaScriptManager : UObject
{
	DEFINE_UE_CLASS_HELPERS(UG6LuaScriptManager, "G6LuaScriptManager")

	bool bIsGCLock; // 0x28(0x1)
	uint8_t Pad_0x29[0x3]; // 0x29(0x3)
	int32_t TickInterval; // 0x2C(0x4)
	uint8_t Pad_0x30[0x20]; // 0x30(0x20)

	// Object: Function G6.G6LuaScriptManager.LogLancherProccess
	// Flags: [Final|Native|Public]
	// Offset: 0x8bc3cb0
	// Params: [ Num(1) Size(0x10) ]
	void LogLancherProccess(struct FString Tag);

	// Object: Function G6.G6LuaScriptManager.ChangeGCINCMode
	// Flags: [Final|Native|Public]
	// Offset: 0x4e6b32c
	// Params: [ Num(0) Size(0x0) ]
	void ChangeGCINCMode();

	// Object: Function G6.G6LuaScriptManager.ChangeGCGENMode
	// Flags: [Final|Native|Public]
	// Offset: 0x4e6b318
	// Params: [ Num(0) Size(0x0) ]
	void ChangeGCGENMode();
};

} // namespace SDK
