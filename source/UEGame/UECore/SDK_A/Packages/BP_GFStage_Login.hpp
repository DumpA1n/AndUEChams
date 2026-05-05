#pragma once

#include "../CoreUObject_classes.hpp"
#include "Engine.hpp"
#include "GPGameFlow.hpp"

namespace SDK
{

// Package: BP_GFStage_Login
// Enums: 0
// Structs: 0
// Classes: 1

struct FDataTableUseSceneValue;
struct UBP_GFStage_Login_C;

// Object: BlueprintGeneratedClass BP_GFStage_Login.BP_GFStage_Login_C
// Size: 0x98 (Inherited: 0x88)
struct UBP_GFStage_Login_C : UGameFlowStage
{
	DEFINE_UE_CLASS_HELPERS(UBP_GFStage_Login_C, "BP_GFStage_Login_C")

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x88(0x8)
	struct UObject* NewVar_0; // 0x90(0x8)

	// Object: Function BP_GFStage_Login.BP_GFStage_Login_C.OnLuaGameFlowEvent_F52EAB224CDC38B082C1E7806A1E4E96
	// Flags: [BlueprintCallable|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(1) Size(0x10) ]
	void OnLuaGameFlowEvent_F52EAB224CDC38B082C1E7806A1E4E96(struct FString ArgStr);

	// Object: Function BP_GFStage_Login.BP_GFStage_Login_C.OnBeginStage
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(1) Size(0x8) ]
	void OnBeginStage(struct UObject* Args);

	// Object: Function BP_GFStage_Login.BP_GFStage_Login_C.OnDataTablePreloadFinish
	// Flags: [HasOutParms|BlueprintCallable|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(2) Size(0xC) ]
	void OnDataTablePreloadFinish(const struct FDataTableUseSceneValue& UseSceneValue, int32_t LoadedNum);

	// Object: Function BP_GFStage_Login.BP_GFStage_Login_C.StartLoginInterface
	// Flags: [BlueprintCallable|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(0) Size(0x0) ]
	void StartLoginInterface();

	// Object: Function BP_GFStage_Login.BP_GFStage_Login_C.ExecuteUbergraph_BP_GFStage_Login
	// Flags: [Final|UbergraphFunction|HasDefaults]
	// Offset: 0x101d2e88
	// Params: [ Num(1) Size(0x4) ]
	void ExecuteUbergraph_BP_GFStage_Login(int32_t EntryPoint);
};

} // namespace SDK
