#pragma once

#include "../CoreUObject_classes.hpp"
#include "Engine.hpp"
#include "GPUserInterfaceCore.hpp"
#include "GameCore.hpp"
#include "GameplayTags.hpp"
#include "HudFramework.hpp"
#include "UITween.hpp"
#include "UMG.hpp"

namespace SDK
{

// Package: GPGameHud
// Enums: 9
// Structs: 11
// Classes: 34

struct AActor;
struct AGameStateBase;
struct APlayerController;
struct APlayerState;
enum class EGPInputModeType : uint8_t;
enum class EHudLayer : uint8_t;
enum class ETouchIndex : uint8_t;
struct FGeometry;
struct FSwitchableHudConfigRow;
struct UCanvasPanel;
struct UDataTable;
struct UDataTableSystemManagerBase;
struct UHudManager;
struct ULuaUIBaseView;
struct UMobilePlayerInput;
struct UPanelWidget;
struct UTexture2D;
struct UUserWidget;
struct UWidget;
struct UWidgetAnimation;
struct FMutexRegisterTableRow;
struct FMutexQueueItem;
struct FHudOnShowPassInitParam;
struct FBaseUIView_Params;
struct FUIDebugItem;
struct FAsyncUILoadID;
struct FLayerContainerRow;
struct FLayerItem;
struct FAnimationNameSelector;
struct FParkourRankDataItem;
struct FBaseUIViewArray;
struct UBaseUIView;
struct UHUDComponent;
struct ABaseHUD;
struct UBaseMutexUIView;
struct UBaseUIController;
struct UBatchUIController;
struct UBatchUIView;
struct UCommonHUDView;
struct UGPBaseHudController;
struct UGPBaseHudView;
struct UGPCommonHUDScreenMutex;
struct UHUDMutexHDEventTipsDataTableManager;
struct UHUDMutexMiniMapBottomDataTableManager;
struct UGPGameHudDelegates;
struct UGPMobileCustomLayoutBPLibrary;
struct UGPParkourHudView;
struct UGPParkourHudViewController;
struct UGPParkourRankListItem;
struct UGPParkourRankView;
struct UGPParkourRankViewController;
struct UGPSwitchableBaseHudController;
struct UHUDClipmap;
struct UHUDLoadSetting;
struct UHUDMutexManager;
struct UHUDStateManager;
struct ULuaHudView;
struct ULuaUIHudBaseView;
struct ULuaUIHudOldView;
struct UMobileDraggableButton;
struct UMobileGamePad;
struct UMobileGamePadView;
struct URootUIView;
struct UTemplateHudController;
struct UTemplateHudView;

// Object: Enum GPGameHud.EMutexChangeReason
enum class EMutexChangeReason : uint8_t
{
	OccupyIdle = 0,
	ReleaseActive = 1,
	ReleaseOverTime = 2,
	Preempt = 3,
	ForceRefresh = 4,
	EMutexChangeReason_MAX = 5
};

// Object: Enum GPGameHud.EWidgetPriorityType
enum class EWidgetPriorityType : uint8_t
{
	A = 0,
	B = 1,
	C = 2,
	D = 3,
	E = 4,
	F = 5,
	G = 6,
	H = 7,
	I = 8,
	J = 9,
	Never = 10,
	EWidgetPriorityType_MAX = 11
};

// Object: Enum GPGameHud.GameHUDSate
enum class EGameHUDSate : uint16_t
{
	GHS_None = 0,
	GHS_Dead = 1,
	GHS_Firing = 2,
	GHS_Aiming = 3,
	GHS_Settlement = 4,
	GHS_OpenMap = 5,
	GHS_Dying = 6,
	GHS_PrepareTime = 7,
	GHS_UseItem = 8,
	GHS_VaultAndClimb = 9,
	GHS_Operating3DUI = 10,
	GHS_CutScene = 11,
	GHS_DriveVehicle = 12,
	GHS_RideVehicle = 13,
	GHS_UseHeavyMachineGun = 14,
	GHS_Reloading = 15,
	GHS_DisposalBomb = 16,
	GHS_RescueSomeOne = 17,
	GHS_Burden = 18,
	GHS_OB = 19,
	GHS_ForbidFire = 20,
	GHS_ClimbLadder = 21,
	GHS_SwitchAds = 22,
	GHS_SwitchPot = 23,
	GHS_UseTelescope = 24,
	GHS_Escaping = 25,
	GHS_Monitor = 26,
	GHS_PVEQuestPanelOnly = 27,
	GHS_VehicleLeanOut = 28,
	GHS_SOLQuestOperation = 29,
	GHS_SeamlessGameplay = 30,
	GHS_Redeploy = 31,
	GHS_FPPView = 32,
	GHS_InteractOnly = 33,
	GHS_Prone = 34,
	GHS_COUNTDOWN = 35,
	GHS_SOLEventSilent = 36,
	GHS_BeingRescue = 37,
	GHS_ScoreTips = 38,
	GHS_BreakthroughGeneralStrongBroadcast = 39,
	GHS_KillerMark = 40,
	GHS_RoulettePanel = 41,
	GHS_SOLEvacuation = 42,
	GHS_WeaponChange = 43,
	GHS_VehicleForbidShoot = 44,
	GHS_VehicleMode_Common = 45,
	GHS_VehicleMode_Skill = 46,
	GHS_RedeployView = 47,
	GHS_Assassinate = 48,
	GHS_PlayingSubTitle = 49,
	GHS_SOLEvacuationPOI = 50,
	GHS_PCControlMode = 51,
	GHS_UseDetectorSkill = 52,
	GHS_BattleScoreDetails = 53,
	GHS_UseZipline = 54,
	GHS_Breakthrough_Transitioning = 55,
	GHS_LiveSpectate = 56,
	GHS_VehicleForbidXPPChange = 57,
	GHS_BreakthroughTopTimeCountDown = 58,
	GHS_VehicleWeapon = 59,
	GHS_RaidRailRide = 60,
	GHS_Tutorial = 61,
	GHS_ObserverMode = 62,
	GHS_StingerMissile = 63,
	GHS_ContractAccess = 64,
	GHS_ObserverModeFreeCamera = 65,
	GHS_BreakthroughPreMatchWaitPlayer = 66,
	GHS_BreakthroughPreMatchChooseArm = 67,
	GHS_BreakthroughPreMatchFirstDeploy = 68,
	GHS_SOLBannerFlyIcon = 69,
	GHS_BulletTips = 70,
	GHS_AmmoAddTips = 71,
	GHS_SOLRadioInfoView = 72,
	GHS_SOLCaptureView = 73,
	GHS_SOLExitPayment = 74,
	GHS_BreakthroughSpecialStrongBroadcast = 75,
	GHS_BreakthroughSectorActivedBroadcast = 76,
	GHS_BreakthroughSectorAnchorCapView = 77,
	GHS_SafeAreaView = 78,
	GHS_BlueprintWeapon = 79,
	GHS_BlueprintWeaponTips = 80,
	GHS_SOLEventProgress = 81,
	GHS_HackPCInfoView = 82,
	GHS_SOLContract = 83,
	GHS_SOLContractProgress = 84,
	GHS_SOLContractVote = 85,
	GHS_SOLPOITips = 86,
	GHS_UseBow = 87,
	GHS_BowCanCharge = 88,
	GHS_DyingView = 89,
	GHS_MiniMapDangerous = 90,
	GHS_CountDownViewNew = 91,
	GHS_SeamlessEntry = 92,
	GHS_SeamlessEntry_Tutorial = 93,
	GHS_BreakthroughSupportReleaseView = 94,
	GHS_SOLInterceptView = 95,
	GHS_BlueprintWeaponEstimatedTime = 96,
	GHS_RealOpenBag = 97,
	GHS_RealOpenLoot = 98,
	GHS_RealLootSearching = 99,
	GHS_CodedLockView = 100,
	GHS_SOLKillerInfoCardView = 101,
	GHS_ChatWindow = 102,
	GHS_WeaponInspect = 103,
	GHS_InteractPanel = 104,
	GHS_InteractRescue = 105,
	GHS_HudHitFeedBack = 106,
	GHS_EscPanel = 107,
	GHS_MarkingRoulette = 108,
	GHS_ContractInManningArea = 109,
	GHS_VehicleWeaponDriver = 110,
	GHS_DeathDamageInfoPanel = 111,
	GHS_Redeploy_Rising = 112,
	GHS_UseElectricBow = 113,
	GHS_LiveReplay = 114,
	GHS_OBReplay = 115,
	GHS_RedeploySelectVehicle = 116,
	GHS_RedeployHeroInfo = 117,
	GHS_RedeployArmSelectedView = 118,
	GHS_UnlockingView = 119,
	GHS_SlienceMove = 120,
	GHS_CommonCountDownView = 121,
	GHS_TeamInfoDetail = 122,
	GHS_CommonRouletteFixCamera = 123,
	GHS_BreakthroughWeakBroadcast = 124,
	GHS_SupportHudMode = 125,
	GHS_BreakthroughCharacterTransitionGuidanceEnd = 126,
	GHS_WholeRedeploy = 128,
	GHS_RedeployVehicleStore = 129,
	GHS_ScouterView = 130,
	GHS_ScouterTipsView = 131,
	GHS_GuidedCruiseMissile = 133,
	GHS_HDPerformance = 134,
	GHS_CommercializationRoulette = 135,
	GHS_AmmoRoulette = 136,
	GHS_MPRankRoulette = 137,
	GHS_WeaponScopeRoulette = 138,
	GHS_MedicRoulette = 139,
	GHS_SafeHouseRange = 140,
	GHS_SafeHouseRangeInLane = 141,
	GHS_FirstDeployCountDown = 142,
	GHS_RedeploySelectArmItemHud = 143,
	GHS_FiringBleeding = 145,
	GHS_ElectricArrowBleeding = 146,
	GHS_SkillProcessBar = 147,
	GHS_BreakthroughIconStrongBroadcast = 148,
	GHS_SnoicDirView = 149,
	GHS_UASActionProgressBar = 150,
	GHS_OpenParachute = 151,
	GHS_FirefightingAction = 152,
	GHS_CommonCancelBtn = 154,
	GHS_FlashDroneScreenEffect = 156,
	GHS_OpenMoss = 157,
	GHS_RedeployWeaponStoreHud = 158,
	GHS_RedeployWeaponPresetHud = 159,
	GHS_ActiveAdrenaline = 160,
	GHS_UseThrowBlocking = 161,
	GHS_RedeployVehiclePartStore = 162,
	GHS_SkillInspect = 163,
	GHS_EmoteAction = 164,
	GHS_RedeployCommanderView = 165,
	GHS_PatrolVehicle = 166,
	GHS_SwimUnderWater = 167,
	GHS_SwimOxygenBar = 168,
	GHS_SwimDiveButton = 169,
	GHS_BreakthroughOrderItemBroadcast = 170,
	GHS_InGameEquipmentRental = 171,
	GHS_ArenaCountDownView = 172,
	GHS_ArenaStatusTipsBanner = 173,
	GHS_TaskList = 174,
	GHS_InteractCarryBody = 175,
	GHS_UseSkill_BionicSpy = 179,
	GHS_Controllable_HideHUD = 180,
	GHS_Controllable_BionicBird = 181,
	GHS_Controllable_BionicSpy = 182,
	GHS_ControllableDrone = 190,
	GHS_BattleFieldCommanderSkillView = 191,
	GHS_MPRankView = 192,
	GHS_JailBreak = 193,
	GHS_FingerprintView = 194,
	GHS_HackPCOperationMain = 195,
	GHS_CollectionRoom = 196,
	GHS_Rope = 197,
	GHS_TacticalConquestEvolutionReviveDeployView = 198,
	GHS_RecycleFortification = 199,
	GHS_ButterRescue = 200,
	GHS_BreakthroughHardPiontCapView = 201,
	GHS_RealTimeVehicleStore = 202,
	GHS_PreviewRoom = 203,
	GHS_BraveGameConvey = 204,
	GHS_AntiVehicleAssistAim = 205,
	GHS_DragRescue = 206,
	GHS_WeaponTacticalEquip = 207,
	GHS_CollectionRoomOpenBag = 208,
	GHS_DeadReplay = 251,
	GHS_GuideDisableInput = 252,
	GHS_TutorialHideAllHUD = 253,
	GHS_LoadingHideAllHUD = 254,
	GHS_GlobalHideAllHUD = 255,
	GHS_MAX = 256
};

// Object: Enum GPGameHud.EHUDType
enum class EHUDType : uint8_t
{
	DefaultHUD = 0,
	StandaloneHUD = 1,
	AutonomousHUD = 2,
	EHUDType_MAX = 3
};

// Object: Enum GPGameHud.EHUDCreateType
enum class EHUDCreateType : uint8_t
{
	OnDemand = 0,
	OnDemandButPreload = 8,
	OnDemandButPreloadAndShow = 12,
	Auto = 16,
	AutoAndBlockGameFlow = 18,
	AutoAndShow = 20,
	AutoAndShowAndBlockGameFlow = 22,
	EHUDCreateType_MAX = 23
};

// Object: Enum GPGameHud.VisibleChannel
enum class EVisibleChannel : uint8_t
{
	VisibleChannel_0 = 0,
	VisibleChannel_1 = 1,
	VisibleChannel_2 = 2,
	VisibleChannel_3 = 3,
	VisibleChannel_4 = 4,
	VisibleChannel_5 = 5,
	VisibleChannel_6 = 6,
	VisibleChannel_7 = 7,
	VisibleChannel_MAX = 8
};

// Object: Enum GPGameHud.LayerZorder
enum class ELayerZorder : uint8_t
{
	Zorder_None = 0,
	Zorder_ScreenEffect = 1,
	Zorder_Mark = 30,
	Zorder_Hint = 60,
	Zorder_Feedback = 90,
	Zorder_Common = 120,
	Zorder_Touch = 150,
	Zorder_Popup = 180,
	Zorder_LargePopup = 210,
	Zorder_MAX = 211
};

// Object: Enum GPGameHud.EUIViewUpdateFrequency
enum class EUIViewUpdateFrequency : uint8_t
{
	EveryFrame = 0,
	HighFrequency = 1,
	MidFrequency = 2,
	LowFrequency = 3,
	Freeze = 4,
	VeryHighFrequency = 5,
	EUIViewUpdateFrequency_MAX = 6
};

// Object: Enum GPGameHud.SelectedImgState
enum class ESelectedImgState : uint8_t
{
	SelectedImgState_Zero = 0,
	SelectedImgState_One = 1,
	SelectedImgState_Reduce = 2,
	SelectedImgState_MAX = 3
};

// Object: ScriptStruct GPGameHud.MutexRegisterTableRow
// Size: 0x20 (Inherited: 0x10)
struct FMutexRegisterTableRow : FDescRowBase
{
	struct FName WidgetName; // 0x10(0x8)
	EWidgetPriorityType PriorityType; // 0x18(0x1)
	uint8_t bPreemptSamePriority : 1; // 0x19(0x1), Mask(0x1)
	uint8_t BitPad_0x19_1 : 7; // 0x19(0x1)
	uint8_t bRecoverAfterPreempted : 1; // 0x1A(0x1), Mask(0x1)
	uint8_t BitPad_0x1A_1 : 7; // 0x1A(0x1)
	uint8_t Pad_0x1B[0x1]; // 0x1B(0x1)
	float OccupyTimeLimit; // 0x1C(0x4)
};

// Object: ScriptStruct GPGameHud.MutexQueueItem
// Size: 0x30 (Inherited: 0x0)
struct FMutexQueueItem
{
	struct FMutexRegisterTableRow InfoRow; // 0x0(0x20)
	struct UUserWidget* WidgetInstance; // 0x20(0x8)
	float OccupyTimeCount; // 0x28(0x4)
	float WaitingTimeCount; // 0x2C(0x4)
};

// Object: ScriptStruct GPGameHud.HudOnShowPassInitParam
// Size: 0x18 (Inherited: 0x0)
struct FHudOnShowPassInitParam
{
	uint8_t Uint8Value1; // 0x0(0x1)
	uint8_t Pad_0x1[0x7]; // 0x1(0x7)
	uint64_t Uint64Value1; // 0x8(0x8)
	uint64_t Uint64Value2; // 0x10(0x8)
};

// Object: ScriptStruct GPGameHud.BaseUIView_Params
// Size: 0x8 (Inherited: 0x0)
struct FBaseUIView_Params
{
	struct UBaseUIView* View; // 0x0(0x8)
};

// Object: ScriptStruct GPGameHud.UIDebugItem
// Size: 0x20 (Inherited: 0x0)
struct FUIDebugItem
{
	struct UBaseUIView* BaseUIView; // 0x0(0x8)
	struct FString UIName; // 0x8(0x10)
	uint8_t bShowDebug : 1; // 0x18(0x1), Mask(0x1)
	uint8_t BitPad_0x18_1 : 7; // 0x18(0x1)
	uint8_t Pad_0x19[0x7]; // 0x19(0x7)
};

// Object: ScriptStruct GPGameHud.AsyncUILoadID
// Size: 0x10 (Inherited: 0x0)
struct FAsyncUILoadID
{
	uint8_t Pad_0x0[0x10]; // 0x0(0x10)
};

// Object: ScriptStruct GPGameHud.LayerContainerRow
// Size: 0x40 (Inherited: 0x10)
struct FLayerContainerRow : FDescRowBase
{
	struct FName ViewName; // 0x10(0x8)
	uint8_t Enable : 1; // 0x18(0x1), Mask(0x1)
	uint8_t BitPad_0x18_1 : 7; // 0x18(0x1)
	ELayerZorder ContainerZorder; // 0x19(0x1)
	uint8_t Pad_0x1A[0x2]; // 0x1A(0x2)
	int32_t ZOrderOffset; // 0x1C(0x4)
	uint8_t SafeZoneLayer : 1; // 0x20(0x1), Mask(0x1)
	uint8_t BitPad_0x20_1 : 7; // 0x20(0x1)
	uint8_t Pad_0x21[0x7]; // 0x21(0x7)
	struct TArray<struct FLayerItem> Items; // 0x28(0x10)
	EHUDCreateType HUDCreateType; // 0x38(0x1)
	uint8_t NeverSleep : 1; // 0x39(0x1), Mask(0x1)
	uint8_t BitPad_0x39_1 : 7; // 0x39(0x1)
	uint8_t LowFrequencyInvalidation : 1; // 0x3A(0x1), Mask(0x1)
	uint8_t BitPad_0x3A_1 : 7; // 0x3A(0x1)
	uint8_t bShippingNoCreate : 1; // 0x3B(0x1), Mask(0x1)
	uint8_t BitPad_0x3B_1 : 7; // 0x3B(0x1)
	EUIViewUpdateFrequency UpdateFrequncy; // 0x3C(0x1)
	uint8_t bNeedIgnoreLowMemoryDestroy : 1; // 0x3D(0x1), Mask(0x1)
	uint8_t BitPad_0x3D_1 : 7; // 0x3D(0x1)
	uint8_t Pad_0x3E[0x2]; // 0x3E(0x2)
};

// Object: ScriptStruct GPGameHud.LayerItem
// Size: 0x30 (Inherited: 0x0)
struct FLayerItem
{
	struct FSoftClassPath ControllerSoftClass; // 0x0(0x18)
	struct FSoftClassPath ViewSoftClass; // 0x18(0x18)
};

// Object: ScriptStruct GPGameHud.AnimationNameSelector
// Size: 0x8 (Inherited: 0x0)
struct FAnimationNameSelector
{
	struct FName Name; // 0x0(0x8)
};

// Object: ScriptStruct GPGameHud.ParkourRankDataItem
// Size: 0x28 (Inherited: 0x0)
struct FParkourRankDataItem
{
	int32_t Type; // 0x0(0x4)
	int32_t Rank; // 0x4(0x4)
	uint64_t PlayerUin; // 0x8(0x8)
	struct FString PlayerName; // 0x10(0x10)
	int32_t TimeInMSec; // 0x20(0x4)
	uint8_t Pad_0x24[0x4]; // 0x24(0x4)
};

// Object: ScriptStruct GPGameHud.BaseUIViewArray
// Size: 0x10 (Inherited: 0x0)
struct FBaseUIViewArray
{
	uint8_t Pad_0x0[0x10]; // 0x0(0x10)
};

// Object: Class GPGameHud.BaseUIView
// Size: 0x3F0 (Inherited: 0x2F8)
struct UBaseUIView : UUserWidget
{
	DEFINE_UE_CLASS_HELPERS(UBaseUIView, "BaseUIView")

	uint8_t bIsHud : 1; // 0x2F8(0x1), Mask(0x1)
	uint8_t BitPad_0x2F8_1 : 7; // 0x2F8(0x1)
	uint8_t Pad_0x2F9[0x7]; // 0x2F9(0x7)
	struct AActor* LocalFocusActor; // 0x300(0x8)
	struct UBaseUIController* ViewController; // 0x308(0x8)
	struct TArray<struct FString> UserDefinedPanelNameList; // 0x310(0x10)
	uint8_t ChangeRootVisibleFlag : 1; // 0x320(0x1), Mask(0x1)
	uint8_t BitPad_0x320_1 : 7; // 0x320(0x1)
	uint8_t bTickWhenHidden : 1; // 0x321(0x1), Mask(0x1)
	uint8_t BitPad_0x321_1 : 7; // 0x321(0x1)
	uint8_t bNeverSleep : 1; // 0x322(0x1), Mask(0x1)
	uint8_t BitPad_0x322_1 : 7; // 0x322(0x1)
	uint8_t Pad_0x323[0x1]; // 0x323(0x1)
	float WaitForDestroyTime; // 0x324(0x4)
	struct FName ViewName; // 0x328(0x8)
	EGPInputModeType WantedInputMode; // 0x330(0x1)
	uint8_t Pad_0x331[0xF]; // 0x331(0xF)
	struct UWidget* DynamicRoot; // 0x340(0x8)
	uint8_t Pad_0x348[0x8]; // 0x348(0x8)
	struct TArray<EGameHUDSate> AlwaysShowGameHudState; // 0x350(0x10)
	struct TArray<EGameHUDSate> VisibleGameHudState; // 0x360(0x10)
	struct TArray<EGameHUDSate> InVisibleGameHudState; // 0x370(0x10)
	uint8_t bControlByUiState : 1; // 0x380(0x1), Mask(0x1)
	uint8_t BitPad_0x380_1 : 7; // 0x380(0x1)
	uint8_t Pad_0x381[0x7]; // 0x381(0x7)
	struct UObject* PanelOwner; // 0x388(0x8)
	struct FAnimationNameSelector FadeInAnimationName; // 0x390(0x8)
	struct FAnimationNameSelector FadeOutAnimationName; // 0x398(0x8)
	struct FUIAnimationController AnimationController; // 0x3A0(0x20)
	struct TArray<struct UWidgetAnimation*> AllUMGAnimations; // 0x3C0(0x10)
	uint8_t bInFadeIn : 1; // 0x3D0(0x1), Mask(0x1)
	uint8_t BitPad_0x3D0_1 : 7; // 0x3D0(0x1)
	uint8_t bInFadeOut : 1; // 0x3D1(0x1), Mask(0x1)
	uint8_t BitPad_0x3D1_1 : 7; // 0x3D1(0x1)
	uint8_t Pad_0x3D2[0x6]; // 0x3D2(0x6)
	struct UWidgetAnimation* UMGFadeInAnimation; // 0x3D8(0x8)
	struct UWidgetAnimation* UMGFadeOutAnimation; // 0x3E0(0x8)
	uint8_t bCacheScreenOCStaticMeshOn : 1; // 0x3E8(0x1), Mask(0x1)
	uint8_t BitPad_0x3E8_1 : 7; // 0x3E8(0x1)
	uint8_t Pad_0x3E9[0x7]; // 0x3E9(0x7)

	// Object: Function GPGameHud.BaseUIView.StopFadeOutAnimation
	// Flags: [Native|Public]
	// Offset: 0x90def80
	// Params: [ Num(0) Size(0x0) ]
	void StopFadeOutAnimation();

	// Object: Function GPGameHud.BaseUIView.StopFadeInAnimation
	// Flags: [Native|Public]
	// Offset: 0x90def64
	// Params: [ Num(0) Size(0x0) ]
	void StopFadeInAnimation();

	// Object: Function GPGameHud.BaseUIView.ShowSelf
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x90def50
	// Params: [ Num(0) Size(0x0) ]
	void ShowSelf();

	// Object: Function GPGameHud.BaseUIView.SetDynamicRoot
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x90deeac
	// Params: [ Num(1) Size(0x8) ]
	void SetDynamicRoot(struct UWidget* root);

	// Object: Function GPGameHud.BaseUIView.RemoveScreenOCStaticMesh
	// Flags: [Final|Native|Protected]
	// Offset: 0x90dee98
	// Params: [ Num(0) Size(0x0) ]
	void RemoveScreenOCStaticMesh();

	// Object: Function GPGameHud.BaseUIView.RefreshFadeOutAnimation
	// Flags: [Native|Public]
	// Offset: 0x90dee7c
	// Params: [ Num(0) Size(0x0) ]
	void RefreshFadeOutAnimation();

	// Object: Function GPGameHud.BaseUIView.PreInit
	// Flags: [Final|Native|Public]
	// Offset: 0x90dee68
	// Params: [ Num(0) Size(0x0) ]
	void PreInit();

	// Object: Function GPGameHud.BaseUIView.PlayFadeOutAnimation
	// Flags: [Native|Public]
	// Offset: 0x90dee28
	// Params: [ Num(1) Size(0x1) ]
	uint8_t PlayFadeOutAnimation();

	// Object: Function GPGameHud.BaseUIView.PlayFadeInAnimation
	// Flags: [Native|Public]
	// Offset: 0x90dede8
	// Params: [ Num(1) Size(0x1) ]
	uint8_t PlayFadeInAnimation();

	// Object: Function GPGameHud.BaseUIView.OnFadeOutAnimationEnd
	// Flags: [Native|Public]
	// Offset: 0x90dedcc
	// Params: [ Num(0) Size(0x0) ]
	void OnFadeOutAnimationEnd();

	// Object: Function GPGameHud.BaseUIView.OnFadeInAnimationEnd
	// Flags: [Native|Public]
	// Offset: 0x90dedb0
	// Params: [ Num(0) Size(0x0) ]
	void OnFadeInAnimationEnd();

	// Object: Function GPGameHud.BaseUIView.OnAnimationFinished_Implementation
	// Flags: [Native|Public]
	// Offset: 0x90ded04
	// Params: [ Num(1) Size(0x8) ]
	void OnAnimationFinished_Implementation(struct UWidgetAnimation* Animation);

	// Object: Function GPGameHud.BaseUIView.IsEnableScreenOCStaticMeshWhenShow
	// Flags: [Native|Protected]
	// Offset: 0x90decc4
	// Params: [ Num(1) Size(0x1) ]
	uint8_t IsEnableScreenOCStaticMeshWhenShow();

	// Object: Function GPGameHud.BaseUIView.InitGameHudState
	// Flags: [Native|Public]
	// Offset: 0x90deca8
	// Params: [ Num(0) Size(0x0) ]
	void InitGameHudState();

	// Object: Function GPGameHud.BaseUIView.Init
	// Flags: [Final|Native|Public]
	// Offset: 0x90dec94
	// Params: [ Num(0) Size(0x0) ]
	void Init();

	// Object: Function GPGameHud.BaseUIView.HideSelf
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x90dec80
	// Params: [ Num(0) Size(0x0) ]
	void HideSelf();

	// Object: Function GPGameHud.BaseUIView.HasFadeOutAnimation
	// Flags: [Final|Native|Public]
	// Offset: 0x90dec48
	// Params: [ Num(1) Size(0x1) ]
	uint8_t HasFadeOutAnimation();

	// Object: Function GPGameHud.BaseUIView.HasFadeInAnimation
	// Flags: [Final|Native|Public]
	// Offset: 0x90dec10
	// Params: [ Num(1) Size(0x1) ]
	uint8_t HasFadeInAnimation();

	// Object: Function GPGameHud.BaseUIView.GetUMGFadeOutAnim
	// Flags: [Native|Public]
	// Offset: 0x90debd4
	// Params: [ Num(1) Size(0x8) ]
	struct UWidgetAnimation* GetUMGFadeOutAnim();

	// Object: Function GPGameHud.BaseUIView.GetUMGFadeInAnim
	// Flags: [Native|Public]
	// Offset: 0x90deb98
	// Params: [ Num(1) Size(0x8) ]
	struct UWidgetAnimation* GetUMGFadeInAnim();

	// Object: Function GPGameHud.BaseUIView.GetPanelOwner
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x90deb7c
	// Params: [ Num(1) Size(0x8) ]
	struct UObject* GetPanelOwner();

	// Object: Function GPGameHud.BaseUIView.GetDynamicRoot
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x90deb48
	// Params: [ Num(1) Size(0x8) ]
	struct UWidget* GetDynamicRoot();

	// Object: Function GPGameHud.BaseUIView.GetAllAnimations
	// Flags: [Final|Native|Public]
	// Offset: 0x90deab0
	// Params: [ Num(1) Size(0x10) ]
	struct TArray<struct UWidgetAnimation*> GetAllAnimations();

	// Object: Function GPGameHud.BaseUIView.CheckPrepareShow
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x90dea7c
	// Params: [ Num(1) Size(0x1) ]
	uint8_t CheckPrepareShow();

	// Object: Function GPGameHud.BaseUIView.BP_OnShowWithWeaponEnable
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(0) Size(0x0) ]
	void BP_OnShowWithWeaponEnable();

	// Object: Function GPGameHud.BaseUIView.BP_OnShow
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(0) Size(0x0) ]
	void BP_OnShow();

	// Object: Function GPGameHud.BaseUIView.BP_OnInit
	// Flags: [Event|Protected|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(0) Size(0x0) ]
	void BP_OnInit();

	// Object: Function GPGameHud.BaseUIView.BP_OnHide
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(0) Size(0x0) ]
	void BP_OnHide();

	// Object: Function GPGameHud.BaseUIView.BP_InitVisibleGameHudState
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(0) Size(0x0) ]
	void BP_InitVisibleGameHudState();

	// Object: Function GPGameHud.BaseUIView.BP_InitInVisibleGameHudState
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(0) Size(0x0) ]
	void BP_InitInVisibleGameHudState();

	// Object: Function GPGameHud.BaseUIView.BP_InitAlwaysShowGameHUDState
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(0) Size(0x0) ]
	void BP_InitAlwaysShowGameHUDState();

	// Object: Function GPGameHud.BaseUIView.BP_BeginTouch
	// Flags: [Event|Public|HasDefaults|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(2) Size(0x10) ]
	void BP_BeginTouch(ETouchIndex FingerIndex, struct FVector Location);

	// Object: Function GPGameHud.BaseUIView.AddScreenOCStaticMesh
	// Flags: [Final|Native|Protected]
	// Offset: 0x90dea68
	// Params: [ Num(0) Size(0x0) ]
	void AddScreenOCStaticMesh();
};

// Object: Class GPGameHud.HUDComponent
// Size: 0x28 (Inherited: 0x28)
struct UHUDComponent : UObject
{
	DEFINE_UE_CLASS_HELPERS(UHUDComponent, "HUDComponent")
};

// Object: Class GPGameHud.BaseHUD
// Size: 0x6E0 (Inherited: 0x460)
struct ABaseHUD : AHUD
{
	DEFINE_UE_CLASS_HELPERS(ABaseHUD, "BaseHUD")

	uint8_t Pad_0x460[0x8]; // 0x460(0x8)
	struct TArray<struct UBatchUIController*> Controllers; // 0x468(0x10)
	float SafeZoneValue; // 0x478(0x4)
	uint8_t Pad_0x47C[0x54]; // 0x47C(0x54)
	uint8_t bStartInGame : 1; // 0x4D0(0x1), Mask(0x1)
	uint8_t BitPad_0x4D0_1 : 7; // 0x4D0(0x1)
	uint8_t Pad_0x4D1[0x7]; // 0x4D1(0x7)
	struct TArray<struct FAsyncUILoadID> AsyncUILoadIDs; // 0x4D8(0x10)
	struct TMap<struct FSoftClassPath, struct UObject*> AsyncLoadedControllerClassCache; // 0x4E8(0x50)
	struct TMap<struct FSoftClassPath, struct UObject*> AsyncLoadedViewClassCache; // 0x538(0x50)
	uint8_t Pad_0x588[0x78]; // 0x588(0x78)
	struct UMobileGamePad* Gamepad; // 0x600(0x8)
	struct AActor* LocalFocusActor; // 0x608(0x8)
	uint8_t Pad_0x610[0x10]; // 0x610(0x10)
	struct FName DefaultUIDataTable_Name; // 0x620(0x8)
	struct UDataTable* DefaultUIDataTable; // 0x628(0x8)
	struct TArray<struct UHUDComponent*> HUDComponentClass; // 0x630(0x10)
	struct TSet<struct FName> HUDBlackLists; // 0x640(0x50)
	struct TArray<struct UHUDComponent*> HUDComponents; // 0x690(0x10)
	uint8_t Pad_0x6A0[0x18]; // 0x6A0(0x18)
	struct TArray<struct ULuaUIHudBaseView*> HudList; // 0x6B8(0x10)
	uint8_t Pad_0x6C8[0x8]; // 0x6C8(0x8)
	struct UHudManager* NewHudManager; // 0x6D0(0x8)
	struct UHudManager* HudManagerClass; // 0x6D8(0x8)

	// Object: Function GPGameHud.BaseHUD.UpdatePanelSwitcherHD
	// Flags: [Final|Native|Public]
	// Offset: 0x90de308
	// Params: [ Num(0) Size(0x0) ]
	void UpdatePanelSwitcherHD();

	// Object: Function GPGameHud.BaseHUD.StartInGame
	// Flags: [Final|Native|Protected|BlueprintCallable]
	// Offset: 0x90de2f4
	// Params: [ Num(0) Size(0x0) ]
	void StartInGame();

	// Object: Function GPGameHud.BaseHUD.ShowPanelWithFunctionName
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x90de1d0
	// Params: [ Num(3) Size(0x20) ]
	void ShowPanelWithFunctionName(struct FName PanelConfigName, struct UObject* PanelOwner, struct FString FunctionName);

	// Object: Function GPGameHud.BaseHUD.ShowPanelDelegate
	// Flags: [Final|Native|Public]
	// Offset: 0x90de054
	// Params: [ Num(3) Size(0x20) ]
	void ShowPanelDelegate(struct FName PanelConfigName, struct UObject* PanelOwner, struct FMulticastInlineDelegate ViewShowDelegate);

	// Object: Function GPGameHud.BaseHUD.ShowPanel
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x90ddf78
	// Params: [ Num(2) Size(0x10) ]
	void ShowPanel(struct FName PanelConfigName, struct UObject* PanelOwner);

	// Object: Function GPGameHud.BaseHUD.ShowLuaPanelWithSubUIList
	// Flags: [Event|Public|HasOutParms|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(3) Size(0x20) ]
	void ShowLuaPanelWithSubUIList(struct FName PanelConfigName, struct UObject* PanelOwner, const struct TArray<struct FName>& SubUIs);

	// Object: Function GPGameHud.BaseHUD.ShowGamepad
	// Flags: [Final|Exec|Native|Public]
	// Offset: 0x90ddecc
	// Params: [ Num(1) Size(0x1) ]
	void ShowGamepad(uint8_t bShowGamepad);

	// Object: Function GPGameHud.BaseHUD.SetRootUISafeZone
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x90dde28
	// Params: [ Num(1) Size(0x4) ]
	void SetRootUISafeZone(float InSafeZoneValue);

	// Object: Function GPGameHud.BaseHUD.ResetToDefaultLayer
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xfb3d2d0
	// Params: [ Num(1) Size(0x8) ]
	void ResetToDefaultLayer(struct FName PanelConfigName);

	// Object: Function GPGameHud.BaseHUD.RemoveUI
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x90ddd78
	// Params: [ Num(2) Size(0x9) ]
	uint8_t RemoveUI(struct UWidget* UIIns);

	// Object: Function GPGameHud.BaseHUD.RemoveHudOrState
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xf690d44
	// Params: [ Num(3) Size(0xA) ]
	void RemoveHudOrState(struct FName Name, uint8_t bReleasePanel, uint8_t bForceRefreshHudState);

	// Object: Function GPGameHud.BaseHUD.OnShowPanel
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(2) Size(0x10) ]
	void OnShowPanel(struct FName PanelConfigName, struct UObject* PanelOwner);

	// Object: Function GPGameHud.BaseHUD.OnSetCinematicMode
	// Flags: [Final|Native|Public]
	// Offset: 0x90ddccc
	// Params: [ Num(1) Size(0x1) ]
	void OnSetCinematicMode(uint8_t bCinematicMode);

	// Object: Function GPGameHud.BaseHUD.OnSeamlessTravelEnd
	// Flags: [Final|Native|Protected]
	// Offset: 0x90ddc20
	// Params: [ Num(1) Size(0x1) ]
	void OnSeamlessTravelEnd(uint8_t bReconnect);

	// Object: Function GPGameHud.BaseHUD.OnPreGarbageCollect
	// Flags: [Final|Native|Public]
	// Offset: 0x90ddc0c
	// Params: [ Num(0) Size(0x0) ]
	void OnPreGarbageCollect();

	// Object: Function GPGameHud.BaseHUD.OnLoadingViewShutDown
	// Flags: [Final|Native|Protected]
	// Offset: 0xfc8b868
	// Params: [ Num(0) Size(0x0) ]
	void OnLoadingViewShutDown();

	// Object: Function GPGameHud.BaseHUD.OnInitializeAsyncLoadingFinish
	// Flags: [Final|Native|Protected]
	// Offset: 0x90ddbf8
	// Params: [ Num(0) Size(0x0) ]
	void OnInitializeAsyncLoadingFinish();

	// Object: Function GPGameHud.BaseHUD.OnHudMutexChanged
	// Flags: [Final|Native|Protected]
	// Offset: 0x90dda10
	// Params: [ Num(4) Size(0x70) ]
	void OnHudMutexChanged(struct FMutexQueueItem PreHolder, struct FMutexQueueItem CurHolder, EMutexChangeReason ChangeReason, struct UGPCommonHUDScreenMutex* MutexObj);

	// Object: Function GPGameHud.BaseHUD.OnHUDInitializeAsyncLoadCompelted
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x105d3414
	// Params: [ Num(1) Size(0x10) ]
	void OnHUDInitializeAsyncLoadCompelted(struct TArray<struct FName> BlockGameFlowViewNameArray);

	// Object: Function GPGameHud.BaseHUD.OnHidePanel
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(1) Size(0x8) ]
	void OnHidePanel(struct FName PanelConfigName);

	// Object: Function GPGameHud.BaseHUD.OnGameHudStateChangedNew
	// Flags: [Final|Native|Protected]
	// Offset: 0xef16b3c
	// Params: [ Num(1) Size(0x8) ]
	void OnGameHudStateChangedNew(struct UHudManager* InHudManager);

	// Object: Function GPGameHud.BaseHUD.OnGameHudStateChanged
	// Flags: [Final|Native|Protected]
	// Offset: 0x90dd9fc
	// Params: [ Num(0) Size(0x0) ]
	void OnGameHudStateChanged();

	// Object: Function GPGameHud.BaseHUD.OnDestroyPanel
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(1) Size(0x8) ]
	void OnDestroyPanel(struct FName PanelConfigName);

	// Object: Function GPGameHud.BaseHUD.OnCreateNewFirstPlayerController
	// Flags: [Final|Native|Public]
	// Offset: 0x90dd958
	// Params: [ Num(1) Size(0x8) ]
	void OnCreateNewFirstPlayerController(struct APlayerController* NewPlayerController);

	// Object: Function GPGameHud.BaseHUD.OnAsyncLoadAllViewClassCompleted
	// Flags: [Final|Native|Public|HasDefaults]
	// Offset: 0x90dd764
	// Params: [ Num(3) Size(0x38) ]
	void OnAsyncLoadAllViewClassCompleted(struct TArray<struct FSoftObjectPath> Assets, struct TArray<struct FName> ViewNames, struct FSoftObjectPath AssetPath);

	// Object: Function GPGameHud.BaseHUD.NotifyLuaHUDStartInGame
	// Flags: [Native|Protected]
	// Offset: 0x90dd748
	// Params: [ Num(0) Size(0x0) ]
	void NotifyLuaHUDStartInGame();

	// Object: Function GPGameHud.BaseHUD.MoveToNewLayer
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xfac1a8c
	// Params: [ Num(4) Size(0x11) ]
	uint8_t MoveToNewLayer(struct FName PanelConfigName, EHudLayer NewHudLayer, int32_t NewZOrderOffset);

	// Object: Function GPGameHud.BaseHUD.MovePanelToLayer
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x90dd65c
	// Params: [ Num(3) Size(0xA) ]
	uint8_t MovePanelToLayer(struct FName PanelConfigName, ELayerZorder NewLayerZOrder);

	// Object: Function GPGameHud.BaseHUD.IsUseNewHudFramework
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x90dd63c
	// Params: [ Num(1) Size(0x1) ]
	uint8_t IsUseNewHudFramework();

	// Object: Function GPGameHud.BaseHUD.IsInitializeFinished
	// Flags: [Final|Native|Public]
	// Offset: 0x90dd620
	// Params: [ Num(1) Size(0x1) ]
	uint8_t IsInitializeFinished();

	// Object: Function GPGameHud.BaseHUD.Initialize
	// Flags: [Final|Native|Protected]
	// Offset: 0x90dd60c
	// Params: [ Num(0) Size(0x0) ]
	void Initialize();

	// Object: Function GPGameHud.BaseHUD.HidePanel
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x90dd568
	// Params: [ Num(1) Size(0x8) ]
	void HidePanel(struct FName PanelConfigName);

	// Object: Function GPGameHud.BaseHUD.GetPanel_NewHudFrameWork
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x90dd488
	// Params: [ Num(2) Size(0x18) ]
	struct TArray<struct UUserWidget*> GetPanel_NewHudFrameWork(struct FName PanelConfigName);

	// Object: Function GPGameHud.BaseHUD.GetPanel
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x90dd3a8
	// Params: [ Num(2) Size(0x18) ]
	struct TArray<struct UBaseUIView*> GetPanel(struct FName PanelConfigName);

	// Object: Function GPGameHud.BaseHUD.GetNotLoadedBlockGameFlowHUDNames
	// Flags: [Final|Native|Public]
	// Offset: 0x90dd310
	// Params: [ Num(1) Size(0x10) ]
	struct TArray<struct FName> GetNotLoadedBlockGameFlowHUDNames();

	// Object: Function GPGameHud.BaseHUD.GetLuaPanelDesc
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(2) Size(0x10) ]
	struct FName GetLuaPanelDesc(struct FName LuaPanelName);

	// Object: Function GPGameHud.BaseHUD.GetLuaPanel
	// Flags: [Event|Public|BlueprintCallable|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(2) Size(0x10) ]
	struct ULuaUIBaseView* GetLuaPanel(struct FName PanelConfigName);

	// Object: Function GPGameHud.BaseHUD.GetLocalFocusActor
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xf6a6654
	// Params: [ Num(1) Size(0x8) ]
	struct AActor* GetLocalFocusActor();

	// Object: Function GPGameHud.BaseHUD.GetHudMananger
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0xe7aa930
	// Params: [ Num(3) Size(0x18) ]
	static struct UHudManager* GetHudMananger(struct UObject* WorldContext, EHUDType HUDType);

	// Object: Function GPGameHud.BaseHUD.GetHUD
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0xe7aa5f4
	// Params: [ Num(3) Size(0x18) ]
	static struct ABaseHUD* GetHUD(struct UObject* WorldContext, EHUDType HUDType);

	// Object: Function GPGameHud.BaseHUD.GetAllLuaPanelName
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(1) Size(0x10) ]
	struct TArray<struct FName> GetAllLuaPanelName();

	// Object: Function GPGameHud.BaseHUD.GenerateVisiableConfig
	// Flags: [Final|Exec|Native|Public|BlueprintCallable]
	// Offset: 0x90dd2fc
	// Params: [ Num(0) Size(0x0) ]
	void GenerateVisiableConfig();

	// Object: Function GPGameHud.BaseHUD.DestroyPanel
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x90dd258
	// Params: [ Num(1) Size(0x8) ]
	void DestroyPanel(struct FName PanelConfigName);

	// Object: Function GPGameHud.BaseHUD.DeletePanels
	// Flags: [Native|Public|HasOutParms]
	// Offset: 0x90dd19c
	// Params: [ Num(1) Size(0x8) ]
	void DeletePanels(const struct FName& UIDataTableType);

	// Object: Function GPGameHud.BaseHUD.CreatePanels
	// Flags: [Native|Public|HasOutParms]
	// Offset: 0x90dd058
	// Params: [ Num(3) Size(0x28) ]
	void CreatePanels(const struct FName& UIDataTableType, struct FString RuleOnlyLuaHudTableName, struct FString RuleOnlyLuaBaseHudTableName);

	// Object: Function GPGameHud.BaseHUD.CreatePanel
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(1) Size(0x8) ]
	void CreatePanel(struct FName PanelConfigName);

	// Object: Function GPGameHud.BaseHUD.CreateLuaPanelWithSubUIList
	// Flags: [Event|Public|HasOutParms|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(3) Size(0x20) ]
	void CreateLuaPanelWithSubUIList(struct FName PanelConfigName, struct UObject* PanelOwner, const struct TArray<struct FName>& SubUIs);

	// Object: Function GPGameHud.BaseHUD.CallBaseUIViewShowDelegate
	// Flags: [Final|Native|Protected]
	// Offset: 0x90dcf70
	// Params: [ Num(2) Size(0x18) ]
	void CallBaseUIViewShowDelegate(struct FString FunctionName, struct UBaseUIView* View);

	// Object: Function GPGameHud.BaseHUD.AsyncLoadPanelDelegate
	// Flags: [Final|Native|Public]
	// Offset: 0x90dcdf4
	// Params: [ Num(3) Size(0x20) ]
	void AsyncLoadPanelDelegate(struct FName PanelConfigName, struct UObject* PanelOwner, struct FMulticastInlineDelegate LoadedDelegate);

	// Object: Function GPGameHud.BaseHUD.AsyncLoadPanel
	// Flags: [Final|Native|Public]
	// Offset: 0x90dcd18
	// Params: [ Num(2) Size(0x10) ]
	void AsyncLoadPanel(struct FName PanelConfigName, struct UObject* PanelOwner);

	// Object: Function GPGameHud.BaseHUD.AddUI
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x90dcbe0
	// Params: [ Num(4) Size(0x11) ]
	uint8_t AddUI(struct UWidget* UIIns, uint8_t bIsInSafeZone, int32_t ZOrder);

	// Object: Function GPGameHud.BaseHUD.AddToRoot
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(4) Size(0x11) ]
	uint8_t AddToRoot(struct UWidget* UIIns, int32_t UILayer, int32_t ZOrder);

	// Object: Function GPGameHud.BaseHUD.AddHudOrState
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xf8d30f4
	// Params: [ Num(3) Size(0x11) ]
	void AddHudOrState(struct FName Name, struct UObject* InHudOwner, uint8_t bForceRefreshHudState);

	// Object: Function GPGameHud.BaseHUD.AcumInitializeAsyncLoadingProgress
	// Flags: [Final|Native|Protected]
	// Offset: 0x90dcb00
	// Params: [ Num(2) Size(0xC) ]
	void AcumInitializeAsyncLoadingProgress(struct FName LoadedViewName, int32_t AccNum);
};

// Object: Class GPGameHud.BaseMutexUIView
// Size: 0x3F8 (Inherited: 0x3F0)
struct UBaseMutexUIView : UBaseUIView
{
	DEFINE_UE_CLASS_HELPERS(UBaseMutexUIView, "BaseMutexUIView")

	struct FName MutexRegName; // 0x3EC(0x8)
	uint8_t bGotMutex : 1; // 0x3F4(0x1), Mask(0x1)
};

// Object: Class GPGameHud.BaseUIController
// Size: 0xA8 (Inherited: 0x28)
struct UBaseUIController : UObject
{
	DEFINE_UE_CLASS_HELPERS(UBaseUIController, "BaseUIController")

	uint8_t Pad_0x28[0x28]; // 0x28(0x28)
	struct UBaseUIView* ViewClass; // 0x50(0x8)
	int32_t ZOrder; // 0x58(0x4)
	uint8_t Pad_0x5C[0x4]; // 0x5C(0x4)
	struct FGameplayTagContainer ChannelTagContainer; // 0x60(0x20)
	uint8_t bIsSafeZone : 1; // 0x80(0x1), Mask(0x1)
	uint8_t BitPad_0x80_1 : 7; // 0x80(0x1)
	uint8_t Pad_0x81[0x1]; // 0x81(0x1)
	uint8_t m_NeverSleep : 1; // 0x82(0x1), Mask(0x1)
	uint8_t BitPad_0x82_1 : 7; // 0x82(0x1)
	uint8_t bLowFrequencyInvalidation : 1; // 0x83(0x1), Mask(0x1)
	uint8_t BitPad_0x83_1 : 7; // 0x83(0x1)
	uint8_t Pad_0x84[0x4]; // 0x84(0x4)
	struct UBaseUIView* View; // 0x88(0x8)
	struct ABaseHUD* BaseHUD; // 0x90(0x8)
	struct UObject* ViewPanelOwner; // 0x98(0x8)
	uint8_t bStartInGame : 1; // 0xA0(0x1), Mask(0x1)
	uint8_t BitPad_0xA0_1 : 7; // 0xA0(0x1)
	uint8_t Pad_0xA1[0x7]; // 0xA1(0x7)

	// Object: Function GPGameHud.BaseUIController.StartInGame
	// Flags: [Native|Public]
	// Offset: 0x90de688
	// Params: [ Num(0) Size(0x0) ]
	void StartInGame();

	// Object: Function GPGameHud.BaseUIController.OnStartInGame
	// Flags: [Native|Public]
	// Offset: 0x90de66c
	// Params: [ Num(0) Size(0x0) ]
	void OnStartInGame();

	// Object: Function GPGameHud.BaseUIController.OnInit
	// Flags: [Native|Public]
	// Offset: 0x90de650
	// Params: [ Num(0) Size(0x0) ]
	void OnInit();

	// Object: Function GPGameHud.BaseUIController.IsNeverSleep
	// Flags: [Final|Native|Public]
	// Offset: 0x90de634
	// Params: [ Num(1) Size(0x1) ]
	uint8_t IsNeverSleep();

	// Object: Function GPGameHud.BaseUIController.Init
	// Flags: [Native|Public]
	// Offset: 0x90de588
	// Params: [ Num(1) Size(0x8) ]
	void Init(struct ABaseHUD* HUD);

	// Object: Function GPGameHud.BaseUIController.GetPlayerOwner
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x90de554
	// Params: [ Num(1) Size(0x8) ]
	struct APlayerController* GetPlayerOwner();
};

// Object: Class GPGameHud.BatchUIController
// Size: 0x108 (Inherited: 0xA8)
struct UBatchUIController : UBaseUIController
{
	DEFINE_UE_CLASS_HELPERS(UBatchUIController, "BatchUIController")

	struct TArray<struct UBaseUIController*> ChildControllers; // 0xA8(0x10)
	struct TMap<struct FSoftClassPath, struct UBaseUIController*> ControllerClassPathToBaseUIControllers; // 0xB8(0x50)
};

// Object: Class GPGameHud.BatchUIView
// Size: 0x4E0 (Inherited: 0x3F0)
struct UBatchUIView : UBaseUIView
{
	DEFINE_UE_CLASS_HELPERS(UBatchUIView, "BatchUIView")

	ELayerZorder ViewLayer; // 0x3E9(0x1)
	struct UPanelWidget* UIRootContent; // 0x3F0(0x8)
	struct TMap<struct FString, struct UPanelWidget*> CacheViewContents; // 0x3F8(0x50)
	uint8_t Pad_0x449[0x7]; // 0x449(0x7)
	struct TArray<struct UBaseUIView*> CachedSubBaseUIViews; // 0x450(0x10)
	struct TArray<struct UBaseUIView*> SubViews; // 0x460(0x10)
	struct TMap<struct FSoftClassPath, struct UBaseUIView*> ViewClassPathToBaseUIViews; // 0x470(0x50)
	uint8_t Pad_0x4C0[0x10]; // 0x4C0(0x10)
	struct TArray<struct UWidget*> SafeZoneWidgets; // 0x4D0(0x10)

	// Object: Function GPGameHud.BatchUIView.SetRootUISafeZone
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x90e09e0
	// Params: [ Num(1) Size(0x4) ]
	void SetRootUISafeZone(float InSafeZoneValue);

	// Object: Function GPGameHud.BatchUIView.RemoveUI
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x90e0930
	// Params: [ Num(2) Size(0x9) ]
	uint8_t RemoveUI(struct UWidget* UIIns);

	// Object: Function GPGameHud.BatchUIView.AddUI
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x90e07f8
	// Params: [ Num(4) Size(0x11) ]
	uint8_t AddUI(struct UWidget* UIIns, uint8_t bIsInSafeZone, int32_t ZOrder);
};

// Object: Class GPGameHud.CommonHUDView
// Size: 0x3F0 (Inherited: 0x3F0)
struct UCommonHUDView : UBaseUIView
{
	DEFINE_UE_CLASS_HELPERS(UCommonHUDView, "CommonHUDView")

	// Object: Function GPGameHud.CommonHUDView.OnHUDStateChanged
	// Flags: [Final|Native|Protected|BlueprintCallable]
	// Offset: 0x90e0b1c
	// Params: [ Num(0) Size(0x0) ]
	void OnHUDStateChanged();

	// Object: Function GPGameHud.CommonHUDView.BPTickFromCpp
	// Flags: [Event|Protected|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(1) Size(0x4) ]
	void BPTickFromCpp(float DateTime);
};

// Object: Class GPGameHud.GPBaseHudController
// Size: 0x80 (Inherited: 0x80)
struct UGPBaseHudController : UBaseHudController
{
	DEFINE_UE_CLASS_HELPERS(UGPBaseHudController, "GPBaseHudController")
};

// Object: Class GPGameHud.GPBaseHudView
// Size: 0x400 (Inherited: 0x400)
struct UGPBaseHudView : UBaseHudView
{
	DEFINE_UE_CLASS_HELPERS(UGPBaseHudView, "GPBaseHudView")

	uint8_t bCacheScreenOCStaticMeshOn : 1; // 0x3F9(0x1), Mask(0x1)
	EGPInputModeType WantedInputMode; // 0x3FA(0x1)

	// Object: Function GPGameHud.GPBaseHudView.ShowSelf
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x90e0de8
	// Params: [ Num(0) Size(0x0) ]
	void ShowSelf();

	// Object: Function GPGameHud.GPBaseHudView.RemoveScreenOCStaticMesh
	// Flags: [Final|Native|Protected]
	// Offset: 0x90e0dd4
	// Params: [ Num(0) Size(0x0) ]
	void RemoveScreenOCStaticMesh();

	// Object: Function GPGameHud.GPBaseHudView.IsEnableScreenOCStaticMeshWhenShow
	// Flags: [Native|Protected]
	// Offset: 0x90e0d94
	// Params: [ Num(1) Size(0x1) ]
	uint8_t IsEnableScreenOCStaticMeshWhenShow();

	// Object: Function GPGameHud.GPBaseHudView.HideSelf
	// Flags: [Final|Native|Protected|BlueprintCallable]
	// Offset: 0xfe56608
	// Params: [ Num(1) Size(0x1) ]
	void HideSelf(uint8_t bReleasePanel);

	// Object: Function GPGameHud.GPBaseHudView.AddScreenOCStaticMesh
	// Flags: [Final|Native|Protected]
	// Offset: 0x90e0d80
	// Params: [ Num(0) Size(0x0) ]
	void AddScreenOCStaticMesh();
};

// Object: Class GPGameHud.GPCommonHUDScreenMutex
// Size: 0x90 (Inherited: 0x28)
struct UGPCommonHUDScreenMutex : UObject
{
	DEFINE_UE_CLASS_HELPERS(UGPCommonHUDScreenMutex, "GPCommonHUDScreenMutex")

	struct FName MutexName; // 0x28(0x8)
	struct UDataTableSystemManagerBase* MutexRegisterTableManager; // 0x30(0x8)
	struct FMutexQueueItem CurrentHolder; // 0x38(0x30)
	struct TArray<struct FMutexQueueItem> MutexWaitingQueue; // 0x68(0x10)
	uint64_t LocalPlayerUin; // 0x78(0x8)
	struct TArray<struct FName> RegisterMutexViewNameArray; // 0x80(0x10)

	// Object: Function GPGameHud.GPCommonHUDScreenMutex.TickMutex
	// Flags: [Final|Native|Public]
	// Offset: 0x90e176c
	// Params: [ Num(1) Size(0x4) ]
	void TickMutex(float DeltaTime);

	// Object: Function GPGameHud.GPCommonHUDScreenMutex.RequestMutex
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x90e1690
	// Params: [ Num(2) Size(0x10) ]
	void RequestMutex(struct FName RegisteredName, struct UUserWidget* Widget);

	// Object: Function GPGameHud.GPCommonHUDScreenMutex.ReleaseMutex_Inner
	// Flags: [Final|Native|Private]
	// Offset: 0x90e15ec
	// Params: [ Num(1) Size(0x1) ]
	void ReleaseMutex_Inner(EMutexChangeReason ChangeReason);

	// Object: Function GPGameHud.GPCommonHUDScreenMutex.ReleaseMutex
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x90e1510
	// Params: [ Num(2) Size(0x10) ]
	void ReleaseMutex(struct FName RegisteredName, struct UUserWidget* Widget);

	// Object: Function GPGameHud.GPCommonHUDScreenMutex.PushMutexWaitingQueue
	// Flags: [Final|Native|Private]
	// Offset: 0x90e1414
	// Params: [ Num(2) Size(0x31) ]
	uint8_t PushMutexWaitingQueue(struct FMutexQueueItem InQueueItem);

	// Object: Function GPGameHud.GPCommonHUDScreenMutex.PopMutexWaitingQueue
	// Flags: [Final|Native|Private|HasOutParms]
	// Offset: 0x90e132c
	// Params: [ Num(2) Size(0x31) ]
	uint8_t PopMutexWaitingQueue(struct FMutexQueueItem& OutQueueItem);

	// Object: Function GPGameHud.GPCommonHUDScreenMutex.IsCurrentHolder
	// Flags: [Final|Native|Public]
	// Offset: 0x90e127c
	// Params: [ Num(2) Size(0x9) ]
	uint8_t IsCurrentHolder(struct UBaseMutexUIView* MutexUIView);

	// Object: Function GPGameHud.GPCommonHUDScreenMutex.InitMutex
	// Flags: [Final|Native|Public]
	// Offset: 0x90e11a0
	// Params: [ Num(2) Size(0x10) ]
	void InitMutex(struct FName InMutexName, struct UDataTableSystemManagerBase* InMutexRegisterTableManager);

	// Object: Function GPGameHud.GPCommonHUDScreenMutex.GetWaitingMutexSeconds
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x90e10bc
	// Params: [ Num(3) Size(0x14) ]
	float GetWaitingMutexSeconds(struct FName RegisteredName, struct UUserWidget* Widget);

	// Object: Function GPGameHud.GPCommonHUDScreenMutex.ForceRefresh
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x90e10a8
	// Params: [ Num(0) Size(0x0) ]
	void ForceRefresh();

	// Object: Function GPGameHud.GPCommonHUDScreenMutex.Contains
	// Flags: [Final|Native|Public]
	// Offset: 0x90e0ff8
	// Params: [ Num(2) Size(0x9) ]
	uint8_t Contains(struct UBaseMutexUIView* MutexUIView);

	// Object: Function GPGameHud.GPCommonHUDScreenMutex.AddTailMutexWaitingQueue
	// Flags: [Final|Native|Private]
	// Offset: 0x90e0efc
	// Params: [ Num(2) Size(0x31) ]
	uint8_t AddTailMutexWaitingQueue(struct FMutexQueueItem InQueueItem);
};

// Object: Class GPGameHud.HUDMutexHDEventTipsDataTableManager
// Size: 0x38 (Inherited: 0x30)
struct UHUDMutexHDEventTipsDataTableManager : UDataTableSystemManagerBase
{
	DEFINE_UE_CLASS_HELPERS(UHUDMutexHDEventTipsDataTableManager, "HUDMutexHDEventTipsDataTableManager")

	uint8_t Pad_0x30[0x8]; // 0x30(0x8)
};

// Object: Class GPGameHud.HUDMutexMiniMapBottomDataTableManager
// Size: 0x38 (Inherited: 0x30)
struct UHUDMutexMiniMapBottomDataTableManager : UDataTableSystemManagerBase
{
	DEFINE_UE_CLASS_HELPERS(UHUDMutexMiniMapBottomDataTableManager, "HUDMutexMiniMapBottomDataTableManager")

	uint8_t Pad_0x30[0x8]; // 0x30(0x8)
};

// Object: Class GPGameHud.GPGameHudDelegates
// Size: 0x1D8 (Inherited: 0x30)
struct UGPGameHudDelegates : UGameInstanceSubsystem
{
	DEFINE_UE_CLASS_HELPERS(UGPGameHudDelegates, "GPGameHudDelegates")

	struct FMulticastInlineDelegate OnBaseHudInit; // 0x30(0x10)
	struct FMulticastInlineDelegate OnGameBaseUIViewInit; // 0x40(0x10)
	uint8_t Pad_0x50[0x18]; // 0x50(0x18)
	struct FMulticastInlineDelegate OnBeforeHUDStateChanged; // 0x68(0x10)
	struct FMulticastInlineDelegate PostOnGameHudStateChanged; // 0x78(0x10)
	uint8_t Pad_0x88[0x30]; // 0x88(0x30)
	struct FMulticastInlineDelegate OnDisplayCommonBanner; // 0xB8(0x10)
	struct FMulticastInlineDelegate OnDisplayCommonBannerWithDuration; // 0xC8(0x10)
	struct FMulticastInlineDelegate OnDisplayBossBloodStrip; // 0xD8(0x10)
	struct FMulticastInlineDelegate OnGMHudCreated; // 0xE8(0x10)
	struct FMulticastInlineDelegate AirDropVehicleTipHUD; // 0xF8(0x10)
	struct FMulticastInlineDelegate FreeBuildTipHUD; // 0x108(0x10)
	struct FMulticastInlineDelegate OnHUDViewAsyncLoaded; // 0x118(0x10)
	struct FMulticastInlineDelegate OnHUDInitializeAsyncLoadProgress; // 0x128(0x10)
	struct FMulticastInlineDelegate OnHUDInitializeAsyncLoadComplete; // 0x138(0x10)
	struct FMulticastInlineDelegate OnLoadingViewShutDown; // 0x148(0x10)
	struct FDelegate AddScreenOCStaticMesh; // 0x158(0x10)
	struct FDelegate RemoveScreenOCStaticMesh; // 0x168(0x10)
	struct FMulticastInlineDelegate OnHUDInteractTipsShowOrHide; // 0x178(0x10)
	struct FMulticastInlineDelegate OnAutoFlushPressedOpenOrClose; // 0x188(0x10)
	struct FMulticastInlineDelegate OnSoundPanelInit; // 0x198(0x10)
	struct FMulticastInlineDelegate OnHudManagerCreated; // 0x1A8(0x10)
	struct FMulticastInlineDelegate OnInputKeepVoiceSpeeking; // 0x1B8(0x10)
	struct FMulticastInlineDelegate OnLocalCharacterDiedShowKillerInfoCard; // 0x1C8(0x10)

	// Object: Function GPGameHud.GPGameHudDelegates.Get
	// Flags: [Final|Native|Static|Public]
	// Offset: 0xef14638
	// Params: [ Num(2) Size(0x10) ]
	static struct UGPGameHudDelegates* Get(struct UObject* GameContextObject);
};

// Object: Class GPGameHud.GPMobileCustomLayoutBPLibrary
// Size: 0x28 (Inherited: 0x28)
struct UGPMobileCustomLayoutBPLibrary : UObject
{
	DEFINE_UE_CLASS_HELPERS(UGPMobileCustomLayoutBPLibrary, "GPMobileCustomLayoutBPLibrary")

	// Object: Function GPGameHud.GPMobileCustomLayoutBPLibrary.FetchAllCustomLayoutAppearance
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x90e1c54
	// Params: [ Num(1) Size(0x8) ]
	static void FetchAllCustomLayoutAppearance(struct UObject* WorldContextObject);
};

// Object: Class GPGameHud.GPParkourHudView
// Size: 0x400 (Inherited: 0x400)
struct UGPParkourHudView : UGPBaseHudView
{
	DEFINE_UE_CLASS_HELPERS(UGPParkourHudView, "GPParkourHudView")
};

// Object: Class GPGameHud.GPParkourHudViewController
// Size: 0x80 (Inherited: 0x80)
struct UGPParkourHudViewController : UGPBaseHudController
{
	DEFINE_UE_CLASS_HELPERS(UGPParkourHudViewController, "GPParkourHudViewController")

	// Object: Function GPGameHud.GPParkourHudViewController.OnStartParkour
	// Flags: [Native|Public]
	// Offset: 0x90e2100
	// Params: [ Num(2) Size(0x8) ]
	void OnStartParkour(float InParkourMaxTime, int32_t InTotalCheckPointsNum);

	// Object: Function GPGameHud.GPParkourHudViewController.OnReadyTimerCountdown
	// Flags: [Native|Public]
	// Offset: 0x90e20e4
	// Params: [ Num(0) Size(0x0) ]
	void OnReadyTimerCountdown();

	// Object: Function GPGameHud.GPParkourHudViewController.OnLeaveReadyCheckPoint
	// Flags: [Native|Public]
	// Offset: 0x90e2030
	// Params: [ Num(1) Size(0x1) ]
	void OnLeaveReadyCheckPoint(uint8_t bFalseStart);

	// Object: Function GPGameHud.GPParkourHudViewController.OnFinishParkour
	// Flags: [Native|Public]
	// Offset: 0x90e1f40
	// Params: [ Num(2) Size(0x5) ]
	void OnFinishParkour(float UsedTime, uint8_t bCompleted);

	// Object: Function GPGameHud.GPParkourHudViewController.OnArriveNewCheckPoint
	// Flags: [Native|Public]
	// Offset: 0x90e1e1c
	// Params: [ Num(3) Size(0xC) ]
	void OnArriveNewCheckPoint(int32_t CheckPointIndex, int32_t InFirstCheckPointWaitTime, float CurUsedTime);
};

// Object: Class GPGameHud.GPParkourRankListItem
// Size: 0x2F8 (Inherited: 0x2F8)
struct UGPParkourRankListItem : UUserWidget
{
	DEFINE_UE_CLASS_HELPERS(UGPParkourRankListItem, "GPParkourRankListItem")

	// Object: Function GPGameHud.GPParkourRankListItem.BP_SetData
	// Flags: [Event|Public|BlueprintCallable|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(1) Size(0x28) ]
	void BP_SetData(struct FParkourRankDataItem DataItem);

	// Object: Function GPGameHud.GPParkourRankListItem.BP_PlayAnim
	// Flags: [Event|Public|BlueprintCallable|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(1) Size(0x4) ]
	void BP_PlayAnim(int32_t AnimType);
};

// Object: Class GPGameHud.GPParkourRankView
// Size: 0x400 (Inherited: 0x400)
struct UGPParkourRankView : UGPBaseHudView
{
	DEFINE_UE_CLASS_HELPERS(UGPParkourRankView, "GPParkourRankView")
};

// Object: Class GPGameHud.GPParkourRankViewController
// Size: 0x80 (Inherited: 0x80)
struct UGPParkourRankViewController : UGPBaseHudController
{
	DEFINE_UE_CLASS_HELPERS(UGPParkourRankViewController, "GPParkourRankViewController")

	// Object: Function GPGameHud.GPParkourRankViewController.OnResquestRankData
	// Flags: [Native|Public]
	// Offset: 0x90e247c
	// Params: [ Num(0) Size(0x0) ]
	void OnResquestRankData();

	// Object: Function GPGameHud.GPParkourRankViewController.OnResquestFriendData
	// Flags: [Native|Public]
	// Offset: 0x90e2460
	// Params: [ Num(0) Size(0x0) ]
	void OnResquestFriendData();
};

// Object: Class GPGameHud.GPSwitchableBaseHudController
// Size: 0x80 (Inherited: 0x80)
struct UGPSwitchableBaseHudController : UGPBaseHudController
{
	DEFINE_UE_CLASS_HELPERS(UGPSwitchableBaseHudController, "GPSwitchableBaseHudController")

	// Object: Function GPGameHud.GPSwitchableBaseHudController.OnHudVersionChanged
	// Flags: [Native|Public]
	// Offset: 0x90e41c8
	// Params: [ Num(2) Size(0x8) ]
	void OnHudVersionChanged(int32_t OldVer, int32_t NewVer);

	// Object: Function GPGameHud.GPSwitchableBaseHudController.GetCurrentViewClass
	// Flags: [Final|Native|Public|HasDefaults]
	// Offset: 0x90e40d0
	// Params: [ Num(1) Size(0x18) ]
	struct FSoftClassPath GetCurrentViewClass();

	// Object: Function GPGameHud.GPSwitchableBaseHudController.GetCurrentHudConfig
	// Flags: [Final|Native|Public]
	// Offset: 0x90e4098
	// Params: [ Num(1) Size(0x48) ]
	struct FSwitchableHudConfigRow GetCurrentHudConfig();
};

// Object: Class GPGameHud.HUDClipmap
// Size: 0x2E0 (Inherited: 0x2B8)
struct UHUDClipmap : UClipmap
{
	DEFINE_UE_CLASS_HELPERS(UHUDClipmap, "HUDClipmap")

	struct FIntPoint PatchCountXY; // 0x2B4(0x8)
	int32_t MaxMipCount; // 0x2BC(0x4)
	struct FIntPoint ReservedPatchCountXY; // 0x2C0(0x8)
	struct FIntPoint ClipMapSizeXY; // 0x2C8(0x8)
	struct TArray<struct TSoftObjectPtr<UTexture2D>> AllSubtextures; // 0x2D0(0x10)
};

// Object: Class GPGameHud.HUDLoadSetting
// Size: 0xA0 (Inherited: 0x38)
struct UHUDLoadSetting : UDeveloperSettings
{
	DEFINE_UE_CLASS_HELPERS(UHUDLoadSetting, "HUDLoadSetting")

	struct TArray<struct FString> AllowedAutoLoadNames; // 0x38(0x10)
	uint8_t Pad_0x48[0x58]; // 0x48(0x58)
};

// Object: Class GPGameHud.HUDMutexManager
// Size: 0x50 (Inherited: 0x30)
struct UHUDMutexManager : UWorldSubsystem
{
	DEFINE_UE_CLASS_HELPERS(UHUDMutexManager, "HUDMutexManager")

	struct FMulticastInlineDelegate OnMutexChanged; // 0x30(0x10)
	struct UGPCommonHUDScreenMutex* HUDScreenMutex_HDEventTips; // 0x40(0x8)
	struct UGPCommonHUDScreenMutex* HUDScreenMutex_MiniMapBottom; // 0x48(0x8)

	// Object: Function GPGameHud.HUDMutexManager.TickMutex
	// Flags: [Final|Native|Public]
	// Offset: 0x90e46dc
	// Params: [ Num(1) Size(0x4) ]
	void TickMutex(float DeltaTime);

	// Object: Function GPGameHud.HUDMutexManager.RequestMutex
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x90e4638
	// Params: [ Num(1) Size(0x8) ]
	void RequestMutex(struct UBaseMutexUIView* BaseMutexUIView);

	// Object: Function GPGameHud.HUDMutexManager.ReleaseMutex
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x90e4594
	// Params: [ Num(1) Size(0x8) ]
	void ReleaseMutex(struct UBaseMutexUIView* BaseMutexUIView);

	// Object: Function GPGameHud.HUDMutexManager.IsVisible
	// Flags: [Final|Native|Public]
	// Offset: 0x90e44e4
	// Params: [ Num(2) Size(0x9) ]
	uint8_t IsVisible(struct UBaseUIView* UIView);

	// Object: Function GPGameHud.HUDMutexManager.Get
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x90e4440
	// Params: [ Num(2) Size(0x10) ]
	static struct UHUDMutexManager* Get(struct UObject* WorldContext);

	// Object: Function GPGameHud.HUDMutexManager.ForceRefreshMutex
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x90e442c
	// Params: [ Num(0) Size(0x0) ]
	void ForceRefreshMutex();
};

// Object: Class GPGameHud.HUDStateManager
// Size: 0xD0 (Inherited: 0x30)
struct UHUDStateManager : UWorldSubsystem
{
	DEFINE_UE_CLASS_HELPERS(UHUDStateManager, "HUDStateManager")

	uint8_t Pad_0x30[0x8]; // 0x30(0x8)
	struct FMulticastInlineDelegate OnGameHudStateAdded; // 0x38(0x10)
	struct FMulticastInlineDelegate OnGameHudStateRemoved; // 0x48(0x10)
	struct TMap<EGameHUDSate, struct FBaseUIViewArray> BaseUIViewMaps; // 0x58(0x50)
	uint8_t Pad_0xA8[0x20]; // 0xA8(0x20)
	struct UEnum* GameHUDSateEnum; // 0xC8(0x8)

	// Object: Function GPGameHud.HUDStateManager.RemoveState
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x90e4a98
	// Params: [ Num(2) Size(0x2) ]
	void RemoveState(EGameHUDSate State, uint8_t bForceRefresh);

	// Object: Function GPGameHud.HUDStateManager.IsVisible_Lua
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xfd7dbc0
	// Params: [ Num(2) Size(0x9) ]
	uint8_t IsVisible_Lua(struct ULuaUIHudBaseView* UIView);

	// Object: Function GPGameHud.HUDStateManager.HasState
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x90e49e8
	// Params: [ Num(2) Size(0x2) ]
	uint8_t HasState(EGameHUDSate State);

	// Object: Function GPGameHud.HUDStateManager.HasAllState
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x90e4920
	// Params: [ Num(2) Size(0x11) ]
	uint8_t HasAllState(const struct TArray<EGameHUDSate>& States);

	// Object: Function GPGameHud.HUDStateManager.GetStateArray
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x1012fe34
	// Params: [ Num(1) Size(0x10) ]
	struct TArray<int32_t> GetStateArray();

	// Object: Function GPGameHud.HUDStateManager.Get
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x90e487c
	// Params: [ Num(2) Size(0x10) ]
	static struct UHUDStateManager* Get(struct UObject* WorldContext);

	// Object: Function GPGameHud.HUDStateManager.AddState
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x90e4794
	// Params: [ Num(2) Size(0x2) ]
	void AddState(EGameHUDSate State, uint8_t bForceRefresh);
};

// Object: Class GPGameHud.LuaHudView
// Size: 0x658 (Inherited: 0x610)
struct ULuaHudView : ULuaUIBaseView
{
	DEFINE_UE_CLASS_HELPERS(ULuaHudView, "LuaHudView")

	uint8_t Pad_0x610[0x30]; // 0x610(0x30)
	struct AActor* LocalFocusActor; // 0x640(0x8)
	uint8_t Pad_0x648[0x8]; // 0x648(0x8)
	struct UObject* OwnerController; // 0x650(0x8)

	// Object: Function GPGameHud.LuaHudView.StopLocalFocus
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x90e4f54
	// Params: [ Num(0) Size(0x0) ]
	void StopLocalFocus();

	// Object: Function GPGameHud.LuaHudView.StartLocalFocus
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xf940608
	// Params: [ Num(1) Size(0x8) ]
	void StartLocalFocus(struct AActor* TargetActor);

	// Object: Function GPGameHud.LuaHudView.ShowSelf
	// Flags: [Final|Native|Protected]
	// Offset: 0x1018f0ec
	// Params: [ Num(0) Size(0x0) ]
	void ShowSelf();

	// Object: Function GPGameHud.LuaHudView.Show_Lua
	// Flags: [Event|Protected|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(0) Size(0x0) ]
	void Show_Lua();

	// Object: Function GPGameHud.LuaHudView.SetSafeZone
	// Flags: [Final|Native|Protected|BlueprintCallable]
	// Offset: 0xfa665b8
	// Params: [ Num(1) Size(0x1) ]
	void SetSafeZone(uint8_t bInSafeZone);

	// Object: Function GPGameHud.LuaHudView.SetNeedInvalidationRoot
	// Flags: [Final|Native|Protected|BlueprintCallable]
	// Offset: 0x90e4eac
	// Params: [ Num(1) Size(0x1) ]
	void SetNeedInvalidationRoot(uint8_t bNeedRoot);

	// Object: Function GPGameHud.LuaHudView.OnStopLocalFocus
	// Flags: [Event|Protected|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(0) Size(0x0) ]
	void OnStopLocalFocus();

	// Object: Function GPGameHud.LuaHudView.OnStartLocalFocus
	// Flags: [Event|Protected|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(1) Size(0x8) ]
	void OnStartLocalFocus(struct AActor* TargetActor);

	// Object: Function GPGameHud.LuaHudView.OnInit
	// Flags: [Event|Protected|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(0) Size(0x0) ]
	void OnInit();

	// Object: Function GPGameHud.LuaHudView.IsSafeZone
	// Flags: [Final|Native|Protected|BlueprintCallable]
	// Offset: 0x90e4e90
	// Params: [ Num(1) Size(0x1) ]
	uint8_t IsSafeZone();

	// Object: Function GPGameHud.LuaHudView.IsInShowState_Lua
	// Flags: [Event|Protected|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(1) Size(0x1) ]
	uint8_t IsInShowState_Lua();

	// Object: Function GPGameHud.LuaHudView.IsInShowState
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x90e4e58
	// Params: [ Num(1) Size(0x1) ]
	uint8_t IsInShowState();

	// Object: Function GPGameHud.LuaHudView.HideSelf
	// Flags: [Final|Native|Protected]
	// Offset: 0xfb41988
	// Params: [ Num(0) Size(0x0) ]
	void HideSelf();

	// Object: Function GPGameHud.LuaHudView.Hide_Lua
	// Flags: [Event|Protected|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(0) Size(0x0) ]
	void Hide_Lua();

	// Object: Function GPGameHud.LuaHudView.GetPlayerState
	// Flags: [Final|Native|Protected|BlueprintCallable]
	// Offset: 0x90e4e24
	// Params: [ Num(1) Size(0x8) ]
	struct APlayerState* GetPlayerState();

	// Object: Function GPGameHud.LuaHudView.GetNeedInvalidationRoot
	// Flags: [Final|Native|Protected|BlueprintCallable]
	// Offset: 0x90e4e08
	// Params: [ Num(1) Size(0x1) ]
	uint8_t GetNeedInvalidationRoot();

	// Object: Function GPGameHud.LuaHudView.DoTick
	// Flags: [Event|Protected|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(1) Size(0x4) ]
	void DoTick(float DeltaTime);

	// Object: Function GPGameHud.LuaHudView.Destroy_Lua
	// Flags: [Event|Protected|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(0) Size(0x0) ]
	void Destroy_Lua();

	// Object: Function GPGameHud.LuaHudView.BP_OnShow
	// Flags: [Event|Protected|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(0) Size(0x0) ]
	void BP_OnShow();

	// Object: Function GPGameHud.LuaHudView.BP_OnInit
	// Flags: [Event|Protected|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(0) Size(0x0) ]
	void BP_OnInit();

	// Object: Function GPGameHud.LuaHudView.BP_OnHide
	// Flags: [Event|Protected|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(0) Size(0x0) ]
	void BP_OnHide();

	// Object: Function GPGameHud.LuaHudView.BP_OnDestroy
	// Flags: [Event|Protected|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(0) Size(0x0) ]
	void BP_OnDestroy();

	// Object: Function GPGameHud.LuaHudView.BeforeOnStopLocalFocus
	// Flags: [Event|Protected|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(0) Size(0x0) ]
	void BeforeOnStopLocalFocus();

	// Object: Function GPGameHud.LuaHudView.BeforeOnStartLocalFocus
	// Flags: [Event|Protected|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(1) Size(0x8) ]
	void BeforeOnStartLocalFocus(struct AActor* TargetActor);
};

// Object: Class GPGameHud.LuaUIHudBaseView
// Size: 0x668 (Inherited: 0x610)
struct ULuaUIHudBaseView : ULuaUIBaseView
{
	DEFINE_UE_CLASS_HELPERS(ULuaUIHudBaseView, "LuaUIHudBaseView")

	struct TArray<EGameHUDSate> AlwaysShowGameHudState; // 0x610(0x10)
	struct TArray<EGameHUDSate> VisibleGameHudState; // 0x620(0x10)
	struct TArray<EGameHUDSate> InVisibleGameHudState; // 0x630(0x10)
	uint8_t NeedUpdate : 1; // 0x640(0x1), Mask(0x1)
	uint8_t BitPad_0x640_1 : 7; // 0x640(0x1)
	uint8_t Pad_0x641[0x3]; // 0x641(0x3)
	float TickElapsedTime; // 0x644(0x4)
	float TickInterval; // 0x648(0x4)
	uint8_t bControlByUiState : 1; // 0x64C(0x1), Mask(0x1)
	uint8_t BitPad_0x64C_1 : 7; // 0x64C(0x1)
	uint8_t Pad_0x64D[0x3]; // 0x64D(0x3)
	struct AActor* LocalFocusActor; // 0x650(0x8)
	uint8_t Pad_0x658[0x8]; // 0x658(0x8)
	struct UWidget* DynamicRoot; // 0x660(0x8)

	// Object: Function GPGameHud.LuaUIHudBaseView.Update
	// Flags: [Native|Event|Public|BlueprintEvent]
	// Offset: 0x90e5758
	// Params: [ Num(1) Size(0x4) ]
	void Update(float Delta);

	// Object: Function GPGameHud.LuaUIHudBaseView.StopLocalFocus
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x90e5744
	// Params: [ Num(0) Size(0x0) ]
	void StopLocalFocus();

	// Object: Function GPGameHud.LuaUIHudBaseView.StartLocalFocus
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xfda9268
	// Params: [ Num(1) Size(0x8) ]
	void StartLocalFocus(struct AActor* TargetActor);

	// Object: Function GPGameHud.LuaUIHudBaseView.ShowSelf
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x90e5730
	// Params: [ Num(0) Size(0x0) ]
	void ShowSelf();

	// Object: Function GPGameHud.LuaUIHudBaseView.Show_Lua
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(0) Size(0x0) ]
	void Show_Lua();

	// Object: Function GPGameHud.LuaUIHudBaseView.Show
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x90e571c
	// Params: [ Num(0) Size(0x0) ]
	void Show();

	// Object: Function GPGameHud.LuaUIHudBaseView.SetSafeZone
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xfd8a8e4
	// Params: [ Num(1) Size(0x1) ]
	void SetSafeZone(uint8_t bInSafeZone);

	// Object: Function GPGameHud.LuaUIHudBaseView.SetNeedInvalidationRoot
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x90e5674
	// Params: [ Num(1) Size(0x1) ]
	void SetNeedInvalidationRoot(uint8_t bNeedRoot);

	// Object: Function GPGameHud.LuaUIHudBaseView.SetDynamicRoot
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x90e55e8
	// Params: [ Num(1) Size(0x8) ]
	void SetDynamicRoot(struct UWidget* root);

	// Object: Function GPGameHud.LuaUIHudBaseView.RemoveStateFromVisibleGameHudState
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x90e5534
	// Params: [ Num(1) Size(0x1) ]
	void RemoveStateFromVisibleGameHudState(EGameHUDSate State);

	// Object: Function GPGameHud.LuaUIHudBaseView.RemoveStateFromInVisibleGameHudState
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x109e622c
	// Params: [ Num(1) Size(0x1) ]
	void RemoveStateFromInVisibleGameHudState(EGameHUDSate State);

	// Object: Function GPGameHud.LuaUIHudBaseView.RemoveStateFromAlwaysShowGameHudState
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x90e5480
	// Params: [ Num(1) Size(0x1) ]
	void RemoveStateFromAlwaysShowGameHudState(EGameHUDSate State);

	// Object: Function GPGameHud.LuaUIHudBaseView.OnStopLocalFocus
	// Flags: [Native|Event|Public|BlueprintEvent]
	// Offset: 0x90e5464
	// Params: [ Num(0) Size(0x0) ]
	void OnStopLocalFocus();

	// Object: Function GPGameHud.LuaUIHudBaseView.OnStartLocalFocus
	// Flags: [Native|Event|Public|BlueprintEvent]
	// Offset: 0xfa16c14
	// Params: [ Num(1) Size(0x8) ]
	void OnStartLocalFocus(struct AActor* TargetActor);

	// Object: Function GPGameHud.LuaUIHudBaseView.OnShow
	// Flags: [Native|Event|Public|BlueprintEvent]
	// Offset: 0xfc78ed4
	// Params: [ Num(0) Size(0x0) ]
	void OnShow();

	// Object: Function GPGameHud.LuaUIHudBaseView.OnPreOpen
	// Flags: [Native|Event|Public|BlueprintEvent]
	// Offset: 0x1069d27c
	// Params: [ Num(0) Size(0x0) ]
	void OnPreOpen();

	// Object: Function GPGameHud.LuaUIHudBaseView.OnOpen
	// Flags: [Native|Event|Public|BlueprintEvent]
	// Offset: 0x1098a754
	// Params: [ Num(0) Size(0x0) ]
	void OnOpen();

	// Object: Function GPGameHud.LuaUIHudBaseView.OnHide
	// Flags: [Native|Event|Public|BlueprintEvent]
	// Offset: 0x1012d81c
	// Params: [ Num(0) Size(0x0) ]
	void OnHide();

	// Object: Function GPGameHud.LuaUIHudBaseView.OnGameHudStateChanged
	// Flags: [Native|Event|Public|BlueprintEvent]
	// Offset: 0x90e5448
	// Params: [ Num(0) Size(0x0) ]
	void OnGameHudStateChanged();

	// Object: Function GPGameHud.LuaUIHudBaseView.OnClose
	// Flags: [Native|Event|Public|BlueprintEvent]
	// Offset: 0x90e542c
	// Params: [ Num(0) Size(0x0) ]
	void OnClose();

	// Object: Function GPGameHud.LuaUIHudBaseView.IsSafeZone
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x90e5410
	// Params: [ Num(1) Size(0x1) ]
	uint8_t IsSafeZone();

	// Object: Function GPGameHud.LuaUIHudBaseView.IsInShowState_Lua
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(1) Size(0x1) ]
	uint8_t IsInShowState_Lua();

	// Object: Function GPGameHud.LuaUIHudBaseView.IsInShowState
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x90e53d8
	// Params: [ Num(1) Size(0x1) ]
	uint8_t IsInShowState();

	// Object: Function GPGameHud.LuaUIHudBaseView.InitGameHudState
	// Flags: [Native|Event|Public|BlueprintEvent]
	// Offset: 0xf5d85ec
	// Params: [ Num(0) Size(0x0) ]
	void InitGameHudState();

	// Object: Function GPGameHud.LuaUIHudBaseView.HideSelf
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x90e53c4
	// Params: [ Num(0) Size(0x0) ]
	void HideSelf();

	// Object: Function GPGameHud.LuaUIHudBaseView.Hide_Lua
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(0) Size(0x0) ]
	void Hide_Lua();

	// Object: Function GPGameHud.LuaUIHudBaseView.Hide
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x90e53b0
	// Params: [ Num(0) Size(0x0) ]
	void Hide();

	// Object: Function GPGameHud.LuaUIHudBaseView.GetPlayerState
	// Flags: [Final|Native|Protected|BlueprintCallable]
	// Offset: 0x90e537c
	// Params: [ Num(1) Size(0x8) ]
	struct APlayerState* GetPlayerState();

	// Object: Function GPGameHud.LuaUIHudBaseView.GetNeedInvalidationRoot
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x90e5360
	// Params: [ Num(1) Size(0x1) ]
	uint8_t GetNeedInvalidationRoot();

	// Object: Function GPGameHud.LuaUIHudBaseView.GetGameState
	// Flags: [Final|Native|Protected|BlueprintCallable]
	// Offset: 0x90e532c
	// Params: [ Num(1) Size(0x8) ]
	struct AGameStateBase* GetGameState();

	// Object: Function GPGameHud.LuaUIHudBaseView.GetDynamicRoot
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x90e5310
	// Params: [ Num(1) Size(0x8) ]
	struct UWidget* GetDynamicRoot();

	// Object: Function GPGameHud.LuaUIHudBaseView.BeforeOnStopLocalFocus
	// Flags: [Native|Event|Public|BlueprintEvent]
	// Offset: 0x90e52f4
	// Params: [ Num(0) Size(0x0) ]
	void BeforeOnStopLocalFocus();

	// Object: Function GPGameHud.LuaUIHudBaseView.BeforeOnStartLocalFocus
	// Flags: [Native|Event|Public|BlueprintEvent]
	// Offset: 0xfa16b30
	// Params: [ Num(1) Size(0x8) ]
	void BeforeOnStartLocalFocus(struct AActor* TargetActor);

	// Object: Function GPGameHud.LuaUIHudBaseView.AddStateToVisibleGameHudState
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x90e5220
	// Params: [ Num(1) Size(0x1) ]
	void AddStateToVisibleGameHudState(EGameHUDSate State);

	// Object: Function GPGameHud.LuaUIHudBaseView.AddStateToInVisibleGameHudState
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xf8ff26c
	// Params: [ Num(1) Size(0x1) ]
	void AddStateToInVisibleGameHudState(EGameHUDSate State);

	// Object: Function GPGameHud.LuaUIHudBaseView.AddStateToAlwaysShowGameHudState
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x90e514c
	// Params: [ Num(1) Size(0x1) ]
	void AddStateToAlwaysShowGameHudState(EGameHUDSate State);
};

// Object: Class GPGameHud.LuaUIHudOldView
// Size: 0x668 (Inherited: 0x668)
struct ULuaUIHudOldView : ULuaUIHudBaseView
{
	DEFINE_UE_CLASS_HELPERS(ULuaUIHudOldView, "LuaUIHudOldView")
};

// Object: Class GPGameHud.MobileDraggableButton
// Size: 0x4B0 (Inherited: 0x4A0)
struct UMobileDraggableButton : UButton
{
	DEFINE_UE_CLASS_HELPERS(UMobileDraggableButton, "MobileDraggableButton")

	uint8_t bCanDrag : 1; // 0x4A0(0x1), Mask(0x1)
	uint8_t BitPad_0x4A0_1 : 7; // 0x4A0(0x1)
	uint8_t Pad_0x4A1[0x3]; // 0x4A1(0x3)
	struct FName PressedSoundName; // 0x4A4(0x8)
	uint8_t Pad_0x4AC[0x4]; // 0x4AC(0x4)

	// Object: Function GPGameHud.MobileDraggableButton.IsDragging
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x90e5a4c
	// Params: [ Num(1) Size(0x1) ]
	uint8_t IsDragging();

	// Object: Function GPGameHud.MobileDraggableButton.FetchCustomLayoutAppearance
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0x90e5a30
	// Params: [ Num(0) Size(0x0) ]
	void FetchCustomLayoutAppearance();

	// Object: Function GPGameHud.MobileDraggableButton.CompositionWidgetPosition
	// Flags: [Native|Public|HasOutParms|HasDefaults|BlueprintCallable]
	// Offset: 0x90e5928
	// Params: [ Num(2) Size(0x50) ]
	void CompositionWidgetPosition(const struct FVector2D& DeltaMove, const struct FGeometry& MyGeometry);
};

// Object: Class GPGameHud.MobileGamePad
// Size: 0x180 (Inherited: 0x28)
struct UMobileGamePad : UObject
{
	DEFINE_UE_CLASS_HELPERS(UMobileGamePad, "MobileGamePad")

	struct TArray<struct UMobileGamePadView*> VisibleViewCache; // 0x28(0x10)
	struct UMobileGamePadView* MobileButtonViews[0x1D]; // 0x38(0xE8)
	uint8_t Pad_0x120[0x10]; // 0x120(0x10)
	struct UMobilePlayerInput* CachedPlayerInput; // 0x130(0x8)
	struct TArray<struct UMobileGamePadView*> MobileButtonViewClasses; // 0x138(0x10)
	uint8_t Pad_0x148[0x38]; // 0x148(0x38)

	// Object: Function GPGameHud.MobileGamePad.OnSetCinematicMode
	// Flags: [Final|Native|Public]
	// Offset: 0x90e5c88
	// Params: [ Num(1) Size(0x1) ]
	void OnSetCinematicMode(uint8_t bCinematicMode);

	// Object: Function GPGameHud.MobileGamePad.OnFinishCreateButtonViews
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(0) Size(0x0) ]
	void OnFinishCreateButtonViews();

	// Object: Function GPGameHud.MobileGamePad.OnCreateNewFirstPlayerController
	// Flags: [Final|Native|Public]
	// Offset: 0x90e5be4
	// Params: [ Num(1) Size(0x8) ]
	void OnCreateNewFirstPlayerController(struct APlayerController* NewPlayerController);

	// Object: Function GPGameHud.MobileGamePad.FindViewByClass
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x90e5b38
	// Params: [ Num(2) Size(0x10) ]
	struct UMobileGamePadView* FindViewByClass(struct UMobileGamePadView* ViewClass);
};

// Object: Class GPGameHud.MobileGamePadView
// Size: 0x448 (Inherited: 0x3F0)
struct UMobileGamePadView : UBaseUIView
{
	DEFINE_UE_CLASS_HELPERS(UMobileGamePadView, "MobileGamePadView")

	uint8_t bHandleUIMsg : 1; // 0x3E9(0x1), Mask(0x1)
	uint8_t bAlwaysHandleUIMsg : 1; // 0x3EA(0x1), Mask(0x1)
	uint8_t BitPad_0x3F0_2 : 6; // 0x3F0(0x1)
	uint8_t Pad_0x3F1[0x7]; // 0x3F1(0x7)
	struct TArray<struct UMobileDraggableButton*> DraggableBtns; // 0x3F8(0x10)
	struct UMobileGamePad* CachedGamePad; // 0x408(0x8)
	uint8_t Pad_0x410[0x38]; // 0x410(0x38)

	// Object: Function GPGameHud.MobileGamePadView.OpenGMMainView4Lua
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x90e5fb4
	// Params: [ Num(0) Size(0x0) ]
	void OpenGMMainView4Lua();

	// Object: Function GPGameHud.MobileGamePadView.OnCreateNewFirstPlayerController
	// Flags: [Native|Protected]
	// Offset: 0x90e5f08
	// Params: [ Num(1) Size(0x8) ]
	void OnCreateNewFirstPlayerController(struct APlayerController* NewPlayerController);
};

// Object: Class GPGameHud.RootUIView
// Size: 0x320 (Inherited: 0x2F8)
struct URootUIView : UUserWidget
{
	DEFINE_UE_CLASS_HELPERS(URootUIView, "RootUIView")

	struct UCanvasPanel* UIContent; // 0x2F8(0x8)
	uint8_t Pad_0x300[0x10]; // 0x300(0x10)
	struct TArray<struct UWidget*> InSafeZoneWidgets; // 0x310(0x10)

	// Object: Function GPGameHud.RootUIView.SetRootUISafeZone
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x90e61d0
	// Params: [ Num(1) Size(0x4) ]
	void SetRootUISafeZone(float SafeZoneValue);

	// Object: Function GPGameHud.RootUIView.RemoveUI
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x90e6120
	// Params: [ Num(2) Size(0x9) ]
	uint8_t RemoveUI(struct UWidget* UIIns);

	// Object: Function GPGameHud.RootUIView.AddUI
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x90e5fe8
	// Params: [ Num(4) Size(0x11) ]
	uint8_t AddUI(struct UWidget* UIIns, uint8_t bIsInSafeZone, int32_t ZOrder);
};

// Object: Class GPGameHud.TemplateHudController
// Size: 0x80 (Inherited: 0x80)
struct UTemplateHudController : UGPBaseHudController
{
	DEFINE_UE_CLASS_HELPERS(UTemplateHudController, "TemplateHudController")
};

// Object: Class GPGameHud.TemplateHudView
// Size: 0x400 (Inherited: 0x400)
struct UTemplateHudView : UGPBaseHudView
{
	DEFINE_UE_CLASS_HELPERS(UTemplateHudView, "TemplateHudView")
};

} // namespace SDK
