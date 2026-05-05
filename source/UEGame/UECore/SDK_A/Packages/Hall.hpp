#pragma once

#include "../CoreUObject_classes.hpp"
#include "DFMGameplay.hpp"
#include "Engine.hpp"
#include "GPGameplay.hpp"
#include "LevelSequence.hpp"
#include "Paper2D.hpp"

namespace SDK
{

// Package: Hall
// Enums: 29
// Structs: 21
// Classes: 95

struct AActor;
struct AAssembleWeaponActor;
struct ACameraActor;
struct ACameraRig_Rail;
struct ACineCameraActor;
struct ADFMLightGroup;
struct AEmitter;
struct AExponentialHeightFog;
struct AGPSequenceActor;
struct ALevelSequenceActor;
struct APaperTileMapActor;
struct APlayerController;
struct APostProcessVolume;
struct ASceneCapture;
struct ASceneCapture2D;
struct ASceneSkeleteMeshActor;
struct ASkeletalMeshActor;
struct ASkyLight;
struct AStaticMeshActor;
enum class EAdapterItemType : uint8_t;
enum class ECharacterAvatarPart : uint16_t;
enum class ECustomTransformRule : uint8_t;
enum class EEquipmentType : uint8_t;
enum class EGPEventCallbackType : uint8_t;
enum class EGPWeaponEasingType : uint8_t;
enum class ETouchIndex : uint8_t;
enum class EWeaponItemType : uint8_t;
enum class EquipmentType : uint8_t;
struct FCollectionWeaponData;
struct FHitResult;
struct FLatentActionInfo;
struct UAnimInstance;
struct UAnimSequence;
struct UAnimSequenceBase;
struct UBinkMediaPlayer;
struct UBinkMediaTexture;
struct UCameraComponent;
struct UCurveFloat;
struct UCurveLinearColor;
struct UDFMUIAudioPlayer;
struct UDataTable;
struct UGPAudioEventAsset;
struct UGPStaticMeshComponent;
struct UImage;
struct ULevelSequence;
struct ULevelSequencePlayer;
struct ULevelStreaming;
struct UMaterial;
struct UMaterialBillboardComponent;
struct UMaterialInstance;
struct UMaterialInstanceDynamic;
struct UMaterialInterface;
struct UMaterialParameterCollection;
struct UMaterialParameterCollectionInstance;
struct UModularApperanceBaseProvider;
struct UModularWeaponDesc;
struct UParticleSystemComponent;
struct UPrimitiveComponent;
struct USceneCaptureComponent2D;
struct USkeletalMesh;
struct USkeletalMeshComponent;
struct USphereComponent;
struct USpineAtlasAsset;
struct USpineSkeletonDataAsset;
struct USplineComponent;
struct USpringArmComponent;
struct UStaticMesh;
struct UStaticMeshComponent;
struct UTexture;
struct UTexture2D;
struct UTextureRenderTarget2D;
struct UTimelineComponent;
struct UUserWidget;
struct UWidget;
struct UWorld;
struct FLobbySeqInfo;
struct FHallDisplayInfoBase;
struct FMainFlowSeqInfo;
struct FHallCharacterProxy;
struct FHallCharacterIKInfo;
struct FHallWeaponAnimInfo;
struct FHallUsingWeaponAnim;
struct FHallCharacterMotionInfo;
struct FHallCharacterSpawnInfo;
struct FLoadLevelContext;
struct FMandelBrick;
struct FLuckyNestSeqInfo;
struct FCameraManagerParams;
struct FPositionConfig;
struct FHallCharacterDisplayStageInfo;
struct FHallMainDisplayInfo;
struct FPreviewRoomSceneAssetPath;
struct FPreviewRoomSceneType2SubLvls;
struct FHallSettlementSnapshotCandidate;
struct FUIFollowInfo;
struct FSandBoxMapCamConfig;
struct AHallDisplayCtrlBase;
struct AHallLobbyDisplayCtrl;
struct AHallArenaLobbyDisplayCtrl;
struct AHallArmoryDisplayCtrl;
struct AHallBattlePassDisplayCtrl;
struct UHallCameraCtrlComponentBase;
struct AHallCharacter;
struct AHallCharacterAnimPreviewer;
struct UHallCharacterAppearanceProxyComponent;
struct AHallCharacterCameraActor;
struct UHallCharacterCtrlComponentBase;
struct UHallDisplayLevelSequenceComponentBase;
struct UHallCharacterLevelSeqComponentBase;
struct AHallCharacterSpawnConfig;
struct UHallCharacterVoiceComponent;
struct UHallCharacterWeaponComponent;
struct AHallCommonDisplayCtrl;
struct AHallCollectionDisplayCtrl;
struct AHallCollectionLibraryDisplayCtrl;
struct AHallCollectionRoomDisplayCtrl;
struct AHallDisplayCameraActor;
struct IHallDisplayCtrlInterface;
struct UHallDisplayCtrlManager;
struct AHallDisplayItemActor;
struct UHallDisplayStageConfig;
struct UHallSurroundingDisplayStageConfig;
struct UHallLightDisplayStageConfig;
struct UHallCharacterDisplayStageConfig;
struct AHallDisplayStageConfiger;
struct AHallExpertDisplayCtrl;
struct UHallExpertDisplaySequenceComponent;
struct UHallFunctionStatics;
struct UHallGeneralLevelSequenceCtrlComponent;
struct UHallGeneralRotateComponent;
struct AHallHangingDisplayCtrl;
struct UHallHeroActionShowComponent;
struct UHallHighLevelDisplayComponent;
struct UHallItemDisplayComponent;
struct AHallLevelSequenceCameraParamActor;
struct UHallLevelSequenceComponent;
struct UHallLevelSequenceManager;
struct UHallLevelStreamingManager;
struct AHallLightGroupCollectorActor;
struct UHallLightGroupComponent;
struct AHallLotteryDisplayCtrl;
struct UHallLotteryDisplaySequenceComponent;
struct AHallLotteryTenDisplayCtrl;
struct AHallLuckyNestDisplayCtrl;
struct UHallMagicTowerCameraComponent;
struct AHallMagicTowerDisplayCtrl;
struct UHallMainCameraCtrlComponent;
struct UHallMainCharacterAnimInstance;
struct UHallMainCharacterCtrlComponent;
struct UHallMainCharacterFaceAnimInstance;
struct AHallMainDisplayCtrl;
struct UHallMainDisplayStageComponent;
struct AHallMainFlowDisplayCtrl;
struct UHallMainLightCtrlComponent;
struct AHallMatchDisplayCtrl;
struct AHallMatchDisplayLevelSequenceActor;
struct UHallMatchDisplayLevelSequenceComponent;
struct UHallMatchSceneEnvComponent;
struct AHallMPLobbyDisplayCtrl;
struct AHallOperatorDisplayCtrl;
struct AHallOperatorItemDisplayCtrl;
struct AHallPlayerController;
struct AHallPostProcessDisplayActor;
struct AHallPreviewRoomDisplayCtrl;
struct AHallRandomMeshActor;
struct AHallSceneActor;
struct AHallSceneBGActor;
struct UHallSceneBGManager;
struct UHallSceneCapture2DComponent;
struct AHallScenePreviewer;
struct UHallSceneVideoPlayerComponent;
struct AHallSecretServiceCtrl;
struct UHallSequenceDirector;
struct UHallSettlementAnimInstance;
struct AHallSettlementDisplayCtrl;
struct AHallSettlementSnapshotStudio;
struct UHallSurroundingCtrlComponent;
struct AHallVehicleDisplayCtrl;
struct UHallWatchDisplayComponent;
struct AHallWatchDisplayCtrl;
struct UHallWeaponDisplayComponent;
struct AHallWeaponDisplayCtrl;
struct UHallWeaponDisplaySequenceComponent;
struct AHallWeaponShowPreviewer;
struct UHallWeaponSkinSceneDisplayComponent;
struct UHeroItemAnimInstance;
struct ULuaLevelUtil;
struct ARoleInfoLogoActor;
struct ASandBoxMap;
struct ASandBoxMapActor;
struct ASyncMap;

// Object: Enum Hall.EHallDisplayTargetType
enum class EHallDisplayTargetType : uint8_t
{
	None = 0,
	Character = 1,
	Item = 2,
	Weapon = 3,
	Vehicle = 4,
	WeaponPendant = 5,
	SafeBox = 6,
	EHallDisplayTargetType_MAX = 7
};

// Object: Enum Hall.EMainFlowCtrlType
enum class EMainFlowCtrlType : uint8_t
{
	MainFlowCtrl_SOL = 0,
	MainFlowCtrl_MP = 1,
	MainFlowCtrl_MAX = 2
};

// Object: Enum Hall.EPreviewRoomSceneType
enum class EPreviewRoomSceneType : uint8_t
{
	None = 0,
	Range = 1,
	OutDoor = 2,
	Range_M = 101,
	OutDoor_M = 102,
	EPreviewRoomSceneType_MAX = 103
};

// Object: Enum Hall.EHallCharacterAnim
enum class EHallCharacterAnim : uint8_t
{
	PrevAnim0 = 0,
	PrevAnim1 = 1,
	PrevAnim2 = 2,
	PrevAnim3 = 3,
	PrevAnim4 = 4,
	PrevAnim5 = 5,
	PrevAnim6 = 6,
	PrevAnim7 = 7,
	PrevAnim8 = 8,
	PrevAnim9 = 9,
	PrevAnim10 = 10,
	PrevAnim11 = 11,
	PrevAnim12 = 12,
	PrevAnim13 = 13,
	PrevAnim14 = 14,
	PrevAnim15 = 15,
	PrevAnim16 = 16,
	PrevAnim17 = 17,
	PrevAnim18 = 18,
	PrevAnim19 = 19,
	PrevAnim20 = 20,
	PrevAnim21 = 21,
	EHallCharacterAnim_MAX = 22
};

// Object: Enum Hall.EPrevAnimHallCharacter
enum class EPrevAnimHallCharacter : uint8_t
{
	PrevAnimCharacter0 = 0,
	PrevAnimCharacter1 = 1,
	PrevAnimCharacter2 = 2,
	PrevAnimCharacter3 = 3,
	PrevAnimCharacter4 = 4,
	PrevAnimCharacter5 = 5,
	PrevAnimCharacter6 = 6,
	PrevAnimCharacter7 = 7,
	PrevAnimCharacter8 = 8,
	PrevAnimCharacter9 = 9,
	PrevAnimCharacter10 = 10,
	PrevAnimCharacter11 = 11,
	PrevAnimCharacter12 = 12,
	PrevAnimCharacter13 = 13,
	PrevAnimCharacter14 = 14,
	PrevAnimCharacter15 = 15,
	PrevAnimCharacter16 = 16,
	PrevAnimCharacter17 = 17,
	PrevAnimCharacter18 = 18,
	PrevAnimCharacter19 = 19,
	PrevAnimCharacter20 = 20,
	PrevAnimCharacter21 = 21,
	PrevAnimCharacter22 = 22,
	PrevAnimCharacter23 = 23,
	PrevAnimCharacter24 = 24,
	EPrevAnimHallCharacter_MAX = 25
};

// Object: Enum Hall.ELoadLevelStateSeq
enum class ELoadLevelStateSeq : uint8_t
{
	ELoadLevelStateSequence = 0,
	ELoadLevelStateAvatar = 1,
	ELoadLevelStateFinish = 2,
	ELoadLevelStateSeq_MAX = 3
};

// Object: Enum Hall.EMagicTowerRoleType
enum class EMagicTowerRoleType : uint8_t
{
	None = 0,
	Item = 1,
	Monster = 2,
	NPC = 3,
	EMagicTowerRoleType_MAX = 4
};

// Object: Enum Hall.EHallDisplayTouchType
enum class EHallDisplayTouchType : uint8_t
{
	None = 0,
	OneFingerTouch = 1,
	TwoFingerTouch = 2,
	EHallDisplayTouchType_MAX = 3
};

// Object: Enum Hall.EHallRotationType
enum class EHallRotationType : uint8_t
{
	None = 0,
	Character = 1,
	Camera = 2,
	EHallRotationType_MAX = 3
};

// Object: Enum Hall.EHallDisplayType
enum class EHallDisplayType : uint8_t
{
	None = 0,
	Mall = 1,
	Individual = 2,
	BattlePass = 3,
	Activity = 4,
	Collection = 5,
	LevelUnlock = 6,
	Blueprint = 7,
	Capture2D = 8,
	Resever1 = 91,
	Resever2 = 92,
	Resever3 = 93,
	Resever4 = 94,
	Resever5 = 95,
	EHallDisplayType_MAX = 96
};

// Object: Enum Hall.EHallCharacterLevelSequenceState
enum class EHallCharacterLevelSequenceState : uint8_t
{
	None = 0,
	Loading = 1,
	Loaded = 2,
	Processing = 3,
	Finished = 4,
	Done = 5,
	EHallCharacterLevelSequenceState_MAX = 6
};

// Object: Enum Hall.EHallCameraTouchType
enum class EHallCameraTouchType : uint8_t
{
	None = 0,
	OneFingerTouch = 1,
	TwoFingerTouch = 2,
	EHallCameraTouchType_MAX = 3
};

// Object: Enum Hall.EHallCharacterDisplayStage
enum class EHallCharacterDisplayStage : uint8_t
{
	Nothing = 0,
	HallNormal = 1,
	Hall_Hero = 2,
	Deposit = 3,
	RoleInfo = 4,
	HeroDisplay = 5,
	SettlementSucceed_Stage1 = 6,
	SettlementSucceed_Stage2 = 7,
	SettlementSucceed_Stage2_Team = 8,
	SettlementSucceed_Stage3 = 9,
	SettlementFailed_Stage1 = 10,
	SettlementFailed_Stage2 = 11,
	SettlementFailed_Stage2_Team = 12,
	IrisPreparation = 13,
	EHallCharacterDisplayStage_MAX = 14
};

// Object: Enum Hall.EHallMainDisplayType
enum class EHallMainDisplayType : uint8_t
{
	None = 0,
	Main = 1,
	Team = 2,
	Equip = 3,
	Depository = 4,
	Profile = 5,
	Hero = 6,
	Fashion = 7,
	Fashion_Head = 8,
	Fashion_Upper = 9,
	Fashion_Lower = 10,
	Fashion_Bag = 11,
	Fashion_Overview = 12,
	Weapon = 13,
	Settlement_Succeed = 14,
	Settlement_Succeed_Stage2 = 15,
	Settlement_Succeed_Team_Near = 16,
	Settlement_Succeed_Team_Far = 17,
	Settlement_Failed = 18,
	Settlement_Failed_Team = 19,
	TakingSupplies = 20,
	TakingMedicine = 21,
	HeroHallInSeq = 22,
	IrisPreparation = 23,
	Weapon_Item1 = 24,
	BattleFieldInTeamPrepare = 25,
	BattleFieldInTeam = 26,
	CrackedSettlementMVP1 = 27,
	CrackedSettlementMVP2 = 28,
	CrackedSettlementMVP3 = 29,
	CrackedSettlementMVP4 = 30,
	CrackedSettlementTeam = 31,
	CrackedSettlementMVP1Moving = 32,
	CrackedSettlementMVP2Moving = 33,
	CrackedSettlementMVP3Moving = 34,
	CrackedSettlementMVP4Moving = 35,
	CrackedSettlementTeamMoving = 36,
	WeaponZoom = 37,
	WeaponZoom_2 = 38,
	Equip2 = 39,
	EquipMedicine = 40,
	WeaponItemToSkin = 41,
	EHallMainDisplayType_MAX = 42
};

// Object: Enum Hall.ELoadLevelState
enum class ELoadLevelState : uint8_t
{
	ELoadLevelStateInit = 0,
	ELoadLevelStateUnLoadPre = 1,
	ELoadLevelStateLoad = 2,
	ELoadLevelStateFinish = 3,
	ELoadLevelStateNeedRefresh = 4,
	ELoadLevelStateShow = 5,
	ELoadLevelState_MAX = 6
};

// Object: Enum Hall.ELoadLevelOpType
enum class ELoadLevelOpType : uint8_t
{
	ELoadLevelOpType_Load = 0,
	ELoadLevelOpType_Unload = 1,
	ELoadLevelOpType_MAX = 2
};

// Object: Enum Hall.ETransformType
enum class ETransformType : uint8_t
{
	Transform = 0,
	Attach = 1,
	ETransformType_MAX = 2
};

// Object: Enum Hall.EMandelBrickStatus
enum class EMandelBrickStatus : uint8_t
{
	MandelBrickStatus_UnOpen = 0,
	MandelBrickStatus_Openning70 = 1,
	MandelBrickStatus_Openning85 = 2,
	MandelBrickStatus_Openning100 = 3,
	MandelBrickStatus_Opened = 4,
	MandelBrickStatus_MAX = 5
};

// Object: Enum Hall.EMoveDir
enum class EMoveDir : uint8_t
{
	None = 0,
	MoveUp = 1,
	MoveDown = 2,
	MoveLeft = 3,
	MoveRight = 4,
	EMoveDir_MAX = 5
};

// Object: Enum Hall.EHallCharacterAnimStateMechineType
enum class EHallCharacterAnimStateMechineType : uint8_t
{
	Default = 0,
	Equip = 1,
	Hero = 2,
	Team = 3,
	CrackedSettlement = 4,
	MainFlowHall = 5,
	EquippedActivity = 6,
	EHallCharacterAnimStateMechineType_MAX = 7
};

// Object: Enum Hall.EHallTeamDisplayStage
enum class EHallTeamDisplayStage : uint8_t
{
	Normal = 0,
	Settlement = 1,
	EHallTeamDisplayStage_MAX = 2
};

// Object: Enum Hall.EMatchCtrlType
enum class EMatchCtrlType : uint8_t
{
	SOL_MatchCtrl = 0,
	MP_MatchCtrl = 1,
	EMatchCtrlType_MAX = 2
};

// Object: Enum Hall.EPreviewRoomProcessLevelFailReason
enum class EPreviewRoomProcessLevelFailReason : uint8_t
{
	None = 0,
	AlreadyLoading = 1,
	InvalidLevelPaths = 2,
	StreamingManagerNotFound = 3,
	WorldNotFound = 4,
	EPreviewRoomProcessLevelFailReason_MAX = 5
};

// Object: Enum Hall.EMiniWorldType
enum class EMiniWorldType : uint8_t
{
	Operator = 0,
	Match = 1,
	EMiniWorldType_MAX = 2
};

// Object: Enum Hall.ETransformRule
enum class ETransformRule : uint8_t
{
	Absolute = 0,
	Relative = 1,
	ETransformRule_MAX = 2
};

// Object: Enum Hall.EMeshPlaneAxis
enum class EMeshPlaneAxis : uint8_t
{
	X = 0,
	Y = 1,
	Z = 2,
	EMeshPlaneAxis_MAX = 3
};

// Object: Enum Hall.ESandBoxMapModeType
enum class ESandBoxMapModeType : uint8_t
{
	None = 0,
	SafeHouse = 1,
	SOL = 2,
	SOLHighValue = 3,
	RaidSimple = 4,
	RaidNormal = 5,
	RaidHard = 6,
	ESandBoxMapModeType_MAX = 7
};

// Object: Enum Hall.ESandBoxMapCameraTransitionMode
enum class ESandBoxMapCameraTransitionMode : uint8_t
{
	None = 0,
	TopToPOI = 1,
	POIToTop = 2,
	POIToPOI = 3,
	CurToLock = 4,
	ESandBoxMapCameraTransitionMode_MAX = 5
};

// Object: Enum Hall.ESandBoxMapState
enum class ESandBoxMapState : uint8_t
{
	None = 0,
	Locked = 1,
	UnLock = 2,
	Selected = 3,
	Unselect = 4,
	LockedToUnlock = 5,
	LockedToSelected = 6,
	UnlockToSelected = 7,
	SelectedToLocked = 8,
	SelectedToUnlock = 9,
	UnlockToLocked = 10,
	ESandBoxMapState_MAX = 11
};

// Object: ScriptStruct Hall.LobbySeqInfo
// Size: 0x40 (Inherited: 0x0)
struct FLobbySeqInfo
{
	struct FSoftObjectPath SeqPath; // 0x0(0x18)
	struct TSoftObjectPtr<ALevelSequenceActor> SeqActor; // 0x18(0x28)
};

// Object: ScriptStruct Hall.HallDisplayInfoBase
// Size: 0x50 (Inherited: 0x0)
struct FHallDisplayInfoBase
{
	struct TWeakObjectPtr<struct ACameraActor> CameraDefault; // 0x0(0x8)
	struct TWeakObjectPtr<struct ACameraActor> CameraNear; // 0x8(0x8)
	struct TWeakObjectPtr<struct ACameraActor> CameraFar; // 0x10(0x8)
	struct TWeakObjectPtr<struct ACameraActor> CameraStart; // 0x18(0x8)
	float CameraSpeed; // 0x20(0x4)
	float CameraTime; // 0x24(0x4)
	EGPWeaponEasingType CameraSpeedEasingType; // 0x28(0x1)
	EHallDisplayTargetType DisplayTargetType; // 0x29(0x1)
	uint8_t Pad_0x2A[0x2]; // 0x2A(0x2)
	float LockMoveStartTargetAlpha; // 0x2C(0x4)
	uint8_t bSupportCameraRollback : 1; // 0x30(0x1), Mask(0x1)
	uint8_t BitPad_0x30_1 : 7; // 0x30(0x1)
	uint8_t Pad_0x31[0x3]; // 0x31(0x3)
	float CameraRollbackSpeed; // 0x34(0x4)
	uint8_t CameraReboundEnable : 1; // 0x38(0x1), Mask(0x1)
	uint8_t BitPad_0x38_1 : 7; // 0x38(0x1)
	uint8_t CameraImmediatelyFlag : 1; // 0x39(0x1), Mask(0x1)
	uint8_t BitPad_0x39_1 : 7; // 0x39(0x1)
	uint8_t Pad_0x3A[0x2]; // 0x3A(0x2)
	float CameraReboundYawRange; // 0x3C(0x4)
	float CameraReboundPitchRange; // 0x40(0x4)
	float Strength; // 0x44(0x4)
	float radius; // 0x48(0x4)
	float ExpandScale; // 0x4C(0x4)
};

// Object: ScriptStruct Hall.MainFlowSeqInfo
// Size: 0x40 (Inherited: 0x0)
struct FMainFlowSeqInfo
{
	struct FSoftObjectPath SeqPath; // 0x0(0x18)
	struct TSoftObjectPtr<ALevelSequenceActor> SeqActor; // 0x18(0x28)
};

// Object: ScriptStruct Hall.HallCharacterProxy
// Size: 0x60 (Inherited: 0x0)
struct FHallCharacterProxy
{
	struct AHallCharacter* SpawnedHallCharacter; // 0x0(0x8)
	struct UHallCharacterAppearanceProxyComponent* CharacterAppearanceComp; // 0x8(0x8)
	struct TMap<ECharacterAvatarPart, struct USkeletalMeshComponent*> SkMeshCompCache; // 0x10(0x50)
};

// Object: ScriptStruct Hall.HallCharacterIKInfo
// Size: 0xC0 (Inherited: 0x0)
struct FHallCharacterIKInfo
{
	uint8_t bForbidLeftHandIK : 1; // 0x0(0x1), Mask(0x1)
	uint8_t BitPad_0x0_1 : 7; // 0x0(0x1)
	uint8_t Pad_0x1[0xF]; // 0x1(0xF)
	struct FTransform LeftHandIKTransform; // 0x10(0x30)
	struct UAnimSequence* LeftHandIKPose; // 0x40(0x8)
	uint8_t bForbidRightHandIK : 1; // 0x48(0x1), Mask(0x1)
	uint8_t BitPad_0x48_1 : 7; // 0x48(0x1)
	uint8_t Pad_0x49[0x7]; // 0x49(0x7)
	struct FTransform RightHandIKTransform; // 0x50(0x30)
	struct UAnimSequence* RightHandIKPose; // 0x80(0x8)
	uint8_t Pad_0x88[0x11]; // 0x88(0x11)
	EAdapterItemType HandIKTargetAdapterType; // 0x99(0x1)
	uint8_t Pad_0x9A[0x16]; // 0x9A(0x16)
	struct USkeletalMeshComponent* LeftHandIKTargetAdapter; // 0xB0(0x8)
	struct USkeletalMeshComponent* RightHandIKTargetAdapter; // 0xB8(0x8)
};

// Object: ScriptStruct Hall.HallWeaponAnimInfo
// Size: 0x48 (Inherited: 0x0)
struct FHallWeaponAnimInfo
{
	uint8_t Pad_0x0[0x10]; // 0x0(0x10)
	struct TArray<struct UObject*> LoadedAnimations; // 0x10(0x10)
	uint8_t Pad_0x20[0x28]; // 0x20(0x28)
};

// Object: ScriptStruct Hall.HallUsingWeaponAnim
// Size: 0x148 (Inherited: 0x0)
struct FHallUsingWeaponAnim
{
	uint8_t Pad_0x0[0x18]; // 0x0(0x18)
	struct UAnimSequenceBase* IdleAnim; // 0x18(0x8)
	struct UAnimSequenceBase* IdleFaceAnim; // 0x20(0x8)
	struct UAnimSequenceBase* ReadyAnim; // 0x28(0x8)
	struct UAnimSequenceBase* Idle2ReadyAnim; // 0x30(0x8)
	struct UAnimSequenceBase* Ready2IdleAnim; // 0x38(0x8)
	struct UAnimSequenceBase* PlayingAnim; // 0x40(0x8)
	struct UAnimSequenceBase* GetWeaponAnim; // 0x48(0x8)
	struct UAnimSequenceBase* IdleShowAnim; // 0x50(0x8)
	struct UAnimSequenceBase* IdleShowFaceAnim; // 0x58(0x8)
	struct UAnimSequenceBase* ArmorStartShowAnim; // 0x60(0x8)
	struct UAnimSequenceBase* ArmorLoopShowAnim; // 0x68(0x8)
	struct UAnimSequenceBase* ArmorStopShowAnim; // 0x70(0x8)
	struct UAnimSequenceBase* SettlementIdle1Anim; // 0x78(0x8)
	struct UAnimSequenceBase* SettlementIdle2Anim; // 0x80(0x8)
	struct UAnimSequenceBase* SettlementIdle3Anim; // 0x88(0x8)
	struct UAnimSequenceBase* SettlementIdle4Anim; // 0x90(0x8)
	struct UAnimSequenceBase* SettlementWalk1Anim; // 0x98(0x8)
	struct UAnimSequenceBase* SettlementWalk2Anim; // 0xA0(0x8)
	struct UAnimSequenceBase* SettlementWalk3Anim; // 0xA8(0x8)
	struct UAnimSequenceBase* SettlementWalk4Anim; // 0xB0(0x8)
	struct UAnimSequenceBase* SettlementShowAnim; // 0xB8(0x8)
	struct UAnimSequenceBase* SettlementTeamWalk1Anim; // 0xC0(0x8)
	struct UAnimSequenceBase* SettlementTeamWalk2Anim; // 0xC8(0x8)
	struct UAnimSequenceBase* SettlementTeamWalk3Anim; // 0xD0(0x8)
	struct UAnimSequenceBase* SettlementTeamWalk4Anim; // 0xD8(0x8)
	struct UAnimSequenceBase* SettlementTeamIdle1Anim; // 0xE0(0x8)
	struct UAnimSequenceBase* SettlementTeamIdle2Anim; // 0xE8(0x8)
	struct UAnimSequenceBase* SettlementTeamIdle3Anim; // 0xF0(0x8)
	struct UAnimSequenceBase* SettlementTeamIdle4Anim; // 0xF8(0x8)
	struct UAnimSequenceBase* MainFlowHallIdle1Anim; // 0x100(0x8)
	struct UAnimSequenceBase* MainFlowHallIdle2Anim; // 0x108(0x8)
	struct UAnimSequenceBase* MainFlowHallIdle3Anim; // 0x110(0x8)
	struct UAnimSequenceBase* MainFlowHallIdle4Anim; // 0x118(0x8)
	struct UAnimSequenceBase* MainFlowHallShow1Anim; // 0x120(0x8)
	struct UAnimSequenceBase* MainFlowHallShow2Anim; // 0x128(0x8)
	struct UAnimSequenceBase* MainFlowHallShow3Anim; // 0x130(0x8)
	struct UAnimSequenceBase* MainFlowHallShow4Anim; // 0x138(0x8)
	uint8_t bHasPlayingAnim : 1; // 0x140(0x1), Mask(0x1)
	uint8_t BitPad_0x140_1 : 7; // 0x140(0x1)
	uint8_t Pad_0x141[0x7]; // 0x141(0x7)
};

// Object: ScriptStruct Hall.HallCharacterMotionInfo
// Size: 0x168 (Inherited: 0x0)
struct FHallCharacterMotionInfo
{
	uint8_t bEnable : 1; // 0x0(0x1), Mask(0x1)
	uint8_t BitPad_0x0_1 : 7; // 0x0(0x1)
	uint8_t bUseStartPosition : 1; // 0x1(0x1), Mask(0x1)
	uint8_t BitPad_0x1_1 : 7; // 0x1(0x1)
	uint8_t Pad_0x2[0x2]; // 0x2(0x2)
	struct FVector StartPosition; // 0x4(0xC)
	struct FVector TargetPosition; // 0x10(0xC)
	uint8_t Pad_0x1C[0x4]; // 0x1C(0x4)
	struct FRuntimeFloatCurve MovementCurve; // 0x20(0xA0)
	float TargetRelativeYaw; // 0xC0(0x4)
	uint8_t Pad_0xC4[0x4]; // 0xC4(0x4)
	struct FRuntimeFloatCurve RotationCurve; // 0xC8(0xA0)
};

// Object: ScriptStruct Hall.HallCharacterSpawnInfo
// Size: 0x18 (Inherited: 0x0)
struct FHallCharacterSpawnInfo
{
	struct FString CharacterID; // 0x0(0x10)
	struct TWeakObjectPtr<struct AActor> SpawnPoint; // 0x10(0x8)
};

// Object: ScriptStruct Hall.LoadLevelContext
// Size: 0x28 (Inherited: 0x0)
struct FLoadLevelContext
{
	uint8_t Pad_0x0[0x28]; // 0x0(0x28)
};

// Object: ScriptStruct Hall.MandelBrick
// Size: 0x28 (Inherited: 0x0)
struct FMandelBrick
{
	struct AStaticMeshActor* MandelActor; // 0x0(0x8)
	int32_t Index; // 0x8(0x4)
	uint8_t Pad_0xC[0x4]; // 0xC(0x4)
	struct UMaterialInstanceDynamic* EmissionEffectMaterial; // 0x10(0x8)
	double Threshold; // 0x18(0x8)
	int32_t ItemQuality; // 0x20(0x4)
	EMandelBrickStatus MandelBrickStatus; // 0x24(0x1)
	uint8_t Pad_0x25[0x3]; // 0x25(0x3)
};

// Object: ScriptStruct Hall.LuckyNestSeqInfo
// Size: 0x40 (Inherited: 0x0)
struct FLuckyNestSeqInfo
{
	struct FSoftObjectPath SeqPath; // 0x0(0x18)
	struct TSoftObjectPtr<ALevelSequenceActor> SeqActor; // 0x18(0x28)
};

// Object: ScriptStruct Hall.CameraManagerParams
// Size: 0x1C (Inherited: 0x0)
struct FCameraManagerParams
{
	uint8_t Pad_0x0[0x1C]; // 0x0(0x1C)
};

// Object: ScriptStruct Hall.PositionConfig
// Size: 0x10 (Inherited: 0x0)
struct FPositionConfig
{
	uint8_t bEnableChangePosition : 1; // 0x0(0x1), Mask(0x1)
	uint8_t BitPad_0x0_1 : 7; // 0x0(0x1)
	uint8_t Pad_0x1[0x3]; // 0x1(0x3)
	struct FVector TargetPosition; // 0x4(0xC)
};

// Object: ScriptStruct Hall.HallCharacterDisplayStageInfo
// Size: 0x188 (Inherited: 0x0)
struct FHallCharacterDisplayStageInfo
{
	struct FString DisplayCharacterID; // 0x0(0x10)
	struct AHallCharacter* CharacterClass; // 0x10(0x8)
	struct TWeakObjectPtr<struct AActor> SpawnPoint; // 0x18(0x8)
	struct FHallCharacterMotionInfo MotionInfo; // 0x20(0x168)
};

// Object: ScriptStruct Hall.HallMainDisplayInfo
// Size: 0x4C (Inherited: 0x0)
struct FHallMainDisplayInfo
{
	struct TWeakObjectPtr<struct ACameraActor> CameraDefault; // 0x0(0x8)
	struct TWeakObjectPtr<struct ACameraActor> CameraNear; // 0x8(0x8)
	struct TWeakObjectPtr<struct ACameraActor> CameraFar; // 0x10(0x8)
	struct TWeakObjectPtr<struct ACameraActor> CameraStart; // 0x18(0x8)
	float CameraSpeed; // 0x20(0x4)
	EGPWeaponEasingType CameraSpeedEasingType; // 0x24(0x1)
	uint8_t Pad_0x25[0x3]; // 0x25(0x3)
	float LockMoveStartTargetAlpha; // 0x28(0x4)
	uint8_t bSupportCameraRollback : 1; // 0x2C(0x1), Mask(0x1)
	uint8_t BitPad_0x2C_1 : 7; // 0x2C(0x1)
	uint8_t Pad_0x2D[0x3]; // 0x2D(0x3)
	float CameraRollbackSpeed; // 0x30(0x4)
	uint8_t CameraReboundEnable : 1; // 0x34(0x1), Mask(0x1)
	uint8_t BitPad_0x34_1 : 7; // 0x34(0x1)
	uint8_t Pad_0x35[0x3]; // 0x35(0x3)
	float CameraReboundYawRange; // 0x38(0x4)
	float CameraReboundPitchRange; // 0x3C(0x4)
	float Strength; // 0x40(0x4)
	uint8_t CamerePostProcessEnable : 1; // 0x44(0x1), Mask(0x1)
	uint8_t BitPad_0x44_1 : 7; // 0x44(0x1)
	uint8_t Pad_0x45[0x3]; // 0x45(0x3)
	float radius; // 0x48(0x4)
};

// Object: ScriptStruct Hall.PreviewRoomSceneAssetPath
// Size: 0x10 (Inherited: 0x0)
struct FPreviewRoomSceneAssetPath
{
	struct TArray<struct FSoftObjectPath> Paths; // 0x0(0x10)
};

// Object: ScriptStruct Hall.PreviewRoomSceneType2SubLvls
// Size: 0x20 (Inherited: 0x8)
struct FPreviewRoomSceneType2SubLvls : FTableRowBase
{
	EPreviewRoomSceneType SceneType; // 0x8(0x1)
	uint8_t Pad_0x9[0x7]; // 0x9(0x7)
	struct FPreviewRoomSceneAssetPath SubLvls; // 0x10(0x10)
};

// Object: ScriptStruct Hall.HallSettlementSnapshotCandidate
// Size: 0x20 (Inherited: 0x0)
struct FHallSettlementSnapshotCandidate
{
	struct AHallCharacter* CHARACTER; // 0x0(0x8)
	struct UTextureRenderTarget2D* RenderTarget; // 0x8(0x8)
	struct USceneCaptureComponent2D* SceneCaptureComponent; // 0x10(0x8)
	struct UMaterialBillboardComponent* MaterialBillboardComponent; // 0x18(0x8)
};

// Object: ScriptStruct Hall.UIFollowInfo
// Size: 0x10 (Inherited: 0x0)
struct FUIFollowInfo
{
	struct TWeakObjectPtr<struct UUserWidget> UserWidget; // 0x0(0x8)
	struct TWeakObjectPtr<struct AActor> TargetPos; // 0x8(0x8)
};

// Object: ScriptStruct Hall.SandBoxMapCamConfig
// Size: 0x30 (Inherited: 0x0)
struct FSandBoxMapCamConfig
{
	struct TWeakObjectPtr<struct AActor> TargetPos; // 0x0(0x8)
	struct TWeakObjectPtr<struct ACameraActor> TargetCamera; // 0x8(0x8)
	struct TArray<struct TWeakObjectPtr<struct AActor>> SubLevels; // 0x10(0x10)
	struct ULevelSequence* POIToDetailSeq; // 0x20(0x8)
	struct ULevelSequence* DetailToPOISeq; // 0x28(0x8)
};

// Object: Class Hall.HallDisplayCtrlBase
// Size: 0x388 (Inherited: 0x370)
struct AHallDisplayCtrlBase : AActor
{
	DEFINE_UE_CLASS_HELPERS(AHallDisplayCtrlBase, "HallDisplayCtrlBase")

	struct FName HallDisplayTypeStr; // 0x370(0x8)
	float fPureModeAspectRatio; // 0x378(0x4)
	uint8_t Pad_0x37C[0xC]; // 0x37C(0xC)

	// Object: Function Hall.HallDisplayCtrlBase.OnDisplayCtrlUnInit
	// Flags: [Native|Public]
	// Offset: 0x15519148
	// Params: [ Num(0) Size(0x0) ]
	void OnDisplayCtrlUnInit();

	// Object: Function Hall.HallDisplayCtrlBase.OnDisplayCtrlInit
	// Flags: [Native|Public]
	// Offset: 0x1551912c
	// Params: [ Num(0) Size(0x0) ]
	void OnDisplayCtrlInit();

	// Object: Function Hall.HallDisplayCtrlBase.HandleScaleByGamepad
	// Flags: [Native|Public]
	// Offset: 0x15519080
	// Params: [ Num(1) Size(0x4) ]
	void HandleScaleByGamepad(float InValue);

	// Object: Function Hall.HallDisplayCtrlBase.HandleRotationByGamepad
	// Flags: [Native|Public|HasDefaults]
	// Offset: 0x15518fd8
	// Params: [ Num(1) Size(0x8) ]
	void HandleRotationByGamepad(struct FVector2D RotationVertor);

	// Object: Function Hall.HallDisplayCtrlBase.HandleItemRotation
	// Flags: [Native|Public]
	// Offset: 0x15518fbc
	// Params: [ Num(0) Size(0x0) ]
	void HandleItemRotation();
};

// Object: Class Hall.HallLobbyDisplayCtrl
// Size: 0x518 (Inherited: 0x388)
struct AHallLobbyDisplayCtrl : AHallDisplayCtrlBase
{
	DEFINE_UE_CLASS_HELPERS(AHallLobbyDisplayCtrl, "HallLobbyDisplayCtrl")

	uint8_t Pad_0x388[0x8]; // 0x388(0x8)
	struct FMulticastInlineDelegate OnHallLobbySeqFinishedEvent; // 0x390(0x10)
	struct UHallCameraCtrlComponentBase* CameraCtrlComponent; // 0x3A0(0x8)
	struct UHallCharacterCtrlComponentBase* CharacterCtrlComponent; // 0x3A8(0x8)
	struct UHallSceneVideoPlayerComponent* SceneVideoPlayerComponent; // 0x3B0(0x8)
	struct UHallCharacterVoiceComponent* HallCharacterVoiceComponent; // 0x3B8(0x8)
	struct UHallCharacterVoiceComponent* HallCharacterVoiceComponent1; // 0x3C0(0x8)
	struct UHallCharacterVoiceComponent* HallCharacterVoiceComponent2; // 0x3C8(0x8)
	struct UHallCharacterVoiceComponent* HallCharacterVoiceComponent3; // 0x3D0(0x8)
	struct TMap<struct FName, struct FHallDisplayInfoBase> DiplayInfoMap; // 0x3D8(0x50)
	struct TSoftObjectPtr<UBinkMediaTexture> MediaTexture; // 0x428(0x28)
	struct FLobbySeqInfo HallLobbySeq; // 0x450(0x40)
	struct FMulticastInlineDelegate OnWindowActive; // 0x490(0x10)
	struct FMulticastInlineDelegate OnHallLobbyAnimSeqLoaded; // 0x4A0(0x10)
	struct FSoftObjectPath ScreenMaterialPath; // 0x4B0(0x18)
	struct FMulticastInlineDelegate OnLobbyScreenMaterialLoadComplete; // 0x4C8(0x10)
	uint8_t Pad_0x4D8[0x40]; // 0x4D8(0x40)

	// Object: Function Hall.HallLobbyDisplayCtrl.UnequipByEquipmentType
	// Flags: [Final|Native|Public|HasOutParms]
	// Offset: 0x15520ed0
	// Params: [ Num(2) Size(0x5) ]
	void UnequipByEquipmentType(const int32_t& InSlotId, EEquipmentType EquipmentType);

	// Object: Function Hall.HallLobbyDisplayCtrl.Unequip
	// Flags: [Final|Native|Public|HasOutParms]
	// Offset: 0xfd5e6d4
	// Params: [ Num(2) Size(0xC) ]
	void Unequip(const int32_t& InSlotId, struct FName ItemID);

	// Object: Function Hall.HallLobbyDisplayCtrl.SwitchCurrentLightGroupVolumn
	// Flags: [Final|Native|Public]
	// Offset: 0xff5f25c
	// Params: [ Num(2) Size(0x9) ]
	void SwitchCurrentLightGroupVolumn(struct FName LightGroupName, uint8_t bSwitchToLarger);

	// Object: Function Hall.HallLobbyDisplayCtrl.StopSceneVideo
	// Flags: [Final|Native|Public]
	// Offset: 0xfabdd7c
	// Params: [ Num(0) Size(0x0) ]
	void StopSceneVideo();

	// Object: Function Hall.HallLobbyDisplayCtrl.ShowSceneTexture
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults]
	// Offset: 0x15520e10
	// Params: [ Num(1) Size(0x18) ]
	void ShowSceneTexture(const struct FSoftObjectPath& ImagePath);

	// Object: Function Hall.HallLobbyDisplayCtrl.SetSceneTexture
	// Flags: [Final|Native|Public]
	// Offset: 0xfa7a8ec
	// Params: [ Num(1) Size(0x8) ]
	void SetSceneTexture(struct FName TextureName);

	// Object: Function Hall.HallLobbyDisplayCtrl.SetDisplayType
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xf7d8d90
	// Params: [ Num(1) Size(0x10) ]
	void SetDisplayType(struct FString InDisplayType);

	// Object: Function Hall.HallLobbyDisplayCtrl.SetCharacterLookAtCamera
	// Flags: [Final|Native|Public|HasOutParms]
	// Offset: 0x15520d5c
	// Params: [ Num(1) Size(0x4) ]
	void SetCharacterLookAtCamera(const int32_t& InSlotId);

	// Object: Function Hall.HallLobbyDisplayCtrl.SetCharacterEquipWeapon
	// Flags: [Final|Native|Public]
	// Offset: 0xf94bb48
	// Params: [ Num(2) Size(0xC) ]
	void SetCharacterEquipWeapon(struct UModularWeaponDesc* WeaponDesc, int32_t InSlotId);

	// Object: Function Hall.HallLobbyDisplayCtrl.SetCharacterAvatar
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xfaa4cfc
	// Params: [ Num(2) Size(0x14) ]
	void SetCharacterAvatar(struct FString InAvatarId, int32_t InSlotId);

	// Object: Function Hall.HallLobbyDisplayCtrl.SetAutoDownloadModuleCategory
	// Flags: [Final|Native|Public]
	// Offset: 0x15520c78
	// Params: [ Num(2) Size(0x5) ]
	void SetAutoDownloadModuleCategory(int32_t InSlotId, uint8_t bAutoDownload);

	// Object: Function Hall.HallLobbyDisplayCtrl.ResetSceneTexture
	// Flags: [Final|Native|Public]
	// Offset: 0xfae5e70
	// Params: [ Num(0) Size(0x0) ]
	void ResetSceneTexture();

	// Object: Function Hall.HallLobbyDisplayCtrl.RemoveCharacterAvatar
	// Flags: [Final|Native|Public|HasOutParms]
	// Offset: 0xf8ada94
	// Params: [ Num(1) Size(0x4) ]
	void RemoveCharacterAvatar(const int32_t& InSlotId);

	// Object: Function Hall.HallLobbyDisplayCtrl.RefreshCharacterPosBySlot
	// Flags: [Final|Native|Public|HasOutParms]
	// Offset: 0x15520bc4
	// Params: [ Num(1) Size(0x4) ]
	void RefreshCharacterPosBySlot(const int32_t& InSlotId);

	// Object: Function Hall.HallLobbyDisplayCtrl.PlaySceneVideo
	// Flags: [Final|Native|Public]
	// Offset: 0xf98d9f0
	// Params: [ Num(1) Size(0x8) ]
	void PlaySceneVideo(struct FName VedioName);

	// Object: Function Hall.HallLobbyDisplayCtrl.PlayHeroVoice
	// Flags: [Final|Native|Public]
	// Offset: 0x15520a08
	// Params: [ Num(3) Size(0x24) ]
	void PlayHeroVoice(struct FString InAvatarId, struct FString InMarkedLabel, int32_t InSlot);

	// Object: Function Hall.HallLobbyDisplayCtrl.PlayHallLobbySeq
	// Flags: [Final|Native|Public]
	// Offset: 0x155209f4
	// Params: [ Num(0) Size(0x0) ]
	void PlayHallLobbySeq();

	// Object: Function Hall.HallLobbyDisplayCtrl.OnMovieSceneSequencePlayerEventFinished
	// Flags: [Final|Native|Public]
	// Offset: 0x155209e0
	// Params: [ Num(0) Size(0x0) ]
	void OnMovieSceneSequencePlayerEventFinished();

	// Object: DelegateFunction Hall.HallLobbyDisplayCtrl.OnHallLobbySeqFinished__DelegateSignature
	// Flags: [MulticastDelegate|Public|Delegate]
	// Offset: 0x101d2e88
	// Params: [ Num(0) Size(0x0) ]
	void OnHallLobbySeqFinished__DelegateSignature();

	// Object: Function Hall.HallLobbyDisplayCtrl.GetHallCharacterVoiceComponentBySlot
	// Flags: [Final|Native|Public|HasOutParms]
	// Offset: 0x15520924
	// Params: [ Num(2) Size(0x10) ]
	struct UHallCharacterVoiceComponent* GetHallCharacterVoiceComponentBySlot(const int32_t& InSlot);

	// Object: Function Hall.HallLobbyDisplayCtrl.GetCharacterLocationBySlot
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults]
	// Offset: 0x15520864
	// Params: [ Num(2) Size(0x10) ]
	struct FVector GetCharacterLocationBySlot(const int32_t& InSlotId);

	// Object: Function Hall.HallLobbyDisplayCtrl.GetCharacterBySlotId
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0xf90027c
	// Params: [ Num(2) Size(0x10) ]
	struct AHallCharacter* GetCharacterBySlotId(const int32_t& InSlotId);

	// Object: Function Hall.HallLobbyDisplayCtrl.Equip
	// Flags: [Final|Native|Public|HasOutParms]
	// Offset: 0x15520774
	// Params: [ Num(2) Size(0xC) ]
	void Equip(const int32_t& InSlotId, struct FName ItemID);

	// Object: Function Hall.HallLobbyDisplayCtrl.DestoryCharcter
	// Flags: [Final|Native|Public]
	// Offset: 0xf8febf0
	// Params: [ Num(0) Size(0x0) ]
	void DestoryCharcter();

	// Object: Function Hall.HallLobbyDisplayCtrl.CloseHallLobbySeq
	// Flags: [Final|Native|Public]
	// Offset: 0x1098bbd8
	// Params: [ Num(0) Size(0x0) ]
	void CloseHallLobbySeq();
};

// Object: Class Hall.HallArenaLobbyDisplayCtrl
// Size: 0x528 (Inherited: 0x518)
struct AHallArenaLobbyDisplayCtrl : AHallLobbyDisplayCtrl
{
	DEFINE_UE_CLASS_HELPERS(AHallArenaLobbyDisplayCtrl, "HallArenaLobbyDisplayCtrl")

	struct UMaterialInstanceDynamic* DynamicMaterialInstance; // 0x518(0x8)
	struct AActor* ScoreboardActor; // 0x520(0x8)

	// Object: Function Hall.HallArenaLobbyDisplayCtrl.SetScoreNum2
	// Flags: [Final|Native|Public]
	// Offset: 0x15510648
	// Params: [ Num(1) Size(0x4) ]
	void SetScoreNum2(int32_t Num);

	// Object: Function Hall.HallArenaLobbyDisplayCtrl.SetScoreNum1
	// Flags: [Final|Native|Public]
	// Offset: 0x155105a4
	// Params: [ Num(1) Size(0x4) ]
	void SetScoreNum1(int32_t Num);
};

// Object: Class Hall.HallArmoryDisplayCtrl
// Size: 0x550 (Inherited: 0x388)
struct AHallArmoryDisplayCtrl : AHallDisplayCtrlBase
{
	DEFINE_UE_CLASS_HELPERS(AHallArmoryDisplayCtrl, "HallArmoryDisplayCtrl")

	struct UHallWeaponDisplayComponent* HallWeaponDisplayComponent; // 0x388(0x8)
	struct UHallCameraCtrlComponentBase* CameraCtrlComponent; // 0x390(0x8)
	struct UHallGeneralRotateComponent* GeneralRotateComponent; // 0x398(0x8)
	struct UHallItemDisplayComponent* ItemDisplayComponent; // 0x3A0(0x8)
	uint8_t Pad_0x3A8[0x18]; // 0x3A8(0x18)
	struct AActor* TouchedActor; // 0x3C0(0x8)
	struct TArray<struct AActor*> FogActors; // 0x3C8(0x10)
	uint8_t Pad_0x3D8[0x90]; // 0x3D8(0x90)
	struct TArray<struct FSoftObjectPath> BoardBGMatPaths; // 0x468(0x10)
	struct TMap<struct FString, struct FHallDisplayInfoBase> DisplayInfoMap; // 0x478(0x50)
	uint8_t bCanInteract : 1; // 0x4C8(0x1), Mask(0x1)
	uint8_t BitPad_0x4C8_1 : 7; // 0x4C8(0x1)
	uint8_t Pad_0x4C9[0x7]; // 0x4C9(0x7)
	struct FMulticastInlineDelegate OnTouchPressedSignature; // 0x4D0(0x10)
	struct FMulticastInlineDelegate OnWeaponDisplayedSignature; // 0x4E0(0x10)
	uint8_t bReboundEnable : 1; // 0x4F0(0x1), Mask(0x1)
	uint8_t BitPad_0x4F0_1 : 7; // 0x4F0(0x1)
	uint8_t Pad_0x4F1[0x7]; // 0x4F1(0x7)
	struct TMap<EWeaponItemType, int32_t> WeaponTypeMaxScaleMap; // 0x4F8(0x50)
	uint8_t bModifyCameraScaleEnable : 1; // 0x548(0x1), Mask(0x1)
	uint8_t BitPad_0x548_1 : 7; // 0x548(0x1)
	uint8_t Pad_0x549[0x3]; // 0x549(0x3)
	float ZoomSensitivity; // 0x54C(0x4)

	// Object: Function Hall.HallArmoryDisplayCtrl.SetWheelInteract
	// Flags: [Final|Native|Public]
	// Offset: 0x15511170
	// Params: [ Num(1) Size(0x1) ]
	void SetWheelInteract(uint8_t InCanInteract);

	// Object: Function Hall.HallArmoryDisplayCtrl.SetUseBowWeapon
	// Flags: [Final|Native|Public]
	// Offset: 0x155110c4
	// Params: [ Num(1) Size(0x1) ]
	void SetUseBowWeapon(uint8_t isUseBowWeapon);

	// Object: Function Hall.HallArmoryDisplayCtrl.SetScaleMinAndMax
	// Flags: [Final|Native|Public]
	// Offset: 0x15510fe8
	// Params: [ Num(2) Size(0x8) ]
	void SetScaleMinAndMax(float Min, float Max);

	// Object: Function Hall.HallArmoryDisplayCtrl.SetReboundActive
	// Flags: [Final|Native|Public]
	// Offset: 0x15510f3c
	// Params: [ Num(1) Size(0x1) ]
	void SetReboundActive(uint8_t bReboundActive);

	// Object: Function Hall.HallArmoryDisplayCtrl.SetIsAdapter
	// Flags: [Final|Native|Public]
	// Offset: 0x15510e90
	// Params: [ Num(1) Size(0x1) ]
	void SetIsAdapter(uint8_t IsAdapter);

	// Object: Function Hall.HallArmoryDisplayCtrl.SetEnableTrans
	// Flags: [Final|Native|Public]
	// Offset: 0x15510de4
	// Params: [ Num(1) Size(0x1) ]
	void SetEnableTrans(uint8_t bEnableTrans);

	// Object: Function Hall.HallArmoryDisplayCtrl.SetDisplayWeaponAutoBoundAdapter
	// Flags: [Final|Native|Public]
	// Offset: 0x15510c80
	// Params: [ Num(4) Size(0x12) ]
	void SetDisplayWeaponAutoBoundAdapter(struct UModularWeaponDesc* WeaponDesc, uint64_t WeaponID, uint8_t bSwitchCameraEnabled, uint8_t IsMeleeWeapon);

	// Object: Function Hall.HallArmoryDisplayCtrl.SetDisplayWeapon
	// Flags: [Final|Native|Public]
	// Offset: 0x15510b1c
	// Params: [ Num(4) Size(0x12) ]
	void SetDisplayWeapon(struct UModularWeaponDesc* WeaponDesc, uint64_t WeaponID, uint8_t IsMeleeWeapon, uint8_t bSwitchCameraEnabled);

	// Object: Function Hall.HallArmoryDisplayCtrl.SetDisplayType
	// Flags: [Final|Native|Public]
	// Offset: 0x15510a24
	// Params: [ Num(1) Size(0x10) ]
	void SetDisplayType(struct FString InDisplayType);

	// Object: Function Hall.HallArmoryDisplayCtrl.SetDisplayItem
	// Flags: [Final|Native|Public]
	// Offset: 0x15510978
	// Params: [ Num(1) Size(0x10) ]
	void SetDisplayItem(struct FString InItemID);

	// Object: Function Hall.HallArmoryDisplayCtrl.SetCanInteractState
	// Flags: [Final|Native|Public]
	// Offset: 0x155108cc
	// Params: [ Num(1) Size(0x1) ]
	void SetCanInteractState(uint8_t InCanInteract);

	// Object: Function Hall.HallArmoryDisplayCtrl.ResetWeapon
	// Flags: [Final|Native|Public]
	// Offset: 0x155108b8
	// Params: [ Num(0) Size(0x0) ]
	void ResetWeapon();

	// Object: Function Hall.HallArmoryDisplayCtrl.OnDisplayWeaponSet
	// Flags: [Final|Native|Public]
	// Offset: 0x1551080c
	// Params: [ Num(1) Size(0x1) ]
	void OnDisplayWeaponSet(uint8_t bIsMelee);

	// Object: Function Hall.HallArmoryDisplayCtrl.GetWeaponActor
	// Flags: [Final|Native|Public]
	// Offset: 0x155107d8
	// Params: [ Num(1) Size(0x8) ]
	struct AActor* GetWeaponActor();

	// Object: Function Hall.HallArmoryDisplayCtrl.GetOnTouchPressed
	// Flags: [Final|Native|Public]
	// Offset: 0x15510754
	// Params: [ Num(1) Size(0x10) ]
	struct FMulticastInlineDelegate GetOnTouchPressed();

	// Object: Function Hall.HallArmoryDisplayCtrl.GetDisplayTargetActor
	// Flags: [Final|Native|Public]
	// Offset: 0x15510720
	// Params: [ Num(1) Size(0x8) ]
	struct AActor* GetDisplayTargetActor();

	// Object: Function Hall.HallArmoryDisplayCtrl.DestroyItem
	// Flags: [Final|Native|Public]
	// Offset: 0x1551070c
	// Params: [ Num(0) Size(0x0) ]
	void DestroyItem();
};

// Object: Class Hall.HallBattlePassDisplayCtrl
// Size: 0x440 (Inherited: 0x388)
struct AHallBattlePassDisplayCtrl : AHallDisplayCtrlBase
{
	DEFINE_UE_CLASS_HELPERS(AHallBattlePassDisplayCtrl, "HallBattlePassDisplayCtrl")

	struct UHallCameraCtrlComponentBase* CameraCtrlComponent; // 0x388(0x8)
	struct UHallWeaponDisplayComponent* WeaponDisplayComponent; // 0x390(0x8)
	struct UHallWeaponDisplayComponent* HeroWeaponDisplayComponent; // 0x398(0x8)
	struct UHallItemDisplayComponent* BreastPlateDisplayComponent; // 0x3A0(0x8)
	struct UHallItemDisplayComponent* BagDisplayComponent; // 0x3A8(0x8)
	struct UHallItemDisplayComponent* ChestHangingDisplayComponent; // 0x3B0(0x8)
	struct UHallItemDisplayComponent* ItemDisplayComponentPendant; // 0x3B8(0x8)
	struct UHallItemDisplayComponent* ItemDisplayComponentHelmet; // 0x3C0(0x8)
	struct UHallItemDisplayComponent* ItemDisplayComponentMedicine; // 0x3C8(0x8)
	struct UHallItemDisplayComponent* ItemDisplayComponentHeroProp; // 0x3D0(0x8)
	struct UHallSceneVideoPlayerComponent* VideoDisplayComponent; // 0x3D8(0x8)
	struct TMap<struct FName, struct FHallDisplayInfoBase> DisplayInfoMap; // 0x3E0(0x50)
	uint8_t Pad_0x430[0x8]; // 0x430(0x8)
	struct FName CustomDisplayType; // 0x438(0x8)

	// Object: Function Hall.HallBattlePassDisplayCtrl.StopVideo
	// Flags: [Final|Native|Public]
	// Offset: 0x1551201c
	// Params: [ Num(0) Size(0x0) ]
	void StopVideo();

	// Object: Function Hall.HallBattlePassDisplayCtrl.SetDisplayWeapon
	// Flags: [Final|Native|Public]
	// Offset: 0x15511ef8
	// Params: [ Num(3) Size(0x18) ]
	void SetDisplayWeapon(struct UModularWeaponDesc* WeaponDesc, uint8_t IsMeleeWeapon, int64_t UINameID);

	// Object: Function Hall.HallBattlePassDisplayCtrl.SetDisplayTypeByParam
	// Flags: [Final|Native|Public|HasDefaults]
	// Offset: 0x15511d48
	// Params: [ Num(3) Size(0x50) ]
	void SetDisplayTypeByParam(struct FString DisplayType, uint8_t bImmediately, struct FTransform Transform);

	// Object: Function Hall.HallBattlePassDisplayCtrl.SetDisplayType
	// Flags: [Final|Native|Public]
	// Offset: 0x15511c50
	// Params: [ Num(1) Size(0x10) ]
	void SetDisplayType(struct FString DisplayType);

	// Object: Function Hall.HallBattlePassDisplayCtrl.SetDisplayItemPendant
	// Flags: [Final|Native|Public]
	// Offset: 0x15511bac
	// Params: [ Num(1) Size(0x8) ]
	void SetDisplayItemPendant(uint64_t InItemID);

	// Object: Function Hall.HallBattlePassDisplayCtrl.SetDisplayItemMedicinel
	// Flags: [Final|Native|Public]
	// Offset: 0x15511b08
	// Params: [ Num(1) Size(0x8) ]
	void SetDisplayItemMedicinel(uint64_t InItemID);

	// Object: Function Hall.HallBattlePassDisplayCtrl.SetDisplayItemHeroProp
	// Flags: [Final|Native|Public]
	// Offset: 0x15511a64
	// Params: [ Num(1) Size(0x8) ]
	void SetDisplayItemHeroProp(uint64_t InItemID);

	// Object: Function Hall.HallBattlePassDisplayCtrl.SetDisplayItemHelmet
	// Flags: [Final|Native|Public]
	// Offset: 0x155119c0
	// Params: [ Num(1) Size(0x8) ]
	void SetDisplayItemHelmet(uint64_t InItemID);

	// Object: Function Hall.HallBattlePassDisplayCtrl.SetDisplayHeroWeapon
	// Flags: [Final|Native|Public]
	// Offset: 0x1551189c
	// Params: [ Num(3) Size(0x18) ]
	void SetDisplayHeroWeapon(struct UModularWeaponDesc* WeaponDesc, uint8_t IsMeleeWeapon, int64_t UINameID);

	// Object: Function Hall.HallBattlePassDisplayCtrl.SetDisplayChestHanging
	// Flags: [Final|Native|Public]
	// Offset: 0x155117f8
	// Params: [ Num(1) Size(0x8) ]
	void SetDisplayChestHanging(uint64_t InItemID);

	// Object: Function Hall.HallBattlePassDisplayCtrl.SetDisplayBreastPlate
	// Flags: [Final|Native|Public]
	// Offset: 0x15511754
	// Params: [ Num(1) Size(0x8) ]
	void SetDisplayBreastPlate(uint64_t InItemID);

	// Object: Function Hall.HallBattlePassDisplayCtrl.SetDisplayBag
	// Flags: [Final|Native|Public]
	// Offset: 0x155116b0
	// Params: [ Num(1) Size(0x8) ]
	void SetDisplayBag(uint64_t InItemID);

	// Object: Function Hall.HallBattlePassDisplayCtrl.SetActorHiddenInGameByTag
	// Flags: [Final|Native|Public]
	// Offset: 0x15511574
	// Params: [ Num(2) Size(0x11) ]
	void SetActorHiddenInGameByTag(struct FString sTag, uint8_t bVisible);

	// Object: Function Hall.HallBattlePassDisplayCtrl.ResetDisplayWeapon
	// Flags: [Final|Native|Public]
	// Offset: 0x15511560
	// Params: [ Num(0) Size(0x0) ]
	void ResetDisplayWeapon();

	// Object: Function Hall.HallBattlePassDisplayCtrl.ResetDisplayHeroWeapon
	// Flags: [Final|Native|Public]
	// Offset: 0x1551154c
	// Params: [ Num(0) Size(0x0) ]
	void ResetDisplayHeroWeapon();

	// Object: Function Hall.HallBattlePassDisplayCtrl.PlayVideo
	// Flags: [Final|Native|Public]
	// Offset: 0x15511454
	// Params: [ Num(1) Size(0x10) ]
	void PlayVideo(struct FString InMediaID);

	// Object: Function Hall.HallBattlePassDisplayCtrl.GetDisplayType
	// Flags: [Final|Native|Public]
	// Offset: 0x155113bc
	// Params: [ Num(1) Size(0x10) ]
	struct FString GetDisplayType();

	// Object: Function Hall.HallBattlePassDisplayCtrl.DestroyItemMedicine
	// Flags: [Final|Native|Public]
	// Offset: 0x155113a8
	// Params: [ Num(0) Size(0x0) ]
	void DestroyItemMedicine();

	// Object: Function Hall.HallBattlePassDisplayCtrl.DestroyItemHeroProp
	// Flags: [Final|Native|Public]
	// Offset: 0x15511394
	// Params: [ Num(0) Size(0x0) ]
	void DestroyItemHeroProp();

	// Object: Function Hall.HallBattlePassDisplayCtrl.DestroyItemHelmet
	// Flags: [Final|Native|Public]
	// Offset: 0x15511380
	// Params: [ Num(0) Size(0x0) ]
	void DestroyItemHelmet();
};

// Object: Class Hall.HallCameraCtrlComponentBase
// Size: 0x280 (Inherited: 0xF8)
struct UHallCameraCtrlComponentBase : UActorComponent
{
	DEFINE_UE_CLASS_HELPERS(UHallCameraCtrlComponentBase, "HallCameraCtrlComponentBase")

	struct FMulticastInlineDelegate HallCameraMovedDone; // 0xF8(0x10)
	uint8_t bAdjustCameraFOV : 1; // 0x108(0x1), Mask(0x1)
	uint8_t BitPad_0x108_1 : 7; // 0x108(0x1)
	uint8_t Pad_0x109[0x3]; // 0x109(0x3)
	float MaxViewportScale; // 0x10C(0x4)
	float MinViewportScale; // 0x110(0x4)
	float MaxCameraFOV; // 0x114(0x4)
	float MinCameraFOV; // 0x118(0x4)
	uint8_t Pad_0x11C[0x4]; // 0x11C(0x4)
	struct ACameraActor* CustomViewTargetActor; // 0x120(0x8)
	struct ACineCameraActor* CustomCineCameraActor; // 0x128(0x8)
	uint8_t Pad_0x130[0x10]; // 0x130(0x10)
	struct TWeakObjectPtr<struct ASceneCapture2D> SceneCapture; // 0x140(0x8)
	struct USceneCaptureComponent2D* SceneCaptureComp; // 0x148(0x8)
	struct AActor* HallTargetActor; // 0x150(0x8)
	uint8_t Pad_0x158[0x18]; // 0x158(0x18)
	struct AActor* CachedTouchedActor; // 0x170(0x8)
	uint8_t Pad_0x178[0x38]; // 0x178(0x38)
	struct AActor* CameraPivotActor; // 0x1B0(0x8)
	uint8_t Pad_0x1B8[0x18]; // 0x1B8(0x18)
	struct TWeakObjectPtr<struct AActor> SeqCameraPoint; // 0x1D0(0x8)
	struct TWeakObjectPtr<struct ACameraActor> CameraCustom; // 0x1D8(0x8)
	float RotateYawCameraVel; // 0x1E0(0x4)
	float RotatePitchCameraVel; // 0x1E4(0x4)
	uint8_t bRotateLagEnabled : 1; // 0x1E8(0x1), Mask(0x1)
	uint8_t BitPad_0x1E8_1 : 7; // 0x1E8(0x1)
	uint8_t Pad_0x1E9[0x3]; // 0x1E9(0x3)
	float RotateInterpSpeed; // 0x1EC(0x4)
	uint8_t Pad_0x1F0[0x1]; // 0x1F0(0x1)
	uint8_t bCharacterLookAtEnable : 1; // 0x1F1(0x1), Mask(0x1)
	uint8_t BitPad_0x1F1_1 : 7; // 0x1F1(0x1)
	uint8_t Pad_0x1F2[0x2]; // 0x1F2(0x2)
	float ReboundTransitionLastTime; // 0x1F4(0x4)
	uint8_t Pad_0x1F8[0x70]; // 0x1F8(0x70)
	struct AActor* CurrTargetActor; // 0x268(0x8)
	uint8_t Pad_0x270[0x10]; // 0x270(0x10)

	// Object: Function Hall.HallCameraCtrlComponentBase.SetCustonViewTarget
	// Flags: [Final|Native|Public]
	// Offset: 0x155120d0
	// Params: [ Num(0) Size(0x0) ]
	void SetCustonViewTarget();

	// Object: Function Hall.HallCameraCtrlComponentBase.GetCustomViewTarget
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x1551209c
	// Params: [ Num(1) Size(0x8) ]
	struct ACameraActor* GetCustomViewTarget();

	// Object: Function Hall.HallCameraCtrlComponentBase.GetCustomCineCamera
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x15512068
	// Params: [ Num(1) Size(0x8) ]
	struct ACineCameraActor* GetCustomCineCamera();
};

// Object: Class Hall.HallCharacter
// Size: 0x890 (Inherited: 0x7C0)
struct AHallCharacter : AHallCharacterBase
{
	DEFINE_UE_CLASS_HELPERS(AHallCharacter, "HallCharacter")

	struct FMulticastInlineDelegate HallCharacterSetup; // 0x7C0(0x10)
	struct FMulticastInlineDelegate HallCharacterStartSetup; // 0x7D0(0x10)
	struct FMulticastInlineDelegate HallCharacterDestroy; // 0x7E0(0x10)
	struct UHallCharacterAppearanceProxyComponent* AppearanceProxyComponent; // 0x7F0(0x8)
	struct UHallCharacterWeaponComponent* WeaponComponent; // 0x7F8(0x8)
	uint8_t Pad_0x800[0x8]; // 0x800(0x8)
	struct FMulticastInlineDelegate OnHallCharacterAnimPlayEnd; // 0x808(0x10)
	struct FMulticastInlineDelegate OnHallCharacterAnimSetChanged; // 0x818(0x10)
	uint8_t bDefaultTickable : 1; // 0x828(0x1), Mask(0x1)
	uint8_t BitPad_0x828_1 : 7; // 0x828(0x1)
	uint8_t Pad_0x829[0x67]; // 0x829(0x67)

	// Object: Function Hall.HallCharacter.UnequipWeapon
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x10aad990
	// Params: [ Num(0) Size(0x0) ]
	void UnequipWeapon();

	// Object: Function Hall.HallCharacter.SetUseSimpleFaceAnim
	// Flags: [Final|Native|Public]
	// Offset: 0x155133c0
	// Params: [ Num(1) Size(0x1) ]
	void SetUseSimpleFaceAnim(uint8_t bUseSimpleFaceAnim);

	// Object: Function Hall.HallCharacter.SetUseResolveObject
	// Flags: [Final|Native|Public]
	// Offset: 0x15513314
	// Params: [ Num(1) Size(0x1) ]
	void SetUseResolveObject(uint8_t InIsUseResolveObject);

	// Object: Function Hall.HallCharacter.SetSuitAvatarWithSequence
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x15513270
	// Params: [ Num(1) Size(0x8) ]
	void SetSuitAvatarWithSequence(struct FName ItemID);

	// Object: Function Hall.HallCharacter.SetSettlementTeamCharacterPosId
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x155131cc
	// Params: [ Num(1) Size(0x4) ]
	void SetSettlementTeamCharacterPosId(int32_t PosId);

	// Object: Function Hall.HallCharacter.SetSettlementCharacterPosId
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x101bdfa4
	// Params: [ Num(1) Size(0x4) ]
	void SetSettlementCharacterPosId(int32_t PosId);

	// Object: Function Hall.HallCharacter.SetRotation
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable]
	// Offset: 0x1551311c
	// Params: [ Num(1) Size(0xC) ]
	void SetRotation(const struct FRotator& TargetRot);

	// Object: Function Hall.HallCharacter.SetPrisonerState
	// Flags: [Final|Native|Public]
	// Offset: 0x15513070
	// Params: [ Num(1) Size(0x1) ]
	void SetPrisonerState(uint8_t bInIsPrisoner);

	// Object: Function Hall.HallCharacter.SetNotUseFaceAnim
	// Flags: [Final|Native|Public]
	// Offset: 0x15512fc4
	// Params: [ Num(1) Size(0x1) ]
	void SetNotUseFaceAnim(uint8_t bNotUseFaceAnim);

	// Object: Function Hall.HallCharacter.SetMainFlowHallPosId
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xfe40c18
	// Params: [ Num(2) Size(0x5) ]
	void SetMainFlowHallPosId(int32_t PosId, uint8_t PlayShow);

	// Object: Function Hall.HallCharacter.SetLookAtWeight
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x15512f20
	// Params: [ Num(1) Size(0x4) ]
	void SetLookAtWeight(float Weight);

	// Object: Function Hall.HallCharacter.SetLookAtTarget
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x15512e7c
	// Params: [ Num(1) Size(0xC) ]
	void SetLookAtTarget(struct FVector Target);

	// Object: Function Hall.HallCharacter.SetLookAtState
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x15512dd0
	// Params: [ Num(1) Size(0x1) ]
	void SetLookAtState(uint8_t State);

	// Object: Function Hall.HallCharacter.SetLookAtSpeedStrength
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x15512d2c
	// Params: [ Num(1) Size(0x4) ]
	void SetLookAtSpeedStrength(float Strength);

	// Object: Function Hall.HallCharacter.SetLocation
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable]
	// Offset: 0x15512c7c
	// Params: [ Num(1) Size(0xC) ]
	void SetLocation(const struct FVector& TargetLoc);

	// Object: Function Hall.HallCharacter.SetExtraSkillItemHiddenInGame
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x15512bd0
	// Params: [ Num(1) Size(0x1) ]
	void SetExtraSkillItemHiddenInGame(uint8_t IsHidden);

	// Object: Function Hall.HallCharacter.SetExtraPartMeshForceLOD
	// Flags: [Final|Native|Public]
	// Offset: 0x15512b2c
	// Params: [ Num(1) Size(0x4) ]
	void SetExtraPartMeshForceLOD(int32_t InForceID);

	// Object: Function Hall.HallCharacter.SetExtraPartMeshCastShadow
	// Flags: [Final|Native|Public]
	// Offset: 0x15512a80
	// Params: [ Num(1) Size(0x1) ]
	void SetExtraPartMeshCastShadow(uint8_t bCastShadow);

	// Object: Function Hall.HallCharacter.SetEquipWeaponShowState
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x155129d4
	// Params: [ Num(1) Size(0x1) ]
	void SetEquipWeaponShowState(uint8_t State);

	// Object: Function Hall.HallCharacter.SetEquipTakeAwayShowState
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x15512928
	// Params: [ Num(1) Size(0x1) ]
	void SetEquipTakeAwayShowState(uint8_t State);

	// Object: Function Hall.HallCharacter.SetCharacterAnimStateMechine
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xfa91740
	// Params: [ Num(1) Size(0x10) ]
	void SetCharacterAnimStateMechine(struct FString StateMechine);

	// Object: Function Hall.HallCharacter.SetCharacterAnimState
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x101a932c
	// Params: [ Num(1) Size(0x10) ]
	void SetCharacterAnimState(struct FString State);

	// Object: Function Hall.HallCharacter.SetCharacterAnimationState
	// Flags: [Final|Native|Public]
	// Offset: 0x155127a8
	// Params: [ Num(2) Size(0x20) ]
	void SetCharacterAnimationState(struct FString TargetStateTypeName, struct FString AnimMachineStateName);

	// Object: Function Hall.HallCharacter.SetBodyShapeShiftTypeByFashionId
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xfbe2b74
	// Params: [ Num(1) Size(0x8) ]
	void SetBodyShapeShiftTypeByFashionId(struct FName InFashionId);

	// Object: Function Hall.HallCharacter.SetAvatarByFString
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x155126b0
	// Params: [ Num(1) Size(0x10) ]
	void SetAvatarByFString(struct FString InAvatarId);

	// Object: Function Hall.HallCharacter.ResetRotation
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x1551269c
	// Params: [ Num(0) Size(0x0) ]
	void ResetRotation();

	// Object: Function Hall.HallCharacter.ResetLocation
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x15512688
	// Params: [ Num(0) Size(0x0) ]
	void ResetLocation();

	// Object: Function Hall.HallCharacter.ResetBodyShapeShiftType
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x15512674
	// Params: [ Num(0) Size(0x0) ]
	void ResetBodyShapeShiftType();

	// Object: Function Hall.HallCharacter.ResetAppearance
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x15512660
	// Params: [ Num(0) Size(0x0) ]
	void ResetAppearance();

	// Object: Function Hall.HallCharacter.RemoveAvatarExtraMeshes
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x155125b4
	// Params: [ Num(1) Size(0x1) ]
	void RemoveAvatarExtraMeshes(uint8_t Immediately);

	// Object: Function Hall.HallCharacter.RecalculateAppearancePriority
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x155125a0
	// Params: [ Num(0) Size(0x0) ]
	void RecalculateAppearancePriority();

	// Object: Function Hall.HallCharacter.OnHallCharacterAnimSetChangedEvent
	// Flags: [Final|Native|Protected]
	// Offset: 0xfdd5ab0
	// Params: [ Num(0) Size(0x0) ]
	void OnHallCharacterAnimSetChangedEvent();

	// Object: Function Hall.HallCharacter.isFemale
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x15512568
	// Params: [ Num(1) Size(0x1) ]
	uint8_t isFemale();

	// Object: Function Hall.HallCharacter.IsEquippedWithWeapon
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x15512530
	// Params: [ Num(1) Size(0x1) ]
	uint8_t IsEquippedWithWeapon();

	// Object: Function Hall.HallCharacter.IsAvatarPakExist
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x15512484
	// Params: [ Num(2) Size(0x10) ]
	int64_t IsAvatarPakExist(struct FName InAvatarId);

	// Object: Function Hall.HallCharacter.HaveSettlementAnim
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x155123d4
	// Params: [ Num(2) Size(0x5) ]
	uint8_t HaveSettlementAnim(int32_t PosId);

	// Object: Function Hall.HallCharacter.HallCharacterShowAnimEnd
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x155123c0
	// Params: [ Num(0) Size(0x0) ]
	void HallCharacterShowAnimEnd();

	// Object: Function Hall.HallCharacter.GetOriginalRotation
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x15512388
	// Params: [ Num(1) Size(0xC) ]
	struct FRotator GetOriginalRotation();

	// Object: Function Hall.HallCharacter.GetOriginalLocation
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x15512350
	// Params: [ Num(1) Size(0xC) ]
	struct FVector GetOriginalLocation();

	// Object: Function Hall.HallCharacter.GetLookAtWeight
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x1551231c
	// Params: [ Num(1) Size(0x4) ]
	float GetLookAtWeight();

	// Object: Function Hall.HallCharacter.GetLookAtTarget
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x155122e4
	// Params: [ Num(1) Size(0xC) ]
	struct FVector GetLookAtTarget();

	// Object: Function Hall.HallCharacter.GetLookAtSpeedStrength
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x155122b0
	// Params: [ Num(1) Size(0x4) ]
	float GetLookAtSpeedStrength();

	// Object: Function Hall.HallCharacter.GetIsSetUp
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x106aa170
	// Params: [ Num(1) Size(0x1) ]
	uint8_t GetIsSetUp();

	// Object: Function Hall.HallCharacter.GetIsHaveSetUpCallBack
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x106aa238
	// Params: [ Num(1) Size(0x1) ]
	uint8_t GetIsHaveSetUpCallBack();

	// Object: Function Hall.HallCharacter.GetEquippedWeaponDesc
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x1551227c
	// Params: [ Num(1) Size(0x8) ]
	struct UModularWeaponDesc* GetEquippedWeaponDesc();

	// Object: Function Hall.HallCharacter.GetAvatarID
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x155121e4
	// Params: [ Num(1) Size(0x10) ]
	struct FString GetAvatarID();

	// Object: Function Hall.HallCharacter.EquipWeapon
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x1078eb20
	// Params: [ Num(1) Size(0x8) ]
	void EquipWeapon(struct UModularWeaponDesc* WeaponDesc);

	// Object: Function Hall.HallCharacter.DestroyCharacter
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x155121d0
	// Params: [ Num(0) Size(0x0) ]
	void DestroyCharacter();

	// Object: Function Hall.HallCharacter.CheckAvatarResCompleteness
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x15512110
	// Params: [ Num(2) Size(0x9) ]
	uint8_t CheckAvatarResCompleteness(struct FName& InOutAvatarID);
};

// Object: Class Hall.HallCharacterAnimPreviewer
// Size: 0x498 (Inherited: 0x370)
struct AHallCharacterAnimPreviewer : AActor
{
	DEFINE_UE_CLASS_HELPERS(AHallCharacterAnimPreviewer, "HallCharacterAnimPreviewer")

	uint8_t bSpawnWhenMapLoaded : 1; // 0x370(0x1), Mask(0x1)
	uint8_t BitPad_0x370_1 : 7; // 0x370(0x1)
	uint8_t bKeepInPIE : 1; // 0x371(0x1), Mask(0x1)
	uint8_t BitPad_0x371_1 : 7; // 0x371(0x1)
	EPrevAnimHallCharacter PreviewHallCharacterID; // 0x372(0x1)
	uint8_t Pad_0x373[0x5]; // 0x373(0x5)
	struct FString PreviewCharacterID; // 0x378(0x10)
	EHallCharacterAnim PreviewHallCharacterAnim; // 0x388(0x1)
	uint8_t bUseSpecificAnimBP : 1; // 0x389(0x1), Mask(0x1)
	uint8_t BitPad_0x389_1 : 7; // 0x389(0x1)
	uint8_t Pad_0x38A[0x6]; // 0x38A(0x6)
	struct UAnimInstance* PrevAnimBP; // 0x390(0x8)
	uint8_t bTakingWeapon : 1; // 0x398(0x1), Mask(0x1)
	uint8_t BitPad_0x398_1 : 7; // 0x398(0x1)
	uint8_t Pad_0x399[0x7]; // 0x399(0x7)
	struct FString PreviewPresetWeaponID; // 0x3A0(0x10)
	struct FString PreviewEquipment_Helmet; // 0x3B0(0x10)
	uint8_t bTakingHelmet : 1; // 0x3C0(0x1), Mask(0x1)
	uint8_t BitPad_0x3C0_1 : 7; // 0x3C0(0x1)
	uint8_t Pad_0x3C1[0x7]; // 0x3C1(0x7)
	struct FString PreviewEquipment_ChestHanging; // 0x3C8(0x10)
	uint8_t bTakingChestHanging : 1; // 0x3D8(0x1), Mask(0x1)
	uint8_t BitPad_0x3D8_1 : 7; // 0x3D8(0x1)
	uint8_t Pad_0x3D9[0x7]; // 0x3D9(0x7)
	struct FString PreviewEquipment_Bag; // 0x3E0(0x10)
	uint8_t bTakingBag : 1; // 0x3F0(0x1), Mask(0x1)
	uint8_t BitPad_0x3F0_1 : 7; // 0x3F0(0x1)
	uint8_t Pad_0x3F1[0x7]; // 0x3F1(0x7)
	struct FString PreviewEquipment_BreastPlate; // 0x3F8(0x10)
	uint8_t bTakingBreastPlate : 1; // 0x408(0x1), Mask(0x1)
	uint8_t BitPad_0x408_1 : 7; // 0x408(0x1)
	uint8_t Pad_0x409[0x3]; // 0x409(0x3)
	struct TWeakObjectPtr<struct AActor> PlayerSpawnPoint; // 0x40C(0x8)
	uint8_t Pad_0x414[0x4]; // 0x414(0x4)
	struct AHallCharacter* CharacterClass; // 0x418(0x8)
	struct TWeakObjectPtr<struct AHallMainDisplayCtrl> HallDisplayCtrl; // 0x420(0x8)
	struct UHallItemDisplayComponent* ItemDisplayComponent; // 0x428(0x8)
	struct FString PreviewItemId; // 0x430(0x10)
	struct TWeakObjectPtr<struct AActor> WeaponSpawnPoint; // 0x440(0x8)
	uint64_t PreviewWeaponID; // 0x448(0x8)
	uint64_t PreviewSkinID; // 0x450(0x8)
	uint8_t bOpenWeaponAdapter : 1; // 0x458(0x1), Mask(0x1)
	uint8_t BitPad_0x458_1 : 7; // 0x458(0x1)
	uint8_t Pad_0x459[0x3]; // 0x459(0x3)
	float MaxBound; // 0x45C(0x4)
	float MinBound; // 0x460(0x4)
	struct TWeakObjectPtr<struct ACameraActor> DebugHallCamera; // 0x464(0x8)
	uint8_t Pad_0x46C[0x4]; // 0x46C(0x4)
	struct TArray<struct TWeakObjectPtr<struct AActor>> TeammateSpawnPoints; // 0x470(0x10)
	struct TArray<struct FHallCharacterProxy> HallCharacterProxies; // 0x480(0x10)
	struct TWeakObjectPtr<struct AAssembleWeaponActor> PreviewWeaponActor; // 0x490(0x8)

	// Object: Function Hall.HallCharacterAnimPreviewer.SpawnDisplayWeapon
	// Flags: [Final|Native|Public]
	// Offset: 0x1551445c
	// Params: [ Num(0) Size(0x0) ]
	void SpawnDisplayWeapon();

	// Object: Function Hall.HallCharacterAnimPreviewer.SpawnDisplayItem
	// Flags: [Final|Native|Public]
	// Offset: 0x15514448
	// Params: [ Num(0) Size(0x0) ]
	void SpawnDisplayItem();

	// Object: Function Hall.HallCharacterAnimPreviewer.OpenWeaponSkinDatatable
	// Flags: [Final|Native|Public]
	// Offset: 0x15514434
	// Params: [ Num(0) Size(0x0) ]
	void OpenWeaponSkinDatatable();

	// Object: Function Hall.HallCharacterAnimPreviewer.OpenPreviewTable
	// Flags: [Final|Native|Public]
	// Offset: 0x15514420
	// Params: [ Num(0) Size(0x0) ]
	void OpenPreviewTable();

	// Object: Function Hall.HallCharacterAnimPreviewer.OpenPreviewDoc
	// Flags: [Final|Native|Public]
	// Offset: 0x1551440c
	// Params: [ Num(0) Size(0x0) ]
	void OpenPreviewDoc();

	// Object: Function Hall.HallCharacterAnimPreviewer.OnLoadWeaponCompleted
	// Flags: [Final|Native|Private]
	// Offset: 0x15514360
	// Params: [ Num(1) Size(0x1) ]
	void OnLoadWeaponCompleted(uint8_t Succeeded);

	// Object: Function Hall.HallCharacterAnimPreviewer.DestroyTeamCharacters
	// Flags: [Final|Native|Public]
	// Offset: 0x1551434c
	// Params: [ Num(0) Size(0x0) ]
	void DestroyTeamCharacters();

	// Object: Function Hall.HallCharacterAnimPreviewer.DestroyHallCharacter
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x15514338
	// Params: [ Num(0) Size(0x0) ]
	void DestroyHallCharacter();

	// Object: Function Hall.HallCharacterAnimPreviewer.DestroyDisplayWeapon
	// Flags: [Final|Native|Public]
	// Offset: 0x15514324
	// Params: [ Num(0) Size(0x0) ]
	void DestroyDisplayWeapon();

	// Object: Function Hall.HallCharacterAnimPreviewer.CreateTeamCharacters
	// Flags: [Final|Native|Public]
	// Offset: 0x15514310
	// Params: [ Num(0) Size(0x0) ]
	void CreateTeamCharacters();

	// Object: Function Hall.HallCharacterAnimPreviewer.CreatePlayerCharacter
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x155142fc
	// Params: [ Num(0) Size(0x0) ]
	void CreatePlayerCharacter();
};

// Object: Class Hall.HallCharacterAppearanceProxyComponent
// Size: 0xA90 (Inherited: 0x6A8)
struct UHallCharacterAppearanceProxyComponent : UDFMCharacterAppearanceProxyComponent
{
	DEFINE_UE_CLASS_HELPERS(UHallCharacterAppearanceProxyComponent, "HallCharacterAppearanceProxyComponent")

	uint8_t Pad_0x6A8[0x190]; // 0x6A8(0x190)
	struct FHallWeaponAnimInfo EmptyHandAnimInfo; // 0x838(0x48)
	struct FHallWeaponAnimInfo DefaultWeaponAnimInfo; // 0x880(0x48)
	struct TMap<struct FName, struct FHallWeaponAnimInfo> DefaultWeaponSubTypesAnimInfoMap; // 0x8C8(0x50)
	struct FHallWeaponAnimInfo CurrentWeaponAnimInfo; // 0x918(0x48)
	uint8_t Pad_0x960[0xD8]; // 0x960(0xD8)
	struct TMap<struct FName, struct UMaterialInstance*> UIRenderIngoreMatInstMap; // 0xA38(0x50)
	uint8_t Pad_0xA88[0x8]; // 0xA88(0x8)

	// Object: Function Hall.HallCharacterAppearanceProxyComponent.CloseHeadAnim
	// Flags: [Final|Native|Public]
	// Offset: 0x15514514
	// Params: [ Num(1) Size(0x1) ]
	void CloseHeadAnim(uint8_t bClose);
};

// Object: Class Hall.HallCharacterCameraActor
// Size: 0xD80 (Inherited: 0xCD0)
struct AHallCharacterCameraActor : ACameraActor
{
	DEFINE_UE_CLASS_HELPERS(AHallCharacterCameraActor, "HallCharacterCameraActor")

	struct USplineComponent* SplineIn; // 0xCD0(0x8)
	struct USplineComponent* SplineCameraMovePath; // 0xCD8(0x8)
	struct USplineComponent* SplineTemp; // 0xCE0(0x8)
	uint8_t Pad_0xCE8[0x98]; // 0xCE8(0x98)

	// Object: Function Hall.HallCharacterCameraActor.SetRollbackCamera
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x15514e74
	// Params: [ Num(1) Size(0x8) ]
	void SetRollbackCamera(struct AHallCharacterCameraActor* InRollbackCamera);

	// Object: Function Hall.HallCharacterCameraActor.SetEasingType
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x15514dd0
	// Params: [ Num(1) Size(0x1) ]
	void SetEasingType(EGPWeaponEasingType InEasingType);

	// Object: Function Hall.HallCharacterCameraActor.SetDuration
	// Flags: [Final|Native|Private|BlueprintCallable]
	// Offset: 0x15514d2c
	// Params: [ Num(1) Size(0x4) ]
	void SetDuration(float InDuration);

	// Object: Function Hall.HallCharacterCameraActor.ResetPreview
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x15514d18
	// Params: [ Num(0) Size(0x0) ]
	void ResetPreview();

	// Object: Function Hall.HallCharacterCameraActor.RemoveCameraPathConfig
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x15514d04
	// Params: [ Num(0) Size(0x0) ]
	void RemoveCameraPathConfig();

	// Object: Function Hall.HallCharacterCameraActor.RemoveCameraMovePath
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x15514cf0
	// Params: [ Num(0) Size(0x0) ]
	void RemoveCameraMovePath();

	// Object: Function Hall.HallCharacterCameraActor.GetViewTargetLocation
	// Flags: [Final|Native|Static|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x15514c10
	// Params: [ Num(3) Size(0x1C) ]
	static struct FVector GetViewTargetLocation(struct ACameraActor* Camera, struct AActor* TargetActor);

	// Object: Function Hall.HallCharacterCameraActor.GetDuration
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x15514bdc
	// Params: [ Num(1) Size(0x4) ]
	float GetDuration();

	// Object: Function Hall.HallCharacterCameraActor.GetCameraTransform
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable]
	// Offset: 0x15514a98
	// Params: [ Num(4) Size(0x40) ]
	struct FTransform GetCameraTransform(struct ACameraActor* CameraActor, float Alpha, uint8_t& bBlendRotation);

	// Object: Function Hall.HallCharacterCameraActor.EnableDebug
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x155149ec
	// Params: [ Num(1) Size(0x1) ]
	void EnableDebug(uint8_t bDebug);

	// Object: Function Hall.HallCharacterCameraActor.DoPreview
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable]
	// Offset: 0x1551483c
	// Params: [ Num(5) Size(0x28) ]
	void DoPreview(struct ACameraActor* SourceActor, const struct FVector& ViewSourceLocation, const struct FVector& InViewTargetLocation, float Speed, float LockMoveStartTargetAlpha);

	// Object: Function Hall.HallCharacterCameraActor.CreateCameraMovePath
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable]
	// Offset: 0x155145d4
	// Params: [ Num(8) Size(0x31) ]
	void CreateCameraMovePath(struct ACameraActor* SourceActor, const struct FVector& ViewSourceLocation, const struct FVector& ViewTargetLocation, float Speed, float LockMoveStartTargetAlpha, float radius, float ExpandScale, uint8_t bUseZAxis);
};

// Object: Class Hall.HallCharacterCtrlComponentBase
// Size: 0x168 (Inherited: 0xF8)
struct UHallCharacterCtrlComponentBase : UActorComponent
{
	DEFINE_UE_CLASS_HELPERS(UHallCharacterCtrlComponentBase, "HallCharacterCtrlComponentBase")

	struct AHallCharacter* CharacterClass; // 0xF8(0x8)
	struct TWeakObjectPtr<struct AActor> MainCharacterSpawnPoint; // 0x100(0x8)
	struct TArray<struct TWeakObjectPtr<struct AActor>> CharacterSpawnPoints; // 0x108(0x10)
	struct TMap<int32_t, struct AHallCharacter*> AllSlotCharacter; // 0x118(0x50)

	// Object: Function Hall.HallCharacterCtrlComponentBase.SpawnPlayerCharacterWithSlot
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x101c9f40
	// Params: [ Num(2) Size(0x10) ]
	struct AHallCharacter* SpawnPlayerCharacterWithSlot(int32_t InSlot);

	// Object: Function Hall.HallCharacterCtrlComponentBase.GetPlayerCharacterPositionBySlot
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x155150b8
	// Params: [ Num(2) Size(0x10) ]
	struct FVector GetPlayerCharacterPositionBySlot(int32_t InSlot);

	// Object: Function Hall.HallCharacterCtrlComponentBase.GetPlayerCharacterBySlot
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x1551500c
	// Params: [ Num(2) Size(0x10) ]
	struct AHallCharacter* GetPlayerCharacterBySlot(int32_t InSlot);

	// Object: Function Hall.HallCharacterCtrlComponentBase.GetPlayerCharacter
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x1092efb0
	// Params: [ Num(1) Size(0x8) ]
	struct AHallCharacter* GetPlayerCharacter();

	// Object: Function Hall.HallCharacterCtrlComponentBase.DestroyPlayerCharacter
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x15514ff8
	// Params: [ Num(0) Size(0x0) ]
	void DestroyPlayerCharacter();

	// Object: Function Hall.HallCharacterCtrlComponentBase.DestroyCharacterBySlot
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x15514f44
	// Params: [ Num(1) Size(0x4) ]
	void DestroyCharacterBySlot(const int32_t& InSlotId);
};

// Object: Class Hall.HallDisplayLevelSequenceComponentBase
// Size: 0x1A0 (Inherited: 0xF8)
struct UHallDisplayLevelSequenceComponentBase : UActorComponent
{
	DEFINE_UE_CLASS_HELPERS(UHallDisplayLevelSequenceComponentBase, "HallDisplayLevelSequenceComponentBase")

	uint8_t Pad_0xF8[0x40]; // 0xF8(0x40)
	struct ACameraActor* CameraActor; // 0x138(0x8)
	uint8_t Pad_0x140[0x50]; // 0x140(0x50)
	struct ALevelSequenceActor* HallDisplayLevelSequenceActor; // 0x190(0x8)
	uint8_t Pad_0x198[0x8]; // 0x198(0x8)

	// Object: Function Hall.HallDisplayLevelSequenceComponentBase.OnMovieSequenceEventStop
	// Flags: [Final|Native|Private]
	// Offset: 0x101d8614
	// Params: [ Num(0) Size(0x0) ]
	void OnMovieSequenceEventStop();

	// Object: Function Hall.HallDisplayLevelSequenceComponentBase.OnMovieSequenceEventPlay
	// Flags: [Final|Native|Private]
	// Offset: 0x101d8710
	// Params: [ Num(0) Size(0x0) ]
	void OnMovieSequenceEventPlay();

	// Object: Function Hall.HallDisplayLevelSequenceComponentBase.OnMovieSequenceEventPause
	// Flags: [Final|Native|Private]
	// Offset: 0x101d8518
	// Params: [ Num(0) Size(0x0) ]
	void OnMovieSequenceEventPause();

	// Object: Function Hall.HallDisplayLevelSequenceComponentBase.OnMovieSequenceEventFinished
	// Flags: [Final|Native|Private]
	// Offset: 0x101d8910
	// Params: [ Num(0) Size(0x0) ]
	void OnMovieSequenceEventFinished();

	// Object: Function Hall.HallDisplayLevelSequenceComponentBase.OnCameraCutTriggered
	// Flags: [Final|Native|Private]
	// Offset: 0x1551a4b4
	// Params: [ Num(1) Size(0x8) ]
	void OnCameraCutTriggered(struct UCameraComponent* CameraComponent);
};

// Object: Class Hall.HallCharacterLevelSeqComponentBase
// Size: 0x260 (Inherited: 0x1A0)
struct UHallCharacterLevelSeqComponentBase : UHallDisplayLevelSequenceComponentBase
{
	DEFINE_UE_CLASS_HELPERS(UHallCharacterLevelSeqComponentBase, "HallCharacterLevelSeqComponentBase")

	uint8_t Pad_0x1A0[0x4]; // 0x1A0(0x4)
	struct FName HeroItemFashionId; // 0x1A4(0x8)
	float FromAlpha; // 0x1AC(0x4)
	float ToAlpha; // 0x1B0(0x4)
	float StartFadeDuration; // 0x1B4(0x4)
	float StopFadeDuration; // 0x1B8(0x4)
	struct FLinearColor FadeColor; // 0x1BC(0x10)
	uint8_t Pad_0x1CC[0xC]; // 0x1CC(0xC)
	uint8_t bAttachWatch : 1; // 0x1D8(0x1), Mask(0x1)
	uint8_t BitPad_0x1D8_1 : 7; // 0x1D8(0x1)
	uint8_t bIsOperator : 1; // 0x1D9(0x1), Mask(0x1)
	uint8_t BitPad_0x1D9_1 : 7; // 0x1D9(0x1)
	uint8_t bUseCameraFade : 1; // 0x1DA(0x1), Mask(0x1)
	uint8_t BitPad_0x1DA_1 : 7; // 0x1DA(0x1)
	uint8_t PlayAfterOtherLoaded : 1; // 0x1DB(0x1), Mask(0x1)
	uint8_t BitPad_0x1DB_1 : 7; // 0x1DB(0x1)
	struct FName HallCharacterBindingTag; // 0x1DC(0x8)
	uint8_t Pad_0x1E4[0x4]; // 0x1E4(0x4)
	struct FString PoseFrame; // 0x1E8(0x10)
	uint8_t bPlayInEndRange : 1; // 0x1F8(0x1), Mask(0x1)
	uint8_t BitPad_0x1F8_1 : 7; // 0x1F8(0x1)
	uint8_t Pad_0x1F9[0x3]; // 0x1F9(0x3)
	int32_t DeltaFrame; // 0x1FC(0x4)
	uint8_t Pad_0x200[0x60]; // 0x200(0x60)

	// Object: Function Hall.HallCharacterLevelSeqComponentBase.StopMotionBlur
	// Flags: [Final|Native|Public]
	// Offset: 0x15515688
	// Params: [ Num(0) Size(0x0) ]
	void StopMotionBlur();

	// Object: Function Hall.HallCharacterLevelSeqComponentBase.SetSkillItemMesh
	// Flags: [Final|Native|Public]
	// Offset: 0x155155e4
	// Params: [ Num(1) Size(0x8) ]
	void SetSkillItemMesh(struct ULevelSequencePlayer* SequencePlayer);

	// Object: Function Hall.HallCharacterLevelSeqComponentBase.SetSkillItemAppearance
	// Flags: [Final|Native|Public|HasOutParms]
	// Offset: 0x155154f4
	// Params: [ Num(2) Size(0x10) ]
	void SetSkillItemAppearance(struct ULevelSequencePlayer* SequencePlayer, const struct FName& InHeroItemFashionId);

	// Object: Function Hall.HallCharacterLevelSeqComponentBase.SetShouldPlayInEndRange
	// Flags: [Final|Native|Public]
	// Offset: 0x15515448
	// Params: [ Num(1) Size(0x1) ]
	void SetShouldPlayInEndRange(uint8_t bShouldPlayInEndRange);

	// Object: Function Hall.HallCharacterLevelSeqComponentBase.SetHeroItemFashionId
	// Flags: [Final|Native|Public|HasOutParms]
	// Offset: 0x15515394
	// Params: [ Num(1) Size(0x8) ]
	void SetHeroItemFashionId(const struct FName& InHeroItemFashionId);

	// Object: Function Hall.HallCharacterLevelSeqComponentBase.SetCameraFadeIfCurDisableRender
	// Flags: [Final|Native|Public]
	// Offset: 0x15515380
	// Params: [ Num(0) Size(0x0) ]
	void SetCameraFadeIfCurDisableRender();

	// Object: Function Hall.HallCharacterLevelSeqComponentBase.PlaySequence
	// Flags: [Final|Native|Public]
	// Offset: 0x1551536c
	// Params: [ Num(0) Size(0x0) ]
	void PlaySequence();

	// Object: Function Hall.HallCharacterLevelSeqComponentBase.OnSeqLoadedComplete
	// Flags: [Final|Native|Public]
	// Offset: 0x15515358
	// Params: [ Num(0) Size(0x0) ]
	void OnSeqLoadedComplete();

	// Object: Function Hall.HallCharacterLevelSeqComponentBase.OnHeroItemMatLoadTaskComplete
	// Flags: [Final|Native|Public]
	// Offset: 0x155152b4
	// Params: [ Num(1) Size(0x4) ]
	void OnHeroItemMatLoadTaskComplete(int32_t NewHandleId);

	// Object: Function Hall.HallCharacterLevelSeqComponentBase.OnHallCharacterMeshLoad
	// Flags: [Final|Native|Public]
	// Offset: 0x155152a0
	// Params: [ Num(0) Size(0x0) ]
	void OnHallCharacterMeshLoad();

	// Object: Function Hall.HallCharacterLevelSeqComponentBase.CheckAndPlayMotionBlur
	// Flags: [Final|Native|Public]
	// Offset: 0x1551528c
	// Params: [ Num(0) Size(0x0) ]
	void CheckAndPlayMotionBlur();
};

// Object: Class Hall.HallCharacterSpawnConfig
// Size: 0x388 (Inherited: 0x370)
struct AHallCharacterSpawnConfig : AActor
{
	DEFINE_UE_CLASS_HELPERS(AHallCharacterSpawnConfig, "HallCharacterSpawnConfig")

	uint8_t bEnable : 1; // 0x370(0x1), Mask(0x1)
	uint8_t BitPad_0x370_1 : 7; // 0x370(0x1)
	uint8_t Pad_0x371[0x7]; // 0x371(0x7)
	struct TArray<struct FHallCharacterSpawnInfo> SpawnInfos; // 0x378(0x10)

	// Object: Function Hall.HallCharacterSpawnConfig.IsEnable
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x15515944
	// Params: [ Num(1) Size(0x1) ]
	uint8_t IsEnable();

	// Object: Function Hall.HallCharacterSpawnConfig.GetSpawnPoint
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x15515898
	// Params: [ Num(2) Size(0x10) ]
	struct AActor* GetSpawnPoint(int32_t Idx);

	// Object: Function Hall.HallCharacterSpawnConfig.GetCharacterID
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x155157b8
	// Params: [ Num(2) Size(0x18) ]
	struct FString GetCharacterID(int32_t Idx);
};

// Object: Class Hall.HallCharacterVoiceComponent
// Size: 0x150 (Inherited: 0xF8)
struct UHallCharacterVoiceComponent : UActorComponent
{
	DEFINE_UE_CLASS_HELPERS(UHallCharacterVoiceComponent, "HallCharacterVoiceComponent")

	uint8_t Pad_0xF8[0x38]; // 0xF8(0x38)
	struct FMulticastInlineDelegate On2DVoiceStoppedDelegate; // 0x130(0x10)
	struct FDelegate OnGPAudioFinishedBluprint; // 0x140(0x10)

	// Object: Function Hall.HallCharacterVoiceComponent.On2DVoiceStopped
	// Flags: [Final|Native|Private|BlueprintCallable]
	// Offset: 0x1551599c
	// Params: [ Num(2) Size(0x8) ]
	void On2DVoiceStopped(EGPEventCallbackType EventCallback, int32_t PlayId);
};

// Object: Class Hall.HallCharacterWeaponComponent
// Size: 0x148 (Inherited: 0xF8)
struct UHallCharacterWeaponComponent : UActorComponent
{
	DEFINE_UE_CLASS_HELPERS(UHallCharacterWeaponComponent, "HallCharacterWeaponComponent")

	uint8_t Pad_0xF8[0x18]; // 0xF8(0x18)
	struct FMulticastInlineDelegate OnWeaponLoadComplete; // 0x110(0x10)
	struct UModularWeaponDesc* WeaponDesc; // 0x120(0x8)
	struct AAssembleWeaponActor* EquippedWeaponActor; // 0x128(0x8)
	uint8_t Pad_0x130[0x18]; // 0x130(0x18)
};

// Object: Class Hall.HallCommonDisplayCtrl
// Size: 0x4A8 (Inherited: 0x388)
struct AHallCommonDisplayCtrl : AHallDisplayCtrlBase
{
	DEFINE_UE_CLASS_HELPERS(AHallCommonDisplayCtrl, "HallCommonDisplayCtrl")

	uint8_t Pad_0x388[0x10]; // 0x388(0x10)
	struct TMap<struct FName, struct FHallDisplayInfoBase> DiplayInfoMap; // 0x398(0x50)
	struct UHallCameraCtrlComponentBase* CameraCtrlComponent; // 0x3E8(0x8)
	struct UHallCharacterCtrlComponentBase* CharacterCtrlComponent; // 0x3F0(0x8)
	struct UHallItemDisplayComponent* ItemDisplayComponent; // 0x3F8(0x8)
	struct UHallWeaponDisplayComponent* WeaponDisplayComponent; // 0x400(0x8)
	uint8_t EnableCapture2D : 1; // 0x408(0x1), Mask(0x1)
	uint8_t BitPad_0x408_1 : 7; // 0x408(0x1)
	uint8_t Pad_0x409[0x7]; // 0x409(0x7)
	struct UTextureRenderTarget2D* Capture2DRT; // 0x410(0x8)
	float RotateSensitivity; // 0x418(0x4)
	float RotateSensitivity_HD; // 0x41C(0x4)
	float ZoomSensitivity; // 0x420(0x4)
	uint8_t Pad_0x424[0x4]; // 0x424(0x4)
	struct AActor* TouchTargetActor; // 0x428(0x8)
	uint8_t bIsInteractEnabled : 1; // 0x430(0x1), Mask(0x1)
	uint8_t BitPad_0x430_1 : 7; // 0x430(0x1)
	uint8_t bCanRotate : 1; // 0x431(0x1), Mask(0x1)
	uint8_t BitPad_0x431_1 : 7; // 0x431(0x1)
	uint8_t bCanScale : 1; // 0x432(0x1), Mask(0x1)
	uint8_t BitPad_0x432_1 : 7; // 0x432(0x1)
	uint8_t bInertiaEnabled : 1; // 0x433(0x1), Mask(0x1)
	uint8_t BitPad_0x433_1 : 7; // 0x433(0x1)
	float InertiaDeceleration; // 0x434(0x4)
	float InertiaStrength; // 0x438(0x4)
	uint8_t bViewMoveEnabled : 1; // 0x43C(0x1), Mask(0x1)
	uint8_t BitPad_0x43C_1 : 7; // 0x43C(0x1)
	uint8_t Pad_0x43D[0x3]; // 0x43D(0x3)
	float MoveSensitivity; // 0x440(0x4)
	struct FVector2D MoveRange; // 0x444(0x8)
	uint8_t Pad_0x44C[0x3C]; // 0x44C(0x3C)
	EHallRotationType HallRotationType; // 0x488(0x1)
	uint8_t Pad_0x489[0x7]; // 0x489(0x7)
	struct FMulticastInlineDelegate OnTargetActorTouchedDelegate; // 0x490(0x10)
	uint8_t HasMoved : 1; // 0x4A0(0x1), Mask(0x1)
	uint8_t BitPad_0x4A0_1 : 7; // 0x4A0(0x1)
	uint8_t Pad_0x4A1[0x3]; // 0x4A1(0x3)
	float RotateYawMaxValue; // 0x4A4(0x4)

	// Object: Function Hall.HallCommonDisplayCtrl.SetRotateSensitivity
	// Flags: [Final|Native|Public|HasOutParms]
	// Offset: 0x15518c60
	// Params: [ Num(1) Size(0x4) ]
	void SetRotateSensitivity(const float& InValue);

	// Object: Function Hall.HallCommonDisplayCtrl.SetDisplayWeapon
	// Flags: [Final|Native|Public]
	// Offset: 0x15518b78
	// Params: [ Num(2) Size(0x9) ]
	void SetDisplayWeapon(struct UModularWeaponDesc* WeaponDesc, uint8_t IsMeleeWeapon);

	// Object: Function Hall.HallCommonDisplayCtrl.SetDisplayVehicle
	// Flags: [Final|Native|Public]
	// Offset: 0x15518b64
	// Params: [ Num(0) Size(0x0) ]
	void SetDisplayVehicle();

	// Object: Function Hall.HallCommonDisplayCtrl.SetDisplayType
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x15518a6c
	// Params: [ Num(1) Size(0x10) ]
	void SetDisplayType(struct FString InDisplayType);

	// Object: Function Hall.HallCommonDisplayCtrl.SetDisplayItem
	// Flags: [Final|Native|Public]
	// Offset: 0x155189c0
	// Params: [ Num(1) Size(0x10) ]
	void SetDisplayItem(struct FString ItemID);

	// Object: Function Hall.HallCommonDisplayCtrl.SetCharacterWatch
	// Flags: [Final|Native|Public]
	// Offset: 0x1551891c
	// Params: [ Num(1) Size(0x8) ]
	void SetCharacterWatch(struct FName InWatchItemId);

	// Object: Function Hall.HallCommonDisplayCtrl.SetCharacterAvatar
	// Flags: [Final|Native|Public]
	// Offset: 0x15518824
	// Params: [ Num(1) Size(0x10) ]
	void SetCharacterAvatar(struct FString AvatarID);

	// Object: Function Hall.HallCommonDisplayCtrl.ResetDisplayWeapon
	// Flags: [Final|Native|Public]
	// Offset: 0x15518810
	// Params: [ Num(0) Size(0x0) ]
	void ResetDisplayWeapon();

	// Object: Function Hall.HallCommonDisplayCtrl.ResetDisplayVehicle
	// Flags: [Final|Native|Public]
	// Offset: 0x155187fc
	// Params: [ Num(0) Size(0x0) ]
	void ResetDisplayVehicle();

	// Object: Function Hall.HallCommonDisplayCtrl.ResetDisplayItem
	// Flags: [Final|Native|Public]
	// Offset: 0x155187e8
	// Params: [ Num(0) Size(0x0) ]
	void ResetDisplayItem();

	// Object: Function Hall.HallCommonDisplayCtrl.ResetCharacterRotation
	// Flags: [Final|Native|Public]
	// Offset: 0x155187d4
	// Params: [ Num(0) Size(0x0) ]
	void ResetCharacterRotation();

	// Object: Function Hall.HallCommonDisplayCtrl.InitSceneCapture2DTexture
	// Flags: [Final|Native|Protected]
	// Offset: 0x155186f0
	// Params: [ Num(3) Size(0x10) ]
	struct UTextureRenderTarget2D* InitSceneCapture2DTexture(uint32_t InSizeX, uint32_t InSizeY);

	// Object: Function Hall.HallCommonDisplayCtrl.GetDisplayWeaponActor
	// Flags: [Final|Native|Public]
	// Offset: 0x155186bc
	// Params: [ Num(1) Size(0x8) ]
	struct AActor* GetDisplayWeaponActor();

	// Object: Function Hall.HallCommonDisplayCtrl.GetDisplayVehicleActor
	// Flags: [Final|Native|Public]
	// Offset: 0x15518688
	// Params: [ Num(1) Size(0x8) ]
	struct AActor* GetDisplayVehicleActor();
};

// Object: Class Hall.HallCollectionDisplayCtrl
// Size: 0x518 (Inherited: 0x4A8)
struct AHallCollectionDisplayCtrl : AHallCommonDisplayCtrl
{
	DEFINE_UE_CLASS_HELPERS(AHallCollectionDisplayCtrl, "HallCollectionDisplayCtrl")

	struct TMap<struct FString, struct ALevelSequenceActor*> LevelSeqActors; // 0x4A8(0x50)
	struct TWeakObjectPtr<struct AHallLevelSequenceCameraParamActor> CameraParamActor; // 0x4F8(0x8)
	uint8_t Pad_0x500[0x18]; // 0x500(0x18)

	// Object: Function Hall.HallCollectionDisplayCtrl.StopCurrentSequence
	// Flags: [Final|Native|Public]
	// Offset: 0x15517810
	// Params: [ Num(0) Size(0x0) ]
	void StopCurrentSequence();

	// Object: Function Hall.HallCollectionDisplayCtrl.PlayLevelSeqInScene
	// Flags: [Final|Native|Public]
	// Offset: 0x15517720
	// Params: [ Num(2) Size(0x20) ]
	void PlayLevelSeqInScene(struct FString SeqName, struct FString NextSeqName);

	// Object: Function Hall.HallCollectionDisplayCtrl.OnStopped
	// Flags: [Final|Native|Private]
	// Offset: 0x1551770c
	// Params: [ Num(0) Size(0x0) ]
	void OnStopped();

	// Object: Function Hall.HallCollectionDisplayCtrl.OnFinished
	// Flags: [Final|Native|Private]
	// Offset: 0x155176f8
	// Params: [ Num(0) Size(0x0) ]
	void OnFinished();
};

// Object: Class Hall.HallCollectionLibraryDisplayCtrl
// Size: 0x488 (Inherited: 0x388)
struct AHallCollectionLibraryDisplayCtrl : AHallDisplayCtrlBase
{
	DEFINE_UE_CLASS_HELPERS(AHallCollectionLibraryDisplayCtrl, "HallCollectionLibraryDisplayCtrl")

	struct UHallCameraCtrlComponentBase* CameraCtrlComponent; // 0x388(0x8)
	struct UHallGeneralRotateComponent* GeneralRotateComponent; // 0x390(0x8)
	struct UHallItemDisplayComponent* ItemDisplayComponent; // 0x398(0x8)
	struct TWeakObjectPtr<struct AActor> DisplayTargetActor; // 0x3A0(0x8)
	uint8_t Pad_0x3A8[0x18]; // 0x3A8(0x18)
	struct AActor* TouchedActor; // 0x3C0(0x8)
	struct TArray<struct AActor*> FogActors; // 0x3C8(0x10)
	uint8_t Pad_0x3D8[0x30]; // 0x3D8(0x30)
	struct TArray<struct FSoftObjectPath> BoardBGMatPaths; // 0x408(0x10)
	struct TMap<struct FString, struct FHallDisplayInfoBase> DisplayInfoMap; // 0x418(0x50)
	uint8_t bCanInteract : 1; // 0x468(0x1), Mask(0x1)
	uint8_t BitPad_0x468_1 : 7; // 0x468(0x1)
	uint8_t Pad_0x469[0x7]; // 0x469(0x7)
	struct FMulticastInlineDelegate OnTouchPressedSignature; // 0x470(0x10)
	uint8_t bReboundEnable : 1; // 0x480(0x1), Mask(0x1)
	uint8_t BitPad_0x480_1 : 7; // 0x480(0x1)
	uint8_t bModifyCameraScaleEnable : 1; // 0x481(0x1), Mask(0x1)
	uint8_t BitPad_0x481_1 : 7; // 0x481(0x1)
	uint8_t Pad_0x482[0x2]; // 0x482(0x2)
	float ZoomSensitivity; // 0x484(0x4)

	// Object: Function Hall.HallCollectionLibraryDisplayCtrl.SetWheelInteract
	// Flags: [Final|Native|Public]
	// Offset: 0x15517d10
	// Params: [ Num(1) Size(0x1) ]
	void SetWheelInteract(uint8_t InCanInteract);

	// Object: Function Hall.HallCollectionLibraryDisplayCtrl.SetScaleMinAndMax
	// Flags: [Final|Native|Public]
	// Offset: 0x15517c34
	// Params: [ Num(2) Size(0x8) ]
	void SetScaleMinAndMax(float Min, float Max);

	// Object: Function Hall.HallCollectionLibraryDisplayCtrl.SetReboundActive
	// Flags: [Final|Native|Public]
	// Offset: 0x15517b88
	// Params: [ Num(1) Size(0x1) ]
	void SetReboundActive(uint8_t bReboundActive);

	// Object: Function Hall.HallCollectionLibraryDisplayCtrl.SetDisplayType
	// Flags: [Final|Native|Public]
	// Offset: 0x15517a90
	// Params: [ Num(1) Size(0x10) ]
	void SetDisplayType(struct FString InDisplayType);

	// Object: Function Hall.HallCollectionLibraryDisplayCtrl.SetDisplayItem
	// Flags: [Final|Native|Public]
	// Offset: 0x155179e4
	// Params: [ Num(1) Size(0x10) ]
	void SetDisplayItem(struct FString InItemID);

	// Object: Function Hall.HallCollectionLibraryDisplayCtrl.SetCanInteractState
	// Flags: [Final|Native|Public]
	// Offset: 0x15517938
	// Params: [ Num(1) Size(0x1) ]
	void SetCanInteractState(uint8_t InCanInteract);

	// Object: Function Hall.HallCollectionLibraryDisplayCtrl.GetOnTouchPressed
	// Flags: [Final|Native|Public]
	// Offset: 0x155178b4
	// Params: [ Num(1) Size(0x10) ]
	struct FMulticastInlineDelegate GetOnTouchPressed();

	// Object: Function Hall.HallCollectionLibraryDisplayCtrl.GetItemActor
	// Flags: [Final|Native|Public]
	// Offset: 0x15517880
	// Params: [ Num(1) Size(0x8) ]
	struct AActor* GetItemActor();

	// Object: Function Hall.HallCollectionLibraryDisplayCtrl.GetDisplayTargetActor
	// Flags: [Final|Native|Public]
	// Offset: 0x1551784c
	// Params: [ Num(1) Size(0x8) ]
	struct AActor* GetDisplayTargetActor();

	// Object: Function Hall.HallCollectionLibraryDisplayCtrl.DestroyItem
	// Flags: [Final|Native|Public]
	// Offset: 0x15517838
	// Params: [ Num(0) Size(0x0) ]
	void DestroyItem();
};

// Object: Class Hall.HallCollectionRoomDisplayCtrl
// Size: 0x500 (Inherited: 0x388)
struct AHallCollectionRoomDisplayCtrl : AHallDisplayCtrlBase
{
	DEFINE_UE_CLASS_HELPERS(AHallCollectionRoomDisplayCtrl, "HallCollectionRoomDisplayCtrl")

	uint8_t Pad_0x388[0x1C]; // 0x388(0x1C)
	struct FVector DisplayCabinetCameraBiasDirection; // 0x3A4(0xC)
	struct TArray<float> DisplayCabinetCameraDistanceArray; // 0x3B0(0x10)
	float DisplayCabinetGlobalCameraDistanceRatio; // 0x3C0(0x4)
	struct FVector SpecialCabinetCameraBiasDirection; // 0x3C4(0xC)
	float SpecialCabinetCameraDistance; // 0x3D0(0x4)
	float SpecialCabinetGlobalCameraDistanceRatio; // 0x3D4(0x4)
	struct TMap<struct FName, struct FHallDisplayInfoBase> DisplayInfoMap; // 0x3D8(0x50)
	struct UMaterial* PickupVirtualMaterial; // 0x428(0x8)
	struct TMap<struct FName, struct AActor*> ActorMap; // 0x430(0x50)
	uint32_t DisplayCabinetTextureSizeX; // 0x480(0x4)
	uint32_t DisplayCabinetTextureSizeY; // 0x484(0x4)
	struct UTexture2D* DisplayCabinetTexture; // 0x488(0x8)
	struct UTexture2D* DisplayCabinetBracketTexture; // 0x490(0x8)
	struct TMap<struct FName, struct UGPAudioEventAsset*> AudioEventAssetMap; // 0x498(0x50)
	struct FName BgPlaneActorTag; // 0x4E8(0x8)
	struct UMaterialInstanceDynamic* BgPlaneDynamicMaterial; // 0x4F0(0x8)
	struct UHallCameraCtrlComponentBase* CameraCtrlComponent; // 0x4F8(0x8)

	// Object: Function Hall.HallCollectionRoomDisplayCtrl.WriteToDisplayCabinetTexture
	// Flags: [Final|Native|Public]
	// Offset: 0x15518524
	// Params: [ Num(2) Size(0x18) ]
	void WriteToDisplayCabinetTexture(int32_t GridID, struct TArray<float> Values);

	// Object: Function Hall.HallCollectionRoomDisplayCtrl.WriteToDisplayCabinetBracketTexture
	// Flags: [Final|Native|Public]
	// Offset: 0x155183ec
	// Params: [ Num(2) Size(0x18) ]
	void WriteToDisplayCabinetBracketTexture(int32_t GridID, struct TArray<float> Values);

	// Object: Function Hall.HallCollectionRoomDisplayCtrl.UnLockTextureBulkData
	// Flags: [Final|Native|Public]
	// Offset: 0x155183d8
	// Params: [ Num(0) Size(0x0) ]
	void UnLockTextureBulkData();

	// Object: Function Hall.HallCollectionRoomDisplayCtrl.UnLockBracketTextureBulkData
	// Flags: [Final|Native|Public]
	// Offset: 0x155183c4
	// Params: [ Num(0) Size(0x0) ]
	void UnLockBracketTextureBulkData();

	// Object: Function Hall.HallCollectionRoomDisplayCtrl.SetDisplayType
	// Flags: [Final|Native|Public]
	// Offset: 0x1551823c
	// Params: [ Num(3) Size(0x12) ]
	void SetDisplayType(struct FString InDisplayType, uint8_t bEnableRepeat, uint8_t bImmediatelyFlag);

	// Object: Function Hall.HallCollectionRoomDisplayCtrl.SetDisplayCabinetTexture
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x15518228
	// Params: [ Num(0) Size(0x0) ]
	void SetDisplayCabinetTexture();

	// Object: Function Hall.HallCollectionRoomDisplayCtrl.SetDisplayCabinetScalarParam
	// Flags: [Final|Native|Public]
	// Offset: 0x15518148
	// Params: [ Num(2) Size(0xC) ]
	void SetDisplayCabinetScalarParam(struct FName ParameterName, float Value);

	// Object: Function Hall.HallCollectionRoomDisplayCtrl.SetBgPlaneTexture
	// Flags: [Final|Native|Public]
	// Offset: 0x1551809c
	// Params: [ Num(1) Size(0x10) ]
	void SetBgPlaneTexture(struct FString InTexturePath);

	// Object: Function Hall.HallCollectionRoomDisplayCtrl.ResetDisplayType
	// Flags: [Final|Native|Public]
	// Offset: 0x15518088
	// Params: [ Num(0) Size(0x0) ]
	void ResetDisplayType();

	// Object: Function Hall.HallCollectionRoomDisplayCtrl.LockTextureBulkData
	// Flags: [Final|Native|Public]
	// Offset: 0x15518054
	// Params: [ Num(1) Size(0x8) ]
	int64_t LockTextureBulkData();

	// Object: Function Hall.HallCollectionRoomDisplayCtrl.LockBracketTextureBulkData
	// Flags: [Final|Native|Public]
	// Offset: 0x15518020
	// Params: [ Num(1) Size(0x8) ]
	int64_t LockBracketTextureBulkData();

	// Object: Function Hall.HallCollectionRoomDisplayCtrl.GetPickupVirtualMaterial
	// Flags: [Final|Native|Public]
	// Offset: 0x15517fec
	// Params: [ Num(1) Size(0x8) ]
	struct UMaterial* GetPickupVirtualMaterial();

	// Object: Function Hall.HallCollectionRoomDisplayCtrl.GetDisplayType
	// Flags: [Final|Native|Public]
	// Offset: 0x15517fb8
	// Params: [ Num(1) Size(0x8) ]
	struct FName GetDisplayType();

	// Object: Function Hall.HallCollectionRoomDisplayCtrl.GetCameraActorByDisplayType
	// Flags: [Final|Native|Public]
	// Offset: 0x15517eb8
	// Params: [ Num(2) Size(0x18) ]
	struct ACameraActor* GetCameraActorByDisplayType(struct FString InDisplayType);

	// Object: Function Hall.HallCollectionRoomDisplayCtrl.GetActorByKey
	// Flags: [Final|Native|Public]
	// Offset: 0x15517e0c
	// Params: [ Num(2) Size(0x10) ]
	struct AActor* GetActorByKey(struct FName Key);
};

// Object: Class Hall.HallDisplayCameraActor
// Size: 0xD30 (Inherited: 0xCD0)
struct AHallDisplayCameraActor : ACameraActor
{
	DEFINE_UE_CLASS_HELPERS(AHallDisplayCameraActor, "HallDisplayCameraActor")

	struct USplineComponent* SplineIn; // 0xCD0(0x8)
	struct USplineComponent* SplineCameraMovePath; // 0xCD8(0x8)
	struct TWeakObjectPtr<struct AHallDisplayCameraActor> RollBackCamera; // 0xCE0(0x8)
	uint8_t Pad_0xCE8[0x48]; // 0xCE8(0x48)

	// Object: Function Hall.HallDisplayCameraActor.SetEasingType
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x15518f10
	// Params: [ Num(1) Size(0x1) ]
	void SetEasingType(EGPWeaponEasingType InEasingType);

	// Object: Function Hall.HallDisplayCameraActor.SetDuration
	// Flags: [Final|Native|Private|BlueprintCallable]
	// Offset: 0x15518e6c
	// Params: [ Num(1) Size(0x4) ]
	void SetDuration(float InDuration);

	// Object: Function Hall.HallDisplayCameraActor.GetDuration
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x15518e38
	// Params: [ Num(1) Size(0x4) ]
	float GetDuration();

	// Object: Function Hall.HallDisplayCameraActor.GetCameraTransform
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x15518d7c
	// Params: [ Num(2) Size(0x40) ]
	struct FTransform GetCameraTransform(float Alpha);
};

// Object: Class Hall.HallDisplayCtrlInterface
// Size: 0x28 (Inherited: 0x28)
struct IHallDisplayCtrlInterface : IInterface
{
	DEFINE_UE_CLASS_HELPERS(IHallDisplayCtrlInterface, "HallDisplayCtrlInterface")

	// Object: Function Hall.HallDisplayCtrlInterface.RefreshCharacterLookAtTarget
	// Flags: [Native|Public|HasDefaults]
	// Offset: 0x15519220
	// Params: [ Num(1) Size(0xC) ]
	void RefreshCharacterLookAtTarget(struct FVector Target);
};

// Object: Class Hall.HallDisplayCtrlManager
// Size: 0x80 (Inherited: 0x30)
struct UHallDisplayCtrlManager : UGameInstanceSubsystem
{
	DEFINE_UE_CLASS_HELPERS(UHallDisplayCtrlManager, "HallDisplayCtrlManager")

	struct TMap<struct FName, struct AHallDisplayCtrlBase*> DisplayCtrls; // 0x30(0x50)

	// Object: Function Hall.HallDisplayCtrlManager.GetMiniWorldSubLevels
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0xf657f6c
	// Params: [ Num(4) Size(0x30) ]
	struct TArray<struct FString> GetMiniWorldSubLevels(struct FName MiniWorldType, uint8_t bOpenLevelExistCheck, struct TArray<struct FString>& NoExistSubLevelNames);

	// Object: Function Hall.HallDisplayCtrlManager.GetLobbyScreenVedio
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xf9b57b8
	// Params: [ Num(2) Size(0x10) ]
	struct FName GetLobbyScreenVedio(struct FName MiniWorldType);

	// Object: Function Hall.HallDisplayCtrlManager.GetLobbyMiniWorldSubLevels
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0xf2c48b8
	// Params: [ Num(4) Size(0x30) ]
	struct TArray<struct FString> GetLobbyMiniWorldSubLevels(struct FName MiniWorldType, uint8_t bOpenLevelExistCheck, struct TArray<struct FString>& NoExistSubLevelNames);

	// Object: Function Hall.HallDisplayCtrlManager.GetLobbyDisplayType
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xf18dd88
	// Params: [ Num(2) Size(0x10) ]
	struct FName GetLobbyDisplayType(struct FName MiniWorldType);

	// Object: Function Hall.HallDisplayCtrlManager.GetLevelPriority
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x1074fdac
	// Params: [ Num(2) Size(0xC) ]
	int32_t GetLevelPriority(struct FName MiniWorldType);

	// Object: Function Hall.HallDisplayCtrlManager.GetLevelIsPermanent
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x155192d4
	// Params: [ Num(2) Size(0x9) ]
	uint8_t GetLevelIsPermanent(struct FName MiniWorldType);

	// Object: Function Hall.HallDisplayCtrlManager.GetHallDisplayCtrl
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xf139644
	// Params: [ Num(2) Size(0x10) ]
	struct AHallDisplayCtrlBase* GetHallDisplayCtrl(struct FName DisplayCtrlType);

	// Object: Function Hall.HallDisplayCtrlManager.Get
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0xf002f0c
	// Params: [ Num(2) Size(0x10) ]
	static struct UHallDisplayCtrlManager* Get(struct UObject* WorldContextObject);
};

// Object: Class Hall.HallDisplayItemActor
// Size: 0x380 (Inherited: 0x370)
struct AHallDisplayItemActor : AActor
{
	DEFINE_UE_CLASS_HELPERS(AHallDisplayItemActor, "HallDisplayItemActor")

	struct USkeletalMeshComponent* SkeletalMeshComp; // 0x370(0x8)
	struct UStaticMeshComponent* StaticMeshComp; // 0x378(0x8)
};

// Object: Class Hall.HallDisplayStageConfig
// Size: 0x30 (Inherited: 0x28)
struct UHallDisplayStageConfig : UObject
{
	DEFINE_UE_CLASS_HELPERS(UHallDisplayStageConfig, "HallDisplayStageConfig")

	uint8_t Pad_0x28[0x8]; // 0x28(0x8)
};

// Object: Class Hall.HallSurroundingDisplayStageConfig
// Size: 0x38 (Inherited: 0x30)
struct UHallSurroundingDisplayStageConfig : UHallDisplayStageConfig
{
	DEFINE_UE_CLASS_HELPERS(UHallSurroundingDisplayStageConfig, "HallSurroundingDisplayStageConfig")

	int32_t BgPlateMatIdx; // 0x2C(0x4)
	int32_t BgFogMatIdx; // 0x30(0x4)
	int32_t FogEffectIdx; // 0x34(0x4)
};

// Object: Class Hall.HallLightDisplayStageConfig
// Size: 0x58 (Inherited: 0x30)
struct UHallLightDisplayStageConfig : UHallDisplayStageConfig
{
	DEFINE_UE_CLASS_HELPERS(UHallLightDisplayStageConfig, "HallLightDisplayStageConfig")

	struct FString HallLightTag; // 0x30(0x10)
	uint8_t bResetOtherLights : 1; // 0x40(0x1), Mask(0x1)
	uint8_t BitPad_0x40_1 : 7; // 0x40(0x1)
	uint8_t Pad_0x41[0x3]; // 0x41(0x3)
	struct TWeakObjectPtr<struct AActor> HallLightGroup; // 0x44(0x8)
	uint8_t Pad_0x4C[0x4]; // 0x4C(0x4)
	struct AActor* RuntimeHallLightGroupBP; // 0x50(0x8)
};

// Object: Class Hall.HallCharacterDisplayStageConfig
// Size: 0x1B8 (Inherited: 0x30)
struct UHallCharacterDisplayStageConfig : UHallDisplayStageConfig
{
	DEFINE_UE_CLASS_HELPERS(UHallCharacterDisplayStageConfig, "HallCharacterDisplayStageConfig")

	struct FString PresetDisplayCharacterID; // 0x30(0x10)
	struct AHallCharacter* CharacterClass; // 0x40(0x8)
	struct TWeakObjectPtr<struct AActor> SpawnPoint; // 0x48(0x8)
	struct FHallCharacterMotionInfo MotionInfo; // 0x50(0x168)
};

// Object: Class Hall.HallDisplayStageConfiger
// Size: 0x8C0 (Inherited: 0x370)
struct AHallDisplayStageConfiger : AActor
{
	DEFINE_UE_CLASS_HELPERS(AHallDisplayStageConfiger, "HallDisplayStageConfiger")

	struct TMap<EHallCharacterDisplayStage, int32_t> BgPlateMatIdx; // 0x370(0x50)
	int32_t DefaultBgPlateMatIdx; // 0x3C0(0x4)
	uint8_t Pad_0x3C4[0x4]; // 0x3C4(0x4)
	struct TMap<EHallCharacterDisplayStage, int32_t> BgFogMatIdx; // 0x3C8(0x50)
	int32_t DefaultBgFogMatIdx; // 0x418(0x4)
	uint8_t Pad_0x41C[0x4]; // 0x41C(0x4)
	struct TMap<EHallCharacterDisplayStage, int32_t> FogEffectIdx; // 0x420(0x50)
	int32_t DefaultFogEffectIdx; // 0x470(0x4)
	uint8_t Pad_0x474[0x4]; // 0x474(0x4)
	struct TMap<EHallCharacterDisplayStage, struct FString> HallLightTag; // 0x478(0x50)
	struct FString DefaultHallLightTag; // 0x4C8(0x10)
	struct TMap<EHallCharacterDisplayStage, uint8_t> bResetOtherLights; // 0x4D8(0x50)
	uint8_t DefaultbResetOtherLights : 1; // 0x528(0x1), Mask(0x1)
	uint8_t BitPad_0x528_1 : 7; // 0x528(0x1)
	uint8_t Pad_0x529[0x7]; // 0x529(0x7)
	struct TMap<EHallCharacterDisplayStage, struct TWeakObjectPtr<struct AActor>> HallLightGroup; // 0x530(0x50)
	struct TWeakObjectPtr<struct AActor> DefaultHallLightGroup; // 0x580(0x8)
	struct TMap<EHallCharacterDisplayStage, struct AActor*> RuntimeHallLightGroupBP; // 0x588(0x50)
	struct AActor* DefaultRuntimeHallLightGroupBP; // 0x5D8(0x8)
	struct TMap<EHallCharacterDisplayStage, struct FString> PresetDisplayCharacterID; // 0x5E0(0x50)
	struct FString DefaultPresetDisplayCharacterID; // 0x630(0x10)
	struct TMap<EHallCharacterDisplayStage, struct AHallCharacter*> CharacterClass; // 0x640(0x50)
	struct AHallCharacter* DefaultCharacterClass; // 0x690(0x8)
	struct TMap<EHallCharacterDisplayStage, struct TWeakObjectPtr<struct AActor>> SpawnPoint; // 0x698(0x50)
	struct TWeakObjectPtr<struct AActor> DefaultSpawnPoint; // 0x6E8(0x8)
	struct TMap<EHallCharacterDisplayStage, struct FHallCharacterMotionInfo> MotionInfo; // 0x6F0(0x50)
	struct FHallCharacterMotionInfo DefaultMotionInfo; // 0x740(0x168)
	struct UHallSurroundingDisplayStageConfig* SurroundConfig; // 0x8A8(0x8)
	struct UHallLightDisplayStageConfig* LightConfig; // 0x8B0(0x8)
	struct UHallCharacterDisplayStageConfig* CharacterConfig; // 0x8B8(0x8)
};

// Object: Class Hall.HallExpertDisplayCtrl
// Size: 0x570 (Inherited: 0x4A8)
struct AHallExpertDisplayCtrl : AHallCommonDisplayCtrl
{
	DEFINE_UE_CLASS_HELPERS(AHallExpertDisplayCtrl, "HallExpertDisplayCtrl")

	struct AStaticMeshActor* ExpertBackground2; // 0x4A8(0x8)
	struct UHallExpertDisplaySequenceComponent* HallExpertLevelSequenceComponent; // 0x4B0(0x8)
	struct UHallCharacterVoiceComponent* HallCharacterVoiceComponent; // 0x4B8(0x8)
	struct TMap<struct FName, struct AEmitter*> SceneEmitters; // 0x4C0(0x50)
	struct UMaterialParameterCollection* ExpertEnvMaterialParamColl; // 0x510(0x8)
	struct UMaterialInstanceDynamic* ExpertBackgroundMatDynamic; // 0x518(0x8)
	struct TMap<struct FString, struct UTexture2D*> CachedBGImages; // 0x520(0x50)

	// Object: Function Hall.HallExpertDisplayCtrl.ToggleInteracted
	// Flags: [Final|Native|Private]
	// Offset: 0x1551b510
	// Params: [ Num(1) Size(0x1) ]
	void ToggleInteracted(uint8_t CanInteracted);

	// Object: Function Hall.HallExpertDisplayCtrl.StopPlaySequenceVoice
	// Flags: [Final|Native|Public]
	// Offset: 0x1551b4fc
	// Params: [ Num(0) Size(0x0) ]
	void StopPlaySequenceVoice();

	// Object: Function Hall.HallExpertDisplayCtrl.SetSceneEffectColorOverLife
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults]
	// Offset: 0x1551b3b8
	// Params: [ Num(3) Size(0x20) ]
	void SetSceneEffectColorOverLife(const struct FName& InKeyName, const struct FName& InParamName, struct FLinearColor InColor);

	// Object: Function Hall.HallExpertDisplayCtrl.SetCurrentCharacterSeqEnd
	// Flags: [Final|Native|Public]
	// Offset: 0x1551b3a4
	// Params: [ Num(0) Size(0x0) ]
	void SetCurrentCharacterSeqEnd();

	// Object: Function Hall.HallExpertDisplayCtrl.SetCharacterSuitAvatarWithSequence
	// Flags: [Final|Native|Public]
	// Offset: 0x1551b224
	// Params: [ Num(2) Size(0x20) ]
	void SetCharacterSuitAvatarWithSequence(struct FString AvatarID, struct FString MarkedFrameName);

	// Object: Function Hall.HallExpertDisplayCtrl.SetBackgroundAndFloorMatDynIns
	// Flags: [Final|Native|Public]
	// Offset: 0x1551b210
	// Params: [ Num(0) Size(0x0) ]
	void SetBackgroundAndFloorMatDynIns();

	// Object: Function Hall.HallExpertDisplayCtrl.SetBackgroundAndFloor
	// Flags: [Final|Native|Public|HasOutParms]
	// Offset: 0x1551b034
	// Params: [ Num(5) Size(0x34) ]
	void SetBackgroundAndFloor(const struct FName& InBackgroundMatParamName, const struct FName& InFloorMatParamName, struct FString InBackgroundPath, struct FString InFloorPath, const float& Index);

	// Object: Function Hall.HallExpertDisplayCtrl.ResetCharacterSequence
	// Flags: [Final|Native|Public]
	// Offset: 0x1551b020
	// Params: [ Num(0) Size(0x0) ]
	void ResetCharacterSequence();

	// Object: Function Hall.HallExpertDisplayCtrl.PlaySequenceVoiceInTrack
	// Flags: [Final|Native|Public]
	// Offset: 0x1551af28
	// Params: [ Num(1) Size(0x10) ]
	void PlaySequenceVoiceInTrack(struct FString InAvatarId);

	// Object: Function Hall.HallExpertDisplayCtrl.PlaySequenceVoice
	// Flags: [Final|Native|Public]
	// Offset: 0x1551ada8
	// Params: [ Num(2) Size(0x20) ]
	void PlaySequenceVoice(struct FString InAvatarId, struct FString InMarkedLabel);

	// Object: Function Hall.HallExpertDisplayCtrl.OnHeroAppearanceShow
	// Flags: [Final|Native|Public]
	// Offset: 0x1551acfc
	// Params: [ Num(1) Size(0x1) ]
	void OnHeroAppearanceShow(uint8_t bInVisible);

	// Object: Function Hall.HallExpertDisplayCtrl.DeactivateSmokeEffects
	// Flags: [Final|Native|Public]
	// Offset: 0x1551ace8
	// Params: [ Num(0) Size(0x0) ]
	void DeactivateSmokeEffects();

	// Object: Function Hall.HallExpertDisplayCtrl.ActivateSmokeEffects
	// Flags: [Final|Native|Public]
	// Offset: 0x1551acd4
	// Params: [ Num(0) Size(0x0) ]
	void ActivateSmokeEffects();
};

// Object: Class Hall.HallExpertDisplaySequenceComponent
// Size: 0x220 (Inherited: 0x1A0)
struct UHallExpertDisplaySequenceComponent : UHallDisplayLevelSequenceComponentBase
{
	DEFINE_UE_CLASS_HELPERS(UHallExpertDisplaySequenceComponent, "HallExpertDisplaySequenceComponent")

	uint8_t bCameraTrackFade : 1; // 0x1A0(0x1), Mask(0x1)
	uint8_t BitPad_0x1A0_1 : 7; // 0x1A0(0x1)
	uint8_t bCommitTransition : 1; // 0x1A1(0x1), Mask(0x1)
	uint8_t BitPad_0x1A1_1 : 7; // 0x1A1(0x1)
	uint8_t Pad_0x1A2[0x2A]; // 0x1A2(0x2A)
	float FromAlpha; // 0x1CC(0x4)
	float ToAlpha; // 0x1D0(0x4)
	float FadeDuration; // 0x1D4(0x4)
	float StopFadeDuration; // 0x1D8(0x4)
	struct FLinearColor FadeColor; // 0x1DC(0x10)
	uint8_t Pad_0x1EC[0x24]; // 0x1EC(0x24)
	struct AHallCharacter* CurrentHallCharacter; // 0x210(0x8)
	uint8_t Pad_0x218[0x8]; // 0x218(0x8)

	// Object: Function Hall.HallExpertDisplaySequenceComponent.StopTransition
	// Flags: [Final|Native|Private]
	// Offset: 0x1551b5dc
	// Params: [ Num(0) Size(0x0) ]
	void StopTransition();
};

// Object: Class Hall.HallFunctionStatics
// Size: 0x28 (Inherited: 0x28)
struct UHallFunctionStatics : UBlueprintFunctionLibrary
{
	DEFINE_UE_CLASS_HELPERS(UHallFunctionStatics, "HallFunctionStatics")

	// Object: Function Hall.HallFunctionStatics.Stop2DHeroAudio
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x1551b72c
	// Params: [ Num(0) Size(0x0) ]
	static void Stop2DHeroAudio();

	// Object: Function Hall.HallFunctionStatics.Play2DHeroAudio
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x1551b610
	// Params: [ Num(3) Size(0x28) ]
	static void Play2DHeroAudio(struct UObject* WorldContext, struct FString HeroIdStr, struct FString InVoiceId);
};

// Object: Class Hall.HallGeneralLevelSequenceCtrlComponent
// Size: 0x148 (Inherited: 0xF8)
struct UHallGeneralLevelSequenceCtrlComponent : UActorComponent
{
	DEFINE_UE_CLASS_HELPERS(UHallGeneralLevelSequenceCtrlComponent, "HallGeneralLevelSequenceCtrlComponent")

	struct FMulticastInlineDelegate OnGeneralSeqFinished; // 0xF8(0x10)
	struct ALevelSequenceActor* CurSequenceActor; // 0x108(0x8)
	uint8_t Pad_0x110[0x38]; // 0x110(0x38)

	// Object: Function Hall.HallGeneralLevelSequenceCtrlComponent.SetLoopCount
	// Flags: [Final|Native|Public]
	// Offset: 0x1551b9c4
	// Params: [ Num(1) Size(0x4) ]
	void SetLoopCount(int32_t LoopCount);

	// Object: Function Hall.HallGeneralLevelSequenceCtrlComponent.SeqGoToEndAndStop
	// Flags: [Final|Native|Public]
	// Offset: 0x1551b9b0
	// Params: [ Num(0) Size(0x0) ]
	void SeqGoToEndAndStop();

	// Object: Function Hall.HallGeneralLevelSequenceCtrlComponent.ResetGeneralLevelSequence
	// Flags: [Final|Native|Public]
	// Offset: 0x1551b99c
	// Params: [ Num(0) Size(0x0) ]
	void ResetGeneralLevelSequence();

	// Object: Function Hall.HallGeneralLevelSequenceCtrlComponent.PlayVehicleSequence
	// Flags: [Final|Native|Public]
	// Offset: 0x1551b8c0
	// Params: [ Num(2) Size(0x10) ]
	void PlayVehicleSequence(struct FName iSkinID, struct FName iVehicleID);

	// Object: Function Hall.HallGeneralLevelSequenceCtrlComponent.PlaySequenceByRowName
	// Flags: [Final|Native|Public]
	// Offset: 0x1551b81c
	// Params: [ Num(1) Size(0x8) ]
	void PlaySequenceByRowName(struct FName InRowName);

	// Object: Function Hall.HallGeneralLevelSequenceCtrlComponent.PlaySequence
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults]
	// Offset: 0x1551b75c
	// Params: [ Num(1) Size(0x18) ]
	void PlaySequence(const struct FSoftObjectPath& Path);

	// Object: Function Hall.HallGeneralLevelSequenceCtrlComponent.OnSequenceFinished
	// Flags: [Final|Native|Private]
	// Offset: 0x1551b748
	// Params: [ Num(0) Size(0x0) ]
	void OnSequenceFinished();
};

// Object: Class Hall.HallGeneralRotateComponent
// Size: 0x190 (Inherited: 0xF8)
struct UHallGeneralRotateComponent : UActorComponent
{
	DEFINE_UE_CLASS_HELPERS(UHallGeneralRotateComponent, "HallGeneralRotateComponent")

	uint8_t Pad_0xF8[0x58]; // 0xF8(0x58)
	EGPWeaponEasingType TransitionEasingType; // 0x150(0x1)
	uint8_t Pad_0x151[0x3]; // 0x151(0x3)
	struct TWeakObjectPtr<struct AActor> RotateTargetActor; // 0x154(0x8)
	struct FVector2D PitchRange; // 0x15C(0x8)
	struct FVector2D YawRange; // 0x164(0x8)
	struct FVector2D RollRange; // 0x16C(0x8)
	float Strength; // 0x174(0x4)
	float ReboundTransitionTime; // 0x178(0x4)
	struct FVector RotateSpeed; // 0x17C(0xC)
	uint8_t LockRoll : 1; // 0x188(0x1), Mask(0x1)
	uint8_t BitPad_0x188_1 : 7; // 0x188(0x1)
	uint8_t Pad_0x189[0x7]; // 0x189(0x7)
};

// Object: Class Hall.HallHangingDisplayCtrl
// Size: 0x3F0 (Inherited: 0x388)
struct AHallHangingDisplayCtrl : AHallDisplayCtrlBase
{
	DEFINE_UE_CLASS_HELPERS(AHallHangingDisplayCtrl, "HallHangingDisplayCtrl")

	struct UHallCameraCtrlComponentBase* CameraCtrlComponent; // 0x388(0x8)
	struct UHallItemDisplayComponent* ItemDisplayComponent; // 0x390(0x8)
	struct TMap<struct FName, struct FHallDisplayInfoBase> DisplayInfoMap; // 0x398(0x50)
	uint8_t Pad_0x3E8[0x8]; // 0x3E8(0x8)

	// Object: Function Hall.HallHangingDisplayCtrl.SetItemCalBound
	// Flags: [Final|Native|Public]
	// Offset: 0x1551bd5c
	// Params: [ Num(1) Size(0x1) ]
	void SetItemCalBound(uint8_t Enable);

	// Object: Function Hall.HallHangingDisplayCtrl.SetDisplayType
	// Flags: [Final|Native|Public]
	// Offset: 0x1551bcb0
	// Params: [ Num(1) Size(0x10) ]
	void SetDisplayType(struct FString InDisplayType);

	// Object: Function Hall.HallHangingDisplayCtrl.SetDisplayItem
	// Flags: [Final|Native|Public]
	// Offset: 0x1551bc04
	// Params: [ Num(1) Size(0x10) ]
	void SetDisplayItem(struct FString ItemID);

	// Object: Function Hall.HallHangingDisplayCtrl.ResetDisplayItem
	// Flags: [Final|Native|Public]
	// Offset: 0x1551bbf0
	// Params: [ Num(0) Size(0x0) ]
	void ResetDisplayItem();
};

// Object: Class Hall.HallHeroActionShowComponent
// Size: 0x1E0 (Inherited: 0x1A0)
struct UHallHeroActionShowComponent : UHallDisplayLevelSequenceComponentBase
{
	DEFINE_UE_CLASS_HELPERS(UHallHeroActionShowComponent, "HallHeroActionShowComponent")

	struct AHallCharacter* CurHallCharacter; // 0x1A0(0x8)
	uint8_t Pad_0x1A8[0x38]; // 0x1A8(0x38)

	// Object: Function Hall.HallHeroActionShowComponent.SetSkillItemMesh
	// Flags: [Final|Native|Protected|HasOutParms]
	// Offset: 0x1551c134
	// Params: [ Num(2) Size(0x10) ]
	void SetSkillItemMesh(struct ULevelSequencePlayer* SequencePlayer, const struct FName& InHeroItemFashionId);

	// Object: Function Hall.HallHeroActionShowComponent.SetSkillItemAppearance
	// Flags: [Final|Native|Protected|HasOutParms]
	// Offset: 0x1551c044
	// Params: [ Num(2) Size(0x10) ]
	void SetSkillItemAppearance(struct ULevelSequencePlayer* SequencePlayer, const struct FName& InHeroItemFashionId);

	// Object: Function Hall.HallHeroActionShowComponent.OnHeroItemMatLoadTaskComplete
	// Flags: [Final|Native|Protected]
	// Offset: 0x1551bfa0
	// Params: [ Num(1) Size(0x4) ]
	void OnHeroItemMatLoadTaskComplete(int32_t NewHandleId);

	// Object: Function Hall.HallHeroActionShowComponent.OnHallCharacterLoadedDone
	// Flags: [Final|Native|Protected]
	// Offset: 0x1551be1c
	// Params: [ Num(3) Size(0x19) ]
	void OnHallCharacterLoadedDone(struct AHallCharacter* InHallCharacter, struct FString ActionId, uint8_t IsUsedSeq);
};

// Object: Class Hall.HallHighLevelDisplayComponent
// Size: 0x1E0 (Inherited: 0xF8)
struct UHallHighLevelDisplayComponent : UActorComponent
{
	DEFINE_UE_CLASS_HELPERS(UHallHighLevelDisplayComponent, "HallHighLevelDisplayComponent")

	uint8_t Pad_0xF8[0x44]; // 0xF8(0x44)
	int32_t DefaultPosition; // 0x13C(0x4)
	int32_t DefaultHighLevel; // 0x140(0x4)
	uint8_t Pad_0x144[0x4]; // 0x144(0x4)
	struct FString MiniWorldName; // 0x148(0x10)
	uint8_t bHandleMultilLevels : 1; // 0x158(0x1), Mask(0x1)
	uint8_t BitPad_0x158_1 : 7; // 0x158(0x1)
	uint8_t Pad_0x159[0x3]; // 0x159(0x3)
	struct FName LoadLevelActionName; // 0x15C(0x8)
	struct FName UnloadLevelActionName; // 0x164(0x8)
	uint8_t Pad_0x16C[0x4]; // 0x16C(0x4)
	struct TMap<int32_t, struct FLoadLevelContext> LoadContexts; // 0x170(0x50)
	uint8_t Pad_0x1C0[0x10]; // 0x1C0(0x10)
	struct FString DefaultSceneKey; // 0x1D0(0x10)

	// Object: Function Hall.HallHighLevelDisplayComponent.UnloadBPLevelOptimize
	// Flags: [Final|Native|Public]
	// Offset: 0x1551d32c
	// Params: [ Num(2) Size(0x20) ]
	void UnloadBPLevelOptimize(struct FString InAvatarId, struct FString InNewAvatarID);

	// Object: Function Hall.HallHighLevelDisplayComponent.UnloadBPLevel
	// Flags: [Final|Native|Public]
	// Offset: 0x1551d1f0
	// Params: [ Num(2) Size(0x20) ]
	void UnloadBPLevel(struct FString InAvatarId, struct FString InNewAvatarID);

	// Object: Function Hall.HallHighLevelDisplayComponent.SwitchLight
	// Flags: [Final|Native|Public]
	// Offset: 0x1551d144
	// Params: [ Num(1) Size(0x10) ]
	void SwitchLight(struct FString InMiniWorldName);

	// Object: Function Hall.HallHighLevelDisplayComponent.SwitchHeightFog
	// Flags: [Final|Native|Public]
	// Offset: 0x1551d130
	// Params: [ Num(0) Size(0x0) ]
	void SwitchHeightFog();

	// Object: Function Hall.HallHighLevelDisplayComponent.SetStopProcess
	// Flags: [Final|Native|Public]
	// Offset: 0x1551d084
	// Params: [ Num(1) Size(0x1) ]
	void SetStopProcess(uint8_t bStop);

	// Object: Function Hall.HallHighLevelDisplayComponent.SetLightAndFog
	// Flags: [Final|Native|Public]
	// Offset: 0x1551cfd8
	// Params: [ Num(1) Size(0x1) ]
	void SetLightAndFog(uint8_t bEnabled);

	// Object: Function Hall.HallHighLevelDisplayComponent.SetEnableRecordLoadedLevelNames
	// Flags: [Final|Native|Public]
	// Offset: 0x1551cf2c
	// Params: [ Num(1) Size(0x1) ]
	void SetEnableRecordLoadedLevelNames(uint8_t bEnabled);

	// Object: Function Hall.HallHighLevelDisplayComponent.SetDefaultSceneKey
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x1551ce80
	// Params: [ Num(1) Size(0x10) ]
	void SetDefaultSceneKey(struct FString InDefaultSceneKey);

	// Object: Function Hall.HallHighLevelDisplayComponent.SetDefaultLevelVisibility
	// Flags: [Final|Native|Public]
	// Offset: 0x1551cdd4
	// Params: [ Num(1) Size(0x1) ]
	void SetDefaultLevelVisibility(uint8_t bVisible);

	// Object: Function Hall.HallHighLevelDisplayComponent.SetBPLevelDisplayOptimize
	// Flags: [Final|Native|Public]
	// Offset: 0x1551cce4
	// Params: [ Num(2) Size(0x11) ]
	void SetBPLevelDisplayOptimize(struct FString InAvatarId, uint8_t isOperator);

	// Object: Function Hall.HallHighLevelDisplayComponent.SetBPLevelDisplayAsyncOptimize2
	// Flags: [Final|Native|Public]
	// Offset: 0x1551cc38
	// Params: [ Num(1) Size(0x10) ]
	void SetBPLevelDisplayAsyncOptimize2(struct FString InAvatarId);

	// Object: Function Hall.HallHighLevelDisplayComponent.SetBPLevelDisplayAsyncOptimize
	// Flags: [Final|Native|Public]
	// Offset: 0x1551cb8c
	// Params: [ Num(1) Size(0x10) ]
	void SetBPLevelDisplayAsyncOptimize(struct FString InAvatarId);

	// Object: Function Hall.HallHighLevelDisplayComponent.SetBPLevelDisplayAsync
	// Flags: [Final|Native|Public]
	// Offset: 0x1551cae0
	// Params: [ Num(1) Size(0x10) ]
	void SetBPLevelDisplayAsync(struct FString InAvatarId);

	// Object: Function Hall.HallHighLevelDisplayComponent.SetBPLevelDisplay
	// Flags: [Final|Native|Public]
	// Offset: 0x1551c9f0
	// Params: [ Num(2) Size(0x11) ]
	void SetBPLevelDisplay(struct FString InAvatarId, uint8_t isOperator);

	// Object: Function Hall.HallHighLevelDisplayComponent.ResetId
	// Flags: [Final|Native|Public]
	// Offset: 0x1551c9dc
	// Params: [ Num(0) Size(0x0) ]
	void ResetId();

	// Object: Function Hall.HallHighLevelDisplayComponent.ResetDefaultSceneKey
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x1551c9c8
	// Params: [ Num(0) Size(0x0) ]
	void ResetDefaultSceneKey();

	// Object: Function Hall.HallHighLevelDisplayComponent.OnUnloadLatentActionCompletedWithAsync
	// Flags: [Final|Native|Public]
	// Offset: 0xfc85688
	// Params: [ Num(1) Size(0x4) ]
	void OnUnloadLatentActionCompletedWithAsync(int32_t Linkage);

	// Object: Function Hall.HallHighLevelDisplayComponent.OnUnloadLatentActionCompletedOptimize
	// Flags: [Final|Native|Public]
	// Offset: 0x1551c924
	// Params: [ Num(1) Size(0x4) ]
	void OnUnloadLatentActionCompletedOptimize(int32_t Linkage);

	// Object: Function Hall.HallHighLevelDisplayComponent.OnUnloadLatentActionCompleted
	// Flags: [Final|Native|Public]
	// Offset: 0x1551c880
	// Params: [ Num(1) Size(0x4) ]
	void OnUnloadLatentActionCompleted(int32_t Linkage);

	// Object: Function Hall.HallHighLevelDisplayComponent.OnLatentActionCompletedWithAsyncOptimize2
	// Flags: [Final|Native|Public]
	// Offset: 0x1551c7dc
	// Params: [ Num(1) Size(0x4) ]
	void OnLatentActionCompletedWithAsyncOptimize2(int32_t Linkage);

	// Object: Function Hall.HallHighLevelDisplayComponent.OnLatentActionCompletedWithAsyncOptimize
	// Flags: [Final|Native|Public]
	// Offset: 0x1551c738
	// Params: [ Num(1) Size(0x4) ]
	void OnLatentActionCompletedWithAsyncOptimize(int32_t Linkage);

	// Object: Function Hall.HallHighLevelDisplayComponent.OnLatentActionCompletedWithAsync
	// Flags: [Final|Native|Public]
	// Offset: 0x10917c60
	// Params: [ Num(1) Size(0x4) ]
	void OnLatentActionCompletedWithAsync(int32_t Linkage);

	// Object: Function Hall.HallHighLevelDisplayComponent.OnLatentActionCompletedOptimize
	// Flags: [Final|Native|Public]
	// Offset: 0x1551c694
	// Params: [ Num(1) Size(0x4) ]
	void OnLatentActionCompletedOptimize(int32_t Linkage);

	// Object: Function Hall.HallHighLevelDisplayComponent.OnLatentActionCompleted
	// Flags: [Final|Native|Public]
	// Offset: 0x1551c5f0
	// Params: [ Num(1) Size(0x4) ]
	void OnLatentActionCompleted(int32_t Linkage);

	// Object: Function Hall.HallHighLevelDisplayComponent.OnAnyLevelShown
	// Flags: [Final|Native|Public]
	// Offset: 0x1551c5dc
	// Params: [ Num(0) Size(0x0) ]
	void OnAnyLevelShown();

	// Object: Function Hall.HallHighLevelDisplayComponent.IsUnUsingDefaultSceneKey
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x1551c514
	// Params: [ Num(2) Size(0x11) ]
	uint8_t IsUnUsingDefaultSceneKey(struct FString& InAvatarId);

	// Object: Function Hall.HallHighLevelDisplayComponent.Init
	// Flags: [Final|Native|Public|HasOutParms]
	// Offset: 0x1551c460
	// Params: [ Num(1) Size(0x8) ]
	void Init(const struct FName& InDisplayTypeStr);

	// Object: Function Hall.HallHighLevelDisplayComponent.GetDefaultSceneKey
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x1551c3dc
	// Params: [ Num(1) Size(0x10) ]
	struct FString GetDefaultSceneKey();

	// Object: Function Hall.HallHighLevelDisplayComponent.EnableExtraLightGroup
	// Flags: [Final|Native|Public]
	// Offset: 0x1551c330
	// Params: [ Num(1) Size(0x1) ]
	void EnableExtraLightGroup(uint8_t bEnabled);

	// Object: Function Hall.HallHighLevelDisplayComponent.DeactivateLight
	// Flags: [Final|Native|Public]
	// Offset: 0x1551c31c
	// Params: [ Num(0) Size(0x0) ]
	void DeactivateLight();

	// Object: Function Hall.HallHighLevelDisplayComponent.DeactivateHeightFog
	// Flags: [Final|Native|Public]
	// Offset: 0x1551c308
	// Params: [ Num(0) Size(0x0) ]
	void DeactivateHeightFog();
};

// Object: Class Hall.HallItemDisplayComponent
// Size: 0x120 (Inherited: 0xF8)
struct UHallItemDisplayComponent : UActorComponent
{
	DEFINE_UE_CLASS_HELPERS(UHallItemDisplayComponent, "HallItemDisplayComponent")

	struct TWeakObjectPtr<struct AActor> ItemSpawnPoint; // 0xF8(0x8)
	uint8_t IsCalBound : 1; // 0x100(0x1), Mask(0x1)
	uint8_t BitPad_0x100_1 : 7; // 0x100(0x1)
	uint8_t Pad_0x101[0x3]; // 0x101(0x3)
	float CalBoundMaxY; // 0x104(0x4)
	float CalBoundMinY; // 0x108(0x4)
	float CalBoundMaxZ; // 0x10C(0x4)
	float CalBoundMinZ; // 0x110(0x4)
	uint8_t Pad_0x114[0x4]; // 0x114(0x4)
	struct AHallDisplayItemActor* HallDisplayItemActor; // 0x118(0x8)
};

// Object: Class Hall.HallLevelSequenceCameraParamActor
// Size: 0x378 (Inherited: 0x370)
struct AHallLevelSequenceCameraParamActor : AActor
{
	DEFINE_UE_CLASS_HELPERS(AHallLevelSequenceCameraParamActor, "HallLevelSequenceCameraParamActor")

	float FieldOfView; // 0x370(0x4)
	uint8_t Pad_0x374[0x4]; // 0x374(0x4)
};

// Object: Class Hall.HallLevelSequenceComponent
// Size: 0x140 (Inherited: 0xF8)
struct UHallLevelSequenceComponent : UActorComponent
{
	DEFINE_UE_CLASS_HELPERS(UHallLevelSequenceComponent, "HallLevelSequenceComponent")

	struct AHallMainDisplayCtrl* OwnerCtrl; // 0xF8(0x8)
	uint8_t Pad_0x100[0x18]; // 0x100(0x18)
	struct ALevelSequenceActor* HallCharacterLevelSequenceActor; // 0x118(0x8)
	uint8_t Pad_0x120[0x18]; // 0x120(0x18)
	struct TWeakObjectPtr<struct AHallLevelSequenceCameraParamActor> CameraParamActor; // 0x138(0x8)

	// Object: Function Hall.HallLevelSequenceComponent.OnMovieSceneSequencePlayerEventStop
	// Flags: [Final|Native|Private]
	// Offset: 0x1551eb58
	// Params: [ Num(0) Size(0x0) ]
	void OnMovieSceneSequencePlayerEventStop();

	// Object: Function Hall.HallLevelSequenceComponent.OnMovieSceneSequencePlayerEventFinished
	// Flags: [Final|Native|Private]
	// Offset: 0x1551eb44
	// Params: [ Num(0) Size(0x0) ]
	void OnMovieSceneSequencePlayerEventFinished();
};

// Object: Class Hall.HallLevelSequenceManager
// Size: 0x60 (Inherited: 0x30)
struct UHallLevelSequenceManager : UWorldSubsystem
{
	DEFINE_UE_CLASS_HELPERS(UHallLevelSequenceManager, "HallLevelSequenceManager")

	struct FMulticastInlineDelegate OnSequenceStopped; // 0x30(0x10)
	struct FMulticastInlineDelegate OnLevelAndSeqLoadedCompleted; // 0x40(0x10)
	uint8_t Pad_0x50[0x2]; // 0x50(0x2)
	uint8_t IsMotionBlurEnabled : 1; // 0x52(0x1), Mask(0x1)
	uint8_t BitPad_0x52_1 : 7; // 0x52(0x1)
	uint8_t Pad_0x53[0x1]; // 0x53(0x1)
	float OriginalMotionBlurAmount; // 0x54(0x4)
	int32_t OriginalMotionBlurSelectiveMode; // 0x58(0x4)
	uint8_t Pad_0x5C[0x4]; // 0x5C(0x4)

	// Object: Function Hall.HallLevelSequenceManager.UnBindOnSeqStopped
	// Flags: [Final|Native|Public]
	// Offset: 0x1551f118
	// Params: [ Num(1) Size(0x8) ]
	void UnBindOnSeqStopped(struct UObject* obj);

	// Object: Function Hall.HallLevelSequenceManager.UnBindOnLevelAndSeqLoadedCompleted
	// Flags: [Final|Native|Public]
	// Offset: 0x1551f074
	// Params: [ Num(1) Size(0x8) ]
	void UnBindOnLevelAndSeqLoadedCompleted(struct UObject* obj);

	// Object: Function Hall.HallLevelSequenceManager.SetSeqLoaded
	// Flags: [Final|Native|Public]
	// Offset: 0x1551efc8
	// Params: [ Num(1) Size(0x1) ]
	void SetSeqLoaded(uint8_t IsLoaded);

	// Object: Function Hall.HallLevelSequenceManager.SetMotionBlurAmount
	// Flags: [Final|Native|Public]
	// Offset: 0x1551ef24
	// Params: [ Num(1) Size(0x4) ]
	void SetMotionBlurAmount(float InAmount);

	// Object: Function Hall.HallLevelSequenceManager.SetLevelLoaded
	// Flags: [Final|Native|Public]
	// Offset: 0x1551ee78
	// Params: [ Num(1) Size(0x1) ]
	void SetLevelLoaded(uint8_t IsLoaded);

	// Object: Function Hall.HallLevelSequenceManager.RestoreMotionBlurAmount
	// Flags: [Final|Native|Public]
	// Offset: 0x1551ee64
	// Params: [ Num(0) Size(0x0) ]
	void RestoreMotionBlurAmount();

	// Object: Function Hall.HallLevelSequenceManager.GetSeqIsLoaded
	// Flags: [Final|Native|Public]
	// Offset: 0x1551ee2c
	// Params: [ Num(1) Size(0x1) ]
	uint8_t GetSeqIsLoaded();

	// Object: Function Hall.HallLevelSequenceManager.GetOnSeqStopped
	// Flags: [Final|Native|Public]
	// Offset: 0x1551eda4
	// Params: [ Num(1) Size(0x10) ]
	struct FMulticastInlineDelegate GetOnSeqStopped();

	// Object: Function Hall.HallLevelSequenceManager.GetOnLevelAndSeqLoadedCompleted
	// Flags: [Final|Native|Public]
	// Offset: 0x1551ed1c
	// Params: [ Num(1) Size(0x10) ]
	struct FMulticastInlineDelegate GetOnLevelAndSeqLoadedCompleted();

	// Object: Function Hall.HallLevelSequenceManager.GetLevelIsLoaded
	// Flags: [Final|Native|Public]
	// Offset: 0x1551ece4
	// Params: [ Num(1) Size(0x1) ]
	uint8_t GetLevelIsLoaded();

	// Object: Function Hall.HallLevelSequenceManager.Get
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x1551ec40
	// Params: [ Num(2) Size(0x10) ]
	static struct UHallLevelSequenceManager* Get(struct UObject* WorldContext);

	// Object: Function Hall.HallLevelSequenceManager.ExecuteOnSeqStopped
	// Flags: [Final|Native|Public]
	// Offset: 0x1551eb94
	// Params: [ Num(1) Size(0x1) ]
	void ExecuteOnSeqStopped(uint8_t bStopped);

	// Object: Function Hall.HallLevelSequenceManager.ExecuteOnLevelAndSeqLoadedCompleted
	// Flags: [Final|Native|Public]
	// Offset: 0x1551eb80
	// Params: [ Num(0) Size(0x0) ]
	void ExecuteOnLevelAndSeqLoadedCompleted();
};

// Object: Class Hall.HallLevelStreamingManager
// Size: 0x50 (Inherited: 0x30)
struct UHallLevelStreamingManager : UWorldSubsystem
{
	DEFINE_UE_CLASS_HELPERS(UHallLevelStreamingManager, "HallLevelStreamingManager")

	uint8_t Pad_0x30[0x20]; // 0x30(0x20)

	// Object: Function Hall.HallLevelStreamingManager.UnloadHallSubLevels
	// Flags: [Final|Native|Public|HasOutParms]
	// Offset: 0x1552009c
	// Params: [ Num(3) Size(0x19) ]
	uint8_t UnloadHallSubLevels(struct UObject* WorldContextObject, const struct TArray<struct FName>& InLevelNames);

	// Object: Function Hall.HallLevelStreamingManager.UnloadHallSubLevelOptimize
	// Flags: [Final|Native|Public|HasOutParms]
	// Offset: 0x1551ff44
	// Params: [ Num(4) Size(0x29) ]
	uint8_t UnloadHallSubLevelOptimize(struct UObject* WorldContextObject, const struct FName& InLevelName, const struct FLatentActionInfo& LatentActionInfo);

	// Object: Function Hall.HallLevelStreamingManager.UnloadHallSubLevel
	// Flags: [Final|Native|Public|HasOutParms]
	// Offset: 0x1551fda8
	// Params: [ Num(5) Size(0x2A) ]
	uint8_t UnloadHallSubLevel(struct UObject* WorldContextObject, const struct FName& InLevelName, const struct FLatentActionInfo& LatentActionInfo, uint8_t bMarkVisible);

	// Object: Function Hall.HallLevelStreamingManager.SetSyncLoadLevel
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x1551fd0c
	// Params: [ Num(1) Size(0x1) ]
	static void SetSyncLoadLevel(uint8_t bSync);

	// Object: Function Hall.HallLevelStreamingManager.SetSubLevelVisibility
	// Flags: [Final|Native|Public|HasOutParms]
	// Offset: 0x1551fbd8
	// Params: [ Num(3) Size(0x11) ]
	void SetSubLevelVisibility(struct UWorld* World, const struct FName& InLevelName, uint8_t bVisible);

	// Object: Function Hall.HallLevelStreamingManager.ReadWorldTile
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults]
	// Offset: 0x1551fa44
	// Params: [ Num(4) Size(0x29) ]
	static uint8_t ReadWorldTile(struct FString InPackageFileName, struct FVector& Position, struct FVector& AbsPosition);

	// Object: Function Hall.HallLevelStreamingManager.LoadHallSubLevels
	// Flags: [Final|Native|Public|HasOutParms]
	// Offset: 0x1551f8e4
	// Params: [ Num(4) Size(0x29) ]
	uint8_t LoadHallSubLevels(struct UObject* WorldContextObject, const struct TArray<struct FName>& InLevelNames, const struct TArray<struct FLatentActionInfo>& LatentActionInfos);

	// Object: Function Hall.HallLevelStreamingManager.LoadHallSubLevelOptimize
	// Flags: [Final|Native|Public|HasOutParms]
	// Offset: 0x1551f748
	// Params: [ Num(5) Size(0x2A) ]
	uint8_t LoadHallSubLevelOptimize(struct UObject* WorldContextObject, const struct FName& InLevelName, const struct FLatentActionInfo& LatentActionInfo, uint8_t bVisibleAfterLoad);

	// Object: Function Hall.HallLevelStreamingManager.LoadHallSubLevel
	// Flags: [Final|Native|Public|HasOutParms]
	// Offset: 0x1551f5ac
	// Params: [ Num(5) Size(0x2A) ]
	uint8_t LoadHallSubLevel(struct UObject* WorldContextObject, const struct FName& InLevelName, const struct FLatentActionInfo& LatentActionInfo, uint8_t bMarkVisible);

	// Object: Function Hall.HallLevelStreamingManager.IsSubLevelVisible
	// Flags: [Final|Native|Public|HasOutParms]
	// Offset: 0x1551f4b0
	// Params: [ Num(3) Size(0x11) ]
	uint8_t IsSubLevelVisible(struct UWorld* World, const struct FName& InLevelName);

	// Object: Function Hall.HallLevelStreamingManager.IsSubLevelLoaded
	// Flags: [Final|Native|Public|HasOutParms]
	// Offset: 0x1551f3b4
	// Params: [ Num(3) Size(0x11) ]
	uint8_t IsSubLevelLoaded(struct UWorld* World, const struct FName& InLevelName);

	// Object: Function Hall.HallLevelStreamingManager.GetLevelStreamingSubLevel
	// Flags: [Final|Native|Public|HasOutParms]
	// Offset: 0x1551f2bc
	// Params: [ Num(3) Size(0x18) ]
	struct ULevelStreaming* GetLevelStreamingSubLevel(struct UWorld* World, const struct FName& InLevelName);

	// Object: Function Hall.HallLevelStreamingManager.Get
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x1551f218
	// Params: [ Num(2) Size(0x10) ]
	static struct UHallLevelStreamingManager* Get(struct UObject* WorldContext);
};

// Object: Class Hall.HallLightGroupCollectorActor
// Size: 0x390 (Inherited: 0x370)
struct AHallLightGroupCollectorActor : AActor
{
	DEFINE_UE_CLASS_HELPERS(AHallLightGroupCollectorActor, "HallLightGroupCollectorActor")

	struct TWeakObjectPtr<struct ADFMLightGroup> LightGroupActor; // 0x370(0x8)
	struct TArray<struct TWeakObjectPtr<struct AActor>> CollectorActors; // 0x378(0x10)
	struct TWeakObjectPtr<struct APostProcessVolume> PostProcessVolumn; // 0x388(0x8)
};

// Object: Class Hall.HallLightGroupComponent
// Size: 0x118 (Inherited: 0xF8)
struct UHallLightGroupComponent : UActorComponent
{
	DEFINE_UE_CLASS_HELPERS(UHallLightGroupComponent, "HallLightGroupComponent")

	ETransformType TransformType; // 0xF8(0x1)
	uint8_t Pad_0xF9[0x3]; // 0xF9(0x3)
	struct TWeakObjectPtr<struct ADFMLightGroup> CurLightBPActor; // 0xFC(0x8)
	uint8_t Pad_0x104[0xC]; // 0x104(0xC)
	struct TWeakObjectPtr<struct AActor> LightSpawnPoint; // 0x110(0x8)

	// Object: Function Hall.HallLightGroupComponent.ResetLightBP
	// Flags: [Final|Native|Public|HasOutParms]
	// Offset: 0x15520570
	// Params: [ Num(2) Size(0x9) ]
	void ResetLightBP(const struct FName& InDefaultLightName, uint8_t bEnableDefaultLight);

	// Object: Function Hall.HallLightGroupComponent.OnLightBPLoadedComplete
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults]
	// Offset: 0x155204b0
	// Params: [ Num(1) Size(0x18) ]
	void OnLightBPLoadedComplete(const struct FSoftObjectPath& InPath);

	// Object: Function Hall.HallLightGroupComponent.LoadAndSetLightBP
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults]
	// Offset: 0x155203ac
	// Params: [ Num(2) Size(0x20) ]
	void LoadAndSetLightBP(const struct FSoftClassPath& InClassPath, struct AActor* InSpawnPoint);

	// Object: Function Hall.HallLightGroupComponent.GetCurLightBpActor
	// Flags: [Final|Native|Public]
	// Offset: 0x15520378
	// Params: [ Num(1) Size(0x8) ]
	struct ADFMLightGroup* GetCurLightBpActor();

	// Object: Function Hall.HallLightGroupComponent.ActivateDefaultLightGroup
	// Flags: [Final|Native|Public|HasOutParms]
	// Offset: 0x155202c4
	// Params: [ Num(1) Size(0x8) ]
	void ActivateDefaultLightGroup(const struct FName& InDefaultLightName);
};

// Object: Class Hall.HallLotteryDisplayCtrl
// Size: 0x660 (Inherited: 0x388)
struct AHallLotteryDisplayCtrl : AHallDisplayCtrlBase
{
	DEFINE_UE_CLASS_HELPERS(AHallLotteryDisplayCtrl, "HallLotteryDisplayCtrl")

	uint8_t Pad_0x388[0x18]; // 0x388(0x18)
	struct UHallCameraCtrlComponentBase* CameraCtrlComponent; // 0x3A0(0x8)
	struct TMap<struct FName, struct FHallDisplayInfoBase> DisplayInfoMap; // 0x3A8(0x50)
	struct UHallLotteryDisplaySequenceComponent* HallLotteryLevelSequenceComponent; // 0x3F8(0x8)
	struct UHallLotteryDisplaySequenceComponent* HallLotteryLevelSequenceComponentMY; // 0x400(0x8)
	struct UHallWeaponDisplayComponent* WeaponDisplayComponent; // 0x408(0x8)
	struct UHallWeaponDisplayComponent* WeaponDisplayComponentGray; // 0x410(0x8)
	struct UMaterialInterface* BaseMaterial; // 0x418(0x8)
	uint8_t Pad_0x420[0x20]; // 0x420(0x20)
	float AutoFinishTime_MandelBrick; // 0x440(0x4)
	float ShowGuideTime_MandelBrick; // 0x444(0x4)
	int32_t ItemQualityNormalLimit; // 0x448(0x4)
	struct FName EnterAudioName_MandelBrick; // 0x44C(0x8)
	struct FName UIUnboxingMandelScanLoop_MandelBrick; // 0x454(0x8)
	uint8_t Pad_0x45C[0x4]; // 0x45C(0x4)
	struct FName UIUnboxingMandelScanStop_MandelBrick; // 0x460(0x8)
	uint8_t Pad_0x468[0x4]; // 0x468(0x4)
	struct FName FadeInAudioName_MandelBrick; // 0x46C(0x8)
	uint8_t Pad_0x474[0x4]; // 0x474(0x4)
	struct FName UIUnboxingMandelScan_MandelBrick; // 0x478(0x8)
	uint8_t Pad_0x480[0x4]; // 0x480(0x4)
	struct FName ClickPressedAudioName_MandelBrick; // 0x484(0x8)
	uint8_t Pad_0x48C[0x4]; // 0x48C(0x4)
	struct FName ClickReleasedAudioName_MandelBrick; // 0x490(0x8)
	uint8_t Pad_0x498[0x4]; // 0x498(0x4)
	struct FName FadeOutAudioName_MandelBrick; // 0x49C(0x8)
	uint8_t Pad_0x4A4[0x4]; // 0x4A4(0x4)
	struct FName MythicQualityAudioName_MandelBrick; // 0x4A8(0x8)
	struct FName NormalQualityAudioName_MandelBrick; // 0x4B0(0x8)
	struct FName ShowAudioName_MandelBrick; // 0x4B8(0x8)
	uint8_t Pad_0x4C0[0x4]; // 0x4C0(0x4)
	struct FName ProgressAudioName_MandelBrick; // 0x4C4(0x8)
	struct FName RTPC_Mandel_Scan_Intensity; // 0x4CC(0x8)
	struct FName LoopMusicAudioName_MandelBrick; // 0x4D4(0x8)
	struct FName StopMusicAudioName_MandelBrick; // 0x4DC(0x8)
	struct FName UIUnboxingMandel_MandelBrick; // 0x4E4(0x8)
	struct FName ShowMusicAudioName_MandelBrick; // 0x4EC(0x8)
	uint8_t Pad_0x4F4[0x4]; // 0x4F4(0x4)
	struct AStaticMeshActor* MandelBrickActor; // 0x4F8(0x8)
	struct UParticleSystemComponent* FXC_NormalLine_MandelBrick; // 0x500(0x8)
	struct UParticleSystemComponent* FXC_ClickLine_MandelBrick; // 0x508(0x8)
	struct UParticleSystemComponent* FXC_TipsLine_MandelBrick; // 0x510(0x8)
	struct FMulticastInlineDelegate OnMandelBrickOperateStart; // 0x518(0x10)
	struct FMulticastInlineDelegate OnMandelBrickReadyClick; // 0x528(0x10)
	uint8_t bOnMandelBrickReadyClick : 1; // 0x538(0x1), Mask(0x1)
	uint8_t BitPad_0x538_1 : 7; // 0x538(0x1)
	uint8_t Pad_0x539[0x7]; // 0x539(0x7)
	struct FMulticastInlineDelegate OnMandelBrickBeginAutoScan; // 0x540(0x10)
	uint8_t bOnMandelBrickBeginAutoScan : 1; // 0x550(0x1), Mask(0x1)
	uint8_t BitPad_0x550_1 : 7; // 0x550(0x1)
	uint8_t Pad_0x551[0x7]; // 0x551(0x7)
	struct UMaterialParameterCollection* ExpertEnvMaterialParamColl; // 0x558(0x8)
	uint8_t bOnMandelBrickOperateStart : 1; // 0x560(0x1), Mask(0x1)
	uint8_t BitPad_0x560_1 : 7; // 0x560(0x1)
	uint8_t Pad_0x561[0x7]; // 0x561(0x7)
	struct FMulticastInlineDelegate OnMandelBrickEffectStart; // 0x568(0x10)
	uint8_t bOnMandelBrickEffectStart : 1; // 0x578(0x1), Mask(0x1)
	uint8_t BitPad_0x578_1 : 7; // 0x578(0x1)
	uint8_t Pad_0x579[0x7]; // 0x579(0x7)
	struct FMulticastInlineDelegate OnMandelBrickFinish; // 0x580(0x10)
	struct FMulticastInlineDelegate OnMandelBrickOpenFinish; // 0x590(0x10)
	struct FMulticastInlineDelegate OnUpdateShowGuideTips; // 0x5A0(0x10)
	struct UCurveLinearColor* CurveLinearColor_MandelBrick; // 0x5B0(0x8)
	struct TMap<int32_t, struct UCurveLinearColor*> LinearColorMap; // 0x5B8(0x50)
	struct UMaterialInstanceDynamic* EmissionEffectMaterial_MandelBrick; // 0x608(0x8)
	struct UMaterialInterface* ParentMaterial; // 0x610(0x8)
	struct UMaterialInstanceDynamic* LineEffectMaterial_MandelBrick; // 0x618(0x8)
	struct UDFMUIAudioPlayer* AudioPlayer; // 0x620(0x8)
	uint8_t Pad_0x628[0x10]; // 0x628(0x10)
	float AutoStartSpeed; // 0x638(0x4)
	uint8_t Pad_0x63C[0x8]; // 0x63C(0x8)
	float ManualSpeed; // 0x644(0x4)
	uint8_t Pad_0x648[0x18]; // 0x648(0x18)

	// Object: Function Hall.HallLotteryDisplayCtrl.SetSpotLightVisibilityByTag
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x15521c30
	// Params: [ Num(2) Size(0x11) ]
	void SetSpotLightVisibilityByTag(struct FString Tag, uint8_t bVisible);

	// Object: Function Hall.HallLotteryDisplayCtrl.SetMatCollectionParam
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable]
	// Offset: 0x15521a68
	// Params: [ Num(3) Size(0x30) ]
	void SetMatCollectionParam(struct FString InAssetPath, struct FString InParamName, const struct FLinearColor& VectorColor);

	// Object: Function Hall.HallLotteryDisplayCtrl.SetHallDisplaySequenceMY
	// Flags: [Final|Native|Protected]
	// Offset: 0x15521a54
	// Params: [ Num(0) Size(0x0) ]
	void SetHallDisplaySequenceMY();

	// Object: Function Hall.HallLotteryDisplayCtrl.SetHallDisplaySequence
	// Flags: [Final|Native|Protected]
	// Offset: 0x15521a40
	// Params: [ Num(0) Size(0x0) ]
	void SetHallDisplaySequence();

	// Object: Function Hall.HallLotteryDisplayCtrl.SetDisplayType
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x15521948
	// Params: [ Num(1) Size(0x10) ]
	void SetDisplayType(struct FString InDisplayType);

	// Object: Function Hall.HallLotteryDisplayCtrl.SetCurveLinearColorByItemQuality
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x155218a4
	// Params: [ Num(1) Size(0x4) ]
	void SetCurveLinearColorByItemQuality(int32_t ItemQuality);

	// Object: Function Hall.HallLotteryDisplayCtrl.OnHallDisplaySequenceFinish
	// Flags: [Final|Native|Private]
	// Offset: 0x155217f8
	// Params: [ Num(1) Size(0x1) ]
	void OnHallDisplaySequenceFinish(uint8_t bSequenceFinish);

	// Object: Function Hall.HallLotteryDisplayCtrl.OnGrayWeaponModelLoadCompleted
	// Flags: [Final|Native|Private]
	// Offset: 0x15521754
	// Params: [ Num(1) Size(0x8) ]
	void OnGrayWeaponModelLoadCompleted(uint64_t SkinId);

	// Object: Function Hall.HallLotteryDisplayCtrl.GetUIWidgetByTag
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x15521654
	// Params: [ Num(2) Size(0x18) ]
	struct UUserWidget* GetUIWidgetByTag(struct FString sTag);

	// Object: Function Hall.HallLotteryDisplayCtrl.ForceProcessToFinishState
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x15521640
	// Params: [ Num(0) Size(0x0) ]
	void ForceProcessToFinishState();

	// Object: Function Hall.HallLotteryDisplayCtrl.EnterHallLotteryLevel
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x1552162c
	// Params: [ Num(0) Size(0x0) ]
	void EnterHallLotteryLevel();

	// Object: Function Hall.HallLotteryDisplayCtrl.BP_StartButtonClick
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x15521618
	// Params: [ Num(0) Size(0x0) ]
	void BP_StartButtonClick();

	// Object: Function Hall.HallLotteryDisplayCtrl.BP_SetWeaponVisibleByTag
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x155214dc
	// Params: [ Num(2) Size(0x11) ]
	void BP_SetWeaponVisibleByTag(struct FString sTag, uint8_t bVisible);

	// Object: Function Hall.HallLotteryDisplayCtrl.BP_SetType
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x15521438
	// Params: [ Num(1) Size(0x4) ]
	void BP_SetType(int32_t iType);

	// Object: Function Hall.HallLotteryDisplayCtrl.BP_SetShowGuideTips
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x1552138c
	// Params: [ Num(1) Size(0x1) ]
	void BP_SetShowGuideTips(uint8_t bNewShowGuideTips);

	// Object: Function Hall.HallLotteryDisplayCtrl.BP_SetRatity
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x155212e8
	// Params: [ Num(1) Size(0x4) ]
	void BP_SetRatity(int32_t iRatity);

	// Object: Function Hall.HallLotteryDisplayCtrl.BP_SetDragSpeed
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x15521244
	// Params: [ Num(1) Size(0x4) ]
	void BP_SetDragSpeed(float fDragSpeed);

	// Object: Function Hall.HallLotteryDisplayCtrl.BP_SetAutoStartSpeed
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x155211a0
	// Params: [ Num(1) Size(0x4) ]
	void BP_SetAutoStartSpeed(float fAutoStartSpeed);

	// Object: Function Hall.HallLotteryDisplayCtrl.BP_SetAutoSpeed
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x155210fc
	// Params: [ Num(1) Size(0x4) ]
	void BP_SetAutoSpeed(float fDragSpeed);

	// Object: Function Hall.HallLotteryDisplayCtrl.BP_RefreshWeaponLocation
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x155210e8
	// Params: [ Num(0) Size(0x0) ]
	void BP_RefreshWeaponLocation();

	// Object: Function Hall.HallLotteryDisplayCtrl.BP_PlayMYLevelSequence
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x155210d4
	// Params: [ Num(0) Size(0x0) ]
	void BP_PlayMYLevelSequence();

	// Object: Function Hall.HallLotteryDisplayCtrl.BP_CreateWeaponOrange
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x15520fec
	// Params: [ Num(2) Size(0x9) ]
	void BP_CreateWeaponOrange(struct UModularWeaponDesc* WeaponDesc, uint8_t IsMeleeWeapon);
};

// Object: Class Hall.HallLotteryDisplaySequenceComponent
// Size: 0x220 (Inherited: 0x1A0)
struct UHallLotteryDisplaySequenceComponent : UHallDisplayLevelSequenceComponentBase
{
	DEFINE_UE_CLASS_HELPERS(UHallLotteryDisplaySequenceComponent, "HallLotteryDisplaySequenceComponent")

	uint8_t Pad_0x1A0[0x18]; // 0x1A0(0x18)
	struct FSoftObjectPath LevelSequencePath; // 0x1B8(0x18)
	struct FSoftObjectPath LevelSequencePathPC; // 0x1D0(0x18)
	struct FSoftObjectPath ActivityLevelSequencePath; // 0x1E8(0x18)
	struct FSoftObjectPath ActivityLevelSequencePathPC; // 0x200(0x18)
	uint8_t Pad_0x218[0x8]; // 0x218(0x8)
};

// Object: Class Hall.HallLotteryTenDisplayCtrl
// Size: 0x6C8 (Inherited: 0x388)
struct AHallLotteryTenDisplayCtrl : AHallDisplayCtrlBase
{
	DEFINE_UE_CLASS_HELPERS(AHallLotteryTenDisplayCtrl, "HallLotteryTenDisplayCtrl")

	uint8_t Pad_0x388[0x18]; // 0x388(0x18)
	struct UHallCameraCtrlComponentBase* CameraCtrlComponent; // 0x3A0(0x8)
	struct TMap<struct FName, struct FHallDisplayInfoBase> DisplayInfoMap; // 0x3A8(0x50)
	struct UHallLotteryDisplaySequenceComponent* HallLotteryLevelSequenceComponent; // 0x3F8(0x8)
	struct UHallLotteryDisplaySequenceComponent* HallLotteryLevelSequenceComponentMY; // 0x400(0x8)
	struct UHallWeaponDisplayComponent* WeaponDisplayComponent; // 0x408(0x8)
	struct UHallWeaponDisplayComponent* WeaponDisplayComponentGray; // 0x410(0x8)
	uint8_t Pad_0x418[0x8]; // 0x418(0x8)
	struct TMap<int32_t, struct FMandelBrick> MandelBrickMap; // 0x420(0x50)
	struct AActor* RotatingMeshActor; // 0x470(0x8)
	struct USphereComponent* OuterCollision; // 0x478(0x8)
	struct USphereComponent* InnerCollision; // 0x480(0x8)
	uint8_t bSequenceFinished : 1; // 0x488(0x1), Mask(0x1)
	uint8_t BitPad_0x488_1 : 7; // 0x488(0x1)
	uint8_t Pad_0x489[0x7]; // 0x489(0x7)
	struct UCurveLinearColor* CurveLinearColor_MandelBrick; // 0x490(0x8)
	struct TMap<int32_t, struct UCurveLinearColor*> LinearColorMap; // 0x498(0x50)
	int32_t ItemQualityNormalLimit; // 0x4E8(0x4)
	struct FName EnterAudioName_MandelBrick; // 0x4EC(0x8)
	struct FName UIUnboxingMandelScanLoop_MandelBrick; // 0x4F4(0x8)
	struct FName UIUnboxingMandelScanStop_MandelBrick; // 0x4FC(0x8)
	struct FName FadeInAudioName_MandelBrick; // 0x504(0x8)
	uint8_t Pad_0x50C[0x4]; // 0x50C(0x4)
	struct FName UIUnboxingMandelScan_MandelBrick; // 0x510(0x8)
	uint8_t Pad_0x518[0x4]; // 0x518(0x4)
	struct FName ClickPressedAudioName_MandelBrick; // 0x51C(0x8)
	struct FName ClickReleasedAudioName_MandelBrick; // 0x524(0x8)
	struct FName FadeOutAudioName_MandelBrick; // 0x52C(0x8)
	struct FName MythicQualityAudioName_MandelBrick; // 0x534(0x8)
	struct FName NormalQualityAudioName_MandelBrick; // 0x53C(0x8)
	uint8_t Pad_0x544[0x4]; // 0x544(0x4)
	struct FName UI_Unboxing_Mandel_Dozen_Show_Mythic_MandelBrick; // 0x548(0x8)
	struct FName UI_Unboxing_Mandel_Dozen_Show_Normal_MandelBrick; // 0x550(0x8)
	struct FName ShowAudioName_MandelBrick; // 0x558(0x8)
	struct FName ProgressAudioName_MandelBrick; // 0x560(0x8)
	struct FName LoopMusicAudioName_MandelBrick; // 0x568(0x8)
	struct FName StopMusicAudioName_MandelBrick; // 0x570(0x8)
	struct FName UIUnboxingMandel_MandelBrick; // 0x578(0x8)
	struct FName MusicUnboxingMandelCollection_MandelBrick; // 0x580(0x8)
	struct FName UI_Unboxing_Mandel_Dozen_Spin_MandelBrick; // 0x588(0x8)
	uint8_t Pad_0x590[0x4]; // 0x590(0x4)
	struct FName ShowMusicAudioName_MandelBrick; // 0x594(0x8)
	uint8_t Pad_0x59C[0x4]; // 0x59C(0x4)
	struct UMaterialParameterCollection* ExpertEnvMaterialParamColl; // 0x5A0(0x8)
	struct UDFMUIAudioPlayer* AudioPlayer; // 0x5A8(0x8)
	struct FMulticastInlineDelegate OnUpdateShowGuideTipsTen; // 0x5B0(0x10)
	struct FMulticastInlineDelegate OnMandelBrickTenFinish; // 0x5C0(0x10)
	struct FMulticastInlineDelegate OnMandelBrickTenOpenFinish; // 0x5D0(0x10)
	struct FMulticastInlineDelegate OnMandelBrickEnterSeqFinish; // 0x5E0(0x10)
	struct FMulticastInlineDelegate OnMandelBrickStartRotation; // 0x5F0(0x10)
	uint8_t bOnMandelBrickStartRotation : 1; // 0x600(0x1), Mask(0x1)
	uint8_t BitPad_0x600_1 : 7; // 0x600(0x1)
	uint8_t Pad_0x601[0x13]; // 0x601(0x13)
	uint8_t bAllFinished : 1; // 0x614(0x1), Mask(0x1)
	uint8_t BitPad_0x614_1 : 7; // 0x614(0x1)
	uint8_t Pad_0x615[0x3]; // 0x615(0x3)
	struct UMaterialInterface* ParentMaterial; // 0x618(0x8)
	uint8_t Pad_0x620[0x48]; // 0x620(0x48)
	double RotationSpeedRate; // 0x668(0x8)
	double AutoRotationSpeedRate; // 0x670(0x8)
	double MaxRotationSpeed; // 0x678(0x8)
	double MinRotationSpeed; // 0x680(0x8)
	double Deceleration; // 0x688(0x8)
	double Acceleration; // 0x690(0x8)
	uint8_t Pad_0x698[0x4]; // 0x698(0x4)
	float RotationSpeedParam; // 0x69C(0x4)
	float AutoFinishTime_MandelBrick; // 0x6A0(0x4)
	float ShowGuideTime_MandelBrick; // 0x6A4(0x4)
	uint8_t Pad_0x6A8[0x20]; // 0x6A8(0x20)

	// Object: Function Hall.HallLotteryTenDisplayCtrl.SetSpotLightVisibilityByTag
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x1552505c
	// Params: [ Num(2) Size(0x11) ]
	void SetSpotLightVisibilityByTag(struct FString Tag, uint8_t bVisible);

	// Object: Function Hall.HallLotteryTenDisplayCtrl.SetMatCollectionParam
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable]
	// Offset: 0x15524e94
	// Params: [ Num(3) Size(0x30) ]
	void SetMatCollectionParam(struct FString InAssetPath, struct FString InParamName, const struct FLinearColor& VectorColor);

	// Object: Function Hall.HallLotteryTenDisplayCtrl.SetMandelBrickThreshold
	// Flags: [Final|Native|Private]
	// Offset: 0x15524db4
	// Params: [ Num(2) Size(0x8) ]
	void SetMandelBrickThreshold(int32_t MandelBrickIndex, float Threshold);

	// Object: Function Hall.HallLotteryTenDisplayCtrl.SetMandelBrickColor
	// Flags: [Final|Native|Private|HasDefaults]
	// Offset: 0x15524cd4
	// Params: [ Num(2) Size(0x14) ]
	void SetMandelBrickColor(int32_t MandelBrickIndex, struct FLinearColor LinearColor);

	// Object: Function Hall.HallLotteryTenDisplayCtrl.SetHallDisplaySequenceMY
	// Flags: [Final|Native|Protected]
	// Offset: 0x15524cc0
	// Params: [ Num(0) Size(0x0) ]
	void SetHallDisplaySequenceMY();

	// Object: Function Hall.HallLotteryTenDisplayCtrl.SetHallDisplaySequence
	// Flags: [Final|Native|Protected]
	// Offset: 0x15524cac
	// Params: [ Num(0) Size(0x0) ]
	void SetHallDisplaySequence();

	// Object: Function Hall.HallLotteryTenDisplayCtrl.SetDisplayType
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x15524bb4
	// Params: [ Num(1) Size(0x10) ]
	void SetDisplayType(struct FString InDisplayType);

	// Object: Function Hall.HallLotteryTenDisplayCtrl.SetCurveLinearColorByItemQuality
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x15524ad8
	// Params: [ Num(2) Size(0x8) ]
	void SetCurveLinearColorByItemQuality(int32_t MandelBrickIndex, int32_t ItemQuality);

	// Object: Function Hall.HallLotteryTenDisplayCtrl.OnTouchReleased
	// Flags: [Final|Native|Protected|HasDefaults]
	// Offset: 0x155249f8
	// Params: [ Num(2) Size(0x10) ]
	void OnTouchReleased(ETouchIndex TouchIndex, struct FVector Value);

	// Object: Function Hall.HallLotteryTenDisplayCtrl.OnTouchPressed
	// Flags: [Final|Native|Protected|HasDefaults]
	// Offset: 0x15524918
	// Params: [ Num(2) Size(0x10) ]
	void OnTouchPressed(ETouchIndex TouchIndex, struct FVector Value);

	// Object: Function Hall.HallLotteryTenDisplayCtrl.OnOuterCollisionExit
	// Flags: [Final|Native|Public]
	// Offset: 0x155247c4
	// Params: [ Num(4) Size(0x1C) ]
	void OnOuterCollisionExit(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex);

	// Object: Function Hall.HallLotteryTenDisplayCtrl.OnOuterCollisionEnter
	// Flags: [Final|Native|Public|HasOutParms]
	// Offset: 0x155245cc
	// Params: [ Num(6) Size(0xA8) ]
	void OnOuterCollisionEnter(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, uint8_t bFromSweep, const struct FHitResult& SweepResult);

	// Object: Function Hall.HallLotteryTenDisplayCtrl.OnInnerCollisionExit
	// Flags: [Final|Native|Public]
	// Offset: 0x15524478
	// Params: [ Num(4) Size(0x1C) ]
	void OnInnerCollisionExit(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex);

	// Object: Function Hall.HallLotteryTenDisplayCtrl.OnInnerCollisionEnter
	// Flags: [Final|Native|Public|HasOutParms]
	// Offset: 0x15524280
	// Params: [ Num(6) Size(0xA8) ]
	void OnInnerCollisionEnter(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, uint8_t bFromSweep, const struct FHitResult& SweepResult);

	// Object: Function Hall.HallLotteryTenDisplayCtrl.OnHallDisplaySequenceFinish
	// Flags: [Final|Native|Private]
	// Offset: 0x155241d4
	// Params: [ Num(1) Size(0x1) ]
	void OnHallDisplaySequenceFinish(uint8_t bSequenceFinish);

	// Object: Function Hall.HallLotteryTenDisplayCtrl.OnGrayWeaponModelLoadCompleted
	// Flags: [Final|Native|Private]
	// Offset: 0x15524130
	// Params: [ Num(1) Size(0x8) ]
	void OnGrayWeaponModelLoadCompleted(uint64_t SkinId);

	// Object: Function Hall.HallLotteryTenDisplayCtrl.GetUIWidgetByTag
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x15524030
	// Params: [ Num(2) Size(0x18) ]
	struct UUserWidget* GetUIWidgetByTag(struct FString sTag);

	// Object: Function Hall.HallLotteryTenDisplayCtrl.ForceProcessToFinishState
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x1552401c
	// Params: [ Num(0) Size(0x0) ]
	void ForceProcessToFinishState();

	// Object: Function Hall.HallLotteryTenDisplayCtrl.FinishFunction
	// Flags: [Final|Native|Private]
	// Offset: 0x15524008
	// Params: [ Num(0) Size(0x0) ]
	void FinishFunction();

	// Object: Function Hall.HallLotteryTenDisplayCtrl.ExtractMandelIndexFromTag
	// Flags: [Final|Native|Private]
	// Offset: 0x15523f5c
	// Params: [ Num(2) Size(0xC) ]
	int32_t ExtractMandelIndexFromTag(struct AActor* MandelActor);

	// Object: Function Hall.HallLotteryTenDisplayCtrl.EnterHallLotteryLevel
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x15523f48
	// Params: [ Num(0) Size(0x0) ]
	void EnterHallLotteryLevel();

	// Object: Function Hall.HallLotteryTenDisplayCtrl.BP_SetWeaponVisibleByTag
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x15523e0c
	// Params: [ Num(2) Size(0x11) ]
	void BP_SetWeaponVisibleByTag(struct FString sTag, uint8_t bVisible);

	// Object: Function Hall.HallLotteryTenDisplayCtrl.BP_SetType
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x15523d68
	// Params: [ Num(1) Size(0x4) ]
	void BP_SetType(int32_t iType);

	// Object: Function Hall.HallLotteryTenDisplayCtrl.BP_SetShowGuideTips
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x15523cbc
	// Params: [ Num(1) Size(0x1) ]
	void BP_SetShowGuideTips(uint8_t bNewShowGuideTips);

	// Object: Function Hall.HallLotteryTenDisplayCtrl.BP_SetRatity
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x15523c18
	// Params: [ Num(1) Size(0x4) ]
	void BP_SetRatity(int32_t iRatity);

	// Object: Function Hall.HallLotteryTenDisplayCtrl.BP_RefreshWeaponLocation
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x15523c04
	// Params: [ Num(0) Size(0x0) ]
	void BP_RefreshWeaponLocation();

	// Object: Function Hall.HallLotteryTenDisplayCtrl.BP_PlayMYLevelSequence
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x15523bf0
	// Params: [ Num(0) Size(0x0) ]
	void BP_PlayMYLevelSequence();

	// Object: Function Hall.HallLotteryTenDisplayCtrl.BP_CreateWeaponOrange
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x15523b08
	// Params: [ Num(2) Size(0x9) ]
	void BP_CreateWeaponOrange(struct UModularWeaponDesc* WeaponDesc, uint8_t IsMeleeWeapon);
};

// Object: Class Hall.HallLuckyNestDisplayCtrl
// Size: 0x5D0 (Inherited: 0x388)
struct AHallLuckyNestDisplayCtrl : AHallDisplayCtrlBase
{
	DEFINE_UE_CLASS_HELPERS(AHallLuckyNestDisplayCtrl, "HallLuckyNestDisplayCtrl")

	struct UHallCameraCtrlComponentBase* CameraCtrlComponent; // 0x388(0x8)
	struct TMap<struct FName, struct FHallDisplayInfoBase> DisplayInfoMap; // 0x390(0x50)
	struct APostProcessVolume* PostProcessVolume; // 0x3E0(0x8)
	struct UMaterialInterface* SelectedMaterial; // 0x3E8(0x8)
	struct UMaterialInterface* HoverMaterial; // 0x3F0(0x8)
	struct AHallRandomMeshActor* SelectedActor; // 0x3F8(0x8)
	struct AHallRandomMeshActor* SelectedNestActor; // 0x400(0x8)
	struct AHallRandomMeshActor* HoverActor; // 0x408(0x8)
	struct AHallRandomMeshActor* HoverEggActor; // 0x410(0x8)
	struct TArray<struct AHallRandomMeshActor*> NestMeshActors; // 0x418(0x10)
	struct TArray<struct AHallRandomMeshActor*> EggMeshActors; // 0x428(0x10)
	struct TMap<struct FName, struct FLuckyNestSeqInfo> DiggingNestSeqMap; // 0x438(0x50)
	struct FLuckyNestSeqInfo FallingEggSeq; // 0x488(0x40)
	struct TArray<struct FSoftObjectPath> EggAnimSeq; // 0x4C8(0x10)
	struct FMulticastInlineDelegate OnPlayDiggingNestSeqFinishedEvent; // 0x4D8(0x10)
	struct FMulticastInlineDelegate OnOnPlayFallingEggSeqFinishedEvent; // 0x4E8(0x10)
	struct FMulticastInlineDelegate OnAnimSeqLoaded; // 0x4F8(0x10)
	struct FMulticastInlineDelegate OnSelectNest; // 0x508(0x10)
	struct FMulticastInlineDelegate OnHoverNest; // 0x518(0x10)
	struct TArray<struct UStaticMesh*> NestMeshArray; // 0x528(0x10)
	struct TArray<struct UStaticMesh*> EggMeshArray; // 0x538(0x10)
	struct TArray<struct USkeletalMesh*> EggSkeleonMeshArray; // 0x548(0x10)
	uint8_t Pad_0x558[0x78]; // 0x558(0x78)

	// Object: Function Hall.HallLuckyNestDisplayCtrl.StopFallingEggSeq
	// Flags: [Final|Native|Public]
	// Offset: 0x15525650
	// Params: [ Num(0) Size(0x0) ]
	void StopFallingEggSeq();

	// Object: Function Hall.HallLuckyNestDisplayCtrl.StopDiggingNestSeq
	// Flags: [Final|Native|Public]
	// Offset: 0x1552563c
	// Params: [ Num(0) Size(0x0) ]
	void StopDiggingNestSeq();

	// Object: Function Hall.HallLuckyNestDisplayCtrl.ShowNest
	// Flags: [Final|Native|Public]
	// Offset: 0x15525628
	// Params: [ Num(0) Size(0x0) ]
	void ShowNest();

	// Object: Function Hall.HallLuckyNestDisplayCtrl.SetRandomMesh
	// Flags: [Final|Native|Public]
	// Offset: 0x1552550c
	// Params: [ Num(3) Size(0x9) ]
	void SetRandomMesh(int32_t MeshIndex, int32_t Index, int8_t Type);

	// Object: Function Hall.HallLuckyNestDisplayCtrl.SetDisplayType
	// Flags: [Final|Native|Public]
	// Offset: 0x15525460
	// Params: [ Num(1) Size(0x10) ]
	void SetDisplayType(struct FString InDisplayType);

	// Object: Function Hall.HallLuckyNestDisplayCtrl.SetCurrentSkeletonMeshState
	// Flags: [Final|Native|Public]
	// Offset: 0x155253b4
	// Params: [ Num(1) Size(0x1) ]
	void SetCurrentSkeletonMeshState(uint8_t State);

	// Object: Function Hall.HallLuckyNestDisplayCtrl.PlayFallingEggSeq
	// Flags: [Final|Native|Public]
	// Offset: 0x155253a0
	// Params: [ Num(0) Size(0x0) ]
	void PlayFallingEggSeq();

	// Object: Function Hall.HallLuckyNestDisplayCtrl.PlayDiggingNestSeq
	// Flags: [Final|Native|Public]
	// Offset: 0x1552538c
	// Params: [ Num(0) Size(0x0) ]
	void PlayDiggingNestSeq();

	// Object: Function Hall.HallLuckyNestDisplayCtrl.OnFallingEggSequencePlayerEventFinished
	// Flags: [Final|Native|Private]
	// Offset: 0x15525378
	// Params: [ Num(0) Size(0x0) ]
	void OnFallingEggSequencePlayerEventFinished();

	// Object: Function Hall.HallLuckyNestDisplayCtrl.OnDiggingNestSequencePlayerEventFinished
	// Flags: [Final|Native|Private]
	// Offset: 0x15525364
	// Params: [ Num(0) Size(0x0) ]
	void OnDiggingNestSequencePlayerEventFinished();

	// Object: Function Hall.HallLuckyNestDisplayCtrl.IsChooseNest
	// Flags: [Final|Native|Public]
	// Offset: 0x1552532c
	// Params: [ Num(1) Size(0x1) ]
	uint8_t IsChooseNest();

	// Object: Function Hall.HallLuckyNestDisplayCtrl.HideNest
	// Flags: [Final|Native|Public]
	// Offset: 0x15525318
	// Params: [ Num(0) Size(0x0) ]
	void HideNest();

	// Object: Function Hall.HallLuckyNestDisplayCtrl.GetSelectedNestId
	// Flags: [Final|Native|Public]
	// Offset: 0x155252e4
	// Params: [ Num(1) Size(0x4) ]
	int32_t GetSelectedNestId();

	// Object: Function Hall.HallLuckyNestDisplayCtrl.GetSelectedEggId
	// Flags: [Final|Native|Public]
	// Offset: 0x155252b0
	// Params: [ Num(1) Size(0x4) ]
	int32_t GetSelectedEggId();

	// Object: Function Hall.HallLuckyNestDisplayCtrl.GetNestMeshCounts
	// Flags: [Final|Native|Public]
	// Offset: 0x15525294
	// Params: [ Num(1) Size(0x4) ]
	int32_t GetNestMeshCounts();

	// Object: Function Hall.HallLuckyNestDisplayCtrl.GetNestCounts
	// Flags: [Final|Native|Public]
	// Offset: 0x15525278
	// Params: [ Num(1) Size(0x4) ]
	int32_t GetNestCounts();

	// Object: Function Hall.HallLuckyNestDisplayCtrl.GetEggMeshCounts
	// Flags: [Final|Native|Public]
	// Offset: 0x1552525c
	// Params: [ Num(1) Size(0x4) ]
	int32_t GetEggMeshCounts();

	// Object: Function Hall.HallLuckyNestDisplayCtrl.GetEggCounts
	// Flags: [Final|Native|Public]
	// Offset: 0x15525240
	// Params: [ Num(1) Size(0x4) ]
	int32_t GetEggCounts();

	// Object: Function Hall.HallLuckyNestDisplayCtrl.ClearSelectState
	// Flags: [Final|Native|Public]
	// Offset: 0x1552522c
	// Params: [ Num(0) Size(0x0) ]
	void ClearSelectState();

	// Object: Function Hall.HallLuckyNestDisplayCtrl.ClearHoverState
	// Flags: [Final|Native|Public]
	// Offset: 0x15525218
	// Params: [ Num(0) Size(0x0) ]
	void ClearHoverState();
};

// Object: Class Hall.HallMagicTowerCameraComponent
// Size: 0x260 (Inherited: 0x240)
struct UHallMagicTowerCameraComponent : USceneComponent
{
	DEFINE_UE_CLASS_HELPERS(UHallMagicTowerCameraComponent, "HallMagicTowerCameraComponent")

	struct USpringArmComponent* SpringArm; // 0x240(0x8)
	struct UCameraComponent* CameraComponent; // 0x248(0x8)
	float DefaultSpringArmLength; // 0x250(0x4)
	float OrthoWidth; // 0x254(0x4)
	uint8_t Pad_0x258[0x8]; // 0x258(0x8)

	// Object: Function Hall.HallMagicTowerCameraComponent.SetSpringArmLength
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x15525760
	// Params: [ Num(1) Size(0x4) ]
	void SetSpringArmLength(float NewLength);

	// Object: Function Hall.HallMagicTowerCameraComponent.SetOrthoWidth
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x155256bc
	// Params: [ Num(1) Size(0x4) ]
	void SetOrthoWidth(float NewWidth);

	// Object: Function Hall.HallMagicTowerCameraComponent.GetSpringArmComponent
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x155256a0
	// Params: [ Num(1) Size(0x8) ]
	struct USpringArmComponent* GetSpringArmComponent();

	// Object: Function Hall.HallMagicTowerCameraComponent.GetCameraComponent
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x15525684
	// Params: [ Num(1) Size(0x8) ]
	struct UCameraComponent* GetCameraComponent();
};

// Object: Class Hall.HallMagicTowerDisplayCtrl
// Size: 0x588 (Inherited: 0x388)
struct AHallMagicTowerDisplayCtrl : AHallDisplayCtrlBase
{
	DEFINE_UE_CLASS_HELPERS(AHallMagicTowerDisplayCtrl, "HallMagicTowerDisplayCtrl")

	uint8_t Pad_0x388[0x30]; // 0x388(0x30)
	struct UTimelineComponent* CameraTimeline; // 0x3B8(0x8)
	struct UCurveFloat* CameraMoveCurve; // 0x3C0(0x8)
	uint8_t Pad_0x3C8[0x30]; // 0x3C8(0x30)
	struct TArray<struct AActor*> GirdActors; // 0x3F8(0x10)
	struct TArray<struct AActor*> AStarActors; // 0x408(0x10)
	uint8_t Pad_0x418[0x38]; // 0x418(0x38)
	struct TWeakObjectPtr<struct AActor> PlayerPaper2D; // 0x450(0x8)
	struct TWeakObjectPtr<struct ACameraActor> CameraActor; // 0x458(0x8)
	struct TWeakObjectPtr<struct APaperTileMapActor> MapActor; // 0x460(0x8)
	struct TMap<int32_t, struct TSoftObjectPtr<UPaperTileMap>> TileMapMap; // 0x468(0x50)
	struct TMap<EMagicTowerRoleType, struct AActor*> RoleClassMap; // 0x4B8(0x50)
	struct TMap<struct FString, struct AActor*> ResouceType2ClassMap; // 0x508(0x50)
	struct FName Texture2DParameterName; // 0x558(0x8)
	float SpineBoxSize; // 0x560(0x4)
	float LimitTop; // 0x564(0x4)
	float LimitBottom; // 0x568(0x4)
	float LimitLeft; // 0x56C(0x4)
	float LimitRight; // 0x570(0x4)
	uint8_t Pad_0x574[0x4]; // 0x574(0x4)
	struct FMulticastInlineDelegate OnHandleMove; // 0x578(0x10)

	// Object: Function Hall.HallMagicTowerDisplayCtrl.UpdatePlayerAndCameraPosition
	// Flags: [Final|Native|Private]
	// Offset: 0x15526708
	// Params: [ Num(1) Size(0x4) ]
	void UpdatePlayerAndCameraPosition(float Value);

	// Object: Function Hall.HallMagicTowerDisplayCtrl.UpdateCameraAdaptation
	// Flags: [Final|Native|Public]
	// Offset: 0x155266f4
	// Params: [ Num(0) Size(0x0) ]
	void UpdateCameraAdaptation();

	// Object: Function Hall.HallMagicTowerDisplayCtrl.SwitchTileMapByMapId
	// Flags: [Final|Native|Public]
	// Offset: 0x15526650
	// Params: [ Num(1) Size(0x4) ]
	void SwitchTileMapByMapId(int32_t MapID);

	// Object: Function Hall.HallMagicTowerDisplayCtrl.StopMovement
	// Flags: [Final|Native|Public]
	// Offset: 0x1552663c
	// Params: [ Num(0) Size(0x0) ]
	void StopMovement();

	// Object: Function Hall.HallMagicTowerDisplayCtrl.SpawnTexture2DActorBySourceId
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults]
	// Offset: 0x15526504
	// Params: [ Num(4) Size(0x20) ]
	struct AActor* SpawnTexture2DActorBySourceId(const struct FVector2D& pos, int64_t InSourceId, float ScaleFactor);

	// Object: Function Hall.HallMagicTowerDisplayCtrl.SpawnTexture2DActor
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults]
	// Offset: 0x155263cc
	// Params: [ Num(4) Size(0x20) ]
	struct AActor* SpawnTexture2DActor(const struct FVector2D& pos, struct UTexture2D* InTexture2D, float ScaleFactor);

	// Object: Function Hall.HallMagicTowerDisplayCtrl.SpawnSpineActorBySourceId
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults]
	// Offset: 0x15526294
	// Params: [ Num(4) Size(0x20) ]
	struct AActor* SpawnSpineActorBySourceId(const struct FVector2D& pos, int64_t InSourceId, float ScaleFactor);

	// Object: Function Hall.HallMagicTowerDisplayCtrl.SpawnSpineActor
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults]
	// Offset: 0x15526124
	// Params: [ Num(5) Size(0x28) ]
	struct AActor* SpawnSpineActor(const struct FVector2D& pos, struct USpineAtlasAsset* InSpineAtlasAsset, struct USpineSkeletonDataAsset* InSpineSkeletonDataAsset, float ScaleFactor);

	// Object: Function Hall.HallMagicTowerDisplayCtrl.SpawnPlayerSpineActor
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults]
	// Offset: 0x15525fec
	// Params: [ Num(4) Size(0x20) ]
	struct AActor* SpawnPlayerSpineActor(const struct FVector2D& pos, int64_t InSpineId, float ScaleFactor);

	// Object: Function Hall.HallMagicTowerDisplayCtrl.ShowDebugGirdInfo
	// Flags: [Final|Native|Public]
	// Offset: 0x15525ef4
	// Params: [ Num(1) Size(0x10) ]
	void ShowDebugGirdInfo(struct TArray<struct FVector2D> GirdInfo);

	// Object: Function Hall.HallMagicTowerDisplayCtrl.ShowDebugAStarInfo
	// Flags: [Final|Native|Public]
	// Offset: 0x15525dfc
	// Params: [ Num(1) Size(0x10) ]
	void ShowDebugAStarInfo(struct TArray<struct FVector2D> AStarInfo);

	// Object: Function Hall.HallMagicTowerDisplayCtrl.SetTileMapGrayParam
	// Flags: [Final|Native|Public]
	// Offset: 0x15525d58
	// Params: [ Num(1) Size(0x4) ]
	void SetTileMapGrayParam(int32_t grayParam);

	// Object: Function Hall.HallMagicTowerDisplayCtrl.SetPlayerLocOffset
	// Flags: [Final|Native|Public|HasDefaults]
	// Offset: 0x15525cb4
	// Params: [ Num(1) Size(0xC) ]
	void SetPlayerLocOffset(struct FVector InPlayerLocOffset);

	// Object: Function Hall.HallMagicTowerDisplayCtrl.SetPlayerActor
	// Flags: [Final|Native|Public]
	// Offset: 0x15525c10
	// Params: [ Num(1) Size(0x8) ]
	void SetPlayerActor(struct AActor* InPlayerActor);

	// Object: Function Hall.HallMagicTowerDisplayCtrl.SetCustomViewTarget
	// Flags: [Final|Native|Public]
	// Offset: 0x15525bfc
	// Params: [ Num(0) Size(0x0) ]
	void SetCustomViewTarget();

	// Object: Function Hall.HallMagicTowerDisplayCtrl.ProcessMoveUp
	// Flags: [Final|Native|Public]
	// Offset: 0x15525be8
	// Params: [ Num(0) Size(0x0) ]
	void ProcessMoveUp();

	// Object: Function Hall.HallMagicTowerDisplayCtrl.ProcessMoveRight
	// Flags: [Final|Native|Public]
	// Offset: 0x15525bd4
	// Params: [ Num(0) Size(0x0) ]
	void ProcessMoveRight();

	// Object: Function Hall.HallMagicTowerDisplayCtrl.ProcessMoveLeft
	// Flags: [Final|Native|Public]
	// Offset: 0x15525bc0
	// Params: [ Num(0) Size(0x0) ]
	void ProcessMoveLeft();

	// Object: Function Hall.HallMagicTowerDisplayCtrl.ProcessMoveDown
	// Flags: [Final|Native|Public]
	// Offset: 0x15525bac
	// Params: [ Num(0) Size(0x0) ]
	void ProcessMoveDown();

	// Object: Function Hall.HallMagicTowerDisplayCtrl.OnMoveFinished
	// Flags: [Final|Native|Private]
	// Offset: 0x15525b98
	// Params: [ Num(0) Size(0x0) ]
	void OnMoveFinished();

	// Object: Function Hall.HallMagicTowerDisplayCtrl.MoveUp
	// Flags: [Final|Native|Public]
	// Offset: 0x15525b84
	// Params: [ Num(0) Size(0x0) ]
	void MoveUp();

	// Object: Function Hall.HallMagicTowerDisplayCtrl.MoveRight
	// Flags: [Final|Native|Public]
	// Offset: 0x15525b70
	// Params: [ Num(0) Size(0x0) ]
	void MoveRight();

	// Object: Function Hall.HallMagicTowerDisplayCtrl.MoveLeft
	// Flags: [Final|Native|Public]
	// Offset: 0x15525b5c
	// Params: [ Num(0) Size(0x0) ]
	void MoveLeft();

	// Object: Function Hall.HallMagicTowerDisplayCtrl.MoveDown
	// Flags: [Final|Native|Public]
	// Offset: 0x15525b48
	// Params: [ Num(0) Size(0x0) ]
	void MoveDown();

	// Object: Function Hall.HallMagicTowerDisplayCtrl.InitPlayerAndCameraSpawnPoint
	// Flags: [Final|Native|Public]
	// Offset: 0x15525a6c
	// Params: [ Num(2) Size(0x8) ]
	void InitPlayerAndCameraSpawnPoint(int32_t InitX, int32_t InitY);

	// Object: Function Hall.HallMagicTowerDisplayCtrl.InitMapParams
	// Flags: [Final|Native|Public]
	// Offset: 0x15525950
	// Params: [ Num(3) Size(0xC) ]
	void InitMapParams(int32_t MapSizeX, int32_t MapSizeY, float GridStep);

	// Object: Function Hall.HallMagicTowerDisplayCtrl.InitCameraViewLimit
	// Flags: [Final|Native|Public]
	// Offset: 0x15525874
	// Params: [ Num(2) Size(0x8) ]
	void InitCameraViewLimit(int32_t LimitX, int32_t LimitY);
};

// Object: Class Hall.HallMainCameraCtrlComponent
// Size: 0x2E0 (Inherited: 0xF8)
struct UHallMainCameraCtrlComponent : UActorComponent
{
	DEFINE_UE_CLASS_HELPERS(UHallMainCameraCtrlComponent, "HallMainCameraCtrlComponent")

	uint8_t Pad_0xF8[0x18]; // 0xF8(0x18)
	struct FMulticastInlineDelegate HallCameraMovedDone; // 0x110(0x10)
	struct AHallMainDisplayCtrl* OwnerCtrl; // 0x120(0x8)
	uint8_t Pad_0x128[0x24]; // 0x128(0x24)
	uint8_t bAdjustCameraFOV : 1; // 0x14C(0x1), Mask(0x1)
	uint8_t BitPad_0x14C_1 : 7; // 0x14C(0x1)
	uint8_t Pad_0x14D[0x3]; // 0x14D(0x3)
	float MaxViewportScale; // 0x150(0x4)
	float MinViewportScale; // 0x154(0x4)
	float MaxCameraFOV; // 0x158(0x4)
	float MinCameraFOV; // 0x15C(0x4)
	float ExpandScale; // 0x160(0x4)
	uint8_t bUseZAxis : 1; // 0x164(0x1), Mask(0x1)
	uint8_t BitPad_0x164_1 : 7; // 0x164(0x1)
	uint8_t Pad_0x165[0x43]; // 0x165(0x43)
	struct ACameraActor* CustomViewTargetActor; // 0x1A8(0x8)
	uint8_t Pad_0x1B0[0x8]; // 0x1B0(0x8)
	struct TMap<struct FName, struct ASceneCapture*> AttachSceneCaptureActors; // 0x1B8(0x50)
	uint8_t Pad_0x208[0x4]; // 0x208(0x4)
	float ZoomSensitivity; // 0x20C(0x4)
	uint8_t Pad_0x210[0x8]; // 0x210(0x8)
	float RotateYawSensitivity; // 0x218(0x4)
	float RotatePitchSensitivity; // 0x21C(0x4)
	uint8_t Pad_0x220[0x20]; // 0x220(0x20)
	float ReboundTransitionLastTime; // 0x240(0x4)
	uint8_t Pad_0x244[0x44]; // 0x244(0x44)
	struct TMap<EEquipmentType, struct AHallPostProcessDisplayActor*> HallPostProcessDisplayActors; // 0x288(0x50)
	struct FTimerHandle PostProcessVolumnTimerHandler; // 0x2D8(0x8)

	// Object: Function Hall.HallMainCameraCtrlComponent.SetReboundCameraActive
	// Flags: [Final|Native|Public]
	// Offset: 0x1552846c
	// Params: [ Num(1) Size(0x1) ]
	void SetReboundCameraActive(uint8_t bActive);

	// Object: Function Hall.HallMainCameraCtrlComponent.ResetHallMainCamera
	// Flags: [Final|Native|Public]
	// Offset: 0x15528458
	// Params: [ Num(0) Size(0x0) ]
	void ResetHallMainCamera();

	// Object: Function Hall.HallMainCameraCtrlComponent.OnRotationByGamepad
	// Flags: [Final|Native|Public]
	// Offset: 0x1552837c
	// Params: [ Num(2) Size(0x8) ]
	void OnRotationByGamepad(float ValueX, float ValueY);

	// Object: Function Hall.HallMainCameraCtrlComponent.OnLeftMouseButtonUp
	// Flags: [Final|Native|Public]
	// Offset: 0x15528368
	// Params: [ Num(0) Size(0x0) ]
	void OnLeftMouseButtonUp();

	// Object: Function Hall.HallMainCameraCtrlComponent.OnLeftMouseButtonDown
	// Flags: [Final|Native|Public]
	// Offset: 0x15528354
	// Params: [ Num(0) Size(0x0) ]
	void OnLeftMouseButtonDown();

	// Object: Function Hall.HallMainCameraCtrlComponent.GetCustomViewTarget
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x15528320
	// Params: [ Num(1) Size(0x8) ]
	struct ACameraActor* GetCustomViewTarget();
};

// Object: Class Hall.HallMainCharacterAnimInstance
// Size: 0x520 (Inherited: 0x270)
struct UHallMainCharacterAnimInstance : UAnimInstance
{
	DEFINE_UE_CLASS_HELPERS(UHallMainCharacterAnimInstance, "HallMainCharacterAnimInstance")

	uint8_t bIsMainCharacter : 1; // 0x269(0x1), Mask(0x1)
	uint8_t bIsEquippedWithWeapon : 1; // 0x26A(0x1), Mask(0x1)
	uint8_t bIsEquipping : 1; // 0x26B(0x1), Mask(0x1)
	float LookAtWeight; // 0x26C(0x4)
	float fLookAtWeight; // 0x270(0x4)
	float LookAtSpeedStrength; // 0x274(0x4)
	struct FVector LookAtTarget; // 0x278(0xC)
	uint8_t bIsCharAnimChanged : 1; // 0x284(0x1), Mask(0x1)
	struct FHallUsingWeaponAnim HallUsingWeaponAnims; // 0x288(0x148)
	struct UAnimSequenceBase* HallHeroActionShow; // 0x3D0(0x8)
	uint8_t BitPad_0x3D8_4 : 4; // 0x3D8(0x1)
	uint8_t Pad_0x3D9[0x7]; // 0x3D9(0x7)
	struct FHallCharacterIKInfo HallIKInfo; // 0x3E0(0xC0)
	EHallCharacterAnimStateMechineType HallCharacterAnimStateMechineType; // 0x4A0(0x1)
	uint8_t IsEquipWeaponShow : 1; // 0x4A1(0x1), Mask(0x1)
	uint8_t BitPad_0x4A1_1 : 7; // 0x4A1(0x1)
	uint8_t IsPerformShow : 1; // 0x4A2(0x1), Mask(0x1)
	uint8_t BitPad_0x4A2_1 : 7; // 0x4A2(0x1)
	uint8_t IsTakeAwayShow : 1; // 0x4A3(0x1), Mask(0x1)
	uint8_t BitPad_0x4A3_1 : 7; // 0x4A3(0x1)
	uint8_t IsHelmetShow : 1; // 0x4A4(0x1), Mask(0x1)
	uint8_t BitPad_0x4A4_1 : 7; // 0x4A4(0x1)
	uint8_t IsCrackedSettlementShow : 1; // 0x4A5(0x1), Mask(0x1)
	uint8_t BitPad_0x4A5_1 : 7; // 0x4A5(0x1)
	uint8_t IsCrackedSettlementWalk : 1; // 0x4A6(0x1), Mask(0x1)
	uint8_t BitPad_0x4A6_1 : 7; // 0x4A6(0x1)
	uint8_t IsMainFlowHallShow : 1; // 0x4A7(0x1), Mask(0x1)
	uint8_t BitPad_0x4A7_1 : 7; // 0x4A7(0x1)
	struct FMulticastInlineDelegate OnAnimSetChangeEvent; // 0x4A8(0x10)
	struct FMulticastInlineDelegate OnAnimChangeEvent; // 0x4B8(0x10)
	struct UAnimSequenceBase* SettlementIdleAnim; // 0x4C8(0x8)
	struct UAnimSequenceBase* SettlementWalkAnim; // 0x4D0(0x8)
	struct UAnimSequenceBase* HallIdleAnim; // 0x4D8(0x8)
	struct UAnimSequenceBase* HallShowAnim; // 0x4E0(0x8)
	uint8_t bIsIdle : 1; // 0x4E8(0x1), Mask(0x1)
	uint8_t BitPad_0x4E8_1 : 7; // 0x4E8(0x1)
	uint8_t bIsAdaptiveIK : 1; // 0x4E9(0x1), Mask(0x1)
	uint8_t BitPad_0x4E9_1 : 7; // 0x4E9(0x1)
	uint8_t Pad_0x4EA[0x2]; // 0x4EA(0x2)
	float AdaptiveIKData; // 0x4EC(0x4)
	uint8_t bEnableArmAdaptive : 1; // 0x4F0(0x1), Mask(0x1)
	uint8_t BitPad_0x4F0_1 : 7; // 0x4F0(0x1)
	uint8_t Pad_0x4F1[0x3]; // 0x4F1(0x3)
	float LeftArmAdaptiveData; // 0x4F4(0x4)
	float RightArmAdaptiveData; // 0x4F8(0x4)
	uint8_t Pad_0x4FC[0x24]; // 0x4FC(0x24)

	// Object: Function Hall.HallMainCharacterAnimInstance.SetSettlementSceneTeamPos
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x15528b08
	// Params: [ Num(1) Size(0x4) ]
	void SetSettlementSceneTeamPos(int32_t PosId);

	// Object: Function Hall.HallMainCharacterAnimInstance.SetSettlementScenePos
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x15528a64
	// Params: [ Num(1) Size(0x4) ]
	void SetSettlementScenePos(int32_t PosId);

	// Object: Function Hall.HallMainCharacterAnimInstance.SetMainFlowHallPos
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x155289c0
	// Params: [ Num(1) Size(0x4) ]
	void SetMainFlowHallPos(int32_t PosId);

	// Object: Function Hall.HallMainCharacterAnimInstance.SetDisplayCharacterLookAtEnable
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x15528914
	// Params: [ Num(1) Size(0x1) ]
	void SetDisplayCharacterLookAtEnable(uint8_t bIsEnable);

	// Object: Function Hall.HallMainCharacterAnimInstance.SetCharIsEquipping
	// Flags: [Final|Native|Public]
	// Offset: 0x15528868
	// Params: [ Num(1) Size(0x1) ]
	void SetCharIsEquipping(uint8_t bEquipping);

	// Object: Function Hall.HallMainCharacterAnimInstance.SetCharacterAnimationState
	// Flags: [Final|Native|Public]
	// Offset: 0x1552877c
	// Params: [ Num(3) Size(0xD) ]
	uint8_t SetCharacterAnimationState(EHallCharacterAnimStateMechineType TargetStateType, struct FName AnimMachineStateName);

	// Object: Function Hall.HallMainCharacterAnimInstance.HaveSettlementAnim
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x155286cc
	// Params: [ Num(2) Size(0x5) ]
	uint8_t HaveSettlementAnim(int32_t PosId);
};

// Object: Class Hall.HallMainCharacterCtrlComponent
// Size: 0x3C0 (Inherited: 0xF8)
struct UHallMainCharacterCtrlComponent : UActorComponent
{
	DEFINE_UE_CLASS_HELPERS(UHallMainCharacterCtrlComponent, "HallMainCharacterCtrlComponent")

	uint8_t Pad_0xF8[0x8]; // 0xF8(0x8)
	struct AHallMainDisplayCtrl* OwnerCtrl; // 0x100(0x8)
	struct AHallCharacter* CharacterClass; // 0x108(0x8)
	struct TArray<struct TWeakObjectPtr<struct AActor>> CharacterSpawnPoints; // 0x110(0x10)
	struct AHallCharacter* MainCharacter; // 0x120(0x8)
	struct FString PlayerTagPrefix; // 0x128(0x10)
	struct TMap<int32_t, struct AHallCharacter*> TeammateCharacters; // 0x138(0x50)
	struct AHallCharacter* TouchedCharacter; // 0x188(0x8)
	float RotateSensitivity; // 0x190(0x4)
	uint8_t IsLookAtEnable : 1; // 0x194(0x1), Mask(0x1)
	uint8_t BitPad_0x194_1 : 7; // 0x194(0x1)
	uint8_t Pad_0x195[0x3]; // 0x195(0x3)
	float LookAtAngleThresHold; // 0x198(0x4)
	float LookAtBeginSpeed; // 0x19C(0x4)
	uint8_t Pad_0x1A0[0x220]; // 0x1A0(0x220)

	// Object: Function Hall.HallMainCharacterCtrlComponent.SpawnTeamMateCharacter
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x15529488
	// Params: [ Num(1) Size(0x4) ]
	void SpawnTeamMateCharacter(int32_t Slot);

	// Object: Function Hall.HallMainCharacterCtrlComponent.SpawnPlayerCharacterWithSlot
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x155293dc
	// Params: [ Num(2) Size(0x10) ]
	struct AHallCharacter* SpawnPlayerCharacterWithSlot(int32_t Slot);

	// Object: Function Hall.HallMainCharacterCtrlComponent.SpawnPlayerCharacterFromTemplate
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x15529300
	// Params: [ Num(2) Size(0x10) ]
	void SpawnPlayerCharacterFromTemplate(struct AHallCharacter* CharacterClassTemplate, struct AActor* SpawnPoint);

	// Object: Function Hall.HallMainCharacterCtrlComponent.SpawnPlayerCharacter
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x155292ec
	// Params: [ Num(0) Size(0x0) ]
	void SpawnPlayerCharacter();

	// Object: Function Hall.HallMainCharacterCtrlComponent.SetPlayerCharacterToSlot
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x1552920c
	// Params: [ Num(2) Size(0xC) ]
	void SetPlayerCharacterToSlot(struct AHallCharacter* CHARACTER, int32_t Slot);

	// Object: Function Hall.HallMainCharacterCtrlComponent.SetMainCharacterLookatTargetEnable
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x15529160
	// Params: [ Num(1) Size(0x1) ]
	void SetMainCharacterLookatTargetEnable(uint8_t Enable);

	// Object: Function Hall.HallMainCharacterCtrlComponent.SetHallTeamDisplayStage
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x155290bc
	// Params: [ Num(1) Size(0x1) ]
	void SetHallTeamDisplayStage(EHallTeamDisplayStage InTeamDisplayStage);

	// Object: Function Hall.HallMainCharacterCtrlComponent.ProjectWorldToScreen
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable]
	// Offset: 0xf591aac
	// Params: [ Num(4) Size(0x20) ]
	static struct FVector2D ProjectWorldToScreen(struct APlayerController* Player, const struct FVector& WorldPosition, uint8_t bPlayerViewportRelative);

	// Object: Function Hall.HallMainCharacterCtrlComponent.GetTeammateCharacter
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x15529010
	// Params: [ Num(2) Size(0x10) ]
	struct AHallCharacter* GetTeammateCharacter(int32_t Slot);

	// Object: Function Hall.HallMainCharacterCtrlComponent.GetSlotCharacterLocation
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x15528f60
	// Params: [ Num(2) Size(0x10) ]
	struct FVector GetSlotCharacterLocation(uint8_t PlayerSlot);

	// Object: Function Hall.HallMainCharacterCtrlComponent.GetPlayerCharacter
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x15528f2c
	// Params: [ Num(1) Size(0x8) ]
	struct AHallCharacter* GetPlayerCharacter();

	// Object: Function Hall.HallMainCharacterCtrlComponent.GetCharacterLocationInUILocalSpace
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x15528e44
	// Params: [ Num(3) Size(0x18) ]
	struct FVector2D GetCharacterLocationInUILocalSpace(uint8_t Slot, struct UWidget* Widget);

	// Object: Function Hall.HallMainCharacterCtrlComponent.GetAllGetTeammateCharacter
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x15528dac
	// Params: [ Num(1) Size(0x10) ]
	struct TArray<struct AHallCharacter*> GetAllGetTeammateCharacter();

	// Object: Function Hall.HallMainCharacterCtrlComponent.DestroyTeamMateCharacter
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x15528d08
	// Params: [ Num(1) Size(0x4) ]
	void DestroyTeamMateCharacter(int32_t Slot);

	// Object: Function Hall.HallMainCharacterCtrlComponent.DestroyPlayerCharacter
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x15528cf4
	// Params: [ Num(0) Size(0x0) ]
	void DestroyPlayerCharacter();
};

// Object: Class Hall.HallMainCharacterFaceAnimInstance
// Size: 0x290 (Inherited: 0x270)
struct UHallMainCharacterFaceAnimInstance : UAnimInstance
{
	DEFINE_UE_CLASS_HELPERS(UHallMainCharacterFaceAnimInstance, "HallMainCharacterFaceAnimInstance")

	float LookAtWeight; // 0x26C(0x4)
	float LookAtSpeedStrength; // 0x270(0x4)
	struct FVector LookAtTarget; // 0x274(0xC)
	uint8_t Pad_0x284[0xC]; // 0x284(0xC)
};

// Object: Class Hall.HallMainDisplayCtrl
// Size: 0x7A0 (Inherited: 0x370)
struct AHallMainDisplayCtrl : AActor
{
	DEFINE_UE_CLASS_HELPERS(AHallMainDisplayCtrl, "HallMainDisplayCtrl")

	uint8_t Pad_0x370[0x18]; // 0x370(0x18)
	struct UHallMainCameraCtrlComponent* CameraCtrlComponent; // 0x388(0x8)
	struct UHallMainCharacterCtrlComponent* CharacterCtrlComponent; // 0x390(0x8)
	struct UHallMainLightCtrlComponent* LightCtrlComponent; // 0x398(0x8)
	struct UHallSurroundingCtrlComponent* SurroundCtrlComponent; // 0x3A0(0x8)
	struct UHallItemDisplayComponent* ItemDisplayComponent; // 0x3A8(0x8)
	struct UHallWeaponDisplayComponent* WeaponDisplayComponent; // 0x3B0(0x8)
	struct UHallLevelSequenceComponent* LevelSequenceComponent; // 0x3B8(0x8)
	struct FHallCharacterMotionInfo MainCharacterMotionInfo; // 0x3C0(0x168)
	struct TMap<EHallMainDisplayType, struct FHallMainDisplayInfo> DisplayInfos; // 0x528(0x50)
	struct TMap<EHallCharacterDisplayStage, struct FHallCharacterDisplayStageInfo> CharacterDisplayStages; // 0x578(0x50)
	struct TMap<EHallMainDisplayType, uint8_t> FloorVisibleConfig; // 0x5C8(0x50)
	struct TWeakObjectPtr<struct AHallDisplayStageConfiger> StageConfigerWP; // 0x618(0x8)
	struct TArray<struct AGPSequenceActor*> MainHallSequenceActorClassArray; // 0x620(0x10)
	struct AGPSequenceActor* CurrentPlayingMainHallSequenceActor; // 0x630(0x8)
	struct AGPSequenceActor* MainHallSequenceIdleActorClass; // 0x638(0x8)
	struct AGPSequenceActor* MainHallIdleSequenceActor; // 0x640(0x8)
	uint8_t bIsInitDisplayType : 1; // 0x648(0x1), Mask(0x1)
	uint8_t BitPad_0x648_1 : 7; // 0x648(0x1)
	uint8_t Pad_0x649[0x1F]; // 0x649(0x1F)
	uint8_t bCtrlEnable : 1; // 0x668(0x1), Mask(0x1)
	uint8_t BitPad_0x668_1 : 7; // 0x668(0x1)
	uint8_t IsDebug : 1; // 0x669(0x1), Mask(0x1)
	uint8_t BitPad_0x669_1 : 7; // 0x669(0x1)
	uint8_t Pad_0x66A[0x6]; // 0x66A(0x6)
	struct UUserWidget* DebugWidget; // 0x670(0x8)
	EHallCharacterDisplayStage DebugDisplayStage; // 0x678(0x1)
	EHallMainDisplayType DebugDisplayType; // 0x679(0x1)
	uint8_t Pad_0x67A[0x32]; // 0x67A(0x32)
	uint8_t bIsInteractEnabled : 1; // 0x6AC(0x1), Mask(0x1)
	uint8_t BitPad_0x6AC_1 : 7; // 0x6AC(0x1)
	uint8_t bCanRotate : 1; // 0x6AD(0x1), Mask(0x1)
	uint8_t BitPad_0x6AD_1 : 7; // 0x6AD(0x1)
	uint8_t bCanScale : 1; // 0x6AE(0x1), Mask(0x1)
	uint8_t BitPad_0x6AE_1 : 7; // 0x6AE(0x1)
	uint8_t Pad_0x6AF[0x65]; // 0x6AF(0x65)
	struct TWeakObjectPtr<struct APostProcessVolume> ChangeAvatarPostProcessVolume; // 0x714(0x8)
	float AvatarPostProcessVolumnDuration; // 0x71C(0x4)
	uint8_t Pad_0x720[0x8]; // 0x720(0x8)
	struct FTimerHandle AvatarPostProcessVolumnTimerHandler; // 0x728(0x8)
	uint8_t Pad_0x730[0x10]; // 0x730(0x10)
	struct FName HDRIBackDropActor1Name; // 0x740(0x8)
	struct AActor* HDRIBackDrop1; // 0x748(0x8)
	struct FName HDRIBackDropActor2Name; // 0x750(0x8)
	struct AActor* HDRIBackDrop2; // 0x758(0x8)
	struct FName CustomSceneArray1Name; // 0x760(0x8)
	struct TArray<struct AActor*> CustomSceneArray1; // 0x768(0x10)
	struct FName CustomSceneArray2Name; // 0x778(0x8)
	struct TArray<struct AActor*> CustomSceneArray2; // 0x780(0x10)
	uint8_t Pad_0x790[0x10]; // 0x790(0x10)

	// Object: Function Hall.HallMainDisplayCtrl.TryBindMemberHallIdleCameraSequence
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x1552ac64
	// Params: [ Num(2) Size(0x10) ]
	void TryBindMemberHallIdleCameraSequence(struct FName BindingTag, struct AHallCharacter* BindingActor);

	// Object: Function Hall.HallMainDisplayCtrl.ToggleMainCtrlPureMode
	// Flags: [Final|Native|Public]
	// Offset: 0x1552abb8
	// Params: [ Num(1) Size(0x1) ]
	void ToggleMainCtrlPureMode(uint8_t bPureMode);

	// Object: Function Hall.HallMainDisplayCtrl.ToggleInputEnable
	// Flags: [Final|Native|Public]
	// Offset: 0x1552ab0c
	// Params: [ Num(1) Size(0x1) ]
	void ToggleInputEnable(uint8_t bInEnable);

	// Object: Function Hall.HallMainDisplayCtrl.ToggleFogEnable
	// Flags: [Final|Native|Public]
	// Offset: 0x1552aa60
	// Params: [ Num(1) Size(0x1) ]
	void ToggleFogEnable(uint8_t bEnable);

	// Object: Function Hall.HallMainDisplayCtrl.ToggleEnable
	// Flags: [Final|Native|Public]
	// Offset: 0x1552a9b4
	// Params: [ Num(1) Size(0x1) ]
	void ToggleEnable(uint8_t bInEnable);

	// Object: Function Hall.HallMainDisplayCtrl.ToggleCustomScene
	// Flags: [Final|Native|Public]
	// Offset: 0x1552a908
	// Params: [ Num(1) Size(0x1) ]
	void ToggleCustomScene(uint8_t SwitchFlag);

	// Object: Function Hall.HallMainDisplayCtrl.StopHallIdleCameraSequence
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x1552a8f4
	// Params: [ Num(0) Size(0x0) ]
	void StopHallIdleCameraSequence();

	// Object: Function Hall.HallMainDisplayCtrl.StopHallIdleAndStartHallCameraSequence
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x1552a850
	// Params: [ Num(1) Size(0x4) ]
	void StopHallIdleAndStartHallCameraSequence(int32_t TeamCount);

	// Object: Function Hall.HallMainDisplayCtrl.StopHallCameraSequence
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x1552a83c
	// Params: [ Num(0) Size(0x0) ]
	void StopHallCameraSequence();

	// Object: Function Hall.HallMainDisplayCtrl.StartHallIdleCameraSequence
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x1552a828
	// Params: [ Num(0) Size(0x0) ]
	void StartHallIdleCameraSequence();

	// Object: Function Hall.HallMainDisplayCtrl.StartHallCameraSequence
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x1552a784
	// Params: [ Num(1) Size(0x4) ]
	void StartHallCameraSequence(int32_t TeamCount);

	// Object: Function Hall.HallMainDisplayCtrl.SetWeaponVisable
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x1552a6d8
	// Params: [ Num(1) Size(0x1) ]
	void SetWeaponVisable(uint8_t visable);

	// Object: Function Hall.HallMainDisplayCtrl.SetUseDefaultCharacterClass
	// Flags: [Final|Native|Public]
	// Offset: 0x1552a62c
	// Params: [ Num(1) Size(0x1) ]
	void SetUseDefaultCharacterClass(uint8_t bUseDefault);

	// Object: Function Hall.HallMainDisplayCtrl.SetUseBowWeapon
	// Flags: [Final|Native|Public]
	// Offset: 0x1552a580
	// Params: [ Num(1) Size(0x1) ]
	void SetUseBowWeapon(uint8_t isUseBowWeapon);

	// Object: Function Hall.HallMainDisplayCtrl.SetHallBackgroundFromImage
	// Flags: [Final|Native|Public]
	// Offset: 0x1552a4dc
	// Params: [ Num(1) Size(0x8) ]
	void SetHallBackgroundFromImage(struct UImage* Image);

	// Object: Function Hall.HallMainDisplayCtrl.SetEnableCharacterMotion
	// Flags: [Final|Native|Public]
	// Offset: 0x1552a430
	// Params: [ Num(1) Size(0x1) ]
	void SetEnableCharacterMotion(uint8_t bEnable);

	// Object: Function Hall.HallMainDisplayCtrl.SetEnableChangeAvatar
	// Flags: [Final|Native|Public]
	// Offset: 0x1552a384
	// Params: [ Num(1) Size(0x1) ]
	void SetEnableChangeAvatar(uint8_t InEnableChange);

	// Object: Function Hall.HallMainDisplayCtrl.SetDisplayWeapon
	// Flags: [Final|Native|Public]
	// Offset: 0x1552a29c
	// Params: [ Num(2) Size(0x9) ]
	void SetDisplayWeapon(struct UModularWeaponDesc* WeaponDesc, uint8_t IsBasePos);

	// Object: Function Hall.HallMainDisplayCtrl.SetDisplayType
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x1552a1f8
	// Params: [ Num(1) Size(0x1) ]
	void SetDisplayType(EHallMainDisplayType InDisplayType);

	// Object: Function Hall.HallMainDisplayCtrl.SetDisplayItem
	// Flags: [Final|Native|Public]
	// Offset: 0x1552a14c
	// Params: [ Num(1) Size(0x10) ]
	void SetDisplayItem(struct FString ItemID);

	// Object: Function Hall.HallMainDisplayCtrl.SetCharAnimIsEquipping
	// Flags: [Final|Native|Public]
	// Offset: 0x1552a0a0
	// Params: [ Num(1) Size(0x1) ]
	void SetCharAnimIsEquipping(uint8_t bIsEquipping);

	// Object: Function Hall.HallMainDisplayCtrl.SetCharacterWatch
	// Flags: [Final|Native|Public]
	// Offset: 0x15529ffc
	// Params: [ Num(1) Size(0x8) ]
	void SetCharacterWatch(struct FName InWatchItemId);

	// Object: Function Hall.HallMainDisplayCtrl.SetCharacterVisibility
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x15529f50
	// Params: [ Num(1) Size(0x1) ]
	void SetCharacterVisibility(uint8_t bVisible);

	// Object: Function Hall.HallMainDisplayCtrl.SetCharacterSuitAvatarWithSequence
	// Flags: [Final|Native|Public]
	// Offset: 0x15529e58
	// Params: [ Num(1) Size(0x10) ]
	void SetCharacterSuitAvatarWithSequence(struct FString AvatarID);

	// Object: Function Hall.HallMainDisplayCtrl.SetCharacterDisplayStage
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x15529db4
	// Params: [ Num(1) Size(0x1) ]
	void SetCharacterDisplayStage(EHallCharacterDisplayStage DisplayStage);

	// Object: Function Hall.HallMainDisplayCtrl.SetCharacterAvatar
	// Flags: [Final|Native|Public]
	// Offset: 0x15529cbc
	// Params: [ Num(1) Size(0x10) ]
	void SetCharacterAvatar(struct FString AvatarID);

	// Object: Function Hall.HallMainDisplayCtrl.SetAvatarPostProcessVolumnFlag
	// Flags: [Final|Native|Public]
	// Offset: 0x15529c10
	// Params: [ Num(1) Size(0x1) ]
	void SetAvatarPostProcessVolumnFlag(uint8_t bFlag);

	// Object: Function Hall.HallMainDisplayCtrl.SetAvatarPostProcessVolumnEnable
	// Flags: [Final|Native|Public]
	// Offset: 0x15529b20
	// Params: [ Num(2) Size(0x2) ]
	void SetAvatarPostProcessVolumnEnable(uint8_t bEnable, uint8_t bImmediately);

	// Object: Function Hall.HallMainDisplayCtrl.ResetMainCharacter
	// Flags: [Final|Native|Public]
	// Offset: 0x15529b0c
	// Params: [ Num(0) Size(0x0) ]
	void ResetMainCharacter();

	// Object: Function Hall.HallMainDisplayCtrl.ResetHallMainCameraDOFParams
	// Flags: [Final|Native|Public]
	// Offset: 0x15529af8
	// Params: [ Num(0) Size(0x0) ]
	void ResetHallMainCameraDOFParams();

	// Object: Function Hall.HallMainDisplayCtrl.ResetDisplayWeapon
	// Flags: [Final|Native|Public]
	// Offset: 0x15529ae4
	// Params: [ Num(0) Size(0x0) ]
	void ResetDisplayWeapon();

	// Object: Function Hall.HallMainDisplayCtrl.ResetDisplayItem
	// Flags: [Final|Native|Public]
	// Offset: 0x15529ad0
	// Params: [ Num(0) Size(0x0) ]
	void ResetDisplayItem();

	// Object: Function Hall.HallMainDisplayCtrl.RefreshDisplayTargetActor
	// Flags: [Final|Native|Public]
	// Offset: 0x15529abc
	// Params: [ Num(0) Size(0x0) ]
	void RefreshDisplayTargetActor();

	// Object: Function Hall.HallMainDisplayCtrl.RefreshCharacterLookAtTarget
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x15529aa8
	// Params: [ Num(0) Size(0x0) ]
	void RefreshCharacterLookAtTarget();

	// Object: Function Hall.HallMainDisplayCtrl.PlayMontage
	// Flags: [Final|Native|Public]
	// Offset: 0x155299fc
	// Params: [ Num(1) Size(0x10) ]
	void PlayMontage(struct FString Path);

	// Object: Function Hall.HallMainDisplayCtrl.PlayerCharacterDisplayMotion
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x155299e8
	// Params: [ Num(0) Size(0x0) ]
	void PlayerCharacterDisplayMotion();

	// Object: Function Hall.HallMainDisplayCtrl.OnHallMainCharacterStartSetupEvent
	// Flags: [Final|Native|Public]
	// Offset: 0x155299d4
	// Params: [ Num(0) Size(0x0) ]
	void OnHallMainCharacterStartSetupEvent();

	// Object: Function Hall.HallMainDisplayCtrl.OnHallMainCharacterSetupEvent
	// Flags: [Final|Native|Public]
	// Offset: 0x155299c0
	// Params: [ Num(0) Size(0x0) ]
	void OnHallMainCharacterSetupEvent();

	// Object: Function Hall.HallMainDisplayCtrl.OnDelayHallCameraSequence
	// Flags: [Final|Native|Public]
	// Offset: 0x155299ac
	// Params: [ Num(0) Size(0x0) ]
	void OnDelayHallCameraSequence();

	// Object: Function Hall.HallMainDisplayCtrl.IsUseDefaultCharacterClass
	// Flags: [Final|Native|Public|Const]
	// Offset: 0x15529974
	// Params: [ Num(1) Size(0x1) ]
	uint8_t IsUseDefaultCharacterClass();

	// Object: Function Hall.HallMainDisplayCtrl.IsEnableCharacterMotion
	// Flags: [Final|Native|Public|Const]
	// Offset: 0x1552993c
	// Params: [ Num(1) Size(0x1) ]
	uint8_t IsEnableCharacterMotion();

	// Object: Function Hall.HallMainDisplayCtrl.IsEnableChangeAvatar
	// Flags: [Final|Native|Public|Const]
	// Offset: 0x15529904
	// Params: [ Num(1) Size(0x1) ]
	uint8_t IsEnableChangeAvatar();

	// Object: Function Hall.HallMainDisplayCtrl.IsEnable
	// Flags: [Final|Native|Public|Const]
	// Offset: 0x155298cc
	// Params: [ Num(1) Size(0x1) ]
	uint8_t IsEnable();

	// Object: Function Hall.HallMainDisplayCtrl.Internal_TryBindMemberHallIdleCameraSequence
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x155297f0
	// Params: [ Num(2) Size(0x10) ]
	void Internal_TryBindMemberHallIdleCameraSequence(struct FName BindingTag, struct AHallCharacter* BindingActor);

	// Object: Function Hall.HallMainDisplayCtrl.HasDefaultDisplayCharacter
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x155297b8
	// Params: [ Num(1) Size(0x1) ]
	uint8_t HasDefaultDisplayCharacter();

	// Object: Function Hall.HallMainDisplayCtrl.GetPresetCharacterID
	// Flags: [Final|Native|Public]
	// Offset: 0x155296d8
	// Params: [ Num(2) Size(0x18) ]
	struct FString GetPresetCharacterID(EHallCharacterDisplayStage DisplayStage);

	// Object: Function Hall.HallMainDisplayCtrl.GetHallCharacter
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x155296a4
	// Params: [ Num(1) Size(0x8) ]
	struct AHallCharacter* GetHallCharacter();

	// Object: Function Hall.HallMainDisplayCtrl.GetDisplayType
	// Flags: [Final|Native|Public|Const]
	// Offset: 0x15529670
	// Params: [ Num(1) Size(0x1) ]
	EHallMainDisplayType GetDisplayType();

	// Object: Function Hall.HallMainDisplayCtrl.GetDebugCamera
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x1552963c
	// Params: [ Num(1) Size(0x8) ]
	struct ACameraActor* GetDebugCamera();

	// Object: Function Hall.HallMainDisplayCtrl.Get
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x15529598
	// Params: [ Num(2) Size(0x10) ]
	static struct AHallMainDisplayCtrl* Get(struct UObject* WorldContextObject);
};

// Object: Class Hall.HallMainDisplayStageComponent
// Size: 0xF8 (Inherited: 0xF8)
struct UHallMainDisplayStageComponent : UActorComponent
{
	DEFINE_UE_CLASS_HELPERS(UHallMainDisplayStageComponent, "HallMainDisplayStageComponent")
};

// Object: Class Hall.HallMainFlowDisplayCtrl
// Size: 0x5E0 (Inherited: 0x388)
struct AHallMainFlowDisplayCtrl : AHallDisplayCtrlBase
{
	DEFINE_UE_CLASS_HELPERS(AHallMainFlowDisplayCtrl, "HallMainFlowDisplayCtrl")

	uint8_t Pad_0x388[0x8]; // 0x388(0x8)
	struct FMulticastInlineDelegate OnMainFlowHallModeSeqFinishedEvent; // 0x390(0x10)
	struct UHallCameraCtrlComponentBase* CameraCtrlComponent; // 0x3A0(0x8)
	struct UHallCharacterCtrlComponentBase* SOLCharacterCtrlComponent; // 0x3A8(0x8)
	struct UHallCharacterCtrlComponentBase* MPCharacterCtrlComponent; // 0x3B0(0x8)
	struct UHallSceneVideoPlayerComponent* SOLSceneVideoPlayerComponent; // 0x3B8(0x8)
	struct UHallSceneVideoPlayerComponent* MPSceneVideoPlayerComponent; // 0x3C0(0x8)
	struct UHallCharacterVoiceComponent* HallCharacterVoiceComponent; // 0x3C8(0x8)
	struct UHallCharacterVoiceComponent* HallCharacterVoiceComponent1; // 0x3D0(0x8)
	struct UHallCharacterVoiceComponent* HallCharacterVoiceComponent2; // 0x3D8(0x8)
	struct UHallCharacterVoiceComponent* HallCharacterVoiceComponent3; // 0x3E0(0x8)
	struct TMap<struct FName, struct FHallDisplayInfoBase> DiplayInfoMap; // 0x3E8(0x50)
	struct TMap<struct FName, struct FMainFlowSeqInfo> MainFlowSeqInfoMap; // 0x438(0x50)
	struct TMap<struct FName, struct FMainFlowSeqInfo> MainFlowModelSeqMap; // 0x488(0x50)
	struct TSoftObjectPtr<UBinkMediaTexture> MPMediaTexture; // 0x4D8(0x28)
	struct TSoftObjectPtr<UBinkMediaTexture> SOLMediaTexture; // 0x500(0x28)
	struct FMulticastInlineDelegate OnAnimSeqLoaded; // 0x528(0x10)
	struct FSoftObjectPath ScreenMaterialPath; // 0x538(0x18)
	uint8_t Pad_0x550[0x90]; // 0x550(0x90)

	// Object: Function Hall.HallMainFlowDisplayCtrl.UnequipByEquipmentType
	// Flags: [Final|Native|Public|HasOutParms]
	// Offset: 0x1552d9b8
	// Params: [ Num(3) Size(0x9) ]
	void UnequipByEquipmentType(EMainFlowCtrlType InCtrlType, const int32_t& InSlotId, EEquipmentType EquipmentType);

	// Object: Function Hall.HallMainFlowDisplayCtrl.Unequip
	// Flags: [Final|Native|Public|HasOutParms]
	// Offset: 0x1552d88c
	// Params: [ Num(3) Size(0x10) ]
	void Unequip(EMainFlowCtrlType InCtrlType, const int32_t& InSlotId, struct FName ItemID);

	// Object: Function Hall.HallMainFlowDisplayCtrl.SwitchCurrentLightGroupVolumn
	// Flags: [Final|Native|Public]
	// Offset: 0x1552d7a4
	// Params: [ Num(2) Size(0x9) ]
	void SwitchCurrentLightGroupVolumn(struct FName LightGroupName, uint8_t bSwitchToLarger);

	// Object: Function Hall.HallMainFlowDisplayCtrl.SwitchCharacterExtraPartMeshOptimization
	// Flags: [Final|Native|Public]
	// Offset: 0x1552d684
	// Params: [ Num(3) Size(0x9) ]
	void SwitchCharacterExtraPartMeshOptimization(EMainFlowCtrlType InCtrlType, int32_t InForceID, uint8_t bCastShadow);

	// Object: Function Hall.HallMainFlowDisplayCtrl.StopSOLSceneVideo
	// Flags: [Final|Native|Public]
	// Offset: 0x1552d670
	// Params: [ Num(0) Size(0x0) ]
	void StopSOLSceneVideo();

	// Object: Function Hall.HallMainFlowDisplayCtrl.StopMPSceneVideo
	// Flags: [Final|Native|Public]
	// Offset: 0x1552d65c
	// Params: [ Num(0) Size(0x0) ]
	void StopMPSceneVideo();

	// Object: Function Hall.HallMainFlowDisplayCtrl.SetDisplayType
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x1552d564
	// Params: [ Num(1) Size(0x10) ]
	void SetDisplayType(struct FString InDisplayType);

	// Object: Function Hall.HallMainFlowDisplayCtrl.SetCharacterEquipWeapon
	// Flags: [Final|Native|Public]
	// Offset: 0x1552d448
	// Params: [ Num(3) Size(0x14) ]
	void SetCharacterEquipWeapon(EMainFlowCtrlType InCtrlType, struct UModularWeaponDesc* WeaponDesc, int32_t InSlotId);

	// Object: Function Hall.HallMainFlowDisplayCtrl.SetCharacterAvatar
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x1552d324
	// Params: [ Num(3) Size(0x1C) ]
	void SetCharacterAvatar(EMainFlowCtrlType InCtrlType, struct FString InAvatarId, int32_t InSlotId);

	// Object: Function Hall.HallMainFlowDisplayCtrl.SetAutoDownloadModuleCategory
	// Flags: [Final|Native|Public]
	// Offset: 0x1552d204
	// Params: [ Num(3) Size(0x9) ]
	void SetAutoDownloadModuleCategory(EMainFlowCtrlType InCtrlType, int32_t InSlotId, uint8_t bAutoDownload);

	// Object: Function Hall.HallMainFlowDisplayCtrl.RemoveCharacterAvatar
	// Flags: [Final|Native|Public|HasOutParms]
	// Offset: 0x1552d114
	// Params: [ Num(2) Size(0x8) ]
	void RemoveCharacterAvatar(EMainFlowCtrlType InCtrlType, const int32_t& InSlotId);

	// Object: Function Hall.HallMainFlowDisplayCtrl.RefreshCharacterPosBySlot
	// Flags: [Final|Native|Public|HasOutParms]
	// Offset: 0x1552d024
	// Params: [ Num(2) Size(0x8) ]
	void RefreshCharacterPosBySlot(EMainFlowCtrlType InCtrlType, const int32_t& InSlotId);

	// Object: Function Hall.HallMainFlowDisplayCtrl.PlaySOLSceneVideo
	// Flags: [Final|Native|Public]
	// Offset: 0x1552cf80
	// Params: [ Num(1) Size(0x8) ]
	void PlaySOLSceneVideo(struct FName VedioName);

	// Object: Function Hall.HallMainFlowDisplayCtrl.PlayMPSceneVideo
	// Flags: [Final|Native|Public]
	// Offset: 0x1552cedc
	// Params: [ Num(1) Size(0x8) ]
	void PlayMPSceneVideo(struct FName VedioName);

	// Object: Function Hall.HallMainFlowDisplayCtrl.PlayMainFlowSeq
	// Flags: [Final|Native|Public]
	// Offset: 0x1552cdb0
	// Params: [ Num(3) Size(0xA) ]
	void PlayMainFlowSeq(struct FName InSeqName, uint8_t IsEnd, uint8_t isReverse);

	// Object: Function Hall.HallMainFlowDisplayCtrl.PlayMainFlowModeSeq
	// Flags: [Final|Native|Public]
	// Offset: 0x1552cd0c
	// Params: [ Num(1) Size(0x8) ]
	void PlayMainFlowModeSeq(struct FName InSeqName);

	// Object: Function Hall.HallMainFlowDisplayCtrl.PlayHeroVoice
	// Flags: [Final|Native|Public]
	// Offset: 0x1552cb10
	// Params: [ Num(4) Size(0x2C) ]
	void PlayHeroVoice(struct AHallCharacter* HallCharacter, struct FString InAvatarId, struct FString InMarkedLabel, int32_t InSlot);

	// Object: Function Hall.HallMainFlowDisplayCtrl.OnMovieSceneSequencePlayerEventFinished
	// Flags: [Final|Native|Private]
	// Offset: 0x1552cafc
	// Params: [ Num(0) Size(0x0) ]
	void OnMovieSceneSequencePlayerEventFinished();

	// Object: DelegateFunction Hall.HallMainFlowDisplayCtrl.OnMainFlowHallModeSeqFinished__DelegateSignature
	// Flags: [MulticastDelegate|Public|Delegate]
	// Offset: 0x101d2e88
	// Params: [ Num(0) Size(0x0) ]
	void OnMainFlowHallModeSeqFinished__DelegateSignature();

	// Object: Function Hall.HallMainFlowDisplayCtrl.GetHallCharacterVoiceComponentBySlot
	// Flags: [Final|Native|Public|HasOutParms]
	// Offset: 0x1552ca40
	// Params: [ Num(2) Size(0x10) ]
	struct UHallCharacterVoiceComponent* GetHallCharacterVoiceComponentBySlot(const int32_t& InSlot);

	// Object: Function Hall.HallMainFlowDisplayCtrl.GetCharacterLocationBySlot
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults]
	// Offset: 0x1552c944
	// Params: [ Num(3) Size(0x14) ]
	struct FVector GetCharacterLocationBySlot(EMainFlowCtrlType InCtrlType, const int32_t& InSlotId);

	// Object: Function Hall.HallMainFlowDisplayCtrl.GetCharacterBySlotId
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x1552c84c
	// Params: [ Num(3) Size(0x10) ]
	struct AHallCharacter* GetCharacterBySlotId(EMainFlowCtrlType InCtrlType, const int32_t& InSlotId);

	// Object: Function Hall.HallMainFlowDisplayCtrl.Equip
	// Flags: [Final|Native|Public|HasOutParms]
	// Offset: 0x1552c720
	// Params: [ Num(3) Size(0x10) ]
	void Equip(EMainFlowCtrlType InCtrlType, const int32_t& InSlotId, struct FName ItemID);

	// Object: Function Hall.HallMainFlowDisplayCtrl.DestorySOLCharcter
	// Flags: [Final|Native|Public]
	// Offset: 0x1552c70c
	// Params: [ Num(0) Size(0x0) ]
	void DestorySOLCharcter();

	// Object: Function Hall.HallMainFlowDisplayCtrl.DestoryMPCharcter
	// Flags: [Final|Native|Public]
	// Offset: 0x1552c6f8
	// Params: [ Num(0) Size(0x0) ]
	void DestoryMPCharcter();

	// Object: Function Hall.HallMainFlowDisplayCtrl.DestoryCharcter
	// Flags: [Final|Native|Public]
	// Offset: 0x1552c6e4
	// Params: [ Num(0) Size(0x0) ]
	void DestoryCharcter();

	// Object: Function Hall.HallMainFlowDisplayCtrl.CloseMainFlowSeq
	// Flags: [Final|Native|Public]
	// Offset: 0x1552c640
	// Params: [ Num(1) Size(0x8) ]
	void CloseMainFlowSeq(struct FName InSeqName);

	// Object: Function Hall.HallMainFlowDisplayCtrl.CloseMainFlowModeSeq
	// Flags: [Final|Native|Public]
	// Offset: 0x1552c62c
	// Params: [ Num(0) Size(0x0) ]
	void CloseMainFlowModeSeq();
};

// Object: Class Hall.HallMainLightCtrlComponent
// Size: 0x190 (Inherited: 0xF8)
struct UHallMainLightCtrlComponent : UActorComponent
{
	DEFINE_UE_CLASS_HELPERS(UHallMainLightCtrlComponent, "HallMainLightCtrlComponent")

	uint8_t Pad_0xF8[0x8]; // 0xF8(0x8)
	struct TWeakObjectPtr<struct AExponentialHeightFog> ExponentialHeightFog; // 0x100(0x8)
	struct TWeakObjectPtr<struct ASkyLight> SkyLight; // 0x108(0x8)
	struct TWeakObjectPtr<struct AActor> LightSource; // 0x110(0x8)
	struct TArray<struct FString> HallLightGroups; // 0x118(0x10)
	struct TArray<struct AActor*> HallLightGroupToCtrlCache; // 0x128(0x10)
	uint8_t Pad_0x138[0x58]; // 0x138(0x58)

	// Object: Function Hall.HallMainLightCtrlComponent.TurnOffAllHallLights
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x1552dbd4
	// Params: [ Num(0) Size(0x0) ]
	void TurnOffAllHallLights();

	// Object: Function Hall.HallMainLightCtrlComponent.SetLightEnabled
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x1552db28
	// Params: [ Num(1) Size(0x1) ]
	void SetLightEnabled(uint8_t bEnabled);
};

// Object: Class Hall.HallMatchDisplayCtrl
// Size: 0x4A0 (Inherited: 0x388)
struct AHallMatchDisplayCtrl : AHallDisplayCtrlBase
{
	DEFINE_UE_CLASS_HELPERS(AHallMatchDisplayCtrl, "HallMatchDisplayCtrl")

	uint8_t Pad_0x388[0x30]; // 0x388(0x30)
	struct UHallCameraCtrlComponentBase* CameraCtrlComponent; // 0x3B8(0x8)
	struct UHallCharacterCtrlComponentBase* CharacterCtrlComponent; // 0x3C0(0x8)
	struct UHallSceneVideoPlayerComponent* SceneVideoPlayerComponent; // 0x3C8(0x8)
	struct UHallCharacterVoiceComponent* HallCharacterVoiceComponent; // 0x3D0(0x8)
	struct UHallHighLevelDisplayComponent* HallHighLevelDisplayComponent; // 0x3D8(0x8)
	struct UHallCharacterLevelSeqComponentBase* DisplayLevelSequenceComponent1; // 0x3E0(0x8)
	struct UHallCharacterLevelSeqComponentBase* DisplayLevelSequenceComponent2; // 0x3E8(0x8)
	struct UHallCharacterLevelSeqComponentBase* DisplayLevelSequenceComponent3; // 0x3F0(0x8)
	struct UHallCharacterLevelSeqComponentBase* DisplayLevelSequenceComponent4; // 0x3F8(0x8)
	struct TMap<struct FName, struct FHallDisplayInfoBase> DiplayInfoMap; // 0x400(0x50)
	struct TWeakObjectPtr<struct AActor> SceneBpParentActor; // 0x450(0x8)
	ECustomTransformRule CustomTransformRule; // 0x458(0x1)
	EMatchCtrlType MatchCtrlType; // 0x459(0x1)
	uint8_t Pad_0x45A[0x6]; // 0x45A(0x6)
	struct FString DefaultVideoInName; // 0x460(0x10)
	struct FString DefaultVideoLoopName; // 0x470(0x10)
	struct FString DefaultVideoInOverride; // 0x480(0x10)
	struct FString DefaultVideoLoopOverride; // 0x490(0x10)

	// Object: Function Hall.HallMatchDisplayCtrl.UnloadLightLevel
	// Flags: [Final|Native|Public]
	// Offset: 0x1552e460
	// Params: [ Num(1) Size(0x10) ]
	void UnloadLightLevel(struct FString InAvatarId);

	// Object: Function Hall.HallMatchDisplayCtrl.SwitchVideoMaterial
	// Flags: [Final|Native|Public]
	// Offset: 0x1091c414
	// Params: [ Num(1) Size(0x10) ]
	void SwitchVideoMaterial(struct FString InAvatarId);

	// Object: Function Hall.HallMatchDisplayCtrl.StopSceneVideo
	// Flags: [Final|Native|Public]
	// Offset: 0x1552e44c
	// Params: [ Num(0) Size(0x0) ]
	void StopSceneVideo();

	// Object: Function Hall.HallMatchDisplayCtrl.SetTeammateState
	// Flags: [Final|Native|Public]
	// Offset: 0x101187a0
	// Params: [ Num(2) Size(0x5) ]
	void SetTeammateState(int32_t SlotId, uint8_t bSelect);

	// Object: Function Hall.HallMatchDisplayCtrl.SetMatchCtrlType
	// Flags: [Final|Native|Public]
	// Offset: 0x106e9cdc
	// Params: [ Num(1) Size(0x1) ]
	void SetMatchCtrlType(EMatchCtrlType InType);

	// Object: Function Hall.HallMatchDisplayCtrl.SetDisplayType
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x106e3310
	// Params: [ Num(1) Size(0x10) ]
	void SetDisplayType(struct FString InDisplayType);

	// Object: Function Hall.HallMatchDisplayCtrl.SetDefaultVideoIds
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x1552e35c
	// Params: [ Num(2) Size(0x20) ]
	void SetDefaultVideoIds(struct FString VideoIn, struct FString VideoLoop);

	// Object: Function Hall.HallMatchDisplayCtrl.SetDefaultSceneKey
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x1552e2b0
	// Params: [ Num(1) Size(0x10) ]
	void SetDefaultSceneKey(struct FString InDefaultSceneKey);

	// Object: Function Hall.HallMatchDisplayCtrl.SetCurAvatarId
	// Flags: [Final|Native|Public]
	// Offset: 0x1552e1b8
	// Params: [ Num(1) Size(0x10) ]
	void SetCurAvatarId(struct FString InAvatarId);

	// Object: Function Hall.HallMatchDisplayCtrl.SetCharacterWatchWithSlot
	// Flags: [Final|Native|Public]
	// Offset: 0x1552e0d8
	// Params: [ Num(2) Size(0xC) ]
	void SetCharacterWatchWithSlot(int32_t SlotId, struct FName WatchID);

	// Object: Function Hall.HallMatchDisplayCtrl.SetCharacterAvatarWithSlot
	// Flags: [Final|Native|Public]
	// Offset: 0x10a2745c
	// Params: [ Num(2) Size(0x18) ]
	void SetCharacterAvatarWithSlot(int32_t SlotId, struct FString AvatarID);

	// Object: Function Hall.HallMatchDisplayCtrl.ResetVideoIds
	// Flags: [Final|Native|Public]
	// Offset: 0x106b74cc
	// Params: [ Num(0) Size(0x0) ]
	void ResetVideoIds();

	// Object: Function Hall.HallMatchDisplayCtrl.ResetDefaultVideoIds
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x1552e0c4
	// Params: [ Num(0) Size(0x0) ]
	void ResetDefaultVideoIds();

	// Object: Function Hall.HallMatchDisplayCtrl.ResetDefaultSceneKey
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x1552e0b0
	// Params: [ Num(0) Size(0x0) ]
	void ResetDefaultSceneKey();

	// Object: Function Hall.HallMatchDisplayCtrl.ResetCharacterSequence
	// Flags: [Final|Native|Public]
	// Offset: 0x101a40cc
	// Params: [ Num(1) Size(0x4) ]
	void ResetCharacterSequence(int32_t SlotId);

	// Object: Function Hall.HallMatchDisplayCtrl.PlaySceneVideo
	// Flags: [Final|Native|Public]
	// Offset: 0x1552dfb8
	// Params: [ Num(1) Size(0x10) ]
	void PlaySceneVideo(struct FString HeroId);

	// Object: Function Hall.HallMatchDisplayCtrl.PlayMediaAfterLevelsLoaded
	// Flags: [Final|Native|Public]
	// Offset: 0x107cc5c4
	// Params: [ Num(1) Size(0x8) ]
	void PlayMediaAfterLevelsLoaded(struct FName InDisplayTypeStr);

	// Object: Function Hall.HallMatchDisplayCtrl.PlayHeroVoice
	// Flags: [Final|Native|Public]
	// Offset: 0x1552ddf8
	// Params: [ Num(3) Size(0x28) ]
	void PlayHeroVoice(struct AHallCharacter* HallCharacter, struct FString InAvatarId, struct FString InMarkedLabel);

	// Object: Function Hall.HallMatchDisplayCtrl.OnMaterialLoaded
	// Flags: [Final|Native|Public]
	// Offset: 0x1552dd54
	// Params: [ Num(1) Size(0x8) ]
	void OnMaterialLoaded(struct UMaterialInterface* InMat);

	// Object: Function Hall.HallMatchDisplayCtrl.LoadSceneBP
	// Flags: [Final|Native|Public]
	// Offset: 0x10153674
	// Params: [ Num(2) Size(0x20) ]
	void LoadSceneBP(struct FString InMeshName, struct FString InAvatarId);

	// Object: Function Hall.HallMatchDisplayCtrl.LoadAndSetLightLevel
	// Flags: [Final|Native|Public]
	// Offset: 0xfe06850
	// Params: [ Num(1) Size(0x10) ]
	void LoadAndSetLightLevel(struct FString InAvatarId);

	// Object: Function Hall.HallMatchDisplayCtrl.LoadAndSetClothMaterial
	// Flags: [Final|Native|Public]
	// Offset: 0x1552dc64
	// Params: [ Num(2) Size(0x20) ]
	void LoadAndSetClothMaterial(struct FString InMeshName, struct FString InAvatarId);

	// Object: Function Hall.HallMatchDisplayCtrl.GetCharacterPositionBySlot
	// Flags: [Final|Native|Public|HasDefaults]
	// Offset: 0xf6859b0
	// Params: [ Num(2) Size(0x10) ]
	struct FVector GetCharacterPositionBySlot(int32_t SlotId);
};

// Object: Class Hall.HallMatchDisplayLevelSequenceActor
// Size: 0x370 (Inherited: 0x370)
struct AHallMatchDisplayLevelSequenceActor : AActor
{
	DEFINE_UE_CLASS_HELPERS(AHallMatchDisplayLevelSequenceActor, "HallMatchDisplayLevelSequenceActor")
};

// Object: Class Hall.HallMatchDisplayLevelSequenceComponent
// Size: 0x1D0 (Inherited: 0x1A0)
struct UHallMatchDisplayLevelSequenceComponent : UHallDisplayLevelSequenceComponentBase
{
	DEFINE_UE_CLASS_HELPERS(UHallMatchDisplayLevelSequenceComponent, "HallMatchDisplayLevelSequenceComponent")

	uint8_t Pad_0x1A0[0x8]; // 0x1A0(0x8)
	struct AHallCharacter* LevelSequenceHallCharacter; // 0x1A8(0x8)
	uint8_t Pad_0x1B0[0x20]; // 0x1B0(0x20)

	// Object: Function Hall.HallMatchDisplayLevelSequenceComponent.OnHallCharacterMeshLoadComplete
	// Flags: [Final|Native|Private]
	// Offset: 0x1552e52c
	// Params: [ Num(0) Size(0x0) ]
	void OnHallCharacterMeshLoadComplete();
};

// Object: Class Hall.HallMatchSceneEnvComponent
// Size: 0xF8 (Inherited: 0xF8)
struct UHallMatchSceneEnvComponent : UActorComponent
{
	DEFINE_UE_CLASS_HELPERS(UHallMatchSceneEnvComponent, "HallMatchSceneEnvComponent")
};

// Object: Class Hall.HallMPLobbyDisplayCtrl
// Size: 0x578 (Inherited: 0x518)
struct AHallMPLobbyDisplayCtrl : AHallLobbyDisplayCtrl
{
	DEFINE_UE_CLASS_HELPERS(AHallMPLobbyDisplayCtrl, "HallMPLobbyDisplayCtrl")

	struct TMap<struct FName, struct FSoftObjectPath> ScreenMaterialMap; // 0x518(0x50)
	struct FMulticastInlineDelegate OnScreenMaterialLoadComplete; // 0x568(0x10)

	// Object: Function Hall.HallMPLobbyDisplayCtrl.SetScreenMaterial
	// Flags: [Final|Native|Public]
	// Offset: 0x1552e554
	// Params: [ Num(1) Size(0x8) ]
	void SetScreenMaterial(struct FName ScreenName);
};

// Object: Class Hall.HallOperatorDisplayCtrl
// Size: 0x520 (Inherited: 0x4A8)
struct AHallOperatorDisplayCtrl : AHallCommonDisplayCtrl
{
	DEFINE_UE_CLASS_HELPERS(AHallOperatorDisplayCtrl, "HallOperatorDisplayCtrl")

	struct AStaticMeshActor* ExpertBackground2; // 0x4A8(0x8)
	struct UHallCharacterLevelSeqComponentBase* HallExpertLevelSequenceComponent; // 0x4B0(0x8)
	struct UHallHeroActionShowComponent* HallHeroActionShowComponent; // 0x4B8(0x8)
	struct UHallCharacterVoiceComponent* HallCharacterVoiceComponent; // 0x4C0(0x8)
	struct UHallSceneVideoPlayerComponent* HallSceneVideoPlayerComponent; // 0x4C8(0x8)
	struct UHallHighLevelDisplayComponent* HallHighLevelDisplayComponent; // 0x4D0(0x8)
	struct AActor* ExtraSceneActorOrigin; // 0x4D8(0x8)
	struct FMulticastInlineDelegate OnHeroSeqPlayPaused; // 0x4E0(0x10)
	uint8_t Pad_0x4F0[0x30]; // 0x4F0(0x30)

	// Object: Function Hall.HallOperatorDisplayCtrl.UnloadBPLevel
	// Flags: [Final|Native|Public]
	// Offset: 0x1552fea0
	// Params: [ Num(1) Size(0x10) ]
	void UnloadBPLevel(struct FString InAvatarId);

	// Object: Function Hall.HallOperatorDisplayCtrl.ToggleInteracted
	// Flags: [Final|Native|Private]
	// Offset: 0x1552fdf4
	// Params: [ Num(1) Size(0x1) ]
	void ToggleInteracted(uint8_t CanInteracted);

	// Object: Function Hall.HallOperatorDisplayCtrl.StopSceneVideo
	// Flags: [Final|Native|Public]
	// Offset: 0x1552fde0
	// Params: [ Num(0) Size(0x0) ]
	void StopSceneVideo();

	// Object: Function Hall.HallOperatorDisplayCtrl.StopPlaySequenceVoice
	// Flags: [Final|Native|Public]
	// Offset: 0x1552fdcc
	// Params: [ Num(0) Size(0x0) ]
	void StopPlaySequenceVoice();

	// Object: Function Hall.HallOperatorDisplayCtrl.StopPlay2DVoice
	// Flags: [Final|Native|Public]
	// Offset: 0x1552fdb8
	// Params: [ Num(0) Size(0x0) ]
	void StopPlay2DVoice();

	// Object: Function Hall.HallOperatorDisplayCtrl.StopCameraFade
	// Flags: [Final|Native|Public]
	// Offset: 0x1552fda4
	// Params: [ Num(0) Size(0x0) ]
	void StopCameraFade();

	// Object: Function Hall.HallOperatorDisplayCtrl.StartCameraFade
	// Flags: [Final|Native|Public]
	// Offset: 0x1552fd90
	// Params: [ Num(0) Size(0x0) ]
	void StartCameraFade();

	// Object: Function Hall.HallOperatorDisplayCtrl.SetExtraLightEnabled
	// Flags: [Final|Native|Public]
	// Offset: 0x1552fce4
	// Params: [ Num(1) Size(0x1) ]
	void SetExtraLightEnabled(uint8_t bEnabled);

	// Object: Function Hall.HallOperatorDisplayCtrl.SetDefaultSceneKey
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x1552fc38
	// Params: [ Num(1) Size(0x10) ]
	void SetDefaultSceneKey(struct FString InDefaultSceneKey);

	// Object: Function Hall.HallOperatorDisplayCtrl.SetCurrentCharacterSeqEnd
	// Flags: [Final|Native|Public]
	// Offset: 0x1552fc24
	// Params: [ Num(0) Size(0x0) ]
	void SetCurrentCharacterSeqEnd();

	// Object: Function Hall.HallOperatorDisplayCtrl.SetCurCharacterAvatarId
	// Flags: [Final|Native|Public]
	// Offset: 0x1552fb2c
	// Params: [ Num(1) Size(0x10) ]
	void SetCurCharacterAvatarId(struct FString AvatarID);

	// Object: Function Hall.HallOperatorDisplayCtrl.SetCharacterSuitAvatarWithSequence
	// Flags: [Final|Native|Public]
	// Offset: 0x1552f9ac
	// Params: [ Num(2) Size(0x20) ]
	void SetCharacterSuitAvatarWithSequence(struct FString AvatarID, struct FString MarkedFrameName);

	// Object: Function Hall.HallOperatorDisplayCtrl.SetCharacterInteractEnable
	// Flags: [Final|Native|Public]
	// Offset: 0x1552f900
	// Params: [ Num(1) Size(0x1) ]
	void SetCharacterInteractEnable(uint8_t bEnable);

	// Object: Function Hall.HallOperatorDisplayCtrl.SetCharacterActionShow
	// Flags: [Final|Native|Public]
	// Offset: 0x1552f780
	// Params: [ Num(2) Size(0x20) ]
	void SetCharacterActionShow(struct FString AvatarID, struct FString InActionID);

	// Object: Function Hall.HallOperatorDisplayCtrl.SetCanCameraFade
	// Flags: [Final|Native|Public]
	// Offset: 0x1552f6d4
	// Params: [ Num(1) Size(0x1) ]
	void SetCanCameraFade(uint8_t bCanCameraFade);

	// Object: Function Hall.HallOperatorDisplayCtrl.SetCameraDisplayType
	// Flags: [Final|Native|Public]
	// Offset: 0x1552f510
	// Params: [ Num(3) Size(0x21) ]
	void SetCameraDisplayType(struct FString InDisplayType, struct FString InAvatarId, uint8_t bEnterLevel);

	// Object: Function Hall.HallOperatorDisplayCtrl.SetCameraAppearanceDisplayType
	// Flags: [Final|Native|Public]
	// Offset: 0x1552f390
	// Params: [ Num(2) Size(0x20) ]
	void SetCameraAppearanceDisplayType(struct FString InDisplayType, struct FString InAvatarId);

	// Object: Function Hall.HallOperatorDisplayCtrl.SetBPLevelDisplay
	// Flags: [Final|Native|Public]
	// Offset: 0x1552f254
	// Params: [ Num(2) Size(0x11) ]
	void SetBPLevelDisplay(struct FString InAvatarId, uint8_t isHighLevel);

	// Object: Function Hall.HallOperatorDisplayCtrl.SetBackgroundAndFloor
	// Flags: [Final|Native|Public|HasOutParms]
	// Offset: 0x1552f078
	// Params: [ Num(5) Size(0x34) ]
	void SetBackgroundAndFloor(const struct FName& InBackgroundMatParamName, const struct FName& InFloorMatParamName, struct FString InBackgroundPath, struct FString InFloorPath, const float& Index);

	// Object: Function Hall.HallOperatorDisplayCtrl.ResetDefaultSceneKey
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x1552f064
	// Params: [ Num(0) Size(0x0) ]
	void ResetDefaultSceneKey();

	// Object: Function Hall.HallOperatorDisplayCtrl.ResetCharacterSequence
	// Flags: [Final|Native|Public]
	// Offset: 0x1552f050
	// Params: [ Num(0) Size(0x0) ]
	void ResetCharacterSequence();

	// Object: Function Hall.HallOperatorDisplayCtrl.ResetActionShowCharacter
	// Flags: [Final|Native|Public]
	// Offset: 0x1552f03c
	// Params: [ Num(0) Size(0x0) ]
	void ResetActionShowCharacter();

	// Object: Function Hall.HallOperatorDisplayCtrl.PlaySequenceVoiceInTrack
	// Flags: [Final|Native|Public]
	// Offset: 0x1552ef44
	// Params: [ Num(1) Size(0x10) ]
	void PlaySequenceVoiceInTrack(struct FString InAvatarId);

	// Object: Function Hall.HallOperatorDisplayCtrl.PlaySequenceVoice
	// Flags: [Final|Native|Public]
	// Offset: 0x1552edc4
	// Params: [ Num(2) Size(0x20) ]
	void PlaySequenceVoice(struct FString InAvatarId, struct FString InMarkedLabel);

	// Object: Function Hall.HallOperatorDisplayCtrl.PlaySceneVideo
	// Flags: [Final|Native|Public]
	// Offset: 0x1552eccc
	// Params: [ Num(1) Size(0x10) ]
	void PlaySceneVideo(struct FString HeroId);

	// Object: Function Hall.HallOperatorDisplayCtrl.PlayMediaAfterLevelsLoaded
	// Flags: [Final|Native|Public]
	// Offset: 0x1552ec28
	// Params: [ Num(1) Size(0x8) ]
	void PlayMediaAfterLevelsLoaded(struct FName InDisplayTypeStr);

	// Object: Function Hall.HallOperatorDisplayCtrl.PlayEventVoice
	// Flags: [Final|Native|Public]
	// Offset: 0x1552ea6c
	// Params: [ Num(3) Size(0x24) ]
	void PlayEventVoice(struct FString InAvatarId, struct FString InMarkedLabel, int32_t InEventIndex);

	// Object: Function Hall.HallOperatorDisplayCtrl.Play2DVoice
	// Flags: [Final|Native|Public]
	// Offset: 0x1552e8ec
	// Params: [ Num(2) Size(0x20) ]
	void Play2DVoice(struct FString HeroId, struct FString InVoiceId);

	// Object: Function Hall.HallOperatorDisplayCtrl.OnMaterialLoaded
	// Flags: [Final|Native|Private]
	// Offset: 0x1552e848
	// Params: [ Num(1) Size(0x8) ]
	void OnMaterialLoaded(struct UMaterialInterface* InMat);

	// Object: Function Hall.HallOperatorDisplayCtrl.OnLevelAndSeqLoadedComplete
	// Flags: [Final|Native|Public]
	// Offset: 0x1552e834
	// Params: [ Num(0) Size(0x0) ]
	void OnLevelAndSeqLoadedComplete();

	// Object: Function Hall.HallOperatorDisplayCtrl.JumpToMarkedFrame
	// Flags: [Final|Native|Public]
	// Offset: 0x1552e820
	// Params: [ Num(0) Size(0x0) ]
	void JumpToMarkedFrame();

	// Object: Function Hall.HallOperatorDisplayCtrl.IsVideoStopped
	// Flags: [Final|Native|Public]
	// Offset: 0x1552e7e8
	// Params: [ Num(1) Size(0x1) ]
	uint8_t IsVideoStopped();

	// Object: Function Hall.HallOperatorDisplayCtrl.GetOn2DVoiceStopped
	// Flags: [Final|Native|Public]
	// Offset: 0x1552e764
	// Params: [ Num(1) Size(0x10) ]
	struct FMulticastInlineDelegate GetOn2DVoiceStopped();

	// Object: Function Hall.HallOperatorDisplayCtrl.EnableMotionBlur
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x1552e6c0
	// Params: [ Num(1) Size(0x4) ]
	void EnableMotionBlur(float InAmount);

	// Object: Function Hall.HallOperatorDisplayCtrl.EnableMainCamera
	// Flags: [Final|Native|Private]
	// Offset: 0x1552e614
	// Params: [ Num(1) Size(0x1) ]
	void EnableMainCamera(uint8_t bSucceeded);

	// Object: Function Hall.HallOperatorDisplayCtrl.DisableMotionBlur
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x1552e600
	// Params: [ Num(0) Size(0x0) ]
	void DisableMotionBlur();
};

// Object: Class Hall.HallOperatorItemDisplayCtrl
// Size: 0x478 (Inherited: 0x388)
struct AHallOperatorItemDisplayCtrl : AHallDisplayCtrlBase
{
	DEFINE_UE_CLASS_HELPERS(AHallOperatorItemDisplayCtrl, "HallOperatorItemDisplayCtrl")

	struct UHallCameraCtrlComponentBase* CameraCtrlComponent; // 0x388(0x8)
	struct UHallGeneralRotateComponent* GeneralRotateComponent; // 0x390(0x8)
	struct ASceneSkeleteMeshActor* HeroItemMeshActor; // 0x398(0x8)
	struct AActor* SceneOrigin; // 0x3A0(0x8)
	struct TMap<struct FName, struct FHallDisplayInfoBase> DisplayInfoMap; // 0x3A8(0x50)
	uint8_t bReboundEnable : 1; // 0x3F8(0x1), Mask(0x1)
	uint8_t BitPad_0x3F8_1 : 7; // 0x3F8(0x1)
	uint8_t Pad_0x3F9[0x7]; // 0x3F9(0x7)
	struct FMulticastInlineDelegate OnSkeletalMeshLoadCompleted; // 0x400(0x10)
	struct UMaterialParameterCollection* ParameterCollection; // 0x410(0x8)
	uint8_t Pad_0x418[0x18]; // 0x418(0x18)
	struct AActor* TouchedActor; // 0x430(0x8)
	struct TArray<struct AActor*> FogActors; // 0x438(0x10)
	uint8_t Pad_0x448[0x30]; // 0x448(0x30)

	// Object: Function Hall.HallOperatorItemDisplayCtrl.TryGenerateAnimBP
	// Flags: [Final|Native|Public]
	// Offset: 0x1553164c
	// Params: [ Num(1) Size(0x10) ]
	void TryGenerateAnimBP(struct FString InItemID);

	// Object: Function Hall.HallOperatorItemDisplayCtrl.SetSwitchParameter
	// Flags: [Final|Native|Public]
	// Offset: 0x1553156c
	// Params: [ Num(2) Size(0xC) ]
	void SetSwitchParameter(struct FName ParameterName, float Value);

	// Object: Function Hall.HallOperatorItemDisplayCtrl.SetPlayState
	// Flags: [Final|Native|Public]
	// Offset: 0x155314c0
	// Params: [ Num(1) Size(0x1) ]
	void SetPlayState(uint8_t bTurnOn);

	// Object: Function Hall.HallOperatorItemDisplayCtrl.SetItemMaterialScalarParam
	// Flags: [Final|Native|Public]
	// Offset: 0x155313a8
	// Params: [ Num(3) Size(0x14) ]
	void SetItemMaterialScalarParam(struct FName MatSlotName, struct FName ParameterName, float Value);

	// Object: Function Hall.HallOperatorItemDisplayCtrl.SetHeroPropsMysticalSkinScheme
	// Flags: [Final|Native|Public|HasOutParms]
	// Offset: 0x155312f4
	// Params: [ Num(1) Size(0x8) ]
	void SetHeroPropsMysticalSkinScheme(const struct FName& SchemeID);

	// Object: Function Hall.HallOperatorItemDisplayCtrl.SetDisplayType
	// Flags: [Final|Native|Public]
	// Offset: 0x155311fc
	// Params: [ Num(1) Size(0x10) ]
	void SetDisplayType(struct FString InDisplayType);

	// Object: Function Hall.HallOperatorItemDisplayCtrl.SetDisplayItem
	// Flags: [Final|Native|Public]
	// Offset: 0x15531150
	// Params: [ Num(1) Size(0x10) ]
	void SetDisplayItem(struct FString HeroItemId);

	// Object: Function Hall.HallOperatorItemDisplayCtrl.SetCurrentSchemeId
	// Flags: [Final|Native|Public]
	// Offset: 0x155310a4
	// Params: [ Num(1) Size(0x10) ]
	void SetCurrentSchemeId(struct FString InSchemeId);

	// Object: Function Hall.HallOperatorItemDisplayCtrl.ResetDisplayItem
	// Flags: [Final|Native|Public]
	// Offset: 0x15531090
	// Params: [ Num(0) Size(0x0) ]
	void ResetDisplayItem();

	// Object: Function Hall.HallOperatorItemDisplayCtrl.OnAnimBPLoaded
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults]
	// Offset: 0x15530fd0
	// Params: [ Num(1) Size(0x18) ]
	void OnAnimBPLoaded(const struct FSoftObjectPath& ItemModelPath);

	// Object: Function Hall.HallOperatorItemDisplayCtrl.GetHeroItemSkeletalMeshComponent
	// Flags: [Final|Native|Public|Const]
	// Offset: 0x15530f9c
	// Params: [ Num(1) Size(0x8) ]
	struct USkeletalMeshComponent* GetHeroItemSkeletalMeshComponent();
};

// Object: Class Hall.HallPlayerController
// Size: 0xB08 (Inherited: 0xB08)
struct AHallPlayerController : AGPPlayerController
{
	DEFINE_UE_CLASS_HELPERS(AHallPlayerController, "HallPlayerController")
};

// Object: Class Hall.HallPostProcessDisplayActor
// Size: 0x3C0 (Inherited: 0x370)
struct AHallPostProcessDisplayActor : AActor
{
	DEFINE_UE_CLASS_HELPERS(AHallPostProcessDisplayActor, "HallPostProcessDisplayActor")

	struct TSoftObjectPtr<UMaterialInstance> MaterialInstPath; // 0x370(0x28)
	struct TWeakObjectPtr<struct UMaterialInstanceDynamic> MaterialInstDynamic; // 0x398(0x8)
	int32_t Capture2DWidth; // 0x3A0(0x4)
	float PostProcessVolumuDelayTime; // 0x3A4(0x4)
	float PostProcessVolumnDuration; // 0x3A8(0x4)
	struct TWeakObjectPtr<struct ASceneCapture2D> SceneCapture; // 0x3AC(0x8)
	uint8_t Pad_0x3B4[0x4]; // 0x3B4(0x4)
	struct USceneCaptureComponent2D* SceneCaptureComp; // 0x3B8(0x8)

	// Object: Function Hall.HallPostProcessDisplayActor.SetAttachActor
	// Flags: [Final|Native|Public]
	// Offset: 0x15531758
	// Params: [ Num(1) Size(0x8) ]
	void SetAttachActor(struct AActor* AttachActor);

	// Object: Function Hall.HallPostProcessDisplayActor.GetMaterialInstDynamic
	// Flags: [Final|Native|Public]
	// Offset: 0x15531724
	// Params: [ Num(1) Size(0x8) ]
	struct UMaterialInstanceDynamic* GetMaterialInstDynamic();
};

// Object: Class Hall.HallPreviewRoomDisplayCtrl
// Size: 0x420 (Inherited: 0x388)
struct AHallPreviewRoomDisplayCtrl : AHallDisplayCtrlBase
{
	DEFINE_UE_CLASS_HELPERS(AHallPreviewRoomDisplayCtrl, "HallPreviewRoomDisplayCtrl")

	struct FMulticastInlineDelegate OnLevelsLoadingCompleted; // 0x388(0x10)
	struct UDataTable* SceneType2SubLvlsTable; // 0x398(0x8)
	struct TArray<struct FPreviewRoomSceneType2SubLvls> SceneTypeDataArray; // 0x3A0(0x10)
	struct TMap<EPreviewRoomSceneType, struct FPreviewRoomSceneAssetPath> SceneTypeToSubLevelsMap; // 0x3B0(0x50)
	struct TArray<struct FSoftObjectPath> CurrentLoadingLevels; // 0x400(0x10)
	uint8_t bIsLoading : 1; // 0x410(0x1), Mask(0x1)
	uint8_t BitPad_0x410_1 : 7; // 0x410(0x1)
	EPreviewRoomSceneType CurrentSceneType; // 0x411(0x1)
	uint8_t Pad_0x412[0xE]; // 0x412(0xE)

	// Object: Function Hall.HallPreviewRoomDisplayCtrl.UnloadAllLevels
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x155319e4
	// Params: [ Num(0) Size(0x0) ]
	void UnloadAllLevels();

	// Object: Function Hall.HallPreviewRoomDisplayCtrl.OnSingleLevelUnloadCompleted
	// Flags: [Final|Native|Protected]
	// Offset: 0x155319d0
	// Params: [ Num(0) Size(0x0) ]
	void OnSingleLevelUnloadCompleted();

	// Object: Function Hall.HallPreviewRoomDisplayCtrl.OnSingleLevelLoadCompleted
	// Flags: [Final|Native|Protected]
	// Offset: 0x155319bc
	// Params: [ Num(0) Size(0x0) ]
	void OnSingleLevelLoadCompleted();

	// Object: Function Hall.HallPreviewRoomDisplayCtrl.LoadPreviewRoomSceneByType
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x15531918
	// Params: [ Num(1) Size(0x1) ]
	void LoadPreviewRoomSceneByType(EPreviewRoomSceneType SceneType);

	// Object: Function Hall.HallPreviewRoomDisplayCtrl.IsLoading
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x155318fc
	// Params: [ Num(1) Size(0x1) ]
	uint8_t IsLoading();

	// Object: Function Hall.HallPreviewRoomDisplayCtrl.GetCurrentSceneType
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x155318e0
	// Params: [ Num(1) Size(0x1) ]
	EPreviewRoomSceneType GetCurrentSceneType();
};

// Object: Class Hall.HallRandomMeshActor
// Size: 0x458 (Inherited: 0x370)
struct AHallRandomMeshActor : AActor
{
	DEFINE_UE_CLASS_HELPERS(AHallRandomMeshActor, "HallRandomMeshActor")

	struct TArray<struct UStaticMesh*> RandomMeshArray; // 0x370(0x10)
	struct TArray<struct USkeletalMesh*> RandomSkeletonMeshArray; // 0x380(0x10)
	struct TArray<struct FSoftObjectPath> SkeletonAnimArray; // 0x390(0x10)
	struct UGPStaticMeshComponent* DynamicMeshComponent; // 0x3A0(0x8)
	struct USkeletalMeshComponent* SkeletalMeshComponent; // 0x3A8(0x8)
	struct UMaterialInterface* SelectedMaterial; // 0x3B0(0x8)
	struct TArray<struct UMaterialInstanceDynamic*> DynamicMaterialInstance; // 0x3B8(0x10)
	uint8_t IsFreshSelect : 1; // 0x3C8(0x1), Mask(0x1)
	uint8_t BitPad_0x3C8_1 : 7; // 0x3C8(0x1)
	uint8_t IsAutoRandomMesh : 1; // 0x3C9(0x1), Mask(0x1)
	uint8_t BitPad_0x3C9_1 : 7; // 0x3C9(0x1)
	uint8_t Pad_0x3CA[0x2]; // 0x3CA(0x2)
	float SelectEffectMaxTime; // 0x3CC(0x4)
	float SelectEffectMax; // 0x3D0(0x4)
	float SelectEffectMin; // 0x3D4(0x4)
	struct UCurveFloat* EffectCurve; // 0x3D8(0x8)
	uint8_t bSelected : 1; // 0x3E0(0x1), Mask(0x1)
	uint8_t BitPad_0x3E0_1 : 7; // 0x3E0(0x1)
	uint8_t bHover : 1; // 0x3E1(0x1), Mask(0x1)
	uint8_t BitPad_0x3E1_1 : 7; // 0x3E1(0x1)
	uint8_t Pad_0x3E2[0x6]; // 0x3E2(0x6)
	struct UTimelineComponent* EffectTimeline; // 0x3E8(0x8)
	uint8_t Pad_0x3F0[0x60]; // 0x3F0(0x60)
	struct UAnimSequence* LoadedSkeletonAnim; // 0x450(0x8)

	// Object: Function Hall.HallRandomMeshActor.UpdateTimelineEffect
	// Flags: [Final|Native|Public]
	// Offset: 0x15531fcc
	// Params: [ Num(1) Size(0x4) ]
	void UpdateTimelineEffect(float Value);

	// Object: Function Hall.HallRandomMeshActor.UpdateEffect
	// Flags: [Final|Native|Public]
	// Offset: 0x15531f28
	// Params: [ Num(1) Size(0x4) ]
	void UpdateEffect(float Value);

	// Object: Function Hall.HallRandomMeshActor.SetSkeletonMeshState
	// Flags: [Final|Native|Public]
	// Offset: 0x15531e7c
	// Params: [ Num(1) Size(0x1) ]
	void SetSkeletonMeshState(uint8_t bShow);

	// Object: Function Hall.HallRandomMeshActor.SetSkeletonMesh
	// Flags: [Final|Native|Public]
	// Offset: 0x15531dd8
	// Params: [ Num(1) Size(0x8) ]
	void SetSkeletonMesh(struct USkeletalMesh* SkeletalMesh);

	// Object: Function Hall.HallRandomMeshActor.SetSelected
	// Flags: [Final|Native|Public]
	// Offset: 0x15531d2c
	// Params: [ Num(1) Size(0x1) ]
	void SetSelected(uint8_t bIsSelected);

	// Object: Function Hall.HallRandomMeshActor.SetMesh
	// Flags: [Final|Native|Public]
	// Offset: 0x15531c88
	// Params: [ Num(1) Size(0x8) ]
	void SetMesh(struct UStaticMesh* StaticMesh);

	// Object: Function Hall.HallRandomMeshActor.SetHover
	// Flags: [Final|Native|Public]
	// Offset: 0x15531bdc
	// Params: [ Num(1) Size(0x1) ]
	void SetHover(uint8_t bIsHover);

	// Object: Function Hall.HallRandomMeshActor.RandomSkeletonMesh
	// Flags: [Final|Native|Public]
	// Offset: 0x15531b38
	// Params: [ Num(1) Size(0x4) ]
	void RandomSkeletonMesh(int32_t Index);

	// Object: Function Hall.HallRandomMeshActor.RandomMesh
	// Flags: [Final|Native|Public]
	// Offset: 0x15531a94
	// Params: [ Num(1) Size(0x4) ]
	void RandomMesh(int32_t Index);

	// Object: Function Hall.HallRandomMeshActor.PlaySkeletonAnim
	// Flags: [Final|Native|Public]
	// Offset: 0x15531a80
	// Params: [ Num(0) Size(0x0) ]
	void PlaySkeletonAnim();

	// Object: Function Hall.HallRandomMeshActor.OnEffectFinished
	// Flags: [Final|Native|Public]
	// Offset: 0x15531a6c
	// Params: [ Num(0) Size(0x0) ]
	void OnEffectFinished();

	// Object: Function Hall.HallRandomMeshActor.IsSelected
	// Flags: [Final|Native|Public|Const]
	// Offset: 0x15531a50
	// Params: [ Num(1) Size(0x1) ]
	uint8_t IsSelected();

	// Object: Function Hall.HallRandomMeshActor.IsHover
	// Flags: [Final|Native|Public|Const]
	// Offset: 0x15531a34
	// Params: [ Num(1) Size(0x1) ]
	uint8_t IsHover();

	// Object: Function Hall.HallRandomMeshActor.GetMeshActorId
	// Flags: [Final|Native|Public]
	// Offset: 0x15531a18
	// Params: [ Num(1) Size(0x4) ]
	int32_t GetMeshActorId();
};

// Object: Class Hall.HallSceneActor
// Size: 0x378 (Inherited: 0x370)
struct AHallSceneActor : AActor
{
	DEFINE_UE_CLASS_HELPERS(AHallSceneActor, "HallSceneActor")

	struct FName SceneActorName; // 0x370(0x8)

	// Object: Function Hall.HallSceneActor.Unregiser
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x155320f8
	// Params: [ Num(0) Size(0x0) ]
	void Unregiser();

	// Object: Function Hall.HallSceneActor.Register
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x155320e4
	// Params: [ Num(0) Size(0x0) ]
	void Register();
};

// Object: Class Hall.HallSceneBGActor
// Size: 0x390 (Inherited: 0x380)
struct AHallSceneBGActor : AStaticMeshActor
{
	DEFINE_UE_CLASS_HELPERS(AHallSceneBGActor, "HallSceneBGActor")

	struct FName MeshName; // 0x37C(0x8)
	uint8_t AutoCreateDMI : 1; // 0x384(0x1), Mask(0x1)
	int32_t AutoCreateDMIIndex; // 0x388(0x4)
	uint8_t BitPad_0x38C_1 : 7; // 0x38C(0x1)
	uint8_t Pad_0x38D[0x3]; // 0x38D(0x3)
};

// Object: Class Hall.HallSceneBGManager
// Size: 0x260 (Inherited: 0x30)
struct UHallSceneBGManager : UWorldSubsystem
{
	DEFINE_UE_CLASS_HELPERS(UHallSceneBGManager, "HallSceneBGManager")

	uint8_t Pad_0x30[0x18]; // 0x30(0x18)
	struct TMap<struct FString, struct UObject*> PreLoadedMeshObjectMap; // 0x48(0x50)
	struct TMap<struct FString, struct UObject*> PreLoadedAnimInstObjectMap; // 0x98(0x50)
	struct TMap<struct FName, struct ALevelSequenceActor*> AllMatchSequences; // 0xE8(0x50)
	struct TMap<struct FString, struct UObject*> PreLoadMatchSequenceMap; // 0x138(0x50)
	struct TMap<struct FName, struct AHallSceneBGActor*> HallSceneBGActorMap; // 0x188(0x50)
	struct TMap<struct FName, struct AHallSceneActor*> HallSceneActorMap; // 0x1D8(0x50)
	uint8_t Pad_0x228[0x20]; // 0x228(0x20)
	struct TWeakObjectPtr<struct UMaterialInstanceDynamic> SceneMatInsDynamic; // 0x248(0x8)
	struct TWeakObjectPtr<struct UTexture> SceneTexture; // 0x250(0x8)
	struct TWeakObjectPtr<struct AActor> CurLoadedBpActor; // 0x258(0x8)

	// Object: Function Hall.HallSceneBGManager.SwitchBGMatVectorParam
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults]
	// Offset: 0x15533330
	// Params: [ Num(4) Size(0x20) ]
	void SwitchBGMatVectorParam(int32_t InMatIndex, const struct FName& InMeshName, const struct FName& InParamName, struct FVector InValue);

	// Object: Function Hall.HallSceneBGManager.SwitchBGMatTextureParamByPath
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults]
	// Offset: 0x155330dc
	// Params: [ Num(6) Size(0x49) ]
	uint8_t SwitchBGMatTextureParamByPath(int32_t InMatIndex, const struct FName& InMeshName, const struct FName& InParamName, const struct FSoftObjectPath& InValue, struct FSoftObjectPath InDefaultTex);

	// Object: Function Hall.HallSceneBGManager.SwitchBGMatTextureParam
	// Flags: [Final|Native|Public|HasOutParms]
	// Offset: 0x15532f5c
	// Params: [ Num(4) Size(0x20) ]
	void SwitchBGMatTextureParam(int32_t InMatIndex, const struct FName& InMeshName, const struct FName& InParamName, struct UTexture* InValue);

	// Object: Function Hall.HallSceneBGManager.SwitchBGMatScalarParam
	// Flags: [Final|Native|Public|HasOutParms]
	// Offset: 0x15532ddc
	// Params: [ Num(4) Size(0x18) ]
	void SwitchBGMatScalarParam(int32_t InMatIndex, const struct FName& InMeshName, const struct FName& InParamName, float InValue);

	// Object: Function Hall.HallSceneBGManager.SwitchBackgroundMatNoDynamic
	// Flags: [Final|Native|Public|HasOutParms]
	// Offset: 0x15532cb0
	// Params: [ Num(3) Size(0x18) ]
	void SwitchBackgroundMatNoDynamic(int32_t InMatIndex, const struct FName& InMeshName, struct UMaterialInterface* InMatInterface);

	// Object: Function Hall.HallSceneBGManager.SwitchBackgroundMatByPathNoUnloadLast
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults]
	// Offset: 0x15532b60
	// Params: [ Num(3) Size(0x28) ]
	void SwitchBackgroundMatByPathNoUnloadLast(int32_t InMatIndex, const struct FName& InMeshName, const struct FSoftObjectPath& InMatPath);

	// Object: Function Hall.HallSceneBGManager.SwitchBackgroundMatByPath
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults]
	// Offset: 0x15532a10
	// Params: [ Num(3) Size(0x28) ]
	void SwitchBackgroundMatByPath(int32_t InMatIndex, const struct FName& InMeshName, const struct FSoftObjectPath& InMatPath);

	// Object: Function Hall.HallSceneBGManager.SwitchBackgroundMat
	// Flags: [Final|Native|Public|HasOutParms]
	// Offset: 0x155328e4
	// Params: [ Num(3) Size(0x18) ]
	void SwitchBackgroundMat(int32_t InMatIndex, const struct FName& InMeshName, struct UMaterialInterface* InMatInterface);

	// Object: Function Hall.HallSceneBGManager.SpawnActorAndSetPosition
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable]
	// Offset: 0x15532750
	// Params: [ Num(5) Size(0x58) ]
	struct AActor* SpawnActorAndSetPosition(struct UObject* InClass, struct AActor* AttachedParent, ECustomTransformRule TransformRule, const struct FTransform& InTransform);

	// Object: Function Hall.HallSceneBGManager.SetRegisteredActorVisibilityWithChildren
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x15532644
	// Params: [ Num(3) Size(0xA) ]
	uint8_t SetRegisteredActorVisibilityWithChildren(const struct FName& InName, uint8_t bVisible);

	// Object: Function Hall.HallSceneBGManager.SetRegisteredActorVisibility
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x15532538
	// Params: [ Num(3) Size(0xA) ]
	uint8_t SetRegisteredActorVisibility(const struct FName& InName, uint8_t bVisible);

	// Object: Function Hall.HallSceneBGManager.PreLoadAllMatchLevelSequences
	// Flags: [Final|Native|Public]
	// Offset: 0x15532524
	// Params: [ Num(0) Size(0x0) ]
	void PreLoadAllMatchLevelSequences();

	// Object: Function Hall.HallSceneBGManager.LoadAndSpawnActorFromSoftClass
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable]
	// Offset: 0x15532370
	// Params: [ Num(4) Size(0x60) ]
	void LoadAndSpawnActorFromSoftClass(const struct FSoftClassPath& InClassPath, struct AActor* AttachedParent, ECustomTransformRule TransformRule, const struct FTransform& InTransform);

	// Object: Function Hall.HallSceneBGManager.GetRegisteredSceneBGActor
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x155322b4
	// Params: [ Num(2) Size(0x10) ]
	struct AActor* GetRegisteredSceneBGActor(const struct FName& InName);

	// Object: Function Hall.HallSceneBGManager.GetRegisteredSceneActor
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x155321f8
	// Params: [ Num(2) Size(0x10) ]
	struct AActor* GetRegisteredSceneActor(const struct FName& InName);

	// Object: Function Hall.HallSceneBGManager.Get
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x15532154
	// Params: [ Num(2) Size(0x10) ]
	static struct UHallSceneBGManager* Get(struct UObject* WorldContextObject);

	// Object: Function Hall.HallSceneBGManager.DestroySceneActor
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x15532140
	// Params: [ Num(0) Size(0x0) ]
	void DestroySceneActor();

	// Object: Function Hall.HallSceneBGManager.ClearAllMatchLevelSequences
	// Flags: [Final|Native|Public]
	// Offset: 0x1553212c
	// Params: [ Num(0) Size(0x0) ]
	void ClearAllMatchLevelSequences();
};

// Object: Class Hall.HallSceneCapture2DComponent
// Size: 0xF8 (Inherited: 0xF8)
struct UHallSceneCapture2DComponent : UActorComponent
{
	DEFINE_UE_CLASS_HELPERS(UHallSceneCapture2DComponent, "HallSceneCapture2DComponent")
};

// Object: Class Hall.HallScenePreviewer
// Size: 0x3E0 (Inherited: 0x370)
struct AHallScenePreviewer : AActor
{
	DEFINE_UE_CLASS_HELPERS(AHallScenePreviewer, "HallScenePreviewer")

	struct UHallSceneVideoPlayerComponent* SceneVideoPlayerComponent; // 0x370(0x8)
	struct FName MiniWorldName; // 0x378(0x8)
	struct TArray<struct FName> SubLevels; // 0x380(0x10)
	uint8_t bCanSpawnBP : 1; // 0x390(0x1), Mask(0x1)
	uint8_t BitPad_0x390_1 : 7; // 0x390(0x1)
	uint8_t Pad_0x391[0x3]; // 0x391(0x3)
	struct FName RootActorTagName; // 0x394(0x8)
	ETransformRule TransformRule; // 0x39C(0x1)
	uint8_t bSwitchVideo : 1; // 0x39D(0x1), Mask(0x1)
	uint8_t BitPad_0x39D_1 : 7; // 0x39D(0x1)
	uint8_t bIsMatch : 1; // 0x39E(0x1), Mask(0x1)
	uint8_t BitPad_0x39E_1 : 7; // 0x39E(0x1)
	uint8_t Pad_0x39F[0x1]; // 0x39F(0x1)
	struct FName OperatorVideoName; // 0x3A0(0x8)
	struct FName ClothTagName; // 0x3A8(0x8)
	struct FName VideoBgTagName; // 0x3B0(0x8)
	struct FName SceneBpID; // 0x3B8(0x8)
	struct TWeakObjectPtr<struct AActor> RootActor; // 0x3C0(0x8)
	struct TWeakObjectPtr<struct AActor> SceneBPActor; // 0x3C8(0x8)
	EMiniWorldType MiniWorldType; // 0x3D0(0x1)
	uint8_t Pad_0x3D1[0xF]; // 0x3D1(0xF)
};

// Object: Class Hall.HallSceneVideoPlayerComponent
// Size: 0x150 (Inherited: 0xF8)
struct UHallSceneVideoPlayerComponent : UActorComponent
{
	DEFINE_UE_CLASS_HELPERS(UHallSceneVideoPlayerComponent, "HallSceneVideoPlayerComponent")

	struct UBinkMediaPlayer* MediaPlayerPtr; // 0xF8(0x8)
	struct FName VideoMeshName; // 0x100(0x8)
	uint8_t bEnableReleaseResource : 1; // 0x108(0x1), Mask(0x1)
	uint8_t BitPad_0x108_1 : 7; // 0x108(0x1)
	uint8_t Pad_0x109[0x3]; // 0x109(0x3)
	int32_t VideoMaterialIndex; // 0x10C(0x4)
	struct FName TextureName; // 0x110(0x8)
	uint8_t bReplaceTexture : 1; // 0x118(0x1), Mask(0x1)
	uint8_t BitPad_0x118_1 : 7; // 0x118(0x1)
	uint8_t bOnlyTexture : 1; // 0x119(0x1), Mask(0x1)
	uint8_t BitPad_0x119_1 : 7; // 0x119(0x1)
	uint8_t Pad_0x11A[0x26]; // 0x11A(0x26)
	struct FString DefaultSceneKey; // 0x140(0x10)

	// Object: Function Hall.HallSceneVideoPlayerComponent.SetNormalTexture
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults]
	// Offset: 0x155338d4
	// Params: [ Num(1) Size(0x18) ]
	void SetNormalTexture(const struct FSoftObjectPath& ObjectPath);

	// Object: Function Hall.HallSceneVideoPlayerComponent.SetDefaultSceneKey
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x15533828
	// Params: [ Num(1) Size(0x10) ]
	void SetDefaultSceneKey(struct FString InDefaultSceneKey);

	// Object: Function Hall.HallSceneVideoPlayerComponent.ResetNormalTexture
	// Flags: [Final|Native|Public]
	// Offset: 0x15533814
	// Params: [ Num(0) Size(0x0) ]
	void ResetNormalTexture();

	// Object: Function Hall.HallSceneVideoPlayerComponent.ResetDefaultSceneKey
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x15533800
	// Params: [ Num(0) Size(0x0) ]
	void ResetDefaultSceneKey();

	// Object: Function Hall.HallSceneVideoPlayerComponent.OnMediaReachedEnd
	// Flags: [Final|Native|Private]
	// Offset: 0x10713f18
	// Params: [ Num(0) Size(0x0) ]
	void OnMediaReachedEnd();

	// Object: Function Hall.HallSceneVideoPlayerComponent.IsUnUsingDefaultSceneKey
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x15533738
	// Params: [ Num(2) Size(0x11) ]
	uint8_t IsUnUsingDefaultSceneKey(struct FString& InAvatarId);

	// Object: Function Hall.HallSceneVideoPlayerComponent.GetDefaultSceneKey
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x155336b4
	// Params: [ Num(1) Size(0x10) ]
	struct FString GetDefaultSceneKey();
};

// Object: Class Hall.HallSecretServiceCtrl
// Size: 0x450 (Inherited: 0x388)
struct AHallSecretServiceCtrl : AHallDisplayCtrlBase
{
	DEFINE_UE_CLASS_HELPERS(AHallSecretServiceCtrl, "HallSecretServiceCtrl")

	struct UHallCameraCtrlComponentBase* CameraCtrlComponent; // 0x388(0x8)
	struct TMap<struct FName, struct FHallDisplayInfoBase> DisplayInfoMap; // 0x390(0x50)
	struct TMap<struct FString, struct ALevelSequenceActor*> LevelSequenceActors; // 0x3E0(0x50)
	uint8_t Pad_0x430[0x20]; // 0x430(0x20)

	// Object: Function Hall.HallSecretServiceCtrl.StopSequence
	// Flags: [Final|Native|Public]
	// Offset: 0x15535338
	// Params: [ Num(1) Size(0x10) ]
	void StopSequence(struct FString InSeqName);

	// Object: Function Hall.HallSecretServiceCtrl.SetDisplayType
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x1553528c
	// Params: [ Num(1) Size(0x10) ]
	void SetDisplayType(struct FString InDisplayType);

	// Object: Function Hall.HallSecretServiceCtrl.ResetType
	// Flags: [Final|Native|Public]
	// Offset: 0x15535278
	// Params: [ Num(0) Size(0x0) ]
	void ResetType();

	// Object: Function Hall.HallSecretServiceCtrl.PlayCurrentSequence
	// Flags: [Final|Native|Public]
	// Offset: 0x155351cc
	// Params: [ Num(1) Size(0x10) ]
	void PlayCurrentSequence(struct FString InSeqName);
};

// Object: Class Hall.HallSequenceDirector
// Size: 0x30 (Inherited: 0x30)
struct UHallSequenceDirector : ULevelSequenceDirector
{
	DEFINE_UE_CLASS_HELPERS(UHallSequenceDirector, "HallSequenceDirector")

	// Object: Function Hall.HallSequenceDirector.PauseSequence
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x15535400
	// Params: [ Num(0) Size(0x0) ]
	void PauseSequence();

	// Object: Function Hall.HallSequenceDirector.DetachFromActor
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x155353ec
	// Params: [ Num(0) Size(0x0) ]
	void DetachFromActor();
};

// Object: Class Hall.HallSettlementAnimInstance
// Size: 0x290 (Inherited: 0x270)
struct UHallSettlementAnimInstance : UAnimInstance
{
	DEFINE_UE_CLASS_HELPERS(UHallSettlementAnimInstance, "HallSettlementAnimInstance")

	struct FString SettlementAnimName; // 0x270(0x10)
	struct UAnimSequenceBase* SettlementAnim; // 0x280(0x8)
	uint8_t Pad_0x288[0x8]; // 0x288(0x8)
};

// Object: Class Hall.HallSettlementDisplayCtrl
// Size: 0x510 (Inherited: 0x388)
struct AHallSettlementDisplayCtrl : AHallDisplayCtrlBase
{
	DEFINE_UE_CLASS_HELPERS(AHallSettlementDisplayCtrl, "HallSettlementDisplayCtrl")

	struct FMulticastInlineDelegate OnHallSettlementResReadyEvent; // 0x388(0x10)
	struct FMulticastInlineDelegate HallSettlementSeqEnd; // 0x398(0x10)
	struct UHallCharacterCtrlComponentBase* CharacterCtrlComponent; // 0x3A8(0x8)
	struct TWeakObjectPtr<struct AActor> BaseActor; // 0x3B0(0x8)
	struct TWeakObjectPtr<struct AActor> BaseActor2; // 0x3B8(0x8)
	struct TMap<struct FName, struct FSoftObjectPath> DisplayLevelSeqPaths; // 0x3C0(0x50)
	struct TMap<struct FName, struct ALevelSequenceActor*> DisplayLevelSeqActors; // 0x410(0x50)
	struct TMap<struct FName, struct FSoftObjectPath> MobileDisplayLevelSeqPaths; // 0x460(0x50)
	uint8_t Pad_0x4B0[0x60]; // 0x4B0(0x60)

	// Object: Function Hall.HallSettlementDisplayCtrl.PreLoadSettlementLevel
	// Flags: [Final|Native|Private]
	// Offset: 0x10af40d8
	// Params: [ Num(2) Size(0x8) ]
	void PreLoadSettlementLevel(uint8_t isReleaseFocusPoint, int32_t OnlyFocusOneActor);

	// Object: Function Hall.HallSettlementDisplayCtrl.PlayLevelSeqActor
	// Flags: [Final|Native|Public]
	// Offset: 0x10b758bc
	// Params: [ Num(1) Size(0x8) ]
	void PlayLevelSeqActor(struct FName LevelSeqActorName);

	// Object: Function Hall.HallSettlementDisplayCtrl.OnSettlementEnd
	// Flags: [Final|Native|Public]
	// Offset: 0x105d66d0
	// Params: [ Num(0) Size(0x0) ]
	void OnSettlementEnd();

	// Object: Function Hall.HallSettlementDisplayCtrl.OnMovieSceneSequencePlayerEventStop
	// Flags: [Final|Native|Private]
	// Offset: 0x15535630
	// Params: [ Num(0) Size(0x0) ]
	void OnMovieSceneSequencePlayerEventStop();

	// Object: Function Hall.HallSettlementDisplayCtrl.OnMovieSceneSequencePlayerEventFinished
	// Flags: [Final|Native|Private]
	// Offset: 0x1553561c
	// Params: [ Num(0) Size(0x0) ]
	void OnMovieSceneSequencePlayerEventFinished();

	// Object: Function Hall.HallSettlementDisplayCtrl.OnLevelStreamingProgress
	// Flags: [Final|Native|Private]
	// Offset: 0x15535578
	// Params: [ Num(1) Size(0x4) ]
	void OnLevelStreamingProgress(int32_t Percent);

	// Object: DelegateFunction Hall.HallSettlementDisplayCtrl.OnHallSettlementSeqEnd__DelegateSignature
	// Flags: [MulticastDelegate|Public|Delegate]
	// Offset: 0x101d2e88
	// Params: [ Num(0) Size(0x0) ]
	void OnHallSettlementSeqEnd__DelegateSignature();

	// Object: DelegateFunction Hall.HallSettlementDisplayCtrl.OnHallSettlementResReady__DelegateSignature
	// Flags: [MulticastDelegate|Public|Delegate]
	// Offset: 0x101d2e88
	// Params: [ Num(0) Size(0x0) ]
	void OnHallSettlementResReady__DelegateSignature();

	// Object: Function Hall.HallSettlementDisplayCtrl.DoPreloadSettlement
	// Flags: [Final|Native|Public]
	// Offset: 0x10961040
	// Params: [ Num(1) Size(0x4) ]
	void DoPreloadSettlement(int32_t OnlyFocusOneActor);
};

// Object: Class Hall.HallSettlementSnapshotStudio
// Size: 0x3B0 (Inherited: 0x370)
struct AHallSettlementSnapshotStudio : AActor
{
	DEFINE_UE_CLASS_HELPERS(AHallSettlementSnapshotStudio, "HallSettlementSnapshotStudio")

	struct AHallCharacter* CharacterClass; // 0x370(0x8)
	struct TWeakObjectPtr<struct AActor> CharacterSpawnPoint; // 0x378(0x8)
	struct UMaterialInterface* BackgroundMaterial; // 0x380(0x8)
	int32_t RenderTargetSizeX; // 0x388(0x4)
	int32_t RenderTargetSizeY; // 0x38C(0x4)
	float CaptureFOV; // 0x390(0x4)
	struct FVector CaptureRelativeLocation; // 0x394(0xC)
	struct TArray<struct FHallSettlementSnapshotCandidate> SnapshotCandidates; // 0x3A0(0x10)

	// Object: Function Hall.HallSettlementSnapshotStudio.SpawnCharacter
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x15535900
	// Params: [ Num(1) Size(0x8) ]
	struct AHallCharacter* SpawnCharacter();

	// Object: Function Hall.HallSettlementSnapshotStudio.GetRenderTargetTexture
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x15535854
	// Params: [ Num(2) Size(0x10) ]
	struct UTextureRenderTarget2D* GetRenderTargetTexture(int32_t Index);

	// Object: Function Hall.HallSettlementSnapshotStudio.GetCharacter
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x155357a8
	// Params: [ Num(2) Size(0x10) ]
	struct AHallCharacter* GetCharacter(int32_t Index);

	// Object: Function Hall.HallSettlementSnapshotStudio.GetBackgroundMaterial
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x155356fc
	// Params: [ Num(2) Size(0x10) ]
	struct UMaterialInterface* GetBackgroundMaterial(int32_t Index);

	// Object: Function Hall.HallSettlementSnapshotStudio.Get
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x15535658
	// Params: [ Num(2) Size(0x10) ]
	static struct AHallSettlementSnapshotStudio* Get(struct UObject* WorldContextObject);
};

// Object: Class Hall.HallSurroundingCtrlComponent
// Size: 0x150 (Inherited: 0xF8)
struct UHallSurroundingCtrlComponent : UActorComponent
{
	DEFINE_UE_CLASS_HELPERS(UHallSurroundingCtrlComponent, "HallSurroundingCtrlComponent")

	uint8_t Pad_0xF8[0x8]; // 0xF8(0x8)
	struct TWeakObjectPtr<struct AStaticMeshActor> BgPlate; // 0x100(0x8)
	struct TWeakObjectPtr<struct AStaticMeshActor> FloorPlate; // 0x108(0x8)
	struct TArray<struct UMaterialInterface*> BgPlateMats; // 0x110(0x10)
	struct TWeakObjectPtr<struct AStaticMeshActor> BgFog; // 0x120(0x8)
	struct TArray<struct UMaterialInterface*> BgFogMats; // 0x128(0x10)
	float DistanceFromBgToCamera; // 0x138(0x4)
	uint8_t Pad_0x13C[0x4]; // 0x13C(0x4)
	struct TArray<struct TWeakObjectPtr<struct AActor>> HallFogEffects; // 0x140(0x10)

	// Object: Function Hall.HallSurroundingCtrlComponent.SetBgTexFromImg
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x1553593c
	// Params: [ Num(2) Size(0x10) ]
	void SetBgTexFromImg(struct AStaticMeshActor* BgActor, struct UImage* Image);
};

// Object: Class Hall.HallVehicleDisplayCtrl
// Size: 0x4A0 (Inherited: 0x388)
struct AHallVehicleDisplayCtrl : AHallDisplayCtrlBase
{
	DEFINE_UE_CLASS_HELPERS(AHallVehicleDisplayCtrl, "HallVehicleDisplayCtrl")

	uint8_t Pad_0x388[0x8]; // 0x388(0x8)
	struct UHallCameraCtrlComponentBase* CameraCtrlComponent; // 0x390(0x8)
	struct UHallGeneralLevelSequenceCtrlComponent* GeneralLevelSequenceCtrlComponent; // 0x398(0x8)
	uint8_t bRotateViewCameraActive : 1; // 0x3A0(0x1), Mask(0x1)
	uint8_t BitPad_0x3A0_1 : 7; // 0x3A0(0x1)
	uint8_t Pad_0x3A1[0x7]; // 0x3A1(0x7)
	struct TMap<struct FName, struct FHallDisplayInfoBase> DiplayInfoMap; // 0x3A8(0x50)
	struct UMaterialParameterCollection* ParameterCollection; // 0x3F8(0x8)
	struct AActor* VehicleRoot; // 0x400(0x8)
	struct FName LoadLevelActionName; // 0x408(0x8)
	struct FName UnloadLevelActionName; // 0x410(0x8)
	uint8_t Pad_0x418[0x88]; // 0x418(0x88)

	// Object: Function Hall.HallVehicleDisplayCtrl.UnLoadCurrentLevel
	// Flags: [Final|Native|Public]
	// Offset: 0x15535fdc
	// Params: [ Num(1) Size(0x10) ]
	void UnLoadCurrentLevel(struct FString SceneType);

	// Object: Function Hall.HallVehicleDisplayCtrl.SetVehicleDisplayType
	// Flags: [Final|Native|Public]
	// Offset: 0x15535f00
	// Params: [ Num(2) Size(0x10) ]
	void SetVehicleDisplayType(uint64_t VehicleId, uint64_t CameraTypeIndex);

	// Object: Function Hall.HallVehicleDisplayCtrl.SetVectorParameterValue
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults]
	// Offset: 0x15535e14
	// Params: [ Num(2) Size(0x18) ]
	void SetVectorParameterValue(struct FName InParamName, const struct FLinearColor& Value);

	// Object: Function Hall.HallVehicleDisplayCtrl.SetScalarParameterValue
	// Flags: [Final|Native|Public]
	// Offset: 0x15535d34
	// Params: [ Num(2) Size(0xC) ]
	void SetScalarParameterValue(struct FName InParamName, float Value);

	// Object: Function Hall.HallVehicleDisplayCtrl.SetDisplayType
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x15535c3c
	// Params: [ Num(1) Size(0x10) ]
	void SetDisplayType(struct FString InDisplayType);

	// Object: Function Hall.HallVehicleDisplayCtrl.SequenceGoToEndAndStop
	// Flags: [Final|Native|Public]
	// Offset: 0x15535c28
	// Params: [ Num(0) Size(0x0) ]
	void SequenceGoToEndAndStop();

	// Object: Function Hall.HallVehicleDisplayCtrl.ResetParameterValue
	// Flags: [Final|Native|Public]
	// Offset: 0x15535c14
	// Params: [ Num(0) Size(0x0) ]
	void ResetParameterValue();

	// Object: Function Hall.HallVehicleDisplayCtrl.ResetGeneralLevelSequence
	// Flags: [Final|Native|Public]
	// Offset: 0x15535c00
	// Params: [ Num(0) Size(0x0) ]
	void ResetGeneralLevelSequence();

	// Object: Function Hall.HallVehicleDisplayCtrl.PlaySequence
	// Flags: [Final|Native|Public]
	// Offset: 0x15535b24
	// Params: [ Num(2) Size(0x10) ]
	void PlaySequence(struct FName iSkinID, struct FName iVehicleID);

	// Object: Function Hall.HallVehicleDisplayCtrl.OnUnloadLatentActionCompleted
	// Flags: [Final|Native|Public]
	// Offset: 0x15535b10
	// Params: [ Num(0) Size(0x0) ]
	void OnUnloadLatentActionCompleted();

	// Object: Function Hall.HallVehicleDisplayCtrl.OnLatentActionCompleted
	// Flags: [Final|Native|Public]
	// Offset: 0x15535afc
	// Params: [ Num(0) Size(0x0) ]
	void OnLatentActionCompleted();

	// Object: Function Hall.HallVehicleDisplayCtrl.LoadVehicleLevel
	// Flags: [Final|Native|Public]
	// Offset: 0x15535a20
	// Params: [ Num(2) Size(0x10) ]
	void LoadVehicleLevel(struct FName iSkinID, struct FName iVehicleID);
};

// Object: Class Hall.HallWatchDisplayComponent
// Size: 0x170 (Inherited: 0xF8)
struct UHallWatchDisplayComponent : UActorComponent
{
	DEFINE_UE_CLASS_HELPERS(UHallWatchDisplayComponent, "HallWatchDisplayComponent")

	uint8_t Pad_0xF8[0x8]; // 0xF8(0x8)
	struct FName WatchRootMeshName; // 0x100(0x8)
	int32_t SwitchInterval; // 0x108(0x4)
	uint8_t bCalculateBound : 1; // 0x10C(0x1), Mask(0x1)
	uint8_t BitPad_0x10C_1 : 7; // 0x10C(0x1)
	uint8_t bRotatorFix : 1; // 0x10D(0x1), Mask(0x1)
	uint8_t BitPad_0x10D_1 : 7; // 0x10D(0x1)
	uint8_t bCalculateByZ : 1; // 0x10E(0x1), Mask(0x1)
	uint8_t BitPad_0x10E_1 : 7; // 0x10E(0x1)
	uint8_t Pad_0x10F[0x1]; // 0x10F(0x1)
	float MinBoundZ; // 0x110(0x4)
	float MaxBoundZ; // 0x114(0x4)
	float MinBoundY; // 0x118(0x4)
	float MaxBoundY; // 0x11C(0x4)
	struct TWeakObjectPtr<struct ASkeletalMeshActor> CurWatchMeshActor; // 0x120(0x8)
	uint8_t Pad_0x128[0x48]; // 0x128(0x48)
};

// Object: Class Hall.HallWatchDisplayCtrl
// Size: 0x460 (Inherited: 0x388)
struct AHallWatchDisplayCtrl : AHallDisplayCtrlBase
{
	DEFINE_UE_CLASS_HELPERS(AHallWatchDisplayCtrl, "HallWatchDisplayCtrl")

	struct UHallCameraCtrlComponentBase* CameraCtrlComponent; // 0x388(0x8)
	struct UHallWatchDisplayComponent* WatchDisplayComponent; // 0x390(0x8)
	struct TMap<struct FName, struct FHallDisplayInfoBase> DisplayInfoMap; // 0x398(0x50)
	struct FName LoadLevelActionName; // 0x3E8(0x8)
	struct FName UnloadLevelActionName; // 0x3F0(0x8)
	uint8_t Pad_0x3F8[0x68]; // 0x3F8(0x68)

	// Object: Function Hall.HallWatchDisplayCtrl.SetDisplayWatchItem
	// Flags: [Final|Native|Private]
	// Offset: 0x1553634c
	// Params: [ Num(2) Size(0x11) ]
	void SetDisplayWatchItem(struct FString InItemID, uint8_t checkSubLevel);

	// Object: Function Hall.HallWatchDisplayCtrl.SetDisplayType
	// Flags: [Final|Native|Public]
	// Offset: 0x155362a0
	// Params: [ Num(1) Size(0x10) ]
	void SetDisplayType(struct FString InDisplayType);

	// Object: Function Hall.HallWatchDisplayCtrl.PlayWatchVO
	// Flags: [Final|Native|Private]
	// Offset: 0x155361f4
	// Params: [ Num(1) Size(0x10) ]
	void PlayWatchVO(struct FString InItemID);

	// Object: Function Hall.HallWatchDisplayCtrl.OnThemeLevelUnLoadCompleted
	// Flags: [Final|Native|Public]
	// Offset: 0x155361e0
	// Params: [ Num(0) Size(0x0) ]
	void OnThemeLevelUnLoadCompleted();

	// Object: Function Hall.HallWatchDisplayCtrl.OnThemeLevelLoadCompleted
	// Flags: [Final|Native|Public]
	// Offset: 0x155361cc
	// Params: [ Num(0) Size(0x0) ]
	void OnThemeLevelLoadCompleted();
};

// Object: Class Hall.HallWeaponDisplayComponent
// Size: 0x2A0 (Inherited: 0xF8)
struct UHallWeaponDisplayComponent : UActorComponent
{
	DEFINE_UE_CLASS_HELPERS(UHallWeaponDisplayComponent, "HallWeaponDisplayComponent")

	struct FDelegate OnWeaponLoadedCompletedSignature; // 0xF8(0x10)
	struct AAssembleWeaponActor* WeaponActor; // 0x108(0x8)
	struct AStaticMeshActor* WeaponStaticMeshActor; // 0x110(0x8)
	struct UModularWeaponDesc* WeaponDesc; // 0x118(0x8)
	uint8_t Pad_0x120[0xC0]; // 0x120(0xC0)
	struct TWeakObjectPtr<struct AActor> OriginWeaponLocActor; // 0x1E0(0x8)
	struct UModularApperanceBaseProvider* ModularAppearanceBaseProvider; // 0x1E8(0x8)
	struct TWeakObjectPtr<struct AActor> CurWeaponSpawnPoint; // 0x1F0(0x8)
	uint8_t EnableTrans : 1; // 0x1F8(0x1), Mask(0x1)
	uint8_t BitPad_0x1F8_1 : 7; // 0x1F8(0x1)
	uint8_t Pad_0x1F9[0x3]; // 0x1F9(0x3)
	struct TWeakObjectPtr<struct AActor> WeaponSpawnPoint; // 0x1FC(0x8)
	uint8_t Pad_0x204[0x4]; // 0x204(0x4)
	struct TMap<struct FString, struct TWeakObjectPtr<struct AActor>> DisplayType2SpawnPoint; // 0x208(0x50)
	float CalBoundMaxY; // 0x258(0x4)
	float CalBoundMinY; // 0x25C(0x4)
	float CalBoundMaxZ; // 0x260(0x4)
	float CalBoundMinZ; // 0x264(0x4)
	uint8_t Pad_0x268[0x38]; // 0x268(0x38)

	// Object: Function Hall.HallWeaponDisplayComponent.SetShowWeaponPendant
	// Flags: [Final|Native|Public]
	// Offset: 0x155368b0
	// Params: [ Num(1) Size(0x1) ]
	void SetShowWeaponPendant(uint8_t isShow);

	// Object: Function Hall.HallWeaponDisplayComponent.SetShowBowWeapon
	// Flags: [Final|Native|Public]
	// Offset: 0x15536804
	// Params: [ Num(1) Size(0x1) ]
	void SetShowBowWeapon(uint8_t isShow);

	// Object: Function Hall.HallWeaponDisplayComponent.SetIsAdapter
	// Flags: [Final|Native|Public]
	// Offset: 0x15536758
	// Params: [ Num(1) Size(0x1) ]
	void SetIsAdapter(uint8_t IsAdapter);

	// Object: Function Hall.HallWeaponDisplayComponent.SetCurWeaponDisplayType
	// Flags: [Final|Native|Public]
	// Offset: 0x155366ac
	// Params: [ Num(1) Size(0x10) ]
	void SetCurWeaponDisplayType(struct FString InWeaponDisplayType);

	// Object: Function Hall.HallWeaponDisplayComponent.PostApplyWorldOffset
	// Flags: [Final|Native|Public|HasDefaults]
	// Offset: 0x15536590
	// Params: [ Num(3) Size(0x20) ]
	void PostApplyWorldOffset(struct UWorld* World, struct FIntVector IntVector1, struct FIntVector IntVector2);

	// Object: Function Hall.HallWeaponDisplayComponent.GetSpawnPoint
	// Flags: [Final|Native|Public]
	// Offset: 0x1553655c
	// Params: [ Num(1) Size(0x8) ]
	struct AActor* GetSpawnPoint();

	// Object: Function Hall.HallWeaponDisplayComponent.GetOnWeaponLoadedCompleted
	// Flags: [Final|Native|Public]
	// Offset: 0x1553651c
	// Params: [ Num(1) Size(0x10) ]
	struct FDelegate GetOnWeaponLoadedCompleted();

	// Object: Function Hall.HallWeaponDisplayComponent.GetCurWeaponDisplayType
	// Flags: [Final|Native|Public]
	// Offset: 0x15536484
	// Params: [ Num(1) Size(0x10) ]
	struct FString GetCurWeaponDisplayType();

	// Object: Function Hall.HallWeaponDisplayComponent.GetCurrentSkinId
	// Flags: [Final|Native|Public]
	// Offset: 0x15536450
	// Params: [ Num(1) Size(0x8) ]
	uint64_t GetCurrentSkinId();
};

// Object: Class Hall.HallWeaponDisplayCtrl
// Size: 0x5D0 (Inherited: 0x388)
struct AHallWeaponDisplayCtrl : AHallDisplayCtrlBase
{
	DEFINE_UE_CLASS_HELPERS(AHallWeaponDisplayCtrl, "HallWeaponDisplayCtrl")

	struct FName WeaponAdapterExcel; // 0x384(0x8)
	struct UHallWeaponDisplayComponent* HallWeaponDisplayComponent; // 0x390(0x8)
	struct UHallCameraCtrlComponentBase* CameraCtrlComponent; // 0x398(0x8)
	struct UHallWeaponDisplaySequenceComponent* HallWeaponDisplaySequenceComponent; // 0x3A0(0x8)
	struct UHallGeneralRotateComponent* GeneralRotateComponent; // 0x3A8(0x8)
	struct UHallWatchDisplayComponent* WatchDisplayComponent; // 0x3B0(0x8)
	struct UHallGeneralLevelSequenceCtrlComponent* GeneralLevelSequenceCtrlComponent; // 0x3B8(0x8)
	struct UHallWeaponSkinSceneDisplayComponent* WeaponSkinSceneDisplayComponent; // 0x3C0(0x8)
	struct UHallItemDisplayComponent* ItemDisplayComponent; // 0x3C8(0x8)
	struct UHallLightGroupComponent* HallLightGroupComponent; // 0x3D0(0x8)
	struct FName DefaultLightName; // 0x3D8(0x8)
	struct FName LightSpawnPointName; // 0x3E0(0x8)
	uint8_t Pad_0x3E8[0x28]; // 0x3E8(0x28)
	struct AActor* TouchedActor; // 0x410(0x8)
	struct TArray<struct AActor*> FogActors; // 0x418(0x10)
	uint8_t Pad_0x428[0x90]; // 0x428(0x90)
	struct TArray<struct FSoftObjectPath> BoardBGMatPaths; // 0x4B8(0x10)
	struct TMap<struct FString, struct FHallDisplayInfoBase> DisplayInfoMap; // 0x4C8(0x50)
	uint8_t bCanInteract : 1; // 0x518(0x1), Mask(0x1)
	uint8_t BitPad_0x518_1 : 7; // 0x518(0x1)
	uint8_t Pad_0x519[0x7]; // 0x519(0x7)
	struct FMulticastInlineDelegate OnTouchRepeatSignature; // 0x520(0x10)
	struct FMulticastInlineDelegate OnTouchPressedSignature; // 0x530(0x10)
	uint8_t HasRotated : 1; // 0x540(0x1), Mask(0x1)
	uint8_t BitPad_0x540_1 : 7; // 0x540(0x1)
	uint8_t Pad_0x541[0x3]; // 0x541(0x3)
	float MaxRotateValue; // 0x544(0x4)
	struct FMulticastInlineDelegate OnWeaponDisplayedSignature; // 0x548(0x10)
	struct FName VideoMeshName; // 0x558(0x8)
	uint8_t bReboundEnable : 1; // 0x560(0x1), Mask(0x1)
	uint8_t BitPad_0x560_1 : 7; // 0x560(0x1)
	uint8_t Pad_0x561[0x7]; // 0x561(0x7)
	struct TMap<EWeaponItemType, int32_t> WeaponTypeMaxScaleMap; // 0x568(0x50)
	uint8_t bModifyCameraScaleEnable : 1; // 0x5B8(0x1), Mask(0x1)
	uint8_t BitPad_0x5B8_1 : 7; // 0x5B8(0x1)
	uint8_t Pad_0x5B9[0x3]; // 0x5B9(0x3)
	float ZoomSensitivity; // 0x5BC(0x4)
	EMeshPlaneAxis MeshPlaneNormalAxis; // 0x5C0(0x1)
	uint8_t Pad_0x5C1[0x3]; // 0x5C1(0x3)
	float MarginRatio; // 0x5C4(0x4)
	uint8_t UseNewAdaptate : 1; // 0x5C8(0x1), Mask(0x1)
	uint8_t BitPad_0x5C8_1 : 7; // 0x5C8(0x1)
	uint8_t Pad_0x5C9[0x7]; // 0x5C9(0x7)

	// Object: Function Hall.HallWeaponDisplayCtrl.StopCameraBlendProcess
	// Flags: [Final|Native|Public]
	// Offset: 0x15538694
	// Params: [ Num(0) Size(0x0) ]
	void StopCameraBlendProcess();

	// Object: Function Hall.HallWeaponDisplayCtrl.SkipWeaponCutScene
	// Flags: [Final|Native|Public]
	// Offset: 0x15538680
	// Params: [ Num(0) Size(0x0) ]
	void SkipWeaponCutScene();

	// Object: Function Hall.HallWeaponDisplayCtrl.SetWheelInteract
	// Flags: [Final|Native|Public]
	// Offset: 0x155385d4
	// Params: [ Num(1) Size(0x1) ]
	void SetWheelInteract(uint8_t InCanInteract);

	// Object: Function Hall.HallWeaponDisplayCtrl.SetWeaponPendant
	// Flags: [Final|Native|Public]
	// Offset: 0x15538530
	// Params: [ Num(1) Size(0x8) ]
	void SetWeaponPendant(uint64_t PendantItemId);

	// Object: Function Hall.HallWeaponDisplayCtrl.SetWeaponDisplayType
	// Flags: [Final|Native|Public]
	// Offset: 0x15538484
	// Params: [ Num(1) Size(0x10) ]
	void SetWeaponDisplayType(struct FString InType);

	// Object: Function Hall.HallWeaponDisplayCtrl.SetShowWeaponPendant
	// Flags: [Final|Native|Public]
	// Offset: 0x155383d8
	// Params: [ Num(1) Size(0x1) ]
	void SetShowWeaponPendant(uint8_t isShow);

	// Object: Function Hall.HallWeaponDisplayCtrl.SetScaleMinAndMax
	// Flags: [Final|Native|Public]
	// Offset: 0x155382fc
	// Params: [ Num(2) Size(0x8) ]
	void SetScaleMinAndMax(float Min, float Max);

	// Object: Function Hall.HallWeaponDisplayCtrl.SetReboundActive
	// Flags: [Final|Native|Public]
	// Offset: 0x15538250
	// Params: [ Num(1) Size(0x1) ]
	void SetReboundActive(uint8_t bReboundActive);

	// Object: Function Hall.HallWeaponDisplayCtrl.SetItemCalBoundEnable
	// Flags: [Final|Native|Public]
	// Offset: 0x155381a4
	// Params: [ Num(1) Size(0x1) ]
	void SetItemCalBoundEnable(uint8_t State);

	// Object: Function Hall.HallWeaponDisplayCtrl.SetIsAdapter
	// Flags: [Final|Native|Public]
	// Offset: 0x155380f8
	// Params: [ Num(1) Size(0x1) ]
	void SetIsAdapter(uint8_t IsAdapter);

	// Object: Function Hall.HallWeaponDisplayCtrl.SetEnableTrans
	// Flags: [Final|Native|Public]
	// Offset: 0x1553804c
	// Params: [ Num(1) Size(0x1) ]
	void SetEnableTrans(uint8_t bEnableTrans);

	// Object: Function Hall.HallWeaponDisplayCtrl.SetDisplayWeaponPendant
	// Flags: [Final|Native|Public]
	// Offset: 0x15537fa8
	// Params: [ Num(1) Size(0x8) ]
	void SetDisplayWeaponPendant(struct UModularWeaponDesc* WeaponDesc);

	// Object: Function Hall.HallWeaponDisplayCtrl.SetDisplayWeaponAutoBoundAdapter
	// Flags: [Final|Native|Public]
	// Offset: 0x15537e7c
	// Params: [ Num(3) Size(0xA) ]
	void SetDisplayWeaponAutoBoundAdapter(struct UModularWeaponDesc* WeaponDesc, uint8_t bSwitchCameraEnabled, uint8_t IsMeleeWeapon);

	// Object: Function Hall.HallWeaponDisplayCtrl.SetDisplayWeapon
	// Flags: [Final|Native|Public]
	// Offset: 0x15537cb4
	// Params: [ Num(4) Size(0x1A) ]
	void SetDisplayWeapon(struct UModularWeaponDesc* WeaponDesc, struct FString SkinId, uint8_t IsMeleeWeapon, uint8_t bSwitchCameraEnabled);

	// Object: Function Hall.HallWeaponDisplayCtrl.SetDisplayWatch
	// Flags: [Final|Native|Public]
	// Offset: 0x15537c08
	// Params: [ Num(1) Size(0x10) ]
	void SetDisplayWatch(struct FString InItemID);

	// Object: Function Hall.HallWeaponDisplayCtrl.SetDisplayType
	// Flags: [Final|Native|Public]
	// Offset: 0x15537b10
	// Params: [ Num(1) Size(0x10) ]
	void SetDisplayType(struct FString InDisplayType);

	// Object: Function Hall.HallWeaponDisplayCtrl.SetDisplayPendant
	// Flags: [Final|Native|Public]
	// Offset: 0x1553798c
	// Params: [ Num(3) Size(0x19) ]
	void SetDisplayPendant(struct UModularWeaponDesc* WeaponDesc, struct FString SkinId, uint8_t bSwitchCameraEnabled);

	// Object: Function Hall.HallWeaponDisplayCtrl.SetDisplayItem
	// Flags: [Final|Native|Public]
	// Offset: 0x155378e0
	// Params: [ Num(1) Size(0x10) ]
	void SetDisplayItem(struct FString ItemID);

	// Object: Function Hall.HallWeaponDisplayCtrl.SetDisplayHeroWeapon
	// Flags: [Final|Native|Public]
	// Offset: 0x155377bc
	// Params: [ Num(3) Size(0x18) ]
	void SetDisplayHeroWeapon(struct UModularWeaponDesc* WeaponDesc, uint8_t IsMeleeWeapon, int64_t ItemID);

	// Object: Function Hall.HallWeaponDisplayCtrl.SetCanInteractState
	// Flags: [Final|Native|Public]
	// Offset: 0x15537710
	// Params: [ Num(1) Size(0x1) ]
	void SetCanInteractState(uint8_t InCanInteract);

	// Object: Function Hall.HallWeaponDisplayCtrl.ResetWeaponCutScene
	// Flags: [Final|Native|Public]
	// Offset: 0x155376fc
	// Params: [ Num(0) Size(0x0) ]
	void ResetWeaponCutScene();

	// Object: Function Hall.HallWeaponDisplayCtrl.ResetWeapon
	// Flags: [Final|Native|Public]
	// Offset: 0x155376e8
	// Params: [ Num(0) Size(0x0) ]
	void ResetWeapon();

	// Object: Function Hall.HallWeaponDisplayCtrl.ResetToDefaultLight
	// Flags: [Final|Native|Public]
	// Offset: 0x155376d4
	// Params: [ Num(0) Size(0x0) ]
	void ResetToDefaultLight();

	// Object: Function Hall.HallWeaponDisplayCtrl.ResetGeneralLevelSequence
	// Flags: [Final|Native|Public]
	// Offset: 0x155376c0
	// Params: [ Num(0) Size(0x0) ]
	void ResetGeneralLevelSequence();

	// Object: Function Hall.HallWeaponDisplayCtrl.ResetDisplayItem
	// Flags: [Final|Native|Public]
	// Offset: 0x155376ac
	// Params: [ Num(0) Size(0x0) ]
	void ResetDisplayItem();

	// Object: Function Hall.HallWeaponDisplayCtrl.PlayWeaponCutSceneByIndex
	// Flags: [Final|Native|Public]
	// Offset: 0x1553758c
	// Params: [ Num(3) Size(0xD) ]
	void PlayWeaponCutSceneByIndex(struct UModularWeaponDesc* InWeaponDesc, int32_t SequenceIndex, uint8_t bIsApplyOffset);

	// Object: Function Hall.HallWeaponDisplayCtrl.PlayWeaponCutScene
	// Flags: [Final|Native|Public]
	// Offset: 0x155374a4
	// Params: [ Num(2) Size(0x9) ]
	void PlayWeaponCutScene(struct UModularWeaponDesc* InWeaponDesc, uint8_t isMelee);

	// Object: Function Hall.HallWeaponDisplayCtrl.PlaySequenceByRowName
	// Flags: [Final|Native|Public]
	// Offset: 0x15537400
	// Params: [ Num(1) Size(0x8) ]
	void PlaySequenceByRowName(struct FName InRowName);

	// Object: Function Hall.HallWeaponDisplayCtrl.OnDisplayWeaponSet
	// Flags: [Final|Native|Public]
	// Offset: 0x15537354
	// Params: [ Num(1) Size(0x1) ]
	void OnDisplayWeaponSet(uint8_t bIsMelee);

	// Object: Function Hall.HallWeaponDisplayCtrl.GetWeaponDisplayType
	// Flags: [Final|Native|Public]
	// Offset: 0x155372bc
	// Params: [ Num(1) Size(0x10) ]
	struct FString GetWeaponDisplayType();

	// Object: Function Hall.HallWeaponDisplayCtrl.GetWeaponActor
	// Flags: [Final|Native|Public]
	// Offset: 0x15537288
	// Params: [ Num(1) Size(0x8) ]
	struct AActor* GetWeaponActor();

	// Object: Function Hall.HallWeaponDisplayCtrl.GetSceneSkinExtraData
	// Flags: [Final|Native|Public|HasOutParms]
	// Offset: 0x155370e4
	// Params: [ Num(3) Size(0x61) ]
	uint8_t GetSceneSkinExtraData(struct FCollectionWeaponData& InCollectionWeaponData, struct UModularWeaponDesc* WeaponDesc);

	// Object: Function Hall.HallWeaponDisplayCtrl.GetPendantExtraData
	// Flags: [Final|Native|Public|HasOutParms]
	// Offset: 0x15536eac
	// Params: [ Num(4) Size(0x71) ]
	uint8_t GetPendantExtraData(struct FCollectionWeaponData& InCollectionWeaponData, struct UModularWeaponDesc* WeaponDesc, struct FString ID);

	// Object: Function Hall.HallWeaponDisplayCtrl.GetOnTouchPressed
	// Flags: [Final|Native|Public]
	// Offset: 0x15536e28
	// Params: [ Num(1) Size(0x10) ]
	struct FMulticastInlineDelegate GetOnTouchPressed();

	// Object: Function Hall.HallWeaponDisplayCtrl.GetDisplayTargetActor
	// Flags: [Final|Native|Public]
	// Offset: 0x15536df4
	// Params: [ Num(1) Size(0x8) ]
	struct AActor* GetDisplayTargetActor();

	// Object: Function Hall.HallWeaponDisplayCtrl.FocusWeaponNameArea
	// Flags: [Final|Native|Public]
	// Offset: 0x15536cfc
	// Params: [ Num(1) Size(0x10) ]
	void FocusWeaponNameArea(struct FString SkinId);

	// Object: Function Hall.HallWeaponDisplayCtrl.FitMeshToCamera
	// Flags: [Final|Native|Public]
	// Offset: 0x15536ce8
	// Params: [ Num(0) Size(0x0) ]
	void FitMeshToCamera();

	// Object: Function Hall.HallWeaponDisplayCtrl.DisplayWeaponSkinScene
	// Flags: [Final|Native|Public|HasOutParms|Const]
	// Offset: 0x15536c2c
	// Params: [ Num(1) Size(0x10) ]
	void DisplayWeaponSkinScene(struct FString& InDisplayWeaponSkinId);

	// Object: Function Hall.HallWeaponDisplayCtrl.DestroyWatch
	// Flags: [Final|Native|Public]
	// Offset: 0x15536c18
	// Params: [ Num(0) Size(0x0) ]
	void DestroyWatch();

	// Object: Function Hall.HallWeaponDisplayCtrl.ChangeWeaponName
	// Flags: [Final|Native|Public]
	// Offset: 0x15536b6c
	// Params: [ Num(1) Size(0x10) ]
	void ChangeWeaponName(struct FString InNewName);

	// Object: Function Hall.HallWeaponDisplayCtrl.ActivateWeaponLightGroup
	// Flags: [Final|Native|Public]
	// Offset: 0x15536ac8
	// Params: [ Num(1) Size(0x8) ]
	void ActivateWeaponLightGroup(uint64_t WeaponSkinId);
};

// Object: Class Hall.HallWeaponDisplaySequenceComponent
// Size: 0x138 (Inherited: 0xF8)
struct UHallWeaponDisplaySequenceComponent : UActorComponent
{
	DEFINE_UE_CLASS_HELPERS(UHallWeaponDisplaySequenceComponent, "HallWeaponDisplaySequenceComponent")

	struct TArray<struct FSoftObjectPath> WeaponLevelSequences; // 0xF8(0x10)
	struct ALevelSequenceActor* CurSequenceActor; // 0x108(0x8)
	struct TWeakObjectPtr<struct AAssembleWeaponActor> CurWeaponActor; // 0x110(0x8)
	struct TWeakObjectPtr<struct AActor> PivotActor; // 0x118(0x8)
	struct FMulticastInlineDelegate OnSeqFinished; // 0x120(0x10)
	uint8_t Pad_0x130[0x8]; // 0x130(0x8)

	// Object: Function Hall.HallWeaponDisplaySequenceComponent.UsePivotOffset
	// Flags: [Final|Native|Public]
	// Offset: 0x15539b4c
	// Params: [ Num(1) Size(0x8) ]
	void UsePivotOffset(struct UModularWeaponDesc* InWeaponDesc);

	// Object: Function Hall.HallWeaponDisplaySequenceComponent.ResetPivot
	// Flags: [Final|Native|Public]
	// Offset: 0x15539b38
	// Params: [ Num(0) Size(0x0) ]
	void ResetPivot();

	// Object: Function Hall.HallWeaponDisplaySequenceComponent.PostApplyWorldOffset
	// Flags: [Final|Native|Private|HasDefaults]
	// Offset: 0x15539a1c
	// Params: [ Num(3) Size(0x20) ]
	void PostApplyWorldOffset(struct UWorld* World, struct FIntVector IntVector1, struct FIntVector IntVector2);

	// Object: Function Hall.HallWeaponDisplaySequenceComponent.OnSequenceFinished
	// Flags: [Final|Native|Private]
	// Offset: 0x15539a08
	// Params: [ Num(0) Size(0x0) ]
	void OnSequenceFinished();

	// Object: Function Hall.HallWeaponDisplaySequenceComponent.OnLoadWeaponCompleted
	// Flags: [Final|Native|Private]
	// Offset: 0x15539920
	// Params: [ Num(2) Size(0x8) ]
	void OnLoadWeaponCompleted(uint8_t bResult, int32_t SequenceIndex);
};

// Object: Class Hall.HallWeaponShowPreviewer
// Size: 0x3C8 (Inherited: 0x370)
struct AHallWeaponShowPreviewer : AActor
{
	DEFINE_UE_CLASS_HELPERS(AHallWeaponShowPreviewer, "HallWeaponShowPreviewer")

	struct UHallLightGroupComponent* HallLightGroupComponent; // 0x370(0x8)
	struct FName WeaponSpawnPointName; // 0x378(0x8)
	uint8_t Pad_0x380[0x8]; // 0x380(0x8)
	struct FName LightSpawnPointName; // 0x388(0x8)
	struct FName DefaultLightGroupName; // 0x390(0x8)
	uint64_t WeaponSkinId; // 0x398(0x8)
	uint64_t PreviewWeaponID; // 0x3A0(0x8)
	uint64_t PreviewSkinID; // 0x3A8(0x8)
	uint8_t bOpenWeaponAdapter : 1; // 0x3B0(0x1), Mask(0x1)
	uint8_t BitPad_0x3B0_1 : 7; // 0x3B0(0x1)
	uint8_t Pad_0x3B1[0x3]; // 0x3B1(0x3)
	float MaxBound; // 0x3B4(0x4)
	float MinBound; // 0x3B8(0x4)
	struct TWeakObjectPtr<struct AAssembleWeaponActor> PreviewWeaponActor; // 0x3BC(0x8)
	uint8_t Pad_0x3C4[0x4]; // 0x3C4(0x4)
};

// Object: Class Hall.HallWeaponSkinSceneDisplayComponent
// Size: 0x150 (Inherited: 0xF8)
struct UHallWeaponSkinSceneDisplayComponent : UActorComponent
{
	DEFINE_UE_CLASS_HELPERS(UHallWeaponSkinSceneDisplayComponent, "HallWeaponSkinSceneDisplayComponent")

	uint8_t Pad_0xF8[0x28]; // 0xF8(0x28)
	struct FName LoadLevelActionName; // 0x120(0x8)
	struct FName UnloadLevelActionName; // 0x128(0x8)
	struct FMulticastInlineDelegate OnLoadSublevelGroupDone; // 0x130(0x10)
	struct FMulticastInlineDelegate OnUnLoadSublevelGroupDone; // 0x140(0x10)

	// Object: Function Hall.HallWeaponSkinSceneDisplayComponent.OnUnloadLatentActionCompleted
	// Flags: [Final|Native|Protected]
	// Offset: 0x15539cc0
	// Params: [ Num(1) Size(0x4) ]
	void OnUnloadLatentActionCompleted(int32_t LinkID);

	// Object: Function Hall.HallWeaponSkinSceneDisplayComponent.OnLoadLatentActionCompleted
	// Flags: [Final|Native|Protected]
	// Offset: 0x15539c1c
	// Params: [ Num(1) Size(0x4) ]
	void OnLoadLatentActionCompleted(int32_t LinkID);
};

// Object: Class Hall.HeroItemAnimInstance
// Size: 0x270 (Inherited: 0x270)
struct UHeroItemAnimInstance : UAnimInstance
{
	DEFINE_UE_CLASS_HELPERS(UHeroItemAnimInstance, "HeroItemAnimInstance")

	uint8_t TurnON : 1; // 0x269(0x1), Mask(0x1)

	// Object: Function Hall.HeroItemAnimInstance.SwitchTurnOnState
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x15539d88
	// Params: [ Num(1) Size(0x1) ]
	void SwitchTurnOnState(uint8_t bTurnOn);

	// Object: Function Hall.HeroItemAnimInstance.GetIsTurnedOn
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x15539d6c
	// Params: [ Num(1) Size(0x1) ]
	uint8_t GetIsTurnedOn();
};

// Object: Class Hall.LuaLevelUtil
// Size: 0x28 (Inherited: 0x28)
struct ULuaLevelUtil : UObject
{
	DEFINE_UE_CLASS_HELPERS(ULuaLevelUtil, "LuaLevelUtil")

	// Object: Function Hall.LuaLevelUtil.UnloadSettlement
	// Flags: [Final|Native|Private]
	// Offset: 0x1553a088
	// Params: [ Num(1) Size(0x8) ]
	void UnloadSettlement(struct UWorld* World);

	// Object: Function Hall.LuaLevelUtil.TestLuaCallPrint
	// Flags: [Final|Native|Private]
	// Offset: 0x1553a074
	// Params: [ Num(0) Size(0x0) ]
	void TestLuaCallPrint();

	// Object: Function Hall.LuaLevelUtil.ShowLogoActor
	// Flags: [Final|Native|Private]
	// Offset: 0x15539fd0
	// Params: [ Num(1) Size(0x8) ]
	void ShowLogoActor(struct UWorld* World);

	// Object: Function Hall.LuaLevelUtil.OnOpenSettlementSuccess
	// Flags: [Final|Native|Private]
	// Offset: 0x15539fbc
	// Params: [ Num(0) Size(0x0) ]
	void OnOpenSettlementSuccess();

	// Object: Function Hall.LuaLevelUtil.OnCloseSettlementSuccess
	// Flags: [Final|Native|Private]
	// Offset: 0x15539fa8
	// Params: [ Num(0) Size(0x0) ]
	void OnCloseSettlementSuccess();

	// Object: Function Hall.LuaLevelUtil.LoadSettlement
	// Flags: [Final|Native|Private]
	// Offset: 0x15539f04
	// Params: [ Num(1) Size(0x8) ]
	void LoadSettlement(struct UWorld* World);

	// Object: Function Hall.LuaLevelUtil.HideLogoActor
	// Flags: [Final|Native|Private]
	// Offset: 0x15539e60
	// Params: [ Num(1) Size(0x8) ]
	void HideLogoActor(struct UWorld* World);
};

// Object: Class Hall.RoleInfoLogoActor
// Size: 0x370 (Inherited: 0x370)
struct ARoleInfoLogoActor : AActor
{
	DEFINE_UE_CLASS_HELPERS(ARoleInfoLogoActor, "RoleInfoLogoActor")
};

// Object: Class Hall.SandBoxMap
// Size: 0x1FB0 (Inherited: 0x370)
struct ASandBoxMap : AActor
{
	DEFINE_UE_CLASS_HELPERS(ASandBoxMap, "SandBoxMap")

	struct AStaticMeshActor* MapActor; // 0x370(0x8)
	struct ACameraActor* MainCamera; // 0x378(0x8)
	struct TArray<struct FSandBoxMapCamConfig> TargetInfos; // 0x380(0x10)
	struct ACameraActor* StartCamPos; // 0x390(0x8)
	struct ACameraActor* EndCamPos; // 0x398(0x8)
	float MiddlePosPercentage; // 0x3A0(0x4)
	float ShowNamePosPercentage; // 0x3A4(0x4)
	float InitPosPercentage; // 0x3A8(0x4)
	float AdvanceSpreadTime; // 0x3AC(0x4)
	float MoveScale; // 0x3B0(0x4)
	float ScrollScale; // 0x3B4(0x4)
	float HeightToTarget; // 0x3B8(0x4)
	uint8_t Pad_0x3BC[0x4]; // 0x3BC(0x4)
	struct FRuntimeFloatCurve CameraTransitionCurve; // 0x3C0(0xA0)
	struct FRuntimeFloatCurve CharacterRotationCurve; // 0x460(0xA0)
	uint8_t bUseCameraCurve : 1; // 0x500(0x1), Mask(0x1)
	uint8_t BitPad_0x500_1 : 7; // 0x500(0x1)
	uint8_t bUseCameraSequence : 1; // 0x501(0x1), Mask(0x1)
	uint8_t BitPad_0x501_1 : 7; // 0x501(0x1)
	uint8_t bUseCameraDOFCurve : 1; // 0x502(0x1), Mask(0x1)
	uint8_t BitPad_0x502_1 : 7; // 0x502(0x1)
	uint8_t Pad_0x503[0x1]; // 0x503(0x1)
	float CameraTransitionDuration; // 0x504(0x4)
	struct FRuntimeFloatCurve CameraLocationCurve; // 0x508(0xA0)
	struct FRuntimeFloatCurve CameraRotationForwardCurve; // 0x5A8(0xA0)
	struct FRuntimeFloatCurve CameraRotationReverseCurve; // 0x648(0xA0)
	struct FRuntimeFloatCurve CameraPOIToPOICurve; // 0x6E8(0xA0)
	struct FRuntimeFloatCurve CameraRailForwardCurve; // 0x788(0xA0)
	struct FRuntimeFloatCurve CameraRailReverseCurve; // 0x828(0xA0)
	struct UTexture* DefaultUnlockTex; // 0x8C8(0x8)
	struct FVector PCLocation; // 0x8D0(0xC)
	struct FRotator PCRotator; // 0x8DC(0xC)
	struct FVector HitLocation; // 0x8E8(0xC)
	uint8_t Pad_0x8F4[0x4]; // 0x8F4(0x4)
	struct FMulticastInlineDelegate OnHeightPercentageChange; // 0x8F8(0x10)
	struct UMaterialInstanceDynamic* MapMID1; // 0x908(0x8)
	struct UMaterialInstanceDynamic* MapMID2; // 0x910(0x8)
	uint8_t Pad_0x918[0x58]; // 0x918(0x58)
	struct ACameraActor* TargetCamera; // 0x970(0x8)
	uint8_t Pad_0x978[0x18]; // 0x978(0x18)
	struct TArray<struct UMaterialInstanceDynamic*> MapMIDList; // 0x990(0x10)
	uint8_t Pad_0x9A0[0x8]; // 0x9A0(0x8)
	struct UMaterialParameterCollectionInstance* MatParamCollectionIns; // 0x9A8(0x8)
	struct TMap<struct FName, struct FLinearColor> TargetColorParameterMap; // 0x9B0(0x50)
	struct TMap<struct FName, float> TargetScalarParameterMap; // 0xA00(0x50)
	uint8_t Pad_0xA50[0xA0]; // 0xA50(0xA0)
	struct TMap<int32_t, struct FVector> UIActorScaleMap; // 0xAF0(0x50)
	uint8_t Pad_0xB40[0x10]; // 0xB40(0x10)
	struct TMap<int32_t, ESandBoxMapState> OriginTargetStateMap; // 0xB50(0x50)
	struct TMap<int32_t, ESandBoxMapState> PrevTargetStateMap; // 0xBA0(0x50)
	struct TMap<int32_t, ESandBoxMapState> CurTargetStateMap; // 0xBF0(0x50)
	struct TArray<struct AActor*> FogActors; // 0xC40(0x10)
	uint8_t Pad_0xC50[0x12B0]; // 0xC50(0x12B0)
	struct UCameraComponent* MainCameraComponent; // 0x1F00(0x8)
	uint8_t Pad_0x1F08[0x10]; // 0x1F08(0x10)
	struct ALevelSequenceActor* CameraMapInSeqActor; // 0x1F18(0x8)
	struct ALevelSequenceActor* CameraTopToPOISeqActor; // 0x1F20(0x8)
	struct ALevelSequenceActor* CameraPOIToDetailActor; // 0x1F28(0x8)
	struct ALevelSequenceActor* UnlockSeqActor; // 0x1F30(0x8)
	struct TArray<struct ALevelSequenceActor*> UnlockLevelSeqActor; // 0x1F38(0x10)
	struct ULevelSequence* MapInSeq; // 0x1F48(0x8)
	struct ULevelSequence* TopToPOISeq; // 0x1F50(0x8)
	struct ULevelSequence* POIToTopSeq; // 0x1F58(0x8)
	struct ULevelSequence* POIToPOISeq; // 0x1F60(0x8)
	struct ULevelSequence* CurToLockSeq; // 0x1F68(0x8)
	struct ULevelSequence* UnlockSeq; // 0x1F70(0x8)
	struct ULevelSequence* UnlockLevelSeq; // 0x1F78(0x8)
	struct AActor* EmptyActor; // 0x1F80(0x8)
	struct AActor* RootActor; // 0x1F88(0x8)
	struct UMaterialParameterCollection* MatParamCollection; // 0x1F90(0x8)
	struct TArray<struct ACameraRig_Rail*> CameraRigRails; // 0x1F98(0x10)
	uint8_t Pad_0x1FA8[0x8]; // 0x1FA8(0x8)

	// Object: Function Hall.SandBoxMap.UnRegisterUIActor
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x1553bb1c
	// Params: [ Num(2) Size(0x10) ]
	void UnRegisterUIActor(int32_t Group, struct ASandBoxMapActor* Target);

	// Object: Function Hall.SandBoxMap.UnregisterActor
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x1553ba3c
	// Params: [ Num(2) Size(0x10) ]
	void UnregisterActor(int32_t Group, struct ASandBoxMapActor* Target);

	// Object: Function Hall.SandBoxMap.SwitchToIndex
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x1553b904
	// Params: [ Num(2) Size(0x18) ]
	void SwitchToIndex(int32_t TargetIndex, struct FString Type);

	// Object: Function Hall.SandBoxMap.StopGuideAnim
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x1553b860
	// Params: [ Num(1) Size(0x4) ]
	void StopGuideAnim(int32_t Group);

	// Object: Function Hall.SandBoxMap.StopAnimByStartGame
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x1553b7bc
	// Params: [ Num(1) Size(0x4) ]
	void StopAnimByStartGame(int32_t Group);

	// Object: Function Hall.SandBoxMap.StopAllSeq
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x1553b7a8
	// Params: [ Num(0) Size(0x0) ]
	void StopAllSeq();

	// Object: Function Hall.SandBoxMap.SetTargetState
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x1553b68c
	// Params: [ Num(3) Size(0x6) ]
	void SetTargetState(int32_t Index, ESandBoxMapState PrevState, ESandBoxMapState CurState);

	// Object: Function Hall.SandBoxMap.SetMapLockStateInternal
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x1553b5a8
	// Params: [ Num(2) Size(0x5) ]
	void SetMapLockStateInternal(int32_t maskId, uint8_t bIsLock);

	// Object: Function Hall.SandBoxMap.SetMapLockState
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x1553b4c4
	// Params: [ Num(2) Size(0x5) ]
	void SetMapLockState(int32_t maskId, uint8_t bIsLock);

	// Object: Function Hall.SandBoxMap.SetHide
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x1553b3e0
	// Params: [ Num(2) Size(0x5) ]
	void SetHide(int32_t Group, uint8_t bHide);

	// Object: Function Hall.SandBoxMap.SetCameraPostionByPercent
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x1553b33c
	// Params: [ Num(1) Size(0x4) ]
	void SetCameraPostionByPercent(float Value);

	// Object: Function Hall.SandBoxMap.SetCameraParent
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x1553b298
	// Params: [ Num(1) Size(0x4) ]
	void SetCameraParent(int32_t Index);

	// Object: Function Hall.SandBoxMap.SetActorState
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x1553b17c
	// Params: [ Num(3) Size(0x6) ]
	void SetActorState(int32_t Group, ESandBoxMapState State, ESandBoxMapModeType ModeType);

	// Object: Function Hall.SandBoxMap.SelectTargetMode
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x1553b058
	// Params: [ Num(3) Size(0x6) ]
	void SelectTargetMode(int32_t Group, ESandBoxMapModeType ModeType, uint8_t bLocked);

	// Object: Function Hall.SandBoxMap.ScaleWidget
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x1553af78
	// Params: [ Num(2) Size(0x8) ]
	void ScaleWidget(int32_t Index, float Scale);

	// Object: Function Hall.SandBoxMap.ResetCameraPosition
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x1553aed4
	// Params: [ Num(1) Size(0x4) ]
	void ResetCameraPosition(int32_t Index);

	// Object: Function Hall.SandBoxMap.RemoveUIFollow
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x1553ae24
	// Params: [ Num(2) Size(0x9) ]
	uint8_t RemoveUIFollow(struct UUserWidget* UI);

	// Object: Function Hall.SandBoxMap.RegisterUIActor
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x1553ad44
	// Params: [ Num(2) Size(0x10) ]
	void RegisterUIActor(int32_t Group, struct ASandBoxMapActor* Target);

	// Object: Function Hall.SandBoxMap.RegisterActor
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x1553ac64
	// Params: [ Num(2) Size(0x10) ]
	void RegisterActor(int32_t Group, struct ASandBoxMapActor* Target);

	// Object: Function Hall.SandBoxMap.RebindMaterialParametersAndPlay
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x1553ab84
	// Params: [ Num(2) Size(0xC) ]
	void RebindMaterialParametersAndPlay(struct ULevelSequence* Seq, int32_t maskId);

	// Object: Function Hall.SandBoxMap.PlayUnlockSeq
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x1553aae0
	// Params: [ Num(1) Size(0x4) ]
	void PlayUnlockSeq(int32_t maskId);

	// Object: Function Hall.SandBoxMap.PlayTargetUnlock
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x1553aa3c
	// Params: [ Num(1) Size(0x4) ]
	void PlayTargetUnlock(int32_t Index);

	// Object: Function Hall.SandBoxMap.PlayPOIToPOISeq
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x1553a920
	// Params: [ Num(3) Size(0x1C) ]
	void PlayPOIToPOISeq(struct FVector StopPos, struct FRotator StopRot, int32_t Index);

	// Object: Function Hall.SandBoxMap.PlayPOIToDetailSeq
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x1553a87c
	// Params: [ Num(1) Size(0x4) ]
	void PlayPOIToDetailSeq(int32_t Index);

	// Object: Function Hall.SandBoxMap.PlayMapInSeq
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x1553a868
	// Params: [ Num(0) Size(0x0) ]
	void PlayMapInSeq();

	// Object: Function Hall.SandBoxMap.PlayGuideAnim
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x1553a7c4
	// Params: [ Num(1) Size(0x4) ]
	void PlayGuideAnim(int32_t Group);

	// Object: Function Hall.SandBoxMap.PlayDetailToPOISeq
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x1553a720
	// Params: [ Num(1) Size(0x4) ]
	void PlayDetailToPOISeq(int32_t Index);

	// Object: Function Hall.SandBoxMap.OnUnlockSeqFinish
	// Flags: [Final|Native|Public]
	// Offset: 0x1553a70c
	// Params: [ Num(0) Size(0x0) ]
	void OnUnlockSeqFinish();

	// Object: Function Hall.SandBoxMap.OnTargetChanged
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x1553a6f8
	// Params: [ Num(0) Size(0x0) ]
	void OnTargetChanged();

	// Object: Function Hall.SandBoxMap.LeaveSandBox
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x1553a6e4
	// Params: [ Num(0) Size(0x0) ]
	void LeaveSandBox();

	// Object: Function Hall.SandBoxMap.IsPlayingSeq
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x1553a6ac
	// Params: [ Num(1) Size(0x1) ]
	uint8_t IsPlayingSeq();

	// Object: Function Hall.SandBoxMap.IsCameraMoving
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x1553a674
	// Params: [ Num(1) Size(0x1) ]
	uint8_t IsCameraMoving();

	// Object: Function Hall.SandBoxMap.InitTargetState
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x1553a660
	// Params: [ Num(0) Size(0x0) ]
	void InitTargetState();

	// Object: Function Hall.SandBoxMap.InitSequenceParameterData
	// Flags: [Final|Native|Public]
	// Offset: 0x1553a64c
	// Params: [ Num(0) Size(0x0) ]
	void InitSequenceParameterData();

	// Object: Function Hall.SandBoxMap.GetUIWidget
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x1553a5a0
	// Params: [ Num(2) Size(0x10) ]
	struct UUserWidget* GetUIWidget(int32_t Group);

	// Object: Function Hall.SandBoxMap.Get
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x1553a4fc
	// Params: [ Num(2) Size(0x10) ]
	static struct ASandBoxMap* Get(struct UObject* WorldContextObject);

	// Object: Function Hall.SandBoxMap.EnterSandBox
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x1553a4e8
	// Params: [ Num(0) Size(0x0) ]
	void EnterSandBox();

	// Object: Function Hall.SandBoxMap.CheckIsClickUI
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable]
	// Offset: 0x1553a42c
	// Params: [ Num(2) Size(0x9) ]
	uint8_t CheckIsClickUI(const struct FVector2D& ScreenPos);

	// Object: Function Hall.SandBoxMap.AddUIFollowSubLevel
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x1553a308
	// Params: [ Num(4) Size(0x11) ]
	uint8_t AddUIFollowSubLevel(struct UUserWidget* UI, int32_t TargetIndex, int32_t subLevelIndex);

	// Object: Function Hall.SandBoxMap.AddUIFollowMainTarget
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x1553a21c
	// Params: [ Num(3) Size(0xD) ]
	uint8_t AddUIFollowMainTarget(struct UUserWidget* UI, int32_t TargetIndex);

	// Object: Function Hall.SandBoxMap.AddUIFollow
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x1553a140
	// Params: [ Num(2) Size(0x10) ]
	void AddUIFollow(struct UUserWidget* UI, struct AActor* Target);
};

// Object: Class Hall.SandBoxMapActor
// Size: 0x378 (Inherited: 0x370)
struct ASandBoxMapActor : AActor
{
	DEFINE_UE_CLASS_HELPERS(ASandBoxMapActor, "SandBoxMapActor")

	int32_t Group; // 0x370(0x4)
	uint8_t bIsUI : 1; // 0x374(0x1), Mask(0x1)
	uint8_t BitPad_0x374_1 : 7; // 0x374(0x1)
	uint8_t bIsRegisterToGroup : 1; // 0x375(0x1), Mask(0x1)
	uint8_t BitPad_0x375_1 : 7; // 0x375(0x1)
	uint8_t bIsHide : 1; // 0x376(0x1), Mask(0x1)
	uint8_t BitPad_0x376_1 : 7; // 0x376(0x1)
	uint8_t Pad_0x377[0x1]; // 0x377(0x1)

	// Object: Function Hall.SandBoxMapActor.SwitchActorState
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(1) Size(0x1) ]
	void SwitchActorState(ESandBoxMapState SwitchState);

	// Object: Function Hall.SandBoxMapActor.StopGuideAnim
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(0) Size(0x0) ]
	void StopGuideAnim();

	// Object: Function Hall.SandBoxMapActor.StopAnimByStartGame
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(0) Size(0x0) ]
	void StopAnimByStartGame();

	// Object: Function Hall.SandBoxMapActor.SetOpacity
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(1) Size(0x1) ]
	void SetOpacity(uint8_t bOpacity);

	// Object: Function Hall.SandBoxMapActor.SetHide
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x1553bfc8
	// Params: [ Num(1) Size(0x1) ]
	void SetHide(uint8_t bHide);

	// Object: Function Hall.SandBoxMapActor.SetActorState
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(2) Size(0x2) ]
	void SetActorState(ESandBoxMapState State, ESandBoxMapModeType ModeType);

	// Object: Function Hall.SandBoxMapActor.PlayGuideAnim
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(0) Size(0x0) ]
	void PlayGuideAnim();

	// Object: Function Hall.SandBoxMapActor.PlayActorUnlockAnim
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(0) Size(0x0) ]
	void PlayActorUnlockAnim();

	// Object: Function Hall.SandBoxMapActor.LeaveSandBoxMap
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(0) Size(0x0) ]
	void LeaveSandBoxMap();

	// Object: Function Hall.SandBoxMapActor.GetIsHide
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x1553bf90
	// Params: [ Num(1) Size(0x1) ]
	uint8_t GetIsHide();

	// Object: Function Hall.SandBoxMapActor.EnterSandBoxMap
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(0) Size(0x0) ]
	void EnterSandBoxMap();

	// Object: Function Hall.SandBoxMapActor.ChangeActorState
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(4) Size(0xA) ]
	void ChangeActorState(int32_t PrevIndex, int32_t CurIndex, ESandBoxMapState PrevState, ESandBoxMapState CurState);
};

// Object: Class Hall.SyncMap
// Size: 0x448 (Inherited: 0x370)
struct ASyncMap : AActor
{
	DEFINE_UE_CLASS_HELPERS(ASyncMap, "SyncMap")

	struct USceneCaptureComponent2D* SceneCapture; // 0x370(0x8)
	uint8_t Pad_0x378[0x8]; // 0x378(0x8)
	struct AActor* MainCamera; // 0x380(0x8)
	struct AActor* SyncMapActor; // 0x388(0x8)
	int32_t RotateDir; // 0x390(0x4)
	float RotateChangeDuration; // 0x394(0x4)
	struct FRuntimeFloatCurve RotateChangeCurve; // 0x398(0xA0)
	struct FRotator RotateSpeed; // 0x438(0xC)
	uint8_t Pad_0x444[0x4]; // 0x444(0x4)

	// Object: Function Hall.SyncMap.StopTick
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x1553d294
	// Params: [ Num(0) Size(0x0) ]
	void StopTick();

	// Object: Function Hall.SyncMap.StartTick
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x1553d280
	// Params: [ Num(0) Size(0x0) ]
	void StartTick();

	// Object: Function Hall.SyncMap.Get
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x1553d1dc
	// Params: [ Num(2) Size(0x10) ]
	static struct ASyncMap* Get(struct UObject* WorldContextObject);
};

} // namespace SDK
