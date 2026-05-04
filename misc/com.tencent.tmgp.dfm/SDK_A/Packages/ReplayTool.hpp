#pragma once

#include "../CoreUObject_classes.hpp"
#include "Engine.hpp"

namespace SDK
{

// Package: ReplayTool
// Enums: 0
// Structs: 8
// Classes: 5

struct AActor;
struct APlayerController;
struct FReportRelatedFiles;
struct FShotcutInfo;
struct FMemoryReport;
struct FTextureMemoryInfo;
struct FObjMemoryInfo;
struct FPerformanceInfo;
struct FHistoryInfo;
struct FS_ReplayInfo;
struct UReplayReportCommandlet;
struct UCustomizedReplayReport;
struct UReplayDemoNetDriver;
struct AReplaySpectatorPlayerController;
struct IReplayCharacterInterface;

// Object: ScriptStruct ReplayTool.ReportRelatedFiles
// Size: 0x50 (Inherited: 0x0)
struct FReportRelatedFiles
{
	uint8_t Pad_0x0[0x50]; // 0x0(0x50)
};

// Object: ScriptStruct ReplayTool.ShotcutInfo
// Size: 0x40 (Inherited: 0x0)
struct FShotcutInfo
{
	uint8_t Pad_0x0[0x40]; // 0x0(0x40)
};

// Object: ScriptStruct ReplayTool.MemoryReport
// Size: 0x60 (Inherited: 0x0)
struct FMemoryReport
{
	uint8_t Pad_0x0[0x60]; // 0x0(0x60)
};

// Object: ScriptStruct ReplayTool.TextureMemoryInfo
// Size: 0x10 (Inherited: 0x0)
struct FTextureMemoryInfo
{
	uint8_t Pad_0x0[0x10]; // 0x0(0x10)
};

// Object: ScriptStruct ReplayTool.ObjMemoryInfo
// Size: 0x10 (Inherited: 0x0)
struct FObjMemoryInfo
{
	uint8_t Pad_0x0[0x10]; // 0x0(0x10)
};

// Object: ScriptStruct ReplayTool.PerformanceInfo
// Size: 0x40 (Inherited: 0x0)
struct FPerformanceInfo
{
	uint8_t Pad_0x0[0x40]; // 0x0(0x40)
};

// Object: ScriptStruct ReplayTool.HistoryInfo
// Size: 0x10 (Inherited: 0x0)
struct FHistoryInfo
{
	uint8_t Pad_0x0[0x10]; // 0x0(0x10)
};

// Object: ScriptStruct ReplayTool.S_ReplayInfo
// Size: 0x30 (Inherited: 0x0)
struct FS_ReplayInfo
{
	struct FString ReplayName; // 0x0(0x10)
	struct FString FriendlyName; // 0x10(0x10)
	struct FDateTime Timestamp; // 0x20(0x8)
	int32_t LengthInMS; // 0x28(0x4)
	uint8_t bIsValid : 1; // 0x2C(0x1), Mask(0x1)
	uint8_t BitPad_0x2C_1 : 7; // 0x2C(0x1)
	uint8_t Pad_0x2D[0x3]; // 0x2D(0x3)
};

// Object: Class ReplayTool.ReplayReportCommandlet
// Size: 0x90 (Inherited: 0x88)
struct UReplayReportCommandlet : UCommandlet
{
	struct UCustomizedReplayReport* OutputReport; // 0x88(0x8)
	DEFINE_UE_CLASS_HELPERS(UReplayReportCommandlet, "ReplayReportCommandlet")

};

// Object: Class ReplayTool.CustomizedReplayReport
// Size: 0xD8 (Inherited: 0x28)
struct UCustomizedReplayReport : UObject
{
	struct TArray<struct FPerformanceInfo> PerformanceRecords; // 0x28(0x10)
	struct TArray<struct FMemoryReport> MemoryRecords; // 0x38(0x10)
	struct TMap<struct FString, struct FHistoryInfo> HistoryStatistic; // 0x48(0x50)
	uint8_t Pad_0x98[0x40]; // 0x98(0x40)
	DEFINE_UE_CLASS_HELPERS(UCustomizedReplayReport, "CustomizedReplayReport")

};

// Object: Class ReplayTool.ReplayDemoNetDriver
// Size: 0x1180 (Inherited: 0x1110)
struct UReplayDemoNetDriver : UDemoNetDriver
{
	uint8_t bOutputMemoryLog : 1; // 0x110C(0x1), Mask(0x1)
	uint8_t BitPad_0x1110_1 : 7; // 0x1110(0x1)
	uint8_t Pad_0x1111[0x3F]; // 0x1111(0x3F)
	struct APlayerController* LocalPC; // 0x1150(0x8)
	uint8_t Pad_0x1158[0x18]; // 0x1158(0x18)
	struct AActor* LocalCharActor; // 0x1170(0x8)
	struct UCustomizedReplayReport* ReplayReport; // 0x1178(0x8)
	DEFINE_UE_CLASS_HELPERS(UReplayDemoNetDriver, "ReplayDemoNetDriver")

};

// Object: Class ReplayTool.ReplaySpectatorPlayerController
// Size: 0x708 (Inherited: 0x6C0)
struct AReplaySpectatorPlayerController : APlayerController
{
	uint8_t Pad_0x6C0[0x8]; // 0x6C0(0x8)
	struct TArray<struct FS_ReplayInfo> RecordAllReplays; // 0x6C8(0x10)
	uint8_t Pad_0x6D8[0x30]; // 0x6D8(0x30)


	// Object: Function ReplayTool.ReplaySpectatorPlayerController.SetCurrentReplayTimeToSeconds
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x8729604
	// Params: [ Num(1) Size(0x4) ]
	void SetCurrentReplayTimeToSeconds(int32_t Seconds);

	// Object: Function ReplayTool.ReplaySpectatorPlayerController.SetCurrentReplayPlayRate
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x8729560
	// Params: [ Num(1) Size(0x4) ]
	void SetCurrentReplayPlayRate(float PlayRate);

	// Object: Function ReplayTool.ReplaySpectatorPlayerController.SetCurrentReplayPausedState
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x87294a8
	// Params: [ Num(2) Size(0x2) ]
	uint8_t SetCurrentReplayPausedState(uint8_t bDoPause);

	// Object: Function ReplayTool.ReplaySpectatorPlayerController.PlayReplayFromBP
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x87293b0
	// Params: [ Num(1) Size(0x10) ]
	void PlayReplayFromBP(struct FString ReplayName);

	// Object: Function ReplayTool.ReplaySpectatorPlayerController.ListReplaysFromBP
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x872939c
	// Params: [ Num(0) Size(0x0) ]
	void ListReplaysFromBP();

	// Object: Function ReplayTool.ReplaySpectatorPlayerController.GetCurrentReplayTotalTimeInSeconds
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x8729368
	// Params: [ Num(1) Size(0x4) ]
	int32_t GetCurrentReplayTotalTimeInSeconds();

	// Object: Function ReplayTool.ReplaySpectatorPlayerController.GetCurrentReplayCurrentTimeInSeconds
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x8729334
	// Params: [ Num(1) Size(0x4) ]
	int32_t GetCurrentReplayCurrentTimeInSeconds();

	// Object: Function ReplayTool.ReplaySpectatorPlayerController.DeleteReplay
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x8729288
	// Params: [ Num(1) Size(0x10) ]
	void DeleteReplay(struct FString ReplayName);

	// Object: Function ReplayTool.ReplaySpectatorPlayerController.BP_OnFindReplaysComplete
	// Flags: [Event|Public|HasOutParms|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(1) Size(0x10) ]
	void BP_OnFindReplaysComplete(const struct TArray<struct FS_ReplayInfo>& AllReplays);
	DEFINE_UE_CLASS_HELPERS(AReplaySpectatorPlayerController, "ReplaySpectatorPlayerController")

};

// Object: Class ReplayTool.ReplayCharacterInterface
// Size: 0x28 (Inherited: 0x28)
struct IReplayCharacterInterface : IInterface
{

	// Object: Function ReplayTool.ReplayCharacterInterface.SwitchToReplayFPPCamera
	// Flags: [Native|Public]
	// Offset: 0x87298f4
	// Params: [ Num(0) Size(0x0) ]
	void SwitchToReplayFPPCamera();

	// Object: Function ReplayTool.ReplayCharacterInterface.SetFixedFPPCam
	// Flags: [Native|Public|HasDefaults]
	// Offset: 0x87297c8
	// Params: [ Num(3) Size(0x1C) ]
	void SetFixedFPPCam(uint8_t bIsCameraFixed, struct FVector InFixLoc, struct FRotator InFixRotation);

	// Object: Function ReplayTool.ReplayCharacterInterface.GetCurrCameraInfo
	// Flags: [Native|Public|HasOutParms|HasDefaults]
	// Offset: 0x87296c8
	// Params: [ Num(2) Size(0x18) ]
	void GetCurrCameraInfo(struct FVector& outCamLoc, struct FRotator& outCamRot);
	DEFINE_UE_CLASS_HELPERS(IReplayCharacterInterface, "ReplayCharacterInterface")

};

} // namespace SDK
