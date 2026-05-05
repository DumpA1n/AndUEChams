#pragma once

#include "../CoreUObject_classes.hpp"
#include "Engine.hpp"
#include "GPGameFlow.hpp"

namespace SDK
{

// Package: BP_GFStage_ModeHall
// Enums: 0
// Structs: 0
// Classes: 1

struct UBP_GFStage_ModeHall_C;

// Object: BlueprintGeneratedClass BP_GFStage_ModeHall.BP_GFStage_ModeHall_C
// Size: 0x90 (Inherited: 0x88)
struct UBP_GFStage_ModeHall_C : UGameFlowStage
{
	DEFINE_UE_CLASS_HELPERS(UBP_GFStage_ModeHall_C, "BP_GFStage_ModeHall_C")

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x88(0x8)

	// Object: Function BP_GFStage_ModeHall.BP_GFStage_ModeHall_C.OnLuaGameFlowEvent_9ADB33C24BAA9C2FE105F8AEDFE4D245
	// Flags: [BlueprintCallable|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(1) Size(0x10) ]
	void OnLuaGameFlowEvent_9ADB33C24BAA9C2FE105F8AEDFE4D245(struct FString ArgStr);

	// Object: Function BP_GFStage_ModeHall.BP_GFStage_ModeHall_C.OnLuaGameFlowEvent_54DD992C465D8B4F8B8142A2F9734A67
	// Flags: [BlueprintCallable|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(1) Size(0x10) ]
	void OnLuaGameFlowEvent_54DD992C465D8B4F8B8142A2F9734A67(struct FString ArgStr);

	// Object: Function BP_GFStage_ModeHall.BP_GFStage_ModeHall_C.OnLuaGameFlowEvent_CADCA1184DA2D9F0AB661885C9D742E8
	// Flags: [BlueprintCallable|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(1) Size(0x10) ]
	void OnLuaGameFlowEvent_CADCA1184DA2D9F0AB661885C9D742E8(struct FString ArgStr);

	// Object: Function BP_GFStage_ModeHall.BP_GFStage_ModeHall_C.OnLuaGameFlowEvent_B26E3B894720D37F7FEF47B758B2057A
	// Flags: [BlueprintCallable|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(1) Size(0x10) ]
	void OnLuaGameFlowEvent_B26E3B894720D37F7FEF47B758B2057A(struct FString ArgStr);

	// Object: Function BP_GFStage_ModeHall.BP_GFStage_ModeHall_C.OnLuaGameFlowEvent_3D8E2CB34FCF7C0AF407B6BE651B8C30
	// Flags: [BlueprintCallable|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(1) Size(0x10) ]
	void OnLuaGameFlowEvent_3D8E2CB34FCF7C0AF407B6BE651B8C30(struct FString ArgStr);

	// Object: Function BP_GFStage_ModeHall.BP_GFStage_ModeHall_C.OnLuaGameFlowEvent_B72FD72B4D50FF91B1BE62B04E3BE8D1
	// Flags: [BlueprintCallable|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(1) Size(0x10) ]
	void OnLuaGameFlowEvent_B72FD72B4D50FF91B1BE62B04E3BE8D1(struct FString ArgStr);

	// Object: Function BP_GFStage_ModeHall.BP_GFStage_ModeHall_C.OnBeginStage
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(1) Size(0x8) ]
	void OnBeginStage(struct UObject* Args);

	// Object: Function BP_GFStage_ModeHall.BP_GFStage_ModeHall_C.ExecuteUbergraph_BP_GFStage_ModeHall
	// Flags: [Final|UbergraphFunction]
	// Offset: 0x101d2e88
	// Params: [ Num(1) Size(0x4) ]
	void ExecuteUbergraph_BP_GFStage_ModeHall(int32_t EntryPoint);
};

} // namespace SDK
