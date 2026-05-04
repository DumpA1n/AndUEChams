#pragma once

#include "../CoreUObject_classes.hpp"
#include "Engine.hpp"
#include "GPGlobalDefines.hpp"
#include "GPTools.hpp"
#include "GameCore.hpp"

namespace SDK
{

// Package: GPQuest
// Enums: 24
// Structs: 18
// Classes: 26

struct AActor;
struct ACHARACTER;
struct APlayerController;
enum class EGameHUDSate : uint16_t;
enum class ENetRole : uint8_t;
struct FHitResult;
struct FQuestFullID;
struct UActorComponent;
struct UBaseUIView;
struct UDataTable;
struct UGPAudioEventAsset;
struct UHudManager;
struct ULevel;
struct ULevelStreaming;
struct UPrimitiveComponent;
struct USceneComponent;
struct UUserWidget;
struct FGPQuestObjectiveHUDInfo;
struct FGPQuestText;
struct FGPQuestObjectiveNoticeInfo;
struct FGPQuestObjectiveNoticeNextBrunchInfo;
struct FQAMakerMapIconInfo;
struct FSOLQAObjectiveData;
struct FSOLQA_ActionTypeData;
struct FGPQuestPlayingAudioInfo;
struct FGPQuestAudioTableRow;
struct FGPQuestAudioCommonTableRow;
struct FGPQuestObjectiveInfo;
struct FGPQuestValueRange;
struct FGPQuestObjectiveParams;
struct FGPQuestObjectiveData;
struct FGPQuestStageData;
struct FGPQuestRewardData;
struct FGPQuestTargetData;
struct FGPQuestReleventStageInfo;
struct AGPQuestActionContext;
struct AGPQuest;
struct UGPQuestActionAsyncReturnActionBase;
struct UGPQuestObjectiveAsyncReturnActionBase;
struct UGPQuestActionLib_Basic;
struct AGPQuestAudioSubsystem;
struct AGPQuestClientProxy;
struct AGPQuestCountdownBase;
struct UGPQuestTextUtils;
struct AGPQuestHUDSubsystem;
struct IGPQuestInteractorInterface;
struct UGPQuestLevelResetComponent;
struct AGPQuestMarkerBase;
struct UGPQuestObjectiveAsyncReturnAction_Default;
struct UGPQuestRuleHelperComponent;
struct UGPQuestSettings;
struct UGPQuestStageAsyncReturnActionBase;
struct AGPQuestStage;
struct UGPQuestStageAsyncReturnAction_Default;
struct UGPQuestStageUtils;
struct UGPQuestSystem;
struct UGPQuestUtils;
struct AGPQuestVolume;
struct UGPTQuestContext;
struct UGPTRPCQuestComponent;
struct UGPTQuestNative;

// Object: Enum GPQuest.ETraceActorAttributeType
enum class ETraceActorAttributeType : uint8_t
{
	None = 0,
	HEALTH = 1,
	ETraceActorAttributeType_MAX = 2
};

// Object: Enum GPQuest.EGPQuestObjectiveHUDType
enum class EGPQuestObjectiveHUDType : uint8_t
{
	None = 0,
	Normal = 1,
	TimeLimit = 2,
	ProtectTarget = 3,
	ProtectVehicle = 4,
	Kill = 5,
	Complete = 19,
	Type_MAX = 20,
	EGPQuestObjectiveHUDType_MAX = 21
};

// Object: Enum GPQuest.EGPQuestStageState
enum class EGPQuestStageState : uint8_t
{
	Begin = 0,
	Update = 1,
	Complete = 2,
	Failed = 3,
	AllDieFailed = 4,
	TimeOutFailed = 5,
	EGPQuestStageState_MAX = 6
};

// Object: Enum GPQuest.ELootingStatus
enum class ELootingStatus : uint8_t
{
	None = 0,
	ShowButton = 1,
	LootingBegin = 2,
	LootingEnd = 3,
	ELootingStatus_MAX = 4
};

// Object: Enum GPQuest.ESubtitleType
enum class ESubtitleType : uint8_t
{
	EST_Sequence = 0,
	EST_CutScene = 1,
	EST_NPCDialogue = 2,
	EST_Wireless = 3,
	EST_SoldierDialog = 4,
	EST_Max = 5
};

// Object: Enum GPQuest.EGPQuestObjectiveState
enum class EGPQuestObjectiveState : uint8_t
{
	None = 0,
	Begin = 1,
	Complete = 2,
	Failed = 3,
	EGPQuestObjectiveState_MAX = 4
};

// Object: Enum GPQuest.ESOLActionType
enum class ESOLActionType : uint8_t
{
	ENone = 0,
	ESpawnAI = 1,
	EInteract = 2,
	ESetLightData = 3,
	EPlaySubTitle = 4,
	ESOLActionType_MAX = 5
};

// Object: Enum GPQuest.EGPQuestObjectiveAsyncReturnBranch
enum class EGPQuestObjectiveAsyncReturnBranch : uint8_t
{
	Failed = 0,
	Complete = 1,
	EGPQuestObjectiveAsyncReturnBranch_MAX = 2
};

// Object: Enum GPQuest.ESOLTargetType
enum class ESOLTargetType : uint8_t
{
	None = 0,
	ReachArea = 1,
	Interact = 2,
	KillAI = 3,
	KillBoss = 4,
	Timer = 5,
	PlacingC4 = 6,
	SpawnAI = 7,
	LootingSafeBox = 8,
	BreakItem = 9,
	lootingDeadBody = 10,
	DisableInteractor = 11,
	DisposalBomb = 12,
	AirDrop = 13,
	ESOLTargetType_MAX = 14
};

// Object: Enum GPQuest.VisibleGameHUDStateOperators
enum class EVisibleGameHUDStateOperators : uint8_t
{
	None = 0,
	Remove_InvisibleGameHudState = 1,
	Add_InvisibleGameHudState = 2,
	Remove_VisibleGameHudState = 3,
	Add_VisibleGameHudState = 4,
	VisibleGameHUDStateOperators_MAX = 5
};

// Object: Enum GPQuest.EQA_CountdownType
enum class EQA_CountdownType : uint8_t
{
	ENone = 0,
	EAirDrop = 1,
	EAirSupport = 2,
	ERaid_NeedWaitCountDown = 3,
	ERaid_NoNeedWaitCountDown = 4,
	EQA_MAX = 5
};

// Object: Enum GPQuest.ECountDownHUDClassType
enum class ECountDownHUDClassType : uint8_t
{
	ENone = 0,
	ERaidCountDownHUDClassType = 1,
	ECountDownHUDClassType_MAX = 2
};

// Object: Enum GPQuest.EGPQuestOptionalObjectiveOperationType
enum class EGPQuestOptionalObjectiveOperationType : uint8_t
{
	Show = 0,
	Hide = 1,
	Complete = 2,
	Failed = 3,
	EGPQuestOptionalObjectiveOperationType_MAX = 4
};

// Object: Enum GPQuest.EGPQuestObjectiveType
enum class EGPQuestObjectiveType : uint8_t
{
	Unkown = 0,
	Kill = 1,
	Arrive = 2,
	Interact = 3,
	Protect = 4,
	Follow = 5,
	Destory = 6,
	TotalCount = 7,
	EGPQuestObjectiveType_MAX = 8
};

// Object: Enum GPQuest.EGPQuestActionMarkerType
enum class EGPQuestActionMarkerType : uint8_t
{
	Arrive = 0,
	Destroy = 1,
	Protect = 2,
	ProtectWithHP = 3,
	Arrive_Optional = 4,
	Destroy_Optional = 5,
	Protect_Optional = 6,
	ProtectWithHP_Optional = 7,
	NPCTalk = 8,
	TargetTrack = 9,
	NPCTrigger = 10,
	RPGTrack = 11,
	Vehicle = 12,
	Hostage = 13,
	MarkerNarrow = 14,
	AmmoBox = 15,
	EliteAI = 16,
	InteractiveReading = 17,
	InteractGame = 18,
	Raid_ValkyrieVehicle = 19,
	NPCTeamMate = 20,
	SOLContractKill = 21,
	SOLContractArrive = 22,
	SOLContractInteract = 23,
	SOLContractManning = 24,
	SOLMissionKill = 25,
	SOLMissionArrive = 26,
	SOLMissionInteract = 27,
	BraveGame = 28,
	RavenGuide = 29,
	RavenManning = 30,
	EGPQuestActionMarkerType_MAX = 31
};

// Object: Enum GPQuest.EGPQuestActionTeamId
enum class EGPQuestActionTeamId : uint8_t
{
	TeamAll = 0,
	Team1 = 1,
	Team2 = 2,
	Team3 = 3,
	Team4 = 4,
	Team5 = 5,
	Team6 = 6,
	Team7 = 7,
	Team8 = 8,
	Team9 = 9,
	Team10 = 10,
	TeamCount = 11,
	EGPQuestActionTeamId_MAX = 12
};

// Object: Enum GPQuest.EGPQuestActionTriggerType
enum class EGPQuestActionTriggerType : uint8_t
{
	BeginOverlap = 0,
	EndOverlap = 1,
	Hit = 2,
	EGPQuestActionTriggerType_MAX = 3
};

// Object: Enum GPQuest.EGPQuestActionCompareOperator
enum class EGPQuestActionCompareOperator : uint8_t
{
	Equal = 0,
	NotEqual = 1,
	Greater = 2,
	GreaterEqual = 3,
	Less = 4,
	LessEqual = 5,
	EGPQuestActionCompareOperator_MAX = 6
};

// Object: Enum GPQuest.EGPQuestPlayReason
enum class EGPQuestPlayReason : uint8_t
{
	DefaultPlay = 0,
	DebugJump = 1,
	FailReplay = 2,
	EGPQuestPlayReason_MAX = 3
};

// Object: Enum GPQuest.EGPQuestEndReason
enum class EGPQuestEndReason : uint8_t
{
	Complete = 0,
	Fail = 1,
	Cancel = 2,
	Break = 3,
	AllDied = 4,
	TimeOut = 5,
	EGPQuestEndReason_MAX = 6
};

// Object: Enum GPQuest.EGPQuestActionScope
enum class EGPQuestActionScope : uint8_t
{
	Stage = 0,
	World = 1,
	Volume = 2,
	EGPQuestActionScope_MAX = 3
};

// Object: Enum GPQuest.EGPQuestInteractorStatus
enum class EGPQuestInteractorStatus : uint8_t
{
	Unkown = 0,
	Activated = 1,
	Deactivated = 2,
	Succeed = 3,
	Failed = 4,
	EGPQuestInteractorStatus_MAX = 5
};

// Object: Enum GPQuest.EGPQuestStageAsyncReturnBranch
enum class EGPQuestStageAsyncReturnBranch : uint8_t
{
	Failed = 0,
	Complete = 1,
	Branch2 = 2,
	Branch3 = 3,
	Branch4 = 4,
	Branch5 = 5,
	AllDieFailed = 6,
	EGPQuestStageAsyncReturnBranch_MAX = 7
};

// Object: Enum GPQuest.EQuestVolumeShape
enum class EQuestVolumeShape : uint8_t
{
	Shape_Sphere = 0,
	Shape_Cylinder = 1,
	Shape_MAX = 2
};

// Object: ScriptStruct GPQuest.GPQuestObjectiveHUDInfo
// Size: 0x50 (Inherited: 0x0)
struct FGPQuestObjectiveHUDInfo
{
	struct FText PrimaryTitle; // 0x0(0x18)
	struct FText ObjectiveTitle; // 0x18(0x18)
	EGPQuestObjectiveHUDType HUDType; // 0x30(0x1)
	ETraceActorAttributeType TraceType; // 0x31(0x1)
	uint8_t Pad_0x32[0x6]; // 0x32(0x6)
	struct AActor* TargetActor; // 0x38(0x8)
	struct FTimerHandle TimeOutHandler; // 0x40(0x8)
	uint8_t bShowObjectiveUpdateHint : 1; // 0x48(0x1), Mask(0x1)
	uint8_t BitPad_0x48_1 : 7; // 0x48(0x1)
	uint8_t Pad_0x49[0x7]; // 0x49(0x7)
};

// Object: ScriptStruct GPQuest.GPQuestText
// Size: 0x28 (Inherited: 0x0)
struct FGPQuestText
{
	struct FText Text; // 0x0(0x18)
	struct TArray<struct FString> FormatArgs; // 0x18(0x10)
};

// Object: ScriptStruct GPQuest.GPQuestObjectiveNoticeInfo
// Size: 0x80 (Inherited: 0x0)
struct FGPQuestObjectiveNoticeInfo
{
	struct FGPQuestText NoticeName; // 0x0(0x28)
	struct FGPQuestText NoticeText; // 0x28(0x28)
	struct FString Args; // 0x50(0x10)
	uint8_t bNoticeAudio : 1; // 0x60(0x1), Mask(0x1)
	uint8_t BitPad_0x60_1 : 7; // 0x60(0x1)
	uint8_t Pad_0x61[0x3]; // 0x61(0x3)
	float Duration; // 0x64(0x4)
	int32_t Priority; // 0x68(0x4)
	ESubtitleType SubtitleType; // 0x6C(0x1)
	uint8_t Pad_0x6D[0x3]; // 0x6D(0x3)
	struct TArray<struct FGPQuestObjectiveNoticeNextBrunchInfo> NextBrunchs; // 0x70(0x10)
};

// Object: ScriptStruct GPQuest.GPQuestObjectiveNoticeNextBrunchInfo
// Size: 0x48 (Inherited: 0x0)
struct FGPQuestObjectiveNoticeNextBrunchInfo
{
	struct FGPQuestText NextText; // 0x0(0x28)
	int64_t NextBrunchParam; // 0x28(0x8)
	uint8_t JumpParam; // 0x30(0x1)
	uint8_t Pad_0x31[0x7]; // 0x31(0x7)
	struct FString JumpArgs; // 0x38(0x10)
};

// Object: ScriptStruct GPQuest.QAMakerMapIconInfo
// Size: 0x48 (Inherited: 0x0)
struct FQAMakerMapIconInfo
{
	struct FName IconName; // 0x0(0x8)
	uint8_t bAdd : 1; // 0x8(0x1), Mask(0x1)
	uint8_t BitPad_0x8_1 : 7; // 0x8(0x1)
	uint8_t Pad_0x9[0x3]; // 0x9(0x3)
	struct FVector ServerActorLocation; // 0xC(0xC)
	EGPQuestActionMarkerType MarkerType; // 0x18(0x1)
	uint8_t Pad_0x19[0x7]; // 0x19(0x7)
	struct FSoftObjectPath IconPath; // 0x20(0x18)
	struct FLinearColor IconColor; // 0x38(0x10)
};

// Object: ScriptStruct GPQuest.SOLQAObjectiveData
// Size: 0x48 (Inherited: 0x0)
struct FSOLQAObjectiveData
{
	uint8_t Mute : 1; // 0x0(0x1), Mask(0x1)
	uint8_t BitPad_0x0_1 : 7; // 0x0(0x1)
	uint8_t Pad_0x1[0x7]; // 0x1(0x7)
	struct FText BriefObjectionDesc; // 0x8(0x18)
	int32_t MaxStepCount; // 0x20(0x4)
	ESOLTargetType SOLTargetType; // 0x24(0x1)
	uint8_t Pad_0x25[0x3]; // 0x25(0x3)
	float TimerValue; // 0x28(0x4)
	struct FName ProtecedVIPTag; // 0x2C(0x8)
	uint8_t Pad_0x34[0x4]; // 0x34(0x4)
	struct TArray<struct FSOLQA_ActionTypeData> SOLQA_ActionTypeDataArray; // 0x38(0x10)
};

// Object: ScriptStruct GPQuest.SOLQA_ActionTypeData
// Size: 0x18 (Inherited: 0x0)
struct FSOLQA_ActionTypeData
{
	int32_t TargetNum; // 0x0(0x4)
	ESOLActionType ActionType; // 0x4(0x1)
	uint8_t Pad_0x5[0x3]; // 0x5(0x3)
	struct FName ActionParamTag; // 0x8(0x8)
	uint8_t TargetBoolValue : 1; // 0x10(0x1), Mask(0x1)
	uint8_t BitPad_0x10_1 : 7; // 0x10(0x1)
	uint8_t Pad_0x11[0x3]; // 0x11(0x3)
	struct FColor TargetColorValue; // 0x14(0x4)
};

// Object: ScriptStruct GPQuest.GPQuestPlayingAudioInfo
// Size: 0x18 (Inherited: 0x0)
struct FGPQuestPlayingAudioInfo
{
	struct FName DataTableKey; // 0x0(0x8)
	uint8_t bIs3DAudio : 1; // 0x8(0x1), Mask(0x1)
	uint8_t BitPad_0x8_1 : 7; // 0x8(0x1)
	uint8_t Pad_0x9[0x3]; // 0x9(0x3)
	struct FVector Audio3DLocation; // 0xC(0xC)
};

// Object: ScriptStruct GPQuest.GPQuestAudioTableRow
// Size: 0x48 (Inherited: 0x10)
struct FGPQuestAudioTableRow : FDescRowBase
{
	struct FName Key; // 0x10(0x8)
	uint8_t bIsLoopAudio : 1; // 0x18(0x1), Mask(0x1)
	uint8_t BitPad_0x18_1 : 7; // 0x18(0x1)
	uint8_t Pad_0x19[0x7]; // 0x19(0x7)
	struct TSoftObjectPtr<UGPAudioEventAsset> AudioEvent; // 0x20(0x28)
};

// Object: ScriptStruct GPQuest.GPQuestAudioCommonTableRow
// Size: 0x50 (Inherited: 0x48)
struct FGPQuestAudioCommonTableRow : FGPQuestAudioTableRow
{
	uint8_t Is3DAudio : 1; // 0x48(0x1), Mask(0x1)
	uint8_t BitPad_0x48_1 : 7; // 0x48(0x1)
	uint8_t Pad_0x49[0x7]; // 0x49(0x7)
};

// Object: ScriptStruct GPQuest.GPQuestObjectiveInfo
// Size: 0x8 (Inherited: 0x0)
struct FGPQuestObjectiveInfo
{
	int32_t ID; // 0x0(0x4)
	EGPQuestObjectiveState ObjectiveState; // 0x4(0x1)
	uint8_t Pad_0x5[0x3]; // 0x5(0x3)
};

// Object: ScriptStruct GPQuest.GPQuestValueRange
// Size: 0x8 (Inherited: 0x0)
struct FGPQuestValueRange
{
	float Min; // 0x0(0x4)
	float Max; // 0x4(0x4)
};

// Object: ScriptStruct GPQuest.GPQuestObjectiveParams
// Size: 0x28 (Inherited: 0x0)
struct FGPQuestObjectiveParams
{
	struct TArray<struct FGPQuestTargetData> Targets; // 0x0(0x10)
	uint8_t bSneak : 1; // 0x10(0x1), Mask(0x1)
	uint8_t BitPad_0x10_1 : 7; // 0x10(0x1)
	uint8_t Pad_0x11[0x3]; // 0x11(0x3)
	struct FGPQuestValueRange timeRange; // 0x14(0x8)
	struct FGPQuestValueRange DistanceRange; // 0x1C(0x8)
	uint8_t Pad_0x24[0x4]; // 0x24(0x4)
};

// Object: ScriptStruct GPQuest.GPQuestObjectiveData
// Size: 0x30 (Inherited: 0x0)
struct FGPQuestObjectiveData
{
	EGPQuestObjectiveType Type; // 0x0(0x1)
	uint8_t Pad_0x1[0x7]; // 0x1(0x7)
	struct FGPQuestObjectiveParams Params; // 0x8(0x28)
};

// Object: ScriptStruct GPQuest.GPQuestStageData
// Size: 0x60 (Inherited: 0x0)
struct FGPQuestStageData
{
	struct TMap<int32_t, struct FGPQuestObjectiveData> Objectives; // 0x0(0x50)
	struct TArray<struct FGPQuestRewardData> Rewards; // 0x50(0x10)
};

// Object: ScriptStruct GPQuest.GPQuestRewardData
// Size: 0x8 (Inherited: 0x0)
struct FGPQuestRewardData
{
	int32_t ItemID; // 0x0(0x4)
	int32_t ItemNum; // 0x4(0x4)
};

// Object: ScriptStruct GPQuest.GPQuestTargetData
// Size: 0x20 (Inherited: 0x0)
struct FGPQuestTargetData
{
	uint8_t bStatic : 1; // 0x0(0x1), Mask(0x1)
	uint8_t BitPad_0x0_1 : 7; // 0x0(0x1)
	uint8_t bNameIsVildcard : 1; // 0x1(0x1), Mask(0x1)
	uint8_t BitPad_0x1_1 : 7; // 0x1(0x1)
	uint8_t Pad_0x2[0x6]; // 0x2(0x6)
	struct FString Name; // 0x8(0x10)
	struct AActor* Type; // 0x18(0x8)
};

// Object: ScriptStruct GPQuest.GPQuestReleventStageInfo
// Size: 0x8 (Inherited: 0x0)
struct FGPQuestReleventStageInfo
{
	int32_t QuestID; // 0x0(0x4)
	int32_t StageId; // 0x4(0x4)
};

// Object: Class GPQuest.GPQuestActionContext
// Size: 0x400 (Inherited: 0x370)
struct AGPQuestActionContext : AActor
{
	struct TMap<int32_t, struct UGPQuestObjectiveAsyncReturnActionBase*> MapObjectiveAsyncReturnActions; // 0x370(0x50)
	int32_t CurrentObjectiveId; // 0x3C0(0x4)
	struct FGPQuestObjectiveInfo RecentObjectiveInfo; // 0x3C4(0x8)
	uint8_t Pad_0x3CC[0x4]; // 0x3CC(0x4)
	struct TArray<struct UGPQuestActionAsyncReturnActionBase*> QActions; // 0x3D0(0x10)
	struct TArray<struct UGPQuestStageAsyncReturnActionBase*> QStageActions; // 0x3E0(0x10)
	uint8_t Pad_0x3F0[0x10]; // 0x3F0(0x10)


	// Object: Function GPQuest.GPQuestActionContext.StageGraphJumpObjective
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x788c9b0
	// Params: [ Num(1) Size(0x4) ]
	void StageGraphJumpObjective(int32_t objectiveId);

	// Object: Function GPQuest.GPQuestActionContext.OnJumpObjective
	// Flags: [Event|Protected|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(1) Size(0x4) ]
	void OnJumpObjective(int32_t objectiveId);

	// Object: Function GPQuest.GPQuestActionContext.GotoObjective
	// Flags: [Native|Public]
	// Offset: 0x788c904
	// Params: [ Num(1) Size(0x4) ]
	void GotoObjective(int32_t objectiveId);
	DEFINE_UE_CLASS_HELPERS(AGPQuestActionContext, "GPQuestActionContext")

};

// Object: Class GPQuest.GPQuest
// Size: 0x4C8 (Inherited: 0x400)
struct AGPQuest : AGPQuestActionContext
{
	struct UGPQuestRuleHelperComponent* RuleHelper; // 0x400(0x8)
	struct USceneComponent* DefaultRoot; // 0x408(0x8)
	int32_t QuestID; // 0x410(0x4)
	uint8_t Pad_0x414[0x4]; // 0x414(0x4)
	struct FString QuestName; // 0x418(0x10)
	struct FString QLevelBaseDir; // 0x428(0x10)
	uint8_t bMainQuest : 1; // 0x438(0x1), Mask(0x1)
	uint8_t BitPad_0x438_1 : 7; // 0x438(0x1)
	uint8_t bPlaying : 1; // 0x439(0x1), Mask(0x1)
	uint8_t BitPad_0x439_1 : 7; // 0x439(0x1)
	uint8_t Pad_0x43A[0x6]; // 0x43A(0x6)
	struct AGPQuestClientProxy* ClassOfClientProxy; // 0x440(0x8)
	uint8_t Pad_0x448[0x10]; // 0x448(0x10)
	EGPQuestEndReason LastEndReason; // 0x458(0x1)
	uint8_t Pad_0x459[0x7]; // 0x459(0x7)
	struct AGPQuestClientProxy* ClientProxyActor; // 0x460(0x8)
	struct TArray<struct AGPQuestMarkerBase*> ClientQuestMarkerArray; // 0x468(0x10)
	struct AGPQuestStage* CurrentStage; // 0x478(0x8)
	int32_t QuestStagesCount; // 0x480(0x4)
	uint8_t Pad_0x484[0x4]; // 0x484(0x4)
	struct TArray<struct AGPQuestStage*> CachedQuestStageClassList; // 0x488(0x10)
	uint8_t bWaitingPlunder : 1; // 0x498(0x1), Mask(0x1)
	uint8_t BitPad_0x498_1 : 7; // 0x498(0x1)
	uint8_t Pad_0x499[0x7]; // 0x499(0x7)
	struct AGPQuestVolume* GPQuestVolume; // 0x4A0(0x8)
	struct TArray<struct AGPQuestMarkerBase*> GPQuestMarkerArray; // 0x4A8(0x10)
	struct FString AIJobName; // 0x4B8(0x10)


	// Object: Function GPQuest.GPQuest.ServerAcceptContractForOfflinePlayer
	// Flags: [Native|Public]
	// Offset: 0x788c420
	// Params: [ Num(1) Size(0x8) ]
	void ServerAcceptContractForOfflinePlayer(struct ACHARACTER* CHARACTER);

	// Object: Function GPQuest.GPQuest.QuestGraphJumpStage
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x788c338
	// Params: [ Num(2) Size(0x11) ]
	void QuestGraphJumpStage(struct FString StageName, EGPQuestPlayReason Reason);

	// Object: Function GPQuest.GPQuest.QuestGraphCallFunctionByName
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x788c28c
	// Params: [ Num(1) Size(0x10) ]
	void QuestGraphCallFunctionByName(struct FString Function);

	// Object: Function GPQuest.GPQuest.PlunderQuest
	// Flags: [Native|Public]
	// Offset: 0x788c1e0
	// Params: [ Num(1) Size(0x4) ]
	void PlunderQuest(int32_t TeamID);

	// Object: Function GPQuest.GPQuest.OnWaitingPlunder
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(0) Size(0x0) ]
	void OnWaitingPlunder();

	// Object: Function GPQuest.GPQuest.OnReplayQuest
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(0) Size(0x0) ]
	void OnReplayQuest();

	// Object: Function GPQuest.GPQuest.OnRep_GPQuestMarkerArray
	// Flags: [Final|Native|Protected]
	// Offset: 0xfb32fdc
	// Params: [ Num(0) Size(0x0) ]
	void OnRep_GPQuestMarkerArray();

	// Object: Function GPQuest.GPQuest.OnRep_CurrentStage
	// Flags: [Final|Native|Public]
	// Offset: 0x788c1cc
	// Params: [ Num(0) Size(0x0) ]
	void OnRep_CurrentStage();

	// Object: Function GPQuest.GPQuest.OnRep_ClientProxy
	// Flags: [Final|Native|Public]
	// Offset: 0x109813d0
	// Params: [ Num(0) Size(0x0) ]
	void OnRep_ClientProxy();

	// Object: Function GPQuest.GPQuest.OnPlunder
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(1) Size(0x4) ]
	void OnPlunder(int32_t TeamID);

	// Object: Function GPQuest.GPQuest.OnNewPlayerEnterVolume
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(1) Size(0x8) ]
	void OnNewPlayerEnterVolume(struct AActor* NewPlayer);

	// Object: Function GPQuest.GPQuest.OnJumpStage
	// Flags: [Event|Protected|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(2) Size(0x11) ]
	void OnJumpStage(struct FString StageName, EGPQuestPlayReason Reason);

	// Object: Function GPQuest.GPQuest.OnEndQuest
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(0) Size(0x0) ]
	void OnEndQuest();

	// Object: Function GPQuest.GPQuest.OnBeginQuestManually
	// Flags: [Event|Public|BlueprintCallable|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(0) Size(0x0) ]
	void OnBeginQuestManually();

	// Object: Function GPQuest.GPQuest.OnBeginQuest
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(0) Size(0x0) ]
	void OnBeginQuest();

	// Object: Function GPQuest.GPQuest.GotoStage
	// Flags: [Native|Public]
	// Offset: 0x788c118
	// Params: [ Num(1) Size(0x10) ]
	void GotoStage(struct FString StageName);

	// Object: Function GPQuest.GPQuest.GetStageFullName
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x788c030
	// Params: [ Num(2) Size(0x20) ]
	struct FString GetStageFullName(struct FString StageName);

	// Object: Function GPQuest.GPQuest.EndQuestOnClient
	// Flags: [Net|NetReliableNative|Event|NetMulticast|Public]
	// Offset: 0x788c014
	// Params: [ Num(0) Size(0x0) ]
	void EndQuestOnClient();

	// Object: Function GPQuest.GPQuest.EndQuest
	// Flags: [Native|Public]
	// Offset: 0x788bf68
	// Params: [ Num(1) Size(0x1) ]
	void EndQuest(EGPQuestEndReason Reason);

	// Object: Function GPQuest.GPQuest.BreakQuest
	// Flags: [Native|Public]
	// Offset: 0x788bf4c
	// Params: [ Num(0) Size(0x0) ]
	void BreakQuest();

	// Object: Function GPQuest.GPQuest.BeginQuestOnClient
	// Flags: [Net|NetReliableNative|Event|NetMulticast|Public]
	// Offset: 0x788bf30
	// Params: [ Num(0) Size(0x0) ]
	void BeginQuestOnClient();

	// Object: Function GPQuest.GPQuest.BeginQuest
	// Flags: [Native|Public]
	// Offset: 0x788bf14
	// Params: [ Num(0) Size(0x0) ]
	void BeginQuest();
	DEFINE_UE_CLASS_HELPERS(AGPQuest, "GPQuest")

};

// Object: Class GPQuest.GPQuestActionAsyncReturnActionBase
// Size: 0x38 (Inherited: 0x30)
struct UGPQuestActionAsyncReturnActionBase : UBlueprintAsyncActionBase
{
	uint8_t Pad_0x30[0x8]; // 0x30(0x8)
	DEFINE_UE_CLASS_HELPERS(UGPQuestActionAsyncReturnActionBase, "GPQuestActionAsyncReturnActionBase")

};

// Object: Class GPQuest.GPQuestObjectiveAsyncReturnActionBase
// Size: 0x40 (Inherited: 0x30)
struct UGPQuestObjectiveAsyncReturnActionBase : UBlueprintAsyncActionBase
{
	struct TArray<struct UGPQuestActionAsyncReturnActionBase*> QActions; // 0x30(0x10)


	// Object: Function GPQuest.GPQuestObjectiveAsyncReturnActionBase.FireReturnAction
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0x788c7e0
	// Params: [ Num(1) Size(0x1) ]
	void FireReturnAction(EGPQuestObjectiveAsyncReturnBranch Branch);
	DEFINE_UE_CLASS_HELPERS(UGPQuestObjectiveAsyncReturnActionBase, "GPQuestObjectiveAsyncReturnActionBase")

};

// Object: Class GPQuest.GPQuestActionLib_Basic
// Size: 0x28 (Inherited: 0x28)
struct UGPQuestActionLib_Basic : UBlueprintFunctionLibrary
{

	// Object: Function GPQuest.GPQuestActionLib_Basic.QA_SetStageTitle
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x788effc
	// Params: [ Num(2) Size(0x20) ]
	static void QA_SetStageTitle(struct AGPQuestActionContext* QAContext, struct FText InStageTitle);

	// Object: Function GPQuest.GPQuestActionLib_Basic.QA_SetScreenLogVisible
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x788eee0
	// Params: [ Num(3) Size(0x10) ]
	static void QA_SetScreenLogVisible(struct AGPQuestActionContext* QAContext, uint8_t bVisible, float Duration);

	// Object: Function GPQuest.GPQuestActionLib_Basic.QA_SetOptionalObjectiveTitleWithHealthBar
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x788ec40
	// Params: [ Num(6) Size(0x39) ]
	static void QA_SetOptionalObjectiveTitleWithHealthBar(struct AGPQuestActionContext* QAContext, struct FText InTitle, EGPQuestObjectiveHUDType InMissionType, struct AActor* ActorClass, struct FName QATag_TargetTag, EGPQuestActionScope Scope);

	// Object: Function GPQuest.GPQuestActionLib_Basic.QA_SetOptionalObjectiveTitle
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x788ea50
	// Params: [ Num(3) Size(0x21) ]
	static void QA_SetOptionalObjectiveTitle(struct AGPQuestActionContext* QAContext, struct FText InTitle, EGPQuestObjectiveHUDType InMissionType);

	// Object: Function GPQuest.GPQuestActionLib_Basic.QA_SetObjectiveTitleWithType
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x788e860
	// Params: [ Num(3) Size(0x21) ]
	static void QA_SetObjectiveTitleWithType(struct AGPQuestActionContext* QAContext, struct FText InText, EGPQuestObjectiveHUDType InMissionHUDType);

	// Object: Function GPQuest.GPQuestActionLib_Basic.QA_SetObjectiveTitleAutoParams
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x788e600
	// Params: [ Num(4) Size(0x38) ]
	static void QA_SetObjectiveTitleAutoParams(struct AGPQuestActionContext* QAContext, struct FText InText, EGPQuestObjectiveHUDType InMissionHUDType, struct TArray<struct FString> InArgs);

	// Object: Function GPQuest.GPQuestActionLib_Basic.QA_RemoveSpecifiedMarker
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x788e534
	// Params: [ Num(2) Size(0x10) ]
	static void QA_RemoveSpecifiedMarker(struct AGPQuestActionContext* QAContext, struct AGPQuestMarkerBase* MarkerActor);

	// Object: Function GPQuest.GPQuestActionLib_Basic.QA_RemoveMarker
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x788e3f0
	// Params: [ Num(4) Size(0x19) ]
	static void QA_RemoveMarker(struct AGPQuestActionContext* QAContext, struct AGPQuestMarkerBase* MarkerClass, struct FName QATag_TargetTag, EGPQuestActionScope Scope);

	// Object: Function GPQuest.GPQuestActionLib_Basic.QA_RemoveAllMarker
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x788e35c
	// Params: [ Num(1) Size(0x8) ]
	static void QA_RemoveAllMarker(struct AGPQuestActionContext* QAContext);

	// Object: Function GPQuest.GPQuestActionLib_Basic.QA_RemoveActorMarker
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x788e218
	// Params: [ Num(4) Size(0x19) ]
	static void QA_RemoveActorMarker(struct AGPQuestActionContext* QAContext, struct AGPQuestMarkerBase* MarkerClass, struct AActor* TargetActor, EGPQuestActionScope Scope);

	// Object: Function GPQuest.GPQuestActionLib_Basic.QA_QuestStateUpdateTips
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x788e028
	// Params: [ Num(3) Size(0x21) ]
	static void QA_QuestStateUpdateTips(struct AGPQuestActionContext* QAContext, struct FText PopText, EGPQuestStageState State);

	// Object: Function GPQuest.GPQuestActionLib_Basic.QA_PlayObjectiveNotice
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x788ddb8
	// Params: [ Num(5) Size(0x2C) ]
	static void QA_PlayObjectiveNotice(struct AGPQuestActionContext* QAContext, struct FText NoticeText, uint8_t bNoticeAudio, float Duration, int32_t Priority);

	// Object: Function GPQuest.GPQuestActionLib_Basic.QA_ObjectiveTips
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x788dc04
	// Params: [ Num(2) Size(0x20) ]
	static void QA_ObjectiveTips(struct AGPQuestActionContext* QAContext, struct FText InTipsText);

	// Object: Function GPQuest.GPQuestActionLib_Basic.QA_ObjectiveHint
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x788da14
	// Params: [ Num(3) Size(0x21) ]
	static void QA_ObjectiveHint(struct AGPQuestActionContext* QAContext, struct FText InHintText, EGPQuestObjectiveHUDType InObjectiveHUDType);

	// Object: Function GPQuest.GPQuestActionLib_Basic.QA_FindFirstActorWithComponent
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x788d840
	// Params: [ Num(7) Size(0x40) ]
	static struct UActorComponent* QA_FindFirstActorWithComponent(struct AGPQuestActionContext* QAContext, struct AActor* ActorClass, struct FName Tag, struct FString Name, struct UActorComponent* ComponentClass, EGPQuestActionScope Scope);

	// Object: Function GPQuest.GPQuestActionLib_Basic.QA_FindFirstActor
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x788d6a8
	// Params: [ Num(6) Size(0x38) ]
	static struct AActor* QA_FindFirstActor(struct AGPQuestActionContext* QAContext, struct AActor* ActorClass, struct FName Tag, struct FString Name, EGPQuestActionScope Scope);

	// Object: Function GPQuest.GPQuestActionLib_Basic.QA_FindAllActor
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x788d4cc
	// Params: [ Num(6) Size(0x40) ]
	static void QA_FindAllActor(struct AGPQuestActionContext* QAContext, struct AActor* ActorClass, struct FName Tag, struct FString Name, EGPQuestActionScope Scope, struct TArray<struct AActor*>& OutActors);

	// Object: Function GPQuest.GPQuestActionLib_Basic.QA_DeactivateMarker
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x788d3c4
	// Params: [ Num(3) Size(0x11) ]
	static void QA_DeactivateMarker(struct AGPQuestActionContext* QAContext, struct FName QATag_TargetTag, EGPQuestActionScope Scope);

	// Object: Function GPQuest.GPQuestActionLib_Basic.QA_ClearOptionalObjective
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x788d330
	// Params: [ Num(1) Size(0x8) ]
	static void QA_ClearOptionalObjective(struct AGPQuestActionContext* QAContext);

	// Object: Function GPQuest.GPQuestActionLib_Basic.QA_AddMarkerToSpecifiedTarget
	// Flags: [Final|Native|Static|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x788d0e4
	// Params: [ Num(9) Size(0x40) ]
	static struct AGPQuestMarkerBase* QA_AddMarkerToSpecifiedTarget(struct AGPQuestActionContext* QAContext, struct AGPQuestMarkerBase* MarkerClass, struct AActor* TargetActor, struct FVector OffsetLocation, float DistanceThreshold, EGPQuestActionMarkerType MarkerType, struct FName SocketName, uint8_t ShowInBigMap);

	// Object: Function GPQuest.GPQuestActionLib_Basic.QA_AddMarkerOnAllActors
	// Flags: [Final|Native|Static|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x788ce28
	// Params: [ Num(10) Size(0x3C) ]
	static void QA_AddMarkerOnAllActors(struct AGPQuestActionContext* QAContext, struct AGPQuestMarkerBase* MarkerClass, struct AActor* TargetActorClass, struct FName TargetTag, struct FVector OffsetLocation, float DistanceThreshold, EGPQuestActionMarkerType MarkerType, EGPQuestActionScope Scope, uint8_t ShowInBigMap, struct FName SocketName);

	// Object: Function GPQuest.GPQuestActionLib_Basic.QA_AddMarker
	// Flags: [Final|Native|Static|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x788cb64
	// Params: [ Num(11) Size(0x48) ]
	static struct AGPQuestMarkerBase* QA_AddMarker(struct AGPQuestActionContext* QAContext, struct AGPQuestMarkerBase* MarkerClass, struct AActor* TargetActorClass, struct FName QATag_TargetTag, struct FVector OffsetLocation, float DistanceThreshold, EGPQuestActionMarkerType MarkerType, EGPQuestActionScope Scope, uint8_t ShowInBigMap, struct FName SocketName);

	// Object: Function GPQuest.GPQuestActionLib_Basic.QA_ActivateMarker
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x788ca5c
	// Params: [ Num(3) Size(0x11) ]
	static void QA_ActivateMarker(struct AGPQuestActionContext* QAContext, struct FName QATag_TargetTag, EGPQuestActionScope Scope);
	DEFINE_UE_CLASS_HELPERS(UGPQuestActionLib_Basic, "GPQuestActionLib_Basic")

};

// Object: Class GPQuest.GPQuestAudioSubsystem
// Size: 0x3E8 (Inherited: 0x370)
struct AGPQuestAudioSubsystem : AActor
{
	struct UDataTable* AudioDataTable2D; // 0x370(0x8)
	struct UDataTable* AudioDataTable3D; // 0x378(0x8)
	struct UDataTable* AudioDataTableCommon; // 0x380(0x8)
	struct TArray<struct FGPQuestPlayingAudioInfo> PlayingAudiosInfo; // 0x388(0x10)
	uint8_t Pad_0x398[0x50]; // 0x398(0x50)


	// Object: Function GPQuest.GPQuestAudioSubsystem.StopAudio
	// Flags: [Net|NetReliableNative|Event|NetMulticast|Public]
	// Offset: 0x788f508
	// Params: [ Num(2) Size(0xC) ]
	void StopAudio(struct FName AudioDataTableKey, int32_t TransitionMS);

	// Object: Function GPQuest.GPQuestAudioSubsystem.Play3DAudio
	// Flags: [Net|NetReliableNative|Event|NetMulticast|Public|HasDefaults]
	// Offset: 0x788f420
	// Params: [ Num(2) Size(0x14) ]
	void Play3DAudio(struct FName AudioDataTableKey, struct FVector PlayingLocation);

	// Object: Function GPQuest.GPQuestAudioSubsystem.Play2DAudio
	// Flags: [Net|NetReliableNative|Event|NetMulticast|Public]
	// Offset: 0x788f374
	// Params: [ Num(1) Size(0x8) ]
	void Play2DAudio(struct FName AudioDataTableKey);
	DEFINE_UE_CLASS_HELPERS(AGPQuestAudioSubsystem, "GPQuestAudioSubsystem")

};

// Object: Class GPQuest.GPQuestClientProxy
// Size: 0x460 (Inherited: 0x370)
struct AGPQuestClientProxy : AActor
{
	struct FMulticastInlineDelegate ServerLootingStatusBroadcast; // 0x370(0x10)
	struct FMulticastInlineDelegate ServerMapStatusBroadcast; // 0x380(0x10)
	struct FMulticastInlineDelegate ServerHudViewsLoadedBroadcast; // 0x390(0x10)
	struct TArray<EGameHUDSate> AddedGameHudStates; // 0x3A0(0x10)
	struct TArray<EGameHUDSate> RemovedGameHudStates; // 0x3B0(0x10)
	struct FGPQuestObjectiveHUDInfo ObjectiveHUDInfo; // 0x3C0(0x50)
	struct FGPQuestObjectiveHUDInfo OptionalObjectiveHUDInfo; // 0x410(0x50)


	// Object: Function GPQuest.GPQuestClientProxy.SetOptionalObjectiveInfo
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x7890ec0
	// Params: [ Num(1) Size(0x50) ]
	void SetOptionalObjectiveInfo(const struct FGPQuestObjectiveHUDInfo& InObjectiveInfo);

	// Object: Function GPQuest.GPQuestClientProxy.SetObjectiveHUDInfo
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x7890d3c
	// Params: [ Num(1) Size(0x50) ]
	void SetObjectiveHUDInfo(const struct FGPQuestObjectiveHUDInfo& InObjectiveInfo);

	// Object: Function GPQuest.GPQuestClientProxy.SetActorDisableCollision
	// Flags: [Net|NetReliableNative|Event|NetMulticast|Public|BlueprintCallable]
	// Offset: 0x7890c14
	// Params: [ Num(3) Size(0x11) ]
	void SetActorDisableCollision(struct UObject* ActorClass, struct FName ActorTag, uint8_t bDisableCollision);

	// Object: Function GPQuest.GPQuestClientProxy.OnRep_RomoveGameHudState
	// Flags: [Native|Protected]
	// Offset: 0x7890bf8
	// Params: [ Num(0) Size(0x0) ]
	void OnRep_RomoveGameHudState();

	// Object: Function GPQuest.GPQuestClientProxy.OnRep_OptionalObjectiveHUDInfo
	// Flags: [Native|Protected]
	// Offset: 0x7890bdc
	// Params: [ Num(0) Size(0x0) ]
	void OnRep_OptionalObjectiveHUDInfo();

	// Object: Function GPQuest.GPQuestClientProxy.OnRep_ObjectiveInfo
	// Flags: [Native|Protected]
	// Offset: 0x7890bc0
	// Params: [ Num(0) Size(0x0) ]
	void OnRep_ObjectiveInfo();

	// Object: Function GPQuest.GPQuestClientProxy.OnRep_AddGameHudState
	// Flags: [Native|Protected]
	// Offset: 0x7890ba4
	// Params: [ Num(0) Size(0x0) ]
	void OnRep_AddGameHudState();

	// Object: Function GPQuest.GPQuestClientProxy.OnCommonBannerShowed
	// Flags: [Final|Native|Protected]
	// Offset: 0x7890abc
	// Params: [ Num(2) Size(0x18) ]
	void OnCommonBannerShowed(struct FString FunctionName, struct UBaseUIView* View);

	// Object: Function GPQuest.GPQuestClientProxy.NotifyServerMediaEnd
	// Flags: [Native|Public]
	// Offset: 0x78909d4
	// Params: [ Num(2) Size(0xC) ]
	void NotifyServerMediaEnd(int64_t PlayerUin, uint32_t MediaNameCrc);

	// Object: Function GPQuest.GPQuestClientProxy.NotifyServerLevelsLoaded
	// Flags: [Native|Public]
	// Offset: 0x7890928
	// Params: [ Num(1) Size(0x8) ]
	void NotifyServerLevelsLoaded(uint64_t PlayerUin);

	// Object: Function GPQuest.GPQuestClientProxy.NotifyHudViewLoaded
	// Flags: [Native|Public]
	// Offset: 0x789090c
	// Params: [ Num(0) Size(0x0) ]
	void NotifyHudViewLoaded();

	// Object: Function GPQuest.GPQuestClientProxy.GetOptionalObjectiveInfo
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x78908a8
	// Params: [ Num(1) Size(0x50) ]
	struct FGPQuestObjectiveHUDInfo GetOptionalObjectiveInfo();

	// Object: Function GPQuest.GPQuestClientProxy.GetObjectiveInfo
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x7890844
	// Params: [ Num(1) Size(0x50) ]
	struct FGPQuestObjectiveHUDInfo GetObjectiveInfo();

	// Object: Function GPQuest.GPQuestClientProxy.ClientUpdateQuestState
	// Flags: [Net|NetReliableNative|Event|NetMulticast|Public|BlueprintCallable]
	// Offset: 0x7890700
	// Params: [ Num(2) Size(0x19) ]
	void ClientUpdateQuestState(struct FText PopText, EGPQuestStageState QuestState);

	// Object: Function GPQuest.GPQuestClientProxy.ClientsNotifyPlayObjectiveNotice
	// Flags: [Net|NetReliableNative|Event|NetMulticast|Public|BlueprintCallable]
	// Offset: 0x789055c
	// Params: [ Num(1) Size(0x80) ]
	void ClientsNotifyPlayObjectiveNotice(struct FGPQuestObjectiveNoticeInfo ObjectiveNoticeInfo);

	// Object: Function GPQuest.GPQuestClientProxy.ClientShowObjectiveTips
	// Flags: [Net|NetReliableNative|Event|NetMulticast|Public|BlueprintCallable]
	// Offset: 0x78904a8
	// Params: [ Num(1) Size(0x10) ]
	void ClientShowObjectiveTips(struct FString TipsText);

	// Object: Function GPQuest.GPQuestClientProxy.ClientShowObjectiveHint
	// Flags: [Net|NetReliableNative|Event|NetMulticast|Public|BlueprintCallable]
	// Offset: 0x78903b8
	// Params: [ Num(2) Size(0x11) ]
	void ClientShowObjectiveHint(struct FString HintText, EGPQuestObjectiveHUDType InObjectiveHUDType);

	// Object: Function GPQuest.GPQuestClientProxy.ClientShowHUDPanel
	// Flags: [Net|NetReliableNative|Event|NetMulticast|Public|BlueprintCallable]
	// Offset: 0x789030c
	// Params: [ Num(1) Size(0x8) ]
	void ClientShowHUDPanel(struct FName PanelConfigName);

	// Object: Function GPQuest.GPQuestClientProxy.ClientRemoveGameHudState
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0x7890260
	// Params: [ Num(1) Size(0x1) ]
	void ClientRemoveGameHudState(EGameHUDSate State);

	// Object: Function GPQuest.GPQuestClientProxy.ClientHUDPanelsOperateGameHudState
	// Flags: [Net|NetReliableNative|Event|NetMulticast|Public|BlueprintCallable]
	// Offset: 0x7890134
	// Params: [ Num(3) Size(0x12) ]
	void ClientHUDPanelsOperateGameHudState(struct TArray<struct FName> PanelConfigNames, EGameHUDSate State, EVisibleGameHUDStateOperators Operator);

	// Object: Function GPQuest.GPQuestClientProxy.ClientHideHUDPanel
	// Flags: [Net|NetReliableNative|Event|NetMulticast|Public|BlueprintCallable]
	// Offset: 0x7890088
	// Params: [ Num(1) Size(0x8) ]
	void ClientHideHUDPanel(struct FName PanelConfigName);

	// Object: Function GPQuest.GPQuestClientProxy.ClientHideActorInGame
	// Flags: [Net|NetReliableNative|Event|NetMulticast|Public|BlueprintCallable]
	// Offset: 0x788ff60
	// Params: [ Num(3) Size(0x11) ]
	void ClientHideActorInGame(struct UObject* ActorClass, struct FName ActorTag, uint8_t bHideInGame);

	// Object: Function GPQuest.GPQuestClientProxy.ClientAddGameHudState
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0x788feb4
	// Params: [ Num(1) Size(0x1) ]
	void ClientAddGameHudState(EGameHUDSate State);

	// Object: Function GPQuest.GPQuestClientProxy.ClearOptionalObjective
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x788fea0
	// Params: [ Num(0) Size(0x0) ]
	void ClearOptionalObjective();
	DEFINE_UE_CLASS_HELPERS(AGPQuestClientProxy, "GPQuestClientProxy")

};

// Object: Class GPQuest.GPQuestCountdownBase
// Size: 0x418 (Inherited: 0x370)
struct AGPQuestCountdownBase : AActor
{
	uint8_t bIsStoped : 1; // 0x370(0x1), Mask(0x1)
	uint8_t BitPad_0x370_1 : 7; // 0x370(0x1)
	uint8_t bIsFinished : 1; // 0x371(0x1), Mask(0x1)
	uint8_t BitPad_0x371_1 : 7; // 0x371(0x1)
	uint8_t Pad_0x372[0x6]; // 0x372(0x6)
	int64_t StartDateTime; // 0x378(0x8)
	int32_t CountdownDuration; // 0x380(0x4)
	uint8_t Pad_0x384[0x4]; // 0x384(0x4)
	struct FText Title; // 0x388(0x18)
	uint8_t Pad_0x3A0[0x10]; // 0x3A0(0x10)
	ECountDownHUDClassType CountDownHUDClassType; // 0x3B0(0x1)
	EQA_CountdownType CountdownType; // 0x3B1(0x1)
	uint8_t Pad_0x3B2[0x6]; // 0x3B2(0x6)
	struct UUserWidget* CountDownHUDClass; // 0x3B8(0x8)
	uint8_t Pad_0x3C0[0x8]; // 0x3C0(0x8)
	struct TMap<ECountDownHUDClassType, struct UUserWidget*> CountDownHUDMap; // 0x3C8(0x50)


	// Object: Function GPQuest.GPQuestCountdownBase.Recountdown
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x7892cb8
	// Params: [ Num(1) Size(0x4) ]
	void Recountdown(int32_t Duration);

	// Object: Function GPQuest.GPQuestCountdownBase.OnRep_CountdownType
	// Flags: [Final|Native|Public]
	// Offset: 0x7892ca4
	// Params: [ Num(0) Size(0x0) ]
	void OnRep_CountdownType();

	// Object: Function GPQuest.GPQuestCountdownBase.OnRep_CountDownHUDClassType
	// Flags: [Final|Native|Public]
	// Offset: 0x7892c90
	// Params: [ Num(0) Size(0x0) ]
	void OnRep_CountDownHUDClassType();

	// Object: Function GPQuest.GPQuestCountdownBase.GetRemainingTimeOnClient
	// Flags: [Final|BlueprintCosmetic|Native|Public|BlueprintCallable]
	// Offset: 0x7892c5c
	// Params: [ Num(1) Size(0x4) ]
	int32_t GetRemainingTimeOnClient();

	// Object: Function GPQuest.GPQuestCountdownBase.GetRemainingTime
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x7892c28
	// Params: [ Num(1) Size(0x4) ]
	int32_t GetRemainingTime();

	// Object: Function GPQuest.GPQuestCountdownBase.BP_RefreshCountdownType
	// Flags: [Event|Protected|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(0) Size(0x0) ]
	void BP_RefreshCountdownType();

	// Object: Function GPQuest.GPQuestCountdownBase.BP_OnServerStopCountDown
	// Flags: [Event|Protected|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(0) Size(0x0) ]
	void BP_OnServerStopCountDown();

	// Object: Function GPQuest.GPQuestCountdownBase.BP_OnServerStartCountDown
	// Flags: [Event|Protected|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(0) Size(0x0) ]
	void BP_OnServerStartCountDown();

	// Object: Function GPQuest.GPQuestCountdownBase.BP_CreateCountDownHUD
	// Flags: [Event|Protected|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(1) Size(0x1) ]
	void BP_CreateCountDownHUD(uint8_t bShowHUD);
	DEFINE_UE_CLASS_HELPERS(AGPQuestCountdownBase, "GPQuestCountdownBase")

};

// Object: Class GPQuest.GPQuestTextUtils
// Size: 0x28 (Inherited: 0x28)
struct UGPQuestTextUtils : UBlueprintFunctionLibrary
{

	// Object: Function GPQuest.GPQuestTextUtils.GetFinalText
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x7893508
	// Params: [ Num(2) Size(0x40) ]
	static struct FText GetFinalText(const struct FGPQuestText& Text);

	// Object: Function GPQuest.GPQuestTextUtils.GetDisplayString
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x78933bc
	// Params: [ Num(2) Size(0x38) ]
	static struct FString GetDisplayString(const struct FGPQuestText& Text);
	DEFINE_UE_CLASS_HELPERS(UGPQuestTextUtils, "GPQuestTextUtils")

};

// Object: Class GPQuest.GPQuestHUDSubsystem
// Size: 0x430 (Inherited: 0x370)
struct AGPQuestHUDSubsystem : AActor
{
	struct FGPQuestObjectiveHUDInfo ObjectiveInfo; // 0x370(0x50)
	EGPQuestObjectiveState ObjectiveState; // 0x3C0(0x1)
	uint8_t Pad_0x3C1[0x7]; // 0x3C1(0x7)
	struct FMulticastInlineDelegate OnSetObjectiveTitleEvent; // 0x3C8(0x10)
	struct FMulticastInlineDelegate OnObjectiveStateChangedEvent; // 0x3D8(0x10)
	struct FMulticastInlineDelegate OnSetObjTitleWithHBarEvent; // 0x3E8(0x10)
	struct FText StageTitle; // 0x3F8(0x18)
	struct FMulticastInlineDelegate OnSetStageTitleEvent; // 0x410(0x10)
	struct FMulticastInlineDelegate OnPlayObjectiveNoticeEvent; // 0x420(0x10)
	DEFINE_UE_CLASS_HELPERS(AGPQuestHUDSubsystem, "GPQuestHUDSubsystem")

};

// Object: Class GPQuest.GPQuestInteractorInterface
// Size: 0x28 (Inherited: 0x28)
struct IGPQuestInteractorInterface : IInterface
{

	// Object: Function GPQuest.GPQuestInteractorInterface.OnStatusChanged_Broadcast
	// Flags: [Native|Event|Public|BlueprintCallable|BlueprintEvent]
	// Offset: 0x78937c0
	// Params: [ Num(0) Size(0x0) ]
	void OnStatusChanged_Broadcast();

	// Object: Function GPQuest.GPQuestInteractorInterface.MakeInteractorSuccessful
	// Flags: [Event|Public|BlueprintCallable|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(0) Size(0x0) ]
	void MakeInteractorSuccessful();

	// Object: Function GPQuest.GPQuestInteractorInterface.MakeInteractorFail
	// Flags: [Event|Public|BlueprintCallable|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(0) Size(0x0) ]
	void MakeInteractorFail();

	// Object: Function GPQuest.GPQuestInteractorInterface.GetInteractorStatus
	// Flags: [Event|Public|BlueprintCallable|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(1) Size(0x1) ]
	EGPQuestInteractorStatus GetInteractorStatus();

	// Object: Function GPQuest.GPQuestInteractorInterface.DeactivateInteractor
	// Flags: [Event|Public|BlueprintCallable|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(0) Size(0x0) ]
	void DeactivateInteractor();

	// Object: Function GPQuest.GPQuestInteractorInterface.ActivateInteractor
	// Flags: [Event|Public|BlueprintCallable|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(0) Size(0x0) ]
	void ActivateInteractor();
	DEFINE_UE_CLASS_HELPERS(IGPQuestInteractorInterface, "GPQuestInteractorInterface")

};

// Object: Class GPQuest.GPQuestLevelResetComponent
// Size: 0x120 (Inherited: 0xF8)
struct UGPQuestLevelResetComponent : UActorComponent
{
	struct FMulticastInlineDelegate OnLevelReset; // 0xF8(0x10)
	struct TArray<struct FGPQuestReleventStageInfo> RelevantStages; // 0x108(0x10)
	uint8_t bListenResetEventOnce : 1; // 0x118(0x1), Mask(0x1)
	uint8_t BitPad_0x118_1 : 7; // 0x118(0x1)
	uint8_t Pad_0x119[0x7]; // 0x119(0x7)


	// Object: Function GPQuest.GPQuestLevelResetComponent.TestReset
	// Flags: [Final|Native|Protected]
	// Offset: 0x7893888
	// Params: [ Num(0) Size(0x0) ]
	void TestReset();

	// Object: Function GPQuest.GPQuestLevelResetComponent.OnResetStage
	// Flags: [Final|Native|Protected]
	// Offset: 0x78937e4
	// Params: [ Num(1) Size(0x8) ]
	void OnResetStage(struct AGPQuestStage* QStage);

	// Object: Function GPQuest.GPQuestLevelResetComponent.ListenLevelResetEventOnce
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x109a5b44
	// Params: [ Num(0) Size(0x0) ]
	void ListenLevelResetEventOnce();
	DEFINE_UE_CLASS_HELPERS(UGPQuestLevelResetComponent, "GPQuestLevelResetComponent")

};

// Object: Class GPQuest.GPQuestMarkerBase
// Size: 0x420 (Inherited: 0x370)
struct AGPQuestMarkerBase : AActor
{
	struct UGPQuestRuleHelperComponent* RuleHelper; // 0x370(0x8)
	float DistanceThreshold; // 0x378(0x4)
	float MarkerScale; // 0x37C(0x4)
	EGPQuestActionMarkerType MarkerType; // 0x380(0x1)
	uint8_t Pad_0x381[0x3]; // 0x381(0x3)
	float MarkerTimeLimit; // 0x384(0x4)
	uint8_t AlwaysTop : 1; // 0x388(0x1), Mask(0x1)
	uint8_t BitPad_0x388_1 : 7; // 0x388(0x1)
	uint8_t ShowInBigMap : 1; // 0x389(0x1), Mask(0x1)
	uint8_t BitPad_0x389_1 : 7; // 0x389(0x1)
	uint8_t Pad_0x38A[0xA]; // 0x38A(0xA)
	uint8_t MarkerActive : 1; // 0x394(0x1), Mask(0x1)
	uint8_t BitPad_0x394_1 : 7; // 0x394(0x1)
	uint8_t Pad_0x395[0x3]; // 0x395(0x3)
	int32_t MarkerActiveUpdate; // 0x398(0x4)
	uint8_t Client_AlwaysTop_Active : 1; // 0x39C(0x1), Mask(0x1)
	uint8_t BitPad_0x39C_1 : 7; // 0x39C(0x1)
	uint8_t Pad_0x39D[0x3]; // 0x39D(0x3)
	struct TArray<uint64_t> ValidUins; // 0x3A0(0x10)
	struct FString DebugName; // 0x3B0(0x10)
	uint8_t ShowMarkCircel : 1; // 0x3C0(0x1), Mask(0x1)
	uint8_t BitPad_0x3C0_1 : 7; // 0x3C0(0x1)
	uint8_t Pad_0x3C1[0x3]; // 0x3C1(0x3)
	struct FVector ShowMarkCircelOffset; // 0x3C4(0xC)
	struct FVector ShowMarkCircelScale; // 0x3D0(0xC)
	uint8_t IsUIOutMarkerArea : 1; // 0x3DC(0x1), Mask(0x1)
	uint8_t BitPad_0x3DC_1 : 7; // 0x3DC(0x1)
	uint8_t bIsAimed : 1; // 0x3DD(0x1), Mask(0x1)
	uint8_t BitPad_0x3DD_1 : 7; // 0x3DD(0x1)
	uint8_t Pad_0x3DE[0x2]; // 0x3DE(0x2)
	float MaxDistance; // 0x3E0(0x4)
	struct FVector2D OriginMarkerPos; // 0x3E4(0x8)
	struct FVector2D EllipseAreaMarkerPos; // 0x3EC(0x8)
	struct FVector2D OutScreenDir; // 0x3F4(0x8)
	uint8_t Pad_0x3FC[0x8]; // 0x3FC(0x8)
	struct FVector MarkerServerPos; // 0x404(0xC)
	struct UUserWidget* MarkerView; // 0x410(0x8)
	uint8_t Pad_0x418[0x8]; // 0x418(0x8)


	// Object: Function GPQuest.GPQuestMarkerBase.UpdateMarkerLoc
	// Flags: [Final|Native|Public]
	// Offset: 0x7893e5c
	// Params: [ Num(0) Size(0x0) ]
	void UpdateMarkerLoc();

	// Object: Function GPQuest.GPQuestMarkerBase.ShowMarkCircelOnClient
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(0) Size(0x0) ]
	void ShowMarkCircelOnClient();

	// Object: Function GPQuest.GPQuestMarkerBase.SetTargetWidgetScale
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(1) Size(0x4) ]
	void SetTargetWidgetScale(float Scale);

	// Object: Function GPQuest.GPQuestMarkerBase.SetMarkerActive
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x7893db0
	// Params: [ Num(1) Size(0x1) ]
	void SetMarkerActive(uint8_t Active);

	// Object: Function GPQuest.GPQuestMarkerBase.OnRep_ValidUins
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x7893d9c
	// Params: [ Num(0) Size(0x0) ]
	void OnRep_ValidUins();

	// Object: Function GPQuest.GPQuestMarkerBase.OnRep_ShowMarkCircel
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x7893d88
	// Params: [ Num(0) Size(0x0) ]
	void OnRep_ShowMarkCircel();

	// Object: Function GPQuest.GPQuestMarkerBase.OnRep_ShowInBigMap
	// Flags: [Native|Public]
	// Offset: 0x7893d6c
	// Params: [ Num(0) Size(0x0) ]
	void OnRep_ShowInBigMap();

	// Object: Function GPQuest.GPQuestMarkerBase.OnRep_MarkerServerPos
	// Flags: [Native|Public]
	// Offset: 0x7893d50
	// Params: [ Num(0) Size(0x0) ]
	void OnRep_MarkerServerPos();

	// Object: Function GPQuest.GPQuestMarkerBase.OnRep_MarkerScale
	// Flags: [Final|Native|Public]
	// Offset: 0x7893d3c
	// Params: [ Num(0) Size(0x0) ]
	void OnRep_MarkerScale();

	// Object: Function GPQuest.GPQuestMarkerBase.OnRep_MarkerActive
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xfc3aa4c
	// Params: [ Num(0) Size(0x0) ]
	void OnRep_MarkerActive();

	// Object: Function GPQuest.GPQuestMarkerBase.OnNewGameHudStateChanged
	// Flags: [Final|Native|Public]
	// Offset: 0xf53ba54
	// Params: [ Num(1) Size(0x8) ]
	void OnNewGameHudStateChanged(struct UHudManager* HudManager);

	// Object: Function GPQuest.GPQuestMarkerBase.OnMarkerViewCreatedOnClient
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(1) Size(0x8) ]
	void OnMarkerViewCreatedOnClient(struct UBaseUIView* View);

	// Object: Function GPQuest.GPQuestMarkerBase.OnGameHudStateChanged
	// Flags: [Final|Native|Public]
	// Offset: 0x7893d28
	// Params: [ Num(0) Size(0x0) ]
	void OnGameHudStateChanged();

	// Object: Function GPQuest.GPQuestMarkerBase.OnDeactivateMarkerOnClient
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(0) Size(0x0) ]
	void OnDeactivateMarkerOnClient();

	// Object: Function GPQuest.GPQuestMarkerBase.OnActivateMarkerOnClient
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(0) Size(0x0) ]
	void OnActivateMarkerOnClient();

	// Object: Function GPQuest.GPQuestMarkerBase.GetViewportLocation
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x7893c80
	// Params: [ Num(2) Size(0x10) ]
	struct FVector2D GetViewportLocation(struct FVector2D AnchorCenterOffset);

	// Object: Function GPQuest.GPQuestMarkerBase.GetViewportAimMarkerActor
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x7893c48
	// Params: [ Num(1) Size(0x1) ]
	uint8_t GetViewportAimMarkerActor();

	// Object: Function GPQuest.GPQuestMarkerBase.GetUserWidgetLocation
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x7893b68
	// Params: [ Num(3) Size(0x18) ]
	struct FVector2D GetUserWidgetLocation(struct FVector2D WidgetSize, struct FVector2D AnchorCenterOffset);

	// Object: Function GPQuest.GPQuestMarkerBase.DeactivateMarkerOnClient
	// Flags: [Net|NetReliableNative|Event|NetMulticast|Public]
	// Offset: 0x7893b4c
	// Params: [ Num(0) Size(0x0) ]
	void DeactivateMarkerOnClient();

	// Object: Function GPQuest.GPQuestMarkerBase.DeactivateMarker
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x7893b38
	// Params: [ Num(0) Size(0x0) ]
	void DeactivateMarker();

	// Object: Function GPQuest.GPQuestMarkerBase.ActivateMarkerOnClient
	// Flags: [Net|NetReliableNative|Event|NetMulticast|Public]
	// Offset: 0x7893b1c
	// Params: [ Num(0) Size(0x0) ]
	void ActivateMarkerOnClient();

	// Object: Function GPQuest.GPQuestMarkerBase.ActivateMarker
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x7893b08
	// Params: [ Num(0) Size(0x0) ]
	void ActivateMarker();
	DEFINE_UE_CLASS_HELPERS(AGPQuestMarkerBase, "GPQuestMarkerBase")

};

// Object: Class GPQuest.GPQuestObjectiveAsyncReturnAction_Default
// Size: 0x60 (Inherited: 0x40)
struct UGPQuestObjectiveAsyncReturnAction_Default : UGPQuestObjectiveAsyncReturnActionBase
{
	struct FMulticastInlineDelegate OnComplete; // 0x40(0x10)
	struct FMulticastInlineDelegate OnFailed; // 0x50(0x10)


	// Object: Function GPQuest.GPQuestObjectiveAsyncReturnAction_Default.EndQuestObjectiveNew
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x78971ec
	// Params: [ Num(2) Size(0x9) ]
	static void EndQuestObjectiveNew(struct AGPQuest* Quest, EGPQuestObjectiveAsyncReturnBranch Branch);

	// Object: Function GPQuest.GPQuestObjectiveAsyncReturnAction_Default.EndQuestObjective
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x789711c
	// Params: [ Num(2) Size(0x9) ]
	static void EndQuestObjective(struct AGPQuestStage* QStage, EGPQuestObjectiveAsyncReturnBranch Branch);

	// Object: Function GPQuest.GPQuestObjectiveAsyncReturnAction_Default.BeginQuestObjectiveNewWithTargetType
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x789703c
	// Params: [ Num(3) Size(0x18) ]
	static struct UGPQuestObjectiveAsyncReturnAction_Default* BeginQuestObjectiveNewWithTargetType(struct AGPQuest* Quest, ESOLTargetType TargetType);

	// Object: Function GPQuest.GPQuestObjectiveAsyncReturnAction_Default.BeginQuestObjectiveNew
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x7896f5c
	// Params: [ Num(3) Size(0x18) ]
	static struct UGPQuestObjectiveAsyncReturnAction_Default* BeginQuestObjectiveNew(struct AGPQuest* Quest, int32_t QObjective);

	// Object: Function GPQuest.GPQuestObjectiveAsyncReturnAction_Default.BeginQuestObjective
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x7896e7c
	// Params: [ Num(3) Size(0x18) ]
	static struct UGPQuestObjectiveAsyncReturnAction_Default* BeginQuestObjective(struct AGPQuestStage* QStage, int32_t QObjective);
	DEFINE_UE_CLASS_HELPERS(UGPQuestObjectiveAsyncReturnAction_Default, "GPQuestObjectiveAsyncReturnAction_Default")

};

// Object: Class GPQuest.GPQuestRuleHelperComponent
// Size: 0xF8 (Inherited: 0xF8)
struct UGPQuestRuleHelperComponent : UActorComponent
{	DEFINE_UE_CLASS_HELPERS(UGPQuestRuleHelperComponent, "GPQuestRuleHelperComponent")

};

// Object: Class GPQuest.GPQuestSettings
// Size: 0x50 (Inherited: 0x28)
struct UGPQuestSettings : UObject
{
	struct AGPQuest* QuestParentClass; // 0x28(0x8)
	struct AGPQuestStage* QuestStageParentClass; // 0x30(0x8)
	struct AGPQuestMarkerBase* QuestDefaultMarkerClass; // 0x38(0x8)
	struct AGPQuestCountdownBase* QuestDefaultCountdownClass; // 0x40(0x8)
	uint8_t bEnableCleanupStageRelevantLevels : 1; // 0x48(0x1), Mask(0x1)
	uint8_t BitPad_0x48_1 : 7; // 0x48(0x1)
	uint8_t Pad_0x49[0x7]; // 0x49(0x7)


	// Object: Function GPQuest.GPQuestSettings.Get
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x7897434
	// Params: [ Num(1) Size(0x8) ]
	static struct UGPQuestSettings* Get();
	DEFINE_UE_CLASS_HELPERS(UGPQuestSettings, "GPQuestSettings")

};

// Object: Class GPQuest.GPQuestStageAsyncReturnActionBase
// Size: 0x30 (Inherited: 0x30)
struct UGPQuestStageAsyncReturnActionBase : UBlueprintAsyncActionBase
{

	// Object: Function GPQuest.GPQuestStageAsyncReturnActionBase.FireReturnAction
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0x7897620
	// Params: [ Num(1) Size(0x1) ]
	void FireReturnAction(EGPQuestStageAsyncReturnBranch Branch);
	DEFINE_UE_CLASS_HELPERS(UGPQuestStageAsyncReturnActionBase, "GPQuestStageAsyncReturnActionBase")

};

// Object: Class GPQuest.GPQuestStage
// Size: 0x520 (Inherited: 0x400)
struct AGPQuestStage : AGPQuestActionContext
{
	struct UGPQuestRuleHelperComponent* RuleHelper; // 0x400(0x8)
	struct UGPQuestStageAsyncReturnActionBase* StageAsyncReturnAction; // 0x408(0x8)
	struct TArray<struct FName> ReturnActionPins; // 0x410(0x10)
	ENetRole LocalNetRole; // 0x420(0x1)
	ENetRole RemoteNetRole; // 0x421(0x1)
	uint8_t Pad_0x422[0x6]; // 0x422(0x6)
	struct AGPQuest* OwningQuest; // 0x428(0x8)
	struct FGPQuestStageData Data; // 0x430(0x60)
	EGPQuestStageState StageState; // 0x490(0x1)
	EGPQuestPlayReason PlayReason; // 0x491(0x1)
	uint8_t Pad_0x492[0x6]; // 0x492(0x6)
	struct ULevelStreaming* QLevelStreaming; // 0x498(0x8)
	struct ULevel* QLevel; // 0x4A0(0x8)
	struct FName QLevelFullName; // 0x4A8(0x8)
	struct FString QLevelBaseDir; // 0x4B0(0x10)
	struct FString StageName; // 0x4C0(0x10)
	int32_t StageId; // 0x4D0(0x4)
	int32_t OwningQuestId; // 0x4D4(0x4)
	uint8_t bPlaying : 1; // 0x4D8(0x1), Mask(0x1)
	uint8_t BitPad_0x4D8_1 : 7; // 0x4D8(0x1)
	uint8_t Pad_0x4D9[0x3]; // 0x4D9(0x3)
	int32_t StageObjectivesCount; // 0x4DC(0x4)
	float MaxResetStageDelay; // 0x4E0(0x4)
	uint8_t bNeedResetStageWhenFailed : 1; // 0x4E4(0x1), Mask(0x1)
	uint8_t BitPad_0x4E4_1 : 7; // 0x4E4(0x1)
	uint8_t Pad_0x4E5[0x3]; // 0x4E5(0x3)
	float StageTimeLimit; // 0x4E8(0x4)
	uint8_t Pad_0x4EC[0x4]; // 0x4EC(0x4)
	struct TArray<struct FString> RelevantLevels; // 0x4F0(0x10)
	struct TArray<struct FString> RelevantLevels_HD; // 0x500(0x10)
	struct FName FadeUITextKeyName; // 0x510(0x8)
	uint8_t Pad_0x518[0x8]; // 0x518(0x8)


	// Object: Function GPQuest.GPQuestStage.ResetStageBroadcast
	// Flags: [Final|Net|NetReliableNative|Event|NetMulticast|Private]
	// Offset: 0x7897c30
	// Params: [ Num(1) Size(0x1) ]
	void ResetStageBroadcast(EGPQuestPlayReason Reason);

	// Object: Function GPQuest.GPQuestStage.OnStageFailed
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(0) Size(0x0) ]
	void OnStageFailed();

	// Object: Function GPQuest.GPQuestStage.OnResetStageComplete
	// Flags: [Final|Native|Private]
	// Offset: 0x7897c1c
	// Params: [ Num(0) Size(0x0) ]
	void OnResetStageComplete();

	// Object: Function GPQuest.GPQuestStage.OnResetStageClient
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(0) Size(0x0) ]
	void OnResetStageClient();

	// Object: Function GPQuest.GPQuestStage.OnResetStage
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(0) Size(0x0) ]
	void OnResetStage();

	// Object: Function GPQuest.GPQuestStage.OnRep_StageState
	// Flags: [Final|Native|Public]
	// Offset: 0x7897c08
	// Params: [ Num(0) Size(0x0) ]
	void OnRep_StageState();

	// Object: Function GPQuest.GPQuestStage.OnPreBeginStage
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(0) Size(0x0) ]
	void OnPreBeginStage();

	// Object: Function GPQuest.GPQuestStage.OnPlayerReconnectToStage
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(1) Size(0x8) ]
	void OnPlayerReconnectToStage(struct APlayerController* ReconnectPlayer);

	// Object: Function GPQuest.GPQuestStage.OnEndStage
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(0) Size(0x0) ]
	void OnEndStage();

	// Object: Function GPQuest.GPQuestStage.OnBeginStage
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(0) Size(0x0) ]
	void OnBeginStage();

	// Object: Function GPQuest.GPQuestStage.EndStage
	// Flags: [Native|Public]
	// Offset: 0x7897bec
	// Params: [ Num(0) Size(0x0) ]
	void EndStage();

	// Object: Function GPQuest.GPQuestStage.ClientProxy
	// Flags: [Native|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x7897bb0
	// Params: [ Num(1) Size(0x8) ]
	struct AGPQuestClientProxy* ClientProxy();

	// Object: Function GPQuest.GPQuestStage.CleanupLastStageRelevantLevelBroadcast
	// Flags: [Final|Net|NetReliableNative|Event|NetMulticast|Private]
	// Offset: 0x7897b04
	// Params: [ Num(1) Size(0x8) ]
	void CleanupLastStageRelevantLevelBroadcast(struct AGPQuestStage* LastStageClass);

	// Object: Function GPQuest.GPQuestStage.BreakStage
	// Flags: [Native|Public]
	// Offset: 0x7897ae8
	// Params: [ Num(0) Size(0x0) ]
	void BreakStage();

	// Object: Function GPQuest.GPQuestStage.BeginStage
	// Flags: [Native|Public]
	// Offset: 0x7897a00
	// Params: [ Num(2) Size(0x10) ]
	void BeginStage(EGPQuestPlayReason Reason, struct AGPQuestStage* LastStageClass);
	DEFINE_UE_CLASS_HELPERS(AGPQuestStage, "GPQuestStage")

};

// Object: Class GPQuest.GPQuestStageAsyncReturnAction_Default
// Size: 0x90 (Inherited: 0x30)
struct UGPQuestStageAsyncReturnAction_Default : UGPQuestStageAsyncReturnActionBase
{
	struct FMulticastInlineDelegate OnComplete; // 0x30(0x10)
	struct FMulticastInlineDelegate OnFailed; // 0x40(0x10)
	uint8_t Pad_0x50[0x40]; // 0x50(0x40)


	// Object: Function GPQuest.GPQuestStageAsyncReturnAction_Default.ReplayQuestStage
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x78982e4
	// Params: [ Num(2) Size(0x9) ]
	static void ReplayQuestStage(struct AGPQuest* Quest, EGPQuestPlayReason Reason);

	// Object: Function GPQuest.GPQuestStageAsyncReturnAction_Default.PlayQuestStageAsync
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x7898058
	// Params: [ Num(5) Size(0x40) ]
	static struct UGPQuestStageAsyncReturnAction_Default* PlayQuestStageAsync(struct AGPQuest* Quest, struct FText StageTitle, struct FString StageName, EGPQuestPlayReason Reason);

	// Object: Function GPQuest.GPQuestStageAsyncReturnAction_Default.PlayQuestStage
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x7897dcc
	// Params: [ Num(5) Size(0x40) ]
	static struct UGPQuestStageAsyncReturnAction_Default* PlayQuestStage(struct AGPQuest* Quest, struct FText StageTitle, struct FString QStage, EGPQuestPlayReason Reason);

	// Object: Function GPQuest.GPQuestStageAsyncReturnAction_Default.EndStage
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x7897cfc
	// Params: [ Num(2) Size(0x9) ]
	static void EndStage(struct AGPQuestStage* QStage, EGPQuestStageAsyncReturnBranch Branch);
	DEFINE_UE_CLASS_HELPERS(UGPQuestStageAsyncReturnAction_Default, "GPQuestStageAsyncReturnAction_Default")

};

// Object: Class GPQuest.GPQuestStageUtils
// Size: 0x28 (Inherited: 0x28)
struct UGPQuestStageUtils : UBlueprintFunctionLibrary
{

	// Object: Function GPQuest.GPQuestStageUtils.GetStageTitleKey
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x78988cc
	// Params: [ Num(2) Size(0x18) ]
	static struct FString GetStageTitleKey(struct AGPQuestStage* QStage);

	// Object: Function GPQuest.GPQuestStageUtils.GetStageSummaryKey
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x78987f4
	// Params: [ Num(2) Size(0x18) ]
	static struct FString GetStageSummaryKey(struct AGPQuestStage* QStage);

	// Object: Function GPQuest.GPQuestStageUtils.GetStageLevelStreaming
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x7898750
	// Params: [ Num(2) Size(0x10) ]
	static struct ULevelStreaming* GetStageLevelStreaming(struct AGPQuestStage* QStage);

	// Object: Function GPQuest.GPQuestStageUtils.GetStageData
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x789865c
	// Params: [ Num(2) Size(0x68) ]
	static struct FGPQuestStageData GetStageData(struct AGPQuestStage* QStage);

	// Object: Function GPQuest.GPQuestStageUtils.GetObjectiveTitleKey
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x7898548
	// Params: [ Num(3) Size(0x20) ]
	static struct FString GetObjectiveTitleKey(struct AGPQuestStage* QStage, int32_t objectiveId);

	// Object: Function GPQuest.GPQuestStageUtils.GetLevelStreamingByName
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x789846c
	// Params: [ Num(3) Size(0x18) ]
	static struct ULevelStreaming* GetLevelStreamingByName(struct AGPQuestStage* QStage, struct FName QLevelFullName);
	DEFINE_UE_CLASS_HELPERS(UGPQuestStageUtils, "GPQuestStageUtils")

};

// Object: Class GPQuest.GPQuestSystem
// Size: 0xF0 (Inherited: 0x30)
struct UGPQuestSystem : UWorldSubsystem
{
	uint8_t Pad_0x30[0x8]; // 0x30(0x8)
	struct FMulticastInlineDelegate OnPreBeginQuestEvent; // 0x38(0x10)
	struct FMulticastInlineDelegate OnPostEndQuestEvent; // 0x48(0x10)
	struct FMulticastInlineDelegate OnPreBeginStageEvent; // 0x58(0x10)
	struct FMulticastInlineDelegate OnPostEndStageEvent; // 0x68(0x10)
	struct FMulticastInlineDelegate OnStageStateChangedEvent; // 0x78(0x10)
	struct FMulticastInlineDelegate OnResetStageEvent; // 0x88(0x10)
	struct FMulticastInlineDelegate OnPreBeginObjectiveEvent; // 0x98(0x10)
	struct FMulticastInlineDelegate OnPostEndObjectiveEvent; // 0xA8(0x10)
	struct FMulticastInlineDelegate OnReplayStageEvent; // 0xB8(0x10)
	struct FMulticastInlineDelegate OnNoReplayStageEvent; // 0xC8(0x10)
	struct AGPQuest* CurrentQuest; // 0xD8(0x8)
	struct TArray<struct AGPQuest*> PlayingQuests; // 0xE0(0x10)


	// Object: Function GPQuest.GPQuestSystem.UnloadQuest
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0x78993a4
	// Params: [ Num(2) Size(0xC) ]
	void UnloadQuest(struct UObject* WorldContextObject, int32_t QuestID);

	// Object: Function GPQuest.GPQuestSystem.QuitQuest
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0x7899388
	// Params: [ Num(0) Size(0x0) ]
	void QuitQuest();

	// Object: Function GPQuest.GPQuestSystem.LoadQuestInSpecifiedDirWithReturn
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0x78991c0
	// Params: [ Num(5) Size(0x30) ]
	struct AGPQuest* LoadQuestInSpecifiedDirWithReturn(struct UObject* WorldContextObject, struct FString QuestDir, int32_t QuestID, struct AGPQuestVolume* GPQuestVolume);

	// Object: Function GPQuest.GPQuestSystem.LoadQuestInSpecifiedDir
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0x7899008
	// Params: [ Num(4) Size(0x28) ]
	void LoadQuestInSpecifiedDir(struct UObject* WorldContextObject, struct FString QuestDir, int32_t QuestID, struct AGPQuestVolume* GPQuestVolume);

	// Object: Function GPQuest.GPQuestSystem.LoadQuestByQuestPathName
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0x7898e50
	// Params: [ Num(4) Size(0x28) ]
	void LoadQuestByQuestPathName(struct UObject* WorldContextObject, struct FString QuestPathName, int32_t QuestID, struct AGPQuestVolume* GPQuestVolume);

	// Object: Function GPQuest.GPQuestSystem.LoadQuest
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0x7898d20
	// Params: [ Num(4) Size(0x19) ]
	uint8_t LoadQuest(struct UObject* WorldContextObject, int32_t QuestID, struct AGPQuestVolume* GPQuestVolume);

	// Object: Function GPQuest.GPQuestSystem.GotoStage
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x7898c38
	// Params: [ Num(2) Size(0x18) ]
	void GotoStage(int32_t QuestID, struct FString StageName);

	// Object: Function GPQuest.GPQuestSystem.GotoObjective
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x7898b14
	// Params: [ Num(3) Size(0x1C) ]
	void GotoObjective(int32_t QuestID, struct FString StageName, int32_t objectiveId);

	// Object: Function GPQuest.GPQuestSystem.GetQuest
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0x7898a60
	// Params: [ Num(2) Size(0x10) ]
	struct AGPQuest* GetQuest(int32_t QuestID);
	DEFINE_UE_CLASS_HELPERS(UGPQuestSystem, "GPQuestSystem")

};

// Object: Class GPQuest.GPQuestUtils
// Size: 0x28 (Inherited: 0x28)
struct UGPQuestUtils : UBlueprintFunctionLibrary
{

	// Object: Function GPQuest.GPQuestUtils.ToQuest
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x789a7d8
	// Params: [ Num(2) Size(0x10) ]
	static struct AGPQuest* ToQuest(struct AGPQuestActionContext* QAContext);

	// Object: Function GPQuest.GPQuestUtils.IsStandalone
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x789a730
	// Params: [ Num(2) Size(0x9) ]
	static uint8_t IsStandalone(struct UObject* WorldContextObject);

	// Object: Function GPQuest.GPQuestUtils.IsServer
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0xf8b6fec
	// Params: [ Num(3) Size(0xA) ]
	static uint8_t IsServer(struct UObject* WorldContextObject, uint8_t bIncludeStandalone);

	// Object: Function GPQuest.GPQuestUtils.IsPC
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0xf866978
	// Params: [ Num(2) Size(0x9) ]
	static uint8_t IsPC(struct UObject* WorldContextObject);

	// Object: Function GPQuest.GPQuestUtils.IsEditor
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x789a688
	// Params: [ Num(2) Size(0x9) ]
	static uint8_t IsEditor(struct UObject* WorldContextObject);

	// Object: Function GPQuest.GPQuestUtils.IsClient
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0xf8f8f6c
	// Params: [ Num(3) Size(0xA) ]
	static uint8_t IsClient(struct UObject* WorldContextObject, uint8_t bIncludeStandalone);

	// Object: Function GPQuest.GPQuestUtils.HasLocalPlayer
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x789a5e0
	// Params: [ Num(2) Size(0x9) ]
	static uint8_t HasLocalPlayer(struct UObject* WorldContextObject);

	// Object: Function GPQuest.GPQuestUtils.GetStagesInQuest
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x789a4ec
	// Params: [ Num(3) Size(0x20) ]
	static struct TArray<struct FString> GetStagesInQuest(struct UObject* WorldContextObject, int32_t QuestID);

	// Object: Function GPQuest.GPQuestUtils.GetStageName
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x789a3d8
	// Params: [ Num(3) Size(0x18) ]
	static struct FString GetStageName(int32_t QuestID, int32_t StageId);

	// Object: Function GPQuest.GPQuestUtils.GetStageId
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x789a2e0
	// Params: [ Num(2) Size(0x14) ]
	static int32_t GetStageId(struct FString StageName);

	// Object: Function GPQuest.GPQuestUtils.GetQuestsInWorld
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x789a208
	// Params: [ Num(2) Size(0x18) ]
	static struct TArray<int32_t> GetQuestsInWorld(struct UObject* WorldContextObject);

	// Object: Function GPQuest.GPQuestUtils.GetObjectivesNumInStage
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x789a0e4
	// Params: [ Num(4) Size(0x24) ]
	static int32_t GetObjectivesNumInStage(struct UObject* WorldContextObject, int32_t QuestID, struct FString StageName);

	// Object: Function GPQuest.GPQuestUtils.GetObjectivesNameInStage
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	// Offset: 0x7899fec
	// Params: [ Num(3) Size(0x1C) ]
	static int32_t GetObjectivesNameInStage(struct AGPQuestStage* StageClass, struct TArray<struct FString>& OutNames);

	// Object: Function GPQuest.GPQuestUtils.GetLocalPlayerController
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x7899f48
	// Params: [ Num(2) Size(0x10) ]
	static struct APlayerController* GetLocalPlayerController(struct UObject* WorldContextObject);

	// Object: Function GPQuest.GPQuestUtils.GetAllQuests
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x7899eb0
	// Params: [ Num(1) Size(0x10) ]
	static struct TArray<int32_t> GetAllQuests();

	// Object: Function GPQuest.GPQuestUtils.GetActorByName
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x7899dd4
	// Params: [ Num(3) Size(0x18) ]
	static struct AActor* GetActorByName(struct UObject* WorldContextObject, struct FName Name);

	// Object: Function GPQuest.GPQuestUtils.FindFirstActorWithInterface
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x7899c00
	// Params: [ Num(7) Size(0x40) ]
	static struct AActor* FindFirstActorWithInterface(struct UObject* WorldContextObject, struct AActor* ActorClass, struct FName Tag, struct FString Name, struct IInterface* InterfaceClass, EGPQuestActionScope Scope);

	// Object: Function GPQuest.GPQuestUtils.FindFirstActorWithComponent
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x7899a2c
	// Params: [ Num(7) Size(0x40) ]
	static struct UActorComponent* FindFirstActorWithComponent(struct UObject* WorldContextObject, struct AActor* ActorClass, struct FName Tag, struct FString Name, struct UActorComponent* ComponentClass, EGPQuestActionScope Scope);

	// Object: Function GPQuest.GPQuestUtils.FindFirstActor
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x7899894
	// Params: [ Num(6) Size(0x38) ]
	static struct AActor* FindFirstActor(struct UObject* WorldContextObject, struct AActor* ActorClass, struct FName Tag, struct FString Name, EGPQuestActionScope Scope);

	// Object: Function GPQuest.GPQuestUtils.FindCurrentStage
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x78997f0
	// Params: [ Num(2) Size(0x10) ]
	static struct AGPQuestStage* FindCurrentStage(struct UObject* WorldContextObject);

	// Object: Function GPQuest.GPQuestUtils.FindCurrentQuest
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x789974c
	// Params: [ Num(2) Size(0x10) ]
	static struct AGPQuest* FindCurrentQuest(struct UObject* WorldContextObject);

	// Object: Function GPQuest.GPQuestUtils.FindAllActor
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x7899570
	// Params: [ Num(6) Size(0x40) ]
	static void FindAllActor(struct UObject* WorldContextObject, struct AActor* ActorClass, struct FName Tag, struct FString Name, EGPQuestActionScope Scope, struct TArray<struct AActor*>& OutActors);

	// Object: Function GPQuest.GPQuestUtils.EndQuest
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x78994a0
	// Params: [ Num(2) Size(0x9) ]
	static void EndQuest(struct AGPQuest* Quest, EGPQuestEndReason EndReason);
	DEFINE_UE_CLASS_HELPERS(UGPQuestUtils, "GPQuestUtils")

};

// Object: Class GPQuest.GPQuestVolume
// Size: 0x420 (Inherited: 0x370)
struct AGPQuestVolume : AActor
{
	uint8_t bEnableRangeRadius : 1; // 0x370(0x1), Mask(0x1)
	uint8_t BitPad_0x370_1 : 7; // 0x370(0x1)
	uint8_t Pad_0x371[0x7]; // 0x371(0x7)
	struct FQuestFullID QuestFullID; // 0x378(0x10)
	EQuestVolumeShape QuestVolumeShape; // 0x388(0x1)
	uint8_t Pad_0x389[0x3]; // 0x389(0x3)
	float CylinderRadius; // 0x38C(0x4)
	float CylinderHalfHeight; // 0x390(0x4)
	uint8_t Pad_0x394[0x4]; // 0x394(0x4)
	struct FString CylinderShapeMeshPath; // 0x398(0x10)
	float CylinderMeshOrginalRadius; // 0x3A8(0x4)
	float CylinderMeshOrginalHalfHeight; // 0x3AC(0x4)
	struct UPrimitiveComponent* QuestVolumeTrigger; // 0x3B0(0x8)
	int32_t SOLQuestCDOId; // 0x3B8(0x4)
	uint8_t Pad_0x3BC[0x4]; // 0x3BC(0x4)
	struct TArray<struct AActor*> InQuestVolumeActors; // 0x3C0(0x10)
	struct AGPQuest* GPQuest; // 0x3D0(0x8)
	uint8_t Pad_0x3D8[0x4]; // 0x3D8(0x4)
	int32_t ContractTeamID; // 0x3DC(0x4)
	int32_t ContractCampID; // 0x3E0(0x4)
	int32_t OriginCampID; // 0x3E4(0x4)
	struct FText ObjectionDes; // 0x3E8(0x18)
	struct FText BriefObjectionDes; // 0x400(0x18)
	uint8_t IsTeamShared : 1; // 0x418(0x1), Mask(0x1)
	uint8_t BitPad_0x418_1 : 7; // 0x418(0x1)
	uint8_t Pad_0x419[0x7]; // 0x419(0x7)


	// Object: Function GPQuest.GPQuestVolume.UpdateQuestVolumeTrigger
	// Flags: [Final|Native|Protected|BlueprintCallable]
	// Offset: 0x789acc8
	// Params: [ Num(0) Size(0x0) ]
	void UpdateQuestVolumeTrigger();

	// Object: Function GPQuest.GPQuestVolume.UpdateCylinderSize
	// Flags: [Final|Native|Protected|BlueprintCallable]
	// Offset: 0x789acb4
	// Params: [ Num(0) Size(0x0) ]
	void UpdateCylinderSize();

	// Object: Function GPQuest.GPQuestVolume.ResetContractCamp
	// Flags: [Native|Public]
	// Offset: 0x789ac98
	// Params: [ Num(0) Size(0x0) ]
	void ResetContractCamp();

	// Object: Function GPQuest.GPQuestVolume.OnQuestAreaTriggerEndOverlapped
	// Flags: [Native|Protected]
	// Offset: 0xe7aa6d4
	// Params: [ Num(4) Size(0x1C) ]
	void OnQuestAreaTriggerEndOverlapped(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex);

	// Object: Function GPQuest.GPQuestVolume.OnQuestAreaTriggerBeginOverlapped
	// Flags: [Native|Protected|HasOutParms]
	// Offset: 0xe7a78bc
	// Params: [ Num(6) Size(0xA8) ]
	void OnQuestAreaTriggerBeginOverlapped(struct UPrimitiveComponent* OverlappedComp, struct AActor* Other, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, uint8_t bFromSweep, const struct FHitResult& SweepResult);

	// Object: Function GPQuest.GPQuestVolume.IsRelevancyForConnection
	// Flags: [Native|Public]
	// Offset: 0x789abe0
	// Params: [ Num(2) Size(0x9) ]
	uint8_t IsRelevancyForConnection(struct AActor* ViewTarget);

	// Object: Function GPQuest.GPQuestVolume.GetQuestIDString
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x789ab40
	// Params: [ Num(1) Size(0x10) ]
	struct FString GetQuestIDString();

	// Object: Function GPQuest.GPQuestVolume.GetQuestFullID
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x789ab20
	// Params: [ Num(1) Size(0x10) ]
	struct FQuestFullID GetQuestFullID();

	// Object: Function GPQuest.GPQuestVolume.ChangeContractCamp
	// Flags: [Native|Public]
	// Offset: 0x789aa74
	// Params: [ Num(1) Size(0x4) ]
	void ChangeContractCamp(int32_t CampId);

	// Object: Function GPQuest.GPQuestVolume.BP_InitQuestData
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(1) Size(0x8) ]
	void BP_InitQuestData(struct AGPQuest* InGPQuest);
	DEFINE_UE_CLASS_HELPERS(AGPQuestVolume, "GPQuestVolume")

};

// Object: Class GPQuest.GPTQuestContext
// Size: 0x70 (Inherited: 0x28)
struct UGPTQuestContext : UObject
{
	uint8_t Pad_0x28[0x48]; // 0x28(0x48)
	DEFINE_UE_CLASS_HELPERS(UGPTQuestContext, "GPTQuestContext")

};

// Object: Class GPQuest.GPTRPCQuestComponent
// Size: 0xF8 (Inherited: 0xF8)
struct UGPTRPCQuestComponent : UActorComponent
{

	// Object: Function GPQuest.GPTRPCQuestComponent.ServerReplayStage
	// Flags: [Net|NetReliableNative|Event|Protected|NetServer]
	// Offset: 0x789c338
	// Params: [ Num(1) Size(0x8) ]
	void ServerReplayStage(struct AGPQuest* Quest);

	// Object: Function GPQuest.GPTRPCQuestComponent.ServerGotoStage
	// Flags: [Net|NetReliableNative|Event|Protected|NetServer]
	// Offset: 0x789c248
	// Params: [ Num(2) Size(0x18) ]
	void ServerGotoStage(struct AGPQuest* Quest, struct FString StageName);

	// Object: Function GPQuest.GPTRPCQuestComponent.ServerGotoObjective
	// Flags: [Net|NetReliableNative|Event|Protected|NetServer]
	// Offset: 0x789c160
	// Params: [ Num(2) Size(0xC) ]
	void ServerGotoObjective(struct AGPQuestStage* Stage, int32_t objectiveId);

	// Object: Function GPQuest.GPTRPCQuestComponent.ServerBeginQuest
	// Flags: [Net|NetReliableNative|Event|Protected|NetServer]
	// Offset: 0x789c0b4
	// Params: [ Num(1) Size(0x8) ]
	void ServerBeginQuest(struct AGPQuest* Quest);

	// Object: Function GPQuest.GPTRPCQuestComponent.ReplayStage
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x789c020
	// Params: [ Num(1) Size(0x8) ]
	static void ReplayStage(struct AGPQuest* Quest);

	// Object: Function GPQuest.GPTRPCQuestComponent.GotoStage
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x789bf48
	// Params: [ Num(2) Size(0x18) ]
	static void GotoStage(struct AGPQuest* Quest, struct FString StageName);

	// Object: Function GPQuest.GPTRPCQuestComponent.GotoObjective
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x789be78
	// Params: [ Num(2) Size(0xC) ]
	static void GotoObjective(struct AGPQuestStage* Stage, int32_t objectiveId);

	// Object: Function GPQuest.GPTRPCQuestComponent.BeginQuest
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x789bde4
	// Params: [ Num(1) Size(0x8) ]
	static void BeginQuest(struct AGPQuest* Quest);
	DEFINE_UE_CLASS_HELPERS(UGPTRPCQuestComponent, "GPTRPCQuestComponent")

};

// Object: Class GPQuest.GPTQuestNative
// Size: 0x58 (Inherited: 0x50)
struct UGPTQuestNative : UGPToolBase
{
	struct UGPTQuestContext* Context; // 0x50(0x8)
	DEFINE_UE_CLASS_HELPERS(UGPTQuestNative, "GPTQuestNative")

};

} // namespace SDK
