#pragma once

#include "../CoreUObject_classes.hpp"
#include "Engine.hpp"

namespace SDK
{

// Package: GPGameFlow
// Enums: 1
// Structs: 0
// Classes: 9

struct FLatentActionInfo;
struct UGameInstance;
struct UGPGameFlowUtils;
struct UGPGameFlowStringArg;
struct UGameFlowDelegates;
struct UGameFlowGraph;
struct UGPGameFlowStagePlayerBase;
struct UGPLuaGameFlowEventListener;
struct UGameFlowStage;
struct UGPGameFlowStagePlayer;
struct UGPGameFlowGraphPlayer;

// Object: Enum GPGameFlow.EGameFlowStageType
enum class EGameFlowStageType : uint8_t
{
	None = 0,
	Hotfix = 1,
	VersionUpdate = 2,
	PrecompilePSO = 3,
	Login = 4,
	LoginToLobby = 5,
	Lobby = 6,
	LobbyToGame = 7,
	LobbyBHD = 8,
	LobbyBHDToGame = 9,
	Game = 10,
	GameToLobby = 11,
	GameToLobbyBHD = 12,
	Discovery = 13,
	SafeHouse = 14,
	LoginToModeHall = 15,
	LoginToBattleField = 16,
	LoginToSafeHouse = 17,
	LoginToLobbyBHD = 18,
	SafeHouseToBattleField = 19,
	SafeHouseToLobbyBHD = 20,
	BattleFieldToSafeHouse = 21,
	LobbyToLobbyBHD = 22,
	LobbyBHDToLobby = 23,
	LobbyBHDToSafeHouse = 24,
	ModeHall = 25,
	ModeHallToLobby = 26,
	ModeHallToSafeHouse = 27,
	ModeHallToLobbyBHD = 28,
	SafeHouseToGame = 29,
	GameToSafeHouse = 30,
	GameToGame = 31,
	LobbyToLogin = 32,
	LoginToIntro = 33,
	Intro = 34,
	IntroToSafeHouse = 35,
	PostLaunch = 36,
	LaunchToLogin = 37,
	GameSettlement = 38,
	LobbySOLChallenge = 39,
	GameToLobbySOLChallenge = 40,
	ModeHallToLobbySOLChallenge = 41,
	LobbyBHDToLobbySOLChallenge = 42,
	EGameFlowStageType_MAX = 43
};

// Object: Class GPGameFlow.GPGameFlowUtils
// Size: 0x28 (Inherited: 0x28)
struct UGPGameFlowUtils : UBlueprintFunctionLibrary
{	DEFINE_UE_CLASS_HELPERS(UGPGameFlowUtils, "GPGameFlowUtils")

};

// Object: Class GPGameFlow.GPGameFlowStringArg
// Size: 0x38 (Inherited: 0x28)
struct UGPGameFlowStringArg : UObject
{
	struct FString RawString; // 0x28(0x10)


	// Object: Function GPGameFlow.GPGameFlowStringArg.ToString
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0xfaa0fd8
	// Params: [ Num(1) Size(0x10) ]
	struct FString ToString();

	// Object: Function GPGameFlow.GPGameFlowStringArg.FromString
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0xf9f8880
	// Params: [ Num(3) Size(0x20) ]
	static struct UGPGameFlowStringArg* FromString(struct UObject* WorldContextObject, struct FString Value);
	DEFINE_UE_CLASS_HELPERS(UGPGameFlowStringArg, "GPGameFlowStringArg")

};

// Object: Class GPGameFlow.GameFlowDelegates
// Size: 0xA8 (Inherited: 0x30)
struct UGameFlowDelegates : UGameInstanceSubsystem
{
	uint8_t Pad_0x30[0x8]; // 0x30(0x8)
	struct FMulticastInlineDelegate OnPreEnterGameFlowStage; // 0x38(0x10)
	struct FMulticastInlineDelegate OnEnterGameFlowStage; // 0x48(0x10)
	struct FMulticastInlineDelegate OnPostEnterGameFlowStage; // 0x58(0x10)
	struct FMulticastInlineDelegate OnLeaveGameFlowStage; // 0x68(0x10)
	struct FMulticastInlineDelegate OnPostLeaveGameFlowStage; // 0x78(0x10)
	struct FMulticastInlineDelegate OnGameFlowGraphPlay; // 0x88(0x10)
	struct FMulticastInlineDelegate OnGameFlowGraphStop; // 0x98(0x10)


	// Object: Function GPGameFlow.GameFlowDelegates.UpdatePendingNextFlowStage
	// Flags: [Final|Native|Public]
	// Offset: 0x78a70ac
	// Params: [ Num(1) Size(0x1) ]
	void UpdatePendingNextFlowStage(EGameFlowStageType InGameFlowStage);

	// Object: Function GPGameFlow.GameFlowDelegates.OnGameFlowEnter
	// Flags: [Final|Native|Public]
	// Offset: 0xf8e1a58
	// Params: [ Num(1) Size(0x1) ]
	void OnGameFlowEnter(EGameFlowStageType GameFlowStage);

	// Object: Function GPGameFlow.GameFlowDelegates.GetPreGameFlowStage
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x78a7090
	// Params: [ Num(1) Size(0x1) ]
	EGameFlowStageType GetPreGameFlowStage();

	// Object: Function GPGameFlow.GameFlowDelegates.GetPendingNextGameFlowStage
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x78a7074
	// Params: [ Num(1) Size(0x1) ]
	EGameFlowStageType GetPendingNextGameFlowStage();

	// Object: Function GPGameFlow.GameFlowDelegates.GetGameFlowDelegates
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0xfe43030
	// Params: [ Num(2) Size(0x10) ]
	static struct UGameFlowDelegates* GetGameFlowDelegates(struct UObject* Context);

	// Object: Function GPGameFlow.GameFlowDelegates.GetCurGameFlowStage
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x78a7058
	// Params: [ Num(1) Size(0x1) ]
	EGameFlowStageType GetCurGameFlowStage();
	DEFINE_UE_CLASS_HELPERS(UGameFlowDelegates, "GameFlowDelegates")

};

// Object: Class GPGameFlow.GameFlowGraph
// Size: 0xA0 (Inherited: 0x28)
struct UGameFlowGraph : UObject
{
	uint8_t Pad_0x28[0x8]; // 0x28(0x8)
	struct FString GFGraphName; // 0x30(0x10)
	struct UGameFlowStage* CurrentStage; // 0x40(0x8)
	struct TMap<struct UGameFlowStage*, struct UGameFlowStage*> AllStageMap; // 0x48(0x50)
	struct UGameInstance* OwningGameInstance; // 0x98(0x8)


	// Object: Function GPGameFlow.GameFlowGraph.OnLuaGameFlowEvent
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0xfa93d2c
	// Params: [ Num(4) Size(0x38) ]
	static void OnLuaGameFlowEvent(struct UGameInstance* GameInst, struct FString MdlName, struct FString EvtName, struct FString ArgStr);

	// Object: Function GPGameFlow.GameFlowGraph.OnEndFlow
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(0) Size(0x0) ]
	void OnEndFlow();

	// Object: Function GPGameFlow.GameFlowGraph.OnBeginFlow
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(0) Size(0x0) ]
	void OnBeginFlow();

	// Object: Function GPGameFlow.GameFlowGraph.GotoStage
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x78a72c0
	// Params: [ Num(2) Size(0x10) ]
	void GotoStage(struct UGameFlowStage* GFStageClass, struct UObject* Args);

	// Object: Function GPGameFlow.GameFlowGraph.EndFlow
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x78a72ac
	// Params: [ Num(0) Size(0x0) ]
	void EndFlow();

	// Object: Function GPGameFlow.GameFlowGraph.BeginFlow
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x78a7208
	// Params: [ Num(1) Size(0x8) ]
	void BeginFlow(struct UGameInstance* GameInstance);
	DEFINE_UE_CLASS_HELPERS(UGameFlowGraph, "GameFlowGraph")

};

// Object: Class GPGameFlow.GPGameFlowStagePlayerBase
// Size: 0x40 (Inherited: 0x30)
struct UGPGameFlowStagePlayerBase : UBlueprintAsyncActionBase
{
	struct FMulticastInlineDelegate OnFlowBranch; // 0x30(0x10)
	DEFINE_UE_CLASS_HELPERS(UGPGameFlowStagePlayerBase, "GPGameFlowStagePlayerBase")

};

// Object: Class GPGameFlow.GPLuaGameFlowEventListener
// Size: 0x68 (Inherited: 0x30)
struct UGPLuaGameFlowEventListener : UBlueprintAsyncActionBase
{
	struct FMulticastInlineDelegate OnLuaGameFlowEvent; // 0x30(0x10)
	uint8_t Pad_0x40[0x28]; // 0x40(0x28)


	// Object: Function GPGameFlow.GPLuaGameFlowEventListener.ListenLuaModuleEvent
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0xf84ce08
	// Params: [ Num(3) Size(0x20) ]
	static struct UGPLuaGameFlowEventListener* ListenLuaModuleEvent(struct UGameFlowStage* GFStage, struct FString ModuleEvent);
	DEFINE_UE_CLASS_HELPERS(UGPLuaGameFlowEventListener, "GPLuaGameFlowEventListener")

};

// Object: Class GPGameFlow.GameFlowStage
// Size: 0x88 (Inherited: 0x28)
struct UGameFlowStage : UObject
{
	struct TArray<struct UGPLuaGameFlowEventListener*> ListLuaGameFlowEventListeners; // 0x28(0x10)
	uint8_t Pad_0x38[0x18]; // 0x38(0x18)
	struct UObject* LastLeaveArgs; // 0x50(0x8)
	uint8_t bEnableGlobalLuaModuleFuncAndEvent : 1; // 0x58(0x1), Mask(0x1)
	uint8_t BitPad_0x58_1 : 7; // 0x58(0x1)
	EGameFlowStageType FlowStageType; // 0x59(0x1)
	EGameFlowStageType PendingNextFlowStage; // 0x5A(0x1)
	uint8_t Pad_0x5B[0x5]; // 0x5B(0x5)
	struct FString GFStageName; // 0x60(0x10)
	struct UGameFlowStage* GFStageBackClass; // 0x70(0x8)
	struct UGameFlowGraph* Owner; // 0x78(0x8)
	struct UGPGameFlowStagePlayerBase* Player; // 0x80(0x8)


	// Object: Function GPGameFlow.GameFlowStage.OnTick
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(1) Size(0x4) ]
	void OnTick(float DeltaTime);

	// Object: Function GPGameFlow.GameFlowStage.OnEndStage
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(0) Size(0x0) ]
	void OnEndStage();

	// Object: Function GPGameFlow.GameFlowStage.OnBeginStage
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(1) Size(0x8) ]
	void OnBeginStage(struct UObject* Args);

	// Object: Function GPGameFlow.GameFlowStage.LeaveToStage
	// Flags: [Final|Native|Protected|BlueprintCallable]
	// Offset: 0x78a7694
	// Params: [ Num(2) Size(0x10) ]
	void LeaveToStage(struct UGameFlowStage* GFStageClass, struct UObject* Args);

	// Object: Function GPGameFlow.GameFlowStage.LeaveToBack
	// Flags: [Final|Native|Protected|BlueprintCallable]
	// Offset: 0x78a75f0
	// Params: [ Num(1) Size(0x8) ]
	void LeaveToBack(struct UObject* Args);

	// Object: Function GPGameFlow.GameFlowStage.Leave
	// Flags: [Final|Native|Protected|BlueprintCallable]
	// Offset: 0xf816c74
	// Params: [ Num(2) Size(0x18) ]
	void Leave(struct FString FlowBranch, struct UObject* Args);

	// Object: Function GPGameFlow.GameFlowStage.IsAsanOpen
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x78a75d8
	// Params: [ Num(1) Size(0x1) ]
	static uint8_t IsAsanOpen();

	// Object: Function GPGameFlow.GameFlowStage.EndStage
	// Flags: [Native|Public]
	// Offset: 0x78a75bc
	// Params: [ Num(0) Size(0x0) ]
	void EndStage();

	// Object: Function GPGameFlow.GameFlowStage.Delay
	// Flags: [Final|Native|Protected|BlueprintCallable]
	// Offset: 0x109ab03c
	// Params: [ Num(2) Size(0x20) ]
	void Delay(float Duration, struct FLatentActionInfo LatentInfo);

	// Object: Function GPGameFlow.GameFlowStage.CallLuaModuleFunction
	// Flags: [Final|Native|Protected|BlueprintCallable]
	// Offset: 0x10b2e6f8
	// Params: [ Num(2) Size(0x20) ]
	void CallLuaModuleFunction(struct FString ModuleFunc, struct FString ArgStr);

	// Object: Function GPGameFlow.GameFlowStage.CallLuaGlobalFunction
	// Flags: [Final|Native|Protected|BlueprintCallable]
	// Offset: 0x10985a2c
	// Params: [ Num(1) Size(0x10) ]
	void CallLuaGlobalFunction(struct FString FuncName);

	// Object: Function GPGameFlow.GameFlowStage.BeginStage
	// Flags: [Native|Public]
	// Offset: 0x78a7510
	// Params: [ Num(1) Size(0x8) ]
	void BeginStage(struct UObject* Args);
	DEFINE_UE_CLASS_HELPERS(UGameFlowStage, "GameFlowStage")

};

// Object: Class GPGameFlow.GPGameFlowStagePlayer
// Size: 0x40 (Inherited: 0x40)
struct UGPGameFlowStagePlayer : UGPGameFlowStagePlayerBase
{

	// Object: Function GPGameFlow.GPGameFlowStagePlayer.EnterGameFlowStage
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0xfaab938
	// Params: [ Num(3) Size(0x18) ]
	static struct UGPGameFlowStagePlayer* EnterGameFlowStage(struct UGameFlowGraph* GFGraph, struct UGameFlowStage* GFStageClass);
	DEFINE_UE_CLASS_HELPERS(UGPGameFlowStagePlayer, "GPGameFlowStagePlayer")

};

// Object: Class GPGameFlow.GPGameFlowGraphPlayer
// Size: 0x38 (Inherited: 0x30)
struct UGPGameFlowGraphPlayer : UGameInstanceSubsystem
{
	struct UGameFlowGraph* CurrentGraph; // 0x30(0x8)


	// Object: Function GPGameFlow.GPGameFlowGraphPlayer.Stop
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x78a7908
	// Params: [ Num(0) Size(0x0) ]
	void Stop();

	// Object: Function GPGameFlow.GPGameFlowGraphPlayer.Play
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x10b5f508
	// Params: [ Num(2) Size(0x10) ]
	struct UGameFlowGraph* Play(struct UGameFlowGraph* GFGraphClass);
	DEFINE_UE_CLASS_HELPERS(UGPGameFlowGraphPlayer, "GPGameFlowGraphPlayer")

};

} // namespace SDK
