#pragma once

#include "../CoreUObject_classes.hpp"
#include "Engine.hpp"
#include "GPGameFlow.hpp"

namespace SDK
{

// Package: BP_GFStage_PostLaunch
// Enums: 0
// Structs: 0
// Classes: 1

struct UBP_GFStage_PostLaunch_C;

// Object: BlueprintGeneratedClass BP_GFStage_PostLaunch.BP_GFStage_PostLaunch_C
// Size: 0x90 (Inherited: 0x88)
struct UBP_GFStage_PostLaunch_C : UGameFlowStage
{
	DEFINE_UE_CLASS_HELPERS(UBP_GFStage_PostLaunch_C, "BP_GFStage_PostLaunch_C")

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x88(0x8)

	// Object: Function BP_GFStage_PostLaunch.BP_GFStage_PostLaunch_C.IsTestingStageFlow
	// Flags: [Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure]
	// Offset: 0x101d2e88
	// Params: [ Num(1) Size(0x1) ]
	uint8_t IsTestingStageFlow();

	// Object: Function BP_GFStage_PostLaunch.BP_GFStage_PostLaunch_C.IsTestingStageSingle
	// Flags: [Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure]
	// Offset: 0x101d2e88
	// Params: [ Num(1) Size(0x1) ]
	uint8_t IsTestingStageSingle();

	// Object: Function BP_GFStage_PostLaunch.BP_GFStage_PostLaunch_C.OnLuaGameFlowEvent_7998F82F4D6C8FF3A72CCEB6FE3370A1
	// Flags: [BlueprintCallable|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(1) Size(0x10) ]
	void OnLuaGameFlowEvent_7998F82F4D6C8FF3A72CCEB6FE3370A1(struct FString ArgStr);

	// Object: Function BP_GFStage_PostLaunch.BP_GFStage_PostLaunch_C.OnBeginStage
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(1) Size(0x8) ]
	void OnBeginStage(struct UObject* Args);

	// Object: Function BP_GFStage_PostLaunch.BP_GFStage_PostLaunch_C.ExecuteUbergraph_BP_GFStage_PostLaunch
	// Flags: [Final|UbergraphFunction]
	// Offset: 0x101d2e88
	// Params: [ Num(1) Size(0x4) ]
	void ExecuteUbergraph_BP_GFStage_PostLaunch(int32_t EntryPoint);
};

} // namespace SDK
