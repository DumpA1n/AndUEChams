#pragma once

#include "../CoreUObject_classes.hpp"
#include "Engine.hpp"
#include "GPGameFlow.hpp"

namespace SDK
{

// Package: BP_GFStage_Game
// Enums: 0
// Structs: 0
// Classes: 1

enum class EMatchOverReason : uint8_t;
struct UBP_GFStage_Game_C;

// Object: BlueprintGeneratedClass BP_GFStage_Game.BP_GFStage_Game_C
// Size: 0x90 (Inherited: 0x88)
struct UBP_GFStage_Game_C : UGameFlowStage
{
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x88(0x8)


	// Object: Function BP_GFStage_Game.BP_GFStage_Game_C.OnLuaGameFlowEvent_C894BE7B438BCC41E05EE88798F20A76
	// Flags: [BlueprintCallable|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(1) Size(0x10) ]
	void OnLuaGameFlowEvent_C894BE7B438BCC41E05EE88798F20A76(struct FString ArgStr);

	// Object: Function BP_GFStage_Game.BP_GFStage_Game_C.OnLuaGameFlowEvent_476F45B84438B67122BD17A14C523D30
	// Flags: [BlueprintCallable|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(1) Size(0x10) ]
	void OnLuaGameFlowEvent_476F45B84438B67122BD17A14C523D30(struct FString ArgStr);

	// Object: Function BP_GFStage_Game.BP_GFStage_Game_C.OnLuaGameFlowEvent_247E24E0468F31311F4FE4BD4F1D519D
	// Flags: [BlueprintCallable|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(1) Size(0x10) ]
	void OnLuaGameFlowEvent_247E24E0468F31311F4FE4BD4F1D519D(struct FString ArgStr);

	// Object: Function BP_GFStage_Game.BP_GFStage_Game_C.OnLuaGameFlowEvent_A2BC58F64887CB0A4795238C77E537FA
	// Flags: [BlueprintCallable|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(1) Size(0x10) ]
	void OnLuaGameFlowEvent_A2BC58F64887CB0A4795238C77E537FA(struct FString ArgStr);

	// Object: Function BP_GFStage_Game.BP_GFStage_Game_C.OnBeginStage
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(1) Size(0x8) ]
	void OnBeginStage(struct UObject* Args);

	// Object: Function BP_GFStage_Game.BP_GFStage_Game_C.OnEndStage
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(0) Size(0x0) ]
	void OnEndStage();

	// Object: Function BP_GFStage_Game.BP_GFStage_Game_C.OnClientPlayerMatchOver
	// Flags: [HasOutParms|BlueprintCallable|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(1) Size(0x1) ]
	void OnClientPlayerMatchOver(const EMatchOverReason& MatchOverReason);

	// Object: Function BP_GFStage_Game.BP_GFStage_Game_C.OnClientQuit
	// Flags: [BlueprintCallable|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(1) Size(0x1) ]
	void OnClientQuit(EMatchOverReason QuitReason);

	// Object: Function BP_GFStage_Game.BP_GFStage_Game_C.OnClientGameSettlementGameFlowBegin
	// Flags: [BlueprintCallable|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(0) Size(0x0) ]
	void OnClientGameSettlementGameFlowBegin();

	// Object: Function BP_GFStage_Game.BP_GFStage_Game_C.ExecuteUbergraph_BP_GFStage_Game
	// Flags: [Final|UbergraphFunction]
	// Offset: 0x101d2e88
	// Params: [ Num(1) Size(0x4) ]
	void ExecuteUbergraph_BP_GFStage_Game(int32_t EntryPoint);
	DEFINE_UE_CLASS_HELPERS(UBP_GFStage_Game_C, "BP_GFStage_Game_C")

};

} // namespace SDK
