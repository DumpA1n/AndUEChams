#pragma once

#include "../CoreUObject_classes.hpp"
#include "DFMGameplay.hpp"
#include "Engine.hpp"
#include "GPAudioRuntime.hpp"
#include "GPGameHud.hpp"
#include "GPQuest.hpp"
#include "GameCore.hpp"

namespace SDK
{

// Package: DFMQuest
// Enums: 21
// Structs: 19
// Classes: 133

struct AAIGroupSpawnerBase;
struct AActor;
struct AAirDropGeneratorGroup;
struct ABraveGame;
struct ACHARACTER;
struct AController;
struct ADFMCharacter;
struct ADFMPlayerCharacter;
struct ADFMPlayerController;
struct ADFMVehicleBase;
struct AGPCharacter;
struct AGPCharacterBase;
struct AGPPlayerController;
struct AGPQuest;
struct AGPQuestActionContext;
struct AGPQuestCountdownBase;
struct AGPQuestMarkerBase;
struct AGPQuestStage;
struct AGPQuestVolume;
struct AGPSequenceActor;
struct AInteractorBase;
struct AInteractor_EggEntranceDoor;
struct AInteractor_Submission;
struct AInventoryPickup_DeadBody;
struct AInventoryPickup_EggGoldenNest;
struct APawn;
struct APlayerController;
struct ASpawnJailBreakBody;
struct AVehicleSpawner;
enum class EAIGroupPatrolJobBossEncounterState : uint8_t;
enum class EAIMsgType : uint8_t;
enum class EBuffDisableTag : uint8_t;
enum class ECampType : uint8_t;
enum class ECharacterPart : uint8_t;
enum class ECharingSlot : uint8_t;
enum class ECountDownHUDClassType : uint8_t;
enum class EEndInteractionType : uint8_t;
enum class EExplosionType : uint8_t;
enum class EForbidMoveReason : uint8_t;
enum class EGPCharacterFightStateType : uint8_t;
enum class EGPQuestActionCompareOperator : uint8_t;
enum class EGPQuestActionMarkerType : uint8_t;
enum class EGPQuestActionScope : uint8_t;
enum class EGPQuestActionTriggerType : uint8_t;
enum class EGPQuestEndReason : uint8_t;
enum class EGPQuestObjectiveHUDType : uint8_t;
enum class EGPQuestOptionalObjectiveOperationType : uint8_t;
enum class EGPQuestStageState : uint8_t;
enum class EGPSequenceCustomEvent : uint8_t;
enum class EGameFlowStageType : uint8_t;
enum class EGameHUDSate : uint16_t;
enum class EInputActionType : uint16_t;
enum class EInteractorType : uint8_t;
enum class EItemMainType : uint8_t;
enum class ELootingStatus : uint8_t;
enum class EMatchOverReason : uint8_t;
enum class EOverrideMovementType : uint8_t;
enum class EQA_CountdownType : uint8_t;
enum class EQuestType : uint8_t;
enum class ESOLUIIconType : uint8_t;
enum class ESubtitleSequenceType : uint8_t;
enum class ESubtitleType : uint8_t;
enum class EVisibleGameHUDStateOperators : uint8_t;
struct FDamageResultInfo;
struct FGPAudioFuturePlayingID;
struct FGPQuestObjectiveHUDInfo;
struct FGPQuestObjectiveNoticeInfo;
struct FGPQuestText;
struct FGameplayTag;
struct FHitResult;
struct FItemMoveCmd;
struct FOnGPAttributeChangeData;
struct FSOLQAObjectiveData;
struct FSpawnAIListRes;
struct FSubtitleSequenceInfo;
struct FTeamInfo;
struct IGPQuestInteractorInterface;
struct UAIGroupPatrolJob_BossEncounter;
struct UAnimSequenceBase;
struct UBaseUIView;
struct UBoxComponent;
struct UButton;
struct UCameraModifier;
struct UDFMVehicleHealthComponent;
struct UDamageType;
struct UDataTable;
struct UFXResourceContainerComponent;
struct UGPAudioEventAsset;
struct UGPCharacterMovementLimitDataAsset;
struct UHorizontalBox;
struct UImage;
struct UInteractorManningComponent;
struct UPrimitiveComponent;
struct UProgressBar;
struct URichTextBlock;
struct USceneComponent;
struct UShapeComponent;
struct USplineComponent;
struct UTextBlock;
struct UVerticalBox;
struct UWorld;
struct FGamingAreaPlayerInfo;
struct FGamingAreaQuestSetting;
struct FGamingAreaStageSetting;
struct FNoticeInfos;
struct FSubtitleObjectiveNoticeInfo;
struct FDFMQuestAudioTableItem;
struct FQMarkerSpawnParams;
struct FSimpleActionArguments;
struct FSimpleActionExtArgument;
struct FSimpleActionArgument;
struct FSimpleQuestArgument;
struct FSimpleTriggerItemInfo;
struct FSimpleObjectiveItemInfo;
struct FMissionStateAction;
struct FQuestAudioConfig;
struct FQuestFxConfig;
struct FObjectiveHintInfo;
struct FContractBossData;
struct FMapQuestRangeData;
struct ABossEncounterQuest;
struct ABraveGameQuest;
struct ADFMQuestClientProxy;
struct ABraveGameQuestClientProxy;
struct AClientPerformanceTrigger;
struct UDFMQuestActionLib;
struct USOLQuestActionLib;
struct UDFMQuestAISettings;
struct UDFMQuestAITeamChecker;
struct ADFMQuestAIManager;
struct ADFMQuestAudioSubsystem;
struct ADFMQuestGamingArea;
struct UDFMQuestGamingAreaPlayerComponent;
struct UDFMQuestGetItemListener;
struct ADFMQuestHUDSubsystem;
struct ADFMQuestMarker;
struct UDFMQuestPlayersChaseTargetComponent;
struct ADFMQuestSubtitleSubsystem;
struct UDFMQuestSystem;
struct ADFMQuestTimerActor;
struct UDFMQuestUtils;
struct ADFMQuestVolume;
struct ADisplayHUDVolume;
struct AMovementRestrictionVolume;
struct AEggQuest;
struct AEggQuestClientProxy;
struct AForestEggEntrance;
struct AForestEggTunnel;
struct UIntroSaveGameSetting;
struct UQA_HUDLoadListener;
struct AIntroQuestClientProxy;
struct UObjectiveContentView;
struct UObjectiveHintView;
struct UObjectiveTipsView;
struct APushVehicleQuest;
struct UQA_ActivateTimeBomb;
struct UQA_AIDeathListener;
struct UQA_AISkillTaskListener;
struct UQA_AIFightMeListener;
struct UQA_AIJob_BossEncounter_JobStateChangeListener;
struct UQA_AITeamSizeListener;
struct UQA_AllClientLoadingCompletedListener;
struct UQA_BraveGame_OnTeamFuelCountChangeListener;
struct UQA_BreakItem_BreakListener;
struct UQA_ButtonClickedListener;
struct UQA_MandelBrickListener;
struct UQA_CarryBodyListener;
struct UQA_CarryBodySpawnListener;
struct UQA_CheckNpcStatuslistener;
struct UQA_ClientHudLoadListener;
struct UQA_Countdown;
struct UQA_Delay;
struct UQA_EnableManningListener;
struct UQA_FadeOutListener;
struct UQA_FirstPlayerSeamLessEnterListener;
struct UQA_FixedRocketExplodeListener;
struct UQA_GPSequence;
struct UQA_GPSequenceEventListener;
struct UQA_GPCommonMediaPlayer;
struct UQA_GPCommonMediaPlayer_Server;
struct UQA_GPSubtitleSequence;
struct UQA_HealthListener;
struct UQA_CharacterBuffListener;
struct UQA_InAreaPlayerListener;
struct UQA_InteractorController;
struct UQA_InteractorStatusListener;
struct UQA_InteractorButtonShownListener;
struct UQA_TutorialLootingListener;
struct UQA_TutorialMapGuideListener;
struct UQA_MorseCodeSuccessListener;
struct UQA_PortalDoorListener;
struct UQA_HackPcOperationWillEnableTimeFinishListener;
struct UQA_LevelSequenceActingOnPauseTrigger;
struct UQA_ListenPlayerOffBattle;
struct UQA_LootingDeadBodyListener;
struct UQA_LootingListener;
struct UQA_MultiTriggerListener;
struct UQA_PlayerDeathListener;
struct UQA_PlayerExitListener;
struct UQA_PlayerSafePathListener;
struct UQA_PlayersChaseTargetListener;
struct UQA_PlayerSkillListener;
struct UQA_DetectorArrowFireListener;
struct UQA_PlayerTransitionMove;
struct UQA_RandomRangeExec;
struct UQA_RestResurrectCoin;
struct UQA_SequenceStream;
struct UQA_CutSceneViewTargetListener;
struct UQA_ShowGuidePopWindowListener;
struct UQA_SimplePathFollower;
struct UQA_SimplePathFollowerCustomEvent;
struct UQA_SimpleActionBase;
struct UQA_SimpleActionListener;
struct UDFMMissionActionLib;
struct UQA_LevelActionListener;
struct UQASimpleActionProxy;
struct UQA_SimpleQuestListener;
struct UQASimpleQuestProxy;
struct UQA_SpawnAI;
struct UQA_SpawnAIByDrama;
struct UQA_SpawnedAIAliveSizeListener;
struct UQA_TaggedTimer;
struct UQA_TargetHealthListener;
struct UQA_TargetTakeDamageListener;
struct UQA_TeamAllDiedListener;
struct UQA_TeamBuyBackListener;
struct UQA_TeamDeathListener;
struct UQA_TeammateRebornListener;
struct UQA_TeleportPlayerAsync;
struct UQA_Timer;
struct UQA_Tips;
struct UQA_TrainStatusListener;
struct UQA_TriggerAISpawnUnit;
struct UQA_TriggerListener;
struct UQA_VehicleDeathListener;
struct UQA_VehicleDramaPathFinishedListener;
struct UQA_VehicleDriverDiedListener;
struct UQA_VehiclePathFollower;
struct UQA_VehiclePathFollowerCustomEvent;
struct UQA_VehicleSpawnListener;
struct UQA_WaitingParachuteListener;
struct AQuestAudioPlacingActor;
struct AQuestAudioActor;
struct UQuestCutSceneHUD;
struct AQuestFxPlacingActor;
struct AQuestFxActor;
struct UQuestHUDController;
struct UQuestHUDPanelView;
struct UQuestObjectiveView;
struct UQuestStatusTipsView;
struct ARaidQuestClientProxy;
struct ASOLQuestClientProxy;
struct ATutorialQuestClientProxy;

// Object: Enum DFMQuest.EQAInputActionType
enum class EQAInputActionType : uint8_t
{
	OpenMap = 0,
	Skill_X = 1,
	Skill_V = 2,
	Skill_G = 3,
	EQAInputActionType_MAX = 4
};

// Object: Enum DFMQuest.EQAKillAIType
enum class EQAKillAIType : uint8_t
{
	KillWithTag = 0,
	KillWithoutTag = 1,
	KillAll = 2,
	EQAKillAIType_MAX = 3
};

// Object: Enum DFMQuest.EPlayerPosition
enum class EPlayerPosition : uint8_t
{
	None = 0,
	InTargetZone = 1,
	InSafeZone = 2,
	InWarningZone = 3,
	InFailZone = 4,
	EPlayerPosition_MAX = 5
};

// Object: Enum DFMQuest.EPlayersChaseTargetMode
enum class EPlayersChaseTargetMode : uint8_t
{
	None = 0,
	ClosestPlayer = 1,
	FarthestPlayer = 2,
	EPlayersChaseTargetMode_MAX = 3
};

// Object: Enum DFMQuest.ERVLeaveBehaviour
enum class ERVLeaveBehaviour : uint8_t
{
	KeepRestriction = 0,
	Revert = 1,
	NewRestriction = 2,
	ERVLeaveBehaviour_MAX = 3
};

// Object: Enum DFMQuest.EQA_AITeamSizeListenerOption
enum class EQA_AITeamSizeListenerOption : uint8_t
{
	CompareSize = 0,
	SizeChanged = 1,
	EQA_MAX = 2
};

// Object: Enum DFMQuest.EQA_CountdownAsyncReturnBranch
enum class EQA_CountdownAsyncReturnBranch : uint8_t
{
	Finished = 0,
	Stoped = 1,
	EQA_MAX = 2
};

// Object: Enum DFMQuest.EQA_GPSequenceOption
enum class EQA_GPSequenceOption : uint8_t
{
	Play = 0,
	Listen = 1,
	EQA_MAX = 2
};

// Object: Enum DFMQuest.EQA_InteractorControllerOption
enum class EQA_InteractorControllerOption : uint8_t
{
	Listen = 0,
	Activate = 1,
	Deactivate = 2,
	MakeSuccessful = 3,
	MakeFail = 4,
	EQA_MAX = 5
};

// Object: Enum DFMQuest.EQA_PlayerSafePathListenerOption
enum class EQA_PlayerSafePathListenerOption : uint8_t
{
	Play = 0,
	Stop = 1,
	Pause = 2,
	Resume = 3,
	Listen = 4,
	EQA_MAX = 5
};

// Object: Enum DFMQuest.EQA_SimplePathFollowerOption
enum class EQA_SimplePathFollowerOption : uint8_t
{
	Play = 0,
	Stop = 1,
	Pause = 2,
	Resume = 3,
	Listen = 4,
	EQA_MAX = 5
};

// Object: Enum DFMQuest.EGPSimpleActionInnerType
enum class EGPSimpleActionInnerType : uint8_t
{
	None = 0,
	SetTargets = 1,
	SetTargetState = 2,
	SetFails = 3,
	SetFailState = 4,
	SetLevelPos = 5,
	SetLevelTime = 6,
	CreateTaskGroup = 7,
	SetTargetTask = 8,
	SetTaskState = 9,
	CreateABTeam = 10,
	GetMissionPlayer = 11,
	GetMissionPlayers = 12,
	PlayMultiCastNetworkdedMontage = 13,
	GetMainTrigger = 14,
	EnableEffect = 15,
	DisableEffect = 16,
	LoadPersistLevel = 17,
	UnLoadPersistLevel = 18,
	LoadBindPersistLevel = 19,
	UnLoadBindPersistLevel = 20,
	ShowTeamScore = 21,
	AddBigWordMapMarker = 22,
	RemoveBigWordMapMarker = 23,
	CarraySomeBody = 24,
	SomeOneCarrySomeBody = 25,
	IsSomeOneCarrySomeBody = 26,
	GetMissionListeners = 27,
	GetMissionSideListeners = 28,
	GetMissionTeamListeners = 29,
	GetMissionListener = 30,
	EndAllListener = 31,
	GetMissionTeamCharacters = 32,
	SetCarryBodyTag = 33,
	AddGameStateAction = 34,
	SetGameStateAction = 35,
	GetGameStateAction = 36,
	RemoveItem = 37,
	SetMissionTotalTime = 38,
	PlayerPlayDialog = 39,
	PlayAbility = 40,
	EGPSimpleActionInnerType_MAX = 41
};

// Object: Enum DFMQuest.EGPSimpleActionType
enum class EGPSimpleActionType : uint8_t
{
	None = 0,
	Drama = 1,
	StartQuest = 2,
	PlayDialog = 3,
	NpcTalk = 4,
	PlaySequence = 5,
	EnableInteract = 6,
	DisableInteract = 7,
	SendSelfToPos = 8,
	SendTeamToPos = 9,
	EnterWorld = 10,
	RAID_SendSelfToPos = 11,
	RAID_SendTeamToPos = 12,
	EndRaid = 13,
	ShowRaidEnd = 14,
	WorldCruise = 15,
	EnableEffect = 16,
	EnableHitEffect = 17,
	EGPSimpleActionType_MAX = 18
};

// Object: Enum DFMQuest.ETriggerTitleFlag
enum class ETriggerTitleFlag : uint8_t
{
	Normal = 0,
	NormalMarkerTarget = 1,
	OnlyTitle = 2,
	OnlyProgress = 3,
	OnlyTarget = 4,
	OnlyMarkerTarget = 5,
	ETriggerTitleFlag_MAX = 6
};

// Object: Enum DFMQuest.EGPSimpleObjectiveType
enum class EGPSimpleObjectiveType : uint8_t
{
	Main = 0,
	HidenMain = 1,
	Side = 2,
	AutoSide = 3,
	HidenSide = 4,
	EGPSimpleObjectiveType_MAX = 5
};

// Object: Enum DFMQuest.EGPSimpleQuestTypeEx
enum class EGPSimpleQuestTypeEx : uint8_t
{
	None = 0,
	Quest = 1,
	InteractNPCEx = 2,
	Combine = 3,
	Event = 4,
	ServerCombine = 5,
	LoadLevel = 6,
	ConditionSearchArea = 7,
	EGPSimpleQuestTypeEx_MAX = 8
};

// Object: Enum DFMQuest.EGPSimpleQuestType
enum class EGPSimpleQuestType : uint8_t
{
	None = 0,
	KillEnermy = 1,
	ObtainItem = 2,
	SearchArea = 3,
	InteractItem = 4,
	InteractNPC = 5,
	SelfPlayerDie = 6,
	SelfPlayerReborn = 7,
	LeaveArea = 8,
	GameState = 9,
	AvoidAIFightMe = 10,
	AvoidAIFightUs = 11,
	ConditionInteractNPC = 12,
	LoseItem = 13,
	EnermyDie = 14,
	TurnInItem = 15,
	TraceItem = 16,
	Damage = 17,
	SearchAreaAndGetOnVehicle = 18,
	SearchAreaAndGetOffVehicle = 19,
	CheckGetOnVehicle = 20,
	CheckGetOffVehicle = 21,
	Raid_ReachArea_ALL = 22,
	Raid_ReachArea_Leader = 23,
	Raid_ReachArea_num = 24,
	Raid_TrainBreaks = 25,
	Max = 26
};

// Object: Enum DFMQuest.EQADamageType
enum class EQADamageType : uint8_t
{
	None = 0,
	All_Types = 1,
	Bullets = 2,
	RPG = 3,
	EQADamageType_MAX = 4
};

// Object: Enum DFMQuest.EQA_TimerMode
enum class EQA_TimerMode : uint8_t
{
	Timer = 0,
	Countdown = 1,
	EQA_MAX = 2
};

// Object: Enum DFMQuest.EQA_TriggerListenerOption
enum class EQA_TriggerListenerOption : uint8_t
{
	All = 0,
	PlayerOnly = 1,
	NotPlayer = 2,
	ExceptAICharacter = 3,
	PlayerVehicle = 4,
	AIVehicle = 5,
	EQA_MAX = 6
};

// Object: Enum DFMQuest.EQA_VehiclePathFollowerOption
enum class EQA_VehiclePathFollowerOption : uint8_t
{
	Play = 0,
	Stop = 1,
	Pause = 2,
	Resume = 3,
	Listen = 4,
	EQA_MAX = 5
};

// Object: ScriptStruct DFMQuest.GamingAreaPlayerInfo
// Size: 0x10 (Inherited: 0x0)
struct FGamingAreaPlayerInfo
{
	struct AGPPlayerController* PlayerCtrl; // 0x0(0x8)
	uint8_t bIsOutsideGamingArea : 1; // 0x8(0x1), Mask(0x1)
	uint8_t BitPad_0x8_1 : 7; // 0x8(0x1)
	uint8_t Pad_0x9[0x7]; // 0x9(0x7)
};

// Object: ScriptStruct DFMQuest.GamingAreaQuestSetting
// Size: 0x18 (Inherited: 0x0)
struct FGamingAreaQuestSetting
{
	int32_t QuestID; // 0x0(0x4)
	uint8_t bValidDuringWholeQuest : 1; // 0x4(0x1), Mask(0x1)
	uint8_t BitPad_0x4_1 : 7; // 0x4(0x1)
	uint8_t Pad_0x5[0x3]; // 0x5(0x3)
	struct TArray<struct FGamingAreaStageSetting> StageSettings; // 0x8(0x10)
};

// Object: ScriptStruct DFMQuest.GamingAreaStageSetting
// Size: 0x18 (Inherited: 0x0)
struct FGamingAreaStageSetting
{
	int32_t StageId; // 0x0(0x4)
	uint8_t bValidDuringWholeStage : 1; // 0x4(0x1), Mask(0x1)
	uint8_t BitPad_0x4_1 : 7; // 0x4(0x1)
	uint8_t Pad_0x5[0x3]; // 0x5(0x3)
	struct TArray<uint8_t> ValidObjectiveIndexes; // 0x8(0x10)
};

// Object: ScriptStruct DFMQuest.NoticeInfos
// Size: 0x10 (Inherited: 0x0)
struct FNoticeInfos
{
	struct TArray<struct FSubtitleObjectiveNoticeInfo> Notices; // 0x0(0x10)
};

// Object: ScriptStruct DFMQuest.SubtitleObjectiveNoticeInfo
// Size: 0x98 (Inherited: 0x0)
struct FSubtitleObjectiveNoticeInfo
{
	struct FGPQuestObjectiveNoticeInfo Notice; // 0x0(0x80)
	float EndTimeStamp; // 0x80(0x4)
	struct FGPAudioFuturePlayingID AudioId; // 0x84(0x8)
	uint8_t Pad_0x8C[0x4]; // 0x8C(0x4)
	int64_t NoticeHandle; // 0x90(0x8)
};

// Object: ScriptStruct DFMQuest.DFMQuestAudioTableItem
// Size: 0x28 (Inherited: 0x8)
struct FDFMQuestAudioTableItem : FTableRowBase
{
	struct FName Key; // 0x8(0x8)
	struct UGPAudioEventAsset* AudioEvent; // 0x10(0x8)
	struct FString Comment; // 0x18(0x10)
};

// Object: ScriptStruct DFMQuest.QMarkerSpawnParams
// Size: 0x28 (Inherited: 0x0)
struct FQMarkerSpawnParams
{
	struct AGPQuestMarkerBase* QMarkerClass; // 0x0(0x8)
	struct AActor* TargetClass; // 0x8(0x8)
	struct FVector OffsetLocation; // 0x10(0xC)
	float DistanceThreshold; // 0x1C(0x4)
	EGPQuestActionMarkerType MarkerType; // 0x20(0x1)
	EGPQuestActionScope Scope; // 0x21(0x1)
	uint8_t Pad_0x22[0x6]; // 0x22(0x6)
};

// Object: ScriptStruct DFMQuest.SimpleActionArguments
// Size: 0x20 (Inherited: 0x0)
struct FSimpleActionArguments
{
	struct AGPQuest* Quest; // 0x0(0x8)
	uint8_t Pad_0x8[0x18]; // 0x8(0x18)
};

// Object: ScriptStruct DFMQuest.SimpleActionExtArgument
// Size: 0x90 (Inherited: 0x0)
struct FSimpleActionExtArgument
{
	struct TArray<struct FString> ExtParams; // 0x0(0x10)
	struct TArray<int32_t> ExtIntParams; // 0x10(0x10)
	struct TArray<float> ExtFloatParams; // 0x20(0x10)
	struct FString ExtString; // 0x30(0x10)
	uint8_t ExtBool : 1; // 0x40(0x1), Mask(0x1)
	uint8_t BitPad_0x40_1 : 7; // 0x40(0x1)
	uint8_t Pad_0x41[0x3]; // 0x41(0x3)
	struct FVector ExtVector; // 0x44(0xC)
	float ExtFloat; // 0x50(0x4)
	int32_t ExtInt; // 0x54(0x4)
	int64_t ExtInt64; // 0x58(0x8)
	struct UAnimSequenceBase* montageToPlayTPP; // 0x60(0x8)
	struct UAnimSequenceBase* montageToPlayFPP; // 0x68(0x8)
	uint8_t Pad_0x70[0x10]; // 0x70(0x10)
	struct AGPQuest* Quest; // 0x80(0x8)
	uint8_t Pad_0x88[0x8]; // 0x88(0x8)
};

// Object: ScriptStruct DFMQuest.SimpleActionArgument
// Size: 0x14 (Inherited: 0x0)
struct FSimpleActionArgument
{
	EGPSimpleActionType Type; // 0x0(0x1)
	uint8_t Pad_0x1[0x3]; // 0x1(0x3)
	struct FName ActionTag; // 0x4(0x8)
	int32_t Num; // 0xC(0x4)
	uint8_t BindQuest : 1; // 0x10(0x1), Mask(0x1)
	uint8_t BitPad_0x10_1 : 7; // 0x10(0x1)
	uint8_t Pad_0x11[0x3]; // 0x11(0x3)
};

// Object: ScriptStruct DFMQuest.SimpleQuestArgument
// Size: 0x40 (Inherited: 0x0)
struct FSimpleQuestArgument
{
	struct AGPQuest* Quest; // 0x0(0x8)
	uint8_t Pad_0x8[0x38]; // 0x8(0x38)
};

// Object: ScriptStruct DFMQuest.SimpleTriggerItemInfo
// Size: 0x38 (Inherited: 0x0)
struct FSimpleTriggerItemInfo
{
	EGPSimpleQuestType Type; // 0x0(0x1)
	uint8_t Pad_0x1[0x7]; // 0x1(0x7)
	struct FString Tag; // 0x8(0x10)
	struct FString Tag1; // 0x18(0x10)
	int32_t Num; // 0x28(0x4)
	int32_t ConfigId; // 0x2C(0x4)
	uint8_t OnceTrigger : 1; // 0x30(0x1), Mask(0x1)
	uint8_t BitPad_0x30_1 : 7; // 0x30(0x1)
	uint8_t OnceUnTrigger : 1; // 0x31(0x1), Mask(0x1)
	uint8_t BitPad_0x31_1 : 7; // 0x31(0x1)
	uint8_t UISceneTraceTarget : 1; // 0x32(0x1), Mask(0x1)
	uint8_t BitPad_0x32_1 : 7; // 0x32(0x1)
	EGPSimpleObjectiveType ObjectiveType; // 0x33(0x1)
	uint8_t Pad_0x34[0x4]; // 0x34(0x4)
};

// Object: ScriptStruct DFMQuest.SimpleObjectiveItemInfo
// Size: 0x50 (Inherited: 0x38)
struct FSimpleObjectiveItemInfo : FSimpleTriggerItemInfo
{
	struct FString Title; // 0x38(0x10)
	EGPQuestObjectiveHUDType HUDMissionType; // 0x48(0x1)
	uint8_t ShowSingleText : 1; // 0x49(0x1), Mask(0x1)
	uint8_t BitPad_0x49_1 : 7; // 0x49(0x1)
	uint8_t Pad_0x4A[0x6]; // 0x4A(0x6)
};

// Object: ScriptStruct DFMQuest.MissionStateAction
// Size: 0x18 (Inherited: 0x10)
struct FMissionStateAction : FDescRowBase
{
	int32_t ActionId; // 0x10(0x4)
	uint8_t IsServer : 1; // 0x14(0x1), Mask(0x1)
	uint8_t BitPad_0x14_1 : 7; // 0x14(0x1)
	uint8_t SecretLoot : 1; // 0x15(0x1), Mask(0x1)
	uint8_t BitPad_0x15_1 : 7; // 0x15(0x1)
	uint8_t Pad_0x16[0x2]; // 0x16(0x2)
};

// Object: ScriptStruct DFMQuest.QuestAudioConfig
// Size: 0x20 (Inherited: 0x0)
struct FQuestAudioConfig
{
	float Duration; // 0x0(0x4)
	float FadeOutTime; // 0x4(0x4)
	struct UGPAudioEventAsset* BeginAudioEvent; // 0x8(0x8)
	struct UGPAudioEventAsset* EndAudioEvent; // 0x10(0x8)
	float DsPlayTimeStamp; // 0x18(0x4)
	float DsStopTimeStamp; // 0x1C(0x4)
};

// Object: ScriptStruct DFMQuest.QuestFxConfig
// Size: 0x1C (Inherited: 0x0)
struct FQuestFxConfig
{
	struct FName FXName; // 0x0(0x8)
	float Duration; // 0x8(0x4)
	struct FName LifeTimeFxPropertyName; // 0xC(0x8)
	uint8_t bCanFadeOut : 1; // 0x14(0x1), Mask(0x1)
	uint8_t BitPad_0x14_1 : 7; // 0x14(0x1)
	uint8_t Pad_0x15[0x3]; // 0x15(0x3)
	float DsPlayTimeStamp; // 0x18(0x4)
};

// Object: ScriptStruct DFMQuest.ObjectiveHintInfo
// Size: 0x20 (Inherited: 0x0)
struct FObjectiveHintInfo
{
	EGPQuestObjectiveHUDType ObjectiveHUDType; // 0x0(0x1)
	uint8_t Pad_0x1[0x7]; // 0x1(0x7)
	struct FText ObjectiveHintText; // 0x8(0x18)
};

// Object: ScriptStruct DFMQuest.ContractBossData
// Size: 0x10 (Inherited: 0x0)
struct FContractBossData
{
	int32_t ContractID; // 0x0(0x4)
	float BossHealth; // 0x4(0x4)
	float BossHealthMax; // 0x8(0x4)
	uint8_t bBossIsDead : 1; // 0xC(0x1), Mask(0x1)
	uint8_t BitPad_0xC_1 : 7; // 0xC(0x1)
	uint8_t Pad_0xD[0x3]; // 0xD(0x3)
};

// Object: ScriptStruct DFMQuest.MapQuestRangeData
// Size: 0x18 (Inherited: 0x0)
struct FMapQuestRangeData
{
	int32_t IsContract; // 0x0(0x4)
	int32_t objectiveId; // 0x4(0x4)
	float ObjectiveRange; // 0x8(0x4)
	uint8_t Pad_0xC[0x4]; // 0xC(0x4)
	struct AActor* TargetActor; // 0x10(0x8)
};

// Object: Class DFMQuest.BossEncounterQuest
// Size: 0x4C8 (Inherited: 0x4C8)
struct ABossEncounterQuest : AGPQuest
{

	// Object: Function DFMQuest.BossEncounterQuest.PlayVoToTeam
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x13b56ff0
	// Params: [ Num(1) Size(0x8) ]
	void PlayVoToTeam(struct FName SubtitleSeqId);
	DEFINE_UE_CLASS_HELPERS(ABossEncounterQuest, "BossEncounterQuest")

};

// Object: Class DFMQuest.BraveGameQuest
// Size: 0x4D8 (Inherited: 0x4C8)
struct ABraveGameQuest : AGPQuest
{
	uint8_t Pad_0x4C8[0x8]; // 0x4C8(0x8)
	struct ABraveGameQuestClientProxy* BraveGameProxy; // 0x4D0(0x8)
	DEFINE_UE_CLASS_HELPERS(ABraveGameQuest, "BraveGameQuest")

};

// Object: Class DFMQuest.DFMQuestClientProxy
// Size: 0x518 (Inherited: 0x460)
struct ADFMQuestClientProxy : AGPQuestClientProxy
{
	struct TArray<struct FName> OnlyShowActorTags; // 0x460(0x10)
	struct TArray<struct FName> OnlyHideActorTags; // 0x470(0x10)
	struct FString CurrentBannerText; // 0x480(0x10)
	int32_t CurrentTodId; // 0x490(0x4)
	uint8_t Pad_0x494[0x4]; // 0x494(0x4)
	struct AActor* CurrentBossActor; // 0x498(0x8)
	struct FText CurrentStripText; // 0x4A0(0x18)
	float StripHeightOffset; // 0x4B8(0x4)
	uint8_t Pad_0x4BC[0x4C]; // 0x4BC(0x4C)
	struct FName QuestCutSceneHUDName; // 0x508(0x8)
	uint8_t Pad_0x510[0x8]; // 0x510(0x8)


	// Object: Function DFMQuest.DFMQuestClientProxy.UpdateOnlyShowActorTags
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x13b6ac88
	// Params: [ Num(1) Size(0x10) ]
	void UpdateOnlyShowActorTags(struct TArray<struct FName>& ActorTags);

	// Object: Function DFMQuest.DFMQuestClientProxy.UpdateOnlyHideActorTags
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x13b6abcc
	// Params: [ Num(1) Size(0x10) ]
	void UpdateOnlyHideActorTags(struct TArray<struct FName>& ActorTags);

	// Object: Function DFMQuest.DFMQuestClientProxy.UpdateBannerText
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x13b6aabc
	// Params: [ Num(1) Size(0x18) ]
	void UpdateBannerText(const struct FText& BannerText);

	// Object: Function DFMQuest.DFMQuestClientProxy.SetPlayerCanSwitchWeapon
	// Flags: [Net|NetReliableNative|Event|NetMulticast|Public]
	// Offset: 0x13b6a980
	// Params: [ Num(3) Size(0x10) ]
	void SetPlayerCanSwitchWeapon(uint8_t bCanSwitch, uint8_t bForAllPlayers, struct AGPCharacter* Player);

	// Object: Function DFMQuest.DFMQuestClientProxy.SetPlayerCanMove
	// Flags: [Net|NetReliableNative|Event|NetMulticast|Public]
	// Offset: 0x13b6a844
	// Params: [ Num(3) Size(0x10) ]
	void SetPlayerCanMove(uint8_t bCanMove, uint8_t bForAllPlayers, struct AGPCharacter* Player);

	// Object: Function DFMQuest.DFMQuestClientProxy.SetPlayerCanInteract
	// Flags: [Net|NetReliableNative|Event|NetMulticast|Public]
	// Offset: 0x13b6a678
	// Params: [ Num(5) Size(0x10) ]
	void SetPlayerCanInteract(uint8_t bCanInteract, uint8_t bCanUseItem, uint8_t bCanDrive, uint8_t bForAllPlayers, struct AGPCharacter* Player);

	// Object: Function DFMQuest.DFMQuestClientProxy.ServerStopMedia
	// Flags: [Final|Native|Public]
	// Offset: 0x13b6a5d4
	// Params: [ Num(1) Size(0x8) ]
	void ServerStopMedia(struct FName MediaName);

	// Object: Function DFMQuest.DFMQuestClientProxy.ServerStartMedia
	// Flags: [Native|Public]
	// Offset: 0x13b6a4b4
	// Params: [ Num(3) Size(0x10) ]
	void ServerStartMedia(struct FName MediaName, float TotalTime, float DelayOutTime);

	// Object: Function DFMQuest.DFMQuestClientProxy.ServerSkipQuestCutScene
	// Flags: [Net|NetReliableNative|Event|Public|NetServer]
	// Offset: 0x13b6a408
	// Params: [ Num(1) Size(0x8) ]
	void ServerSkipQuestCutScene(struct FName CSTag);

	// Object: Function DFMQuest.DFMQuestClientProxy.PlayerForbidMoveAndRotate
	// Flags: [Net|NetReliableNative|Event|NetMulticast|Public]
	// Offset: 0x13b6a290
	// Params: [ Num(4) Size(0x10) ]
	void PlayerForbidMoveAndRotate(EForbidMoveReason Reason, uint8_t bEnable, uint8_t bForAllPlayers, struct AGPCharacter* Player);

	// Object: Function DFMQuest.DFMQuestClientProxy.OnSequenceEndPlay
	// Flags: [Final|Native|Protected]
	// Offset: 0x13b6a1ec
	// Params: [ Num(1) Size(0x8) ]
	void OnSequenceEndPlay(struct AGPSequenceActor* SeqActor);

	// Object: Function DFMQuest.DFMQuestClientProxy.OnSequenceBeginPlay
	// Flags: [Final|Native|Protected]
	// Offset: 0x13b6a148
	// Params: [ Num(1) Size(0x8) ]
	void OnSequenceBeginPlay(struct AGPSequenceActor* SeqActor);

	// Object: Function DFMQuest.DFMQuestClientProxy.OnRep_TodId
	// Flags: [Native|Protected]
	// Offset: 0x13b6a12c
	// Params: [ Num(0) Size(0x0) ]
	void OnRep_TodId();

	// Object: Function DFMQuest.DFMQuestClientProxy.OnRep_OnlyShowActorTags
	// Flags: [Final|Native|Protected]
	// Offset: 0x13b6a118
	// Params: [ Num(0) Size(0x0) ]
	void OnRep_OnlyShowActorTags();

	// Object: Function DFMQuest.DFMQuestClientProxy.OnRep_OnlyHideActorTags
	// Flags: [Final|Native|Protected]
	// Offset: 0x13b6a104
	// Params: [ Num(0) Size(0x0) ]
	void OnRep_OnlyHideActorTags();

	// Object: Function DFMQuest.DFMQuestClientProxy.OnRep_BossActor
	// Flags: [Native|Protected]
	// Offset: 0x13b6a0e8
	// Params: [ Num(0) Size(0x0) ]
	void OnRep_BossActor();

	// Object: Function DFMQuest.DFMQuestClientProxy.OnRep_BannerText
	// Flags: [Native|Protected]
	// Offset: 0x13b6a0cc
	// Params: [ Num(0) Size(0x0) ]
	void OnRep_BannerText();

	// Object: Function DFMQuest.DFMQuestClientProxy.OnEndMediaInternal
	// Flags: [Final|Native|Public]
	// Offset: 0x13b6a0b8
	// Params: [ Num(0) Size(0x0) ]
	void OnEndMediaInternal();

	// Object: Function DFMQuest.DFMQuestClientProxy.OnDFMCommonBannerShowed
	// Flags: [Final|Native|Protected]
	// Offset: 0x13b69fd0
	// Params: [ Num(2) Size(0x18) ]
	void OnDFMCommonBannerShowed(struct FString FunctionName, struct UBaseUIView* View);

	// Object: Function DFMQuest.DFMQuestClientProxy.OnCgScreenViewDisplayed
	// Flags: [Final|Native|Public]
	// Offset: 0x13b69ee8
	// Params: [ Num(2) Size(0x18) ]
	void OnCgScreenViewDisplayed(struct FString FunctionName, struct UBaseUIView* View);

	// Object: Function DFMQuest.DFMQuestClientProxy.HideAllPlayerCharacter
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x13b69e3c
	// Params: [ Num(1) Size(0x1) ]
	void HideAllPlayerCharacter(uint8_t bHide);

	// Object: Function DFMQuest.DFMQuestClientProxy.DisplayBossStrip
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x13b69c64
	// Params: [ Num(4) Size(0x2C) ]
	void DisplayBossStrip(uint8_t bDisplay, struct AActor* BossActor, const struct FText& StripText, float HeightOffset);

	// Object: Function DFMQuest.DFMQuestClientProxy.ClientStreammingFocusLocation
	// Flags: [Net|NetReliableNative|Event|NetMulticast|Public|HasDefaults|NetClient]
	// Offset: 0x13b69b74
	// Params: [ Num(2) Size(0xD) ]
	void ClientStreammingFocusLocation(struct FVector AbsoluteLoc, uint8_t bFocus);

	// Object: Function DFMQuest.DFMQuestClientProxy.ClientStopMedia
	// Flags: [Net|NetReliableNative|Event|NetMulticast|Public]
	// Offset: 0x13b69ac8
	// Params: [ Num(1) Size(0x8) ]
	void ClientStopMedia(struct FName MediaName);

	// Object: Function DFMQuest.DFMQuestClientProxy.ClientStartMedia
	// Flags: [Net|NetReliableNative|Event|NetMulticast|Public]
	// Offset: 0x13b699e0
	// Params: [ Num(2) Size(0xC) ]
	void ClientStartMedia(struct FName MediaName, float ClientTimeOut);

	// Object: Function DFMQuest.DFMQuestClientProxy.ClientShowHeadMarker
	// Flags: [Net|NetReliableNative|Event|NetMulticast|Public|BlueprintCallable]
	// Offset: 0x13b698f0
	// Params: [ Num(2) Size(0x9) ]
	void ClientShowHeadMarker(struct AActor* Actor, uint8_t bShow);

	// Object: Function DFMQuest.DFMQuestClientProxy.ClientShowExitIcon
	// Flags: [Net|NetReliableNative|Event|NetMulticast|Public|NetClient]
	// Offset: 0x13b697c8
	// Params: [ Num(3) Size(0x11) ]
	void ClientShowExitIcon(uint64_t PlayerUin, struct FName Tag, uint8_t bShow);

	// Object: Function DFMQuest.DFMQuestClientProxy.ClientShowCommonTips
	// Flags: [Net|NetReliableNative|Event|NetMulticast|Public|BlueprintCallable]
	// Offset: 0x1078fe08
	// Params: [ Num(3) Size(0x28) ]
	void ClientShowCommonTips(struct FText TipsText, float ShowTime, int64_t SpecifyPlayerUin);

	// Object: Function DFMQuest.DFMQuestClientProxy.ClientSetRotateLimit
	// Flags: [Net|NetReliableNative|Event|NetMulticast|Public|HasDefaults]
	// Offset: 0x13b69668
	// Params: [ Num(4) Size(0x1C) ]
	void ClientSetRotateLimit(struct AGPCharacter* Player, uint8_t bEnableLimite, struct FVector2D YawLimit, struct FVector2D PitchLimit);

	// Object: Function DFMQuest.DFMQuestClientProxy.ClientSequencePreSpawn
	// Flags: [Net|NetReliableNative|Event|NetMulticast|Public|NetClient]
	// Offset: 0x13b695bc
	// Params: [ Num(1) Size(0x8) ]
	void ClientSequencePreSpawn(struct FName CSTag);

	// Object: Function DFMQuest.DFMQuestClientProxy.ClientSendCommonEventLog
	// Flags: [Net|NetReliableNative|Event|NetMulticast|Public|BlueprintCallable]
	// Offset: 0x13b69510
	// Params: [ Num(1) Size(0x4) ]
	void ClientSendCommonEventLog(int32_t EventId);

	// Object: Function DFMQuest.DFMQuestClientProxy.ClientResetSequence
	// Flags: [Net|NetReliableNative|Event|NetMulticast|Public|NetClient]
	// Offset: 0x13b69464
	// Params: [ Num(1) Size(0x8) ]
	void ClientResetSequence(struct FName CSTag);

	// Object: Function DFMQuest.DFMQuestClientProxy.ClientResetPlayerMeshRelativeLoc
	// Flags: [Net|NetReliableNative|Event|NetMulticast|Public|NetClient]
	// Offset: 0x13b69448
	// Params: [ Num(0) Size(0x0) ]
	void ClientResetPlayerMeshRelativeLoc();

	// Object: Function DFMQuest.DFMQuestClientProxy.ClientReplayCurStage
	// Flags: [Net|NetReliableNative|Event|NetMulticast|Public|NetClient]
	// Offset: 0x13b6942c
	// Params: [ Num(0) Size(0x0) ]
	void ClientReplayCurStage();

	// Object: Function DFMQuest.DFMQuestClientProxy.ClientQuitGame
	// Flags: [Net|NetReliableNative|Event|NetMulticast|Public|BlueprintCallable]
	// Offset: 0x13b69380
	// Params: [ Num(1) Size(0x1) ]
	void ClientQuitGame(EMatchOverReason Reason);

	// Object: Function DFMQuest.DFMQuestClientProxy.ClientPrepareToPlayQuestCutScene
	// Flags: [Net|NetReliableNative|Event|NetMulticast|Public|NetClient]
	// Offset: 0x13b692d4
	// Params: [ Num(1) Size(0x8) ]
	void ClientPrepareToPlayQuestCutScene(struct FName CSTag);

	// Object: Function DFMQuest.DFMQuestClientProxy.ClientPreloadMedia
	// Flags: [Net|NetReliableNative|Event|NetMulticast|Public]
	// Offset: 0x13b69228
	// Params: [ Num(1) Size(0x8) ]
	void ClientPreloadMedia(struct FName MediaName);

	// Object: Function DFMQuest.DFMQuestClientProxy.ClientPlayUiAudio
	// Flags: [Net|NetReliableNative|Event|NetMulticast|Public|BlueprintCallable]
	// Offset: 0x13b6917c
	// Params: [ Num(1) Size(0x8) ]
	void ClientPlayUiAudio(struct FName AudioEventName);

	// Object: Function DFMQuest.DFMQuestClientProxy.ClientPlaySequence
	// Flags: [Net|NetReliableNative|Event|NetMulticast|Public|NetClient]
	// Offset: 0x13b690d0
	// Params: [ Num(1) Size(0x8) ]
	void ClientPlaySequence(struct FName CSTag);

	// Object: Function DFMQuest.DFMQuestClientProxy.ClientPlayMusic
	// Flags: [Net|NetReliableNative|Event|NetMulticast|Public|BlueprintCallable]
	// Offset: 0x13b69024
	// Params: [ Num(1) Size(0x8) ]
	void ClientPlayMusic(struct FName MusicEventName);

	// Object: Function DFMQuest.DFMQuestClientProxy.ClientPlayGuideNounExplainUI
	// Flags: [Net|NetReliableNative|Event|NetMulticast|Public|BlueprintCallable]
	// Offset: 0x13b68f3c
	// Params: [ Num(2) Size(0x8) ]
	void ClientPlayGuideNounExplainUI(int32_t GuidePopWindowId, float AutoCloseTime);

	// Object: Function DFMQuest.DFMQuestClientProxy.ClientPlayGuideDialogUI
	// Flags: [Net|NetReliableNative|Event|NetMulticast|Public|BlueprintCallable]
	// Offset: 0x13b68e90
	// Params: [ Num(1) Size(0x4) ]
	void ClientPlayGuideDialogUI(int32_t DialogID);

	// Object: Function DFMQuest.DFMQuestClientProxy.ClientPlayFxEffect
	// Flags: [Net|NetReliableNative|Event|NetMulticast|Public|HasDefaults]
	// Offset: 0x13b68d6c
	// Params: [ Num(3) Size(0x1C) ]
	void ClientPlayFxEffect(struct FName EffectName, struct AGPCharacter* FxInstigator, struct FVector Location);

	// Object: Function DFMQuest.DFMQuestClientProxy.ClientMarkExit
	// Flags: [Net|NetReliableNative|Event|NetMulticast|Public|NetClient]
	// Offset: 0x13b68c88
	// Params: [ Num(2) Size(0x10) ]
	void ClientMarkExit(uint64_t PlayerUin, struct FName Tag);

	// Object: Function DFMQuest.DFMQuestClientProxy.ClientListenInteractorButton
	// Flags: [Net|NetReliableNative|Event|NetMulticast|Public|BlueprintCallable]
	// Offset: 0x13b68b98
	// Params: [ Num(2) Size(0xC) ]
	void ClientListenInteractorButton(uint8_t bStart, struct FName ActorTag);

	// Object: Function DFMQuest.DFMQuestClientProxy.ClientListenHudLoad
	// Flags: [Net|NetReliableNative|Event|NetMulticast|Public]
	// Offset: 0x13b68aa0
	// Params: [ Num(2) Size(0x18) ]
	void ClientListenHudLoad(uint8_t bStart, struct TArray<struct FName> ViewNames);

	// Object: Function DFMQuest.DFMQuestClientProxy.ClientHUDViewsShowedWithDelegate
	// Flags: [Final|Native|Public]
	// Offset: 0x13b68a8c
	// Params: [ Num(0) Size(0x0) ]
	void ClientHUDViewsShowedWithDelegate();

	// Object: Function DFMQuest.DFMQuestClientProxy.ClientHUDViewsShowed
	// Flags: [Final|Native|Public]
	// Offset: 0x13b68a78
	// Params: [ Num(0) Size(0x0) ]
	void ClientHUDViewsShowed();

	// Object: Function DFMQuest.DFMQuestClientProxy.ClientHudViewLoadedWithDelegate
	// Flags: [Final|Native|Public]
	// Offset: 0x13b689d4
	// Params: [ Num(1) Size(0x8) ]
	void ClientHudViewLoadedWithDelegate(struct FName ViewName);

	// Object: Function DFMQuest.DFMQuestClientProxy.ClientHudViewLoaded
	// Flags: [Final|Native|Public]
	// Offset: 0x13b68930
	// Params: [ Num(1) Size(0x8) ]
	void ClientHudViewLoaded(struct FName ViewName);

	// Object: Function DFMQuest.DFMQuestClientProxy.ClientHideAllPlayerCharacter
	// Flags: [Net|NetReliableNative|Event|NetMulticast|Public|NetClient]
	// Offset: 0x13b6887c
	// Params: [ Num(1) Size(0x1) ]
	void ClientHideAllPlayerCharacter(uint8_t bHide);

	// Object: Function DFMQuest.DFMQuestClientProxy.ClientFreezeStreamingLayers
	// Flags: [Net|NetReliableNative|Event|NetMulticast|Public|NetClient]
	// Offset: 0x13b68784
	// Params: [ Num(2) Size(0x11) ]
	void ClientFreezeStreamingLayers(struct TArray<struct FString> InLayerWildcard, uint8_t bFreeze);

	// Object: Function DFMQuest.DFMQuestClientProxy.ClientEnableMoveAndFire
	// Flags: [Final|Native|Public]
	// Offset: 0x13b686d8
	// Params: [ Num(1) Size(0x1) ]
	void ClientEnableMoveAndFire(uint8_t bCanMoveAndFire);

	// Object: Function DFMQuest.DFMQuestClientProxy.ClientDisplayGuideClickUI
	// Flags: [Net|NetReliableNative|Event|NetMulticast|Public|BlueprintCallable]
	// Offset: 0x13b685ec
	// Params: [ Num(2) Size(0x5) ]
	void ClientDisplayGuideClickUI(int32_t GuideClickId, uint8_t bForceClick);

	// Object: Function DFMQuest.DFMQuestClientProxy.ClientCutScenePreload
	// Flags: [Net|NetReliableNative|Event|NetMulticast|Public|NetClient]
	// Offset: 0x13b68540
	// Params: [ Num(1) Size(0x8) ]
	void ClientCutScenePreload(struct FName CSTag);

	// Object: Function DFMQuest.DFMQuestClientProxy.ClientCreateExitIcon
	// Flags: [Net|NetReliableNative|Event|NetMulticast|Public|NetClient]
	// Offset: 0x13b68418
	// Params: [ Num(3) Size(0x11) ]
	void ClientCreateExitIcon(uint64_t PlayerUin, struct FName Tag, uint8_t bShow);

	// Object: Function DFMQuest.DFMQuestClientProxy.ClientCloseGuideDialogUI
	// Flags: [Net|NetReliableNative|Event|NetMulticast|Public|BlueprintCallable]
	// Offset: 0x13b683fc
	// Params: [ Num(0) Size(0x0) ]
	void ClientCloseGuideDialogUI();

	// Object: Function DFMQuest.DFMQuestClientProxy.ClientCloseGuideClickUI
	// Flags: [Net|NetReliableNative|Event|NetMulticast|Public|BlueprintCallable]
	// Offset: 0x13b68350
	// Params: [ Num(1) Size(0x4) ]
	void ClientCloseGuideClickUI(int32_t GuideClickId);

	// Object: Function DFMQuest.DFMQuestClientProxy.ClientChangeTodId
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0x13b682a4
	// Params: [ Num(1) Size(0x4) ]
	void ClientChangeTodId(int32_t WeatherID);

	// Object: Function DFMQuest.DFMQuestClientProxy.ClientApplyCameraModifier
	// Flags: [Net|NetReliableNative|Event|NetMulticast|Public|BlueprintCallable]
	// Offset: 0x13b68138
	// Params: [ Num(4) Size(0x12) ]
	void ClientApplyCameraModifier(struct AGPCharacter* CHARACTER, struct UCameraModifier* ModifierClass, uint8_t bAdd, uint8_t bImmediately);

	// Object: Function DFMQuest.DFMQuestClientProxy.ClientAddOrRemoveScreenEffect
	// Flags: [Net|NetReliableNative|Event|NetMulticast|Public]
	// Offset: 0x13b68048
	// Params: [ Num(2) Size(0x9) ]
	void ClientAddOrRemoveScreenEffect(struct FName EffectName, uint8_t bAdd);
	DEFINE_UE_CLASS_HELPERS(ADFMQuestClientProxy, "DFMQuestClientProxy")

};

// Object: Class DFMQuest.BraveGameQuestClientProxy
// Size: 0x520 (Inherited: 0x518)
struct ABraveGameQuestClientProxy : ADFMQuestClientProxy
{
	uint8_t Pad_0x518[0x8]; // 0x518(0x8)
	DEFINE_UE_CLASS_HELPERS(ABraveGameQuestClientProxy, "BraveGameQuestClientProxy")

};

// Object: Class DFMQuest.ClientPerformanceTrigger
// Size: 0x3E0 (Inherited: 0x370)
struct AClientPerformanceTrigger : AActor
{
	uint8_t bCanOnlyTriggerOnce : 1; // 0x370(0x1), Mask(0x1)
	uint8_t BitPad_0x370_1 : 7; // 0x370(0x1)
	uint8_t Pad_0x371[0x3]; // 0x371(0x3)
	struct FName ScreenEffectName; // 0x374(0x8)
	uint8_t bNeedToDisableSkills : 1; // 0x37C(0x1), Mask(0x1)
	uint8_t BitPad_0x37C_1 : 7; // 0x37C(0x1)
	uint8_t bWithTimeDilation : 1; // 0x37D(0x1), Mask(0x1)
	uint8_t BitPad_0x37D_1 : 7; // 0x37D(0x1)
	uint8_t Pad_0x37E[0x2]; // 0x37E(0x2)
	float TimeDilationRate; // 0x380(0x4)
	float TimeDilationDuration; // 0x384(0x4)
	uint8_t Pad_0x388[0x1]; // 0x388(0x1)
	uint8_t bPlayAudio : 1; // 0x389(0x1), Mask(0x1)
	uint8_t BitPad_0x389_1 : 7; // 0x389(0x1)
	uint8_t Pad_0x38A[0x6]; // 0x38A(0x6)
	struct UGPAudioEventAsset* InAudioAsset; // 0x390(0x8)
	struct UGPAudioEventAsset* OutAudioAsset; // 0x398(0x8)
	uint8_t bAudio3D : 1; // 0x3A0(0x1), Mask(0x1)
	uint8_t BitPad_0x3A0_1 : 7; // 0x3A0(0x1)
	uint8_t Pad_0x3A1[0xF]; // 0x3A1(0xF)
	float CheckDuration; // 0x3B0(0x4)
	uint8_t Pad_0x3B4[0x14]; // 0x3B4(0x14)
	struct USceneComponent* SceneComponent; // 0x3C8(0x8)
	struct UBoxComponent* TriggerVolumn; // 0x3D0(0x8)
	struct USceneComponent* Audio3DPosition; // 0x3D8(0x8)


	// Object: Function DFMQuest.ClientPerformanceTrigger.SetTimeDilation
	// Flags: [Final|Native|Public]
	// Offset: 0x13b57718
	// Params: [ Num(1) Size(0x1) ]
	void SetTimeDilation(uint8_t bAddOrRemove);

	// Object: Function DFMQuest.ClientPerformanceTrigger.SetScreenEffect
	// Flags: [Final|Native|Public]
	// Offset: 0x13b5766c
	// Params: [ Num(1) Size(0x1) ]
	void SetScreenEffect(uint8_t bAddOrRemove);

	// Object: Function DFMQuest.ClientPerformanceTrigger.SetDisableSkills
	// Flags: [Final|Native|Public]
	// Offset: 0x13b575c0
	// Params: [ Num(1) Size(0x1) ]
	void SetDisableSkills(uint8_t bAddOrRemove);

	// Object: Function DFMQuest.ClientPerformanceTrigger.SetAudioEvent
	// Flags: [Final|Native|Public]
	// Offset: 0x13b57514
	// Params: [ Num(1) Size(0x1) ]
	void SetAudioEvent(uint8_t bAddOrRemove);

	// Object: Function DFMQuest.ClientPerformanceTrigger.ResetTrigger
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x13b57500
	// Params: [ Num(0) Size(0x0) ]
	void ResetTrigger();

	// Object: Function DFMQuest.ClientPerformanceTrigger.RemoveEffects
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x13b574ec
	// Params: [ Num(0) Size(0x0) ]
	void RemoveEffects();

	// Object: Function DFMQuest.ClientPerformanceTrigger.OnTriggerOverlapEnd
	// Flags: [Native|Public]
	// Offset: 0x13b57390
	// Params: [ Num(4) Size(0x1C) ]
	void OnTriggerOverlapEnd(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex);

	// Object: Function DFMQuest.ClientPerformanceTrigger.OnTriggerOverlapBegin
	// Flags: [Native|Public|HasOutParms]
	// Offset: 0x13b57190
	// Params: [ Num(6) Size(0xA8) ]
	void OnTriggerOverlapBegin(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, uint8_t bFromSweep, const struct FHitResult& SweepResult);

	// Object: Function DFMQuest.ClientPerformanceTrigger.CheckPlayerStillInTrigger
	// Flags: [Final|Native|Public]
	// Offset: 0x13b5717c
	// Params: [ Num(0) Size(0x0) ]
	void CheckPlayerStillInTrigger();

	// Object: Function DFMQuest.ClientPerformanceTrigger.AddEffects
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x13b57168
	// Params: [ Num(0) Size(0x0) ]
	void AddEffects();
	DEFINE_UE_CLASS_HELPERS(AClientPerformanceTrigger, "ClientPerformanceTrigger")

};

// Object: Class DFMQuest.DFMQuestActionLib
// Size: 0x28 (Inherited: 0x28)
struct UDFMQuestActionLib : UGPQuestActionLib_Basic
{

	// Object: Function DFMQuest.DFMQuestActionLib.QA_VehicleStartAutoDrive
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x13b618d0
	// Params: [ Num(4) Size(0x18) ]
	static void QA_VehicleStartAutoDrive(struct AGPQuestActionContext* QAContext, struct FName VehicleTag, float ExpectVelocity, float ExpectDuration);

	// Object: Function DFMQuest.DFMQuestActionLib.QA_VehicleAIStartDramaArea
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x13b617c8
	// Params: [ Num(3) Size(0x18) ]
	static void QA_VehicleAIStartDramaArea(struct AGPQuestActionContext* QAContext, struct FName VehicleTag, struct FName DramaTag);

	// Object: Function DFMQuest.DFMQuestActionLib.QA_VehicleAddImpulse
	// Flags: [Final|Native|Static|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x13b61684
	// Params: [ Num(4) Size(0x20) ]
	static void QA_VehicleAddImpulse(struct AGPQuestActionContext* QAContext, struct FName VehicleTag, float SpeedImpulse, struct FVector SpeedDirection);

	// Object: Function DFMQuest.DFMQuestActionLib.QA_UpdateOptionalObjectiveHUD
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x13b6141c
	// Params: [ Num(5) Size(0x29) ]
	static void QA_UpdateOptionalObjectiveHUD(struct AGPQuestActionContext* QAContext, struct FText ObjectiveTitle, EGPQuestObjectiveHUDType InMissionType, int32_t OptionalObjecitveIndex, EGPQuestOptionalObjectiveOperationType ObjectiveState);

	// Object: Function DFMQuest.DFMQuestActionLib.QA_TutorialUpdateOnlyShowActorTags
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x13b612ec
	// Params: [ Num(2) Size(0x18) ]
	static void QA_TutorialUpdateOnlyShowActorTags(struct AGPQuestActionContext* QAContext, struct TArray<struct FName> ActorTags);

	// Object: Function DFMQuest.DFMQuestActionLib.QA_TutorialUpdateOnlyHideActorTags
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x13b611bc
	// Params: [ Num(2) Size(0x18) ]
	static void QA_TutorialUpdateOnlyHideActorTags(struct AGPQuestActionContext* QAContext, struct TArray<struct FName> ActorTags);

	// Object: Function DFMQuest.DFMQuestActionLib.QA_TutorialUnLockLuaHudPanels
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x13b610b4
	// Params: [ Num(2) Size(0x18) ]
	static void QA_TutorialUnLockLuaHudPanels(struct AGPQuestActionContext* QAContext, struct TArray<struct FString> LuaHUDPanelNames);

	// Object: Function DFMQuest.DFMQuestActionLib.QA_TutorialUnLockHudPanels
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x13b60f84
	// Params: [ Num(2) Size(0x18) ]
	static void QA_TutorialUnLockHudPanels(struct AGPQuestActionContext* QAContext, struct TArray<struct FName> HUDPanelNames);

	// Object: Function DFMQuest.DFMQuestActionLib.QA_TutorialSwitchToDefaultKeySettings
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x13b60eac
	// Params: [ Num(2) Size(0x9) ]
	static void QA_TutorialSwitchToDefaultKeySettings(struct AGPQuestActionContext* QAContext, uint8_t bUseDefault);

	// Object: Function DFMQuest.DFMQuestActionLib.QA_TutorialShowGuidePopWindowUI
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x13b60da0
	// Params: [ Num(3) Size(0x14) ]
	static void QA_TutorialShowGuidePopWindowUI(struct AGPQuestActionContext* QAContext, int32_t GuidePopWindowId, struct FName GuideAudio);

	// Object: Function DFMQuest.DFMQuestActionLib.QA_TutorialShowGuidePopTipsUI
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x13b60c94
	// Params: [ Num(3) Size(0x14) ]
	static void QA_TutorialShowGuidePopTipsUI(struct AGPQuestActionContext* QAContext, int32_t GuidePopTipsId, struct FName GuideAudio);

	// Object: Function DFMQuest.DFMQuestActionLib.QA_TutorialShowGuidePopButtonUI
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x13b60bbc
	// Params: [ Num(2) Size(0x18) ]
	static void QA_TutorialShowGuidePopButtonUI(struct AGPQuestActionContext* QAContext, struct FString ButtonWord);

	// Object: Function DFMQuest.DFMQuestActionLib.QA_TutorialShowGuideDialogUI
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x13b60aec
	// Params: [ Num(2) Size(0xC) ]
	static void QA_TutorialShowGuideDialogUI(struct AGPQuestActionContext* QAContext, int32_t DialogID);

	// Object: Function DFMQuest.DFMQuestActionLib.QA_TutorialShowGuideClickUI
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x13b609dc
	// Params: [ Num(3) Size(0xD) ]
	static void QA_TutorialShowGuideClickUI(struct AGPQuestActionContext* QAContext, int32_t GuideClickId, uint8_t bForceClick);

	// Object: Function DFMQuest.DFMQuestActionLib.QA_TutorialSetPlayerStart
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x13b60910
	// Params: [ Num(2) Size(0x10) ]
	static void QA_TutorialSetPlayerStart(struct AGPQuestActionContext* QAContext, struct FName QATag_NewPlayerStartTag);

	// Object: Function DFMQuest.DFMQuestActionLib.QA_TutorialSetListenMapTargetClick
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x13b60838
	// Params: [ Num(2) Size(0x9) ]
	static void QA_TutorialSetListenMapTargetClick(struct AGPQuestActionContext* QAContext, uint8_t bListen);

	// Object: Function DFMQuest.DFMQuestActionLib.QA_TutorialSetCustomRooleteeMedItem
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x13b6076c
	// Params: [ Num(2) Size(0x10) ]
	static void QA_TutorialSetCustomRooleteeMedItem(struct AGPQuestActionContext* QAContext, int64_t MedItemId);

	// Object: Function DFMQuest.DFMQuestActionLib.QA_TutorialRemindEscape
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x13b60694
	// Params: [ Num(2) Size(0x9) ]
	static void QA_TutorialRemindEscape(struct AGPQuestActionContext* QAContext, uint8_t bOpenRemind);

	// Object: Function DFMQuest.DFMQuestActionLib.QA_TutorialLockLuaHudPanels
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x13b6058c
	// Params: [ Num(2) Size(0x18) ]
	static void QA_TutorialLockLuaHudPanels(struct AGPQuestActionContext* QAContext, struct TArray<struct FString> LuaHUDPanelNames);

	// Object: Function DFMQuest.DFMQuestActionLib.QA_TutorialLockHudPanels
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x13b6045c
	// Params: [ Num(2) Size(0x18) ]
	static void QA_TutorialLockHudPanels(struct AGPQuestActionContext* QAContext, struct TArray<struct FName> HUDPanelNames);

	// Object: Function DFMQuest.DFMQuestActionLib.QA_TutorialDisableInputAction
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x13b60348
	// Params: [ Num(3) Size(0xA) ]
	static void QA_TutorialDisableInputAction(struct AGPQuestActionContext* QAContext, EQAInputActionType ActionType, uint8_t bDisable);

	// Object: Function DFMQuest.DFMQuestActionLib.QA_TutorialChangeGuidePopButtonUIStrengh
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x13b60270
	// Params: [ Num(2) Size(0x9) ]
	static void QA_TutorialChangeGuidePopButtonUIStrengh(struct AGPQuestActionContext* QAContext, uint8_t bStrong);

	// Object: Function DFMQuest.DFMQuestActionLib.QA_TryKnockBackCharacter
	// Flags: [Final|Native|Static|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x13b600e0
	// Params: [ Num(5) Size(0x28) ]
	static void QA_TryKnockBackCharacter(struct AGPQuestActionContext* QAContext, struct ADFMCharacter* Maker, struct ADFMCharacter* Taker, uint8_t bOveridePosition, struct FVector WeaponPosition);

	// Object: Function DFMQuest.DFMQuestActionLib.QA_TeleportVehicleToTargetSpot
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x13b5ff9c
	// Params: [ Num(4) Size(0x1C) ]
	static void QA_TeleportVehicleToTargetSpot(struct AGPQuestActionContext* QAContext, struct FName VehicleTag, struct FName TargetSpotTag, float SpeedImpulse);

	// Object: Function DFMQuest.DFMQuestActionLib.QA_TeleportOnePlayerOnVehicle
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x13b5fe58
	// Params: [ Num(4) Size(0x1C) ]
	static void QA_TeleportOnePlayerOnVehicle(struct AGPQuestActionContext* QAContext, struct FName VehicleTag, struct FName SeatName, int32_t PlayerIndex);

	// Object: Function DFMQuest.DFMQuestActionLib.QA_TeleportOneCharacterOnVehicle
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x13b5fcd0
	// Params: [ Num(5) Size(0x21) ]
	static void QA_TeleportOneCharacterOnVehicle(struct AGPQuestActionContext* QAContext, struct FName VehicleTag, struct FName SeatName, struct AGPCharacter* TargetCharacter, uint8_t isTeleport);

	// Object: Function DFMQuest.DFMQuestActionLib.QA_TeleportCharacterToTargetSpot
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x13b5fbc8
	// Params: [ Num(3) Size(0x18) ]
	static void QA_TeleportCharacterToTargetSpot(struct AGPQuestActionContext* QAContext, struct AGPCharacter* InCharacter, struct FName TargetSpotTag);

	// Object: Function DFMQuest.DFMQuestActionLib.QA_TeleportAllPlayersOnVehicle
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x13b5fa40
	// Params: [ Num(5) Size(0x19) ]
	static void QA_TeleportAllPlayersOnVehicle(struct AGPQuestActionContext* QAContext, struct FName VehicleTag, float ExpectVelocity, float ExpectDuration, uint8_t IsLeaderDrive);

	// Object: Function DFMQuest.DFMQuestActionLib.QA_StopTaggedTimer
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x13b5f974
	// Params: [ Num(2) Size(0x10) ]
	static void QA_StopTaggedTimer(struct AGPQuestActionContext* QAContext, struct FName TimerTag);

	// Object: Function DFMQuest.DFMQuestActionLib.QA_StopListenChaseTarget
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x13b5f86c
	// Params: [ Num(3) Size(0x18) ]
	static void QA_StopListenChaseTarget(struct AGPQuestActionContext* QAContext, struct AActor* TargetClass, struct FName QATag_TargetTag);

	// Object: Function DFMQuest.DFMQuestActionLib.QA_StopAudio
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x13b5f764
	// Params: [ Num(3) Size(0x14) ]
	static void QA_StopAudio(struct AGPQuestActionContext* QAContext, struct FName AudioName, int32_t TransitionMS);

	// Object: Function DFMQuest.DFMQuestActionLib.QA_StartDramaArea
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x13b5f688
	// Params: [ Num(3) Size(0x18) ]
	static struct FName QA_StartDramaArea(struct AGPQuestActionContext* QAContext, struct FName DramaTag);

	// Object: Function DFMQuest.DFMQuestActionLib.QA_SpawnVehicleByDramaArea
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x13b5f5bc
	// Params: [ Num(2) Size(0x10) ]
	static void QA_SpawnVehicleByDramaArea(struct AGPQuestActionContext* QAContext, struct FName DramaTag);

	// Object: Function DFMQuest.DFMQuestActionLib.QA_SpawnVehicle
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x13b5f4f0
	// Params: [ Num(2) Size(0x10) ]
	static void QA_SpawnVehicle(struct AGPQuestActionContext* QAContext, struct FName SpawnerTag);

	// Object: Function DFMQuest.DFMQuestActionLib.QA_ShowBanner
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x13b5f33c
	// Params: [ Num(2) Size(0x20) ]
	static void QA_ShowBanner(struct AGPQuestActionContext* QAContext, struct FText BannerText);

	// Object: Function DFMQuest.DFMQuestActionLib.QA_SetVehicleCampAndTeam
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x13b5f1fc
	// Params: [ Num(4) Size(0x18) ]
	static void QA_SetVehicleCampAndTeam(struct AGPQuestActionContext* QAContext, struct FName VehicleTag, int32_t NewCampId, int32_t NewTeamId);

	// Object: Function DFMQuest.DFMQuestActionLib.QA_SetPlayerRotateLimit
	// Flags: [Final|Native|Static|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x13b5f070
	// Params: [ Num(5) Size(0x24) ]
	static void QA_SetPlayerRotateLimit(struct AGPQuestActionContext* QAContext, struct AGPCharacter* Player, uint8_t bEnableLimit, struct FVector2D YawLimit, struct FVector2D PitchLimit);

	// Object: Function DFMQuest.DFMQuestActionLib.QA_SetPlayerRelaxIdleState
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x13b5ef60
	// Params: [ Num(3) Size(0x11) ]
	static void QA_SetPlayerRelaxIdleState(struct AGPQuestActionContext* QAContext, struct AGPCharacter* Player, uint8_t bIsRelaxIdle);

	// Object: Function DFMQuest.DFMQuestActionLib.QA_SetPlayerHealthAndArmorPercent
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x13b5ee20
	// Params: [ Num(4) Size(0x18) ]
	static void QA_SetPlayerHealthAndArmorPercent(struct AGPQuestActionContext* QAContext, struct AGPCharacter* Player, float NewHealthPercent, float NewArmorPercent);

	// Object: Function DFMQuest.DFMQuestActionLib.QA_SetPlayerForbidMoveAndRotate
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x13b5ec84
	// Params: [ Num(5) Size(0x13) ]
	static void QA_SetPlayerForbidMoveAndRotate(struct AGPQuestActionContext* QAContext, struct AGPCharacter* SpecialPlayer, EForbidMoveReason Reason, uint8_t bEnable, uint8_t bOnAllPlayers);

	// Object: Function DFMQuest.DFMQuestActionLib.QA_SetPlayerCanSwitchWeapon
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x13b5eb28
	// Params: [ Num(4) Size(0x12) ]
	static void QA_SetPlayerCanSwitchWeapon(struct AGPQuestActionContext* QAContext, struct AGPCharacter* SpecialPlayer, uint8_t bCanSwitchWeapon, uint8_t bOnAllPlayers);

	// Object: Function DFMQuest.DFMQuestActionLib.QA_SetPlayerCanMove
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x13b5e9cc
	// Params: [ Num(4) Size(0x12) ]
	static void QA_SetPlayerCanMove(struct AGPQuestActionContext* QAContext, struct AGPCharacter* SpecialPlayer, uint8_t bCanMove, uint8_t bOnAllPlayers);

	// Object: Function DFMQuest.DFMQuestActionLib.QA_SetPlayerCanInteract
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x13b5e7dc
	// Params: [ Num(6) Size(0x14) ]
	static void QA_SetPlayerCanInteract(struct AGPQuestActionContext* QAContext, struct AGPCharacter* SpecialPlayer, uint8_t bCanInteract, uint8_t bCanUseItem, uint8_t bCanDrive, uint8_t bOnAllPlayers);

	// Object: Function DFMQuest.DFMQuestActionLib.QA_SetPlayerCanFire
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x13b5e680
	// Params: [ Num(4) Size(0x12) ]
	static void QA_SetPlayerCanFire(struct AGPQuestActionContext* QAContext, struct APlayerController* PlayerController, uint8_t bEnable, uint8_t bOnAllPlayers);

	// Object: Function DFMQuest.DFMQuestActionLib.QA_SetPlayerCameraRotationScale
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x13b5e534
	// Params: [ Num(4) Size(0x15) ]
	static void QA_SetPlayerCameraRotationScale(struct AGPQuestActionContext* QAContext, struct APlayerController* PlayerController, float ratio, uint8_t bOnAllPlayers);

	// Object: Function DFMQuest.DFMQuestActionLib.QA_SetObjectiveTitleWithTimeOut
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x13b5e1a8
	// Params: [ Num(8) Size(0x45) ]
	static void QA_SetObjectiveTitleWithTimeOut(struct AGPQuestActionContext* QAContext, struct FText InText, EGPQuestObjectiveHUDType InMissionHUDType, ESubtitleSequenceType SubtitleSeqType, struct TArray<struct FName> SubtitleSeqIds, struct AActor* SpeakerActor, float TimeOutSeconds, uint8_t bLoop);

	// Object: Function DFMQuest.DFMQuestActionLib.QA_SetObjectiveTitleWithHealthBar
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x13b5df08
	// Params: [ Num(6) Size(0x39) ]
	static void QA_SetObjectiveTitleWithHealthBar(struct AGPQuestActionContext* QAContext, struct FText ObjectiveTitle, EGPQuestObjectiveHUDType InMissionType, struct AActor* ActorClass, struct FName QATag_TargetTag, EGPQuestActionScope Scope);

	// Object: Function DFMQuest.DFMQuestActionLib.QA_SetNetWorkForVehicleAutoDriving
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x13b5de30
	// Params: [ Num(2) Size(0x9) ]
	static void QA_SetNetWorkForVehicleAutoDriving(struct AGPQuestActionContext* QAContext, uint8_t bEnable);

	// Object: Function DFMQuest.DFMQuestActionLib.QA_SetGamingAreaActivate
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x13b5dcdc
	// Params: [ Num(4) Size(0x12) ]
	static void QA_SetGamingAreaActivate(struct AGPQuestActionContext* QAContext, struct FName GamingAreaTag, uint8_t bActivate, EGPQuestActionScope Scope);

	// Object: Function DFMQuest.DFMQuestActionLib.QA_SetCurrentAITemplateTable
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x13b5dc10
	// Params: [ Num(2) Size(0x10) ]
	static void QA_SetCurrentAITemplateTable(struct AGPQuestActionContext* QAContext, struct UDataTable* NpcTemplateTable);

	// Object: Function DFMQuest.DFMQuestActionLib.QA_SetCarryBodyBoxLooted
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x13b5db00
	// Params: [ Num(3) Size(0x11) ]
	static void QA_SetCarryBodyBoxLooted(struct AGPQuestActionContext* QAContext, struct AInventoryPickup_DeadBody* CarryBodyBox, uint8_t bLooted);

	// Object: Function DFMQuest.DFMQuestActionLib.QA_SendStartAutoDriveEventToAllPlayers
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x13b5d9f8
	// Params: [ Num(3) Size(0x10) ]
	static void QA_SendStartAutoDriveEventToAllPlayers(struct AGPQuestActionContext* QAContext, float ExpectVelocity, float ExpectDuration);

	// Object: Function DFMQuest.DFMQuestActionLib.QA_SendInteractionTag
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x13b5d8ac
	// Params: [ Num(4) Size(0x19) ]
	static void QA_SendInteractionTag(struct AGPQuestActionContext* QAContext, struct APlayerController* PlayerController, struct FGameplayTag OperatorTag, uint8_t bOnAllPlayers);

	// Object: Function DFMQuest.DFMQuestActionLib.QA_ResetQLevel
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x13b5d818
	// Params: [ Num(1) Size(0x8) ]
	static void QA_ResetQLevel(struct AGPQuestActionContext* QAContext);

	// Object: Function DFMQuest.DFMQuestActionLib.QA_ResetPlayerAbility
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x13b5d74c
	// Params: [ Num(2) Size(0x10) ]
	static void QA_ResetPlayerAbility(struct AGPQuestActionContext* QAContext, struct ADFMCharacter* CHARACTER);

	// Object: Function DFMQuest.DFMQuestActionLib.QA_ResetMulticast
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x13b5d6b8
	// Params: [ Num(1) Size(0x8) ]
	static void QA_ResetMulticast(struct AGPQuestActionContext* QAContext);

	// Object: Function DFMQuest.DFMQuestActionLib.QA_ResetForReplayStage
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x13b5d624
	// Params: [ Num(1) Size(0x8) ]
	static void QA_ResetForReplayStage(struct AGPQuestActionContext* QAContext);

	// Object: Function DFMQuest.DFMQuestActionLib.QA_ResetAllVehicle
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x13b5d590
	// Params: [ Num(1) Size(0x8) ]
	static void QA_ResetAllVehicle(struct AGPQuestActionContext* QAContext);

	// Object: Function DFMQuest.DFMQuestActionLib.QA_ResetAllSubtitles
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x13b5d4fc
	// Params: [ Num(1) Size(0x8) ]
	static void QA_ResetAllSubtitles(struct AGPQuestActionContext* QAContext);

	// Object: Function DFMQuest.DFMQuestActionLib.QA_ResetAllPlayerIdleState
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x13b5d468
	// Params: [ Num(1) Size(0x8) ]
	static void QA_ResetAllPlayerIdleState(struct AGPQuestActionContext* QAContext);

	// Object: Function DFMQuest.DFMQuestActionLib.QA_ResetAllPlayer
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x13b5d358
	// Params: [ Num(3) Size(0x11) ]
	static void QA_ResetAllPlayer(struct AGPQuestActionContext* QAContext, struct FGameplayTag FSMGlobalEvent, uint8_t bDetachFromActor);

	// Object: Function DFMQuest.DFMQuestActionLib.QA_ResetAllAliveAiAndLabAi
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x13b5d1b4
	// Params: [ Num(5) Size(0xC) ]
	static void QA_ResetAllAliveAiAndLabAi(struct AGPQuestActionContext* QAContext, EGPQuestActionScope Scope, uint8_t bResetRobortAi, uint8_t bResetLabAi, uint8_t bResetPlayerAi);

	// Object: Function DFMQuest.DFMQuestActionLib.QA_ResetAllAI
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x13b5d120
	// Params: [ Num(1) Size(0x8) ]
	static void QA_ResetAllAI(struct AGPQuestActionContext* QAContext);

	// Object: Function DFMQuest.DFMQuestActionLib.QA_RemoveCharacterBuffDisableTag
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x13b5d018
	// Params: [ Num(3) Size(0x11) ]
	static void QA_RemoveCharacterBuffDisableTag(struct AGPQuestActionContext* QAContext, struct AActor* ActorClass, EBuffDisableTag BuffDisableTag);

	// Object: Function DFMQuest.DFMQuestActionLib.QA_RemoveBuff
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x13b5cea8
	// Params: [ Num(3) Size(0x20) ]
	static void QA_RemoveBuff(struct AGPQuestActionContext* QAContext, int32_t BuffId, struct TArray<struct AActor*> PlayerCharacters);

	// Object: Function DFMQuest.DFMQuestActionLib.QA_RemoveAllPlayerWeapon
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x13b5cddc
	// Params: [ Num(2) Size(0x10) ]
	static void QA_RemoveAllPlayerWeapon(struct AGPQuestActionContext* QAContext, int64_t WeaponItemId);

	// Object: Function DFMQuest.DFMQuestActionLib.QA_ReleasePlayerLocation
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x13b5cd48
	// Params: [ Num(1) Size(0x8) ]
	static void QA_ReleasePlayerLocation(struct AGPQuestActionContext* QAContext);

	// Object: Function DFMQuest.DFMQuestActionLib.QA_RebornAllPlayer
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x13b5cc70
	// Params: [ Num(2) Size(0x9) ]
	static void QA_RebornAllPlayer(struct AGPQuestActionContext* QAContext, uint8_t ResetAlivePlayerPosition);

	// Object: Function DFMQuest.DFMQuestActionLib.QA_RaidStopStageTimeLimit
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x13b5cbdc
	// Params: [ Num(1) Size(0x8) ]
	static void QA_RaidStopStageTimeLimit(struct AGPQuestActionContext* QAContext);

	// Object: Function DFMQuest.DFMQuestActionLib.QA_RaidNewStartPlayerAll
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x13b5cb10
	// Params: [ Num(2) Size(0x10) ]
	static void QA_RaidNewStartPlayerAll(struct AGPQuestActionContext* QAContext, struct FName StartSpotName);

	// Object: Function DFMQuest.DFMQuestActionLib.QA_PlayUiAudio
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x13b5ca44
	// Params: [ Num(2) Size(0x10) ]
	static void QA_PlayUiAudio(struct AGPQuestActionContext* QAContext, struct FName AudioEventName);

	// Object: Function DFMQuest.DFMQuestActionLib.QA_PlaySubtitleNoticeWithTeamIds
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x13b5c88c
	// Params: [ Num(4) Size(0x28) ]
	static void QA_PlaySubtitleNoticeWithTeamIds(struct AGPQuestActionContext* QAContext, ESubtitleSequenceType SubtitleSequenceType, struct FName SubtitleSequenceId, struct TArray<int32_t> TeamIds);

	// Object: Function DFMQuest.DFMQuestActionLib.QA_PlaySubtitleNoticeToNonContractTeams
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x13b5c780
	// Params: [ Num(3) Size(0x14) ]
	static void QA_PlaySubtitleNoticeToNonContractTeams(struct AGPQuestActionContext* QAContext, ESubtitleSequenceType SubtitleSequenceType, struct FName SubtitleSequenceId);

	// Object: Function DFMQuest.DFMQuestActionLib.QA_PlaySubtitleNotice
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x13b5c674
	// Params: [ Num(3) Size(0x14) ]
	static void QA_PlaySubtitleNotice(struct AGPQuestActionContext* QAContext, ESubtitleSequenceType SubtitleSequenceType, struct FName SubtitleSequenceId);

	// Object: Function DFMQuest.DFMQuestActionLib.QA_PlayMusic
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x13b5c5a8
	// Params: [ Num(2) Size(0x10) ]
	static void QA_PlayMusic(struct AGPQuestActionContext* QAContext, struct FName MusicEventName);

	// Object: Function DFMQuest.DFMQuestActionLib.QA_PlayExplosionEffect
	// Flags: [Final|Native|Static|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x13b5c460
	// Params: [ Num(4) Size(0x20) ]
	static void QA_PlayExplosionEffect(struct AGPQuestActionContext* QAContext, struct AGPCharacter* GPCharacter, EExplosionType ExplosionType, struct FVector ExplosionLocation);

	// Object: Function DFMQuest.DFMQuestActionLib.QA_PlayerTryToStopSkill
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x13b5c358
	// Params: [ Num(3) Size(0x14) ]
	static void QA_PlayerTryToStopSkill(struct AGPQuestActionContext* QAContext, struct AGPCharacter* Player, int32_t SkillId);

	// Object: Function DFMQuest.DFMQuestActionLib.QA_PlayerTryStandUp
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x13b5c28c
	// Params: [ Num(2) Size(0x10) ]
	static void QA_PlayerTryStandUp(struct AGPQuestActionContext* QAContext, struct ADFMCharacter* CHARACTER);

	// Object: Function DFMQuest.DFMQuestActionLib.QA_PlayersGetOffFromVehicle
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x13b5c17c
	// Params: [ Num(3) Size(0x11) ]
	static void QA_PlayersGetOffFromVehicle(struct AGPQuestActionContext* QAContext, struct APlayerController* PlayerController, uint8_t bOnAllPlayers);

	// Object: Function DFMQuest.DFMQuestActionLib.QA_PlayersDetachFromActor
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x13b5c0b0
	// Params: [ Num(2) Size(0x10) ]
	static void QA_PlayersDetachFromActor(struct AGPQuestActionContext* QAContext, struct AActor* ActorClass);

	// Object: Function DFMQuest.DFMQuestActionLib.QA_PlayersAttachToActor
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x13b5bfa8
	// Params: [ Num(3) Size(0x18) ]
	static void QA_PlayersAttachToActor(struct AGPQuestActionContext* QAContext, struct FName QATag, struct AActor* ActorClass);

	// Object: Function DFMQuest.DFMQuestActionLib.QA_PlayerModifyAmmo
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x13b5bea0
	// Params: [ Num(3) Size(0x14) ]
	static void QA_PlayerModifyAmmo(struct AGPQuestActionContext* QAContext, struct AGPCharacter* Player, float Val);

	// Object: Function DFMQuest.DFMQuestActionLib.QA_PlayAudio3D
	// Flags: [Final|Native|Static|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x13b5bd94
	// Params: [ Num(3) Size(0x1C) ]
	static void QA_PlayAudio3D(struct AGPQuestActionContext* QAContext, struct FName AudioName, struct FVector PlayingLocation);

	// Object: Function DFMQuest.DFMQuestActionLib.QA_PlayAudio2D
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x13b5bcc8
	// Params: [ Num(2) Size(0x10) ]
	static void QA_PlayAudio2D(struct AGPQuestActionContext* QAContext, struct FName AudioName);

	// Object: Function DFMQuest.DFMQuestActionLib.QA_OverridePlayerSpeedAndPose
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x13b5bb7c
	// Params: [ Num(4) Size(0x12) ]
	static void QA_OverridePlayerSpeedAndPose(struct AGPQuestActionContext* QAContext, struct APlayerController* PlayerController, EOverrideMovementType Pose, uint8_t bOnAllPlayers);

	// Object: Function DFMQuest.DFMQuestActionLib.QA_MulticastPlayFxEffect
	// Flags: [Final|Native|Static|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x13b5ba38
	// Params: [ Num(4) Size(0x24) ]
	static void QA_MulticastPlayFxEffect(struct AGPQuestActionContext* QAContext, struct AGPCharacter* Instigator, struct FName EffectName, struct FVector Location);

	// Object: Function DFMQuest.DFMQuestActionLib.QA_MulticastAddOrRemoveScreenEffect
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x13b5b928
	// Params: [ Num(3) Size(0x11) ]
	static void QA_MulticastAddOrRemoveScreenEffect(struct AGPQuestActionContext* QAContext, struct FName EffectName, uint8_t bAdd);

	// Object: Function DFMQuest.DFMQuestActionLib.QA_KillVehicle
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x13b5b85c
	// Params: [ Num(2) Size(0x10) ]
	static void QA_KillVehicle(struct AGPQuestActionContext* QAContext, struct FName VehicleTag);

	// Object: Function DFMQuest.DFMQuestActionLib.QA_KillAI
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x13b5b718
	// Params: [ Num(4) Size(0x18) ]
	static void QA_KillAI(struct AGPQuestActionContext* QAContext, struct FName AISpawnTag, EQAKillAIType QAType, int32_t MaxKilledNumPerFrame);

	// Object: Function DFMQuest.DFMQuestActionLib.QA_IntroClientShowPanel
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x13b5b5a4
	// Params: [ Num(3) Size(0x19) ]
	static void QA_IntroClientShowPanel(struct AGPQuestActionContext* QAContext, struct TArray<struct FName> HUDPanelNames, uint8_t bDisplay);

	// Object: Function DFMQuest.DFMQuestActionLib.QA_HideOrShowActorByTag
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x13b5b430
	// Params: [ Num(3) Size(0x19) ]
	static void QA_HideOrShowActorByTag(struct AGPQuestActionContext* QAContext, struct TArray<struct FName> ActorTags, uint8_t bHide);

	// Object: Function DFMQuest.DFMQuestActionLib.QA_HelicopterChangePathState
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x13b5b324
	// Params: [ Num(3) Size(0x14) ]
	static void QA_HelicopterChangePathState(struct AGPQuestActionContext* QAContext, int32_t PathState, struct FName Tag);

	// Object: Function DFMQuest.DFMQuestActionLib.QA_GetWeaponCountsFromPlayer
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x13b5b248
	// Params: [ Num(3) Size(0x14) ]
	static int32_t QA_GetWeaponCountsFromPlayer(struct AGPQuestActionContext* QAContext, int64_t WeaponItemId);

	// Object: Function DFMQuest.DFMQuestActionLib.QA_GetSocketAttachmentFromActor
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x13b5b130
	// Params: [ Num(4) Size(0x20) ]
	static struct AActor* QA_GetSocketAttachmentFromActor(struct AGPQuestActionContext* QAContext, struct AActor* Actor, struct FName SocketName);

	// Object: Function DFMQuest.DFMQuestActionLib.QA_GetDeadBodyBoxOfCharacter
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x13b5b018
	// Params: [ Num(4) Size(0x20) ]
	static struct AInventoryPickup_DeadBody* QA_GetDeadBodyBoxOfCharacter(struct AGPQuestActionContext* QAContext, struct FName DeadCharacterTag, EGPQuestActionScope Scope);

	// Object: Function DFMQuest.DFMQuestActionLib.QA_GetCharacterItemTypeOnAttachPosition
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x13b5aeac
	// Params: [ Num(5) Size(0x28) ]
	static struct TArray<struct FString> QA_GetCharacterItemTypeOnAttachPosition(struct AGPQuestActionContext* QAContext, struct ADFMCharacter* Target, EItemMainType ItemType, int32_t pos);

	// Object: Function DFMQuest.DFMQuestActionLib.QA_GetCarryBodyBoxOfCharacter
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x13b5ad94
	// Params: [ Num(4) Size(0x20) ]
	static struct AInventoryPickup_DeadBody* QA_GetCarryBodyBoxOfCharacter(struct AGPQuestActionContext* QAContext, struct FName DeadCharacterTag, EGPQuestActionScope Scope);

	// Object: Function DFMQuest.DFMQuestActionLib.QA_FocusPlayerLocation
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable]
	// Offset: 0x13b5acb8
	// Params: [ Num(2) Size(0x14) ]
	static void QA_FocusPlayerLocation(struct AGPQuestActionContext* QAContext, const struct FVector& InAbsoluteLocation);

	// Object: Function DFMQuest.DFMQuestActionLib.QA_EggUnLockLuaHudPanels
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x13b5abb0
	// Params: [ Num(2) Size(0x18) ]
	static void QA_EggUnLockLuaHudPanels(struct AGPQuestActionContext* QAContext, struct TArray<struct FString> LuaHUDPanelNames);

	// Object: Function DFMQuest.DFMQuestActionLib.QA_EggUnLockHudPanels
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x13b5aa80
	// Params: [ Num(2) Size(0x18) ]
	static void QA_EggUnLockHudPanels(struct AGPQuestActionContext* QAContext, struct TArray<struct FName> HUDPanelNames);

	// Object: Function DFMQuest.DFMQuestActionLib.QA_EggSpawnGoldenNestForPlayer
	// Flags: [Final|Native|Static|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x13b5a7d8
	// Params: [ Num(9) Size(0x58) ]
	static struct AInventoryPickup_EggGoldenNest* QA_EggSpawnGoldenNestForPlayer(struct AGPQuestActionContext* QAContext, struct AInventoryPickup_EggGoldenNest* GoldenNestClass, struct FName ItemID, struct FString ItemUniqueId, struct FVector Location, struct FRotator Rotation, struct AGPCharacter* OwnerPlayer, struct FName TagToAdd);

	// Object: Function DFMQuest.DFMQuestActionLib.QA_EggLockLuaHudPanels
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x13b5a6d0
	// Params: [ Num(2) Size(0x18) ]
	static void QA_EggLockLuaHudPanels(struct AGPQuestActionContext* QAContext, struct TArray<struct FString> LuaHUDPanelNames);

	// Object: Function DFMQuest.DFMQuestActionLib.QA_EggLockHudPanels
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x13b5a5a0
	// Params: [ Num(2) Size(0x18) ]
	static void QA_EggLockHudPanels(struct AGPQuestActionContext* QAContext, struct TArray<struct FName> HUDPanelNames);

	// Object: Function DFMQuest.DFMQuestActionLib.QA_EggDisableInputAction
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x13b5a48c
	// Params: [ Num(3) Size(0xA) ]
	static void QA_EggDisableInputAction(struct AGPQuestActionContext* QAContext, EQAInputActionType ActionType, uint8_t bDisable);

	// Object: Function DFMQuest.DFMQuestActionLib.QA_EggClientEnterOrLeaveEggLevel
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x13b5a3b4
	// Params: [ Num(2) Size(0x9) ]
	static void QA_EggClientEnterOrLeaveEggLevel(struct AGPQuestActionContext* QAContext, uint8_t bEnter);

	// Object: Function DFMQuest.DFMQuestActionLib.QA_DisplayGuideClickUI
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x13b5a2a4
	// Params: [ Num(3) Size(0xD) ]
	static void QA_DisplayGuideClickUI(struct AGPQuestActionContext* QAContext, int32_t GuideClickId, uint8_t bForceClick);

	// Object: Function DFMQuest.DFMQuestActionLib.QA_DisplayBossBloodStrip
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x13b5a0a0
	// Params: [ Num(5) Size(0x34) ]
	static void QA_DisplayBossBloodStrip(struct AGPQuestActionContext* QAContext, uint8_t bDisplay, struct AActor* BossActor, const struct FText& StripText, float HeightOffset);

	// Object: Function DFMQuest.DFMQuestActionLib.QA_DisableActorVisualAndCollision
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x13b59f54
	// Params: [ Num(4) Size(0x19) ]
	static void QA_DisableActorVisualAndCollision(struct AGPQuestActionContext* QAContext, struct UObject* ActorClass, struct FName ActorTag, uint8_t bDisable);

	// Object: Function DFMQuest.DFMQuestActionLib.QA_DestroyAIVehicle
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x13b59e88
	// Params: [ Num(2) Size(0x10) ]
	static void QA_DestroyAIVehicle(struct AGPQuestActionContext* QAContext, struct FName VehicleTag);

	// Object: Function DFMQuest.DFMQuestActionLib.QA_DeactivateFXProxyActors
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x13b59dbc
	// Params: [ Num(2) Size(0x10) ]
	static void QA_DeactivateFXProxyActors(struct AGPQuestActionContext* QAContext, struct FName ActorTag);

	// Object: Function DFMQuest.DFMQuestActionLib.QA_CommonTips
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x13b59b90
	// Params: [ Num(4) Size(0x30) ]
	static void QA_CommonTips(struct AGPQuestActionContext* QAContext, struct FText InTipsText, float ShowTime, int64_t SpecifyPlayerUin);

	// Object: Function DFMQuest.DFMQuestActionLib.QA_CloseGuideClickUI
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x13b59afc
	// Params: [ Num(1) Size(0x8) ]
	static void QA_CloseGuideClickUI(struct AGPQuestActionContext* QAContext);

	// Object: Function DFMQuest.DFMQuestActionLib.QA_ClientStreammingFocusPoint
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x13b59928
	// Params: [ Num(6) Size(0x2A) ]
	static void QA_ClientStreammingFocusPoint(struct AGPQuestActionContext* QAContext, struct AActor* ActorClass, struct FName Tag, struct FString Name, uint8_t bFocus, EGPQuestActionScope Scope);

	// Object: Function DFMQuest.DFMQuestActionLib.QA_ClientStreammingFocusLoc
	// Flags: [Final|Native|Static|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x13b59814
	// Params: [ Num(3) Size(0x15) ]
	static void QA_ClientStreammingFocusLoc(struct AGPQuestActionContext* QAContext, struct FVector AbsoluteLoc, uint8_t bFocus);

	// Object: Function DFMQuest.DFMQuestActionLib.QA_ClientShowHUDPanel
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x13b59748
	// Params: [ Num(2) Size(0x10) ]
	static void QA_ClientShowHUDPanel(struct AGPQuestActionContext* QAContext, struct FName PanelConfigName);

	// Object: Function DFMQuest.DFMQuestActionLib.QA_ClientShowHeadMarker
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x13b59638
	// Params: [ Num(3) Size(0x11) ]
	static void QA_ClientShowHeadMarker(struct AGPQuestActionContext* QAContext, struct FName ActorTag, uint8_t bShow);

	// Object: Function DFMQuest.DFMQuestActionLib.QA_ClientSequencePreSpawn
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x13b5956c
	// Params: [ Num(2) Size(0x10) ]
	static void QA_ClientSequencePreSpawn(struct AGPQuestActionContext* QAContext, struct FName CSTag);

	// Object: Function DFMQuest.DFMQuestActionLib.QA_ClientSendEventLogPlatform
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x13b59464
	// Params: [ Num(3) Size(0x10) ]
	static void QA_ClientSendEventLogPlatform(struct AGPQuestActionContext* QAContext, int32_t PCEventId, int32_t MobileEventId);

	// Object: Function DFMQuest.DFMQuestActionLib.QA_ClientSendCommonEventLog
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x13b59394
	// Params: [ Num(2) Size(0xC) ]
	static void QA_ClientSendCommonEventLog(struct AGPQuestActionContext* QAContext, int32_t EventId);

	// Object: Function DFMQuest.DFMQuestActionLib.QA_ClientResetSequence
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x13b592c8
	// Params: [ Num(2) Size(0x10) ]
	static void QA_ClientResetSequence(struct AGPQuestActionContext* QAContext, struct FName CSTag);

	// Object: Function DFMQuest.DFMQuestActionLib.QA_ClientResetPlayerMesh
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x13b59234
	// Params: [ Num(1) Size(0x8) ]
	static void QA_ClientResetPlayerMesh(struct AGPQuestActionContext* QAContext);

	// Object: Function DFMQuest.DFMQuestActionLib.QA_ClientRemoveGameHudState
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x13b59120
	// Params: [ Num(3) Size(0xA) ]
	static void QA_ClientRemoveGameHudState(struct AGPQuestActionContext* QAContext, EGameHUDSate State, uint8_t bForceRefresh);

	// Object: Function DFMQuest.DFMQuestActionLib.QA_ClientPlaySequence
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x13b59054
	// Params: [ Num(2) Size(0x10) ]
	static void QA_ClientPlaySequence(struct AGPQuestActionContext* QAContext, struct FName CSTag);

	// Object: Function DFMQuest.DFMQuestActionLib.QA_ClientHUDPanelsOperateGameHudState
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x13b58eec
	// Params: [ Num(4) Size(0x1A) ]
	static void QA_ClientHUDPanelsOperateGameHudState(struct AGPQuestActionContext* QAContext, const struct TArray<struct FName>& PanelConfigNames, EGameHUDSate State, EVisibleGameHUDStateOperators Operator);

	// Object: Function DFMQuest.DFMQuestActionLib.QA_ClientHideHUDPanel
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x13b58e20
	// Params: [ Num(2) Size(0x10) ]
	static void QA_ClientHideHUDPanel(struct AGPQuestActionContext* QAContext, struct FName PanelConfigName);

	// Object: Function DFMQuest.DFMQuestActionLib.QA_ClientHideActorInGame
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x13b58cd4
	// Params: [ Num(4) Size(0x19) ]
	static void QA_ClientHideActorInGame(struct AGPQuestActionContext* QAContext, struct UObject* ActorClass, struct FName ActorTag, uint8_t bHideInGame);

	// Object: Function DFMQuest.DFMQuestActionLib.QA_ClientFreezeStreamingLayers
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x13b58ba0
	// Params: [ Num(3) Size(0x19) ]
	static void QA_ClientFreezeStreamingLayers(struct AGPQuestActionContext* QAContext, const struct TArray<struct FString>& InLayerWildcard, uint8_t bFreeze);

	// Object: Function DFMQuest.DFMQuestActionLib.QA_ClientCutScenePreload
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x13b58ad4
	// Params: [ Num(2) Size(0x10) ]
	static void QA_ClientCutScenePreload(struct AGPQuestActionContext* QAContext, struct FName CSTag);

	// Object: Function DFMQuest.DFMQuestActionLib.QA_ClientAddGameHudState
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x13b589c0
	// Params: [ Num(3) Size(0xA) ]
	static void QA_ClientAddGameHudState(struct AGPQuestActionContext* QAContext, EGameHUDSate State, uint8_t bForceRefresh);

	// Object: Function DFMQuest.DFMQuestActionLib.QA_ClearSpeedAndPoseOverride
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x13b588b0
	// Params: [ Num(3) Size(0x11) ]
	static void QA_ClearSpeedAndPoseOverride(struct AGPQuestActionContext* QAContext, struct APlayerController* PlayerController, uint8_t bOnAllPlayers);

	// Object: Function DFMQuest.DFMQuestActionLib.QA_CleanVehicleAIDrama
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x13b587e4
	// Params: [ Num(2) Size(0x10) ]
	static void QA_CleanVehicleAIDrama(struct AGPQuestActionContext* QAContext, struct FName VehicleTag);

	// Object: Function DFMQuest.DFMQuestActionLib.QA_CheckCharacterHasItem
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x13b586c8
	// Params: [ Num(4) Size(0x19) ]
	static uint8_t QA_CheckCharacterHasItem(struct AGPQuestActionContext* QAContext, struct ADFMCharacter* Target, struct FName ItemID);

	// Object: Function DFMQuest.DFMQuestActionLib.QA_CharacterRemoveBuffs
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x13b5855c
	// Params: [ Num(3) Size(0x20) ]
	static void QA_CharacterRemoveBuffs(struct AGPQuestActionContext* QAContext, struct AGPCharacter* CHARACTER, struct TArray<int32_t> ClearBuffs);

	// Object: Function DFMQuest.DFMQuestActionLib.QA_CharacterApplyCameraModifier
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x13b583c4
	// Params: [ Num(5) Size(0x1A) ]
	static void QA_CharacterApplyCameraModifier(struct AGPQuestActionContext* QAContext, struct AGPCharacter* CHARACTER, struct UCameraModifier* ModifierClass, uint8_t bAdd, uint8_t bImmediately);

	// Object: Function DFMQuest.DFMQuestActionLib.QA_ChangeTodType
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x13b582f4
	// Params: [ Num(2) Size(0xC) ]
	static void QA_ChangeTodType(struct AGPQuestActionContext* QAContext, int32_t WeatherID);

	// Object: Function DFMQuest.DFMQuestActionLib.QA_CallBPActorEvent
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x13b581a4
	// Params: [ Num(4) Size(0x21) ]
	static void QA_CallBPActorEvent(struct AGPQuestActionContext* QAContext, struct FName QATag, struct FString EventName, EGPQuestActionScope Scope);

	// Object: Function DFMQuest.DFMQuestActionLib.QA_AIStartDramaArea
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x13b5809c
	// Params: [ Num(3) Size(0x18) ]
	static void QA_AIStartDramaArea(struct AGPQuestActionContext* QAContext, struct FName AISpawnTag, struct FName DramaTag);

	// Object: Function DFMQuest.DFMQuestActionLib.QA_AddWeaponOrAddCarrierAmmo
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x13b57f58
	// Params: [ Num(4) Size(0x1C) ]
	static void QA_AddWeaponOrAddCarrierAmmo(struct AGPQuestActionContext* QAContext, struct AActor* CharacterActor, int64_t WeaponItemId, int32_t AttachPos);

	// Object: Function DFMQuest.DFMQuestActionLib.QA_AddDamageToCharacterOnSpecifyPart
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x13b57e14
	// Params: [ Num(4) Size(0x15) ]
	static void QA_AddDamageToCharacterOnSpecifyPart(struct AGPQuestActionContext* QAContext, struct AActor* CHARACTER, float HealthDamage, ECharacterPart DamagePart);

	// Object: Function DFMQuest.DFMQuestActionLib.QA_AddCharacterBuffDisableTag
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x13b57d0c
	// Params: [ Num(3) Size(0x11) ]
	static void QA_AddCharacterBuffDisableTag(struct AGPQuestActionContext* QAContext, struct AActor* ActorClass, EBuffDisableTag BuffDisableTag);

	// Object: Function DFMQuest.DFMQuestActionLib.QA_AddBuff
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x13b57b60
	// Params: [ Num(4) Size(0x28) ]
	static void QA_AddBuff(struct AGPQuestActionContext* QAContext, int32_t BuffId, struct TArray<struct AActor*> PlayerCharacters, struct AActor* BuffMaker);

	// Object: Function DFMQuest.DFMQuestActionLib.QA_AddAllPlayerWeapon
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x13b579d8
	// Params: [ Num(5) Size(0x19) ]
	static void QA_AddAllPlayerWeapon(struct AGPQuestActionContext* QAContext, int64_t WeaponItemId, int32_t AmmoNum, int32_t AttachPos, uint8_t SwitchToThisWeapon);

	// Object: Function DFMQuest.DFMQuestActionLib.QA_ActivateFXProxyActors
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x13b5790c
	// Params: [ Num(2) Size(0x10) ]
	static void QA_ActivateFXProxyActors(struct AGPQuestActionContext* QAContext, struct FName ActorTag);
	DEFINE_UE_CLASS_HELPERS(UDFMQuestActionLib, "DFMQuestActionLib")

};

// Object: Class DFMQuest.SOLQuestActionLib
// Size: 0x28 (Inherited: 0x28)
struct USOLQuestActionLib : UDFMQuestActionLib
{

	// Object: Function DFMQuest.SOLQuestActionLib.QA_UnloadQuestLevel
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x13b654b8
	// Params: [ Num(1) Size(0x8) ]
	static void QA_UnloadQuestLevel(struct AGPQuestActionContext* QAContext);

	// Object: Function DFMQuest.SOLQuestActionLib.QA_TriggerAirDrop
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x13b653a0
	// Params: [ Num(4) Size(0x20) ]
	static struct AAirDropGeneratorGroup* QA_TriggerAirDrop(struct AGPQuestActionContext* QAContext, struct FName AirDropGroupTag, int32_t AirDropIndex);

	// Object: Function DFMQuest.SOLQuestActionLib.QA_ToggleExitOpenBanner
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x13b6513c
	// Params: [ Num(5) Size(0x30) ]
	static void QA_ToggleExitOpenBanner(struct AGPQuestActionContext* QAContext, struct FName Tag, struct FText ExitOpenText, ESOLUIIconType SOLUIIconType, float ExitOpenTextDuration);

	// Object: Function DFMQuest.SOLQuestActionLib.QA_TLogOperatePoint
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x13b65070
	// Params: [ Num(2) Size(0x10) ]
	static void QA_TLogOperatePoint(struct AGPQuestActionContext* QAContext, struct FName OperatePointName);

	// Object: Function DFMQuest.SOLQuestActionLib.QA_StopNPCStatusCheck
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x13b64f68
	// Params: [ Num(3) Size(0x14) ]
	static void QA_StopNPCStatusCheck(struct AGPQuestActionContext* QAContext, struct FName NPCTag, int32_t Handle);

	// Object: Function DFMQuest.SOLQuestActionLib.QA_ShowTipToClient
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x13b64d78
	// Params: [ Num(3) Size(0x24) ]
	static void QA_ShowTipToClient(struct AGPQuestActionContext* QAContext, struct FText TipDes, float Duration);

	// Object: Function DFMQuest.SOLQuestActionLib.QA_ShowExitPreparationCutScene
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x13b64cac
	// Params: [ Num(2) Size(0x10) ]
	static void QA_ShowExitPreparationCutScene(struct AGPQuestActionContext* QAContext, struct FName Tag);

	// Object: Function DFMQuest.SOLQuestActionLib.QA_SetQuestObjectionDesc
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x13b64ab4
	// Params: [ Num(3) Size(0x21) ]
	static void QA_SetQuestObjectionDesc(struct AGPQuestActionContext* QAContext, struct FText ObjectionDes, uint8_t IsBrief);

	// Object: Function DFMQuest.SOLQuestActionLib.QA_SetQuestMapRange
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x13b649a8
	// Params: [ Num(3) Size(0x18) ]
	static void QA_SetQuestMapRange(struct AGPQuestActionContext* QAContext, float ObjectiveRange, struct AActor* TargetActor);

	// Object: Function DFMQuest.SOLQuestActionLib.QA_SetOriginalPushOverDirection
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x13b648dc
	// Params: [ Num(2) Size(0x10) ]
	static void QA_SetOriginalPushOverDirection(struct AGPQuestActionContext* QAContext, struct FName VolumeTag);

	// Object: Function DFMQuest.SOLQuestActionLib.QA_SetLightData
	// Flags: [Final|Native|Static|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x13b6478c
	// Params: [ Num(4) Size(0x18) ]
	static void QA_SetLightData(struct AGPQuestActionContext* QAContext, struct FName Tag, uint8_t SwitchOn, struct FColor Color);

	// Object: Function DFMQuest.SOLQuestActionLib.QA_SetInteractorTransform
	// Flags: [Final|Native|Static|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x13b6464c
	// Params: [ Num(3) Size(0x40) ]
	static void QA_SetInteractorTransform(struct AGPQuestActionContext* QAContext, struct FName Tag, struct FTransform Transform);

	// Object: Function DFMQuest.SOLQuestActionLib.QA_SetInteractEnable
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x13b6453c
	// Params: [ Num(3) Size(0x11) ]
	static void QA_SetInteractEnable(struct AGPQuestActionContext* QAContext, struct FName Tag, uint8_t Enable);

	// Object: Function DFMQuest.SOLQuestActionLib.QA_SetEnableEscapePoint
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x13b643e8
	// Params: [ Num(4) Size(0x18) ]
	static void QA_SetEnableEscapePoint(struct AGPQuestActionContext* QAContext, struct FName Tag, uint8_t Enable, float OpenCountDown);

	// Object: Function DFMQuest.SOLQuestActionLib.QA_SetContractTimeOut
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x13b64318
	// Params: [ Num(2) Size(0xC) ]
	static void QA_SetContractTimeOut(struct AGPQuestActionContext* QAContext, float TimeLimit);

	// Object: Function DFMQuest.SOLQuestActionLib.QA_SetContractNpcCloseTime
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x13b64210
	// Params: [ Num(3) Size(0x10) ]
	static void QA_SetContractNpcCloseTime(struct AGPQuestActionContext* QAContext, int32_t ContractID, int32_t CloseTime);

	// Object: Function DFMQuest.SOLQuestActionLib.QA_SetContractBoss
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x13b64144
	// Params: [ Num(2) Size(0x10) ]
	static void QA_SetContractBoss(struct AGPQuestActionContext* QAContext, struct FName BossTag);

	// Object: Function DFMQuest.SOLQuestActionLib.QA_ResetQuestMapRange
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x13b640b0
	// Params: [ Num(1) Size(0x8) ]
	static void QA_ResetQuestMapRange(struct AGPQuestActionContext* QAContext);

	// Object: Function DFMQuest.SOLQuestActionLib.QA_ResetContractCamp
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x13b6401c
	// Params: [ Num(1) Size(0x8) ]
	static void QA_ResetContractCamp(struct AGPQuestActionContext* QAContext);

	// Object: Function DFMQuest.SOLQuestActionLib.QA_PreloadMedia
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x13b63f50
	// Params: [ Num(2) Size(0x10) ]
	static void QA_PreloadMedia(struct AGPQuestActionContext* QAContext, struct FName MediaName);

	// Object: Function DFMQuest.SOLQuestActionLib.QA_PlayRocketCutscene
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x13b63e48
	// Params: [ Num(3) Size(0x18) ]
	static void QA_PlayRocketCutscene(struct AGPQuestActionContext* QAContext, struct FName HackPCTag, struct FName CutSceneTag);

	// Object: Function DFMQuest.SOLQuestActionLib.QA_PlayerExitByFakePayment
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x13b63d40
	// Params: [ Num(3) Size(0x18) ]
	static void QA_PlayerExitByFakePayment(struct AGPQuestActionContext* QAContext, struct AGPCharacter* GPCharacter, struct FName ExitTag);

	// Object: Function DFMQuest.SOLQuestActionLib.QA_NtfInterruptInteract
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x13b63c74
	// Params: [ Num(2) Size(0x10) ]
	static void QA_NtfInterruptInteract(struct AGPQuestActionContext* QAContext, struct AInteractorBase* InteractorBase);

	// Object: Function DFMQuest.SOLQuestActionLib.QA_NtfDoorDestroyedForAILab
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x13b63be0
	// Params: [ Num(1) Size(0x8) ]
	static void QA_NtfDoorDestroyedForAILab(struct AGPQuestActionContext* QAContext);

	// Object: Function DFMQuest.SOLQuestActionLib.QA_NotifySpawnAIEvent
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x13b63b14
	// Params: [ Num(2) Size(0x10) ]
	static void QA_NotifySpawnAIEvent(struct AGPQuestActionContext* QAContext, struct FName NPCTag);

	// Object: Function DFMQuest.SOLQuestActionLib.QA_NotifyAIEventWithOneParam
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x13b63a0c
	// Params: [ Num(3) Size(0x18) ]
	static void QA_NotifyAIEventWithOneParam(struct AGPQuestActionContext* QAContext, struct FName EventName, struct AActor* Actor);

	// Object: Function DFMQuest.SOLQuestActionLib.QA_NotifyAIEvent
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x13b63940
	// Params: [ Num(2) Size(0x10) ]
	static void QA_NotifyAIEvent(struct AGPQuestActionContext* QAContext, struct FName EventName);

	// Object: Function DFMQuest.SOLQuestActionLib.QA_NewPlayer_SetQuestObjectionDesc
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x13b63710
	// Params: [ Num(4) Size(0x29) ]
	static void QA_NewPlayer_SetQuestObjectionDesc(struct AGPQuestActionContext* QAContext, struct AGPCharacter* GPCharacter, struct FText ObjectionDes, uint8_t IsBrief);

	// Object: Function DFMQuest.SOLQuestActionLib.QA_MultiCastPreLoadLevels
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x13b63608
	// Params: [ Num(2) Size(0x18) ]
	static void QA_MultiCastPreLoadLevels(struct AGPQuestActionContext* QAContext, struct TArray<struct FString> LevelNames);

	// Object: Function DFMQuest.SOLQuestActionLib.QA_MultiCastLoadLevels
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x13b63500
	// Params: [ Num(2) Size(0x18) ]
	static void QA_MultiCastLoadLevels(struct AGPQuestActionContext* QAContext, struct TArray<struct FString> LevelNames);

	// Object: Function DFMQuest.SOLQuestActionLib.QA_LoadDynamicRequestLevels
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x13b63434
	// Params: [ Num(2) Size(0x10) ]
	static void QA_LoadDynamicRequestLevels(struct AGPQuestActionContext* QAContext, struct FName DynamicRequestLevelGroupID);

	// Object: Function DFMQuest.SOLQuestActionLib.QA_LaunchMissile
	// Flags: [Final|Native|Static|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x13b632ec
	// Params: [ Num(4) Size(0x28) ]
	static void QA_LaunchMissile(struct AGPQuestActionContext* QAContext, struct FName Tag, struct FRotator BulletFireRot, struct FVector TargetLoc);

	// Object: Function DFMQuest.SOLQuestActionLib.QA_GetQuestType
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x13b63248
	// Params: [ Num(2) Size(0x9) ]
	static EQuestType QA_GetQuestType(struct AGPQuestActionContext* QAContext);

	// Object: Function DFMQuest.SOLQuestActionLib.QA_GetIsSeasonQuest_SOL
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x13b631a0
	// Params: [ Num(2) Size(0x9) ]
	static uint8_t QA_GetIsSeasonQuest_SOL(struct AGPQuestActionContext* QAContext);

	// Object: Function DFMQuest.SOLQuestActionLib.QA_GetIsQuest_SOL
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x13b630f8
	// Params: [ Num(2) Size(0x9) ]
	static uint8_t QA_GetIsQuest_SOL(struct AGPQuestActionContext* QAContext);

	// Object: Function DFMQuest.SOLQuestActionLib.QA_GetIsContractQuest_SOL
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x13b63050
	// Params: [ Num(2) Size(0x9) ]
	static uint8_t QA_GetIsContractQuest_SOL(struct AGPQuestActionContext* QAContext);

	// Object: Function DFMQuest.SOLQuestActionLib.QA_GetContractTeammates
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x13b62f78
	// Params: [ Num(2) Size(0x18) ]
	static struct TArray<struct ACHARACTER*> QA_GetContractTeammates(struct AGPQuestActionContext* QAContext);

	// Object: Function DFMQuest.SOLQuestActionLib.QA_GetContractOtherCharacters
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x13b62ea0
	// Params: [ Num(2) Size(0x18) ]
	static struct TArray<struct ACHARACTER*> QA_GetContractOtherCharacters(struct AGPQuestActionContext* QAContext);

	// Object: Function DFMQuest.SOLQuestActionLib.QA_GetAIAliveCount
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x13b62dc4
	// Params: [ Num(3) Size(0x14) ]
	static int32_t QA_GetAIAliveCount(struct AGPQuestActionContext* QAContext, struct FName AITag);

	// Object: Function DFMQuest.SOLQuestActionLib.QA_DoWaterUp
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x13b62d30
	// Params: [ Num(1) Size(0x8) ]
	static void QA_DoWaterUp(struct AGPQuestActionContext* QAContext);

	// Object: Function DFMQuest.SOLQuestActionLib.QA_CommitMissionResult
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x13b62c24
	// Params: [ Num(3) Size(0x18) ]
	static void QA_CommitMissionResult(struct AGPQuestActionContext* QAContext, EGPQuestEndReason GPQuestEndReason, struct AGPCharacter* LastOperatePlayer);

	// Object: Function DFMQuest.SOLQuestActionLib.QA_ClientShowExitIcon
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x13b62ad8
	// Params: [ Num(4) Size(0x19) ]
	static void QA_ClientShowExitIcon(struct AGPQuestActionContext* QAContext, struct AGPCharacter* CHARACTER, struct FName Tag, uint8_t bShow);

	// Object: Function DFMQuest.SOLQuestActionLib.QA_ClientCreateExitIcon
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x13b6298c
	// Params: [ Num(4) Size(0x19) ]
	static void QA_ClientCreateExitIcon(struct AGPQuestActionContext* QAContext, struct AGPCharacter* CHARACTER, struct FName Tag, uint8_t bShow);

	// Object: Function DFMQuest.SOLQuestActionLib.QA_ClearInteractCandidatorsByTeam
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x13b628c0
	// Params: [ Num(2) Size(0x10) ]
	static void QA_ClearInteractCandidatorsByTeam(struct AGPQuestActionContext* QAContext, struct FName Tag);

	// Object: Function DFMQuest.SOLQuestActionLib.QA_ClearInteractCandidators
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x13b627f4
	// Params: [ Num(2) Size(0x10) ]
	static void QA_ClearInteractCandidators(struct AGPQuestActionContext* QAContext, struct FName Tag);

	// Object: Function DFMQuest.SOLQuestActionLib.QA_ChangeContractCamp
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x13b62724
	// Params: [ Num(2) Size(0x9) ]
	static void QA_ChangeContractCamp(struct AGPQuestActionContext* QAContext, ECampType CampId);

	// Object: Function DFMQuest.SOLQuestActionLib.QA_BreakC4DoorInRange
	// Flags: [Final|Native|Static|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x13b625dc
	// Params: [ Num(4) Size(0x20) ]
	static void QA_BreakC4DoorInRange(struct AGPQuestActionContext* QAContext, struct AActor* ActorClass, struct FVector Center, float Range);

	// Object: Function DFMQuest.SOLQuestActionLib.QA_AutoMarkExit
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x13b624d4
	// Params: [ Num(3) Size(0x18) ]
	static void QA_AutoMarkExit(struct AGPQuestActionContext* QAContext, struct AGPCharacter* CHARACTER, struct FName Tag);

	// Object: Function DFMQuest.SOLQuestActionLib.QA_AddMarkerOnAllActors_SOL
	// Flags: [Final|Native|Static|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x13b6219c
	// Params: [ Num(12) Size(0x40) ]
	static void QA_AddMarkerOnAllActors_SOL(struct AGPQuestActionContext* QAContext, struct AGPQuestMarkerBase* MarkerClass, struct AActor* TargetActorClass, struct FName TargetTag, struct FVector OffsetLocation, float DistanceThreshold, float MarkerTimeLimit, uint8_t AlwaysTop, EGPQuestActionMarkerType MarkerType, EGPQuestActionScope Scope, uint8_t ShowInBigMap, struct FName SocketName);

	// Object: Function DFMQuest.SOLQuestActionLib.QA_AddMarker_SOL
	// Flags: [Final|Native|Static|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x13b61e54
	// Params: [ Num(13) Size(0x48) ]
	static struct AGPQuestMarkerBase* QA_AddMarker_SOL(struct AGPQuestActionContext* QAContext, struct AGPQuestMarkerBase* MarkerClass, struct AActor* TargetActorClass, struct FName QATag_TargetTag, struct FVector OffsetLocation, float DistanceThreshold, float MarkerTimeLimit, uint8_t AlwaysTop, EGPQuestActionMarkerType MarkerType, EGPQuestActionScope Scope, uint8_t ShowInBigMap, struct FName SocketName);

	// Object: Function DFMQuest.SOLQuestActionLib.QA_ActivateTeamAllDeadBodyMarker
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x13b61dc0
	// Params: [ Num(1) Size(0x8) ]
	static void QA_ActivateTeamAllDeadBodyMarker(struct AGPQuestActionContext* QAContext);

	// Object: Function DFMQuest.SOLQuestActionLib.QA_ActivateDeadBodyMarker
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x13b61cb8
	// Params: [ Num(3) Size(0x18) ]
	static void QA_ActivateDeadBodyMarker(struct AGPQuestActionContext* QAContext, struct ADFMCharacter* DFMCharacter, struct ASpawnJailBreakBody* JailBreakBody);
	DEFINE_UE_CLASS_HELPERS(USOLQuestActionLib, "SOLQuestActionLib")

};

// Object: Class DFMQuest.DFMQuestAISettings
// Size: 0x40 (Inherited: 0x28)
struct UDFMQuestAISettings : UObject
{
	struct FName BBKey_QuestCommand_QuestTargetLocation; // 0x28(0x8)
	struct FName BBKey_QuestCommand_WanderCenter; // 0x30(0x8)
	struct AGPQuestMarkerBase* QuestAIDefaultMarkerClass; // 0x38(0x8)
	DEFINE_UE_CLASS_HELPERS(UDFMQuestAISettings, "DFMQuestAISettings")

};

// Object: Class DFMQuest.DFMQuestAITeamChecker
// Size: 0x100 (Inherited: 0x28)
struct UDFMQuestAITeamChecker : UObject
{
	uint8_t Pad_0x28[0x30]; // 0x28(0x30)
	struct FName TeamName; // 0x58(0x8)
	uint8_t Pad_0x60[0xA0]; // 0x60(0xA0)


	// Object: Function DFMQuest.DFMQuestAITeamChecker.OnGroupSpawnEnd
	// Flags: [Final|Native|Protected]
	// Offset: 0x13b66b50
	// Params: [ Num(1) Size(0x8) ]
	void OnGroupSpawnEnd(struct AAIGroupSpawnerBase* Spawner);

	// Object: Function DFMQuest.DFMQuestAITeamChecker.OnActorDied
	// Flags: [Final|Native|Protected]
	// Offset: 0x13b66a38
	// Params: [ Num(3) Size(0x18) ]
	void OnActorDied(struct AGPCharacterBase* InCharacter, struct AController* Killer, struct UDamageType* DamageType);

	// Object: Function DFMQuest.DFMQuestAITeamChecker.MoveToLocation
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x13b66950
	// Params: [ Num(2) Size(0x9) ]
	void MoveToLocation(struct FName SpotTag, uint8_t bWander);

	// Object: Function DFMQuest.DFMQuestAITeamChecker.IsAllSpawnersEnd
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x13b66918
	// Params: [ Num(1) Size(0x1) ]
	uint8_t IsAllSpawnersEnd();

	// Object: Function DFMQuest.DFMQuestAITeamChecker.IsAllAIPawnsDied
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x13b668e0
	// Params: [ Num(1) Size(0x1) ]
	uint8_t IsAllAIPawnsDied();

	// Object: Function DFMQuest.DFMQuestAITeamChecker.GetTotalPawnsNum
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x13b668ac
	// Params: [ Num(1) Size(0x4) ]
	int32_t GetTotalPawnsNum();

	// Object: Function DFMQuest.DFMQuestAITeamChecker.GetLivingPawnsNum
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x13b66878
	// Params: [ Num(1) Size(0x4) ]
	int32_t GetLivingPawnsNum();

	// Object: Function DFMQuest.DFMQuestAITeamChecker.GetFirstAIPawn
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x13b66844
	// Params: [ Num(1) Size(0x8) ]
	struct APawn* GetFirstAIPawn();

	// Object: Function DFMQuest.DFMQuestAITeamChecker.GetAllAIPawns
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x13b667ac
	// Params: [ Num(1) Size(0x10) ]
	struct TArray<struct APawn*> GetAllAIPawns();

	// Object: Function DFMQuest.DFMQuestAITeamChecker.AddQuestMarker
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x13b66708
	// Params: [ Num(1) Size(0x8) ]
	void AddQuestMarker(struct AGPQuestMarkerBase* MarkerClass);
	DEFINE_UE_CLASS_HELPERS(UDFMQuestAITeamChecker, "DFMQuestAITeamChecker")

};

// Object: Class DFMQuest.DFMQuestAIManager
// Size: 0x3C0 (Inherited: 0x370)
struct ADFMQuestAIManager : ALevelSubsystem
{
	struct TMap<struct FName, struct UDFMQuestAITeamChecker*> TeamCheckers; // 0x370(0x50)


	// Object: Function DFMQuest.DFMQuestAIManager.QuestAIManager
	// Flags: [Final|Native|Static|Protected|BlueprintCallable|BlueprintPure]
	// Offset: 0x13b66cfc
	// Params: [ Num(2) Size(0x10) ]
	static struct ADFMQuestAIManager* QuestAIManager(struct UObject* WorldContextObject);

	// Object: Function DFMQuest.DFMQuestAIManager.GetQuestAITeamChecker
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x13b66c20
	// Params: [ Num(3) Size(0x18) ]
	static struct UDFMQuestAITeamChecker* GetQuestAITeamChecker(struct UObject* WorldContextObject, struct FName TeamName);
	DEFINE_UE_CLASS_HELPERS(ADFMQuestAIManager, "DFMQuestAIManager")

};

// Object: Class DFMQuest.DFMQuestAudioSubsystem
// Size: 0x3F8 (Inherited: 0x3E8)
struct ADFMQuestAudioSubsystem : AGPQuestAudioSubsystem
{
	uint8_t Pad_0x3E8[0x10]; // 0x3E8(0x10)


	// Object: Function DFMQuest.DFMQuestAudioSubsystem.Get
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x13b66da8
	// Params: [ Num(2) Size(0x10) ]
	static struct ADFMQuestAudioSubsystem* Get(struct UObject* WorldContextObject);
	DEFINE_UE_CLASS_HELPERS(ADFMQuestAudioSubsystem, "DFMQuestAudioSubsystem")

};

// Object: Class DFMQuest.DFMQuestGamingArea
// Size: 0x3B0 (Inherited: 0x370)
struct ADFMQuestGamingArea : AActor
{
	uint8_t Pad_0x370[0x18]; // 0x370(0x18)
	int32_t PunishCountdownSeconds; // 0x388(0x4)
	uint8_t OutGamingAreaWouldSuicide : 1; // 0x38C(0x1), Mask(0x1)
	uint8_t BitPad_0x38C_1 : 7; // 0x38C(0x1)
	uint8_t bAutoFollowQuestActivate : 1; // 0x38D(0x1), Mask(0x1)
	uint8_t BitPad_0x38D_1 : 7; // 0x38D(0x1)
	uint8_t Pad_0x38E[0x2]; // 0x38E(0x2)
	struct TArray<struct FGamingAreaQuestSetting> ActivationQuestSettings; // 0x390(0x10)
	struct FMulticastInlineDelegate OnGamingAreaActivateChange; // 0x3A0(0x10)


	// Object: Function DFMQuest.DFMQuestGamingArea.OnQuestStageEnd
	// Flags: [Final|Native|Private]
	// Offset: 0x13b6b3c0
	// Params: [ Num(1) Size(0x8) ]
	void OnQuestStageEnd(struct AGPQuestStage* QuestStage);

	// Object: Function DFMQuest.DFMQuestGamingArea.OnQuestStageBegin
	// Flags: [Final|Native|Private]
	// Offset: 0x13b6b31c
	// Params: [ Num(1) Size(0x8) ]
	void OnQuestStageBegin(struct AGPQuestStage* QuestStage);

	// Object: Function DFMQuest.DFMQuestGamingArea.OnQuestObjectiveEnd
	// Flags: [Final|Native|Private]
	// Offset: 0x13b6b278
	// Params: [ Num(1) Size(0x4) ]
	void OnQuestObjectiveEnd(int32_t QuestObjectiveID);

	// Object: Function DFMQuest.DFMQuestGamingArea.OnQuestObjectiveBegin
	// Flags: [Final|Native|Private]
	// Offset: 0x13b6b1d4
	// Params: [ Num(1) Size(0x4) ]
	void OnQuestObjectiveBegin(int32_t QuestObjectiveID);

	// Object: Function DFMQuest.DFMQuestGamingArea.OnQuestEnd
	// Flags: [Final|Native|Private]
	// Offset: 0x13b6b130
	// Params: [ Num(1) Size(0x8) ]
	void OnQuestEnd(struct AGPQuest* Quest);

	// Object: Function DFMQuest.DFMQuestGamingArea.OnQuestBegin
	// Flags: [Final|Native|Private]
	// Offset: 0x13b6b08c
	// Params: [ Num(1) Size(0x8) ]
	void OnQuestBegin(struct AGPQuest* Quest);

	// Object: Function DFMQuest.DFMQuestGamingArea.GetPlayersOutsideSpline2D
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x13b6afac
	// Params: [ Num(2) Size(0x18) ]
	struct TArray<struct FGamingAreaPlayerInfo> GetPlayersOutsideSpline2D(struct USplineComponent* SplineComp);

	// Object: Function DFMQuest.DFMQuestGamingArea.CheckWorldLocationInsideSpline2D
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable]
	// Offset: 0x13b6aeb4
	// Params: [ Num(3) Size(0x15) ]
	uint8_t CheckWorldLocationInsideSpline2D(struct USplineComponent* SplineComp, const struct FVector& WorldLocation);
	DEFINE_UE_CLASS_HELPERS(ADFMQuestGamingArea, "DFMQuestGamingArea")

};

// Object: Class DFMQuest.DFMQuestGamingAreaPlayerComponent
// Size: 0x128 (Inherited: 0xF8)
struct UDFMQuestGamingAreaPlayerComponent : UActorComponent
{
	int64_t CountdownEndTicks; // 0xF8(0x8)
	uint8_t bIsOutGamingArea : 1; // 0x100(0x1), Mask(0x1)
	uint8_t BitPad_0x100_1 : 7; // 0x100(0x1)
	uint8_t Pad_0x101[0x3]; // 0x101(0x3)
	struct FName OutGamingAreaWarningHUDName; // 0x104(0x8)
	uint8_t OutGamingAreaWouldSuicide : 1; // 0x10C(0x1), Mask(0x1)
	uint8_t BitPad_0x10C_1 : 7; // 0x10C(0x1)
	uint8_t Pad_0x10D[0xB]; // 0x10D(0xB)
	struct FMulticastInlineDelegate PlayerLeaveGameingAreaSignature; // 0x118(0x10)


	// Object: Function DFMQuest.DFMQuestGamingAreaPlayerComponent.StartCountDown
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x13b6b500
	// Params: [ Num(2) Size(0x5) ]
	void StartCountDown(int32_t CountDownSeconds, uint8_t bOutGamingAreaWouldSuicide);

	// Object: Function DFMQuest.DFMQuestGamingAreaPlayerComponent.ResetCountdown
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x13b6b4ec
	// Params: [ Num(0) Size(0x0) ]
	void ResetCountdown();

	// Object: Function DFMQuest.DFMQuestGamingAreaPlayerComponent.OnRep_OutGamingArea
	// Flags: [Final|Native|Private]
	// Offset: 0x13b6b4d8
	// Params: [ Num(0) Size(0x0) ]
	void OnRep_OutGamingArea();

	// Object: Function DFMQuest.DFMQuestGamingAreaPlayerComponent.GetRemainingSeconds
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x13b6b4a4
	// Params: [ Num(1) Size(0x4) ]
	int32_t GetRemainingSeconds();

	// Object: Function DFMQuest.DFMQuestGamingAreaPlayerComponent.CountdownEnd
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x13b6b490
	// Params: [ Num(0) Size(0x0) ]
	void CountdownEnd();
	DEFINE_UE_CLASS_HELPERS(UDFMQuestGamingAreaPlayerComponent, "DFMQuestGamingAreaPlayerComponent")

};

// Object: Class DFMQuest.DFMQuestGetItemListener
// Size: 0xC0 (Inherited: 0x38)
struct UDFMQuestGetItemListener : UGPQuestActionAsyncReturnActionBase
{
	uint8_t Pad_0x38[0x18]; // 0x38(0x18)
	struct FMulticastInlineDelegate OnQuestGetItemDelegate; // 0x50(0x10)
	uint8_t Pad_0x60[0x60]; // 0x60(0x60)


	// Object: Function DFMQuest.DFMQuestGetItemListener.QA_GetItemListener
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x13b6d1b0
	// Params: [ Num(5) Size(0x20) ]
	static struct UDFMQuestGetItemListener* QA_GetItemListener(struct AGPQuestActionContext* QAContext, int64_t ListenedItemId, int32_t ItemNum, uint8_t bOnce);
	DEFINE_UE_CLASS_HELPERS(UDFMQuestGetItemListener, "DFMQuestGetItemListener")

};

// Object: Class DFMQuest.DFMQuestHUDSubsystem
// Size: 0x450 (Inherited: 0x430)
struct ADFMQuestHUDSubsystem : AGPQuestHUDSubsystem
{
	uint8_t Pad_0x430[0x10]; // 0x430(0x10)
	struct FMulticastInlineDelegate OnUpdateOptionalObjectiveEvent; // 0x440(0x10)


	// Object: Function DFMQuest.DFMQuestHUDSubsystem.GetQuestHUDSubsystem
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x13b6d3c0
	// Params: [ Num(2) Size(0x10) ]
	static struct ADFMQuestHUDSubsystem* GetQuestHUDSubsystem(struct UObject* WorldContextObject);

	// Object: Function DFMQuest.DFMQuestHUDSubsystem.Get
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x13b6d31c
	// Params: [ Num(2) Size(0x10) ]
	static struct ADFMQuestHUDSubsystem* Get(struct UObject* WorldContextObject);
	DEFINE_UE_CLASS_HELPERS(ADFMQuestHUDSubsystem, "DFMQuestHUDSubsystem")

};

// Object: Class DFMQuest.DFMQuestMarker
// Size: 0x420 (Inherited: 0x420)
struct ADFMQuestMarker : AGPQuestMarkerBase
{

	// Object: Function DFMQuest.DFMQuestMarker.OnLoadedAllControllerClass
	// Flags: [Final|Native|Public]
	// Offset: 0x13b6d520
	// Params: [ Num(0) Size(0x0) ]
	void OnLoadedAllControllerClass();
	DEFINE_UE_CLASS_HELPERS(ADFMQuestMarker, "DFMQuestMarker")

};

// Object: Class DFMQuest.DFMQuestPlayersChaseTargetComponent
// Size: 0x158 (Inherited: 0xF8)
struct UDFMQuestPlayersChaseTargetComponent : UActorComponent
{
	EPlayerPosition CurrentPosition; // 0xF8(0x1)
	uint8_t Pad_0xF9[0xF]; // 0xF9(0xF)
	struct FName WarningHudName; // 0x108(0x8)
	struct FName FailHudName; // 0x110(0x8)
	struct FMulticastInlineDelegate OnPlayerInTargetZone; // 0x118(0x10)
	struct FMulticastInlineDelegate OnPlayerInSafeZone; // 0x128(0x10)
	struct FMulticastInlineDelegate OnPlayerInWarningZone; // 0x138(0x10)
	struct FMulticastInlineDelegate OnPlayerInFailZone; // 0x148(0x10)


	// Object: Function DFMQuest.DFMQuestPlayersChaseTargetComponent.OnRep_CurrentPosition
	// Flags: [Final|Native|Private]
	// Offset: 0x13b6d670
	// Params: [ Num(0) Size(0x0) ]
	void OnRep_CurrentPosition();
	DEFINE_UE_CLASS_HELPERS(UDFMQuestPlayersChaseTargetComponent, "DFMQuestPlayersChaseTargetComponent")

};

// Object: Class DFMQuest.DFMQuestSubtitleSubsystem
// Size: 0x390 (Inherited: 0x370)
struct ADFMQuestSubtitleSubsystem : ADFMSubtitleSubSystem
{
	struct TArray<struct FNoticeInfos> AllNoticeArray; // 0x370(0x10)
	struct FTimerHandle PopNoticeTimerHandle; // 0x380(0x8)
	uint8_t Pad_0x388[0x8]; // 0x388(0x8)


	// Object: Function DFMQuest.DFMQuestSubtitleSubsystem.RemoveSubtitle
	// Flags: [Final|Native|Protected|HasOutParms]
	// Offset: 0x13b6da7c
	// Params: [ Num(1) Size(0x1) ]
	void RemoveSubtitle(const ESubtitleType& SubtitleType);

	// Object: Function DFMQuest.DFMQuestSubtitleSubsystem.OnSequenceEndSubtitle
	// Flags: [Final|Native|Protected]
	// Offset: 0x13b6d9d8
	// Params: [ Num(1) Size(0x4) ]
	void OnSequenceEndSubtitle(int32_t Priority);

	// Object: Function DFMQuest.DFMQuestSubtitleSubsystem.OnSequenceBeginSubtitle
	// Flags: [Final|Native|Protected|HasOutParms]
	// Offset: 0x13b6d83c
	// Params: [ Num(3) Size(0x20) ]
	void OnSequenceBeginSubtitle(const struct FText& SubtitleContent, uint8_t bNoticeAudio, int32_t Priority);

	// Object: Function DFMQuest.DFMQuestSubtitleSubsystem.AddSubtitle
	// Flags: [Final|Native|Protected|HasOutParms]
	// Offset: 0x13b6d68c
	// Params: [ Num(1) Size(0x80) ]
	void AddSubtitle(const struct FGPQuestObjectiveNoticeInfo& NoticeInfo);
	DEFINE_UE_CLASS_HELPERS(ADFMQuestSubtitleSubsystem, "DFMQuestSubtitleSubsystem")

};

// Object: Class DFMQuest.DFMQuestSystem
// Size: 0x1D8 (Inherited: 0xF0)
struct UDFMQuestSystem : UGPQuestSystem
{
	struct UQASimpleQuestProxy* QASimpleQuestProxyClass; // 0xF0(0x8)
	struct UQASimpleActionProxy* QASimpleActionProxyClass; // 0xF8(0x8)
	uint8_t Pad_0x100[0xD8]; // 0x100(0xD8)


	// Object: Function DFMQuest.DFMQuestSystem.SpawnQuestHUDChannel
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x13b6e3d8
	// Params: [ Num(1) Size(0x8) ]
	void SpawnQuestHUDChannel(struct UObject* WorldContextObject);

	// Object: Function DFMQuest.DFMQuestSystem.SpawnQuestAudioChannel
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x13b6e2fc
	// Params: [ Num(2) Size(0x10) ]
	void SpawnQuestAudioChannel(struct UObject* WorldContextObject, struct ADFMQuestAudioSubsystem* AudioSysClass);

	// Object: Function DFMQuest.DFMQuestSystem.PlayAudioOfText
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x13b6e1d4
	// Params: [ Num(2) Size(0x30) ]
	struct FGPAudioFuturePlayingID PlayAudioOfText(const struct FGPQuestText& Text);

	// Object: Function DFMQuest.DFMQuestSystem.LoadQuestEx
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x13b6df88
	// Params: [ Num(6) Size(0x39) ]
	uint8_t LoadQuestEx(struct UObject* WorldContextObject, struct FString QuestFolder, struct FString QuestName, int32_t QuestID, struct AGPQuestVolume* GPQuestVolume);

	// Object: Function DFMQuest.DFMQuestSystem.LoadQuestAudioTable
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x13b6dee4
	// Params: [ Num(1) Size(0x4) ]
	void LoadQuestAudioTable(int32_t QuestID);

	// Object: Function DFMQuest.DFMQuestSystem.IsValidQuest
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x13b6dcd4
	// Params: [ Num(5) Size(0x2D) ]
	uint8_t IsValidQuest(struct UObject* WorldContextObject, struct FString QuestFolder, struct FString QuestName, int32_t QuestID);

	// Object: Function DFMQuest.DFMQuestSystem.GetCurrentStageObjectivesCount
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x13b6dca0
	// Params: [ Num(1) Size(0x4) ]
	int32_t GetCurrentStageObjectivesCount();

	// Object: Function DFMQuest.DFMQuestSystem.GetCurrentQuestStagesCount
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x13b6dc6c
	// Params: [ Num(1) Size(0x4) ]
	int32_t GetCurrentQuestStagesCount();

	// Object: Function DFMQuest.DFMQuestSystem.GetAudioOfText
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x13b6db44
	// Params: [ Num(2) Size(0x30) ]
	struct UGPAudioEventAsset* GetAudioOfText(const struct FGPQuestText& Text);
	DEFINE_UE_CLASS_HELPERS(UDFMQuestSystem, "DFMQuestSystem")

};

// Object: Class DFMQuest.DFMQuestTimerActor
// Size: 0x378 (Inherited: 0x370)
struct ADFMQuestTimerActor : AActor
{
	uint8_t Pad_0x370[0x8]; // 0x370(0x8)
	DEFINE_UE_CLASS_HELPERS(ADFMQuestTimerActor, "DFMQuestTimerActor")

};

// Object: Class DFMQuest.DFMQuestUtils
// Size: 0x28 (Inherited: 0x28)
struct UDFMQuestUtils : UBlueprintFunctionLibrary
{

	// Object: Function DFMQuest.DFMQuestUtils.GetCurrentQuest
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x13b6e5f0
	// Params: [ Num(2) Size(0x10) ]
	static struct AGPQuest* GetCurrentQuest(struct UObject* WorldContextObject);

	// Object: Function DFMQuest.DFMQuestUtils.GetCurrentQStage
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x13b6e54c
	// Params: [ Num(2) Size(0x10) ]
	static struct AGPQuestStage* GetCurrentQStage(struct UObject* WorldContextObject);

	// Object: Function DFMQuest.DFMQuestUtils.GetCurrentQObjectiveId
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x13b6e4a8
	// Params: [ Num(2) Size(0xC) ]
	static int32_t GetCurrentQObjectiveId(struct UObject* WorldContextObject);
	DEFINE_UE_CLASS_HELPERS(UDFMQuestUtils, "DFMQuestUtils")

};

// Object: Class DFMQuest.DFMQuestVolume
// Size: 0x448 (Inherited: 0x420)
struct ADFMQuestVolume : AGPQuestVolume
{
	struct TArray<struct FSOLQAObjectiveData> ObjectiveDataArray; // 0x420(0x10)
	uint8_t Pad_0x430[0x18]; // 0x430(0x18)


	// Object: Function DFMQuest.DFMQuestVolume.OnLocalFocusChange
	// Flags: [Final|Native|Protected]
	// Offset: 0xfb3bcbc
	// Params: [ Num(2) Size(0x10) ]
	void OnLocalFocusChange(struct AActor* OldTarget, struct AActor* NewTarget);

	// Object: Function DFMQuest.DFMQuestVolume.CheckShouldCharacterDoEnterVolume
	// Flags: [Final|Native|Protected]
	// Offset: 0x1019d7e0
	// Params: [ Num(1) Size(0x8) ]
	void CheckShouldCharacterDoEnterVolume(struct AGPCharacter* GPCharacter);
	DEFINE_UE_CLASS_HELPERS(ADFMQuestVolume, "DFMQuestVolume")

};

// Object: Class DFMQuest.DisplayHUDVolume
// Size: 0x3D8 (Inherited: 0x378)
struct ADisplayHUDVolume : ATriggerSphere
{
	struct TArray<EGameHUDSate> AddGlobalHUDStates_OnEnter; // 0x378(0x10)
	struct TArray<EGameHUDSate> RemoveGlobalHUDStates_OnLeave; // 0x388(0x10)
	struct TArray<struct FName> DisplayHUDNames; // 0x398(0x10)
	struct TArray<struct FName> HideHUDNamesOnLeave; // 0x3A8(0x10)
	struct TArray<struct FString> DisplayLuaHUDNames; // 0x3B8(0x10)
	struct TArray<EGameHUDSate> RemoveSpecialHUDStates; // 0x3C8(0x10)


	// Object: Function DFMQuest.DisplayHUDVolume.OnVolumeEndOverlap
	// Flags: [Final|Native|Public]
	// Offset: 0x13b6e7ec
	// Params: [ Num(2) Size(0x10) ]
	void OnVolumeEndOverlap(struct AActor* OverlappedActor, struct AActor* OtherActor);

	// Object: Function DFMQuest.DisplayHUDVolume.OnVolumeBeginOverlap
	// Flags: [Final|Native|Public]
	// Offset: 0x13b6e710
	// Params: [ Num(2) Size(0x10) ]
	void OnVolumeBeginOverlap(struct AActor* OverlappedActor, struct AActor* OtherActor);
	DEFINE_UE_CLASS_HELPERS(ADisplayHUDVolume, "DisplayHUDVolume")

};

// Object: Class DFMQuest.MovementRestrictionVolume
// Size: 0x390 (Inherited: 0x378)
struct AMovementRestrictionVolume : ATriggerBox
{
	ERVLeaveBehaviour LeaveBehaviour; // 0x378(0x1)
	uint8_t Pad_0x379[0x7]; // 0x379(0x7)
	struct UGPCharacterMovementLimitDataAsset* RestrictionData_OnEnter; // 0x380(0x8)
	struct UGPCharacterMovementLimitDataAsset* RestrictionData_OnLeave; // 0x388(0x8)


	// Object: Function DFMQuest.MovementRestrictionVolume.OnVolumeEndOverlap
	// Flags: [Final|Native|Public]
	// Offset: 0x13b6e9ac
	// Params: [ Num(2) Size(0x10) ]
	void OnVolumeEndOverlap(struct AActor* OverlappedActor, struct AActor* OtherActor);

	// Object: Function DFMQuest.MovementRestrictionVolume.OnVolumeBeginOverlap
	// Flags: [Final|Native|Public]
	// Offset: 0x13b6e8d0
	// Params: [ Num(2) Size(0x10) ]
	void OnVolumeBeginOverlap(struct AActor* OverlappedActor, struct AActor* OtherActor);
	DEFINE_UE_CLASS_HELPERS(AMovementRestrictionVolume, "MovementRestrictionVolume")

};

// Object: Class DFMQuest.EggQuest
// Size: 0x4F0 (Inherited: 0x4C8)
struct AEggQuest : AGPQuest
{
	uint8_t Pad_0x4C8[0x10]; // 0x4C8(0x10)
	struct ADFMCharacter* CurrentCharacter; // 0x4D8(0x8)
	int32_t InstanceIndex; // 0x4E0(0x4)
	uint8_t Pad_0x4E4[0x4]; // 0x4E4(0x4)
	struct AEggQuestClientProxy* EggProxy; // 0x4E8(0x8)


	// Object: Function DFMQuest.EggQuest.TagAllocator
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x13b6ed18
	// Params: [ Num(2) Size(0x18) ]
	struct FName TagAllocator(struct TArray<struct FName> InTags);

	// Object: Function DFMQuest.EggQuest.ResetQuestCount
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x13b6ed04
	// Params: [ Num(0) Size(0x0) ]
	static void ResetQuestCount();

	// Object: Function DFMQuest.EggQuest.ResetQuest
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x13b6ecf0
	// Params: [ Num(0) Size(0x0) ]
	void ResetQuest();

	// Object: Function DFMQuest.EggQuest.OnServerGameEnd
	// Flags: [Final|Native|Public]
	// Offset: 0x13b6ec10
	// Params: [ Num(2) Size(0x10) ]
	void OnServerGameEnd(EMatchOverReason MatchOverReason, int64_t PlayerUin);

	// Object: Function DFMQuest.EggQuest.OnCurrentCharacterDied
	// Flags: [Final|Native|Public]
	// Offset: 0x13b6eb34
	// Params: [ Num(2) Size(0x10) ]
	void OnCurrentCharacterDied(struct ACHARACTER* deadCharacter, struct AActor* KillerActor);

	// Object: Function DFMQuest.EggQuest.InitEggQuestInfo
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x13b6ea90
	// Params: [ Num(1) Size(0x8) ]
	void InitEggQuestInfo(struct ADFMCharacter* ToggleCharacter);

	// Object: Function DFMQuest.EggQuest.BP_ResetQuest
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(0) Size(0x0) ]
	void BP_ResetQuest();
	DEFINE_UE_CLASS_HELPERS(AEggQuest, "EggQuest")

};

// Object: Class DFMQuest.EggQuestClientProxy
// Size: 0x5C8 (Inherited: 0x518)
struct AEggQuestClientProxy : ADFMQuestClientProxy
{
	uint8_t Pad_0x518[0x8]; // 0x518(0x8)
	struct TArray<struct FName> LockedHUDNames; // 0x520(0x10)
	struct TArray<struct FString> LockedLuaHUDNames; // 0x530(0x10)
	struct TArray<EInputActionType> DisabledInputActions; // 0x540(0x10)
	uint8_t Pad_0x550[0x30]; // 0x550(0x30)
	struct TArray<struct FString> RelevantLevels_Mobile; // 0x580(0x10)
	struct TArray<struct FString> RelevantLevels_HD; // 0x590(0x10)
	struct TArray<struct FString> RelevantLevels_MP_Mobile; // 0x5A0(0x10)
	struct TArray<struct FString> RelevantLevels_MP_HD; // 0x5B0(0x10)
	uint8_t Pad_0x5C0[0x8]; // 0x5C0(0x8)


	// Object: Function DFMQuest.EggQuestClientProxy.UnlockLuaHUDPanels
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x13b6f4b8
	// Params: [ Num(1) Size(0x10) ]
	void UnlockLuaHUDPanels(struct TArray<struct FString>& PanelNames);

	// Object: Function DFMQuest.EggQuestClientProxy.UnlockHUDPanels
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x13b6f3fc
	// Params: [ Num(1) Size(0x10) ]
	void UnlockHUDPanels(struct TArray<struct FName>& PanelNames);

	// Object: Function DFMQuest.EggQuestClientProxy.UnLoadRelevantLevels
	// Flags: [Final|Native|Public|HasOutParms]
	// Offset: 0x13b6f340
	// Params: [ Num(1) Size(0x10) ]
	void UnLoadRelevantLevels(const struct TArray<struct FString>& UnloadLevels);

	// Object: Function DFMQuest.EggQuestClientProxy.OnRep_LockedLuaHUDNames
	// Flags: [Final|Native|Protected]
	// Offset: 0x13b6f32c
	// Params: [ Num(0) Size(0x0) ]
	void OnRep_LockedLuaHUDNames();

	// Object: Function DFMQuest.EggQuestClientProxy.OnRep_LockedHUDNames
	// Flags: [Final|Native|Protected]
	// Offset: 0x13b6f318
	// Params: [ Num(0) Size(0x0) ]
	void OnRep_LockedHUDNames();

	// Object: Function DFMQuest.EggQuestClientProxy.OnRep_DisabledInputActions
	// Flags: [Final|Native|Protected]
	// Offset: 0x13b6f304
	// Params: [ Num(0) Size(0x0) ]
	void OnRep_DisabledInputActions();

	// Object: Function DFMQuest.EggQuestClientProxy.OnGameFlowEnter
	// Flags: [Final|Native|Public]
	// Offset: 0x13b6f260
	// Params: [ Num(1) Size(0x1) ]
	void OnGameFlowEnter(EGameFlowStageType GameFlowStage);

	// Object: Function DFMQuest.EggQuestClientProxy.LockLuaHUDPanels
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x13b6f1a4
	// Params: [ Num(1) Size(0x10) ]
	void LockLuaHUDPanels(struct TArray<struct FString>& PanelNames);

	// Object: Function DFMQuest.EggQuestClientProxy.LockHUDPanels
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x13b6f0e8
	// Params: [ Num(1) Size(0x10) ]
	void LockHUDPanels(struct TArray<struct FName>& PanelNames);

	// Object: Function DFMQuest.EggQuestClientProxy.LoadRelevantLevels
	// Flags: [Final|Native|Public|HasOutParms]
	// Offset: 0x13b6f02c
	// Params: [ Num(1) Size(0x10) ]
	void LoadRelevantLevels(const struct TArray<struct FString>& LoadLevels);

	// Object: Function DFMQuest.EggQuestClientProxy.DisableInputAction
	// Flags: [Final|Native|Public]
	// Offset: 0x13b6ef44
	// Params: [ Num(2) Size(0x3) ]
	void DisableInputAction(EInputActionType ActionType, uint8_t bDisable);

	// Object: Function DFMQuest.EggQuestClientProxy.ClientEnterOrLeaveEggLevel
	// Flags: [Net|NetReliableNative|Event|NetMulticast|Public|NetClient]
	// Offset: 0x13b6ee90
	// Params: [ Num(1) Size(0x1) ]
	void ClientEnterOrLeaveEggLevel(uint8_t bEnter);
	DEFINE_UE_CLASS_HELPERS(AEggQuestClientProxy, "EggQuestClientProxy")

};

// Object: Class DFMQuest.ForestEggEntrance
// Size: 0x478 (Inherited: 0x370)
struct AForestEggEntrance : AActor
{
	struct TArray<struct TSoftObjectPtr<AInteractor_Submission>> ListeningSubmission; // 0x370(0x10)
	int32_t QuestID; // 0x380(0x4)
	uint8_t Pad_0x384[0x4]; // 0x384(0x4)
	struct TSoftObjectPtr<AInteractor_EggEntranceDoor> EntranceDoor; // 0x388(0x28)
	float TimeoutSecond; // 0x3B0(0x4)
	float EntranceResetSecond; // 0x3B4(0x4)
	int32_t LockTeamId; // 0x3B8(0x4)
	uint8_t Pad_0x3BC[0x4]; // 0x3BC(0x4)
	struct TArray<struct FString> PreloadLevels_Mobile_Client; // 0x3C0(0x10)
	struct TArray<struct FString> PreloadLevels_Mobile_DS; // 0x3D0(0x10)
	struct TArray<struct FString> PreloadLevels_HD_Client; // 0x3E0(0x10)
	struct TArray<struct FString> PreloadLevels_HD_DS; // 0x3F0(0x10)
	struct TArray<struct TSoftObjectPtr<AGPQuest>> RunningQuests; // 0x400(0x10)
	float QALevelLoadTimeOut; // 0x410(0x4)
	uint8_t Pad_0x414[0x14]; // 0x414(0x14)
	float LevelCompletePercentage; // 0x428(0x4)
	float LevelLoadTimeOut; // 0x42C(0x4)
	uint8_t bSubmitFinished : 1; // 0x430(0x1), Mask(0x1)
	uint8_t BitPad_0x430_1 : 7; // 0x430(0x1)
	uint8_t Pad_0x431[0x2F]; // 0x431(0x2F)
	struct USceneComponent* SceneComponent; // 0x460(0x8)
	struct UShapeComponent* CollisionComp; // 0x468(0x8)
	uint8_t bClientHasLoadedReleventLevels : 1; // 0x470(0x1), Mask(0x1)
	uint8_t BitPad_0x470_1 : 7; // 0x470(0x1)
	uint8_t Pad_0x471[0x7]; // 0x471(0x7)


	// Object: Function DFMQuest.ForestEggEntrance.ResetEggEntrance
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x13b6fcf8
	// Params: [ Num(0) Size(0x0) ]
	void ResetEggEntrance();

	// Object: Function DFMQuest.ForestEggEntrance.RelevantLevelsLoaded
	// Flags: [Final|Native|Protected]
	// Offset: 0x13b6fce4
	// Params: [ Num(0) Size(0x0) ]
	void RelevantLevelsLoaded();

	// Object: Function DFMQuest.ForestEggEntrance.OnSubmissionTimeOut
	// Flags: [Final|Native|Public]
	// Offset: 0x13b6fcd0
	// Params: [ Num(0) Size(0x0) ]
	void OnSubmissionTimeOut();

	// Object: Function DFMQuest.ForestEggEntrance.OnStreamingLoadingPercentage
	// Flags: [Final|Native|Protected]
	// Offset: 0x13b6fc2c
	// Params: [ Num(1) Size(0x4) ]
	void OnStreamingLoadingPercentage(int32_t Percentage);

	// Object: Function DFMQuest.ForestEggEntrance.OnResetEntranceTimeOut
	// Flags: [Final|Native|Public]
	// Offset: 0x13b6fc18
	// Params: [ Num(0) Size(0x0) ]
	void OnResetEntranceTimeOut();

	// Object: Function DFMQuest.ForestEggEntrance.OnRep_TeamId
	// Flags: [Final|Native|Protected]
	// Offset: 0x13b6fc04
	// Params: [ Num(0) Size(0x0) ]
	void OnRep_TeamId();

	// Object: Function DFMQuest.ForestEggEntrance.OnRep_SubmitFinished
	// Flags: [Final|Native|Protected]
	// Offset: 0x13b6fbf0
	// Params: [ Num(0) Size(0x0) ]
	void OnRep_SubmitFinished();

	// Object: Function DFMQuest.ForestEggEntrance.OnRelevantLevelsLoadTimeOut
	// Flags: [Final|Native|Protected]
	// Offset: 0x13b6fbdc
	// Params: [ Num(0) Size(0x0) ]
	void OnRelevantLevelsLoadTimeOut();

	// Object: Function DFMQuest.ForestEggEntrance.OnPreloadOverlapEnd
	// Flags: [Native|Protected]
	// Offset: 0x13b6fa80
	// Params: [ Num(4) Size(0x1C) ]
	void OnPreloadOverlapEnd(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex);

	// Object: Function DFMQuest.ForestEggEntrance.OnPreloadOverlapBegin
	// Flags: [Native|Protected|HasOutParms]
	// Offset: 0x13b6f880
	// Params: [ Num(6) Size(0xA8) ]
	void OnPreloadOverlapBegin(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, uint8_t bFromSweep, const struct FHitResult& SweepResult);

	// Object: Function DFMQuest.ForestEggEntrance.OnOneSubmissionComplete
	// Flags: [Final|Native|Public]
	// Offset: 0x13b6f7a4
	// Params: [ Num(2) Size(0x10) ]
	void OnOneSubmissionComplete(struct ACHARACTER* OperatePlayer, struct AInteractor_Submission* SubmissionInteractor);

	// Object: Function DFMQuest.ForestEggEntrance.OnOneQuestComplete
	// Flags: [Final|Native|Public]
	// Offset: 0x13b6f700
	// Params: [ Num(1) Size(0x8) ]
	void OnOneQuestComplete(struct AGPQuest* InQuest);

	// Object: Function DFMQuest.ForestEggEntrance.OnOneCharacterEntered
	// Flags: [Final|Native|Public]
	// Offset: 0x13b6f65c
	// Params: [ Num(1) Size(0x8) ]
	void OnOneCharacterEntered(struct ACHARACTER* InCharacter);

	// Object: Function DFMQuest.ForestEggEntrance.OnAllSubmissionComplete
	// Flags: [Final|Native|Public]
	// Offset: 0x13b6f648
	// Params: [ Num(0) Size(0x0) ]
	void OnAllSubmissionComplete();

	// Object: Function DFMQuest.ForestEggEntrance.LoadRelevantLevels
	// Flags: [Final|Native|Protected|BlueprintCallable]
	// Offset: 0x13b6f634
	// Params: [ Num(0) Size(0x0) ]
	void LoadRelevantLevels();

	// Object: Function DFMQuest.ForestEggEntrance.LaunchEggQuests
	// Flags: [Final|Native|Public]
	// Offset: 0x13b6f620
	// Params: [ Num(0) Size(0x0) ]
	void LaunchEggQuests();

	// Object: Function DFMQuest.ForestEggEntrance.ClientBroadcastAllSubmissionComplete
	// Flags: [Net|NetReliableNative|Event|NetMulticast|Public|NetClient]
	// Offset: 0x13b6f604
	// Params: [ Num(0) Size(0x0) ]
	void ClientBroadcastAllSubmissionComplete();

	// Object: Function DFMQuest.ForestEggEntrance.CheckHaveRunningQuest
	// Flags: [Final|Native|Public]
	// Offset: 0x13b6f5cc
	// Params: [ Num(1) Size(0x1) ]
	uint8_t CheckHaveRunningQuest();

	// Object: Function DFMQuest.ForestEggEntrance.CheckAllSubmissionHasCompleted
	// Flags: [Final|Native|Public]
	// Offset: 0x13b6f594
	// Params: [ Num(1) Size(0x1) ]
	uint8_t CheckAllSubmissionHasCompleted();

	// Object: Function DFMQuest.ForestEggEntrance.BP_OnClientAllSubmissionComplete
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(0) Size(0x0) ]
	void BP_OnClientAllSubmissionComplete();

	// Object: Function DFMQuest.ForestEggEntrance.BP_OnAllSubmissionComplete
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(0) Size(0x0) ]
	void BP_OnAllSubmissionComplete();
	DEFINE_UE_CLASS_HELPERS(AForestEggEntrance, "ForestEggEntrance")

};

// Object: Class DFMQuest.ForestEggTunnel
// Size: 0x390 (Inherited: 0x370)
struct AForestEggTunnel : AActor
{
	struct USceneComponent* SceneComponent; // 0x370(0x8)
	struct UBoxComponent* TriggerBox; // 0x378(0x8)
	uint8_t bShouldFinishFalling : 1; // 0x380(0x1), Mask(0x1)
	uint8_t BitPad_0x380_1 : 7; // 0x380(0x1)
	uint8_t Pad_0x381[0x3]; // 0x381(0x3)
	float DistanceMax; // 0x384(0x4)
	struct ADFMCharacter* FallingPlayer; // 0x388(0x8)


	// Object: Function DFMQuest.ForestEggTunnel.OnBoxOverlap
	// Flags: [Final|Native|Public|HasOutParms]
	// Offset: 0x13b723c0
	// Params: [ Num(6) Size(0xA8) ]
	void OnBoxOverlap(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, uint8_t bFromSweep, const struct FHitResult& SweepResult);

	// Object: Function DFMQuest.ForestEggTunnel.BP_OnBoxOverlap
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(1) Size(0x8) ]
	void BP_OnBoxOverlap(struct AActor* OtherActor);
	DEFINE_UE_CLASS_HELPERS(AForestEggTunnel, "ForestEggTunnel")

};

// Object: Class DFMQuest.IntroSaveGameSetting
// Size: 0x40 (Inherited: 0x28)
struct UIntroSaveGameSetting : USaveGame
{
	int32_t PlayerId; // 0x28(0x4)
	struct FName StageName; // 0x2C(0x8)
	uint32_t objectiveId; // 0x34(0x4)
	struct FName CheckPointTag; // 0x38(0x8)
	DEFINE_UE_CLASS_HELPERS(UIntroSaveGameSetting, "IntroSaveGameSetting")

};

// Object: Class DFMQuest.QA_HUDLoadListener
// Size: 0x50 (Inherited: 0x38)
struct UQA_HUDLoadListener : UGPQuestActionAsyncReturnActionBase
{
	struct FMulticastInlineDelegate OnHUDLoadComplete; // 0x38(0x10)
	uint8_t Pad_0x48[0x8]; // 0x48(0x8)


	// Object: Function DFMQuest.QA_HUDLoadListener.QA_HUDLoadListener
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x13b72724
	// Params: [ Num(2) Size(0x10) ]
	static struct UQA_HUDLoadListener* QA_HUDLoadListener(struct AGPQuestActionContext* QAContext);

	// Object: Function DFMQuest.QA_HUDLoadListener.OnHUDViewsAsyncLoad
	// Flags: [Final|Native|Protected]
	// Offset: 0x13b725e4
	// Params: [ Num(2) Size(0x18) ]
	void OnHUDViewsAsyncLoad(float Progress, struct TArray<struct FName> BlockGameFlowViewNameArray);
	DEFINE_UE_CLASS_HELPERS(UQA_HUDLoadListener, "QA_HUDLoadListener")

};

// Object: Class DFMQuest.IntroQuestClientProxy
// Size: 0x528 (Inherited: 0x518)
struct AIntroQuestClientProxy : ADFMQuestClientProxy
{
	uint8_t Pad_0x518[0x10]; // 0x518(0x10)


	// Object: Function DFMQuest.IntroQuestClientProxy.SaveGame
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x13b72c88
	// Params: [ Num(2) Size(0x10) ]
	void SaveGame(struct AGPQuestActionContext* QAContext, struct FName CheckPointTag);

	// Object: Function DFMQuest.IntroQuestClientProxy.OnIntroCommonBannerShowed
	// Flags: [Final|Native|Protected]
	// Offset: 0x13b72ba0
	// Params: [ Num(2) Size(0x18) ]
	void OnIntroCommonBannerShowed(struct FString FunctionName, struct UBaseUIView* View);

	// Object: Function DFMQuest.IntroQuestClientProxy.NtfServerSpecialButtonClicked
	// Flags: [Net|NetReliableNative|Event|Public|NetServer]
	// Offset: 0x13b72aec
	// Params: [ Num(1) Size(0x10) ]
	void NtfServerSpecialButtonClicked(struct FString ButtonName);

	// Object: Function DFMQuest.IntroQuestClientProxy.LoadGame
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x13b72a3c
	// Params: [ Num(2) Size(0x9) ]
	uint8_t LoadGame(struct AGPQuestActionContext* QAContext);

	// Object: Function DFMQuest.IntroQuestClientProxy.Intro_ClientShowPanel
	// Flags: [Net|NetReliableNative|Event|NetMulticast|Public]
	// Offset: 0x13b72944
	// Params: [ Num(2) Size(0x11) ]
	void Intro_ClientShowPanel(struct TArray<struct FName> HUDNames, uint8_t bDisplay);

	// Object: Function DFMQuest.IntroQuestClientProxy.ClientButtonClicked
	// Flags: [Final|Native|Public]
	// Offset: 0x13b728a0
	// Params: [ Num(1) Size(0x8) ]
	void ClientButtonClicked(struct FName ButtonName);
	DEFINE_UE_CLASS_HELPERS(AIntroQuestClientProxy, "IntroQuestClientProxy")

};

// Object: Class DFMQuest.ObjectiveContentView
// Size: 0x440 (Inherited: 0x3F0)
struct UObjectiveContentView : UBaseUIView
{
	struct UTextBlock* ObjectiveTitle; // 0x3F0(0x8)
	struct UTextBlock* ObjectiveProgressText; // 0x3F8(0x8)
	struct UProgressBar* CommonPorgressBar; // 0x400(0x8)
	struct FText CurObjectTitle; // 0x408(0x18)
	struct FColor ProgressColor_H; // 0x420(0x4)
	struct FColor ProgressColor_M; // 0x424(0x4)
	struct FColor ProgressColor_L; // 0x428(0x4)
	float ObjectiveTimeLimit; // 0x42C(0x4)
	uint8_t Pad_0x430[0x10]; // 0x430(0x10)


	// Object: Function DFMQuest.ObjectiveContentView.SetTraceActor
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x13b73214
	// Params: [ Num(1) Size(0x8) ]
	void SetTraceActor(struct AActor* TargetActor);

	// Object: Function DFMQuest.ObjectiveContentView.SetTimeLimit
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x13b73170
	// Params: [ Num(1) Size(0x4) ]
	void SetTimeLimit(float TimeLimit);

	// Object: Function DFMQuest.ObjectiveContentView.SetObjectiveTitle
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x13b73060
	// Params: [ Num(1) Size(0x18) ]
	void SetObjectiveTitle(const struct FText& NewTitle);

	// Object: Function DFMQuest.ObjectiveContentView.SetCommonProgressBarPercent
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x13b72fbc
	// Params: [ Num(1) Size(0x4) ]
	void SetCommonProgressBarPercent(float Percent);

	// Object: Function DFMQuest.ObjectiveContentView.SetCommomProgressHeathPercent
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x13b72f18
	// Params: [ Num(1) Size(0x4) ]
	void SetCommomProgressHeathPercent(float Percent);

	// Object: Function DFMQuest.ObjectiveContentView.GetObjectiveTitle
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x13b72e64
	// Params: [ Num(1) Size(0x18) ]
	struct FText GetObjectiveTitle();

	// Object: Function DFMQuest.ObjectiveContentView.BP_TraceTargetHealth
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(1) Size(0x8) ]
	void BP_TraceTargetHealth(struct AActor* TargetActor);

	// Object: Function DFMQuest.ObjectiveContentView.BP_SetObjectiveIcon
	// Flags: [Event|Public|BlueprintCallable|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(1) Size(0x1) ]
	void BP_SetObjectiveIcon(EGPQuestObjectiveHUDType InObjectiveHUDType);

	// Object: Function DFMQuest.ObjectiveContentView.BP_OnShowView
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(0) Size(0x0) ]
	void BP_OnShowView();
	DEFINE_UE_CLASS_HELPERS(UObjectiveContentView, "ObjectiveContentView")

};

// Object: Class DFMQuest.ObjectiveHintView
// Size: 0x428 (Inherited: 0x3F0)
struct UObjectiveHintView : UBaseUIView
{
	struct UTextBlock* HintText; // 0x3F0(0x8)
	float ShowHintTime; // 0x3F8(0x4)
	float FadeOutTime; // 0x3FC(0x4)
	uint8_t Pad_0x400[0x28]; // 0x400(0x28)


	// Object: Function DFMQuest.ObjectiveHintView.SetObjectiveType
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x13b736b4
	// Params: [ Num(1) Size(0x1) ]
	void SetObjectiveType(uint8_t bMainObjective);

	// Object: Function DFMQuest.ObjectiveHintView.SetObjectiveIconType
	// Flags: [Final|Native|Public]
	// Offset: 0x13b73610
	// Params: [ Num(1) Size(0x1) ]
	void SetObjectiveIconType(EGPQuestObjectiveHUDType InObjectiveHUDType);

	// Object: Function DFMQuest.ObjectiveHintView.SetHintText
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x13b73490
	// Params: [ Num(1) Size(0x18) ]
	void SetHintText(struct FText InText);

	// Object: Function DFMQuest.ObjectiveHintView.GetHintText
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x13b733dc
	// Params: [ Num(1) Size(0x18) ]
	struct FText GetHintText();

	// Object: Function DFMQuest.ObjectiveHintView.BP_UpdateObjectiveType
	// Flags: [Event|Public|BlueprintCallable|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(1) Size(0x4) ]
	void BP_UpdateObjectiveType(int32_t Type);

	// Object: Function DFMQuest.ObjectiveHintView.BP_SetObjectiveIconType
	// Flags: [Event|Public|BlueprintCallable|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(1) Size(0x1) ]
	void BP_SetObjectiveIconType(EGPQuestObjectiveHUDType InObjectiveHUDType);

	// Object: Function DFMQuest.ObjectiveHintView.BP_FadeoutView
	// Flags: [Event|Public|BlueprintCallable|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(0) Size(0x0) ]
	void BP_FadeoutView();

	// Object: Function DFMQuest.ObjectiveHintView.BP_FadeinView
	// Flags: [Event|Public|BlueprintCallable|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(0) Size(0x0) ]
	void BP_FadeinView();
	DEFINE_UE_CLASS_HELPERS(UObjectiveHintView, "ObjectiveHintView")

};

// Object: Class DFMQuest.ObjectiveTipsView
// Size: 0x3F8 (Inherited: 0x3F0)
struct UObjectiveTipsView : UBaseUIView
{
	struct URichTextBlock* GuideTips; // 0x3F0(0x8)


	// Object: Function DFMQuest.ObjectiveTipsView.SetTips
	// Flags: [Final|Native|Public]
	// Offset: 0x13b73774
	// Params: [ Num(1) Size(0x18) ]
	void SetTips(struct FText Tips);

	// Object: Function DFMQuest.ObjectiveTipsView.BP_OnShowTips
	// Flags: [Event|Public|BlueprintCallable|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(0) Size(0x0) ]
	void BP_OnShowTips();

	// Object: Function DFMQuest.ObjectiveTipsView.BP_OnHideTips
	// Flags: [Event|Public|BlueprintCallable|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(0) Size(0x0) ]
	void BP_OnHideTips();
	DEFINE_UE_CLASS_HELPERS(UObjectiveTipsView, "ObjectiveTipsView")

};

// Object: Class DFMQuest.PushVehicleQuest
// Size: 0x4C8 (Inherited: 0x4C8)
struct APushVehicleQuest : AGPQuest
{	DEFINE_UE_CLASS_HELPERS(APushVehicleQuest, "PushVehicleQuest")

};

// Object: Class DFMQuest.QA_ActivateTimeBomb
// Size: 0x70 (Inherited: 0x38)
struct UQA_ActivateTimeBomb : UGPQuestActionAsyncReturnActionBase
{
	uint8_t Pad_0x38[0x18]; // 0x38(0x18)
	struct FMulticastInlineDelegate OnBombExploded; // 0x50(0x10)
	struct FMulticastInlineDelegate OnBombDisabled; // 0x60(0x10)


	// Object: Function DFMQuest.QA_ActivateTimeBomb.QA_ActivateTimeBomb
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x13b7391c
	// Params: [ Num(6) Size(0x28) ]
	static struct UQA_ActivateTimeBomb* QA_ActivateTimeBomb(struct AGPQuestActionContext* QAContext, struct FName QATag_Interactor_TimeBomb_TimeBombActor, int32_t ExplodeDuration, int32_t RandomWiresNum, int32_t WrongWirePunishTime);

	// Object: Function DFMQuest.QA_ActivateTimeBomb.OnBombStateChanged
	// Flags: [Final|Native|Public]
	// Offset: 0x13b73908
	// Params: [ Num(0) Size(0x0) ]
	void OnBombStateChanged();
	DEFINE_UE_CLASS_HELPERS(UQA_ActivateTimeBomb, "QA_ActivateTimeBomb")

};

// Object: Class DFMQuest.QA_AIDeathListener
// Size: 0xA0 (Inherited: 0x38)
struct UQA_AIDeathListener : UGPQuestActionAsyncReturnActionBase
{
	struct FMulticastInlineDelegate OnTrigger; // 0x38(0x10)
	uint8_t Pad_0x48[0x58]; // 0x48(0x58)


	// Object: Function DFMQuest.QA_AIDeathListener.QA_MultiAIDeathListener
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x13b73f0c
	// Params: [ Num(6) Size(0x50) ]
	static struct UQA_AIDeathListener* QA_MultiAIDeathListener(struct AGPQuestActionContext* QAContext, struct TArray<struct FName> AITags, int32_t AINum, uint8_t bShowMarker, struct FQMarkerSpawnParams QMarkerParams);

	// Object: Function DFMQuest.QA_AIDeathListener.QA_AISendKillEvent
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x13b73e40
	// Params: [ Num(2) Size(0x10) ]
	static void QA_AISendKillEvent(struct AGPQuestActionContext* QAContext, struct FName AITag);

	// Object: Function DFMQuest.QA_AIDeathListener.QA_AISendFightStateEvent
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x13b73d38
	// Params: [ Num(3) Size(0x11) ]
	static void QA_AISendFightStateEvent(struct AGPQuestActionContext* QAContext, struct FName AITag, EGPCharacterFightStateType StateType);

	// Object: Function DFMQuest.QA_AIDeathListener.QA_AIDeathListener
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x13b73b90
	// Params: [ Num(6) Size(0x48) ]
	static struct UQA_AIDeathListener* QA_AIDeathListener(struct AGPQuestActionContext* QAContext, struct FName AITag, int32_t AINum, uint8_t bShowMarker, struct FQMarkerSpawnParams QMarkerParams);

	// Object: Function DFMQuest.QA_AIDeathListener.OnCharacterDied
	// Flags: [Final|Native|Public]
	// Offset: 0x13b73ab4
	// Params: [ Num(2) Size(0x10) ]
	void OnCharacterDied(struct ACHARACTER* DeadCharactet, struct AActor* KillerActor);
	DEFINE_UE_CLASS_HELPERS(UQA_AIDeathListener, "QA_AIDeathListener")

};

// Object: Class DFMQuest.QA_AISkillTaskListener
// Size: 0x78 (Inherited: 0x38)
struct UQA_AISkillTaskListener : UGPQuestActionAsyncReturnActionBase
{
	struct FMulticastInlineDelegate OnStartSkill; // 0x38(0x10)
	struct FMulticastInlineDelegate OnFinishSkill; // 0x48(0x10)
	uint8_t Pad_0x58[0x20]; // 0x58(0x20)


	// Object: Function DFMQuest.QA_AISkillTaskListener.QA_AISkillTaskListener
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x13b743a0
	// Params: [ Num(5) Size(0x28) ]
	static struct UQA_AISkillTaskListener* QA_AISkillTaskListener(struct AGPQuestActionContext* QAContext, struct FName AITag, struct FName ListenStateName, uint8_t bOnce);

	// Object: Function DFMQuest.QA_AISkillTaskListener.OnAIStartSkillTask
	// Flags: [Final|Native|Public]
	// Offset: 0x13b742c4
	// Params: [ Num(2) Size(0x10) ]
	void OnAIStartSkillTask(struct AGPCharacter* GPAICharacter, struct FName CustomStateName);

	// Object: Function DFMQuest.QA_AISkillTaskListener.OnAIFinishSkillTask
	// Flags: [Final|Native|Public]
	// Offset: 0x13b741e8
	// Params: [ Num(2) Size(0x10) ]
	void OnAIFinishSkillTask(struct AGPCharacter* GPAICharacter, struct FName CustomStateName);
	DEFINE_UE_CLASS_HELPERS(UQA_AISkillTaskListener, "QA_AISkillTaskListener")

};

// Object: Class DFMQuest.QA_AIFightMeListener
// Size: 0x60 (Inherited: 0x38)
struct UQA_AIFightMeListener : UGPQuestActionAsyncReturnActionBase
{
	struct FMulticastInlineDelegate OnFight; // 0x38(0x10)
	uint8_t Pad_0x48[0x18]; // 0x48(0x18)


	// Object: Function DFMQuest.QA_AIFightMeListener.QA_AIFightMeListener
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x13b745f0
	// Params: [ Num(4) Size(0x20) ]
	static struct UQA_AIFightMeListener* QA_AIFightMeListener(struct AGPQuestActionContext* QAContext, struct FName Tag, struct ADFMPlayerController* Player);

	// Object: Function DFMQuest.QA_AIFightMeListener.OnAIMesgReceive
	// Flags: [Final|Native|Public]
	// Offset: 0x13b74510
	// Params: [ Num(2) Size(0x9) ]
	void OnAIMesgReceive(struct ADFMCharacter* AI, EAIMsgType MsgType);
	DEFINE_UE_CLASS_HELPERS(UQA_AIFightMeListener, "QA_AIFightMeListener")

};

// Object: Class DFMQuest.QA_AIJob_BossEncounter_JobStateChangeListener
// Size: 0x68 (Inherited: 0x38)
struct UQA_AIJob_BossEncounter_JobStateChangeListener : UGPQuestActionAsyncReturnActionBase
{
	struct FMulticastInlineDelegate OnBossEncounter_JobStateChange; // 0x38(0x10)
	uint8_t Pad_0x48[0x20]; // 0x48(0x20)


	// Object: Function DFMQuest.QA_AIJob_BossEncounter_JobStateChangeListener.QA_AIJob_BossEncounter_StartJob_OnTimeFinish
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x13b7520c
	// Params: [ Num(3) Size(0x19) ]
	static uint8_t QA_AIJob_BossEncounter_StartJob_OnTimeFinish(struct AGPQuestActionContext* QAContext, struct FString JobName);

	// Object: Function DFMQuest.QA_AIJob_BossEncounter_JobStateChangeListener.QA_AIJob_BossEncounter_StartJob
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x13b750dc
	// Params: [ Num(2) Size(0x18) ]
	static void QA_AIJob_BossEncounter_StartJob(struct AGPQuestActionContext* QAContext, struct FString JobName);

	// Object: Function DFMQuest.QA_AIJob_BossEncounter_JobStateChangeListener.QA_AIJob_BossEncounter_OnPlunder
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x13b74ea4
	// Params: [ Num(5) Size(0x30) ]
	static void QA_AIJob_BossEncounter_OnPlunder(struct AGPQuestActionContext* QAContext, struct FString JobName, ECampType CampId, int32_t EnemyContractID, struct FString EnemyJobName);

	// Object: Function DFMQuest.QA_AIJob_BossEncounter_JobStateChangeListener.QA_AIJob_BossEncounter_OnEndQuest
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x13b74d38
	// Params: [ Num(3) Size(0x1C) ]
	static void QA_AIJob_BossEncounter_OnEndQuest(struct AGPQuestActionContext* QAContext, struct FString JobName, int32_t DelayTimeResetCamp);

	// Object: Function DFMQuest.QA_AIJob_BossEncounter_JobStateChangeListener.QA_AIJob_BossEncounter_JobStateChangeListender
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x13b74c00
	// Params: [ Num(3) Size(0x20) ]
	static struct UQA_AIJob_BossEncounter_JobStateChangeListener* QA_AIJob_BossEncounter_JobStateChangeListender(struct AGPQuestActionContext* QAContext, struct FString JobName);

	// Object: Function DFMQuest.QA_AIJob_BossEncounter_JobStateChangeListener.QA_AIJob_BossEncounter_GetJob
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x13b74ac8
	// Params: [ Num(3) Size(0x20) ]
	static struct UAIGroupPatrolJob_BossEncounter* QA_AIJob_BossEncounter_GetJob(struct AGPQuestActionContext* QAContext, struct FString JobName);

	// Object: Function DFMQuest.QA_AIJob_BossEncounter_JobStateChangeListener.QA_AIJob_BossEncounter_ChangeJobState
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x13b7495c
	// Params: [ Num(3) Size(0x19) ]
	static void QA_AIJob_BossEncounter_ChangeJobState(struct AGPQuestActionContext* QAContext, struct FString JobName, EAIGroupPatrolJobBossEncounterState JobState);

	// Object: Function DFMQuest.QA_AIJob_BossEncounter_JobStateChangeListener.QA_AIJob_BossEncounter_ChangeJobOwner
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x13b7482c
	// Params: [ Num(2) Size(0x18) ]
	static void QA_AIJob_BossEncounter_ChangeJobOwner(struct AGPQuestActionContext* QAContext, struct FString JobName);

	// Object: Function DFMQuest.QA_AIJob_BossEncounter_JobStateChangeListener.OnJobStateChangeDelegate
	// Flags: [Final|Native|Public]
	// Offset: 0x13b74710
	// Params: [ Num(3) Size(0xA) ]
	void OnJobStateChangeDelegate(struct UAIGroupPatrolJob_BossEncounter* Job, EAIGroupPatrolJobBossEncounterState OldState, EAIGroupPatrolJobBossEncounterState NewState);
	DEFINE_UE_CLASS_HELPERS(UQA_AIJob_BossEncounter_JobStateChangeListener, "QA_AIJob_BossEncounter_JobStateChangeListener")

};

// Object: Class DFMQuest.QA_AITeamSizeListener
// Size: 0x78 (Inherited: 0x38)
struct UQA_AITeamSizeListener : UGPQuestActionAsyncReturnActionBase
{
	struct FMulticastInlineDelegate OnSizeChanged; // 0x38(0x10)
	struct FMulticastInlineDelegate OnComparePass; // 0x48(0x10)
	uint8_t Pad_0x58[0x20]; // 0x58(0x20)


	// Object: Function DFMQuest.QA_AITeamSizeListener.QA_AITeamSizeListener
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x13b7546c
	// Params: [ Num(6) Size(0x28) ]
	static struct UQA_AITeamSizeListener* QA_AITeamSizeListener(struct AGPQuestActionContext* QAContext, EQA_AITeamSizeListenerOption Option, struct FName QATag_AIGroupSpawnerBase_TeamName, EGPQuestActionCompareOperator Compare, int32_t size);

	// Object: Function DFMQuest.QA_AITeamSizeListener.OnTeamPawnDied
	// Flags: [Final|Native|Public]
	// Offset: 0x13b753c8
	// Params: [ Num(1) Size(0x8) ]
	void OnTeamPawnDied(struct UDFMQuestAITeamChecker* Checker);
	DEFINE_UE_CLASS_HELPERS(UQA_AITeamSizeListener, "QA_AITeamSizeListener")

};

// Object: Class DFMQuest.QA_AllClientLoadingCompletedListener
// Size: 0x58 (Inherited: 0x38)
struct UQA_AllClientLoadingCompletedListener : UGPQuestActionAsyncReturnActionBase
{
	struct FMulticastInlineDelegate OnCompleted; // 0x38(0x10)
	uint8_t Pad_0x48[0x8]; // 0x48(0x8)
	struct AGPQuestActionContext* QA_Context; // 0x50(0x8)


	// Object: Function DFMQuest.QA_AllClientLoadingCompletedListener.QA_AllClientLoadingCompletedListener
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x13b7561c
	// Params: [ Num(3) Size(0x18) ]
	static struct UQA_AllClientLoadingCompletedListener* QA_AllClientLoadingCompletedListener(struct AGPQuestActionContext* QAContext, uint8_t bOnce);

	// Object: Function DFMQuest.QA_AllClientLoadingCompletedListener.FireReturnAction
	// Flags: [Final|Native|Public]
	// Offset: 0x13b75608
	// Params: [ Num(0) Size(0x0) ]
	void FireReturnAction();
	DEFINE_UE_CLASS_HELPERS(UQA_AllClientLoadingCompletedListener, "QA_AllClientLoadingCompletedListener")

};

// Object: Class DFMQuest.QA_BraveGame_OnTeamFuelCountChangeListener
// Size: 0x58 (Inherited: 0x38)
struct UQA_BraveGame_OnTeamFuelCountChangeListener : UGPQuestActionAsyncReturnActionBase
{
	struct FMulticastInlineDelegate OnTeamFuelCountChange; // 0x38(0x10)
	uint8_t Pad_0x48[0x10]; // 0x48(0x10)


	// Object: Function DFMQuest.QA_BraveGame_OnTeamFuelCountChangeListener.QA_BraveGame_OnTeamFuelCountChangeListener
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x13b75844
	// Params: [ Num(3) Size(0x18) ]
	static struct UQA_BraveGame_OnTeamFuelCountChangeListener* QA_BraveGame_OnTeamFuelCountChangeListener(struct AGPQuestActionContext* QAContext, struct ABraveGame* BraveGame);

	// Object: Function DFMQuest.QA_BraveGame_OnTeamFuelCountChangeListener.OnBraveGameTeamFuelCountChangeDelegate
	// Flags: [Final|Native|Public]
	// Offset: 0x13b75724
	// Params: [ Num(3) Size(0xD) ]
	void OnBraveGameTeamFuelCountChangeDelegate(struct ABraveGame* BraveGame, int32_t TeamFuelCount, uint8_t TeamFuelEnough);
	DEFINE_UE_CLASS_HELPERS(UQA_BraveGame_OnTeamFuelCountChangeListener, "QA_BraveGame_OnTeamFuelCountChangeListener")

};

// Object: Class DFMQuest.QA_BreakItem_BreakListener
// Size: 0x60 (Inherited: 0x38)
struct UQA_BreakItem_BreakListener : UGPQuestActionAsyncReturnActionBase
{
	struct AGPQuestActionContext* QAContext; // 0x38(0x8)
	uint8_t Pad_0x40[0x10]; // 0x40(0x10)
	struct FMulticastInlineDelegate OnBreak; // 0x50(0x10)


	// Object: Function DFMQuest.QA_BreakItem_BreakListener.QA_BreakItem_BreakListener
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x13b7774c
	// Params: [ Num(3) Size(0x18) ]
	static struct UQA_BreakItem_BreakListener* QA_BreakItem_BreakListener(struct AGPQuestActionContext* QAContext, struct FName SourceTag);

	// Object: Function DFMQuest.QA_BreakItem_BreakListener.NtfBreakItemBroken
	// Flags: [Final|Native|Public]
	// Offset: 0x13b776a8
	// Params: [ Num(1) Size(0x8) ]
	void NtfBreakItemBroken(struct AActor* BreakableItem);
	DEFINE_UE_CLASS_HELPERS(UQA_BreakItem_BreakListener, "QA_BreakItem_BreakListener")

};

// Object: Class DFMQuest.QA_ButtonClickedListener
// Size: 0x58 (Inherited: 0x38)
struct UQA_ButtonClickedListener : UGPQuestActionAsyncReturnActionBase
{
	struct FMulticastInlineDelegate OnClicked; // 0x38(0x10)
	uint8_t Pad_0x48[0x10]; // 0x48(0x10)


	// Object: Function DFMQuest.QA_ButtonClickedListener.QA_ButtonClickedListener
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x13b778d4
	// Params: [ Num(3) Size(0x18) ]
	static struct UQA_ButtonClickedListener* QA_ButtonClickedListener(struct AGPQuestActionContext* QAContext, struct FName ButtonName);

	// Object: Function DFMQuest.QA_ButtonClickedListener.OnSpecialButtonClicked
	// Flags: [Final|Native|Public]
	// Offset: 0x13b77830
	// Params: [ Num(1) Size(0x8) ]
	void OnSpecialButtonClicked(struct FName ButtonName);
	DEFINE_UE_CLASS_HELPERS(UQA_ButtonClickedListener, "QA_ButtonClickedListener")

};

// Object: Class DFMQuest.QA_MandelBrickListener
// Size: 0x60 (Inherited: 0x38)
struct UQA_MandelBrickListener : UGPQuestActionAsyncReturnActionBase
{
	struct FMulticastInlineDelegate OnPickedUp; // 0x38(0x10)
	uint8_t Pad_0x48[0x18]; // 0x48(0x18)


	// Object: Function DFMQuest.QA_MandelBrickListener.QA_MandelBrickListener
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x13b77b80
	// Params: [ Num(4) Size(0x20) ]
	static struct UQA_MandelBrickListener* QA_MandelBrickListener(struct AGPQuestActionContext* QAContext, struct ACHARACTER* OperatorCharacter, struct FName MandelBrickTag);

	// Object: Function DFMQuest.QA_MandelBrickListener.OnServerSimulateInteraction
	// Flags: [Final|Native|Public]
	// Offset: 0x13b77aa0
	// Params: [ Num(2) Size(0x9) ]
	void OnServerSimulateInteraction(struct ACHARACTER* OperatorCharacter, EEndInteractionType EndReason);

	// Object: Function DFMQuest.QA_MandelBrickListener.OnClientSimulateInteraction
	// Flags: [Final|Native|Public]
	// Offset: 0x13b779b8
	// Params: [ Num(2) Size(0x9) ]
	void OnClientSimulateInteraction(struct ACHARACTER* OperatorCharacter, uint8_t bStartSimulate);
	DEFINE_UE_CLASS_HELPERS(UQA_MandelBrickListener, "QA_MandelBrickListener")

};

// Object: Class DFMQuest.QA_CarryBodyListener
// Size: 0x60 (Inherited: 0x38)
struct UQA_CarryBodyListener : UGPQuestActionAsyncReturnActionBase
{
	struct FMulticastInlineDelegate OnDoInteractDelegate; // 0x38(0x10)
	uint8_t Pad_0x48[0x18]; // 0x48(0x18)


	// Object: Function DFMQuest.QA_CarryBodyListener.QA_CarryBodyListener
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x13b77d50
	// Params: [ Num(4) Size(0x20) ]
	static struct UQA_CarryBodyListener* QA_CarryBodyListener(struct AGPQuestActionContext* InQAContext, struct ACHARACTER* CHARACTER, struct FName Name);

	// Object: Function DFMQuest.QA_CarryBodyListener.FireOnDoInteract
	// Flags: [Final|Native|Public]
	// Offset: 0x13b77cac
	// Params: [ Num(1) Size(0x8) ]
	void FireOnDoInteract(struct AActor* Actor);
	DEFINE_UE_CLASS_HELPERS(UQA_CarryBodyListener, "QA_CarryBodyListener")

};

// Object: Class DFMQuest.QA_CarryBodySpawnListener
// Size: 0x68 (Inherited: 0x38)
struct UQA_CarryBodySpawnListener : UGPQuestActionAsyncReturnActionBase
{
	struct FMulticastInlineDelegate OnSpawnDelegate; // 0x38(0x10)
	uint8_t Pad_0x48[0x20]; // 0x48(0x20)


	// Object: Function DFMQuest.QA_CarryBodySpawnListener.QA_OnCarryBodySpawnListener
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x13b77e84
	// Params: [ Num(4) Size(0x20) ]
	static struct UQA_CarryBodySpawnListener* QA_OnCarryBodySpawnListener(struct AGPQuestActionContext* InQAContext, struct FName Tag, uint8_t Once);

	// Object: Function DFMQuest.QA_CarryBodySpawnListener.OnCarryBodySpawn
	// Flags: [Final|Native|Public]
	// Offset: 0x13b77e70
	// Params: [ Num(0) Size(0x0) ]
	void OnCarryBodySpawn();
	DEFINE_UE_CLASS_HELPERS(UQA_CarryBodySpawnListener, "QA_CarryBodySpawnListener")

};

// Object: Class DFMQuest.QA_CheckNpcStatuslistener
// Size: 0xB0 (Inherited: 0x38)
struct UQA_CheckNpcStatuslistener : UGPQuestActionAsyncReturnActionBase
{
	struct FMulticastInlineDelegate OnTimeOut; // 0x38(0x10)
	uint8_t Pad_0x48[0x68]; // 0x48(0x68)


	// Object: Function DFMQuest.QA_CheckNpcStatuslistener.QA_CheckNpcStatuslistener
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable]
	// Offset: 0x13b78070
	// Params: [ Num(7) Size(0x58) ]
	static struct UQA_CheckNpcStatuslistener* QA_CheckNpcStatuslistener(struct AGPQuestActionContext* QAContext, struct FName NPCTag, const struct FTransform& ResetToTrans, float Timeout, int32_t ResetToPhase, struct FName TargetTag);

	// Object: Function DFMQuest.QA_CheckNpcStatuslistener.OnStopCheckNpcStatus
	// Flags: [Final|Native|Public]
	// Offset: 0x13b77fcc
	// Params: [ Num(1) Size(0x4) ]
	void OnStopCheckNpcStatus(int32_t InHandle);

	// Object: Function DFMQuest.QA_CheckNpcStatuslistener.OnNpcStatusTimeOut
	// Flags: [Final|Native|Public]
	// Offset: 0x13b77fb8
	// Params: [ Num(0) Size(0x0) ]
	void OnNpcStatusTimeOut();
	DEFINE_UE_CLASS_HELPERS(UQA_CheckNpcStatuslistener, "QA_CheckNpcStatuslistener")

};

// Object: Class DFMQuest.QA_ClientHudLoadListener
// Size: 0x68 (Inherited: 0x38)
struct UQA_ClientHudLoadListener : UGPQuestActionAsyncReturnActionBase
{
	struct FMulticastInlineDelegate OnClientHudsLoaded; // 0x38(0x10)
	struct FMulticastInlineDelegate OnTimeOut; // 0x48(0x10)
	uint8_t Pad_0x58[0x10]; // 0x58(0x10)


	// Object: Function DFMQuest.QA_ClientHudLoadListener.QA_ClientHudLoadListener
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x13b782a4
	// Params: [ Num(4) Size(0x28) ]
	static struct UQA_ClientHudLoadListener* QA_ClientHudLoadListener(struct AGPQuestActionContext* QAContext, struct TArray<struct FName> HUDNames, float TimeOutSeconds);

	// Object: Function DFMQuest.QA_ClientHudLoadListener.FireReturnActionTimeOut
	// Flags: [Final|Native|Public]
	// Offset: 0x13b78290
	// Params: [ Num(0) Size(0x0) ]
	void FireReturnActionTimeOut();

	// Object: Function DFMQuest.QA_ClientHudLoadListener.FireReturnActionLoaded
	// Flags: [Final|Native|Public]
	// Offset: 0x13b7827c
	// Params: [ Num(0) Size(0x0) ]
	void FireReturnActionLoaded();
	DEFINE_UE_CLASS_HELPERS(UQA_ClientHudLoadListener, "QA_ClientHudLoadListener")

};

// Object: Class DFMQuest.QA_Countdown
// Size: 0x68 (Inherited: 0x38)
struct UQA_Countdown : UGPQuestActionAsyncReturnActionBase
{
	struct FMulticastInlineDelegate OnFinished; // 0x38(0x10)
	struct FMulticastInlineDelegate OnStoped; // 0x48(0x10)
	uint8_t Pad_0x58[0x10]; // 0x58(0x10)


	// Object: Function DFMQuest.QA_Countdown.QA_StopStageCountdown
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x13b78b88
	// Params: [ Num(2) Size(0x10) ]
	static void QA_StopStageCountdown(struct AGPQuestActionContext* QAContext, struct UQA_Countdown* QACountdown);

	// Object: Function DFMQuest.QA_Countdown.QA_StopCountdown
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x13b78abc
	// Params: [ Num(2) Size(0x10) ]
	static void QA_StopCountdown(struct AGPQuestActionContext* QAContext, struct UQA_Countdown* QACountdown);

	// Object: Function DFMQuest.QA_Countdown.QA_StartStageCountdown
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x13b78870
	// Params: [ Num(7) Size(0x48) ]
	static struct UQA_Countdown* QA_StartStageCountdown(struct AGPQuestActionContext* QAContext, struct AGPQuestCountdownBase* CountdownClass, ECountDownHUDClassType CountDownHUDClassType, const struct FText& Title, int32_t Duration, struct UQA_Countdown*& QACountdownOut);

	// Object: Function DFMQuest.QA_Countdown.QA_StartCountdown
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x13b78578
	// Params: [ Num(8) Size(0x50) ]
	static struct UQA_Countdown* QA_StartCountdown(struct AGPQuestActionContext* QAContext, EQA_CountdownType CountdownType, struct AGPQuestCountdownBase* CountdownClass, ECountDownHUDClassType CountDownHUDClassType, struct FText Title, int32_t Duration, struct UQA_Countdown*& QACountdownOut);

	// Object: Function DFMQuest.QA_Countdown.OnCountdownFinished
	// Flags: [Final|Native|Public]
	// Offset: 0x13b78564
	// Params: [ Num(0) Size(0x0) ]
	void OnCountdownFinished();

	// Object: Function DFMQuest.QA_Countdown.GetCountdownBaseObj
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x13b78530
	// Params: [ Num(1) Size(0x8) ]
	struct AGPQuestCountdownBase* GetCountdownBaseObj();

	// Object: Function DFMQuest.QA_Countdown.FireReturnAction
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x13b7848c
	// Params: [ Num(1) Size(0x1) ]
	void FireReturnAction(EQA_CountdownAsyncReturnBranch Branch);
	DEFINE_UE_CLASS_HELPERS(UQA_Countdown, "QA_Countdown")

};

// Object: Class DFMQuest.QA_Delay
// Size: 0x60 (Inherited: 0x38)
struct UQA_Delay : UGPQuestActionAsyncReturnActionBase
{
	struct FMulticastInlineDelegate OnDelay; // 0x38(0x10)
	uint8_t Pad_0x48[0x18]; // 0x48(0x18)


	// Object: Function DFMQuest.QA_Delay.QA_Delay
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x13b78c70
	// Params: [ Num(3) Size(0x18) ]
	static struct UQA_Delay* QA_Delay(struct AGPQuestActionContext* QAContext, float Delay);

	// Object: Function DFMQuest.QA_Delay.FireReturnAction
	// Flags: [Final|Native|Public]
	// Offset: 0x13b78c5c
	// Params: [ Num(0) Size(0x0) ]
	void FireReturnAction();
	DEFINE_UE_CLASS_HELPERS(UQA_Delay, "QA_Delay")

};

// Object: Class DFMQuest.QA_EnableManningListener
// Size: 0x60 (Inherited: 0x38)
struct UQA_EnableManningListener : UGPQuestActionAsyncReturnActionBase
{
	struct FMulticastInlineDelegate OnManningCompleted; // 0x38(0x10)
	uint8_t Pad_0x48[0x18]; // 0x48(0x18)


	// Object: Function DFMQuest.QA_EnableManningListener.QA_ManningListener
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x13b78dfc
	// Params: [ Num(6) Size(0x28) ]
	static struct UQA_EnableManningListener* QA_ManningListener(struct AGPQuestActionContext* QAContext, struct FName SourceTag, struct AGPCharacter* Operator, int32_t TeamID, uint8_t Once);

	// Object: Function DFMQuest.QA_EnableManningListener.OnServerManningCompleted
	// Flags: [Final|Native|Public]
	// Offset: 0x13b78d58
	// Params: [ Num(1) Size(0x8) ]
	void OnServerManningCompleted(struct UInteractorManningComponent* ManningComponent);
	DEFINE_UE_CLASS_HELPERS(UQA_EnableManningListener, "QA_EnableManningListener")

};

// Object: Class DFMQuest.QA_FadeOutListener
// Size: 0x68 (Inherited: 0x38)
struct UQA_FadeOutListener : UGPQuestActionAsyncReturnActionBase
{
	struct FMulticastInlineDelegate OnFadeOut; // 0x38(0x10)
	struct FMulticastInlineDelegate OnClientRealFadeOut; // 0x48(0x10)
	uint8_t Pad_0x58[0x10]; // 0x58(0x10)


	// Object: Function DFMQuest.QA_FadeOutListener.QA_FadeOutListener
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x13b78fb8
	// Params: [ Num(3) Size(0x18) ]
	static struct UQA_FadeOutListener* QA_FadeOutListener(struct AGPQuestActionContext* QAContext, uint8_t bOnce);

	// Object: Function DFMQuest.QA_FadeOutListener.FireReturnAction
	// Flags: [Final|Native|Public]
	// Offset: 0x13b78fa4
	// Params: [ Num(0) Size(0x0) ]
	void FireReturnAction();
	DEFINE_UE_CLASS_HELPERS(UQA_FadeOutListener, "QA_FadeOutListener")

};

// Object: Class DFMQuest.QA_FirstPlayerSeamLessEnterListener
// Size: 0x60 (Inherited: 0x38)
struct UQA_FirstPlayerSeamLessEnterListener : UGPQuestActionAsyncReturnActionBase
{
	struct FMulticastInlineDelegate OnCompleted; // 0x38(0x10)
	uint8_t Pad_0x48[0x8]; // 0x48(0x8)
	struct AGPQuestActionContext* QA_Context; // 0x50(0x8)
	uint8_t Pad_0x58[0x8]; // 0x58(0x8)


	// Object: Function DFMQuest.QA_FirstPlayerSeamLessEnterListener.QA_FirstPlayerSeamLessEnterListener
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x13b79158
	// Params: [ Num(3) Size(0x18) ]
	static struct UQA_FirstPlayerSeamLessEnterListener* QA_FirstPlayerSeamLessEnterListener(struct AGPQuestActionContext* QAContext, uint8_t bOnce);

	// Object: Function DFMQuest.QA_FirstPlayerSeamLessEnterListener.FireReturnAction
	// Flags: [Final|Native|Public]
	// Offset: 0x13b790b4
	// Params: [ Num(1) Size(0x8) ]
	void FireReturnAction(uint64_t Uin);
	DEFINE_UE_CLASS_HELPERS(UQA_FirstPlayerSeamLessEnterListener, "QA_FirstPlayerSeamLessEnterListener")

};

// Object: Class DFMQuest.QA_FixedRocketExplodeListener
// Size: 0x58 (Inherited: 0x38)
struct UQA_FixedRocketExplodeListener : UGPQuestActionAsyncReturnActionBase
{
	struct FMulticastInlineDelegate OnExplode; // 0x38(0x10)
	uint8_t Pad_0x48[0x10]; // 0x48(0x10)


	// Object: Function DFMQuest.QA_FixedRocketExplodeListener.QA_FixedRocketExplodeListener
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x13b792f8
	// Params: [ Num(3) Size(0x18) ]
	static struct UQA_FixedRocketExplodeListener* QA_FixedRocketExplodeListener(struct AGPQuestActionContext* QAContext, uint8_t bOnce);

	// Object: Function DFMQuest.QA_FixedRocketExplodeListener.FireReturnAction
	// Flags: [Final|Native|Public]
	// Offset: 0x13b79254
	// Params: [ Num(1) Size(0x8) ]
	void FireReturnAction(struct FName QATag);
	DEFINE_UE_CLASS_HELPERS(UQA_FixedRocketExplodeListener, "QA_FixedRocketExplodeListener")

};

// Object: Class DFMQuest.QA_GPSequence
// Size: 0x98 (Inherited: 0x38)
struct UQA_GPSequence : UGPQuestActionAsyncReturnActionBase
{
	struct FMulticastInlineDelegate OnBeginSequence; // 0x38(0x10)
	struct FMulticastInlineDelegate OnSkipSequence; // 0x48(0x10)
	struct FMulticastInlineDelegate OnPreEndSequence; // 0x58(0x10)
	struct FMulticastInlineDelegate OnEndSequence; // 0x68(0x10)
	uint8_t Pad_0x78[0x20]; // 0x78(0x20)


	// Object: Function DFMQuest.QA_GPSequence.QA_ResetSequence
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x13b79e74
	// Params: [ Num(3) Size(0x11) ]
	static void QA_ResetSequence(struct AGPQuestActionContext* QAContext, struct FName QATag_GPSequenceActor_GPSequence, EGPQuestActionScope Scope);

	// Object: Function DFMQuest.QA_GPSequence.QA_PlaySequenceExtra
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x13b79cd8
	// Params: [ Num(6) Size(0x20) ]
	static struct UQA_GPSequence* QA_PlaySequenceExtra(struct AGPQuestActionContext* QAContext, struct FName QATag_GPSequenceActor_GPSequence, float PreEndRestTime, uint8_t bPreEndStartFade, EGPQuestActionScope Scope);

	// Object: Function DFMQuest.QA_GPSequence.QA_PlaySequence
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x13b79bc0
	// Params: [ Num(4) Size(0x20) ]
	static struct UQA_GPSequence* QA_PlaySequence(struct AGPQuestActionContext* QAContext, struct FName QATag_GPSequenceActor_GPSequence, EGPQuestActionScope Scope);

	// Object: Function DFMQuest.QA_GPSequence.QA_ListenSequence
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x13b79a64
	// Params: [ Num(5) Size(0x20) ]
	static struct UQA_GPSequence* QA_ListenSequence(struct AGPQuestActionContext* QAContext, struct FName QATag_GPSequenceActor_GPSequence, EGPQuestActionScope Scope, uint8_t bOnce);

	// Object: Function DFMQuest.QA_GPSequence.QA_GetSequenceLength
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x13b7994c
	// Params: [ Num(4) Size(0x18) ]
	static float QA_GetSequenceLength(struct AGPQuestActionContext* QAContext, struct FName QATag_GPSequenceActor_GPSequence, EGPQuestActionScope Scope);

	// Object: Function DFMQuest.QA_GPSequence.QA_CutScene
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x13b797f8
	// Params: [ Num(5) Size(0x20) ]
	static struct UQA_GPSequence* QA_CutScene(struct AGPQuestActionContext* QAContext, struct FName QATag_GPSequenceActor_CutScene, EQA_GPSequenceOption Option, EGPQuestActionScope Scope);

	// Object: Function DFMQuest.QA_GPSequence.QA_BreakSequence
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x13b796f0
	// Params: [ Num(3) Size(0x11) ]
	static void QA_BreakSequence(struct AGPQuestActionContext* QAContext, struct FName QATag_GPSequenceActor_GPSequence, EGPQuestActionScope Scope);

	// Object: Function DFMQuest.QA_GPSequence.OnSkipSequenceInternal
	// Flags: [Final|Native|Public]
	// Offset: 0x13b7964c
	// Params: [ Num(1) Size(0x8) ]
	void OnSkipSequenceInternal(struct AGPSequenceActor* SequencePlayer);

	// Object: Function DFMQuest.QA_GPSequence.OnPreEndSequenceInternal
	// Flags: [Final|Native|Public]
	// Offset: 0x13b795a8
	// Params: [ Num(1) Size(0x8) ]
	void OnPreEndSequenceInternal(struct AGPSequenceActor* SequencePlayer);

	// Object: Function DFMQuest.QA_GPSequence.OnEndSequenceInternal
	// Flags: [Final|Native|Public]
	// Offset: 0x13b79504
	// Params: [ Num(1) Size(0x8) ]
	void OnEndSequenceInternal(struct AGPSequenceActor* SequencePlayer);

	// Object: Function DFMQuest.QA_GPSequence.OnBeginSequenceInternal
	// Flags: [Final|Native|Public]
	// Offset: 0x13b79460
	// Params: [ Num(1) Size(0x8) ]
	void OnBeginSequenceInternal(struct AGPSequenceActor* SequencePlayer);
	DEFINE_UE_CLASS_HELPERS(UQA_GPSequence, "QA_GPSequence")

};

// Object: Class DFMQuest.QA_GPSequenceEventListener
// Size: 0x70 (Inherited: 0x38)
struct UQA_GPSequenceEventListener : UGPQuestActionAsyncReturnActionBase
{
	struct FMulticastInlineDelegate OnSequenceEvent; // 0x38(0x10)
	uint8_t Pad_0x48[0x28]; // 0x48(0x28)


	// Object: Function DFMQuest.QA_GPSequenceEventListener.QA_ListenSequenceEvent
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x13b7a2c0
	// Params: [ Num(7) Size(0x28) ]
	static struct UQA_GPSequenceEventListener* QA_ListenSequenceEvent(struct AGPQuestActionContext* QAContext, struct FName QATag_GPSequenceActor_GPSequence, EGPSequenceCustomEvent EventName, struct FName EventSubName, EGPQuestActionScope Scope, uint8_t bOnce);

	// Object: Function DFMQuest.QA_GPSequenceEventListener.QA_FireSequenceEvent
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x13b7a0fc
	// Params: [ Num(6) Size(0x31) ]
	static void QA_FireSequenceEvent(struct AGPQuestActionContext* QAContext, struct FName QATag_GPSequenceActor_GPSequence, EGPSequenceCustomEvent EventName, struct FName EventSubName, struct FString EventArgs, EGPQuestActionScope Scope);

	// Object: Function DFMQuest.QA_GPSequenceEventListener.OnSequenceEventInternal
	// Flags: [Final|Native|Public]
	// Offset: 0x13b79f9c
	// Params: [ Num(4) Size(0x28) ]
	void OnSequenceEventInternal(struct AGPSequenceActor* SequencePlayer, EGPSequenceCustomEvent EventName, struct FName EventSubName, struct FString EventArgs);
	DEFINE_UE_CLASS_HELPERS(UQA_GPSequenceEventListener, "QA_GPSequenceEventListener")

};

// Object: Class DFMQuest.QA_GPCommonMediaPlayer
// Size: 0x78 (Inherited: 0x38)
struct UQA_GPCommonMediaPlayer : UGPQuestActionAsyncReturnActionBase
{
	struct FMulticastInlineDelegate OnBeginMedia; // 0x38(0x10)
	struct FMulticastInlineDelegate OnEndMedia; // 0x48(0x10)
	uint8_t Pad_0x58[0x20]; // 0x58(0x20)


	// Object: Function DFMQuest.QA_GPCommonMediaPlayer.QA_PlayCommonMedia
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x13b7a5b8
	// Params: [ Num(3) Size(0x18) ]
	static struct UQA_GPCommonMediaPlayer* QA_PlayCommonMedia(struct AGPQuestActionContext* QAContext, struct FName MediaName);

	// Object: Function DFMQuest.QA_GPCommonMediaPlayer.OnEndMediaInternal
	// Flags: [Final|Native|Public]
	// Offset: 0x13b7a5a4
	// Params: [ Num(0) Size(0x0) ]
	void OnEndMediaInternal();

	// Object: Function DFMQuest.QA_GPCommonMediaPlayer.OnBeginMediaInternal
	// Flags: [Final|Native|Public]
	// Offset: 0x13b7a4ac
	// Params: [ Num(1) Size(0x10) ]
	void OnBeginMediaInternal(struct FString OpenedUrl);
	DEFINE_UE_CLASS_HELPERS(UQA_GPCommonMediaPlayer, "QA_GPCommonMediaPlayer")

};

// Object: Class DFMQuest.QA_GPCommonMediaPlayer_Server
// Size: 0x90 (Inherited: 0x38)
struct UQA_GPCommonMediaPlayer_Server : UGPQuestActionAsyncReturnActionBase
{
	struct FMulticastInlineDelegate OnEndMedia; // 0x38(0x10)
	uint8_t Pad_0x48[0x48]; // 0x48(0x48)


	// Object: Function DFMQuest.QA_GPCommonMediaPlayer_Server.QA_PlayCommonMedia_Server
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x13b7a7a4
	// Params: [ Num(6) Size(0x28) ]
	static struct UQA_GPCommonMediaPlayer_Server* QA_PlayCommonMedia_Server(struct AGPQuestActionContext* QAContext, struct FName MediaName, float MediaLength, float Timeout, float DelayOutTime);

	// Object: Function DFMQuest.QA_GPCommonMediaPlayer_Server.OnTimeOut
	// Flags: [Final|Native|Protected]
	// Offset: 0x13b7a790
	// Params: [ Num(0) Size(0x0) ]
	void OnTimeOut();

	// Object: Function DFMQuest.QA_GPCommonMediaPlayer_Server.OnNotifyPlayerMediaEnd
	// Flags: [Final|Native|Public]
	// Offset: 0x13b7a6b0
	// Params: [ Num(2) Size(0x10) ]
	void OnNotifyPlayerMediaEnd(uint32_t MediaNameCrc, uint64_t PlayerUin);

	// Object: Function DFMQuest.QA_GPCommonMediaPlayer_Server.OnEndMediaInternal
	// Flags: [Final|Native|Protected]
	// Offset: 0x13b7a69c
	// Params: [ Num(0) Size(0x0) ]
	void OnEndMediaInternal();
	DEFINE_UE_CLASS_HELPERS(UQA_GPCommonMediaPlayer_Server, "QA_GPCommonMediaPlayer_Server")

};

// Object: Class DFMQuest.QA_GPSubtitleSequence
// Size: 0x68 (Inherited: 0x38)
struct UQA_GPSubtitleSequence : UGPQuestActionAsyncReturnActionBase
{
	struct FMulticastInlineDelegate OnBeginSubtitleSeq; // 0x38(0x10)
	struct FMulticastInlineDelegate OnEndSubtitleSeq; // 0x48(0x10)
	uint8_t Pad_0x58[0x10]; // 0x58(0x10)


	// Object: Function DFMQuest.QA_GPSubtitleSequence.QA_GPSubtitleSequenceWithTeamIds
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x13b7ad2c
	// Params: [ Num(6) Size(0x38) ]
	static struct UQA_GPSubtitleSequence* QA_GPSubtitleSequenceWithTeamIds(struct AGPQuestActionContext* QAContext, const struct FName& SubtitleSeqId, ESubtitleSequenceType SubtitleSeqType, struct TArray<int32_t> TeamIds, struct AActor* SpeakerActor);

	// Object: Function DFMQuest.QA_GPSubtitleSequence.QA_GPSubtitleSequence
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x13b7abc4
	// Params: [ Num(5) Size(0x28) ]
	static struct UQA_GPSubtitleSequence* QA_GPSubtitleSequence(struct AGPQuestActionContext* QAContext, const struct FName& SubtitleSeqId, ESubtitleSequenceType SubtitleSeqType, struct AActor* SpeakerActor);

	// Object: Function DFMQuest.QA_GPSubtitleSequence.OnEndSubtitleSeqInternal
	// Flags: [Final|Native|Public|HasOutParms]
	// Offset: 0x13b7aa80
	// Params: [ Num(1) Size(0xA8) ]
	void OnEndSubtitleSeqInternal(const struct FSubtitleSequenceInfo& SubtitleSeqInfo);

	// Object: Function DFMQuest.QA_GPSubtitleSequence.OnBeginSubtitleSeqInternal
	// Flags: [Final|Native|Public|HasOutParms]
	// Offset: 0x13b7a93c
	// Params: [ Num(1) Size(0xA8) ]
	void OnBeginSubtitleSeqInternal(const struct FSubtitleSequenceInfo& SubtitleSeqInfo);
	DEFINE_UE_CLASS_HELPERS(UQA_GPSubtitleSequence, "QA_GPSubtitleSequence")

};

// Object: Class DFMQuest.QA_HealthListener
// Size: 0x68 (Inherited: 0x38)
struct UQA_HealthListener : UGPQuestActionAsyncReturnActionBase
{
	struct FMulticastInlineDelegate OnHealthChanged; // 0x38(0x10)
	uint8_t Pad_0x48[0x20]; // 0x48(0x20)


	// Object: Function DFMQuest.QA_HealthListener.QA_HealthListener
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x13b7cadc
	// Params: [ Num(5) Size(0x20) ]
	static struct UQA_HealthListener* QA_HealthListener(struct AGPQuestActionContext* QAContext, struct FName QATag_, EGPQuestActionCompareOperator Compare, float Percent);

	// Object: Function DFMQuest.QA_HealthListener.FireReturnAction
	// Flags: [Final|Native|Public]
	// Offset: 0x13b7c9c4
	// Params: [ Num(3) Size(0x10) ]
	void FireReturnAction(struct AActor* Owner, int32_t CurrentValue, int32_t MaxValue);
	DEFINE_UE_CLASS_HELPERS(UQA_HealthListener, "QA_HealthListener")

};

// Object: Class DFMQuest.QA_CharacterBuffListener
// Size: 0x68 (Inherited: 0x38)
struct UQA_CharacterBuffListener : UGPQuestActionAsyncReturnActionBase
{
	struct FMulticastInlineDelegate OnCharacterBuffChanged; // 0x38(0x10)
	uint8_t Pad_0x48[0x20]; // 0x48(0x20)


	// Object: Function DFMQuest.QA_CharacterBuffListener.QA_CharacterBuffListener
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x13b7cd18
	// Params: [ Num(5) Size(0x20) ]
	static struct UQA_CharacterBuffListener* QA_CharacterBuffListener(struct AGPQuestActionContext* QAContext, struct AActor* CHARACTER, int32_t BuffId, uint8_t bListenAdd);

	// Object: Function DFMQuest.QA_CharacterBuffListener.FireReturnAction
	// Flags: [Final|Native|Public]
	// Offset: 0x13b7cc38
	// Params: [ Num(2) Size(0x5) ]
	void FireReturnAction(uint32_t BuffId, ECharacterPart CharacterPart);
	DEFINE_UE_CLASS_HELPERS(UQA_CharacterBuffListener, "QA_CharacterBuffListener")

};

// Object: Class DFMQuest.QA_InAreaPlayerListener
// Size: 0x88 (Inherited: 0x38)
struct UQA_InAreaPlayerListener : UGPQuestActionAsyncReturnActionBase
{
	struct FMulticastInlineDelegate OnFailed; // 0x38(0x10)
	struct FMulticastInlineDelegate NtfDFMPlayerCharacters; // 0x48(0x10)
	uint8_t Pad_0x58[0x30]; // 0x58(0x30)


	// Object: Function DFMQuest.QA_InAreaPlayerListener.QA_InAreaPlayerListener
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x13b7cf90
	// Params: [ Num(6) Size(0x28) ]
	static struct UQA_InAreaPlayerListener* QA_InAreaPlayerListener(struct AGPQuestActionContext* QAContext, struct FName QATag, float FailedTimeLimit, float FixedNtfTimeStep, uint8_t bOnceForFailed);

	// Object: Function DFMQuest.QA_InAreaPlayerListener.NtfStatInAreaPlayers
	// Flags: [Final|Native|Protected]
	// Offset: 0x13b7ce98
	// Params: [ Num(1) Size(0x10) ]
	void NtfStatInAreaPlayers(struct TArray<struct ADFMPlayerCharacter*> DFMPlayerCharacters);

	// Object: Function DFMQuest.QA_InAreaPlayerListener.NtfListenerFailed
	// Flags: [Final|Native|Protected]
	// Offset: 0x13b7ce84
	// Params: [ Num(0) Size(0x0) ]
	void NtfListenerFailed();
	DEFINE_UE_CLASS_HELPERS(UQA_InAreaPlayerListener, "QA_InAreaPlayerListener")

};

// Object: Class DFMQuest.QA_InteractorController
// Size: 0x98 (Inherited: 0x38)
struct UQA_InteractorController : UGPQuestActionAsyncReturnActionBase
{
	struct FMulticastInlineDelegate OnActivated; // 0x38(0x10)
	struct FMulticastInlineDelegate OnDeactivated; // 0x48(0x10)
	struct FMulticastInlineDelegate OnSucceed; // 0x58(0x10)
	struct FMulticastInlineDelegate OnFailed; // 0x68(0x10)
	uint8_t Pad_0x78[0x20]; // 0x78(0x20)


	// Object: Function DFMQuest.QA_InteractorController.QA_InteractorController
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x13b7d25c
	// Params: [ Num(5) Size(0x20) ]
	static struct UQA_InteractorController* QA_InteractorController(struct AGPQuestActionContext* QAContext, struct FName QATag_GPQuestInteractorInterface_InteractorTag, EQA_InteractorControllerOption Option, EGPQuestActionScope Scope);

	// Object: Function DFMQuest.QA_InteractorController.OnInteractorStatusChanged
	// Flags: [Final|Native|Public]
	// Offset: 0x13b7d1a8
	// Params: [ Num(1) Size(0x10) ]
	void OnInteractorStatusChanged(struct TScriptInterface<IGPQuestInteractorInterface> Interactor);
	DEFINE_UE_CLASS_HELPERS(UQA_InteractorController, "QA_InteractorController")

};

// Object: Class DFMQuest.QA_InteractorStatusListener
// Size: 0x80 (Inherited: 0x38)
struct UQA_InteractorStatusListener : UGPQuestActionAsyncReturnActionBase
{
	struct FMulticastInlineDelegate OnStartInteractAnimDelegate; // 0x38(0x10)
	struct FMulticastInlineDelegate OnDoInteractDelegate; // 0x48(0x10)
	uint8_t Pad_0x58[0x28]; // 0x58(0x28)


	// Object: Function DFMQuest.QA_InteractorStatusListener.QA_InteractorStatusListener
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x13b7d73c
	// Params: [ Num(7) Size(0x28) ]
	static struct UQA_InteractorStatusListener* QA_InteractorStatusListener(struct AGPQuestActionContext* InQAContext, struct FName InteractorTag, struct FName ReleaseParams, uint8_t Once, uint8_t OnlyTemateCanInteract, uint8_t OnlyReceiveContractTeamInteract);

	// Object: Function DFMQuest.QA_InteractorStatusListener.FireOnStartInteractAnim
	// Flags: [Final|Native|Public]
	// Offset: 0x13b7d580
	// Params: [ Num(4) Size(0x28) ]
	void FireOnStartInteractAnim(uint64_t Uin, struct AActor* Actor, EInteractorType InteractorType, struct FString Params);

	// Object: Function DFMQuest.QA_InteractorStatusListener.FireOnDoInteract
	// Flags: [Final|Native|Public]
	// Offset: 0x13b7d3c4
	// Params: [ Num(4) Size(0x28) ]
	void FireOnDoInteract(uint64_t Uin, struct AActor* Actor, EInteractorType InteractorType, struct FString Params);
	DEFINE_UE_CLASS_HELPERS(UQA_InteractorStatusListener, "QA_InteractorStatusListener")

};

// Object: Class DFMQuest.QA_InteractorButtonShownListener
// Size: 0x60 (Inherited: 0x38)
struct UQA_InteractorButtonShownListener : UGPQuestActionAsyncReturnActionBase
{
	struct FMulticastInlineDelegate OnButtonShow; // 0x38(0x10)
	uint8_t Pad_0x48[0x18]; // 0x48(0x18)


	// Object: Function DFMQuest.QA_InteractorButtonShownListener.QA_InteractorButtonShownListener
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x13b7da8c
	// Params: [ Num(4) Size(0x20) ]
	static struct UQA_InteractorButtonShownListener* QA_InteractorButtonShownListener(struct AGPQuestActionContext* QAContext, struct FName InteractorTag, uint8_t Once);

	// Object: Function DFMQuest.QA_InteractorButtonShownListener.QA_InteractorButtonListenerStop
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x13b7d9f8
	// Params: [ Num(1) Size(0x8) ]
	static void QA_InteractorButtonListenerStop(struct AGPQuestActionContext* QAContext);

	// Object: Function DFMQuest.QA_InteractorButtonShownListener.OnInteractorButtonShown
	// Flags: [Final|Native|Public]
	// Offset: 0x13b7d954
	// Params: [ Num(1) Size(0x1) ]
	void OnInteractorButtonShown(ELootingStatus Status);
	DEFINE_UE_CLASS_HELPERS(UQA_InteractorButtonShownListener, "QA_InteractorButtonShownListener")

};

// Object: Class DFMQuest.QA_TutorialLootingListener
// Size: 0x78 (Inherited: 0x38)
struct UQA_TutorialLootingListener : UGPQuestActionAsyncReturnActionBase
{
	struct FMulticastInlineDelegate OnButtonShow; // 0x38(0x10)
	struct FMulticastInlineDelegate OnLootingBegin; // 0x48(0x10)
	struct FMulticastInlineDelegate OnLootingEnd; // 0x58(0x10)
	uint8_t Pad_0x68[0x10]; // 0x68(0x10)


	// Object: Function DFMQuest.QA_TutorialLootingListener.QA_TutorialLootingListener
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x13b7dc64
	// Params: [ Num(4) Size(0x20) ]
	static struct UQA_TutorialLootingListener* QA_TutorialLootingListener(struct AGPQuestActionContext* QAContext, struct AActor* InteractorActor, int32_t LootingAiIndex);

	// Object: Function DFMQuest.QA_TutorialLootingListener.OnTutorialLootingStatusChanged
	// Flags: [Final|Native|Public]
	// Offset: 0x13b7dbc0
	// Params: [ Num(1) Size(0x1) ]
	void OnTutorialLootingStatusChanged(ELootingStatus Status);
	DEFINE_UE_CLASS_HELPERS(UQA_TutorialLootingListener, "QA_TutorialLootingListener")

};

// Object: Class DFMQuest.QA_TutorialMapGuideListener
// Size: 0x60 (Inherited: 0x38)
struct UQA_TutorialMapGuideListener : UGPQuestActionAsyncReturnActionBase
{
	struct FMulticastInlineDelegate OnMiniMapGuideFinished; // 0x38(0x10)
	struct FMulticastInlineDelegate OnBigMapGuideFinished; // 0x48(0x10)
	uint8_t Pad_0x58[0x8]; // 0x58(0x8)


	// Object: Function DFMQuest.QA_TutorialMapGuideListener.QA_TutorialMapGuideListener
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x13b7de30
	// Params: [ Num(2) Size(0x10) ]
	static struct UQA_TutorialMapGuideListener* QA_TutorialMapGuideListener(struct AGPQuestActionContext* QAContext);

	// Object: Function DFMQuest.QA_TutorialMapGuideListener.OnTutorialMapGuideChanged
	// Flags: [Final|Native|Public]
	// Offset: 0x13b7dd84
	// Params: [ Num(1) Size(0x1) ]
	void OnTutorialMapGuideChanged(uint8_t bBigMapGuideFinished);
	DEFINE_UE_CLASS_HELPERS(UQA_TutorialMapGuideListener, "QA_TutorialMapGuideListener")

};

// Object: Class DFMQuest.QA_MorseCodeSuccessListener
// Size: 0x60 (Inherited: 0x38)
struct UQA_MorseCodeSuccessListener : UGPQuestActionAsyncReturnActionBase
{
	struct FMulticastInlineDelegate OnMorseCodeSuccessDelegate; // 0x38(0x10)
	uint8_t Pad_0x48[0x18]; // 0x48(0x18)


	// Object: Function DFMQuest.QA_MorseCodeSuccessListener.QA_MorseCodeSuccessListener
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x13b7e008
	// Params: [ Num(3) Size(0x18) ]
	static struct UQA_MorseCodeSuccessListener* QA_MorseCodeSuccessListener(struct AGPQuestActionContext* InQAContext, struct FName InteractorTag);

	// Object: Function DFMQuest.QA_MorseCodeSuccessListener.FireMorseCodeSuccess
	// Flags: [Final|Native|Public]
	// Offset: 0x13b7dee8
	// Params: [ Num(3) Size(0x18) ]
	void FireMorseCodeSuccess(uint8_t bSuccess, struct AActor* Actor, uint64_t Uin);
	DEFINE_UE_CLASS_HELPERS(UQA_MorseCodeSuccessListener, "QA_MorseCodeSuccessListener")

};

// Object: Class DFMQuest.QA_PortalDoorListener
// Size: 0x68 (Inherited: 0x38)
struct UQA_PortalDoorListener : UGPQuestActionAsyncReturnActionBase
{
	struct FMulticastInlineDelegate OnTogglePortalDoorDelegate; // 0x38(0x10)
	uint8_t Pad_0x48[0x20]; // 0x48(0x20)


	// Object: Function DFMQuest.QA_PortalDoorListener.QA_PortalDoorListener
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x13b7e1d4
	// Params: [ Num(4) Size(0x20) ]
	static struct UQA_PortalDoorListener* QA_PortalDoorListener(struct AGPQuestActionContext* QAContext, struct FName PortalDoorTag, uint8_t bListenMultiTimes);

	// Object: Function DFMQuest.QA_PortalDoorListener.FirePortalDoorToggled
	// Flags: [Final|Native|Public]
	// Offset: 0x13b7e0f8
	// Params: [ Num(2) Size(0x10) ]
	void FirePortalDoorToggled(struct AActor* PortalDoor, struct AGPCharacter* PlayerChara);
	DEFINE_UE_CLASS_HELPERS(UQA_PortalDoorListener, "QA_PortalDoorListener")

};

// Object: Class DFMQuest.QA_HackPcOperationWillEnableTimeFinishListener
// Size: 0x60 (Inherited: 0x38)
struct UQA_HackPcOperationWillEnableTimeFinishListener : UGPQuestActionAsyncReturnActionBase
{
	struct FMulticastInlineDelegate OnHackPcOperationWillEnableTimeFinishDelegate; // 0x38(0x10)
	uint8_t Pad_0x48[0x18]; // 0x48(0x18)


	// Object: Function DFMQuest.QA_HackPcOperationWillEnableTimeFinishListener.QA_HackPcOperationWillEnableTimeFinishListener
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x13b7e3ac
	// Params: [ Num(3) Size(0x18) ]
	static struct UQA_HackPcOperationWillEnableTimeFinishListener* QA_HackPcOperationWillEnableTimeFinishListener(struct AGPQuestActionContext* InQAContext, struct FName InteractorTag);

	// Object: Function DFMQuest.QA_HackPcOperationWillEnableTimeFinishListener.OnBraveGameHackPcTimeFinish
	// Flags: [Final|Native|Public]
	// Offset: 0x13b7e308
	// Params: [ Num(1) Size(0x8) ]
	void OnBraveGameHackPcTimeFinish(struct AActor* Actor);
	DEFINE_UE_CLASS_HELPERS(UQA_HackPcOperationWillEnableTimeFinishListener, "QA_HackPcOperationWillEnableTimeFinishListener")

};

// Object: Class DFMQuest.QA_LevelSequenceActingOnPauseTrigger
// Size: 0x68 (Inherited: 0x38)
struct UQA_LevelSequenceActingOnPauseTrigger : UGPQuestActionAsyncReturnActionBase
{
	uint8_t Pad_0x38[0x20]; // 0x38(0x20)
	struct FMulticastInlineDelegate OnTriggerPause; // 0x58(0x10)


	// Object: Function DFMQuest.QA_LevelSequenceActingOnPauseTrigger.QA_LevelSequenceActingOnPauseTrigger
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x13b7e4a4
	// Params: [ Num(6) Size(0x28) ]
	static struct UQA_LevelSequenceActingOnPauseTrigger* QA_LevelSequenceActingOnPauseTrigger(struct AGPQuestActionContext* QAContext, struct AActor* ActorClass, struct FName ActorTag, uint8_t bOnce, EGPQuestActionScope Scope);

	// Object: Function DFMQuest.QA_LevelSequenceActingOnPauseTrigger.OnPauseTriggered
	// Flags: [Final|Native|Public]
	// Offset: 0x13b7e490
	// Params: [ Num(0) Size(0x0) ]
	void OnPauseTriggered();
	DEFINE_UE_CLASS_HELPERS(UQA_LevelSequenceActingOnPauseTrigger, "QA_LevelSequenceActingOnPauseTrigger")

};

// Object: Class DFMQuest.QA_ListenPlayerOffBattle
// Size: 0x88 (Inherited: 0x38)
struct UQA_ListenPlayerOffBattle : UGPQuestActionAsyncReturnActionBase
{
	struct FMulticastInlineDelegate OffBattle; // 0x38(0x10)
	struct FMulticastInlineDelegate OnBattle; // 0x48(0x10)
	uint8_t Pad_0x58[0x30]; // 0x58(0x30)


	// Object: Function DFMQuest.QA_ListenPlayerOffBattle.QA_ListenPlayerOffBattle
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x13b7e664
	// Params: [ Num(4) Size(0x20) ]
	static struct UQA_ListenPlayerOffBattle* QA_ListenPlayerOffBattle(struct AGPQuestActionContext* QAContext, struct AGPCharacter* GPCharacter, float OffBattleTime);

	// Object: Function DFMQuest.QA_ListenPlayerOffBattle.FireReturnAction
	// Flags: [Final|Native|Public]
	// Offset: 0x13b7e650
	// Params: [ Num(0) Size(0x0) ]
	void FireReturnAction();
	DEFINE_UE_CLASS_HELPERS(UQA_ListenPlayerOffBattle, "QA_ListenPlayerOffBattle")

};

// Object: Class DFMQuest.QA_LootingDeadBodyListener
// Size: 0x70 (Inherited: 0x38)
struct UQA_LootingDeadBodyListener : UGPQuestActionAsyncReturnActionBase
{
	struct AGPQuestActionContext* QAContext; // 0x38(0x8)
	uint8_t Pad_0x40[0x8]; // 0x40(0x8)
	struct TArray<struct AActor*> DeadBodyActors; // 0x48(0x10)
	uint8_t Pad_0x58[0x8]; // 0x58(0x8)
	struct FMulticastInlineDelegate OnLootingDeadBody; // 0x60(0x10)


	// Object: Function DFMQuest.QA_LootingDeadBodyListener.QA_LootingDeadBodyListener
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x13b7e940
	// Params: [ Num(3) Size(0x18) ]
	static struct UQA_LootingDeadBodyListener* QA_LootingDeadBodyListener(struct AGPQuestActionContext* QAContext, struct FName SourceTag);

	// Object: Function DFMQuest.QA_LootingDeadBodyListener.NtfOwnerSearchDeadBody
	// Flags: [Final|Native|Public]
	// Offset: 0x13b7e784
	// Params: [ Num(4) Size(0x28) ]
	void NtfOwnerSearchDeadBody(uint64_t Uin, struct AActor* Actor, EInteractorType InteractorType, struct FString Params);
	DEFINE_UE_CLASS_HELPERS(UQA_LootingDeadBodyListener, "QA_LootingDeadBodyListener")

};

// Object: Class DFMQuest.QA_LootingListener
// Size: 0x68 (Inherited: 0x38)
struct UQA_LootingListener : UGPQuestActionAsyncReturnActionBase
{
	struct AGPQuestActionContext* QAContext; // 0x38(0x8)
	uint8_t Pad_0x40[0x8]; // 0x40(0x8)
	struct AGPCharacter* ListenPlayer; // 0x48(0x8)
	uint8_t Pad_0x50[0x8]; // 0x50(0x8)
	struct FMulticastInlineDelegate OnLooting; // 0x58(0x10)


	// Object: Function DFMQuest.QA_LootingListener.QA_PlayerLootingItemListener
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x13b7ed70
	// Params: [ Num(5) Size(0x28) ]
	static struct UQA_LootingListener* QA_PlayerLootingItemListener(struct AGPQuestActionContext* QAContext, struct AGPCharacter* ListenPlayer, struct FName SourceTag, uint8_t bOnce);

	// Object: Function DFMQuest.QA_LootingListener.QA_LootingListener
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x13b7ec94
	// Params: [ Num(3) Size(0x18) ]
	static struct UQA_LootingListener* QA_LootingListener(struct AGPQuestActionContext* QAContext, struct FName SourceTag);

	// Object: Function DFMQuest.QA_LootingListener.OnServerItemMoveCmd
	// Flags: [Final|Native|Public]
	// Offset: 0x13b7ea24
	// Params: [ Num(1) Size(0x148) ]
	void OnServerItemMoveCmd(struct FItemMoveCmd ItemMoveCmd);
	DEFINE_UE_CLASS_HELPERS(UQA_LootingListener, "QA_LootingListener")

};

// Object: Class DFMQuest.QA_MultiTriggerListener
// Size: 0x90 (Inherited: 0x38)
struct UQA_MultiTriggerListener : UGPQuestActionAsyncReturnActionBase
{
	struct FMulticastInlineDelegate OnTriggerActorTypeA; // 0x38(0x10)
	struct FMulticastInlineDelegate OnTriggerActorTypeB; // 0x48(0x10)
	uint8_t Pad_0x58[0x38]; // 0x58(0x38)


	// Object: Function DFMQuest.QA_MultiTriggerListener.QA_MultiTriggerListener
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x13b7f1e8
	// Params: [ Num(9) Size(0x38) ]
	static struct UQA_MultiTriggerListener* QA_MultiTriggerListener(struct AGPQuestActionContext* QAContext, EGPQuestActionTriggerType Type, struct FName QATag_, struct AActor* ActorTypeA, struct AActor* ActorTypeB, EQA_TriggerListenerOption Option, EGPQuestActionScope Scope, uint8_t bOnce);

	// Object: Function DFMQuest.QA_MultiTriggerListener.FireReturnAction_Overlap
	// Flags: [Final|Native|Public]
	// Offset: 0x13b7f10c
	// Params: [ Num(2) Size(0x10) ]
	void FireReturnAction_Overlap(struct AActor* Trigger, struct AActor* OtherActor);

	// Object: Function DFMQuest.QA_MultiTriggerListener.FireReturnAction_Hit
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults]
	// Offset: 0x13b7ef90
	// Params: [ Num(4) Size(0xA4) ]
	void FireReturnAction_Hit(struct AActor* Trigger, struct AActor* OtherActor, struct FVector NormalImpulse, const struct FHitResult& Hit);
	DEFINE_UE_CLASS_HELPERS(UQA_MultiTriggerListener, "QA_MultiTriggerListener")

};

// Object: Class DFMQuest.QA_PlayerDeathListener
// Size: 0x58 (Inherited: 0x38)
struct UQA_PlayerDeathListener : UGPQuestActionAsyncReturnActionBase
{
	struct FMulticastInlineDelegate OnPlayerDied; // 0x38(0x10)
	uint8_t Pad_0x48[0x10]; // 0x48(0x10)


	// Object: Function DFMQuest.QA_PlayerDeathListener.QA_PlayerDeathListener
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x13b7f4ec
	// Params: [ Num(3) Size(0x18) ]
	static struct UQA_PlayerDeathListener* QA_PlayerDeathListener(struct AGPQuestActionContext* QAContext, uint8_t bOnce);

	// Object: Function DFMQuest.QA_PlayerDeathListener.FireReturnAction
	// Flags: [Final|Native|Public]
	// Offset: 0x13b7f448
	// Params: [ Num(1) Size(0x8) ]
	void FireReturnAction(struct ADFMPlayerController* PlayerController);
	DEFINE_UE_CLASS_HELPERS(UQA_PlayerDeathListener, "QA_PlayerDeathListener")

};

// Object: Class DFMQuest.QA_PlayerExitListener
// Size: 0x98 (Inherited: 0x38)
struct UQA_PlayerExitListener : UGPQuestActionAsyncReturnActionBase
{
	struct FMulticastInlineDelegate OnStart; // 0x38(0x10)
	struct FMulticastInlineDelegate OnCancel; // 0x48(0x10)
	struct FMulticastInlineDelegate OnEscaping; // 0x58(0x10)
	struct FMulticastInlineDelegate OnEscaped; // 0x68(0x10)
	uint8_t Pad_0x78[0x20]; // 0x78(0x20)


	// Object: Function DFMQuest.QA_PlayerExitListener.QA_PlayerExitListener
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x13b7f9f8
	// Params: [ Num(4) Size(0x20) ]
	static struct UQA_PlayerExitListener* QA_PlayerExitListener(struct AGPQuestActionContext* QAContext, struct ACHARACTER* Player, struct FName QATag);

	// Object: Function DFMQuest.QA_PlayerExitListener.QA_ActivePlayerExit
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x13b7f8e8
	// Params: [ Num(3) Size(0x11) ]
	static void QA_ActivePlayerExit(struct AGPQuestActionContext* QAContext, struct FName QATag, uint8_t bActive);

	// Object: Function DFMQuest.QA_PlayerExitListener.OnPlayerStartEscape
	// Flags: [Final|Native|Protected]
	// Offset: 0x13b7f844
	// Params: [ Num(1) Size(0x8) ]
	void OnPlayerStartEscape(struct ACHARACTER* Player);

	// Object: Function DFMQuest.QA_PlayerExitListener.OnPlayerEscaping
	// Flags: [Final|Native|Protected]
	// Offset: 0x13b7f768
	// Params: [ Num(2) Size(0x10) ]
	void OnPlayerEscaping(struct ACHARACTER* CHARACTER, struct AController* Controller);

	// Object: Function DFMQuest.QA_PlayerExitListener.OnPlayerEscaped
	// Flags: [Final|Native|Protected]
	// Offset: 0x13b7f68c
	// Params: [ Num(2) Size(0x10) ]
	void OnPlayerEscaped(struct ACHARACTER* Player, struct AController* Controller);

	// Object: Function DFMQuest.QA_PlayerExitListener.OnPlayerCancelEscape
	// Flags: [Final|Native|Protected]
	// Offset: 0x13b7f5e8
	// Params: [ Num(1) Size(0x8) ]
	void OnPlayerCancelEscape(struct ACHARACTER* Player);
	DEFINE_UE_CLASS_HELPERS(UQA_PlayerExitListener, "QA_PlayerExitListener")

};

// Object: Class DFMQuest.QA_PlayerSafePathListener
// Size: 0x78 (Inherited: 0x38)
struct UQA_PlayerSafePathListener : UGPQuestActionAsyncReturnActionBase
{
	struct FMulticastInlineDelegate OnEnterSafePath; // 0x38(0x10)
	struct FMulticastInlineDelegate OnLeaveSafePath; // 0x48(0x10)
	uint8_t Pad_0x58[0x20]; // 0x58(0x20)


	// Object: Function DFMQuest.QA_PlayerSafePathListener.QA_PlayerSafePathListener
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x13b81568
	// Params: [ Num(5) Size(0x20) ]
	static struct UQA_PlayerSafePathListener* QA_PlayerSafePathListener(struct AGPQuestActionContext* QAContext, EQA_PlayerSafePathListenerOption Option, struct FName QATag_GPPlayerSafePathListener_PlayerSafePathListener, EGPQuestActionScope Scope);

	// Object: Function DFMQuest.QA_PlayerSafePathListener.OnLeaveSafePathInternal
	// Flags: [Final|Native|Public]
	// Offset: 0x13b814c4
	// Params: [ Num(1) Size(0x8) ]
	void OnLeaveSafePathInternal(struct ACHARACTER* CHARACTER);

	// Object: Function DFMQuest.QA_PlayerSafePathListener.OnEnterSafePathInternal
	// Flags: [Final|Native|Public]
	// Offset: 0x13b81420
	// Params: [ Num(1) Size(0x8) ]
	void OnEnterSafePathInternal(struct ACHARACTER* CHARACTER);
	DEFINE_UE_CLASS_HELPERS(UQA_PlayerSafePathListener, "QA_PlayerSafePathListener")

};

// Object: Class DFMQuest.QA_PlayersChaseTargetListener
// Size: 0x90 (Inherited: 0x38)
struct UQA_PlayersChaseTargetListener : UGPQuestActionAsyncReturnActionBase
{
	uint8_t Pad_0x38[0x18]; // 0x38(0x18)
	struct FMulticastInlineDelegate OnEnterTargetZone; // 0x50(0x10)
	struct FMulticastInlineDelegate OnEnterSafeZone; // 0x60(0x10)
	struct FMulticastInlineDelegate OnEnterWarningZone; // 0x70(0x10)
	struct FMulticastInlineDelegate OnEnterFailZone; // 0x80(0x10)


	// Object: Function DFMQuest.QA_PlayersChaseTargetListener.QA_PlayersChaseTargetListener
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x13b81718
	// Params: [ Num(8) Size(0x30) ]
	static struct UQA_PlayersChaseTargetListener* QA_PlayersChaseTargetListener(struct AGPQuestActionContext* QAContext, struct AActor* TargetClass, EPlayersChaseTargetMode CheckMode, struct FName QATag_TargetTag, float TargetThreshold, float WarningThreshold, float FailThreshold);

	// Object: Function DFMQuest.QA_PlayersChaseTargetListener.OnPlayerEnterWarningZone
	// Flags: [Final|Native|Public]
	// Offset: 0x13b81704
	// Params: [ Num(0) Size(0x0) ]
	void OnPlayerEnterWarningZone();

	// Object: Function DFMQuest.QA_PlayersChaseTargetListener.OnPlayerEnterTargetZone
	// Flags: [Final|Native|Public]
	// Offset: 0x13b816f0
	// Params: [ Num(0) Size(0x0) ]
	void OnPlayerEnterTargetZone();

	// Object: Function DFMQuest.QA_PlayersChaseTargetListener.OnPlayerEnterSafeZone
	// Flags: [Final|Native|Public]
	// Offset: 0x13b816dc
	// Params: [ Num(0) Size(0x0) ]
	void OnPlayerEnterSafeZone();

	// Object: Function DFMQuest.QA_PlayersChaseTargetListener.OnPlayerEnterFailZone
	// Flags: [Final|Native|Public]
	// Offset: 0x13b816c8
	// Params: [ Num(0) Size(0x0) ]
	void OnPlayerEnterFailZone();
	DEFINE_UE_CLASS_HELPERS(UQA_PlayersChaseTargetListener, "QA_PlayersChaseTargetListener")

};

// Object: Class DFMQuest.QA_PlayerSkillListener
// Size: 0x80 (Inherited: 0x38)
struct UQA_PlayerSkillListener : UGPQuestActionAsyncReturnActionBase
{
	struct FMulticastInlineDelegate OnSwitchToBow; // 0x38(0x10)
	struct FMulticastInlineDelegate OnTrigger; // 0x48(0x10)
	struct FMulticastInlineDelegate OnFailed; // 0x58(0x10)
	uint8_t Pad_0x68[0x18]; // 0x68(0x18)


	// Object: Function DFMQuest.QA_PlayerSkillListener.QA_OnWeaponBowBeginFire
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x13b81e88
	// Params: [ Num(2) Size(0x10) ]
	static struct UQA_PlayerSkillListener* QA_OnWeaponBowBeginFire(struct AGPQuestActionContext* QAContext);

	// Object: Function DFMQuest.QA_PlayerSkillListener.QA_OnSkillBeginTrigger
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x13b81d6c
	// Params: [ Num(4) Size(0x20) ]
	static struct UQA_PlayerSkillListener* QA_OnSkillBeginTrigger(struct AGPQuestActionContext* QAContext, int32_t SkillId, struct AGPCharacter* Player);

	// Object: Function DFMQuest.QA_PlayerSkillListener.QA_OnDetectorArrowSucceed
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x13b81c4c
	// Params: [ Num(4) Size(0x20) ]
	static struct UQA_PlayerSkillListener* QA_OnDetectorArrowSucceed(struct AGPQuestActionContext* QAContext, struct AGPCharacter* Player, uint8_t bUntilSuccess);

	// Object: Function DFMQuest.QA_PlayerSkillListener.OnWeaponSwitchToBow
	// Flags: [Final|Native|Protected]
	// Offset: 0x13b81c38
	// Params: [ Num(0) Size(0x0) ]
	void OnWeaponSwitchToBow();

	// Object: Function DFMQuest.QA_PlayerSkillListener.OnSkillSucceed
	// Flags: [Final|Native|Protected]
	// Offset: 0x13b81b94
	// Params: [ Num(1) Size(0x8) ]
	void OnSkillSucceed(int64_t EffectNum);

	// Object: Function DFMQuest.QA_PlayerSkillListener.OnSkillEnd
	// Flags: [Final|Native|Protected]
	// Offset: 0x13b81af0
	// Params: [ Num(1) Size(0x8) ]
	void OnSkillEnd(int64_t EffectNum);

	// Object: Function DFMQuest.QA_PlayerSkillListener.OnSkillCast
	// Flags: [Final|Native|Protected]
	// Offset: 0x13b819d0
	// Params: [ Num(3) Size(0x9) ]
	void OnSkillCast(ECharingSlot Slot, int32_t SkillId, uint8_t CastOrEnd);

	// Object: Function DFMQuest.QA_PlayerSkillListener.OnChargeGunStateChanged
	// Flags: [Final|Native|Protected]
	// Offset: 0x13b81924
	// Params: [ Num(1) Size(0x1) ]
	void OnChargeGunStateChanged(uint8_t bIsCharging);
	DEFINE_UE_CLASS_HELPERS(UQA_PlayerSkillListener, "QA_PlayerSkillListener")

};

// Object: Class DFMQuest.QA_DetectorArrowFireListener
// Size: 0x58 (Inherited: 0x38)
struct UQA_DetectorArrowFireListener : UGPQuestActionAsyncReturnActionBase
{
	struct FMulticastInlineDelegate OnBowBeginFire; // 0x38(0x10)
	uint8_t Pad_0x48[0x10]; // 0x48(0x10)


	// Object: Function DFMQuest.QA_DetectorArrowFireListener.QA_DetectorArrowFireListener
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x13b8201c
	// Params: [ Num(3) Size(0x18) ]
	static struct UQA_DetectorArrowFireListener* QA_DetectorArrowFireListener(struct AGPQuestActionContext* QAContext, struct AGPCharacter* Player);

	// Object: Function DFMQuest.QA_DetectorArrowFireListener.OnSkillBeginFire
	// Flags: [Final|Native|Protected]
	// Offset: 0x13b82008
	// Params: [ Num(0) Size(0x0) ]
	void OnSkillBeginFire();
	DEFINE_UE_CLASS_HELPERS(UQA_DetectorArrowFireListener, "QA_DetectorArrowFireListener")

};

// Object: Class DFMQuest.QA_PlayerTransitionMove
// Size: 0x78 (Inherited: 0x38)
struct UQA_PlayerTransitionMove : UGPQuestActionAsyncReturnActionBase
{
	struct FMulticastInlineDelegate OnTransitionMoveBegin; // 0x38(0x10)
	struct FMulticastInlineDelegate OnTransitionMoveEnd; // 0x48(0x10)
	uint8_t Pad_0x58[0x20]; // 0x58(0x20)


	// Object: Function DFMQuest.QA_PlayerTransitionMove.QA_StartTransitionMove
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x13b82358
	// Params: [ Num(5) Size(0x28) ]
	static struct UQA_PlayerTransitionMove* QA_StartTransitionMove(struct AGPQuestActionContext* QAContext, struct AGPCharacter* Player, struct FName QATag, EGPQuestActionScope Scope);

	// Object: Function DFMQuest.QA_PlayerTransitionMove.QA_AccurateInteractListener
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x13b82204
	// Params: [ Num(5) Size(0x28) ]
	static struct UQA_PlayerTransitionMove* QA_AccurateInteractListener(struct AGPQuestActionContext* QAContext, struct AGPCharacter* Player, struct FName QATag, EGPQuestActionScope Scope);

	// Object: Function DFMQuest.QA_PlayerTransitionMove.OnPlayerTransitionMoveEnd
	// Flags: [Final|Native|Protected]
	// Offset: 0x13b821f0
	// Params: [ Num(0) Size(0x0) ]
	void OnPlayerTransitionMoveEnd();

	// Object: Function DFMQuest.QA_PlayerTransitionMove.OnPlayerTransitionMoveBegin
	// Flags: [Final|Native|Protected]
	// Offset: 0x13b821dc
	// Params: [ Num(0) Size(0x0) ]
	void OnPlayerTransitionMoveBegin();

	// Object: Function DFMQuest.QA_PlayerTransitionMove.OnPlayerAccurateInteract
	// Flags: [Final|Native|Protected]
	// Offset: 0x13b82100
	// Params: [ Num(2) Size(0x10) ]
	void OnPlayerAccurateInteract(struct ACHARACTER* Player, struct AActor* Interactor);
	DEFINE_UE_CLASS_HELPERS(UQA_PlayerTransitionMove, "QA_PlayerTransitionMove")

};

// Object: Class DFMQuest.QA_RandomRangeExec
// Size: 0x80 (Inherited: 0x38)
struct UQA_RandomRangeExec : UGPQuestActionAsyncReturnActionBase
{
	struct FMulticastInlineDelegate Range1; // 0x38(0x10)
	struct FMulticastInlineDelegate Range2; // 0x48(0x10)
	struct FMulticastInlineDelegate Range3; // 0x58(0x10)
	struct FMulticastInlineDelegate Range4; // 0x68(0x10)
	uint8_t Pad_0x78[0x8]; // 0x78(0x8)


	// Object: Function DFMQuest.QA_RandomRangeExec.QA_RandomNumber
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x13b825b4
	// Params: [ Num(6) Size(0x20) ]
	static struct UQA_RandomRangeExec* QA_RandomNumber(struct AGPQuestActionContext* QAContext, float Weight1, float Weight2, float Weight3, float Weight4);

	// Object: Function DFMQuest.QA_RandomRangeExec.OnRange4Exec
	// Flags: [Final|Native|Public]
	// Offset: 0x13b825a0
	// Params: [ Num(0) Size(0x0) ]
	void OnRange4Exec();

	// Object: Function DFMQuest.QA_RandomRangeExec.OnRange3Exec
	// Flags: [Final|Native|Public]
	// Offset: 0x13b8258c
	// Params: [ Num(0) Size(0x0) ]
	void OnRange3Exec();

	// Object: Function DFMQuest.QA_RandomRangeExec.OnRange2Exec
	// Flags: [Final|Native|Public]
	// Offset: 0x13b82578
	// Params: [ Num(0) Size(0x0) ]
	void OnRange2Exec();

	// Object: Function DFMQuest.QA_RandomRangeExec.OnRange1Exec
	// Flags: [Final|Native|Public]
	// Offset: 0x13b82564
	// Params: [ Num(0) Size(0x0) ]
	void OnRange1Exec();
	DEFINE_UE_CLASS_HELPERS(UQA_RandomRangeExec, "QA_RandomRangeExec")

};

// Object: Class DFMQuest.QA_RestResurrectCoin
// Size: 0x38 (Inherited: 0x38)
struct UQA_RestResurrectCoin : UGPQuestActionAsyncReturnActionBase
{

	// Object: Function DFMQuest.QA_RestResurrectCoin.QA_ResetResurrectCoin
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x13b82748
	// Params: [ Num(3) Size(0x18) ]
	static struct UQA_RestResurrectCoin* QA_ResetResurrectCoin(struct AGPQuestActionContext* QAContext, struct APlayerController* TargetPlayerCtrl);
	DEFINE_UE_CLASS_HELPERS(UQA_RestResurrectCoin, "QA_RestResurrectCoin")

};

// Object: Class DFMQuest.QA_SequenceStream
// Size: 0x80 (Inherited: 0x38)
struct UQA_SequenceStream : UGPQuestActionAsyncReturnActionBase
{
	struct FMulticastInlineDelegate OnSectionBegin; // 0x38(0x10)
	struct FMulticastInlineDelegate OnSectionEnd; // 0x48(0x10)
	uint8_t Pad_0x58[0x28]; // 0x58(0x28)


	// Object: Function DFMQuest.QA_SequenceStream.QA_StopSequenceStream
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x13b830e0
	// Params: [ Num(3) Size(0x18) ]
	static struct UQA_SequenceStream* QA_StopSequenceStream(struct AGPQuestActionContext* QAContext, struct FName SequenceStreamTag);

	// Object: Function DFMQuest.QA_SequenceStream.QA_StartSequenceStream
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x13b82fc8
	// Params: [ Num(4) Size(0x20) ]
	static struct UQA_SequenceStream* QA_StartSequenceStream(struct AGPQuestActionContext* QAContext, struct FName SequenceStreamTag, struct FName SectionTag);

	// Object: Function DFMQuest.QA_SequenceStream.QA_SetNextSection
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x13b82eb0
	// Params: [ Num(4) Size(0x20) ]
	static struct UQA_SequenceStream* QA_SetNextSection(struct AGPQuestActionContext* QAContext, struct FName SequenceStreamTag, struct FName NextSection);

	// Object: Function DFMQuest.QA_SequenceStream.QA_PreloadSequenceStream
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x13b82d98
	// Params: [ Num(4) Size(0x20) ]
	static struct UQA_SequenceStream* QA_PreloadSequenceStream(struct AGPQuestActionContext* QAContext, struct FName SequenceStreamTag, int32_t PreloadNums);

	// Object: Function DFMQuest.QA_SequenceStream.QA_ListenSequenceSection
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x13b82c80
	// Params: [ Num(4) Size(0x20) ]
	static struct UQA_SequenceStream* QA_ListenSequenceSection(struct AGPQuestActionContext* QAContext, struct FName SequenceStreamTag, struct FName SectionTag);

	// Object: Function DFMQuest.QA_SequenceStream.QA_ListenSequenceAnySection
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x13b82ba4
	// Params: [ Num(3) Size(0x18) ]
	static struct UQA_SequenceStream* QA_ListenSequenceAnySection(struct AGPQuestActionContext* QAContext, struct FName SequenceStreamTag);

	// Object: Function DFMQuest.QA_SequenceStream.QA_GotoSequenceSection
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x13b82a8c
	// Params: [ Num(4) Size(0x20) ]
	static struct UQA_SequenceStream* QA_GotoSequenceSection(struct AGPQuestActionContext* QAContext, struct FName SequenceStreamTag, struct FName SectionTag);

	// Object: Function DFMQuest.QA_SequenceStream.QA_GotoNextSection
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x13b82974
	// Params: [ Num(4) Size(0x20) ]
	static struct UQA_SequenceStream* QA_GotoNextSection(struct AGPQuestActionContext* QAContext, struct FName SequenceStreamTag, struct FName SectionTag);

	// Object: Function DFMQuest.QA_SequenceStream.OnSequenceSectionEnd
	// Flags: [Final|Native|Protected]
	// Offset: 0x13b828d0
	// Params: [ Num(1) Size(0x8) ]
	void OnSequenceSectionEnd(struct FName Key);

	// Object: Function DFMQuest.QA_SequenceStream.OnSequenceSectionBegin
	// Flags: [Final|Native|Protected]
	// Offset: 0x13b8282c
	// Params: [ Num(1) Size(0x8) ]
	void OnSequenceSectionBegin(struct FName Key);
	DEFINE_UE_CLASS_HELPERS(UQA_SequenceStream, "QA_SequenceStream")

};

// Object: Class DFMQuest.QA_CutSceneViewTargetListener
// Size: 0x68 (Inherited: 0x38)
struct UQA_CutSceneViewTargetListener : UGPQuestActionAsyncReturnActionBase
{
	struct FMulticastInlineDelegate OnTrigger; // 0x38(0x10)
	uint8_t Pad_0x48[0x20]; // 0x48(0x20)


	// Object: Function DFMQuest.QA_CutSceneViewTargetListener.QA_SequenceToPlayerCameraListener
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x13b8337c
	// Params: [ Num(5) Size(0x20) ]
	static struct UQA_CutSceneViewTargetListener* QA_SequenceToPlayerCameraListener(struct AGPQuestActionContext* QAContext, struct APlayerController* Player, float TransitionSpeed, uint8_t bCopyLocAndRot);

	// Object: Function DFMQuest.QA_CutSceneViewTargetListener.OnSequenceToGameplay
	// Flags: [Final|Native|Protected]
	// Offset: 0x13b832a0
	// Params: [ Num(2) Size(0x10) ]
	void OnSequenceToGameplay(struct AActor* LastViewTarget, struct AActor* NewViewTarget);

	// Object: Function DFMQuest.QA_CutSceneViewTargetListener.OnGameplayToSequence
	// Flags: [Final|Native|Protected]
	// Offset: 0x13b831c4
	// Params: [ Num(2) Size(0x10) ]
	void OnGameplayToSequence(struct AActor* LastViewTarget, struct AActor* NewViewTarget);
	DEFINE_UE_CLASS_HELPERS(UQA_CutSceneViewTargetListener, "QA_CutSceneViewTargetListener")

};

// Object: Class DFMQuest.QA_ShowGuidePopWindowListener
// Size: 0x58 (Inherited: 0x38)
struct UQA_ShowGuidePopWindowListener : UGPQuestActionAsyncReturnActionBase
{
	struct FMulticastInlineDelegate OnClosed; // 0x38(0x10)
	uint8_t Pad_0x48[0x10]; // 0x48(0x10)


	// Object: Function DFMQuest.QA_ShowGuidePopWindowListener.QA_ShowGuidePopWindowListener
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x13b83590
	// Params: [ Num(4) Size(0x20) ]
	static struct UQA_ShowGuidePopWindowListener* QA_ShowGuidePopWindowListener(struct AGPQuestActionContext* QAContext, int32_t GuideID, struct FName GuideAudio);

	// Object: Function DFMQuest.QA_ShowGuidePopWindowListener.FireReturnAction
	// Flags: [Final|Native|Public]
	// Offset: 0x13b834ec
	// Params: [ Num(1) Size(0x4) ]
	void FireReturnAction(int32_t GuideID);
	DEFINE_UE_CLASS_HELPERS(UQA_ShowGuidePopWindowListener, "QA_ShowGuidePopWindowListener")

};

// Object: Class DFMQuest.QA_SimplePathFollower
// Size: 0x80 (Inherited: 0x38)
struct UQA_SimplePathFollower : UGPQuestActionAsyncReturnActionBase
{
	struct FMulticastInlineDelegate OnBeginFollow; // 0x38(0x10)
	struct FMulticastInlineDelegate OnEndFollow; // 0x48(0x10)
	uint8_t Pad_0x58[0x28]; // 0x58(0x28)


	// Object: Function DFMQuest.QA_SimplePathFollower.QA_SimplePathFollower
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x13b83868
	// Params: [ Num(6) Size(0x28) ]
	static struct UQA_SimplePathFollower* QA_SimplePathFollower(struct AGPQuestActionContext* QAContext, EQA_SimplePathFollowerOption Option, struct FName QATag_GPPathFollower_PathFollower, struct FName PathTag, EGPQuestActionScope Scope);

	// Object: Function DFMQuest.QA_SimplePathFollower.OnEndFollowInternal
	// Flags: [Final|Native|Public]
	// Offset: 0x13b837c4
	// Params: [ Num(1) Size(0x8) ]
	void OnEndFollowInternal(struct AActor* PathFollower);

	// Object: Function DFMQuest.QA_SimplePathFollower.OnBeginFollowInternal
	// Flags: [Final|Native|Public]
	// Offset: 0x13b83720
	// Params: [ Num(1) Size(0x8) ]
	void OnBeginFollowInternal(struct AActor* PathFollower);
	DEFINE_UE_CLASS_HELPERS(UQA_SimplePathFollower, "QA_SimplePathFollower")

};

// Object: Class DFMQuest.QA_SimplePathFollowerCustomEvent
// Size: 0x78 (Inherited: 0x38)
struct UQA_SimplePathFollowerCustomEvent : UGPQuestActionAsyncReturnActionBase
{
	struct FMulticastInlineDelegate OnCustomEvent; // 0x38(0x10)
	uint8_t Pad_0x48[0x30]; // 0x48(0x30)


	// Object: Function DFMQuest.QA_SimplePathFollowerCustomEvent.QA_SimplePathFollowerCustomEvent
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x13b83adc
	// Params: [ Num(6) Size(0x28) ]
	static struct UQA_SimplePathFollowerCustomEvent* QA_SimplePathFollowerCustomEvent(struct AGPQuestActionContext* QAContext, struct FName FollowerTag, struct FName EventName, uint8_t bOnce, EGPQuestActionScope Scope);

	// Object: Function DFMQuest.QA_SimplePathFollowerCustomEvent.OnCustomEventInternal
	// Flags: [Final|Native|Public]
	// Offset: 0x13b83a00
	// Params: [ Num(2) Size(0x10) ]
	void OnCustomEventInternal(struct AActor* PathFollower, struct FName EventName);
	DEFINE_UE_CLASS_HELPERS(UQA_SimplePathFollowerCustomEvent, "QA_SimplePathFollowerCustomEvent")

};

// Object: Class DFMQuest.QA_SimpleActionBase
// Size: 0x58 (Inherited: 0x38)
struct UQA_SimpleActionBase : UGPQuestActionAsyncReturnActionBase
{
	uint8_t Pad_0x38[0x20]; // 0x38(0x20)
	DEFINE_UE_CLASS_HELPERS(UQA_SimpleActionBase, "QA_SimpleActionBase")

};

// Object: Class DFMQuest.QA_SimpleActionListener
// Size: 0x78 (Inherited: 0x38)
struct UQA_SimpleActionListener : UGPQuestActionAsyncReturnActionBase
{
	struct FMulticastInlineDelegate OnTrigger; // 0x38(0x10)
	struct FMulticastInlineDelegate OnUnTrigger; // 0x48(0x10)
	uint8_t Pad_0x58[0x20]; // 0x58(0x20)


	// Object: Function DFMQuest.QA_SimpleActionListener.QAS_PlayCustomAnim
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x13b867ac
	// Params: [ Num(5) Size(0x28) ]
	static struct UQA_SimpleActionBase* QAS_PlayCustomAnim(struct AGPQuestActionContext* QAContext, struct UAnimSequenceBase* AnimSequenceToPlay1P, struct UAnimSequenceBase* AnimSequenceToPlay3P, float PlayRate);

	// Object: Function DFMQuest.QA_SimpleActionListener.QAS_GetCompletedRaidFrontLevelNum
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x13b866bc
	// Params: [ Num(3) Size(0x18) ]
	static struct UQA_SimpleActionBase* QAS_GetCompletedRaidFrontLevelNum(struct AGPQuestActionContext* QAContext, int32_t& Num);

	// Object: Function DFMQuest.QA_SimpleActionListener.QA_UnLoadMissionPersistLevels
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x13b865ac
	// Params: [ Num(3) Size(0x20) ]
	static struct UQA_SimpleActionListener* QA_UnLoadMissionPersistLevels(struct AGPQuestActionContext* QAContext, struct TArray<struct TSoftObjectPtr<UWorld>> Levels);

	// Object: Function DFMQuest.QA_SimpleActionListener.QA_UnLoadMissionPersistLevel
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x13b86420
	// Params: [ Num(3) Size(0x38) ]
	static struct UQA_SimpleActionListener* QA_UnLoadMissionPersistLevel(struct AGPQuestActionContext* QAContext, struct TSoftObjectPtr<UWorld> Level);

	// Object: Function DFMQuest.QA_SimpleActionListener.QA_UnLoadMissionBindPersistLevels
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x13b86310
	// Params: [ Num(3) Size(0x20) ]
	static struct UQA_SimpleActionListener* QA_UnLoadMissionBindPersistLevels(struct AGPQuestActionContext* QAContext, struct TArray<struct TSoftObjectPtr<UWorld>> Levels);

	// Object: Function DFMQuest.QA_SimpleActionListener.QA_UnLoadMissionBindPersistLevel
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x13b86184
	// Params: [ Num(3) Size(0x38) ]
	static struct UQA_SimpleActionListener* QA_UnLoadMissionBindPersistLevel(struct AGPQuestActionContext* QAContext, struct TSoftObjectPtr<UWorld> Level);

	// Object: Function DFMQuest.QA_SimpleActionListener.QA_TriggerTimeLineEventByTag
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x13b86054
	// Params: [ Num(2) Size(0x18) ]
	static void QA_TriggerTimeLineEventByTag(struct AGPQuestActionContext* QAContext, struct FString Tag);

	// Object: Function DFMQuest.QA_SimpleActionListener.QA_TriggerTimeLineEventByName
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x13b85f24
	// Params: [ Num(2) Size(0x18) ]
	static void QA_TriggerTimeLineEventByName(struct AGPQuestActionContext* QAContext, struct FString Name);

	// Object: Function DFMQuest.QA_SimpleActionListener.QA_SimpleStageAction
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x13b85de8
	// Params: [ Num(3) Size(0x20) ]
	static struct UQA_SimpleActionListener* QA_SimpleStageAction(struct AGPQuestStage* QAContext, struct TArray<struct FSimpleActionArgument> Args);

	// Object: Function DFMQuest.QA_SimpleActionListener.QA_SimpleSingleAction
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x13b85cec
	// Params: [ Num(3) Size(0x28) ]
	static struct UQA_SimpleActionListener* QA_SimpleSingleAction(struct AGPQuestActionContext* QAContext, struct FSimpleActionArgument Args);

	// Object: Function DFMQuest.QA_SimpleActionListener.QA_SimpleAction
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x13b85bb0
	// Params: [ Num(3) Size(0x20) ]
	static struct UQA_SimpleActionListener* QA_SimpleAction(struct AGPQuestActionContext* QAContext, struct TArray<struct FSimpleActionArgument> Args);

	// Object: Function DFMQuest.QA_SimpleActionListener.QA_ShowTeamScore
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x13b85ac8
	// Params: [ Num(3) Size(0x18) ]
	static struct UQA_SimpleActionListener* QA_ShowTeamScore(struct AGPQuestActionContext* QAContext, uint8_t Show);

	// Object: Function DFMQuest.QA_SimpleActionListener.QA_SetTaskState
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x13b85944
	// Params: [ Num(4) Size(0x28) ]
	static struct UQA_SimpleActionListener* QA_SetTaskState(struct AGPQuestActionContext* GPQuest, struct FString CurrentTask, uint8_t complete);

	// Object: Function DFMQuest.QA_SimpleActionListener.QA_SetTargetTask
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x13b85784
	// Params: [ Num(4) Size(0x30) ]
	static struct UQA_SimpleActionListener* QA_SetTargetTask(struct AGPQuestActionContext* GPQuest, struct FString CurrentTask, struct FString TargetTask);

	// Object: Function DFMQuest.QA_SimpleActionListener.QA_SetRaidTargetState
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x13b85600
	// Params: [ Num(4) Size(0x28) ]
	static struct UQA_SimpleActionListener* QA_SetRaidTargetState(struct AGPQuestActionContext* GPQuest, struct FString Target, uint8_t Value);

	// Object: Function DFMQuest.QA_SimpleActionListener.QA_SetRaidTargets
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x13b85488
	// Params: [ Num(4) Size(0x30) ]
	static struct UQA_SimpleActionListener* QA_SetRaidTargets(struct AGPQuestActionContext* GPQuest, struct TArray<struct FString> Targets, struct TArray<struct FString> titles);

	// Object: Function DFMQuest.QA_SimpleActionListener.QA_SetRaidLevelTime
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x13b853a8
	// Params: [ Num(3) Size(0x18) ]
	static struct UQA_SimpleActionListener* QA_SetRaidLevelTime(struct AGPQuestActionContext* GPQuest, float LevelTime);

	// Object: Function DFMQuest.QA_SimpleActionListener.QA_SetRaidLevelPos
	// Flags: [Final|Native|Static|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x13b85234
	// Params: [ Num(4) Size(0x30) ]
	static struct UQA_SimpleActionListener* QA_SetRaidLevelPos(struct AGPQuestActionContext* GPQuest, struct FString Target, struct FVector pos);

	// Object: Function DFMQuest.QA_SimpleActionListener.QA_SetRaidFailState
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x13b850b0
	// Params: [ Num(4) Size(0x28) ]
	static struct UQA_SimpleActionListener* QA_SetRaidFailState(struct AGPQuestActionContext* GPQuest, struct FString Target, uint8_t Value);

	// Object: Function DFMQuest.QA_SimpleActionListener.QA_SetRaidFails
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x13b84f38
	// Params: [ Num(4) Size(0x30) ]
	static struct UQA_SimpleActionListener* QA_SetRaidFails(struct AGPQuestActionContext* GPQuest, struct TArray<struct FString> Targets, struct TArray<struct FString> titles);

	// Object: Function DFMQuest.QA_SimpleActionListener.QA_RemoveBigWordMapMarker
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x13b84e5c
	// Params: [ Num(3) Size(0x18) ]
	static struct UQA_SimpleActionListener* QA_RemoveBigWordMapMarker(struct AGPQuestActionContext* QAContext, struct FName Name);

	// Object: Function DFMQuest.QA_SimpleActionListener.QA_LoadMissionPersistLevels
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x13b84d4c
	// Params: [ Num(3) Size(0x20) ]
	static struct UQA_SimpleActionListener* QA_LoadMissionPersistLevels(struct AGPQuestActionContext* QAContext, struct TArray<struct TSoftObjectPtr<UWorld>> Levels);

	// Object: Function DFMQuest.QA_SimpleActionListener.QA_LoadMissionPersistLevel
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x13b84bc0
	// Params: [ Num(3) Size(0x38) ]
	static struct UQA_SimpleActionListener* QA_LoadMissionPersistLevel(struct AGPQuestActionContext* QAContext, struct TSoftObjectPtr<UWorld> Level);

	// Object: Function DFMQuest.QA_SimpleActionListener.QA_LoadMissionBindPersistLevels
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x13b84ab0
	// Params: [ Num(3) Size(0x20) ]
	static struct UQA_SimpleActionListener* QA_LoadMissionBindPersistLevels(struct AGPQuestActionContext* QAContext, struct TArray<struct TSoftObjectPtr<UWorld>> Levels);

	// Object: Function DFMQuest.QA_SimpleActionListener.QA_LoadMissionBindPersistLevel
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x13b84924
	// Params: [ Num(3) Size(0x38) ]
	static struct UQA_SimpleActionListener* QA_LoadMissionBindPersistLevel(struct AGPQuestActionContext* QAContext, struct TSoftObjectPtr<UWorld> Level);

	// Object: Function DFMQuest.QA_SimpleActionListener.QA_GetMissionPlayers
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x13b8482c
	// Params: [ Num(3) Size(0x20) ]
	static struct UQA_SimpleActionBase* QA_GetMissionPlayers(struct AGPQuestActionContext* QAContext, struct TArray<struct APlayerController*>& TargetPlayerCtrl);

	// Object: Function DFMQuest.QA_SimpleActionListener.QA_GetMissionPlayer
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x13b8473c
	// Params: [ Num(3) Size(0x18) ]
	static struct UQA_SimpleActionBase* QA_GetMissionPlayer(struct AGPQuestActionContext* QAContext, struct APlayerController*& TargetPlayerCtrl);

	// Object: Function DFMQuest.QA_SimpleActionListener.QA_GetMainTrigger
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x13b8464c
	// Params: [ Num(3) Size(0x18) ]
	static struct UQA_SimpleActionBase* QA_GetMainTrigger(struct AGPQuestActionContext* QAContext, struct UQASimpleQuestProxy*& MainTrigger);

	// Object: Function DFMQuest.QA_SimpleActionListener.QA_EnableEffectTrigger
	// Flags: [Final|Native|Static|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x13b8449c
	// Params: [ Num(5) Size(0x38) ]
	static struct UQA_SimpleActionBase* QA_EnableEffectTrigger(struct AGPQuestActionContext* QAContext, struct FString Tag, struct FLinearColor Color, float Alpha);

	// Object: Function DFMQuest.QA_SimpleActionListener.QA_DisableEffectTrigger
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x13b84364
	// Params: [ Num(3) Size(0x20) ]
	static struct UQA_SimpleActionBase* QA_DisableEffectTrigger(struct AGPQuestActionContext* QAContext, struct FString Tag);

	// Object: Function DFMQuest.QA_SimpleActionListener.QA_CreateTaskGroup
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x13b841a4
	// Params: [ Num(4) Size(0x30) ]
	static struct UQA_SimpleActionListener* QA_CreateTaskGroup(struct AGPQuestActionContext* GPQuest, struct FString Name, struct TArray<int32_t> Number);

	// Object: Function DFMQuest.QA_SimpleActionListener.QA_CreateABTeam
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x13b83fe4
	// Params: [ Num(4) Size(0x30) ]
	static struct UQA_SimpleActionListener* QA_CreateABTeam(struct AGPQuestActionContext* GPQuest, struct FString A, struct FString B);

	// Object: Function DFMQuest.QA_SimpleActionListener.QA_CarraySomeBody
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x13b83f08
	// Params: [ Num(3) Size(0x18) ]
	static struct UQA_SimpleActionListener* QA_CarraySomeBody(struct AGPQuestActionContext* QAContext, struct FName Name);

	// Object: Function DFMQuest.QA_SimpleActionListener.QA_AddBigWordMapMarker
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x13b83dac
	// Params: [ Num(5) Size(0x20) ]
	static struct UQA_SimpleActionListener* QA_AddBigWordMapMarker(struct AGPQuestActionContext* QAContext, struct FName Name, EGPQuestActionMarkerType Type, uint8_t BindRotate);

	// Object: Function DFMQuest.QA_SimpleActionListener.OnUnTriggerCallback
	// Flags: [Final|Native|Private]
	// Offset: 0x13b83d98
	// Params: [ Num(0) Size(0x0) ]
	void OnUnTriggerCallback();

	// Object: Function DFMQuest.QA_SimpleActionListener.OnTriggerCallback
	// Flags: [Final|Native|Private]
	// Offset: 0x13b83d84
	// Params: [ Num(0) Size(0x0) ]
	void OnTriggerCallback();
	DEFINE_UE_CLASS_HELPERS(UQA_SimpleActionListener, "QA_SimpleActionListener")

};

// Object: Class DFMQuest.DFMMissionActionLib
// Size: 0x28 (Inherited: 0x28)
struct UDFMMissionActionLib : UBlueprintFunctionLibrary
{

	// Object: Function DFMQuest.DFMMissionActionLib.QA_SomeOneCarraySomeBody
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x13b87c04
	// Params: [ Num(3) Size(0x18) ]
	static void QA_SomeOneCarraySomeBody(struct AGPQuestActionContext* QAContext, struct ACHARACTER* CHARACTER, struct FName Name);

	// Object: Function DFMQuest.DFMMissionActionLib.QA_SetMissionTotalTime
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x13b87b34
	// Params: [ Num(2) Size(0xC) ]
	static void QA_SetMissionTotalTime(struct AGPQuestActionContext* QAContext, float Time);

	// Object: Function DFMQuest.DFMMissionActionLib.QA_SetGameStateAction
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x13b879f4
	// Params: [ Num(3) Size(0x24) ]
	static void QA_SetGameStateAction(struct AGPQuestActionContext* QAContext, struct FMissionStateAction Action, int32_t Value);

	// Object: Function DFMQuest.DFMMissionActionLib.QA_RemoveItem
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x13b878ec
	// Params: [ Num(3) Size(0x14) ]
	static void QA_RemoveItem(struct AGPQuestActionContext* QAContext, int64_t ItemID, int32_t Num);

	// Object: Function DFMQuest.DFMMissionActionLib.QA_PlayPlayerDialog
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x13b877e4
	// Params: [ Num(3) Size(0x14) ]
	static void QA_PlayPlayerDialog(struct AGPQuestActionContext* QAContext, struct ACHARACTER* CHARACTER, int32_t GroupID);

	// Object: Function DFMQuest.DFMMissionActionLib.QA_PlayAbility
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x13b87714
	// Params: [ Num(2) Size(0xC) ]
	static void QA_PlayAbility(struct AGPQuestActionContext* QAContext, int32_t SkillId);

	// Object: Function DFMQuest.DFMMissionActionLib.QA_IsSomeOneCarraySomeBody
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x13b875c0
	// Params: [ Num(4) Size(0x19) ]
	static void QA_IsSomeOneCarraySomeBody(struct AGPQuestActionContext* QAContext, struct ACHARACTER* CHARACTER, struct FName Name, uint8_t& carry);

	// Object: Function DFMQuest.DFMMissionActionLib.QA_GetMissionTeamListeners
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x13b874d8
	// Params: [ Num(2) Size(0x18) ]
	static void QA_GetMissionTeamListeners(struct AGPQuestActionContext* QAContext, struct TArray<struct UQASimpleQuestProxy*>& Listeners);

	// Object: Function DFMQuest.DFMMissionActionLib.QA_GetMissionTeamCharacter
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x13b87354
	// Params: [ Num(3) Size(0x28) ]
	static void QA_GetMissionTeamCharacter(struct AGPQuestActionContext* QAContext, struct FString Name, struct TArray<struct AGPCharacter*>& OutActors);

	// Object: Function DFMQuest.DFMMissionActionLib.QA_GetMissionSideListeners
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x13b8726c
	// Params: [ Num(2) Size(0x18) ]
	static void QA_GetMissionSideListeners(struct AGPQuestActionContext* QAContext, struct TArray<struct UQASimpleQuestProxy*>& Listeners);

	// Object: Function DFMQuest.DFMMissionActionLib.QA_GetMissionPlayerCharacters
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x13b87184
	// Params: [ Num(2) Size(0x18) ]
	static void QA_GetMissionPlayerCharacters(struct AGPQuestActionContext* QAContext, struct TArray<struct AGPCharacter*>& OutActors);

	// Object: Function DFMQuest.DFMMissionActionLib.QA_GetMissionPlayerCharacter
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x13b870e0
	// Params: [ Num(2) Size(0x10) ]
	static struct AGPCharacter* QA_GetMissionPlayerCharacter(struct AGPQuestActionContext* QAContext);

	// Object: Function DFMQuest.DFMMissionActionLib.QA_GetMissionListeners
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x13b86ff8
	// Params: [ Num(2) Size(0x18) ]
	static void QA_GetMissionListeners(struct AGPQuestActionContext* QAContext, struct TArray<struct UQASimpleQuestProxy*>& Listeners);

	// Object: Function DFMQuest.DFMMissionActionLib.QA_GetMissionListener
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x13b86e7c
	// Params: [ Num(3) Size(0x20) ]
	static void QA_GetMissionListener(struct AGPQuestActionContext* QAContext, struct FString Name, struct UQASimpleQuestProxy*& Listeners);

	// Object: Function DFMQuest.DFMMissionActionLib.QA_GetGameStateAction
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x13b86d60
	// Params: [ Num(3) Size(0x10) ]
	static void QA_GetGameStateAction(struct AGPQuestActionContext* QAContext, int32_t ActionId, int32_t& Num);

	// Object: Function DFMQuest.DFMMissionActionLib.QA_EndAllListener
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x13b86ccc
	// Params: [ Num(1) Size(0x8) ]
	static void QA_EndAllListener(struct AGPQuestActionContext* QAContext);

	// Object: Function DFMQuest.DFMMissionActionLib.QA_DoCarraySomeBody
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x13b86c00
	// Params: [ Num(2) Size(0x10) ]
	static void QA_DoCarraySomeBody(struct AGPQuestActionContext* QAContext, struct FName Name);

	// Object: Function DFMQuest.DFMMissionActionLib.QA_AddGameStateAction
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x13b86afc
	// Params: [ Num(2) Size(0x20) ]
	static void QA_AddGameStateAction(struct AGPQuestActionContext* QAContext, struct FMissionStateAction Action);

	// Object: Function DFMQuest.DFMMissionActionLib.QA_AddCarryBodyTag
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x13b86944
	// Params: [ Num(3) Size(0x28) ]
	static void QA_AddCarryBodyTag(struct AGPQuestActionContext* QAContext, struct FString Name, struct FString Tag);
	DEFINE_UE_CLASS_HELPERS(UDFMMissionActionLib, "DFMMissionActionLib")

};

// Object: Class DFMQuest.QA_LevelActionListener
// Size: 0x78 (Inherited: 0x38)
struct UQA_LevelActionListener : UGPQuestActionAsyncReturnActionBase
{
	struct FMulticastInlineDelegate OnTrigger; // 0x38(0x10)
	struct FMulticastInlineDelegate OnUnTrigger; // 0x48(0x10)
	uint8_t Pad_0x58[0x20]; // 0x58(0x20)


	// Object: Function DFMQuest.QA_LevelActionListener.QA_EnterRaidWorld
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x13b87e94
	// Params: [ Num(4) Size(0x28) ]
	static struct UQA_LevelActionListener* QA_EnterRaidWorld(struct AGPQuest* GPQuest, struct TArray<struct TSoftObjectPtr<UWorld>> Levels, uint8_t New);

	// Object: Function DFMQuest.QA_LevelActionListener.QA_EnterOpenWorld
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x13b87d34
	// Params: [ Num(4) Size(0x28) ]
	static struct UQA_LevelActionListener* QA_EnterOpenWorld(struct AGPQuest* GPQuest, struct TArray<struct TSoftObjectPtr<UWorld>> Levels, uint8_t New);

	// Object: Function DFMQuest.QA_LevelActionListener.OnTriggerCallback
	// Flags: [Final|Native|Public]
	// Offset: 0x13b87d20
	// Params: [ Num(0) Size(0x0) ]
	void OnTriggerCallback();
	DEFINE_UE_CLASS_HELPERS(UQA_LevelActionListener, "QA_LevelActionListener")

};

// Object: Class DFMQuest.QASimpleActionProxy
// Size: 0x48 (Inherited: 0x28)
struct UQASimpleActionProxy : UObject
{
	uint8_t Pad_0x28[0x20]; // 0x28(0x20)


	// Object: Function DFMQuest.QASimpleActionProxy.Init
	// Flags: [Native|Public|HasOutParms]
	// Offset: 0x13b882ac
	// Params: [ Num(2) Size(0xB0) ]
	void Init(struct FSimpleActionArguments& InArg1, struct FSimpleActionExtArgument& InArg2);

	// Object: Function DFMQuest.QASimpleActionProxy.GetPlayers
	// Flags: [Native|Public]
	// Offset: 0x13b8820c
	// Params: [ Num(1) Size(0x10) ]
	struct TArray<struct APlayerController*> GetPlayers();

	// Object: Function DFMQuest.QASimpleActionProxy.GetPlayer
	// Flags: [Native|Public]
	// Offset: 0x13b881d0
	// Params: [ Num(1) Size(0x8) ]
	struct APlayerController* GetPlayer();

	// Object: Function DFMQuest.QASimpleActionProxy.GetMainTrigger
	// Flags: [Native|Public]
	// Offset: 0x13b88194
	// Params: [ Num(1) Size(0x8) ]
	struct UQASimpleQuestProxy* GetMainTrigger();

	// Object: Function DFMQuest.QASimpleActionProxy.GetCompletedRaidFrontLevelNum
	// Flags: [Native|Public]
	// Offset: 0x13b880e0
	// Params: [ Num(2) Size(0xC) ]
	int32_t GetCompletedRaidFrontLevelNum(struct AGPQuest* InArg);

	// Object: Function DFMQuest.QASimpleActionProxy.DoDestroy
	// Flags: [Native|Public]
	// Offset: 0x13b880c4
	// Params: [ Num(0) Size(0x0) ]
	void DoDestroy();
	DEFINE_UE_CLASS_HELPERS(UQASimpleActionProxy, "QASimpleActionProxy")

};

// Object: Class DFMQuest.QA_SimpleQuestListener
// Size: 0xF0 (Inherited: 0x38)
struct UQA_SimpleQuestListener : UGPQuestActionAsyncReturnActionBase
{
	struct FMulticastInlineDelegate OnTrigger; // 0x38(0x10)
	struct FMulticastInlineDelegate OnUnTrigger; // 0x48(0x10)
	struct FMulticastInlineDelegate OnSingleTrigger; // 0x58(0x10)
	struct FMulticastInlineDelegate OnUnSingleTrigger; // 0x68(0x10)
	struct FMulticastInlineDelegate OnTimeTickTrigger; // 0x78(0x10)
	uint8_t Pad_0x88[0x68]; // 0x88(0x68)


	// Object: Function DFMQuest.QA_SimpleQuestListener.QAS_CheckServerDone
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x13b8b54c
	// Params: [ Num(2) Size(0x10) ]
	static struct UQA_SimpleQuestListener* QAS_CheckServerDone(struct AGPQuestActionContext* QAContext);

	// Object: Function DFMQuest.QA_SimpleQuestListener.QA_SimpleSingleQuestListener
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x13b8b13c
	// Params: [ Num(9) Size(0x88) ]
	static struct UQA_SimpleQuestListener* QA_SimpleSingleQuestListener(struct AGPQuestActionContext* QAContext, struct FSimpleObjectiveItemInfo ObjectiveItem, struct UQASimpleQuestProxy*& retsult, uint8_t Side, uint8_t showObjective, struct FString TaskGroup, float TimeLimit, int32_t ExcuteNum);

	// Object: Function DFMQuest.QA_SimpleQuestListener.QA_SimpleQuestListener
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x13b8ae48
	// Params: [ Num(9) Size(0x48) ]
	static struct UQA_SimpleQuestListener* QA_SimpleQuestListener(struct AGPQuestActionContext* QAContext, struct TArray<struct FSimpleObjectiveItemInfo> ObjectiveItems, struct UQASimpleQuestProxy*& retsult, uint8_t Side, uint8_t showObjective, struct FString TaskGroup, float TimeLimit, int32_t ExcuteNum);

	// Object: Function DFMQuest.QA_SimpleQuestListener.OnUnTriggerCallback
	// Flags: [Final|Native|Public|HasOutParms]
	// Offset: 0x13b8ad48
	// Params: [ Num(2) Size(0x8) ]
	void OnUnTriggerCallback(const int32_t& I, const float& LeftTime);

	// Object: Function DFMQuest.QA_SimpleQuestListener.OnUnSingleTriggerCallback
	// Flags: [Final|Native|Public|HasOutParms]
	// Offset: 0x13b8ac48
	// Params: [ Num(2) Size(0x8) ]
	void OnUnSingleTriggerCallback(const int32_t& I, const float& LeftTime);

	// Object: Function DFMQuest.QA_SimpleQuestListener.OnTriggerCallback
	// Flags: [Final|Native|Public|HasOutParms]
	// Offset: 0x13b8ab48
	// Params: [ Num(2) Size(0x8) ]
	void OnTriggerCallback(const int32_t& I, const float& LeftTime);

	// Object: Function DFMQuest.QA_SimpleQuestListener.OnTimeTickTriggerCallback
	// Flags: [Final|Native|Public|HasOutParms]
	// Offset: 0x13b8aa48
	// Params: [ Num(2) Size(0x8) ]
	void OnTimeTickTriggerCallback(const int32_t& I, const float& LeftTime);

	// Object: Function DFMQuest.QA_SimpleQuestListener.OnSingleTriggerCallback
	// Flags: [Final|Native|Public|HasOutParms]
	// Offset: 0x13b8a948
	// Params: [ Num(2) Size(0x8) ]
	void OnSingleTriggerCallback(const int32_t& I, const float& LeftTime);
	DEFINE_UE_CLASS_HELPERS(UQA_SimpleQuestListener, "QA_SimpleQuestListener")

};

// Object: Class DFMQuest.QASimpleQuestProxy
// Size: 0x90 (Inherited: 0x28)
struct UQASimpleQuestProxy : UObject
{
	uint8_t Pad_0x28[0x8]; // 0x28(0x8)
	struct FString LisName; // 0x30(0x10)
	struct FMulticastInlineDelegate OnTrigger; // 0x40(0x10)
	struct FMulticastInlineDelegate OnUnTrigger; // 0x50(0x10)
	struct FMulticastInlineDelegate OnSingleTrigger; // 0x60(0x10)
	struct FMulticastInlineDelegate OnUnSingleTrigger; // 0x70(0x10)
	struct FMulticastInlineDelegate OnTimeTickTrigger; // 0x80(0x10)


	// Object: Function DFMQuest.QASimpleQuestProxy.BP_ShowTitle
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x13b8dc8c
	// Params: [ Num(2) Size(0x5) ]
	void BP_ShowTitle(int32_t Index, uint8_t Enable);

	// Object: Function DFMQuest.QASimpleQuestProxy.BP_ShowMarker
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x13b8dbe0
	// Params: [ Num(1) Size(0x4) ]
	void BP_ShowMarker(int32_t Index);

	// Object: Function DFMQuest.QASimpleQuestProxy.BP_ShowMarkCircle
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0x13b8daf4
	// Params: [ Num(2) Size(0x5) ]
	void BP_ShowMarkCircle(int32_t Index, uint8_t Enable);

	// Object: Function DFMQuest.QASimpleQuestProxy.BP_ShowComplete
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x13b8da08
	// Params: [ Num(2) Size(0x5) ]
	void BP_ShowComplete(int32_t Index, uint8_t Enable);

	// Object: Function DFMQuest.QASimpleQuestProxy.BP_SetTriggerTime
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x13b8d920
	// Params: [ Num(2) Size(0x8) ]
	void BP_SetTriggerTime(int32_t Index, float Time);

	// Object: Function DFMQuest.QASimpleQuestProxy.BP_SetTraceClass
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0x13b8d838
	// Params: [ Num(2) Size(0x10) ]
	void BP_SetTraceClass(int32_t Index, struct AActor* TraceClass);

	// Object: Function DFMQuest.QASimpleQuestProxy.BP_SetTraceBody
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0x13b8d74c
	// Params: [ Num(2) Size(0x5) ]
	void BP_SetTraceBody(int32_t Index, uint8_t Enable);

	// Object: Function DFMQuest.QASimpleQuestProxy.BP_SetTitleFlag
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0x13b8d664
	// Params: [ Num(2) Size(0x5) ]
	void BP_SetTitleFlag(int32_t Index, ETriggerTitleFlag fag);

	// Object: Function DFMQuest.QASimpleQuestProxy.BP_SetTitle
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x13b8d4e0
	// Params: [ Num(3) Size(0x19) ]
	void BP_SetTitle(int32_t Index, struct FString Title, uint8_t Anim);

	// Object: Function DFMQuest.QASimpleQuestProxy.BP_SetTimeRateTick
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0x13b8d434
	// Params: [ Num(1) Size(0x4) ]
	void BP_SetTimeRateTick(float Rate);

	// Object: Function DFMQuest.QASimpleQuestProxy.BP_SetSingleTimeLimit
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0x13b8d34c
	// Params: [ Num(2) Size(0x8) ]
	void BP_SetSingleTimeLimit(int32_t Index, float Time);

	// Object: Function DFMQuest.QASimpleQuestProxy.BP_SetPublicWhenEmpty
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0x13b8d298
	// Params: [ Num(1) Size(0x1) ]
	void BP_SetPublicWhenEmpty(uint8_t isPublic);

	// Object: Function DFMQuest.QASimpleQuestProxy.BP_SetOutArea
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0x13b8d084
	// Params: [ Num(4) Size(0x29) ]
	void BP_SetOutArea(int32_t Index, struct FString Tag, struct FString Title, uint8_t Anim);

	// Object: Function DFMQuest.QASimpleQuestProxy.BP_SetName
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0x13b8cf84
	// Params: [ Num(1) Size(0x10) ]
	void BP_SetName(struct FString Name);

	// Object: Function DFMQuest.QASimpleQuestProxy.BP_SetMarkerType
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x13b8ce1c
	// Params: [ Num(4) Size(0xC) ]
	void BP_SetMarkerType(int32_t Index, EGPQuestActionMarkerType MarkerType, uint8_t Now, float Delay);

	// Object: Function DFMQuest.QASimpleQuestProxy.BP_SetMarkerOffset
	// Flags: [Native|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x13b8cd34
	// Params: [ Num(2) Size(0x10) ]
	void BP_SetMarkerOffset(int32_t Index, struct FVector offset);

	// Object: Function DFMQuest.QASimpleQuestProxy.BP_SetMarkerMaxNum
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0x13b8cc88
	// Params: [ Num(1) Size(0x4) ]
	void BP_SetMarkerMaxNum(int32_t Num);

	// Object: Function DFMQuest.QASimpleQuestProxy.BP_SetMarkCircleOffset
	// Flags: [Native|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x13b8cba0
	// Params: [ Num(2) Size(0x10) ]
	void BP_SetMarkCircleOffset(int32_t Index, struct FVector offset);

	// Object: Function DFMQuest.QASimpleQuestProxy.BP_SetMapMarkerType
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x13b8cab8
	// Params: [ Num(2) Size(0x5) ]
	void BP_SetMapMarkerType(int32_t Index, EGPQuestActionMarkerType MarkerType);

	// Object: Function DFMQuest.QASimpleQuestProxy.BP_SetHintType
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0x13b8ca0c
	// Params: [ Num(1) Size(0x4) ]
	void BP_SetHintType(int32_t Type);

	// Object: Function DFMQuest.QASimpleQuestProxy.BP_SetGameStateAction
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0x13b8c8b0
	// Params: [ Num(3) Size(0x21) ]
	void BP_SetGameStateAction(int32_t Index, struct FMissionStateAction Action, uint8_t Fire);

	// Object: Function DFMQuest.QASimpleQuestProxy.BP_SetDoTriggerNow
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0x13b8c7fc
	// Params: [ Num(1) Size(0x1) ]
	void BP_SetDoTriggerNow(uint8_t Enable);

	// Object: Function DFMQuest.QASimpleQuestProxy.BP_SetAnyOne
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0x13b8c710
	// Params: [ Num(2) Size(0x5) ]
	void BP_SetAnyOne(int32_t Index, uint8_t Enable);

	// Object: Function DFMQuest.QASimpleQuestProxy.BP_Resume
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x13b8c6f4
	// Params: [ Num(0) Size(0x0) ]
	void BP_Resume();

	// Object: Function DFMQuest.QASimpleQuestProxy.BP_ResetLitmitTime
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0x13b8c648
	// Params: [ Num(1) Size(0x4) ]
	void BP_ResetLitmitTime(float Time);

	// Object: Function DFMQuest.QASimpleQuestProxy.BP_Pause
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x13b8c62c
	// Params: [ Num(0) Size(0x0) ]
	void BP_Pause();

	// Object: Function DFMQuest.QASimpleQuestProxy.BP_IsTriggerComplete
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0x13b8c574
	// Params: [ Num(2) Size(0x5) ]
	uint8_t BP_IsTriggerComplete(int32_t Index);

	// Object: Function DFMQuest.QASimpleQuestProxy.BP_IsComplete
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0x13b8c534
	// Params: [ Num(1) Size(0x1) ]
	uint8_t BP_IsComplete();

	// Object: Function DFMQuest.QASimpleQuestProxy.BP_HideMarker
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x13b8c488
	// Params: [ Num(1) Size(0x4) ]
	void BP_HideMarker(int32_t Index);

	// Object: Function DFMQuest.QASimpleQuestProxy.BP_GetValidTargetNum
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0x13b8c3d4
	// Params: [ Num(2) Size(0x8) ]
	int32_t BP_GetValidTargetNum(int32_t Index);

	// Object: Function DFMQuest.QASimpleQuestProxy.BP_GetValidTargetActor
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0x13b8c2ec
	// Params: [ Num(2) Size(0x18) ]
	struct TArray<struct AActor*> BP_GetValidTargetActor(int32_t Index);

	// Object: Function DFMQuest.QASimpleQuestProxy.BP_GetTriggerCharacter
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0x13b8c238
	// Params: [ Num(2) Size(0x10) ]
	struct ACHARACTER* BP_GetTriggerCharacter(int32_t Index);

	// Object: Function DFMQuest.QASimpleQuestProxy.BP_GetTotalValidTargetNum
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0x13b8c1fc
	// Params: [ Num(1) Size(0x4) ]
	int32_t BP_GetTotalValidTargetNum();

	// Object: Function DFMQuest.QASimpleQuestProxy.BP_GetTotalValidTargetActor
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0x13b8c15c
	// Params: [ Num(1) Size(0x10) ]
	struct TArray<struct AActor*> BP_GetTotalValidTargetActor();

	// Object: Function DFMQuest.QASimpleQuestProxy.BP_GetTotalTargetNum
	// Flags: [Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x13b8c0a0
	// Params: [ Num(1) Size(0x4) ]
	void BP_GetTotalTargetNum(int32_t& Num);

	// Object: Function DFMQuest.QASimpleQuestProxy.BP_GetTotalProgress
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0x13b8c064
	// Params: [ Num(1) Size(0x4) ]
	int32_t BP_GetTotalProgress();

	// Object: Function DFMQuest.QASimpleQuestProxy.BP_GetTargetNum
	// Flags: [Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x13b8bf6c
	// Params: [ Num(2) Size(0x8) ]
	void BP_GetTargetNum(int32_t Index, int32_t& Num);

	// Object: Function DFMQuest.QASimpleQuestProxy.BP_GetProgress
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0x13b8beb8
	// Params: [ Num(2) Size(0x8) ]
	int32_t BP_GetProgress(int32_t Index);

	// Object: Function DFMQuest.QASimpleQuestProxy.BP_GetName
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0x13b8be18
	// Params: [ Num(1) Size(0x10) ]
	struct FString BP_GetName();

	// Object: Function DFMQuest.QASimpleQuestProxy.BP_GetCurrentLeftTime
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0x13b8bddc
	// Params: [ Num(1) Size(0x4) ]
	float BP_GetCurrentLeftTime();

	// Object: Function DFMQuest.QASimpleQuestProxy.BP_GetCompleteResult
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0x13b8bda0
	// Params: [ Num(1) Size(0x4) ]
	int32_t BP_GetCompleteResult();

	// Object: Function DFMQuest.QASimpleQuestProxy.BP_GetArgs
	// Flags: [Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x13b8bcb0
	// Params: [ Num(1) Size(0x40) ]
	void BP_GetArgs(struct FSimpleQuestArgument& Args);

	// Object: Function DFMQuest.QASimpleQuestProxy.BP_EndOneListener
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x13b8bc04
	// Params: [ Num(1) Size(0x4) ]
	void BP_EndOneListener(int32_t Index);

	// Object: Function DFMQuest.QASimpleQuestProxy.BP_EndListener
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x13b8bb50
	// Params: [ Num(1) Size(0x1) ]
	void BP_EndListener(uint8_t Success);

	// Object: Function DFMQuest.QASimpleQuestProxy.BP_EnableListener
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x13b8ba64
	// Params: [ Num(2) Size(0x5) ]
	void BP_EnableListener(int32_t Index, uint8_t Enable);

	// Object: Function DFMQuest.QASimpleQuestProxy.BP_EnableLimitTime
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0x13b8b9b0
	// Params: [ Num(1) Size(0x1) ]
	void BP_EnableLimitTime(uint8_t Enable);

	// Object: Function DFMQuest.QASimpleQuestProxy.BP_BindHealth
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0x13b8b8c4
	// Params: [ Num(2) Size(0x5) ]
	void BP_BindHealth(int32_t Index, uint8_t Enable);

	// Object: Function DFMQuest.QASimpleQuestProxy.BP_AddObjectiveItem
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0x13b8b6d8
	// Params: [ Num(1) Size(0x50) ]
	void BP_AddObjectiveItem(struct FSimpleObjectiveItemInfo Item);
	DEFINE_UE_CLASS_HELPERS(UQASimpleQuestProxy, "QASimpleQuestProxy")

};

// Object: Class DFMQuest.QA_SpawnAI
// Size: 0x68 (Inherited: 0x38)
struct UQA_SpawnAI : UGPQuestActionAsyncReturnActionBase
{
	struct FMulticastInlineDelegate OnSpawned; // 0x38(0x10)
	uint8_t Pad_0x48[0x20]; // 0x48(0x20)


	// Object: Function DFMQuest.QA_SpawnAI.QA_SpawnAI
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x13b8def0
	// Params: [ Num(6) Size(0x28) ]
	static struct UQA_SpawnAI* QA_SpawnAI(struct AGPQuestActionContext* QAContext, struct FName QATag_AIGroupSpawnerBase_TeamName, struct FName QATag_MoveToSpotTag, uint8_t bWander, uint8_t bAddDefaultMarker);

	// Object: Function DFMQuest.QA_SpawnAI.OnSpawnTeamEnd
	// Flags: [Final|Native|Public]
	// Offset: 0x13b8de4c
	// Params: [ Num(1) Size(0x8) ]
	void OnSpawnTeamEnd(struct UDFMQuestAITeamChecker* Checker);
	DEFINE_UE_CLASS_HELPERS(UQA_SpawnAI, "QA_SpawnAI")

};

// Object: Class DFMQuest.QA_SpawnAIByDrama
// Size: 0x70 (Inherited: 0x38)
struct UQA_SpawnAIByDrama : UGPQuestActionAsyncReturnActionBase
{
	uint8_t Pad_0x38[0x10]; // 0x38(0x10)
	struct FMulticastInlineDelegate OnSpawnEnd; // 0x48(0x10)
	uint8_t Pad_0x58[0x18]; // 0x58(0x18)


	// Object: Function DFMQuest.QA_SpawnAIByDrama.QA_SpawnAIByDrama
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x13b8e180
	// Params: [ Num(5) Size(0x20) ]
	static struct UQA_SpawnAIByDrama* QA_SpawnAIByDrama(struct AGPQuestActionContext* QAContext, struct FName DramaTag, uint8_t DifficultyLevel, uint8_t bUseBPSpawnAI);

	// Object: Function DFMQuest.QA_SpawnAIByDrama.OnDramaAreaSpawnEnd_sync
	// Flags: [Final|Native|Public|HasOutParms]
	// Offset: 0x13b8e0c4
	// Params: [ Num(1) Size(0x10) ]
	void OnDramaAreaSpawnEnd_sync(const struct FSpawnAIListRes& AIList);

	// Object: Function DFMQuest.QA_SpawnAIByDrama.OnDramaAreaSpawnEnd
	// Flags: [Final|Native|Public]
	// Offset: 0x13b8e0b0
	// Params: [ Num(0) Size(0x0) ]
	void OnDramaAreaSpawnEnd();
	DEFINE_UE_CLASS_HELPERS(UQA_SpawnAIByDrama, "QA_SpawnAIByDrama")

};

// Object: Class DFMQuest.QA_SpawnedAIAliveSizeListener
// Size: 0x58 (Inherited: 0x38)
struct UQA_SpawnedAIAliveSizeListener : UGPQuestActionAsyncReturnActionBase
{
	uint8_t Pad_0x38[0x10]; // 0x38(0x10)
	struct FMulticastInlineDelegate OnAIAliveSizeChanged; // 0x48(0x10)


	// Object: Function DFMQuest.QA_SpawnedAIAliveSizeListener.QA_SpawnedAIAliveSizeListener
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x13b8e3d0
	// Params: [ Num(3) Size(0x18) ]
	static struct UQA_SpawnedAIAliveSizeListener* QA_SpawnedAIAliveSizeListener(struct AGPQuestActionContext* QAContext, struct FName AITeamTag);

	// Object: Function DFMQuest.QA_SpawnedAIAliveSizeListener.OnSpawnedAIAliveSizeChanged
	// Flags: [Final|Native|Public]
	// Offset: 0x13b8e2f0
	// Params: [ Num(2) Size(0xC) ]
	void OnSpawnedAIAliveSizeChanged(struct FName AISpawnTag, int32_t AIAliveSize);
	DEFINE_UE_CLASS_HELPERS(UQA_SpawnedAIAliveSizeListener, "QA_SpawnedAIAliveSizeListener")

};

// Object: Class DFMQuest.QA_TaggedTimer
// Size: 0x80 (Inherited: 0x38)
struct UQA_TaggedTimer : UGPQuestActionAsyncReturnActionBase
{
	struct FMulticastInlineDelegate OnTimer; // 0x38(0x10)
	uint8_t Pad_0x48[0x30]; // 0x48(0x30)
	struct ADFMQuestTimerActor* TimerActor; // 0x78(0x8)


	// Object: Function DFMQuest.QA_TaggedTimer.QA_TaggedTimer
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x13b8e4dc
	// Params: [ Num(6) Size(0x28) ]
	static struct UQA_TaggedTimer* QA_TaggedTimer(struct AGPQuestActionContext* QAContext, EQA_TimerMode Mode, struct FName QA_TimerTag, float TriggerInterval, int32_t TriggerCount);

	// Object: Function DFMQuest.QA_TaggedTimer.OnTimerTrigger
	// Flags: [Final|Native|Public]
	// Offset: 0x13b8e4c8
	// Params: [ Num(0) Size(0x0) ]
	void OnTimerTrigger();

	// Object: Function DFMQuest.QA_TaggedTimer.FireReturnAction
	// Flags: [Final|Native|Public]
	// Offset: 0x13b8e4b4
	// Params: [ Num(0) Size(0x0) ]
	void FireReturnAction();
	DEFINE_UE_CLASS_HELPERS(UQA_TaggedTimer, "QA_TaggedTimer")

};

// Object: Class DFMQuest.QA_TargetHealthListener
// Size: 0x68 (Inherited: 0x38)
struct UQA_TargetHealthListener : UGPQuestActionAsyncReturnActionBase
{
	uint8_t Pad_0x38[0x20]; // 0x38(0x20)
	struct FMulticastInlineDelegate OnHealthPercentTriggered; // 0x58(0x10)


	// Object: Function DFMQuest.QA_TargetHealthListener.QA_TargetHealthListener
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x13b8e758
	// Params: [ Num(6) Size(0x28) ]
	static struct UQA_TargetHealthListener* QA_TargetHealthListener(struct AGPQuestActionContext* QAContext, struct AActor* TargetClass, struct FName QATag_TargetTag, float HealthPercent, uint8_t bOnce);

	// Object: Function DFMQuest.QA_TargetHealthListener.OnTargetActorTakeDamage
	// Flags: [Final|Native|Public]
	// Offset: 0x13b8e678
	// Params: [ Num(2) Size(0xC) ]
	void OnTargetActorTakeDamage(struct UDFMVehicleHealthComponent* TargetComponent, float NormalizedHpPercent);
	DEFINE_UE_CLASS_HELPERS(UQA_TargetHealthListener, "QA_TargetHealthListener")

};

// Object: Class DFMQuest.QA_TargetTakeDamageListener
// Size: 0x60 (Inherited: 0x38)
struct UQA_TargetTakeDamageListener : UGPQuestActionAsyncReturnActionBase
{
	uint8_t Pad_0x38[0x18]; // 0x38(0x18)
	struct FMulticastInlineDelegate OnTargetTakenDamage; // 0x50(0x10)


	// Object: Function DFMQuest.QA_TargetTakeDamageListener.QA_TargetTakeDamageListener
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x13b8ea30
	// Params: [ Num(6) Size(0x28) ]
	static struct UQA_TargetTakeDamageListener* QA_TargetTakeDamageListener(struct AGPQuestActionContext* QAContext, struct AActor* TargetClass, struct FName QATag_TargetTag, EQADamageType DamageType, uint8_t bOnce);

	// Object: Function DFMQuest.QA_TargetTakeDamageListener.OnTargetActorTakeDamage
	// Flags: [Final|Native|Public|HasOutParms]
	// Offset: 0x13b8e970
	// Params: [ Num(1) Size(0x8A0) ]
	void OnTargetActorTakeDamage(const struct FDamageResultInfo& DamageResult);
	DEFINE_UE_CLASS_HELPERS(UQA_TargetTakeDamageListener, "QA_TargetTakeDamageListener")

};

// Object: Class DFMQuest.QA_TeamAllDiedListener
// Size: 0x58 (Inherited: 0x38)
struct UQA_TeamAllDiedListener : UGPQuestActionAsyncReturnActionBase
{
	struct FMulticastInlineDelegate OnTeamAllDied; // 0x38(0x10)
	uint8_t Pad_0x48[0x10]; // 0x48(0x10)


	// Object: Function DFMQuest.QA_TeamAllDiedListener.QA_TeamAllDiedListener
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x13b90dd0
	// Params: [ Num(3) Size(0x18) ]
	static struct UQA_TeamAllDiedListener* QA_TeamAllDiedListener(struct AGPQuestActionContext* QAContext, uint8_t EnableResurrectCoin);

	// Object: Function DFMQuest.QA_TeamAllDiedListener.FireTeamAllDied
	// Flags: [Final|Native|Public]
	// Offset: 0x13b90bb4
	// Params: [ Num(1) Size(0x150) ]
	void FireTeamAllDied(struct FTeamInfo TeamInfo);
	DEFINE_UE_CLASS_HELPERS(UQA_TeamAllDiedListener, "QA_TeamAllDiedListener")

};

// Object: Class DFMQuest.QA_TeamBuyBackListener
// Size: 0x50 (Inherited: 0x38)
struct UQA_TeamBuyBackListener : UGPQuestActionAsyncReturnActionBase
{
	struct FMulticastInlineDelegate BuyBack; // 0x38(0x10)
	uint8_t Pad_0x48[0x8]; // 0x48(0x8)


	// Object: Function DFMQuest.QA_TeamBuyBackListener.QA_TeamBuyBackListener
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x13b90ee0
	// Params: [ Num(2) Size(0x10) ]
	static struct UQA_TeamBuyBackListener* QA_TeamBuyBackListener(struct AGPQuestActionContext* QAContext);

	// Object: Function DFMQuest.QA_TeamBuyBackListener.OnBuyBack
	// Flags: [Final|Native|Public]
	// Offset: 0x13b90ecc
	// Params: [ Num(0) Size(0x0) ]
	void OnBuyBack();
	DEFINE_UE_CLASS_HELPERS(UQA_TeamBuyBackListener, "QA_TeamBuyBackListener")

};

// Object: Class DFMQuest.QA_TeamDeathListener
// Size: 0x58 (Inherited: 0x38)
struct UQA_TeamDeathListener : UGPQuestActionAsyncReturnActionBase
{
	struct FMulticastInlineDelegate OnTeamDied; // 0x38(0x10)
	uint8_t Pad_0x48[0x10]; // 0x48(0x10)


	// Object: Function DFMQuest.QA_TeamDeathListener.QA_TeamDeathListener
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x13b911a8
	// Params: [ Num(3) Size(0x18) ]
	static struct UQA_TeamDeathListener* QA_TeamDeathListener(struct AGPQuestActionContext* QAContext, int32_t QTeamId);

	// Object: Function DFMQuest.QA_TeamDeathListener.FireReturnAction
	// Flags: [Final|Native|Public]
	// Offset: 0x13b90f8c
	// Params: [ Num(1) Size(0x150) ]
	void FireReturnAction(struct FTeamInfo TeamInfo);
	DEFINE_UE_CLASS_HELPERS(UQA_TeamDeathListener, "QA_TeamDeathListener")

};

// Object: Class DFMQuest.QA_TeammateRebornListener
// Size: 0x50 (Inherited: 0x38)
struct UQA_TeammateRebornListener : UGPQuestActionAsyncReturnActionBase
{
	struct FMulticastInlineDelegate OnTeammateReborn; // 0x38(0x10)
	uint8_t Pad_0x48[0x8]; // 0x48(0x8)


	// Object: Function DFMQuest.QA_TeammateRebornListener.QA_TeammateRebornListener
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x13b91334
	// Params: [ Num(2) Size(0x10) ]
	static struct UQA_TeammateRebornListener* QA_TeammateRebornListener(struct AGPQuestActionContext* QAContext);

	// Object: Function DFMQuest.QA_TeammateRebornListener.FireTeammateReborn
	// Flags: [Final|Native|Public]
	// Offset: 0x13b91290
	// Params: [ Num(1) Size(0x8) ]
	void FireTeammateReborn(struct AGPCharacterBase* GPCharacterBase);
	DEFINE_UE_CLASS_HELPERS(UQA_TeammateRebornListener, "QA_TeammateRebornListener")

};

// Object: Class DFMQuest.QA_TeleportPlayerAsync
// Size: 0x60 (Inherited: 0x38)
struct UQA_TeleportPlayerAsync : UGPQuestActionAsyncReturnActionBase
{
	struct FMulticastInlineDelegate OnTeleportFinished; // 0x38(0x10)
	uint8_t Pad_0x48[0x18]; // 0x48(0x18)


	// Object: Function DFMQuest.QA_TeleportPlayerAsync.QA_TeleportAllPlayersAsync
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x13b91510
	// Params: [ Num(3) Size(0x18) ]
	static struct UQA_TeleportPlayerAsync* QA_TeleportAllPlayersAsync(struct AGPQuestActionContext* QAContext, struct FName QATag_PlayerStartTag);

	// Object: Function DFMQuest.QA_TeleportPlayerAsync.QA_TeleportAllPlayerLocAndRot
	// Flags: [Final|Native|Static|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x13b913f4
	// Params: [ Num(4) Size(0x28) ]
	static struct UQA_TeleportPlayerAsync* QA_TeleportAllPlayerLocAndRot(struct AGPQuestActionContext* QAContext, struct FVector AbsoluteLoc, struct FRotator Rotation);

	// Object: Function DFMQuest.QA_TeleportPlayerAsync.FireReturnAction
	// Flags: [Final|Native|Public]
	// Offset: 0x13b913e0
	// Params: [ Num(0) Size(0x0) ]
	void FireReturnAction();
	DEFINE_UE_CLASS_HELPERS(UQA_TeleportPlayerAsync, "QA_TeleportPlayerAsync")

};

// Object: Class DFMQuest.QA_Timer
// Size: 0x78 (Inherited: 0x38)
struct UQA_Timer : UGPQuestActionAsyncReturnActionBase
{
	struct FMulticastInlineDelegate OnTimer; // 0x38(0x10)
	uint8_t Pad_0x48[0x30]; // 0x48(0x30)


	// Object: Function DFMQuest.QA_Timer.QA_Timer
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x13b91738
	// Params: [ Num(6) Size(0x28) ]
	static struct UQA_Timer* QA_Timer(struct AGPQuestActionContext* QAContext, EQA_TimerMode Mode, float TriggerInterval, int32_t TriggerCount, struct FName Tag);

	// Object: Function DFMQuest.QA_Timer.OnTimerTrigger
	// Flags: [Final|Native|Public]
	// Offset: 0x13b91724
	// Params: [ Num(0) Size(0x0) ]
	void OnTimerTrigger();

	// Object: Function DFMQuest.QA_Timer.FireReturnAction
	// Flags: [Final|Native|Public]
	// Offset: 0x13b91710
	// Params: [ Num(0) Size(0x0) ]
	void FireReturnAction();
	DEFINE_UE_CLASS_HELPERS(UQA_Timer, "QA_Timer")

};

// Object: Class DFMQuest.QA_Tips
// Size: 0x38 (Inherited: 0x38)
struct UQA_Tips : UGPQuestActionAsyncReturnActionBase
{

	// Object: Function DFMQuest.QA_Tips.QA_Tips
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x13b918d4
	// Params: [ Num(4) Size(0x30) ]
	static struct UQA_Tips* QA_Tips(struct AGPQuestActionContext* QAContext, struct FText sMessage, float Time);
	DEFINE_UE_CLASS_HELPERS(UQA_Tips, "QA_Tips")

};

// Object: Class DFMQuest.QA_TrainStatusListener
// Size: 0x80 (Inherited: 0x38)
struct UQA_TrainStatusListener : UGPQuestActionAsyncReturnActionBase
{
	struct FMulticastInlineDelegate OnTrainBreakStatusChange; // 0x38(0x10)
	struct FMulticastInlineDelegate OnTrainStatusChange; // 0x48(0x10)
	struct FMulticastInlineDelegate OnTrainPlateRotateComplete; // 0x58(0x10)
	uint8_t Pad_0x68[0x18]; // 0x68(0x18)


	// Object: Function DFMQuest.QA_TrainStatusListener.TrainPlateRotateComplete
	// Flags: [Final|Native|Public]
	// Offset: 0x13b91cac
	// Params: [ Num(0) Size(0x0) ]
	void TrainPlateRotateComplete();

	// Object: Function DFMQuest.QA_TrainStatusListener.QA_TrainStatusListener
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x13b91bd0
	// Params: [ Num(3) Size(0x18) ]
	static struct UQA_TrainStatusListener* QA_TrainStatusListener(struct AGPQuestActionContext* InQAContext, struct FName InTrainTag);

	// Object: Function DFMQuest.QA_TrainStatusListener.FireTrainStatusChange
	// Flags: [Final|Native|Public]
	// Offset: 0x13b91bbc
	// Params: [ Num(0) Size(0x0) ]
	void FireTrainStatusChange();

	// Object: Function DFMQuest.QA_TrainStatusListener.FireBreakStatusChange
	// Flags: [Final|Native|Public]
	// Offset: 0x13b91ae0
	// Params: [ Num(2) Size(0x8) ]
	void FireBreakStatusChange(int32_t nDestruct, int32_t nTotal);
	DEFINE_UE_CLASS_HELPERS(UQA_TrainStatusListener, "QA_TrainStatusListener")

};

// Object: Class DFMQuest.QA_TriggerAISpawnUnit
// Size: 0x98 (Inherited: 0x38)
struct UQA_TriggerAISpawnUnit : UGPQuestActionAsyncReturnActionBase
{
	uint8_t Pad_0x38[0x40]; // 0x38(0x40)
	struct FMulticastInlineDelegate OnSpawnEnd; // 0x78(0x10)
	uint8_t Pad_0x88[0x10]; // 0x88(0x10)


	// Object: Function DFMQuest.QA_TriggerAISpawnUnit.QA_TriggerAISpawnUnit
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x13b91f38
	// Params: [ Num(3) Size(0x18) ]
	static struct UQA_TriggerAISpawnUnit* QA_TriggerAISpawnUnit(struct AGPQuestActionContext* QAContext, struct FName UnitTag);

	// Object: Function DFMQuest.QA_TriggerAISpawnUnit.QA_StopTriggerAISpawnUnit
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x13b91e00
	// Params: [ Num(3) Size(0x20) ]
	static struct UQA_TriggerAISpawnUnit* QA_StopTriggerAISpawnUnit(struct AGPQuestActionContext* QAContext, struct TArray<struct FName> StoppedUnitTags);

	// Object: Function DFMQuest.QA_TriggerAISpawnUnit.QA_ResetAISpawnUnit
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x13b91cc8
	// Params: [ Num(3) Size(0x20) ]
	static struct UQA_TriggerAISpawnUnit* QA_ResetAISpawnUnit(struct AGPQuestActionContext* QAContext, struct TArray<struct FName> ResetUnitTags);
	DEFINE_UE_CLASS_HELPERS(UQA_TriggerAISpawnUnit, "QA_TriggerAISpawnUnit")

};

// Object: Class DFMQuest.QA_TriggerListener
// Size: 0x78 (Inherited: 0x38)
struct UQA_TriggerListener : UGPQuestActionAsyncReturnActionBase
{
	struct FMulticastInlineDelegate OnTrigger; // 0x38(0x10)
	uint8_t Pad_0x48[0x30]; // 0x48(0x30)


	// Object: Function DFMQuest.QA_TriggerListener.QA_TriggerListener
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x13b92510
	// Params: [ Num(10) Size(0x30) ]
	static struct UQA_TriggerListener* QA_TriggerListener(struct AGPQuestActionContext* QAContext, EGPQuestActionTriggerType Type, struct FName QATag_, EQA_TriggerListenerOption Option, EGPQuestActionScope Scope, uint8_t bOnce, uint8_t bCheckOverlaping, uint8_t PlayerMustHasContract, struct FName TargetTag);

	// Object: Function DFMQuest.QA_TriggerListener.OnQuestPlundered
	// Flags: [Final|Native|Public]
	// Offset: 0x13b9246c
	// Params: [ Num(1) Size(0x4) ]
	void OnQuestPlundered(int32_t TeamID);

	// Object: Function DFMQuest.QA_TriggerListener.FireReturnAction_Overlap
	// Flags: [Final|Native|Public]
	// Offset: 0x13b92390
	// Params: [ Num(2) Size(0x10) ]
	void FireReturnAction_Overlap(struct AActor* Trigger, struct AActor* OtherActor);

	// Object: Function DFMQuest.QA_TriggerListener.FireReturnAction_Hit
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults]
	// Offset: 0x13b92214
	// Params: [ Num(4) Size(0xA4) ]
	void FireReturnAction_Hit(struct AActor* Trigger, struct AActor* OtherActor, struct FVector NormalImpulse, const struct FHitResult& Hit);

	// Object: Function DFMQuest.QA_TriggerListener.DelayFireReturnAction_Overlap
	// Flags: [Final|Native|Public]
	// Offset: 0x13b92138
	// Params: [ Num(2) Size(0x10) ]
	void DelayFireReturnAction_Overlap(struct AActor* Trigger, struct AActor* OtherActor);
	DEFINE_UE_CLASS_HELPERS(UQA_TriggerListener, "QA_TriggerListener")

};

// Object: Class DFMQuest.QA_VehicleDeathListener
// Size: 0x60 (Inherited: 0x38)
struct UQA_VehicleDeathListener : UGPQuestActionAsyncReturnActionBase
{
	struct FMulticastInlineDelegate OnVehicleDied; // 0x38(0x10)
	uint8_t Pad_0x48[0x18]; // 0x48(0x18)


	// Object: Function DFMQuest.QA_VehicleDeathListener.QA_VehicleDeathListener
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x13b92888
	// Params: [ Num(4) Size(0x20) ]
	static struct UQA_VehicleDeathListener* QA_VehicleDeathListener(struct AGPQuestActionContext* QAContext, struct FName VehicleTag, uint8_t bOnce);

	// Object: Function DFMQuest.QA_VehicleDeathListener.FireReturnAction
	// Flags: [Final|Native|Public]
	// Offset: 0x13b927e4
	// Params: [ Num(1) Size(0x8) ]
	void FireReturnAction(struct AActor* DFMVehicle);
	DEFINE_UE_CLASS_HELPERS(UQA_VehicleDeathListener, "QA_VehicleDeathListener")

};

// Object: Class DFMQuest.QA_VehicleDramaPathFinishedListener
// Size: 0x60 (Inherited: 0x38)
struct UQA_VehicleDramaPathFinishedListener : UGPQuestActionAsyncReturnActionBase
{
	struct FMulticastInlineDelegate OnVehicleDramaPathFinished; // 0x38(0x10)
	uint8_t Pad_0x48[0x18]; // 0x48(0x18)


	// Object: Function DFMQuest.QA_VehicleDramaPathFinishedListener.QA_VehicleDramaPathFinishedListener
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x13b92a60
	// Params: [ Num(4) Size(0x20) ]
	static struct UQA_VehicleDramaPathFinishedListener* QA_VehicleDramaPathFinishedListener(struct AGPQuestActionContext* QAContext, struct FName VehicleTag, uint8_t bOnce);

	// Object: Function DFMQuest.QA_VehicleDramaPathFinishedListener.FireReturnAction
	// Flags: [Final|Native|Public]
	// Offset: 0x13b929bc
	// Params: [ Num(1) Size(0x8) ]
	void FireReturnAction(struct AActor* DFMVehicle);
	DEFINE_UE_CLASS_HELPERS(UQA_VehicleDramaPathFinishedListener, "QA_VehicleDramaPathFinishedListener")

};

// Object: Class DFMQuest.QA_VehicleDriverDiedListener
// Size: 0x58 (Inherited: 0x38)
struct UQA_VehicleDriverDiedListener : UGPQuestActionAsyncReturnActionBase
{
	struct FMulticastInlineDelegate OnDriverDied; // 0x38(0x10)
	uint8_t Pad_0x48[0x10]; // 0x48(0x10)


	// Object: Function DFMQuest.QA_VehicleDriverDiedListener.QA_VehicleDriverDiedListener
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x13b92c38
	// Params: [ Num(3) Size(0x18) ]
	static struct UQA_VehicleDriverDiedListener* QA_VehicleDriverDiedListener(struct AGPQuestActionContext* QAContext, struct FName VehicleTag);

	// Object: Function DFMQuest.QA_VehicleDriverDiedListener.FireReturnAction
	// Flags: [Final|Native|Public]
	// Offset: 0x13b92b94
	// Params: [ Num(1) Size(0x8) ]
	void FireReturnAction(struct ADFMCharacter* DFMVehicleDriver);
	DEFINE_UE_CLASS_HELPERS(UQA_VehicleDriverDiedListener, "QA_VehicleDriverDiedListener")

};

// Object: Class DFMQuest.QA_VehiclePathFollower
// Size: 0xB0 (Inherited: 0x38)
struct UQA_VehiclePathFollower : UGPQuestActionAsyncReturnActionBase
{
	struct FMulticastInlineDelegate OnBeginFollow; // 0x38(0x10)
	struct FMulticastInlineDelegate OnEndFollow; // 0x48(0x10)
	struct FMulticastInlineDelegate OnPauseFollow; // 0x58(0x10)
	struct FMulticastInlineDelegate OnResumeFollow; // 0x68(0x10)
	uint8_t Pad_0x78[0x38]; // 0x78(0x38)


	// Object: Function DFMQuest.QA_VehiclePathFollower.QA_VehiclePathFollowStop
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x13b93960
	// Params: [ Num(3) Size(0x11) ]
	static void QA_VehiclePathFollowStop(struct AGPQuestActionContext* QAContext, struct FName VehicleTag, EGPQuestActionScope Scope);

	// Object: Function DFMQuest.QA_VehiclePathFollower.QA_VehiclePathFollowResume
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x13b93858
	// Params: [ Num(3) Size(0x11) ]
	static void QA_VehiclePathFollowResume(struct AGPQuestActionContext* QAContext, struct FName VehicleTag, EGPQuestActionScope Scope);

	// Object: Function DFMQuest.QA_VehiclePathFollower.QA_VehiclePathFollowPlay
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x13b93750
	// Params: [ Num(3) Size(0x11) ]
	static void QA_VehiclePathFollowPlay(struct AGPQuestActionContext* QAContext, struct FName VehicleTag, EGPQuestActionScope Scope);

	// Object: Function DFMQuest.QA_VehiclePathFollower.QA_VehiclePathFollowPause
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x13b93648
	// Params: [ Num(3) Size(0x11) ]
	static void QA_VehiclePathFollowPause(struct AGPQuestActionContext* QAContext, struct FName VehicleTag, EGPQuestActionScope Scope);

	// Object: Function DFMQuest.QA_VehiclePathFollower.QA_VehiclePathFollowListen
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x13b934ec
	// Params: [ Num(5) Size(0x20) ]
	static struct UQA_VehiclePathFollower* QA_VehiclePathFollowListen(struct AGPQuestActionContext* QAContext, struct FName VehicleTag, uint8_t bOnce, EGPQuestActionScope Scope);

	// Object: Function DFMQuest.QA_VehiclePathFollower.QA_VehiclePathFollower
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x13b93318
	// Params: [ Num(7) Size(0x28) ]
	static struct UQA_VehiclePathFollower* QA_VehiclePathFollower(struct AGPQuestActionContext* QAContext, EQA_VehiclePathFollowerOption Option, struct FName VehicleTag, struct FName PathTag, uint8_t bOnce, EGPQuestActionScope Scope);

	// Object: Function DFMQuest.QA_VehiclePathFollower.QA_VehiclePathFollowCustomSpeedOn
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x13b93198
	// Params: [ Num(5) Size(0x19) ]
	static void QA_VehiclePathFollowCustomSpeedOn(struct AGPQuestActionContext* QAContext, struct FName VehicleTag, float NewSpeed, float FadingDistance, EGPQuestActionScope Scope);

	// Object: Function DFMQuest.QA_VehiclePathFollower.QA_VehiclePathFollowCustomSpeedOff
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x13b93018
	// Params: [ Num(5) Size(0x19) ]
	static void QA_VehiclePathFollowCustomSpeedOff(struct AGPQuestActionContext* QAContext, struct FName VehicleTag, float NewSpeed, float FadingDistance, EGPQuestActionScope Scope);

	// Object: Function DFMQuest.QA_VehiclePathFollower.OnResumeFollowInternal
	// Flags: [Final|Native|Public]
	// Offset: 0x13b92f74
	// Params: [ Num(1) Size(0x8) ]
	void OnResumeFollowInternal(struct AActor* PathFollower);

	// Object: Function DFMQuest.QA_VehiclePathFollower.OnPauseFollowInternal
	// Flags: [Final|Native|Public]
	// Offset: 0x13b92ed0
	// Params: [ Num(1) Size(0x8) ]
	void OnPauseFollowInternal(struct AActor* PathFollower);

	// Object: Function DFMQuest.QA_VehiclePathFollower.OnEndFollowInternal
	// Flags: [Final|Native|Public]
	// Offset: 0x13b92e2c
	// Params: [ Num(1) Size(0x8) ]
	void OnEndFollowInternal(struct AActor* PathFollower);

	// Object: Function DFMQuest.QA_VehiclePathFollower.OnBeginFollowInternal
	// Flags: [Final|Native|Public]
	// Offset: 0x13b92d88
	// Params: [ Num(1) Size(0x8) ]
	void OnBeginFollowInternal(struct AActor* PathFollower);
	DEFINE_UE_CLASS_HELPERS(UQA_VehiclePathFollower, "QA_VehiclePathFollower")

};

// Object: Class DFMQuest.QA_VehiclePathFollowerCustomEvent
// Size: 0x78 (Inherited: 0x38)
struct UQA_VehiclePathFollowerCustomEvent : UGPQuestActionAsyncReturnActionBase
{
	struct FMulticastInlineDelegate OnCustomEvent; // 0x38(0x10)
	uint8_t Pad_0x48[0x30]; // 0x48(0x30)


	// Object: Function DFMQuest.QA_VehiclePathFollowerCustomEvent.QA_VehiclePathFollowListenCustomEvent
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x13b93c14
	// Params: [ Num(6) Size(0x28) ]
	static struct UQA_VehiclePathFollowerCustomEvent* QA_VehiclePathFollowListenCustomEvent(struct AGPQuestActionContext* QAContext, struct FName VehicleTag, struct FName EventName, uint8_t bOnce, EGPQuestActionScope Scope);

	// Object: Function DFMQuest.QA_VehiclePathFollowerCustomEvent.OnCustomEventInternal
	// Flags: [Final|Native|Public]
	// Offset: 0x13b93b38
	// Params: [ Num(2) Size(0x10) ]
	void OnCustomEventInternal(struct AActor* PathFollower, struct FName EventName);
	DEFINE_UE_CLASS_HELPERS(UQA_VehiclePathFollowerCustomEvent, "QA_VehiclePathFollowerCustomEvent")

};

// Object: Class DFMQuest.QA_VehicleSpawnListener
// Size: 0x60 (Inherited: 0x38)
struct UQA_VehicleSpawnListener : UGPQuestActionAsyncReturnActionBase
{
	struct FMulticastInlineDelegate OnVehicleSpawned; // 0x38(0x10)
	uint8_t Pad_0x48[0x18]; // 0x48(0x18)


	// Object: Function DFMQuest.QA_VehicleSpawnListener.QA_VehicleSpawnListener
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x13b93e9c
	// Params: [ Num(2) Size(0x10) ]
	static struct UQA_VehicleSpawnListener* QA_VehicleSpawnListener(struct AGPQuestActionContext* QAContext);

	// Object: Function DFMQuest.QA_VehicleSpawnListener.FireReturnAction
	// Flags: [Final|Native|Public]
	// Offset: 0x13b93dc0
	// Params: [ Num(2) Size(0x10) ]
	void FireReturnAction(struct AVehicleSpawner* Spawner, struct ADFMVehicleBase* Vehicle);
	DEFINE_UE_CLASS_HELPERS(UQA_VehicleSpawnListener, "QA_VehicleSpawnListener")

};

// Object: Class DFMQuest.QA_WaitingParachuteListener
// Size: 0x60 (Inherited: 0x38)
struct UQA_WaitingParachuteListener : UGPQuestActionAsyncReturnActionBase
{
	uint8_t Pad_0x38[0x28]; // 0x38(0x28)


	// Object: Function DFMQuest.QA_WaitingParachuteListener.QA_WaitingParachuteListener
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x13b94128
	// Params: [ Num(6) Size(0x28) ]
	static struct UQA_WaitingParachuteListener* QA_WaitingParachuteListener(struct AGPQuestActionContext* QAContext, struct FName VolumeTag, struct AGPCharacter* ExcludePlayer, uint8_t bOnce, uint8_t bPlayerMustHasContract);

	// Object: Function DFMQuest.QA_WaitingParachuteListener.PreEnterParachute
	// Flags: [Final|Native|Public]
	// Offset: 0x13b94084
	// Params: [ Num(1) Size(0x8) ]
	void PreEnterParachute(struct AGPCharacter* ParachuteCharacter);

	// Object: Function DFMQuest.QA_WaitingParachuteListener.EnterPushOver
	// Flags: [Final|Native|Public]
	// Offset: 0x13b93f48
	// Params: [ Num(2) Size(0x18) ]
	void EnterPushOver(struct AGPQuestActionContext* QAContext, struct TArray<struct AGPCharacter*> PushOverCharacters);
	DEFINE_UE_CLASS_HELPERS(UQA_WaitingParachuteListener, "QA_WaitingParachuteListener")

};

// Object: Class DFMQuest.QuestAudioPlacingActor
// Size: 0x3A0 (Inherited: 0x370)
struct AQuestAudioPlacingActor : AActor
{
	struct FQuestAudioConfig QuestAudioConfig; // 0x370(0x20)
	struct AQuestAudioActor* AudioActorClass; // 0x390(0x8)
	struct USceneComponent* root; // 0x398(0x8)


	// Object: Function DFMQuest.QuestAudioPlacingActor.PlayAudioOnServer
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x13b96168
	// Params: [ Num(0) Size(0x0) ]
	void PlayAudioOnServer();
	DEFINE_UE_CLASS_HELPERS(AQuestAudioPlacingActor, "QuestAudioPlacingActor")

};

// Object: Class DFMQuest.QuestAudioActor
// Size: 0x3B0 (Inherited: 0x370)
struct AQuestAudioActor : AActor
{
	struct FQuestAudioConfig QuestAudioConfig; // 0x370(0x20)
	struct USceneComponent* root; // 0x390(0x8)
	uint8_t bIsClientPlayed : 1; // 0x398(0x1), Mask(0x1)
	uint8_t BitPad_0x398_1 : 7; // 0x398(0x1)
	uint8_t Pad_0x399[0x17]; // 0x399(0x17)


	// Object: Function DFMQuest.QuestAudioActor.StopAudioOnServer
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x13b961d4
	// Params: [ Num(0) Size(0x0) ]
	void StopAudioOnServer();

	// Object: Function DFMQuest.QuestAudioActor.StopAudioOnClient
	// Flags: [Final|Native|Public]
	// Offset: 0x13b961c0
	// Params: [ Num(0) Size(0x0) ]
	void StopAudioOnClient();

	// Object: Function DFMQuest.QuestAudioActor.PlayAudioOnServer
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x13b961ac
	// Params: [ Num(0) Size(0x0) ]
	void PlayAudioOnServer();

	// Object: Function DFMQuest.QuestAudioActor.PlayAudioOnClient
	// Flags: [Final|Native|Public]
	// Offset: 0x13b96198
	// Params: [ Num(0) Size(0x0) ]
	void PlayAudioOnClient();

	// Object: Function DFMQuest.QuestAudioActor.OnRep_QuestAudioConfig
	// Flags: [Final|Native|Public]
	// Offset: 0x13b96184
	// Params: [ Num(0) Size(0x0) ]
	void OnRep_QuestAudioConfig();
	DEFINE_UE_CLASS_HELPERS(AQuestAudioActor, "QuestAudioActor")

};

// Object: Class DFMQuest.QuestCutSceneHUD
// Size: 0x430 (Inherited: 0x3F0)
struct UQuestCutSceneHUD : UBaseUIView
{
	float TimeToWaitSecondTouch; // 0x3EC(0x4)
	float DelayEnableTouchTime; // 0x3F0(0x4)
	struct UButton* Btn_SkipCS; // 0x3F8(0x8)
	struct UHorizontalBox* Txt_SkipTips; // 0x400(0x8)
	struct UImage* Img_SkipTips; // 0x408(0x8)
	uint8_t Pad_0x410[0x20]; // 0x410(0x20)


	// Object: Function DFMQuest.QuestCutSceneHUD.TouchTimeOut
	// Flags: [Final|Native|Public]
	// Offset: 0x13b9636c
	// Params: [ Num(0) Size(0x0) ]
	void TouchTimeOut();

	// Object: Function DFMQuest.QuestCutSceneHUD.OnSequenceEndPlay
	// Flags: [Final|Native|Protected]
	// Offset: 0x13b962c8
	// Params: [ Num(1) Size(0x8) ]
	void OnSequenceEndPlay(struct AGPSequenceActor* SeqActor);

	// Object: Function DFMQuest.QuestCutSceneHUD.OnSequenceBeginPlay
	// Flags: [Final|Native|Protected]
	// Offset: 0x13b96224
	// Params: [ Num(1) Size(0x8) ]
	void OnSequenceBeginPlay(struct AGPSequenceActor* SeqActor);

	// Object: Function DFMQuest.QuestCutSceneHUD.OnClieckSkipButton
	// Flags: [Final|Native|Public]
	// Offset: 0x13b96210
	// Params: [ Num(0) Size(0x0) ]
	void OnClieckSkipButton();

	// Object: Function DFMQuest.QuestCutSceneHUD.DelayEnableTouchSkip
	// Flags: [Final|Native|Protected]
	// Offset: 0x13b961fc
	// Params: [ Num(0) Size(0x0) ]
	void DelayEnableTouchSkip();
	DEFINE_UE_CLASS_HELPERS(UQuestCutSceneHUD, "QuestCutSceneHUD")

};

// Object: Class DFMQuest.QuestFxPlacingActor
// Size: 0x3A8 (Inherited: 0x370)
struct AQuestFxPlacingActor : AActor
{
	float Delay; // 0x370(0x4)
	struct FQuestFxConfig QuestFxConfig; // 0x374(0x1C)
	struct AQuestFxActor* FxActorClass; // 0x390(0x8)
	uint8_t Pad_0x398[0x8]; // 0x398(0x8)
	struct USceneComponent* root; // 0x3A0(0x8)


	// Object: Function DFMQuest.QuestFxPlacingActor.PlayFxOnServer
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x13b963a8
	// Params: [ Num(0) Size(0x0) ]
	void PlayFxOnServer();

	// Object: Function DFMQuest.QuestFxPlacingActor.OnDelayFinish
	// Flags: [Final|Native|Protected]
	// Offset: 0x13b96394
	// Params: [ Num(0) Size(0x0) ]
	void OnDelayFinish();
	DEFINE_UE_CLASS_HELPERS(AQuestFxPlacingActor, "QuestFxPlacingActor")

};

// Object: Class DFMQuest.QuestFxActor
// Size: 0x3B0 (Inherited: 0x370)
struct AQuestFxActor : AActor
{
	struct FQuestFxConfig QuestFxConfig; // 0x370(0x1C)
	uint8_t Pad_0x38C[0x4]; // 0x38C(0x4)
	struct USceneComponent* root; // 0x390(0x8)
	uint8_t bIsClientPlayed : 1; // 0x398(0x1), Mask(0x1)
	uint8_t BitPad_0x398_1 : 7; // 0x398(0x1)
	uint8_t Pad_0x399[0x7]; // 0x399(0x7)
	struct UFXResourceContainerComponent* EffectContainer; // 0x3A0(0x8)
	uint8_t Pad_0x3A8[0x8]; // 0x3A8(0x8)


	// Object: Function DFMQuest.QuestFxActor.StopFxOnClient
	// Flags: [Final|Native|Public]
	// Offset: 0x13b96400
	// Params: [ Num(0) Size(0x0) ]
	void StopFxOnClient();

	// Object: Function DFMQuest.QuestFxActor.PlayFxOnServer
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x13b963ec
	// Params: [ Num(0) Size(0x0) ]
	void PlayFxOnServer();

	// Object: Function DFMQuest.QuestFxActor.PlayFxOnClient
	// Flags: [Final|Native|Public]
	// Offset: 0x13b963d8
	// Params: [ Num(0) Size(0x0) ]
	void PlayFxOnClient();

	// Object: Function DFMQuest.QuestFxActor.OnRep_QuestFxConfig
	// Flags: [Final|Native|Public]
	// Offset: 0x13b963c4
	// Params: [ Num(0) Size(0x0) ]
	void OnRep_QuestFxConfig();
	DEFINE_UE_CLASS_HELPERS(AQuestFxActor, "QuestFxActor")

};

// Object: Class DFMQuest.QuestHUDController
// Size: 0x178 (Inherited: 0xA8)
struct UQuestHUDController : UBaseUIController
{
	uint8_t Pad_0xA8[0xD0]; // 0xA8(0xD0)


	// Object: Function DFMQuest.QuestHUDController.OnQuestStateUpdate
	// Flags: [Final|Native|Protected|HasOutParms]
	// Offset: 0x13b96744
	// Params: [ Num(2) Size(0x19) ]
	void OnQuestStateUpdate(struct FText PopText, const EGPQuestStageState& QuestState);

	// Object: Function DFMQuest.QuestHUDController.OnOptionalObjectiveUpdate
	// Flags: [Final|Native|Protected|HasOutParms]
	// Offset: 0x13b965c0
	// Params: [ Num(1) Size(0x50) ]
	void OnOptionalObjectiveUpdate(const struct FGPQuestObjectiveHUDInfo& InObjective);

	// Object: Function DFMQuest.QuestHUDController.OnObjectiveUpdate
	// Flags: [Final|Native|Protected|HasOutParms]
	// Offset: 0x13b9643c
	// Params: [ Num(1) Size(0x50) ]
	void OnObjectiveUpdate(const struct FGPQuestObjectiveHUDInfo& InObjective);

	// Object: Function DFMQuest.QuestHUDController.OnGameHudStateChanged
	// Flags: [Final|Native|Protected]
	// Offset: 0x13b96428
	// Params: [ Num(0) Size(0x0) ]
	void OnGameHudStateChanged();
	DEFINE_UE_CLASS_HELPERS(UQuestHUDController, "QuestHUDController")

};

// Object: Class DFMQuest.QuestHUDPanelView
// Size: 0x400 (Inherited: 0x3F0)
struct UQuestHUDPanelView : UBaseUIView
{
	struct UQuestObjectiveView* ObjectiveTitle; // 0x3F0(0x8)
	struct UQuestStatusTipsView* QuestState; // 0x3F8(0x8)
	DEFINE_UE_CLASS_HELPERS(UQuestHUDPanelView, "QuestHUDPanelView")

};

// Object: Class DFMQuest.QuestObjectiveView
// Size: 0x490 (Inherited: 0x3F0)
struct UQuestObjectiveView : UBaseUIView
{
	struct UTextBlock* StageTitle; // 0x3F0(0x8)
	struct UTextBlock* RemainTimeText; // 0x3F8(0x8)
	struct UObjectiveContentView* MainObjective; // 0x400(0x8)
	struct UVerticalBox* OptionalObjectiveWidgets; // 0x408(0x8)
	struct UObjectiveContentView* ClassObjectiveItemView; // 0x410(0x8)
	int32_t StartWarningSeconds; // 0x418(0x4)
	float InterpSpeed; // 0x41C(0x4)
	uint8_t Pad_0x420[0x1C]; // 0x420(0x1C)
	uint8_t bInWarning : 1; // 0x43C(0x1), Mask(0x1)
	uint8_t BitPad_0x43C_1 : 7; // 0x43C(0x1)
	uint8_t Pad_0x43D[0x3]; // 0x43D(0x3)
	struct TMap<int32_t, struct UObjectiveContentView*> OptionalObjectiveItems; // 0x440(0x50)


	// Object: Function DFMQuest.QuestObjectiveView.ShowOptionalObjective
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x13b96ffc
	// Params: [ Num(2) Size(0x2C) ]
	void ShowOptionalObjective(struct FGPQuestText QuestText, int32_t ObjectiveIndex);

	// Object: Function DFMQuest.QuestObjectiveView.SetStageTitle
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x13b96e7c
	// Params: [ Num(1) Size(0x18) ]
	void SetStageTitle(struct FText InText);

	// Object: Function DFMQuest.QuestObjectiveView.SetStageRemainTime
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x13b96dd8
	// Params: [ Num(1) Size(0x4) ]
	void SetStageRemainTime(float RemainTime);

	// Object: Function DFMQuest.QuestObjectiveView.RemoveOptionalObjectives
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x13b96dc4
	// Params: [ Num(0) Size(0x0) ]
	void RemoveOptionalObjectives();

	// Object: Function DFMQuest.QuestObjectiveView.RemoveObjectiveItem
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x13b96d20
	// Params: [ Num(1) Size(0x4) ]
	void RemoveObjectiveItem(int32_t objectiveId);

	// Object: Function DFMQuest.QuestObjectiveView.NewOptionalObjective
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x13b96b64
	// Params: [ Num(2) Size(0x1C) ]
	void NewOptionalObjective(struct FText ObjectiveTitle, int32_t ObjectiveIndex);

	// Object: Function DFMQuest.QuestObjectiveView.GetStageTitle
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x13b96ab0
	// Params: [ Num(1) Size(0x18) ]
	struct FText GetStageTitle();

	// Object: Function DFMQuest.QuestObjectiveView.GetOptionalObjective
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x13b96a04
	// Params: [ Num(2) Size(0x10) ]
	struct UObjectiveContentView* GetOptionalObjective(int32_t ObjectiveIndex);

	// Object: Function DFMQuest.QuestObjectiveView.BP_UpdateStageTitle
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(0) Size(0x0) ]
	void BP_UpdateStageTitle();

	// Object: Function DFMQuest.QuestObjectiveView.BP_StartWarning
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(1) Size(0x1) ]
	void BP_StartWarning(uint8_t bStartWarning);

	// Object: Function DFMQuest.QuestObjectiveView.BP_ShowRemainTimeText
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(1) Size(0x1) ]
	void BP_ShowRemainTimeText(uint8_t bShow);

	// Object: Function DFMQuest.QuestObjectiveView.BP_OnShowView
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(0) Size(0x0) ]
	void BP_OnShowView();
	DEFINE_UE_CLASS_HELPERS(UQuestObjectiveView, "QuestObjectiveView")

};

// Object: Class DFMQuest.QuestStatusTipsView
// Size: 0x428 (Inherited: 0x3F0)
struct UQuestStatusTipsView : UBaseUIView
{
	struct UTextBlock* TextQuestTitle; // 0x3F0(0x8)
	float ShowTipsTime; // 0x3F8(0x4)
	float FadeOutTime; // 0x3FC(0x4)
	uint8_t Pad_0x400[0x28]; // 0x400(0x28)


	// Object: Function DFMQuest.QuestStatusTipsView.SetQuestText
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x13b973e0
	// Params: [ Num(1) Size(0x18) ]
	void SetQuestText(struct FText InText);

	// Object: Function DFMQuest.QuestStatusTipsView.SetQuestStatus
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x13b9733c
	// Params: [ Num(1) Size(0x4) ]
	void SetQuestStatus(int32_t Status);

	// Object: Function DFMQuest.QuestStatusTipsView.GetQuestTitle
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x13b97288
	// Params: [ Num(1) Size(0x18) ]
	struct FText GetQuestTitle();

	// Object: Function DFMQuest.QuestStatusTipsView.BP_UpdateQuestStatus
	// Flags: [Event|Public|BlueprintCallable|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(1) Size(0x4) ]
	void BP_UpdateQuestStatus(int32_t Status);

	// Object: Function DFMQuest.QuestStatusTipsView.BP_FadeoutView
	// Flags: [Event|Public|BlueprintCallable|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(0) Size(0x0) ]
	void BP_FadeoutView();

	// Object: Function DFMQuest.QuestStatusTipsView.BP_FadeinView
	// Flags: [Event|Public|BlueprintCallable|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(0) Size(0x0) ]
	void BP_FadeinView();
	DEFINE_UE_CLASS_HELPERS(UQuestStatusTipsView, "QuestStatusTipsView")

};

// Object: Class DFMQuest.RaidQuestClientProxy
// Size: 0x568 (Inherited: 0x518)
struct ARaidQuestClientProxy : ADFMQuestClientProxy
{
	uint8_t Pad_0x518[0x38]; // 0x518(0x38)
	struct TArray<struct FString> DependentLevels; // 0x550(0x10)
	uint8_t Pad_0x560[0x8]; // 0x560(0x8)


	// Object: Function DFMQuest.RaidQuestClientProxy.OnServerMatchEnded
	// Flags: [Final|Native|Public]
	// Offset: 0x13b97800
	// Params: [ Num(2) Size(0x10) ]
	void OnServerMatchEnded(EMatchOverReason MatchOverReason, int64_t PlayerUin);

	// Object: Function DFMQuest.RaidQuestClientProxy.OnRep_DependentLevels
	// Flags: [Final|Native|Protected]
	// Offset: 0x13b977ec
	// Params: [ Num(0) Size(0x0) ]
	void OnRep_DependentLevels();

	// Object: Function DFMQuest.RaidQuestClientProxy.OnGameFlowEnter
	// Flags: [Final|Native|Public]
	// Offset: 0x13b97748
	// Params: [ Num(1) Size(0x1) ]
	void OnGameFlowEnter(EGameFlowStageType GameFlowStage);

	// Object: Function DFMQuest.RaidQuestClientProxy.ClientUnLoadLevels
	// Flags: [Net|NetReliableNative|Event|NetMulticast|Public]
	// Offset: 0x13b97694
	// Params: [ Num(1) Size(0x10) ]
	void ClientUnLoadLevels(struct TArray<struct FString> RequestUnLoadLevels);

	// Object: Function DFMQuest.RaidQuestClientProxy.ClientPlayQuestEnd
	// Flags: [Net|NetReliableNative|Event|NetMulticast|Public]
	// Offset: 0x13b975e8
	// Params: [ Num(1) Size(0x1) ]
	void ClientPlayQuestEnd(EGPQuestEndReason EndReason);
	DEFINE_UE_CLASS_HELPERS(ARaidQuestClientProxy, "RaidQuestClientProxy")

};

// Object: Class DFMQuest.SOLQuestClientProxy
// Size: 0x558 (Inherited: 0x518)
struct ASOLQuestClientProxy : ADFMQuestClientProxy
{
	uint8_t Pad_0x518[0x8]; // 0x518(0x8)
	struct FContractBossData ContractBossData; // 0x520(0x10)
	struct FMapQuestRangeData MapQuestRangeData; // 0x530(0x18)
	struct TWeakObjectPtr<struct ADFMCharacter> Boss; // 0x548(0x8)
	uint8_t Pad_0x550[0x8]; // 0x550(0x8)


	// Object: Function DFMQuest.SOLQuestClientProxy.OnRep_MapQuestRangeData
	// Flags: [Final|Native|Protected]
	// Offset: 0x13b97a80
	// Params: [ Num(0) Size(0x0) ]
	void OnRep_MapQuestRangeData();

	// Object: Function DFMQuest.SOLQuestClientProxy.OnRep_ContractBossData
	// Flags: [Final|Native|Protected]
	// Offset: 0x13b97a6c
	// Params: [ Num(0) Size(0x0) ]
	void OnRep_ContractBossData();

	// Object: Function DFMQuest.SOLQuestClientProxy.OnBossAttributeChanged
	// Flags: [Final|Native|Protected|HasOutParms]
	// Offset: 0x13b978f4
	// Params: [ Num(2) Size(0x68) ]
	void OnBossAttributeChanged(struct AActor* ChangeActor, const struct FOnGPAttributeChangeData& ChangeData);
	DEFINE_UE_CLASS_HELPERS(ASOLQuestClientProxy, "SOLQuestClientProxy")

};

// Object: Class DFMQuest.TutorialQuestClientProxy
// Size: 0x610 (Inherited: 0x518)
struct ATutorialQuestClientProxy : ADFMQuestClientProxy
{
	uint8_t Pad_0x518[0x18]; // 0x518(0x18)
	struct TArray<struct FName> LockedHUDNames; // 0x530(0x10)
	struct TArray<struct FString> LockedLuaHUDNames; // 0x540(0x10)
	struct TArray<EInputActionType> DisabledInputActions; // 0x550(0x10)
	int32_t CurrentGuideClickId; // 0x560(0x4)
	uint8_t CurrentForceClick : 1; // 0x564(0x1), Mask(0x1)
	uint8_t BitPad_0x564_1 : 7; // 0x564(0x1)
	uint8_t Pad_0x565[0x3]; // 0x565(0x3)
	int32_t CurrentDialogId; // 0x568(0x4)
	int32_t CurrentGuidePopWindowId; // 0x56C(0x4)
	int32_t CurrentGuidePopTipsId; // 0x570(0x4)
	uint8_t Pad_0x574[0x4]; // 0x574(0x4)
	struct FString CurrentGuidePopButtonWord; // 0x578(0x10)
	uint8_t CurrentGuidePopButtonStrengh : 1; // 0x588(0x1), Mask(0x1)
	uint8_t BitPad_0x588_1 : 7; // 0x588(0x1)
	uint8_t Pad_0x589[0x3]; // 0x589(0x3)
	struct FName CurrentGuideAudioName; // 0x58C(0x8)
	uint8_t Pad_0x594[0x4]; // 0x594(0x4)
	int64_t CurrentCustomRooleteeMedItem; // 0x598(0x8)
	uint8_t IsListeningLooting : 1; // 0x5A0(0x1), Mask(0x1)
	uint8_t BitPad_0x5A0_1 : 7; // 0x5A0(0x1)
	uint8_t Pad_0x5A1[0x7]; // 0x5A1(0x7)
	int64_t ListeningNetGuid; // 0x5A8(0x8)
	int64_t LootingAiIndex; // 0x5B0(0x8)
	uint8_t IsListeningMapHud : 1; // 0x5B8(0x1), Mask(0x1)
	uint8_t BitPad_0x5B8_1 : 7; // 0x5B8(0x1)
	uint8_t IsRemindEscape : 1; // 0x5B9(0x1), Mask(0x1)
	uint8_t BitPad_0x5B9_1 : 7; // 0x5B9(0x1)
	uint8_t ListenMapTargetClick : 1; // 0x5BA(0x1), Mask(0x1)
	uint8_t BitPad_0x5BA_1 : 7; // 0x5BA(0x1)
	uint8_t UsingDefaultKeySetting : 1; // 0x5BB(0x1), Mask(0x1)
	uint8_t BitPad_0x5BB_1 : 7; // 0x5BB(0x1)
	uint8_t Pad_0x5BC[0x12]; // 0x5BC(0x12)
	uint8_t bCompleteMiniMapGuide : 1; // 0x5CE(0x1), Mask(0x1)
	uint8_t BitPad_0x5CE_1 : 7; // 0x5CE(0x1)
	uint8_t bCompleteBigMapGuide : 1; // 0x5CF(0x1), Mask(0x1)
	uint8_t BitPad_0x5CF_1 : 7; // 0x5CF(0x1)
	uint8_t Pad_0x5D0[0x40]; // 0x5D0(0x40)


	// Object: Function DFMQuest.TutorialQuestClientProxy.UnlockLuaHUDPanels
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x13b990b4
	// Params: [ Num(1) Size(0x10) ]
	void UnlockLuaHUDPanels(struct TArray<struct FString>& PanelNames);

	// Object: Function DFMQuest.TutorialQuestClientProxy.UnlockHUDPanels
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x13b98ff8
	// Params: [ Num(1) Size(0x10) ]
	void UnlockHUDPanels(struct TArray<struct FName>& PanelNames);

	// Object: Function DFMQuest.TutorialQuestClientProxy.SwitchToDefaultKeySetting
	// Flags: [Final|Native|Public]
	// Offset: 0x13b98f4c
	// Params: [ Num(1) Size(0x1) ]
	void SwitchToDefaultKeySetting(uint8_t bSwitchToDefault);

	// Object: Function DFMQuest.TutorialQuestClientProxy.ShowGuidePopWindowUI
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x13b98e6c
	// Params: [ Num(2) Size(0xC) ]
	void ShowGuidePopWindowUI(int32_t GuidePopWindowId, struct FName GuideAudio);

	// Object: Function DFMQuest.TutorialQuestClientProxy.ShowGuidePopTipsUI
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x13b98d8c
	// Params: [ Num(2) Size(0xC) ]
	void ShowGuidePopTipsUI(int32_t GuidePopTipsId, struct FName GuideAudio);

	// Object: Function DFMQuest.TutorialQuestClientProxy.ShowGuideDialogUI
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x13b98ce8
	// Params: [ Num(1) Size(0x4) ]
	void ShowGuideDialogUI(int32_t DialogID);

	// Object: Function DFMQuest.TutorialQuestClientProxy.ShowGuideClickUI
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0x13b98bfc
	// Params: [ Num(2) Size(0x5) ]
	void ShowGuideClickUI(int32_t GuideClickId, uint8_t bForceClick);

	// Object: Function DFMQuest.TutorialQuestClientProxy.ShowGuideButtonUI
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x13b98b04
	// Params: [ Num(1) Size(0x10) ]
	void ShowGuideButtonUI(struct FString GuideButtonWord);

	// Object: Function DFMQuest.TutorialQuestClientProxy.SetListenMapTargetClick
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0x13b98a50
	// Params: [ Num(1) Size(0x1) ]
	void SetListenMapTargetClick(uint8_t bListen);

	// Object: Function DFMQuest.TutorialQuestClientProxy.SetListenMapHudStatus
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0x13b9899c
	// Params: [ Num(1) Size(0x1) ]
	void SetListenMapHudStatus(uint8_t bStart);

	// Object: Function DFMQuest.TutorialQuestClientProxy.SetListenLootingStatus
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0x13b98870
	// Params: [ Num(3) Size(0x14) ]
	void SetListenLootingStatus(uint8_t bStart, int64_t NetGuid, int32_t aiIndex);

	// Object: Function DFMQuest.TutorialQuestClientProxy.SetGuideButtonUIStrengh
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x13b987c4
	// Params: [ Num(1) Size(0x1) ]
	void SetGuideButtonUIStrengh(uint8_t bStrong);

	// Object: Function DFMQuest.TutorialQuestClientProxy.SetCustomRooleteeMedItem
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x13b98720
	// Params: [ Num(1) Size(0x8) ]
	void SetCustomRooleteeMedItem(int64_t MedItemId);

	// Object: Function DFMQuest.TutorialQuestClientProxy.ServerNotifySeamlessTravelEnd
	// Flags: [Net|NetReliableNative|Event|Public|NetServer]
	// Offset: 0x13b98704
	// Params: [ Num(0) Size(0x0) ]
	void ServerNotifySeamlessTravelEnd();

	// Object: Function DFMQuest.TutorialQuestClientProxy.ServerNotifyPopWindowClosed
	// Flags: [Net|NetReliableNative|Event|Public|NetServer]
	// Offset: 0x13b98658
	// Params: [ Num(1) Size(0x4) ]
	void ServerNotifyPopWindowClosed(int32_t GuidePopWindowId);

	// Object: Function DFMQuest.TutorialQuestClientProxy.ServerNotifyMapStatusChanged
	// Flags: [Net|NetReliableNative|Event|Public|NetServer]
	// Offset: 0x13b985a4
	// Params: [ Num(1) Size(0x1) ]
	void ServerNotifyMapStatusChanged(uint8_t bOpenBigMap);

	// Object: Function DFMQuest.TutorialQuestClientProxy.ServerNotifyLootingStatusChanged
	// Flags: [Net|NetReliableNative|Event|Public|NetServer]
	// Offset: 0x13b984f8
	// Params: [ Num(1) Size(0x1) ]
	void ServerNotifyLootingStatusChanged(ELootingStatus Status);

	// Object: Function DFMQuest.TutorialQuestClientProxy.PopWindowClosed
	// Flags: [Final|Native|Public]
	// Offset: 0x13b98454
	// Params: [ Num(1) Size(0x4) ]
	void PopWindowClosed(int32_t GuidePopWindowId);

	// Object: Function DFMQuest.TutorialQuestClientProxy.OnSeamlessTravelEnd
	// Flags: [Final|Native|Public]
	// Offset: 0x13b983a8
	// Params: [ Num(1) Size(0x1) ]
	void OnSeamlessTravelEnd(uint8_t bReconnect);

	// Object: Function DFMQuest.TutorialQuestClientProxy.OnRep_SwitchToDefaultKeySetting
	// Flags: [Final|Native|Protected]
	// Offset: 0x13b98394
	// Params: [ Num(0) Size(0x0) ]
	void OnRep_SwitchToDefaultKeySetting();

	// Object: Function DFMQuest.TutorialQuestClientProxy.OnRep_RemindEscape
	// Flags: [Final|Native|Protected]
	// Offset: 0x13b98380
	// Params: [ Num(0) Size(0x0) ]
	void OnRep_RemindEscape();

	// Object: Function DFMQuest.TutorialQuestClientProxy.OnRep_LockedLuaHUDNames
	// Flags: [Final|Native|Protected]
	// Offset: 0x13b9836c
	// Params: [ Num(0) Size(0x0) ]
	void OnRep_LockedLuaHUDNames();

	// Object: Function DFMQuest.TutorialQuestClientProxy.OnRep_LockedHUDNames
	// Flags: [Final|Native|Protected]
	// Offset: 0x13b98358
	// Params: [ Num(0) Size(0x0) ]
	void OnRep_LockedHUDNames();

	// Object: Function DFMQuest.TutorialQuestClientProxy.OnRep_ListenMapTargetClick
	// Flags: [Final|Native|Protected]
	// Offset: 0x13b98344
	// Params: [ Num(0) Size(0x0) ]
	void OnRep_ListenMapTargetClick();

	// Object: Function DFMQuest.TutorialQuestClientProxy.OnRep_IsListeningMapHud
	// Flags: [Final|Native|Protected]
	// Offset: 0x13b98330
	// Params: [ Num(0) Size(0x0) ]
	void OnRep_IsListeningMapHud();

	// Object: Function DFMQuest.TutorialQuestClientProxy.OnRep_IsListeningLooting
	// Flags: [Final|Native|Protected]
	// Offset: 0x13b9831c
	// Params: [ Num(0) Size(0x0) ]
	void OnRep_IsListeningLooting();

	// Object: Function DFMQuest.TutorialQuestClientProxy.OnRep_GuidePopWindowId
	// Flags: [Final|Native|Protected]
	// Offset: 0x13b98308
	// Params: [ Num(0) Size(0x0) ]
	void OnRep_GuidePopWindowId();

	// Object: Function DFMQuest.TutorialQuestClientProxy.OnRep_GuidePopTipsId
	// Flags: [Final|Native|Protected]
	// Offset: 0x13b982f4
	// Params: [ Num(0) Size(0x0) ]
	void OnRep_GuidePopTipsId();

	// Object: Function DFMQuest.TutorialQuestClientProxy.OnRep_GuidePopButtonWord
	// Flags: [Final|Native|Protected]
	// Offset: 0x13b982e0
	// Params: [ Num(0) Size(0x0) ]
	void OnRep_GuidePopButtonWord();

	// Object: Function DFMQuest.TutorialQuestClientProxy.OnRep_GuidePopButtonStrengh
	// Flags: [Final|Native|Protected]
	// Offset: 0x13b982cc
	// Params: [ Num(0) Size(0x0) ]
	void OnRep_GuidePopButtonStrengh();

	// Object: Function DFMQuest.TutorialQuestClientProxy.OnRep_GuideClickId
	// Flags: [Final|Native|Protected]
	// Offset: 0x13b982b8
	// Params: [ Num(0) Size(0x0) ]
	void OnRep_GuideClickId();

	// Object: Function DFMQuest.TutorialQuestClientProxy.OnRep_DisabledInputActions
	// Flags: [Final|Native|Protected]
	// Offset: 0x13b982a4
	// Params: [ Num(0) Size(0x0) ]
	void OnRep_DisabledInputActions();

	// Object: Function DFMQuest.TutorialQuestClientProxy.OnRep_DialogId
	// Flags: [Final|Native|Protected]
	// Offset: 0x13b98290
	// Params: [ Num(0) Size(0x0) ]
	void OnRep_DialogId();

	// Object: Function DFMQuest.TutorialQuestClientProxy.OnRep_CustomRooleteeMedItem
	// Flags: [Final|Native|Protected]
	// Offset: 0x13b9827c
	// Params: [ Num(0) Size(0x0) ]
	void OnRep_CustomRooleteeMedItem();

	// Object: Function DFMQuest.TutorialQuestClientProxy.OnMarkBigMapTarget
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults]
	// Offset: 0x13b980f8
	// Params: [ Num(4) Size(0x19) ]
	void OnMarkBigMapTarget(uint8_t MapSignTypeInt, const struct FName& TargetName, const struct FVector& Location, uint8_t bIsAdd);

	// Object: Function DFMQuest.TutorialQuestClientProxy.OnGameFlowEnter
	// Flags: [Final|Native|Public]
	// Offset: 0x13b98054
	// Params: [ Num(1) Size(0x1) ]
	void OnGameFlowEnter(EGameFlowStageType GameFlowStage);

	// Object: Function DFMQuest.TutorialQuestClientProxy.LockLuaHUDPanels
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x13b97f98
	// Params: [ Num(1) Size(0x10) ]
	void LockLuaHUDPanels(struct TArray<struct FString>& PanelNames);

	// Object: Function DFMQuest.TutorialQuestClientProxy.LockHUDPanels
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x13b97edc
	// Params: [ Num(1) Size(0x10) ]
	void LockHUDPanels(struct TArray<struct FName>& PanelNames);

	// Object: Function DFMQuest.TutorialQuestClientProxy.DisableInputAction
	// Flags: [Final|Native|Public]
	// Offset: 0x13b97df4
	// Params: [ Num(2) Size(0x3) ]
	void DisableInputAction(EInputActionType ActionType, uint8_t bDisable);

	// Object: Function DFMQuest.TutorialQuestClientProxy.ClientBroadcastRemindEscape
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0x13b97d40
	// Params: [ Num(1) Size(0x1) ]
	void ClientBroadcastRemindEscape(uint8_t bOpen);

	// Object: Function DFMQuest.TutorialQuestClientProxy.BP_HideBigMapExtraInfo
	// Flags: [Event|Protected|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(1) Size(0x1) ]
	void BP_HideBigMapExtraInfo(uint8_t bHide);

	// Object: Function DFMQuest.TutorialQuestClientProxy.BP_DisableInputAction
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x13b97c5c
	// Params: [ Num(2) Size(0x5) ]
	void BP_DisableInputAction(int32_t ActionType, uint8_t bDisable);
	DEFINE_UE_CLASS_HELPERS(ATutorialQuestClientProxy, "TutorialQuestClientProxy")

};

} // namespace SDK
