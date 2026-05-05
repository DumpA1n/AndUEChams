#pragma once

#include "../CoreUObject_classes.hpp"
#include "DFMGameHud.hpp"
#include "DFMGameplay.hpp"
#include "Engine.hpp"
#include "GPGameHud.hpp"
#include "GPQuest.hpp"
#include "GPUserInterfaceCore.hpp"
#include "GameCore.hpp"
#include "UMG.hpp"

namespace SDK
{

// Package: IrisWorld
// Enums: 6
// Structs: 14
// Classes: 69

struct AActor;
struct AController;
struct ADFMCharacter;
struct ADeadBodyDrug;
struct AGPCharacter;
struct AGPCharacterBase;
struct AGPPlayerController;
struct AGPPlayerState;
struct AGPQuest;
struct AGPQuestActionContext;
struct AGPQuestStage;
struct AGPSequenceActor;
struct AHUD;
struct AInventoryPickup_Container;
struct APawn;
struct APlayerController;
struct APlayerStart;
struct APlayerState;
enum class EAIMsgType : uint8_t;
enum class EDFMGamePlayMode : uint8_t;
enum class EFlowResult : uint8_t;
enum class EGPPrefGroupName : uint8_t;
enum class EGPQuestActionMarkerType : uint8_t;
enum class EGameDifficultLevel : uint8_t;
enum class EGameRuleType : uint8_t;
enum class EMatchOverReason : uint8_t;
enum class EQA_CountdownType : uint8_t;
struct FAIMsgExtendInfo;
struct FInventoryItemInfo;
struct FItemID;
struct FQuestRow;
struct FTakeHitInfo;
struct FTeamInfo;
struct UButton;
struct UCanvasPanel;
struct UCheckbox;
struct UDFMContractManagerComponent;
struct UDFMImage;
struct UDFMPlayerResurrectComponent;
struct UDFMTouchEventPanel;
struct UDamageType;
struct UDataStatisticsBaseComponent;
struct UDataTable;
struct UFindCampView;
struct UHorizontalBox;
struct UImage;
struct UMaterialInstanceDynamic;
struct UNetConnection;
struct UPaperSprite;
struct UProgressBar;
struct URichTextBlock;
struct USOLTimeLineComponnet;
struct UScrollBox;
struct UScrollGridBox;
struct UTextBlock;
struct UUserWidget;
struct UVerticalBox;
struct UWidget;
struct UWidgetSwitcher;
struct UWorld;
struct UWrapBox;
struct FRaidVoteInfo;
struct FIrisStartSpotRow;
struct FRaidStateInfo;
struct FStrongholdRow;
struct FSHItem;
struct FStrongholdData;
struct FShContainerDesc;
struct FIrisResStateInfo;
struct FIrisCheckPoint;
struct FRaidRow;
struct FRaidFavorebleConditons;
struct FRaidEntityRow;
struct FMissionSettlementData;
struct FIrisStartSpotGroup;
struct UBigMapExpiredQuestDetailView;
struct UBigMapIrisHUDView;
struct UBigMapIrisItem;
struct UBigMapQuestDetailObjection;
struct UBigMapQuestDetailView;
struct AComposableGameModeBase;
struct UCountDownHUDBaseView;
struct ADeadBodyDrugSubSystem;
struct AIrisCharacter;
struct UIrisPlayerResurrectComponent;
struct UIrisRaidDataComponent;
struct UIrisRaidDataStatisticsComponent;
struct UIrisRaidEntranceView;
struct AIrisSafeHouseGameMode;
struct UStronghold;
struct AStrongholdSpawnContainer;
struct UIrisStrongholdComponent;
struct AIrisStrongholdSubsystem;
struct UIrisWorldCustomPlayerStateDataComponent;
struct AIrisWorldGameMode;
struct UIrisWorldGameplayDelegates;
struct AIrisWorldGameplaySubsystem;
struct UIrisWorldGamePlayUtils;
struct UIrisWorldGameplayBlueprintHelper;
struct AIrisWorldGameState;
struct AIrisWorldHUD;
struct UIrisWorldPlayerSettlementComponent;
struct AIrisWorldPlayerStart;
struct AIrisWorldPlayerState;
struct AIrisWorldRaidInfoActor;
struct UMapMissionHUDView;
struct UMapStrongholdHUDView;
struct UMissionNewAreaView;
struct UPlayerReviveView;
struct UPlayerReviveView_Mobile;
struct UPVEGameplayDelegates;
struct UQA_FillAllWeaponAmmo;
struct UQA_GetRaidDifficult;
struct UQA_IrisCheckPoint;
struct URaidBuyConditionView;
struct URaidCountDownHUDView;
struct URaidMainHUDView;
struct URaidMainSideView;
struct URaidMapHUDController;
struct URaidMapMarkerIconHUDView;
struct URaidMapMarkerIconHUDController;
struct URaidMissionCompleteView;
struct URaidMissionItemView;
struct URaidMissionTargetItemView;
struct URaidPreviewHUDView;
struct URaidPropItemView;
struct URaidScreenMarkerView;
struct URaidStageRemainTimeView;
struct URaidTeamHUDController;
struct UPlayerVoteItem;
struct URaidVoteItemView;
struct URaidVoteView;
struct URedAlertHUDView;
struct ASafeHouseLevelSubSys;
struct USeamlessTravelTestView;
struct UStartSpotAllocator_Discovery;
struct UStartSpotAllocator_Raid;
struct USubGameModeBase;
struct USubGameMode_FrontEnd;
struct USubGameMode_SafeHouse;
struct UTestActorComponent;
struct AWorldCruiseActor;
struct AWorldCruiseActorSpawner;
struct IWorldCruiseSpawnerInteraceface;

// Object: Enum IrisWorld.ERaidStage
enum class ERaidStage : uint8_t
{
	NONE = 0,
	RAID_DISPLAY = 1,
	CONDITION_SELECT = 2,
	MISSION_DECIDE = 3,
	MISSION_PREPARE = 4,
	MISSION_START = 5,
	MISSION_COMPLETE = 6,
	RAID_COMPLETE = 7,
	RAID_MISSION_FAILED = 8,
	RAID_ALLDIE = 9,
	RAID_FAILED = 10,
	ERaidStage_MAX = 11
};

// Object: Enum IrisWorld.EPVEBuyItemErrorCode
enum class EPVEBuyItemErrorCode : uint8_t
{
	Success = 0,
	ItemNotExit = 1,
	AddToInvError = 2,
	MeritIsNotEnough = 3,
	EPVEBuyItemErrorCode_MAX = 4
};

// Object: Enum IrisWorld.ESubGameModeType
enum class ESubGameModeType : uint8_t
{
	None = 0,
	FrontEndStart = 1,
	GunSmith = 2,
	SafeHouse = 3,
	ESubGameModeType_MAX = 4
};

// Object: Enum IrisWorld.EShContainerType
enum class EShContainerType : uint8_t
{
	Reward = 0,
	Collection1 = 1,
	Collection2 = 2,
	Collection3 = 3,
	EShContainerType_MAX = 4
};

// Object: Enum IrisWorld.EStrongholdState
enum class EStrongholdState : uint8_t
{
	EFailed = 0,
	EInProgress = 1,
	EOccupied = 2,
	EStrongholdState_MAX = 3
};

// Object: Enum IrisWorld.ERaidMapMarkerType
enum class ERaidMapMarkerType : uint8_t
{
	None = 0,
	Valkyrae = 1,
	Train = 2,
	LiLi = 3,
	EnemyVehicle = 4,
	ArmoredVehicle = 5,
	Tank = 6,
	EnemyOnFire = 7,
	EnemyBeSpotted = 8,
	ERaidMapMarkerType_MAX = 9
};

// Object: ScriptStruct IrisWorld.RaidVoteInfo
// Size: 0x28 (Inherited: 0x0)
struct FRaidVoteInfo
{
	uint32_t RaidID; // 0x0(0x4)
	uint8_t Pad_0x4[0x4]; // 0x4(0x4)
	int64_t QuestID; // 0x8(0x8)
	struct TArray<uint64_t> Players; // 0x10(0x10)
	uint8_t VoteCount; // 0x20(0x1)
	uint8_t Pad_0x21[0x7]; // 0x21(0x7)
};

// Object: ScriptStruct IrisWorld.IrisStartSpotRow
// Size: 0x20 (Inherited: 0x10)
struct FIrisStartSpotRow : FDescRowBase
{
	uint32_t GroupID; // 0x10(0x4)
	struct FVector GourpLocation; // 0x14(0xC)
};

// Object: ScriptStruct IrisWorld.RaidStateInfo
// Size: 0x18 (Inherited: 0x0)
struct FRaidStateInfo
{
	uint32_t CurRaidEntityID; // 0x0(0x4)
	uint8_t Pad_0x4[0x4]; // 0x4(0x4)
	int64_t CurQuestID; // 0x8(0x8)
	ERaidStage RaidStage; // 0x10(0x1)
	uint8_t Pad_0x11[0x3]; // 0x11(0x3)
	int32_t RaidTimespan; // 0x14(0x4)
};

// Object: ScriptStruct IrisWorld.StrongholdRow
// Size: 0x100 (Inherited: 0x10)
struct FStrongholdRow : FDescRowBase
{
	uint32_t ID; // 0x10(0x4)
	uint8_t Pad_0x14[0x4]; // 0x14(0x4)
	struct FText Name; // 0x18(0x18)
	uint32_t Type; // 0x30(0x4)
	uint8_t Pad_0x34[0x4]; // 0x34(0x4)
	struct TArray<struct FName> UnoccupyDrama; // 0x38(0x10)
	struct FName UnoccupyLevel; // 0x48(0x8)
	struct TArray<struct FName> OccupiedDrama; // 0x50(0x10)
	struct FName OccupiedLevel; // 0x60(0x8)
	int32_t StartSpotGroupID; // 0x68(0x4)
	uint8_t Pad_0x6C[0x4]; // 0x6C(0x4)
	struct TArray<uint64_t> MissionIDs; // 0x70(0x10)
	struct TArray<struct FSHItem> RewardItems; // 0x80(0x10)
	uint32_t RewardBoxID; // 0x90(0x4)
	struct FName RewardSpawnerTag; // 0x94(0x8)
	uint8_t Pad_0x9C[0x4]; // 0x9C(0x4)
	struct TArray<struct FSHItem> CollectionItems1; // 0xA0(0x10)
	uint32_t CollectionBoxID1; // 0xB0(0x4)
	struct FName CollectionContainerTag1; // 0xB4(0x8)
	uint8_t Pad_0xBC[0x4]; // 0xBC(0x4)
	struct TArray<struct FSHItem> CollectionItems2; // 0xC0(0x10)
	uint32_t CollectionBoxID2; // 0xD0(0x4)
	struct FName CollectionContainerTag2; // 0xD4(0x8)
	uint8_t Pad_0xDC[0x4]; // 0xDC(0x4)
	struct TArray<struct FSHItem> CollectionItems3; // 0xE0(0x10)
	uint32_t CollectionBoxID3; // 0xF0(0x4)
	struct FName CollectionContainerTag3; // 0xF4(0x8)
	uint8_t Pad_0xFC[0x4]; // 0xFC(0x4)
};

// Object: ScriptStruct IrisWorld.SHItem
// Size: 0x10 (Inherited: 0x0)
struct FSHItem
{
	uint64_t ItemID; // 0x0(0x8)
	int32_t Cnt; // 0x8(0x4)
	int32_t BindType; // 0xC(0x4)
};

// Object: ScriptStruct IrisWorld.StrongholdData
// Size: 0xB0 (Inherited: 0x0)
struct FStrongholdData
{
	uint8_t Pad_0x0[0xB0]; // 0x0(0xB0)
};

// Object: ScriptStruct IrisWorld.ShContainerDesc
// Size: 0x8 (Inherited: 0x0)
struct FShContainerDesc
{
	uint8_t Pad_0x0[0x8]; // 0x0(0x8)
};

// Object: ScriptStruct IrisWorld.IrisResStateInfo
// Size: 0x1 (Inherited: 0x0)
struct FIrisResStateInfo
{
	uint8_t ResOpenState : 1; // 0x0(0x1), Mask(0x1)
	uint8_t BitPad_0x0_1 : 7; // 0x0(0x1)
};

// Object: ScriptStruct IrisWorld.IrisCheckPoint
// Size: 0x8 (Inherited: 0x0)
struct FIrisCheckPoint
{
	int32_t SpotGroupID; // 0x0(0x4)
	uint8_t bEnableCheckPoint : 1; // 0x4(0x1), Mask(0x1)
	uint8_t BitPad_0x4_1 : 7; // 0x4(0x1)
	uint8_t bEnableFindNearestSpotGroup : 1; // 0x5(0x1), Mask(0x1)
	uint8_t BitPad_0x5_1 : 7; // 0x5(0x1)
	uint8_t Pad_0x6[0x2]; // 0x6(0x2)
};

// Object: ScriptStruct IrisWorld.RaidRow
// Size: 0x68 (Inherited: 0x10)
struct FRaidRow : FDescRowBase
{
	uint32_t RaidID; // 0x10(0x4)
	uint8_t Pad_0x14[0x4]; // 0x14(0x4)
	struct FText RaidName; // 0x18(0x18)
	struct FText RaidDesc; // 0x30(0x18)
	struct TArray<uint32_t> RaidGroup; // 0x48(0x10)
	struct TArray<uint64_t> RaidStartSpotGroups; // 0x58(0x10)
};

// Object: ScriptStruct IrisWorld.RaidFavorebleConditons
// Size: 0x38 (Inherited: 0x10)
struct FRaidFavorebleConditons : FDescRowBase
{
	uint32_t ConditionID; // 0x10(0x4)
	uint8_t Pad_0x14[0x4]; // 0x14(0x4)
	int64_t OwnerQuestID; // 0x18(0x8)
	struct FString ConditionDesc; // 0x20(0x10)
	uint64_t ItemID; // 0x30(0x8)
};

// Object: ScriptStruct IrisWorld.RaidEntityRow
// Size: 0x148 (Inherited: 0x10)
struct FRaidEntityRow : FDescRowBase
{
	uint32_t ID; // 0x10(0x4)
	uint8_t Pad_0x14[0x4]; // 0x14(0x4)
	struct FText Name; // 0x18(0x18)
	struct FText RaidActionPlan; // 0x30(0x18)
	uint8_t RaidLevel; // 0x48(0x1)
	uint8_t bPVERaid : 1; // 0x49(0x1), Mask(0x1)
	uint8_t BitPad_0x49_1 : 7; // 0x49(0x1)
	uint8_t Pad_0x4A[0x2]; // 0x4A(0x2)
	struct FName RaidIntroCSTag; // 0x4C(0x8)
	float RaidDisplayTime; // 0x54(0x4)
	float ConditionSelectCountdown; // 0x58(0x4)
	float MissionDecideCountdown; // 0x5C(0x4)
	float MissionCompleteDelayTime; // 0x60(0x4)
	float DecisionTime; // 0x64(0x4)
	float RaidFailCountdown; // 0x68(0x4)
	uint8_t Pad_0x6C[0x4]; // 0x6C(0x4)
	struct TArray<int64_t> RaidQuestIDList; // 0x70(0x10)
	struct TMap<int64_t, struct FName> QuestFadeTextMap; // 0x80(0x50)
	struct TMap<int64_t, float> QuestFadeTimeOut; // 0xD0(0x50)
	struct TArray<uint64_t> FavorableConditions; // 0x120(0x10)
	struct TArray<struct FSoftObjectPath> RaidMissionBg; // 0x130(0x10)
	float DeadBodyCreateDrugRate; // 0x140(0x4)
	uint8_t Pad_0x144[0x4]; // 0x144(0x4)
};

// Object: ScriptStruct IrisWorld.MissionSettlementData
// Size: 0x18 (Inherited: 0x0)
struct FMissionSettlementData
{
	int32_t RaidID; // 0x0(0x4)
	int32_t QuestID; // 0x4(0x4)
	struct TArray<int32_t> ItemArray; // 0x8(0x10)
};

// Object: ScriptStruct IrisWorld.IrisStartSpotGroup
// Size: 0x18 (Inherited: 0x0)
struct FIrisStartSpotGroup
{
	uint8_t Pad_0x0[0x18]; // 0x0(0x18)
};

// Object: Class IrisWorld.BigMapExpiredQuestDetailView
// Size: 0x418 (Inherited: 0x3F0)
struct UBigMapExpiredQuestDetailView : UBaseUIView
{
	DEFINE_UE_CLASS_HELPERS(UBigMapExpiredQuestDetailView, "BigMapExpiredQuestDetailView")

	struct UTextBlock* QuestName; // 0x3F0(0x8)
	struct UTextBlock* CountDown; // 0x3F8(0x8)
	struct UTextBlock* QuestDesTextBlock; // 0x400(0x8)
	uint8_t Pad_0x408[0x10]; // 0x408(0x10)
};

// Object: Class IrisWorld.BigMapIrisHUDView
// Size: 0xB70 (Inherited: 0xAA0)
struct UBigMapIrisHUDView : UBigMapHUDView
{
	DEFINE_UE_CLASS_HELPERS(UBigMapIrisHUDView, "BigMapIrisHUDView")

	struct UBigMapIrisItem* CurSelectedItem; // 0xAA0(0x8)
	struct UWidgetSwitcher* SelectedStateSW; // 0xAA8(0x8)
	struct UWidgetSwitcher* SelectedTypeSW; // 0xAB0(0x8)
	struct UTextBlock* TargetDetailName; // 0xAB8(0x8)
	struct UTextBlock* TargetDetailDes; // 0xAC0(0x8)
	struct UButton* ConformStrongholdBtn; // 0xAC8(0x8)
	struct UBigMapQuestDetailView* QuestDetailView; // 0xAD0(0x8)
	struct UBigMapExpiredQuestDetailView* ExpiredQuestDetailView; // 0xAD8(0x8)
	uint8_t bInSwitchAnim : 1; // 0xAE0(0x1), Mask(0x1)
	uint8_t BitPad_0xAE0_1 : 7; // 0xAE0(0x1)
	uint8_t Pad_0xAE1[0x7]; // 0xAE1(0x7)
	struct UCanvasPanel* MapInfoWidget; // 0xAE8(0x8)
	struct UMapStrongholdHUDView* StrongholdWidget; // 0xAF0(0x8)
	uint8_t Pad_0xAF8[0x8]; // 0xAF8(0x8)
	struct TArray<struct FStrongholdRow> MapStrongholdArr; // 0xB00(0x10)
	struct TMap<int32_t, struct FIrisStartSpotRow> StartSpotDict; // 0xB10(0x50)
	struct UMapMissionHUDView* MissionWidget; // 0xB60(0x8)
	uint8_t Pad_0xB68[0x8]; // 0xB68(0x8)

	// Object: Function IrisWorld.BigMapIrisHUDView.PlaySwitchAnimationIris
	// Flags: [Event|Protected|BlueprintCallable|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(1) Size(0x1) ]
	void PlaySwitchAnimationIris(uint8_t bSwitchToFullScreen);

	// Object: Function IrisWorld.BigMapIrisHUDView.OnStrongholdTeleportClick
	// Flags: [Final|Native|Protected]
	// Offset: 0x1507ccc8
	// Params: [ Num(0) Size(0x0) ]
	void OnStrongholdTeleportClick();

	// Object: Function IrisWorld.BigMapIrisHUDView.OnStrongholdClick
	// Flags: [Final|Native|Protected]
	// Offset: 0x1507cc24
	// Params: [ Num(1) Size(0x8) ]
	void OnStrongholdClick(struct FName Name);

	// Object: Function IrisWorld.BigMapIrisHUDView.OnQuestItemClick
	// Flags: [Final|Native|Protected]
	// Offset: 0x1507cb80
	// Params: [ Num(1) Size(0x8) ]
	void OnQuestItemClick(struct FName Name);
};

// Object: Class IrisWorld.BigMapIrisItem
// Size: 0x478 (Inherited: 0x468)
struct UBigMapIrisItem : UMapItemHUDView
{
	DEFINE_UE_CLASS_HELPERS(UBigMapIrisItem, "BigMapIrisItem")

	uint8_t Pad_0x468[0x10]; // 0x468(0x10)
};

// Object: Class IrisWorld.BigMapQuestDetailObjection
// Size: 0x410 (Inherited: 0x3F0)
struct UBigMapQuestDetailObjection : UBaseUIView
{
	DEFINE_UE_CLASS_HELPERS(UBigMapQuestDetailObjection, "BigMapQuestDetailObjection")

	struct UImage* QuestItemType; // 0x3F0(0x8)
	struct UTextBlock* QuestItemName; // 0x3F8(0x8)
	struct UProgressBar* ProgressBar; // 0x400(0x8)
	struct UTextBlock* ProgressText; // 0x408(0x8)
};

// Object: Class IrisWorld.BigMapQuestDetailView
// Size: 0x430 (Inherited: 0x3F0)
struct UBigMapQuestDetailView : UBaseUIView
{
	DEFINE_UE_CLASS_HELPERS(UBigMapQuestDetailView, "BigMapQuestDetailView")

	struct UTextBlock* QuestName; // 0x3F0(0x8)
	struct UTextBlock* QuestType; // 0x3F8(0x8)
	struct UScrollGridBox* QuestItemScrollGridBox; // 0x400(0x8)
	struct UScrollBox* QuestDesScrollBox; // 0x408(0x8)
	struct UTextBlock* QuestDesTextBlock; // 0x410(0x8)
	struct UUserWidget* TrackBtn; // 0x418(0x8)
	struct UWidget* UnReceiveDes; // 0x420(0x8)
	struct UBigMapQuestDetailObjection* BigMapQusetDetailWidget; // 0x428(0x8)

	// Object: Function IrisWorld.BigMapQuestDetailView.OnTrackBtnClick
	// Flags: [Final|Native|Protected]
	// Offset: 0x1507ce28
	// Params: [ Num(0) Size(0x0) ]
	void OnTrackBtnClick();

	// Object: Function IrisWorld.BigMapQuestDetailView.OnProcessItemWidget
	// Flags: [Final|Native|Public]
	// Offset: 0x1507cd48
	// Params: [ Num(2) Size(0x10) ]
	void OnProcessItemWidget(int32_t Position, struct UWidget* ItemWidget);

	// Object: Function IrisWorld.BigMapQuestDetailView.GetQuestItemCount
	// Flags: [Final|Native|Public]
	// Offset: 0x1507cd14
	// Params: [ Num(1) Size(0x4) ]
	int32_t GetQuestItemCount();
};

// Object: Class IrisWorld.ComposableGameModeBase
// Size: 0x480 (Inherited: 0x458)
struct AComposableGameModeBase : AGameMode
{
	DEFINE_UE_CLASS_HELPERS(AComposableGameModeBase, "ComposableGameModeBase")

	struct TArray<struct USubGameModeBase*> SubGameModeClasses; // 0x458(0x10)
	struct USubGameModeBase* PrimarySubGameMode; // 0x468(0x8)
	struct TArray<struct USubGameModeBase*> SecondarySubGameModes; // 0x470(0x10)
};

// Object: Class IrisWorld.CountDownHUDBaseView
// Size: 0x430 (Inherited: 0x3F0)
struct UCountDownHUDBaseView : UCommonHUDView
{
	DEFINE_UE_CLASS_HELPERS(UCountDownHUDBaseView, "CountDownHUDBaseView")

	struct FText Title; // 0x3F0(0x18)
	float TotalTime; // 0x408(0x4)
	float RemainningTime; // 0x40C(0x4)
	EQA_CountdownType CountdownType; // 0x410(0x1)
	uint8_t Pad_0x411[0x3]; // 0x411(0x3)
	int32_t FinalCountDownTime; // 0x414(0x4)
	int32_t EmergencyCountDownTime; // 0x418(0x4)
	int32_t SuperEmergencyCountDownTime; // 0x41C(0x4)
	struct UImage* Image_63; // 0x420(0x8)
	uint8_t Pad_0x428[0x8]; // 0x428(0x8)

	// Object: Function IrisWorld.CountDownHUDBaseView.SetType
	// Flags: [Event|Public|BlueprintCallable|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(1) Size(0x4) ]
	void SetType(int32_t TypeID);

	// Object: Function IrisWorld.CountDownHUDBaseView.SetTotalTime
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x1507d120
	// Params: [ Num(1) Size(0x4) ]
	void SetTotalTime(float InTotalTime);

	// Object: Function IrisWorld.CountDownHUDBaseView.SetTitle
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x1507cf64
	// Params: [ Num(2) Size(0x19) ]
	void SetTitle(struct FText Title_, EQA_CountdownType InCountdownType);

	// Object: Function IrisWorld.CountDownHUDBaseView.SetRemainningTime
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x1507cec0
	// Params: [ Num(1) Size(0x4) ]
	void SetRemainningTime(float InRemainningTime);

	// Object: Function IrisWorld.CountDownHUDBaseView.BP_StartFinalCountDown
	// Flags: [Event|Public|BlueprintCallable|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(0) Size(0x0) ]
	void BP_StartFinalCountDown();

	// Object: Function IrisWorld.CountDownHUDBaseView.BP_SetTitle
	// Flags: [Event|Protected|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(0) Size(0x0) ]
	void BP_SetTitle();

	// Object: Function IrisWorld.CountDownHUDBaseView.BP_SetRemainningTime
	// Flags: [Event|Protected|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(0) Size(0x0) ]
	void BP_SetRemainningTime();

	// Object: Function IrisWorld.CountDownHUDBaseView.BP_PlayCountAudio
	// Flags: [Event|Protected|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(1) Size(0x1) ]
	void BP_PlayCountAudio(uint8_t Strong);

	// Object: Function IrisWorld.CountDownHUDBaseView.BP_FadeOut
	// Flags: [Event|Public|BlueprintCallable|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(0) Size(0x0) ]
	void BP_FadeOut();

	// Object: Function IrisWorld.CountDownHUDBaseView.BP_FadeIn
	// Flags: [Event|Public|BlueprintCallable|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(0) Size(0x0) ]
	void BP_FadeIn();
};

// Object: Class IrisWorld.DeadBodyDrugSubSystem
// Size: 0x390 (Inherited: 0x370)
struct ADeadBodyDrugSubSystem : ALevelSubsystem
{
	DEFINE_UE_CLASS_HELPERS(ADeadBodyDrugSubSystem, "DeadBodyDrugSubSystem")

	float SpawnRate; // 0x370(0x4)
	uint8_t Pad_0x374[0x4]; // 0x374(0x4)
	struct ADeadBodyDrug* SpawnDrugClass; // 0x378(0x8)
	struct TArray<struct ADeadBodyDrug*> AmmoBoxArr; // 0x380(0x10)

	// Object: Function IrisWorld.DeadBodyDrugSubSystem.OnAIPlayerDiedEvent
	// Flags: [Final|Native|Protected]
	// Offset: 0x1507d27c
	// Params: [ Num(2) Size(0x10) ]
	void OnAIPlayerDiedEvent(struct AController* cpc, struct AController* KillerController);

	// Object: Function IrisWorld.DeadBodyDrugSubSystem.OnActiveRaidEntity
	// Flags: [Final|Native|Protected]
	// Offset: 0x1507d1d8
	// Params: [ Num(1) Size(0x4) ]
	void OnActiveRaidEntity(uint32_t RaidEntityID);
};

// Object: Class IrisWorld.IrisCharacter
// Size: 0x37F0 (Inherited: 0x37F0)
struct AIrisCharacter : ADFMPlayerCharacter
{
	DEFINE_UE_CLASS_HELPERS(AIrisCharacter, "IrisCharacter")
};

// Object: Class IrisWorld.IrisPlayerResurrectComponent
// Size: 0x140 (Inherited: 0x140)
struct UIrisPlayerResurrectComponent : UDFMPlayerResurrectComponent
{
	DEFINE_UE_CLASS_HELPERS(UIrisPlayerResurrectComponent, "IrisPlayerResurrectComponent")
};

// Object: Class IrisWorld.IrisRaidDataComponent
// Size: 0x588 (Inherited: 0xF8)
struct UIrisRaidDataComponent : UActorComponent
{
	DEFINE_UE_CLASS_HELPERS(UIrisRaidDataComponent, "IrisRaidDataComponent")

	struct FRaidStateInfo RaidStateInfo; // 0xF8(0x18)
	struct TArray<uint64_t> ConditionProps; // 0x110(0x10)
	struct TArray<struct FRaidVoteInfo> RaidVoteInfos; // 0x120(0x10)
	struct TArray<uint64_t> ConfirmedPlayers; // 0x130(0x10)
	struct TArray<struct FMissionSettlementData> MissionSettlementDatas; // 0x140(0x10)
	struct TArray<uint64_t> GiveUpVotePlayers; // 0x150(0x10)
	struct UDataTable* IrisRaidDataTable; // 0x160(0x8)
	struct UDataTable* IrisRaidEntityDataTable; // 0x168(0x8)
	struct UDataTable* QuestDataTable; // 0x170(0x8)
	struct UDataTable* QuestTimeLimitTable; // 0x178(0x8)
	struct UDataTable* MissionLevelTable; // 0x180(0x8)
	uint8_t Pad_0x188[0x8]; // 0x188(0x8)
	int32_t QuestStartupTimestamp; // 0x190(0x4)
	uint8_t Pad_0x194[0x3F4]; // 0x194(0x3F4)

	// Object: Function IrisWorld.IrisRaidDataComponent.SwitchRaidStage
	// Flags: [Final|Native|Public]
	// Offset: 0x1507e48c
	// Params: [ Num(1) Size(0x1) ]
	void SwitchRaidStage(ERaidStage NewStage);

	// Object: Function IrisWorld.IrisRaidDataComponent.ServerStateComfirmed
	// Flags: [Final|Native|Public]
	// Offset: 0x1507e3e8
	// Params: [ Num(1) Size(0x8) ]
	void ServerStateComfirmed(uint64_t PlayerId);

	// Object: Function IrisWorld.IrisRaidDataComponent.ServerRaidVote
	// Flags: [Final|Native|Public]
	// Offset: 0x1507e2c8
	// Params: [ Num(3) Size(0x11) ]
	void ServerRaidVote(int64_t QuestID, uint64_t PlayerId, uint8_t bCancelVote);

	// Object: Function IrisWorld.IrisRaidDataComponent.ServerRaidGiveUpVote
	// Flags: [Final|Native|Public]
	// Offset: 0x1507e1e0
	// Params: [ Num(2) Size(0x9) ]
	void ServerRaidGiveUpVote(uint64_t PlayerId, uint8_t bGiveUp);

	// Object: Function IrisWorld.IrisRaidDataComponent.ServerOnRaidLevelComplete
	// Flags: [Final|Native|Protected]
	// Offset: 0x1507e1cc
	// Params: [ Num(0) Size(0x0) ]
	void ServerOnRaidLevelComplete();

	// Object: Function IrisWorld.IrisRaidDataComponent.ServerOnRaidBuyCondition
	// Flags: [Final|Native|Protected]
	// Offset: 0x1507e128
	// Params: [ Num(1) Size(0x8) ]
	void ServerOnRaidBuyCondition(uint64_t PropId);

	// Object: Function IrisWorld.IrisRaidDataComponent.ServerOnMissionSettlement
	// Flags: [Final|Native|Protected]
	// Offset: 0x1507dfac
	// Params: [ Num(3) Size(0x18) ]
	void ServerOnMissionSettlement(int32_t RaidID, int32_t QuestID, struct TArray<int32_t> ItemArray);

	// Object: Function IrisWorld.IrisRaidDataComponent.ServerAddConditionProp
	// Flags: [Final|Native|Public]
	// Offset: 0x1507ded0
	// Params: [ Num(2) Size(0x10) ]
	void ServerAddConditionProp(uint64_t ConditionProp, uint64_t PlayerId);

	// Object: Function IrisWorld.IrisRaidDataComponent.ServerActivateRaidEntity
	// Flags: [Final|Native|Public]
	// Offset: 0x1507de2c
	// Params: [ Num(1) Size(0x4) ]
	void ServerActivateRaidEntity(uint32_t EntityID);

	// Object: Function IrisWorld.IrisRaidDataComponent.ServerActivateQuest
	// Flags: [Final|Native|Public]
	// Offset: 0x1507dd88
	// Params: [ Num(1) Size(0x8) ]
	void ServerActivateQuest(int64_t QuestID);

	// Object: Function IrisWorld.IrisRaidDataComponent.OnTeamPurchaseRevive
	// Flags: [Final|Native|Protected]
	// Offset: 0x1507dd74
	// Params: [ Num(0) Size(0x0) ]
	void OnTeamPurchaseRevive();

	// Object: Function IrisWorld.IrisRaidDataComponent.OnStageStateChanged
	// Flags: [Final|Native|Protected]
	// Offset: 0x1507dcd0
	// Params: [ Num(1) Size(0x8) ]
	void OnStageStateChanged(struct AGPQuestStage* InStage);

	// Object: Function IrisWorld.IrisRaidDataComponent.OnReplayStage
	// Flags: [Final|Native|Protected]
	// Offset: 0x1507dc2c
	// Params: [ Num(1) Size(0x8) ]
	void OnReplayStage(struct AGPQuestStage* InStage);

	// Object: Function IrisWorld.IrisRaidDataComponent.OnRep_RaidVoteInfo
	// Flags: [Final|Native|Protected]
	// Offset: 0x1507dc18
	// Params: [ Num(0) Size(0x0) ]
	void OnRep_RaidVoteInfo();

	// Object: Function IrisWorld.IrisRaidDataComponent.OnRep_RaidStateInfo
	// Flags: [Final|Native|Protected]
	// Offset: 0x1507db54
	// Params: [ Num(1) Size(0x18) ]
	void OnRep_RaidStateInfo(struct FRaidStateInfo LastRaidStateInfo);

	// Object: Function IrisWorld.IrisRaidDataComponent.OnRep_RaidGiveUpVoteInfo
	// Flags: [Final|Native|Protected]
	// Offset: 0x1507db40
	// Params: [ Num(0) Size(0x0) ]
	void OnRep_RaidGiveUpVoteInfo();

	// Object: Function IrisWorld.IrisRaidDataComponent.OnRep_MissionSettlementDatas
	// Flags: [Final|Native|Protected]
	// Offset: 0x1507db2c
	// Params: [ Num(0) Size(0x0) ]
	void OnRep_MissionSettlementDatas();

	// Object: Function IrisWorld.IrisRaidDataComponent.OnRep_ConfirmedPlayers
	// Flags: [Final|Native|Protected]
	// Offset: 0x1507db18
	// Params: [ Num(0) Size(0x0) ]
	void OnRep_ConfirmedPlayers();

	// Object: Function IrisWorld.IrisRaidDataComponent.OnRep_ConditionProps
	// Flags: [Final|Native|Protected]
	// Offset: 0x1507db04
	// Params: [ Num(0) Size(0x0) ]
	void OnRep_ConditionProps();

	// Object: Function IrisWorld.IrisRaidDataComponent.OnRaidIntroCSPlayEnd
	// Flags: [Final|Native|Protected]
	// Offset: 0x1507da60
	// Params: [ Num(1) Size(0x8) ]
	void OnRaidIntroCSPlayEnd(struct AGPSequenceActor* SeqActor);

	// Object: Function IrisWorld.IrisRaidDataComponent.OnRaidIntroCSBegin
	// Flags: [Final|Native|Protected]
	// Offset: 0x1507d9bc
	// Params: [ Num(1) Size(0x8) ]
	void OnRaidIntroCSBegin(struct AGPSequenceActor* SeqActor);

	// Object: Function IrisWorld.IrisRaidDataComponent.OnQuitGameInitiative
	// Flags: [Final|Native|Protected]
	// Offset: 0x1507d8dc
	// Params: [ Num(2) Size(0x10) ]
	void OnQuitGameInitiative(EMatchOverReason MatchOverReason, int64_t PlayerUin);

	// Object: Function IrisWorld.IrisRaidDataComponent.OnQLevelLoadComplete
	// Flags: [Final|Native|Protected]
	// Offset: 0x1507d8c8
	// Params: [ Num(0) Size(0x0) ]
	void OnQLevelLoadComplete();

	// Object: Function IrisWorld.IrisRaidDataComponent.OnPostEndStage
	// Flags: [Final|Native|Protected]
	// Offset: 0x1507d824
	// Params: [ Num(1) Size(0x8) ]
	void OnPostEndStage(struct AGPQuestStage* InStage);

	// Object: Function IrisWorld.IrisRaidDataComponent.OnPostEndQuest
	// Flags: [Final|Native|Protected]
	// Offset: 0x1507d780
	// Params: [ Num(1) Size(0x8) ]
	void OnPostEndQuest(struct AGPQuest* InQuest);

	// Object: Function IrisWorld.IrisRaidDataComponent.OnClientReadyToPlayNotify
	// Flags: [Final|Native|Private]
	// Offset: 0x1507d6dc
	// Params: [ Num(1) Size(0x8) ]
	void OnClientReadyToPlayNotify(uint64_t PlayerId);

	// Object: Function IrisWorld.IrisRaidDataComponent.NtfClientPlayRaidIntroCS
	// Flags: [Net|NetReliableNative|Event|NetMulticast|Public]
	// Offset: 0x1507d630
	// Params: [ Num(1) Size(0x8) ]
	void NtfClientPlayRaidIntroCS(struct FName CSTag);

	// Object: Function IrisWorld.IrisRaidDataComponent.NotifyServerLoadQLevelComplete
	// Flags: [Net|NetReliableNative|Event|Protected|NetServer]
	// Offset: 0x1507d614
	// Params: [ Num(0) Size(0x0) ]
	void NotifyServerLoadQLevelComplete();

	// Object: Function IrisWorld.IrisRaidDataComponent.MulticastUnLoadQuestLevel
	// Flags: [Net|NetReliableNative|Event|NetMulticast|Protected]
	// Offset: 0x1507d560
	// Params: [ Num(1) Size(0x10) ]
	void MulticastUnLoadQuestLevel(struct FString QLevelPath);

	// Object: Function IrisWorld.IrisRaidDataComponent.MulticastLoadQuestLevel
	// Flags: [Net|NetReliableNative|Event|NetMulticast|Protected]
	// Offset: 0x1507d4ac
	// Params: [ Num(1) Size(0x10) ]
	void MulticastLoadQuestLevel(struct FString QLevelPath);

	// Object: Function IrisWorld.IrisRaidDataComponent.InitIrisRaidData
	// Flags: [Final|Native|Public]
	// Offset: 0x1507d498
	// Params: [ Num(0) Size(0x0) ]
	void InitIrisRaidData();

	// Object: Function IrisWorld.IrisRaidDataComponent.ClientQuestCountdown
	// Flags: [Final|Native|Protected]
	// Offset: 0x1507d484
	// Params: [ Num(0) Size(0x0) ]
	void ClientQuestCountdown();

	// Object: Function IrisWorld.IrisRaidDataComponent.ClientGetQuestTimeLeft
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x1507d450
	// Params: [ Num(1) Size(0x4) ]
	int32_t ClientGetQuestTimeLeft();
};

// Object: Class IrisWorld.IrisRaidDataStatisticsComponent
// Size: 0x238 (Inherited: 0x1C8)
struct UIrisRaidDataStatisticsComponent : UDataStatisticsBaseComponent
{
	DEFINE_UE_CLASS_HELPERS(UIrisRaidDataStatisticsComponent, "IrisRaidDataStatisticsComponent")

	struct FText MissionName; // 0x1C8(0x18)
	struct FRaid1Info Raid1Info; // 0x1E0(0x28)
	struct FRaid2Info Raid2Info; // 0x208(0xC)
	uint8_t Pad_0x214[0x24]; // 0x214(0x24)

	// Object: Function IrisWorld.IrisRaidDataStatisticsComponent.OnServerRaidQuestEnded
	// Flags: [Final|Native|Public]
	// Offset: 0x1507e70c
	// Params: [ Num(3) Size(0x10) ]
	void OnServerRaidQuestEnded(int64_t CurQuestID, ERaidStage CurStage, int32_t TimeSpent);

	// Object: Function IrisWorld.IrisRaidDataStatisticsComponent.OnServerActiveRaidEntity
	// Flags: [Final|Native|Public]
	// Offset: 0x1507e668
	// Params: [ Num(1) Size(0x4) ]
	void OnServerActiveRaidEntity(uint32_t RaidEntityID);

	// Object: Function IrisWorld.IrisRaidDataStatisticsComponent.OnAIDeath
	// Flags: [Final|Native|Public]
	// Offset: 0x1507e550
	// Params: [ Num(3) Size(0x18) ]
	void OnAIDeath(struct AGPCharacterBase* CHARACTER, struct AController* Killer, struct UDamageType* DamageType);
};

// Object: Class IrisWorld.IrisRaidEntranceView
// Size: 0x688 (Inherited: 0x688)
struct UIrisRaidEntranceView : UDFMInteractorView_ItemBase
{
	DEFINE_UE_CLASS_HELPERS(UIrisRaidEntranceView, "IrisRaidEntranceView")

	// Object: Function IrisWorld.IrisRaidEntranceView.EnterRaid
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x1507e830
	// Params: [ Num(0) Size(0x0) ]
	void EnterRaid();
};

// Object: Class IrisWorld.IrisSafeHouseGameMode
// Size: 0x480 (Inherited: 0x480)
struct AIrisSafeHouseGameMode : AComposableGameModeBase
{
	DEFINE_UE_CLASS_HELPERS(AIrisSafeHouseGameMode, "IrisSafeHouseGameMode")
};

// Object: Class IrisWorld.Stronghold
// Size: 0x90 (Inherited: 0x28)
struct UStronghold : UObject
{
	DEFINE_UE_CLASS_HELPERS(UStronghold, "Stronghold")

	uint8_t Pad_0x28[0x8]; // 0x28(0x8)
	EStrongholdState CurState; // 0x30(0x1)
	uint8_t Pad_0x31[0xF]; // 0x31(0xF)
	struct TSet<struct ADFMCharacter*> CharArray; // 0x40(0x50)

	// Object: Function IrisWorld.Stronghold.SpawnNPCs
	// Flags: [Final|Native|Public]
	// Offset: 0x1507eac0
	// Params: [ Num(0) Size(0x0) ]
	void SpawnNPCs();

	// Object: Function IrisWorld.Stronghold.OnStateChange
	// Flags: [Final|Native|Public]
	// Offset: 0x1507ea1c
	// Params: [ Num(1) Size(0x1) ]
	void OnStateChange(EStrongholdState ENewState);

	// Object: Function IrisWorld.Stronghold.OnSpawnEnd
	// Flags: [Final|Native|Public]
	// Offset: 0x1507ea08
	// Params: [ Num(0) Size(0x0) ]
	void OnSpawnEnd();

	// Object: Function IrisWorld.Stronghold.GetShID
	// Flags: [Final|Native|Public]
	// Offset: 0x1507e9d4
	// Params: [ Num(1) Size(0x4) ]
	uint32_t GetShID();

	// Object: Function IrisWorld.Stronghold.ClearNPCs
	// Flags: [Final|Native|Public]
	// Offset: 0x1507e928
	// Params: [ Num(1) Size(0x1) ]
	void ClearNPCs(uint8_t bAll);
};

// Object: Class IrisWorld.StrongholdSpawnContainer
// Size: 0x380 (Inherited: 0x370)
struct AStrongholdSpawnContainer : AActor
{
	DEFINE_UE_CLASS_HELPERS(AStrongholdSpawnContainer, "StrongholdSpawnContainer")

	struct AInventoryPickup_Container* PickupContainer; // 0x370(0x8)
	uint8_t Pad_0x378[0x8]; // 0x378(0x8)

	// Object: Function IrisWorld.StrongholdSpawnContainer.Unspawn
	// Flags: [Final|Native|Public]
	// Offset: 0x1507ec64
	// Params: [ Num(0) Size(0x0) ]
	void Unspawn();

	// Object: Function IrisWorld.StrongholdSpawnContainer.ResetSpawnContainer
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x1507eb58
	// Params: [ Num(2) Size(0x28) ]
	void ResetSpawnContainer(const struct FItemID& ItemID, const struct TArray<struct FInventoryItemInfo>& BoxInnerItems);

	// Object: Function IrisWorld.StrongholdSpawnContainer.BP_AddSpawnContainer
	// Flags: [Event|Public|BlueprintCallable|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(1) Size(0x8) ]
	struct AInventoryPickup_Container* BP_AddSpawnContainer();
};

// Object: Class IrisWorld.IrisStrongholdComponent
// Size: 0x1C8 (Inherited: 0xF8)
struct UIrisStrongholdComponent : UActorComponent
{
	DEFINE_UE_CLASS_HELPERS(UIrisStrongholdComponent, "IrisStrongholdComponent")

	uint8_t Pad_0xF8[0x38]; // 0xF8(0x38)
	struct TArray<struct FStrongholdData> StrongHoldArray; // 0x130(0x10)
	uint8_t Pad_0x140[0x88]; // 0x140(0x88)

	// Object: Function IrisWorld.IrisStrongholdComponent.UpdateState
	// Flags: [Net|NetReliableNative|Event|Public|NetClient]
	// Offset: 0x15081f10
	// Params: [ Num(2) Size(0x5) ]
	void UpdateState(uint32_t StrongholdID, EStrongholdState EState);

	// Object: Function IrisWorld.IrisStrongholdComponent.TraceStronghold
	// Flags: [Net|NetReliableNative|Event|Public|NetClient]
	// Offset: 0x15081e28
	// Params: [ Num(2) Size(0x5) ]
	void TraceStronghold(uint32_t StrongholdID, EStrongholdState EState);

	// Object: Function IrisWorld.IrisStrongholdComponent.ServerTeleportTo
	// Flags: [Net|NetReliableNative|Event|Public|NetServer|HasDefaults]
	// Offset: 0x15081d7c
	// Params: [ Num(1) Size(0xC) ]
	void ServerTeleportTo(struct FVector TargetLocation);

	// Object: Function IrisWorld.IrisStrongholdComponent.RmStronghold
	// Flags: [Net|NetReliableNative|Event|Public|NetClient]
	// Offset: 0x15081cd0
	// Params: [ Num(1) Size(0x4) ]
	void RmStronghold(uint32_t StrongholdID);

	// Object: Function IrisWorld.IrisStrongholdComponent.ReqTeleportToStronghold
	// Flags: [Net|NetReliableNative|Event|Public|NetServer]
	// Offset: 0x15081c24
	// Params: [ Num(1) Size(0x4) ]
	void ReqTeleportToStronghold(uint32_t StrongholdID);

	// Object: Function IrisWorld.IrisStrongholdComponent.OnRep_StrongholdArray
	// Flags: [Final|Native|Public]
	// Offset: 0x15081c10
	// Params: [ Num(0) Size(0x0) ]
	void OnRep_StrongholdArray();

	// Object: Function IrisWorld.IrisStrongholdComponent.OnFinishMission
	// Flags: [Final|Native|Public]
	// Offset: 0x15081b34
	// Params: [ Num(2) Size(0x10) ]
	void OnFinishMission(uint64_t missionid, struct AGPPlayerController* cpc);

	// Object: Function IrisWorld.IrisStrongholdComponent.OnEnterStrongholdClient
	// Flags: [Net|NetReliableNative|Event|Public|NetClient]
	// Offset: 0x15081a88
	// Params: [ Num(1) Size(0x4) ]
	void OnEnterStrongholdClient(uint32_t StrongholdID);

	// Object: Function IrisWorld.IrisStrongholdComponent.OnBeginMission
	// Flags: [Final|Native|Public]
	// Offset: 0x150819ac
	// Params: [ Num(2) Size(0x10) ]
	void OnBeginMission(uint64_t missionid, struct AGPPlayerController* cpc);

	// Object: Function IrisWorld.IrisStrongholdComponent.ClientTeleportToStronghold
	// Flags: [Net|NetReliableNative|Event|Public|HasDefaults|NetClient]
	// Offset: 0x15081900
	// Params: [ Num(1) Size(0xC) ]
	void ClientTeleportToStronghold(struct FVector TargetLocation);
};

// Object: Class IrisWorld.IrisStrongholdSubsystem
// Size: 0x418 (Inherited: 0x370)
struct AIrisStrongholdSubsystem : ALevelSubsystem
{
	DEFINE_UE_CLASS_HELPERS(AIrisStrongholdSubsystem, "IrisStrongholdSubsystem")

	struct TMap<uint32_t, struct UStronghold*> SHMap; // 0x370(0x50)
	uint8_t Pad_0x3C0[0x58]; // 0x3C0(0x58)
};

// Object: Class IrisWorld.IrisWorldCustomPlayerStateDataComponent
// Size: 0x108 (Inherited: 0xF8)
struct UIrisWorldCustomPlayerStateDataComponent : UActorComponent
{
	DEFINE_UE_CLASS_HELPERS(UIrisWorldCustomPlayerStateDataComponent, "IrisWorldCustomPlayerStateDataComponent")

	struct AGPPlayerState* PlayerState; // 0xF8(0x8)
	float EndAlertTimestamp; // 0x100(0x4)
	uint8_t Pad_0x104[0x4]; // 0x104(0x4)

	// Object: Function IrisWorld.IrisWorldCustomPlayerStateDataComponent.OnRep_EndAlertTimestamp
	// Flags: [Final|Native|Public]
	// Offset: 0x1508200c
	// Params: [ Num(0) Size(0x0) ]
	void OnRep_EndAlertTimestamp();
};

// Object: Class IrisWorld.IrisWorldGameMode
// Size: 0x890 (Inherited: 0x860)
struct AIrisWorldGameMode : ADFMGameMode
{
	DEFINE_UE_CLASS_HELPERS(AIrisWorldGameMode, "IrisWorldGameMode")

	struct TArray<struct FName> AICreateCarryBodyContainTags; // 0x860(0x10)
	uint8_t Pad_0x870[0x20]; // 0x870(0x20)

	// Object: Function IrisWorld.IrisWorldGameMode.RebornPlayer
	// Flags: [Final|Native|Public]
	// Offset: 0x15082028
	// Params: [ Num(2) Size(0x9) ]
	void RebornPlayer(struct AController* PlayerController, uint8_t RefillArmor);
};

// Object: Class IrisWorld.IrisWorldGameplayDelegates
// Size: 0xD0 (Inherited: 0x30)
struct UIrisWorldGameplayDelegates : UGameInstanceSubsystem
{
	DEFINE_UE_CLASS_HELPERS(UIrisWorldGameplayDelegates, "IrisWorldGameplayDelegates")

	struct FMulticastInlineDelegate IrisWorldTestdEvent; // 0x30(0x10)
	struct FMulticastInlineDelegate OnIrisSafeHouseReady; // 0x40(0x10)
	struct FMulticastInlineDelegate ClientOnRaidVoteGiveUpInfoChanged; // 0x50(0x10)
	uint8_t Pad_0x60[0x70]; // 0x60(0x70)

	// Object: Function IrisWorld.IrisWorldGameplayDelegates.NotifyIrisSafeHouseReady
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x15082124
	// Params: [ Num(0) Size(0x0) ]
	void NotifyIrisSafeHouseReady();

	// Object: Function IrisWorld.IrisWorldGameplayDelegates.Get
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x10a8ae80
	// Params: [ Num(2) Size(0x10) ]
	static struct UIrisWorldGameplayDelegates* Get(struct UObject* WorldContext);
};

// Object: Class IrisWorld.IrisWorldGameplaySubsystem
// Size: 0x390 (Inherited: 0x370)
struct AIrisWorldGameplaySubsystem : ALevelSubsystem
{
	DEFINE_UE_CLASS_HELPERS(AIrisWorldGameplaySubsystem, "IrisWorldGameplaySubsystem")

	uint8_t Pad_0x370[0x20]; // 0x370(0x20)

	// Object: Function IrisWorld.IrisWorldGameplaySubsystem.OnClientSeamlessTravelFinished
	// Flags: [Final|Native|Protected]
	// Offset: 0x15082400
	// Params: [ Num(1) Size(0x1) ]
	void OnClientSeamlessTravelFinished(uint8_t bReconnect);

	// Object: Function IrisWorld.IrisWorldGameplaySubsystem.OnClientSeamlessTravelBegin
	// Flags: [Final|Native|Protected]
	// Offset: 0x15082354
	// Params: [ Num(1) Size(0x1) ]
	void OnClientSeamlessTravelBegin(uint8_t bReconnect);

	// Object: Function IrisWorld.IrisWorldGameplaySubsystem.OnClientGameLoadingFinished
	// Flags: [Final|Native|Protected]
	// Offset: 0x150822b0
	// Params: [ Num(1) Size(0x1) ]
	void OnClientGameLoadingFinished(EFlowResult Result);

	// Object: Function IrisWorld.IrisWorldGameplaySubsystem.NotifyClientReady
	// Flags: [Final|Native|Protected]
	// Offset: 0x1508229c
	// Params: [ Num(0) Size(0x0) ]
	void NotifyClientReady();

	// Object: Function IrisWorld.IrisWorldGameplaySubsystem.ClientPlayRaidIntro
	// Flags: [Final|Native|Protected]
	// Offset: 0x15082288
	// Params: [ Num(0) Size(0x0) ]
	void ClientPlayRaidIntro();

	// Object: Function IrisWorld.IrisWorldGameplaySubsystem.ClientOnRaidIntroCSPlayEnd
	// Flags: [Final|Native|Protected]
	// Offset: 0x150821e4
	// Params: [ Num(1) Size(0x8) ]
	void ClientOnRaidIntroCSPlayEnd(struct AGPSequenceActor* SeqActor);

	// Object: Function IrisWorld.IrisWorldGameplaySubsystem.ClientOnRaidIntroCSBegin
	// Flags: [Final|Native|Protected]
	// Offset: 0x15082140
	// Params: [ Num(1) Size(0x8) ]
	void ClientOnRaidIntroCSBegin(struct AGPSequenceActor* SeqActor);
};

// Object: Class IrisWorld.IrisWorldGamePlayUtils
// Size: 0x28 (Inherited: 0x28)
struct UIrisWorldGamePlayUtils : UObject
{
	DEFINE_UE_CLASS_HELPERS(UIrisWorldGamePlayUtils, "IrisWorldGamePlayUtils")

	// Object: Function IrisWorld.IrisWorldGamePlayUtils.SpawnTeamMateCharacter
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x150832c8
	// Params: [ Num(2) Size(0x10) ]
	static struct AActor* SpawnTeamMateCharacter(struct UWorld* WorldContext);

	// Object: Function IrisWorld.IrisWorldGamePlayUtils.SpawnSafeHouseBuilding
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x1508314c
	// Params: [ Num(4) Size(0x28) ]
	static struct AActor* SpawnSafeHouseBuilding(struct UWorld* WorldContext, struct UObject* BuildingClass, struct FString PosTag);

	// Object: Function IrisWorld.IrisWorldGamePlayUtils.ReplayRaidMission
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x150830b8
	// Params: [ Num(1) Size(0x8) ]
	static void ReplayRaidMission(struct UObject* WorldContext);

	// Object: Function IrisWorld.IrisWorldGamePlayUtils.PlayerUseResurrectCoin
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x15083024
	// Params: [ Num(1) Size(0x8) ]
	static void PlayerUseResurrectCoin(struct UObject* WorldContext);

	// Object: Function IrisWorld.IrisWorldGamePlayUtils.PlayerGiveUpRaidGame
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x15082f4c
	// Params: [ Num(2) Size(0x9) ]
	static void PlayerGiveUpRaidGame(struct UObject* WorldContext, uint8_t bGiveUp);

	// Object: Function IrisWorld.IrisWorldGamePlayUtils.PlayerExitRaidGame
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x15082eb8
	// Params: [ Num(1) Size(0x8) ]
	static void PlayerExitRaidGame(struct UObject* WorldContext);

	// Object: Function IrisWorld.IrisWorldGamePlayUtils.OpenRaidPreviewHUD
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x15082de8
	// Params: [ Num(2) Size(0xC) ]
	static void OpenRaidPreviewHUD(struct UObject* InWorldContext, int32_t RaidID);

	// Object: Function IrisWorld.IrisWorldGamePlayUtils.OpenRaidHUD
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x15082d1c
	// Params: [ Num(2) Size(0x10) ]
	static void OpenRaidHUD(struct UObject* InWorldContext, int64_t RaidID);

	// Object: Function IrisWorld.IrisWorldGamePlayUtils.JoinTheNewHost
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x15082bec
	// Params: [ Num(2) Size(0x18) ]
	static void JoinTheNewHost(struct UObject* WorldContext, struct FString HostURL);

	// Object: Function IrisWorld.IrisWorldGamePlayUtils.GetIrisRaidStage
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x15082b48
	// Params: [ Num(2) Size(0xC) ]
	static int32_t GetIrisRaidStage(struct UObject* WorldContext);

	// Object: Function IrisWorld.IrisWorldGamePlayUtils.GetIrisRaidName
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x15082a38
	// Params: [ Num(2) Size(0x20) ]
	static struct FText GetIrisRaidName(struct UObject* WorldContext);

	// Object: Function IrisWorld.IrisWorldGamePlayUtils.GetIrisRaidAllStageName
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x15082980
	// Params: [ Num(2) Size(0x18) ]
	static struct TArray<struct FText> GetIrisRaidAllStageName(struct UObject* WorldContext);

	// Object: Function IrisWorld.IrisWorldGamePlayUtils.GetIrisRaidAllBgObjectPath
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x150828c8
	// Params: [ Num(2) Size(0x18) ]
	static struct TArray<struct FSoftObjectPath> GetIrisRaidAllBgObjectPath(struct UObject* WorldContext);

	// Object: Function IrisWorld.IrisWorldGamePlayUtils.ExitSafeHouse
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x15082834
	// Params: [ Num(1) Size(0x8) ]
	static void ExitSafeHouse(struct UWorld* WorldContext);

	// Object: Function IrisWorld.IrisWorldGamePlayUtils.ExitGunsmith
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x150827a0
	// Params: [ Num(1) Size(0x8) ]
	static void ExitGunsmith(struct UWorld* WorldContext);

	// Object: Function IrisWorld.IrisWorldGamePlayUtils.EnterSafeHouse
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x1508270c
	// Params: [ Num(1) Size(0x8) ]
	static void EnterSafeHouse(struct UWorld* WorldContext);

	// Object: Function IrisWorld.IrisWorldGamePlayUtils.EnterGunsmith
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x15082664
	// Params: [ Num(2) Size(0x9) ]
	static uint8_t EnterGunsmith(struct UWorld* WorldContext);

	// Object: Function IrisWorld.IrisWorldGamePlayUtils.DestroyTeamMateCharacter
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x15082598
	// Params: [ Num(2) Size(0x10) ]
	static void DestroyTeamMateCharacter(struct UWorld* WorldContext, struct AActor* CharacterActor);

	// Object: Function IrisWorld.IrisWorldGamePlayUtils.ActivateMission
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x150824cc
	// Params: [ Num(2) Size(0x10) ]
	static void ActivateMission(struct UWorld* WorldContext, int64_t missionid);
};

// Object: Class IrisWorld.IrisWorldGameplayBlueprintHelper
// Size: 0x28 (Inherited: 0x28)
struct UIrisWorldGameplayBlueprintHelper : UBlueprintFunctionLibrary
{
	DEFINE_UE_CLASS_HELPERS(UIrisWorldGameplayBlueprintHelper, "IrisWorldGameplayBlueprintHelper")

	// Object: Function IrisWorld.IrisWorldGameplayBlueprintHelper.StartRedAlert
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x150834c4
	// Params: [ Num(2) Size(0xC) ]
	static void StartRedAlert(struct UObject* WorldContextObject, float Timeout);

	// Object: Function IrisWorld.IrisWorldGameplayBlueprintHelper.GetFirstPlayerResurrectCom
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x15083420
	// Params: [ Num(2) Size(0x10) ]
	static struct UDFMPlayerResurrectComponent* GetFirstPlayerResurrectCom(struct UObject* WorldContextObject);

	// Object: Function IrisWorld.IrisWorldGameplayBlueprintHelper.ForceEndRedAlert
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x1508338c
	// Params: [ Num(1) Size(0x8) ]
	static void ForceEndRedAlert(struct UObject* WorldContextObject);
};

// Object: Class IrisWorld.IrisWorldGameState
// Size: 0x1050 (Inherited: 0xF80)
struct AIrisWorldGameState : ADFMGameState
{
	DEFINE_UE_CLASS_HELPERS(AIrisWorldGameState, "IrisWorldGameState")

	uint64_t TeamLeaderID; // 0xF80(0x8)
	struct TMap<struct FString, struct FIrisResStateInfo> m_ResStates; // 0xF88(0x50)
	uint64_t ResPlayerID; // 0xFD8(0x8)
	struct TArray<uint64_t> RaidMatchPlayerIDs; // 0xFE0(0x10)
	uint8_t IsTeammateAllDied : 1; // 0xFF0(0x1), Mask(0x1)
	uint8_t BitPad_0xFF0_1 : 7; // 0xFF0(0x1)
	uint8_t Pad_0xFF1[0x7]; // 0xFF1(0x7)
	struct FString CurGameFlowState; // 0xFF8(0x10)
	EGameRuleType CurGameRuleType; // 0x1008(0x1)
	uint8_t Pad_0x1009[0x7]; // 0x1009(0x7)
	struct FMulticastInlineDelegate ClientIrisWorldTeamAllDiedStatusChangedEvent; // 0x1010(0x10)
	struct USOLTimeLineComponnet* TimeLineEventComponent; // 0x1020(0x8)
	struct UIrisRaidDataStatisticsComponent* IrisRaidDataStatisticsComponent; // 0x1028(0x8)
	struct UDFMContractManagerComponent* ContractManagerComponent; // 0x1030(0x8)
	EGPPrefGroupName PerfGroupName; // 0x1038(0x1)
	uint8_t Pad_0x1039[0x17]; // 0x1039(0x17)

	// Object: Function IrisWorld.IrisWorldGameState.SetMuteFoliage
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x15083d7c
	// Params: [ Num(1) Size(0x1) ]
	static void SetMuteFoliage(uint8_t bValue);

	// Object: Function IrisWorld.IrisWorldGameState.SetGameplayPrefGroup
	// Flags: [Net|NetReliableNative|Event|NetMulticast|Public]
	// Offset: 0x15083cd0
	// Params: [ Num(1) Size(0x1) ]
	void SetGameplayPrefGroup(EGPPrefGroupName InPrefGroupName);

	// Object: Function IrisWorld.IrisWorldGameState.ServerNotifyPlayerReborn
	// Flags: [Final|Native|Public]
	// Offset: 0x15083c2c
	// Params: [ Num(1) Size(0x8) ]
	void ServerNotifyPlayerReborn(struct AGPCharacterBase* GPCharacterBase);

	// Object: Function IrisWorld.IrisWorldGameState.RequestLeaderResState
	// Flags: [Final|Native|Public]
	// Offset: 0x15083b88
	// Params: [ Num(1) Size(0x8) ]
	void RequestLeaderResState(uint64_t ResPlayer);

	// Object: Function IrisWorld.IrisWorldGameState.OnRep_PerfGroupName
	// Flags: [Final|Native|Protected]
	// Offset: 0x15083b74
	// Params: [ Num(0) Size(0x0) ]
	void OnRep_PerfGroupName();

	// Object: Function IrisWorld.IrisWorldGameState.OnRep_IsTeammateAllDied
	// Flags: [Native|Public]
	// Offset: 0x15083b58
	// Params: [ Num(0) Size(0x0) ]
	void OnRep_IsTeammateAllDied();

	// Object: Function IrisWorld.IrisWorldGameState.OnRep_GameFlowStageChanged
	// Flags: [Final|Native|Protected]
	// Offset: 0x15083b44
	// Params: [ Num(0) Size(0x0) ]
	void OnRep_GameFlowStageChanged();

	// Object: Function IrisWorld.IrisWorldGameState.OnRep_CurGameRuleType
	// Flags: [Final|Native|Protected]
	// Offset: 0x15083aa0
	// Params: [ Num(1) Size(0x1) ]
	void OnRep_CurGameRuleType(EGameRuleType LastRuleType);

	// Object: Function IrisWorld.IrisWorldGameState.NotifyTeamMemberAllDead
	// Flags: [Final|Native|Public]
	// Offset: 0x15083810
	// Params: [ Num(3) Size(0x160) ]
	void NotifyTeamMemberAllDead(struct FTeamInfo TeamInfo, struct AGPCharacter* LastDiedCharacter, struct AGPCharacter* KillerCharacter);

	// Object: Function IrisWorld.IrisWorldGameState.IsIrisTeamAllDie
	// Flags: [Final|Native|Public]
	// Offset: 0x150837d8
	// Params: [ Num(1) Size(0x1) ]
	uint8_t IsIrisTeamAllDie();

	// Object: Function IrisWorld.IrisWorldGameState.IsInPVERaid
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x150837b4
	// Params: [ Num(1) Size(0x1) ]
	uint8_t IsInPVERaid();

	// Object: Function IrisWorld.IrisWorldGameState.GetPlayerStateByIndex
	// Flags: [Final|Native|Public]
	// Offset: 0x15083708
	// Params: [ Num(2) Size(0x10) ]
	struct AIrisWorldPlayerState* GetPlayerStateByIndex(int32_t PlayerIndex);

	// Object: Function IrisWorld.IrisWorldGameState.GetMuteFoliage
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x150836d0
	// Params: [ Num(1) Size(0x1) ]
	static uint8_t GetMuteFoliage();

	// Object: Function IrisWorld.IrisWorldGameState.GetGameRuleType
	// Flags: [Native|Public]
	// Offset: 0x15083694
	// Params: [ Num(1) Size(0x1) ]
	EGameRuleType GetGameRuleType();

	// Object: Function IrisWorld.IrisWorldGameState.GetDataStatisticsBaseComponent
	// Flags: [Final|Native|Public]
	// Offset: 0x15083658
	// Params: [ Num(1) Size(0x8) ]
	struct UDataStatisticsBaseComponent* GetDataStatisticsBaseComponent();

	// Object: Function IrisWorld.IrisWorldGameState.ClientReadyToPlayNotify
	// Flags: [Final|Native|Public]
	// Offset: 0x150835b4
	// Params: [ Num(1) Size(0x8) ]
	void ClientReadyToPlayNotify(uint64_t PlayerId);
};

// Object: Class IrisWorld.IrisWorldHUD
// Size: 0x790 (Inherited: 0x730)
struct AIrisWorldHUD : ADFMHUD
{
	DEFINE_UE_CLASS_HELPERS(AIrisWorldHUD, "IrisWorldHUD")

	struct UDataTable* IrisWorldUIDataTable; // 0x730(0x8)
	struct TSoftObjectPtr<UDataTable> IrisWorldUIDataTableHDOverride; // 0x738(0x28)
	struct UDataTable* RuleOnlyUIDataTable; // 0x760(0x8)
	struct FString RuleOnlyLuaHudTableName; // 0x768(0x10)
	struct FString RuleOnlyLuaBaseHudTableName; // 0x778(0x10)
	uint8_t Pad_0x788[0x8]; // 0x788(0x8)

	// Object: Function IrisWorld.IrisWorldHUD.OnQuestStageChanged
	// Flags: [Final|Native|Protected]
	// Offset: 0x15083fb4
	// Params: [ Num(1) Size(0x8) ]
	void OnQuestStageChanged(struct FName QuestStageName);

	// Object: Function IrisWorld.IrisWorldHUD.CreateQuestHudView
	// Flags: [Final|Native|Protected]
	// Offset: 0x15083f10
	// Params: [ Num(1) Size(0x1) ]
	void CreateQuestHudView(EDFMGamePlayMode DFMGamePlayMode);
};

// Object: Class IrisWorld.IrisWorldPlayerSettlementComponent
// Size: 0x540 (Inherited: 0x538)
struct UIrisWorldPlayerSettlementComponent : UBasePlayerSettlementComponent
{
	DEFINE_UE_CLASS_HELPERS(UIrisWorldPlayerSettlementComponent, "IrisWorldPlayerSettlementComponent")

	struct AIrisWorldRaidInfoActor* RaidActor; // 0x538(0x8)

	// Object: Function IrisWorld.IrisWorldPlayerSettlementComponent.ServerCollectPlayerSettlementData
	// Flags: [Final|Native|Public]
	// Offset: 0x15084060
	// Params: [ Num(1) Size(0x1) ]
	void ServerCollectPlayerSettlementData(EMatchOverReason MatchOverReason);
};

// Object: Class IrisWorld.IrisWorldPlayerStart
// Size: 0x3A8 (Inherited: 0x3A0)
struct AIrisWorldPlayerStart : APlayerStart
{
	DEFINE_UE_CLASS_HELPERS(AIrisWorldPlayerStart, "IrisWorldPlayerStart")

	int32_t StartSpotGroupID; // 0x39C(0x4)
	uint8_t bFloatStartSpot : 1; // 0x3A0(0x1), Mask(0x1)
	uint8_t bOnNavigationPlane : 1; // 0x3A1(0x1), Mask(0x1)
	uint8_t BitPad_0x3A4_2 : 6; // 0x3A4(0x1)
	uint8_t Pad_0x3A5[0x3]; // 0x3A5(0x3)
};

// Object: Class IrisWorld.IrisWorldPlayerState
// Size: 0x1AA8 (Inherited: 0x1A78)
struct AIrisWorldPlayerState : ADFMPlayerState
{
	DEFINE_UE_CLASS_HELPERS(AIrisWorldPlayerState, "IrisWorldPlayerState")

	uint8_t Pad_0x1A78[0x4]; // 0x1A78(0x4)
	struct FIrisCheckPoint IrisCheckPoint; // 0x1A7C(0x8)
	uint8_t Pad_0x1A84[0x4]; // 0x1A84(0x4)
	struct APlayerStart* PVEPlayerStart; // 0x1A88(0x8)
	int32_t DeathCount; // 0x1A90(0x4)
	int32_t TaskCompleteCount; // 0x1A94(0x4)
	uint8_t IsPlayerVisiable : 1; // 0x1A98(0x1), Mask(0x1)
	uint8_t BitPad_0x1A98_1 : 7; // 0x1A98(0x1)
	uint8_t Pad_0x1A99[0x3]; // 0x1A99(0x3)
	float Merit; // 0x1A9C(0x4)
	uint8_t bPendingLeaveDS; // 0x1AA0(0x1)
	uint8_t Pad_0x1AA1[0x7]; // 0x1AA1(0x7)

	// Object: Function IrisWorld.IrisWorldPlayerState.SetPlayerVisiable
	// Flags: [Final|Native|Public]
	// Offset: 0x15084d98
	// Params: [ Num(1) Size(0x1) ]
	void SetPlayerVisiable(uint8_t bPlayerVisiable);

	// Object: Function IrisWorld.IrisWorldPlayerState.ServerSendRaidSettlementInfo
	// Flags: [Net|NetReliableNative|Event|Public|NetServer]
	// Offset: 0x15084ce4
	// Params: [ Num(1) Size(0x1) ]
	void ServerSendRaidSettlementInfo(uint8_t bSucceed);

	// Object: Function IrisWorld.IrisWorldPlayerState.ServerResetRaidDifficulty
	// Flags: [Net|NetReliableNative|Event|Public|NetServer]
	// Offset: 0x15084bf4
	// Params: [ Num(2) Size(0x2) ]
	void ServerResetRaidDifficulty(uint8_t NewDifficulty, uint8_t bReplayRaid);

	// Object: Function IrisWorld.IrisWorldPlayerState.ServerReplayMission
	// Flags: [Net|NetReliableNative|Event|Public|NetServer]
	// Offset: 0x15084bd8
	// Params: [ Num(0) Size(0x0) ]
	void ServerReplayMission();

	// Object: Function IrisWorld.IrisWorldPlayerState.ServerRaidVote
	// Flags: [Net|NetReliableNative|Event|Public|NetServer]
	// Offset: 0x15084ae8
	// Params: [ Num(2) Size(0x9) ]
	void ServerRaidVote(int64_t QuestID, uint8_t bCancelVote);

	// Object: Function IrisWorld.IrisWorldPlayerState.ServerRaidGiveUpVote
	// Flags: [Net|NetReliableNative|Event|Public|NetServer]
	// Offset: 0x15084a34
	// Params: [ Num(1) Size(0x1) ]
	void ServerRaidGiveUpVote(uint8_t bGiveUp);

	// Object: Function IrisWorld.IrisWorldPlayerState.ServerPendingLeaveDS
	// Flags: [Net|NetReliableNative|Event|Public|NetServer]
	// Offset: 0x15084a18
	// Params: [ Num(0) Size(0x0) ]
	void ServerPendingLeaveDS();

	// Object: Function IrisWorld.IrisWorldPlayerState.ServerConfirmPurchase
	// Flags: [Net|NetReliableNative|Event|Public|NetServer]
	// Offset: 0x150849fc
	// Params: [ Num(0) Size(0x0) ]
	void ServerConfirmPurchase();

	// Object: Function IrisWorld.IrisWorldPlayerState.ServerAddConditionProp
	// Flags: [Net|NetReliableNative|Event|Public|NetServer]
	// Offset: 0x15084950
	// Params: [ Num(1) Size(0x8) ]
	void ServerAddConditionProp(uint64_t PropId);

	// Object: Function IrisWorld.IrisWorldPlayerState.ServerActiveRaidEntity
	// Flags: [Net|NetReliableNative|Event|Public|NetServer]
	// Offset: 0x150848a4
	// Params: [ Num(1) Size(0x4) ]
	void ServerActiveRaidEntity(uint32_t EntityID);

	// Object: Function IrisWorld.IrisWorldPlayerState.ServerActiveDiscovery
	// Flags: [Net|NetReliableNative|Event|Public|NetServer]
	// Offset: 0x15084888
	// Params: [ Num(0) Size(0x0) ]
	void ServerActiveDiscovery();

	// Object: Function IrisWorld.IrisWorldPlayerState.Server_IsMeritEnough
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x150847d8
	// Params: [ Num(2) Size(0x5) ]
	uint8_t Server_IsMeritEnough(float ConsumeValue);

	// Object: Function IrisWorld.IrisWorldPlayerState.Server_ConsumeMerit
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x15084728
	// Params: [ Num(2) Size(0x5) ]
	uint8_t Server_ConsumeMerit(float ConsumeValue);

	// Object: Function IrisWorld.IrisWorldPlayerState.OnRep_MeritChanged
	// Flags: [Final|Native|Protected]
	// Offset: 0x15084714
	// Params: [ Num(0) Size(0x0) ]
	void OnRep_MeritChanged();

	// Object: Function IrisWorld.IrisWorldPlayerState.IsTeamLeader
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x150846dc
	// Params: [ Num(1) Size(0x1) ]
	uint8_t IsTeamLeader();

	// Object: Function IrisWorld.IrisWorldPlayerState.IfMeritEnoughToBuy
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x1508462c
	// Params: [ Num(2) Size(0x5) ]
	uint8_t IfMeritEnoughToBuy(float NeedMerit);

	// Object: Function IrisWorld.IrisWorldPlayerState.GetPlayerVisiable
	// Flags: [Final|Native|Public]
	// Offset: 0x1508460c
	// Params: [ Num(1) Size(0x1) ]
	uint8_t GetPlayerVisiable();

	// Object: Function IrisWorld.IrisWorldPlayerState.GetMerit
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x150845f0
	// Params: [ Num(1) Size(0x4) ]
	float GetMerit();

	// Object: Function IrisWorld.IrisWorldPlayerState.DeactiveCheckPoint
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x150845dc
	// Params: [ Num(0) Size(0x0) ]
	void DeactiveCheckPoint();

	// Object: Function IrisWorld.IrisWorldPlayerState.BP_ServerActiveRaid
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x15084514
	// Params: [ Num(1) Size(0x4) ]
	void BP_ServerActiveRaid(int32_t EntityID);

	// Object: Function IrisWorld.IrisWorldPlayerState.BP_ServerActiveDiscovery
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x150844c4
	// Params: [ Num(0) Size(0x0) ]
	void BP_ServerActiveDiscovery();

	// Object: Function IrisWorld.IrisWorldPlayerState.AddMerit
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x1508441c
	// Params: [ Num(1) Size(0x4) ]
	void AddMerit(float AddValue);

	// Object: Function IrisWorld.IrisWorldPlayerState.ActiveCheckPoint
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x15084378
	// Params: [ Num(1) Size(0x4) ]
	void ActiveCheckPoint(int32_t SpotGroupID);
};

// Object: Class IrisWorld.IrisWorldRaidInfoActor
// Size: 0x378 (Inherited: 0x370)
struct AIrisWorldRaidInfoActor : AActor
{
	DEFINE_UE_CLASS_HELPERS(AIrisWorldRaidInfoActor, "IrisWorldRaidInfoActor")

	struct UIrisRaidDataComponent* RaidDataCom; // 0x370(0x8)

	// Object: Function IrisWorld.IrisWorldRaidInfoActor.GetRaidInfo
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x15087208
	// Params: [ Num(2) Size(0x10) ]
	static struct AIrisWorldRaidInfoActor* GetRaidInfo(struct UObject* InWorldContext);

	// Object: Function IrisWorld.IrisWorldRaidInfoActor.BPGetRaidLevel
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x150871d4
	// Params: [ Num(1) Size(0x4) ]
	int32_t BPGetRaidLevel();

	// Object: Function IrisWorld.IrisWorldRaidInfoActor.BPGetCurRaidStage
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x150871a0
	// Params: [ Num(1) Size(0x1) ]
	ERaidStage BPGetCurRaidStage();

	// Object: Function IrisWorld.IrisWorldRaidInfoActor.BPGetCurRaidEntityID
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x1508716c
	// Params: [ Num(1) Size(0x4) ]
	int32_t BPGetCurRaidEntityID();
};

// Object: Class IrisWorld.MapMissionHUDView
// Size: 0x498 (Inherited: 0x478)
struct UMapMissionHUDView : UBigMapIrisItem
{
	DEFINE_UE_CLASS_HELPERS(UMapMissionHUDView, "MapMissionHUDView")

	struct UImage* TargetIcon; // 0x478(0x8)
	struct UButton* Btn; // 0x480(0x8)
	struct UObject* ActiveQuestTexture; // 0x488(0x8)
	struct UObject* DeactiveQuestTexture; // 0x490(0x8)

	// Object: Function IrisWorld.MapMissionHUDView.OnClick
	// Flags: [Final|Native|Public]
	// Offset: 0x15087368
	// Params: [ Num(0) Size(0x0) ]
	void OnClick();
};

// Object: Class IrisWorld.MapStrongholdHUDView
// Size: 0x5B8 (Inherited: 0x478)
struct UMapStrongholdHUDView : UBigMapIrisItem
{
	DEFINE_UE_CLASS_HELPERS(UMapStrongholdHUDView, "MapStrongholdHUDView")

	struct FStrongholdRow StrongholdData; // 0x478(0x100)
	struct UButton* Btn; // 0x578(0x8)
	struct UWidgetSwitcher* StateSW; // 0x580(0x8)
	struct UTextBlock* SelectedTargetName; // 0x588(0x8)
	struct UTextBlock* UnselectedTargetName; // 0x590(0x8)
	struct UImage* UnSelectedTargetIcon; // 0x598(0x8)
	struct UImage* SelectedTargetIcon; // 0x5A0(0x8)
	struct UObject* StrongholdTexture; // 0x5A8(0x8)
	struct UObject* RaidTexture; // 0x5B0(0x8)

	// Object: Function IrisWorld.MapStrongholdHUDView.OnClick
	// Flags: [Final|Native|Public]
	// Offset: 0x15087384
	// Params: [ Num(0) Size(0x0) ]
	void OnClick();
};

// Object: Class IrisWorld.MissionNewAreaView
// Size: 0x410 (Inherited: 0x3F0)
struct UMissionNewAreaView : UBaseUIView
{
	DEFINE_UE_CLASS_HELPERS(UMissionNewAreaView, "MissionNewAreaView")

	struct FName FindCampViewName; // 0x3EC(0x8)
	struct UFindCampView* FindCampViewHud; // 0x3F8(0x8)
	uint8_t Pad_0x400[0x10]; // 0x400(0x10)
};

// Object: Class IrisWorld.PlayerReviveView
// Size: 0x428 (Inherited: 0x3F0)
struct UPlayerReviveView : UBaseUIView
{
	DEFINE_UE_CLASS_HELPERS(UPlayerReviveView, "PlayerReviveView")

	struct UButton* BtnBuyRevive; // 0x3F0(0x8)
	struct UTextBlock* TextUseRecCoin; // 0x3F8(0x8)
	struct UTextBlock* TextNeedCoinNum; // 0x400(0x8)
	struct UTextBlock* TextResurrectionCoinNum; // 0x408(0x8)
	struct UProgressBar* ProgressAutoRevive; // 0x410(0x8)
	struct UTextBlock* TextAutoReviveTime; // 0x418(0x8)
	uint8_t Pad_0x420[0x8]; // 0x420(0x8)
};

// Object: Class IrisWorld.PlayerReviveView_Mobile
// Size: 0x440 (Inherited: 0x428)
struct UPlayerReviveView_Mobile : UPlayerReviveView
{
	DEFINE_UE_CLASS_HELPERS(UPlayerReviveView_Mobile, "PlayerReviveView_Mobile")

	struct UUserWidget* WbpBuyRevive; // 0x428(0x8)
	struct URichTextBlock* RichTextBuyRevive; // 0x430(0x8)
	struct UUserWidget* WbpSelfDied; // 0x438(0x8)
};

// Object: Class IrisWorld.PVEGameplayDelegates
// Size: 0x90 (Inherited: 0x30)
struct UPVEGameplayDelegates : UWorldSubsystem
{
	DEFINE_UE_CLASS_HELPERS(UPVEGameplayDelegates, "PVEGameplayDelegates")

	struct FMulticastInlineDelegate ClientPickupWeaponInfoChangedEvent; // 0x30(0x10)
	struct FMulticastInlineDelegate ClientBuyItemErrorCodeEvent; // 0x40(0x10)
	struct FMulticastInlineDelegate ClientUnequipItemErrorCodeEvent; // 0x50(0x10)
	struct FMulticastInlineDelegate ClientMeritChangedEvent; // 0x60(0x10)
	struct FMulticastInlineDelegate ClientMeritObtainEvent; // 0x70(0x10)
	struct FMulticastInlineDelegate PVEGameEndEvent; // 0x80(0x10)
};

// Object: Class IrisWorld.QA_FillAllWeaponAmmo
// Size: 0x38 (Inherited: 0x38)
struct UQA_FillAllWeaponAmmo : UGPQuestActionAsyncReturnActionBase
{
	DEFINE_UE_CLASS_HELPERS(UQA_FillAllWeaponAmmo, "QA_FillAllWeaponAmmo")

	// Object: Function IrisWorld.QA_FillAllWeaponAmmo.QA_FillAllWeaponAmmo
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x150874e8
	// Params: [ Num(3) Size(0x18) ]
	static struct UQA_FillAllWeaponAmmo* QA_FillAllWeaponAmmo(struct AGPQuestActionContext* QAContext, struct APlayerController* TargetPlayerCtrl);

	// Object: Function IrisWorld.QA_FillAllWeaponAmmo.QA_FillAllPlayersAmmo
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x15087444
	// Params: [ Num(2) Size(0x10) ]
	static struct UQA_FillAllWeaponAmmo* QA_FillAllPlayersAmmo(struct AGPQuestActionContext* QAContext);
};

// Object: Class IrisWorld.QA_GetRaidDifficult
// Size: 0x88 (Inherited: 0x38)
struct UQA_GetRaidDifficult : UGPQuestActionAsyncReturnActionBase
{
	DEFINE_UE_CLASS_HELPERS(UQA_GetRaidDifficult, "QA_GetRaidDifficult")

	struct FMulticastInlineDelegate Raid_Simple; // 0x38(0x10)
	struct FMulticastInlineDelegate Raid_Normal; // 0x48(0x10)
	struct FMulticastInlineDelegate Raid_Hard; // 0x58(0x10)
	struct FMulticastInlineDelegate AnyLevel; // 0x68(0x10)
	uint8_t Pad_0x78[0x10]; // 0x78(0x10)

	// Object: Function IrisWorld.QA_GetRaidDifficult.QA_GetRaidDifficult
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x1508790c
	// Params: [ Num(2) Size(0x10) ]
	static struct UQA_GetRaidDifficult* QA_GetRaidDifficult(struct AGPQuestActionContext* QAContext);

	// Object: Function IrisWorld.QA_GetRaidDifficult.OnGetDifficult_Simple
	// Flags: [Final|Native|Public]
	// Offset: 0x15087868
	// Params: [ Num(1) Size(0x1) ]
	void OnGetDifficult_Simple(EGameDifficultLevel Difficult);

	// Object: Function IrisWorld.QA_GetRaidDifficult.OnGetDifficult_Normal
	// Flags: [Final|Native|Public]
	// Offset: 0x150877c4
	// Params: [ Num(1) Size(0x1) ]
	void OnGetDifficult_Normal(EGameDifficultLevel Difficult);

	// Object: Function IrisWorld.QA_GetRaidDifficult.OnGetDifficult_Hard
	// Flags: [Final|Native|Public]
	// Offset: 0x15087720
	// Params: [ Num(1) Size(0x1) ]
	void OnGetDifficult_Hard(EGameDifficultLevel Difficult);

	// Object: Function IrisWorld.QA_GetRaidDifficult.OnGetDifficult_Any
	// Flags: [Final|Native|Public]
	// Offset: 0x1508767c
	// Params: [ Num(1) Size(0x1) ]
	void OnGetDifficult_Any(EGameDifficultLevel Difficult);
};

// Object: Class IrisWorld.QA_IrisCheckPoint
// Size: 0x38 (Inherited: 0x38)
struct UQA_IrisCheckPoint : UGPQuestActionAsyncReturnActionBase
{
	DEFINE_UE_CLASS_HELPERS(UQA_IrisCheckPoint, "QA_IrisCheckPoint")

	// Object: Function IrisWorld.QA_IrisCheckPoint.QA_EnableFindNearestCheckPoint
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x15087dd4
	// Params: [ Num(2) Size(0x10) ]
	static struct UQA_IrisCheckPoint* QA_EnableFindNearestCheckPoint(struct AGPQuestActionContext* QAContext);

	// Object: Function IrisWorld.QA_IrisCheckPoint.QA_DisableFindNearestCheckPoint
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x15087d30
	// Params: [ Num(2) Size(0x10) ]
	static struct UQA_IrisCheckPoint* QA_DisableFindNearestCheckPoint(struct AGPQuestActionContext* QAContext);

	// Object: Function IrisWorld.QA_IrisCheckPoint.QA_DeactiveTeamIrisCheckPoint
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x15087c8c
	// Params: [ Num(2) Size(0x10) ]
	static struct UQA_IrisCheckPoint* QA_DeactiveTeamIrisCheckPoint(struct AGPQuestActionContext* QAContext);

	// Object: Function IrisWorld.QA_IrisCheckPoint.QA_DeactiveIrisCheckPoint
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x15087bb0
	// Params: [ Num(3) Size(0x18) ]
	static struct UQA_IrisCheckPoint* QA_DeactiveIrisCheckPoint(struct AGPQuestActionContext* QAContext, struct APlayerController* TargetPlayerCtrl);

	// Object: Function IrisWorld.QA_IrisCheckPoint.QA_ActiveTeamIrisCheckPoint
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x15087ad0
	// Params: [ Num(3) Size(0x18) ]
	static struct UQA_IrisCheckPoint* QA_ActiveTeamIrisCheckPoint(struct AGPQuestActionContext* QAContext, int32_t StartPointGroup);

	// Object: Function IrisWorld.QA_IrisCheckPoint.QA_ActiveIrisCheckPoint
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x150879b8
	// Params: [ Num(4) Size(0x20) ]
	static struct UQA_IrisCheckPoint* QA_ActiveIrisCheckPoint(struct AGPQuestActionContext* QAContext, struct APlayerController* TargetPlayerCtrl, int32_t StartPointGroup);
};

// Object: Class IrisWorld.RaidBuyConditionView
// Size: 0x7A0 (Inherited: 0x610)
struct URaidBuyConditionView : ULuaUIBaseView
{
	DEFINE_UE_CLASS_HELPERS(URaidBuyConditionView, "RaidBuyConditionView")

	struct URaidPropItemView* ConditionPropClass; // 0x610(0x8)
	struct UWrapBox* WrapBox_ConditionItems; // 0x618(0x8)
	struct URaidMainSideView* RaidMainSideView; // 0x620(0x8)
	struct TArray<struct URaidPropItemView*> ConditionPropViews; // 0x628(0x10)
	uint8_t Pad_0x638[0x168]; // 0x638(0x168)

	// Object: Function IrisWorld.RaidBuyConditionView.ShowView
	// Flags: [Final|Native|Public]
	// Offset: 0x150882dc
	// Params: [ Num(0) Size(0x0) ]
	void ShowView();

	// Object: Function IrisWorld.RaidBuyConditionView.OnSelectConditionProp
	// Flags: [Final|Native|Protected]
	// Offset: 0x15088238
	// Params: [ Num(1) Size(0x8) ]
	void OnSelectConditionProp(uint64_t PropId);

	// Object: Function IrisWorld.RaidBuyConditionView.OnRaidStageChanged
	// Flags: [Final|Native|Protected]
	// Offset: 0x15088194
	// Params: [ Num(1) Size(0x1) ]
	void OnRaidStageChanged(ERaidStage NewStage);

	// Object: Function IrisWorld.RaidBuyConditionView.OnPurchaseCountDown
	// Flags: [Final|Native|Protected]
	// Offset: 0x15088180
	// Params: [ Num(0) Size(0x0) ]
	void OnPurchaseCountDown();

	// Object: Function IrisWorld.RaidBuyConditionView.OnPurchaseConditionProp
	// Flags: [Final|Native|Protected]
	// Offset: 0x150880dc
	// Params: [ Num(1) Size(0x8) ]
	void OnPurchaseConditionProp(uint64_t PropId);

	// Object: Function IrisWorld.RaidBuyConditionView.OnPlayerConfirmed
	// Flags: [Final|Native|Protected]
	// Offset: 0x15087fe4
	// Params: [ Num(1) Size(0x10) ]
	void OnPlayerConfirmed(struct TArray<uint64_t> ConfirmedPlayers);

	// Object: Function IrisWorld.RaidBuyConditionView.OnInit
	// Flags: [Final|Native|Public]
	// Offset: 0x15087fd0
	// Params: [ Num(0) Size(0x0) ]
	void OnInit();

	// Object: Function IrisWorld.RaidBuyConditionView.OnDestroy
	// Flags: [Final|Native|Public]
	// Offset: 0x15087fbc
	// Params: [ Num(0) Size(0x0) ]
	void OnDestroy();

	// Object: Function IrisWorld.RaidBuyConditionView.OnConditionPropsUpdate
	// Flags: [Final|Native|Protected]
	// Offset: 0x15087ec4
	// Params: [ Num(1) Size(0x10) ]
	void OnConditionPropsUpdate(struct TArray<uint64_t> InConditions);

	// Object: Function IrisWorld.RaidBuyConditionView.OnClickdeConfirmButton
	// Flags: [Final|Native|Protected]
	// Offset: 0x15087eb0
	// Params: [ Num(0) Size(0x0) ]
	void OnClickdeConfirmButton();

	// Object: Function IrisWorld.RaidBuyConditionView.InitWidget
	// Flags: [Final|Native|Public]
	// Offset: 0x15087e9c
	// Params: [ Num(0) Size(0x0) ]
	void InitWidget();

	// Object: Function IrisWorld.RaidBuyConditionView.HideView
	// Flags: [Native|Event|Public|BlueprintEvent]
	// Offset: 0x15087e80
	// Params: [ Num(0) Size(0x0) ]
	void HideView();
};

// Object: Class IrisWorld.RaidCountDownHUDView
// Size: 0x438 (Inherited: 0x3F0)
struct URaidCountDownHUDView : UBaseUIView
{
	DEFINE_UE_CLASS_HELPERS(URaidCountDownHUDView, "RaidCountDownHUDView")

	struct UImage* Image_63; // 0x3F0(0x8)
	struct FText Title; // 0x3F8(0x18)
	float TotalTime; // 0x410(0x4)
	float RemainningTime; // 0x414(0x4)
	EQA_CountdownType CountdownType; // 0x418(0x1)
	uint8_t Pad_0x419[0x3]; // 0x419(0x3)
	int32_t FinalCountDownTime; // 0x41C(0x4)
	uint8_t Pad_0x420[0x4]; // 0x420(0x4)
	int32_t EmergencyCountDownTime; // 0x424(0x4)
	int32_t SuperEmergencyCountDownTime; // 0x428(0x4)
	int32_t LoopAnimationType; // 0x42C(0x4)
	int32_t CountDownColorChangedTime; // 0x430(0x4)
	uint8_t bIsCountDownColorChanged : 1; // 0x434(0x1), Mask(0x1)
	uint8_t BitPad_0x434_1 : 7; // 0x434(0x1)
	uint8_t Pad_0x435[0x3]; // 0x435(0x3)

	// Object: Function IrisWorld.RaidCountDownHUDView.SetType
	// Flags: [Event|Public|BlueprintCallable|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(1) Size(0x4) ]
	void SetType(int32_t TypeID);

	// Object: Function IrisWorld.RaidCountDownHUDView.SetTotalTime
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x150886e8
	// Params: [ Num(1) Size(0x4) ]
	void SetTotalTime(float InTotalTime);

	// Object: Function IrisWorld.RaidCountDownHUDView.SetTitle
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x1508852c
	// Params: [ Num(2) Size(0x19) ]
	void SetTitle(struct FText Title_, EQA_CountdownType InCountdownType);

	// Object: Function IrisWorld.RaidCountDownHUDView.SetRemainningTime
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x15088488
	// Params: [ Num(1) Size(0x4) ]
	void SetRemainningTime(float InRemainningTime);

	// Object: Function IrisWorld.RaidCountDownHUDView.BP_StartFinalCountDown
	// Flags: [Event|Public|BlueprintCallable|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(0) Size(0x0) ]
	void BP_StartFinalCountDown();

	// Object: Function IrisWorld.RaidCountDownHUDView.BP_SetTitle
	// Flags: [Event|Protected|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(0) Size(0x0) ]
	void BP_SetTitle();

	// Object: Function IrisWorld.RaidCountDownHUDView.BP_SetRemainningTime
	// Flags: [Event|Protected|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(0) Size(0x0) ]
	void BP_SetRemainningTime();

	// Object: Function IrisWorld.RaidCountDownHUDView.BP_SetLoopAnimationType
	// Flags: [Event|Public|BlueprintCallable|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(1) Size(0x4) ]
	void BP_SetLoopAnimationType(int32_t InLoopAnimationType);

	// Object: Function IrisWorld.RaidCountDownHUDView.BP_PlayCountAudio
	// Flags: [Event|Protected|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(1) Size(0x1) ]
	void BP_PlayCountAudio(uint8_t Strong);

	// Object: Function IrisWorld.RaidCountDownHUDView.BP_FadeOut
	// Flags: [Event|Public|BlueprintCallable|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(0) Size(0x0) ]
	void BP_FadeOut();

	// Object: Function IrisWorld.RaidCountDownHUDView.BP_FadeIn
	// Flags: [Event|Public|BlueprintCallable|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(0) Size(0x0) ]
	void BP_FadeIn();

	// Object: Function IrisWorld.RaidCountDownHUDView.BP_CountDownColorChanged
	// Flags: [Event|Protected|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(1) Size(0x1) ]
	void BP_CountDownColorChanged(uint8_t bIsChanged);
};

// Object: Class IrisWorld.RaidMainHUDView
// Size: 0xF08 (Inherited: 0x610)
struct URaidMainHUDView : ULuaUIBaseView
{
	DEFINE_UE_CLASS_HELPERS(URaidMainHUDView, "RaidMainHUDView")

	struct URaidMissionTargetItemView* MissionObjectiveClass; // 0x610(0x8)
	struct URaidPropItemView* ConditionPropClass; // 0x618(0x8)
	struct UWidgetSwitcher* HudTitleSwitcher; // 0x620(0x8)
	struct UButton* Btn_RaidProcess; // 0x628(0x8)
	struct UButton* Btn_RaidCondition; // 0x630(0x8)
	struct UUserWidget* Wbp_RaidReturn; // 0x638(0x8)
	struct UButton* Btn_RaidReturn; // 0x640(0x8)
	struct UButton* Btn_ExitRaid; // 0x648(0x8)
	struct UUserWidget* WBP_ExitRaid; // 0x650(0x8)
	struct UWidgetSwitcher* LeftPanelSwitcher; // 0x658(0x8)
	struct UTextBlock* Txt_RaidActionPlan; // 0x660(0x8)
	struct UScrollBox* ScrollBoxConditions; // 0x668(0x8)
	struct UTextBlock* Txt_NoConditon; // 0x670(0x8)
	struct URaidMissionItemView* Wbp_Mission1; // 0x678(0x8)
	struct URaidMissionItemView* Wbp_Mission2; // 0x680(0x8)
	struct URaidMissionItemView* Wbp_Mission3; // 0x688(0x8)
	struct URaidMissionItemView* Wbp_MissionFinal; // 0x690(0x8)
	struct UWidgetSwitcher* BottomPanelSwitcher; // 0x698(0x8)
	struct UTextBlock* Txt_RaidName; // 0x6A0(0x8)
	struct UTextBlock* Txt_RaidDesc; // 0x6A8(0x8)
	struct UVerticalBox* SpecialPanel; // 0x6B0(0x8)
	struct UTextBlock* Txt_SelectItemName; // 0x6B8(0x8)
	struct UTextBlock* Txt_SelectExInfo; // 0x6C0(0x8)
	struct UTextBlock* Txt_SelectItemDesc; // 0x6C8(0x8)
	struct UCanvasPanel* FontPannel; // 0x6D0(0x8)
	struct UTextBlock* Txt_NewsTitle; // 0x6D8(0x8)
	struct UTextBlock* Txt_NewsContent; // 0x6E0(0x8)
	struct UCanvasPanel* VideolPannel; // 0x6E8(0x8)
	struct UUserWidget* WBP_TimeLimit; // 0x6F0(0x8)
	struct UUserWidget* WBP_TimeLimit_Special; // 0x6F8(0x8)
	struct UTextBlock* TxtRaidTimeLeft; // 0x700(0x8)
	struct UTextBlock* TxtRaidTimeLeftSpecial; // 0x708(0x8)
	struct FName AudioAssetOpenRaidPanel; // 0x710(0x8)
	struct FName AudioAssetSelectMission; // 0x718(0x8)
	struct FName AudioAssetQuit; // 0x720(0x8)
	struct TArray<struct URaidMissionItemView*> MissionItemViews; // 0x728(0x10)
	struct TArray<struct URaidMissionTargetItemView*> MissionObjectiveItemView; // 0x738(0x10)
	struct TArray<struct URaidPropItemView*> ConditionPropViews; // 0x748(0x10)
	uint8_t Pad_0x758[0x7B0]; // 0x758(0x7B0)

	// Object: Function IrisWorld.RaidMainHUDView.ShowView
	// Flags: [Final|Native|Public]
	// Offset: 0x15088e18
	// Params: [ Num(0) Size(0x0) ]
	void ShowView();

	// Object: Function IrisWorld.RaidMainHUDView.PreviewRaidEntity
	// Flags: [Final|Native|Public|HasOutParms]
	// Offset: 0x15088cd4
	// Params: [ Num(1) Size(0x148) ]
	void PreviewRaidEntity(const struct FRaidEntityRow& InRaidEntity);

	// Object: Function IrisWorld.RaidMainHUDView.PlayUIAudioEvent
	// Flags: [Native|Event|Public|BlueprintEvent]
	// Offset: 0x15088c28
	// Params: [ Num(1) Size(0x8) ]
	void PlayUIAudioEvent(struct FName AudioEventName);

	// Object: Function IrisWorld.RaidMainHUDView.OnRaidStageChanged
	// Flags: [Final|Native|Protected]
	// Offset: 0x15088b84
	// Params: [ Num(1) Size(0x1) ]
	void OnRaidStageChanged(ERaidStage NewStage);

	// Object: Function IrisWorld.RaidMainHUDView.OnMissionSelected
	// Flags: [Final|Native|Protected]
	// Offset: 0x15088ae0
	// Params: [ Num(1) Size(0x8) ]
	void OnMissionSelected(struct URaidMissionItemView* MissionItem);

	// Object: Function IrisWorld.RaidMainHUDView.OnMissionObjectiveUpdate
	// Flags: [Final|Native|Protected]
	// Offset: 0x15088acc
	// Params: [ Num(0) Size(0x0) ]
	void OnMissionObjectiveUpdate();

	// Object: Function IrisWorld.RaidMainHUDView.OnMissionCountdown
	// Flags: [Final|Native|Protected]
	// Offset: 0x15088ab8
	// Params: [ Num(0) Size(0x0) ]
	void OnMissionCountdown();

	// Object: Function IrisWorld.RaidMainHUDView.OnInit
	// Flags: [Final|Native|Public]
	// Offset: 0x15088aa4
	// Params: [ Num(0) Size(0x0) ]
	void OnInit();

	// Object: Function IrisWorld.RaidMainHUDView.OnGamePlayModeChanged
	// Flags: [Final|Native|Protected]
	// Offset: 0x15088a00
	// Params: [ Num(1) Size(0x1) ]
	void OnGamePlayModeChanged(EDFMGamePlayMode NewGamePlayMode);

	// Object: Function IrisWorld.RaidMainHUDView.OnDestroy
	// Flags: [Final|Native|Public]
	// Offset: 0x150889ec
	// Params: [ Num(0) Size(0x0) ]
	void OnDestroy();

	// Object: Function IrisWorld.RaidMainHUDView.OnClickedRaidReturn
	// Flags: [Final|Native|Protected]
	// Offset: 0x150889d8
	// Params: [ Num(0) Size(0x0) ]
	void OnClickedRaidReturn();

	// Object: Function IrisWorld.RaidMainHUDView.OnClickedRaidProcess
	// Flags: [Final|Native|Protected]
	// Offset: 0x150889c4
	// Params: [ Num(0) Size(0x0) ]
	void OnClickedRaidProcess();

	// Object: Function IrisWorld.RaidMainHUDView.OnClickedRaidCondition
	// Flags: [Final|Native|Protected]
	// Offset: 0x150889b0
	// Params: [ Num(0) Size(0x0) ]
	void OnClickedRaidCondition();

	// Object: Function IrisWorld.RaidMainHUDView.OnClickedExitRaid
	// Flags: [Final|Native|Protected]
	// Offset: 0x1508899c
	// Params: [ Num(0) Size(0x0) ]
	void OnClickedExitRaid();

	// Object: Function IrisWorld.RaidMainHUDView.OnBuyConditionProp
	// Flags: [Final|Native|Protected]
	// Offset: 0x150888b4
	// Params: [ Num(2) Size(0x9) ]
	void OnBuyConditionProp(uint64_t PropId, uint8_t bBuy);

	// Object: Function IrisWorld.RaidMainHUDView.HideView
	// Flags: [Native|Event|Public|BlueprintEvent]
	// Offset: 0x15088898
	// Params: [ Num(0) Size(0x0) ]
	void HideView();

	// Object: Function IrisWorld.RaidMainHUDView.BPUpdateTimeLeftTxtColor
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(1) Size(0x1) ]
	void BPUpdateTimeLeftTxtColor(uint8_t bRed);
};

// Object: Class IrisWorld.RaidMainSideView
// Size: 0x658 (Inherited: 0x610)
struct URaidMainSideView : ULuaUIBaseView
{
	DEFINE_UE_CLASS_HELPERS(URaidMainSideView, "RaidMainSideView")

	struct UHorizontalBox* PanelVoteFlag; // 0x610(0x8)
	struct UUserWidget* Btn_PurchaseComplete; // 0x618(0x8)
	struct UTextBlock* Txt_PurchasedNum; // 0x620(0x8)
	struct UCanvasPanel* Panel_AllStaffPurchased; // 0x628(0x8)
	struct URichTextBlock* RichText; // 0x630(0x8)
	uint8_t Pad_0x638[0x10]; // 0x638(0x10)
	struct TArray<struct UPlayerVoteItem*> PlayerVoteItems; // 0x648(0x10)

	// Object: Function IrisWorld.RaidMainSideView.OnInit
	// Flags: [Final|Native|Public]
	// Offset: 0x1508b3f8
	// Params: [ Num(0) Size(0x0) ]
	void OnInit();

	// Object: Function IrisWorld.RaidMainSideView.OnClickedConfirm
	// Flags: [Final|Native|Protected]
	// Offset: 0x1508b3e4
	// Params: [ Num(0) Size(0x0) ]
	void OnClickedConfirm();

	// Object: Function IrisWorld.RaidMainSideView.InitWidget
	// Flags: [Final|Native|Public]
	// Offset: 0x1508b3d0
	// Params: [ Num(0) Size(0x0) ]
	void InitWidget();
};

// Object: Class IrisWorld.RaidMapHUDController
// Size: 0x4F0 (Inherited: 0x2C0)
struct URaidMapHUDController : UMapBaseHUDController
{
	DEFINE_UE_CLASS_HELPERS(URaidMapHUDController, "RaidMapHUDController")

	struct TArray<struct URaidMapMarkerIconHUDController*> AvailableEnemyMarkControllerArr; // 0x2C0(0x10)
	struct TArray<struct URaidMapMarkerIconHUDController*> UsingEnemyMarkControllerArr; // 0x2D0(0x10)
	int32_t MaxNumEnemyDisplayed; // 0x2E0(0x4)
	int32_t MaxMarkbleEnemyDistance; // 0x2E4(0x4)
	int32_t EnemyDisappearDistance; // 0x2E8(0x4)
	float CheckEnemyLocationTimeGap; // 0x2EC(0x4)
	uint8_t Pad_0x2F0[0x8]; // 0x2F0(0x8)
	struct TMap<int64_t, struct AActor*> EnemyMap; // 0x2F8(0x50)
	struct TMap<int64_t, struct FVector> EnemySpottedLocationMap; // 0x348(0x50)
	struct TMap<int64_t, struct FVector> EnemyOnFireLocationMap; // 0x398(0x50)
	uint8_t Pad_0x3E8[0x10]; // 0x3E8(0x10)
	struct TSet<struct AActor*> RegisteredMapIconActors; // 0x3F8(0x50)
	struct TMap<struct ADFMCharacter*, float> AIAlertCache; // 0x448(0x50)
	struct TMap<struct ADFMCharacter*, float> PlayerAlertCache; // 0x498(0x50)
	float AIAlertProtectTime; // 0x4E8(0x4)
	float PlayerAlertTrackTime; // 0x4EC(0x4)

	// Object: Function IrisWorld.RaidMapHUDController.UpdateEnemyStatus
	// Flags: [Final|Native|Protected]
	// Offset: 0x1508b934
	// Params: [ Num(1) Size(0x4) ]
	void UpdateEnemyStatus(float Delta);

	// Object: Function IrisWorld.RaidMapHUDController.OnHealthDamaged
	// Flags: [Final|Native|Protected|HasOutParms]
	// Offset: 0x1508b7a0
	// Params: [ Num(2) Size(0xD8) ]
	void OnHealthDamaged(float Damage, const struct FTakeHitInfo& TakeHitInfo);

	// Object: Function IrisWorld.RaidMapHUDController.OnGameHudStateChanged
	// Flags: [Final|Native|Protected]
	// Offset: 0x1508b78c
	// Params: [ Num(0) Size(0x0) ]
	void OnGameHudStateChanged();

	// Object: Function IrisWorld.RaidMapHUDController.OnEnemySpotted
	// Flags: [Final|Native|Protected]
	// Offset: 0x1508b6e8
	// Params: [ Num(1) Size(0x8) ]
	void OnEnemySpotted(struct AActor* SpottedEnemy);

	// Object: Function IrisWorld.RaidMapHUDController.OnAIFightAndFocusOnMe
	// Flags: [Final|Native|Protected|HasOutParms]
	// Offset: 0x1508b574
	// Params: [ Num(4) Size(0x18) ]
	void OnAIFightAndFocusOnMe(struct ADFMCharacter* ACharacter, EAIMsgType MsgType, uint8_t bAIFocusOnMe, const struct FAIMsgExtendInfo& AIMsgExtendInfo);

	// Object: Function IrisWorld.RaidMapHUDController.EnemyIsOnPlayerView
	// Flags: [Final|Native|Protected]
	// Offset: 0x1508b4c4
	// Params: [ Num(2) Size(0x9) ]
	uint8_t EnemyIsOnPlayerView(struct AActor* SpottedEnemy);
};

// Object: Class IrisWorld.RaidMapMarkerIconHUDView
// Size: 0x500 (Inherited: 0x468)
struct URaidMapMarkerIconHUDView : UMapItemHUDView
{
	DEFINE_UE_CLASS_HELPERS(URaidMapMarkerIconHUDView, "RaidMapMarkerIconHUDView")

	struct UUserWidget* MainView; // 0x468(0x8)
	struct UImage* PublicItem; // 0x470(0x8)
	struct UImage* ArrowRotation; // 0x478(0x8)
	uint8_t bDestroyArrowRotation : 1; // 0x480(0x1), Mask(0x1)
	uint8_t BitPad_0x480_1 : 7; // 0x480(0x1)
	uint8_t Pad_0x481[0x7]; // 0x481(0x7)
	struct UPaperSprite* ValkyraeImg; // 0x488(0x8)
	struct UPaperSprite* TrainImg; // 0x490(0x8)
	struct UPaperSprite* LiLiImg; // 0x498(0x8)
	struct UPaperSprite* EnemyVehicleImg; // 0x4A0(0x8)
	struct UPaperSprite* ArmoredVehicleImg; // 0x4A8(0x8)
	struct UPaperSprite* TankImg; // 0x4B0(0x8)
	struct UPaperSprite* EnemyImg; // 0x4B8(0x8)
	struct FVector2D ValkyraeImgSize; // 0x4C0(0x8)
	struct FVector2D TrainImgSize; // 0x4C8(0x8)
	struct FVector2D LiLiImgSize; // 0x4D0(0x8)
	struct FVector2D EnemyVehicleImgSize; // 0x4D8(0x8)
	struct FVector2D ArmoredVehicleImgSize; // 0x4E0(0x8)
	struct FVector2D TankImgSize; // 0x4E8(0x8)
	struct FVector2D EnemyImgSize; // 0x4F0(0x8)
	ERaidMapMarkerType MarkerType; // 0x4F8(0x1)
	uint8_t bIsMatchSize : 1; // 0x4F9(0x1), Mask(0x1)
	uint8_t BitPad_0x4F9_1 : 7; // 0x4F9(0x1)
	uint8_t Pad_0x4FA[0x2]; // 0x4FA(0x2)
	float ScaleInMiniMap; // 0x4FC(0x4)
};

// Object: Class IrisWorld.RaidMapMarkerIconHUDController
// Size: 0x2B0 (Inherited: 0x2B0)
struct URaidMapMarkerIconHUDController : UMapIconViewController
{
	DEFINE_UE_CLASS_HELPERS(URaidMapMarkerIconHUDController, "RaidMapMarkerIconHUDController")

	ERaidMapMarkerType MarkerType; // 0x2A1(0x1)
	uint64_t PlayerUin; // 0x2A8(0x8)
};

// Object: Class IrisWorld.RaidMissionCompleteView
// Size: 0x408 (Inherited: 0x3F0)
struct URaidMissionCompleteView : UBaseUIView
{
	DEFINE_UE_CLASS_HELPERS(URaidMissionCompleteView, "RaidMissionCompleteView")

	struct UWrapBox* MissionRewardBox; // 0x3F0(0x8)
	struct UDFMTouchEventPanel* TouchEventPanel; // 0x3F8(0x8)
	uint8_t Pad_0x400[0x8]; // 0x400(0x8)

	// Object: Function IrisWorld.RaidMissionCompleteView.OnTouchEvent_Clicked
	// Flags: [Final|Native|Protected]
	// Offset: 0x1508ba90
	// Params: [ Num(0) Size(0x0) ]
	void OnTouchEvent_Clicked();
};

// Object: Class IrisWorld.RaidMissionItemView
// Size: 0x7D0 (Inherited: 0x3F0)
struct URaidMissionItemView : UBaseUIView
{
	DEFINE_UE_CLASS_HELPERS(URaidMissionItemView, "RaidMissionItemView")

	uint8_t Pad_0x3F0[0x10]; // 0x3F0(0x10)
	struct UImage* Img_MissionBg; // 0x400(0x8)
	struct UTextBlock* Txt_MissionExtraInfo; // 0x408(0x8)
	struct UTextBlock* Txt_MissionName; // 0x410(0x8)
	struct UCanvasPanel* Panel_Condition; // 0x418(0x8)
	struct UCanvasPanel* Panel_Select; // 0x420(0x8)
	struct UButton* Btn_Mission; // 0x428(0x8)
	struct UHorizontalBox* PanelVoteFlag; // 0x430(0x8)
	struct UCanvasPanel* Panel_MissionComplete; // 0x438(0x8)
	struct UTextBlock* Txt_Vote; // 0x440(0x8)
	uint8_t MissionBgState; // 0x448(0x1)
	uint8_t Pad_0x449[0x7]; // 0x449(0x7)
	struct TArray<struct UPlayerVoteItem*> PlayerVoteItems; // 0x450(0x10)
	uint8_t Pad_0x460[0x370]; // 0x460(0x370)

	// Object: Function IrisWorld.RaidMissionItemView.OnRaidMissionSettlement
	// Flags: [Final|Native|Public]
	// Offset: 0x1508bac0
	// Params: [ Num(2) Size(0x8) ]
	void OnRaidMissionSettlement(int32_t RaidID, int32_t QuestID);

	// Object: Function IrisWorld.RaidMissionItemView.OnClickedMission
	// Flags: [Final|Native|Protected]
	// Offset: 0x1508baac
	// Params: [ Num(0) Size(0x0) ]
	void OnClickedMission();

	// Object: Function IrisWorld.RaidMissionItemView.BP_SwitchMissionBgState
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(0) Size(0x0) ]
	void BP_SwitchMissionBgState();
};

// Object: Class IrisWorld.RaidMissionTargetItemView
// Size: 0x420 (Inherited: 0x3F0)
struct URaidMissionTargetItemView : UBaseUIView
{
	DEFINE_UE_CLASS_HELPERS(URaidMissionTargetItemView, "RaidMissionTargetItemView")

	uint8_t MissionStateIndex; // 0x3E9(0x1)
	uint8_t Pad_0x3F1[0x1F]; // 0x3F1(0x1F)
	struct UTextBlock* Txt_MissionObjectiveName; // 0x410(0x8)
	struct UTextBlock* Txt_ObjectiveProgress; // 0x418(0x8)

	// Object: Function IrisWorld.RaidMissionTargetItemView.OnMissionStateChanged
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(0) Size(0x0) ]
	void OnMissionStateChanged();
};

// Object: Class IrisWorld.RaidPreviewHUDView
// Size: 0x858 (Inherited: 0x610)
struct URaidPreviewHUDView : ULuaUIBaseView
{
	DEFINE_UE_CLASS_HELPERS(URaidPreviewHUDView, "RaidPreviewHUDView")

	struct UUserWidget* Wbp_ReturnToWorld; // 0x610(0x8)
	struct UUserWidget* Wbp_StartRaid; // 0x618(0x8)
	struct UButton* Btn_ReqtureToWorld; // 0x620(0x8)
	struct UButton* Btn_StartRaid; // 0x628(0x8)
	struct UTextBlock* Txt_RaidName; // 0x630(0x8)
	struct UTextBlock* Txt_RaidDesc; // 0x638(0x8)
	struct UTextBlock* Txt_EXP; // 0x640(0x8)
	struct UButton* Btn_RaidDetail; // 0x648(0x8)
	struct UUserWidget* Btn_EasyMode; // 0x650(0x8)
	struct UImage* Img_EasyModeFlag; // 0x658(0x8)
	struct UUserWidget* Btn_NormalMode; // 0x660(0x8)
	struct UImage* Img_NormalModeFlag; // 0x668(0x8)
	struct UUserWidget* Btn_HardMode; // 0x670(0x8)
	struct UImage* Img_HardModeFlag; // 0x678(0x8)
	struct UCheckbox* CheckBox_StartMatch; // 0x680(0x8)
	struct UCheckbox* CheckBoxEasyMode; // 0x688(0x8)
	struct UCheckbox* CheckBoxNormalMode; // 0x690(0x8)
	struct UCheckbox* CheckBoxHardMode; // 0x698(0x8)
	uint8_t Pad_0x6A0[0x1B8]; // 0x6A0(0x1B8)

	// Object: Function IrisWorld.RaidPreviewHUDView.StartMatchTeammate
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(2) Size(0x8) ]
	void StartMatchTeammate(int32_t RaidID, int32_t SubMode);

	// Object: Function IrisWorld.RaidPreviewHUDView.ShowView
	// Flags: [Final|Native|Public]
	// Offset: 0x1508c074
	// Params: [ Num(0) Size(0x0) ]
	void ShowView();

	// Object: Function IrisWorld.RaidPreviewHUDView.SetPreviewRaidID
	// Flags: [Final|Native|Public]
	// Offset: 0x1508bfd0
	// Params: [ Num(1) Size(0x4) ]
	void SetPreviewRaidID(uint32_t RaidID);

	// Object: Function IrisWorld.RaidPreviewHUDView.OnStartMatchCheckStateChanged
	// Flags: [Final|Native|Protected]
	// Offset: 0x1508bf24
	// Params: [ Num(1) Size(0x1) ]
	void OnStartMatchCheckStateChanged(uint8_t bIsChecked);

	// Object: Function IrisWorld.RaidPreviewHUDView.OnNormalModeCheckStateChanged
	// Flags: [Final|Native|Protected]
	// Offset: 0x1508be78
	// Params: [ Num(1) Size(0x1) ]
	void OnNormalModeCheckStateChanged(uint8_t bIsChecked);

	// Object: Function IrisWorld.RaidPreviewHUDView.OnInit
	// Flags: [Final|Native|Public]
	// Offset: 0x1508be64
	// Params: [ Num(0) Size(0x0) ]
	void OnInit();

	// Object: Function IrisWorld.RaidPreviewHUDView.OnHardModeCheckStateChanged
	// Flags: [Final|Native|Protected]
	// Offset: 0x1508bdb8
	// Params: [ Num(1) Size(0x1) ]
	void OnHardModeCheckStateChanged(uint8_t bIsChecked);

	// Object: Function IrisWorld.RaidPreviewHUDView.OnEasyModeCheckStateChanged
	// Flags: [Final|Native|Protected]
	// Offset: 0x1508bd0c
	// Params: [ Num(1) Size(0x1) ]
	void OnEasyModeCheckStateChanged(uint8_t bIsChecked);

	// Object: Function IrisWorld.RaidPreviewHUDView.OnDestroy
	// Flags: [Final|Native|Public]
	// Offset: 0x1508bcf8
	// Params: [ Num(0) Size(0x0) ]
	void OnDestroy();

	// Object: Function IrisWorld.RaidPreviewHUDView.OnClickedStartRaid
	// Flags: [Final|Native|Protected]
	// Offset: 0x1508bce4
	// Params: [ Num(0) Size(0x0) ]
	void OnClickedStartRaid();

	// Object: Function IrisWorld.RaidPreviewHUDView.OnClickedReturnToWorld
	// Flags: [Final|Native|Protected]
	// Offset: 0x1508bcd0
	// Params: [ Num(0) Size(0x0) ]
	void OnClickedReturnToWorld();

	// Object: Function IrisWorld.RaidPreviewHUDView.OnClickedRaidDetail
	// Flags: [Native|Event|Protected|BlueprintEvent]
	// Offset: 0x1508bcb4
	// Params: [ Num(0) Size(0x0) ]
	void OnClickedRaidDetail();

	// Object: Function IrisWorld.RaidPreviewHUDView.HideView
	// Flags: [Native|Event|Public|BlueprintEvent]
	// Offset: 0x1508bc98
	// Params: [ Num(0) Size(0x0) ]
	void HideView();

	// Object: Function IrisWorld.RaidPreviewHUDView.GetPreviewRaidEntity
	// Flags: [Final|Native|Protected]
	// Offset: 0x1508bc20
	// Params: [ Num(1) Size(0x148) ]
	struct FRaidEntityRow GetPreviewRaidEntity();
};

// Object: Class IrisWorld.RaidPropItemView
// Size: 0x1620 (Inherited: 0x610)
struct URaidPropItemView : ULuaUIBaseView
{
	DEFINE_UE_CLASS_HELPERS(URaidPropItemView, "RaidPropItemView")

	struct UDFMImage* Img_Prop; // 0x610(0x8)
	struct UTextBlock* Txt_PropName; // 0x618(0x8)
	struct UTextBlock* Txt_Amount; // 0x620(0x8)
	struct UTextBlock* Txt_InventoryNum; // 0x628(0x8)
	struct UHorizontalBox* Box_Price; // 0x630(0x8)
	struct UTextBlock* Txt_Price; // 0x638(0x8)
	struct UImage* Img_Buy; // 0x640(0x8)
	struct UHorizontalBox* PanelVoteFlag; // 0x648(0x8)
	struct UUserWidget* Btn_Purchase; // 0x650(0x8)
	struct FMulticastInlineDelegate OnSelectConditionProp; // 0x658(0x10)
	struct FMulticastInlineDelegate OnPurchaseConditionProp; // 0x668(0x10)
	uint8_t Pad_0x678[0x10]; // 0x678(0x10)
	struct TArray<struct UPlayerVoteItem*> PlayerVoteItems; // 0x688(0x10)
	uint8_t PropItemState; // 0x698(0x1)
	uint8_t Pad_0x699[0xF87]; // 0x699(0xF87)

	// Object: Function IrisWorld.RaidPropItemView.OnPropItemStateChange
	// Flags: [Event|Protected|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(0) Size(0x0) ]
	void OnPropItemStateChange();

	// Object: Function IrisWorld.RaidPropItemView.OnClickedPurchaseBtn
	// Flags: [Final|Native|Protected]
	// Offset: 0x1508c0c0
	// Params: [ Num(0) Size(0x0) ]
	void OnClickedPurchaseBtn();
};

// Object: Class IrisWorld.RaidScreenMarkerView
// Size: 0x460 (Inherited: 0x3F0)
struct URaidScreenMarkerView : UCommonHUDView
{
	DEFINE_UE_CLASS_HELPERS(URaidScreenMarkerView, "RaidScreenMarkerView")

	uint8_t bNeedShowDistance : 1; // 0x3EA(0x1), Mask(0x1)
	struct UMaterialInstanceDynamic* CircleProgressBarMID; // 0x3F0(0x8)
	struct UImage* Image_78; // 0x3F8(0x8)
	struct UImage* Image_315; // 0x400(0x8)
	struct UImage* IconImage; // 0x408(0x8)
	struct UImage* Intro; // 0x410(0x8)
	struct UTextBlock* DistText; // 0x418(0x8)
	struct UTextBlock* UpDistText; // 0x420(0x8)
	struct UImage* Image_Line; // 0x428(0x8)
	struct UCanvasPanel* DFCanvasPanel_0; // 0x430(0x8)
	struct UProgressBar* ProgressBar_103; // 0x438(0x8)
	struct UCanvasPanel* ArrowRotation; // 0x440(0x8)
	struct FColor ProgressColor_H; // 0x448(0x4)
	struct FColor ProgressColor_M; // 0x44C(0x4)
	struct FColor ProgressColor_L; // 0x450(0x4)
	struct FVector2D AnchorCenterOffest; // 0x454(0x8)
	uint8_t BitPad_0x45C_1 : 7; // 0x45C(0x1)
	uint8_t Pad_0x45D[0x3]; // 0x45D(0x3)

	// Object: Function IrisWorld.RaidScreenMarkerView.ShowLine
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x1508c590
	// Params: [ Num(1) Size(0x1) ]
	void ShowLine(uint8_t bEnableShow);

	// Object: Function IrisWorld.RaidScreenMarkerView.SetTargetMarkerAppearance
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x1508c57c
	// Params: [ Num(0) Size(0x0) ]
	void SetTargetMarkerAppearance();

	// Object: Function IrisWorld.RaidScreenMarkerView.SetTargetInteractMarkerAppearance
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x1508c568
	// Params: [ Num(0) Size(0x0) ]
	void SetTargetInteractMarkerAppearance();

	// Object: Function IrisWorld.RaidScreenMarkerView.SetProtectMarkerAppearance
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x1508c478
	// Params: [ Num(2) Size(0x2) ]
	void SetProtectMarkerAppearance(uint8_t bIsAim, uint8_t bNeedShowHp);

	// Object: Function IrisWorld.RaidScreenMarkerView.SetNPCTeamMateMarkerAppearance
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x1508c464
	// Params: [ Num(0) Size(0x0) ]
	void SetNPCTeamMateMarkerAppearance();

	// Object: Function IrisWorld.RaidScreenMarkerView.SetInteractMarkerCircleProgress
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x1508c3c0
	// Params: [ Num(1) Size(0x4) ]
	void SetInteractMarkerCircleProgress(float InProgress);

	// Object: Function IrisWorld.RaidScreenMarkerView.SetInteractMarkerAppearance
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x1508c2d8
	// Params: [ Num(2) Size(0x2) ]
	void SetInteractMarkerAppearance(EGPQuestActionMarkerType InQuestActionMarkerType, uint8_t bIsAim);

	// Object: Function IrisWorld.RaidScreenMarkerView.SetDestroyMarkerAppearanceWithHPBar
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x1508c22c
	// Params: [ Num(1) Size(0x1) ]
	void SetDestroyMarkerAppearanceWithHPBar(uint8_t bIsAim);

	// Object: Function IrisWorld.RaidScreenMarkerView.SetDestroyMarkerAppearance
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x1508c180
	// Params: [ Num(1) Size(0x1) ]
	void SetDestroyMarkerAppearance(uint8_t bIsAim);

	// Object: Function IrisWorld.RaidScreenMarkerView.SetCommomProgressHeathPercent
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x1508c0dc
	// Params: [ Num(1) Size(0x4) ]
	void SetCommomProgressHeathPercent(float Percent);
};

// Object: Class IrisWorld.RaidStageRemainTimeView
// Size: 0x408 (Inherited: 0x3F0)
struct URaidStageRemainTimeView : UBaseUIView
{
	DEFINE_UE_CLASS_HELPERS(URaidStageRemainTimeView, "RaidStageRemainTimeView")

	uint8_t Pad_0x3F0[0x8]; // 0x3F0(0x8)
	struct UTextBlock* CountingTimeText; // 0x3F8(0x8)
	struct UTextBlock* RaidNameText; // 0x400(0x8)

	// Object: Function IrisWorld.RaidStageRemainTimeView.SetRaidGameDifficultLevelText
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x1508c73c
	// Params: [ Num(0) Size(0x0) ]
	void SetRaidGameDifficultLevelText();

	// Object: Function IrisWorld.RaidStageRemainTimeView.OnClientRaidStageChanged
	// Flags: [Final|Native|Public]
	// Offset: 0x1508c698
	// Params: [ Num(1) Size(0x1) ]
	void OnClientRaidStageChanged(ERaidStage NewStage);
};

// Object: Class IrisWorld.RaidTeamHUDController
// Size: 0xC0 (Inherited: 0xB8)
struct URaidTeamHUDController : UTeamHUDControllerBase
{
	DEFINE_UE_CLASS_HELPERS(URaidTeamHUDController, "RaidTeamHUDController")

	uint8_t bRPGShow : 1; // 0xB8(0x1), Mask(0x1)
	uint8_t BitPad_0xB8_1 : 7; // 0xB8(0x1)
	uint8_t Pad_0xB9[0x7]; // 0xB9(0x7)

	// Object: Function IrisWorld.RaidTeamHUDController.OnHurtCheckBtnStateChanged
	// Flags: [Final|Native|Public]
	// Offset: 0x1508c758
	// Params: [ Num(1) Size(0x1) ]
	void OnHurtCheckBtnStateChanged(uint8_t bIsChecked);
};

// Object: Class IrisWorld.PlayerVoteItem
// Size: 0x318 (Inherited: 0x2F8)
struct UPlayerVoteItem : UUserWidget
{
	DEFINE_UE_CLASS_HELPERS(UPlayerVoteItem, "PlayerVoteItem")

	uint8_t Pad_0x2F8[0xC]; // 0x2F8(0xC)
	int32_t PlayerIndex; // 0x304(0x4)
	uint8_t bTeamLeader : 1; // 0x308(0x1), Mask(0x1)
	uint8_t BitPad_0x308_1 : 7; // 0x308(0x1)
	uint8_t Pad_0x309[0x7]; // 0x309(0x7)
	struct UImage* Img_Ready; // 0x310(0x8)

	// Object: Function IrisWorld.PlayerVoteItem.BPOnUpdatePlayer
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(0) Size(0x0) ]
	void BPOnUpdatePlayer();
};

// Object: Class IrisWorld.RaidVoteItemView
// Size: 0x660 (Inherited: 0x3F0)
struct URaidVoteItemView : UBaseUIView
{
	DEFINE_UE_CLASS_HELPERS(URaidVoteItemView, "RaidVoteItemView")

	struct UTextBlock* Txt_MissionName; // 0x3F0(0x8)
	struct UTextBlock* Txt_VoteCount; // 0x3F8(0x8)
	struct UProgressBar* ProgressVote; // 0x400(0x8)
	struct UHorizontalBox* PanelPlayerFlag; // 0x408(0x8)
	uint8_t Pad_0x410[0x218]; // 0x410(0x218)
	struct TArray<struct UPlayerVoteItem*> PlayerVoteItems; // 0x628(0x10)
	uint8_t Pad_0x638[0x28]; // 0x638(0x28)

	// Object: Function IrisWorld.RaidVoteItemView.UpdateVoteInfo
	// Flags: [Final|Native|Public|HasOutParms]
	// Offset: 0x1508c9a8
	// Params: [ Num(1) Size(0x10) ]
	void UpdateVoteInfo(const struct TArray<struct FRaidVoteInfo>& RaidVoteInfo);

	// Object: Function IrisWorld.RaidVoteItemView.UpdateView
	// Flags: [Final|Native|Public|HasOutParms]
	// Offset: 0x1508c83c
	// Params: [ Num(1) Size(0x210) ]
	void UpdateView(const struct FQuestRow& InQuestRow);
};

// Object: Class IrisWorld.RaidVoteView
// Size: 0xA80 (Inherited: 0x610)
struct URaidVoteView : ULuaUIBaseView
{
	DEFINE_UE_CLASS_HELPERS(URaidVoteView, "RaidVoteView")

	struct UProgressBar* ProgressCountDown; // 0x610(0x8)
	struct UTextBlock* Txt_CoundDown; // 0x618(0x8)
	struct URaidMissionItemView* Wbp_Mission1; // 0x620(0x8)
	struct URaidMissionItemView* Wbp_Mission2; // 0x628(0x8)
	struct URaidMissionItemView* Wbp_Mission3; // 0x630(0x8)
	struct URaidMissionItemView* Wbp_MissionFinal; // 0x638(0x8)
	struct UTextBlock* Txt_RaidName; // 0x640(0x8)
	struct UTextBlock* Txt_RaidDesc; // 0x648(0x8)
	struct URaidMainSideView* RaidMainSideView; // 0x650(0x8)
	struct FName AudioAssetOpenRaidPanel; // 0x658(0x8)
	struct FName AudioAssetSelectMission; // 0x660(0x8)
	struct FName AudioAssetConfirm; // 0x668(0x8)
	struct FName AudioAssetCountDown; // 0x670(0x8)
	struct TArray<struct URaidMissionItemView*> MissionItemViews; // 0x678(0x10)
	uint8_t Pad_0x688[0x3F8]; // 0x688(0x3F8)

	// Object: Function IrisWorld.RaidVoteView.UpdateVoteInfo
	// Flags: [Final|Native|Protected]
	// Offset: 0x1508cdbc
	// Params: [ Num(1) Size(0x10) ]
	void UpdateVoteInfo(struct TArray<struct FRaidVoteInfo> RaidVoteInfo);

	// Object: Function IrisWorld.RaidVoteView.ShowView
	// Flags: [Final|Native|Public]
	// Offset: 0x1508cda8
	// Params: [ Num(0) Size(0x0) ]
	void ShowView();

	// Object: Function IrisWorld.RaidVoteView.PlayUIAudioEvent
	// Flags: [Native|Event|Public|BlueprintEvent]
	// Offset: 0x1508ccb8
	// Params: [ Num(2) Size(0x9) ]
	void PlayUIAudioEvent(struct FName AudioEventName, uint8_t bPlay);

	// Object: Function IrisWorld.RaidVoteView.OnVoteCountDown
	// Flags: [Final|Native|Protected]
	// Offset: 0x1508cca4
	// Params: [ Num(0) Size(0x0) ]
	void OnVoteCountDown();

	// Object: Function IrisWorld.RaidVoteView.OnRaidStageChanged
	// Flags: [Final|Native|Protected]
	// Offset: 0x1508cc00
	// Params: [ Num(1) Size(0x1) ]
	void OnRaidStageChanged(ERaidStage NewStage);

	// Object: Function IrisWorld.RaidVoteView.OnMissionSelected
	// Flags: [Final|Native|Protected]
	// Offset: 0x1508cb5c
	// Params: [ Num(1) Size(0x8) ]
	void OnMissionSelected(struct URaidMissionItemView* MissionItem);

	// Object: Function IrisWorld.RaidVoteView.OnInit
	// Flags: [Final|Native|Public]
	// Offset: 0x1508cb48
	// Params: [ Num(0) Size(0x0) ]
	void OnInit();

	// Object: Function IrisWorld.RaidVoteView.OnDestroy
	// Flags: [Final|Native|Public]
	// Offset: 0x1508cb34
	// Params: [ Num(0) Size(0x0) ]
	void OnDestroy();

	// Object: Function IrisWorld.RaidVoteView.OnDecisionCountDown
	// Flags: [Final|Native|Protected]
	// Offset: 0x1508cb20
	// Params: [ Num(0) Size(0x0) ]
	void OnDecisionCountDown();

	// Object: Function IrisWorld.RaidVoteView.OnClickdeConfirmButton
	// Flags: [Final|Native|Protected]
	// Offset: 0x1508cb0c
	// Params: [ Num(0) Size(0x0) ]
	void OnClickdeConfirmButton();

	// Object: Function IrisWorld.RaidVoteView.InitWidget
	// Flags: [Final|Native|Public]
	// Offset: 0x1508caf8
	// Params: [ Num(0) Size(0x0) ]
	void InitWidget();

	// Object: Function IrisWorld.RaidVoteView.HideView
	// Flags: [Native|Event|Public|BlueprintEvent]
	// Offset: 0x1508cadc
	// Params: [ Num(0) Size(0x0) ]
	void HideView();
};

// Object: Class IrisWorld.RedAlertHUDView
// Size: 0x3F0 (Inherited: 0x3F0)
struct URedAlertHUDView : UBaseUIView
{
	DEFINE_UE_CLASS_HELPERS(URedAlertHUDView, "RedAlertHUDView")

	// Object: Function IrisWorld.RedAlertHUDView.GetRedAlertEndtimestamp
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x1508eb50
	// Params: [ Num(1) Size(0x4) ]
	float GetRedAlertEndtimestamp();
};

// Object: Class IrisWorld.SafeHouseLevelSubSys
// Size: 0x378 (Inherited: 0x370)
struct ASafeHouseLevelSubSys : ALevelSubsystem
{
	DEFINE_UE_CLASS_HELPERS(ASafeHouseLevelSubSys, "SafeHouseLevelSubSys")

	uint8_t bInSafeHouseStage : 1; // 0x370(0x1), Mask(0x1)
	uint8_t BitPad_0x370_1 : 7; // 0x370(0x1)
	uint8_t Pad_0x371[0x7]; // 0x371(0x7)

	// Object: Function IrisWorld.SafeHouseLevelSubSys.Get
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x1508eb8c
	// Params: [ Num(2) Size(0x10) ]
	static struct ASafeHouseLevelSubSys* Get(struct UWorld* WorldContext);
};

// Object: Class IrisWorld.SeamlessTravelTestView
// Size: 0x310 (Inherited: 0x2F8)
struct USeamlessTravelTestView : UUserWidget
{
	DEFINE_UE_CLASS_HELPERS(USeamlessTravelTestView, "SeamlessTravelTestView")

	uint8_t bAutoSwitchPlayer : 1; // 0x2F8(0x1), Mask(0x1)
	uint8_t BitPad_0x2F8_1 : 7; // 0x2F8(0x1)
	uint8_t bInSeamlessTravel : 1; // 0x2F9(0x1), Mask(0x1)
	uint8_t BitPad_0x2F9_1 : 7; // 0x2F9(0x1)
	uint8_t Pad_0x2FA[0x2]; // 0x2FA(0x2)
	float DelayTime; // 0x2FC(0x4)
	uint8_t Pad_0x300[0x10]; // 0x300(0x10)

	// Object: Function IrisWorld.SeamlessTravelTestView.OnSeamlessTravelEnd
	// Flags: [Event|Protected|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(0) Size(0x0) ]
	void OnSeamlessTravelEnd();

	// Object: Function IrisWorld.SeamlessTravelTestView.OnPostConnectDS
	// Flags: [Final|Native|Protected]
	// Offset: 0x1508ed00
	// Params: [ Num(1) Size(0x8) ]
	void OnPostConnectDS(struct UNetConnection* InNetConnection);

	// Object: Function IrisWorld.SeamlessTravelTestView.OnClientCreateNewPlayerController
	// Flags: [Final|Native|Protected]
	// Offset: 0x1508ec5c
	// Params: [ Num(1) Size(0x8) ]
	void OnClientCreateNewPlayerController(struct APlayerController* InPlayerController);

	// Object: Function IrisWorld.SeamlessTravelTestView.DelaySwitchPlayer
	// Flags: [Final|Native|Protected]
	// Offset: 0x1508ec48
	// Params: [ Num(0) Size(0x0) ]
	void DelaySwitchPlayer();
};

// Object: Class IrisWorld.StartSpotAllocator_Discovery
// Size: 0x198 (Inherited: 0x148)
struct UStartSpotAllocator_Discovery : UStartSpotAllocator
{
	DEFINE_UE_CLASS_HELPERS(UStartSpotAllocator_Discovery, "StartSpotAllocator_Discovery")

	struct TMap<int32_t, struct FIrisStartSpotGroup> IrisStartSpotGroupsMap; // 0x148(0x50)
};

// Object: Class IrisWorld.StartSpotAllocator_Raid
// Size: 0x1A0 (Inherited: 0x148)
struct UStartSpotAllocator_Raid : UStartSpotAllocator
{
	DEFINE_UE_CLASS_HELPERS(UStartSpotAllocator_Raid, "StartSpotAllocator_Raid")

	uint8_t Pad_0x148[0x8]; // 0x148(0x8)
	struct TMap<int32_t, struct FIrisStartSpotGroup> IrisStartSpotGroupsMap; // 0x150(0x50)
};

// Object: Class IrisWorld.SubGameModeBase
// Size: 0xA8 (Inherited: 0x28)
struct USubGameModeBase : UObject
{
	DEFINE_UE_CLASS_HELPERS(USubGameModeBase, "SubGameModeBase")

	ESubGameModeType SubGameModeType; // 0x28(0x1)
	uint8_t bAutoStartupAfterInitialize : 1; // 0x29(0x1), Mask(0x1)
	uint8_t BitPad_0x29_1 : 7; // 0x29(0x1)
	uint8_t bSpawnCharacterAfterMatchStarted : 1; // 0x2A(0x1), Mask(0x1)
	uint8_t BitPad_0x2A_1 : 7; // 0x2A(0x1)
	uint8_t bPrimarySubMode : 1; // 0x2B(0x1), Mask(0x1)
	uint8_t BitPad_0x2B_1 : 7; // 0x2B(0x1)
	uint8_t Pad_0x2C[0x4]; // 0x2C(0x4)
	struct APlayerState* PlayerStateClass; // 0x30(0x8)
	struct AHUD* HUDClass; // 0x38(0x8)
	struct APawn* DefaultPawnClass; // 0x40(0x8)
	uint8_t bSubGameModeActive : 1; // 0x48(0x1), Mask(0x1)
	uint8_t BitPad_0x48_1 : 7; // 0x48(0x1)
	uint8_t Pad_0x49[0x7]; // 0x49(0x7)
	struct TMap<struct APlayerController*, struct TWeakObjectPtr<struct APawn>> SubGameModePawns; // 0x50(0x50)
	uint8_t Pad_0xA0[0x8]; // 0xA0(0x8)
};

// Object: Class IrisWorld.SubGameMode_FrontEnd
// Size: 0xA8 (Inherited: 0xA8)
struct USubGameMode_FrontEnd : USubGameModeBase
{
	DEFINE_UE_CLASS_HELPERS(USubGameMode_FrontEnd, "SubGameMode_FrontEnd")
};

// Object: Class IrisWorld.SubGameMode_SafeHouse
// Size: 0xB8 (Inherited: 0xA8)
struct USubGameMode_SafeHouse : USubGameModeBase
{
	DEFINE_UE_CLASS_HELPERS(USubGameMode_SafeHouse, "SubGameMode_SafeHouse")

	uint8_t Pad_0xA8[0x10]; // 0xA8(0x10)

	// Object: Function IrisWorld.SubGameMode_SafeHouse.OnSafeHouseEnvUnloadSuccess
	// Flags: [Final|Native|Protected]
	// Offset: 0x1508f210
	// Params: [ Num(0) Size(0x0) ]
	void OnSafeHouseEnvUnloadSuccess();

	// Object: Function IrisWorld.SubGameMode_SafeHouse.OnSafeHouseEnvLoadSuccess
	// Flags: [Final|Native|Protected]
	// Offset: 0x1508f1fc
	// Params: [ Num(0) Size(0x0) ]
	void OnSafeHouseEnvLoadSuccess();
};

// Object: Class IrisWorld.TestActorComponent
// Size: 0xF8 (Inherited: 0xF8)
struct UTestActorComponent : UActorComponent
{
	DEFINE_UE_CLASS_HELPERS(UTestActorComponent, "TestActorComponent")
};

// Object: Class IrisWorld.WorldCruiseActor
// Size: 0x378 (Inherited: 0x370)
struct AWorldCruiseActor : AActor
{
	DEFINE_UE_CLASS_HELPERS(AWorldCruiseActor, "WorldCruiseActor")

	struct AGPPlayerController* PlayerController; // 0x370(0x8)

	// Object: Function IrisWorld.WorldCruiseActor.StartTarget
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x1508f338
	// Params: [ Num(1) Size(0x8) ]
	void StartTarget(struct AGPPlayerController* cpc);

	// Object: Function IrisWorld.WorldCruiseActor.EndTarget
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x1508f324
	// Params: [ Num(0) Size(0x0) ]
	void EndTarget();
};

// Object: Class IrisWorld.WorldCruiseActorSpawner
// Size: 0x398 (Inherited: 0x370)
struct AWorldCruiseActorSpawner : AActor
{
	DEFINE_UE_CLASS_HELPERS(AWorldCruiseActorSpawner, "WorldCruiseActorSpawner")

	uint8_t Pad_0x370[0x8]; // 0x370(0x8)
	struct TArray<struct AGPPlayerController*> Players; // 0x378(0x10)
	uint8_t Pad_0x388[0x10]; // 0x388(0x10)

	// Object: Function IrisWorld.WorldCruiseActorSpawner.Spawn
	// Flags: [Event|Public|BlueprintCallable|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(0) Size(0x0) ]
	void Spawn();

	// Object: Function IrisWorld.WorldCruiseActorSpawner.DoCallback
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x1508f3e4
	// Params: [ Num(0) Size(0x0) ]
	void DoCallback();
};

// Object: Class IrisWorld.WorldCruiseSpawnerInteraceface
// Size: 0x28 (Inherited: 0x28)
struct IWorldCruiseSpawnerInteraceface : IInterface
{
	DEFINE_UE_CLASS_HELPERS(IWorldCruiseSpawnerInteraceface, "WorldCruiseSpawnerInteraceface")
};

} // namespace SDK
