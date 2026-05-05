#pragma once

#include "../CoreUObject_classes.hpp"
#include "Engine.hpp"
#include "GPGameHud.hpp"
#include "GPGameplay.hpp"
#include "GPGlobalDefines.hpp"
#include "UMG.hpp"

namespace SDK
{

// Package: DFMReplaySystem
// Enums: 4
// Structs: 3
// Classes: 19

struct AActor;
struct ADFMCharacter;
struct ADFMPlayerController;
struct AGPCharacterBase;
struct AGPPlayerController;
struct AHUD;
enum class ECharacterLiveStatus : uint8_t;
enum class EGameFlowStageType : uint8_t;
enum class EMatchOverReason : uint8_t;
enum class ENetworkReplayStreamerType : uint8_t;
struct FReplayCheckpointChunk;
struct FReplayDataChunk;
struct FReplayHeaderChunk;
struct UButton;
struct UCanvasPanel;
struct UDFCanvasPanel;
struct UDFCommonButton;
struct UDFImage;
struct UDFReplayBase;
struct UDFScrollGridBox;
struct UDFTextBlock;
struct UEditableTextBox;
struct ULuaUIBaseView;
struct UProgressBar;
struct UScrollBox;
struct UTextBlock;
struct UUserWidget;
struct UWidget;
struct UWidgetAnimation;
struct FKillCamContext;
struct FReplayStateBindings;
struct FKillCamExitCountDown;
struct UDFMNetworkPlayerReplayComponent;
struct UDFMNetworkReplaySubsystem;
struct UDFMReplayEvent;
struct UDFMReplayInstance;
struct ADFMReplayPlayerController;
struct UDFMReplaySystemBlueprintHelper;
struct UKillCamHUDView;
struct UProtocolFileDebugItem;
struct UReplayClienSDK;
struct UReplayControllerView;
struct UReplayDebugFileItemView;
struct UReplayDebugMainView;
struct UReplayKillCamHudController;
struct UReplayKillCamHUDView;
struct UReplayListDisplayView;
struct UReplayLoadingView;
struct UReplayOBView;
struct UReplayPlaybackHudController;
struct UReplayPlaybackHudView;

// Object: Enum DFMReplaySystem.EReplayRequestType
enum class EReplayRequestType : uint8_t
{
	None = 0,
	UseRequestTime = 1,
	UseSelfLatestKnockDownTime = 2,
	EReplayRequestType_MAX = 3
};

// Object: Enum DFMReplaySystem.EReplayDeathReason
enum class EReplayDeathReason : uint8_t
{
	None = 0,
	Gun = 1,
	Melee = 2,
	Skill = 3,
	Hand = 4,
	Buff = 5,
	Drop = 6,
	Accident = 7,
	Others = 8,
	EReplayDeathReason_MAX = 9
};

// Object: Enum DFMReplaySystem.EReplayType
enum class EReplayType : uint8_t
{
	EReplayType_None = 0,
	EReplayType_Killcam = 1,
	EReplayType_OB = 2,
	EReplayType_MAX = 3
};

// Object: Enum DFMReplaySystem.EDeathReplayState
enum class EDeathReplayState : uint8_t
{
	Idle = 0,
	Replaying = 1,
	ReplayingNoKiller = 2,
	ReplayEnd = 3,
	Over = 4,
	EDeathReplayState_MAX = 5
};

// Object: ScriptStruct DFMReplaySystem.KillCamContext
// Size: 0x210 (Inherited: 0x0)
struct FKillCamContext
{
	uint8_t Pad_0x0[0x210]; // 0x0(0x210)
};

// Object: ScriptStruct DFMReplaySystem.ReplayStateBindings
// Size: 0x3 (Inherited: 0x0)
struct FReplayStateBindings
{
	uint8_t bShouldBindPlayback : 1; // 0x0(0x1), Mask(0x1)
	uint8_t BitPad_0x0_1 : 7; // 0x0(0x1)
	uint8_t bShouldBindExitReplay : 1; // 0x1(0x1), Mask(0x1)
	uint8_t BitPad_0x1_1 : 7; // 0x1(0x1)
	uint8_t bShouldBindReport : 1; // 0x2(0x1), Mask(0x1)
	uint8_t BitPad_0x2_1 : 7; // 0x2(0x1)
};

// Object: ScriptStruct DFMReplaySystem.KillCamExitCountDown
// Size: 0x20 (Inherited: 0x0)
struct FKillCamExitCountDown
{
	uint8_t Pad_0x0[0x20]; // 0x0(0x20)
};

// Object: Class DFMReplaySystem.DFMNetworkPlayerReplayComponent
// Size: 0x1E0 (Inherited: 0xF8)
struct UDFMNetworkPlayerReplayComponent : UActorComponent
{
	DEFINE_UE_CLASS_HELPERS(UDFMNetworkPlayerReplayComponent, "DFMNetworkPlayerReplayComponent")

	struct ADFMPlayerController* OwnerPlayer; // 0xF8(0x8)
	struct AGPCharacterBase* PlayerPawn; // 0x100(0x8)
	struct UDFMReplayInstance* LastKillcamRecordingReplay; // 0x108(0x8)
	struct UDFMReplayInstance* CurrentKillcamRecordingReplay; // 0x110(0x8)
	uint8_t bPlayerEnableKillCam : 1; // 0x118(0x1), Mask(0x1)
	uint8_t BitPad_0x118_1 : 7; // 0x118(0x1)
	uint8_t Pad_0x119[0x7]; // 0x119(0x7)
	uint64_t LastRepRequestTimeTicks; // 0x120(0x8)
	uint8_t Pad_0x128[0xB8]; // 0x128(0xB8)

	// Object: Function DFMReplaySystem.DFMNetworkPlayerReplayComponent.ServerStartReplayRecording
	// Flags: [Net|NetReliableNative|Event|Public|NetServer]
	// Offset: 0x13be5c0c
	// Params: [ Num(0) Size(0x0) ]
	void ServerStartReplayRecording();

	// Object: Function DFMReplaySystem.DFMNetworkPlayerReplayComponent.ServerSaveReplay
	// Flags: [Net|NetReliableNative|Event|Public|NetServer]
	// Offset: 0x13be5a68
	// Params: [ Num(5) Size(0x19) ]
	void ServerSaveReplay(uint64_t PlayerUin, int64_t RequestTokenTicks, EReplayRequestType RequestType, float RequestReplayTime, uint8_t bForceSendReplay);

	// Object: Function DFMReplaySystem.DFMNetworkPlayerReplayComponent.OnServerPlayerGameEnd
	// Flags: [Final|Native|Protected]
	// Offset: 0x13be5988
	// Params: [ Num(2) Size(0x10) ]
	void OnServerPlayerGameEnd(EMatchOverReason MatchOverReason, int64_t InPlayerUin);

	// Object: Function DFMReplaySystem.DFMNetworkPlayerReplayComponent.OnSeamlessTravelToGameWorldEnd
	// Flags: [Final|Native|Protected]
	// Offset: 0x13be58dc
	// Params: [ Num(1) Size(0x1) ]
	void OnSeamlessTravelToGameWorldEnd(uint8_t bReconnect);

	// Object: Function DFMReplaySystem.DFMNetworkPlayerReplayComponent.OnRequestPlayReplay
	// Flags: [Final|Native|Protected]
	// Offset: 0x13be5838
	// Params: [ Num(1) Size(0x8) ]
	void OnRequestPlayReplay(struct UDFReplayBase* ReplayIns);

	// Object: Function DFMReplaySystem.DFMNetworkPlayerReplayComponent.OnReplayRealStart
	// Flags: [Final|Native|Protected]
	// Offset: 0x13be5794
	// Params: [ Num(1) Size(0x4) ]
	void OnReplayRealStart(float TimeInMS);

	// Object: Function DFMReplaySystem.DFMNetworkPlayerReplayComponent.OnRepDeadDamageInfo
	// Flags: [Final|Native|Protected]
	// Offset: 0x13be5780
	// Params: [ Num(0) Size(0x0) ]
	void OnRepDeadDamageInfo();

	// Object: Function DFMReplaySystem.DFMNetworkPlayerReplayComponent.OnRep_RequestTimeTicks
	// Flags: [Final|Native|Protected]
	// Offset: 0x13be576c
	// Params: [ Num(0) Size(0x0) ]
	void OnRep_RequestTimeTicks();

	// Object: Function DFMReplaySystem.DFMNetworkPlayerReplayComponent.OnRep_bPlayerEnableKillCam
	// Flags: [Final|Native|Protected]
	// Offset: 0xed519b0
	// Params: [ Num(0) Size(0x0) ]
	void OnRep_bPlayerEnableKillCam();

	// Object: Function DFMReplaySystem.DFMNetworkPlayerReplayComponent.OnRep_bEnablePlayKillCamera
	// Flags: [Final|Native|Protected]
	// Offset: 0x13be5758
	// Params: [ Num(0) Size(0x0) ]
	void OnRep_bEnablePlayKillCamera();

	// Object: Function DFMReplaySystem.DFMNetworkPlayerReplayComponent.OnPlayReplayEnd
	// Flags: [Final|Native|Protected]
	// Offset: 0x13be5744
	// Params: [ Num(0) Size(0x0) ]
	void OnPlayReplayEnd();

	// Object: Function DFMReplaySystem.DFMNetworkPlayerReplayComponent.ClientReceiveReplayHeaderChunk
	// Flags: [Net|NetReliableNative|Event|Protected|NetClient]
	// Offset: 0x13be5690
	// Params: [ Num(1) Size(0x10) ]
	void ClientReceiveReplayHeaderChunk(struct TArray<struct FReplayHeaderChunk> Chunks);

	// Object: Function DFMReplaySystem.DFMNetworkPlayerReplayComponent.ClientReceiveReplayDataChunk
	// Flags: [Net|NetReliableNative|Event|Protected|NetClient]
	// Offset: 0x13be55dc
	// Params: [ Num(1) Size(0x10) ]
	void ClientReceiveReplayDataChunk(struct TArray<struct FReplayDataChunk> Chunks);

	// Object: Function DFMReplaySystem.DFMNetworkPlayerReplayComponent.ClientReceiveReplayCheckpointChunk
	// Flags: [Net|NetReliableNative|Event|Protected|NetClient]
	// Offset: 0x13be5528
	// Params: [ Num(1) Size(0x10) ]
	void ClientReceiveReplayCheckpointChunk(struct TArray<struct FReplayCheckpointChunk> Chunks);

	// Object: Function DFMReplaySystem.DFMNetworkPlayerReplayComponent.CharacterImpendingDeath
	// Flags: [Final|Native|Public]
	// Offset: 0xf6b54c0
	// Params: [ Num(1) Size(0x8) ]
	void CharacterImpendingDeath(struct AGPCharacterBase* GPChar);

	// Object: Function DFMReplaySystem.DFMNetworkPlayerReplayComponent.CharacterDied
	// Flags: [Final|Native|Public]
	// Offset: 0xf6b53f4
	// Params: [ Num(1) Size(0x8) ]
	void CharacterDied(struct AGPCharacterBase* GPChar);
};

// Object: Class DFMReplaySystem.DFMNetworkReplaySubsystem
// Size: 0x368 (Inherited: 0x30)
struct UDFMNetworkReplaySubsystem : UGameInstanceSubsystem
{
	DEFINE_UE_CLASS_HELPERS(UDFMNetworkReplaySubsystem, "DFMNetworkReplaySubsystem")

	struct FMulticastInlineDelegate OnLoadAllReplayFilesComplete; // 0x30(0x10)
	struct FMulticastInlineDelegate OnParseProtocolFileComplete; // 0x40(0x10)
	struct UObject* CachedWorldContextObject; // 0x50(0x8)
	uint8_t Pad_0x58[0xA0]; // 0x58(0xA0)
	struct TArray<struct UDFMReplayInstance*> StoredReplay; // 0xF8(0x10)
	struct UDFMReplayInstance* CurrentRecordingReplay; // 0x108(0x8)
	uint8_t Pad_0x110[0x258]; // 0x110(0x258)

	// Object: Function DFMReplaySystem.DFMNetworkReplaySubsystem.PlayLastKillCamReplay
	// Flags: [Final|Native|Public]
	// Offset: 0x13be6058
	// Params: [ Num(1) Size(0x1) ]
	uint8_t PlayLastKillCamReplay();

	// Object: Function DFMReplaySystem.DFMNetworkReplaySubsystem.OnGameFlowLeave
	// Flags: [Final|Native|Public]
	// Offset: 0xf65e6c8
	// Params: [ Num(1) Size(0x1) ]
	void OnGameFlowLeave(EGameFlowStageType GameFlowStage);

	// Object: Function DFMReplaySystem.DFMNetworkReplaySubsystem.OnGameFlowEnter
	// Flags: [Final|Native|Public]
	// Offset: 0xf98cf9c
	// Params: [ Num(1) Size(0x1) ]
	void OnGameFlowEnter(EGameFlowStageType GameFlowStage);

	// Object: Function DFMReplaySystem.DFMNetworkReplaySubsystem.OnCharacterLiveStatusChanged
	// Flags: [Final|Native|Public]
	// Offset: 0x13be5f3c
	// Params: [ Num(3) Size(0xA) ]
	void OnCharacterLiveStatusChanged(struct AGPCharacterBase* CharacterBase, ECharacterLiveStatus OldStatus, ECharacterLiveStatus NewStatus);

	// Object: Function DFMReplaySystem.DFMNetworkReplaySubsystem.IsLastKillCamReplayReady
	// Flags: [Final|Native|Public]
	// Offset: 0x13be5f04
	// Params: [ Num(1) Size(0x1) ]
	uint8_t IsLastKillCamReplayReady();

	// Object: Function DFMReplaySystem.DFMNetworkReplaySubsystem.IsAllowPlayKillCamReplay
	// Flags: [Final|Native|Public]
	// Offset: 0x13be5ecc
	// Params: [ Num(1) Size(0x1) ]
	uint8_t IsAllowPlayKillCamReplay();

	// Object: Function DFMReplaySystem.DFMNetworkReplaySubsystem.GetReplaySubsystem
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x13be5e28
	// Params: [ Num(2) Size(0x10) ]
	static struct UDFMNetworkReplaySubsystem* GetReplaySubsystem(struct UObject* WorldContextObject);

	// Object: Function DFMReplaySystem.DFMNetworkReplaySubsystem.GetParseProtocolProgress
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x13be5df4
	// Params: [ Num(1) Size(0x4) ]
	float GetParseProtocolProgress();

	// Object: Function DFMReplaySystem.DFMNetworkReplaySubsystem.GetLastDeathUTCTimeStamp
	// Flags: [Final|Native|Public]
	// Offset: 0x13be5dc0
	// Params: [ Num(1) Size(0x8) ]
	uint64_t GetLastDeathUTCTimeStamp();

	// Object: Function DFMReplaySystem.DFMNetworkReplaySubsystem.GetDownloadKillCamProgress
	// Flags: [Final|Native|Public]
	// Offset: 0x13be5d8c
	// Params: [ Num(1) Size(0x4) ]
	float GetDownloadKillCamProgress();
};

// Object: Class DFMReplaySystem.DFMReplayEvent
// Size: 0x28 (Inherited: 0x28)
struct UDFMReplayEvent : UObject
{
	DEFINE_UE_CLASS_HELPERS(UDFMReplayEvent, "DFMReplayEvent")
};

// Object: Class DFMReplaySystem.DFMReplayInstance
// Size: 0xF0 (Inherited: 0xD8)
struct UDFMReplayInstance : UDFReplayBase
{
	DEFINE_UE_CLASS_HELPERS(UDFMReplayInstance, "DFMReplayInstance")

	struct FMulticastInlineDelegate OnReplaySaveComplete; // 0xD8(0x10)
	struct AGPPlayerController* OwnerPlayerController; // 0xE8(0x8)

	// Object: Function DFMReplaySystem.DFMReplayInstance.StopReplayRecording
	// Flags: [Native|Public]
	// Offset: 0x13be6460
	// Params: [ Num(1) Size(0x1) ]
	uint8_t StopReplayRecording();

	// Object: Function DFMReplaySystem.DFMReplayInstance.StopReplay
	// Flags: [Native|Public]
	// Offset: 0x13be6420
	// Params: [ Num(1) Size(0x1) ]
	uint8_t StopReplay();

	// Object: Function DFMReplaySystem.DFMReplayInstance.StartReplayRecording
	// Flags: [Native|Public]
	// Offset: 0x13be63e0
	// Params: [ Num(1) Size(0x1) ]
	uint8_t StartReplayRecording();

	// Object: Function DFMReplaySystem.DFMReplayInstance.SetPlayRate
	// Flags: [Native|Public]
	// Offset: 0x13be6328
	// Params: [ Num(2) Size(0x5) ]
	uint8_t SetPlayRate(float PlayRate);

	// Object: Function DFMReplaySystem.DFMReplayInstance.ResetReplay
	// Flags: [Native|Public]
	// Offset: 0x13be62e8
	// Params: [ Num(1) Size(0x1) ]
	uint8_t ResetReplay();

	// Object: Function DFMReplaySystem.DFMReplayInstance.PauseReplay
	// Flags: [Native|Public]
	// Offset: 0x13be6228
	// Params: [ Num(2) Size(0x2) ]
	uint8_t PauseReplay(uint8_t isPause);

	// Object: Function DFMReplaySystem.DFMReplayInstance.OnReplayEnd
	// Flags: [Final|Native|Protected]
	// Offset: 0x13be6214
	// Params: [ Num(0) Size(0x0) ]
	void OnReplayEnd();

	// Object: Function DFMReplaySystem.DFMReplayInstance.GotoReplayAtTime
	// Flags: [Native|Public]
	// Offset: 0x13be615c
	// Params: [ Num(2) Size(0x5) ]
	uint8_t GotoReplayAtTime(float TimeInMS);

	// Object: Function DFMReplaySystem.DFMReplayInstance.GetTotalRecordTime
	// Flags: [Native|Public]
	// Offset: 0x13be6120
	// Params: [ Num(1) Size(0x4) ]
	float GetTotalRecordTime();

	// Object: Function DFMReplaySystem.DFMReplayInstance.GetCurrentRecordTime
	// Flags: [Native|Public]
	// Offset: 0x13be60e4
	// Params: [ Num(1) Size(0x4) ]
	float GetCurrentRecordTime();

	// Object: Function DFMReplaySystem.DFMReplayInstance.Destory
	// Flags: [Native|Public]
	// Offset: 0x13be60c8
	// Params: [ Num(0) Size(0x0) ]
	void Destory();
};

// Object: Class DFMReplaySystem.DFMReplayPlayerController
// Size: 0xB60 (Inherited: 0xB08)
struct ADFMReplayPlayerController : AGPPlayerController
{
	DEFINE_UE_CLASS_HELPERS(ADFMReplayPlayerController, "DFMReplayPlayerController")

	struct FMulticastInlineDelegate OnPlaybackTimeChange; // 0xB08(0x10)
	struct FMulticastInlineDelegate OnPlaybackEndChange; // 0xB18(0x10)
	struct AHUD* ReplayGMHUDClass; // 0xB28(0x8)
	struct AHUD* ReplayOBHUDClass; // 0xB30(0x8)
	struct AHUD* ReplayKillcamHUDClass; // 0xB38(0x8)
	struct UDFMReplayInstance* CurrentReplayInstance; // 0xB40(0x8)
	uint8_t Pad_0xB48[0x18]; // 0xB48(0x18)

	// Object: Function DFMReplaySystem.DFMReplayPlayerController.OnUnregisterActor
	// Flags: [Native|Protected]
	// Offset: 0x13be68e8
	// Params: [ Num(1) Size(0x8) ]
	void OnUnregisterActor(struct AActor* ChangedActor);

	// Object: Function DFMReplaySystem.DFMReplayPlayerController.OnSeamlessToReplayEnd
	// Flags: [Native|Protected]
	// Offset: 0x13be6834
	// Params: [ Num(1) Size(0x1) ]
	void OnSeamlessToReplayEnd(uint8_t bReconnect);

	// Object: Function DFMReplaySystem.DFMReplayPlayerController.OnRegisterActor
	// Flags: [Native|Protected]
	// Offset: 0x13be6788
	// Params: [ Num(1) Size(0x8) ]
	void OnRegisterActor(struct AActor* ChangedActor);

	// Object: Function DFMReplaySystem.DFMReplayPlayerController.GMSetPlayRate
	// Flags: [Final|Exec|Native|Public|BlueprintCallable]
	// Offset: 0x13be66e4
	// Params: [ Num(1) Size(0x4) ]
	void GMSetPlayRate(float PlayRate);

	// Object: Function DFMReplaySystem.DFMReplayPlayerController.GMResetReplay
	// Flags: [Final|Exec|Native|Public|BlueprintCallable]
	// Offset: 0x13be66d0
	// Params: [ Num(0) Size(0x0) ]
	void GMResetReplay();

	// Object: Function DFMReplaySystem.DFMReplayPlayerController.GMPauseReplay
	// Flags: [Final|Exec|Native|Public|BlueprintCallable]
	// Offset: 0x13be6624
	// Params: [ Num(1) Size(0x1) ]
	void GMPauseReplay(uint8_t isPause);

	// Object: Function DFMReplaySystem.DFMReplayPlayerController.GMGotoReplayPercent
	// Flags: [Final|Exec|Native|Public|BlueprintCallable]
	// Offset: 0x13be6580
	// Params: [ Num(1) Size(0x4) ]
	void GMGotoReplayPercent(float Percent);

	// Object: Function DFMReplaySystem.DFMReplayPlayerController.BeginRecordReplay
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(0) Size(0x0) ]
	void BeginRecordReplay();

	// Object: Function DFMReplaySystem.DFMReplayPlayerController.BeginPlayReplay
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(0) Size(0x0) ]
	void BeginPlayReplay();
};

// Object: Class DFMReplaySystem.DFMReplaySystemBlueprintHelper
// Size: 0x28 (Inherited: 0x28)
struct UDFMReplaySystemBlueprintHelper : UBlueprintFunctionLibrary
{
	DEFINE_UE_CLASS_HELPERS(UDFMReplaySystemBlueprintHelper, "DFMReplaySystemBlueprintHelper")

	// Object: Function DFMReplaySystem.DFMReplaySystemBlueprintHelper.StartParseProtocolFile
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x13be8028
	// Params: [ Num(2) Size(0x18) ]
	static void StartParseProtocolFile(struct UObject* WorldContextObject, struct FString FilePath);

	// Object: Function DFMReplaySystem.DFMReplaySystemBlueprintHelper.SetReplayRate
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x13be7f0c
	// Params: [ Num(4) Size(0x15) ]
	static uint8_t SetReplayRate(struct UDFMReplayInstance* ReplayInstance, struct UObject* WorldContextObject, float Rate);

	// Object: Function DFMReplaySystem.DFMReplaySystemBlueprintHelper.RestartReplay
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x13be7e2c
	// Params: [ Num(3) Size(0x11) ]
	static uint8_t RestartReplay(struct UDFMReplayInstance* ReplayInstance, struct UObject* WorldContextObject);

	// Object: Function DFMReplaySystem.DFMReplaySystemBlueprintHelper.RequestMyNearestKillcam
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x13be7d84
	// Params: [ Num(2) Size(0x9) ]
	static uint8_t RequestMyNearestKillcam(struct UObject* WorldContextObject);

	// Object: Function DFMReplaySystem.DFMReplaySystemBlueprintHelper.RepeatKillcam
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x13be7cdc
	// Params: [ Num(2) Size(0x9) ]
	static uint8_t RepeatKillcam(struct UObject* WorldContextObject);

	// Object: Function DFMReplaySystem.DFMReplaySystemBlueprintHelper.PlayReplay
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x13be7bfc
	// Params: [ Num(3) Size(0x11) ]
	static uint8_t PlayReplay(struct UDFMReplayInstance* ReplayInstance, struct UObject* WorldContextObject);

	// Object: Function DFMReplaySystem.DFMReplaySystemBlueprintHelper.PlayerStopReplayRecording
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x13be7b1c
	// Params: [ Num(3) Size(0x11) ]
	static uint8_t PlayerStopReplayRecording(struct UObject* WorldContextObject, struct UDFMReplayInstance* ReplayInstance);

	// Object: Function DFMReplaySystem.DFMReplaySystemBlueprintHelper.PlayerStartReplayRecording
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x13be7920
	// Params: [ Num(5) Size(0x38) ]
	static struct UDFMReplayInstance* PlayerStartReplayRecording(ENetworkReplayStreamerType StreamerType, struct FString ReplayName, struct FString FriendlyName, struct UObject* WorldContextObject);

	// Object: Function DFMReplaySystem.DFMReplaySystemBlueprintHelper.PauseReplay
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x13be77fc
	// Params: [ Num(4) Size(0x12) ]
	static uint8_t PauseReplay(struct UDFMReplayInstance* ReplayInstance, struct UObject* WorldContextObject, uint8_t isPause);

	// Object: Function DFMReplaySystem.DFMReplaySystemBlueprintHelper.IsInReplay
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x13be7754
	// Params: [ Num(2) Size(0x9) ]
	static uint8_t IsInReplay(struct UObject* WorldContextObject);

	// Object: Function DFMReplaySystem.DFMReplaySystemBlueprintHelper.HasReplayData
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x13be76ac
	// Params: [ Num(2) Size(0x9) ]
	static uint8_t HasReplayData(struct UObject* WorldContextObject);

	// Object: Function DFMReplaySystem.DFMReplaySystemBlueprintHelper.GotoReplayAtTime
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x13be7590
	// Params: [ Num(4) Size(0x15) ]
	static uint8_t GotoReplayAtTime(struct UDFMReplayInstance* ReplayInstance, struct UObject* WorldContextObject, float Time);

	// Object: Function DFMReplaySystem.DFMReplaySystemBlueprintHelper.GetReplayWithName
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x13be745c
	// Params: [ Num(3) Size(0x20) ]
	static struct UDFMReplayInstance* GetReplayWithName(struct FString Name, struct UObject* WorldContextObject);

	// Object: Function DFMReplaySystem.DFMReplaySystemBlueprintHelper.GetCurrentRuntimeReplay
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x13be73b8
	// Params: [ Num(2) Size(0x10) ]
	static struct UDFMReplayInstance* GetCurrentRuntimeReplay(struct UObject* WorldContextObject);

	// Object: Function DFMReplaySystem.DFMReplaySystemBlueprintHelper.GetAllReplaysFromServer
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x13be7310
	// Params: [ Num(2) Size(0x9) ]
	static uint8_t GetAllReplaysFromServer(struct UObject* WorldContextObject);

	// Object: Function DFMReplaySystem.DFMReplaySystemBlueprintHelper.GetAllReplaysFromFile
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x13be71b0
	// Params: [ Num(4) Size(0x20) ]
	static struct TArray<struct UDFMReplayInstance*> GetAllReplaysFromFile(struct UObject* WorldContextObject, uint8_t ForceRefresh, uint8_t onlyGetData);

	// Object: Function DFMReplaySystem.DFMReplaySystemBlueprintHelper.GetAllProtocolReplaysFromFile
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x13be7044
	// Params: [ Num(3) Size(0x28) ]
	static struct TArray<struct UDFMReplayInstance*> GetAllProtocolReplaysFromFile(struct UObject* WorldContextObject, struct FString ProtocolReplayFolderName);

	// Object: Function DFMReplaySystem.DFMReplaySystemBlueprintHelper.GetAllProtocolFiles
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x13be6f8c
	// Params: [ Num(2) Size(0x18) ]
	static struct TArray<struct FString> GetAllProtocolFiles(struct UObject* WorldContextObject);

	// Object: Function DFMReplaySystem.DFMReplaySystemBlueprintHelper.GenerateTimeString
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x13be6ef4
	// Params: [ Num(1) Size(0x10) ]
	static struct FString GenerateTimeString();

	// Object: Function DFMReplaySystem.DFMReplaySystemBlueprintHelper.GenerateReplayNameAndFilePath
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	// Offset: 0x13be6da4
	// Params: [ Num(4) Size(0x29) ]
	static uint8_t GenerateReplayNameAndFilePath(struct UObject* WorldContextObject, struct FString& ReplayName, struct FString& FilePath);

	// Object: Function DFMReplaySystem.DFMReplaySystemBlueprintHelper.DirectStopReplayRecording
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x13be6cc4
	// Params: [ Num(3) Size(0x11) ]
	static uint8_t DirectStopReplayRecording(struct UObject* WorldContextObject, struct UDFMReplayInstance* ReplayInstance);

	// Object: Function DFMReplaySystem.DFMReplaySystemBlueprintHelper.DirectStartReplayRecording
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x13be69b4
	// Params: [ Num(8) Size(0x58) ]
	static struct UDFMReplayInstance* DirectStartReplayRecording(ENetworkReplayStreamerType StreamerType, struct FString ReplayName, struct FString FriendlyName, struct UObject* WorldContextObject, uint8_t usingCustomPath, struct FString FilePath, float RecordMaxTime);
};

// Object: Class DFMReplaySystem.KillCamHUDView
// Size: 0x7E8 (Inherited: 0x3F0)
struct UKillCamHUDView : UBaseUIView
{
	DEFINE_UE_CLASS_HELPERS(UKillCamHUDView, "KillCamHUDView")

	struct TArray<struct FName> HUDKeepInKillCam; // 0x3F0(0x10)
	struct UDFCanvasPanel* Panel_KillerView; // 0x400(0x8)
	struct UDFCanvasPanel* Panel_PlayingFinished; // 0x408(0x8)
	struct UDFCanvasPanel* Panel_WatchTeammate; // 0x410(0x8)
	struct UDFTextBlock* Text_ReplayTime; // 0x418(0x8)
	struct UDFTextBlock* Text_KillerName; // 0x420(0x8)
	struct UDFTextBlock* Text_WeaponName; // 0x428(0x8)
	struct UDFImage* Image_KillerAvatar; // 0x430(0x8)
	struct UDFImage* Image_KillerType; // 0x438(0x8)
	struct UDFImage* Image_WeaponIcon; // 0x440(0x8)
	struct UUserWidget* HDKeyIcons; // 0x448(0x8)
	struct ULuaUIBaseView* WBP_CommonKeyIconBoxText_Replay; // 0x450(0x8)
	struct ULuaUIBaseView* WBP_CommonKeyIconBoxText_Exit; // 0x458(0x8)
	struct ULuaUIBaseView* WBP_CommonKeyIconBoxText_Report; // 0x460(0x8)
	struct UUserWidget* MobileButtons; // 0x468(0x8)
	struct UUserWidget* WBP_Btn_Playback; // 0x470(0x8)
	struct UUserWidget* WBP_Btn_ExitReplay; // 0x478(0x8)
	struct UUserWidget* WBP_Btn_ReplayReport; // 0x480(0x8)
	struct UDFCommonButton* Btn_Playback; // 0x488(0x8)
	struct UDFCommonButton* Btn_ExitReplay; // 0x490(0x8)
	struct UDFCommonButton* Btn_Report; // 0x498(0x8)
	struct UWidgetAnimation* Anim_DeathReplay_Main_in; // 0x4A0(0x8)
	struct UWidgetAnimation* Anim_DeathReplay_Main_loop; // 0x4A8(0x8)
	struct UWidgetAnimation* Anim_DeathReplay_Main_out; // 0x4B0(0x8)
	struct TMap<struct FString, struct FSoftObjectPath> ReplayIconMap; // 0x4B8(0x50)
	struct FName DisplayInputActionName_Playback; // 0x508(0x8)
	struct FName DisplayInputActionName_ExitReplay; // 0x510(0x8)
	struct FName DisplayInputActionName_Report; // 0x518(0x8)
	uint8_t Pad_0x520[0x2B8]; // 0x520(0x2B8)
	uint8_t bInOpenWorldStage : 1; // 0x7D8(0x1), Mask(0x1)
	uint8_t BitPad_0x7D8_1 : 7; // 0x7D8(0x1)
	uint8_t Pad_0x7D9[0xF]; // 0x7D9(0xF)

	// Object: Function DFMReplaySystem.KillCamHUDView.UpdateKillerWeapon
	// Flags: [Final|Native|Protected]
	// Offset: 0x13be8738
	// Params: [ Num(0) Size(0x0) ]
	void UpdateKillerWeapon();

	// Object: Function DFMReplaySystem.KillCamHUDView.UpdateKillerDetail
	// Flags: [Final|Native|Protected]
	// Offset: 0x13be8724
	// Params: [ Num(0) Size(0x0) ]
	void UpdateKillerDetail();

	// Object: Function DFMReplaySystem.KillCamHUDView.UpdateKillerAvatar
	// Flags: [Final|Native|Protected]
	// Offset: 0x13be8710
	// Params: [ Num(0) Size(0x0) ]
	void UpdateKillerAvatar();

	// Object: Function DFMReplaySystem.KillCamHUDView.UpdateExitHDKeyIconText
	// Flags: [Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(1) Size(0x4) ]
	void UpdateExitHDKeyIconText(const int32_t& CountDownNum);

	// Object: Function DFMReplaySystem.KillCamHUDView.StopCharacter
	// Flags: [Final|Native|Protected]
	// Offset: 0x13be86fc
	// Params: [ Num(0) Size(0x0) ]
	void StopCharacter();

	// Object: Function DFMReplaySystem.KillCamHUDView.SetNoKiller
	// Flags: [Event|Protected|BlueprintCallable|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(2) Size(0x2) ]
	void SetNoKiller(uint8_t bNoKiller, uint8_t bNoKillerType);

	// Object: Function DFMReplaySystem.KillCamHUDView.ReplayRealStart
	// Flags: [Final|Native|Protected]
	// Offset: 0x13be86e8
	// Params: [ Num(0) Size(0x0) ]
	void ReplayRealStart();

	// Object: Function DFMReplaySystem.KillCamHUDView.RefreshKillerInfo
	// Flags: [Final|Native|Protected]
	// Offset: 0x13be86d4
	// Params: [ Num(0) Size(0x0) ]
	void RefreshKillerInfo();

	// Object: Function DFMReplaySystem.KillCamHUDView.OpenWorldExitStage
	// Flags: [Final|Native|Protected]
	// Offset: 0x13be86c0
	// Params: [ Num(0) Size(0x0) ]
	void OpenWorldExitStage();

	// Object: Function DFMReplaySystem.KillCamHUDView.OpenWorldEnterStage
	// Flags: [Final|Native|Protected]
	// Offset: 0x13be86ac
	// Params: [ Num(0) Size(0x0) ]
	void OpenWorldEnterStage();

	// Object: Function DFMReplaySystem.KillCamHUDView.OnPlayReplayEnd
	// Flags: [Final|Native|Protected]
	// Offset: 0x13be8698
	// Params: [ Num(0) Size(0x0) ]
	void OnPlayReplayEnd();

	// Object: Function DFMReplaySystem.KillCamHUDView.OnLocalPlayerPawnChanged
	// Flags: [Final|Native|Protected]
	// Offset: 0x13be85bc
	// Params: [ Num(2) Size(0x10) ]
	void OnLocalPlayerPawnChanged(struct AActor* OldCharacter, struct AActor* NewCharacter);

	// Object: Function DFMReplaySystem.KillCamHUDView.OnFirstTickReplayAfterCheckpoint
	// Flags: [Final|Native|Protected]
	// Offset: 0x13be8518
	// Params: [ Num(1) Size(0x4) ]
	void OnFirstTickReplayAfterCheckpoint(float TimeInMS);

	// Object: Function DFMReplaySystem.KillCamHUDView.OnClientSeamlessTravelEnd
	// Flags: [Final|Native|Protected]
	// Offset: 0x13be846c
	// Params: [ Num(1) Size(0x1) ]
	void OnClientSeamlessTravelEnd(uint8_t bReconnect);

	// Object: Function DFMReplaySystem.KillCamHUDView.OnClickReportBtn
	// Flags: [Final|Native|Protected]
	// Offset: 0x13be8458
	// Params: [ Num(0) Size(0x0) ]
	void OnClickReportBtn();

	// Object: Function DFMReplaySystem.KillCamHUDView.OnClickPlackback
	// Flags: [Final|Native|Protected]
	// Offset: 0x13be8444
	// Params: [ Num(0) Size(0x0) ]
	void OnClickPlackback();

	// Object: Function DFMReplaySystem.KillCamHUDView.OnClickExitReplay
	// Flags: [Final|Native|Protected]
	// Offset: 0x13be8430
	// Params: [ Num(0) Size(0x0) ]
	void OnClickExitReplay();

	// Object: Function DFMReplaySystem.KillCamHUDView.InitHDKeyIcon
	// Flags: [Event|Protected|BlueprintCallable|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(0) Size(0x0) ]
	void InitHDKeyIcon();

	// Object: Function DFMReplaySystem.KillCamHUDView.InitGamepadKeyIcon
	// Flags: [Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(1) Size(0x8) ]
	void InitGamepadKeyIcon(const struct FName& InActionName);

	// Object: Function DFMReplaySystem.KillCamHUDView.DisableProcessPlayerInputInReplay
	// Flags: [Final|Native|Protected]
	// Offset: 0x13be8384
	// Params: [ Num(1) Size(0x1) ]
	void DisableProcessPlayerInputInReplay(uint8_t bDisable);

	// Object: Function DFMReplaySystem.KillCamHUDView.DelayReplayRealStart
	// Flags: [Final|Native|Protected]
	// Offset: 0x13be8370
	// Params: [ Num(0) Size(0x0) ]
	void DelayReplayRealStart();

	// Object: Function DFMReplaySystem.KillCamHUDView.ClearForReplayEnd
	// Flags: [Final|Native|Protected]
	// Offset: 0x13be835c
	// Params: [ Num(0) Size(0x0) ]
	void ClearForReplayEnd();

	// Object: Function DFMReplaySystem.KillCamHUDView.AddCharacterMarkerAndOutLine
	// Flags: [Final|Native|Protected]
	// Offset: 0x13be8348
	// Params: [ Num(0) Size(0x0) ]
	void AddCharacterMarkerAndOutLine();
};

// Object: Class DFMReplaySystem.ProtocolFileDebugItem
// Size: 0x328 (Inherited: 0x2F8)
struct UProtocolFileDebugItem : UUserWidget
{
	DEFINE_UE_CLASS_HELPERS(UProtocolFileDebugItem, "ProtocolFileDebugItem")

	uint8_t Pad_0x2F8[0x8]; // 0x2F8(0x8)
	struct UTextBlock* ProtocolFile; // 0x300(0x8)
	struct UButton* PlayButton; // 0x308(0x8)
	uint8_t Pad_0x310[0x18]; // 0x310(0x18)

	// Object: Function DFMReplaySystem.ProtocolFileDebugItem.OnClickPlayButton
	// Flags: [Final|Native|Public]
	// Offset: 0x13be8790
	// Params: [ Num(0) Size(0x0) ]
	void OnClickPlayButton();
};

// Object: Class DFMReplaySystem.ReplayClienSDK
// Size: 0x28 (Inherited: 0x28)
struct UReplayClienSDK : UBlueprintFunctionLibrary
{
	DEFINE_UE_CLASS_HELPERS(UReplayClienSDK, "ReplayClienSDK")

	// Object: Function DFMReplaySystem.ReplayClienSDK.UnloadReplayClientSDK
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x13be88fc
	// Params: [ Num(1) Size(0x1) ]
	static uint8_t UnloadReplayClientSDK();

	// Object: Function DFMReplaySystem.ReplayClienSDK.Tick
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x13be8854
	// Params: [ Num(2) Size(0x5) ]
	static uint8_t Tick(float Delta);

	// Object: Function DFMReplaySystem.ReplayClienSDK.TestPlayVideo
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x13be87ac
	// Params: [ Num(2) Size(0x9) ]
	static uint8_t TestPlayVideo(struct UObject* WorldContextObject);

	// Object: Function DFMReplaySystem.ReplayClienSDK.LoadReplayClientSDK
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x10169c84
	// Params: [ Num(3) Size(0x19) ]
	static uint8_t LoadReplayClientSDK(struct FString Folder, struct UObject* WorldContextObject);
};

// Object: Class DFMReplaySystem.ReplayControllerView
// Size: 0x470 (Inherited: 0x3F0)
struct UReplayControllerView : UBaseUIView
{
	DEFINE_UE_CLASS_HELPERS(UReplayControllerView, "ReplayControllerView")

	struct UTextBlock* TxtPreviewTime; // 0x3F0(0x8)
	struct UTextBlock* TxtReplayDateTime; // 0x3F8(0x8)
	struct UTextBlock* TxtReplayTime; // 0x400(0x8)
	struct UTextBlock* TxtPlaySpeed; // 0x408(0x8)
	struct UButton* BtnPlay; // 0x410(0x8)
	struct UButton* BtnPause; // 0x418(0x8)
	struct UButton* BtnPlaySpeed; // 0x420(0x8)
	struct UButton* BtnExit; // 0x428(0x8)
	struct UProgressBar* ReplayProgressBar; // 0x430(0x8)
	uint8_t Pad_0x438[0x38]; // 0x438(0x38)

	// Object: Function DFMReplaySystem.ReplayControllerView.TrySkipReplayTime
	// Flags: [Final|Native|Protected]
	// Offset: 0x13be8b18
	// Params: [ Num(0) Size(0x0) ]
	void TrySkipReplayTime();

	// Object: Function DFMReplaySystem.ReplayControllerView.OnRegisterActor
	// Flags: [Final|Native|Protected]
	// Offset: 0x13be8a74
	// Params: [ Num(1) Size(0x8) ]
	void OnRegisterActor(struct AActor* ChangedActor);

	// Object: Function DFMReplaySystem.ReplayControllerView.OnGotoTimeSuccess
	// Flags: [Final|Native|Protected]
	// Offset: 0x13be8a60
	// Params: [ Num(0) Size(0x0) ]
	void OnGotoTimeSuccess();

	// Object: Function DFMReplaySystem.ReplayControllerView.OnClientCharacterRebornInReplay
	// Flags: [Final|Native|Protected]
	// Offset: 0x13be89bc
	// Params: [ Num(1) Size(0x8) ]
	void OnClientCharacterRebornInReplay(struct AGPCharacterBase* CHARACTER);

	// Object: Function DFMReplaySystem.ReplayControllerView.OnClickSpeedButton
	// Flags: [Final|Native|Protected]
	// Offset: 0x13be89a8
	// Params: [ Num(0) Size(0x0) ]
	void OnClickSpeedButton();

	// Object: Function DFMReplaySystem.ReplayControllerView.OnClickPlayButton
	// Flags: [Final|Native|Protected]
	// Offset: 0x13be8994
	// Params: [ Num(0) Size(0x0) ]
	void OnClickPlayButton();

	// Object: Function DFMReplaySystem.ReplayControllerView.OnClickPauseButton
	// Flags: [Final|Native|Protected]
	// Offset: 0x13be8980
	// Params: [ Num(0) Size(0x0) ]
	void OnClickPauseButton();

	// Object: Function DFMReplaySystem.ReplayControllerView.OnClickExitButton
	// Flags: [Final|Native|Protected]
	// Offset: 0x13be896c
	// Params: [ Num(0) Size(0x0) ]
	void OnClickExitButton();
};

// Object: Class DFMReplaySystem.ReplayDebugFileItemView
// Size: 0x310 (Inherited: 0x2F8)
struct UReplayDebugFileItemView : UUserWidget
{
	DEFINE_UE_CLASS_HELPERS(UReplayDebugFileItemView, "ReplayDebugFileItemView")

	struct UDFMReplayInstance* CurrentRecordingReplay; // 0x2F8(0x8)
	struct UUserWidget* ReplayLoadingView; // 0x300(0x8)
	uint8_t Pad_0x308[0x8]; // 0x308(0x8)

	// Object: Function DFMReplaySystem.ReplayDebugFileItemView.PlayReplay
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x13be8b34
	// Params: [ Num(0) Size(0x0) ]
	void PlayReplay();

	// Object: Function DFMReplaySystem.ReplayDebugFileItemView.OnSetData
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(0) Size(0x0) ]
	void OnSetData();
};

// Object: Class DFMReplaySystem.ReplayDebugMainView
// Size: 0x410 (Inherited: 0x3F0)
struct UReplayDebugMainView : UBaseUIView
{
	DEFINE_UE_CLASS_HELPERS(UReplayDebugMainView, "ReplayDebugMainView")

	struct UUserWidget* ReplayItemClass; // 0x3F0(0x8)
	struct UScrollBox* ReplayScrollList; // 0x3F8(0x8)
	struct TArray<struct UReplayDebugFileItemView*> AllReplayItems; // 0x400(0x10)

	// Object: Function DFMReplaySystem.ReplayDebugMainView.RemoveFromViewPortHide
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x13be8c4c
	// Params: [ Num(0) Size(0x0) ]
	void RemoveFromViewPortHide();

	// Object: Function DFMReplaySystem.ReplayDebugMainView.OnStopReplayRecording
	// Flags: [Final|Native|Public]
	// Offset: 0x13be8c38
	// Params: [ Num(0) Size(0x0) ]
	void OnStopReplayRecording();

	// Object: Function DFMReplaySystem.ReplayDebugMainView.OnStartReplayRecording
	// Flags: [Final|Native|Public]
	// Offset: 0x13be8c24
	// Params: [ Num(0) Size(0x0) ]
	void OnStartReplayRecording();

	// Object: Function DFMReplaySystem.ReplayDebugMainView.OnShow
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(0) Size(0x0) ]
	void OnShow();

	// Object: Function DFMReplaySystem.ReplayDebugMainView.OnRecordingStateChange
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(1) Size(0x1) ]
	void OnRecordingStateChange(uint8_t Enable);

	// Object: Function DFMReplaySystem.ReplayDebugMainView.OnLoadAllReplayFilesComplete
	// Flags: [Final|Native|Public]
	// Offset: 0x13be8c10
	// Params: [ Num(0) Size(0x0) ]
	void OnLoadAllReplayFilesComplete();

	// Object: Function DFMReplaySystem.ReplayDebugMainView.AddToViewPortShow
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x13be8bfc
	// Params: [ Num(0) Size(0x0) ]
	void AddToViewPortShow();
};

// Object: Class DFMReplaySystem.ReplayKillCamHudController
// Size: 0x388 (Inherited: 0x80)
struct UReplayKillCamHudController : UGPBaseHudController
{
	DEFINE_UE_CLASS_HELPERS(UReplayKillCamHudController, "ReplayKillCamHudController")

	struct UReplayKillCamHUDView* ReplayKillCamHUDView; // 0x80(0x8)
	uint8_t bInOpenWorldStage : 1; // 0x88(0x1), Mask(0x1)
	uint8_t BitPad_0x88_1 : 7; // 0x88(0x1)
	uint8_t Pad_0x89[0x2FF]; // 0x89(0x2FF)

	// Object: Function DFMReplaySystem.ReplayKillCamHudController.StopCharacter
	// Flags: [Final|Native|Protected]
	// Offset: 0x13be9368
	// Params: [ Num(0) Size(0x0) ]
	void StopCharacter();

	// Object: Function DFMReplaySystem.ReplayKillCamHudController.ShowCharacterOutLine
	// Flags: [Final|Native|Protected]
	// Offset: 0x13be91f0
	// Params: [ Num(4) Size(0x12) ]
	void ShowCharacterOutLine(uint8_t bShow, struct ADFMCharacter* InCharacter, uint8_t bSelf, uint8_t bTeammate);

	// Object: Function DFMReplaySystem.ReplayKillCamHudController.ReplayRealStart
	// Flags: [Final|Native|Protected]
	// Offset: 0x13be91dc
	// Params: [ Num(0) Size(0x0) ]
	void ReplayRealStart();

	// Object: Function DFMReplaySystem.ReplayKillCamHudController.RefreshKillerWeapon
	// Flags: [Final|Native|Protected]
	// Offset: 0x13be91c8
	// Params: [ Num(0) Size(0x0) ]
	void RefreshKillerWeapon();

	// Object: Function DFMReplaySystem.ReplayKillCamHudController.RefreshKillerDetail
	// Flags: [Final|Native|Protected]
	// Offset: 0x13be91b4
	// Params: [ Num(0) Size(0x0) ]
	void RefreshKillerDetail();

	// Object: Function DFMReplaySystem.ReplayKillCamHudController.RefreshKillerAvatar
	// Flags: [Final|Native|Protected]
	// Offset: 0x13be91a0
	// Params: [ Num(0) Size(0x0) ]
	void RefreshKillerAvatar();

	// Object: Function DFMReplaySystem.ReplayKillCamHudController.OpenWorldExitStage
	// Flags: [Final|Native|Protected]
	// Offset: 0x13be918c
	// Params: [ Num(0) Size(0x0) ]
	void OpenWorldExitStage();

	// Object: Function DFMReplaySystem.ReplayKillCamHudController.OpenWorldEnterStage
	// Flags: [Final|Native|Protected]
	// Offset: 0x13be9178
	// Params: [ Num(0) Size(0x0) ]
	void OpenWorldEnterStage();

	// Object: Function DFMReplaySystem.ReplayKillCamHudController.OnPlayReplayEnd
	// Flags: [Final|Native|Protected]
	// Offset: 0x13be9164
	// Params: [ Num(0) Size(0x0) ]
	void OnPlayReplayEnd();

	// Object: Function DFMReplaySystem.ReplayKillCamHudController.OnLocalPlayerPawnChanged
	// Flags: [Final|Native|Protected]
	// Offset: 0x13be9088
	// Params: [ Num(2) Size(0x10) ]
	void OnLocalPlayerPawnChanged(struct AActor* OldCharacter, struct AActor* NewCharacter);

	// Object: Function DFMReplaySystem.ReplayKillCamHudController.OnFirstTickReplayAfterCheckpoint
	// Flags: [Final|Native|Protected]
	// Offset: 0x13be8fe4
	// Params: [ Num(1) Size(0x4) ]
	void OnFirstTickReplayAfterCheckpoint(float TimeInMS);

	// Object: Function DFMReplaySystem.ReplayKillCamHudController.OnClientSeamlessTravelEnd
	// Flags: [Final|Native|Protected]
	// Offset: 0x13be8f38
	// Params: [ Num(1) Size(0x1) ]
	void OnClientSeamlessTravelEnd(uint8_t bReconnect);

	// Object: Function DFMReplaySystem.ReplayKillCamHudController.OnClickReportBtn
	// Flags: [Final|Native|Protected]
	// Offset: 0x13be8f24
	// Params: [ Num(0) Size(0x0) ]
	void OnClickReportBtn();

	// Object: Function DFMReplaySystem.ReplayKillCamHudController.OnClickPlackback
	// Flags: [Final|Native|Protected]
	// Offset: 0x13be8f10
	// Params: [ Num(0) Size(0x0) ]
	void OnClickPlackback();

	// Object: Function DFMReplaySystem.ReplayKillCamHudController.OnClickExitReplay
	// Flags: [Final|Native|Protected]
	// Offset: 0x13be8efc
	// Params: [ Num(0) Size(0x0) ]
	void OnClickExitReplay();

	// Object: Function DFMReplaySystem.ReplayKillCamHudController.DisableProcessPlayerInputInReplay
	// Flags: [Final|Native|Protected]
	// Offset: 0x13be8e50
	// Params: [ Num(1) Size(0x1) ]
	void DisableProcessPlayerInputInReplay(uint8_t bDisable);

	// Object: Function DFMReplaySystem.ReplayKillCamHudController.DelayShowCharacterOutLine
	// Flags: [Final|Native|Protected]
	// Offset: 0x13be8cd8
	// Params: [ Num(4) Size(0x12) ]
	void DelayShowCharacterOutLine(uint8_t bShow, struct ADFMCharacter* InCharacter, uint8_t bSelf, uint8_t bTeammate);

	// Object: Function DFMReplaySystem.ReplayKillCamHudController.DelayReplayRealStart
	// Flags: [Final|Native|Protected]
	// Offset: 0x13be8cc4
	// Params: [ Num(0) Size(0x0) ]
	void DelayReplayRealStart();

	// Object: Function DFMReplaySystem.ReplayKillCamHudController.ClearForReplayShow
	// Flags: [Final|Native|Protected]
	// Offset: 0x13be8cb0
	// Params: [ Num(0) Size(0x0) ]
	void ClearForReplayShow();

	// Object: Function DFMReplaySystem.ReplayKillCamHudController.ClearForReplayPlayback
	// Flags: [Final|Native|Protected]
	// Offset: 0x13be8c9c
	// Params: [ Num(0) Size(0x0) ]
	void ClearForReplayPlayback();

	// Object: Function DFMReplaySystem.ReplayKillCamHudController.ClearForReplayEnd
	// Flags: [Final|Native|Protected]
	// Offset: 0x13be8c88
	// Params: [ Num(0) Size(0x0) ]
	void ClearForReplayEnd();

	// Object: Function DFMReplaySystem.ReplayKillCamHudController.AddCharacterMarkerAndOutLine
	// Flags: [Final|Native|Protected]
	// Offset: 0x13be8c74
	// Params: [ Num(0) Size(0x0) ]
	void AddCharacterMarkerAndOutLine();
};

// Object: Class DFMReplaySystem.ReplayKillCamHUDView
// Size: 0x520 (Inherited: 0x400)
struct UReplayKillCamHUDView : UGPBaseHudView
{
	DEFINE_UE_CLASS_HELPERS(UReplayKillCamHUDView, "ReplayKillCamHUDView")

	struct UDFCanvasPanel* Panel_KillerView; // 0x400(0x8)
	struct UDFCanvasPanel* Panel_PlayingFinished; // 0x408(0x8)
	struct UDFCanvasPanel* Panel_WatchTeammate; // 0x410(0x8)
	struct UDFTextBlock* Text_ReplayTime; // 0x418(0x8)
	struct UDFTextBlock* Text_KillerName; // 0x420(0x8)
	struct UDFTextBlock* Text_WeaponName; // 0x428(0x8)
	struct UDFImage* Image_KillerAvatar; // 0x430(0x8)
	struct UDFImage* Image_KillerType; // 0x438(0x8)
	struct UDFImage* Image_WeaponIcon; // 0x440(0x8)
	struct UUserWidget* HDKeyIcons; // 0x448(0x8)
	struct ULuaUIBaseView* WBP_CommonKeyIconBoxText_Replay; // 0x450(0x8)
	struct ULuaUIBaseView* WBP_CommonKeyIconBoxText_Exit; // 0x458(0x8)
	struct ULuaUIBaseView* WBP_CommonKeyIconBoxText_Report; // 0x460(0x8)
	struct UUserWidget* MobileButtons; // 0x468(0x8)
	struct UUserWidget* WBP_Btn_Playback; // 0x470(0x8)
	struct UUserWidget* WBP_Btn_ExitReplay; // 0x478(0x8)
	struct UUserWidget* WBP_Btn_ReplayReport; // 0x480(0x8)
	struct UDFCommonButton* Btn_Playback; // 0x488(0x8)
	struct UDFCommonButton* Btn_ExitReplay; // 0x490(0x8)
	struct UDFCommonButton* Btn_Report; // 0x498(0x8)
	struct UWidgetAnimation* Anim_DeathReplay_Main_in; // 0x4A0(0x8)
	struct UWidgetAnimation* Anim_DeathReplay_Main_loop; // 0x4A8(0x8)
	struct UWidgetAnimation* Anim_DeathReplay_Main_out; // 0x4B0(0x8)
	struct TMap<struct FString, struct FSoftObjectPath> ReplayIconMap; // 0x4B8(0x50)
	struct FName DisplayInputActionName_Playback; // 0x508(0x8)
	struct FName DisplayInputActionName_ExitReplay; // 0x510(0x8)
	struct FName DisplayInputActionName_Report; // 0x518(0x8)

	// Object: Function DFMReplaySystem.ReplayKillCamHUDView.UpdateExitHDKeyIconText
	// Flags: [Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(1) Size(0x4) ]
	void UpdateExitHDKeyIconText(const int32_t& CountDownNum);

	// Object: Function DFMReplaySystem.ReplayKillCamHUDView.SetNoKiller
	// Flags: [Event|Public|BlueprintCallable|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(2) Size(0x2) ]
	void SetNoKiller(uint8_t bNoKiller, uint8_t bNoKillerType);

	// Object: Function DFMReplaySystem.ReplayKillCamHUDView.InitHDKeyIcon
	// Flags: [Event|Protected|BlueprintCallable|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(0) Size(0x0) ]
	void InitHDKeyIcon();
};

// Object: Class DFMReplaySystem.ReplayListDisplayView
// Size: 0x3B0 (Inherited: 0x2F8)
struct UReplayListDisplayView : UUserWidget
{
	DEFINE_UE_CLASS_HELPERS(UReplayListDisplayView, "ReplayListDisplayView")

	uint8_t Pad_0x2F8[0x1]; // 0x2F8(0x1)
	uint8_t bUseForProtocolReplay : 1; // 0x2F9(0x1), Mask(0x1)
	uint8_t BitPad_0x2F9_1 : 7; // 0x2F9(0x1)
	uint8_t Pad_0x2FA[0x6]; // 0x2FA(0x6)
	struct UUserWidget* ReplayItemClass; // 0x300(0x8)
	struct UUserWidget* ProtocolFileItemClass; // 0x308(0x8)
	struct UCanvasPanel* ReplayPanel; // 0x310(0x8)
	struct UCanvasPanel* ProtocolFilePanel; // 0x318(0x8)
	struct UCanvasPanel* ProtocolReplayPanel; // 0x320(0x8)
	struct UCanvasPanel* ParseProgressPanel; // 0x328(0x8)
	struct UDFScrollGridBox* ProtocolFileCrollList; // 0x330(0x8)
	struct UDFScrollGridBox* DFReplayScrollList; // 0x338(0x8)
	struct UButton* PlayButton; // 0x340(0x8)
	struct UEditableTextBox* TxtPlayerUID; // 0x348(0x8)
	struct UProgressBar* ParseProgress; // 0x350(0x8)
	struct UTextBlock* TxtProgress; // 0x358(0x8)
	struct TArray<struct UDFMReplayInstance*> AllReplay; // 0x360(0x10)
	struct TArray<struct FString> AllProtocolFiles; // 0x370(0x10)
	uint8_t Pad_0x380[0x30]; // 0x380(0x30)

	// Object: Function DFMReplaySystem.ReplayListDisplayView.RemoveFromViewPortHide
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x13be9910
	// Params: [ Num(0) Size(0x0) ]
	void RemoveFromViewPortHide();

	// Object: Function DFMReplaySystem.ReplayListDisplayView.OnShow
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(0) Size(0x0) ]
	void OnShow();

	// Object: Function DFMReplaySystem.ReplayListDisplayView.OnReplayItemCount
	// Flags: [Final|Native|Public]
	// Offset: 0x13be98dc
	// Params: [ Num(1) Size(0x4) ]
	int32_t OnReplayItemCount();

	// Object: Function DFMReplaySystem.ReplayListDisplayView.OnProtocolFileItemCount
	// Flags: [Final|Native|Public]
	// Offset: 0x13be98a8
	// Params: [ Num(1) Size(0x4) ]
	int32_t OnProtocolFileItemCount();

	// Object: Function DFMReplaySystem.ReplayListDisplayView.OnParseProtocolFileSuccess
	// Flags: [Final|Native|Public]
	// Offset: 0x13be9894
	// Params: [ Num(0) Size(0x0) ]
	void OnParseProtocolFileSuccess();

	// Object: Function DFMReplaySystem.ReplayListDisplayView.OnOneReplayItemSetData
	// Flags: [Final|Native|Public]
	// Offset: 0x13be97b4
	// Params: [ Num(2) Size(0x10) ]
	void OnOneReplayItemSetData(int32_t Position, struct UWidget* ItemWidget);

	// Object: Function DFMReplaySystem.ReplayListDisplayView.OnOneProtocolFileItemSetData
	// Flags: [Final|Native|Public]
	// Offset: 0x13be96d4
	// Params: [ Num(2) Size(0x10) ]
	void OnOneProtocolFileItemSetData(int32_t Position, struct UWidget* ItemWidget);

	// Object: Function DFMReplaySystem.ReplayListDisplayView.OnLoadAllReplayFilesComplete
	// Flags: [Final|Native|Public]
	// Offset: 0x13be96c0
	// Params: [ Num(0) Size(0x0) ]
	void OnLoadAllReplayFilesComplete();

	// Object: Function DFMReplaySystem.ReplayListDisplayView.OnClickPlayButton
	// Flags: [Final|Native|Public]
	// Offset: 0x13be96ac
	// Params: [ Num(0) Size(0x0) ]
	void OnClickPlayButton();

	// Object: Function DFMReplaySystem.ReplayListDisplayView.AddToViewPortShow
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x13be9698
	// Params: [ Num(0) Size(0x0) ]
	void AddToViewPortShow();
};

// Object: Class DFMReplaySystem.ReplayLoadingView
// Size: 0x320 (Inherited: 0x2F8)
struct UReplayLoadingView : UUserWidget
{
	DEFINE_UE_CLASS_HELPERS(UReplayLoadingView, "ReplayLoadingView")

	struct UProgressBar* LoadingProgressBar; // 0x2F8(0x8)
	struct UTextBlock* TxtProgress; // 0x300(0x8)
	struct UTextBlock* TxtTips; // 0x308(0x8)
	uint8_t Pad_0x310[0x10]; // 0x310(0x10)

	// Object: Function DFMReplaySystem.ReplayLoadingView.OnReplayRealStart
	// Flags: [Final|Native|Protected]
	// Offset: 0x13be9938
	// Params: [ Num(0) Size(0x0) ]
	void OnReplayRealStart();
};

// Object: Class DFMReplaySystem.ReplayOBView
// Size: 0x3F0 (Inherited: 0x3F0)
struct UReplayOBView : UBaseUIView
{
	DEFINE_UE_CLASS_HELPERS(UReplayOBView, "ReplayOBView")

	// Object: Function DFMReplaySystem.ReplayOBView.OnClientCharacterListChanged
	// Flags: [Final|Native|Public]
	// Offset: 0x13be9990
	// Params: [ Num(1) Size(0x8) ]
	void OnClientCharacterListChanged(struct AGPCharacterBase* CHARACTER);

	// Object: Function DFMReplaySystem.ReplayOBView.BP_OnCharacterListChanged
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(0) Size(0x0) ]
	void BP_OnCharacterListChanged();
};

// Object: Class DFMReplaySystem.ReplayPlaybackHudController
// Size: 0xB0 (Inherited: 0x80)
struct UReplayPlaybackHudController : UGPBaseHudController
{
	DEFINE_UE_CLASS_HELPERS(UReplayPlaybackHudController, "ReplayPlaybackHudController")

	struct UReplayPlaybackHudView* PlaybackHudView; // 0x80(0x8)
	uint8_t Pad_0x88[0x28]; // 0x88(0x28)

	// Object: Function DFMReplaySystem.ReplayPlaybackHudController.OnRegisterActor
	// Flags: [Final|Native|Protected]
	// Offset: 0x13be9b44
	// Params: [ Num(1) Size(0x8) ]
	void OnRegisterActor(struct AActor* ChangedActor);

	// Object: Function DFMReplaySystem.ReplayPlaybackHudController.OnGotoTimeSuccess
	// Flags: [Final|Native|Protected]
	// Offset: 0x13be9b30
	// Params: [ Num(0) Size(0x0) ]
	void OnGotoTimeSuccess();

	// Object: Function DFMReplaySystem.ReplayPlaybackHudController.OnClientCharacterRebornInReplay
	// Flags: [Final|Native|Protected]
	// Offset: 0x13be9a8c
	// Params: [ Num(1) Size(0x8) ]
	void OnClientCharacterRebornInReplay(struct AGPCharacterBase* CHARACTER);

	// Object: Function DFMReplaySystem.ReplayPlaybackHudController.OnClickSpeedButton
	// Flags: [Final|Native|Protected]
	// Offset: 0x13be9a78
	// Params: [ Num(0) Size(0x0) ]
	void OnClickSpeedButton();

	// Object: Function DFMReplaySystem.ReplayPlaybackHudController.OnClickPlayButton
	// Flags: [Final|Native|Protected]
	// Offset: 0x13be9a64
	// Params: [ Num(0) Size(0x0) ]
	void OnClickPlayButton();

	// Object: Function DFMReplaySystem.ReplayPlaybackHudController.OnClickPauseButton
	// Flags: [Final|Native|Protected]
	// Offset: 0x13be9a50
	// Params: [ Num(0) Size(0x0) ]
	void OnClickPauseButton();

	// Object: Function DFMReplaySystem.ReplayPlaybackHudController.OnClickExitButton
	// Flags: [Final|Native|Protected]
	// Offset: 0x13be9a3c
	// Params: [ Num(0) Size(0x0) ]
	void OnClickExitButton();
};

// Object: Class DFMReplaySystem.ReplayPlaybackHudView
// Size: 0x458 (Inherited: 0x400)
struct UReplayPlaybackHudView : UGPBaseHudView
{
	DEFINE_UE_CLASS_HELPERS(UReplayPlaybackHudView, "ReplayPlaybackHudView")

	struct UTextBlock* TxtPreviewTime; // 0x400(0x8)
	struct UTextBlock* TxtReplayDateTime; // 0x408(0x8)
	struct UTextBlock* TxtReplayTime; // 0x410(0x8)
	struct UTextBlock* TxtPlaySpeed; // 0x418(0x8)
	struct UButton* BtnPlay; // 0x420(0x8)
	struct UButton* BtnPause; // 0x428(0x8)
	struct UButton* BtnPlaySpeed; // 0x430(0x8)
	struct UButton* BtnExit; // 0x438(0x8)
	struct UProgressBar* ReplayProgressBar; // 0x440(0x8)
	uint8_t Pad_0x448[0x10]; // 0x448(0x10)
};

} // namespace SDK
