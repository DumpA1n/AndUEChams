#pragma once

#include "../CoreUObject_classes.hpp"
#include "Engine.hpp"
#include "GameCore.hpp"

namespace SDK
{

// Package: GPRecordReplay
// Enums: 0
// Structs: 1
// Classes: 4

struct FReplayDemoInfo;
struct URecordControlComoponnt;
struct ARecordReplaySystem;
struct UReplayControlComponent;
struct UReplayFindComponent;

// Object: ScriptStruct GPRecordReplay.ReplayDemoInfo
// Size: 0x48 (Inherited: 0x0)
struct FReplayDemoInfo
{
	struct FString StreamerType; // 0x0(0x10)
	struct FString ReplayName; // 0x10(0x10)
	struct FString FriendlyName; // 0x20(0x10)
	struct FDateTime Timestamp; // 0x30(0x8)
	int32_t SizeInKBytes; // 0x38(0x4)
	int32_t LengthInMS; // 0x3C(0x4)
	uint8_t bIsValid : 1; // 0x40(0x1), Mask(0x1)
	uint8_t BitPad_0x40_1 : 7; // 0x40(0x1)
	uint8_t Pad_0x41[0x7]; // 0x41(0x7)
};

// Object: Class GPRecordReplay.RecordControlComoponnt
// Size: 0x108 (Inherited: 0xF8)
struct URecordControlComoponnt : UActorComponent
{
	struct FString DemoFriendlyName; // 0xF8(0x10)
	DEFINE_UE_CLASS_HELPERS(URecordControlComoponnt, "RecordControlComoponnt")

};

// Object: Class GPRecordReplay.RecordReplaySystem
// Size: 0x398 (Inherited: 0x370)
struct ARecordReplaySystem : ALevelSubsystem
{
	uint8_t bNeedReplayFindComponent : 1; // 0x370(0x1), Mask(0x1)
	uint8_t BitPad_0x370_1 : 7; // 0x370(0x1)
	uint8_t bAllowManualRecordCommand : 1; // 0x371(0x1), Mask(0x1)
	uint8_t BitPad_0x371_1 : 7; // 0x371(0x1)
	uint8_t Pad_0x372[0x6]; // 0x372(0x6)
	struct URecordControlComoponnt* RecordCtrlComponent; // 0x378(0x8)
	struct UReplayControlComponent* DefaultReplayCtrlCompClass; // 0x380(0x8)
	struct UReplayControlComponent* ReplayCtrlCompClassOveride; // 0x388(0x8)
	uint8_t Pad_0x390[0x8]; // 0x390(0x8)


	// Object: Function GPRecordReplay.RecordReplaySystem.StartStopRecordingReplayOnServer
	// Flags: [Net|NetReliableNative|Event|Public|NetServer|NetValidate]
	// Offset: 0xadd0bb4
	// Params: [ Num(1) Size(0x1) ]
	void StartStopRecordingReplayOnServer(uint8_t bStartOrStop);
	DEFINE_UE_CLASS_HELPERS(ARecordReplaySystem, "RecordReplaySystem")

};

// Object: Class GPRecordReplay.ReplayControlComponent
// Size: 0x100 (Inherited: 0xF8)
struct UReplayControlComponent : UActorComponent
{
	uint8_t Pad_0xF8[0x8]; // 0xF8(0x8)


	// Object: Function GPRecordReplay.ReplayControlComponent.SwitchReplayPauseState
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xadd1344
	// Params: [ Num(1) Size(0x1) ]
	uint8_t SwitchReplayPauseState();

	// Object: Function GPRecordReplay.ReplayControlComponent.SetReplayToTime
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xadd12a0
	// Params: [ Num(1) Size(0x4) ]
	void SetReplayToTime(int32_t Seconds);

	// Object: Function GPRecordReplay.ReplayControlComponent.SetReplayPlayRate
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xadd11fc
	// Params: [ Num(1) Size(0x4) ]
	void SetReplayPlayRate(float PlayRate);

	// Object: Function GPRecordReplay.ReplayControlComponent.GetReplayTotalTime
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xadd11c8
	// Params: [ Num(1) Size(0x4) ]
	float GetReplayTotalTime();

	// Object: Function GPRecordReplay.ReplayControlComponent.GetReplayCurrentTiome
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xadd1194
	// Params: [ Num(1) Size(0x4) ]
	float GetReplayCurrentTiome();
	DEFINE_UE_CLASS_HELPERS(UReplayControlComponent, "ReplayControlComponent")

};

// Object: Class GPRecordReplay.ReplayFindComponent
// Size: 0x208 (Inherited: 0xF8)
struct UReplayFindComponent : UActorComponent
{
	struct TMap<struct FString, uint8_t> SearchInclueTypes; // 0xF8(0x50)
	struct FMulticastInlineDelegate OnSearchReplayStreamsComplete; // 0x148(0x10)
	uint8_t Pad_0x158[0xB0]; // 0x158(0xB0)


	// Object: Function GPRecordReplay.ReplayFindComponent.PlayReplay
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xadd1930
	// Params: [ Num(2) Size(0x20) ]
	void PlayReplay(struct FString ReplayName, struct FString StreamerType);

	// Object: Function GPRecordReplay.ReplayFindComponent.FindReplays
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xadd191c
	// Params: [ Num(0) Size(0x0) ]
	void FindReplays();
	DEFINE_UE_CLASS_HELPERS(UReplayFindComponent, "ReplayFindComponent")

};

} // namespace SDK
