#pragma once

#include "../CoreUObject_classes.hpp"
#include "Engine.hpp"
#include "GPGameFlow.hpp"

namespace SDK
{

// Package: BP_MainGameFlow
// Enums: 0
// Structs: 0
// Classes: 1

struct UBP_GFStage_PostLaunch_C;
struct UBP_MainGameFlow_C;

// Object: BlueprintGeneratedClass BP_MainGameFlow.BP_MainGameFlow_C
// Size: 0xA9 (Inherited: 0xA0)
struct UBP_MainGameFlow_C : UGameFlowGraph
{
	DEFINE_UE_CLASS_HELPERS(UBP_MainGameFlow_C, "BP_MainGameFlow_C")

	struct FPointerToUberGraphFrame UberGraphFrame; // 0xA0(0x8)
	uint8_t IsHandingLoadingFailed : 1; // 0xA8(0x1), Mask(0x1)
	uint8_t BitPad_0xA8_1 : 7; // 0xA8(0x1)

	// Object: Function BP_MainGameFlow.BP_MainGameFlow_C.ReturnLoginOrExitClient
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(0) Size(0x0) ]
	void ReturnLoginOrExitClient();

	// Object: Function BP_MainGameFlow.BP_MainGameFlow_C.GetPostLaunchStatic
	// Flags: [Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure]
	// Offset: 0x101d2e88
	// Params: [ Num(1) Size(0x8) ]
	void GetPostLaunchStatic(struct UBP_GFStage_PostLaunch_C*& FirstLaunchSettingStatic);

	// Object: Function BP_MainGameFlow.BP_MainGameFlow_C.DelayRestartSystem
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(0) Size(0x0) ]
	void DelayRestartSystem();

	// Object: Function BP_MainGameFlow.BP_MainGameFlow_C.DelayCallLuaStartUp
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(0) Size(0x0) ]
	void DelayCallLuaStartUp();

	// Object: Function BP_MainGameFlow.BP_MainGameFlow_C.OnFlowBranch_A3DB635342BA86FCB016AABB27FD96A5
	// Flags: [BlueprintCallable|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(1) Size(0x10) ]
	void OnFlowBranch_A3DB635342BA86FCB016AABB27FD96A5(struct FString FlowBranch);

	// Object: Function BP_MainGameFlow.BP_MainGameFlow_C.OnFlowBranch_922505DC4BE8EA0529A1F9B196D3B620
	// Flags: [BlueprintCallable|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(1) Size(0x10) ]
	void OnFlowBranch_922505DC4BE8EA0529A1F9B196D3B620(struct FString FlowBranch);

	// Object: Function BP_MainGameFlow.BP_MainGameFlow_C.OnFlowBranch_44A1E04E4BAC3A9971016CAB99C4BA25
	// Flags: [BlueprintCallable|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(1) Size(0x10) ]
	void OnFlowBranch_44A1E04E4BAC3A9971016CAB99C4BA25(struct FString FlowBranch);

	// Object: Function BP_MainGameFlow.BP_MainGameFlow_C.OnFlowBranch_A4A7B5A946B81C36894DF78B8F4DE29A
	// Flags: [BlueprintCallable|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(1) Size(0x10) ]
	void OnFlowBranch_A4A7B5A946B81C36894DF78B8F4DE29A(struct FString FlowBranch);

	// Object: Function BP_MainGameFlow.BP_MainGameFlow_C.OnFlowBranch_5E0C206143B7C756E07EEE8E16C2B70B
	// Flags: [BlueprintCallable|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(1) Size(0x10) ]
	void OnFlowBranch_5E0C206143B7C756E07EEE8E16C2B70B(struct FString FlowBranch);

	// Object: Function BP_MainGameFlow.BP_MainGameFlow_C.OnFlowBranch_2313D290474D25AE6EE9E5A4489D3367
	// Flags: [BlueprintCallable|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(1) Size(0x10) ]
	void OnFlowBranch_2313D290474D25AE6EE9E5A4489D3367(struct FString FlowBranch);

	// Object: Function BP_MainGameFlow.BP_MainGameFlow_C.OnFlowBranch_AA4082F249CB11D532B4F18FDB02FB35
	// Flags: [BlueprintCallable|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(1) Size(0x10) ]
	void OnFlowBranch_AA4082F249CB11D532B4F18FDB02FB35(struct FString FlowBranch);

	// Object: Function BP_MainGameFlow.BP_MainGameFlow_C.OnFlowBranch_9DB0EB9F4693537E7CA876A47E085C82
	// Flags: [BlueprintCallable|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(1) Size(0x10) ]
	void OnFlowBranch_9DB0EB9F4693537E7CA876A47E085C82(struct FString FlowBranch);

	// Object: Function BP_MainGameFlow.BP_MainGameFlow_C.OnFlowBranch_752274E44D547CFF2CAA57A3EEA74ADD
	// Flags: [BlueprintCallable|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(1) Size(0x10) ]
	void OnFlowBranch_752274E44D547CFF2CAA57A3EEA74ADD(struct FString FlowBranch);

	// Object: Function BP_MainGameFlow.BP_MainGameFlow_C.OnFlowBranch_5BCEF6244212BA53A66B50B28F2DEC6C
	// Flags: [BlueprintCallable|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(1) Size(0x10) ]
	void OnFlowBranch_5BCEF6244212BA53A66B50B28F2DEC6C(struct FString FlowBranch);

	// Object: Function BP_MainGameFlow.BP_MainGameFlow_C.OnFlowBranch_5E1CC66545A3E971F4DF518E5F2354B3
	// Flags: [BlueprintCallable|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(1) Size(0x10) ]
	void OnFlowBranch_5E1CC66545A3E971F4DF518E5F2354B3(struct FString FlowBranch);

	// Object: Function BP_MainGameFlow.BP_MainGameFlow_C.OnFlowBranch_5C0A57314D3A94E1347F1EB6B02A4EFD
	// Flags: [BlueprintCallable|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(1) Size(0x10) ]
	void OnFlowBranch_5C0A57314D3A94E1347F1EB6B02A4EFD(struct FString FlowBranch);

	// Object: Function BP_MainGameFlow.BP_MainGameFlow_C.OnFlowBranch_DBFD083E43F3AB81D913BF8B5C980F22
	// Flags: [BlueprintCallable|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(1) Size(0x10) ]
	void OnFlowBranch_DBFD083E43F3AB81D913BF8B5C980F22(struct FString FlowBranch);

	// Object: Function BP_MainGameFlow.BP_MainGameFlow_C.OnFlowBranch_43AD9AA14675912FA0B0D191FC5383CE
	// Flags: [BlueprintCallable|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(1) Size(0x10) ]
	void OnFlowBranch_43AD9AA14675912FA0B0D191FC5383CE(struct FString FlowBranch);

	// Object: Function BP_MainGameFlow.BP_MainGameFlow_C.OnFlowBranch_582D077541EF0AD58D03C8AC8EE293D2
	// Flags: [BlueprintCallable|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(1) Size(0x10) ]
	void OnFlowBranch_582D077541EF0AD58D03C8AC8EE293D2(struct FString FlowBranch);

	// Object: Function BP_MainGameFlow.BP_MainGameFlow_C.OnFlowBranch_2D5363CC47BA739327985BA37949CB90
	// Flags: [BlueprintCallable|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(1) Size(0x10) ]
	void OnFlowBranch_2D5363CC47BA739327985BA37949CB90(struct FString FlowBranch);

	// Object: Function BP_MainGameFlow.BP_MainGameFlow_C.OnFlowBranch_D74C3AFC4E81D93B6197F495E9E806B6
	// Flags: [BlueprintCallable|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(1) Size(0x10) ]
	void OnFlowBranch_D74C3AFC4E81D93B6197F495E9E806B6(struct FString FlowBranch);

	// Object: Function BP_MainGameFlow.BP_MainGameFlow_C.OnFlowBranch_ACC292E24F21F1FA48E68B97DFC6CF6C
	// Flags: [BlueprintCallable|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(1) Size(0x10) ]
	void OnFlowBranch_ACC292E24F21F1FA48E68B97DFC6CF6C(struct FString FlowBranch);

	// Object: Function BP_MainGameFlow.BP_MainGameFlow_C.OnFlowBranch_83ED24B846F31D2BB8CE13B5D31DE5C3
	// Flags: [BlueprintCallable|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(1) Size(0x10) ]
	void OnFlowBranch_83ED24B846F31D2BB8CE13B5D31DE5C3(struct FString FlowBranch);

	// Object: Function BP_MainGameFlow.BP_MainGameFlow_C.OnFlowBranch_5BF6B44942819C1BE56E438B335652DA
	// Flags: [BlueprintCallable|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(1) Size(0x10) ]
	void OnFlowBranch_5BF6B44942819C1BE56E438B335652DA(struct FString FlowBranch);

	// Object: Function BP_MainGameFlow.BP_MainGameFlow_C.OnFlowBranch_393F850C4CEB9B3C4FAF24807032FAA8
	// Flags: [BlueprintCallable|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(1) Size(0x10) ]
	void OnFlowBranch_393F850C4CEB9B3C4FAF24807032FAA8(struct FString FlowBranch);

	// Object: Function BP_MainGameFlow.BP_MainGameFlow_C.OnFlowBranch_3ABBEF074672F4C7A7FEBCABE5163146
	// Flags: [BlueprintCallable|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(1) Size(0x10) ]
	void OnFlowBranch_3ABBEF074672F4C7A7FEBCABE5163146(struct FString FlowBranch);

	// Object: Function BP_MainGameFlow.BP_MainGameFlow_C.OnFlowBranch_2DFDDCEF48CC9A05E5D5EBB327A03FFF
	// Flags: [BlueprintCallable|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(1) Size(0x10) ]
	void OnFlowBranch_2DFDDCEF48CC9A05E5D5EBB327A03FFF(struct FString FlowBranch);

	// Object: Function BP_MainGameFlow.BP_MainGameFlow_C.OnFlowBranch_744EEDFF4311102B67C87AA2EF555A1D
	// Flags: [BlueprintCallable|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(1) Size(0x10) ]
	void OnFlowBranch_744EEDFF4311102B67C87AA2EF555A1D(struct FString FlowBranch);

	// Object: Function BP_MainGameFlow.BP_MainGameFlow_C.OnFlowBranch_D818FFFB4F877D8F3314C78F8FEF590A
	// Flags: [BlueprintCallable|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(1) Size(0x10) ]
	void OnFlowBranch_D818FFFB4F877D8F3314C78F8FEF590A(struct FString FlowBranch);

	// Object: Function BP_MainGameFlow.BP_MainGameFlow_C.OnFlowBranch_6970672342CCF6D4943CEEA3DE35D905
	// Flags: [BlueprintCallable|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(1) Size(0x10) ]
	void OnFlowBranch_6970672342CCF6D4943CEEA3DE35D905(struct FString FlowBranch);

	// Object: Function BP_MainGameFlow.BP_MainGameFlow_C.OnFlowBranch_E4877C954A65F50111CA7D8FCC803D87
	// Flags: [BlueprintCallable|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(1) Size(0x10) ]
	void OnFlowBranch_E4877C954A65F50111CA7D8FCC803D87(struct FString FlowBranch);

	// Object: Function BP_MainGameFlow.BP_MainGameFlow_C.OnFlowBranch_D576133E49464978D5D14AA187972545
	// Flags: [BlueprintCallable|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(1) Size(0x10) ]
	void OnFlowBranch_D576133E49464978D5D14AA187972545(struct FString FlowBranch);

	// Object: Function BP_MainGameFlow.BP_MainGameFlow_C.OnFlowBranch_E0D07E2D429F278EA98FA585728EAE4E
	// Flags: [BlueprintCallable|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(1) Size(0x10) ]
	void OnFlowBranch_E0D07E2D429F278EA98FA585728EAE4E(struct FString FlowBranch);

	// Object: Function BP_MainGameFlow.BP_MainGameFlow_C.OnFlowBranch_8DABFE5F42547280797C38B7A65702C7
	// Flags: [BlueprintCallable|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(1) Size(0x10) ]
	void OnFlowBranch_8DABFE5F42547280797C38B7A65702C7(struct FString FlowBranch);

	// Object: Function BP_MainGameFlow.BP_MainGameFlow_C.OnFlowBranch_6EBF91794979BA94893BB0B33262D2FD
	// Flags: [BlueprintCallable|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(1) Size(0x10) ]
	void OnFlowBranch_6EBF91794979BA94893BB0B33262D2FD(struct FString FlowBranch);

	// Object: Function BP_MainGameFlow.BP_MainGameFlow_C.OnFlowBranch_2097C1A9427B4D7DE2DC8392D5E5D709
	// Flags: [BlueprintCallable|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(1) Size(0x10) ]
	void OnFlowBranch_2097C1A9427B4D7DE2DC8392D5E5D709(struct FString FlowBranch);

	// Object: Function BP_MainGameFlow.BP_MainGameFlow_C.RestartSystem
	// Flags: [BlueprintCallable|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(0) Size(0x0) ]
	void RestartSystem();

	// Object: Function BP_MainGameFlow.BP_MainGameFlow_C.OnLoadingFailed2Login
	// Flags: [BlueprintCallable|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(0) Size(0x0) ]
	void OnLoadingFailed2Login();

	// Object: Function BP_MainGameFlow.BP_MainGameFlow_C.OnBeginFlow
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(0) Size(0x0) ]
	void OnBeginFlow();

	// Object: Function BP_MainGameFlow.BP_MainGameFlow_C.ExecuteUbergraph_BP_MainGameFlow
	// Flags: [Final|UbergraphFunction]
	// Offset: 0x101d2e88
	// Params: [ Num(1) Size(0x4) ]
	void ExecuteUbergraph_BP_MainGameFlow(int32_t EntryPoint);
};

} // namespace SDK
