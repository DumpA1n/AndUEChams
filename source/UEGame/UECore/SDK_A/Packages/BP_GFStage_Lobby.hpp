#pragma once

#include "../CoreUObject_classes.hpp"
#include "Engine.hpp"
#include "GPGameFlow.hpp"

namespace SDK
{

// Package: BP_GFStage_Lobby
// Enums: 0
// Structs: 0
// Classes: 1

struct UBP_GFStage_Lobby_C;

// Object: BlueprintGeneratedClass BP_GFStage_Lobby.BP_GFStage_Lobby_C
// Size: 0x90 (Inherited: 0x88)
struct UBP_GFStage_Lobby_C : UGameFlowStage
{
	DEFINE_UE_CLASS_HELPERS(UBP_GFStage_Lobby_C, "BP_GFStage_Lobby_C")

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x88(0x8)

	// Object: Function BP_GFStage_Lobby.BP_GFStage_Lobby_C.CallLuaModule
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(2) Size(0x20) ]
	void CallLuaModule(struct FString ModuleName, struct FString FunctionName);

	// Object: Function BP_GFStage_Lobby.BP_GFStage_Lobby_C.OnLuaGameFlowEvent_D8CF9D64405E332B22426EAFEB97CCEF
	// Flags: [BlueprintCallable|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(1) Size(0x10) ]
	void OnLuaGameFlowEvent_D8CF9D64405E332B22426EAFEB97CCEF(struct FString ArgStr);

	// Object: Function BP_GFStage_Lobby.BP_GFStage_Lobby_C.OnLuaGameFlowEvent_D67B64CD4E9A33DE6539399490538AB2
	// Flags: [BlueprintCallable|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(1) Size(0x10) ]
	void OnLuaGameFlowEvent_D67B64CD4E9A33DE6539399490538AB2(struct FString ArgStr);

	// Object: Function BP_GFStage_Lobby.BP_GFStage_Lobby_C.OnLuaGameFlowEvent_1B592FDF4C059AE81F3E2297D98B0519
	// Flags: [BlueprintCallable|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(1) Size(0x10) ]
	void OnLuaGameFlowEvent_1B592FDF4C059AE81F3E2297D98B0519(struct FString ArgStr);

	// Object: Function BP_GFStage_Lobby.BP_GFStage_Lobby_C.OnLuaGameFlowEvent_42296D9C442595A133D763AA0A22A524
	// Flags: [BlueprintCallable|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(1) Size(0x10) ]
	void OnLuaGameFlowEvent_42296D9C442595A133D763AA0A22A524(struct FString ArgStr);

	// Object: Function BP_GFStage_Lobby.BP_GFStage_Lobby_C.OnLuaGameFlowEvent_6B9341574032587A5E0B8FA39B71753D
	// Flags: [BlueprintCallable|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(1) Size(0x10) ]
	void OnLuaGameFlowEvent_6B9341574032587A5E0B8FA39B71753D(struct FString ArgStr);

	// Object: Function BP_GFStage_Lobby.BP_GFStage_Lobby_C.OnLuaGameFlowEvent_0B24D07A49F7488A698D91B32F637C92
	// Flags: [BlueprintCallable|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(1) Size(0x10) ]
	void OnLuaGameFlowEvent_0B24D07A49F7488A698D91B32F637C92(struct FString ArgStr);

	// Object: Function BP_GFStage_Lobby.BP_GFStage_Lobby_C.OnLuaGameFlowEvent_8728C61842FD6523174B6395CFE140CF
	// Flags: [BlueprintCallable|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(1) Size(0x10) ]
	void OnLuaGameFlowEvent_8728C61842FD6523174B6395CFE140CF(struct FString ArgStr);

	// Object: Function BP_GFStage_Lobby.BP_GFStage_Lobby_C.OnLuaGameFlowEvent_EE7964454E0D8861FB50BCBB1BFA1E83
	// Flags: [BlueprintCallable|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(1) Size(0x10) ]
	void OnLuaGameFlowEvent_EE7964454E0D8861FB50BCBB1BFA1E83(struct FString ArgStr);

	// Object: Function BP_GFStage_Lobby.BP_GFStage_Lobby_C.OnLuaGameFlowEvent_52A975F74CFE62C90865FBA698310D1A
	// Flags: [BlueprintCallable|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(1) Size(0x10) ]
	void OnLuaGameFlowEvent_52A975F74CFE62C90865FBA698310D1A(struct FString ArgStr);

	// Object: Function BP_GFStage_Lobby.BP_GFStage_Lobby_C.OnLuaGameFlowEvent_FED923AC4D00B6B1E200E6ADF94FEF06
	// Flags: [BlueprintCallable|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(1) Size(0x10) ]
	void OnLuaGameFlowEvent_FED923AC4D00B6B1E200E6ADF94FEF06(struct FString ArgStr);

	// Object: Function BP_GFStage_Lobby.BP_GFStage_Lobby_C.OnLuaGameFlowEvent_7B42BF884E01FDF97992CF82F6FB5111
	// Flags: [BlueprintCallable|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(1) Size(0x10) ]
	void OnLuaGameFlowEvent_7B42BF884E01FDF97992CF82F6FB5111(struct FString ArgStr);

	// Object: Function BP_GFStage_Lobby.BP_GFStage_Lobby_C.OnLuaGameFlowEvent_413C05D84CA17937E90939AF633D8392
	// Flags: [BlueprintCallable|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(1) Size(0x10) ]
	void OnLuaGameFlowEvent_413C05D84CA17937E90939AF633D8392(struct FString ArgStr);

	// Object: Function BP_GFStage_Lobby.BP_GFStage_Lobby_C.OnBeginStage
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(1) Size(0x8) ]
	void OnBeginStage(struct UObject* Args);

	// Object: Function BP_GFStage_Lobby.BP_GFStage_Lobby_C.OnEndStage
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(0) Size(0x0) ]
	void OnEndStage();

	// Object: Function BP_GFStage_Lobby.BP_GFStage_Lobby_C.ExecuteUbergraph_BP_GFStage_Lobby
	// Flags: [Final|UbergraphFunction]
	// Offset: 0x101d2e88
	// Params: [ Num(1) Size(0x4) ]
	void ExecuteUbergraph_BP_GFStage_Lobby(int32_t EntryPoint);
};

} // namespace SDK
