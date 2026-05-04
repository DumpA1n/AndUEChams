#pragma once

#include "../CoreUObject_classes.hpp"
#include "Engine.hpp"
#include "GPGameFlow.hpp"

namespace SDK
{

// Package: BP_GFStage_ModeHallToLobby
// Enums: 0
// Structs: 0
// Classes: 1

struct UBP_GFStage_ModeHallToLobby_C;

// Object: BlueprintGeneratedClass BP_GFStage_ModeHallToLobby.BP_GFStage_ModeHallToLobby_C
// Size: 0x90 (Inherited: 0x88)
struct UBP_GFStage_ModeHallToLobby_C : UGameFlowStage
{
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x88(0x8)


	// Object: Function BP_GFStage_ModeHallToLobby.BP_GFStage_ModeHallToLobby_C.OnBeginStage
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(1) Size(0x8) ]
	void OnBeginStage(struct UObject* Args);

	// Object: Function BP_GFStage_ModeHallToLobby.BP_GFStage_ModeHallToLobby_C.ExecuteUbergraph_BP_GFStage_ModeHallToLobby
	// Flags: [Final|UbergraphFunction]
	// Offset: 0x101d2e88
	// Params: [ Num(1) Size(0x4) ]
	void ExecuteUbergraph_BP_GFStage_ModeHallToLobby(int32_t EntryPoint);
	DEFINE_UE_CLASS_HELPERS(UBP_GFStage_ModeHallToLobby_C, "BP_GFStage_ModeHallToLobby_C")

};

} // namespace SDK
