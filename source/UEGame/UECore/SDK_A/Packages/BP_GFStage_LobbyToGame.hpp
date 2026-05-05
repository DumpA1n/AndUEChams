#pragma once

#include "../CoreUObject_classes.hpp"
#include "Engine.hpp"
#include "GPGameFlow.hpp"

namespace SDK
{

// Package: BP_GFStage_LobbyToGame
// Enums: 0
// Structs: 0
// Classes: 1

enum class EDFLoadingFlowStepResult : uint8_t;
enum class EFlowResult : uint8_t;
struct UBP_GFStage_LobbyToGame_C;

// Object: BlueprintGeneratedClass BP_GFStage_LobbyToGame.BP_GFStage_LobbyToGame_C
// Size: 0xB8 (Inherited: 0x88)
struct UBP_GFStage_LobbyToGame_C : UGameFlowStage
{
	DEFINE_UE_CLASS_HELPERS(UBP_GFStage_LobbyToGame_C, "BP_GFStage_LobbyToGame_C")

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x88(0x8)
	struct TArray<struct FName> MP_LevelNames; // 0x90(0x10)
	uint8_t bMPMode : 1; // 0xA0(0x1), Mask(0x1)
	uint8_t BitPad_0xA0_1 : 7; // 0xA0(0x1)
	uint8_t Pad_0xA1[0x7]; // 0xA1(0x7)
	struct FString PerfGearInGame; // 0xA8(0x10)

	// Object: Function BP_GFStage_LobbyToGame.BP_GFStage_LobbyToGame_C.MarkLoadingLevel
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(1) Size(0x10) ]
	void MarkLoadingLevel(struct FString URL);

	// Object: Function BP_GFStage_LobbyToGame.BP_GFStage_LobbyToGame_C.GetLevelNameByUrl
	// Flags: [Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(3) Size(0x21) ]
	void GetLevelNameByUrl(struct FString URL, struct FString& OutLevelName, uint8_t& Result);

	// Object: Function BP_GFStage_LobbyToGame.BP_GFStage_LobbyToGame_C.OnLuaGameFlowEvent_80A956744EA0138CA9803F9EAF4E3488
	// Flags: [BlueprintCallable|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(1) Size(0x10) ]
	void OnLuaGameFlowEvent_80A956744EA0138CA9803F9EAF4E3488(struct FString ArgStr);

	// Object: Function BP_GFStage_LobbyToGame.BP_GFStage_LobbyToGame_C.OnGameLoadingEnd
	// Flags: [BlueprintCallable|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(1) Size(0x1) ]
	void OnGameLoadingEnd(EFlowResult FlowResult);

	// Object: Function BP_GFStage_LobbyToGame.BP_GFStage_LobbyToGame_C.OnEndStage
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(0) Size(0x0) ]
	void OnEndStage();

	// Object: Function BP_GFStage_LobbyToGame.BP_GFStage_LobbyToGame_C.OnLobbyGameModeEndPlay
	// Flags: [BlueprintCallable|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(0) Size(0x0) ]
	void OnLobbyGameModeEndPlay();

	// Object: Function BP_GFStage_LobbyToGame.BP_GFStage_LobbyToGame_C.OnGameLoadingPostConnectDS_Event_0
	// Flags: [BlueprintCallable|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(0) Size(0x0) ]
	void OnGameLoadingPostConnectDS_Event_0();

	// Object: Function BP_GFStage_LobbyToGame.BP_GFStage_LobbyToGame_C.SeamlessLoadingTimeout
	// Flags: [BlueprintCallable|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(0) Size(0x0) ]
	void SeamlessLoadingTimeout();

	// Object: Function BP_GFStage_LobbyToGame.BP_GFStage_LobbyToGame_C.GameLoadingEnd
	// Flags: [BlueprintCallable|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(1) Size(0x1) ]
	void GameLoadingEnd(EFlowResult Result);

	// Object: Function BP_GFStage_LobbyToGame.BP_GFStage_LobbyToGame_C.OnEnterTargetLevel
	// Flags: [BlueprintCallable|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(0) Size(0x0) ]
	void OnEnterTargetLevel();

	// Object: Function BP_GFStage_LobbyToGame.BP_GFStage_LobbyToGame_C.OnGPGameLoadingEnd
	// Flags: [BlueprintCallable|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(2) Size(0x18) ]
	void OnGPGameLoadingEnd(EDFLoadingFlowStepResult Result, struct FString Reason);

	// Object: Function BP_GFStage_LobbyToGame.BP_GFStage_LobbyToGame_C.OnBeginStage
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(1) Size(0x8) ]
	void OnBeginStage(struct UObject* Args);

	// Object: Function BP_GFStage_LobbyToGame.BP_GFStage_LobbyToGame_C.ExecuteUbergraph_BP_GFStage_LobbyToGame
	// Flags: [Final|UbergraphFunction]
	// Offset: 0x101d2e88
	// Params: [ Num(1) Size(0x4) ]
	void ExecuteUbergraph_BP_GFStage_LobbyToGame(int32_t EntryPoint);
};

} // namespace SDK
