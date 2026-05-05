#pragma once

#include "../CoreUObject_classes.hpp"
#include "DFMGameLaunch.hpp"
#include "Engine.hpp"

namespace SDK
{

// Package: BP_GLS_LuaHotfix
// Enums: 0
// Structs: 0
// Classes: 1

struct UBP_GLS_LuaHotfix_C;

// Object: BlueprintGeneratedClass BP_GLS_LuaHotfix.BP_GLS_LuaHotfix_C
// Size: 0x58 (Inherited: 0x50)
struct UBP_GLS_LuaHotfix_C : UDFGameLaunchStepBPBase
{
	DEFINE_UE_CLASS_HELPERS(UBP_GLS_LuaHotfix_C, "BP_GLS_LuaHotfix_C")

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x50(0x8)

	// Object: Function BP_GLS_LuaHotfix.BP_GLS_LuaHotfix_C.BP_OnStepBegin
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(0) Size(0x0) ]
	void BP_OnStepBegin();

	// Object: Function BP_GLS_LuaHotfix.BP_GLS_LuaHotfix_C.OnLaunchToLogin_OnLuaHotfixEnd_Event_1
	// Flags: [BlueprintCallable|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(1) Size(0x1) ]
	void OnLaunchToLogin_OnLuaHotfixEnd_Event_1(uint8_t bEnterNextLoop);

	// Object: Function BP_GLS_LuaHotfix.BP_GLS_LuaHotfix_C.ExecuteUbergraph_BP_GLS_LuaHotfix
	// Flags: [Final|UbergraphFunction]
	// Offset: 0x101d2e88
	// Params: [ Num(1) Size(0x4) ]
	void ExecuteUbergraph_BP_GLS_LuaHotfix(int32_t EntryPoint);
};

} // namespace SDK
