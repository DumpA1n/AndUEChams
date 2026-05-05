#pragma once

#include "../CoreUObject_classes.hpp"
#include "AIModule.hpp"
#include "DFMGameHud.hpp"
#include "DFMGameplay.hpp"
#include "Engine.hpp"
#include "GM.hpp"
#include "GPAIBase.hpp"
#include "GPAudioRuntime.hpp"
#include "GPGameHud.hpp"
#include "GPGameplay.hpp"
#include "GPUserInterfaceCore.hpp"
#include "GameCore.hpp"
#include "UMG.hpp"

namespace SDK
{

// Package: BattleField
// Enums: 22
// Structs: 56
// Classes: 64

struct AActor;
struct ABattleRoutePoint;
struct ACHARACTER;
struct AController;
struct ADFMAIController;
struct ADFMAIPlayerController;
struct ADFMCharacter;
struct ADFMGameState;
struct ADFMHelicopter;
struct ADFMPlayerController;
struct ADFMPlayerState;
struct ADFMTank;
struct ADFMVehicleBase;
struct AGPCharacter;
struct AGPCharacterBase;
struct AGPPlayerController;
struct AGPPlayerState;
struct AGPSceneActorReplicator;
struct AGPVehicleBase;
struct ANavExtendAgent;
struct APawn;
struct APlayerController;
struct APlayerStart;
struct AStaticMeshActor;
enum class EAiPlayerLeanActionType : uint8_t;
enum class EAttachPosition : uint8_t;
enum class EBattleFieldForcesType : uint8_t;
enum class EBattleFieldMapFutureTag : uint8_t;
enum class EDFMGamePlayMode : uint8_t;
enum class EDFMGamePlaySubMode : uint8_t;
enum class EGPEventCallbackType : uint8_t;
enum class EGameFlowStageType : uint8_t;
enum class EInGameBattleClassType : uint8_t;
enum class EMatchOverReason : uint8_t;
enum class EOverloadBuffLevel : uint8_t;
enum class EPVPAIFightStyle : uint8_t;
enum class EPlayerRequestAssistType : uint8_t;
enum class EQuickChatMarkingItemType : uint8_t;
enum class EWayPointCoverHeight : uint8_t;
struct FArmedForceDataInfo;
struct FBattleFieldBroadcastTipInfo;
struct FDamageResultInfo;
struct FHitResult;
struct FInventoryItemInfo;
struct FKillInfo;
struct FMPInventoryItemInfo;
struct FPlayerLocation;
struct FPlayerStatItem;
struct FSimpleKnockDownInfo;
struct FVehicleModifyRequestData;
struct FVehicleModifyReturnData;
struct IGPWeaponInterface;
struct UActorComponent;
struct UBehaviorTree;
struct UButton;
struct UCanvasPanel;
struct UCurveFloat;
struct UDFCommonButton;
struct UDFMAIPlayerPathFollowingComponent;
struct UDFMAIPlayerThreatRecordComponent;
struct UDFMBattleFieldSystem;
struct UDFMPVPAIDiffcultyComponent;
struct UDFMPlayerDataAnalysisComponent;
struct UDFMRedeployComponent;
struct UDFTextBlock;
struct UDamageType;
struct UDataTable;
struct UEnvQueryContext;
struct UGPAudioEventAsset;
struct UGPBattleFieldSystem;
struct UGPModularWeaponDesc;
struct UGameplayEffect;
struct UGridPanel;
struct UHudManager;
struct UImage;
struct ULineBatchComponent;
struct UMapInfoSystem;
struct UMaterialInstance;
struct UPaperSprite;
struct UPrimitiveComponent;
struct UProceduralMeshComponent;
struct URedeployConfig;
struct UScaleBox;
struct USceneComponent;
struct UShapeComponent;
struct USphereComponent;
struct UTextBlock;
struct UUMGSequencePlayer;
struct UUserWidget;
struct UVcrCache;
struct UWidget;
struct UWidgetAnimation;
struct UWidgetComponent;
struct FBattleFieldTipInfo;
struct FBattleFieldAudioInfo;
struct FOperatorDeathStareTimeTagConfigRow;
struct FBattleFieldMapFutureTagConfigRow;
struct FPlayerKillAssistInfo;
struct FBackGroundMusicRow;
struct FTipsDataRow;
struct FPlayerAudioDataRow;
struct FBroadcastAudioDataRow;
struct FTDMHeroItemPosInfo;
struct FTDMHeroOneItemPosInfo;
struct FVehicleSlotPartCfg;
struct FVehicleSlotCfg;
struct FVehicleModificationRule;
struct FSupportAbilityInfo;
struct FWorkingHeroAndBag;
struct FPBWeaponInfo;
struct FBreakthroughFakeWeaponData;
struct FPBWeaponAttrInfo;
struct FBreakthroughFakeWeaponComponentData;
struct FBreakthroughFakeHeroData;
struct FTDMSoldierPropsStore;
struct FTDMWeaponPresetStore;
struct FTDMWeaponPreset;
struct FTDMWeaponStore;
struct FTDMArm;
struct FTDMBag;
struct FTDMHero;
struct FTDMBagItemInfo;
struct FTDMArmedPresetRow;
struct FRpcInfoRow;
struct FInGameReplaceBagData;
struct FInGameReplaceExpertData;
struct FInGameGeneratorExpertDataConfigRow;
struct FPvpAIFightBehavior;
struct FPvpAiRescueWill;
struct FPvpAiAntiVehicleWill;
struct FPvpAIRunBehaviorDebugInfo;
struct FAgainstVehicleConfig;
struct FPvpAIVehicleTargetInfo;
struct FPvpAIFightTargetInfo;
struct FTargetFiringRatio;
struct FTargetPoseRatio;
struct FTargetVisionRatio;
struct FSelfVisionBlockRatio;
struct FThreatThreshold;
struct FPvpAICoverPoint;
struct FPvpAiOverviewCampInfo;
struct FPvpAiOverviewNameValPair;
struct FPvpAiOverviewObjectiveInfo;
struct FPvpImpendingDeathSosInfo;
struct FPvpImpendingDeathSosAroundEnemy;
struct FPvpSectorBattleRouteInfo;
struct FPvpAIPeekInfo;
struct FPvpAIPosePoint;
struct FWallCoverPoint;
struct UBattleFieldAudioPlayerComponent;
struct ABattleFieldCapturePoint;
struct ABattleFieldCharacter;
struct UBattleFieldCharacterDeathConfigMgr;
struct UBattleFieldDSLogic;
struct UBattleFieldMapFutureTagConfigManager;
struct UOperatorDeathStareTimeTagDataManager;
struct ABattleFieldGameMode;
struct UBattleFieldGameplayDelegates;
struct ABattleFieldGameState;
struct UBattleFieldHealthDataComponent;
struct ABattleFieldHUD;
struct UBattleFieldMapHUDController;
struct UBattleFieldMapMarkerIconHUDView;
struct UBattleFieldMapMarkerIconHUDController;
struct UBattleFieldNotifySubSystem;
struct UBattleFieldPlayerSettlementComponent;
struct ABattleFieldPlayerState;
struct UBattlefieldRebornComponent;
struct UBattleFieldRedeployView;
struct URedeployBaseUIViewFramework;
struct UBattleFieldRedeployViewFramework;
struct ABattleFieldRepPolicy;
struct UBattleFieldSettlementView;
struct UBattleFieldStatisticsComponent;
struct UBattleFieldTeamIconHUDView;
struct UBattleFieldTeamIconHUDController;
struct ABattleFieldTeamSystem;
struct UBattleFieldUtil;
struct UBattleReportTipsView;
struct UBigMapBattleFieldHUDView;
struct UBTTQ_PvpAIDynamicRunBehavior;
struct ACanMakeDamageBreakablePawn;
struct UCapturePointIconHUDView;
struct UCapturePointIconHUDController;
struct UCapturePointMarker;
struct UCapturePointViewItem;
struct UCollectRpcDiffCommandlet;
struct UCollectVersionDiffNoRegisterRpcCommandlet;
struct ACoverDebugger;
struct UDFMEQSGenerator_NavmeshCoverWallPoint;
struct UEQSContext_AllThreatTargets;
struct UEQTest_AvoidThreatTargets;
struct UEQTest_AvoidThreatTargetsIncludingMainTarget;
struct UEQTest_AvoidOptionalThreat;
struct UEQTest_CannPeekTargetBehindWall;
struct UEQTest_VisibilityToCapturePoint;
struct UFingerGestureWidget;
struct UPlayerGMComponentBattleField;
struct UBattleFieldInGameGeneratorExpertDataConfigManager;
struct UPvpAIComponent;
struct APvpAIDebugInfo;
struct UPVPAIJobs;
struct UMoveToCapturePointJob;
struct UMoveToCapturePointFlankJob;
struct APvpAiOverviewDebugInfo;
struct APvpAiPersonDetailDebugInfo;
struct APVPAISubsystem;
struct UDFMEQSItemType_WallCoverPoint;
struct AVCRBuilder;
struct AVCRManager;
struct AVCRViewCell;
struct UWeaponChange;
struct UWeaponSwitchView;

// Object: Enum BattleField.EBattleState
enum class EBattleState : uint8_t
{
	SelfCapturing = 0,
	OpponentCapturing = 1,
	Battling = 2,
	EBattleState_MAX = 3
};

// Object: Enum BattleField.ECaptureState
enum class ECaptureState : uint8_t
{
	Captured = 0,
	CapturedButBattling = 1,
	Neutral = 2,
	ECaptureState_MAX = 3
};

// Object: Enum BattleField.EGameStateChange
enum class EGameStateChange : uint8_t
{
	CampScore = 0,
	MVP = 1,
	EGameStateChange_MAX = 2
};

// Object: Enum BattleField.EBattleFieldMapMarkerType
enum class EBattleFieldMapMarkerType : uint8_t
{
	None = 0,
	CampMate = 1,
	CampMateBeKilled = 2,
	EnemyOnFire = 3,
	TeamMateBeKilled = 4,
	EnemyBeKilled = 5,
	MarkedEnemy = 6,
	HoldFlagEnemy = 7,
	EBattleFieldMapMarkerType_MAX = 8
};

// Object: Enum BattleField.EBackGroundMusicType
enum class EBackGroundMusicType : uint8_t
{
	None = 0,
	EnterTheGame = 1,
	GameStart = 2,
	Death = 3,
	Deploy = 4,
	Revive = 5,
	Sector3BGM = 6,
	EBackGroundMusicType_MAX = 7
};

// Object: Enum BattleField.EBGMContentType
enum class EBGMContentType : uint8_t
{
	Normal = 0,
	DFvsHawke = 1,
	EBGMContentType_MAX = 2
};

// Object: Enum BattleField.EBattleFieldTipType
enum class EBattleFieldTipType : uint8_t
{
	None = 0,
	GameStart = 1,
	LeaveWarZoneTemporarily = 2,
	DieforLeaveWarZone = 3,
	DominantLeadsby5 = 4,
	UnderdogDownby5 = 5,
	DominantScoresMoreThanHalf = 6,
	DominantScoresNinetyPercent = 7,
	GameOver = 8,
	Settlement = 9,
	EnemyTakeOverOccupySuccessfully = 10,
	TakeOverOccupySuccessfully = 11,
	UnderdogOvertakes = 12,
	HalfTheGameTime = 13,
	OnlyTenPercentOfTheGameTimeIsLeft = 14,
	BreakthroughGameStart = 100,
	BreakthroughSectorActived = 101,
	BreakthroughSectorOccupyStatusChanged = 102,
	BreakthroughStayInSectorOccupyed = 103,
	BreakthroughEnemyTakeOverOccupyMoreThanHalf = 104,
	BreakthroughDesperateCounterattack = 105,
	BreakthroughHalfTimeRemain = 106,
	BreakthroughNoTime = 107,
	BreakthroughTakeOverOccupyMoreThanHalf = 108,
	EBattleFieldTipType_MAX = 109
};

// Object: Enum BattleField.EPlayerAudioType
enum class EPlayerAudioType : uint8_t
{
	None = 0,
	GameFirstKill = 1,
	TeammateIntoSuppressedState = 2,
	MedicPullsUpTeammate = 3,
	TripleKill = 4,
	TeammateTripleKill = 5,
	ResidualBloodAntiKill = 6,
	ResidualBloodAntiKillByEnemy = 7,
	PlayerChangeBullets = 8,
	BeingHit = 9,
	IntoSuppressedState = 10,
	Grenade = 11,
	ThrowableInTwoM = 12,
	BeingGrenade = 13,
	HelpMe1 = 14,
	HelpMe2 = 15,
	CaptainMakeTarget = 16,
	Medic = 17,
	NeedAmmo = 18,
	GiveTeamMateAmmo = 19,
	PreventEnemyFromOccupyByEnemy = 20,
	PreventEnemyFromOccupyByTeamMate = 21,
	AAAAAAAAAAAA = 22,
	SpotSniper = 23,
	EnemyDownBySniper = 24,
	ChargeEnemyBuilding = 25,
	ChargeEnemyBuildingByTeamMate = 26,
	TargetMarked = 27,
	SpotEnemy = 28,
	KnockDownEnemy = 29,
	EnemyKnockedDown = 30,
	KnockDownEnemyByHead = 31,
	EnemyKnockedDownByHead = 32,
	WatchOutExplosive = 33,
	Death = 34,
	Dialogue_AmmoReceived = 35,
	Dialogue_Recover = 36,
	Dialogue_Die = 37,
	EPlayerAudioType_MAX = 38
};

// Object: Enum BattleField.EBroadcastAudioType
enum class EBroadcastAudioType : uint8_t
{
	None = 0,
	GameStart = 1,
	LeaveWarZoneTemporarily = 2,
	DieforLeaveWarZone = 3,
	DominantLeadsby5 = 4,
	DominantScoresMoreThanHalf = 5,
	DominantScoresNinetyPercent = 6,
	UnderdogOvertakes = 7,
	GameOver = 8,
	TakeOverOccupyMoreThanHalf = 9,
	TakeOverOccupySuccessfully = 10,
	EnemyTakeOverOccupyMoreThanHalf = 11,
	EnemyTakeOverOccupySuccessfully = 12,
	BreakthroughGameStart = 100,
	BreakthroughSectorActived = 101,
	BreakthroughSectorOccupyStatusChanged = 102,
	BreakthroughStayInSectorOccupyed = 103,
	BreakthroughEnemyTakeOverOccupyMoreThanHalf = 104,
	BreakthroughDesperateCounterattack = 105,
	BreakthroughHalfTimeRemain = 106,
	BreakthroughNoTime = 107,
	BreakthroughSector2Win = 108,
	EBroadcastAudioType_MAX = 109
};

// Object: Enum BattleField.EPlayerAudioListener
enum class EPlayerAudioListener : uint8_t
{
	All = 0,
	Owner = 1,
	Team = 2,
	TeamSelf = 3,
	SameCamp = 4,
	SameCampWithoutSelf = 5,
	EPlayerAudioListener_MAX = 6
};

// Object: Enum BattleField.EWeakTipsViewType
enum class EWeakTipsViewType : uint8_t
{
	None = 0,
	TipsWeakBroadcast = 1,
	IconWeakBroadcast = 2,
	NumberWeakBroadcast = 3,
	IconNumberWeakBroadcast = 4,
	EWeakTipsViewType_MAX = 5
};

// Object: Enum BattleField.EStrongTipsViewType
enum class EStrongTipsViewType : uint8_t
{
	None = 0,
	SpecialStrongBroadcast = 1,
	GeneralStrongBroadcast = 2,
	WirelessDialogBroadcast = 3,
	IconStrongBroadcast = 4,
	EStrongTipsViewType_MAX = 5
};

// Object: Enum BattleField.ETipLevelType
enum class ETipLevelType : uint8_t
{
	None = 0,
	Strong = 1,
	Weak = 2,
	Order = 3,
	ETipLevelType_MAX = 4
};

// Object: Enum BattleField.ETipColorType
enum class ETipColorType : uint8_t
{
	Normal = 0,
	Positive = 1,
	Negative = 2,
	ETipColorType_MAX = 3
};

// Object: Enum BattleField.EContentType
enum class EContentType : uint8_t
{
	Normal = 0,
	CampDiff = 1,
	Custom = 2,
	EContentType_MAX = 3
};

// Object: Enum BattleField.ENotifyListener
enum class ENotifyListener : uint8_t
{
	None = 0,
	All = 1,
	TargetPlayer = 2,
	CurrentDominantCamp = 3,
	SameCamp = 4,
	EnemyCamp = 5,
	OffenseCamp = 6,
	DefenseCamp = 7,
	SameTeam = 8,
	ENotifyListener_MAX = 9
};

// Object: Enum BattleField.EPropBindingType
enum class EPropBindingType : uint8_t
{
	BindingBinded = 0,
	BindingNotBind = 1,
	BindingTeammate = 2,
	EPropBindingType_MAX = 3
};

// Object: Enum BattleField.EPvpAIThreatLevel
enum class EPvpAIThreatLevel : uint8_t
{
	Undefined = 0,
	Low = 1,
	Middle = 2,
	High = 3,
	Max = 4
};

// Object: Enum BattleField.EPvpAIVisibleState
enum class EPvpAIVisibleState : uint8_t
{
	Block = 0,
	Foliage = 1,
	Visible = 2,
	EPvpAIVisibleState_MAX = 3
};

// Object: Enum BattleField.EPVPAIJobType
enum class EPVPAIJobType : uint8_t
{
	MoveToCapturePoint_Camp = 0,
	MoveToCapturePoint_Flank = 1,
	Invalid = 2,
	EPVPAIJobType_MAX = 3
};

// Object: Enum BattleField.EPoseType
enum class EPoseType : uint8_t
{
	Low = 0,
	High = 1,
	Invalid = 2,
	EPoseType_MAX = 3
};

// Object: Enum BattleField.EPvpAIJobAssignType
enum class EPvpAIJobAssignType : uint8_t
{
	AbortOld = 0,
	Interrupt = 1,
	Enqueue = 2,
	EPvpAIJobAssignType_MAX = 3
};

// Object: ScriptStruct BattleField.BattleFieldTipInfo
// Size: 0x20 (Inherited: 0x0)
struct FBattleFieldTipInfo
{
	EBattleFieldTipType Type; // 0x0(0x1)
	uint8_t Pad_0x1[0x3]; // 0x1(0x3)
	float TriggerTime; // 0x4(0x4)
	uint64_t PlayerUin; // 0x8(0x8)
	int32_t PlayerCamp; // 0x10(0x4)
	int32_t CurDominantCamp; // 0x14(0x4)
	uint8_t Pad_0x18[0x8]; // 0x18(0x8)
};

// Object: ScriptStruct BattleField.BattleFieldAudioInfo
// Size: 0x30 (Inherited: 0x0)
struct FBattleFieldAudioInfo
{
	uint8_t bIsPlayerAudio : 1; // 0x0(0x1), Mask(0x1)
	uint8_t BitPad_0x0_1 : 7; // 0x0(0x1)
	uint8_t Pad_0x1[0x3]; // 0x1(0x3)
	int32_t Type; // 0x4(0x4)
	float TriggerTime; // 0x8(0x4)
	uint8_t Pad_0xC[0x4]; // 0xC(0x4)
	uint64_t PlayerUin; // 0x10(0x8)
	int32_t PlayerCamp; // 0x18(0x4)
	int32_t CurDominantCamp; // 0x1C(0x4)
	struct FName CapturePointName; // 0x20(0x8)
	struct ACHARACTER* PlayerCharacter; // 0x28(0x8)
};

// Object: ScriptStruct BattleField.OperatorDeathStareTimeTagConfigRow
// Size: 0x40 (Inherited: 0x10)
struct FOperatorDeathStareTimeTagConfigRow : FDescRowBase
{
	struct FName Tag; // 0x10(0x8)
	struct UCurveFloat* TurnCameraToEnemyCurve; // 0x18(0x8)
	struct UCurveFloat* FovZoomOutCurve; // 0x20(0x8)
	float KillerMarkTime; // 0x28(0x4)
	uint8_t Pad_0x2C[0x4]; // 0x2C(0x4)
	struct UCurveFloat* TurnCameraToSelfCurve; // 0x30(0x8)
	struct UCurveFloat* FovZoomInCurve; // 0x38(0x8)
};

// Object: ScriptStruct BattleField.BattleFieldMapFutureTagConfigRow
// Size: 0x28 (Inherited: 0x10)
struct FBattleFieldMapFutureTagConfigRow : FDescRowBase
{
	struct FName MapFutureTagName; // 0x10(0x8)
	struct TArray<EBattleFieldMapFutureTag> BattleFieldMapFutureTags; // 0x18(0x10)
};

// Object: ScriptStruct BattleField.PlayerKillAssistInfo
// Size: 0xB0 (Inherited: 0x0)
struct FPlayerKillAssistInfo
{
	uint8_t bIsKill : 1; // 0x0(0x1), Mask(0x1)
	uint8_t BitPad_0x0_1 : 7; // 0x0(0x1)
	uint8_t Pad_0x1[0x7]; // 0x1(0x7)
	uint64_t KillerOrAssisterUin; // 0x8(0x8)
	uint64_t BeKillederUin; // 0x10(0x8)
	uint8_t bBeKillerIsBot : 1; // 0x18(0x1), Mask(0x1)
	uint8_t BitPad_0x18_1 : 7; // 0x18(0x1)
	uint8_t Pad_0x19[0x3]; // 0x19(0x3)
	uint32_t ArmedForceID; // 0x1C(0x4)
	int32_t CurrentSelectedBagID; // 0x20(0x4)
	uint32_t SkillId; // 0x24(0x4)
	uint64_t WeaponID; // 0x28(0x8)
	struct TArray<uint64_t> WeaponModuleID; // 0x30(0x10)
	struct TMap<uint64_t, float> WeaponDamage; // 0x40(0x50)
	float TotalDamage; // 0x90(0x4)
	float Timestamp; // 0x94(0x4)
	struct FVector KillerPos; // 0x98(0xC)
	struct FVector BeKillerPos; // 0xA4(0xC)
};

// Object: ScriptStruct BattleField.BackGroundMusicRow
// Size: 0x20 (Inherited: 0x8)
struct FBackGroundMusicRow : FTableRowBase
{
	EBackGroundMusicType Type; // 0x8(0x1)
	EBGMContentType ContentType; // 0x9(0x1)
	uint8_t Pad_0xA[0x6]; // 0xA(0x6)
	struct TArray<struct TSoftObjectPtr<UGPAudioEventAsset>> AudioEvents; // 0x10(0x10)
};

// Object: ScriptStruct BattleField.TipsDataRow
// Size: 0x48 (Inherited: 0x8)
struct FTipsDataRow : FTableRowBase
{
	EBattleFieldTipType Type; // 0x8(0x1)
	uint8_t Pad_0x9[0x3]; // 0x9(0x3)
	float Intervals; // 0xC(0x4)
	int32_t ValidDuration; // 0x10(0x4)
	ENotifyListener Listener; // 0x14(0x1)
	uint8_t Pad_0x15[0x3]; // 0x15(0x3)
	struct TArray<struct FText> Texts; // 0x18(0x10)
	float ShowDuration; // 0x28(0x4)
	EContentType ContentType; // 0x2C(0x1)
	ETipColorType ColorType; // 0x2D(0x1)
	ETipLevelType StrongLevelType; // 0x2E(0x1)
	uint8_t Pad_0x2F[0x1]; // 0x2F(0x1)
	int32_t Order; // 0x30(0x4)
	uint8_t Pad_0x34[0x4]; // 0x34(0x4)
	struct TArray<struct TSoftObjectPtr<UGPAudioEventAsset>> AudioEvents; // 0x38(0x10)
};

// Object: ScriptStruct BattleField.PlayerAudioDataRow
// Size: 0x48 (Inherited: 0x8)
struct FPlayerAudioDataRow : FTableRowBase
{
	EPlayerAudioType Type; // 0x8(0x1)
	uint8_t Pad_0x9[0x3]; // 0x9(0x3)
	int32_t Order; // 0xC(0x4)
	float Intervals; // 0x10(0x4)
	int32_t ValidDuration; // 0x14(0x4)
	float FadeDistance; // 0x18(0x4)
	uint8_t Pad_0x1C[0x4]; // 0x1C(0x4)
	struct TArray<struct TSoftObjectPtr<UGPAudioEventAsset>> DeltaAudioEvents; // 0x20(0x10)
	struct TArray<struct TSoftObjectPtr<UGPAudioEventAsset>> HaavkAudioEvents; // 0x30(0x10)
	EPlayerAudioListener AudioListener; // 0x40(0x1)
	uint8_t Pad_0x41[0x7]; // 0x41(0x7)
};

// Object: ScriptStruct BattleField.BroadcastAudioDataRow
// Size: 0x30 (Inherited: 0x8)
struct FBroadcastAudioDataRow : FTableRowBase
{
	EBroadcastAudioType Type; // 0x8(0x1)
	uint8_t Pad_0x9[0x3]; // 0x9(0x3)
	float Intervals; // 0xC(0x4)
	int32_t ValidDuration; // 0x10(0x4)
	ENotifyListener Listener; // 0x14(0x1)
	uint8_t Pad_0x15[0x3]; // 0x15(0x3)
	struct TArray<struct TSoftObjectPtr<UGPAudioEventAsset>> AudioEvents; // 0x18(0x10)
	EContentType ContentType; // 0x28(0x1)
	uint8_t Pad_0x29[0x7]; // 0x29(0x7)
};

// Object: ScriptStruct BattleField.TDMHeroItemPosInfo
// Size: 0x20 (Inherited: 0x0)
struct FTDMHeroItemPosInfo
{
	uint64_t HeroId; // 0x0(0x8)
	uint64_t ExpertId; // 0x8(0x8)
	struct TArray<struct FTDMHeroOneItemPosInfo> ItemPosInfos; // 0x10(0x10)
};

// Object: ScriptStruct BattleField.TDMHeroOneItemPosInfo
// Size: 0x10 (Inherited: 0x0)
struct FTDMHeroOneItemPosInfo
{
	EAttachPosition AttachPosition; // 0x0(0x4)
	uint8_t Pad_0x4[0x4]; // 0x4(0x4)
	uint64_t ItemID; // 0x8(0x8)
};

// Object: ScriptStruct BattleField.VehicleSlotPartCfg
// Size: 0x10 (Inherited: 0x0)
struct FVehicleSlotPartCfg
{
	uint64_t PartItemId; // 0x0(0x8)
	int32_t UnLockType; // 0x8(0x4)
	uint32_t UnlockParam; // 0xC(0x4)
};

// Object: ScriptStruct BattleField.VehicleSlotCfg
// Size: 0x68 (Inherited: 0x0)
struct FVehicleSlotCfg
{
	int32_t SlotId; // 0x0(0x4)
	uint8_t Pad_0x4[0x4]; // 0x4(0x4)
	struct TArray<struct FVehicleSlotPartCfg> Parts; // 0x8(0x10)
	struct TMap<uint64_t, struct FVehicleSlotPartCfg> PartMap; // 0x18(0x50)
};

// Object: ScriptStruct BattleField.VehicleModificationRule
// Size: 0x68 (Inherited: 0x0)
struct FVehicleModificationRule
{
	uint64_t VehicleItemID; // 0x0(0x8)
	struct TArray<struct FVehicleSlotCfg> VehicleSlotCfgs; // 0x8(0x10)
	struct TMap<int32_t, struct FVehicleSlotCfg> VehicleSlotCfgMap; // 0x18(0x50)
};

// Object: ScriptStruct BattleField.SupportAbilityInfo
// Size: 0x8 (Inherited: 0x0)
struct FSupportAbilityInfo
{
	int32_t Score; // 0x0(0x4)
	int32_t LevelScore; // 0x4(0x4)
};

// Object: ScriptStruct BattleField.WorkingHeroAndBag
// Size: 0x18 (Inherited: 0x0)
struct FWorkingHeroAndBag
{
	uint32_t ArmedForceID; // 0x0(0x4)
	uint8_t Pad_0x4[0x4]; // 0x4(0x4)
	uint64_t ExpertId; // 0x8(0x8)
	uint64_t CurrentSelectedHeroID; // 0x10(0x8)
};

// Object: ScriptStruct BattleField.PBWeaponInfo
// Size: 0x18 (Inherited: 0x0)
struct FPBWeaponInfo
{
	int64_t Exp; // 0x0(0x8)
	struct TArray<struct FPBWeaponAttrInfo> AttrSet; // 0x8(0x10)
};

// Object: ScriptStruct BattleField.BreakthroughFakeWeaponData
// Size: 0x48 (Inherited: 0x10)
struct FBreakthroughFakeWeaponData : FDescRowBase
{
	uint64_t ItemID; // 0x10(0x8)
	uint64_t ItemGid; // 0x18(0x8)
	struct TArray<uint64_t> ComponentItemGIDs; // 0x20(0x10)
	struct FPBWeaponInfo WeaponInfo; // 0x30(0x18)
};

// Object: ScriptStruct BattleField.PBWeaponAttrInfo
// Size: 0x10 (Inherited: 0x0)
struct FPBWeaponAttrInfo
{
	int64_t TuneId; // 0x0(0x8)
	float TuneValue; // 0x8(0x4)
	uint8_t Pad_0xC[0x4]; // 0xC(0x4)
};

// Object: ScriptStruct BattleField.BreakthroughFakeWeaponComponentData
// Size: 0x58 (Inherited: 0x10)
struct FBreakthroughFakeWeaponComponentData : FDescRowBase
{
	uint64_t ItemID; // 0x10(0x8)
	uint64_t ItemGid; // 0x18(0x8)
	int32_t Slot; // 0x20(0x4)
	uint8_t Pad_0x24[0x4]; // 0x24(0x4)
	struct FPBWeaponInfo WeaponInfo; // 0x28(0x18)
	EPropBindingType BindType; // 0x40(0x1)
	uint8_t Pad_0x41[0x7]; // 0x41(0x7)
	struct TArray<uint64_t> ComponentItemGIDs; // 0x48(0x10)
};

// Object: ScriptStruct BattleField.BreakthroughFakeHeroData
// Size: 0x58 (Inherited: 0x10)
struct FBreakthroughFakeHeroData : FDescRowBase
{
	uint64_t HeroId; // 0x10(0x8)
	int32_t ArmedForceID; // 0x18(0x4)
	uint8_t Pad_0x1C[0x4]; // 0x1C(0x4)
	uint64_t ExpertId; // 0x20(0x8)
	uint8_t bUnlocked : 1; // 0x28(0x1), Mask(0x1)
	uint8_t BitPad_0x28_1 : 7; // 0x28(0x1)
	uint8_t bArmedForceUsing : 1; // 0x29(0x1), Mask(0x1)
	uint8_t BitPad_0x29_1 : 7; // 0x29(0x1)
	uint8_t Pad_0x2A[0x6]; // 0x2A(0x6)
	uint64_t HeroFashionId; // 0x30(0x8)
	uint64_t MainWeaponID; // 0x38(0x8)
	uint64_t SecondaryWeaponID; // 0x40(0x8)
	uint64_t MeleeWeaponID; // 0x48(0x8)
	uint64_t SoldierPropsID; // 0x50(0x8)
};

// Object: ScriptStruct BattleField.TDMSoldierPropsStore
// Size: 0xA0 (Inherited: 0x0)
struct FTDMSoldierPropsStore
{
	uint8_t Pad_0x0[0xA0]; // 0x0(0xA0)
};

// Object: ScriptStruct BattleField.TDMWeaponPresetStore
// Size: 0x50 (Inherited: 0x0)
struct FTDMWeaponPresetStore
{
	uint8_t Pad_0x0[0x50]; // 0x0(0x50)
};

// Object: ScriptStruct BattleField.TDMWeaponPreset
// Size: 0x850 (Inherited: 0x0)
struct FTDMWeaponPreset
{
	struct FInventoryItemInfo InventoryItemInfo; // 0x0(0x7C0)
	struct FMPInventoryItemInfo MPInventoryItemInfo; // 0x7C0(0x78)
	struct FString PresetName; // 0x838(0x10)
	int32_t Index; // 0x848(0x4)
	uint8_t bAvailable : 1; // 0x84C(0x1), Mask(0x1)
	uint8_t BitPad_0x84C_1 : 7; // 0x84C(0x1)
	uint8_t bIsEmpty : 1; // 0x84D(0x1), Mask(0x1)
	uint8_t BitPad_0x84D_1 : 7; // 0x84D(0x1)
	uint8_t Pad_0x84E[0x2]; // 0x84E(0x2)
};

// Object: ScriptStruct BattleField.TDMWeaponStore
// Size: 0xA0 (Inherited: 0x0)
struct FTDMWeaponStore
{
	uint8_t Pad_0x0[0xA0]; // 0x0(0xA0)
};

// Object: ScriptStruct BattleField.TDMArm
// Size: 0x20 (Inherited: 0x0)
struct FTDMArm
{
	int32_t ArmedForceID; // 0x0(0x4)
	uint8_t Pad_0x4[0x4]; // 0x4(0x4)
	uint64_t CurrentUseHeroID; // 0x8(0x8)
	struct TArray<struct FTDMHero> Heros; // 0x10(0x10)
};

// Object: ScriptStruct BattleField.TDMBag
// Size: 0x20 (Inherited: 0x0)
struct FTDMBag
{
	uint64_t BagId; // 0x0(0x8)
	struct TArray<struct FTDMBagItemInfo> ItemArr; // 0x8(0x10)
	uint8_t bDirtyInLastTimeRedeployWithThisBag : 1; // 0x18(0x1), Mask(0x1)
	uint8_t BitPad_0x18_1 : 7; // 0x18(0x1)
	uint8_t bDirtyInThisRound : 1; // 0x19(0x1), Mask(0x1)
	uint8_t BitPad_0x19_1 : 7; // 0x19(0x1)
	uint8_t Pad_0x1A[0x6]; // 0x1A(0x6)
};

// Object: ScriptStruct BattleField.TDMHero
// Size: 0xE8 (Inherited: 0x0)
struct FTDMHero
{
	uint64_t HeroId; // 0x0(0x8)
	uint64_t HeroFashionId; // 0x8(0x8)
	uint64_t ExpertId; // 0x10(0x8)
	struct FTDMBag Bag; // 0x18(0x20)
	struct FTDMBag BagForSettlementShow; // 0x38(0x20)
	uint8_t Pad_0x58[0x90]; // 0x58(0x90)
};

// Object: ScriptStruct BattleField.TDMBagItemInfo
// Size: 0x18 (Inherited: 0x0)
struct FTDMBagItemInfo
{
	EAttachPosition AttachPosition; // 0x0(0x4)
	uint8_t Pad_0x4[0x4]; // 0x4(0x4)
	uint64_t ItemID; // 0x8(0x8)
	uint64_t ItemGid; // 0x10(0x8)
};

// Object: ScriptStruct BattleField.TDMArmedPresetRow
// Size: 0x60 (Inherited: 0x10)
struct FTDMArmedPresetRow : FDescRowBase
{
	uint32_t ID; // 0x10(0x4)
	uint32_t ExpertId; // 0x14(0x4)
	uint32_t ArmedForceID; // 0x18(0x4)
	uint8_t Pad_0x1C[0x4]; // 0x1C(0x4)
	struct FString ArmedForceDesc; // 0x20(0x10)
	uint32_t pos; // 0x30(0x4)
	uint8_t Pad_0x34[0x4]; // 0x34(0x4)
	struct FString PosDesc; // 0x38(0x10)
	uint64_t PropId; // 0x48(0x8)
	struct FString Desc; // 0x50(0x10)
};

// Object: ScriptStruct BattleField.RpcInfoRow
// Size: 0x88 (Inherited: 0x8)
struct FRpcInfoRow : FTableRowBase
{
	struct FString RPC; // 0x8(0x10)
	struct FString Direction; // 0x18(0x10)
	struct FString GameMode; // 0x28(0x10)
	struct FString Story; // 0x38(0x10)
	struct FString Comment; // 0x48(0x10)
	struct FString Owner; // 0x58(0x10)
	struct FString CheckParam; // 0x68(0x10)
	struct FString Safety; // 0x78(0x10)
};

// Object: ScriptStruct BattleField.InGameReplaceBagData
// Size: 0x38 (Inherited: 0x0)
struct FInGameReplaceBagData
{
	uint64_t MainWeaponID; // 0x0(0x8)
	uint64_t MainWeaponPresetID; // 0x8(0x8)
	uint64_t SecondaryWeaponID; // 0x10(0x8)
	uint64_t SecondaryWeaponPresetID; // 0x18(0x8)
	uint64_t MeleeWeaponID; // 0x20(0x8)
	uint64_t MeleeWeaponPresetID; // 0x28(0x8)
	uint64_t ArmedForceTDMPropID; // 0x30(0x8)
};

// Object: ScriptStruct BattleField.InGameReplaceExpertData
// Size: 0x20 (Inherited: 0x0)
struct FInGameReplaceExpertData
{
	uint64_t ExpertId; // 0x0(0x8)
	int32_t ArmedForceID; // 0x8(0x4)
	uint8_t Pad_0xC[0x4]; // 0xC(0x4)
	uint64_t HeroId; // 0x10(0x8)
	uint64_t HeroFashionId; // 0x18(0x8)
};

// Object: ScriptStruct BattleField.InGameGeneratorExpertDataConfigRow
// Size: 0xC0 (Inherited: 0x10)
struct FInGameGeneratorExpertDataConfigRow : FDescRowBase
{
	struct FName InGameGeneratorTagName; // 0x10(0x8)
	struct TMap<uint64_t, struct FInGameReplaceExpertData> ReplaceExpertData; // 0x18(0x50)
	struct TMap<uint64_t, struct FInGameReplaceBagData> ReplaceBackpackData; // 0x68(0x50)
	uint8_t bDisablePreset : 1; // 0xB8(0x1), Mask(0x1)
	uint8_t BitPad_0xB8_1 : 7; // 0xB8(0x1)
	uint8_t Pad_0xB9[0x7]; // 0xB9(0x7)
};

// Object: ScriptStruct BattleField.PvpAIFightBehavior
// Size: 0x88 (Inherited: 0x10)
struct FPvpAIFightBehavior : FDescRowBase
{
	struct TSoftObjectPtr<UBehaviorTree> HighThreatBehavior; // 0x10(0x28)
	struct TSoftObjectPtr<UBehaviorTree> MiddleThreatBehavior; // 0x38(0x28)
	struct TSoftObjectPtr<UBehaviorTree> LowThreatBehavior; // 0x60(0x28)
};

// Object: ScriptStruct BattleField.PvpAiRescueWill
// Size: 0x20 (Inherited: 0x10)
struct FPvpAiRescueWill : FDescRowBase
{
	EPvpAIThreatLevel EnvConditionMainTargetThreat; // 0x10(0x1)
	EPvpAIThreatLevel EnvConditionMainTargetVulnerable; // 0x11(0x1)
	EPvpAIThreatLevel EnvConditionAmbientThreat; // 0x12(0x1)
	uint8_t Pad_0x13[0x1]; // 0x13(0x1)
	float MaxDistance; // 0x14(0x4)
	float CD; // 0x18(0x4)
	uint8_t Pad_0x1C[0x4]; // 0x1C(0x4)
};

// Object: ScriptStruct BattleField.PvpAiAntiVehicleWill
// Size: 0x20 (Inherited: 0x10)
struct FPvpAiAntiVehicleWill : FDescRowBase
{
	EPvpAIThreatLevel EnvConditionMainTargetThreat; // 0x10(0x1)
	EPvpAIThreatLevel EnvConditionMainTargetVulnerable; // 0x11(0x1)
	EPvpAIThreatLevel EnvConditionAmbientThreat; // 0x12(0x1)
	uint8_t Pad_0x13[0x1]; // 0x13(0x1)
	float MaxDistance; // 0x14(0x4)
	int32_t LoopTimes; // 0x18(0x4)
	float CD; // 0x1C(0x4)
};

// Object: ScriptStruct BattleField.PvpAIRunBehaviorDebugInfo
// Size: 0x60 (Inherited: 0x0)
struct FPvpAIRunBehaviorDebugInfo
{
	uint8_t Pad_0x0[0x60]; // 0x0(0x60)
};

// Object: ScriptStruct BattleField.AgainstVehicleConfig
// Size: 0x1C (Inherited: 0x0)
struct FAgainstVehicleConfig
{
	struct TWeakObjectPtr<struct ADFMVehicleBase> Vehicle; // 0x0(0x8)
	float SightThreatValue; // 0x8(0x4)
	float DamageThreatValue; // 0xC(0x4)
	float AirHitThreatValue; // 0x10(0x4)
	float threatValue; // 0x14(0x4)
	float VulnerableValue; // 0x18(0x4)
};

// Object: ScriptStruct BattleField.PvpAIVehicleTargetInfo
// Size: 0x1C (Inherited: 0x0)
struct FPvpAIVehicleTargetInfo
{
	struct TWeakObjectPtr<struct AGPVehicleBase> Vehicle; // 0x0(0x8)
	float SightThreat; // 0x8(0x4)
	float DamageThreat; // 0xC(0x4)
	float AirhitThreat; // 0x10(0x4)
	float threatValue; // 0x14(0x4)
	float VulnerableValue; // 0x18(0x4)
};

// Object: ScriptStruct BattleField.PvpAIFightTargetInfo
// Size: 0x18 (Inherited: 0x0)
struct FPvpAIFightTargetInfo
{
	struct ADFMCharacter* CHARACTER; // 0x0(0x8)
	float threatValue; // 0x8(0x4)
	float VulnerableValue; // 0xC(0x4)
	float FinalScore; // 0x10(0x4)
	EPvpAIThreatLevel ThreatLevel; // 0x14(0x1)
	EPvpAIThreatLevel VulnerableLevel; // 0x15(0x1)
	uint8_t Pad_0x16[0x2]; // 0x16(0x2)
};

// Object: ScriptStruct BattleField.TargetFiringRatio
// Size: 0x8 (Inherited: 0x0)
struct FTargetFiringRatio
{
	float IsFiring; // 0x0(0x4)
	float IsNotFiring; // 0x4(0x4)
};

// Object: ScriptStruct BattleField.TargetPoseRatio
// Size: 0xC (Inherited: 0x0)
struct FTargetPoseRatio
{
	float Stand; // 0x0(0x4)
	float Crouch; // 0x4(0x4)
	float Prone; // 0x8(0x4)
};

// Object: ScriptStruct BattleField.TargetVisionRatio
// Size: 0x8 (Inherited: 0x0)
struct FTargetVisionRatio
{
	float HasVision; // 0x0(0x4)
	float HasNoVision; // 0x4(0x4)
};

// Object: ScriptStruct BattleField.SelfVisionBlockRatio
// Size: 0xC (Inherited: 0x0)
struct FSelfVisionBlockRatio
{
	float NotBlocked; // 0x0(0x4)
	float FoliageBlocked; // 0x4(0x4)
	float FullyBlocked; // 0x8(0x4)
};

// Object: ScriptStruct BattleField.ThreatThreshold
// Size: 0x8 (Inherited: 0x0)
struct FThreatThreshold
{
	float Middle; // 0x0(0x4)
	float High; // 0x4(0x4)
};

// Object: ScriptStruct BattleField.PvpAICoverPoint
// Size: 0x30 (Inherited: 0x0)
struct FPvpAICoverPoint
{
	uint8_t Pad_0x0[0x20]; // 0x0(0x20)
	uint8_t bIsValid : 1; // 0x20(0x1), Mask(0x1)
	uint8_t BitPad_0x20_1 : 7; // 0x20(0x1)
	uint8_t Pad_0x21[0x3]; // 0x21(0x3)
	struct FVector Location; // 0x24(0xC)
};

// Object: ScriptStruct BattleField.PvpAiOverviewCampInfo
// Size: 0x88 (Inherited: 0x0)
struct FPvpAiOverviewCampInfo
{
	struct FString DifficultPool; // 0x0(0x10)
	int32_t BotNum; // 0x10(0x4)
	uint8_t Pad_0x14[0x4]; // 0x14(0x4)
	struct TArray<struct FPvpAiOverviewNameValPair> ArmedForceNumInfo; // 0x18(0x10)
	struct TArray<struct FPvpAiOverviewNameValPair> FightStyleNumInfo; // 0x28(0x10)
	struct TArray<struct FPvpAiOverviewNameValPair> DifficultNumInfo; // 0x38(0x10)
	struct FString StylePoolName; // 0x48(0x10)
	struct TArray<struct FPvpAiOverviewNameValPair> StyleNumInfo; // 0x58(0x10)
	int32_t KillCount; // 0x68(0x4)
	int32_t KillCountRealPlayer; // 0x6C(0x4)
	int32_t ImpDeathCount; // 0x70(0x4)
	int32_t DeathCount; // 0x74(0x4)
	int32_t SuicideCount; // 0x78(0x4)
	int32_t AssistsCount; // 0x7C(0x4)
	int32_t RescueCount; // 0x80(0x4)
	uint8_t Pad_0x84[0x4]; // 0x84(0x4)
};

// Object: ScriptStruct BattleField.PvpAiOverviewNameValPair
// Size: 0x18 (Inherited: 0x0)
struct FPvpAiOverviewNameValPair
{
	struct FString Name; // 0x0(0x10)
	int32_t Value; // 0x10(0x4)
	uint8_t Pad_0x14[0x4]; // 0x14(0x4)
};

// Object: ScriptStruct BattleField.PvpAiOverviewObjectiveInfo
// Size: 0x28 (Inherited: 0x0)
struct FPvpAiOverviewObjectiveInfo
{
	uint8_t Pad_0x0[0x28]; // 0x0(0x28)
};

// Object: ScriptStruct BattleField.PvpImpendingDeathSosInfo
// Size: 0x30 (Inherited: 0x0)
struct FPvpImpendingDeathSosInfo
{
	struct AGPCharacterBase* SosCharacter; // 0x0(0x8)
	uint8_t Pad_0x8[0x18]; // 0x8(0x18)
	struct TArray<struct AGPCharacter*> Helpers; // 0x20(0x10)
};

// Object: ScriptStruct BattleField.PvpImpendingDeathSosAroundEnemy
// Size: 0x20 (Inherited: 0x0)
struct FPvpImpendingDeathSosAroundEnemy
{
	struct APawn* Enemy; // 0x0(0x8)
	uint8_t Pad_0x8[0x18]; // 0x8(0x18)
};

// Object: ScriptStruct BattleField.PvpSectorBattleRouteInfo
// Size: 0x20 (Inherited: 0x0)
struct FPvpSectorBattleRouteInfo
{
	struct ABattleRoutePoint* SectorPoint; // 0x0(0x8)
	struct TArray<struct ABattleRoutePoint*> FlankPoints; // 0x8(0x10)
	uint8_t Pad_0x18[0x8]; // 0x18(0x8)
};

// Object: ScriptStruct BattleField.PvpAIPeekInfo
// Size: 0x20 (Inherited: 0x0)
struct FPvpAIPeekInfo
{
	uint8_t Pad_0x0[0x20]; // 0x0(0x20)
};

// Object: ScriptStruct BattleField.PvpAIPosePoint
// Size: 0x10 (Inherited: 0x0)
struct FPvpAIPosePoint
{
	uint8_t Pad_0x0[0x10]; // 0x0(0x10)
};

// Object: ScriptStruct BattleField.WallCoverPoint
// Size: 0x24 (Inherited: 0x0)
struct FWallCoverPoint
{
	struct FVector WallLeft; // 0x0(0xC)
	struct FVector WallRight; // 0xC(0xC)
	struct FVector ItemLocation; // 0x18(0xC)
};

// Object: Class BattleField.BattleFieldAudioPlayerComponent
// Size: 0x440 (Inherited: 0xF8)
struct UBattleFieldAudioPlayerComponent : UActorComponent
{
	DEFINE_UE_CLASS_HELPERS(UBattleFieldAudioPlayerComponent, "BattleFieldAudioPlayerComponent")

	struct FSoftObjectPath BroadcastAudioTablePath; // 0xF8(0x18)
	struct FSoftObjectPath PlayerAudioTablePath; // 0x110(0x18)
	struct FSoftObjectPath TipsTablePath; // 0x128(0x18)
	struct FSoftObjectPath BGMTablePath; // 0x140(0x18)
	uint8_t Pad_0x158[0x20]; // 0x158(0x20)
	struct TArray<struct UGPAudioEventAsset*> CacheBroadcastAudioArr; // 0x178(0x10)
	struct TArray<struct UGPAudioEventAsset*> CachePlayerAudioArr; // 0x188(0x10)
	struct TArray<struct UGPAudioEventAsset*> CacheBGMArr; // 0x198(0x10)
	uint8_t Pad_0x1A8[0x140]; // 0x1A8(0x140)
	struct TArray<struct FBattleFieldAudioInfo> AudioCacheArr; // 0x2E8(0x10)
	struct TArray<struct FBattleFieldAudioInfo> PlayerAudioCacheArr; // 0x2F8(0x10)
	struct TArray<struct FBattleFieldTipInfo> TipsCacheArr; // 0x308(0x10)
	struct FGPAudioFuturePlayingID CurrentBroadcastAudioId; // 0x318(0x8)
	struct FGPAudioFuturePlayingID CurrentPlayerAudioId; // 0x320(0x8)
	uint8_t Pad_0x328[0x28]; // 0x328(0x28)
	struct TMap<EBroadcastAudioType, float> BroadcastAudioTriggerTimeMap; // 0x350(0x50)
	struct TMap<EPlayerAudioType, float> PlayerAudioTriggerTimeMap; // 0x3A0(0x50)
	struct TMap<EBattleFieldTipType, float> TipsTriggerTimeMap; // 0x3F0(0x50)

	// Object: Function BattleField.BattleFieldAudioPlayerComponent.ServerTriggerTip
	// Flags: [Net|NetReliableNative|Event|Public|NetServer]
	// Offset: 0x143e3efc
	// Params: [ Num(1) Size(0x20) ]
	void ServerTriggerTip(struct FBattleFieldTipInfo TipInfo);

	// Object: Function BattleField.BattleFieldAudioPlayerComponent.ServerTriggerClientAudio
	// Flags: [Net|Native|Event|Public|NetClient]
	// Offset: 0x143e3e50
	// Params: [ Num(1) Size(0x30) ]
	void ServerTriggerClientAudio(struct FBattleFieldAudioInfo AudioInfo);

	// Object: Function BattleField.BattleFieldAudioPlayerComponent.ServerTriggerBGM
	// Flags: [Net|NetReliableNative|Event|Public|NetClient]
	// Offset: 0x143e3da4
	// Params: [ Num(1) Size(0x1) ]
	void ServerTriggerBGM(EBackGroundMusicType InType);

	// Object: Function BattleField.BattleFieldAudioPlayerComponent.ServerTriggerAudio
	// Flags: [Net|NetReliableNative|Event|Public|NetServer]
	// Offset: 0x143e3cf8
	// Params: [ Num(1) Size(0x30) ]
	void ServerTriggerAudio(struct FBattleFieldAudioInfo AudioInfo);

	// Object: Function BattleField.BattleFieldAudioPlayerComponent.ServerNetMulticastTriggerTip
	// Flags: [Net|NetReliableNative|Event|Public|NetClient]
	// Offset: 0x143e3c4c
	// Params: [ Num(1) Size(0x20) ]
	void ServerNetMulticastTriggerTip(struct FBattleFieldTipInfo TipInfo);

	// Object: Function BattleField.BattleFieldAudioPlayerComponent.OnTipsTableLoadComplete
	// Flags: [Final|Native|Protected|HasOutParms|HasDefaults]
	// Offset: 0x143e3b8c
	// Params: [ Num(1) Size(0x18) ]
	void OnTipsTableLoadComplete(const struct FSoftObjectPath& AssetRef);

	// Object: Function BattleField.BattleFieldAudioPlayerComponent.OnTipsEnd
	// Flags: [Final|Native|Protected]
	// Offset: 0x143e3b78
	// Params: [ Num(0) Size(0x0) ]
	void OnTipsEnd();

	// Object: Function BattleField.BattleFieldAudioPlayerComponent.OnPlayerAudioTableLoadComplete
	// Flags: [Final|Native|Protected|HasOutParms|HasDefaults]
	// Offset: 0x143e3ab8
	// Params: [ Num(1) Size(0x18) ]
	void OnPlayerAudioTableLoadComplete(const struct FSoftObjectPath& AssetRef);

	// Object: Function BattleField.BattleFieldAudioPlayerComponent.OnPlayerAudiosLoadComplete
	// Flags: [Final|Native|Protected]
	// Offset: 0x143e39e8
	// Params: [ Num(1) Size(0x10) ]
	void OnPlayerAudiosLoadComplete(struct TArray<struct FSoftObjectPath> Assets);

	// Object: Function BattleField.BattleFieldAudioPlayerComponent.OnPlayerAudioFinished
	// Flags: [Final|Native|Protected]
	// Offset: 0x143e3908
	// Params: [ Num(2) Size(0x8) ]
	void OnPlayerAudioFinished(EGPEventCallbackType EventCallbackType, int32_t PlayingId);

	// Object: Function BattleField.BattleFieldAudioPlayerComponent.OnOwnerCharacterDied
	// Flags: [Final|Native|Protected]
	// Offset: 0x143e37f0
	// Params: [ Num(3) Size(0x18) ]
	void OnOwnerCharacterDied(struct AGPCharacterBase* CHARACTER, struct AController* Killer, struct UDamageType* DamageType);

	// Object: Function BattleField.BattleFieldAudioPlayerComponent.OnBroadcastAudioTableLoadComplete
	// Flags: [Final|Native|Protected|HasOutParms|HasDefaults]
	// Offset: 0x143e3730
	// Params: [ Num(1) Size(0x18) ]
	void OnBroadcastAudioTableLoadComplete(const struct FSoftObjectPath& AssetRef);

	// Object: Function BattleField.BattleFieldAudioPlayerComponent.OnBroadcastAudiosLoadComplete
	// Flags: [Final|Native|Protected]
	// Offset: 0x143e3660
	// Params: [ Num(1) Size(0x10) ]
	void OnBroadcastAudiosLoadComplete(struct TArray<struct FSoftObjectPath> Assets);

	// Object: Function BattleField.BattleFieldAudioPlayerComponent.OnBroadcastAudioFinished
	// Flags: [Final|Native|Protected]
	// Offset: 0x143e3580
	// Params: [ Num(2) Size(0x8) ]
	void OnBroadcastAudioFinished(EGPEventCallbackType EventCallbackType, int32_t PlayingId);

	// Object: Function BattleField.BattleFieldAudioPlayerComponent.OnBGMTableLoadComplete
	// Flags: [Final|Native|Protected|HasOutParms|HasDefaults]
	// Offset: 0x143e34c0
	// Params: [ Num(1) Size(0x18) ]
	void OnBGMTableLoadComplete(const struct FSoftObjectPath& AssetRef);

	// Object: Function BattleField.BattleFieldAudioPlayerComponent.OnBGMLoadComplete
	// Flags: [Final|Native|Protected]
	// Offset: 0x143e33f0
	// Params: [ Num(1) Size(0x10) ]
	void OnBGMLoadComplete(struct TArray<struct FSoftObjectPath> Assets);
};

// Object: Class BattleField.BattleFieldCapturePoint
// Size: 0x540 (Inherited: 0x370)
struct ABattleFieldCapturePoint : AActor
{
	DEFINE_UE_CLASS_HELPERS(ABattleFieldCapturePoint, "BattleFieldCapturePoint")

	uint8_t Pad_0x370[0x10]; // 0x370(0x10)
	struct USceneComponent* SceneComponent; // 0x380(0x8)
	struct UShapeComponent* CollisionComp; // 0x388(0x8)
	struct UMaterialInstance* CapturedMat; // 0x390(0x8)
	struct UMaterialInstance* NeutralMat; // 0x398(0x8)
	struct UMaterialInstance* EnemyCapturedMat; // 0x3A0(0x8)
	struct AStaticMeshActor* ShowModel; // 0x3A8(0x8)
	struct FText Name; // 0x3B0(0x18)
	struct FText NameInIcon; // 0x3C8(0x18)
	int32_t RebornCloseRange; // 0x3E0(0x4)
	int32_t RebornFarRange; // 0x3E4(0x4)
	int32_t DefenseRange; // 0x3E8(0x4)
	int32_t RebornTimeLimit; // 0x3EC(0x4)
	struct TArray<struct AGPPlayerState*> Camp0OverlapedPlayer; // 0x3F0(0x10)
	struct TArray<struct AGPPlayerState*> Camp1OverlapedPlayer; // 0x400(0x10)
	float CaptureNeedValue; // 0x410(0x4)
	float Captured2NeutralNeedValue; // 0x414(0x4)
	float TickInterval; // 0x418(0x4)
	float PlayerGetValueEveryTick; // 0x41C(0x4)
	float CampCaptureIncreaseLimitValue; // 0x420(0x4)
	float CapturingGetPlayerScoreInterval; // 0x424(0x4)
	int32_t CaptureGetCampScore; // 0x428(0x4)
	int32_t CaptureGetCampScoreDelay; // 0x42C(0x4)
	struct TArray<int32_t> CampIdList; // 0x430(0x10)
	struct TArray<float> CampCaptureValue; // 0x440(0x10)
	int32_t CaptureCamp; // 0x450(0x4)
	ECaptureState CaptureState; // 0x454(0x4)
	uint8_t IsBattling : 1; // 0x458(0x1), Mask(0x1)
	uint8_t BitPad_0x458_1 : 7; // 0x458(0x1)
	uint8_t Pad_0x459[0x3]; // 0x459(0x3)
	int32_t CampAdvanced; // 0x45C(0x4)
	uint8_t Pad_0x460[0x48]; // 0x460(0x48)
	uint8_t bShowCapMarker : 1; // 0x4A8(0x1), Mask(0x1)
	uint8_t BitPad_0x4A8_1 : 7; // 0x4A8(0x1)
	uint8_t Pad_0x4A9[0x7]; // 0x4A9(0x7)
	struct TArray<struct TWeakObjectPtr<struct ADFMCharacter>> Camp0InsideCharacters; // 0x4B0(0x10)
	struct TArray<struct TWeakObjectPtr<struct ADFMCharacter>> Camp1InsideCharacters; // 0x4C0(0x10)
	struct TArray<int32_t> Camp0CaptureTimeStamp; // 0x4D0(0x10)
	struct TArray<int32_t> Camp1CaptureTimeStamp; // 0x4E0(0x10)
	struct TArray<struct ADFMAIPlayerController*> DefendingAIList; // 0x4F0(0x10)
	uint8_t Pad_0x500[0x40]; // 0x500(0x40)

	// Object: Function BattleField.BattleFieldCapturePoint.OnRep_CapturedCamp
	// Flags: [Final|Native|Protected]
	// Offset: 0x143e4440
	// Params: [ Num(1) Size(0x4) ]
	void OnRep_CapturedCamp(int32_t OldCamp);

	// Object: Function BattleField.BattleFieldCapturePoint.OnRep_CampCaptureScore
	// Flags: [Final|Native|Protected]
	// Offset: 0x143e442c
	// Params: [ Num(0) Size(0x0) ]
	void OnRep_CampCaptureScore();

	// Object: Function BattleField.BattleFieldCapturePoint.OnOverlapEnd
	// Flags: [Final|Native|Protected]
	// Offset: 0x143e42d8
	// Params: [ Num(4) Size(0x1C) ]
	void OnOverlapEnd(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex);

	// Object: Function BattleField.BattleFieldCapturePoint.OnOverlapBegin
	// Flags: [Final|Native|Protected|HasOutParms]
	// Offset: 0x143e40e0
	// Params: [ Num(6) Size(0xA8) ]
	void OnOverlapBegin(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, uint8_t bFromSweep, const struct FHitResult& SweepResult);

	// Object: Function BattleField.BattleFieldCapturePoint.CheckCharactersInPointAndInformHUD
	// Flags: [Final|Native|Protected]
	// Offset: 0x143e40cc
	// Params: [ Num(0) Size(0x0) ]
	void CheckCharactersInPointAndInformHUD();

	// Object: Function BattleField.BattleFieldCapturePoint.CanBeAutoDormant
	// Flags: [Native|Protected|Const]
	// Offset: 0x143e408c
	// Params: [ Num(1) Size(0x1) ]
	uint8_t CanBeAutoDormant();

	// Object: Function BattleField.BattleFieldCapturePoint.AfterCaptureIncreaseScore
	// Flags: [Final|Native|Protected]
	// Offset: 0x143e4078
	// Params: [ Num(0) Size(0x0) ]
	void AfterCaptureIncreaseScore();
};

// Object: Class BattleField.BattleFieldCharacter
// Size: 0x3820 (Inherited: 0x37F0)
struct ABattleFieldCharacter : ADFMPlayerCharacter
{
	DEFINE_UE_CLASS_HELPERS(ABattleFieldCharacter, "BattleFieldCharacter")

	uint8_t Pad_0x37F0[0x2]; // 0x37F0(0x2)
	EInGameBattleClassType BattleClassType; // 0x37F2(0x1)
	uint8_t Pad_0x37F3[0x1]; // 0x37F3(0x1)
	int32_t DefaultPlayerArmedForceID; // 0x37F4(0x4)
	int64_t DefaultPlayerExpertID; // 0x37F8(0x8)
	struct UDFMRedeployComponent* DFMRedeployComponent; // 0x3800(0x8)
	struct UBattleFieldHealthDataComponent* BattleFieldHealthDataComponent; // 0x3808(0x8)
	uint8_t Pad_0x3810[0x10]; // 0x3810(0x10)

	// Object: Function BattleField.BattleFieldCharacter.SwitchWeaponPreset
	// Flags: [Final|Native|Public|Const]
	// Offset: 0x143e6014
	// Params: [ Num(4) Size(0x11) ]
	uint8_t SwitchWeaponPreset(uint64_t WeaponItemId, int32_t WeaponPresetIndex, EAttachPosition InAttachPosition);

	// Object: Function BattleField.BattleFieldCharacter.ServerSetCurrentArmedPreset
	// Flags: [Final|Native|Public]
	// Offset: 0x143e5f38
	// Params: [ Num(2) Size(0x10) ]
	void ServerSetCurrentArmedPreset(uint64_t ExpertId, uint64_t HeroId);

	// Object: Function BattleField.BattleFieldCharacter.ServerRequestWeaponStoreItemsInArmBag
	// Flags: [Net|NetReliableNative|Event|Public|NetServer]
	// Offset: 0x143e5e50
	// Params: [ Num(2) Size(0x10) ]
	void ServerRequestWeaponStoreItemsInArmBag(int32_t ArmedForceID, uint64_t HeroId);

	// Object: Function BattleField.BattleFieldCharacter.ServerRequestSwitchWeaponItem
	// Flags: [Net|NetReliableNative|Event|Public|NetServer]
	// Offset: 0x143e5cf4
	// Params: [ Num(4) Size(0x1C) ]
	void ServerRequestSwitchWeaponItem(int32_t ArmedForceID, uint64_t HeroId, uint64_t WeaponItemId, EAttachPosition InAttachPosition);

	// Object: Function BattleField.BattleFieldCharacter.ServerChangeCurrentArmedPresetWithFullData
	// Flags: [Native|Public]
	// Offset: 0x143e5c0c
	// Params: [ Num(2) Size(0x10) ]
	void ServerChangeCurrentArmedPresetWithFullData(uint32_t ArmedForceID, uint64_t HeroId);

	// Object: Function BattleField.BattleFieldCharacter.ServerChangeCurrentArmedPresetByFullData
	// Flags: [Final|Native|Public]
	// Offset: 0x143e5b30
	// Params: [ Num(2) Size(0x10) ]
	void ServerChangeCurrentArmedPresetByFullData(uint64_t ExpertId, uint64_t HeroId);

	// Object: Function BattleField.BattleFieldCharacter.ServerChangeCurrentArmedPresetByExpertID
	// Flags: [Final|Native|Public]
	// Offset: 0x143e5a18
	// Params: [ Num(3) Size(0x14) ]
	void ServerChangeCurrentArmedPresetByExpertID(int64_t ExpertId, uint64_t HeroId, uint32_t BagId);

	// Object: Function BattleField.BattleFieldCharacter.ServerChangeCurrentArmedPreset
	// Flags: [Final|Native|Public]
	// Offset: 0x143e58fc
	// Params: [ Num(3) Size(0x14) ]
	void ServerChangeCurrentArmedPreset(uint32_t ArmedForceID, uint64_t HeroId, uint32_t BagId);

	// Object: Function BattleField.BattleFieldCharacter.ServerApplyWeaponItemModifyInFirstRedeploy
	// Flags: [Final|Native|Public]
	// Offset: 0x143e58e8
	// Params: [ Num(0) Size(0x0) ]
	void ServerApplyWeaponItemModifyInFirstRedeploy();

	// Object: Function BattleField.BattleFieldCharacter.SaveRedeployMatrix
	// Flags: [Final|Native|Public]
	// Offset: 0x143e58d4
	// Params: [ Num(0) Size(0x0) ]
	void SaveRedeployMatrix();

	// Object: Function BattleField.BattleFieldCharacter.ResetEqipment
	// Flags: [Final|Native|Public]
	// Offset: 0x143e58c0
	// Params: [ Num(0) Size(0x0) ]
	void ResetEqipment();

	// Object: Function BattleField.BattleFieldCharacter.RequestWeaponStore
	// Flags: [Net|NetReliableNative|Event|Public|NetServer]
	// Offset: 0x143e579c
	// Params: [ Num(3) Size(0x14) ]
	void RequestWeaponStore(int32_t ArmedForceID, uint64_t HeroId, EAttachPosition AttachPosition);

	// Object: Function BattleField.BattleFieldCharacter.RequestWeaponPresetStore
	// Flags: [Net|NetReliableNative|Event|Public|NetServer]
	// Offset: 0x143e56f0
	// Params: [ Num(1) Size(0x8) ]
	void RequestWeaponPresetStore(uint64_t InItemID);

	// Object: Function BattleField.BattleFieldCharacter.RequestSwitchWeaponPreset
	// Flags: [Net|NetReliableNative|Event|Public|NetServer]
	// Offset: 0x143e555c
	// Params: [ Num(5) Size(0x20) ]
	void RequestSwitchWeaponPreset(uint32_t ArmedForceID, uint64_t HeroId, uint64_t WeaponItemId, int32_t WeaponPresetIndex, EAttachPosition InAttachPosition);

	// Object: Function BattleField.BattleFieldCharacter.RequestCancelWeaponItemRedDot
	// Flags: [Net|NetReliableNative|Event|Public|NetServer]
	// Offset: 0x143e54a8
	// Params: [ Num(1) Size(0x10) ]
	void RequestCancelWeaponItemRedDot(struct TArray<uint64_t> WeaponItemIDs);

	// Object: Function BattleField.BattleFieldCharacter.OnRep_BattleClassType
	// Flags: [Final|Native|Public]
	// Offset: 0xf53c20c
	// Params: [ Num(0) Size(0x0) ]
	void OnRep_BattleClassType();

	// Object: Function BattleField.BattleFieldCharacter.OnDSBeforeRedeploy
	// Flags: [Native|Public]
	// Offset: 0x143e548c
	// Params: [ Num(0) Size(0x0) ]
	void OnDSBeforeRedeploy();

	// Object: Function BattleField.BattleFieldCharacter.MatchEnd
	// Flags: [Native|Public|HasOutParms]
	// Offset: 0xf66f8c8
	// Params: [ Num(1) Size(0x1) ]
	void MatchEnd(const EMatchOverReason& Reason);

	// Object: Function BattleField.BattleFieldCharacter.IsNeedReplaceExpertData
	// Flags: [Final|Native|Public]
	// Offset: 0x143e5454
	// Params: [ Num(1) Size(0x1) ]
	uint8_t IsNeedReplaceExpertData();

	// Object: Function BattleField.BattleFieldCharacter.ClientReceiveWeaponStoreItemsInArmBag
	// Flags: [Net|NetReliableNative|Event|Public|NetClient]
	// Offset: 0xf79a420
	// Params: [ Num(4) Size(0x98) ]
	void ClientReceiveWeaponStoreItemsInArmBag(int32_t InArmedForceID, uint64_t HeroId, struct TArray<struct FMPInventoryItemInfo> WeaponItemArr, struct FMPInventoryItemInfo SoldierItemArr);

	// Object: Function BattleField.BattleFieldCharacter.ClientReceiveWeaponStore
	// Flags: [Net|NetReliableNative|Event|Public|NetClient]
	// Offset: 0xf79a634
	// Params: [ Num(4) Size(0x28) ]
	void ClientReceiveWeaponStore(int32_t InArmedForceID, uint64_t HeroId, EAttachPosition AttachPosition, struct TArray<struct FMPInventoryItemInfo> ItemArr);

	// Object: Function BattleField.BattleFieldCharacter.ClientReceiveWeaponPresets
	// Flags: [Net|NetReliableNative|Event|Public|NetClient]
	// Offset: 0x143e5364
	// Params: [ Num(2) Size(0x18) ]
	void ClientReceiveWeaponPresets(uint64_t InItemID, struct TArray<struct FTDMWeaponPreset> WeaponPresetArr);

	// Object: Function BattleField.BattleFieldCharacter.ClientReceiveSwitchWeaponPreset
	// Flags: [Net|NetReliableNative|Event|Public|NetClient]
	// Offset: 0x143e5208
	// Params: [ Num(4) Size(0x18) ]
	void ClientReceiveSwitchWeaponPreset(uint32_t ArmedForceID, uint64_t WeaponItemId, int32_t WeaponPresetIndex, EAttachPosition InAttachPosition);

	// Object: Function BattleField.BattleFieldCharacter.ClientReceiveSwitchWeaponItemResult
	// Flags: [Net|NetReliableNative|Event|Public|NetClient]
	// Offset: 0xf87a218
	// Params: [ Num(5) Size(0x98) ]
	void ClientReceiveSwitchWeaponItemResult(int32_t ArmedForceID, uint64_t HeroId, uint64_t ArmItemID, EAttachPosition InAttachPosition, struct FMPInventoryItemInfo InMPInventoryItemInfo);

	// Object: Function BattleField.BattleFieldCharacter.ClientReceiveInGameWeaponStarIncrease
	// Flags: [Net|NetReliableNative|Event|Public|NetClient]
	// Offset: 0x143e5120
	// Params: [ Num(2) Size(0xC) ]
	void ClientReceiveInGameWeaponStarIncrease(uint64_t WeaponItemId, int32_t StarNum);

	// Object: Function BattleField.BattleFieldCharacter.ClientReceiveInGameUnlockWeapon
	// Flags: [Net|NetReliableNative|Event|Public|NetClient]
	// Offset: 0x143e4f8c
	// Params: [ Num(1) Size(0x78) ]
	void ClientReceiveInGameUnlockWeapon(struct FMPInventoryItemInfo UnlockWeaponItem);

	// Object: Function BattleField.BattleFieldCharacter.ClientReceiveInGameUnlockVehiclePart
	// Flags: [Net|NetReliableNative|Event|Public|NetClient]
	// Offset: 0x143e4ee0
	// Params: [ Num(1) Size(0x8) ]
	void ClientReceiveInGameUnlockVehiclePart(uint64_t UnlockVehiclePartItemID);

	// Object: Function BattleField.BattleFieldCharacter.BP_ServerChangeCurrentArmedPreset
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x143e4e04
	// Params: [ Num(2) Size(0x8) ]
	void BP_ServerChangeCurrentArmedPreset(int32_t ArmedForceID, int32_t BagId);
};

// Object: Class BattleField.BattleFieldCharacterDeathConfigMgr
// Size: 0x98 (Inherited: 0x30)
struct UBattleFieldCharacterDeathConfigMgr : UDataTableSystemManagerBase
{
	DEFINE_UE_CLASS_HELPERS(UBattleFieldCharacterDeathConfigMgr, "BattleFieldCharacterDeathConfigMgr")

	uint8_t Pad_0x30[0x68]; // 0x30(0x68)
};

// Object: Class BattleField.BattleFieldDSLogic
// Size: 0x6A0 (Inherited: 0x6A0)
struct UBattleFieldDSLogic : UDFMDSLogic
{
	DEFINE_UE_CLASS_HELPERS(UBattleFieldDSLogic, "BattleFieldDSLogic")
};

// Object: Class BattleField.BattleFieldMapFutureTagConfigManager
// Size: 0x50 (Inherited: 0x30)
struct UBattleFieldMapFutureTagConfigManager : UDataTableSystemManagerBase
{
	DEFINE_UE_CLASS_HELPERS(UBattleFieldMapFutureTagConfigManager, "BattleFieldMapFutureTagConfigManager")

	uint8_t Pad_0x30[0x10]; // 0x30(0x10)
	struct TArray<EBattleFieldMapFutureTag> BattleFieldMapFutureTags; // 0x40(0x10)
};

// Object: Class BattleField.OperatorDeathStareTimeTagDataManager
// Size: 0x40 (Inherited: 0x30)
struct UOperatorDeathStareTimeTagDataManager : UDataTableSystemManagerBase
{
	DEFINE_UE_CLASS_HELPERS(UOperatorDeathStareTimeTagDataManager, "OperatorDeathStareTimeTagDataManager")

	uint8_t Pad_0x30[0x10]; // 0x30(0x10)
};

// Object: Class BattleField.BattleFieldGameMode
// Size: 0x8A0 (Inherited: 0x860)
struct ABattleFieldGameMode : ADFMGameMode
{
	DEFINE_UE_CLASS_HELPERS(ABattleFieldGameMode, "BattleFieldGameMode")

	uint8_t Pad_0x860[0x11]; // 0x860(0x11)
	uint8_t EnableFastRebornSetting : 1; // 0x871(0x1), Mask(0x1)
	uint8_t BitPad_0x871_1 : 7; // 0x871(0x1)
	uint8_t Pad_0x872[0x6]; // 0x872(0x6)
	struct TArray<struct APlayerStart*> RedPlayerStarts; // 0x878(0x10)
	struct TArray<struct APlayerStart*> BluePlayerStarts; // 0x888(0x10)
	uint8_t Pad_0x898[0x8]; // 0x898(0x8)

	// Object: Function BattleField.BattleFieldGameMode.RebornPlayer
	// Flags: [Final|Native|Public]
	// Offset: 0x143e8704
	// Params: [ Num(1) Size(0x8) ]
	void RebornPlayer(struct AController* PlayerController);
};

// Object: Class BattleField.BattleFieldGameplayDelegates
// Size: 0x90 (Inherited: 0x30)
struct UBattleFieldGameplayDelegates : UWorldSubsystem
{
	DEFINE_UE_CLASS_HELPERS(UBattleFieldGameplayDelegates, "BattleFieldGameplayDelegates")

	struct FMulticastInlineDelegate OverloadPointClientChange; // 0x30(0x10)
	struct FMulticastInlineDelegate OverloadStateClientChange; // 0x40(0x10)
	struct FMulticastInlineDelegate OverloadBuffLevelClientChange; // 0x50(0x10)
	struct FMulticastInlineDelegate OverloadBuffDurationUpdate; // 0x60(0x10)
	struct FMulticastInlineDelegate OverloadBuffDurationEnd; // 0x70(0x10)
	struct FMulticastInlineDelegate OnClientBreakthrougCurIsCustomTriggerFightBack; // 0x80(0x10)

	// Object: Function BattleField.BattleFieldGameplayDelegates.GetUDFMGameplayDelegates
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x143e8878
	// Params: [ Num(2) Size(0x10) ]
	static struct UBattleFieldGameplayDelegates* GetUDFMGameplayDelegates(struct UObject* WorldContext);

	// Object: Function BattleField.BattleFieldGameplayDelegates.Get
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x143e87d4
	// Params: [ Num(2) Size(0x10) ]
	static struct UBattleFieldGameplayDelegates* Get(struct UObject* WorldContext);
};

// Object: Class BattleField.BattleFieldGameState
// Size: 0x1200 (Inherited: 0xF80)
struct ABattleFieldGameState : ADFMGameState
{
	DEFINE_UE_CLASS_HELPERS(ABattleFieldGameState, "BattleFieldGameState")

	struct TArray<int32_t> CampScoreList; // 0xF80(0x10)
	struct TArray<int32_t> CampIdList; // 0xF90(0x10)
	struct TArray<struct FPlayerStatItem> PlayerStatistics_BF; // 0xFA0(0x10)
	struct TArray<struct FPlayerKillAssistInfo> PlayerKillAssistInfos; // 0xFB0(0x10)
	int32_t TargetScoreCount; // 0xFC0(0x4)
	int32_t LeftTime; // 0xFC4(0x4)
	int32_t UsedTime; // 0xFC8(0x4)
	uint8_t Pad_0xFCC[0x4]; // 0xFCC(0x4)
	struct TArray<struct ABattleFieldCapturePoint*> CapturePoints; // 0xFD0(0x10)
	uint8_t Pad_0xFE0[0x188]; // 0xFE0(0x188)
	struct UBattleFieldNotifySubSystem* BattleFieldNotifySubSystem; // 0x1168(0x8)
	uint8_t Pad_0x1170[0x20]; // 0x1170(0x20)
	struct TArray<struct AController*> Camp0Player; // 0x1190(0x10)
	struct TArray<struct AController*> Camp1Player; // 0x11A0(0x10)
	uint8_t Pad_0x11B0[0x50]; // 0x11B0(0x50)

	// Object: Function BattleField.BattleFieldGameState.UpdatePlayerStatsOffline
	// Flags: [Final|Native|Private]
	// Offset: 0x143e911c
	// Params: [ Num(3) Size(0x11) ]
	void UpdatePlayerStatsOffline(struct AGPPlayerState* GPPS, uint64_t InPlayerUin, uint8_t bIsOffline);

	// Object: Function BattleField.BattleFieldGameState.SortPlayerStatsByScore
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x143e9108
	// Params: [ Num(0) Size(0x0) ]
	void SortPlayerStatsByScore();

	// Object: Function BattleField.BattleFieldGameState.SetCampScoreChange
	// Flags: [Final|Native|Public]
	// Offset: 0x143e902c
	// Params: [ Num(2) Size(0x8) ]
	void SetCampScoreChange(int32_t Camp, int32_t Score);

	// Object: Function BattleField.BattleFieldGameState.PruneString
	// Flags: [Final|Native|Private]
	// Offset: 0x143e8ebc
	// Params: [ Num(3) Size(0x28) ]
	struct FString PruneString(struct FString InStr, int32_t maxLen);

	// Object: Function BattleField.BattleFieldGameState.OnRep_PlayerStatistics_BF
	// Flags: [Final|Native|Public]
	// Offset: 0x143e8ea8
	// Params: [ Num(0) Size(0x0) ]
	void OnRep_PlayerStatistics_BF();

	// Object: Function BattleField.BattleFieldGameState.OnRep_CampScore
	// Flags: [Final|Native|Public]
	// Offset: 0x143e8e94
	// Params: [ Num(0) Size(0x0) ]
	void OnRep_CampScore();

	// Object: Function BattleField.BattleFieldGameState.OnPlayerBeKilled
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(1) Size(0x4) ]
	void OnPlayerBeKilled(int32_t Camp);

	// Object: Function BattleField.BattleFieldGameState.OnMatchEnd
	// Flags: [Final|Native|Public]
	// Offset: 0x143e8df0
	// Params: [ Num(1) Size(0x4) ]
	void OnMatchEnd(int32_t WinCamp);

	// Object: Function BattleField.BattleFieldGameState.MulticastMatchEnd
	// Flags: [Net|NetReliableNative|Event|NetMulticast|Public|BlueprintCallable]
	// Offset: 0x143e8d4c
	// Params: [ Num(1) Size(0x4) ]
	void MulticastMatchEnd(int32_t Camp);

	// Object: Function BattleField.BattleFieldGameState.MatchEndEvent
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(1) Size(0x4) ]
	void MatchEndEvent(int32_t Camp);

	// Object: Function BattleField.BattleFieldGameState.GetScoreCount
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x143e8ca0
	// Params: [ Num(2) Size(0x8) ]
	int32_t GetScoreCount(int32_t Camp);

	// Object: Function BattleField.BattleFieldGameState.GetPlayerNamesByCamp
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x143e8ba4
	// Params: [ Num(3) Size(0x18) ]
	struct TArray<struct FString> GetPlayerNamesByCamp(int32_t Camp, int32_t maxLen);

	// Object: Function BattleField.BattleFieldGameState.GetMostKillPlayer
	// Flags: [Final|Native|Public]
	// Offset: 0x143e8b38
	// Params: [ Num(1) Size(0x60) ]
	struct FPlayerStatItem GetMostKillPlayer();
};

// Object: Class BattleField.BattleFieldHealthDataComponent
// Size: 0xD00 (Inherited: 0xD00)
struct UBattleFieldHealthDataComponent : UDFMHealthDataComponent
{
	DEFINE_UE_CLASS_HELPERS(UBattleFieldHealthDataComponent, "BattleFieldHealthDataComponent")
};

// Object: Class BattleField.BattleFieldHUD
// Size: 0x760 (Inherited: 0x730)
struct ABattleFieldHUD : ADFMHUD
{
	DEFINE_UE_CLASS_HELPERS(ABattleFieldHUD, "BattleFieldHUD")

	struct ADFMGameState* GameState; // 0x730(0x8)
	struct TWeakObjectPtr<struct AGPPlayerController> PlayerController; // 0x738(0x8)
	uint8_t Pad_0x740[0x8]; // 0x740(0x8)
	struct FName ConquestTopBarPanelConfigName; // 0x748(0x8)
	struct FName CaptureFlagTopBarPanelConfigName; // 0x750(0x8)
	float TopBarRefreshRate; // 0x758(0x4)
	uint8_t Pad_0x75C[0x4]; // 0x75C(0x4)

	// Object: Function BattleField.BattleFieldHUD.TopBarHudTimerFunction
	// Flags: [Final|Native|Private]
	// Offset: 0x143e9510
	// Params: [ Num(0) Size(0x0) ]
	void TopBarHudTimerFunction();

	// Object: Function BattleField.BattleFieldHUD.OnDFMGamePlaySubModeChanged
	// Flags: [Final|Native|Public]
	// Offset: 0x143e946c
	// Params: [ Num(1) Size(0x1) ]
	void OnDFMGamePlaySubModeChanged(EDFMGamePlaySubMode InSubMode);

	// Object: Function BattleField.BattleFieldHUD.OnClientDFMGamePlayModeChanged
	// Flags: [Final|Native|Public]
	// Offset: 0x143e93c8
	// Params: [ Num(1) Size(0x1) ]
	void OnClientDFMGamePlayModeChanged(EDFMGamePlayMode InMode);

	// Object: Function BattleField.BattleFieldHUD.NotifyTeamInfoHUDMVP
	// Flags: [Final|Native|Public]
	// Offset: 0x143e93b4
	// Params: [ Num(0) Size(0x0) ]
	void NotifyTeamInfoHUDMVP();

	// Object: Function BattleField.BattleFieldHUD.NotifyHUD
	// Flags: [Final|Native|Public]
	// Offset: 0x143e9310
	// Params: [ Num(1) Size(0x4) ]
	void NotifyHUD(int32_t ChangeType);
};

// Object: Class BattleField.BattleFieldMapHUDController
// Size: 0x4D8 (Inherited: 0x2C0)
struct UBattleFieldMapHUDController : UMapBaseHUDController
{
	DEFINE_UE_CLASS_HELPERS(UBattleFieldMapHUDController, "BattleFieldMapHUDController")

	uint8_t Pad_0x2C0[0x28]; // 0x2C0(0x28)
	struct UMapInfoSystem* MapInfoSystem; // 0x2E8(0x8)
	struct UDFMBattleFieldSystem* BattleFieldSystem; // 0x2F0(0x8)
	struct TArray<struct UCapturePointIconHUDController*> CapturePointIconControllerArr; // 0x2F8(0x10)
	struct TArray<struct UBattleFieldTeamIconHUDController*> CampIconControllerArr; // 0x308(0x10)
	struct TArray<struct UBattleFieldMapMarkerIconHUDController*> FakeEnemyMarkerControllerArray; // 0x318(0x10)
	struct TArray<struct UBattleFieldMapMarkerIconHUDController*> AvailableMarkControllerArr; // 0x328(0x10)
	struct TArray<struct UBattleFieldMapMarkerIconHUDController*> UsingMarkControllerArr; // 0x338(0x10)
	struct TMap<uint64_t, struct FTimerHandle> EnemyLocationTimeHandleMap; // 0x348(0x50)
	struct TSet<struct AActor*> RegisteredMapIconActors; // 0x398(0x50)
	uint8_t Pad_0x3E8[0x14]; // 0x3E8(0x14)
	float TickFrequency; // 0x3FC(0x4)
	uint8_t bEnableKillInfoIcon : 1; // 0x400(0x1), Mask(0x1)
	uint8_t BitPad_0x400_1 : 7; // 0x400(0x1)
	uint8_t Pad_0x401[0x3]; // 0x401(0x3)
	float KillInfoDSOutTime; // 0x404(0x4)
	float OnFireDuration; // 0x408(0x4)
	float SceneWeaponOnFireDuration; // 0x40C(0x4)
	uint8_t bEnableDeadEnemy : 1; // 0x410(0x1), Mask(0x1)
	uint8_t BitPad_0x410_1 : 7; // 0x410(0x1)
	uint8_t Pad_0x411[0x3]; // 0x411(0x3)
	float PendingDeadKillInfoDuration; // 0x414(0x4)
	float DeadKillInfoDuration; // 0x418(0x4)
	float PendingDeadTeamMateKillInfoDuration; // 0x41C(0x4)
	float DeadTeamMateKillInfoDuration; // 0x420(0x4)
	uint8_t Pad_0x424[0x4]; // 0x424(0x4)
	struct TMap<int64_t, struct UBattleFieldMapMarkerIconHUDController*> CampMateDeadControllers; // 0x428(0x50)
	struct TMap<int64_t, struct FTimerHandle> CampMateDeadTimers; // 0x478(0x50)
	uint8_t Pad_0x4C8[0x10]; // 0x4C8(0x10)

	// Object: Function BattleField.BattleFieldMapHUDController.OnTeamIdentityReplicate
	// Flags: [Final|Native|Protected]
	// Offset: 0x143e98c8
	// Params: [ Num(1) Size(0x8) ]
	void OnTeamIdentityReplicate(struct AGPPlayerState* InPlayerState);

	// Object: Function BattleField.BattleFieldMapHUDController.OnPlayerKillInfoNtf
	// Flags: [Final|Native|Protected|HasOutParms]
	// Offset: 0x143e980c
	// Params: [ Num(1) Size(0x10) ]
	void OnPlayerKillInfoNtf(const struct TArray<struct FKillInfo>& NewAddKillInfo);

	// Object: Function BattleField.BattleFieldMapHUDController.OnMapAddEnemyLocationIcon
	// Flags: [Final|Native|Protected|HasOutParms]
	// Offset: 0x143e9744
	// Params: [ Num(1) Size(0x18) ]
	void OnMapAddEnemyLocationIcon(const struct FPlayerLocation& EnemyPlayerLocation);

	// Object: Function BattleField.BattleFieldMapHUDController.OnGameStateCurStageChanged
	// Flags: [Final|Native|Protected]
	// Offset: 0x143e96a0
	// Params: [ Num(1) Size(0x4) ]
	void OnGameStateCurStageChanged(int32_t iValue);

	// Object: Function BattleField.BattleFieldMapHUDController.OnGameHudStateChanged
	// Flags: [Final|Native|Protected]
	// Offset: 0x143e968c
	// Params: [ Num(0) Size(0x0) ]
	void OnGameHudStateChanged();

	// Object: Function BattleField.BattleFieldMapHUDController.OnClientWeaponBeginFireNtf
	// Flags: [Final|Native|Protected]
	// Offset: 0x143e95e8
	// Params: [ Num(1) Size(0x8) ]
	void OnClientWeaponBeginFireNtf(struct ACHARACTER* CharacterOwner);

	// Object: Function BattleField.BattleFieldMapHUDController.OnClientGameStatePlayerKnockDownInfoNotify
	// Flags: [Final|Native|Protected|HasOutParms]
	// Offset: 0x143e952c
	// Params: [ Num(1) Size(0x10) ]
	void OnClientGameStatePlayerKnockDownInfoNotify(const struct TArray<struct FSimpleKnockDownInfo>& KillInfos);
};

// Object: Class BattleField.BattleFieldMapMarkerIconHUDView
// Size: 0x4A0 (Inherited: 0x468)
struct UBattleFieldMapMarkerIconHUDView : UMapItemHUDView
{
	DEFINE_UE_CLASS_HELPERS(UBattleFieldMapMarkerIconHUDView, "BattleFieldMapMarkerIconHUDView")

	struct UCanvasPanel* CanvasPanel_Default; // 0x468(0x8)
	struct UImage* PublicItemIcon; // 0x470(0x8)
	uint8_t Pad_0x478[0x28]; // 0x478(0x28)
};

// Object: Class BattleField.BattleFieldMapMarkerIconHUDController
// Size: 0x2E0 (Inherited: 0x2B0)
struct UBattleFieldMapMarkerIconHUDController : UMapIconViewController
{
	DEFINE_UE_CLASS_HELPERS(UBattleFieldMapMarkerIconHUDController, "BattleFieldMapMarkerIconHUDController")

	EBattleFieldMapMarkerType MarkerType; // 0x2A1(0x1)
	uint64_t PlayerUin; // 0x2A8(0x8)
	struct AGPPlayerState* PSForThis; // 0x2B0(0x8)
	struct FVector2D EnemyImgSize; // 0x2B8(0x8)
	struct FVector2D CampMateImgSize; // 0x2C0(0x8)
	float MinimMapInstancedIconScale_Enemy; // 0x2C8(0x4)
	float MinimMapInstancedIconScale_CampMate; // 0x2CC(0x4)
	uint8_t bOnlyTeamLeaderShowTeamName : 1; // 0x2D0(0x1), Mask(0x1)
	struct AGPSceneActorReplicator* SceneActorReplicator; // 0x2D8(0x8)
};

// Object: Class BattleField.BattleFieldNotifySubSystem
// Size: 0x1A0 (Inherited: 0xF8)
struct UBattleFieldNotifySubSystem : UActorComponent
{
	DEFINE_UE_CLASS_HELPERS(UBattleFieldNotifySubSystem, "BattleFieldNotifySubSystem")

	uint8_t Pad_0xF8[0xA0]; // 0xF8(0xA0)
	uint8_t bFistkilled : 1; // 0x198(0x1), Mask(0x1)
	uint8_t BitPad_0x198_1 : 7; // 0x198(0x1)
	uint8_t Pad_0x199[0x7]; // 0x199(0x7)

	// Object: Function BattleField.BattleFieldNotifySubSystem.ShowAcRising
	// Flags: [Native|Public]
	// Offset: 0xf90b650
	// Params: [ Num(1) Size(0x4) ]
	void ShowAcRising(float RiseTime);

	// Object: Function BattleField.BattleFieldNotifySubSystem.ShowAcLanding
	// Flags: [Final|Native|Public]
	// Offset: 0xf942cc0
	// Params: [ Num(1) Size(0x4) ]
	void ShowAcLanding(float LandTime);

	// Object: Function BattleField.BattleFieldNotifySubSystem.OnThrowableWeaponBeginFire
	// Flags: [Final|Native|Public]
	// Offset: 0x143ed780
	// Params: [ Num(2) Size(0x18) ]
	void OnThrowableWeaponBeginFire(uint8_t bHasGoToKeepPrefireState, struct TScriptInterface<IGPWeaponInterface> WeaponOwner);

	// Object: Function BattleField.BattleFieldNotifySubSystem.OnSecter2WinPlay
	// Flags: [Final|Native|Public]
	// Offset: 0x143ed76c
	// Params: [ Num(0) Size(0x0) ]
	void OnSecter2WinPlay();

	// Object: Function BattleField.BattleFieldNotifySubSystem.OnRescue
	// Flags: [Final|Native|Public]
	// Offset: 0x143ed690
	// Params: [ Num(2) Size(0x10) ]
	void OnRescue(struct AGPCharacterBase* Player, struct AGPCharacterBase* RescueTarget);

	// Object: Function BattleField.BattleFieldNotifySubSystem.OnReloadAmmo
	// Flags: [Final|Native|Public]
	// Offset: 0x143ed5ec
	// Params: [ Num(1) Size(0x8) ]
	void OnReloadAmmo(struct ACHARACTER* CHARACTER);

	// Object: Function BattleField.BattleFieldNotifySubSystem.OnPlayerBeKnockedDown
	// Flags: [Final|Native|Public|HasOutParms]
	// Offset: 0x143ed528
	// Params: [ Num(1) Size(0x1A8) ]
	void OnPlayerBeKnockedDown(const struct FKillInfo& NewAddKillInfo);

	// Object: Function BattleField.BattleFieldNotifySubSystem.OnPlayerBeKilled
	// Flags: [Final|Native|Public|HasOutParms]
	// Offset: 0x143ed420
	// Params: [ Num(2) Size(0x1B0) ]
	void OnPlayerBeKilled(const struct FKillInfo& NewAddKillInfo, struct UGPModularWeaponDesc* Desc);

	// Object: Function BattleField.BattleFieldNotifySubSystem.OnNeedAmmo
	// Flags: [Final|Native|Public]
	// Offset: 0x143ed308
	// Params: [ Num(3) Size(0x10) ]
	void OnNeedAmmo(int64_t TargetPlayerUin, float RemainAmmo, float MaxAmmo);

	// Object: Function BattleField.BattleFieldNotifySubSystem.OnKnockedDownHalf
	// Flags: [Final|Native|Public]
	// Offset: 0x143ed264
	// Params: [ Num(1) Size(0x8) ]
	void OnKnockedDownHalf(struct ACHARACTER* InCharacter);

	// Object: Function BattleField.BattleFieldNotifySubSystem.OnKillStreak
	// Flags: [Final|Native|Public]
	// Offset: 0x143ed184
	// Params: [ Num(2) Size(0xC) ]
	void OnKillStreak(int64_t InPlayerUin, int32_t ContinueKillCumCount);

	// Object: Function BattleField.BattleFieldNotifySubSystem.OnIntoSuppressedState
	// Flags: [Final|Native|Public]
	// Offset: 0x143ed0e0
	// Params: [ Num(1) Size(0x8) ]
	void OnIntoSuppressedState(struct ACHARACTER* CHARACTER);

	// Object: Function BattleField.BattleFieldNotifySubSystem.OnHealthChanged
	// Flags: [Final|Native|Public]
	// Offset: 0x143ed03c
	// Params: [ Num(1) Size(0x8) ]
	void OnHealthChanged(struct AController* InPlayer);

	// Object: Function BattleField.BattleFieldNotifySubSystem.OnGMBattleFieldPlayerAudioTrigger
	// Flags: [Final|Native|Protected]
	// Offset: 0x143ecf98
	// Params: [ Num(1) Size(0x4) ]
	void OnGMBattleFieldPlayerAudioTrigger(int32_t Type);

	// Object: Function BattleField.BattleFieldNotifySubSystem.OnGameLoadingEnd
	// Flags: [Final|Native|Public]
	// Offset: 0x10b254f0
	// Params: [ Num(2) Size(0x5) ]
	void OnGameLoadingEnd(int32_t MapID, EGameFlowStageType GameFlowStage);

	// Object: Function BattleField.BattleFieldNotifySubSystem.OnDamageTake
	// Flags: [Final|Native|Public|HasOutParms]
	// Offset: 0x143eced8
	// Params: [ Num(1) Size(0x8A0) ]
	void OnDamageTake(const struct FDamageResultInfo& DamageResult);

	// Object: Function BattleField.BattleFieldNotifySubSystem.OnCapturePointCapturedState
	// Flags: [Final|Native|Public]
	// Offset: 0x143ecdc0
	// Params: [ Num(3) Size(0x10) ]
	void OnCapturePointCapturedState(struct ABattleFieldCapturePoint* Point, int32_t OldCamp, int32_t CapturedCamp);

	// Object: Function BattleField.BattleFieldNotifySubSystem.OnCapturePointCapturedHalf
	// Flags: [Final|Native|Public]
	// Offset: 0x143ecce0
	// Params: [ Num(2) Size(0xC) ]
	void OnCapturePointCapturedHalf(struct ABattleFieldCapturePoint* Point, int32_t CaptureHalfCamp);

	// Object: Function BattleField.BattleFieldNotifySubSystem.OnCampScoreChange
	// Flags: [Final|Native|Public]
	// Offset: 0x143ecc04
	// Params: [ Num(2) Size(0x8) ]
	void OnCampScoreChange(int32_t ScoreCamp, int32_t Score);

	// Object: Function BattleField.BattleFieldNotifySubSystem.OnBattleFieldCampScoreTrigger
	// Flags: [Final|Native|Protected]
	// Offset: 0x143ecb28
	// Params: [ Num(2) Size(0x8) ]
	void OnBattleFieldCampScoreTrigger(int32_t Camp, int32_t Score);

	// Object: Function BattleField.BattleFieldNotifySubSystem.OnAimEnemy
	// Flags: [Final|Native|Public]
	// Offset: 0x143eca4c
	// Params: [ Num(2) Size(0x10) ]
	void OnAimEnemy(struct ACHARACTER* LocalCharacter, struct ACHARACTER* TargetCharacter);
};

// Object: Class BattleField.BattleFieldPlayerSettlementComponent
// Size: 0x538 (Inherited: 0x538)
struct UBattleFieldPlayerSettlementComponent : UBasePlayerSettlementComponent
{
	DEFINE_UE_CLASS_HELPERS(UBattleFieldPlayerSettlementComponent, "BattleFieldPlayerSettlementComponent")
};

// Object: Class BattleField.BattleFieldPlayerState
// Size: 0x1EC0 (Inherited: 0x1A80)
struct ABattleFieldPlayerState : ABattleFieldPlayerStateBase
{
	DEFINE_UE_CLASS_HELPERS(ABattleFieldPlayerState, "BattleFieldPlayerState")

	struct TArray<struct FTDMHeroItemPosInfo> HeroItemPosInfoArr; // 0x1A80(0x10)
	struct TArray<struct FTDMArm> TDMArmArray; // 0x1A90(0x10)
	struct FTDMWeaponStore WeaponStore; // 0x1AA0(0xA0)
	struct FTDMWeaponPresetStore WeaponPresetStore; // 0x1B40(0x50)
	struct FTDMSoldierPropsStore SoldierPropsStore; // 0x1B90(0xA0)
	struct TArray<uint64_t> WeaponStoreItemIDs; // 0x1C30(0x10)
	struct TArray<uint64_t> DisableWeaponItemIDs; // 0x1C40(0x10)
	struct TArray<uint64_t> AllowWeaponItemIDs; // 0x1C50(0x10)
	uint8_t bIsPresetDisabled : 1; // 0x1C60(0x1), Mask(0x1)
	uint8_t BitPad_0x1C60_1 : 7; // 0x1C60(0x1)
	uint8_t Pad_0x1C61[0x7]; // 0x1C61(0x7)
	struct FWorkingHeroAndBag CurrentArmedPreset; // 0x1C68(0x18)
	struct TMap<uint64_t, int32_t> DirtyWeaponItemIDs; // 0x1C80(0x50)
	uint8_t Pad_0x1CD0[0x50]; // 0x1CD0(0x50)
	struct TArray<uint64_t> NeedShowRedDotNewUnlockWeaponItemIDs; // 0x1D20(0x10)
	uint8_t bSimulateDisableWeaponItem : 1; // 0x1D30(0x1), Mask(0x1)
	uint8_t BitPad_0x1D30_1 : 7; // 0x1D30(0x1)
	uint8_t bSimulateAllowWeaponItem : 1; // 0x1D31(0x1), Mask(0x1)
	uint8_t BitPad_0x1D31_1 : 7; // 0x1D31(0x1)
	uint8_t bSimulateLockedWeaponItem : 1; // 0x1D32(0x1), Mask(0x1)
	uint8_t BitPad_0x1D32_1 : 7; // 0x1D32(0x1)
	uint8_t Pad_0x1D33[0x5]; // 0x1D33(0x5)
	struct TArray<uint64_t> SimulateOnlyDefaultPresetWeaponItemIDs; // 0x1D38(0x10)
	struct TArray<uint64_t> SimulateAllowWeaponItemIDs; // 0x1D48(0x10)
	struct TArray<uint64_t> SimulateDisableWeaponItemIDs; // 0x1D58(0x10)
	struct TArray<uint64_t> SimulateLockedWeaponItemIDs; // 0x1D68(0x10)
	struct FSupportAbilityInfo SupportAbilityInfo; // 0x1D78(0x8)
	int32_t BattleLevel; // 0x1D80(0x4)
	uint8_t Pad_0x1D84[0x4]; // 0x1D84(0x4)
	struct TArray<uint64_t> SimulateNotModificationVehicleItemIDs; // 0x1D88(0x10)
	struct TArray<uint64_t> AllowModificationVehicleItemIDs; // 0x1D98(0x10)
	struct TArray<struct FVehicleModificationRule> VehicleModificationRules; // 0x1DA8(0x10)
	struct TArray<uint64_t> UnlockedVehiclePartIDs; // 0x1DB8(0x10)
	struct TArray<uint64_t> DirtyVehicleItemIDs; // 0x1DC8(0x10)
	struct TArray<uint64_t> NeedShowRedDotNewUnlockVehiclePartItemIDs; // 0x1DD8(0x10)
	struct TMap<uint64_t, int32_t> DirtyWeaponItemIDsForKillNumChangeMap; // 0x1DE8(0x50)
	struct TSet<uint64_t> InitedHeroWeaponInfoHeroIds; // 0x1E38(0x50)
	int32_t CombatSwitchVehiclePartsDefaultPrice; // 0x1E88(0x4)
	uint8_t Pad_0x1E8C[0x4]; // 0x1E8C(0x4)
	struct TArray<int32_t> SupportAbilityScores; // 0x1E90(0x10)
	int32_t RedEnvelopeCount; // 0x1EA0(0x4)
	int32_t OverloadPoint; // 0x1EA4(0x4)
	uint8_t bIsOverloadState : 1; // 0x1EA8(0x1), Mask(0x1)
	uint8_t BitPad_0x1EA8_1 : 7; // 0x1EA8(0x1)
	EOverloadBuffLevel OverloadBuffLevel; // 0x1EA9(0x1)
	uint8_t Pad_0x1EAA[0x6]; // 0x1EAA(0x6)
	uint8_t bInAnchor : 1; // 0x1EB0(0x1), Mask(0x1)
	uint8_t BitPad_0x1EB0_1 : 7; // 0x1EB0(0x1)
	uint8_t IsPlayerOccupyingAnchor : 1; // 0x1EB1(0x1), Mask(0x1)
	uint8_t BitPad_0x1EB1_1 : 7; // 0x1EB1(0x1)
	uint8_t Pad_0x1EB2[0x2]; // 0x1EB2(0x2)
	uint32_t KillNum; // 0x1EB4(0x4)
	uint8_t Pad_0x1EB8[0x8]; // 0x1EB8(0x8)

	// Object: Function BattleField.BattleFieldPlayerState.UpdateFootStepAudioStyleID
	// Flags: [Final|Native|Private]
	// Offset: 0x143ef36c
	// Params: [ Num(1) Size(0x8) ]
	void UpdateFootStepAudioStyleID(int64_t CurrHeroID);

	// Object: Function BattleField.BattleFieldPlayerState.UpdateBagItem
	// Flags: [Final|Native|Public|HasOutParms]
	// Offset: 0x143ef1b0
	// Params: [ Num(5) Size(0x91) ]
	uint8_t UpdateBagItem(int32_t ArmedForceID, uint64_t InHeroId, EAttachPosition InAttachPosition, const struct FMPInventoryItemInfo& InMPInventoryItemInfo);

	// Object: Function BattleField.BattleFieldPlayerState.SwitchWeaponItem
	// Flags: [Final|Native|Public|HasOutParms]
	// Offset: 0x143eefb4
	// Params: [ Num(6) Size(0x98) ]
	EAttachPosition SwitchWeaponItem(int32_t ArmedForceID, uint64_t InHeroId, uint64_t WeaponItemId, struct FMPInventoryItemInfo& OutMPInventoryItemInfo, EAttachPosition InAttachPosition);

	// Object: Function BattleField.BattleFieldPlayerState.SwitchVehicleParts
	// Flags: [Final|Native|Public|HasOutParms]
	// Offset: 0x143eeebc
	// Params: [ Num(2) Size(0x20) ]
	struct TArray<struct FVehicleModifyReturnData> SwitchVehicleParts(const struct TArray<struct FVehicleModifyRequestData>& VehicleModifyRequestDataArr);

	// Object: Function BattleField.BattleFieldPlayerState.SwitchVehiclePart
	// Flags: [Final|Native|Public]
	// Offset: 0x143eed98
	// Params: [ Num(4) Size(0x20) ]
	uint64_t SwitchVehiclePart(uint64_t VehicleItemID, int32_t SlotId, uint64_t PartItemId);

	// Object: Function BattleField.BattleFieldPlayerState.SetScoreInfo
	// Flags: [Net|NetReliableNative|Event|Public|NetClient]
	// Offset: 0x143eec78
	// Params: [ Num(3) Size(0xC) ]
	void SetScoreInfo(int32_t Category, int32_t ShowScore, int32_t Distance);

	// Object: Function BattleField.BattleFieldPlayerState.SetOverloadState
	// Flags: [Final|Native|Public]
	// Offset: 0x143eebcc
	// Params: [ Num(1) Size(0x1) ]
	void SetOverloadState(uint8_t bInOverloadState);

	// Object: Function BattleField.BattleFieldPlayerState.SetOverloadBuffLevel
	// Flags: [Final|Native|Public]
	// Offset: 0x143eeb28
	// Params: [ Num(1) Size(0x1) ]
	void SetOverloadBuffLevel(EOverloadBuffLevel InOverloadBuffLevel);

	// Object: Function BattleField.BattleFieldPlayerState.SetBagDirty
	// Flags: [Final|Native|Public]
	// Offset: 0x143eeb14
	// Params: [ Num(0) Size(0x0) ]
	void SetBagDirty();

	// Object: Function BattleField.BattleFieldPlayerState.ServerGenerateExpertData
	// Flags: [Final|Native|Public]
	// Offset: 0x143eeb00
	// Params: [ Num(0) Size(0x0) ]
	void ServerGenerateExpertData();

	// Object: Function BattleField.BattleFieldPlayerState.ResetRedEnvelopeCount
	// Flags: [Final|Native|Public]
	// Offset: 0x143eeaec
	// Params: [ Num(0) Size(0x0) ]
	void ResetRedEnvelopeCount();

	// Object: Function BattleField.BattleFieldPlayerState.ResetOverloadPoint
	// Flags: [Final|Native|Public]
	// Offset: 0x143eead8
	// Params: [ Num(0) Size(0x0) ]
	void ResetOverloadPoint();

	// Object: Function BattleField.BattleFieldPlayerState.ResetHeroWeaponInfoInit
	// Flags: [Final|Native|Public]
	// Offset: 0x143eea34
	// Params: [ Num(1) Size(0x8) ]
	void ResetHeroWeaponInfoInit(uint64_t InHeroId);

	// Object: Function BattleField.BattleFieldPlayerState.OnRep_TDMArmArray
	// Flags: [Final|Native|Public]
	// Offset: 0x10a86e40
	// Params: [ Num(0) Size(0x0) ]
	void OnRep_TDMArmArray();

	// Object: Function BattleField.BattleFieldPlayerState.OnRep_RefreshWeapons
	// Flags: [Final|Native|Public]
	// Offset: 0xf76faac
	// Params: [ Num(0) Size(0x0) ]
	void OnRep_RefreshWeapons();

	// Object: Function BattleField.BattleFieldPlayerState.OnRep_RefreshSupportAbility
	// Flags: [Final|Native|Public]
	// Offset: 0xeaf3924
	// Params: [ Num(0) Size(0x0) ]
	void OnRep_RefreshSupportAbility();

	// Object: Function BattleField.BattleFieldPlayerState.OnRep_RedEnvelopeCount
	// Flags: [Final|Native|Private]
	// Offset: 0x143eea20
	// Params: [ Num(0) Size(0x0) ]
	void OnRep_RedEnvelopeCount();

	// Object: Function BattleField.BattleFieldPlayerState.OnRep_OverloadPoint
	// Flags: [Final|Native|Public]
	// Offset: 0x143eea0c
	// Params: [ Num(0) Size(0x0) ]
	void OnRep_OverloadPoint();

	// Object: Function BattleField.BattleFieldPlayerState.OnRep_OverloadBuffLevel
	// Flags: [Final|Native|Public]
	// Offset: 0x143ee9f8
	// Params: [ Num(0) Size(0x0) ]
	void OnRep_OverloadBuffLevel();

	// Object: Function BattleField.BattleFieldPlayerState.OnRep_NeedShowRedDotNewUnlockWeaponItemIDs
	// Flags: [Final|Native|Public]
	// Offset: 0x143ee9e4
	// Params: [ Num(0) Size(0x0) ]
	void OnRep_NeedShowRedDotNewUnlockWeaponItemIDs();

	// Object: Function BattleField.BattleFieldPlayerState.OnRep_NeedShowRedDotNewUnlockVehiclePartItemIDs
	// Flags: [Final|Native|Public]
	// Offset: 0x143ee9d0
	// Params: [ Num(0) Size(0x0) ]
	void OnRep_NeedShowRedDotNewUnlockVehiclePartItemIDs();

	// Object: Function BattleField.BattleFieldPlayerState.OnRep_IsPlayerOccupyingAnchor
	// Flags: [Final|Native|Public]
	// Offset: 0xf8b1874
	// Params: [ Num(0) Size(0x0) ]
	void OnRep_IsPlayerOccupyingAnchor();

	// Object: Function BattleField.BattleFieldPlayerState.OnRep_IsOverloadState
	// Flags: [Final|Native|Public]
	// Offset: 0x143ee9bc
	// Params: [ Num(0) Size(0x0) ]
	void OnRep_IsOverloadState();

	// Object: Function BattleField.BattleFieldPlayerState.OnRep_BattleLevel
	// Flags: [Final|Native|Public]
	// Offset: 0x143ee9a8
	// Params: [ Num(0) Size(0x0) ]
	void OnRep_BattleLevel();

	// Object: Function BattleField.BattleFieldPlayerState.MarkHeroWeaponInfoInited
	// Flags: [Final|Native|Public]
	// Offset: 0x143ee904
	// Params: [ Num(1) Size(0x8) ]
	void MarkHeroWeaponInfoInited(uint64_t InHeroId);

	// Object: Function BattleField.BattleFieldPlayerState.IsOverloadState
	// Flags: [Final|Native|Public]
	// Offset: 0x143ee8cc
	// Params: [ Num(1) Size(0x1) ]
	uint8_t IsOverloadState();

	// Object: Function BattleField.BattleFieldPlayerState.IsItemDisableOrLocked
	// Flags: [Final|Native|Public]
	// Offset: 0x143ee7e0
	// Params: [ Num(3) Size(0xD) ]
	uint8_t IsItemDisableOrLocked(uint64_t ItemID, EAttachPosition InAttachPosition);

	// Object: Function BattleField.BattleFieldPlayerState.IsExpertUnlocked
	// Flags: [Final|Native|Public]
	// Offset: 0x143ee730
	// Params: [ Num(2) Size(0x9) ]
	uint8_t IsExpertUnlocked(uint64_t InExpertID);

	// Object: Function BattleField.BattleFieldPlayerState.IsCurrentArmBagHasDisableOrLockedWeaponItem
	// Flags: [Final|Native|Public]
	// Offset: 0x143ee644
	// Params: [ Num(3) Size(0x11) ]
	uint8_t IsCurrentArmBagHasDisableOrLockedWeaponItem(int32_t ArmedForceID, uint64_t InHeroId);

	// Object: Function BattleField.BattleFieldPlayerState.HasInitedHeroWeaponInfo
	// Flags: [Final|Native|Public|Const]
	// Offset: 0x143ee594
	// Params: [ Num(2) Size(0x9) ]
	uint8_t HasInitedHeroWeaponInfo(uint64_t InHeroId);

	// Object: Function BattleField.BattleFieldPlayerState.GetWeaponItemAttachPositionInHeroBag
	// Flags: [Final|Native|Public]
	// Offset: 0x143ee4b0
	// Params: [ Num(3) Size(0x14) ]
	EAttachPosition GetWeaponItemAttachPositionInHeroBag(uint64_t InHeroId, uint64_t InWeaponItemID);

	// Object: Function BattleField.BattleFieldPlayerState.GetUinForLua
	// Flags: [Final|Native|Public]
	// Offset: 0x143ee47c
	// Params: [ Num(1) Size(0x8) ]
	uint64_t GetUinForLua();

	// Object: Function BattleField.BattleFieldPlayerState.GetOverloadPoints
	// Flags: [Final|Native|Public]
	// Offset: 0x143ee448
	// Params: [ Num(1) Size(0x4) ]
	int32_t GetOverloadPoints();

	// Object: Function BattleField.BattleFieldPlayerState.GetOverloadBuffLevel
	// Flags: [Final|Native|Public]
	// Offset: 0x143ee414
	// Params: [ Num(1) Size(0x1) ]
	EOverloadBuffLevel GetOverloadBuffLevel();

	// Object: Function BattleField.BattleFieldPlayerState.GetDirtyBagsInThisRound
	// Flags: [Final|Native|Public]
	// Offset: 0x143ee3a4
	// Params: [ Num(1) Size(0x10) ]
	struct TArray<struct FTDMBag> GetDirtyBagsInThisRound();

	// Object: Function BattleField.BattleFieldPlayerState.GetBagByArmID
	// Flags: [Final|Native|Public|HasOutParms]
	// Offset: 0x143ee254
	// Params: [ Num(4) Size(0x31) ]
	uint8_t GetBagByArmID(int32_t ArmID, uint64_t InHeroId, struct FTDMBag& OutBag);

	// Object: Function BattleField.BattleFieldPlayerState.CreateWeaponFromPreset
	// Flags: [Final|Native|Public|HasOutParms]
	// Offset: 0x143ee098
	// Params: [ Num(5) Size(0x101) ]
	uint8_t CreateWeaponFromPreset(uint64_t WeaponItemId, uint64_t PresetId, EAttachPosition AttachPosition, struct FTDMHero& TDMHero);

	// Object: Function BattleField.BattleFieldPlayerState.CheckWeaponPresetInstalledInvalidPartsOnOtherHero
	// Flags: [Final|Native|Public]
	// Offset: 0x143edfac
	// Params: [ Num(3) Size(0xD) ]
	uint8_t CheckWeaponPresetInstalledInvalidPartsOnOtherHero(uint64_t WeaponItemId, int32_t WeaponPresetIndex);

	// Object: Function BattleField.BattleFieldPlayerState.CheckWeaponItemMatchArmedForce
	// Flags: [Final|Native|Public]
	// Offset: 0x143ede88
	// Params: [ Num(4) Size(0x19) ]
	uint8_t CheckWeaponItemMatchArmedForce(int32_t ArmedForceID, uint64_t InHeroId, uint64_t WeaponItemId);

	// Object: Function BattleField.BattleFieldPlayerState.CheckVehiclePartValid
	// Flags: [Final|Native|Public]
	// Offset: 0x143edd64
	// Params: [ Num(4) Size(0x20) ]
	uint64_t CheckVehiclePartValid(uint64_t VehicleItemID, int32_t SlotId, uint64_t PartItemId);

	// Object: Function BattleField.BattleFieldPlayerState.CheckSoldierPropsMatchArmedForce
	// Flags: [Final|Native|Public]
	// Offset: 0x143edc78
	// Params: [ Num(3) Size(0x11) ]
	uint8_t CheckSoldierPropsMatchArmedForce(int32_t ArmedForceID, uint64_t SoldierPropsID);

	// Object: Function BattleField.BattleFieldPlayerState.CheckInstalledInvalidParts
	// Flags: [Final|Native|Public|HasOutParms]
	// Offset: 0x143edb68
	// Params: [ Num(3) Size(0x7C5) ]
	uint8_t CheckInstalledInvalidParts(const struct FInventoryItemInfo& InInventoryItemInfo, EAttachPosition InAttachPosition);

	// Object: Function BattleField.BattleFieldPlayerState.CancelWeaponItemRedDot
	// Flags: [Final|Native|Public|HasOutParms]
	// Offset: 0x143edaac
	// Params: [ Num(1) Size(0x10) ]
	void CancelWeaponItemRedDot(const struct TArray<uint64_t>& WeaponItemIDs);

	// Object: Function BattleField.BattleFieldPlayerState.CancelVehiclePartItemRedDot
	// Flags: [Final|Native|Public|HasOutParms]
	// Offset: 0x143ed9f0
	// Params: [ Num(1) Size(0x10) ]
	void CancelVehiclePartItemRedDot(const struct TArray<uint64_t>& ItemIds);

	// Object: Function BattleField.BattleFieldPlayerState.AddOneRedEnvelope
	// Flags: [Final|Native|Public]
	// Offset: 0x143ed9dc
	// Params: [ Num(0) Size(0x0) ]
	void AddOneRedEnvelope();

	// Object: Function BattleField.BattleFieldPlayerState.AddOneOverloadPoint
	// Flags: [Final|Native|Public]
	// Offset: 0x143ed9c8
	// Params: [ Num(0) Size(0x0) ]
	void AddOneOverloadPoint();
};

// Object: Class BattleField.BattlefieldRebornComponent
// Size: 0x100 (Inherited: 0xF8)
struct UBattlefieldRebornComponent : UActorComponent
{
	DEFINE_UE_CLASS_HELPERS(UBattlefieldRebornComponent, "BattlefieldRebornComponent")

	uint8_t Pad_0xF8[0x8]; // 0xF8(0x8)
};

// Object: Class BattleField.BattleFieldRedeployView
// Size: 0x630 (Inherited: 0x460)
struct UBattleFieldRedeployView : UDFMBaseUIView
{
	DEFINE_UE_CLASS_HELPERS(UBattleFieldRedeployView, "BattleFieldRedeployView")

	struct URedeployConfig* RedeployConfig; // 0x460(0x8)
	struct URedeployConfig* RedeployConfigHD; // 0x468(0x8)
	struct UImage* MapBackImage; // 0x470(0x8)
	float TwistDelta; // 0x478(0x4)
	float TwistEnd; // 0x47C(0x4)
	float RisingTime; // 0x480(0x4)
	float LandingTime; // 0x484(0x4)
	struct UPaperSprite* Camp0Img; // 0x488(0x8)
	struct UPaperSprite* Camp0BgImg; // 0x490(0x8)
	struct FColor Camp0Clolor; // 0x498(0x4)
	uint8_t Pad_0x49C[0x4]; // 0x49C(0x4)
	struct UPaperSprite* Camp1Img; // 0x4A0(0x8)
	struct UPaperSprite* Camp1BgImg; // 0x4A8(0x8)
	struct FColor Camp1Clolor; // 0x4B0(0x4)
	uint8_t Pad_0x4B4[0x4]; // 0x4B4(0x4)
	struct UPaperSprite* WeaponChangeImg; // 0x4B8(0x8)
	struct FName WeaponChangeTag; // 0x4C0(0x8)
	struct UPaperSprite* HummerImg; // 0x4C8(0x8)
	struct FName HummerTag; // 0x4D0(0x8)
	struct UPaperSprite* HelicopterImg; // 0x4D8(0x8)
	struct FName HelicopterTag; // 0x4E0(0x8)
	struct UPaperSprite* PlayerImg; // 0x4E8(0x8)
	struct UPaperSprite* PlayerDeidImg; // 0x4F0(0x8)
	int32_t RebornTimeLimit; // 0x4F8(0x4)
	int32_t DeathShowTime; // 0x4FC(0x4)
	struct UPaperSprite* CommandoImg; // 0x500(0x8)
	struct UPaperSprite* ScoutImg; // 0x508(0x8)
	struct UPaperSprite* MedicImg; // 0x510(0x8)
	struct UPaperSprite* SniperImg; // 0x518(0x8)
	struct FTimerHandle RebornTimer; // 0x520(0x8)
	struct TArray<struct FInventoryItemInfo> Weapons; // 0x528(0x10)
	uint8_t IsInit : 1; // 0x538(0x1), Mask(0x1)
	uint8_t BitPad_0x538_1 : 7; // 0x538(0x1)
	uint8_t Pad_0x539[0x7]; // 0x539(0x7)
	struct TArray<uint32_t> Hummers; // 0x540(0x10)
	struct TArray<uint32_t> Helicopters; // 0x550(0x10)
	struct TArray<uint64_t> AllPlayerIds; // 0x560(0x10)
	struct TArray<struct FVector> AllWeaponChanges; // 0x570(0x10)
	struct TArray<int32_t> AllRebornFlagIds; // 0x580(0x10)
	struct TArray<int32_t> AllCapturPointsIds; // 0x590(0x10)
	struct TArray<int32_t> AllTeamStartIds; // 0x5A0(0x10)
	struct FString MapName; // 0x5B0(0x10)
	struct FMatrix ProjectMat; // 0x5C0(0x40)
	int32_t LoadPerCent; // 0x600(0x4)
	float AcProgress; // 0x604(0x4)
	float AcLastTime; // 0x608(0x4)
	float Path; // 0x60C(0x4)
	float Speed; // 0x610(0x4)
	uint8_t RisingOrLanding : 1; // 0x614(0x1), Mask(0x1)
	uint8_t BitPad_0x614_1 : 7; // 0x614(0x1)
	uint8_t Pad_0x615[0x3]; // 0x615(0x3)
	struct FTimerHandle AcTimer; // 0x618(0x8)
	struct UUMGSequencePlayer* Sequeue; // 0x620(0x8)
	float TimeUsed; // 0x628(0x4)
	uint8_t Pad_0x62C[0x4]; // 0x62C(0x4)

	// Object: Function BattleField.BattleFieldRedeployView.ShowWeaponChange
	// Flags: [Native|Public]
	// Offset: 0x143f3e68
	// Params: [ Num(0) Size(0x0) ]
	void ShowWeaponChange();

	// Object: Function BattleField.BattleFieldRedeployView.ShowAcRising
	// Flags: [Native|Public]
	// Offset: 0x143f3dbc
	// Params: [ Num(1) Size(0x4) ]
	void ShowAcRising(float RiseTime);

	// Object: Function BattleField.BattleFieldRedeployView.ShowAcLanding
	// Flags: [Native|Public]
	// Offset: 0x143f3d10
	// Params: [ Num(1) Size(0x4) ]
	void ShowAcLanding(float LandTime);

	// Object: Function BattleField.BattleFieldRedeployView.ShowAC
	// Flags: [Native|Public]
	// Offset: 0x143f3cf4
	// Params: [ Num(0) Size(0x0) ]
	void ShowAC();

	// Object: Function BattleField.BattleFieldRedeployView.SaveRedeployConfig
	// Flags: [Native|Public]
	// Offset: 0x143f3cd8
	// Params: [ Num(0) Size(0x0) ]
	void SaveRedeployConfig();

	// Object: Function BattleField.BattleFieldRedeployView.RefreshCurentWeapons
	// Flags: [Native|Public]
	// Offset: 0x143f3cbc
	// Params: [ Num(0) Size(0x0) ]
	void RefreshCurentWeapons();

	// Object: Function BattleField.BattleFieldRedeployView.OnRedeployPointSelected
	// Flags: [Native|Public]
	// Offset: 0x143f3bcc
	// Params: [ Num(2) Size(0x9) ]
	void OnRedeployPointSelected(struct UWidget* SelectedPoint, uint8_t bAutoSelect);

	// Object: Function BattleField.BattleFieldRedeployView.GetLastTime
	// Flags: [Native|Public]
	// Offset: 0x143f3b90
	// Params: [ Num(1) Size(0x4) ]
	float GetLastTime();

	// Object: Function BattleField.BattleFieldRedeployView.CreatePlayerMarker
	// Flags: [Native|Public]
	// Offset: 0x143f3a70
	// Params: [ Num(3) Size(0x14) ]
	void CreatePlayerMarker(uint64_t PlayerId, uint64_t Uin, int32_t Camp);

	// Object: Function BattleField.BattleFieldRedeployView.ChangeCameraLocation
	// Flags: [Native|Public]
	// Offset: 0x143f3a54
	// Params: [ Num(0) Size(0x0) ]
	void ChangeCameraLocation();

	// Object: Function BattleField.BattleFieldRedeployView.AfterShowOpenAnim
	// Flags: [Native|Public]
	// Offset: 0x143f3a38
	// Params: [ Num(0) Size(0x0) ]
	void AfterShowOpenAnim();
};

// Object: Class BattleField.RedeployBaseUIViewFramework
// Size: 0x470 (Inherited: 0x400)
struct URedeployBaseUIViewFramework : UGPBaseHudView
{
	DEFINE_UE_CLASS_HELPERS(URedeployBaseUIViewFramework, "RedeployBaseUIViewFramework")

	struct TMap<struct FName, struct UWidgetAnimation*> AnimationsMap; // 0x400(0x50)
	uint8_t Pad_0x450[0x10]; // 0x450(0x10)
	uint8_t bIsShow : 1; // 0x460(0x1), Mask(0x1)
	uint8_t BitPad_0x460_1 : 7; // 0x460(0x1)
	uint8_t Pad_0x461[0x3]; // 0x461(0x3)
	float OpenTime; // 0x464(0x4)
	float ShowTime; // 0x468(0x4)
	uint8_t bAutoCollectAnimations : 1; // 0x46C(0x1), Mask(0x1)
	uint8_t BitPad_0x46C_1 : 7; // 0x46C(0x1)
	uint8_t Pad_0x46D[0x3]; // 0x46D(0x3)

	// Object: Function BattleField.RedeployBaseUIViewFramework.SetWidgetVisible
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0x144051ec
	// Params: [ Num(1) Size(0x8) ]
	void SetWidgetVisible(struct UWidget* Widget);

	// Object: Function BattleField.RedeployBaseUIViewFramework.SetWidgetSelfHitTestInvisibleOrCollapsed
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0x144050fc
	// Params: [ Num(2) Size(0x9) ]
	void SetWidgetSelfHitTestInvisibleOrCollapsed(struct UWidget* Widget, uint8_t bVisible);

	// Object: Function BattleField.RedeployBaseUIViewFramework.SetWidgetSelfHitTestInvisible
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0x14405050
	// Params: [ Num(1) Size(0x8) ]
	void SetWidgetSelfHitTestInvisible(struct UWidget* Widget);

	// Object: Function BattleField.RedeployBaseUIViewFramework.SetWidgetOpacity
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0x14404f68
	// Params: [ Num(2) Size(0xC) ]
	void SetWidgetOpacity(struct UWidget* Widget, float Opacity);

	// Object: Function BattleField.RedeployBaseUIViewFramework.SetWidgetHitTestInvisible
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0x14404ebc
	// Params: [ Num(1) Size(0x8) ]
	void SetWidgetHitTestInvisible(struct UWidget* Widget);

	// Object: Function BattleField.RedeployBaseUIViewFramework.SetWidgetHidden
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0x14404e10
	// Params: [ Num(1) Size(0x8) ]
	void SetWidgetHidden(struct UWidget* Widget);

	// Object: Function BattleField.RedeployBaseUIViewFramework.SetWidgetCollapsed
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0x14404d64
	// Params: [ Num(1) Size(0x8) ]
	void SetWidgetCollapsed(struct UWidget* Widget);

	// Object: Function BattleField.RedeployBaseUIViewFramework.SetOpenTime
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x14404d50
	// Params: [ Num(0) Size(0x0) ]
	void SetOpenTime();

	// Object: Function BattleField.RedeployBaseUIViewFramework.PlayUIAudio
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x14404cac
	// Params: [ Num(1) Size(0x8) ]
	void PlayUIAudio(struct FName AudioName);

	// Object: Function BattleField.RedeployBaseUIViewFramework.OnGameHudStateChanged
	// Flags: [Native|Public]
	// Offset: 0xe7a5104
	// Params: [ Num(1) Size(0x8) ]
	void OnGameHudStateChanged(struct UHudManager* InHudManager);

	// Object: Function BattleField.RedeployBaseUIViewFramework.GetWidgetFromPath
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0x14404ba4
	// Params: [ Num(2) Size(0x18) ]
	struct UWidget* GetWidgetFromPath(struct FString Path);

	// Object: Function BattleField.RedeployBaseUIViewFramework.CollectAnimations
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0x14404b88
	// Params: [ Num(0) Size(0x0) ]
	void CollectAnimations();

	// Object: Function BattleField.RedeployBaseUIViewFramework.CalculateShowTime
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x14404b74
	// Params: [ Num(0) Size(0x0) ]
	void CalculateShowTime();
};

// Object: Class BattleField.BattleFieldRedeployViewFramework
// Size: 0x640 (Inherited: 0x470)
struct UBattleFieldRedeployViewFramework : URedeployBaseUIViewFramework
{
	DEFINE_UE_CLASS_HELPERS(UBattleFieldRedeployViewFramework, "BattleFieldRedeployViewFramework")

	struct URedeployConfig* RedeployConfig; // 0x470(0x8)
	struct URedeployConfig* RedeployConfigHD; // 0x478(0x8)
	struct UImage* MapBackImage; // 0x480(0x8)
	float TwistDelta; // 0x488(0x4)
	float TwistEnd; // 0x48C(0x4)
	float RisingTime; // 0x490(0x4)
	float LandingTime; // 0x494(0x4)
	struct UPaperSprite* Camp0Img; // 0x498(0x8)
	struct UPaperSprite* Camp0BgImg; // 0x4A0(0x8)
	struct FColor Camp0Clolor; // 0x4A8(0x4)
	uint8_t Pad_0x4AC[0x4]; // 0x4AC(0x4)
	struct UPaperSprite* Camp1Img; // 0x4B0(0x8)
	struct UPaperSprite* Camp1BgImg; // 0x4B8(0x8)
	struct FColor Camp1Clolor; // 0x4C0(0x4)
	uint8_t Pad_0x4C4[0x4]; // 0x4C4(0x4)
	struct UPaperSprite* WeaponChangeImg; // 0x4C8(0x8)
	struct FName WeaponChangeTag; // 0x4D0(0x8)
	struct UPaperSprite* HummerImg; // 0x4D8(0x8)
	struct FName HummerTag; // 0x4E0(0x8)
	struct UPaperSprite* HelicopterImg; // 0x4E8(0x8)
	struct FName HelicopterTag; // 0x4F0(0x8)
	struct UPaperSprite* PlayerImg; // 0x4F8(0x8)
	struct UPaperSprite* PlayerDeidImg; // 0x500(0x8)
	int32_t RebornTimeLimit; // 0x508(0x4)
	int32_t DeathShowTime; // 0x50C(0x4)
	struct UPaperSprite* CommandoImg; // 0x510(0x8)
	struct UPaperSprite* ScoutImg; // 0x518(0x8)
	struct UPaperSprite* MedicImg; // 0x520(0x8)
	struct UPaperSprite* SniperImg; // 0x528(0x8)
	struct FTimerHandle RebornTimer; // 0x530(0x8)
	struct TArray<struct FInventoryItemInfo> Weapons; // 0x538(0x10)
	uint8_t IsInit : 1; // 0x548(0x1), Mask(0x1)
	uint8_t BitPad_0x548_1 : 7; // 0x548(0x1)
	uint8_t Pad_0x549[0x7]; // 0x549(0x7)
	struct TArray<uint32_t> Hummers; // 0x550(0x10)
	struct TArray<uint32_t> Helicopters; // 0x560(0x10)
	struct TArray<uint64_t> AllPlayerIds; // 0x570(0x10)
	struct TArray<struct FVector> AllWeaponChanges; // 0x580(0x10)
	struct TArray<int32_t> AllRebornFlagIds; // 0x590(0x10)
	struct TArray<int32_t> AllCapturPointsIds; // 0x5A0(0x10)
	struct TArray<int32_t> AllTeamStartIds; // 0x5B0(0x10)
	struct FString MapName; // 0x5C0(0x10)
	struct FMatrix ProjectMat; // 0x5D0(0x40)
	int32_t LoadPerCent; // 0x610(0x4)
	float AcProgress; // 0x614(0x4)
	float AcLastTime; // 0x618(0x4)
	float Path; // 0x61C(0x4)
	float Speed; // 0x620(0x4)
	uint8_t RisingOrLanding : 1; // 0x624(0x1), Mask(0x1)
	uint8_t BitPad_0x624_1 : 7; // 0x624(0x1)
	uint8_t Pad_0x625[0x3]; // 0x625(0x3)
	struct FTimerHandle AcTimer; // 0x628(0x8)
	struct UUMGSequencePlayer* Sequeue; // 0x630(0x8)
	float TimeUsed; // 0x638(0x4)
	uint8_t Pad_0x63C[0x4]; // 0x63C(0x4)

	// Object: Function BattleField.BattleFieldRedeployViewFramework.ShowWeaponChange
	// Flags: [Native|Public]
	// Offset: 0x143f4098
	// Params: [ Num(0) Size(0x0) ]
	void ShowWeaponChange();

	// Object: Function BattleField.BattleFieldRedeployViewFramework.ShowAcRising
	// Flags: [Native|Public]
	// Offset: 0xf90b6fc
	// Params: [ Num(1) Size(0x4) ]
	void ShowAcRising(float RiseTime);

	// Object: Function BattleField.BattleFieldRedeployViewFramework.ShowAcLanding
	// Flags: [Native|Public]
	// Offset: 0xf8f0acc
	// Params: [ Num(1) Size(0x4) ]
	void ShowAcLanding(float LandTime);

	// Object: Function BattleField.BattleFieldRedeployViewFramework.ShowAC
	// Flags: [Native|Public]
	// Offset: 0x143f407c
	// Params: [ Num(0) Size(0x0) ]
	void ShowAC();

	// Object: Function BattleField.BattleFieldRedeployViewFramework.SaveRedeployConfig
	// Flags: [Native|Public]
	// Offset: 0x143f4060
	// Params: [ Num(0) Size(0x0) ]
	void SaveRedeployConfig();

	// Object: Function BattleField.BattleFieldRedeployViewFramework.RefreshCurentWeapons
	// Flags: [Native|Public]
	// Offset: 0x143f4044
	// Params: [ Num(0) Size(0x0) ]
	void RefreshCurentWeapons();

	// Object: Function BattleField.BattleFieldRedeployViewFramework.OnRedeployPointSelected
	// Flags: [Native|Public]
	// Offset: 0xf61f65c
	// Params: [ Num(2) Size(0x9) ]
	void OnRedeployPointSelected(struct UWidget* SelectedPoint, uint8_t bAutoSelect);

	// Object: Function BattleField.BattleFieldRedeployViewFramework.GetLastTime
	// Flags: [Native|Public]
	// Offset: 0x143f4008
	// Params: [ Num(1) Size(0x4) ]
	float GetLastTime();

	// Object: Function BattleField.BattleFieldRedeployViewFramework.CreatePlayerMarker
	// Flags: [Native|Public]
	// Offset: 0x143f3ee8
	// Params: [ Num(3) Size(0x14) ]
	void CreatePlayerMarker(uint64_t PlayerId, uint64_t Uin, int32_t Camp);

	// Object: Function BattleField.BattleFieldRedeployViewFramework.ChangeCameraLocation
	// Flags: [Native|Public]
	// Offset: 0x143f3ecc
	// Params: [ Num(0) Size(0x0) ]
	void ChangeCameraLocation();

	// Object: Function BattleField.BattleFieldRedeployViewFramework.AfterShowOpenAnim
	// Flags: [Native|Public]
	// Offset: 0x143f3eb0
	// Params: [ Num(0) Size(0x0) ]
	void AfterShowOpenAnim();
};

// Object: Class BattleField.BattleFieldRepPolicy
// Size: 0x3F8 (Inherited: 0x3F8)
struct ABattleFieldRepPolicy : AMinimalReplicationPolicy
{
	DEFINE_UE_CLASS_HELPERS(ABattleFieldRepPolicy, "BattleFieldRepPolicy")
};

// Object: Class BattleField.BattleFieldSettlementView
// Size: 0x610 (Inherited: 0x610)
struct UBattleFieldSettlementView : ULuaUIBaseView
{
	DEFINE_UE_CLASS_HELPERS(UBattleFieldSettlementView, "BattleFieldSettlementView")

	int32_t WinCamp; // 0x60C(0x4)

	// Object: Function BattleField.BattleFieldSettlementView.OnBattleFieldEndMatchEvent
	// Flags: [Final|Native|Public]
	// Offset: 0x143f40ec
	// Params: [ Num(1) Size(0x4) ]
	void OnBattleFieldEndMatchEvent(int32_t InWinCamp);
};

// Object: Class BattleField.BattleFieldStatisticsComponent
// Size: 0x3D0 (Inherited: 0x3C8)
struct UBattleFieldStatisticsComponent : UDFMScoreStatisticsComponent
{
	DEFINE_UE_CLASS_HELPERS(UBattleFieldStatisticsComponent, "BattleFieldStatisticsComponent")

	struct ABattleFieldGameState* BattleFieldGameState; // 0x3C8(0x8)

	// Object: Function BattleField.BattleFieldStatisticsComponent.CalculateAndShowStickToTheGoalInfo
	// Flags: [Final|Native|Private]
	// Offset: 0x143f4948
	// Params: [ Num(1) Size(0x8) ]
	void CalculateAndShowStickToTheGoalInfo(struct ACHARACTER* CHARACTER);

	// Object: Function BattleField.BattleFieldStatisticsComponent.CalculateAndShowNeutralizedInfo
	// Flags: [Final|Native|Private]
	// Offset: 0x143f489c
	// Params: [ Num(1) Size(0x8) ]
	void CalculateAndShowNeutralizedInfo(struct ACHARACTER* CHARACTER);

	// Object: Function BattleField.BattleFieldStatisticsComponent.CalculateAndShowKillInfo
	// Flags: [Final|Native|Private]
	// Offset: 0x143f4790
	// Params: [ Num(2) Size(0x1B0) ]
	void CalculateAndShowKillInfo(struct FKillInfo KillInfo, struct ACHARACTER* CHARACTER);

	// Object: Function BattleField.BattleFieldStatisticsComponent.CalculateAndShowKillAssitInfo
	// Flags: [Final|Native|Private]
	// Offset: 0x143f46c0
	// Params: [ Num(1) Size(0x1A8) ]
	void CalculateAndShowKillAssitInfo(struct FKillInfo KillInfo);

	// Object: Function BattleField.BattleFieldStatisticsComponent.CalculateAndShowHitHeadInfo
	// Flags: [Final|Native|Private]
	// Offset: 0x143f45b4
	// Params: [ Num(2) Size(0x1B0) ]
	void CalculateAndShowHitHeadInfo(struct FKillInfo KillInfo, struct ACHARACTER* CHARACTER);

	// Object: Function BattleField.BattleFieldStatisticsComponent.CalculateAndShowFarKillInfo
	// Flags: [Final|Native|Private]
	// Offset: 0x143f44a8
	// Params: [ Num(2) Size(0x1B0) ]
	void CalculateAndShowFarKillInfo(struct FKillInfo KillInfo, struct ACHARACTER* CHARACTER);

	// Object: Function BattleField.BattleFieldStatisticsComponent.CalculateAndShowDefendCapPointKillInfo
	// Flags: [Final|Native|Private]
	// Offset: 0x143f439c
	// Params: [ Num(2) Size(0x1B0) ]
	void CalculateAndShowDefendCapPointKillInfo(struct FKillInfo KillInfo, struct ACHARACTER* CHARACTER);

	// Object: Function BattleField.BattleFieldStatisticsComponent.CalculateAndShowContinueKillInfo
	// Flags: [Final|Native|Private]
	// Offset: 0x143f42f0
	// Params: [ Num(1) Size(0x8) ]
	void CalculateAndShowContinueKillInfo(struct ACHARACTER* CHARACTER);

	// Object: Function BattleField.BattleFieldStatisticsComponent.CalculateAndShowCapturingInfo
	// Flags: [Final|Native|Private]
	// Offset: 0x143f4244
	// Params: [ Num(1) Size(0x8) ]
	void CalculateAndShowCapturingInfo(struct ACHARACTER* CHARACTER);

	// Object: Function BattleField.BattleFieldStatisticsComponent.CalculateAndShowCapturedInfo
	// Flags: [Final|Native|Private]
	// Offset: 0x143f4198
	// Params: [ Num(1) Size(0x8) ]
	void CalculateAndShowCapturedInfo(struct ACHARACTER* CHARACTER);
};

// Object: Class BattleField.BattleFieldTeamIconHUDView
// Size: 0x498 (Inherited: 0x468)
struct UBattleFieldTeamIconHUDView : UMapItemHUDView
{
	DEFINE_UE_CLASS_HELPERS(UBattleFieldTeamIconHUDView, "BattleFieldTeamIconHUDView")

	struct UImage* PublicItem; // 0x468(0x8)
	struct UImage* Icon_Team; // 0x470(0x8)
	struct UCanvasPanel* MainView; // 0x478(0x8)
	struct UPaperSprite* AttackTeam; // 0x480(0x8)
	struct UPaperSprite* DefendTeam; // 0x488(0x8)
	uint8_t bIsMatchSize : 1; // 0x490(0x1), Mask(0x1)
	uint8_t BitPad_0x490_1 : 7; // 0x490(0x1)
	uint8_t Pad_0x491[0x7]; // 0x491(0x7)
};

// Object: Class BattleField.BattleFieldTeamIconHUDController
// Size: 0x2B0 (Inherited: 0x2B0)
struct UBattleFieldTeamIconHUDController : UMapIconViewController
{
	DEFINE_UE_CLASS_HELPERS(UBattleFieldTeamIconHUDController, "BattleFieldTeamIconHUDController")

	uint8_t bIsLocalCamp : 1; // 0x2A1(0x1), Mask(0x1)
};

// Object: Class BattleField.BattleFieldTeamSystem
// Size: 0x3B0 (Inherited: 0x3B0)
struct ABattleFieldTeamSystem : ATeamSystem
{
	DEFINE_UE_CLASS_HELPERS(ABattleFieldTeamSystem, "BattleFieldTeamSystem")

	// Object: Function BattleField.BattleFieldTeamSystem.OnPlayerSettlementEnd
	// Flags: [Final|Native|Protected]
	// Offset: 0x143f4b80
	// Params: [ Num(1) Size(0x8) ]
	void OnPlayerSettlementEnd(int64_t PlayerUin);

	// Object: Function BattleField.BattleFieldTeamSystem.OnPlayerSettlementBegin
	// Flags: [Final|Native|Protected]
	// Offset: 0x143f4adc
	// Params: [ Num(1) Size(0x8) ]
	void OnPlayerSettlementBegin(int64_t PlayerUin);
};

// Object: Class BattleField.BattleFieldUtil
// Size: 0x28 (Inherited: 0x28)
struct UBattleFieldUtil : UObject
{
	DEFINE_UE_CLASS_HELPERS(UBattleFieldUtil, "BattleFieldUtil")

	// Object: Function BattleField.BattleFieldUtil.PruneString
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x143f5cc8
	// Params: [ Num(3) Size(0x28) ]
	static struct FString PruneString(struct FString InStr, int32_t maxLen);

	// Object: Function BattleField.BattleFieldUtil.IsLocalPlayerTeamMateByUin
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x143f5bec
	// Params: [ Num(3) Size(0x14) ]
	static int32_t IsLocalPlayerTeamMateByUin(struct UObject* WorldContextObject, uint64_t PlayerId);

	// Object: Function BattleField.BattleFieldUtil.IsInLocalPlayerTeamByUin
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x143f5b0c
	// Params: [ Num(3) Size(0x11) ]
	static uint8_t IsInLocalPlayerTeamByUin(struct UObject* WorldContextObject, uint64_t PlayerId);

	// Object: Function BattleField.BattleFieldUtil.GetTeamPlayerNameByPlayerId
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x143f59f8
	// Params: [ Num(3) Size(0x20) ]
	static struct FString GetTeamPlayerNameByPlayerId(struct UObject* WorldContextObject, uint64_t PlayerId);

	// Object: Function BattleField.BattleFieldUtil.GetTeamLeaderID
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x143f5954
	// Params: [ Num(2) Size(0x10) ]
	static uint64_t GetTeamLeaderID(struct UObject* WorldContextObject);

	// Object: Function BattleField.BattleFieldUtil.GetMatchTime
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x143f58b0
	// Params: [ Num(2) Size(0xC) ]
	static float GetMatchTime(struct UObject* WorldContextObject);

	// Object: Function BattleField.BattleFieldUtil.GetMapName
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x143f57d8
	// Params: [ Num(2) Size(0x18) ]
	static struct FString GetMapName(struct UObject* WorldContextObject);

	// Object: Function BattleField.BattleFieldUtil.GetLocalPlayerTeamID
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x143f5734
	// Params: [ Num(2) Size(0xC) ]
	static int32_t GetLocalPlayerTeamID(struct UObject* WorldContextObject);

	// Object: Function BattleField.BattleFieldUtil.GetLocalPlayerState
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0xf756604
	// Params: [ Num(2) Size(0x10) ]
	static struct ADFMPlayerState* GetLocalPlayerState(struct UObject* WorldContextObject);

	// Object: Function BattleField.BattleFieldUtil.GetLocalPlayerCamp
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x143f5690
	// Params: [ Num(2) Size(0xC) ]
	static int32_t GetLocalPlayerCamp(struct UObject* WorldContextObject);

	// Object: Function BattleField.BattleFieldUtil.GetLocalForcesType
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x143f55ec
	// Params: [ Num(2) Size(0x9) ]
	static EBattleFieldForcesType GetLocalForcesType(struct UObject* WorldContextObject);

	// Object: Function BattleField.BattleFieldUtil.GetLocalCharacter
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x143f5548
	// Params: [ Num(2) Size(0x10) ]
	static struct ADFMCharacter* GetLocalCharacter(struct UObject* WorldContextObject);

	// Object: Function BattleField.BattleFieldUtil.GetLocalBattleFieldPlayerState
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x143f54a4
	// Params: [ Num(2) Size(0x10) ]
	static struct ABattleFieldPlayerState* GetLocalBattleFieldPlayerState(struct UObject* WorldContextObject);

	// Object: Function BattleField.BattleFieldUtil.GetLocalBattleFieldCharacter
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x143f5400
	// Params: [ Num(2) Size(0x10) ]
	static struct ABattleFieldCharacter* GetLocalBattleFieldCharacter(struct UObject* WorldContextObject);

	// Object: Function BattleField.BattleFieldUtil.GetLeftTime
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x143f535c
	// Params: [ Num(2) Size(0xC) ]
	static float GetLeftTime(struct UObject* WorldContextObject);

	// Object: Function BattleField.BattleFieldUtil.GetCurrentDominantCamp
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x143f52b8
	// Params: [ Num(2) Size(0xC) ]
	static int32_t GetCurrentDominantCamp(struct UObject* WorldContextObject);

	// Object: Function BattleField.BattleFieldUtil.GetArmsIconWithArmedForceId
	// Flags: [Final|Native|Static|Public|HasDefaults]
	// Offset: 0x143f5198
	// Params: [ Num(3) Size(0x28) ]
	static struct FSoftObjectPath GetArmsIconWithArmedForceId(struct UObject* WorldContextObject, int32_t ArmedForceID);

	// Object: Function BattleField.BattleFieldUtil.GetArmsIcon
	// Flags: [Final|Native|Static|Public|HasDefaults]
	// Offset: 0x143f5078
	// Params: [ Num(3) Size(0x28) ]
	static struct FSoftObjectPath GetArmsIcon(struct UObject* WorldContextObject, int32_t TeamPlayerIndex);

	// Object: Function BattleField.BattleFieldUtil.GetArmedForceDataRow
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x143f4f38
	// Params: [ Num(2) Size(0xC0) ]
	static struct FArmedForceDataInfo GetArmedForceDataRow(int32_t ArmedForceID);

	// Object: Function BattleField.BattleFieldUtil.GetAllCharacterFromCamp
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x143f4e24
	// Params: [ Num(3) Size(0x20) ]
	static struct TArray<struct ACHARACTER*> GetAllCharacterFromCamp(struct UObject* WorldContextObject, int32_t InCamp);

	// Object: Function BattleField.BattleFieldUtil.CheckHasWholeRedeployHudState
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x143f4d7c
	// Params: [ Num(2) Size(0x9) ]
	static uint8_t CheckHasWholeRedeployHudState(struct UObject* WorldContextObject);

	// Object: Function BattleField.BattleFieldUtil.CheckHasRedeployViewHudState
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x143f4cd4
	// Params: [ Num(2) Size(0x9) ]
	static uint8_t CheckHasRedeployViewHudState(struct UObject* WorldContextObject);

	// Object: Function BattleField.BattleFieldUtil.CheckHasRedeployHudState
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x143f4c2c
	// Params: [ Num(2) Size(0x9) ]
	static uint8_t CheckHasRedeployHudState(struct UObject* WorldContextObject);
};

// Object: Class BattleField.BattleReportTipsView
// Size: 0x6C8 (Inherited: 0x668)
struct UBattleReportTipsView : ULuaUIHudBaseView
{
	DEFINE_UE_CLASS_HELPERS(UBattleReportTipsView, "BattleReportTipsView")

	int32_t RedTime; // 0x668(0x4)
	uint8_t Pad_0x66C[0x4]; // 0x66C(0x4)
	struct UTextBlock* TimeText; // 0x670(0x8)
	struct UTextBlock* HintText; // 0x678(0x8)
	struct UWidgetAnimation* FadeInAnim; // 0x680(0x8)
	struct UWidgetAnimation* FadeOutAnim; // 0x688(0x8)
	float BattleRemainTime; // 0x690(0x4)
	uint8_t bShowing : 1; // 0x694(0x1), Mask(0x1)
	uint8_t BitPad_0x694_1 : 7; // 0x694(0x1)
	uint8_t Pad_0x695[0x33]; // 0x695(0x33)

	// Object: Function BattleField.BattleReportTipsView.SetShow
	// Flags: [Final|Native|Protected]
	// Offset: 0x143f607c
	// Params: [ Num(1) Size(0x1) ]
	void SetShow(uint8_t Show);

	// Object: Function BattleField.BattleReportTipsView.OnTipsInfoNtf
	// Flags: [Final|Native|Protected|HasOutParms]
	// Offset: 0x143f5f04
	// Params: [ Num(1) Size(0x70) ]
	void OnTipsInfoNtf(const struct FBattleFieldBroadcastTipInfo& InTipInfo);

	// Object: Function BattleField.BattleReportTipsView.OnFadeOutEnd
	// Flags: [Final|Native|Protected]
	// Offset: 0x143f5ef0
	// Params: [ Num(0) Size(0x0) ]
	void OnFadeOutEnd();

	// Object: Function BattleField.BattleReportTipsView.OnFadeInEnd
	// Flags: [Final|Native|Protected]
	// Offset: 0x143f5edc
	// Params: [ Num(0) Size(0x0) ]
	void OnFadeInEnd();

	// Object: Function BattleField.BattleReportTipsView.BP_SetColorType
	// Flags: [Event|Protected|HasOutParms|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(2) Size(0x5) ]
	void BP_SetColorType(const int32_t& ColorType, uint8_t IsRedTimeBG);
};

// Object: Class BattleField.BigMapBattleFieldHUDView
// Size: 0xB18 (Inherited: 0xAA0)
struct UBigMapBattleFieldHUDView : UBigMapHUDView
{
	DEFINE_UE_CLASS_HELPERS(UBigMapBattleFieldHUDView, "BigMapBattleFieldHUDView")

	struct UScaleBox* BigMapCanvasPanelRef; // 0xAA0(0x8)
	struct UCanvasPanel* MapBasePanel; // 0xAA8(0x8)
	float SnapBorderIntersectionRatio; // 0xAB0(0x4)
	struct FVector2D SnapBorderMarginSize; // 0xAB4(0x8)
	uint8_t Pad_0xABC[0x4]; // 0xABC(0x4)
	struct UDFCommonButton* CommonButton_Self; // 0xAC0(0x8)
	struct UDFCommonButton* CommonButton_SignClear; // 0xAC8(0x8)
	struct UDFCommonButton* CommonButton_Up; // 0xAD0(0x8)
	struct UDFCommonButton* CommonButton_Down; // 0xAD8(0x8)
	struct UButton* DFMButton_267; // 0xAE0(0x8)
	struct UDFTextBlock* MapNameText; // 0xAE8(0x8)
	struct FName MapNameTextName; // 0xAF0(0x8)
	uint8_t Pad_0xAF8[0x8]; // 0xAF8(0x8)
	struct UDFTextBlock* LeftTimeText; // 0xB00(0x8)
	struct FName LeftTimeTextName; // 0xB08(0x8)
	uint8_t Pad_0xB10[0x8]; // 0xB10(0x8)

	// Object: Function BattleField.BigMapBattleFieldHUDView.OnAddDecSliderCurNumChanged
	// Flags: [Final|Native|Public]
	// Offset: 0x143f8204
	// Params: [ Num(2) Size(0x8) ]
	void OnAddDecSliderCurNumChanged(int32_t InCurNum, int32_t InChangeNum);

	// Object: Function BattleField.BigMapBattleFieldHUDView.CommonButton_SelfClicked
	// Flags: [Final|Native|Public]
	// Offset: 0x143f81f0
	// Params: [ Num(0) Size(0x0) ]
	void CommonButton_SelfClicked();

	// Object: Function BattleField.BigMapBattleFieldHUDView.BP_SetIsCommanderMode
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(1) Size(0x1) ]
	void BP_SetIsCommanderMode(uint8_t IsCommanderMode);
};

// Object: Class BattleField.BTTQ_PvpAIDynamicRunBehavior
// Size: 0x108 (Inherited: 0x88)
struct UBTTQ_PvpAIDynamicRunBehavior : UBTTask_RunBehaviorDynamic
{
	DEFINE_UE_CLASS_HELPERS(UBTTQ_PvpAIDynamicRunBehavior, "BTTQ_PvpAIDynamicRunBehavior")

	struct FBlackboardKeySelector InScenesStageBBKey; // 0x88(0x28)
	struct FBlackboardKeySelector IsRetreatingBBKey; // 0xB0(0x28)
	struct FBlackboardKeySelector AIJobBBKey; // 0xD8(0x28)
	float TickUpdateInterval; // 0x100(0x4)
	uint8_t Pad_0x104[0x4]; // 0x104(0x4)
};

// Object: Class BattleField.CanMakeDamageBreakablePawn
// Size: 0x628 (Inherited: 0x5F8)
struct ACanMakeDamageBreakablePawn : ABreakablePawn
{
	DEFINE_UE_CLASS_HELPERS(ACanMakeDamageBreakablePawn, "CanMakeDamageBreakablePawn")

	uint8_t Pad_0x5F8[0x18]; // 0x5F8(0x18)
	int32_t AttakerId; // 0x610(0x4)
	uint8_t Pad_0x614[0x4]; // 0x614(0x4)
	struct TArray<struct UGameplayEffect*> DamageEffect; // 0x618(0x10)

	// Object: Function BattleField.CanMakeDamageBreakablePawn.DestroyedTrigger
	// Flags: [Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x143f8300
	// Params: [ Num(1) Size(0x8A0) ]
	void DestroyedTrigger(const struct FDamageResultInfo& DamageResult);
};

// Object: Class BattleField.CapturePointIconHUDView
// Size: 0x4A0 (Inherited: 0x468)
struct UCapturePointIconHUDView : UMapItemHUDView
{
	DEFINE_UE_CLASS_HELPERS(UCapturePointIconHUDView, "CapturePointIconHUDView")

	struct UImage* Base; // 0x468(0x8)
	struct UImage* Image_2; // 0x470(0x8)
	struct UImage* Image_3; // 0x478(0x8)
	struct UImage* Image_4; // 0x480(0x8)
	struct UCanvasPanel* MainView; // 0x488(0x8)
	struct ABattleFieldCapturePoint* CapturePoint; // 0x490(0x8)
	struct UWidgetAnimation* AnimLoop; // 0x498(0x8)
};

// Object: Class BattleField.CapturePointIconHUDController
// Size: 0x2B0 (Inherited: 0x2B0)
struct UCapturePointIconHUDController : UMapIconViewController
{
	DEFINE_UE_CLASS_HELPERS(UCapturePointIconHUDController, "CapturePointIconHUDController")

	struct ABattleFieldCapturePoint* CapturePoint; // 0x2A8(0x8)

	// Object: Function BattleField.CapturePointIconHUDController.OnCapturePointHUDUpdate
	// Flags: [Final|Native|Public]
	// Offset: 0x143f83dc
	// Params: [ Num(1) Size(0x8) ]
	void OnCapturePointHUDUpdate(struct ABattleFieldCapturePoint* InCapturePoint);
};

// Object: Class BattleField.CapturePointMarker
// Size: 0x8F0 (Inherited: 0x870)
struct UCapturePointMarker : UDeployPointBaseWidget
{
	DEFINE_UE_CLASS_HELPERS(UCapturePointMarker, "CapturePointMarker")

	struct UTextBlock* NameInIcon; // 0x870(0x8)
	struct UImage* UnitIcon; // 0x878(0x8)
	struct UTextBlock* DistText; // 0x880(0x8)
	struct UImage* CaptureProgressBaseBar; // 0x888(0x8)
	struct UImage* CaptureProgressBar; // 0x890(0x8)
	struct FLinearColor Blue; // 0x898(0x10)
	struct FLinearColor Red; // 0x8A8(0x10)
	struct FLinearColor Neutral; // 0x8B8(0x10)
	struct ABattleFieldCapturePoint* CurCapturePoint; // 0x8C8(0x8)
	int32_t LocalPlayerCamp; // 0x8D0(0x4)
	uint8_t bIsLocalCharAiming : 1; // 0x8D4(0x1), Mask(0x1)
	uint8_t BitPad_0x8D4_1 : 7; // 0x8D4(0x1)
	uint8_t Pad_0x8D5[0x1B]; // 0x8D5(0x1B)
};

// Object: Class BattleField.CapturePointViewItem
// Size: 0x390 (Inherited: 0x2F8)
struct UCapturePointViewItem : UUserWidget
{
	DEFINE_UE_CLASS_HELPERS(UCapturePointViewItem, "CapturePointViewItem")

	struct UImage* CaptureProgressBaseBar; // 0x2F8(0x8)
	struct UImage* CaptureProgressBar; // 0x300(0x8)
	struct UTextBlock* NameInIcon; // 0x308(0x8)
	struct UTextBlock* FullName; // 0x310(0x8)
	struct UUserWidget* WBP_ScreenMarkerBase; // 0x318(0x8)
	struct UButton* RebornButton; // 0x320(0x8)
	uint8_t bShowAll : 1; // 0x328(0x1), Mask(0x1)
	uint8_t BitPad_0x328_1 : 7; // 0x328(0x1)
	uint8_t bAimed : 1; // 0x329(0x1), Mask(0x1)
	uint8_t BitPad_0x329_1 : 7; // 0x329(0x1)
	uint8_t Pad_0x32A[0x2]; // 0x32A(0x2)
	float DistOnMaxSize; // 0x32C(0x4)
	float DistOnMinSize; // 0x330(0x4)
	float MinSizeRatio; // 0x334(0x4)
	struct FVector WidgetOffset; // 0x338(0xC)
	struct FLinearColor Blue; // 0x344(0x10)
	struct FLinearColor Red; // 0x354(0x10)
	struct FLinearColor Neutral; // 0x364(0x10)
	uint8_t Pad_0x374[0x4]; // 0x374(0x4)
	struct ABattleFieldCapturePoint* CurCapturePoint; // 0x378(0x8)
	uint8_t Pad_0x380[0x10]; // 0x380(0x10)

	// Object: Function BattleField.CapturePointViewItem.UnLockClickBtn
	// Flags: [Final|Native|Public]
	// Offset: 0x143f8578
	// Params: [ Num(0) Size(0x0) ]
	void UnLockClickBtn();

	// Object: Function BattleField.CapturePointViewItem.OnBtnClicked
	// Flags: [Final|Native|Public]
	// Offset: 0x143f8564
	// Params: [ Num(0) Size(0x0) ]
	void OnBtnClicked();

	// Object: Function BattleField.CapturePointViewItem.LockClickBtn
	// Flags: [Final|Native|Public]
	// Offset: 0x143f8550
	// Params: [ Num(0) Size(0x0) ]
	void LockClickBtn();
};

// Object: Class BattleField.CollectRpcDiffCommandlet
// Size: 0x88 (Inherited: 0x88)
struct UCollectRpcDiffCommandlet : UCommandlet
{
	DEFINE_UE_CLASS_HELPERS(UCollectRpcDiffCommandlet, "CollectRpcDiffCommandlet")
};

// Object: Class BattleField.CollectVersionDiffNoRegisterRpcCommandlet
// Size: 0x88 (Inherited: 0x88)
struct UCollectVersionDiffNoRegisterRpcCommandlet : UCommandlet
{
	DEFINE_UE_CLASS_HELPERS(UCollectVersionDiffNoRegisterRpcCommandlet, "CollectVersionDiffNoRegisterRpcCommandlet")
};

// Object: Class BattleField.CoverDebugger
// Size: 0x3A8 (Inherited: 0x370)
struct ACoverDebugger : AActor
{
	DEFINE_UE_CLASS_HELPERS(ACoverDebugger, "CoverDebugger")

	float CoverSearchRange; // 0x370(0x4)
	float MinCoverLength; // 0x374(0x4)
	float HorizontalExtent; // 0x378(0x4)
	int32_t CheckPointNum; // 0x37C(0x4)
	uint32_t MaxNormalAngleDeg; // 0x380(0x4)
	uint8_t Pad_0x384[0x4]; // 0x384(0x4)
	struct AActor* mainTarget; // 0x388(0x8)
	struct UPvpAIComponent* PvpAIComp; // 0x390(0x8)
	struct AActor* Target; // 0x398(0x8)
	struct UActorComponent* m_DebugLineBatcher; // 0x3A0(0x8)
};

// Object: Class BattleField.DFMEQSGenerator_NavmeshCoverWallPoint
// Size: 0x138 (Inherited: 0x80)
struct UDFMEQSGenerator_NavmeshCoverWallPoint : UEnvQueryGenerator_ProjectedPoints
{
	DEFINE_UE_CLASS_HELPERS(UDFMEQSGenerator_NavmeshCoverWallPoint, "DFMEQSGenerator_NavmeshCoverWallPoint")

	struct FAIDataProviderFloatValue CircleRadius; // 0x80(0x38)
	struct FAIDataProviderFloatValue coverLength; // 0xB8(0x38)
	struct FAIDataProviderIntValue MinNormalAngelDeg; // 0xF0(0x38)
	struct UEnvQueryContext* MainTargetContext; // 0x128(0x8)
	float DistanceFromBunker; // 0x130(0x4)
	uint8_t Pad_0x134[0x4]; // 0x134(0x4)
};

// Object: Class BattleField.EQSContext_AllThreatTargets
// Size: 0x30 (Inherited: 0x28)
struct UEQSContext_AllThreatTargets : UEnvQueryContext
{
	DEFINE_UE_CLASS_HELPERS(UEQSContext_AllThreatTargets, "EQSContext_AllThreatTargets")

	struct FName BlackboardKey; // 0x28(0x8)
};

// Object: Class BattleField.EQTest_AvoidThreatTargets
// Size: 0x1F8 (Inherited: 0x1F8)
struct UEQTest_AvoidThreatTargets : UEnvQueryTest
{
	DEFINE_UE_CLASS_HELPERS(UEQTest_AvoidThreatTargets, "EQTest_AvoidThreatTargets")
};

// Object: Class BattleField.EQTest_AvoidThreatTargetsIncludingMainTarget
// Size: 0x1F8 (Inherited: 0x1F8)
struct UEQTest_AvoidThreatTargetsIncludingMainTarget : UEQTest_AvoidThreatTargets
{
	DEFINE_UE_CLASS_HELPERS(UEQTest_AvoidThreatTargetsIncludingMainTarget, "EQTest_AvoidThreatTargetsIncludingMainTarget")
};

// Object: Class BattleField.EQTest_AvoidOptionalThreat
// Size: 0x200 (Inherited: 0x1F8)
struct UEQTest_AvoidOptionalThreat : UEnvQueryTest
{
	DEFINE_UE_CLASS_HELPERS(UEQTest_AvoidOptionalThreat, "EQTest_AvoidOptionalThreat")

	uint8_t bMainTargetThreat : 1; // 0x1F1(0x1), Mask(0x1)
	uint8_t bEnvFightTargetListThreat : 1; // 0x1F2(0x1), Mask(0x1)
	int32_t EnvFightTargetThreatCount; // 0x1F4(0x4)
	uint8_t bVehicleThreat : 1; // 0x1F8(0x1), Mask(0x1)
	int32_t VehicleThreatCount; // 0x1FC(0x4)
};

// Object: Class BattleField.EQTest_CannPeekTargetBehindWall
// Size: 0x210 (Inherited: 0x1F8)
struct UEQTest_CannPeekTargetBehindWall : UEnvQueryTest
{
	DEFINE_UE_CLASS_HELPERS(UEQTest_CannPeekTargetBehindWall, "EQTest_CannPeekTargetBehindWall")

	struct UEnvQueryContext* InputActorContext; // 0x1F8(0x8)
	uint8_t bDrawDebug : 1; // 0x200(0x1), Mask(0x1)
	uint8_t BitPad_0x200_1 : 7; // 0x200(0x1)
	uint8_t Pad_0x201[0x7]; // 0x201(0x7)
	struct ULineBatchComponent* Drawer; // 0x208(0x8)
};

// Object: Class BattleField.EQTest_VisibilityToCapturePoint
// Size: 0x200 (Inherited: 0x1F8)
struct UEQTest_VisibilityToCapturePoint : UEnvQueryTest
{
	DEFINE_UE_CLASS_HELPERS(UEQTest_VisibilityToCapturePoint, "EQTest_VisibilityToCapturePoint")

	struct UEnvQueryContext* CapturePointContext; // 0x1F8(0x8)
};

// Object: Class BattleField.FingerGestureWidget
// Size: 0x518 (Inherited: 0x2F8)
struct UFingerGestureWidget : UUserWidget
{
	DEFINE_UE_CLASS_HELPERS(UFingerGestureWidget, "FingerGestureWidget")

	uint8_t Pad_0x2F8[0x20]; // 0x2F8(0x20)
	struct FMulticastInlineDelegate OnDoubleClick; // 0x318(0x10)
	struct FMulticastInlineDelegate OnClick; // 0x328(0x10)
	struct FMulticastInlineDelegate OnLongPressedBegin; // 0x338(0x10)
	struct FMulticastInlineDelegate OnLongPressedEnd; // 0x348(0x10)
	struct FMulticastInlineDelegate OnMouseBtnDown; // 0x358(0x10)
	struct FMulticastInlineDelegate OnMouseBtnUp; // 0x368(0x10)
	struct FMulticastInlineDelegate OnTick; // 0x378(0x10)
	struct FMulticastInlineDelegate OnDrag; // 0x388(0x10)
	struct FMulticastInlineDelegate OnDragWithPos; // 0x398(0x10)
	struct FMulticastInlineDelegate OnFlick; // 0x3A8(0x10)
	struct FMulticastInlineDelegate OnWheel; // 0x3B8(0x10)
	struct FMulticastInlineDelegate OnTwoFingerPinch; // 0x3C8(0x10)
	struct FMulticastInlineDelegate OnTwoFingerRotate; // 0x3D8(0x10)
	struct FMulticastInlineDelegate OnTwoFingerSwipe; // 0x3E8(0x10)
	uint8_t Pad_0x3F8[0x30]; // 0x3F8(0x30)
	struct TMap<int32_t, struct FVector2D> TouchesAnchorPosVec; // 0x428(0x50)
	struct TMap<int32_t, struct FVector2D> TouchesPosVec; // 0x478(0x50)
	struct TMap<int32_t, struct FVector2D> TouchesDeltaVec; // 0x4C8(0x50)
};

// Object: Class BattleField.PlayerGMComponentBattleField
// Size: 0x888 (Inherited: 0x888)
struct UPlayerGMComponentBattleField : UDFMPlayerGMComponent
{
	DEFINE_UE_CLASS_HELPERS(UPlayerGMComponentBattleField, "PlayerGMComponentBattleField")

	// Object: Function BattleField.PlayerGMComponentBattleField.GMServerKickPvpBot
	// Flags: [Net|NetReliableNative|Event|Public|NetServer]
	// Offset: 0x143f8824
	// Params: [ Num(1) Size(0x4) ]
	void GMServerKickPvpBot(int32_t Count);

	// Object: Function BattleField.PlayerGMComponentBattleField.GMKickPvpBot
	// Flags: [Final|Exec|Native|Public]
	// Offset: 0x143f8780
	// Params: [ Num(1) Size(0x4) ]
	void GMKickPvpBot(int32_t Count);
};

// Object: Class BattleField.BattleFieldInGameGeneratorExpertDataConfigManager
// Size: 0x40 (Inherited: 0x30)
struct UBattleFieldInGameGeneratorExpertDataConfigManager : UDataTableSystemManagerBase
{
	DEFINE_UE_CLASS_HELPERS(UBattleFieldInGameGeneratorExpertDataConfigManager, "BattleFieldInGameGeneratorExpertDataConfigManager")

	uint8_t Pad_0x30[0x10]; // 0x30(0x10)
};

// Object: Class BattleField.PvpAIComponent
// Size: 0x5F0 (Inherited: 0xF8)
struct UPvpAIComponent : UActorComponent
{
	DEFINE_UE_CLASS_HELPERS(UPvpAIComponent, "PvpAIComponent")

	struct UDFMAIPlayerThreatRecordComponent* ThreatComp; // 0xF8(0x8)
	uint32_t MaxNormalAngleDeg; // 0x100(0x4)
	EPVPAIFightStyle CurrentPVEAIFightStyle; // 0x104(0x1)
	uint8_t bUsingBP_CalculateTargetScore : 1; // 0x105(0x1), Mask(0x1)
	uint8_t BitPad_0x105_1 : 7; // 0x105(0x1)
	uint8_t bUsingBPCalcThreatTargetFinalScore : 1; // 0x106(0x1), Mask(0x1)
	uint8_t BitPad_0x106_1 : 7; // 0x106(0x1)
	uint8_t bOpenBPCalcAmbientThreatValue : 1; // 0x107(0x1), Mask(0x1)
	uint8_t BitPad_0x107_1 : 7; // 0x107(0x1)
	uint8_t Pad_0x108[0x40]; // 0x108(0x40)
	struct FPvpAiStyleConfig CurrentStyleConfig; // 0x148(0x28)
	struct FPvpAiAntiVehicleWill AntiVehicleWill; // 0x170(0x20)
	struct FPvpAiRescueWill RescueWill; // 0x190(0x20)
	EPvpAIThreatLevel MainTargetThreat; // 0x1B0(0x1)
	EPvpAIThreatLevel MainTargetVulnerable; // 0x1B1(0x1)
	EPvpAIThreatLevel AmbientThreat; // 0x1B2(0x1)
	uint8_t Pad_0x1B3[0x1]; // 0x1B3(0x1)
	struct FThreatThreshold ThreatThreshold; // 0x1B4(0x8)
	struct FThreatThreshold AmbientThreatThreshold; // 0x1BC(0x8)
	struct FThreatThreshold VulnerableThreshold; // 0x1C4(0x8)
	uint8_t Pad_0x1CC[0x4]; // 0x1CC(0x4)
	struct UDataTable* FightTargetScoreConf; // 0x1D0(0x8)
	struct TMap<int32_t, struct FPvpAiAgainstVehicleConfig> AgainstVehiclesConfig; // 0x1D8(0x50)
	float VehicleThreatUpdateInterval; // 0x228(0x4)
	float VehicleSightThreatBaseScore; // 0x22C(0x4)
	float VehicleSightThreatDecayRate; // 0x230(0x4)
	float VehicleDamageThreatBaseScore; // 0x234(0x4)
	float VehicleDamageThreatDecayRate; // 0x238(0x4)
	float VehicleAirHitThreatBaseScore; // 0x23C(0x4)
	float VehicleAirHitThreatDecayRate; // 0x240(0x4)
	float VehicleBatteryDeg; // 0x244(0x4)
	struct UCurveFloat* VehicleThreatDistanceDecayCurve; // 0x248(0x8)
	struct UCurveFloat* VehicleAganinstDistanceDecayCurve; // 0x250(0x8)
	uint8_t IsUseBPCalcVehicleThreat : 1; // 0x258(0x1), Mask(0x1)
	uint8_t BitPad_0x258_1 : 7; // 0x258(0x1)
	uint8_t IsUseBPCalcVulnerableValue : 1; // 0x259(0x1), Mask(0x1)
	uint8_t BitPad_0x259_1 : 7; // 0x259(0x1)
	uint8_t Pad_0x25A[0x2]; // 0x25A(0x2)
	float PlayerAroundCheckRefreshTime; // 0x25C(0x4)
	float PlayerAroundCheckRadius; // 0x260(0x4)
	float PlayerAroundCheckOnlyAiPlayer; // 0x264(0x4)
	EPvpAIThreatLevel NewAttentionThreatLevelLimit; // 0x268(0x1)
	EPvpAIThreatLevel NewAttentionVulnerableLevelLimit; // 0x269(0x1)
	uint8_t Pad_0x26A[0x2]; // 0x26A(0x2)
	int32_t RecentlyTakeDamageRecordCount; // 0x26C(0x4)
	struct TArray<struct ADFMCharacter*> NewAttentionThreatCharacters; // 0x270(0x10)
	struct TArray<struct AGPVehicleBase*> NewAttentionThreatVehicles; // 0x280(0x10)
	struct UCurveFloat* DistanceToSelfRatioCurve; // 0x290(0x8)
	struct UCurveFloat* DistanceToPointRatioCurve; // 0x298(0x8)
	struct UCurveFloat* SightThreatDistNotInSightCurve; // 0x2A0(0x8)
	struct FSelfVisionBlockRatio SelfVisionBlockRatio; // 0x2A8(0xC)
	struct FTargetVisionRatio TargetVisionRatio; // 0x2B4(0x8)
	uint8_t Pad_0x2BC[0x4]; // 0x2BC(0x4)
	struct UCurveFloat* AirHitThreatDisCurve; // 0x2C0(0x8)
	struct FSelfVisionBlockRatio Vul_SelfVisionBlockRatio; // 0x2C8(0xC)
	struct FTargetVisionRatio Vul_TargetVisionRatio; // 0x2D4(0x8)
	struct FTargetPoseRatio Vul_TargetPoseRatio; // 0x2DC(0xC)
	struct FTargetFiringRatio Vul_TargetFiringRatio; // 0x2E8(0x8)
	struct UCurveFloat* CQBWeaponDistCurve; // 0x2F0(0x8)
	struct UCurveFloat* MedicWeaponDistCurve; // 0x2F8(0x8)
	struct UCurveFloat* GunnerWeaponDistCurve; // 0x300(0x8)
	struct UCurveFloat* SniperWeaponDistCurve; // 0x308(0x8)
	struct UCurveFloat* CQBWeaponDistCurveMobile; // 0x310(0x8)
	struct UCurveFloat* MedicWeaponDistCurveMobile; // 0x318(0x8)
	struct UCurveFloat* GunnerWeaponDistCurveMobile; // 0x320(0x8)
	struct UCurveFloat* SniperWeaponDistCurveMobile; // 0x328(0x8)
	struct UCurveFloat* ThreatDistCurve; // 0x330(0x8)
	struct UCurveFloat* RifleVulnerableCurve; // 0x338(0x8)
	struct UCurveFloat* SubmachineVulnerableCurve; // 0x340(0x8)
	struct UCurveFloat* ShotGunVulnerableCurve; // 0x348(0x8)
	struct UCurveFloat* LightMachineVulnerableCurve; // 0x350(0x8)
	struct UCurveFloat* PrecisionShootingRifleVulnerableCurve; // 0x358(0x8)
	struct UCurveFloat* SniperVulnerableCurve; // 0x360(0x8)
	struct UCurveFloat* PistolVulnerableCurve; // 0x368(0x8)
	struct UCurveFloat* HeavyVulnerableCurve; // 0x370(0x8)
	float VulnerableStickyPerSecond; // 0x378(0x4)
	float MainTargetStickyTime; // 0x37C(0x4)
	float MainTargetOverrideScore; // 0x380(0x4)
	float UpdateFightTargetInterval; // 0x384(0x4)
	float FightTargetValidTime; // 0x388(0x4)
	float UpdateDebugInfoInterval; // 0x38C(0x4)
	struct ADFMAIPlayerController* AIController; // 0x390(0x8)
	float MainTargetMaxScore; // 0x398(0x4)
	uint8_t Pad_0x39C[0x54]; // 0x39C(0x54)
	struct TArray<struct FPvpAIFightTargetInfo> FightTargets; // 0x3F0(0x10)
	struct TArray<struct FPvpAIVehicleTargetInfo> VehicalTargets; // 0x400(0x10)
	uint8_t Pad_0x410[0x70]; // 0x410(0x70)
	struct UDFMAIPlayerPathFollowingComponent* PathFollowComp; // 0x480(0x8)
	uint8_t Pad_0x488[0x10]; // 0x488(0x10)
	struct APvpAIDebugInfo* DebugInfo; // 0x498(0x8)
	uint8_t Pad_0x4A0[0x70]; // 0x4A0(0x70)
	struct ANavExtendAgent* NavExtAgent; // 0x510(0x8)
	uint8_t Pad_0x518[0xD8]; // 0x518(0xD8)

	// Object: Function BattleField.PvpAIComponent.TakeOverDebugInfo
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x143fba84
	// Params: [ Num(1) Size(0x8) ]
	void TakeOverDebugInfo(struct APvpAIDebugInfo* AIDebugInfo);

	// Object: Function BattleField.PvpAIComponent.SortCoverPointWeight
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x143fb99c
	// Params: [ Num(2) Size(0x8) ]
	void SortCoverPointWeight(uint8_t CutZero, int32_t RetainSize);

	// Object: Function BattleField.PvpAIComponent.SetDebugMode
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x143fb8f8
	// Params: [ Num(1) Size(0x4) ]
	void SetDebugMode(int32_t Mode);

	// Object: Function BattleField.PvpAIComponent.OnTakeDamage
	// Flags: [Final|Native|Public|HasOutParms]
	// Offset: 0x143fb838
	// Params: [ Num(1) Size(0x8A0) ]
	void OnTakeDamage(const struct FDamageResultInfo& DamageResult);

	// Object: Function BattleField.PvpAIComponent.OccupyCoverPoint
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x143fb758
	// Params: [ Num(2) Size(0x8) ]
	void OccupyCoverPoint(int32_t CoverIndex, float Duration);

	// Object: Function BattleField.PvpAIComponent.IsCharacterOnVehicle
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x143fb61c
	// Params: [ Num(3) Size(0xA) ]
	void IsCharacterOnVehicle(struct ADFMCharacter* CHARACTER, uint8_t& InVehicle, uint8_t& IsThreatVehicle);

	// Object: Function BattleField.PvpAIComponent.GetVulnerableVehicle
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x143fb570
	// Params: [ Num(2) Size(0x10) ]
	struct AGPVehicleBase* GetVulnerableVehicle(struct AActor* WeaponPtr);

	// Object: Function BattleField.PvpAIComponent.GetVehicleVulnerableBase
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x143fb4c4
	// Params: [ Num(2) Size(0xC) ]
	float GetVehicleVulnerableBase(struct AGPVehicleBase* VehicleBase);

	// Object: Function BattleField.PvpAIComponent.GetVehicleThreat
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x143fb2d4
	// Params: [ Num(6) Size(0x16) ]
	uint8_t GetVehicleThreat(struct AGPVehicleBase* VehicleBase, float& SightThreat, float& DamageThreat, float& AirhitThreat, uint8_t& IsInVehicleSight);

	// Object: Function BattleField.PvpAIComponent.GetThreatingVehicleBases
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x143fb23c
	// Params: [ Num(1) Size(0x10) ]
	struct TArray<struct ADFMVehicleBase*> GetThreatingVehicleBases();

	// Object: Function BattleField.PvpAIComponent.GetThreatingTanks
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x143fb1a4
	// Params: [ Num(1) Size(0x10) ]
	struct TArray<struct ADFMTank*> GetThreatingTanks();

	// Object: Function BattleField.PvpAIComponent.GetThreatingHelicopters
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x143fb10c
	// Params: [ Num(1) Size(0x10) ]
	struct TArray<struct ADFMHelicopter*> GetThreatingHelicopters();

	// Object: Function BattleField.PvpAIComponent.GetTeamPlayerInCheckRadius
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x143fb0f0
	// Params: [ Num(1) Size(0x4) ]
	int32_t GetTeamPlayerInCheckRadius();

	// Object: Function BattleField.PvpAIComponent.GetTargetSightBlockState
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x143fb044
	// Params: [ Num(2) Size(0x9) ]
	EPvpAIVisibleState GetTargetSightBlockState(struct ADFMCharacter* CHARACTER);

	// Object: Function BattleField.PvpAIComponent.GetTargetScore
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x143faf98
	// Params: [ Num(2) Size(0xC) ]
	float GetTargetScore(struct ADFMCharacter* Target);

	// Object: Function BattleField.PvpAIComponent.GetTargetEnemyThreats
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x143fad68
	// Params: [ Num(6) Size(0x1C) ]
	void GetTargetEnemyThreats(struct ADFMCharacter* DFMCharacter, float& SightThreat, float& HearingThreat, float& DamageThreat, float& AirhitThreat, float& TeammateHurtThreat);

	// Object: Function BattleField.PvpAIComponent.GetTargetEnemyStatus
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x143fab38
	// Params: [ Num(6) Size(0xD) ]
	void GetTargetEnemyStatus(struct ADFMCharacter* DFMCharacter, uint8_t& IsCrouch, uint8_t& IsProne, uint8_t& IsInSight, uint8_t& IsImpendingDeath, uint8_t& IsBlocked);

	// Object: Function BattleField.PvpAIComponent.GetRescueWillFromTable
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x143faa18
	// Params: [ Num(3) Size(0x29) ]
	uint8_t GetRescueWillFromTable(struct FName Name, struct FPvpAiRescueWill& Will);

	// Object: Function BattleField.PvpAIComponent.GetRandomLocationInRadius
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable]
	// Offset: 0x143fa868
	// Params: [ Num(6) Size(0x25) ]
	uint8_t GetRandomLocationInRadius(struct FVector CenterLoc, float radius, float PathLenLimit, struct FVector& OutLoc, int32_t TryLoopCnt);

	// Object: Function BattleField.PvpAIComponent.GetPVEAIFightStyle
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x143fa834
	// Params: [ Num(1) Size(0x1) ]
	EPVPAIFightStyle GetPVEAIFightStyle();

	// Object: Function BattleField.PvpAIComponent.GetPeekPoints
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x143fa6b8
	// Params: [ Num(5) Size(0x28) ]
	struct TArray<struct FPvpAICoverPoint> GetPeekPoints(struct AActor* mainTarget, int32_t MaxNum, float Range, uint8_t bDrawDebug);

	// Object: Function BattleField.PvpAIComponent.GetHighestThreatVehicle
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x143fa684
	// Params: [ Num(1) Size(0x8) ]
	struct AGPVehicleBase* GetHighestThreatVehicle();

	// Object: Function BattleField.PvpAIComponent.GetFuturePathNewVisibleThreatCharacters
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x143fa4d0
	// Params: [ Num(6) Size(0x21) ]
	uint8_t GetFuturePathNewVisibleThreatCharacters(float PathAppendMin, float PathAppendMax, float SightAngle, int32_t FocusTopThreatCount, struct TArray<struct ADFMCharacter*>& NewThreatCharacters);

	// Object: Function BattleField.PvpAIComponent.GetFirstTargetInfo
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x143fa3e8
	// Params: [ Num(2) Size(0x19) ]
	uint8_t GetFirstTargetInfo(struct FPvpAIFightTargetInfo& TargetInfo);

	// Object: Function BattleField.PvpAIComponent.GetFightTargetInfoFast
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x143fa32c
	// Params: [ Num(2) Size(0x20) ]
	struct FPvpAIFightTargetInfo GetFightTargetInfoFast(struct ADFMCharacter* Target);

	// Object: Function BattleField.PvpAIComponent.GetFightTargetByRange
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x143fa148
	// Params: [ Num(7) Size(0x28) ]
	struct FPvpAIFightTargetInfo GetFightTargetByRange(EPvpAIThreatLevel ThreatLevelBegin, EPvpAIThreatLevel ThreadLevelEnd, EPvpAIThreatLevel VulnerableLevelBegin, EPvpAIThreatLevel VulnerableLevelEnd, float PosDistanceRangeBegin, float PosDistanceRangeEnd);

	// Object: Function BattleField.PvpAIComponent.GetFightTarget
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x143fa0dc
	// Params: [ Num(1) Size(0x18) ]
	struct FPvpAIFightTargetInfo GetFightTarget();

	// Object: Function BattleField.PvpAIComponent.GetFightFirstTargetExcludeMainTarget
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x143fa070
	// Params: [ Num(1) Size(0x18) ]
	struct FPvpAIFightTargetInfo GetFightFirstTargetExcludeMainTarget();

	// Object: Function BattleField.PvpAIComponent.GetDamageTakeInfoByCharacter
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x143f9f20
	// Params: [ Num(4) Size(0x11) ]
	uint8_t GetDamageTakeInfoByCharacter(struct AGPCharacter* CHARACTER, float& DamageVal, float& DamageTime);

	// Object: Function BattleField.PvpAIComponent.GetCurrentJob
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x143f9eec
	// Params: [ Num(1) Size(0x8) ]
	struct UPVPAIJobs* GetCurrentJob();

	// Object: Function BattleField.PvpAIComponent.GetCoverPointsIds
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x143f9e54
	// Params: [ Num(1) Size(0x10) ]
	struct TArray<int32_t> GetCoverPointsIds();

	// Object: Function BattleField.PvpAIComponent.GetCoverPointOccupyCount
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x143f9da8
	// Params: [ Num(2) Size(0x8) ]
	int32_t GetCoverPointOccupyCount(int32_t CoverIndex);

	// Object: Function BattleField.PvpAIComponent.GetCoverInfo
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable]
	// Offset: 0x143f9ae4
	// Params: [ Num(9) Size(0x32) ]
	uint8_t GetCoverInfo(int32_t CoverIndex, struct FVector& Location, uint8_t& IsFlat, EWayPointCoverHeight& CoverHeight, float& Score, struct FVector& CoverDir, struct FVector& FireDir, EAiPlayerLeanActionType LeanAction);

	// Object: Function BattleField.PvpAIComponent.GetCampPlayerInCheckRadius
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x143f9ac8
	// Params: [ Num(1) Size(0x4) ]
	int32_t GetCampPlayerInCheckRadius();

	// Object: Function BattleField.PvpAIComponent.GetBestPeekPointsAvoidThreats
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x143f98e4
	// Params: [ Num(5) Size(0x48) ]
	struct FPvpAICoverPoint GetBestPeekPointsAvoidThreats(struct AActor* mainTarget, int32_t MaxNum, float Range, uint8_t bDrawDebug);

	// Object: Function BattleField.PvpAIComponent.GetArmedForce
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x143f98b0
	// Params: [ Num(1) Size(0x1) ]
	EInGameBattleClassType GetArmedForce();

	// Object: Function BattleField.PvpAIComponent.GetAntiVehicleWillFromTable
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x143f9788
	// Params: [ Num(3) Size(0x29) ]
	uint8_t GetAntiVehicleWillFromTable(struct FName Name, struct FPvpAiAntiVehicleWill& Will);

	// Object: Function BattleField.PvpAIComponent.GetAmbientThreatValue
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x143f976c
	// Params: [ Num(1) Size(0x4) ]
	float GetAmbientThreatValue();

	// Object: Function BattleField.PvpAIComponent.GetAmbientThreatType
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x143f9738
	// Params: [ Num(1) Size(0x1) ]
	EPvpAIThreatLevel GetAmbientThreatType();

	// Object: Function BattleField.PvpAIComponent.GetAllVehicalTargets
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x143f9668
	// Params: [ Num(1) Size(0x10) ]
	struct TArray<struct FPvpAIVehicleTargetInfo> GetAllVehicalTargets();

	// Object: Function BattleField.PvpAIComponent.GetAllTargetInfo
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x143f9598
	// Params: [ Num(1) Size(0x10) ]
	struct TArray<struct FPvpAIFightTargetInfo> GetAllTargetInfo();

	// Object: Function BattleField.PvpAIComponent.GenCoverPoint
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x143f93e8
	// Params: [ Num(6) Size(0x1D) ]
	uint8_t GenCoverPoint(struct FVector Location, float radius, uint8_t OnlyCover, float Rate, int32_t MaxCount);

	// Object: Function BattleField.PvpAIComponent.DestroyDebugInfo
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x143f93d4
	// Params: [ Num(0) Size(0x0) ]
	void DestroyDebugInfo();

	// Object: Function BattleField.PvpAIComponent.CheckCoverPointView
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x143f92ac
	// Params: [ Num(4) Size(0x15) ]
	uint8_t CheckCoverPointView(int32_t CoverIndex, struct FVector TaregetLocation, float ViewOffset);

	// Object: Function BattleField.PvpAIComponent.CheckCoverPointBlock
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x143f91c0
	// Params: [ Num(3) Size(0x11) ]
	uint8_t CheckCoverPointBlock(int32_t CoverIndex, struct FVector TaregetLocation);

	// Object: Function BattleField.PvpAIComponent.CalculateVulnerability
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x143f90b4
	// Params: [ Num(3) Size(0x24) ]
	float CalculateVulnerability(struct FPvpAIFightTargetInfo& Info, struct ADFMCharacter* CHARACTER);

	// Object: Function BattleField.PvpAIComponent.CalculateTargetScore
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x143f8fa8
	// Params: [ Num(3) Size(0x24) ]
	float CalculateTargetScore(struct FPvpAIFightTargetInfo& Info, struct ADFMCharacter* CHARACTER);

	// Object: Function BattleField.PvpAIComponent.BPOnRemoveBuff
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(1) Size(0x4) ]
	void BPOnRemoveBuff(int32_t BuffId);

	// Object: Function BattleField.PvpAIComponent.BPOnAddBuff
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(2) Size(0x8) ]
	void BPOnAddBuff(int32_t BuffId, float Duration);

	// Object: Function BattleField.PvpAIComponent.BPCalcVehicleVulnerableValue
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(2) Size(0xC) ]
	float BPCalcVehicleVulnerableValue(struct AGPVehicleBase* VehicleBase);

	// Object: Function BattleField.PvpAIComponent.BPCalcVehicleThreatValue
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(2) Size(0xC) ]
	float BPCalcVehicleThreatValue(struct AGPVehicleBase* VehicleBase);

	// Object: Function BattleField.PvpAIComponent.BP_InnerCalcAmbientThreatValue
	// Flags: [Native|Event|Public|BlueprintEvent]
	// Offset: 0x143f8f6c
	// Params: [ Num(1) Size(0x4) ]
	float BP_InnerCalcAmbientThreatValue();

	// Object: Function BattleField.PvpAIComponent.BP_CalculateVulnerability
	// Flags: [Event|Public|BlueprintCallable|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(2) Size(0xC) ]
	float BP_CalculateVulnerability(struct ADFMCharacter* CHARACTER);

	// Object: Function BattleField.PvpAIComponent.BP_CalculateTargetScore
	// Flags: [Event|Public|BlueprintCallable|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(2) Size(0xC) ]
	float BP_CalculateTargetScore(struct ADFMCharacter* CHARACTER);

	// Object: Function BattleField.PvpAIComponent.BP_CalcThreatTargetFinalScore
	// Flags: [Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(3) Size(0x24) ]
	float BP_CalcThreatTargetFinalScore(const struct FPvpAIFightTargetInfo& Info, struct ADFMCharacter* CHARACTER);

	// Object: Function BattleField.PvpAIComponent.AddCoverPointScore
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x143f8e3c
	// Params: [ Num(4) Size(0xA) ]
	uint8_t AddCoverPointScore(int32_t CoverIndex, float Score, uint8_t Reset);
};

// Object: Class BattleField.PvpAIDebugInfo
// Size: 0x5E0 (Inherited: 0x370)
struct APvpAIDebugInfo : AActor
{
	DEFINE_UE_CLASS_HELPERS(APvpAIDebugInfo, "PvpAIDebugInfo")

	struct UUserWidget* WidgetClassMass; // 0x370(0x8)
	struct UUserWidget* WidgetClassDirector; // 0x378(0x8)
	struct USphereComponent* Indicator; // 0x380(0x8)
	struct UWidgetComponent* Panel; // 0x388(0x8)
	EPvpAIThreatLevel Threat; // 0x390(0x1)
	EPvpAIThreatLevel Vulnerable; // 0x391(0x1)
	EPvpAIThreatLevel AmbientThreat; // 0x392(0x1)
	uint8_t Pad_0x393[0x5]; // 0x393(0x5)
	struct FString BTs; // 0x398(0x10)
	struct FString ConfigName; // 0x3A8(0x10)
	float threatValue; // 0x3B8(0x4)
	float VulnerableValue; // 0x3BC(0x4)
	float AmbientThreatValue; // 0x3C0(0x4)
	float Health; // 0x3C4(0x4)
	float MaxHealth; // 0x3C8(0x4)
	uint8_t Pad_0x3CC[0x4]; // 0x3CC(0x4)
	struct AActor* mainTarget; // 0x3D0(0x8)
	int32_t CampId; // 0x3D8(0x4)
	float ThreatToMe; // 0x3DC(0x4)
	float VulToMe; // 0x3E0(0x4)
	EPvpAIThreatLevel ThreatLevelToMe; // 0x3E4(0x1)
	EPvpAIThreatLevel VulLevelToMe; // 0x3E5(0x1)
	uint8_t Pad_0x3E6[0x2]; // 0x3E6(0x2)
	int32_t DebugMode; // 0x3E8(0x4)
	uint8_t Pad_0x3EC[0x4]; // 0x3EC(0x4)
	struct FString AIName; // 0x3F0(0x10)
	struct FString AiHeroName; // 0x400(0x10)
	int32_t AiUin; // 0x410(0x4)
	int32_t TeamID; // 0x414(0x4)
	EPVPAIFightStyle AIFightStyle; // 0x418(0x1)
	uint8_t Pad_0x419[0x7]; // 0x419(0x7)
	struct FString DifficultyName; // 0x420(0x10)
	struct FString WeaponInfo; // 0x430(0x10)
	EPVPAIJobType AIJobType; // 0x440(0x1)
	uint8_t Pad_0x441[0x7]; // 0x441(0x7)
	struct FString JobObj1; // 0x448(0x10)
	struct FString JobObj2; // 0x458(0x10)
	struct FString BattleData; // 0x468(0x10)
	struct TArray<struct FVector> CurrPath; // 0x478(0x10)
	struct ADFMCharacter* CurrViewer; // 0x488(0x8)
	struct ADFMAIPlayerController* MonitorController; // 0x490(0x8)
	struct ADFMCharacter* MonitorCharacter; // 0x498(0x8)
	struct ADFMPlayerState* MonitorPlayerState; // 0x4A0(0x8)
	struct UPvpAIComponent* MonitorPvpAiComp; // 0x4A8(0x8)
	struct UDFMPVPAIDiffcultyComponent* MonitorDifficultyComp; // 0x4B0(0x8)
	struct UDFMPlayerDataAnalysisComponent* MonitorAnalysisComp; // 0x4B8(0x8)
	struct UTextBlock* TextName; // 0x4C0(0x8)
	struct UTextBlock* TextJobType; // 0x4C8(0x8)
	struct UTextBlock* TextFightStyle; // 0x4D0(0x8)
	struct UTextBlock* TextJobObj1; // 0x4D8(0x8)
	struct UTextBlock* TextJobObj2; // 0x4E0(0x8)
	struct UTextBlock* TextConfigName; // 0x4E8(0x8)
	struct UTextBlock* TextDifficultyName; // 0x4F0(0x8)
	struct UTextBlock* TextBTs; // 0x4F8(0x8)
	struct UTextBlock* TextThreat; // 0x500(0x8)
	struct UTextBlock* TextAmbientThreat; // 0x508(0x8)
	struct UTextBlock* TextVulnerable; // 0x510(0x8)
	struct UTextBlock* TextHealth; // 0x518(0x8)
	struct UTextBlock* TextDist; // 0x520(0x8)
	struct UTextBlock* TextThreatToMe; // 0x528(0x8)
	struct UTextBlock* TextVulToMe; // 0x530(0x8)
	struct UImage* BgImage; // 0x538(0x8)
	struct UImage* ViewerThreatBGImage; // 0x540(0x8)
	struct UGridPanel* TargetThreatPanel; // 0x548(0x8)
	uint8_t Pad_0x550[0x10]; // 0x550(0x10)
	struct TWeakObjectPtr<struct AActor> DebugTarget; // 0x560(0x8)
	struct ULineBatchComponent* Drawer; // 0x568(0x8)
	struct UGPBattleFieldSystem* BFSystem; // 0x570(0x8)
	uint8_t Pad_0x578[0x18]; // 0x578(0x18)
	struct TMap<struct FString, struct UTextBlock*> TextBlockMap; // 0x590(0x50)

	// Object: Function BattleField.PvpAIDebugInfo.TickTimerHandler
	// Flags: [Final|Native|Protected]
	// Offset: 0x14400338
	// Params: [ Num(0) Size(0x0) ]
	void TickTimerHandler();

	// Object: Function BattleField.PvpAIDebugInfo.SetMonitorTarget
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x14400294
	// Params: [ Num(1) Size(0x8) ]
	void SetMonitorTarget(struct AController* Controller);

	// Object: Function BattleField.PvpAIDebugInfo.SetDebugMode
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x144001f0
	// Params: [ Num(1) Size(0x4) ]
	void SetDebugMode(int32_t Val);

	// Object: Function BattleField.PvpAIDebugInfo.RepCurrViewer
	// Flags: [Net|Native|Event|Public|NetServer]
	// Offset: 0x14400144
	// Params: [ Num(1) Size(0x8) ]
	void RepCurrViewer(struct ADFMCharacter* Viewer);

	// Object: Function BattleField.PvpAIDebugInfo.ProjectWorldToEditorScreen
	// Flags: [Final|Native|Static|Protected|HasDefaults|BlueprintCallable]
	// Offset: 0x14400064
	// Params: [ Num(3) Size(0x1C) ]
	static struct FVector2D ProjectWorldToEditorScreen(struct UObject* Context, struct FVector Location);

	// Object: Function BattleField.PvpAIDebugInfo.OnRep_Threats
	// Flags: [Final|Native|Public]
	// Offset: 0x14400050
	// Params: [ Num(0) Size(0x0) ]
	void OnRep_Threats();

	// Object: Function BattleField.PvpAIDebugInfo.OnRep_PersonDataChange
	// Flags: [Final|Native|Public]
	// Offset: 0x1440003c
	// Params: [ Num(0) Size(0x0) ]
	void OnRep_PersonDataChange();

	// Object: Function BattleField.PvpAIDebugInfo.OnRep_Health
	// Flags: [Final|Native|Public]
	// Offset: 0x14400028
	// Params: [ Num(0) Size(0x0) ]
	void OnRep_Health();

	// Object: Function BattleField.PvpAIDebugInfo.OnRep_DifficultyName
	// Flags: [Final|Native|Public]
	// Offset: 0x14400014
	// Params: [ Num(0) Size(0x0) ]
	void OnRep_DifficultyName();

	// Object: Function BattleField.PvpAIDebugInfo.OnRep_DebugModeChange
	// Flags: [Final|Native|Public]
	// Offset: 0x14400000
	// Params: [ Num(0) Size(0x0) ]
	void OnRep_DebugModeChange();

	// Object: Function BattleField.PvpAIDebugInfo.OnRep_CurrPath
	// Flags: [Final|Native|Public]
	// Offset: 0x143fffec
	// Params: [ Num(0) Size(0x0) ]
	void OnRep_CurrPath();

	// Object: Function BattleField.PvpAIDebugInfo.OnRep_BTs
	// Flags: [Final|Native|Public]
	// Offset: 0x143fffd8
	// Params: [ Num(0) Size(0x0) ]
	void OnRep_BTs();

	// Object: Function BattleField.PvpAIDebugInfo.OnRep_BattleDataChange
	// Flags: [Final|Native|Public]
	// Offset: 0x143fffc4
	// Params: [ Num(0) Size(0x0) ]
	void OnRep_BattleDataChange();

	// Object: Function BattleField.PvpAIDebugInfo.OnRep_AIName
	// Flags: [Final|Native|Public]
	// Offset: 0x143fffb0
	// Params: [ Num(0) Size(0x0) ]
	void OnRep_AIName();

	// Object: Function BattleField.PvpAIDebugInfo.OnRep_AIJobType
	// Flags: [Final|Native|Public]
	// Offset: 0x143fff9c
	// Params: [ Num(0) Size(0x0) ]
	void OnRep_AIJobType();

	// Object: Function BattleField.PvpAIDebugInfo.OnRep_AIFightStyle
	// Flags: [Final|Native|Public]
	// Offset: 0x143fff88
	// Params: [ Num(0) Size(0x0) ]
	void OnRep_AIFightStyle();

	// Object: Function BattleField.PvpAIDebugInfo.GetCameraLocation
	// Flags: [Final|Native|Static|Protected|HasDefaults|BlueprintCallable]
	// Offset: 0x143ffee0
	// Params: [ Num(2) Size(0x14) ]
	static struct FVector GetCameraLocation(struct UObject* Context);

	// Object: Function BattleField.PvpAIDebugInfo.CloseAndDestroy
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x143ffecc
	// Params: [ Num(0) Size(0x0) ]
	void CloseAndDestroy();
};

// Object: Class BattleField.PVPAIJobs
// Size: 0x68 (Inherited: 0x28)
struct UPVPAIJobs : UObject
{
	DEFINE_UE_CLASS_HELPERS(UPVPAIJobs, "PVPAIJobs")

	uint8_t Pad_0x28[0x38]; // 0x28(0x38)
	struct ADFMAIPlayerController* Owner; // 0x60(0x8)

	// Object: Function BattleField.PVPAIJobs.SetOwner
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x144005f8
	// Params: [ Num(1) Size(0x8) ]
	void SetOwner(struct ADFMAIPlayerController* Controller);

	// Object: Function BattleField.PVPAIJobs.MarkIsRead
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x144005dc
	// Params: [ Num(0) Size(0x0) ]
	void MarkIsRead();

	// Object: Function BattleField.PVPAIJobs.MarkIsFailed
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x144005c8
	// Params: [ Num(0) Size(0x0) ]
	void MarkIsFailed();

	// Object: Function BattleField.PVPAIJobs.MarkIsDone
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x144005b4
	// Params: [ Num(0) Size(0x0) ]
	void MarkIsDone();

	// Object: Function BattleField.PVPAIJobs.IsValid
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0x14400574
	// Params: [ Num(1) Size(0x1) ]
	uint8_t IsValid();

	// Object: Function BattleField.PVPAIJobs.IsNew
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x14400554
	// Params: [ Num(1) Size(0x1) ]
	uint8_t IsNew();

	// Object: Function BattleField.PVPAIJobs.IsDone
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x14400538
	// Params: [ Num(1) Size(0x1) ]
	uint8_t IsDone();

	// Object: Function BattleField.PVPAIJobs.GetType
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x1440051c
	// Params: [ Num(1) Size(0x1) ]
	EPVPAIJobType GetType();
};

// Object: Class BattleField.MoveToCapturePointJob
// Size: 0x78 (Inherited: 0x68)
struct UMoveToCapturePointJob : UPVPAIJobs
{
	DEFINE_UE_CLASS_HELPERS(UMoveToCapturePointJob, "MoveToCapturePointJob")

	struct ABattleRoutePoint* TargetRoutePoint; // 0x68(0x8)
	struct AActor* TargetPoint; // 0x70(0x8)

	// Object: Function BattleField.MoveToCapturePointJob.SetTargetRoutePoint
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x1440079c
	// Params: [ Num(1) Size(0x8) ]
	void SetTargetRoutePoint(struct ABattleRoutePoint* RoutePoint);

	// Object: Function BattleField.MoveToCapturePointJob.SetTargetPoint
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x144006fc
	// Params: [ Num(1) Size(0x8) ]
	void SetTargetPoint(struct AActor* Point);

	// Object: Function BattleField.MoveToCapturePointJob.GetTargetRoutePoint
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x144006e0
	// Params: [ Num(1) Size(0x8) ]
	struct ABattleRoutePoint* GetTargetRoutePoint();

	// Object: Function BattleField.MoveToCapturePointJob.GetTargetPoint
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x144006c4
	// Params: [ Num(1) Size(0x8) ]
	struct AActor* GetTargetPoint();
};

// Object: Class BattleField.MoveToCapturePointFlankJob
// Size: 0x80 (Inherited: 0x78)
struct UMoveToCapturePointFlankJob : UMoveToCapturePointJob
{
	DEFINE_UE_CLASS_HELPERS(UMoveToCapturePointFlankJob, "MoveToCapturePointFlankJob")

	struct ABattleRoutePoint* FlankRoutePoint; // 0x78(0x8)

	// Object: Function BattleField.MoveToCapturePointFlankJob.SetFlankRoutePoint
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x14400860
	// Params: [ Num(1) Size(0x8) ]
	void SetFlankRoutePoint(struct ABattleRoutePoint* Point);

	// Object: Function BattleField.MoveToCapturePointFlankJob.GetFlankRoutePoint
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x14400844
	// Params: [ Num(1) Size(0x8) ]
	struct ABattleRoutePoint* GetFlankRoutePoint();
};

// Object: Class BattleField.PvpAiOverviewDebugInfo
// Size: 0x500 (Inherited: 0x370)
struct APvpAiOverviewDebugInfo : AActor
{
	DEFINE_UE_CLASS_HELPERS(APvpAiOverviewDebugInfo, "PvpAiOverviewDebugInfo")

	struct UUserWidget* WidgetClass; // 0x370(0x8)
	struct UUserWidget* ObjectiveListItemClass; // 0x378(0x8)
	struct FPvpAiOverviewCampInfo AttackCampInfo; // 0x380(0x88)
	struct FPvpAiOverviewCampInfo DefendCampInfo; // 0x408(0x88)
	struct UWidgetComponent* Panel; // 0x490(0x8)
	struct USphereComponent* Indicator; // 0x498(0x8)
	uint8_t Pad_0x4A0[0x8]; // 0x4A0(0x8)
	struct TMap<struct FString, struct UTextBlock*> TextBlockMap; // 0x4A8(0x50)
	struct UUserWidget* WidgetInstance; // 0x4F8(0x8)

	// Object: Function BattleField.PvpAiOverviewDebugInfo.OnRep_ObjectiveInfos
	// Flags: [Final|Native|Protected]
	// Offset: 0x14400960
	// Params: [ Num(0) Size(0x0) ]
	void OnRep_ObjectiveInfos();

	// Object: Function BattleField.PvpAiOverviewDebugInfo.OnRep_DefendCampInfo
	// Flags: [Final|Native|Protected]
	// Offset: 0x1440094c
	// Params: [ Num(0) Size(0x0) ]
	void OnRep_DefendCampInfo();

	// Object: Function BattleField.PvpAiOverviewDebugInfo.OnRep_AttackCampInfo
	// Flags: [Final|Native|Protected]
	// Offset: 0x14400938
	// Params: [ Num(0) Size(0x0) ]
	void OnRep_AttackCampInfo();

	// Object: Function BattleField.PvpAiOverviewDebugInfo.MulticastClose
	// Flags: [Net|NetReliableNative|Event|NetMulticast|Protected]
	// Offset: 0x1440091c
	// Params: [ Num(0) Size(0x0) ]
	void MulticastClose();

	// Object: Function BattleField.PvpAiOverviewDebugInfo.Close
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x14400908
	// Params: [ Num(0) Size(0x0) ]
	void Close();
};

// Object: Class BattleField.PvpAiPersonDetailDebugInfo
// Size: 0x760 (Inherited: 0x370)
struct APvpAiPersonDetailDebugInfo : AActor
{
	DEFINE_UE_CLASS_HELPERS(APvpAiPersonDetailDebugInfo, "PvpAiPersonDetailDebugInfo")

	struct UUserWidget* WidgetClass; // 0x370(0x8)
	struct FString AIName; // 0x378(0x10)
	int32_t AiUin; // 0x388(0x4)
	uint8_t Pad_0x38C[0x4]; // 0x38C(0x4)
	struct FString CampName; // 0x390(0x10)
	int32_t TeamID; // 0x3A0(0x4)
	int32_t ArmedForceID; // 0x3A4(0x4)
	struct FString HeroName; // 0x3A8(0x10)
	struct FVector LocationPos; // 0x3B8(0xC)
	struct FVector FocalLocation; // 0x3C4(0xC)
	struct FString Difficulty; // 0x3D0(0x10)
	struct FString CurrentWeapon; // 0x3E0(0x10)
	float CurrentHP; // 0x3F0(0x4)
	uint8_t Pad_0x3F4[0x4]; // 0x3F4(0x4)
	struct FString CurrBehaivorTemplate; // 0x3F8(0x10)
	struct FString CurrAiLKA; // 0x408(0x10)
	EPVPAIJobType AIJobType; // 0x418(0x1)
	uint8_t Pad_0x419[0x7]; // 0x419(0x7)
	struct FString JobObj1; // 0x420(0x10)
	struct FString JobObj2; // 0x430(0x10)
	EPVPAIFightStyle FightStyle; // 0x440(0x1)
	uint8_t Pad_0x441[0x7]; // 0x441(0x7)
	struct FString StyleName; // 0x448(0x10)
	float AmbientThreat; // 0x458(0x4)
	EPvpAIThreatLevel AmbientThreatLevel; // 0x45C(0x1)
	uint8_t Pad_0x45D[0x3]; // 0x45D(0x3)
	struct ADFMCharacter* MainTarChar; // 0x460(0x8)
	struct FString MainTarName; // 0x468(0x10)
	float MainTarSpottedTime; // 0x478(0x4)
	float MainTarSightThreat; // 0x47C(0x4)
	float MainTarHearingThreat; // 0x480(0x4)
	float MainTarAirHitThreat; // 0x484(0x4)
	float MainTarDamageThreat; // 0x488(0x4)
	float MainTarThreatValue; // 0x48C(0x4)
	float MainTarVulnerableValue; // 0x490(0x4)
	float MainTarFinalScore; // 0x494(0x4)
	uint8_t MainTarInVehicle : 1; // 0x498(0x1), Mask(0x1)
	uint8_t BitPad_0x498_1 : 7; // 0x498(0x1)
	uint8_t Pad_0x499[0x3]; // 0x499(0x3)
	float MainTarHardBlock; // 0x49C(0x4)
	float MainTarSoftBlock; // 0x4A0(0x4)
	float MainTargetThreat; // 0x4A4(0x4)
	float MainTargetVulnerable; // 0x4A8(0x4)
	EPvpAIThreatLevel MainTargetThreatLevel; // 0x4AC(0x1)
	EPvpAIThreatLevel MainTargetVulnerableLevel; // 0x4AD(0x1)
	uint8_t Pad_0x4AE[0x2]; // 0x4AE(0x2)
	struct ADFMCharacter* SubTarChar; // 0x4B0(0x8)
	struct FString SubTarName; // 0x4B8(0x10)
	float SubTarSpottedTime; // 0x4C8(0x4)
	float SubTarSightThreat; // 0x4CC(0x4)
	float SubTarHearingThreat; // 0x4D0(0x4)
	float SubTarAirHitThreat; // 0x4D4(0x4)
	float SubTarDamageThreat; // 0x4D8(0x4)
	float SubTarThreatValue; // 0x4DC(0x4)
	float SubTarVulnerableValue; // 0x4E0(0x4)
	float SubTarFinalScore; // 0x4E4(0x4)
	uint8_t SubTarInVehicle : 1; // 0x4E8(0x1), Mask(0x1)
	uint8_t BitPad_0x4E8_1 : 7; // 0x4E8(0x1)
	uint8_t Pad_0x4E9[0x3]; // 0x4E9(0x3)
	float SubTarHardBlock; // 0x4EC(0x4)
	float SubTarSoftBlock; // 0x4F0(0x4)
	float SubTargetThreat; // 0x4F4(0x4)
	float SubTargetVulnerable; // 0x4F8(0x4)
	EPvpAIThreatLevel SubTargetThreatLevel; // 0x4FC(0x1)
	EPvpAIThreatLevel SubTargetVulnerableLevel; // 0x4FD(0x1)
	uint8_t Pad_0x4FE[0x2]; // 0x4FE(0x2)
	struct ADFMCharacter* SubTarChar_1; // 0x500(0x8)
	struct FString SubTarName_1; // 0x508(0x10)
	float SubTarSpottedTime_1; // 0x518(0x4)
	float SubTarSightThreat_1; // 0x51C(0x4)
	float SubTarHearingThreat_1; // 0x520(0x4)
	float SubTarAirHitThreat_1; // 0x524(0x4)
	float SubTarDamageThreat_1; // 0x528(0x4)
	float SubTarThreatValue_1; // 0x52C(0x4)
	float SubTarVulnerableValue_1; // 0x530(0x4)
	float SubTarFinalScore_1; // 0x534(0x4)
	uint8_t SubTarInVehicle_1 : 1; // 0x538(0x1), Mask(0x1)
	uint8_t BitPad_0x538_1 : 7; // 0x538(0x1)
	uint8_t Pad_0x539[0x3]; // 0x539(0x3)
	float SubTarHardBlock_1; // 0x53C(0x4)
	float SubTarSoftBlock_1; // 0x540(0x4)
	float SubTargetThreat_1; // 0x544(0x4)
	float SubTargetVulnerable_1; // 0x548(0x4)
	EPvpAIThreatLevel SubTargetThreatLevel_1; // 0x54C(0x1)
	EPvpAIThreatLevel SubTargetVulnerableLevel_1; // 0x54D(0x1)
	uint8_t Pad_0x54E[0x2]; // 0x54E(0x2)
	struct ADFMCharacter* SubTarChar_2; // 0x550(0x8)
	struct FString SubTarName_2; // 0x558(0x10)
	float SubTarSpottedTime_2; // 0x568(0x4)
	float SubTarSightThreat_2; // 0x56C(0x4)
	float SubTarHearingThreat_2; // 0x570(0x4)
	float SubTarAirHitThreat_2; // 0x574(0x4)
	float SubTarDamageThreat_2; // 0x578(0x4)
	float SubTarThreatValue_2; // 0x57C(0x4)
	float SubTarVulnerableValue_2; // 0x580(0x4)
	float SubTarFinalScore_2; // 0x584(0x4)
	uint8_t SubTarInVehicle_2 : 1; // 0x588(0x1), Mask(0x1)
	uint8_t BitPad_0x588_1 : 7; // 0x588(0x1)
	uint8_t Pad_0x589[0x3]; // 0x589(0x3)
	float SubTarHardBlock_2; // 0x58C(0x4)
	float SubTarSoftBlock_2; // 0x590(0x4)
	float SubTargetThreat_2; // 0x594(0x4)
	float SubTargetVulnerable_2; // 0x598(0x4)
	EPvpAIThreatLevel SubTargetThreatLevel_2; // 0x59C(0x1)
	EPvpAIThreatLevel SubTargetVulnerableLevel_2; // 0x59D(0x1)
	uint8_t Pad_0x59E[0x2]; // 0x59E(0x2)
	struct ADFMCharacter* SubTarChar_3; // 0x5A0(0x8)
	struct FString SubTarName_3; // 0x5A8(0x10)
	float SubTarSpottedTime_3; // 0x5B8(0x4)
	float SubTarSightThreat_3; // 0x5BC(0x4)
	float SubTarHearingThreat_3; // 0x5C0(0x4)
	float SubTarAirHitThreat_3; // 0x5C4(0x4)
	float SubTarDamageThreat_3; // 0x5C8(0x4)
	float SubTarThreatValue_3; // 0x5CC(0x4)
	float SubTarVulnerableValue_3; // 0x5D0(0x4)
	float SubTarFinalScore_3; // 0x5D4(0x4)
	uint8_t SubTarInVehicle_3 : 1; // 0x5D8(0x1), Mask(0x1)
	uint8_t BitPad_0x5D8_1 : 7; // 0x5D8(0x1)
	uint8_t Pad_0x5D9[0x3]; // 0x5D9(0x3)
	float SubTarHardBlock_3; // 0x5DC(0x4)
	float SubTarSoftBlock_3; // 0x5E0(0x4)
	float SubTargetThreat_3; // 0x5E4(0x4)
	float SubTargetVulnerable_3; // 0x5E8(0x4)
	EPvpAIThreatLevel SubTargetThreatLevel_3; // 0x5EC(0x1)
	EPvpAIThreatLevel SubTargetVulnerableLevel_3; // 0x5ED(0x1)
	uint8_t Pad_0x5EE[0x2]; // 0x5EE(0x2)
	struct AGPVehicleBase* ThreatVehicle; // 0x5F0(0x8)
	struct FString ThreatVehicleName; // 0x5F8(0x10)
	float ThreatVehicleSpottedTime; // 0x608(0x4)
	float ThreatVehicleSightThreat; // 0x60C(0x4)
	float ThreatVehicleAirHitThreat; // 0x610(0x4)
	float ThreatVehicleDamageThreat; // 0x614(0x4)
	uint8_t ThreatVehicleInVehicelSight : 1; // 0x618(0x1), Mask(0x1)
	uint8_t BitPad_0x618_1 : 7; // 0x618(0x1)
	uint8_t Pad_0x619[0x3]; // 0x619(0x3)
	float ThreatVehicleThreateValue; // 0x61C(0x4)
	float ThreatVehicleVulnerableValue; // 0x620(0x4)
	uint8_t Pad_0x624[0x4]; // 0x624(0x4)
	struct FString BHTCompName; // 0x628(0x10)
	struct FString BHTTreeDesc; // 0x638(0x10)
	struct FString BHTBlackboardDesc; // 0x648(0x10)
	struct TArray<struct FVector> CurrPath; // 0x658(0x10)
	struct TArray<struct FVector> CurrBattleRoute; // 0x668(0x10)
	struct TWeakObjectPtr<struct AActor> DebugTarget; // 0x678(0x8)
	struct FString ResuceInfo; // 0x680(0x10)
	struct ULineBatchComponent* Drawer; // 0x690(0x8)
	struct ULineBatchComponent* BattleRouteDrawer; // 0x698(0x8)
	struct ULineBatchComponent* LineDrawer; // 0x6A0(0x8)
	struct USphereComponent* Indicator; // 0x6A8(0x8)
	struct UUserWidget* WidgetInstance; // 0x6B0(0x8)
	struct TMap<struct FString, struct UTextBlock*> TextBlockMap; // 0x6B8(0x50)
	uint8_t Pad_0x708[0x8]; // 0x708(0x8)
	struct ADFMCharacter* CurrentAiCharacter; // 0x710(0x8)
	uint8_t Pad_0x718[0x8]; // 0x718(0x8)
	struct UPvpAIComponent* CurrentPvpAiComp; // 0x720(0x8)
	struct UDFMPVPAIDiffcultyComponent* CurrentDifficultyComp; // 0x728(0x8)
	uint8_t Pad_0x730[0x20]; // 0x730(0x20)
	struct TArray<struct ADFMCharacter*> WatchCharacters; // 0x750(0x10)

	// Object: Function BattleField.PvpAiPersonDetailDebugInfo.ServerCloseSpectateModeLogicPlayerKillHandler
	// Flags: [Net|NetReliableNative|Event|Public|NetServer]
	// Offset: 0x14400cc4
	// Params: [ Num(1) Size(0x8) ]
	void ServerCloseSpectateModeLogicPlayerKillHandler(struct AGPPlayerController* LocalPlayerController);

	// Object: Function BattleField.PvpAiPersonDetailDebugInfo.ServerChangeTargetPlayer
	// Flags: [Net|NetReliableNative|Event|Public|NetServer]
	// Offset: 0x14400c18
	// Params: [ Num(1) Size(0x8) ]
	void ServerChangeTargetPlayer(struct AGPCharacter* DestCharacter);

	// Object: Function BattleField.PvpAiPersonDetailDebugInfo.OnRep_ThreatVehicelChange
	// Flags: [Final|Native|Protected]
	// Offset: 0x14400c04
	// Params: [ Num(0) Size(0x0) ]
	void OnRep_ThreatVehicelChange();

	// Object: Function BattleField.PvpAiPersonDetailDebugInfo.OnRep_SecondTargetInfo3
	// Flags: [Final|Native|Protected]
	// Offset: 0x14400bf0
	// Params: [ Num(0) Size(0x0) ]
	void OnRep_SecondTargetInfo3();

	// Object: Function BattleField.PvpAiPersonDetailDebugInfo.OnRep_SecondTargetInfo2
	// Flags: [Final|Native|Protected]
	// Offset: 0x14400bdc
	// Params: [ Num(0) Size(0x0) ]
	void OnRep_SecondTargetInfo2();

	// Object: Function BattleField.PvpAiPersonDetailDebugInfo.OnRep_SecondTargetInfo1
	// Flags: [Final|Native|Protected]
	// Offset: 0x14400bc8
	// Params: [ Num(0) Size(0x0) ]
	void OnRep_SecondTargetInfo1();

	// Object: Function BattleField.PvpAiPersonDetailDebugInfo.OnRep_SecondTargetInfo
	// Flags: [Final|Native|Protected]
	// Offset: 0x14400bb4
	// Params: [ Num(0) Size(0x0) ]
	void OnRep_SecondTargetInfo();

	// Object: Function BattleField.PvpAiPersonDetailDebugInfo.OnRep_ResuceInfo
	// Flags: [Final|Native|Protected]
	// Offset: 0x14400ba0
	// Params: [ Num(0) Size(0x0) ]
	void OnRep_ResuceInfo();

	// Object: Function BattleField.PvpAiPersonDetailDebugInfo.OnRep_PersonData
	// Flags: [Final|Native|Protected]
	// Offset: 0x14400b8c
	// Params: [ Num(0) Size(0x0) ]
	void OnRep_PersonData();

	// Object: Function BattleField.PvpAiPersonDetailDebugInfo.OnRep_MutationInfo
	// Flags: [Final|Native|Protected]
	// Offset: 0x14400b78
	// Params: [ Num(0) Size(0x0) ]
	void OnRep_MutationInfo();

	// Object: Function BattleField.PvpAiPersonDetailDebugInfo.OnRep_MainTargetInfo
	// Flags: [Final|Native|Protected]
	// Offset: 0x14400b64
	// Params: [ Num(0) Size(0x0) ]
	void OnRep_MainTargetInfo();

	// Object: Function BattleField.PvpAiPersonDetailDebugInfo.OnRep_CurrPath
	// Flags: [Final|Native|Protected]
	// Offset: 0x14400b50
	// Params: [ Num(0) Size(0x0) ]
	void OnRep_CurrPath();

	// Object: Function BattleField.PvpAiPersonDetailDebugInfo.OnRep_CurrBattleRoute
	// Flags: [Final|Native|Protected]
	// Offset: 0x14400b3c
	// Params: [ Num(0) Size(0x0) ]
	void OnRep_CurrBattleRoute();

	// Object: Function BattleField.PvpAiPersonDetailDebugInfo.OnRep_BHTTreeDesc
	// Flags: [Final|Native|Protected]
	// Offset: 0x14400b28
	// Params: [ Num(0) Size(0x0) ]
	void OnRep_BHTTreeDesc();

	// Object: Function BattleField.PvpAiPersonDetailDebugInfo.OnRep_BHTCompName
	// Flags: [Final|Native|Protected]
	// Offset: 0x14400b14
	// Params: [ Num(0) Size(0x0) ]
	void OnRep_BHTCompName();

	// Object: Function BattleField.PvpAiPersonDetailDebugInfo.OnRep_BHTBlackboardDesc
	// Flags: [Final|Native|Protected]
	// Offset: 0x14400b00
	// Params: [ Num(0) Size(0x0) ]
	void OnRep_BHTBlackboardDesc();

	// Object: Function BattleField.PvpAiPersonDetailDebugInfo.MulticastClose
	// Flags: [Net|NetReliableNative|Event|NetMulticast|Public]
	// Offset: 0x14400ae4
	// Params: [ Num(0) Size(0x0) ]
	void MulticastClose();

	// Object: Function BattleField.PvpAiPersonDetailDebugInfo.IsLocalPlayerInSpectating
	// Flags: [Final|Native|Public|Const]
	// Offset: 0x14400aac
	// Params: [ Num(1) Size(0x1) ]
	uint8_t IsLocalPlayerInSpectating();

	// Object: Function BattleField.PvpAiPersonDetailDebugInfo.Close
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x14400a98
	// Params: [ Num(0) Size(0x0) ]
	void Close();

	// Object: Function BattleField.PvpAiPersonDetailDebugInfo.ChangeTargetPlayer
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x14400a84
	// Params: [ Num(0) Size(0x0) ]
	void ChangeTargetPlayer();

	// Object: Function BattleField.PvpAiPersonDetailDebugInfo.ChangeSpectatingState
	// Flags: [Final|Native|Public]
	// Offset: 0x14400a70
	// Params: [ Num(0) Size(0x0) ]
	void ChangeSpectatingState();

	// Object: Function BattleField.PvpAiPersonDetailDebugInfo.AsyncChangeTargetPlayer
	// Flags: [Final|Native|Public]
	// Offset: 0x14400a5c
	// Params: [ Num(0) Size(0x0) ]
	void AsyncChangeTargetPlayer();
};

// Object: Class BattleField.PVPAISubsystem
// Size: 0xB78 (Inherited: 0x9A0)
struct APVPAISubsystem : APVPAISubsystemBase
{
	DEFINE_UE_CLASS_HELPERS(APVPAISubsystem, "PVPAISubsystem")

	struct TMap<EPVPAIFightStyle, int32_t> FightStyleWeights; // 0x9A0(0x50)
	struct UCurveFloat* RelayPointDistanceWeightCurve; // 0x9F0(0x8)
	struct UCurveFloat* FlankPointDistanceWeightCurve; // 0x9F8(0x8)
	uint8_t bAssignJobDelay : 1; // 0xA00(0x1), Mask(0x1)
	uint8_t BitPad_0xA00_1 : 7; // 0xA00(0x1)
	uint8_t Pad_0xA01[0x3]; // 0xA01(0x3)
	float AssignJobInterval; // 0xA04(0x4)
	int32_t AssignJobNumEverTime; // 0xA08(0x4)
	float RequestSosEnemyDistance; // 0xA0C(0x4)
	float RequestSosEnemyZDiff; // 0xA10(0x4)
	int32_t RequestSosEnemyCharacterNum; // 0xA14(0x4)
	float RequestSosEnemyThreatVehicle; // 0xA18(0x4)
	float RequestSosMaxInterval; // 0xA1C(0x4)
	float RequestSosMinInterval; // 0xA20(0x4)
	uint8_t RequestSosBlockByFoliage : 1; // 0xA24(0x1), Mask(0x1)
	uint8_t BitPad_0xA24_1 : 7; // 0xA24(0x1)
	uint8_t Pad_0xA25[0x3]; // 0xA25(0x3)
	float RequestSosFoliageAsBlock; // 0xA28(0x4)
	uint8_t Pad_0xA2C[0x4]; // 0xA2C(0x4)
	struct UCurveFloat* RequestSosNoBlockDistCurve; // 0xA30(0x8)
	struct UCurveFloat* RequestSosNoBlockAngleCurve; // 0xA38(0x8)
	struct UCurveFloat* RequestSosBlockDistCurve; // 0xA40(0x8)
	struct UCurveFloat* RequestSosBlockAngleCurve; // 0xA48(0x8)
	float SectorScoreMinRatio; // 0xA50(0x4)
	uint8_t Pad_0xA54[0x4]; // 0xA54(0x4)
	struct TArray<struct UPVPAIJobs*> AIJobs; // 0xA58(0x10)
	uint8_t Pad_0xA68[0x8]; // 0xA68(0x8)
	struct TMap<struct AActor*, struct FPvpSectorBattleRouteInfo> SectorBattleRouteInfo; // 0xA70(0x50)
	uint8_t Pad_0xAC0[0xB8]; // 0xAC0(0xB8)

	// Object: Function BattleField.PVPAISubsystem.RandomIndexWithWeight
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x14404a3c
	// Params: [ Num(2) Size(0x14) ]
	int32_t RandomIndexWithWeight(struct TArray<float> Weights);

	// Object: Function BattleField.PVPAISubsystem.PlayerRequestAssistInternal
	// Flags: [Native|Event|Protected|BlueprintEvent]
	// Offset: 0x1440491c
	// Params: [ Num(3) Size(0x11) ]
	void PlayerRequestAssistInternal(struct ADFMPlayerController* PlayerContrller, struct AGPCharacter* PlayerCharacter, EPlayerRequestAssistType AssistType);

	// Object: Function BattleField.PVPAISubsystem.OnServerLocalPlayerIsNeedRescueChanged
	// Flags: [Final|Native|Protected]
	// Offset: 0x14404878
	// Params: [ Num(1) Size(0x8) ]
	void OnServerLocalPlayerIsNeedRescueChanged(struct AActor* InCharacter);

	// Object: Function BattleField.PVPAISubsystem.OnServerInitNewPlayer
	// Flags: [Final|Native|Protected]
	// Offset: 0x1440479c
	// Params: [ Num(2) Size(0x10) ]
	void OnServerInitNewPlayer(struct APlayerController* NewPlayerController, struct AGPPlayerState* NewPlayerState);

	// Object: Function BattleField.PVPAISubsystem.OnPlayerRemoveBuffNtf
	// Flags: [Final|Native|Protected]
	// Offset: 0x14404648
	// Params: [ Num(4) Size(0x20) ]
	void OnPlayerRemoveBuffNtf(uint64_t BuffId, struct AActor* Maker, struct AActor* MakerInstigator, struct AActor* BuffOwner);

	// Object: Function BattleField.PVPAISubsystem.OnPlayerAddBuffNtf
	// Flags: [Final|Native|Protected]
	// Offset: 0x144044f4
	// Params: [ Num(4) Size(0x20) ]
	void OnPlayerAddBuffNtf(uint64_t BuffId, struct AActor* Maker, struct AActor* MakerInstigator, struct AActor* BuffOwner);

	// Object: Function BattleField.PVPAISubsystem.OnJobFinished
	// Flags: [Native|Public]
	// Offset: 0x14404448
	// Params: [ Num(1) Size(0x8) ]
	void OnJobFinished(struct UPVPAIJobs* Job);

	// Object: Function BattleField.PVPAISubsystem.OnCharacterEnterImpendingDeath
	// Flags: [Final|Native|Protected]
	// Offset: 0x144043a4
	// Params: [ Num(1) Size(0x8) ]
	void OnCharacterEnterImpendingDeath(struct AGPCharacterBase* GPCharacter);

	// Object: Function BattleField.PVPAISubsystem.OnAddBubbleMarker
	// Flags: [Final|Native|Protected]
	// Offset: 0x144042c4
	// Params: [ Num(2) Size(0x9) ]
	void OnAddBubbleMarker(struct AController* Controller, EQuickChatMarkingItemType MarkingInfo);

	// Object: Function BattleField.PVPAISubsystem.MarkRescueCampmateAction
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x144041a4
	// Params: [ Num(3) Size(0x11) ]
	void MarkRescueCampmateAction(struct AGPCharacter* Helper, struct AGPCharacter* DeathCharacter, uint8_t AddMark);

	// Object: Function BattleField.PVPAISubsystem.InnerGetPeekInfoBehindWall
	// Flags: [Final|Native|Static|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x14403e5c
	// Params: [ Num(11) Size(0x70) ]
	static struct FPvpAIPeekInfo InnerGetPeekInfoBehindWall(struct AActor* Target, struct FVector NavPoint, struct FVector WallLeft, struct FVector WallRight, struct ADFMAIController* AIController, float HorizontalOffset, int32_t CheckPointNum, float CrouchZOffset, float StandZOffset, struct ULineBatchComponent* EditorDrawer);

	// Object: Function BattleField.PVPAISubsystem.GetRescueCampmateMarkCount
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x14403db0
	// Params: [ Num(2) Size(0xC) ]
	int32_t GetRescueCampmateMarkCount(struct AGPCharacter* DeathCharacter);

	// Object: Function BattleField.PVPAISubsystem.GetRescueCampmateEnvSecurity
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x14403ccc
	// Params: [ Num(3) Size(0x14) ]
	float GetRescueCampmateEnvSecurity(struct AGPCharacter* Helper, struct AGPCharacter* DeathCharacter);

	// Object: Function BattleField.PVPAISubsystem.GetPPVPAISubsystem
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x14403c28
	// Params: [ Num(2) Size(0x10) ]
	static struct APVPAISubsystem* GetPPVPAISubsystem(struct UObject* ObjectContext);

	// Object: Function BattleField.PVPAISubsystem.GetPeekInfoBehindWall
	// Flags: [Final|Native|Static|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x14403958
	// Params: [ Num(9) Size(0x68) ]
	static struct FPvpAIPeekInfo GetPeekInfoBehindWall(struct AActor* Target, struct FVector NavPoint, struct FVector WallLeft, struct FVector WallRight, struct ADFMAIController* AIController, uint8_t bDrawDebug, float CrouchZOffset, float StandZOffset);

	// Object: Function BattleField.PVPAISubsystem.GetCapturePointScore
	// Flags: [Native|Event|Public|BlueprintEvent]
	// Offset: 0x1440386c
	// Params: [ Num(3) Size(0x14) ]
	float GetCapturePointScore(struct ADFMAIPlayerController* Controller, struct ABattleFieldCapturePoint* CP);

	// Object: Function BattleField.PVPAISubsystem.GetBotNumJobFlankRoutePoint
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x14403730
	// Params: [ Num(3) Size(0x10) ]
	void GetBotNumJobFlankRoutePoint(struct ABattleRoutePoint* FlankPoint, int32_t& AttackNum, int32_t& DefendNum);

	// Object: Function BattleField.PVPAISubsystem.CreateJob
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x14403648
	// Params: [ Num(3) Size(0x18) ]
	struct UPVPAIJobs* CreateJob(EPVPAIJobType Type, struct ADFMAIPlayerController* Controller);

	// Object: Function BattleField.PVPAISubsystem.CanPeekTargetFromLocation
	// Flags: [Final|Native|Static|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x14403484
	// Params: [ Num(6) Size(0x38) ]
	static struct TArray<EPoseType> CanPeekTargetFromLocation(struct AActor* Target, struct FVector NavPoint, struct ADFMAIController* AIController, float CrouchZOffset, float StandZOffset);

	// Object: Function BattleField.PVPAISubsystem.CalcRescueCampmateEnvSecurity
	// Flags: [Native|Event|Public|BlueprintEvent]
	// Offset: 0x14403324
	// Params: [ Num(5) Size(0x1C) ]
	float CalcRescueCampmateEnvSecurity(struct AGPCharacter* Helper, struct AGPCharacter* DeathCharacter, float DistSec, float YawSec);

	// Object: Function BattleField.PVPAISubsystem.BPCalcFlankRoutePointWeightScale
	// Flags: [Native|Event|Public|BlueprintEvent]
	// Offset: 0x14403238
	// Params: [ Num(3) Size(0x14) ]
	float BPCalcFlankRoutePointWeightScale(struct ABattleRoutePoint* FlankPoint, struct ADFMAIPlayerController* Controller);
};

// Object: Class BattleField.DFMEQSItemType_WallCoverPoint
// Size: 0x30 (Inherited: 0x30)
struct UDFMEQSItemType_WallCoverPoint : UGPEnvQueryItemType_CommonPoint
{
	DEFINE_UE_CLASS_HELPERS(UDFMEQSItemType_WallCoverPoint, "DFMEQSItemType_WallCoverPoint")
};

// Object: Class BattleField.VCRBuilder
// Size: 0x390 (Inherited: 0x370)
struct AVCRBuilder : AActor
{
	DEFINE_UE_CLASS_HELPERS(AVCRBuilder, "VCRBuilder")

	uint8_t IsBuildVCR : 1; // 0x370(0x1), Mask(0x1)
	uint8_t BitPad_0x370_1 : 7; // 0x370(0x1)
	uint8_t Pad_0x371[0x7]; // 0x371(0x7)
	struct AVCRManager* ViewManager; // 0x378(0x8)
	struct TArray<struct AVCRViewCell*> ViewCells; // 0x380(0x10)

	// Object: Function BattleField.VCRBuilder.GenerateViewCell
	// Flags: [Final|Native|Public]
	// Offset: 0x144052d0
	// Params: [ Num(0) Size(0x0) ]
	void GenerateViewCell();
};

// Object: Class BattleField.VCRManager
// Size: 0x438 (Inherited: 0x370)
struct AVCRManager : AActor
{
	DEFINE_UE_CLASS_HELPERS(AVCRManager, "VCRManager")

	struct UVcrCache* VcrCache; // 0x370(0x8)
	uint8_t Pad_0x378[0x30]; // 0x378(0x30)
	struct FVector DebugTransform; // 0x3A8(0xC)
	int32_t DebugX; // 0x3B4(0x4)
	int32_t DebugY; // 0x3B8(0x4)
	int32_t DebugZIndex; // 0x3BC(0x4)
	struct FBox Range; // 0x3C0(0x1C)
	int32_t GirdXYSize; // 0x3DC(0x4)
	int32_t GirdXSum; // 0x3E0(0x4)
	int32_t GirdYSum; // 0x3E4(0x4)
	uint8_t Pad_0x3E8[0x50]; // 0x3E8(0x50)

	// Object: Function BattleField.VCRManager.ReadBinary
	// Flags: [Final|Native|Public]
	// Offset: 0x144052f8
	// Params: [ Num(0) Size(0x0) ]
	void ReadBinary();
};

// Object: Class BattleField.VCRViewCell
// Size: 0x388 (Inherited: 0x370)
struct AVCRViewCell : AActor
{
	DEFINE_UE_CLASS_HELPERS(AVCRViewCell, "VCRViewCell")

	uint8_t Pad_0x370[0x10]; // 0x370(0x10)
	struct UProceduralMeshComponent* MeshComponent; // 0x380(0x8)
};

// Object: Class BattleField.WeaponChange
// Size: 0x120 (Inherited: 0xE0)
struct UWeaponChange : UInteractExecutor
{
	DEFINE_UE_CLASS_HELPERS(UWeaponChange, "WeaponChange")

	struct TArray<int64_t> MainWeaponID; // 0xE0(0x10)
	struct TArray<int64_t> SecondWeaponId; // 0xF0(0x10)
	struct ACHARACTER* CachedPawn; // 0x100(0x8)
	struct AActor* CachedInteractor; // 0x108(0x8)
	struct FTimerHandle DistanceTimer; // 0x110(0x8)
	float Disapparedistance; // 0x118(0x4)
	uint8_t Pad_0x11C[0x4]; // 0x11C(0x4)
};

// Object: Class BattleField.WeaponSwitchView
// Size: 0x610 (Inherited: 0x610)
struct UWeaponSwitchView : ULuaUIBaseView
{
	DEFINE_UE_CLASS_HELPERS(UWeaponSwitchView, "WeaponSwitchView")
};

} // namespace SDK
