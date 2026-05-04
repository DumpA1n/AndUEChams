#pragma once

#include "../CoreUObject_classes.hpp"
#include "DFMGameLoading.hpp"
#include "Engine.hpp"

namespace SDK
{

// Package: LF_JustShutdownLua
// Enums: 0
// Structs: 0
// Classes: 1

struct UDFMFlowManager;
struct ULF_JustShutdownLua_C;

// Object: BlueprintGeneratedClass LF_JustShutdownLua.LF_JustShutdownLua_C
// Size: 0x70 (Inherited: 0x68)
struct ULF_JustShutdownLua_C : UDFMFlowBPBase
{
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x68(0x8)


	// Object: Function LF_JustShutdownLua.LF_JustShutdownLua_C.BP_IsMainFlow
	// Flags: [Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(1) Size(0x1) ]
	uint8_t BP_IsMainFlow();

	// Object: Function LF_JustShutdownLua.LF_JustShutdownLua_C.BP_IfStopOnError
	// Flags: [Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(1) Size(0x1) ]
	uint8_t BP_IfStopOnError();

	// Object: Function LF_JustShutdownLua.LF_JustShutdownLua_C.BP_Init
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(1) Size(0x8) ]
	void BP_Init(struct UDFMFlowManager* inFlowManager);

	// Object: Function LF_JustShutdownLua.LF_JustShutdownLua_C.BP_OnFlowStart
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(0) Size(0x0) ]
	void BP_OnFlowStart();

	// Object: Function LF_JustShutdownLua.LF_JustShutdownLua_C.ExecuteUbergraph_LF_JustShutdownLua
	// Flags: [Final|UbergraphFunction]
	// Offset: 0x101d2e88
	// Params: [ Num(1) Size(0x4) ]
	void ExecuteUbergraph_LF_JustShutdownLua(int32_t EntryPoint);
	DEFINE_UE_CLASS_HELPERS(ULF_JustShutdownLua_C, "LF_JustShutdownLua_C")

};

} // namespace SDK
