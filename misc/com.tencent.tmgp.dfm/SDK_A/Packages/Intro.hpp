#pragma once

#include "../CoreUObject_classes.hpp"
#include "DFMGameplay.hpp"

namespace SDK
{

// Package: Intro
// Enums: 0
// Structs: 0
// Classes: 3

struct AActor;
struct AController;
struct ADFMPlayerController;
struct AGPQuest;
struct APlayerStart;
enum class EFlowResult : uint8_t;
struct AIntroGameMode;
struct AIntroGameState;
struct AIntroPlayerState;

// Object: Class Intro.IntroGameMode
// Size: 0x8D0 (Inherited: 0x860)
struct AIntroGameMode : ADFMGameMode
{
	struct FString IntroQuestDir; // 0x860(0x10)
	int32_t IntroQuestID; // 0x870(0x4)
	uint8_t Pad_0x874[0x4]; // 0x874(0x4)
	struct FSoftObjectPath IntroQuestPath; // 0x878(0x18)
	struct TArray<struct FSoftObjectPath> IntroQStagePath; // 0x890(0x10)
	struct FName DefaultPlayerStartTag; // 0x8A0(0x8)
	struct TArray<struct AActor*> IntroPlayerStartArray; // 0x8A8(0x10)
	struct AIntroGameState* IntroGameState; // 0x8B8(0x8)
	uint8_t Pad_0x8C0[0x10]; // 0x8C0(0x10)


	// Object: Function Intro.IntroGameMode.SetPlayerVisiable
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x14fd43b4
	// Params: [ Num(2) Size(0x5) ]
	void SetPlayerVisiable(int32_t PlayerIndex, uint8_t bVisiblity);

	// Object: Function Intro.IntroGameMode.SetCurrentStartSpot
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x14fd4310
	// Params: [ Num(1) Size(0x8) ]
	void SetCurrentStartSpot(struct FName StartSpotName);

	// Object: Function Intro.IntroGameMode.RebornPlayer
	// Flags: [Final|Native|Public]
	// Offset: 0x14fd4228
	// Params: [ Num(2) Size(0x9) ]
	void RebornPlayer(struct AController* PlayerController, uint8_t RefillArmor);

	// Object: Function Intro.IntroGameMode.RebornIntroPlayer
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x14fd40fc
	// Params: [ Num(3) Size(0xA) ]
	void RebornIntroPlayer(struct ADFMPlayerController* PlayerController, uint8_t ResetAlivePlayerPosition, uint8_t RefillArmor);

	// Object: Function Intro.IntroGameMode.OnQuestAsyncLoadComplete
	// Flags: [Final|Native|Protected]
	// Offset: 0x14fd4058
	// Params: [ Num(1) Size(0x8) ]
	void OnQuestAsyncLoadComplete(struct AGPQuest* Quest);

	// Object: Function Intro.IntroGameMode.OnClientGameLoadingFinished
	// Flags: [Final|Native|Protected]
	// Offset: 0x14fd3fb4
	// Params: [ Num(1) Size(0x1) ]
	void OnClientGameLoadingFinished(EFlowResult Result);

	// Object: Function Intro.IntroGameMode.NewstartPlayer
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x14fd3f10
	// Params: [ Num(1) Size(0x4) ]
	void NewstartPlayer(int32_t PlayerIndex);

	// Object: Function Intro.IntroGameMode.NewstartAllPlayer
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x14fd3efc
	// Params: [ Num(0) Size(0x0) ]
	void NewstartAllPlayer();

	// Object: Function Intro.IntroGameMode.GetPlayerControler
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x14fd3e18
	// Params: [ Num(3) Size(0x10) ]
	struct ADFMPlayerController* GetPlayerControler(int32_t TeamID, int32_t PlayerIndexInTeam);

	// Object: Function Intro.IntroGameMode.FindIntroPlayerStart
	// Flags: [Final|Native|Public]
	// Offset: 0x14fd3d38
	// Params: [ Num(2) Size(0x18) ]
	struct TArray<struct APlayerStart*> FindIntroPlayerStart(struct FName StartSpotTag);

	// Object: Function Intro.IntroGameMode.FindDefaultPlayerStart
	// Flags: [Final|Native|Protected]
	// Offset: 0x14fd3d04
	// Params: [ Num(1) Size(0x8) ]
	struct APlayerStart* FindDefaultPlayerStart();
	DEFINE_UE_CLASS_HELPERS(AIntroGameMode, "IntroGameMode")

};

// Object: Class Intro.IntroGameState
// Size: 0xF80 (Inherited: 0xF80)
struct AIntroGameState : ADFMGameState
{	DEFINE_UE_CLASS_HELPERS(AIntroGameState, "IntroGameState")

};

// Object: Class Intro.IntroPlayerState
// Size: 0x1A88 (Inherited: 0x1A78)
struct AIntroPlayerState : ADFMPlayerState
{
	struct APlayerStart* PVEPlayerStart; // 0x1A78(0x8)
	uint8_t IsPlayerVisiable : 1; // 0x1A80(0x1), Mask(0x1)
	uint8_t BitPad_0x1A80_1 : 7; // 0x1A80(0x1)
	uint8_t Pad_0x1A81[0x7]; // 0x1A81(0x7)


	// Object: Function Intro.IntroPlayerState.SetPlayerVisiable
	// Flags: [Final|Native|Public]
	// Offset: 0x14fd6768
	// Params: [ Num(1) Size(0x1) ]
	void SetPlayerVisiable(uint8_t bPlayerVisiable);

	// Object: Function Intro.IntroPlayerState.GetPlayerVisiable
	// Flags: [Final|Native|Public]
	// Offset: 0x14fd6748
	// Params: [ Num(1) Size(0x1) ]
	uint8_t GetPlayerVisiable();
	DEFINE_UE_CLASS_HELPERS(AIntroPlayerState, "IntroPlayerState")

};

} // namespace SDK
