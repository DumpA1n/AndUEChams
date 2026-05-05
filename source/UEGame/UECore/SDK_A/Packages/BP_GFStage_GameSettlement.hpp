#pragma once

#include "../CoreUObject_classes.hpp"
#include "Engine.hpp"
#include "GPGameFlow.hpp"

namespace SDK
{

// Package: BP_GFStage_GameSettlement
// Enums: 0
// Structs: 0
// Classes: 1

struct UBP_GFStage_GameSettlement_C;

// Object: BlueprintGeneratedClass BP_GFStage_GameSettlement.BP_GFStage_GameSettlement_C
// Size: 0x90 (Inherited: 0x88)
struct UBP_GFStage_GameSettlement_C : UGameFlowStage
{
	DEFINE_UE_CLASS_HELPERS(UBP_GFStage_GameSettlement_C, "BP_GFStage_GameSettlement_C")

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x88(0x8)

	// Object: Function BP_GFStage_GameSettlement.BP_GFStage_GameSettlement_C.OnLuaGameFlowEvent_C4546DCA4EDEFDC124912BBB4856B2E1
	// Flags: [BlueprintCallable|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(1) Size(0x10) ]
	void OnLuaGameFlowEvent_C4546DCA4EDEFDC124912BBB4856B2E1(struct FString ArgStr);

	// Object: Function BP_GFStage_GameSettlement.BP_GFStage_GameSettlement_C.OnLuaGameFlowEvent_A57748C24DDEFDB4DFA1DCA710361A0E
	// Flags: [BlueprintCallable|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(1) Size(0x10) ]
	void OnLuaGameFlowEvent_A57748C24DDEFDB4DFA1DCA710361A0E(struct FString ArgStr);

	// Object: Function BP_GFStage_GameSettlement.BP_GFStage_GameSettlement_C.OnLuaGameFlowEvent_F1EA953A456161FE751993B737F225F7
	// Flags: [BlueprintCallable|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(1) Size(0x10) ]
	void OnLuaGameFlowEvent_F1EA953A456161FE751993B737F225F7(struct FString ArgStr);

	// Object: Function BP_GFStage_GameSettlement.BP_GFStage_GameSettlement_C.OnLuaGameFlowEvent_3674C56C429C6D13D7D8BB9E568EB6E8
	// Flags: [BlueprintCallable|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(1) Size(0x10) ]
	void OnLuaGameFlowEvent_3674C56C429C6D13D7D8BB9E568EB6E8(struct FString ArgStr);

	// Object: Function BP_GFStage_GameSettlement.BP_GFStage_GameSettlement_C.OnBeginStage
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(1) Size(0x8) ]
	void OnBeginStage(struct UObject* Args);

	// Object: Function BP_GFStage_GameSettlement.BP_GFStage_GameSettlement_C.OnEndStage
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(0) Size(0x0) ]
	void OnEndStage();

	// Object: Function BP_GFStage_GameSettlement.BP_GFStage_GameSettlement_C.ExecuteUbergraph_BP_GFStage_GameSettlement
	// Flags: [Final|UbergraphFunction]
	// Offset: 0x101d2e88
	// Params: [ Num(1) Size(0x4) ]
	void ExecuteUbergraph_BP_GFStage_GameSettlement(int32_t EntryPoint);
};

} // namespace SDK
