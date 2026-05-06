#pragma once

#include "../CoreUObject_classes.hpp"
#include "Engine.hpp"

namespace SDK
{

// Package: MFReplaySystem
// Enums: 0
// Structs: 16
// Classes: 11

struct AActor;
struct UDemoNetDriver;
struct UWorld;
struct FReplayEvent;
struct FReplayFragmentServerSendInfo;
struct FReplayObjectData;
struct FReplayTransformData;
struct FReplayRotatorData;
struct FReplayVectorData;
struct FReplayTextData;
struct FReplayStringData;
struct FReplayNameData;
struct FReplayFloatData;
struct FReplayInt64Data;
struct FReplayIntData;
struct FReplayByteData;
struct FReplayBoolData;
struct FBlendSettings;
struct FReplayInfo;
struct UMFPCLocalFileKillCamComponent;
struct UDeleteReplayObject;
struct UGetSavedReplaysObject;
struct UGoToTimeObject;
struct UMFReplaySystemBPLibrary;
struct UMFReplayTypes;
struct URenameReplayObject;
struct UReplayDataObject;
struct UReplayObject;
struct AReplayPlayerController;
struct URequestEventsObject;

// Object: ScriptStruct MFReplaySystem.ReplayEvent
// Size: 0x30 (Inherited: 0x0)
struct FReplayEvent
{
	struct FString EventId; // 0x0(0x10)
	struct FString Group; // 0x10(0x10)
	int32_t TimeInMs; // 0x20(0x4)
	uint8_t Pad_0x24[0x4]; // 0x24(0x4)
	struct UReplayDataObject* Data; // 0x28(0x8)
};

// Object: ScriptStruct MFReplaySystem.ReplayFragmentServerSendInfo
// Size: 0x38 (Inherited: 0x0)
struct FReplayFragmentServerSendInfo
{
	uint8_t Pad_0x0[0x38]; // 0x0(0x38)
};

// Object: ScriptStruct MFReplaySystem.ReplayObjectData
// Size: 0x18 (Inherited: 0x0)
struct FReplayObjectData
{
	struct FString Name; // 0x0(0x10)
	struct UObject* Value; // 0x10(0x8)
};

// Object: ScriptStruct MFReplaySystem.ReplayTransformData
// Size: 0x40 (Inherited: 0x0)
struct FReplayTransformData
{
	struct FString Name; // 0x0(0x10)
	struct FTransform Value; // 0x10(0x30)
};

// Object: ScriptStruct MFReplaySystem.ReplayRotatorData
// Size: 0x20 (Inherited: 0x0)
struct FReplayRotatorData
{
	struct FString Name; // 0x0(0x10)
	struct FRotator Value; // 0x10(0xC)
	uint8_t Pad_0x1C[0x4]; // 0x1C(0x4)
};

// Object: ScriptStruct MFReplaySystem.ReplayVectorData
// Size: 0x20 (Inherited: 0x0)
struct FReplayVectorData
{
	struct FString Name; // 0x0(0x10)
	struct FVector Value; // 0x10(0xC)
	uint8_t Pad_0x1C[0x4]; // 0x1C(0x4)
};

// Object: ScriptStruct MFReplaySystem.ReplayTextData
// Size: 0x28 (Inherited: 0x0)
struct FReplayTextData
{
	struct FString Name; // 0x0(0x10)
	struct FText Value; // 0x10(0x18)
};

// Object: ScriptStruct MFReplaySystem.ReplayStringData
// Size: 0x20 (Inherited: 0x0)
struct FReplayStringData
{
	struct FString Name; // 0x0(0x10)
	struct FString Value; // 0x10(0x10)
};

// Object: ScriptStruct MFReplaySystem.ReplayNameData
// Size: 0x18 (Inherited: 0x0)
struct FReplayNameData
{
	struct FString Name; // 0x0(0x10)
	struct FName Value; // 0x10(0x8)
};

// Object: ScriptStruct MFReplaySystem.ReplayFloatData
// Size: 0x18 (Inherited: 0x0)
struct FReplayFloatData
{
	struct FString Name; // 0x0(0x10)
	float Value; // 0x10(0x4)
	uint8_t Pad_0x14[0x4]; // 0x14(0x4)
};

// Object: ScriptStruct MFReplaySystem.ReplayInt64Data
// Size: 0x18 (Inherited: 0x0)
struct FReplayInt64Data
{
	struct FString Name; // 0x0(0x10)
	int64_t Value; // 0x10(0x8)
};

// Object: ScriptStruct MFReplaySystem.ReplayIntData
// Size: 0x18 (Inherited: 0x0)
struct FReplayIntData
{
	struct FString Name; // 0x0(0x10)
	int32_t Value; // 0x10(0x4)
	uint8_t Pad_0x14[0x4]; // 0x14(0x4)
};

// Object: ScriptStruct MFReplaySystem.ReplayByteData
// Size: 0x20 (Inherited: 0x0)
struct FReplayByteData
{
	struct FString Name; // 0x0(0x10)
	struct TArray<uint8_t> Value; // 0x10(0x10)
};

// Object: ScriptStruct MFReplaySystem.ReplayBoolData
// Size: 0x18 (Inherited: 0x0)
struct FReplayBoolData
{
	struct FString Name; // 0x0(0x10)
	bool Value; // 0x10(0x1)
	uint8_t Pad_0x11[0x7]; // 0x11(0x7)
};

// Object: ScriptStruct MFReplaySystem.BlendSettings
// Size: 0x10 (Inherited: 0x0)
struct FBlendSettings
{
	float BlendTime; // 0x0(0x4)
	uint8_t BlendFunction; // 0x4(0x1)
	uint8_t Pad_0x5[0x3]; // 0x5(0x3)
	float BlendExponent; // 0x8(0x4)
	bool bLockOutgoing; // 0xC(0x1)
	uint8_t Pad_0xD[0x3]; // 0xD(0x3)
};

// Object: ScriptStruct MFReplaySystem.ReplayInfo
// Size: 0x30 (Inherited: 0x0)
struct FReplayInfo
{
	struct FString FriendlyName; // 0x0(0x10)
	struct FString ActualName; // 0x10(0x10)
	struct FDateTime RecordDate; // 0x20(0x8)
	int32_t LengthInMS; // 0x28(0x4)
	float SizeInMb; // 0x2C(0x4)
};

// Object: Class MFReplaySystem.MFPCLocalFileKillCamComponent
// Size: 0x128 (Inherited: 0xE0)
struct UMFPCLocalFileKillCamComponent : UActorComponent
{
	DEFINE_UE_CLASS_HELPERS(UMFPCLocalFileKillCamComponent, "MFPCLocalFileKillCamComponent")

	int32_t ClientCapWhenDownLoad; // 0xE0(0x4)
	uint8_t Pad_0xE4[0x44]; // 0xE4(0x44)

	// Object: Function MFReplaySystem.MFPCLocalFileKillCamComponent.ServerDownloadReplayData
	// Flags: [Net|NetReliableNative|Event|Protected|NetServer]
	// Offset: 0x4f73f04
	// Params: [ Num(0) Size(0x0) ]
	void ServerDownloadReplayData();

	// Object: Function MFReplaySystem.MFPCLocalFileKillCamComponent.ServerAckReplayData
	// Flags: [Net|NetReliableNative|Event|Protected|NetServer]
	// Offset: 0x4f73bf8
	// Params: [ Num(2) Size(0x18) ]
	void ServerAckReplayData(struct FString ReplayName, int64_t TotalSize);

	// Object: Function MFReplaySystem.MFPCLocalFileKillCamComponent.OnStartReceiveFile
	// Flags: [Native|Protected]
	// Offset: 0x4f73aec
	// Params: [ Num(1) Size(0x10) ]
	void OnStartReceiveFile(struct FString InReplayFileName);

	// Object: Function MFReplaySystem.MFPCLocalFileKillCamComponent.OnDownloadReplayDataComplete
	// Flags: [Native|Protected]
	// Offset: 0x4f739e0
	// Params: [ Num(1) Size(0x10) ]
	void OnDownloadReplayDataComplete(struct FString InReplayFileName);

	// Object: Function MFReplaySystem.MFPCLocalFileKillCamComponent.DownloadReplayData
	// Flags: [Native|Public]
	// Offset: 0x4f73f20
	// Params: [ Num(0) Size(0x0) ]
	void DownloadReplayData();

	// Object: Function MFReplaySystem.MFPCLocalFileKillCamComponent.DownloadExternalDataChunk
	// Flags: [Final|Native|Protected]
	// Offset: 0x4f73938
	// Params: [ Num(1) Size(0x4) ]
	void DownloadExternalDataChunk(float EndDemoTime);

	// Object: Function MFReplaySystem.MFPCLocalFileKillCamComponent.ClientRecieveReplayData
	// Flags: [Net|NetReliableNative|Event|Protected|NetClient]
	// Offset: 0x4f73cf4
	// Params: [ Num(6) Size(0x38) ]
	void ClientRecieveReplayData(struct FString ReplayName, int64_t TotalSize, uint32_t StartPos, struct TArray<uint8_t> Datas, bool bLastRPC, uint32_t ChunkEndTimeMS);

	// Object: Function MFReplaySystem.MFPCLocalFileKillCamComponent.ClientNotifyReplayDownloadFailed
	// Flags: [Net|NetReliableNative|Event|Protected|NetClient]
	// Offset: 0x4f73830
	// Params: [ Num(2) Size(0x20) ]
	void ClientNotifyReplayDownloadFailed(struct FString ReplayName, struct FString ErrorInfo);
};

// Object: Class MFReplaySystem.DeleteReplayObject
// Size: 0x58 (Inherited: 0x28)
struct UDeleteReplayObject : UObject
{
	DEFINE_UE_CLASS_HELPERS(UDeleteReplayObject, "DeleteReplayObject")

	struct FMulticastInlineDelegate OnDeleteComplete; // 0x28(0x10)
	uint8_t Pad_0x38[0x20]; // 0x38(0x20)
};

// Object: Class MFReplaySystem.GetSavedReplaysObject
// Size: 0x58 (Inherited: 0x28)
struct UGetSavedReplaysObject : UObject
{
	DEFINE_UE_CLASS_HELPERS(UGetSavedReplaysObject, "GetSavedReplaysObject")

	struct FMulticastInlineDelegate OnGetReplaysComplete; // 0x28(0x10)
	uint8_t Pad_0x38[0x20]; // 0x38(0x20)
};

// Object: Class MFReplaySystem.GoToTimeObject
// Size: 0x58 (Inherited: 0x28)
struct UGoToTimeObject : UObject
{
	DEFINE_UE_CLASS_HELPERS(UGoToTimeObject, "GoToTimeObject")

	struct FMulticastInlineDelegate OnGotoTimeComplete; // 0x28(0x10)
	struct UObject* WCO; // 0x38(0x8)
	uint8_t Pad_0x40[0x18]; // 0x40(0x18)
};

// Object: Class MFReplaySystem.MFReplaySystemBPLibrary
// Size: 0x28 (Inherited: 0x28)
struct UMFReplaySystemBPLibrary : UBlueprintFunctionLibrary
{
	DEFINE_UE_CLASS_HELPERS(UMFReplaySystemBPLibrary, "MFReplaySystemBPLibrary")

	// Object: Function MFReplaySystem.MFReplaySystemBPLibrary.StopSpectating
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x4f74480
	// Params: [ Num(2) Size(0x18) ]
	static void StopSpectating(struct UObject* WorldContextObject, struct FBlendSettings BlendSettings);

	// Object: Function MFReplaySystem.MFReplaySystemBPLibrary.StopRecordingReplay
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x4f758e4
	// Params: [ Num(1) Size(0x8) ]
	static void StopRecordingReplay(struct UObject* WorldContextObject);

	// Object: Function MFReplaySystem.MFReplaySystemBPLibrary.SpectateActor
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x4f7456c
	// Params: [ Num(3) Size(0x20) ]
	static void SpectateActor(struct UObject* WorldContextObject, struct AActor* Actor, struct FBlendSettings BlendSettings);

	// Object: Function MFReplaySystem.MFReplaySystemBPLibrary.SetReplaySavePath
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x4f75b8c
	// Params: [ Num(2) Size(0x18) ]
	static void SetReplaySavePath(struct UObject* WorldContextObject, struct FString Path);

	// Object: Function MFReplaySystem.MFReplaySystemBPLibrary.SetPlaybackSpeed
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x4f74eb4
	// Params: [ Num(2) Size(0xC) ]
	static void SetPlaybackSpeed(struct UObject* WorldContextObject, float Speed);

	// Object: Function MFReplaySystem.MFReplaySystemBPLibrary.SetMaxRecordHz
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x4f74300
	// Params: [ Num(2) Size(0xC) ]
	static void SetMaxRecordHz(struct UObject* WorldContextObject, float Hz);

	// Object: Function MFReplaySystem.MFReplaySystemBPLibrary.ResumePlayback
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x4f74f8c
	// Params: [ Num(1) Size(0x8) ]
	static void ResumePlayback(struct UObject* WorldContextObject);

	// Object: Function MFReplaySystem.MFReplaySystemBPLibrary.RestartReplayPlayback
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x4f751ec
	// Params: [ Num(2) Size(0x10) ]
	static struct UGoToTimeObject* RestartReplayPlayback(struct UObject* WorldContextObject);

	// Object: Function MFReplaySystem.MFReplaySystemBPLibrary.RequestActiveReplayEvents
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x4f74770
	// Params: [ Num(4) Size(0x28) ]
	static struct URequestEventsObject* RequestActiveReplayEvents(struct UObject* WorldContextObject, struct FString Group, int32_t UserIndex);

	// Object: Function MFReplaySystem.MFReplaySystemBPLibrary.RenameReplayFriendly
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x4f75438
	// Params: [ Num(5) Size(0x38) ]
	static struct URenameReplayObject* RenameReplayFriendly(struct UObject* WorldContextObject, struct FString ReplayName, struct FString NewFriendlyReplayName, int32_t UserIndex);

	// Object: Function MFReplaySystem.MFReplaySystemBPLibrary.RenameReplay
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x4f755bc
	// Params: [ Num(5) Size(0x38) ]
	static struct URenameReplayObject* RenameReplay(struct UObject* WorldContextObject, struct FString ReplayName, struct FString NewReplayName, int32_t UserIndex);

	// Object: Function MFReplaySystem.MFReplaySystemBPLibrary.RecordReplay
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x4f7597c
	// Params: [ Num(3) Size(0x28) ]
	static void RecordReplay(struct UObject* WorldContextObject, struct FString ReplayName, struct FString ReplayFriendlyName);

	// Object: Function MFReplaySystem.MFReplaySystemBPLibrary.PlayRecordedReplay
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x4f75294
	// Params: [ Num(3) Size(0x19) ]
	static bool PlayRecordedReplay(struct UObject* WorldContextObject, struct FString ReplayName);

	// Object: Function MFReplaySystem.MFReplaySystemBPLibrary.PausePlayback
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x4f75024
	// Params: [ Num(1) Size(0x8) ]
	static void PausePlayback(struct UObject* WorldContextObject);

	// Object: Function MFReplaySystem.MFReplaySystemBPLibrary.MsToSeconds
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x4f74694
	// Params: [ Num(2) Size(0x8) ]
	static float MsToSeconds(int32_t MS);

	// Object: Function MFReplaySystem.MFReplaySystemBPLibrary.MFReplaySystemSampleFunction
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x4f75c70
	// Params: [ Num(2) Size(0x8) ]
	static float MFReplaySystemSampleFunction(float Param);

	// Object: Function MFReplaySystem.MFReplaySystemBPLibrary.IsReplayPlaybackPaused
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x4f74b64
	// Params: [ Num(2) Size(0x9) ]
	static bool IsReplayPlaybackPaused(struct UObject* WorldContextObject);

	// Object: Function MFReplaySystem.MFReplaySystemBPLibrary.IsRecordingReplay
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x4f75838
	// Params: [ Num(2) Size(0x9) ]
	static bool IsRecordingReplay(struct UObject* WorldContextObject);

	// Object: Function MFReplaySystem.MFReplaySystemBPLibrary.IsPlayingReplay
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x4f74c10
	// Params: [ Num(2) Size(0x9) ]
	static bool IsPlayingReplay(struct UObject* WorldContextObject);

	// Object: Function MFReplaySystem.MFReplaySystemBPLibrary.GoToSpecificTime
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x4f750bc
	// Params: [ Num(4) Size(0x18) ]
	static struct UGoToTimeObject* GoToSpecificTime(struct UObject* WorldContextObject, float TimeToGoTo, bool bRetainCurrentPauseState);

	// Object: Function MFReplaySystem.MFReplaySystemBPLibrary.GetSavedReplays
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x4f75390
	// Params: [ Num(2) Size(0x10) ]
	static struct UGetSavedReplaysObject* GetSavedReplays(struct UObject* WorldContextObject);

	// Object: Function MFReplaySystem.MFReplaySystemBPLibrary.GetReplaySavePath
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x4f75aac
	// Params: [ Num(2) Size(0x18) ]
	static struct FString GetReplaySavePath(struct UObject* WorldContextObject);

	// Object: Function MFReplaySystem.MFReplaySystemBPLibrary.GetReplayLength
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x4f74cbc
	// Params: [ Num(2) Size(0xC) ]
	static float GetReplayLength(struct UObject* WorldContextObject);

	// Object: Function MFReplaySystem.MFReplaySystemBPLibrary.GetPlaybackSpeed
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x4f74e0c
	// Params: [ Num(2) Size(0xC) ]
	static float GetPlaybackSpeed(struct UObject* WorldContextObject);

	// Object: Function MFReplaySystem.MFReplaySystemBPLibrary.GetMaxRecordHz
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x4f742cc
	// Params: [ Num(1) Size(0x4) ]
	static float GetMaxRecordHz();

	// Object: Function MFReplaySystem.MFReplaySystemBPLibrary.GetDemoDriver
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x4f743d8
	// Params: [ Num(2) Size(0x10) ]
	static struct UDemoNetDriver* GetDemoDriver(struct UObject* WorldContextObject);

	// Object: Function MFReplaySystem.MFReplaySystemBPLibrary.GetCurrentReplayTime
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x4f74d64
	// Params: [ Num(2) Size(0xC) ]
	static float GetCurrentReplayTime(struct UObject* WorldContextObject);

	// Object: Function MFReplaySystem.MFReplaySystemBPLibrary.GetActiveReplayName
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x4f74a84
	// Params: [ Num(2) Size(0x18) ]
	static struct FString GetActiveReplayName(struct UObject* WorldContextObject);

	// Object: Function MFReplaySystem.MFReplaySystemBPLibrary.DeleteReplay
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x4f75740
	// Params: [ Num(3) Size(0x20) ]
	static struct UDeleteReplayObject* DeleteReplay(struct UObject* WorldContextObject, struct FString ReplayName);

	// Object: Function MFReplaySystem.MFReplaySystemBPLibrary.CreateReplayDataObject
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x4f7473c
	// Params: [ Num(1) Size(0x8) ]
	static struct UReplayDataObject* CreateReplayDataObject();

	// Object: Function MFReplaySystem.MFReplaySystemBPLibrary.AddEventToActiveReplay
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x4f748fc
	// Params: [ Num(5) Size(0x31) ]
	static bool AddEventToActiveReplay(struct UObject* WorldContextObject, struct FString EventName, struct FString Group, struct UReplayDataObject* DataObject);
};

// Object: Class MFReplaySystem.MFReplayTypes
// Size: 0x28 (Inherited: 0x28)
struct UMFReplayTypes : UObject
{
	DEFINE_UE_CLASS_HELPERS(UMFReplayTypes, "MFReplayTypes")
};

// Object: Class MFReplaySystem.RenameReplayObject
// Size: 0x58 (Inherited: 0x28)
struct URenameReplayObject : UObject
{
	DEFINE_UE_CLASS_HELPERS(URenameReplayObject, "RenameReplayObject")

	struct FMulticastInlineDelegate OnRenameComplete; // 0x28(0x10)
	uint8_t Pad_0x38[0x20]; // 0x38(0x20)
};

// Object: Class MFReplaySystem.ReplayDataObject
// Size: 0x208 (Inherited: 0x28)
struct UReplayDataObject : UObject
{
	DEFINE_UE_CLASS_HELPERS(UReplayDataObject, "ReplayDataObject")

	uint8_t Pad_0x28[0x130]; // 0x28(0x130)
	struct TArray<struct FReplayBoolData> BoolData; // 0x158(0x10)
	struct TArray<struct FReplayByteData> byteData; // 0x168(0x10)
	struct TArray<struct FReplayIntData> IntData; // 0x178(0x10)
	struct TArray<struct FReplayInt64Data> int64Data; // 0x188(0x10)
	struct TArray<struct FReplayFloatData> FloatData; // 0x198(0x10)
	struct TArray<struct FReplayNameData> nameData; // 0x1A8(0x10)
	struct TArray<struct FReplayStringData> stringData; // 0x1B8(0x10)
	struct TArray<struct FReplayTextData> textData; // 0x1C8(0x10)
	struct TArray<struct FReplayVectorData> vectorData; // 0x1D8(0x10)
	struct TArray<struct FReplayRotatorData> rotatorData; // 0x1E8(0x10)
	struct TArray<struct FReplayTransformData> transformData; // 0x1F8(0x10)

	// Object: Function MFReplaySystem.ReplayDataObject.SaveReplayMetaDataToString
	// Flags: [Final|Native|Public]
	// Offset: 0x4f75eac
	// Params: [ Num(1) Size(0x10) ]
	struct FString SaveReplayMetaDataToString();

	// Object: Function MFReplaySystem.ReplayDataObject.RemoveVectorData
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x4f76de8
	// Params: [ Num(1) Size(0x10) ]
	void RemoveVectorData(struct FString Name);

	// Object: Function MFReplaySystem.ReplayDataObject.RemoveTransformData
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x4f76be0
	// Params: [ Num(1) Size(0x10) ]
	void RemoveTransformData(struct FString Name);

	// Object: Function MFReplaySystem.ReplayDataObject.RemoveTextData
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x4f76eec
	// Params: [ Num(1) Size(0x10) ]
	void RemoveTextData(struct FString Name);

	// Object: Function MFReplaySystem.ReplayDataObject.RemoveStringData
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x4f76ff0
	// Params: [ Num(1) Size(0x10) ]
	void RemoveStringData(struct FString Name);

	// Object: Function MFReplaySystem.ReplayDataObject.RemoveRotatorData
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x4f76ce4
	// Params: [ Num(1) Size(0x10) ]
	void RemoveRotatorData(struct FString Name);

	// Object: Function MFReplaySystem.ReplayDataObject.RemoveNameData
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x4f770f4
	// Params: [ Num(1) Size(0x10) ]
	void RemoveNameData(struct FString Name);

	// Object: Function MFReplaySystem.ReplayDataObject.RemoveIntegerData
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x4f77400
	// Params: [ Num(1) Size(0x10) ]
	void RemoveIntegerData(struct FString Name);

	// Object: Function MFReplaySystem.ReplayDataObject.RemoveInteger64Data
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x4f772fc
	// Params: [ Num(1) Size(0x10) ]
	void RemoveInteger64Data(struct FString Name);

	// Object: Function MFReplaySystem.ReplayDataObject.RemoveFloatData
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x4f771f8
	// Params: [ Num(1) Size(0x10) ]
	void RemoveFloatData(struct FString Name);

	// Object: Function MFReplaySystem.ReplayDataObject.RemoveByteData
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x4f77504
	// Params: [ Num(1) Size(0x10) ]
	void RemoveByteData(struct FString Name);

	// Object: Function MFReplaySystem.ReplayDataObject.RemoveBooleanData
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x4f77608
	// Params: [ Num(1) Size(0x10) ]
	void RemoveBooleanData(struct FString Name);

	// Object: Function MFReplaySystem.ReplayDataObject.LoadReplayMetaDataFromString
	// Flags: [Final|Native|Public]
	// Offset: 0x4f75d98
	// Params: [ Num(2) Size(0x11) ]
	bool LoadReplayMetaDataFromString(struct FString StringDataToParse);

	// Object: Function MFReplaySystem.ReplayDataObject.GetVectorData
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x4f76178
	// Params: [ Num(2) Size(0x1C) ]
	struct FVector GetVectorData(struct FString Name);

	// Object: Function MFReplaySystem.ReplayDataObject.GetTransformData
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x4f75f48
	// Params: [ Num(2) Size(0x40) ]
	struct FTransform GetTransformData(struct FString Name);

	// Object: Function MFReplaySystem.ReplayDataObject.GetTextData
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x4f7628c
	// Params: [ Num(2) Size(0x28) ]
	struct FText GetTextData(struct FString Name);

	// Object: Function MFReplaySystem.ReplayDataObject.GetStringData
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x4f76400
	// Params: [ Num(2) Size(0x20) ]
	struct FString GetStringData(struct FString Name);

	// Object: Function MFReplaySystem.ReplayDataObject.GetRotatorData
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x4f76064
	// Params: [ Num(2) Size(0x1C) ]
	struct FRotator GetRotatorData(struct FString Name);

	// Object: Function MFReplaySystem.ReplayDataObject.GetNameData
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x4f76548
	// Params: [ Num(2) Size(0x18) ]
	struct FName GetNameData(struct FString Name);

	// Object: Function MFReplaySystem.ReplayDataObject.GetIntegerData
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x4f76874
	// Params: [ Num(2) Size(0x14) ]
	int32_t GetIntegerData(struct FString Name);

	// Object: Function MFReplaySystem.ReplayDataObject.GetInteger64Data
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x4f76764
	// Params: [ Num(2) Size(0x18) ]
	int64_t GetInteger64Data(struct FString Name);

	// Object: Function MFReplaySystem.ReplayDataObject.GetFloatData
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x4f76658
	// Params: [ Num(2) Size(0x14) ]
	float GetFloatData(struct FString Name);

	// Object: Function MFReplaySystem.ReplayDataObject.GetByteData
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x4f76984
	// Params: [ Num(2) Size(0x20) ]
	struct TArray<uint8_t> GetByteData(struct FString Name);

	// Object: Function MFReplaySystem.ReplayDataObject.GetBooleanData
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x4f76acc
	// Params: [ Num(2) Size(0x11) ]
	bool GetBooleanData(struct FString Name);

	// Object: Function MFReplaySystem.ReplayDataObject.DoesVectorDataExist
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x4f788cc
	// Params: [ Num(2) Size(0x14) ]
	int32_t DoesVectorDataExist(struct FString Name);

	// Object: Function MFReplaySystem.ReplayDataObject.DoesTransformDataExist
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x4f786ac
	// Params: [ Num(2) Size(0x14) ]
	int32_t DoesTransformDataExist(struct FString Name);

	// Object: Function MFReplaySystem.ReplayDataObject.DoesTextDataExist
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x4f789dc
	// Params: [ Num(2) Size(0x14) ]
	int32_t DoesTextDataExist(struct FString Name);

	// Object: Function MFReplaySystem.ReplayDataObject.DoesStringDataExist
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x4f78aec
	// Params: [ Num(2) Size(0x14) ]
	int32_t DoesStringDataExist(struct FString Name);

	// Object: Function MFReplaySystem.ReplayDataObject.DoesRotatorDataExist
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x4f787bc
	// Params: [ Num(2) Size(0x14) ]
	int32_t DoesRotatorDataExist(struct FString Name);

	// Object: Function MFReplaySystem.ReplayDataObject.DoesNameDataExist
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x4f78bfc
	// Params: [ Num(2) Size(0x14) ]
	int32_t DoesNameDataExist(struct FString Name);

	// Object: Function MFReplaySystem.ReplayDataObject.DoesIntegerDataExist
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x4f78f2c
	// Params: [ Num(2) Size(0x14) ]
	int32_t DoesIntegerDataExist(struct FString Name);

	// Object: Function MFReplaySystem.ReplayDataObject.DoesInteger64DataExist
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x4f78e1c
	// Params: [ Num(2) Size(0x14) ]
	int32_t DoesInteger64DataExist(struct FString Name);

	// Object: Function MFReplaySystem.ReplayDataObject.DoesFloatDataExist
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x4f78d0c
	// Params: [ Num(2) Size(0x14) ]
	int32_t DoesFloatDataExist(struct FString Name);

	// Object: Function MFReplaySystem.ReplayDataObject.DoesByteDataExist
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x4f7903c
	// Params: [ Num(2) Size(0x14) ]
	int32_t DoesByteDataExist(struct FString Name);

	// Object: Function MFReplaySystem.ReplayDataObject.DoesBooleanDataExist
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x4f7914c
	// Params: [ Num(2) Size(0x14) ]
	int32_t DoesBooleanDataExist(struct FString Name);

	// Object: Function MFReplaySystem.ReplayDataObject.AddVectorData
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x4f779cc
	// Params: [ Num(2) Size(0x1C) ]
	void AddVectorData(struct FString Name, struct FVector Data);

	// Object: Function MFReplaySystem.ReplayDataObject.AddTransformData
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x4f7770c
	// Params: [ Num(2) Size(0x40) ]
	void AddTransformData(struct FString Name, struct FTransform Data);

	// Object: Function MFReplaySystem.ReplayDataObject.AddTextData
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x4f77b10
	// Params: [ Num(2) Size(0x28) ]
	void AddTextData(struct FString Name, struct FText Data);

	// Object: Function MFReplaySystem.ReplayDataObject.AddStringData
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x4f77d20
	// Params: [ Num(2) Size(0x20) ]
	void AddStringData(struct FString Name, struct FString Data);

	// Object: Function MFReplaySystem.ReplayDataObject.AddRotatorData
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x4f77888
	// Params: [ Num(2) Size(0x1C) ]
	void AddRotatorData(struct FString Name, struct FRotator Data);

	// Object: Function MFReplaySystem.ReplayDataObject.AddNameData
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x4f77eb8
	// Params: [ Num(2) Size(0x18) ]
	void AddNameData(struct FString Name, struct FName Data);

	// Object: Function MFReplaySystem.ReplayDataObject.AddIntegerData
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x4f78284
	// Params: [ Num(2) Size(0x14) ]
	void AddIntegerData(struct FString Name, int32_t Data);

	// Object: Function MFReplaySystem.ReplayDataObject.AddInteger64Data
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x4f78140
	// Params: [ Num(2) Size(0x18) ]
	void AddInteger64Data(struct FString Name, int64_t Data);

	// Object: Function MFReplaySystem.ReplayDataObject.AddFloatData
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x4f77ffc
	// Params: [ Num(2) Size(0x14) ]
	void AddFloatData(struct FString Name, float Data);

	// Object: Function MFReplaySystem.ReplayDataObject.AddByteData
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x4f783c8
	// Params: [ Num(2) Size(0x20) ]
	void AddByteData(struct FString Name, struct TArray<uint8_t> Data);

	// Object: Function MFReplaySystem.ReplayDataObject.AddBooleanData
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x4f78560
	// Params: [ Num(2) Size(0x11) ]
	void AddBooleanData(struct FString Name, bool Data);
};

// Object: Class MFReplaySystem.ReplayObject
// Size: 0x80 (Inherited: 0x28)
struct UReplayObject : UObject
{
	DEFINE_UE_CLASS_HELPERS(UReplayObject, "ReplayObject")

	struct UWorld* World; // 0x28(0x8)
	struct FReplayInfo ReplayInfo; // 0x30(0x30)
	struct FMulticastInlineDelegate OnRequestEventsComplete; // 0x60(0x10)
	uint8_t Pad_0x70[0x10]; // 0x70(0x10)

	// Object: Function MFReplaySystem.ReplayObject.RequestEvents
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x4f792ac
	// Params: [ Num(2) Size(0x14) ]
	void RequestEvents(struct FString Group, int32_t UserIndex);
};

// Object: Class MFReplaySystem.ReplayPlayerController
// Size: 0x670 (Inherited: 0x670)
struct AReplayPlayerController : APlayerController
{
	DEFINE_UE_CLASS_HELPERS(AReplayPlayerController, "ReplayPlayerController")

	// Object: Function MFReplaySystem.ReplayPlayerController.OnTogglePause
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x5d8cbc8
	// Params: [ Num(1) Size(0x1) ]
	void OnTogglePause(bool PauseState);

	// Object: Function MFReplaySystem.ReplayPlayerController.OnStopSpectateActor
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x5d8cbc8
	// Params: [ Num(0) Size(0x0) ]
	void OnStopSpectateActor();

	// Object: Function MFReplaySystem.ReplayPlayerController.OnSpectateActor
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x5d8cbc8
	// Params: [ Num(1) Size(0x8) ]
	void OnSpectateActor(struct AActor* Actor);

	// Object: Function MFReplaySystem.ReplayPlayerController.OnGoToTime
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x5d8cbc8
	// Params: [ Num(1) Size(0x4) ]
	void OnGoToTime(float CurrentTime);
};

// Object: Class MFReplaySystem.RequestEventsObject
// Size: 0x48 (Inherited: 0x28)
struct URequestEventsObject : UObject
{
	DEFINE_UE_CLASS_HELPERS(URequestEventsObject, "RequestEventsObject")

	struct FMulticastInlineDelegate OnRequestEventsComplete; // 0x28(0x10)
	uint8_t Pad_0x38[0x10]; // 0x38(0x10)
};

} // namespace SDK
