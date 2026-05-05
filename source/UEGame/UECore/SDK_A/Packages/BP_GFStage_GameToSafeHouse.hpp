#pragma once

#include "../CoreUObject_classes.hpp"
#include "Engine.hpp"
#include "GPGameFlow.hpp"

namespace SDK
{

// Package: BP_GFStage_GameToSafeHouse
// Enums: 0
// Structs: 0
// Classes: 1

enum class EDFLoadingFlowStepResult : uint8_t;
enum class EFlowResult : uint8_t;
struct UBP_GFStage_GameToSafeHouse_C;

// Object: BlueprintGeneratedClass BP_GFStage_GameToSafeHouse.BP_GFStage_GameToSafeHouse_C
// Size: 0x90 (Inherited: 0x88)
struct UBP_GFStage_GameToSafeHouse_C : UGameFlowStage
{
	DEFINE_UE_CLASS_HELPERS(UBP_GFStage_GameToSafeHouse_C, "BP_GFStage_GameToSafeHouse_C")

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x88(0x8)

	// Object: Function BP_GFStage_GameToSafeHouse.BP_GFStage_GameToSafeHouse_C.OnGameLoadingEnd
	// Flags: [BlueprintCallable|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(1) Size(0x1) ]
	void OnGameLoadingEnd(EFlowResult FlowResult);

	// Object: Function BP_GFStage_GameToSafeHouse.BP_GFStage_GameToSafeHouse_C.OnEndStage
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(0) Size(0x0) ]
	void OnEndStage();

	// Object: Function BP_GFStage_GameToSafeHouse.BP_GFStage_GameToSafeHouse_C.OnLobbyGameModeStartPlay
	// Flags: [BlueprintCallable|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(0) Size(0x0) ]
	void OnLobbyGameModeStartPlay();

	// Object: Function BP_GFStage_GameToSafeHouse.BP_GFStage_GameToSafeHouse_C.OnBeginStage
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(1) Size(0x8) ]
	void OnBeginStage(struct UObject* Args);

	// Object: Function BP_GFStage_GameToSafeHouse.BP_GFStage_GameToSafeHouse_C.OnGPGameLoadingEnd
	// Flags: [BlueprintCallable|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(2) Size(0x18) ]
	void OnGPGameLoadingEnd(EDFLoadingFlowStepResult Result, struct FString Reason);

	// Object: Function BP_GFStage_GameToSafeHouse.BP_GFStage_GameToSafeHouse_C.ExecuteUbergraph_BP_GFStage_GameToSafeHouse
	// Flags: [Final|UbergraphFunction]
	// Offset: 0x101d2e88
	// Params: [ Num(1) Size(0x4) ]
	void ExecuteUbergraph_BP_GFStage_GameToSafeHouse(int32_t EntryPoint);
};

} // namespace SDK
