#pragma once

#include "../CoreUObject_classes.hpp"
#include "DFMGameLoading.hpp"
#include "Engine.hpp"

namespace SDK
{

// Package: PrepareMainFlowLobbyMap
// Enums: 0
// Structs: 0
// Classes: 1

struct UDFMFlowManager;
struct UPrepareMainFlowLobbyMap_C;

// Object: BlueprintGeneratedClass PrepareMainFlowLobbyMap.PrepareMainFlowLobbyMap_C
// Size: 0x78 (Inherited: 0x70)
struct UPrepareMainFlowLobbyMap_C : UDFMSubFlowBPBase
{
	DEFINE_UE_CLASS_HELPERS(UPrepareMainFlowLobbyMap_C, "PrepareMainFlowLobbyMap_C")

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x70(0x8)

	// Object: Function PrepareMainFlowLobbyMap.PrepareMainFlowLobbyMap_C.BP_Init
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(1) Size(0x8) ]
	void BP_Init(struct UDFMFlowManager* inFlowManager);

	// Object: Function PrepareMainFlowLobbyMap.PrepareMainFlowLobbyMap_C.ExecuteUbergraph_PrepareMainFlowLobbyMap
	// Flags: [Final|UbergraphFunction]
	// Offset: 0x101d2e88
	// Params: [ Num(1) Size(0x4) ]
	void ExecuteUbergraph_PrepareMainFlowLobbyMap(int32_t EntryPoint);
};

} // namespace SDK
