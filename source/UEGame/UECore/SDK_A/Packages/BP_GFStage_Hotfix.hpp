#pragma once

#include "../CoreUObject_classes.hpp"
#include "Engine.hpp"
#include "GPGameFlow.hpp"

namespace SDK
{

// Package: BP_GFStage_Hotfix
// Enums: 0
// Structs: 0
// Classes: 1

struct UBP_GFStage_Hotfix_C;

// Object: BlueprintGeneratedClass BP_GFStage_Hotfix.BP_GFStage_Hotfix_C
// Size: 0x138 (Inherited: 0x88)
struct UBP_GFStage_Hotfix_C : UGameFlowStage
{
	DEFINE_UE_CLASS_HELPERS(UBP_GFStage_Hotfix_C, "BP_GFStage_Hotfix_C")

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x88(0x8)
	struct UObject* NewVar_0; // 0x90(0x8)
	struct TMap<struct FString, struct FString> reportsuccess; // 0x98(0x50)
	struct TMap<struct FString, struct FString> reportfail; // 0xE8(0x50)

	// Object: Function BP_GFStage_Hotfix.BP_GFStage_Hotfix_C.OnLuaGameFlowEvent_BFA5C325421863C8631C9D98AC4C3071
	// Flags: [BlueprintCallable|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(1) Size(0x10) ]
	void OnLuaGameFlowEvent_BFA5C325421863C8631C9D98AC4C3071(struct FString ArgStr);

	// Object: Function BP_GFStage_Hotfix.BP_GFStage_Hotfix_C.OnEndStage
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(0) Size(0x0) ]
	void OnEndStage();

	// Object: Function BP_GFStage_Hotfix.BP_GFStage_Hotfix_C.OnBeginStage
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(1) Size(0x8) ]
	void OnBeginStage(struct UObject* Args);

	// Object: Function BP_GFStage_Hotfix.BP_GFStage_Hotfix_C.ExecuteUbergraph_BP_GFStage_Hotfix
	// Flags: [Final|UbergraphFunction]
	// Offset: 0x101d2e88
	// Params: [ Num(1) Size(0x4) ]
	void ExecuteUbergraph_BP_GFStage_Hotfix(int32_t EntryPoint);
};

} // namespace SDK
