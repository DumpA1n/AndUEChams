#pragma once

#include "../CoreUObject_classes.hpp"
#include "DFMGameLoading.hpp"
#include "Engine.hpp"

namespace SDK
{

// Package: LF_EnterMainLobby
// Enums: 0
// Structs: 0
// Classes: 1

struct UDFMFlowManager;
struct ULF_EnterMainLobby_C;

// Object: BlueprintGeneratedClass LF_EnterMainLobby.LF_EnterMainLobby_C
// Size: 0x70 (Inherited: 0x68)
struct ULF_EnterMainLobby_C : UDFMFlowBPBase
{
	DEFINE_UE_CLASS_HELPERS(ULF_EnterMainLobby_C, "LF_EnterMainLobby_C")

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x68(0x8)

	// Object: Function LF_EnterMainLobby.LF_EnterMainLobby_C.BP_Init
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(1) Size(0x8) ]
	void BP_Init(struct UDFMFlowManager* inFlowManager);

	// Object: Function LF_EnterMainLobby.LF_EnterMainLobby_C.ExecuteUbergraph_LF_EnterMainLobby
	// Flags: [Final|UbergraphFunction]
	// Offset: 0x101d2e88
	// Params: [ Num(1) Size(0x4) ]
	void ExecuteUbergraph_LF_EnterMainLobby(int32_t EntryPoint);
};

} // namespace SDK
