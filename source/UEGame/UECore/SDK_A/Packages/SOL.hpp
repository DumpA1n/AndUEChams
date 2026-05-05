#pragma once

#include "../CoreUObject_classes.hpp"
#include "AIModule.hpp"
#include "AvatarSystem.hpp"
#include "DFMGameplay.hpp"
#include "DFMVehicle.hpp"
#include "Engine.hpp"
#include "GPGameHud.hpp"
#include "GPGameplay.hpp"
#include "GameCore.hpp"
#include "GameplayTags.hpp"
#include "UMG.hpp"

namespace SDK
{

// Package: SOL
// Enums: 9
// Structs: 35
// Classes: 82

struct AActor;
struct ACHARACTER;
struct AController;
struct ADFMAICharacter;
struct ADFMCharacter;
struct ADFMPlayerState;
struct AFXProxyActor;
struct AGPCharacter;
struct AGPCharacterBase;
struct AGPSequenceActor;
struct AInteractAcquireItemBase;
struct AInteractorBase;
struct AInteractorBaseProxy;
struct AInteractor_CapacitorLock;
struct AInventoryPickup;
struct AInventoryPickup_Container;
struct ATeamStart;
enum class EAnimationPlayType : uint8_t;
enum class EAudioListenerGrenadeExplosionType : uint8_t;
enum class EAudioListenerType : uint8_t;
enum class ECameraAnimPlaySpace : uint8_t;
enum class ECharacterPart : uint8_t;
enum class EGPFSMTransitionEvent : uint8_t;
enum class EInteractorType : uint8_t;
enum class EMarkingLocationType : uint8_t;
enum class EMatchOverReason : uint8_t;
enum class EPerfGearQualityLevel : uint8_t;
enum class EWeaponItemType : uint8_t;
struct FAudioListenerItemInfo;
struct FCapacitorRoomExpectationTableRow;
struct FCapacitorRoomGraphTableRow;
struct FCapacitorRoomRankTableRow;
struct FDamageResultInfo;
struct FDamageSourceInfo;
struct FHighValueRoomExpectationTableRow;
struct FHitResult;
struct FParkourRankDataItem;
struct FRandomCapacitorTableRow;
struct FRandomHighValueRoomTableRow;
struct UAnimMontage;
struct UAnimSequence;
struct UAnimSequenceBase;
struct UArrowComponent;
struct UAsyncSkeletalMeshComponent;
struct UBaseUIView;
struct UBoxComponent;
struct UCameraShake;
struct UCapsuleComponent;
struct UCurveFloat;
struct UCurveLinearColor;
struct UDFImage;
struct UDFMAudioListenerComponent;
struct UDamageType;
struct UDataTable;
struct UDecalComponent;
struct UEnvQuery;
struct UFXResourceContainerComponent;
struct UGPAudioEventAsset;
struct UGPMarkerItemBase;
struct UGPParkourHudViewController;
struct UGPParkourRankViewController;
struct UGPSkeletalMeshComponent;
struct UGPStaticMeshComponent;
struct UInstancedStaticMeshComponent;
struct UInteractorOptSwitcherExecuteComponent;
struct UMaterialInstanceDynamic;
struct UPathMotionAction;
struct UPrimitiveComponent;
struct USOLGameRuleComponent;
struct USceneComponent;
struct UShapeComponent;
struct USkeletalMesh;
struct USkeletalMeshComponent;
struct USphereComponent;
struct USplineAreaComponent;
struct USplineComponent;
struct UStaticMeshComponent;
struct UTextBlock;
struct UTextureRenderTarget2D;
struct FAiCharacterBuffAreaInfo;
struct FBirdFlushConfig;
struct FBirdAnimChain;
struct FBirdAnimParam;
struct FBirdObstacleSectors;
struct FCapacitorTraceData;
struct FFalloutRandomBuffConfig;
struct FBuffRandomPair;
struct FCDCounter;
struct FDFMAIWaterGunFireData;
struct FDFMAIWaterGunDripConfig;
struct FDFMAIWaterGunFireModeConfig;
struct FDFMAIWaterTankDamagedFxConfig;
struct FParkourPathTimeRow;
struct FParkourPathRow;
struct FParkourProgress;
struct FInteractorBallRepState;
struct FRoomInteractorArray;
struct FRoomInteractorData;
struct FSOLEventBannerConfig;
struct FEventQualitySequencePathData;
struct FFootballSignUins;
struct FFootballSignNames;
struct FPlayerTeamInfo;
struct FStartSpotStatictic;
struct FOrientationGroup;
struct FSOLTeamTyePriorityTable;
struct FSOLTeamWeightTable;
struct FSOLStartSpotTemplate;
struct FTournamentTeamStartTier;
struct FOrientationTeamStartGroups;
struct FOrientationTeamStart;
struct FDebug_Propinfo;
struct FDebug_Treasure_ReceiveGiftInfo;
struct FVGVConfig;
struct AAiBuffArea;
struct UAiBuffAreaSubSystem;
struct UAnimNotify_Boss08DodgeMark;
struct UAnimNotify_PlaceFootballGate;
struct UAnimNotify_ThrowFootball;
struct UAZGameRuleComponent;
struct ABirdsFlush;
struct UCapacitorInspectComponent;
struct ACapacitorSpawner;
struct ACapacitorManager;
struct UCharacterFalloutComponent;
struct ADFMAIRCVPurifierCharacter;
struct UDFMAIRCVPurifierComponent;
struct UDFInteractableCompProxy_RCV;
struct UDFInteractableComponent_RCV;
struct ADFMAIRCVPurifierController;
struct UDFMAITask_Boss08Dodge;
struct UDFMAITask_WaterGunShoot;
struct UDFMAIWaterGunComponent;
struct UDFMAIWaterTankComponent;
struct UDFMContainerRandomManager;
struct UCapacitorChainNode;
struct UDFMRoomRandomManager;
struct ADFSOLAIHelicopter;
struct AFalloutArea;
struct IFalloutInterface;
struct UFalloutManager;
struct AFootballGate;
struct UFootballSignWidget;
struct AGameMode_SOL;
struct AGameState_SOL;
struct AValueRoom;
struct ACapacitorRoom;
struct AHighValueRoom;
struct UInteractExecutor_Oscilloscope;
struct AInteractor_BlowdownValve;
struct AInteractor_Football;
struct AInteractor_GiftTreasure;
struct AInteractor_Mound;
struct AInteractor_Oscilloscope;
struct AInteractor_ParkourStart;
struct UInteractorOptParkourStartExecuteComponent;
struct AInteractor_ParkourRank;
struct UParkourPathDataTableManager;
struct UParkourPathTimeDataTableManager;
struct AInteractor_Treasure_Cover;
struct AInteractor_VaultHackPC;
struct UInteractorBallSimComponent;
struct UInteractorData;
struct AInteractorContainer_Collector;
struct UInteractorExecutor_FootballSign;
struct UInteractorExecutor_ThrowFootball;
struct UInteractorExecutor_Treasure_Cover;
struct UInteractorExecutor_Treasure_Diggup;
struct UInteractorExecutor_Treasure_Search;
struct UInteractorExecutor_Treasure_Send;
struct UInteractorOptExecuteComponent_AttachActor;
struct UInteractorOptExecuteComponent_ShowContainer;
struct UInteractorOptExecuteComponent_ShowProgressUI;
struct UInteractorOptExecuteComponent_ShowTips;
struct UInteractorOptExecuteComponent_ShowTreasureCoverUI;
struct UInteractorOptExecuteComponent_WaitEvent;
struct AOscilloscopeScreen;
struct APropActor;
struct ASOLCharacter;
struct ASOLEventVolumeBox;
struct USOLGameplayDelegates;
struct USOLInteractableComponentBase;
struct USOLInteractableComponent_Football;
struct USOLInteractableCompProxyBase;
struct USOLInteractableCompProxy_Football;
struct USOLInteractorComponent;
struct USOLInteractorManningComponent;
struct USOLInteractorOptInteractorAnimExecuteComponent;
struct USOLInteractSystem;
struct USOLPathFollowComponent;
struct USOLPlayerSettlementComponent;
struct UStartSpotAllocator_SOL;
struct UStartSpotAllocator_Trials;
struct UTreasureMgrComponent;
struct AVaultGasVolume;
struct AVaultGateActor;

// Object: Enum SOL.EDFMAIRCVPurifierFXType
enum class EDFMAIRCVPurifierFXType : uint8_t
{
	None = 0,
	Leak = 1,
	Explode = 2,
	EDFMAIRCVPurifierFXType_MAX = 3
};

// Object: Enum SOL.EAiBuffAreaOverlapPartial
enum class EAiBuffAreaOverlapPartial : uint8_t
{
	All = 0,
	UpperPartial = 1,
	EAiBuffAreaOverlapPartial_MAX = 2
};

// Object: Enum SOL.EAiBuffAreaType
enum class EAiBuffAreaType : uint8_t
{
	None = 0,
	CorrosionZone = 1,
	MaxCount = 2,
	EAiBuffAreaType_MAX = 3
};

// Object: Enum SOL.EDFMAIWaterGunOwnerPawnType
enum class EDFMAIWaterGunOwnerPawnType : uint8_t
{
	Character = 0,
	Vehicle = 1,
	EDFMAIWaterGunOwnerPawnType_MAX = 2
};

// Object: Enum SOL.EDFMAIWaterGunFireMode
enum class EDFMAIWaterGunFireMode : uint8_t
{
	LongRangeFire = 0,
	ShortRangeFire = 1,
	VehicleFire = 2,
	EDFMAIWaterGunFireMode_MAX = 3
};

// Object: Enum SOL.EFootballState
enum class EFootballState : uint8_t
{
	FootballState_None = 0,
	FootballState_Alive = 1,
	FootballState_ReadyExplode = 2,
	FootballState_MAX = 3
};

// Object: Enum SOL.EMoundState
enum class EMoundState : uint8_t
{
	EMoundState_Mound = 0,
	EMoundState_Digging = 1,
	EMoundState_Diggout = 2,
	EMoundState_Cover = 3,
	EMoundState_MAX = 4
};

// Object: Enum SOL.EInteractorBallState
enum class EInteractorBallState : uint8_t
{
	Active = 0,
	Idle = 1,
	Sleep = 2,
	EInteractorBallState_MAX = 3
};

// Object: Enum SOL.EStartSpotTemplateType
enum class EStartSpotTemplateType : uint8_t
{
	AllocByTemplate = 0,
	AllocByMS20Policy = 1,
	AllocByDefaultPolicy = 2,
	AllocByTemplateMS23 = 3,
	AllocByTournamentPolicy = 4,
	AllocByTrialsPolicy = 5,
	EStartSpotTemplateType_MAX = 6
};

// Object: ScriptStruct SOL.AiCharacterBuffAreaInfo
// Size: 0x28 (Inherited: 0x0)
struct FAiCharacterBuffAreaInfo
{
	int64_t AiUin; // 0x0(0x8)
	struct TArray<struct AAiBuffArea*> AiBuffAreas; // 0x8(0x10)
	uint8_t Pad_0x18[0x10]; // 0x18(0x10)
};

// Object: ScriptStruct SOL.BirdFlushConfig
// Size: 0x40 (Inherited: 0x0)
struct FBirdFlushConfig
{
	int32_t MinFlushCount; // 0x0(0x4)
	int32_t MaxFlushCount; // 0x4(0x4)
	int32_t MinFlushCount_Mobile; // 0x8(0x4)
	int32_t MaxFlushCount_Mobile; // 0xC(0x4)
	struct TSoftObjectPtr<UGPAudioEventAsset> AudioEvent; // 0x10(0x28)
	float AudioDelay; // 0x38(0x4)
	uint8_t Pad_0x3C[0x4]; // 0x3C(0x4)
};

// Object: ScriptStruct SOL.BirdAnimChain
// Size: 0x18 (Inherited: 0x0)
struct FBirdAnimChain
{
	struct TArray<int32_t> AnimSequenceChain; // 0x0(0x10)
	float Probability; // 0x10(0x4)
	uint8_t Pad_0x14[0x4]; // 0x14(0x4)
};

// Object: ScriptStruct SOL.BirdAnimParam
// Size: 0x30 (Inherited: 0x0)
struct FBirdAnimParam
{
	struct TSoftObjectPtr<UAnimSequence> AnimSequence; // 0x0(0x28)
	float AnimationPlayRate; // 0x28(0x4)
	float AnimSequenceContinueStartTime; // 0x2C(0x4)
};

// Object: ScriptStruct SOL.BirdObstacleSectors
// Size: 0x50 (Inherited: 0x0)
struct FBirdObstacleSectors
{
	struct TSet<int32_t> Sectors; // 0x0(0x50)
};

// Object: ScriptStruct SOL.CapacitorTraceData
// Size: 0x18 (Inherited: 0x0)
struct FCapacitorTraceData
{
	uint64_t ItemGid; // 0x0(0x8)
	struct AActor* TrackedActor; // 0x8(0x8)
	uint8_t TracingState : 1; // 0x10(0x1), Mask(0x1)
	uint8_t BitPad_0x10_1 : 7; // 0x10(0x1)
	uint8_t Pad_0x11[0x7]; // 0x11(0x7)
};

// Object: ScriptStruct SOL.FalloutRandomBuffConfig
// Size: 0x20 (Inherited: 0x0)
struct FFalloutRandomBuffConfig
{
	float FalloutValue; // 0x0(0x4)
	float FalloutTime; // 0x4(0x4)
	int32_t MaxBuffCount; // 0x8(0x4)
	uint8_t Pad_0xC[0x4]; // 0xC(0x4)
	struct TArray<struct FBuffRandomPair> BuffRandomPairs; // 0x10(0x10)
};

// Object: ScriptStruct SOL.BuffRandomPair
// Size: 0xC (Inherited: 0x0)
struct FBuffRandomPair
{
	uint32_t BuffId; // 0x0(0x4)
	ECharacterPart Part; // 0x4(0x1)
	uint8_t Pad_0x5[0x3]; // 0x5(0x3)
	float RandomRate; // 0x8(0x4)
};

// Object: ScriptStruct SOL.CDCounter
// Size: 0x18 (Inherited: 0x0)
struct FCDCounter
{
	uint8_t Pad_0x0[0x4]; // 0x0(0x4)
	uint8_t bCooling : 1; // 0x4(0x1), Mask(0x1)
	uint8_t BitPad_0x4_1 : 7; // 0x4(0x1)
	uint8_t Pad_0x5[0x3]; // 0x5(0x3)
	float CoolDownTime; // 0x8(0x4)
	uint8_t Pad_0xC[0xC]; // 0xC(0xC)
};

// Object: ScriptStruct SOL.DFMAIWaterGunFireData
// Size: 0x24 (Inherited: 0x0)
struct FDFMAIWaterGunFireData
{
	uint8_t IsFiring : 1; // 0x0(0x1), Mask(0x1)
	uint8_t BitPad_0x0_1 : 7; // 0x0(0x1)
	EDFMAIWaterGunFireMode FireMode; // 0x1(0x1)
	uint8_t Pad_0x2[0x2]; // 0x2(0x2)
	struct FVector FireStartLoc; // 0x4(0xC)
	struct FVector FireEndLoc; // 0x10(0xC)
	float StartFireTime; // 0x1C(0x4)
	float MaxFireDuration; // 0x20(0x4)
};

// Object: ScriptStruct SOL.DFMAIWaterGunDripConfig
// Size: 0x30 (Inherited: 0x0)
struct FDFMAIWaterGunDripConfig
{
	float FirstDripDelay; // 0x0(0x4)
	float DripIntervalMin; // 0x4(0x4)
	float DripIntervalMax; // 0x8(0x4)
	uint8_t Pad_0xC[0x4]; // 0xC(0x4)
	struct TArray<struct FVector> DripOffset; // 0x10(0x10)
	float DripRandomRadius; // 0x20(0x4)
	float DripRandomMinScale; // 0x24(0x4)
	float DripRandomMaxScale; // 0x28(0x4)
	uint8_t Pad_0x2C[0x4]; // 0x2C(0x4)
};

// Object: ScriptStruct SOL.DFMAIWaterGunFireModeConfig
// Size: 0xF8 (Inherited: 0x0)
struct FDFMAIWaterGunFireModeConfig
{
	EDFMAIWaterGunFireMode FireMode; // 0x0(0x1)
	uint8_t Pad_0x1[0x3]; // 0x1(0x3)
	struct FName FireFX; // 0x4(0x8)
	struct FVector FireFXScale; // 0xC(0xC)
	float FireFXPitchOffset; // 0x18(0x4)
	EDFMAIWaterGunOwnerPawnType OwnerPawnType; // 0x1C(0x1)
	uint8_t Pad_0x1D[0x3]; // 0x1D(0x3)
	struct FName FireHangingPointName; // 0x20(0x8)
	struct FVector FireHangingPointOffset; // 0x28(0xC)
	uint8_t Pad_0x34[0x4]; // 0x34(0x4)
	struct UGPAudioEventAsset* StartFireAudio; // 0x38(0x8)
	struct UGPAudioEventAsset* StopFireAudio; // 0x40(0x8)
	struct UGPAudioEventAsset* FireLoopAudio; // 0x48(0x8)
	uint8_t IsContinuousFire : 1; // 0x50(0x1), Mask(0x1)
	uint8_t BitPad_0x50_1 : 7; // 0x50(0x1)
	uint8_t Pad_0x51[0x3]; // 0x51(0x3)
	float MaxFireDuration; // 0x54(0x4)
	float MaxFireDistance; // 0x58(0x4)
	float DamageConeAngle; // 0x5C(0x4)
	struct FVector DamageBoxExtent; // 0x60(0xC)
	struct FVector DamageBoxOffset; // 0x6C(0xC)
	float DamageInterval; // 0x78(0x4)
	uint8_t Pad_0x7C[0x4]; // 0x7C(0x4)
	struct UCurveFloat* FirstDamageDelayCurve; // 0x80(0x8)
	struct TArray<int32_t> DamageBuffIds; // 0x88(0x10)
	struct FDFMAIWaterGunDripConfig HeadDripConfig; // 0x98(0x30)
	struct FDFMAIWaterGunDripConfig MidDripConfig; // 0xC8(0x30)
};

// Object: ScriptStruct SOL.DFMAIWaterTankDamagedFxConfig
// Size: 0x18 (Inherited: 0x0)
struct FDFMAIWaterTankDamagedFxConfig
{
	struct FVector OffsetPos; // 0x0(0xC)
	struct FRotator Rot; // 0xC(0xC)
};

// Object: ScriptStruct SOL.ParkourPathTimeRow
// Size: 0x20 (Inherited: 0x10)
struct FParkourPathTimeRow : FDescRowBase
{
	int32_t Path_ID; // 0x10(0x4)
	int32_t Minimumi_Time; // 0x14(0x4)
	int32_t S_Rank_Time; // 0x18(0x4)
	uint8_t Pad_0x1C[0x4]; // 0x1C(0x4)
};

// Object: ScriptStruct SOL.ParkourPathRow
// Size: 0x38 (Inherited: 0x10)
struct FParkourPathRow : FDescRowBase
{
	int32_t ParkourId; // 0x10(0x4)
	uint8_t Pad_0x14[0x4]; // 0x14(0x4)
	struct TArray<struct FVector> ParkourPointsLocation; // 0x18(0x10)
	struct TArray<struct FRotator> ParkourPointsRotation; // 0x28(0x10)
};

// Object: ScriptStruct SOL.ParkourProgress
// Size: 0x40 (Inherited: 0x0)
struct FParkourProgress
{
	uint64_t PlayerUin; // 0x0(0x8)
	int32_t CheckPointIndex; // 0x8(0x4)
	uint8_t Pad_0xC[0x4]; // 0xC(0x4)
	struct FTimerHandle PutOnBCITimerHandle; // 0x10(0x8)
	struct FTimerHandle AllowCountdownTimerHandle; // 0x18(0x8)
	float StartWaitReadyTimeStamp; // 0x20(0x4)
	uint8_t bInStartCheckPoint : 1; // 0x24(0x1), Mask(0x1)
	uint8_t BitPad_0x24_1 : 7; // 0x24(0x1)
	uint8_t Pad_0x25[0x3]; // 0x25(0x3)
	struct FTimerHandle OverTimeTimerHandle; // 0x28(0x8)
	struct FTimerHandle ReadyCountdownTimerHandle; // 0x30(0x8)
	float StartTimestamp; // 0x38(0x4)
	float CurUsedTime; // 0x3C(0x4)
};

// Object: ScriptStruct SOL.InteractorBallRepState
// Size: 0x30 (Inherited: 0x0)
struct FInteractorBallRepState
{
	struct FVector_NetQuantize100 Position; // 0x0(0xC)
	struct FRotator Rotation; // 0xC(0xC)
	struct FVector_NetQuantize100 LinearVelocity; // 0x18(0xC)
	float ServerTime; // 0x24(0x4)
	uint32_t DebugFrameCounter; // 0x28(0x4)
	uint8_t State; // 0x2C(0x1)
	uint8_t Pad_0x2D[0x3]; // 0x2D(0x3)
};

// Object: ScriptStruct SOL.RoomInteractorArray
// Size: 0x10 (Inherited: 0x0)
struct FRoomInteractorArray
{
	struct TArray<struct AInteractorBase*> Interactors; // 0x0(0x10)
};

// Object: ScriptStruct SOL.RoomInteractorData
// Size: 0x10 (Inherited: 0x0)
struct FRoomInteractorData
{
	struct TArray<struct UInteractorData*> InteractorDatas; // 0x0(0x10)
};

// Object: ScriptStruct SOL.SOLEventBannerConfig
// Size: 0x68 (Inherited: 0x10)
struct FSOLEventBannerConfig : FDescRowBase
{
	int32_t EventBannerID; // 0x10(0x4)
	uint8_t Pad_0x14[0x4]; // 0x14(0x4)
	struct FSOLEventBannerDataItem EventBannerData; // 0x18(0x50)
};

// Object: ScriptStruct SOL.EventQualitySequencePathData
// Size: 0x20 (Inherited: 0x0)
struct FEventQualitySequencePathData
{
	EPerfGearQualityLevel QualityLevel; // 0x0(0x1)
	uint8_t Pad_0x1[0x7]; // 0x1(0x7)
	struct FSoftObjectPath SequencePath; // 0x8(0x18)
};

// Object: ScriptStruct SOL.FootballSignUins
// Size: 0x18 (Inherited: 0x0)
struct FFootballSignUins
{
	uint64_t ItemGid; // 0x0(0x8)
	struct TArray<uint64_t> SignUins; // 0x8(0x10)
};

// Object: ScriptStruct SOL.FootballSignNames
// Size: 0x18 (Inherited: 0x0)
struct FFootballSignNames
{
	uint64_t ItemGid; // 0x0(0x8)
	struct TArray<struct FString> SignNames; // 0x8(0x10)
};

// Object: ScriptStruct SOL.PlayerTeamInfo
// Size: 0x20 (Inherited: 0x0)
struct FPlayerTeamInfo
{
	uint8_t Pad_0x0[0x20]; // 0x0(0x20)
};

// Object: ScriptStruct SOL.StartSpotStatictic
// Size: 0x14 (Inherited: 0x0)
struct FStartSpotStatictic
{
	uint8_t Pad_0x0[0x14]; // 0x0(0x14)
};

// Object: ScriptStruct SOL.OrientationGroup
// Size: 0x18 (Inherited: 0x0)
struct FOrientationGroup
{
	int32_t Orientation; // 0x0(0x4)
	uint8_t Pad_0x4[0x4]; // 0x4(0x4)
	struct TArray<struct ATeamStart*> TeamStarts; // 0x8(0x10)
};

// Object: ScriptStruct SOL.SOLTeamTyePriorityTable
// Size: 0x18 (Inherited: 0x10)
struct FSOLTeamTyePriorityTable : FDescRowBase
{
	int32_t TeamType; // 0x10(0x4)
	int32_t Priority; // 0x14(0x4)
};

// Object: ScriptStruct SOL.SOLTeamWeightTable
// Size: 0x68 (Inherited: 0x10)
struct FSOLTeamWeightTable : FDescRowBase
{
	int32_t TeamStartGroupId; // 0x10(0x4)
	uint8_t Pad_0x14[0x4]; // 0x14(0x4)
	struct TMap<int32_t, int32_t> TeamWeightsMap; // 0x18(0x50)
};

// Object: ScriptStruct SOL.SOLStartSpotTemplate
// Size: 0x78 (Inherited: 0x10)
struct FSOLStartSpotTemplate : FDescRowBase
{
	struct FName SOLMapName; // 0x10(0x8)
	EStartSpotTemplateType TemplateType; // 0x18(0x1)
	uint8_t Pad_0x19[0x3]; // 0x19(0x3)
	int32_t Weight; // 0x1C(0x4)
	struct TArray<struct FOrientationTeamStart> StartSpotOrientations; // 0x20(0x10)
	struct TArray<struct FOrientationTeamStartGroups> OrientationTeamStartGroupsContainer; // 0x30(0x10)
	struct FName TeamWeightDatatableName; // 0x40(0x8)
	uint8_t bEnableTeamWeight : 1; // 0x48(0x1), Mask(0x1)
	uint8_t BitPad_0x48_1 : 7; // 0x48(0x1)
	uint8_t Pad_0x49[0x7]; // 0x49(0x7)
	struct TArray<struct FTournamentTeamStartTier> TournamentTeamStartTiers; // 0x50(0x10)
	uint8_t bRandomOrientationOnStart : 1; // 0x60(0x1), Mask(0x1)
	uint8_t BitPad_0x60_1 : 7; // 0x60(0x1)
	uint8_t Pad_0x61[0x3]; // 0x61(0x3)
	float AdjustLocStepDistance; // 0x64(0x4)
	int32_t AdjustLocMaxStep; // 0x68(0x4)
	uint8_t Pad_0x6C[0xC]; // 0x6C(0xC)
};

// Object: ScriptStruct SOL.TournamentTeamStartTier
// Size: 0x20 (Inherited: 0x0)
struct FTournamentTeamStartTier
{
	struct FName TierName; // 0x0(0x8)
	int32_t TierTag; // 0x8(0x4)
	int32_t MaxTeamsInTier; // 0xC(0x4)
	struct TArray<int32_t> TeamStartGroupIDs; // 0x10(0x10)
};

// Object: ScriptStruct SOL.OrientationTeamStartGroups
// Size: 0x40 (Inherited: 0x0)
struct FOrientationTeamStartGroups
{
	struct FName GroupName; // 0x0(0x8)
	int32_t Priority; // 0x8(0x4)
	int32_t MinTeamNums; // 0xC(0x4)
	int32_t MaxTeamNums; // 0x10(0x4)
	uint8_t bDesignateTeams : 1; // 0x14(0x1), Mask(0x1)
	uint8_t BitPad_0x14_1 : 7; // 0x14(0x1)
	uint8_t Pad_0x15[0x3]; // 0x15(0x3)
	int32_t PlayerTeamNums; // 0x18(0x4)
	int32_t AIPlayerTeamNums; // 0x1C(0x4)
	uint8_t bEqualPerOrientation : 1; // 0x20(0x1), Mask(0x1)
	uint8_t BitPad_0x20_1 : 7; // 0x20(0x1)
	uint8_t Pad_0x21[0x7]; // 0x21(0x7)
	struct TArray<struct FOrientationTeamStart> OrientationTeamStarts; // 0x28(0x10)
	int32_t TeamNums; // 0x38(0x4)
	uint8_t Pad_0x3C[0x4]; // 0x3C(0x4)
};

// Object: ScriptStruct SOL.OrientationTeamStart
// Size: 0x28 (Inherited: 0x0)
struct FOrientationTeamStart
{
	int32_t OrientationId; // 0x0(0x4)
	struct FName OrientationName; // 0x4(0x8)
	uint8_t Pad_0xC[0x4]; // 0xC(0x4)
	struct TArray<int32_t> TeamStartIdGroup; // 0x10(0x10)
	int32_t TeamNums; // 0x20(0x4)
	uint8_t Pad_0x24[0x4]; // 0x24(0x4)
};

// Object: ScriptStruct SOL.Debug_Propinfo
// Size: 0x30 (Inherited: 0x0)
struct FDebug_Propinfo
{
	uint64_t ID; // 0x0(0x8)
	uint8_t Pad_0x8[0x28]; // 0x8(0x28)
};

// Object: ScriptStruct SOL.Debug_Treasure_ReceiveGiftInfo
// Size: 0x1 (Inherited: 0x0)
struct FDebug_Treasure_ReceiveGiftInfo
{
	uint8_t Pad_0x0[0x1]; // 0x0(0x1)
};

// Object: ScriptStruct SOL.VGVConfig
// Size: 0x18 (Inherited: 0x0)
struct FVGVConfig
{
	float StartTime; // 0x0(0x4)
	float IntervalTime; // 0x4(0x4)
	struct FString AttackValueId; // 0x8(0x10)
};

// Object: Class SOL.AiBuffArea
// Size: 0x438 (Inherited: 0x370)
struct AAiBuffArea : AActor
{
	DEFINE_UE_CLASS_HELPERS(AAiBuffArea, "AiBuffArea")

	EAiBuffAreaType BuffAreaType; // 0x370(0x1)
	uint8_t Pad_0x371[0x3]; // 0x371(0x3)
	float AreaRadius; // 0x374(0x4)
	float AreaHalfHeight; // 0x378(0x4)
	uint8_t CreateOverlapEvent : 1; // 0x37C(0x1), Mask(0x1)
	uint8_t BitPad_0x37C_1 : 7; // 0x37C(0x1)
	EAiBuffAreaOverlapPartial OverlapPartial; // 0x37D(0x1)
	uint8_t Pad_0x37E[0x2]; // 0x37E(0x2)
	float MaxDuration; // 0x380(0x4)
	float DelayRemoveTime; // 0x384(0x4)
	struct FName AreaFXResourceID; // 0x388(0x8)
	float AreaScale; // 0x390(0x4)
	float BuffCheckInterval; // 0x394(0x4)
	struct TArray<int32_t> AddBuffIdsToEnemy; // 0x398(0x10)
	struct TArray<int32_t> AddBuffIdsToFriendly; // 0x3A8(0x10)
	int32_t MaxAreaCount; // 0x3B8(0x4)
	uint8_t OverlapRemove : 1; // 0x3BC(0x1), Mask(0x1)
	uint8_t BitPad_0x3BC_1 : 7; // 0x3BC(0x1)
	uint8_t Pad_0x3BD[0x3]; // 0x3BD(0x3)
	float OverlapRemoveRadius2D; // 0x3C0(0x4)
	float PenddingRemoveStartTime; // 0x3C4(0x4)
	uint8_t Pad_0x3C8[0x8]; // 0x3C8(0x8)
	struct ADFMAICharacter* AreaOwner; // 0x3D0(0x8)
	struct UFXResourceContainerComponent* ClientAreaFXContainer; // 0x3D8(0x8)
	struct UCapsuleComponent* OverlapAreaComponent; // 0x3E0(0x8)
	struct TMap<struct ADFMCharacter*, float> InOverlapCharactersMap; // 0x3E8(0x50)

	// Object: Function SOL.AiBuffArea.OnOverlapEnd
	// Flags: [Native|Protected]
	// Offset: 0x15284658
	// Params: [ Num(4) Size(0x1C) ]
	void OnOverlapEnd(struct UPrimitiveComponent* OverlappedComp, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex);

	// Object: Function SOL.AiBuffArea.OnOverlapBegin
	// Flags: [Native|Protected|HasOutParms]
	// Offset: 0x15284458
	// Params: [ Num(6) Size(0xA8) ]
	void OnOverlapBegin(struct UPrimitiveComponent* OverlappedComp, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, uint8_t bFromSweep, const struct FHitResult& SweepResult);

	// Object: Function SOL.AiBuffArea.Broadcast_FxPreDestory
	// Flags: [Net|Native|Event|NetMulticast|Public]
	// Offset: 0x1528443c
	// Params: [ Num(0) Size(0x0) ]
	void Broadcast_FxPreDestory();
};

// Object: Class SOL.AiBuffAreaSubSystem
// Size: 0x80 (Inherited: 0x30)
struct UAiBuffAreaSubSystem : UWorldSubsystem
{
	DEFINE_UE_CLASS_HELPERS(UAiBuffAreaSubSystem, "AiBuffAreaSubSystem")

	struct TMap<int64_t, struct FAiCharacterBuffAreaInfo> AiCharacterBuffAreaMap; // 0x30(0x50)
};

// Object: Class SOL.AnimNotify_Boss08DodgeMark
// Size: 0x38 (Inherited: 0x38)
struct UAnimNotify_Boss08DodgeMark : UAnimNotify
{
	DEFINE_UE_CLASS_HELPERS(UAnimNotify_Boss08DodgeMark, "AnimNotify_Boss08DodgeMark")
};

// Object: Class SOL.AnimNotify_PlaceFootballGate
// Size: 0x38 (Inherited: 0x38)
struct UAnimNotify_PlaceFootballGate : UAnimNotify
{
	DEFINE_UE_CLASS_HELPERS(UAnimNotify_PlaceFootballGate, "AnimNotify_PlaceFootballGate")

	// Object: Function SOL.AnimNotify_PlaceFootballGate.ReceivedPlaceFootballGate
	// Flags: [Final|Native|Public|BlueprintCallable|Const]
	// Offset: 0x152848ac
	// Params: [ Num(0) Size(0x0) ]
	void ReceivedPlaceFootballGate();
};

// Object: Class SOL.AnimNotify_ThrowFootball
// Size: 0x50 (Inherited: 0x38)
struct UAnimNotify_ThrowFootball : UAnimNotify
{
	DEFINE_UE_CLASS_HELPERS(UAnimNotify_ThrowFootball, "AnimNotify_ThrowFootball")

	float ReleaseTime; // 0x38(0x4)
	struct FName SpineBoneName; // 0x3C(0x8)
	struct FName HandBoneName; // 0x44(0x8)
	float BallCenterOffsetZ; // 0x4C(0x4)

	// Object: Function SOL.AnimNotify_ThrowFootball.ReceivedThrowFootball
	// Flags: [Final|Native|Public|BlueprintCallable|Const]
	// Offset: 0x152848c8
	// Params: [ Num(2) Size(0x10) ]
	void ReceivedThrowFootball(struct USkeletalMeshComponent* MeshComp, struct UAnimSequenceBase* AnimSeq);
};

// Object: Class SOL.AZGameRuleComponent
// Size: 0x358 (Inherited: 0x338)
struct UAZGameRuleComponent : USOLGameRuleComponent
{
	DEFINE_UE_CLASS_HELPERS(UAZGameRuleComponent, "AZGameRuleComponent")

	struct FSoftClassPath CharacterFalloutComponentClass; // 0x338(0x18)
	struct UFalloutManager* FalloutManager; // 0x350(0x8)
};

// Object: Class SOL.BirdsFlush
// Size: 0x6F8 (Inherited: 0x370)
struct ABirdsFlush : AActor
{
	DEFINE_UE_CLASS_HELPERS(ABirdsFlush, "BirdsFlush")

	uint8_t Pad_0x370[0x10]; // 0x370(0x10)
	struct TArray<struct USkeletalMeshComponent*> Birds; // 0x380(0x10)
	struct FName BoneName; // 0x390(0x8)
	float BirdInitialYawOffset; // 0x398(0x4)
	float MaxDelayBirdFlush; // 0x39C(0x4)
	float BirdHorizontalRandomOffsetRange; // 0x3A0(0x4)
	uint8_t Pad_0x3A4[0x4]; // 0x3A4(0x4)
	struct TArray<struct FBirdAnimParam> BirdAnimSequenceParams; // 0x3A8(0x10)
	struct TArray<struct FBirdAnimChain> BirdAnimChains; // 0x3B8(0x10)
	float CD_BirdFlush; // 0x3C8(0x4)
	float CD_Clear; // 0x3CC(0x4)
	float AudioMovementTriggerRange; // 0x3D0(0x4)
	float MaxPerceptionDistance; // 0x3D4(0x4)
	float MaxPerceptionDistance_Mobile; // 0x3D8(0x4)
	uint8_t Pad_0x3DC[0x4]; // 0x3DC(0x4)
	struct TMap<EWeaponItemType, float> WeaponTypeDistanceConfig; // 0x3E0(0x50)
	float WeaponSilencerDiscountRatio; // 0x430(0x4)
	uint8_t Pad_0x434[0x4]; // 0x434(0x4)
	struct TMap<int32_t, float> SkillIdDistanceConfig; // 0x438(0x50)
	struct TMap<EAudioListenerGrenadeExplosionType, float> GrenadeExplosionTypeDistanceConfig; // 0x488(0x50)
	struct TMap<EAudioListenerType, struct FBirdFlushConfig> AudioTypeFlushConfig; // 0x4D8(0x50)
	int32_t ObstacleSectorCount; // 0x528(0x4)
	float ObstacleRayPitchAngle; // 0x52C(0x4)
	float ObstacleRayMaxDistance; // 0x530(0x4)
	uint8_t Pad_0x534[0x4]; // 0x534(0x4)
	struct TSet<int32_t> ObstacleSectorIndices; // 0x538(0x50)
	struct TMap<int32_t, struct FBirdObstacleSectors> BirdObstacleSectors; // 0x588(0x50)
	struct FTimerHandle ObstacleDetectionTimerHandle; // 0x5D8(0x8)
	struct UShapeComponent* CollisionComp; // 0x5E0(0x8)
	float TimeStamp_LastBirdFlush; // 0x5E8(0x4)
	float TimeStamp_LastCleared; // 0x5EC(0x4)
	struct UDFMAudioListenerComponent* DFMAudioListenerComponent; // 0x5F0(0x8)
	struct TArray<struct FVector> BirdsRelativeLocations; // 0x5F8(0x10)
	struct TSet<struct AGPCharacterBase*> CharactersInBox; // 0x608(0x50)
	struct TMap<struct USkeletalMeshComponent*, struct FTimerHandle> MapBird2TimerHandle; // 0x658(0x50)
	struct TMap<struct USkeletalMeshComponent*, struct FIntPoint> MapBird2ChainInfo; // 0x6A8(0x50)

	// Object: Function SOL.BirdsFlush.TriggerFlush
	// Flags: [Final|Native|Public]
	// Offset: 0x15285658
	// Params: [ Num(2) Size(0x48) ]
	void TriggerFlush(struct ACHARACTER* CHARACTER, struct FBirdFlushConfig FlushConfig);

	// Object: Function SOL.BirdsFlush.PlayAnim_Internal
	// Flags: [Final|Native|Public]
	// Offset: 0x15285540
	// Params: [ Num(3) Size(0x10) ]
	void PlayAnim_Internal(struct USkeletalMeshComponent* BirdComp, int32_t ChainIndex, int32_t ChainStep);

	// Object: Function SOL.BirdsFlush.PerformObstacleDetection
	// Flags: [Final|Native|Public]
	// Offset: 0x1528552c
	// Params: [ Num(0) Size(0x0) ]
	void PerformObstacleDetection();

	// Object: Function SOL.BirdsFlush.OnOverlapEnd
	// Flags: [Native|Public]
	// Offset: 0x152853d0
	// Params: [ Num(4) Size(0x1C) ]
	void OnOverlapEnd(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex);

	// Object: Function SOL.BirdsFlush.OnOverlapBegin
	// Flags: [Native|Public|HasOutParms]
	// Offset: 0x152851d0
	// Params: [ Num(6) Size(0xA8) ]
	void OnOverlapBegin(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, uint8_t bFromSweep, const struct FHitResult& SweepResult);

	// Object: Function SOL.BirdsFlush.OnAudioInfoCollect
	// Flags: [Final|Native|Public|HasOutParms]
	// Offset: 0x152850d0
	// Params: [ Num(1) Size(0x50) ]
	void OnAudioInfoCollect(struct FAudioListenerItemInfo& AudioInfo);

	// Object: Function SOL.BirdsFlush.OnAnimLoaded2Play
	// Flags: [Final|Native|Public]
	// Offset: 0x15284fb8
	// Params: [ Num(3) Size(0x10) ]
	void OnAnimLoaded2Play(struct USkeletalMeshComponent* BirdComp, int32_t ChainIndex, int32_t ChainStep);

	// Object: Function SOL.BirdsFlush.OnAnimEnd
	// Flags: [Final|Native|Public]
	// Offset: 0x15284ea0
	// Params: [ Num(3) Size(0x10) ]
	void OnAnimEnd(struct USkeletalMeshComponent* BirdComp, int32_t ChainIndex, int32_t ChainStep);

	// Object: Function SOL.BirdsFlush.MulticastPlayAudio
	// Flags: [Net|NetReliableNative|Event|NetMulticast|Public]
	// Offset: 0x15284d40
	// Params: [ Num(1) Size(0x40) ]
	void MulticastPlayAudio(struct FBirdFlushConfig FlushConfig);

	// Object: Function SOL.BirdsFlush.MulticastPlayAnim
	// Flags: [Net|NetReliableNative|Event|NetMulticast|Public|HasDefaults]
	// Offset: 0x15284be0
	// Params: [ Num(4) Size(0x18) ]
	void MulticastPlayAnim(int32_t BirdIndex, struct FRotator BirdRotation, int32_t ChainIndex, float DelayTime);

	// Object: Function SOL.BirdsFlush.CleanupBirdState
	// Flags: [Final|Native|Public]
	// Offset: 0x15284b3c
	// Params: [ Num(1) Size(0x8) ]
	void CleanupBirdState(struct USkeletalMeshComponent* BirdComp);
};

// Object: Class SOL.CapacitorInspectComponent
// Size: 0x110 (Inherited: 0xF8)
struct UCapacitorInspectComponent : UActorComponent
{
	DEFINE_UE_CLASS_HELPERS(UCapacitorInspectComponent, "CapacitorInspectComponent")

	struct AInteractAcquireItemBase* OwnerItem; // 0xF8(0x8)
	struct AActor* TracingActor; // 0x100(0x8)
	struct FName InspectPanelName; // 0x108(0x8)

	// Object: Function SOL.CapacitorInspectComponent.UpdatePanel
	// Flags: [Event|Public|BlueprintCallable|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(2) Size(0x8) ]
	void UpdatePanel(float InDistance, float InAngle);

	// Object: Function SOL.CapacitorInspectComponent.OnInspectPanelLoaded
	// Flags: [Event|Public|BlueprintCallable|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(2) Size(0x18) ]
	void OnInspectPanelLoaded(struct FString FunctionName, struct UBaseUIView* View);
};

// Object: Class SOL.CapacitorSpawner
// Size: 0x410 (Inherited: 0x370)
struct ACapacitorSpawner : AActor
{
	DEFINE_UE_CLASS_HELPERS(ACapacitorSpawner, "CapacitorSpawner")

	uint8_t Pad_0x370[0x40]; // 0x370(0x40)
	struct TMap<int32_t, struct FName> CapacitorItemID; // 0x3B0(0x50)
	struct FName GroupID; // 0x400(0x8)
	uint8_t Pad_0x408[0x8]; // 0x408(0x8)

	// Object: Function SOL.CapacitorSpawner.SpawnCapacitor
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x15285890
	// Params: [ Num(3) Size(0x18) ]
	struct AInventoryPickup* SpawnCapacitor(struct AActor* TrackedActor, int32_t Rank);
};

// Object: Class SOL.CapacitorManager
// Size: 0x3D8 (Inherited: 0x370)
struct ACapacitorManager : ALevelSubsystem
{
	DEFINE_UE_CLASS_HELPERS(ACapacitorManager, "CapacitorManager")

	struct TMap<struct FName, struct FName> CapacitorItemIdTagMap; // 0x370(0x50)
	float TraceDistance; // 0x3C0(0x4)
	uint8_t Pad_0x3C4[0x4]; // 0x3C4(0x4)
	struct TArray<struct FCapacitorTraceData> CapacitorTraceData; // 0x3C8(0x10)

	// Object: Function SOL.CapacitorManager.RecordCapacitorTraceTarget
	// Flags: [Final|Native|Public]
	// Offset: 0x15285ef4
	// Params: [ Num(2) Size(0x10) ]
	void RecordCapacitorTraceTarget(uint64_t ItemGid, struct AInteractorBase* TargetInteract);

	// Object: Function SOL.CapacitorManager.Get
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x15285e50
	// Params: [ Num(2) Size(0x10) ]
	static struct ACapacitorManager* Get(struct UObject* WorldContext);

	// Object: Function SOL.CapacitorManager.FindTraceDataByItemGID
	// Flags: [Final|Native|Public|HasOutParms]
	// Offset: 0x15285d50
	// Params: [ Num(3) Size(0x21) ]
	uint8_t FindTraceDataByItemGID(uint64_t InItemGid, struct FCapacitorTraceData& OutData);

	// Object: Function SOL.CapacitorManager.FindTraceDataByActor
	// Flags: [Final|Native|Public|HasOutParms]
	// Offset: 0x15285c50
	// Params: [ Num(3) Size(0x21) ]
	uint8_t FindTraceDataByActor(struct AActor* InActor, struct FCapacitorTraceData& OutData);

	// Object: Function SOL.CapacitorManager.FindNearbyUnusedCapacitorSpawners
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults]
	// Offset: 0x15285ae0
	// Params: [ Num(4) Size(0x28) ]
	struct TArray<struct ACapacitorSpawner*> FindNearbyUnusedCapacitorSpawners(const struct FVector& Center, float Distance, struct FName GroupID);

	// Object: Function SOL.CapacitorManager.ClientGetTraceTargetActor
	// Flags: [Final|Native|Public]
	// Offset: 0x15285a34
	// Params: [ Num(2) Size(0x10) ]
	struct AActor* ClientGetTraceTargetActor(uint64_t ItemGid);
};

// Object: Class SOL.CharacterFalloutComponent
// Size: 0x4D0 (Inherited: 0xF8)
struct UCharacterFalloutComponent : UActorComponent
{
	DEFINE_UE_CLASS_HELPERS(UCharacterFalloutComponent, "CharacterFalloutComponent")

	struct TArray<struct FFalloutRandomBuffConfig> BuffRandomConfigs; // 0xF8(0x10)
	struct TMap<int32_t, int32_t> FalloutFixedBuffIDMap; // 0x108(0x50)
	uint8_t Pad_0x158[0x58]; // 0x158(0x58)
	struct FTimerHandle FalloutCheckTimerHandle; // 0x1B0(0x8)
	struct FTimerHandle AddBuffTimerHandle; // 0x1B8(0x8)
	uint8_t Pad_0x1C0[0x4]; // 0x1C0(0x4)
	int32_t SlowIncreaseBuffID; // 0x1C4(0x4)
	int32_t SlowDecreaseBuffID; // 0x1C8(0x4)
	uint8_t Pad_0x1CC[0x4]; // 0x1CC(0x4)
	struct TArray<struct AInteractorBase*> InteractedContainerIDs; // 0x1D0(0x10)
	struct TArray<uint64_t> PickedItemGids; // 0x1E0(0x10)
	struct TArray<int64_t> FalloutItemIds; // 0x1F0(0x10)
	uint8_t Pad_0x200[0x50]; // 0x200(0x50)
	EAnimationPlayType FPPPlayType; // 0x250(0x1)
	uint8_t FPPStopAllMontage : 1; // 0x251(0x1), Mask(0x1)
	uint8_t BitPad_0x251_1 : 7; // 0x251(0x1)
	uint8_t Pad_0x252[0x2]; // 0x252(0x2)
	float FPPBlendInTime; // 0x254(0x4)
	float FPPBlendOutTime; // 0x258(0x4)
	float FPPDelayAfterEmptyHand; // 0x25C(0x4)
	uint8_t NeedPutWeapon : 1; // 0x260(0x1), Mask(0x1)
	uint8_t BitPad_0x260_1 : 7; // 0x260(0x1)
	uint8_t Pad_0x261[0x7]; // 0x261(0x7)
	struct TSoftObjectPtr<UAnimSequenceBase> FPPStartScanAnimationPath; // 0x268(0x28)
	struct TSoftObjectPtr<UAnimSequenceBase> FPPLoopScanAnimationPath; // 0x290(0x28)
	float ScanActionLoopDuration; // 0x2B8(0x4)
	uint8_t Pad_0x2BC[0x4]; // 0x2BC(0x4)
	struct TSoftObjectPtr<UAnimSequenceBase> FPPEndScanAnimationPath; // 0x2C0(0x28)
	struct FName PropAttachSocket; // 0x2E8(0x8)
	struct TSoftObjectPtr<USkeletalMesh> PropSkeletalMeshPath; // 0x2F0(0x28)
	struct TSoftObjectPtr<UAnimSequenceBase> PropScanAnimationPath; // 0x318(0x28)
	float EffectDelayPlayTime; // 0x340(0x4)
	struct FName PostProcessEffectName; // 0x344(0x8)
	struct FName MobileEffectName; // 0x34C(0x8)
	uint8_t Pad_0x354[0x4]; // 0x354(0x4)
	struct FString PostProcessEffectParameterName; // 0x358(0x10)
	float FalloutScanCooldown; // 0x368(0x4)
	float FalloutScanRadius; // 0x36C(0x4)
	struct TArray<struct AActor*> FalloutScanClassTypes; // 0x370(0x10)
	struct TArray<struct FName> FalloutScanItemIDs; // 0x380(0x10)
	struct FAvatarScreenEffectOperateHandle ScanHDHandle; // 0x390(0x8)
	struct FAvatarFXOperateHandle ScanMBHandle; // 0x398(0x10)
	struct FTimerHandle PutWeaponTimerHandle; // 0x3A8(0x8)
	struct FTimerHandle AnimPlayTimerHandle; // 0x3B0(0x8)
	struct FTimerHandle DelayScanTimerHandle; // 0x3B8(0x8)
	struct UAnimMontage* CachedCharacterThreeMontageFpp; // 0x3C0(0x8)
	struct UGPSkeletalMeshComponent* GeigerMeshComp; // 0x3C8(0x8)
	struct USkeletalMesh* CachedGeigerSkeletalMesh; // 0x3D0(0x8)
	struct TArray<struct UAnimSequence*> CachedAnimSequences; // 0x3D8(0x10)
	struct TMap<struct FString, struct UGPMarkerItemBase*> CachedScanMarkersMap; // 0x3E8(0x50)
	uint8_t Pad_0x438[0x4]; // 0x438(0x4)
	float FalloutMaxValue; // 0x43C(0x4)
	float FalloutMinValue; // 0x440(0x4)
	float FalloutObjectDetectRate; // 0x444(0x4)
	float FalloutObjectMinDistance; // 0x448(0x4)
	float FalloutObjectMaxDistance; // 0x44C(0x4)
	float RadiationMaxRTPC; // 0x450(0x4)
	float RadiationMinRTPC; // 0x454(0x4)
	struct TSoftObjectPtr<UGPAudioEventAsset> RadiationAudioAssetPath; // 0x458(0x28)
	struct FName RadiationRTPCName; // 0x480(0x8)
	float RadiationStrength; // 0x488(0x4)
	uint8_t Pad_0x48C[0x4]; // 0x48C(0x4)
	struct UGPAudioEventAsset* RadiationAudioAsset; // 0x490(0x8)
	uint8_t Pad_0x498[0x18]; // 0x498(0x18)
	struct AActor* HighValueRoomClass; // 0x4B0(0x8)
	float PreloadHighValueRoomDistance; // 0x4B8(0x4)
	uint8_t Pad_0x4BC[0x4]; // 0x4BC(0x4)
	struct TArray<struct FString> CachedLoadedLevels; // 0x4C0(0x10)

	// Object: Function SOL.CharacterFalloutComponent.TryAddRandomBuff
	// Flags: [Final|Native|Protected]
	// Offset: 0x15287520
	// Params: [ Num(0) Size(0x0) ]
	void TryAddRandomBuff();

	// Object: Function SOL.CharacterFalloutComponent.TickCheckFalloutObjectNearby
	// Flags: [Final|Native|Protected]
	// Offset: 0x1528747c
	// Params: [ Num(1) Size(0x4) ]
	void TickCheckFalloutObjectNearby(float DeltaTime);

	// Object: Function SOL.CharacterFalloutComponent.SetRadiationStrengthInner
	// Flags: [Final|Native|Protected]
	// Offset: 0x152873d8
	// Params: [ Num(1) Size(0x4) ]
	void SetRadiationStrengthInner(float InRadiationStrength);

	// Object: Function SOL.CharacterFalloutComponent.SetRadiationStrengthByFalloutObjectDistance
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x15287334
	// Params: [ Num(1) Size(0x4) ]
	void SetRadiationStrengthByFalloutObjectDistance(float InDistance);

	// Object: Function SOL.CharacterFalloutComponent.SetRadiationStrengthByCharacterFalloutValue
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x15287290
	// Params: [ Num(1) Size(0x4) ]
	void SetRadiationStrengthByCharacterFalloutValue(float InValue);

	// Object: Function SOL.CharacterFalloutComponent.SetIsInFalloutArea
	// Flags: [Final|Native|Public]
	// Offset: 0x152871e4
	// Params: [ Num(1) Size(0x1) ]
	void SetIsInFalloutArea(uint8_t bInArea);

	// Object: Function SOL.CharacterFalloutComponent.ServerTriggerScanInner
	// Flags: [Final|Native|Protected]
	// Offset: 0x152871d0
	// Params: [ Num(0) Size(0x0) ]
	void ServerTriggerScanInner();

	// Object: Function SOL.CharacterFalloutComponent.ServerTriggerScan
	// Flags: [Net|NetReliableNative|Event|Protected|NetServer]
	// Offset: 0x152871b4
	// Params: [ Num(0) Size(0x0) ]
	void ServerTriggerScan();

	// Object: Function SOL.CharacterFalloutComponent.RemoveBuffsForConfigIndex
	// Flags: [Final|Native|Protected]
	// Offset: 0x15287110
	// Params: [ Num(1) Size(0x4) ]
	void RemoveBuffsForConfigIndex(int32_t ConfigIndex);

	// Object: Function SOL.CharacterFalloutComponent.RandomSelectBuffPair
	// Flags: [Final|Native|Protected|HasOutParms|Const]
	// Offset: 0x1528703c
	// Params: [ Num(2) Size(0x2C) ]
	struct FBuffRandomPair RandomSelectBuffPair(const struct FFalloutRandomBuffConfig& Config);

	// Object: Function SOL.CharacterFalloutComponent.OnPutWeaponComplete
	// Flags: [Final|Native|Protected]
	// Offset: 0x15287028
	// Params: [ Num(0) Size(0x0) ]
	void OnPutWeaponComplete();

	// Object: Function SOL.CharacterFalloutComponent.OnInventoryItemAddOrRemove
	// Flags: [Final|Native|Protected]
	// Offset: 0x15286f08
	// Params: [ Num(3) Size(0x11) ]
	void OnInventoryItemAddOrRemove(uint64_t ItemID, uint64_t ItemGid, uint8_t bAddOrRemove);

	// Object: Function SOL.CharacterFalloutComponent.OnGeigerMeshAssetLoadComplete
	// Flags: [Final|Native|Protected|HasOutParms|HasDefaults]
	// Offset: 0x15286e48
	// Params: [ Num(1) Size(0x18) ]
	void OnGeigerMeshAssetLoadComplete(const struct FSoftObjectPath& AssetPath);

	// Object: Function SOL.CharacterFalloutComponent.OnCharacterPressScan
	// Flags: [Final|Native|Protected]
	// Offset: 0x15286e34
	// Params: [ Num(0) Size(0x0) ]
	void OnCharacterPressScan();

	// Object: Function SOL.CharacterFalloutComponent.OnCharacterFalloutChanged
	// Flags: [Final|Native|Protected]
	// Offset: 0x15286d1c
	// Params: [ Num(3) Size(0x10) ]
	void OnCharacterFalloutChanged(struct AActor* Owner, float FalloutValue, float MaxFalloutValue);

	// Object: Function SOL.CharacterFalloutComponent.OnAudioAssetLoadComplete
	// Flags: [Final|Native|Protected|HasOutParms|HasDefaults]
	// Offset: 0x15286c5c
	// Params: [ Num(1) Size(0x18) ]
	void OnAudioAssetLoadComplete(const struct FSoftObjectPath& AssetPath);

	// Object: Function SOL.CharacterFalloutComponent.OnAnimPlayComplete
	// Flags: [Final|Native|Protected]
	// Offset: 0x15286c48
	// Params: [ Num(0) Size(0x0) ]
	void OnAnimPlayComplete();

	// Object: Function SOL.CharacterFalloutComponent.OnAnimLoadComplete
	// Flags: [Final|Native|Protected]
	// Offset: 0x15286b78
	// Params: [ Num(1) Size(0x10) ]
	void OnAnimLoadComplete(struct TArray<struct FSoftObjectPath> AssetRef);

	// Object: Function SOL.CharacterFalloutComponent.GetNearbyRadioactiveItemLoc
	// Flags: [Final|Native|Protected|Const]
	// Offset: 0x152869c4
	// Params: [ Num(5) Size(0x18) ]
	struct TArray<struct FVector> GetNearbyRadioactiveItemLoc(float CheckRadius, uint8_t bCheckFalloutClassTypes, uint8_t bCheckPickup, uint8_t bCheckChara);

	// Object: Function SOL.CharacterFalloutComponent.GetCurrentFalloutConfigIndex
	// Flags: [Final|Native|Protected|Const]
	// Offset: 0x15286918
	// Params: [ Num(2) Size(0x8) ]
	int32_t GetCurrentFalloutConfigIndex(float FalloutValue);

	// Object: Function SOL.CharacterFalloutComponent.ClientSwitchToEmptyHand
	// Flags: [Final|Native|Public]
	// Offset: 0x15286864
	// Params: [ Num(2) Size(0x8) ]
	float ClientSwitchToEmptyHand(uint8_t bEmptyHand);

	// Object: Function SOL.CharacterFalloutComponent.ClientSpawnGeigerMesh
	// Flags: [Final|Native|Public]
	// Offset: 0x152867b8
	// Params: [ Num(1) Size(0x1) ]
	void ClientSpawnGeigerMesh(uint8_t bSpawn);

	// Object: Function SOL.CharacterFalloutComponent.ClientRemoveAllScanMarkers
	// Flags: [Final|Native|Protected]
	// Offset: 0x152867a4
	// Params: [ Num(0) Size(0x0) ]
	void ClientRemoveAllScanMarkers();

	// Object: Function SOL.CharacterFalloutComponent.ClientPlayGeigerMeshAnimation
	// Flags: [Final|Native|Public]
	// Offset: 0x152866b4
	// Params: [ Num(3) Size(0x10) ]
	float ClientPlayGeigerMeshAnimation(struct UAnimSequenceBase* Animation, uint8_t bLooping);

	// Object: Function SOL.CharacterFalloutComponent.ClientPlayEffect
	// Flags: [Net|NetReliableNative|Event|Protected|NetClient]
	// Offset: 0x15286698
	// Params: [ Num(0) Size(0x0) ]
	void ClientPlayEffect();

	// Object: Function SOL.CharacterFalloutComponent.ClientPlayAnim
	// Flags: [Net|NetReliableNative|Event|Protected|NetClient]
	// Offset: 0x1528667c
	// Params: [ Num(0) Size(0x0) ]
	void ClientPlayAnim();

	// Object: Function SOL.CharacterFalloutComponent.ClientNotifyCooldownEnd
	// Flags: [Net|NetReliableNative|Event|Protected|NetClient]
	// Offset: 0x152865d0
	// Params: [ Num(1) Size(0x4) ]
	void ClientNotifyCooldownEnd(float RemainingTime);

	// Object: Function SOL.CharacterFalloutComponent.ClientMarkContainerInteracted
	// Flags: [Net|NetReliableNative|Event|Public|NetClient]
	// Offset: 0x15286524
	// Params: [ Num(1) Size(0x8) ]
	void ClientMarkContainerInteracted(struct AInteractorBase* Container);

	// Object: Function SOL.CharacterFalloutComponent.ClientAddMarkersByLocation
	// Flags: [Net|NetReliableNative|Event|Protected|NetClient]
	// Offset: 0x15286470
	// Params: [ Num(1) Size(0x10) ]
	void ClientAddMarkersByLocation(struct TArray<struct FVector> MarkerPositions);

	// Object: Function SOL.CharacterFalloutComponent.ClearAllFalloutStateBuff
	// Flags: [Final|Native|Protected]
	// Offset: 0x1528645c
	// Params: [ Num(0) Size(0x0) ]
	void ClearAllFalloutStateBuff();

	// Object: Function SOL.CharacterFalloutComponent.CheckPreloadHighValueRoomNearby
	// Flags: [Final|Native|Protected]
	// Offset: 0x15286448
	// Params: [ Num(0) Size(0x0) ]
	void CheckPreloadHighValueRoomNearby();

	// Object: Function SOL.CharacterFalloutComponent.CheckFalloutValueAndUpdateBuff
	// Flags: [Final|Native|Protected]
	// Offset: 0x15286434
	// Params: [ Num(0) Size(0x0) ]
	void CheckFalloutValueAndUpdateBuff();

	// Object: Function SOL.CharacterFalloutComponent.CastRadiationStrengthToRTPCValue
	// Flags: [Final|Native|Protected|Const]
	// Offset: 0x15286388
	// Params: [ Num(2) Size(0x8) ]
	float CastRadiationStrengthToRTPCValue(float Strength);

	// Object: Function SOL.CharacterFalloutComponent.CastFalloutValueToRadiationStrength
	// Flags: [Final|Native|Protected|Const]
	// Offset: 0x152862dc
	// Params: [ Num(2) Size(0x8) ]
	float CastFalloutValueToRadiationStrength(float CharaFalloutValue);

	// Object: Function SOL.CharacterFalloutComponent.CastFalloutDistanceToRadiationStrength
	// Flags: [Final|Native|Protected|Const]
	// Offset: 0x15286230
	// Params: [ Num(2) Size(0x8) ]
	float CastFalloutDistanceToRadiationStrength(float ObjectDistance);

	// Object: Function SOL.CharacterFalloutComponent.BP_ClientPlayAnim
	// Flags: [Event|Protected|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(0) Size(0x0) ]
	void BP_ClientPlayAnim();

	// Object: Function SOL.CharacterFalloutComponent.AddInstantIncreaseBuff
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x1528618c
	// Params: [ Num(1) Size(0x4) ]
	void AddInstantIncreaseBuff(int32_t InstantIncreaseBuffID);
};

// Object: Class SOL.DFMAIRCVPurifierCharacter
// Size: 0x3D80 (Inherited: 0x3C70)
struct ADFMAIRCVPurifierCharacter : ADFMAICharacter
{
	DEFINE_UE_CLASS_HELPERS(ADFMAIRCVPurifierCharacter, "DFMAIRCVPurifierCharacter")

	uint8_t bBeControlled : 1; // 0x3C70(0x1), Mask(0x1)
	uint8_t BitPad_0x3C70_1 : 7; // 0x3C70(0x1)
	uint8_t Pad_0x3C71[0x7]; // 0x3C71(0x7)
	struct ADFMCharacter* LinkedController; // 0x3C78(0x8)
	struct FCDCounter PurifierDirectionCD; // 0x3C80(0x18)
	struct FCDCounter PurifierMoveDeltaCD; // 0x3C98(0x18)
	struct FCDCounter PurifierYawDeltaCD; // 0x3CB0(0x18)
	struct FCDCounter PurifierFireCD; // 0x3CC8(0x18)
	struct FName BBKey_CommandTargetLocation; // 0x3CE0(0x8)
	struct FName BBKey_IsCommandMoving; // 0x3CE8(0x8)
	struct UEnvQuery* CommandMoveEnvQuery; // 0x3CF0(0x8)
	struct FText Text_TooFar; // 0x3CF8(0x18)
	struct FName LinkGesture; // 0x3D10(0x8)
	struct FName DeLinkGesture; // 0x3D18(0x8)
	struct TArray<EMarkingLocationType> CommandMoveTypes; // 0x3D20(0x10)
	struct TArray<EMarkingLocationType> CommandFireTypes; // 0x3D30(0x10)
	struct TArray<EMarkingLocationType> CommandTurnTypes; // 0x3D40(0x10)
	EDFMAIWaterGunFireMode CommandFireMode; // 0x3D50(0x1)
	uint8_t Pad_0x3D51[0x3]; // 0x3D51(0x3)
	float CommandFireTime; // 0x3D54(0x4)
	float ActivityRangeRadius_Prudent; // 0x3D58(0x4)
	float ActivityRangeRadius_Assault; // 0x3D5C(0x4)
	struct FName BBKey_PassiveTargetLocation; // 0x3D60(0x8)
	struct FName BBKey_PassiveTargetDir; // 0x3D68(0x8)
	struct FName BBKey_IsPassiveMoving; // 0x3D70(0x8)
	struct UEnvQuery* PassiveMoveEnvQuery; // 0x3D78(0x8)

	// Object: Function SOL.DFMAIRCVPurifierCharacter.SetPurifierYawDelta
	// Flags: [Final|Exec|Native|Public|BlueprintCallable]
	// Offset: 0x1528ab5c
	// Params: [ Num(1) Size(0x4) ]
	void SetPurifierYawDelta(float Delta);

	// Object: Function SOL.DFMAIRCVPurifierCharacter.SetPurifierMoveDelta
	// Flags: [Final|Exec|Native|Public|BlueprintCallable]
	// Offset: 0x1528aab8
	// Params: [ Num(1) Size(0x4) ]
	void SetPurifierMoveDelta(float Delta);

	// Object: Function SOL.DFMAIRCVPurifierCharacter.SetPurifierFire
	// Flags: [Final|Exec|Native|Public|BlueprintCallable]
	// Offset: 0x1528a9d8
	// Params: [ Num(2) Size(0x8) ]
	void SetPurifierFire(EDFMAIWaterGunFireMode FireMode, float Time);

	// Object: Function SOL.DFMAIRCVPurifierCharacter.SetPurifierDirection
	// Flags: [Final|Exec|Native|Public|BlueprintCallable]
	// Offset: 0x1528a934
	// Params: [ Num(1) Size(0x4) ]
	void SetPurifierDirection(float Delta);

	// Object: Function SOL.DFMAIRCVPurifierCharacter.SetDelayMarkingTrigger
	// Flags: [Final|Native|Public]
	// Offset: 0x1528a854
	// Params: [ Num(2) Size(0x8) ]
	void SetDelayMarkingTrigger(EMarkingLocationType PoseType, float Time);

	// Object: Function SOL.DFMAIRCVPurifierCharacter.OnPlayerMarking
	// Flags: [Final|Native|Public|HasDefaults]
	// Offset: 0x1528a6fc
	// Params: [ Num(4) Size(0x1C) ]
	void OnPlayerMarking(uint64_t PlayerUin, int32_t OperationType, struct FVector MarkLocation, int32_t MarkingType);

	// Object: Function SOL.DFMAIRCVPurifierCharacter.OnControllerFsmTransitionEvent
	// Flags: [Final|Native|Public]
	// Offset: 0x1528a658
	// Params: [ Num(1) Size(0x1) ]
	void OnControllerFsmTransitionEvent(EGPFSMTransitionEvent Event);

	// Object: Function SOL.DFMAIRCVPurifierCharacter.GetWaterGunYawRotateSpeed
	// Flags: [Native|Event|Public|BlueprintEvent]
	// Offset: 0x1528a63c
	// Params: [ Num(1) Size(0x4) ]
	float GetWaterGunYawRotateSpeed();
};

// Object: Class SOL.DFMAIRCVPurifierComponent
// Size: 0x1C8 (Inherited: 0xF8)
struct UDFMAIRCVPurifierComponent : UActorComponent
{
	DEFINE_UE_CLASS_HELPERS(UDFMAIRCVPurifierComponent, "DFMAIRCVPurifierComponent")

	uint8_t Pad_0xF8[0x18]; // 0xF8(0x18)
	uint8_t bDebug : 1; // 0x110(0x1), Mask(0x1)
	uint8_t BitPad_0x110_1 : 7; // 0x110(0x1)
	uint8_t Pad_0x111[0x3]; // 0x111(0x3)
	float CurHP; // 0x114(0x4)
	float MaxHP; // 0x118(0x4)
	uint8_t Pad_0x11C[0x4]; // 0x11C(0x4)
	uint64_t ExplodeAttackID; // 0x120(0x8)
	struct FVector OilExplodePos; // 0x128(0xC)
	float LeakNormalOffset; // 0x134(0x4)
	struct FRotator LeakNormalRot; // 0x138(0xC)
	uint8_t Pad_0x144[0x4]; // 0x144(0x4)
	struct TMap<EDFMAIRCVPurifierFXType, struct FName> FXMap; // 0x148(0x50)
	struct FMulticastInlineDelegate OnPurifierHPChanged; // 0x198(0x10)
	struct TArray<struct UShapeComponent*> WeakParts; // 0x1A8(0x10)
	uint8_t Pad_0x1B8[0x10]; // 0x1B8(0x10)

	// Object: Function SOL.DFMAIRCVPurifierComponent.PlayWeakPartFlameFX
	// Flags: [Net|NetReliableNative|Event|NetMulticast|Public|HasDefaults]
	// Offset: 0x1528afcc
	// Params: [ Num(3) Size(0x19) ]
	void PlayWeakPartFlameFX(struct FVector FXLocation, struct FVector FXNormal, EDFMAIRCVPurifierFXType Type);

	// Object: DelegateFunction SOL.DFMAIRCVPurifierComponent.OnPurifierHPChanged__DelegateSignature
	// Flags: [MulticastDelegate|Public|Delegate]
	// Offset: 0x101d2e88
	// Params: [ Num(1) Size(0x1) ]
	void OnPurifierHPChanged__DelegateSignature(EDFMAIRCVPurifierFXType FXType);

	// Object: Function SOL.DFMAIRCVPurifierComponent.OnHPChanged
	// Flags: [Final|Native|Public]
	// Offset: 0x1528af98
	// Params: [ Num(1) Size(0x1) ]
	EDFMAIRCVPurifierFXType OnHPChanged();

	// Object: Function SOL.DFMAIRCVPurifierComponent.OnCharacterDead
	// Flags: [Final|Native|Public]
	// Offset: 0x1528ae80
	// Params: [ Num(3) Size(0x18) ]
	void OnCharacterDead(struct AGPCharacterBase* CHARACTER, struct AController* Killer, struct UDamageType* DamageType);

	// Object: Function SOL.DFMAIRCVPurifierComponent.HitWeakPartCheck
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x1528ad0c
	// Params: [ Num(3) Size(0xC81) ]
	uint8_t HitWeakPartCheck(const struct FDamageSourceInfo& SourceInfo, const struct FDamageResultInfo& DamageResult);
};

// Object: Class SOL.DFInteractableCompProxy_RCV
// Size: 0x138 (Inherited: 0x138)
struct UDFInteractableCompProxy_RCV : UDFInteractableCompProxy
{
	DEFINE_UE_CLASS_HELPERS(UDFInteractableCompProxy_RCV, "DFInteractableCompProxy_RCV")
};

// Object: Class SOL.DFInteractableComponent_RCV
// Size: 0x6A8 (Inherited: 0x6A0)
struct UDFInteractableComponent_RCV : UDFInteractableComponentBase
{
	DEFINE_UE_CLASS_HELPERS(UDFInteractableComponent_RCV, "DFInteractableComponent_RCV")

	struct FGameplayTag Tag_RCVDisconnect; // 0x6A0(0x8)
};

// Object: Class SOL.DFMAIRCVPurifierController
// Size: 0x11E0 (Inherited: 0x11E0)
struct ADFMAIRCVPurifierController : ADFMAIController
{
	DEFINE_UE_CLASS_HELPERS(ADFMAIRCVPurifierController, "DFMAIRCVPurifierController")
};

// Object: Class SOL.DFMAITask_Boss08Dodge
// Size: 0xD0 (Inherited: 0x70)
struct UDFMAITask_Boss08Dodge : UBTTaskNode
{
	DEFINE_UE_CLASS_HELPERS(UDFMAITask_Boss08Dodge, "DFMAITask_Boss08Dodge")

	struct FName ActingName; // 0x6C(0x8)
	struct FName CustomStateName; // 0x78(0x8)
	struct FGameplayTagContainer EndStateTags; // 0x80(0x20)
	struct FGameplayTagContainer MotionStateTags; // 0xA0(0x20)
	struct UPathMotionAction* MotionActionClass; // 0xC0(0x8)
	uint8_t bStartOnNotifyMarkPos : 1; // 0xC8(0x1), Mask(0x1)
	uint8_t BitPad_0xC8_1 : 7; // 0xC8(0x1)
	uint8_t Pad_0xC9[0x7]; // 0xC9(0x7)
};

// Object: Class SOL.DFMAITask_WaterGunShoot
// Size: 0x70 (Inherited: 0x70)
struct UDFMAITask_WaterGunShoot : UBTTaskNode
{
	DEFINE_UE_CLASS_HELPERS(UDFMAITask_WaterGunShoot, "DFMAITask_WaterGunShoot")

	EDFMAIWaterGunFireMode FireMode; // 0x69(0x1)
	float DurationTime; // 0x6C(0x4)
};

// Object: Class SOL.DFMAIWaterGunComponent
// Size: 0x218 (Inherited: 0xF8)
struct UDFMAIWaterGunComponent : UActorComponent
{
	DEFINE_UE_CLASS_HELPERS(UDFMAIWaterGunComponent, "DFMAIWaterGunComponent")

	uint8_t Pad_0xF8[0x18]; // 0xF8(0x18)
	struct TArray<struct FDFMAIWaterGunFireModeConfig> FireModeConfigs; // 0x110(0x10)
	struct FString GunMeshName; // 0x120(0x10)
	int32_t DripGenCheckCount; // 0x130(0x4)
	uint8_t Pad_0x134[0x4]; // 0x134(0x4)
	struct AAiBuffArea* BuffAreaClass; // 0x138(0x8)
	uint8_t Pad_0x140[0x28]; // 0x140(0x28)
	struct UFXResourceContainerComponent* ClientFireFXContainer; // 0x168(0x8)
	uint8_t Pad_0x170[0x8]; // 0x170(0x8)
	struct ADFMAICharacter* OwnerCharacter; // 0x178(0x8)
	struct USkeletalMeshComponent* ClientGunSkeletalMeshComponent; // 0x180(0x8)
	uint8_t Pad_0x188[0x18]; // 0x188(0x18)
	struct TMap<struct AGPCharacter*, float> DamageTargetMap; // 0x1A0(0x50)
	uint8_t Pad_0x1F0[0x28]; // 0x1F0(0x28)

	// Object: Function SOL.DFMAIWaterGunComponent.GetFireStartAndEndPoint
	// Flags: [Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(3) Size(0x110) ]
	void GetFireStartAndEndPoint(const struct FDFMAIWaterGunFireModeConfig& FireConfig, struct FVector& OutStartPos, struct FVector& OutEndPos);

	// Object: Function SOL.DFMAIWaterGunComponent.Broadcast_StopFire
	// Flags: [Net|NetReliableNative|Event|NetMulticast|Public]
	// Offset: 0x1528bd00
	// Params: [ Num(1) Size(0x24) ]
	void Broadcast_StopFire(struct FDFMAIWaterGunFireData FireData);

	// Object: Function SOL.DFMAIWaterGunComponent.Broadcast_StartFire
	// Flags: [Net|NetReliableNative|Event|NetMulticast|Public]
	// Offset: 0x1528bc44
	// Params: [ Num(1) Size(0x24) ]
	void Broadcast_StartFire(struct FDFMAIWaterGunFireData FireData);

	// Object: Function SOL.DFMAIWaterGunComponent.Broadcast_Firing
	// Flags: [Net|Native|Event|NetMulticast|Public]
	// Offset: 0x1528bb88
	// Params: [ Num(1) Size(0x24) ]
	void Broadcast_Firing(struct FDFMAIWaterGunFireData FireData);

	// Object: Function SOL.DFMAIWaterGunComponent.Broadcast_DebugDrawHitTarget
	// Flags: [Net|Native|Event|NetMulticast|Public|HasDefaults]
	// Offset: 0x1528ba5c
	// Params: [ Num(3) Size(0x24) ]
	void Broadcast_DebugDrawHitTarget(struct FVector Source, struct FVector Target1, struct FVector Target2);

	// Object: Function SOL.DFMAIWaterGunComponent.Broadcast_DebugDrawDamageConeBox
	// Flags: [Net|Native|Event|NetMulticast|Public|HasDefaults]
	// Offset: 0x1528b798
	// Params: [ Num(9) Size(0x6C) ]
	void Broadcast_DebugDrawDamageConeBox(struct FVector Source, struct FVector ConeEndCenter, struct FVector ConeEndTop, struct FVector ConeEndBottom, struct FVector ConeEndLeft, struct FVector ConeEndRight, struct FVector BoxCenter, struct FVector BoxExtent, struct FRotator BoxRotation);
};

// Object: Class SOL.DFMAIWaterTankComponent
// Size: 0x190 (Inherited: 0xF8)
struct UDFMAIWaterTankComponent : UActorComponent
{
	DEFINE_UE_CLASS_HELPERS(UDFMAIWaterTankComponent, "DFMAIWaterTankComponent")

	uint8_t Pad_0xF8[0x18]; // 0xF8(0x18)
	struct FString WaterTankMeshName; // 0x110(0x10)
	float MaxHealth; // 0x120(0x4)
	struct FName DamagedFX; // 0x124(0x8)
	struct FName DamagedFxBoneName; // 0x12C(0x8)
	uint8_t Pad_0x134[0x4]; // 0x134(0x4)
	struct TArray<struct FDFMAIWaterTankDamagedFxConfig> DamagedFXConfig; // 0x138(0x10)
	struct FName ExplodeFX; // 0x148(0x8)
	float ExplodeRadius; // 0x150(0x4)
	float ExplodeDamage; // 0x154(0x4)
	int32_t AttackValueId; // 0x158(0x4)
	int32_t DripCount; // 0x15C(0x4)
	float DripRadius; // 0x160(0x4)
	uint8_t Pad_0x164[0x4]; // 0x164(0x4)
	struct AAiBuffArea* BuffAreaClass; // 0x168(0x8)
	float CurrentHealth; // 0x170(0x4)
	int32_t ShowDamagedDecalCount; // 0x174(0x4)
	struct UFXResourceContainerComponent* ExplodeFXComponent; // 0x178(0x8)
	struct TArray<struct UDecalComponent*> DecalComponents; // 0x180(0x10)

	// Object: Function SOL.DFMAIWaterTankComponent.OnRep_ShowDamagedDecalCount
	// Flags: [Final|Native|Protected]
	// Offset: 0x1528c0c0
	// Params: [ Num(0) Size(0x0) ]
	void OnRep_ShowDamagedDecalCount();

	// Object: Function SOL.DFMAIWaterTankComponent.OnRep_CurrentHealth
	// Flags: [Final|Native|Protected]
	// Offset: 0x1528c0ac
	// Params: [ Num(0) Size(0x0) ]
	void OnRep_CurrentHealth();

	// Object: Function SOL.DFMAIWaterTankComponent.HitWaterTankCheck
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x1528befc
	// Params: [ Num(4) Size(0xC89) ]
	uint8_t HitWaterTankCheck(const struct FDamageSourceInfo& SourceInfo, const struct FDamageResultInfo& DamageResult, struct UPrimitiveComponent* TankMeshComp);

	// Object: Function SOL.DFMAIWaterTankComponent.Broadcast_HitWaterTank
	// Flags: [Net|Native|Event|NetMulticast|Public]
	// Offset: 0x1528bee0
	// Params: [ Num(0) Size(0x0) ]
	void Broadcast_HitWaterTank();

	// Object: Function SOL.DFMAIWaterTankComponent.Broadcast_Explode
	// Flags: [Net|NetReliableNative|Event|NetMulticast|Protected]
	// Offset: 0x1528be34
	// Params: [ Num(1) Size(0x8) ]
	void Broadcast_Explode(struct AActor* Maker);
};

// Object: Class SOL.DFMContainerRandomManager
// Size: 0x1F8 (Inherited: 0xF8)
struct UDFMContainerRandomManager : UActorComponent
{
	DEFINE_UE_CLASS_HELPERS(UDFMContainerRandomManager, "DFMContainerRandomManager")

	float SpawnInterval; // 0xF8(0x4)
	int32_t SpawnNumPerFrame; // 0xFC(0x4)
	uint8_t Pad_0x100[0x50]; // 0x100(0x50)
	struct TArray<struct TWeakObjectPtr<struct AInteractorBase>> ContainerArray; // 0x150(0x10)
	uint8_t Pad_0x160[0x10]; // 0x160(0x10)
	struct TArray<struct UInteractorData*> FinalInteractorDatas; // 0x170(0x10)
	uint8_t Pad_0x180[0x70]; // 0x180(0x70)
	int32_t SendTLogGroupCount; // 0x1F0(0x4)
	uint8_t Pad_0x1F4[0x4]; // 0x1F4(0x4)

	// Object: Function SOL.DFMContainerRandomManager.RandomContainer
	// Flags: [Final|RequiredAPI|Native|Public|BlueprintCallable]
	// Offset: 0x1528c0fc
	// Params: [ Num(1) Size(0x1) ]
	void RandomContainer(uint8_t bFromGM);

	// Object: Function SOL.DFMContainerRandomManager.OnMatchRealStart
	// Flags: [Final|Native|Protected]
	// Offset: 0x1528c0e8
	// Params: [ Num(0) Size(0x0) ]
	void OnMatchRealStart();
};

// Object: Class SOL.CapacitorChainNode
// Size: 0x60 (Inherited: 0x28)
struct UCapacitorChainNode : UObject
{
	DEFINE_UE_CLASS_HELPERS(UCapacitorChainNode, "CapacitorChainNode")

	uint8_t Pad_0x28[0x8]; // 0x28(0x8)
	struct ACapacitorRoom* CurrentRoom; // 0x30(0x8)
	uint8_t Pad_0x38[0x18]; // 0x38(0x18)
	struct AInventoryPickup* CapacitorPickup; // 0x50(0x8)
	struct UCapacitorChainNode* NextNode; // 0x58(0x8)
};

// Object: Class SOL.DFMRoomRandomManager
// Size: 0x390 (Inherited: 0xF8)
struct UDFMRoomRandomManager : UActorComponent
{
	DEFINE_UE_CLASS_HELPERS(UDFMRoomRandomManager, "DFMRoomRandomManager")

	int32_t MaxChainStepNum; // 0xF8(0x4)
	float SpawnInterval; // 0xFC(0x4)
	int32_t SpawnNumPerFrame; // 0x100(0x4)
	uint8_t Pad_0x104[0x2C]; // 0x104(0x2C)
	struct TArray<struct FRandomHighValueRoomTableRow> RandomHighValueRoomTableRows; // 0x130(0x10)
	struct TArray<struct FHighValueRoomExpectationTableRow> HighValueRoomExpectationTableRows; // 0x140(0x10)
	uint8_t Pad_0x150[0x50]; // 0x150(0x50)
	struct TArray<struct AHighValueRoom*> SelectedHighValueRooms; // 0x1A0(0x10)
	struct TArray<struct FRandomCapacitorTableRow> RandomCapacitorTableRows; // 0x1B0(0x10)
	struct TArray<struct FCapacitorRoomGraphTableRow> CapacitorRoomGraphTableRows; // 0x1C0(0x10)
	struct TArray<struct FCapacitorRoomRankTableRow> CapacitorRoomRankTableRows; // 0x1D0(0x10)
	struct TArray<struct FCapacitorRoomExpectationTableRow> CapacitorRoomExpectationTableRows; // 0x1E0(0x10)
	uint8_t Pad_0x1F0[0x50]; // 0x1F0(0x50)
	struct TArray<struct ACapacitorRoom*> SelectedCapacitorRooms; // 0x240(0x10)
	struct TMap<struct ACapacitorRoom*, int32_t> CapacitorRoomRankMap; // 0x250(0x50)
	struct TArray<struct UCapacitorChainNode*> CapacitorChains; // 0x2A0(0x10)
	struct TArray<struct TWeakObjectPtr<struct AInteractorBase>> ContainerArray; // 0x2B0(0x10)
	struct TArray<struct TWeakObjectPtr<struct AInventoryPickup>> CapacitorPickupArray; // 0x2C0(0x10)
	uint8_t Pad_0x2D0[0x10]; // 0x2D0(0x10)
	struct TArray<struct ACapacitorRoom*> TLogSelectedCapacitorRooms; // 0x2E0(0x10)
	uint8_t Pad_0x2F0[0xA0]; // 0x2F0(0xA0)

	// Object: Function SOL.DFMRoomRandomManager.RandomRooms
	// Flags: [Final|RequiredAPI|Native|Public]
	// Offset: 0x1528c5d4
	// Params: [ Num(2) Size(0x10) ]
	void RandomRooms(uint8_t bFromGM, uint64_t InRandSeed);

	// Object: Function SOL.DFMRoomRandomManager.RandomHighValueRoom
	// Flags: [Final|Native|Protected]
	// Offset: 0x1528c5c0
	// Params: [ Num(0) Size(0x0) ]
	void RandomHighValueRoom();

	// Object: Function SOL.DFMRoomRandomManager.RandomCapacitorRoom
	// Flags: [Final|Native|Protected]
	// Offset: 0x1528c5ac
	// Params: [ Num(0) Size(0x0) ]
	void RandomCapacitorRoom();

	// Object: Function SOL.DFMRoomRandomManager.RandHighValueRoomContainersAndPerformance
	// Flags: [Final|Native|Protected]
	// Offset: 0x1528c598
	// Params: [ Num(0) Size(0x0) ]
	void RandHighValueRoomContainersAndPerformance();

	// Object: Function SOL.DFMRoomRandomManager.RandCapacitorRoomContainersByRank
	// Flags: [Final|Native|Protected]
	// Offset: 0x1528c584
	// Params: [ Num(0) Size(0x0) ]
	void RandCapacitorRoomContainersByRank();

	// Object: Function SOL.DFMRoomRandomManager.OnMatchRealStart
	// Flags: [Final|Native|Protected]
	// Offset: 0x1528c570
	// Params: [ Num(0) Size(0x0) ]
	void OnMatchRealStart();

	// Object: Function SOL.DFMRoomRandomManager.OnCapacitorLockInteracted
	// Flags: [Final|Native|Private]
	// Offset: 0x1528c494
	// Params: [ Num(2) Size(0x10) ]
	void OnCapacitorLockInteracted(struct AInteractorBase* TargetInteractor, struct AGPCharacter* OperatorCharacter);

	// Object: Function SOL.DFMRoomRandomManager.Multicast_ShowDebugInfo
	// Flags: [Net|NetReliableNative|Event|NetMulticast|Protected]
	// Offset: 0x1528c368
	// Params: [ Num(3) Size(0x20) ]
	void Multicast_ShowDebugInfo(uint64_t InRandSeed, struct TArray<struct FString> DebugLines, uint64_t TargetPlayerUin);

	// Object: Function SOL.DFMRoomRandomManager.Multicast_ClearDebugInfo
	// Flags: [Net|NetReliableNative|Event|NetMulticast|Protected]
	// Offset: 0x1528c2bc
	// Params: [ Num(1) Size(0x8) ]
	void Multicast_ClearDebugInfo(uint64_t TargetPlayerUin);

	// Object: Function SOL.DFMRoomRandomManager.InitRandSeed
	// Flags: [Final|Native|Protected]
	// Offset: 0x1528c218
	// Params: [ Num(1) Size(0x8) ]
	void InitRandSeed(uint64_t InRandSeed);

	// Object: Function SOL.DFMRoomRandomManager.InitHighValueRoomTableRows
	// Flags: [Final|Native|Protected]
	// Offset: 0x1528c204
	// Params: [ Num(0) Size(0x0) ]
	void InitHighValueRoomTableRows();

	// Object: Function SOL.DFMRoomRandomManager.InitCapacitorDataTableRows
	// Flags: [Final|Native|Protected]
	// Offset: 0x1528c1f0
	// Params: [ Num(0) Size(0x0) ]
	void InitCapacitorDataTableRows();

	// Object: Function SOL.DFMRoomRandomManager.CacheAllHighValueRooms
	// Flags: [Final|Native|Protected]
	// Offset: 0x1528c1dc
	// Params: [ Num(0) Size(0x0) ]
	void CacheAllHighValueRooms();

	// Object: Function SOL.DFMRoomRandomManager.CacheAllCapacitorRooms
	// Flags: [Final|Native|Protected]
	// Offset: 0x1528c1c8
	// Params: [ Num(0) Size(0x0) ]
	void CacheAllCapacitorRooms();
};

// Object: Class SOL.DFSOLAIHelicopter
// Size: 0x1E60 (Inherited: 0x1E60)
struct ADFSOLAIHelicopter : ADFMAIHelicopter
{
	DEFINE_UE_CLASS_HELPERS(ADFSOLAIHelicopter, "DFSOLAIHelicopter")
};

// Object: Class SOL.FalloutArea
// Size: 0x3B0 (Inherited: 0x370)
struct AFalloutArea : AActor
{
	DEFINE_UE_CLASS_HELPERS(AFalloutArea, "FalloutArea")

	struct USceneComponent* SceneComponent; // 0x370(0x8)
	struct USplineAreaComponent* SplineAreaComponent; // 0x378(0x8)
	float DetectHeight; // 0x380(0x4)
	float RadiationInterval; // 0x384(0x4)
	float RadiationPerTick; // 0x388(0x4)
	uint8_t Pad_0x38C[0x24]; // 0x38C(0x24)
};

// Object: Class SOL.FalloutInterface
// Size: 0x28 (Inherited: 0x28)
struct IFalloutInterface : IInterface
{
	DEFINE_UE_CLASS_HELPERS(IFalloutInterface, "FalloutInterface")

	// Object: Function SOL.FalloutInterface.GetTransferredRadiationBuffID
	// Flags: [Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const]
	// Offset: 0x1528f210
	// Params: [ Num(1) Size(0x4) ]
	int32_t GetTransferredRadiationBuffID();

	// Object: Function SOL.FalloutInterface.GetFalloutValue
	// Flags: [Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const]
	// Offset: 0x1528f1d4
	// Params: [ Num(1) Size(0x4) ]
	float GetFalloutValue();
};

// Object: Class SOL.FalloutManager
// Size: 0x2B0 (Inherited: 0xF8)
struct UFalloutManager : UActorComponent
{
	DEFINE_UE_CLASS_HELPERS(UFalloutManager, "FalloutManager")

	uint8_t Pad_0xF8[0x50]; // 0xF8(0x50)
	struct TArray<struct TWeakObjectPtr<struct AFalloutArea>> FalloutAreas; // 0x148(0x10)
	uint8_t Pad_0x158[0x50]; // 0x158(0x50)
	struct TMap<float, float> BucketAccumulatedTime; // 0x1A8(0x50)
	uint8_t Pad_0x1F8[0x50]; // 0x1F8(0x50)
	struct TArray<struct TWeakObjectPtr<struct AInteractorBase>> FalloutContainers; // 0x248(0x10)
	uint8_t Pad_0x258[0x58]; // 0x258(0x58)

	// Object: Function SOL.FalloutManager.OnMatchRealStart
	// Flags: [Final|Native|Protected]
	// Offset: 0x1528f578
	// Params: [ Num(0) Size(0x0) ]
	void OnMatchRealStart();

	// Object: Function SOL.FalloutManager.OnInteractorDoInteract
	// Flags: [Final|Native|Public]
	// Offset: 0x1528f3bc
	// Params: [ Num(4) Size(0x28) ]
	void OnInteractorDoInteract(uint64_t Uin, struct AActor* Actor, EInteractorType InteractorType, struct FString Params);
};

// Object: Class SOL.FootballGate
// Size: 0x3A0 (Inherited: 0x370)
struct AFootballGate : AActor
{
	DEFINE_UE_CLASS_HELPERS(AFootballGate, "FootballGate")

	struct UBoxComponent* CachedGateBox; // 0x370(0x8)
	struct FMulticastInlineDelegate OnFootballEnterForAI; // 0x378(0x10)
	uint8_t bIsStaticGate : 1; // 0x388(0x1), Mask(0x1)
	uint8_t BitPad_0x388_1 : 7; // 0x388(0x1)
	uint8_t bIsAIGate : 1; // 0x389(0x1), Mask(0x1)
	uint8_t BitPad_0x389_1 : 7; // 0x389(0x1)
	uint8_t bIsNoRep : 1; // 0x38A(0x1), Mask(0x1)
	uint8_t BitPad_0x38A_1 : 7; // 0x38A(0x1)
	uint8_t Pad_0x38B[0x1]; // 0x38B(0x1)
	float NearFootDis; // 0x38C(0x4)
	float SweepRadius; // 0x390(0x4)
	float GateHeight; // 0x394(0x4)
	float CheckOverlapUpOffset; // 0x398(0x4)
	uint8_t Pad_0x39C[0x4]; // 0x39C(0x4)

	// Object: Function SOL.FootballGate.OnEndOverlap
	// Flags: [Final|Native|Protected]
	// Offset: 0x1528f87c
	// Params: [ Num(4) Size(0x1C) ]
	void OnEndOverlap(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex);

	// Object: Function SOL.FootballGate.OnBeginOverlap
	// Flags: [Final|Native|Protected|HasOutParms]
	// Offset: 0x1528f684
	// Params: [ Num(6) Size(0xA8) ]
	void OnBeginOverlap(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, uint8_t bFromSweep, const struct FHitResult& SweepResult);

	// Object: Function SOL.FootballGate.BP_GetRightGateFootLoc
	// Flags: [Event|Protected|HasDefaults|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(1) Size(0xC) ]
	struct FVector BP_GetRightGateFootLoc();

	// Object: Function SOL.FootballGate.BP_GetLeftGateFootLoc
	// Flags: [Event|Protected|HasDefaults|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(1) Size(0xC) ]
	struct FVector BP_GetLeftGateFootLoc();

	// Object: Function SOL.FootballGate.BP_GetGateBox
	// Flags: [Event|Protected|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(1) Size(0x8) ]
	struct UBoxComponent* BP_GetGateBox();

	// Object: Function SOL.FootballGate.BP_GetAwardLoc
	// Flags: [Event|Protected|HasDefaults|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(1) Size(0xC) ]
	struct FVector BP_GetAwardLoc();
};

// Object: Class SOL.FootballSignWidget
// Size: 0x338 (Inherited: 0x2F8)
struct UFootballSignWidget : UUserWidget
{
	DEFINE_UE_CLASS_HELPERS(UFootballSignWidget, "FootballSignWidget")

	struct TArray<struct FName> SignTextNames; // 0x2F8(0x10)
	struct TArray<struct UTextBlock*> SignTexts; // 0x308(0x10)
	struct TArray<struct FName> LineNames; // 0x318(0x10)
	struct TArray<struct UDFImage*> LineImages; // 0x328(0x10)
};

// Object: Class SOL.GameMode_SOL
// Size: 0x8E0 (Inherited: 0x8C0)
struct AGameMode_SOL : AGameMode_RuleBase
{
	DEFINE_UE_CLASS_HELPERS(AGameMode_SOL, "GameMode_SOL")

	struct UDFMContainerRandomManager* ContainerRandomManager; // 0x8C0(0x8)
	struct UDFMRoomRandomManager* RoomRandomManager; // 0x8C8(0x8)
	struct USOLGameRuleComponent* SOLGameRuleComponent; // 0x8D0(0x8)
	uint8_t Pad_0x8D8[0x8]; // 0x8D8(0x8)
};

// Object: Class SOL.GameState_SOL
// Size: 0x11A0 (Inherited: 0x11A0)
struct AGameState_SOL : AGameState_PVPVE
{
	DEFINE_UE_CLASS_HELPERS(AGameState_SOL, "GameState_SOL")
};

// Object: Class SOL.ValueRoom
// Size: 0x3E0 (Inherited: 0x370)
struct AValueRoom : AActor
{
	DEFINE_UE_CLASS_HELPERS(AValueRoom, "ValueRoom")

	uint8_t Pad_0x370[0x40]; // 0x370(0x40)
	struct FName RoomId; // 0x3B0(0x8)
	struct FName GroupID; // 0x3B8(0x8)
	struct USceneComponent* SceneComponent; // 0x3C0(0x8)
	struct UBoxComponent* DefaultTriggerVolume; // 0x3C8(0x8)
	struct TArray<struct UBoxComponent*> TriggerVolumes; // 0x3D0(0x10)
};

// Object: Class SOL.CapacitorRoom
// Size: 0x440 (Inherited: 0x3E0)
struct ACapacitorRoom : AValueRoom
{
	DEFINE_UE_CLASS_HELPERS(ACapacitorRoom, "CapacitorRoom")

	struct TSoftObjectPtr<AInteractor_CapacitorLock> CapacitorLock; // 0x3E0(0x28)
	float CapacitorDistance; // 0x408(0x4)
	uint8_t Pad_0x40C[0x4]; // 0x40C(0x4)
	struct TSoftObjectPtr<ACapacitorSpawner> NextCapacitorSpawner; // 0x410(0x28)
	int32_t RoomRank; // 0x438(0x4)
	uint8_t Pad_0x43C[0x4]; // 0x43C(0x4)
};

// Object: Class SOL.HighValueRoom
// Size: 0x428 (Inherited: 0x3E0)
struct AHighValueRoom : AValueRoom
{
	DEFINE_UE_CLASS_HELPERS(AHighValueRoom, "HighValueRoom")

	struct FString SupriseLevelPathName_High_HD; // 0x3E0(0x10)
	struct FString SupriseLevelPathName_Low_HD; // 0x3F0(0x10)
	struct FString SupriseLevelPathName_High_Mobile; // 0x400(0x10)
	struct FString SupriseLevelPathName_Low_Mobile; // 0x410(0x10)
	uint8_t bShowHighValuePerformance : 1; // 0x420(0x1), Mask(0x1)
	uint8_t BitPad_0x420_1 : 7; // 0x420(0x1)
	uint8_t Pad_0x421[0x7]; // 0x421(0x7)

	// Object: Function SOL.HighValueRoom.SetIsHighValue
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x1528fa44
	// Params: [ Num(1) Size(0x1) ]
	void SetIsHighValue(uint8_t bHighValue);
};

// Object: Class SOL.InteractExecutor_Oscilloscope
// Size: 0xF0 (Inherited: 0xF0)
struct UInteractExecutor_Oscilloscope : UInteractorBaseExecutor
{
	DEFINE_UE_CLASS_HELPERS(UInteractExecutor_Oscilloscope, "InteractExecutor_Oscilloscope")
};

// Object: Class SOL.Interactor_BlowdownValve
// Size: 0x1090 (Inherited: 0x1050)
struct AInteractor_BlowdownValve : AInteractorBaseProxy
{
	DEFINE_UE_CLASS_HELPERS(AInteractor_BlowdownValve, "Interactor_BlowdownValve")

	struct USceneComponent* root; // 0x1050(0x8)
	struct FName WaterDropTag; // 0x1058(0x8)
	float OpenDelayTime; // 0x1060(0x4)
	uint8_t isValveOpen : 1; // 0x1064(0x1), Mask(0x1)
	uint8_t BitPad_0x1064_1 : 7; // 0x1064(0x1)
	uint8_t Pad_0x1065[0x3]; // 0x1065(0x3)
	struct UGPAudioEventAsset* OpenAudioEvent; // 0x1068(0x8)
	uint8_t bAutoNoForceFinish : 1; // 0x1070(0x1), Mask(0x1)
	uint8_t BitPad_0x1070_1 : 7; // 0x1070(0x1)
	uint8_t Pad_0x1071[0x1F]; // 0x1071(0x1F)

	// Object: Function SOL.Interactor_BlowdownValve.OnRep_isValveOpen
	// Flags: [Final|Native|Public]
	// Offset: 0x1528fc5c
	// Params: [ Num(0) Size(0x0) ]
	void OnRep_isValveOpen();

	// Object: Function SOL.Interactor_BlowdownValve.ClientPlayOpenVoice
	// Flags: [Net|NetReliableNative|Event|NetMulticast|Public|NetClient]
	// Offset: 0x1528fc40
	// Params: [ Num(0) Size(0x0) ]
	void ClientPlayOpenVoice();

	// Object: Function SOL.Interactor_BlowdownValve.BP_OnValveOpen
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(1) Size(0x1) ]
	void BP_OnValveOpen(uint8_t bOpen);
};

// Object: Class SOL.Interactor_Football
// Size: 0x488 (Inherited: 0x370)
struct AInteractor_Football : AActor
{
	DEFINE_UE_CLASS_HELPERS(AInteractor_Football, "Interactor_Football")

	uint8_t Pad_0x370[0x28]; // 0x370(0x28)
	struct FMulticastInlineDelegate OnFootballHitCharacter; // 0x398(0x10)
	float UnderWaterDestroyDistance; // 0x3A8(0x4)
	uint8_t Pad_0x3AC[0x20]; // 0x3AC(0x20)
	uint8_t bUseLastVelWhenHitWall : 1; // 0x3CC(0x1), Mask(0x1)
	uint8_t BitPad_0x3CC_1 : 7; // 0x3CC(0x1)
	uint8_t Pad_0x3CD[0x3]; // 0x3CD(0x3)
	float HitCharacterCooldown; // 0x3D0(0x4)
	uint8_t Pad_0x3D4[0xC]; // 0x3D4(0xC)
	struct USphereComponent* SphereCollision; // 0x3E0(0x8)
	struct UGPStaticMeshComponent* BallMesh; // 0x3E8(0x8)
	struct UInteractorBallSimComponent* BallSimComponent; // 0x3F0(0x8)
	struct FName ItemID; // 0x3F8(0x8)
	uint64_t ItemGid; // 0x400(0x8)
	uint8_t Pad_0x408[0x8]; // 0x408(0x8)
	struct FName InitItemID; // 0x410(0x8)
	uint64_t InitItemGid; // 0x418(0x8)
	uint8_t bIsNormal : 1; // 0x420(0x1), Mask(0x1)
	uint8_t BitPad_0x420_1 : 7; // 0x420(0x1)
	uint8_t Pad_0x421[0x1F]; // 0x421(0x1F)
	EFootballState CurrentFootballState; // 0x440(0x1)
	uint8_t Pad_0x441[0x3]; // 0x441(0x3)
	float MaxHealth; // 0x444(0x4)
	uint8_t Pad_0x448[0x8]; // 0x448(0x8)
	struct TArray<int32_t> IngoreAttackerValueIdArray; // 0x450(0x10)
	int32_t ExplodeAttackerValueId; // 0x460(0x4)
	struct FName ExplodeEffect; // 0x464(0x8)
	struct FName ExplodeStaggerName; // 0x46C(0x8)
	float DelayExplodeToDestroyedTime; // 0x474(0x4)
	uint8_t Pad_0x478[0x8]; // 0x478(0x8)
	struct TWeakObjectPtr<struct AGPCharacter> CachedDetonateCharacter; // 0x480(0x8)

	// Object: Function SOL.Interactor_Football.ThrowBall
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x1528fe44
	// Params: [ Num(2) Size(0x18) ]
	void ThrowBall(struct FVector ThrowDirection, struct FVector CharacterVelocity);

	// Object: Function SOL.Interactor_Football.OnRep_ItemID
	// Flags: [Final|Native|Protected]
	// Offset: 0x1528fe30
	// Params: [ Num(0) Size(0x0) ]
	void OnRep_ItemID();

	// Object: Function SOL.Interactor_Football.OnRep_CurrentFootballState
	// Flags: [Final|Native|Protected]
	// Offset: 0x1528fe1c
	// Params: [ Num(0) Size(0x0) ]
	void OnRep_CurrentFootballState();

	// Object: Function SOL.Interactor_Football.GetLastTouchedPlayer
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x1528fde8
	// Params: [ Num(1) Size(0x8) ]
	struct AGPCharacterBase* GetLastTouchedPlayer();

	// Object: Function SOL.Interactor_Football.GetBallVelocity
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x1528fdb0
	// Params: [ Num(1) Size(0xC) ]
	struct FVector GetBallVelocity();

	// Object: Function SOL.Interactor_Football.ApplyImpulse
	// Flags: [Final|Native|Protected|HasDefaults|BlueprintCallable]
	// Offset: 0x1528fd0c
	// Params: [ Num(1) Size(0xC) ]
	void ApplyImpulse(struct FVector Impulse);
};

// Object: Class SOL.Interactor_GiftTreasure
// Size: 0x10D8 (Inherited: 0x1050)
struct AInteractor_GiftTreasure : AInteractorBaseProxy
{
	DEFINE_UE_CLASS_HELPERS(AInteractor_GiftTreasure, "Interactor_GiftTreasure")

	struct FMulticastInlineDelegate OnTreasureCoverBegin; // 0x1050(0x10)
	struct AInteractorBaseProxy* CoverClass; // 0x1060(0x8)
	struct FGameplayTag CoverActionTag; // 0x1068(0x8)
	struct AInventoryPickup_Container* SearchContainerClass; // 0x1070(0x8)
	struct AInventoryPickup_Container* SendGiftContainerClass; // 0x1078(0x8)
	float UnLockDelayTime; // 0x1080(0x4)
	float MaxLockTime; // 0x1084(0x4)
	struct AInteractorBaseProxy* Treasure_Cover; // 0x1088(0x8)
	struct AInventoryPickup_Container* SearchContainer; // 0x1090(0x8)
	struct AInventoryPickup_Container* SendGiftContainer; // 0x1098(0x8)
	uint64_t OccupyPlayerUid; // 0x10A0(0x8)
	uint8_t Pad_0x10A8[0x10]; // 0x10A8(0x10)
	struct TWeakObjectPtr<struct UTreasureMgrComponent> TreasureMgrComponent; // 0x10B8(0x8)
	int32_t TreasureID; // 0x10C0(0x4)
	uint8_t Pad_0x10C4[0x4]; // 0x10C4(0x4)
	struct FString CacheMessageContent; // 0x10C8(0x10)

	// Object: Function SOL.Interactor_GiftTreasure.UnLockTreasure
	// Flags: [Final|Native|Public]
	// Offset: 0x152900e4
	// Params: [ Num(1) Size(0x8) ]
	void UnLockTreasure(uint64_t InPlayerUid);

	// Object: Function SOL.Interactor_GiftTreasure.ReallyUnLockTreasure
	// Flags: [Final|Native|Public]
	// Offset: 0x152900d0
	// Params: [ Num(0) Size(0x0) ]
	void ReallyUnLockTreasure();

	// Object: Function SOL.Interactor_GiftTreasure.OnLootingPlayerChange
	// Flags: [Final|Native|Public]
	// Offset: 0x1528ffe8
	// Params: [ Num(2) Size(0x9) ]
	void OnLootingPlayerChange(struct ADFMCharacter* CHARACTER, uint8_t bAddOrRemove);

	// Object: Function SOL.Interactor_GiftTreasure.LockTreasure
	// Flags: [Final|Native|Public]
	// Offset: 0x1528ff44
	// Params: [ Num(1) Size(0x8) ]
	void LockTreasure(uint64_t InPlayerUid);
};

// Object: Class SOL.Interactor_Mound
// Size: 0x1128 (Inherited: 0x1050)
struct AInteractor_Mound : AInteractorBaseProxy
{
	DEFINE_UE_CLASS_HELPERS(AInteractor_Mound, "Interactor_Mound")

	struct TSoftClassPtr<struct AInteractor_GiftTreasure*> SoftTreasureClass; // 0x1050(0x28)
	int32_t MoundID; // 0x1078(0x4)
	struct FGameplayTag CoverActionTag; // 0x107C(0x8)
	int32_t Distance; // 0x1084(0x4)
	struct TSoftObjectPtr<UGPAudioEventAsset> MoundIdleAudioEvent; // 0x1088(0x28)
	struct TSoftObjectPtr<UGPAudioEventAsset> MoundCoverEndAudioEvent; // 0x10B0(0x28)
	struct TWeakObjectPtr<struct AInteractor_GiftTreasure> GiftTreasure; // 0x10D8(0x8)
	struct TArray<uint64_t> ClientCoverPlayers; // 0x10E0(0x10)
	EMoundState CurrentState; // 0x10F0(0x1)
	uint8_t Pad_0x10F1[0x7]; // 0x10F1(0x7)
	struct UArrowComponent* TreasureSpawnPoint; // 0x10F8(0x8)
	uint8_t Pad_0x1100[0x28]; // 0x1100(0x28)

	// Object: Function SOL.Interactor_Mound.OnTreasureCoverBegin
	// Flags: [Native|Event|Public|BlueprintEvent]
	// Offset: 0x15290444
	// Params: [ Num(1) Size(0x8) ]
	void OnTreasureCoverBegin(struct ACHARACTER* InOperatorCharacter);

	// Object: Function SOL.Interactor_Mound.OnRep_GiftTreasure
	// Flags: [Final|Native|Protected]
	// Offset: 0x15290430
	// Params: [ Num(0) Size(0x0) ]
	void OnRep_GiftTreasure();

	// Object: Function SOL.Interactor_Mound.OnRep_CurrentState
	// Flags: [Final|Native|Protected]
	// Offset: 0x1529041c
	// Params: [ Num(0) Size(0x0) ]
	void OnRep_CurrentState();

	// Object: Function SOL.Interactor_Mound.OnLoadTreasureClass
	// Flags: [Final|Native|Public]
	// Offset: 0x1529034c
	// Params: [ Num(1) Size(0x10) ]
	void OnLoadTreasureClass(struct TArray<struct FSoftObjectPath> Assets);

	// Object: Function SOL.Interactor_Mound.BP_OnSwitchMoundState
	// Flags: [Event|Protected|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(1) Size(0x1) ]
	void BP_OnSwitchMoundState(EMoundState InState);
};

// Object: Class SOL.Interactor_Oscilloscope
// Size: 0x1068 (Inherited: 0x1050)
struct AInteractor_Oscilloscope : AInteractorBaseProxy
{
	DEFINE_UE_CLASS_HELPERS(AInteractor_Oscilloscope, "Interactor_Oscilloscope")

	struct FName HudName; // 0x1050(0x8)
	float DefaultRotaryKnobRotation; // 0x1058(0x4)
	int32_t Password; // 0x105C(0x4)
	struct AOscilloscopeScreen* OscilloscopeScreen; // 0x1060(0x8)

	// Object: Function SOL.Interactor_Oscilloscope.ServerTryInteract
	// Flags: [Final|Native|Public]
	// Offset: 0x152908e4
	// Params: [ Num(1) Size(0x8) ]
	void ServerTryInteract(struct AGPCharacter* InOptCharacter);

	// Object: Function SOL.Interactor_Oscilloscope.ServerStartOperate
	// Flags: [Final|Native|Public]
	// Offset: 0x15290840
	// Params: [ Num(1) Size(0x8) ]
	void ServerStartOperate(struct AGPCharacter* InOptCharacter);

	// Object: Function SOL.Interactor_Oscilloscope.ServerOpenPanel
	// Flags: [Final|Native|Public]
	// Offset: 0x1529079c
	// Params: [ Num(1) Size(0x8) ]
	void ServerOpenPanel(struct AGPCharacter* InOptCharacter);

	// Object: Function SOL.Interactor_Oscilloscope.ResetRotaryKnobRotation
	// Flags: [Final|Native|Public]
	// Offset: 0x15290788
	// Params: [ Num(0) Size(0x0) ]
	void ResetRotaryKnobRotation();

	// Object: Function SOL.Interactor_Oscilloscope.ClientTryInteract
	// Flags: [Final|Native|Public]
	// Offset: 0x152906e4
	// Params: [ Num(1) Size(0x8) ]
	void ClientTryInteract(struct ACHARACTER* InOptCharacter);

	// Object: Function SOL.Interactor_Oscilloscope.ClientOpenOscilloscopePanel
	// Flags: [Final|Native|Public]
	// Offset: 0x15290640
	// Params: [ Num(1) Size(0x8) ]
	void ClientOpenOscilloscopePanel(struct AGPCharacter* InOptCharacter);

	// Object: Function SOL.Interactor_Oscilloscope.BP_GetRotaryKnob
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(1) Size(0x8) ]
	struct USceneComponent* BP_GetRotaryKnob();

	// Object: Function SOL.Interactor_Oscilloscope.BP_GetOscilloscopeScreen
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x1529060c
	// Params: [ Num(1) Size(0x8) ]
	struct AOscilloscopeScreen* BP_GetOscilloscopeScreen();

	// Object: Function SOL.Interactor_Oscilloscope.AddRotaryKnobRotation
	// Flags: [Final|Native|Public]
	// Offset: 0x15290568
	// Params: [ Num(1) Size(0x4) ]
	void AddRotaryKnobRotation(float InRotation);
};

// Object: Class SOL.Interactor_ParkourStart
// Size: 0x1190 (Inherited: 0x1050)
struct AInteractor_ParkourStart : AInteractorBaseProxy
{
	DEFINE_UE_CLASS_HELPERS(AInteractor_ParkourStart, "Interactor_ParkourStart")

	int32_t ParkourId; // 0x1050(0x4)
	uint8_t Pad_0x1054[0x4]; // 0x1054(0x4)
	struct TArray<struct AInteractor_ParkourRank*> ParkourRanks; // 0x1058(0x10)
	float MaxTime; // 0x1068(0x4)
	int32_t FirstCheckPointWaitTime; // 0x106C(0x4)
	struct FName ScreenEffectName; // 0x1070(0x8)
	float ScreenEffectAddTime; // 0x1078(0x4)
	float HudShowDelayTime; // 0x107C(0x4)
	struct FName ParkourHudViewName; // 0x1080(0x8)
	struct AFXProxyActor* CheckpointEFXTemplate; // 0x1088(0x8)
	struct AFXProxyActor* CheckpointEFXActor; // 0x1090(0x8)
	struct AFXProxyActor* StartCheckpointEFXTemplate; // 0x1098(0x8)
	struct AFXProxyActor* StartCheckpointEFXActor; // 0x10A0(0x8)
	struct FString CharacterVOatEnd; // 0x10A8(0x10)
	struct TSoftObjectPtr<UGPAudioEventAsset> RelinkEquipAudioEvent; // 0x10B8(0x28)
	struct FString EditResult; // 0x10E0(0x10)
	struct FVector PointCollisionSize; // 0x10F0(0xC)
	uint8_t bUseDataTableSetting : 1; // 0x10FC(0x1), Mask(0x1)
	uint8_t BitPad_0x10FC_1 : 7; // 0x10FC(0x1)
	uint8_t Pad_0x10FD[0x3]; // 0x10FD(0x3)
	struct TArray<struct UCapsuleComponent*> ParkourCheckPoints; // 0x1100(0x10)
	struct TArray<struct FTransform> CachedTransforms; // 0x1110(0x10)
	struct TMap<uint64_t, struct FParkourProgress> MapPlayerUin2ParkourProgress; // 0x1120(0x50)
	float DesignMinTime; // 0x1170(0x4)
	float ParkourMasterTime; // 0x1174(0x4)
	struct UGPParkourHudViewController* ParkourHudViewController; // 0x1178(0x8)
	struct ACHARACTER* LastOperatorCharacter; // 0x1180(0x8)
	struct USphereComponent* DetectShowHUDMaxRadiusSphere; // 0x1188(0x8)

	// Object: Function SOL.Interactor_ParkourStart.ServerStartParkour
	// Flags: [Final|Native|Public]
	// Offset: 0x15291b84
	// Params: [ Num(1) Size(0x8) ]
	void ServerStartParkour(struct ADFMCharacter* InCharacter);

	// Object: Function SOL.Interactor_ParkourStart.ServerPutOnBCIEnd
	// Flags: [Final|Native|Public]
	// Offset: 0x15291ae0
	// Params: [ Num(1) Size(0x8) ]
	void ServerPutOnBCIEnd(struct ADFMCharacter* InCharacter);

	// Object: Function SOL.Interactor_ParkourStart.ServerOverTime
	// Flags: [Final|Native|Public]
	// Offset: 0x15291a3c
	// Params: [ Num(1) Size(0x8) ]
	void ServerOverTime(struct ADFMCharacter* InCharacter);

	// Object: Function SOL.Interactor_ParkourStart.ServerOnReadyTimerCountdown
	// Flags: [Final|Native|Public]
	// Offset: 0x15291998
	// Params: [ Num(1) Size(0x8) ]
	void ServerOnReadyTimerCountdown(uint64_t PlayerUin);

	// Object: Function SOL.Interactor_ParkourStart.ServerOnOverlapCheckPointEnd
	// Flags: [Final|Native|Public]
	// Offset: 0x15291844
	// Params: [ Num(4) Size(0x1C) ]
	void ServerOnOverlapCheckPointEnd(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex);

	// Object: Function SOL.Interactor_ParkourStart.ServerOnOverlapCheckPointBegin
	// Flags: [Final|Native|Public|HasOutParms]
	// Offset: 0x1529164c
	// Params: [ Num(6) Size(0xA8) ]
	void ServerOnOverlapCheckPointBegin(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, uint8_t bFromSweep, const struct FHitResult& SweepResult);

	// Object: Function SOL.Interactor_ParkourStart.ServerFinishParkour
	// Flags: [Final|Native|Public]
	// Offset: 0x15291564
	// Params: [ Num(2) Size(0x9) ]
	void ServerFinishParkour(struct ADFMCharacter* InCharacter, uint8_t bCompleted);

	// Object: Function SOL.Interactor_ParkourStart.SaveToDatatable
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x15291550
	// Params: [ Num(0) Size(0x0) ]
	void SaveToDatatable();

	// Object: Function SOL.Interactor_ParkourStart.RefrsehCheckPoints
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x1529153c
	// Params: [ Num(0) Size(0x0) ]
	void RefrsehCheckPoints();

	// Object: Function SOL.Interactor_ParkourStart.OnServerEnterStartCheckPoint
	// Flags: [Final|Native|Public]
	// Offset: 0x15291498
	// Params: [ Num(1) Size(0x8) ]
	void OnServerEnterStartCheckPoint(uint64_t InPlayerUin);

	// Object: Function SOL.Interactor_ParkourStart.MulticastOnStartParkour
	// Flags: [Net|NetReliableNative|Event|NetMulticast|Public]
	// Offset: 0x152913ac
	// Params: [ Num(1) Size(0x40) ]
	void MulticastOnStartParkour(struct FParkourProgress PlayerParkourProgress);

	// Object: Function SOL.Interactor_ParkourStart.MulticastOnReadyTimerCountdown
	// Flags: [Net|NetReliableNative|Event|NetMulticast|Public]
	// Offset: 0x152912c0
	// Params: [ Num(1) Size(0x40) ]
	void MulticastOnReadyTimerCountdown(struct FParkourProgress PlayerParkourProgress);

	// Object: Function SOL.Interactor_ParkourStart.MulticastOnPutOnBCIEnd
	// Flags: [Net|NetReliableNative|Event|NetMulticast|Public]
	// Offset: 0x152911d4
	// Params: [ Num(1) Size(0x40) ]
	void MulticastOnPutOnBCIEnd(struct FParkourProgress PlayerParkourProgress);

	// Object: Function SOL.Interactor_ParkourStart.MulticastOnLeaveReadyCheckPoint
	// Flags: [Net|NetReliableNative|Event|NetMulticast|Public]
	// Offset: 0x152910a4
	// Params: [ Num(2) Size(0x41) ]
	void MulticastOnLeaveReadyCheckPoint(struct FParkourProgress PlayerParkourProgress, uint8_t bFalseStart);

	// Object: Function SOL.Interactor_ParkourStart.MulticastOnFinishParkour
	// Flags: [Net|NetReliableNative|Event|NetMulticast|Public]
	// Offset: 0x15290fb8
	// Params: [ Num(1) Size(0x40) ]
	void MulticastOnFinishParkour(struct FParkourProgress PlayerParkourProgress);

	// Object: Function SOL.Interactor_ParkourStart.MulticastOnArriveNewCheckPoint
	// Flags: [Net|NetReliableNative|Event|NetMulticast|Public]
	// Offset: 0x15290ecc
	// Params: [ Num(1) Size(0x40) ]
	void MulticastOnArriveNewCheckPoint(struct FParkourProgress PlayerParkourProgress);

	// Object: Function SOL.Interactor_ParkourStart.LoadFromDatatable
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x15290eb8
	// Params: [ Num(0) Size(0x0) ]
	void LoadFromDatatable();

	// Object: Function SOL.Interactor_ParkourStart.LoadAllCheckPointsTransform
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x15290ea4
	// Params: [ Num(0) Size(0x0) ]
	void LoadAllCheckPointsTransform();

	// Object: Function SOL.Interactor_ParkourStart.GetParkourHudViewController
	// Flags: [Final|Native|Protected]
	// Offset: 0x15290e70
	// Params: [ Num(1) Size(0x8) ]
	struct UGPParkourHudViewController* GetParkourHudViewController();

	// Object: Function SOL.Interactor_ParkourStart.ClearAllCheckPoints
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x15290e5c
	// Params: [ Num(0) Size(0x0) ]
	void ClearAllCheckPoints();

	// Object: Function SOL.Interactor_ParkourStart.CacheAllCheckPointsTransform
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x15290e48
	// Params: [ Num(0) Size(0x0) ]
	void CacheAllCheckPointsTransform();

	// Object: Function SOL.Interactor_ParkourStart.AddOneCheckPoint
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x15290e34
	// Params: [ Num(0) Size(0x0) ]
	void AddOneCheckPoint();

	// Object: Function SOL.Interactor_ParkourStart.AddCheckPoints
	// Flags: [Final|Native|Public|HasOutParms]
	// Offset: 0x15290d24
	// Params: [ Num(2) Size(0x20) ]
	void AddCheckPoints(const struct TArray<struct FVector>& Locations, const struct TArray<struct FRotator>& Rotations);
};

// Object: Class SOL.InteractorOptParkourStartExecuteComponent
// Size: 0x170 (Inherited: 0x170)
struct UInteractorOptParkourStartExecuteComponent : UInteractorOptInstantExecuteComponent
{
	DEFINE_UE_CLASS_HELPERS(UInteractorOptParkourStartExecuteComponent, "InteractorOptParkourStartExecuteComponent")
};

// Object: Class SOL.Interactor_ParkourRank
// Size: 0x1100 (Inherited: 0x1050)
struct AInteractor_ParkourRank : AInteractorBaseProxy
{
	DEFINE_UE_CLASS_HELPERS(AInteractor_ParkourRank, "Interactor_ParkourRank")

	struct AInteractor_ParkourStart* ParkourStart; // 0x1050(0x8)
	int32_t ServerRankNum; // 0x1058(0x4)
	uint8_t Pad_0x105C[0x4]; // 0x105C(0x4)
	struct FText MasterName; // 0x1060(0x18)
	struct FName ParkourRankViewName; // 0x1078(0x8)
	uint8_t bUseTestData : 1; // 0x1080(0x1), Mask(0x1)
	uint8_t BitPad_0x1080_1 : 7; // 0x1080(0x1)
	uint8_t bGotLocalPlayerDataFromServer : 1; // 0x1081(0x1), Mask(0x1)
	uint8_t BitPad_0x1081_1 : 7; // 0x1081(0x1)
	uint8_t bGotRankDataFromServer : 1; // 0x1082(0x1), Mask(0x1)
	uint8_t BitPad_0x1082_1 : 7; // 0x1082(0x1)
	uint8_t bGotFriendDataFromServer : 1; // 0x1083(0x1), Mask(0x1)
	uint8_t BitPad_0x1083_1 : 7; // 0x1083(0x1)
	uint8_t Pad_0x1084[0x4]; // 0x1084(0x4)
	struct FParkourRankDataItem MasterRankData; // 0x1088(0x28)
	struct TArray<struct FParkourRankDataItem> RankData; // 0x10B0(0x10)
	struct TArray<struct FParkourRankDataItem> FriendsData; // 0x10C0(0x10)
	struct FParkourRankDataItem LocalPlayerRankData; // 0x10D0(0x28)
	struct UGPParkourRankViewController* ParkourRankViewController; // 0x10F8(0x8)

	// Object: Function SOL.Interactor_ParkourRank.ResquestRankData
	// Flags: [Final|Native|Public]
	// Offset: 0x152922a8
	// Params: [ Num(0) Size(0x0) ]
	void ResquestRankData();

	// Object: Function SOL.Interactor_ParkourRank.ResquestLocalPlayerData
	// Flags: [Final|Native|Public]
	// Offset: 0x15292294
	// Params: [ Num(0) Size(0x0) ]
	void ResquestLocalPlayerData();

	// Object: Function SOL.Interactor_ParkourRank.ResquestFriendData
	// Flags: [Final|Native|Public]
	// Offset: 0x15292280
	// Params: [ Num(0) Size(0x0) ]
	void ResquestFriendData();

	// Object: Function SOL.Interactor_ParkourRank.OnResquestRankData
	// Flags: [Final|Native|Public]
	// Offset: 0x152921b0
	// Params: [ Num(1) Size(0x10) ]
	void OnResquestRankData(struct TArray<struct FParkourRankDataItem> InData);

	// Object: Function SOL.Interactor_ParkourRank.OnResquestLocalPlayerData
	// Flags: [Final|Native|Public]
	// Offset: 0x1529208c
	// Params: [ Num(1) Size(0x28) ]
	void OnResquestLocalPlayerData(struct FParkourRankDataItem InData);

	// Object: Function SOL.Interactor_ParkourRank.OnResquestFriendData
	// Flags: [Final|Native|Public]
	// Offset: 0x15291fbc
	// Params: [ Num(1) Size(0x10) ]
	void OnResquestFriendData(struct TArray<struct FParkourRankDataItem> InData);

	// Object: Function SOL.Interactor_ParkourRank.OnHUDStateModified
	// Flags: [Final|Native|Public]
	// Offset: 0x15291ed4
	// Params: [ Num(2) Size(0x9) ]
	void OnHUDStateModified(struct FName HUDState, uint8_t bEnable);

	// Object: Function SOL.Interactor_ParkourRank.GetParkourRankViewController
	// Flags: [Final|Native|Protected]
	// Offset: 0x15291ea0
	// Params: [ Num(1) Size(0x8) ]
	struct UGPParkourRankViewController* GetParkourRankViewController();

	// Object: Function SOL.Interactor_ParkourRank.GetHangUpListData
	// Flags: [Final|Native|Public]
	// Offset: 0x15291dd8
	// Params: [ Num(2) Size(0x18) ]
	struct TArray<struct FParkourRankDataItem> GetHangUpListData(uint8_t bInAllServer);
};

// Object: Class SOL.ParkourPathDataTableManager
// Size: 0x38 (Inherited: 0x30)
struct UParkourPathDataTableManager : UDataTableSystemManagerBase
{
	DEFINE_UE_CLASS_HELPERS(UParkourPathDataTableManager, "ParkourPathDataTableManager")

	uint8_t Pad_0x30[0x8]; // 0x30(0x8)
};

// Object: Class SOL.ParkourPathTimeDataTableManager
// Size: 0x38 (Inherited: 0x30)
struct UParkourPathTimeDataTableManager : UDataTableSystemManagerBase
{
	DEFINE_UE_CLASS_HELPERS(UParkourPathTimeDataTableManager, "ParkourPathTimeDataTableManager")

	uint8_t Pad_0x30[0x8]; // 0x30(0x8)
};

// Object: Class SOL.Interactor_Treasure_Cover
// Size: 0x1050 (Inherited: 0x1050)
struct AInteractor_Treasure_Cover : AInteractorBaseProxy
{
	DEFINE_UE_CLASS_HELPERS(AInteractor_Treasure_Cover, "Interactor_Treasure_Cover")
};

// Object: Class SOL.Interactor_VaultHackPC
// Size: 0x12B0 (Inherited: 0x1288)
struct AInteractor_VaultHackPC : AInteractor_HackPC
{
	DEFINE_UE_CLASS_HELPERS(AInteractor_VaultHackPC, "Interactor_VaultHackPC")

	struct FName VaultGateTag; // 0x1288(0x8)
	struct FName VaultGasVolumeTag; // 0x1290(0x8)
	float DelayActiveVaultGateTime; // 0x1298(0x4)
	uint8_t Pad_0x129C[0xC]; // 0x129C(0xC)
	uint8_t bVaultGateActive : 1; // 0x12A8(0x1), Mask(0x1)
	uint8_t BitPad_0x12A8_1 : 7; // 0x12A8(0x1)
	uint8_t Pad_0x12A9[0x7]; // 0x12A9(0x7)

	// Object: Function SOL.Interactor_VaultHackPC.OnRep_VaultGateActive
	// Flags: [Final|Native|Public]
	// Offset: 0x1529546c
	// Params: [ Num(0) Size(0x0) ]
	void OnRep_VaultGateActive();

	// Object: Function SOL.Interactor_VaultHackPC.OnPCMorseCodeSuccessServer
	// Flags: [Native|Public]
	// Offset: 0x15295344
	// Params: [ Num(3) Size(0x18) ]
	void OnPCMorseCodeSuccessServer(uint8_t bSuccess, struct AActor* HackPC, uint64_t PlayerId);

	// Object: Function SOL.Interactor_VaultHackPC.DelayActiveVaultGate
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x15295330
	// Params: [ Num(0) Size(0x0) ]
	void DelayActiveVaultGate();

	// Object: Function SOL.Interactor_VaultHackPC.BP_OnVaultGateActive
	// Flags: [Native|Event|Public|BlueprintEvent]
	// Offset: 0x15295314
	// Params: [ Num(0) Size(0x0) ]
	void BP_OnVaultGateActive();
};

// Object: Class SOL.InteractorBallSimComponent
// Size: 0x5A0 (Inherited: 0xF8)
struct UInteractorBallSimComponent : UActorComponent
{
	DEFINE_UE_CLASS_HELPERS(UInteractorBallSimComponent, "InteractorBallSimComponent")

	uint8_t Pad_0xF8[0x18]; // 0xF8(0x18)
	float BallMass; // 0x110(0x4)
	float MaxSpeed; // 0x114(0x4)
	float SleepSpeedThreshold; // 0x118(0x4)
	float SleepTime; // 0x11C(0x4)
	float WakeSpeedThreshold; // 0x120(0x4)
	float LinearDamping; // 0x124(0x4)
	float AngularDamping; // 0x128(0x4)
	float HighSpeedSweepThreshold; // 0x12C(0x4)
	float CCDOnThreshold; // 0x130(0x4)
	float CCDOffThreshold; // 0x134(0x4)
	uint8_t bEnableConditionalCCD : 1; // 0x138(0x1), Mask(0x1)
	uint8_t BitPad_0x138_1 : 7; // 0x138(0x1)
	uint8_t bEnableHighSpeedSweep : 1; // 0x139(0x1), Mask(0x1)
	uint8_t BitPad_0x139_1 : 7; // 0x139(0x1)
	uint8_t Pad_0x13A[0x2]; // 0x13A(0x2)
	float InterpDelayMs; // 0x13C(0x4)
	float ExtrapMaxMs; // 0x140(0x4)
	float VisualAngularDamping; // 0x144(0x4)
	uint8_t bEnableCharacterKick : 1; // 0x148(0x1), Mask(0x1)
	uint8_t BitPad_0x148_1 : 7; // 0x148(0x1)
	uint8_t Pad_0x149[0x3]; // 0x149(0x3)
	float KickBaseStrength; // 0x14C(0x4)
	float KickVelocityMultiplier; // 0x150(0x4)
	float KickRestitution; // 0x154(0x4)
	float KickUpwardBase; // 0x158(0x4)
	float KickUpwardVelScale; // 0x15C(0x4)
	float KickUpwardMax; // 0x160(0x4)
	float KickZSlackCm; // 0x164(0x4)
	float KickSeparationSkinCm; // 0x168(0x4)
	int32_t PawnSubsteps; // 0x16C(0x4)
	float KickCooldown; // 0x170(0x4)
	float CharacterSearchRadius; // 0x174(0x4)
	float ActiveKickMinCharSpeed; // 0x178(0x4)
	float ActiveKickForwardCosThreshold; // 0x17C(0x4)
	float ActiveKickBaseStrength; // 0x180(0x4)
	float ActiveKickVelocityMultiplier; // 0x184(0x4)
	float TriggerDistMinMargin; // 0x188(0x4)
	float ThrowBaseStrength; // 0x18C(0x4)
	float ThrowUpwardAngleDeg; // 0x190(0x4)
	float ThrowVelocityInheritMult; // 0x194(0x4)
	float ThrowMaxInheritSpeed; // 0x198(0x4)
	uint8_t Pad_0x19C[0x4]; // 0x19C(0x4)
	struct UPrimitiveComponent* PhysBody; // 0x1A0(0x8)
	uint8_t Pad_0x1A8[0x74]; // 0x1A8(0x74)
	struct FInteractorBallRepState RepState; // 0x21C(0x30)
	uint8_t Pad_0x24C[0x354]; // 0x24C(0x354)

	// Object: Function SOL.InteractorBallSimComponent.SetBallState
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x15295a68
	// Params: [ Num(1) Size(0x1) ]
	void SetBallState(EInteractorBallState NewState);

	// Object: Function SOL.InteractorBallSimComponent.OnRep_BallState
	// Flags: [Final|Native|Private]
	// Offset: 0x15295a54
	// Params: [ Num(0) Size(0x0) ]
	void OnRep_BallState();

	// Object: Function SOL.InteractorBallSimComponent.OnPhysBodyHit
	// Flags: [Final|Native|Private|HasOutParms|HasDefaults]
	// Offset: 0x1529589c
	// Params: [ Num(5) Size(0xAC) ]
	void OnPhysBodyHit(struct UPrimitiveComponent* HitComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, struct FVector NormalImpulse, const struct FHitResult& Hit);

	// Object: Function SOL.InteractorBallSimComponent.Initialize
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x152957f8
	// Params: [ Num(1) Size(0x8) ]
	void Initialize(struct UPrimitiveComponent* InPhysBody);

	// Object: Function SOL.InteractorBallSimComponent.GetBallVelocity
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x152957c0
	// Params: [ Num(1) Size(0xC) ]
	struct FVector GetBallVelocity();

	// Object: Function SOL.InteractorBallSimComponent.GetBallState
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x152957a4
	// Params: [ Num(1) Size(0x1) ]
	EInteractorBallState GetBallState();

	// Object: Function SOL.InteractorBallSimComponent.GetAuthoritativePosition
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x1529576c
	// Params: [ Num(1) Size(0xC) ]
	struct FVector GetAuthoritativePosition();

	// Object: Function SOL.InteractorBallSimComponent.ApplyThrowImpulse
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x1529568c
	// Params: [ Num(2) Size(0x18) ]
	void ApplyThrowImpulse(struct FVector ThrowDirection, struct FVector CharacterVelocity);

	// Object: Function SOL.InteractorBallSimComponent.ApplyImpulseAtLocation
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x152955ac
	// Params: [ Num(2) Size(0x18) ]
	void ApplyImpulseAtLocation(struct FVector Impulse, struct FVector WorldPoint);

	// Object: Function SOL.InteractorBallSimComponent.ApplyImpulse
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x15295508
	// Params: [ Num(1) Size(0xC) ]
	void ApplyImpulse(struct FVector Impulse);
};

// Object: Class SOL.InteractorData
// Size: 0x110 (Inherited: 0x28)
struct UInteractorData : UObject
{
	DEFINE_UE_CLASS_HELPERS(UInteractorData, "InteractorData")

	struct FString UniqueName; // 0x28(0x10)
	uint8_t bRandomContainer : 1; // 0x38(0x1), Mask(0x1)
	uint8_t BitPad_0x38_1 : 7; // 0x38(0x1)
	uint8_t Pad_0x39[0x7]; // 0x39(0x7)
	struct FString BigAreaName; // 0x40(0x10)
	struct FString MapCustomArea; // 0x50(0x10)
	int32_t boxId; // 0x60(0x4)
	struct FName HighValueRoomID; // 0x64(0x8)
	uint8_t Pad_0x6C[0x4]; // 0x6C(0x4)
	struct FTransform Transform; // 0x70(0x30)
	struct FSoftClassPath BoxClassPath; // 0xA0(0x18)
	struct TMap<struct FString, struct FString> PropertyValues; // 0xB8(0x50)
	uint8_t Pad_0x108[0x8]; // 0x108(0x8)

	// Object: Function SOL.InteractorData.SpawnInteractor
	// Flags: [Final|Native|Public]
	// Offset: 0x15295be0
	// Params: [ Num(1) Size(0x8) ]
	struct AInteractorBase* SpawnInteractor();
};

// Object: Class SOL.InteractorContainer_Collector
// Size: 0x550 (Inherited: 0x370)
struct AInteractorContainer_Collector : AActor
{
	DEFINE_UE_CLASS_HELPERS(AInteractorContainer_Collector, "InteractorContainer_Collector")

	struct TArray<struct UInteractorData*> InteractorDatas; // 0x370(0x10)
	struct TArray<struct AInteractorBase*> Interactors; // 0x380(0x10)
	uint8_t Pad_0x390[0x18]; // 0x390(0x18)
	struct UObject* BoxBaseClass; // 0x3A8(0x8)
	struct TMap<struct FName, struct FRoomInteractorData> HighValueRoomInteractorDataMap; // 0x3B0(0x50)
	struct TArray<struct AHighValueRoom*> HighValueRooms; // 0x400(0x10)
	struct TMap<struct FName, struct FRoomInteractorArray> HighValueRoomInteractorMap; // 0x410(0x50)
	uint8_t Pad_0x460[0x18]; // 0x460(0x18)
	struct UObject* HighValueRoomBaseClass; // 0x478(0x8)
	struct TMap<struct FName, struct FRoomInteractorData> CapacitorRoomInteractorDataMap; // 0x480(0x50)
	struct TArray<struct ACapacitorRoom*> CapacitorRooms; // 0x4D0(0x10)
	struct TMap<struct FName, struct FRoomInteractorArray> CapacitorRoomInteractorMap; // 0x4E0(0x50)
	uint8_t Pad_0x530[0x18]; // 0x530(0x18)
	struct UObject* CapacitorRoomBaseClass; // 0x548(0x8)

	// Object: Function SOL.InteractorContainer_Collector.GenerateInteractorData
	// Flags: [Final|Native|Protected]
	// Offset: 0x15295c78
	// Params: [ Num(0) Size(0x0) ]
	void GenerateInteractorData();

	// Object: Function SOL.InteractorContainer_Collector.CollectInteractorBox
	// Flags: [Final|Native|Protected]
	// Offset: 0x15295c64
	// Params: [ Num(0) Size(0x0) ]
	void CollectInteractorBox();

	// Object: Function SOL.InteractorContainer_Collector.CollectHighValueRoom
	// Flags: [Final|Native|Protected]
	// Offset: 0x15295c50
	// Params: [ Num(0) Size(0x0) ]
	void CollectHighValueRoom();

	// Object: Function SOL.InteractorContainer_Collector.CollectData
	// Flags: [Final|Native|Public]
	// Offset: 0x15295c3c
	// Params: [ Num(0) Size(0x0) ]
	void CollectData();

	// Object: Function SOL.InteractorContainer_Collector.CollectCapacitorRoom
	// Flags: [Final|Native|Protected]
	// Offset: 0x15295c28
	// Params: [ Num(0) Size(0x0) ]
	void CollectCapacitorRoom();
};

// Object: Class SOL.InteractorExecutor_FootballSign
// Size: 0xF0 (Inherited: 0xF0)
struct UInteractorExecutor_FootballSign : UInteractorBaseExecutor
{
	DEFINE_UE_CLASS_HELPERS(UInteractorExecutor_FootballSign, "InteractorExecutor_FootballSign")
};

// Object: Class SOL.InteractorExecutor_ThrowFootball
// Size: 0xF0 (Inherited: 0xF0)
struct UInteractorExecutor_ThrowFootball : UInteractorBaseExecutor
{
	DEFINE_UE_CLASS_HELPERS(UInteractorExecutor_ThrowFootball, "InteractorExecutor_ThrowFootball")
};

// Object: Class SOL.InteractorExecutor_Treasure_Cover
// Size: 0x108 (Inherited: 0xF0)
struct UInteractorExecutor_Treasure_Cover : UInteractorBaseExecutor
{
	DEFINE_UE_CLASS_HELPERS(UInteractorExecutor_Treasure_Cover, "InteractorExecutor_Treasure_Cover")

	struct FText CanNotOperateTitle; // 0xF0(0x18)
};

// Object: Class SOL.InteractorExecutor_Treasure_Diggup
// Size: 0xF0 (Inherited: 0xF0)
struct UInteractorExecutor_Treasure_Diggup : UInteractorBaseExecutor
{
	DEFINE_UE_CLASS_HELPERS(UInteractorExecutor_Treasure_Diggup, "InteractorExecutor_Treasure_Diggup")
};

// Object: Class SOL.InteractorExecutor_Treasure_Search
// Size: 0xF0 (Inherited: 0xF0)
struct UInteractorExecutor_Treasure_Search : UInteractorBaseExecutor
{
	DEFINE_UE_CLASS_HELPERS(UInteractorExecutor_Treasure_Search, "InteractorExecutor_Treasure_Search")
};

// Object: Class SOL.InteractorExecutor_Treasure_Send
// Size: 0x108 (Inherited: 0xF0)
struct UInteractorExecutor_Treasure_Send : UInteractorBaseExecutor
{
	DEFINE_UE_CLASS_HELPERS(UInteractorExecutor_Treasure_Send, "InteractorExecutor_Treasure_Send")

	struct FText CanNotOperateTitle; // 0xF0(0x18)
};

// Object: Class SOL.InteractorOptExecuteComponent_AttachActor
// Size: 0x200 (Inherited: 0x198)
struct UInteractorOptExecuteComponent_AttachActor : UInteractorOptDurativeExecuteComponent
{
	DEFINE_UE_CLASS_HELPERS(UInteractorOptExecuteComponent_AttachActor, "InteractorOptExecuteComponent_AttachActor")

	struct TSoftClassPtr<struct APropActor*> AttachActorClass; // 0x198(0x28)
	struct FTransform AttachSocketRelativeTransform; // 0x1C0(0x30)
	struct FName AttachSocketName; // 0x1F0(0x8)
	struct APropActor* AttachActor; // 0x1F8(0x8)
};

// Object: Class SOL.InteractorOptExecuteComponent_ShowContainer
// Size: 0x180 (Inherited: 0x170)
struct UInteractorOptExecuteComponent_ShowContainer : UInteractorOptInstantExecuteComponent
{
	DEFINE_UE_CLASS_HELPERS(UInteractorOptExecuteComponent_ShowContainer, "InteractorOptExecuteComponent_ShowContainer")

	uint8_t ShowInterlayContainer : 1; // 0x169(0x1), Mask(0x1)
	struct FString InterlayContainerName; // 0x170(0x10)
};

// Object: Class SOL.InteractorOptExecuteComponent_ShowProgressUI
// Size: 0x1B8 (Inherited: 0x198)
struct UInteractorOptExecuteComponent_ShowProgressUI : UInteractorOptDurativeExecuteComponent
{
	DEFINE_UE_CLASS_HELPERS(UInteractorOptExecuteComponent_ShowProgressUI, "InteractorOptExecuteComponent_ShowProgressUI")

	struct FName ProgressUIName; // 0x194(0x8)
	struct FText ActionDesc; // 0x1A0(0x18)
};

// Object: Class SOL.InteractorOptExecuteComponent_ShowTips
// Size: 0x190 (Inherited: 0x170)
struct UInteractorOptExecuteComponent_ShowTips : UInteractorOptInstantExecuteComponent
{
	DEFINE_UE_CLASS_HELPERS(UInteractorOptExecuteComponent_ShowTips, "InteractorOptExecuteComponent_ShowTips")

	uint8_t OnlySelf : 1; // 0x169(0x1), Mask(0x1)
	struct FText TipsContent; // 0x170(0x18)
	float TipsDuration; // 0x188(0x4)
	uint8_t BitPad_0x18C_1 : 7; // 0x18C(0x1)
	uint8_t Pad_0x18D[0x3]; // 0x18D(0x3)
};

// Object: Class SOL.InteractorOptExecuteComponent_ShowTreasureCoverUI
// Size: 0x198 (Inherited: 0x198)
struct UInteractorOptExecuteComponent_ShowTreasureCoverUI : UInteractorOptDurativeExecuteComponent
{
	DEFINE_UE_CLASS_HELPERS(UInteractorOptExecuteComponent_ShowTreasureCoverUI, "InteractorOptExecuteComponent_ShowTreasureCoverUI")

	// Object: Function SOL.InteractorOptExecuteComponent_ShowTreasureCoverUI.OnHUDStateChanged
	// Flags: [Final|Native|Public]
	// Offset: 0x15295d24
	// Params: [ Num(2) Size(0x9) ]
	void OnHUDStateChanged(struct FName StateName, uint8_t bIsVisible);
};

// Object: Class SOL.InteractorOptExecuteComponent_WaitEvent
// Size: 0x198 (Inherited: 0x198)
struct UInteractorOptExecuteComponent_WaitEvent : UInteractorOptDurativeExecuteComponent
{
	DEFINE_UE_CLASS_HELPERS(UInteractorOptExecuteComponent_WaitEvent, "InteractorOptExecuteComponent_WaitEvent")
};

// Object: Class SOL.OscilloscopeScreen
// Size: 0x430 (Inherited: 0x370)
struct AOscilloscopeScreen : AActor
{
	DEFINE_UE_CLASS_HELPERS(AOscilloscopeScreen, "OscilloscopeScreen")

	struct FTransform MarkingTransform; // 0x370(0x30)
	float MaxMarkingTime; // 0x3A0(0x4)
	struct FName JointMtArgName; // 0x3A4(0x8)
	uint8_t Pad_0x3AC[0x4]; // 0x3AC(0x4)
	struct UCurveFloat* JointMtCurve; // 0x3B0(0x8)
	struct FName JointMtColorName; // 0x3B8(0x8)
	struct UCurveLinearColor* JointMtColorCurve; // 0x3C0(0x8)
	struct USceneComponent* root; // 0x3C8(0x8)
	struct UInstancedStaticMeshComponent* ISMComponent; // 0x3D0(0x8)
	struct USplineComponent* SplineComponent; // 0x3D8(0x8)
	struct UMaterialInstanceDynamic* JointMaterial; // 0x3E0(0x8)
	uint8_t Pad_0x3E8[0x10]; // 0x3E8(0x10)
	struct TArray<float> XRange; // 0x3F8(0x10)
	struct TArray<float> ZRange; // 0x408(0x10)
	struct TArray<float> PointPosXArray; // 0x418(0x10)
	uint8_t Pad_0x428[0x8]; // 0x428(0x8)

	// Object: Function SOL.OscilloscopeScreen.UpdateSpline
	// Flags: [Final|Native|Public]
	// Offset: 0x15295f78
	// Params: [ Num(2) Size(0x8) ]
	void UpdateSpline(int32_t CurrentIndex, float CurrentNodePos);

	// Object: Function SOL.OscilloscopeScreen.SetColor
	// Flags: [Final|Native|Protected]
	// Offset: 0x15295f64
	// Params: [ Num(0) Size(0x0) ]
	void SetColor();

	// Object: Function SOL.OscilloscopeScreen.InitISM
	// Flags: [Final|Native|Protected]
	// Offset: 0x15295f50
	// Params: [ Num(0) Size(0x0) ]
	void InitISM();

	// Object: Function SOL.OscilloscopeScreen.GetPointRightBottomComponent
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(1) Size(0x8) ]
	struct USceneComponent* GetPointRightBottomComponent();

	// Object: Function SOL.OscilloscopeScreen.GetPointLeftTopComponent
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(1) Size(0x8) ]
	struct USceneComponent* GetPointLeftTopComponent();

	// Object: Function SOL.OscilloscopeScreen.BP_GetOuterPoint2Component
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(1) Size(0x8) ]
	struct USceneComponent* BP_GetOuterPoint2Component();

	// Object: Function SOL.OscilloscopeScreen.BP_GetOuterPoint1Component
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(1) Size(0x8) ]
	struct USceneComponent* BP_GetOuterPoint1Component();
};

// Object: Class SOL.PropActor
// Size: 0x370 (Inherited: 0x370)
struct APropActor : AActor
{
	DEFINE_UE_CLASS_HELPERS(APropActor, "PropActor")
};

// Object: Class SOL.SOLCharacter
// Size: 0x38D0 (Inherited: 0x3890)
struct ASOLCharacter : ASOLCharacterBase
{
	DEFINE_UE_CLASS_HELPERS(ASOLCharacter, "SOLCharacter")

	struct FGameplayTag FootballSignTag; // 0x388C(0x8)
	struct FRescueCascadeParamInfo FootballSignParamInfo_HD; // 0x3894(0x18)
	struct FRescueCascadeParamInfo FootballSignParamInfo_Mobile; // 0x38AC(0x18)
	uint8_t Pad_0x38C8[0x8]; // 0x38C8(0x8)

	// Object: Function SOL.SOLCharacter.ClientShowEventBanner
	// Flags: [Net|NetReliableNative|Event|Public|NetClient|BlueprintCallable]
	// Offset: 0x15296190
	// Params: [ Num(1) Size(0x4) ]
	void ClientShowEventBanner(int32_t InEventBannerID);
};

// Object: Class SOL.SOLEventVolumeBox
// Size: 0x510 (Inherited: 0x378)
struct ASOLEventVolumeBox : ATriggerBox
{
	DEFINE_UE_CLASS_HELPERS(ASOLEventVolumeBox, "SOLEventVolumeBox")

	struct TArray<struct FName> ScreenEffectIds; // 0x378(0x10)
	struct TArray<struct FName> ScreenEffectIdsMobile; // 0x388(0x10)
	struct TArray<struct FName> ScreenEffectIdsWithRotation; // 0x398(0x10)
	uint8_t bIsNeedLoadLevels : 1; // 0x3A8(0x1), Mask(0x1)
	uint8_t BitPad_0x3A8_1 : 7; // 0x3A8(0x1)
	uint8_t Pad_0x3A9[0x7]; // 0x3A9(0x7)
	struct TArray<struct FString> NeedUnloadSubWorlds; // 0x3B0(0x10)
	struct TArray<struct FString> NeedLoadSubWorlds; // 0x3C0(0x10)
	struct FString NeedLoadLevel; // 0x3D0(0x10)
	struct FString NeedLoadLevelMobile; // 0x3E0(0x10)
	struct FString NeedLoadPRT; // 0x3F0(0x10)
	struct FString NeedLoadPRTMobile; // 0x400(0x10)
	struct TArray<struct FSoftObjectPath> CoorSequencePath; // 0x410(0x10)
	struct TArray<struct FEventQualitySequencePathData> CoorSequencePathMobile; // 0x420(0x10)
	uint8_t bIsEventSeqPlayed : 1; // 0x430(0x1), Mask(0x1)
	uint8_t BitPad_0x430_1 : 7; // 0x430(0x1)
	uint8_t Pad_0x431[0x7]; // 0x431(0x7)
	struct UBoxComponent* BoxComponent; // 0x438(0x8)
	struct AGPSequenceActor* SequenceActor; // 0x440(0x8)
	uint8_t bIsClientCheckByPhysics : 1; // 0x448(0x1), Mask(0x1)
	uint8_t BitPad_0x448_1 : 7; // 0x448(0x1)
	uint8_t Pad_0x449[0x3]; // 0x449(0x3)
	float BoxDetectionTime; // 0x44C(0x4)
	struct ADFMCharacter* LocalPlayerCharacter; // 0x450(0x8)
	uint8_t Pad_0x458[0xB8]; // 0x458(0xB8)

	// Object: Function SOL.SOLEventVolumeBox.StartEventWithLevelChange
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x15296e60
	// Params: [ Num(0) Size(0x0) ]
	void StartEventWithLevelChange();

	// Object: Function SOL.SOLEventVolumeBox.PlaySequence
	// Flags: [Final|Native|Protected|HasDefaults]
	// Offset: 0x15296d5c
	// Params: [ Num(1) Size(0x18) ]
	void PlaySequence(struct FSoftObjectPath SequencePath);

	// Object: Function SOL.SOLEventVolumeBox.PlayEventSequence
	// Flags: [Net|NetReliableNative|Event|NetMulticast|Protected]
	// Offset: 0x15296d40
	// Params: [ Num(0) Size(0x0) ]
	void PlayEventSequence();

	// Object: Function SOL.SOLEventVolumeBox.OnVolumeEndOverlap
	// Flags: [Final|Native|Protected]
	// Offset: 0x15296c64
	// Params: [ Num(2) Size(0x10) ]
	void OnVolumeEndOverlap(struct AActor* OverlappedActor, struct AActor* OtherActor);

	// Object: Function SOL.SOLEventVolumeBox.OnVolumeBeginOverlap
	// Flags: [Final|Native|Protected]
	// Offset: 0x15296b88
	// Params: [ Num(2) Size(0x10) ]
	void OnVolumeBeginOverlap(struct AActor* OverlappedActor, struct AActor* OtherActor);

	// Object: Function SOL.SOLEventVolumeBox.OnRep_IsEventSeqPlayed
	// Flags: [Final|Native|Protected]
	// Offset: 0x15296b74
	// Params: [ Num(0) Size(0x0) ]
	void OnRep_IsEventSeqPlayed();

	// Object: Function SOL.SOLEventVolumeBox.OnPlayerLocationChanged
	// Flags: [Final|Native|Protected]
	// Offset: 0x15296b60
	// Params: [ Num(0) Size(0x0) ]
	void OnPlayerLocationChanged();

	// Object: Function SOL.SOLEventVolumeBox.OnLoadingViewShutDown
	// Flags: [Final|Native|Protected]
	// Offset: 0x15296b4c
	// Params: [ Num(0) Size(0x0) ]
	void OnLoadingViewShutDown();

	// Object: Function SOL.SOLEventVolumeBox.LoadEventLevels
	// Flags: [Net|NetReliableNative|Event|NetMulticast|Protected|BlueprintCallable]
	// Offset: 0x15296900
	// Params: [ Num(7) Size(0x61) ]
	void LoadEventLevels(struct TArray<struct FString> LoadLevels, struct TArray<struct FString> UnloadLevels, struct FString LoadSubWorld, struct FString UnloadSubWorld, struct TArray<struct FString> MobileLoadLevels, struct TArray<struct FString> MobileUnloadLevels, uint8_t bIsSwitchPRT);

	// Object: Function SOL.SOLEventVolumeBox.EnableScreenEffects
	// Flags: [Final|Native|Protected]
	// Offset: 0x15296818
	// Params: [ Num(2) Size(0x8) ]
	void EnableScreenEffects(uint8_t bIsEnable, int32_t ScreenIndex);

	// Object: Function SOL.SOLEventVolumeBox.EnableLocalPlayerScreenEffects
	// Flags: [Final|Native|Protected|BlueprintCallable]
	// Offset: 0x152966f0
	// Params: [ Num(3) Size(0x9) ]
	void EnableLocalPlayerScreenEffects(uint8_t bIsEnable, int32_t ScreenIndex, uint8_t bIsEnterRepeat);

	// Object: Function SOL.SOLEventVolumeBox.EnableDestroyInnerSkillCreatedWithOverlap
	// Flags: [Final|Native|Protected]
	// Offset: 0x15296644
	// Params: [ Num(1) Size(0x1) ]
	void EnableDestroyInnerSkillCreatedWithOverlap(uint8_t bIsEnable);

	// Object: Function SOL.SOLEventVolumeBox.CallCvar
	// Flags: [Final|Native|Protected|BlueprintCallable]
	// Offset: 0x1529654c
	// Params: [ Num(1) Size(0x10) ]
	void CallCvar(struct FString CVar);

	// Object: Function SOL.SOLEventVolumeBox.AdjustPlayerCamera
	// Flags: [Final|Native|Protected|HasDefaults|BlueprintCallable]
	// Offset: 0x152963f4
	// Params: [ Num(4) Size(0x1C) ]
	void AdjustPlayerCamera(struct UCameraShake* Shake, float Scale, ECameraAnimPlaySpace PlaySpace, struct FRotator UserPlaySpaceRot);
};

// Object: Class SOL.SOLGameplayDelegates
// Size: 0xC0 (Inherited: 0x30)
struct USOLGameplayDelegates : UWorldSubsystem
{
	DEFINE_UE_CLASS_HELPERS(USOLGameplayDelegates, "SOLGameplayDelegates")

	struct FMulticastInlineDelegate OnAZContractSpawnNPC; // 0x30(0x10)
	struct FMulticastInlineDelegate OnAZContractFirstExplode; // 0x40(0x10)
	struct FMulticastInlineDelegate OnAZContractOpenEncryptionDoor; // 0x50(0x10)
	struct FMulticastInlineDelegate OnAZContractUseZipLine; // 0x60(0x10)
	struct FMulticastInlineDelegate OnAZContractSecondExplode; // 0x70(0x10)
	struct FMulticastInlineDelegate OnAZContractEnterJudgment; // 0x80(0x10)
	struct FMulticastInlineDelegate OnAZContractSpawnNPCCompleted; // 0x90(0x10)
	struct FMulticastInlineDelegate OnAZContractInteractPhone; // 0xA0(0x10)
	uint8_t Pad_0xB0[0x10]; // 0xB0(0x10)

	// Object: Function SOL.SOLGameplayDelegates.GetSOLGameplayDelegates
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x15299ccc
	// Params: [ Num(2) Size(0x10) ]
	static struct USOLGameplayDelegates* GetSOLGameplayDelegates(struct UObject* WorldContext);

	// Object: Function SOL.SOLGameplayDelegates.Get
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x15299c28
	// Params: [ Num(2) Size(0x10) ]
	static struct USOLGameplayDelegates* Get(struct UObject* WorldContext);
};

// Object: Class SOL.SOLInteractableComponentBase
// Size: 0x6A0 (Inherited: 0x6A0)
struct USOLInteractableComponentBase : UDFInteractableComponentBase
{
	DEFINE_UE_CLASS_HELPERS(USOLInteractableComponentBase, "SOLInteractableComponentBase")
};

// Object: Class SOL.SOLInteractableComponent_Football
// Size: 0x6A0 (Inherited: 0x6A0)
struct USOLInteractableComponent_Football : USOLInteractableComponentBase
{
	DEFINE_UE_CLASS_HELPERS(USOLInteractableComponent_Football, "SOLInteractableComponent_Football")
};

// Object: Class SOL.SOLInteractableCompProxyBase
// Size: 0x138 (Inherited: 0x138)
struct USOLInteractableCompProxyBase : UDFInteractableCompProxy
{
	DEFINE_UE_CLASS_HELPERS(USOLInteractableCompProxyBase, "SOLInteractableCompProxyBase")
};

// Object: Class SOL.SOLInteractableCompProxy_Football
// Size: 0x138 (Inherited: 0x138)
struct USOLInteractableCompProxy_Football : USOLInteractableCompProxyBase
{
	DEFINE_UE_CLASS_HELPERS(USOLInteractableCompProxy_Football, "SOLInteractableCompProxy_Football")
};

// Object: Class SOL.SOLInteractorComponent
// Size: 0xD30 (Inherited: 0xB60)
struct USOLInteractorComponent : UInteractorComponent
{
	DEFINE_UE_CLASS_HELPERS(USOLInteractorComponent, "SOLInteractorComponent")

	struct UAnimMontage* CachedPlaceFootballGateMontage; // 0xB58(0x8)
	struct UAnimSequenceBase* CachedPlaceFootballGateAnim; // 0xB60(0x8)
	struct AInteractAcquireItemBase* CachedFootballLeftGate; // 0xB68(0x8)
	struct AInteractAcquireItemBase* CachedFootballRightGate; // 0xB70(0x8)
	uint8_t Pad_0xB80[0x20]; // 0xB80(0x20)
	struct TArray<struct AFootballGate*> PlacedFootballGates; // 0xBA0(0x10)
	uint8_t Pad_0xBB0[0x20]; // 0xBB0(0x20)
	struct TArray<int32_t> CachedFootballThrowedRandIDArray; // 0xBD0(0x10)
	struct TMap<uint64_t, struct FTimerHandle> InspectExitDelaySpawnNormalFootballTHMap; // 0xBE0(0x50)
	uint8_t Pad_0xC30[0x8]; // 0xC30(0x8)
	struct AInteractor_ParkourStart* Interactor_ParkourStart; // 0xC38(0x8)
	struct TMap<int32_t, int64_t> MapParkourId2LastTime; // 0xC40(0x50)
	struct TMap<int32_t, int64_t> MapParkourId2BestTime; // 0xC90(0x50)
	struct TMap<int32_t, int32_t> MapParkourId2Count; // 0xCE0(0x50)

	// Object: Function SOL.SOLInteractorComponent.SOLOnShowDSCheckTips
	// Flags: [Net|NetReliableNative|Event|Public|NetClient]
	// Offset: 0x1529b1bc
	// Params: [ Num(1) Size(0x18) ]
	void SOLOnShowDSCheckTips(struct FText InTips);

	// Object: Function SOL.SOLInteractorComponent.ServerTryInteractOscilloscope
	// Flags: [Net|NetReliableNative|Event|Public|NetServer]
	// Offset: 0x1529b110
	// Params: [ Num(1) Size(0x8) ]
	void ServerTryInteractOscilloscope(struct AInteractor_Oscilloscope* Oscilloscope);

	// Object: Function SOL.SOLInteractorComponent.ServerTry2AbandonCurrentParkour
	// Flags: [Net|NetReliableNative|Event|Public|NetServer]
	// Offset: 0x1529b0f4
	// Params: [ Num(0) Size(0x0) ]
	void ServerTry2AbandonCurrentParkour();

	// Object: Function SOL.SOLInteractorComponent.ServerSendGiftWithMessage
	// Flags: [Net|NetReliableNative|Event|Public|NetServer]
	// Offset: 0x1529afc8
	// Params: [ Num(3) Size(0x20) ]
	void ServerSendGiftWithMessage(struct AInteractor_GiftTreasure* InTreasure, struct ADFMPlayerState* InPS, struct FString InMesssage);

	// Object: Function SOL.SOLInteractorComponent.SendTipsToTakerBySignFootball
	// Flags: [Net|NetReliableNative|Event|Public|NetClient]
	// Offset: 0x1529aee4
	// Params: [ Num(2) Size(0x10) ]
	void SendTipsToTakerBySignFootball(struct ADFMCharacter* Taker, struct ADFMCharacter* Signer);

	// Object: Function SOL.SOLInteractorComponent.SendTipsToSignerBySignFootball
	// Flags: [Net|NetReliableNative|Event|Public|NetClient]
	// Offset: 0x1529ae00
	// Params: [ Num(2) Size(0x10) ]
	void SendTipsToSignerBySignFootball(struct ADFMCharacter* Taker, struct ADFMCharacter* Signer);

	// Object: Function SOL.SOLInteractorComponent.SendSignNamesToFootballTaker
	// Flags: [Net|NetReliableNative|Event|Public|NetClient]
	// Offset: 0x1529ad10
	// Params: [ Num(2) Size(0x18) ]
	void SendSignNamesToFootballTaker(uint64_t InItemGid, struct TArray<struct FString> InNames);

	// Object: Function SOL.SOLInteractorComponent.SendChatByInspectRedBall
	// Flags: [Net|NetReliableNative|Event|Public|NetClient]
	// Offset: 0x1529acf4
	// Params: [ Num(0) Size(0x0) ]
	void SendChatByInspectRedBall();

	// Object: Function SOL.SOLInteractorComponent.RequestSpawnThrowableFootball
	// Flags: [Net|NetReliableNative|Event|Protected|NetServer|HasDefaults]
	// Offset: 0x1529ab18
	// Params: [ Num(6) Size(0x3C) ]
	void RequestSpawnThrowableFootball(struct FVector InLoc, struct FVector InThrowDirection, struct FVector InCharacterVelocity, struct FName InItemID, uint64_t InItemGid, int32_t InRandID);

	// Object: Function SOL.SOLInteractorComponent.RequestSpawnFootballGate
	// Flags: [Net|NetReliableNative|Event|Protected|NetServer]
	// Offset: 0x1529aa6c
	// Params: [ Num(1) Size(0x4) ]
	void RequestSpawnFootballGate(int32_t InRandID);

	// Object: Function SOL.SOLInteractorComponent.RequestPlayFootballThrow
	// Flags: [Net|NetReliableNative|Event|Protected|NetServer]
	// Offset: 0x1529aa50
	// Params: [ Num(0) Size(0x0) ]
	void RequestPlayFootballThrow();

	// Object: Function SOL.SOLInteractorComponent.OnInteractKeyDown
	// Flags: [Final|Native|Public]
	// Offset: 0x1529aa3c
	// Params: [ Num(0) Size(0x0) ]
	void OnInteractKeyDown();

	// Object: Function SOL.SOLInteractorComponent.NetMultiPlayFootballEffect
	// Flags: [Net|NetReliableNative|Event|NetMulticast|Public|HasDefaults]
	// Offset: 0x1529a954
	// Params: [ Num(2) Size(0x10) ]
	void NetMultiPlayFootballEffect(int32_t InIdx, struct FVector InServerLoc);

	// Object: Function SOL.SOLInteractorComponent.NetMultiPlayFootballAudio
	// Flags: [Net|NetReliableNative|Event|NetMulticast|Public|HasDefaults]
	// Offset: 0x1529a86c
	// Params: [ Num(2) Size(0x10) ]
	void NetMultiPlayFootballAudio(int32_t InIdx, struct FVector InServerLoc);

	// Object: Function SOL.SOLInteractorComponent.ClientPlayPlaceFootballGateAnim
	// Flags: [Net|NetReliableNative|Event|NetMulticast|Protected]
	// Offset: 0x1529a7c0
	// Params: [ Num(1) Size(0x4) ]
	void ClientPlayPlaceFootballGateAnim(int32_t InRandID);

	// Object: Function SOL.SOLInteractorComponent.ClientPlayFootballThrow
	// Flags: [Net|NetReliableNative|Event|NetMulticast|Protected]
	// Offset: 0x1529a7a4
	// Params: [ Num(0) Size(0x0) ]
	void ClientPlayFootballThrow();

	// Object: Function SOL.SOLInteractorComponent.ClientPlayFootballAudio
	// Flags: [Net|NetReliableNative|Event|Public|HasDefaults|NetClient]
	// Offset: 0x1529a6bc
	// Params: [ Num(2) Size(0x10) ]
	void ClientPlayFootballAudio(int32_t InIdx, struct FVector InServerLoc);

	// Object: Function SOL.SOLInteractorComponent.ClientOpenOscilloscopePanel
	// Flags: [Net|NetReliableNative|Event|Public|NetClient]
	// Offset: 0x1529a610
	// Params: [ Num(1) Size(0x8) ]
	void ClientOpenOscilloscopePanel(struct AInteractor_Oscilloscope* Oscilloscope);

	// Object: Function SOL.SOLInteractorComponent.ClientBreakPlaceFootballGate
	// Flags: [Net|NetReliableNative|Event|NetMulticast|Protected]
	// Offset: 0x1529a528
	// Params: [ Num(2) Size(0xC) ]
	void ClientBreakPlaceFootballGate(struct AGPCharacterBase* InGPCharacterBase, int32_t BreakType);
};

// Object: Class SOL.SOLInteractorManningComponent
// Size: 0x670 (Inherited: 0x660)
struct USOLInteractorManningComponent : UInteractorManningComponent
{
	DEFINE_UE_CLASS_HELPERS(USOLInteractorManningComponent, "SOLInteractorManningComponent")

	uint8_t bIsCountdownReverse : 1; // 0x660(0x1), Mask(0x1)
	uint8_t BitPad_0x660_1 : 7; // 0x660(0x1)
	uint8_t Pad_0x661[0xF]; // 0x661(0xF)

	// Object: Function SOL.SOLInteractorManningComponent.IsCountdownReverse
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x1529b2cc
	// Params: [ Num(1) Size(0x1) ]
	uint8_t IsCountdownReverse();
};

// Object: Class SOL.SOLInteractorOptInteractorAnimExecuteComponent
// Size: 0x2C8 (Inherited: 0x198)
struct USOLInteractorOptInteractorAnimExecuteComponent : UInteractorOptDurativeExecuteComponent
{
	DEFINE_UE_CLASS_HELPERS(USOLInteractorOptInteractorAnimExecuteComponent, "SOLInteractorOptInteractorAnimExecuteComponent")

	struct FGameplayTag OpenTag; // 0x194(0x8)
	struct FGameplayTag CloseTag; // 0x19C(0x8)
	struct TSoftObjectPtr<UAnimSequence> OpenedIdle; // 0x1A8(0x28)
	struct TSoftObjectPtr<UAnimSequence> ClosedIdle; // 0x1D0(0x28)
	struct TSoftObjectPtr<UAnimSequence> OpenForward; // 0x1F8(0x28)
	struct TSoftObjectPtr<UAnimSequence> CloseForward; // 0x220(0x28)
	struct FSoftObjectPath OpenAudioPath; // 0x248(0x18)
	struct FSoftObjectPath CloseAudioPath; // 0x260(0x18)
	struct TArray<struct UAnimSequence*> CachedAnimSequences; // 0x278(0x10)
	struct AInteractorBaseProxy* CachedInteractorBaseProxy; // 0x288(0x8)
	struct UAsyncSkeletalMeshComponent* CachedMeshComponent; // 0x290(0x8)
	struct UInteractorOptSwitcherExecuteComponent* CachedSwitcherComp; // 0x298(0x8)
	uint8_t Pad_0x2A0[0x28]; // 0x2A0(0x28)

	// Object: Function SOL.SOLInteractorOptInteractorAnimExecuteComponent.OnMontageEnded
	// Flags: [Final|Native|Protected]
	// Offset: 0x1529b3f4
	// Params: [ Num(2) Size(0x9) ]
	void OnMontageEnded(struct UAnimMontage* Montage, uint8_t bInterrupted);

	// Object: Function SOL.SOLInteractorOptInteractorAnimExecuteComponent.OnAnimLoadComplete
	// Flags: [Final|Native|Protected]
	// Offset: 0x1529b324
	// Params: [ Num(1) Size(0x10) ]
	void OnAnimLoadComplete(struct TArray<struct FSoftObjectPath> AssetRef);
};

// Object: Class SOL.SOLInteractSystem
// Size: 0x6C8 (Inherited: 0xF8)
struct USOLInteractSystem : USOLInteractSystemBase
{
	DEFINE_UE_CLASS_HELPERS(USOLInteractSystem, "SOLInteractSystem")

	uint8_t bIsValidSystem : 1; // 0xF8(0x1), Mask(0x1)
	uint8_t BitPad_0xF8_1 : 7; // 0xF8(0x1)
	uint8_t bFootballSignOnlyFromTeammate : 1; // 0xF9(0x1), Mask(0x1)
	uint8_t BitPad_0xF9_1 : 7; // 0xF9(0x1)
	uint8_t Pad_0xFA[0x6]; // 0xFA(0x6)
	struct FText DSShowTipsToSignerText; // 0x100(0x18)
	struct FText DSShowTipsToTakerText; // 0x118(0x18)
	struct AInteractor_Football* ThrowableFootballClass; // 0x130(0x8)
	struct AInteractor_Football* ThrowableNormalFootballClass; // 0x138(0x8)
	struct FName FPPRightHandName; // 0x140(0x8)
	struct TArray<struct FName> NormalFootballItemIDArray; // 0x148(0x10)
	struct TArray<struct FName> GoldFootballItemIDArray; // 0x158(0x10)
	struct TArray<struct FName> RedFootballItemIDArray; // 0x168(0x10)
	struct TSoftObjectPtr<UAnimSequenceBase> PlaceFootballGate1PAnimPath; // 0x178(0x28)
	struct TSoftObjectPtr<UAnimSequenceBase> PlaceFootballGate3PAnimPath; // 0x1A0(0x28)
	struct FName PlaceFootballGateItemID; // 0x1C8(0x8)
	float FootballGate1PAnimBlendInTime; // 0x1D0(0x4)
	float FootballGate1PAnimBlendOutTime; // 0x1D4(0x4)
	float FootballGate3PAnimBlendInTime; // 0x1D8(0x4)
	float FootballGate3PAnimBlendOutTime; // 0x1DC(0x4)
	float PlaceFootballGateDuration; // 0x1E0(0x4)
	uint8_t Pad_0x1E4[0x4]; // 0x1E4(0x4)
	struct AFootballGate* FootballGateClass; // 0x1E8(0x8)
	struct AFootballGate* FootballGateClass_NoRep; // 0x1F0(0x8)
	struct AFootballGate* FootballGateClass_NoRep_GM; // 0x1F8(0x8)
	struct AFootballGate* FootballStaticGateClass_GM; // 0x200(0x8)
	struct AFootballGate* FootballAIGateClass_GM; // 0x208(0x8)
	float ThrowFootballMinInterval; // 0x210(0x4)
	float PlaceFootballGateMinInterval; // 0x214(0x4)
	float PlaceFootballGateMaxDelay; // 0x218(0x4)
	int32_t PlacedFootballGateMaxNum; // 0x21C(0x4)
	struct FVector2D FootballSignTextureSize; // 0x220(0x8)
	uint8_t bUseGammaCorrection : 1; // 0x228(0x1), Mask(0x1)
	uint8_t BitPad_0x228_1 : 7; // 0x228(0x1)
	uint8_t Pad_0x229[0x7]; // 0x229(0x7)
	struct UFootballSignWidget* FootballSignWidgetClass; // 0x230(0x8)
	uint8_t Pad_0x238[0x8]; // 0x238(0x8)
	struct UTextureRenderTarget2D* FootballSignRenderTarget2D; // 0x240(0x8)
	struct UFootballSignWidget* FootballSignWidget; // 0x248(0x8)
	struct TArray<struct FFootballSignNames> FootballSignNamesArray; // 0x250(0x10)
	uint8_t Pad_0x260[0x8]; // 0x260(0x8)
	struct TArray<struct FString> CachedFootballSignNames; // 0x268(0x10)
	struct AActor* FootballAwardSingleItemContainerClass; // 0x278(0x8)
	struct AActor* FootballAwardSingleItemContainerClass_AI; // 0x280(0x8)
	struct FGameplayTag ThrowFootballTag; // 0x288(0x8)
	uint8_t bUseOneTeamOnlyThrowOneFootball : 1; // 0x290(0x1), Mask(0x1)
	uint8_t BitPad_0x290_1 : 7; // 0x290(0x1)
	uint8_t Pad_0x291[0x3]; // 0x291(0x3)
	float ShowBtnFootballMaxSpeedSquare; // 0x294(0x4)
	float RequestSpawnFootballMaxDelay; // 0x298(0x4)
	float RequestSpawnFootballMaxDis; // 0x29C(0x4)
	float SweepSideOffsetForFootballInterrupt; // 0x2A0(0x4)
	float SweepUpOffsetForFootballInterrupt; // 0x2A4(0x4)
	float SweepRadiusForFootballInterrupt; // 0x2A8(0x4)
	uint8_t Pad_0x2AC[0x4]; // 0x2AC(0x4)
	struct UGPAudioEventAsset* FootballPickupAudioEvent; // 0x2B0(0x8)
	struct UGPAudioEventAsset* FootballSignAudioEvent; // 0x2B8(0x8)
	struct UGPAudioEventAsset* FootballDespawnAudioEvent; // 0x2C0(0x8)
	struct UGPAudioEventAsset* FootballGoalAudioEvent; // 0x2C8(0x8)
	struct FName FootballGoalEffectName; // 0x2D0(0x8)
	struct FName FootballBoomEffectName; // 0x2D8(0x8)
	struct FString FootballGoalVO; // 0x2E0(0x10)
	struct UGPAudioEventAsset* FootballKickSoftAudioEvent; // 0x2F0(0x8)
	struct UGPAudioEventAsset* FootballKickHardAudioEvent; // 0x2F8(0x8)
	struct UGPAudioEventAsset* FootballBounceSoftAudioEvent; // 0x300(0x8)
	struct UGPAudioEventAsset* FootballBounceHardAudioEvent; // 0x308(0x8)
	struct FText CantPlaceFootballGateHereText; // 0x310(0x18)
	struct FText GoldRedFootballEnterStaticGateText; // 0x328(0x18)
	struct FText GoldRedFootballEnterAIGateText; // 0x340(0x18)
	struct FText AllFootballEnterGateText; // 0x358(0x18)
	struct FText NormalFootballEnterAIGateText; // 0x370(0x18)
	struct FText NormalFootballResetText; // 0x388(0x18)
	struct FText NormalFootballInterruptText; // 0x3A0(0x18)
	struct FText GoldRedFootballInterruptOwnerText; // 0x3B8(0x18)
	struct FText GoldRedFootballInterruptNoOwnerText; // 0x3D0(0x18)
	struct FName InspectRedBallChatPresetID; // 0x3E8(0x8)
	struct FText FootballInspectTipsText; // 0x3F0(0x18)
	int32_t ShowFootballInspectTipsTextMaxTimes; // 0x408(0x4)
	uint8_t Pad_0x40C[0x4]; // 0x40C(0x4)
	struct FText CantThrowFootballInWaterText; // 0x410(0x18)
	float PlayAudioForHitCharacterInterval; // 0x428(0x4)
	float PlayAudioForHitCharacterMinSpeedSquare; // 0x42C(0x4)
	float PlayAudioForHitCharacterKickHardMinSpeed; // 0x430(0x4)
	float PlayAudioForHitCharacterBounceHardMinSpeed; // 0x434(0x4)
	float InspectExitDelaySpawnNormalFootballDuration; // 0x438(0x4)
	float NormalFootballAutoThrowDelay; // 0x43C(0x4)
	uint8_t bPlaceFootballUseCameraRotationCalc : 1; // 0x440(0x1), Mask(0x1)
	uint8_t BitPad_0x440_1 : 7; // 0x440(0x1)
	uint8_t bUseFootballHitSceneAudio : 1; // 0x441(0x1), Mask(0x1)
	uint8_t BitPad_0x441_1 : 7; // 0x441(0x1)
	uint8_t Pad_0x442[0x2]; // 0x442(0x2)
	float PlayAudioForHitSceneInterval; // 0x444(0x4)
	float PlayAudioForHitSceneBounceHardMinSpeed; // 0x448(0x4)
	float FootballHitWallMaxNormalZ; // 0x44C(0x4)
	float FootballHitGroundMinBallVelocityZ; // 0x450(0x4)
	float PlayAudioForHitSceneMinSpeedSquare; // 0x454(0x4)
	uint8_t bUseDestroyFootballSignWidgetRenderer : 1; // 0x458(0x1), Mask(0x1)
	uint8_t BitPad_0x458_1 : 7; // 0x458(0x1)
	uint8_t bUseDelayDestroyFootballSignWidgetRenderer : 1; // 0x459(0x1), Mask(0x1)
	uint8_t BitPad_0x459_1 : 7; // 0x459(0x1)
	uint8_t Pad_0x45A[0x2]; // 0x45A(0x2)
	float DelayDestroyFootballSignWidgetRendererDuration; // 0x45C(0x4)
	uint8_t Pad_0x460[0x8]; // 0x460(0x8)
	struct TArray<struct FFootballSignUins> FootballSignUinsArray; // 0x468(0x10)
	struct TMap<uint64_t, struct AInteractor_Football*> ItemGid2FootballMap; // 0x478(0x50)
	struct TMap<uint64_t, struct AInteractor_Football*> PlayerUin2FootballMap; // 0x4C8(0x50)
	struct TMap<int32_t, struct AInteractor_Football*> TeamID2FootballMap; // 0x518(0x50)
	struct TMap<uint64_t, struct AInteractor_Football*> ItemGid2NormalFootballMap; // 0x568(0x50)
	struct TArray<uint64_t> CachedNormalFootballInitItemGidsArray; // 0x5B8(0x10)
	struct TMap<uint64_t, struct FVector> ItemGid2NormalFootballInitLocMap; // 0x5C8(0x50)
	struct TMap<uint64_t, struct AInteractor_Football*> AllItemGid2FootballMap; // 0x618(0x50)
	struct TMap<uint64_t, uint64_t> AllItemGid2PlayerUinMap; // 0x668(0x50)
	uint8_t Pad_0x6B8[0x10]; // 0x6B8(0x10)

	// Object: Function SOL.SOLInteractSystem.NetMultiPlayFootballEffect
	// Flags: [Net|NetReliableNative|Event|NetMulticast|Public|HasDefaults]
	// Offset: 0x1529b700
	// Params: [ Num(2) Size(0x10) ]
	void NetMultiPlayFootballEffect(int32_t InIdx, struct FVector InServerLoc);

	// Object: Function SOL.SOLInteractSystem.NetMultiPlayFootballAudio
	// Flags: [Net|NetReliableNative|Event|NetMulticast|Public|HasDefaults]
	// Offset: 0x1529b5dc
	// Params: [ Num(3) Size(0x18) ]
	void NetMultiPlayFootballAudio(int32_t InIdx, struct FVector InServerLoc, struct ASOLCharacter* InSOLCharacter);
};

// Object: Class SOL.SOLPathFollowComponent
// Size: 0x4C0 (Inherited: 0x4C0)
struct USOLPathFollowComponent : UGPPathFollowComponent
{
	DEFINE_UE_CLASS_HELPERS(USOLPathFollowComponent, "SOLPathFollowComponent")
};

// Object: Class SOL.SOLPlayerSettlementComponent
// Size: 0x838 (Inherited: 0x838)
struct USOLPlayerSettlementComponent : UPlayerSettlementComponent
{
	DEFINE_UE_CLASS_HELPERS(USOLPlayerSettlementComponent, "SOLPlayerSettlementComponent")
};

// Object: Class SOL.StartSpotAllocator_SOL
// Size: 0x370 (Inherited: 0x148)
struct UStartSpotAllocator_SOL : UStartSpotAllocator
{
	DEFINE_UE_CLASS_HELPERS(UStartSpotAllocator_SOL, "StartSpotAllocator_SOL")

	struct TArray<struct FOrientationGroup> OrientationGroups; // 0x148(0x10)
	struct TMap<uint32_t, struct ATeamStart*> RemainingTeamStarts; // 0x158(0x50)
	struct TMap<uint32_t, uint32_t> OrientationPlayerNums; // 0x1A8(0x50)
	struct UDataTable* AllocatorTemplateTable; // 0x1F8(0x8)
	struct UDataTable* TeamWeightDataTable; // 0x200(0x8)
	struct UDataTable* TeamTypePriorityTable; // 0x208(0x8)
	uint8_t Pad_0x210[0xD8]; // 0x210(0xD8)
	struct TMap<uint32_t, struct ATeamStart*> AllocatedStarts; // 0x2E8(0x50)
	uint8_t Pad_0x338[0x38]; // 0x338(0x38)
};

// Object: Class SOL.StartSpotAllocator_Trials
// Size: 0x2F0 (Inherited: 0x148)
struct UStartSpotAllocator_Trials : UStartSpotAllocator
{
	DEFINE_UE_CLASS_HELPERS(UStartSpotAllocator_Trials, "StartSpotAllocator_Trials")

	struct TArray<struct FOrientationGroup> OrientationGroups; // 0x148(0x10)
	struct TMap<uint32_t, struct ATeamStart*> RemainingTeamStarts; // 0x158(0x50)
	struct TMap<uint32_t, uint32_t> OrientationPlayerNums; // 0x1A8(0x50)
	struct UDataTable* AllocatorTemplateTable; // 0x1F8(0x8)
	uint8_t Pad_0x200[0x88]; // 0x200(0x88)
	struct TMap<uint32_t, struct ATeamStart*> AllocatedStarts; // 0x288(0x50)
	uint8_t Pad_0x2D8[0x18]; // 0x2D8(0x18)
};

// Object: Class SOL.TreasureMgrComponent
// Size: 0x170 (Inherited: 0xF8)
struct UTreasureMgrComponent : UActorComponent
{
	DEFINE_UE_CLASS_HELPERS(UTreasureMgrComponent, "TreasureMgrComponent")

	struct TMap<int32_t, struct AInteractor_GiftTreasure*> AllTreasures; // 0xF8(0x50)
	uint8_t Pad_0x148[0x28]; // 0x148(0x28)

	// Object: Function SOL.TreasureMgrComponent.OnMatchStart
	// Flags: [Final|Native|Public]
	// Offset: 0x1529ef60
	// Params: [ Num(0) Size(0x0) ]
	void OnMatchStart();

	// Object: Function SOL.TreasureMgrComponent.OnMatchEnd
	// Flags: [Final|Native|Public]
	// Offset: 0x1529ee80
	// Params: [ Num(2) Size(0x10) ]
	void OnMatchEnd(EMatchOverReason MatchOverReason, int64_t PlayerId);
};

// Object: Class SOL.VaultGasVolume
// Size: 0x5E8 (Inherited: 0x378)
struct AVaultGasVolume : ATriggerBox
{
	DEFINE_UE_CLASS_HELPERS(AVaultGasVolume, "VaultGasVolume")

	uint8_t Pad_0x378[0x18]; // 0x378(0x18)
	uint8_t bPreviewRange : 1; // 0x390(0x1), Mask(0x1)
	uint8_t BitPad_0x390_1 : 7; // 0x390(0x1)
	uint8_t Pad_0x391[0x7]; // 0x391(0x7)
	struct UStaticMeshComponent* PreviewMesh; // 0x398(0x8)
	struct FVector PreviewMeshSize; // 0x3A0(0xC)
	uint8_t Pad_0x3AC[0x14]; // 0x3AC(0x14)
	struct UBoxComponent* TriggerBox; // 0x3C0(0x8)
	uint8_t bEnableForAI : 1; // 0x3C8(0x1), Mask(0x1)
	uint8_t BitPad_0x3C8_1 : 7; // 0x3C8(0x1)
	uint8_t Pad_0x3C9[0x7]; // 0x3C9(0x7)
	struct TArray<struct FVGVConfig> VGVConfigs; // 0x3D0(0x10)
	struct FString GASBuff; // 0x3E0(0x10)
	uint8_t Pad_0x3F0[0x4]; // 0x3F0(0x4)
	float TimerInterval; // 0x3F4(0x4)
	float HasActiveTime; // 0x3F8(0x4)
	uint8_t Pad_0x3FC[0x1C]; // 0x3FC(0x1C)
	struct FName ContainerTag; // 0x418(0x8)
	uint8_t Pad_0x420[0x1]; // 0x420(0x1)
	uint8_t bAutoActive : 1; // 0x421(0x1), Mask(0x1)
	uint8_t BitPad_0x421_1 : 7; // 0x421(0x1)
	uint8_t Pad_0x422[0x2]; // 0x422(0x2)
	float DelayActiveTime; // 0x424(0x4)
	int32_t ActiveState; // 0x428(0x4)
	uint8_t Pad_0x42C[0x15C]; // 0x42C(0x15C)
	struct TArray<struct FName> ScreenEffectNames; // 0x588(0x10)
	struct TArray<struct FName> ScreenEffectNames_HD; // 0x598(0x10)
	struct TArray<struct FName> ScreenEffectNames_Mobile; // 0x5A8(0x10)
	struct FName FxActorTag; // 0x5B8(0x8)
	uint8_t Pad_0x5C0[0x10]; // 0x5C0(0x10)
	struct UGPAudioEventAsset* ActiveAudioEvent; // 0x5D0(0x8)
	float AutoVoiceStopTime; // 0x5D8(0x4)
	uint8_t Pad_0x5DC[0xC]; // 0x5DC(0xC)

	// Object: Function SOL.VaultGasVolume.TickPerform
	// Flags: [Final|Native|Public]
	// Offset: 0x1529f734
	// Params: [ Num(1) Size(0x4) ]
	void TickPerform(float DeltaTime);

	// Object: Function SOL.VaultGasVolume.ShowPreviewMesh
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0x1529f680
	// Params: [ Num(1) Size(0x1) ]
	void ShowPreviewMesh(uint8_t bShow);

	// Object: Function SOL.VaultGasVolume.ServerRealActive
	// Flags: [Final|Native|Protected]
	// Offset: 0x1529f66c
	// Params: [ Num(0) Size(0x0) ]
	void ServerRealActive();

	// Object: Function SOL.VaultGasVolume.ServerDeactive
	// Flags: [Final|Native|Public]
	// Offset: 0x1529f658
	// Params: [ Num(0) Size(0x0) ]
	void ServerDeactive();

	// Object: Function SOL.VaultGasVolume.ServerActive
	// Flags: [Final|Native|Public]
	// Offset: 0x1529f644
	// Params: [ Num(0) Size(0x0) ]
	void ServerActive();

	// Object: Function SOL.VaultGasVolume.RemoveScreenEffect
	// Flags: [Final|Native|Protected|BlueprintCallable]
	// Offset: 0x1529f630
	// Params: [ Num(0) Size(0x0) ]
	void RemoveScreenEffect();

	// Object: Function SOL.VaultGasVolume.OnVolumeOverlapEnd
	// Flags: [Final|Native|Public]
	// Offset: 0x1529f4dc
	// Params: [ Num(4) Size(0x1C) ]
	void OnVolumeOverlapEnd(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex);

	// Object: Function SOL.VaultGasVolume.OnVolumeOverlapBegin
	// Flags: [Final|Native|Public|HasOutParms]
	// Offset: 0x1529f2e4
	// Params: [ Num(6) Size(0xA8) ]
	void OnVolumeOverlapBegin(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, uint8_t bFromSweep, const struct FHitResult& SweepResult);

	// Object: Function SOL.VaultGasVolume.OnServerGameEnd
	// Flags: [Final|Native|Protected]
	// Offset: 0x1529f204
	// Params: [ Num(2) Size(0x10) ]
	void OnServerGameEnd(EMatchOverReason Reason, int64_t PlayerUin);

	// Object: Function SOL.VaultGasVolume.OnRep_ActiveState
	// Flags: [Final|Native|Protected]
	// Offset: 0x1529f1f0
	// Params: [ Num(0) Size(0x0) ]
	void OnRep_ActiveState();

	// Object: Function SOL.VaultGasVolume.OnLocalFocusChange
	// Flags: [Final|Native|Protected]
	// Offset: 0x1529f114
	// Params: [ Num(2) Size(0x10) ]
	void OnLocalFocusChange(struct AActor* OldTarget, struct AActor* NewTarget);

	// Object: Function SOL.VaultGasVolume.GetHasActivatedContainer
	// Flags: [Final|Native|Protected|BlueprintCallable]
	// Offset: 0x1529f0f8
	// Params: [ Num(1) Size(0x1) ]
	uint8_t GetHasActivatedContainer();

	// Object: Function SOL.VaultGasVolume.GetCVarEnableVGVPreview
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x1529f0c0
	// Params: [ Num(1) Size(0x1) ]
	static uint8_t GetCVarEnableVGVPreview();

	// Object: Function SOL.VaultGasVolume.ClientPlayActiveVoice
	// Flags: [Net|NetReliableNative|Event|NetMulticast|Protected|NetClient]
	// Offset: 0x1529f0a4
	// Params: [ Num(0) Size(0x0) ]
	void ClientPlayActiveVoice();

	// Object: Function SOL.VaultGasVolume.CheckCharacterCanPerform
	// Flags: [Final|Native|Public]
	// Offset: 0x1529eff4
	// Params: [ Num(2) Size(0x9) ]
	uint8_t CheckCharacterCanPerform(struct AGPCharacter* CHARACTER);

	// Object: Function SOL.VaultGasVolume.AddScreenEffect
	// Flags: [Final|Native|Protected|BlueprintCallable]
	// Offset: 0x1529efe0
	// Params: [ Num(0) Size(0x0) ]
	void AddScreenEffect();

	// Object: Function SOL.VaultGasVolume.ActiveFxActor
	// Flags: [Final|Native|Protected|BlueprintCallable]
	// Offset: 0x1529efcc
	// Params: [ Num(0) Size(0x0) ]
	void ActiveFxActor();

	// Object: Function SOL.VaultGasVolume.ActivateContainer
	// Flags: [Final|Native|Protected|BlueprintCallable]
	// Offset: 0x1529efb8
	// Params: [ Num(0) Size(0x0) ]
	void ActivateContainer();
};

// Object: Class SOL.VaultGateActor
// Size: 0x418 (Inherited: 0x370)
struct AVaultGateActor : AActor
{
	DEFINE_UE_CLASS_HELPERS(AVaultGateActor, "VaultGateActor")

	uint8_t Pad_0x370[0x2C]; // 0x370(0x2C)
	int32_t GateState; // 0x39C(0x4)
	struct FSoftObjectPath OpenAnimationPath; // 0x3A0(0x18)
	struct UAnimSequenceBase* OpenAnimation; // 0x3B8(0x8)
	uint8_t Pad_0x3C0[0x8]; // 0x3C0(0x8)
	struct USceneComponent* RootSceneComponent; // 0x3C8(0x8)
	struct UGPSkeletalMeshComponent* GateSKM; // 0x3D0(0x8)
	struct UBoxComponent* NavBoxClosed; // 0x3D8(0x8)
	struct UBoxComponent* NavBoxOpened; // 0x3E0(0x8)
	float OpenDuration; // 0x3E8(0x4)
	uint8_t bAutoOpenOnStart : 1; // 0x3EC(0x1), Mask(0x1)
	uint8_t BitPad_0x3EC_1 : 7; // 0x3EC(0x1)
	uint8_t Pad_0x3ED[0x3]; // 0x3ED(0x3)
	float AutoOpenDelay; // 0x3F0(0x4)
	uint8_t Pad_0x3F4[0x24]; // 0x3F4(0x24)

	// Object: Function SOL.VaultGateActor.ServerActive
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x1529f93c
	// Params: [ Num(0) Size(0x0) ]
	void ServerActive();

	// Object: Function SOL.VaultGateActor.OnRep_GateState
	// Flags: [Final|Native|Protected]
	// Offset: 0x1529f898
	// Params: [ Num(1) Size(0x4) ]
	void OnRep_GateState(int32_t PreState);

	// Object: Function SOL.VaultGateActor.IsOpened
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x1529f87c
	// Params: [ Num(1) Size(0x1) ]
	uint8_t IsOpened();

	// Object: Function SOL.VaultGateActor.BP_PlayOpenAnimation
	// Flags: [Event|Protected|BlueprintCallable|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(0) Size(0x0) ]
	void BP_PlayOpenAnimation();
};

} // namespace SDK
