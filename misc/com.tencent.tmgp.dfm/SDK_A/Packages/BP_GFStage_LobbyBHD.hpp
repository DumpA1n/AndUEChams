#pragma once

#include "../CoreUObject_classes.hpp"
#include "Engine.hpp"
#include "GPGameFlow.hpp"

namespace SDK
{

// Package: BP_GFStage_LobbyBHD
// Enums: 0
// Structs: 0
// Classes: 1

struct UBP_GFStage_LobbyBHD_C;

// Object: BlueprintGeneratedClass BP_GFStage_LobbyBHD.BP_GFStage_LobbyBHD_C
// Size: 0x90 (Inherited: 0x88)
struct UBP_GFStage_LobbyBHD_C : UGameFlowStage
{
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x88(0x8)


	// Object: Function BP_GFStage_LobbyBHD.BP_GFStage_LobbyBHD_C.OnLuaGameFlowEvent_707AB88F48543DDA7FC7E98B9553966B
	// Flags: [BlueprintCallable|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(1) Size(0x10) ]
	void OnLuaGameFlowEvent_707AB88F48543DDA7FC7E98B9553966B(struct FString ArgStr);

	// Object: Function BP_GFStage_LobbyBHD.BP_GFStage_LobbyBHD_C.OnLuaGameFlowEvent_066D50DA4923FAB979899FAB62493E11
	// Flags: [BlueprintCallable|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(1) Size(0x10) ]
	void OnLuaGameFlowEvent_066D50DA4923FAB979899FAB62493E11(struct FString ArgStr);

	// Object: Function BP_GFStage_LobbyBHD.BP_GFStage_LobbyBHD_C.OnLuaGameFlowEvent_5B6022944F3D17A5D99075BA09DFDBF7
	// Flags: [BlueprintCallable|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(1) Size(0x10) ]
	void OnLuaGameFlowEvent_5B6022944F3D17A5D99075BA09DFDBF7(struct FString ArgStr);

	// Object: Function BP_GFStage_LobbyBHD.BP_GFStage_LobbyBHD_C.OnLuaGameFlowEvent_2B906D9B4F1B17CE8E17D8B81EDA6879
	// Flags: [BlueprintCallable|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(1) Size(0x10) ]
	void OnLuaGameFlowEvent_2B906D9B4F1B17CE8E17D8B81EDA6879(struct FString ArgStr);

	// Object: Function BP_GFStage_LobbyBHD.BP_GFStage_LobbyBHD_C.OnLuaGameFlowEvent_0261676248DFF10BD759E983C417FDDC
	// Flags: [BlueprintCallable|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(1) Size(0x10) ]
	void OnLuaGameFlowEvent_0261676248DFF10BD759E983C417FDDC(struct FString ArgStr);

	// Object: Function BP_GFStage_LobbyBHD.BP_GFStage_LobbyBHD_C.OnBeginStage
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(1) Size(0x8) ]
	void OnBeginStage(struct UObject* Args);

	// Object: Function BP_GFStage_LobbyBHD.BP_GFStage_LobbyBHD_C.OnEndStage
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(0) Size(0x0) ]
	void OnEndStage();

	// Object: Function BP_GFStage_LobbyBHD.BP_GFStage_LobbyBHD_C.ExecuteUbergraph_BP_GFStage_LobbyBHD
	// Flags: [Final|UbergraphFunction]
	// Offset: 0x101d2e88
	// Params: [ Num(1) Size(0x4) ]
	void ExecuteUbergraph_BP_GFStage_LobbyBHD(int32_t EntryPoint);
	DEFINE_UE_CLASS_HELPERS(UBP_GFStage_LobbyBHD_C, "BP_GFStage_LobbyBHD_C")

};

} // namespace SDK
