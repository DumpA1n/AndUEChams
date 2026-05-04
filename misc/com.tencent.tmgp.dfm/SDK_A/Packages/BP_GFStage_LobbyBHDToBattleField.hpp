#pragma once

#include "../CoreUObject_classes.hpp"
#include "Engine.hpp"
#include "GPGameFlow.hpp"

namespace SDK
{

// Package: BP_GFStage_LobbyBHDToBattleField
// Enums: 0
// Structs: 0
// Classes: 1

enum class EDFLoadingFlowStepResult : uint8_t;
enum class EFlowResult : uint8_t;
struct UBP_GFStage_LobbyBHDToBattleField_C;

// Object: BlueprintGeneratedClass BP_GFStage_LobbyBHDToBattleField.BP_GFStage_LobbyBHDToBattleField_C
// Size: 0x90 (Inherited: 0x88)
struct UBP_GFStage_LobbyBHDToBattleField_C : UGameFlowStage
{
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x88(0x8)


	// Object: Function BP_GFStage_LobbyBHDToBattleField.BP_GFStage_LobbyBHDToBattleField_C.OnBeginStage
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(1) Size(0x8) ]
	void OnBeginStage(struct UObject* Args);

	// Object: Function BP_GFStage_LobbyBHDToBattleField.BP_GFStage_LobbyBHDToBattleField_C.OnGameLoadingEnd
	// Flags: [BlueprintCallable|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(1) Size(0x1) ]
	void OnGameLoadingEnd(EFlowResult FlowResult);

	// Object: Function BP_GFStage_LobbyBHDToBattleField.BP_GFStage_LobbyBHDToBattleField_C.OnEndStage
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(0) Size(0x0) ]
	void OnEndStage();

	// Object: Function BP_GFStage_LobbyBHDToBattleField.BP_GFStage_LobbyBHDToBattleField_C.OnLobbyGameModeStartPlay
	// Flags: [BlueprintCallable|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(0) Size(0x0) ]
	void OnLobbyGameModeStartPlay();

	// Object: Function BP_GFStage_LobbyBHDToBattleField.BP_GFStage_LobbyBHDToBattleField_C.OnGPGameLoadingEnd
	// Flags: [BlueprintCallable|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(2) Size(0x18) ]
	void OnGPGameLoadingEnd(EDFLoadingFlowStepResult Result, struct FString Reason);

	// Object: Function BP_GFStage_LobbyBHDToBattleField.BP_GFStage_LobbyBHDToBattleField_C.ExecuteUbergraph_BP_GFStage_LobbyBHDToBattleField
	// Flags: [Final|UbergraphFunction]
	// Offset: 0x101d2e88
	// Params: [ Num(1) Size(0x4) ]
	void ExecuteUbergraph_BP_GFStage_LobbyBHDToBattleField(int32_t EntryPoint);
	DEFINE_UE_CLASS_HELPERS(UBP_GFStage_LobbyBHDToBattleField_C, "BP_GFStage_LobbyBHDToBattleField_C")

};

} // namespace SDK
