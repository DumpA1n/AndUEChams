#pragma once

#include "../CoreUObject_classes.hpp"
#include "Engine.hpp"
#include "SGFramework.hpp"
#include "Slate.hpp"
#include "SlateCore.hpp"
#include "UMG.hpp"

namespace SDK
{

// Package: UACommon
// Enums: 24
// Structs: 118
// Classes: 50

struct AActor;
struct ACharacter;
struct AController;
struct AGameModeBase;
struct AGameStateBase;
struct ALevelSequenceActor;
struct AMFQuestDistributerBase;
struct APlayerController;
struct ASGAICharacter;
struct ASGAssembleBase;
struct ASGCaptureCharacterLights;
struct ASGCharacter;
struct ASGInventory;
struct ASGPlayerState;
struct ASGWeapon;
enum class EAttachPosition : uint8_t;
enum class ECharacterSex : uint8_t;
enum class ECharacterType : uint8_t;
enum class EFactionRelationType : uint8_t;
enum class EFactionType : uint8_t;
enum class ELootContainerLevel : uint8_t;
enum class ENewTraceSyncRule : uint8_t;
enum class ENewTraceableMarkType : uint8_t;
enum class EPlayerEndGameType : uint8_t;
enum class EPlayerTeamType : uint8_t;
enum class ESGAvatarType : uint8_t;
enum class ESGBadgeAttach : uint8_t;
enum class ESGGeneralTransitionReason : uint8_t;
enum class ESGGiveInventoryByClassType : uint8_t;
enum class ESlateVisibility : uint8_t;
enum class EUAUIMode : uint8_t;
struct FAvatarItemCfgTableRow;
struct FGameplayTag;
struct FGameplayTagContainer;
struct FGeometry;
struct FItemConfTableRow;
struct FLootDropTableRow;
struct FMapDetailTableRow;
struct FMargin;
struct FMotionEvent;
struct FPaintContext;
struct FPointerEvent;
struct FRandomAreaPointStructData;
struct FSGAvatarWrappedInfo;
struct FSGBadgeInfo;
struct FSGInventoryPackageTable;
struct FTimeLimitedResourcesTableRow;
struct FWeaponAssembleConfTableRow;
struct FWeaponPresetConfTableRow;
struct FWeaponSocket;
struct UActorComponent;
struct UAkAudioEvent;
struct UAnimMontage;
struct UAnimNotify_CaptureCharacterConfig;
struct UButton;
struct UCanvasPanelSlot;
struct UCurveFloat;
struct UDamageEventObject;
struct UDataTable;
struct UImage;
struct UMFMissionFlow;
struct UMaterial;
struct UMaterialInterface;
struct UMaterialParameterCollection;
struct UMeshComponent;
struct UOverlaySlot;
struct UParticleSystemComponent;
struct USGCharacterInventoryGiveComponent;
struct USGInventoryEquipMeshComponent;
struct USGPlayerItemInfoBase;
struct USGPreviewCaptureLightsSets;
struct USkeletalMesh;
struct USkeletalMeshComponent;
struct UStaticMesh;
struct UTextBlock;
struct UTextLayoutWidget;
struct UTexture;
struct UTexture2DDynamic;
struct UTextureRenderTarget2D;
struct UUserWidget;
struct UWidget;
struct UWidgetAnimation;
struct UWidgetTree;
struct UWorld;
struct FModuleConfTableRow;
struct FPanelConfTableRow;
struct FServiceConfTableRow;
struct FTaskDescription;
struct FIniFileBackup;
struct FBuglyData;
struct FAIRandEquipSuitPoolTableRow;
struct FItemInfoForRand;
struct FInitInventoryParams;
struct FSceneCaptureConfig;
struct FUATacticalGearADSIconConfig;
struct FUATacticalGearFireIconConfig;
struct FUAAudioEventAssetInfoTableRow;
struct FUAHeroTemplateTableRow;
struct FUAGuaranteeActItemPoolTableRow;
struct FUAGuaranteeActContainerTableRow;
struct FUAGeneralTransitionTableRow;
struct FUAGamePadModeTableRow;
struct FUAGamePadVisibilityTableRow;
struct FUATutorialEventTable;
struct FUAAIUniqueItemInfoTable;
struct FUAFactionMappingTable;
struct FUAFactionRelationTable;
struct FUAMultiModeWidgetTable;
struct FUATraceStyleTable;
struct FUATraceDirectionalBarStyleParams;
struct FUATraceNewMapStyleParams;
struct FUATraceSceneStyleParams;
struct FUANewTraceStyleTable;
struct FUATraceDirectionalBarRuleParams;
struct FUATraceNewMapRuleParams;
struct FUATraceSceneRuleParams;
struct FUANewTraceRuleTable;
struct FUANewTraceConfigTable;
struct FUATraceTargetTable;
struct FUALootDataInfosTable;
struct FUABrilliantTimeReplayTableRow;
struct FUASubTitleTextTable;
struct FUASubTitleVOTable;
struct FItemConfTableRowBPProxy;
struct FLootDropTableRowBPProxy;
struct FMapDetailTableRowBPProxy;
struct FUACaptureTableRow;
struct FUAEscapeInteractTextTable;
struct FUAPlayerEscapeShowRow;
struct FUAEscapeTextTableRow;
struct FPanelLayerTableRow;
struct FModuleContextConfTableRow;
struct FUAGameBigMapModuleModeTable;
struct FUAHighResourceMarkTable;
struct FUAGameLandmarkTable;
struct FUAGameBigMapEffectTable;
struct FUALootPointInfo;
struct FUABattleAutoQuickChat;
struct FUABattleQuickChat;
struct FUAGamePadMessageTable;
struct FUATaskTypeTable;
struct FUASettleTipsConfigTable;
struct FUASettleFilter;
struct FUASettleUIConfigTable;
struct FUABattleEventPointsTable;
struct FUABattleEventPoint;
struct FUABattleEventTable;
struct FUADescribeWordArgs;
struct FUACutTrendArgs;
struct FUAStatisFilter;
struct FUAStatisParamInfo;
struct FUAPVEStatisTable;
struct FUAStatisTable;
struct FUAServiceTable;
struct FUAModuleTable;
struct FUAModuleContextTable;
struct FUAGachaMapTable;
struct FUAVestBagGridTable;
struct FUABattleMapTable;
struct FUAGlobalNumTable;
struct FUABattleresultTable;
struct FUAItemContextMenuTable;
struct FTextLocalizationPatch;
struct FEscapePerformanceData;
struct FSettlementPerformanceStruct;
struct FUASettlementPerformanceTable;
struct FUABloodstoneRewardTable;
struct FUAPersonalCompetitionInventoryDataTableRow;
struct FSGInventoryPackagePoolPriceRow;
struct FSGModeReinforcementPackagePoolTable;
struct FUADogTagReplaceTableFromActivity;
struct FActivityRandomMissionConfig;
struct FActivityResidentMissionConfig;
struct FMissionClassConfigBase;
struct FActivityMissionConfig;
struct FUAModeActivityMissionTable;
struct FMissionClassWeightConfig;
struct FMissionClassProbabilityConfig;
struct FActivityFeatureComponentEntry;
struct FDynamicRandomMissionConfig;
struct FDynamicResidentMissionConfig;
struct FUAModeDynamicMissionTable;
struct FUALimitAreaPointConfigTable;
struct FActivityQuestDistributer;
struct FUAModeQuestDistributerConfigTable;
struct FQuestDistributerClassWithWeight;
struct FUANewBagModeConfigTable;
struct FUAModeBigMapModuleConfigTable;
struct FUAScriptLevelTable;
struct FEscapePreset;
struct FEscapeProbabilityReset;
struct FUAModeEscapeTable;
struct FUAEscapeRandomStruct;
struct FUAEscapeRandomWeightStruct;
struct FUAModeStartAndEscapeTable;
struct FUAAIStartGroupData;
struct FUAPlayerStartPreset;
struct FUAPlayerStartGroupData;
struct FRespawnPreset;
struct FGamePadConfigTable;
struct FUAGameModeTableRow;
struct FPanelProfilerStack;
struct UAsyncTaskCopyFile;
struct UAsyncTaskDownloadFile;
struct UBFLPlatformFile;
struct UDynamicRichTextBlock;
struct UGeoSensitiveWidget;
struct UHttpHelper;
struct UHttpTask;
struct UImageLoader;
struct UImageWrapperLoader;
struct AInputUtilActor;
struct ULaunchHelper;
struct ALocalizationLog;
struct ULoopedPanel;
struct ULuaEventListener;
struct UPosSensitiveWidget;
struct URichTextBlockInlineDecorator;
struct AShowBtnOutlineHelper;
struct UShowTouch;
struct UStatUMGWidget;
struct UUASubmitBug;
struct UTinyHotfixFile;
struct UTutorialModeInputProcessor;
struct UUABuglyHelper;
struct UUAButtonWidget;
struct UUACharacterDefaultInventoryCompBase;
struct UUACharacterAIRandomInventoryComponent;
struct UUACharacterAnimalLogicComponent;
struct UUACharacterDefaultInventoryComp;
struct USlicedInitParams;
struct UUACharacterPreviewComponent;
struct UUAClipImageWidget;
struct UUACmd;
struct UUACommonConfigStatics;
struct UUACommonStatics;
struct UUADataTableManager;
struct UUAFontMeasure;
struct UUAGridScroll;
struct UUAInventoryStatics;
struct UUAListView;
struct UUALocalizationStatic;
struct UUAOverlay;
struct UUAOverlaySlot;
struct UUAPanelProfiler;
struct UUAPhotoTakerCommon;
struct UUARedPointWidget;
struct UUATileView;
struct UUATreeView;
struct UUAUMGDebugHelper;
struct UUMGHelperLibrary;
struct UVideoManager;

// Object: Enum UACommon.EDownloadFileState
enum class EDownloadFileState : uint8_t
{
	DownloadFileState_None = 0,
	DownloadFileState_Failed = 1,
	DownloadFileState_Head = 2,
	DownloadFileState_Progress = 3,
	DownloadFileState_Paused = 4,
	DownloadFileState_Completed = 5,
	DownloadFileState_MAX = 6
};

// Object: Enum UACommon.EPreviewCaptureMode
enum class EPreviewCaptureMode : uint8_t
{
	None = 0,
	Poster = 1,
	RealTime = 2,
	Photo = 3,
	EPreviewCaptureMode_MAX = 4
};

// Object: Enum UACommon.EUAMiniGameInteractionState
enum class EUAMiniGameInteractionState : uint8_t
{
	Interactable = 0,
	NotInteractable = 1,
	EUAMiniGameInteractionState_MAX = 2
};

// Object: Enum UACommon.EUAFireIconShowCondition
enum class EUAFireIconShowCondition : uint8_t
{
	Allways = 0,
	ADS = 1,
	EUAFireIconShowCondition_MAX = 2
};

// Object: Enum UACommon.EUAGamePadWidgetVersion
enum class EUAGamePadWidgetVersion : uint8_t
{
	ALL = 0,
	UAM = 1,
	UAMO = 2,
	EUAGamePadWidgetVersion_MAX = 3
};

// Object: Enum UACommon.EUATraceNewMapShowAreaType
enum class EUATraceNewMapShowAreaType : uint8_t
{
	MinInscribedCircle = 0,
	MaxInscribedCircle = 1,
	CircumscribedCircle = 2,
	EUATraceNewMapShowAreaType_MAX = 3
};

// Object: Enum UACommon.ELandmarkLevel
enum class ELandmarkLevel : uint8_t
{
	None = 0,
	Level1 = 1,
	Level2 = 2,
	Level3 = 3,
	Level4 = 4,
	ELandmarkLevel_MAX = 5
};

// Object: Enum UACommon.EUAPlayerSignEnum
enum class EUAPlayerSignEnum : uint8_t
{
	None = 0,
	EnemySign = 1,
	LootSign = 2,
	CommonSign = 3,
	EUAPlayerSignEnum_MAX = 4
};

// Object: Enum UACommon.EUABattleQuickChatFilterCondition
enum class EUABattleQuickChatFilterCondition : uint8_t
{
	None = 0,
	IsTraceActorSameTeam = 1,
	IsPMCTraceActor = 2,
	IsSelf = 3,
	HasActorName = 4,
	EUABattleQuickChatFilterCondition_MAX = 5
};

// Object: Enum UACommon.EUABattleAutoQuickChatMsgType
enum class EUABattleAutoQuickChatMsgType : uint8_t
{
	None = 0,
	MatchTargetItemIds = 1,
	MatchTargetItemType = 2,
	MatchTaretTag = 3,
	ReloadMagazine = 4,
	LoadAmmo = 5,
	RescueTeammate = 6,
	CallForReborn = 7,
	Reborn = 8,
	BeTakeDamage = 9,
	EnterDBNO = 10,
	OnExitDBNO = 11,
	MatchTargetMapSignIds = 12,
	MatchTargetMapSignTypes = 13,
	RecoverHealthStateByOther = 14,
	Interrogate = 15,
	EUABattleAutoQuickChatMsgType_MAX = 16
};

// Object: Enum UACommon.EGamePadEffectTable
enum class EGamePadEffectTable : uint8_t
{
	None = 0,
	GamePadView_Fire = 1,
	GamePadView_LeftFire = 2,
	GamePadView_ChangeClip = 3,
	GamePadView_Crouch = 4,
	GamePadView_Prone = 5,
	GamePadView_Jump = 6,
	F_Guide_Lefthand = 7,
	F_Guide_Righthand = 8,
	GamePadView_ADS = 9,
	GamePadView_Bag = 10,
	GamePadView_Bigmap = 11,
	GamePadView_Loot = 12,
	GamePadView_CloseBagEffect = 13,
	GamePadView_SwitchGenerade = 14,
	GamePadView_TutorialAMagazine = 15,
	GamePadView_TutorialAAmmo = 16,
	GamePadView_VestBagPageEffet = 17,
	GamePadView_BagPageEffet = 18,
	GamePadView_HealthPageEffet = 19,
	GamePadView_CorpseBagPageEffet = 20,
	GamePadView_DragAmmoEffect = 21,
	GamePadView_CorpseBagSearchEffect = 22,
	GamePadView_Drag_MedFromCorpseBag = 23,
	GamePadView_Drag_MedToLeg = 24,
	GamePadView_Drag_KeyToPocket = 25,
	GamePadView_EscaapePoint = 26,
	GamePadView_SilentMove = 27,
	GamePadView_LegEffect = 28,
	GamePadView_CloseMapEffect = 29,
	GamePadView_WeaponCheck_Effect = 30,
	GamePadView_FastRun_Effect = 31,
	GamePadView_CorpseMedItemEffect = 32,
	GamePadView_MedinBagEffect = 33,
	GamePadView_FakeMapEffect = 34,
	GamePadView_ItemSearch_Effect = 35,
	GamePadView_FakeMap_PlayerIcon_Effect = 36,
	GamePadView_FakeMap_CaptainIcon_Effect = 37,
	GamePadView_FakeMap_BlockSymble_Effect = 38,
	GamePadView_FakeMap_EscapePoints_Effect = 39,
	GamePadView_FakeMap_EscapeRoute_Effect = 40,
	GamePadView_FakeMap_CloseButton_Effect = 41,
	GamePadView_TutorialBMedItemEffect = 42,
	GamePadView_TutorialBMedItemtobagGrid1Effect = 43,
	GamePadView_TutorialKeytoPocketEffect = 44,
	GamePadView_TutorialPocketPageEffect = 45,
	GamePadView_TutorialOpenDoorEffect = 46,
	GamePadView_TutorialLootBoxGrid1Effect = 47,
	GamePadView_Setting_Effect = 48,
	GamePadView_DebuffInfo_Effect = 49,
	GamePadView_ItemQuickUse_Effect = 50,
	GamePadView_PrimaryWeapon_Effect = 51,
	GamePadView_SecondaryWeapon_Effect = 52,
	GamePadView_VestArmor_Effect = 53,
	GamePadView_Helmet_Effect = 54,
	GamePadView_VestIcon_Effect = 55,
	GamePadView_Pocket1_Effect = 56,
	GamePadView_CorpseVestArmor_Effect = 57,
	GamePadView_CorpseHelmet_Effect = 58,
	GamePadView_CorpseVestTab_Effect = 59,
	GamePadView_CorpseVestSearch_Effect = 60,
	GamePadView_CorpsePocketSearch_Effect = 61,
	GamePadView_CorpseVestIcon_Effect = 62,
	GamePadView_CorpsePocket1_Effect = 63,
	GamePadView_LifeState_Effect = 64,
	GamePadView_Tab_Safebox_Effect = 65,
	GamePadView_Safebox_Effect = 66,
	GamePadView_Loot_Bag_Icon_Effect = 67,
	GamePadView_Bag_Icon_Effect = 68,
	GamePadView_VoiceInstructions = 69,
	GamePadView_CorpseVase = 70,
	GamePadView_ChangeMagaZineAnim_Effect = 71,
	GamePadView_TutorialMag = 72,
	GamePadView_TutorialPushBullet = 73,
	GamePadView_ChangeAmmoAnim_Effect = 74,
	GamePadView_PlayerSecondaryWeaponEffect = 75,
	GamePadView_Loot_PistolEffect = 76,
	GamePadView_PistolEffect = 77,
	FirstLootInventoryEffect = 78,
	LootViewButtonEffect = 79,
	GamePadView_PickButton_Effect = 80,
	GamePadView_GoldenLoot_Effect = 81,
	GamePadView_FirstLootPick_Effect = 82,
	GamePadView_GoldenInspect_Effect = 83,
	SecondLootInventoryEffect = 84,
	FirstBagInventoryEffect = 85,
	SecondBagInventoryEffect = 86,
	FirstDeathBoxGunEffect = 87,
	SecondhudMarkMapEffect = 88,
	GamePadView_GUNLOOTDeathboxEffect = 89,
	ArmorLOOTDeathboxEffect = 90,
	ManualLOOTEffect = 91,
	Mask_ArmorClickSelfEffect = 92,
	ArmorReplaceEffect = 93,
	Overseas_ArmorLOOTDeathboxEffect = 94,
	Overseas_FirstDeathBoxGunEffect = 95,
	Overseas_GUNLOOTDeathboxEffect = 96,
	BP_Left_Gesture = 97,
	Overseas_HeritageLootboxEffect = 98,
	GamePadView_BagSelectedItem_PriceEffect = 99,
	EGamePadEffectTable_MAX = 100
};

// Object: Enum UACommon.EUAGamePadHightWidgetTable
enum class EUAGamePadHightWidgetTable : uint8_t
{
	None = 0,
	GuideCircle_1 = 1,
	GuideCircle_2 = 2,
	GuideSquare_1 = 3,
	GuideSquare_2 = 4,
	GuideRectangle_1 = 5,
	GuideCircle_3 = 6,
	GuideRectangle_3 = 7,
	EUAGamePadHightWidgetTable_MAX = 8
};

// Object: Enum UACommon.EUAGamePadTable
enum class EUAGamePadTable : uint8_t
{
	None = 0,
	GamePadView_ADS = 1,
	GamePadView_Bag = 2,
	GamePadView_BigMap = 3,
	GamePadView_ChangeClip = 4,
	GamePadView_Crouch = 5,
	GamePadView_Fire = 6,
	GamePadView_Jump = 7,
	GamePadView_LeftFire = 8,
	GamePadView_Movement = 9,
	GamePadView_Prone = 10,
	GamePadView_Quietstep = 11,
	GamePadView_Sprint = 12,
	GamePadView_ItemSearch = 13,
	GamePadView_LifeState = 14,
	GamePadView_UseProgress = 15,
	GamePadView_WeaponUse = 16,
	GamePadView_DoorInteraction = 17,
	GamePadView_ThrowCancel = 18,
	GamePadView_SelectGrenade = 19,
	GamePadView_QuickUseItem = 20,
	BP_PCHUDWidget_DirectionalBar = 21,
	GamePadView_WeaponCheck = 22,
	GamePadView_CheckWeaponTxt = 23,
	BPFX_Pain = 24,
	DoorInteraction = 25,
	BP_GamePadView_LockMove = 26,
	BP_GameID = 27,
	BPFX_DropOfBlood = 28,
	BPFX_Bullet_Hit = 29,
	BP_GamePadView_EnergyProgress = 30,
	BPFX_Clear = 31,
	BPFX_Bleed = 32,
	GamePadView_Chat = 33,
	BP_GamePadView_Collimator = 34,
	BP_GamePadView_Magnitude = 35,
	GamePadView_CustomInteractContainer = 36,
	BPFX_SmokeBomb = 37,
	BPFX_ArticuloMortis = 38,
	BP_GamePadView_DBNOHealth = 39,
	BP_GamePadView_RescueInteraction = 40,
	GamePadView_LeanL = 41,
	GamePadView_LeanR = 42,
	GamePadView_GetInventory = 43,
	GamePadView_LootInventory = 44,
	DoorInteractionTips = 45,
	BPFX_Flash_Effect = 46,
	GamePadView_Voice_Intercom = 47,
	GamePadView_Voice_Reception = 48,
	BP_GamePadView_LaserSwitch = 50,
	BPFX_LackInSupplies = 51,
	SoundIndicatorV2 = 52,
	GamePadView_QuestTrackCountDown = 53,
	BP_SelfSoundIndicator = 54,
	GamePadView_ChatHint = 55,
	BPFX_FaceShield = 56,
	BP_GamePadView_ThermalSwitch = 57,
	Temp = 58,
	Temp2 = 59,
	BP_MainHud_WeaponSlotMain_First = 60,
	BP_MainHud_WeaponSlotMain_Second = 61,
	BP_MainHud_WeaponSlot_AssisMelee = 62,
	GamePadView_PullBolt = 63,
	BP_BringOutValuePanel = 98,
	GamePadView_OneClickReload = 113,
	GamePadView_MinMap_Container = 119,
	EUAGamePadTable_MAX = 120
};

// Object: Enum UACommon.EUAHUDPreInstallLoc
enum class EUAHUDPreInstallLoc : uint8_t
{
	None = 0,
	Tips_Panel_Right = 1,
	dialogBox_Bottom = 2,
	Objective_Panel = 3,
	Suggestive_Panel_Left = 4,
	WarnMessage_Panel = 5,
	LightTips_Panel = 6,
	Activity_Phase_Panel = 7,
	RouletteTips_Panel = 8,
	EUAHUDPreInstallLoc_MAX = 9
};

// Object: Enum UACommon.EUASettleUIType
enum class EUASettleUIType : uint8_t
{
	Settlement = 0,
	Loading = 1,
	WaitReinforce = 2,
	WaitRevive = 3,
	EUASettleUIType_MAX = 4
};

// Object: Enum UACommon.EUASettleFilterType
enum class EUASettleFilterType : uint8_t
{
	None = 0,
	InValues = 1,
	NotInValues = 2,
	ContainValue = 3,
	EUASettleFilterType_MAX = 4
};

// Object: Enum UACommon.EUAArgResolveMethod
enum class EUAArgResolveMethod : uint8_t
{
	None = 0,
	Inventory = 1,
	Volume = 2,
	EnvDamage = 3,
	LootBox = 4,
	EUAArgResolveMethod_MAX = 5
};

// Object: Enum UACommon.EUAPVEMissionProgressMethod
enum class EUAPVEMissionProgressMethod : uint8_t
{
	Amount = 0,
	CheckBox = 1,
	Time = 2,
	EUAPVEMissionProgressMethod_MAX = 3
};

// Object: Enum UACommon.EUAPVEMissionObjectiveMethod
enum class EUAPVEMissionObjectiveMethod : uint8_t
{
	Every = 0,
	Below = 1,
	Exceed = 2,
	EUAPVEMissionObjectiveMethod_MAX = 3
};

// Object: Enum UACommon.EUAStatisParamFilterType
enum class EUAStatisParamFilterType : uint8_t
{
	None = 0,
	Equal = 1,
	NotEqual = 2,
	GreaterEqual = 3,
	LessEqual = 4,
	Between = 5,
	FixLenNumDivideIn = 6,
	FixLenNumDivideNotIn = 7,
	EqualArray = 8,
	EUAStatisParamFilterType_MAX = 9
};

// Object: Enum UACommon.EUAStatisMethod
enum class EUAStatisMethod : uint8_t
{
	SumValue = 0,
	Max = 1,
	Min = 2,
	LastValue = 3,
	SumCount = 4
};

// Object: Enum UACommon.EGamePadLayer
enum class EGamePadLayer : uint8_t
{
	NONE = 0,
	EFFECT = 1,
	OVERSEAS = 2,
	OPERATE = 3,
	PHOTO = 4,
	BASEINFO = 5,
	EGamePadLayer_MAX = 6
};

// Object: Enum UACommon.EGameModeName
enum class EGameModeName : uint8_t
{
	EGameMode_None = 0,
	EGameMode_NormalEvacuate = 1,
	EGameMode_TutorialGuide = 2,
	EGameMode_TutorialWarm = 3,
	EGameMode_OB = 5,
	EGameMode_TutorialEvacuate = 6,
	EGameMode_ActivityEvacuate = 7,
	EGameMode_PCGTest = 8,
	EGameMode_Range = 9,
	EGameMode_RangeWaitdownload = 10,
	EGameMode_Round = 11,
	EGameMode_PVE = 12,
	EGameMode_BR = 13,
	EGameMode_TutorialNew = 14,
	EGameMode_EconomyRound = 15,
	EGameMode_NotLoss = 16,
	EGameMode_LootGold = 17,
	EGameMode_PersonalBattle = 18,
	EGameMode_HardcoreGame = 19,
	EGameMode_BombGame = 20,
	EGameMode_TeamCompetition = 21,
	EGameMode_BRTutorial = 22,
	EGameMode_Biohazard = 23,
	EGameMode_MAX = 24
};

// Object: Enum UACommon.EStartPointType
enum class EStartPointType : uint8_t
{
	EPlayerTeamType_None = 0,
	EPlayerTeamType_PMC = 1,
	EPlayerTeamType_SCAV = 2,
	EPlayerTeamType_PMCAndSCAV = 3,
	EPlayerTeamType_OnlyForFaction = 4,
	EPlayerTeamType_MAX = 5
};

// Object: ScriptStruct UACommon.ModuleConfTableRow
// Size: 0x38 (Inherited: 0x8)
struct FModuleConfTableRow : FTableRowBase
{
	struct FString Name; // 0x8(0x10)
	struct FString Context; // 0x18(0x10)
	struct FString Desc; // 0x28(0x10)
};

// Object: ScriptStruct UACommon.PanelConfTableRow
// Size: 0x58 (Inherited: 0x8)
struct FPanelConfTableRow : FTableRowBase
{
	struct FString Name; // 0x8(0x10)
	struct FString OwnerModule; // 0x18(0x10)
	struct FString AssetMobileName; // 0x28(0x10)
	struct FString LayerName; // 0x38(0x10)
	struct TArray<struct FString> OwnerPanel; // 0x48(0x10)
};

// Object: ScriptStruct UACommon.ServiceConfTableRow
// Size: 0x58 (Inherited: 0x8)
struct FServiceConfTableRow : FTableRowBase
{
	struct FString Name; // 0x8(0x10)
	struct FString InitContext; // 0x18(0x10)
	struct FString ResetContext; // 0x28(0x10)
	struct FString Desc; // 0x38(0x10)
	struct FString ServiceType; // 0x48(0x10)
};

// Object: ScriptStruct UACommon.TaskDescription
// Size: 0x18 (Inherited: 0x0)
struct FTaskDescription
{
	struct FString ETag; // 0x0(0x10)
	int32_t FileSize; // 0x10(0x4)
	uint8_t Pad_0x14[0x4]; // 0x14(0x4)
};

// Object: ScriptStruct UACommon.IniFileBackup
// Size: 0x160 (Inherited: 0x0)
struct FIniFileBackup
{
	struct FString IniName; // 0x0(0x10)
	struct TArray<struct FString> ClassesReloaded; // 0x10(0x10)
	uint8_t Pad_0x20[0x140]; // 0x20(0x140)
};

// Object: ScriptStruct UACommon.BuglyData
// Size: 0x20 (Inherited: 0x0)
struct FBuglyData
{
	struct FString URL; // 0x0(0x10)
	struct FString Time; // 0x10(0x10)
};

// Object: ScriptStruct UACommon.AIRandEquipSuitPoolTableRow
// Size: 0x30 (Inherited: 0x8)
struct FAIRandEquipSuitPoolTableRow : FTableRowBase
{
	int64_t LocalEquipID; // 0x8(0x8)
	struct TArray<struct FItemInfoForRand> SuitArray; // 0x10(0x10)
	struct FString Description; // 0x20(0x10)
};

// Object: ScriptStruct UACommon.ItemInfoForRand
// Size: 0x58 (Inherited: 0x0)
struct FItemInfoForRand
{
	struct TMap<int32_t, int32_t> SuitItemsInfo; // 0x0(0x50)
	int32_t Weight; // 0x50(0x4)
	uint8_t Pad_0x54[0x4]; // 0x54(0x4)
};

// Object: ScriptStruct UACommon.InitInventoryParams
// Size: 0x18 (Inherited: 0x0)
struct FInitInventoryParams
{
	struct USGPlayerItemInfoBase* item; // 0x0(0x8)
	struct AActor* ParentInventory; // 0x8(0x8)
	uint8_t Pad_0x10[0x8]; // 0x10(0x8)
};

// Object: ScriptStruct UACommon.SceneCaptureConfig
// Size: 0xE0 (Inherited: 0x0)
struct FSceneCaptureConfig
{
	struct FTransform CameraTransform; // 0x0(0x30)
	float FOV; // 0x30(0x4)
	uint8_t Pad_0x34[0x4]; // 0x34(0x4)
	struct UTextureRenderTarget2D* TextureTarget; // 0x38(0x8)
	struct TSoftObjectPtr<UTextureRenderTarget2D> TextureTargetRef; // 0x40(0x28)
	bool bIsCasual; // 0x68(0x1)
	uint8_t Pad_0x69[0x7]; // 0x69(0x7)
	struct FString Light_Rifle_Male; // 0x70(0x10)
	struct FString Light_Pistol_Male; // 0x80(0x10)
	struct FString Light_Melee_Male; // 0x90(0x10)
	struct FString Light_Rifle_Female; // 0xA0(0x10)
	struct FString Light_Pistol_Female; // 0xB0(0x10)
	struct FString Light_Melee_Female; // 0xC0(0x10)
	struct FString PlayerLocName; // 0xD0(0x10)
};

// Object: ScriptStruct UACommon.UATacticalGearADSIconConfig
// Size: 0x38 (Inherited: 0x8)
struct FUATacticalGearADSIconConfig : FTableRowBase
{
	struct FString NormalIconKey; // 0x8(0x10)
	struct FString ClickIconKey; // 0x18(0x10)
	struct FString DisableIconKey; // 0x28(0x10)
};

// Object: ScriptStruct UACommon.UATacticalGearFireIconConfig
// Size: 0x40 (Inherited: 0x8)
struct FUATacticalGearFireIconConfig : FTableRowBase
{
	EUAFireIconShowCondition ShowCondition; // 0x8(0x1)
	uint8_t Pad_0x9[0x7]; // 0x9(0x7)
	struct FString NormalIconKey; // 0x10(0x10)
	struct FString ClickIconKey; // 0x20(0x10)
	struct FString DisableIconKey; // 0x30(0x10)
};

// Object: ScriptStruct UACommon.UAAudioEventAssetInfoTableRow
// Size: 0x28 (Inherited: 0x8)
struct FUAAudioEventAssetInfoTableRow : FTableRowBase
{
	struct FString EventName; // 0x8(0x10)
	float Duration_Windows; // 0x18(0x4)
	float Duration_Android; // 0x1C(0x4)
	float Duration_IOS; // 0x20(0x4)
	float Duration_OpenHarmony; // 0x24(0x4)
};

// Object: ScriptStruct UACommon.UAHeroTemplateTableRow
// Size: 0x48 (Inherited: 0x8)
struct FUAHeroTemplateTableRow : FTableRowBase
{
	int32_t HeroID; // 0x8(0x4)
	int32_t InvPackageID; // 0xC(0x4)
	struct TArray<int32_t> OptionalInvPackageIDs; // 0x10(0x10)
	struct TArray<int32_t> PerkList; // 0x20(0x10)
	ECharacterSex HeroSex; // 0x30(0x1)
	uint8_t Pad_0x31[0x7]; // 0x31(0x7)
	int64_t HeroAvatarSuitID; // 0x38(0x8)
	bool bExpandState; // 0x40(0x1)
	bool bInSwitchAvatarSet; // 0x41(0x1)
	uint8_t Pad_0x42[0x6]; // 0x42(0x6)
};

// Object: ScriptStruct UACommon.UAGuaranteeActItemPoolTableRow
// Size: 0x60 (Inherited: 0x8)
struct FUAGuaranteeActItemPoolTableRow : FTableRowBase
{
	int32_t PoolID; // 0x8(0x4)
	int32_t RateInterval; // 0xC(0x4)
	struct TMap<uint64_t, int32_t> ItemInfo; // 0x10(0x50)
};

// Object: ScriptStruct UACommon.UAGuaranteeActContainerTableRow
// Size: 0x18 (Inherited: 0x8)
struct FUAGuaranteeActContainerTableRow : FTableRowBase
{
	int32_t ContainerType; // 0x8(0x4)
	int32_t RateMin; // 0xC(0x4)
	int32_t RateMax; // 0x10(0x4)
	int32_t PoolID; // 0x14(0x4)
};

// Object: ScriptStruct UACommon.UAGeneralTransitionTableRow
// Size: 0x18 (Inherited: 0x8)
struct FUAGeneralTransitionTableRow : FTableRowBase
{
	ESGGeneralTransitionReason GeneralTransitionReason; // 0x8(0x1)
	uint8_t Pad_0x9[0x3]; // 0x9(0x3)
	float MinTime; // 0xC(0x4)
	float MaxTime; // 0x10(0x4)
	bool bNeedCheckLevelLoad; // 0x14(0x1)
	bool bExternalControl; // 0x15(0x1)
	uint8_t Pad_0x16[0x2]; // 0x16(0x2)
};

// Object: ScriptStruct UACommon.UAGamePadModeTableRow
// Size: 0x40 (Inherited: 0x8)
struct FUAGamePadModeTableRow : FTableRowBase
{
	uint32_t ID; // 0x8(0x4)
	uint8_t Pad_0xC[0x4]; // 0xC(0x4)
	struct FString WidgetName; // 0x10(0x10)
	struct TArray<EUAUIMode> VisibleMode; // 0x20(0x10)
	struct TArray<EUAUIMode> GreyVisibleMode; // 0x30(0x10)
};

// Object: ScriptStruct UACommon.UAGamePadVisibilityTableRow
// Size: 0x70 (Inherited: 0x8)
struct FUAGamePadVisibilityTableRow : FTableRowBase
{
	uint32_t ID; // 0x8(0x4)
	uint8_t Pad_0xC[0x4]; // 0xC(0x4)
	struct FString WidgetName; // 0x10(0x10)
	struct FString CustomLayoutWidgetName; // 0x20(0x10)
	EUAGamePadWidgetVersion ActiveVersion; // 0x30(0x1)
	uint8_t Pad_0x31[0x3]; // 0x31(0x3)
	uint32_t TutorialActive; // 0x34(0x4)
	uint32_t PVEActive; // 0x38(0x4)
	uint32_t RangeActive; // 0x3C(0x4)
	uint32_t NormalActive; // 0x40(0x4)
	uint32_t RangeDBNOActive; // 0x44(0x4)
	uint32_t DBNOActive; // 0x48(0x4)
	uint32_t SpectatingActive; // 0x4C(0x4)
	uint32_t OBActive; // 0x50(0x4)
	uint32_t OBFreeView; // 0x54(0x4)
	uint32_t VehicleDriverView; // 0x58(0x4)
	uint32_t VehiclePassengerView; // 0x5C(0x4)
	uint32_t WaitDownloadRangeView; // 0x60(0x4)
	uint32_t PhotoGraphView; // 0x64(0x4)
	uint32_t DroneView; // 0x68(0x4)
	uint32_t EscapePerform; // 0x6C(0x4)
};

// Object: ScriptStruct UACommon.UATutorialEventTable
// Size: 0x78 (Inherited: 0x8)
struct FUATutorialEventTable : FTableRowBase
{
	struct FString EventName; // 0x8(0x10)
	bool bSupportNLPMentor; // 0x18(0x1)
	uint8_t Pad_0x19[0x3]; // 0x19(0x3)
	int32_t MaxTimesInGame; // 0x1C(0x4)
	int32_t MaxTimesInCareer; // 0x20(0x4)
	int32_t NotTriggerTimesInCareer; // 0x24(0x4)
	int32_t CD; // 0x28(0x4)
	uint8_t Pad_0x2C[0x4]; // 0x2C(0x4)
	struct FString ExtraParaText1; // 0x30(0x10)
	int32_t ExtraPara1; // 0x40(0x4)
	uint8_t Pad_0x44[0x4]; // 0x44(0x4)
	struct FString ExtraParaText2; // 0x48(0x10)
	int32_t ExtraPara2; // 0x58(0x4)
	uint8_t Pad_0x5C[0x4]; // 0x5C(0x4)
	struct FString ExtraParaText3; // 0x60(0x10)
	int32_t ExtraPara3; // 0x70(0x4)
	uint8_t Pad_0x74[0x4]; // 0x74(0x4)
};

// Object: ScriptStruct UACommon.UAAIUniqueItemInfoTable
// Size: 0x10 (Inherited: 0x8)
struct FUAAIUniqueItemInfoTable : FTableRowBase
{
	int32_t itemID; // 0x8(0x4)
	uint8_t Pad_0xC[0x4]; // 0xC(0x4)
};

// Object: ScriptStruct UACommon.UAFactionMappingTable
// Size: 0x10 (Inherited: 0x8)
struct FUAFactionMappingTable : FTableRowBase
{
	int32_t FactionID; // 0x8(0x4)
	EFactionType FactionType; // 0xC(0x1)
	uint8_t Pad_0xD[0x3]; // 0xD(0x3)
};

// Object: ScriptStruct UACommon.UAFactionRelationTable
// Size: 0x18 (Inherited: 0x8)
struct FUAFactionRelationTable : FTableRowBase
{
	EFactionRelationType NormalPMC; // 0x8(0x1)
	EFactionRelationType NormalScav; // 0x9(0x1)
	EFactionRelationType PlayerScav; // 0xA(0x1)
	EFactionRelationType RebelFaction; // 0xB(0x1)
	EFactionRelationType LakeFaction; // 0xC(0x1)
	EFactionRelationType GangsterFaction; // 0xD(0x1)
	EFactionRelationType KurtTeam; // 0xE(0x1)
	EFactionRelationType NavyFaction; // 0xF(0x1)
	EFactionRelationType Blackgold; // 0x10(0x1)
	EFactionRelationType Gnesk; // 0x11(0x1)
	EFactionRelationType MadDog; // 0x12(0x1)
	EFactionRelationType RoleplayA; // 0x13(0x1)
	EFactionRelationType RoleplayB; // 0x14(0x1)
	EFactionRelationType Cleaner; // 0x15(0x1)
	EFactionRelationType Kamona; // 0x16(0x1)
	uint8_t Pad_0x17[0x1]; // 0x17(0x1)
};

// Object: ScriptStruct UACommon.UAMultiModeWidgetTable
// Size: 0x48 (Inherited: 0x8)
struct FUAMultiModeWidgetTable : FTableRowBase
{
	int32_t ID; // 0x8(0x4)
	uint8_t Pad_0xC[0x4]; // 0xC(0x4)
	struct FText Name; // 0x10(0x18)
	struct FString sysIds; // 0x28(0x10)
	bool isShowMode; // 0x38(0x1)
	uint8_t Pad_0x39[0x3]; // 0x39(0x3)
	int32_t use_ticket; // 0x3C(0x4)
	int32_t need_take_in_threshold; // 0x40(0x4)
	int32_t default_avatar_set_id; // 0x44(0x4)
};

// Object: ScriptStruct UACommon.UATraceStyleTable
// Size: 0x1F0 (Inherited: 0x8)
struct FUATraceStyleTable : FTableRowBase
{
	int32_t StyleID; // 0x8(0x4)
	uint8_t Pad_0xC[0x4]; // 0xC(0x4)
	struct FString Annotation; // 0x10(0x10)
	struct TSoftClassPtr<struct UUserWidget*> TemplateUMG_Resource; // 0x20(0x28)
	int32_t ZOrder; // 0x48(0x4)
	float EffectDistance; // 0x4C(0x4)
	float OpacityOnVisible; // 0x50(0x4)
	float OpacityOnInvisible; // 0x54(0x4)
	struct FSlateColor Image_Circle_Color_Normal; // 0x58(0x28)
	struct FSlateColor Image_Circle_Color_Teamate; // 0x80(0x28)
	struct FSlateColor Image_Circle_Color_Enemy; // 0xA8(0x28)
	struct FString Image_BG_Path; // 0xD0(0x10)
	struct FSlateColor Image_BG_Color_Normal; // 0xE0(0x28)
	struct FSlateColor Image_BG_Color_Teamate; // 0x108(0x28)
	struct FSlateColor Image_BG_Color_Enemy; // 0x130(0x28)
	struct FString Image_Icon_Path; // 0x158(0x10)
	struct FSlateColor Image_Icon_Color_Normal; // 0x168(0x28)
	struct FSlateColor Image_Icon_Color_Teamate; // 0x190(0x28)
	struct FSlateColor Image_Icon_Color_Enemy; // 0x1B8(0x28)
	struct TArray<struct FString> Params; // 0x1E0(0x10)
};

// Object: ScriptStruct UACommon.UATraceDirectionalBarStyleParams
// Size: 0x28 (Inherited: 0x0)
struct FUATraceDirectionalBarStyleParams
{
	struct FString HighlightAniName; // 0x0(0x10)
	int32_t AniLoopTimes; // 0x10(0x4)
	uint8_t Pad_0x14[0x4]; // 0x14(0x4)
	struct TArray<struct FString> Params; // 0x18(0x10)
};

// Object: ScriptStruct UACommon.UATraceNewMapStyleParams
// Size: 0x88 (Inherited: 0x0)
struct FUATraceNewMapStyleParams
{
	struct TSoftClassPtr<struct UUserWidget*> UMGType; // 0x0(0x28)
	int32_t ZOrder; // 0x28(0x4)
	bool HighLightMapIcon; // 0x2C(0x1)
	bool bShowArea; // 0x2D(0x1)
	EUATraceNewMapShowAreaType ShowAreaType; // 0x2E(0x1)
	uint8_t Pad_0x2F[0x1]; // 0x2F(0x1)
	struct FSlateColor AreaColor; // 0x30(0x28)
	float AreaRadius; // 0x58(0x4)
	float DisplayAnimationInterval; // 0x5C(0x4)
	struct FString HighlightAniName; // 0x60(0x10)
	int32_t AniLoopTimes; // 0x70(0x4)
	uint8_t Pad_0x74[0x4]; // 0x74(0x4)
	struct TArray<struct FString> Params; // 0x78(0x10)
};

// Object: ScriptStruct UACommon.UATraceSceneStyleParams
// Size: 0x70 (Inherited: 0x0)
struct FUATraceSceneStyleParams
{
	float OpactiyInVision; // 0x0(0x4)
	float OpactiyNotInVision; // 0x4(0x4)
	float OpacityOutofDistance; // 0x8(0x4)
	float ShortShowDistance; // 0xC(0x4)
	bool bHideInCharacter; // 0x10(0x1)
	uint8_t Pad_0x11[0x3]; // 0x11(0x3)
	struct FVector OffsetLocation; // 0x14(0xC)
	bool bPlayOpenAnimation; // 0x20(0x1)
	uint8_t Pad_0x21[0x7]; // 0x21(0x7)
	struct FString HighlightAniName; // 0x28(0x10)
	int32_t AniLoopTimes; // 0x38(0x4)
	uint8_t Pad_0x3C[0x4]; // 0x3C(0x4)
	struct TArray<struct FString> Params; // 0x40(0x10)
	struct FVector2D MarkSize; // 0x50(0x8)
	bool bShowBackground; // 0x58(0x1)
	uint8_t Pad_0x59[0x3]; // 0x59(0x3)
	struct FMargin DynamicIconPadding; // 0x5C(0x10)
	bool bReviseScreenPosition; // 0x6C(0x1)
	uint8_t Pad_0x6D[0x3]; // 0x6D(0x3)
};

// Object: ScriptStruct UACommon.UANewTraceStyleTable
// Size: 0x200 (Inherited: 0x8)
struct FUANewTraceStyleTable : FTableRowBase
{
	struct FString Annotation; // 0x8(0x10)
	bool bUseTeamColorByActiveTrace_IconColor; // 0x18(0x1)
	uint8_t Pad_0x19[0x7]; // 0x19(0x7)
	struct FSlateColor IconColor; // 0x20(0x28)
	struct FVector2D IconScale; // 0x48(0x8)
	bool bUseTeamColorByActiveTrace_BackgroundColor; // 0x50(0x1)
	uint8_t Pad_0x51[0x7]; // 0x51(0x7)
	struct FSlateColor Color; // 0x58(0x28)
	struct FVector2D BackgroundScale; // 0x80(0x8)
	struct FSoftObjectPath MarkIconResource; // 0x88(0x18)
	struct TSoftClassPtr<struct UUserWidget*> DynamicIconSoftClassPtr; // 0xA0(0x28)
	struct FSoftObjectPath BackgroundResource; // 0xC8(0x18)
	struct FUATraceSceneStyleParams SceneStyleParams; // 0xE0(0x70)
	struct FUATraceNewMapStyleParams NewMapStyleParams; // 0x150(0x88)
	struct FUATraceDirectionalBarStyleParams DirectionalBarStyleParams; // 0x1D8(0x28)
};

// Object: ScriptStruct UACommon.UATraceDirectionalBarRuleParams
// Size: 0xC (Inherited: 0x0)
struct FUATraceDirectionalBarRuleParams
{
	bool bCanShow; // 0x0(0x1)
	uint8_t Pad_0x1[0x3]; // 0x1(0x3)
	float ShowDistance; // 0x4(0x4)
	float DrawInverval; // 0x8(0x4)
};

// Object: ScriptStruct UACommon.UATraceNewMapRuleParams
// Size: 0xC (Inherited: 0x0)
struct FUATraceNewMapRuleParams
{
	bool bCanShow; // 0x0(0x1)
	uint8_t Pad_0x1[0x3]; // 0x1(0x3)
	float ShowDistance; // 0x4(0x4)
	float DrawInverval; // 0x8(0x4)
};

// Object: ScriptStruct UACommon.UATraceSceneRuleParams
// Size: 0x10 (Inherited: 0x0)
struct FUATraceSceneRuleParams
{
	bool bCanShow; // 0x0(0x1)
	bool bActiveCanShow; // 0x1(0x1)
	uint8_t Pad_0x2[0x2]; // 0x2(0x2)
	float ShowDistance; // 0x4(0x4)
	float EffectiveDuration; // 0x8(0x4)
	float DrawInverval; // 0xC(0x4)
};

// Object: ScriptStruct UACommon.UANewTraceRuleTable
// Size: 0x38 (Inherited: 0x8)
struct FUANewTraceRuleTable : FTableRowBase
{
	ENewTraceSyncRule SyncRule; // 0x8(0x1)
	uint8_t Pad_0x9[0x3]; // 0x9(0x3)
	struct FUATraceSceneRuleParams SceneRuleParams; // 0xC(0x10)
	struct FUATraceNewMapRuleParams NewMapRuleParams; // 0x1C(0xC)
	struct FUATraceDirectionalBarRuleParams DirectionalBarRuleParams; // 0x28(0xC)
	uint8_t Pad_0x34[0x4]; // 0x34(0x4)
};

// Object: ScriptStruct UACommon.UANewTraceConfigTable
// Size: 0xA0 (Inherited: 0x8)
struct FUANewTraceConfigTable : FTableRowBase
{
	ENewTraceableMarkType MarkType; // 0x8(0x1)
	uint8_t Pad_0x9[0x7]; // 0x9(0x7)
	struct FString TraceRuleRowName; // 0x10(0x10)
	int32_t TraceStyleID; // 0x20(0x4)
	float DataSyncInverval; // 0x24(0x4)
	bool CanInteract; // 0x28(0x1)
	bool bAutoSelected; // 0x29(0x1)
	uint8_t Pad_0x2A[0x6]; // 0x2A(0x6)
	struct FText TraceTitle; // 0x30(0x18)
	struct FText TraceDesc; // 0x48(0x18)
	struct FText TargetTitle; // 0x60(0x18)
	struct FText TargetDesc; // 0x78(0x18)
	float RandomOffset; // 0x90(0x4)
	bool UseOwnerLocation; // 0x94(0x1)
	bool bEnableInMiniMap; // 0x95(0x1)
	uint8_t Pad_0x96[0x2]; // 0x96(0x2)
	float Duration; // 0x98(0x4)
	uint8_t Pad_0x9C[0x4]; // 0x9C(0x4)
};

// Object: ScriptStruct UACommon.UATraceTargetTable
// Size: 0x90 (Inherited: 0x8)
struct FUATraceTargetTable : FTableRowBase
{
	int32_t TargetId; // 0x8(0x4)
	uint8_t Pad_0xC[0x4]; // 0xC(0x4)
	struct FText TargetTitle; // 0x10(0x18)
	struct FText TargetDesc; // 0x28(0x18)
	bool bShowTrace; // 0x40(0x1)
	bool bIsClick; // 0x41(0x1)
	bool bIsAutoSelect; // 0x42(0x1)
	uint8_t Pad_0x43[0x5]; // 0x43(0x5)
	struct FText TraceTitle; // 0x48(0x18)
	struct FText TraceDesc; // 0x60(0x18)
	struct FString AnimName; // 0x78(0x10)
	int32_t StyleID; // 0x88(0x4)
	uint8_t Pad_0x8C[0x4]; // 0x8C(0x4)
};

// Object: ScriptStruct UACommon.UALootDataInfosTable
// Size: 0x60 (Inherited: 0x8)
struct FUALootDataInfosTable : FTableRowBase
{
	int32_t LootDataInfoID; // 0x8(0x4)
	uint8_t Pad_0xC[0x4]; // 0xC(0x4)
	struct FString Description; // 0x10(0x10)
	int32_t LootPointType; // 0x20(0x4)
	uint8_t Pad_0x24[0x4]; // 0x24(0x4)
	struct FText ContainerName; // 0x28(0x18)
	struct FSoftObjectPath MarkIconResource; // 0x40(0x18)
	ELootContainerLevel ContainerLevel; // 0x58(0x1)
	uint8_t Pad_0x59[0x7]; // 0x59(0x7)
};

// Object: ScriptStruct UACommon.UABrilliantTimeReplayTableRow
// Size: 0x40 (Inherited: 0x8)
struct FUABrilliantTimeReplayTableRow : FTableRowBase
{
	int32_t typeId; // 0x8(0x4)
	int32_t MapID; // 0xC(0x4)
	struct TSoftObjectPtr<UMFMissionFlow> MissionFlow; // 0x10(0x28)
	int32_t MinCountToSubmit; // 0x38(0x4)
	bool NeedEscapeAliveToSubmit; // 0x3C(0x1)
	uint8_t Pad_0x3D[0x3]; // 0x3D(0x3)
};

// Object: ScriptStruct UACommon.UASubTitleTextTable
// Size: 0x30 (Inherited: 0x8)
struct FUASubTitleTextTable : FTableRowBase
{
	int32_t TextMessageId; // 0x8(0x4)
	uint8_t Pad_0xC[0x4]; // 0xC(0x4)
	struct FText Text; // 0x10(0x18)
	int32_t GameHUDTypeID; // 0x28(0x4)
	uint8_t Pad_0x2C[0x4]; // 0x2C(0x4)
};

// Object: ScriptStruct UACommon.UASubTitleVOTable
// Size: 0x38 (Inherited: 0x8)
struct FUASubTitleVOTable : FTableRowBase
{
	int32_t messageId; // 0x8(0x4)
	uint8_t Pad_0xC[0x4]; // 0xC(0x4)
	struct FString SoundResource; // 0x10(0x10)
	struct UAkAudioEvent* PlayAudio; // 0x20(0x8)
	int32_t TextMessageId; // 0x28(0x4)
	struct FName SoundType; // 0x2C(0x8)
	uint8_t Pad_0x34[0x4]; // 0x34(0x4)
};

// Object: ScriptStruct UACommon.ItemConfTableRowBPProxy
// Size: 0xC8 (Inherited: 0x8)
struct FItemConfTableRowBPProxy : FTableRowBase
{
	int32_t itemID; // 0x8(0x4)
	uint8_t Pad_0xC[0x4]; // 0xC(0x4)
	struct FString Name; // 0x10(0x10)
	struct FString ShortName; // 0x20(0x10)
	uint32_t IconID; // 0x30(0x4)
	uint8_t Pad_0x34[0x4]; // 0x34(0x4)
	struct FString Describe; // 0x38(0x10)
	int32_t SizeX; // 0x48(0x4)
	int32_t SizeY; // 0x4C(0x4)
	float Weight; // 0x50(0x4)
	uint8_t Pad_0x54[0x4]; // 0x54(0x4)
	struct FString pickup_sound; // 0x58(0x10)
	struct FString use_sound; // 0x68(0x10)
	struct FString drop_sound; // 0x78(0x10)
	int32_t sell_price; // 0x88(0x4)
	uint32_t can_sell; // 0x8C(0x4)
	int32_t standard_price; // 0x90(0x4)
	uint32_t StackMax; // 0x94(0x4)
	uint32_t not_discard; // 0x98(0x4)
	uint32_t Bind; // 0x9C(0x4)
	uint32_t rarity; // 0xA0(0x4)
	uint32_t Durability; // 0xA4(0x4)
	uint32_t UseExp; // 0xA8(0x4)
	int32_t LootExp; // 0xAC(0x4)
	struct TArray<uint8_t> RejectSlot; // 0xB0(0x10)
	uint32_t sort; // 0xC0(0x4)
	uint32_t jump_goto; // 0xC4(0x4)
};

// Object: ScriptStruct UACommon.LootDropTableRowBPProxy
// Size: 0x98 (Inherited: 0x8)
struct FLootDropTableRowBPProxy : FTableRowBase
{
	int64_t ID; // 0x8(0x8)
	struct FString Desc; // 0x10(0x10)
	uint8_t ItemType; // 0x20(0x1)
	uint8_t Pad_0x21[0x7]; // 0x21(0x7)
	int64_t itemID; // 0x28(0x8)
	struct TArray<int32_t> ItemNum; // 0x30(0x10)
	struct TArray<int64_t> SubItemTable; // 0x40(0x10)
	int32_t Weight; // 0x50(0x4)
	float Percent; // 0x54(0x4)
	float RandTimes; // 0x58(0x4)
	uint8_t OperationType; // 0x5C(0x1)
	uint8_t IsPermanent; // 0x5D(0x1)
	uint8_t Pad_0x5E[0x2]; // 0x5E(0x2)
	uint32_t ACtID; // 0x60(0x4)
	uint8_t Pad_0x64[0x4]; // 0x64(0x4)
	struct TArray<uint64_t> LootPointWhite; // 0x68(0x10)
	struct TArray<uint64_t> LootPointBlack; // 0x78(0x10)
	struct FString Describe; // 0x88(0x10)
};

// Object: ScriptStruct UACommon.MapDetailTableRowBPProxy
// Size: 0x98 (Inherited: 0x8)
struct FMapDetailTableRowBPProxy : FTableRowBase
{
	int32_t ID; // 0x8(0x4)
	uint8_t Pad_0xC[0x4]; // 0xC(0x4)
	struct FString map_level; // 0x10(0x10)
	struct FString mobile_map_level; // 0x20(0x10)
	struct FString Name; // 0x30(0x10)
	struct FString level_path; // 0x40(0x10)
	struct FString Picture; // 0x50(0x10)
	struct FString Desc; // 0x60(0x10)
	struct FVector2D MapSize; // 0x70(0x8)
	struct TArray<struct FVector2D> SampleScenePoints; // 0x78(0x10)
	struct TArray<struct FVector2D> SampleMapPoints; // 0x88(0x10)
};

// Object: ScriptStruct UACommon.UACaptureTableRow
// Size: 0x18 (Inherited: 0x8)
struct FUACaptureTableRow : FTableRowBase
{
	uint32_t ID; // 0x8(0x4)
	int32_t X; // 0xC(0x4)
	int32_t Y; // 0x10(0x4)
	int32_t Z; // 0x14(0x4)
};

// Object: ScriptStruct UACommon.UAEscapeInteractTextTable
// Size: 0x28 (Inherited: 0x8)
struct FUAEscapeInteractTextTable : FTableRowBase
{
	int32_t EscapeInteractID; // 0x8(0x4)
	uint8_t Pad_0xC[0x4]; // 0xC(0x4)
	struct FText InteractText; // 0x10(0x18)
};

// Object: ScriptStruct UACommon.UAPlayerEscapeShowRow
// Size: 0x28 (Inherited: 0x8)
struct FUAPlayerEscapeShowRow : FTableRowBase
{
	bool Enable; // 0x8(0x1)
	uint8_t Pad_0x9[0x3]; // 0x9(0x3)
	int32_t EscapePointID; // 0xC(0x4)
	int32_t MaxPlayerNum; // 0x10(0x4)
	float playtime; // 0x14(0x4)
	struct TArray<struct APlayerController*> PCArr; // 0x18(0x10)
};

// Object: ScriptStruct UACommon.UAEscapeTextTableRow
// Size: 0x120 (Inherited: 0x8)
struct FUAEscapeTextTableRow : FTableRowBase
{
	int32_t EscapePointID; // 0x8(0x4)
	uint8_t Pad_0xC[0x4]; // 0xC(0x4)
	struct FText EscapeName; // 0x10(0x18)
	struct FText ConditionDescription; // 0x28(0x18)
	struct FText ConditionPassText; // 0x40(0x18)
	struct FText EscapeDescription; // 0x58(0x18)
	struct FText RemainTimeText; // 0x70(0x18)
	struct FText AlreadyFailText; // 0x88(0x18)
	int32_t EscapeReportID; // 0xA0(0x4)
	uint8_t Pad_0xA4[0x4]; // 0xA4(0x4)
	struct FText PersonHitContent; // 0xA8(0x18)
	struct FText GlobalHitContent; // 0xC0(0x18)
	struct FText GlobalCloseHitContent; // 0xD8(0x18)
	struct FText GlobalLeftTimeHitContent_OpenEscape; // 0xF0(0x18)
	struct FText GlobalLeftTimeHitContent_CloseEscape; // 0x108(0x18)
};

// Object: ScriptStruct UACommon.PanelLayerTableRow
// Size: 0x20 (Inherited: 0x8)
struct FPanelLayerTableRow : FTableRowBase
{
	struct FString LayerName; // 0x8(0x10)
	uint32_t StartZOrder; // 0x18(0x4)
	uint8_t Pad_0x1C[0x4]; // 0x1C(0x4)
};

// Object: ScriptStruct UACommon.ModuleContextConfTableRow
// Size: 0x38 (Inherited: 0x8)
struct FModuleContextConfTableRow : FTableRowBase
{
	struct FString Name; // 0x8(0x10)
	struct FString LevelPath; // 0x18(0x10)
	struct FString Desc; // 0x28(0x10)
};

// Object: ScriptStruct UACommon.UAGameBigMapModuleModeTable
// Size: 0x50 (Inherited: 0x8)
struct FUAGameBigMapModuleModeTable : FTableRowBase
{
	struct TSoftClassPtr<struct UObject*> BigMapModule; // 0x8(0x28)
	struct FText DisplayName; // 0x30(0x18)
	bool Enable; // 0x48(0x1)
	bool Switchable; // 0x49(0x1)
	bool defaultState; // 0x4A(0x1)
	uint8_t Pad_0x4B[0x5]; // 0x4B(0x5)
};

// Object: ScriptStruct UACommon.UAHighResourceMarkTable
// Size: 0x80 (Inherited: 0x8)
struct FUAHighResourceMarkTable : FTableRowBase
{
	int32_t LandmarkID; // 0x8(0x4)
	uint8_t Pad_0xC[0x4]; // 0xC(0x4)
	struct FText LandMarkName; // 0x10(0x18)
	int32_t MapID; // 0x28(0x4)
	struct FVector2D WorldLocation; // 0x2C(0x8)
	uint8_t Pad_0x34[0x4]; // 0x34(0x4)
	struct TSoftClassPtr<struct UUserWidget*> TemplateUMG_Resource; // 0x38(0x28)
	float StartAtScale; // 0x60(0x4)
	float EndAtScale; // 0x64(0x4)
	bool ShowAtInit; // 0x68(0x1)
	bool DynamicSize; // 0x69(0x1)
	uint8_t Pad_0x6A[0x2]; // 0x6A(0x2)
	int32_t InitSize; // 0x6C(0x4)
	struct TArray<int32_t> AreaIDs; // 0x70(0x10)
};

// Object: ScriptStruct UACommon.UAGameLandmarkTable
// Size: 0x48 (Inherited: 0x8)
struct FUAGameLandmarkTable : FTableRowBase
{
	int32_t MapID; // 0x8(0x4)
	int32_t LandmarkID; // 0xC(0x4)
	struct FText LandMarkName; // 0x10(0x18)
	struct FVector2D WorldLocation; // 0x28(0x8)
	float TextScale; // 0x30(0x4)
	uint8_t Pad_0x34[0x4]; // 0x34(0x4)
	struct UCurveFloat* RenderOpacityCurve; // 0x38(0x8)
	int32_t Priority; // 0x40(0x4)
	ELandmarkLevel Level; // 0x44(0x1)
	uint8_t Pad_0x45[0x3]; // 0x45(0x3)
};

// Object: ScriptStruct UACommon.UAGameBigMapEffectTable
// Size: 0x68 (Inherited: 0x8)
struct FUAGameBigMapEffectTable : FTableRowBase
{
	int32_t messageId; // 0x8(0x4)
	int32_t MapID; // 0xC(0x4)
	int32_t LandmarkID; // 0x10(0x4)
	uint8_t Pad_0x14[0x4]; // 0x14(0x4)
	struct TSoftClassPtr<struct UUserWidget*> TemplateUMG_Resource; // 0x18(0x28)
	float StartAtScale; // 0x40(0x4)
	float EndAtScale; // 0x44(0x4)
	bool ShowAtInit; // 0x48(0x1)
	bool DynamicSize; // 0x49(0x1)
	uint8_t Pad_0x4A[0x2]; // 0x4A(0x2)
	int32_t InitSize; // 0x4C(0x4)
	struct TArray<int32_t> AreaIDs; // 0x50(0x10)
	bool bShowInMiniMap; // 0x60(0x1)
	uint8_t Pad_0x61[0x7]; // 0x61(0x7)
};

// Object: ScriptStruct UACommon.UALootPointInfo
// Size: 0x68 (Inherited: 0x8)
struct FUALootPointInfo : FTableRowBase
{
	int32_t MapID; // 0x8(0x4)
	int32_t LootPointID; // 0xC(0x4)
	struct FVector Location; // 0x10(0xC)
	uint8_t Pad_0x1C[0x4]; // 0x1C(0x4)
	struct FText AreaName; // 0x20(0x18)
	int32_t AreaID; // 0x38(0x4)
	uint8_t Pad_0x3C[0x4]; // 0x3C(0x4)
	struct FString LevelPath; // 0x40(0x10)
	int32_t LootPointType; // 0x50(0x4)
	uint8_t Pad_0x54[0x4]; // 0x54(0x4)
	struct TArray<int32_t> AreaIDArray; // 0x58(0x10)
};

// Object: ScriptStruct UACommon.UABattleAutoQuickChat
// Size: 0xE0 (Inherited: 0x8)
struct FUABattleAutoQuickChat : FTableRowBase
{
	int32_t messageId; // 0x8(0x4)
	EUABattleAutoQuickChatMsgType MsgType; // 0xC(0x1)
	bool CanPlayVoiceInSimpleVersion; // 0xD(0x1)
	bool CanReply; // 0xE(0x1)
	bool IsManualTrigger; // 0xF(0x1)
	int32_t ManualTriggerHUDTime; // 0x10(0x4)
	uint8_t Pad_0x14[0x4]; // 0x14(0x4)
	struct TArray<EUABattleQuickChatFilterCondition> Filters; // 0x18(0x10)
	struct TArray<int32_t> ItemIDArray; // 0x28(0x10)
	struct TArray<int32_t> ItemTypeArray; // 0x38(0x10)
	struct TArray<struct FGameplayTag> GameplayTagArray; // 0x48(0x10)
	struct TArray<int32_t> MapSignIdArray; // 0x58(0x10)
	struct TArray<ENewTraceableMarkType> MapSignTypeArray; // 0x68(0x10)
	struct FString VoiceEventName; // 0x78(0x10)
	bool UseRangeVoice; // 0x88(0x1)
	uint8_t Pad_0x89[0x7]; // 0x89(0x7)
	struct FString VoicePath; // 0x90(0x10)
	int32_t VoiceCdId; // 0xA0(0x4)
	int32_t VoiceCdTime; // 0xA4(0x4)
	struct FText VoiceContent; // 0xA8(0x18)
	struct FText TipMsgText; // 0xC0(0x18)
	int32_t ContentMsgCDId; // 0xD8(0x4)
	int32_t ContentMsgCDTime; // 0xDC(0x4)
};

// Object: ScriptStruct UACommon.UABattleQuickChat
// Size: 0x68 (Inherited: 0x8)
struct FUABattleQuickChat : FTableRowBase
{
	int32_t messageId; // 0x8(0x4)
	uint8_t Pad_0xC[0x4]; // 0xC(0x4)
	struct FString ChatType; // 0x10(0x10)
	struct FText ListName; // 0x20(0x18)
	struct FText ChatContent; // 0x38(0x18)
	struct FText ChatSound; // 0x50(0x18)
};

// Object: ScriptStruct UACommon.UAGamePadMessageTable
// Size: 0x10 (Inherited: 0x8)
struct FUAGamePadMessageTable : FTableRowBase
{
	int32_t messageId; // 0x8(0x4)
	EUAGamePadTable GamePadWidgets; // 0xC(0x1)
	bool GamePadWidgetVisibility; // 0xD(0x1)
	EGamePadEffectTable GamePadEffectWidgets; // 0xE(0x1)
	bool GamePadEffectWidgetVisibility; // 0xF(0x1)
};

// Object: ScriptStruct UACommon.UATaskTypeTable
// Size: 0x38 (Inherited: 0x8)
struct FUATaskTypeTable : FTableRowBase
{
	uint32_t Type; // 0x8(0x4)
	uint8_t Pad_0xC[0x4]; // 0xC(0x4)
	struct FText TypeDesc; // 0x10(0x18)
	struct FString IconPath; // 0x28(0x10)
};

// Object: ScriptStruct UACommon.UASettleTipsConfigTable
// Size: 0x40 (Inherited: 0x8)
struct FUASettleTipsConfigTable : FTableRowBase
{
	struct FString Describe; // 0x8(0x10)
	int32_t Priority; // 0x18(0x4)
	uint8_t Pad_0x1C[0x4]; // 0x1C(0x4)
	struct TArray<struct FUASettleFilter> Filters; // 0x20(0x10)
	struct TArray<struct FString> TipKeys; // 0x30(0x10)
};

// Object: ScriptStruct UACommon.UASettleFilter
// Size: 0x30 (Inherited: 0x0)
struct FUASettleFilter
{
	struct FString ArgName; // 0x0(0x10)
	EUASettleFilterType FilterType; // 0x10(0x1)
	uint8_t Pad_0x11[0x7]; // 0x11(0x7)
	struct TArray<int32_t> Values; // 0x18(0x10)
	int32_t MinValue; // 0x28(0x4)
	int32_t MaxValue; // 0x2C(0x4)
};

// Object: ScriptStruct UACommon.UASettleUIConfigTable
// Size: 0x80 (Inherited: 0x8)
struct FUASettleUIConfigTable : FTableRowBase
{
	struct FString Describe; // 0x8(0x10)
	int32_t Priority; // 0x18(0x4)
	EUASettleUIType UIType; // 0x1C(0x1)
	uint8_t Pad_0x1D[0x3]; // 0x1D(0x3)
	struct TArray<struct FUASettleFilter> Filters; // 0x20(0x10)
	struct TSet<struct FString> WidgetNames; // 0x30(0x50)
};

// Object: ScriptStruct UACommon.UABattleEventPointsTable
// Size: 0x28 (Inherited: 0x8)
struct FUABattleEventPointsTable : FTableRowBase
{
	struct FString Describe; // 0x8(0x10)
	struct TArray<struct FUABattleEventPoint> BattleEventPoints; // 0x18(0x10)
};

// Object: ScriptStruct UACommon.UABattleEventPoint
// Size: 0x40 (Inherited: 0x0)
struct FUABattleEventPoint
{
	uint32_t EventId; // 0x0(0x4)
	uint32_t Timestamp; // 0x4(0x4)
	struct FVector position; // 0x8(0xC)
	uint8_t Pad_0x14[0x4]; // 0x14(0x4)
	int64_t Value; // 0x18(0x8)
	struct TArray<struct FString> Params; // 0x20(0x10)
	struct FString Describe; // 0x30(0x10)
};

// Object: ScriptStruct UACommon.UABattleEventTable
// Size: 0xE0 (Inherited: 0x8)
struct FUABattleEventTable : FTableRowBase
{
	struct FString Describe; // 0x8(0x10)
	bool Enabled; // 0x18(0x1)
	uint8_t Pad_0x19[0x7]; // 0x19(0x7)
	struct TArray<uint64_t> DisabledModeIDs; // 0x20(0x10)
	EUAStatisMethod StatisMethod; // 0x30(0x1)
	bool ExcludeSameTeam; // 0x31(0x1)
	uint8_t Pad_0x32[0x6]; // 0x32(0x6)
	struct TArray<struct FUAStatisFilter> Filters; // 0x38(0x10)
	int32_t MaxTimesInSecond; // 0x48(0x4)
	int32_t CutGroup; // 0x4C(0x4)
	bool ShouldCombine; // 0x50(0x1)
	uint8_t Pad_0x51[0x3]; // 0x51(0x3)
	int32_t Weight; // 0x54(0x4)
	float CutTrendArgsOnConstant; // 0x58(0x4)
	uint8_t Pad_0x5C[0x4]; // 0x5C(0x4)
	struct TArray<struct FUACutTrendArgs> CutTrendArgsOnDistance; // 0x60(0x10)
	struct TArray<struct FUACutTrendArgs> CutTrendArgsOnDeltaTime; // 0x70(0x10)
	struct TArray<struct FUACutTrendArgs> CutTrendArgsOnEventValue; // 0x80(0x10)
	struct FString DescribeWord; // 0x90(0x10)
	struct TArray<struct FUADescribeWordArgs> DescribeWordArgsList; // 0xA0(0x10)
	struct FString CombinedDescribeWord; // 0xB0(0x10)
	struct TArray<struct FUADescribeWordArgs> CombinedDescribeWordArgsList; // 0xC0(0x10)
	bool EnabledBrilliantTime; // 0xD0(0x1)
	uint8_t Pad_0xD1[0x3]; // 0xD1(0x3)
	float TimeBackwardOffset; // 0xD4(0x4)
	float TimeForwardOffset; // 0xD8(0x4)
	uint8_t Pad_0xDC[0x4]; // 0xDC(0x4)
};

// Object: ScriptStruct UACommon.UADescribeWordArgs
// Size: 0x20 (Inherited: 0x8)
struct FUADescribeWordArgs : FTableRowBase
{
	struct FString arg; // 0x8(0x10)
	EUAArgResolveMethod ResolveMethod; // 0x18(0x1)
	uint8_t Pad_0x19[0x7]; // 0x19(0x7)
};

// Object: ScriptStruct UACommon.UACutTrendArgs
// Size: 0x18 (Inherited: 0x8)
struct FUACutTrendArgs : FTableRowBase
{
	float A; // 0x8(0x4)
	float B; // 0xC(0x4)
	float N; // 0x10(0x4)
	uint8_t Pad_0x14[0x4]; // 0x14(0x4)
};

// Object: ScriptStruct UACommon.UAStatisFilter
// Size: 0x28 (Inherited: 0x8)
struct FUAStatisFilter : FTableRowBase
{
	struct TArray<struct FUAStatisParamInfo> Params; // 0x8(0x10)
	struct TArray<struct FString> ParamDescription; // 0x18(0x10)
};

// Object: ScriptStruct UACommon.UAStatisParamInfo
// Size: 0x38 (Inherited: 0x8)
struct FUAStatisParamInfo : FTableRowBase
{
	int32_t ParamIndex; // 0x8(0x4)
	EUAStatisParamFilterType CompareType; // 0xC(0x1)
	uint8_t Pad_0xD[0x3]; // 0xD(0x3)
	int64_t CompareValue; // 0x10(0x8)
	int64_t CompareValueExt; // 0x18(0x8)
	bool Detail; // 0x20(0x1)
	uint8_t Pad_0x21[0x7]; // 0x21(0x7)
	struct TArray<int64_t> ValueList; // 0x28(0x10)
};

// Object: ScriptStruct UACommon.UAPVEStatisTable
// Size: 0x80 (Inherited: 0x8)
struct FUAPVEStatisTable : FTableRowBase
{
	struct FString Describe; // 0x8(0x10)
	struct TArray<int64_t> EnabledModeIDs; // 0x18(0x10)
	int64_t StatisDataID; // 0x28(0x8)
	EUAPVEMissionObjectiveMethod ObjectiveMethod; // 0x30(0x1)
	uint8_t Pad_0x31[0x7]; // 0x31(0x7)
	int64_t Param; // 0x38(0x8)
	int64_t MaxTimes; // 0x40(0x8)
	bool bShowInGame; // 0x48(0x1)
	uint8_t Pad_0x49[0x7]; // 0x49(0x7)
	struct FText ShowText; // 0x50(0x18)
	EUAPVEMissionProgressMethod ProgressMethod; // 0x68(0x1)
	uint8_t Pad_0x69[0x7]; // 0x69(0x7)
	struct FString Note; // 0x70(0x10)
};

// Object: ScriptStruct UACommon.UAStatisTable
// Size: 0x48 (Inherited: 0x8)
struct FUAStatisTable : FTableRowBase
{
	struct FString Describe; // 0x8(0x10)
	struct TArray<uint64_t> DisabledModeIDs; // 0x18(0x10)
	EUAStatisMethod StatisMethod; // 0x28(0x1)
	bool ExcludeSameTeam; // 0x29(0x1)
	bool ExcludeSameInst; // 0x2A(0x1)
	bool RecordEvent; // 0x2B(0x1)
	uint8_t Pad_0x2C[0x4]; // 0x2C(0x4)
	struct TArray<struct FUAStatisFilter> Filters; // 0x30(0x10)
	int32_t EventCount; // 0x40(0x4)
	bool bClearWhenReborn; // 0x44(0x1)
	uint8_t Pad_0x45[0x3]; // 0x45(0x3)
};

// Object: ScriptStruct UACommon.UAServiceTable
// Size: 0x28 (Inherited: 0x8)
struct FUAServiceTable : FTableRowBase
{
	struct FString InitContext; // 0x8(0x10)
	struct FString ResetContext; // 0x18(0x10)
};

// Object: ScriptStruct UACommon.UAModuleTable
// Size: 0x28 (Inherited: 0x8)
struct FUAModuleTable : FTableRowBase
{
	struct FString Context; // 0x8(0x10)
	struct FString DefaultPanel; // 0x18(0x10)
};

// Object: ScriptStruct UACommon.UAModuleContextTable
// Size: 0x28 (Inherited: 0x8)
struct FUAModuleContextTable : FTableRowBase
{
	struct FString Name; // 0x8(0x10)
	struct FString LevelPath; // 0x18(0x10)
};

// Object: ScriptStruct UACommon.UAGachaMapTable
// Size: 0x20 (Inherited: 0x8)
struct FUAGachaMapTable : FTableRowBase
{
	uint64_t itemID; // 0x8(0x8)
	uint32_t WeaponId; // 0x10(0x4)
	uint32_t Num; // 0x14(0x4)
	uint32_t Weight; // 0x18(0x4)
	uint8_t Pad_0x1C[0x4]; // 0x1C(0x4)
};

// Object: ScriptStruct UACommon.UAVestBagGridTable
// Size: 0x110 (Inherited: 0x8)
struct FUAVestBagGridTable : FTableRowBase
{
	struct FString Name; // 0x8(0x10)
	uint32_t Seperated; // 0x18(0x4)
	uint32_t SizeX_1; // 0x1C(0x4)
	uint32_t SizeY_1; // 0x20(0x4)
	float PosX_1; // 0x24(0x4)
	float PosY_1; // 0x28(0x4)
	uint32_t SizeX_2; // 0x2C(0x4)
	uint32_t SizeY_2; // 0x30(0x4)
	float PosX_2; // 0x34(0x4)
	float PosY_2; // 0x38(0x4)
	uint32_t SizeX_3; // 0x3C(0x4)
	uint32_t SizeY_3; // 0x40(0x4)
	float PosX_3; // 0x44(0x4)
	float PosY_3; // 0x48(0x4)
	uint32_t SizeX_4; // 0x4C(0x4)
	uint32_t SizeY_4; // 0x50(0x4)
	float PosX_4; // 0x54(0x4)
	float PosY_4; // 0x58(0x4)
	uint32_t SizeX_5; // 0x5C(0x4)
	uint32_t SizeY_5; // 0x60(0x4)
	float PosX_5; // 0x64(0x4)
	float PosY_5; // 0x68(0x4)
	uint32_t SizeX_6; // 0x6C(0x4)
	uint32_t SizeY_6; // 0x70(0x4)
	float PosX_6; // 0x74(0x4)
	float PosY_6; // 0x78(0x4)
	uint32_t SizeX_7; // 0x7C(0x4)
	uint32_t SizeY_7; // 0x80(0x4)
	float PosX_7; // 0x84(0x4)
	float PosY_7; // 0x88(0x4)
	uint32_t SizeX_8; // 0x8C(0x4)
	uint32_t SizeY_8; // 0x90(0x4)
	float PosX_8; // 0x94(0x4)
	float PosY_8; // 0x98(0x4)
	uint32_t SizeX_9; // 0x9C(0x4)
	uint32_t SizeY_9; // 0xA0(0x4)
	float PosX_9; // 0xA4(0x4)
	float PosY_9; // 0xA8(0x4)
	uint32_t SizeX_10; // 0xAC(0x4)
	uint32_t SizeY_10; // 0xB0(0x4)
	float PosX_10; // 0xB4(0x4)
	float PosY_10; // 0xB8(0x4)
	uint32_t SizeX_11; // 0xBC(0x4)
	uint32_t SizeY_11; // 0xC0(0x4)
	float PosX_11; // 0xC4(0x4)
	float PosY_11; // 0xC8(0x4)
	uint32_t SizeX_12; // 0xCC(0x4)
	uint32_t SizeY_12; // 0xD0(0x4)
	float PosX_12; // 0xD4(0x4)
	float PosY_12; // 0xD8(0x4)
	uint32_t SizeX_13; // 0xDC(0x4)
	uint32_t SizeY_13; // 0xE0(0x4)
	float PosX_13; // 0xE4(0x4)
	float PosY_13; // 0xE8(0x4)
	uint32_t SizeX_14; // 0xEC(0x4)
	uint32_t SizeY_14; // 0xF0(0x4)
	float PosX_14; // 0xF4(0x4)
	float PosY_14; // 0xF8(0x4)
	uint32_t SizeX_15; // 0xFC(0x4)
	uint32_t SizeY_15; // 0x100(0x4)
	float PosX_15; // 0x104(0x4)
	float PosY_15; // 0x108(0x4)
	uint8_t Pad_0x10C[0x4]; // 0x10C(0x4)
};

// Object: ScriptStruct UACommon.UABattleMapTable
// Size: 0x98 (Inherited: 0x8)
struct FUABattleMapTable : FTableRowBase
{
	struct FString MapLevel; // 0x8(0x10)
	struct FString MobileMapLevel; // 0x18(0x10)
	uint32_t ShowIndex; // 0x28(0x4)
	uint8_t Pad_0x2C[0x4]; // 0x2C(0x4)
	struct FString Name; // 0x30(0x10)
	struct FString Picture; // 0x40(0x10)
	struct FString Desc; // 0x50(0x10)
	uint32_t Time; // 0x60(0x4)
	uint32_t DayStartTime; // 0x64(0x4)
	uint32_t MinPMC; // 0x68(0x4)
	uint32_t MaxPMC; // 0x6C(0x4)
	uint32_t IsScavJoin; // 0x70(0x4)
	uint32_t ScavJoinTimeBegin; // 0x74(0x4)
	uint32_t ScavJoinTimeEnd; // 0x78(0x4)
	uint32_t NormalBeginTime; // 0x7C(0x4)
	uint32_t NormalBeginPersonNum; // 0x80(0x4)
	uint32_t LongTimeBeginTime; // 0x84(0x4)
	uint32_t LongTimeBeginPersonNum; // 0x88(0x4)
	uint32_t TimeoutTime; // 0x8C(0x4)
	uint32_t SpawnAIPersonNum; // 0x90(0x4)
	uint8_t Pad_0x94[0x4]; // 0x94(0x4)
};

// Object: ScriptStruct UACommon.UAGlobalNumTable
// Size: 0x28 (Inherited: 0x8)
struct FUAGlobalNumTable : FTableRowBase
{
	struct FText Name; // 0x8(0x18)
	float Val; // 0x20(0x4)
	uint8_t Pad_0x24[0x4]; // 0x24(0x4)
};

// Object: ScriptStruct UACommon.UABattleresultTable
// Size: 0x28 (Inherited: 0x8)
struct FUABattleresultTable : FTableRowBase
{
	uint32_t DataID; // 0x8(0x4)
	uint32_t AttributeType; // 0xC(0x4)
	uint32_t Proportion; // 0x10(0x4)
	uint8_t Pad_0x14[0x4]; // 0x14(0x4)
	struct FString Describe; // 0x18(0x10)
};

// Object: ScriptStruct UACommon.UAItemContextMenuTable
// Size: 0x38 (Inherited: 0x8)
struct FUAItemContextMenuTable : FTableRowBase
{
	struct FText DisplayName; // 0x8(0x18)
	uint32_t DisplayIconID; // 0x20(0x4)
	uint32_t ShowIndex; // 0x24(0x4)
	struct FString UseTip; // 0x28(0x10)
};

// Object: ScriptStruct UACommon.TextLocalizationPatch
// Size: 0x90 (Inherited: 0x0)
struct FTextLocalizationPatch
{
	struct FString NativeCulture; // 0x0(0x10)
	struct FString Namespace; // 0x10(0x10)
	struct FString Key; // 0x20(0x10)
	struct FString NativeString; // 0x30(0x10)
	struct TMap<struct FString, struct FString> LocalizedStrings; // 0x40(0x50)
};

// Object: ScriptStruct UACommon.EscapePerformanceData
// Size: 0x50 (Inherited: 0x0)
struct FEscapePerformanceData
{
	struct FSoftObjectPath PerformanceSequence; // 0x0(0x18)
	int32_t MaxSeat; // 0x18(0x4)
	float PerformanceDuration; // 0x1C(0x4)
	bool bNeedRebase; // 0x20(0x1)
	bool bSwitchToMainWeapon; // 0x21(0x1)
	uint8_t Pad_0x22[0x2]; // 0x22(0x2)
	struct FVector RebaseLocation; // 0x24(0xC)
	struct FRotator RebaseRotation; // 0x30(0xC)
	uint8_t Pad_0x3C[0x4]; // 0x3C(0x4)
	struct FString AdditionalLevel; // 0x40(0x10)
};

// Object: ScriptStruct UACommon.SettlementPerformanceStruct
// Size: 0x50 (Inherited: 0x0)
struct FSettlementPerformanceStruct
{
	struct TMap<EPlayerEndGameType, struct FEscapePerformanceData> SettlementPerformanceMap; // 0x0(0x50)
};

// Object: ScriptStruct UACommon.UASettlementPerformanceTable
// Size: 0xC0 (Inherited: 0x20)
struct FUASettlementPerformanceTable : FModeTableRowBase
{
	struct FSettlementPerformanceStruct BaseEscapePerformanceData; // 0x20(0x50)
	struct TMap<int32_t, struct FSettlementPerformanceStruct> ActivityEscapePerformanceData; // 0x70(0x50)
};

// Object: ScriptStruct UACommon.UABloodstoneRewardTable
// Size: 0x70 (Inherited: 0x20)
struct FUABloodstoneRewardTable : FModeTableRowBase
{
	int32_t MaxCharacterInteractCount; // 0x1C(0x4)
	struct TMap<int32_t, int32_t> BloodstoneRewards; // 0x20(0x50)
};

// Object: ScriptStruct UACommon.UAPersonalCompetitionInventoryDataTableRow
// Size: 0x38 (Inherited: 0x20)
struct FUAPersonalCompetitionInventoryDataTableRow : FModeTableRowBase
{
	struct TArray<uint32_t> InventoryArray; // 0x20(0x10)
	int32_t DefaultEquipID; // 0x30(0x4)
	uint8_t Pad_0x34[0x4]; // 0x34(0x4)
};

// Object: ScriptStruct UACommon.SGInventoryPackagePoolPriceRow
// Size: 0x8 (Inherited: 0x0)
struct FSGInventoryPackagePoolPriceRow
{
	int32_t PoolID; // 0x0(0x4)
	int32_t price; // 0x4(0x4)
};

// Object: ScriptStruct UACommon.SGModeReinforcementPackagePoolTable
// Size: 0x28 (Inherited: 0x20)
struct FSGModeReinforcementPackagePoolTable : FModeTableRowBase
{
	struct FSGInventoryPackagePoolPriceRow InventoryPackagePoolPrice; // 0x1C(0x8)
};

// Object: ScriptStruct UACommon.UADogTagReplaceTableFromActivity
// Size: 0x60 (Inherited: 0x10)
struct FUADogTagReplaceTableFromActivity : FActivityTableRowBase
{
	bool bIsReplaceDogTag; // 0xC(0x1)
	struct TMap<int32_t, int32_t> ActivityDogTagReplaceMap; // 0x10(0x50)
};

// Object: ScriptStruct UACommon.ActivityRandomMissionConfig
// Size: 0x18 (Inherited: 0x0)
struct FActivityRandomMissionConfig
{
	float Probability; // 0x0(0x4)
	int32_t RandomTimes; // 0x4(0x4)
	struct TArray<struct FMissionClassWeightConfig> MissionList; // 0x8(0x10)
};

// Object: ScriptStruct UACommon.ActivityResidentMissionConfig
// Size: 0x10 (Inherited: 0x0)
struct FActivityResidentMissionConfig
{
	struct TArray<struct FMissionClassProbabilityConfig> MissionList; // 0x0(0x10)
};

// Object: ScriptStruct UACommon.MissionClassConfigBase
// Size: 0x40 (Inherited: 0x0)
struct FMissionClassConfigBase
{
	struct TArray<int32_t> EnableSpecialIDs; // 0x0(0x10)
	struct TArray<int32_t> DisableSpecialIDs; // 0x10(0x10)
	struct TArray<int32_t> EnableDifficulties; // 0x20(0x10)
	struct TArray<int32_t> DisableDifficulties; // 0x30(0x10)
};

// Object: ScriptStruct UACommon.ActivityMissionConfig
// Size: 0xC0 (Inherited: 0x40)
struct FActivityMissionConfig : FMissionClassConfigBase
{
	struct FString LevelName; // 0x40(0x10)
	struct FString LabelLevel; // 0x50(0x10)
	struct FActivityResidentMissionConfig ResidentMission; // 0x60(0x10)
	struct FActivityRandomMissionConfig RandomMission; // 0x70(0x18)
	int32_t MaxActivityTaskNum; // 0x88(0x4)
	bool bCloseDynamicMission; // 0x8C(0x1)
	bool bCloseOtherActivities; // 0x8D(0x1)
	uint8_t Pad_0x8E[0x2]; // 0x8E(0x2)
	struct TArray<int32_t> CloseOtherActivityIDs; // 0x90(0x10)
	struct TArray<struct TSoftClassPtr<struct UActorComponent*>> GameStateComponentList; // 0xA0(0x10)
	struct TArray<struct TSoftClassPtr<struct UActorComponent*>> PlayerStateComponentList; // 0xB0(0x10)
};

// Object: ScriptStruct UACommon.UAModeActivityMissionTable
// Size: 0x70 (Inherited: 0x20)
struct FUAModeActivityMissionTable : FModeTableRowBase
{
	struct TMap<int32_t, struct FActivityMissionConfig> ActivityMissionMap; // 0x20(0x50)
};

// Object: ScriptStruct UACommon.MissionClassWeightConfig
// Size: 0x90 (Inherited: 0x40)
struct FMissionClassWeightConfig : FMissionClassConfigBase
{
	struct TSoftObjectPtr<UMFMissionFlow> MissionFlowAsset; // 0x40(0x28)
	int32_t Weight; // 0x68(0x4)
	uint8_t Pad_0x6C[0x4]; // 0x6C(0x4)
	struct TArray<struct TSoftClassPtr<struct UActorComponent*>> GameStateComponentList; // 0x70(0x10)
	struct TArray<struct TSoftClassPtr<struct UActorComponent*>> PlayerStateComponentList; // 0x80(0x10)
};

// Object: ScriptStruct UACommon.MissionClassProbabilityConfig
// Size: 0x90 (Inherited: 0x40)
struct FMissionClassProbabilityConfig : FMissionClassConfigBase
{
	struct TSoftObjectPtr<UMFMissionFlow> MissionFlowAsset; // 0x40(0x28)
	float Probability; // 0x68(0x4)
	bool bIgnoreActivitiy; // 0x6C(0x1)
	uint8_t Pad_0x6D[0x3]; // 0x6D(0x3)
	struct TArray<struct TSoftClassPtr<struct UActorComponent*>> GameStateComponentList; // 0x70(0x10)
	struct TArray<struct TSoftClassPtr<struct UActorComponent*>> PlayerStateComponentList; // 0x80(0x10)
};

// Object: ScriptStruct UACommon.ActivityFeatureComponentEntry
// Size: 0x58 (Inherited: 0x0)
struct FActivityFeatureComponentEntry
{
	struct TSoftClassPtr<struct AActor*> ActorClass; // 0x0(0x28)
	struct TSoftClassPtr<struct UActorComponent*> ComponentClass; // 0x28(0x28)
	uint8_t bClientComponent : 1; // 0x50(0x1), Mask(0x1)
	uint8_t bServerComponent : 1; // 0x50(0x1), Mask(0x2)
	uint8_t BitPad_0x50_2 : 6; // 0x50(0x1)
	uint8_t Pad_0x51[0x7]; // 0x51(0x7)
};

// Object: ScriptStruct UACommon.DynamicRandomMissionConfig
// Size: 0x18 (Inherited: 0x0)
struct FDynamicRandomMissionConfig
{
	float Probability; // 0x0(0x4)
	int32_t RandomTimes; // 0x4(0x4)
	struct TArray<struct FMissionClassWeightConfig> MissionList; // 0x8(0x10)
};

// Object: ScriptStruct UACommon.DynamicResidentMissionConfig
// Size: 0x10 (Inherited: 0x0)
struct FDynamicResidentMissionConfig
{
	struct TArray<struct FMissionClassProbabilityConfig> MissionList; // 0x0(0x10)
};

// Object: ScriptStruct UACommon.UAModeDynamicMissionTable
// Size: 0x80 (Inherited: 0x20)
struct FUAModeDynamicMissionTable : FModeTableRowBase
{
	struct FString LevelName; // 0x20(0x10)
	struct FDynamicResidentMissionConfig ResidentMission; // 0x30(0x10)
	struct FDynamicRandomMissionConfig RandomMission; // 0x40(0x18)
	int32_t MaxDynamicTaskNum; // 0x58(0x4)
	uint8_t Pad_0x5C[0x4]; // 0x5C(0x4)
	struct TArray<struct TSoftClassPtr<struct UActorComponent*>> GameStateComponentList; // 0x60(0x10)
	struct TArray<struct TSoftClassPtr<struct UActorComponent*>> PlayerStateComponentList; // 0x70(0x10)
};

// Object: ScriptStruct UACommon.UALimitAreaPointConfigTable
// Size: 0x68 (Inherited: 0x20)
struct FUALimitAreaPointConfigTable : FModeTableRowBase
{
	struct FString Name; // 0x20(0x10)
	struct TArray<struct FRandomAreaPointStructData> RandomAreaPointWavePickArray; // 0x30(0x10)
	bool bForceUseDefaultAreaPointArray; // 0x40(0x1)
	uint8_t Pad_0x41[0x7]; // 0x41(0x7)
	struct TArray<struct FVector> DefaultAreaPointArray; // 0x48(0x10)
	bool bEnablePoisonZonePartialDisplay; // 0x58(0x1)
	uint8_t Pad_0x59[0x3]; // 0x59(0x3)
	float MinDisplayDistance; // 0x5C(0x4)
	float MaxDisplayDistance; // 0x60(0x4)
	float SafeTimeInPoisonZone; // 0x64(0x4)
};

// Object: ScriptStruct UACommon.ActivityQuestDistributer
// Size: 0x10 (Inherited: 0x0)
struct FActivityQuestDistributer
{
	struct TArray<struct FQuestDistributerClassWithWeight> ActivityQuestDistributers; // 0x0(0x10)
};

// Object: ScriptStruct UACommon.UAModeQuestDistributerConfigTable
// Size: 0x90 (Inherited: 0x20)
struct FUAModeQuestDistributerConfigTable : FModeTableRowBase
{
	float LoadDistributerProbability; // 0x1C(0x4)
	struct TArray<struct FQuestDistributerClassWithWeight> NeedLoadQuestDistributer; // 0x20(0x10)
	int32_t RandomTimes; // 0x30(0x4)
	float ActivityLoadDistributerProbability; // 0x34(0x4)
	struct TMap<int32_t, struct FActivityQuestDistributer> ActivityNeedLoadQuestDistributer; // 0x38(0x50)
	int32_t ActivityRandomTimes; // 0x88(0x4)
};

// Object: ScriptStruct UACommon.QuestDistributerClassWithWeight
// Size: 0x30 (Inherited: 0x0)
struct FQuestDistributerClassWithWeight
{
	struct TSoftClassPtr<struct AMFQuestDistributerBase*> QuestDistributerClass; // 0x0(0x28)
	int32_t Weight; // 0x28(0x4)
	uint8_t Pad_0x2C[0x4]; // 0x2C(0x4)
};

// Object: ScriptStruct UACommon.UANewBagModeConfigTable
// Size: 0x20 (Inherited: 0x20)
struct FUANewBagModeConfigTable : FModeTableRowBase
{
	bool bShowBringOutValue; // 0x1C(0x1)
	bool bHideBagPanel; // 0x1D(0x1)
};

// Object: ScriptStruct UACommon.UAModeBigMapModuleConfigTable
// Size: 0x60 (Inherited: 0x20)
struct FUAModeBigMapModuleConfigTable : FModeTableRowBase
{
	struct TArray<struct TSoftClassPtr<struct UObject*>> AdditionModules; // 0x20(0x10)
	struct TArray<struct TSoftClassPtr<struct UObject*>> RemoveModules; // 0x30(0x10)
	struct TArray<struct TSoftClassPtr<struct UObject*>> AdditionModules_MiniMap; // 0x40(0x10)
	struct TArray<struct TSoftClassPtr<struct UObject*>> RemoveModules_MiniMap; // 0x50(0x10)
};

// Object: ScriptStruct UACommon.UAScriptLevelTable
// Size: 0x50 (Inherited: 0x20)
struct FUAScriptLevelTable : FModeTableRowBase
{
	struct TArray<struct FString> ScriptMaps; // 0x20(0x10)
	struct TArray<struct FString> AdditionIgnores; // 0x30(0x10)
	struct TArray<struct FString> AdditionLabelLevel; // 0x40(0x10)
};

// Object: ScriptStruct UACommon.EscapePreset
// Size: 0x50 (Inherited: 0x0)
struct FEscapePreset
{
	int32_t PresetIndex; // 0x0(0x4)
	uint8_t Pad_0x4[0x4]; // 0x4(0x4)
	struct TArray<int32_t> ConstantEscapePointIDs; // 0x8(0x10)
	int32_t ConstantNum; // 0x18(0x4)
	uint8_t Pad_0x1C[0x4]; // 0x1C(0x4)
	struct TArray<int32_t> RandomEscapePointIDs; // 0x20(0x10)
	int32_t RandomNum; // 0x30(0x4)
	uint8_t Pad_0x34[0x4]; // 0x34(0x4)
	struct TArray<struct FUAEscapeRandomStruct> RandomArr; // 0x38(0x10)
	bool bIsGlobalRandomPreset; // 0x48(0x1)
	uint8_t Pad_0x49[0x7]; // 0x49(0x7)
};

// Object: ScriptStruct UACommon.EscapeProbabilityReset
// Size: 0x8 (Inherited: 0x0)
struct FEscapeProbabilityReset
{
	float OpenProbability; // 0x0(0x4)
	float ShowProbability; // 0x4(0x4)
};

// Object: ScriptStruct UACommon.UAModeEscapeTable
// Size: 0xC0 (Inherited: 0x20)
struct FUAModeEscapeTable : FModeTableRowBase
{
	struct TMap<struct FString, struct FEscapePreset> EscapePresetMap; // 0x20(0x50)
	struct TMap<int32_t, struct FEscapeProbabilityReset> EscapeProbabilityResetMap; // 0x70(0x50)
};

// Object: ScriptStruct UACommon.UAEscapeRandomStruct
// Size: 0x18 (Inherited: 0x0)
struct FUAEscapeRandomStruct
{
	struct TArray<struct FUAEscapeRandomWeightStruct> EscapePointIDs; // 0x0(0x10)
	int32_t RandomNum; // 0x10(0x4)
	uint8_t Pad_0x14[0x4]; // 0x14(0x4)
};

// Object: ScriptStruct UACommon.UAEscapeRandomWeightStruct
// Size: 0x8 (Inherited: 0x0)
struct FUAEscapeRandomWeightStruct
{
	int32_t EscapePointID; // 0x0(0x4)
	int32_t Weight; // 0x4(0x4)
};

// Object: ScriptStruct UACommon.UAModeStartAndEscapeTable
// Size: 0x88 (Inherited: 0x20)
struct FUAModeStartAndEscapeTable : FModeTableRowBase
{
	struct FString LevelName; // 0x20(0x10)
	struct TArray<struct FString> AdditionLevelName; // 0x30(0x10)
	struct TArray<struct FUAPlayerStartPreset> PlayerStartPreset; // 0x40(0x10)
	int32_t GroupIndexExclusiveRandomNum; // 0x50(0x4)
	uint8_t Pad_0x54[0x4]; // 0x54(0x4)
	struct TArray<int32_t> GroupIndexExclusiveArr; // 0x58(0x10)
	struct TArray<struct FUAAIStartGroupData> AIStartAddition; // 0x68(0x10)
	float PMCCheckRadius; // 0x78(0x4)
	float EnemyCheckRadius; // 0x7C(0x4)
	float SecondEnemyCheckRadius; // 0x80(0x4)
	float TeamCheckRadius; // 0x84(0x4)
};

// Object: ScriptStruct UACommon.UAAIStartGroupData
// Size: 0x8 (Inherited: 0x0)
struct FUAAIStartGroupData
{
	int32_t GroupIndex; // 0x0(0x4)
	EPlayerTeamType StartPointType; // 0x4(0x1)
	uint8_t Pad_0x5[0x3]; // 0x5(0x3)
};

// Object: ScriptStruct UACommon.UAPlayerStartPreset
// Size: 0x28 (Inherited: 0x0)
struct FUAPlayerStartPreset
{
	struct FString Name; // 0x0(0x10)
	int32_t Weight; // 0x10(0x4)
	uint8_t Pad_0x14[0x4]; // 0x14(0x4)
	struct TArray<struct FUAPlayerStartGroupData> PlayerStart; // 0x18(0x10)
};

// Object: ScriptStruct UACommon.UAPlayerStartGroupData
// Size: 0x30 (Inherited: 0x0)
struct FUAPlayerStartGroupData
{
	int32_t GroupIndex; // 0x0(0x4)
	EStartPointType StartPointType; // 0x4(0x1)
	uint8_t Pad_0x5[0x3]; // 0x5(0x3)
	int32_t BigGroup; // 0x8(0x4)
	int32_t SecondGroup; // 0xC(0x4)
	int32_t Priority; // 0x10(0x4)
	int32_t Weight; // 0x14(0x4)
	struct FString EscapePreset; // 0x18(0x10)
	bool bHaveVehicleStart; // 0x28(0x1)
	uint8_t Pad_0x29[0x7]; // 0x29(0x7)
};

// Object: ScriptStruct UACommon.RespawnPreset
// Size: 0x10 (Inherited: 0x0)
struct FRespawnPreset
{
	struct TArray<int32_t> RespawnPointIDs; // 0x0(0x10)
};

// Object: ScriptStruct UACommon.GamePadConfigTable
// Size: 0xC8 (Inherited: 0x8)
struct FGamePadConfigTable : FTableRowBase
{
	struct FString WidgetName; // 0x8(0x10)
	struct TSoftClassPtr<struct UUserWidget*> TemplateUMG_Resource; // 0x18(0x28)
	struct FString LayerName; // 0x40(0x10)
	struct FVector2D position; // 0x50(0x8)
	struct FAnchors anchor; // 0x58(0x10)
	struct FVector2D Alignment; // 0x68(0x8)
	bool SizeToContent; // 0x70(0x1)
	uint8_t Pad_0x71[0x3]; // 0x71(0x3)
	int32_t ZOrder; // 0x74(0x4)
	int32_t PaintOffsetFlag; // 0x78(0x4)
	uint8_t Pad_0x7C[0x4]; // 0x7C(0x4)
	struct TArray<EGameModeName> GameModeNames; // 0x80(0x10)
	struct TArray<int32_t> MapIds; // 0x90(0x10)
	struct TArray<int32_t> ActivityIDs; // 0xA0(0x10)
	struct FMargin Margin; // 0xB0(0x10)
	bool bUseMargin; // 0xC0(0x1)
	uint8_t Pad_0xC1[0x7]; // 0xC1(0x7)
};

// Object: ScriptStruct UACommon.UAGameModeTableRow
// Size: 0xA0 (Inherited: 0x8)
struct FUAGameModeTableRow : FTableRowBase
{
	uint32_t Index; // 0x8(0x4)
	uint32_t MainModeID; // 0xC(0x4)
	struct FText MainModeName; // 0x10(0x18)
	uint32_t SubModeID; // 0x28(0x4)
	uint8_t Pad_0x2C[0x4]; // 0x2C(0x4)
	struct FText SubModeName; // 0x30(0x18)
	EGameModeName GameModeName; // 0x48(0x1)
	uint8_t Pad_0x49[0x7]; // 0x49(0x7)
	struct TSoftClassPtr<struct AGameModeBase*> GameModeClass; // 0x50(0x28)
	struct TSoftClassPtr<struct AGameStateBase*> GameStateClass; // 0x78(0x28)
};

// Object: ScriptStruct UACommon.PanelProfilerStack
// Size: 0x10 (Inherited: 0x0)
struct FPanelProfilerStack
{
	struct TArray<double> theStack; // 0x0(0x10)
};

// Object: Class UACommon.AsyncTaskCopyFile
// Size: 0x40 (Inherited: 0x30)
struct UAsyncTaskCopyFile : UBlueprintAsyncActionBase
{
	DEFINE_UE_CLASS_HELPERS(UAsyncTaskCopyFile, "AsyncTaskCopyFile")

	struct FMulticastInlineDelegate OnCompleted; // 0x30(0x10)

	// Object: DelegateFunction UACommon.AsyncTaskCopyFile.CopyFileDelegate__DelegateSignature
	// Flags: [MulticastDelegate|Public|Delegate]
	// Offset: 0x5d8cbc8
	// Params: [ Num(2) Size(0x11) ]
	void CopyFileDelegate__DelegateSignature(struct FString TargetPath, bool InResult);

	// Object: Function UACommon.AsyncTaskCopyFile.CopyFile
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x53fae80
	// Params: [ Num(4) Size(0x30) ]
	static struct UAsyncTaskCopyFile* CopyFile(struct FString InSource, struct FString InDest, bool InPhysical);
};

// Object: Class UACommon.AsyncTaskDownloadFile
// Size: 0xD8 (Inherited: 0x30)
struct UAsyncTaskDownloadFile : UBlueprintAsyncActionBase
{
	DEFINE_UE_CLASS_HELPERS(UAsyncTaskDownloadFile, "AsyncTaskDownloadFile")

	struct FMulticastInlineDelegate DownloadFileDelegate; // 0x30(0x10)
	uint8_t Pad_0x40[0x98]; // 0x40(0x98)

	// Object: Function UACommon.AsyncTaskDownloadFile.StartDownload
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x53fb4b4
	// Params: [ Num(1) Size(0x1) ]
	bool StartDownload();

	// Object: Function UACommon.AsyncTaskDownloadFile.SetFileTotalSize
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x53fb05c
	// Params: [ Num(1) Size(0x4) ]
	void SetFileTotalSize(int32_t InFileSize);

	// Object: Function UACommon.AsyncTaskDownloadFile.ResumeTask
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x53fb40c
	// Params: [ Num(1) Size(0x1) ]
	bool ResumeTask();

	// Object: Function UACommon.AsyncTaskDownloadFile.RequestFileHead
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x53fb4ec
	// Params: [ Num(1) Size(0x1) ]
	void RequestFileHead(bool InDownloadOnSucceed);

	// Object: Function UACommon.AsyncTaskDownloadFile.PauseTask
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x53fb444
	// Params: [ Num(1) Size(0x1) ]
	bool PauseTask();

	// Object: Function UACommon.AsyncTaskDownloadFile.GetTaskState
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x53fb024
	// Params: [ Num(1) Size(0x1) ]
	EDownloadFileState GetTaskState();

	// Object: Function UACommon.AsyncTaskDownloadFile.GetLastHttpCode
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x53fb040
	// Params: [ Num(1) Size(0x4) ]
	int32_t GetLastHttpCode();

	// Object: Function UACommon.AsyncTaskDownloadFile.GetFileURL
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x53fb33c
	// Params: [ Num(1) Size(0x10) ]
	struct FString GetFileURL();

	// Object: Function UACommon.AsyncTaskDownloadFile.GetFileTotalSize
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x53fb100
	// Params: [ Num(1) Size(0x4) ]
	int32_t GetFileTotalSize();

	// Object: Function UACommon.AsyncTaskDownloadFile.GetFileName
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x53fb154
	// Params: [ Num(2) Size(0x18) ]
	struct FString GetFileName(bool bFullPath);

	// Object: Function UACommon.AsyncTaskDownloadFile.GetDownloadedSize
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x53fb11c
	// Params: [ Num(1) Size(0x4) ]
	int32_t GetDownloadedSize();

	// Object: Function UACommon.AsyncTaskDownloadFile.GetCurrentSize
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x53fb138
	// Params: [ Num(1) Size(0x4) ]
	int32_t GetCurrentSize();

	// Object: DelegateFunction UACommon.AsyncTaskDownloadFile.DownloadFileDelegate__DelegateSignature
	// Flags: [MulticastDelegate|Public|Delegate]
	// Offset: 0x5d8cbc8
	// Params: [ Num(2) Size(0x9) ]
	void DownloadFileDelegate__DelegateSignature(struct UAsyncTaskDownloadFile* InObj, EDownloadFileState InEventID);

	// Object: Function UACommon.AsyncTaskDownloadFile.CreateDownloadFileTask
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x53fb59c
	// Params: [ Num(4) Size(0x30) ]
	static struct UAsyncTaskDownloadFile* CreateDownloadFileTask(struct FString URL, struct FString FileDirectory, bool InOverride);

	// Object: Function UACommon.AsyncTaskDownloadFile.CancelTask
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x53fb47c
	// Params: [ Num(1) Size(0x1) ]
	bool CancelTask();
};

// Object: Class UACommon.BFLPlatformFile
// Size: 0x28 (Inherited: 0x28)
struct UBFLPlatformFile : UBlueprintFunctionLibrary
{
	DEFINE_UE_CLASS_HELPERS(UBFLPlatformFile, "BFLPlatformFile")

	// Object: Function UACommon.BFLPlatformFile.VerifyPackageAndRestore
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x53fb7dc
	// Params: [ Num(5) Size(0x41) ]
	static bool VerifyPackageAndRestore(struct FString PackageFilePath, struct FString RestoredFilePath, struct FString& OutActualHash, struct FString& ErrMsg);

	// Object: Function UACommon.BFLPlatformFile.UnmountPak
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x53fc74c
	// Params: [ Num(2) Size(0x11) ]
	static bool UnmountPak(struct FString InPakFile);

	// Object: Function UACommon.BFLPlatformFile.StatDirectorySize_Physical
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x53fca98
	// Params: [ Num(4) Size(0x30) ]
	static int64_t StatDirectorySize_Physical(struct FString InDirectory, bool InWithSubDir, struct FString InExtName);

	// Object: Function UACommon.BFLPlatformFile.StatDirectorySize
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x53fcbe4
	// Params: [ Num(4) Size(0x30) ]
	static int64_t StatDirectorySize(struct FString InDirectory, bool InWithSubDir, struct FString InExtName);

	// Object: Function UACommon.BFLPlatformFile.SortStringArray
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x53fbcb4
	// Params: [ Num(3) Size(0x28) ]
	static struct TArray<struct FString> SortStringArray(const struct TArray<struct FString>& InVal, bool InReversed);

	// Object: Function UACommon.BFLPlatformFile.SetPakIndexSettings
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x93ca4ac
	// Params: [ Num(5) Size(0x5) ]
	static void SetPakIndexSettings(bool InKeepFullDirectory, bool InValidatePruning, bool InDelayPruning, bool InWritePathHashIndex, bool InWriteFullDirectoryIndex);

	// Object: Function UACommon.BFLPlatformFile.SaveStringToFile
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x918b288
	// Params: [ Num(3) Size(0x21) ]
	static bool SaveStringToFile(struct FString inString, struct FString InFilePath);

	// Object: Function UACommon.BFLPlatformFile.ReloadAssetRegistry
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x53fbdcc
	// Params: [ Num(1) Size(0x4) ]
	static int32_t ReloadAssetRegistry();

	// Object: Function UACommon.BFLPlatformFile.RedirectStderrFile
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x53fbaf8
	// Params: [ Num(1) Size(0x4) ]
	static void RedirectStderrFile(int32_t Step);

	// Object: Function UACommon.BFLPlatformFile.MoveFile
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x53fd178
	// Params: [ Num(3) Size(0x21) ]
	static bool MoveFile(struct FString InSourceFile, struct FString InDestFile);

	// Object: Function UACommon.BFLPlatformFile.MountPak
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x8d4e3a8
	// Params: [ Num(4) Size(0x29) ]
	static bool MountPak(struct FString InPakFile, int32_t InOrder, struct FString InMountPoint);

	// Object: Function UACommon.BFLPlatformFile.MergeStringArrays
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x53fbb90
	// Params: [ Num(3) Size(0x30) ]
	static struct TArray<struct FString> MergeStringArrays(const struct TArray<struct FString>& Array1, const struct TArray<struct FString>& Array2);

	// Object: Function UACommon.BFLPlatformFile.LoadFileToStringArray
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x53fcf64
	// Params: [ Num(2) Size(0x20) ]
	static struct TArray<struct FString> LoadFileToStringArray(struct FString InFilePath);

	// Object: Function UACommon.BFLPlatformFile.LoadFileToString_Physical
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x95a7e28
	// Params: [ Num(2) Size(0x20) ]
	static struct FString LoadFileToString_Physical(struct FString InFilePath);

	// Object: Function UACommon.BFLPlatformFile.LoadFileToString
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x909b2e4
	// Params: [ Num(2) Size(0x20) ]
	static struct FString LoadFileToString(struct FString InFilePath);

	// Object: Function UACommon.BFLPlatformFile.GetStringFromIni
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x53fc028
	// Params: [ Num(4) Size(0x40) ]
	static struct FString GetStringFromIni(struct FString InSection, struct FString InKey, struct FString InIniName);

	// Object: Function UACommon.BFLPlatformFile.GetStringArrayFromIni
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x53fbec8
	// Params: [ Num(4) Size(0x40) ]
	static struct TArray<struct FString> GetStringArrayFromIni(struct FString InSection, struct FString InKey, struct FString InIniName);

	// Object: Function UACommon.BFLPlatformFile.GetShaderProgramBinaryPath
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x8b38534
	// Params: [ Num(1) Size(0x10) ]
	static struct FString GetShaderProgramBinaryPath();

	// Object: Function UACommon.BFLPlatformFile.GetProjectPathForExternalAppForWrite
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x8cc2ff8
	// Params: [ Num(1) Size(0x10) ]
	static struct FString GetProjectPathForExternalAppForWrite();

	// Object: Function UACommon.BFLPlatformFile.GetPath
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x53fc60c
	// Params: [ Num(2) Size(0x20) ]
	static struct FString GetPath(struct FString InFilename);

	// Object: Function UACommon.BFLPlatformFile.GetMountedPakFilenames
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x95564e8
	// Params: [ Num(1) Size(0x10) ]
	static struct TArray<struct FString> GetMountedPakFilenames();

	// Object: Function UACommon.BFLPlatformFile.GetIntFromIni
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x53fc1ac
	// Params: [ Num(4) Size(0x34) ]
	static int32_t GetIntFromIni(struct FString InSection, struct FString InKey, struct FString InIniName);

	// Object: Function UACommon.BFLPlatformFile.GetInstalledAPKPath
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x53fc3e8
	// Params: [ Num(1) Size(0x10) ]
	static struct FString GetInstalledAPKPath();

	// Object: Function UACommon.BFLPlatformFile.GetGraphicsRHI
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x930b234
	// Params: [ Num(1) Size(0x10) ]
	static struct FString GetGraphicsRHI();

	// Object: Function UACommon.BFLPlatformFile.GetGlobalIniFlePath
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x53fc2fc
	// Params: [ Num(2) Size(0x20) ]
	static struct FString GetGlobalIniFlePath(struct FString InIniName);

	// Object: Function UACommon.BFLPlatformFile.GetFileBaseName
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x53fc484
	// Params: [ Num(3) Size(0x28) ]
	static struct FString GetFileBaseName(struct FString InFilename, bool InWithExt);

	// Object: Function UACommon.BFLPlatformFile.GetDiskFreeSpace
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x8b7139c
	// Params: [ Num(1) Size(0x8) ]
	static int64_t GetDiskFreeSpace();

	// Object: Function UACommon.BFLPlatformFile.GenerateVerifiedPackage
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x53fb998
	// Params: [ Num(4) Size(0x31) ]
	static bool GenerateVerifiedPackage(struct FString OriginalFilePath, struct FString PackageFilePath, struct FString& OutActualHash);

	// Object: Function UACommon.BFLPlatformFile.FindFiles_Physical
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x938563c
	// Params: [ Num(4) Size(0x38) ]
	static struct TArray<struct FString> FindFiles_Physical(struct FString InDirectory, struct FString InExtName, bool IncludeSubDir);

	// Object: Function UACommon.BFLPlatformFile.FindFiles
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x53fc93c
	// Params: [ Num(4) Size(0x38) ]
	static struct TArray<struct FString> FindFiles(struct FString InDirectory, struct FString InExtName, bool IncludeSubDir);

	// Object: Function UACommon.BFLPlatformFile.FileSize_Physical
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x53fd490
	// Params: [ Num(2) Size(0x18) ]
	static int64_t FileSize_Physical(struct FString InFilePath);

	// Object: Function UACommon.BFLPlatformFile.FileSize
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x8f384d8
	// Params: [ Num(2) Size(0x18) ]
	static int64_t FileSize(struct FString InFilePath);

	// Object: Function UACommon.BFLPlatformFile.FileExists_Physical
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x8d53d70
	// Params: [ Num(2) Size(0x11) ]
	static bool FileExists_Physical(struct FString InFilePath);

	// Object: Function UACommon.BFLPlatformFile.FileExists
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x8722c24
	// Params: [ Num(2) Size(0x11) ]
	static bool FileExists(struct FString InFilePath);

	// Object: Function UACommon.BFLPlatformFile.ExcutePaksOptimizeMem
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x9058990
	// Params: [ Num(0) Size(0x0) ]
	static void ExcutePaksOptimizeMem();

	// Object: Function UACommon.BFLPlatformFile.DumpIni
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x53fbe00
	// Params: [ Num(2) Size(0x20) ]
	static struct TArray<struct FString> DumpIni(struct FString InIniName);

	// Object: Function UACommon.BFLPlatformFile.DirectoryExists_Physical
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x53fcea8
	// Params: [ Num(2) Size(0x11) ]
	static bool DirectoryExists_Physical(struct FString InDirectory);

	// Object: Function UACommon.BFLPlatformFile.DirectoryExists
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x8bfc68c
	// Params: [ Num(2) Size(0x11) ]
	static bool DirectoryExists(struct FString InDirectory);

	// Object: Function UACommon.BFLPlatformFile.DeleteFilesbyType
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x53fd02c
	// Params: [ Num(4) Size(0x28) ]
	static int32_t DeleteFilesbyType(struct FString InDir, struct FString InType, bool InIncludeSub);

	// Object: Function UACommon.BFLPlatformFile.DeleteFile
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x8e5c830
	// Params: [ Num(2) Size(0x11) ]
	static bool DeleteFile(struct FString InFilePath);

	// Object: Function UACommon.BFLPlatformFile.DeleteDirectoryTree
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x9427cf8
	// Params: [ Num(2) Size(0x11) ]
	static bool DeleteDirectoryTree(struct FString InDirectory);

	// Object: Function UACommon.BFLPlatformFile.DeleteDirectory
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x53fcd30
	// Params: [ Num(2) Size(0x11) ]
	static bool DeleteDirectory(struct FString InDirectory);

	// Object: Function UACommon.BFLPlatformFile.CreateDirectoryTree
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x9427df4
	// Params: [ Num(2) Size(0x11) ]
	static bool CreateDirectoryTree(struct FString InDirectory);

	// Object: Function UACommon.BFLPlatformFile.CreateDirectory
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x53fcdec
	// Params: [ Num(2) Size(0x11) ]
	static bool CreateDirectory(struct FString InInDirectory);

	// Object: Function UACommon.BFLPlatformFile.CopyFile_Physical
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x53fd280
	// Params: [ Num(3) Size(0x21) ]
	static bool CopyFile_Physical(struct FString InSourceFile, struct FString InDestFile);

	// Object: Function UACommon.BFLPlatformFile.CopyFile
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x53fd388
	// Params: [ Num(3) Size(0x21) ]
	static bool CopyFile(struct FString InSourceFile, struct FString InDestFile);

	// Object: Function UACommon.BFLPlatformFile.ComputeStringMD5
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x53fc808
	// Params: [ Num(3) Size(0x28) ]
	static struct FString ComputeStringMD5(struct FString inString, bool InLowerResult);

	// Object: Function UACommon.BFLPlatformFile.CheckAndroidRooted
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x8f65da4
	// Params: [ Num(1) Size(0x4) ]
	static int32_t CheckAndroidRooted();
};

// Object: Class UACommon.DynamicRichTextBlock
// Size: 0x6F0 (Inherited: 0x6F0)
struct UDynamicRichTextBlock : URichTextBlock
{
	DEFINE_UE_CLASS_HELPERS(UDynamicRichTextBlock, "DynamicRichTextBlock")
};

// Object: Class UACommon.GeoSensitiveWidget
// Size: 0x2A8 (Inherited: 0x290)
struct UGeoSensitiveWidget : UUserWidget
{
	DEFINE_UE_CLASS_HELPERS(UGeoSensitiveWidget, "GeoSensitiveWidget")

	uint8_t Pad_0x290[0x8]; // 0x290(0x8)
	struct FMulticastInlineDelegate OnPaintSizeChange; // 0x298(0x10)
};

// Object: Class UACommon.HttpHelper
// Size: 0x48 (Inherited: 0x28)
struct UHttpHelper : UObject
{
	DEFINE_UE_CLASS_HELPERS(UHttpHelper, "HttpHelper")

	struct FMulticastInlineDelegate HttpHelperDelegate; // 0x28(0x10)
	uint8_t Pad_0x38[0x10]; // 0x38(0x10)

	// Object: Function UACommon.HttpHelper.ProcessRequest
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x53fd6d0
	// Params: [ Num(1) Size(0x4) ]
	int32_t ProcessRequest();

	// Object: DelegateFunction UACommon.HttpHelper.HttpHelperDelegate__DelegateSignature
	// Flags: [MulticastDelegate|Public|Delegate]
	// Offset: 0x5d8cbc8
	// Params: [ Num(3) Size(0x20) ]
	void HttpHelperDelegate__DelegateSignature(struct UHttpHelper* InObj, int32_t InHttpCode, struct FString InContent);

	// Object: Function UACommon.HttpHelper.HashHmac
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x53fd8e4
	// Params: [ Num(3) Size(0x30) ]
	static struct FString HashHmac(struct FString SignatureString, struct FString SecretKey);

	// Object: Function UACommon.HttpHelper.CreateRequest
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x53fd704
	// Params: [ Num(5) Size(0x84) ]
	int32_t CreateRequest(struct FString InVerb, struct FString InURL, const struct TMap<struct FString, struct FString>& InHeader, struct FString InContent);

	// Object: Function UACommon.HttpHelper.CancelRequest
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x8f61750
	// Params: [ Num(1) Size(0x4) ]
	int32_t CancelRequest();
};

// Object: Class UACommon.HttpTask
// Size: 0xA0 (Inherited: 0x28)
struct UHttpTask : UObject
{
	DEFINE_UE_CLASS_HELPERS(UHttpTask, "HttpTask")

	struct FMulticastInlineDelegate HttpResponseDelegate; // 0x28(0x10)
	struct FMulticastInlineDelegate HttpGetResponseDelegate; // 0x38(0x10)
	struct FMulticastInlineDelegate HttpGetWxCmmunityResponseDelegate; // 0x48(0x10)
	struct FMulticastInlineDelegate HttpGetThirdPartyChannelsFriendListDelegate; // 0x58(0x10)
	struct FMulticastInlineDelegate HttpGetSupperPlayerRedPoinStateDelegate; // 0x68(0x10)
	struct FString ScreenNotifyName; // 0x78(0x10)
	struct FString LuaNotifyName; // 0x88(0x10)
	uint8_t Pad_0x98[0x8]; // 0x98(0x8)

	// Object: Function UACommon.HttpTask.StartSuperPlayerRedPointHttpGetTask
	// Flags: [Final|Native|Public]
	// Offset: 0x53fdf18
	// Params: [ Num(1) Size(0x10) ]
	void StartSuperPlayerRedPointHttpGetTask(struct FString PipelineUrl);

	// Object: Function UACommon.HttpTask.StartHttpGetTask
	// Flags: [Final|Native|Public]
	// Offset: 0x92ca854
	// Params: [ Num(1) Size(0x10) ]
	void StartHttpGetTask(struct FString PipelineUrl);

	// Object: Function UACommon.HttpTask.StartDevopsTask
	// Flags: [Final|Native|Public]
	// Offset: 0x53fe120
	// Params: [ Num(1) Size(0x10) ]
	void StartDevopsTask(struct FString PipelineUrl);

	// Object: Function UACommon.HttpTask.StartCppvmDevopsTask
	// Flags: [Final|Native|Public]
	// Offset: 0x53fe01c
	// Params: [ Num(1) Size(0x10) ]
	void StartCppvmDevopsTask(struct FString PipelineUrl);

	// Object: Function UACommon.HttpTask.SendZip
	// Flags: [Final|Native|Public]
	// Offset: 0x53fedbc
	// Params: [ Num(3) Size(0x30) ]
	void SendZip(struct FString NotifyName, struct FString CosPath, struct FString FilePath);

	// Object: Function UACommon.HttpTask.SendScreenTask
	// Flags: [Final|Native|Public]
	// Offset: 0x53fe530
	// Params: [ Num(1) Size(0x10) ]
	void SendScreenTask(struct FString NotifyName);

	// Object: Function UACommon.HttpTask.SendScreenExtranetTask
	// Flags: [Final|Native|Public]
	// Offset: 0x53fe42c
	// Params: [ Num(1) Size(0x10) ]
	void SendScreenExtranetTask(struct FString NotifyName);

	// Object: Function UACommon.HttpTask.SendReplayTask
	// Flags: [Final|Native|Public]
	// Offset: 0x53ff214
	// Params: [ Num(1) Size(0x10) ]
	void SendReplayTask(struct FString ZipName);

	// Object: Function UACommon.HttpTask.SendProfileStat
	// Flags: [Final|Native|Public]
	// Offset: 0x53fe328
	// Params: [ Num(1) Size(0x10) ]
	void SendProfileStat(struct FString NotifyName);

	// Object: Function UACommon.HttpTask.SendPandora2
	// Flags: [Final|Native|Public]
	// Offset: 0x53fea8c
	// Params: [ Num(2) Size(0x20) ]
	void SendPandora2(struct FString NotifyName, struct FString CosPath);

	// Object: Function UACommon.HttpTask.SendPandora
	// Flags: [Final|Native|Public]
	// Offset: 0x53fec24
	// Params: [ Num(2) Size(0x20) ]
	void SendPandora(struct FString NotifyName, struct FString CosPath);

	// Object: Function UACommon.HttpTask.SendMemReport
	// Flags: [Final|Native|Public]
	// Offset: 0x53fe224
	// Params: [ Num(1) Size(0x10) ]
	void SendMemReport(struct FString NotifyName);

	// Object: Function UACommon.HttpTask.SendLogTask
	// Flags: [Final|Native|Public]
	// Offset: 0x53ff4b0
	// Params: [ Num(3) Size(0x30) ]
	void SendLogTask(struct FString NotifyName, struct FString URL, struct FString LogName);

	// Object: Function UACommon.HttpTask.SendLogReportLoginError
	// Flags: [Final|Native|Public]
	// Offset: 0x53fe860
	// Params: [ Num(3) Size(0x30) ]
	void SendLogReportLoginError(struct FString NotifyName, struct FString URL, struct FString LogName);

	// Object: Function UACommon.HttpTask.SendLogExtranetTask
	// Flags: [Final|Native|Public]
	// Offset: 0x53ff318
	// Params: [ Num(2) Size(0x20) ]
	void SendLogExtranetTask(struct FString NotifyName, struct FString CosPath);

	// Object: Function UACommon.HttpTask.SendGCloudLogTask
	// Flags: [Final|Native|Public]
	// Offset: 0x53fe634
	// Params: [ Num(3) Size(0x30) ]
	void SendGCloudLogTask(struct FString NotifyName, struct FString URL, struct FString LogName);

	// Object: Function UACommon.HttpTask.SendFile
	// Flags: [Final|Native|Public]
	// Offset: 0x53fefe8
	// Params: [ Num(3) Size(0x30) ]
	void SendFile(struct FString NotifyName, struct FString CosPath, struct FString FilePath);

	// Object: Function UACommon.HttpTask.HttpUpLoadFileWithParams
	// Flags: [Final|Native|Public]
	// Offset: 0x53ffc5c
	// Params: [ Num(4) Size(0x71) ]
	bool HttpUpLoadFileWithParams(struct FString URL, struct FString FilePath, struct TMap<struct FString, struct FString> Params);

	// Object: DelegateFunction UACommon.HttpTask.HttpUpLoadDelegate__DelegateSignature
	// Flags: [MulticastDelegate|Public|Delegate]
	// Offset: 0x5d8cbc8
	// Params: [ Num(1) Size(0x10) ]
	void HttpUpLoadDelegate__DelegateSignature(struct FString RspContent);

	// Object: Function UACommon.HttpTask.HttpPostRequest
	// Flags: [Final|Native|Public]
	// Offset: 0x53ff7e0
	// Params: [ Num(3) Size(0x30) ]
	void HttpPostRequest(struct FString URL, struct FString StrContent, struct FString AuthString);

	// Object: Function UACommon.HttpTask.HttpPostLandun
	// Flags: [Final|Native|Public]
	// Offset: 0x53ff6dc
	// Params: [ Num(1) Size(0x10) ]
	void HttpPostLandun(struct FString URL);

	// Object: Function UACommon.HttpTask.HttpDownLoadLuaFile
	// Flags: [Final|Native|Public]
	// Offset: 0x53ffa0c
	// Params: [ Num(2) Size(0x11) ]
	void HttpDownLoadLuaFile(struct FString NotifyName, bool bFirstRequest);

	// Object: Function UACommon.HttpTask.HttpDownLoadDebugFile
	// Flags: [Final|Native|Public]
	// Offset: 0x53ffb58
	// Params: [ Num(1) Size(0x10) ]
	void HttpDownLoadDebugFile(struct FString NotifyName);

	// Object: Function UACommon.HttpTask.GetThirdPartyChannelsFriendList
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x53fdbc4
	// Params: [ Num(5) Size(0x50) ]
	void GetThirdPartyChannelsFriendList(struct FString InputChannelid, struct FString GameId, struct FString Os, struct FString Token, struct FString Openid);

	// Object: Function UACommon.HttpTask.GetSaveLogDir
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x53fdb28
	// Params: [ Num(1) Size(0x10) ]
	static struct FString GetSaveLogDir();

	// Object: Function UACommon.HttpTask.Get
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x8b98ff8
	// Params: [ Num(1) Size(0x8) ]
	static struct UHttpTask* Get();

	// Object: Function UACommon.HttpTask.DownloadRTXPakPackage
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x53fda24
	// Params: [ Num(1) Size(0x10) ]
	void DownloadRTXPakPackage(struct FString RTX);

	// Object: Function UACommon.HttpTask.CheckWxCmmunityStatus
	// Flags: [Final|Native|Public]
	// Offset: 0x969f320
	// Params: [ Num(1) Size(0x10) ]
	void CheckWxCmmunityStatus(struct FString PipelineUrl);
};

// Object: Class UACommon.ImageLoader
// Size: 0xA8 (Inherited: 0x28)
struct UImageLoader : UObject
{
	DEFINE_UE_CLASS_HELPERS(UImageLoader, "ImageLoader")

	uint8_t Pad_0x28[0x10]; // 0x28(0x10)
	struct FMulticastInlineDelegate LoadCompleted; // 0x38(0x10)
	struct FMulticastInlineDelegate LoadFailed; // 0x48(0x10)
	struct UTexture2DDynamic* Texture; // 0x58(0x8)
	uint8_t Pad_0x60[0x10]; // 0x60(0x10)
	int32_t SerialId; // 0x70(0x4)
	bool IsPause; // 0x74(0x1)
	bool IsCompress; // 0x75(0x1)
	uint8_t Pad_0x76[0x2]; // 0x76(0x2)
	int32_t WidgetWidth; // 0x78(0x4)
	int32_t WidgetHeight; // 0x7C(0x4)
	uint8_t Pad_0x80[0x28]; // 0x80(0x28)

	// Object: Function UACommon.ImageLoader.Pause
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x5402610
	// Params: [ Num(1) Size(0x1) ]
	void Pause(bool bFlag);

	// Object: DelegateFunction UACommon.ImageLoader.OnImageLoadFailed__DelegateSignature
	// Flags: [MulticastDelegate|Public|Delegate]
	// Offset: 0x5d8cbc8
	// Params: [ Num(1) Size(0x4) ]
	void OnImageLoadFailed__DelegateSignature(int32_t SerialId);

	// Object: DelegateFunction UACommon.ImageLoader.OnImageLoadCompleted__DelegateSignature
	// Flags: [MulticastDelegate|Public|Delegate]
	// Offset: 0x5d8cbc8
	// Params: [ Num(2) Size(0xC) ]
	void OnImageLoadCompleted__DelegateSignature(struct UTexture2DDynamic* Texture, int32_t SerialId);

	// Object: Function UACommon.ImageLoader.LoadLocalImageWithWrapperAsync
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x9047cc4
	// Params: [ Num(3) Size(0xC) ]
	void LoadLocalImageWithWrapperAsync(bool IsCompressInput, int32_t Width, int32_t Height);

	// Object: Function UACommon.ImageLoader.LoadImageAsync
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x54026d4
	// Params: [ Num(1) Size(0x10) ]
	void LoadImageAsync(struct FString ImagePath);

	// Object: Function UACommon.ImageLoader.CreateImageLoader
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x5402788
	// Params: [ Num(1) Size(0x8) ]
	static struct UImageLoader* CreateImageLoader();

	// Object: Function UACommon.ImageLoader.ClearImageLoaderArray
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x8f5e988
	// Params: [ Num(0) Size(0x0) ]
	static void ClearImageLoaderArray();

	// Object: Function UACommon.ImageLoader.Clear
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x54026c0
	// Params: [ Num(0) Size(0x0) ]
	void Clear();
};

// Object: Class UACommon.ImageWrapperLoader
// Size: 0x88 (Inherited: 0x28)
struct UImageWrapperLoader : UObject
{
	DEFINE_UE_CLASS_HELPERS(UImageWrapperLoader, "ImageWrapperLoader")

	uint8_t Pad_0x28[0x10]; // 0x28(0x10)
	struct FMulticastInlineDelegate LoadCompleted; // 0x38(0x10)
	struct FMulticastInlineDelegate LoadFailed; // 0x48(0x10)
	struct UTexture2DDynamic* Texture; // 0x58(0x8)
	int32_t Width; // 0x60(0x4)
	int32_t Height; // 0x64(0x4)
	int32_t SerialId; // 0x68(0x4)
	uint8_t Pad_0x6C[0x1C]; // 0x6C(0x1C)

	// Object: DelegateFunction UACommon.ImageWrapperLoader.OnImageLoadFailed__DelegateSignature
	// Flags: [MulticastDelegate|Public|Delegate]
	// Offset: 0x5d8cbc8
	// Params: [ Num(1) Size(0x4) ]
	void OnImageLoadFailed__DelegateSignature(int32_t SerialId);

	// Object: DelegateFunction UACommon.ImageWrapperLoader.OnImageLoadCompleted__DelegateSignature
	// Flags: [MulticastDelegate|Public|Delegate]
	// Offset: 0x5d8cbc8
	// Params: [ Num(4) Size(0x14) ]
	void OnImageLoadCompleted__DelegateSignature(int32_t Width, int32_t Height, struct UImageLoader* ImageLoader, int32_t SerialId);

	// Object: Function UACommon.ImageWrapperLoader.LoadImageWrapperAsync
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x9079160
	// Params: [ Num(3) Size(0x15) ]
	void LoadImageWrapperAsync(struct FString ImagePath, int32_t SerialId, bool IsCdn);

	// Object: Function UACommon.ImageWrapperLoader.CreateImageWrapperLoader
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x8cfc850
	// Params: [ Num(1) Size(0x8) ]
	static struct UImageWrapperLoader* CreateImageWrapperLoader();

	// Object: Function UACommon.ImageWrapperLoader.CompressImage
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x54027f4
	// Params: [ Num(4) Size(0x25) ]
	static bool CompressImage(struct FString SourceImagePath, struct FString DestinationImagePath, int32_t Quality);

	// Object: Function UACommon.ImageWrapperLoader.ClearImageWrapperLoaderArray
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x540293c
	// Params: [ Num(0) Size(0x0) ]
	static void ClearImageWrapperLoaderArray();

	// Object: Function UACommon.ImageWrapperLoader.Clear
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x5402950
	// Params: [ Num(0) Size(0x0) ]
	void Clear();
};

// Object: Class UACommon.InputUtilActor
// Size: 0x310 (Inherited: 0x300)
struct AInputUtilActor : AActor
{
	DEFINE_UE_CLASS_HELPERS(AInputUtilActor, "InputUtilActor")

	uint8_t Pad_0x300[0x10]; // 0x300(0x10)
};

// Object: Class UACommon.LaunchHelper
// Size: 0x28 (Inherited: 0x28)
struct ULaunchHelper : UObject
{
	DEFINE_UE_CLASS_HELPERS(ULaunchHelper, "LaunchHelper")

	// Object: Function UACommon.LaunchHelper.ShouldShowRequestPermissionRationale
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x5402990
	// Params: [ Num(2) Size(0x11) ]
	static bool ShouldShowRequestPermissionRationale(struct FString InPermissionName);

	// Object: Function UACommon.LaunchHelper.LaunchURL
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x5402c5c
	// Params: [ Num(3) Size(0x30) ]
	static struct FString LaunchURL(struct FString InURL, struct FString InParam);

	// Object: Function UACommon.LaunchHelper.LaunchAndroidPackage
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x5402b08
	// Params: [ Num(4) Size(0x31) ]
	static bool LaunchAndroidPackage(struct FString InPackageName, struct FString InParamName, struct FString InParamValue);

	// Object: Function UACommon.LaunchHelper.IsAndroidPackageInstalled
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x5402a4c
	// Params: [ Num(2) Size(0x11) ]
	static bool IsAndroidPackageInstalled(struct FString InPackageName);

	// Object: Function UACommon.LaunchHelper.GotoAndroidAppStore
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x5402d94
	// Params: [ Num(3) Size(0x21) ]
	static bool GotoAndroidAppStore(struct FString InStorePkgName, struct FString InUri);

	// Object: Function UACommon.LaunchHelper.GetLaunchParam
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x95ba8fc
	// Params: [ Num(2) Size(0x20) ]
	static struct FString GetLaunchParam(struct FString InKey);
};

// Object: Class UACommon.LocalizationLog
// Size: 0x328 (Inherited: 0x300)
struct ALocalizationLog : AActor
{
	DEFINE_UE_CLASS_HELPERS(ALocalizationLog, "LocalizationLog")

	uint8_t Pad_0x300[0x28]; // 0x300(0x28)
};

// Object: Class UACommon.LoopedPanel
// Size: 0x1B0 (Inherited: 0x158)
struct ULoopedPanel : UCanvasPanel
{
	DEFINE_UE_CLASS_HELPERS(ULoopedPanel, "LoopedPanel")

	int32_t DefaultElementIndex; // 0x158(0x4)
	int32_t NextElementIndex; // 0x15C(0x4)
	struct FMargin SlotPadding; // 0x160(0x10)
	float AnimTime; // 0x170(0x4)
	bool EnableTouchEvent; // 0x174(0x1)
	bool bTestAnimation; // 0x175(0x1)
	bool bReverseAnim; // 0x176(0x1)
	uint8_t Pad_0x177[0x1]; // 0x177(0x1)
	float MinTouchDelta; // 0x178(0x4)
	uint8_t Pad_0x17C[0x4]; // 0x17C(0x4)
	struct FMulticastInlineDelegate OnScrollEvent; // 0x180(0x10)
	struct FMulticastInlineDelegate OnAnimEndEvent; // 0x190(0x10)
	struct FMulticastInlineDelegate OnButtonClickedEvent; // 0x1A0(0x10)

	// Object: Function UACommon.LoopedPanel.SyncProperties
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x5403164
	// Params: [ Num(0) Size(0x0) ]
	void SyncProperties();

	// Object: DelegateFunction UACommon.LoopedPanel.OnScrollEvent__DelegateSignature
	// Flags: [MulticastDelegate|Public|Delegate]
	// Offset: 0x5d8cbc8
	// Params: [ Num(1) Size(0x4) ]
	void OnScrollEvent__DelegateSignature(float InValue);

	// Object: DelegateFunction UACommon.LoopedPanel.OnAnimEndEvent__DelegateSignature
	// Flags: [MulticastDelegate|Public|Delegate]
	// Offset: 0x5d8cbc8
	// Params: [ Num(1) Size(0x4) ]
	void OnAnimEndEvent__DelegateSignature(int32_t InValue);

	// Object: Function UACommon.LoopedPanel.MoveToPrevioudElement
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x5402f18
	// Params: [ Num(1) Size(0x1) ]
	void MoveToPrevioudElement(bool bUseAnim);

	// Object: Function UACommon.LoopedPanel.MoveToNextElement
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x5402fc8
	// Params: [ Num(1) Size(0x1) ]
	void MoveToNextElement(bool bUseAnim);

	// Object: Function UACommon.LoopedPanel.MoveToElementByIndex
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x5403078
	// Params: [ Num(2) Size(0x5) ]
	void MoveToElementByIndex(int32_t InIndex, bool bUseAnim);

	// Object: Function UACommon.LoopedPanel.IsPlayAnim
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x5402ee0
	// Params: [ Num(1) Size(0x1) ]
	bool IsPlayAnim();

	// Object: Function UACommon.LoopedPanel.GetViewElementIndex
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x5403178
	// Params: [ Num(1) Size(0x4) ]
	int32_t GetViewElementIndex();
};

// Object: Class UACommon.LuaEventListener
// Size: 0x198 (Inherited: 0x28)
struct ULuaEventListener : UObject
{
	DEFINE_UE_CLASS_HELPERS(ULuaEventListener, "LuaEventListener")

	uint8_t Pad_0x28[0x18]; // 0x28(0x18)
	struct TMap<int32_t, struct TWeakObjectPtr<struct UObject>> uObjectCreatedMap; // 0x40(0x50)
	struct TMap<int32_t, struct TWeakObjectPtr<struct UObject>> waitToInitObjectMap; // 0x90(0x50)
	struct TArray<int32_t> tempIndexArray; // 0xE0(0x10)
	struct TSet<struct UObject*> uObjectCreatedCareClassSet; // 0xF0(0x50)
	uint8_t Pad_0x140[0x8]; // 0x140(0x8)
	struct FMulticastInlineDelegate OnPreGarbageCollect; // 0x148(0x10)
	struct FMulticastInlineDelegate OnPostGarbageCollect; // 0x158(0x10)
	struct FMulticastInlineDelegate OnUObjectCreated; // 0x168(0x10)
	struct FMulticastInlineDelegate OnUObjectDeleted; // 0x178(0x10)
	struct FMulticastInlineDelegate OnEndFrameTick; // 0x188(0x10)

	// Object: DelegateFunction UACommon.LuaEventListener.OnUObjectDeleted__DelegateSignature
	// Flags: [MulticastDelegate|Public|Delegate]
	// Offset: 0x5d8cbc8
	// Params: [ Num(3) Size(0x14) ]
	void OnUObjectDeleted__DelegateSignature(struct UObject* InObject, struct UObject* ObjectClass, int32_t Index);

	// Object: DelegateFunction UACommon.LuaEventListener.OnUObjectCreated__DelegateSignature
	// Flags: [MulticastDelegate|Public|Delegate]
	// Offset: 0x5d8cbc8
	// Params: [ Num(3) Size(0x14) ]
	void OnUObjectCreated__DelegateSignature(struct UObject* InObject, struct UObject* ObjectClass, int32_t Index);

	// Object: DelegateFunction UACommon.LuaEventListener.OnPreGarbageCollect__DelegateSignature
	// Flags: [MulticastDelegate|Public|Delegate]
	// Offset: 0x5d8cbc8
	// Params: [ Num(0) Size(0x0) ]
	void OnPreGarbageCollect__DelegateSignature();

	// Object: DelegateFunction UACommon.LuaEventListener.OnPostGarbageCollect__DelegateSignature
	// Flags: [MulticastDelegate|Public|Delegate]
	// Offset: 0x5d8cbc8
	// Params: [ Num(0) Size(0x0) ]
	void OnPostGarbageCollect__DelegateSignature();

	// Object: Function UACommon.LuaEventListener.GetCreatedSpecifyClassUObjectsWithoutAlloc
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x5403378
	// Params: [ Num(2) Size(0x18) ]
	void GetCreatedSpecifyClassUObjectsWithoutAlloc(struct UObject* uObjectClass, struct TArray<struct UObject*>& Result);

	// Object: Function UACommon.LuaEventListener.GetCreatedSpecifyClassUObjects
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x5403478
	// Params: [ Num(2) Size(0x18) ]
	struct TArray<struct UObject*> GetCreatedSpecifyClassUObjects(struct UObject* uObjectClass);

	// Object: Function UACommon.LuaEventListener.GetAllCreatedUObjects
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x54032b8
	// Params: [ Num(1) Size(0x10) ]
	void GetAllCreatedUObjects(struct TArray<struct UObject*>& Result);

	// Object: DelegateFunction UACommon.LuaEventListener.EndFrameDelegate__DelegateSignature
	// Flags: [MulticastDelegate|Public|Delegate]
	// Offset: 0x5d8cbc8
	// Params: [ Num(0) Size(0x0) ]
	void EndFrameDelegate__DelegateSignature();

	// Object: Function UACommon.LuaEventListener.EnableUObjectNotify
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x5403608
	// Params: [ Num(1) Size(0x1) ]
	void EnableUObjectNotify(bool Value);

	// Object: Function UACommon.LuaEventListener.EnableCoreTick
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x5403208
	// Params: [ Num(1) Size(0x1) ]
	void EnableCoreTick(bool Value);

	// Object: Function UACommon.LuaEventListener.Create
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x54036b8
	// Params: [ Num(1) Size(0x8) ]
	static struct ULuaEventListener* Create();

	// Object: Function UACommon.LuaEventListener.AddUObjectNotifyCareClass
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x5403560
	// Params: [ Num(1) Size(0x8) ]
	void AddUObjectNotifyCareClass(struct UObject* uObjectClass);
};

// Object: Class UACommon.PosSensitiveWidget
// Size: 0x2B8 (Inherited: 0x290)
struct UPosSensitiveWidget : UUserWidget
{
	DEFINE_UE_CLASS_HELPERS(UPosSensitiveWidget, "PosSensitiveWidget")

	uint8_t Pad_0x290[0x10]; // 0x290(0x10)
	struct FMulticastInlineDelegate OnPaintPosChange; // 0x2A0(0x10)
	int32_t OnPaintPosChangeInterval; // 0x2B0(0x4)
	uint8_t Pad_0x2B4[0x4]; // 0x2B4(0x4)
};

// Object: Class UACommon.RichTextBlockInlineDecorator
// Size: 0x28 (Inherited: 0x28)
struct URichTextBlockInlineDecorator : URichTextBlockDecorator
{
	DEFINE_UE_CLASS_HELPERS(URichTextBlockInlineDecorator, "RichTextBlockInlineDecorator")
};

// Object: Class UACommon.ShowBtnOutlineHelper
// Size: 0x410 (Inherited: 0x300)
struct AShowBtnOutlineHelper : AActor
{
	DEFINE_UE_CLASS_HELPERS(AShowBtnOutlineHelper, "ShowBtnOutlineHelper")

	struct UMaterial* TheOutlineMaterial; // 0x300(0x8)
	int32_t ButtonTempId; // 0x308(0x4)
	uint8_t Pad_0x30C[0x54]; // 0x30C(0x54)
	struct TMap<struct UButton*, struct FSlateBrush> BtnOriginFSlateBrush; // 0x360(0x50)
	struct TMap<struct UButton*, float> BtnOriginAlpha; // 0x3B0(0x50)
	float RefreshTimerValue; // 0x400(0x4)
	float RefreshTimerThreshold; // 0x404(0x4)
	bool ShouldTransSize; // 0x408(0x1)
	bool IsAutomat; // 0x409(0x1)
	bool IsOutlineOn; // 0x40A(0x1)
	uint8_t Pad_0x40B[0x5]; // 0x40B(0x5)

	// Object: Function UACommon.ShowBtnOutlineHelper.TransSizeToButtonMaterials
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x540374c
	// Params: [ Num(0) Size(0x0) ]
	void TransSizeToButtonMaterials();

	// Object: Function UACommon.ShowBtnOutlineHelper.SetOutlineOn
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x5403738
	// Params: [ Num(0) Size(0x0) ]
	void SetOutlineOn();

	// Object: Function UACommon.ShowBtnOutlineHelper.SetOutlineOff
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x5403724
	// Params: [ Num(0) Size(0x0) ]
	void SetOutlineOff();

	// Object: Function UACommon.ShowBtnOutlineHelper.RevertAllButtonOutline
	// Flags: [Final|Native|Protected|BlueprintCallable]
	// Offset: 0x5403760
	// Params: [ Num(0) Size(0x0) ]
	void RevertAllButtonOutline();

	// Object: Function UACommon.ShowBtnOutlineHelper.ActiveAllButtonOutline
	// Flags: [Final|Native|Protected|BlueprintCallable]
	// Offset: 0x5403774
	// Params: [ Num(0) Size(0x0) ]
	void ActiveAllButtonOutline();
};

// Object: Class UACommon.ShowTouch
// Size: 0x98 (Inherited: 0x28)
struct UShowTouch : UObject
{
	DEFINE_UE_CLASS_HELPERS(UShowTouch, "ShowTouch")

	uint8_t Pad_0x28[0x70]; // 0x28(0x70)

	// Object: Function UACommon.ShowTouch.StopShow
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x5403854
	// Params: [ Num(0) Size(0x0) ]
	static void StopShow();

	// Object: Function UACommon.ShowTouch.StartShow
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x5403868
	// Params: [ Num(0) Size(0x0) ]
	static void StartShow();

	// Object: Function UACommon.ShowTouch.SetIsPrintToScreen
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x54037b4
	// Params: [ Num(1) Size(0x1) ]
	static void SetIsPrintToScreen(bool InState);
};

// Object: Class UACommon.StatUMGWidget
// Size: 0x28 (Inherited: 0x28)
struct UStatUMGWidget : UObject
{
	DEFINE_UE_CLASS_HELPERS(UStatUMGWidget, "StatUMGWidget")

	// Object: Function UACommon.StatUMGWidget.ExecWidgetStat
	// Flags: [Final|Native|Public]
	// Offset: 0x540393c
	// Params: [ Num(1) Size(0x10) ]
	void ExecWidgetStat(struct FString UMGName);

	// Object: Function UACommon.StatUMGWidget.DumpDetailWidgetInfo
	// Flags: [Final|Native|Static|Public|HasOutParms]
	// Offset: 0x5403890
	// Params: [ Num(1) Size(0x10) ]
	static void DumpDetailWidgetInfo(struct TArray<struct FString>& results);
};

// Object: Class UACommon.UASubmitBug
// Size: 0x88 (Inherited: 0x28)
struct UUASubmitBug : UObject
{
	DEFINE_UE_CLASS_HELPERS(UUASubmitBug, "UASubmitBug")

	struct FMulticastInlineDelegate ScreenShotEvent; // 0x28(0x10)
	struct FMulticastInlineDelegate SubmitHttpResponseDelegate; // 0x38(0x10)
	uint8_t Pad_0x48[0x40]; // 0x48(0x40)

	// Object: DelegateFunction UACommon.UASubmitBug.SubmitHttpUpLoadDelegate__DelegateSignature
	// Flags: [MulticastDelegate|Public|Delegate]
	// Offset: 0x5d8cbc8
	// Params: [ Num(1) Size(0x10) ]
	void SubmitHttpUpLoadDelegate__DelegateSignature(struct FString RspContent);

	// Object: Function UACommon.UASubmitBug.SubmitContent
	// Flags: [Final|Native|Public]
	// Offset: 0x5403d08
	// Params: [ Num(1) Size(0x10) ]
	void SubmitContent(struct FString BugContent);

	// Object: Function UACommon.UASubmitBug.SubmitBug
	// Flags: [Final|Native|Public]
	// Offset: 0x5403e0c
	// Params: [ Num(1) Size(0x10) ]
	void SubmitBug(struct FString BugContent);

	// Object: Function UACommon.UASubmitBug.StopVideoCapture
	// Flags: [Final|Native|Public]
	// Offset: 0x54045d8
	// Params: [ Num(0) Size(0x0) ]
	void StopVideoCapture();

	// Object: Function UACommon.UASubmitBug.StartVideoCapture
	// Flags: [Final|Native|Public]
	// Offset: 0x54045ec
	// Params: [ Num(0) Size(0x0) ]
	void StartVideoCapture();

	// Object: Function UACommon.UASubmitBug.SendVideo
	// Flags: [Final|Native|Public]
	// Offset: 0x54040e0
	// Params: [ Num(1) Size(0x10) ]
	void SendVideo(struct FString CosVideoPath);

	// Object: Function UACommon.UASubmitBug.SendScreen
	// Flags: [Final|Native|Public]
	// Offset: 0x5403f10
	// Params: [ Num(2) Size(0x20) ]
	void SendScreen(struct FString CosScreenPath, struct FString CosBugContentPath);

	// Object: Function UACommon.UASubmitBug.SendLogAndVideo
	// Flags: [Final|Native|Public]
	// Offset: 0x5403a48
	// Params: [ Num(4) Size(0x40) ]
	void SendLogAndVideo(struct FString CosLogPath, struct FString CosVideoPath, struct FString CosScreenPath, struct FString CosBugContentPath);

	// Object: Function UACommon.UASubmitBug.SendLog
	// Flags: [Final|Native|Public]
	// Offset: 0x54041e4
	// Params: [ Num(1) Size(0x10) ]
	void SendLog(struct FString CosLogPath);

	// Object: DelegateFunction UACommon.UASubmitBug.ScreenCaptureDelegate__DelegateSignature
	// Flags: [MulticastDelegate|Public|Delegate]
	// Offset: 0x5d8cbc8
	// Params: [ Num(0) Size(0x0) ]
	void ScreenCaptureDelegate__DelegateSignature();

	// Object: Function UACommon.UASubmitBug.IsVideoReady
	// Flags: [Final|Native|Public]
	// Offset: 0x5404534
	// Params: [ Num(1) Size(0x1) ]
	bool IsVideoReady();

	// Object: Function UACommon.UASubmitBug.GetCaptureTime
	// Flags: [Final|Native|Public]
	// Offset: 0x54045a4
	// Params: [ Num(1) Size(0x4) ]
	float GetCaptureTime();

	// Object: Function UACommon.UASubmitBug.GetCaptureState
	// Flags: [Final|Native|Public]
	// Offset: 0x540456c
	// Params: [ Num(1) Size(0x1) ]
	bool GetCaptureState();

	// Object: Function UACommon.UASubmitBug.Get
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x5404600
	// Params: [ Num(1) Size(0x8) ]
	static struct UUASubmitBug* Get();

	// Object: Function UACommon.UASubmitBug.DragWidget
	// Flags: [Final|Native|Public|HasOutParms]
	// Offset: 0x54042e8
	// Params: [ Num(3) Size(0xB0) ]
	void DragWidget(struct UUserWidget* panel, const struct FGeometry& InGeometry, const struct FPointerEvent& InMouseEvent);

	// Object: Function UACommon.UASubmitBug.DeleteLocalVideo
	// Flags: [Final|Native|Public]
	// Offset: 0x54040a8
	// Params: [ Num(1) Size(0x1) ]
	bool DeleteLocalVideo();

	// Object: Function UACommon.UASubmitBug.ClipVideo
	// Flags: [Final|Native|Public]
	// Offset: 0x54044fc
	// Params: [ Num(1) Size(0x1) ]
	bool ClipVideo();

	// Object: Function UACommon.UASubmitBug.CaptureScreen
	// Flags: [Final|Native|Public]
	// Offset: 0x54044e8
	// Params: [ Num(0) Size(0x0) ]
	void CaptureScreen();
};

// Object: Class UACommon.TinyHotfixFile
// Size: 0x28 (Inherited: 0x28)
struct UTinyHotfixFile : UObject
{
	DEFINE_UE_CLASS_HELPERS(UTinyHotfixFile, "TinyHotfixFile")

	// Object: Function UACommon.TinyHotfixFile.HotfixIniFile
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x540466c
	// Params: [ Num(2) Size(0x14) ]
	int32_t HotfixIniFile(struct FString Filename);
};

// Object: Class UACommon.TutorialModeInputProcessor
// Size: 0x80 (Inherited: 0x28)
struct UTutorialModeInputProcessor : UObject
{
	DEFINE_UE_CLASS_HELPERS(UTutorialModeInputProcessor, "TutorialModeInputProcessor")

	struct FDelegate OnPointerDownEvent; // 0x28(0x10)
	struct FDelegate OnPointerMoveEvent; // 0x38(0x10)
	struct FDelegate OnPointerUpEvent; // 0x48(0x10)
	uint8_t Pad_0x58[0x28]; // 0x58(0x28)

	// Object: Function UACommon.TutorialModeInputProcessor.UnhookInputProcessor
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x5404848
	// Params: [ Num(1) Size(0x1) ]
	bool UnhookInputProcessor();

	// Object: Function UACommon.TutorialModeInputProcessor.SetNextHookAreaRect
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x5404768
	// Params: [ Num(2) Size(0x10) ]
	void SetNextHookAreaRect(struct FVector2D InLeftTop, struct FVector2D InRightBottom);

	// Object: Function UACommon.TutorialModeInputProcessor.SetContext
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x8efc168
	// Params: [ Num(1) Size(0x8) ]
	void SetContext(struct UObject* InContext);

	// Object: Function UACommon.TutorialModeInputProcessor.ResumeHook
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x5404734
	// Params: [ Num(0) Size(0x0) ]
	void ResumeHook();

	// Object: Function UACommon.TutorialModeInputProcessor.PauseHook
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x540474c
	// Params: [ Num(0) Size(0x0) ]
	void PauseHook();

	// Object: Function UACommon.TutorialModeInputProcessor.HookInputProcessor
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x90f3bfc
	// Params: [ Num(1) Size(0x1) ]
	bool HookInputProcessor();
};

// Object: Class UACommon.UABuglyHelper
// Size: 0x28 (Inherited: 0x28)
struct UUABuglyHelper : UObject
{
	DEFINE_UE_CLASS_HELPERS(UUABuglyHelper, "UABuglyHelper")

	// Object: Function UACommon.UABuglyHelper.SendBuglyResultHandler
	// Flags: [Final|Native|Static|Private|BlueprintCallable]
	// Offset: 0x54055e0
	// Params: [ Num(2) Size(0x20) ]
	static void SendBuglyResultHandler(struct FString Result, struct FString Path);

	// Object: Function UACommon.UABuglyHelper.SaveUrl
	// Flags: [Final|Native|Static|Private|BlueprintCallable]
	// Offset: 0x5405364
	// Params: [ Num(2) Size(0x20) ]
	static void SaveUrl(struct FString Md5, struct FString URL);

	// Object: Function UACommon.UABuglyHelper.SaveTime
	// Flags: [Final|Native|Static|Private|BlueprintCallable]
	// Offset: 0x54051dc
	// Params: [ Num(2) Size(0x20) ]
	static void SaveTime(struct FString Md5, struct FString Time);

	// Object: Function UACommon.UABuglyHelper.SaveMd5
	// Flags: [Final|Native|Static|Private|BlueprintCallable]
	// Offset: 0x54054ec
	// Params: [ Num(1) Size(0x10) ]
	static void SaveMd5(struct FString Md5);

	// Object: Function UACommon.UABuglyHelper.SaveGcloudBugly
	// Flags: [Final|Native|Static|Private|BlueprintCallable]
	// Offset: 0x5405768
	// Params: [ Num(1) Size(0x10) ]
	static void SaveGcloudBugly(struct FString URL);

	// Object: Function UACommon.UABuglyHelper.SaveBugly
	// Flags: [Final|Native|Static|Private|BlueprintCallable]
	// Offset: 0x540585c
	// Params: [ Num(1) Size(0x10) ]
	static void SaveBugly(struct FString URL);

	// Object: Function UACommon.UABuglyHelper.RestartSend
	// Flags: [Final|Native|Static|Private|BlueprintCallable]
	// Offset: 0x9433cd8
	// Params: [ Num(0) Size(0x0) ]
	static void RestartSend();

	// Object: Function UACommon.UABuglyHelper.RemoveMd5
	// Flags: [Final|Native|Static|Private|BlueprintCallable]
	// Offset: 0x54050e8
	// Params: [ Num(1) Size(0x10) ]
	static void RemoveMd5(struct FString Md5);

	// Object: Function UACommon.UABuglyHelper.IsContainMd5
	// Flags: [Final|Native|Static|Private|BlueprintCallable]
	// Offset: 0x5404a40
	// Params: [ Num(2) Size(0x11) ]
	static bool IsContainMd5(struct FString Md5);

	// Object: Function UACommon.UABuglyHelper.InitLogTime
	// Flags: [Final|Native|Static|Private|BlueprintCallable]
	// Offset: 0x95bc188
	// Params: [ Num(1) Size(0x10) ]
	static struct FString InitLogTime();

	// Object: Function UACommon.UABuglyHelper.HasTimeInFile
	// Flags: [Final|Native|Static|Private|BlueprintCallable]
	// Offset: 0x54048a0
	// Params: [ Num(3) Size(0x21) ]
	static bool HasTimeInFile(struct FString LOGTime, struct FString LogName);

	// Object: Function UACommon.UABuglyHelper.GetMd5Table
	// Flags: [Final|Native|Static|Private|BlueprintCallable]
	// Offset: 0x5404b4c
	// Params: [ Num(1) Size(0x10) ]
	static struct TArray<struct FString> GetMd5Table();

	// Object: Function UACommon.UABuglyHelper.GetMd5ByUrl
	// Flags: [Final|Native|Static|Private|BlueprintCallable]
	// Offset: 0x5404bbc
	// Params: [ Num(2) Size(0x20) ]
	static struct FString GetMd5ByUrl(struct FString URL);

	// Object: Function UACommon.UABuglyHelper.GetBuglyInfo
	// Flags: [Final|Native|Static|Private|BlueprintCallable]
	// Offset: 0x5404f7c
	// Params: [ Num(2) Size(0x30) ]
	static struct FBuglyData GetBuglyInfo(struct FString Md5);

	// Object: Function UACommon.UABuglyHelper.CombineUrlKey
	// Flags: [Final|Native|Static|Private|BlueprintCallable]
	// Offset: 0x5404e3c
	// Params: [ Num(2) Size(0x20) ]
	static struct FString CombineUrlKey(struct FString Md5);

	// Object: Function UACommon.UABuglyHelper.CombineTimeKey
	// Flags: [Final|Native|Static|Private|BlueprintCallable]
	// Offset: 0x5404cfc
	// Params: [ Num(2) Size(0x20) ]
	static struct FString CombineTimeKey(struct FString Md5);
};

// Object: Class UACommon.UAButtonWidget
// Size: 0x408 (Inherited: 0x290)
struct UUAButtonWidget : UUserWidget
{
	DEFINE_UE_CLASS_HELPERS(UUAButtonWidget, "UAButtonWidget")

	float ClickTime; // 0x290(0x4)
	bool BannedClick; // 0x294(0x1)
	uint8_t Pad_0x295[0x3]; // 0x295(0x3)
	struct FLinearColor normalTxtShowColor; // 0x298(0x10)
	struct FLinearColor pressTxtShowColor; // 0x2A8(0x10)
	struct FVector2D normalShadowOffect; // 0x2B8(0x8)
	struct FVector2D pressShadowOffect; // 0x2C0(0x8)
	float ImagePaddingLeft; // 0x2C8(0x4)
	float ImagePaddingTop; // 0x2CC(0x4)
	float ImagePaddingRight; // 0x2D0(0x4)
	float ImagePaddingButtom; // 0x2D4(0x4)
	float TxtPaddingLeft; // 0x2D8(0x4)
	float TxtPaddingTop; // 0x2DC(0x4)
	float TxtPaddingRight; // 0x2E0(0x4)
	float TxtPaddingButtom; // 0x2E4(0x4)
	float PressedPaddingLeft; // 0x2E8(0x4)
	float PressedPaddingTop; // 0x2EC(0x4)
	float PressedPaddingRight; // 0x2F0(0x4)
	float PressedPaddingButtom; // 0x2F4(0x4)
	bool isGray; // 0x2F8(0x1)
	uint8_t Pad_0x2F9[0x7]; // 0x2F9(0x7)
	struct FMulticastInlineDelegate OnClicked; // 0x300(0x10)
	struct FMulticastInlineDelegate OnPressed; // 0x310(0x10)
	struct FMulticastInlineDelegate OnReleased; // 0x320(0x10)
	struct FMulticastInlineDelegate OnHovered; // 0x330(0x10)
	struct FMulticastInlineDelegate OnUnhovered; // 0x340(0x10)
	struct UButton* _button; // 0x350(0x8)
	struct UImage* _imageNormal; // 0x358(0x8)
	struct UImage* _imagePress; // 0x360(0x8)
	struct UTextBlock* _textNormal; // 0x368(0x8)
	struct UTextBlock* _textPress; // 0x370(0x8)
	struct UOverlaySlot* _imageNormalSlot; // 0x378(0x8)
	struct UOverlaySlot* _imagePressSlot; // 0x380(0x8)
	struct UOverlaySlot* _textNormalSlot; // 0x388(0x8)
	struct UOverlaySlot* _textPressSlot; // 0x390(0x8)
	uint8_t Pad_0x398[0x70]; // 0x398(0x70)

	// Object: Function UACommon.UAButtonWidget.SetGray
	// Flags: [Final|Native|Public]
	// Offset: 0x5409d28
	// Params: [ Num(1) Size(0x1) ]
	void SetGray(bool gray);

	// Object: Function UACommon.UAButtonWidget.OnRefreshPressState
	// Flags: [Event|Public|BlueprintCallable|BlueprintEvent]
	// Offset: 0x5d8cbc8
	// Params: [ Num(1) Size(0x4) ]
	void OnRefreshPressState(int32_t IsPressed);

	// Object: Function UACommon.UAButtonWidget.OnButtonUnHovered
	// Flags: [Final|Native|Public]
	// Offset: 0x84a5030
	// Params: [ Num(0) Size(0x0) ]
	void OnButtonUnHovered();

	// Object: Function UACommon.UAButtonWidget.OnButtonReleased
	// Flags: [Final|Native|Public]
	// Offset: 0x84a2ee4
	// Params: [ Num(0) Size(0x0) ]
	void OnButtonReleased();

	// Object: Function UACommon.UAButtonWidget.OnButtonPress
	// Flags: [Final|Native|Public]
	// Offset: 0x84a2f04
	// Params: [ Num(0) Size(0x0) ]
	void OnButtonPress();

	// Object: Function UACommon.UAButtonWidget.OnButtonHovered
	// Flags: [Final|Native|Public]
	// Offset: 0x84a3318
	// Params: [ Num(0) Size(0x0) ]
	void OnButtonHovered();

	// Object: Function UACommon.UAButtonWidget.OnButtonClick
	// Flags: [Final|Native|Public]
	// Offset: 0x84a2f24
	// Params: [ Num(0) Size(0x0) ]
	void OnButtonClick();
};

// Object: Class UACommon.UACharacterDefaultInventoryCompBase
// Size: 0x2C0 (Inherited: 0x128)
struct UUACharacterDefaultInventoryCompBase : USGCharacterDefaultInventoryComponent
{
	DEFINE_UE_CLASS_HELPERS(UUACharacterDefaultInventoryCompBase, "UACharacterDefaultInventoryCompBase")

	bool bOwnedByAI; // 0x121(0x1)
	bool bUseSlicedInit; // 0x122(0x1)
	float MaxSlicedinterval; // 0x124(0x4)
	float TimeLimitNoSliced; // 0x128(0x4)
	struct TArray<struct TSoftClassPtr<struct ASGInventory*>> FakeAvatar_Head; // 0x130(0x10)
	struct TArray<struct TSoftClassPtr<struct ASGInventory*>> FakeAvatar_Torse; // 0x140(0x10)
	struct TArray<struct TSoftClassPtr<struct ASGInventory*>> FakeAvatar_Gloves; // 0x150(0x10)
	struct TArray<struct TSoftClassPtr<struct ASGInventory*>> FakeAvatar_Legs; // 0x160(0x10)
	struct TArray<struct TSoftClassPtr<struct ASGInventory*>> FakeAvatar_Shoes; // 0x170(0x10)
	struct TArray<struct TSoftClassPtr<struct ASGInventory*>> FakeAvatar_Watch; // 0x180(0x10)
	bool bTestMultiAvatar; // 0x190(0x1)
	bool bSpawnSecondMainWeapon; // 0x191(0x1)
	uint8_t Pad_0x194[0x4]; // 0x194(0x4)
	struct TMap<uint64_t, struct ASGInventory*> PlayerItemIdtoInventoryMap; // 0x198(0x50)
	struct USlicedInitParams* SlicedInitParams; // 0x1E8(0x8)
	struct USGCharacterInventoryGiveComponent* InventoryGiveComponent; // 0x1F0(0x8)
	uint8_t Pad_0x1F8[0x18]; // 0x1F8(0x18)
	struct TMap<int64_t, int32_t> CacheInventoryValues; // 0x210(0x50)
	struct TArray<struct TSoftClassPtr<struct AActor*>> TestInventoryPool_Weapon; // 0x260(0x10)
	struct TArray<struct TSoftClassPtr<struct AActor*>> TestInventoryPool_MeleeWeapon; // 0x270(0x10)
	struct TArray<struct TSoftClassPtr<struct AActor*>> TestInventoryPool_Bag; // 0x280(0x10)
	struct TArray<struct TSoftClassPtr<struct AActor*>> TestInventoryPool_VestBag; // 0x290(0x10)
	struct TArray<struct TSoftClassPtr<struct AActor*>> TestInventoryPool_Helmet; // 0x2A0(0x10)
	struct TArray<struct TSoftClassPtr<struct AActor*>> TestInventoryPool_Vest; // 0x2B0(0x10)

	// Object: Function UACommon.UACharacterDefaultInventoryCompBase.StopDoSlicedInit
	// Flags: [Final|Native|Public]
	// Offset: 0x540ab30
	// Params: [ Num(1) Size(0x1) ]
	void StopDoSlicedInit(bool bFreezeSlicedInit);

	// Object: Function UACommon.UACharacterDefaultInventoryCompBase.IsInSlicedInit
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x540abf4
	// Params: [ Num(1) Size(0x1) ]
	bool IsInSlicedInit();

	// Object: Function UACommon.UACharacterDefaultInventoryCompBase.InitCharacterBadges
	// Flags: [Final|Native|Public|HasOutParms]
	// Offset: 0x540aa70
	// Params: [ Num(1) Size(0x10) ]
	void InitCharacterBadges(const struct TArray<struct FSGBadgeInfo>& BadgeItems);

	// Object: Function UACommon.UACharacterDefaultInventoryCompBase.GetCurLoadEquipmentProgress
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x540ac18
	// Params: [ Num(1) Size(0x4) ]
	float GetCurLoadEquipmentProgress();

	// Object: Function UACommon.UACharacterDefaultInventoryCompBase.DoSlicedInit
	// Flags: [Final|Native|Public]
	// Offset: 0x540abe0
	// Params: [ Num(0) Size(0x0) ]
	void DoSlicedInit();
};

// Object: Class UACommon.UACharacterAIRandomInventoryComponent
// Size: 0x3A0 (Inherited: 0x2C0)
struct UUACharacterAIRandomInventoryComponent : UUACharacterDefaultInventoryCompBase
{
	DEFINE_UE_CLASS_HELPERS(UUACharacterAIRandomInventoryComponent, "UACharacterAIRandomInventoryComponent")

	uint8_t Pad_0x2C0[0x8]; // 0x2C0(0x8)
	int32_t TryTimesBeforeUsingDefault; // 0x2C8(0x4)
	float TryInterval; // 0x2CC(0x4)
	int32_t TryTimesBeforeUsingDefault_WeaponConfig; // 0x2D0(0x4)
	float TryInterval_WeaponConfig; // 0x2D4(0x4)
	struct ASGInventory* InitWeapon; // 0x2D8(0x8)
	uint8_t Pad_0x2E0[0x68]; // 0x2E0(0x68)
	bool bUseDefaultBadge; // 0x348(0x1)
	uint8_t Pad_0x349[0x7]; // 0x349(0x7)
	struct TArray<struct FSGBadgeInfo> DefaultBadges; // 0x350(0x10)
	struct ASGInventory* InventoryInUsing; // 0x360(0x8)
	float LastTimeUseInventory; // 0x368(0x4)
	uint8_t Pad_0x36C[0x4]; // 0x36C(0x4)
	struct TArray<struct USGPlayerItemInfoBase*> EquipmentListModified; // 0x370(0x10)
	uint8_t Pad_0x380[0x19]; // 0x380(0x19)
	bool bEnableSeparateGiveRandSuit; // 0x399(0x1)
	bool bEnableSeparateGiveSlicedSuit; // 0x39A(0x1)
	uint8_t Pad_0x39B[0x5]; // 0x39B(0x5)

	// Object: Function UACommon.UACharacterAIRandomInventoryComponent.OnHandleGiveRandSuit
	// Flags: [Final|Native|Protected]
	// Offset: 0x5409e04
	// Params: [ Num(0) Size(0x0) ]
	void OnHandleGiveRandSuit();

	// Object: Function UACommon.UACharacterAIRandomInventoryComponent.GiveRandSuit
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x5409e2c
	// Params: [ Num(1) Size(0x4) ]
	void GiveRandSuit(int32_t InEquipPoolID);

	// Object: Function UACommon.UACharacterAIRandomInventoryComponent.GiveDefaultSuit
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x5409e18
	// Params: [ Num(0) Size(0x0) ]
	void GiveDefaultSuit();

	// Object: Function UACommon.UACharacterAIRandomInventoryComponent.GetGivenInventoryCountInfo
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x5409ed4
	// Params: [ Num(1) Size(0x10) ]
	struct FString GetGivenInventoryCountInfo();
};

// Object: Class UACommon.UACharacterAnimalLogicComponent
// Size: 0xE0 (Inherited: 0xE0)
struct UUACharacterAnimalLogicComponent : UActorComponent
{
	DEFINE_UE_CLASS_HELPERS(UUACharacterAnimalLogicComponent, "UACharacterAnimalLogicComponent")
};

// Object: Class UACommon.UACharacterDefaultInventoryComp
// Size: 0x300 (Inherited: 0x2C0)
struct UUACharacterDefaultInventoryComp : UUACharacterDefaultInventoryCompBase
{
	DEFINE_UE_CLASS_HELPERS(UUACharacterDefaultInventoryComp, "UACharacterDefaultInventoryComp")

	bool bForceGiveInventory; // 0x2C0(0x1)
	bool bDelayBeginPlayOver; // 0x2C1(0x1)
	uint8_t Pad_0x2C2[0x6]; // 0x2C2(0x6)
	struct USGPlayerItemInfoBase* PlayerItemInfoBase; // 0x2C8(0x8)
	bool bUseZoneAvatarInStandalone; // 0x2D0(0x1)
	uint8_t Pad_0x2D1[0x7]; // 0x2D1(0x7)
	struct TArray<int64_t> StandAloneAvatarArray; // 0x2D8(0x10)
	bool bNeedSaveEquipToCache; // 0x2E8(0x1)
	bool bNeedBringInZoneAvatar; // 0x2E9(0x1)
	uint8_t Pad_0x2EA[0x1]; // 0x2EA(0x1)
	bool bReborning; // 0x2EB(0x1)
	bool bInitAutoGiveActivityInventory; // 0x2EC(0x1)
	uint8_t Pad_0x2ED[0x3]; // 0x2ED(0x3)
	int32_t MaxAutoGiveCount; // 0x2F0(0x4)
	uint8_t Pad_0x2F4[0x4]; // 0x2F4(0x4)
	struct ASGInventory* VirtualBagClass; // 0x2F8(0x8)

	// Object: Function UACommon.UACharacterDefaultInventoryComp.SpawnRandomAwardsResultDoToast
	// Flags: [Native|Event|Protected|HasOutParms|BlueprintEvent]
	// Offset: 0x5409fa8
	// Params: [ Num(2) Size(0x20) ]
	void SpawnRandomAwardsResultDoToast(const struct TArray<int32_t>& SpawnItemIDs, const struct TArray<int32_t>& SpawnItemNums);

	// Object: Function UACommon.UACharacterDefaultInventoryComp.SetReborning
	// Flags: [Final|Native|Public]
	// Offset: 0x540a428
	// Params: [ Num(1) Size(0x1) ]
	void SetReborning(bool bInReborning);

	// Object: Function UACommon.UACharacterDefaultInventoryComp.ServerSaveMinimumEquipInfo
	// Flags: [Net|NetReliableNative|Event|Public|NetServer|NetValidate]
	// Offset: 0x540a4f4
	// Params: [ Num(0) Size(0x0) ]
	void ServerSaveMinimumEquipInfo();

	// Object: Function UACommon.UACharacterDefaultInventoryComp.ResetEndurance
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x540a550
	// Params: [ Num(1) Size(0x8) ]
	void ResetEndurance(struct ASGPlayerState* PS);

	// Object: Function UACommon.UACharacterDefaultInventoryComp.ReportVehicleKeyDestroyed
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x5d8cbc8
	// Params: [ Num(0) Size(0x0) ]
	void ReportVehicleKeyDestroyed();

	// Object: Function UACommon.UACharacterDefaultInventoryComp.PostInit
	// Flags: [Native|Event|Public|BlueprintEvent]
	// Offset: 0x540a71c
	// Params: [ Num(0) Size(0x0) ]
	void PostInit();

	// Object: Function UACommon.UACharacterDefaultInventoryComp.OnUsedInventory
	// Flags: [Native|Protected]
	// Offset: 0x540a1d4
	// Params: [ Num(3) Size(0x14) ]
	void OnUsedInventory(struct ACharacter* Character, struct ASGInventory* Inventory, int32_t ActuallyUsedSubInventoryItemID);

	// Object: Function UACommon.UACharacterDefaultInventoryComp.OnPlayerFinishGame
	// Flags: [Final|Native|Protected]
	// Offset: 0x540a300
	// Params: [ Num(3) Size(0x18) ]
	void OnPlayerFinishGame(struct APlayerController* PlayerController, EPlayerEndGameType FinishType, struct AActor* EscapeVolume);

	// Object: Function UACommon.UACharacterDefaultInventoryComp.OnCharacterPostDied
	// Flags: [Final|Native|Public]
	// Offset: 0x540a5f8
	// Params: [ Num(3) Size(0x18) ]
	void OnCharacterPostDied(struct ACharacter* DeadCharacter, struct AController* Killer, struct UDamageEventObject* DamageEventObject);

	// Object: Function UACommon.UACharacterDefaultInventoryComp.InitStandaloneCharacterAvatars
	// Flags: [Native|Event|Public|BlueprintEvent]
	// Offset: 0x540a4d8
	// Params: [ Num(0) Size(0x0) ]
	void InitStandaloneCharacterAvatars();

	// Object: Function UACommon.UACharacterDefaultInventoryComp.ClientReceiveSpawnRandomAwardsResult
	// Flags: [Net|Native|Event|Protected|NetClient]
	// Offset: 0x540a0cc
	// Params: [ Num(2) Size(0x20) ]
	void ClientReceiveSpawnRandomAwardsResult(struct TArray<int32_t> SpawnItemIDs, struct TArray<int32_t> SpawnItemNums);
};

// Object: Class UACommon.SlicedInitParams
// Size: 0x68 (Inherited: 0x28)
struct USlicedInitParams : UObject
{
	DEFINE_UE_CLASS_HELPERS(USlicedInitParams, "SlicedInitParams")

	uint8_t Pad_0x28[0x18]; // 0x28(0x18)
	bool bFreezeDoSlicedInit; // 0x40(0x1)
	uint8_t Pad_0x41[0x7]; // 0x41(0x7)
	struct TArray<struct FInitInventoryParams> InitEquipmentParamsList; // 0x48(0x10)
	struct TArray<struct FInitInventoryParams> InitItemParamsList; // 0x58(0x10)
};

// Object: Class UACommon.UACharacterPreviewComponent
// Size: 0x6A0 (Inherited: 0x380)
struct UUACharacterPreviewComponent : USGCharacterPreviewComponent
{
	DEFINE_UE_CLASS_HELPERS(UUACharacterPreviewComponent, "UACharacterPreviewComponent")

	struct UMaterialParameterCollection* CaptureMaterialParameterCollection; // 0x380(0x8)
	struct FLinearColor HairSpecularLight; // 0x388(0x10)
	struct TMap<struct FString, struct FSceneCaptureConfig> SceneCaptureConfigs; // 0x398(0x50)
	struct USGPreviewCaptureLightsSets* CaptureLightSets; // 0x3E8(0x8)
	struct TMap<struct FString, struct FString> CaptureCharacterFacialSequenceName; // 0x3F0(0x50)
	struct TSoftObjectPtr<USkeletalMesh> BadgeVelcroAsset; // 0x440(0x28)
	struct TMap<struct FString, struct FString> CaptureCharacterSequenceName; // 0x468(0x50)
	struct FName PreviewCharacterFPTag; // 0x4B8(0x8)
	struct FName BadgeVelcroAttachBoneTag; // 0x4C0(0x8)
	struct FName BadgeAttachBoneTag; // 0x4C8(0x8)
	struct FString CurCaptureSceneName; // 0x4D0(0x10)
	bool bPistolGrip; // 0x4E0(0x1)
	EPreviewCaptureMode CaptureMode; // 0x4E1(0x1)
	uint8_t Pad_0x4E2[0x6]; // 0x4E2(0x6)
	struct UMaterialInterface* MaterialTemplate; // 0x4E8(0x8)
	float DelayCaptureTime; // 0x4F0(0x4)
	float CaptureInternal; // 0x4F4(0x4)
	float CaptureMaxUpdateTime; // 0x4F8(0x4)
	bool CaptureOnceTime; // 0x4FC(0x1)
	uint8_t Pad_0x4FD[0x3]; // 0x4FD(0x3)
	struct TMap<struct FString, bool> FullyStreamInSkeletalMesh; // 0x500(0x50)
	struct TMap<struct FString, bool> FullyStreamInStaticMesh; // 0x550(0x50)
	struct USkeletalMeshComponent* BadgeMeshComponent; // 0x5A0(0x8)
	struct USkeletalMeshComponent* BadgeVelcroMeshComponent; // 0x5A8(0x8)
	uint8_t Pad_0x5B0[0x20]; // 0x5B0(0x20)
	struct ASGCaptureCharacterLights* CaptureLight; // 0x5D0(0x8)
	struct UAnimNotify_CaptureCharacterConfig* AnimNotifyConfig; // 0x5D8(0x8)
	uint8_t Pad_0x5E0[0xB9]; // 0x5E0(0xB9)
	bool bPendingViewWeapon; // 0x699(0x1)
	uint8_t Pad_0x69A[0x6]; // 0x69A(0x6)

	// Object: Function UACommon.UACharacterPreviewComponent.WaitAnimationUpdate
	// Flags: [Final|Native|Public]
	// Offset: 0x540b394
	// Params: [ Num(0) Size(0x0) ]
	void WaitAnimationUpdate();

	// Object: Function UACommon.UACharacterPreviewComponent.ViewCurrentWeapon
	// Flags: [Final|Native|Protected]
	// Offset: 0x540acd4
	// Params: [ Num(0) Size(0x0) ]
	void ViewCurrentWeapon();

	// Object: Function UACommon.UACharacterPreviewComponent.UpdateSceneCaptureTextureTargetSize
	// Flags: [Final|Native|Public]
	// Offset: 0x540b004
	// Params: [ Num(0) Size(0x0) ]
	void UpdateSceneCaptureTextureTargetSize();

	// Object: Function UACommon.UACharacterPreviewComponent.UpdateCharacterSequence
	// Flags: [Final|Native|Public]
	// Offset: 0x540ba40
	// Params: [ Num(0) Size(0x0) ]
	void UpdateCharacterSequence();

	// Object: Function UACommon.UACharacterPreviewComponent.SwitchCaptureCameraConfig
	// Flags: [Final|Native|Public]
	// Offset: 0x540b050
	// Params: [ Num(0) Size(0x0) ]
	void SwitchCaptureCameraConfig();

	// Object: Function UACommon.UACharacterPreviewComponent.StopCaptureEveryFrame
	// Flags: [Final|Native|Public]
	// Offset: 0x540b380
	// Params: [ Num(0) Size(0x0) ]
	void StopCaptureEveryFrame();

	// Object: Function UACommon.UACharacterPreviewComponent.ShouldUpdateCharacterSequence
	// Flags: [Final|Native|Public]
	// Offset: 0x540b018
	// Params: [ Num(1) Size(0x1) ]
	bool ShouldUpdateCharacterSequence();

	// Object: Function UACommon.UACharacterPreviewComponent.SetTimerCheckMeshFullyStreamedIn
	// Flags: [Final|Native|Public]
	// Offset: 0x540b2d0
	// Params: [ Num(1) Size(0x1) ]
	void SetTimerCheckMeshFullyStreamedIn(bool bStart);

	// Object: Function UACommon.UACharacterPreviewComponent.SetRenderCaptureParam
	// Flags: [Final|Native|Public]
	// Offset: 0x540af48
	// Params: [ Num(1) Size(0x4) ]
	void SetRenderCaptureParam(float Value);

	// Object: Function UACommon.UACharacterPreviewComponent.OnWeaponAllMeshLoaded
	// Flags: [Final|Native|Public]
	// Offset: 0x91a0cfc
	// Params: [ Num(1) Size(0x8) ]
	void OnWeaponAllMeshLoaded(struct ASGWeapon* TargetWeapon);

	// Object: Function UACommon.UACharacterPreviewComponent.OnUpdateAvatarsFinish
	// Flags: [Final|Native|Public]
	// Offset: 0x540b10c
	// Params: [ Num(0) Size(0x0) ]
	void OnUpdateAvatarsFinish();

	// Object: Function UACommon.UACharacterPreviewComponent.OnUpdateAvatarsAddInventory
	// Flags: [Final|Native|Public]
	// Offset: 0x540b214
	// Params: [ Num(1) Size(0x8) ]
	void OnUpdateAvatarsAddInventory(struct ASGInventory* AvatarInventory);

	// Object: Function UACommon.UACharacterPreviewComponent.OnSetCurrentWeapon
	// Flags: [Final|Native|Public]
	// Offset: 0x90e7db4
	// Params: [ Num(1) Size(0x8) ]
	void OnSetCurrentWeapon(struct ASGInventory* Weapon);

	// Object: Function UACommon.UACharacterPreviewComponent.OnPreviewGestureMontageBlendingOut
	// Flags: [Final|Native|Public]
	// Offset: 0x540ae58
	// Params: [ Num(2) Size(0x9) ]
	void OnPreviewGestureMontageBlendingOut(struct UAnimMontage* AnimMontage, bool bInterrupted);

	// Object: Function UACommon.UACharacterPreviewComponent.OnOwnerEquipSkeletalMeshLoadCompleted
	// Flags: [Final|Native|Public]
	// Offset: 0x540b4ac
	// Params: [ Num(2) Size(0x10) ]
	void OnOwnerEquipSkeletalMeshLoadCompleted(struct ASGInventory* Inv, struct USkeletalMeshComponent* SkeletalMeshComp);

	// Object: Function UACommon.UACharacterPreviewComponent.OnMeshDecideLoadSkeletalMesh
	// Flags: [Final|Native|Public|HasOutParms]
	// Offset: 0x540b120
	// Params: [ Num(2) Size(0x9) ]
	void OnMeshDecideLoadSkeletalMesh(struct ASGInventory* AvatarInventory, bool& bUseGameMeshInLobby);

	// Object: Function UACommon.UACharacterPreviewComponent.OnInventoryLoadComplete
	// Flags: [Final|Native|Protected]
	// Offset: 0x91a2a24
	// Params: [ Num(1) Size(0x4) ]
	void OnInventoryLoadComplete(int32_t TaskId);

	// Object: Function UACommon.UACharacterPreviewComponent.OnEquipMeshDecideLoadSkeletalMesh
	// Flags: [Final|Native|Public|HasOutParms]
	// Offset: 0x86e53e4
	// Params: [ Num(2) Size(0x9) ]
	void OnEquipMeshDecideLoadSkeletalMesh(struct USGInventoryEquipMeshComponent* InventoryMeshComponent, bool& bUseGameMeshInLobby);

	// Object: Function UACommon.UACharacterPreviewComponent.OnCharacterStaticMeshLoaded
	// Flags: [Final|Native|Public]
	// Offset: 0x540b674
	// Params: [ Num(2) Size(0x10) ]
	void OnCharacterStaticMeshLoaded(struct AActor* Actor, struct UStaticMesh* StaticMesh);

	// Object: Function UACommon.UACharacterPreviewComponent.OnCharacterSlicedProcessFinished
	// Flags: [Final|Native|Protected]
	// Offset: 0x86b9408
	// Params: [ Num(1) Size(0x8) ]
	void OnCharacterSlicedProcessFinished(struct ASGCharacter* InCharacter);

	// Object: Function UACommon.UACharacterPreviewComponent.OnCharacterSkeletalMeshLoaded
	// Flags: [Final|Native|Public]
	// Offset: 0x540b758
	// Params: [ Num(2) Size(0x10) ]
	void OnCharacterSkeletalMeshLoaded(struct AActor* Actor, struct USkeletalMesh* SkeletalMesh);

	// Object: Function UACommon.UACharacterPreviewComponent.OnCharacterRemoveInventoryEvent
	// Flags: [Final|Native|Public]
	// Offset: 0x540b590
	// Params: [ Num(2) Size(0x10) ]
	void OnCharacterRemoveInventoryEvent(struct ACharacter* Character, struct ASGInventory* Inventory);

	// Object: Function UACommon.UACharacterPreviewComponent.OnCharacterPreUpdateAvatars
	// Flags: [Final|Native|Public]
	// Offset: 0x540b2bc
	// Params: [ Num(0) Size(0x0) ]
	void OnCharacterPreUpdateAvatars();

	// Object: Function UACommon.UACharacterPreviewComponent.OnCharacterAvatarRemove
	// Flags: [Final|Native|Public]
	// Offset: 0x540b998
	// Params: [ Num(1) Size(0x8) ]
	void OnCharacterAvatarRemove(struct ASGInventory* Inv);

	// Object: Function UACommon.UACharacterPreviewComponent.OnCharacterAvatarMeshLoaded
	// Flags: [Final|Native|Public]
	// Offset: 0x540ba54
	// Params: [ Num(1) Size(0x8) ]
	void OnCharacterAvatarMeshLoaded(struct UMeshComponent* MeshComp);

	// Object: Function UACommon.UACharacterPreviewComponent.OnCharacterAllAvatarMeshLoadedFromMessageEvents
	// Flags: [Final|Native|Protected]
	// Offset: 0x84a1080
	// Params: [ Num(2) Size(0xC) ]
	void OnCharacterAllAvatarMeshLoadedFromMessageEvents(struct ASGCharacter* InCharacter, int32_t AvatarCount);

	// Object: Function UACommon.UACharacterPreviewComponent.OnCharacterAllAvatarMeshLoaded
	// Flags: [Final|Native|Public]
	// Offset: 0x540b83c
	// Params: [ Num(1) Size(0x4) ]
	void OnCharacterAllAvatarMeshLoaded(int32_t AvatarCount);

	// Object: Function UACommon.UACharacterPreviewComponent.OnBadgeLoadedFromMessageEvents
	// Flags: [Final|Native|Protected]
	// Offset: 0x540acfc
	// Params: [ Num(2) Size(0xC) ]
	void OnBadgeLoadedFromMessageEvents(struct ASGCharacter* InCharacter, int32_t attachPos);

	// Object: Function UACommon.UACharacterPreviewComponent.OnAllMeshLoaded
	// Flags: [Final|Native|Public]
	// Offset: 0x540b3a8
	// Params: [ Num(1) Size(0x10) ]
	void OnAllMeshLoaded(struct FString reason);

	// Object: Function UACommon.UACharacterPreviewComponent.OnAllAvatarsMeshLoadFinish
	// Flags: [Final|Native|Public]
	// Offset: 0x540b064
	// Params: [ Num(1) Size(0x4) ]
	void OnAllAvatarsMeshLoadFinish(int32_t AvatarCount);

	// Object: Function UACommon.UACharacterPreviewComponent.DressAvatarInit
	// Flags: [Final|Native|Protected]
	// Offset: 0x540ae0c
	// Params: [ Num(0) Size(0x0) ]
	void DressAvatarInit();

	// Object: Function UACommon.UACharacterPreviewComponent.CheckCaptureMeshIsFullyStreamedIn
	// Flags: [Final|Native|Protected]
	// Offset: 0x540ae20
	// Params: [ Num(1) Size(0x1) ]
	bool CheckCaptureMeshIsFullyStreamedIn();

	// Object: Function UACommon.UACharacterPreviewComponent.CheckAllEquipMeshFullyLoaded
	// Flags: [Final|Native|Protected]
	// Offset: 0x540adf8
	// Params: [ Num(0) Size(0x0) ]
	void CheckAllEquipMeshFullyLoaded();

	// Object: Function UACommon.UACharacterPreviewComponent.CheckAllEquipAndAvatarFullyLoaded
	// Flags: [Final|Native|Protected]
	// Offset: 0x540ade4
	// Params: [ Num(0) Size(0x0) ]
	void CheckAllEquipAndAvatarFullyLoaded();

	// Object: Function UACommon.UACharacterPreviewComponent.CheckAllBadgesLoaded
	// Flags: [Final|Native|Protected]
	// Offset: 0x540ace8
	// Params: [ Num(0) Size(0x0) ]
	void CheckAllBadgesLoaded();

	// Object: Function UACommon.UACharacterPreviewComponent.CaptureEverySecond
	// Flags: [Final|Native|Public]
	// Offset: 0x540aff0
	// Params: [ Num(0) Size(0x0) ]
	void CaptureEverySecond();

	// Object: Function UACommon.UACharacterPreviewComponent.AddInventoryItemInfo
	// Flags: [Final|Native|Public]
	// Offset: 0x540b8e4
	// Params: [ Num(2) Size(0x9) ]
	bool AddInventoryItemInfo(struct USGPlayerItemInfoBase* ItemInfoBase);
};

// Object: Class UACommon.UAClipImageWidget
// Size: 0x290 (Inherited: 0x290)
struct UUAClipImageWidget : UUserWidget
{
	DEFINE_UE_CLASS_HELPERS(UUAClipImageWidget, "UAClipImageWidget")

	// Object: Function UACommon.UAClipImageWidget.OnTextureLoadCompleted
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x5d8cbc8
	// Params: [ Num(1) Size(0x8) ]
	void OnTextureLoadCompleted(struct UTexture* tex);

	// Object: Function UACommon.UAClipImageWidget.AsyncLoadTexture
	// Flags: [Final|Native|Private|BlueprintCallable]
	// Offset: 0x540e580
	// Params: [ Num(1) Size(0x10) ]
	void AsyncLoadTexture(struct FString TexPath);
};

// Object: Class UACommon.UACmd
// Size: 0x28 (Inherited: 0x28)
struct UUACmd : USGGameInstanceComponent
{
	DEFINE_UE_CLASS_HELPERS(UUACmd, "UACmd")

	// Object: Function UACommon.UACmd.StopLuaMemTag
	// Flags: [Final|Native|Public]
	// Offset: 0x540e6fc
	// Params: [ Num(0) Size(0x0) ]
	void StopLuaMemTag();

	// Object: Function UACommon.UACmd.StartLuaMemTag
	// Flags: [Final|Native|Public]
	// Offset: 0x540e710
	// Params: [ Num(2) Size(0x20) ]
	void StartLuaMemTag(struct FString Tag, struct FString Filename);

	// Object: Function UACommon.UACmd.PrintLuaAllocRecord
	// Flags: [Final|Exec|Native|Public]
	// Offset: 0x540e990
	// Params: [ Num(0) Size(0x0) ]
	void PrintLuaAllocRecord();

	// Object: Function UACommon.UACmd.IsLuaAllocRecord
	// Flags: [Final|Native|Public]
	// Offset: 0x540e8a8
	// Params: [ Num(1) Size(0x1) ]
	bool IsLuaAllocRecord();

	// Object: Function UACommon.UACmd.EnableLuaAllocRecord
	// Flags: [Final|Exec|Native|Public]
	// Offset: 0x540e8e0
	// Params: [ Num(1) Size(0x1) ]
	void EnableLuaAllocRecord(bool Enable);
};

// Object: Class UACommon.UACommonConfigStatics
// Size: 0x28 (Inherited: 0x28)
struct UUACommonConfigStatics : UObject
{
	DEFINE_UE_CLASS_HELPERS(UUACommonConfigStatics, "UACommonConfigStatics")

	// Object: Function UACommon.UACommonConfigStatics.SetVulkanLaunchID
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x540eb9c
	// Params: [ Num(1) Size(0x4) ]
	static void SetVulkanLaunchID(int32_t LaunchID);

	// Object: Function UACommon.UACommonConfigStatics.SetVulkanCrashNum
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x540eac8
	// Params: [ Num(2) Size(0x8) ]
	static void SetVulkanCrashNum(int32_t LaunchID, int32_t CrashNum);

	// Object: Function UACommon.UACommonConfigStatics.SetVulkanCachedDeviceLevel
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x9443cc4
	// Params: [ Num(1) Size(0x4) ]
	static void SetVulkanCachedDeviceLevel(int32_t DeviceLevel);

	// Object: Function UACommon.UACommonConfigStatics.SetUserSettingOfOpenGL
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x540ec34
	// Params: [ Num(1) Size(0x1) ]
	static void SetUserSettingOfOpenGL(bool bUseOpenGL);

	// Object: Function UACommon.UACommonConfigStatics.SetRayTracing
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x92aa280
	// Params: [ Num(3) Size(0x3) ]
	static bool SetRayTracing(bool bIsRead, bool bRayTracing);

	// Object: Function UACommon.UACommonConfigStatics.SetFallbackStreamUrlPrefix
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x94fecd0
	// Params: [ Num(1) Size(0x10) ]
	static void SetFallbackStreamUrlPrefix(struct FString InFallbackStreamUrlPrefix);

	// Object: Function UACommon.UACommonConfigStatics.SaveLoginDataConfig
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x8b48f5c
	// Params: [ Num(0) Size(0x0) ]
	static void SaveLoginDataConfig();

	// Object: Function UACommon.UACommonConfigStatics.PatchVersionIni
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x540f78c
	// Params: [ Num(2) Size(0x11) ]
	static bool PatchVersionIni(struct FString InResVersion);

	// Object: Function UACommon.UACommonConfigStatics.LobbySetPing
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x857f6cc
	// Params: [ Num(3) Size(0xA) ]
	static bool LobbySetPing(struct UWorld* WorldContext, uint8_t Ping);

	// Object: Function UACommon.UACommonConfigStatics.LoadSceneBuildIni
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x540f140
	// Params: [ Num(0) Size(0x0) ]
	static void LoadSceneBuildIni();

	// Object: Function UACommon.UACommonConfigStatics.LoadAssetCookIni
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x540f154
	// Params: [ Num(0) Size(0x0) ]
	static void LoadAssetCookIni();

	// Object: Function UACommon.UACommonConfigStatics.IsVulkanAvaliableVersionOnThisDevice
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x9454aac
	// Params: [ Num(1) Size(0x1) ]
	static bool IsVulkanAvaliableVersionOnThisDevice();

	// Object: Function UACommon.UACommonConfigStatics.IsVulkanAvaliableOnThisDevice
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x8b76714
	// Params: [ Num(2) Size(0x5) ]
	static bool IsVulkanAvaliableOnThisDevice(int32_t InDeviceLevel);

	// Object: Function UACommon.UACommonConfigStatics.IsUserSettingOfOpenGLExist
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x95b0cc0
	// Params: [ Num(1) Size(0x1) ]
	static bool IsUserSettingOfOpenGLExist();

	// Object: Function UACommon.UACommonConfigStatics.IsOverWritePacket
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x953180c
	// Params: [ Num(1) Size(0x1) ]
	static bool IsOverWritePacket();

	// Object: Function UACommon.UACommonConfigStatics.IsLoginSucceed
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x540ef28
	// Params: [ Num(1) Size(0x1) ]
	static bool IsLoginSucceed();

	// Object: Function UACommon.UACommonConfigStatics.IsForDistribution
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x540f168
	// Params: [ Num(1) Size(0x1) ]
	static bool IsForDistribution();

	// Object: Function UACommon.UACommonConfigStatics.IsFirstTimeLaunch
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x9592d50
	// Params: [ Num(1) Size(0x1) ]
	static bool IsFirstTimeLaunch();

	// Object: Function UACommon.UACommonConfigStatics.IsExpClient
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x8f179e8
	// Params: [ Num(1) Size(0x1) ]
	static bool IsExpClient();

	// Object: Function UACommon.UACommonConfigStatics.InitForLoginSucceed
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x540ef60
	// Params: [ Num(1) Size(0x1) ]
	static bool InitForLoginSucceed();

	// Object: Function UACommon.UACommonConfigStatics.InitConfigFiles
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x97ffd08
	// Params: [ Num(0) Size(0x0) ]
	static void InitConfigFiles();

	// Object: Function UACommon.UACommonConfigStatics.GetXunyouControl
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x540ed70
	// Params: [ Num(2) Size(0x11) ]
	static bool GetXunyouControl(struct FString Key);

	// Object: Function UACommon.UACommonConfigStatics.GetWXAppID
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x9392668
	// Params: [ Num(1) Size(0x10) ]
	static struct FString GetWXAppID();

	// Object: Function UACommon.UACommonConfigStatics.GetVulkanLaunchID
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x540ea94
	// Params: [ Num(1) Size(0x4) ]
	static int32_t GetVulkanLaunchID();

	// Object: Function UACommon.UACommonConfigStatics.GetVulkanCrashNum
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x540ea60
	// Params: [ Num(1) Size(0x4) ]
	static int32_t GetVulkanCrashNum();

	// Object: Function UACommon.UACommonConfigStatics.GetVersionCode
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x540f4dc
	// Params: [ Num(1) Size(0x10) ]
	static struct FString GetVersionCode();

	// Object: Function UACommon.UACommonConfigStatics.GetVersionBuildTimestamp
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x8e5dbc4
	// Params: [ Num(1) Size(0x10) ]
	static struct FString GetVersionBuildTimestamp();

	// Object: Function UACommon.UACommonConfigStatics.GetVersionBuildBranchNames
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x8e5db00
	// Params: [ Num(1) Size(0x10) ]
	static struct FString GetVersionBuildBranchNames();

	// Object: Function UACommon.UACommonConfigStatics.GetUObjectLeakWhiteList
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x540ef98
	// Params: [ Num(1) Size(0x10) ]
	static struct TArray<struct FString> GetUObjectLeakWhiteList();

	// Object: Function UACommon.UACommonConfigStatics.GetUAMOLobbyIpListConfig
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x938e88c
	// Params: [ Num(1) Size(0x10) ]
	static void GetUAMOLobbyIpListConfig(struct TArray<struct FString>& UAMOLobbyIpListArr);

	// Object: Function UACommon.UACommonConfigStatics.GetSvnVersion
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x8cd5ec8
	// Params: [ Num(1) Size(0x10) ]
	static struct FString GetSvnVersion();

	// Object: Function UACommon.UACommonConfigStatics.GetSplashFlowTimeOutSeconds
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x540fabc
	// Params: [ Num(1) Size(0x4) ]
	static int32_t GetSplashFlowTimeOutSeconds();

	// Object: Function UACommon.UACommonConfigStatics.GetServerIPConfig
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x8bfbcb0
	// Params: [ Num(1) Size(0x10) ]
	static void GetServerIPConfig(struct TArray<struct FString>& ServerIPArr);

	// Object: Function UACommon.UACommonConfigStatics.GetReplayVersionNum
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x540ecd4
	// Params: [ Num(1) Size(0x10) ]
	static struct FString GetReplayVersionNum();

	// Object: Function UACommon.UACommonConfigStatics.GetRegisterFlowTimeOutSeconds
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x540fa54
	// Params: [ Num(1) Size(0x4) ]
	static int32_t GetRegisterFlowTimeOutSeconds();

	// Object: Function UACommon.UACommonConfigStatics.GetQQWXLobbyIpListConfig
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x9540e30
	// Params: [ Num(2) Size(0x20) ]
	static void GetQQWXLobbyIpListConfig(struct TArray<struct FString>& QQLobbyIpListArr, struct TArray<struct FString>& WXLobbyIpListArr);

	// Object: Function UACommon.UACommonConfigStatics.GetQQAppID
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x93927cc
	// Params: [ Num(1) Size(0x10) ]
	static struct FString GetQQAppID();

	// Object: Function UACommon.UACommonConfigStatics.GetPufferUpdateUrl
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x95295b0
	// Params: [ Num(2) Size(0x18) ]
	static struct FString GetPufferUpdateUrl(bool InPrePuffer);

	// Object: Function UACommon.UACommonConfigStatics.GetPufferProductID
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x92e98d0
	// Params: [ Num(1) Size(0x4) ]
	static int32_t GetPufferProductID();

	// Object: Function UACommon.UACommonConfigStatics.GetPackageVersion
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x9305ba8
	// Params: [ Num(1) Size(0x10) ]
	static struct FString GetPackageVersion();

	// Object: Function UACommon.UACommonConfigStatics.GetNLPMentorHostURL
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x540e9c4
	// Params: [ Num(1) Size(0x10) ]
	static struct FString GetNLPMentorHostURL();

	// Object: Function UACommon.UACommonConfigStatics.GetMSDKGameID
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x92de6a4
	// Params: [ Num(1) Size(0x10) ]
	static struct FString GetMSDKGameID();

	// Object: Function UACommon.UACommonConfigStatics.GetMobileQQWXIpConfig
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x95e0330
	// Params: [ Num(3) Size(0x21) ]
	static void GetMobileQQWXIpConfig(struct TArray<struct FString>& MobileQQLobbyUrlArr, struct TArray<struct FString>& MobileWXLobbyUrlArr, bool bPreRelease);

	// Object: Function UACommon.UACommonConfigStatics.GetMobileLoginIpConfig
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x95d5398
	// Params: [ Num(3) Size(0x21) ]
	static void GetMobileLoginIpConfig(struct TArray<struct FString>& EditorMobileLobbyUrlArr, struct TArray<struct FString>& MobileLobbyUrlArr, bool bPreRelease);

	// Object: Function UACommon.UACommonConfigStatics.GetMFBoxStdform
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x953151c
	// Params: [ Num(2) Size(0x20) ]
	static struct FString GetMFBoxStdform(struct FString BundleId);

	// Object: Function UACommon.UACommonConfigStatics.GetMFBoxPlatform
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x9531694
	// Params: [ Num(2) Size(0x20) ]
	static struct FString GetMFBoxPlatform(struct FString BundleId);

	// Object: Function UACommon.UACommonConfigStatics.GetMFBoxAppkey
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x95313a4
	// Params: [ Num(2) Size(0x20) ]
	static struct FString GetMFBoxAppkey(struct FString BundleId);

	// Object: Function UACommon.UACommonConfigStatics.GetLoginIpConfig
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x9540f98
	// Params: [ Num(2) Size(0x20) ]
	static void GetLoginIpConfig(struct TArray<struct FString>& EditorLobbyUrlArr, struct TArray<struct FString>& PCLobbyUrlArr);

	// Object: Function UACommon.UACommonConfigStatics.GetLoginFlowTimeOutSeconds
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x540fa88
	// Params: [ Num(1) Size(0x4) ]
	static int32_t GetLoginFlowTimeOutSeconds();

	// Object: Function UACommon.UACommonConfigStatics.GetLastProgramVersion
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x94289c4
	// Params: [ Num(1) Size(0x10) ]
	static struct FString GetLastProgramVersion();

	// Object: Function UACommon.UACommonConfigStatics.GetIsOpenWXLive
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x540f848
	// Params: [ Num(1) Size(0x1) ]
	static bool GetIsOpenWXLive();

	// Object: Function UACommon.UACommonConfigStatics.GetIntlUpdateReleaseID
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x540f23c
	// Params: [ Num(1) Size(0x4) ]
	static int32_t GetIntlUpdateReleaseID();

	// Object: Function UACommon.UACommonConfigStatics.GetIntlUpdatePreReleaseID
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x540f270
	// Params: [ Num(1) Size(0x4) ]
	static int32_t GetIntlUpdatePreReleaseID();

	// Object: Function UACommon.UACommonConfigStatics.GetGuestAppID
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x96af038
	// Params: [ Num(1) Size(0x10) ]
	static struct FString GetGuestAppID();

	// Object: Function UACommon.UACommonConfigStatics.GetGMESDKGamekey
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x540f008
	// Params: [ Num(1) Size(0x10) ]
	static struct FString GetGMESDKGamekey();

	// Object: Function UACommon.UACommonConfigStatics.GetGMESDKGameID
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x540f0a4
	// Params: [ Num(1) Size(0x10) ]
	static struct FString GetGMESDKGameID();

	// Object: Function UACommon.UACommonConfigStatics.GetGamekey
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x92f6ce8
	// Params: [ Num(1) Size(0x10) ]
	static struct FString GetGamekey();

	// Object: Function UACommon.UACommonConfigStatics.GetGameId
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x8cde480
	// Params: [ Num(1) Size(0x10) ]
	static struct FString GetGameId();

	// Object: Function UACommon.UACommonConfigStatics.GetFlowSettingNextOpenMapName_Startup_UAM
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x540f91c
	// Params: [ Num(1) Size(0x10) ]
	static struct FString GetFlowSettingNextOpenMapName_Startup_UAM();

	// Object: Function UACommon.UACommonConfigStatics.GetFlowSettingNextOpenMapName_Startup_UA
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x540f9b8
	// Params: [ Num(1) Size(0x10) ]
	static struct FString GetFlowSettingNextOpenMapName_Startup_UA();

	// Object: Function UACommon.UACommonConfigStatics.GetFlowSettingNextOpenMapName_Login
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x540f880
	// Params: [ Num(1) Size(0x10) ]
	static struct FString GetFlowSettingNextOpenMapName_Login();

	// Object: Function UACommon.UACommonConfigStatics.GetDolphinUpdateUrl
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x540f3f4
	// Params: [ Num(2) Size(0x18) ]
	static struct FString GetDolphinUpdateUrl(bool InPreDolphin);

	// Object: Function UACommon.UACommonConfigStatics.GetDolphinResourceVersion
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x8e901c4
	// Params: [ Num(1) Size(0x10) ]
	static struct FString GetDolphinResourceVersion();

	// Object: Function UACommon.UACommonConfigStatics.GetDolphinProgramVersion
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x8cf8b2c
	// Params: [ Num(1) Size(0x10) ]
	static struct FString GetDolphinProgramVersion();

	// Object: Function UACommon.UACommonConfigStatics.GetDolphinChannelID
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x90c3e60
	// Params: [ Num(1) Size(0x4) ]
	static int32_t GetDolphinChannelID();

	// Object: Function UACommon.UACommonConfigStatics.GetDLCPredownloadPufferUpdateUrl
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x540f30c
	// Params: [ Num(2) Size(0x18) ]
	static struct FString GetDLCPredownloadPufferUpdateUrl(bool InPrePuffer);

	// Object: Function UACommon.UACommonConfigStatics.GetDLCPredownloadPufferChannelID
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x540f2d8
	// Params: [ Num(1) Size(0x4) ]
	static int32_t GetDLCPredownloadPufferChannelID();

	// Object: Function UACommon.UACommonConfigStatics.GetDLCPredownloadDolphinChannelID
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x540f2a4
	// Params: [ Num(1) Size(0x4) ]
	static int32_t GetDLCPredownloadDolphinChannelID();

	// Object: Function UACommon.UACommonConfigStatics.GetCookedMapList
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x9845d00
	// Params: [ Num(2) Size(0x20) ]
	static void GetCookedMapList(struct TArray<struct FString>& CookMapList, struct TArray<struct FString>& TestMapList);

	// Object: Function UACommon.UACommonConfigStatics.GetComplianceFlagC
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x8d48f48
	// Params: [ Num(1) Size(0x1) ]
	static bool GetComplianceFlagC();

	// Object: Function UACommon.UACommonConfigStatics.GetComplianceFlagB
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x8d48ff8
	// Params: [ Num(1) Size(0x1) ]
	static bool GetComplianceFlagB();

	// Object: Function UACommon.UACommonConfigStatics.GetComplianceFlagA
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x8d490a8
	// Params: [ Num(1) Size(0x1) ]
	static bool GetComplianceFlagA();

	// Object: Function UACommon.UACommonConfigStatics.GetCDNUrl
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x540f1a0
	// Params: [ Num(1) Size(0x10) ]
	static struct FString GetCDNUrl();

	// Object: Function UACommon.UACommonConfigStatics.GetAssetPathByKey
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x8480bd0
	// Params: [ Num(2) Size(0x20) ]
	static struct FString GetAssetPathByKey(struct FString Key);

	// Object: Function UACommon.UACommonConfigStatics.GetAppVersionDisplayFromVersionID
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x540f6ac
	// Params: [ Num(2) Size(0x18) ]
	static struct FString GetAppVersionDisplayFromVersionID(uint64_t ClientVersionID);

	// Object: Function UACommon.UACommonConfigStatics.GetAppVersionDisplay
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x917b574
	// Params: [ Num(1) Size(0x10) ]
	static struct FString GetAppVersionDisplay();

	// Object: Function UACommon.UACommonConfigStatics.GetAppVersion64
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x9379f00
	// Params: [ Num(1) Size(0x10) ]
	static struct FString GetAppVersion64();

	// Object: Function UACommon.UACommonConfigStatics.GetAppVersion
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x8b39528
	// Params: [ Num(1) Size(0x10) ]
	static struct FString GetAppVersion();

	// Object: Function UACommon.UACommonConfigStatics.GetAndroidBlackSensorDevices
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x540ee7c
	// Params: [ Num(1) Size(0x10) ]
	static void GetAndroidBlackSensorDevices(struct TArray<struct FString>& Devices);

	// Object: Function UACommon.UACommonConfigStatics.FlushXunyouPopRecordTime
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x9839bbc
	// Params: [ Num(3) Size(0x28) ]
	static struct FString FlushXunyouPopRecordTime(bool bIsRead, struct FString LastXunyouPopRecordTime);

	// Object: Function UACommon.UACommonConfigStatics.FlushTutorialTipsIndex
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x5410828
	// Params: [ Num(3) Size(0x28) ]
	static struct TArray<struct FString> FlushTutorialTipsIndex(bool bIsRead, struct TArray<struct FString> TutorialTipsIndexList);

	// Object: Function UACommon.UACommonConfigStatics.FlushTutorialTimesInCareer
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x5410698
	// Params: [ Num(4) Size(0x20) ]
	static int32_t FlushTutorialTimesInCareer(bool bIsRead, struct FString TutorialName, int32_t TutorialTimesInCareer);

	// Object: Function UACommon.UACommonConfigStatics.FlushTaskDoneList
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x5410bc4
	// Params: [ Num(3) Size(0x28) ]
	static struct TArray<struct FString> FlushTaskDoneList(bool IsRead, struct TArray<struct FString> taskDoneIdList);

	// Object: Function UACommon.UACommonConfigStatics.FlushSZLobbyUrl
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x9438170
	// Params: [ Num(3) Size(0x28) ]
	static struct FString FlushSZLobbyUrl(bool bIsRead, struct FString SZLobbyUrl);

	// Object: Function UACommon.UACommonConfigStatics.FlushSystemTriggerList
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x5410e2c
	// Params: [ Num(3) Size(0x28) ]
	static struct TArray<struct FString> FlushSystemTriggerList(bool bIsRead, struct TArray<struct FString> sysTriggerList);

	// Object: Function UACommon.UACommonConfigStatics.FlushSystemTriggerDoneList
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x5410cf8
	// Params: [ Num(3) Size(0x28) ]
	static struct TArray<struct FString> FlushSystemTriggerDoneList(bool bIsRead, struct TArray<struct FString> sysTriggerDoneList);

	// Object: Function UACommon.UACommonConfigStatics.FlushSHLobbyUrl
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x94383b0
	// Params: [ Num(3) Size(0x28) ]
	static struct FString FlushSHLobbyUrl(bool bIsRead, struct FString SHLobbyUrl);

	// Object: Function UACommon.UACommonConfigStatics.FlushRegionCode
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x541021c
	// Params: [ Num(3) Size(0x28) ]
	static struct FString FlushRegionCode(bool bIsRead, struct FString Code);

	// Object: Function UACommon.UACommonConfigStatics.FlushOpenPhoneLimitation
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x957f618
	// Params: [ Num(3) Size(0x3) ]
	static bool FlushOpenPhoneLimitation(bool bIsRead, bool bPhoneLimitationSetting);

	// Object: Function UACommon.UACommonConfigStatics.FlushOpenBestLobbyUrlPC
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x936bf14
	// Params: [ Num(3) Size(0x3) ]
	static bool FlushOpenBestLobbyUrlPC(bool bIsRead, bool bOpenBestLobbyUrlPC);

	// Object: Function UACommon.UACommonConfigStatics.FlushOpenBestLobbyUrl
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x936c0bc
	// Params: [ Num(3) Size(0x3) ]
	static bool FlushOpenBestLobbyUrl(bool bIsRead, bool bOpenBestLobbuUrl);

	// Object: Function UACommon.UACommonConfigStatics.FlushNeedAutoLogin
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x92772c8
	// Params: [ Num(3) Size(0x3) ]
	static bool FlushNeedAutoLogin(bool bIsRead, bool needAutoLogin);

	// Object: Function UACommon.UACommonConfigStatics.FlushMSDKUrl
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x9438830
	// Params: [ Num(3) Size(0x28) ]
	static struct FString FlushMSDKUrl(bool bIsRead, struct FString MSDKUrl);

	// Object: Function UACommon.UACommonConfigStatics.FlushMailReceiveList
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x5410a90
	// Params: [ Num(3) Size(0x28) ]
	static struct TArray<struct FString> FlushMailReceiveList(bool IsRead, struct TArray<struct FString> mailReceivedTypeList);

	// Object: Function UACommon.UACommonConfigStatics.FlushLastServerName
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x94400fc
	// Params: [ Num(3) Size(0x28) ]
	static struct FString FlushLastServerName(bool bIsRead, struct FString LastServerIndex);

	// Object: Function UACommon.UACommonConfigStatics.FlushLastNickName
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x9437f30
	// Params: [ Num(3) Size(0x28) ]
	static struct FString FlushLastNickName(bool bIsRead, struct FString LastNickName);

	// Object: Function UACommon.UACommonConfigStatics.FlushLastLoginName
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x944644c
	// Params: [ Num(3) Size(0x28) ]
	static struct FString FlushLastLoginName(bool bIsRead, struct FString LastLoginName);

	// Object: Function UACommon.UACommonConfigStatics.FlushLastCrashInfo
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x540fd14
	// Params: [ Num(3) Size(0x28) ]
	static struct FString FlushLastCrashInfo(bool bIsRead, struct FString LastLastCrashInfo);

	// Object: Function UACommon.UACommonConfigStatics.FlushLastChannelType
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x9360b4c
	// Params: [ Num(3) Size(0xC) ]
	static int32_t FlushLastChannelType(bool bIsRead, int32_t LastChannelNum);

	// Object: Function UACommon.UACommonConfigStatics.FlushItemPickList
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x5410f60
	// Params: [ Num(3) Size(0x28) ]
	static struct TArray<struct FString> FlushItemPickList(bool IsRead, struct TArray<struct FString> itemIDAndTypeList);

	// Object: Function UACommon.UACommonConfigStatics.FlushIsFirstOpenGame
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x9373200
	// Params: [ Num(3) Size(0x3) ]
	static bool FlushIsFirstOpenGame(bool bIsRead, bool bIsFirstOpenGame);

	// Object: Function UACommon.UACommonConfigStatics.FlushIsFinishCPoint
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x9580ce4
	// Params: [ Num(3) Size(0x3) ]
	static bool FlushIsFinishCPoint(bool bIsRead, bool isFinshCPoint);

	// Object: Function UACommon.UACommonConfigStatics.FlushIsClickMainUIDownLoad
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x54104a0
	// Params: [ Num(3) Size(0x3) ]
	static bool FlushIsClickMainUIDownLoad(bool bIsRead, bool isClickMainUIDownLoad);

	// Object: Function UACommon.UACommonConfigStatics.FlushIsAgreeAuthorizationOversea
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x95a8804
	// Params: [ Num(3) Size(0x28) ]
	static struct FString FlushIsAgreeAuthorizationOversea(bool bIsRead, struct FString AuthState);

	// Object: Function UACommon.UACommonConfigStatics.FlushIsAgreeAuthorization
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x9540600
	// Params: [ Num(3) Size(0x3) ]
	static bool FlushIsAgreeAuthorization(bool bIsRead, bool bIsAgreeAuthorization);

	// Object: Function UACommon.UACommonConfigStatics.FlushFreeTrafficSystemEnable
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x936bd6c
	// Params: [ Num(3) Size(0x3) ]
	static bool FlushFreeTrafficSystemEnable(bool bIsRead, bool bFreeTrafficSystemEnable);

	// Object: Function UACommon.UACommonConfigStatics.FlushFreeTrafficLobbyAddressInfo
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x9382ee8
	// Params: [ Num(2) Size(0x18) ]
	static void FlushFreeTrafficLobbyAddressInfo(bool bIsRead, struct TArray<struct FString>& InfoArr);

	// Object: Function UACommon.UACommonConfigStatics.FlushFreeTrafficBuyUrl
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x94385f0
	// Params: [ Num(3) Size(0x28) ]
	static struct FString FlushFreeTrafficBuyUrl(bool bIsRead, struct FString FreeTrafficBuyUrl);

	// Object: Function UACommon.UACommonConfigStatics.FlushFirstTimeToRange
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x540fe9c
	// Params: [ Num(3) Size(0x3) ]
	static bool FlushFirstTimeToRange(bool bIsRead, bool bFirstTimeToRange);

	// Object: Function UACommon.UACommonConfigStatics.FlushEventTriggerList
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x541095c
	// Params: [ Num(3) Size(0x28) ]
	static struct TArray<struct FString> FlushEventTriggerList(bool bIsRead, struct TArray<struct FString> eventTriggerList);

	// Object: Function UACommon.UACommonConfigStatics.FlushEEAAgree
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x540ff98
	// Params: [ Num(3) Size(0x3) ]
	static bool FlushEEAAgree(bool bIsRead, bool bAgree);

	// Object: Function UACommon.UACommonConfigStatics.FlushDownloadRecordUMGList
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x95b4f2c
	// Params: [ Num(3) Size(0x28) ]
	static struct TArray<struct FString> FlushDownloadRecordUMGList(bool bIsRead, struct TArray<struct FString> DisplayedUMGList);

	// Object: Function UACommon.UACommonConfigStatics.FlushDownloadRecordLoginTime
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x9560c94
	// Params: [ Num(3) Size(0x28) ]
	static struct FString FlushDownloadRecordLoginTime(bool bIsRead, struct FString LastRecordLoginTime);

	// Object: Function UACommon.UACommonConfigStatics.FlushCheckPointIndex
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x54111c8
	// Params: [ Num(3) Size(0xC) ]
	static int32_t FlushCheckPointIndex(bool bIsRead, int32_t PointIndex);

	// Object: Function UACommon.UACommonConfigStatics.FlushCheckIsFirstLose
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x541059c
	// Params: [ Num(3) Size(0x3) ]
	static bool FlushCheckIsFirstLose(bool IsRead, bool isFirstLose);

	// Object: Function UACommon.UACommonConfigStatics.FlushCheckIsDefaultGamepadSetting
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x54103a4
	// Params: [ Num(3) Size(0x3) ]
	static bool FlushCheckIsDefaultGamepadSetting(bool bIsRead, bool bIsDefaultGamepadSetting);

	// Object: Function UACommon.UACommonConfigStatics.FlushCellularCheckBoxChecked
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x9022df4
	// Params: [ Num(3) Size(0x3) ]
	static bool FlushCellularCheckBoxChecked(bool bIsRead, bool bCellularBoxChecked);

	// Object: Function UACommon.UACommonConfigStatics.FlushCatchIPRegionCode
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x5410094
	// Params: [ Num(3) Size(0x28) ]
	static struct FString FlushCatchIPRegionCode(bool bIsRead, struct FString Code);

	// Object: Function UACommon.UACommonConfigStatics.FlushBCheckDebuffEffect
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x5411094
	// Params: [ Num(3) Size(0x28) ]
	static struct TArray<struct FString> FlushBCheckDebuffEffect(bool bIsRead, struct TArray<struct FString> DebuffCheckArray);

	// Object: Function UACommon.UACommonConfigStatics.FlushAdjustRepotActArry
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x540fbe0
	// Params: [ Num(3) Size(0x28) ]
	static struct TArray<struct FString> FlushAdjustRepotActArry(bool bIsRead, struct TArray<struct FString> OpenActIDList);

	// Object: Function UACommon.UACommonConfigStatics.FlushAdjustReportMapId
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x540faf0
	// Params: [ Num(3) Size(0xC) ]
	static int32_t FlushAdjustReportMapId(bool bIsRead, int32_t MapID);

	// Object: Function UACommon.UACommonConfigStatics.FlushActiveTime
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x97f05a0
	// Params: [ Num(3) Size(0xC) ]
	static int32_t FlushActiveTime(bool bIsRead, int32_t ActiveTime);

	// Object: Function UACommon.UACommonConfigStatics.ConvertToDolphinVersion
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x540f578
	// Params: [ Num(3) Size(0x28) ]
	static struct FString ConvertToDolphinVersion(struct FString InFiveNumVersion, bool InToAssetVersion);
};

// Object: Class UACommon.UACommonStatics
// Size: 0x38 (Inherited: 0x28)
struct UUACommonStatics : UBlueprintFunctionLibrary
{
	DEFINE_UE_CLASS_HELPERS(UUACommonStatics, "UACommonStatics")

	struct FMulticastInlineDelegate IOSPlayerFileSelectpLoadDelegate; // 0x28(0x10)

	// Object: Function UACommon.UACommonStatics.Wrapper_MPE_HasWorkloadBalance
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x720e310
	// Params: [ Num(1) Size(0x1) ]
	static bool Wrapper_MPE_HasWorkloadBalance();

	// Object: Function UACommon.UACommonStatics.WMStop
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x8b84bbc
	// Params: [ Num(1) Size(0x4) ]
	static int32_t WMStop();

	// Object: Function UACommon.UACommonStatics.WMStart
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x8b84b78
	// Params: [ Num(1) Size(0x4) ]
	static int32_t WMStart();

	// Object: Function UACommon.UACommonStatics.WMInitWithCount
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x927feb0
	// Params: [ Num(3) Size(0x18) ]
	static int32_t WMInitWithCount(struct FString Msg, int32_t MarkCount);

	// Object: Function UACommon.UACommonStatics.WMGetValidWidth
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x541c81c
	// Params: [ Num(1) Size(0x4) ]
	static int32_t WMGetValidWidth();

	// Object: Function UACommon.UACommonStatics.WMGetValidHeight
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x541c7e8
	// Params: [ Num(1) Size(0x4) ]
	static int32_t WMGetValidHeight();

	// Object: Function UACommon.UACommonStatics.WMExecute
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x8b84c00
	// Params: [ Num(1) Size(0x4) ]
	static int32_t WMExecute();

	// Object: Function UACommon.UACommonStatics.WMCounter
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x8b88790
	// Params: [ Num(1) Size(0x4) ]
	static int32_t WMCounter();

	// Object: Function UACommon.UACommonStatics.WidgetToTextureNew
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable]
	// Offset: 0x541ad4c
	// Params: [ Num(6) Size(0x2C) ]
	static void WidgetToTextureNew(struct UWidget* Widget, const struct FVector2D& DrawSize, struct FString SavePath, int32_t CompressionQuality, bool bSave, float Scale);

	// Object: Function UACommon.UACommonStatics.WidgetToTexture
	// Flags: [Final|Native|Static|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x541a930
	// Params: [ Num(11) Size(0x68) ]
	static struct FString WidgetToTexture(struct UWidget* Widget, struct FVector2D DrawSize, struct FString SavePath, int32_t CompressionQuality, bool bSave, float Scale, struct FString PandoraImgName, bool bRT, struct UTextureRenderTarget2D* NewTextureRenderTarget, bool bReverse);

	// Object: Function UACommon.UACommonStatics.ValidateAvatars
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x8cf4404
	// Params: [ Num(5) Size(0x31) ]
	static bool ValidateAvatars(struct ASGCharacter* Character, ECharacterSex InCharacterSex, struct TArray<int64_t>& AvatarItemIDs, struct TArray<int64_t>& InvalidAvatarItemIDs);

	// Object: Function UACommon.UACommonStatics.UsrDebug
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x5418d7c
	// Params: [ Num(0) Size(0x0) ]
	static void UsrDebug();

	// Object: Function UACommon.UACommonStatics.UploadPSO
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x54159b4
	// Params: [ Num(0) Size(0x0) ]
	static void UploadPSO();

	// Object: Function UACommon.UACommonStatics.UploadInnerCosFile
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x541e7c0
	// Params: [ Num(2) Size(0x20) ]
	static void UploadInnerCosFile(struct FString Cos, struct FString Str);

	// Object: Function UACommon.UACommonStatics.UploadCosFile
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x541eaa8
	// Params: [ Num(2) Size(0x20) ]
	static void UploadCosFile(struct FString cosFile, struct FString srcFile);

	// Object: Function UACommon.UACommonStatics.UpdateItemSkin
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x5418e30
	// Params: [ Num(4) Size(0x12) ]
	static void UpdateItemSkin(struct ASGCharacter* Character, int64_t SkinID, bool bGiveItem, bool bOnlyUpdateFirstMatch);

	// Object: Function UACommon.UACommonStatics.UpdateInventoryNew
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x541d49c
	// Params: [ Num(3) Size(0x19) ]
	static void UpdateInventoryNew(struct ASGCharacter* PreviewCharacter, struct TArray<struct USGPlayerItemInfoBase*>& InventoryArray, bool bForceUpdateAnimation);

	// Object: Function UACommon.UACommonStatics.UpdateGestureIdsAndVoiceIds
	// Flags: [Final|Native|Static|Private]
	// Offset: 0x5414de8
	// Params: [ Num(3) Size(0x18) ]
	static void UpdateGestureIdsAndVoiceIds(struct ASGCharacter* Character, uint64_t AvatarSuitID, uint64_t AvatarId);

	// Object: Function UACommon.UACommonStatics.UpdateCharacterAnimation
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x541d404
	// Params: [ Num(1) Size(0x8) ]
	static void UpdateCharacterAnimation(struct ASGCharacter* PreviewCharacter);

	// Object: Function UACommon.UACommonStatics.UpdateBadgesAsync
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x541d7ac
	// Params: [ Num(3) Size(0x28) ]
	static void UpdateBadgesAsync(struct ASGCharacter* Character, const struct TArray<int64_t>& itemIds, const struct TArray<ESGBadgeAttach>& attachPoses);

	// Object: Function UACommon.UACommonStatics.UpdateBadgeAsync
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x541d900
	// Params: [ Num(3) Size(0x11) ]
	static void UpdateBadgeAsync(struct ASGCharacter* Character, int64_t itemID, ESGBadgeAttach attachPos);

	// Object: Function UACommon.UACommonStatics.UpdateBadge
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x8709fd4
	// Params: [ Num(4) Size(0x20) ]
	static void UpdateBadge(struct ASGCharacter* Character, int64_t itemID, ESGBadgeAttach attachPos, int64_t AssociatedInvItemId);

	// Object: Function UACommon.UACommonStatics.UpdateAvatarNew
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x8f5e3b8
	// Params: [ Num(3) Size(0x50) ]
	static void UpdateAvatarNew(struct ASGCharacter* Character, ECharacterSex InCharacterSex, struct FSGAvatarWrappedInfo AvatarWrappedInfo);

	// Object: Function UACommon.UACommonStatics.UpdateAvatarFromConsoleByString
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x541da14
	// Params: [ Num(3) Size(0x20) ]
	static void UpdateAvatarFromConsoleByString(struct ASGCharacter* Character, ECharacterSex InCharacterSex, struct FString InAvatarsIdStr);

	// Object: Function UACommon.UACommonStatics.UObjectHasAnyFlags
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x5419f74
	// Params: [ Num(3) Size(0xD) ]
	static bool UObjectHasAnyFlags(struct UObject* Obj, int32_t flag);

	// Object: Function UACommon.UACommonStatics.UnrotateVectorByRotator
	// Flags: [Final|Native|Static|Public|HasDefaults]
	// Offset: 0x5417fa8
	// Params: [ Num(3) Size(0x24) ]
	static struct FVector UnrotateVectorByRotator(struct FRotator Rotator, struct FVector Vector);

	// Object: Function UACommon.UACommonStatics.UnloadWidgetRender
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x541a91c
	// Params: [ Num(0) Size(0x0) ]
	void UnloadWidgetRender();

	// Object: Function UACommon.UACommonStatics.ULocalF
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x95415ac
	// Params: [ Num(2) Size(0x20) ]
	static void ULocalF(struct FString CosPath, struct FString localPath);

	// Object: Function UACommon.UACommonStatics.UATestANR
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x541706c
	// Params: [ Num(0) Size(0x0) ]
	static void UATestANR();

	// Object: Function UACommon.UACommonStatics.UamMakeManualCrashForDebug
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x5415dd4
	// Params: [ Num(0) Size(0x0) ]
	static void UamMakeManualCrashForDebug();

	// Object: Function UACommon.UACommonStatics.UamGetAllObjectsByClassName
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x5415de8
	// Params: [ Num(2) Size(0x20) ]
	static void UamGetAllObjectsByClassName(struct FString InClassName, struct TArray<struct UObject*>& OutObjectsArr);

	// Object: Function UACommon.UACommonStatics.UamDebugGunSkinMaterial
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x5415f40
	// Params: [ Num(8) Size(0x48) ]
	static void UamDebugGunSkinMaterial(struct FString MaterialName, struct FString ParamName, int32_t ParamType, struct FString TexPath, float Param0, float Param1, float Param2, float Param3);

	// Object: Function UACommon.UACommonStatics.UamAddDeferredConsoleCommand
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x982d820
	// Params: [ Num(1) Size(0x10) ]
	static void UamAddDeferredConsoleCommand(struct FString InCmd);

	// Object: Function UACommon.UACommonStatics.TryReportString
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x5419248
	// Params: [ Num(1) Size(0x10) ]
	static void TryReportString(struct FString inStr);

	// Object: Function UACommon.UACommonStatics.TryPerformanceReport
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x5419364
	// Params: [ Num(0) Size(0x0) ]
	static void TryPerformanceReport();

	// Object: Function UACommon.UACommonStatics.TryPerformanceRender
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x5419350
	// Params: [ Num(0) Size(0x0) ]
	static void TryPerformanceRender();

	// Object: Function UACommon.UACommonStatics.TryHotFix
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x541cacc
	// Params: [ Num(0) Size(0x0) ]
	static void TryHotFix();

	// Object: Function UACommon.UACommonStatics.TryConditionReport
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x541933c
	// Params: [ Num(0) Size(0x0) ]
	static void TryConditionReport();

	// Object: Function UACommon.UACommonStatics.TriggerIOSHaptic
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x5418cd0
	// Params: [ Num(1) Size(0x4) ]
	static void TriggerIOSHaptic(int32_t times);

	// Object: Function UACommon.UACommonStatics.TransSoftObj2PathStr
	// Flags: [Final|Native|Static|Private|HasDefaults]
	// Offset: 0x5414ca0
	// Params: [ Num(2) Size(0x28) ]
	static struct FString TransSoftObj2PathStr(struct FSoftObjectPath softObjPath);

	// Object: Function UACommon.UACommonStatics.ToggleGamefileMaskToShaderPipelineCache
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x541c850
	// Params: [ Num(2) Size(0x9) ]
	static void ToggleGamefileMaskToShaderPipelineCache(int64_t InMask, bool bForceSet);

	// Object: Function UACommon.UACommonStatics.ToggleCompileMaskToShaderPipelineCache
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x541c708
	// Params: [ Num(2) Size(0x9) ]
	static void ToggleCompileMaskToShaderPipelineCache(int64_t InCompileask, bool bForceSet);

	// Object: Function UACommon.UACommonStatics.ThrowEquip
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x54197d8
	// Params: [ Num(2) Size(0x9) ]
	static void ThrowEquip(struct ACharacter* SGCharacter, EAttachPosition attachPos);

	// Object: Function UACommon.UACommonStatics.TestSleep
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x54166a4
	// Params: [ Num(1) Size(0x4) ]
	static void TestSleep(int32_t Time);

	// Object: Function UACommon.UACommonStatics.TestSetAndroidSurfaceSize
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x5416594
	// Params: [ Num(2) Size(0x8) ]
	static void TestSetAndroidSurfaceSize(int32_t Width, int32_t Height);

	// Object: Function UACommon.UACommonStatics.TestSaveFrame
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x5416668
	// Params: [ Num(0) Size(0x0) ]
	static void TestSaveFrame();

	// Object: Function UACommon.UACommonStatics.TestNotifyMpe
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x5418d90
	// Params: [ Num(1) Size(0x1) ]
	static void TestNotifyMpe(bool Condition);

	// Object: Function UACommon.UACommonStatics.TestHotfix
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x541903c
	// Params: [ Num(0) Size(0x0) ]
	static void TestHotfix();

	// Object: Function UACommon.UACommonStatics.TestFlushRender
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x5416690
	// Params: [ Num(0) Size(0x0) ]
	static void TestFlushRender();

	// Object: Function UACommon.UACommonStatics.TestFlushLoading
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x541667c
	// Params: [ Num(0) Size(0x0) ]
	static void TestFlushLoading();

	// Object: Function UACommon.UACommonStatics.SynchronizeWidgetProperties
	// Flags: [Final|Native|Static|Private]
	// Offset: 0x5414c08
	// Params: [ Num(1) Size(0x8) ]
	static void SynchronizeWidgetProperties(struct UWidget* Widget);

	// Object: Function UACommon.UACommonStatics.SyncFrameID
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x5416cf4
	// Params: [ Num(1) Size(0x4) ]
	static void SyncFrameID(int32_t frameID);

	// Object: Function UACommon.UACommonStatics.SwitchShowButtonOutline
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x541bbbc
	// Params: [ Num(1) Size(0x8) ]
	static void SwitchShowButtonOutline(struct UWorld* InWorld);

	// Object: Function UACommon.UACommonStatics.SwitchLocalizationLog
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x5417dd0
	// Params: [ Num(1) Size(0x8) ]
	static void SwitchLocalizationLog(struct UWorld* InWorld);

	// Object: Function UACommon.UACommonStatics.SwitchCopyText
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x5417e68
	// Params: [ Num(1) Size(0x8) ]
	static void SwitchCopyText(struct UWorld* InWorld);

	// Object: Function UACommon.UACommonStatics.SupportRemotePSO
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x9551224
	// Params: [ Num(1) Size(0x1) ]
	static bool SupportRemotePSO();

	// Object: Function UACommon.UACommonStatics.StopLevelSequence
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x541a060
	// Params: [ Num(2) Size(0x10) ]
	static void StopLevelSequence(struct UObject* World, struct FName Tag);

	// Object: Function UACommon.UACommonStatics.StopDebugHelperThread
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x541ef00
	// Params: [ Num(0) Size(0x0) ]
	static void StopDebugHelperThread();

	// Object: Function UACommon.UACommonStatics.StartUploadCPPVM
	// Flags: [Final|Native|Static|Private|BlueprintCallable]
	// Offset: 0x541561c
	// Params: [ Num(0) Size(0x0) ]
	static void StartUploadCPPVM();

	// Object: Function UACommon.UACommonStatics.StartDebugHelperThread
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x933e778
	// Params: [ Num(1) Size(0x1) ]
	static bool StartDebugHelperThread();

	// Object: Function UACommon.UACommonStatics.SnapshotCustomTable
	// Flags: [Final|Native|Static|Private|HasOutParms|BlueprintCallable]
	// Offset: 0x54156d8
	// Params: [ Num(2) Size(0x14) ]
	static void SnapshotCustomTable(struct FString& Table, int32_t SearchMode);

	// Object: Function UACommon.UACommonStatics.Snapshot
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x541a39c
	// Params: [ Num(0) Size(0x0) ]
	static void Snapshot();

	// Object: Function UACommon.UACommonStatics.SimulateClick
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x5416e24
	// Params: [ Num(2) Size(0x8) ]
	static void SimulateClick(float X, float Y);

	// Object: Function UACommon.UACommonStatics.ShutdownShaderPipeline
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x541c58c
	// Params: [ Num(1) Size(0x1) ]
	static bool ShutdownShaderPipeline();

	// Object: Function UACommon.UACommonStatics.ShowFilePicker
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x541720c
	// Params: [ Num(0) Size(0x0) ]
	void ShowFilePicker();

	// Object: Function UACommon.UACommonStatics.SetWrapAtOfTextBlock
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x880b77c
	// Params: [ Num(2) Size(0xC) ]
	static void SetWrapAtOfTextBlock(struct UTextBlock* theTextBlock, float InWrapTextAt);

	// Object: Function UACommon.UACommonStatics.SetWidgetFPropertyMargin
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x541b5e4
	// Params: [ Num(3) Size(0x28) ]
	static void SetWidgetFPropertyMargin(struct FString PropertyName, const struct FMargin& MarginTable, struct UUserWidget* Widget);

	// Object: Function UACommon.UACommonStatics.SetUseJavaIsPlayingMethod
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x943344c
	// Params: [ Num(1) Size(0x1) ]
	static void SetUseJavaIsPlayingMethod(bool Condition);

	// Object: Function UACommon.UACommonStatics.SetUseJavaGetCurrentPosition
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x5418f9c
	// Params: [ Num(1) Size(0x1) ]
	static void SetUseJavaGetCurrentPosition(bool Condition);

	// Object: Function UACommon.UACommonStatics.SetTencentWebViewShown
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x541b7cc
	// Params: [ Num(1) Size(0x1) ]
	static void SetTencentWebViewShown(bool InFlag);

	// Object: Function UACommon.UACommonStatics.SetTargetFps
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x5416d8c
	// Params: [ Num(1) Size(0x4) ]
	static void SetTargetFps(int32_t TargetFps);

	// Object: Function UACommon.UACommonStatics.SetStreamingLevelTranslation
	// Flags: [Final|Native|Static|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x93c4f90
	// Params: [ Num(4) Size(0x1D) ]
	static bool SetStreamingLevelTranslation(struct UWorld* World, struct FName LevelName, struct FVector InTranslation);

	// Object: Function UACommon.UACommonStatics.SetStateForUamFrameRateVarianceCalculator
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x938919c
	// Params: [ Num(2) Size(0x8) ]
	static void SetStateForUamFrameRateVarianceCalculator(float TargetLogicFps, float InDuration);

	// Object: Function UACommon.UACommonStatics.SetSlateCursorRadius
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x90f0e5c
	// Params: [ Num(1) Size(0x4) ]
	static void SetSlateCursorRadius(float InRadius);

	// Object: Function UACommon.UACommonStatics.SetScreenOrientationIOS
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x541b938
	// Params: [ Num(1) Size(0x4) ]
	static void SetScreenOrientationIOS(int32_t InValue);

	// Object: Function UACommon.UACommonStatics.SetScreenOrientation
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x91b55f8
	// Params: [ Num(1) Size(0x4) ]
	static void SetScreenOrientation(int32_t InValue);

	// Object: Function UACommon.UACommonStatics.SetSceneRenderingEnable
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x8d41b08
	// Params: [ Num(1) Size(0x1) ]
	static void SetSceneRenderingEnable(bool Enable);

	// Object: Function UACommon.UACommonStatics.SetRemotePSOPath
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x9435844
	// Params: [ Num(1) Size(0x10) ]
	static void SetRemotePSOPath(struct FString InRemotePSOPath);

	// Object: Function UACommon.UACommonStatics.SetPreCompileUsageMask
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x541ca34
	// Params: [ Num(1) Size(0x4) ]
	static void SetPreCompileUsageMask(int32_t mask);

	// Object: Function UACommon.UACommonStatics.SetPreCompileQualityLevel
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x93f71c4
	// Params: [ Num(1) Size(0x4) ]
	static void SetPreCompileQualityLevel(int32_t qualityLevel);

	// Object: Function UACommon.UACommonStatics.SetPipelineFileCacheRayQueryEnabled
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x945a824
	// Params: [ Num(1) Size(0x1) ]
	static void SetPipelineFileCacheRayQueryEnabled(bool bInEnbled);

	// Object: Function UACommon.UACommonStatics.SetNearClippingPlane
	// Flags: [Final|Native|Static|Private]
	// Offset: 0x541502c
	// Params: [ Num(1) Size(0x4) ]
	static void SetNearClippingPlane(float NCP);

	// Object: Function UACommon.UACommonStatics.SetMemberWidgetByName
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x541a45c
	// Params: [ Num(3) Size(0x20) ]
	static void SetMemberWidgetByName(struct UUserWidget* OwnerWidget, struct UWidget* MemberWidget, struct FString MemberName);

	// Object: Function UACommon.UACommonStatics.SetIsMediaPlaying
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x8cd5f8c
	// Params: [ Num(1) Size(0x1) ]
	static void SetIsMediaPlaying(bool Condition);

	// Object: Function UACommon.UACommonStatics.SetGlobalInvalidationEnable
	// Flags: [Final|Native|Static|Private|BlueprintCallable]
	// Offset: 0x92e4f54
	// Params: [ Num(1) Size(0x1) ]
	static void SetGlobalInvalidationEnable(bool bEnable);

	// Object: Function UACommon.UACommonStatics.SetGamefileMask
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x9554f6c
	// Params: [ Num(1) Size(0x4) ]
	static void SetGamefileMask(int32_t mask);

	// Object: Function UACommon.UACommonStatics.SetForceLayerIdUnderUserWidget
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x931c3d0
	// Params: [ Num(4) Size(0x20) ]
	static void SetForceLayerIdUnderUserWidget(struct UUserWidget* InUserWidget, struct TArray<struct FString>& BackgroundWidgetNames, int32_t LayerId_BackgroundWidgets, int32_t LayerId_ForegroundWidgets);

	// Object: Function UACommon.UACommonStatics.SetForceLayerIdOnlySpecificTextBlock
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x946e5c4
	// Params: [ Num(4) Size(0x2C) ]
	static void SetForceLayerIdOnlySpecificTextBlock(struct UUserWidget* InUserWidget, struct TArray<struct FString>& WidgetNames, struct TArray<int32_t>& WidgetLayerIds, int32_t DefaultLayerId);

	// Object: Function UACommon.UACommonStatics.SetForceLayerIdOnlySpecificImage
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x95baf58
	// Params: [ Num(4) Size(0x2C) ]
	static void SetForceLayerIdOnlySpecificImage(struct UUserWidget* InUserWidget, struct TArray<struct FString>& WidgetNames, struct TArray<int32_t>& WidgetLayerIds, int32_t DefaultLayerId);

	// Object: Function UACommon.UACommonStatics.SetFont
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x541cb14
	// Params: [ Num(2) Size(0x18) ]
	static void SetFont(struct UTextBlock* TextBlock, struct FString InPath);

	// Object: Function UACommon.UACommonStatics.SetEnableReindexLayerId
	// Flags: [Final|Native|Static|Private|BlueprintCallable]
	// Offset: 0x92e79b8
	// Params: [ Num(1) Size(0x1) ]
	static void SetEnableReindexLayerId(bool bEnable);

	// Object: Function UACommon.UACommonStatics.SetDynamicLogLevel
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x541b54c
	// Params: [ Num(1) Size(0x4) ]
	static void SetDynamicLogLevel(int32_t InLogLevel);

	// Object: Function UACommon.UACommonStatics.SetCulture
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x541c3c4
	// Params: [ Num(2) Size(0x11) ]
	static bool SetCulture(struct FString culture);

	// Object: Function UACommon.UACommonStatics.SetCharacterType
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x8b65b4c
	// Params: [ Num(2) Size(0x9) ]
	static void SetCharacterType(struct ACharacter* PreviewCharacter, ECharacterType InCharacterType);

	// Object: Function UACommon.UACommonStatics.SetCharacterMeleeWeaponHasCarving
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x8e5f248
	// Params: [ Num(2) Size(0x18) ]
	static void SetCharacterMeleeWeaponHasCarving(struct ASGCharacter* Character, struct FString PlayerName);

	// Object: Function UACommon.UACommonStatics.SaveWidgetTexture
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x541a790
	// Params: [ Num(4) Size(0x1D) ]
	static bool SaveWidgetTexture(struct FString Path, struct UTextureRenderTarget2D* TargetRT, int32_t CompressionQuality);

	// Object: Function UACommon.UACommonStatics.SaveStringArray
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x541e948
	// Params: [ Num(2) Size(0x20) ]
	static void SaveStringArray(struct TArray<struct FString> stringArr, struct FString Path);

	// Object: Function UACommon.UACommonStatics.SaveServiceTable
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x5418678
	// Params: [ Num(1) Size(0x10) ]
	static void SaveServiceTable(struct TArray<struct FServiceConfTableRow> serviceConfs);

	// Object: Function UACommon.UACommonStatics.SaveRenderTargetToFile
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x541b2ec
	// Params: [ Num(3) Size(0x19) ]
	static bool SaveRenderTargetToFile(struct UTextureRenderTarget2D* rt, struct FString fileDestination);

	// Object: Function UACommon.UACommonStatics.SavePanelTable
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x5418b64
	// Params: [ Num(1) Size(0x10) ]
	static void SavePanelTable(struct TArray<struct FPanelConfTableRow> panelConfs);

	// Object: Function UACommon.UACommonStatics.SaveModuleTable
	// Flags: [Final|Native|Static|Public|HasOutParms]
	// Offset: 0x5418310
	// Params: [ Num(1) Size(0x10) ]
	static void SaveModuleTable(const struct TArray<struct FModuleConfTableRow>& moduleConfs);

	// Object: Function UACommon.UACommonStatics.SaveImageFromTexture2DDy
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x541e3d0
	// Params: [ Num(2) Size(0x18) ]
	static void SaveImageFromTexture2DDy(struct UTexture2DDynamic* InDyTex, struct FString DesPath);

	// Object: Function UACommon.UACommonStatics.RotateVectorByRotator
	// Flags: [Final|Native|Static|Public|HasDefaults]
	// Offset: 0x9279e1c
	// Params: [ Num(3) Size(0x24) ]
	static struct FVector RotateVectorByRotator(struct FRotator Rotator, struct FVector Vector);

	// Object: Function UACommon.UACommonStatics.RotateByQuaternion
	// Flags: [Final|Native|Static|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x5416494
	// Params: [ Num(3) Size(0x24) ]
	static struct FRotator RotateByQuaternion(struct FRotator AddRotator, struct FRotator OrigRotator);

	// Object: Function UACommon.UACommonStatics.RequestExit
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x541c0d0
	// Params: [ Num(1) Size(0x1) ]
	static void RequestExit(bool bInForce);

	// Object: Function UACommon.UACommonStatics.RequestBloothtoothPermission
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x54171f8
	// Params: [ Num(0) Size(0x0) ]
	static void RequestBloothtoothPermission();

	// Object: Function UACommon.UACommonStatics.ReportStringToCrashsight
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x5419158
	// Params: [ Num(2) Size(0x20) ]
	static void ReportStringToCrashsight(struct FString Title, struct FString Content);

	// Object: Function UACommon.UACommonStatics.ReportPerformanceData
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x8d616c4
	// Params: [ Num(1) Size(0x1) ]
	static bool ReportPerformanceData();

	// Object: Function UACommon.UACommonStatics.ReplaceMultilingualFontFace
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x541ee5c
	// Params: [ Num(1) Size(0x10) ]
	static void ReplaceMultilingualFontFace(struct FString CurrentLanguage);

	// Object: Function UACommon.UACommonStatics.RenderWidgetToUTexture2D
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable]
	// Offset: 0x541afa8
	// Params: [ Num(3) Size(0x18) ]
	static void RenderWidgetToUTexture2D(struct UWidget* Widget, const struct FVector2D& DrawSize, struct UTextureRenderTarget2D* NewTextureRenderTarget);

	// Object: Function UACommon.UACommonStatics.RenderWidgetToRenderTarget
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable]
	// Offset: 0x541b0d0
	// Params: [ Num(3) Size(0x18) ]
	static void RenderWidgetToRenderTarget(struct UWidget* Widget, const struct FVector2D& DrawSize, struct UTextureRenderTarget2D* RenderTarget);

	// Object: Function UACommon.UACommonStatics.RenderWidget
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable]
	// Offset: 0x541b1f8
	// Params: [ Num(2) Size(0x10) ]
	static void RenderWidget(struct UWidget* Widget, const struct FVector2D& DrawSize);

	// Object: Function UACommon.UACommonStatics.RemoveServiceFromTable
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x54184c8
	// Params: [ Num(1) Size(0x10) ]
	static void RemoveServiceFromTable(struct FString removeServiceName);

	// Object: Function UACommon.UACommonStatics.RemovePreloadAvatars
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x541dd50
	// Params: [ Num(2) Size(0x18) ]
	static void RemovePreloadAvatars(struct ASGCharacter* Character, struct TArray<int64_t>& AvatarItemIDs);

	// Object: Function UACommon.UACommonStatics.RemovePanelFromTable
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x54189b8
	// Params: [ Num(1) Size(0x10) ]
	static void RemovePanelFromTable(struct FString removePanelName);

	// Object: Function UACommon.UACommonStatics.RemoveModuleFromTable
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x5418180
	// Params: [ Num(1) Size(0x10) ]
	static void RemoveModuleFromTable(struct FString removeModuleName);

	// Object: Function UACommon.UACommonStatics.RemoveInventory
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x541e004
	// Params: [ Num(2) Size(0x10) ]
	static void RemoveInventory(struct ASGCharacter* PreviewCharacter, int64_t InventoryId);

	// Object: Function UACommon.UACommonStatics.RemoveAllInventories
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x541e1ac
	// Params: [ Num(1) Size(0x8) ]
	static void RemoveAllInventories(struct ASGCharacter* PreviewCharacter);

	// Object: Function UACommon.UACommonStatics.ReleaseWifiManagerLock
	// Flags: [Final|Native|Static|Private]
	// Offset: 0x9161818
	// Params: [ Num(0) Size(0x0) ]
	static void ReleaseWifiManagerLock();

	// Object: Function UACommon.UACommonStatics.RefreshWindowSizeAndroid
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x95a0504
	// Params: [ Num(0) Size(0x0) ]
	static void RefreshWindowSizeAndroid();

	// Object: Function UACommon.UACommonStatics.RefreshIconOfImage
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x932cb34
	// Params: [ Num(2) Size(0x10) ]
	static void RefreshIconOfImage(struct UImage* Image, struct UObject* ICON);

	// Object: Function UACommon.UACommonStatics.RefreshAssembleTagItemIDMap
	// Flags: [Final|Native|Static|Private]
	// Offset: 0x5415374
	// Params: [ Num(0) Size(0x0) ]
	static void RefreshAssembleTagItemIDMap();

	// Object: Function UACommon.UACommonStatics.PreProcessShaderProgramBinary
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x8beb16c
	// Params: [ Num(0) Size(0x0) ]
	static void PreProcessShaderProgramBinary();

	// Object: Function UACommon.UACommonStatics.PreloadAvatars
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x541de40
	// Params: [ Num(5) Size(0x20) ]
	static void PreloadAvatars(struct ASGCharacter* Character, struct TArray<int64_t>& AvatarItemIDs, ECharacterSex CharacterSex, bool Reset, int32_t MaxPreloadNum);

	// Object: Function UACommon.UACommonStatics.PlaySound2DByName
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x5419604
	// Params: [ Num(3) Size(0x28) ]
	static void PlaySound2DByName(struct UWorld* World, struct FString SoundName, struct FString Source);

	// Object: Function UACommon.UACommonStatics.PlayListViewAnimOfPanel
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x541b3e8
	// Params: [ Num(1) Size(0x8) ]
	static void PlayListViewAnimOfPanel(struct UUserWidget* UserWidget);

	// Object: Function UACommon.UACommonStatics.PlayLevelSequenceReverse
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x541a134
	// Params: [ Num(2) Size(0x10) ]
	static void PlayLevelSequenceReverse(struct UObject* World, struct FName Tag);

	// Object: Function UACommon.UACommonStatics.PlayLevelSequence
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x541a208
	// Params: [ Num(2) Size(0x10) ]
	static void PlayLevelSequence(struct UObject* World, struct FName Tag);

	// Object: Function UACommon.UACommonStatics.PlayInitAnimation
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x541b480
	// Params: [ Num(1) Size(0x8) ]
	static void PlayInitAnimation(struct UUserWidget* UserWidget);

	// Object: DelegateFunction UACommon.UACommonStatics.PlayerFileSelectpLoadDelegate__DelegateSignature
	// Flags: [MulticastDelegate|Public|Delegate]
	// Offset: 0x5d8cbc8
	// Params: [ Num(1) Size(0x10) ]
	void PlayerFileSelectpLoadDelegate__DelegateSignature(struct FString RspContent);

	// Object: Function UACommon.UACommonStatics.ParseObjectByName
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x5417af4
	// Params: [ Num(2) Size(0x18) ]
	static struct UObject* ParseObjectByName(struct FString InObjectName);

	// Object: Function UACommon.UACommonStatics.OpenShaderCodeLibrary
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x943f4a8
	// Params: [ Num(3) Size(0x21) ]
	static bool OpenShaderCodeLibrary(struct FString InName, struct FString InDir);

	// Object: Function UACommon.UACommonStatics.OpenPipelineFileCache
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x8f31d18
	// Params: [ Num(2) Size(0x11) ]
	static bool OpenPipelineFileCache(struct FString InName);

	// Object: Function UACommon.UACommonStatics.OnSaveCompiledPSO
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x54158d0
	// Params: [ Num(0) Size(0x0) ]
	static void OnSaveCompiledPSO();

	// Object: Function UACommon.UACommonStatics.OnPreScopeCacheShaders
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x5415888
	// Params: [ Num(0) Size(0x0) ]
	static void OnPreScopeCacheShaders();

	// Object: Function UACommon.UACommonStatics.OnPostScopeCacheShaders
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x5415874
	// Params: [ Num(0) Size(0x0) ]
	static void OnPostScopeCacheShaders();

	// Object: Function UACommon.UACommonStatics.OnOpenAnimationBegin
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x8728544
	// Params: [ Num(1) Size(0x8) ]
	static void OnOpenAnimationBegin(struct UUserWidget* UserWidget);

	// Object: Function UACommon.UACommonStatics.NumPrecompilesRemainingWithoutHack
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x541c480
	// Params: [ Num(1) Size(0x4) ]
	static int32_t NumPrecompilesRemainingWithoutHack();

	// Object: Function UACommon.UACommonStatics.NumPrecompilesRemaining
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x8951c98
	// Params: [ Num(1) Size(0x4) ]
	static int32_t NumPrecompilesRemaining();

	// Object: Function UACommon.UACommonStatics.NumOutStandingPrecompilesRemaining
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x541c4b4
	// Params: [ Num(1) Size(0x4) ]
	static int32_t NumOutStandingPrecompilesRemaining();

	// Object: Function UACommon.UACommonStatics.MpeDebugPrintSkel
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x5416380
	// Params: [ Num(0) Size(0x0) ]
	static void MpeDebugPrintSkel();

	// Object: Function UACommon.UACommonStatics.ModifyServiceFromTable
	// Flags: [Final|Native|Static|Public|HasOutParms]
	// Offset: 0x54183bc
	// Params: [ Num(1) Size(0x58) ]
	static void ModifyServiceFromTable(const struct FServiceConfTableRow& serviceConf);

	// Object: Function UACommon.UACommonStatics.ModifyPanelFromTable
	// Flags: [Final|Native|Static|Public|HasOutParms]
	// Offset: 0x54188b0
	// Params: [ Num(1) Size(0x58) ]
	static void ModifyPanelFromTable(struct FPanelConfTableRow& panelConf);

	// Object: Function UACommon.UACommonStatics.ModifyModuleFromTable
	// Flags: [Final|Native|Static|Public|HasOutParms]
	// Offset: 0x5418094
	// Params: [ Num(1) Size(0x38) ]
	static void ModifyModuleFromTable(const struct FModuleConfTableRow& moduleConf);

	// Object: Function UACommon.UACommonStatics.MagtPredictWorkloadCpu
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x5416c5c
	// Params: [ Num(1) Size(0x4) ]
	static void MagtPredictWorkloadCpu(int32_t CpuLoadScale);

	// Object: Function UACommon.UACommonStatics.MagtBoostGPU
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x5416a34
	// Params: [ Num(3) Size(0xC) ]
	static void MagtBoostGPU(int32_t Level, int32_t Duration, int32_t flag);

	// Object: Function UACommon.UACommonStatics.MagtBoostCPU
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x5416b48
	// Params: [ Num(3) Size(0xC) ]
	static void MagtBoostCPU(int32_t Level, int32_t Duration, int32_t flag);

	// Object: Function UACommon.UACommonStatics.LogAssetLoadingInfo
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x541bba8
	// Params: [ Num(0) Size(0x0) ]
	static void LogAssetLoadingInfo();

	// Object: Function UACommon.UACommonStatics.LocalSizeToViewportSize
	// Flags: [Final|Native|Static|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x5417384
	// Params: [ Num(4) Size(0x50) ]
	static struct FVector2D LocalSizeToViewportSize(struct UWorld* World, struct FGeometry localGeometry, struct FVector2D localSize);

	// Object: Function UACommon.UACommonStatics.LoadImageToTexture2DDy
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x541e618
	// Params: [ Num(2) Size(0x18) ]
	static struct UObject* LoadImageToTexture2DDy(struct FString ImagePath);

	// Object: Function UACommon.UACommonStatics.LoadImageToTexture2D
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x541e6d0
	// Params: [ Num(2) Size(0x18) ]
	static struct UObject* LoadImageToTexture2D(struct FString ImagePath);

	// Object: Function UACommon.UACommonStatics.LoadCppPatch
	// Flags: [Final|Native|Static|Private|BlueprintCallable]
	// Offset: 0x97a4544
	// Params: [ Num(0) Size(0x0) ]
	static void LoadCppPatch();

	// Object: Function UACommon.UACommonStatics.LoadAPSDKs
	// Flags: [Final|Native|Static|Private]
	// Offset: 0x957e828
	// Params: [ Num(0) Size(0x0) ]
	static void LoadAPSDKs();

	// Object: Function UACommon.UACommonStatics.ListAllMountedPakWithOrder
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x541eccc
	// Params: [ Num(1) Size(0x50) ]
	static struct TMap<struct FString, int32_t> ListAllMountedPakWithOrder();

	// Object: Function UACommon.UACommonStatics.ListAllMountedPaks
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x5418c60
	// Params: [ Num(1) Size(0x10) ]
	static struct TArray<struct FString> ListAllMountedPaks();

	// Object: Function UACommon.UACommonStatics.KillParticlesForced
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x5415ca4
	// Params: [ Num(1) Size(0x8) ]
	static void KillParticlesForced(struct UParticleSystemComponent* ParticleSystemComponent);

	// Object: Function UACommon.UACommonStatics.IsWorldInDsMode
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x90f4a08
	// Params: [ Num(2) Size(0x9) ]
	static bool IsWorldInDsMode(struct UWorld* TheWorld);

	// Object: Function UACommon.UACommonStatics.IsPSOWaitForStart
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x8b48e80
	// Params: [ Num(1) Size(0x1) ]
	static bool IsPSOWaitForStart();

	// Object: Function UACommon.UACommonStatics.IsPCGame
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x90468c4
	// Params: [ Num(1) Size(0x1) ]
	static bool IsPCGame();

	// Object: Function UACommon.UACommonStatics.IsMeleeWeaponCanCarving
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x541d260
	// Params: [ Num(3) Size(0x11) ]
	static bool IsMeleeWeaponCanCarving(struct UObject* WorldContextObject, int64_t itemID);

	// Object: Function UACommon.UACommonStatics.IsInBlackSensorDevice
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x541eff4
	// Params: [ Num(1) Size(0x1) ]
	static bool IsInBlackSensorDevice();

	// Object: Function UACommon.UACommonStatics.IsFromLandun
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x9046904
	// Params: [ Num(1) Size(0x1) ]
	static bool IsFromLandun();

	// Object: Function UACommon.UACommonStatics.IsForceUiLayerIdEnable
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x8b9db5c
	// Params: [ Num(1) Size(0x1) ]
	static bool IsForceUiLayerIdEnable();

	// Object: Function UACommon.UACommonStatics.IsEnableDownloadRemotePak
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x541e788
	// Params: [ Num(1) Size(0x1) ]
	static bool IsEnableDownloadRemotePak();

	// Object: Function UACommon.UACommonStatics.IsEnableCompileUsageMask
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x8ce3760
	// Params: [ Num(1) Size(0x1) ]
	static bool IsEnableCompileUsageMask();

	// Object: Function UACommon.UACommonStatics.IsDuringPreOptimizing
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x541c930
	// Params: [ Num(1) Size(0x1) ]
	static bool IsDuringPreOptimizing();

	// Object: Function UACommon.UACommonStatics.IsBadgeByInventoryId
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x541a6a8
	// Params: [ Num(3) Size(0x11) ]
	static bool IsBadgeByInventoryId(struct UWorld* World, int64_t InventoryId);

	// Object: Function UACommon.UACommonStatics.IsAlikeCulture
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x541c26c
	// Params: [ Num(2) Size(0x11) ]
	static bool IsAlikeCulture(struct FString Language);

	// Object: Function UACommon.UACommonStatics.is_RUNNING_WITH_ASAN_DS
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x9191c0c
	// Params: [ Num(1) Size(0x1) ]
	static bool is_RUNNING_WITH_ASAN_DS();

	// Object: Function UACommon.UACommonStatics.InitReplayInfo
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x942c630
	// Params: [ Num(0) Size(0x0) ]
	static void InitReplayInfo();

	// Object: Function UACommon.UACommonStatics.InitPsoDelegates
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x9560818
	// Params: [ Num(0) Size(0x0) ]
	static void InitPsoDelegates();

	// Object: Function UACommon.UACommonStatics.InitFourTapUploadFeature
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x8beb184
	// Params: [ Num(0) Size(0x0) ]
	static void InitFourTapUploadFeature();

	// Object: Function UACommon.UACommonStatics.HitMpeOption
	// Flags: [Final|Native|Static|Private]
	// Offset: 0x90c2090
	// Params: [ Num(1) Size(0x1) ]
	static void HitMpeOption(bool Active);

	// Object: Function UACommon.UACommonStatics.HideAvatar
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x541db98
	// Params: [ Num(3) Size(0xA) ]
	static void HideAvatar(struct ASGCharacter* Character, ESGAvatarType AvatarType, bool bHide);

	// Object: Function UACommon.UACommonStatics.HackPrecompilesRemaining
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x9505cdc
	// Params: [ Num(1) Size(0x4) ]
	static void HackPrecompilesRemaining(int32_t InValue);

	// Object: Function UACommon.UACommonStatics.GoToTrainLevelWithWeapon
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x541b9d0
	// Params: [ Num(3) Size(0x20) ]
	static void GoToTrainLevelWithWeapon(struct UObject* World, struct ASGCharacter* PreviewCharacter, struct TArray<struct USGPlayerItemInfoBase*>& InventoryArray);

	// Object: Function UACommon.UACommonStatics.GlobalLockUiEvents
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x8b395ec
	// Params: [ Num(1) Size(0x1) ]
	static void GlobalLockUiEvents(bool isLock);

	// Object: Function UACommon.UACommonStatics.GiveItemToOneAI
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x5419d58
	// Params: [ Num(4) Size(0x15) ]
	static bool GiveItemToOneAI(struct ASGAICharacter* SGCharacter, int64_t itemID, int32_t Num);

	// Object: Function UACommon.UACommonStatics.GiveItemToNearestAI
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x5419c30
	// Params: [ Num(4) Size(0x15) ]
	static bool GiveItemToNearestAI(struct UObject* WorldContextObject, int64_t itemID, int32_t Num);

	// Object: Function UACommon.UACommonStatics.GiveItemByPart
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x54198b0
	// Params: [ Num(7) Size(0x29) ]
	static bool GiveItemByPart(struct ACharacter* SGCharacter, int64_t itemID, int64_t PartID, int64_t SprayID, int32_t Num, int32_t SkinID);

	// Object: Function UACommon.UACommonStatics.GiveItem
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x5419a94
	// Params: [ Num(5) Size(0x28) ]
	static struct TArray<struct ASGInventory*> GiveItem(struct ACharacter* SGCharacter, int64_t itemID, int32_t Num, int32_t SkinID);

	// Object: Function UACommon.UACommonStatics.GiveInventory
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x541e0d8
	// Params: [ Num(2) Size(0x10) ]
	static void GiveInventory(struct ASGCharacter* PreviewCharacter, int64_t InventoryId);

	// Object: Function UACommon.UACommonStatics.GiveInventories
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x541e244
	// Params: [ Num(2) Size(0x18) ]
	static void GiveInventories(struct ASGCharacter* PreviewCharacter, struct TArray<int64_t>& InventoryIdList);

	// Object: Function UACommon.UACommonStatics.GetWigdetHierarchyInfo
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x5419378
	// Params: [ Num(2) Size(0x18) ]
	static struct FString GetWigdetHierarchyInfo(struct UWidget* InWidget);

	// Object: Function UACommon.UACommonStatics.GetWidgetGeometrySync
	// Flags: [Final|Native|Static|Private|BlueprintCallable]
	// Offset: 0x9198b5c
	// Params: [ Num(4) Size(0x80) ]
	static struct FGeometry GetWidgetGeometrySync(struct FGeometry ParentGeomtry, struct UWidget* ParentWidget, struct UWidget* TargetWidget);

	// Object: Function UACommon.UACommonStatics.GetWidgetGeometryScale
	// Flags: [Final|Native|Static|Private|BlueprintCallable]
	// Offset: 0x5415630
	// Params: [ Num(2) Size(0xC) ]
	static float GetWidgetGeometryScale(struct UWidget* Widget);

	// Object: Function UACommon.UACommonStatics.GetWeaponPresetConfigMap
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x5416394
	// Params: [ Num(1) Size(0x50) ]
	static struct TMap<int32_t, struct FWeaponPresetConfTableRow> GetWeaponPresetConfigMap();

	// Object: Function UACommon.UACommonStatics.GetWeaponAssembleConfigMap
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x5416414
	// Params: [ Num(1) Size(0x50) ]
	static struct TMap<int32_t, struct FWeaponAssembleConfTableRow> GetWeaponAssembleConfigMap();

	// Object: Function UACommon.UACommonStatics.GetViewportLocalSize
	// Flags: [Final|Native|Static|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x54174c4
	// Params: [ Num(2) Size(0x10) ]
	static struct FVector2D GetViewportLocalSize(struct UWorld* World);

	// Object: Function UACommon.UACommonStatics.GetUsingRayQueryShaderLib
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x9546d54
	// Params: [ Num(1) Size(0x1) ]
	static bool GetUsingRayQueryShaderLib();

	// Object: Function UACommon.UACommonStatics.GetUserWidgetByName
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x959f624
	// Params: [ Num(3) Size(0x18) ]
	static struct UUserWidget* GetUserWidgetByName(struct UUserWidget* UserWidget, struct FName WidgetName);

	// Object: Function UACommon.UACommonStatics.GetUObjectClass
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x5417038
	// Params: [ Num(1) Size(0x8) ]
	static struct UObject* GetUObjectClass();

	// Object: Function UACommon.UACommonStatics.GetUIMode
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x8d10284
	// Params: [ Num(2) Size(0x9) ]
	static EUAUIMode GetUIMode(struct UObject* InWorldContextObject);

	// Object: Function UACommon.UACommonStatics.GetUamFrameRateVariance
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x541589c
	// Params: [ Num(1) Size(0x4) ]
	static float GetUamFrameRateVariance();

	// Object: Function UACommon.UACommonStatics.GetUamFrameRateStdDev
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x7bf67b8
	// Params: [ Num(1) Size(0x4) ]
	static float GetUamFrameRateStdDev();

	// Object: Function UACommon.UACommonStatics.GetTimeLimitedResources
	// Flags: [Final|Native|Static|Private|BlueprintCallable]
	// Offset: 0x9452768
	// Params: [ Num(1) Size(0x10) ]
	static struct TArray<struct FTimeLimitedResourcesTableRow> GetTimeLimitedResources();

	// Object: Function UACommon.UACommonStatics.GetThermalStatus
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x5416a00
	// Params: [ Num(1) Size(0x4) ]
	static int32_t GetThermalStatus();

	// Object: Function UACommon.UACommonStatics.GetTextureResolution
	// Flags: [Final|Native|Static|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x541e4b4
	// Params: [ Num(2) Size(0x10) ]
	static struct FVector2D GetTextureResolution(struct UTexture2DDynamic* tex);

	// Object: Function UACommon.UACommonStatics.GetTextureMemorySize
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x8be48c8
	// Params: [ Num(3) Size(0x10) ]
	static int32_t GetTextureMemorySize(struct UTexture2DDynamic* tex, uint8_t Enum);

	// Object: Function UACommon.UACommonStatics.GetTableTileNames
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x86f073c
	// Params: [ Num(2) Size(0x18) ]
	static struct TArray<struct FString> GetTableTileNames(struct UDataTable* Table);

	// Object: Function UACommon.UACommonStatics.GetStreamingLevelTranslation
	// Flags: [Final|Native|Static|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x5416298
	// Params: [ Num(3) Size(0x1C) ]
	static struct FVector GetStreamingLevelTranslation(struct UWorld* World, struct FName LevelName);

	// Object: Function UACommon.UACommonStatics.GetServiceTable
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x5418774
	// Params: [ Num(1) Size(0x10) ]
	static struct TArray<struct FServiceConfTableRow> GetServiceTable();

	// Object: Function UACommon.UACommonStatics.GetSequenceTrackStopRotation
	// Flags: [Final|Native|Static|Public|HasDefaults]
	// Offset: 0x9760d4c
	// Params: [ Num(3) Size(0x24) ]
	static struct FRotator GetSequenceTrackStopRotation(struct ALevelSequenceActor* SequenceActor, struct FString BindingName);

	// Object: Function UACommon.UACommonStatics.GetSequenceTrackStopLocation
	// Flags: [Final|Native|Static|Public|HasDefaults]
	// Offset: 0x8d68564
	// Params: [ Num(3) Size(0x24) ]
	static struct FVector GetSequenceTrackStopLocation(struct ALevelSequenceActor* SequenceActor, struct FString TrackName);

	// Object: Function UACommon.UACommonStatics.GetSequenceTotalTime
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x5417f00
	// Params: [ Num(2) Size(0xC) ]
	static float GetSequenceTotalTime(struct ALevelSequenceActor* SequenceActor);

	// Object: Function UACommon.UACommonStatics.GetSampleRate
	// Flags: [Final|Native|Static|Private|BlueprintCallable]
	// Offset: 0x5415464
	// Params: [ Num(1) Size(0x4) ]
	static int32_t GetSampleRate();

	// Object: Function UACommon.UACommonStatics.GetRootWeaponItemID
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x541bf38
	// Params: [ Num(2) Size(0x48) ]
	static int64_t GetRootWeaponItemID(struct FWeaponAssembleConfTableRow Row);

	// Object: Function UACommon.UACommonStatics.GetReplayPackage
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x8b6a240
	// Params: [ Num(1) Size(0x1) ]
	static bool GetReplayPackage();

	// Object: Function UACommon.UACommonStatics.GetReplayInfo
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x5416ef8
	// Params: [ Num(2) Size(0x20) ]
	static struct FString GetReplayInfo(struct FString Key);

	// Object: Function UACommon.UACommonStatics.GetRemotePSOIntermediateDirectory
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x9c36ff0
	// Params: [ Num(1) Size(0x10) ]
	static struct FString GetRemotePSOIntermediateDirectory();

	// Object: Function UACommon.UACommonStatics.GetRemotePSOHash
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x958f6b8
	// Params: [ Num(1) Size(0x10) ]
	static struct FString GetRemotePSOHash();

	// Object: Function UACommon.UACommonStatics.GetRemotePSODirectory
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x9c36f50
	// Params: [ Num(1) Size(0x10) ]
	static struct FString GetRemotePSODirectory();

	// Object: Function UACommon.UACommonStatics.GetRefCanvasPanelSlotPosition
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults]
	// Offset: 0x839b464
	// Params: [ Num(2) Size(0x10) ]
	static void GetRefCanvasPanelSlotPosition(struct UCanvasPanelSlot* Slot, struct FVector2D& postion);

	// Object: Function UACommon.UACommonStatics.GetRayQuerySettingSection
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x9c37090
	// Params: [ Num(2) Size(0x20) ]
	static struct TArray<struct FString> GetRayQuerySettingSection(struct FString SectionName);

	// Object: Function UACommon.UACommonStatics.GetPSOUploadFilePath
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x54159c8
	// Params: [ Num(1) Size(0x10) ]
	static struct FString GetPSOUploadFilePath();

	// Object: Function UACommon.UACommonStatics.GetPSOFileCacheMaxPrecompileCount
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x541c968
	// Params: [ Num(1) Size(0x4) ]
	static int32_t GetPSOFileCacheMaxPrecompileCount();

	// Object: Function UACommon.UACommonStatics.GetPSODownloadFlagFilePath
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x92adee4
	// Params: [ Num(1) Size(0x10) ]
	static struct FString GetPSODownloadFlagFilePath();

	// Object: Function UACommon.UACommonStatics.GetPSOCompileKey
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x8815598
	// Params: [ Num(1) Size(0x10) ]
	static struct FString GetPSOCompileKey();

	// Object: Function UACommon.UACommonStatics.GetPSOCacheKey
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x8aee980
	// Params: [ Num(1) Size(0x10) ]
	static struct FString GetPSOCacheKey();

	// Object: Function UACommon.UACommonStatics.GetPSOBuildingFilePath
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x9197fe4
	// Params: [ Num(1) Size(0x10) ]
	static struct FString GetPSOBuildingFilePath();

	// Object: Function UACommon.UACommonStatics.GetPreCompileQualityLevel
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x9359d88
	// Params: [ Num(1) Size(0x4) ]
	static int32_t GetPreCompileQualityLevel();

	// Object: Function UACommon.UACommonStatics.GetPlayerSelect
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x5417188
	// Params: [ Num(1) Size(0x10) ]
	struct TArray<struct FString> GetPlayerSelect();

	// Object: Function UACommon.UACommonStatics.GetPlatformDeviceId
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x541d044
	// Params: [ Num(1) Size(0x10) ]
	static struct FString GetPlatformDeviceId();

	// Object: Function UACommon.UACommonStatics.GetPersistentDownloadDir
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x541e334
	// Params: [ Num(1) Size(0x10) ]
	static struct FString GetPersistentDownloadDir();

	// Object: Function UACommon.UACommonStatics.GetPanelTable
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x6fabae8
	// Params: [ Num(1) Size(0x10) ]
	static struct TArray<struct FPanelConfTableRow> GetPanelTable();

	// Object: Function UACommon.UACommonStatics.GetPackageDependencies
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x541c170
	// Params: [ Num(2) Size(0x20) ]
	static struct TArray<struct FString> GetPackageDependencies(struct FString InPackage);

	// Object: Function UACommon.UACommonStatics.GetOSVersions
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x9190c18
	// Params: [ Num(1) Size(0x10) ]
	static void GetOSVersions(struct TArray<struct FString>& OSVersionList);

	// Object: Function UACommon.UACommonStatics.GetOSVersion
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x8d44c70
	// Params: [ Num(1) Size(0x10) ]
	static struct FString GetOSVersion();

	// Object: Function UACommon.UACommonStatics.GetObjReferenceChainSearchInfoByName
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x5417bfc
	// Params: [ Num(2) Size(0x20) ]
	static struct TArray<struct FString> GetObjReferenceChainSearchInfoByName(struct FString InObjectName);

	// Object: Function UACommon.UACommonStatics.GetObjReferenceChainSearchInfo
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x5417d14
	// Params: [ Num(2) Size(0x18) ]
	static struct TArray<struct FString> GetObjReferenceChainSearchInfo(struct UObject* InObject);

	// Object: Function UACommon.UACommonStatics.GetObjPathName
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x541bd34
	// Params: [ Num(2) Size(0x18) ]
	static struct FString GetObjPathName(struct UObject* InObj);

	// Object: Function UACommon.UACommonStatics.GetObjFullName
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x541bc54
	// Params: [ Num(2) Size(0x18) ]
	static struct FString GetObjFullName(struct UObject* InObj);

	// Object: Function UACommon.UACommonStatics.GetOACAID
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x95dfbc0
	// Params: [ Num(1) Size(0x10) ]
	static struct FString GetOACAID();

	// Object: Function UACommon.UACommonStatics.GetNowMillisecondParty
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x541c238
	// Params: [ Num(1) Size(0x4) ]
	static int32_t GetNowMillisecondParty();

	// Object: Function UACommon.UACommonStatics.GetNetworkConnectionType
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x541cae0
	// Params: [ Num(1) Size(0x4) ]
	static int32_t GetNetworkConnectionType();

	// Object: Function UACommon.UACommonStatics.GetNearClippingPlane
	// Flags: [Final|Native|Static|Private]
	// Offset: 0x54150c4
	// Params: [ Num(1) Size(0x4) ]
	static float GetNearClippingPlane();

	// Object: Function UACommon.UACommonStatics.GetMotionEventRotation
	// Flags: [Final|Native|Static|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x5419050
	// Params: [ Num(2) Size(0x54) ]
	static struct FVector GetMotionEventRotation(struct FMotionEvent InMotionEvent);

	// Object: Function UACommon.UACommonStatics.GetModuleTable
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x946cf48
	// Params: [ Num(1) Size(0x10) ]
	static struct TArray<struct FModuleConfTableRow> GetModuleTable();

	// Object: Function UACommon.UACommonStatics.GetMeleeWeaponCarvingMaterialIndex
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x541d17c
	// Params: [ Num(3) Size(0x14) ]
	static int32_t GetMeleeWeaponCarvingMaterialIndex(struct UObject* WorldContextObject, int64_t itemID);

	// Object: Function UACommon.UACommonStatics.GetMediaServerErrorCode
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x541b86c
	// Params: [ Num(1) Size(0x4) ]
	static int32_t GetMediaServerErrorCode();

	// Object: Function UACommon.UACommonStatics.GetMapNameByWorld
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x979e3e0
	// Params: [ Num(2) Size(0x18) ]
	static struct FString GetMapNameByWorld(struct UWorld* InWorld);

	// Object: Function UACommon.UACommonStatics.GetLocalSizeByPaintGeo
	// Flags: [Final|Native|Static|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x541a3b0
	// Params: [ Num(2) Size(0x10) ]
	static struct FVector2D GetLocalSizeByPaintGeo(struct UUserWidget* UserWidget);

	// Object: Function UACommon.UACommonStatics.GetLaunchURL
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x93e9280
	// Params: [ Num(1) Size(0x10) ]
	static struct FString GetLaunchURL();

	// Object: Function UACommon.UACommonStatics.GetItemSkinConfigMap
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x950393c
	// Params: [ Num(1) Size(0x50) ]
	static struct TMap<int32_t, int32_t> GetItemSkinConfigMap();

	// Object: Function UACommon.UACommonStatics.GetIsUserWidget
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x541b720
	// Params: [ Num(2) Size(0x9) ]
	static bool GetIsUserWidget(struct UWidget* Widget);

	// Object: Function UACommon.UACommonStatics.GetIPString
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x541ccc8
	// Params: [ Num(1) Size(0x10) ]
	static struct FString GetIPString();

	// Object: Function UACommon.UACommonStatics.GetIPAddress
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x94653c0
	// Params: [ Num(1) Size(0x10) ]
	static struct FString GetIPAddress();

	// Object: Function UACommon.UACommonStatics.GetInventoryItem
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x541d348
	// Params: [ Num(2) Size(0x18) ]
	static struct TArray<struct FString> GetInventoryItem(struct UObject* InWorldContextObject);

	// Object: Function UACommon.UACommonStatics.GetInventoryById
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x541d5e0
	// Params: [ Num(3) Size(0x18) ]
	static struct ASGInventory* GetInventoryById(struct UObject* WorldContextObject, int64_t itemID);

	// Object: Function UACommon.UACommonStatics.GetImageResolution
	// Flags: [Final|Native|Static|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x541e560
	// Params: [ Num(2) Size(0x18) ]
	static struct FVector2D GetImageResolution(struct FString ImagePath);

	// Object: Function UACommon.UACommonStatics.GetGpuName
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x54167d8
	// Params: [ Num(1) Size(0x10) ]
	static struct FString GetGpuName();

	// Object: Function UACommon.UACommonStatics.GetGPUFamily
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x86750d0
	// Params: [ Num(1) Size(0x10) ]
	static struct FString GetGPUFamily();

	// Object: Function UACommon.UACommonStatics.GetGLVersion
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x930b2d8
	// Params: [ Num(1) Size(0x10) ]
	static struct FString GetGLVersion();

	// Object: Function UACommon.UACommonStatics.GetFrameSize
	// Flags: [Final|Native|Static|Private|BlueprintCallable]
	// Offset: 0x5415430
	// Params: [ Num(1) Size(0x4) ]
	static int32_t GetFrameSize();

	// Object: Function UACommon.UACommonStatics.GetFileSize
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x5417080
	// Params: [ Num(2) Size(0x18) ]
	static int64_t GetFileSize(struct FString FilePath);

	// Object: Function UACommon.UACommonStatics.GetFDateTimeTick
	// Flags: [Final|Native|Static|Private|HasDefaults|BlueprintCallable]
	// Offset: 0x5415540
	// Params: [ Num(2) Size(0x10) ]
	static int64_t GetFDateTimeTick(struct FDateTime Time);

	// Object: Function UACommon.UACommonStatics.GetFDateTime
	// Flags: [Final|Native|Static|Private|HasDefaults|BlueprintCallable]
	// Offset: 0x5415498
	// Params: [ Num(2) Size(0x10) ]
	static struct FDateTime GetFDateTime(int64_t Tick);

	// Object: Function UACommon.UACommonStatics.GetEnableCPPVM
	// Flags: [Final|Native|Static|Private|BlueprintCallable]
	// Offset: 0x54155e4
	// Params: [ Num(1) Size(0x1) ]
	static bool GetEnableCPPVM();

	// Object: Function UACommon.UACommonStatics.GetDynamicLogLevel
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x541b518
	// Params: [ Num(1) Size(0x4) ]
	static int32_t GetDynamicLogLevel();

	// Object: Function UACommon.UACommonStatics.GetDownloadRemotePSOProgress
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x54158e4
	// Params: [ Num(1) Size(0x4) ]
	static float GetDownloadRemotePSOProgress();

	// Object: Function UACommon.UACommonStatics.GetDownloadRemotePSOErrorFilePath
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x5415b00
	// Params: [ Num(1) Size(0x10) ]
	static struct FString GetDownloadRemotePSOErrorFilePath();

	// Object: Function UACommon.UACommonStatics.GetDownloadLocalPSOPath
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x5415918
	// Params: [ Num(1) Size(0x10) ]
	static struct FString GetDownloadLocalPSOPath();

	// Object: Function UACommon.UACommonStatics.GetDeviceModel
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x541673c
	// Params: [ Num(1) Size(0x10) ]
	static struct FString GetDeviceModel();

	// Object: Function UACommon.UACommonStatics.GetDeviceMake
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x8b62890
	// Params: [ Num(1) Size(0x10) ]
	static struct FString GetDeviceMake();

	// Object: Function UACommon.UACommonStatics.GetDeviceInfo
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x541cf58
	// Params: [ Num(2) Size(0x20) ]
	static struct FString GetDeviceInfo(struct FString strDeviceName);

	// Object: Function UACommon.UACommonStatics.GetDeviceId
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x95ea044
	// Params: [ Num(1) Size(0x10) ]
	static struct FString GetDeviceId();

	// Object: Function UACommon.UACommonStatics.GetDeviceBuildNumber
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x541d0e0
	// Params: [ Num(1) Size(0x10) ]
	static struct FString GetDeviceBuildNumber();

	// Object: Function UACommon.UACommonStatics.GetDeviceBrand
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x930b420
	// Params: [ Num(1) Size(0x10) ]
	static struct FString GetDeviceBrand();

	// Object: Function UACommon.UACommonStatics.GetDeskDefaultFreeSpace
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x541cd64
	// Params: [ Num(4) Size(0x21) ]
	static bool GetDeskDefaultFreeSpace(struct FString InPath, int64_t& TotalnumberOfBytes, int64_t& NumberOfFreeBytes);

	// Object: Function UACommon.UACommonStatics.GetDefaultDeviceProfileName
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x541cebc
	// Params: [ Num(1) Size(0x10) ]
	static struct FString GetDefaultDeviceProfileName();

	// Object: Function UACommon.UACommonStatics.GetCurrentPreRotationType
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x93a7e50
	// Params: [ Num(1) Size(0x4) ]
	static int32_t GetCurrentPreRotationType();

	// Object: Function UACommon.UACommonStatics.GetCulture
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x541c328
	// Params: [ Num(1) Size(0x10) ]
	static struct FString GetCulture();

	// Object: Function UACommon.UACommonStatics.GetCPUBrand
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x930b37c
	// Params: [ Num(1) Size(0x10) ]
	static struct FString GetCPUBrand();

	// Object: Function UACommon.UACommonStatics.GetCosUrl
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x5417570
	// Params: [ Num(1) Size(0x10) ]
	static struct FString GetCosUrl();

	// Object: Function UACommon.UACommonStatics.GetCosUploadURL
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x541ec30
	// Params: [ Num(1) Size(0x10) ]
	static struct FString GetCosUploadURL();

	// Object: Function UACommon.UACommonStatics.GetContainerConfSizes
	// Flags: [Final|Native|Static|Private]
	// Offset: 0x54150f8
	// Params: [ Num(2) Size(0x18) ]
	static struct FString GetContainerConfSizes(struct FName itemID);

	// Object: Function UACommon.UACommonStatics.GetClassDefaultObject
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x541bb00
	// Params: [ Num(2) Size(0x10) ]
	static struct UObject* GetClassDefaultObject(struct UObject* InClass);

	// Object: Function UACommon.UACommonStatics.GetChipset
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x5416874
	// Params: [ Num(1) Size(0x10) ]
	static struct FString GetChipset();

	// Object: Function UACommon.UACommonStatics.GetCharacter
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x7509368
	// Params: [ Num(2) Size(0x10) ]
	static struct ASGCharacter* GetCharacter(struct UObject* InWorldContextObject);

	// Object: Function UACommon.UACommonStatics.GetCarrier
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x541cc2c
	// Params: [ Num(1) Size(0x10) ]
	static struct FString GetCarrier();

	// Object: Function UACommon.UACommonStatics.GetCaptureTextureFromActor
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x54172dc
	// Params: [ Num(2) Size(0x10) ]
	static struct UObject* GetCaptureTextureFromActor(struct ASGCharacter* Character);

	// Object: Function UACommon.UACommonStatics.GetCaptureMatFromActor
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x5417234
	// Params: [ Num(2) Size(0x10) ]
	static struct UObject* GetCaptureMatFromActor(struct ASGCharacter* Character);

	// Object: Function UACommon.UACommonStatics.GetBulletItemIdsByAssembleTag
	// Flags: [Final|Native|Static|Private]
	// Offset: 0x90a6fb8
	// Params: [ Num(2) Size(0x20) ]
	static struct TArray<uint32_t> GetBulletItemIdsByAssembleTag(struct FString assembleTag);

	// Object: Function UACommon.UACommonStatics.GetBuildConfiguration
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x8e97734
	// Params: [ Num(1) Size(0x10) ]
	static struct FString GetBuildConfiguration();

	// Object: Function UACommon.UACommonStatics.GetAvatarTypes
	// Flags: [Final|Native|Static|Private|HasOutParms]
	// Offset: 0x5414efc
	// Params: [ Num(3) Size(0x68) ]
	static struct TMap<int32_t, ESGAvatarType> GetAvatarTypes(struct TArray<int32_t>& Avatars, bool IncludeAdditional);

	// Object: Function UACommon.UACommonStatics.GetAvatarTypeByInventoryId
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x85b4034
	// Params: [ Num(3) Size(0x11) ]
	static ESGAvatarType GetAvatarTypeByInventoryId(struct UWorld* World, int64_t InventoryId);

	// Object: Function UACommon.UACommonStatics.GetAvatarToSuitConfigMap
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x9536b4c
	// Params: [ Num(1) Size(0x50) ]
	static struct TMap<int32_t, int32_t> GetAvatarToSuitConfigMap();

	// Object: Function UACommon.UACommonStatics.GetAvatarItemConfigMap
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x756499c
	// Params: [ Num(1) Size(0x50) ]
	static struct TMap<int32_t, struct FAvatarItemCfgTableRow> GetAvatarItemConfigMap();

	// Object: Function UACommon.UACommonStatics.GetAudioEventDurationByReference
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x541955c
	// Params: [ Num(2) Size(0xC) ]
	static float GetAudioEventDurationByReference(struct UAkAudioEvent* EventReference);

	// Object: Function UACommon.UACommonStatics.GetAudioEventDurationByName
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x5419458
	// Params: [ Num(2) Size(0x14) ]
	static float GetAudioEventDurationByName(struct FString EventName);

	// Object: Function UACommon.UACommonStatics.GetAsyncPSOForLoading
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x90bd940
	// Params: [ Num(1) Size(0x1) ]
	static bool GetAsyncPSOForLoading();

	// Object: Function UACommon.UACommonStatics.GetApplyRemotePSOFilePath
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x5415a64
	// Params: [ Num(1) Size(0x10) ]
	static struct FString GetApplyRemotePSOFilePath();

	// Object: Function UACommon.UACommonStatics.GetAnimationByName
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x86c4384
	// Params: [ Num(3) Size(0x18) ]
	static struct UWidgetAnimation* GetAnimationByName(struct UUserWidget* UserWidget, struct FName AnimationName);

	// Object: Function UACommon.UACommonStatics.GetAndroidRotation
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x541ef14
	// Params: [ Num(1) Size(0x4) ]
	static int32_t GetAndroidRotation();

	// Object: Function UACommon.UACommonStatics.GetAndroidBuildVersion
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x541cbf8
	// Params: [ Num(1) Size(0x4) ]
	static int32_t GetAndroidBuildVersion();

	// Object: Function UACommon.UACommonStatics.GetAbsoluteSize
	// Flags: [Final|Native|Static|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x9347718
	// Params: [ Num(2) Size(0x40) ]
	static struct FVector2D GetAbsoluteSize(struct FGeometry Geometry);

	// Object: Function UACommon.UACommonStatics.GetAbsolutePosition
	// Flags: [Final|Native|Static|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x8bc1ef8
	// Params: [ Num(2) Size(0x40) ]
	static struct FVector2D GetAbsolutePosition(struct FGeometry Geometry);

	// Object: Function UACommon.UACommonStatics.Get
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x92ebfac
	// Params: [ Num(1) Size(0x8) ]
	static struct UUACommonStatics* Get();

	// Object: Function UACommon.UACommonStatics.ForceInputBoxTop
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x979a510
	// Params: [ Num(1) Size(0x4) ]
	static void ForceInputBoxTop(int32_t InValue);

	// Object: Function UACommon.UACommonStatics.FixKeyboardNavigationBarHeight
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x541b8a0
	// Params: [ Num(1) Size(0x4) ]
	static void FixKeyboardNavigationBarHeight(int32_t InValue);

	// Object: Function UACommon.UACommonStatics.FixAndroidWindowSize
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x95067c0
	// Params: [ Num(1) Size(0x4) ]
	static void FixAndroidWindowSize(int32_t InValue);

	// Object: Function UACommon.UACommonStatics.FindFileInPaks
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x541ed4c
	// Params: [ Num(3) Size(0x24) ]
	static int32_t FindFileInPaks(struct FString PackageName, struct FString& OutPakFileName);

	// Object: Function UACommon.UACommonStatics.FindBadgeByAttachPos
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x541d6c4
	// Params: [ Num(3) Size(0x10) ]
	static uint32_t FindBadgeByAttachPos(struct ASGCharacter* Character, ESGBadgeAttach attachPos);

	// Object: Function UACommon.UACommonStatics.Encrypt
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x5417920
	// Params: [ Num(3) Size(0x30) ]
	static struct FString Encrypt(struct FString InputString, struct FString Key);

	// Object: Function UACommon.UACommonStatics.Encode
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x541760c
	// Params: [ Num(2) Size(0x20) ]
	static struct FString Encode(struct FString InputString);

	// Object: Function UACommon.UACommonStatics.EnableSensor
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x541ef48
	// Params: [ Num(2) Size(0x5) ]
	static bool EnableSensor(int32_t DelayType);

	// Object: Function UACommon.UACommonStatics.EnablePrecompilePSOOpt
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x90bd98c
	// Params: [ Num(1) Size(0x1) ]
	static bool EnablePrecompilePSOOpt();

	// Object: Function UACommon.UACommonStatics.EnablePreCompilePartPSO
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x95bc3a4
	// Params: [ Num(2) Size(0x2) ]
	static bool EnablePreCompilePartPSO(bool bApply);

	// Object: Function UACommon.UACommonStatics.EnableGamefileMaskToShaderPipelineCache
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x90568e8
	// Params: [ Num(3) Size(0xA) ]
	static void EnableGamefileMaskToShaderPipelineCache(int64_t InMask, bool bIsEnable, bool bForceSet);

	// Object: Function UACommon.UACommonStatics.EnableCompileUsageMask
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x541c99c
	// Params: [ Num(1) Size(0x4) ]
	static void EnableCompileUsageMask(int32_t InEnable);

	// Object: Function UACommon.UACommonStatics.EnableCompileMaskToShaderPipelineCache
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x541c5d8
	// Params: [ Num(3) Size(0xA) ]
	static void EnableCompileMaskToShaderPipelineCache(int64_t InCompileask, bool bIsEnable, bool bForceSet);

	// Object: Function UACommon.UACommonStatics.EnableAllowSkipDrawCommand
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x54157d4
	// Params: [ Num(1) Size(0x1) ]
	static void EnableAllowSkipDrawCommand(bool bEnabled);

	// Object: Function UACommon.UACommonStatics.EmptyOverrideMaterials
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x8cdefc8
	// Params: [ Num(1) Size(0x8) ]
	static void EmptyOverrideMaterials(struct UMeshComponent* MeshComponent);

	// Object: Function UACommon.UACommonStatics.DumpFName
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x541a388
	// Params: [ Num(0) Size(0x0) ]
	static void DumpFName();

	// Object: Function UACommon.UACommonStatics.DownloadRemotePSOToLocal
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x5415b9c
	// Params: [ Num(3) Size(0x21) ]
	static bool DownloadRemotePSOToLocal(struct FString LocalFilePath, struct FString InCosPath);

	// Object: Function UACommon.UACommonStatics.DisableSensor
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x90c1444
	// Params: [ Num(0) Size(0x0) ]
	static void DisableSensor();

	// Object: Function UACommon.UACommonStatics.DisablePSO
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x91a063c
	// Params: [ Num(1) Size(0x1) ]
	static bool DisablePSO();

	// Object: Function UACommon.UACommonStatics.DeleteFilesFromBugLoadFolder
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x941f29c
	// Params: [ Num(0) Size(0x0) ]
	void DeleteFilesFromBugLoadFolder();

	// Object: Function UACommon.UACommonStatics.DeleteCookie
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x5416580
	// Params: [ Num(0) Size(0x0) ]
	static void DeleteCookie();

	// Object: Function UACommon.UACommonStatics.Decrypt
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x541774c
	// Params: [ Num(3) Size(0x30) ]
	static struct FString Decrypt(struct FString InputString, struct FString Key);

	// Object: Function UACommon.UACommonStatics.DebugPrintAllUi
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x5417220
	// Params: [ Num(0) Size(0x0) ]
	static void DebugPrintAllUi();

	// Object: Function UACommon.UACommonStatics.DeactivateParticleSystem
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x5415d3c
	// Params: [ Num(1) Size(0x8) ]
	static void DeactivateParticleSystem(struct UParticleSystemComponent* ParticleSystemComponent);

	// Object: Function UACommon.UACommonStatics.CreateCurrentWordWidgetInstance
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x541be14
	// Params: [ Num(4) Size(0x20) ]
	static struct UUserWidget* CreateCurrentWordWidgetInstance(struct UWorld* World, struct UUserWidget* UserWidgetClass, struct FName WidgetName);

	// Object: Function UACommon.UACommonStatics.ContainsCameraCut
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x84a4ee8
	// Params: [ Num(2) Size(0x9) ]
	static bool ContainsCameraCut(struct ALevelSequenceActor* LevelSequenceActor);

	// Object: Function UACommon.UACommonStatics.ContainsAvatar
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x942c998
	// Params: [ Num(3) Size(0xA) ]
	static bool ContainsAvatar(int64_t AvatarItemID, ESGAvatarType AvatarType);

	// Object: Function UACommon.UACommonStatics.CloseShaderCodeLibrary
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x541c4e8
	// Params: [ Num(1) Size(0x10) ]
	static void CloseShaderCodeLibrary(struct FString InName);

	// Object: Function UACommon.UACommonStatics.ClosePipelineFileCache
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x541c5c4
	// Params: [ Num(0) Size(0x0) ]
	static void ClosePipelineFileCache();

	// Object: Function UACommon.UACommonStatics.ClearPreloadAvatars
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x541dcb8
	// Params: [ Num(1) Size(0x8) ]
	static void ClearPreloadAvatars(struct ASGCharacter* Character);

	// Object: Function UACommon.UACommonStatics.CleanAllFontCache
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x5418d68
	// Params: [ Num(0) Size(0x0) ]
	static void CleanAllFontCache();

	// Object: Function UACommon.UACommonStatics.CheckRayQueryShaderLibExists
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x95e7038
	// Params: [ Num(1) Size(0x1) ]
	static bool CheckRayQueryShaderLibExists();

	// Object: Function UACommon.UACommonStatics.CheckMedicine_DestroyAndEnergy
	// Flags: [Final|Native|Static|Private|HasOutParms]
	// Offset: 0x54151d8
	// Params: [ Num(3) Size(0x18) ]
	static void CheckMedicine_DestroyAndEnergy(bool& destroy, bool& energy, struct TArray<struct FName> item_ids);

	// Object: Function UACommon.UACommonStatics.CheckIconValid
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x541a2dc
	// Params: [ Num(2) Size(0x9) ]
	static bool CheckIconValid(struct UObject* ResourceObject);

	// Object: Function UACommon.UACommonStatics.CheckEquipmentHiddenConflict
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x95b5820
	// Params: [ Num(4) Size(0x30) ]
	static void CheckEquipmentHiddenConflict(struct UObject* WorldContextObject, int64_t itemID, struct TArray<int64_t>& AvatarItemIDs, struct TArray<int64_t>& ConflictItemIdList);

	// Object: Function UACommon.UACommonStatics.CaptureScreen
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x5419e80
	// Params: [ Num(1) Size(0x10) ]
	static void CaptureScreen(struct FString Path);

	// Object: Function UACommon.UACommonStatics.CancelDragDrop
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x541b2d8
	// Params: [ Num(0) Size(0x0) ]
	static void CancelDragDrop();

	// Object: Function UACommon.UACommonStatics.CanAttachBadge
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x541a580
	// Params: [ Num(4) Size(0x12) ]
	static bool CanAttachBadge(struct ACharacter* Character, int64_t itemID, ESGBadgeAttach attachPos);

	// Object: Function UACommon.UACommonStatics.CacuContainerSizeByItemId
	// Flags: [Final|Native|Static|Private|BlueprintCallable]
	// Offset: 0x5415388
	// Params: [ Num(2) Size(0xC) ]
	static int32_t CacuContainerSizeByItemId(struct FName itemID);

	// Object: Function UACommon.UACommonStatics.BuildSGPlayerItemTree
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x8be50bc
	// Params: [ Num(4) Size(0x29) ]
	static void BuildSGPlayerItemTree(struct TArray<struct USGPlayerItemInfoBase*> InSGPlayerItems, struct TArray<struct USGPlayerItemInfoBase*>& InResultList, int64_t InCharacterParentId, bool IgnoreMagazineAmmunition);

	// Object: Function UACommon.UACommonStatics.BindPSOCompilingFailedDelegate
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x92aa0e4
	// Params: [ Num(0) Size(0x0) ]
	static void BindPSOCompilingFailedDelegate();

	// Object: Function UACommon.UACommonStatics.AsyncGetNetworkConnectionType
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x6fa5550
	// Params: [ Num(1) Size(0x4) ]
	static int32_t AsyncGetNetworkConnectionType();

	// Object: Function UACommon.UACommonStatics.ApplyRayQueryCVarSettingsBySectionName
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x95221bc
	// Params: [ Num(1) Size(0x10) ]
	static void ApplyRayQueryCVarSettingsBySectionName(struct FString SectionName);

	// Object: Function UACommon.UACommonStatics.AddServiceToTable
	// Flags: [Final|Native|Static|Public|HasOutParms]
	// Offset: 0x541856c
	// Params: [ Num(1) Size(0x58) ]
	static void AddServiceToTable(const struct FServiceConfTableRow& serviceConf);

	// Object: Function UACommon.UACommonStatics.AddPanelToTable
	// Flags: [Final|Native|Static|Public|HasOutParms]
	// Offset: 0x5418a5c
	// Params: [ Num(1) Size(0x58) ]
	static void AddPanelToTable(struct FPanelConfTableRow& panelConf);

	// Object: Function UACommon.UACommonStatics.AddModuleToTable
	// Flags: [Final|Native|Static|Public|HasOutParms]
	// Offset: 0x5418224
	// Params: [ Num(1) Size(0x38) ]
	static void AddModuleToTable(const struct FModuleConfTableRow& moduleConf);

	// Object: Function UACommon.UACommonStatics.AddBlackSensorDevice
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x95b5418
	// Params: [ Num(1) Size(0x10) ]
	static void AddBlackSensorDevice(struct TArray<struct FString> Devices);

	// Object: Function UACommon.UACommonStatics.ActivateParticleSystem
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x95a040c
	// Params: [ Num(2) Size(0x9) ]
	static void ActivateParticleSystem(struct UParticleSystemComponent* ParticleSystemComponent, bool bReset);

	// Object: Function UACommon.UACommonStatics.AcquireWifiManagerLock
	// Flags: [Final|Native|Static|Private]
	// Offset: 0x91ac408
	// Params: [ Num(1) Size(0x1) ]
	static bool AcquireWifiManagerLock();
};

// Object: Class UACommon.UADataTableManager
// Size: 0x28 (Inherited: 0x28)
struct UUADataTableManager : USGConfigUtil
{
	DEFINE_UE_CLASS_HELPERS(UUADataTableManager, "UADataTableManager")

	// Object: Function UACommon.UADataTableManager.GetMapDetailTableRowBPProxy
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x54350d8
	// Params: [ Num(2) Size(0x150) ]
	static struct FMapDetailTableRowBPProxy GetMapDetailTableRowBPProxy(struct FMapDetailTableRow MapDetailTableRow);

	// Object: Function UACommon.UADataTableManager.GetLootDropTableRowBPProxy
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x5434bc8
	// Params: [ Num(2) Size(0x138) ]
	static struct FLootDropTableRowBPProxy GetLootDropTableRowBPProxy(struct FLootDropTableRow LootDropTableRow);

	// Object: Function UACommon.UADataTableManager.GetItemConfTableRowBPProxy
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x5434640
	// Params: [ Num(2) Size(0x200) ]
	static struct FItemConfTableRowBPProxy GetItemConfTableRowBPProxy(struct FItemConfTableRow ItemConfTableRow);
};

// Object: Class UACommon.UAFontMeasure
// Size: 0x70 (Inherited: 0x28)
struct UUAFontMeasure : UObject
{
	DEFINE_UE_CLASS_HELPERS(UUAFontMeasure, "UAFontMeasure")

	uint8_t Pad_0x28[0x10]; // 0x28(0x10)
	bool bSingleMode; // 0x38(0x1)
	uint8_t Pad_0x39[0x3]; // 0x39(0x3)
	uint32_t SelectIndex; // 0x3C(0x4)
	struct FString ExtraInfo; // 0x40(0x10)
	uint8_t Pad_0x50[0x20]; // 0x50(0x20)

	// Object: Function UACommon.UAFontMeasure.SubmitBugTask
	// Flags: [Final|Native|Public]
	// Offset: 0x5435594
	// Params: [ Num(2) Size(0x20) ]
	void SubmitBugTask(struct FString Content, struct FString Path);

	// Object: Function UACommon.UAFontMeasure.GetTextJustification
	// Flags: [Final|Native|Public]
	// Offset: 0x543592c
	// Params: [ Num(2) Size(0x9) ]
	uint8_t GetTextJustification(struct UTextLayoutWidget* LayoutWidget);

	// Object: Function UACommon.UAFontMeasure.GetTextAndImageWidgets
	// Flags: [Final|Native|Public|HasOutParms]
	// Offset: 0x54359dc
	// Params: [ Num(4) Size(0x29) ]
	void GetTextAndImageWidgets(struct UWidget* Widget, struct TArray<struct UWidget*>& TextWidgets, struct TArray<struct UWidget*>& ImageWidgets, bool bCliping);

	// Object: Function UACommon.UAFontMeasure.GetCurrentPanel
	// Flags: [Final|Native|Public]
	// Offset: 0x5435c84
	// Params: [ Num(2) Size(0x10) ]
	struct UUserWidget* GetCurrentPanel(struct UUserWidget* RootCanvasPanel);

	// Object: Function UACommon.UAFontMeasure.Get
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x5435d34
	// Params: [ Num(1) Size(0x8) ]
	static struct UUAFontMeasure* Get();

	// Object: Function UACommon.UAFontMeasure.DrawFontMeasure
	// Flags: [Final|Native|Public|HasOutParms]
	// Offset: 0x5435b8c
	// Params: [ Num(2) Size(0x38) ]
	void DrawFontMeasure(struct FPaintContext& Context, struct UWidgetTree* WidgetTree);

	// Object: Function UACommon.UAFontMeasure.DragWidget
	// Flags: [Final|Native|Public|HasOutParms]
	// Offset: 0x543572c
	// Params: [ Num(3) Size(0xB0) ]
	void DragWidget(struct UUserWidget* panel, const struct FGeometry& InGeometry, const struct FPointerEvent& InMouseEvent);
};

// Object: Class UACommon.UAGridScroll
// Size: 0x930 (Inherited: 0x910)
struct UUAGridScroll : UScrollBox
{
	DEFINE_UE_CLASS_HELPERS(UUAGridScroll, "UAGridScroll")

	struct FMulticastInlineDelegate OnContentSizeChange; // 0x910(0x10)
	struct FMulticastInlineDelegate ScrollWidgetAnimationEnd2; // 0x920(0x10)

	// Object: Function UACommon.UAGridScroll.OnScrollWidgetAnimationEnd
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x5435d88
	// Params: [ Num(0) Size(0x0) ]
	void OnScrollWidgetAnimationEnd();
};

// Object: Class UACommon.UAInventoryStatics
// Size: 0x28 (Inherited: 0x28)
struct UUAInventoryStatics : UBlueprintFunctionLibrary
{
	DEFINE_UE_CLASS_HELPERS(UUAInventoryStatics, "UAInventoryStatics")

	// Object: Function UACommon.UAInventoryStatics.UpdateInventorySwitchState
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x5438aa4
	// Params: [ Num(2) Size(0x10) ]
	static void UpdateInventorySwitchState(struct ASGInventory* Inventory, struct USGPlayerItemInfoBase* TempItemInfoBase);

	// Object: Function UACommon.UAInventoryStatics.UpdateInventorySkin
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x5438b78
	// Params: [ Num(2) Size(0xC) ]
	static void UpdateInventorySkin(struct ASGInventory* Inventory, int32_t SkinID);

	// Object: Function UACommon.UAInventoryStatics.UpdateInventoriesFromData
	// Flags: [Final|Native|Static|Public|HasOutParms]
	// Offset: 0x93d265c
	// Params: [ Num(10) Size(0xD0) ]
	static void UpdateInventoriesFromData(struct ACharacter* Character, bool needUpdateAnimation, struct TArray<struct USGPlayerItemInfoBase*>& InventoryArray, struct TMap<uint64_t, int32_t>& NeedChangeSkinInventoryMap, struct TArray<uint64_t>& NeedAddInventoryArray, struct TArray<int64_t>& NeedAddInventoryParentActorArray, struct TArray<uint64_t>& NeedRemoveInventoryArray, struct TArray<uint64_t>& MoveInventoryArray, struct TArray<uint64_t>& MoveInventoryParentActorArray, struct TArray<uint64_t>& MoveInventoryInContainerIndexArray);

	// Object: Function UACommon.UAInventoryStatics.UpdateInventories
	// Flags: [Final|Native|Static|Public|HasOutParms]
	// Offset: 0x5438c50
	// Params: [ Num(2) Size(0x18) ]
	static void UpdateInventories(struct TArray<struct USGPlayerItemInfoBase*>& InventoryArray, struct ACharacter* Character);

	// Object: Function UACommon.UAInventoryStatics.UpdateCharacterAnimation
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x5438a0c
	// Params: [ Num(1) Size(0x8) ]
	static void UpdateCharacterAnimation(struct ASGCharacter* PreviewCharacter);

	// Object: Function UACommon.UAInventoryStatics.TransformCachedInvToTargetInv
	// Flags: [Final|Native|Static|Public|HasOutParms]
	// Offset: 0x5438df4
	// Params: [ Num(6) Size(0x30) ]
	static struct ASGInventory* TransformCachedInvToTargetInv(struct USGPlayerItemInfoBase* item, struct ACharacter* Character, struct ASGAssembleBase* AssembleObj, int32_t& TaskId, struct ASGInventory* CachedInv);

	// Object: Function UACommon.UAInventoryStatics.RemoveSpecificInventory
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x5436e80
	// Params: [ Num(2) Size(0x10) ]
	static void RemoveSpecificInventory(struct ASGInventory* TargetInventory, struct ACharacter* Character);

	// Object: Function UACommon.UAInventoryStatics.ParsePendantItemInfo
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x54360b0
	// Params: [ Num(1) Size(0x8) ]
	static void ParsePendantItemInfo(struct USGPlayerItemInfoBase* PlayerItemInfoBase);

	// Object: Function UACommon.UAInventoryStatics.OnInventoryLoadCompleteNotify
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x5436148
	// Params: [ Num(1) Size(0x4) ]
	static void OnInventoryLoadCompleteNotify(int32_t InTaskID);

	// Object: Function UACommon.UAInventoryStatics.GiveWeaponToPlayerByWeaponActor
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x5437344
	// Params: [ Num(2) Size(0x10) ]
	static void GiveWeaponToPlayerByWeaponActor(struct ASGInventory* Weapon, struct ACharacter* Character);

	// Object: Function UACommon.UAInventoryStatics.GiveItem
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x5437d2c
	// Params: [ Num(6) Size(0x30) ]
	static struct TArray<struct ASGInventory*> GiveItem(struct ACharacter* Character, int64_t itemID, int32_t Num, ESGGiveInventoryByClassType GiveInventoryReason, int32_t SkinID);

	// Object: Function UACommon.UAInventoryStatics.GiveAndGetItem
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x5437b84
	// Params: [ Num(4) Size(0x20) ]
	static struct ASGInventory* GiveAndGetItem(struct ACharacter* Character, int64_t itemID, int32_t Num);

	// Object: Function UACommon.UAInventoryStatics.GetWeaponSocketsAndAmmoCapacity
	// Flags: [Final|Native|Static|Public|HasOutParms]
	// Offset: 0x5437f08
	// Params: [ Num(3) Size(0x1C) ]
	static uint32_t GetWeaponSocketsAndAmmoCapacity(uint64_t itemID, struct TArray<struct FWeaponSocket>& InSockets);

	// Object: Function UACommon.UAInventoryStatics.GetUseSound
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x54361e0
	// Params: [ Num(2) Size(0x18) ]
	static struct FString GetUseSound(struct ASGInventory* Inventory);

	// Object: Function UACommon.UAInventoryStatics.GetTotalValueOfCharacter
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x5436b48
	// Params: [ Num(2) Size(0xC) ]
	static uint32_t GetTotalValueOfCharacter(struct ACharacter* Character);

	// Object: Function UACommon.UAInventoryStatics.GetTestPlayerItemInfoBase
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x54376a0
	// Params: [ Num(3) Size(0x18) ]
	static struct USGPlayerItemInfoBase* GetTestPlayerItemInfoBase(uint64_t ParentID, uint64_t ChildID);

	// Object: Function UACommon.UAInventoryStatics.GetSupportAdapterIDList
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x54382cc
	// Params: [ Num(3) Size(0x28) ]
	static struct TArray<int64_t> GetSupportAdapterIDList(int64_t itemID, struct TArray<int64_t>& OutAdapterIDList);

	// Object: Function UACommon.UAInventoryStatics.GetSecondMainWeaponValue
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x5436950
	// Params: [ Num(2) Size(0xC) ]
	static uint32_t GetSecondMainWeaponValue(struct ACharacter* Character);

	// Object: Function UACommon.UAInventoryStatics.GetLoseValueOfCharacter
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x5436aa0
	// Params: [ Num(2) Size(0xC) ]
	static uint32_t GetLoseValueOfCharacter(struct ACharacter* Character);

	// Object: Function UACommon.UAInventoryStatics.GetItemInstIdModded
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x54390c8
	// Params: [ Num(3) Size(0x10) ]
	static int32_t GetItemInstIdModded(struct ASGInventory* SGInventory, int32_t Mod);

	// Object: Function UACommon.UAInventoryStatics.GetItemInfoGidMap
	// Flags: [Final|Native|Static|Public|HasOutParms]
	// Offset: 0x54388d4
	// Params: [ Num(2) Size(0x60) ]
	static void GetItemInfoGidMap(struct TArray<struct USGPlayerItemInfoBase*>& InventoryArray, struct TMap<uint64_t, struct USGPlayerItemInfoBase*>& ItemInfoGidMap);

	// Object: Function UACommon.UAInventoryStatics.GetInventoryValue
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x5437830
	// Params: [ Num(2) Size(0xC) ]
	static int32_t GetInventoryValue(struct ASGInventory* Inventory);

	// Object: Function UACommon.UAInventoryStatics.GetInventoryTypeTotalCount
	// Flags: [Final|Native|Static|Public|HasOutParms]
	// Offset: 0x543755c
	// Params: [ Num(4) Size(0x24) ]
	static int32_t GetInventoryTypeTotalCount(struct ACharacter* Character, int32_t typeId, const struct TArray<EAttachPosition>& PositionArr);

	// Object: Function UACommon.UAInventoryStatics.GetInventoryTradeValuePropagate
	// Flags: [Final|Native|Static|Public|HasOutParms]
	// Offset: 0x5437178
	// Params: [ Num(5) Size(0xF) ]
	static void GetInventoryTradeValuePropagate(struct ASGInventory* Inventory, int32_t& OutValue, bool bIncludeSelf, bool bIncludeChild, bool bIncludeBullet);

	// Object: Function UACommon.UAInventoryStatics.GetInventoryTotalCount
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x5437418
	// Params: [ Num(4) Size(0x24) ]
	static int32_t GetInventoryTotalCount(struct ACharacter* Character, int64_t InventoryId, const struct TArray<EAttachPosition>& PositionArr);

	// Object: Function UACommon.UAInventoryStatics.GetInventoryStackMaxFromCommonItemTable
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x54362c0
	// Params: [ Num(2) Size(0xC) ]
	static int32_t GetInventoryStackMaxFromCommonItemTable(uint64_t item_id);

	// Object: Function UACommon.UAInventoryStatics.GetInventorysFromWeaponAssembleTable
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x5437a64
	// Params: [ Num(3) Size(0x20) ]
	static struct TArray<struct ASGInventory*> GetInventorysFromWeaponAssembleTable(struct UObject* WorldContextObject, uint64_t QueryID);

	// Object: Function UACommon.UAInventoryStatics.GetInventoryPackageIdArray
	// Flags: [Final|Native|Public|HasOutParms]
	// Offset: 0x5435ea4
	// Params: [ Num(1) Size(0x10) ]
	void GetInventoryPackageIdArray(struct TArray<int32_t>& OutArray);

	// Object: Function UACommon.UAInventoryStatics.GetInventoryPackageByPackageID
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x5435f64
	// Params: [ Num(2) Size(0x48) ]
	static struct FSGInventoryPackageTable GetInventoryPackageByPackageID(int32_t InventoryPackageID);

	// Object: Function UACommon.UAInventoryStatics.GetInventoryNameFromCommonItemTable
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x9849780
	// Params: [ Num(2) Size(0x18) ]
	static struct FString GetInventoryNameFromCommonItemTable(uint64_t itemID);

	// Object: Function UACommon.UAInventoryStatics.GetInventoryGridSize
	// Flags: [Final|Native|Static|Public|HasDefaults]
	// Offset: 0x5437784
	// Params: [ Num(2) Size(0x10) ]
	static struct FVector2D GetInventoryGridSize(uint64_t itemID);

	// Object: Function UACommon.UAInventoryStatics.GetInventoryDynamicValue
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x5436368
	// Params: [ Num(2) Size(0xC) ]
	static uint32_t GetInventoryDynamicValue(struct ASGInventory* Inv);

	// Object: Function UACommon.UAInventoryStatics.GetInventoryCountPropagate
	// Flags: [Final|Native|Static|Public|HasOutParms]
	// Offset: 0x5436ffc
	// Params: [ Num(4) Size(0xE) ]
	static void GetInventoryCountPropagate(struct ASGInventory* Inventory, int32_t& OutValue, bool bIncludeSelf, bool bIncludeChild);

	// Object: Function UACommon.UAInventoryStatics.GetInventoryCached
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x5438d4c
	// Params: [ Num(2) Size(0x10) ]
	static struct ASGInventory* GetInventoryCached(struct ASGAssembleBase* AssembleObj);

	// Object: Function UACommon.UAInventoryStatics.GetInventoriesByGameplayTagList
	// Flags: [Final|Native|Static|Public|HasOutParms]
	// Offset: 0x54380ac
	// Params: [ Num(2) Size(0x20) ]
	static struct TArray<uint64_t> GetInventoriesByGameplayTagList(struct TArray<struct FString>& TagList);

	// Object: Function UACommon.UAInventoryStatics.GetInventoriesByGameplayTagContainer
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x54381a0
	// Params: [ Num(2) Size(0x30) ]
	static struct TArray<uint64_t> GetInventoriesByGameplayTagContainer(struct FGameplayTagContainer TagContainer);

	// Object: Function UACommon.UAInventoryStatics.GetInventoriesByAttachPosition
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x5438404
	// Params: [ Num(2) Size(0x18) ]
	static struct TArray<uint64_t> GetInventoriesByAttachPosition(EAttachPosition position);

	// Object: Function UACommon.UAInventoryStatics.GetHelmetSoundMaxDistanceInfluenceFactor
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x5438634
	// Params: [ Num(2) Size(0xC) ]
	static float GetHelmetSoundMaxDistanceInfluenceFactor(uint64_t itemID);

	// Object: Function UACommon.UAInventoryStatics.GetHelmetSoundLevelInfluenceFactor
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x54386dc
	// Params: [ Num(2) Size(0xC) ]
	static float GetHelmetSoundLevelInfluenceFactor(uint64_t itemID);

	// Object: Function UACommon.UAInventoryStatics.GetHelmetSoundIndicatorMaxDistanceInfluenceFactor
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x54384e4
	// Params: [ Num(2) Size(0xC) ]
	static float GetHelmetSoundIndicatorMaxDistanceInfluenceFactor(uint64_t itemID);

	// Object: Function UACommon.UAInventoryStatics.GetHelmetSoundIndicatorLevelInfluence
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x543858c
	// Params: [ Num(2) Size(0xC) ]
	static float GetHelmetSoundIndicatorLevelInfluence(uint64_t itemID);

	// Object: Function UACommon.UAInventoryStatics.GetHelmetSoundBlockLevelFromDetailConfTable
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x5438784
	// Params: [ Num(2) Size(0xC) ]
	static int32_t GetHelmetSoundBlockLevelFromDetailConfTable(uint64_t itemID);

	// Object: Function UACommon.UAInventoryStatics.GetFullWeaponValueTrade
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x54378d8
	// Params: [ Num(3) Size(0x14) ]
	static int32_t GetFullWeaponValueTrade(struct UObject* WorldContextObject, uint64_t WeaponAssembleID);

	// Object: Function UACommon.UAInventoryStatics.GetFullWeaponValue
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x54379bc
	// Params: [ Num(2) Size(0xC) ]
	static int32_t GetFullWeaponValue(uint64_t WeaponAssembleID);

	// Object: Function UACommon.UAInventoryStatics.GetFirstMainWeaponValue
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x54369f8
	// Params: [ Num(2) Size(0xC) ]
	static uint32_t GetFirstMainWeaponValue(struct ACharacter* Character);

	// Object: Function UACommon.UAInventoryStatics.GetEquipAttachPositionById
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x5438004
	// Params: [ Num(2) Size(0x9) ]
	static EAttachPosition GetEquipAttachPositionById(uint64_t itemID);

	// Object: Function UACommon.UAInventoryStatics.GetDrugValue
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x54366b0
	// Params: [ Num(2) Size(0xC) ]
	static uint32_t GetDrugValue(struct ACharacter* Character);

	// Object: Function UACommon.UAInventoryStatics.GetCurWeaponValue
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x54368a8
	// Params: [ Num(2) Size(0xC) ]
	static uint32_t GetCurWeaponValue(struct ACharacter* Character);

	// Object: Function UACommon.UAInventoryStatics.GetCurInventoryInfo
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x8f4f96c
	// Params: [ Num(2) Size(0x18) ]
	static struct TArray<int64_t> GetCurInventoryInfo(struct ACharacter* Character);

	// Object: Function UACommon.UAInventoryStatics.GetCaseValue
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x5436608
	// Params: [ Num(2) Size(0xC) ]
	static uint32_t GetCaseValue(struct ACharacter* Character);

	// Object: Function UACommon.UAInventoryStatics.GetCachedInventory
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x5438fa4
	// Params: [ Num(4) Size(0x20) ]
	static struct ASGInventory* GetCachedInventory(struct USGPlayerItemInfoBase* item, struct ACharacter* Character, struct ASGAssembleBase* AssembleObj);

	// Object: Function UACommon.UAInventoryStatics.GetBulletValue
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x5436758
	// Params: [ Num(2) Size(0xC) ]
	static uint32_t GetBulletValue(struct ACharacter* Character);

	// Object: Function UACommon.UAInventoryStatics.GetBossTokenItemIDFromGroupID
	// Flags: [Final|Native|Static|Public|HasOutParms]
	// Offset: 0x5436bf0
	// Params: [ Num(2) Size(0xC) ]
	static uint32_t GetBossTokenItemIDFromGroupID(struct FName& GroupIDName);

	// Object: Function UACommon.UAInventoryStatics.GetAttachedChildInventoryByGunShieldTag
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x839b320
	// Params: [ Num(2) Size(0x10) ]
	static struct ASGInventory* GetAttachedChildInventoryByGunShieldTag(struct ASGInventory* Inventory);

	// Object: Function UACommon.UAInventoryStatics.GetAssistWeaponValue
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x5436800
	// Params: [ Num(2) Size(0xC) ]
	static uint32_t GetAssistWeaponValue(struct ACharacter* Character);

	// Object: Function UACommon.UAInventoryStatics.GetAssembleInventoryValue
	// Flags: [Final|Native|Static|Public|HasOutParms]
	// Offset: 0x5436ca4
	// Params: [ Num(3) Size(0xD) ]
	static void GetAssembleInventoryValue(struct ASGInventory* Inventory, int32_t& OutValue, bool bIncludeChild);

	// Object: Function UACommon.UAInventoryStatics.GetAssembleInventoryRootItemID
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x5436dd8
	// Params: [ Num(2) Size(0x10) ]
	static uint64_t GetAssembleInventoryRootItemID(uint64_t AssembleInvID);

	// Object: Function UACommon.UAInventoryStatics.GetArmorValue
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x5436560
	// Params: [ Num(2) Size(0xC) ]
	static uint32_t GetArmorValue(struct ACharacter* Character);

	// Object: Function UACommon.UAInventoryStatics.GetArmorLevelFromDetailConfTable
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x543882c
	// Params: [ Num(2) Size(0xC) ]
	static int32_t GetArmorLevelFromDetailConfTable(uint64_t itemID);

	// Object: Function UACommon.UAInventoryStatics.GetAllSafeBoxValue
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x5436410
	// Params: [ Num(2) Size(0xC) ]
	static uint32_t GetAllSafeBoxValue(struct ACharacter* Character);

	// Object: Function UACommon.UAInventoryStatics.GetAllMainWeaponIdsFromInventoryPackage
	// Flags: [Final|Native|Public|HasOutParms]
	// Offset: 0x5435da4
	// Params: [ Num(2) Size(0x18) ]
	void GetAllMainWeaponIdsFromInventoryPackage(struct APlayerController* PC, struct TArray<uint64_t>& OutItemIds);

	// Object: Function UACommon.UAInventoryStatics.GetAllEquipmentValue
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x54364b8
	// Params: [ Num(2) Size(0xC) ]
	static uint32_t GetAllEquipmentValue(struct ACharacter* Character);

	// Object: Function UACommon.UAInventoryStatics.GetAllEquipArmorValue
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x5436f54
	// Params: [ Num(2) Size(0xC) ]
	static int32_t GetAllEquipArmorValue(struct ACharacter* Character);

	// Object: Function UACommon.UAInventoryStatics.FindItemIDByInventoryClass
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x54391b0
	// Params: [ Num(2) Size(0x10) ]
	static uint64_t FindItemIDByInventoryClass(struct ASGInventory* SGInventory);

	// Object: Function UACommon.UAInventoryStatics.FindItemIDByDataTable
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x8bb4460
	// Params: [ Num(2) Size(0x10) ]
	static uint64_t FindItemIDByDataTable(struct ASGInventory* SGInventory);
};

// Object: Class UACommon.UAListView
// Size: 0x430 (Inherited: 0x3C8)
struct UUAListView : UListView
{
	DEFINE_UE_CLASS_HELPERS(UUAListView, "UAListView")

	uint8_t Pad_0x3C8[0x8]; // 0x3C8(0x8)
	struct TArray<struct UAkAudioEvent*> ClickAudioEvents; // 0x3D0(0x10)
	bool bScrollable; // 0x3E0(0x1)
	ESlateVisibility ScrollBarVisibility; // 0x3E1(0x1)
	uint8_t Pad_0x3E2[0x2]; // 0x3E2(0x2)
	float AnimationDelay; // 0x3E4(0x4)
	uint8_t Pad_0x3E8[0x48]; // 0x3E8(0x48)

	// Object: Function UACommon.UAListView.SetPlayAnimationInitIndex
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x54392b4
	// Params: [ Num(1) Size(0x4) ]
	void SetPlayAnimationInitIndex(int32_t Index);

	// Object: Function UACommon.UAListView.PlayDelayAnimation
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x543935c
	// Params: [ Num(0) Size(0x0) ]
	void PlayDelayAnimation();

	// Object: Function UACommon.UAListView.OnListEntryInitialized
	// Flags: [Final|Native|Private]
	// Offset: 0x902ef98
	// Params: [ Num(2) Size(0x10) ]
	void OnListEntryInitialized(struct UObject* item, struct UUserWidget* Widget);
};

// Object: Class UACommon.UALocalizationStatic
// Size: 0x188 (Inherited: 0x28)
struct UUALocalizationStatic : UObject
{
	DEFINE_UE_CLASS_HELPERS(UUALocalizationStatic, "UALocalizationStatic")

	uint8_t Pad_0x28[0x160]; // 0x28(0x160)

	// Object: Function UACommon.UALocalizationStatic.SetLocalizationDebugDisplayName
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x543c53c
	// Params: [ Num(1) Size(0x10) ]
	void SetLocalizationDebugDisplayName(struct FString InDisplayName);

	// Object: Function UACommon.UALocalizationStatic.SetLocalizationCulture
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x543c5f0
	// Params: [ Num(1) Size(0x10) ]
	void SetLocalizationCulture(struct FString& culture);

	// Object: Function UACommon.UALocalizationStatic.SetCountryCode
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x946f758
	// Params: [ Num(1) Size(0x10) ]
	void SetCountryCode(struct FString InCountryCode);

	// Object: Function UACommon.UALocalizationStatic.RemoveUnusedDisplayString
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x543c094
	// Params: [ Num(0) Size(0x0) ]
	void RemoveUnusedDisplayString();

	// Object: Function UACommon.UALocalizationStatic.ReloadTextLocalization
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x8beb19c
	// Params: [ Num(0) Size(0x0) ]
	void ReloadTextLocalization();

	// Object: Function UACommon.UALocalizationStatic.PreviewLocalizationCulture
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x543c3e0
	// Params: [ Num(1) Size(0x10) ]
	void PreviewLocalizationCulture(struct FString& culture);

	// Object: Function UACommon.UALocalizationStatic.PatchTextLocalization
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x543bec4
	// Params: [ Num(2) Size(0x14) ]
	int32_t PatchTextLocalization(struct FString InPatchFile);

	// Object: Function UACommon.UALocalizationStatic.ParseJsonDataMerage
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x543bd10
	// Params: [ Num(2) Size(0x20) ]
	void ParseJsonDataMerage(struct FString JsonString, struct FString TextpatchJsonString);

	// Object: Function UACommon.UALocalizationStatic.ParseJsonData
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x543be10
	// Params: [ Num(1) Size(0x10) ]
	void ParseJsonData(struct FString JsonString);

	// Object: Function UACommon.UALocalizationStatic.LoadLocalization
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x94e21e4
	// Params: [ Num(0) Size(0x0) ]
	void LoadLocalization();

	// Object: Function UACommon.UALocalizationStatic.IsOverseasPackage
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x625faa8
	// Params: [ Num(1) Size(0x1) ]
	static bool IsOverseasPackage();

	// Object: Function UACommon.UALocalizationStatic.IsOverseasIndiaPackage
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x8d2ca4c
	// Params: [ Num(1) Size(0x1) ]
	static bool IsOverseasIndiaPackage();

	// Object: Function UACommon.UALocalizationStatic.HasValue
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x543c280
	// Params: [ Num(2) Size(0x11) ]
	bool HasValue(struct FString Key);

	// Object: Function UACommon.UALocalizationStatic.GetValue
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x543c15c
	// Params: [ Num(2) Size(0x28) ]
	struct FText GetValue(struct FString Key);

	// Object: Function UACommon.UALocalizationStatic.GetLocalizationDebugDisplayName
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x543c4a0
	// Params: [ Num(1) Size(0x10) ]
	struct FString GetLocalizationDebugDisplayName();

	// Object: Function UACommon.UALocalizationStatic.GetLocalizationCulture
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x543c344
	// Params: [ Num(1) Size(0x10) ]
	struct FString GetLocalizationCulture();

	// Object: Function UACommon.UALocalizationStatic.GetImageLocalization
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x543c0a8
	// Params: [ Num(2) Size(0x9) ]
	bool GetImageLocalization(struct UImage* Image);

	// Object: Function UACommon.UALocalizationStatic.GetDisplayString
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x543bbd0
	// Params: [ Num(3) Size(0x30) ]
	struct FString GetDisplayString(struct FString InNamespace, struct FString InKey);

	// Object: Function UACommon.UALocalizationStatic.CopySqliteLocResToExternal
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x543bf84
	// Params: [ Num(3) Size(0x21) ]
	bool CopySqliteLocResToExternal(struct FString InternalSqlitePath, struct FString ExternalSqlitePath);

	// Object: Function UACommon.UALocalizationStatic.CanShowLanguagSetting
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x8f61d94
	// Params: [ Num(1) Size(0x1) ]
	static bool CanShowLanguagSetting();
};

// Object: Class UACommon.UAOverlay
// Size: 0x158 (Inherited: 0x158)
struct UUAOverlay : UOverlay
{
	DEFINE_UE_CLASS_HELPERS(UUAOverlay, "UAOverlay")
};

// Object: Class UACommon.UAOverlaySlot
// Size: 0x80 (Inherited: 0x80)
struct UUAOverlaySlot : UOverlaySlot
{
	DEFINE_UE_CLASS_HELPERS(UUAOverlaySlot, "UAOverlaySlot")

	int32_t ZOrder; // 0x7C(0x4)
};

// Object: Class UACommon.UAPanelProfiler
// Size: 0x28 (Inherited: 0x28)
struct UUAPanelProfiler : UObject
{
	DEFINE_UE_CLASS_HELPERS(UUAPanelProfiler, "UAPanelProfiler")

	// Object: Function UACommon.UAPanelProfiler.ResetProfileDepth
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x8e3bec4
	// Params: [ Num(0) Size(0x0) ]
	static void ResetProfileDepth();

	// Object: Function UACommon.UAPanelProfiler.PrintProfileInfo
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x8720768
	// Params: [ Num(1) Size(0x10) ]
	static void PrintProfileInfo(struct FString panelName);

	// Object: Function UACommon.UAPanelProfiler.IsTestOrShipping
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x9046944
	// Params: [ Num(1) Size(0x1) ]
	static bool IsTestOrShipping();

	// Object: Function UACommon.UAPanelProfiler.EndProfiler
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x84a37d0
	// Params: [ Num(4) Size(0x28) ]
	static int32_t EndProfiler(struct FString panelName, struct FString phaseName, int32_t animStandardTime);

	// Object: Function UACommon.UAPanelProfiler.BeginProfiler
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x8226218
	// Params: [ Num(2) Size(0x20) ]
	static void BeginProfiler(struct FString panelName, struct FString phaseName);
};

// Object: Class UACommon.UAPhotoTakerCommon
// Size: 0x28 (Inherited: 0x28)
struct UUAPhotoTakerCommon : UObject
{
	DEFINE_UE_CLASS_HELPERS(UUAPhotoTakerCommon, "UAPhotoTakerCommon")

	// Object: Function UACommon.UAPhotoTakerCommon.TakePhoto
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x5445ee4
	// Params: [ Num(1) Size(0x10) ]
	static struct FString TakePhoto();

	// Object: Function UACommon.UAPhotoTakerCommon.ReleaseLoadedPhotos
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x5445dec
	// Params: [ Num(0) Size(0x0) ]
	static void ReleaseLoadedPhotos();

	// Object: Function UACommon.UAPhotoTakerCommon.GetPhotoSavePath
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x5445f80
	// Params: [ Num(1) Size(0x10) ]
	static struct FString GetPhotoSavePath();

	// Object: Function UACommon.UAPhotoTakerCommon.AsyncLoadPhoto
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x5445e00
	// Params: [ Num(2) Size(0x18) ]
	static void AsyncLoadPhoto(struct FString InPhotoName, struct UImage* Image);
};

// Object: Class UACommon.UARedPointWidget
// Size: 0x2A8 (Inherited: 0x290)
struct UUARedPointWidget : UUserWidget
{
	DEFINE_UE_CLASS_HELPERS(UUARedPointWidget, "UARedPointWidget")

	struct FString RedPointType; // 0x290(0x10)
	bool AutoRegist; // 0x2A0(0x1)
	uint8_t Pad_0x2A1[0x7]; // 0x2A1(0x7)
};

// Object: Class UACommon.UATileView
// Size: 0x408 (Inherited: 0x3F8)
struct UUATileView : UTileView
{
	DEFINE_UE_CLASS_HELPERS(UUATileView, "UATileView")

	struct TArray<struct UAkAudioEvent*> ClickAudioEvents; // 0x3F8(0x10)
};

// Object: Class UACommon.UATreeView
// Size: 0x430 (Inherited: 0x420)
struct UUATreeView : UTreeView
{
	DEFINE_UE_CLASS_HELPERS(UUATreeView, "UATreeView")

	struct TArray<struct UAkAudioEvent*> ClickAudioEvents; // 0x420(0x10)
};

// Object: Class UACommon.UAUMGDebugHelper
// Size: 0x28 (Inherited: 0x28)
struct UUAUMGDebugHelper : UObject
{
	DEFINE_UE_CLASS_HELPERS(UUAUMGDebugHelper, "UAUMGDebugHelper")

	// Object: Function UACommon.UAUMGDebugHelper.GetPanelWidgetTree
	// Flags: [Final|Native|Public]
	// Offset: 0x5446118
	// Params: [ Num(2) Size(0x18) ]
	struct FString GetPanelWidgetTree(struct UUserWidget* panel);

	// Object: Function UACommon.UAUMGDebugHelper.GetInBattleCurrentPanel
	// Flags: [Final|Native|Public|HasOutParms]
	// Offset: 0x5446054
	// Params: [ Num(2) Size(0x18) ]
	struct UUserWidget* GetInBattleCurrentPanel(struct TArray<struct FString>& ValidPanels);

	// Object: Function UACommon.UAUMGDebugHelper.GetCurrentPanel
	// Flags: [Final|Native|Public|HasOutParms]
	// Offset: 0x5446200
	// Params: [ Num(3) Size(0x20) ]
	struct UUserWidget* GetCurrentPanel(struct UUserWidget* RootCanvasPanel, struct TArray<struct FString>& FilterPanels);

	// Object: Function UACommon.UAUMGDebugHelper.Get
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x5446304
	// Params: [ Num(1) Size(0x8) ]
	static struct UUAUMGDebugHelper* Get();
};

// Object: Class UACommon.UMGHelperLibrary
// Size: 0x28 (Inherited: 0x28)
struct UUMGHelperLibrary : UBlueprintFunctionLibrary
{
	DEFINE_UE_CLASS_HELPERS(UUMGHelperLibrary, "UMGHelperLibrary")

	// Object: Function UACommon.UMGHelperLibrary.FindWidgetByName
	// Flags: [Final|BlueprintAuthorityOnly|Native|Static|Public]
	// Offset: 0x5446464
	// Params: [ Num(3) Size(0x18) ]
	static struct UWidget* FindWidgetByName(struct UUserWidget* InUMGWidget, struct FName Name);

	// Object: Function UACommon.UMGHelperLibrary.CreateUserWidgetWithName
	// Flags: [Final|BlueprintAuthorityOnly|Native|Static|Public]
	// Offset: 0x5446340
	// Params: [ Num(4) Size(0x20) ]
	static struct UUserWidget* CreateUserWidgetWithName(struct APlayerController* OwnerPC, struct UUserWidget* UserWidgetClass, struct FName WidgetName);
};

// Object: Class UACommon.VideoManager
// Size: 0x28 (Inherited: 0x28)
struct UVideoManager : UObject
{
	DEFINE_UE_CLASS_HELPERS(UVideoManager, "VideoManager")

	// Object: Function UACommon.VideoManager.StopRecorder
	// Flags: [Final|Native|Public]
	// Offset: 0x5446718
	// Params: [ Num(0) Size(0x0) ]
	void StopRecorder();

	// Object: Function UACommon.VideoManager.StartRecorder
	// Flags: [Final|Native|Public]
	// Offset: 0x544672c
	// Params: [ Num(1) Size(0x1) ]
	bool StartRecorder();

	// Object: Function UACommon.VideoManager.RecordNotify
	// Flags: [Final|Native|Public]
	// Offset: 0x5446550
	// Params: [ Num(3) Size(0x18) ]
	void RecordNotify(int32_t EventId, int32_t ErrorCode, struct FString Info);

	// Object: Function UACommon.VideoManager.IsRecording
	// Flags: [Final|Native|Public]
	// Offset: 0x54466e0
	// Params: [ Num(1) Size(0x1) ]
	bool IsRecording();

	// Object: Function UACommon.VideoManager.Init
	// Flags: [Final|Native|Public]
	// Offset: 0x5446764
	// Params: [ Num(0) Size(0x0) ]
	void Init();

	// Object: Function UACommon.VideoManager.Get
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x5446778
	// Params: [ Num(1) Size(0x8) ]
	static struct UVideoManager* Get();
};

} // namespace SDK
