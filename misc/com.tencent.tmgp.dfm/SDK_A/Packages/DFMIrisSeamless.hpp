#pragma once

#include "../CoreUObject_classes.hpp"
#include "DFMGameplay.hpp"
#include "DFMGlobalDefines.hpp"
#include "Engine.hpp"
#include "GPGameplay.hpp"
#include "GPQuest.hpp"

namespace SDK
{

// Package: DFMIrisSeamless
// Enums: 4
// Structs: 3
// Classes: 22

struct AActor;
struct AEnterMovePath;
struct AGPCharacter;
struct AGPPlayerController;
struct AGPPlayerState;
struct AGPQuestActionContext;
struct AGPSequenceActor;
struct AGameState_PVPVE;
struct AHallCharacterBase;
struct APlayerController;
struct APlayerStart;
struct ASOLEventIndicator;
struct ATeamStart;
enum class EGameFlowStageType : uint8_t;
enum class ENetworkFailure : uint8_t;
enum class ESeamlessFlag : uint8_t;
enum class ESeamlessStage : uint8_t;
enum class ESubtitleSequenceType : uint8_t;
struct FPlayerFrontEndMatchInfo;
struct FSOLQuest;
struct FSOLQuestObjection;
struct FStartSpotAllocatorInitParams;
struct FTeamMemberIdentity;
struct FTrialsSeamlessInfo;
struct UAnimSequence;
struct UCurveFloat;
struct UDFMIrisEnterComponent;
struct UDFMQuestSystem;
struct UMeshComponent;
struct UNetConnection;
struct UNetDriver;
struct USceneComponent;
struct USkeletalMesh;
struct USkeletalMeshComponent;
struct USplineComponent;
struct UStartSpotAllocator;
struct UTexture2D;
struct UUIClipMapTexture;
struct UWeaponSystem;
struct UWorld;
struct FSeamlessEntryCharacterAppearanceData;
struct FSeamlessEntryProgress;
struct FSafeHouseHelicopterAnimInstanceProxy;
struct UDFMFSM_IrisEnterGetOffHelicopterAction;
struct UDFMFSM_IrisEnterGetOnHelicopterAction;
struct UDFMFSM_IrisEnterInHelicopterAction;
struct UDFMIrisEnterSeamlessGameplayHelper;
struct UDFMIrisEnterStageBase;
struct UDFMIrisEnterStage_Init;
struct UDFMIrisEnterStage_Match;
struct UDFMIrisEnterStage_SelectShow;
struct UDFMIrisEnterStage_GetOn;
struct UDFMIrisEnterStage_EventShow;
struct UDFMIrisEnterStage_PadShow;
struct UDFMIrisEnterStage_InfoInteract;
struct UDFMIrisEnterStage_Abseil;
struct UDFMIrisEnterStage_Finish;
struct UDFMIrisEnterStage_Fail;
struct UDFMIrisEnterStage_Reset;
struct AIntroEventStartPoint;
struct UDFMIrisEnterSubsystem;
struct UDFMIrisEnterUtils;
struct UQA_ClientSeamlessTravelStatusListener;
struct ASafeHouseHelicopter;
struct USafeHouseHelicopterAnimInstance;

// Object: Enum DFMIrisSeamless.EIrisEnterStageType
enum class EIrisEnterStageType : uint8_t
{
	None = 0,
	Init = 1,
	Match = 2,
	SelectShow = 3,
	GetOn = 4,
	EventShow = 5,
	PadShow = 6,
	InfoInteract = 7,
	Abseil = 8,
	Finish = 9,
	Fail = 10,
	Reset = 11,
	Max = 12
};

// Object: Enum DFMIrisSeamless.ESeamlessEntryMatchType
enum class ESeamlessEntryMatchType : uint8_t
{
	None = 0,
	Tutorial = 1,
	Scream = 2,
	FirstN = 3,
	Normal = 4,
	ESeamlessEntryMatchType_MAX = 5
};

// Object: Enum DFMIrisSeamless.ESeamlessDSConnectState
enum class ESeamlessDSConnectState : uint8_t
{
	None = 0,
	Waiting = 1,
	ReadyConnect = 2,
	Connecting = 3,
	Connected = 4,
	MAX = 5
};

// Object: Enum DFMIrisSeamless.EClientSeamlessTravelStatus
enum class EClientSeamlessTravelStatus : uint8_t
{
	OnClientSeamlessTravelBegin = 0,
	OnSeamlessStageEnter = 1,
	OnPreCleanupDynamicObjects = 2,
	OnPostCleanupDynamicObjects = 3,
	OnPreConnectDS = 4,
	OnPostConnectDS = 5,
	OnPreStandaloneInitialize = 6,
	OnPostStandaloneInitialize = 7,
	OnClientCreateNewPlayerController = 8,
	OnSwitchClientPlayer = 9,
	OnClientSeamlessTravelEnd = 10,
	OnNetDriverShutdown = 11,
	EClientSeamlessTravelStatus_MAX = 12
};

// Object: ScriptStruct DFMIrisSeamless.SeamlessEntryCharacterAppearanceData
// Size: 0x20 (Inherited: 0x0)
struct FSeamlessEntryCharacterAppearanceData
{
	int64_t PlayerId; // 0x0(0x8)
	struct FName HeroSuitID; // 0x8(0x8)
	struct TArray<struct FName> Equipments; // 0x10(0x10)
};

// Object: ScriptStruct DFMIrisSeamless.SeamlessEntryProgress
// Size: 0x14 (Inherited: 0x0)
struct FSeamlessEntryProgress
{
	uint8_t bIsWaitingMapInteract : 1; // 0x0(0x1), Mask(0x1)
	uint8_t BitPad_0x0_1 : 7; // 0x0(0x1)
	uint8_t bIsLastSecond : 1; // 0x1(0x1), Mask(0x1)
	uint8_t BitPad_0x1_1 : 7; // 0x1(0x1)
	uint8_t Pad_0x2[0x2]; // 0x2(0x2)
	float LastDelta; // 0x4(0x4)
	float MapInteractTime; // 0x8(0x4)
	float CurrentSeamlessEntryProgress; // 0xC(0x4)
	float TargetSeamlessEntryProgress; // 0x10(0x4)
};

// Object: ScriptStruct DFMIrisSeamless.SafeHouseHelicopterAnimInstanceProxy
// Size: 0x7D0 (Inherited: 0x7A0)
struct FSafeHouseHelicopterAnimInstanceProxy : FAnimInstanceProxy
{
	struct FVector LeftDoorLocation; // 0x798(0xC)
	struct FVector RightDoorLocation; // 0x7A4(0xC)
	struct UAnimSequence* HelicopterIdleAnim; // 0x7B0(0x8)
	uint8_t StopAnimation : 1; // 0x7B8(0x1), Mask(0x1)
	struct ASafeHouseHelicopter* SafeHouseHelicopter; // 0x7C0(0x8)
	uint8_t BitPad_0x7C8_1 : 7; // 0x7C8(0x1)
	uint8_t Pad_0x7C9[0x7]; // 0x7C9(0x7)
};

// Object: Class DFMIrisSeamless.DFMFSM_IrisEnterGetOffHelicopterAction
// Size: 0x1E0 (Inherited: 0x108)
struct UDFMFSM_IrisEnterGetOffHelicopterAction : UDFMFSMAction
{
	struct UAnimSequence* RopeDownFPP; // 0x108(0x8)
	float RopeDownSpeedRate; // 0x110(0x4)
	uint8_t Pad_0x114[0x4]; // 0x114(0x4)
	struct UAnimSequence* RopeGetLocomotion; // 0x118(0x8)
	struct UAnimSequence* RopeGetFPP; // 0x120(0x8)
	struct UAnimSequence* RopeGetTPP; // 0x128(0x8)
	float StartGetOnRopeSpeedRate; // 0x130(0x4)
	float GetDownRopeSpeedRate; // 0x134(0x4)
	struct UAnimSequence* RopeLoopFPP; // 0x138(0x8)
	struct UAnimSequence* RopeLoopTPP; // 0x140(0x8)
	struct UAnimSequence* RopeGetOffFPP; // 0x148(0x8)
	struct UAnimSequence* RopeGetOffTPP; // 0x150(0x8)
	struct FVector GetDownLoopOffset; // 0x158(0xC)
	uint8_t bUseRootmotionAnimation : 1; // 0x164(0x1), Mask(0x1)
	uint8_t BitPad_0x164_1 : 7; // 0x164(0x1)
	uint8_t bUseRootmotionFullProcess : 1; // 0x165(0x1), Mask(0x1)
	uint8_t BitPad_0x165_1 : 7; // 0x165(0x1)
	uint8_t Pad_0x166[0xA]; // 0x166(0xA)
	struct FTransform GetDownLoopOffsetForRootmotionAnimation; // 0x170(0x30)
	uint8_t DelayOneFromeToRopeDown : 1; // 0x1A0(0x1), Mask(0x1)
	uint8_t BitPad_0x1A0_1 : 7; // 0x1A0(0x1)
	uint8_t Pad_0x1A1[0x3F]; // 0x1A1(0x3F)


	// Object: Function DFMIrisSeamless.DFMFSM_IrisEnterGetOffHelicopterAction.StartGetOnRope
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x138a4cd8
	// Params: [ Num(0) Size(0x0) ]
	void StartGetOnRope();

	// Object: Function DFMIrisSeamless.DFMFSM_IrisEnterGetOffHelicopterAction.OnStateEnd
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(0) Size(0x0) ]
	void OnStateEnd();

	// Object: Function DFMIrisSeamless.DFMFSM_IrisEnterGetOffHelicopterAction.OnStateBegin
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(0) Size(0x0) ]
	void OnStateBegin();

	// Object: Function DFMIrisSeamless.DFMFSM_IrisEnterGetOffHelicopterAction.OnStartGetOnRopeComplete
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(0) Size(0x0) ]
	void OnStartGetOnRopeComplete();

	// Object: Function DFMIrisSeamless.DFMFSM_IrisEnterGetOffHelicopterAction.OnGetDownRopeComplete
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(0) Size(0x0) ]
	void OnGetDownRopeComplete();

	// Object: Function DFMIrisSeamless.DFMFSM_IrisEnterGetOffHelicopterAction.OnDownAnimStart
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(0) Size(0x0) ]
	void OnDownAnimStart();

	// Object: Function DFMIrisSeamless.DFMFSM_IrisEnterGetOffHelicopterAction.GetDownRope
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x138a4c34
	// Params: [ Num(1) Size(0x8) ]
	void GetDownRope(struct USplineComponent* Spline);
	DEFINE_UE_CLASS_HELPERS(UDFMFSM_IrisEnterGetOffHelicopterAction, "DFMFSM_IrisEnterGetOffHelicopterAction")

};

// Object: Class DFMIrisSeamless.DFMFSM_IrisEnterGetOnHelicopterAction
// Size: 0x110 (Inherited: 0x108)
struct UDFMFSM_IrisEnterGetOnHelicopterAction : UDFMFSMAction
{
	uint8_t TestBool : 1; // 0x108(0x1), Mask(0x1)
	uint8_t BitPad_0x108_1 : 7; // 0x108(0x1)
	uint8_t Pad_0x109[0x7]; // 0x109(0x7)


	// Object: Function DFMIrisSeamless.DFMFSM_IrisEnterGetOnHelicopterAction.OnStateUpdate
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(1) Size(0x4) ]
	void OnStateUpdate(float DeltaSeconds);

	// Object: Function DFMIrisSeamless.DFMFSM_IrisEnterGetOnHelicopterAction.OnStateEnd
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(0) Size(0x0) ]
	void OnStateEnd();

	// Object: Function DFMIrisSeamless.DFMFSM_IrisEnterGetOnHelicopterAction.OnStateBegin
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(0) Size(0x0) ]
	void OnStateBegin();
	DEFINE_UE_CLASS_HELPERS(UDFMFSM_IrisEnterGetOnHelicopterAction, "DFMFSM_IrisEnterGetOnHelicopterAction")

};

// Object: Class DFMIrisSeamless.DFMFSM_IrisEnterInHelicopterAction
// Size: 0x130 (Inherited: 0x108)
struct UDFMFSM_IrisEnterInHelicopterAction : UDFMFSMAction
{
	float LevelCompletePercentage; // 0x108(0x4)
	uint8_t bEnableCameraLimit : 1; // 0x10C(0x1), Mask(0x1)
	uint8_t BitPad_0x10C_1 : 7; // 0x10C(0x1)
	uint8_t Pad_0x10D[0x3]; // 0x10D(0x3)
	struct FVector2D InHelicopterPitchLimit; // 0x110(0x8)
	struct FVector2D InHelicopterYawLimit; // 0x118(0x8)
	uint8_t Pad_0x120[0x8]; // 0x120(0x8)
	struct UDFMIrisEnterSubsystem* IrisEnterSubsystem; // 0x128(0x8)


	// Object: Function DFMIrisSeamless.DFMFSM_IrisEnterInHelicopterAction.TransportHelicopterToFlyPoint
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x138a68c0
	// Params: [ Num(2) Size(0x14) ]
	void TransportHelicopterToFlyPoint(struct AActor* Helicopter, struct FVector Location);

	// Object: Function DFMIrisSeamless.DFMFSM_IrisEnterInHelicopterAction.SetCanCharacterRotate
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x138a6814
	// Params: [ Num(1) Size(0x1) ]
	void SetCanCharacterRotate(uint8_t canRotate);

	// Object: Function DFMIrisSeamless.DFMFSM_IrisEnterInHelicopterAction.OnStreamingLoadingPercentage
	// Flags: [Final|Native|Public]
	// Offset: 0x138a6770
	// Params: [ Num(1) Size(0x4) ]
	void OnStreamingLoadingPercentage(int32_t Percentage);

	// Object: Function DFMIrisSeamless.DFMFSM_IrisEnterInHelicopterAction.OnStateUpdate
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(1) Size(0x4) ]
	void OnStateUpdate(float DeltaSeconds);

	// Object: Function DFMIrisSeamless.DFMFSM_IrisEnterInHelicopterAction.OnStateEnd
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(0) Size(0x0) ]
	void OnStateEnd();

	// Object: Function DFMIrisSeamless.DFMFSM_IrisEnterInHelicopterAction.OnStateBegin
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(0) Size(0x0) ]
	void OnStateBegin();

	// Object: Function DFMIrisSeamless.DFMFSM_IrisEnterInHelicopterAction.OnHelicopterTeleportComplete
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(1) Size(0x4) ]
	void OnHelicopterTeleportComplete(int32_t Percentage);
	DEFINE_UE_CLASS_HELPERS(UDFMFSM_IrisEnterInHelicopterAction, "DFMFSM_IrisEnterInHelicopterAction")

};

// Object: Class DFMIrisSeamless.DFMIrisEnterSeamlessGameplayHelper
// Size: 0x28 (Inherited: 0x28)
struct UDFMIrisEnterSeamlessGameplayHelper : UBlueprintFunctionLibrary
{

	// Object: Function DFMIrisSeamless.DFMIrisEnterSeamlessGameplayHelper.SwitchClientPlayer
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x138a9d88
	// Params: [ Num(2) Size(0x9) ]
	static uint8_t SwitchClientPlayer(struct UObject* WorldContextObject);

	// Object: Function DFMIrisSeamless.DFMIrisEnterSeamlessGameplayHelper.StartPointRandomSeedNotify
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x138a9c24
	// Params: [ Num(5) Size(0x25) ]
	static uint8_t StartPointRandomSeedNotify(struct UObject* WorldContextObject, int32_t QuestID, struct FString StageName, int32_t objectiveId);

	// Object: Function DFMIrisSeamless.DFMIrisEnterSeamlessGameplayHelper.StartMatchSucceed
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x138a9878
	// Params: [ Num(9) Size(0xBD) ]
	static uint8_t StartMatchSucceed(struct UObject* WorldContextObject, int32_t QuestID, struct FString StageName, int32_t objectiveId, struct FString map_name, uint8_t isInRoome, struct FPlayerFrontEndMatchInfo MatchInfo, int32_t RebornPlayerType);

	// Object: Function DFMIrisSeamless.DFMIrisEnterSeamlessGameplayHelper.StartMatchCheck
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x1067ad80
	// Params: [ Num(7) Size(0x3A) ]
	static uint8_t StartMatchCheck(struct UObject* WorldContextObject, int32_t QuestID, struct FString StageName, int32_t objectiveId, struct FString map_name, uint8_t isInRoome);

	// Object: Function DFMIrisSeamless.DFMIrisEnterSeamlessGameplayHelper.StartLaunchLocalDS
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x138a95f8
	// Params: [ Num(9) Size(0x50) ]
	static void StartLaunchLocalDS(struct UObject* WorldContextObject, int32_t QuestID, struct FString StageName, int32_t objectiveId, uint64_t room_id, uint64_t map_id, struct FString map_name, uint32_t dsa_ip, uint32_t dsa_port);

	// Object: Function DFMIrisSeamless.DFMIrisEnterSeamlessGameplayHelper.SetStarLinkIconEnable
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x138a9520
	// Params: [ Num(2) Size(0x9) ]
	static void SetStarLinkIconEnable(struct UObject* WorldContextObject, uint8_t Enable);

	// Object: Function DFMIrisSeamless.DFMIrisEnterSeamlessGameplayHelper.SetRealWeatherId
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x138a947c
	// Params: [ Num(2) Size(0x10) ]
	static int64_t SetRealWeatherId(struct UObject* WorldContextObject);

	// Object: Function DFMIrisSeamless.DFMIrisEnterSeamlessGameplayHelper.SetPlayerStartAllocatorInitParams
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x138a9378
	// Params: [ Num(3) Size(0x21) ]
	static uint8_t SetPlayerStartAllocatorInitParams(struct UObject* WorldContextObject, struct FStartSpotAllocatorInitParams InParams);

	// Object: Function DFMIrisSeamless.DFMIrisEnterSeamlessGameplayHelper.SetMatchCount
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x138a92a8
	// Params: [ Num(2) Size(0xC) ]
	static void SetMatchCount(struct UObject* WorldContextObject, int32_t InCount);

	// Object: Function DFMIrisSeamless.DFMIrisEnterSeamlessGameplayHelper.SetClientSeamlessTravelEnable
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x138a91bc
	// Params: [ Num(3) Size(0xA) ]
	static uint8_t SetClientSeamlessTravelEnable(struct UObject* WorldContextObject, uint8_t Enable);

	// Object: Function DFMIrisSeamless.DFMIrisEnterSeamlessGameplayHelper.SetClientManualSwitchPlayerEnable
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x138a90d0
	// Params: [ Num(3) Size(0xA) ]
	static uint8_t SetClientManualSwitchPlayerEnable(struct UObject* WorldContextObject, uint8_t Enable);

	// Object: Function DFMIrisSeamless.DFMIrisEnterSeamlessGameplayHelper.SendNotifySeamlessLoginReadyAfterLoading
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x138a903c
	// Params: [ Num(1) Size(0x8) ]
	static void SendNotifySeamlessLoginReadyAfterLoading(struct UObject* WorldContextObject);

	// Object: Function DFMIrisSeamless.DFMIrisEnterSeamlessGameplayHelper.SeamlessLog
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x138a8fa0
	// Params: [ Num(1) Size(0x10) ]
	static void SeamlessLog(struct FString Log);

	// Object: Function DFMIrisSeamless.DFMIrisEnterSeamlessGameplayHelper.ResetSeamlessEnterSystem
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x138a8f0c
	// Params: [ Num(1) Size(0x8) ]
	static void ResetSeamlessEnterSystem(struct UObject* WorldContextObject);

	// Object: Function DFMIrisSeamless.DFMIrisEnterSeamlessGameplayHelper.RealMatchSucceed
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x138a8dbc
	// Params: [ Num(4) Size(0x24) ]
	static void RealMatchSucceed(struct UObject* WorldContextObject, int32_t QuestID, struct FString StageName, int32_t objectiveId);

	// Object: Function DFMIrisSeamless.DFMIrisEnterSeamlessGameplayHelper.ReadyToConnectRemoteDS
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x138a8c58
	// Params: [ Num(5) Size(0x25) ]
	static uint8_t ReadyToConnectRemoteDS(struct UObject* WorldContextObject, int32_t QuestID, struct FString StageName, int32_t objectiveId);

	// Object: Function DFMIrisSeamless.DFMIrisEnterSeamlessGameplayHelper.ReadyToConnectDS
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x138a8af4
	// Params: [ Num(5) Size(0x25) ]
	static uint8_t ReadyToConnectDS(struct UObject* WorldContextObject, int32_t QuestID, struct FString StageName, int32_t objectiveId);

	// Object: Function DFMIrisSeamless.DFMIrisEnterSeamlessGameplayHelper.QuestActorAddSeamlessFlag
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x138a8a24
	// Params: [ Num(2) Size(0x9) ]
	static void QuestActorAddSeamlessFlag(struct AActor* InActor, ESeamlessFlag InFlag);

	// Object: Function DFMIrisSeamless.DFMIrisEnterSeamlessGameplayHelper.ProcessMapGlitchEffect
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x138a8954
	// Params: [ Num(2) Size(0xC) ]
	static void ProcessMapGlitchEffect(struct UObject* WorldContext, int32_t CurrentEnterMapID);

	// Object: Function DFMIrisSeamless.DFMIrisEnterSeamlessGameplayHelper.ProcessMandelBrickEvent
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x138a88c0
	// Params: [ Num(1) Size(0x8) ]
	static void ProcessMandelBrickEvent(struct UObject* WorldContextObject);

	// Object: Function DFMIrisSeamless.DFMIrisEnterSeamlessGameplayHelper.PrepareIntroEvent
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x138a866c
	// Params: [ Num(7) Size(0x50) ]
	static void PrepareIntroEvent(struct UObject* WorldContextObject, int32_t QuestID, struct FString StageName, int32_t objectiveId, struct TArray<struct FString> EventIds, int32_t EventCourseId, struct FString LevelName);

	// Object: Function DFMIrisSeamless.DFMIrisEnterSeamlessGameplayHelper.PreLoadSeamlessMapIcons
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x138a85d8
	// Params: [ Num(1) Size(0x8) ]
	static void PreLoadSeamlessMapIcons(struct UObject* WorldContext);

	// Object: Function DFMIrisSeamless.DFMIrisEnterSeamlessGameplayHelper.PreAllocAllPlayerStartSpot
	// Flags: [Final|Native|Static|Public|HasOutParms]
	// Offset: 0x138a84dc
	// Params: [ Num(3) Size(0x19) ]
	static uint8_t PreAllocAllPlayerStartSpot(struct UObject* WorldContextObject, struct TArray<struct FTeamMemberIdentity>& InTeamMemberIds);

	// Object: Function DFMIrisSeamless.DFMIrisEnterSeamlessGameplayHelper.LoadMapDataTable
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x138a8404
	// Params: [ Num(2) Size(0x18) ]
	static void LoadMapDataTable(struct UObject* WorldContextObject, struct FString MapName);

	// Object: Function DFMIrisSeamless.DFMIrisEnterSeamlessGameplayHelper.LoadIntroEventCSLevel
	// Flags: [Final|Native|Static|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x138a8270
	// Params: [ Num(4) Size(0x22) ]
	static uint8_t LoadIntroEventCSLevel(struct UObject* WorldContextObject, struct FSoftObjectPath LevelPath, uint8_t bLoad);

	// Object: Function DFMIrisSeamless.DFMIrisEnterSeamlessGameplayHelper.GetTideEnterLocByPlayerStartPoint
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x138a8194
	// Params: [ Num(3) Size(0x18) ]
	static struct AActor* GetTideEnterLocByPlayerStartPoint(struct UObject* WorldContextObject, struct AActor* DefaultLoc);

	// Object: Function DFMIrisSeamless.DFMIrisEnterSeamlessGameplayHelper.GetSeamlessEnterEnable
	// Flags: [Final|Native|Static|Public]
	// Offset: 0xfd64bdc
	// Params: [ Num(2) Size(0x9) ]
	static uint8_t GetSeamlessEnterEnable(struct UObject* WorldContextObject);

	// Object: Function DFMIrisSeamless.DFMIrisEnterSeamlessGameplayHelper.GetHelicopterMovePathByPlayerStartPoint
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x138a80b8
	// Params: [ Num(3) Size(0x18) ]
	static struct AEnterMovePath* GetHelicopterMovePathByPlayerStartPoint(struct UObject* WorldContextObject, struct AEnterMovePath* DefaultPath);

	// Object: Function DFMIrisSeamless.DFMIrisEnterSeamlessGameplayHelper.GetDSLocalPlayerControllerDuringSeamless
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x138a8014
	// Params: [ Num(2) Size(0x10) ]
	static struct APlayerController* GetDSLocalPlayerControllerDuringSeamless(struct UObject* WorldContextObject);

	// Object: Function DFMIrisSeamless.DFMIrisEnterSeamlessGameplayHelper.GetCVarForceEnableSpecialWeatherEventSOL
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x138a7fe0
	// Params: [ Num(1) Size(0x4) ]
	static int32_t GetCVarForceEnableSpecialWeatherEventSOL();

	// Object: Function DFMIrisSeamless.DFMIrisEnterSeamlessGameplayHelper.GetCVarForceEnableMandelBrickEventSOL
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x138a7fac
	// Params: [ Num(1) Size(0x4) ]
	static int32_t GetCVarForceEnableMandelBrickEventSOL();

	// Object: Function DFMIrisSeamless.DFMIrisEnterSeamlessGameplayHelper.GetCVarForceEnableIntroEventSOL
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x138a7f78
	// Params: [ Num(1) Size(0x4) ]
	static int32_t GetCVarForceEnableIntroEventSOL();

	// Object: Function DFMIrisSeamless.DFMIrisEnterSeamlessGameplayHelper.GetCVarDisableDeviceSeamless
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0xffc331c
	// Params: [ Num(1) Size(0x4) ]
	static int32_t GetCVarDisableDeviceSeamless();

	// Object: Function DFMIrisSeamless.DFMIrisEnterSeamlessGameplayHelper.FindCorrespondTeamStart
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x138a7ed4
	// Params: [ Num(2) Size(0x10) ]
	static struct ATeamStart* FindCorrespondTeamStart(struct APlayerStart* PlayerStart);

	// Object: Function DFMIrisSeamless.DFMIrisEnterSeamlessGameplayHelper.FakeStartPointRandomSeedNotify
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x138a7e40
	// Params: [ Num(1) Size(0x8) ]
	static void FakeStartPointRandomSeedNotify(struct UObject* WorldContextObject);

	// Object: Function DFMIrisSeamless.DFMIrisEnterSeamlessGameplayHelper.FakeStartMatchSucceed
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x138a7dac
	// Params: [ Num(1) Size(0x8) ]
	static void FakeStartMatchSucceed(struct UObject* WorldContextObject);

	// Object: Function DFMIrisSeamless.DFMIrisEnterSeamlessGameplayHelper.FakeRealMatchSucceed
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x138a7d18
	// Params: [ Num(1) Size(0x8) ]
	static void FakeRealMatchSucceed(struct UObject* WorldContextObject);

	// Object: Function DFMIrisSeamless.DFMIrisEnterSeamlessGameplayHelper.FakeReadyToConnectDS
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x138a7c84
	// Params: [ Num(1) Size(0x8) ]
	static void FakeReadyToConnectDS(struct UObject* WorldContextObject);

	// Object: Function DFMIrisSeamless.DFMIrisEnterSeamlessGameplayHelper.FakeCancelMatchSucceed
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x138a7bf0
	// Params: [ Num(1) Size(0x8) ]
	static void FakeCancelMatchSucceed(struct UObject* WorldContextObject);

	// Object: Function DFMIrisSeamless.DFMIrisEnterSeamlessGameplayHelper.EnableStreamingAndHud
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x138a7b5c
	// Params: [ Num(1) Size(0x8) ]
	static void EnableStreamingAndHud(struct UObject* WorldContextObject);

	// Object: Function DFMIrisSeamless.DFMIrisEnterSeamlessGameplayHelper.ConfirmReadyToConnectRemoteDS
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x138a7ab4
	// Params: [ Num(2) Size(0x9) ]
	static uint8_t ConfirmReadyToConnectRemoteDS(struct UObject* WorldContextObject);

	// Object: Function DFMIrisSeamless.DFMIrisEnterSeamlessGameplayHelper.ConfirmReadyToConnectDS
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x138a7a0c
	// Params: [ Num(2) Size(0x9) ]
	static uint8_t ConfirmReadyToConnectDS(struct UObject* WorldContextObject);

	// Object: Function DFMIrisSeamless.DFMIrisEnterSeamlessGameplayHelper.CollectExposureVolumeInSafeHouse
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x138a7978
	// Params: [ Num(1) Size(0x8) ]
	static void CollectExposureVolumeInSafeHouse(struct UObject* WorldContextObject);

	// Object: Function DFMIrisSeamless.DFMIrisEnterSeamlessGameplayHelper.CollectDataForIntroEvent
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x138a785c
	// Params: [ Num(4) Size(0x15) ]
	static uint8_t CollectDataForIntroEvent(struct UObject* WorldContextObject, struct UDFMIrisEnterComponent* IrisEnterComponent, int32_t EventId);

	// Object: Function DFMIrisSeamless.DFMIrisEnterSeamlessGameplayHelper.CleanupExposureOverrideVolume
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x138a778c
	// Params: [ Num(2) Size(0xC) ]
	static void CleanupExposureOverrideVolume(struct UObject* WorldContextObject, float VolumePriority);

	// Object: Function DFMIrisSeamless.DFMIrisEnterSeamlessGameplayHelper.CancelMatchSucceed
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x138a763c
	// Params: [ Num(4) Size(0x24) ]
	static void CancelMatchSucceed(struct UObject* WorldContextObject, int32_t QuestID, struct FString StageName, int32_t objectiveId);
	DEFINE_UE_CLASS_HELPERS(UDFMIrisEnterSeamlessGameplayHelper, "DFMIrisEnterSeamlessGameplayHelper")

};

// Object: Class DFMIrisSeamless.DFMIrisEnterStageBase
// Size: 0x40 (Inherited: 0x28)
struct UDFMIrisEnterStageBase : UObject
{
	EIrisEnterStageType IrisEnterStage; // 0x28(0x1)
	uint8_t Pad_0x29[0x7]; // 0x29(0x7)
	struct UDFMIrisEnterSubsystem* IrisEnterSubsystem; // 0x30(0x8)
	uint8_t Pad_0x38[0x8]; // 0x38(0x8)


	// Object: Function DFMIrisSeamless.DFMIrisEnterStageBase.TrySwitchNextStage
	// Flags: [Native|Public]
	// Offset: 0x138ab2a0
	// Params: [ Num(1) Size(0x1) ]
	uint8_t TrySwitchNextStage();

	// Object: Function DFMIrisSeamless.DFMIrisEnterStageBase.SequenceLoadTimeout
	// Flags: [Native|Protected]
	// Offset: 0x138ab260
	// Params: [ Num(1) Size(0x1) ]
	uint8_t SequenceLoadTimeout();

	// Object: Function DFMIrisSeamless.DFMIrisEnterStageBase.InitStage
	// Flags: [Native|Public]
	// Offset: 0x138ab244
	// Params: [ Num(0) Size(0x0) ]
	void InitStage();

	// Object: Function DFMIrisSeamless.DFMIrisEnterStageBase.GetIrisEnterStageType
	// Flags: [Final|Native|Public|Const]
	// Offset: 0x138ab228
	// Params: [ Num(1) Size(0x1) ]
	EIrisEnterStageType GetIrisEnterStageType();

	// Object: Function DFMIrisSeamless.DFMIrisEnterStageBase.GetIrisEnterStageName
	// Flags: [Final|Native|Public|Const]
	// Offset: 0x138ab190
	// Params: [ Num(1) Size(0x10) ]
	struct FString GetIrisEnterStageName();

	// Object: Function DFMIrisSeamless.DFMIrisEnterStageBase.DelaySwitchToEnterStage
	// Flags: [Final|Native|Protected|Const]
	// Offset: 0x138ab0b0
	// Params: [ Num(2) Size(0x8) ]
	void DelaySwitchToEnterStage(EIrisEnterStageType NewStageType, float DelayTime);

	// Object: Function DFMIrisSeamless.DFMIrisEnterStageBase.CheckIrisEnterSubsystemValid
	// Flags: [Final|Native|Protected|Const]
	// Offset: 0x138ab078
	// Params: [ Num(1) Size(0x1) ]
	uint8_t CheckIrisEnterSubsystemValid();
	DEFINE_UE_CLASS_HELPERS(UDFMIrisEnterStageBase, "DFMIrisEnterStageBase")

};

// Object: Class DFMIrisSeamless.DFMIrisEnterStage_Init
// Size: 0x40 (Inherited: 0x40)
struct UDFMIrisEnterStage_Init : UDFMIrisEnterStageBase
{	DEFINE_UE_CLASS_HELPERS(UDFMIrisEnterStage_Init, "DFMIrisEnterStage_Init")

};

// Object: Class DFMIrisSeamless.DFMIrisEnterStage_Match
// Size: 0x40 (Inherited: 0x40)
struct UDFMIrisEnterStage_Match : UDFMIrisEnterStageBase
{

	// Object: Function DFMIrisSeamless.DFMIrisEnterStage_Match.ProcessSequenceWarmUp
	// Flags: [Final|Native|Public]
	// Offset: 0x138ab400
	// Params: [ Num(0) Size(0x0) ]
	void ProcessSequenceWarmUp();

	// Object: Function DFMIrisSeamless.DFMIrisEnterStage_Match.ProcessReferencePackage
	// Flags: [Final|Native|Public]
	// Offset: 0x138ab3ec
	// Params: [ Num(0) Size(0x0) ]
	void ProcessReferencePackage();

	// Object: Function DFMIrisSeamless.DFMIrisEnterStage_Match.ProcessIntroEventCutSceneLevel
	// Flags: [Final|Native|Public]
	// Offset: 0x138ab3d8
	// Params: [ Num(0) Size(0x0) ]
	void ProcessIntroEventCutSceneLevel();

	// Object: Function DFMIrisSeamless.DFMIrisEnterStage_Match.ProcessGIReplaceVolume
	// Flags: [Final|Native|Public]
	// Offset: 0x138ab3c4
	// Params: [ Num(0) Size(0x0) ]
	void ProcessGIReplaceVolume();
	DEFINE_UE_CLASS_HELPERS(UDFMIrisEnterStage_Match, "DFMIrisEnterStage_Match")

};

// Object: Class DFMIrisSeamless.DFMIrisEnterStage_SelectShow
// Size: 0x40 (Inherited: 0x40)
struct UDFMIrisEnterStage_SelectShow : UDFMIrisEnterStageBase
{	DEFINE_UE_CLASS_HELPERS(UDFMIrisEnterStage_SelectShow, "DFMIrisEnterStage_SelectShow")

};

// Object: Class DFMIrisSeamless.DFMIrisEnterStage_GetOn
// Size: 0x40 (Inherited: 0x40)
struct UDFMIrisEnterStage_GetOn : UDFMIrisEnterStageBase
{

	// Object: Function DFMIrisSeamless.DFMIrisEnterStage_GetOn.ProcessTideEnterLoc
	// Flags: [Final|Native|Public]
	// Offset: 0x138ab4d8
	// Params: [ Num(0) Size(0x0) ]
	void ProcessTideEnterLoc();

	// Object: Function DFMIrisSeamless.DFMIrisEnterStage_GetOn.ProcessMovePath
	// Flags: [Final|Native|Public]
	// Offset: 0x138ab4c4
	// Params: [ Num(0) Size(0x0) ]
	void ProcessMovePath();

	// Object: Function DFMIrisSeamless.DFMIrisEnterStage_GetOn.ProcessMandelBrickEvent
	// Flags: [Final|Native|Public]
	// Offset: 0x138ab4b0
	// Params: [ Num(0) Size(0x0) ]
	void ProcessMandelBrickEvent();

	// Object: Function DFMIrisSeamless.DFMIrisEnterStage_GetOn.ProcessIntroEvent
	// Flags: [Final|Native|Public]
	// Offset: 0x138ab49c
	// Params: [ Num(0) Size(0x0) ]
	void ProcessIntroEvent();

	// Object: Function DFMIrisSeamless.DFMIrisEnterStage_GetOn.ProcessInDoorStart
	// Flags: [Final|Native|Public]
	// Offset: 0x138ab488
	// Params: [ Num(0) Size(0x0) ]
	void ProcessInDoorStart();

	// Object: Function DFMIrisSeamless.DFMIrisEnterStage_GetOn.ProcessHelicopterMovePath
	// Flags: [Final|Native|Public]
	// Offset: 0x138ab474
	// Params: [ Num(0) Size(0x0) ]
	void ProcessHelicopterMovePath();

	// Object: Function DFMIrisSeamless.DFMIrisEnterStage_GetOn.ProcessDefaultMovePath
	// Flags: [Final|Native|Public]
	// Offset: 0x138ab460
	// Params: [ Num(0) Size(0x0) ]
	void ProcessDefaultMovePath();

	// Object: Function DFMIrisSeamless.DFMIrisEnterStage_GetOn.GetOnHelicopter
	// Flags: [Final|Native|Public|Const]
	// Offset: 0x138ab428
	// Params: [ Num(1) Size(0x1) ]
	uint8_t GetOnHelicopter();
	DEFINE_UE_CLASS_HELPERS(UDFMIrisEnterStage_GetOn, "DFMIrisEnterStage_GetOn")

};

// Object: Class DFMIrisSeamless.DFMIrisEnterStage_EventShow
// Size: 0x40 (Inherited: 0x40)
struct UDFMIrisEnterStage_EventShow : UDFMIrisEnterStageBase
{	DEFINE_UE_CLASS_HELPERS(UDFMIrisEnterStage_EventShow, "DFMIrisEnterStage_EventShow")

};

// Object: Class DFMIrisSeamless.DFMIrisEnterStage_PadShow
// Size: 0x50 (Inherited: 0x40)
struct UDFMIrisEnterStage_PadShow : UDFMIrisEnterStageBase
{
	uint8_t Pad_0x40[0x10]; // 0x40(0x10)


	// Object: Function DFMIrisSeamless.DFMIrisEnterStage_PadShow.WarmUpSequence
	// Flags: [Final|Native|Public]
	// Offset: 0x138ab70c
	// Params: [ Num(1) Size(0x1) ]
	uint8_t WarmUpSequence();

	// Object: Function DFMIrisSeamless.DFMIrisEnterStage_PadShow.TransportToStartPoint
	// Flags: [Final|Native|Public]
	// Offset: 0x138ab6f8
	// Params: [ Num(0) Size(0x0) ]
	void TransportToStartPoint();

	// Object: Function DFMIrisSeamless.DFMIrisEnterStage_PadShow.TideEntryTransportToStartPoint
	// Flags: [Final|Native|Public]
	// Offset: 0x138ab6e4
	// Params: [ Num(0) Size(0x0) ]
	void TideEntryTransportToStartPoint();

	// Object: Function DFMIrisSeamless.DFMIrisEnterStage_PadShow.PlayIntroVideo
	// Flags: [Final|Native|Public]
	// Offset: 0x138ab6d0
	// Params: [ Num(0) Size(0x0) ]
	void PlayIntroVideo();

	// Object: Function DFMIrisSeamless.DFMIrisEnterStage_PadShow.PlayIntroCutScene
	// Flags: [Final|Native|Public]
	// Offset: 0x138ab6bc
	// Params: [ Num(0) Size(0x0) ]
	void PlayIntroCutScene();

	// Object: Function DFMIrisSeamless.DFMIrisEnterStage_PadShow.OnIntroVideoEnd
	// Flags: [Final|Native|Public]
	// Offset: 0x138ab5c4
	// Params: [ Num(1) Size(0x10) ]
	void OnIntroVideoEnd(struct FString VideoName);

	// Object: Function DFMIrisSeamless.DFMIrisEnterStage_PadShow.OnIntroCutSceneEnd
	// Flags: [Final|Native|Public]
	// Offset: 0x138ab520
	// Params: [ Num(1) Size(0x8) ]
	void OnIntroCutSceneEnd(struct AGPSequenceActor* GPSequenceActor);

	// Object: Function DFMIrisSeamless.DFMIrisEnterStage_PadShow.HelicopterTransportToStartPoint
	// Flags: [Final|Native|Public]
	// Offset: 0x138ab50c
	// Params: [ Num(0) Size(0x0) ]
	void HelicopterTransportToStartPoint();
	DEFINE_UE_CLASS_HELPERS(UDFMIrisEnterStage_PadShow, "DFMIrisEnterStage_PadShow")

};

// Object: Class DFMIrisSeamless.DFMIrisEnterStage_InfoInteract
// Size: 0xD8 (Inherited: 0x40)
struct UDFMIrisEnterStage_InfoInteract : UDFMIrisEnterStageBase
{
	uint8_t Pad_0x40[0x58]; // 0x40(0x58)
	struct AGameState_PVPVE* GameState_PVPVE; // 0x98(0x8)
	uint8_t Pad_0xA0[0x30]; // 0xA0(0x30)
	struct UWeaponSystem* CacheWeaponSys; // 0xD0(0x8)


	// Object: Function DFMIrisSeamless.DFMIrisEnterStage_InfoInteract.WarmUpSequence
	// Flags: [Final|Native|Public]
	// Offset: 0x138abdec
	// Params: [ Num(1) Size(0x1) ]
	uint8_t WarmUpSequence();

	// Object: Function DFMIrisSeamless.DFMIrisEnterStage_InfoInteract.WaitNotifyAbseilTimeout
	// Flags: [Final|Native|Protected]
	// Offset: 0x138abdd8
	// Params: [ Num(0) Size(0x0) ]
	void WaitNotifyAbseilTimeout();

	// Object: Function DFMIrisSeamless.DFMIrisEnterStage_InfoInteract.UpdateMapTgLog
	// Flags: [Final|Native|Protected]
	// Offset: 0x138abd34
	// Params: [ Num(1) Size(0x4) ]
	void UpdateMapTgLog(int32_t OpType);

	// Object: Function DFMIrisSeamless.DFMIrisEnterStage_InfoInteract.StartLevelStreaming
	// Flags: [Final|Native|Public]
	// Offset: 0x138abd20
	// Params: [ Num(0) Size(0x0) ]
	void StartLevelStreaming();

	// Object: Function DFMIrisSeamless.DFMIrisEnterStage_InfoInteract.StartLevelPhysicsLoad
	// Flags: [Final|Native|Public]
	// Offset: 0x138abd0c
	// Params: [ Num(0) Size(0x0) ]
	void StartLevelPhysicsLoad();

	// Object: Function DFMIrisSeamless.DFMIrisEnterStage_InfoInteract.ShowSeamlessEnterTips
	// Flags: [Final|Native|Public]
	// Offset: 0x138abc68
	// Params: [ Num(1) Size(0x1) ]
	void ShowSeamlessEnterTips(uint8_t TipsType);

	// Object: Function DFMIrisSeamless.DFMIrisEnterStage_InfoInteract.ShowHud
	// Flags: [Final|Native|Public]
	// Offset: 0x138abc54
	// Params: [ Num(0) Size(0x0) ]
	void ShowHud();

	// Object: Function DFMIrisSeamless.DFMIrisEnterStage_InfoInteract.ShowHideSeamlessEntryMap
	// Flags: [Final|Native|Public]
	// Offset: 0x138abba8
	// Params: [ Num(1) Size(0x1) ]
	void ShowHideSeamlessEntryMap(uint8_t Show);

	// Object: Function DFMIrisSeamless.DFMIrisEnterStage_InfoInteract.RestLoopSequence
	// Flags: [Final|Native|Public]
	// Offset: 0x138abb94
	// Params: [ Num(0) Size(0x0) ]
	void RestLoopSequence();

	// Object: Function DFMIrisSeamless.DFMIrisEnterStage_InfoInteract.RealSwitchNextStage
	// Flags: [Final|Native|Public]
	// Offset: 0x138abb80
	// Params: [ Num(0) Size(0x0) ]
	void RealSwitchNextStage();

	// Object: Function DFMIrisSeamless.DFMIrisEnterStage_InfoInteract.PlayEndSequence
	// Flags: [Final|Native|Public]
	// Offset: 0x138abb6c
	// Params: [ Num(0) Size(0x0) ]
	void PlayEndSequence();

	// Object: Function DFMIrisSeamless.DFMIrisEnterStage_InfoInteract.OnStartConnectDS
	// Flags: [Final|Native|Public]
	// Offset: 0x138abb58
	// Params: [ Num(0) Size(0x0) ]
	void OnStartConnectDS();

	// Object: Function DFMIrisSeamless.DFMIrisEnterStage_InfoInteract.OnPostConnectDS
	// Flags: [Final|Native|Public]
	// Offset: 0x138abb44
	// Params: [ Num(0) Size(0x0) ]
	void OnPostConnectDS();

	// Object: Function DFMIrisSeamless.DFMIrisEnterStage_InfoInteract.OnLevelStreamingTimeout
	// Flags: [Final|Native|Public]
	// Offset: 0x138abb30
	// Params: [ Num(0) Size(0x0) ]
	void OnLevelStreamingTimeout();

	// Object: Function DFMIrisSeamless.DFMIrisEnterStage_InfoInteract.OnLevelStreamingProgress
	// Flags: [Final|Native|Public]
	// Offset: 0x138aba8c
	// Params: [ Num(1) Size(0x4) ]
	void OnLevelStreamingProgress(int32_t Percent);

	// Object: Function DFMIrisSeamless.DFMIrisEnterStage_InfoInteract.OnLevelPhysicsLoadTimeout
	// Flags: [Final|Native|Public]
	// Offset: 0x138aba78
	// Params: [ Num(0) Size(0x0) ]
	void OnLevelPhysicsLoadTimeout();

	// Object: Function DFMIrisSeamless.DFMIrisEnterStage_InfoInteract.OnLevelPhysicsLoadComplete
	// Flags: [Final|Native|Public]
	// Offset: 0x138ab9d4
	// Params: [ Num(1) Size(0x8) ]
	void OnLevelPhysicsLoadComplete(struct UWorld* World);

	// Object: Function DFMIrisSeamless.DFMIrisEnterStage_InfoInteract.OnInteractComplete
	// Flags: [Final|Native|Public]
	// Offset: 0x138ab9c0
	// Params: [ Num(0) Size(0x0) ]
	void OnInteractComplete();

	// Object: Function DFMIrisSeamless.DFMIrisEnterStage_InfoInteract.OnHUDViewAsyncLoadProgress
	// Flags: [Final|Native|Public]
	// Offset: 0x138ab880
	// Params: [ Num(2) Size(0x18) ]
	void OnHUDViewAsyncLoadProgress(float InProgress, struct TArray<struct FName> BlockGameFlowViewNameArray);

	// Object: Function DFMIrisSeamless.DFMIrisEnterStage_InfoInteract.OnHUDPreloadTimeout
	// Flags: [Final|Native|Public]
	// Offset: 0x138ab86c
	// Params: [ Num(0) Size(0x0) ]
	void OnHUDPreloadTimeout();

	// Object: Function DFMIrisSeamless.DFMIrisEnterStage_InfoInteract.OnDSNotifyAllPlayerReady
	// Flags: [Final|Native|Public]
	// Offset: 0x138ab858
	// Params: [ Num(0) Size(0x0) ]
	void OnDSNotifyAllPlayerReady();

	// Object: Function DFMIrisSeamless.DFMIrisEnterStage_InfoInteract.OnClientReady
	// Flags: [Final|Native|Public]
	// Offset: 0x138ab844
	// Params: [ Num(0) Size(0x0) ]
	void OnClientReady();

	// Object: Function DFMIrisSeamless.DFMIrisEnterStage_InfoInteract.OnCheckPlayerStartSpot
	// Flags: [Final|Native|Public]
	// Offset: 0x138ab7a0
	// Params: [ Num(1) Size(0x8) ]
	void OnCheckPlayerStartSpot(struct APlayerStart* DSPlayerStart);

	// Object: Function DFMIrisSeamless.DFMIrisEnterStage_InfoInteract.HideHud
	// Flags: [Final|Native|Public]
	// Offset: 0x138ab78c
	// Params: [ Num(0) Size(0x0) ]
	void HideHud();

	// Object: Function DFMIrisSeamless.DFMIrisEnterStage_InfoInteract.GetWaitNotifyAbseilTimeoutTime
	// Flags: [Final|Native|Protected|Const]
	// Offset: 0x138ab758
	// Params: [ Num(1) Size(0x4) ]
	float GetWaitNotifyAbseilTimeoutTime();
	DEFINE_UE_CLASS_HELPERS(UDFMIrisEnterStage_InfoInteract, "DFMIrisEnterStage_InfoInteract")

};

// Object: Class DFMIrisSeamless.DFMIrisEnterStage_Abseil
// Size: 0x48 (Inherited: 0x40)
struct UDFMIrisEnterStage_Abseil : UDFMIrisEnterStageBase
{
	uint8_t Pad_0x40[0x8]; // 0x40(0x8)


	// Object: Function DFMIrisSeamless.DFMIrisEnterStage_Abseil.SetAbseilCompletet
	// Flags: [Final|Native|Public]
	// Offset: 0x138abf24
	// Params: [ Num(0) Size(0x0) ]
	void SetAbseilCompletet();

	// Object: Function DFMIrisSeamless.DFMIrisEnterStage_Abseil.ProcessLandingCameraTransition
	// Flags: [Final|Native|Public]
	// Offset: 0x138abf10
	// Params: [ Num(0) Size(0x0) ]
	void ProcessLandingCameraTransition();

	// Object: Function DFMIrisSeamless.DFMIrisEnterStage_Abseil.OnAbseilTimeout
	// Flags: [Final|Native|Public]
	// Offset: 0x138abefc
	// Params: [ Num(0) Size(0x0) ]
	void OnAbseilTimeout();

	// Object: Function DFMIrisSeamless.DFMIrisEnterStage_Abseil.OnAbseilSequenceEnd
	// Flags: [Final|Native|Public]
	// Offset: 0x138abe58
	// Params: [ Num(1) Size(0x8) ]
	void OnAbseilSequenceEnd(struct AGPSequenceActor* GPSequenceActor);

	// Object: Function DFMIrisSeamless.DFMIrisEnterStage_Abseil.ListenToAbseilEnd
	// Flags: [Final|Native|Public]
	// Offset: 0x138abe44
	// Params: [ Num(0) Size(0x0) ]
	void ListenToAbseilEnd();
	DEFINE_UE_CLASS_HELPERS(UDFMIrisEnterStage_Abseil, "DFMIrisEnterStage_Abseil")

};

// Object: Class DFMIrisSeamless.DFMIrisEnterStage_Finish
// Size: 0x40 (Inherited: 0x40)
struct UDFMIrisEnterStage_Finish : UDFMIrisEnterStageBase
{	DEFINE_UE_CLASS_HELPERS(UDFMIrisEnterStage_Finish, "DFMIrisEnterStage_Finish")

};

// Object: Class DFMIrisSeamless.DFMIrisEnterStage_Fail
// Size: 0x40 (Inherited: 0x40)
struct UDFMIrisEnterStage_Fail : UDFMIrisEnterStageBase
{

	// Object: Function DFMIrisSeamless.DFMIrisEnterStage_Fail.TeleportBackSafeHouse
	// Flags: [Final|Native|Public]
	// Offset: 0x138abf74
	// Params: [ Num(0) Size(0x0) ]
	void TeleportBackSafeHouse();

	// Object: Function DFMIrisSeamless.DFMIrisEnterStage_Fail.GameFlowBackSafeHouse
	// Flags: [Final|Native|Public]
	// Offset: 0x138abf60
	// Params: [ Num(0) Size(0x0) ]
	void GameFlowBackSafeHouse();

	// Object: Function DFMIrisSeamless.DFMIrisEnterStage_Fail.BackToLobby
	// Flags: [Final|Native|Public]
	// Offset: 0x138abf4c
	// Params: [ Num(0) Size(0x0) ]
	void BackToLobby();
	DEFINE_UE_CLASS_HELPERS(UDFMIrisEnterStage_Fail, "DFMIrisEnterStage_Fail")

};

// Object: Class DFMIrisSeamless.DFMIrisEnterStage_Reset
// Size: 0x40 (Inherited: 0x40)
struct UDFMIrisEnterStage_Reset : UDFMIrisEnterStageBase
{	DEFINE_UE_CLASS_HELPERS(UDFMIrisEnterStage_Reset, "DFMIrisEnterStage_Reset")

};

// Object: Class DFMIrisSeamless.IntroEventStartPoint
// Size: 0x370 (Inherited: 0x370)
struct AIntroEventStartPoint : AActor
{	DEFINE_UE_CLASS_HELPERS(AIntroEventStartPoint, "IntroEventStartPoint")

};

// Object: Class DFMIrisSeamless.DFMIrisEnterSubsystem
// Size: 0x750 (Inherited: 0x228)
struct UDFMIrisEnterSubsystem : UGPSeamlessEnterSubsystem
{
	uint8_t Pad_0x228[0xB0]; // 0x228(0xB0)
	struct UStartSpotAllocator* StartSpotAllocator; // 0x2D8(0x8)
	struct UDFMIrisEnterStageBase* LastEnterStage; // 0x2E0(0x8)
	struct UDFMIrisEnterStageBase* CurrentEnterStage; // 0x2E8(0x8)
	struct AGPCharacter* TargetCharacter; // 0x2F0(0x8)
	struct ASafeHouseHelicopter* TargetHelicopter; // 0x2F8(0x8)
	struct UDFMIrisEnterComponent* IrisEnterComponent; // 0x300(0x8)
	struct AEnterMovePath* DefaultMovePath; // 0x308(0x8)
	struct AEnterMovePath* StartPointMovePath; // 0x310(0x8)
	struct AIntroEventStartPoint* IntroEventStartPoint; // 0x318(0x8)
	struct AActor* EntryMovieRoot; // 0x320(0x8)
	struct APlayerStart* SafeHousePS; // 0x328(0x8)
	uint8_t SkipSeamlessProcess : 1; // 0x330(0x1), Mask(0x1)
	uint8_t BitPad_0x330_1 : 7; // 0x330(0x1)
	uint8_t NeedIntroEvent : 1; // 0x331(0x1), Mask(0x1)
	uint8_t BitPad_0x331_1 : 7; // 0x331(0x1)
	uint8_t bNeedMandelBrickEvent : 1; // 0x332(0x1), Mask(0x1)
	uint8_t BitPad_0x332_1 : 7; // 0x332(0x1)
	uint8_t bDSReady : 1; // 0x333(0x1), Mask(0x1)
	uint8_t BitPad_0x333_1 : 7; // 0x333(0x1)
	uint8_t bClientReady : 1; // 0x334(0x1), Mask(0x1)
	uint8_t BitPad_0x334_1 : 7; // 0x334(0x1)
	uint8_t bHUDViewReady : 1; // 0x335(0x1), Mask(0x1)
	uint8_t BitPad_0x335_1 : 7; // 0x335(0x1)
	uint8_t bEverythingReadyNotify : 1; // 0x336(0x1), Mask(0x1)
	uint8_t BitPad_0x336_1 : 7; // 0x336(0x1)
	uint8_t EnableMoveFollowPath : 1; // 0x337(0x1), Mask(0x1)
	uint8_t BitPad_0x337_1 : 7; // 0x337(0x1)
	ESeamlessDSConnectState DSConnectState; // 0x338(0x1)
	uint8_t Pad_0x339[0x7]; // 0x339(0x7)
	struct AGPPlayerController* NewGPPC; // 0x340(0x8)
	uint8_t bWaitingIntroVideo : 1; // 0x348(0x1), Mask(0x1)
	uint8_t BitPad_0x348_1 : 7; // 0x348(0x1)
	EIrisEnterStageType LastEnterStageType; // 0x349(0x1)
	uint8_t Pad_0x34A[0x6]; // 0x34A(0x6)
	struct FMulticastInlineDelegate OnSeamlessGetOnHelicopter; // 0x350(0x10)
	struct FMulticastInlineDelegate OnTransportStreamingComplete; // 0x360(0x10)
	struct FMulticastInlineDelegate OnIrisEnterStartConnectDS; // 0x370(0x10)
	struct FMulticastInlineDelegate OnIrisEnterPostConnectDS; // 0x380(0x10)
	struct UObject* GameModeClass; // 0x390(0x8)
	uint8_t Pad_0x398[0x68]; // 0x398(0x68)
	struct AEnterMovePath* RealMovePath; // 0x400(0x8)
	struct AActor* RealTideMoviePoint; // 0x408(0x8)
	uint8_t bEnableHelicopterTiding : 1; // 0x410(0x1), Mask(0x1)
	uint8_t BitPad_0x410_1 : 7; // 0x410(0x1)
	uint8_t Pad_0x411[0xF]; // 0x411(0xF)
	struct FMulticastInlineDelegate OnGameplayConfigLoadCompleteEvent; // 0x420(0x10)
	struct FMulticastInlineDelegate OnSeamlessCoverShow; // 0x430(0x10)
	int32_t SOLIntroEventID; // 0x440(0x4)
	uint8_t Pad_0x444[0x4]; // 0x444(0x4)
	struct FString CutSceneMediaVideoName; // 0x448(0x10)
	int32_t SOLMandelBrickEventID; // 0x458(0x4)
	uint8_t Pad_0x45C[0x4]; // 0x45C(0x4)
	int32_t SOLSpecialWeatherEventID; // 0x460(0x4)
	uint8_t Pad_0x464[0x4]; // 0x464(0x4)
	struct TArray<int32_t> AllSOLEventIDsThisGame; // 0x468(0x10)
	struct ATeamStart* CurrentTeamStart; // 0x478(0x8)
	struct APlayerStart* CurrentPlayerStart; // 0x480(0x8)
	struct ASOLEventIndicator* CurrentSOLEventIndicator; // 0x488(0x8)
	int32_t CurrentPlayedMatchNum; // 0x490(0x4)
	uint8_t bCanUseSeamlessTravelAfterLoadGameplayConfig : 1; // 0x494(0x1), Mask(0x1)
	uint8_t BitPad_0x494_1 : 7; // 0x494(0x1)
	uint8_t bGameplayConfigLoadComplete : 1; // 0x495(0x1), Mask(0x1)
	uint8_t BitPad_0x495_1 : 7; // 0x495(0x1)
	uint8_t IsTutorial : 1; // 0x496(0x1), Mask(0x1)
	uint8_t BitPad_0x496_1 : 7; // 0x496(0x1)
	uint8_t IsAbseilBlack : 1; // 0x497(0x1), Mask(0x1)
	uint8_t BitPad_0x497_1 : 7; // 0x497(0x1)
	uint8_t Pad_0x498[0x10]; // 0x498(0x10)
	int32_t CurrentMapType; // 0x4A8(0x4)
	uint8_t Pad_0x4AC[0x4]; // 0x4AC(0x4)
	struct UUIClipMapTexture* MapBaseAsset; // 0x4B0(0x8)
	struct UTexture2D* EdgeMaskMapTexture; // 0x4B8(0x8)
	struct TArray<struct UObject*> CacheIcons; // 0x4C0(0x10)
	struct FString CurLoadingMapName; // 0x4D0(0x10)
	struct FSeamlessEntryProgress SeamlessEntryProgress; // 0x4E0(0x14)
	uint8_t Pad_0x4F4[0x1C]; // 0x4F4(0x1C)
	struct FDFMMapSignMapExtraSync TeamMateMapSignInfos; // 0x510(0x50)
	struct TMap<uint64_t, struct AGPPlayerState*> TeamMateFakePlayerStates; // 0x560(0x50)
	struct FDFMMapSignInfo LocalMapSignInfo; // 0x5B0(0x38)
	struct FMandelBrickSeamlessMapStruct MandelBrickSeamlessMapStruct; // 0x5E8(0x70)
	int32_t SelectedGeneratorId; // 0x658(0x4)
	uint8_t Pad_0x65C[0x4]; // 0x65C(0x4)
	struct TArray<struct FSOLQuest> SOLQuestArray; // 0x660(0x10)
	struct TArray<struct FSOLQuest> SOLActivityQuestArray; // 0x670(0x10)
	struct TArray<struct FName> SOLItemIDArray; // 0x680(0x10)
	uint8_t Pad_0x690[0x10]; // 0x690(0x10)
	struct FName DefaultAvatarId; // 0x6A0(0x8)
	struct AHallCharacterBase* SelfHallCharacter; // 0x6A8(0x8)
	struct TArray<struct AHallCharacterBase*> TeammateHallCharacters; // 0x6B0(0x10)
	struct FName SelfHallCharacterSuitID; // 0x6C0(0x8)
	struct TArray<struct FName> TeammateHallCharacterSuitIDs; // 0x6C8(0x10)
	struct TMap<int64_t, struct FSeamlessEntryCharacterAppearanceData> CharacterAppearanceData; // 0x6D8(0x50)
	struct FTrialsSeamlessInfo TrialsSeamlessInfo; // 0x728(0x18)
	uint8_t Pad_0x740[0x10]; // 0x740(0x10)


	// Object: Function DFMIrisSeamless.DFMIrisEnterSubsystem.WarmUpSequenceAndAudio
	// Flags: [Final|Native|Public]
	// Offset: 0x138aff98
	// Params: [ Num(0) Size(0x0) ]
	void WarmUpSequenceAndAudio();

	// Object: Function DFMIrisSeamless.DFMIrisEnterSubsystem.UpdateHelicopterAlongSpline
	// Flags: [Final|Native|Public]
	// Offset: 0x138afef4
	// Params: [ Num(1) Size(0x4) ]
	void UpdateHelicopterAlongSpline(float DeltaTime);

	// Object: Function DFMIrisSeamless.DFMIrisEnterSubsystem.UpdateEnterStage2Server
	// Flags: [Final|Native|Public]
	// Offset: 0x138afe50
	// Params: [ Num(1) Size(0x4) ]
	void UpdateEnterStage2Server(int32_t OpType);

	// Object: Function DFMIrisSeamless.DFMIrisEnterSubsystem.UnloadLightingLevels
	// Flags: [Final|Native|Public]
	// Offset: 0x138afe3c
	// Params: [ Num(0) Size(0x0) ]
	void UnloadLightingLevels();

	// Object: Function DFMIrisSeamless.DFMIrisEnterSubsystem.TrySwitchNextStage
	// Flags: [Final|Native|Public|Const]
	// Offset: 0x138afe04
	// Params: [ Num(1) Size(0x1) ]
	uint8_t TrySwitchNextStage();

	// Object: Function DFMIrisSeamless.DFMIrisEnterSubsystem.TryConnectDS
	// Flags: [Final|Native|Public]
	// Offset: 0x138afdf0
	// Params: [ Num(0) Size(0x0) ]
	void TryConnectDS();

	// Object: Function DFMIrisSeamless.DFMIrisEnterSubsystem.TransportStreamingTimeout
	// Flags: [Final|Native|Public]
	// Offset: 0x138afddc
	// Params: [ Num(0) Size(0x0) ]
	void TransportStreamingTimeout();

	// Object: Function DFMIrisSeamless.DFMIrisEnterSubsystem.TransportHelicopterToFlyPoint
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x138afcfc
	// Params: [ Num(2) Size(0x14) ]
	void TransportHelicopterToFlyPoint(struct AActor* Helicopter, struct FVector Location);

	// Object: Function DFMIrisSeamless.DFMIrisEnterSubsystem.ToggleHelicopterTiding
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x138afc50
	// Params: [ Num(1) Size(0x1) ]
	void ToggleHelicopterTiding(uint8_t Enable);

	// Object: Function DFMIrisSeamless.DFMIrisEnterSubsystem.SwitchToGetOnStage
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x138afc3c
	// Params: [ Num(0) Size(0x0) ]
	void SwitchToGetOnStage();

	// Object: Function DFMIrisSeamless.DFMIrisEnterSubsystem.SwitchToEnterStage
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x138afb98
	// Params: [ Num(1) Size(0x1) ]
	void SwitchToEnterStage(EIrisEnterStageType NewStageType);

	// Object: Function DFMIrisSeamless.DFMIrisEnterSubsystem.StartListenTODActorLoad
	// Flags: [Final|Native|Public]
	// Offset: 0x138afb84
	// Params: [ Num(0) Size(0x0) ]
	void StartListenTODActorLoad();

	// Object: Function DFMIrisSeamless.DFMIrisEnterSubsystem.StartHelicopterSplineMovement
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x138afb70
	// Params: [ Num(0) Size(0x0) ]
	void StartHelicopterSplineMovement();

	// Object: Function DFMIrisSeamless.DFMIrisEnterSubsystem.StartFocusLevelStreaming
	// Flags: [Final|Native|Public]
	// Offset: 0x138afb5c
	// Params: [ Num(0) Size(0x0) ]
	void StartFocusLevelStreaming();

	// Object: Function DFMIrisSeamless.DFMIrisEnterSubsystem.ShowOrHideSeamlessStateHUD
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x138afab0
	// Params: [ Num(1) Size(0x1) ]
	void ShowOrHideSeamlessStateHUD(uint8_t ShowOrHide);

	// Object: Function DFMIrisSeamless.DFMIrisEnterSubsystem.ShowHud
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x138af9fc
	// Params: [ Num(1) Size(0x8) ]
	void ShowHud(const struct FName& HudName);

	// Object: Function DFMIrisSeamless.DFMIrisEnterSubsystem.ShowHideHUDPanel
	// Flags: [Final|Native|Public]
	// Offset: 0x138af914
	// Params: [ Num(2) Size(0x9) ]
	void ShowHideHUDPanel(struct FName Name, uint8_t ShowOrHide);

	// Object: Function DFMIrisSeamless.DFMIrisEnterSubsystem.ShowBlackScreen
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x138af870
	// Params: [ Num(1) Size(0x4) ]
	void ShowBlackScreen(float FadeTime);

	// Object: Function DFMIrisSeamless.DFMIrisEnterSubsystem.ShowAndHideBlackScreen
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x138af758
	// Params: [ Num(3) Size(0xC) ]
	void ShowAndHideBlackScreen(float FadeInTime, float ShowTime, float FadeOutTime);

	// Object: Function DFMIrisSeamless.DFMIrisEnterSubsystem.SetTrialsSeamlessInfo
	// Flags: [Final|Native|Public|HasOutParms]
	// Offset: 0x138af698
	// Params: [ Num(1) Size(0x18) ]
	void SetTrialsSeamlessInfo(const struct FTrialsSeamlessInfo& Info);

	// Object: Function DFMIrisSeamless.DFMIrisEnterSubsystem.SetSelfFashionSuitID
	// Flags: [Final|Native|Public]
	// Offset: 0x1070aaa4
	// Params: [ Num(1) Size(0x8) ]
	void SetSelfFashionSuitID(struct FName SuitId);

	// Object: Function DFMIrisSeamless.DFMIrisEnterSubsystem.SetRTCVar
	// Flags: [Final|Native|Public]
	// Offset: 0x138af5f4
	// Params: [ Num(1) Size(0x4) ]
	void SetRTCVar(int32_t Value);

	// Object: Function DFMIrisSeamless.DFMIrisEnterSubsystem.SetRealMoviePoint
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x138af550
	// Params: [ Num(1) Size(0x8) ]
	void SetRealMoviePoint(struct AActor* MovieRootPoint);

	// Object: Function DFMIrisSeamless.DFMIrisEnterSubsystem.SetEquipmentData
	// Flags: [Final|Native|Public]
	// Offset: 0xfdccb70
	// Params: [ Num(2) Size(0x10) ]
	void SetEquipmentData(int64_t PlayerId, struct FName ItemID);

	// Object: Function DFMIrisSeamless.DFMIrisEnterSubsystem.SetCurLoadingMapName
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x138af45c
	// Params: [ Num(1) Size(0x10) ]
	void SetCurLoadingMapName(struct FString MapName);

	// Object: Function DFMIrisSeamless.DFMIrisEnterSubsystem.SeamlessCoverShow
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x138af448
	// Params: [ Num(0) Size(0x0) ]
	void SeamlessCoverShow();

	// Object: Function DFMIrisSeamless.DFMIrisEnterSubsystem.ResetSeamlessEnter
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x138af434
	// Params: [ Num(0) Size(0x0) ]
	void ResetSeamlessEnter();

	// Object: Function DFMIrisSeamless.DFMIrisEnterSubsystem.RequestSubtitle
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x138af344
	// Params: [ Num(2) Size(0x9) ]
	void RequestSubtitle(const struct FName& SubtitleId, ESubtitleSequenceType SubtitleSeqType);

	// Object: Function DFMIrisSeamless.DFMIrisEnterSubsystem.ReadyToConnectDS
	// Flags: [Final|Native|Public]
	// Offset: 0x138af330
	// Params: [ Num(0) Size(0x0) ]
	void ReadyToConnectDS();

	// Object: Function DFMIrisSeamless.DFMIrisEnterSubsystem.PseudoOnEnterStageChanged
	// Flags: [Final|Native|Public]
	// Offset: 0x138af250
	// Params: [ Num(2) Size(0x2) ]
	void PseudoOnEnterStageChanged(uint8_t NewStageType, uint8_t OldStageType);

	// Object: Function DFMIrisSeamless.DFMIrisEnterSubsystem.PseudoGameplaySwitchPadShow
	// Flags: [Final|Native|Public]
	// Offset: 0x138af23c
	// Params: [ Num(0) Size(0x0) ]
	void PseudoGameplaySwitchPadShow();

	// Object: Function DFMIrisSeamless.DFMIrisEnterSubsystem.PseudoGameplayConfigLoadComplete
	// Flags: [Final|Native|Public]
	// Offset: 0x138af228
	// Params: [ Num(0) Size(0x0) ]
	void PseudoGameplayConfigLoadComplete();

	// Object: Function DFMIrisSeamless.DFMIrisEnterSubsystem.ProtectLobbyToGameTimeout
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x138af140
	// Params: [ Num(2) Size(0x5) ]
	void ProtectLobbyToGameTimeout(float TimeLimit, uint8_t OnlyClear);

	// Object: Function DFMIrisSeamless.DFMIrisEnterSubsystem.ProtectInSafeHouseStageTimeout
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x138af058
	// Params: [ Num(2) Size(0x5) ]
	void ProtectInSafeHouseStageTimeout(float TimeLimit, uint8_t OnlyClear);

	// Object: Function DFMIrisSeamless.DFMIrisEnterSubsystem.ProtectInGameTimeout
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x138aef70
	// Params: [ Num(2) Size(0x5) ]
	void ProtectInGameTimeout(float TimeLimit, uint8_t OnlyClear);

	// Object: Function DFMIrisSeamless.DFMIrisEnterSubsystem.ProcessInDoorStart
	// Flags: [Final|Native|Public]
	// Offset: 0x138aeec4
	// Params: [ Num(1) Size(0x1) ]
	void ProcessInDoorStart(uint8_t bForceIndoor);

	// Object: Function DFMIrisSeamless.DFMIrisEnterSubsystem.PrepareProxyHallCharacter
	// Flags: [Final|Native|Public]
	// Offset: 0x138aeeb0
	// Params: [ Num(0) Size(0x0) ]
	void PrepareProxyHallCharacter();

	// Object: Function DFMIrisSeamless.DFMIrisEnterSubsystem.OnTODActorLoad
	// Flags: [Final|Native|Public]
	// Offset: 0x138aee0c
	// Params: [ Num(1) Size(0x8) ]
	void OnTODActorLoad(struct AActor* TODActor);

	// Object: Function DFMIrisSeamless.DFMIrisEnterSubsystem.OnStreamingLoadingPercentage
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x138aed68
	// Params: [ Num(1) Size(0x4) ]
	void OnStreamingLoadingPercentage(int32_t Percentage);

	// Object: Function DFMIrisSeamless.DFMIrisEnterSubsystem.OnSeamlessVideoEnd
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x138aec70
	// Params: [ Num(1) Size(0x10) ]
	void OnSeamlessVideoEnd(struct FString Name);

	// Object: Function DFMIrisSeamless.DFMIrisEnterSubsystem.OnSeamlessTravelEnd
	// Flags: [Final|Native|Public]
	// Offset: 0x138aebc4
	// Params: [ Num(1) Size(0x1) ]
	void OnSeamlessTravelEnd(uint8_t bReconnect);

	// Object: Function DFMIrisSeamless.DFMIrisEnterSubsystem.OnSeamlessReset
	// Flags: [Final|Native|Public]
	// Offset: 0x138aebb0
	// Params: [ Num(0) Size(0x0) ]
	void OnSeamlessReset();

	// Object: Function DFMIrisSeamless.DFMIrisEnterSubsystem.OnProxyCharacterSetupMeshEvent
	// Flags: [Final|Native|Public]
	// Offset: 0x138aead4
	// Params: [ Num(2) Size(0x10) ]
	void OnProxyCharacterSetupMeshEvent(struct FName ItemID, struct UMeshComponent* Comp);

	// Object: Function DFMIrisSeamless.DFMIrisEnterSubsystem.OnPostEnterGameFlow
	// Flags: [Final|Native|Public]
	// Offset: 0xfa926b4
	// Params: [ Num(1) Size(0x1) ]
	void OnPostEnterGameFlow(EGameFlowStageType InGameFlowStage);

	// Object: Function DFMIrisSeamless.DFMIrisEnterSubsystem.OnPostConnectDS
	// Flags: [Final|Native|Public]
	// Offset: 0x138aea30
	// Params: [ Num(1) Size(0x8) ]
	void OnPostConnectDS(struct UNetConnection* NetConnection);

	// Object: Function DFMIrisSeamless.DFMIrisEnterSubsystem.OnNetDisconnectInSeamless
	// Flags: [Final|Native|Public]
	// Offset: 0x138ae918
	// Params: [ Num(3) Size(0x11) ]
	void OnNetDisconnectInSeamless(struct UWorld* World, struct UNetDriver* NetDriver, ENetworkFailure FailureType);

	// Object: Function DFMIrisSeamless.DFMIrisEnterSubsystem.OnLobbyToGameTimeout
	// Flags: [Final|Native|Public]
	// Offset: 0x138ae904
	// Params: [ Num(0) Size(0x0) ]
	void OnLobbyToGameTimeout();

	// Object: Function DFMIrisSeamless.DFMIrisEnterSubsystem.OnLightingLevelLoadComplete
	// Flags: [Final|Native|Public]
	// Offset: 0x138ae8f0
	// Params: [ Num(0) Size(0x0) ]
	void OnLightingLevelLoadComplete();

	// Object: Function DFMIrisSeamless.DFMIrisEnterSubsystem.OnInSafeHouseStageTimeout
	// Flags: [Final|Native|Public]
	// Offset: 0x138ae8dc
	// Params: [ Num(0) Size(0x0) ]
	void OnInSafeHouseStageTimeout();

	// Object: Function DFMIrisSeamless.DFMIrisEnterSubsystem.OnInGameTimeout
	// Flags: [Final|Native|Public]
	// Offset: 0x138ae8c8
	// Params: [ Num(0) Size(0x0) ]
	void OnInGameTimeout();

	// Object: Function DFMIrisSeamless.DFMIrisEnterSubsystem.OnGameplayConfigLoadComplete
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x138ae8b4
	// Params: [ Num(0) Size(0x0) ]
	void OnGameplayConfigLoadComplete();

	// Object: Function DFMIrisSeamless.DFMIrisEnterSubsystem.OnAsyncMapBaseAssetLoad
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults]
	// Offset: 0x138ae7f4
	// Params: [ Num(1) Size(0x18) ]
	void OnAsyncMapBaseAssetLoad(const struct FSoftObjectPath& Path);

	// Object: Function DFMIrisSeamless.DFMIrisEnterSubsystem.OnAsyncLoadEdgeMaskMapTexture
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults]
	// Offset: 0x138ae734
	// Params: [ Num(1) Size(0x18) ]
	void OnAsyncLoadEdgeMaskMapTexture(const struct FSoftObjectPath& Path);

	// Object: Function DFMIrisSeamless.DFMIrisEnterSubsystem.NotifyEverythingReady
	// Flags: [Final|Native|Public]
	// Offset: 0x138ae720
	// Params: [ Num(0) Size(0x0) ]
	void NotifyEverythingReady();

	// Object: Function DFMIrisSeamless.DFMIrisEnterSubsystem.MakeSureRealMovePath
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x138ae70c
	// Params: [ Num(0) Size(0x0) ]
	void MakeSureRealMovePath();

	// Object: Function DFMIrisSeamless.DFMIrisEnterSubsystem.LuaAddSOLQuest
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xe8435e0
	// Params: [ Num(1) Size(0x10) ]
	void LuaAddSOLQuest(struct TArray<struct FSOLQuest> QuestArr);

	// Object: Function DFMIrisSeamless.DFMIrisEnterSubsystem.LuaAddItemID
	// Flags: [Final|Native|Public]
	// Offset: 0xf696520
	// Params: [ Num(1) Size(0x8) ]
	void LuaAddItemID(uint64_t ItemID);

	// Object: Function DFMIrisSeamless.DFMIrisEnterSubsystem.LuaAddActivityQuest
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xf295060
	// Params: [ Num(1) Size(0x10) ]
	void LuaAddActivityQuest(struct TArray<struct FSOLQuestObjection> ActivityQuestObjectionArr);

	// Object: Function DFMIrisSeamless.DFMIrisEnterSubsystem.LoadLightingLevels
	// Flags: [Final|Native|Public]
	// Offset: 0x138ae6f8
	// Params: [ Num(0) Size(0x0) ]
	void LoadLightingLevels();

	// Object: Function DFMIrisSeamless.DFMIrisEnterSubsystem.LoadGameplayConfigLevel
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x138ae64c
	// Params: [ Num(1) Size(0x10) ]
	void LoadGameplayConfigLevel(struct FString MapName);

	// Object: Function DFMIrisSeamless.DFMIrisEnterSubsystem.ListenRTCVarChange
	// Flags: [Final|Native|Public]
	// Offset: 0x138ae5a0
	// Params: [ Num(1) Size(0x1) ]
	void ListenRTCVarChange(uint8_t Enable);

	// Object: Function DFMIrisSeamless.DFMIrisEnterSubsystem.ListenNetDisconnect
	// Flags: [Final|Native|Public]
	// Offset: 0x138ae4f4
	// Params: [ Num(1) Size(0x1) ]
	void ListenNetDisconnect(uint8_t Enable);

	// Object: Function DFMIrisSeamless.DFMIrisEnterSubsystem.IsSeamlessEnterValid
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x138ae4bc
	// Params: [ Num(1) Size(0x1) ]
	uint8_t IsSeamlessEnterValid();

	// Object: Function DFMIrisSeamless.DFMIrisEnterSubsystem.IsInGuide
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x138ae484
	// Params: [ Num(1) Size(0x1) ]
	uint8_t IsInGuide();

	// Object: Function DFMIrisSeamless.DFMIrisEnterSubsystem.IsFirstSequenceReady
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x138ae44c
	// Params: [ Num(1) Size(0x1) ]
	uint8_t IsFirstSequenceReady();

	// Object: Function DFMIrisSeamless.DFMIrisEnterSubsystem.IsConnectDSIgnoreClientReady
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x138ae414
	// Params: [ Num(1) Size(0x1) ]
	static uint8_t IsConnectDSIgnoreClientReady();

	// Object: Function DFMIrisSeamless.DFMIrisEnterSubsystem.InitStartSpotAllocator
	// Flags: [Final|Native|Public]
	// Offset: 0x138ae400
	// Params: [ Num(0) Size(0x0) ]
	void InitStartSpotAllocator();

	// Object: Function DFMIrisSeamless.DFMIrisEnterSubsystem.InitIrisSeamlessEnter
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x138ae3ec
	// Params: [ Num(0) Size(0x0) ]
	void InitIrisSeamlessEnter();

	// Object: Function DFMIrisSeamless.DFMIrisEnterSubsystem.HideSelfCharacterHeadMesh
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x138ae3d8
	// Params: [ Num(0) Size(0x0) ]
	void HideSelfCharacterHeadMesh();

	// Object: Function DFMIrisSeamless.DFMIrisEnterSubsystem.HideHud
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x138ae324
	// Params: [ Num(1) Size(0x8) ]
	void HideHud(const struct FName& HudName);

	// Object: Function DFMIrisSeamless.DFMIrisEnterSubsystem.HideBlackScreen
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x138ae280
	// Params: [ Num(1) Size(0x4) ]
	void HideBlackScreen(float FadeTime);

	// Object: Function DFMIrisSeamless.DFMIrisEnterSubsystem.GMPseudoSeamlessEntryStart
	// Flags: [Final|Native|Public]
	// Offset: 0x138ae114
	// Params: [ Num(3) Size(0x18) ]
	void GMPseudoSeamlessEntryStart(struct FString MapName, int32_t TeamStartId, int32_t extra);

	// Object: Function DFMIrisSeamless.DFMIrisEnterSubsystem.GetWaitTime
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x138ae0e0
	// Params: [ Num(1) Size(0x4) ]
	float GetWaitTime();

	// Object: Function DFMIrisSeamless.DFMIrisEnterSubsystem.GetTeamIndexByUin
	// Flags: [Final|Native|Public]
	// Offset: 0x138ae034
	// Params: [ Num(2) Size(0xC) ]
	int32_t GetTeamIndexByUin(uint64_t Uin);

	// Object: Function DFMIrisSeamless.DFMIrisEnterSubsystem.GetStartLocAndRotFromMovieRoot
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults|Const]
	// Offset: 0x138adf28
	// Params: [ Num(3) Size(0x19) ]
	uint8_t GetStartLocAndRotFromMovieRoot(struct FVector& OutLoc, struct FRotator& OutRot);

	// Object: Function DFMIrisSeamless.DFMIrisEnterSubsystem.GetStartLocAndRotFromMovePath
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults|Const]
	// Offset: 0x138ade1c
	// Params: [ Num(3) Size(0x19) ]
	uint8_t GetStartLocAndRotFromMovePath(struct FVector& OutLoc, struct FRotator& OutRot);

	// Object: Function DFMIrisSeamless.DFMIrisEnterSubsystem.GetSortValue
	// Flags: [Final|Native|Public|HasOutParms]
	// Offset: 0x138adca4
	// Params: [ Num(2) Size(0x94) ]
	int32_t GetSortValue(const struct FSOLQuest& Quest);

	// Object: Function DFMIrisSeamless.DFMIrisEnterSubsystem.GetSOLSpecialWeatherEventID
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xf84ef84
	// Params: [ Num(1) Size(0x4) ]
	int32_t GetSOLSpecialWeatherEventID();

	// Object: Function DFMIrisSeamless.DFMIrisEnterSubsystem.GetMovePath
	// Flags: [Final|Native|Public|Const]
	// Offset: 0x138adc70
	// Params: [ Num(1) Size(0x8) ]
	struct AEnterMovePath* GetMovePath();

	// Object: Function DFMIrisSeamless.DFMIrisEnterSubsystem.GetForceSimplestSeamless
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x138adc38
	// Params: [ Num(1) Size(0x1) ]
	uint8_t GetForceSimplestSeamless();

	// Object: Function DFMIrisSeamless.DFMIrisEnterSubsystem.GetCutSceneMediaVideoName
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x138adba0
	// Params: [ Num(1) Size(0x10) ]
	struct FString GetCutSceneMediaVideoName();

	// Object: Function DFMIrisSeamless.DFMIrisEnterSubsystem.GetCurrentSeamlessMatchType
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x138adb6c
	// Params: [ Num(1) Size(0x1) ]
	ESeamlessEntryMatchType GetCurrentSeamlessMatchType();

	// Object: Function DFMIrisSeamless.DFMIrisEnterSubsystem.GetCurrentEnterStageType
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x138adb38
	// Params: [ Num(1) Size(0x1) ]
	EIrisEnterStageType GetCurrentEnterStageType();

	// Object: Function DFMIrisSeamless.DFMIrisEnterSubsystem.GetCurLoadingMapName
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x138ada6c
	// Params: [ Num(1) Size(0x10) ]
	struct FString GetCurLoadingMapName();

	// Object: Function DFMIrisSeamless.DFMIrisEnterSubsystem.Get
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0xf34b43c
	// Params: [ Num(2) Size(0x10) ]
	static struct UDFMIrisEnterSubsystem* Get(struct UObject* WorldContext);

	// Object: Function DFMIrisSeamless.DFMIrisEnterSubsystem.ForceStopSeamlessEnter
	// Flags: [Final|Native|Public]
	// Offset: 0x138ada34
	// Params: [ Num(1) Size(0x1) ]
	uint8_t ForceStopSeamlessEnter();

	// Object: Function DFMIrisSeamless.DFMIrisEnterSubsystem.EnableStreamingPoolSizeAdjust
	// Flags: [Final|Native|Public]
	// Offset: 0x138ad988
	// Params: [ Num(1) Size(0x1) ]
	void EnableStreamingPoolSizeAdjust(uint8_t bIncrease);

	// Object: Function DFMIrisSeamless.DFMIrisEnterSubsystem.EnableProxyCharacterMeshLock
	// Flags: [Final|Native|Public]
	// Offset: 0x138ad8dc
	// Params: [ Num(1) Size(0x1) ]
	void EnableProxyCharacterMeshLock(uint8_t bEnable);

	// Object: Function DFMIrisSeamless.DFMIrisEnterSubsystem.DelaySwitchToEnterStage
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x138ad7fc
	// Params: [ Num(2) Size(0x8) ]
	void DelaySwitchToEnterStage(EIrisEnterStageType NewStageType, float DelayTime);

	// Object: Function DFMIrisSeamless.DFMIrisEnterSubsystem.DelayShowSeamlessAnim
	// Flags: [Final|Native|Public]
	// Offset: 0x138ad7e8
	// Params: [ Num(0) Size(0x0) ]
	void DelayShowSeamlessAnim();

	// Object: Function DFMIrisSeamless.DFMIrisEnterSubsystem.CollectSeamlessEnterObject
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x138ad7b0
	// Params: [ Num(1) Size(0x1) ]
	uint8_t CollectSeamlessEnterObject();

	// Object: Function DFMIrisSeamless.DFMIrisEnterSubsystem.CheckNeedMandelBrickEvent
	// Flags: [Final|Native|Public|Const]
	// Offset: 0x138ad778
	// Params: [ Num(1) Size(0x1) ]
	uint8_t CheckNeedMandelBrickEvent();

	// Object: Function DFMIrisSeamless.DFMIrisEnterSubsystem.CheckNeedIntroEvent
	// Flags: [Final|Native|Public|Const]
	// Offset: 0x138ad740
	// Params: [ Num(1) Size(0x1) ]
	uint8_t CheckNeedIntroEvent();

	// Object: Function DFMIrisSeamless.DFMIrisEnterSubsystem.CharacterGetOnHelicopter
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x138ad708
	// Params: [ Num(1) Size(0x1) ]
	uint8_t CharacterGetOnHelicopter();

	// Object: Function DFMIrisSeamless.DFMIrisEnterSubsystem.ChangeLevelTOD
	// Flags: [Final|Native|Public]
	// Offset: 0x138ad610
	// Params: [ Num(1) Size(0x10) ]
	void ChangeLevelTOD(struct FString LevelName);

	// Object: Function DFMIrisSeamless.DFMIrisEnterSubsystem.AsyncLoadMapBaseAsset
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x138ad5fc
	// Params: [ Num(0) Size(0x0) ]
	void AsyncLoadMapBaseAsset();

	// Object: Function DFMIrisSeamless.DFMIrisEnterSubsystem.AdjustSplineToPlayerStart
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x138ad5e8
	// Params: [ Num(0) Size(0x0) ]
	void AdjustSplineToPlayerStart();

	// Object: Function DFMIrisSeamless.DFMIrisEnterSubsystem.AddTeammatesFashionSuitID
	// Flags: [Final|Native|Public]
	// Offset: 0x138ad544
	// Params: [ Num(1) Size(0x8) ]
	void AddTeammatesFashionSuitID(struct FName SuitId);

	// Object: Function DFMIrisSeamless.DFMIrisEnterSubsystem.AddOrRemoveHUDState
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x138ad44c
	// Params: [ Num(2) Size(0x9) ]
	void AddOrRemoveHUDState(const struct FName& HUDStateName, uint8_t AddOrRemove);
	DEFINE_UE_CLASS_HELPERS(UDFMIrisEnterSubsystem, "DFMIrisEnterSubsystem")

};

// Object: Class DFMIrisSeamless.DFMIrisEnterUtils
// Size: 0x28 (Inherited: 0x28)
struct UDFMIrisEnterUtils : UBlueprintFunctionLibrary
{

	// Object: Function DFMIrisSeamless.DFMIrisEnterUtils.ReloadMap
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x138b1a50
	// Params: [ Num(1) Size(0x8) ]
	static void ReloadMap(struct UObject* WorldContext);

	// Object: Function DFMIrisSeamless.DFMIrisEnterUtils.LaunchDS
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x138b1920
	// Params: [ Num(2) Size(0x18) ]
	static void LaunchDS(struct UObject* WorldContext, struct FString DSPort);

	// Object: Function DFMIrisSeamless.DFMIrisEnterUtils.GetDFMQuestSystem
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x138b187c
	// Params: [ Num(2) Size(0x10) ]
	static struct UDFMQuestSystem* GetDFMQuestSystem(struct UObject* WorldContextObject);
	DEFINE_UE_CLASS_HELPERS(UDFMIrisEnterUtils, "DFMIrisEnterUtils")

};

// Object: Class DFMIrisSeamless.QA_ClientSeamlessTravelStatusListener
// Size: 0xB8 (Inherited: 0x38)
struct UQA_ClientSeamlessTravelStatusListener : UGPQuestActionAsyncReturnActionBase
{
	struct FMulticastInlineDelegate OnClientSeamlessTravelStatusChangeDelegate; // 0x38(0x10)
	struct AGPQuestActionContext* QAContext; // 0x48(0x8)
	uint8_t Pad_0x50[0x68]; // 0x50(0x68)


	// Object: Function DFMIrisSeamless.QA_ClientSeamlessTravelStatusListener.UnListenClientSeamlessTravelStatus
	// Flags: [Final|Native|Public]
	// Offset: 0x138b31a8
	// Params: [ Num(0) Size(0x0) ]
	void UnListenClientSeamlessTravelStatus();

	// Object: Function DFMIrisSeamless.QA_ClientSeamlessTravelStatusListener.QA_ClientSeamlessTravelStatusListener
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x138b30c8
	// Params: [ Num(3) Size(0x18) ]
	static struct UQA_ClientSeamlessTravelStatusListener* QA_ClientSeamlessTravelStatusListener(struct AGPQuestActionContext* InQAContext, EClientSeamlessTravelStatus ListenStatus);

	// Object: Function DFMIrisSeamless.QA_ClientSeamlessTravelStatusListener.OnSwitchClientPlayer
	// Flags: [Final|Native|Public]
	// Offset: 0x138b3024
	// Params: [ Num(1) Size(0x8) ]
	void OnSwitchClientPlayer(struct UObject* Player);

	// Object: Function DFMIrisSeamless.QA_ClientSeamlessTravelStatusListener.OnSeamlessStageEnter
	// Flags: [Final|Native|Public]
	// Offset: 0x138b2f80
	// Params: [ Num(1) Size(0x1) ]
	void OnSeamlessStageEnter(ESeamlessStage Stage);

	// Object: Function DFMIrisSeamless.QA_ClientSeamlessTravelStatusListener.OnPreStandaloneInitialize
	// Flags: [Final|Native|Public]
	// Offset: 0x138b2f6c
	// Params: [ Num(0) Size(0x0) ]
	void OnPreStandaloneInitialize();

	// Object: Function DFMIrisSeamless.QA_ClientSeamlessTravelStatusListener.OnPreConnectDS
	// Flags: [Final|Native|Public]
	// Offset: 0x138b2f58
	// Params: [ Num(0) Size(0x0) ]
	void OnPreConnectDS();

	// Object: Function DFMIrisSeamless.QA_ClientSeamlessTravelStatusListener.OnPreCleanupDynamicObjects
	// Flags: [Final|Native|Public]
	// Offset: 0x138b2f44
	// Params: [ Num(0) Size(0x0) ]
	void OnPreCleanupDynamicObjects();

	// Object: Function DFMIrisSeamless.QA_ClientSeamlessTravelStatusListener.OnPostStandaloneInitialize
	// Flags: [Final|Native|Public]
	// Offset: 0x138b2f30
	// Params: [ Num(0) Size(0x0) ]
	void OnPostStandaloneInitialize();

	// Object: Function DFMIrisSeamless.QA_ClientSeamlessTravelStatusListener.OnPostConnectDS
	// Flags: [Final|Native|Public]
	// Offset: 0x138b2e8c
	// Params: [ Num(1) Size(0x8) ]
	void OnPostConnectDS(struct UNetConnection* Connection);

	// Object: Function DFMIrisSeamless.QA_ClientSeamlessTravelStatusListener.OnPostCleanupDynamicObjects
	// Flags: [Final|Native|Public]
	// Offset: 0x138b2e78
	// Params: [ Num(0) Size(0x0) ]
	void OnPostCleanupDynamicObjects();

	// Object: Function DFMIrisSeamless.QA_ClientSeamlessTravelStatusListener.OnNetDriverShutdown
	// Flags: [Final|Native|Public]
	// Offset: 0x138b2dd4
	// Params: [ Num(1) Size(0x8) ]
	void OnNetDriverShutdown(struct UNetDriver* NetDriver);

	// Object: Function DFMIrisSeamless.QA_ClientSeamlessTravelStatusListener.OnClientSeamlessTravelEnd
	// Flags: [Final|Native|Public]
	// Offset: 0x138b2d28
	// Params: [ Num(1) Size(0x1) ]
	void OnClientSeamlessTravelEnd(uint8_t bReconnect);

	// Object: Function DFMIrisSeamless.QA_ClientSeamlessTravelStatusListener.OnClientSeamlessTravelBegin
	// Flags: [Final|Native|Public]
	// Offset: 0x138b2c7c
	// Params: [ Num(1) Size(0x1) ]
	void OnClientSeamlessTravelBegin(uint8_t bReconnect);

	// Object: Function DFMIrisSeamless.QA_ClientSeamlessTravelStatusListener.OnClientCreateNewPlayerController
	// Flags: [Final|Native|Public]
	// Offset: 0x138b2bd8
	// Params: [ Num(1) Size(0x8) ]
	void OnClientCreateNewPlayerController(struct APlayerController* PlayerController);

	// Object: Function DFMIrisSeamless.QA_ClientSeamlessTravelStatusListener.ListenClientSeamlessTravelStatus
	// Flags: [Final|Native|Public]
	// Offset: 0x138b2bc4
	// Params: [ Num(0) Size(0x0) ]
	void ListenClientSeamlessTravelStatus();

	// Object: Function DFMIrisSeamless.QA_ClientSeamlessTravelStatusListener.ClientSeamlessTravelStatusChange
	// Flags: [Final|Native|Public]
	// Offset: 0x138b2b20
	// Params: [ Num(1) Size(0x8) ]
	void ClientSeamlessTravelStatusChange(struct UObject* Object);
	DEFINE_UE_CLASS_HELPERS(UQA_ClientSeamlessTravelStatusListener, "QA_ClientSeamlessTravelStatusListener")

};

// Object: Class DFMIrisSeamless.SafeHouseHelicopter
// Size: 0x4F0 (Inherited: 0x3D0)
struct ASafeHouseHelicopter : APawn
{
	uint8_t Pad_0x3D0[0x8]; // 0x3D0(0x8)
	struct TSoftObjectPtr<UAnimSequence> HelicopterIdleAnimPath; // 0x3D8(0x28)
	struct TSoftObjectPtr<USkeletalMesh> HelicopterMeshPath; // 0x400(0x28)
	struct UAnimSequence* LoadedHelicopterIdleAnim; // 0x428(0x8)
	struct TArray<struct UAnimSequence*> LoadedAnims; // 0x430(0x10)
	uint8_t bStopAnimation : 1; // 0x440(0x1), Mask(0x1)
	uint8_t BitPad_0x440_1 : 7; // 0x440(0x1)
	uint8_t bDefaultTickable : 1; // 0x441(0x1), Mask(0x1)
	uint8_t BitPad_0x441_1 : 7; // 0x441(0x1)
	uint8_t Pad_0x442[0xE]; // 0x442(0xE)
	struct USkeletalMesh* LoadedHelicopterMesh; // 0x450(0x8)
	struct USkeletalMesh* LoadedRopeMesh; // 0x458(0x8)
	uint8_t bCurrentLeftDoorisOpen : 1; // 0x460(0x1), Mask(0x1)
	uint8_t BitPad_0x460_1 : 7; // 0x460(0x1)
	uint8_t bCurrentRightDoorisOpen : 1; // 0x461(0x1), Mask(0x1)
	uint8_t BitPad_0x461_1 : 7; // 0x461(0x1)
	uint8_t Pad_0x462[0x2]; // 0x462(0x2)
	struct FVector RightDoorCloseRelativeLocation; // 0x464(0xC)
	struct FVector LeftDoorCloseRelativeLocation; // 0x470(0xC)
	struct FVector RightDoorOpenRelativeLocation; // 0x47C(0xC)
	struct FVector LeftDoorOpenRelativeLocation; // 0x488(0xC)
	struct FVector VFXPlayOffsetToRoot; // 0x494(0xC)
	struct FVector VFXPlayOffsetToRoot2; // 0x4A0(0xC)
	uint8_t bEnableTickToSyncVFXLocation : 1; // 0x4AC(0x1), Mask(0x1)
	uint8_t BitPad_0x4AC_1 : 7; // 0x4AC(0x1)
	uint8_t Pad_0x4AD[0x3]; // 0x4AD(0x3)
	struct USceneComponent* CloundVFX1; // 0x4B0(0x8)
	struct USceneComponent* CloundVFX2; // 0x4B8(0x8)
	struct UCurveFloat* TidingCurve; // 0x4C0(0x8)
	float InitialPitch; // 0x4C8(0x4)
	float InitialRoll; // 0x4CC(0x4)
	float TidingPeriod; // 0x4D0(0x4)
	float MaxPitch; // 0x4D4(0x4)
	float PitchSpeedFactor; // 0x4D8(0x4)
	float PitchAccelerationFactor; // 0x4DC(0x4)
	float RollYawFactor; // 0x4E0(0x4)
	float RotatorInterpSpeed; // 0x4E4(0x4)
	float RestoreAttitudeTime; // 0x4E8(0x4)
	uint8_t Pad_0x4EC[0x4]; // 0x4EC(0x4)


	// Object: Function DFMIrisSeamless.SafeHouseHelicopter.ToggleCastShadow
	// Flags: [Final|Native|Protected|BlueprintCallable]
	// Offset: 0x138b3c6c
	// Params: [ Num(1) Size(0x1) ]
	void ToggleCastShadow(uint8_t bEnable);

	// Object: Function DFMIrisSeamless.SafeHouseHelicopter.SetTickEnable
	// Flags: [Event|Public|BlueprintCallable|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(1) Size(0x1) ]
	void SetTickEnable(uint8_t Enable);

	// Object: Function DFMIrisSeamless.SafeHouseHelicopter.PlayHelicopterAudio
	// Flags: [Event|Public|BlueprintCallable|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(1) Size(0x1) ]
	void PlayHelicopterAudio(uint8_t Enable);

	// Object: Function DFMIrisSeamless.SafeHouseHelicopter.OnSpawnLandVFX
	// Flags: [Event|Public|BlueprintCallable|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(0) Size(0x0) ]
	void OnSpawnLandVFX();

	// Object: Function DFMIrisSeamless.SafeHouseHelicopter.OnSetRopeVisable
	// Flags: [Event|Public|BlueprintCallable|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(0) Size(0x0) ]
	void OnSetRopeVisable();

	// Object: Function DFMIrisSeamless.SafeHouseHelicopter.OnRopeDownFinish
	// Flags: [Event|Public|BlueprintCallable|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(0) Size(0x0) ]
	void OnRopeDownFinish();

	// Object: Function DFMIrisSeamless.SafeHouseHelicopter.OnGetSpineLoc
	// Flags: [Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(2) Size(0x10) ]
	struct FVector OnGetSpineLoc(float Time);

	// Object: Function DFMIrisSeamless.SafeHouseHelicopter.OnGetRopeDownSpline
	// Flags: [Event|Public|BlueprintCallable|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(1) Size(0x8) ]
	struct USplineComponent* OnGetRopeDownSpline();

	// Object: Function DFMIrisSeamless.SafeHouseHelicopter.OnGetoffSpineLoc
	// Flags: [Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(2) Size(0x10) ]
	struct FVector OnGetoffSpineLoc(float Time);

	// Object: Function DFMIrisSeamless.SafeHouseHelicopter.OnGetoffDropPoint
	// Flags: [Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(1) Size(0xC) ]
	struct FRotator OnGetoffDropPoint();

	// Object: Function DFMIrisSeamless.SafeHouseHelicopter.OnGetMesh
	// Flags: [Event|Public|BlueprintCallable|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(1) Size(0x8) ]
	struct USkeletalMeshComponent* OnGetMesh();

	// Object: Function DFMIrisSeamless.SafeHouseHelicopter.OnGetLandPoint
	// Flags: [Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(1) Size(0xC) ]
	struct FVector OnGetLandPoint();

	// Object: Function DFMIrisSeamless.SafeHouseHelicopter.OnDropDownRope
	// Flags: [Event|Public|BlueprintCallable|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(0) Size(0x0) ]
	void OnDropDownRope();

	// Object: Function DFMIrisSeamless.SafeHouseHelicopter.OnDestoryVFX
	// Flags: [Event|Public|BlueprintCallable|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(0) Size(0x0) ]
	void OnDestoryVFX();

	// Object: Function DFMIrisSeamless.SafeHouseHelicopter.OnDelayResetPos
	// Flags: [Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(2) Size(0x10) ]
	void OnDelayResetPos(float DelayTime, struct FVector pos);

	// Object: Function DFMIrisSeamless.SafeHouseHelicopter.OnAssetLoaded
	// Flags: [Final|Native|Protected]
	// Offset: 0x138b3b9c
	// Params: [ Num(1) Size(0x10) ]
	void OnAssetLoaded(struct TArray<struct FSoftObjectPath> AssetRef);

	// Object: Function DFMIrisSeamless.SafeHouseHelicopter.GetLookAtRotation
	// Flags: [Native|Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent]
	// Offset: 0x138b3b5c
	// Params: [ Num(1) Size(0xC) ]
	struct FRotator GetLookAtRotation();

	// Object: Function DFMIrisSeamless.SafeHouseHelicopter.DoOpenDoor
	// Flags: [Event|Public|BlueprintCallable|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(0) Size(0x0) ]
	void DoOpenDoor();

	// Object: Function DFMIrisSeamless.SafeHouseHelicopter.BP_AttachLighting
	// Flags: [Event|Public|BlueprintCallable|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(1) Size(0x1) ]
	void BP_AttachLighting(uint8_t Warning);

	// Object: Function DFMIrisSeamless.SafeHouseHelicopter.AttachLighting
	// Flags: [Final|Native|Public]
	// Offset: 0x138b3ab0
	// Params: [ Num(1) Size(0x1) ]
	void AttachLighting(uint8_t Warning);
	DEFINE_UE_CLASS_HELPERS(ASafeHouseHelicopter, "SafeHouseHelicopter")

};

// Object: Class DFMIrisSeamless.SafeHouseHelicopterAnimInstance
// Size: 0xA50 (Inherited: 0x270)
struct USafeHouseHelicopterAnimInstance : UAnimInstance
{
	struct FSafeHouseHelicopterAnimInstanceProxy LocalProxy; // 0x270(0x7D0)
	struct ASafeHouseHelicopter* SafeHouseHelicopter; // 0xA40(0x8)
	uint8_t Pad_0xA48[0x8]; // 0xA48(0x8)
	DEFINE_UE_CLASS_HELPERS(USafeHouseHelicopterAnimInstance, "SafeHouseHelicopterAnimInstance")

};

} // namespace SDK
