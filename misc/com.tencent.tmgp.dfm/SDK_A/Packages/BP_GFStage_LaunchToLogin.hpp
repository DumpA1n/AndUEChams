#pragma once

#include "../CoreUObject_classes.hpp"
#include "Engine.hpp"
#include "GPGameFlow.hpp"

namespace SDK
{

// Package: BP_GFStage_LaunchToLogin
// Enums: 0
// Structs: 0
// Classes: 1

struct UBP_GFStage_LaunchToLogin_C;

// Object: BlueprintGeneratedClass BP_GFStage_LaunchToLogin.BP_GFStage_LaunchToLogin_C
// Size: 0x98 (Inherited: 0x88)
struct UBP_GFStage_LaunchToLogin_C : UGameFlowStage
{
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x88(0x8)
	struct FName GameLaunchFlowName; // 0x90(0x8)


	// Object: Function BP_GFStage_LaunchToLogin.BP_GFStage_LaunchToLogin_C.InitFlowName
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(0) Size(0x0) ]
	void InitFlowName();

	// Object: Function BP_GFStage_LaunchToLogin.BP_GFStage_LaunchToLogin_C.OnBeginStage
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(1) Size(0x8) ]
	void OnBeginStage(struct UObject* Args);

	// Object: Function BP_GFStage_LaunchToLogin.BP_GFStage_LaunchToLogin_C.OnGameLaunchFlowEnd
	// Flags: [BlueprintCallable|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(0) Size(0x0) ]
	void OnGameLaunchFlowEnd();

	// Object: Function BP_GFStage_LaunchToLogin.BP_GFStage_LaunchToLogin_C.ExecuteUbergraph_BP_GFStage_LaunchToLogin
	// Flags: [Final|UbergraphFunction]
	// Offset: 0x101d2e88
	// Params: [ Num(1) Size(0x4) ]
	void ExecuteUbergraph_BP_GFStage_LaunchToLogin(int32_t EntryPoint);
	DEFINE_UE_CLASS_HELPERS(UBP_GFStage_LaunchToLogin_C, "BP_GFStage_LaunchToLogin_C")

};

} // namespace SDK
