#pragma once

#include "../CoreUObject_classes.hpp"
#include "AIModule.hpp"
#include "AvatarSystem.hpp"
#include "DFMGameHud.hpp"
#include "DFMGameplay.hpp"
#include "DFMGlobalDefines.hpp"
#include "DFMVehicle.hpp"
#include "Engine.hpp"
#include "GPAudioRuntime.hpp"
#include "GPDeformable.hpp"
#include "GPGameHud.hpp"
#include "GPGameplay.hpp"
#include "GPGlobalDefines.hpp"
#include "GPResource.hpp"
#include "GPWeaponRuntime.hpp"
#include "GameCore.hpp"
#include "GameplayTags.hpp"

namespace SDK
{

// Package: DFMAbility
// Enums: 43
// Structs: 166
// Classes: 419

struct AAIController;
struct AAbilityWeaponThrowableBullet;
struct AActor;
struct AAssembleWeaponActor;
struct ABreakableItemBase;
struct ACHARACTER;
struct AController;
struct ADFMAICharacter;
struct ADFMAIController;
struct ADFMCharacter;
struct ADFMSkillSmokeActor;
struct ADFMVehicleBase;
struct ADFMWaterRippleEffect;
struct AGPCharacter;
struct AGPCharacterBase;
struct AGPDeformableSmokeEmitActor;
struct AGPPlayerCameraManager;
struct AGPPreviewLineActor;
struct AGPUASActor;
struct AGPVehicleBase;
struct AGPWeaponBulletBase;
struct AGPWeaponBulletThrowableProjectile;
struct AInteractorBaseProxy;
struct AItemPreviewActor;
struct APawn;
struct APlayerCommanderFakeAIController;
struct APlayerController;
struct ARankSkillPreviewPlacementActor;
struct ASkillSubsystem;
struct AWaterDataAssetsStreamer;
struct AWeaponBase;
enum class EAbilityNodeExcuteType : uint8_t;
enum class EAbilityStateFlag : uint8_t;
enum class EAbilityTriggerType : uint8_t;
enum class EAbilityVehicleDestroyReason : uint8_t;
enum class EAbiltyTemplateAttachMeshMode : uint8_t;
enum class EAddAmmoFailReason : uint8_t;
enum class EAnimFirefightingType : uint8_t;
enum class EAnimationPlayType : uint8_t;
enum class EAudioListenerType : uint8_t;
enum class EAutoShowBubbleSourceType : uint8_t;
enum class EBionicBirdMarkingType : uint8_t;
enum class EBuffGameRole : uint8_t;
enum class EChainHookState : uint8_t;
enum class EChainHookTargetType : uint8_t;
enum class ECharacterAudioType : uint8_t;
enum class ECharacterFSMEventDefine : uint8_t;
enum class ECharacterLiveStatus : uint8_t;
enum class ECharacterPart : uint8_t;
enum class ECharacterQTEStateRight : uint8_t;
enum class ECharacterStateMask : uint8_t;
enum class ECharingSlot : uint8_t;
enum class ECollisionChannel : uint8_t;
enum class ECraterSizeType : uint8_t;
enum class EDFMAbilityLogicType : uint8_t;
enum class EDFMGamePlayMode : uint8_t;
enum class EDFMMapIconType : uint8_t;
enum class EDamageType : uint8_t;
enum class EDrawDebugTrace : uint8_t;
enum class EExplosionType : uint8_t;
enum class EFSMForbidReason : uint8_t;
enum class EFSMGamePlayStatusDefine : uint8_t;
enum class EGPAudioBlueprintType : uint8_t;
enum class EGPInputType : uint8_t;
enum class EGPQuestActionTriggerType : uint8_t;
enum class EGPWeaponInnerEvent : uint8_t;
enum class EGPWeaponMode : uint8_t;
enum class EGPWeaponStateType : uint8_t;
enum class EGameHUDSate : uint16_t;
enum class EGroupPatrolPose : uint8_t;
enum class EHeroShapeShiftType : uint8_t;
enum class EHitEventType : uint8_t;
enum class EInteractiveGetWeaponType : uint8_t;
enum class EInteractivePutWeaponType : uint8_t;
enum class EMarkerCampType : uint8_t;
enum class EMatchOverReason : uint8_t;
enum class EMovementMode : uint8_t;
enum class ENetMode : uint8_t;
enum class ENetRole : uint8_t;
enum class ENodeCantPlay : uint8_t;
enum class EObstacleHeightType : uint8_t;
enum class EOutLineEffectType : uint32_t;
enum class EPatrolType : uint8_t;
enum class EPerfGearQualityLevel : uint8_t;
enum class EPhysicalSurface : uint8_t;
enum class EPlayerCombatDamageMakerWeaponType : uint8_t;
enum class ERelativeTransformSpace : uint8_t;
enum class ERenderMatrixMode : uint8_t;
enum class EScoreName : uint16_t;
enum class ESkillActorEvent : uint8_t;
enum class ESkillBehavior : uint8_t;
enum class ESkillBtnCall : uint8_t;
enum class ESkillLogicType : uint8_t;
enum class ESkillRecycleType : uint8_t;
enum class ESkillUISlot : uint8_t;
enum class ESkillUIState : uint8_t;
enum class ESlotButton : uint8_t;
enum class ESmokeState : uint8_t;
enum class ESoundVisualizationType : uint8_t;
enum class EStaminaIndependentChangeType : uint8_t;
enum class ESupportType : uint8_t;
enum class ETacticalEquipmentMarkerType : uint8_t;
enum class EVehicleAbilityType : uint8_t;
enum class EWeaponAddAmmoType : uint8_t;
enum class EWeaponCancelCurrentStateReason : uint8_t;
enum class EWeaponSwitchType : uint8_t;
struct FAbilityBuffData;
struct FAbilityClientDrawPathData;
struct FAbilityDetectorBuffData;
struct FAbilityPlayMontageResources;
struct FAbilityRushSettingConfig;
struct FAbilityTracingPathData;
struct FAbiltyTemplateAttachMeshConfig;
struct FAudioListenerItemData;
struct FCharacterHeroResourceAttachMeshData;
struct FConflictZoneInfo;
struct FDamageResultInfo;
struct FDamageSourceInfo;
struct FEndAbilityOption;
struct FFindFloorResult;
struct FGPAbilityEntityData;
struct FGPAudioFuturePlayingID;
struct FGPDeformableSmokePathPoint;
struct FGPPlayerUIN;
struct FGPRollSettingConfig;
struct FGameplayTag;
struct FGameplayTagContainer;
struct FHitResult;
struct FKillInfo;
struct FMatCurveColorParameterConfig;
struct FRelinkEnableInfo;
struct FRightKeyTipsSkillData;
struct FScreenPostProcesaCurveFloatParameterConfig;
struct FScreenPostProcesaScalarParameterConfig;
struct FScreenPostProcesaVectorParameterConfig;
struct FSkillSmokeBreakerInfo;
struct FSmokeBreakInfo;
struct FVector_NetQuantize10;
struct FVector_NetQuantize100;
struct FWeaponBulletBaseInitParam;
struct FWeaponEffectRes;
struct FWeaponFireRepInfo;
struct IChainHookTakerInterface;
struct IGPWeaponInterface;
struct IWeaponInterface;
struct UAbilityADSMapIconViewController;
struct UAbilityElectricDeviceMapIconViewController;
struct UAbilityEntityManager;
struct UAbilityRebornFlagMapIconViewController;
struct UAnimInstance;
struct UAnimMontage;
struct UAnimSequence;
struct UAnimSequenceBase;
struct UAnimationAsset;
struct UBaseUIView;
struct UBionicSpyHudView;
struct UBlendSpaceBase;
struct UBoxComponent;
struct UCallAIActivityZoneMapIconViewController;
struct UCameraModifier;
struct UCapsuleComponent;
struct UChainHookTakerComponent;
struct UConflictZoneMapIconViewController;
struct UCurveBase;
struct UCurveFloat;
struct UCurveLinearColor;
struct UCurveVector;
struct UDFHDKeyIconBoxTextWidget;
struct UDFMAIBoss07ADSComponent;
struct UDFMAudioListenerComponent;
struct UDFMBattleFieldSystem;
struct UDFMBuffDetectComponent;
struct UDFMCharacterBuffEntityBase;
struct UDFMCruiseMissileView;
struct UDFMInteractiveWaterComponent;
struct UDFMSkeletalMeshComponent;
struct UDFMSkillComponent;
struct UDFMUASActionCommonProgressBar;
struct UDamageType;
struct UDataTable;
struct UEnvQuery;
struct UEnvQueryContext;
struct UFXResourceContainerComponent;
struct UFireSpreadSourceComponent;
struct UGPAbilityEffectProxy;
struct UGPAbilityGameStateComponent;
struct UGPAudioEventAsset;
struct UGPCammyBulletDetectorData;
struct UGPCruiseMissileMovementComponent;
struct UGPDeformableGameStateComponent;
struct UGPModularWeaponDesc;
struct UGPSkeletalMeshComponent;
struct UGPSkillComponent;
struct UGPSlotChargingComponent;
struct UGPSupportLockerData;
struct UGPSupportWeaponMarkerItem;
struct UGPUASMovementComponent;
struct UGPWeaponFireModeParamsAbilityLauncher;
struct UGameAkComponent;
struct UGameStaticAkComponent;
struct UGameplayEffect;
struct UGeneralSignificanceComponent;
struct UInstancedStaticMeshComponent;
struct UMapIconViewController;
struct UMapItemRangeSectorViewController;
struct UMapItemRangeViewController;
struct UMaterialInstanceDynamic;
struct UMaterialInterface;
struct UMeshComponent;
struct UMobilePlayerInput;
struct UParticleSystemComponent;
struct UPrimitiveComponent;
struct USceneComponent;
struct UShapeComponent;
struct USkeletalMesh;
struct USkeletalMeshComponent;
struct USphereComponent;
struct UStaticMesh;
struct UStaticMeshComponent;
struct USwarmsComponent;
struct UTextureRenderTarget2D;
struct UTravelerGameAk;
struct UUserWidget;
struct UWorld;
struct FSubTrailFX;
struct FAIADSWeaponEffectData;
struct FCallAIStatusInfo;
struct FCallAIUnitInfo;
struct FEnemyPlayerInfo;
struct FCallAI2SpawnContext;
struct FPendingExitAI;
struct FCallAIConfigElem;
struct FAISpawnInfo;
struct FCallAIConfig;
struct FWayPointConstraint;
struct FPathSegmentConstraint;
struct FBendingConstraint;
struct FDistanceConstraint;
struct FAttachRopeNode;
struct FAttachRopeConfig;
struct FConflictZoneServerData;
struct FSpySwitchMapData;
struct FAbilityMineAnimInstanceProxy;
struct FWaterEffectBroadcastMsg;
struct FWaterEffectFX;
struct FProjectileExplodeInfo;
struct FAlertMarkConfig;
struct FCallAICharacterInfo;
struct FAIAlertSubtitleInfo;
struct FAIAlertInfo;
struct FArtilleryShellHitFXSurfaceAttribute;
struct FArtilleryShellMovementParameter;
struct FBreakthroughEventRange;
struct FBionicBirdAnimInstanceProxy;
struct FBionicBirdMarkingJoint;
struct FBionicBirdMarkingAnimInstanceProxy;
struct FBuffForbiddenData;
struct FC203MarkData;
struct FC204InterferenceAnimInstanceProxy;
struct FC501FightTargetCandidate;
struct FAIFollowSlot;
struct FCallAIInfoPanelViewLogic;
struct FCallDogFightTargetCandidate;
struct FChainHookAnimInstanceProxy;
struct FChainHookBendCheckData;
struct FChainHookRoleData;
struct FChainHookRopePoint;
struct FChainHookItemAnimInstanceProxy;
struct FAbilityBarbedWireAreaData;
struct FDFMAbilityBarbedWireTarget;
struct FDFMAbilityBaseBoxCD;
struct FAbilityBlackBorad_ItemPreview;
struct FAbilityBlackBorad_LineTrace;
struct FAbilitySkeletalMeshData;
struct FAbilityBlackBorad_AttachMesh;
struct FAbilityAttachMeshData;
struct FAbilityBlackBorad_EngineerData;
struct FAbilityNotifyCommondData;
struct FAbilityBlackBorad_SpawnActor;
struct FSystemSpawnActorData;
struct FAbilityBlackBorad_NotifyCommond;
struct FC204InterferenceData;
struct FSonarDeviceConfig;
struct FDetectItem;
struct FAbilityDataBase;
struct FAbilityDefaultData;
struct FMarkerEffectData;
struct FDiffuseAreaClientCell;
struct FSyncDiffuseAreaClientCell;
struct FDiffuseAreaCell;
struct FDFMAbilityArrowData;
struct FAbilityFunctionData;
struct FAbilityTempalteLoadData;
struct FAbilityTemplateRepData;
struct FAbilityTaskRepData;
struct FDefenseConfig;
struct FEnginVehicleChargingData;
struct FMauriceAuraConfig;
struct FMauriceAuraBuffByCount;
struct FLevelAbilityActorInfo;
struct FAbilityProjectilData;
struct FAbilityMontageLoadHadnle;
struct FAbilityMontageLoadData;
struct FAbilityParticleSmokeWallParam;
struct FAbilityMineDataFX;
struct FAbilityMineExplosionEffectConfig;
struct FAbilityPlayMontageRowData;
struct FAbilityPlayMontageData;
struct FAbilityMontageSystemData;
struct FAbilityMontageTaskData;
struct FAbilityMontageVisibleNotifyData;
struct FAbilityMontageLockNotifyData;
struct FAbilityPreviewActorData;
struct FDFMAbilityAdvanceScanTracePathItem;
struct FDFMAbilityAdvanceScanItem;
struct FSmokeStateArray;
struct FSmokeStateItem;
struct FAbilityDeformableSmokeBox;
struct FAbilityLeaveStateData;
struct FAbilityStateData;
struct FDFMAbilitySubTitleConfig;
struct FAbilityTimerHandle;
struct FAbilityThrowBlockingSpawnMaterialParameter;
struct FAbilityThrowBlockingData;
struct FAbilityVoxelizationValidBoxResult;
struct FAbilityVoxelizationResult;
struct FAbilityVoxelizationParams;
struct FDFMAbilityC202KnifeData;
struct FKnifeDrawPathData;
struct FAIMultiPatrolTimeSequence;
struct FAIMultiPatrolDataBase;
struct FAIMultiPatrolConfig;
struct FAIMultiPatrolTransientData;
struct FAIMultiPatrolSection;
struct FAIMultiPatrolPath;
struct FAIMultiPatrolPoint;
struct FAIMultiPatrolSubPoint;
struct FC204EMPTakerItem;
struct FVehicleBoss04SkillState;
struct FVehicleBoss04WeaponInfo;
struct FVehicleBoss04SoundInfo;
struct FVehicleBoss04TrailFXInfo;
struct FVehicleBoss04WeaponFXInfo;
struct FVehicleBoss04SoundRuntimeInfo;
struct FMovementStateRepData;
struct FScannedCharacterInfo;
struct FStunGrenadeData;
struct FFootprintTrackerGroupData;
struct FFootprintTrackerPlayerData;
struct FFootprintTrackerData;
struct FFootprintIsmData;
struct FListenRangePoint;
struct FAbilityAttachMeshLoadHadnle;
struct FAbilityAttachMeshLoadData;
struct FAbilityAttachMeshTaskData;
struct FAbilityAttachMeshAnimData;
struct FAbilityAudioData;
struct FAbilityBuffAwardConfig;
struct FAbilityRecycleSpawnActorConf;
struct FAbilityRecycleSpawnActorData;
struct FAbilityDriverFlyRebot;
struct FAbilityDriverVehicle;
struct FAbilityItemPreviewData;
struct FGPAbilityAvatarAssets;
struct FMeshMatUpdateCache;
struct FMatEffectConfig;
struct FMeshMatEffectConfig;
struct FAbilityPlayMontageDataP2;
struct FAbilityPlayMontageDataP4;
struct FAbilityPlayMontageDataP1;
struct FAbilityPlayMontageDataP3;
struct FAbilityPreviewData;
struct FAbilityProjectileActorData;
struct FSetCharAbilityMaskData;
struct FAASpawnActorData;
struct FAbilityCastSkillData;
struct FAbilityUseSupportPack;
struct FAbilityWantCharacterSpeakData;
struct FAbilityWeaponProjectileData;
struct FSpiderBasedMovementInfo;
struct FSpiderRepMovement;
struct FSpiderNetAnimPlayInfo;
struct FThreatDetectionCheckInfo;
struct FThreatDetectionRoleParam;
struct FThrowBlockingAnimInstanceProxy;
struct FProxSensorArrowScanData;
struct FGameModeSpawnSmokeUASConfig;
struct FZoyaSwarmsAvatarData;
struct FZoyaSwarmsItemAnimInstanceProxy;
struct FZoyaSwarmsAvatarEffectData;
struct AAbilityAttachBaseMesh;
struct AAbilityAttachRopeActor;
struct UAbilityAttachRopeComponent;
struct UAbilityVoxelizationComponent;
struct UAbilityBulletVoxelizationComponent;
struct AAbilityCableActor;
struct UAbilityCableComponent;
struct UDFMAbilityInstance;
struct UAbilityInstanceAIAlert;
struct UAbilityInstanceBionicSpySkill;
struct UAbilityInstanceBionicSpySwitchSkill;
struct UAbilityInstanceCallAI2;
struct UAbilityInstanceCallDog;
struct UAbilityLauncherFireModeParams;
struct UAbilityLauncherFireMode;
struct UAbilityMineAnimInstance;
struct IAbilityNodeTriggerInterface;
struct UAbilityOverloadBuffHandler;
struct IAbilityProjectileInterface;
struct UAbilityVehicleAnimInstance;
struct AAbilityVoxelizationTestActor;
struct UAbilityVoxelizationUtils;
struct AAbilityVoxelizeFrozenAppearenceActor;
struct UAbilityWaterEffectComponent;
struct ADFMAbilityWeaponThrowableBullet;
struct AAbilityWeaponBulletGrenade;
struct AAbilityWeaponBulletGrenadeC4;
struct AAbilityWeaponBulletGrenadeMine;
struct AAbilityWeaponThrowableC204Interference;
struct ADFMAbilityActor;
struct ADFMAbilityLevelActor;
struct AADS;
struct AAIAlertRPC;
struct UAnimNotify_BionicSpy;
struct UAnimNotifyState_HideBones;
struct AArtilleryShell;
struct AArtilleryShell_GuidedMissle;
struct AArtilleryShell_SectorArtilerrate;
struct AArtilleryShell_SectorSmoke;
struct AArtilleryShellingTemplate;
struct UArtilleryShellProjectileMovementComponent;
struct UArtilleryShellProjectileSphereComponent;
struct ABionicBirdActor;
struct UBionicBirdAnimInstance;
struct ABionicBirdGrenade;
struct UBionicBirdGrenadeMovement;
struct ABionicBirdMarkingActor;
struct UBionicBirdMarkingAnimInstance;
struct UBionicBirdMovement;
struct ABionicBirdWeapon;
struct ABionicSpyActor;
struct UBionicSpyCueHandler;
struct UBionicSpyMovement;
struct ABowArrowMesh;
struct UC203MarkComponent;
struct UC204InterferenceAnimInstance;
struct UC501CallAIFightTargetComponent;
struct ACallAIAbility;
struct UCallAIInfoPanelControllerHelper;
struct UCallAIInfoPanelHudController;
struct UCallAIInfoPanelHudView;
struct UCallAIInfoPanelUIController;
struct UCallAIInfoPanelUIView;
struct UEnvQueryTest_CallAISpawnPosition_Visibility;
struct UEnvQueryTest_CallAISpawnPosition_BestDistanceToPlayer;
struct UEnvQueryContext_PlayerCharacter;
struct UEnvQueryTest_NotInWater;
struct UEnvQueryGenerator_CallAISpawnBasePoint;
struct UCallDogFightTargetComponent;
struct UChainHookAnimComponent;
struct UChainHookAnimInstance;
struct UChainHookComponent;
struct AChainHookGrenade;
struct AChainHookHitBoxActor;
struct AChainHookItemActor;
struct UChainHookItemAnimInstance;
struct AChainHookWeapon;
struct UDelayDestroySkeletalMesh;
struct ADFMAbilityProjectile;
struct ADFMAbility_MedicalSyringeProjectile;
struct ADFMAbilityDetectorBase;
struct ADFMAbilityBuffDetector;
struct ADFMAbilityAddBufferToSelf;
struct ADFMAbilityADSDefencer;
struct ADFMAbilityBaseBox;
struct ADFMAbilityAmmoBox;
struct ADFMAbilityPlacementBase;
struct ADFMAbilityMineBase;
struct ADFMAbilityAntiTankMine;
struct ADFMAbilityAssault;
struct ADFMAbilityDiffuseArea;
struct ADFMAbilityBarbedWireArea;
struct ADFMAbilityBeacon;
struct ADFMAbilityBlindingSmokeMine;
struct UDFMAbilitySystemBase;
struct UDFMAbilitySingleSystem;
struct UDFMAbilityBuffSystem;
struct ADFMAbilityBunker;
struct ADFMAbilityBunkerPiece;
struct ADFMAbilityC204Interference;
struct ADFMAbilityCammyBulletDetector;
struct ADFMAbilityClaymoreMine;
struct ADFMAbilityDamageTaker;
struct UDFMAbilityDataSystem;
struct UDFMAbilityDefaultSystem;
struct ADFMAbilityDeformableSmokeActor;
struct ADFMAbilityDeformableThermalSmokeActor;
struct ADFMAbilityDetector;
struct ADFMAbilityDFMVehicle;
struct ADFMAbilityDoorDisabler;
struct ADFMAbilityDun;
struct ADFMAbilityElectricShockBomb;
struct ADFMAbilityEMPBullet;
struct ADFMAbilityEMPGrenade;
struct ADFMAbilityEMPLauncherGrenade;
struct ADFMAbilityEMPSubBullet;
struct ADFMAbilityFireArrow;
struct ADFMAbilityFlyRebot;
struct UDFMAbilityFunctionSystem;
struct UDFMAbilityGameStateComponent;
struct UDFMAbilitySerilizeUtils;
struct ADFMAbilityIncendiaryArea;
struct ADFMAbilityIncendiaryGrenade;
struct UDFMAbilityInstanceAdvancedScan;
struct UDFMAbilityInstanceRankSkill;
struct UDFMAbilityInstanceArtilleryShelling;
struct UDFMAbilityInstanceAssault;
struct UDFMAbilityInstanceBlastShield;
struct UDFMAbilityInstanceMine;
struct UDFMAbilityInstanceC204;
struct UDFMAbilityInstanceCommanderRankSkill;
struct UDFMAbilityInstanceCruiseMissile;
struct UDFMAbilityInstanceDefense;
struct UDFMAbilityInstanceDetector;
struct UDFMAbilityInstanceEngineer;
struct UDFMAbilityInstanceLiquidNitrogen;
struct UDFMAbilityInstanceMauriceAura;
struct UDFMAbilityInstanceRankSkillNightVision;
struct UDFMAbilityInstanceRankSkillRebornFlag;
struct UDFMAbilityInstanceRelink;
struct UDFMAbilityInstanceRemoteVehicle;
struct UDFMAbilityInstanceRush;
struct UDFMAbilityInstanceSelfCure;
struct UDFMAbilityInstanceSlotWeaponSwitch;
struct UDFMAbilityInstanceSmokeWall;
struct UDFMAbilityInstanceSupport;
struct ADFMAbilityLevelActorManager;
struct ADFMAbilityLogicTemplate;
struct ADFMAbilityMarkerDetector;
struct ADFMAbilitySensorDetector;
struct ADFMAbilityMedic;
struct ADFMAbilityMedicalBox;
struct UDFMAbilityParticleSmokeWallComponent;
struct ADFMAbilityPenetratingGunBullet;
struct UDFMAbilityPlayMontageSystem;
struct UDFMAbilityPreviewActorSystem;
struct UDFMAbilityProjectileActorSystem;
struct ADFMAbilityProxSensor;
struct ADFMAbilityProxSensorAdvanceScan;
struct UDFMAbilityInstanceReleaseRope;
struct ADFMAbilityRopeRoot;
struct ADFMAbilityRopeRootMarker;
struct UDFMAbilityInstanceRope;
struct ADFMAbilitySilenceZoneFakeDoll;
struct ADFMAbilitySmokeDeformableActor;
struct ADFMAbilitySmokeWallUAS;
struct ADFMAbilitySonarDevice;
struct UDFMAbilitySpawnActorSystem;
struct UDFMAbilityStateSystem;
struct UDFMAbilityLeaveStateSystem;
struct ADFMAbilityStormBall;
struct UDFMAbilitySubtitleManagerSystem;
struct ADFMAbilitySuppressionMine;
struct UDFMAbilitySystemInstanceBase;
struct ADFMAbilityThreatActor;
struct ADFMAbilityThrowBlocking;
struct ADFMAbilityThrowBlockingGrenade;
struct ADFMAbilityTraceLine;
struct UDFMAbilityUASActiveComponent;
struct UDFMAbilityUASMovementComponent;
struct UDFMAbilityUtil;
struct UDFMAbilityWeaponProjectileActorSystem;
struct ADFMAbilityWeaponThrowableKnife;
struct UDFMAbilityWheeledVehicleMovementComponent;
struct ADFMAIADSDetector;
struct ADFMAIBoss07RCVCharacter;
struct UAIMultiPatrolPointComponent;
struct UAIMultiPatrolPathComponent;
struct UAIMultiPatrolSectionComponent;
struct UAIMultiPatrolSubPointComponent;
struct UAIPatrolManagerComponent;
struct AAbilityWeaponThrowableBullet_Boss07;
struct ADFMAIBoss07AbilityFireArrow;
struct ADFMAICharacterCallDog;
struct ADFMBoss05SmokeActor;
struct UDFMBulletDetectorSubSystem;
struct UDFMCharacterBuffEntityC405Flash;
struct UDFMCharacterBuffEntitySkillForbbiden;
struct UDFMCharBuffEntityC204PassiveMP;
struct UDFMCharBuffEntityC204PassiveSOLNew;
struct UDFMCruiseMissileAnimInstance;
struct UDFMCruiseMissileFuncComponent;
struct UCruiseMissileConfig;
struct ADFMCruiseMissileMain;
struct UDFMDeformableMeshEmitComponent;
struct ADFMDelayHomingStingerMissile;
struct UDFMDelayHomingStingMissileMovementComponent;
struct UDFMFollowProjectileMovementComponent;
struct UDFMRemoteControlVehicleFireMode;
struct UDFMSkillForbiddenCueHandler;
struct UDFMSkillReplicateComponent;
struct ASonarDevicePreviewActor;
struct UDFMSupportPackSubSystem;
struct ADFMThrowableBulletFreezeCannon;
struct ADFMThrowableBulletFreezeSpray;
struct UDFMThrowWeaponDataAppearanceComp;
struct ADFMTracingLineActor;
struct UDFMUASPilotMovementComponent;
struct ADFMVehicleSkillBoss04BulletRoot;
struct UDFMVehicleSkillBoss04Component;
struct UDFMVehicleSkillBoss04WeaponBullet;
struct UDFMVehicleSkillBoss04WeaponInstance;
struct UDFMWeaponFuncComponentJavelin;
struct ADFMWeaponThrowableStunGrenade;
struct UEMPBuffCueHandler;
struct UExtinguishIncendiaryComponent;
struct UFiringBleedingCueHandler;
struct AFootprintTrackerActor;
struct UFootprintTrackerCueHandler;
struct UFreezeZoneManagerComponent;
struct UGameplayTagComponent;
struct UGamePlayTagUtils;
struct UGPEffectAbilityC204MakeNoise;
struct UGPEffectAbilityC204PassiveMP;
struct UGPEffectAbilityC204PassiveSOL;
struct UGPWeaponFireModeParamsAbilityDirectLauncher;
struct UGPWeaponAbilityFireModeDirectLauncher;
struct ULeftWeaponFireModeGrenadeLauncher;
struct UGPWeaponFireModeChainHook;
struct AHeavyAttackThrowableWeapon;
struct ICallAIInfoPanelViewInterface;
struct ICallAIInfoPanelControllerInterface;
struct ASkillDeploymentBase;
struct AIntelligentSmoke;
struct ULeftWeaponFireModeGrenadeLauncherParams;
struct UMarkOutlineBuffEntityBase;
struct ANitrogenZoneActor;
struct APreViewRebornFlag;
struct UQA_AbilityLogicTask;
struct UQA_AbilityAddHealth;
struct UQA_AbilityAddSheild;
struct UQA_AbilityAddSkillNum;
struct UQA_AbilityAttachMeshAnim;
struct UQA_AbilityDestroyMeshAnim;
struct UQA_AbilityTagMeshAnim;
struct UQA_AbilityAudio;
struct UQA_AbilityResourceAudio;
struct UQA_AbilityLogicState;
struct UQA_AbilityBehaviorCall;
struct UQA_AbilityChangeBehaviorCall;
struct UQA_AbilityRevertBehaviorCall;
struct UQA_AbilityFSMStatusInstanceListner;
struct UQA_AbilityListner;
struct UQA_SkillBehaviorListner;
struct UQA_AbilityDisableListner;
struct UQA_AbilityBuff;
struct UQA_C302PassiveBuff;
struct UQA_AbilityC103RemoteRescure;
struct UQA_AbilityCameraModifier;
struct UQA_AbilityCastWeaponAmmo;
struct UQA_AbilityCheckWeaponAmmo;
struct UQA_AbilityCD;
struct UQA_AbilityUseCD;
struct UQA_AbilityAddCD;
struct UQA_AbilitySlotChargingAfterSkill;
struct UQA_AddNewNodeExcuteEntry;
struct UQA_AbilityCDEx;
struct UQA_AbilityChangeCharacterAnimation;
struct UQA_AbilityChangeWeaponAnimMap;
struct UQA_AbilityConsumeItem;
struct UQA_AbilityRecycleSpawnActor;
struct UQA_AbilityActiveSpawnActor;
struct UQA_AbilityCostScore;
struct UQA_AbilityCrosshairPercent;
struct UQA_SetSupportAmmo;
struct UQA_AbilityDelay;
struct UQA_AbilityCustomDelay;
struct UQA_AbilityDriverFlyRebot;
struct UQA_AbilityDriverVehicle;
struct UQA_AbilityEnableLongPress;
struct UQA_AbilityEndLogic;
struct UQA_AbilityEquipAnim;
struct UQA_AbilityEquipWeapon;
struct UQA_AbilityFirefighting;
struct UQA_AbilityFunction;
struct UQA_AbilityHandleRush;
struct UQA_AbilityItemPreviewActor;
struct UQA_AbilityRemoveItemPreviewActor;
struct UQA_AbilityKickIce;
struct UQA_AbilityLineTrace;
struct UQA_AbilityLineTraceCheck;
struct UQA_AbilityLogicLeaveState;
struct UQA_AbilityEnd;
struct UQA_AbilityCheckNormalBreak;
struct UQA_AbilityLeaveSkillState;
struct UQA_AbilityLogicTemplate;
struct UQA_AbilityMeshMaterialEffect;
struct UQA_AbilityNotify;
struct UQA_AbilityNotifyDSReplay;
struct UQA_AbilityNotifyForwardScan;
struct UQA_AbilityNotifyRush;
struct UQA_AbilityRushSetting;
struct UQA_AbilityOverrideAnimingCheck;
struct UQA_AbilityPlayMontage;
struct UQA_AbilityStopMontage;
struct UQA_AbilityTakeDemageStopMontage;
struct UQA_AbilityPlayUIAudio;
struct UQA_AbilityPreviewActor;
struct UQA_AbilityEnablePreviewLine;
struct UQA_AbilityProcessBar;
struct UQA_AbilityProjectileActor;
struct UQA_AbilityPullOutFireArrow;
struct UQA_AbilityRankSkillNightVision;
struct UQA_AbilityRankSkillOperate;
struct UQA_AbilityRemoveWeapon;
struct UQA_AbilityRollMove;
struct UQA_AbilityBreakRollMove;
struct UQA_AbilityRopeTrigger;
struct UQA_AbilitySendSupportPackTarget;
struct UQA_AbilitySetAppearanceShapeShift;
struct UQA_AbilitySetCanBeBreakByInput;
struct UQA_AbilitySetCharAbilityMask;
struct UQA_AbilitySetCharCanProneFireMove;
struct UQA_AbilitySetUseC301Launcher;
struct UQA_AbilitySetVaultHeightTypeLimit;
struct UQA_AbilityShowDetectorMap;
struct UQA_AbilityShowDetectorMapEx;
struct UQA_AbilityShowPanel;
struct UQA_AbilityShowTips;
struct UQA_AbilityKeyTips;
struct UQA_AbilitySkillConflictID;
struct UQA_AbilitySkillUIEvent;
struct UQA_AbilitySoundVisualizationNotify;
struct UQA_AbilitySpawnActor;
struct UQA_AbilityNotifySpawnActor;
struct UQA_AbilityStaminaChange;
struct UQA_AbilitySwithLeftWeapon;
struct UQA_AbilitySwithWeapon;
struct UQA_AbilityTrigger;
struct UQA_AbilityEnableUseTogether;
struct UQA_AbilityCastSkill;
struct UQA_AbilityHookSkill;
struct UQA_AbilityUseSupportPack;
struct UQA_AbilityWantCharacterSpeak;
struct UQA_AbilityWeaponProjectileActor;
struct ARebornFlag;
struct ARankSkillRebornFlag;
struct ADFMRemoteControlledVehicle;
struct URemoteVehicleMarkSelfBuffEntity;
struct ARopeTest;
struct USayyidCrossbowCrossHairHudController;
struct USayyidCrossbowCrossHairHudView;
struct USayyidCrossbowCrossHairUIController;
struct USayyidCrossbowCrossHairUIView;
struct USayyidCrossbowDataComponentAnim;
struct USayyidCrossbowFuncComponent;
struct ASayyidFireArrowProjectile;
struct USpiderAnimInstance;
struct ASpiderBase;
struct USpiderMovementComponent;
struct USpiderNetCueHandle;
struct ASpiderNetProjectile;
struct USpiderQueryFilter_WorldQuery;
struct ASpiderSentryHive;
struct USpiderMarkBuffEntity;
struct ASpyExposeActor;
struct USpyExposeCueHandler;
struct UStunGrenadeMovementComponent;
struct ATestChainHookTakerActor;
struct UThreatDetectionCueHandler;
struct UThrowBlockingAnimInstance;
struct UThrowBlockingPartComponent;
struct UThrowBlockingPreviewPartComponent;
struct AThrowBlockingPreviewActor;
struct AThrowSpawnHelper;
struct UWeaponBindHUDFuncComponent;
struct AWeaponBulletBuff;
struct AWeaponBulletArrow;
struct AWeaponBulletAbilityFireArrow;
struct AWeaponBulletAbilitySayyidFireArrow;
struct AWeaponBulletPenetratingSniper;
struct AWeaponBulletProxSensorArrow;
struct AWeaponBulletSupport;
struct UWeaponFireModeBionicBirdParams;
struct UWeaponFireModeBionicBird;
struct UWeaponFireModeBionicSpyParams;
struct UWeaponFireModeBionicSpy;
struct UWeaponFireModeParamsPlacementDetector;
struct UWeaponFireModePlacementDetector;
struct UWeaponFireModeSpiderParams;
struct UWeaponFireModeSpider;
struct UWeaponFireModeSupport;
struct UWeaponFireModeSupportPack;
struct UWeaponFireModeParamsSuppressionMinePlacement;
struct UWeaponFireModeSuppressionMinePlacement;
struct UWeaponFireModeSwarmsParams;
struct UWeaponFireModeSwarms;
struct UWeaponFireModeParamsThrowableSpawnSmokeUAS;
struct UWeaponFireModeThrowableSpawnSmokeUAS;
struct UWeaponFireModeParamsThrowBlocking;
struct UWeaponFireModeThrowBlocking;
struct UWeaponFuncComponentZoyaSwarmsItem;
struct UWeaponThrowableDataComponentBubble;
struct UWeaponThrowBunkerDataComponentAnim;
struct UWeaponThrowMineDataComponentAnim;
struct AZoyaSwarmsActor;
struct UZoyaSwarmsItemAnimInstance;
struct AZoyaSwarmsPreviewActor;
struct AZoyaSwarmsWeapon;

// Object: Enum DFMAbility.ESpiderMoveMode
enum class ESpiderMoveMode : uint8_t
{
	MOVE_None = 0,
	MOVE_Walking = 1,
	MOVE_Falling = 2,
	MOVE_Climbing = 3,
	MOVE_MAX = 4
};

// Object: Enum DFMAbility.EAIADSWeaponEvent
enum class EAIADSWeaponEvent : uint8_t
{
	Default = 0,
	TurnStart = 1,
	TurnEnd = 2,
	Fire = 3,
	EAIADSWeaponEvent_MAX = 4
};

// Object: Enum DFMAbility.EAIADSState
enum class EAIADSState : uint8_t
{
	Full = 0,
	NotEmpty = 1,
	Empty = 2,
	EAIADSState_MAX = 3
};

// Object: Enum DFMAbility.EAIADSChargeType
enum class EAIADSChargeType : uint8_t
{
	CDCharging = 0,
	CDCharging2 = 1,
	ContinuousCharging = 2,
	EAIADSChargeType_MAX = 3
};

// Object: Enum DFMAbility.ECallAICombatStyle
enum class ECallAICombatStyle : uint8_t
{
	Prudent = 0,
	Assault = 1,
	ECallAICombatStyle_MAX = 2
};

// Object: Enum DFMAbility.ECallAIType
enum class ECallAIType : uint8_t
{
	Rifleman = 0,
	MachineGunner = 1,
	Shielder = 2,
	Flamethrower = 3,
	ECallAIType_MAX = 4
};

// Object: Enum DFMAbility.EBionicSpyCastResult
enum class EBionicSpyCastResult : uint8_t
{
	Success = 0,
	NoTarget = 1,
	TargetDead = 2,
	TargetEscaped = 3,
	OtherError = 4,
	Discovered = 5,
	EBionicSpyCastResult_MAX = 6
};

// Object: Enum DFMAbility.EAbilityVoxelDiffuseType
enum class EAbilityVoxelDiffuseType : uint8_t
{
	DFS = 0,
	BFS = 1,
	CylinderBFS = 2,
	EAbilityVoxelDiffuseType_MAX = 3
};

// Object: Enum DFMAbility.EAbilityVoxelCheckType
enum class EAbilityVoxelCheckType : uint8_t
{
	AABB = 0,
	Sphere = 1,
	Cylinder = 2,
	OBB = 3,
	EAbilityVoxelCheckType_MAX = 4
};

// Object: Enum DFMAbility.EFrozenAppearancePhase
enum class EFrozenAppearancePhase : uint8_t
{
	None = 0,
	CreatingRT = 1,
	WritingVoxelData = 2,
	ApplyingToMaterial = 3,
	RewritingVoxelData = 4,
	Completed = 5,
	EFrozenAppearancePhase_MAX = 6
};

// Object: Enum DFMAbility.ETouchWaterSurfaceEvent
enum class ETouchWaterSurfaceEvent : uint8_t
{
	None = 0,
	EnterWaterSurface = 1,
	LeaveWaterSurface = 2,
	ETouchWaterSurfaceEvent_MAX = 3
};

// Object: Enum DFMAbility.EWaterState
enum class EWaterState : uint8_t
{
	OnGround = 0,
	UnderWater = 1,
	AboveWater = 2,
	EWaterState_MAX = 3
};

// Object: Enum DFMAbility.EWaterEffectTriggerType
enum class EWaterEffectTriggerType : uint8_t
{
	None = 0,
	EnterWaterSurface = 1,
	LeaveWaterSurface = 2,
	UnderWater = 3,
	AboveWater = 4,
	Max = 5
};

// Object: Enum DFMAbility.EArtilleryShellDropMethod
enum class EArtilleryShellDropMethod : uint8_t
{
	RANDOM = 0,
	ORDER = 1,
	EArtilleryShellDropMethod_MAX = 2
};

// Object: Enum DFMAbility.EChainHookCheckEndType
enum class EChainHookCheckEndType : uint8_t
{
	None = 0,
	ActorLocation = 1,
	HitLocation = 2,
	ClientBindLocation = 3,
	PawnViewLocation = 4,
	EChainHookCheckEndType_MAX = 5
};

// Object: Enum DFMAbility.EChainHookCheckStartType
enum class EChainHookCheckStartType : uint8_t
{
	None = 0,
	ActorLocation = 1,
	PawnViewLocation = 2,
	GrenadeStartLocation = 3,
	WeaponSocket = 4,
	EChainHookCheckStartType_MAX = 5
};

// Object: Enum DFMAbility.EBattleFieldPropType
enum class EBattleFieldPropType : uint8_t
{
	None = 0,
	ADS = 1,
	RebornFlag = 2,
	Bunker = 3,
	MedicalBox = 4,
	AmmoBox = 5,
	AntiTankMine = 6,
	ClayMoreMine = 7,
	FlameThrowerArea = 8,
	ElectricShock = 9,
	SonarDevice = 10,
	EBattleFieldPropType_MAX = 11
};

// Object: Enum DFMAbility.EAbilityDetectorTriggerType
enum class EAbilityDetectorTriggerType : uint8_t
{
	None = 0,
	Recycle = 1,
	ManualActive = 2,
	Both = 3,
	EAbilityDetectorTriggerType_MAX = 4
};

// Object: Enum DFMAbility.EDiffuseAreaCellCheckState
enum class EDiffuseAreaCellCheckState : uint8_t
{
	Default = 0,
	Failed = 1,
	Success = 2,
	EDiffuseAreaCellCheckState_MAX = 3
};

// Object: Enum DFMAbility.EDiffuseAreaCellDiffuseType
enum class EDiffuseAreaCellDiffuseType : uint8_t
{
	Default = 0,
	X = 1,
	Nx = 2,
	Y = 3,
	Ny = 4,
	EDiffuseAreaCellDiffuseType_MAX = 5
};

// Object: Enum DFMAbility.EDiffuseAreaType
enum class EDiffuseAreaType : uint8_t
{
	None = 0,
	Incendiary = 1,
	BarbedWire = 2,
	EDiffuseAreaType_MAX = 3
};

// Object: Enum DFMAbility.EAbilityLevelActorType
enum class EAbilityLevelActorType : uint8_t
{
	ENone = 0,
	EADS = 1,
	ERebornFlag = 2,
	EBunker = 3,
	EAbilityLevelActorType_MAX = 4
};

// Object: Enum DFMAbility.EVehicleBehaviorForbit
enum class EVehicleBehaviorForbit : uint8_t
{
	None = 0,
	Move = 1,
	Jump = 2,
	Boom = 4,
	TurnRate = 8,
	LookUpTurnRate = 16,
	EVehicleBehaviorForbit_MAX = 17
};

// Object: Enum DFMAbility.EDFMAbilityCastFailedReason
enum class EDFMAbilityCastFailedReason : uint8_t
{
	inCooldown = 0,
	StateFailed = 1,
	Disable = 2,
	Forbit = 3,
	CampNum = 4,
	Score = 5,
	TeamNum = 6,
	Sector = 7,
	EDFMAbilityCastFailedReason_MAX = 8
};

// Object: Enum DFMAbility.EAbilitySmokeActorDetectionStage
enum class EAbilitySmokeActorDetectionStage : uint8_t
{
	DetectionStage_None = 0,
	DetectionStage_Course = 1,
	DetectionStage_Voxel = 2,
	DetectionStage_MAX = 3
};

// Object: Enum DFMAbility.ESmokeWallUASStage
enum class ESmokeWallUASStage : uint8_t
{
	UASStage_None = 0,
	UASStage_Equip = 1,
	UASStage_Idle = 2,
	UASStage_Fly = 3,
	UASStage_MAX = 4
};

// Object: Enum DFMAbility.EAIPatrolPointType
enum class EAIPatrolPointType : uint8_t
{
	None = 0,
	PathPoint = 1,
	SubPoint = 2,
	Path = 3,
	Section = 4,
	EAIPatrolPointType_MAX = 5
};

// Object: Enum DFMAbility.ECallDogState
enum class ECallDogState : uint8_t
{
	None = 0,
	Spawn = 1,
	Idle = 2,
	Interact = 3,
	Attack = 4,
	Hurt = 5,
	Despawn = 6,
	ECallDogState_MAX = 7
};

// Object: Enum DFMAbility.EVehicleBoss04FireMode
enum class EVehicleBoss04FireMode : uint8_t
{
	Default = 0,
	MachineGun = 1,
	StingerMissile = 2,
	EVehicleBoss04FireMode_MAX = 3
};

// Object: Enum DFMAbility.EVehicleBoss04WeaponType
enum class EVehicleBoss04WeaponType : uint8_t
{
	None = 0,
	MachineGun = 1,
	StingerMissle = 2,
	EVehicleBoss04WeaponType_MAX = 3
};

// Object: Enum DFMAbility.EStunGrenadeMovementState
enum class EStunGrenadeMovementState : uint8_t
{
	None = 0,
	NormalFly = 1,
	FoundTargetAndChangeVelocityAngle = 2,
	MoveToTarget = 3,
	MoveToTargetHitWall = 4,
	EStunGrenadeMovementState_MAX = 5
};

// Object: Enum DFMAbility.ENitrogenAppearancePhase
enum class ENitrogenAppearancePhase : uint8_t
{
	None = 0,
	WaitingForVoxelData = 1,
	LoadingAppearanceBlueprint = 2,
	SpawningAppearanceActor = 3,
	Completed = 4,
	ENitrogenAppearancePhase_MAX = 5
};

// Object: Enum DFMAbility.EAudioRoleType
enum class EAudioRoleType : uint8_t
{
	ET_ALL = 0,
	EE_1P = 1,
	EE_3P = 2,
	EAudioRoleType_MAX = 3
};

// Object: Enum DFMAbility.ERopeTriggerType
enum class ERopeTriggerType : uint8_t
{
	RopeToggle = 0,
	RopeStart = 1,
	RopeEnd = 2,
	RopeBeginEnd = 3,
	RopeNoBeginToEnd = 4,
	RopeMove = 5,
	RopeRescue = 6,
	RopeClearRescue = 7,
	RopeLeaveHanging = 8,
	RopeRecordPressMove = 9,
	RopeRecordHitMove = 10,
	ClearRope = 11,
	ERopeTriggerType_MAX = 12
};

// Object: Enum DFMAbility.EAbilitySwithWeaponType
enum class EAbilitySwithWeaponType : uint8_t
{
	DefaultWeapon = 0,
	MainWeapon = 1,
	MeleeWeapon = 2,
	EmptyHand = 3,
	LastUsedWeapon = 4,
	NextWeapon = 5,
	PreWeapon = 6,
	PositionWeapon = 7,
	AnyWeapon = 8,
	LastThenAnyUsedWeapon = 9,
	LastUsedWeaponOrEmpty = 10,
	SkillWeapon = 11,
	SkillEnd = 12,
	EAbilitySwithWeaponType_MAX = 13
};

// Object: Enum DFMAbility.ERebornFlagType
enum class ERebornFlagType : uint8_t
{
	EAbility = 0,
	EVehicle = 1,
	ERankSkill = 2,
	ERebornFlagType_MAX = 3
};

// Object: Enum DFMAbility.EVehicleDestroyReason
enum class EVehicleDestroyReason : uint8_t
{
	EVehicleDestroyReason_None = 0,
	EVehicleDestroyReason_OutOfControlRange = 1,
	EVehicleDestroyReason_OutOfControlTime = 2,
	EVehicleDestroyReason_UnderWater = 3,
	EVehicleDestroyReason_DriveCrash = 4,
	EVehicleDestroyReason_HpEmptyOnControl = 5,
	EVehicleDestroyReason_HpEmptyExitInXSeconds = 6,
	EVehicleDestroyReason_Max = 7
};

// Object: Enum DFMAbility.ESpiderAttackMode
enum class ESpiderAttackMode : uint8_t
{
	SpiderAttackMode_Projectile = 0,
	SpiderAttackMode_Explode = 1,
	SpiderAttackMode_MAX = 2
};

// Object: Enum DFMAbility.ESpiderState
enum class ESpiderState : uint8_t
{
	SpiderState_Sleep = 0,
	SpiderState_Awake = 1,
	SpiderState_Detect = 2,
	SpiderState_Follow = 3,
	SpiderState_ReadyAttack = 4,
	SpiderState_Attack = 5,
	SpiderState_ReadyDestroyed = 6,
	SpiderState_Max = 7
};

// Object: Enum DFMAbility.ESpiderControlMode
enum class ESpiderControlMode : uint8_t
{
	None = 0,
	Server = 1,
	ClientSimulate = 2,
	ESpiderControlMode_MAX = 3
};

// Object: Enum DFMAbility.FThreatDetectionCheckResult
enum class EFThreatDetectionCheckResult : uint8_t
{
	BaseCheckFailed = 0,
	AngleCheckFailed = 1,
	BlockCheckFailed = 2,
	Pass = 3,
	FThreatDetectionCheckResult_MAX = 4
};

// Object: Enum DFMAbility.EThrowBlockingPartState
enum class EThrowBlockingPartState : uint8_t
{
	Initial = 0,
	Spawn = 1,
	Normal = 2,
	Damaged = 3,
	Destroyed = 4,
	EThrowBlockingPartState_MAX = 5
};

// Object: Enum DFMAbility.EThrowBlockingExpansionType
enum class EThrowBlockingExpansionType : uint8_t
{
	FullyExpanded = 0,
	OnGround = 1,
	OnWall = 2,
	EThrowBlockingExpansionType_MAX = 3
};

// Object: ScriptStruct DFMAbility.SubTrailFX
// Size: 0x30 (Inherited: 0x0)
struct FSubTrailFX
{
	uint8_t Pad_0x0[0x20]; // 0x0(0x20)
	struct UFXResourceContainerComponent* FXContainer; // 0x20(0x8)
	uint8_t Pad_0x28[0x8]; // 0x28(0x8)
};

// Object: ScriptStruct DFMAbility.AIADSWeaponEffectData
// Size: 0x20 (Inherited: 0x0)
struct FAIADSWeaponEffectData
{
	float MaxTrailPow; // 0x0(0x4)
	float SmokeLifeMin; // 0x4(0x4)
	float SmokeLifeMax; // 0x8(0x4)
	uint8_t bUseBulletTracer : 1; // 0xC(0x1), Mask(0x1)
	uint8_t BitPad_0xC_1 : 7; // 0xC(0x1)
	uint8_t Pad_0xD[0x3]; // 0xD(0x3)
	float BulletTraceTimePer5000; // 0x10(0x4)
	struct FVector MuzzleFlashScaleBase; // 0x14(0xC)
};

// Object: ScriptStruct DFMAbility.CallAIStatusInfo
// Size: 0x30 (Inherited: 0x0)
struct FCallAIStatusInfo
{
	struct TArray<struct FCallAIUnitInfo> AIUnits; // 0x0(0x10)
	ECallAICombatStyle CombatStyle; // 0x10(0x1)
	uint8_t Pad_0x11[0x3]; // 0x11(0x3)
	float SkillDuration; // 0x14(0x4)
	float MaxDuration; // 0x18(0x4)
	uint8_t bIsActive : 1; // 0x1C(0x1), Mask(0x1)
	uint8_t BitPad_0x1C_1 : 7; // 0x1C(0x1)
	uint8_t Pad_0x1D[0x3]; // 0x1D(0x3)
	float SkillStartTime; // 0x20(0x4)
	uint8_t bAnyAIGuard : 1; // 0x24(0x1), Mask(0x1)
	uint8_t BitPad_0x24_1 : 7; // 0x24(0x1)
	uint8_t Pad_0x25[0x3]; // 0x25(0x3)
	float RecallKeyLongPressedProgress; // 0x28(0x4)
	uint8_t Pad_0x2C[0x4]; // 0x2C(0x4)
};

// Object: ScriptStruct DFMAbility.CallAIUnitInfo
// Size: 0x3 (Inherited: 0x0)
struct FCallAIUnitInfo
{
	ECallAIType AIType; // 0x0(0x1)
	uint8_t Count; // 0x1(0x1)
	uint8_t MaxCount; // 0x2(0x1)
};

// Object: ScriptStruct DFMAbility.EnemyPlayerInfo
// Size: 0x10 (Inherited: 0x0)
struct FEnemyPlayerInfo
{
	struct ADFMCharacter* PlayerCharacter; // 0x0(0x8)
	uint8_t Pad_0x8[0x8]; // 0x8(0x8)
};

// Object: ScriptStruct DFMAbility.CallAI2SpawnContext
// Size: 0x48 (Inherited: 0x0)
struct FCallAI2SpawnContext
{
	struct TArray<struct UEnvQuery*> LoadedBasePointEQSList; // 0x0(0x10)
	struct UEnvQuery* SpawnPointEnvQuery; // 0x10(0x8)
	uint8_t Pad_0x18[0x28]; // 0x18(0x28)
	struct AActor* SpawnPointQuerier; // 0x40(0x8)
};

// Object: ScriptStruct DFMAbility.PendingExitAI
// Size: 0x10 (Inherited: 0x0)
struct FPendingExitAI
{
	struct AAIController* Controller; // 0x0(0x8)
	uint8_t Pad_0x8[0x8]; // 0x8(0x8)
};

// Object: ScriptStruct DFMAbility.CallAIConfigElem
// Size: 0xA0 (Inherited: 0x0)
struct FCallAIConfigElem
{
	ECallAIType AIType; // 0x0(0x1)
	uint8_t Pad_0x1[0x7]; // 0x1(0x7)
	struct TSoftObjectPtr<UDataTable> NpcTemplateTable; // 0x8(0x28)
	struct FName npcName; // 0x30(0x8)
	int32_t CountPerEnemy; // 0x38(0x4)
	int32_t CountPerEnemyTeam; // 0x3C(0x4)
	int32_t MaxCount; // 0x40(0x4)
	int32_t MinCount; // 0x44(0x4)
	float CapsuleRadiusScale; // 0x48(0x4)
	uint8_t Pad_0x4C[0x4]; // 0x4C(0x4)
	struct TSoftObjectPtr<UEnvQuery> SpawnPositionEnvQuery; // 0x50(0x28)
	struct TSoftObjectPtr<UDataTable> SpeakConfig; // 0x78(0x28)
};

// Object: ScriptStruct DFMAbility.AISpawnInfo
// Size: 0x130 (Inherited: 0x0)
struct FAISpawnInfo
{
	struct FCallAIConfigElem Config; // 0x0(0xA0)
	struct UEnvQuery* SpawnPositionEnvQuery; // 0xA0(0x8)
	struct FAINpcSelector NpcSelector; // 0xA8(0x88)
};

// Object: ScriptStruct DFMAbility.CallAIConfig
// Size: 0x10 (Inherited: 0x0)
struct FCallAIConfig
{
	struct TArray<struct FCallAIConfigElem> CallAIList; // 0x0(0x10)
};

// Object: ScriptStruct DFMAbility.WayPointConstraint
// Size: 0x10 (Inherited: 0x0)
struct FWayPointConstraint
{
	uint8_t Pad_0x0[0x10]; // 0x0(0x10)
};

// Object: ScriptStruct DFMAbility.PathSegmentConstraint
// Size: 0xC (Inherited: 0x0)
struct FPathSegmentConstraint
{
	uint8_t Pad_0x0[0xC]; // 0x0(0xC)
};

// Object: ScriptStruct DFMAbility.BendingConstraint
// Size: 0x14 (Inherited: 0x0)
struct FBendingConstraint
{
	uint8_t Pad_0x0[0x14]; // 0x0(0x14)
};

// Object: ScriptStruct DFMAbility.DistanceConstraint
// Size: 0x10 (Inherited: 0x0)
struct FDistanceConstraint
{
	uint8_t Pad_0x0[0x10]; // 0x0(0x10)
};

// Object: ScriptStruct DFMAbility.AttachRopeNode
// Size: 0x4C (Inherited: 0x0)
struct FAttachRopeNode
{
	struct FVector Position; // 0x0(0xC)
	struct FVector PreviousPosition; // 0xC(0xC)
	struct FVector PredictedPosition; // 0x18(0xC)
	float Mass; // 0x24(0x4)
	float InverseMass; // 0x28(0x4)
	float InverseDistanceContraintMass; // 0x2C(0x4)
	struct FVector Velocity; // 0x30(0xC)
	struct FVector ExternalForce; // 0x3C(0xC)
	uint8_t bIsFixed : 1; // 0x48(0x1), Mask(0x1)
	uint8_t BitPad_0x48_1 : 7; // 0x48(0x1)
	uint8_t Pad_0x49[0x3]; // 0x49(0x3)
};

// Object: ScriptStruct DFMAbility.AttachRopeConfig
// Size: 0x20 (Inherited: 0x0)
struct FAttachRopeConfig
{
	uint8_t bEnablePhysics : 1; // 0x0(0x1), Mask(0x1)
	uint8_t BitPad_0x0_1 : 7; // 0x0(0x1)
	uint8_t Pad_0x1[0x3]; // 0x1(0x3)
	int32_t NumSegments; // 0x4(0x4)
	float RopeLegth; // 0x8(0x4)
	int32_t NumSides; // 0xC(0x4)
	int32_t SolverIterations; // 0x10(0x4)
	float SegmentStiffness; // 0x14(0x4)
	float WayPointStiffness; // 0x18(0x4)
	float SegmentMaxScale; // 0x1C(0x4)
};

// Object: ScriptStruct DFMAbility.ConflictZoneServerData
// Size: 0x30 (Inherited: 0x0)
struct FConflictZoneServerData
{
	uint8_t Pad_0x0[0x30]; // 0x0(0x30)
};

// Object: ScriptStruct DFMAbility.SpySwitchMapData
// Size: 0x8 (Inherited: 0x0)
struct FSpySwitchMapData
{
	int32_t MapID; // 0x0(0x4)
	float MaxDistance; // 0x4(0x4)
};

// Object: ScriptStruct DFMAbility.AbilityMineAnimInstanceProxy
// Size: 0x7B0 (Inherited: 0x7A0)
struct FAbilityMineAnimInstanceProxy : FAnimInstanceProxy
{
	struct ADFMAbilitySuppressionMine* SuppressionMine; // 0x798(0x8)
	uint8_t bIsActivate : 1; // 0x7A0(0x1), Mask(0x1)
	uint8_t bIsExplode : 1; // 0x7A1(0x1), Mask(0x1)
	uint8_t BitPad_0x7A8_2 : 6; // 0x7A8(0x1)
	uint8_t Pad_0x7A9[0x7]; // 0x7A9(0x7)
};

// Object: ScriptStruct DFMAbility.WaterEffectBroadcastMsg
// Size: 0x8 (Inherited: 0x0)
struct FWaterEffectBroadcastMsg
{
	EWaterState WaterState; // 0x0(0x1)
	EWaterState NewWaterState; // 0x1(0x1)
	uint8_t Pad_0x2[0x2]; // 0x2(0x2)
	float LastWaterHeight; // 0x4(0x4)
};

// Object: ScriptStruct DFMAbility.WaterEffectFX
// Size: 0x48 (Inherited: 0x0)
struct FWaterEffectFX
{
	uint8_t Pad_0x0[0x10]; // 0x0(0x10)
	struct USceneComponent* AttachComponent; // 0x10(0x8)
	uint8_t Pad_0x18[0x8]; // 0x18(0x8)
	struct UFXResourceContainerComponent* FXComp; // 0x20(0x8)
	struct ADFMWaterRippleEffect* RippleEffect; // 0x28(0x8)
	struct UDFMInteractiveWaterComponent* InteractiveWaterComponent; // 0x30(0x8)
	uint8_t Pad_0x38[0x10]; // 0x38(0x10)
};

// Object: ScriptStruct DFMAbility.ProjectileExplodeInfo
// Size: 0x18 (Inherited: 0x0)
struct FProjectileExplodeInfo
{
	struct FVector HitProjectilePosition; // 0x0(0xC)
	struct FName ProjectileName; // 0xC(0x8)
	uint8_t HasProcessed : 1; // 0x14(0x1), Mask(0x1)
	uint8_t BitPad_0x14_1 : 7; // 0x14(0x1)
	uint8_t Pad_0x15[0x3]; // 0x15(0x3)
};

// Object: ScriptStruct DFMAbility.AlertMarkConfig
// Size: 0x14 (Inherited: 0x0)
struct FAlertMarkConfig
{
	float MarkerDuration_L1; // 0x0(0x4)
	float MarkerDuration_L2; // 0x4(0x4)
	float MarkerDuration_L3; // 0x8(0x4)
	float MarkerMinDistance; // 0xC(0x4)
	float MarkerIconRadius; // 0x10(0x4)
};

// Object: ScriptStruct DFMAbility.CallAICharacterInfo
// Size: 0x20 (Inherited: 0x0)
struct FCallAICharacterInfo
{
	struct ADFMAICharacter* AICharacter; // 0x0(0x8)
	struct FString AIName; // 0x8(0x10)
	ECallAIType AIType; // 0x18(0x1)
	uint8_t Pad_0x19[0x7]; // 0x19(0x7)
};

// Object: ScriptStruct DFMAbility.AIAlertSubtitleInfo
// Size: 0x60 (Inherited: 0x0)
struct FAIAlertSubtitleInfo
{
	struct FString SpeakerName; // 0x0(0x10)
	struct FString NonePOISubtitle; // 0x10(0x10)
	struct FString POISubtitleFormatString; // 0x20(0x10)
	struct FString POIName; // 0x30(0x10)
	float SubtitleDuration; // 0x40(0x4)
	uint8_t SubtitlePriority; // 0x44(0x1)
	uint8_t bOverrideSamePriority : 1; // 0x45(0x1), Mask(0x1)
	uint8_t BitPad_0x45_1 : 7; // 0x45(0x1)
	uint8_t bPlayVO : 1; // 0x46(0x1), Mask(0x1)
	uint8_t BitPad_0x46_1 : 7; // 0x46(0x1)
	uint8_t Pad_0x47[0x1]; // 0x47(0x1)
	struct UGPAudioEventAsset* VOEvent; // 0x48(0x8)
	float MaxPlayVODistance; // 0x50(0x4)
	struct FVector AlertLocation; // 0x54(0xC)
};

// Object: ScriptStruct DFMAbility.AIAlertInfo
// Size: 0x30 (Inherited: 0x0)
struct FAIAlertInfo
{
	struct ADFMAICharacter* AICharacter; // 0x0(0x8)
	struct ADFMCharacter* DetectedEnemy; // 0x8(0x8)
	uint8_t Pad_0x10[0x10]; // 0x10(0x10)
	struct FString EnemyPOIName; // 0x20(0x10)
};

// Object: ScriptStruct DFMAbility.ArtilleryShellHitFXSurfaceAttribute
// Size: 0x20 (Inherited: 0x0)
struct FArtilleryShellHitFXSurfaceAttribute
{
	struct TArray<EPhysicalSurface> SurfaceTypes; // 0x0(0x10)
	struct TArray<struct FName> HitEffectIds; // 0x10(0x10)
};

// Object: ScriptStruct DFMAbility.ArtilleryShellMovementParameter
// Size: 0x48 (Inherited: 0x0)
struct FArtilleryShellMovementParameter
{
	int32_t SkillId; // 0x0(0x4)
	int32_t SkillEntityID; // 0x4(0x4)
	struct FVector Destination; // 0x8(0xC)
	float Distance; // 0x14(0x4)
	struct FVector Direction; // 0x18(0xC)
	float Accelerate; // 0x24(0x4)
	float Time; // 0x28(0x4)
	float FireTime; // 0x2C(0x4)
	struct AGPCharacter* MakerInstigator; // 0x30(0x8)
	int32_t CampId; // 0x38(0x4)
	struct FVector RebasedDestination; // 0x3C(0xC)
};

// Object: ScriptStruct DFMAbility.BreakthroughEventRange
// Size: 0x8 (Inherited: 0x0)
struct FBreakthroughEventRange
{
	int32_t Max; // 0x0(0x4)
	int32_t Min; // 0x4(0x4)
};

// Object: ScriptStruct DFMAbility.BionicBirdAnimInstanceProxy
// Size: 0x7C0 (Inherited: 0x7A0)
struct FBionicBirdAnimInstanceProxy : FAnimInstanceProxy
{
	struct FVector Velocity; // 0x798(0xC)
	struct FVector MoveInput; // 0x7A4(0xC)
	float Pitch; // 0x7B0(0x4)
	float Roll; // 0x7B4(0x4)
};

// Object: ScriptStruct DFMAbility.BionicBirdMarkingJoint
// Size: 0x10 (Inherited: 0x0)
struct FBionicBirdMarkingJoint
{
	struct FName SocketName; // 0x0(0x8)
	int32_t ParentIndex; // 0x8(0x4)
	float size; // 0xC(0x4)
};

// Object: ScriptStruct DFMAbility.BionicBirdMarkingAnimInstanceProxy
// Size: 0x7D0 (Inherited: 0x7A0)
struct FBionicBirdMarkingAnimInstanceProxy : FAnimInstanceProxy
{
	struct FPoseSnapshot TargetCharacterSnapshot; // 0x798(0x38)
};

// Object: ScriptStruct DFMAbility.BuffForbiddenData
// Size: 0x38 (Inherited: 0x0)
struct FBuffForbiddenData
{
	struct TArray<ECharacterStateMask> LockAbility; // 0x0(0x10)
	EFSMForbidReason LockReason; // 0x10(0x1)
	uint8_t bCancelWeaponOperate : 1; // 0x11(0x1), Mask(0x1)
	uint8_t BitPad_0x11_1 : 7; // 0x11(0x1)
	EWeaponCancelCurrentStateReason CancelReason; // 0x12(0x1)
	uint8_t bStopLooting : 1; // 0x13(0x1), Mask(0x1)
	uint8_t BitPad_0x13_1 : 7; // 0x13(0x1)
	uint8_t bStopUseItem : 1; // 0x14(0x1), Mask(0x1)
	uint8_t BitPad_0x14_1 : 7; // 0x14(0x1)
	uint8_t bStopRescue : 1; // 0x15(0x1), Mask(0x1)
	uint8_t BitPad_0x15_1 : 7; // 0x15(0x1)
	uint8_t bCrowdControl : 1; // 0x16(0x1), Mask(0x1)
	uint8_t BitPad_0x16_1 : 7; // 0x16(0x1)
	uint8_t bKnockBackAI : 1; // 0x17(0x1), Mask(0x1)
	uint8_t BitPad_0x17_1 : 7; // 0x17(0x1)
	uint8_t bBreakCurrentSkill : 1; // 0x18(0x1), Mask(0x1)
	uint8_t BitPad_0x18_1 : 7; // 0x18(0x1)
	uint8_t bBreakFirefighting : 1; // 0x19(0x1), Mask(0x1)
	uint8_t BitPad_0x19_1 : 7; // 0x19(0x1)
	uint8_t bBreakClimbLadder : 1; // 0x1A(0x1), Mask(0x1)
	uint8_t BitPad_0x1A_1 : 7; // 0x1A(0x1)
	uint8_t bBreakSlide : 1; // 0x1B(0x1), Mask(0x1)
	uint8_t BitPad_0x1B_1 : 7; // 0x1B(0x1)
	uint8_t bBreakInteracting : 1; // 0x1C(0x1), Mask(0x1)
	uint8_t BitPad_0x1C_1 : 7; // 0x1C(0x1)
	uint8_t bBreakHighValueItemInspect : 1; // 0x1D(0x1), Mask(0x1)
	uint8_t BitPad_0x1D_1 : 7; // 0x1D(0x1)
	uint8_t Pad_0x1E[0x2]; // 0x1E(0x2)
	struct AActor* MakerActor; // 0x20(0x8)
	struct AGPCharacter* Target; // 0x28(0x8)
	uint8_t Pad_0x30[0x8]; // 0x30(0x8)
};

// Object: ScriptStruct DFMAbility.C203MarkData
// Size: 0x38 (Inherited: 0x0)
struct FC203MarkData
{
	struct TArray<EBuffGameRole> AllGameRoles; // 0x0(0x10)
	float MapMarkEnemyTime; // 0x10(0x4)
	float CheckCD; // 0x14(0x4)
	float MarkTargetCD; // 0x18(0x4)
	float MaxDistance; // 0x1C(0x4)
	float MaxAngle; // 0x20(0x4)
	float MaxNotRenderTime; // 0x24(0x4)
	uint8_t bCheckSilenceZone : 1; // 0x28(0x1), Mask(0x1)
	uint8_t BitPad_0x28_1 : 7; // 0x28(0x1)
	uint8_t bCheckBlock : 1; // 0x29(0x1), Mask(0x1)
	uint8_t BitPad_0x29_1 : 7; // 0x29(0x1)
	uint8_t bCheckExitState : 1; // 0x2A(0x1), Mask(0x1)
	uint8_t BitPad_0x2A_1 : 7; // 0x2A(0x1)
	uint8_t bDoubleSidedCheck : 1; // 0x2B(0x1), Mask(0x1)
	uint8_t BitPad_0x2B_1 : 7; // 0x2B(0x1)
	ECollisionChannel BlockCheckChannel; // 0x2C(0x1)
	uint8_t bUesC203Mark : 1; // 0x2D(0x1), Mask(0x1)
	uint8_t BitPad_0x2D_1 : 7; // 0x2D(0x1)
	uint8_t bUseMarkLockCountDown : 1; // 0x2E(0x1), Mask(0x1)
	uint8_t BitPad_0x2E_1 : 7; // 0x2E(0x1)
	uint8_t Pad_0x2F[0x1]; // 0x2F(0x1)
	float MarkLockCountDownCheckCD; // 0x30(0x4)
	int32_t BaseMarkBuffID; // 0x34(0x4)
};

// Object: ScriptStruct DFMAbility.C204InterferenceAnimInstanceProxy
// Size: 0x7A0 (Inherited: 0x7A0)
struct FC204InterferenceAnimInstanceProxy : FAnimInstanceProxy
{
	uint8_t bPreFire : 1; // 0x798(0x1), Mask(0x1)
	uint8_t bExplode : 1; // 0x799(0x1), Mask(0x1)
};

// Object: ScriptStruct DFMAbility.C501FightTargetCandidate
// Size: 0x30 (Inherited: 0x0)
struct FC501FightTargetCandidate
{
	struct TWeakObjectPtr<struct ADFMCharacter> TargetCharacter; // 0x0(0x8)
	float FirstSeenTime; // 0x8(0x4)
	float LastSeenTime; // 0xC(0x4)
	uint8_t bInSight : 1; // 0x10(0x1), Mask(0x1)
	uint8_t BitPad_0x10_1 : 7; // 0x10(0x1)
	uint8_t Pad_0x11[0x3]; // 0x11(0x3)
	float DistanceScore; // 0x14(0x4)
	float DirectionScore; // 0x18(0x4)
	float TypeScore; // 0x1C(0x4)
	float StickinessScore; // 0x20(0x4)
	float VisionScore; // 0x24(0x4)
	float BroadcastedTargetScore; // 0x28(0x4)
	float FinalScore; // 0x2C(0x4)
};

// Object: ScriptStruct DFMAbility.AIFollowSlot
// Size: 0xC (Inherited: 0x0)
struct FAIFollowSlot
{
	uint8_t Pad_0x0[0xC]; // 0x0(0xC)
};

// Object: ScriptStruct DFMAbility.CallAIInfoPanelViewLogic
// Size: 0x50 (Inherited: 0x0)
struct FCallAIInfoPanelViewLogic
{
	struct UObject* WorldContextObject; // 0x0(0x8)
	uint8_t Pad_0x8[0x18]; // 0x8(0x18)
	struct FCallAIStatusInfo CurrentStatusInfo; // 0x20(0x30)
};

// Object: ScriptStruct DFMAbility.CallDogFightTargetCandidate
// Size: 0x30 (Inherited: 0x0)
struct FCallDogFightTargetCandidate
{
	struct TWeakObjectPtr<struct ADFMCharacter> TargetCharacter; // 0x0(0x8)
	float FirstSeenTime; // 0x8(0x4)
	float LastSeenTime; // 0xC(0x4)
	uint8_t bInSight : 1; // 0x10(0x1), Mask(0x1)
	uint8_t BitPad_0x10_1 : 7; // 0x10(0x1)
	uint8_t Pad_0x11[0x3]; // 0x11(0x3)
	float DistanceScore; // 0x14(0x4)
	float DirectionScore; // 0x18(0x4)
	float TypeScore; // 0x1C(0x4)
	float StickinessScore; // 0x20(0x4)
	float VisionScore; // 0x24(0x4)
	float BroadcastedTargetScore; // 0x28(0x4)
	float FinalScore; // 0x2C(0x4)
};

// Object: ScriptStruct DFMAbility.ChainHookAnimInstanceProxy
// Size: 0x7A0 (Inherited: 0x7A0)
struct FChainHookAnimInstanceProxy : FAnimInstanceProxy
{
	uint8_t bIsShowHook : 1; // 0x798(0x1), Mask(0x1)
};

// Object: ScriptStruct DFMAbility.ChainHookBendCheckData
// Size: 0x2 (Inherited: 0x0)
struct FChainHookBendCheckData
{
	EChainHookCheckStartType StartType; // 0x0(0x1)
	EChainHookCheckEndType EndType; // 0x1(0x1)
};

// Object: ScriptStruct DFMAbility.ChainHookRoleData
// Size: 0x30 (Inherited: 0x0)
struct FChainHookRoleData
{
	uint8_t bIsSupportHD : 1; // 0x0(0x1), Mask(0x1)
	uint8_t BitPad_0x0_1 : 7; // 0x0(0x1)
	uint8_t bIsSupportMobile : 1; // 0x1(0x1), Mask(0x1)
	uint8_t BitPad_0x1_1 : 7; // 0x1(0x1)
	uint8_t Pad_0x2[0x6]; // 0x2(0x6)
	struct TArray<EBuffGameRole> AllGameRoles; // 0x8(0x10)
	int32_t PullBackDelayBuffID; // 0x18(0x4)
	int32_t PullBackDelayHookedBuffID; // 0x1C(0x4)
	float PullBackDelay; // 0x20(0x4)
	float HitOtherPullBackDelay; // 0x24(0x4)
	float HitBoxMaxHP; // 0x28(0x4)
	uint8_t Pad_0x2C[0x4]; // 0x2C(0x4)
};

// Object: ScriptStruct DFMAbility.ChainHookRopePoint
// Size: 0x30 (Inherited: 0x0)
struct FChainHookRopePoint
{
	struct FVector Location; // 0x0(0xC)
	struct FVector Target; // 0xC(0xC)
	struct FVector Normal; // 0x18(0xC)
	struct FVector Tangent; // 0x24(0xC)
};

// Object: ScriptStruct DFMAbility.ChainHookItemAnimInstanceProxy
// Size: 0x7D0 (Inherited: 0x7A0)
struct FChainHookItemAnimInstanceProxy : FAnimInstanceProxy
{
	uint8_t bIsFPP : 1; // 0x798(0x1), Mask(0x1)
	EChainHookState HookState; // 0x799(0x1)
	struct FVector StartLocation; // 0x79C(0xC)
	struct FVector HookLocation; // 0x7A8(0xC)
	uint8_t bIsBend : 1; // 0x7B4(0x1), Mask(0x1)
	struct FVector BendLocation; // 0x7B8(0xC)
	uint8_t BitPad_0x7C5_2 : 6; // 0x7C5(0x1)
	uint8_t Pad_0x7C6[0xA]; // 0x7C6(0xA)
};

// Object: ScriptStruct DFMAbility.AbilityBarbedWireAreaData
// Size: 0x28 (Inherited: 0x0)
struct FAbilityBarbedWireAreaData
{
	struct TArray<EBuffGameRole> AllGameRoles; // 0x0(0x10)
	int32_t MaxCount; // 0x10(0x4)
	float LeftTime; // 0x14(0x4)
	float CenterHP; // 0x18(0x4)
	float MinDestroyCellNum; // 0x1C(0x4)
	float MaxTakeRadialDamage; // 0x20(0x4)
	uint8_t Pad_0x24[0x4]; // 0x24(0x4)
};

// Object: ScriptStruct DFMAbility.DFMAbilityBarbedWireTarget
// Size: 0x18 (Inherited: 0x0)
struct FDFMAbilityBarbedWireTarget
{
	uint8_t bIsNeedCheck : 1; // 0x0(0x1), Mask(0x1)
	uint8_t BitPad_0x0_1 : 7; // 0x0(0x1)
	uint8_t bIsPassCheck : 1; // 0x1(0x1), Mask(0x1)
	uint8_t BitPad_0x1_1 : 7; // 0x1(0x1)
	uint8_t bIsCurrInArea : 1; // 0x2(0x1), Mask(0x1)
	uint8_t BitPad_0x2_1 : 7; // 0x2(0x1)
	uint8_t bIsLastInArea : 1; // 0x3(0x1), Mask(0x1)
	uint8_t BitPad_0x3_1 : 7; // 0x3(0x1)
	struct FVector LastCheckLocation; // 0x4(0xC)
	struct TWeakObjectPtr<struct AGPCharacter> Target; // 0x10(0x8)
};

// Object: ScriptStruct DFMAbility.DFMAbilityBaseBoxCD
// Size: 0x10 (Inherited: 0x0)
struct FDFMAbilityBaseBoxCD
{
	int64_t Uin; // 0x0(0x8)
	float CD; // 0x8(0x4)
	uint8_t Pad_0xC[0x4]; // 0xC(0x4)
};

// Object: ScriptStruct DFMAbility.AbilityBlackBorad_ItemPreview
// Size: 0x30 (Inherited: 0x1)
struct FAbilityBlackBorad_ItemPreview : FAbilityFragment
{
	uint8_t IsValid : 1; // 0x0(0x1), Mask(0x1)
	uint8_t BitPad_0x1_1 : 7; // 0x1(0x1)
	uint8_t Pad_0x2[0x2]; // 0x2(0x2)
	struct FVector Position; // 0x4(0xC)
	struct FVector ServerPosition; // 0x10(0xC)
	struct FRotator Rot; // 0x1C(0xC)
	struct AItemPreviewActor* PreviewActor; // 0x28(0x8)
};

// Object: ScriptStruct DFMAbility.AbilityBlackBorad_LineTrace
// Size: 0x50 (Inherited: 0x1)
struct FAbilityBlackBorad_LineTrace : FAbilityFragment
{
	struct TMap<int32_t, struct FHitResult> HitResult; // 0x0(0x50)
};

// Object: ScriptStruct DFMAbility.AbilitySkeletalMeshData
// Size: 0x14 (Inherited: 0x0)
struct FAbilitySkeletalMeshData
{
	struct TWeakObjectPtr<struct UGPSkeletalMeshComponent> WeakMesh; // 0x0(0x8)
	struct TWeakObjectPtr<struct UGPSkeletalMeshComponent> WeakTPPMesh; // 0x8(0x8)
	uint8_t Pad_0x10[0x1]; // 0x10(0x1)
	uint8_t IsBindMesh : 1; // 0x11(0x1), Mask(0x1)
	uint8_t BitPad_0x11_1 : 7; // 0x11(0x1)
	uint8_t bAddToRoot : 1; // 0x12(0x1), Mask(0x1)
	uint8_t BitPad_0x12_1 : 7; // 0x12(0x1)
	uint8_t Pad_0x13[0x1]; // 0x13(0x1)
};

// Object: ScriptStruct DFMAbility.AbilityBlackBorad_AttachMesh
// Size: 0x90 (Inherited: 0x1)
struct FAbilityBlackBorad_AttachMesh : FAbilityFragment
{
	struct TMap<struct FName, struct FAbilitySkeletalMeshData> ItemMesh; // 0x0(0x50)
	struct TWeakObjectPtr<struct UGPSkeletalMeshComponent> WeakBindMesh; // 0x50(0x8)
	struct TWeakObjectPtr<struct UGPSkeletalMeshComponent> WeakBindMeshParent; // 0x58(0x8)
	struct FVector BindPos; // 0x60(0xC)
	uint8_t Pad_0x6D[0x3]; // 0x6D(0x3)
	struct FQuat BindRot; // 0x70(0x10)
	struct FName BindMeshName; // 0x80(0x8)
	uint8_t ForwardHitResult : 1; // 0x88(0x1), Mask(0x1)
	uint8_t BitPad_0x88_1 : 7; // 0x88(0x1)
	uint8_t Pad_0x89[0x7]; // 0x89(0x7)
};

// Object: ScriptStruct DFMAbility.AbilityAttachMeshData
// Size: 0x38 (Inherited: 0x0)
struct FAbilityAttachMeshData
{
	struct UGPSkeletalMeshComponent* ItemMesh; // 0x0(0x8)
	struct FVector Dir; // 0x8(0xC)
	struct FVector Right; // 0x14(0xC)
	struct FVector Up; // 0x20(0xC)
	struct FVector pos; // 0x2C(0xC)
};

// Object: ScriptStruct DFMAbility.AbilityBlackBorad_EngineerData
// Size: 0x38 (Inherited: 0x0)
struct FAbilityBlackBorad_EngineerData
{
	struct TWeakObjectPtr<struct AActor> Vehicle; // 0x0(0x8)
	struct TArray<struct TWeakObjectPtr<struct AActor>> RecycleBunkers; // 0x8(0x10)
	struct TArray<struct TWeakObjectPtr<struct AActor>> ActiveBunkers; // 0x18(0x10)
	struct APawn* OwnerPawn; // 0x28(0x8)
	ESkillUISlot EngineerOverrideSkillUISlot; // 0x30(0x1)
	uint8_t bSkillUISlotOverrided : 1; // 0x31(0x1), Mask(0x1)
	uint8_t BitPad_0x31_1 : 7; // 0x31(0x1)
	uint8_t Pad_0x32[0x6]; // 0x32(0x6)
};

// Object: ScriptStruct DFMAbility.AbilityNotifyCommondData
// Size: 0x10 (Inherited: 0x0)
struct FAbilityNotifyCommondData
{
	uint8_t Pad_0x0[0x10]; // 0x0(0x10)
};

// Object: ScriptStruct DFMAbility.AbilityBlackBorad_SpawnActor
// Size: 0xE8 (Inherited: 0x1)
struct FAbilityBlackBorad_SpawnActor : FAbilityFragment
{
	struct TArray<struct FSystemSpawnActorData> ActorData; // 0x0(0x10)
	struct TMap<int32_t, struct FAbilityNotifyCommondData> NotifyCommonds; // 0x10(0x50)
	struct FHitResult HitResult; // 0x60(0x88)
};

// Object: ScriptStruct DFMAbility.SystemSpawnActorData
// Size: 0x18 (Inherited: 0x0)
struct FSystemSpawnActorData
{
	struct AActor* Actor; // 0x0(0x8)
	struct TWeakObjectPtr<struct AActor> ActorRef; // 0x8(0x8)
	uint8_t ClearWhenRemove : 1; // 0x10(0x1), Mask(0x1)
	uint8_t BitPad_0x10_1 : 7; // 0x10(0x1)
	uint8_t ClearWhenDie : 1; // 0x11(0x1), Mask(0x1)
	uint8_t BitPad_0x11_1 : 7; // 0x11(0x1)
	uint8_t Pad_0x12[0x6]; // 0x12(0x6)
};

// Object: ScriptStruct DFMAbility.AbilityBlackBorad_NotifyCommond
// Size: 0x50 (Inherited: 0x1)
struct FAbilityBlackBorad_NotifyCommond : FAbilityFragment
{
	struct TMap<int32_t, struct FAbilityNotifyCommondData> NotifyCommonds; // 0x0(0x50)
};

// Object: ScriptStruct DFMAbility.C204InterferenceData
// Size: 0x98 (Inherited: 0x0)
struct FC204InterferenceData
{
	float AirExplodeTime; // 0x0(0x4)
	float BounceExplodeTime; // 0x4(0x4)
	float DestroyTime; // 0x8(0x4)
	float DetectRange; // 0xC(0x4)
	uint8_t bEnableMarkEnemy : 1; // 0x10(0x1), Mask(0x1)
	uint8_t BitPad_0x10_1 : 7; // 0x10(0x1)
	uint8_t Pad_0x11[0x3]; // 0x11(0x3)
	float MarkTime; // 0x14(0x4)
	struct FName ExplosionFXName; // 0x18(0x8)
	struct FName RangeFXName; // 0x20(0x8)
	struct FName ChangeUpFXName; // 0x28(0x8)
	struct FName DestroyFXName; // 0x30(0x8)
	struct FName DestroyFXNameWater; // 0x38(0x8)
	struct TSoftClassPtr<struct UC204InterferenceAnimInstance*> AnimInst; // 0x40(0x28)
	int32_t EMPScoreName; // 0x68(0x4)
	uint8_t Pad_0x6C[0x4]; // 0x6C(0x4)
	uint64_t EMPScoreUID; // 0x70(0x8)
	struct FString HitVoice; // 0x78(0x10)
	float PlayHitVoiceInterval; // 0x88(0x4)
	struct FName CountDownAudioName; // 0x8C(0x8)
	float CountDownAudioPlayTime; // 0x94(0x4)
};

// Object: ScriptStruct DFMAbility.SonarDeviceConfig
// Size: 0xF0 (Inherited: 0x0)
struct FSonarDeviceConfig
{
	uint8_t bNeedAutoAttachToSurface : 1; // 0x0(0x1), Mask(0x1)
	uint8_t BitPad_0x0_1 : 7; // 0x0(0x1)
	uint8_t Pad_0x1[0x3]; // 0x1(0x3)
	float AttachToSurfaceDis; // 0x4(0x4)
	EDFMGamePlayMode GamePlayMode; // 0x8(0x1)
	uint8_t Pad_0x9[0x7]; // 0x9(0x7)
	struct TArray<EAudioListenerType> AudioListenTypeList; // 0x10(0x10)
	struct TArray<struct FAudioListenerItemData> AudioListenList; // 0x20(0x10)
	int32_t ScanTimes; // 0x30(0x4)
	float ScanInterval; // 0x34(0x4)
	float ScanTimeSeconds; // 0x38(0x4)
	float PreScanTimeSeconds; // 0x3C(0x4)
	float ScanRefreshInterval; // 0x40(0x4)
	float IconLifeTime; // 0x44(0x4)
	float ScanDegrees; // 0x48(0x4)
	float ScanRadius; // 0x4C(0x4)
	uint8_t bHearing : 1; // 0x50(0x1), Mask(0x1)
	uint8_t BitPad_0x50_1 : 7; // 0x50(0x1)
	uint8_t Pad_0x51[0x3]; // 0x51(0x3)
	float TeammateShowHudDistance; // 0x54(0x4)
	struct FName ScanEffectName; // 0x58(0x8)
	struct FName ScanDeviceEffectName; // 0x60(0x8)
	struct FName SilenceDeviceEffectName; // 0x68(0x8)
	float TranslucencySortDistance; // 0x70(0x4)
	uint8_t bUseGeneralMarker : 1; // 0x74(0x1), Mask(0x1)
	uint8_t BitPad_0x74_1 : 7; // 0x74(0x1)
	uint8_t Pad_0x75[0x3]; // 0x75(0x3)
	uint32_t EnterRangeBuffID; // 0x78(0x4)
	uint32_t ScanCountBuffID; // 0x7C(0x4)
	EScoreName ScoreName; // 0x80(0x4)
	struct FName MarkerHudViewName; // 0x84(0x8)
	uint8_t Pad_0x8C[0x4]; // 0x8C(0x4)
	struct FString VO_ScanLessThan3; // 0x90(0x10)
	struct FString VO_ScanMoreThan3; // 0xA0(0x10)
	struct FString VO_MarkEnemy; // 0xB0(0x10)
	float VO_CoolDownTime; // 0xC0(0x4)
	struct FName WaterInteractRippleEffectId; // 0xC4(0x8)
	struct FName SilenceLoopAudioName; // 0xCC(0x8)
	struct FName PreScanAudioName; // 0xD4(0x8)
	struct FName ScanAudioName; // 0xDC(0x8)
	struct FName NewCharacterMarkerAudio; // 0xE4(0x8)
	uint8_t Pad_0xEC[0x4]; // 0xEC(0x4)
};

// Object: ScriptStruct DFMAbility.DetectItem
// Size: 0x10 (Inherited: 0x0)
struct FDetectItem
{
	struct ADFMCharacter* CHARACTER; // 0x0(0x8)
	float DetectTime; // 0x8(0x4)
	uint8_t Pad_0xC[0x4]; // 0xC(0x4)
};

// Object: ScriptStruct DFMAbility.AbilityDataBase
// Size: 0x10 (Inherited: 0x1)
struct FAbilityDataBase : FAbilityFragment
{
	int32_t skillEntityIndex; // 0x0(0x4)
	int32_t LogicID; // 0x4(0x4)
	struct TWeakObjectPtr<struct UQA_AbilityLogicTask> QA; // 0x8(0x8)
};

// Object: ScriptStruct DFMAbility.AbilityDefaultData
// Size: 0x14 (Inherited: 0x10)
struct FAbilityDefaultData : FAbilityDataBase
{
	uint8_t ClientTrigger : 1; // 0x10(0x1), Mask(0x1)
	uint8_t BitPad_0x10_1 : 7; // 0x10(0x1)
	uint8_t Pad_0x11[0x3]; // 0x11(0x3)
};

// Object: ScriptStruct DFMAbility.MarkerEffectData
// Size: 0x8 (Inherited: 0x0)
struct FMarkerEffectData
{
	uint8_t Pad_0x0[0x8]; // 0x0(0x8)
};

// Object: ScriptStruct DFMAbility.DiffuseAreaClientCell
// Size: 0x30 (Inherited: 0x0)
struct FDiffuseAreaClientCell
{
	uint8_t bIsActive : 1; // 0x0(0x1), Mask(0x1)
	uint8_t BitPad_0x0_1 : 7; // 0x0(0x1)
	uint8_t Pad_0x1[0x3]; // 0x1(0x3)
	float MaxHeight; // 0x4(0x4)
	struct FVector BaseLocation; // 0x8(0xC)
	float BaseYaw; // 0x14(0x4)
	int32_t EffectHandleIndex; // 0x18(0x4)
	int32_t EffectUid; // 0x1C(0x4)
	struct UFXResourceContainerComponent* Effect; // 0x20(0x8)
	struct UMeshComponent* Mesh; // 0x28(0x8)
};

// Object: ScriptStruct DFMAbility.SyncDiffuseAreaClientCell
// Size: 0x8 (Inherited: 0x0)
struct FSyncDiffuseAreaClientCell
{
	int32_t Index; // 0x0(0x4)
	float MaxHeight; // 0x4(0x4)
};

// Object: ScriptStruct DFMAbility.DiffuseAreaCell
// Size: 0x30 (Inherited: 0x0)
struct FDiffuseAreaCell
{
	int32_t X; // 0x0(0x4)
	int32_t Y; // 0x4(0x4)
	float DamageHeight; // 0x8(0x4)
	float DiffuseHeight; // 0xC(0x4)
	struct FVector Location; // 0x10(0xC)
	struct FVector Normal; // 0x1C(0xC)
	float ExtinguishTime; // 0x28(0x4)
	uint8_t Pad_0x2C[0x4]; // 0x2C(0x4)
};

// Object: ScriptStruct DFMAbility.DFMAbilityArrowData
// Size: 0x38 (Inherited: 0x0)
struct FDFMAbilityArrowData
{
	EDFMGamePlayMode GameMode; // 0x0(0x1)
	uint8_t Pad_0x1[0x3]; // 0x1(0x3)
	float CheckRadius; // 0x4(0x4)
	float CheckRadiusInWater; // 0x8(0x4)
	uint8_t Pad_0xC[0x4]; // 0xC(0x4)
	int64_t AttackValueId; // 0x10(0x8)
	int64_t AttackValueIdInWater; // 0x18(0x8)
	int64_t BarbedWireAttackValueId; // 0x20(0x8)
	int32_t BarbedWireAddBuffId; // 0x28(0x4)
	uint8_t bBarbedWireAttackHitSelf : 1; // 0x2C(0x1), Mask(0x1)
	uint8_t BitPad_0x2C_1 : 7; // 0x2C(0x1)
	uint8_t Pad_0x2D[0x3]; // 0x2D(0x3)
	float MakeDamageInterval; // 0x30(0x4)
	uint8_t Pad_0x34[0x4]; // 0x34(0x4)
};

// Object: ScriptStruct DFMAbility.AbilityFunctionData
// Size: 0x18 (Inherited: 0x10)
struct FAbilityFunctionData : FAbilityDataBase
{
	struct FName Name; // 0x10(0x8)
};

// Object: ScriptStruct DFMAbility.AbilityTempalteLoadData
// Size: 0x18 (Inherited: 0x0)
struct FAbilityTempalteLoadData
{
	struct TArray<int32_t> SkillEntityIndexs; // 0x0(0x10)
	uint64_t LoadHandler; // 0x10(0x8)
};

// Object: ScriptStruct DFMAbility.AbilityTemplateRepData
// Size: 0x2C0 (Inherited: 0x0)
struct FAbilityTemplateRepData
{
	int32_t SkillId; // 0x0(0x4)
	uint8_t Pad_0x4[0x4]; // 0x4(0x4)
	struct TArray<struct FAbilityTaskRepData> NodeData; // 0x8(0x10)
	uint8_t bUseDsRepData : 1; // 0x18(0x1), Mask(0x1)
	uint8_t BitPad_0x18_1 : 7; // 0x18(0x1)
	uint8_t bClientPredict : 1; // 0x19(0x1), Mask(0x1)
	uint8_t BitPad_0x19_1 : 7; // 0x19(0x1)
	uint8_t Pad_0x1A[0x6]; // 0x1A(0x6)
	struct TArray<struct FName> NodeNoCheckTime; // 0x20(0x10)
	struct TMap<struct FName, ENodeCantPlay> NodeCantPlayMap; // 0x30(0x50)
	struct TArray<struct FName> OverrideParams; // 0x80(0x10)
	struct TMap<struct FName, EAbilityStateFlag> LogicFlags; // 0x90(0x50)
	struct TMap<struct FName, EAbilityNodeExcuteType> LogicExcuteType; // 0xE0(0x50)
	struct TMap<ESkillBehavior, struct FSkillBehaviorData> SkillBehaviorMap; // 0x130(0x50)
	struct TMap<ESkillBehavior, struct FSkillBehaviorData> SkillBehaviorMapBase; // 0x180(0x50)
	struct TMap<ESkillBtnCall, struct FSkillBtnCallData> BehaviorGroupMap; // 0x1D0(0x50)
	struct TMap<ESkillBtnCall, struct FSkillBtnCallData> BehaviorGroupMapBase; // 0x220(0x50)
	struct TMap<EFSMGamePlayStatusDefine, int32_t> FSMStatusMapBase; // 0x270(0x50)
};

// Object: ScriptStruct DFMAbility.AbilityTaskRepData
// Size: 0x40 (Inherited: 0x0)
struct FAbilityTaskRepData
{
	struct FString ClassPath; // 0x0(0x10)
	struct FString TaskName; // 0x10(0x10)
	struct TArray<uint8_t> BaseData; // 0x20(0x10)
	struct TArray<uint8_t> ParamData; // 0x30(0x10)
};

// Object: ScriptStruct DFMAbility.DefenseConfig
// Size: 0x20 (Inherited: 0x0)
struct FDefenseConfig
{
	struct TArray<int32_t> BuffAdds; // 0x0(0x10)
	float HorizontalDistance; // 0x10(0x4)
	float VerticalDistance; // 0x14(0x4)
	float CheckInterval; // 0x18(0x4)
	uint8_t Pad_0x1C[0x4]; // 0x1C(0x4)
};

// Object: ScriptStruct DFMAbility.EnginVehicleChargingData
// Size: 0xC (Inherited: 0x0)
struct FEnginVehicleChargingData
{
	uint8_t HasVehicleRecycle : 1; // 0x0(0x1), Mask(0x1)
	uint8_t BitPad_0x0_1 : 7; // 0x0(0x1)
	uint8_t Pad_0x1[0x3]; // 0x1(0x3)
	float VehicleHealthPercent; // 0x4(0x4)
	float VehiclePowerPercent; // 0x8(0x4)
};

// Object: ScriptStruct DFMAbility.MauriceAuraConfig
// Size: 0x20 (Inherited: 0x0)
struct FMauriceAuraConfig
{
	float radius; // 0x0(0x4)
	uint8_t Pad_0x4[0x4]; // 0x4(0x4)
	struct TArray<struct FMauriceAuraBuffByCount> BuffsByCount; // 0x8(0x10)
	uint8_t Pad_0x18[0x8]; // 0x18(0x8)
};

// Object: ScriptStruct DFMAbility.MauriceAuraBuffByCount
// Size: 0x18 (Inherited: 0x0)
struct FMauriceAuraBuffByCount
{
	int32_t MinCount; // 0x0(0x4)
	int32_t MaxCount; // 0x4(0x4)
	struct TArray<int32_t> BuffIds; // 0x8(0x10)
};

// Object: ScriptStruct DFMAbility.LevelAbilityActorInfo
// Size: 0x18 (Inherited: 0x0)
struct FLevelAbilityActorInfo
{
	uint64_t ID; // 0x0(0x8)
	int32_t CampId; // 0x8(0x4)
	int32_t TeamID; // 0xC(0x4)
	int32_t HP; // 0x10(0x4)
	int32_t CustomValue; // 0x14(0x4)
};

// Object: ScriptStruct DFMAbility.AbilityProjectilData
// Size: 0x28 (Inherited: 0x0)
struct FAbilityProjectilData
{
	int32_t UpdateCount; // 0x0(0x4)
	struct FVector Velocity; // 0x4(0xC)
	struct FVector pos; // 0x10(0xC)
	struct FRotator Rot; // 0x1C(0xC)
};

// Object: ScriptStruct DFMAbility.AbilityMontageLoadHadnle
// Size: 0x10 (Inherited: 0x0)
struct FAbilityMontageLoadHadnle
{
	struct TArray<struct FAbilityMontageLoadData> LoadDatas; // 0x0(0x10)
};

// Object: ScriptStruct DFMAbility.AbilityMontageLoadData
// Size: 0x14 (Inherited: 0x0)
struct FAbilityMontageLoadData
{
	int32_t skillEntityIndex; // 0x0(0x4)
	struct TWeakObjectPtr<struct USkeletalMeshComponent> InSkeletalMeshComponent; // 0x4(0x8)
	float PlayRate; // 0xC(0x4)
	float StartingPosition; // 0x10(0x4)
};

// Object: ScriptStruct DFMAbility.AbilityParticleSmokeWallParam
// Size: 0x1C (Inherited: 0x0)
struct FAbilityParticleSmokeWallParam
{
	int32_t MaterialIndex; // 0x0(0x4)
	struct FName ParamName; // 0x4(0x8)
	float StartValue; // 0xC(0x4)
	float EndValue; // 0x10(0x4)
	float DelayTime; // 0x14(0x4)
	float FadeOutTime; // 0x18(0x4)
};

// Object: ScriptStruct DFMAbility.AbilityMineDataFX
// Size: 0x210 (Inherited: 0x0)
struct FAbilityMineDataFX
{
	uint8_t Pad_0x0[0x200]; // 0x0(0x200)
	struct UFXResourceContainerComponent* FXComp; // 0x200(0x8)
	int32_t ExplosionFXCompHandle; // 0x208(0x4)
	uint8_t Pad_0x20C[0x4]; // 0x20C(0x4)
};

// Object: ScriptStruct DFMAbility.AbilityMineExplosionEffectConfig
// Size: 0x278 (Inherited: 0x0)
struct FAbilityMineExplosionEffectConfig
{
	struct TSoftObjectPtr<UGPAudioEventAsset> ExplosionAudio; // 0x0(0x28)
	struct FName ExplosionEffectId; // 0x28(0x8)
	uint64_t ExplosionEffectFXId; // 0x30(0x8)
	struct FAbilityMineDataFX MineDataFX; // 0x38(0x210)
	struct FVector ExplosionOffset; // 0x248(0xC)
	struct FRotator ExplosionRot; // 0x254(0xC)
	struct FVector ExplosionScale; // 0x260(0xC)
	struct FName HitDecalId; // 0x26C(0x8)
	uint8_t Pad_0x274[0x4]; // 0x274(0x4)
};

// Object: ScriptStruct DFMAbility.AbilityPlayMontageRowData
// Size: 0xA4 (Inherited: 0x0)
struct FAbilityPlayMontageRowData
{
	struct FName AnimKey; // 0x0(0x8)
	float AnimRate; // 0x8(0x4)
	EAnimationPlayType AnimationPlayType; // 0xC(0x1)
	EAnimationPlayType AnimationPlayType3P; // 0xD(0x1)
	uint8_t bUse3PPlayType : 1; // 0xE(0x1), Mask(0x1)
	uint8_t BitPad_0xE_1 : 7; // 0xE(0x1)
	uint8_t Pad_0xF[0x1]; // 0xF(0x1)
	int32_t LoopCount; // 0x10(0x4)
	uint8_t Loop : 1; // 0x14(0x1), Mask(0x1)
	uint8_t BitPad_0x14_1 : 7; // 0x14(0x1)
	uint8_t ThreeAction : 1; // 0x15(0x1), Mask(0x1)
	uint8_t BitPad_0x15_1 : 7; // 0x15(0x1)
	uint8_t Pad_0x16[0x2]; // 0x16(0x2)
	float ThreeActionTime; // 0x18(0x4)
	uint8_t UseLeftHandAnim : 1; // 0x1C(0x1), Mask(0x1)
	uint8_t BitPad_0x1C_1 : 7; // 0x1C(0x1)
	uint8_t UseLeftHandAnimUpdatePose : 1; // 0x1D(0x1), Mask(0x1)
	uint8_t BitPad_0x1D_1 : 7; // 0x1D(0x1)
	uint8_t ForbiddenLeftHandAnim : 1; // 0x1E(0x1), Mask(0x1)
	uint8_t BitPad_0x1E_1 : 7; // 0x1E(0x1)
	uint8_t InVehicleIgnoreLeanPose : 1; // 0x1F(0x1), Mask(0x1)
	uint8_t BitPad_0x1F_1 : 7; // 0x1F(0x1)
	uint8_t bForbidHandIKWhenWeaponInactive : 1; // 0x20(0x1), Mask(0x1)
	uint8_t BitPad_0x20_1 : 7; // 0x20(0x1)
	uint8_t Pad_0x21[0x3]; // 0x21(0x3)
	struct FName Notify; // 0x24(0x8)
	struct FName Notify2; // 0x2C(0x8)
	struct FName Notify3; // 0x34(0x8)
	float BlendIn; // 0x3C(0x4)
	float BlendOut; // 0x40(0x4)
	uint8_t bStopAllMontange : 1; // 0x44(0x1), Mask(0x1)
	uint8_t BitPad_0x44_1 : 7; // 0x44(0x1)
	uint8_t bPlayEndEquip : 1; // 0x45(0x1), Mask(0x1)
	uint8_t BitPad_0x45_1 : 7; // 0x45(0x1)
	uint8_t bMotionAddEndSection : 1; // 0x46(0x1), Mask(0x1)
	uint8_t BitPad_0x46_1 : 7; // 0x46(0x1)
	uint8_t Pad_0x47[0x1]; // 0x47(0x1)
	int32_t AnimationPlayIndex; // 0x48(0x4)
	uint8_t WeaponEquipAnim : 1; // 0x4C(0x1), Mask(0x1)
	uint8_t BitPad_0x4C_1 : 7; // 0x4C(0x1)
	EInteractiveGetWeaponType GetWeaponType; // 0x4D(0x1)
	EInteractivePutWeaponType PutWeaponType; // 0x4E(0x1)
	uint8_t Pad_0x4F[0x1]; // 0x4F(0x1)
	float GetWeaponEquipBlendIn; // 0x50(0x4)
	float GetWeaponEquipBlendOut; // 0x54(0x4)
	uint8_t bGetStopAll : 1; // 0x58(0x1), Mask(0x1)
	uint8_t BitPad_0x58_1 : 7; // 0x58(0x1)
	uint8_t bNextFrameVisible : 1; // 0x59(0x1), Mask(0x1)
	uint8_t BitPad_0x59_1 : 7; // 0x59(0x1)
	uint8_t Pad_0x5A[0x2]; // 0x5A(0x2)
	float fGetStopTimer; // 0x5C(0x4)
	float PutWeaponEquipBlendOut; // 0x60(0x4)
	float PutWeaponPreTime; // 0x64(0x4)
	int32_t QuietEquipSlot; // 0x68(0x4)
	struct FName AnimMeshName; // 0x6C(0x8)
	int32_t AnimMeshIndex; // 0x74(0x4)
	int32_t AnimMeshStopIndex; // 0x78(0x4)
	struct FName EndSpawnActorNotifyEvent; // 0x7C(0x8)
	uint8_t bEnable3POverrideConfig : 1; // 0x84(0x1), Mask(0x1)
	uint8_t BitPad_0x84_1 : 7; // 0x84(0x1)
	uint8_t Pad_0x85[0x3]; // 0x85(0x3)
	float AnimTimeOffset3P; // 0x88(0x4)
	EInteractiveGetWeaponType GetWeaponType3p; // 0x8C(0x1)
	EInteractivePutWeaponType PutWeaponType3p; // 0x8D(0x1)
	uint8_t bEnableSwimOverrideConfig : 1; // 0x8E(0x1), Mask(0x1)
	uint8_t BitPad_0x8E_1 : 7; // 0x8E(0x1)
	EInteractiveGetWeaponType GetWeaponTypeSwim; // 0x8F(0x1)
	uint8_t bStopLeftHandlAnim : 1; // 0x90(0x1), Mask(0x1)
	uint8_t BitPad_0x90_1 : 7; // 0x90(0x1)
	uint8_t bAnimCallbackStopAllLastMontage : 1; // 0x91(0x1), Mask(0x1)
	uint8_t BitPad_0x91_1 : 7; // 0x91(0x1)
	uint8_t ShowFPPLowerMesh : 1; // 0x92(0x1), Mask(0x1)
	uint8_t BitPad_0x92_1 : 7; // 0x92(0x1)
	uint8_t Pad_0x93[0x1]; // 0x93(0x1)
	struct FName UnNormalBreakMeshName; // 0x94(0x8)
	uint8_t bForbitLeftAnim : 1; // 0x9C(0x1), Mask(0x1)
	uint8_t BitPad_0x9C_1 : 7; // 0x9C(0x1)
	uint8_t Pad_0x9D[0x3]; // 0x9D(0x3)
	float DontPlayOverrtime; // 0xA0(0x4)
};

// Object: ScriptStruct DFMAbility.AbilityPlayMontageData
// Size: 0x828 (Inherited: 0x780)
struct FAbilityPlayMontageData : FCharacterPlayMontageData
{
	struct FAbilityPlayMontageRowData RowData; // 0x780(0xA4)
	uint8_t Pad_0x824[0x4]; // 0x824(0x4)
};

// Object: ScriptStruct DFMAbility.AbilityMontageSystemData
// Size: 0xC0 (Inherited: 0x10)
struct FAbilityMontageSystemData : FAbilityDataBase
{
	struct TMap<uint32_t, struct UAnimMontage*> InMontageFPP; // 0x10(0x50)
	struct TMap<uint32_t, struct UAnimMontage*> InMontageTPP; // 0x60(0x50)
	struct FRotator Rotator; // 0xB0(0xC)
	uint8_t Pad_0xBC[0x4]; // 0xBC(0x4)
};

// Object: ScriptStruct DFMAbility.AbilityMontageTaskData
// Size: 0x98 (Inherited: 0x10)
struct FAbilityMontageTaskData : FAbilityDataBase
{
	struct FTimerHandle UnEquipAnimTimer; // 0x10(0x8)
	struct FTimerHandle EquipAnimTimer; // 0x18(0x8)
	struct FTimerHandle AnimTimer; // 0x20(0x8)
	struct FTimerHandle NotifyTimer; // 0x28(0x8)
	struct FTimerHandle Notify2Timer; // 0x30(0x8)
	struct FTimerHandle Notify3Timer; // 0x38(0x8)
	struct FTimerHandle StopAnimTimer; // 0x40(0x8)
	struct TArray<struct FAbilityMontageLockNotifyData> LockTimer; // 0x48(0x10)
	struct TArray<struct FAbilityMontageVisibleNotifyData> VisibleTimer; // 0x58(0x10)
	struct TWeakObjectPtr<struct UAnimMontage> EndedDelegateMontage; // 0x68(0x8)
	uint8_t Pad_0x70[0x10]; // 0x70(0x10)
	struct TWeakObjectPtr<struct UAnimMontage> UnEquipMontage; // 0x80(0x8)
	uint8_t Pad_0x88[0x10]; // 0x88(0x10)
};

// Object: ScriptStruct DFMAbility.AbilityMontageVisibleNotifyData
// Size: 0x18 (Inherited: 0x0)
struct FAbilityMontageVisibleNotifyData
{
	struct FTimerHandle NotifyTimer; // 0x0(0x8)
	int32_t SkillId; // 0x8(0x4)
	uint8_t MeshVisible : 1; // 0xC(0x1), Mask(0x1)
	uint8_t BitPad_0xC_1 : 7; // 0xC(0x1)
	uint8_t Pad_0xD[0x3]; // 0xD(0x3)
	struct FName MeshName; // 0x10(0x8)
};

// Object: ScriptStruct DFMAbility.AbilityMontageLockNotifyData
// Size: 0x30 (Inherited: 0x0)
struct FAbilityMontageLockNotifyData
{
	struct FTimerHandle NotifyTimer; // 0x0(0x8)
	struct TArray<ECharacterStateMask> LockStateAbilitys; // 0x8(0x10)
	struct TArray<ECharacterStateMask> UnLockStateAbilitys; // 0x18(0x10)
	uint8_t ReleaseLock : 1; // 0x28(0x1), Mask(0x1)
	uint8_t BitPad_0x28_1 : 7; // 0x28(0x1)
	uint8_t Pad_0x29[0x7]; // 0x29(0x7)
};

// Object: ScriptStruct DFMAbility.AbilityPreviewActorData
// Size: 0x58 (Inherited: 0x10)
struct FAbilityPreviewActorData : FAbilityDataBase
{
	struct AActor* Actor; // 0x10(0x8)
	struct FVector StartLocation; // 0x18(0xC)
	struct FVector LaunchVelocity; // 0x24(0xC)
	struct TArray<struct AActor*> LineCubePool; // 0x30(0x10)
	struct TArray<struct AActor*> LineCubePool2; // 0x40(0x10)
	float NextDrawTime; // 0x50(0x4)
	uint8_t Pad_0x54[0x4]; // 0x54(0x4)
};

// Object: ScriptStruct DFMAbility.DFMAbilityAdvanceScanTracePathItem
// Size: 0x18 (Inherited: 0x0)
struct FDFMAbilityAdvanceScanTracePathItem
{
	struct FVector Point; // 0x0(0xC)
	int32_t StartIndex; // 0xC(0x4)
	struct ADFMCharacter* Target; // 0x10(0x8)
};

// Object: ScriptStruct DFMAbility.DFMAbilityAdvanceScanItem
// Size: 0x18 (Inherited: 0x0)
struct FDFMAbilityAdvanceScanItem
{
	struct ADFMCharacter* Target; // 0x0(0x8)
	struct TArray<struct FVector> Paths; // 0x8(0x10)
};

// Object: ScriptStruct DFMAbility.SmokeStateArray
// Size: 0x118 (Inherited: 0x108)
struct FSmokeStateArray : FFastArraySerializer
{
	struct TArray<struct FSmokeStateItem> Items; // 0x108(0x10)
};

// Object: ScriptStruct DFMAbility.SmokeStateItem
// Size: 0x30 (Inherited: 0xC)
struct FSmokeStateItem : FFastArraySerializerItem
{
	ESmokeState CurrentSmokeState; // 0xC(0x1)
	ESmokeState LastSmokeState; // 0xD(0x1)
	uint8_t Pad_0xE[0x2]; // 0xE(0x2)
	int32_t ExtinguishBoxIndex; // 0x10(0x4)
	struct FBox SmokeBox; // 0x14(0x1C)
};

// Object: ScriptStruct DFMAbility.AbilityDeformableSmokeBox
// Size: 0xCC (Inherited: 0x0)
struct FAbilityDeformableSmokeBox
{
	uint8_t Pad_0x0[0xCC]; // 0x0(0xCC)
};

// Object: ScriptStruct DFMAbility.AbilityLeaveStateData
// Size: 0x1C (Inherited: 0x10)
struct FAbilityLeaveStateData : FAbilityDataBase
{
	struct FName StateName; // 0x10(0x8)
	EAbilityTriggerType Trigger; // 0x18(0x1)
	uint8_t Pad_0x19[0x3]; // 0x19(0x3)
};

// Object: ScriptStruct DFMAbility.AbilityStateData
// Size: 0x18 (Inherited: 0x10)
struct FAbilityStateData : FAbilityDataBase
{
	struct FName StateName; // 0x10(0x8)
};

// Object: ScriptStruct DFMAbility.DFMAbilitySubTitleConfig
// Size: 0x78 (Inherited: 0x10)
struct FDFMAbilitySubTitleConfig : FDescRowBase
{
	struct FName SubtitleName; // 0x10(0x8)
	struct FText SpeakerName; // 0x18(0x18)
	struct FText NonePOISubtitle; // 0x30(0x18)
	struct FText POISubtitleFormatString; // 0x48(0x18)
	float SubtitleDuration; // 0x60(0x4)
	uint8_t SubtitlePriority; // 0x64(0x1)
	uint8_t bOverrideSamePriority : 1; // 0x65(0x1), Mask(0x1)
	uint8_t BitPad_0x65_1 : 7; // 0x65(0x1)
	uint8_t bPlayVO : 1; // 0x66(0x1), Mask(0x1)
	uint8_t BitPad_0x66_1 : 7; // 0x66(0x1)
	uint8_t Pad_0x67[0x1]; // 0x67(0x1)
	struct UGPAudioEventAsset* VOEvent; // 0x68(0x8)
	EGPAudioBlueprintType VOType; // 0x70(0x1)
	uint8_t Pad_0x71[0x3]; // 0x71(0x3)
	float MaxPlayVODistance; // 0x74(0x4)
};

// Object: ScriptStruct DFMAbility.AbilityTimerHandle
// Size: 0x18 (Inherited: 0x10)
struct FAbilityTimerHandle : FAbilityDataBase
{
	struct FTimerHandle TimerHandle; // 0x10(0x8)
};

// Object: ScriptStruct DFMAbility.AbilityThrowBlockingSpawnMaterialParameter
// Size: 0x10 (Inherited: 0x0)
struct FAbilityThrowBlockingSpawnMaterialParameter
{
	struct FName ParamName; // 0x0(0x8)
	struct UCurveFloat* ParamCurve; // 0x8(0x8)
};

// Object: ScriptStruct DFMAbility.AbilityThrowBlockingData
// Size: 0x30 (Inherited: 0x0)
struct FAbilityThrowBlockingData
{
	struct TArray<EBuffGameRole> AllGameRoles; // 0x0(0x10)
	float MainPartMaxHP; // 0x10(0x4)
	float EdgePartMaxHP; // 0x14(0x4)
	float RadialDamageRate; // 0x18(0x4)
	uint8_t Pad_0x1C[0x4]; // 0x1C(0x4)
	struct UCurveFloat* HPCurve; // 0x20(0x8)
	float BurningCutHPSpeed; // 0x28(0x4)
	float BurningEdgeDamageRate; // 0x2C(0x4)
};

// Object: ScriptStruct DFMAbility.AbilityVoxelizationValidBoxResult
// Size: 0x10 (Inherited: 0x0)
struct FAbilityVoxelizationValidBoxResult
{
	struct TArray<struct FBox> ValidBoxes; // 0x0(0x10)
};

// Object: ScriptStruct DFMAbility.AbilityVoxelizationResult
// Size: 0x20 (Inherited: 0x0)
struct FAbilityVoxelizationResult
{
	struct TArray<uint8_t> VoxelOccupancy; // 0x0(0x10)
	struct FIntVector GridDimensions; // 0x10(0xC)
	uint8_t Pad_0x1C[0x4]; // 0x1C(0x4)
};

// Object: ScriptStruct DFMAbility.AbilityVoxelizationParams
// Size: 0x70 (Inherited: 0x0)
struct FAbilityVoxelizationParams
{
	struct FIntVector GridDimensions; // 0x0(0xC)
	struct FVector Location; // 0xC(0xC)
	uint8_t Pad_0x18[0x8]; // 0x18(0x8)
	struct FQuat Rotation; // 0x20(0x10)
	struct FVector Extent; // 0x30(0xC)
	float VoxelSize; // 0x3C(0x4)
	float BigBoxSize; // 0x40(0x4)
	struct FBox WorldBounds; // 0x44(0x1C)
	struct TWeakObjectPtr<struct APawn> Owner; // 0x60(0x8)
	uint8_t Pad_0x68[0x8]; // 0x68(0x8)
};

// Object: ScriptStruct DFMAbility.DFMAbilityC202KnifeData
// Size: 0x30 (Inherited: 0x0)
struct FDFMAbilityC202KnifeData
{
	EDFMGamePlayMode GameMode; // 0x0(0x1)
	uint8_t Pad_0x1[0x7]; // 0x1(0x7)
	int64_t AttackValueId; // 0x8(0x8)
	int32_t EMPBuffID; // 0x10(0x4)
	float EMPRange; // 0x14(0x4)
	float EMPWorkRange; // 0x18(0x4)
	float EMPEffectTime; // 0x1C(0x4)
	float PrepareEMPTime; // 0x20(0x4)
	uint8_t bNeedMarker : 1; // 0x24(0x1), Mask(0x1)
	uint8_t BitPad_0x24_1 : 7; // 0x24(0x1)
	uint8_t bNeedTracing : 1; // 0x25(0x1), Mask(0x1)
	uint8_t BitPad_0x25_1 : 7; // 0x25(0x1)
	uint8_t Pad_0x26[0x2]; // 0x26(0x2)
	float MarkEnenmyRange; // 0x28(0x4)
	uint8_t Pad_0x2C[0x4]; // 0x2C(0x4)
};

// Object: ScriptStruct DFMAbility.KnifeDrawPathData
// Size: 0x20 (Inherited: 0x0)
struct FKnifeDrawPathData
{
	struct TWeakObjectPtr<struct AActor> TargetChar; // 0x0(0x8)
	struct FVector PathStartPos; // 0x8(0xC)
	struct FVector PathEndPos; // 0x14(0xC)
};

// Object: ScriptStruct DFMAbility.AIMultiPatrolTimeSequence
// Size: 0x40 (Inherited: 0x10)
struct FAIMultiPatrolTimeSequence : FDescRowBase
{
	int32_t Minute; // 0x10(0x4)
	int32_t Second; // 0x14(0x4)
	struct FString PathSequence; // 0x18(0x10)
	int32_t AllSeconds; // 0x28(0x4)
	uint8_t Pad_0x2C[0x4]; // 0x2C(0x4)
	struct TArray<struct FAIMultiPatrolDataBase> PathSeq; // 0x30(0x10)
};

// Object: ScriptStruct DFMAbility.AIMultiPatrolDataBase
// Size: 0x28 (Inherited: 0x0)
struct FAIMultiPatrolDataBase
{
	struct FVector Location; // 0x0(0xC)
	struct FRotator Rotation; // 0xC(0xC)
	int32_t uid; // 0x18(0x4)
	int32_t ParentUid; // 0x1C(0x4)
	float StayTime; // 0x20(0x4)
	EGroupPatrolPose PatrolPose; // 0x24(0x1)
	EPatrolType PatrolType; // 0x25(0x1)
	EAIPatrolPointType Type; // 0x26(0x1)
	uint8_t Pad_0x27[0x1]; // 0x27(0x1)
};

// Object: ScriptStruct DFMAbility.AIMultiPatrolConfig
// Size: 0x10 (Inherited: 0x0)
struct FAIMultiPatrolConfig
{
	struct UDataTable* DataTable; // 0x0(0x8)
	int32_t Wight; // 0x8(0x4)
	uint8_t Pad_0xC[0x4]; // 0xC(0x4)
};

// Object: ScriptStruct DFMAbility.AIMultiPatrolTransientData
// Size: 0x30 (Inherited: 0x0)
struct FAIMultiPatrolTransientData
{
	int32_t NextPointUid; // 0x0(0x4)
	int32_t CurrentPointUid; // 0x4(0x4)
	int32_t SeatIndex; // 0x8(0x4)
	uint8_t FrontType; // 0xC(0x1)
	uint8_t Pad_0xD[0x3]; // 0xD(0x3)
	struct TArray<struct FAIMultiPatrolDataBase> CurrentPathSeq; // 0x10(0x10)
	struct TArray<struct FAIMultiPatrolDataBase> CurrentPathPointSeq; // 0x20(0x10)
};

// Object: ScriptStruct DFMAbility.AIMultiPatrolSection
// Size: 0x40 (Inherited: 0x28)
struct FAIMultiPatrolSection : FAIMultiPatrolDataBase
{
	struct FName SectionName; // 0x28(0x8)
	struct TArray<struct FAIMultiPatrolPath> Paths; // 0x30(0x10)
};

// Object: ScriptStruct DFMAbility.AIMultiPatrolPath
// Size: 0x40 (Inherited: 0x28)
struct FAIMultiPatrolPath : FAIMultiPatrolDataBase
{
	struct FName PathName; // 0x28(0x8)
	struct TArray<struct FAIMultiPatrolPoint> Points; // 0x30(0x10)
};

// Object: ScriptStruct DFMAbility.AIMultiPatrolPoint
// Size: 0x38 (Inherited: 0x28)
struct FAIMultiPatrolPoint : FAIMultiPatrolDataBase
{
	struct TArray<struct FAIMultiPatrolSubPoint> SubPoints; // 0x28(0x10)
};

// Object: ScriptStruct DFMAbility.AIMultiPatrolSubPoint
// Size: 0x2C (Inherited: 0x28)
struct FAIMultiPatrolSubPoint : FAIMultiPatrolDataBase
{
	int32_t SeatIndex; // 0x28(0x4)
};

// Object: ScriptStruct DFMAbility.C204EMPTakerItem
// Size: 0x18 (Inherited: 0x0)
struct FC204EMPTakerItem
{
	struct AActor* EmpTaker; // 0x0(0x8)
	int32_t uid; // 0x8(0x4)
	float Distance; // 0xC(0x4)
	int32_t Priority; // 0x10(0x4)
	uint8_t Pad_0x14[0x4]; // 0x14(0x4)
};

// Object: ScriptStruct DFMAbility.VehicleBoss04SkillState
// Size: 0x10 (Inherited: 0x0)
struct FVehicleBoss04SkillState
{
	EVehicleBoss04FireMode FireMode; // 0x0(0x1)
	uint8_t Pad_0x1[0x3]; // 0x1(0x3)
	float FireDelta; // 0x4(0x4)
	float PreTime; // 0x8(0x4)
	float PostTime; // 0xC(0x4)
};

// Object: ScriptStruct DFMAbility.VehicleBoss04WeaponInfo
// Size: 0xD0 (Inherited: 0x0)
struct FVehicleBoss04WeaponInfo
{
	uint8_t bEnable : 1; // 0x0(0x1), Mask(0x1)
	uint8_t BitPad_0x0_1 : 7; // 0x0(0x1)
	EVehicleBoss04WeaponType WeaponType; // 0x1(0x1)
	uint8_t Pad_0x2[0x6]; // 0x2(0x6)
	struct TArray<struct FName> FireSockets; // 0x8(0x10)
	struct FVector SocketOffset; // 0x18(0xC)
	float FireDelta; // 0x24(0x4)
	float FireRange; // 0x28(0x4)
	int32_t AttackId; // 0x2C(0x4)
	float PreTime; // 0x30(0x4)
	float PostTime; // 0x34(0x4)
	struct TArray<struct FVehicleBoss04WeaponFXInfo> FireFX; // 0x38(0x10)
	uint64_t HitFXId; // 0x48(0x8)
	struct TArray<struct FVehicleBoss04TrailFXInfo> TrailFX; // 0x50(0x10)
	struct TArray<struct FVehicleBoss04SoundInfo> SoundConf; // 0x60(0x10)
	float Speed; // 0x70(0x4)
	float MaxDis; // 0x74(0x4)
	struct TSoftObjectPtr<UStaticMesh> MissleModel; // 0x78(0x28)
	struct FVector ModelScale; // 0xA0(0xC)
	uint8_t bMobileUseTrail : 1; // 0xAC(0x1), Mask(0x1)
	uint8_t BitPad_0xAC_1 : 7; // 0xAC(0x1)
	uint8_t Pad_0xAD[0x3]; // 0xAD(0x3)
	struct FLinearColor MobileColor; // 0xB0(0x10)
	float MobileThinkness; // 0xC0(0x4)
	int32_t BulletMaxNum; // 0xC4(0x4)
	float EffectPossibility; // 0xC8(0x4)
	uint8_t Pad_0xCC[0x4]; // 0xCC(0x4)
};

// Object: ScriptStruct DFMAbility.VehicleBoss04SoundInfo
// Size: 0xC (Inherited: 0x0)
struct FVehicleBoss04SoundInfo
{
	struct FName SoundName; // 0x0(0x8)
	uint8_t bAttachToBullet : 1; // 0x8(0x1), Mask(0x1)
	uint8_t BitPad_0x8_1 : 7; // 0x8(0x1)
	uint8_t Pad_0x9[0x3]; // 0x9(0x3)
};

// Object: ScriptStruct DFMAbility.VehicleBoss04TrailFXInfo
// Size: 0x5C (Inherited: 0x0)
struct FVehicleBoss04TrailFXInfo
{
	uint8_t bIsReal : 1; // 0x0(0x1), Mask(0x1)
	uint8_t BitPad_0x0_1 : 7; // 0x0(0x1)
	uint8_t Pad_0x1[0x3]; // 0x1(0x3)
	struct FName FXName; // 0x4(0x8)
	struct FName MobileFXNameOverride; // 0xC(0x8)
	struct FVector offset; // 0x14(0xC)
	struct FVector Scale; // 0x20(0xC)
	struct FRotator Rot; // 0x2C(0xC)
	struct FVector MOffset; // 0x38(0xC)
	struct FVector MScale; // 0x44(0xC)
	struct FRotator MRot; // 0x50(0xC)
};

// Object: ScriptStruct DFMAbility.VehicleBoss04WeaponFXInfo
// Size: 0x50 (Inherited: 0x0)
struct FVehicleBoss04WeaponFXInfo
{
	struct FName FXName; // 0x0(0x8)
	struct FVector offset; // 0x8(0xC)
	struct FVector Scale; // 0x14(0xC)
	struct FRotator Rot; // 0x20(0xC)
	struct FVector MOffset; // 0x2C(0xC)
	struct FVector MScale; // 0x38(0xC)
	struct FRotator MRot; // 0x44(0xC)
};

// Object: ScriptStruct DFMAbility.VehicleBoss04SoundRuntimeInfo
// Size: 0x290 (Inherited: 0x0)
struct FVehicleBoss04SoundRuntimeInfo
{
	struct FResourceAudioRow ResourceAudioFX; // 0x0(0x210)
	uint8_t bAttachToBullet : 1; // 0x210(0x1), Mask(0x1)
	uint8_t BitPad_0x210_1 : 7; // 0x210(0x1)
	uint8_t Pad_0x211[0x7]; // 0x211(0x7)
	struct FSoftObjectLoader AudioPlaySP; // 0x218(0x18)
	struct FSoftObjectLoader CloseAudioEvent; // 0x230(0x18)
	struct FSoftObjectLoader MedAudioEvent; // 0x248(0x18)
	struct FSoftObjectLoader FarAudioEvent; // 0x260(0x18)
	struct FSoftObjectLoader AudioStopSP; // 0x278(0x18)
};

// Object: ScriptStruct DFMAbility.MovementStateRepData
// Size: 0x1C (Inherited: 0x0)
struct FMovementStateRepData
{
	EStunGrenadeMovementState MovementState; // 0x0(0x1)
	uint8_t Pad_0x1[0x3]; // 0x1(0x3)
	struct FVector_NetQuantize10 ServerPos; // 0x4(0xC)
	struct FVector_NetQuantize10 ServerVelocity; // 0x10(0xC)
};

// Object: ScriptStruct DFMAbility.ScannedCharacterInfo
// Size: 0x8 (Inherited: 0x0)
struct FScannedCharacterInfo
{
	int32_t CharacterGUID; // 0x0(0x4)
	uint8_t bIsLockedTarget : 1; // 0x4(0x1), Mask(0x1)
	uint8_t BitPad_0x4_1 : 7; // 0x4(0x1)
	uint8_t Pad_0x5[0x3]; // 0x5(0x3)
};

// Object: ScriptStruct DFMAbility.StunGrenadeData
// Size: 0x30 (Inherited: 0x0)
struct FStunGrenadeData
{
	EDFMGamePlayMode GameMode; // 0x0(0x1)
	uint8_t Pad_0x1[0x3]; // 0x1(0x3)
	float TrackingRadius; // 0x4(0x4)
	float StartTrackingTime; // 0x8(0x4)
	float FlyToTargetSpeed; // 0xC(0x4)
	float FreezeValue; // 0x10(0x4)
	uint8_t bIgnoreSelf : 1; // 0x14(0x1), Mask(0x1)
	uint8_t BitPad_0x14_1 : 7; // 0x14(0x1)
	uint8_t bIgnoreTeammate : 1; // 0x15(0x1), Mask(0x1)
	uint8_t BitPad_0x15_1 : 7; // 0x15(0x1)
	uint8_t Pad_0x16[0x2]; // 0x16(0x2)
	float ExplodeRadius; // 0x18(0x4)
	float ExplodeDelay; // 0x1C(0x4)
	struct TArray<int32_t> BuffIds; // 0x20(0x10)
};

// Object: ScriptStruct DFMAbility.FootprintTrackerGroupData
// Size: 0x38 (Inherited: 0x0)
struct FFootprintTrackerGroupData
{
	uint8_t bIsNeedCheck : 1; // 0x0(0x1), Mask(0x1)
	uint8_t BitPad_0x0_1 : 7; // 0x0(0x1)
	uint8_t bIsStartLeft : 1; // 0x1(0x1), Mask(0x1)
	uint8_t BitPad_0x1_1 : 7; // 0x1(0x1)
	uint8_t bIsMainOnly : 1; // 0x2(0x1), Mask(0x1)
	uint8_t BitPad_0x2_1 : 7; // 0x2(0x1)
	uint8_t Pad_0x3[0x1]; // 0x3(0x1)
	float NextCheckTime; // 0x4(0x4)
	int32_t CurrCheckIndex; // 0x8(0x4)
	struct FBox AABBBox; // 0xC(0x1C)
	struct TArray<struct FFootprintTrackerData> Footprints; // 0x28(0x10)
};

// Object: ScriptStruct DFMAbility.FootprintTrackerPlayerData
// Size: 0x88 (Inherited: 0x0)
struct FFootprintTrackerPlayerData
{
	uint8_t bIsNeedCheck : 1; // 0x0(0x1), Mask(0x1)
	uint8_t BitPad_0x0_1 : 7; // 0x0(0x1)
	uint8_t Pad_0x1[0x3]; // 0x1(0x3)
	uint32_t TickGroupID; // 0x4(0x4)
	struct UInstancedStaticMeshComponent* ISMComponent; // 0x8(0x8)
	struct UInstancedStaticMeshComponent* SearchedISMComponent; // 0x10(0x8)
	struct TArray<struct FFootprintIsmData> ISMDataArray; // 0x18(0x10)
	struct TArray<struct FFootprintIsmData> SearchedISMDataArray; // 0x28(0x10)
	struct TMap<uint32_t, struct FFootprintTrackerGroupData> AllGroupsMap; // 0x38(0x50)
};

// Object: ScriptStruct DFMAbility.FootprintTrackerData
// Size: 0x20 (Inherited: 0x0)
struct FFootprintTrackerData
{
	struct FVector Location; // 0x0(0xC)
	struct FRotator Rotation; // 0xC(0xC)
	uint8_t bNeedTick : 1; // 0x18(0x1), Mask(0x1)
	uint8_t BitPad_0x18_1 : 7; // 0x18(0x1)
	uint8_t Pad_0x19[0x3]; // 0x19(0x3)
	int32_t bIsShow; // 0x1C(0x4)
};

// Object: ScriptStruct DFMAbility.FootprintIsmData
// Size: 0xC (Inherited: 0x0)
struct FFootprintIsmData
{
	uint32_t GroupID; // 0x0(0x4)
	int32_t Index; // 0x4(0x4)
	uint8_t bNeedTick : 1; // 0x8(0x1), Mask(0x1)
	uint8_t BitPad_0x8_1 : 7; // 0x8(0x1)
	uint8_t Pad_0x9[0x3]; // 0x9(0x3)
};

// Object: ScriptStruct DFMAbility.ListenRangePoint
// Size: 0x8 (Inherited: 0x0)
struct FListenRangePoint
{
	float BaseRange; // 0x0(0x4)
	float RangeCoeff; // 0x4(0x4)
};

// Object: ScriptStruct DFMAbility.AbilityAttachMeshLoadHadnle
// Size: 0x18 (Inherited: 0x0)
struct FAbilityAttachMeshLoadHadnle
{
	struct TArray<struct FAbilityAttachMeshLoadData> LoadDatas; // 0x0(0x10)
	int32_t LoadType; // 0x10(0x4)
	uint8_t Pad_0x14[0x4]; // 0x14(0x4)
};

// Object: ScriptStruct DFMAbility.AbilityAttachMeshLoadData
// Size: 0x10 (Inherited: 0x0)
struct FAbilityAttachMeshLoadData
{
	int32_t skillEntityIndex; // 0x0(0x4)
	struct FName MeshName; // 0x4(0x8)
	int32_t MaterialIndex; // 0xC(0x4)
};

// Object: ScriptStruct DFMAbility.AbilityAttachMeshTaskData
// Size: 0x20 (Inherited: 0x10)
struct FAbilityAttachMeshTaskData : FAbilityDataBase
{
	struct FTimerHandle TimerHandle; // 0x10(0x8)
	struct FTimerHandle NotifyTimer; // 0x18(0x8)
};

// Object: ScriptStruct DFMAbility.AbilityAttachMeshAnimData
// Size: 0x160 (Inherited: 0x0)
struct FAbilityAttachMeshAnimData
{
	struct FName ItemMeshKey; // 0x0(0x8)
	struct FName ItemMeshPartKey; // 0x8(0x8)
	struct TSoftObjectPtr<USkeletalMesh> ItemMeshPath; // 0x10(0x28)
	struct TSoftObjectPtr<USkeletalMesh> ItemMeshPath3P; // 0x38(0x28)
	struct TSoftObjectPtr<UAnimSequenceBase> AnimSeqPath; // 0x60(0x28)
	float AnimRate; // 0x88(0x4)
	uint8_t Loop : 1; // 0x8C(0x1), Mask(0x1)
	uint8_t BitPad_0x8C_1 : 7; // 0x8C(0x1)
	uint8_t Pad_0x8D[0x3]; // 0x8D(0x3)
	struct FName SocketName; // 0x90(0x8)
	struct FName SocketName_3P; // 0x98(0x8)
	struct FVector AttachRelativeLocation; // 0xA0(0xC)
	struct FVector AttachRelativeScale3D; // 0xAC(0xC)
	struct FRotator AttachRelativeRotator; // 0xB8(0xC)
	struct FName MeshName; // 0xC4(0x8)
	uint8_t SetMeshVisible : 1; // 0xCC(0x1), Mask(0x1)
	uint8_t BitPad_0xCC_1 : 7; // 0xCC(0x1)
	uint8_t MeshVisible : 1; // 0xCD(0x1), Mask(0x1)
	uint8_t BitPad_0xCD_1 : 7; // 0xCD(0x1)
	uint8_t Pad_0xCE[0x2]; // 0xCE(0x2)
	struct FName ParentMeshName; // 0xD0(0x8)
	struct FName Notify; // 0xD8(0x8)
	struct TSoftObjectPtr<UGPAudioEventAsset> ItemMeshAudioPath; // 0xE0(0x28)
	EGPAudioBlueprintType ItemMeshAudioType; // 0x108(0x1)
	uint8_t bIsBPAnim : 1; // 0x109(0x1), Mask(0x1)
	uint8_t BitPad_0x109_1 : 7; // 0x109(0x1)
	uint8_t Pad_0x10A[0x2]; // 0x10A(0x2)
	int32_t BPAnimIndex; // 0x10C(0x4)
	uint8_t PreLoad : 1; // 0x110(0x1), Mask(0x1)
	uint8_t BitPad_0x110_1 : 7; // 0x110(0x1)
	uint8_t Pad_0x111[0x3]; // 0x111(0x3)
	struct FName EffectId; // 0x114(0x8)
	struct FName EffectSocketName; // 0x11C(0x8)
	struct FVector EffectRelativeLocation; // 0x124(0xC)
	struct FVector EffectRelativeScale3D; // 0x130(0xC)
	struct FRotator EffectRelativeRotator; // 0x13C(0xC)
	uint8_t SupportWeapon : 1; // 0x148(0x1), Mask(0x1)
	uint8_t BitPad_0x148_1 : 7; // 0x148(0x1)
	uint8_t IsBindMesh : 1; // 0x149(0x1), Mask(0x1)
	uint8_t BitPad_0x149_1 : 7; // 0x149(0x1)
	uint8_t bUseCurWeaponMesh : 1; // 0x14A(0x1), Mask(0x1)
	uint8_t BitPad_0x14A_1 : 7; // 0x14A(0x1)
	uint8_t Pad_0x14B[0x1]; // 0x14B(0x1)
	struct FName AvatarID; // 0x14C(0x8)
	uint8_t InVisibleWhenTrigger : 1; // 0x154(0x1), Mask(0x1)
	uint8_t BitPad_0x154_1 : 7; // 0x154(0x1)
	uint8_t bSetForceKeepFullMipLevels : 1; // 0x155(0x1), Mask(0x1)
	uint8_t BitPad_0x155_1 : 7; // 0x155(0x1)
	uint8_t Pad_0x156[0x2]; // 0x156(0x2)
	float SimulateNotApplyDistance; // 0x158(0x4)
	uint8_t bCreate3pItemMeshOn1p : 1; // 0x15C(0x1), Mask(0x1)
	uint8_t BitPad_0x15C_1 : 7; // 0x15C(0x1)
	uint8_t Pad_0x15D[0x3]; // 0x15D(0x3)
};

// Object: ScriptStruct DFMAbility.AbilityAudioData
// Size: 0x20 (Inherited: 0x0)
struct FAbilityAudioData
{
	struct UGPAudioEventAsset* AudioEventAsset; // 0x0(0x8)
	struct FName AudioEventAudioName; // 0x8(0x8)
	EGPAudioBlueprintType EType; // 0x10(0x1)
	uint8_t Pad_0x11[0x3]; // 0x11(0x3)
	float Duration; // 0x14(0x4)
	uint8_t bNeedMakeNoise : 1; // 0x18(0x1), Mask(0x1)
	uint8_t BitPad_0x18_1 : 7; // 0x18(0x1)
	uint8_t bPreCutted : 1; // 0x19(0x1), Mask(0x1)
	uint8_t BitPad_0x19_1 : 7; // 0x19(0x1)
	EAudioRoleType RoleType; // 0x1A(0x1)
	uint8_t Pad_0x1B[0x5]; // 0x1B(0x5)
};

// Object: ScriptStruct DFMAbility.AbilityBuffAwardConfig
// Size: 0xB8 (Inherited: 0x0)
struct FAbilityBuffAwardConfig
{
	float KillAwardTime; // 0x0(0x4)
	EStaminaIndependentChangeType KillAwardStaminaChangeType; // 0x4(0x1)
	uint8_t bKillDataReport : 1; // 0x5(0x1), Mask(0x1)
	uint8_t BitPad_0x5_1 : 7; // 0x5(0x1)
	uint8_t Pad_0x6[0x2]; // 0x6(0x2)
	int32_t KillAIAwardBuffID; // 0x8(0x4)
	int32_t KillPlayerAwardBuffID; // 0xC(0x4)
	int32_t MaxIncreaseCount; // 0x10(0x4)
	uint8_t Pad_0x14[0x4]; // 0x14(0x4)
	struct TMap<ECharingSlot, float> KillAIAwardChargingPercent; // 0x18(0x50)
	struct TMap<ECharingSlot, float> KillPlayerAwardChargingPercent; // 0x68(0x50)
};

// Object: ScriptStruct DFMAbility.AbilityRecycleSpawnActorConf
// Size: 0x8 (Inherited: 0x0)
struct FAbilityRecycleSpawnActorConf
{
	ECharingSlot ItemPos; // 0x0(0x1)
	uint8_t Pad_0x1[0x3]; // 0x1(0x3)
	float RecycleSlotChargingPercent; // 0x4(0x4)
};

// Object: ScriptStruct DFMAbility.AbilityRecycleSpawnActorData
// Size: 0x50 (Inherited: 0x0)
struct FAbilityRecycleSpawnActorData
{
	struct TMap<ESkillRecycleType, struct FAbilityRecycleSpawnActorConf> RecycleConf; // 0x0(0x50)
};

// Object: ScriptStruct DFMAbility.AbilityDriverFlyRebot
// Size: 0x8 (Inherited: 0x0)
struct FAbilityDriverFlyRebot
{
	uint8_t Pad_0x0[0x8]; // 0x0(0x8)
};

// Object: ScriptStruct DFMAbility.AbilityDriverVehicle
// Size: 0x8 (Inherited: 0x0)
struct FAbilityDriverVehicle
{
	uint8_t Pad_0x0[0x8]; // 0x0(0x8)
};

// Object: ScriptStruct DFMAbility.AbilityItemPreviewData
// Size: 0x38 (Inherited: 0x0)
struct FAbilityItemPreviewData
{
	struct AItemPreviewActor* ActorClass; // 0x0(0x8)
	struct FSoftObjectPath MeshPath; // 0x8(0x18)
	struct FVector Rotator; // 0x20(0xC)
	float PreviewDistance; // 0x2C(0x4)
	float MaxDeltaHeight; // 0x30(0x4)
	uint8_t bAttachToSurface : 1; // 0x34(0x1), Mask(0x1)
	uint8_t BitPad_0x34_1 : 7; // 0x34(0x1)
	uint8_t Pad_0x35[0x3]; // 0x35(0x3)
};

// Object: ScriptStruct DFMAbility.GPAbilityAvatarAssets
// Size: 0x18 (Inherited: 0x0)
struct FGPAbilityAvatarAssets
{
	uint64_t TaskPreloadHandle; // 0x0(0x8)
	struct TArray<struct FSoftObjectPath> TaskPreAssetName; // 0x8(0x10)
};

// Object: ScriptStruct DFMAbility.MeshMatUpdateCache
// Size: 0x20 (Inherited: 0x0)
struct FMeshMatUpdateCache
{
	struct FTimerHandle MatEffectTimerHandle; // 0x0(0x8)
	struct UMaterialInstanceDynamic* Mid; // 0x8(0x8)
	struct USkeletalMeshComponent* SkMesh; // 0x10(0x8)
	float MatEffectStartTime; // 0x18(0x4)
	uint8_t Pad_0x1C[0x4]; // 0x1C(0x4)
};

// Object: ScriptStruct DFMAbility.MatEffectConfig
// Size: 0x58 (Inherited: 0x0)
struct FMatEffectConfig
{
	uint8_t bPreLoad : 1; // 0x0(0x1), Mask(0x1)
	uint8_t BitPad_0x0_1 : 7; // 0x0(0x1)
	uint8_t bForceAllMeshMat : 1; // 0x1(0x1), Mask(0x1)
	uint8_t BitPad_0x1_1 : 7; // 0x1(0x1)
	uint8_t Pad_0x2[0x2]; // 0x2(0x2)
	struct FFloatRange CurrEffectTimeRange; // 0x4(0x10)
	uint8_t Pad_0x14[0x4]; // 0x14(0x4)
	struct TArray<struct FScreenPostProcesaScalarParameterConfig> ScalarParams; // 0x18(0x10)
	struct TArray<struct FScreenPostProcesaVectorParameterConfig> VectorParams; // 0x28(0x10)
	struct TArray<struct FScreenPostProcesaCurveFloatParameterConfig> CurveFloatParams; // 0x38(0x10)
	struct TArray<struct FMatCurveColorParameterConfig> CurveColorParams; // 0x48(0x10)
};

// Object: ScriptStruct DFMAbility.MeshMatEffectConfig
// Size: 0x50 (Inherited: 0x0)
struct FMeshMatEffectConfig
{
	struct TMap<int32_t, struct FMatEffectConfig> MatIndexAndEffectConfigs; // 0x0(0x50)
};

// Object: ScriptStruct DFMAbility.AbilityPlayMontageDataP2
// Size: 0x198 (Inherited: 0xA4)
struct FAbilityPlayMontageDataP2 : FAbilityPlayMontageRowData
{
	uint8_t Pad_0xA4[0x4]; // 0xA4(0x4)
	struct FAbilityPlayMontageAnimUnitSet AnimUnitSet; // 0xA8(0xF0)
};

// Object: ScriptStruct DFMAbility.AbilityPlayMontageDataP4
// Size: 0x198 (Inherited: 0x198)
struct FAbilityPlayMontageDataP4 : FAbilityPlayMontageDataP2
{
};

// Object: ScriptStruct DFMAbility.AbilityPlayMontageDataP1
// Size: 0xA4 (Inherited: 0xA4)
struct FAbilityPlayMontageDataP1 : FAbilityPlayMontageRowData
{
};

// Object: ScriptStruct DFMAbility.AbilityPlayMontageDataP3
// Size: 0xA4 (Inherited: 0xA4)
struct FAbilityPlayMontageDataP3 : FAbilityPlayMontageDataP1
{
};

// Object: ScriptStruct DFMAbility.AbilityPreviewData
// Size: 0xF0 (Inherited: 0x0)
struct FAbilityPreviewData
{
	struct TSoftClassPtr<struct UObject*> ActorClassSoftPath; // 0x0(0x28)
	struct TSoftClassPtr<struct UObject*> LineActorClassSoftPath; // 0x28(0x28)
	struct UObject* ActorClass; // 0x50(0x8)
	struct UObject* LineActorClass; // 0x58(0x8)
	float Speed; // 0x60(0x4)
	float IntersectionPointLenth; // 0x64(0x4)
	struct FVector LenthScale; // 0x68(0xC)
	struct FVector StartOffset; // 0x74(0xC)
	struct FVector TargetOffset; // 0x80(0xC)
	float UpSpeed; // 0x8C(0x4)
	uint8_t UseWeapnDirction : 1; // 0x90(0x1), Mask(0x1)
	uint8_t BitPad_0x90_1 : 7; // 0x90(0x1)
	uint8_t Pad_0x91[0x3]; // 0x91(0x3)
	float LineOffset; // 0x94(0x4)
	struct FName SocketName; // 0x98(0x8)
	float MaxSimTime; // 0xA0(0x4)
	uint8_t ShowBouncePath : 1; // 0xA4(0x1), Mask(0x1)
	uint8_t BitPad_0xA4_1 : 7; // 0xA4(0x1)
	uint8_t Pad_0xA5[0x3]; // 0xA5(0x3)
	float Bounciness; // 0xA8(0x4)
	float Friction; // 0xAC(0x4)
	struct FName MeshName; // 0xB0(0x8)
	uint8_t bUseWeaponMesh : 1; // 0xB8(0x1), Mask(0x1)
	uint8_t BitPad_0xB8_1 : 7; // 0xB8(0x1)
	uint8_t Pad_0xB9[0x3]; // 0xB9(0x3)
	int32_t WeaponMeshSlotID; // 0xBC(0x4)
	float NextDrawTime; // 0xC0(0x4)
	uint8_t InitVisible : 1; // 0xC4(0x1), Mask(0x1)
	uint8_t BitPad_0xC4_1 : 7; // 0xC4(0x1)
	uint8_t Pad_0xC5[0x3]; // 0xC5(0x3)
	float limitHeight; // 0xC8(0x4)
	float SweepRadius; // 0xCC(0x4)
	struct FVector ActorScale1; // 0xD0(0xC)
	struct FVector ActorScale2; // 0xDC(0xC)
	float ActorScale1Dis; // 0xE8(0x4)
	float ActorScale2Dis; // 0xEC(0x4)
};

// Object: ScriptStruct DFMAbility.AbilityProjectileActorData
// Size: 0x48 (Inherited: 0x0)
struct FAbilityProjectileActorData
{
	struct UObject* ProjectileActorClass; // 0x0(0x8)
	struct TSoftClassPtr<struct UObject*> ProjectileActorClassSoftPath; // 0x8(0x28)
	uint8_t Pad_0x30[0x4]; // 0x30(0x4)
	struct FVector StartPosistion; // 0x34(0xC)
	struct TWeakObjectPtr<struct AActor> Target; // 0x40(0x8)
};

// Object: ScriptStruct DFMAbility.SetCharAbilityMaskData
// Size: 0x10 (Inherited: 0x0)
struct FSetCharAbilityMaskData
{
	struct TArray<ECharacterStateMask> StateMaskList; // 0x0(0x10)
};

// Object: ScriptStruct DFMAbility.AASpawnActorData
// Size: 0x78 (Inherited: 0x0)
struct FAASpawnActorData
{
	struct UObject* ActorClass; // 0x0(0x8)
	struct TSoftClassPtr<struct UObject*> ActorClassSoftPath; // 0x8(0x28)
	struct FVector offset; // 0x30(0xC)
	uint8_t UsePreview : 1; // 0x3C(0x1), Mask(0x1)
	uint8_t BitPad_0x3C_1 : 7; // 0x3C(0x1)
	uint8_t Attach : 1; // 0x3D(0x1), Mask(0x1)
	uint8_t BitPad_0x3D_1 : 7; // 0x3D(0x1)
	uint8_t Pad_0x3E[0x2]; // 0x3E(0x2)
	struct FName ActorName; // 0x40(0x8)
	struct FName Tag; // 0x48(0x8)
	struct FName TraceTarget; // 0x50(0x8)
	uint8_t FastSpawn : 1; // 0x58(0x1), Mask(0x1)
	uint8_t BitPad_0x58_1 : 7; // 0x58(0x1)
	uint8_t UseItemPreview : 1; // 0x59(0x1), Mask(0x1)
	uint8_t BitPad_0x59_1 : 7; // 0x59(0x1)
	uint8_t ClearWhenRemove : 1; // 0x5A(0x1), Mask(0x1)
	uint8_t BitPad_0x5A_1 : 7; // 0x5A(0x1)
	uint8_t ClearWhenDie : 1; // 0x5B(0x1), Mask(0x1)
	uint8_t BitPad_0x5B_1 : 7; // 0x5B(0x1)
	uint8_t SpawnAtHitResult : 1; // 0x5C(0x1), Mask(0x1)
	uint8_t BitPad_0x5C_1 : 7; // 0x5C(0x1)
	uint8_t Pad_0x5D[0x3]; // 0x5D(0x3)
	struct FVector SpawnAtHitResultOffset; // 0x60(0xC)
	uint8_t SpawnAtCharPos : 1; // 0x6C(0x1), Mask(0x1)
	uint8_t BitPad_0x6C_1 : 7; // 0x6C(0x1)
	uint8_t Pad_0x6D[0x3]; // 0x6D(0x3)
	int32_t SkinId; // 0x70(0x4)
	uint8_t Pad_0x74[0x4]; // 0x74(0x4)
};

// Object: ScriptStruct DFMAbility.AbilityCastSkillData
// Size: 0x14 (Inherited: 0x0)
struct FAbilityCastSkillData
{
	int32_t CastSkillid; // 0x0(0x4)
	struct TWeakObjectPtr<struct UDFMAbilityInstance> FromSkill; // 0x4(0x8)
	struct FName LogicName; // 0xC(0x8)
};

// Object: ScriptStruct DFMAbility.AbilityUseSupportPack
// Size: 0x20 (Inherited: 0x10)
struct FAbilityUseSupportPack : FAbilityDataBase
{
	struct FTimerHandle TimerHandle; // 0x10(0x8)
	float TimeoutCounter; // 0x18(0x4)
	uint8_t Pad_0x1C[0x4]; // 0x1C(0x4)
};

// Object: ScriptStruct DFMAbility.AbilityWantCharacterSpeakData
// Size: 0x1 (Inherited: 0x0)
struct FAbilityWantCharacterSpeakData
{
	ECharacterAudioType VoiceType; // 0x0(0x1)
};

// Object: ScriptStruct DFMAbility.AbilityWeaponProjectileData
// Size: 0x80 (Inherited: 0x0)
struct FAbilityWeaponProjectileData
{
	struct TSoftClassPtr<struct UObject*> ProjectileActorClassSoftPath; // 0x0(0x28)
	struct UObject* ProjectileActorClass; // 0x28(0x8)
	float Speed; // 0x30(0x4)
	struct FVector StartOffset; // 0x34(0xC)
	uint8_t Attach : 1; // 0x40(0x1), Mask(0x1)
	uint8_t BitPad_0x40_1 : 7; // 0x40(0x1)
	uint8_t Pad_0x41[0x3]; // 0x41(0x3)
	struct FName SocketName; // 0x44(0x8)
	struct FName MeshName; // 0x4C(0x8)
	struct FVector Rotator; // 0x54(0xC)
	uint8_t bWeaponDir : 1; // 0x60(0x1), Mask(0x1)
	uint8_t BitPad_0x60_1 : 7; // 0x60(0x1)
	uint8_t bUsePreview : 1; // 0x61(0x1), Mask(0x1)
	uint8_t BitPad_0x61_1 : 7; // 0x61(0x1)
	uint8_t bUseWeaponPreview : 1; // 0x62(0x1), Mask(0x1)
	uint8_t BitPad_0x62_1 : 7; // 0x62(0x1)
	uint8_t FastProjectile : 1; // 0x63(0x1), Mask(0x1)
	uint8_t BitPad_0x63_1 : 7; // 0x63(0x1)
	uint8_t SimulatePath : 1; // 0x64(0x1), Mask(0x1)
	uint8_t BitPad_0x64_1 : 7; // 0x64(0x1)
	uint8_t Pad_0x65[0x3]; // 0x65(0x3)
	float CrouchHeight; // 0x68(0x4)
	float PronehHeight; // 0x6C(0x4)
	float SlidinghHeight; // 0x70(0x4)
	uint8_t UsePlayerViewPoint : 1; // 0x74(0x1), Mask(0x1)
	uint8_t BitPad_0x74_1 : 7; // 0x74(0x1)
	uint8_t RemoveWhenRedploy : 1; // 0x75(0x1), Mask(0x1)
	uint8_t BitPad_0x75_1 : 7; // 0x75(0x1)
	uint8_t RemoveWhenDie : 1; // 0x76(0x1), Mask(0x1)
	uint8_t BitPad_0x76_1 : 7; // 0x76(0x1)
	uint8_t WeaponAttachPos; // 0x77(0x1)
	uint8_t WeaponManagerSlotIndex; // 0x78(0x1)
	uint8_t Pad_0x79[0x7]; // 0x79(0x7)
};

// Object: ScriptStruct DFMAbility.SpiderBasedMovementInfo
// Size: 0x30 (Inherited: 0x0)
struct FSpiderBasedMovementInfo
{
	struct UPrimitiveComponent* MovementBase; // 0x0(0x8)
	uint8_t bMoveOnBaseDirectly : 1; // 0x8(0x1), Mask(0x1)
	uint8_t BitPad_0x8_1 : 7; // 0x8(0x1)
	uint8_t Pad_0x9[0x3]; // 0x9(0x3)
	struct FName BoneName; // 0xC(0x8)
	struct FVector_NetQuantize100 Location; // 0x14(0xC)
	struct FRotator Rotation; // 0x20(0xC)
	uint8_t bRelativeRotation : 1; // 0x2C(0x1), Mask(0x1)
	uint8_t BitPad_0x2C_1 : 7; // 0x2C(0x1)
	uint8_t bServerHasVelocity : 1; // 0x2D(0x1), Mask(0x1)
	uint8_t BitPad_0x2D_1 : 7; // 0x2D(0x1)
	uint8_t Pad_0x2E[0x2]; // 0x2E(0x2)
};

// Object: ScriptStruct DFMAbility.SpiderRepMovement
// Size: 0x40 (Inherited: 0x0)
struct FSpiderRepMovement
{
	struct FVector Location; // 0x0(0xC)
	struct FVector CurrentNormal; // 0xC(0xC)
	float Time; // 0x18(0x4)
	ESpiderMoveMode MoveMode; // 0x1C(0x1)
	uint8_t BounceTimes; // 0x1D(0x1)
	uint8_t UseBaseMove : 1; // 0x1E(0x1), Mask(0x1)
	uint8_t BitPad_0x1E_1 : 7; // 0x1E(0x1)
	uint8_t Pad_0x1F[0x1]; // 0x1F(0x1)
	struct UPrimitiveComponent* MovementBase; // 0x20(0x8)
	struct FName BoneName; // 0x28(0x8)
	struct FVector LocalLocation; // 0x30(0xC)
	uint8_t Pad_0x3C[0x4]; // 0x3C(0x4)
};

// Object: ScriptStruct DFMAbility.SpiderNetAnimPlayInfo
// Size: 0x8 (Inherited: 0x0)
struct FSpiderNetAnimPlayInfo
{
	uint8_t Pad_0x0[0x8]; // 0x0(0x8)
};

// Object: ScriptStruct DFMAbility.ThreatDetectionCheckInfo
// Size: 0x8 (Inherited: 0x0)
struct FThreatDetectionCheckInfo
{
	int32_t CheckTickNum; // 0x0(0x4)
	uint8_t bIsPassCheck : 1; // 0x4(0x1), Mask(0x1)
	uint8_t BitPad_0x4_1 : 7; // 0x4(0x1)
	uint8_t Pad_0x5[0x3]; // 0x5(0x3)
};

// Object: ScriptStruct DFMAbility.ThreatDetectionRoleParam
// Size: 0x40 (Inherited: 0x0)
struct FThreatDetectionRoleParam
{
	struct TArray<EBuffGameRole> AllGameRoles; // 0x0(0x10)
	float TickRate; // 0x10(0x4)
	int32_t TickCheckNum; // 0x14(0x4)
	float TickRate_HD; // 0x18(0x4)
	int32_t TickCheckNum_HD; // 0x1C(0x4)
	uint8_t KeepCheckAimTarget : 1; // 0x20(0x1), Mask(0x1)
	uint8_t BitPad_0x20_1 : 7; // 0x20(0x1)
	uint8_t Pad_0x21[0x3]; // 0x21(0x3)
	float CheckDistance; // 0x24(0x4)
	struct UCurveFloat* CheckAngleCurve; // 0x28(0x8)
	float AimCheckDistance; // 0x30(0x4)
	uint8_t Pad_0x34[0x4]; // 0x34(0x4)
	struct UCurveFloat* AimCheckAngleCurve; // 0x38(0x8)
};

// Object: ScriptStruct DFMAbility.ThrowBlockingAnimInstanceProxy
// Size: 0x7B0 (Inherited: 0x7A0)
struct FThrowBlockingAnimInstanceProxy : FAnimInstanceProxy
{
	uint8_t bIsFullyExpanded : 1; // 0x798(0x1), Mask(0x1)
	uint8_t bIsSpawnState : 1; // 0x799(0x1), Mask(0x1)
	struct ADFMAbilityThrowBlocking* ThrowBlocking; // 0x7A0(0x8)
	uint8_t BitPad_0x7A8_2 : 6; // 0x7A8(0x1)
	uint8_t Pad_0x7A9[0x7]; // 0x7A9(0x7)
};

// Object: ScriptStruct DFMAbility.ProxSensorArrowScanData
// Size: 0x24 (Inherited: 0x0)
struct FProxSensorArrowScanData
{
	EDFMGamePlayMode GameMode; // 0x0(0x1)
	uint8_t Pad_0x1[0x3]; // 0x1(0x3)
	float MarkEnemyTime; // 0x4(0x4)
	float MarkVehicleTime; // 0x8(0x4)
	float DetectorLifeTime; // 0xC(0x4)
	float MinScanRadius; // 0x10(0x4)
	float MaxScanRadius; // 0x14(0x4)
	float MaxScanRadiusHeight; // 0x18(0x4)
	uint8_t bNeedBlockCheck : 1; // 0x1C(0x1), Mask(0x1)
	uint8_t BitPad_0x1C_1 : 7; // 0x1C(0x1)
	uint8_t bNeedMarkEnemyInMap : 1; // 0x1D(0x1), Mask(0x1)
	uint8_t BitPad_0x1D_1 : 7; // 0x1D(0x1)
	uint8_t Pad_0x1E[0x2]; // 0x1E(0x2)
	int32_t CheckBlockTime; // 0x20(0x4)
};

// Object: ScriptStruct DFMAbility.GameModeSpawnSmokeUASConfig
// Size: 0x40 (Inherited: 0x0)
struct FGameModeSpawnSmokeUASConfig
{
	int32_t MapID; // 0x0(0x4)
	struct FName Desc; // 0x4(0x8)
	EDFMGamePlayMode GamePlayMode; // 0xC(0x1)
	uint8_t Pad_0xD[0x3]; // 0xD(0x3)
	struct AActor* ActorClass; // 0x10(0x8)
	struct TSoftClassPtr<struct AActor*> ActorClassPtr; // 0x18(0x28)
};

// Object: ScriptStruct DFMAbility.ZoyaSwarmsAvatarData
// Size: 0x68 (Inherited: 0x0)
struct FZoyaSwarmsAvatarData
{
	uint64_t AvatarID; // 0x0(0x8)
	struct TSoftObjectPtr<UStaticMesh> Mesh; // 0x8(0x28)
	struct TSoftObjectPtr<UMaterialInterface> Material; // 0x30(0x28)
	struct FName ClientStartEffect; // 0x58(0x8)
	struct FName ClientStartEffect_3P; // 0x60(0x8)
};

// Object: ScriptStruct DFMAbility.ZoyaSwarmsItemAnimInstanceProxy
// Size: 0x7A0 (Inherited: 0x7A0)
struct FZoyaSwarmsItemAnimInstanceProxy : FAnimInstanceProxy
{
	uint8_t bIsBindToTarget : 1; // 0x798(0x1), Mask(0x1)
};

// Object: ScriptStruct DFMAbility.ZoyaSwarmsAvatarEffectData
// Size: 0x28 (Inherited: 0x0)
struct FZoyaSwarmsAvatarEffectData
{
	uint64_t AvatarID; // 0x0(0x8)
	int32_t CastEffectNum; // 0x8(0x4)
	struct FName CastEffect3P; // 0xC(0x8)
	struct FName CastEffect1P; // 0x14(0x8)
	struct FName CastScreenEffect1P; // 0x1C(0x8)
	uint8_t Pad_0x24[0x4]; // 0x24(0x4)
};

// Object: Class DFMAbility.AbilityAttachBaseMesh
// Size: 0x3D0 (Inherited: 0x370)
struct AAbilityAttachBaseMesh : AActor
{
	DEFINE_UE_CLASS_HELPERS(AAbilityAttachBaseMesh, "AbilityAttachBaseMesh")

	uint8_t Pad_0x370[0x12]; // 0x370(0x12)
	uint8_t IsSnapToTarget : 1; // 0x382(0x1), Mask(0x1)
	uint8_t BitPad_0x382_1 : 7; // 0x382(0x1)
	uint8_t Pad_0x383[0x1]; // 0x383(0x1)
	struct FName StaticMeshSocketName; // 0x384(0x8)
	struct FName SkeletalMeshSocketName; // 0x38C(0x8)
	uint8_t bDefalutMeshIsStaticMesh : 1; // 0x394(0x1), Mask(0x1)
	uint8_t BitPad_0x394_1 : 7; // 0x394(0x1)
	uint8_t bSetMasterPose : 1; // 0x395(0x1), Mask(0x1)
	uint8_t BitPad_0x395_1 : 7; // 0x395(0x1)
	uint8_t bUseFromPool : 1; // 0x396(0x1), Mask(0x1)
	uint8_t BitPad_0x396_1 : 7; // 0x396(0x1)
	uint8_t bMeshEnable : 1; // 0x397(0x1), Mask(0x1)
	uint8_t BitPad_0x397_1 : 7; // 0x397(0x1)
	EAbiltyTemplateAttachMeshMode AttachMeshMode; // 0x398(0x1)
	uint8_t Pad_0x399[0x7]; // 0x399(0x7)
	struct UGPSkeletalMeshComponent* CurSkeletalMeshComponent; // 0x3A0(0x8)
	struct UGPSkeletalMeshComponent* CurSkeletalMeshComponentMasterPose; // 0x3A8(0x8)
	struct UStaticMeshComponent* CurStaticMeshComponent; // 0x3B0(0x8)
	uint8_t CurGameAKComponent[0x8]; // 0x3B8(0x8)
	int32_t CurSkeletalMeshComponentEnable; // 0x3C0(0x4)
	int32_t CurSkeletalMeshComponentMasterPoseEnable; // 0x3C4(0x4)
	int32_t CurStaticMeshComponentEnable; // 0x3C8(0x4)
	int32_t CurGameAKComponentEnable; // 0x3CC(0x4)

	// Object: Function DFMAbility.AbilityAttachBaseMesh.UpdatePostEffectVectorParameters
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	// Offset: 0xc3d5064
	// Params: [ Num(3) Size(0x20) ]
	void UpdatePostEffectVectorParameters(struct FName PostEffectName, struct FName ParameterName, struct FLinearColor Value);

	// Object: Function DFMAbility.AbilityAttachBaseMesh.UpdatePostEffectScalarParameters
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xc3d4f4c
	// Params: [ Num(3) Size(0x14) ]
	void UpdatePostEffectScalarParameters(struct FName PostEffectName, struct FName ParameterName, float Value);

	// Object: Function DFMAbility.AbilityAttachBaseMesh.SwitchToStaticMesh
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xc3d4f38
	// Params: [ Num(0) Size(0x0) ]
	void SwitchToStaticMesh();

	// Object: Function DFMAbility.AbilityAttachBaseMesh.SwitchToSkeletalMesh
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xc3d4f24
	// Params: [ Num(0) Size(0x0) ]
	void SwitchToSkeletalMesh();

	// Object: Function DFMAbility.AbilityAttachBaseMesh.SwitchToMasterPoseMesh
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xc3d4f10
	// Params: [ Num(0) Size(0x0) ]
	void SwitchToMasterPoseMesh();

	// Object: Function DFMAbility.AbilityAttachBaseMesh.SetPostEffectActive
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xc3d4e6c
	// Params: [ Num(1) Size(0x8) ]
	void SetPostEffectActive(struct FName PostEffectName);

	// Object: Function DFMAbility.AbilityAttachBaseMesh.SetCurStaticMeshComponentEnable
	// Flags: [Final|Native|Protected]
	// Offset: 0xc3d4d7c
	// Params: [ Num(2) Size(0x2) ]
	void SetCurStaticMeshComponentEnable(uint8_t Enable, uint8_t fromLod);

	// Object: Function DFMAbility.AbilityAttachBaseMesh.SetCurSkeletalMeshComponentMasterPoseEnable
	// Flags: [Final|Native|Protected]
	// Offset: 0xc3d4c8c
	// Params: [ Num(2) Size(0x2) ]
	void SetCurSkeletalMeshComponentMasterPoseEnable(uint8_t Enable, uint8_t fromLod);

	// Object: Function DFMAbility.AbilityAttachBaseMesh.SetCurSkeletalMeshComponentEnable
	// Flags: [Final|Native|Protected]
	// Offset: 0xc3d4b9c
	// Params: [ Num(2) Size(0x2) ]
	void SetCurSkeletalMeshComponentEnable(uint8_t Enable, uint8_t fromLod);

	// Object: Function DFMAbility.AbilityAttachBaseMesh.SetCurGameAKComponentEnable
	// Flags: [Final|Native|Protected]
	// Offset: 0xc3d4aac
	// Params: [ Num(2) Size(0x2) ]
	void SetCurGameAKComponentEnable(uint8_t Enable, uint8_t fromLod);

	// Object: Function DFMAbility.AbilityAttachBaseMesh.RemovePostEffect
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xc3d4a08
	// Params: [ Num(1) Size(0x8) ]
	void RemovePostEffect(struct FName PostEffectName);

	// Object: Function DFMAbility.AbilityAttachBaseMesh.Is3P
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0xc3d49d0
	// Params: [ Num(1) Size(0x1) ]
	uint8_t Is3P();

	// Object: Function DFMAbility.AbilityAttachBaseMesh.GetMasterSkeletalMesh
	// Flags: [Final|Native|Protected]
	// Offset: 0xc3d499c
	// Params: [ Num(1) Size(0x8) ]
	struct USkeletalMeshComponent* GetMasterSkeletalMesh();

	// Object: Function DFMAbility.AbilityAttachBaseMesh.EnableAllMeshTick
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xc3d48f0
	// Params: [ Num(1) Size(0x1) ]
	void EnableAllMeshTick(uint8_t Enable);

	// Object: Function DFMAbility.AbilityAttachBaseMesh.CharacterAvatarChangeSignature
	// Flags: [Final|Native|Public]
	// Offset: 0xc3d48dc
	// Params: [ Num(0) Size(0x0) ]
	void CharacterAvatarChangeSignature();

	// Object: Function DFMAbility.AbilityAttachBaseMesh.BP_SkeletalMeshMasterPose
	// Flags: [Event|Public|BlueprintCallable|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(1) Size(0x8) ]
	struct UGPSkeletalMeshComponent* BP_SkeletalMeshMasterPose();

	// Object: Function DFMAbility.AbilityAttachBaseMesh.BP_SkeletalMesh
	// Flags: [Event|Public|BlueprintCallable|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(1) Size(0x8) ]
	struct UGPSkeletalMeshComponent* BP_SkeletalMesh();

	// Object: Function DFMAbility.AbilityAttachBaseMesh.BP_SetMaterialScaleParams
	// Flags: [Event|Public|BlueprintCallable|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(1) Size(0x4) ]
	void BP_SetMaterialScaleParams(float Value);

	// Object: Function DFMAbility.AbilityAttachBaseMesh.BP_SetMasterPose
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xc3d4830
	// Params: [ Num(1) Size(0x1) ]
	void BP_SetMasterPose(uint8_t Set);

	// Object: Function DFMAbility.AbilityAttachBaseMesh.BP_SetBPAnimIndex
	// Flags: [Event|Public|BlueprintCallable|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(3) Size(0x9) ]
	void BP_SetBPAnimIndex(int32_t AnimIndex, float PlayRate, uint8_t bLoopAnim);

	// Object: Function DFMAbility.AbilityAttachBaseMesh.BP_PostBeginPlay
	// Flags: [Event|Public|BlueprintCallable|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(0) Size(0x0) ]
	void BP_PostBeginPlay();
};

// Object: Class DFMAbility.AbilityAttachRopeActor
// Size: 0x418 (Inherited: 0x370)
struct AAbilityAttachRopeActor : AActor
{
	DEFINE_UE_CLASS_HELPERS(AAbilityAttachRopeActor, "AbilityAttachRopeActor")

	uint8_t Pad_0x370[0x8]; // 0x370(0x8)
	int32_t CurrentLOD; // 0x378(0x4)
	int32_t LocalViewPriority; // 0x37C(0x4)
	struct TArray<struct UAbilityAttachRopeComponent*> CableArray; // 0x380(0x10)
	struct TArray<struct FVector> CachePaths; // 0x390(0x10)
	struct TArray<struct FVector> CacheResultPaths; // 0x3A0(0x10)
	struct TArray<int32_t> CacheMergeResults; // 0x3B0(0x10)
	uint8_t bEnableUseCacheResults : 1; // 0x3C0(0x1), Mask(0x1)
	uint8_t BitPad_0x3C0_1 : 7; // 0x3C0(0x1)
	struct FCollisionResponseContainer CollisionResponse; // 0x3C1(0x20)
	uint8_t Pad_0x3E1[0x3]; // 0x3E1(0x3)
	struct FVector HalfExtent; // 0x3E4(0xC)
	float RopeRadius; // 0x3F0(0x4)
	float MinDistanceToCheckDetail; // 0x3F4(0x4)
	uint8_t bEnableUseShowDistanceToCheckDetail : 1; // 0x3F8(0x1), Mask(0x1)
	uint8_t BitPad_0x3F8_1 : 7; // 0x3F8(0x1)
	uint8_t Pad_0x3F9[0x3]; // 0x3F9(0x3)
	int32_t DebugForceLod; // 0x3FC(0x4)
	struct FName RopeRippleID; // 0x400(0x8)
	struct TArray<struct UDFMInteractiveWaterComponent*> RopeRipples; // 0x408(0x10)
};

// Object: Class DFMAbility.AbilityAttachRopeComponent
// Size: 0x670 (Inherited: 0x580)
struct UAbilityAttachRopeComponent : UPrimitiveComponent
{
	DEFINE_UE_CLASS_HELPERS(UAbilityAttachRopeComponent, "AbilityAttachRopeComponent")

	int32_t SimulateFrame; // 0x578(0x4)
	float TimeStepScale; // 0x57C(0x4)
	int32_t NumSegments; // 0x580(0x4)
	float RopeLegth; // 0x584(0x4)
	float RopeLegthToUV; // 0x588(0x4)
	float RopeWidth; // 0x58C(0x4)
	int32_t NumSides; // 0x590(0x4)
	float TileMaterial; // 0x594(0x4)
	float SegmentScale; // 0x598(0x4)
	float SegmentMinScale; // 0x59C(0x4)
	float SegmentMaxScale; // 0x5A0(0x4)
	float SegmentScaleMinDistance; // 0x5A4(0x4)
	float SegmentScaleMaxDistance; // 0x5A8(0x4)
	int32_t NumOfParticleAttachToKeyPoint; // 0x5AC(0x4)
	float NodeAttachToKeyPointMass; // 0x5B0(0x4)
	float SegmentMaxOffset; // 0x5B4(0x4)
	struct UMaterialInterface* RopeMaterial; // 0x5B8(0x8)
	uint8_t bEnablePhysics : 1; // 0x5C0(0x1), Mask(0x1)
	float GravityScale; // 0x5C4(0x4)
	float DistanceStiffness; // 0x5C8(0x4)
	float BendingStiffness; // 0x5CC(0x4)
	float SegmentStiffness; // 0x5D0(0x4)
	float WayPointStiffness; // 0x5D4(0x4)
	float damping; // 0x5D8(0x4)
	int32_t SolverIterations; // 0x5DC(0x4)
	struct TArray<struct FAttachRopeConfig> RopeLodConfig; // 0x5E0(0x10)
	uint8_t bEnableLod : 1; // 0x5F0(0x1), Mask(0x1)
	uint8_t BitPad_0x5F4_2 : 6; // 0x5F4(0x1)
	uint8_t Pad_0x5F5[0x3]; // 0x5F5(0x3)
	struct UMaterialInstanceDynamic* DynamicMaterialInstance; // 0x5F8(0x8)
	uint8_t Pad_0x600[0x68]; // 0x600(0x68)
	int32_t CurrentLOD; // 0x668(0x4)
	uint8_t Pad_0x66C[0x4]; // 0x66C(0x4)

	// Object: Function DFMAbility.AbilityAttachRopeComponent.RebuildRope
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xc3d5290
	// Params: [ Num(0) Size(0x0) ]
	void RebuildRope();
};

// Object: Class DFMAbility.AbilityVoxelizationComponent
// Size: 0x3F0 (Inherited: 0x240)
struct UAbilityVoxelizationComponent : USceneComponent
{
	DEFINE_UE_CLASS_HELPERS(UAbilityVoxelizationComponent, "AbilityVoxelizationComponent")

	EAbilityVoxelCheckType CheckType; // 0x240(0x1)
	uint8_t Pad_0x241[0x3]; // 0x241(0x3)
	struct FVector CheckBoxSize; // 0x244(0xC)
	float CheckRadius; // 0x250(0x4)
	float CheckHeight; // 0x254(0x4)
	struct FVector CheckVoxelSize; // 0x258(0xC)
	int32_t ClientVoxelMerge; // 0x264(0x4)
	EAbilityVoxelDiffuseType DiffuseType; // 0x268(0x1)
	uint8_t Pad_0x269[0x3]; // 0x269(0x3)
	float CylinderBFSParentOffset; // 0x26C(0x4)
	float DamagePlaneLimit; // 0x270(0x4)
	int32_t DamageDiffuseAddOffset; // 0x274(0x4)
	struct TArray<struct UObject*> IgnoreObjectClass; // 0x278(0x10)
	uint8_t bHasVoxelization : 1; // 0x288(0x1), Mask(0x1)
	uint8_t BitPad_0x288_1 : 7; // 0x288(0x1)
	uint8_t Pad_0x289[0x3]; // 0x289(0x3)
	struct FVector CheckSize; // 0x28C(0xC)
	struct FBox WorldBaseAABB; // 0x298(0x1C)
	uint8_t Pad_0x2B4[0x4]; // 0x2B4(0x4)
	struct TArray<uint8_t> VoxelCheckResults; // 0x2B8(0x10)
	struct TArray<uint8_t> DamageDiffuseResults; // 0x2C8(0x10)
	struct FIntVector VoxelCount; // 0x2D8(0xC)
	float VoxelPlaneRate; // 0x2E4(0x4)
	float DamagePlaneRate; // 0x2E8(0x4)
	uint8_t Pad_0x2EC[0x4]; // 0x2EC(0x4)
	struct TArray<uint8_t> DamagePlaneResults; // 0x2F0(0x10)
	uint8_t Pad_0x300[0x10]; // 0x300(0x10)
	struct TArray<uint8_t> OctreeCompressedData; // 0x310(0x10)
	struct FIntVector ClientVoxelCount; // 0x320(0xC)
	uint8_t bHasClientData : 1; // 0x32C(0x1), Mask(0x1)
	uint8_t BitPad_0x32C_1 : 7; // 0x32C(0x1)
	uint8_t Pad_0x32D[0x3]; // 0x32D(0x3)
	int32_t MaxClientVoxelCount; // 0x330(0x4)
	uint8_t Pad_0x334[0x4]; // 0x334(0x4)
	struct TArray<uint8_t> DecompressResults; // 0x338(0x10)
	uint8_t Pad_0x348[0xA8]; // 0x348(0xA8)

	// Object: Function DFMAbility.AbilityVoxelizationComponent.Voxelization
	// Flags: [Final|Native|Public]
	// Offset: 0xc3db264
	// Params: [ Num(0) Size(0x0) ]
	void Voxelization();

	// Object: Function DFMAbility.AbilityVoxelizationComponent.RealDoDamageDiffuse
	// Flags: [Final|Native|Protected]
	// Offset: 0xc3db140
	// Params: [ Num(4) Size(0xD) ]
	uint8_t RealDoDamageDiffuse(int32_t X, int32_t Y, int32_t Z);

	// Object: Function DFMAbility.AbilityVoxelizationComponent.OnRep_ClientData
	// Flags: [Final|Native|Protected]
	// Offset: 0xc3db12c
	// Params: [ Num(0) Size(0x0) ]
	void OnRep_ClientData();

	// Object: Function DFMAbility.AbilityVoxelizationComponent.IsVoxelization
	// Flags: [Final|Native|Public|Const]
	// Offset: 0xc3db0f4
	// Params: [ Num(1) Size(0x1) ]
	uint8_t IsVoxelization();

	// Object: Function DFMAbility.AbilityVoxelizationComponent.IsOBB
	// Flags: [Final|Native|Public|Const]
	// Offset: 0xc3db0bc
	// Params: [ Num(1) Size(0x1) ]
	uint8_t IsOBB();

	// Object: Function DFMAbility.AbilityVoxelizationComponent.InitLineTraceParams
	// Flags: [Final|Native|Protected]
	// Offset: 0xc3db0a8
	// Params: [ Num(0) Size(0x0) ]
	void InitLineTraceParams();

	// Object: Function DFMAbility.AbilityVoxelizationComponent.InitData
	// Flags: [Final|Native|Protected]
	// Offset: 0xc3db094
	// Params: [ Num(0) Size(0x0) ]
	void InitData();

	// Object: Function DFMAbility.AbilityVoxelizationComponent.InitCheckSize
	// Flags: [Final|Native|Protected]
	// Offset: 0xc3db080
	// Params: [ Num(0) Size(0x0) ]
	void InitCheckSize();

	// Object: Function DFMAbility.AbilityVoxelizationComponent.GetVoxelLocation
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults|Const]
	// Offset: 0xc3dafc4
	// Params: [ Num(2) Size(0x18) ]
	struct FVector GetVoxelLocation(const struct FVector& Location);

	// Object: Function DFMAbility.AbilityVoxelizationComponent.GetVoxelIndexByVoxelLocation
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults|Const]
	// Offset: 0xc3daf04
	// Params: [ Num(2) Size(0x18) ]
	struct FIntVector GetVoxelIndexByVoxelLocation(const struct FVector& VoxelLocation);

	// Object: Function DFMAbility.AbilityVoxelizationComponent.GetVoxelIndex
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults|Const]
	// Offset: 0xc3dae44
	// Params: [ Num(2) Size(0x18) ]
	struct FIntVector GetVoxelIndex(const struct FVector& Location);

	// Object: Function DFMAbility.AbilityVoxelizationComponent.GetVoxelArrayIndex
	// Flags: [Final|Native|Public|Const]
	// Offset: 0xc3dad24
	// Params: [ Num(4) Size(0x10) ]
	int32_t GetVoxelArrayIndex(int32_t X, int32_t Y, int32_t Z);

	// Object: Function DFMAbility.AbilityVoxelizationComponent.GetQueryAABB
	// Flags: [Final|Native|Protected|HasDefaults|Const]
	// Offset: 0xc3dacb8
	// Params: [ Num(1) Size(0x1C) ]
	struct FBox GetQueryAABB();

	// Object: Function DFMAbility.AbilityVoxelizationComponent.GetDecompressResults
	// Flags: [Final|Native|Public|Const]
	// Offset: 0xc3dac30
	// Params: [ Num(1) Size(0x10) ]
	struct TArray<uint8_t> GetDecompressResults();

	// Object: Function DFMAbility.AbilityVoxelizationComponent.GetDamageDiffuseResults
	// Flags: [Final|Native|Public|Const]
	// Offset: 0xc3daba8
	// Params: [ Num(1) Size(0x10) ]
	struct TArray<uint8_t> GetDamageDiffuseResults();

	// Object: Function DFMAbility.AbilityVoxelizationComponent.GetCurrVoxelSize
	// Flags: [Final|Native|Public|HasDefaults|Const]
	// Offset: 0xc3dab70
	// Params: [ Num(1) Size(0xC) ]
	struct FVector GetCurrVoxelSize();

	// Object: Function DFMAbility.AbilityVoxelizationComponent.GetCurrVoxelCount
	// Flags: [Final|Native|Public|HasDefaults|Const]
	// Offset: 0xc3dab34
	// Params: [ Num(1) Size(0xC) ]
	struct FIntVector GetCurrVoxelCount();

	// Object: Function DFMAbility.AbilityVoxelizationComponent.GetCheckSize
	// Flags: [Final|Native|Public|HasDefaults|Const]
	// Offset: 0xc3dab0c
	// Params: [ Num(1) Size(0xC) ]
	struct FVector GetCheckSize();

	// Object: Function DFMAbility.AbilityVoxelizationComponent.DoVoxelization
	// Flags: [Final|Native|Protected]
	// Offset: 0xc3daad4
	// Params: [ Num(1) Size(0x1) ]
	uint8_t DoVoxelization();

	// Object: Function DFMAbility.AbilityVoxelizationComponent.DoLineTraceCheck
	// Flags: [Final|Native|Protected|HasOutParms|HasDefaults]
	// Offset: 0xc3da9c8
	// Params: [ Num(3) Size(0x19) ]
	uint8_t DoLineTraceCheck(const struct FVector& Start, const struct FVector& End);

	// Object: Function DFMAbility.AbilityVoxelizationComponent.DoDamageDiffuse_DFS
	// Flags: [Final|Native|Protected]
	// Offset: 0xc3da8b0
	// Params: [ Num(3) Size(0xC) ]
	void DoDamageDiffuse_DFS(int32_t X, int32_t Y, int32_t Z);

	// Object: Function DFMAbility.AbilityVoxelizationComponent.DoDamageDiffuse_CylinderBFS
	// Flags: [Final|Native|Protected]
	// Offset: 0xc3da798
	// Params: [ Num(3) Size(0xC) ]
	void DoDamageDiffuse_CylinderBFS(int32_t X, int32_t Y, int32_t Z);

	// Object: Function DFMAbility.AbilityVoxelizationComponent.DoDamageDiffuse_BFS
	// Flags: [Final|Native|Protected]
	// Offset: 0xc3da680
	// Params: [ Num(3) Size(0xC) ]
	void DoDamageDiffuse_BFS(int32_t X, int32_t Y, int32_t Z);

	// Object: Function DFMAbility.AbilityVoxelizationComponent.DecompressOctreeNode
	// Flags: [Final|Native|Protected|HasOutParms]
	// Offset: 0xc3da554
	// Params: [ Num(3) Size(0xC) ]
	void DecompressOctreeNode(int32_t Level, int32_t NodeIndex, int32_t& ReadIndex);

	// Object: Function DFMAbility.AbilityVoxelizationComponent.DecompressOctree
	// Flags: [Final|Native|Protected]
	// Offset: 0xc3da540
	// Params: [ Num(0) Size(0x0) ]
	void DecompressOctree();

	// Object: Function DFMAbility.AbilityVoxelizationComponent.DebugDrawVoxels
	// Flags: [Final|Native|Protected]
	// Offset: 0xc3da52c
	// Params: [ Num(0) Size(0x0) ]
	void DebugDrawVoxels();

	// Object: Function DFMAbility.AbilityVoxelizationComponent.DamageDiffuse
	// Flags: [Final|Native|Protected]
	// Offset: 0xc3da518
	// Params: [ Num(0) Size(0x0) ]
	void DamageDiffuse();

	// Object: Function DFMAbility.AbilityVoxelizationComponent.CountVoxelPlaneRate
	// Flags: [Final|Native|Protected|Const]
	// Offset: 0xc3da4e4
	// Params: [ Num(1) Size(0x4) ]
	float CountVoxelPlaneRate();

	// Object: Function DFMAbility.AbilityVoxelizationComponent.CompressOctreeNode
	// Flags: [Final|Native|Protected]
	// Offset: 0xc3da408
	// Params: [ Num(2) Size(0x8) ]
	void CompressOctreeNode(int32_t Level, int32_t NodeIndex);

	// Object: Function DFMAbility.AbilityVoxelizationComponent.CompressOctree
	// Flags: [Final|Native|Protected]
	// Offset: 0xc3da3f4
	// Params: [ Num(0) Size(0x0) ]
	void CompressOctree();

	// Object: Function DFMAbility.AbilityVoxelizationComponent.CompareDecompressResults
	// Flags: [Final|Native|Protected]
	// Offset: 0xc3da3e0
	// Params: [ Num(0) Size(0x0) ]
	void CompareDecompressResults();

	// Object: Function DFMAbility.AbilityVoxelizationComponent.ClientDebugDrawVoxels
	// Flags: [Net|NetReliableNative|Event|NetMulticast|Protected]
	// Offset: 0xc3da3c4
	// Params: [ Num(0) Size(0x0) ]
	void ClientDebugDrawVoxels();

	// Object: Function DFMAbility.AbilityVoxelizationComponent.ClientDebugDrawLine
	// Flags: [Net|NetReliableNative|Event|NetMulticast|Protected|HasDefaults|Const]
	// Offset: 0xc3da2a4
	// Params: [ Num(3) Size(0x1C) ]
	void ClientDebugDrawLine(struct FVector Start, struct FVector End, struct FColor Color);

	// Object: Function DFMAbility.AbilityVoxelizationComponent.ClientDebugDrawBox
	// Flags: [Net|NetReliableNative|Event|NetMulticast|Protected|HasDefaults|Const]
	// Offset: 0xc3da184
	// Params: [ Num(3) Size(0x1C) ]
	void ClientDebugDrawBox(struct FVector Origin, struct FVector Extent, struct FColor Color);

	// Object: Function DFMAbility.AbilityVoxelizationComponent.CheckLocationWithOutVoxel
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults]
	// Offset: 0xc3d9f9c
	// Params: [ Num(6) Size(0x31) ]
	uint8_t CheckLocationWithOutVoxel(const struct TArray<uint8_t>& ResultsToCheck, uint8_t TargetResult, const struct FVector& Location, int32_t CheckAddOffset, struct FIntVector& OutVoxelIdx);

	// Object: Function DFMAbility.AbilityVoxelizationComponent.CheckLocation
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults]
	// Offset: 0xc3d9e94
	// Params: [ Num(3) Size(0xE) ]
	uint8_t CheckLocation(const struct FVector& Location, uint8_t CheckAddOffset);

	// Object: Function DFMAbility.AbilityVoxelizationComponent.CheckDamagePlaneLimit
	// Flags: [Final|Native|Protected]
	// Offset: 0xc3d9dac
	// Params: [ Num(3) Size(0x9) ]
	uint8_t CheckDamagePlaneLimit(int32_t X, int32_t Y);

	// Object: Function DFMAbility.AbilityVoxelizationComponent.BuildOctreeCheckLevel0
	// Flags: [Final|Native|Protected]
	// Offset: 0xc3d9c88
	// Params: [ Num(4) Size(0xD) ]
	uint8_t BuildOctreeCheckLevel0(int32_t X, int32_t Y, int32_t Z);

	// Object: Function DFMAbility.AbilityVoxelizationComponent.BuildOctree
	// Flags: [Final|Native|Protected]
	// Offset: 0xc3d9c74
	// Params: [ Num(0) Size(0x0) ]
	void BuildOctree();

	// Object: Function DFMAbility.AbilityVoxelizationComponent.BaseCheckLocation_Sphere
	// Flags: [Final|Native|Protected|HasOutParms|HasDefaults|Const]
	// Offset: 0xc3d9bb8
	// Params: [ Num(2) Size(0xD) ]
	uint8_t BaseCheckLocation_Sphere(const struct FVector& VoxelLocation);

	// Object: Function DFMAbility.AbilityVoxelizationComponent.BaseCheckLocation_Cylinder
	// Flags: [Final|Native|Protected|HasOutParms|HasDefaults|Const]
	// Offset: 0xc3d9afc
	// Params: [ Num(2) Size(0xD) ]
	uint8_t BaseCheckLocation_Cylinder(const struct FVector& VoxelLocation);

	// Object: Function DFMAbility.AbilityVoxelizationComponent.BaseCheckLocation_Box
	// Flags: [Final|Native|Protected|HasOutParms|HasDefaults|Const]
	// Offset: 0xc3d9a40
	// Params: [ Num(2) Size(0xD) ]
	uint8_t BaseCheckLocation_Box(const struct FVector& VoxelLocation);

	// Object: Function DFMAbility.AbilityVoxelizationComponent.BaseCheckLocation
	// Flags: [Final|Native|Protected|HasOutParms|HasDefaults|Const]
	// Offset: 0xc3d9984
	// Params: [ Num(2) Size(0xD) ]
	uint8_t BaseCheckLocation(const struct FVector& VoxelLocation);
};

// Object: Class DFMAbility.AbilityBulletVoxelizationComponent
// Size: 0x400 (Inherited: 0x3F0)
struct UAbilityBulletVoxelizationComponent : UAbilityVoxelizationComponent
{
	DEFINE_UE_CLASS_HELPERS(UAbilityBulletVoxelizationComponent, "AbilityBulletVoxelizationComponent")

	float DamageDiffuseCheckSize; // 0x3E4(0x4)
	float DamageDiffuseMaxDistance; // 0x3E8(0x4)
	float DamageDiffuseCheckHeight; // 0x3EC(0x4)
	float DamageDiffuseMaxTime; // 0x3F0(0x4)
	float DamageDiffuseStepTime; // 0x3F4(0x4)
};

// Object: Class DFMAbility.AbilityCableActor
// Size: 0x388 (Inherited: 0x370)
struct AAbilityCableActor : AActor
{
	DEFINE_UE_CLASS_HELPERS(AAbilityCableActor, "AbilityCableActor")

	uint8_t Pad_0x370[0x8]; // 0x370(0x8)
	struct TArray<struct UAbilityCableComponent*> CableArray; // 0x378(0x10)
};

// Object: Class DFMAbility.AbilityCableComponent
// Size: 0x730 (Inherited: 0x6F0)
struct UAbilityCableComponent : UMeshComponent
{
	DEFINE_UE_CLASS_HELPERS(UAbilityCableComponent, "AbilityCableComponent")

	struct TArray<struct FVector> Particles; // 0x6E8(0x10)
	uint8_t Pad_0x700[0x14]; // 0x700(0x14)
	int32_t NumSegments; // 0x714(0x4)
	float TotalLength; // 0x718(0x4)
	float RopeWidth; // 0x71C(0x4)
	int32_t NumSides; // 0x720(0x4)
	float TileMaterial; // 0x724(0x4)
	uint8_t Pad_0x728[0x8]; // 0x728(0x8)
};

// Object: Class DFMAbility.DFMAbilityInstance
// Size: 0x40 (Inherited: 0x40)
struct UDFMAbilityInstance : UGPAbilityInstance
{
	DEFINE_UE_CLASS_HELPERS(UDFMAbilityInstance, "DFMAbilityInstance")

	// Object: Function DFMAbility.DFMAbilityInstance.SetCullScreenSizeRatio
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xc414924
	// Params: [ Num(1) Size(0x4) ]
	void SetCullScreenSizeRatio(float ratio);

	// Object: Function DFMAbility.DFMAbilityInstance.IsServer
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xc4148ec
	// Params: [ Num(1) Size(0x1) ]
	uint8_t IsServer();

	// Object: Function DFMAbility.DFMAbilityInstance.IsMPMode
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0xc4148b4
	// Params: [ Num(1) Size(0x1) ]
	uint8_t IsMPMode();

	// Object: Function DFMAbility.DFMAbilityInstance.IsFPPMode
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xc41487c
	// Params: [ Num(1) Size(0x1) ]
	uint8_t IsFPPMode();

	// Object: Function DFMAbility.DFMAbilityInstance.IsEquipingWeapon
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0xfabd628
	// Params: [ Num(2) Size(0x5) ]
	uint8_t IsEquipingWeapon(int32_t WeaponSlot);

	// Object: Function DFMAbility.DFMAbilityInstance.Is1PorStandalone
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0xc414844
	// Params: [ Num(1) Size(0x1) ]
	uint8_t Is1PorStandalone();

	// Object: Function DFMAbility.DFMAbilityInstance.Is1P
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xc41480c
	// Params: [ Num(1) Size(0x1) ]
	uint8_t Is1P();

	// Object: Function DFMAbility.DFMAbilityInstance.HasAuthority
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xc4147d4
	// Params: [ Num(1) Size(0x1) ]
	uint8_t HasAuthority();

	// Object: Function DFMAbility.DFMAbilityInstance.GetNetMode
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xeffacf8
	// Params: [ Num(1) Size(0x1) ]
	ENetMode GetNetMode();

	// Object: Function DFMAbility.DFMAbilityInstance.GetHealthData
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	// Offset: 0xc414680
	// Params: [ Num(3) Size(0xC) ]
	void GetHealthData(int32_t& cur, int32_t& Max, float& Percent);

	// Object: Function DFMAbility.DFMAbilityInstance.GetENetRole
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xc41464c
	// Params: [ Num(1) Size(0x1) ]
	ENetRole GetENetRole();

	// Object: Function DFMAbility.DFMAbilityInstance.GetCurrentGameTime
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xfa016d0
	// Params: [ Num(1) Size(0x4) ]
	float GetCurrentGameTime();

	// Object: Function DFMAbility.DFMAbilityInstance.GetCullScreenSizeRatio
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0xc414618
	// Params: [ Num(1) Size(0x4) ]
	float GetCullScreenSizeRatio();

	// Object: Function DFMAbility.DFMAbilityInstance.GetAbilityData
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0xc4145e0
	// Params: [ Num(1) Size(0x3B8) ]
	struct FGPAbilityEntityData GetAbilityData();

	// Object: Function DFMAbility.DFMAbilityInstance.GetAbilityCharacter
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0xf87fd3c
	// Params: [ Num(1) Size(0x8) ]
	struct AGPCharacter* GetAbilityCharacter();

	// Object: Function DFMAbility.DFMAbilityInstance.FireOneShot
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xc4145cc
	// Params: [ Num(0) Size(0x0) ]
	void FireOneShot();

	// Object: Function DFMAbility.DFMAbilityInstance.ClientSwitchMainWeapon
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xc414528
	// Params: [ Num(1) Size(0x1) ]
	void ClientSwitchMainWeapon(EWeaponSwitchType SwitchType);
};

// Object: Class DFMAbility.AbilityInstanceAIAlert
// Size: 0x148 (Inherited: 0x40)
struct UAbilityInstanceAIAlert : UDFMAbilityInstance
{
	DEFINE_UE_CLASS_HELPERS(UAbilityInstanceAIAlert, "AbilityInstanceAIAlert")

	float AlertCooldown; // 0x3C(0x4)
	struct FAlertMarkConfig AlertMarkConfig; // 0x40(0x14)
	struct TArray<struct TSoftObjectPtr<UGPAudioEventAsset>> AlertVOEvents; // 0x58(0x10)
	struct TArray<struct UGPAudioEventAsset*> AlertVOEventObjects; // 0x68(0x10)
	float VoicePlaybackCooldown; // 0x78(0x4)
	float SubtitlePlaybackCooldown; // 0x7C(0x4)
	float PlayVOMaxDistance; // 0x80(0x4)
	float PassiveAlertTriggerRange; // 0x84(0x4)
	float MinContinuousSightTimeForAlert; // 0x88(0x4)
	uint8_t Pad_0x8C[0x4]; // 0x8C(0x4)
	struct FText SpeakerName; // 0x90(0x18)
	struct FText NonePOISubtitle; // 0xA8(0x18)
	struct FText POISubtitleFormatString; // 0xC0(0x18)
	float TeammateActiveRange; // 0xD8(0x4)
	uint8_t Pad_0xDC[0x4]; // 0xDC(0x4)
	struct TMap<struct AActor*, struct FAIAlertInfo> AlertCache; // 0xE0(0x50)
	float LastVoicePlaybackTime; // 0x130(0x4)
	float LastSubtitlePlaybackTime; // 0x134(0x4)
	struct APlayerCommanderFakeAIController* CommanderController; // 0x138(0x8)
	struct AAIAlertRPC* AlertRPCComponent; // 0x140(0x8)

	// Object: Function DFMAbility.AbilityInstanceAIAlert.OnReceiveAIAlert
	// Flags: [Final|Native|Public]
	// Offset: 0xc3d52e8
	// Params: [ Num(2) Size(0x10) ]
	void OnReceiveAIAlert(struct ADFMAICharacter* AI, struct ADFMCharacter* Enemy);
};

// Object: Class DFMAbility.AbilityInstanceBionicSpySkill
// Size: 0x58 (Inherited: 0x40)
struct UAbilityInstanceBionicSpySkill : UDFMAbilityInstance
{
	DEFINE_UE_CLASS_HELPERS(UAbilityInstanceBionicSpySkill, "AbilityInstanceBionicSpySkill")

	struct FName TargetPanelName; // 0x3C(0x8)
	float FailedCDTime; // 0x44(0x4)
	float MaxProgressHUDShowTime; // 0x48(0x4)
	struct ABionicSpyActor* BionicSpyActorClass; // 0x50(0x8)

	// Object: Function DFMAbility.AbilityInstanceBionicSpySkill.TrySpawnSpyActor
	// Flags: [Final|Native|Protected]
	// Offset: 0xc3d5734
	// Params: [ Num(1) Size(0x4) ]
	int32_t TrySpawnSpyActor();

	// Object: Function DFMAbility.AbilityInstanceBionicSpySkill.SetProgressHUDShowState
	// Flags: [Final|Native|Protected|BlueprintCallable]
	// Offset: 0xc3d5688
	// Params: [ Num(1) Size(0x1) ]
	void SetProgressHUDShowState(uint8_t bIsShow);

	// Object: Function DFMAbility.AbilityInstanceBionicSpySkill.SetCD
	// Flags: [Final|Native|Protected]
	// Offset: 0xc3d55dc
	// Params: [ Num(1) Size(0x1) ]
	void SetCD(uint8_t bIsSuccess);

	// Object: Function DFMAbility.AbilityInstanceBionicSpySkill.SendTargetLoadPanel
	// Flags: [Final|Native|Protected|BlueprintCallable]
	// Offset: 0xc3d55c8
	// Params: [ Num(0) Size(0x0) ]
	void SendTargetLoadPanel();

	// Object: Function DFMAbility.AbilityInstanceBionicSpySkill.DataFlowAddCastNum
	// Flags: [Final|Native|Protected]
	// Offset: 0xc3d551c
	// Params: [ Num(1) Size(0x1) ]
	void DataFlowAddCastNum(uint8_t bIsSuccess);

	// Object: Function DFMAbility.AbilityInstanceBionicSpySkill.CheckFootprintSearchData
	// Flags: [Final|Native|Protected]
	// Offset: 0xc3d54e4
	// Params: [ Num(1) Size(0x1) ]
	uint8_t CheckFootprintSearchData();
};

// Object: Class DFMAbility.AbilityInstanceBionicSpySwitchSkill
// Size: 0x68 (Inherited: 0x40)
struct UAbilityInstanceBionicSpySwitchSkill : UDFMAbilityInstance
{
	DEFINE_UE_CLASS_HELPERS(UAbilityInstanceBionicSpySwitchSkill, "AbilityInstanceBionicSpySwitchSkill")

	float MinSwitchTime; // 0x3C(0x4)
	float ClientAddSwitchTime; // 0x40(0x4)
	float TipsTime; // 0x44(0x4)
	float CheckTickRate; // 0x48(0x4)
	struct TArray<struct FSpySwitchMapData> AllMapData; // 0x50(0x10)
	struct FTimerHandle TickTimerHandle; // 0x60(0x8)

	// Object: Function DFMAbility.AbilityInstanceBionicSpySwitchSkill.TrySwitchSpyMode
	// Flags: [Final|Native|Protected|BlueprintCallable]
	// Offset: 0xc3d59c8
	// Params: [ Num(0) Size(0x0) ]
	void TrySwitchSpyMode();

	// Object: Function DFMAbility.AbilityInstanceBionicSpySwitchSkill.TryCloseHUD
	// Flags: [Final|Native|Protected]
	// Offset: 0xc3d59b4
	// Params: [ Num(0) Size(0x0) ]
	void TryCloseHUD();

	// Object: Function DFMAbility.AbilityInstanceBionicSpySwitchSkill.StopTickTimer
	// Flags: [Final|Native|Protected]
	// Offset: 0xc3d59a0
	// Params: [ Num(0) Size(0x0) ]
	void StopTickTimer();

	// Object: Function DFMAbility.AbilityInstanceBionicSpySwitchSkill.StartTickTimer
	// Flags: [Final|Native|Protected]
	// Offset: 0xc3d598c
	// Params: [ Num(0) Size(0x0) ]
	void StartTickTimer();

	// Object: Function DFMAbility.AbilityInstanceBionicSpySwitchSkill.DoTimerTick
	// Flags: [Final|Native|Protected]
	// Offset: 0xc3d5978
	// Params: [ Num(0) Size(0x0) ]
	void DoTimerTick();

	// Object: Function DFMAbility.AbilityInstanceBionicSpySwitchSkill.DoCheck
	// Flags: [Final|Native|Protected]
	// Offset: 0xc3d5940
	// Params: [ Num(1) Size(0x1) ]
	uint8_t DoCheck();

	// Object: Function DFMAbility.AbilityInstanceBionicSpySwitchSkill.CheckSpyData
	// Flags: [Final|Native|Protected]
	// Offset: 0xc3d5888
	// Params: [ Num(2) Size(0x2) ]
	uint8_t CheckSpyData(uint8_t bShowTips);

	// Object: Function DFMAbility.AbilityInstanceBionicSpySwitchSkill.CheckMapData
	// Flags: [Final|Native|Protected]
	// Offset: 0xc3d5850
	// Params: [ Num(1) Size(0x1) ]
	uint8_t CheckMapData();

	// Object: Function DFMAbility.AbilityInstanceBionicSpySwitchSkill.CheckDistance
	// Flags: [Final|Native|Protected]
	// Offset: 0xc3d57a0
	// Params: [ Num(2) Size(0x5) ]
	uint8_t CheckDistance(float MaxDistance);
};

// Object: Class DFMAbility.AbilityInstanceCallAI2
// Size: 0x80 (Inherited: 0x40)
struct UAbilityInstanceCallAI2 : UDFMAbilityInstance
{
	DEFINE_UE_CLASS_HELPERS(UAbilityInstanceCallAI2, "AbilityInstanceCallAI2")

	struct ACallAIAbility* CallAIAbilityClass; // 0x40(0x8)
	struct FName BossAnaisMapName; // 0x48(0x8)
	struct FName BossAnaisName; // 0x50(0x8)
	float CheckAnaisProbability; // 0x58(0x4)
	float DynamicSetRagdollNumLimitRange; // 0x5C(0x4)
	float DynamicSetRagdollNumLimitDuration; // 0x60(0x4)
	uint8_t Pad_0x64[0x4]; // 0x64(0x4)
	struct ACallAIAbility* CacheCallAIAbility; // 0x68(0x8)
	uint8_t Pad_0x70[0x10]; // 0x70(0x10)
};

// Object: Class DFMAbility.AbilityInstanceCallDog
// Size: 0x88 (Inherited: 0x40)
struct UAbilityInstanceCallDog : UDFMAbilityInstance
{
	DEFINE_UE_CLASS_HELPERS(UAbilityInstanceCallDog, "AbilityInstanceCallDog")

	float MaxLeftTime; // 0x3C(0x4)
	float DespawnShowTime; // 0x40(0x4)
	struct FName CallDogAIName; // 0x44(0x8)
	float CallDogDistance; // 0x4C(0x4)
	struct TSoftObjectPtr<UDataTable> NpcTemplateTable; // 0x50(0x28)
	uint64_t SkillKillAttackValueId; // 0x78(0x8)
	struct TWeakObjectPtr<struct ADFMAICharacterCallDog> CallDogCharacter; // 0x80(0x8)

	// Object: Function DFMAbility.AbilityInstanceCallDog.StopCD
	// Flags: [Final|Native|Protected]
	// Offset: 0xc3d5c88
	// Params: [ Num(0) Size(0x0) ]
	void StopCD();

	// Object: Function DFMAbility.AbilityInstanceCallDog.SetDogCharacter
	// Flags: [Final|Native|Public]
	// Offset: 0xc3d5be4
	// Params: [ Num(1) Size(0x8) ]
	void SetDogCharacter(struct ADFMAICharacterCallDog* DogCharacter);

	// Object: Function DFMAbility.AbilityInstanceCallDog.ResumeCD
	// Flags: [Final|Native|Protected]
	// Offset: 0xc3d5bd0
	// Params: [ Num(0) Size(0x0) ]
	void ResumeCD();

	// Object: Function DFMAbility.AbilityInstanceCallDog.DoSpawnAI
	// Flags: [Final|Native|Protected]
	// Offset: 0xc3d5b98
	// Params: [ Num(1) Size(0x1) ]
	uint8_t DoSpawnAI();
};

// Object: Class DFMAbility.AbilityLauncherFireModeParams
// Size: 0x238 (Inherited: 0x200)
struct UAbilityLauncherFireModeParams : UGPWeaponFireModeParamsAbilityLauncher
{
	DEFINE_UE_CLASS_HELPERS(UAbilityLauncherFireModeParams, "AbilityLauncherFireModeParams")

	uint8_t bIsC201Launcher : 1; // 0x1FB(0x1), Mask(0x1)
	struct AAbilityWeaponThrowableBullet* LauncherBulletClass; // 0x200(0x8)
	struct AAbilityWeaponThrowableBullet* LauncherBulletClass2; // 0x208(0x8)
	struct AAbilityWeaponThrowableBullet* LauncherBulletClass3; // 0x210(0x8)
	struct FName SocketName; // 0x218(0x8)
	float IntersectionPointLength; // 0x220(0x4)
	struct FVector TargetOffset; // 0x224(0xC)
	float OwnerVelocityFactor; // 0x230(0x4)
	uint8_t bEnableMIDIStopForEmptyAmmo : 1; // 0x234(0x1), Mask(0x1)
	uint8_t BitPad_0x234_2 : 6; // 0x234(0x1)
	uint8_t Pad_0x235[0x3]; // 0x235(0x3)
};

// Object: Class DFMAbility.AbilityLauncherFireMode
// Size: 0x478 (Inherited: 0x100)
struct UAbilityLauncherFireMode : UGPWeaponFireModePhysicSimulate
{
	DEFINE_UE_CLASS_HELPERS(UAbilityLauncherFireMode, "AbilityLauncherFireMode")

	uint8_t Pad_0x100[0x340]; // 0x100(0x340)
	struct UGPWeaponFireModeParamsAbilityLauncher* AbilityLauncherFireModeParams; // 0x440(0x8)
	uint8_t Pad_0x448[0x10]; // 0x448(0x10)
	struct FTimerHandle SwitchWeaponNextFrameTimerHandle; // 0x458(0x8)
	uint8_t bEnableSwitchWeaponInEndFire : 1; // 0x460(0x1), Mask(0x1)
	uint8_t BitPad_0x460_1 : 7; // 0x460(0x1)
	uint8_t bResetCurrentWeapon : 1; // 0x461(0x1), Mask(0x1)
	uint8_t BitPad_0x461_1 : 7; // 0x461(0x1)
	uint8_t bEnableResetPreviewLine : 1; // 0x462(0x1), Mask(0x1)
	uint8_t BitPad_0x462_1 : 7; // 0x462(0x1)
	uint8_t Pad_0x463[0x5]; // 0x463(0x5)
	struct UAbilityLauncherFireModeParams* DirectLauncherParams; // 0x468(0x8)
	int32_t SpawnBulletCnt; // 0x470(0x4)
	int32_t LastFireID; // 0x474(0x4)

	// Object: Function DFMAbility.AbilityLauncherFireMode.TrySpawnFakeBullet
	// Flags: [Native|Protected|HasOutParms]
	// Offset: 0xc3d8bc8
	// Params: [ Num(1) Size(0xB0) ]
	void TrySpawnFakeBullet(struct FWeaponFireRepInfo& RepInfo);

	// Object: Function DFMAbility.AbilityLauncherFireMode.SpawnGrenade
	// Flags: [Final|Native|Private|HasOutParms|HasDefaults]
	// Offset: 0xc3d8a34
	// Params: [ Num(4) Size(0x30) ]
	void SpawnGrenade(const struct FVector& StartLocation, const struct FVector& FireRotation, const struct FVector& AffectInitVelocity, const uint64_t& BulletGuid);

	// Object: Function DFMAbility.AbilityLauncherFireMode.ResetPreviewLine
	// Flags: [Final|Native|Protected]
	// Offset: 0xc3d8a20
	// Params: [ Num(0) Size(0x0) ]
	void ResetPreviewLine();

	// Object: Function DFMAbility.AbilityLauncherFireMode.OnSwitchWeaponNextFrame
	// Flags: [Final|Native|Protected]
	// Offset: 0xc3d8a0c
	// Params: [ Num(0) Size(0x0) ]
	void OnSwitchWeaponNextFrame();

	// Object: Function DFMAbility.AbilityLauncherFireMode.OnEndfireSwitchWeaponInNextFrame
	// Flags: [Final|Native|Protected]
	// Offset: 0xc3d89f8
	// Params: [ Num(0) Size(0x0) ]
	void OnEndfireSwitchWeaponInNextFrame();

	// Object: Function DFMAbility.AbilityLauncherFireMode.CheckIsClientOnlyThrowConfig
	// Flags: [Final|Native|Private|Const]
	// Offset: 0xc3d89c0
	// Params: [ Num(1) Size(0x1) ]
	uint8_t CheckIsClientOnlyThrowConfig();
};

// Object: Class DFMAbility.AbilityMineAnimInstance
// Size: 0xA20 (Inherited: 0x270)
struct UAbilityMineAnimInstance : UAnimInstance
{
	DEFINE_UE_CLASS_HELPERS(UAbilityMineAnimInstance, "AbilityMineAnimInstance")

	struct FAbilityMineAnimInstanceProxy LocalProxy; // 0x270(0x7B0)
};

// Object: Class DFMAbility.AbilityNodeTriggerInterface
// Size: 0x28 (Inherited: 0x28)
struct IAbilityNodeTriggerInterface : IInterface
{
	DEFINE_UE_CLASS_HELPERS(IAbilityNodeTriggerInterface, "AbilityNodeTriggerInterface")

	// Object: Function DFMAbility.AbilityNodeTriggerInterface.SetTriggerType
	// Flags: [Native|Public]
	// Offset: 0xc3d8e68
	// Params: [ Num(1) Size(0x4) ]
	void SetTriggerType(int32_t Type);

	// Object: Function DFMAbility.AbilityNodeTriggerInterface.GetTriggerType
	// Flags: [Native|Public]
	// Offset: 0xc3d8e2c
	// Params: [ Num(1) Size(0x4) ]
	int32_t GetTriggerType();

	// Object: Function DFMAbility.AbilityNodeTriggerInterface.DebugCustomTrigger
	// Flags: [Native|Public]
	// Offset: 0xc3d8d80
	// Params: [ Num(1) Size(0x4) ]
	void DebugCustomTrigger(int32_t Index);

	// Object: Function DFMAbility.AbilityNodeTriggerInterface.BroadcastTrigger
	// Flags: [Native|Public]
	// Offset: 0xc3d8d64
	// Params: [ Num(0) Size(0x0) ]
	void BroadcastTrigger();
};

// Object: Class DFMAbility.AbilityOverloadBuffHandler
// Size: 0x140 (Inherited: 0x130)
struct UAbilityOverloadBuffHandler : UGPEffectCueHandler
{
	DEFINE_UE_CLASS_HELPERS(UAbilityOverloadBuffHandler, "AbilityOverloadBuffHandler")

	uint8_t Pad_0x130[0x10]; // 0x130(0x10)

	// Object: Function DFMAbility.AbilityOverloadBuffHandler.TrySendEvent
	// Flags: [Final|Native|Private]
	// Offset: 0xc3d8fd0
	// Params: [ Num(1) Size(0x1) ]
	void TrySendEvent(uint8_t bIsAdd);
};

// Object: Class DFMAbility.AbilityProjectileInterface
// Size: 0x28 (Inherited: 0x28)
struct IAbilityProjectileInterface : IInterface
{
	DEFINE_UE_CLASS_HELPERS(IAbilityProjectileInterface, "AbilityProjectileInterface")

	// Object: Function DFMAbility.AbilityProjectileInterface.SetVelocityStartPos
	// Flags: [Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(1) Size(0xC) ]
	void SetVelocityStartPos(struct FVector pos);

	// Object: Function DFMAbility.AbilityProjectileInterface.SetVelocity
	// Flags: [Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(1) Size(0xC) ]
	void SetVelocity(struct FVector Velocity);

	// Object: Function DFMAbility.AbilityProjectileInterface.SetRealStop
	// Flags: [Event|Public|BlueprintCallable|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(1) Size(0x1) ]
	void SetRealStop(uint8_t Stop);

	// Object: Function DFMAbility.AbilityProjectileInterface.SetIgnoreOwner
	// Flags: [Event|Public|BlueprintCallable|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(1) Size(0x8) ]
	void SetIgnoreOwner(struct AActor* Actor);
};

// Object: Class DFMAbility.AbilityVehicleAnimInstance
// Size: 0x270 (Inherited: 0x270)
struct UAbilityVehicleAnimInstance : UAnimInstance
{
	DEFINE_UE_CLASS_HELPERS(UAbilityVehicleAnimInstance, "AbilityVehicleAnimInstance")

	// Object: Function DFMAbility.AbilityVehicleAnimInstance.GetSocketUpOffsetLoaction
	// Flags: [Final|Native|Private|HasDefaults|BlueprintCallable|BlueprintPure]
	// Offset: 0xc3d9650
	// Params: [ Num(4) Size(0x1C) ]
	struct FVector GetSocketUpOffsetLoaction(struct FName Name, float offset, ERelativeTransformSpace Space);

	// Object: Function DFMAbility.AbilityVehicleAnimInstance.GetSocketRightOffsetLoaction
	// Flags: [Final|Native|Private|HasDefaults|BlueprintCallable|BlueprintPure]
	// Offset: 0xc3d9528
	// Params: [ Num(4) Size(0x1C) ]
	struct FVector GetSocketRightOffsetLoaction(struct FName Name, float offset, ERelativeTransformSpace Space);

	// Object: Function DFMAbility.AbilityVehicleAnimInstance.GetSocketForwadOffsetLoaction
	// Flags: [Final|Native|Private|HasDefaults|BlueprintCallable|BlueprintPure]
	// Offset: 0xc3d9400
	// Params: [ Num(4) Size(0x1C) ]
	struct FVector GetSocketForwadOffsetLoaction(struct FName Name, float offset, ERelativeTransformSpace Space);

	// Object: Function DFMAbility.AbilityVehicleAnimInstance.getSocketAndSocketOffset
	// Flags: [Final|Native|Private|HasDefaults|BlueprintCallable|BlueprintPure]
	// Offset: 0xc3d92dc
	// Params: [ Num(4) Size(0x20) ]
	struct FVector getSocketAndSocketOffset(struct FName socket1, struct FName socket2, ERelativeTransformSpace Space);
};

// Object: Class DFMAbility.AbilityVoxelizationTestActor
// Size: 0x390 (Inherited: 0x370)
struct AAbilityVoxelizationTestActor : AActor
{
	DEFINE_UE_CLASS_HELPERS(AAbilityVoxelizationTestActor, "AbilityVoxelizationTestActor")

	uint8_t Pad_0x370[0xC]; // 0x370(0xC)
	float CheckInterval; // 0x37C(0x4)
	struct UAbilityVoxelizationComponent* AbilityVoxelizationComponent; // 0x380(0x8)
	float NextCheckTime; // 0x388(0x4)
	uint8_t Pad_0x38C[0x4]; // 0x38C(0x4)
};

// Object: Class DFMAbility.AbilityVoxelizationUtils
// Size: 0x28 (Inherited: 0x28)
struct UAbilityVoxelizationUtils : UObject
{
	DEFINE_UE_CLASS_HELPERS(UAbilityVoxelizationUtils, "AbilityVoxelizationUtils")

	// Object: Function DFMAbility.AbilityVoxelizationUtils.TransformToLocal_OBB
	// Flags: [Final|Native|Static|Private|HasOutParms|HasDefaults]
	// Offset: 0xc3dc378
	// Params: [ Num(8) Size(0x68) ]
	static void TransformToLocal_OBB(struct TArray<uint8_t>& OutVoxelData, const struct TArray<struct FVector>& VoxelArr, const float& SceneVoxelSize, const struct FVector& Center, const struct FVector& CheckSize, const struct FQuat& Rotation, const struct FVector& CheckVoxelSize, const struct FIntVector& VoxelCount);

	// Object: Function DFMAbility.AbilityVoxelizationUtils.TransformToLocal
	// Flags: [Final|Native|Static|Private|HasOutParms|HasDefaults]
	// Offset: 0xc3dc13c
	// Params: [ Num(6) Size(0x58) ]
	static void TransformToLocal(struct TArray<uint8_t>& OutVoxelData, const struct TArray<struct FVector>& VoxelArr, const float& SceneVoxelSize, const struct FBox& WorldBaseAABB, const struct FVector& CheckVoxelSize, const struct FIntVector& VoxelCount);

	// Object: Function DFMAbility.AbilityVoxelizationUtils.RotationAABB
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults]
	// Offset: 0xc3dc034
	// Params: [ Num(3) Size(0x4C) ]
	static struct FBox RotationAABB(const struct FBox& Bound, const struct FQuat& Rotation);

	// Object: Function DFMAbility.AbilityVoxelizationUtils.OBBVoxelization
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults]
	// Offset: 0xc3dbe08
	// Params: [ Num(7) Size(0x5D) ]
	static uint8_t OBBVoxelization(struct UObject* WorldContextObject, struct TArray<uint8_t>& OutVoxelData, struct FIntVector& OutVoxelCount, const struct FBox& Bound, const struct FQuat& Rotation, const struct FVector& CheckVoxelSize);

	// Object: Function DFMAbility.AbilityVoxelizationUtils.DoVoxelization
	// Flags: [Final|Native|Static|Private|HasOutParms|HasDefaults]
	// Offset: 0xc3dbb10
	// Params: [ Num(10) Size(0x7D) ]
	static uint8_t DoVoxelization(struct UObject* WorldContextObject, struct TArray<uint8_t>& OutVoxelData, struct FVector& OutOrigin, float& OutSceneVoxelSize, struct FIntVector& OutVoxelCount, struct FBox Bound, uint8_t bUseRotation, struct FQuat Rotation, struct FVector CheckVoxelSize);

	// Object: Function DFMAbility.AbilityVoxelizationUtils.BaseVoxelization
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults]
	// Offset: 0xc3db8e0
	// Params: [ Num(7) Size(0x51) ]
	static uint8_t BaseVoxelization(struct UObject* WorldContextObject, struct TArray<uint8_t>& OutVoxelData, struct FVector& OutOrigin, float& OutVoxelSize, struct FIntVector& OutVoxelCount, const struct FBox& Bound);

	// Object: Function DFMAbility.AbilityVoxelizationUtils.BaseTransformToLocal
	// Flags: [Final|Native|Static|Private|HasOutParms|HasDefaults]
	// Offset: 0xc3db6f4
	// Params: [ Num(5) Size(0x4C) ]
	static void BaseTransformToLocal(struct TArray<uint8_t>& OutVoxelData, const struct TArray<struct FVector>& VoxelArr, const float& SceneVoxelSize, const struct FBox& WorldBaseAABB, const struct FIntVector& VoxelCount);

	// Object: Function DFMAbility.AbilityVoxelizationUtils.AlignBoundToScene
	// Flags: [Final|Native|Static|Private|HasOutParms|HasDefaults]
	// Offset: 0xc3db5e8
	// Params: [ Num(3) Size(0x3C) ]
	static struct FBox AlignBoundToScene(const struct FBox& Bound, const float& SceneVoxelSize);

	// Object: Function DFMAbility.AbilityVoxelizationUtils.AABBVoxelization
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults]
	// Offset: 0xc3db40c
	// Params: [ Num(6) Size(0x4D) ]
	static uint8_t AABBVoxelization(struct UObject* WorldContextObject, struct TArray<uint8_t>& OutVoxelData, struct FIntVector& OutVoxelCount, const struct FBox& Bound, const struct FVector& CheckVoxelSize);
};

// Object: Class DFMAbility.AbilityVoxelizeFrozenAppearenceActor
// Size: 0x388 (Inherited: 0x370)
struct AAbilityVoxelizeFrozenAppearenceActor : AActor
{
	DEFINE_UE_CLASS_HELPERS(AAbilityVoxelizeFrozenAppearenceActor, "AbilityVoxelizeFrozenAppearenceActor")

	uint8_t Pad_0x370[0x8]; // 0x370(0x8)
	struct UTextureRenderTarget2D* VoxelRT; // 0x378(0x8)
	uint8_t Pad_0x380[0x8]; // 0x380(0x8)

	// Object: Function DFMAbility.AbilityVoxelizeFrozenAppearenceActor.UpdateFromVoxelData
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable]
	// Offset: 0xc3ddf94
	// Params: [ Num(7) Size(0x5D) ]
	uint8_t UpdateFromVoxelData(const struct TArray<uint8_t>& InVoxelValues, const struct FIntVector& InDimensions, const struct FVector& InWorldOrigin, const struct FVector& InVoxelSize, const struct FQuat& InRotation, const struct FVector& InMinLocal);

	// Object: Function DFMAbility.AbilityVoxelizeFrozenAppearenceActor.RequestUpdateVoxelData
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0xc3dded8
	// Params: [ Num(1) Size(0x10) ]
	void RequestUpdateVoxelData(const struct TArray<uint8_t>& InVoxelValues);

	// Object: Function DFMAbility.AbilityVoxelizeFrozenAppearenceActor.ReleaseRT
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xc3ddec4
	// Params: [ Num(0) Size(0x0) ]
	void ReleaseRT();

	// Object: Function DFMAbility.AbilityVoxelizeFrozenAppearenceActor.GetVoxelRT
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xc3ddea8
	// Params: [ Num(1) Size(0x8) ]
	struct UTextureRenderTarget2D* GetVoxelRT();

	// Object: Function DFMAbility.AbilityVoxelizeFrozenAppearenceActor.GetCurrentPhase
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xc3dde8c
	// Params: [ Num(1) Size(0x1) ]
	EFrozenAppearancePhase GetCurrentPhase();
};

// Object: Class DFMAbility.AbilityWaterEffectComponent
// Size: 0x1A8 (Inherited: 0xF8)
struct UAbilityWaterEffectComponent : UActorComponent
{
	DEFINE_UE_CLASS_HELPERS(UAbilityWaterEffectComponent, "AbilityWaterEffectComponent")

	EWaterState WaterState; // 0xF8(0x1)
	uint8_t Pad_0xF9[0x3]; // 0xF9(0x3)
	float DistanceToWaterSurface; // 0xFC(0x4)
	float LastWaterHeight; // 0x100(0x4)
	uint8_t Pad_0x104[0x4]; // 0x104(0x4)
	struct TArray<struct FWaterEffectFX> WaterFXList; // 0x108(0x10)
	uint8_t Pad_0x118[0x8C]; // 0x118(0x8C)
	EWaterState RepWaterState; // 0x1A4(0x1)
	uint8_t Pad_0x1A5[0x3]; // 0x1A5(0x3)

	// Object: Function DFMAbility.AbilityWaterEffectComponent.OnWaterStateRep
	// Flags: [Final|Native|Private]
	// Offset: 0xc3de448
	// Params: [ Num(0) Size(0x0) ]
	void OnWaterStateRep();

	// Object: Function DFMAbility.AbilityWaterEffectComponent.BroadcastWaterStateChanged
	// Flags: [Net|NetReliableNative|Event|NetMulticast|Public]
	// Offset: 0xc3de398
	// Params: [ Num(1) Size(0x8) ]
	void BroadcastWaterStateChanged(struct FWaterEffectBroadcastMsg Msg);
};

// Object: Class DFMAbility.DFMAbilityWeaponThrowableBullet
// Size: 0x1890 (Inherited: 0x1890)
struct ADFMAbilityWeaponThrowableBullet : AAbilityWeaponThrowableBullet
{
	DEFINE_UE_CLASS_HELPERS(ADFMAbilityWeaponThrowableBullet, "DFMAbilityWeaponThrowableBullet")

	// Object: Function DFMAbility.DFMAbilityWeaponThrowableBullet.DestroyLevelActorSpawnBySelf
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xc432128
	// Params: [ Num(2) Size(0x9) ]
	void DestroyLevelActorSpawnBySelf(struct AActor* SelfActor, EAbilityLevelActorType ActorType);
};

// Object: Class DFMAbility.AbilityWeaponBulletGrenade
// Size: 0x1890 (Inherited: 0x1890)
struct AAbilityWeaponBulletGrenade : ADFMAbilityWeaponThrowableBullet
{
	DEFINE_UE_CLASS_HELPERS(AAbilityWeaponBulletGrenade, "AbilityWeaponBulletGrenade")

	uint8_t bStopAllMove : 1; // 0x1884(0x1), Mask(0x1)

	// Object: Function DFMAbility.AbilityWeaponBulletGrenade.InitBulletGrenade
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable]
	// Offset: 0xc3de518
	// Params: [ Num(3) Size(0x20) ]
	void InitBulletGrenade(struct AActor* GrenadeOwner, const struct FVector& FireStartLocation, const struct FVector& InitVelocity);

	// Object: Function DFMAbility.AbilityWeaponBulletGrenade.BP_OnExplosion
	// Flags: [Event|Public|BlueprintCallable|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(0) Size(0x0) ]
	void BP_OnExplosion();
};

// Object: Class DFMAbility.AbilityWeaponBulletGrenadeC4
// Size: 0x16E0 (Inherited: 0x16D0)
struct AAbilityWeaponBulletGrenadeC4 : AWeaponThrowableBulletProjectile
{
	DEFINE_UE_CLASS_HELPERS(AAbilityWeaponBulletGrenadeC4, "AbilityWeaponBulletGrenadeC4")

	struct FName ImpactAudioKey; // 0x16C4(0x8)
	struct FName CountDownAudioKey; // 0x16CC(0x8)

	// Object: Function DFMAbility.AbilityWeaponBulletGrenadeC4.BP_StickyToTarget
	// Flags: [Event|Public|BlueprintCallable|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(0) Size(0x0) ]
	void BP_StickyToTarget();

	// Object: Function DFMAbility.AbilityWeaponBulletGrenadeC4.BP_MoveIntoWater
	// Flags: [Event|Public|BlueprintCallable|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(0) Size(0x0) ]
	void BP_MoveIntoWater();
};

// Object: Class DFMAbility.AbilityWeaponBulletGrenadeMine
// Size: 0x18A0 (Inherited: 0x1890)
struct AAbilityWeaponBulletGrenadeMine : AAbilityWeaponBulletGrenade
{
	DEFINE_UE_CLASS_HELPERS(AAbilityWeaponBulletGrenadeMine, "AbilityWeaponBulletGrenadeMine")

	struct ADFMAbilitySuppressionMine* AbilitySuppressionMine; // 0x1888(0x8)
	uint8_t bIsCheckMine : 1; // 0x1890(0x1), Mask(0x1)
	uint8_t BitPad_0x1898_1 : 7; // 0x1898(0x1)
	uint8_t Pad_0x1899[0x7]; // 0x1899(0x7)

	// Object: Function DFMAbility.AbilityWeaponBulletGrenadeMine.OnRep_AbilitySuppressionMine
	// Flags: [Final|Native|Protected]
	// Offset: 0xc3de714
	// Params: [ Num(0) Size(0x0) ]
	void OnRep_AbilitySuppressionMine();

	// Object: Function DFMAbility.AbilityWeaponBulletGrenadeMine.BPSetSpawnMineActor
	// Flags: [Final|Native|Protected|BlueprintCallable]
	// Offset: 0xc3de670
	// Params: [ Num(1) Size(0x8) ]
	void BPSetSpawnMineActor(struct ADFMAbilitySuppressionMine* MineActor);
};

// Object: Class DFMAbility.AbilityWeaponThrowableC204Interference
// Size: 0x19C0 (Inherited: 0x1890)
struct AAbilityWeaponThrowableC204Interference : AAbilityWeaponThrowableBullet
{
	DEFINE_UE_CLASS_HELPERS(AAbilityWeaponThrowableC204Interference, "AbilityWeaponThrowableC204Interference")

	struct FC204InterferenceData InterferenceData; // 0x1890(0x98)
	float ExplodeTimeSeconds; // 0x1928(0x4)
	uint8_t Pad_0x192C[0x4]; // 0x192C(0x4)
	struct FAvatarFXOperateHandle ChangeUpFXHandle; // 0x1930(0x10)
	struct FAvatarFXOperateHandle ExplosionFXHandle; // 0x1940(0x10)
	struct FAvatarFXOperateHandle RangeFXHandle; // 0x1950(0x10)
	struct FAvatarFXOperateHandle DestroyFXHandle; // 0x1960(0x10)
	struct FTimerHandle DestroyTimerHandle; // 0x1970(0x8)
	uint8_t bHasBeginDestroy : 1; // 0x1978(0x1), Mask(0x1)
	uint8_t BitPad_0x1978_1 : 7; // 0x1978(0x1)
	uint8_t bHasBounce : 1; // 0x1979(0x1), Mask(0x1)
	uint8_t BitPad_0x1979_1 : 7; // 0x1979(0x1)
	uint8_t bHasStop : 1; // 0x197A(0x1), Mask(0x1)
	uint8_t BitPad_0x197A_1 : 7; // 0x197A(0x1)
	uint8_t Pad_0x197B[0x5]; // 0x197B(0x5)
	uint64_t AnimInstLoadId; // 0x1980(0x8)
	uint8_t Pad_0x1988[0x24]; // 0x1988(0x24)
	uint8_t bCanBeEmp : 1; // 0x19AC(0x1), Mask(0x1)
	uint8_t BitPad_0x19AC_1 : 7; // 0x19AC(0x1)
	uint8_t Pad_0x19AD[0x3]; // 0x19AD(0x3)
	struct FTimerHandle VoiceTimerHandle; // 0x19B0(0x8)
	uint8_t Pad_0x19B8[0x8]; // 0x19B8(0x8)

	// Object: Function DFMAbility.AbilityWeaponThrowableC204Interference.ShowDestroyEffect
	// Flags: [Final|Native|Protected]
	// Offset: 0xc3de948
	// Params: [ Num(0) Size(0x0) ]
	void ShowDestroyEffect();

	// Object: Function DFMAbility.AbilityWeaponThrowableC204Interference.ResetPlayHitVoice
	// Flags: [Final|Native|Protected]
	// Offset: 0xc3de934
	// Params: [ Num(0) Size(0x0) ]
	void ResetPlayHitVoice();

	// Object: Function DFMAbility.AbilityWeaponThrowableC204Interference.PlayHitVoice
	// Flags: [Final|Native|Protected]
	// Offset: 0xc3de920
	// Params: [ Num(0) Size(0x0) ]
	void PlayHitVoice();

	// Object: Function DFMAbility.AbilityWeaponThrowableC204Interference.OnAnimInstLoaded
	// Flags: [Final|Native|Protected]
	// Offset: 0xc3de850
	// Params: [ Num(1) Size(0x10) ]
	void OnAnimInstLoaded(struct TArray<struct FSoftObjectPath> InPaths);

	// Object: Function DFMAbility.AbilityWeaponThrowableC204Interference.MulticastShowDestroyEffect
	// Flags: [Net|NetReliableNative|Event|NetMulticast|Protected]
	// Offset: 0xc3de834
	// Params: [ Num(0) Size(0x0) ]
	void MulticastShowDestroyEffect();

	// Object: Function DFMAbility.AbilityWeaponThrowableC204Interference.DestroySelf
	// Flags: [Final|Native|Protected]
	// Offset: 0xc3de820
	// Params: [ Num(0) Size(0x0) ]
	void DestroySelf();

	// Object: Function DFMAbility.AbilityWeaponThrowableC204Interference.CountHitData
	// Flags: [Final|Native|Protected]
	// Offset: 0xc3de77c
	// Params: [ Num(1) Size(0x8) ]
	void CountHitData(struct AActor* Target);

	// Object: Function DFMAbility.AbilityWeaponThrowableC204Interference.BP_ProjectileExplode
	// Flags: [Event|Protected|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(0) Size(0x0) ]
	void BP_ProjectileExplode();
};

// Object: Class DFMAbility.DFMAbilityActor
// Size: 0x4F8 (Inherited: 0x3D8)
struct ADFMAbilityActor : AGPAbilityActor
{
	DEFINE_UE_CLASS_HELPERS(ADFMAbilityActor, "DFMAbilityActor")

	uint8_t Pad_0x3D8[0x8]; // 0x3D8(0x8)
	struct TWeakObjectPtr<struct ADFMCharacter> AbilityActorOwner; // 0x3E0(0x8)
	int32_t SinglePlayerMaxExistNum; // 0x3E8(0x4)
	int32_t AllCampNearbyMaxExistNum; // 0x3EC(0x4)
	float AllCampNearbyCheckRad; // 0x3F0(0x4)
	EBattleFieldPropType AbilityActorType; // 0x3F4(0x1)
	uint8_t Pad_0x3F5[0x3]; // 0x3F5(0x3)
	struct FName WaterRippleID; // 0x3F8(0x8)
	struct UDFMInteractiveWaterComponent* RippleEffectComponent; // 0x400(0x8)
	struct USkeletalMeshComponent* MainMesh; // 0x408(0x8)
	uint8_t bUseWeaponSkinData : 1; // 0x410(0x1), Mask(0x1)
	uint8_t BitPad_0x410_1 : 7; // 0x410(0x1)
	uint8_t Pad_0x411[0x3]; // 0x411(0x3)
	struct FName ResourceKey; // 0x414(0x8)
	uint8_t bUse1PMeshOnFPP : 1; // 0x41C(0x1), Mask(0x1)
	uint8_t BitPad_0x41C_1 : 7; // 0x41C(0x1)
	uint8_t Pad_0x41D[0x3]; // 0x41D(0x3)
	uint64_t MeshAsyncRequestId; // 0x420(0x8)
	uint64_t MaterialAsyncRequestId; // 0x428(0x8)
	struct FTimerHandle ElecDeviceMarkerTimerHandle; // 0x430(0x8)
	struct UAbilityElectricDeviceMapIconViewController* ElectricDeviceMapIconViewController; // 0x438(0x8)
	uint32_t OutLineItemID; // 0x440(0x4)
	uint8_t Pad_0x444[0x4]; // 0x444(0x4)
	struct USkeletalMeshComponent* OutLineMeshComp; // 0x448(0x8)
	struct FName OutLineMeshTag; // 0x450(0x8)
	struct TMap<struct AGPCharacter*, uint8_t> MarkerMap; // 0x458(0x50)
	struct TMap<struct AGPCharacter*, struct FTimerHandle> MarkerTimerMap; // 0x4A8(0x50)

	// Object: Function DFMAbility.DFMAbilityActor.RemoveElecDeviceMarker
	// Flags: [Native|Public]
	// Offset: 0xc3fb878
	// Params: [ Num(0) Size(0x0) ]
	void RemoveElecDeviceMarker();

	// Object: Function DFMAbility.DFMAbilityActor.RemoveC204PassiveMarker
	// Flags: [Native|Public]
	// Offset: 0xc3fb7cc
	// Params: [ Num(1) Size(0x8) ]
	void RemoveC204PassiveMarker(struct AGPCharacter* SourceChar);

	// Object: Function DFMAbility.DFMAbilityActor.OnSetSkinResult
	// Flags: [Native|Protected]
	// Offset: 0xc3fb718
	// Params: [ Num(1) Size(0x1) ]
	void OnSetSkinResult(uint8_t bReturnValue);

	// Object: Function DFMAbility.DFMAbilityActor.OnRep_OutLineItemID
	// Flags: [Native|Public]
	// Offset: 0xc3fb6fc
	// Params: [ Num(0) Size(0x0) ]
	void OnRep_OutLineItemID();

	// Object: Function DFMAbility.DFMAbilityActor.IsUnderWater
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0xc3fb6bc
	// Params: [ Num(1) Size(0x1) ]
	uint8_t IsUnderWater();

	// Object: Function DFMAbility.DFMAbilityActor.IsC204PassiveMarkerValid
	// Flags: [Native|Public]
	// Offset: 0xc3fb604
	// Params: [ Num(2) Size(0x9) ]
	uint8_t IsC204PassiveMarkerValid(struct AGPCharacter* SourceChar);

	// Object: Function DFMAbility.DFMAbilityActor.InitSkinInternal
	// Flags: [Native|Protected|HasOutParms]
	// Offset: 0xc3fb3c0
	// Params: [ Num(1) Size(0x370) ]
	void InitSkinInternal(const struct FCharacterHeroResourceAttachMeshData& SkinData);

	// Object: Function DFMAbility.DFMAbilityActor.GetWaterSurfaceDistance
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xc3fb38c
	// Params: [ Num(1) Size(0x4) ]
	float GetWaterSurfaceDistance();

	// Object: Function DFMAbility.DFMAbilityActor.ClientAddElecDeviceMarker
	// Flags: [Net|NetReliableNative|Event|NetMulticast|Public]
	// Offset: 0xc3fb268
	// Params: [ Num(3) Size(0x10) ]
	void ClientAddElecDeviceMarker(struct AGPCharacter* DetectOwner, int32_t MarkerType, float MarkerTime);

	// Object: Function DFMAbility.DFMAbilityActor.AddElecDeviceMarker
	// Flags: [Native|Public]
	// Offset: 0xc3fb180
	// Params: [ Num(2) Size(0x8) ]
	void AddElecDeviceMarker(int32_t MarkerType, float MarkerTime);
};

// Object: Class DFMAbility.DFMAbilityLevelActor
// Size: 0x588 (Inherited: 0x4F8)
struct ADFMAbilityLevelActor : ADFMAbilityActor
{
	DEFINE_UE_CLASS_HELPERS(ADFMAbilityLevelActor, "DFMAbilityLevelActor")

	uint8_t Pad_0x4F8[0x2C]; // 0x4F8(0x2C)
	EAbilityLevelActorType AbilityLevelActorType; // 0x524(0x1)
	uint8_t bAutoAttachToSurface : 1; // 0x525(0x1), Mask(0x1)
	uint8_t BitPad_0x525_1 : 7; // 0x525(0x1)
	uint8_t Pad_0x526[0x2]; // 0x526(0x2)
	float AttachToSurfaceDis; // 0x528(0x4)
	struct FName DeadPacicle; // 0x52C(0x8)
	uint8_t Pad_0x534[0x4]; // 0x534(0x4)
	struct UDFMSkeletalMeshComponent* MeshComponent; // 0x538(0x8)
	struct UBoxComponent* CapsuleComponent; // 0x540(0x8)
	uint8_t CanHurtBySelf : 1; // 0x548(0x1), Mask(0x1)
	uint8_t BitPad_0x548_1 : 7; // 0x548(0x1)
	uint8_t CanHurtByTeamMate : 1; // 0x549(0x1), Mask(0x1)
	uint8_t BitPad_0x549_1 : 7; // 0x549(0x1)
	uint8_t CanHurtByCampMate : 1; // 0x54A(0x1), Mask(0x1)
	uint8_t BitPad_0x54A_1 : 7; // 0x54A(0x1)
	uint8_t Pad_0x54B[0x1]; // 0x54B(0x1)
	float Health; // 0x54C(0x4)
	int32_t CampId; // 0x550(0x4)
	int32_t TeamID; // 0x554(0x4)
	int32_t CustomValue; // 0x558(0x4)
	uint8_t IsAlive : 1; // 0x55C(0x1), Mask(0x1)
	uint8_t BitPad_0x55C_1 : 7; // 0x55C(0x1)
	uint8_t Pad_0x55D[0x3]; // 0x55D(0x3)
	uint64_t OwnerPlayerId; // 0x560(0x8)
	uint8_t ReplaceBySameOwner : 1; // 0x568(0x1), Mask(0x1)
	uint8_t BitPad_0x568_1 : 7; // 0x568(0x1)
	uint8_t Pad_0x569[0x3]; // 0x569(0x3)
	float DelayDestroyTime; // 0x56C(0x4)
	struct AActor* OwnerActor; // 0x570(0x8)
	uint8_t Pad_0x578[0x8]; // 0x578(0x8)
	uint8_t DoStartDestroySelf : 1; // 0x580(0x1), Mask(0x1)
	uint8_t BitPad_0x580_1 : 7; // 0x580(0x1)
	uint8_t Pad_0x581[0x7]; // 0x581(0x7)

	// Object: Function DFMAbility.DFMAbilityLevelActor.TryStickyToThrowAttachable
	// Flags: [Final|Native|Protected|HasOutParms]
	// Offset: 0xc418b10
	// Params: [ Num(2) Size(0x89) ]
	uint8_t TryStickyToThrowAttachable(const struct FHitResult& ImpactResult);

	// Object: Function DFMAbility.DFMAbilityLevelActor.StickyToTarget
	// Flags: [Final|Native|Protected|HasOutParms|BlueprintCallable]
	// Offset: 0xc418a48
	// Params: [ Num(1) Size(0x88) ]
	void StickyToTarget(const struct FHitResult& ImpactResult);

	// Object: Function DFMAbility.DFMAbilityLevelActor.Rep_Destroy
	// Flags: [Final|Native|Protected]
	// Offset: 0xf648c7c
	// Params: [ Num(0) Size(0x0) ]
	void Rep_Destroy();
};

// Object: Class DFMAbility.ADS
// Size: 0x6C8 (Inherited: 0x588)
struct AADS : ADFMAbilityLevelActor
{
	DEFINE_UE_CLASS_HELPERS(AADS, "ADS")

	uint8_t Pad_0x588[0x28]; // 0x588(0x28)
	float ProtectedRange; // 0x5B0(0x4)
	float ProtectedTime; // 0x5B4(0x4)
	float ProtectedCoolDown; // 0x5B8(0x4)
	float ProtectedRemainCount; // 0x5BC(0x4)
	float ProtectedRemainCounter; // 0x5C0(0x4)
	float TickInterval; // 0x5C4(0x4)
	struct FVector FirePointHeight; // 0x5C8(0xC)
	uint8_t Pad_0x5D4[0x4]; // 0x5D4(0x4)
	struct TArray<struct AGPWeaponBulletBase*> RegistedProjectileArray; // 0x5D8(0x10)
	uint8_t Pad_0x5E8[0x10]; // 0x5E8(0x10)
	struct UGPSkeletalMeshComponent* SkeletalMeshComponent; // 0x5F8(0x8)
	float InnerRadius; // 0x600(0x4)
	float OutterRadius; // 0x604(0x4)
	int32_t InnerAttackerValueID; // 0x608(0x4)
	int32_t OutterAttackerValueID; // 0x60C(0x4)
	float EMPCollDownTime; // 0x610(0x4)
	float MarkerOffset; // 0x614(0x4)
	uint8_t bBlockStinger : 1; // 0x618(0x1), Mask(0x1)
	uint8_t BitPad_0x618_1 : 7; // 0x618(0x1)
	uint8_t Pad_0x619[0x7]; // 0x619(0x7)
	struct UGPAudioEventAsset* DeployAudio; // 0x620(0x8)
	struct UGPAudioEventAsset* DestroyAudio; // 0x628(0x8)
	struct FName DestroyEffectId; // 0x630(0x8)
	ETacticalEquipmentMarkerType TacticalEquipmentMarker; // 0x638(0x1)
	uint8_t Pad_0x639[0x7]; // 0x639(0x7)
	struct UAnimationAsset* AnimationToPlay; // 0x640(0x8)
	struct UAnimationAsset* PlaceAnimation; // 0x648(0x8)
	uint8_t Pad_0x650[0x8]; // 0x650(0x8)
	struct USphereComponent* SphereComponent; // 0x658(0x8)
	struct UAbilityADSMapIconViewController* IconCtrl; // 0x660(0x8)
	struct TSoftObjectPtr<UGPAudioEventAsset> InterceptAudio; // 0x668(0x28)
	struct TSoftObjectPtr<UGPAudioEventAsset> BeIntercepted2DAudio; // 0x690(0x28)
	struct FName InterceptEffectId; // 0x6B8(0x8)
	struct FName FireEffectId; // 0x6C0(0x8)

	// Object: Function DFMAbility.ADS.OnProjectileIntercepted
	// Flags: [Net|NetReliableNative|Event|NetMulticast|Public|HasDefaults]
	// Offset: 0xc3df090
	// Params: [ Num(2) Size(0x18) ]
	void OnProjectileIntercepted(struct FVector ProjectilePos, struct AActor* BulletCreator);

	// Object: Function DFMAbility.ADS.OnCharacterExpertIdChanged
	// Flags: [Final|Native|Public]
	// Offset: 0xc3defb4
	// Params: [ Num(2) Size(0x8) ]
	void OnCharacterExpertIdChanged(int32_t OldExpertId, int32_t CurExpertId);

	// Object: Function DFMAbility.ADS.HasBlockBetweenADSAndProjConsiderVehicle
	// Flags: [Final|Native|Public|HasDefaults|Const]
	// Offset: 0xc3dee8c
	// Params: [ Num(4) Size(0x21) ]
	uint8_t HasBlockBetweenADSAndProjConsiderVehicle(struct AGPWeaponBulletBase* InBullet, struct FVector Start, struct FVector End);

	// Object: Function DFMAbility.ADS.HasBlockBetweenADSAndProj
	// Flags: [Final|Native|Public|HasDefaults|Const]
	// Offset: 0xc3ded64
	// Params: [ Num(4) Size(0x21) ]
	uint8_t HasBlockBetweenADSAndProj(struct AGPWeaponBulletBase* InBullet, struct FVector Start, struct FVector End);

	// Object: Function DFMAbility.ADS.DoDefenseAction
	// Flags: [Native|Public|HasOutParms]
	// Offset: 0xc3dec4c
	// Params: [ Num(3) Size(0x91) ]
	uint8_t DoDefenseAction(struct AGPWeaponBulletBase* InBullet, const struct FHitResult& InOverlapResult);

	// Object: Function DFMAbility.ADS.ClientResetProtectedCoolDownTimer
	// Flags: [Net|NetReliableNative|Event|NetMulticast|Public]
	// Offset: 0xc3dec30
	// Params: [ Num(0) Size(0x0) ]
	void ClientResetProtectedCoolDownTimer();

	// Object: Function DFMAbility.ADS.ClientNotifyEMPEffect
	// Flags: [Net|NetReliableNative|Event|NetMulticast|Public]
	// Offset: 0xc3deb84
	// Params: [ Num(1) Size(0x4) ]
	void ClientNotifyEMPEffect(float EMPTime);
};

// Object: Class DFMAbility.AIAlertRPC
// Size: 0x3F8 (Inherited: 0x370)
struct AAIAlertRPC : AActor
{
	DEFINE_UE_CLASS_HELPERS(AAIAlertRPC, "AIAlertRPC")

	uint8_t Pad_0x370[0x8]; // 0x370(0x8)
	float TeammateActiveRange; // 0x378(0x4)
	struct FAlertMarkConfig AlertMarkConfig; // 0x37C(0x14)
	struct TArray<struct FConflictZoneInfo> ConflictZoneInfoArray; // 0x390(0x10)
	struct FTimerHandle UpdateTimerHandle; // 0x3A0(0x8)
	struct TMap<struct FString, struct UMapIconViewController*> ClientConflictZoneControllerMap; // 0x3A8(0x50)

	// Object: Function DFMAbility.AIAlertRPC.SpawnAIAlertRPC
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0xc3df5f8
	// Params: [ Num(2) Size(0x10) ]
	static struct AAIAlertRPC* SpawnAIAlertRPC(struct AActor* OwnerActor);

	// Object: Function DFMAbility.AIAlertRPC.OnRep_ConflictZoneInfoArray
	// Flags: [Final|Native|Protected]
	// Offset: 0xc3df5e4
	// Params: [ Num(0) Size(0x0) ]
	void OnRep_ConflictZoneInfoArray();

	// Object: Function DFMAbility.AIAlertRPC.MulticastUpdateConflictZones
	// Flags: [Net|Native|Event|NetMulticast|Public]
	// Offset: 0xc3df530
	// Params: [ Num(1) Size(0x10) ]
	void MulticastUpdateConflictZones(struct TArray<struct FConflictZoneInfo> InConflictZoneInfoArray);

	// Object: Function DFMAbility.AIAlertRPC.FindAIAlertRPC
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0xc3df48c
	// Params: [ Num(2) Size(0x10) ]
	static struct AAIAlertRPC* FindAIAlertRPC(struct AActor* OwnerActor);

	// Object: Function DFMAbility.AIAlertRPC.ClientShowTips
	// Flags: [Net|NetReliableNative|Event|Public|NetClient]
	// Offset: 0xc3df3d8
	// Params: [ Num(1) Size(0x10) ]
	void ClientShowTips(struct FString TipsBuffer);

	// Object: Function DFMAbility.AIAlertRPC.ClientPlayAlertSubtitle
	// Flags: [Net|Native|Event|NetMulticast|Public]
	// Offset: 0xc3df2b0
	// Params: [ Num(2) Size(0x68) ]
	void ClientPlayAlertSubtitle(struct FAIAlertSubtitleInfo SubtitleInfo, struct AActor* SpeakerActor);
};

// Object: Class DFMAbility.AnimNotify_BionicSpy
// Size: 0x38 (Inherited: 0x38)
struct UAnimNotify_BionicSpy : UAnimNotify
{
	DEFINE_UE_CLASS_HELPERS(UAnimNotify_BionicSpy, "AnimNotify_BionicSpy")
};

// Object: Class DFMAbility.AnimNotifyState_HideBones
// Size: 0x40 (Inherited: 0x30)
struct UAnimNotifyState_HideBones : UAnimNotifyState
{
	DEFINE_UE_CLASS_HELPERS(UAnimNotifyState_HideBones, "AnimNotifyState_HideBones")

	struct TArray<struct FName> BoneNames; // 0x30(0x10)
};

// Object: Class DFMAbility.ArtilleryShell
// Size: 0x4D0 (Inherited: 0x370)
struct AArtilleryShell : AActor
{
	DEFINE_UE_CLASS_HELPERS(AArtilleryShell, "ArtilleryShell")

	uint8_t Pad_0x370[0x18]; // 0x370(0x18)
	struct UArtilleryShellProjectileSphereComponent* SceneRoot; // 0x388(0x8)
	struct UArtilleryShellProjectileMovementComponent* ProjectileMovementComponent; // 0x390(0x8)
	struct FArtilleryShellMovementParameter MovementParameter; // 0x398(0x48)
	int64_t ExplodeAttackerValueId; // 0x3E0(0x8)
	uint8_t bExplosionEffectDirUseImpactNormal : 1; // 0x3E8(0x1), Mask(0x1)
	uint8_t BitPad_0x3E8_1 : 7; // 0x3E8(0x1)
	uint8_t bGetHitFXIndexOnClient : 1; // 0x3E9(0x1), Mask(0x1)
	uint8_t BitPad_0x3E9_1 : 7; // 0x3E9(0x1)
	uint8_t bReturnFaceIndex_GetHitFXIndex : 1; // 0x3EA(0x1), Mask(0x1)
	uint8_t BitPad_0x3EA_1 : 7; // 0x3EA(0x1)
	uint8_t Pad_0x3EB[0x1]; // 0x3EB(0x1)
	float GetHitFXIndex_Offset; // 0x3EC(0x4)
	struct TArray<struct FArtilleryShellHitFXSurfaceAttribute> HitFXSurfaceAttributes; // 0x3F0(0x10)
	struct TMap<struct FName, struct FRotator> HitEffectRotatorOffsetMap; // 0x400(0x50)
	struct FName ShellTrailEffectID; // 0x450(0x8)
	ECraterSizeType CraterSizeID; // 0x458(0x1)
	uint8_t Pad_0x459[0x3]; // 0x459(0x3)
	float DelayDisappearTime; // 0x45C(0x4)
	uint8_t bModifyDamage : 1; // 0x460(0x1), Mask(0x1)
	uint8_t BitPad_0x460_1 : 7; // 0x460(0x1)
	uint8_t Pad_0x461[0x3]; // 0x461(0x3)
	float TeamMateDamageRatio; // 0x464(0x4)
	float TeamMateVehicleDamageRatio; // 0x468(0x4)
	float KnockDownRadius; // 0x46C(0x4)
	EExplosionType ExplosionType; // 0x470(0x1)
	uint8_t Pad_0x471[0x3]; // 0x471(0x3)
	float CameraShakeRadius; // 0x474(0x4)
	struct FName ScreenEffectName; // 0x478(0x8)
	float ScreenEffectRadius; // 0x480(0x4)
	uint8_t bEnableOptMoveTick : 1; // 0x484(0x1), Mask(0x1)
	uint8_t BitPad_0x484_1 : 7; // 0x484(0x1)
	uint8_t OptMoveTickFrame; // 0x485(0x1)
	uint8_t Pad_0x486[0x12]; // 0x486(0x12)
	struct UFXResourceContainerComponent* ShellTrailEffectContainer; // 0x498(0x8)
	uint8_t Pad_0x4A0[0x5]; // 0x4A0(0x5)
	uint8_t bCheckUnderWater : 1; // 0x4A5(0x1), Mask(0x1)
	uint8_t BitPad_0x4A5_1 : 7; // 0x4A5(0x1)
	uint8_t Pad_0x4A6[0x2]; // 0x4A6(0x2)
	float UnderWaterZ; // 0x4A8(0x4)
	float bUseWave; // 0x4AC(0x4)
	struct FName InToWaterEffectID; // 0x4B0(0x8)
	uint8_t Pad_0x4B8[0x18]; // 0x4B8(0x18)

	// Object: Function DFMAbility.ArtilleryShell.UpdateUnderWater
	// Flags: [Final|Native|Protected]
	// Offset: 0xc3e0244
	// Params: [ Num(0) Size(0x0) ]
	void UpdateUnderWater();

	// Object: Function DFMAbility.ArtilleryShell.UpdateDynamicCollisionElement
	// Flags: [Native|Public]
	// Offset: 0xc3e0228
	// Params: [ Num(0) Size(0x0) ]
	void UpdateDynamicCollisionElement();

	// Object: Function DFMAbility.ArtilleryShell.StopShellTrailEffect
	// Flags: [Final|Native|Public]
	// Offset: 0xc3e0214
	// Params: [ Num(0) Size(0x0) ]
	void StopShellTrailEffect();

	// Object: Function DFMAbility.ArtilleryShell.SpawnExplosionActor
	// Flags: [Native|Public|HasDefaults]
	// Offset: 0xc3e012c
	// Params: [ Num(2) Size(0x18) ]
	void SpawnExplosionActor(struct FVector Location, struct FRotator Rotator);

	// Object: Function DFMAbility.ArtilleryShell.PlayShellTrailEffect
	// Flags: [Final|Native|Public]
	// Offset: 0xc3e0118
	// Params: [ Num(0) Size(0x0) ]
	void PlayShellTrailEffect();

	// Object: Function DFMAbility.ArtilleryShell.PlayScreenEffect
	// Flags: [Final|Native|Public|HasDefaults]
	// Offset: 0xc3e0038
	// Params: [ Num(2) Size(0x10) ]
	void PlayScreenEffect(struct FVector Location, float Distance);

	// Object: Function DFMAbility.ArtilleryShell.PlayExplosionEffect
	// Flags: [Final|Native|Public|HasDefaults]
	// Offset: 0xc3dff1c
	// Params: [ Num(3) Size(0x1C) ]
	void PlayExplosionEffect(struct FVector Location, struct FRotator Rotator, int32_t HitFXIndex);

	// Object: Function DFMAbility.ArtilleryShell.PlayCameraShake
	// Flags: [Final|Native|Public|HasDefaults]
	// Offset: 0xc3dfe3c
	// Params: [ Num(2) Size(0x10) ]
	void PlayCameraShake(struct FVector Location, float Distance);

	// Object: Function DFMAbility.ArtilleryShell.OnShellHitBP
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(0) Size(0x0) ]
	void OnShellHitBP();

	// Object: Function DFMAbility.ArtilleryShell.OnShellHit
	// Flags: [Final|Native|Public|HasOutParms]
	// Offset: 0xc3dfd74
	// Params: [ Num(1) Size(0x88) ]
	void OnShellHit(const struct FHitResult& ImpactResult);

	// Object: Function DFMAbility.ArtilleryShell.OnRep_MovementParameter
	// Flags: [Final|Native|Public]
	// Offset: 0xc3dfd60
	// Params: [ Num(0) Size(0x0) ]
	void OnRep_MovementParameter();

	// Object: Function DFMAbility.ArtilleryShell.NeedSpawnExplosionActor
	// Flags: [Native|Public]
	// Offset: 0xc3dfd20
	// Params: [ Num(1) Size(0x1) ]
	uint8_t NeedSpawnExplosionActor();

	// Object: Function DFMAbility.ArtilleryShell.MulticastShellExploded
	// Flags: [Net|NetReliableNative|Event|NetMulticast|Public|HasDefaults]
	// Offset: 0xc3dfbfc
	// Params: [ Num(3) Size(0x1C) ]
	void MulticastShellExploded(struct FVector Location, struct FRotator Rotator, int32_t HitFXIndex);

	// Object: Function DFMAbility.ArtilleryShell.IsUnderWater
	// Flags: [Final|Native|Protected|HasDefaults]
	// Offset: 0xc3dfb4c
	// Params: [ Num(2) Size(0xD) ]
	uint8_t IsUnderWater(struct FVector pos);

	// Object: Function DFMAbility.ArtilleryShell.GetHitFXSurfaceAttributeIndexOnClient
	// Flags: [Final|Native|Public|HasDefaults]
	// Offset: 0xc3dfaa0
	// Params: [ Num(2) Size(0x10) ]
	int32_t GetHitFXSurfaceAttributeIndexOnClient(struct FVector Location);

	// Object: Function DFMAbility.ArtilleryShell.GetHitFXSurfaceAttributeIndex
	// Flags: [Final|Native|Public]
	// Offset: 0xc3df9b0
	// Params: [ Num(3) Size(0x8) ]
	int32_t GetHitFXSurfaceAttributeIndex(EPhysicalSurface HitSurfaceType, uint8_t bIsHitLandscape);

	// Object: Function DFMAbility.ArtilleryShell.DestroySelf
	// Flags: [Final|Native|Protected]
	// Offset: 0xc3df99c
	// Params: [ Num(0) Size(0x0) ]
	void DestroySelf();

	// Object: Function DFMAbility.ArtilleryShell.ClearDynmicCollisionElement
	// Flags: [Native|Public]
	// Offset: 0xc3df980
	// Params: [ Num(0) Size(0x0) ]
	void ClearDynmicCollisionElement();

	// Object: Function DFMAbility.ArtilleryShell.BP_GetTrailEffectSocket
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(1) Size(0x8) ]
	struct USceneComponent* BP_GetTrailEffectSocket();

	// Object: Function DFMAbility.ArtilleryShell.BP_GetShellObj
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(1) Size(0x8) ]
	struct USceneComponent* BP_GetShellObj();

	// Object: Function DFMAbility.ArtilleryShell.BP_GetDynmicCollisionBox
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(1) Size(0x8) ]
	struct UBoxComponent* BP_GetDynmicCollisionBox();
};

// Object: Class DFMAbility.ArtilleryShell_GuidedMissle
// Size: 0x578 (Inherited: 0x4D0)
struct AArtilleryShell_GuidedMissle : AArtilleryShell
{
	DEFINE_UE_CLASS_HELPERS(AArtilleryShell_GuidedMissle, "ArtilleryShell_GuidedMissle")

	struct UGPAudioEventAsset* AlertStartAudioEvent; // 0x4D0(0x8)
	struct UGPAudioEventAsset* AlertStopAudioEvent; // 0x4D8(0x8)
	float AlertAudioDelay; // 0x4E0(0x4)
	float AlertAudioDuration; // 0x4E4(0x4)
	struct UGPAudioEventAsset* FlyStartAudioEvent; // 0x4E8(0x8)
	struct UGPAudioEventAsset* FlyStopAudioEvent; // 0x4F0(0x8)
	float FlyAudioDelay; // 0x4F8(0x4)
	uint8_t Pad_0x4FC[0x4]; // 0x4FC(0x4)
	struct UGPAudioEventAsset* InCommingAudioEvent; // 0x500(0x8)
	float InCommingAudioHeight; // 0x508(0x4)
	struct FName LightEffectID; // 0x50C(0x8)
	struct FVector LightEffectScale; // 0x514(0xC)
	float LightEffectHideHeight; // 0x520(0x4)
	uint8_t Pad_0x524[0x34]; // 0x524(0x34)
	struct UFXResourceContainerComponent* LightEffectContainer; // 0x558(0x8)
	uint8_t Pad_0x560[0x18]; // 0x560(0x18)

	// Object: Function DFMAbility.ArtilleryShell_GuidedMissle.StopFlyAudio
	// Flags: [Final|Native|Public]
	// Offset: 0xc3e3890
	// Params: [ Num(0) Size(0x0) ]
	void StopFlyAudio();

	// Object: Function DFMAbility.ArtilleryShell_GuidedMissle.StopAlertAudio
	// Flags: [Final|Native|Public]
	// Offset: 0xc3e387c
	// Params: [ Num(0) Size(0x0) ]
	void StopAlertAudio();

	// Object: Function DFMAbility.ArtilleryShell_GuidedMissle.PreloadResourceStep2
	// Flags: [Final|Native|Public]
	// Offset: 0xc3e3868
	// Params: [ Num(0) Size(0x0) ]
	void PreloadResourceStep2();

	// Object: Function DFMAbility.ArtilleryShell_GuidedMissle.PreloadResourceStep1
	// Flags: [Final|Native|Public]
	// Offset: 0xc3e3854
	// Params: [ Num(0) Size(0x0) ]
	void PreloadResourceStep1();

	// Object: Function DFMAbility.ArtilleryShell_GuidedMissle.PreloadResource
	// Flags: [Final|Native|Public]
	// Offset: 0xc3e3840
	// Params: [ Num(0) Size(0x0) ]
	void PreloadResource();

	// Object: Function DFMAbility.ArtilleryShell_GuidedMissle.PlayLightEffect
	// Flags: [Final|Native|Public]
	// Offset: 0xc3e382c
	// Params: [ Num(0) Size(0x0) ]
	void PlayLightEffect();

	// Object: Function DFMAbility.ArtilleryShell_GuidedMissle.PlayFlyAudio
	// Flags: [Final|Native|Public]
	// Offset: 0xc3e3818
	// Params: [ Num(0) Size(0x0) ]
	void PlayFlyAudio();

	// Object: Function DFMAbility.ArtilleryShell_GuidedMissle.PlayAlertAudio
	// Flags: [Final|Native|Public]
	// Offset: 0xc3e3804
	// Params: [ Num(0) Size(0x0) ]
	void PlayAlertAudio();

	// Object: Function DFMAbility.ArtilleryShell_GuidedMissle.DestoryLightEffect
	// Flags: [Final|Native|Public]
	// Offset: 0xc3e37f0
	// Params: [ Num(0) Size(0x0) ]
	void DestoryLightEffect();

	// Object: Function DFMAbility.ArtilleryShell_GuidedMissle.CheckHeight
	// Flags: [Final|Native|Public]
	// Offset: 0xc3e37dc
	// Params: [ Num(0) Size(0x0) ]
	void CheckHeight();
};

// Object: Class DFMAbility.ArtilleryShell_SectorArtilerrate
// Size: 0x4F8 (Inherited: 0x4D0)
struct AArtilleryShell_SectorArtilerrate : AArtilleryShell
{
	DEFINE_UE_CLASS_HELPERS(AArtilleryShell_SectorArtilerrate, "ArtilleryShell_SectorArtilerrate")

	struct UGPAudioEventAsset* FlyStartAudioEvent; // 0x4D0(0x8)
	struct UGPAudioEventAsset* FlyStopAudioEvent; // 0x4D8(0x8)
	float FlyAudioDelay; // 0x4E0(0x4)
	uint8_t Pad_0x4E4[0x14]; // 0x4E4(0x14)

	// Object: Function DFMAbility.ArtilleryShell_SectorArtilerrate.StopFlyAudio
	// Flags: [Final|Native|Public]
	// Offset: 0xc3e38d4
	// Params: [ Num(0) Size(0x0) ]
	void StopFlyAudio();

	// Object: Function DFMAbility.ArtilleryShell_SectorArtilerrate.PreloadResource
	// Flags: [Final|Native|Public]
	// Offset: 0xc3e38c0
	// Params: [ Num(0) Size(0x0) ]
	void PreloadResource();

	// Object: Function DFMAbility.ArtilleryShell_SectorArtilerrate.PlayFlyAudio
	// Flags: [Final|Native|Public]
	// Offset: 0xc3e38ac
	// Params: [ Num(0) Size(0x0) ]
	void PlayFlyAudio();
};

// Object: Class DFMAbility.ArtilleryShell_SectorSmoke
// Size: 0x518 (Inherited: 0x4D0)
struct AArtilleryShell_SectorSmoke : AArtilleryShell
{
	DEFINE_UE_CLASS_HELPERS(AArtilleryShell_SectorSmoke, "ArtilleryShell_SectorSmoke")

	float UpdateFoliageBuffInterval; // 0x4CC(0x4)
	struct TArray<struct TWeakObjectPtr<struct AActor>> PreInsideActorList; // 0x4D0(0x10)
	struct UGPAudioEventAsset* FlyStartAudioEvent; // 0x4E0(0x8)
	struct UGPAudioEventAsset* FlyStopAudioEvent; // 0x4E8(0x8)
	float FlyAudioDelay; // 0x4F0(0x4)
	int32_t SmokeId; // 0x4F4(0x4)
	struct AGPDeformableSmokeEmitActor* SmokeEmitActorBP; // 0x4F8(0x8)
	uint8_t Pad_0x504[0x14]; // 0x504(0x14)

	// Object: Function DFMAbility.ArtilleryShell_SectorSmoke.UpdateFoliageBuffForCharacter
	// Flags: [Final|Native|Protected]
	// Offset: 0xc3e3954
	// Params: [ Num(0) Size(0x0) ]
	void UpdateFoliageBuffForCharacter();

	// Object: Function DFMAbility.ArtilleryShell_SectorSmoke.StopFlyAudio
	// Flags: [Final|Native|Public]
	// Offset: 0xc3e3940
	// Params: [ Num(0) Size(0x0) ]
	void StopFlyAudio();

	// Object: Function DFMAbility.ArtilleryShell_SectorSmoke.PreloadResource
	// Flags: [Final|Native|Public]
	// Offset: 0xc3e392c
	// Params: [ Num(0) Size(0x0) ]
	void PreloadResource();

	// Object: Function DFMAbility.ArtilleryShell_SectorSmoke.PlayFlyAudio
	// Flags: [Final|Native|Public]
	// Offset: 0xc3e3918
	// Params: [ Num(0) Size(0x0) ]
	void PlayFlyAudio();

	// Object: Function DFMAbility.ArtilleryShell_SectorSmoke.ClearAllCharacterBuff
	// Flags: [Final|Native|Protected]
	// Offset: 0xc3e3904
	// Params: [ Num(0) Size(0x0) ]
	void ClearAllCharacterBuff();

	// Object: Function DFMAbility.ArtilleryShell_SectorSmoke.ClearActorInside
	// Flags: [Final|Native|Protected]
	// Offset: 0xc3e38f0
	// Params: [ Num(0) Size(0x0) ]
	void ClearActorInside();
};

// Object: Class DFMAbility.ArtilleryShellingTemplate
// Size: 0x488 (Inherited: 0x370)
struct AArtilleryShellingTemplate : AActor
{
	DEFINE_UE_CLASS_HELPERS(AArtilleryShellingTemplate, "ArtilleryShellingTemplate")

	uint8_t bIsSpawnSmoke : 1; // 0x370(0x1), Mask(0x1)
	uint8_t BitPad_0x370_1 : 7; // 0x370(0x1)
	uint8_t bIsShowTips : 1; // 0x371(0x1), Mask(0x1)
	uint8_t BitPad_0x371_1 : 7; // 0x371(0x1)
	uint8_t Pad_0x372[0x2]; // 0x372(0x2)
	int32_t SkillId; // 0x374(0x4)
	struct FBreakthroughEventRange ShellNumRange; // 0x378(0x8)
	EArtilleryShellDropMethod DropMethod; // 0x380(0x1)
	uint8_t Pad_0x381[0x7]; // 0x381(0x7)
	struct TArray<struct FVector2D> DropOrder; // 0x388(0x10)
	float Extent; // 0x398(0x4)
	float ExtraRandomOffset; // 0x39C(0x4)
	float FireInterval; // 0x3A0(0x4)
	float FireDelay; // 0x3A4(0x4)
	struct AArtilleryShell* ShellTemplate; // 0x3A8(0x8)
	float ShellFireDistance; // 0x3B0(0x4)
	float ShellFireHeight; // 0x3B4(0x4)
	float ShellFlyTime; // 0x3B8(0x4)
	float GravityZ; // 0x3BC(0x4)
	float RemoveUseCountDelay; // 0x3C0(0x4)
	uint8_t bEnableObstacleAvoidance : 1; // 0x3C4(0x1), Mask(0x1)
	uint8_t BitPad_0x3C4_1 : 7; // 0x3C4(0x1)
	uint8_t Pad_0x3C5[0x3]; // 0x3C5(0x3)
	float ObstacleThreshold; // 0x3C8(0x4)
	uint8_t bEnableObstacleAvoidance_Horizontal : 1; // 0x3CC(0x1), Mask(0x1)
	uint8_t BitPad_0x3CC_1 : 7; // 0x3CC(0x1)
	uint8_t AvoidObstacleAngle; // 0x3CD(0x1)
	uint8_t AvoidObstacleAngleNum; // 0x3CE(0x1)
	uint8_t bEnableObstacleAvoidance_Vertical : 1; // 0x3CF(0x1), Mask(0x1)
	uint8_t BitPad_0x3CF_1 : 7; // 0x3CF(0x1)
	uint8_t AvoidObstacleAngleNum_Vertical; // 0x3D0(0x1)
	uint8_t bUseSphereTrace : 1; // 0x3D1(0x1), Mask(0x1)
	uint8_t BitPad_0x3D1_1 : 7; // 0x3D1(0x1)
	uint8_t bCheckUnderWater : 1; // 0x3D2(0x1), Mask(0x1)
	uint8_t BitPad_0x3D2_1 : 7; // 0x3D2(0x1)
	uint8_t Pad_0x3D3[0x1]; // 0x3D3(0x1)
	float UnderWaterZ; // 0x3D4(0x4)
	uint8_t bIsEnableLaunchAudio : 1; // 0x3D8(0x1), Mask(0x1)
	uint8_t BitPad_0x3D8_1 : 7; // 0x3D8(0x1)
	uint8_t Pad_0x3D9[0x3]; // 0x3D9(0x3)
	float LaunchAudioDelayTime; // 0x3DC(0x4)
	uint8_t bIsEnableWarnAudio : 1; // 0x3E0(0x1), Mask(0x1)
	uint8_t BitPad_0x3E0_1 : 7; // 0x3E0(0x1)
	uint8_t Pad_0x3E1[0x3]; // 0x3E1(0x3)
	float WarnAudioDelayTime; // 0x3E4(0x4)
	float WarnAudioStopOffsetTime; // 0x3E8(0x4)
	uint8_t Pad_0x3EC[0x7C]; // 0x3EC(0x7C)
	struct AGPCharacter* MakerInstigator; // 0x468(0x8)
	uint8_t Pad_0x470[0x18]; // 0x470(0x18)

	// Object: Function DFMAbility.ArtilleryShellingTemplate.SetCampId
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xc3e3c8c
	// Params: [ Num(1) Size(0x4) ]
	void SetCampId(int32_t NewCampId);

	// Object: Function DFMAbility.ArtilleryShellingTemplate.ClientDebugTraceLine
	// Flags: [Net|NetReliableNative|Event|NetMulticast|Public|HasDefaults]
	// Offset: 0xc3e3a94
	// Params: [ Num(5) Size(0xA8) ]
	void ClientDebugTraceLine(struct FVector Start, struct FVector End, struct FColor Color, struct FHitResult HitResult, float radius);

	// Object: Function DFMAbility.ArtilleryShellingTemplate.ArtilleryShellingCommand
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable]
	// Offset: 0xc3e39d8
	// Params: [ Num(2) Size(0x9) ]
	uint8_t ArtilleryShellingCommand(const struct FVector2D& pos);
};

// Object: Class DFMAbility.ArtilleryShellProjectileMovementComponent
// Size: 0x270 (Inherited: 0x210)
struct UArtilleryShellProjectileMovementComponent : UProjectileMovementComponent
{
	DEFINE_UE_CLASS_HELPERS(UArtilleryShellProjectileMovementComponent, "ArtilleryShellProjectileMovementComponent")

	uint8_t bUseNewMove : 1; // 0x20C(0x1), Mask(0x1)
	struct TArray<struct UObject*> IgnoreObjectClass; // 0x210(0x10)
	uint8_t bIgnoreADS : 1; // 0x220(0x1), Mask(0x1)
	uint8_t BitPad_0x220_2 : 6; // 0x220(0x1)
	uint8_t Pad_0x221[0x3]; // 0x221(0x3)
	int32_t ClientIgnoreCollisionDistSquared; // 0x224(0x4)
	struct TArray<struct FName> ClientIgnoreActorTagArr; // 0x228(0x10)
	struct TArray<struct FString> ClientIgnoreActorNameArr; // 0x238(0x10)
	struct FVector Direction; // 0x248(0xC)
	struct FVector RebasedDestination; // 0x254(0xC)
	float Accelerate; // 0x260(0x4)
	uint8_t Pad_0x264[0xC]; // 0x264(0xC)

	// Object: Function DFMAbility.ArtilleryShellProjectileMovementComponent.InitClientIgnoreActorWhenMoving
	// Flags: [Final|Native|Public]
	// Offset: 0xc3e3ebc
	// Params: [ Num(0) Size(0x0) ]
	void InitClientIgnoreActorWhenMoving();

	// Object: Function DFMAbility.ArtilleryShellProjectileMovementComponent.Init
	// Flags: [Final|Native|Public|HasDefaults]
	// Offset: 0xc3e3dac
	// Params: [ Num(2) Size(0x58) ]
	void Init(struct FVector InitVelocity, struct FArtilleryShellMovementParameter MovementParameter);
};

// Object: Class DFMAbility.ArtilleryShellProjectileSphereComponent
// Size: 0x5A0 (Inherited: 0x5A0)
struct UArtilleryShellProjectileSphereComponent : USphereComponent
{
	DEFINE_UE_CLASS_HELPERS(UArtilleryShellProjectileSphereComponent, "ArtilleryShellProjectileSphereComponent")

	uint8_t bReturnFaceIndexOnMove : 1; // 0x594(0x1), Mask(0x1)
};

// Object: Class DFMAbility.BionicBirdActor
// Size: 0x7A0 (Inherited: 0x4D0)
struct ABionicBirdActor : ABionicBirdBaseActor
{
	DEFINE_UE_CLASS_HELPERS(ABionicBirdActor, "BionicBirdActor")

	uint8_t Pad_0x4D0[0x18]; // 0x4D0(0x18)
	float EnergyConsumedSpeed_SOL; // 0x4E8(0x4)
	float MaxHealth_SOL; // 0x4EC(0x4)
	uint8_t bIsDebug : 1; // 0x4F0(0x1), Mask(0x1)
	uint8_t BitPad_0x4F0_1 : 7; // 0x4F0(0x1)
	uint8_t bCleanSprintCancelRequest : 1; // 0x4F1(0x1), Mask(0x1)
	uint8_t BitPad_0x4F1_1 : 7; // 0x4F1(0x1)
	uint8_t bPilotVerify : 1; // 0x4F2(0x1), Mask(0x1)
	uint8_t BitPad_0x4F2_1 : 7; // 0x4F2(0x1)
	uint8_t Pad_0x4F3[0x1]; // 0x4F3(0x1)
	float PilotVerifySize; // 0x4F4(0x4)
	float PilotVerifyOffset; // 0x4F8(0x4)
	float PilotVerifyDestroyDelay; // 0x4FC(0x4)
	float MoveTrainCheckSize; // 0x500(0x4)
	float MoveTrainCheckCD; // 0x504(0x4)
	int32_t SkillId; // 0x508(0x4)
	int32_t SpySkillID; // 0x50C(0x4)
	int32_t ThreatId; // 0x510(0x4)
	int32_t OnControlBuffId; // 0x514(0x4)
	struct FName BaseAttachTag; // 0x518(0x8)
	struct FName AttachToViewTargetTag; // 0x520(0x8)
	float ViewTraceInterval; // 0x528(0x4)
	float ClientLaunchDisableTime; // 0x52C(0x4)
	float LauncherBulletBaseSpeed; // 0x530(0x4)
	float LauncherBulletMoveSpeedScale; // 0x534(0x4)
	float AnimRotatorInterpSpeed; // 0x538(0x4)
	uint8_t Pad_0x53C[0x4]; // 0x53C(0x4)
	struct TArray<int32_t> DamageIgnoreBuffIds; // 0x540(0x10)
	struct FName HudViewName; // 0x550(0x8)
	struct AAbilityWeaponThrowableBullet* LauncherBulletClass; // 0x558(0x8)
	float NoEmpGrenadeTipsTime; // 0x560(0x4)
	int32_t LauncherBulletPreviewID; // 0x564(0x4)
	float LauncherBulletPreviewMaxSimTime; // 0x568(0x4)
	float BaseFOV; // 0x56C(0x4)
	float SprintFOV; // 0x570(0x4)
	float FOVLerpSpeed; // 0x574(0x4)
	struct FName BaseDestroyFXName; // 0x578(0x8)
	struct FName DamageDestroyFXName; // 0x580(0x8)
	struct FName SprintExplosionFXName; // 0x588(0x8)
	uint8_t bDestroyUnderWater : 1; // 0x590(0x1), Mask(0x1)
	uint8_t BitPad_0x590_1 : 7; // 0x590(0x1)
	uint8_t bUseSettingSensitivity : 1; // 0x591(0x1), Mask(0x1)
	uint8_t BitPad_0x591_1 : 7; // 0x591(0x1)
	uint8_t bIsClientDestroyStopMark : 1; // 0x592(0x1), Mask(0x1)
	uint8_t BitPad_0x592_1 : 7; // 0x592(0x1)
	uint8_t Pad_0x593[0x1]; // 0x593(0x1)
	float MaxHeight; // 0x594(0x4)
	float ThrowableAttachVelocityScale; // 0x598(0x4)
	float MaxVelocity; // 0x59C(0x4)
	float MobileMaxVelocity; // 0x5A0(0x4)
	float BlockingMinVelocity; // 0x5A4(0x4)
	struct FVector2D BlockingDecelerationInput; // 0x5A8(0x8)
	struct FVector2D BlockingDecelerationOutput; // 0x5B0(0x8)
	struct FVector InputMinValue; // 0x5B8(0xC)
	float InputLeftRightScale; // 0x5C4(0x4)
	float InputBackScale; // 0x5C8(0x4)
	struct FVector Acceleration; // 0x5CC(0xC)
	struct FVector2D VelocityToAccelerationScaleInput; // 0x5D8(0x8)
	struct FVector2D VelocityToAccelerationScaleOutput; // 0x5E0(0x8)
	struct FVector2D XVelocityToYZAccelerationScaleInput; // 0x5E8(0x8)
	struct FVector2D XVelocityToYZAccelerationScaleOutput; // 0x5F0(0x8)
	struct FVector2D VelocityToDecelerationInput; // 0x5F8(0x8)
	struct FVector2D VelocityToDecelerationOutput; // 0x600(0x8)
	struct FVector2D VelocityInterpSpeedInput; // 0x608(0x8)
	struct FVector2D VelocityInterpSpeedOutput; // 0x610(0x8)
	float VelocityInterpAngleDecelerationScale; // 0x618(0x4)
	struct FVector2D PitchLimit; // 0x61C(0x8)
	float MobileRotaRecoverDelay; // 0x624(0x4)
	float MobileRotaRecoverSpeed; // 0x628(0x4)
	float YawSensitive; // 0x62C(0x4)
	float MobileYawSensitive; // 0x630(0x4)
	float YawRotateSpeed; // 0x634(0x4)
	float PitchSensitive; // 0x638(0x4)
	float MobilePitchSensitive; // 0x63C(0x4)
	float PitchRotateSpeed; // 0x640(0x4)
	float YawToRollArg; // 0x644(0x4)
	float YInputToRollArg; // 0x648(0x4)
	float RollInterpSpeed; // 0x64C(0x4)
	float MinRotateValue; // 0x650(0x4)
	float SprintDelayTime; // 0x654(0x4)
	float SprintStartDeceleration; // 0x658(0x4)
	struct FVector SprintAcceleration; // 0x65C(0xC)
	float SprintMaxVelocity; // 0x668(0x4)
	float SprintYawRotateSpeed; // 0x66C(0x4)
	float SprintPitchRotateSpeed; // 0x670(0x4)
	float SprintEnergyConsumedSpeedScale; // 0x674(0x4)
	int32_t SprintAttackValueId; // 0x678(0x4)
	uint8_t bIsDebugMode : 1; // 0x67C(0x1), Mask(0x1)
	uint8_t BitPad_0x67C_1 : 7; // 0x67C(0x1)
	uint8_t Pad_0x67D[0x3]; // 0x67D(0x3)
	struct FVector DebugMoveInput; // 0x680(0xC)
	struct FRotator DebugRotatorInput; // 0x68C(0xC)
	struct FString BeDestroyedVoiceString; // 0x698(0x10)
	struct UGPAudioEventAsset* FlySoundEvent; // 0x6A8(0x8)
	struct UGPAudioEventAsset* FlySoundStopEvent; // 0x6B0(0x8)
	struct UGPAudioEventAsset* SprintSoundEvent; // 0x6B8(0x8)
	struct UGPAudioEventAsset* SprintSoundStopEvent; // 0x6C0(0x8)
	struct UGPAudioEventAsset* LauncherSoundEvent; // 0x6C8(0x8)
	struct UBionicBirdMovement* BirdMovement; // 0x6D0(0x8)
	uint8_t Pad_0x6D8[0x10]; // 0x6D8(0x10)
	uint8_t bIsPilotVerify : 1; // 0x6E8(0x1), Mask(0x1)
	uint8_t BitPad_0x6E8_1 : 7; // 0x6E8(0x1)
	uint8_t Pad_0x6E9[0x3]; // 0x6E9(0x3)
	float CurrPilotVerifyDestroyDelay; // 0x6EC(0x4)
	float ClientDestroyTime; // 0x6F0(0x4)
	EVehicleAbilityType LockVehicleType; // 0x6F4(0x1)
	uint8_t Pad_0x6F5[0x3]; // 0x6F5(0x3)
	struct UMobilePlayerInput* MobilePlayerInput; // 0x6F8(0x8)
	float NoMobileTouchTime; // 0x700(0x4)
	uint8_t bIsStartMarking : 1; // 0x704(0x1), Mask(0x1)
	uint8_t BitPad_0x704_1 : 7; // 0x704(0x1)
	uint8_t Pad_0x705[0x3]; // 0x705(0x3)
	struct UC203MarkComponent* MarkComponent; // 0x708(0x8)
	float NextMarkingTime; // 0x710(0x4)
	struct FVector CameraLocation; // 0x714(0xC)
	struct FVector CameraForward; // 0x720(0xC)
	uint8_t bHasLaunched : 1; // 0x72C(0x1), Mask(0x1)
	uint8_t BitPad_0x72C_1 : 7; // 0x72C(0x1)
	uint8_t Pad_0x72D[0x3]; // 0x72D(0x3)
	float CurrClientLaunchDisableTime; // 0x730(0x4)
	struct TWeakObjectPtr<struct AActor> WeaponOwner; // 0x734(0x8)
	int32_t ChildAttachedNum; // 0x73C(0x4)
	uint8_t bIsMoveUp : 1; // 0x740(0x1), Mask(0x1)
	uint8_t BitPad_0x740_1 : 7; // 0x740(0x1)
	uint8_t bIsMoveDown : 1; // 0x741(0x1), Mask(0x1)
	uint8_t BitPad_0x741_1 : 7; // 0x741(0x1)
	uint8_t Pad_0x742[0x2]; // 0x742(0x2)
	float CameraRollValue; // 0x744(0x4)
	struct FRotator CurrentRotateInput; // 0x748(0xC)
	struct FRotator LastRotateInput; // 0x754(0xC)
	float YawControl; // 0x760(0x4)
	float PitchControl; // 0x764(0x4)
	uint8_t bIsSprintKeyDown : 1; // 0x768(0x1), Mask(0x1)
	uint8_t BitPad_0x768_1 : 7; // 0x768(0x1)
	uint8_t Pad_0x769[0x3]; // 0x769(0x3)
	float SprintDelay; // 0x76C(0x4)
	uint8_t bIsSprint : 1; // 0x770(0x1), Mask(0x1)
	uint8_t BitPad_0x770_1 : 7; // 0x770(0x1)
	uint8_t bIsSprintHit : 1; // 0x771(0x1), Mask(0x1)
	uint8_t BitPad_0x771_1 : 7; // 0x771(0x1)
	uint8_t bIsSpawnDestroyFX : 1; // 0x772(0x1), Mask(0x1)
	uint8_t BitPad_0x772_1 : 7; // 0x772(0x1)
	uint8_t bIsBirdDestroyed : 1; // 0x773(0x1), Mask(0x1)
	uint8_t BitPad_0x773_1 : 7; // 0x773(0x1)
	uint8_t Pad_0x774[0x4]; // 0x774(0x4)
	struct UBionicBirdAnimInstance* CachedAnimInstance; // 0x778(0x8)
	struct USceneComponent* MeshRotateRoot; // 0x780(0x8)
	float UpdateAudioTime; // 0x788(0x4)
	struct FGPAudioFuturePlayingID FlyAudio; // 0x78C(0x8)
	struct FGPAudioFuturePlayingID SprintAudio; // 0x794(0x8)
	uint8_t Pad_0x79C[0x4]; // 0x79C(0x4)

	// Object: Function DFMAbility.BionicBirdActor.UpdateSprintDelay
	// Flags: [Final|Native|Private]
	// Offset: 0xc3e54f8
	// Params: [ Num(1) Size(0x4) ]
	void UpdateSprintDelay(float DeltaTime);

	// Object: Function DFMAbility.BionicBirdActor.UpdateRotateInput
	// Flags: [Final|Native|Public]
	// Offset: 0xc3e5454
	// Params: [ Num(1) Size(0x4) ]
	void UpdateRotateInput(float DeltaTime);

	// Object: Function DFMAbility.BionicBirdActor.UpdateCameraInfo
	// Flags: [Final|Native|Private]
	// Offset: 0xc3e5440
	// Params: [ Num(0) Size(0x0) ]
	void UpdateCameraInfo();

	// Object: Function DFMAbility.BionicBirdActor.UpdateAnimation
	// Flags: [Final|Native|Private]
	// Offset: 0xc3e539c
	// Params: [ Num(1) Size(0x4) ]
	void UpdateAnimation(float DeltaTime);

	// Object: Function DFMAbility.BionicBirdActor.TrySprint
	// Flags: [Final|Native|Private]
	// Offset: 0xc3e5388
	// Params: [ Num(0) Size(0x0) ]
	void TrySprint();

	// Object: Function DFMAbility.BionicBirdActor.TrySetPilotVerify
	// Flags: [Final|Native|Private]
	// Offset: 0xc3e52dc
	// Params: [ Num(1) Size(0x1) ]
	void TrySetPilotVerify(uint8_t bIsVerify);

	// Object: Function DFMAbility.BionicBirdActor.TryRemoveOnControlBuff
	// Flags: [Final|Native|Private]
	// Offset: 0xc3e5238
	// Params: [ Num(1) Size(0x8) ]
	void TryRemoveOnControlBuff(struct AGPCharacter* InOwnerCharacter);

	// Object: Function DFMAbility.BionicBirdActor.TryRemoveInputTypeChangedEvent
	// Flags: [Final|Native|Private]
	// Offset: 0xc3e5224
	// Params: [ Num(0) Size(0x0) ]
	void TryRemoveInputTypeChangedEvent();

	// Object: Function DFMAbility.BionicBirdActor.TryMarking
	// Flags: [Final|Native|Private]
	// Offset: 0xc3e5180
	// Params: [ Num(1) Size(0x4) ]
	void TryMarking(float DeltaTime);

	// Object: Function DFMAbility.BionicBirdActor.TryLaunch
	// Flags: [Final|Native|Private]
	// Offset: 0xc3e516c
	// Params: [ Num(0) Size(0x0) ]
	void TryLaunch();

	// Object: Function DFMAbility.BionicBirdActor.TryHideSkillWeapon
	// Flags: [Final|Native|Private]
	// Offset: 0xc3e50c8
	// Params: [ Num(1) Size(0x8) ]
	void TryHideSkillWeapon(struct AGPCharacter* GPCharacter);

	// Object: Function DFMAbility.BionicBirdActor.TryHideAttachedChild
	// Flags: [Final|Native|Private|Const]
	// Offset: 0xc3e5024
	// Params: [ Num(1) Size(0x8) ]
	void TryHideAttachedChild(struct AActor* InChild);

	// Object: Function DFMAbility.BionicBirdActor.TryHideAllAttachedChildren
	// Flags: [Final|Native|Private|Const]
	// Offset: 0xc3e5010
	// Params: [ Num(0) Size(0x0) ]
	void TryHideAllAttachedChildren();

	// Object: Function DFMAbility.BionicBirdActor.TryCloseAttachedChildResponseToProjectileChannel
	// Flags: [Final|Native|Private|Const]
	// Offset: 0xc3e4f6c
	// Params: [ Num(1) Size(0x8) ]
	void TryCloseAttachedChildResponseToProjectileChannel(struct AActor* InChild);

	// Object: Function DFMAbility.BionicBirdActor.TryCleanSprintCancelRequest
	// Flags: [Final|Native|Private]
	// Offset: 0xc3e4ec8
	// Params: [ Num(1) Size(0x8) ]
	void TryCleanSprintCancelRequest(struct AGPCharacter* InOwnerCharacter);

	// Object: Function DFMAbility.BionicBirdActor.TryCastSpy
	// Flags: [Final|Native|Private]
	// Offset: 0xc3e4eb4
	// Params: [ Num(0) Size(0x0) ]
	void TryCastSpy();

	// Object: Function DFMAbility.BionicBirdActor.TryAddOnControlBuff
	// Flags: [Final|Native|Private]
	// Offset: 0xc3e4e10
	// Params: [ Num(1) Size(0x8) ]
	void TryAddOnControlBuff(struct AGPCharacter* InOwnerCharacter);

	// Object: Function DFMAbility.BionicBirdActor.TryAddKillScore
	// Flags: [Final|Native|Private]
	// Offset: 0xc3e4d6c
	// Params: [ Num(1) Size(0x8) ]
	void TryAddKillScore(struct AActor* Killer);

	// Object: Function DFMAbility.BionicBirdActor.TryAddInputTypeChangedEvent
	// Flags: [Final|Native|Private]
	// Offset: 0xc3e4d58
	// Params: [ Num(0) Size(0x0) ]
	void TryAddInputTypeChangedEvent();

	// Object: Function DFMAbility.BionicBirdActor.TickPilotVerify
	// Flags: [Final|Native|Private]
	// Offset: 0xc3e4cb4
	// Params: [ Num(1) Size(0x4) ]
	void TickPilotVerify(float DeltaTime);

	// Object: Function DFMAbility.BionicBirdActor.TickCheckOwnerCharacter
	// Flags: [Final|Native|Private]
	// Offset: 0xc3e4ca0
	// Params: [ Num(0) Size(0x0) ]
	void TickCheckOwnerCharacter();

	// Object: Function DFMAbility.BionicBirdActor.StopAllSound
	// Flags: [Final|Native|Private]
	// Offset: 0xc3e4c8c
	// Params: [ Num(0) Size(0x0) ]
	void StopAllSound();

	// Object: Function DFMAbility.BionicBirdActor.SpawnDestroyEffect
	// Flags: [Final|Native|Public|HasDefaults]
	// Offset: 0xc3e4b60
	// Params: [ Num(3) Size(0xE) ]
	void SpawnDestroyEffect(struct FVector Position, uint8_t bIsSprintEffect, uint8_t bIsDamageEffect);

	// Object: Function DFMAbility.BionicBirdActor.ShowNoEmpGrenadeTips
	// Flags: [Final|Native|Private]
	// Offset: 0xc3e4b4c
	// Params: [ Num(0) Size(0x0) ]
	void ShowNoEmpGrenadeTips();

	// Object: Function DFMAbility.BionicBirdActor.SetSkeletalMeshShowState
	// Flags: [Final|Native|Private]
	// Offset: 0xc3e4aa0
	// Params: [ Num(1) Size(0x1) ]
	void SetSkeletalMeshShowState(uint8_t bIsShow);

	// Object: Function DFMAbility.BionicBirdActor.SetIsStartMarking
	// Flags: [Final|Native|Public]
	// Offset: 0xc3e49f4
	// Params: [ Num(1) Size(0x1) ]
	void SetIsStartMarking(uint8_t bInIsStartMarking);

	// Object: Function DFMAbility.BionicBirdActor.ServerTryLaunch
	// Flags: [Final|Net|NetReliableNative|Event|Private|NetServer]
	// Offset: 0xc3e49d8
	// Params: [ Num(0) Size(0x0) ]
	void ServerTryLaunch();

	// Object: Function DFMAbility.BionicBirdActor.ServerSprintHit
	// Flags: [Net|NetReliableNative|Event|Public|NetServer]
	// Offset: 0xc3e49bc
	// Params: [ Num(0) Size(0x0) ]
	void ServerSprintHit();

	// Object: Function DFMAbility.BionicBirdActor.ServerOnExitBtn
	// Flags: [Final|Net|NetReliableNative|Event|Private|NetServer]
	// Offset: 0xc3e49a0
	// Params: [ Num(0) Size(0x0) ]
	void ServerOnExitBtn();

	// Object: Function DFMAbility.BionicBirdActor.SendProjectileThreatExplosion
	// Flags: [Final|Native|Private]
	// Offset: 0xc3e498c
	// Params: [ Num(0) Size(0x0) ]
	void SendProjectileThreatExplosion();

	// Object: Function DFMAbility.BionicBirdActor.SendProjectileThreatCreate
	// Flags: [Final|Native|Private]
	// Offset: 0xc3e4978
	// Params: [ Num(0) Size(0x0) ]
	void SendProjectileThreatCreate();

	// Object: Function DFMAbility.BionicBirdActor.RemoveCharacterTakeEMPEvent
	// Flags: [Final|Native|Private]
	// Offset: 0xc3e4964
	// Params: [ Num(0) Size(0x0) ]
	void RemoveCharacterTakeEMPEvent();

	// Object: Function DFMAbility.BionicBirdActor.RemoveCharacterTakeDamageEvent
	// Flags: [Final|Native|Private]
	// Offset: 0xc3e4950
	// Params: [ Num(0) Size(0x0) ]
	void RemoveCharacterTakeDamageEvent();

	// Object: Function DFMAbility.BionicBirdActor.ProcessMoveUnderWater
	// Flags: [Final|Native|Public]
	// Offset: 0xc3e493c
	// Params: [ Num(0) Size(0x0) ]
	void ProcessMoveUnderWater();

	// Object: Function DFMAbility.BionicBirdActor.PlayFlySound
	// Flags: [Final|Native|Private]
	// Offset: 0xc3e4928
	// Params: [ Num(0) Size(0x0) ]
	void PlayFlySound();

	// Object: Function DFMAbility.BionicBirdActor.OnStartLocalFocusCheckNightVision
	// Flags: [Final|Native|Private]
	// Offset: 0xc3e4914
	// Params: [ Num(0) Size(0x0) ]
	void OnStartLocalFocusCheckNightVision();

	// Object: Function DFMAbility.BionicBirdActor.OnSprintHitActor
	// Flags: [Final|Native|Public]
	// Offset: 0xc3e4870
	// Params: [ Num(1) Size(0x8) ]
	void OnSprintHitActor(struct AActor* OtherActor);

	// Object: Function DFMAbility.BionicBirdActor.OnServerKnockBack
	// Flags: [Final|Native|Private]
	// Offset: 0xc3e47cc
	// Params: [ Num(1) Size(0x8) ]
	void OnServerKnockBack(struct AGPCharacterBase* InGPCharacterBase);

	// Object: Function DFMAbility.BionicBirdActor.OnRep_IsStartMarking
	// Flags: [Final|Native|Private]
	// Offset: 0x10a4fa08
	// Params: [ Num(0) Size(0x0) ]
	void OnRep_IsStartMarking();

	// Object: Function DFMAbility.BionicBirdActor.OnRep_HasLaunched
	// Flags: [Final|Native|Private]
	// Offset: 0x10a993a0
	// Params: [ Num(0) Size(0x0) ]
	void OnRep_HasLaunched();

	// Object: Function DFMAbility.BionicBirdActor.OnInputTypeChanged
	// Flags: [Final|Native|Private]
	// Offset: 0xc3e4728
	// Params: [ Num(1) Size(0x1) ]
	void OnInputTypeChanged(EGPInputType InputType);

	// Object: Function DFMAbility.BionicBirdActor.OnArenaRoundStateChange
	// Flags: [Final|Native|Private]
	// Offset: 0xc3e4714
	// Params: [ Num(0) Size(0x0) ]
	void OnArenaRoundStateChange();

	// Object: Function DFMAbility.BionicBirdActor.MulticastSpawnDestroyEffect
	// Flags: [Net|NetReliableNative|Event|NetMulticast|Public|HasDefaults]
	// Offset: 0x107b7274
	// Params: [ Num(3) Size(0xE) ]
	void MulticastSpawnDestroyEffect(struct FVector Position, uint8_t bIsSprintEffect, uint8_t bIsDamageEffect);

	// Object: Function DFMAbility.BionicBirdActor.MulticastPlaySprintSound
	// Flags: [Final|Net|NetReliableNative|Event|NetMulticast|Private]
	// Offset: 0xc3e46f8
	// Params: [ Num(0) Size(0x0) ]
	void MulticastPlaySprintSound();

	// Object: Function DFMAbility.BionicBirdActor.MulticastPlayLauncherSound
	// Flags: [Final|Net|NetReliableNative|Event|NetMulticast|Private]
	// Offset: 0xc3e46dc
	// Params: [ Num(0) Size(0x0) ]
	void MulticastPlayLauncherSound();

	// Object: Function DFMAbility.BionicBirdActor.MakeSprintDamage
	// Flags: [Final|Native|Public]
	// Offset: 0xc3e46c8
	// Params: [ Num(0) Size(0x0) ]
	void MakeSprintDamage();

	// Object: Function DFMAbility.BionicBirdActor.IsGamepadControl
	// Flags: [Final|Native|Private]
	// Offset: 0xc3e4690
	// Params: [ Num(1) Size(0x1) ]
	uint8_t IsGamepadControl();

	// Object: Function DFMAbility.BionicBirdActor.IsEnableBionicBirdDebug
	// Flags: [Final|Native|Public|Const]
	// Offset: 0xc3e4658
	// Params: [ Num(1) Size(0x1) ]
	uint8_t IsEnableBionicBirdDebug();

	// Object: Function DFMAbility.BionicBirdActor.InitMobilePlayerInput
	// Flags: [Final|Native|Private]
	// Offset: 0xc3e45b4
	// Params: [ Num(1) Size(0x8) ]
	void InitMobilePlayerInput(struct AGPCharacter* InOwnerCharacter);

	// Object: Function DFMAbility.BionicBirdActor.InitMobileArgs
	// Flags: [Final|Native|Private]
	// Offset: 0xc3e45a0
	// Params: [ Num(0) Size(0x0) ]
	void InitMobileArgs();

	// Object: Function DFMAbility.BionicBirdActor.InitMarkComponent
	// Flags: [Final|Native|Private]
	// Offset: 0xc3e458c
	// Params: [ Num(0) Size(0x0) ]
	void InitMarkComponent();

	// Object: Function DFMAbility.BionicBirdActor.InitLockVehicleType
	// Flags: [Final|Native|Private]
	// Offset: 0xc3e4578
	// Params: [ Num(0) Size(0x0) ]
	void InitLockVehicleType();

	// Object: Function DFMAbility.BionicBirdActor.GetSkillComponent
	// Flags: [Final|Native|Private|Const]
	// Offset: 0xc3e4544
	// Params: [ Num(1) Size(0x8) ]
	struct UGPSkillComponent* GetSkillComponent();

	// Object: Function DFMAbility.BionicBirdActor.GetMoveRotator
	// Flags: [Final|Native|Public|HasDefaults|Const]
	// Offset: 0xc3e450c
	// Params: [ Num(1) Size(0xC) ]
	struct FRotator GetMoveRotator();

	// Object: Function DFMAbility.BionicBirdActor.GetMaxVelocity
	// Flags: [Final|Native|Public|Const]
	// Offset: 0xc3e44d8
	// Params: [ Num(1) Size(0x4) ]
	float GetMaxVelocity();

	// Object: Function DFMAbility.BionicBirdActor.GetIsShowSkeletalMesh
	// Flags: [Final|Native|Public|Const]
	// Offset: 0xc3e44a0
	// Params: [ Num(1) Size(0x1) ]
	uint8_t GetIsShowSkeletalMesh();

	// Object: Function DFMAbility.BionicBirdActor.DoPilotVerify
	// Flags: [Final|Native|Private]
	// Offset: 0xc3e4468
	// Params: [ Num(1) Size(0x1) ]
	uint8_t DoPilotVerify();

	// Object: Function DFMAbility.BionicBirdActor.DoMoveTrainVerify
	// Flags: [Final|Native|Private]
	// Offset: 0xc3e4430
	// Params: [ Num(1) Size(0x1) ]
	uint8_t DoMoveTrainVerify();

	// Object: Function DFMAbility.BionicBirdActor.DoMarking
	// Flags: [Final|Native|Private]
	// Offset: 0xc3e441c
	// Params: [ Num(0) Size(0x0) ]
	void DoMarking();

	// Object: Function DFMAbility.BionicBirdActor.DoLaunch
	// Flags: [Final|Native|Private]
	// Offset: 0xc3e4408
	// Params: [ Num(0) Size(0x0) ]
	void DoLaunch();

	// Object: Function DFMAbility.BionicBirdActor.DoHeightVerify
	// Flags: [Final|Native|Private]
	// Offset: 0xc3e43d0
	// Params: [ Num(1) Size(0x1) ]
	uint8_t DoHeightVerify();

	// Object: Function DFMAbility.BionicBirdActor.DoCloseAttachedChildResponseToProjectileChannel
	// Flags: [Final|Native|Private|Const]
	// Offset: 0xc3e432c
	// Params: [ Num(1) Size(0x8) ]
	void DoCloseAttachedChildResponseToProjectileChannel(struct AActor* InChild);

	// Object: Function DFMAbility.BionicBirdActor.DataFlowAddUseCount
	// Flags: [Final|Native|Private|Const]
	// Offset: 0xc3e4318
	// Params: [ Num(0) Size(0x0) ]
	void DataFlowAddUseCount();

	// Object: Function DFMAbility.BionicBirdActor.DataFlowAddLaunchCount
	// Flags: [Final|Native|Private|Const]
	// Offset: 0xc3e4304
	// Params: [ Num(0) Size(0x0) ]
	void DataFlowAddLaunchCount();

	// Object: Function DFMAbility.BionicBirdActor.DataFlowAddDestroyedCount
	// Flags: [Final|Native|Private|Const]
	// Offset: 0xc3e42f0
	// Params: [ Num(0) Size(0x0) ]
	void DataFlowAddDestroyedCount();

	// Object: Function DFMAbility.BionicBirdActor.ClientPlayBeDestroyedVO
	// Flags: [Final|Net|NetReliableNative|Event|Private|NetClient|Const]
	// Offset: 0xc3e42d4
	// Params: [ Num(0) Size(0x0) ]
	void ClientPlayBeDestroyedVO();

	// Object: Function DFMAbility.BionicBirdActor.CheckSoundAlive
	// Flags: [Final|Native|Private]
	// Offset: 0xc3e42c0
	// Params: [ Num(0) Size(0x0) ]
	void CheckSoundAlive();

	// Object: Function DFMAbility.BionicBirdActor.CheckMobileRota
	// Flags: [Final|Native|Private]
	// Offset: 0xc3e4210
	// Params: [ Num(2) Size(0x5) ]
	uint8_t CheckMobileRota(float DeltaTime);

	// Object: Function DFMAbility.BionicBirdActor.CheckMaxEnergy
	// Flags: [Final|Native|Private]
	// Offset: 0xc3e41fc
	// Params: [ Num(0) Size(0x0) ]
	void CheckMaxEnergy();

	// Object: Function DFMAbility.BionicBirdActor.CheckAttachedChild
	// Flags: [Final|Native|Private]
	// Offset: 0xc3e414c
	// Params: [ Num(2) Size(0x9) ]
	uint8_t CheckAttachedChild(struct USceneComponent* ChildComponent);

	// Object: Function DFMAbility.BionicBirdActor.AddCharacterTakeEMPEvent
	// Flags: [Final|Native|Private]
	// Offset: 0xc3e4138
	// Params: [ Num(0) Size(0x0) ]
	void AddCharacterTakeEMPEvent();

	// Object: Function DFMAbility.BionicBirdActor.AddCharacterTakeDamageEvent
	// Flags: [Final|Native|Private]
	// Offset: 0xc3e4124
	// Params: [ Num(0) Size(0x0) ]
	void AddCharacterTakeDamageEvent();
};

// Object: Class DFMAbility.BionicBirdAnimInstance
// Size: 0xA40 (Inherited: 0x280)
struct UBionicBirdAnimInstance : UGPAnimInstanceBase
{
	DEFINE_UE_CLASS_HELPERS(UBionicBirdAnimInstance, "BionicBirdAnimInstance")

	struct FBionicBirdAnimInstanceProxy LocalProxy; // 0x280(0x7C0)

	// Object: Function DFMAbility.BionicBirdAnimInstance.SetState
	// Flags: [Final|Native|Public|HasDefaults]
	// Offset: 0xc3e6bf0
	// Params: [ Num(4) Size(0x20) ]
	void SetState(struct FVector Velocity, struct FVector MoveInput, float Pitch, float Roll);
};

// Object: Class DFMAbility.BionicBirdGrenade
// Size: 0x1700 (Inherited: 0x16D0)
struct ABionicBirdGrenade : AWeaponThrowableBulletProjectile
{
	DEFINE_UE_CLASS_HELPERS(ABionicBirdGrenade, "BionicBirdGrenade")

	float ThrowTimeSeconds; // 0x16C4(0x4)
	float DeployTimeSeconds; // 0x16C8(0x4)
	float DeployStopMoveDelayTime; // 0x16CC(0x4)
	float DeploySpawnDelayTime; // 0x16D0(0x4)
	struct ABionicBirdActor* BionicBirdActorClass; // 0x16D8(0x8)
	struct UBionicBirdGrenadeMovement* BionicBirdGrenadeMovement; // 0x16E0(0x8)
	float ThrowTimeSecondsLeft; // 0x16E8(0x4)
	float DeployTimeSecondsLeft; // 0x16EC(0x4)
	struct TWeakObjectPtr<struct ABionicBirdActor> BionicBirdActor; // 0x16F0(0x8)

	// Object: Function DFMAbility.BionicBirdGrenade.TrySpawnBionicBirdActor
	// Flags: [Final|Native|Private]
	// Offset: 0xc3e6d9c
	// Params: [ Num(0) Size(0x0) ]
	void TrySpawnBionicBirdActor();

	// Object: Function DFMAbility.BionicBirdGrenade.TryControlBionicBirdActor
	// Flags: [Final|Native|Private]
	// Offset: 0xc3e6d88
	// Params: [ Num(0) Size(0x0) ]
	void TryControlBionicBirdActor();

	// Object: Function DFMAbility.BionicBirdGrenade.StartHover
	// Flags: [Final|Native|Private]
	// Offset: 0xc3e6d74
	// Params: [ Num(0) Size(0x0) ]
	void StartHover();

	// Object: Function DFMAbility.BionicBirdGrenade.OnDeployStart
	// Flags: [Final|Native|Private]
	// Offset: 0xc3e6d60
	// Params: [ Num(0) Size(0x0) ]
	void OnDeployStart();

	// Object: Function DFMAbility.BionicBirdGrenade.OnDeployEnd
	// Flags: [Final|Native|Private]
	// Offset: 0xc3e6d4c
	// Params: [ Num(0) Size(0x0) ]
	void OnDeployEnd();
};

// Object: Class DFMAbility.BionicBirdGrenadeMovement
// Size: 0x710 (Inherited: 0x710)
struct UBionicBirdGrenadeMovement : UGPWeaponProjectileMovementComponent
{
	DEFINE_UE_CLASS_HELPERS(UBionicBirdGrenadeMovement, "BionicBirdGrenadeMovement")

	// Object: Function DFMAbility.BionicBirdGrenadeMovement.StartHover
	// Flags: [Final|Native|Public]
	// Offset: 0xc3e6db8
	// Params: [ Num(2) Size(0x8) ]
	void StartHover(float StopTime, float MinHeight);
};

// Object: Class DFMAbility.BionicBirdMarkingActor
// Size: 0x480 (Inherited: 0x370)
struct ABionicBirdMarkingActor : ABionicBirdMarkingBaseActor
{
	DEFINE_UE_CLASS_HELPERS(ABionicBirdMarkingActor, "BionicBirdMarkingActor")

	float MarkingCountDownTime; // 0x370(0x4)
	float MaxMarkingTime; // 0x374(0x4)
	float SceneMarkingMaxDistance; // 0x378(0x4)
	float MarkingSoundCD; // 0x37C(0x4)
	uint8_t bUseSocketISM : 1; // 0x380(0x1), Mask(0x1)
	uint8_t BitPad_0x380_1 : 7; // 0x380(0x1)
	uint8_t bUseLineISM : 1; // 0x381(0x1), Mask(0x1)
	uint8_t BitPad_0x381_1 : 7; // 0x381(0x1)
	uint8_t bUseSocketEffect : 1; // 0x382(0x1), Mask(0x1)
	uint8_t BitPad_0x382_1 : 7; // 0x382(0x1)
	uint8_t Pad_0x383[0x1]; // 0x383(0x1)
	struct FName SocketEffectName; // 0x384(0x8)
	uint8_t bIsDrawDebugSphere : 1; // 0x38C(0x1), Mask(0x1)
	uint8_t BitPad_0x38C_1 : 7; // 0x38C(0x1)
	uint8_t bIsDrawDebugLine : 1; // 0x38D(0x1), Mask(0x1)
	uint8_t BitPad_0x38D_1 : 7; // 0x38D(0x1)
	uint8_t Pad_0x38E[0x2]; // 0x38E(0x2)
	int32_t MarkerJointIndex; // 0x390(0x4)
	float MarkerJointOffsetZ; // 0x394(0x4)
	struct TArray<struct FBionicBirdMarkingJoint> JointInfos; // 0x398(0x10)
	float JointBaseSize; // 0x3A8(0x4)
	uint8_t Pad_0x3AC[0x4]; // 0x3AC(0x4)
	struct UCurveVector* JointSizeCurve; // 0x3B0(0x8)
	struct FName JointMtArgName; // 0x3B8(0x8)
	struct UCurveFloat* JointMtCurve; // 0x3C0(0x8)
	struct FName JointMtColorName; // 0x3C8(0x8)
	struct UCurveLinearColor* JointMtColorCurve; // 0x3D0(0x8)
	struct FName LineMtArgName; // 0x3D8(0x8)
	struct UCurveFloat* LineMtCurve; // 0x3E0(0x8)
	struct FName LineMtColorName; // 0x3E8(0x8)
	struct UCurveLinearColor* LineMtColorCurve; // 0x3F0(0x8)
	struct TWeakObjectPtr<struct AGPCharacter> TargetCharacter; // 0x3F8(0x8)
	EBionicBirdMarkingType CurrMarkingType; // 0x400(0x1)
	uint8_t bIsCurrSelfMark : 1; // 0x401(0x1), Mask(0x1)
	uint8_t BitPad_0x401_1 : 7; // 0x401(0x1)
	uint8_t Pad_0x402[0x2]; // 0x402(0x2)
	float CurrMarkingTypeTime; // 0x404(0x4)
	float NextMarkingSoundCD; // 0x408(0x4)
	uint8_t bIsPlayMarkSound : 1; // 0x40C(0x1), Mask(0x1)
	uint8_t BitPad_0x40C_1 : 7; // 0x40C(0x1)
	uint8_t Pad_0x40D[0x3]; // 0x40D(0x3)
	struct TArray<struct FVector> SpherePositions; // 0x410(0x10)
	struct TArray<float> SphereRadiuses; // 0x420(0x10)
	struct TArray<struct FVector> LinePositions; // 0x430(0x10)
	uint8_t Pad_0x440[0x20]; // 0x440(0x20)
	struct UInstancedStaticMeshComponent* JointISMComponent; // 0x460(0x8)
	struct UInstancedStaticMeshComponent* LineISMComponent; // 0x468(0x8)
	struct UMaterialInstanceDynamic* JointMaterial; // 0x470(0x8)
	struct UMaterialInstanceDynamic* LineMaterial; // 0x478(0x8)

	// Object: Function DFMAbility.BionicBirdMarkingActor.TryShowSceneMarking
	// Flags: [Final|Native|Private]
	// Offset: 0xc3e7194
	// Params: [ Num(0) Size(0x0) ]
	void TryShowSceneMarking();

	// Object: Function DFMAbility.BionicBirdMarkingActor.TickMarkingCountDown
	// Flags: [Final|Native|Private]
	// Offset: 0xc3e70f0
	// Params: [ Num(1) Size(0x4) ]
	void TickMarkingCountDown(float DeltaTime);

	// Object: Function DFMAbility.BionicBirdMarkingActor.TickMarking
	// Flags: [Final|Native|Private]
	// Offset: 0xc3e704c
	// Params: [ Num(1) Size(0x4) ]
	void TickMarking(float DeltaTime);

	// Object: Function DFMAbility.BionicBirdMarkingActor.TickFadeOut_Size
	// Flags: [Final|Native|Private]
	// Offset: 0xc3e7038
	// Params: [ Num(0) Size(0x0) ]
	void TickFadeOut_Size();

	// Object: Function DFMAbility.BionicBirdMarkingActor.TickFadeOut_Line
	// Flags: [Final|Native|Private]
	// Offset: 0xc3e7024
	// Params: [ Num(0) Size(0x0) ]
	void TickFadeOut_Line();

	// Object: Function DFMAbility.BionicBirdMarkingActor.TickFadeOut_Joint
	// Flags: [Final|Native|Private]
	// Offset: 0xc3e7010
	// Params: [ Num(0) Size(0x0) ]
	void TickFadeOut_Joint();

	// Object: Function DFMAbility.BionicBirdMarkingActor.TickFadeOut
	// Flags: [Final|Native|Public]
	// Offset: 0xc3e6ffc
	// Params: [ Num(0) Size(0x0) ]
	void TickFadeOut();

	// Object: Function DFMAbility.BionicBirdMarkingActor.SpawnJointEffect
	// Flags: [Final|Native|Private]
	// Offset: 0xc3e6fe8
	// Params: [ Num(0) Size(0x0) ]
	void SpawnJointEffect();

	// Object: Function DFMAbility.BionicBirdMarkingActor.ShowMarker
	// Flags: [Final|Native|Private]
	// Offset: 0xc3e6fd4
	// Params: [ Num(0) Size(0x0) ]
	void ShowMarker();

	// Object: Function DFMAbility.BionicBirdMarkingActor.SetTargetLocation
	// Flags: [Final|Native|Private]
	// Offset: 0xc3e6fc0
	// Params: [ Num(0) Size(0x0) ]
	void SetTargetLocation();

	// Object: Function DFMAbility.BionicBirdMarkingActor.SetISMJointData
	// Flags: [Final|Native|Private]
	// Offset: 0xc3e6fac
	// Params: [ Num(0) Size(0x0) ]
	void SetISMJointData();

	// Object: Function DFMAbility.BionicBirdMarkingActor.SetCurrMarkingTypeTimeByType
	// Flags: [Final|Native|Private]
	// Offset: 0xc3e6f98
	// Params: [ Num(0) Size(0x0) ]
	void SetCurrMarkingTypeTimeByType();

	// Object: Function DFMAbility.BionicBirdMarkingActor.OnMarkingTimeEnd
	// Flags: [Final|Native|Private]
	// Offset: 0xc3e6f84
	// Params: [ Num(0) Size(0x0) ]
	void OnMarkingTimeEnd();

	// Object: Function DFMAbility.BionicBirdMarkingActor.InitISM
	// Flags: [Final|Native|Private]
	// Offset: 0xc3e6f70
	// Params: [ Num(0) Size(0x0) ]
	void InitISM();

	// Object: Function DFMAbility.BionicBirdMarkingActor.HideMarker
	// Flags: [Final|Native|Private]
	// Offset: 0xc3e6f5c
	// Params: [ Num(0) Size(0x0) ]
	void HideMarker();

	// Object: Function DFMAbility.BionicBirdMarkingActor.HideISM
	// Flags: [Final|Native|Private]
	// Offset: 0xc3e6f48
	// Params: [ Num(0) Size(0x0) ]
	void HideISM();

	// Object: Function DFMAbility.BionicBirdMarkingActor.GetMarkerLocation
	// Flags: [Final|Native|Private|HasDefaults]
	// Offset: 0xc3e6f10
	// Params: [ Num(1) Size(0xC) ]
	struct FVector GetMarkerLocation();

	// Object: Function DFMAbility.BionicBirdMarkingActor.GetCameraLocation
	// Flags: [Final|Native|Private|HasDefaults|Const]
	// Offset: 0xc3e6ed8
	// Params: [ Num(1) Size(0xC) ]
	struct FVector GetCameraLocation();

	// Object: Function DFMAbility.BionicBirdMarkingActor.DrawDebug
	// Flags: [Final|Native|Private]
	// Offset: 0xc3e6ec4
	// Params: [ Num(0) Size(0x0) ]
	void DrawDebug();

	// Object: Function DFMAbility.BionicBirdMarkingActor.CopyJointInfos
	// Flags: [Final|Native|Private]
	// Offset: 0xc3e6eb0
	// Params: [ Num(0) Size(0x0) ]
	void CopyJointInfos();

	// Object: Function DFMAbility.BionicBirdMarkingActor.CheckMarkingSoundCD
	// Flags: [Final|Native|Private]
	// Offset: 0xc3e6e9c
	// Params: [ Num(0) Size(0x0) ]
	void CheckMarkingSoundCD();
};

// Object: Class DFMAbility.BionicBirdMarkingAnimInstance
// Size: 0xA50 (Inherited: 0x280)
struct UBionicBirdMarkingAnimInstance : UGPAnimInstanceBase
{
	DEFINE_UE_CLASS_HELPERS(UBionicBirdMarkingAnimInstance, "BionicBirdMarkingAnimInstance")

	struct FBionicBirdMarkingAnimInstanceProxy LocalProxy; // 0x280(0x7D0)

	// Object: Function DFMAbility.BionicBirdMarkingAnimInstance.SnapshotTargetCharacterMeshPose
	// Flags: [Final|Native|Public]
	// Offset: 0xc3e72b8
	// Params: [ Num(1) Size(0x8) ]
	void SnapshotTargetCharacterMeshPose(struct USkeletalMeshComponent* TargetCharacterMesh);
};

// Object: Class DFMAbility.BionicBirdMovement
// Size: 0x360 (Inherited: 0x300)
struct UBionicBirdMovement : UGPControllableActorReplicatedMovementComponent
{
	DEFINE_UE_CLASS_HELPERS(UBionicBirdMovement, "BionicBirdMovement")

	uint8_t bDoubleSidedCheck : 1; // 0x300(0x1), Mask(0x1)
	uint8_t BitPad_0x300_1 : 7; // 0x300(0x1)
	uint8_t Pad_0x301[0x7]; // 0x301(0x7)
	struct ABionicBirdActor* OwnerBionicBird; // 0x308(0x8)
	struct FVector ActorMoveForwardVector; // 0x310(0xC)
	struct FVector ActorMoveRightVector; // 0x31C(0xC)
	struct FVector ActorMoveUpVector; // 0x328(0xC)
	struct FVector AnimVelocity; // 0x334(0xC)
	struct FVector AnimInput; // 0x340(0xC)
	struct TWeakObjectPtr<struct AWaterDataAssetsStreamer> WaterStreamer; // 0x34C(0x8)
	uint8_t Pad_0x354[0xC]; // 0x354(0xC)

	// Object: Function DFMAbility.BionicBirdMovement.TryHitBreakablePawnActor
	// Flags: [Final|Native|Private]
	// Offset: 0xc3e7990
	// Params: [ Num(2) Size(0x9) ]
	uint8_t TryHitBreakablePawnActor(struct AActor* OtherActor);

	// Object: Function DFMAbility.BionicBirdMovement.SendAinInfoToServer
	// Flags: [Final|Net|Native|Event|Private|NetServer|HasDefaults]
	// Offset: 0xc3e78a8
	// Params: [ Num(2) Size(0x18) ]
	void SendAinInfoToServer(struct FVector InAnimVelocity, struct FVector InAnimInput);

	// Object: Function DFMAbility.BionicBirdMovement.MoveCheckPawn
	// Flags: [Final|Native|Private|HasDefaults]
	// Offset: 0xc3e7804
	// Params: [ Num(1) Size(0xC) ]
	void MoveCheckPawn(struct FVector OldLocation);

	// Object: Function DFMAbility.BionicBirdMovement.IgnoreADS
	// Flags: [Final|Native|Private|Const]
	// Offset: 0xc3e7760
	// Params: [ Num(1) Size(0x8) ]
	void IgnoreADS(struct USceneComponent* NewUpdatedComponent);

	// Object: Function DFMAbility.BionicBirdMovement.GetInputBaseVector
	// Flags: [Final|Native|Private|HasDefaults|Const]
	// Offset: 0xc3e76b0
	// Params: [ Num(2) Size(0x10) ]
	struct FVector GetInputBaseVector(int32_t InputIdx);

	// Object: Function DFMAbility.BionicBirdMovement.DoubleSidedCheck
	// Flags: [Final|Native|Private|HasDefaults]
	// Offset: 0xc3e760c
	// Params: [ Num(1) Size(0xC) ]
	void DoubleSidedCheck(struct FVector OldLocation);

	// Object: Function DFMAbility.BionicBirdMovement.CheckMoveUnderWater
	// Flags: [Final|Native|Private|HasDefaults]
	// Offset: 0xc3e7568
	// Params: [ Num(1) Size(0xC) ]
	void CheckMoveUnderWater(struct FVector OldLocation);

	// Object: Function DFMAbility.BionicBirdMovement.CalculateVelocity
	// Flags: [Final|Native|Private|HasOutParms|HasDefaults]
	// Offset: 0xc3e747c
	// Params: [ Num(2) Size(0x10) ]
	void CalculateVelocity(float DeltaTime, const struct FVector& Input);

	// Object: Function DFMAbility.BionicBirdMovement.CalculateActorMoveForward
	// Flags: [Final|Native|Private]
	// Offset: 0xc3e7468
	// Params: [ Num(0) Size(0x0) ]
	void CalculateActorMoveForward();

	// Object: Function DFMAbility.BionicBirdMovement.BlockingDecelerateVelocity
	// Flags: [Final|Native|Private|HasOutParms]
	// Offset: 0xc3e7364
	// Params: [ Num(2) Size(0x8C) ]
	void BlockingDecelerateVelocity(const struct FHitResult& Hit, float DeltaTime);
};

// Object: Class DFMAbility.BionicBirdWeapon
// Size: 0x1440 (Inherited: 0x1440)
struct ABionicBirdWeapon : ADFMWeapon
{
	DEFINE_UE_CLASS_HELPERS(ABionicBirdWeapon, "BionicBirdWeapon")

	uint8_t bIsTppCastHiddenShadow : 1; // 0x1432(0x1), Mask(0x1)

	// Object: Function DFMAbility.BionicBirdWeapon.CustomUpdateShadowConfig
	// Flags: [Final|Native|Private]
	// Offset: 0xc3e7a60
	// Params: [ Num(0) Size(0x0) ]
	void CustomUpdateShadowConfig();
};

// Object: Class DFMAbility.BionicSpyActor
// Size: 0x6C0 (Inherited: 0x4D0)
struct ABionicSpyActor : ABionicSpyBaseActor
{
	DEFINE_UE_CLASS_HELPERS(ABionicSpyActor, "BionicSpyActor")

	uint8_t Pad_0x4D0[0x10]; // 0x4D0(0x10)
	float EnergyConsumedSpeed_SOL; // 0x4E0(0x4)
	int32_t ThreatId; // 0x4E4(0x4)
	uint8_t bUsePawnOverlap : 1; // 0x4E8(0x1), Mask(0x1)
	uint8_t BitPad_0x4E8_1 : 7; // 0x4E8(0x1)
	ECharingSlot CDSlot; // 0x4E9(0x1)
	uint8_t Pad_0x4EA[0x2]; // 0x4EA(0x2)
	struct FName HudViewName; // 0x4EC(0x8)
	float BaseFOV; // 0x4F4(0x4)
	float FOVLerpSpeed; // 0x4F8(0x4)
	struct FName BindSocketName; // 0x4FC(0x8)
	struct FVector BindSocketBaseOffset; // 0x504(0xC)
	struct FVector BindSocketOffset; // 0x510(0xC)
	struct FVector BindSocketOffset_CarryingBox; // 0x51C(0xC)
	float CameraPitchLimit; // 0x528(0x4)
	float CameraYawLimit; // 0x52C(0x4)
	float CameraSmooth; // 0x530(0x4)
	ECollisionChannel CheckChannel; // 0x534(0x1)
	uint8_t Pad_0x535[0x3]; // 0x535(0x3)
	float CheckRadius; // 0x538(0x4)
	struct FName GrabbedSocketName; // 0x53C(0x8)
	float GrabbedNearClipPlane; // 0x544(0x4)
	float GrabbedLerpTime; // 0x548(0x4)
	struct FName GrabbedLookAtSocketName; // 0x54C(0x8)
	struct FVector GrabbedLookAtOffset; // 0x554(0xC)
	float GrabbedLookAtDelayTime; // 0x560(0x4)
	float GrabbedLookAtLerpTime; // 0x564(0x4)
	int32_t SkillId; // 0x568(0x4)
	int32_t SwitchSkillID; // 0x56C(0x4)
	int32_t TargetBuffID; // 0x570(0x4)
	float MinStopControlDelay; // 0x574(0x4)
	float SwitchSpyModeDelay; // 0x578(0x4)
	float ExposeTime; // 0x57C(0x4)
	int32_t CanExposeBuffID; // 0x580(0x4)
	int32_t OnExposeBuffID; // 0x584(0x4)
	int32_t OnControlBuffId; // 0x588(0x4)
	uint8_t Pad_0x58C[0x4]; // 0x58C(0x4)
	struct TArray<int32_t> DamageIgnoreBuffIds; // 0x590(0x10)
	struct FName ItemSocketName; // 0x5A0(0x8)
	struct FVector ItemAttachRelativeLocation; // 0x5A8(0xC)
	struct FRotator ItemAttachRelativeRotator; // 0x5B4(0xC)
	struct TSoftObjectPtr<USkeletalMesh> ItemMeshPath; // 0x5C0(0x28)
	struct TSoftObjectPtr<UAnimSequenceBase> ItemAnimSeqPath; // 0x5E8(0x28)
	struct UGPAudioEventAsset* DestroySoundEvent; // 0x610(0x8)
	struct UGPAudioEventAsset* FlySoundEvent; // 0x618(0x8)
	struct UGPAudioEventAsset* FlySoundStopEvent; // 0x620(0x8)
	struct TWeakObjectPtr<struct ADFMCharacter> AbilityActorOwner; // 0x628(0x8)
	struct TWeakObjectPtr<struct ADFMCharacter> TargetCharacter; // 0x630(0x8)
	struct UShapeComponent* PawnShapeComponent; // 0x638(0x8)
	struct UBionicSpyHudView* CachedView; // 0x640(0x8)
	float CanStopControlTime; // 0x648(0x4)
	struct FRotator LastCameraBaseRotation; // 0x64C(0xC)
	float CurrCameraPitch; // 0x658(0x4)
	float CurrCameraYaw; // 0x65C(0x4)
	uint8_t bIsCanExpose : 1; // 0x660(0x1), Mask(0x1)
	uint8_t BitPad_0x660_1 : 7; // 0x660(0x1)
	uint8_t Pad_0x661[0x3]; // 0x661(0x3)
	float CurrExposeTime; // 0x664(0x4)
	float CurrSwitchToSpyModeDelay; // 0x668(0x4)
	float CurrStopSpyModeDelay; // 0x66C(0x4)
	uint8_t bIsAutoStopSpyMode : 1; // 0x670(0x1), Mask(0x1)
	uint8_t BitPad_0x670_1 : 7; // 0x670(0x1)
	uint8_t bIsHiddenSpyTargetEquipment : 1; // 0x671(0x1), Mask(0x1)
	uint8_t BitPad_0x671_1 : 7; // 0x671(0x1)
	uint8_t bIsGrabbed : 1; // 0x672(0x1), Mask(0x1)
	uint8_t BitPad_0x672_1 : 7; // 0x672(0x1)
	uint8_t Pad_0x673[0x1]; // 0x673(0x1)
	float CurrGrabbedLookAtDelayTime; // 0x674(0x4)
	float CurrGrabbedLookAtLerpTime; // 0x678(0x4)
	float CurrGrabbedLerpTime; // 0x67C(0x4)
	struct FVector GrabbedLerpStartLocationOffset; // 0x680(0xC)
	struct FRotator GrabbedLerpStartRotationOffset; // 0x68C(0xC)
	float UpdateAudioTime; // 0x698(0x4)
	struct FGPAudioFuturePlayingID FlyAudio; // 0x69C(0x8)
	uint8_t bIsStayOnServer : 1; // 0x6A4(0x1), Mask(0x1)
	uint8_t BitPad_0x6A4_1 : 7; // 0x6A4(0x1)
	uint8_t Pad_0x6A5[0x3]; // 0x6A5(0x3)
	int32_t CurrentMarkNum; // 0x6A8(0x4)
	float NextMarkTime; // 0x6AC(0x4)
	struct UC203MarkComponent* MarkComponent; // 0x6B0(0x8)
	uint8_t bIsShowItemMesh : 1; // 0x6B8(0x1), Mask(0x1)
	uint8_t BitPad_0x6B8_1 : 7; // 0x6B8(0x1)
	uint8_t Pad_0x6B9[0x7]; // 0x6B9(0x7)

	// Object: Function DFMAbility.BionicSpyActor.UpdateBuffDetectorData
	// Flags: [Final|Native|Private]
	// Offset: 0xc3e8de4
	// Params: [ Num(1) Size(0x1) ]
	void UpdateBuffDetectorData(uint8_t bIsAdd);

	// Object: Function DFMAbility.BionicSpyActor.TryStopSwitchSkill
	// Flags: [Final|Native|Private]
	// Offset: 0xc3e8d40
	// Params: [ Num(1) Size(0x8) ]
	void TryStopSwitchSkill(struct AGPCharacter* InOwnerCharacter);

	// Object: Function DFMAbility.BionicSpyActor.TryStopSpyMode
	// Flags: [Final|Native|Private]
	// Offset: 0xc3e8d2c
	// Params: [ Num(0) Size(0x0) ]
	void TryStopSpyMode();

	// Object: Function DFMAbility.BionicSpyActor.TryShowItemMeshForTarget
	// Flags: [Final|Native|Private]
	// Offset: 0xc3e8d18
	// Params: [ Num(0) Size(0x0) ]
	void TryShowItemMeshForTarget();

	// Object: Function DFMAbility.BionicSpyActor.TryRemoveOnControlBuff
	// Flags: [Final|Native|Private]
	// Offset: 0xc3e8c74
	// Params: [ Num(1) Size(0x8) ]
	void TryRemoveOnControlBuff(struct AGPCharacter* InOwnerCharacter);

	// Object: Function DFMAbility.BionicSpyActor.TryRemoveHiddenSpyTargetEquipment
	// Flags: [Final|Native|Private]
	// Offset: 0xc3e8c60
	// Params: [ Num(0) Size(0x0) ]
	void TryRemoveHiddenSpyTargetEquipment();

	// Object: Function DFMAbility.BionicSpyActor.TryAddOnControlBuff
	// Flags: [Final|Native|Private]
	// Offset: 0xc3e8bbc
	// Params: [ Num(1) Size(0x8) ]
	void TryAddOnControlBuff(struct AGPCharacter* InOwnerCharacter);

	// Object: Function DFMAbility.BionicSpyActor.TryAddHiddenSpyTargetEquipment
	// Flags: [Final|Native|Private]
	// Offset: 0xc3e8ba8
	// Params: [ Num(0) Size(0x0) ]
	void TryAddHiddenSpyTargetEquipment();

	// Object: Function DFMAbility.BionicSpyActor.TickSwitchToSpyModeDelay
	// Flags: [Final|Native|Private]
	// Offset: 0xc3e8b04
	// Params: [ Num(1) Size(0x4) ]
	void TickSwitchToSpyModeDelay(float DeltaTime);

	// Object: Function DFMAbility.BionicSpyActor.TickStopSpyModeDelay
	// Flags: [Final|Native|Private]
	// Offset: 0xc3e8a60
	// Params: [ Num(1) Size(0x4) ]
	void TickStopSpyModeDelay(float DeltaTime);

	// Object: Function DFMAbility.BionicSpyActor.TickSpyTarget_View
	// Flags: [Final|Native|Private|HasOutParms|HasDefaults]
	// Offset: 0xc3e892c
	// Params: [ Num(3) Size(0x1C) ]
	void TickSpyTarget_View(float DeltaTime, struct FVector& Location, struct FRotator& Rotation);

	// Object: Function DFMAbility.BionicSpyActor.TickSpyTarget_Item
	// Flags: [Final|Native|Private|HasOutParms|HasDefaults]
	// Offset: 0xc3e8834
	// Params: [ Num(2) Size(0x18) ]
	void TickSpyTarget_Item(struct FVector& Location, struct FRotator& Rotation);

	// Object: Function DFMAbility.BionicSpyActor.TickSpyTarget_GrabbedView
	// Flags: [Final|Native|Private|HasOutParms|HasDefaults]
	// Offset: 0xc3e8700
	// Params: [ Num(3) Size(0x1C) ]
	void TickSpyTarget_GrabbedView(float DeltaTime, struct FVector& Location, struct FRotator& Rotation);

	// Object: Function DFMAbility.BionicSpyActor.TickSpyTarget
	// Flags: [Final|Native|Private]
	// Offset: 0xc3e865c
	// Params: [ Num(1) Size(0x4) ]
	void TickSpyTarget(float DeltaTime);

	// Object: Function DFMAbility.BionicSpyActor.TickMark
	// Flags: [Final|Native|Private]
	// Offset: 0xc3e85b8
	// Params: [ Num(1) Size(0x4) ]
	void TickMark(float DeltaTime);

	// Object: Function DFMAbility.BionicSpyActor.TickExpose
	// Flags: [Final|Native|Private]
	// Offset: 0xc3e8514
	// Params: [ Num(1) Size(0x4) ]
	void TickExpose(float DeltaTime);

	// Object: Function DFMAbility.BionicSpyActor.TickCheckTargetCharacter
	// Flags: [Final|Native|Private]
	// Offset: 0xc3e8500
	// Params: [ Num(0) Size(0x0) ]
	void TickCheckTargetCharacter();

	// Object: Function DFMAbility.BionicSpyActor.StopSpyTarget
	// Flags: [Final|Native|Public]
	// Offset: 0xc3e84ec
	// Params: [ Num(0) Size(0x0) ]
	void StopSpyTarget();

	// Object: Function DFMAbility.BionicSpyActor.StopAllSound
	// Flags: [Final|Native|Public]
	// Offset: 0xc3e84d8
	// Params: [ Num(0) Size(0x0) ]
	void StopAllSound();

	// Object: Function DFMAbility.BionicSpyActor.StartSpyTarget
	// Flags: [Final|Native|Public]
	// Offset: 0xc3e8434
	// Params: [ Num(1) Size(0x8) ]
	void StartSpyTarget(struct AGPCharacter* Target);

	// Object: Function DFMAbility.BionicSpyActor.SetSkillCD
	// Flags: [Final|Native|Private]
	// Offset: 0xc3e8420
	// Params: [ Num(0) Size(0x0) ]
	void SetSkillCD();

	// Object: Function DFMAbility.BionicSpyActor.SetPawnShapeComponentCollision
	// Flags: [Final|Native|Private]
	// Offset: 0xc3e8374
	// Params: [ Num(1) Size(0x1) ]
	void SetPawnShapeComponentCollision(uint8_t bIsCollision);

	// Object: Function DFMAbility.BionicSpyActor.SetOwnerSelfSpyActor
	// Flags: [Final|Native|Private|Const]
	// Offset: 0xc3e82d0
	// Params: [ Num(1) Size(0x8) ]
	void SetOwnerSelfSpyActor(struct ABionicSpyActor* SpyActor);

	// Object: Function DFMAbility.BionicSpyActor.SetIsShowItemMesh
	// Flags: [Final|Native|Private]
	// Offset: 0xc3e8224
	// Params: [ Num(1) Size(0x1) ]
	void SetIsShowItemMesh(uint8_t bIsShow);

	// Object: Function DFMAbility.BionicSpyActor.SetCanStopControlTime
	// Flags: [Final|Native|Private]
	// Offset: 0xc3e8210
	// Params: [ Num(0) Size(0x0) ]
	void SetCanStopControlTime();

	// Object: Function DFMAbility.BionicSpyActor.ServerTryStopControl
	// Flags: [Final|Net|NetReliableNative|Event|Private|NetServer]
	// Offset: 0xc3e81f4
	// Params: [ Num(0) Size(0x0) ]
	void ServerTryStopControl();

	// Object: Function DFMAbility.BionicSpyActor.SendViewBlackFadeIn
	// Flags: [Final|Native|Private]
	// Offset: 0xc3e81e0
	// Params: [ Num(0) Size(0x0) ]
	void SendViewBlackFadeIn();

	// Object: Function DFMAbility.BionicSpyActor.SendProjectileThreatExplosion
	// Flags: [Final|Native|Private]
	// Offset: 0xc3e81cc
	// Params: [ Num(0) Size(0x0) ]
	void SendProjectileThreatExplosion();

	// Object: Function DFMAbility.BionicSpyActor.SendProjectileThreatCreate
	// Flags: [Final|Native|Private]
	// Offset: 0xc3e81b8
	// Params: [ Num(0) Size(0x0) ]
	void SendProjectileThreatCreate();

	// Object: Function DFMAbility.BionicSpyActor.SendClientSpyBreak
	// Flags: [Final|Native|Public]
	// Offset: 0xc3e81a4
	// Params: [ Num(0) Size(0x0) ]
	void SendClientSpyBreak();

	// Object: Function DFMAbility.BionicSpyActor.RemoveCharacterTakeDamageEvent
	// Flags: [Final|Native|Private]
	// Offset: 0xc3e8190
	// Params: [ Num(0) Size(0x0) ]
	void RemoveCharacterTakeDamageEvent();

	// Object: Function DFMAbility.BionicSpyActor.PlayFlySound
	// Flags: [Final|Native|Public]
	// Offset: 0xc3e817c
	// Params: [ Num(0) Size(0x0) ]
	void PlayFlySound();

	// Object: Function DFMAbility.BionicSpyActor.PlayDestroySound
	// Flags: [Final|Native|Public]
	// Offset: 0xc3e8168
	// Params: [ Num(0) Size(0x0) ]
	void PlayDestroySound();

	// Object: Function DFMAbility.BionicSpyActor.OnTogglePortalDoor
	// Flags: [Final|Native|Private]
	// Offset: 0xc3e808c
	// Params: [ Num(2) Size(0x10) ]
	void OnTogglePortalDoor(struct AActor* PortalDoor, struct AGPCharacter* TogglePlayer);

	// Object: Function DFMAbility.BionicSpyActor.OnTargetCharacterDead
	// Flags: [Final|Native|Private]
	// Offset: 0xc3e8078
	// Params: [ Num(0) Size(0x0) ]
	void OnTargetCharacterDead();

	// Object: Function DFMAbility.BionicSpyActor.OnStartCanExpose
	// Flags: [Final|Native|Private]
	// Offset: 0xc3e8064
	// Params: [ Num(0) Size(0x0) ]
	void OnStartCanExpose();

	// Object: Function DFMAbility.BionicSpyActor.OnServerKnockBack
	// Flags: [Final|Native|Private]
	// Offset: 0xc3e7fc0
	// Params: [ Num(1) Size(0x8) ]
	void OnServerKnockBack(struct AGPCharacterBase* InGPCharacterBase);

	// Object: Function DFMAbility.BionicSpyActor.OnRep_TargetCharacter
	// Flags: [Final|Native|Private]
	// Offset: 0xc3e7fac
	// Params: [ Num(0) Size(0x0) ]
	void OnRep_TargetCharacter();

	// Object: Function DFMAbility.BionicSpyActor.OnPassiveMoveAction
	// Flags: [Final|Native|Private]
	// Offset: 0xc3e7f00
	// Params: [ Num(1) Size(0x1) ]
	void OnPassiveMoveAction(uint8_t IsActive);

	// Object: Function DFMAbility.BionicSpyActor.OnBeingAssassinate
	// Flags: [Final|Native|Private]
	// Offset: 0xc3e7e54
	// Params: [ Num(1) Size(0x1) ]
	void OnBeingAssassinate(uint8_t bCarried);

	// Object: Function DFMAbility.BionicSpyActor.OnArenaRoundStateChange
	// Flags: [Final|Native|Private]
	// Offset: 0xc3e7e40
	// Params: [ Num(0) Size(0x0) ]
	void OnArenaRoundStateChange();

	// Object: Function DFMAbility.BionicSpyActor.IsViewTarget
	// Flags: [Final|Native|Private|Const]
	// Offset: 0xc3e7e08
	// Params: [ Num(1) Size(0x1) ]
	uint8_t IsViewTarget();

	// Object: Function DFMAbility.BionicSpyActor.IsTargetCharacterValid
	// Flags: [Final|Native|Private]
	// Offset: 0xc3e7dd0
	// Params: [ Num(1) Size(0x1) ]
	uint8_t IsTargetCharacterValid();

	// Object: Function DFMAbility.BionicSpyActor.IsLocalPlayerSpyActor
	// Flags: [Final|Native|Private|Const]
	// Offset: 0xc3e7d98
	// Params: [ Num(1) Size(0x1) ]
	uint8_t IsLocalPlayerSpyActor();

	// Object: Function DFMAbility.BionicSpyActor.InitPawnShapeComponent
	// Flags: [Final|Native|Private]
	// Offset: 0xc3e7d84
	// Params: [ Num(0) Size(0x0) ]
	void InitPawnShapeComponent();

	// Object: Function DFMAbility.BionicSpyActor.InitMarkComponent
	// Flags: [Final|Native|Private]
	// Offset: 0xc3e7d70
	// Params: [ Num(0) Size(0x0) ]
	void InitMarkComponent();

	// Object: Function DFMAbility.BionicSpyActor.GetView
	// Flags: [Final|Native|Private]
	// Offset: 0xc3e7d3c
	// Params: [ Num(1) Size(0x8) ]
	struct UBionicSpyHudView* GetView();

	// Object: Function DFMAbility.BionicSpyActor.DoMark
	// Flags: [Final|Native|Private]
	// Offset: 0xc3e7d28
	// Params: [ Num(0) Size(0x0) ]
	void DoMark();

	// Object: Function DFMAbility.BionicSpyActor.ClientTryStopControl
	// Flags: [Final|Net|NetReliableNative|Event|Private|NetClient]
	// Offset: 0xc3e7d0c
	// Params: [ Num(0) Size(0x0) ]
	void ClientTryStopControl();

	// Object: Function DFMAbility.BionicSpyActor.CleanCameraData
	// Flags: [Final|Native|Private]
	// Offset: 0xc3e7cf8
	// Params: [ Num(0) Size(0x0) ]
	void CleanCameraData();

	// Object: Function DFMAbility.BionicSpyActor.CheckSoundAlive
	// Flags: [Final|Native|Public]
	// Offset: 0xc3e7ce4
	// Params: [ Num(0) Size(0x0) ]
	void CheckSoundAlive();

	// Object: Function DFMAbility.BionicSpyActor.CheckMaxEnergy
	// Flags: [Final|Native|Private]
	// Offset: 0xc3e7cd0
	// Params: [ Num(0) Size(0x0) ]
	void CheckMaxEnergy();

	// Object: Function DFMAbility.BionicSpyActor.CheckHudState
	// Flags: [Final|Native|Private]
	// Offset: 0xc3e7c2c
	// Params: [ Num(1) Size(0x8) ]
	void CheckHudState(struct AGPCharacter* InOwnerCharacter);

	// Object: Function DFMAbility.BionicSpyActor.CheckCanStopControlTime
	// Flags: [Final|Native|Private]
	// Offset: 0xc3e7bf4
	// Params: [ Num(1) Size(0x1) ]
	uint8_t CheckCanStopControlTime();

	// Object: Function DFMAbility.BionicSpyActor.CheckAutoStopSpyMode
	// Flags: [Final|Native|Private]
	// Offset: 0xc3e7be0
	// Params: [ Num(0) Size(0x0) ]
	void CheckAutoStopSpyMode();

	// Object: Function DFMAbility.BionicSpyActor.AutoSetPawnShapeCollision
	// Flags: [Final|Native|Private]
	// Offset: 0xc3e7bcc
	// Params: [ Num(0) Size(0x0) ]
	void AutoSetPawnShapeCollision();

	// Object: Function DFMAbility.BionicSpyActor.AddCharacterTakeDamageEvent
	// Flags: [Final|Native|Private]
	// Offset: 0xc3e7bb8
	// Params: [ Num(0) Size(0x0) ]
	void AddCharacterTakeDamageEvent();
};

// Object: Class DFMAbility.BionicSpyCueHandler
// Size: 0x148 (Inherited: 0x130)
struct UBionicSpyCueHandler : UGPEffectCueHandler
{
	DEFINE_UE_CLASS_HELPERS(UBionicSpyCueHandler, "BionicSpyCueHandler")

	uint8_t bSetForceKeepFullMipLevels : 1; // 0x130(0x1), Mask(0x1)
	uint8_t BitPad_0x130_1 : 7; // 0x130(0x1)
	uint8_t Pad_0x131[0x3]; // 0x131(0x3)
	struct FName StartSoundName; // 0x134(0x8)
	uint8_t Pad_0x13C[0x4]; // 0x13C(0x4)
	struct FTimerHandle TickTimerHandle; // 0x140(0x8)

	// Object: Function DFMAbility.BionicSpyCueHandler.StopTickTimer
	// Flags: [Final|Native|Private]
	// Offset: 0xc3ea9e4
	// Params: [ Num(0) Size(0x0) ]
	void StopTickTimer();

	// Object: Function DFMAbility.BionicSpyCueHandler.StopStartSound
	// Flags: [Final|Native|Private]
	// Offset: 0xc3ea9d0
	// Params: [ Num(0) Size(0x0) ]
	void StopStartSound();

	// Object: Function DFMAbility.BionicSpyCueHandler.StartTickTimer
	// Flags: [Final|Native|Private]
	// Offset: 0xc3ea9bc
	// Params: [ Num(0) Size(0x0) ]
	void StartTickTimer();

	// Object: Function DFMAbility.BionicSpyCueHandler.PlayStartSound
	// Flags: [Final|Native|Private]
	// Offset: 0xc3ea9a8
	// Params: [ Num(0) Size(0x0) ]
	void PlayStartSound();

	// Object: Function DFMAbility.BionicSpyCueHandler.IsFPP
	// Flags: [Final|Native|Private|Const]
	// Offset: 0xc3ea970
	// Params: [ Num(1) Size(0x1) ]
	uint8_t IsFPP();

	// Object: Function DFMAbility.BionicSpyCueHandler.Is1P
	// Flags: [Final|Native|Private|Const]
	// Offset: 0xc3ea938
	// Params: [ Num(1) Size(0x1) ]
	uint8_t Is1P();

	// Object: Function DFMAbility.BionicSpyCueHandler.DoTimerTick
	// Flags: [Final|Native|Private]
	// Offset: 0xc3ea924
	// Params: [ Num(0) Size(0x0) ]
	void DoTimerTick();
};

// Object: Class DFMAbility.BionicSpyMovement
// Size: 0xF8 (Inherited: 0xF8)
struct UBionicSpyMovement : UActorComponent
{
	DEFINE_UE_CLASS_HELPERS(UBionicSpyMovement, "BionicSpyMovement")
};

// Object: Class DFMAbility.BowArrowMesh
// Size: 0x3B8 (Inherited: 0x370)
struct ABowArrowMesh : AActor
{
	DEFINE_UE_CLASS_HELPERS(ABowArrowMesh, "BowArrowMesh")

	struct FName FireArrowMeshTag; // 0x370(0x8)
	struct FName ProxSensorArrowMeshTag; // 0x378(0x8)
	struct UStaticMeshComponent* FireArrowMeshComponent; // 0x380(0x8)
	struct UStaticMeshComponent* ProxSensorArrowMeshComponent; // 0x388(0x8)
	struct UFXResourceContainerComponent* ArrowFX; // 0x390(0x8)
	struct FName FireArrowFXName; // 0x398(0x8)
	struct FName ProxSensorArrowFXName; // 0x3A0(0x8)
	uint8_t Pad_0x3A8[0x10]; // 0x3A8(0x10)

	// Object: Function DFMAbility.BowArrowMesh.SetArrowType
	// Flags: [Final|Native|Public]
	// Offset: 0xc3eacd8
	// Params: [ Num(1) Size(0x1) ]
	void SetArrowType(uint8_t IsProxSensorArrow);

	// Object: Function DFMAbility.BowArrowMesh.SetArrowEffect
	// Flags: [Final|Native|Public]
	// Offset: 0xc3eac2c
	// Params: [ Num(1) Size(0x1) ]
	void SetArrowEffect(uint8_t bActive);

	// Object: Function DFMAbility.BowArrowMesh.OnChargeStateChange
	// Flags: [Final|Native|Public]
	// Offset: 0xc3eab80
	// Params: [ Num(1) Size(0x1) ]
	void OnChargeStateChange(uint8_t ischarging);

	// Object: Function DFMAbility.BowArrowMesh.BP_SetFXRenderMatrixMode
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xc3eaaa0
	// Params: [ Num(2) Size(0x9) ]
	void BP_SetFXRenderMatrixMode(struct UFXResourceContainerComponent* FXResource, ERenderMatrixMode MatrixMode);

	// Object: Function DFMAbility.BowArrowMesh.BP_OnChargeStateChange
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(1) Size(0x1) ]
	void BP_OnChargeStateChange(uint8_t ischarging);
};

// Object: Class DFMAbility.C203MarkComponent
// Size: 0x238 (Inherited: 0xF8)
struct UC203MarkComponent : UActorComponent
{
	DEFINE_UE_CLASS_HELPERS(UC203MarkComponent, "C203MarkComponent")

	struct TArray<struct FC203MarkData> AllGameRoleData; // 0xF8(0x10)
	int32_t SkillId; // 0x108(0x4)
	uint8_t Pad_0x10C[0x4]; // 0x10C(0x4)
	struct FC203MarkData CurrentMarkData; // 0x110(0x38)
	struct TWeakObjectPtr<struct ADFMCharacter> AbilityOwner; // 0x148(0x8)
	struct TWeakObjectPtr<struct ADFMCharacter> SpyTarget; // 0x150(0x8)
	struct TMap<uint32_t, float> NextMarkTimeMap; // 0x158(0x50)
	uint8_t Pad_0x1A8[0x90]; // 0x1A8(0x90)

	// Object: Function DFMAbility.C203MarkComponent.TryMarkTarget
	// Flags: [Final|Native|Public|HasDefaults]
	// Offset: 0xc3ebcac
	// Params: [ Num(3) Size(0x15) ]
	uint8_t TryMarkTarget(struct AGPCharacter* Target, struct FVector CameraForward);

	// Object: Function DFMAbility.C203MarkComponent.TryMarkLockCountDown
	// Flags: [Final|Native|Private]
	// Offset: 0xc3ebbfc
	// Params: [ Num(2) Size(0x9) ]
	uint8_t TryMarkLockCountDown(struct AGPCharacter* Target);

	// Object: Function DFMAbility.C203MarkComponent.TryBreakMarkLockCountDown
	// Flags: [Final|Native|Private]
	// Offset: 0xc3ebb58
	// Params: [ Num(1) Size(0x8) ]
	void TryBreakMarkLockCountDown(struct AGPCharacter* Target);

	// Object: Function DFMAbility.C203MarkComponent.ServerDoMarkTarget_C203
	// Flags: [Final|Net|NetReliableNative|Event|Private|NetServer]
	// Offset: 0xc3ebaac
	// Params: [ Num(1) Size(0x8) ]
	void ServerDoMarkTarget_C203(struct AGPCharacter* Target);

	// Object: Function DFMAbility.C203MarkComponent.SaveMarkTargetCD
	// Flags: [Final|Native|Private]
	// Offset: 0xc3eba08
	// Params: [ Num(1) Size(0x8) ]
	void SaveMarkTargetCD(struct AGPCharacter* Target);

	// Object: Function DFMAbility.C203MarkComponent.RealDoMarkTarget_C203
	// Flags: [Final|Native|Private]
	// Offset: 0xc3eb964
	// Params: [ Num(1) Size(0x8) ]
	void RealDoMarkTarget_C203(struct AGPCharacter* Target);

	// Object: Function DFMAbility.C203MarkComponent.IsIsBionicSpy
	// Flags: [Final|Native|Public|Const]
	// Offset: 0xc3eb93c
	// Params: [ Num(1) Size(0x1) ]
	uint8_t IsIsBionicSpy();

	// Object: Function DFMAbility.C203MarkComponent.IsBionicBird
	// Flags: [Final|Native|Public|Const]
	// Offset: 0xc3eb914
	// Params: [ Num(1) Size(0x1) ]
	uint8_t IsBionicBird();

	// Object: Function DFMAbility.C203MarkComponent.InitGameRoleData
	// Flags: [Final|Native|Private]
	// Offset: 0xc3eb900
	// Params: [ Num(0) Size(0x0) ]
	void InitGameRoleData();

	// Object: Function DFMAbility.C203MarkComponent.InitBLockTest
	// Flags: [Final|Native|Private]
	// Offset: 0xc3eb8ec
	// Params: [ Num(0) Size(0x0) ]
	void InitBLockTest();

	// Object: Function DFMAbility.C203MarkComponent.Init
	// Flags: [Final|Native|Public]
	// Offset: 0xc3eb7d4
	// Params: [ Num(3) Size(0x14) ]
	void Init(struct ADFMCharacter* InAbilityOwner, struct ADFMCharacter* InSpyTarget, int32_t InSkillId);

	// Object: Function DFMAbility.C203MarkComponent.GetCheckCD
	// Flags: [Final|Native|Public|Const]
	// Offset: 0xc3eb7a0
	// Params: [ Num(1) Size(0x4) ]
	float GetCheckCD();

	// Object: Function DFMAbility.C203MarkComponent.GetBaseLocation
	// Flags: [Final|Native|Private|HasDefaults|Const]
	// Offset: 0xc3eb768
	// Params: [ Num(1) Size(0xC) ]
	struct FVector GetBaseLocation();

	// Object: Function DFMAbility.C203MarkComponent.DoMarkTarget_C203
	// Flags: [Final|Native|Private]
	// Offset: 0xc3eb6c4
	// Params: [ Num(1) Size(0x8) ]
	void DoMarkTarget_C203(struct AGPCharacter* Target);

	// Object: Function DFMAbility.C203MarkComponent.DoMarkTarget_Base
	// Flags: [Final|Native|Private]
	// Offset: 0xc3eb620
	// Params: [ Num(1) Size(0x8) ]
	void DoMarkTarget_Base(struct AGPCharacter* Target);

	// Object: Function DFMAbility.C203MarkComponent.DoBlockTest
	// Flags: [Final|Native|Private|HasDefaults]
	// Offset: 0xc3eb4f8
	// Params: [ Num(4) Size(0x21) ]
	uint8_t DoBlockTest(struct AGPCharacter* Target, struct FVector StartPoint, struct FVector EndPoint);

	// Object: Function DFMAbility.C203MarkComponent.CheckTargetSilenceZone
	// Flags: [Final|Native|Private|Const]
	// Offset: 0xc3eb448
	// Params: [ Num(2) Size(0x9) ]
	uint8_t CheckTargetSilenceZone(struct AGPCharacter* Target);

	// Object: Function DFMAbility.C203MarkComponent.CheckTargetRenderTime
	// Flags: [Final|Native|Private|Const]
	// Offset: 0xc3eb398
	// Params: [ Num(2) Size(0x9) ]
	uint8_t CheckTargetRenderTime(struct AGPCharacter* Target);

	// Object: Function DFMAbility.C203MarkComponent.CheckSmoke
	// Flags: [Final|Native|Private|HasDefaults]
	// Offset: 0xc3eb2ac
	// Params: [ Num(3) Size(0x19) ]
	uint8_t CheckSmoke(struct FVector Start, struct FVector End);

	// Object: Function DFMAbility.C203MarkComponent.CheckMarkTargetCD
	// Flags: [Final|Native|Private|Const]
	// Offset: 0xc3eb1fc
	// Params: [ Num(2) Size(0x9) ]
	uint8_t CheckMarkTargetCD(struct AGPCharacter* Target);

	// Object: Function DFMAbility.C203MarkComponent.CheckMarkTarget
	// Flags: [Final|Native|Private|HasDefaults]
	// Offset: 0xc3eb110
	// Params: [ Num(3) Size(0x15) ]
	uint8_t CheckMarkTarget(struct AGPCharacter* Target, struct FVector CameraForward);

	// Object: Function DFMAbility.C203MarkComponent.CheckMarkBLock
	// Flags: [Final|Native|Private]
	// Offset: 0xc3eb060
	// Params: [ Num(2) Size(0x9) ]
	uint8_t CheckMarkBLock(struct AGPCharacter* Target);

	// Object: Function DFMAbility.C203MarkComponent.CheckIsSpyViewTarget
	// Flags: [Final|Native|Private|Const]
	// Offset: 0xc3eafb0
	// Params: [ Num(2) Size(0x9) ]
	uint8_t CheckIsSpyViewTarget(struct AGPCharacter* Target);

	// Object: Function DFMAbility.C203MarkComponent.CheckExitState
	// Flags: [Final|Native|Private]
	// Offset: 0xc3eaf00
	// Params: [ Num(2) Size(0x9) ]
	uint8_t CheckExitState(struct AGPCharacter* Target);
};

// Object: Class DFMAbility.C204InterferenceAnimInstance
// Size: 0xA30 (Inherited: 0x280)
struct UC204InterferenceAnimInstance : UGPAnimInstanceBase
{
	DEFINE_UE_CLASS_HELPERS(UC204InterferenceAnimInstance, "C204InterferenceAnimInstance")

	struct FC204InterferenceAnimInstanceProxy LocalProxy; // 0x280(0x7A0)
	struct USkeletalMeshComponent* MasterPoseMesh; // 0xA20(0x8)
	uint8_t Pad_0xA28[0x8]; // 0xA28(0x8)

	// Object: Function DFMAbility.C204InterferenceAnimInstance.SetInfo
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xc3ebf08
	// Params: [ Num(2) Size(0x2) ]
	void SetInfo(uint8_t bPreFire, uint8_t bExplode);
};

// Object: Class DFMAbility.C501CallAIFightTargetComponent
// Size: 0x1B0 (Inherited: 0xF8)
struct UC501CallAIFightTargetComponent : UActorComponent
{
	DEFINE_UE_CLASS_HELPERS(UC501CallAIFightTargetComponent, "C501CallAIFightTargetComponent")

	float Normal_VisionLostRemoveDelay; // 0xF8(0x4)
	float Assault_VisionLostRemoveDelay; // 0xFC(0x4)
	float UpdateInterval; // 0x100(0x4)
	float DistanceScoreWeight; // 0x104(0x4)
	float DirectionScoreWeight; // 0x108(0x4)
	float TypeScoreWeight; // 0x10C(0x4)
	float StickinessScoreWeight; // 0x110(0x4)
	float VisionScoreWeight; // 0x114(0x4)
	float BroadcastedTargetScoreWeight; // 0x118(0x4)
	float PlayerTargetBonus; // 0x11C(0x4)
	float CurrentTargetStickinessBonus; // 0x120(0x4)
	float MaxEvaluateDistance; // 0x124(0x4)
	float VisionDecayDuration; // 0x128(0x4)
	float BroadcastedTargetBonus; // 0x12C(0x4)
	uint8_t bEnableDebugLog : 1; // 0x130(0x1), Mask(0x1)
	uint8_t BitPad_0x130_1 : 7; // 0x130(0x1)
	uint8_t Pad_0x131[0x7]; // 0x131(0x7)
	struct TArray<struct FC501FightTargetCandidate> CandidateList; // 0x138(0x10)
	struct TWeakObjectPtr<struct ADFMCharacter> CurrentFightTarget; // 0x148(0x8)
	struct TSet<struct TWeakObjectPtr<struct ADFMCharacter>> BroadcastedFightTargets; // 0x150(0x50)
	struct TWeakObjectPtr<struct ADFMAIController> OwnerController; // 0x1A0(0x8)
	uint8_t Pad_0x1A8[0x8]; // 0x1A8(0x8)

	// Object: Function DFMAbility.C501CallAIFightTargetComponent.RemoveCandidate
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xc3ec444
	// Params: [ Num(1) Size(0x8) ]
	void RemoveCandidate(struct ADFMCharacter* Target);

	// Object: Function DFMAbility.C501CallAIFightTargetComponent.RemoveBroadcastedFightTarget
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xc3ec3a0
	// Params: [ Num(1) Size(0x8) ]
	void RemoveBroadcastedFightTarget(struct ADFMCharacter* Target);

	// Object: Function DFMAbility.C501CallAIFightTargetComponent.IsBroadcastedFightTarget
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xc3ec2f0
	// Params: [ Num(2) Size(0x9) ]
	uint8_t IsBroadcastedFightTarget(struct ADFMCharacter* Target);

	// Object: Function DFMAbility.C501CallAIFightTargetComponent.HasValidFightTarget
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xc3ec2b8
	// Params: [ Num(1) Size(0x1) ]
	uint8_t HasValidFightTarget();

	// Object: Function DFMAbility.C501CallAIFightTargetComponent.GetCurrentFightTarget
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xc3ec284
	// Params: [ Num(1) Size(0x8) ]
	struct ADFMCharacter* GetCurrentFightTarget();

	// Object: Function DFMAbility.C501CallAIFightTargetComponent.GetCandidateList
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xc3ec1f8
	// Params: [ Num(1) Size(0x10) ]
	struct TArray<struct FC501FightTargetCandidate> GetCandidateList();

	// Object: Function DFMAbility.C501CallAIFightTargetComponent.GetCandidateCount
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xc3ec1dc
	// Params: [ Num(1) Size(0x4) ]
	int32_t GetCandidateCount();

	// Object: Function DFMAbility.C501CallAIFightTargetComponent.GetBroadcastedFightTargetCount
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xc3ec1a8
	// Params: [ Num(1) Size(0x4) ]
	int32_t GetBroadcastedFightTargetCount();

	// Object: Function DFMAbility.C501CallAIFightTargetComponent.ForceReevaluateTargets
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xc3ec194
	// Params: [ Num(0) Size(0x0) ]
	void ForceReevaluateTargets();

	// Object: Function DFMAbility.C501CallAIFightTargetComponent.ClearCandidates
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xc3ec180
	// Params: [ Num(0) Size(0x0) ]
	void ClearCandidates();

	// Object: Function DFMAbility.C501CallAIFightTargetComponent.ClearBroadcastedFightTargets
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xc3ec16c
	// Params: [ Num(0) Size(0x0) ]
	void ClearBroadcastedFightTargets();

	// Object: Function DFMAbility.C501CallAIFightTargetComponent.AddCandidate
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xc3ec0c8
	// Params: [ Num(1) Size(0x8) ]
	void AddCandidate(struct ADFMCharacter* Target);

	// Object: Function DFMAbility.C501CallAIFightTargetComponent.AddBroadcastedFightTarget
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xc3ec024
	// Params: [ Num(1) Size(0x8) ]
	void AddBroadcastedFightTarget(struct ADFMCharacter* Target);
};

// Object: Class DFMAbility.CallAIAbility
// Size: 0x758 (Inherited: 0x370)
struct ACallAIAbility : AActor
{
	DEFINE_UE_CLASS_HELPERS(ACallAIAbility, "CallAIAbility")

	uint8_t Pad_0x370[0x8]; // 0x370(0x8)
	struct FMulticastInlineDelegate OnCallAIStatusUpdated; // 0x378(0x10)
	struct FName AIInfoHudName; // 0x388(0x8)
	struct FCallAIConfig CallAIConfig; // 0x390(0x10)
	struct TArray<struct AActor*> ForbiddenAreas; // 0x3A0(0x10)
	struct TArray<struct FAISpawnInfo> AISpawnInfos; // 0x3B0(0x10)
	struct TArray<struct AAIController*> CallAIControllers; // 0x3C0(0x10)
	struct TArray<struct ADFMCharacter*> CallAICharacters; // 0x3D0(0x10)
	struct TArray<struct ADFMCharacter*> MarkedCharacters; // 0x3E0(0x10)
	struct TMap<struct AAIController*, ECallAIType> ControllerTypeMap; // 0x3F0(0x50)
	struct TArray<struct FPendingExitAI> PendingExitAIs; // 0x440(0x10)
	struct APlayerCommanderFakeAIController* FakeCommander; // 0x450(0x8)
	struct TArray<struct ADFMCharacter*> Enemies; // 0x458(0x10)
	uint8_t Pad_0x468[0x4]; // 0x468(0x4)
	float EnemySearchRadius; // 0x46C(0x4)
	float CallAIDelay; // 0x470(0x4)
	float AIExitDelay; // 0x474(0x4)
	float ForceExitDelay; // 0x478(0x4)
	float CombatEnemyTimeThreshold; // 0x47C(0x4)
	struct FText Text_CallAIFailed; // 0x480(0x18)
	struct AGPDeformableSmokeEmitActor* SmokeActorBP; // 0x498(0x8)
	float SmokeSpawnDelay; // 0x4A0(0x4)
	int32_t SmokeId; // 0x4A4(0x4)
	float SpawnLocationCheckRadius; // 0x4A8(0x4)
	float DoorAvoidanceDistance; // 0x4AC(0x4)
	uint8_t bValidateSpawnLocations : 1; // 0x4B0(0x1), Mask(0x1)
	uint8_t BitPad_0x4B0_1 : 7; // 0x4B0(0x1)
	uint8_t Pad_0x4B1[0x7]; // 0x4B1(0x7)
	struct TArray<struct TSoftObjectPtr<UEnvQuery>> BasePointEnvQuerySequence; // 0x4B8(0x10)
	struct TSoftObjectPtr<UEnvQuery> SpawnPointEnvQuery_CallAI2; // 0x4C8(0x28)
	struct FCallAI2SpawnContext CallAI2Context; // 0x4F0(0x48)
	uint64_t SkillKillAttackValueId; // 0x538(0x8)
	struct FName PhoneMeshName; // 0x540(0x8)
	struct FName PhoneScreenMaterialSlotName; // 0x548(0x8)
	struct UMaterialInterface* DefaultPhoneScreenMaterial; // 0x550(0x8)
	struct UMaterialInterface* AnaisPhoneScreenMaterial; // 0x558(0x8)
	struct TArray<struct AGPDeformableSmokeEmitActor*> SpawnedSmokeActors; // 0x560(0x10)
	uint8_t Pad_0x570[0x70]; // 0x570(0x70)
	struct TMap<struct ADFMCharacter*, struct FEnemyPlayerInfo> CombatEnemyPlayerInfos; // 0x5E0(0x50)
	float ActivityRangeRadius_Prudent; // 0x630(0x4)
	float ActivityRangeRadius_Assult; // 0x634(0x4)
	int32_t SkillId_Aura; // 0x638(0x4)
	int32_t SkillId_PlayPrudentAnim; // 0x63C(0x4)
	int32_t SkillId_PlayAssaultAnim; // 0x640(0x4)
	uint8_t Pad_0x644[0x4]; // 0x644(0x4)
	struct UCallAIActivityZoneMapIconViewController* ClientActivityZoneController; // 0x648(0x8)
	struct FName BBKey_IsRecallMoving; // 0x650(0x8)
	struct UEnvQuery* CommandMoveEnvQuery; // 0x658(0x8)
	float CommandMoveCooldown; // 0x660(0x4)
	float CommandMoveMinDistance; // 0x664(0x4)
	float CommandMoveMarkerLifeSpan; // 0x668(0x4)
	uint8_t Pad_0x66C[0xC]; // 0x66C(0xC)
	struct FName BBKey_CommandTargetLocation; // 0x678(0x8)
	struct FName BBKey_IsCommandMoving; // 0x680(0x8)
	struct FString AudioType_TooFar; // 0x688(0x10)
	struct FText Text_TooFar; // 0x698(0x18)
	struct FName CommandButtonAudioName; // 0x6B0(0x8)
	struct FName CallAIVoiceName; // 0x6B8(0x8)
	struct FName CallAIVoiceName_Anais; // 0x6C0(0x8)
	struct FName AIExitVoiceName; // 0x6C8(0x8)
	struct FName CombatStyle_Prudent_VoiceName; // 0x6D0(0x8)
	struct FName CombatStyle_Assault_VoiceName; // 0x6D8(0x8)
	struct FName CommandMoveVoiceName; // 0x6E0(0x8)
	struct UC501CallAIFightTargetComponent* CallAIFightTargetComponentClass; // 0x6E8(0x8)
	struct ADFMCharacter* AbilityCharacter; // 0x6F0(0x8)
	int32_t SkillId; // 0x6F8(0x4)
	uint8_t bRepIsInit : 1; // 0x6FC(0x1), Mask(0x1)
	uint8_t BitPad_0x6FC_1 : 7; // 0x6FC(0x1)
	uint8_t bIsPlayingCallAnimation : 1; // 0x6FD(0x1), Mask(0x1)
	uint8_t BitPad_0x6FD_1 : 7; // 0x6FD(0x1)
	uint8_t bHasAnais : 1; // 0x6FE(0x1), Mask(0x1)
	uint8_t BitPad_0x6FE_1 : 7; // 0x6FE(0x1)
	uint8_t Pad_0x6FF[0x19]; // 0x6FF(0x19)
	struct FCallAIStatusInfo CurrentStatusInfo; // 0x718(0x30)
	uint8_t Pad_0x748[0x8]; // 0x748(0x8)
	struct ASkillSubsystem* SkillSystem; // 0x750(0x8)

	// Object: Function DFMAbility.CallAIAbility.ServerCommandAI
	// Flags: [Net|NetReliableNative|Event|Public|NetServer|HasDefaults]
	// Offset: 0xc3ecd88
	// Params: [ Num(1) Size(0xC) ]
	void ServerCommandAI(struct FVector TargetLocation);

	// Object: Function DFMAbility.CallAIAbility.OnTakeDamage
	// Flags: [Final|Native|Public|HasOutParms]
	// Offset: 0xc3ecc74
	// Params: [ Num(2) Size(0x8A1) ]
	void OnTakeDamage(const struct FDamageResultInfo& DamageResult, ECharacterPart& HitPart);

	// Object: Function DFMAbility.CallAIAbility.OnSummonerAssistKill
	// Flags: [Final|Native|Public|HasOutParms]
	// Offset: 0xc3ecbb0
	// Params: [ Num(1) Size(0x1A8) ]
	void OnSummonerAssistKill(const struct FKillInfo& KillInfo);

	// Object: Function DFMAbility.CallAIAbility.OnSummonedAIMakeDamage
	// Flags: [Final|Native|Public|HasOutParms]
	// Offset: 0xc3ecaf0
	// Params: [ Num(1) Size(0x8A0) ]
	void OnSummonedAIMakeDamage(const struct FDamageResultInfo& DamageResult);

	// Object: Function DFMAbility.CallAIAbility.OnSummonedAIDied
	// Flags: [Final|Native|Public]
	// Offset: 0xc3ec9d8
	// Params: [ Num(3) Size(0x18) ]
	void OnSummonedAIDied(struct AGPCharacterBase* DiedCharacter, struct AController* Killer, struct UDamageType* DamageType);

	// Object: Function DFMAbility.CallAIAbility.OnRep_Init
	// Flags: [Final|Native|Public]
	// Offset: 0xc3ec9c4
	// Params: [ Num(0) Size(0x0) ]
	void OnRep_Init();

	// Object: Function DFMAbility.CallAIAbility.OnRep_CurrentStatusInfo
	// Flags: [Final|Native|Private]
	// Offset: 0xc3ec9b0
	// Params: [ Num(0) Size(0x0) ]
	void OnRep_CurrentStatusInfo();

	// Object: Function DFMAbility.CallAIAbility.OnRep_CallAICharacters
	// Flags: [Final|Native|Public]
	// Offset: 0xc3ec99c
	// Params: [ Num(0) Size(0x0) ]
	void OnRep_CallAICharacters();

	// Object: Function DFMAbility.CallAIAbility.OnPlayerMakeDamage
	// Flags: [Final|Native|Public|HasOutParms]
	// Offset: 0xc3ec8dc
	// Params: [ Num(1) Size(0x8A0) ]
	void OnPlayerMakeDamage(const struct FDamageResultInfo& DamageResult);

	// Object: Function DFMAbility.CallAIAbility.OnNetReconnectSuccess
	// Flags: [Final|Native|Public]
	// Offset: 0xc3ec8c8
	// Params: [ Num(0) Size(0x0) ]
	void OnNetReconnectSuccess();

	// Object: DelegateFunction DFMAbility.CallAIAbility.OnCallAIStatusUpdated__DelegateSignature
	// Flags: [MulticastDelegate|Public|Delegate|HasOutParms]
	// Offset: 0x101d2e88
	// Params: [ Num(1) Size(0x30) ]
	void OnCallAIStatusUpdated__DelegateSignature(const struct FCallAIStatusInfo& StatusInfo);

	// Object: Function DFMAbility.CallAIAbility.OnCallAIStatusChanged_Handler
	// Flags: [Final|Native|Public|HasOutParms]
	// Offset: 0xc3ec7ec
	// Params: [ Num(1) Size(0x30) ]
	void OnCallAIStatusChanged_Handler(const struct FCallAIStatusInfo& StatusInfo);

	// Object: Function DFMAbility.CallAIAbility.IsCombatStylePrudent
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xc3ec7c8
	// Params: [ Num(1) Size(0x1) ]
	uint8_t IsCombatStylePrudent();

	// Object: Function DFMAbility.CallAIAbility.IsCombatStyleAssault
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xc3ec7a4
	// Params: [ Num(1) Size(0x1) ]
	uint8_t IsCombatStyleAssault();

	// Object: Function DFMAbility.CallAIAbility.GetCurrentCombatStyle
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xc3ec788
	// Params: [ Num(1) Size(0x1) ]
	ECallAICombatStyle GetCurrentCombatStyle();

	// Object: Function DFMAbility.CallAIAbility.GetCallAIStatus
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xc3ec6f4
	// Params: [ Num(1) Size(0x30) ]
	struct FCallAIStatusInfo GetCallAIStatus();

	// Object: Function DFMAbility.CallAIAbility.ClientShowTips
	// Flags: [Net|NetReliableNative|Event|Public|NetClient]
	// Offset: 0xc3ec640
	// Params: [ Num(1) Size(0x10) ]
	void ClientShowTips(struct FString TipsBuffer);
};

// Object: Class DFMAbility.CallAIInfoPanelControllerHelper
// Size: 0x68 (Inherited: 0x28)
struct UCallAIInfoPanelControllerHelper : UObject
{
	DEFINE_UE_CLASS_HELPERS(UCallAIInfoPanelControllerHelper, "CallAIInfoPanelControllerHelper")

	uint8_t Pad_0x28[0x8]; // 0x28(0x8)
	struct ACallAIAbility* CallAIAbility; // 0x30(0x8)
	uint8_t Pad_0x38[0x30]; // 0x38(0x30)

	// Object: Function DFMAbility.CallAIInfoPanelControllerHelper.OnCallAIStatusUpdated
	// Flags: [Final|Native|Public|HasOutParms]
	// Offset: 0xc3effbc
	// Params: [ Num(1) Size(0x30) ]
	void OnCallAIStatusUpdated(const struct FCallAIStatusInfo& StatusInfo);
};

// Object: Class DFMAbility.CallAIInfoPanelHudController
// Size: 0x98 (Inherited: 0x80)
struct UCallAIInfoPanelHudController : UGPBaseHudController
{
	DEFINE_UE_CLASS_HELPERS(UCallAIInfoPanelHudController, "CallAIInfoPanelHudController")

	uint8_t Pad_0x80[0x8]; // 0x80(0x8)
	struct UCallAIInfoPanelControllerHelper* ControllerHelper; // 0x88(0x8)
	struct UCallAIInfoPanelHudView* CallAIView; // 0x90(0x8)
};

// Object: Class DFMAbility.CallAIInfoPanelHudView
// Size: 0x488 (Inherited: 0x400)
struct UCallAIInfoPanelHudView : UGPBaseHudView
{
	DEFINE_UE_CLASS_HELPERS(UCallAIInfoPanelHudView, "CallAIInfoPanelHudView")

	uint8_t Pad_0x400[0x8]; // 0x400(0x8)
	struct UDFHDKeyIconBoxTextWidget* WBP_CommonKeyIconBoxText_1; // 0x408(0x8)
	struct FName UIDeviceStartAudioName; // 0x410(0x8)
	struct FName ButtonActivateAudioName; // 0x418(0x8)
	struct FName ButtonEndAudioName; // 0x420(0x8)
	struct FCallAIInfoPanelViewLogic ViewLogic; // 0x428(0x50)
	struct TArray<struct UUserWidget*> AIUnitWidgets; // 0x478(0x10)

	// Object: Function DFMAbility.CallAIInfoPanelHudView.UpdateAIStatus
	// Flags: [Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0xc3f02a0
	// Params: [ Num(1) Size(0x30) ]
	void UpdateAIStatus(const struct FCallAIStatusInfo& StatusInfo);

	// Object: Function DFMAbility.CallAIInfoPanelHudView.BP_SetType
	// Flags: [Event|Protected|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(1) Size(0x4) ]
	void BP_SetType(int32_t CombatStyle);

	// Object: Function DFMAbility.CallAIInfoPanelHudView.BP_SetPercent
	// Flags: [Event|Protected|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(1) Size(0x4) ]
	void BP_SetPercent(float Percent);

	// Object: Function DFMAbility.CallAIInfoPanelHudView.BP_SetAINumb
	// Flags: [Event|Protected|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(4) Size(0x10) ]
	void BP_SetAINumb(int32_t RifleCount, int32_t MGCount, int32_t ShieldCount, int32_t FirebatCount);
};

// Object: Class DFMAbility.CallAIInfoPanelUIController
// Size: 0xC0 (Inherited: 0xA8)
struct UCallAIInfoPanelUIController : UBaseUIController
{
	DEFINE_UE_CLASS_HELPERS(UCallAIInfoPanelUIController, "CallAIInfoPanelUIController")

	uint8_t Pad_0xA8[0x8]; // 0xA8(0x8)
	struct UCallAIInfoPanelControllerHelper* ControllerHelper; // 0xB0(0x8)
	struct UCallAIInfoPanelUIView* CallAIView; // 0xB8(0x8)
};

// Object: Class DFMAbility.CallAIInfoPanelUIView
// Size: 0x4E8 (Inherited: 0x460)
struct UCallAIInfoPanelUIView : UDFMBaseUIView
{
	DEFINE_UE_CLASS_HELPERS(UCallAIInfoPanelUIView, "CallAIInfoPanelUIView")

	uint8_t Pad_0x460[0x8]; // 0x460(0x8)
	struct UDFHDKeyIconBoxTextWidget* WBP_CommonKeyIconBoxText_1; // 0x468(0x8)
	struct FName UIDeviceStartAudioName; // 0x470(0x8)
	struct FName ButtonActivateAudioName; // 0x478(0x8)
	struct FName ButtonEndAudioName; // 0x480(0x8)
	struct FCallAIInfoPanelViewLogic ViewLogic; // 0x488(0x50)
	struct TArray<struct UUserWidget*> AIUnitWidgets; // 0x4D8(0x10)

	// Object: Function DFMAbility.CallAIInfoPanelUIView.UpdateAIStatus
	// Flags: [Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0xc3f04e4
	// Params: [ Num(1) Size(0x30) ]
	void UpdateAIStatus(const struct FCallAIStatusInfo& StatusInfo);

	// Object: Function DFMAbility.CallAIInfoPanelUIView.BP_SetType
	// Flags: [Event|Protected|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(1) Size(0x4) ]
	void BP_SetType(int32_t CombatStyle);

	// Object: Function DFMAbility.CallAIInfoPanelUIView.BP_SetPercent
	// Flags: [Event|Protected|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(1) Size(0x4) ]
	void BP_SetPercent(float Percent);

	// Object: Function DFMAbility.CallAIInfoPanelUIView.BP_SetAINumb
	// Flags: [Event|Protected|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(4) Size(0x10) ]
	void BP_SetAINumb(int32_t RifleCount, int32_t MGCount, int32_t ShieldCount, int32_t FirebatCount);
};

// Object: Class DFMAbility.EnvQueryTest_CallAISpawnPosition_Visibility
// Size: 0x208 (Inherited: 0x1F8)
struct UEnvQueryTest_CallAISpawnPosition_Visibility : UEnvQueryTest
{
	DEFINE_UE_CLASS_HELPERS(UEnvQueryTest_CallAISpawnPosition_Visibility, "EnvQueryTest_CallAISpawnPosition_Visibility")

	struct UEnvQueryContext* PlayerCharacterContext; // 0x1F8(0x8)
	EDrawDebugTrace DrawType; // 0x200(0x1)
	uint8_t Pad_0x201[0x3]; // 0x201(0x3)
	float WidthMargin; // 0x204(0x4)
};

// Object: Class DFMAbility.EnvQueryTest_CallAISpawnPosition_BestDistanceToPlayer
// Size: 0x208 (Inherited: 0x1F8)
struct UEnvQueryTest_CallAISpawnPosition_BestDistanceToPlayer : UEnvQueryTest
{
	DEFINE_UE_CLASS_HELPERS(UEnvQueryTest_CallAISpawnPosition_BestDistanceToPlayer, "EnvQueryTest_CallAISpawnPosition_BestDistanceToPlayer")

	struct UEnvQueryContext* PlayerCharacterContext; // 0x1F8(0x8)
	float BestDistance; // 0x200(0x4)
	uint8_t Pad_0x204[0x4]; // 0x204(0x4)
};

// Object: Class DFMAbility.EnvQueryContext_PlayerCharacter
// Size: 0x30 (Inherited: 0x28)
struct UEnvQueryContext_PlayerCharacter : UEnvQueryContext
{
	DEFINE_UE_CLASS_HELPERS(UEnvQueryContext_PlayerCharacter, "EnvQueryContext_PlayerCharacter")

	float EnemySearchRadius; // 0x28(0x4)
	uint8_t bIgnoreEnemy : 1; // 0x2C(0x1), Mask(0x1)
	uint8_t BitPad_0x2C_1 : 7; // 0x2C(0x1)
	uint8_t bIgnoreTeammate : 1; // 0x2D(0x1), Mask(0x1)
	uint8_t BitPad_0x2D_1 : 7; // 0x2D(0x1)
	uint8_t bIgnoreSelf : 1; // 0x2E(0x1), Mask(0x1)
	uint8_t BitPad_0x2E_1 : 7; // 0x2E(0x1)
	uint8_t Pad_0x2F[0x1]; // 0x2F(0x1)
};

// Object: Class DFMAbility.EnvQueryTest_NotInWater
// Size: 0x1F8 (Inherited: 0x1F8)
struct UEnvQueryTest_NotInWater : UEnvQueryTest
{
	DEFINE_UE_CLASS_HELPERS(UEnvQueryTest_NotInWater, "EnvQueryTest_NotInWater")
};

// Object: Class DFMAbility.EnvQueryGenerator_CallAISpawnBasePoint
// Size: 0x108 (Inherited: 0x80)
struct UEnvQueryGenerator_CallAISpawnBasePoint : UEnvQueryGenerator_ProjectedPoints
{
	DEFINE_UE_CLASS_HELPERS(UEnvQueryGenerator_CallAISpawnBasePoint, "EnvQueryGenerator_CallAISpawnBasePoint")

	struct FAIDataProviderFloatValue GridSize; // 0x80(0x38)
	struct FAIDataProviderFloatValue SpaceBetween; // 0xB8(0x38)
	struct UEnvQueryContext* GenerateAround; // 0xF0(0x8)
	struct FVector CenterLocationOffset; // 0xF8(0xC)
	uint8_t Pad_0x104[0x4]; // 0x104(0x4)
};

// Object: Class DFMAbility.CallDogFightTargetComponent
// Size: 0x1A8 (Inherited: 0xF8)
struct UCallDogFightTargetComponent : UActorComponent
{
	DEFINE_UE_CLASS_HELPERS(UCallDogFightTargetComponent, "CallDogFightTargetComponent")

	float VisionLostRemoveDelay; // 0xF8(0x4)
	float UpdateInterval; // 0xFC(0x4)
	float DistanceScoreWeight; // 0x100(0x4)
	float DirectionScoreWeight; // 0x104(0x4)
	float TypeScoreWeight; // 0x108(0x4)
	float StickinessScoreWeight; // 0x10C(0x4)
	float VisionScoreWeight; // 0x110(0x4)
	float BroadcastedTargetScoreWeight; // 0x114(0x4)
	float PlayerTargetBonus; // 0x118(0x4)
	float CurrentTargetStickinessBonus; // 0x11C(0x4)
	float MaxEvaluateDistance; // 0x120(0x4)
	float VisionDecayDuration; // 0x124(0x4)
	float BroadcastedTargetBonus; // 0x128(0x4)
	uint8_t bEnableDebugLog : 1; // 0x12C(0x1), Mask(0x1)
	uint8_t BitPad_0x12C_1 : 7; // 0x12C(0x1)
	uint8_t Pad_0x12D[0x3]; // 0x12D(0x3)
	struct TArray<struct FCallDogFightTargetCandidate> CandidateList; // 0x130(0x10)
	struct TWeakObjectPtr<struct ADFMCharacter> CurrentFightTarget; // 0x140(0x8)
	struct TSet<struct TWeakObjectPtr<struct ADFMCharacter>> BroadcastedFightTargets; // 0x148(0x50)
	struct TWeakObjectPtr<struct ADFMAIController> OwnerController; // 0x198(0x8)
	uint8_t Pad_0x1A0[0x8]; // 0x1A0(0x8)

	// Object: Function DFMAbility.CallDogFightTargetComponent.RemoveCandidate
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xc3f0b2c
	// Params: [ Num(1) Size(0x8) ]
	void RemoveCandidate(struct ADFMCharacter* Target);

	// Object: Function DFMAbility.CallDogFightTargetComponent.RemoveBroadcastedFightTarget
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xc3f0a88
	// Params: [ Num(1) Size(0x8) ]
	void RemoveBroadcastedFightTarget(struct ADFMCharacter* Target);

	// Object: Function DFMAbility.CallDogFightTargetComponent.IsBroadcastedFightTarget
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xc3f09d8
	// Params: [ Num(2) Size(0x9) ]
	uint8_t IsBroadcastedFightTarget(struct ADFMCharacter* Target);

	// Object: Function DFMAbility.CallDogFightTargetComponent.HasValidFightTarget
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xc3f09a0
	// Params: [ Num(1) Size(0x1) ]
	uint8_t HasValidFightTarget();

	// Object: Function DFMAbility.CallDogFightTargetComponent.GetCurrentFightTarget
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xc3f096c
	// Params: [ Num(1) Size(0x8) ]
	struct ADFMCharacter* GetCurrentFightTarget();

	// Object: Function DFMAbility.CallDogFightTargetComponent.GetCandidateList
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xc3f08e0
	// Params: [ Num(1) Size(0x10) ]
	struct TArray<struct FCallDogFightTargetCandidate> GetCandidateList();

	// Object: Function DFMAbility.CallDogFightTargetComponent.GetCandidateCount
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xc3f08c4
	// Params: [ Num(1) Size(0x4) ]
	int32_t GetCandidateCount();

	// Object: Function DFMAbility.CallDogFightTargetComponent.GetBroadcastedFightTargetCount
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xc3f0890
	// Params: [ Num(1) Size(0x4) ]
	int32_t GetBroadcastedFightTargetCount();

	// Object: Function DFMAbility.CallDogFightTargetComponent.ForceReevaluateTargets
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xc3f087c
	// Params: [ Num(0) Size(0x0) ]
	void ForceReevaluateTargets();

	// Object: Function DFMAbility.CallDogFightTargetComponent.ClearCandidates
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xc3f0868
	// Params: [ Num(0) Size(0x0) ]
	void ClearCandidates();

	// Object: Function DFMAbility.CallDogFightTargetComponent.ClearBroadcastedFightTargets
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xc3f0854
	// Params: [ Num(0) Size(0x0) ]
	void ClearBroadcastedFightTargets();

	// Object: Function DFMAbility.CallDogFightTargetComponent.AddCandidate
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xc3f07b0
	// Params: [ Num(1) Size(0x8) ]
	void AddCandidate(struct ADFMCharacter* Target);

	// Object: Function DFMAbility.CallDogFightTargetComponent.AddBroadcastedFightTarget
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xc3f070c
	// Params: [ Num(1) Size(0x8) ]
	void AddBroadcastedFightTarget(struct ADFMCharacter* Target);
};

// Object: Class DFMAbility.ChainHookAnimComponent
// Size: 0xB80 (Inherited: 0xB80)
struct UChainHookAnimComponent : ULeftWeaponAnimComponent
{
	DEFINE_UE_CLASS_HELPERS(UChainHookAnimComponent, "ChainHookAnimComponent")

	uint8_t bIsShowHook : 1; // 0xB79(0x1), Mask(0x1)

	// Object: Function DFMAbility.ChainHookAnimComponent.UpdateWeaponAnimInstanceParams
	// Flags: [Final|Native|Private]
	// Offset: 0xc3f0cdc
	// Params: [ Num(0) Size(0x0) ]
	void UpdateWeaponAnimInstanceParams();

	// Object: Function DFMAbility.ChainHookAnimComponent.ResetWeaponAnimInstanceParams
	// Flags: [Final|Native|Private]
	// Offset: 0xc3f0cc8
	// Params: [ Num(0) Size(0x0) ]
	void ResetWeaponAnimInstanceParams();

	// Object: Function DFMAbility.ChainHookAnimComponent.IsNeedShowHook
	// Flags: [Final|Native|Private|Const]
	// Offset: 0xc3f0c18
	// Params: [ Num(2) Size(0x2) ]
	uint8_t IsNeedShowHook(EGPWeaponInnerEvent InWeaponEvent);

	// Object: Function DFMAbility.ChainHookAnimComponent.GetIsShowHook
	// Flags: [Final|Native|Public|Const]
	// Offset: 0xc3f0bfc
	// Params: [ Num(1) Size(0x1) ]
	uint8_t GetIsShowHook();
};

// Object: Class DFMAbility.ChainHookAnimInstance
// Size: 0xA10 (Inherited: 0x270)
struct UChainHookAnimInstance : UAnimInstance
{
	DEFINE_UE_CLASS_HELPERS(UChainHookAnimInstance, "ChainHookAnimInstance")

	struct FChainHookAnimInstanceProxy LocalProxy; // 0x270(0x7A0)
};

// Object: Class DFMAbility.ChainHookComponent
// Size: 0x7A0 (Inherited: 0x408)
struct UChainHookComponent : UGPWeaponDataComponentBase
{
	DEFINE_UE_CLASS_HELPERS(UChainHookComponent, "ChainHookComponent")

	struct TArray<struct FChainHookRoleData> AllGameRoleData; // 0x408(0x10)
	struct TArray<struct FChainHookBendCheckData> AllBendCheckData; // 0x418(0x10)
	struct TArray<struct FChainHookBendCheckData> ClientAllBendCheckData; // 0x428(0x10)
	uint8_t bClearTakerOffsetOnDirectConnection : 1; // 0x438(0x1), Mask(0x1)
	uint8_t BitPad_0x438_1 : 7; // 0x438(0x1)
	uint8_t bDSCheckChainCutOff : 1; // 0x439(0x1), Mask(0x1)
	uint8_t BitPad_0x439_1 : 7; // 0x439(0x1)
	uint8_t Pad_0x43A[0x2]; // 0x43A(0x2)
	float ClientMaxMeleeHitMaxAngle; // 0x43C(0x4)
	int32_t RobotAIBreakAddDamageID; // 0x440(0x4)
	int32_t MultiMaxPointsCount; // 0x444(0x4)
	float MultiCheckStep; // 0x448(0x4)
	float MergeDistance; // 0x44C(0x4)
	float WallAdjustCheckStep; // 0x450(0x4)
	int32_t WallAdjustCheckCheckCount; // 0x454(0x4)
	float MultiPullBackBendPointOffset; // 0x458(0x4)
	float PullBackBendPoint_MinTime; // 0x45C(0x4)
	float PullBackBendPoint_KeepMinDistance; // 0x460(0x4)
	float PullBackBendPoint_MinDistance; // 0x464(0x4)
	uint8_t bPullBackForbidSwitchWeapon : 1; // 0x468(0x1), Mask(0x1)
	uint8_t BitPad_0x468_1 : 7; // 0x468(0x1)
	uint8_t Pad_0x469[0x3]; // 0x469(0x3)
	float DSHitOthersPullBackAddDelay; // 0x46C(0x4)
	float ChainMaxLength; // 0x470(0x4)
	float MaxBindOffset; // 0x474(0x4)
	struct FVector ForceBindOffset_DeadBox; // 0x478(0xC)
	float MoveForwardMaxTime; // 0x484(0x4)
	float PullBackMaxTime; // 0x488(0x4)
	float PullBackEndDelayTime; // 0x48C(0x4)
	float PullBackEndOffset; // 0x490(0x4)
	float PullBackEndOffset_DeadBox; // 0x494(0x4)
	float PullBackEndHitBackOffset; // 0x498(0x4)
	float PullBackBaseSpeed; // 0x49C(0x4)
	float PullBackMaxSpeed; // 0x4A0(0x4)
	float PullBackAcceleration; // 0x4A4(0x4)
	uint8_t bPullBackStopCheckActorLocation : 1; // 0x4A8(0x1), Mask(0x1)
	uint8_t BitPad_0x4A8_1 : 7; // 0x4A8(0x1)
	uint8_t Pad_0x4A9[0x3]; // 0x4A9(0x3)
	float PullBackStopDistance; // 0x4AC(0x4)
	float PullBackStopDistanceToEnd; // 0x4B0(0x4)
	float PullBackStopDistanceSimple; // 0x4B4(0x4)
	float PullBackNoneBaseSpeed; // 0x4B8(0x4)
	float PullBackNoneMaxSpeed; // 0x4BC(0x4)
	float PullBackNoneAcceleration; // 0x4C0(0x4)
	float BreakPullBackSpeed; // 0x4C4(0x4)
	float CarryTargetMaxDistance; // 0x4C8(0x4)
	struct FName CarryBodyActionName; // 0x4CC(0x8)
	float ExitItemLerpStopDistance; // 0x4D4(0x4)
	float ShowItemMinDistance; // 0x4D8(0x4)
	float ShowItemMinDistance_3P; // 0x4DC(0x4)
	struct FName WeaponSocketName; // 0x4E0(0x8)
	int32_t TryBendUpStepSize; // 0x4E8(0x4)
	int32_t TryBendUpStepNum; // 0x4EC(0x4)
	int32_t TryBendStepSize; // 0x4F0(0x4)
	float TryBendStepForwardRate; // 0x4F4(0x4)
	int32_t TryBendStepNum; // 0x4F8(0x4)
	float CheckRadius; // 0x4FC(0x4)
	int32_t ClientFitStepSize; // 0x500(0x4)
	int32_t ClientFitStepStepNum; // 0x504(0x4)
	uint8_t bIsClientFitToStart : 1; // 0x508(0x1), Mask(0x1)
	uint8_t BitPad_0x508_1 : 7; // 0x508(0x1)
	uint8_t Pad_0x509[0x3]; // 0x509(0x3)
	float PullBackSuccessTime; // 0x50C(0x4)
	float PullBackNoneTime; // 0x510(0x4)
	float PullBackBreakTime; // 0x514(0x4)
	struct TSoftClassPtr<struct AChainHookHitBoxActor*> HitBoxActorClassPath; // 0x518(0x28)
	struct TSoftClassPtr<struct AChainHookItemActor*> ClientHookItemActorClassPath; // 0x540(0x28)
	struct TSoftClassPtr<struct AChainHookItemActor*> LowClientHookItemActorClassPath; // 0x568(0x28)
	struct TArray<struct UObject*> IgnoreObjectClass; // 0x590(0x10)
	struct FChainHookRoleData CurrentData; // 0x5A0(0x30)
	struct TWeakObjectPtr<struct AChainHookHitBoxActor> HitBoxActor; // 0x5D0(0x8)
	uint8_t bIsHitBoxActorCanHit : 1; // 0x5D8(0x1), Mask(0x1)
	uint8_t BitPad_0x5D8_1 : 7; // 0x5D8(0x1)
	uint8_t bClientHitInvalidTarget : 1; // 0x5D9(0x1), Mask(0x1)
	uint8_t BitPad_0x5D9_1 : 7; // 0x5D9(0x1)
	uint8_t Pad_0x5DA[0x2]; // 0x5DA(0x2)
	struct TWeakObjectPtr<struct AChainHookGrenade> HookGrenade; // 0x5DC(0x8)
	struct FVector GrenadeStartOffset; // 0x5E4(0xC)
	struct FVector GrenadeRegisterLocation; // 0x5F0(0xC)
	struct FVector GrenadeHitLocation; // 0x5FC(0xC)
	uint8_t Pad_0x608[0x10]; // 0x608(0x10)
	struct TWeakObjectPtr<struct AActor> HookTakerActor; // 0x618(0x8)
	struct FVector HookTakerOffset; // 0x620(0xC)
	uint8_t bIsHookTakerUsingSceneWeapon : 1; // 0x62C(0x1), Mask(0x1)
	uint8_t BitPad_0x62C_1 : 7; // 0x62C(0x1)
	uint8_t Pad_0x62D[0x3]; // 0x62D(0x3)
	float PullBackSpeed; // 0x630(0x4)
	struct FVector CurrentLocation; // 0x634(0xC)
	EChainHookState CurrState; // 0x640(0x1)
	uint8_t Pad_0x641[0x3]; // 0x641(0x3)
	float MoveForwardEndTime; // 0x644(0x4)
	float PullBackDelayEndTime; // 0x648(0x4)
	float PullBackEndTime; // 0x64C(0x4)
	float CurrPullBackEndDelayTime; // 0x650(0x4)
	float TotalBackToSocketTime; // 0x654(0x4)
	float BackToSocketTime; // 0x658(0x4)
	struct FVector BackToSocketStartLocation; // 0x65C(0xC)
	uint8_t bIsInit : 1; // 0x668(0x1), Mask(0x1)
	uint8_t BitPad_0x668_1 : 7; // 0x668(0x1)
	uint8_t bIsCutOff : 1; // 0x669(0x1), Mask(0x1)
	uint8_t BitPad_0x669_1 : 7; // 0x669(0x1)
	uint8_t bIsBend : 1; // 0x66A(0x1), Mask(0x1)
	uint8_t BitPad_0x66A_1 : 7; // 0x66A(0x1)
	uint8_t Pad_0x66B[0x1]; // 0x66B(0x1)
	struct FVector BendPoint; // 0x66C(0xC)
	struct FVector BendBasePoint; // 0x678(0xC)
	float LastPullBackBendRemoveTime; // 0x684(0x4)
	struct FVector LastPullBackBendPoint; // 0x688(0xC)
	struct FVector LastPullBackBaseBendPoint; // 0x694(0xC)
	int32_t CurrCheckRopeIdx; // 0x6A0(0x4)
	uint8_t Pad_0x6A4[0x4]; // 0x6A4(0x4)
	struct TArray<struct FChainHookRopePoint> RopePoints; // 0x6A8(0x10)
	uint8_t Pad_0x6B8[0xA8]; // 0x6B8(0xA8)
	uint8_t bIsWeaponEnable : 1; // 0x760(0x1), Mask(0x1)
	uint8_t BitPad_0x760_1 : 7; // 0x760(0x1)
	uint8_t Pad_0x761[0x7]; // 0x761(0x7)
	struct AChainHookWeapon* HookWeapon; // 0x768(0x8)
	struct AChainHookItemActor* ClientHookItemActor; // 0x770(0x8)
	uint8_t bIsShowItem : 1; // 0x778(0x1), Mask(0x1)
	uint8_t BitPad_0x778_1 : 7; // 0x778(0x1)
	uint8_t bIsForceUpdateItem : 1; // 0x779(0x1), Mask(0x1)
	uint8_t BitPad_0x779_1 : 7; // 0x779(0x1)
	uint8_t Pad_0x77A[0xE]; // 0x77A(0xE)
	uint8_t bIsSetSkin : 1; // 0x788(0x1), Mask(0x1)
	uint8_t BitPad_0x788_1 : 7; // 0x788(0x1)
	uint8_t Pad_0x789[0x3]; // 0x789(0x3)
	float ExitTotalTime; // 0x78C(0x4)
	float ExitTimeSeconds; // 0x790(0x4)
	float ExitItemLerpTime; // 0x794(0x4)
	float ExitTimeRate; // 0x798(0x4)
	float ExitTimeBendRate; // 0x79C(0x4)

	// Object: Function DFMAbility.ChainHookComponent.UpdateClientHookItem
	// Flags: [Final|Native|Private]
	// Offset: 0xc3f3b74
	// Params: [ Num(0) Size(0x0) ]
	void UpdateClientHookItem();

	// Object: Function DFMAbility.ChainHookComponent.UpdateCarryView
	// Flags: [Final|Native|Protected]
	// Offset: 0xc3f3ac8
	// Params: [ Num(1) Size(0x1) ]
	void UpdateCarryView(uint8_t bShow);

	// Object: Function DFMAbility.ChainHookComponent.UpdateBend_Multi
	// Flags: [Final|Native|Private|HasDefaults]
	// Offset: 0xc3f39dc
	// Params: [ Num(3) Size(0x19) ]
	uint8_t UpdateBend_Multi(struct FVector Start, struct FVector End);

	// Object: Function DFMAbility.ChainHookComponent.UnloadClientHookItem
	// Flags: [Final|Native|Private]
	// Offset: 0xc3f39c8
	// Params: [ Num(0) Size(0x0) ]
	void UnloadClientHookItem();

	// Object: Function DFMAbility.ChainHookComponent.TrySpawnHitBoxActor
	// Flags: [Final|Native|Private]
	// Offset: 0xc3f39b4
	// Params: [ Num(0) Size(0x0) ]
	void TrySpawnHitBoxActor();

	// Object: Function DFMAbility.ChainHookComponent.TrySetSkin
	// Flags: [Final|Native|Protected]
	// Offset: 0xc3f39a0
	// Params: [ Num(0) Size(0x0) ]
	void TrySetSkin();

	// Object: Function DFMAbility.ChainHookComponent.TryResetKeyPoint
	// Flags: [Final|Native|Private|HasDefaults]
	// Offset: 0xc3f38c0
	// Params: [ Num(2) Size(0x18) ]
	void TryResetKeyPoint(struct FVector Start, struct FVector End);

	// Object: Function DFMAbility.ChainHookComponent.TryMoveKeyPoint
	// Flags: [Final|Native|Private|HasOutParms]
	// Offset: 0xc3f37c8
	// Params: [ Num(2) Size(0x18) ]
	void TryMoveKeyPoint(int32_t Idx, struct TArray<struct FChainHookRopePoint>& KeyPoints);

	// Object: Function DFMAbility.ChainHookComponent.TryMergeKeyPoint
	// Flags: [Final|Native|Private|HasOutParms]
	// Offset: 0xc3f36c8
	// Params: [ Num(2) Size(0x18) ]
	void TryMergeKeyPoint(uint8_t bIsStart, struct TArray<struct FChainHookRopePoint>& KeyPoints);

	// Object: Function DFMAbility.ChainHookComponent.TryLoadClientHookItem
	// Flags: [Final|Native|Private]
	// Offset: 0xc3f36b4
	// Params: [ Num(0) Size(0x0) ]
	void TryLoadClientHookItem();

	// Object: Function DFMAbility.ChainHookComponent.TryInitHookWeapon
	// Flags: [Final|Native|Private]
	// Offset: 0xc3f36a0
	// Params: [ Num(0) Size(0x0) ]
	void TryInitHookWeapon();

	// Object: Function DFMAbility.ChainHookComponent.TryInitBend
	// Flags: [Final|Native|Private]
	// Offset: 0xc3f368c
	// Params: [ Num(0) Size(0x0) ]
	void TryInitBend();

	// Object: Function DFMAbility.ChainHookComponent.TryFix3PMoveForward
	// Flags: [Final|Native|Private]
	// Offset: 0xc3f3678
	// Params: [ Num(0) Size(0x0) ]
	void TryFix3PMoveForward();

	// Object: Function DFMAbility.ChainHookComponent.TryDrawDebugMultiInfo
	// Flags: [Final|Native|Private]
	// Offset: 0xc3f3664
	// Params: [ Num(0) Size(0x0) ]
	void TryDrawDebugMultiInfo();

	// Object: Function DFMAbility.ChainHookComponent.TryDoRobotAIBreakAddDamage
	// Flags: [Final|Native|Private]
	// Offset: 0xc3f3650
	// Params: [ Num(0) Size(0x0) ]
	void TryDoRobotAIBreakAddDamage();

	// Object: Function DFMAbility.ChainHookComponent.TryDestroyHitBoxActor
	// Flags: [Final|Native|Private]
	// Offset: 0xc3f363c
	// Params: [ Num(0) Size(0x0) ]
	void TryDestroyHitBoxActor();

	// Object: Function DFMAbility.ChainHookComponent.TryClientFitBend
	// Flags: [Final|Native|Private|HasOutParms|HasDefaults]
	// Offset: 0xc3f34b8
	// Params: [ Num(5) Size(0x3C) ]
	struct FVector TryClientFitBend(const struct FVector& Start, const struct FVector& End, struct FVector AddPoint, struct FVector Forward);

	// Object: Function DFMAbility.ChainHookComponent.TryCarryTarget
	// Flags: [Final|Native|Protected]
	// Offset: 0xc3f34a4
	// Params: [ Num(0) Size(0x0) ]
	void TryCarryTarget();

	// Object: Function DFMAbility.ChainHookComponent.TryBreakChainHook
	// Flags: [Final|Native|Public]
	// Offset: 0xc3f33b0
	// Params: [ Num(3) Size(0xA) ]
	uint8_t TryBreakChainHook(struct AActor* HitActor, uint8_t bForce);

	// Object: Function DFMAbility.ChainHookComponent.TryBreak
	// Flags: [Final|Native|Public]
	// Offset: 0xc3f339c
	// Params: [ Num(0) Size(0x0) ]
	void TryBreak();

	// Object: Function DFMAbility.ChainHookComponent.TimingSkillDataFlow
	// Flags: [Native|Protected]
	// Offset: 0xc3f3380
	// Params: [ Num(0) Size(0x0) ]
	void TimingSkillDataFlow();

	// Object: Function DFMAbility.ChainHookComponent.TickPullBack
	// Flags: [Final|Native|Private]
	// Offset: 0xc3f32dc
	// Params: [ Num(1) Size(0x4) ]
	void TickPullBack(float DeltaTime);

	// Object: Function DFMAbility.ChainHookComponent.TickMoveForward
	// Flags: [Final|Native|Private]
	// Offset: 0xc3f32c8
	// Params: [ Num(0) Size(0x0) ]
	void TickMoveForward();

	// Object: Function DFMAbility.ChainHookComponent.TickHookTakerLocation
	// Flags: [Final|Native|Private]
	// Offset: 0xc3f32b4
	// Params: [ Num(0) Size(0x0) ]
	void TickHookTakerLocation();

	// Object: Function DFMAbility.ChainHookComponent.TickHitTarget
	// Flags: [Final|Native|Private]
	// Offset: 0xc3f32a0
	// Params: [ Num(0) Size(0x0) ]
	void TickHitTarget();

	// Object: Function DFMAbility.ChainHookComponent.TickHitBoxActor
	// Flags: [Final|Native|Private]
	// Offset: 0xc3f328c
	// Params: [ Num(0) Size(0x0) ]
	void TickHitBoxActor();

	// Object: Function DFMAbility.ChainHookComponent.TickEnd
	// Flags: [Final|Native|Private]
	// Offset: 0xc3f31e8
	// Params: [ Num(1) Size(0x4) ]
	void TickEnd(float DeltaTime);

	// Object: Function DFMAbility.ChainHookComponent.TickChain
	// Flags: [Final|Native|Private]
	// Offset: 0xc3f31b0
	// Params: [ Num(1) Size(0x1) ]
	uint8_t TickChain();

	// Object: Function DFMAbility.ChainHookComponent.TickBackToSocket
	// Flags: [Final|Native|Private]
	// Offset: 0xc3f310c
	// Params: [ Num(1) Size(0x4) ]
	void TickBackToSocket(float DeltaTime);

	// Object: Function DFMAbility.ChainHookComponent.SyncHitTargetInfo
	// Flags: [Final|Native|Public|Const]
	// Offset: 0xc3f3060
	// Params: [ Num(1) Size(0x1) ]
	void SyncHitTargetInfo(uint8_t bIsHit);

	// Object: Function DFMAbility.ChainHookComponent.SyncChainHookInfo
	// Flags: [Final|Native|Public|Const]
	// Offset: 0xc3f304c
	// Params: [ Num(0) Size(0x0) ]
	void SyncChainHookInfo();

	// Object: Function DFMAbility.ChainHookComponent.StopExitTimer
	// Flags: [Final|Native|Private]
	// Offset: 0xc3f3038
	// Params: [ Num(0) Size(0x0) ]
	void StopExitTimer();

	// Object: Function DFMAbility.ChainHookComponent.StopAllSound
	// Flags: [Final|Native|Private]
	// Offset: 0xc3f3024
	// Params: [ Num(0) Size(0x0) ]
	void StopAllSound();

	// Object: Function DFMAbility.ChainHookComponent.StartExitTimer
	// Flags: [Final|Native|Private]
	// Offset: 0xc3f2f80
	// Params: [ Num(1) Size(0x4) ]
	void StartExitTimer(float DelayTime);

	// Object: Function DFMAbility.ChainHookComponent.SkillComRepChainHookInfo
	// Flags: [Final|Native|Public|HasDefaults]
	// Offset: 0xc3f2e64
	// Params: [ Num(3) Size(0x1C) ]
	void SkillComRepChainHookInfo(EChainHookState State, struct AActor* HitActor, struct FVector HitOffset);

	// Object: Function DFMAbility.ChainHookComponent.SetState
	// Flags: [Final|Native|Private]
	// Offset: 0xc3f2dc0
	// Params: [ Num(1) Size(0x1) ]
	void SetState(EChainHookState State);

	// Object: Function DFMAbility.ChainHookComponent.SetHookAimingHudState
	// Flags: [Final|Native|Private]
	// Offset: 0xc3f2cd0
	// Params: [ Num(2) Size(0x2) ]
	void SetHookAimingHudState(uint8_t bIsShowAim, uint8_t bIsShowTarget);

	// Object: Function DFMAbility.ChainHookComponent.SetHitSkillTipsState
	// Flags: [Final|Native|Private]
	// Offset: 0xc3f2c24
	// Params: [ Num(1) Size(0x1) ]
	void SetHitSkillTipsState(uint8_t bIsShowTips);

	// Object: Function DFMAbility.ChainHookComponent.SetHitBoxActorCanHit
	// Flags: [Final|Native|Private]
	// Offset: 0xc3f2b78
	// Params: [ Num(1) Size(0x1) ]
	void SetHitBoxActorCanHit(uint8_t bIsCanHit);

	// Object: Function DFMAbility.ChainHookComponent.SetForceUpdateItem
	// Flags: [Final|Native|Public]
	// Offset: 0xc3f2b5c
	// Params: [ Num(0) Size(0x0) ]
	void SetForceUpdateItem();

	// Object: Function DFMAbility.ChainHookComponent.SetCancleBtnState
	// Flags: [Final|Native|Private]
	// Offset: 0xc3f2ab0
	// Params: [ Num(1) Size(0x1) ]
	void SetCancleBtnState(uint8_t bIsShowCancleBtn);

	// Object: Function DFMAbility.ChainHookComponent.SendServerHitInvalidTarget
	// Flags: [Final|Native|Private]
	// Offset: 0xc3f2a9c
	// Params: [ Num(0) Size(0x0) ]
	void SendServerHitInvalidTarget();

	// Object: Function DFMAbility.ChainHookComponent.ResetHitBoxHP
	// Flags: [Final|Native|Private]
	// Offset: 0xc3f2a88
	// Params: [ Num(0) Size(0x0) ]
	void ResetHitBoxHP();

	// Object: Function DFMAbility.ChainHookComponent.RemovePullBackDelayHookedBuff
	// Flags: [Final|Native|Public|Const]
	// Offset: 0xc3f2a74
	// Params: [ Num(0) Size(0x0) ]
	void RemovePullBackDelayHookedBuff();

	// Object: Function DFMAbility.ChainHookComponent.RemovePullBackDelayBuff
	// Flags: [Final|Native|Public|Const]
	// Offset: 0xc3f2a60
	// Params: [ Num(0) Size(0x0) ]
	void RemovePullBackDelayBuff();

	// Object: Function DFMAbility.ChainHookComponent.RefreshKeyInfo
	// Flags: [Final|Native|Private|HasOutParms]
	// Offset: 0xc3f2968
	// Params: [ Num(2) Size(0x18) ]
	void RefreshKeyInfo(int32_t Idx, struct TArray<struct FChainHookRopePoint>& KeyPoints);

	// Object: Function DFMAbility.ChainHookComponent.PlaySetStateSound
	// Flags: [Final|Native|Private]
	// Offset: 0xc3f2954
	// Params: [ Num(0) Size(0x0) ]
	void PlaySetStateSound();

	// Object: Function DFMAbility.ChainHookComponent.PlayItemBreakSound
	// Flags: [Final|Native|Public]
	// Offset: 0xc3f2940
	// Params: [ Num(0) Size(0x0) ]
	void PlayItemBreakSound();

	// Object: Function DFMAbility.ChainHookComponent.PlayBreakSound
	// Flags: [Final|Native|Private]
	// Offset: 0xc3f292c
	// Params: [ Num(0) Size(0x0) ]
	void PlayBreakSound();

	// Object: Function DFMAbility.ChainHookComponent.OnServerHitInvalidTarget
	// Flags: [Final|Native|Public]
	// Offset: 0xc3f2918
	// Params: [ Num(0) Size(0x0) ]
	void OnServerHitInvalidTarget();

	// Object: Function DFMAbility.ChainHookComponent.OnRepHitBoxActor
	// Flags: [Final|Native|Public]
	// Offset: 0xc3f2874
	// Params: [ Num(1) Size(0x8) ]
	void OnRepHitBoxActor(struct AChainHookHitBoxActor* BoxActor);

	// Object: Function DFMAbility.ChainHookComponent.OnPullBackEnd
	// Flags: [Final|Native|Public]
	// Offset: 0xc3f2860
	// Params: [ Num(0) Size(0x0) ]
	void OnPullBackEnd();

	// Object: Function DFMAbility.ChainHookComponent.OnHookUnregister
	// Flags: [Final|Native|Public]
	// Offset: 0xc3f27bc
	// Params: [ Num(1) Size(0x8) ]
	void OnHookUnregister(struct AChainHookGrenade* Grenade);

	// Object: Function DFMAbility.ChainHookComponent.OnHookGrenadeRegister
	// Flags: [Final|Native|Public]
	// Offset: 0xc3f2718
	// Params: [ Num(1) Size(0x8) ]
	void OnHookGrenadeRegister(struct AChainHookGrenade* Grenade);

	// Object: Function DFMAbility.ChainHookComponent.OnHitTarget
	// Flags: [Final|Native|Public|HasDefaults]
	// Offset: 0xc3f25ec
	// Params: [ Num(3) Size(0x28) ]
	void OnHitTarget(struct TScriptInterface<IChainHookTakerInterface> InHookTaker, struct FVector HitLocation, struct FVector ProjectileStickyOffset);

	// Object: Function DFMAbility.ChainHookComponent.OnHitOthers
	// Flags: [Final|Native|Public|HasDefaults]
	// Offset: 0xc3f2548
	// Params: [ Num(1) Size(0xC) ]
	void OnHitOthers(struct FVector HitLocation);

	// Object: Function DFMAbility.ChainHookComponent.OnHitNone
	// Flags: [Final|Native|Public]
	// Offset: 0xc3f2534
	// Params: [ Num(0) Size(0x0) ]
	void OnHitNone();

	// Object: Function DFMAbility.ChainHookComponent.OnHitInvalidTarget
	// Flags: [Final|Native|Public]
	// Offset: 0xc3f2488
	// Params: [ Num(1) Size(0x1) ]
	void OnHitInvalidTarget(uint8_t bIsHitNone);

	// Object: Function DFMAbility.ChainHookComponent.OnHitAndDestroyed
	// Flags: [Final|Native|Public]
	// Offset: 0xc3f2474
	// Params: [ Num(0) Size(0x0) ]
	void OnHitAndDestroyed();

	// Object: Function DFMAbility.ChainHookComponent.OnHitAddBendIgnoredActor
	// Flags: [Final|Native|Private]
	// Offset: 0xc3f23d0
	// Params: [ Num(1) Size(0x8) ]
	void OnHitAddBendIgnoredActor(struct AActor* HitActor);

	// Object: Function DFMAbility.ChainHookComponent.OnClientHookItemLoaded
	// Flags: [Final|Native|Private|HasOutParms|HasDefaults]
	// Offset: 0xc3f2310
	// Params: [ Num(1) Size(0x18) ]
	void OnClientHookItemLoaded(const struct FSoftObjectPath& Path);

	// Object: Function DFMAbility.ChainHookComponent.OnBreak
	// Flags: [Final|Native|Public]
	// Offset: 0xc3f2220
	// Params: [ Num(2) Size(0x2) ]
	void OnBreak(uint8_t bIsAddCount, uint8_t bCheckEndSimple);

	// Object: Function DFMAbility.ChainHookComponent.OnBackToSocketEnd
	// Flags: [Final|Native|Public]
	// Offset: 0xc3f220c
	// Params: [ Num(0) Size(0x0) ]
	void OnBackToSocketEnd();

	// Object: Function DFMAbility.ChainHookComponent.MultiCheckKeyPoint
	// Flags: [Final|Native|Private|HasOutParms|HasDefaults]
	// Offset: 0xc3f20d0
	// Params: [ Num(3) Size(0x20) ]
	void MultiCheckKeyPoint(uint8_t bIsStart, struct FVector TargetLoc, struct TArray<struct FChainHookRopePoint>& KeyPoints);

	// Object: Function DFMAbility.ChainHookComponent.IsDS
	// Flags: [Final|Native|Protected|Const]
	// Offset: 0xc3f2098
	// Params: [ Num(1) Size(0x1) ]
	uint8_t IsDS();

	// Object: Function DFMAbility.ChainHookComponent.IsDirectConnection
	// Flags: [Final|Native|Private]
	// Offset: 0xc3f2060
	// Params: [ Num(1) Size(0x1) ]
	uint8_t IsDirectConnection();

	// Object: Function DFMAbility.ChainHookComponent.IsClient
	// Flags: [Final|Native|Protected|Const]
	// Offset: 0xc3f2028
	// Params: [ Num(1) Size(0x1) ]
	uint8_t IsClient();

	// Object: Function DFMAbility.ChainHookComponent.IsCanHitTarget
	// Flags: [Final|Native|Private]
	// Offset: 0xc3f1f68
	// Params: [ Num(2) Size(0x11) ]
	uint8_t IsCanHitTarget(struct TScriptInterface<IChainHookTakerInterface> InHookTaker);

	// Object: Function DFMAbility.ChainHookComponent.InitGameRoleData
	// Flags: [Final|Native|Private]
	// Offset: 0xc3f1f54
	// Params: [ Num(0) Size(0x0) ]
	void InitGameRoleData();

	// Object: Function DFMAbility.ChainHookComponent.HideClientHookItem
	// Flags: [Final|Native|Private]
	// Offset: 0xc3f1f40
	// Params: [ Num(0) Size(0x0) ]
	void HideClientHookItem();

	// Object: Function DFMAbility.ChainHookComponent.GetWeaponSocketLocation
	// Flags: [Final|Native|Private|HasDefaults|Const]
	// Offset: 0xc3f1f08
	// Params: [ Num(1) Size(0xC) ]
	struct FVector GetWeaponSocketLocation();

	// Object: Function DFMAbility.ChainHookComponent.GetPullBackEndPoint
	// Flags: [Final|Native|Private|HasDefaults]
	// Offset: 0xc3f1ed0
	// Params: [ Num(1) Size(0xC) ]
	struct FVector GetPullBackEndPoint();

	// Object: Function DFMAbility.ChainHookComponent.GetPullBackEndLocation
	// Flags: [Final|Native|Private|HasDefaults]
	// Offset: 0xc3f1e20
	// Params: [ Num(2) Size(0x18) ]
	struct FVector GetPullBackEndLocation(struct FVector PullBackTarget);

	// Object: Function DFMAbility.ChainHookComponent.GetIsCutOff
	// Flags: [Final|Native|Private|Const]
	// Offset: 0xc3f1e04
	// Params: [ Num(1) Size(0x1) ]
	uint8_t GetIsCutOff();

	// Object: Function DFMAbility.ChainHookComponent.GetHookTakerActor
	// Flags: [Final|Native|Public|Const]
	// Offset: 0xc3f1dcc
	// Params: [ Num(1) Size(0x8) ]
	struct AActor* GetHookTakerActor();

	// Object: Function DFMAbility.ChainHookComponent.GetCurrState
	// Flags: [Final|Native|Public|Const]
	// Offset: 0xc3f1db0
	// Params: [ Num(1) Size(0x1) ]
	EChainHookState GetCurrState();

	// Object: Function DFMAbility.ChainHookComponent.GetCheckStartPoint
	// Flags: [Final|Native|Private|HasDefaults|Const]
	// Offset: 0xc3f1d00
	// Params: [ Num(2) Size(0x10) ]
	struct FVector GetCheckStartPoint(EChainHookCheckStartType StartType);

	// Object: Function DFMAbility.ChainHookComponent.GetCheckEndPoint
	// Flags: [Final|Native|Private|HasDefaults|Const]
	// Offset: 0xc3f1c50
	// Params: [ Num(2) Size(0x10) ]
	struct FVector GetCheckEndPoint(EChainHookCheckEndType EndType);

	// Object: Function DFMAbility.ChainHookComponent.GetCameraLocation
	// Flags: [Final|Native|Private|HasDefaults|Const]
	// Offset: 0xc3f1c18
	// Params: [ Num(1) Size(0xC) ]
	struct FVector GetCameraLocation();

	// Object: Function DFMAbility.ChainHookComponent.ForbidCharacterAbility
	// Flags: [Final|Native|Public|Const]
	// Offset: 0xc3f1b6c
	// Params: [ Num(1) Size(0x1) ]
	void ForbidCharacterAbility(uint8_t bIsForbid);

	// Object: Function DFMAbility.ChainHookComponent.FindGameRoleDataIndex
	// Flags: [Final|Native|Private|Const]
	// Offset: 0xc3f1b38
	// Params: [ Num(1) Size(0x4) ]
	int32_t FindGameRoleDataIndex();

	// Object: Function DFMAbility.ChainHookComponent.DSCheckChain_Multi
	// Flags: [Final|Native|Private]
	// Offset: 0xc3f1b00
	// Params: [ Num(1) Size(0x1) ]
	uint8_t DSCheckChain_Multi();

	// Object: Function DFMAbility.ChainHookComponent.DrawDebugSegment
	// Flags: [Final|Native|Private|HasDefaults|Const]
	// Offset: 0xc3f1a20
	// Params: [ Num(2) Size(0x18) ]
	void DrawDebugSegment(struct FVector Start, struct FVector End);

	// Object: Function DFMAbility.ChainHookComponent.DrawDebugInfo
	// Flags: [Final|Native|Private|Const]
	// Offset: 0xc3f1a0c
	// Params: [ Num(0) Size(0x0) ]
	void DrawDebugInfo();

	// Object: Function DFMAbility.ChainHookComponent.DoMultiCheckKeyPoint
	// Flags: [Final|Native|Private|HasOutParms|HasDefaults]
	// Offset: 0xc3f18d0
	// Params: [ Num(3) Size(0x20) ]
	void DoMultiCheckKeyPoint(uint8_t bIsStart, struct FVector TargetLoc, struct TArray<struct FChainHookRopePoint>& KeyPoints);

	// Object: Function DFMAbility.ChainHookComponent.DoExit
	// Flags: [Final|Native|Private]
	// Offset: 0xc3f18bc
	// Params: [ Num(0) Size(0x0) ]
	void DoExit();

	// Object: Function DFMAbility.ChainHookComponent.DoBendSweep
	// Flags: [Final|Native|Private|HasOutParms|HasDefaults]
	// Offset: 0xc3f1750
	// Params: [ Num(4) Size(0xA1) ]
	uint8_t DoBendSweep(struct FHitResult& OutHit, const struct FVector& Start, const struct FVector& End);

	// Object: Function DFMAbility.ChainHookComponent.DoAddKeyPoint
	// Flags: [Final|Native|Private|HasOutParms|HasDefaults]
	// Offset: 0xc3f1614
	// Params: [ Num(3) Size(0x20) ]
	void DoAddKeyPoint(uint8_t bIsStart, struct FVector TargetLoc, struct TArray<struct FChainHookRopePoint>& KeyPoints);

	// Object: Function DFMAbility.ChainHookComponent.DataFlowAddThrowNumber
	// Flags: [Native|Protected]
	// Offset: 0xc3f15f8
	// Params: [ Num(0) Size(0x0) ]
	void DataFlowAddThrowNumber();

	// Object: Function DFMAbility.ChainHookComponent.DataFlowAddHitInfo
	// Flags: [Native|Protected]
	// Offset: 0xc3f15dc
	// Params: [ Num(0) Size(0x0) ]
	void DataFlowAddHitInfo();

	// Object: Function DFMAbility.ChainHookComponent.CountPullBackEndLocation
	// Flags: [Final|Native|Private|HasDefaults]
	// Offset: 0xc3f14f0
	// Params: [ Num(3) Size(0x1C) ]
	struct FVector CountPullBackEndLocation(float StopDistance, struct FVector Target);

	// Object: Function DFMAbility.ChainHookComponent.CountGrenadeStartOffset
	// Flags: [Final|Native|Private]
	// Offset: 0xc3f14dc
	// Params: [ Num(0) Size(0x0) ]
	void CountGrenadeStartOffset();

	// Object: Function DFMAbility.ChainHookComponent.ClientShowHitAndDestroyed
	// Flags: [Net|NetReliableNative|Event|Public|NetClient]
	// Offset: 0xc3f14c0
	// Params: [ Num(0) Size(0x0) ]
	void ClientShowHitAndDestroyed();

	// Object: Function DFMAbility.ChainHookComponent.ClientCheckChain_Multi
	// Flags: [Final|Native|Private]
	// Offset: 0xc3f1488
	// Params: [ Num(1) Size(0x1) ]
	uint8_t ClientCheckChain_Multi();

	// Object: Function DFMAbility.ChainHookComponent.CleanLoadClientHookItem
	// Flags: [Final|Native|Private]
	// Offset: 0xc3f1474
	// Params: [ Num(0) Size(0x0) ]
	void CleanLoadClientHookItem();

	// Object: Function DFMAbility.ChainHookComponent.CleanHitInfo
	// Flags: [Final|Native|Public]
	// Offset: 0xc3f1460
	// Params: [ Num(0) Size(0x0) ]
	void CleanHitInfo();

	// Object: Function DFMAbility.ChainHookComponent.CleanBend
	// Flags: [Final|Native|Private]
	// Offset: 0xc3f144c
	// Params: [ Num(0) Size(0x0) ]
	void CleanBend();

	// Object: Function DFMAbility.ChainHookComponent.CheckSkillComRepState
	// Flags: [Final|Native|Private]
	// Offset: 0xc3f139c
	// Params: [ Num(2) Size(0x2) ]
	uint8_t CheckSkillComRepState(EChainHookState State);

	// Object: Function DFMAbility.ChainHookComponent.CheckPullBackDistance
	// Flags: [Final|Native|Private|HasDefaults]
	// Offset: 0xc3f1278
	// Params: [ Num(4) Size(0x15) ]
	uint8_t CheckPullBackDistance(struct FVector Distance, float XYSize, float ZSize);

	// Object: Function DFMAbility.ChainHookComponent.CheckIsUseLowItem
	// Flags: [Final|Native|Private|Const]
	// Offset: 0xc3f1240
	// Params: [ Num(1) Size(0x1) ]
	uint8_t CheckIsUseLowItem();

	// Object: Function DFMAbility.ChainHookComponent.CheckIsPullBackEndSimple
	// Flags: [Final|Native|Private]
	// Offset: 0xc3f1208
	// Params: [ Num(1) Size(0x1) ]
	uint8_t CheckIsPullBackEndSimple();

	// Object: Function DFMAbility.ChainHookComponent.CheckIsPullBackEnd
	// Flags: [Final|Native|Private|HasDefaults]
	// Offset: 0xc3f1158
	// Params: [ Num(2) Size(0xD) ]
	uint8_t CheckIsPullBackEnd(struct FVector PullBackTarget);

	// Object: Function DFMAbility.ChainHookComponent.CheckIsLocalHookTakerActor
	// Flags: [Final|Native|Private|Const]
	// Offset: 0xc3f1120
	// Params: [ Num(1) Size(0x1) ]
	uint8_t CheckIsLocalHookTakerActor();

	// Object: Function DFMAbility.ChainHookComponent.CheckIsHookTakerUsingSceneWeapon
	// Flags: [Final|Native|Private|Const]
	// Offset: 0xc3f10e8
	// Params: [ Num(1) Size(0x1) ]
	uint8_t CheckIsHookTakerUsingSceneWeapon();

	// Object: Function DFMAbility.ChainHookComponent.CheckHookTakerOffset
	// Flags: [Final|Native|Private|HasOutParms|HasDefaults]
	// Offset: 0xc3f1038
	// Params: [ Num(1) Size(0xC) ]
	void CheckHookTakerOffset(const struct FVector& ProjectileStickyOffset);

	// Object: Function DFMAbility.ChainHookComponent.CheckEnableClientHookItemShowState
	// Flags: [Final|Native|Private]
	// Offset: 0xc3f1024
	// Params: [ Num(0) Size(0x0) ]
	void CheckEnableClientHookItemShowState();

	// Object: Function DFMAbility.ChainHookComponent.CheckCVarWeaponHookVal
	// Flags: [Final|Native|Private]
	// Offset: 0xc3f1010
	// Params: [ Num(0) Size(0x0) ]
	void CheckCVarWeaponHookVal();

	// Object: Function DFMAbility.ChainHookComponent.CheckClientHookItemShowState
	// Flags: [Final|Native|Private]
	// Offset: 0xc3f0ffc
	// Params: [ Num(0) Size(0x0) ]
	void CheckClientHookItemShowState();

	// Object: Function DFMAbility.ChainHookComponent.CarryTargetCheckDistance
	// Flags: [Final|Native|Protected]
	// Offset: 0xc3f0f4c
	// Params: [ Num(2) Size(0x9) ]
	uint8_t CarryTargetCheckDistance(struct AActor* Target);

	// Object: Function DFMAbility.ChainHookComponent.CancelFire
	// Flags: [Final|Native|Protected|Const]
	// Offset: 0xc3f0f38
	// Params: [ Num(0) Size(0x0) ]
	void CancelFire();

	// Object: Function DFMAbility.ChainHookComponent.AddPullBackDelayHookedBuff
	// Flags: [Final|Native|Public|Const]
	// Offset: 0xc3f0f24
	// Params: [ Num(0) Size(0x0) ]
	void AddPullBackDelayHookedBuff();

	// Object: Function DFMAbility.ChainHookComponent.AddPullBackDelayBuff
	// Flags: [Final|Native|Public|Const]
	// Offset: 0xc3f0f10
	// Params: [ Num(0) Size(0x0) ]
	void AddPullBackDelayBuff();

	// Object: Function DFMAbility.ChainHookComponent.AddIgnoredWeapon
	// Flags: [Final|Native|Private]
	// Offset: 0xc3f0e6c
	// Params: [ Num(1) Size(0x8) ]
	void AddIgnoredWeapon(struct AGPCharacter* GPCharacter);

	// Object: Function DFMAbility.ChainHookComponent.AddHookBrokenCount
	// Flags: [Final|Native|Private]
	// Offset: 0xc3f0e58
	// Params: [ Num(0) Size(0x0) ]
	void AddHookBrokenCount();
};

// Object: Class DFMAbility.ChainHookGrenade
// Size: 0x18D0 (Inherited: 0x1890)
struct AChainHookGrenade : ADFMAbilityWeaponThrowableBullet
{
	DEFINE_UE_CLASS_HELPERS(AChainHookGrenade, "ChainHookGrenade")

	float AddHealthDamage; // 0x1884(0x4)
	ECharacterPart AddHealthDamagePart; // 0x1888(0x1)
	float MaxHitDistance; // 0x188C(0x4)
	float MaxStickyOffsetZ; // 0x1890(0x4)
	float MinStickyOffsetZ; // 0x1894(0x4)
	uint8_t IsHitCharAddTrace : 1; // 0x1898(0x1), Mask(0x1)
	float HitCharAddTraceAddThickness; // 0x189C(0x4)
	uint8_t bIsIgnoreDSPlayExplosionEffect : 1; // 0x18A0(0x1), Mask(0x1)
	uint8_t BitPad_0x18A5_2 : 6; // 0x18A5(0x1)
	uint8_t Pad_0x18A6[0x2]; // 0x18A6(0x2)
	struct TArray<struct UObject*> IgnoreObjectClass; // 0x18A8(0x10)
	uint8_t bIsHookStop : 1; // 0x18B8(0x1), Mask(0x1)
	uint8_t BitPad_0x18B8_1 : 7; // 0x18B8(0x1)
	uint8_t Pad_0x18B9[0x3]; // 0x18B9(0x3)
	struct FVector HookStartLocation; // 0x18BC(0xC)
	uint8_t Pad_0x18C8[0x8]; // 0x18C8(0x8)

	// Object: Function DFMAbility.ChainHookGrenade.UnregisterToHookComponent_3P
	// Flags: [Final|Native|Public]
	// Offset: 0xc3f736c
	// Params: [ Num(0) Size(0x0) ]
	void UnregisterToHookComponent_3P();

	// Object: Function DFMAbility.ChainHookGrenade.UnregisterToHookComponent
	// Flags: [Final|Native|Public]
	// Offset: 0xc3f7358
	// Params: [ Num(0) Size(0x0) ]
	void UnregisterToHookComponent();

	// Object: Function DFMAbility.ChainHookGrenade.TryStickyHookToCharacter
	// Flags: [Final|Native|Private|HasOutParms|HasDefaults|Const]
	// Offset: 0xc3f7284
	// Params: [ Num(2) Size(0x94) ]
	struct FVector TryStickyHookToCharacter(const struct FHitResult& ImpactResult);

	// Object: Function DFMAbility.ChainHookGrenade.TryCheckHitCharAddTrace
	// Flags: [Final|Native|Private|HasOutParms]
	// Offset: 0xc3f71b0
	// Params: [ Num(2) Size(0x89) ]
	uint8_t TryCheckHitCharAddTrace(struct FHitResult& ImpactResult);

	// Object: Function DFMAbility.ChainHookGrenade.RegisterToHookComponent_3P
	// Flags: [Final|Native|Public]
	// Offset: 0xc3f719c
	// Params: [ Num(0) Size(0x0) ]
	void RegisterToHookComponent_3P();

	// Object: Function DFMAbility.ChainHookGrenade.RegisterToHookComponent
	// Flags: [Final|Native|Public]
	// Offset: 0xc3f7188
	// Params: [ Num(0) Size(0x0) ]
	void RegisterToHookComponent();

	// Object: Function DFMAbility.ChainHookGrenade.PlayHitSound
	// Flags: [Final|Native|Private|HasOutParms]
	// Offset: 0xc3f70c0
	// Params: [ Num(1) Size(0x88) ]
	void PlayHitSound(const struct FHitResult& ImpactResult);

	// Object: Function DFMAbility.ChainHookGrenade.PlayHitEffect
	// Flags: [Final|Native|Private|HasOutParms]
	// Offset: 0xc3f6ff8
	// Params: [ Num(1) Size(0x88) ]
	void PlayHitEffect(const struct FHitResult& ImpactResult);

	// Object: Function DFMAbility.ChainHookGrenade.OnHitOthers
	// Flags: [Final|Native|Private|HasDefaults]
	// Offset: 0xc3f6f54
	// Params: [ Num(1) Size(0xC) ]
	void OnHitOthers(struct FVector HitLocation);

	// Object: Function DFMAbility.ChainHookGrenade.OnHitNone
	// Flags: [Final|Native|Private]
	// Offset: 0xc3f6f40
	// Params: [ Num(0) Size(0x0) ]
	void OnHitNone();

	// Object: Function DFMAbility.ChainHookGrenade.OnHitHookTaker
	// Flags: [Final|Native|Private|HasDefaults]
	// Offset: 0xc3f6e14
	// Params: [ Num(3) Size(0x28) ]
	void OnHitHookTaker(struct TScriptInterface<IChainHookTakerInterface> HookTaker, struct FVector HitLocation, struct FVector ProjectileStickyOffset);

	// Object: Function DFMAbility.ChainHookGrenade.InitTrajectoryFlagBlackSet
	// Flags: [Final|Native|Private]
	// Offset: 0xc3f6e00
	// Params: [ Num(0) Size(0x0) ]
	void InitTrajectoryFlagBlackSet();

	// Object: Function DFMAbility.ChainHookGrenade.GetTPPChainHookComponent
	// Flags: [Final|Native|Private]
	// Offset: 0xc3f6dcc
	// Params: [ Num(1) Size(0x8) ]
	struct UChainHookComponent* GetTPPChainHookComponent();

	// Object: Function DFMAbility.ChainHookGrenade.GetHookWeapon_3P
	// Flags: [Final|Native|Private|Const]
	// Offset: 0xc3f6d98
	// Params: [ Num(1) Size(0x8) ]
	struct AWeaponBase* GetHookWeapon_3P();

	// Object: Function DFMAbility.ChainHookGrenade.GetHookLocation
	// Flags: [Final|Native|Public|HasDefaults|Const]
	// Offset: 0xc3f6d60
	// Params: [ Num(1) Size(0xC) ]
	struct FVector GetHookLocation();

	// Object: Function DFMAbility.ChainHookGrenade.GetHitBoneName
	// Flags: [Final|Native|Private]
	// Offset: 0xc3f6d2c
	// Params: [ Num(1) Size(0x8) ]
	struct FName GetHitBoneName();

	// Object: Function DFMAbility.ChainHookGrenade.GetChainHookComponent
	// Flags: [Final|Native|Private]
	// Offset: 0xc3f6cf8
	// Params: [ Num(1) Size(0x8) ]
	struct UChainHookComponent* GetChainHookComponent();

	// Object: Function DFMAbility.ChainHookGrenade.DoHookPointDamage
	// Flags: [Final|Native|Private]
	// Offset: 0xc3f6c54
	// Params: [ Num(1) Size(0x8) ]
	void DoHookPointDamage(struct AActor* HitTarget);

	// Object: Function DFMAbility.ChainHookGrenade.DoHookHealthDamage
	// Flags: [Final|Native|Private]
	// Offset: 0xc3f6bb0
	// Params: [ Num(1) Size(0x8) ]
	void DoHookHealthDamage(struct AActor* HitTarget);

	// Object: Function DFMAbility.ChainHookGrenade.DoCheckHitCharAddTrace
	// Flags: [Final|Native|Private|HasOutParms|HasDefaults]
	// Offset: 0xc3f6a20
	// Params: [ Num(5) Size(0xA9) ]
	uint8_t DoCheckHitCharAddTrace(struct FHitResult& OutHit, struct FVector HitCharLocation, struct FVector HitCharNormal, struct AActor* HitChar);

	// Object: Function DFMAbility.ChainHookGrenade.CheckMaxHitDistance
	// Flags: [Final|Native|Private|HasDefaults]
	// Offset: 0xc3f6970
	// Params: [ Num(2) Size(0xD) ]
	uint8_t CheckMaxHitDistance(struct FVector HitLocation);
};

// Object: Class DFMAbility.ChainHookHitBoxActor
// Size: 0x3E8 (Inherited: 0x370)
struct AChainHookHitBoxActor : AActor
{
	DEFINE_UE_CLASS_HELPERS(AChainHookHitBoxActor, "ChainHookHitBoxActor")

	uint8_t Pad_0x370[0x28]; // 0x370(0x28)
	uint8_t bIsDrawDebug : 1; // 0x398(0x1), Mask(0x1)
	uint8_t BitPad_0x398_1 : 7; // 0x398(0x1)
	uint8_t Pad_0x399[0x3]; // 0x399(0x3)
	int32_t ThreatId; // 0x39C(0x4)
	EHitEventType HitEventType; // 0x3A0(0x1)
	uint8_t Pad_0x3A1[0x3]; // 0x3A1(0x3)
	float HitExtent; // 0x3A4(0x4)
	struct TWeakObjectPtr<struct AGPCharacter> OwnerCharacter; // 0x3A8(0x8)
	uint8_t bIsCanHit : 1; // 0x3B0(0x1), Mask(0x1)
	uint8_t BitPad_0x3B0_1 : 7; // 0x3B0(0x1)
	uint8_t bIsRegisterToSkillComponent : 1; // 0x3B1(0x1), Mask(0x1)
	uint8_t BitPad_0x3B1_1 : 7; // 0x3B1(0x1)
	uint8_t Pad_0x3B2[0x2]; // 0x3B2(0x2)
	float MaxHP; // 0x3B4(0x4)
	float CurrHP; // 0x3B8(0x4)
	struct TWeakObjectPtr<struct UChainHookComponent> OwnerHook; // 0x3BC(0x8)
	uint8_t Pad_0x3C4[0x4]; // 0x3C4(0x4)
	struct TArray<struct UBoxComponent*> CurrHitBoxArray; // 0x3C8(0x10)
	struct FVector MarkerLocation; // 0x3D8(0xC)
	uint8_t Pad_0x3E4[0x4]; // 0x3E4(0x4)

	// Object: Function DFMAbility.ChainHookHitBoxActor.TryRegisterToSkillComponent
	// Flags: [Final|Native|Private]
	// Offset: 0xc3f7988
	// Params: [ Num(0) Size(0x0) ]
	void TryRegisterToSkillComponent();

	// Object: Function DFMAbility.ChainHookHitBoxActor.TickHitBox
	// Flags: [Final|Native|Public|HasDefaults]
	// Offset: 0xc3f786c
	// Params: [ Num(3) Size(0x1C) ]
	void TickHitBox(int32_t Index, struct FVector Start, struct FVector End);

	// Object: Function DFMAbility.ChainHookHitBoxActor.SetIsCanHit
	// Flags: [Final|Native|Public]
	// Offset: 0xc3f77c0
	// Params: [ Num(1) Size(0x1) ]
	void SetIsCanHit(uint8_t isCanHit);

	// Object: Function DFMAbility.ChainHookHitBoxActor.SetChainHookComponent
	// Flags: [Final|Native|Public]
	// Offset: 0xc3f771c
	// Params: [ Num(1) Size(0x8) ]
	void SetChainHookComponent(struct UChainHookComponent* Hook);

	// Object: Function DFMAbility.ChainHookHitBoxActor.SendProjectileThreatExplosion
	// Flags: [Final|Native|Private]
	// Offset: 0xc3f7708
	// Params: [ Num(0) Size(0x0) ]
	void SendProjectileThreatExplosion();

	// Object: Function DFMAbility.ChainHookHitBoxActor.SendProjectileThreatCreate
	// Flags: [Final|Native|Private]
	// Offset: 0xc3f76f4
	// Params: [ Num(0) Size(0x0) ]
	void SendProjectileThreatCreate();

	// Object: Function DFMAbility.ChainHookHitBoxActor.ResetHP
	// Flags: [Final|Native|Public]
	// Offset: 0xc3f76e0
	// Params: [ Num(0) Size(0x0) ]
	void ResetHP();

	// Object: Function DFMAbility.ChainHookHitBoxActor.OnRep_OwnerCharacter
	// Flags: [Final|Native|Public]
	// Offset: 0x10ac3d28
	// Params: [ Num(0) Size(0x0) ]
	void OnRep_OwnerCharacter();

	// Object: Function DFMAbility.ChainHookHitBoxActor.OnRep_IsCanHit
	// Flags: [Final|Native|Public]
	// Offset: 0xc3f76cc
	// Params: [ Num(0) Size(0x0) ]
	void OnRep_IsCanHit();

	// Object: Function DFMAbility.ChainHookHitBoxActor.OnHitAndDestroyed
	// Flags: [Final|Native|Private]
	// Offset: 0xc3f76b8
	// Params: [ Num(0) Size(0x0) ]
	void OnHitAndDestroyed();

	// Object: Function DFMAbility.ChainHookHitBoxActor.IsEnemyCast
	// Flags: [Final|Native|Private]
	// Offset: 0xc3f7680
	// Params: [ Num(1) Size(0x1) ]
	uint8_t IsEnemyCast();

	// Object: Function DFMAbility.ChainHookHitBoxActor.Init
	// Flags: [Final|Native|Public]
	// Offset: 0xc3f7568
	// Params: [ Num(3) Size(0x14) ]
	void Init(struct AGPCharacter* CHARACTER, struct UChainHookComponent* Hook, float inMaxHP);

	// Object: Function DFMAbility.ChainHookHitBoxActor.GetHitBoxNum
	// Flags: [Final|Native|Public|Const]
	// Offset: 0xc3f7534
	// Params: [ Num(1) Size(0x4) ]
	int32_t GetHitBoxNum();

	// Object: Function DFMAbility.ChainHookHitBoxActor.CloseHitBox
	// Flags: [Final|Native|Public]
	// Offset: 0xc3f7490
	// Params: [ Num(1) Size(0x4) ]
	void CloseHitBox(int32_t Index);
};

// Object: Class DFMAbility.ChainHookItemActor
// Size: 0x430 (Inherited: 0x370)
struct AChainHookItemActor : AActor
{
	DEFINE_UE_CLASS_HELPERS(AChainHookItemActor, "ChainHookItemActor")

	uint8_t bIsUseAnim : 1; // 0x370(0x1), Mask(0x1)
	uint8_t BitPad_0x370_1 : 7; // 0x370(0x1)
	uint8_t Pad_0x371[0x3]; // 0x371(0x3)
	float ChainMeshBaseSize; // 0x374(0x4)
	struct UGPAudioEventAsset* PullBackNoneStartEvent; // 0x378(0x8)
	struct UGPAudioEventAsset* PullBackNoneStopEvent; // 0x380(0x8)
	struct UGPAudioEventAsset* PullBackNoneFinishEvent; // 0x388(0x8)
	struct UGPAudioEventAsset* PullBackItemStartEvent; // 0x390(0x8)
	struct UGPAudioEventAsset* PullBackItemStopEvent; // 0x398(0x8)
	struct UGPAudioEventAsset* PullBackItemFinishEvent; // 0x3A0(0x8)
	struct UGPAudioEventAsset* ItemBreakEvent; // 0x3A8(0x8)
	struct TWeakObjectPtr<struct ADFMCharacter> CharacterOwner; // 0x3B0(0x8)
	EGPWeaponMode OwnerWeaponMode; // 0x3B8(0x1)
	uint8_t bIsShow : 1; // 0x3B9(0x1), Mask(0x1)
	uint8_t BitPad_0x3B9_1 : 7; // 0x3B9(0x1)
	uint8_t Pad_0x3BA[0x6]; // 0x3BA(0x6)
	struct USkeletalMeshComponent* HookItemSkeletalMesh; // 0x3C0(0x8)
	struct UChainHookItemAnimInstance* HookItemAnim; // 0x3C8(0x8)
	struct USceneComponent* HookRoot; // 0x3D0(0x8)
	struct USceneComponent* ChainRoot0; // 0x3D8(0x8)
	struct USceneComponent* ChainRoot1; // 0x3E0(0x8)
	struct UMeshComponent* HookStaticMesh; // 0x3E8(0x8)
	struct UMeshComponent* ChainStaticMesh0; // 0x3F0(0x8)
	struct UMeshComponent* ChainStaticMesh1; // 0x3F8(0x8)
	struct UTravelerGameAk* CachedHookTravelerAk; // 0x400(0x8)
	int32_t SkinAppearanceId; // 0x408(0x4)
	uint8_t Pad_0x40C[0x4]; // 0x40C(0x4)
	uint64_t ItemID; // 0x410(0x8)
	struct FName AttachMeshKey; // 0x418(0x8)
	uint8_t Pad_0x420[0x8]; // 0x420(0x8)
	struct UMaterialInstanceDynamic* SkinMainMaterial; // 0x428(0x8)

	// Object: Function DFMAbility.ChainHookItemActor.UpdateTravelerGameAk
	// Flags: [Final|Native|Private|HasDefaults]
	// Offset: 0xc3f8ba0
	// Params: [ Num(1) Size(0xC) ]
	void UpdateTravelerGameAk(struct FVector RelativeLocation);

	// Object: Function DFMAbility.ChainHookItemActor.StopAllSound
	// Flags: [Final|Native|Public]
	// Offset: 0xc3f8b8c
	// Params: [ Num(0) Size(0x0) ]
	void StopAllSound();

	// Object: Function DFMAbility.ChainHookItemActor.SetStaticMeshHiddenInGame
	// Flags: [Final|Native|Private]
	// Offset: 0xc3f8aa4
	// Params: [ Num(2) Size(0x9) ]
	void SetStaticMeshHiddenInGame(struct UMeshComponent* StaticMesh, uint8_t bIsHidden);

	// Object: Function DFMAbility.ChainHookItemActor.SetSkin
	// Flags: [Final|Native|Public]
	// Offset: 0xc3f89c4
	// Params: [ Num(2) Size(0x10) ]
	void SetSkin(int32_t InSkinId, uint64_t InItemID);

	// Object: Function DFMAbility.ChainHookItemActor.SetSkeletalMeshActive
	// Flags: [Final|Native|Private|Const]
	// Offset: 0xc3f8918
	// Params: [ Num(1) Size(0x1) ]
	void SetSkeletalMeshActive(uint8_t bNewActive);

	// Object: Function DFMAbility.ChainHookItemActor.SetShowState
	// Flags: [Final|Native|Private]
	// Offset: 0xc3f8828
	// Params: [ Num(2) Size(0x2) ]
	void SetShowState(uint8_t bInIsShow, uint8_t bIsForce);

	// Object: Function DFMAbility.ChainHookItemActor.SetMeshState
	// Flags: [Final|Native|Private]
	// Offset: 0xc3f8738
	// Params: [ Num(2) Size(0x2) ]
	void SetMeshState(uint8_t bIsHidden, uint8_t bIsCastShadow);

	// Object: Function DFMAbility.ChainHookItemActor.SetHookInfoStaticMesh
	// Flags: [Final|Native|Private|HasDefaults]
	// Offset: 0xc3f8594
	// Params: [ Num(5) Size(0x2C) ]
	void SetHookInfoStaticMesh(EChainHookState HookState, struct FVector StartLocation, struct FVector HookLocation, uint8_t bIsBend, struct FVector BendLocation);

	// Object: Function DFMAbility.ChainHookItemActor.SetHookInfoAnim
	// Flags: [Final|Native|Private|HasDefaults]
	// Offset: 0xc3f83f0
	// Params: [ Num(5) Size(0x2C) ]
	void SetHookInfoAnim(EChainHookState HookState, struct FVector StartLocation, struct FVector HookLocation, uint8_t bIsBend, struct FVector BendLocation);

	// Object: Function DFMAbility.ChainHookItemActor.SetHookInfo
	// Flags: [Final|Native|Public|HasDefaults]
	// Offset: 0xc3f8208
	// Params: [ Num(6) Size(0x2D) ]
	void SetHookInfo(EChainHookState HookState, struct FVector StartLocation, struct FVector HookLocation, uint8_t bIsBend, struct FVector BendLocation, uint8_t bIsForce);

	// Object: Function DFMAbility.ChainHookItemActor.SetChainRootInfo
	// Flags: [Final|Native|Private|HasDefaults]
	// Offset: 0xc3f80e0
	// Params: [ Num(4) Size(0x2C) ]
	struct FRotator SetChainRootInfo(struct USceneComponent* SceneComponent, struct FVector Start, struct FVector End);

	// Object: Function DFMAbility.ChainHookItemActor.ResetMeshStateByWeaponMode
	// Flags: [Final|Native|Private]
	// Offset: 0xc3f80cc
	// Params: [ Num(0) Size(0x0) ]
	void ResetMeshStateByWeaponMode();

	// Object: Function DFMAbility.ChainHookItemActor.PlayPullBackSound
	// Flags: [Final|Native|Public]
	// Offset: 0xc3f7f90
	// Params: [ Num(3) Size(0x3) ]
	void PlayPullBackSound(uint8_t IsStart, uint8_t IsFinish, uint8_t HasTarget);

	// Object: Function DFMAbility.ChainHookItemActor.PlayBreakSound
	// Flags: [Final|Native|Public]
	// Offset: 0xc3f7f7c
	// Params: [ Num(0) Size(0x0) ]
	void PlayBreakSound();

	// Object: Function DFMAbility.ChainHookItemActor.OnSkinMatLoaded
	// Flags: [Final|Native|Public]
	// Offset: 0xc3f7f68
	// Params: [ Num(0) Size(0x0) ]
	void OnSkinMatLoaded();

	// Object: Function DFMAbility.ChainHookItemActor.OnMeshLoadComplete
	// Flags: [Final|Native|Public]
	// Offset: 0xc3f7e4c
	// Params: [ Num(3) Size(0x18) ]
	void OnMeshLoadComplete(struct ACHARACTER* CHARACTER, EGPWeaponMode WeaponMode, struct USkeletalMeshComponent* WeaponMesh);

	// Object: Function DFMAbility.ChainHookItemActor.IsNeedShowItem
	// Flags: [Final|Native|Static|Private]
	// Offset: 0xc3f7da4
	// Params: [ Num(2) Size(0x2) ]
	static uint8_t IsNeedShowItem(EChainHookState HookState);

	// Object: Function DFMAbility.ChainHookItemActor.IsInFPPView
	// Flags: [Final|Native|Private|Const]
	// Offset: 0xc3f7d6c
	// Params: [ Num(1) Size(0x1) ]
	uint8_t IsInFPPView();

	// Object: Function DFMAbility.ChainHookItemActor.Is3PWeaponItem
	// Flags: [Final|Native|Private|Const]
	// Offset: 0xc3f7d34
	// Params: [ Num(1) Size(0x1) ]
	uint8_t Is3PWeaponItem();

	// Object: Function DFMAbility.ChainHookItemActor.Is1PWeaponItem
	// Flags: [Final|Native|Private|Const]
	// Offset: 0xc3f7cfc
	// Params: [ Num(1) Size(0x1) ]
	uint8_t Is1PWeaponItem();

	// Object: Function DFMAbility.ChainHookItemActor.InitStaticMesh
	// Flags: [Final|Native|Private]
	// Offset: 0xc3f7ce8
	// Params: [ Num(0) Size(0x0) ]
	void InitStaticMesh();

	// Object: Function DFMAbility.ChainHookItemActor.InitHookTravelerAk
	// Flags: [Final|Native|Private]
	// Offset: 0xc3f7cd4
	// Params: [ Num(0) Size(0x0) ]
	void InitHookTravelerAk();

	// Object: Function DFMAbility.ChainHookItemActor.InitAnim
	// Flags: [Final|Native|Private]
	// Offset: 0xc3f7cc0
	// Params: [ Num(0) Size(0x0) ]
	void InitAnim();

	// Object: Function DFMAbility.ChainHookItemActor.HideAllStaticMesh
	// Flags: [Final|Native|Private]
	// Offset: 0xc3f7cac
	// Params: [ Num(0) Size(0x0) ]
	void HideAllStaticMesh();

	// Object: Function DFMAbility.ChainHookItemActor.DoPlaySound
	// Flags: [Final|Native|Private]
	// Offset: 0xc3f7c08
	// Params: [ Num(1) Size(0x8) ]
	void DoPlaySound(struct UGPAudioEventAsset* Sound);

	// Object: Function DFMAbility.ChainHookItemActor.CheckSound
	// Flags: [Final|Native|Private]
	// Offset: 0xc3f7b58
	// Params: [ Num(2) Size(0x9) ]
	uint8_t CheckSound(struct UGPAudioEventAsset* Sound);

	// Object: Function DFMAbility.ChainHookItemActor.CancelLoadSkin
	// Flags: [Final|Native|Public]
	// Offset: 0xc3f7b44
	// Params: [ Num(0) Size(0x0) ]
	void CancelLoadSkin();

	// Object: Function DFMAbility.ChainHookItemActor.AdjustedFPPWeaponLocation
	// Flags: [Final|Native|Private|HasDefaults|Const]
	// Offset: 0xc3f7a94
	// Params: [ Num(2) Size(0x18) ]
	struct FVector AdjustedFPPWeaponLocation(struct FVector StartLocation);
};

// Object: Class DFMAbility.ChainHookItemAnimInstance
// Size: 0xA60 (Inherited: 0x280)
struct UChainHookItemAnimInstance : UGPAnimInstanceBase
{
	DEFINE_UE_CLASS_HELPERS(UChainHookItemAnimInstance, "ChainHookItemAnimInstance")

	struct FChainHookItemAnimInstanceProxy LocalProxy; // 0x280(0x7D0)
	struct USkeletalMeshComponent* MasterPoseMesh; // 0xA50(0x8)
	uint8_t Pad_0xA58[0x8]; // 0xA58(0x8)

	// Object: Function DFMAbility.ChainHookItemAnimInstance.SetHookInfo
	// Flags: [Final|Native|Public|HasDefaults]
	// Offset: 0xc3f8eac
	// Params: [ Num(6) Size(0x2C) ]
	void SetHookInfo(uint8_t bIsFPP, EChainHookState HookState, struct FVector StartLocation, struct FVector HookLocation, uint8_t bIsBend, struct FVector BendLocation);

	// Object: Function DFMAbility.ChainHookItemAnimInstance.OnMeshLoadComplete
	// Flags: [Final|Native|Public]
	// Offset: 0xc3f8e08
	// Params: [ Num(1) Size(0x8) ]
	void OnMeshLoadComplete(struct USkeletalMeshComponent* WeaponMesh);
};

// Object: Class DFMAbility.ChainHookWeapon
// Size: 0x14F0 (Inherited: 0x1440)
struct AChainHookWeapon : AChainHookBaseWeapon
{
	DEFINE_UE_CLASS_HELPERS(AChainHookWeapon, "ChainHookWeapon")

	float ChargeTime; // 0x1434(0x4)
	struct FName ChargeStartEventName; // 0x1438(0x8)
	struct FName ChargeStopEventName; // 0x1440(0x8)
	struct FName ChargeFinishEventName; // 0x1448(0x8)
	struct FName MoveLoopStartEventName; // 0x1450(0x8)
	struct FName MoveLoopStopEventName; // 0x1458(0x8)
	struct FName PullBackStartEventName; // 0x1460(0x8)
	struct FName PullBackStopEventName; // 0x1468(0x8)
	struct FName PullBackFinishEventName; // 0x1470(0x8)
	struct FName PullBackFailedEventName; // 0x1478(0x8)
	struct FName PullBackBreakEventName; // 0x1480(0x8)
	struct FName HitCharacterEventName; // 0x1488(0x8)
	struct FName HitOtherEventName; // 0x1490(0x8)
	struct FString HitEnemyVoiceString; // 0x1498(0x10)
	struct FString HitAllyVoiceString; // 0x14A8(0x10)
	struct FString BrokenVoiceString; // 0x14B8(0x10)
	struct UChainHookComponent* HookComponent; // 0x14C8(0x8)
	uint8_t bRegisterToSkillComponent : 1; // 0x14D0(0x1), Mask(0x1)
	struct FTimerHandle ChargeTimer; // 0x14D8(0x8)
	uint8_t bHasPlayHitSound : 1; // 0x14E0(0x1), Mask(0x1)
	uint8_t BitPad_0x14E4_2 : 6; // 0x14E4(0x1)
	uint8_t Pad_0x14E5[0xB]; // 0x14E5(0xB)

	// Object: Function DFMAbility.ChainHookWeapon.UseSkillComponentData
	// Flags: [Final|Native|Public]
	// Offset: 0xc3f97dc
	// Params: [ Num(0) Size(0x0) ]
	void UseSkillComponentData();

	// Object: Function DFMAbility.ChainHookWeapon.TryPlayHitSound
	// Flags: [Final|Native|Public]
	// Offset: 0xc3f9738
	// Params: [ Num(1) Size(0x8) ]
	void TryPlayHitSound(struct AActor* HitTarget);

	// Object: Function DFMAbility.ChainHookWeapon.StopChargeTimerTimer
	// Flags: [Final|Native|Private]
	// Offset: 0xc3f9724
	// Params: [ Num(0) Size(0x0) ]
	void StopChargeTimerTimer();

	// Object: Function DFMAbility.ChainHookWeapon.StopAllSound
	// Flags: [Final|Native|Public]
	// Offset: 0xc3f9710
	// Params: [ Num(0) Size(0x0) ]
	void StopAllSound();

	// Object: Function DFMAbility.ChainHookWeapon.StopAllLoopSound
	// Flags: [Final|Native|Private]
	// Offset: 0xc3f96fc
	// Params: [ Num(0) Size(0x0) ]
	void StopAllLoopSound();

	// Object: Function DFMAbility.ChainHookWeapon.StartChargeTimerTimer
	// Flags: [Final|Native|Private]
	// Offset: 0xc3f96e8
	// Params: [ Num(0) Size(0x0) ]
	void StartChargeTimerTimer();

	// Object: Function DFMAbility.ChainHookWeapon.RegisterToSkillComponent
	// Flags: [Final|Native|Public]
	// Offset: 0xc3f963c
	// Params: [ Num(1) Size(0x1) ]
	void RegisterToSkillComponent(uint8_t bIsAdd);

	// Object: Function DFMAbility.ChainHookWeapon.PreloadAudio
	// Flags: [Final|Native|Public]
	// Offset: 0xc3f9628
	// Params: [ Num(0) Size(0x0) ]
	void PreloadAudio();

	// Object: Function DFMAbility.ChainHookWeapon.PlayWeaponEnableSound
	// Flags: [Final|Native|Public]
	// Offset: 0xc3f9614
	// Params: [ Num(0) Size(0x0) ]
	void PlayWeaponEnableSound();

	// Object: Function DFMAbility.ChainHookWeapon.PlayWeaponDisableSound
	// Flags: [Final|Native|Public]
	// Offset: 0xc3f9600
	// Params: [ Num(0) Size(0x0) ]
	void PlayWeaponDisableSound();

	// Object: Function DFMAbility.ChainHookWeapon.PlayPullBackSound
	// Flags: [Final|Native|Public]
	// Offset: 0xc3f9510
	// Params: [ Num(2) Size(0x2) ]
	void PlayPullBackSound(uint8_t IsStart, uint8_t IsFinish);

	// Object: Function DFMAbility.ChainHookWeapon.PlayPullBackFailedSound
	// Flags: [Final|Native|Public]
	// Offset: 0xc3f94fc
	// Params: [ Num(0) Size(0x0) ]
	void PlayPullBackFailedSound();

	// Object: Function DFMAbility.ChainHookWeapon.PlayPullBackBreakSound
	// Flags: [Final|Native|Public]
	// Offset: 0xc3f94e8
	// Params: [ Num(0) Size(0x0) ]
	void PlayPullBackBreakSound();

	// Object: Function DFMAbility.ChainHookWeapon.PlayMoveForwardSound
	// Flags: [Final|Native|Public]
	// Offset: 0xc3f943c
	// Params: [ Num(1) Size(0x1) ]
	void PlayMoveForwardSound(uint8_t IsStart);

	// Object: Function DFMAbility.ChainHookWeapon.PlayHitVO
	// Flags: [Final|Native|Private]
	// Offset: 0xc3f9390
	// Params: [ Num(1) Size(0x1) ]
	void PlayHitVO(uint8_t IsHitEnemy);

	// Object: Function DFMAbility.ChainHookWeapon.PlayChargeSound
	// Flags: [Final|Native|Public]
	// Offset: 0xc3f92e4
	// Params: [ Num(1) Size(0x1) ]
	void PlayChargeSound(uint8_t IsStart);

	// Object: Function DFMAbility.ChainHookWeapon.PlayBrokenVO
	// Flags: [Final|Native|Private]
	// Offset: 0xc3f92d0
	// Params: [ Num(0) Size(0x0) ]
	void PlayBrokenVO();

	// Object: Function DFMAbility.ChainHookWeapon.OnChargeTimer
	// Flags: [Final|Native|Private]
	// Offset: 0xc3f92bc
	// Params: [ Num(0) Size(0x0) ]
	void OnChargeTimer();

	// Object: Function DFMAbility.ChainHookWeapon.DoPlayVO
	// Flags: [Final|Native|Private]
	// Offset: 0xc3f9210
	// Params: [ Num(1) Size(0x10) ]
	void DoPlayVO(struct FString VoiceString);

	// Object: Function DFMAbility.ChainHookWeapon.DoPlaySound
	// Flags: [Final|Native|Private]
	// Offset: 0xc3f916c
	// Params: [ Num(1) Size(0x8) ]
	void DoPlaySound(struct FName EventName);

	// Object: Function DFMAbility.ChainHookWeapon.CheckSound
	// Flags: [Final|Native|Private]
	// Offset: 0xc3f90bc
	// Params: [ Num(2) Size(0x9) ]
	uint8_t CheckSound(struct FName EventName);
};

// Object: Class DFMAbility.DelayDestroySkeletalMesh
// Size: 0xF50 (Inherited: 0xF50)
struct UDelayDestroySkeletalMesh : USkeletalMeshComponent
{
	DEFINE_UE_CLASS_HELPERS(UDelayDestroySkeletalMesh, "DelayDestroySkeletalMesh")
};

// Object: Class DFMAbility.DFMAbilityProjectile
// Size: 0x3A0 (Inherited: 0x370)
struct ADFMAbilityProjectile : AActor
{
	DEFINE_UE_CLASS_HELPERS(ADFMAbilityProjectile, "DFMAbilityProjectile")

	uint8_t Pad_0x370[0x18]; // 0x370(0x18)
	struct UDFMFollowProjectileMovementComponent* MovementComponent; // 0x388(0x8)
	float Speed; // 0x390(0x4)
	uint8_t Pad_0x394[0x4]; // 0x394(0x4)
	struct AActor* TargetCharacter; // 0x398(0x8)

	// Object: Function DFMAbility.DFMAbilityProjectile.OnRep_Target
	// Flags: [Final|Native|Public]
	// Offset: 0xc421304
	// Params: [ Num(0) Size(0x0) ]
	void OnRep_Target();

	// Object: Function DFMAbility.DFMAbilityProjectile.OnRep_Speed
	// Flags: [Final|Native|Public]
	// Offset: 0xc4212f0
	// Params: [ Num(0) Size(0x0) ]
	void OnRep_Speed();

	// Object: Function DFMAbility.DFMAbilityProjectile.OnProjectileStop
	// Flags: [Final|Native|Public|HasOutParms]
	// Offset: 0xc421228
	// Params: [ Num(1) Size(0x88) ]
	void OnProjectileStop(const struct FHitResult& ImpactResult);

	// Object: Function DFMAbility.DFMAbilityProjectile.OnBulletHit
	// Flags: [Native|Public|HasOutParms]
	// Offset: 0xc421158
	// Params: [ Num(1) Size(0x88) ]
	void OnBulletHit(const struct FHitResult& ImpactResult);
};

// Object: Class DFMAbility.DFMAbility_MedicalSyringeProjectile
// Size: 0x3B0 (Inherited: 0x3A0)
struct ADFMAbility_MedicalSyringeProjectile : ADFMAbilityProjectile
{
	DEFINE_UE_CLASS_HELPERS(ADFMAbility_MedicalSyringeProjectile, "DFMAbility_MedicalSyringeProjectile")

	uint32_t AddBuffId; // 0x3A0(0x4)
	uint8_t Pad_0x3A4[0x4]; // 0x3A4(0x4)
	struct UGPAudioEventAsset* OnHitAudio; // 0x3A8(0x8)
};

// Object: Class DFMAbility.DFMAbilityDetectorBase
// Size: 0x748 (Inherited: 0x4F8)
struct ADFMAbilityDetectorBase : ADFMAbilityActor
{
	DEFINE_UE_CLASS_HELPERS(ADFMAbilityDetectorBase, "DFMAbilityDetectorBase")

	uint8_t Pad_0x4F8[0x20]; // 0x4F8(0x20)
	struct UDFMBuffDetectComponent* BuffDetectComponent; // 0x518(0x8)
	uint8_t bCopyParam : 1; // 0x520(0x1), Mask(0x1)
	uint8_t BitPad_0x520_1 : 7; // 0x520(0x1)
	uint8_t Pad_0x521[0x7]; // 0x521(0x7)
	struct TArray<struct FName> IgnoreTags; // 0x528(0x10)
	struct TArray<struct FName> AddTags; // 0x538(0x10)
	struct TArray<struct FName> EnermyAddTags; // 0x548(0x10)
	float LeftTime; // 0x558(0x4)
	uint8_t bClientAutoDestroy : 1; // 0x55C(0x1), Mask(0x1)
	uint8_t BitPad_0x55C_1 : 7; // 0x55C(0x1)
	uint8_t Pad_0x55D[0x3]; // 0x55D(0x3)
	int32_t LeftCount; // 0x560(0x4)
	float ProcessDelay; // 0x564(0x4)
	float DestroyDelay; // 0x568(0x4)
	uint8_t IsCheckBlock : 1; // 0x56C(0x1), Mask(0x1)
	uint8_t BitPad_0x56C_1 : 7; // 0x56C(0x1)
	uint8_t bOverlapCheckHitBlock : 1; // 0x56D(0x1), Mask(0x1)
	uint8_t BitPad_0x56D_1 : 7; // 0x56D(0x1)
	uint8_t Pad_0x56E[0x2]; // 0x56E(0x2)
	float RayCheckHeadHeight; // 0x570(0x4)
	uint8_t bNeedBreakGlassWhenOverlap : 1; // 0x574(0x1), Mask(0x1)
	uint8_t BitPad_0x574_1 : 7; // 0x574(0x1)
	uint8_t Pad_0x575[0x3]; // 0x575(0x3)
	struct TMap<struct FName, struct TSoftObjectPtr<UAnimSequenceBase>> AnimConfig; // 0x578(0x50)
	struct TMap<struct FName, struct TSoftObjectPtr<UGPAudioEventAsset>> AudioConfig; // 0x5C8(0x50)
	struct FSkillSmokeBreakSetting SmokeBreakSetting; // 0x618(0x14)
	struct FSkillSmokeBreakerInfo SmokeBreakerInfo; // 0x62C(0x44)
	uint8_t Pad_0x670[0x4]; // 0x670(0x4)
	struct TWeakObjectPtr<struct ADFMCharacter> OwnerChar; // 0x674(0x8)
	uint8_t Pad_0x67C[0x1C]; // 0x67C(0x1C)
	struct UShapeComponent* RangeCheckCache; // 0x698(0x8)
	uint8_t Pad_0x6A0[0x1]; // 0x6A0(0x1)
	uint8_t bDebug : 1; // 0x6A1(0x1), Mask(0x1)
	uint8_t BitPad_0x6A1_1 : 7; // 0x6A1(0x1)
	uint8_t Pad_0x6A2[0x6]; // 0x6A2(0x6)
	struct TMap<struct FName, struct UAnimSequenceBase*> AnimObjMap; // 0x6A8(0x50)
	struct TMap<struct FName, struct UGPAudioEventAsset*> AudioObjMap; // 0x6F8(0x50)

	// Object: Function DFMAbility.DFMAbilityDetectorBase.OnInnerDestroySelf
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0xc4068b8
	// Params: [ Num(0) Size(0x0) ]
	void OnInnerDestroySelf();

	// Object: Function DFMAbility.DFMAbilityDetectorBase.OnDetectorDestroy
	// Flags: [Final|Native|Public]
	// Offset: 0xc4068a4
	// Params: [ Num(0) Size(0x0) ]
	void OnDetectorDestroy();

	// Object: Function DFMAbility.DFMAbilityDetectorBase.OnAudioLoad
	// Flags: [Native|Public]
	// Offset: 0xc4067cc
	// Params: [ Num(1) Size(0x10) ]
	void OnAudioLoad(struct TArray<struct FSoftObjectPath> AssetRef);

	// Object: Function DFMAbility.DFMAbilityDetectorBase.OnAnimLoad
	// Flags: [Native|Public]
	// Offset: 0xc4066f4
	// Params: [ Num(1) Size(0x10) ]
	void OnAnimLoad(struct TArray<struct FSoftObjectPath> AssetRef);

	// Object: Function DFMAbility.DFMAbilityDetectorBase.LogTriggerActors
	// Flags: [Final|Native|Public|Const]
	// Offset: 0xc40660c
	// Params: [ Num(2) Size(0x10) ]
	void LogTriggerActors(uint8_t bIsAdd, struct AActor* OtherActor);

	// Object: Function DFMAbility.DFMAbilityDetectorBase.IsLocalEnemy
	// Flags: [Native|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0xc4065cc
	// Params: [ Num(1) Size(0x1) ]
	uint8_t IsLocalEnemy();

	// Object: Function DFMAbility.DFMAbilityDetectorBase.IsEnemy
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0xc4064e4
	// Params: [ Num(3) Size(0x11) ]
	uint8_t IsEnemy(struct AGPCharacterBase* CharecterA, struct AGPCharacterBase* CharecterB);

	// Object: Function DFMAbility.DFMAbilityDetectorBase.IsCharacterEnemy
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0xc406434
	// Params: [ Num(2) Size(0x9) ]
	uint8_t IsCharacterEnemy(struct AGPCharacter* GPChar);

	// Object: Function DFMAbility.DFMAbilityDetectorBase.InnerDestroySelfWithDelay
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xc406390
	// Params: [ Num(1) Size(0x4) ]
	void InnerDestroySelfWithDelay(float Delay);

	// Object: Function DFMAbility.DFMAbilityDetectorBase.InnerDestroySelf
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xc40637c
	// Params: [ Num(0) Size(0x0) ]
	void InnerDestroySelf();

	// Object: Function DFMAbility.DFMAbilityDetectorBase.GetAudioByName
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xc4062d0
	// Params: [ Num(2) Size(0x10) ]
	struct UGPAudioEventAsset* GetAudioByName(struct FName AudioName);

	// Object: Function DFMAbility.DFMAbilityDetectorBase.GetAnimByName
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xc406224
	// Params: [ Num(2) Size(0x10) ]
	struct UAnimSequenceBase* GetAnimByName(struct FName AnimName);

	// Object: Function DFMAbility.DFMAbilityDetectorBase.DestroySelf
	// Flags: [Final|Native|Public]
	// Offset: 0xc406210
	// Params: [ Num(0) Size(0x0) ]
	void DestroySelf();

	// Object: Function DFMAbility.DFMAbilityDetectorBase.ClearTriggerActors
	// Flags: [Final|Native|Public]
	// Offset: 0xc4061fc
	// Params: [ Num(0) Size(0x0) ]
	void ClearTriggerActors();

	// Object: Function DFMAbility.DFMAbilityDetectorBase.BP_StartDestroySelf
	// Flags: [Event|Public|BlueprintCallable|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(1) Size(0x1) ]
	void BP_StartDestroySelf(uint8_t fromLifeTimeOrCount);

	// Object: Function DFMAbility.DFMAbilityDetectorBase.BP_OnAudioLoadFinished
	// Flags: [Event|Public|BlueprintCallable|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(0) Size(0x0) ]
	void BP_OnAudioLoadFinished();

	// Object: Function DFMAbility.DFMAbilityDetectorBase.BP_OnAnimLoadFinished
	// Flags: [Event|Public|BlueprintCallable|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(0) Size(0x0) ]
	void BP_OnAnimLoadFinished();

	// Object: Function DFMAbility.DFMAbilityDetectorBase.BP_LeftTimeUpdate
	// Flags: [Event|Public|BlueprintCallable|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(1) Size(0x4) ]
	void BP_LeftTimeUpdate(float CurLeftTime);

	// Object: Function DFMAbility.DFMAbilityDetectorBase.BP_ApplyOverlapActors
	// Flags: [Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(1) Size(0x10) ]
	void BP_ApplyOverlapActors(const struct TArray<struct AActor*>& AllOverlappingActors);
};

// Object: Class DFMAbility.DFMAbilityBuffDetector
// Size: 0x9E8 (Inherited: 0x748)
struct ADFMAbilityBuffDetector : ADFMAbilityDetectorBase
{
	DEFINE_UE_CLASS_HELPERS(ADFMAbilityBuffDetector, "DFMAbilityBuffDetector")

	uint8_t Pad_0x748[0x5C]; // 0x748(0x5C)
	uint8_t bEnableDPVSOnSticky : 1; // 0x7A4(0x1), Mask(0x1)
	uint8_t BitPad_0x7A4_1 : 7; // 0x7A4(0x1)
	uint8_t Pad_0x7A5[0x3]; // 0x7A5(0x3)
	struct TWeakObjectPtr<struct AGPCharacter> DPVSStickyTargetCharacter; // 0x7A8(0x8)
	int32_t AbilityID; // 0x7B0(0x4)
	int32_t OwnerCampID; // 0x7B4(0x4)
	int32_t OwnerTeamID; // 0x7B8(0x4)
	uint8_t Pad_0x7BC[0x4]; // 0x7BC(0x4)
	uint64_t OwnerUin; // 0x7C0(0x8)
	uint8_t bServerElimated : 1; // 0x7C8(0x1), Mask(0x1)
	uint8_t BitPad_0x7C8_1 : 7; // 0x7C8(0x1)
	uint8_t Pad_0x7C9[0x7]; // 0x7C9(0x7)
	uint64_t StickyCharUin; // 0x7D0(0x8)
	struct FStickyInfo StickyInfo; // 0x7D8(0xC0)
	struct TArray<struct FAbilityDetectorBuffData> AddBuffIDs; // 0x898(0x10)
	int32_t SkillId; // 0x8A8(0x4)
	int32_t SkillEntityID; // 0x8AC(0x4)
	uint8_t bTickBuff : 1; // 0x8B0(0x1), Mask(0x1)
	uint8_t BitPad_0x8B0_1 : 7; // 0x8B0(0x1)
	uint8_t Pad_0x8B1[0x3]; // 0x8B1(0x3)
	float TickRate; // 0x8B4(0x4)
	struct TArray<float> CustomCountTime; // 0x8B8(0x10)
	uint8_t bEnemyTrigger : 1; // 0x8C8(0x1), Mask(0x1)
	uint8_t BitPad_0x8C8_1 : 7; // 0x8C8(0x1)
	uint8_t bTeammateTrigger : 1; // 0x8C9(0x1), Mask(0x1)
	uint8_t BitPad_0x8C9_1 : 7; // 0x8C9(0x1)
	uint8_t bTriggerCheckEnemy : 1; // 0x8CA(0x1), Mask(0x1)
	uint8_t BitPad_0x8CA_1 : 7; // 0x8CA(0x1)
	uint8_t Pad_0x8CB[0x5]; // 0x8CB(0x5)
	int64_t HitEffectId; // 0x8D0(0x8)
	float HitEffectDamge; // 0x8D8(0x4)
	float HitEffectAnimTime; // 0x8DC(0x4)
	float HitEffectScale; // 0x8E0(0x4)
	float MPMaxHP; // 0x8E4(0x4)
	float MPCurrHP; // 0x8E8(0x4)
	float MaxHP; // 0x8EC(0x4)
	float CurrHP; // 0x8F0(0x4)
	uint8_t bTakeDamage : 1; // 0x8F4(0x1), Mask(0x1)
	uint8_t BitPad_0x8F4_1 : 7; // 0x8F4(0x1)
	uint8_t bTeammateDamage : 1; // 0x8F5(0x1), Mask(0x1)
	uint8_t BitPad_0x8F5_1 : 7; // 0x8F5(0x1)
	uint8_t bSelfDamage : 1; // 0x8F6(0x1), Mask(0x1)
	uint8_t BitPad_0x8F6_1 : 7; // 0x8F6(0x1)
	uint8_t Pad_0x8F7[0x1]; // 0x8F7(0x1)
	struct FName DestroyFX; // 0x8F8(0x8)
	struct FName DestroyFXUnderWater; // 0x900(0x8)
	struct FName BindToAttachMeshName; // 0x908(0x8)
	uint8_t bBindToAttachMesh : 1; // 0x910(0x1), Mask(0x1)
	uint8_t BitPad_0x910_1 : 7; // 0x910(0x1)
	uint8_t bOnly3PBindToAttachMesh : 1; // 0x911(0x1), Mask(0x1)
	uint8_t BitPad_0x911_1 : 7; // 0x911(0x1)
	uint8_t Pad_0x912[0x2]; // 0x912(0x2)
	struct FName HitBoneName; // 0x914(0x8)
	EHitEventType ApplyHitEventType; // 0x91C(0x1)
	uint8_t Pad_0x91D[0x3]; // 0x91D(0x3)
	struct FName AIStaggerName; // 0x920(0x8)
	float AppyHitCD; // 0x928(0x4)
	uint8_t ApplyHit : 1; // 0x92C(0x1), Mask(0x1)
	uint8_t BitPad_0x92C_1 : 7; // 0x92C(0x1)
	uint8_t DamageApplyHit : 1; // 0x92D(0x1), Mask(0x1)
	uint8_t BitPad_0x92D_1 : 7; // 0x92D(0x1)
	uint8_t Pad_0x92E[0x2]; // 0x92E(0x2)
	int32_t StartApplyHitCnt; // 0x930(0x4)
	uint8_t bHitByName : 1; // 0x934(0x1), Mask(0x1)
	uint8_t BitPad_0x934_1 : 7; // 0x934(0x1)
	ECharacterPart CharacterPart; // 0x935(0x1)
	uint8_t Pad_0x936[0x2]; // 0x936(0x2)
	float HitTargetYaw; // 0x938(0x4)
	uint8_t ApplyScoreWhenBeDestroy : 1; // 0x93C(0x1), Mask(0x1)
	uint8_t BitPad_0x93C_1 : 7; // 0x93C(0x1)
	uint8_t Pad_0x93D[0x3]; // 0x93D(0x3)
	EScoreName BeDestroyScore; // 0x940(0x4)
	uint8_t bScoreApplyed : 1; // 0x944(0x1), Mask(0x1)
	uint8_t BitPad_0x944_1 : 7; // 0x944(0x1)
	uint8_t bStickyToTargetKeepRotation : 1; // 0x945(0x1), Mask(0x1)
	uint8_t BitPad_0x945_1 : 7; // 0x945(0x1)
	uint8_t bStickyToTargetKeepRotationOnBone : 1; // 0x946(0x1), Mask(0x1)
	uint8_t BitPad_0x946_1 : 7; // 0x946(0x1)
	uint8_t bCanBeResonance : 1; // 0x947(0x1), Mask(0x1)
	uint8_t BitPad_0x947_1 : 7; // 0x947(0x1)
	uint8_t SetAttachComSkipUpdateTransformsWhenHidden : 1; // 0x948(0x1), Mask(0x1)
	uint8_t BitPad_0x948_1 : 7; // 0x948(0x1)
	uint8_t Pad_0x949[0x3]; // 0x949(0x3)
	struct TWeakObjectPtr<struct USkeletalMeshComponent> StickSkeletalMesh; // 0x94C(0x8)
	uint32_t StickyTargetID; // 0x954(0x4)
	uint8_t bIsStickyToTarget : 1; // 0x958(0x1), Mask(0x1)
	uint8_t BitPad_0x958_1 : 7; // 0x958(0x1)
	uint8_t Pad_0x959[0x3]; // 0x959(0x3)
	struct TWeakObjectPtr<struct ADFMCharacter> StickyChar; // 0x95C(0x8)
	struct TWeakObjectPtr<struct AActor> StickyActor; // 0x964(0x8)
	struct FVector StickyRelativePosition; // 0x96C(0xC)
	struct TMap<uint64_t, float> StaggerCDMap; // 0x978(0x50)
	int32_t ApplyHitCnt; // 0x9C8(0x4)
	uint8_t bResonance : 1; // 0x9CC(0x1), Mask(0x1)
	uint8_t BitPad_0x9CC_1 : 7; // 0x9CC(0x1)
	uint8_t Pad_0x9CD[0x3]; // 0x9CD(0x3)
	struct UFXResourceContainerComponent* DestroyFXComp; // 0x9D0(0x8)
	struct TWeakObjectPtr<struct UFXResourceContainerComponent> DestroyFXCompChecker; // 0x9D8(0x8)
	uint8_t Pad_0x9E0[0x8]; // 0x9E0(0x8)

	// Object: Function DFMAbility.DFMAbilityBuffDetector.UpdatePostEffectVectorParameters
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	// Offset: 0xc401258
	// Params: [ Num(3) Size(0x20) ]
	void UpdatePostEffectVectorParameters(struct FName PostEffectName, struct FName ParameterName, struct FLinearColor Value);

	// Object: Function DFMAbility.DFMAbilityBuffDetector.UpdatePostEffectScalarParameters
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xc401140
	// Params: [ Num(3) Size(0x14) ]
	void UpdatePostEffectScalarParameters(struct FName PostEffectName, struct FName ParameterName, float Value);

	// Object: Function DFMAbility.DFMAbilityBuffDetector.UpdateAttachComSkipUpdateTransformsWhenHidden
	// Flags: [Final|Native|Public]
	// Offset: 0xc40112c
	// Params: [ Num(0) Size(0x0) ]
	void UpdateAttachComSkipUpdateTransformsWhenHidden();

	// Object: Function DFMAbility.DFMAbilityBuffDetector.TryStickyToThrowAttachable
	// Flags: [Final|Native|Public|HasOutParms]
	// Offset: 0xc401058
	// Params: [ Num(2) Size(0x89) ]
	uint8_t TryStickyToThrowAttachable(const struct FHitResult& ImpactResult);

	// Object: Function DFMAbility.DFMAbilityBuffDetector.SyncActor
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xc400fb4
	// Params: [ Num(1) Size(0x8) ]
	void SyncActor(struct ADFMAbilityBuffDetector* Detector);

	// Object: Function DFMAbility.DFMAbilityBuffDetector.StickyToTargetEx
	// Flags: [Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0xc400e54
	// Params: [ Num(3) Size(0x8A) ]
	void StickyToTargetEx(const struct FHitResult& ImpactResult, uint8_t FixStick, uint8_t OnlyFixCharacter);

	// Object: Function DFMAbility.DFMAbilityBuffDetector.StickyToTarget
	// Flags: [Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0xc400d84
	// Params: [ Num(1) Size(0x88) ]
	void StickyToTarget(const struct FHitResult& ImpactResult);

	// Object: Function DFMAbility.DFMAbilityBuffDetector.ShowHitAbilityActorMarker
	// Flags: [Final|Native|Public|HasOutParms]
	// Offset: 0xc400c70
	// Params: [ Num(2) Size(0x8A8) ]
	void ShowHitAbilityActorMarker(const uint8_t& bIsServer, const struct FDamageResultInfo& DamageResult);

	// Object: Function DFMAbility.DFMAbilityBuffDetector.SetPostEffectActive
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xc400bcc
	// Params: [ Num(1) Size(0x8) ]
	void SetPostEffectActive(struct FName PostEffectName);

	// Object: Function DFMAbility.DFMAbilityBuffDetector.SetBuffTime
	// Flags: [Final|Native|Private|Const]
	// Offset: 0xc400ab0
	// Params: [ Num(3) Size(0x10) ]
	void SetBuffTime(struct ADFMCharacter* DFMCharacter, int32_t BuffId, float TargetTime);

	// Object: Function DFMAbility.DFMAbilityBuffDetector.SetAbility
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0xc400a04
	// Params: [ Num(1) Size(0x4) ]
	void SetAbility(int32_t InSkillId);

	// Object: Function DFMAbility.DFMAbilityBuffDetector.RequestStaggerByName
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xc400820
	// Params: [ Num(6) Size(0x1C) ]
	void RequestStaggerByName(struct ADFMCharacter* DFMCharacter, struct FName StaggerName, uint8_t bOverrideCurStagger, uint8_t bShouldTurn, float TargetYaw, float CD);

	// Object: Function DFMAbility.DFMAbilityBuffDetector.Rep_StickyToChar
	// Flags: [Native|Public]
	// Offset: 0xc400804
	// Params: [ Num(0) Size(0x0) ]
	void Rep_StickyToChar();

	// Object: Function DFMAbility.DFMAbilityBuffDetector.Rep_ServerElimate
	// Flags: [Final|Native|Public]
	// Offset: 0x10a67280
	// Params: [ Num(0) Size(0x0) ]
	void Rep_ServerElimate();

	// Object: Function DFMAbility.DFMAbilityBuffDetector.Rep_OwnerUin
	// Flags: [Final|Native|Public]
	// Offset: 0xf8d9de0
	// Params: [ Num(0) Size(0x0) ]
	void Rep_OwnerUin();

	// Object: Function DFMAbility.DFMAbilityBuffDetector.Rep_AbilityID
	// Flags: [Final|Native|Public]
	// Offset: 0x10985344
	// Params: [ Num(0) Size(0x0) ]
	void Rep_AbilityID();

	// Object: Function DFMAbility.DFMAbilityBuffDetector.RemovePostEffect
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xc400760
	// Params: [ Num(1) Size(0x8) ]
	void RemovePostEffect(struct FName PostEffectName);

	// Object: Function DFMAbility.DFMAbilityBuffDetector.OnStickyToTarget
	// Flags: [Native|Public|HasOutParms]
	// Offset: 0xc400690
	// Params: [ Num(1) Size(0x88) ]
	void OnStickyToTarget(const struct FHitResult& ImpactResult);

	// Object: Function DFMAbility.DFMAbilityBuffDetector.OnStickyTargetDied
	// Flags: [Native|Public]
	// Offset: 0xc4005e4
	// Params: [ Num(1) Size(0x8) ]
	void OnStickyTargetDied(struct AActor* Vehicle);

	// Object: Function DFMAbility.DFMAbilityBuffDetector.OnRep_StickyInfo
	// Flags: [Native|Public]
	// Offset: 0xc4005c8
	// Params: [ Num(0) Size(0x0) ]
	void OnRep_StickyInfo();

	// Object: Function DFMAbility.DFMAbilityBuffDetector.OnClientStartDestroySelf
	// Flags: [Native|Public]
	// Offset: 0xc4005ac
	// Params: [ Num(0) Size(0x0) ]
	void OnClientStartDestroySelf();

	// Object: Function DFMAbility.DFMAbilityBuffDetector.Is1P
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xc400574
	// Params: [ Num(1) Size(0x1) ]
	uint8_t Is1P();

	// Object: Function DFMAbility.DFMAbilityBuffDetector.GetTimerRemaining
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0xc400540
	// Params: [ Num(1) Size(0x4) ]
	float GetTimerRemaining();

	// Object: Function DFMAbility.DFMAbilityBuffDetector.GetResourcePath
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0xc400494
	// Params: [ Num(2) Size(0x10) ]
	struct FName GetResourcePath(struct FName Key);

	// Object: Function DFMAbility.DFMAbilityBuffDetector.GetGPMesh
	// Flags: [Event|Public|BlueprintCallable|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(1) Size(0x8) ]
	struct USkeletalMeshComponent* GetGPMesh();

	// Object: Function DFMAbility.DFMAbilityBuffDetector.GetAbilityRole
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0xc400460
	// Params: [ Num(1) Size(0x1) ]
	ENetRole GetAbilityRole();

	// Object: Function DFMAbility.DFMAbilityBuffDetector.GetAbilityInstance
	// Flags: [Final|Native|Public]
	// Offset: 0xc40042c
	// Params: [ Num(1) Size(0x8) ]
	struct UDFMAbilityInstance* GetAbilityInstance();

	// Object: Function DFMAbility.DFMAbilityBuffDetector.GetAbilityCharacter
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0xc4003f0
	// Params: [ Num(1) Size(0x8) ]
	struct ADFMCharacter* GetAbilityCharacter();

	// Object: Function DFMAbility.DFMAbilityBuffDetector.GetAbility
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0xc4003b4
	// Params: [ Num(1) Size(0x4) ]
	int32_t GetAbility();

	// Object: Function DFMAbility.DFMAbilityBuffDetector.DeactiveFXResourceContainerComponent
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xc4002d4
	// Params: [ Num(2) Size(0xC) ]
	void DeactiveFXResourceContainerComponent(struct UFXResourceContainerComponent* FX, int32_t FXHandle);

	// Object: Function DFMAbility.DFMAbilityBuffDetector.DamageTakerApplyDamageEffect
	// Flags: [Native|Public|HasOutParms]
	// Offset: 0xc4001b8
	// Params: [ Num(2) Size(0x8A8) ]
	void DamageTakerApplyDamageEffect(const uint8_t& bIsServer, const struct FDamageResultInfo& DamageResult);

	// Object: Function DFMAbility.DFMAbilityBuffDetector.ClientPlayCameraHitEffect
	// Flags: [Net|NetReliableNative|Event|NetMulticast|Public]
	// Offset: 0xc40010c
	// Params: [ Num(1) Size(0x8) ]
	void ClientPlayCameraHitEffect(uint64_t Uin);

	// Object: Function DFMAbility.DFMAbilityBuffDetector.ClientOnInnerDestroySelf
	// Flags: [Net|NetReliableNative|Event|NetMulticast|Public]
	// Offset: 0xc4000f0
	// Params: [ Num(0) Size(0x0) ]
	void ClientOnInnerDestroySelf();

	// Object: Function DFMAbility.DFMAbilityBuffDetector.CheckBuffTime
	// Flags: [Final|Native|Private|Const]
	// Offset: 0xc3fffc8
	// Params: [ Num(4) Size(0x11) ]
	uint8_t CheckBuffTime(struct ADFMCharacter* DFMCharacter, int32_t BuffId, float MinTime);

	// Object: Function DFMAbility.DFMAbilityBuffDetector.C204DataReport
	// Flags: [Final|Native|Protected]
	// Offset: 0xc3fff24
	// Params: [ Num(1) Size(0x8) ]
	void C204DataReport(struct AGPCharacter* DamageMaker);

	// Object: Function DFMAbility.DFMAbilityBuffDetector.BP_SetCharacterOwner
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xc3ffe80
	// Params: [ Num(1) Size(0x8) ]
	void BP_SetCharacterOwner(struct ADFMCharacter* Char);

	// Object: Function DFMAbility.DFMAbilityBuffDetector.BP_SetAbilitOwner
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xc3ffda0
	// Params: [ Num(2) Size(0x10) ]
	void BP_SetAbilitOwner(int32_t skillEntityIndex, struct ADFMCharacter* Char);

	// Object: Function DFMAbility.DFMAbilityBuffDetector.BP_Resonance
	// Flags: [Event|Public|BlueprintCallable|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(0) Size(0x0) ]
	void BP_Resonance();

	// Object: Function DFMAbility.DFMAbilityBuffDetector.BP_OnStickyToTarget
	// Flags: [Event|Public|HasOutParms|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(1) Size(0x88) ]
	void BP_OnStickyToTarget(const struct FHitResult& ImpactResult);

	// Object: Function DFMAbility.DFMAbilityBuffDetector.BP_OnSetCharacterOwner
	// Flags: [Event|Public|BlueprintCallable|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(0) Size(0x0) ]
	void BP_OnSetCharacterOwner();

	// Object: Function DFMAbility.DFMAbilityBuffDetector.BP_LimitStop
	// Flags: [Event|Public|BlueprintCallable|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(0) Size(0x0) ]
	void BP_LimitStop();

	// Object: Function DFMAbility.DFMAbilityBuffDetector.BP_HPEmpty
	// Flags: [Event|Public|BlueprintCallable|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(0) Size(0x0) ]
	void BP_HPEmpty();

	// Object: Function DFMAbility.DFMAbilityBuffDetector.BP_GetSkillLogicType
	// Flags: [Native|Event|Public|BlueprintCallable|BlueprintEvent]
	// Offset: 0xc3ffd64
	// Params: [ Num(1) Size(0x1) ]
	ESkillLogicType BP_GetSkillLogicType();

	// Object: Function DFMAbility.DFMAbilityBuffDetector.BP_EnableTickBuff
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xc3ffc74
	// Params: [ Num(2) Size(0x2) ]
	void BP_EnableTickBuff(uint8_t Enable, uint8_t Apply);

	// Object: Function DFMAbility.DFMAbilityBuffDetector.BP_ClientStartDestroySelf
	// Flags: [Event|Public|BlueprintCallable|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(0) Size(0x0) ]
	void BP_ClientStartDestroySelf();

	// Object: Function DFMAbility.DFMAbilityBuffDetector.BP_AEffectBuff
	// Flags: [Event|Public|BlueprintCallable|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(2) Size(0x9) ]
	void BP_AEffectBuff(struct ADFMCharacter* DFMCharacter, uint8_t Add);
};

// Object: Class DFMAbility.DFMAbilityAddBufferToSelf
// Size: 0x9E8 (Inherited: 0x9E8)
struct ADFMAbilityAddBufferToSelf : ADFMAbilityBuffDetector
{
	DEFINE_UE_CLASS_HELPERS(ADFMAbilityAddBufferToSelf, "DFMAbilityAddBufferToSelf")
};

// Object: Class DFMAbility.DFMAbilityADSDefencer
// Size: 0x610 (Inherited: 0x588)
struct ADFMAbilityADSDefencer : ADFMAbilityLevelActor
{
	DEFINE_UE_CLASS_HELPERS(ADFMAbilityADSDefencer, "DFMAbilityADSDefencer")

	uint8_t Pad_0x588[0x18]; // 0x588(0x18)
	uint8_t bOnlyTeammate : 1; // 0x5A0(0x1), Mask(0x1)
	uint8_t BitPad_0x5A0_1 : 7; // 0x5A0(0x1)
	uint8_t Pad_0x5A1[0x7]; // 0x5A1(0x7)
	struct UGPAudioEventAsset* DeployAudio; // 0x5A8(0x8)
	struct UGPAudioEventAsset* DestroyAudio; // 0x5B0(0x8)
	struct UGPAudioEventAsset* LoopStartAudio; // 0x5B8(0x8)
	struct UGPAudioEventAsset* LoopStopAudio; // 0x5C0(0x8)
	struct FName FlashingEffectId; // 0x5C8(0x8)
	struct FName DestroyEffectId; // 0x5D0(0x8)
	float AutoDestroyTime; // 0x5D8(0x4)
	int32_t ConfigAvaliableCount; // 0x5DC(0x4)
	float CreateTime; // 0x5E0(0x4)
	uint8_t Pad_0x5E4[0x4]; // 0x5E4(0x4)
	struct UGameStaticAkComponent* GameAkComp; // 0x5E8(0x8)
	uint8_t Pad_0x5F0[0x8]; // 0x5F0(0x8)
	struct UFXResourceContainerComponent* FlashingEffect; // 0x5F8(0x8)
	uint8_t Pad_0x600[0x4]; // 0x600(0x4)
	float RebornRange; // 0x604(0x4)
	uint8_t Pad_0x608[0x8]; // 0x608(0x8)

	// Object: Function DFMAbility.DFMAbilityADSDefencer.OnSectorTransEnd
	// Flags: [Final|Native|Public]
	// Offset: 0xc3fbbdc
	// Params: [ Num(1) Size(0x4) ]
	void OnSectorTransEnd(int32_t ActiveID);

	// Object: Function DFMAbility.DFMAbilityADSDefencer.OnCharacterExpertIdChanged
	// Flags: [Final|Native|Public]
	// Offset: 0xc3fbb00
	// Params: [ Num(2) Size(0x8) ]
	void OnCharacterExpertIdChanged(int32_t OldExpertId, int32_t CurExpertId);

	// Object: Function DFMAbility.DFMAbilityADSDefencer.IsSameCamp
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xc3fba50
	// Params: [ Num(2) Size(0x9) ]
	uint8_t IsSameCamp(struct APlayerController* OwnerPlayer);

	// Object: Function DFMAbility.DFMAbilityADSDefencer.DelayDestroy
	// Flags: [Final|Native|Public]
	// Offset: 0xc3fb9ac
	// Params: [ Num(1) Size(0x4) ]
	void DelayDestroy(float Time);

	// Object: Function DFMAbility.DFMAbilityADSDefencer.CheckIsInsideWalkableSplines
	// Flags: [Final|Native|Public]
	// Offset: 0xc3fb998
	// Params: [ Num(0) Size(0x0) ]
	void CheckIsInsideWalkableSplines();
};

// Object: Class DFMAbility.DFMAbilityBaseBox
// Size: 0xAC8 (Inherited: 0x9E8)
struct ADFMAbilityBaseBox : ADFMAbilityBuffDetector
{
	DEFINE_UE_CLASS_HELPERS(ADFMAbilityBaseBox, "DFMAbilityBaseBox")

	uint8_t Pad_0x9E8[0xC]; // 0x9E8(0xC)
	float AddCD; // 0x9F4(0x4)
	float TickInterval; // 0x9F8(0x4)
	float RealCheckRadius; // 0x9FC(0x4)
	struct FName BoxMeshTag; // 0xA00(0x8)
	float StopBoxMeshTickTime; // 0xA08(0x4)
	uint8_t Pad_0xA0C[0x4]; // 0xA0C(0x4)
	struct TArray<struct FDFMAbilityBaseBoxCD> BoxCDList; // 0xA10(0x10)
	uint8_t Pad_0xA20[0xC]; // 0xA20(0xC)
	uint8_t bTickMoveInWater : 1; // 0xA2C(0x1), Mask(0x1)
	uint8_t BitPad_0xA2C_1 : 7; // 0xA2C(0x1)
	uint8_t Pad_0xA2D[0x3]; // 0xA2D(0x3)
	float WaterHeightBaseZero; // 0xA30(0x4)
	uint8_t Pad_0xA34[0x4]; // 0xA34(0x4)
	uint8_t RangeCheckCapsule[0x8]; // 0xA38(0x8)
	int32_t TeamOrCampID; // 0xA40(0x4)
	uint8_t Pad_0xA44[0x4]; // 0xA44(0x4)
	struct TMap<int64_t, float> AddTimeMap; // 0xA48(0x50)
	struct TArray<struct ADFMCharacter*> PendingCharacters; // 0xA98(0x10)
	struct USkeletalMeshComponent* BoxMesh; // 0xAA8(0x8)
	float BoxMeshTotalTickTime; // 0xAB0(0x4)
	uint8_t bHasStopMeshTick : 1; // 0xAB4(0x1), Mask(0x1)
	uint8_t BitPad_0xAB4_1 : 7; // 0xAB4(0x1)
	uint8_t bIsCheckStopSkeletalMesh : 1; // 0xAB5(0x1), Mask(0x1)
	uint8_t BitPad_0xAB5_1 : 7; // 0xAB5(0x1)
	uint8_t Pad_0xAB6[0x2]; // 0xAB6(0x2)
	float PlayTimeToStopSkeletonTick; // 0xAB8(0x4)
	uint8_t Pad_0xABC[0xC]; // 0xABC(0xC)

	// Object: Function DFMAbility.DFMAbilityBaseBox.UpdateBoxCDList
	// Flags: [Final|Native|Protected]
	// Offset: 0xc3ff340
	// Params: [ Num(2) Size(0xC) ]
	void UpdateBoxCDList(int64_t Uin, float CD);

	// Object: Function DFMAbility.DFMAbilityBaseBox.StopMeshTick
	// Flags: [Final|Native|Protected]
	// Offset: 0xc3ff32c
	// Params: [ Num(0) Size(0x0) ]
	void StopMeshTick();

	// Object: Function DFMAbility.DFMAbilityBaseBox.StickyToThrowAttachable
	// Flags: [Final|Native|Public|HasOutParms]
	// Offset: 0xc3ff258
	// Params: [ Num(2) Size(0x89) ]
	uint8_t StickyToThrowAttachable(const struct FHitResult& ImpactResult);

	// Object: Function DFMAbility.DFMAbilityBaseBox.OnRep_CD
	// Flags: [Native|Public]
	// Offset: 0xc3ff23c
	// Params: [ Num(0) Size(0x0) ]
	void OnRep_CD();

	// Object: Function DFMAbility.DFMAbilityBaseBox.OnCharacterExpertIdChanged
	// Flags: [Final|Native|Protected]
	// Offset: 0xc3ff160
	// Params: [ Num(2) Size(0x8) ]
	void OnCharacterExpertIdChanged(int32_t OldExpertId, int32_t CurExpertId);

	// Object: Function DFMAbility.DFMAbilityBaseBox.CheckSkeletalMeshTick
	// Flags: [Final|Native|Protected]
	// Offset: 0xc3ff14c
	// Params: [ Num(0) Size(0x0) ]
	void CheckSkeletalMeshTick();
};

// Object: Class DFMAbility.DFMAbilityAmmoBox
// Size: 0xB80 (Inherited: 0xAC8)
struct ADFMAbilityAmmoBox : ADFMAbilityBaseBox
{
	DEFINE_UE_CLASS_HELPERS(ADFMAbilityAmmoBox, "DFMAbilityAmmoBox")

	EWeaponAddAmmoType AddAmmoType; // 0xAC8(0x1)
	uint8_t Pad_0xAC9[0x3]; // 0xAC9(0x3)
	float AddAmmoValue; // 0xACC(0x4)
	struct TArray<ECharingSlot> CharingSlotList; // 0xAD0(0x10)
	struct TArray<uint8_t> Blacklist; // 0xAE0(0x10)
	uint8_t Pad_0xAF0[0x50]; // 0xAF0(0x50)
	struct FName BoxEdgeEffectID; // 0xB40(0x8)
	struct FName BoxEdgeEffectID_HD; // 0xB48(0x8)
	struct FName BoxEdgeEffectPosParamName; // 0xB50(0x8)
	struct FName AddAmmoUIAudioName; // 0xB58(0x8)
	struct FName LeftArmAnimName; // 0xB60(0x8)
	uint8_t Pad_0xB68[0x8]; // 0xB68(0x8)
	struct UGPSkeletalMeshComponent* GPSkeletalMeshComp; // 0xB70(0x8)
	ETacticalEquipmentMarkerType TacticalEquipmentMarker; // 0xB78(0x1)
	uint8_t Pad_0xB79[0x7]; // 0xB79(0x7)

	// Object: Function DFMAbility.DFMAbilityAmmoBox.SpecialAddAmmo
	// Flags: [Final|Native|Private]
	// Offset: 0xc3fbf84
	// Params: [ Num(2) Size(0xC) ]
	int32_t SpecialAddAmmo(struct ADFMCharacter* TargetChar);

	// Object: Function DFMAbility.DFMAbilityAmmoBox.GetWeaponList
	// Flags: [Final|Native|Private]
	// Offset: 0xc3fbea4
	// Params: [ Num(2) Size(0x18) ]
	struct TArray<struct TScriptInterface<IWeaponInterface>> GetWeaponList(struct AGPCharacterBase* GPCharBase);

	// Object: Function DFMAbility.DFMAbilityAmmoBox.AddAmmoToTargetWeapon
	// Flags: [Final|Native|Private|HasOutParms]
	// Offset: 0xc3fbd50
	// Params: [ Num(4) Size(0x18) ]
	int32_t AddAmmoToTargetWeapon(struct TScriptInterface<IWeaponInterface> IWeapon, EAddAmmoFailReason& FailReason, uint8_t bSimulate);

	// Object: Function DFMAbility.DFMAbilityAmmoBox.AddAmmo
	// Flags: [Final|Native|Private]
	// Offset: 0xc3fbca0
	// Params: [ Num(2) Size(0x9) ]
	uint8_t AddAmmo(struct ADFMCharacter* TargetChar);
};

// Object: Class DFMAbility.DFMAbilityPlacementBase
// Size: 0xA78 (Inherited: 0x9E8)
struct ADFMAbilityPlacementBase : ADFMAbilityBuffDetector
{
	DEFINE_UE_CLASS_HELPERS(ADFMAbilityPlacementBase, "DFMAbilityPlacementBase")

	uint8_t Pad_0x9E8[0x28]; // 0x9E8(0x28)
	struct UGPSkeletalMeshComponent* SkeletalMeshComponent; // 0xA10(0x8)
	ETacticalEquipmentMarkerType TacticalEquipmentMarker; // 0xA18(0x1)
	uint8_t Pad_0xA19[0x3]; // 0xA19(0x3)
	float DelayActiveTime; // 0xA1C(0x4)
	int32_t MaxCount; // 0xA20(0x4)
	uint8_t Pad_0xA24[0x4]; // 0xA24(0x4)
	struct UGPAudioEventAsset* DeployAudio; // 0xA28(0x8)
	struct UGPAudioEventAsset* ActiveAudio; // 0xA30(0x8)
	struct FName SqueezedOutEffect; // 0xA38(0x8)
	uint8_t bCanBeDestoryByEMP : 1; // 0xA40(0x1), Mask(0x1)
	uint8_t BitPad_0xA40_1 : 7; // 0xA40(0x1)
	EPlayerCombatDamageMakerWeaponType DamageMakerWeaponType; // 0xA41(0x1)
	uint8_t Pad_0xA42[0x6]; // 0xA42(0x6)
	struct UAnimationAsset* PlaceAnimation; // 0xA48(0x8)
	struct TArray<struct UAnimationAsset*> AnimPlayLst; // 0xA50(0x10)
	uint8_t bLoopAnim : 1; // 0xA60(0x1), Mask(0x1)
	uint8_t BitPad_0xA60_1 : 7; // 0xA60(0x1)
	uint8_t Pad_0xA61[0x3]; // 0xA61(0x3)
	float ExploreTraceWaterDistance; // 0xA64(0x4)
	uint8_t bEnableOverGroundCheck : 1; // 0xA68(0x1), Mask(0x1)
	uint8_t BitPad_0xA68_1 : 7; // 0xA68(0x1)
	uint8_t Pad_0xA69[0x3]; // 0xA69(0x3)
	int32_t CurAnimPlayIndex; // 0xA6C(0x4)
	uint8_t Pad_0xA70[0x7]; // 0xA70(0x7)
	uint8_t bActived : 1; // 0xA77(0x1), Mask(0x1)
	uint8_t BitPad_0xA77_1 : 7; // 0xA77(0x1)

	// Object: Function DFMAbility.DFMAbilityPlacementBase.OverGroundCheck
	// Flags: [Final|Native|Protected]
	// Offset: 0xc420c1c
	// Params: [ Num(0) Size(0x0) ]
	void OverGroundCheck();

	// Object: Function DFMAbility.DFMAbilityPlacementBase.OnRep_bActived
	// Flags: [Final|Native|Public]
	// Offset: 0x108aaf8c
	// Params: [ Num(0) Size(0x0) ]
	void OnRep_bActived();

	// Object: Function DFMAbility.DFMAbilityPlacementBase.OnCharacterExpertIdChanged
	// Flags: [Final|Native|Public]
	// Offset: 0xc420b40
	// Params: [ Num(2) Size(0x8) ]
	void OnCharacterExpertIdChanged(int32_t OldExpertId, int32_t CurExpertId);

	// Object: Function DFMAbility.DFMAbilityPlacementBase.NotifySqueezedOut
	// Flags: [Net|NetReliableNative|Event|NetMulticast|Protected]
	// Offset: 0xc420b24
	// Params: [ Num(0) Size(0x0) ]
	void NotifySqueezedOut();

	// Object: Function DFMAbility.DFMAbilityPlacementBase.ClientSetCoolDownTime
	// Flags: [Net|NetReliableNative|Event|NetMulticast|Protected]
	// Offset: 0x107264d8
	// Params: [ Num(1) Size(0x4) ]
	void ClientSetCoolDownTime(float CoolDownTime);

	// Object: Function DFMAbility.DFMAbilityPlacementBase.CanStick
	// Flags: [Native|Protected|HasOutParms|BlueprintCallable]
	// Offset: 0xc420a48
	// Params: [ Num(2) Size(0x89) ]
	uint8_t CanStick(const struct FHitResult& ImpactResult);
};

// Object: Class DFMAbility.DFMAbilityMineBase
// Size: 0xAF8 (Inherited: 0xA78)
struct ADFMAbilityMineBase : ADFMAbilityPlacementBase
{
	DEFINE_UE_CLASS_HELPERS(ADFMAbilityMineBase, "DFMAbilityMineBase")

	uint8_t Pad_0xA78[0x8]; // 0xA78(0x8)
	float PickUpDistance; // 0xA80(0x4)
	uint8_t Pad_0xA84[0x8]; // 0xA84(0x8)
	ESkillRecycleType SkillRecycleType; // 0xA8C(0x1)
	uint8_t Pad_0xA8D[0x3]; // 0xA8D(0x3)
	struct TSoftObjectPtr<UGPAudioEventAsset> TriggerExplosionAudio; // 0xA90(0x28)
	float DelayExplosionTime; // 0xAB8(0x4)
	float StayTimeAfterPawnDie; // 0xABC(0x4)
	uint8_t bAutoAttachToSurface : 1; // 0xAC0(0x1), Mask(0x1)
	uint8_t BitPad_0xAC0_1 : 7; // 0xAC0(0x1)
	uint8_t Pad_0xAC1[0x3]; // 0xAC1(0x3)
	float AttachToSurfaceDis; // 0xAC4(0x4)
	uint8_t Pad_0xAC8[0x4]; // 0xAC8(0x4)
	struct FVector ExplosionOffset; // 0xACC(0xC)
	uint8_t Pad_0xAD8[0x4]; // 0xAD8(0x4)
	struct TWeakObjectPtr<struct AActor> LastMaker; // 0xADC(0x8)
	struct TWeakObjectPtr<struct ADFMCharacter> Shooter; // 0xAE4(0x8)
	uint8_t Pad_0xAEC[0xC]; // 0xAEC(0xC)

	// Object: Function DFMAbility.DFMAbilityMineBase.OnPawnDie
	// Flags: [Final|Native|Public]
	// Offset: 0xc4206c4
	// Params: [ Num(1) Size(0x8) ]
	void OnPawnDie(struct AGPCharacterBase* CHARACTER);

	// Object: Function DFMAbility.DFMAbilityMineBase.NotifyTriggerExplosion
	// Flags: [Net|NetReliableNative|Event|NetMulticast|Public]
	// Offset: 0xc4206a8
	// Params: [ Num(0) Size(0x0) ]
	void NotifyTriggerExplosion();

	// Object: Function DFMAbility.DFMAbilityMineBase.GetAllMinesInWorld
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0xc420594
	// Params: [ Num(3) Size(0x20) ]
	static struct TArray<struct AActor*> GetAllMinesInWorld(struct UWorld* World, struct ADFMCharacter* OwnerCharacter);

	// Object: Function DFMAbility.DFMAbilityMineBase.GenerateExplodeCrater
	// Flags: [Native|Public]
	// Offset: 0xc4204e8
	// Params: [ Num(1) Size(0x8) ]
	void GenerateExplodeCrater(uint64_t ImpactFXId);

	// Object: Function DFMAbility.DFMAbilityMineBase.DoExplosion
	// Flags: [Native|Public]
	// Offset: 0xc4203f8
	// Params: [ Num(2) Size(0x10) ]
	void DoExplosion(uint8_t bHPEmpty, struct AActor* Maker);
};

// Object: Class DFMAbility.DFMAbilityAntiTankMine
// Size: 0x1010 (Inherited: 0xAF8)
struct ADFMAbilityAntiTankMine : ADFMAbilityMineBase
{
	DEFINE_UE_CLASS_HELPERS(ADFMAbilityAntiTankMine, "DFMAbilityAntiTankMine")

	struct USphereComponent* SphereComponent; // 0xAF8(0x8)
	float TriggerRadius; // 0xB00(0x4)
	int32_t AttackId; // 0xB04(0x4)
	struct FAbilityMineExplosionEffectConfig ExplosionEffectConfig; // 0xB08(0x278)
	int32_t DestorytAttackID; // 0xD80(0x4)
	uint8_t Pad_0xD84[0x4]; // 0xD84(0x4)
	struct FAbilityMineExplosionEffectConfig DestorytExplosionEffectConfig; // 0xD88(0x278)
	struct TArray<struct TWeakObjectPtr<struct ADFMVehicleBase>> EnemyOverlaps; // 0x1000(0x10)

	// Object: Function DFMAbility.DFMAbilityAntiTankMine.OnOverlapEnd
	// Flags: [Final|Native|Public]
	// Offset: 0xc3fc36c
	// Params: [ Num(4) Size(0x1C) ]
	void OnOverlapEnd(struct UPrimitiveComponent* OverlappedComp, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex);

	// Object: Function DFMAbility.DFMAbilityAntiTankMine.OnOverlapBegin
	// Flags: [Final|Native|Public|HasOutParms]
	// Offset: 0xc3fc174
	// Params: [ Num(6) Size(0xA8) ]
	void OnOverlapBegin(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, uint8_t bFromSweep, const struct FHitResult& SweepResult);

	// Object: Function DFMAbility.DFMAbilityAntiTankMine.NotifyDoExplosion
	// Flags: [Net|NetReliableNative|Event|NetMulticast|Protected]
	// Offset: 0xc3fc0c0
	// Params: [ Num(1) Size(0x1) ]
	void NotifyDoExplosion(uint8_t bHPEmpty);
};

// Object: Class DFMAbility.DFMAbilityAssault
// Size: 0xA40 (Inherited: 0x9E8)
struct ADFMAbilityAssault : ADFMAbilityBuffDetector
{
	DEFINE_UE_CLASS_HELPERS(ADFMAbilityAssault, "DFMAbilityAssault")

	uint8_t bApplyStagger : 1; // 0x9E4(0x1), Mask(0x1)
	struct TMap<int32_t, float> AbilityForbitData; // 0x9E8(0x50)
	float AlertMessageRange; // 0xA38(0x4)
	uint8_t ApplyTeammate : 1; // 0xA3C(0x1), Mask(0x1)
	uint8_t BitPad_0xA3C_2 : 6; // 0xA3C(0x1)
	uint8_t ApplySelt : 1; // 0xA3D(0x1), Mask(0x1)
	uint8_t BitPad_0xA3D_1 : 7; // 0xA3D(0x1)
	uint8_t Pad_0xA3E[0x2]; // 0xA3E(0x2)
};

// Object: Class DFMAbility.DFMAbilityDiffuseArea
// Size: 0xC78 (Inherited: 0x9E8)
struct ADFMAbilityDiffuseArea : ADFMAbilityBuffDetector
{
	DEFINE_UE_CLASS_HELPERS(ADFMAbilityDiffuseArea, "DFMAbilityDiffuseArea")

	uint8_t Pad_0x9E8[0x8]; // 0x9E8(0x8)
	uint8_t bOpenClientDebug : 1; // 0x9F0(0x1), Mask(0x1)
	uint8_t BitPad_0x9F0_1 : 7; // 0x9F0(0x1)
	uint8_t Pad_0x9F1[0x3]; // 0x9F1(0x3)
	int32_t ThreatId; // 0x9F4(0x4)
	int32_t ClientCellMerge; // 0x9F8(0x4)
	int32_t ClientCellMergeMobile; // 0x9FC(0x4)
	uint8_t bCenterCellForceSuccess : 1; // 0xA00(0x1), Mask(0x1)
	uint8_t BitPad_0xA00_1 : 7; // 0xA00(0x1)
	uint8_t bCheckCharacterAddLineTrace : 1; // 0xA01(0x1), Mask(0x1)
	uint8_t BitPad_0xA01_1 : 7; // 0xA01(0x1)
	uint8_t bCheckOtherAddLineTrace : 1; // 0xA02(0x1), Mask(0x1)
	uint8_t BitPad_0xA02_1 : 7; // 0xA02(0x1)
	uint8_t Pad_0xA03[0x1]; // 0xA03(0x1)
	float CellCheckDamageMaxHeight; // 0xA04(0x4)
	float CellCheckDamageHeightOffset; // 0xA08(0x4)
	ECollisionChannel CellTraceChannel; // 0xA0C(0x1)
	uint8_t Pad_0xA0D[0x3]; // 0xA0D(0x3)
	int32_t OneFrameCheckNum; // 0xA10(0x4)
	float CellCheckSize; // 0xA14(0x4)
	float CellSurfaceMaxAngle; // 0xA18(0x4)
	float CellMinOffset; // 0xA1C(0x4)
	float CellMaxOffset; // 0xA20(0x4)
	float CellStepOffset_SOL; // 0xA24(0x4)
	float CellStepOffset_BF; // 0xA28(0x4)
	float ChildCellLayerMinHeight; // 0xA2C(0x4)
	int32_t CellParentCheckNum; // 0xA30(0x4)
	float CellParentCheckDamageHeightOffset; // 0xA34(0x4)
	float CellTopCheckOffset; // 0xA38(0x4)
	int32_t ClientCellTickCreateNum; // 0xA3C(0x4)
	float ClientCellTickCheckRate; // 0xA40(0x4)
	float ClientCellTickCheckRate_Mobile; // 0xA44(0x4)
	uint8_t IsClientCellExtraCheck : 1; // 0xA48(0x1), Mask(0x1)
	uint8_t BitPad_0xA48_1 : 7; // 0xA48(0x1)
	uint8_t UseClientCheckPlaneNormal : 1; // 0xA49(0x1), Mask(0x1)
	uint8_t BitPad_0xA49_1 : 7; // 0xA49(0x1)
	uint8_t Pad_0xA4A[0x2]; // 0xA4A(0x2)
	float CheckPlaneNormalMinZ; // 0xA4C(0x4)
	int32_t ClientCellExtraCheckCenterWeight; // 0xA50(0x4)
	float ClientCellCheckOffset; // 0xA54(0x4)
	float ClientCellShowRandomOffset; // 0xA58(0x4)
	float ClientCellShowRandomAngleOffset; // 0xA5C(0x4)
	struct FName CheckWaterDataBoneName; // 0xA60(0x8)
	struct TArray<struct FSyncDiffuseAreaClientCell> AllActiveCells; // 0xA68(0x10)
	struct TMap<int32_t, int32_t> AllActiveCellsMap; // 0xA78(0x50)
	struct TMap<int32_t, struct FDiffuseAreaCell> AllCheckedCellsMap; // 0xAC8(0x50)
	struct TMap<int32_t, struct FDiffuseAreaClientCell> AllActiveClientCells; // 0xB18(0x50)
	uint8_t bIsClientStartDestroySelf : 1; // 0xB68(0x1), Mask(0x1)
	uint8_t BitPad_0xB68_1 : 7; // 0xB68(0x1)
	uint8_t Pad_0xB69[0x3]; // 0xB69(0x3)
	int32_t CurrentCheckClientCellIndex; // 0xB6C(0x4)
	struct FTimerHandle CheckClientCellTimerHandle; // 0xB70(0x8)
	float CellStepOffset; // 0xB78(0x4)
	int32_t MaxCellLen; // 0xB7C(0x4)
	float AllCellNum; // 0xB80(0x4)
	float MaxCellRadius; // 0xB84(0x4)
	uint8_t bIsAutoFitDecal : 1; // 0xB88(0x1), Mask(0x1)
	uint8_t BitPad_0xB88_1 : 7; // 0xB88(0x1)
	uint8_t Pad_0xB89[0x7]; // 0xB89(0x7)
	struct TArray<uint64_t> HitPlayerUidArray; // 0xB90(0x10)
	int32_t CheckCellSuccessNum; // 0xBA0(0x4)
	uint8_t bIsCheckingCell : 1; // 0xBA4(0x1), Mask(0x1)
	uint8_t BitPad_0xBA4_1 : 7; // 0xBA4(0x1)
	uint8_t Pad_0xBA5[0x3]; // 0xBA5(0x3)
	int32_t CheckCellNum; // 0xBA8(0x4)
	uint8_t Pad_0xBAC[0x4]; // 0xBAC(0x4)
	struct TArray<int32_t> CurrCheckCells; // 0xBB0(0x10)
	struct TArray<int32_t> NextCheckCells; // 0xBC0(0x10)
	uint8_t bIsClientStartCreateCell : 1; // 0xBD0(0x1), Mask(0x1)
	uint8_t BitPad_0xBD0_1 : 7; // 0xBD0(0x1)
	uint8_t bIsInitTraceParm : 1; // 0xBD1(0x1), Mask(0x1)
	uint8_t BitPad_0xBD1_1 : 7; // 0xBD1(0x1)
	uint8_t Pad_0xBD2[0x96]; // 0xBD2(0x96)
	uint8_t bIsShowMarker : 1; // 0xC68(0x1), Mask(0x1)
	uint8_t BitPad_0xC68_1 : 7; // 0xC68(0x1)
	uint8_t Pad_0xC69[0x3]; // 0xC69(0x3)
	struct FVector MarkerLocation; // 0xC6C(0xC)

	// Object: Function DFMAbility.DFMAbilityDiffuseArea.UnPackageCellInfo
	// Flags: [Final|Native|Static|Protected|HasOutParms]
	// Offset: 0xc40cae4
	// Params: [ Num(6) Size(0x15) ]
	static void UnPackageCellInfo(int32_t CellInfo, int32_t& X, int32_t& Y, int32_t& XOffset, int32_t& YOffset, EDiffuseAreaCellDiffuseType& DiffuseType);

	// Object: Function DFMAbility.DFMAbilityDiffuseArea.TryDeactivateClientCells
	// Flags: [Final|Native|Protected]
	// Offset: 0xc40cad0
	// Params: [ Num(0) Size(0x0) ]
	void TryDeactivateClientCells();

	// Object: Function DFMAbility.DFMAbilityDiffuseArea.TickClientStartCreateCell
	// Flags: [Final|Native|Protected]
	// Offset: 0xc40ca98
	// Params: [ Num(1) Size(0x1) ]
	uint8_t TickClientStartCreateCell();

	// Object: Function DFMAbility.DFMAbilityDiffuseArea.TickCheckCells
	// Flags: [Final|Native|Protected]
	// Offset: 0xc40ca84
	// Params: [ Num(0) Size(0x0) ]
	void TickCheckCells();

	// Object: Function DFMAbility.DFMAbilityDiffuseArea.SyncAllActiveCells
	// Flags: [Native|Protected]
	// Offset: 0xc40ca68
	// Params: [ Num(0) Size(0x0) ]
	void SyncAllActiveCells();

	// Object: Function DFMAbility.DFMAbilityDiffuseArea.StopCheckClientCellTimer
	// Flags: [Final|Native|Protected]
	// Offset: 0xc40ca54
	// Params: [ Num(0) Size(0x0) ]
	void StopCheckClientCellTimer();

	// Object: Function DFMAbility.DFMAbilityDiffuseArea.StartCheckClientCellTimer
	// Flags: [Final|Native|Protected]
	// Offset: 0xc40ca40
	// Params: [ Num(0) Size(0x0) ]
	void StartCheckClientCellTimer();

	// Object: Function DFMAbility.DFMAbilityDiffuseArea.StartCheckCells
	// Flags: [Final|Native|Protected]
	// Offset: 0xc40ca2c
	// Params: [ Num(0) Size(0x0) ]
	void StartCheckCells();

	// Object: Function DFMAbility.DFMAbilityDiffuseArea.SendProjectileThreatExplosion
	// Flags: [Final|Native|Private]
	// Offset: 0xc40ca18
	// Params: [ Num(0) Size(0x0) ]
	void SendProjectileThreatExplosion();

	// Object: Function DFMAbility.DFMAbilityDiffuseArea.SendProjectileThreatCreate
	// Flags: [Final|Native|Private]
	// Offset: 0xc40ca04
	// Params: [ Num(0) Size(0x0) ]
	void SendProjectileThreatCreate();

	// Object: Function DFMAbility.DFMAbilityDiffuseArea.RealDoCheckCell
	// Flags: [Final|Native|Protected|HasOutParms|HasDefaults]
	// Offset: 0xc40c838
	// Params: [ Num(6) Size(0xA4) ]
	float RealDoCheckCell(struct FHitResult& HitResult, uint8_t bIsChildCell, struct FVector CellCenter, float MinOffset, float MaxOffset);

	// Object: Function DFMAbility.DFMAbilityDiffuseArea.RandomClientCellOffset
	// Flags: [Final|Native|Protected|HasDefaults|Const]
	// Offset: 0xc40c800
	// Params: [ Num(1) Size(0xC) ]
	struct FVector RandomClientCellOffset();

	// Object: Function DFMAbility.DFMAbilityDiffuseArea.RandomClientCellAngleOffset
	// Flags: [Final|Native|Protected|Const]
	// Offset: 0xc40c7cc
	// Params: [ Num(1) Size(0x4) ]
	float RandomClientCellAngleOffset();

	// Object: Function DFMAbility.DFMAbilityDiffuseArea.PackageCellInfo
	// Flags: [Final|Native|Static|Protected]
	// Offset: 0xc40c63c
	// Params: [ Num(6) Size(0x18) ]
	static int32_t PackageCellInfo(int32_t X, int32_t Y, int32_t XOffset, int32_t YOffset, EDiffuseAreaCellDiffuseType DiffuseType);

	// Object: Function DFMAbility.DFMAbilityDiffuseArea.OnStartTickCheckCells
	// Flags: [Native|Protected]
	// Offset: 0xc40c620
	// Params: [ Num(0) Size(0x0) ]
	void OnStartTickCheckCells();

	// Object: Function DFMAbility.DFMAbilityDiffuseArea.OnRep_AllActiveCells
	// Flags: [Final|Native|Protected]
	// Offset: 0x10894a44
	// Params: [ Num(0) Size(0x0) ]
	void OnRep_AllActiveCells();

	// Object: Function DFMAbility.DFMAbilityDiffuseArea.OnEndTickCheckCells
	// Flags: [Native|Protected]
	// Offset: 0xc40c604
	// Params: [ Num(0) Size(0x0) ]
	void OnEndTickCheckCells();

	// Object: Function DFMAbility.DFMAbilityDiffuseArea.OnDeactivateAllClientCell
	// Flags: [Native|Protected|HasOutParms]
	// Offset: 0xc40c524
	// Params: [ Num(1) Size(0x30) ]
	void OnDeactivateAllClientCell(struct FDiffuseAreaClientCell& ClientCell);

	// Object: Function DFMAbility.DFMAbilityDiffuseArea.OnCreateClientCellEnd
	// Flags: [Native|Protected]
	// Offset: 0xc40c508
	// Params: [ Num(0) Size(0x0) ]
	void OnCreateClientCellEnd();

	// Object: Function DFMAbility.DFMAbilityDiffuseArea.OnCheckCellsEnd
	// Flags: [Native|Protected]
	// Offset: 0xc40c4ec
	// Params: [ Num(0) Size(0x0) ]
	void OnCheckCellsEnd();

	// Object: Function DFMAbility.DFMAbilityDiffuseArea.OnCellPassCheck
	// Flags: [Native|Protected|HasOutParms]
	// Offset: 0xc40c34c
	// Params: [ Num(3) Size(0xBC) ]
	void OnCellPassCheck(uint8_t bIsChildCell, struct FDiffuseAreaCell& Cell, const struct FHitResult& HitResult);

	// Object: Function DFMAbility.DFMAbilityDiffuseArea.IsOverlapCell
	// Flags: [Final|Native|Protected]
	// Offset: 0xc40c20c
	// Params: [ Num(4) Size(0xB) ]
	uint8_t IsOverlapCell(struct AActor* Actor, uint8_t bAddLineTrace, uint8_t bIsActorLocationCenter);

	// Object: Function DFMAbility.DFMAbilityDiffuseArea.IsNeedSpawnClientCell
	// Flags: [Native|Protected]
	// Offset: 0xc40c1cc
	// Params: [ Num(1) Size(0x1) ]
	uint8_t IsNeedSpawnClientCell();

	// Object: Function DFMAbility.DFMAbilityDiffuseArea.IsHitWater
	// Flags: [Final|Native|Protected|HasOutParms]
	// Offset: 0xc40c0f8
	// Params: [ Num(2) Size(0x89) ]
	uint8_t IsHitWater(const struct FHitResult& HitResult);

	// Object: Function DFMAbility.DFMAbilityDiffuseArea.IsCheckWaterData
	// Flags: [Native|Protected]
	// Offset: 0xc40c0b8
	// Params: [ Num(1) Size(0x1) ]
	uint8_t IsCheckWaterData();

	// Object: Function DFMAbility.DFMAbilityDiffuseArea.InitTraceParms
	// Flags: [Final|Native|Protected]
	// Offset: 0xc40c0a4
	// Params: [ Num(0) Size(0x0) ]
	void InitTraceParms();

	// Object: Function DFMAbility.DFMAbilityDiffuseArea.InitOwner
	// Flags: [Final|Native|Protected]
	// Offset: 0xc40c090
	// Params: [ Num(0) Size(0x0) ]
	void InitOwner();

	// Object: Function DFMAbility.DFMAbilityDiffuseArea.InitCheckInfo
	// Flags: [Final|Native|Protected]
	// Offset: 0xc40c07c
	// Params: [ Num(0) Size(0x0) ]
	void InitCheckInfo();

	// Object: Function DFMAbility.DFMAbilityDiffuseArea.InitCheckCellRange
	// Flags: [Final|Native|Protected]
	// Offset: 0xc40c068
	// Params: [ Num(0) Size(0x0) ]
	void InitCheckCellRange();

	// Object: Function DFMAbility.DFMAbilityDiffuseArea.GetSkillComponent
	// Flags: [Final|Native|Protected|Const]
	// Offset: 0xc40c034
	// Params: [ Num(1) Size(0x8) ]
	struct UGPSkillComponent* GetSkillComponent();

	// Object: Function DFMAbility.DFMAbilityDiffuseArea.GetMergeIndex
	// Flags: [Final|Native|Static|Protected]
	// Offset: 0xc40bf58
	// Params: [ Num(3) Size(0xC) ]
	static int32_t GetMergeIndex(int32_t Index, int32_t CellMergeNum);

	// Object: Function DFMAbility.DFMAbilityDiffuseArea.GetClientCellSize
	// Flags: [Final|Native|Protected|Const]
	// Offset: 0xc40bf24
	// Params: [ Num(1) Size(0x4) ]
	float GetClientCellSize();

	// Object: Function DFMAbility.DFMAbilityDiffuseArea.GetClientCellMergeNum
	// Flags: [Final|Native|Protected|Const]
	// Offset: 0xc40bef0
	// Params: [ Num(1) Size(0x4) ]
	int32_t GetClientCellMergeNum();

	// Object: Function DFMAbility.DFMAbilityDiffuseArea.GetClientCellIdx
	// Flags: [Final|Native|Protected|Const]
	// Offset: 0xc40be0c
	// Params: [ Num(3) Size(0xC) ]
	int32_t GetClientCellIdx(int32_t X, int32_t Y);

	// Object: Function DFMAbility.DFMAbilityDiffuseArea.GetClientCellCheckOffset
	// Flags: [Native|Protected]
	// Offset: 0xc40bdd0
	// Params: [ Num(1) Size(0x4) ]
	float GetClientCellCheckOffset();

	// Object: Function DFMAbility.DFMAbilityDiffuseArea.GetClientCellCenter
	// Flags: [Final|Native|Protected|HasDefaults|Const]
	// Offset: 0xc40bd20
	// Params: [ Num(2) Size(0x10) ]
	struct FVector GetClientCellCenter(int32_t CellIdx);

	// Object: Function DFMAbility.DFMAbilityDiffuseArea.GetCellRotator
	// Flags: [Final|Native|Protected|HasOutParms|HasDefaults|Const]
	// Offset: 0xc40bc10
	// Params: [ Num(3) Size(0x1C) ]
	struct FRotator GetCellRotator(const struct FVector& Normal, const float& BaseYaw);

	// Object: Function DFMAbility.DFMAbilityDiffuseArea.GetCellLocalCenter
	// Flags: [Final|Native|Protected|HasDefaults|Const]
	// Offset: 0xc40bb28
	// Params: [ Num(3) Size(0x14) ]
	struct FVector GetCellLocalCenter(int32_t X, int32_t Y);

	// Object: Function DFMAbility.DFMAbilityDiffuseArea.GetCellIdx
	// Flags: [Final|Native|Protected|Const]
	// Offset: 0xc40ba44
	// Params: [ Num(3) Size(0xC) ]
	int32_t GetCellIdx(int32_t X, int32_t Y);

	// Object: Function DFMAbility.DFMAbilityDiffuseArea.GetAreaType
	// Flags: [Native|Protected]
	// Offset: 0xc40ba08
	// Params: [ Num(1) Size(0x1) ]
	EDiffuseAreaType GetAreaType();

	// Object: Function DFMAbility.DFMAbilityDiffuseArea.DoStartCheckCells
	// Flags: [Final|Native|Protected]
	// Offset: 0xc40b878
	// Params: [ Num(5) Size(0x11) ]
	void DoStartCheckCells(int32_t X, int32_t Y, int32_t XOffset, int32_t YOffset, EDiffuseAreaCellDiffuseType DiffuseType);

	// Object: Function DFMAbility.DFMAbilityDiffuseArea.DoSpawnClientCell
	// Flags: [Native|Protected]
	// Offset: 0xc40b784
	// Params: [ Num(3) Size(0x9) ]
	uint8_t DoSpawnClientCell(int32_t CellIdx, float MaxHeight);

	// Object: Function DFMAbility.DFMAbilityDiffuseArea.DoSpawnCheck
	// Flags: [Final|Native|Protected|HasOutParms]
	// Offset: 0xc40b638
	// Params: [ Num(4) Size(0x91) ]
	uint8_t DoSpawnCheck(int32_t CellIdx, float MaxHeight, struct FHitResult& HitResult);

	// Object: Function DFMAbility.DFMAbilityDiffuseArea.DoLineTraceSingle_WaterData
	// Flags: [Final|Native|Protected|HasOutParms|HasDefaults]
	// Offset: 0xc40b4cc
	// Params: [ Num(4) Size(0xA1) ]
	uint8_t DoLineTraceSingle_WaterData(struct FHitResult& OutHit, const struct FVector& Start, const struct FVector& End);

	// Object: Function DFMAbility.DFMAbilityDiffuseArea.DoLineTraceSingle_LineTrace
	// Flags: [Final|Native|Protected|HasOutParms|HasDefaults]
	// Offset: 0xc40b360
	// Params: [ Num(4) Size(0xA1) ]
	uint8_t DoLineTraceSingle_LineTrace(struct FHitResult& OutHit, const struct FVector& Start, const struct FVector& End);

	// Object: Function DFMAbility.DFMAbilityDiffuseArea.DoLineTraceSingle
	// Flags: [Final|Native|Protected|HasOutParms|HasDefaults]
	// Offset: 0xc40b1a8
	// Params: [ Num(5) Size(0xA2) ]
	uint8_t DoLineTraceSingle(struct FHitResult& OutHit, const struct FVector& Start, const struct FVector& End, uint8_t bDebugLine);

	// Object: Function DFMAbility.DFMAbilityDiffuseArea.DoFitGroundCheck
	// Flags: [Final|Native|Protected|HasOutParms|HasDefaults]
	// Offset: 0xc40b098
	// Params: [ Num(3) Size(0x95) ]
	uint8_t DoFitGroundCheck(struct FVector BaseLocation, struct FHitResult& HitResult);

	// Object: Function DFMAbility.DFMAbilityDiffuseArea.DoExtraCheckClientCell
	// Flags: [Final|Native|Protected|HasOutParms|HasDefaults]
	// Offset: 0xc40af2c
	// Params: [ Num(4) Size(0xA1) ]
	uint8_t DoExtraCheckClientCell(struct FHitResult& OutHit, const struct FVector& Start, const struct FVector& End);

	// Object: Function DFMAbility.DFMAbilityDiffuseArea.DoCheckClientCellEffect
	// Flags: [Native|Protected|HasOutParms]
	// Offset: 0xc40ae40
	// Params: [ Num(2) Size(0x31) ]
	uint8_t DoCheckClientCellEffect(const struct FDiffuseAreaClientCell& ClientCell);

	// Object: Function DFMAbility.DFMAbilityDiffuseArea.DoCheckCell
	// Flags: [Final|Native|Protected]
	// Offset: 0xc40aca4
	// Params: [ Num(6) Size(0x12) ]
	uint8_t DoCheckCell(int32_t X, int32_t Y, int32_t XOffset, int32_t YOffset, EDiffuseAreaCellDiffuseType DiffuseType);

	// Object: Function DFMAbility.DFMAbilityDiffuseArea.DeactivateAllClientCells
	// Flags: [Native|Protected]
	// Offset: 0xc40ac88
	// Params: [ Num(0) Size(0x0) ]
	void DeactivateAllClientCells();

	// Object: Function DFMAbility.DFMAbilityDiffuseArea.DataFlowHitInfo
	// Flags: [Native|Protected]
	// Offset: 0xc40abdc
	// Params: [ Num(1) Size(0x8) ]
	void DataFlowHitInfo(struct ADFMCharacter* DFMCharacter);

	// Object: Function DFMAbility.DFMAbilityDiffuseArea.DataFlowAddThrowNumber
	// Flags: [Native|Protected]
	// Offset: 0xc40abc0
	// Params: [ Num(0) Size(0x0) ]
	void DataFlowAddThrowNumber();

	// Object: Function DFMAbility.DFMAbilityDiffuseArea.CountMarkerLocation
	// Flags: [Final|Native|Protected]
	// Offset: 0xc40abac
	// Params: [ Num(0) Size(0x0) ]
	void CountMarkerLocation();

	// Object: Function DFMAbility.DFMAbilityDiffuseArea.CountClientCheckPlaneNormal
	// Flags: [Final|Native|Protected|HasOutParms]
	// Offset: 0xc40aa30
	// Params: [ Num(4) Size(0xA1) ]
	uint8_t CountClientCheckPlaneNormal(struct FHitResult& OutHit, const uint8_t& bIsCenterHit, const struct TArray<struct FHitResult>& AllHitResults);

	// Object: Function DFMAbility.DFMAbilityDiffuseArea.CheckClientCellTimerTick
	// Flags: [Native|Protected]
	// Offset: 0xc40aa14
	// Params: [ Num(0) Size(0x0) ]
	void CheckClientCellTimerTick();

	// Object: Function DFMAbility.DFMAbilityDiffuseArea.CheckCenterCell
	// Flags: [Final|Native|Protected]
	// Offset: 0xc40aa00
	// Params: [ Num(0) Size(0x0) ]
	void CheckCenterCell();

	// Object: Function DFMAbility.DFMAbilityDiffuseArea.CheckActiveCellsNum
	// Flags: [Final|Native|Protected]
	// Offset: 0xc40a9ec
	// Params: [ Num(0) Size(0x0) ]
	void CheckActiveCellsNum();
};

// Object: Class DFMAbility.DFMAbilityBarbedWireArea
// Size: 0xF08 (Inherited: 0xC78)
struct ADFMAbilityBarbedWireArea : ADFMAbilityDiffuseArea
{
	DEFINE_UE_CLASS_HELPERS(ADFMAbilityBarbedWireArea, "DFMAbilityBarbedWireArea")

	uint8_t Pad_0xC78[0x18]; // 0xC78(0x18)
	struct TArray<struct FAbilityBarbedWireAreaData> AllGameRoleData; // 0xC90(0x10)
	float MinDestroyDistance; // 0xCA0(0x4)
	int32_t MaxDistance; // 0xCA4(0x4)
	float ClientCellMeshScale; // 0xCA8(0x4)
	float ClientCellMeshScaleMobile; // 0xCAC(0x4)
	float TakeDamageBoxSizeZ; // 0xCB0(0x4)
	float HitMoveDistance; // 0xCB4(0x4)
	struct TArray<int32_t> IgnoreCheckDistanceBuffIDs; // 0xCB8(0x10)
	struct FName MTPawnLocationParamName; // 0xCC8(0x8)
	struct FName MTPawnLeaveTimeParamName; // 0xCD0(0x8)
	float MTPawnLeaveTimeMaxValue; // 0xCD8(0x4)
	struct FRotator EffectBaseRotator; // 0xCDC(0xC)
	struct FName ExtinguishEffectName; // 0xCE8(0x8)
	struct FName AllExtinguishEffectName; // 0xCF0(0x8)
	struct FName LightingEffectName; // 0xCF8(0x8)
	float LightingEffectDeleteDelay; // 0xD00(0x4)
	float MeshScaleTime; // 0xD04(0x4)
	struct UCurveFloat* MeshScaleCurve; // 0xD08(0x8)
	EPerfGearQualityLevel MobileExplosionMinQualityLevel; // 0xD10(0x1)
	uint8_t Pad_0xD11[0x7]; // 0xD11(0x7)
	struct UGPAudioEventAsset* MobileExplosionSoundEvent; // 0xD18(0x8)
	struct UGPAudioEventAsset* MoveSoundEvent; // 0xD20(0x8)
	float MoveSoundDistance; // 0xD28(0x4)
	uint8_t Pad_0xD2C[0x4]; // 0xD2C(0x4)
	struct FAbilityBarbedWireAreaData CurrentData; // 0xD30(0x28)
	struct UShapeComponent* CenterHitBoxCache; // 0xD58(0x8)
	struct UShapeComponent* BaseHitBoxCache; // 0xD60(0x8)
	struct TMap<int32_t, struct UBoxComponent*> AllHitBoxesMap; // 0xD68(0x50)
	struct TMap<int32_t, float> AllHitBoxesHPMap; // 0xDB8(0x50)
	int32_t DestroyedCellNum; // 0xE08(0x4)
	float CenterHitBoxHP; // 0xE0C(0x4)
	float NextMulticastSpawnEffectTime; // 0xE10(0x4)
	float HideLightingEffectTime; // 0xE14(0x4)
	int32_t LightingEffectHandleIndex; // 0xE18(0x4)
	uint8_t Pad_0xE1C[0x4]; // 0xE1C(0x4)
	struct UFXResourceContainerComponent* LightingEffect; // 0xE20(0x8)
	struct UShapeComponent* ClientRangeCheckCache; // 0xE28(0x8)
	struct TArray<struct TWeakObjectPtr<struct AGPCharacter>> AllCheckCharacters; // 0xE30(0x10)
	struct TMap<uint32_t, struct FDFMAbilityBarbedWireTarget> LastTargetsLocationMap; // 0xE40(0x50)
	uint8_t bIsInExitHitStep : 1; // 0xE90(0x1), Mask(0x1)
	uint8_t BitPad_0xE90_1 : 7; // 0xE90(0x1)
	uint8_t Pad_0xE91[0x3]; // 0xE91(0x3)
	struct FVector LastLocation; // 0xE94(0xC)
	struct FVector MainTargetLocation; // 0xEA0(0xC)
	float MainTargetLeaveTime; // 0xEAC(0x4)
	int32_t CurrShowMeshNum; // 0xEB0(0x4)
	uint8_t Pad_0xEB4[0x4]; // 0xEB4(0x4)
	struct UPrimitiveComponent* CenterPrimitiveComponent; // 0xEB8(0x8)
	struct TArray<struct UStaticMeshComponent*> AllMeshComponents; // 0xEC0(0x10)
	struct UMaterialInstanceDynamic* MainMaterial; // 0xED0(0x8)
	struct UMaterialInstanceDynamic* SkinMainMaterial; // 0xED8(0x8)
	float CurrMeshScaleTime; // 0xEE0(0x4)
	float CurrMeshScale; // 0xEE4(0x4)
	ETacticalEquipmentMarkerType ChildMarkerType; // 0xEE8(0x1)
	uint8_t Pad_0xEE9[0x3]; // 0xEE9(0x3)
	float MarkerOffsetZ; // 0xEEC(0x4)
	uint8_t Pad_0xEF0[0x8]; // 0xEF0(0x8)
	struct FString MeshAttachKey; // 0xEF8(0x10)

	// Object: Function DFMAbility.DFMAbilityBarbedWireArea.UnregisterCharacterEvent
	// Flags: [Final|Native|Private]
	// Offset: 0xc3fd7c8
	// Params: [ Num(0) Size(0x0) ]
	void UnregisterCharacterEvent();

	// Object: Function DFMAbility.DFMAbilityBarbedWireArea.TrySpawnLightingEffect
	// Flags: [Final|Native|Private]
	// Offset: 0xc3fd7b4
	// Params: [ Num(0) Size(0x0) ]
	void TrySpawnLightingEffect();

	// Object: Function DFMAbility.DFMAbilityBarbedWireArea.TryCreateMainMaterial
	// Flags: [Final|Native|Private]
	// Offset: 0xc3fd7a0
	// Params: [ Num(0) Size(0x0) ]
	void TryCreateMainMaterial();

	// Object: Function DFMAbility.DFMAbilityBarbedWireArea.TryCheckFireArrowDamage
	// Flags: [Final|Native|Private|HasOutParms]
	// Offset: 0xc3fd6cc
	// Params: [ Num(2) Size(0x8A1) ]
	uint8_t TryCheckFireArrowDamage(const struct FDamageResultInfo& DamageResult);

	// Object: Function DFMAbility.DFMAbilityBarbedWireArea.TickMeshScale
	// Flags: [Final|Native|Private]
	// Offset: 0xc3fd6b8
	// Params: [ Num(0) Size(0x0) ]
	void TickMeshScale();

	// Object: Function DFMAbility.DFMAbilityBarbedWireArea.TickMeshComponent
	// Flags: [Final|Native|Private]
	// Offset: 0xc3fd614
	// Params: [ Num(1) Size(0x4) ]
	void TickMeshComponent(float DeltaSeconds);

	// Object: Function DFMAbility.DFMAbilityBarbedWireArea.TickMainTargetLocation
	// Flags: [Final|Native|Private]
	// Offset: 0xc3fd600
	// Params: [ Num(0) Size(0x0) ]
	void TickMainTargetLocation();

	// Object: Function DFMAbility.DFMAbilityBarbedWireArea.TickLightingEffect
	// Flags: [Final|Native|Private]
	// Offset: 0xc3fd55c
	// Params: [ Num(1) Size(0x4) ]
	void TickLightingEffect(float DeltaSeconds);

	// Object: Function DFMAbility.DFMAbilityBarbedWireArea.TickCheckLocation
	// Flags: [Final|Native|Private]
	// Offset: 0xc3fd548
	// Params: [ Num(0) Size(0x0) ]
	void TickCheckLocation();

	// Object: Function DFMAbility.DFMAbilityBarbedWireArea.TickCheckDestroyedCellNum
	// Flags: [Final|Native|Private]
	// Offset: 0xc3fd534
	// Params: [ Num(0) Size(0x0) ]
	void TickCheckDestroyedCellNum();

	// Object: Function DFMAbility.DFMAbilityBarbedWireArea.StartMeshScale
	// Flags: [Final|Native|Private]
	// Offset: 0xc3fd520
	// Params: [ Num(0) Size(0x0) ]
	void StartMeshScale();

	// Object: Function DFMAbility.DFMAbilityBarbedWireArea.SpawnHitBox
	// Flags: [Final|Native|Private|HasOutParms|HasDefaults]
	// Offset: 0xc3fd3d4
	// Params: [ Num(3) Size(0x1C) ]
	void SpawnHitBox(const int32_t& ClientIdx, const struct FVector& Location, const struct FRotator& Rotator);

	// Object: Function DFMAbility.DFMAbilityBarbedWireArea.SpawnAllHitBoxesClient
	// Flags: [Final|Native|Private]
	// Offset: 0xc3fd3c0
	// Params: [ Num(0) Size(0x0) ]
	void SpawnAllHitBoxesClient();

	// Object: Function DFMAbility.DFMAbilityBarbedWireArea.SpawnAllHitBoxes
	// Flags: [Final|Native|Private]
	// Offset: 0xc3fd3ac
	// Params: [ Num(0) Size(0x0) ]
	void SpawnAllHitBoxes();

	// Object: Function DFMAbility.DFMAbilityBarbedWireArea.SendMarkerManagerDelete
	// Flags: [Final|Native|Private]
	// Offset: 0xc3fd398
	// Params: [ Num(0) Size(0x0) ]
	void SendMarkerManagerDelete();

	// Object: Function DFMAbility.DFMAbilityBarbedWireArea.SendMarkerManagerCreate
	// Flags: [Final|Native|Private]
	// Offset: 0xc3fd384
	// Params: [ Num(0) Size(0x0) ]
	void SendMarkerManagerCreate();

	// Object: Function DFMAbility.DFMAbilityBarbedWireArea.RegisterCharacterEvent
	// Flags: [Final|Native|Private]
	// Offset: 0xc3fd370
	// Params: [ Num(0) Size(0x0) ]
	void RegisterCharacterEvent();

	// Object: Function DFMAbility.DFMAbilityBarbedWireArea.PlayMoveSound
	// Flags: [Final|Native|Private|Const]
	// Offset: 0xc3fd2cc
	// Params: [ Num(1) Size(0x8) ]
	void PlayMoveSound(struct AGPCharacter* Char);

	// Object: Function DFMAbility.DFMAbilityBarbedWireArea.PlayMobileExplosionSound
	// Flags: [Final|Native|Private]
	// Offset: 0xc3fd2b8
	// Params: [ Num(0) Size(0x0) ]
	void PlayMobileExplosionSound();

	// Object: Function DFMAbility.DFMAbilityBarbedWireArea.OnSkinMatLoaded
	// Flags: [Final|Native|Protected]
	// Offset: 0xc3fd2a4
	// Params: [ Num(0) Size(0x0) ]
	void OnSkinMatLoaded();

	// Object: Function DFMAbility.DFMAbilityBarbedWireArea.OnClientOverlapEnd
	// Flags: [Final|Native|Private]
	// Offset: 0xffdc19c
	// Params: [ Num(4) Size(0x1C) ]
	void OnClientOverlapEnd(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex);

	// Object: Function DFMAbility.DFMAbilityBarbedWireArea.OnClientOverlapBegin
	// Flags: [Final|Native|Private|HasOutParms]
	// Offset: 0x1018b11c
	// Params: [ Num(6) Size(0xA8) ]
	void OnClientOverlapBegin(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, uint8_t bFromSweep, const struct FHitResult& SweepResult);

	// Object: Function DFMAbility.DFMAbilityBarbedWireArea.OnCharacterDead
	// Flags: [Final|Native|Private]
	// Offset: 0xc3fd184
	// Params: [ Num(3) Size(0x18) ]
	void OnCharacterDead(struct AGPCharacterBase* CHARACTER, struct AController* Killer, struct UDamageType* DamageType);

	// Object: Function DFMAbility.DFMAbilityBarbedWireArea.MulticastSpawnLightingEffect
	// Flags: [Final|Net|NetReliableNative|Event|NetMulticast|Private]
	// Offset: 0xc3fd168
	// Params: [ Num(0) Size(0x0) ]
	void MulticastSpawnLightingEffect();

	// Object: Function DFMAbility.DFMAbilityBarbedWireArea.MulticastPlayExtinguishEffect
	// Flags: [Final|Net|NetReliableNative|Event|NetMulticast|Private]
	// Offset: 0x109d7f60
	// Params: [ Num(1) Size(0x4) ]
	void MulticastPlayExtinguishEffect(int32_t ClientIndex);

	// Object: Function DFMAbility.DFMAbilityBarbedWireArea.IsOverlapCell_Client
	// Flags: [Final|Native|Private]
	// Offset: 0xc3fd0b8
	// Params: [ Num(2) Size(0x9) ]
	uint8_t IsOverlapCell_Client(struct AActor* Actor);

	// Object: Function DFMAbility.DFMAbilityBarbedWireArea.IsInSOL
	// Flags: [Final|Native|Private|Const]
	// Offset: 0xc3fd080
	// Params: [ Num(1) Size(0x1) ]
	uint8_t IsInSOL();

	// Object: Function DFMAbility.DFMAbilityBarbedWireArea.InitMeshComponent
	// Flags: [Final|Native|Private]
	// Offset: 0xc3fd06c
	// Params: [ Num(0) Size(0x0) ]
	void InitMeshComponent();

	// Object: Function DFMAbility.DFMAbilityBarbedWireArea.InitGameRoleData
	// Flags: [Final|Native|Private]
	// Offset: 0xc3fd058
	// Params: [ Num(0) Size(0x0) ]
	void InitGameRoleData();

	// Object: Function DFMAbility.DFMAbilityBarbedWireArea.InitClientCheckBox
	// Flags: [Final|Native|Private]
	// Offset: 0xc3fd044
	// Params: [ Num(0) Size(0x0) ]
	void InitClientCheckBox();

	// Object: Function DFMAbility.DFMAbilityBarbedWireArea.InitBaseHitBoxCache
	// Flags: [Final|Native|Private]
	// Offset: 0xc3fd030
	// Params: [ Num(0) Size(0x0) ]
	void InitBaseHitBoxCache();

	// Object: Function DFMAbility.DFMAbilityBarbedWireArea.GetMeshComponent
	// Flags: [Final|Native|Private]
	// Offset: 0xc3fcffc
	// Params: [ Num(1) Size(0x8) ]
	struct UMeshComponent* GetMeshComponent();

	// Object: Function DFMAbility.DFMAbilityBarbedWireArea.GetHitComponentIndex
	// Flags: [Final|Native|Private]
	// Offset: 0xc3fcf50
	// Params: [ Num(2) Size(0xC) ]
	int32_t GetHitComponentIndex(struct UPrimitiveComponent* HitComponent);

	// Object: Function DFMAbility.DFMAbilityBarbedWireArea.GetEnemySkillComponent
	// Flags: [Final|Native|Private]
	// Offset: 0xc3fcea4
	// Params: [ Num(2) Size(0x10) ]
	struct UDFMSkillComponent* GetEnemySkillComponent(struct AGPCharacter* TargetChar);

	// Object: Function DFMAbility.DFMAbilityBarbedWireArea.FindHitComponentIndex
	// Flags: [Final|Native|Private|HasOutParms|HasDefaults]
	// Offset: 0xc3fcdec
	// Params: [ Num(2) Size(0x10) ]
	int32_t FindHitComponentIndex(const struct FVector& HitLocation);

	// Object: Function DFMAbility.DFMAbilityBarbedWireArea.FindGameRoleDataIndex
	// Flags: [Final|Native|Private|Const]
	// Offset: 0xc3fcdb8
	// Params: [ Num(1) Size(0x4) ]
	int32_t FindGameRoleDataIndex();

	// Object: Function DFMAbility.DFMAbilityBarbedWireArea.FinClientCheckBox
	// Flags: [Final|Native|Private]
	// Offset: 0xc3fcda4
	// Params: [ Num(0) Size(0x0) ]
	void FinClientCheckBox();

	// Object: Function DFMAbility.DFMAbilityBarbedWireArea.DoSpawnMeshComponent
	// Flags: [Final|Native|Private|HasOutParms]
	// Offset: 0xc3fcc54
	// Params: [ Num(3) Size(0x38) ]
	void DoSpawnMeshComponent(int32_t CellIdx, float MaxHeight, struct FDiffuseAreaClientCell& ClientCell);

	// Object: Function DFMAbility.DFMAbilityBarbedWireArea.DoHitExitTarget
	// Flags: [Final|Native|Private]
	// Offset: 0xc3fcb74
	// Params: [ Num(2) Size(0xC) ]
	void DoHitExitTarget(struct AGPCharacter* Char, int32_t HitNum);

	// Object: Function DFMAbility.DFMAbilityBarbedWireArea.DoDestroyClientCell
	// Flags: [Final|Native|Private]
	// Offset: 0xc3fcac4
	// Params: [ Num(2) Size(0x5) ]
	uint8_t DoDestroyClientCell(int32_t ClientIndex);

	// Object: Function DFMAbility.DFMAbilityBarbedWireArea.DeleteLightingEffect
	// Flags: [Final|Native|Private]
	// Offset: 0xc3fcab0
	// Params: [ Num(0) Size(0x0) ]
	void DeleteLightingEffect();

	// Object: Function DFMAbility.DFMAbilityBarbedWireArea.DamageTakerModifyIndex
	// Flags: [Final|Native|Private|HasOutParms]
	// Offset: 0xc3fc9dc
	// Params: [ Num(2) Size(0x8A1) ]
	uint8_t DamageTakerModifyIndex(struct FDamageResultInfo& DamageResult);

	// Object: Function DFMAbility.DFMAbilityBarbedWireArea.CleanTargetsCurrFlag
	// Flags: [Final|Native|Private]
	// Offset: 0xc3fc9c8
	// Params: [ Num(0) Size(0x0) ]
	void CleanTargetsCurrFlag();

	// Object: Function DFMAbility.DFMAbilityBarbedWireArea.CheckTargetsExit
	// Flags: [Final|Native|Private]
	// Offset: 0xc3fc9b4
	// Params: [ Num(0) Size(0x0) ]
	void CheckTargetsExit();

	// Object: Function DFMAbility.DFMAbilityBarbedWireArea.CheckOwnerCharacter
	// Flags: [Final|Native|Private]
	// Offset: 0xc3fc9a0
	// Params: [ Num(0) Size(0x0) ]
	void CheckOwnerCharacter();

	// Object: Function DFMAbility.DFMAbilityBarbedWireArea.CheckMaxDistance
	// Flags: [Final|Native|Private]
	// Offset: 0xc3fc98c
	// Params: [ Num(0) Size(0x0) ]
	void CheckMaxDistance();

	// Object: Function DFMAbility.DFMAbilityBarbedWireArea.CheckMaxCount
	// Flags: [Final|Native|Private]
	// Offset: 0xc3fc978
	// Params: [ Num(0) Size(0x0) ]
	void CheckMaxCount();

	// Object: Function DFMAbility.DFMAbilityBarbedWireArea.CheckFireArrowHasEnemy
	// Flags: [Final|Native|Private]
	// Offset: 0xc3fc8c8
	// Params: [ Num(2) Size(0x9) ]
	uint8_t CheckFireArrowHasEnemy(struct AGPCharacterBase* FireArrowOwner);

	// Object: Function DFMAbility.DFMAbilityBarbedWireArea.CheckEnemySkillComponentHitLimit
	// Flags: [Final|Native|Private|HasDefaults]
	// Offset: 0xc3fc7dc
	// Params: [ Num(3) Size(0x15) ]
	uint8_t CheckEnemySkillComponentHitLimit(struct AGPCharacter* TargetChar, struct FVector TargetLocation);

	// Object: Function DFMAbility.DFMAbilityBarbedWireArea.CheckDamageType
	// Flags: [Final|Native|Private|HasOutParms]
	// Offset: 0xc3fc708
	// Params: [ Num(2) Size(0x8A1) ]
	uint8_t CheckDamageType(const struct FDamageResultInfo& DamageResult);

	// Object: Function DFMAbility.DFMAbilityBarbedWireArea.CheckCharacterMoveDistance
	// Flags: [Final|Native|Private]
	// Offset: 0xc3fc614
	// Params: [ Num(3) Size(0xA) ]
	uint8_t CheckCharacterMoveDistance(struct AGPCharacter* Char, uint8_t bIsCheckHit);

	// Object: Function DFMAbility.DFMAbilityBarbedWireArea.CheckCenterMeshState
	// Flags: [Final|Native|Private]
	// Offset: 0xc3fc600
	// Params: [ Num(0) Size(0x0) ]
	void CheckCenterMeshState();

	// Object: Function DFMAbility.DFMAbilityBarbedWireArea.CancelInitSkin
	// Flags: [Final|Native|Protected]
	// Offset: 0xc3fc5ec
	// Params: [ Num(0) Size(0x0) ]
	void CancelInitSkin();
};

// Object: Class DFMAbility.DFMAbilityBeacon
// Size: 0x3580 (Inherited: 0x34E0)
struct ADFMAbilityBeacon : ADFMCharacter
{
	DEFINE_UE_CLASS_HELPERS(ADFMAbilityBeacon, "DFMAbilityBeacon")

	uint8_t Pad_0x34E0[0x14]; // 0x34E0(0x14)
	int32_t OwnerCampID; // 0x34F4(0x4)
	int32_t OwnerTeamID; // 0x34F8(0x4)
	uint8_t Pad_0x34FC[0x4]; // 0x34FC(0x4)
	uint64_t OwnerUin; // 0x3500(0x8)
	float LeftTime; // 0x3508(0x4)
	struct TWeakObjectPtr<struct UDFMAbilityInstance> OwnerAbility; // 0x350C(0x8)
	uint8_t Pad_0x3514[0x4]; // 0x3514(0x4)
	struct TMap<int64_t, struct FVector> EnemyLocationMap; // 0x3518(0x50)
	uint8_t Pad_0x3568[0x18]; // 0x3568(0x18)

	// Object: Function DFMAbility.DFMAbilityBeacon.IsEnemy
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0xc3ff5b8
	// Params: [ Num(1) Size(0x1) ]
	uint8_t IsEnemy();

	// Object: Function DFMAbility.DFMAbilityBeacon.IsDestroy
	// Flags: [Native|Event|Public|BlueprintEvent]
	// Offset: 0xc3ff578
	// Params: [ Num(1) Size(0x1) ]
	uint8_t IsDestroy();

	// Object: Function DFMAbility.DFMAbilityBeacon.BP_TakeDamage
	// Flags: [Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(2) Size(0x8A8) ]
	void BP_TakeDamage(uint8_t bIsServer, const struct FDamageResultInfo& DamageResult);
};

// Object: Class DFMAbility.DFMAbilityBlindingSmokeMine
// Size: 0xAC8 (Inherited: 0x9E8)
struct ADFMAbilityBlindingSmokeMine : ADFMAbilityBuffDetector
{
	DEFINE_UE_CLASS_HELPERS(ADFMAbilityBlindingSmokeMine, "DFMAbilityBlindingSmokeMine")

	uint8_t Pad_0x9E8[0x18]; // 0x9E8(0x18)
	struct FName OutLineEffectMeshTag; // 0xA00(0x8)
	int32_t ThreatId; // 0xA08(0x4)
	float DelayActiveTime; // 0xA0C(0x4)
	float DelayDestroyTime; // 0xA10(0x4)
	struct FName BlindingSmokeEffectID; // 0xA14(0x8)
	uint8_t Pad_0xA1C[0x4]; // 0xA1C(0x4)
	struct UGPAudioEventAsset* BlindingSmokePrepareAudio; // 0xA20(0x8)
	float VisualSmokeBoxLength; // 0xA28(0x4)
	uint8_t Pad_0xA2C[0x4]; // 0xA2C(0x4)
	struct USkeletalMeshComponent* OutLineEffectMesh; // 0xA30(0x8)
	uint8_t bHasActive : 1; // 0xA38(0x1), Mask(0x1)
	uint8_t BitPad_0xA38_1 : 7; // 0xA38(0x1)
	uint8_t Pad_0xA39[0xF]; // 0xA39(0xF)
	struct UShapeComponent* TriggerCache; // 0xA48(0x8)
	struct FTimerHandle ActiveTimerHandle; // 0xA50(0x8)
	struct FTimerHandle DelayDestroyTimerHandle; // 0xA58(0x8)
	struct UFXResourceContainerComponent* BlindingSmokeFXComp; // 0xA60(0x8)
	int32_t BlindingSmokeFXCompHandle; // 0xA68(0x4)
	uint8_t Pad_0xA6C[0x4]; // 0xA6C(0x4)
	struct TSet<uint64_t> AddScoreMap; // 0xA70(0x50)
	int32_t SmokeUid; // 0xAC0(0x4)
	uint8_t Pad_0xAC4[0x4]; // 0xAC4(0x4)

	// Object: Function DFMAbility.DFMAbilityBlindingSmokeMine.TryExtinguishIncendiary
	// Flags: [Final|Native|Public|Const]
	// Offset: 0xc3ffab8
	// Params: [ Num(0) Size(0x0) ]
	void TryExtinguishIncendiary();

	// Object: Function DFMAbility.DFMAbilityBlindingSmokeMine.TryActive
	// Flags: [Final|Native|Public]
	// Offset: 0xc3ffaa4
	// Params: [ Num(0) Size(0x0) ]
	void TryActive();

	// Object: Function DFMAbility.DFMAbilityBlindingSmokeMine.RemoveVisualSmokeBox
	// Flags: [Final|Native|Public]
	// Offset: 0xc3ffa90
	// Params: [ Num(0) Size(0x0) ]
	void RemoveVisualSmokeBox();

	// Object: Function DFMAbility.DFMAbilityBlindingSmokeMine.OnServerMatchEnd
	// Flags: [Native|Public]
	// Offset: 0xc3ff9a8
	// Params: [ Num(2) Size(0x10) ]
	void OnServerMatchEnd(EMatchOverReason EndReason, int64_t Uin);

	// Object: Function DFMAbility.DFMAbilityBlindingSmokeMine.OnRep_ActiveState
	// Flags: [Final|Native|Public]
	// Offset: 0xc3ff994
	// Params: [ Num(0) Size(0x0) ]
	void OnRep_ActiveState();

	// Object: Function DFMAbility.DFMAbilityBlindingSmokeMine.OnCharacterDead
	// Flags: [Native|Public]
	// Offset: 0xc3ff874
	// Params: [ Num(3) Size(0x18) ]
	void OnCharacterDead(struct AGPCharacterBase* CHARACTER, struct AController* Killer, struct UDamageType* DamageType);

	// Object: Function DFMAbility.DFMAbilityBlindingSmokeMine.OnCharacterBeKnockedDown
	// Flags: [Final|Native|Public|HasOutParms]
	// Offset: 0xc3ff7b0
	// Params: [ Num(1) Size(0x1A8) ]
	void OnCharacterBeKnockedDown(struct FKillInfo& KillInfo);

	// Object: Function DFMAbility.DFMAbilityBlindingSmokeMine.OnCharacterArmedForceChanged
	// Flags: [Native|Public]
	// Offset: 0xc3ff794
	// Params: [ Num(0) Size(0x0) ]
	void OnCharacterArmedForceChanged();

	// Object: Function DFMAbility.DFMAbilityBlindingSmokeMine.MulticastClientActiveSmoke
	// Flags: [Net|NetReliableNative|Event|NetMulticast|Public]
	// Offset: 0xc3ff778
	// Params: [ Num(0) Size(0x0) ]
	void MulticastClientActiveSmoke();

	// Object: Function DFMAbility.DFMAbilityBlindingSmokeMine.DestroyIt
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xc3ff764
	// Params: [ Num(0) Size(0x0) ]
	void DestroyIt();

	// Object: Function DFMAbility.DFMAbilityBlindingSmokeMine.BP_OnActive
	// Flags: [Event|Public|BlueprintCallable|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(0) Size(0x0) ]
	void BP_OnActive();

	// Object: Function DFMAbility.DFMAbilityBlindingSmokeMine.AddVisualSmokeBox
	// Flags: [Final|Native|Public]
	// Offset: 0xc3ff750
	// Params: [ Num(0) Size(0x0) ]
	void AddVisualSmokeBox();
};

// Object: Class DFMAbility.DFMAbilitySystemBase
// Size: 0x50 (Inherited: 0x28)
struct UDFMAbilitySystemBase : UObject
{
	DEFINE_UE_CLASS_HELPERS(UDFMAbilitySystemBase, "DFMAbilitySystemBase")

	EDFMAbilityLogicType LogicType; // 0x28(0x1)
	uint8_t Pad_0x29[0x7]; // 0x29(0x7)
	struct FTimerHandle TickHandle; // 0x30(0x8)
	uint8_t HasAuthority : 1; // 0x38(0x1), Mask(0x1)
	uint8_t BitPad_0x38_1 : 7; // 0x38(0x1)
	uint8_t Pad_0x39[0x3]; // 0x39(0x3)
	struct TWeakObjectPtr<struct ASkillSubsystem> SkillSystem; // 0x3C(0x8)
	struct TWeakObjectPtr<struct UDFMAbilityGameStateComponent> AbilityGSComponent; // 0x44(0x8)
	uint8_t Pad_0x4C[0x4]; // 0x4C(0x4)

	// Object: Function DFMAbility.DFMAbilitySystemBase.Update
	// Flags: [Native|Public]
	// Offset: 0xc42de2c
	// Params: [ Num(0) Size(0x0) ]
	void Update();

	// Object: Function DFMAbility.DFMAbilitySystemBase.SystemEndPlay
	// Flags: [Native|Public]
	// Offset: 0xc42de10
	// Params: [ Num(0) Size(0x0) ]
	void SystemEndPlay();

	// Object: Function DFMAbility.DFMAbilitySystemBase.Rollback
	// Flags: [Native|Public]
	// Offset: 0xc42dcf0
	// Params: [ Num(3) Size(0x10) ]
	void Rollback(struct UQA_AbilityLogicTask* QA, int32_t skillEntityIndex, int32_t LogicID);

	// Object: Function DFMAbility.DFMAbilitySystemBase.ReEnterSystemLogic
	// Flags: [Native|Public]
	// Offset: 0xc42db94
	// Params: [ Num(4) Size(0x14) ]
	void ReEnterSystemLogic(struct UQA_AbilityLogicTask* QA, int32_t skillEntityIndex, int32_t LogicID, float EnterTime);

	// Object: Function DFMAbility.DFMAbilitySystemBase.PreMatch
	// Flags: [Native|Public]
	// Offset: 0xc42db78
	// Params: [ Num(0) Size(0x0) ]
	void PreMatch();

	// Object: Function DFMAbility.DFMAbilitySystemBase.PostLeaveSystemLogic
	// Flags: [Native|Public]
	// Offset: 0xc42da94
	// Params: [ Num(2) Size(0x8) ]
	void PostLeaveSystemLogic(int32_t skillEntityIndex, int32_t LogicID);

	// Object: Function DFMAbility.DFMAbilitySystemBase.OnUnNormalEnd
	// Flags: [Native|Public]
	// Offset: 0xc42d9e8
	// Params: [ Num(1) Size(0x4) ]
	void OnUnNormalEnd(int32_t skillEntityIndex);

	// Object: Function DFMAbility.DFMAbilitySystemBase.OnRemoveSkillFromeCharacter
	// Flags: [Native|Public]
	// Offset: 0xc42d93c
	// Params: [ Num(1) Size(0x4) ]
	void OnRemoveSkillFromeCharacter(int32_t skillEntityIndex);

	// Object: Function DFMAbility.DFMAbilitySystemBase.OnNormalBreak
	// Flags: [Native|Public]
	// Offset: 0xc42d890
	// Params: [ Num(1) Size(0x4) ]
	void OnNormalBreak(int32_t skillEntityIndex);

	// Object: Function DFMAbility.DFMAbilitySystemBase.OnCharacterDie
	// Flags: [Native|Public]
	// Offset: 0xc42d7e4
	// Params: [ Num(1) Size(0x4) ]
	void OnCharacterDie(int32_t skillEntityIndex);

	// Object: Function DFMAbility.DFMAbilitySystemBase.LeaveSystemLogic
	// Flags: [Native|Public]
	// Offset: 0xc42d6c4
	// Params: [ Num(3) Size(0x10) ]
	void LeaveSystemLogic(struct UQA_AbilityLogicTask* QA, int32_t skillEntityIndex, int32_t LogicID);

	// Object: Function DFMAbility.DFMAbilitySystemBase.GetSkillSystem
	// Flags: [Final|Native|Public]
	// Offset: 0xc42d690
	// Params: [ Num(1) Size(0x8) ]
	struct ASkillSubsystem* GetSkillSystem();

	// Object: Function DFMAbility.DFMAbilitySystemBase.GetEntityMgr
	// Flags: [Final|Native|Public]
	// Offset: 0xc42d65c
	// Params: [ Num(1) Size(0x8) ]
	struct UAbilityEntityManager* GetEntityMgr();

	// Object: Function DFMAbility.DFMAbilitySystemBase.GetAbility
	// Flags: [Final|Native|Public]
	// Offset: 0xc42d5b0
	// Params: [ Num(2) Size(0x10) ]
	struct UDFMAbilityInstance* GetAbility(int32_t skillEntityIndex);

	// Object: Function DFMAbility.DFMAbilitySystemBase.EnterSystemLogic
	// Flags: [Native|Public]
	// Offset: 0xc42d454
	// Params: [ Num(4) Size(0x14) ]
	void EnterSystemLogic(struct UQA_AbilityLogicTask* QA, int32_t skillEntityIndex, int32_t LogicID, float EnterTime);

	// Object: Function DFMAbility.DFMAbilitySystemBase.EnableTick
	// Flags: [Final|Native|Public]
	// Offset: 0xc42d36c
	// Params: [ Num(2) Size(0x8) ]
	void EnableTick(uint8_t B, float InRate);

	// Object: Function DFMAbility.DFMAbilitySystemBase.DoTrigger
	// Flags: [Final|Native|Public]
	// Offset: 0xc42d214
	// Params: [ Num(4) Size(0x10) ]
	void DoTrigger(int32_t skillEntityIndex, int32_t LogicID, EAbilityTriggerType Type, int32_t Index);

	// Object: Function DFMAbility.DFMAbilitySystemBase.DisableTick
	// Flags: [Final|Native|Public]
	// Offset: 0xc42d200
	// Params: [ Num(0) Size(0x0) ]
	void DisableTick();

	// Object: Function DFMAbility.DFMAbilitySystemBase.CreateTypeView
	// Flags: [Native|Public]
	// Offset: 0xc42d1e4
	// Params: [ Num(0) Size(0x0) ]
	void CreateTypeView();
};

// Object: Class DFMAbility.DFMAbilitySingleSystem
// Size: 0x50 (Inherited: 0x50)
struct UDFMAbilitySingleSystem : UDFMAbilitySystemBase
{
	DEFINE_UE_CLASS_HELPERS(UDFMAbilitySingleSystem, "DFMAbilitySingleSystem")
};

// Object: Class DFMAbility.DFMAbilityBuffSystem
// Size: 0xB8 (Inherited: 0x50)
struct UDFMAbilityBuffSystem : UDFMAbilitySingleSystem
{
	DEFINE_UE_CLASS_HELPERS(UDFMAbilityBuffSystem, "DFMAbilityBuffSystem")

	struct TMap<struct UDFMCharacterBuffEntityBase*, int64_t> InstanceMap; // 0x50(0x50)
	struct TArray<uint64_t> PlayerKnockDownRecord; // 0xA0(0x10)
	uint8_t Pad_0xB0[0x8]; // 0xB0(0x8)

	// Object: Function DFMAbility.DFMAbilityBuffSystem.ProcessKillAward
	// Flags: [Final|Native|Public|HasOutParms]
	// Offset: 0xc40478c
	// Params: [ Num(5) Size(0x1C8) ]
	void ProcessKillAward(struct UDFMCharacterBuffEntityBase* BuffEntity, int32_t skillEntityIndex, struct UQA_AbilityBuff* BuffQA, const struct FKillInfo& NewKillInfo, struct UGPModularWeaponDesc* Desc);

	// Object: Function DFMAbility.DFMAbilityBuffSystem.OnPlayerKnockDown
	// Flags: [Final|Native|Public|HasOutParms]
	// Offset: 0xc4046c8
	// Params: [ Num(1) Size(0x1A8) ]
	void OnPlayerKnockDown(const struct FKillInfo& NewAddKillInfo);

	// Object: Function DFMAbility.DFMAbilityBuffSystem.OnKillAward
	// Flags: [Final|Native|Public|HasOutParms]
	// Offset: 0xc4045c0
	// Params: [ Num(2) Size(0x1B0) ]
	void OnKillAward(const struct FKillInfo& NewKillInfo, struct UGPModularWeaponDesc* Desc);

	// Object: Function DFMAbility.DFMAbilityBuffSystem.OnCharacterLiveStatusChanged
	// Flags: [Final|Native|Public]
	// Offset: 0xc4044a4
	// Params: [ Num(3) Size(0xA) ]
	void OnCharacterLiveStatusChanged(struct AGPCharacterBase* CharacterBase, ECharacterLiveStatus OldStatus, ECharacterLiveStatus NewStatus);

	// Object: Function DFMAbility.DFMAbilityBuffSystem.OnBuffRemove
	// Flags: [Final|Native|Public]
	// Offset: 0xc404400
	// Params: [ Num(1) Size(0x8) ]
	void OnBuffRemove(struct UDFMCharacterBuffEntityBase* BuffEntityBase);
};

// Object: Class DFMAbility.DFMAbilityBunker
// Size: 0x5E0 (Inherited: 0x588)
struct ADFMAbilityBunker : ADFMAbilityLevelActor
{
	DEFINE_UE_CLASS_HELPERS(ADFMAbilityBunker, "DFMAbilityBunker")

	struct ADFMAbilityBunkerPiece* BunkerChildrens[0xA]; // 0x588(0x50)
	uint8_t Pad_0x5D8[0x8]; // 0x5D8(0x8)
};

// Object: Class DFMAbility.DFMAbilityBunkerPiece
// Size: 0x3A0 (Inherited: 0x370)
struct ADFMAbilityBunkerPiece : AActor
{
	DEFINE_UE_CLASS_HELPERS(ADFMAbilityBunkerPiece, "DFMAbilityBunkerPiece")

	uint8_t Pad_0x370[0xC]; // 0x370(0xC)
	int32_t PieceIndex; // 0x37C(0x4)
	int32_t BrotherIndex; // 0x380(0x4)
	float Health; // 0x384(0x4)
	uint8_t Pad_0x388[0x18]; // 0x388(0x18)

	// Object: Function DFMAbility.DFMAbilityBunkerPiece.OnRep_Health
	// Flags: [Final|Native|Public]
	// Offset: 0xc404a00
	// Params: [ Num(0) Size(0x0) ]
	void OnRep_Health();

	// Object: Function DFMAbility.DFMAbilityBunkerPiece.BP_TakeDamage
	// Flags: [Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(2) Size(0x8A8) ]
	void BP_TakeDamage(uint8_t bIsServer, const struct FDamageResultInfo& DamageResult);
};

// Object: Class DFMAbility.DFMAbilityC204Interference
// Size: 0xAB0 (Inherited: 0x9E8)
struct ADFMAbilityC204Interference : ADFMAbilityBuffDetector
{
	DEFINE_UE_CLASS_HELPERS(ADFMAbilityC204Interference, "DFMAbilityC204Interference")

	uint8_t Pad_0x9E8[0x10]; // 0x9E8(0x10)
	struct USkeletalMeshComponent* SkeletalMesh; // 0x9F8(0x8)
	struct USceneComponent* MeshRoot; // 0xA00(0x8)
	float ChangeUpTime; // 0xA08(0x4)
	float DestroyTime; // 0xA0C(0x4)
	float DetectRange; // 0xA10(0x4)
	uint8_t bEnableMarkEnemy : 1; // 0xA14(0x1), Mask(0x1)
	uint8_t BitPad_0xA14_1 : 7; // 0xA14(0x1)
	uint8_t Pad_0xA15[0x3]; // 0xA15(0x3)
	float MarkTime; // 0xA18(0x4)
	int32_t ThreatId; // 0xA1C(0x4)
	struct FName ExplosionFXName; // 0xA20(0x8)
	struct FName RangeFXName; // 0xA28(0x8)
	struct FName ChangeUpFXName; // 0xA30(0x8)
	float TranslucencySortDistance; // 0xA38(0x4)
	uint8_t Pad_0xA3C[0x4]; // 0xA3C(0x4)
	struct TArray<int32_t> AddBuffList; // 0xA40(0x10)
	struct USphereComponent* DetectComp; // 0xA50(0x8)
	float CurrentTime; // 0xA58(0x4)
	uint8_t Pad_0xA5C[0x4]; // 0xA5C(0x4)
	struct FTimerHandle DestroyTimerHandle; // 0xA60(0x8)
	struct FAvatarFXOperateHandle ChangeUpFXHandle; // 0xA68(0x10)
	struct FAvatarFXOperateHandle ExplosionFXHandle; // 0xA78(0x10)
	struct FAvatarFXOperateHandle RangeFXHandle; // 0xA88(0x10)
	uint8_t bHasExplode : 1; // 0xA98(0x1), Mask(0x1)
	uint8_t BitPad_0xA98_1 : 7; // 0xA98(0x1)
	uint8_t Pad_0xA99[0x7]; // 0xA99(0x7)
	struct TArray<struct ADFMCharacter*> HasNotifyCharacterList; // 0xAA0(0x10)

	// Object: Function DFMAbility.DFMAbilityC204Interference.RegisterFXComp
	// Flags: [Final|Native|Protected]
	// Offset: 0xc404b1c
	// Params: [ Num(1) Size(0x8) ]
	void RegisterFXComp(struct UFXResourceContainerComponent* TargetComp);

	// Object: Function DFMAbility.DFMAbilityC204Interference.PlayExplodeFX
	// Flags: [Final|Native|Protected]
	// Offset: 0xc404b08
	// Params: [ Num(0) Size(0x0) ]
	void PlayExplodeFX();

	// Object: Function DFMAbility.DFMAbilityC204Interference.InitData
	// Flags: [Final|Native|Public]
	// Offset: 0xc404af4
	// Params: [ Num(0) Size(0x0) ]
	void InitData();

	// Object: Function DFMAbility.DFMAbilityC204Interference.DoExplode
	// Flags: [Final|Native|Protected]
	// Offset: 0xc404ae0
	// Params: [ Num(0) Size(0x0) ]
	void DoExplode();

	// Object: Function DFMAbility.DFMAbilityC204Interference.DetectEnemy
	// Flags: [Final|Native|Protected]
	// Offset: 0xc404a3c
	// Params: [ Num(1) Size(0x8) ]
	void DetectEnemy(struct ADFMCharacter* DFMChar);

	// Object: Function DFMAbility.DFMAbilityC204Interference.DestroyInterference
	// Flags: [Final|Native|Protected]
	// Offset: 0xc404a28
	// Params: [ Num(0) Size(0x0) ]
	void DestroyInterference();
};

// Object: Class DFMAbility.DFMAbilityCammyBulletDetector
// Size: 0x3B8 (Inherited: 0x378)
struct ADFMAbilityCammyBulletDetector : AGPAbilityCammyBulletDetector
{
	DEFINE_UE_CLASS_HELPERS(ADFMAbilityCammyBulletDetector, "DFMAbilityCammyBulletDetector")

	uint8_t Pad_0x378[0x4]; // 0x378(0x4)
	struct TWeakObjectPtr<struct ADFMCharacter> DetectorOwner; // 0x37C(0x8)
	uint8_t Pad_0x384[0x4]; // 0x384(0x4)
	struct TArray<struct FAbilityBuffData> BuffDatas; // 0x388(0x10)
	float BulletDetectRadius; // 0x398(0x4)
	float ExplosionDetectRadius; // 0x39C(0x4)
	struct USphereComponent* SphereComponent; // 0x3A0(0x8)
	uint64_t OwnerUin; // 0x3A8(0x8)
	float DetectRadius; // 0x3B0(0x4)
	uint8_t Pad_0x3B4[0x4]; // 0x3B4(0x4)

	// Object: Function DFMAbility.DFMAbilityCammyBulletDetector.UnInit
	// Flags: [Final|Native|Public]
	// Offset: 0xc404f54
	// Params: [ Num(0) Size(0x0) ]
	void UnInit();

	// Object: Function DFMAbility.DFMAbilityCammyBulletDetector.OnTakeWeaponDamage
	// Flags: [Final|Native|Public|HasOutParms]
	// Offset: 0xc404e94
	// Params: [ Num(1) Size(0x8A0) ]
	void OnTakeWeaponDamage(const struct FDamageResultInfo& DamageResultInfo);

	// Object: Function DFMAbility.DFMAbilityCammyBulletDetector.OnServerPostRadialDamage
	// Flags: [Final|Native|Public|HasOutParms]
	// Offset: 0xc404d38
	// Params: [ Num(2) Size(0x3F0) ]
	void OnServerPostRadialDamage(const struct FDamageSourceInfo& DamageSource, const struct TArray<struct FDamageResultInfo>& DamageResults);

	// Object: Function DFMAbility.DFMAbilityCammyBulletDetector.OnRepUin
	// Flags: [Final|Native|Public]
	// Offset: 0x10b62288
	// Params: [ Num(0) Size(0x0) ]
	void OnRepUin();

	// Object: Function DFMAbility.DFMAbilityCammyBulletDetector.OnRepDetectRadius
	// Flags: [Final|Native|Public]
	// Offset: 0x10a42ae8
	// Params: [ Num(0) Size(0x0) ]
	void OnRepDetectRadius();

	// Object: Function DFMAbility.DFMAbilityCammyBulletDetector.OnBeDamage
	// Flags: [Final|Native|Public|HasOutParms]
	// Offset: 0xc404c24
	// Params: [ Num(2) Size(0x8A1) ]
	void OnBeDamage(const struct FDamageResultInfo& DamageResult, ECharacterPart& HitPart);

	// Object: Function DFMAbility.DFMAbilityCammyBulletDetector.Init
	// Flags: [Final|Native|Public]
	// Offset: 0xc404c10
	// Params: [ Num(0) Size(0x0) ]
	void Init();
};

// Object: Class DFMAbility.DFMAbilityClaymoreMine
// Size: 0x1588 (Inherited: 0xAF8)
struct ADFMAbilityClaymoreMine : ADFMAbilityMineBase
{
	DEFINE_UE_CLASS_HELPERS(ADFMAbilityClaymoreMine, "DFMAbilityClaymoreMine")

	struct UParticleSystemComponent* ClayMoreLine; // 0xAF8(0x8)
	struct USphereComponent* SphereComponent; // 0xB00(0x8)
	float ClaymoreTriggerRadius; // 0xB08(0x4)
	float ClaymoreExplosionRadius; // 0xB0C(0x4)
	float ClaymoreTriggerAngle; // 0xB10(0x4)
	float ClaymoreExplosionAngle; // 0xB14(0x4)
	uint8_t Pad_0xB18[0x10]; // 0xB18(0x10)
	struct TArray<struct AActor*> Overlaps; // 0xB28(0x10)
	struct TArray<struct TWeakObjectPtr<struct AActor>> EnemyOverlaps; // 0xB38(0x10)
	struct TArray<float> TriggerAttackDis; // 0xB48(0x10)
	struct TArray<int32_t> TriggerAttackID; // 0xB58(0x10)
	struct FAbilityMineExplosionEffectConfig ExplosionEffectConfig; // 0xB68(0x278)
	int32_t DamageAttackID; // 0xDE0(0x4)
	int32_t DestorytAttackID; // 0xDE4(0x4)
	struct FAbilityMineExplosionEffectConfig DestorytExplosionEffectConfig; // 0xDE8(0x278)
	struct FName ClayMoreLineEffect; // 0x1060(0x8)
	float VelDesRad; // 0x1068(0x4)
	uint8_t bShowDebug : 1; // 0x106C(0x1), Mask(0x1)
	uint8_t BitPad_0x106C_1 : 7; // 0x106C(0x1)
	uint8_t Pad_0x106D[0x3]; // 0x106D(0x3)
	struct FAbilityMineExplosionEffectConfig LaserConfig0; // 0x1070(0x278)
	struct FAbilityMineExplosionEffectConfig LaserConfig1; // 0x12E8(0x278)
	struct FColor TeammateColor; // 0x1560(0x4)
	struct FColor EnemyColor; // 0x1564(0x4)
	float LineBlockScale; // 0x1568(0x4)
	uint8_t Pad_0x156C[0x4]; // 0x156C(0x4)
	struct UFXResourceContainerComponent* Laser0; // 0x1570(0x8)
	struct UFXResourceContainerComponent* Laser1; // 0x1578(0x8)
	uint8_t bDamageLogic2 : 1; // 0x1580(0x1), Mask(0x1)
	uint8_t BitPad_0x1580_1 : 7; // 0x1580(0x1)
	uint8_t Pad_0x1581[0x7]; // 0x1581(0x7)

	// Object: Function DFMAbility.DFMAbilityClaymoreMine.OnOverlapEnd
	// Flags: [Final|Native|Public]
	// Offset: 0xc40528c
	// Params: [ Num(4) Size(0x1C) ]
	void OnOverlapEnd(struct UPrimitiveComponent* OverlappedComp, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex);

	// Object: Function DFMAbility.DFMAbilityClaymoreMine.OnOverlapBegin
	// Flags: [Final|Native|Public|HasOutParms]
	// Offset: 0xc405094
	// Params: [ Num(6) Size(0xA8) ]
	void OnOverlapBegin(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, uint8_t bFromSweep, const struct FHitResult& SweepResult);

	// Object: Function DFMAbility.DFMAbilityClaymoreMine.NotifyDoExplosion
	// Flags: [Net|NetReliableNative|Event|NetMulticast|Public]
	// Offset: 0xc404fe0
	// Params: [ Num(1) Size(0x1) ]
	void NotifyDoExplosion(uint8_t bHPEmpty);
};

// Object: Class DFMAbility.DFMAbilityDamageTaker
// Size: 0x380 (Inherited: 0x370)
struct ADFMAbilityDamageTaker : AActor
{
	DEFINE_UE_CLASS_HELPERS(ADFMAbilityDamageTaker, "DFMAbilityDamageTaker")

	uint8_t Pad_0x370[0x10]; // 0x370(0x10)

	// Object: Function DFMAbility.DFMAbilityDamageTaker.IsDestroy
	// Flags: [Native|Event|Public|BlueprintEvent]
	// Offset: 0xc405540
	// Params: [ Num(1) Size(0x1) ]
	uint8_t IsDestroy();

	// Object: Function DFMAbility.DFMAbilityDamageTaker.BP_DetectorTakeDamage
	// Flags: [Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(2) Size(0x8A8) ]
	void BP_DetectorTakeDamage(uint8_t bIsServer, const struct FDamageResultInfo& DamageResult);
};

// Object: Class DFMAbility.DFMAbilityDataSystem
// Size: 0x278 (Inherited: 0x270)
struct UDFMAbilityDataSystem : UDFMSkillDataSystem
{
	DEFINE_UE_CLASS_HELPERS(UDFMAbilityDataSystem, "DFMAbilityDataSystem")

	uint8_t Pad_0x270[0x8]; // 0x270(0x8)
};

// Object: Class DFMAbility.DFMAbilityDefaultSystem
// Size: 0x1D8 (Inherited: 0x50)
struct UDFMAbilityDefaultSystem : UDFMAbilitySystemBase
{
	DEFINE_UE_CLASS_HELPERS(UDFMAbilityDefaultSystem, "DFMAbilityDefaultSystem")

	struct FAbilityEntityQuery AttachMeshQuery; // 0x50(0xC0)
	uint8_t Pad_0x110[0xC8]; // 0x110(0xC8)

	// Object: Function DFMAbility.DFMAbilityDefaultSystem.RecycleAttachMesh
	// Flags: [Final|Native|Public]
	// Offset: 0xc405808
	// Params: [ Num(2) Size(0xC) ]
	void RecycleAttachMesh(int32_t skillEntityIndex, struct FName MeshName);

	// Object: Function DFMAbility.DFMAbilityDefaultSystem.DestroyAttachMesh
	// Flags: [Final|Native|Public]
	// Offset: 0xc405728
	// Params: [ Num(2) Size(0xC) ]
	void DestroyAttachMesh(int32_t skillEntityIndex, struct FName MeshName);

	// Object: Function DFMAbility.DFMAbilityDefaultSystem.ClearAttachMeshData
	// Flags: [Final|Native|Public]
	// Offset: 0xc405684
	// Params: [ Num(1) Size(0x4) ]
	void ClearAttachMeshData(int32_t skillEntityIndex);

	// Object: Function DFMAbility.DFMAbilityDefaultSystem.ClearAbilitySkeletalMeshData
	// Flags: [Final|Native|Public|HasOutParms]
	// Offset: 0xc4055b8
	// Params: [ Num(1) Size(0x14) ]
	void ClearAbilitySkeletalMeshData(struct FAbilitySkeletalMeshData& AbilitySkeletalMeshData);
};

// Object: Class DFMAbility.DFMAbilityDeformableSmokeActor
// Size: 0x770 (Inherited: 0x768)
struct ADFMAbilityDeformableSmokeActor : ADFMSkillSmokeActor
{
	DEFINE_UE_CLASS_HELPERS(ADFMAbilityDeformableSmokeActor, "DFMAbilityDeformableSmokeActor")

	struct UExtinguishIncendiaryComponent* ExtinguishComp; // 0x768(0x8)

	// Object: Function DFMAbility.DFMAbilityDeformableSmokeActor.InitExtinguishComp
	// Flags: [Final|Native|Protected]
	// Offset: 0xc405b38
	// Params: [ Num(0) Size(0x0) ]
	void InitExtinguishComp();

	// Object: Function DFMAbility.DFMAbilityDeformableSmokeActor.CreateExtinguishArea
	// Flags: [Final|Native|Protected|HasOutParms]
	// Offset: 0xc405a68
	// Params: [ Num(1) Size(0x50) ]
	void CreateExtinguishArea(struct FGPDeformableSmokePathPoint& PointSmokeData);

	// Object: Function DFMAbility.DFMAbilityDeformableSmokeActor.ClearExtinguishArea
	// Flags: [Final|Native|Protected|HasOutParms]
	// Offset: 0xc405998
	// Params: [ Num(1) Size(0x50) ]
	void ClearExtinguishArea(struct FGPDeformableSmokePathPoint& PointSmokeData);
};

// Object: Class DFMAbility.DFMAbilityDeformableThermalSmokeActor
// Size: 0x790 (Inherited: 0x788)
struct ADFMAbilityDeformableThermalSmokeActor : ADFMVehicleThermalSmoke
{
	DEFINE_UE_CLASS_HELPERS(ADFMAbilityDeformableThermalSmokeActor, "DFMAbilityDeformableThermalSmokeActor")

	struct UExtinguishIncendiaryComponent* ExtinguishComp; // 0x788(0x8)

	// Object: Function DFMAbility.DFMAbilityDeformableThermalSmokeActor.InitExtinguishComp
	// Flags: [Final|Native|Protected]
	// Offset: 0xc405da8
	// Params: [ Num(0) Size(0x0) ]
	void InitExtinguishComp();

	// Object: Function DFMAbility.DFMAbilityDeformableThermalSmokeActor.CreateExtinguishArea
	// Flags: [Final|Native|Protected|HasOutParms]
	// Offset: 0xc405cd8
	// Params: [ Num(1) Size(0x50) ]
	void CreateExtinguishArea(struct FGPDeformableSmokePathPoint& PointSmokeData);

	// Object: Function DFMAbility.DFMAbilityDeformableThermalSmokeActor.ClearExtinguishArea
	// Flags: [Final|Native|Protected|HasOutParms]
	// Offset: 0xc405c08
	// Params: [ Num(1) Size(0x50) ]
	void ClearExtinguishArea(struct FGPDeformableSmokePathPoint& PointSmokeData);
};

// Object: Class DFMAbility.DFMAbilityDetector
// Size: 0xA80 (Inherited: 0x9E8)
struct ADFMAbilityDetector : ADFMAbilityBuffDetector
{
	DEFINE_UE_CLASS_HELPERS(ADFMAbilityDetector, "DFMAbilityDetector")

	uint8_t Pad_0x9E8[0x10]; // 0x9E8(0x10)
	struct TMap<int32_t, int32_t> DetectorHandlerMap; // 0x9F8(0x50)
	struct FName MapIconName; // 0xA48(0x8)
	uint8_t MarkerTeammate : 1; // 0xA50(0x1), Mask(0x1)
	uint8_t BitPad_0xA50_1 : 7; // 0xA50(0x1)
	uint8_t MarkerSelf : 1; // 0xA51(0x1), Mask(0x1)
	uint8_t BitPad_0xA51_1 : 7; // 0xA51(0x1)
	uint8_t Pad_0xA52[0x2]; // 0xA52(0x2)
	int32_t WeaponMarkableType; // 0xA54(0x4)
	struct FString WeaponMarkableName; // 0xA58(0x10)
	struct FName MarkerSocketName; // 0xA68(0x8)
	struct FVector MarkerOffset; // 0xA70(0xC)
	uint8_t Pad_0xA7C[0x4]; // 0xA7C(0x4)

	// Object: Function DFMAbility.DFMAbilityDetector.IsDestroy
	// Flags: [Native|Event|Public|BlueprintEvent]
	// Offset: 0xc406050
	// Params: [ Num(1) Size(0x1) ]
	uint8_t IsDestroy();

	// Object: Function DFMAbility.DFMAbilityDetector.BP_UpdateDetectorWorldRange
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xc405fac
	// Params: [ Num(1) Size(0x4) ]
	void BP_UpdateDetectorWorldRange(float WorldRange);

	// Object: Function DFMAbility.DFMAbilityDetector.BP_DetectorTakeDamage
	// Flags: [Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(2) Size(0x8A8) ]
	void BP_DetectorTakeDamage(uint8_t bIsServer, const struct FDamageResultInfo& DamageResult);

	// Object: Function DFMAbility.DFMAbilityDetector.BP_ClearMapIcon
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xc405f98
	// Params: [ Num(0) Size(0x0) ]
	void BP_ClearMapIcon();

	// Object: Function DFMAbility.DFMAbilityDetector.BP_AssaultShock
	// Flags: [Event|Public|BlueprintCallable|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(0) Size(0x0) ]
	void BP_AssaultShock();
};

// Object: Class DFMAbility.DFMAbilityDFMVehicle
// Size: 0x3670 (Inherited: 0x34E0)
struct ADFMAbilityDFMVehicle : ADFMCharacter
{
	DEFINE_UE_CLASS_HELPERS(ADFMAbilityDFMVehicle, "DFMAbilityDFMVehicle")

	uint8_t Pad_0x34E0[0x24]; // 0x34E0(0x24)
	struct TWeakObjectPtr<struct ADFMCharacter> OwnerOperator; // 0x3504(0x8)
	uint8_t Pad_0x350C[0x10]; // 0x350C(0x10)
	uint8_t bTeammatePickUp : 1; // 0x351C(0x1), Mask(0x1)
	uint8_t BitPad_0x351C_1 : 7; // 0x351C(0x1)
	uint8_t bEnermyPickUp : 1; // 0x351D(0x1), Mask(0x1)
	uint8_t BitPad_0x351D_1 : 7; // 0x351D(0x1)
	uint8_t Pad_0x351E[0x2]; // 0x351E(0x2)
	struct FName VehiclePanelName; // 0x3520(0x8)
	float MoveForwardValue; // 0x3528(0x4)
	float MoveRightValue; // 0x352C(0x4)
	float VehicleYaw; // 0x3530(0x4)
	float VehicleTurnRate; // 0x3534(0x4)
	float VehiclePitch; // 0x3538(0x4)
	float VehicleLookUpTurnRate; // 0x353C(0x4)
	uint8_t Pad_0x3540[0xC]; // 0x3540(0xC)
	uint8_t bOnOperate : 1; // 0x354C(0x1), Mask(0x1)
	uint8_t BitPad_0x354C_1 : 7; // 0x354C(0x1)
	uint8_t Pad_0x354D[0x8]; // 0x354D(0x8)
	uint8_t bVehicleDestroyed : 1; // 0x3555(0x1), Mask(0x1)
	uint8_t BitPad_0x3555_1 : 7; // 0x3555(0x1)
	uint8_t Pad_0x3556[0x2]; // 0x3556(0x2)
	float AssaultShockConfigTime; // 0x3558(0x4)
	int32_t VehicleBehaviorForbit; // 0x355C(0x4)
	float AssaultShockTime; // 0x3560(0x4)
	uint8_t BeAssaultShock : 1; // 0x3564(0x1), Mask(0x1)
	uint8_t BitPad_0x3564_1 : 7; // 0x3564(0x1)
	uint8_t Pad_0x3565[0x3]; // 0x3565(0x3)
	struct FName LowPowerHudPanelName; // 0x3568(0x8)
	int32_t OwnerCampID; // 0x3570(0x4)
	int32_t OwnerTeamID; // 0x3574(0x4)
	uint64_t OwnerUin; // 0x3578(0x8)
	struct TArray<struct UGameplayEffect*> DemageEffects; // 0x3580(0x10)
	struct TMap<int32_t, int32_t> DetectorHandlerMap; // 0x3590(0x50)
	struct FGameplayTagContainer InteractableTags; // 0x35E0(0x20)
	struct FGameplayTag VehicleInteractorTag; // 0x3600(0x8)
	struct FText InteractText; // 0x3608(0x18)
	struct FName LogicName; // 0x3620(0x8)
	int32_t WeaponMarkableType; // 0x3628(0x4)
	uint8_t Pad_0x362C[0x4]; // 0x362C(0x4)
	struct FString WeaponMarkableName; // 0x3630(0x10)
	struct FVector MarkerOffset; // 0x3640(0xC)
	struct FName MarkerSocket; // 0x364C(0x8)
	uint8_t Pad_0x3654[0xC]; // 0x3654(0xC)
	float OffOperateDelay; // 0x3660(0x4)
	float PhysicsDamageRate; // 0x3664(0x4)
	uint8_t Pad_0x3668[0x8]; // 0x3668(0x8)

	// Object: Function DFMAbility.DFMAbilityDFMVehicle.VehicleRecycle
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xc40a794
	// Params: [ Num(0) Size(0x0) ]
	void VehicleRecycle();

	// Object: Function DFMAbility.DFMAbilityDFMVehicle.VehicleMovementModeChanged
	// Flags: [Final|Native|Public]
	// Offset: 0xc40a678
	// Params: [ Num(3) Size(0xA) ]
	void VehicleMovementModeChanged(struct ACHARACTER* CHARACTER, EMovementMode PrevMovementMode, uint8_t PreviousCustomMode);

	// Object: Function DFMAbility.DFMAbilityDFMVehicle.VehicleEndOverlap
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xc40a59c
	// Params: [ Num(2) Size(0x10) ]
	void VehicleEndOverlap(struct AActor* InTrigger, struct AActor* OtherActor);

	// Object: Function DFMAbility.DFMAbilityDFMVehicle.VehicleDestroy
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xc40a588
	// Params: [ Num(0) Size(0x0) ]
	void VehicleDestroy();

	// Object: Function DFMAbility.DFMAbilityDFMVehicle.VehicleBeginOverlap
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xc40a4ac
	// Params: [ Num(2) Size(0x10) ]
	void VehicleBeginOverlap(struct AActor* InTrigger, struct AActor* OtherActor);

	// Object: Function DFMAbility.DFMAbilityDFMVehicle.UpdateMoveResult
	// Flags: [Net|NetReliableNative|Event|Public|NetServer|HasDefaults]
	// Offset: 0xc40a2c0
	// Params: [ Num(6) Size(0x2D) ]
	void UpdateMoveResult(struct FVector pos, struct FVector spos, struct FRotator Rot, float ForwardValue, float RightValue, uint8_t bJump);

	// Object: Function DFMAbility.DFMAbilityDFMVehicle.ShowLowPowerHud
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xc40a214
	// Params: [ Num(1) Size(0x1) ]
	void ShowLowPowerHud(uint8_t isShow);

	// Object: Function DFMAbility.DFMAbilityDFMVehicle.SetVehicleBehaviorForbit
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xc40a170
	// Params: [ Num(1) Size(0x1) ]
	void SetVehicleBehaviorForbit(EVehicleBehaviorForbit Behavior);

	// Object: Function DFMAbility.DFMAbilityDFMVehicle.SetOperaterAbilityOffControlledVehicle
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xc40a0cc
	// Params: [ Num(1) Size(0x8) ]
	void SetOperaterAbilityOffControlledVehicle(struct AActor* Actor);

	// Object: Function DFMAbility.DFMAbilityDFMVehicle.ServerStartBoom
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xc40a0b8
	// Params: [ Num(0) Size(0x0) ]
	void ServerStartBoom();

	// Object: Function DFMAbility.DFMAbilityDFMVehicle.ServerOffOperate
	// Flags: [Net|NetReliableNative|Event|Public|NetServer]
	// Offset: 0xc40a004
	// Params: [ Num(1) Size(0x1) ]
	void ServerOffOperate(uint8_t Delay);

	// Object: Function DFMAbility.DFMAbilityDFMVehicle.ServerGetVehicleItems
	// Flags: [Net|NetReliableNative|Event|Public|NetServer]
	// Offset: 0xc409fe8
	// Params: [ Num(0) Size(0x0) ]
	void ServerGetVehicleItems();

	// Object: Function DFMAbility.DFMAbilityDFMVehicle.OnRep_MovementEnable
	// Flags: [Final|Native|Public]
	// Offset: 0xc409fd4
	// Params: [ Num(0) Size(0x0) ]
	void OnRep_MovementEnable();

	// Object: Function DFMAbility.DFMAbilityDFMVehicle.NotifyServerStopLocalFocusDone
	// Flags: [Net|NetReliableNative|Event|Public|NetServer]
	// Offset: 0xc409fb8
	// Params: [ Num(0) Size(0x0) ]
	void NotifyServerStopLocalFocusDone();

	// Object: Function DFMAbility.DFMAbilityDFMVehicle.NotifyHealthTakeHit
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xc409fa4
	// Params: [ Num(0) Size(0x0) ]
	void NotifyHealthTakeHit();

	// Object: Function DFMAbility.DFMAbilityDFMVehicle.IsEnemy
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0xc409f6c
	// Params: [ Num(1) Size(0x1) ]
	uint8_t IsEnemy();

	// Object: Function DFMAbility.DFMAbilityDFMVehicle.IsDestroy
	// Flags: [Native|Event|Public|BlueprintEvent]
	// Offset: 0xc409f2c
	// Params: [ Num(1) Size(0x1) ]
	uint8_t IsDestroy();

	// Object: Function DFMAbility.DFMAbilityDFMVehicle.IsCharacterEnemy
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0xc409e7c
	// Params: [ Num(2) Size(0x9) ]
	uint8_t IsCharacterEnemy(struct AGPCharacter* GPChar);

	// Object: Function DFMAbility.DFMAbilityDFMVehicle.Is1P
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0xc409e44
	// Params: [ Num(1) Size(0x1) ]
	uint8_t Is1P();

	// Object: Function DFMAbility.DFMAbilityDFMVehicle.GetOperator
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0xc409e10
	// Params: [ Num(1) Size(0x8) ]
	struct ADFMCharacter* GetOperator();

	// Object: Function DFMAbility.DFMAbilityDFMVehicle.GetOff
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xc409d64
	// Params: [ Num(1) Size(0x1) ]
	void GetOff(uint8_t Delay);

	// Object: Function DFMAbility.DFMAbilityDFMVehicle.DoServerStartBoom
	// Flags: [Net|NetReliableNative|Event|Public|NetServer]
	// Offset: 0xc409d48
	// Params: [ Num(0) Size(0x0) ]
	void DoServerStartBoom();

	// Object: Function DFMAbility.DFMAbilityDFMVehicle.ClientUpdateMoveResult
	// Flags: [Net|NetReliableNative|Event|Public|HasDefaults|NetClient]
	// Offset: 0xc409ba8
	// Params: [ Num(5) Size(0x21) ]
	void ClientUpdateMoveResult(struct FVector pos, struct FRotator Rot, float ForwardValue, float RightValue, uint8_t bJump);

	// Object: Function DFMAbility.DFMAbilityDFMVehicle.ClientSetEngineVehicleIngore
	// Flags: [Net|NetReliableNative|Event|Public|NetClient]
	// Offset: 0xc409ab8
	// Params: [ Num(2) Size(0x9) ]
	void ClientSetEngineVehicleIngore(struct ADFMCharacter* Char, uint8_t On);

	// Object: Function DFMAbility.DFMAbilityDFMVehicle.CheckVehicleBehaviorForbit
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xc409a08
	// Params: [ Num(2) Size(0x2) ]
	uint8_t CheckVehicleBehaviorForbit(EVehicleBehaviorForbit Behavior);

	// Object: Function DFMAbility.DFMAbilityDFMVehicle.CanMove
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0xc4099d0
	// Params: [ Num(1) Size(0x1) ]
	uint8_t CanMove();

	// Object: Function DFMAbility.DFMAbilityDFMVehicle.BroadCastEnginVehicleLowPowerToGetOff
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xc4099bc
	// Params: [ Num(0) Size(0x0) ]
	void BroadCastEnginVehicleLowPowerToGetOff();

	// Object: Function DFMAbility.DFMAbilityDFMVehicle.BroadCastEnginVehicleDestroyToHud
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xc4099a8
	// Params: [ Num(0) Size(0x0) ]
	void BroadCastEnginVehicleDestroyToHud();

	// Object: Function DFMAbility.DFMAbilityDFMVehicle.BroadCastAbilityVehicleDestroy
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xc409904
	// Params: [ Num(1) Size(0x1) ]
	void BroadCastAbilityVehicleDestroy(EAbilityVehicleDestroyReason Reason);

	// Object: Function DFMAbility.DFMAbilityDFMVehicle.BP_VehicleTakeDamage
	// Flags: [Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(2) Size(0x8A8) ]
	void BP_VehicleTakeDamage(uint8_t bIsServer, const struct FDamageResultInfo& DamageResult);

	// Object: Function DFMAbility.DFMAbilityDFMVehicle.BP_TurnLookUpAtRate
	// Flags: [Event|Public|BlueprintCallable|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(1) Size(0x4) ]
	void BP_TurnLookUpAtRate(float Rate);

	// Object: Function DFMAbility.DFMAbilityDFMVehicle.BP_StartBoom
	// Flags: [Event|Public|BlueprintCallable|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(0) Size(0x0) ]
	void BP_StartBoom();

	// Object: Function DFMAbility.DFMAbilityDFMVehicle.BP_OwnerAssaultShock
	// Flags: [Event|Public|BlueprintCallable|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(0) Size(0x0) ]
	void BP_OwnerAssaultShock();

	// Object: Function DFMAbility.DFMAbilityDFMVehicle.BP_OnOperateDie
	// Flags: [Event|Public|BlueprintCallable|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(0) Size(0x0) ]
	void BP_OnOperateDie();

	// Object: Function DFMAbility.DFMAbilityDFMVehicle.BP_OnOperate
	// Flags: [Event|Public|BlueprintCallable|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(1) Size(0x1) ]
	void BP_OnOperate(uint8_t On);

	// Object: Function DFMAbility.DFMAbilityDFMVehicle.BP_MoveRight
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xc409860
	// Params: [ Num(1) Size(0x4) ]
	void BP_MoveRight(int32_t Value);

	// Object: Function DFMAbility.DFMAbilityDFMVehicle.BP_MoveForward
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xc4097bc
	// Params: [ Num(1) Size(0x4) ]
	void BP_MoveForward(int32_t Value);

	// Object: Function DFMAbility.DFMAbilityDFMVehicle.BP_Jump
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xc4097a8
	// Params: [ Num(0) Size(0x0) ]
	void BP_Jump();

	// Object: Function DFMAbility.DFMAbilityDFMVehicle.BP_GetVehicleItems
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xc409794
	// Params: [ Num(0) Size(0x0) ]
	void BP_GetVehicleItems();

	// Object: Function DFMAbility.DFMAbilityDFMVehicle.BP_GetPowerPercent
	// Flags: [Event|Public|BlueprintCallable|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(1) Size(0x4) ]
	float BP_GetPowerPercent();

	// Object: Function DFMAbility.DFMAbilityDFMVehicle.BP_GetMarkableHealthPercent
	// Flags: [Native|Event|Public|BlueprintCallable|BlueprintEvent]
	// Offset: 0xc409758
	// Params: [ Num(1) Size(0x4) ]
	float BP_GetMarkableHealthPercent();

	// Object: Function DFMAbility.DFMAbilityDFMVehicle.BP_AssaultShock
	// Flags: [Event|Public|BlueprintCallable|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(0) Size(0x0) ]
	void BP_AssaultShock();
};

// Object: Class DFMAbility.DFMAbilityDoorDisabler
// Size: 0xA00 (Inherited: 0x9E8)
struct ADFMAbilityDoorDisabler : ADFMAbilityBuffDetector
{
	DEFINE_UE_CLASS_HELPERS(ADFMAbilityDoorDisabler, "DFMAbilityDoorDisabler")

	struct FGameplayTag KickIceleTag; // 0x9E4(0x8)
	float KickIceDistance; // 0x9EC(0x4)
	int32_t KickSkillID; // 0x9F0(0x4)
	struct AInteractorBaseProxy* CachedDoor; // 0x9F8(0x8)
};

// Object: Class DFMAbility.DFMAbilityDun
// Size: 0x380 (Inherited: 0x370)
struct ADFMAbilityDun : AActor
{
	DEFINE_UE_CLASS_HELPERS(ADFMAbilityDun, "DFMAbilityDun")

	uint8_t bDisableWhenSprint : 1; // 0x370(0x1), Mask(0x1)
	uint8_t BitPad_0x370_1 : 7; // 0x370(0x1)
	uint8_t Pad_0x371[0x3]; // 0x371(0x3)
	struct TWeakObjectPtr<struct AGPCharacter> OwnerChar; // 0x374(0x8)
	uint8_t Pad_0x37C[0x4]; // 0x37C(0x4)

	// Object: Function DFMAbility.DFMAbilityDun.OnSprintStateChange
	// Flags: [Final|Native|Public]
	// Offset: 0xc40ed68
	// Params: [ Num(1) Size(0x1) ]
	void OnSprintStateChange(uint8_t bCurSprintState);

	// Object: Function DFMAbility.DFMAbilityDun.FireProjectile
	// Flags: [Event|Public|BlueprintCallable|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(1) Size(0x8) ]
	void FireProjectile(struct UDFMAbilityInstance* Instance);
};

// Object: Class DFMAbility.DFMAbilityElectricShockBomb
// Size: 0xE80 (Inherited: 0xA78)
struct ADFMAbilityElectricShockBomb : ADFMAbilityPlacementBase
{
	DEFINE_UE_CLASS_HELPERS(ADFMAbilityElectricShockBomb, "DFMAbilityElectricShockBomb")

	uint8_t Pad_0xA78[0x10]; // 0xA78(0x10)
	struct UCapsuleComponent* RootComp; // 0xA88(0x8)
	struct UBoxComponent* ESBoxComponent; // 0xA90(0x8)
	struct USphereComponent* ESSphereComponent; // 0xA98(0x8)
	struct UBoxComponent* ESBoxComponentUnderWater; // 0xAA0(0x8)
	struct UGPAudioEventAsset* HitCharacterAudio; // 0xAA8(0x8)
	struct UGPAudioEventAsset* HitGroundAudio; // 0xAB0(0x8)
	struct UGPAudioEventAsset* DrillStartAudio; // 0xAB8(0x8)
	struct UGPAudioEventAsset* DrillStopAudio; // 0xAC0(0x8)
	struct UGPAudioEventAsset* ExpandAudio; // 0xAC8(0x8)
	struct FAbilityEffectConfig BloomEffectConf; // 0xAD0(0x70)
	struct FAbilityEffectConfig DrillEffectConf; // 0xB40(0x70)
	struct FAbilityEffectConfig DrillOnCharEffectConf; // 0xBB0(0x70)
	struct FAbilityEffectConfig DrillOutEffectConf; // 0xC20(0x70)
	struct FAbilityEffectConfig ShockEffectConf; // 0xC90(0x70)
	struct FAbilityEffectConfig HitEffectConf; // 0xD00(0x70)
	struct FAbilityEffectConfig WarningEffectConf; // 0xD70(0x70)
	uint64_t ImpactFXId; // 0xDE0(0x8)
	struct TArray<struct FAbilityBuffData> ElectricShockBuffs; // 0xDE8(0x10)
	float MaxThickness; // 0xDF8(0x4)
	float DelayShockTime; // 0xDFC(0x4)
	float ShockDeltaTime; // 0xE00(0x4)
	float ChassisAdjust; // 0xE04(0x4)
	struct TArray<struct UObject*> BlockCheckIgnoreClass; // 0xE08(0x10)
	int32_t ThreatId; // 0xE18(0x4)
	struct FName ShockVoice; // 0xE1C(0x8)
	uint8_t Pad_0xE24[0x4]; // 0xE24(0x4)
	struct FTimerHandle ShockTimer; // 0xE28(0x8)
	struct UGPAbilityEffectProxy* BloomEffect; // 0xE30(0x8)
	struct UGPAbilityEffectProxy* DrillEffect; // 0xE38(0x8)
	struct UGPAbilityEffectProxy* DrillOnCharEffect; // 0xE40(0x8)
	struct UGPAbilityEffectProxy* DrillOutEffect; // 0xE48(0x8)
	struct UGPAbilityEffectProxy* ShockEffect; // 0xE50(0x8)
	struct UGPAbilityEffectProxy* HitEffect; // 0xE58(0x8)
	struct UGPAbilityEffectProxy* WarningEffect; // 0xE60(0x8)
	uint8_t bDrilled : 1; // 0xE68(0x1), Mask(0x1)
	uint8_t BitPad_0xE68_1 : 7; // 0xE68(0x1)
	uint8_t Pad_0xE69[0x13]; // 0xE69(0x13)
	uint8_t bStickInfoRecived : 1; // 0xE7C(0x1), Mask(0x1)
	uint8_t BitPad_0xE7C_1 : 7; // 0xE7C(0x1)
	uint8_t Pad_0xE7D[0x3]; // 0xE7D(0x3)

	// Object: Function DFMAbility.DFMAbilityElectricShockBomb.StartShock
	// Flags: [Final|Native|Public]
	// Offset: 0xc40f0bc
	// Params: [ Num(0) Size(0x0) ]
	void StartShock();

	// Object: Function DFMAbility.DFMAbilityElectricShockBomb.SetProjFlyTime
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xc40f018
	// Params: [ Num(1) Size(0x4) ]
	void SetProjFlyTime(float FlyTime);

	// Object: Function DFMAbility.DFMAbilityElectricShockBomb.OnRep_bDrilled
	// Flags: [Final|Native|Private]
	// Offset: 0x10a75c70
	// Params: [ Num(0) Size(0x0) ]
	void OnRep_bDrilled();

	// Object: Function DFMAbility.DFMAbilityElectricShockBomb.NotifyPlayImpact
	// Flags: [Final|Net|NetReliableNative|Event|NetMulticast|Private|HasDefaults]
	// Offset: 0x109d800c
	// Params: [ Num(1) Size(0xC) ]
	void NotifyPlayImpact(struct FVector Point);

	// Object: Function DFMAbility.DFMAbilityElectricShockBomb.MultCastElecStickInfo
	// Flags: [Net|NetReliableNative|Event|NetMulticast|Public]
	// Offset: 0xc40ef64
	// Params: [ Num(1) Size(0x1) ]
	void MultCastElecStickInfo(uint8_t bHitCharacter);

	// Object: Function DFMAbility.DFMAbilityElectricShockBomb.EndShock
	// Flags: [Final|Native|Public]
	// Offset: 0xc40ef50
	// Params: [ Num(0) Size(0x0) ]
	void EndShock();

	// Object: Function DFMAbility.DFMAbilityElectricShockBomb.DoShock
	// Flags: [Final|Native|Public]
	// Offset: 0xc40ef3c
	// Params: [ Num(0) Size(0x0) ]
	void DoShock();

	// Object: Function DFMAbility.DFMAbilityElectricShockBomb.DisableCollision
	// Flags: [Event|Public|BlueprintCallable|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(0) Size(0x0) ]
	void DisableCollision();

	// Object: Function DFMAbility.DFMAbilityElectricShockBomb.ClientStartShock
	// Flags: [Final|Native|Public]
	// Offset: 0xc40ef28
	// Params: [ Num(0) Size(0x0) ]
	void ClientStartShock();

	// Object: Function DFMAbility.DFMAbilityElectricShockBomb.ClientDoShock
	// Flags: [Final|Native|Public]
	// Offset: 0xc40ef14
	// Params: [ Num(0) Size(0x0) ]
	void ClientDoShock();
};

// Object: Class DFMAbility.DFMAbilityEMPBullet
// Size: 0x18D0 (Inherited: 0x1890)
struct ADFMAbilityEMPBullet : ADFMAbilityWeaponThrowableBullet
{
	DEFINE_UE_CLASS_HELPERS(ADFMAbilityEMPBullet, "DFMAbilityEMPBullet")

	struct ADFMAbilityEMPSubBullet* SubBulletActorClass; // 0x1888(0x8)
	int32_t SubBulletNum; // 0x1890(0x4)
	float SubBulletOffset; // 0x1894(0x4)
	float SubBulletBasePitch; // 0x1898(0x4)
	float SubBulletBaseYaw; // 0x189C(0x4)
	float SubBulletRandomDelay; // 0x18A0(0x4)
	struct TArray<uint64_t> HitTakerUinArray; // 0x18A8(0x10)
	struct TArray<uint64_t> HitEnemyUinArray; // 0x18B8(0x10)
	uint8_t Pad_0x18CC[0x4]; // 0x18CC(0x4)

	// Object: Function DFMAbility.DFMAbilityEMPBullet.SpawnSubBullet
	// Flags: [Final|Native|Private]
	// Offset: 0xc40f1f8
	// Params: [ Num(0) Size(0x0) ]
	void SpawnSubBullet();

	// Object: Function DFMAbility.DFMAbilityEMPBullet.DoSpawnSubBullet
	// Flags: [Final|Native|Private|HasOutParms|HasDefaults]
	// Offset: 0xc40f100
	// Params: [ Num(2) Size(0x18) ]
	void DoSpawnSubBullet(const struct FVector& Location, const struct FRotator& Rotator);
};

// Object: Class DFMAbility.DFMAbilityEMPGrenade
// Size: 0x1720 (Inherited: 0x16D0)
struct ADFMAbilityEMPGrenade : AWeaponThrowableBulletProjectile
{
	DEFINE_UE_CLASS_HELPERS(ADFMAbilityEMPGrenade, "DFMAbilityEMPGrenade")

	uint8_t bIsEffectSelf : 1; // 0x16D0(0x1), Mask(0x1)
	uint8_t BitPad_0x16D0_1 : 7; // 0x16D0(0x1)
	uint8_t Pad_0x16D1[0x7]; // 0x16D1(0x7)
	struct TArray<ECollisionChannel> AllTraceChannels; // 0x16D8(0x10)
	int32_t BuffId; // 0x16E8(0x4)
	uint8_t Pad_0x16EC[0x4]; // 0x16EC(0x4)
	struct TArray<int32_t> ExtraBuffArray; // 0x16F0(0x10)
	float EffectTimeSeconds; // 0x1700(0x4)
	struct FName HitLeftArmAnimName; // 0x1704(0x8)
	uint8_t Pad_0x170C[0x4]; // 0x170C(0x4)
	struct UGPAudioEventAsset* CountDownStartEvent; // 0x1710(0x8)
	struct FGPAudioFuturePlayingID CountDownStartEventPlayingID; // 0x1718(0x8)

	// Object: Function DFMAbility.DFMAbilityEMPGrenade.StopCountDownStartSound
	// Flags: [Final|Native|Private]
	// Offset: 0xc40f394
	// Params: [ Num(0) Size(0x0) ]
	void StopCountDownStartSound();

	// Object: Function DFMAbility.DFMAbilityEMPGrenade.PlayCountDownStartSound
	// Flags: [Final|Native|Private]
	// Offset: 0xc40f380
	// Params: [ Num(0) Size(0x0) ]
	void PlayCountDownStartSound();

	// Object: Function DFMAbility.DFMAbilityEMPGrenade.DataFlowOldDengAddEMPHitPlayerCount
	// Flags: [Final|Native|Public]
	// Offset: 0xc40f2dc
	// Params: [ Num(1) Size(0x8) ]
	void DataFlowOldDengAddEMPHitPlayerCount(struct AGPCharacter* CHARACTER);

	// Object: Function DFMAbility.DFMAbilityEMPGrenade.DataFlowOldDengAddEMPCastCount
	// Flags: [Final|Native|Public]
	// Offset: 0xc40f2c8
	// Params: [ Num(0) Size(0x0) ]
	void DataFlowOldDengAddEMPCastCount();
};

// Object: Class DFMAbility.DFMAbilityEMPLauncherGrenade
// Size: 0x18D0 (Inherited: 0x1890)
struct ADFMAbilityEMPLauncherGrenade : ADFMAbilityWeaponThrowableBullet
{
	DEFINE_UE_CLASS_HELPERS(ADFMAbilityEMPLauncherGrenade, "DFMAbilityEMPLauncherGrenade")

	uint8_t bIsEffectSelf : 1; // 0x1890(0x1), Mask(0x1)
	uint8_t BitPad_0x1890_1 : 7; // 0x1890(0x1)
	uint8_t Pad_0x1891[0x7]; // 0x1891(0x7)
	struct TArray<ECollisionChannel> AllTraceChannels; // 0x1898(0x10)
	int32_t BuffId; // 0x18A8(0x4)
	uint8_t Pad_0x18AC[0x4]; // 0x18AC(0x4)
	struct TArray<int32_t> ExtraBuffArray; // 0x18B0(0x10)
	float EffectTimeSeconds; // 0x18C0(0x4)
	struct FName HitLeftArmAnimName; // 0x18C4(0x8)
	uint8_t Pad_0x18CC[0x4]; // 0x18CC(0x4)

	// Object: Function DFMAbility.DFMAbilityEMPLauncherGrenade.DataFlowOldDengAddEMPHitPlayerCount
	// Flags: [Final|Native|Public]
	// Offset: 0xc40f3c0
	// Params: [ Num(1) Size(0x8) ]
	void DataFlowOldDengAddEMPHitPlayerCount(struct AGPCharacter* CHARACTER);
};

// Object: Class DFMAbility.DFMAbilityEMPSubBullet
// Size: 0x18C0 (Inherited: 0x1890)
struct ADFMAbilityEMPSubBullet : ADFMAbilityWeaponThrowableBullet
{
	DEFINE_UE_CLASS_HELPERS(ADFMAbilityEMPSubBullet, "DFMAbilityEMPSubBullet")

	struct TArray<ECollisionChannel> AllTraceChannels; // 0x1890(0x10)
	int32_t BuffId; // 0x18A0(0x4)
	float EffectTimeSeconds; // 0x18A4(0x4)
	float RandomExplosionDeLay; // 0x18A8(0x4)
	struct TWeakObjectPtr<struct ADFMAbilityEMPBullet> ParentBullet; // 0x18AC(0x8)
	uint8_t Pad_0x18B4[0xC]; // 0x18B4(0xC)

	// Object: Function DFMAbility.DFMAbilityEMPSubBullet.InitBulletInfo
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults]
	// Offset: 0xc40f47c
	// Params: [ Num(4) Size(0x148) ]
	void InitBulletInfo(struct ADFMAbilityEMPBullet* EMPBullet, const struct FWeaponBulletBaseInitParam& ParentParam, const struct FRotator& Rotator, const float& RandomDelay);
};

// Object: Class DFMAbility.DFMAbilityFireArrow
// Size: 0xBB8 (Inherited: 0x9E8)
struct ADFMAbilityFireArrow : ADFMAbilityBuffDetector
{
	DEFINE_UE_CLASS_HELPERS(ADFMAbilityFireArrow, "DFMAbilityFireArrow")

	uint8_t Pad_0x9E8[0x18]; // 0x9E8(0x18)
	struct TArray<struct FDFMAbilityArrowData> GameModeArrowDataList; // 0xA00(0x10)
	int32_t ThreatId; // 0xA10(0x4)
	int32_t ThreatId_InWater; // 0xA14(0x4)
	float LifeTime_StickyToChar; // 0xA18(0x4)
	struct FName ElectricEffectID; // 0xA1C(0x8)
	struct FName ElectricEffectIDInWater; // 0xA24(0x8)
	float ElectricEffectInterval; // 0xA2C(0x4)
	int32_t PullOutArrowSkillID; // 0xA30(0x4)
	uint8_t Pad_0xA34[0x4]; // 0xA34(0x4)
	uint8_t RangeCheckCapsule[0x8]; // 0xA38(0x8)
	uint8_t bInWater : 1; // 0xA40(0x1), Mask(0x1)
	uint8_t BitPad_0xA40_1 : 7; // 0xA40(0x1)
	uint8_t bStopDamage : 1; // 0xA41(0x1), Mask(0x1)
	uint8_t BitPad_0xA41_1 : 7; // 0xA41(0x1)
	uint8_t Pad_0xA42[0x2]; // 0xA42(0x2)
	float RealCheckRadius; // 0xA44(0x4)
	float TickEffectTime; // 0xA48(0x4)
	float Curtime; // 0xA4C(0x4)
	int64_t AttackValueId; // 0xA50(0x8)
	int64_t BarbedWireAttackValueId; // 0xA58(0x8)
	int32_t BarbedWireAddBuffId; // 0xA60(0x4)
	uint8_t bBarbedWireAttackHitSelf : 1; // 0xA64(0x1), Mask(0x1)
	uint8_t BitPad_0xA64_1 : 7; // 0xA64(0x1)
	uint8_t Pad_0xA65[0x3]; // 0xA65(0x3)
	float MakeDamageInterval; // 0xA68(0x4)
	float MakeDamageTime; // 0xA6C(0x4)
	float ArrowFlyDis; // 0xA70(0x4)
	int32_t TeamOrCampID; // 0xA74(0x4)
	float CreateTime; // 0xA78(0x4)
	uint8_t Pad_0xA7C[0x4]; // 0xA7C(0x4)
	struct TSet<int32_t> HitPlayerSet; // 0xA80(0x50)
	struct TArray<struct ADFMCharacter*> PendingCharacters; // 0xAD0(0x10)
	struct FGPWeaponBulletThrowableProjectileInfo ProjectileInfo; // 0xAE0(0x78)
	uint64_t LastStickyCharUin; // 0xB58(0x8)
	uint8_t bShowMarker : 1; // 0xB60(0x1), Mask(0x1)
	uint8_t BitPad_0xB60_1 : 7; // 0xB60(0x1)
	uint8_t bHasStickyTarget : 1; // 0xB61(0x1), Mask(0x1)
	uint8_t BitPad_0xB61_1 : 7; // 0xB61(0x1)
	uint8_t Pad_0xB62[0x6]; // 0xB62(0x6)
	struct TSet<uint32_t> AllHitTargets; // 0xB68(0x50)

	// Object: Function DFMAbility.DFMAbilityFireArrow.StopFireArrowDamage
	// Flags: [Final|Native|Public]
	// Offset: 0xc40fc54
	// Params: [ Num(0) Size(0x0) ]
	void StopFireArrowDamage();

	// Object: Function DFMAbility.DFMAbilityFireArrow.SetFlyDistance
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xc40fbb0
	// Params: [ Num(1) Size(0x4) ]
	void SetFlyDistance(float FlyDis);

	// Object: Function DFMAbility.DFMAbilityFireArrow.Rep_StopDamage
	// Flags: [Native|Public]
	// Offset: 0xc40fb94
	// Params: [ Num(0) Size(0x0) ]
	void Rep_StopDamage();

	// Object: Function DFMAbility.DFMAbilityFireArrow.PullOut
	// Flags: [Final|Native|Public]
	// Offset: 0xc40fb80
	// Params: [ Num(0) Size(0x0) ]
	void PullOut();

	// Object: Function DFMAbility.DFMAbilityFireArrow.MakeDamage
	// Flags: [Native|Public]
	// Offset: 0xc40fb64
	// Params: [ Num(0) Size(0x0) ]
	void MakeDamage();

	// Object: Function DFMAbility.DFMAbilityFireArrow.IsTeammateNoMe
	// Flags: [Final|Native|Protected]
	// Offset: 0xc40fab4
	// Params: [ Num(2) Size(0x9) ]
	uint8_t IsTeammateNoMe(struct AGPCharacter* Target);

	// Object: Function DFMAbility.DFMAbilityFireArrow.IsOnwerEnemyWithVehicle
	// Flags: [Final|Native|Public]
	// Offset: 0xc40fa04
	// Params: [ Num(2) Size(0x9) ]
	uint8_t IsOnwerEnemyWithVehicle(struct ADFMVehicleBase* Vehicle);

	// Object: Function DFMAbility.DFMAbilityFireArrow.IsDestroy
	// Flags: [Native|Event|Public|BlueprintEvent]
	// Offset: 0xc40f9c4
	// Params: [ Num(1) Size(0x1) ]
	uint8_t IsDestroy();

	// Object: Function DFMAbility.DFMAbilityFireArrow.ClientOnOverlapEnd
	// Flags: [Final|Native|Public]
	// Offset: 0x10a74f74
	// Params: [ Num(4) Size(0x1C) ]
	void ClientOnOverlapEnd(struct UPrimitiveComponent* OverlappedComp, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex);

	// Object: Function DFMAbility.DFMAbilityFireArrow.ClientOnOverlapBegin
	// Flags: [Final|Native|Public|HasOutParms]
	// Offset: 0x10a411b0
	// Params: [ Num(6) Size(0xA8) ]
	void ClientOnOverlapBegin(struct UPrimitiveComponent* OverlappedComp, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, uint8_t bFromSweep, const struct FHitResult& SweepResult);

	// Object: Function DFMAbility.DFMAbilityFireArrow.CheckBarbedWireDamage
	// Flags: [Final|Native|Public]
	// Offset: 0xc40f8dc
	// Params: [ Num(2) Size(0x9) ]
	void CheckBarbedWireDamage(struct AGPCharacter* Target, uint8_t bIsOverlapEnemy);

	// Object: Function DFMAbility.DFMAbilityFireArrow.BP_StopElectricEffect
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(0) Size(0x0) ]
	void BP_StopElectricEffect();

	// Object: Function DFMAbility.DFMAbilityFireArrow.BP_PlayElectricEffect
	// Flags: [Event|Public|HasDefaults|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(1) Size(0xC) ]
	void BP_PlayElectricEffect(struct FVector TargetPos);

	// Object: Function DFMAbility.DFMAbilityFireArrow.AddScoreInfo
	// Flags: [Final|Native|Public]
	// Offset: 0xc40f838
	// Params: [ Num(1) Size(0x4) ]
	void AddScoreInfo(EScoreName ScoreType);

	// Object: Function DFMAbility.DFMAbilityFireArrow.AddHitTarget
	// Flags: [Final|Native|Protected|HasOutParms]
	// Offset: 0xc40f778
	// Params: [ Num(1) Size(0x8A0) ]
	void AddHitTarget(const struct FDamageResultInfo& DamageResult);

	// Object: Function DFMAbility.DFMAbilityFireArrow.ActorIsLocal
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x10ac41a0
	// Params: [ Num(2) Size(0x9) ]
	uint8_t ActorIsLocal(struct AActor* Target);
};

// Object: Class DFMAbility.DFMAbilityFlyRebot
// Size: 0x35E0 (Inherited: 0x34E0)
struct ADFMAbilityFlyRebot : ADFMCharacter
{
	DEFINE_UE_CLASS_HELPERS(ADFMAbilityFlyRebot, "DFMAbilityFlyRebot")

	uint8_t Pad_0x34E0[0x30]; // 0x34E0(0x30)
	struct TWeakObjectPtr<struct ADFMCharacter> OwnerOperator; // 0x3510(0x8)
	uint8_t Pad_0x3518[0x10]; // 0x3518(0x10)
	uint8_t bTeammatePickUp : 1; // 0x3528(0x1), Mask(0x1)
	uint8_t BitPad_0x3528_1 : 7; // 0x3528(0x1)
	uint8_t bEnermyPickUp : 1; // 0x3529(0x1), Mask(0x1)
	uint8_t BitPad_0x3529_1 : 7; // 0x3529(0x1)
	uint8_t Pad_0x352A[0x2]; // 0x352A(0x2)
	struct FName VehiclePanelName; // 0x352C(0x8)
	float MoveForwardValue; // 0x3534(0x4)
	float MoveRightValue; // 0x3538(0x4)
	float VehicleYaw; // 0x353C(0x4)
	float VehicleTurnRate; // 0x3540(0x4)
	float VehiclePitch; // 0x3544(0x4)
	float VehicleLookUpTurnRate; // 0x3548(0x4)
	uint8_t Pad_0x354C[0xC]; // 0x354C(0xC)
	uint8_t bOnOperate : 1; // 0x3558(0x1), Mask(0x1)
	uint8_t BitPad_0x3558_1 : 7; // 0x3558(0x1)
	uint8_t Pad_0x3559[0x8]; // 0x3559(0x8)
	uint8_t bVehicleDestroyed : 1; // 0x3561(0x1), Mask(0x1)
	uint8_t BitPad_0x3561_1 : 7; // 0x3561(0x1)
	uint8_t Pad_0x3562[0x2]; // 0x3562(0x2)
	float AssaultShockConfigTime; // 0x3564(0x4)
	int32_t VehicleBehaviorForbit; // 0x3568(0x4)
	float AssaultShockTime; // 0x356C(0x4)
	uint8_t BeAssaultShock : 1; // 0x3570(0x1), Mask(0x1)
	uint8_t BitPad_0x3570_1 : 7; // 0x3570(0x1)
	uint8_t Pad_0x3571[0x3]; // 0x3571(0x3)
	struct FName LowPowerHudPanelName; // 0x3574(0x8)
	int32_t OwnerCampID; // 0x357C(0x4)
	int32_t OwnerTeamID; // 0x3580(0x4)
	uint8_t Pad_0x3584[0x4]; // 0x3584(0x4)
	uint64_t OwnerUin; // 0x3588(0x8)
	uint8_t Pad_0x3590[0x8]; // 0x3590(0x8)
	struct FGameplayTagContainer InteractableTags; // 0x3598(0x20)
	struct FGameplayTag VehicleInteractorTag; // 0x35B8(0x8)
	struct FText InteractText; // 0x35C0(0x18)
	struct FName LogicName; // 0x35D8(0x8)

	// Object: Function DFMAbility.DFMAbilityFlyRebot.VehicleMovementModeChanged
	// Flags: [Final|Native|Public]
	// Offset: 0xc410a58
	// Params: [ Num(3) Size(0xA) ]
	void VehicleMovementModeChanged(struct ACHARACTER* CHARACTER, EMovementMode PrevMovementMode, uint8_t PreviousCustomMode);

	// Object: Function DFMAbility.DFMAbilityFlyRebot.UpdateMoveResult
	// Flags: [Net|NetReliableNative|Event|Public|NetServer|HasDefaults]
	// Offset: 0xc41086c
	// Params: [ Num(6) Size(0x2D) ]
	void UpdateMoveResult(struct FVector pos, struct FVector spos, struct FRotator Rot, float ForwardValue, float RightValue, uint8_t bJump);

	// Object: Function DFMAbility.DFMAbilityFlyRebot.SetVehicleBehaviorForbit
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xc4107c8
	// Params: [ Num(1) Size(0x1) ]
	void SetVehicleBehaviorForbit(EVehicleBehaviorForbit Behavior);

	// Object: Function DFMAbility.DFMAbilityFlyRebot.ServerOffOperate
	// Flags: [Net|NetReliableNative|Event|Public|NetServer]
	// Offset: 0xc41071c
	// Params: [ Num(1) Size(0x4) ]
	void ServerOffOperate(float Delay);

	// Object: Function DFMAbility.DFMAbilityFlyRebot.OnRep_MovementEnable
	// Flags: [Final|Native|Public]
	// Offset: 0xc410708
	// Params: [ Num(0) Size(0x0) ]
	void OnRep_MovementEnable();

	// Object: Function DFMAbility.DFMAbilityFlyRebot.IsEnemy
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0xc4106d0
	// Params: [ Num(1) Size(0x1) ]
	uint8_t IsEnemy();

	// Object: Function DFMAbility.DFMAbilityFlyRebot.IsCharacterEnemy
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0xc410620
	// Params: [ Num(2) Size(0x9) ]
	uint8_t IsCharacterEnemy(struct AGPCharacter* GPChar);

	// Object: Function DFMAbility.DFMAbilityFlyRebot.Is1P
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0xc4105e8
	// Params: [ Num(1) Size(0x1) ]
	uint8_t Is1P();

	// Object: Function DFMAbility.DFMAbilityFlyRebot.GetSlotCharging
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0xc4105b4
	// Params: [ Num(1) Size(0x8) ]
	struct UGPSlotChargingComponent* GetSlotCharging();

	// Object: Function DFMAbility.DFMAbilityFlyRebot.GetOperator
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0xc410580
	// Params: [ Num(1) Size(0x8) ]
	struct ADFMCharacter* GetOperator();

	// Object: Function DFMAbility.DFMAbilityFlyRebot.ClientUpdateMoveResult
	// Flags: [Net|NetReliableNative|Event|NetMulticast|Public|HasDefaults]
	// Offset: 0xc4103e0
	// Params: [ Num(5) Size(0x21) ]
	void ClientUpdateMoveResult(struct FVector pos, struct FRotator Rot, float ForwardValue, float RightValue, uint8_t bJump);

	// Object: Function DFMAbility.DFMAbilityFlyRebot.ClientSetEngineVehicleIngore
	// Flags: [Net|NetReliableNative|Event|Public|NetClient]
	// Offset: 0xc4102f0
	// Params: [ Num(2) Size(0x9) ]
	void ClientSetEngineVehicleIngore(struct ADFMCharacter* Char, uint8_t On);

	// Object: Function DFMAbility.DFMAbilityFlyRebot.CheckVehicleBehaviorForbit
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xc410240
	// Params: [ Num(2) Size(0x2) ]
	uint8_t CheckVehicleBehaviorForbit(EVehicleBehaviorForbit Behavior);

	// Object: Function DFMAbility.DFMAbilityFlyRebot.CanMove
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0xc410208
	// Params: [ Num(1) Size(0x1) ]
	uint8_t CanMove();

	// Object: Function DFMAbility.DFMAbilityFlyRebot.BP_TurnLookUpAtRate
	// Flags: [Event|Public|BlueprintCallable|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(1) Size(0x4) ]
	void BP_TurnLookUpAtRate(float Rate);

	// Object: Function DFMAbility.DFMAbilityFlyRebot.BP_OnOperateDie
	// Flags: [Event|Public|BlueprintCallable|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(0) Size(0x0) ]
	void BP_OnOperateDie();

	// Object: Function DFMAbility.DFMAbilityFlyRebot.BP_OnOperate
	// Flags: [Event|Public|BlueprintCallable|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(1) Size(0x1) ]
	void BP_OnOperate(uint8_t On);

	// Object: Function DFMAbility.DFMAbilityFlyRebot.BP_OnFouce
	// Flags: [Event|Public|BlueprintCallable|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(1) Size(0x1) ]
	void BP_OnFouce(uint8_t On);

	// Object: Function DFMAbility.DFMAbilityFlyRebot.BP_MoveUp
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xc410164
	// Params: [ Num(1) Size(0x4) ]
	void BP_MoveUp(int32_t Value);

	// Object: Function DFMAbility.DFMAbilityFlyRebot.BP_MoveRight
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xc4100c0
	// Params: [ Num(1) Size(0x4) ]
	void BP_MoveRight(int32_t Value);

	// Object: Function DFMAbility.DFMAbilityFlyRebot.BP_MoveForward
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xc41001c
	// Params: [ Num(1) Size(0x4) ]
	void BP_MoveForward(int32_t Value);

	// Object: Function DFMAbility.DFMAbilityFlyRebot.BP_GetOff
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xc40ff78
	// Params: [ Num(1) Size(0x4) ]
	void BP_GetOff(float Delay);

	// Object: Function DFMAbility.DFMAbilityFlyRebot.AddToAIGrende
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xc40ff64
	// Params: [ Num(0) Size(0x0) ]
	void AddToAIGrende();
};

// Object: Class DFMAbility.DFMAbilityFunctionSystem
// Size: 0x50 (Inherited: 0x50)
struct UDFMAbilityFunctionSystem : UDFMAbilitySystemBase
{
	DEFINE_UE_CLASS_HELPERS(UDFMAbilityFunctionSystem, "DFMAbilityFunctionSystem")
};

// Object: Class DFMAbility.DFMAbilityGameStateComponent
// Size: 0x420 (Inherited: 0x268)
struct UDFMAbilityGameStateComponent : UGPAbilityGameStateComponent
{
	DEFINE_UE_CLASS_HELPERS(UDFMAbilityGameStateComponent, "DFMAbilityGameStateComponent")

	struct TMap<int32_t, struct FSkillConfigData> SkillRowDataMap; // 0x268(0x50)
	struct TMap<int32_t, struct ADFMAbilityLogicTemplate*> AllAbilityTemplate; // 0x2B8(0x50)
	struct TArray<struct UCurveFloat*> AllScoreDiscountCurve; // 0x308(0x10)
	struct TMap<int32_t, struct FAbilityTempalteLoadData> AbilityTemplateLoadMaps; // 0x318(0x50)
	struct TMap<int32_t, uint64_t> AbilityTemplateLoadHandleMaps; // 0x368(0x50)
	int32_t TotalByte; // 0x3B8(0x4)
	uint8_t Pad_0x3BC[0x4]; // 0x3BC(0x4)
	struct TArray<struct FAbilityTemplateRepData> AbilityTemplateRepData; // 0x3C0(0x10)
	int64_t AbilityIndexRam; // 0x3D0(0x8)
	int64_t AbilityIndexRam2; // 0x3D8(0x8)
	uint8_t Pad_0x3E0[0x24]; // 0x3E0(0x24)
	struct TWeakObjectPtr<struct UDFMAbilitySpawnActorSystem> SpawnActorSystem; // 0x404(0x8)
	struct TWeakObjectPtr<struct UDFMAbilityPreviewActorSystem> PreviewActorSystem; // 0x40C(0x8)
	struct TWeakObjectPtr<struct UDFMAbilityDefaultSystem> DefaultSystem; // 0x414(0x8)
	uint8_t Pad_0x41C[0x4]; // 0x41C(0x4)

	// Object: Function DFMAbility.DFMAbilityGameStateComponent.Rep_AbilityTemplateRepData
	// Flags: [Final|Native|Public]
	// Offset: 0xfa7b764
	// Params: [ Num(0) Size(0x0) ]
	void Rep_AbilityTemplateRepData();

	// Object: Function DFMAbility.DFMAbilityGameStateComponent.Rep_AbilityIndexRam
	// Flags: [Final|Native|Public]
	// Offset: 0x10800a50
	// Params: [ Num(0) Size(0x0) ]
	void Rep_AbilityIndexRam();

	// Object: Function DFMAbility.DFMAbilityGameStateComponent.OnScoreDiscoutPreLoaded
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults]
	// Offset: 0xc412eec
	// Params: [ Num(1) Size(0x18) ]
	void OnScoreDiscoutPreLoaded(const struct FSoftObjectPath& SoftObjectPath);

	// Object: Function DFMAbility.DFMAbilityGameStateComponent.OnAddDamageModifyItem
	// Flags: [Final|Native|Public]
	// Offset: 0xc412dd0
	// Params: [ Num(3) Size(0x18) ]
	void OnAddDamageModifyItem(struct FName Item, float Value, uint64_t Uin);

	// Object: Function DFMAbility.DFMAbilityGameStateComponent.GetSkillIDUniSkill
	// Flags: [Final|Native|Public]
	// Offset: 0xc412d24
	// Params: [ Num(2) Size(0x10) ]
	int64_t GetSkillIDUniSkill(int64_t SkillId);

	// Object: Function DFMAbility.DFMAbilityGameStateComponent.GetSkillIDUniNum
	// Flags: [Final|Native|Public]
	// Offset: 0xc412c78
	// Params: [ Num(2) Size(0x10) ]
	int64_t GetSkillIDUniNum(int64_t SkillId);
};

// Object: Class DFMAbility.DFMAbilitySerilizeUtils
// Size: 0x28 (Inherited: 0x28)
struct UDFMAbilitySerilizeUtils : UBlueprintFunctionLibrary
{
	DEFINE_UE_CLASS_HELPERS(UDFMAbilitySerilizeUtils, "DFMAbilitySerilizeUtils")
};

// Object: Class DFMAbility.DFMAbilityIncendiaryArea
// Size: 0xDD8 (Inherited: 0xC78)
struct ADFMAbilityIncendiaryArea : ADFMAbilityDiffuseArea
{
	DEFINE_UE_CLASS_HELPERS(ADFMAbilityIncendiaryArea, "DFMAbilityIncendiaryArea")

	uint8_t Pad_0xC78[0x8]; // 0xC78(0x8)
	float ExtinguishDelayTime; // 0xC80(0x4)
	float AutoExtinguishMinDamageHeight; // 0xC84(0x4)
	float FullPSMinRate; // 0xC88(0x4)
	float FullPSMinRateMobile; // 0xC8C(0x4)
	float FullPSMaxOffset; // 0xC90(0x4)
	float FullPSMaxAngleOffset; // 0xC94(0x4)
	float FullPSClientCellCheckOffset; // 0xC98(0x4)
	float ForceFullPSMinDistance; // 0xC9C(0x4)
	float ForceFullPSMinDistanceExit; // 0xCA0(0x4)
	struct FName FullPSName; // 0xCA4(0x8)
	struct FName FullPSName_Water; // 0xCAC(0x8)
	struct FName CenterCellPSName; // 0xCB4(0x8)
	struct FName CellPSName; // 0xCBC(0x8)
	struct FName CenterCellPSName_Water; // 0xCC4(0x8)
	struct FName CellPSName_Water; // 0xCCC(0x8)
	int32_t HitBreakableItemAttackerID; // 0xCD4(0x4)
	int32_t HitAbilityActorAttackerID; // 0xCD8(0x4)
	uint8_t Pad_0xCDC[0x4]; // 0xCDC(0x4)
	struct TMap<int32_t, int32_t> HitAbilityActorOverrideMap; // 0xCE0(0x50)
	struct UFireSpreadSourceComponent* FireSpreadSourceComponent; // 0xD30(0x8)
	float PSMinIgnoreOverlapRate; // 0xD38(0x4)
	uint8_t bUseRandomPS : 1; // 0xD3C(0x1), Mask(0x1)
	uint8_t BitPad_0xD3C_1 : 7; // 0xD3C(0x1)
	uint8_t Pad_0xD3D[0x3]; // 0xD3D(0x3)
	struct TArray<struct FName> RandomPSList; // 0xD40(0x10)
	struct TArray<struct FName> RandomPSList_Water; // 0xD50(0x10)
	struct UGPAudioEventAsset* ExtinguishEvent; // 0xD60(0x8)
	uint8_t bDestoryImmWhenAnyBlockExtinguish : 1; // 0xD68(0x1), Mask(0x1)
	uint8_t BitPad_0xD68_1 : 7; // 0xD68(0x1)
	uint8_t Pad_0xD69[0x7]; // 0xD69(0x7)
	struct TArray<struct UExtinguishIncendiaryComponent*> AllExtinguishComponents; // 0xD70(0x10)
	uint8_t bTickCheckEffectOverlap : 1; // 0xD80(0x1), Mask(0x1)
	uint8_t BitPad_0xD80_1 : 7; // 0xD80(0x1)
	uint8_t Pad_0xD81[0x3]; // 0xD81(0x3)
	int32_t LastIncendiarySphereIdx; // 0xD84(0x4)
	int32_t LastIncendiarySphereNum; // 0xD88(0x4)
	uint8_t Pad_0xD8C[0x4]; // 0xD8C(0x4)
	struct TArray<int32_t> EffectOverlapIngoreList; // 0xD90(0x10)
	uint8_t bIsForceShowFullPS : 1; // 0xDA0(0x1), Mask(0x1)
	uint8_t BitPad_0xDA0_1 : 7; // 0xDA0(0x1)
	uint8_t bIsShowFullEffect : 1; // 0xDA1(0x1), Mask(0x1)
	uint8_t BitPad_0xDA1_1 : 7; // 0xDA1(0x1)
	uint8_t Pad_0xDA2[0x2]; // 0xDA2(0x2)
	int32_t FullEffectUid; // 0xDA4(0x4)
	struct UFXResourceContainerComponent* FullEffect; // 0xDA8(0x8)
	int32_t FullEffectHandleIndex; // 0xDB0(0x4)
	uint8_t bIsAreaOnWater : 1; // 0xDB4(0x1), Mask(0x1)
	uint8_t BitPad_0xDB4_1 : 7; // 0xDB4(0x1)
	uint8_t bIsExtinguished : 1; // 0xDB5(0x1), Mask(0x1)
	uint8_t BitPad_0xDB5_1 : 7; // 0xDB5(0x1)
	uint8_t bIsNeedTickCheckExtinguishCell : 1; // 0xDB6(0x1), Mask(0x1)
	uint8_t BitPad_0xDB6_1 : 7; // 0xDB6(0x1)
	uint8_t bHasWaterCell : 1; // 0xDB7(0x1), Mask(0x1)
	uint8_t BitPad_0xDB7_1 : 7; // 0xDB7(0x1)
	uint8_t bHasGroundCell : 1; // 0xDB8(0x1), Mask(0x1)
	uint8_t BitPad_0xDB8_1 : 7; // 0xDB8(0x1)
	uint8_t Pad_0xDB9[0x3]; // 0xDB9(0x3)
	float CheckCellMaxOffset; // 0xDBC(0x4)
	struct FVector BaseCellNormal; // 0xDC0(0xC)
	float CheckCellMinNormalDot; // 0xDCC(0x4)
	int32_t SourceVehicleId; // 0xDD0(0x4)
	uint8_t Pad_0xDD4[0x4]; // 0xDD4(0x4)

	// Object: Function DFMAbility.DFMAbilityIncendiaryArea.TryFullEffect
	// Flags: [Final|Native|Protected]
	// Offset: 0xc4140a0
	// Params: [ Num(1) Size(0x1) ]
	uint8_t TryFullEffect();

	// Object: Function DFMAbility.DFMAbilityIncendiaryArea.TryAutoFitDecalTransform
	// Flags: [Final|Native|Protected]
	// Offset: 0xc41408c
	// Params: [ Num(0) Size(0x0) ]
	void TryAutoFitDecalTransform();

	// Object: Function DFMAbility.DFMAbilityIncendiaryArea.TickCheckExtinguishCell
	// Flags: [Final|Native|Protected]
	// Offset: 0xc414078
	// Params: [ Num(0) Size(0x0) ]
	void TickCheckExtinguishCell();

	// Object: Function DFMAbility.DFMAbilityIncendiaryArea.TickCheckEffectOverlap
	// Flags: [Final|Native|Protected]
	// Offset: 0xc414064
	// Params: [ Num(0) Size(0x0) ]
	void TickCheckEffectOverlap();

	// Object: Function DFMAbility.DFMAbilityIncendiaryArea.SpawnCellPS
	// Flags: [Final|Native|Protected]
	// Offset: 0xc413f78
	// Params: [ Num(3) Size(0x9) ]
	uint8_t SpawnCellPS(int32_t CellIdx, float MaxHeight);

	// Object: Function DFMAbility.DFMAbilityIncendiaryArea.SetFullEffectState
	// Flags: [Final|Native|Protected]
	// Offset: 0xc413ecc
	// Params: [ Num(1) Size(0x1) ]
	void SetFullEffectState(uint8_t bIsShow);

	// Object: Function DFMAbility.DFMAbilityIncendiaryArea.SetExtinguishFlag
	// Flags: [Final|Native|Protected]
	// Offset: 0xc413eb8
	// Params: [ Num(0) Size(0x0) ]
	void SetExtinguishFlag();

	// Object: Function DFMAbility.DFMAbilityIncendiaryArea.RemoveIncendiarySphere
	// Flags: [Final|Native|Protected]
	// Offset: 0xc413e14
	// Params: [ Num(1) Size(0x4) ]
	void RemoveIncendiarySphere(int32_t uid);

	// Object: Function DFMAbility.DFMAbilityIncendiaryArea.RealDoHitActor
	// Flags: [Final|Native|Private]
	// Offset: 0xc413d34
	// Params: [ Num(2) Size(0xC) ]
	void RealDoHitActor(struct AActor* HitTarget, int32_t AttackerId);

	// Object: Function DFMAbility.DFMAbilityIncendiaryArea.OnAbilityIncendiaryAreaSpawned
	// Flags: [Final|Native|Public]
	// Offset: 0xc413c54
	// Params: [ Num(2) Size(0xC) ]
	void OnAbilityIncendiaryAreaSpawned(struct AActor* IncendiaryAreaActor, int32_t InSourceVehicleId);

	// Object: Function DFMAbility.DFMAbilityIncendiaryArea.MulticastPlayExtinguishAudio
	// Flags: [Net|NetReliableNative|Event|NetMulticast|Protected]
	// Offset: 0xc413c38
	// Params: [ Num(0) Size(0x0) ]
	void MulticastPlayExtinguishAudio();

	// Object: Function DFMAbility.DFMAbilityIncendiaryArea.IsNeedCheckEffectMaxIgnoreOverlapRate
	// Flags: [Final|Native|Protected|Const]
	// Offset: 0xc413c00
	// Params: [ Num(1) Size(0x1) ]
	uint8_t IsNeedCheckEffectMaxIgnoreOverlapRate();

	// Object: Function DFMAbility.DFMAbilityIncendiaryArea.IsInExtinguishArea
	// Flags: [Final|Native|Protected|HasOutParms|HasDefaults|Const]
	// Offset: 0xc413b44
	// Params: [ Num(2) Size(0xD) ]
	uint8_t IsInExtinguishArea(const struct FVector& CellCenter);

	// Object: Function DFMAbility.DFMAbilityIncendiaryArea.GetCellPSName
	// Flags: [Final|Native|Protected|Const]
	// Offset: 0xc413a58
	// Params: [ Num(3) Size(0x10) ]
	struct FName GetCellPSName(int32_t CellIdx, uint8_t bIsOnWater);

	// Object: Function DFMAbility.DFMAbilityIncendiaryArea.GetAbilityGameStateComponent
	// Flags: [Final|Native|Protected|Const]
	// Offset: 0xc413a24
	// Params: [ Num(1) Size(0x8) ]
	struct UGPAbilityGameStateComponent* GetAbilityGameStateComponent();

	// Object: Function DFMAbility.DFMAbilityIncendiaryArea.FindAllExtinguishComponents
	// Flags: [Final|Native|Protected]
	// Offset: 0xc413a10
	// Params: [ Num(0) Size(0x0) ]
	void FindAllExtinguishComponents();

	// Object: Function DFMAbility.DFMAbilityIncendiaryArea.EmptyAllExtinguishComponents
	// Flags: [Final|Native|Protected]
	// Offset: 0xc4139fc
	// Params: [ Num(0) Size(0x0) ]
	void EmptyAllExtinguishComponents();

	// Object: Function DFMAbility.DFMAbilityIncendiaryArea.DoSpawnMeshComponent
	// Flags: [Native|Protected|HasOutParms|HasDefaults]
	// Offset: 0xc413900
	// Params: [ Num(3) Size(0x18) ]
	struct UMeshComponent* DoSpawnMeshComponent(int32_t CellIdx, struct FVector& BaseLocation);

	// Object: Function DFMAbility.DFMAbilityIncendiaryArea.DoSpawnEffect
	// Flags: [Final|Native|Protected|HasOutParms|HasDefaults]
	// Offset: 0xc4137d0
	// Params: [ Num(4) Size(0x20) ]
	struct UFXResourceContainerComponent* DoSpawnEffect(int32_t CellIdx, float MaxHeight, struct FVector& BaseLocation);

	// Object: Function DFMAbility.DFMAbilityIncendiaryArea.DoHitBreakableItem
	// Flags: [Final|Native|Private]
	// Offset: 0xc41372c
	// Params: [ Num(1) Size(0x8) ]
	void DoHitBreakableItem(struct ABreakableItemBase* BreakableItem);

	// Object: Function DFMAbility.DFMAbilityIncendiaryArea.DoHitAbilityActor
	// Flags: [Final|Native|Private]
	// Offset: 0xc413614
	// Params: [ Num(3) Size(0x14) ]
	void DoHitAbilityActor(struct AActor* HitTarget, struct AActor* HitTargetOwner, int32_t HitTargetSkillId);

	// Object: Function DFMAbility.DFMAbilityIncendiaryArea.DoExtinguishSphere
	// Flags: [Final|Native|Protected]
	// Offset: 0xc413564
	// Params: [ Num(2) Size(0x9) ]
	uint8_t DoExtinguishSphere(struct USphereComponent* SphereComponent);

	// Object: Function DFMAbility.DFMAbilityIncendiaryArea.DoExtinguishClientCell
	// Flags: [Native|Public]
	// Offset: 0xc4134ac
	// Params: [ Num(2) Size(0x5) ]
	uint8_t DoExtinguishClientCell(int32_t ClientIndex);

	// Object: Function DFMAbility.DFMAbilityIncendiaryArea.DoExtinguishBox
	// Flags: [Final|Native|Protected]
	// Offset: 0xc4133fc
	// Params: [ Num(2) Size(0x9) ]
	uint8_t DoExtinguishBox(struct UBoxComponent* BoxComponent);

	// Object: Function DFMAbility.DFMAbilityIncendiaryArea.DoExtinguish
	// Flags: [Final|Native|Public]
	// Offset: 0xc413358
	// Params: [ Num(1) Size(0x8) ]
	void DoExtinguish(struct UShapeComponent* ExtinguishRange);

	// Object: Function DFMAbility.DFMAbilityIncendiaryArea.DataFlowAddExtinguishedNum
	// Flags: [Native|Protected]
	// Offset: 0xc41333c
	// Params: [ Num(0) Size(0x0) ]
	void DataFlowAddExtinguishedNum();

	// Object: Function DFMAbility.DFMAbilityIncendiaryArea.CustomDoExtinguish
	// Flags: [Final|Native|Public|HasDefaults]
	// Offset: 0xc41328c
	// Params: [ Num(1) Size(0x1C) ]
	void CustomDoExtinguish(struct FBox Box);

	// Object: Function DFMAbility.DFMAbilityIncendiaryArea.CheckSyncFullEffect
	// Flags: [Native|Protected|Const]
	// Offset: 0xc41324c
	// Params: [ Num(1) Size(0x1) ]
	uint8_t CheckSyncFullEffect();

	// Object: Function DFMAbility.DFMAbilityIncendiaryArea.CheckForceFullEffectDistance
	// Flags: [Final|Native|Protected]
	// Offset: 0xc413194
	// Params: [ Num(2) Size(0x2) ]
	uint8_t CheckForceFullEffectDistance(uint8_t CheckExit);

	// Object: Function DFMAbility.DFMAbilityIncendiaryArea.CheckEffectMinIgnoreOverlapRate
	// Flags: [Final|Native|Protected]
	// Offset: 0xc4130e4
	// Params: [ Num(2) Size(0x5) ]
	uint8_t CheckEffectMinIgnoreOverlapRate(int32_t CellIdx);

	// Object: Function DFMAbility.DFMAbilityIncendiaryArea.AddIncendiarySphere
	// Flags: [Final|Native|Protected|HasDefaults]
	// Offset: 0xc412ffc
	// Params: [ Num(3) Size(0x14) ]
	int32_t AddIncendiarySphere(struct FVector Center, float radius);
};

// Object: Class DFMAbility.DFMAbilityIncendiaryGrenade
// Size: 0x1710 (Inherited: 0x16D0)
struct ADFMAbilityIncendiaryGrenade : AWeaponThrowableBulletProjectile
{
	DEFINE_UE_CLASS_HELPERS(ADFMAbilityIncendiaryGrenade, "DFMAbilityIncendiaryGrenade")

	struct ADFMAbilityDiffuseArea* IncendiaryActorClass; // 0x16C8(0x8)
	uint8_t bIsStickyToTarget : 1; // 0x16D0(0x1), Mask(0x1)
	uint8_t bCheckAreaPlaneSize : 1; // 0x16D1(0x1), Mask(0x1)
	uint8_t bCheckAreaPlaneSizeDebug : 1; // 0x16D2(0x1), Mask(0x1)
	int32_t CheckAreaPlane_MinNum; // 0x16D4(0x4)
	float CheckAreaPlane_Size; // 0x16D8(0x4)
	float CheckAreaPlane_Height; // 0x16DC(0x4)
	float CheckAreaPlane_MinDist; // 0x16E0(0x4)
	float CheckAreaPlane_MaxDist; // 0x16E4(0x4)
	float ExplosionCheckSize; // 0x16E8(0x4)
	float ExplosionCheckMaxDistance; // 0x16EC(0x4)
	float ExplosionCheckMaxHeight; // 0x16F0(0x4)
	float ExplosionCheckMaxTime; // 0x16F4(0x4)
	float ExplosionCheckStepTime; // 0x16F8(0x4)
	EPerfGearQualityLevel MobileExplosionMinQualityLevel; // 0x16FC(0x1)
	struct FRotator StartFireRotation; // 0x1700(0xC)
	uint8_t BitPad_0x170D_3 : 5; // 0x170D(0x1)
	uint8_t Pad_0x170E[0x2]; // 0x170E(0x2)

	// Object: Function DFMAbility.DFMAbilityIncendiaryGrenade.TryStickyToTarget
	// Flags: [Final|Native|Private]
	// Offset: 0xc414440
	// Params: [ Num(1) Size(0x8) ]
	void TryStickyToTarget(struct ADFMAbilityDiffuseArea* Area);

	// Object: Function DFMAbility.DFMAbilityIncendiaryGrenade.TrySpawnIncendiaryActor
	// Flags: [Final|Native|Private]
	// Offset: 0xc41442c
	// Params: [ Num(0) Size(0x0) ]
	void TrySpawnIncendiaryActor();

	// Object: Function DFMAbility.DFMAbilityIncendiaryGrenade.IsHitGroundBase
	// Flags: [Final|Native|Protected|HasOutParms|Const]
	// Offset: 0xc414358
	// Params: [ Num(2) Size(0x89) ]
	uint8_t IsHitGroundBase(const struct FHitResult& ImpactResult);

	// Object: Function DFMAbility.DFMAbilityIncendiaryGrenade.CheckAreaPlaneSize
	// Flags: [Final|Native|Private|HasDefaults|Const]
	// Offset: 0xc4142a8
	// Params: [ Num(2) Size(0x18) ]
	struct FVector CheckAreaPlaneSize(struct FVector AreaLocation);
};

// Object: Class DFMAbility.DFMAbilityInstanceAdvancedScan
// Size: 0x58 (Inherited: 0x40)
struct UDFMAbilityInstanceAdvancedScan : UDFMAbilityInstance
{
	DEFINE_UE_CLASS_HELPERS(UDFMAbilityInstanceAdvancedScan, "DFMAbilityInstanceAdvancedScan")

	float ScanCDTime; // 0x3C(0x4)
	float FindPathCDTime; // 0x40(0x4)
	float ScanDistance; // 0x44(0x4)
	float ScanFaceAngle; // 0x48(0x4)
	struct FName FX_P_Scout_AcousticalDetector_Blue; // 0x4C(0x8)

	// Object: Function DFMAbility.DFMAbilityInstanceAdvancedScan.OnScanResult
	// Flags: [Final|Native|Public|HasOutParms]
	// Offset: 0xc414d88
	// Params: [ Num(2) Size(0x18) ]
	void OnScanResult(int32_t InSkillId, const struct TArray<struct AActor*>& InScanArray);

	// Object: Function DFMAbility.DFMAbilityInstanceAdvancedScan.OnFindPathResult
	// Flags: [Final|Native|Public|HasOutParms]
	// Offset: 0xc414c54
	// Params: [ Num(3) Size(0x20) ]
	void OnFindPathResult(int32_t InSkillId, struct AActor* PlayerTarget, const struct TArray<struct FVector>& Paths);

	// Object: Function DFMAbility.DFMAbilityInstanceAdvancedScan.EndScan
	// Flags: [Final|Native|Public]
	// Offset: 0xc414c40
	// Params: [ Num(0) Size(0x0) ]
	void EndScan();

	// Object: Function DFMAbility.DFMAbilityInstanceAdvancedScan.BeginScan
	// Flags: [Final|Native|Public]
	// Offset: 0xc414c2c
	// Params: [ Num(0) Size(0x0) ]
	void BeginScan();
};

// Object: Class DFMAbility.DFMAbilityInstanceRankSkill
// Size: 0x80 (Inherited: 0x40)
struct UDFMAbilityInstanceRankSkill : UDFMAbilityInstance
{
	DEFINE_UE_CLASS_HELPERS(UDFMAbilityInstanceRankSkill, "DFMAbilityInstanceRankSkill")

	struct FMulticastInlineDelegate OnRankSkillFinalCastCheck; // 0x40(0x10)
	uint8_t Pad_0x50[0x18]; // 0x50(0x18)
	struct FName HUDStateName; // 0x68(0x8)
	EGameHUDSate HUDState; // 0x70(0x1)
	uint8_t Pad_0x71[0x3]; // 0x71(0x3)
	float HudStateRate; // 0x74(0x4)
	uint8_t Pad_0x78[0x8]; // 0x78(0x8)

	// Object: Function DFMAbility.DFMAbilityInstanceRankSkill.UpdateRankSkillState
	// Flags: [Native|Public]
	// Offset: 0xc418074
	// Params: [ Num(1) Size(0x1) ]
	void UpdateRankSkillState(uint8_t RefreshReason);

	// Object: Function DFMAbility.DFMAbilityInstanceRankSkill.OnSectorTransEnd
	// Flags: [Native|Public]
	// Offset: 0xc417fc8
	// Params: [ Num(1) Size(0x4) ]
	void OnSectorTransEnd(int32_t ActiveID);

	// Object: Function DFMAbility.DFMAbilityInstanceRankSkill.EnableHudStateCheck
	// Flags: [Final|Native|Public]
	// Offset: 0xc417f1c
	// Params: [ Num(1) Size(0x1) ]
	void EnableHudStateCheck(uint8_t Enable);

	// Object: Function DFMAbility.DFMAbilityInstanceRankSkill.CheckHudStateValid
	// Flags: [Final|Native|Public]
	// Offset: 0xc417f08
	// Params: [ Num(0) Size(0x0) ]
	void CheckHudStateValid();
};

// Object: Class DFMAbility.DFMAbilityInstanceArtilleryShelling
// Size: 0x88 (Inherited: 0x80)
struct UDFMAbilityInstanceArtilleryShelling : UDFMAbilityInstanceRankSkill
{
	DEFINE_UE_CLASS_HELPERS(UDFMAbilityInstanceArtilleryShelling, "DFMAbilityInstanceArtilleryShelling")

	struct AArtilleryShellingTemplate* ShellingAreaTemplate; // 0x80(0x8)
};

// Object: Class DFMAbility.DFMAbilityInstanceAssault
// Size: 0x40 (Inherited: 0x40)
struct UDFMAbilityInstanceAssault : UDFMAbilityInstance
{
	DEFINE_UE_CLASS_HELPERS(UDFMAbilityInstanceAssault, "DFMAbilityInstanceAssault")

	// Object: Function DFMAbility.DFMAbilityInstanceAssault.OnPlayerSlidingTackle
	// Flags: [Final|Native|Public]
	// Offset: 0xc416a88
	// Params: [ Num(1) Size(0x8) ]
	void OnPlayerSlidingTackle(struct AGPCharacter* GPChar);
};

// Object: Class DFMAbility.DFMAbilityInstanceBlastShield
// Size: 0xC8 (Inherited: 0x40)
struct UDFMAbilityInstanceBlastShield : UDFMAbilityInstance
{
	DEFINE_UE_CLASS_HELPERS(UDFMAbilityInstanceBlastShield, "DFMAbilityInstanceBlastShield")

	uint8_t Pad_0x40[0x18]; // 0x40(0x18)
	struct TArray<uint32_t> PlayLeftAnimBuffIDList; // 0x58(0x10)
	struct FName LeftAnimName; // 0x68(0x8)
	struct FText TipsText; // 0x70(0x18)
	struct FText CantSwitchShieldTipsText; // 0x88(0x18)
	float TipsTime; // 0xA0(0x4)
	float DelayAddBuffTime; // 0xA4(0x4)
	uint32_t DelayAddBuffId; // 0xA8(0x4)
	uint32_t StartSkillAddBuffId; // 0xAC(0x4)
	struct TArray<uint32_t> SkillMainBuffIds; // 0xB0(0x10)
	float PassiveMoveDelayCheckSkillWeaponTime; // 0xC0(0x4)
	uint8_t Pad_0xC4[0x4]; // 0xC4(0x4)

	// Object: Function DFMAbility.DFMAbilityInstanceBlastShield.ShowTipsForSwitchWeapon
	// Flags: [Final|Native|Public]
	// Offset: 0xc416cf4
	// Params: [ Num(3) Size(0x10) ]
	void ShowTipsForSwitchWeapon(ECharacterFSMEventDefine Event, float Value, struct UObject* EventObject);

	// Object: Function DFMAbility.DFMAbilityInstanceBlastShield.OnServerRemoveBuff
	// Flags: [Final|Native|Public]
	// Offset: 0xc416c14
	// Params: [ Num(2) Size(0x5) ]
	void OnServerRemoveBuff(uint32_t BuffId, ECharacterPart Part);

	// Object: Function DFMAbility.DFMAbilityInstanceBlastShield.OnServerAddBuff
	// Flags: [Final|Native|Public]
	// Offset: 0xc416b34
	// Params: [ Num(2) Size(0x5) ]
	void OnServerAddBuff(uint32_t BuffId, ECharacterPart Part);
};

// Object: Class DFMAbility.DFMAbilityInstanceMine
// Size: 0x98 (Inherited: 0x40)
struct UDFMAbilityInstanceMine : UDFMAbilityInstance
{
	DEFINE_UE_CLASS_HELPERS(UDFMAbilityInstanceMine, "DFMAbilityInstanceMine")

	ECharingSlot Slot; // 0x3C(0x1)
	struct TSet<struct AActor*> ReadyMineSet; // 0x40(0x50)
	uint8_t Pad_0x91[0x7]; // 0x91(0x7)

	// Object: Function DFMAbility.DFMAbilityInstanceMine.OnAbilitySpawnActorCreated
	// Flags: [Native|Public]
	// Offset: 0xc417c90
	// Params: [ Num(2) Size(0x10) ]
	void OnAbilitySpawnActorCreated(struct AActor* CharacterOwner, struct AActor* SpawnActor);

	// Object: Function DFMAbility.DFMAbilityInstanceMine.ListenSpawnActorCreate
	// Flags: [Event|Public|BlueprintCallable|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(1) Size(0x8) ]
	void ListenSpawnActorCreate(struct AActor* SpawnActor);
};

// Object: Class DFMAbility.DFMAbilityInstanceC204
// Size: 0x98 (Inherited: 0x98)
struct UDFMAbilityInstanceC204 : UDFMAbilityInstanceMine
{
	DEFINE_UE_CLASS_HELPERS(UDFMAbilityInstanceC204, "DFMAbilityInstanceC204")
};

// Object: Class DFMAbility.DFMAbilityInstanceCommanderRankSkill
// Size: 0x1A8 (Inherited: 0x40)
struct UDFMAbilityInstanceCommanderRankSkill : UDFMAbilityInstance
{
	DEFINE_UE_CLASS_HELPERS(UDFMAbilityInstanceCommanderRankSkill, "DFMAbilityInstanceCommanderRankSkill")

	uint8_t Pad_0x40[0x168]; // 0x40(0x168)

	// Object: Function DFMAbility.DFMAbilityInstanceCommanderRankSkill.UpdateCommanderRankSkillState
	// Flags: [Native|Public]
	// Offset: 0xc41713c
	// Params: [ Num(1) Size(0x1) ]
	void UpdateCommanderRankSkillState(uint8_t RefreshReason);

	// Object: Function DFMAbility.DFMAbilityInstanceCommanderRankSkill.OnSectorTransEnd
	// Flags: [Final|Native|Public]
	// Offset: 0xc417098
	// Params: [ Num(1) Size(0x4) ]
	void OnSectorTransEnd(int32_t ActiveID);
};

// Object: Class DFMAbility.DFMAbilityInstanceCruiseMissile
// Size: 0x40 (Inherited: 0x40)
struct UDFMAbilityInstanceCruiseMissile : UDFMAbilityInstance
{
	DEFINE_UE_CLASS_HELPERS(UDFMAbilityInstanceCruiseMissile, "DFMAbilityInstanceCruiseMissile")

	// Object: Function DFMAbility.DFMAbilityInstanceCruiseMissile.OnPassiveMoveAction
	// Flags: [Final|Native|Public]
	// Offset: 0xc4172b0
	// Params: [ Num(1) Size(0x1) ]
	void OnPassiveMoveAction(uint8_t IsActive);

	// Object: Function DFMAbility.DFMAbilityInstanceCruiseMissile.OnEscaping
	// Flags: [Final|Native|Public]
	// Offset: 0xc41729c
	// Params: [ Num(0) Size(0x0) ]
	void OnEscaping();

	// Object: Function DFMAbility.DFMAbilityInstanceCruiseMissile.OnBeingAssassinate
	// Flags: [Final|Native|Public]
	// Offset: 0xc4171f0
	// Params: [ Num(1) Size(0x1) ]
	void OnBeingAssassinate(uint8_t bCarried);
};

// Object: Class DFMAbility.DFMAbilityInstanceDefense
// Size: 0xC0 (Inherited: 0x40)
struct UDFMAbilityInstanceDefense : UDFMAbilityInstance
{
	DEFINE_UE_CLASS_HELPERS(UDFMAbilityInstanceDefense, "DFMAbilityInstanceDefense")

	struct FDefenseConfig DefaultConfig; // 0x40(0x20)
	struct FDefenseConfig MpConfig; // 0x60(0x20)
	struct TArray<struct AActor*> SkillProps; // 0x80(0x10)
	uint8_t Pad_0x90[0x30]; // 0x90(0x30)

	// Object: Function DFMAbility.DFMAbilityInstanceDefense.OnSkillPropSpawned
	// Flags: [Final|Native|Public]
	// Offset: 0xc41758c
	// Params: [ Num(1) Size(0x8) ]
	void OnSkillPropSpawned(struct AActor* Actor);

	// Object: Function DFMAbility.DFMAbilityInstanceDefense.OnSkillPropDestroyed
	// Flags: [Final|Native|Public]
	// Offset: 0xc4174e8
	// Params: [ Num(1) Size(0x8) ]
	void OnSkillPropDestroyed(struct AActor* Actor);

	// Object: Function DFMAbility.DFMAbilityInstanceDefense.CheckNeedAddBuff
	// Flags: [Final|Native|Public]
	// Offset: 0xc4174d4
	// Params: [ Num(0) Size(0x0) ]
	void CheckNeedAddBuff();
};

// Object: Class DFMAbility.DFMAbilityInstanceDetector
// Size: 0x40 (Inherited: 0x40)
struct UDFMAbilityInstanceDetector : UDFMAbilityInstance
{
	DEFINE_UE_CLASS_HELPERS(UDFMAbilityInstanceDetector, "DFMAbilityInstanceDetector")
};

// Object: Class DFMAbility.DFMAbilityInstanceEngineer
// Size: 0xA0 (Inherited: 0x40)
struct UDFMAbilityInstanceEngineer : UDFMAbilityInstance
{
	DEFINE_UE_CLASS_HELPERS(UDFMAbilityInstanceEngineer, "DFMAbilityInstanceEngineer")

	ECharacterQTEStateRight QTEState; // 0x3C(0x1)
	struct FAbilityBlackBorad_EngineerData BBData_EngineerData; // 0x40(0x38)
	uint8_t Pad_0x79[0xF]; // 0x79(0xF)
	struct FEnginVehicleChargingData EnginVehicleChargingData; // 0x88(0xC)
	uint8_t InitButtonVisible : 1; // 0x94(0x1), Mask(0x1)
	uint8_t BitPad_0x94_1 : 7; // 0x94(0x1)
	uint8_t Pad_0x95[0x3]; // 0x95(0x3)
	float PowerChargingPercentRatePersec; // 0x98(0x4)
	float PowerChargingInterval; // 0x9C(0x4)

	// Object: Function DFMAbility.DFMAbilityInstanceEngineer.SetEngineVehicleRecycleData
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xc417934
	// Params: [ Num(2) Size(0x8) ]
	void SetEngineVehicleRecycleData(float HealthPercent, float PowerPercent);

	// Object: Function DFMAbility.DFMAbilityInstanceEngineer.SetButtonVisible
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xeea031c
	// Params: [ Num(1) Size(0x1) ]
	void SetButtonVisible(uint8_t Visible);

	// Object: Function DFMAbility.DFMAbilityInstanceEngineer.ResetEngineVehicleRecycleData
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xc417920
	// Params: [ Num(0) Size(0x0) ]
	void ResetEngineVehicleRecycleData();

	// Object: Function DFMAbility.DFMAbilityInstanceEngineer.OverrideSkillUISlot
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xef1a1d8
	// Params: [ Num(2) Size(0x2) ]
	void OverrideSkillUISlot(uint8_t bOverride, ESkillUISlot NewUISlot);

	// Object: Function DFMAbility.DFMAbilityInstanceEngineer.OnAddDamageModifyItem
	// Flags: [Final|Native|Public]
	// Offset: 0xc417804
	// Params: [ Num(3) Size(0x18) ]
	void OnAddDamageModifyItem(struct FName Item, float Value, struct AGPCharacterBase* CHARACTER);

	// Object: Function DFMAbility.DFMAbilityInstanceEngineer.OnAbilitySpawnActorTrigger
	// Flags: [Native|Public]
	// Offset: 0xe7a8280
	// Params: [ Num(3) Size(0x14) ]
	void OnAbilitySpawnActorTrigger(struct AActor* CharacterOwner, struct AActor* SpawnActor, int32_t TriggerType);

	// Object: Function DFMAbility.DFMAbilityInstanceEngineer.OnAbilitySpawnActorCreated
	// Flags: [Native|Public]
	// Offset: 0xc417720
	// Params: [ Num(2) Size(0x10) ]
	void OnAbilitySpawnActorCreated(struct AActor* CharacterOwner, struct AActor* SpawnActor);

	// Object: Function DFMAbility.DFMAbilityInstanceEngineer.ListenSpawnActorTrigger
	// Flags: [Event|Public|BlueprintCallable|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(2) Size(0x10) ]
	void ListenSpawnActorTrigger(EAbilityDetectorTriggerType TriggerType, struct AActor* SpawnActor);

	// Object: Function DFMAbility.DFMAbilityInstanceEngineer.ListenSpawnActorCreate
	// Flags: [Event|Public|BlueprintCallable|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(1) Size(0x8) ]
	void ListenSpawnActorCreate(struct AActor* SpawnActor);

	// Object: Function DFMAbility.DFMAbilityInstanceEngineer.IsVehicleValid
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0xc4176e8
	// Params: [ Num(1) Size(0x1) ]
	uint8_t IsVehicleValid();

	// Object: Function DFMAbility.DFMAbilityInstanceEngineer.EngineVehivleStopCharging
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xc4176d4
	// Params: [ Num(0) Size(0x0) ]
	void EngineVehivleStopCharging();

	// Object: Function DFMAbility.DFMAbilityInstanceEngineer.EngineVehicleStartCharging
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xc4176c0
	// Params: [ Num(0) Size(0x0) ]
	void EngineVehicleStartCharging();
};

// Object: Class DFMAbility.DFMAbilityInstanceLiquidNitrogen
// Size: 0x40 (Inherited: 0x40)
struct UDFMAbilityInstanceLiquidNitrogen : UDFMAbilityInstance
{
	DEFINE_UE_CLASS_HELPERS(UDFMAbilityInstanceLiquidNitrogen, "DFMAbilityInstanceLiquidNitrogen")

	uint32_t SwitchBuffID; // 0x3C(0x4)
};

// Object: Class DFMAbility.DFMAbilityInstanceMauriceAura
// Size: 0x98 (Inherited: 0x40)
struct UDFMAbilityInstanceMauriceAura : UDFMAbilityInstance
{
	DEFINE_UE_CLASS_HELPERS(UDFMAbilityInstanceMauriceAura, "DFMAbilityInstanceMauriceAura")

	uint8_t bAutoActive : 1; // 0x3C(0x1), Mask(0x1)
	struct FMauriceAuraConfig BuffConfig; // 0x40(0x20)
	uint8_t bOnlyC501CanActive : 1; // 0x60(0x1), Mask(0x1)
	uint8_t BitPad_0x60_2 : 6; // 0x60(0x1)
	uint8_t Pad_0x61[0x37]; // 0x61(0x37)

	// Object: Function DFMAbility.DFMAbilityInstanceMauriceAura.CheckAuraLogic
	// Flags: [Final|Native|Protected]
	// Offset: 0xc417bec
	// Params: [ Num(0) Size(0x0) ]
	void CheckAuraLogic();
};

// Object: Class DFMAbility.DFMAbilityInstanceRankSkillNightVision
// Size: 0x80 (Inherited: 0x80)
struct UDFMAbilityInstanceRankSkillNightVision : UDFMAbilityInstanceRankSkill
{
	DEFINE_UE_CLASS_HELPERS(UDFMAbilityInstanceRankSkillNightVision, "DFMAbilityInstanceRankSkillNightVision")
};

// Object: Class DFMAbility.DFMAbilityInstanceRankSkillRebornFlag
// Size: 0xE0 (Inherited: 0x80)
struct UDFMAbilityInstanceRankSkillRebornFlag : UDFMAbilityInstanceRankSkill
{
	DEFINE_UE_CLASS_HELPERS(UDFMAbilityInstanceRankSkillRebornFlag, "DFMAbilityInstanceRankSkillRebornFlag")

	struct TSoftClassPtr<struct ARankSkillRebornFlag*> RebornFlagClass; // 0x80(0x28)
	int32_t CheckClientSelectPosValidDis; // 0xA8(0x4)
	uint8_t Pad_0xAC[0x4]; // 0xAC(0x4)
	struct TSoftClassPtr<struct ARankSkillPreviewPlacementActor*> SelectPositionActorClass; // 0xB0(0x28)
	struct ARankSkillPreviewPlacementActor* SelectPosActor; // 0xD8(0x8)
};

// Object: Class DFMAbility.DFMAbilityInstanceRelink
// Size: 0x40 (Inherited: 0x40)
struct UDFMAbilityInstanceRelink : UDFMAbilityInstance
{
	DEFINE_UE_CLASS_HELPERS(UDFMAbilityInstanceRelink, "DFMAbilityInstanceRelink")

	// Object: Function DFMAbility.DFMAbilityInstanceRelink.OnRelinkEnableInfoChange
	// Flags: [Final|Native|Public]
	// Offset: 0xc41814c
	// Params: [ Num(2) Size(0x18) ]
	void OnRelinkEnableInfoChange(struct AGPCharacter* CHARACTER, struct FRelinkEnableInfo RelinkEnableInfo);

	// Object: Function DFMAbility.DFMAbilityInstanceRelink.OnLocalFocusChange
	// Flags: [Final|Native|Public]
	// Offset: 0x10b276b4
	// Params: [ Num(2) Size(0x10) ]
	void OnLocalFocusChange(struct AActor* OldTarget, struct AActor* NewTarget);
};

// Object: Class DFMAbility.DFMAbilityInstanceRemoteVehicle
// Size: 0x40 (Inherited: 0x40)
struct UDFMAbilityInstanceRemoteVehicle : UDFMAbilityInstance
{
	DEFINE_UE_CLASS_HELPERS(UDFMAbilityInstanceRemoteVehicle, "DFMAbilityInstanceRemoteVehicle")

	// Object: Function DFMAbility.DFMAbilityInstanceRemoteVehicle.OnPassiveMoveAction
	// Flags: [Final|Native|Private]
	// Offset: 0xc418454
	// Params: [ Num(1) Size(0x1) ]
	void OnPassiveMoveAction(uint8_t IsActive);

	// Object: Function DFMAbility.DFMAbilityInstanceRemoteVehicle.OnEscaping
	// Flags: [Final|Native|Private]
	// Offset: 0xc418440
	// Params: [ Num(0) Size(0x0) ]
	void OnEscaping();

	// Object: Function DFMAbility.DFMAbilityInstanceRemoteVehicle.OnBeingAssassinate
	// Flags: [Final|Native|Private]
	// Offset: 0xc418394
	// Params: [ Num(1) Size(0x1) ]
	void OnBeingAssassinate(uint8_t bCarried);
};

// Object: Class DFMAbility.DFMAbilityInstanceRush
// Size: 0x60 (Inherited: 0x40)
struct UDFMAbilityInstanceRush : UDFMAbilityInstance
{
	DEFINE_UE_CLASS_HELPERS(UDFMAbilityInstanceRush, "DFMAbilityInstanceRush")

	int32_t TotalUseCount; // 0x3C(0x4)
	int32_t CurrentUseCount; // 0x40(0x4)
	uint8_t bIsRunning : 1; // 0x44(0x1), Mask(0x1)
	struct FText TipsText; // 0x48(0x18)
};

// Object: Class DFMAbility.DFMAbilityInstanceSelfCure
// Size: 0x50 (Inherited: 0x40)
struct UDFMAbilityInstanceSelfCure : UDFMAbilityInstance
{
	DEFINE_UE_CLASS_HELPERS(UDFMAbilityInstanceSelfCure, "DFMAbilityInstanceSelfCure")

	uint8_t Pad_0x40[0x8]; // 0x40(0x8)
	float HealthShowPercent; // 0x48(0x4)
	ECharingSlot SkillCharingSlot; // 0x4C(0x1)
	uint8_t Pad_0x4D[0x3]; // 0x4D(0x3)

	// Object: Function DFMAbility.DFMAbilityInstanceSelfCure.OnCharaterHealthChange
	// Flags: [Final|Native|Public]
	// Offset: 0xc41870c
	// Params: [ Num(0) Size(0x0) ]
	void OnCharaterHealthChange();

	// Object: Function DFMAbility.DFMAbilityInstanceSelfCure.ListenHealthEvent
	// Flags: [Event|Public|BlueprintCallable|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(4) Size(0x10) ]
	void ListenHealthEvent(int32_t change, int32_t cur, int32_t Max, float Percent);

	// Object: Function DFMAbility.DFMAbilityInstanceSelfCure.GetHealthTipsActionText
	// Flags: [Event|Public|BlueprintCallable|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(1) Size(0x18) ]
	struct FText GetHealthTipsActionText();

	// Object: Function DFMAbility.DFMAbilityInstanceSelfCure.GetHealthTipsActionName
	// Flags: [Event|Public|BlueprintCallable|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(1) Size(0x8) ]
	struct FName GetHealthTipsActionName();
};

// Object: Class DFMAbility.DFMAbilityInstanceSlotWeaponSwitch
// Size: 0x48 (Inherited: 0x40)
struct UDFMAbilityInstanceSlotWeaponSwitch : UDFMAbilityInstance
{
	DEFINE_UE_CLASS_HELPERS(UDFMAbilityInstanceSlotWeaponSwitch, "DFMAbilityInstanceSlotWeaponSwitch")

	uint32_t TargetWeaponSlot; // 0x3C(0x4)
	uint32_t SwitchBuffID; // 0x40(0x4)
	EWeaponSwitchType NormalSwitchType; // 0x44(0x1)
	EWeaponSwitchType FastSwitchType; // 0x45(0x1)
	EWeaponSwitchType BuffEndSwitchBackType; // 0x46(0x1)
};

// Object: Class DFMAbility.DFMAbilityInstanceSmokeWall
// Size: 0x48 (Inherited: 0x40)
struct UDFMAbilityInstanceSmokeWall : UDFMAbilityInstance
{
	DEFINE_UE_CLASS_HELPERS(UDFMAbilityInstanceSmokeWall, "DFMAbilityInstanceSmokeWall")

	struct AActor* CurrentUAS; // 0x40(0x8)

	// Object: Function DFMAbility.DFMAbilityInstanceSmokeWall.OnClientInputLieDownEvent
	// Flags: [Final|Native|Public]
	// Offset: 0xc4188a4
	// Params: [ Num(3) Size(0x10) ]
	void OnClientInputLieDownEvent(ECharacterFSMEventDefine FSMEvent, float Value, struct UObject* EventObject);
};

// Object: Class DFMAbility.DFMAbilityInstanceSupport
// Size: 0x40 (Inherited: 0x40)
struct UDFMAbilityInstanceSupport : UDFMAbilityInstance
{
	DEFINE_UE_CLASS_HELPERS(UDFMAbilityInstanceSupport, "DFMAbilityInstanceSupport")

	uint8_t PlayingMedicRot : 1; // 0x3C(0x1), Mask(0x1)
};

// Object: Class DFMAbility.DFMAbilityLevelActorManager
// Size: 0x3C0 (Inherited: 0x370)
struct ADFMAbilityLevelActorManager : ALevelSubsystem
{
	DEFINE_UE_CLASS_HELPERS(ADFMAbilityLevelActorManager, "DFMAbilityLevelActorManager")

	struct TArray<struct ADFMAbilityLevelActor*> AbilityLevelActorArray; // 0x370(0x10)
	struct TArray<struct AGPWeaponBulletBase*> ProjectileArray; // 0x380(0x10)
	struct TArray<struct ARebornFlag*> RebornFlags; // 0x390(0x10)
	struct TArray<struct AActor*> PlacementActorArray; // 0x3A0(0x10)
	struct TArray<struct ADFMAbilityActor*> AbilityActorArray; // 0x3B0(0x10)

	// Object: Function DFMAbility.DFMAbilityLevelActorManager.UnRegisterProjectile
	// Flags: [Final|Native|Public]
	// Offset: 0xf1ff728
	// Params: [ Num(1) Size(0x8) ]
	void UnRegisterProjectile(struct AGPWeaponBulletBase* InProjectile);

	// Object: Function DFMAbility.DFMAbilityLevelActorManager.RegisterProjectile
	// Flags: [Final|Native|Public]
	// Offset: 0xf6e0a10
	// Params: [ Num(1) Size(0x8) ]
	void RegisterProjectile(struct AGPWeaponBulletBase* InProjectile);

	// Object: Function DFMAbility.DFMAbilityLevelActorManager.OnServerArenaRoundRearrange
	// Flags: [Final|Native|Public]
	// Offset: 0xc41b330
	// Params: [ Num(1) Size(0x4) ]
	void OnServerArenaRoundRearrange(int32_t InRound);

	// Object: Function DFMAbility.DFMAbilityLevelActorManager.OnBattleFieldPropSkillChanged
	// Flags: [Final|Native|Public]
	// Offset: 0xc41b28c
	// Params: [ Num(1) Size(0x8) ]
	void OnBattleFieldPropSkillChanged(struct AGPCharacter* InCharacter);

	// Object: Function DFMAbility.DFMAbilityLevelActorManager.IsServer
	// Flags: [Final|Native|Public]
	// Offset: 0xc41b254
	// Params: [ Num(1) Size(0x1) ]
	uint8_t IsServer();
};

// Object: Class DFMAbility.DFMAbilityLogicTemplate
// Size: 0x9A0 (Inherited: 0x520)
struct ADFMAbilityLogicTemplate : AGPAbilityLogicTemplate
{
	DEFINE_UE_CLASS_HELPERS(ADFMAbilityLogicTemplate, "DFMAbilityLogicTemplate")

	struct UQA_AbilityLogicTask* EmptyTask; // 0x520(0x8)
	struct FName CurrentRealName; // 0x528(0x8)
	int32_t CurrentLogicID; // 0x530(0x4)
	uint8_t Pad_0x534[0x4]; // 0x534(0x4)
	struct TMap<struct FName, int32_t> LogicTemplateRealNameMap; // 0x538(0x50)
	struct TArray<struct UQA_AbilityLogicTask*> LogicTemplates; // 0x588(0x10)
	struct TMap<struct FName, int32_t> LogicTemplateNameMap; // 0x598(0x50)
	struct UQA_AbilityLogicTask* LastQA; // 0x5E8(0x8)
	struct FName LastStateName; // 0x5F0(0x8)
	EAbilityTriggerType LastTriggerType; // 0x5F8(0x1)
	uint8_t Pad_0x5F9[0x7]; // 0x5F9(0x7)
	struct UQA_AbilityLogicTask* ListenerEntry; // 0x600(0x8)
	struct UQA_AbilityLogicTask* ListenerEntryBase; // 0x608(0x8)
	uint8_t bCollectedFromDs : 1; // 0x610(0x1), Mask(0x1)
	uint8_t BitPad_0x610_1 : 7; // 0x610(0x1)
	uint8_t Pad_0x611[0x3]; // 0x611(0x3)
	int32_t CollectProcess; // 0x614(0x4)
	struct FTimerHandle AutoPlayTimerHandle; // 0x618(0x8)
	struct FTimerHandle SpawnTimerHandle; // 0x620(0x8)
	struct TArray<struct UQA_AbilityLogicTask*> LogicCalls; // 0x628(0x10)
	uint8_t Pad_0x638[0x8]; // 0x638(0x8)
	struct FAbilityShareMemory AbilityShareMemory; // 0x640(0x20)
	struct TMap<ESkillBehavior, struct FSkillBehaviorData> SkillBehaviorMap; // 0x660(0x50)
	struct TMap<ESkillBehavior, struct FSkillBehaviorData> SkillBehaviorMapBase; // 0x6B0(0x50)
	struct TMap<ESkillBtnCall, struct FSkillBtnCallData> BehaviorGroupMap; // 0x700(0x50)
	struct TMap<ESkillBtnCall, struct FSkillBtnCallData> BehaviorGroupMapBase; // 0x750(0x50)
	struct TMap<EFSMGamePlayStatusDefine, int32_t> FSMStatusMapBase; // 0x7A0(0x50)
	struct TArray<int32_t> EntryNames; // 0x7F0(0x10)
	struct TArray<struct FAbiltyTemplateAttachMeshConfig> AttachConfigList; // 0x800(0x10)
	struct FEndAbilityOption EndAbilityOption; // 0x810(0x3)
	uint8_t bUseSoftPathPreLoad : 1; // 0x813(0x1), Mask(0x1)
	uint8_t BitPad_0x813_1 : 7; // 0x813(0x1)
	uint8_t Pad_0x814[0x4]; // 0x814(0x4)
	struct TArray<struct FName> PreLoadCharacterAnimations; // 0x818(0x10)
	struct TArray<struct FName> PreloadAttachMesh; // 0x828(0x10)
	struct TArray<struct FName> Black1pPreloadList; // 0x838(0x10)
	struct TArray<struct TSoftClassPtr<struct UObject*>> ActorClassSoftPathPreLoad; // 0x848(0x10)
	struct TArray<struct TSoftObjectPtr<UObject>> ActorObjectSoftPathPreLoad; // 0x858(0x10)
	struct FName LoadResouceNodeName; // 0x868(0x8)
	struct FName TemplateAssetName; // 0x870(0x8)
	float CreateNodeDeltaTime; // 0x878(0x4)
	uint8_t Pad_0x87C[0x4]; // 0x87C(0x4)
	struct TArray<struct TSoftObjectPtr<UAnimMontage>> PreloadMontageToPlay; // 0x880(0x10)
	struct TMap<struct FName, struct UObject*> MontageResouceMap; // 0x890(0x50)
	struct TMap<struct FName, struct FAbilityMontageLoadHadnle> LoadedResourceHandle; // 0x8E0(0x50)
	struct TMap<struct FName, uint64_t> PreloadHandle; // 0x930(0x50)
	struct TArray<struct FName> GlobalPreLoadCharacterAnimations; // 0x980(0x10)
	struct TArray<struct FName> GlobalPreloadAttachMesh; // 0x990(0x10)

	// Object: Function DFMAbility.DFMAbilityLogicTemplate.WeaponProjectileSpawnActorCallback
	// Flags: [Event|Public|BlueprintCallable|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(4) Size(0x18) ]
	void WeaponProjectileSpawnActorCallback(int32_t skillEntityIndex, int32_t LogicID, struct AActor* Actor, struct FName ActorName);

	// Object: Function DFMAbility.DFMAbilityLogicTemplate.UpdateFootStepAudioStyleID
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xc41c338
	// Params: [ Num(2) Size(0x8) ]
	void UpdateFootStepAudioStyleID(int32_t skillEntityIndex, int32_t AudioStyleId);

	// Object: Function DFMAbility.DFMAbilityLogicTemplate.UpdateAvatarMesh1P
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xc41c214
	// Params: [ Num(3) Size(0xD) ]
	void UpdateAvatarMesh1P(int32_t skillEntityIndex, struct FName MeshName, uint8_t bIs1P);

	// Object: Function DFMAbility.DFMAbilityLogicTemplate.SwitchAvatarMeshToMasterPose
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x10026784
	// Params: [ Num(3) Size(0xD) ]
	void SwitchAvatarMeshToMasterPose(int32_t skillEntityIndex, struct FName MeshName, uint8_t MasterPose);

	// Object: Function DFMAbility.DFMAbilityLogicTemplate.SpawnActorCallback
	// Flags: [Event|Public|BlueprintCallable|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(4) Size(0x18) ]
	void SpawnActorCallback(int32_t skillEntityIndex, int32_t LogicID, struct AActor* Actor, struct FName ActorName);

	// Object: Function DFMAbility.DFMAbilityLogicTemplate.ShowUIStateTips
	// Flags: [Event|Public|BlueprintCallable|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(3) Size(0xC) ]
	void ShowUIStateTips(int32_t skillEntityIndex, ESkillUIState State, float Time);

	// Object: Function DFMAbility.DFMAbilityLogicTemplate.SetSheildHealth
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xc41c0fc
	// Params: [ Num(3) Size(0xC) ]
	void SetSheildHealth(int32_t skillEntityIndex, float Init, float Max);

	// Object: Function DFMAbility.DFMAbilityLogicTemplate.SetForbidSOLOverloadBuff
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xc41c018
	// Params: [ Num(2) Size(0x5) ]
	void SetForbidSOLOverloadBuff(int32_t skillEntityIndex, uint8_t NewForbidSOLOverloadBuff);

	// Object: Function DFMAbility.DFMAbilityLogicTemplate.SetAvatarMaterialParams
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xc41be88
	// Params: [ Num(5) Size(0x1C) ]
	void SetAvatarMaterialParams(int32_t skillEntityIndex, struct FName MeshName, struct FName ParamsKey, float Value, int32_t Slot);

	// Object: Function DFMAbility.DFMAbilityLogicTemplate.SetAbilityData
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xc41bd7c
	// Params: [ Num(2) Size(0x3C0) ]
	void SetAbilityData(int32_t skillEntityIndex, struct FGPAbilityEntityData Data);

	// Object: Function DFMAbility.DFMAbilityLogicTemplate.PlayMontage
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x10944df8
	// Params: [ Num(6) Size(0x48) ]
	void PlayMontage(int32_t skillEntityIndex, struct USkeletalMeshComponent* InSkeletalMeshComponent, struct TSoftObjectPtr<UAnimMontage> montageToPlay, float PlayRate, float StartingPosition, struct FName StartingSection);

	// Object: Function DFMAbility.DFMAbilityLogicTemplate.OnWeaponZoomingStateChange
	// Flags: [Event|Public|BlueprintCallable|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(2) Size(0x5) ]
	void OnWeaponZoomingStateChange(int32_t skillEntityIndex, uint8_t isZoom);

	// Object: Function DFMAbility.DFMAbilityLogicTemplate.OnLoadedMontage
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults]
	// Offset: 0xc41bcbc
	// Params: [ Num(1) Size(0x18) ]
	void OnLoadedMontage(const struct FSoftObjectPath& SoftObjectPath);

	// Object: Function DFMAbility.DFMAbilityLogicTemplate.OnGPAbilityTriggerBehaviorNoCast
	// Flags: [Final|Native|Public]
	// Offset: 0xc41bbdc
	// Params: [ Num(2) Size(0x9) ]
	void OnGPAbilityTriggerBehaviorNoCast(struct AGPCharacter* CHARACTER, ESkillBehavior Behavior);

	// Object: Function DFMAbility.DFMAbilityLogicTemplate.OnAddDamageModifyItem
	// Flags: [Event|Public|BlueprintCallable|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(3) Size(0x10) ]
	void OnAddDamageModifyItem(int32_t skillEntityIndex, struct FName Item, float Value);

	// Object: Function DFMAbility.DFMAbilityLogicTemplate.LogicFlow_ListenerBase
	// Flags: [Event|Public|BlueprintCallable|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(0) Size(0x0) ]
	void LogicFlow_ListenerBase();

	// Object: Function DFMAbility.DFMAbilityLogicTemplate.LogicFlow_Listener
	// Flags: [Event|Public|BlueprintCallable|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(0) Size(0x0) ]
	void LogicFlow_Listener();

	// Object: Function DFMAbility.DFMAbilityLogicTemplate.IsEquipingWeapon
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0xc41baf4
	// Params: [ Num(3) Size(0x9) ]
	uint8_t IsEquipingWeapon(int32_t skillEntityIndex, int32_t WeaponSlot);

	// Object: Function DFMAbility.DFMAbilityLogicTemplate.Is1P
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x10168ba4
	// Params: [ Num(3) Size(0x6) ]
	uint8_t Is1P(int32_t skillEntityIndex, uint8_t IncludeLive);

	// Object: Function DFMAbility.DFMAbilityLogicTemplate.GetUIState
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0xc41ba48
	// Params: [ Num(2) Size(0x5) ]
	ESkillUIState GetUIState(int32_t skillEntityIndex);

	// Object: Function DFMAbility.DFMAbilityLogicTemplate.GetSkillNetMode
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0xc41b99c
	// Params: [ Num(2) Size(0x5) ]
	ENetMode GetSkillNetMode(int32_t skillEntityIndex);

	// Object: Function DFMAbility.DFMAbilityLogicTemplate.GetSkillENetRole
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0xc41b8f0
	// Params: [ Num(2) Size(0x5) ]
	ENetRole GetSkillENetRole(int32_t skillEntityIndex);

	// Object: Function DFMAbility.DFMAbilityLogicTemplate.GetSheildHealth
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	// Offset: 0x1078ed64
	// Params: [ Num(3) Size(0xC) ]
	void GetSheildHealth(int32_t skillEntityIndex, float& cur, float& Max);

	// Object: Function DFMAbility.DFMAbilityLogicTemplate.GetGamePlayMode
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xc41b8bc
	// Params: [ Num(1) Size(0x1) ]
	EDFMGamePlayMode GetGamePlayMode();

	// Object: Function DFMAbility.DFMAbilityLogicTemplate.GetCurrentRealName
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0xfbc0a28
	// Params: [ Num(1) Size(0x8) ]
	struct FName GetCurrentRealName();

	// Object: Function DFMAbility.DFMAbilityLogicTemplate.GetAbilityLogic
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xc41b810
	// Params: [ Num(2) Size(0x10) ]
	struct UQA_AbilityLogicTask* GetAbilityLogic(int32_t LogicID);

	// Object: Function DFMAbility.DFMAbilityLogicTemplate.GetAbilityData
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0xc41b75c
	// Params: [ Num(2) Size(0x3C0) ]
	struct FGPAbilityEntityData GetAbilityData(int32_t skillEntityIndex);

	// Object: Function DFMAbility.DFMAbilityLogicTemplate.GetAbilityCharacter
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x1093f4b0
	// Params: [ Num(2) Size(0x10) ]
	struct ADFMCharacter* GetAbilityCharacter(int32_t skillEntityIndex);

	// Object: Function DFMAbility.DFMAbilityLogicTemplate.GetAbility
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0xf4b2a2c
	// Params: [ Num(2) Size(0x10) ]
	struct UDFMAbilityInstance* GetAbility(int32_t skillEntityIndex);

	// Object: Function DFMAbility.DFMAbilityLogicTemplate.FunctionTrigger
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xf816298
	// Params: [ Num(4) Size(0x14) ]
	void FunctionTrigger(int32_t skillEntityIndex, struct FName LogicName, EAbilityTriggerType Type, int32_t Index);

	// Object: Function DFMAbility.DFMAbilityLogicTemplate.ForbitWeaponReciol
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xc41b678
	// Params: [ Num(2) Size(0x5) ]
	void ForbitWeaponReciol(int32_t skillEntityIndex, uint8_t forbit);

	// Object: Function DFMAbility.DFMAbilityLogicTemplate.BreakThrouthScoreInBluePrint
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xf7c6cb4
	// Params: [ Num(2) Size(0x8) ]
	void BreakThrouthScoreInBluePrint(int32_t skillEntityIndex, int32_t ScoreName);

	// Object: Function DFMAbility.DFMAbilityLogicTemplate.BreakThrouthScore
	// Flags: [Final|Native|Public]
	// Offset: 0xc41b59c
	// Params: [ Num(2) Size(0x8) ]
	void BreakThrouthScore(int32_t skillEntityIndex, EScoreName ScoreName);

	// Object: Function DFMAbility.DFMAbilityLogicTemplate.BP_SetBPAnimIndex
	// Flags: [Event|Public|BlueprintCallable|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(5) Size(0x19) ]
	void BP_SetBPAnimIndex(int32_t skillEntityIndex, struct UGPSkeletalMeshComponent* ItemMesh, int32_t AnimIndex, float PlayRate, uint8_t bLoopAnim);
};

// Object: Class DFMAbility.DFMAbilityMarkerDetector
// Size: 0x9F0 (Inherited: 0x9E8)
struct ADFMAbilityMarkerDetector : ADFMAbilityBuffDetector
{
	DEFINE_UE_CLASS_HELPERS(ADFMAbilityMarkerDetector, "DFMAbilityMarkerDetector")

	float Height; // 0x9E4(0x4)
	float Gravity; // 0x9E8(0x4)
};

// Object: Class DFMAbility.DFMAbilitySensorDetector
// Size: 0xAF8 (Inherited: 0x9E8)
struct ADFMAbilitySensorDetector : ADFMAbilityBuffDetector
{
	DEFINE_UE_CLASS_HELPERS(ADFMAbilitySensorDetector, "DFMAbilitySensorDetector")

	int32_t TotalScanTimes_BF; // 0x9E4(0x4)
	float ScanInterval_BF; // 0x9E8(0x4)
	float ScanSpeed_BF; // 0x9EC(0x4)
	float MaxScanDistance_BF; // 0x9F0(0x4)
	int32_t TotalScanTimes_SOL; // 0x9F4(0x4)
	float ScanInterval_SOL; // 0x9F8(0x4)
	float ScanSpeed_SOL; // 0x9FC(0x4)
	float MaxScanDistance_SOL; // 0xA00(0x4)
	float TickScanTime; // 0xA04(0x4)
	uint8_t bRemovePadingCharacterWhenEndOverlap : 1; // 0xA08(0x1), Mask(0x1)
	uint8_t BitPad_0xA0C_1 : 7; // 0xA0C(0x1)
	uint8_t Pad_0xA0D[0x3]; // 0xA0D(0x3)
	struct TArray<struct AActor*> PendingCharacters; // 0xA10(0x10)
	uint8_t Pad_0xA20[0x30]; // 0xA20(0x30)
	struct TSet<int32_t> ScanCharacterSet; // 0xA50(0x50)
	struct TSet<int32_t> ScanEnermyCharacterSet; // 0xAA0(0x50)
	int32_t ScanEnermyCharacterSetNum; // 0xAF0(0x4)
	uint8_t Pad_0xAF4[0x4]; // 0xAF4(0x4)

	// Object: Function DFMAbility.DFMAbilitySensorDetector.BP_ApplySensorEffect
	// Flags: [Event|Public|BlueprintCallable|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(0) Size(0x0) ]
	void BP_ApplySensorEffect();
};

// Object: Class DFMAbility.DFMAbilityMedic
// Size: 0xD48 (Inherited: 0xAF8)
struct ADFMAbilityMedic : ADFMAbilitySensorDetector
{
	DEFINE_UE_CLASS_HELPERS(ADFMAbilityMedic, "DFMAbilityMedic")

	uint8_t Pad_0xAF8[0x20]; // 0xAF8(0x20)
	struct FName PanelName; // 0xB18(0x8)
	float BigMapRange; // 0xB20(0x4)
	float YawOffset; // 0xB24(0x4)
	struct TArray<struct FAbilityDetectorBuffData> OverlapAddBuffIDs; // 0xB28(0x10)
	float CureTeammateTime; // 0xB38(0x4)
	float CheckImpendingDeathInterval; // 0xB3C(0x4)
	float LineTraceTimeRate; // 0xB40(0x4)
	float LastLineTraceTimeTamp; // 0xB44(0x4)
	uint8_t bUseRepData : 1; // 0xB48(0x1), Mask(0x1)
	uint8_t BitPad_0xB48_1 : 7; // 0xB48(0x1)
	uint8_t bUseSmokeWallMovement : 1; // 0xB49(0x1), Mask(0x1)
	uint8_t BitPad_0xB49_1 : 7; // 0xB49(0x1)
	uint8_t bUsePilotMove : 1; // 0xB4A(0x1), Mask(0x1)
	uint8_t BitPad_0xB4A_1 : 7; // 0xB4A(0x1)
	uint8_t Pad_0xB4B[0x1]; // 0xB4B(0x1)
	float NoParentMeshUpSpeed; // 0xB4C(0x4)
	float MaxFlyDistance; // 0xB50(0x4)
	float MaxFlyTime; // 0xB54(0x4)
	struct UGPUASMovementComponent* DeformableActorMovementClass; // 0xB58(0x8)
	struct UGPUASMovementComponent* DeformableActorMovementClass_Pilot; // 0xB60(0x8)
	struct FName ImpackName; // 0xB68(0x8)
	struct FName LastImpackName; // 0xB70(0x8)
	struct FName WaterDragTailFXName; // 0xB78(0x8)
	struct FName EnterWaterSurfaceFXName; // 0xB80(0x8)
	struct FName LeaveWaterSurfaceFXName; // 0xB88(0x8)
	struct FName RippleFXName; // 0xB90(0x8)
	struct FLinearColor SelfColor; // 0xB98(0x10)
	struct FLinearColor TeamColor; // 0xBA8(0x10)
	struct FLinearColor CampColor; // 0xBB8(0x10)
	struct FLinearColor EnermyColor; // 0xBC8(0x10)
	struct FLinearColor SelfColorMP; // 0xBD8(0x10)
	struct FLinearColor TeamColorMP; // 0xBE8(0x10)
	struct FLinearColor CampColorMP; // 0xBF8(0x10)
	struct FLinearColor EnermyColorMP; // 0xC08(0x10)
	int32_t ThreatId; // 0xC18(0x4)
	struct FRotator ClientControllerRotator; // 0xC1C(0xC)
	struct FVector ClientPos1p; // 0xC28(0xC)
	uint8_t bIsLastWave : 1; // 0xC34(0x1), Mask(0x1)
	uint8_t BitPad_0xC34_1 : 7; // 0xC34(0x1)
	uint8_t bMoveStoped : 1; // 0xC35(0x1), Mask(0x1)
	uint8_t BitPad_0xC35_1 : 7; // 0xC35(0x1)
	uint8_t Pad_0xC36[0x2]; // 0xC36(0x2)
	struct TMap<int32_t, struct FTimerHandle> MedicHandlerMap; // 0xC38(0x50)
	uint8_t Pad_0xC88[0x10]; // 0xC88(0x10)
	struct TArray<struct TWeakObjectPtr<struct AActor>> StingerMissileVehicles; // 0xC98(0x10)
	uint8_t bShowThreatMarker : 1; // 0xCA8(0x1), Mask(0x1)
	uint8_t BitPad_0xCA8_1 : 7; // 0xCA8(0x1)
	uint8_t bBeginMove : 1; // 0xCA9(0x1), Mask(0x1)
	uint8_t BitPad_0xCA9_1 : 7; // 0xCA9(0x1)
	uint8_t Pad_0xCAA[0xE]; // 0xCAA(0xE)
	float MoveDeltaTime; // 0xCB8(0x4)
	uint8_t bIsLocalControlled : 1; // 0xCBC(0x1), Mask(0x1)
	uint8_t BitPad_0xCBC_1 : 7; // 0xCBC(0x1)
	uint8_t bIsAIControlled : 1; // 0xCBD(0x1), Mask(0x1)
	uint8_t BitPad_0xCBD_1 : 7; // 0xCBD(0x1)
	uint8_t Pad_0xCBE[0x2]; // 0xCBE(0x2)
	float AccumulateLifeTime; // 0xCC0(0x4)
	uint8_t Pad_0xCC4[0x54]; // 0xCC4(0x54)
	uint8_t bPlayWaterEffect : 1; // 0xD18(0x1), Mask(0x1)
	uint8_t BitPad_0xD18_1 : 7; // 0xD18(0x1)
	uint8_t Pad_0xD19[0x3]; // 0xD19(0x3)
	struct TWeakObjectPtr<struct ADFMAbilityMedic> DamageMakerMedic; // 0xD1C(0x8)
	uint8_t Pad_0xD24[0x4]; // 0xD24(0x4)
	struct UMapItemRangeViewController* RangeController; // 0xD28(0x8)
	uint64_t PropellerAsyncRequestId; // 0xD30(0x8)
	struct UGPUASMovementComponent* MovementComponent; // 0xD38(0x8)
	struct UAbilityWaterEffectComponent* WaterEffectComponent; // 0xD40(0x8)

	// Object: Function DFMAbility.DFMAbilityMedic.UpdateTimeMap
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xc41d8d8
	// Params: [ Num(0) Size(0x0) ]
	void UpdateTimeMap();

	// Object: Function DFMAbility.DFMAbilityMedic.UpdateClientPos
	// Flags: [Net|Native|Event|Public|NetServer|HasDefaults]
	// Offset: 0xc41d82c
	// Params: [ Num(1) Size(0xC) ]
	void UpdateClientPos(struct FVector pos);

	// Object: Function DFMAbility.DFMAbilityMedic.UpdateCharacterTimeMap
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xc41d6b4
	// Params: [ Num(4) Size(0xB) ]
	void UpdateCharacterTimeMap(struct AActor* OtherActor, uint8_t Enter, uint8_t IsRemove, uint8_t fromDetect);

	// Object: Function DFMAbility.DFMAbilityMedic.UpdateBindPosition
	// Flags: [Net|Native|Event|Public|NetServer|HasDefaults]
	// Offset: 0xc41d5cc
	// Params: [ Num(2) Size(0x18) ]
	void UpdateBindPosition(struct FVector pos, struct FRotator Quat);

	// Object: Function DFMAbility.DFMAbilityMedic.SetupBindAttach
	// Flags: [Final|Native|Public]
	// Offset: 0xc41d5b8
	// Params: [ Num(0) Size(0x0) ]
	void SetupBindAttach();

	// Object: Function DFMAbility.DFMAbilityMedic.SetCanLockByStingerMissile
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xc41d4d0
	// Params: [ Num(2) Size(0x9) ]
	void SetCanLockByStingerMissile(struct AActor* Actor, uint8_t can);

	// Object: Function DFMAbility.DFMAbilityMedic.ServerMove
	// Flags: [Net|Native|Event|Public|NetServer|NetValidate]
	// Offset: 0xc41d328
	// Params: [ Num(4) Size(0x28) ]
	void ServerMove(float Timestamp, struct FVector_NetQuantize10 Location, struct FVector_NetQuantize100 Rotator, struct FVector_NetQuantize100 Velocity);

	// Object: Function DFMAbility.DFMAbilityMedic.Rep_ClientControllerRotator
	// Flags: [Final|Native|Public]
	// Offset: 0xc41d314
	// Params: [ Num(0) Size(0x0) ]
	void Rep_ClientControllerRotator();

	// Object: Function DFMAbility.DFMAbilityMedic.Rep_bMoveStoped
	// Flags: [Final|Native|Public]
	// Offset: 0xc41d300
	// Params: [ Num(0) Size(0x0) ]
	void Rep_bMoveStoped();

	// Object: Function DFMAbility.DFMAbilityMedic.OnPropellerLoaded
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults]
	// Offset: 0xc41d240
	// Params: [ Num(1) Size(0x18) ]
	void OnPropellerLoaded(const struct FSoftObjectPath& SoftObjectPath);

	// Object: Function DFMAbility.DFMAbilityMedic.OnMeshAssetLoaded
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults]
	// Offset: 0xc41d180
	// Params: [ Num(1) Size(0x18) ]
	void OnMeshAssetLoaded(const struct FSoftObjectPath& SoftObjectPath);

	// Object: Function DFMAbility.DFMAbilityMedic.OnMaterialAssetLoaded
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults]
	// Offset: 0xc41d0c0
	// Params: [ Num(1) Size(0x18) ]
	void OnMaterialAssetLoaded(const struct FSoftObjectPath& SoftObjectPath);

	// Object: Function DFMAbility.DFMAbilityMedic.OnActorIgnoreFormDetectorBuff
	// Flags: [Final|Native|Public]
	// Offset: 0xc41cfe4
	// Params: [ Num(2) Size(0x10) ]
	void OnActorIgnoreFormDetectorBuff(struct AActor* Actor, struct FName Tag);

	// Object: Function DFMAbility.DFMAbilityMedic.NotifyEffectActorNum
	// Flags: [Net|NetReliableNative|Event|Public|NetClient]
	// Offset: 0xc41cf38
	// Params: [ Num(1) Size(0x4) ]
	void NotifyEffectActorNum(int32_t Num);

	// Object: Function DFMAbility.DFMAbilityMedic.MulticastServerMovement
	// Flags: [Net|NetReliableNative|Event|NetMulticast|Public|NetValidate]
	// Offset: 0xc41cd90
	// Params: [ Num(4) Size(0x28) ]
	void MulticastServerMovement(float Timestamp, struct FVector_NetQuantize10 Location, struct FVector_NetQuantize100 Rotator, struct FVector_NetQuantize100 Velocity);

	// Object: Function DFMAbility.DFMAbilityMedic.MulticastCharacterOwnerBeKnockback
	// Flags: [Net|NetReliableNative|Event|NetMulticast|Public]
	// Offset: 0xc41cd74
	// Params: [ Num(0) Size(0x0) ]
	void MulticastCharacterOwnerBeKnockback();

	// Object: Function DFMAbility.DFMAbilityMedic.MulticastBeginMoveStop
	// Flags: [Net|NetReliableNative|Event|NetMulticast|Public|NetValidate]
	// Offset: 0xc41cd18
	// Params: [ Num(0) Size(0x0) ]
	void MulticastBeginMoveStop();

	// Object: Function DFMAbility.DFMAbilityMedic.LineTraceLocalCharacter
	// Flags: [Final|Native|Public]
	// Offset: 0xc41cd04
	// Params: [ Num(0) Size(0x0) ]
	void LineTraceLocalCharacter();

	// Object: Function DFMAbility.DFMAbilityMedic.IsOnwerEnemyWithVehicle
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xc41cc54
	// Params: [ Num(2) Size(0x9) ]
	uint8_t IsOnwerEnemyWithVehicle(struct ADFMVehicleBase* Charecter);

	// Object: Function DFMAbility.DFMAbilityMedic.IsOnwerEnemyWithCharacter
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xc41cba4
	// Params: [ Num(2) Size(0x9) ]
	uint8_t IsOnwerEnemyWithCharacter(struct AGPCharacterBase* Charecter);

	// Object: Function DFMAbility.DFMAbilityMedic.IsLastWave
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0xc41cb6c
	// Params: [ Num(1) Size(0x1) ]
	uint8_t IsLastWave();

	// Object: Function DFMAbility.DFMAbilityMedic.IsDestroy
	// Flags: [Native|Event|Public|BlueprintEvent]
	// Offset: 0xc41cb2c
	// Params: [ Num(1) Size(0x1) ]
	uint8_t IsDestroy();

	// Object: Function DFMAbility.DFMAbilityMedic.ClientOnActorIgnoreFormDetectorBuff
	// Flags: [Net|NetReliableNative|Event|Public|NetClient]
	// Offset: 0xc41ca48
	// Params: [ Num(2) Size(0x10) ]
	void ClientOnActorIgnoreFormDetectorBuff(struct AActor* Actor, struct FName Tag);

	// Object: Function DFMAbility.DFMAbilityMedic.BP_OnActorIgnoreFormDetectorBuff
	// Flags: [Event|Public|BlueprintCallable|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(2) Size(0x10) ]
	void BP_OnActorIgnoreFormDetectorBuff(struct AActor* Actor, struct FName Tag);

	// Object: Function DFMAbility.DFMAbilityMedic.BP_GetBindToAttachMesh
	// Flags: [Event|Public|BlueprintCallable|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(1) Size(0x8) ]
	struct USkeletalMeshComponent* BP_GetBindToAttachMesh();

	// Object: Function DFMAbility.DFMAbilityMedic.BP_BindToAttachMesh_Start
	// Flags: [Event|Public|BlueprintCallable|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(0) Size(0x0) ]
	void BP_BindToAttachMesh_Start();

	// Object: Function DFMAbility.DFMAbilityMedic.BP_BindToAttachMesh_End
	// Flags: [Event|Public|BlueprintCallable|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(0) Size(0x0) ]
	void BP_BindToAttachMesh_End();

	// Object: Function DFMAbility.DFMAbilityMedic.BP_AssaultShock
	// Flags: [Event|Public|BlueprintCallable|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(0) Size(0x0) ]
	void BP_AssaultShock();
};

// Object: Class DFMAbility.DFMAbilityMedicalBox
// Size: 0xAD0 (Inherited: 0xAC8)
struct ADFMAbilityMedicalBox : ADFMAbilityBaseBox
{
	DEFINE_UE_CLASS_HELPERS(ADFMAbilityMedicalBox, "DFMAbilityMedicalBox")

	uint32_t BuffId; // 0xAC8(0x4)
	ETacticalEquipmentMarkerType TacticalEquipmentMarker; // 0xACC(0x1)
	uint8_t Pad_0xACD[0x3]; // 0xACD(0x3)
};

// Object: Class DFMAbility.DFMAbilityParticleSmokeWallComponent
// Size: 0x420 (Inherited: 0x310)
struct UDFMAbilityParticleSmokeWallComponent : UGPDeformableShapeComponentBase
{
	DEFINE_UE_CLASS_HELPERS(UDFMAbilityParticleSmokeWallComponent, "DFMAbilityParticleSmokeWallComponent")

	uint8_t Pad_0x310[0x8]; // 0x310(0x8)
	uint8_t bInFadeOut : 1; // 0x318(0x1), Mask(0x1)
	uint8_t BitPad_0x318_1 : 7; // 0x318(0x1)
	uint8_t Pad_0x319[0x3]; // 0x319(0x3)
	float TickFadeOutTime; // 0x31C(0x4)
	uint8_t bInitGenerating : 1; // 0x320(0x1), Mask(0x1)
	uint8_t BitPad_0x320_1 : 7; // 0x320(0x1)
	uint8_t bIsGeneratingPath : 1; // 0x321(0x1), Mask(0x1)
	uint8_t BitPad_0x321_1 : 7; // 0x321(0x1)
	uint8_t Pad_0x322[0x6]; // 0x322(0x6)
	uint8_t bIsMoveParticle : 1; // 0x328(0x1), Mask(0x1)
	uint8_t BitPad_0x328_1 : 7; // 0x328(0x1)
	uint8_t Pad_0x329[0x3]; // 0x329(0x3)
	int32_t HonrizontalCubeCount; // 0x32C(0x4)
	int32_t VerticalCubeCount; // 0x330(0x4)
	float HonrizontalCubeSize; // 0x334(0x4)
	float VerticalCubeSize; // 0x338(0x4)
	uint8_t Pad_0x33C[0x8]; // 0x33C(0x8)
	uint8_t bIsTickAnimation : 1; // 0x344(0x1), Mask(0x1)
	uint8_t BitPad_0x344_1 : 7; // 0x344(0x1)
	uint8_t Pad_0x345[0xB]; // 0x345(0xB)
	struct TArray<struct FVector> PathList; // 0x350(0x10)
	struct TArray<float> PathDistList; // 0x360(0x10)
	uint8_t Pad_0x370[0x8]; // 0x370(0x8)
	struct UFXResourceContainerComponent* MoveFxComponent; // 0x378(0x8)
	int32_t MoveFxComponentHandler; // 0x380(0x4)
	uint8_t Pad_0x384[0x4]; // 0x384(0x4)
	struct AActor* MoveFXActor; // 0x388(0x8)
	struct UParticleSystemComponent* ParticleSysmtem; // 0x390(0x8)
	struct AActor* MoveFXActorClass; // 0x398(0x8)
	struct AActor* MoveFXActorClassHQ; // 0x3A0(0x8)
	struct AActor* MoveFXActorClassHQHD; // 0x3A8(0x8)
	struct AActor* MoveFXActorClassTQ; // 0x3B0(0x8)
	int32_t StartMoveIndex; // 0x3B8(0x4)
	float DelayMoveTime; // 0x3BC(0x4)
	float MoveSpeed; // 0x3C0(0x4)
	struct FName ResourceFXName; // 0x3C4(0x8)
	int32_t IteratorPathPointInFrame; // 0x3CC(0x4)
	int32_t IteratorCreateCubeInFrame; // 0x3D0(0x4)
	int32_t IteratorDelayNewstMoveIndex; // 0x3D4(0x4)
	float IteratorPathZOffset; // 0x3D8(0x4)
	float SizeRandomMin; // 0x3DC(0x4)
	float SizeRandomMax; // 0x3E0(0x4)
	struct FVector CubeRandomOffsetMin; // 0x3E4(0xC)
	struct FVector CubeRandomOffsetMax; // 0x3F0(0xC)
	float ForwardSizeScale; // 0x3FC(0x4)
	float MaxWidthSize; // 0x400(0x4)
	float FadeOutTime; // 0x404(0x4)
	struct TArray<struct FAbilityParticleSmokeWallParam> FadeParams; // 0x408(0x10)
	uint8_t Pad_0x418[0x8]; // 0x418(0x8)

	// Object: Function DFMAbility.DFMAbilityParticleSmokeWallComponent.TickMoveParticle
	// Flags: [Final|Native|Protected]
	// Offset: 0xc4208a0
	// Params: [ Num(1) Size(0x4) ]
	void TickMoveParticle(float DeltaTime);

	// Object: Function DFMAbility.DFMAbilityParticleSmokeWallComponent.TickGeneratePath
	// Flags: [Final|Native|Protected]
	// Offset: 0xc42088c
	// Params: [ Num(0) Size(0x0) ]
	void TickGeneratePath();

	// Object: Function DFMAbility.DFMAbilityParticleSmokeWallComponent.TickFadeOut
	// Flags: [Final|Native|Protected]
	// Offset: 0xc4207e8
	// Params: [ Num(1) Size(0x4) ]
	void TickFadeOut(float DeltaTime);

	// Object: Function DFMAbility.DFMAbilityParticleSmokeWallComponent.ShouldUseHighQualityMoveFX
	// Flags: [Final|Native|Protected]
	// Offset: 0xc4207b0
	// Params: [ Num(1) Size(0x1) ]
	uint8_t ShouldUseHighQualityMoveFX();

	// Object: Function DFMAbility.DFMAbilityParticleSmokeWallComponent.RemoveMoveFX
	// Flags: [Final|Native|Protected]
	// Offset: 0xc42079c
	// Params: [ Num(0) Size(0x0) ]
	void RemoveMoveFX();

	// Object: Function DFMAbility.DFMAbilityParticleSmokeWallComponent.InitMoveFX
	// Flags: [Final|Native|Protected]
	// Offset: 0xc420788
	// Params: [ Num(0) Size(0x0) ]
	void InitMoveFX();
};

// Object: Class DFMAbility.DFMAbilityPenetratingGunBullet
// Size: 0xA18 (Inherited: 0x9E8)
struct ADFMAbilityPenetratingGunBullet : ADFMAbilityBuffDetector
{
	DEFINE_UE_CLASS_HELPERS(ADFMAbilityPenetratingGunBullet, "DFMAbilityPenetratingGunBullet")

	uint8_t BuffColComp[0x8]; // 0x9E8(0x8)
	uint8_t Pad_0x9F0[0x10]; // 0x9F0(0x10)
	struct ADFMCharacter* BulletBuffTaker; // 0xA00(0x8)
	struct TArray<struct ADFMCharacter*> DebuffCharArry; // 0xA08(0x10)
};

// Object: Class DFMAbility.DFMAbilityPlayMontageSystem
// Size: 0x50 (Inherited: 0x50)
struct UDFMAbilityPlayMontageSystem : UDFMAbilitySingleSystem
{
	DEFINE_UE_CLASS_HELPERS(UDFMAbilityPlayMontageSystem, "DFMAbilityPlayMontageSystem")

	// Object: Function DFMAbility.DFMAbilityPlayMontageSystem.TryBindAudioTrigger
	// Flags: [Final|Native|Protected|HasOutParms]
	// Offset: 0xc421028
	// Params: [ Num(2) Size(0x48) ]
	void TryBindAudioTrigger(int32_t skillEntityIndex, struct FAbilityPlayMontageResources& ResourceData);

	// Object: Function DFMAbility.DFMAbilityPlayMontageSystem.RecoradEndedDelegateMontage
	// Flags: [Final|Native|Public]
	// Offset: 0xc420ff0
	// Params: [ Num(1) Size(0x1) ]
	uint8_t RecoradEndedDelegateMontage();

	// Object: Function DFMAbility.DFMAbilityPlayMontageSystem.OnPutWeaponEnded
	// Flags: [Final|Native|Public]
	// Offset: 0xc420e90
	// Params: [ Num(4) Size(0x11) ]
	void OnPutWeaponEnded(int32_t skillEntityIndex, int32_t LogicID, struct UAnimMontage* Montage, uint8_t bInterrupted);

	// Object: Function DFMAbility.DFMAbilityPlayMontageSystem.OnMontageEnded
	// Flags: [Final|Native|Public]
	// Offset: 0xc420d30
	// Params: [ Num(4) Size(0x11) ]
	void OnMontageEnded(int32_t skillEntityIndex, int32_t LogicID, struct UAnimMontage* Montage, uint8_t bInterrupted);

	// Object: Function DFMAbility.DFMAbilityPlayMontageSystem.ClearAudioTrigger
	// Flags: [Final|Native|Protected]
	// Offset: 0xc420c8c
	// Params: [ Num(1) Size(0x4) ]
	void ClearAudioTrigger(int32_t skillEntityIndex);
};

// Object: Class DFMAbility.DFMAbilityPreviewActorSystem
// Size: 0x50 (Inherited: 0x50)
struct UDFMAbilityPreviewActorSystem : UDFMAbilitySystemBase
{
	DEFINE_UE_CLASS_HELPERS(UDFMAbilityPreviewActorSystem, "DFMAbilityPreviewActorSystem")
};

// Object: Class DFMAbility.DFMAbilityProjectileActorSystem
// Size: 0x50 (Inherited: 0x50)
struct UDFMAbilityProjectileActorSystem : UDFMAbilitySystemBase
{
	DEFINE_UE_CLASS_HELPERS(UDFMAbilityProjectileActorSystem, "DFMAbilityProjectileActorSystem")
};

// Object: Class DFMAbility.DFMAbilityProxSensor
// Size: 0xAE8 (Inherited: 0x9E8)
struct ADFMAbilityProxSensor : ADFMAbilityBuffDetector
{
	DEFINE_UE_CLASS_HELPERS(ADFMAbilityProxSensor, "DFMAbilityProxSensor")

	int32_t TotalScanTimes_BF; // 0x9E4(0x4)
	float ScanInterval_BF; // 0x9E8(0x4)
	float ScanSpeed_BF; // 0x9EC(0x4)
	float MaxScanDistance_BF; // 0x9F0(0x4)
	int32_t TotalScanTimes_SOL; // 0x9F4(0x4)
	float ScanInterval_SOL; // 0x9F8(0x4)
	float ScanSpeed_SOL; // 0x9FC(0x4)
	float MaxScanDistance_SOL; // 0xA00(0x4)
	uint8_t Pad_0xA08[0x30]; // 0xA08(0x30)
	struct TArray<struct ADFMCharacter*> PendingCharacters; // 0xA38(0x10)
	struct TSet<int32_t> ScanCharacterSet; // 0xA48(0x50)
	struct TMap<int64_t, struct FVector> EnemyLocationMap; // 0xA98(0x50)

	// Object: Function DFMAbility.DFMAbilityProxSensor.IsOnwerEnemyWithCharacter
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xc4213a8
	// Params: [ Num(2) Size(0x9) ]
	uint8_t IsOnwerEnemyWithCharacter(struct AGPCharacterBase* Charecter);

	// Object: Function DFMAbility.DFMAbilityProxSensor.IsDestroy
	// Flags: [Native|Event|Public|BlueprintEvent]
	// Offset: 0xc421368
	// Params: [ Num(1) Size(0x1) ]
	uint8_t IsDestroy();

	// Object: Function DFMAbility.DFMAbilityProxSensor.BP_DetectorTakeDamage
	// Flags: [Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(2) Size(0x8A8) ]
	void BP_DetectorTakeDamage(uint8_t bIsServer, const struct FDamageResultInfo& DamageResult);

	// Object: Function DFMAbility.DFMAbilityProxSensor.BP_AssaultShock
	// Flags: [Event|Public|BlueprintCallable|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(0) Size(0x0) ]
	void BP_AssaultShock();
};

// Object: Class DFMAbility.DFMAbilityProxSensorAdvanceScan
// Size: 0xBC0 (Inherited: 0x9E8)
struct ADFMAbilityProxSensorAdvanceScan : ADFMAbilityBuffDetector
{
	DEFINE_UE_CLASS_HELPERS(ADFMAbilityProxSensorAdvanceScan, "DFMAbilityProxSensorAdvanceScan")

	float Lifetime; // 0x9E4(0x4)
	float ScanCDTime; // 0x9E8(0x4)
	float FindPathCDTime; // 0x9EC(0x4)
	float ScanDistance; // 0x9F0(0x4)
	int32_t MaxTargetToDrawLine; // 0x9F4(0x4)
	float PathLineHeight; // 0x9F8(0x4)
	float PathMinDistance; // 0x9FC(0x4)
	struct FVector ScaleMask; // 0xA00(0xC)
	struct FVector ScaleFactor; // 0xA0C(0xC)
	float FirstSectionMinDistance; // 0xA18(0x4)
	float FirstSectionMaxDistance; // 0xA1C(0x4)
	float FirstSectionClostScale; // 0xA20(0x4)
	float FirstSectionFarScale; // 0xA24(0x4)
	float FirstSectionCalcForwardOffset; // 0xA28(0x4)
	float FirstSectionOffset; // 0xA2C(0x4)
	float ScanFaceAngle; // 0xA30(0x4)
	struct FName FX_P_Scout_AcousticalDetector_Blue; // 0xA34(0x8)
	struct TArray<struct ADFMCharacter*> ScanCharacters; // 0xA40(0x10)
	struct TArray<struct ADFMCharacter*> LocalScanCharacters; // 0xA50(0x10)
	struct TArray<struct FDFMAbilityAdvanceScanItem> AdvanceScanPathArray; // 0xA60(0x10)
	struct TArray<struct FTransform> LineTransforms; // 0xA70(0x10)
	struct TArray<struct FDFMAbilityAdvanceScanTracePathItem> AttachlineArray; // 0xA80(0x10)
	struct TMap<struct ADFMCharacter*, int32_t> AttachLineTransformIndexMap; // 0xA90(0x50)
	struct UInstancedStaticMeshComponent* InstancedMeshComponent; // 0xAE0(0x8)
	struct UFXResourceContainerComponent* FXContainer; // 0xAE8(0x8)
	uint8_t Pad_0xAF0[0x4]; // 0xAF0(0x4)
	uint8_t bPlayEffect : 1; // 0xAF4(0x1), Mask(0x1)
	uint8_t BitPad_0xAF4_1 : 7; // 0xAF4(0x1)
	uint8_t bIsPathDirty : 1; // 0xAF5(0x1), Mask(0x1)
	uint8_t BitPad_0xAF5_1 : 7; // 0xAF5(0x1)
	uint8_t Pad_0xAF6[0x2]; // 0xAF6(0x2)
	float TickAccumulateTime; // 0xAF8(0x4)
	uint8_t Pad_0xAFC[0x14]; // 0xAFC(0x14)
	struct TArray<struct ADFMCharacter*> PendingCharacters; // 0xB10(0x10)
	struct TSet<int32_t> ScanCharacterSet; // 0xB20(0x50)
	struct TMap<int64_t, struct FVector> EnemyLocationMap; // 0xB70(0x50)

	// Object: Function DFMAbility.DFMAbilityProxSensorAdvanceScan.TickScan
	// Flags: [Final|Native|Public]
	// Offset: 0xc4216bc
	// Params: [ Num(0) Size(0x0) ]
	void TickScan();

	// Object: Function DFMAbility.DFMAbilityProxSensorAdvanceScan.TickEffect
	// Flags: [Final|Native|Public]
	// Offset: 0xc4216a8
	// Params: [ Num(0) Size(0x0) ]
	void TickEffect();

	// Object: Function DFMAbility.DFMAbilityProxSensorAdvanceScan.SyncNavigationResult
	// Flags: [Net|NetReliableNative|Event|Public|NetClient]
	// Offset: 0xc4215b8
	// Params: [ Num(2) Size(0x18) ]
	void SyncNavigationResult(struct ADFMCharacter* Target, struct TArray<struct FVector> Paths);

	// Object: Function DFMAbility.DFMAbilityProxSensorAdvanceScan.Rep_ScanCharacters
	// Flags: [Final|Native|Protected]
	// Offset: 0xc4215a4
	// Params: [ Num(0) Size(0x0) ]
	void Rep_ScanCharacters();

	// Object: Function DFMAbility.DFMAbilityProxSensorAdvanceScan.OnProcessClear
	// Flags: [Final|Native|Public]
	// Offset: 0xc421590
	// Params: [ Num(0) Size(0x0) ]
	void OnProcessClear();

	// Object: Function DFMAbility.DFMAbilityProxSensorAdvanceScan.DrawPaths
	// Flags: [Final|Native|Public]
	// Offset: 0xc42157c
	// Params: [ Num(0) Size(0x0) ]
	void DrawPaths();

	// Object: Function DFMAbility.DFMAbilityProxSensorAdvanceScan.DoScanNavigation
	// Flags: [Final|Native|Public]
	// Offset: 0xc421568
	// Params: [ Num(0) Size(0x0) ]
	void DoScanNavigation();

	// Object: Function DFMAbility.DFMAbilityProxSensorAdvanceScan.DoScanEnemy
	// Flags: [Final|Native|Public]
	// Offset: 0xc421554
	// Params: [ Num(0) Size(0x0) ]
	void DoScanEnemy();
};

// Object: Class DFMAbility.DFMAbilityInstanceReleaseRope
// Size: 0x70 (Inherited: 0x40)
struct UDFMAbilityInstanceReleaseRope : UDFMAbilityInstance
{
	DEFINE_UE_CLASS_HELPERS(UDFMAbilityInstanceReleaseRope, "DFMAbilityInstanceReleaseRope")

	struct FText ReleaseText; // 0x40(0x18)
	struct FText ReleaseText2; // 0x58(0x18)
};

// Object: Class DFMAbility.DFMAbilityRopeRoot
// Size: 0xA30 (Inherited: 0x9E8)
struct ADFMAbilityRopeRoot : ADFMAbilityBuffDetector
{
	DEFINE_UE_CLASS_HELPERS(ADFMAbilityRopeRoot, "DFMAbilityRopeRoot")

	uint8_t Pad_0x9E8[0x20]; // 0x9E8(0x20)
	ETacticalEquipmentMarkerType TacticalEquipmentMarker; // 0xA08(0x1)
	uint8_t bShowMarker : 1; // 0xA09(0x1), Mask(0x1)
	uint8_t BitPad_0xA09_1 : 7; // 0xA09(0x1)
	uint8_t Pad_0xA0A[0x2]; // 0xA0A(0x2)
	struct FName StartIdleAudio; // 0xA0C(0x8)
	struct FName StopIdleAudio; // 0xA14(0x8)
	struct FName BreakDistanceAudio; // 0xA1C(0x8)
	uint8_t Pad_0xA24[0x4]; // 0xA24(0x4)
	struct USkeletalMeshComponent* CacheMesh; // 0xA28(0x8)

	// Object: Function DFMAbility.DFMAbilityRopeRoot.GetIngoreMesh
	// Flags: [Event|Public|BlueprintCallable|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(1) Size(0x8) ]
	struct UPrimitiveComponent* GetIngoreMesh();
};

// Object: Class DFMAbility.DFMAbilityRopeRootMarker
// Size: 0x3D0 (Inherited: 0x370)
struct ADFMAbilityRopeRootMarker : AActor
{
	DEFINE_UE_CLASS_HELPERS(ADFMAbilityRopeRootMarker, "DFMAbilityRopeRootMarker")

	uint8_t Pad_0x370[0x39]; // 0x370(0x39)
	ETacticalEquipmentMarkerType TacticalEquipmentMarker; // 0x3A9(0x1)
	uint8_t Pad_0x3AA[0x6]; // 0x3AA(0x6)
	struct FText StateBreakingText; // 0x3B0(0x18)
	float LifeSpanRep; // 0x3C8(0x4)
	float LifeSpanRepTemp; // 0x3CC(0x4)

	// Object: Function DFMAbility.DFMAbilityRopeRootMarker.Rep_LifeSpanRep
	// Flags: [Final|Native|Public]
	// Offset: 0xc4247b8
	// Params: [ Num(0) Size(0x0) ]
	void Rep_LifeSpanRep();
};

// Object: Class DFMAbility.DFMAbilityInstanceRope
// Size: 0x140 (Inherited: 0x40)
struct UDFMAbilityInstanceRope : UDFMAbilityInstance
{
	DEFINE_UE_CLASS_HELPERS(UDFMAbilityInstanceRope, "DFMAbilityInstanceRope")

	struct TArray<struct FHitResult> ResultL; // 0x40(0x10)
	struct TArray<struct FHitResult> ResultR; // 0x50(0x10)
	struct FGPRopeHangingAttachData HangingAttachData; // 0x60(0xB0)
	uint8_t bShowTips : 1; // 0x110(0x1), Mask(0x1)
	uint8_t BitPad_0x110_1 : 7; // 0x110(0x1)
	uint8_t Pad_0x111[0x3]; // 0x111(0x3)
	struct FName HudName; // 0x114(0x8)
	float CheckRate; // 0x11C(0x4)
	float RopeMaxTimeExt; // 0x120(0x4)
	float RopeDeathMaxTime; // 0x124(0x4)
	float RopePassiveMoveMaxTime; // 0x128(0x4)
	float RopeMaxTimeTemp; // 0x12C(0x4)
	float RopeDeathMaxTimeTemp; // 0x130(0x4)
	float RopePassiveMoveMaxTimeTemp; // 0x134(0x4)
	uint8_t Pad_0x138[0x8]; // 0x138(0x8)

	// Object: Function DFMAbility.DFMAbilityInstanceRope.OnGameHudStateChanged
	// Flags: [Final|Native|Public]
	// Offset: 0xc4247e8
	// Params: [ Num(0) Size(0x0) ]
	void OnGameHudStateChanged();

	// Object: Function DFMAbility.DFMAbilityInstanceRope.CheckCancelSkill
	// Flags: [Final|Native|Public]
	// Offset: 0xc4247d4
	// Params: [ Num(0) Size(0x0) ]
	void CheckCancelSkill();
};

// Object: Class DFMAbility.DFMAbilitySilenceZoneFakeDoll
// Size: 0xA20 (Inherited: 0x9E8)
struct ADFMAbilitySilenceZoneFakeDoll : ADFMAbilityBuffDetector
{
	DEFINE_UE_CLASS_HELPERS(ADFMAbilitySilenceZoneFakeDoll, "DFMAbilitySilenceZoneFakeDoll")

	struct FName SkeletalMeshCompName; // 0x9E4(0x8)
	struct FName BagSkeletalMeshCompName; // 0x9EC(0x8)
	struct FName WeaponMeshSocketName; // 0x9F4(0x8)
	float UnderWaterDis; // 0x9FC(0x4)
	struct USkeletalMeshComponent* DollSkeletalMeshComp; // 0xA00(0x8)
	struct USkeletalMeshComponent* BagSkeletalMeshComp; // 0xA08(0x8)
	struct AAssembleWeaponActor* CurWeaponMeshActor; // 0xA10(0x8)
	uint8_t DollIsUnderWater : 1; // 0xA18(0x1), Mask(0x1)
	uint8_t BitPad_0xA1C_1 : 7; // 0xA1C(0x1)
	uint8_t Pad_0xA1D[0x3]; // 0xA1D(0x3)
};

// Object: Class DFMAbility.DFMAbilitySmokeDeformableActor
// Size: 0x990 (Inherited: 0x718)
struct ADFMAbilitySmokeDeformableActor : AGPDeformableActor
{
	DEFINE_UE_CLASS_HELPERS(ADFMAbilitySmokeDeformableActor, "DFMAbilitySmokeDeformableActor")

	uint8_t Pad_0x718[0x30]; // 0x718(0x30)
	EAbilitySmokeActorDetectionStage CurrentDetectionStage; // 0x748(0x1)
	uint8_t bIsLocalCharCurrentInSide : 1; // 0x749(0x1), Mask(0x1)
	uint8_t BitPad_0x749_1 : 7; // 0x749(0x1)
	uint8_t Pad_0x74A[0xA]; // 0x74A(0xA)
	float RuntimeDetectionCourseTime; // 0x754(0x4)
	float RuntimeDetectionVoxelTime; // 0x758(0x4)
	uint8_t Pad_0x75C[0x4]; // 0x75C(0x4)
	struct ADFMCharacter* LocalCharActor; // 0x760(0x8)
	struct UDFMBattleFieldSystem* DFMBattleFieldSystem; // 0x768(0x8)
	struct UGPAbilityGameStateComponent* AbilityGS; // 0x770(0x8)
	struct TArray<int32_t> BoxUIDArray; // 0x778(0x10)
	struct TArray<uint64_t> VoxelIdArray; // 0x788(0x10)
	float BoxScaleValue; // 0x798(0x4)
	float DetectionCourseTime; // 0x79C(0x4)
	float DetectionVoxelTime; // 0x7A0(0x4)
	float HDDetectionScale; // 0x7A4(0x4)
	float EnterSmokeWantVoiceCDTime; // 0x7A8(0x4)
	struct FName EnterPostProcessFogName; // 0x7AC(0x8)
	struct FVector ServerVoxelExtentOffset; // 0x7B4(0xC)
	struct FVector ClientExtentOffset; // 0x7C0(0xC)
	uint8_t Pad_0x7CC[0x4]; // 0x7CC(0x4)
	struct TSoftObjectPtr<UGPAudioEventAsset> StartSoundEventName; // 0x7D0(0x28)
	struct TSoftObjectPtr<UGPAudioEventAsset> EndSoundEventName; // 0x7F8(0x28)
	struct UGPAudioEventAsset* CacheStartSoundAudioEventAsset; // 0x820(0x8)
	struct UGPAudioEventAsset* CacheEndSoundAudioEventAsset; // 0x828(0x8)
	uint64_t SoundEventPreLoadedHandle; // 0x830(0x8)
	uint8_t bPlayStartSoundEvent : 1; // 0x838(0x1), Mask(0x1)
	uint8_t BitPad_0x838_1 : 7; // 0x838(0x1)
	uint8_t bPlayEndSoundEvent : 1; // 0x839(0x1), Mask(0x1)
	uint8_t BitPad_0x839_1 : 7; // 0x839(0x1)
	uint8_t Pad_0x83A[0x6]; // 0x83A(0x6)
	struct USceneComponent* GameAkComponent; // 0x840(0x8)
	float AudioCalculateAccuTime; // 0x848(0x4)
	float AudioCalculateCDTime; // 0x84C(0x4)
	float AudioSmoothTime; // 0x850(0x4)
	float AudioSmoothSpeed; // 0x854(0x4)
	struct FVector PreLocalPawnHeadZeroBasedPos; // 0x858(0xC)
	int32_t PreDeformableBoxCount; // 0x864(0x4)
	struct FVector CurrentAKZeroBasedLocation; // 0x868(0xC)
	struct FVector TargetAKZeroBasedLocation; // 0x874(0xC)
	float MaxAudioCalcCDTime; // 0x880(0x4)
	float MinAudioCalcCDTime; // 0x884(0x4)
	float MaxAudioCalcCDDistance; // 0x888(0x4)
	float MinAudioCalcCDDistance; // 0x88C(0x4)
	float AudioSmoothConfigTime; // 0x890(0x4)
	float AudioSmoothConfigSpeed; // 0x894(0x4)
	struct TArray<struct FAbilityDeformableSmokeBox> AbilityDeformableBoxList; // 0x898(0x10)
	struct FVector DeformableMinPoint; // 0x8A8(0xC)
	struct FVector DeformableMaxPoint; // 0x8B4(0xC)
	struct FVector DeformableCenterPoint; // 0x8C0(0xC)
	uint8_t bIsAABBInit : 1; // 0x8CC(0x1), Mask(0x1)
	uint8_t BitPad_0x8CC_1 : 7; // 0x8CC(0x1)
	uint8_t Pad_0x8CD[0x3]; // 0x8CD(0x3)
	struct UExtinguishIncendiaryComponent* ExtinguishComponent; // 0x8D0(0x8)
	uint8_t Pad_0x8D8[0x8]; // 0x8D8(0x8)
	struct TArray<ESmokeState> SmokeStates; // 0x8E0(0x10)
	uint8_t Pad_0x8F0[0xA0]; // 0x8F0(0xA0)

	// Object: Function DFMAbility.DFMAbilitySmokeDeformableActor.UpdateTickInterval
	// Flags: [Final|Native|Protected]
	// Offset: 0xc42595c
	// Params: [ Num(0) Size(0x0) ]
	void UpdateTickInterval();

	// Object: Function DFMAbility.DFMAbilitySmokeDeformableActor.UpdateAKComponentLocation
	// Flags: [Final|Native|Protected]
	// Offset: 0xc4258b8
	// Params: [ Num(1) Size(0x4) ]
	void UpdateAKComponentLocation(float DeltaTime);

	// Object: Function DFMAbility.DFMAbilitySmokeDeformableActor.TryPlaySoundEvent
	// Flags: [Final|Native|Protected]
	// Offset: 0xc425778
	// Params: [ Num(1) Size(0x28) ]
	void TryPlaySoundEvent(struct TSoftObjectPtr<UGPAudioEventAsset> SoundEvent);

	// Object: Function DFMAbility.DFMAbilitySmokeDeformableActor.SetSmokeState
	// Flags: [Native|Protected]
	// Offset: 0xc425650
	// Params: [ Num(3) Size(0x9) ]
	void SetSmokeState(ESmokeState NewSmokeState, int32_t SmokeIndex, uint8_t bNeedSet);

	// Object: Function DFMAbility.DFMAbilitySmokeDeformableActor.RecoverSmoke
	// Flags: [Final|Native|Protected]
	// Offset: 0xc4255ac
	// Params: [ Num(1) Size(0x4) ]
	void RecoverSmoke(int32_t Index);

	// Object: Function DFMAbility.DFMAbilitySmokeDeformableActor.ProcessLocalCharacterLeave
	// Flags: [Final|Native|Public]
	// Offset: 0xc425598
	// Params: [ Num(0) Size(0x0) ]
	void ProcessLocalCharacterLeave();

	// Object: Function DFMAbility.DFMAbilitySmokeDeformableActor.ProcessLocalCharacterEnter
	// Flags: [Final|Native|Public]
	// Offset: 0xc425584
	// Params: [ Num(0) Size(0x0) ]
	void ProcessLocalCharacterEnter();

	// Object: Function DFMAbility.DFMAbilitySmokeDeformableActor.OnSoundEventPreLoaded
	// Flags: [Final|Native|Protected]
	// Offset: 0xc4254b4
	// Params: [ Num(1) Size(0x10) ]
	void OnSoundEventPreLoaded(struct TArray<struct FSoftObjectPath> SoftObjectPaths);

	// Object: Function DFMAbility.DFMAbilitySmokeDeformableActor.OnSoundEventLoaded
	// Flags: [Final|Native|Protected|HasOutParms|HasDefaults]
	// Offset: 0xc4253f4
	// Params: [ Num(1) Size(0x18) ]
	void OnSoundEventLoaded(const struct FSoftObjectPath& SoftObjectPath);

	// Object: Function DFMAbility.DFMAbilitySmokeDeformableActor.OnSmokeRecover
	// Flags: [Final|Native|Protected]
	// Offset: 0xc425350
	// Params: [ Num(1) Size(0x4) ]
	void OnSmokeRecover(int32_t Index);

	// Object: Function DFMAbility.DFMAbilitySmokeDeformableActor.OnSmokeBlowOut
	// Flags: [Final|Native|Protected]
	// Offset: 0xc4252ac
	// Params: [ Num(1) Size(0x4) ]
	void OnSmokeBlowOut(int32_t Index);

	// Object: Function DFMAbility.DFMAbilitySmokeDeformableActor.OnRep_SmokeStateChanged
	// Flags: [Final|Native|Protected]
	// Offset: 0xc425298
	// Params: [ Num(0) Size(0x0) ]
	void OnRep_SmokeStateChanged();

	// Object: Function DFMAbility.DFMAbilitySmokeDeformableActor.MulticastSetSmokeState
	// Flags: [Net|NetReliableNative|Event|NetMulticast|Protected]
	// Offset: 0xf0b47dc
	// Params: [ Num(2) Size(0x8) ]
	void MulticastSetSmokeState(ESmokeState NewSmokeState, int32_t SmokeIndex);

	// Object: Function DFMAbility.DFMAbilitySmokeDeformableActor.MulticastSetSmokeFadeParam
	// Flags: [Net|NetReliableNative|Event|NetMulticast|Protected]
	// Offset: 0xc425198
	// Params: [ Num(1) Size(0x44) ]
	void MulticastSetSmokeFadeParam(struct FSkillSmokeBreakerInfo SmokeBreakerInfo);

	// Object: Function DFMAbility.DFMAbilitySmokeDeformableActor.MulticastCheckBurst
	// Flags: [Net|NetReliableNative|Event|NetMulticast|Protected|HasDefaults]
	// Offset: 0xc424f74
	// Params: [ Num(5) Size(0x60) ]
	void MulticastCheckBurst(struct FVector BurstLocation, float BurstRadius, float BurstDelay, int32_t SmokeIndex, struct FSmokeBreakInfo SmokeBreakerInfo);

	// Object: Function DFMAbility.DFMAbilitySmokeDeformableActor.DoPlaySoundEvent
	// Flags: [Final|Native|Protected|HasDefaults]
	// Offset: 0xc424e70
	// Params: [ Num(1) Size(0x18) ]
	void DoPlaySoundEvent(struct FSoftObjectPath AudioEventAssetRef);

	// Object: Function DFMAbility.DFMAbilitySmokeDeformableActor.DissipateSmoke
	// Flags: [Final|Native|Protected]
	// Offset: 0xc424dcc
	// Params: [ Num(1) Size(0x4) ]
	void DissipateSmoke(int32_t Index);

	// Object: Function DFMAbility.DFMAbilitySmokeDeformableActor.ClearSmokeRelativeBox
	// Flags: [Final|Native|Protected]
	// Offset: 0xc424d28
	// Params: [ Num(1) Size(0x4) ]
	void ClearSmokeRelativeBox(int32_t Index);

	// Object: Function DFMAbility.DFMAbilitySmokeDeformableActor.CheckCanBeBlow
	// Flags: [Final|Native|Protected]
	// Offset: 0xc424cf0
	// Params: [ Num(1) Size(0x1) ]
	uint8_t CheckCanBeBlow();

	// Object: Function DFMAbility.DFMAbilitySmokeDeformableActor.ApplyAKComponentLocation
	// Flags: [Final|Native|Protected]
	// Offset: 0xc424c4c
	// Params: [ Num(1) Size(0x4) ]
	void ApplyAKComponentLocation(float DeltaTime);

	// Object: Function DFMAbility.DFMAbilitySmokeDeformableActor.AddSmokeRelativeBox
	// Flags: [Final|Native|Protected]
	// Offset: 0xc424ba8
	// Params: [ Num(1) Size(0x4) ]
	void AddSmokeRelativeBox(int32_t Index);

	// Object: Function DFMAbility.DFMAbilitySmokeDeformableActor.AddExtinguishIncendiaryComponent
	// Flags: [Final|Native|Protected]
	// Offset: 0xc424b94
	// Params: [ Num(0) Size(0x0) ]
	void AddExtinguishIncendiaryComponent();
};

// Object: Class DFMAbility.DFMAbilitySmokeWallUAS
// Size: 0x7F0 (Inherited: 0x4B0)
struct ADFMAbilitySmokeWallUAS : AGPUASActor
{
	DEFINE_UE_CLASS_HELPERS(ADFMAbilitySmokeWallUAS, "DFMAbilitySmokeWallUAS")

	uint8_t Pad_0x4B0[0x31]; // 0x4B0(0x31)
	uint8_t bAutoStart : 1; // 0x4E1(0x1), Mask(0x1)
	uint8_t BitPad_0x4E1_1 : 7; // 0x4E1(0x1)
	uint8_t Pad_0x4E2[0x6]; // 0x4E2(0x6)
	struct ADFMAbilitySmokeWallUAS* Master; // 0x4E8(0x8)
	uint8_t bIsNotifyFired : 1; // 0x4F0(0x1), Mask(0x1)
	uint8_t BitPad_0x4F0_1 : 7; // 0x4F0(0x1)
	uint8_t Pad_0x4F1[0x1]; // 0x4F1(0x1)
	uint8_t IsAsyncPlayParticle : 1; // 0x4F2(0x1), Mask(0x1)
	uint8_t BitPad_0x4F2_1 : 7; // 0x4F2(0x1)
	uint8_t IsAsyncPlayEnermyParticle : 1; // 0x4F3(0x1), Mask(0x1)
	uint8_t BitPad_0x4F3_1 : 7; // 0x4F3(0x1)
	int32_t AsyncPlayParticleIndex; // 0x4F4(0x4)
	int64_t CreatedGameFrame; // 0x4F8(0x8)
	uint8_t UseTrace : 1; // 0x500(0x1), Mask(0x1)
	uint8_t BitPad_0x500_1 : 7; // 0x500(0x1)
	uint8_t Pad_0x501[0x3]; // 0x501(0x3)
	float TraceOffset; // 0x504(0x4)
	struct FName AvatarMeshKey; // 0x508(0x8)
	struct USkeletalMeshComponent* MeshA; // 0x510(0x8)
	struct USkeletalMeshComponent* MeshB; // 0x518(0x8)
	struct USkeletalMeshComponent* MeshC; // 0x520(0x8)
	struct FName AvatarDragTailFXKey; // 0x528(0x8)
	struct FName AvatarLightFXKey; // 0x530(0x8)
	uint8_t Pad_0x538[0x8]; // 0x538(0x8)
	struct FTransform LocalTransform; // 0x540(0x30)
	struct FName LightMatPropoertyName; // 0x570(0x8)
	struct FColor FriendLightColor; // 0x578(0x4)
	struct FColor EnermyLightColor; // 0x57C(0x4)
	struct FAvatarFXOperateHandle MeshADragTailFXHandle; // 0x580(0x10)
	struct FAvatarFXOperateHandle MeshBDragTailFXHandle; // 0x590(0x10)
	struct FAvatarFXOperateHandle MeshCDragTailFXHandle; // 0x5A0(0x10)
	struct FAvatarFXOperateHandle MeshALightFXHandle; // 0x5B0(0x10)
	struct FAvatarFXOperateHandle MeshBLightFXHandle; // 0x5C0(0x10)
	struct FAvatarFXOperateHandle MeshCLightFXHandle; // 0x5D0(0x10)
	struct FName AvatarFlyUpAudioKey; // 0x5E0(0x8)
	struct FName AvatarFlyStopAudioKey; // 0x5E8(0x8)
	struct FName AvatarDestroyAudioKey; // 0x5F0(0x8)
	struct FName MeshFlyFxName; // 0x5F8(0x8)
	struct UFXResourceContainerComponent* MeshAFXResourceContainer; // 0x600(0x8)
	uint8_t Pad_0x608[0x8]; // 0x608(0x8)
	struct UFXResourceContainerComponent* MeshBFXResourceContainer; // 0x610(0x8)
	uint8_t Pad_0x618[0x8]; // 0x618(0x8)
	struct UFXResourceContainerComponent* MeshCFXResourceContainer; // 0x620(0x8)
	uint8_t Pad_0x628[0x4]; // 0x628(0x4)
	struct FName MeshLightFxName; // 0x62C(0x8)
	uint8_t Pad_0x634[0x4]; // 0x634(0x4)
	struct UFXResourceContainerComponent* MeshALightFXResourceContainer; // 0x638(0x8)
	uint8_t Pad_0x640[0x8]; // 0x640(0x8)
	struct UFXResourceContainerComponent* MeshBLightFXResourceContainer; // 0x648(0x8)
	uint8_t Pad_0x650[0x8]; // 0x650(0x8)
	struct UFXResourceContainerComponent* MeshCLightFXResourceContainer; // 0x658(0x8)
	uint8_t Pad_0x660[0x4]; // 0x660(0x4)
	uint8_t bUseInWeaponIdle : 1; // 0x664(0x1), Mask(0x1)
	uint8_t BitPad_0x664_1 : 7; // 0x664(0x1)
	uint8_t Pad_0x665[0x3]; // 0x665(0x3)
	struct FName WaterDragTailFXName; // 0x668(0x8)
	struct FName EnterWaterSurfaceFXName; // 0x670(0x8)
	struct FName LeaveWaterSurfaceFXName; // 0x678(0x8)
	struct FName RippleFXName; // 0x680(0x8)
	struct UAbilityWaterEffectComponent* WaterEffectComponent; // 0x688(0x8)
	uint8_t bPreLoadEnable : 1; // 0x690(0x1), Mask(0x1)
	uint8_t BitPad_0x690_1 : 7; // 0x690(0x1)
	uint8_t Pad_0x691[0x7]; // 0x691(0x7)
	struct FString GunnerRobot; // 0x698(0x10)
	struct TMap<EDFMGamePlayMode, float> ActionTimes; // 0x6A8(0x50)
	struct FText ActionBarDescText; // 0x6F8(0x18)
	float DistanceScale; // 0x710(0x4)
	struct FName ActionProgressBarName; // 0x714(0x8)
	uint8_t bUpdatePercent : 1; // 0x71C(0x1), Mask(0x1)
	uint8_t BitPad_0x71C_1 : 7; // 0x71C(0x1)
	uint8_t bMobileAdditiveUpdateBar : 1; // 0x71D(0x1), Mask(0x1)
	uint8_t BitPad_0x71D_1 : 7; // 0x71D(0x1)
	uint8_t Pad_0x71E[0x2]; // 0x71E(0x2)
	struct UDFMUASActionCommonProgressBar* ActionProgressBar; // 0x720(0x8)
	struct UDFMAbilityUASActiveComponent* IdleComponent; // 0x728(0x8)
	ESmokeWallUASStage ServerUASStage; // 0x730(0x1)
	uint8_t Pad_0x731[0x3]; // 0x731(0x3)
	struct TWeakObjectPtr<struct ADFMCharacter> OwnerCharacter; // 0x734(0x8)
	int32_t OwnerSkillId; // 0x73C(0x4)
	int32_t SkillEntityUniqueID; // 0x740(0x4)
	int32_t SkillExcuteCount; // 0x744(0x4)
	ESmokeWallUASStage UASStage; // 0x748(0x1)
	uint8_t Pad_0x749[0x3]; // 0x749(0x3)
	struct FName RTC_Name; // 0x74C(0x8)
	int32_t RTC_FriendCamp_Value; // 0x754(0x4)
	int32_t RTC_EnermyCamp_Value; // 0x758(0x4)
	uint8_t Pad_0x75C[0x4]; // 0x75C(0x4)
	struct TSoftObjectPtr<UGPAudioEventAsset> DestroySoundEventAudioPath; // 0x760(0x28)
	struct TSoftObjectPtr<UGPAudioEventAsset> FlyUpSoundEventAudioPath; // 0x788(0x28)
	struct TSoftObjectPtr<UGPAudioEventAsset> FlyStopEventAudioPath; // 0x7B0(0x28)
	uint64_t EffectWeaponItemId; // 0x7D8(0x8)
	ETacticalEquipmentMarkerType TacticalEquipmentMarker; // 0x7E0(0x1)
	uint8_t Pad_0x7E1[0x7]; // 0x7E1(0x7)
	struct UGPDeformableGameStateComponent* DeformableGameStateComponent; // 0x7E8(0x8)

	// Object: Function DFMAbility.DFMAbilitySmokeWallUAS.UnRegisterAbilityActor
	// Flags: [Final|Native|Protected]
	// Offset: 0xc42614c
	// Params: [ Num(0) Size(0x0) ]
	void UnRegisterAbilityActor();

	// Object: Function DFMAbility.DFMAbilitySmokeWallUAS.StartPlayParticleSystem
	// Flags: [Final|Native|Public]
	// Offset: 0xc426138
	// Params: [ Num(0) Size(0x0) ]
	void StartPlayParticleSystem();

	// Object: Function DFMAbility.DFMAbilitySmokeWallUAS.ShowActionBar
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xc425f7c
	// Params: [ Num(2) Size(0x1C) ]
	void ShowActionBar(struct FText Action, float Time);

	// Object: Function DFMAbility.DFMAbilitySmokeWallUAS.SetMeshVisible
	// Flags: [Final|Native|Protected]
	// Offset: 0xc425ed0
	// Params: [ Num(1) Size(0x1) ]
	void SetMeshVisible(uint8_t bVisible);

	// Object: Function DFMAbility.DFMAbilitySmokeWallUAS.RegisterAbilityActor
	// Flags: [Final|Native|Protected]
	// Offset: 0xc425ebc
	// Params: [ Num(0) Size(0x0) ]
	void RegisterAbilityActor();

	// Object: Function DFMAbility.DFMAbilitySmokeWallUAS.OnRep_SkillId
	// Flags: [Final|Native|Public]
	// Offset: 0xf7a05ec
	// Params: [ Num(0) Size(0x0) ]
	void OnRep_SkillId();

	// Object: Function DFMAbility.DFMAbilitySmokeWallUAS.OnRep_ServerUASStage
	// Flags: [Final|Native|Public]
	// Offset: 0xc425ea8
	// Params: [ Num(0) Size(0x0) ]
	void OnRep_ServerUASStage();

	// Object: Function DFMAbility.DFMAbilitySmokeWallUAS.OnRep_ServerOwner
	// Flags: [Final|Native|Public]
	// Offset: 0x10a50778
	// Params: [ Num(0) Size(0x0) ]
	void OnRep_ServerOwner();

	// Object: Function DFMAbility.DFMAbilitySmokeWallUAS.OnPanelShow
	// Flags: [Final|Native|Public]
	// Offset: 0xc425dc0
	// Params: [ Num(2) Size(0x18) ]
	void OnPanelShow(struct FString FunctionName, struct UBaseUIView* View);

	// Object: Function DFMAbility.DFMAbilitySmokeWallUAS.OnOwnerWeaponChanged
	// Flags: [Final|Native|Protected]
	// Offset: 0xc425dac
	// Params: [ Num(0) Size(0x0) ]
	void OnOwnerWeaponChanged();

	// Object: Function DFMAbility.DFMAbilitySmokeWallUAS.OnNotifyFire
	// Flags: [Final|Native|Public]
	// Offset: 0xc425d98
	// Params: [ Num(0) Size(0x0) ]
	void OnNotifyFire();

	// Object: Function DFMAbility.DFMAbilitySmokeWallUAS.OnAutoStartRep
	// Flags: [Final|Native|Public]
	// Offset: 0x106cb1c8
	// Params: [ Num(0) Size(0x0) ]
	void OnAutoStartRep();

	// Object: Function DFMAbility.DFMAbilitySmokeWallUAS.NotifyShowHud
	// Flags: [Final|Native|Public]
	// Offset: 0xc425cec
	// Params: [ Num(1) Size(0x1) ]
	void NotifyShowHud(uint8_t bShow);

	// Object: Function DFMAbility.DFMAbilitySmokeWallUAS.NotifyServerBeginMove
	// Flags: [Net|NetReliableNative|Event|Public|NetServer|HasDefaults|NetValidate]
	// Offset: 0xc425bd0
	// Params: [ Num(2) Size(0x18) ]
	void NotifyServerBeginMove(struct FVector Position, struct FVector InitVelocity);

	// Object: Function DFMAbility.DFMAbilitySmokeWallUAS.NotifyInitHud
	// Flags: [Final|Native|Public]
	// Offset: 0xc425bbc
	// Params: [ Num(0) Size(0x0) ]
	void NotifyInitHud();

	// Object: Function DFMAbility.DFMAbilitySmokeWallUAS.MulticastBeginMove
	// Flags: [Net|NetReliableNative|Event|NetMulticast|Public|HasDefaults|NetValidate]
	// Offset: 0x100a0ebc
	// Params: [ Num(2) Size(0x18) ]
	void MulticastBeginMove(struct FVector Position, struct FVector InitVelocity);

	// Object: Function DFMAbility.DFMAbilitySmokeWallUAS.Is1P
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xc425b84
	// Params: [ Num(1) Size(0x1) ]
	uint8_t Is1P();

	// Object: Function DFMAbility.DFMAbilitySmokeWallUAS.InitRTC
	// Flags: [Final|Native|Protected]
	// Offset: 0xc425b70
	// Params: [ Num(0) Size(0x0) ]
	void InitRTC();

	// Object: Function DFMAbility.DFMAbilitySmokeWallUAS.DestroyParticleSystem
	// Flags: [Final|Native|Public]
	// Offset: 0xc425b5c
	// Params: [ Num(0) Size(0x0) ]
	void DestroyParticleSystem();

	// Object: Function DFMAbility.DFMAbilitySmokeWallUAS.CreateActionBar
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xc425ab0
	// Params: [ Num(1) Size(0x1) ]
	void CreateActionBar(uint8_t createOrHide);

	// Object: Function DFMAbility.DFMAbilitySmokeWallUAS.BP_GetActionBarText
	// Flags: [Event|Public|BlueprintCallable|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(1) Size(0x18) ]
	struct FText BP_GetActionBarText();

	// Object: Function DFMAbility.DFMAbilitySmokeWallUAS.AsyncPlayParticle
	// Flags: [Final|Native|Public]
	// Offset: 0xc425a9c
	// Params: [ Num(0) Size(0x0) ]
	void AsyncPlayParticle();
};

// Object: Class DFMAbility.DFMAbilitySonarDevice
// Size: 0xC98 (Inherited: 0x9E8)
struct ADFMAbilitySonarDevice : ADFMAbilityBuffDetector
{
	DEFINE_UE_CLASS_HELPERS(ADFMAbilitySonarDevice, "DFMAbilitySonarDevice")

	uint8_t Pad_0x9E8[0x28]; // 0x9E8(0x28)
	struct USkeletalMeshComponent* SkeletalMesh; // 0xA10(0x8)
	struct USceneComponent* MeshRoot; // 0xA18(0x8)
	struct UDFMAudioListenerComponent* AudioListenerComp; // 0xA20(0x8)
	struct TArray<struct FSonarDeviceConfig> ConfigItems; // 0xA28(0x10)
	uint8_t bMiniMapRangeVisibleForEnemy : 1; // 0xA38(0x1), Mask(0x1)
	uint8_t BitPad_0xA38_1 : 7; // 0xA38(0x1)
	uint8_t Pad_0xA39[0x3]; // 0xA39(0x3)
	struct FLinearColor TeamMateRangeColor; // 0xA3C(0x10)
	struct FLinearColor EnemyRangeColor; // 0xA4C(0x10)
	uint8_t Pad_0xA5C[0x24]; // 0xA5C(0x24)
	struct FSonarDeviceConfig Config; // 0xA80(0xF0)
	struct USphereComponent* DetectComp; // 0xB70(0x8)
	float TickTime; // 0xB78(0x4)
	int32_t LeftScanTimes; // 0xB7C(0x4)
	uint8_t bFinish : 1; // 0xB80(0x1), Mask(0x1)
	uint8_t BitPad_0xB80_1 : 7; // 0xB80(0x1)
	uint8_t Pad_0xB81[0x7]; // 0xB81(0x7)
	struct FAvatarFXOperateHandle ScanFXHandle; // 0xB88(0x10)
	struct FAvatarFXOperateHandle ScanDeviceFXHandle; // 0xB98(0x10)
	struct FAvatarFXOperateHandle SilenceDeviceFXHandle; // 0xBA8(0x10)
	float CurrentStartTime; // 0xBB8(0x4)
	float CurrentStageStartTime; // 0xBBC(0x4)
	float NextScanTime; // 0xBC0(0x4)
	int32_t CurrentDetectState; // 0xBC4(0x4)
	struct TArray<struct ADFMCharacter*> DetectCandidateList; // 0xBC8(0x10)
	struct TArray<struct FDetectItem> DetectCharList; // 0xBD8(0x10)
	struct TArray<struct ADFMCharacter*> PreDetectHistoryList; // 0xBE8(0x10)
	struct TArray<struct ADFMCharacter*> DetectHistoryList; // 0xBF8(0x10)
	struct TArray<struct ADFMVehicleBase*> DetectVehicleList; // 0xC08(0x10)
	int32_t EMPDestroyScoreName; // 0xC18(0x4)
	uint8_t Pad_0xC1C[0x4]; // 0xC1C(0x4)
	uint64_t EMPTakerScoreUID; // 0xC20(0x8)
	uint8_t Pad_0xC28[0x10]; // 0xC28(0x10)
	ETacticalEquipmentMarkerType TacticalEquipmentMarker; // 0xC38(0x1)
	EMarkerCampType MarkerType; // 0xC39(0x1)
	uint8_t bCanShowMarker : 1; // 0xC3A(0x1), Mask(0x1)
	uint8_t BitPad_0xC3A_1 : 7; // 0xC3A(0x1)
	uint8_t Pad_0xC3B[0x5]; // 0xC3B(0x5)
	struct UAbilityElectricDeviceMapIconViewController* ViewController; // 0xC40(0x8)
	struct UMapItemRangeSectorViewController* ViewRangeController; // 0xC48(0x8)
	int32_t ThreatId; // 0xC50(0x4)
	uint8_t Pad_0xC54[0x4]; // 0xC54(0x4)
	struct FTimerHandle VOIntervalTimer; // 0xC58(0x8)
	struct FTimerHandle MarkVOIntervalTimer; // 0xC60(0x8)
	struct FAvatarAudioOperateHandle StateAudioHandle; // 0xC68(0x18)
	uint8_t Pad_0xC80[0x18]; // 0xC80(0x18)

	// Object: Function DFMAbility.DFMAbilitySonarDevice.UpdateScanCount
	// Flags: [Final|Native|Protected]
	// Offset: 0xc428bb0
	// Params: [ Num(0) Size(0x0) ]
	void UpdateScanCount();

	// Object: Function DFMAbility.DFMAbilitySonarDevice.UpdateCharacterTimeMap
	// Flags: [Final|Native|Protected|BlueprintCallable]
	// Offset: 0xc4289fc
	// Params: [ Num(5) Size(0x10) ]
	void UpdateCharacterTimeMap(struct AActor* OtherActor, uint8_t fromDetect, uint8_t Enter, uint8_t IsRemove, float StartTime);

	// Object: Function DFMAbility.DFMAbilitySonarDevice.TryAttachToSurface
	// Flags: [Final|Native|Public]
	// Offset: 0xc4289e8
	// Params: [ Num(0) Size(0x0) ]
	void TryAttachToSurface();

	// Object: Function DFMAbility.DFMAbilitySonarDevice.TickDetectList
	// Flags: [Final|Native|Public]
	// Offset: 0xc428944
	// Params: [ Num(1) Size(0x4) ]
	void TickDetectList(float DeltaTime);

	// Object: Function DFMAbility.DFMAbilitySonarDevice.StartAudioListen
	// Flags: [Final|Native|Protected]
	// Offset: 0xc428930
	// Params: [ Num(0) Size(0x0) ]
	void StartAudioListen();

	// Object: Function DFMAbility.DFMAbilitySonarDevice.ResetVO
	// Flags: [Final|Native|Protected]
	// Offset: 0xc42891c
	// Params: [ Num(0) Size(0x0) ]
	void ResetVO();

	// Object: Function DFMAbility.DFMAbilitySonarDevice.ResetMarkVO
	// Flags: [Final|Native|Protected]
	// Offset: 0xc428908
	// Params: [ Num(0) Size(0x0) ]
	void ResetMarkVO();

	// Object: Function DFMAbility.DFMAbilitySonarDevice.RegisterFXComp
	// Flags: [Final|Native|Protected]
	// Offset: 0xc428864
	// Params: [ Num(1) Size(0x8) ]
	void RegisterFXComp(struct UFXResourceContainerComponent* FXComp);

	// Object: Function DFMAbility.DFMAbilitySonarDevice.RefreshDetectLocation
	// Flags: [Final|Native|Protected]
	// Offset: 0xc428850
	// Params: [ Num(0) Size(0x0) ]
	void RefreshDetectLocation();

	// Object: Function DFMAbility.DFMAbilitySonarDevice.RangeDetectCheck
	// Flags: [Final|Native|Protected]
	// Offset: 0xc428714
	// Params: [ Num(3) Size(0x3) ]
	void RangeDetectCheck(uint8_t Enter, uint8_t Remove, uint8_t bNeedUpdateTimeMap);

	// Object: Function DFMAbility.DFMAbilitySonarDevice.RangeCheckTeammate
	// Flags: [Final|Native|Protected]
	// Offset: 0xc428624
	// Params: [ Num(2) Size(0x2) ]
	void RangeCheckTeammate(uint8_t Enter, uint8_t Remove);

	// Object: Function DFMAbility.DFMAbilitySonarDevice.RangeCheckCharacterOut
	// Flags: [Final|Native|Protected]
	// Offset: 0xc428580
	// Params: [ Num(1) Size(0x8) ]
	void RangeCheckCharacterOut(struct ADFMCharacter* CHARACTER);

	// Object: Function DFMAbility.DFMAbilitySonarDevice.RangeCheckCharacterIn
	// Flags: [Final|Native|Protected]
	// Offset: 0xc4284dc
	// Params: [ Num(1) Size(0x8) ]
	void RangeCheckCharacterIn(struct ADFMCharacter* CHARACTER);

	// Object: Function DFMAbility.DFMAbilitySonarDevice.PreStartAudioListen
	// Flags: [Final|Native|Protected]
	// Offset: 0xc4284c8
	// Params: [ Num(0) Size(0x0) ]
	void PreStartAudioListen();

	// Object: Function DFMAbility.DFMAbilitySonarDevice.PlayVO
	// Flags: [Final|Native|Protected]
	// Offset: 0xc4283d0
	// Params: [ Num(1) Size(0x10) ]
	void PlayVO(struct FString VOName);

	// Object: Function DFMAbility.DFMAbilitySonarDevice.PlayScanFX
	// Flags: [Final|Native|Protected]
	// Offset: 0xc4283bc
	// Params: [ Num(0) Size(0x0) ]
	void PlayScanFX();

	// Object: Function DFMAbility.DFMAbilitySonarDevice.PlayMarkVO
	// Flags: [Final|Native|Protected]
	// Offset: 0xc4283a8
	// Params: [ Num(0) Size(0x0) ]
	void PlayMarkVO();

	// Object: Function DFMAbility.DFMAbilitySonarDevice.PlayCurrentStateAudio
	// Flags: [Final|Native|Protected]
	// Offset: 0xc428304
	// Params: [ Num(1) Size(0x4) ]
	void PlayCurrentStateAudio(int32_t CurrentState);

	// Object: Function DFMAbility.DFMAbilitySonarDevice.PlayCharacterMarkAudio
	// Flags: [Final|Native|Protected]
	// Offset: 0xc428260
	// Params: [ Num(1) Size(0x8) ]
	void PlayCharacterMarkAudio(struct ADFMCharacter* Target);

	// Object: Function DFMAbility.DFMAbilitySonarDevice.MulticastClientDestroySelf
	// Flags: [Net|NetReliableNative|Event|NetMulticast|Protected]
	// Offset: 0xc428244
	// Params: [ Num(0) Size(0x0) ]
	void MulticastClientDestroySelf();

	// Object: Function DFMAbility.DFMAbilitySonarDevice.InitAudioListenComp
	// Flags: [Final|Native|Protected]
	// Offset: 0xc428230
	// Params: [ Num(0) Size(0x0) ]
	void InitAudioListenComp();

	// Object: Function DFMAbility.DFMAbilitySonarDevice.EndShowScanCount
	// Flags: [Final|Native|Protected]
	// Offset: 0xc42821c
	// Params: [ Num(0) Size(0x0) ]
	void EndShowScanCount();

	// Object: Function DFMAbility.DFMAbilitySonarDevice.EndAudioListen
	// Flags: [Final|Native|Protected]
	// Offset: 0xc428208
	// Params: [ Num(0) Size(0x0) ]
	void EndAudioListen();

	// Object: Function DFMAbility.DFMAbilitySonarDevice.EmptyDetectCharList
	// Flags: [Final|Native|Protected]
	// Offset: 0xc4281f4
	// Params: [ Num(0) Size(0x0) ]
	void EmptyDetectCharList();

	// Object: Function DFMAbility.DFMAbilitySonarDevice.EmptyDetectCandidateList
	// Flags: [Final|Native|Protected]
	// Offset: 0xc4281e0
	// Params: [ Num(0) Size(0x0) ]
	void EmptyDetectCandidateList();

	// Object: Function DFMAbility.DFMAbilitySonarDevice.DetectVehicle
	// Flags: [Final|Native|Protected]
	// Offset: 0xc42813c
	// Params: [ Num(1) Size(0x8) ]
	void DetectVehicle(struct AGPVehicleBase* Vehicle);

	// Object: Function DFMAbility.DFMAbilitySonarDevice.DetectCharacter
	// Flags: [Final|Native|Protected]
	// Offset: 0xc428098
	// Params: [ Num(1) Size(0x8) ]
	void DetectCharacter(struct ADFMCharacter* CHARACTER);

	// Object: Function DFMAbility.DFMAbilitySonarDevice.DestroySelfActor
	// Flags: [Final|Native|Public]
	// Offset: 0xc428084
	// Params: [ Num(0) Size(0x0) ]
	void DestroySelfActor();

	// Object: Function DFMAbility.DFMAbilitySonarDevice.ClientShowLine
	// Flags: [Net|NetReliableNative|Event|NetMulticast|Public]
	// Offset: 0xc428068
	// Params: [ Num(0) Size(0x0) ]
	void ClientShowLine();

	// Object: Function DFMAbility.DFMAbilitySonarDevice.ClearDetectMarker
	// Flags: [Final|Native|Protected]
	// Offset: 0xc427fc4
	// Params: [ Num(1) Size(0x8) ]
	void ClearDetectMarker(struct AActor* Target);

	// Object: Function DFMAbility.DFMAbilitySonarDevice.CheckIsInWater
	// Flags: [Final|Native|Protected]
	// Offset: 0xc427fb0
	// Params: [ Num(0) Size(0x0) ]
	void CheckIsInWater();

	// Object: Function DFMAbility.DFMAbilitySonarDevice.CheckActorValid
	// Flags: [Final|Native|Protected]
	// Offset: 0xc427f00
	// Params: [ Num(2) Size(0x9) ]
	uint8_t CheckActorValid(struct AActor* InActor);

	// Object: Function DFMAbility.DFMAbilitySonarDevice.CharacterDetectStart
	// Flags: [Final|Native|Protected]
	// Offset: 0xc427e5c
	// Params: [ Num(1) Size(0x8) ]
	void CharacterDetectStart(struct ADFMCharacter* CHARACTER);

	// Object: Function DFMAbility.DFMAbilitySonarDevice.CharacterDetectEnd
	// Flags: [Final|Native|Protected]
	// Offset: 0xc427d7c
	// Params: [ Num(2) Size(0xC) ]
	void CharacterDetectEnd(struct ADFMCharacter* CHARACTER, float LastDetectTime);
};

// Object: Class DFMAbility.DFMAbilitySpawnActorSystem
// Size: 0x110 (Inherited: 0x50)
struct UDFMAbilitySpawnActorSystem : UDFMAbilitySystemBase
{
	DEFINE_UE_CLASS_HELPERS(UDFMAbilitySpawnActorSystem, "DFMAbilitySpawnActorSystem")

	struct FAbilityEntityQuery SpawnActorQuery; // 0x50(0xC0)
};

// Object: Class DFMAbility.DFMAbilityStateSystem
// Size: 0x50 (Inherited: 0x50)
struct UDFMAbilityStateSystem : UDFMAbilitySystemBase
{
	DEFINE_UE_CLASS_HELPERS(UDFMAbilityStateSystem, "DFMAbilityStateSystem")

	// Object: Function DFMAbility.DFMAbilityStateSystem.OnLeaveStateSignal
	// Flags: [Final|Native|Public]
	// Offset: 0xc428c68
	// Params: [ Num(4) Size(0x11) ]
	void OnLeaveStateSignal(struct UQA_AbilityLogicTask* QA, int32_t skillEntityIndex, int32_t LogicID, EAbilityTriggerType Trigger);
};

// Object: Class DFMAbility.DFMAbilityLeaveStateSystem
// Size: 0x50 (Inherited: 0x50)
struct UDFMAbilityLeaveStateSystem : UDFMAbilitySystemBase
{
	DEFINE_UE_CLASS_HELPERS(UDFMAbilityLeaveStateSystem, "DFMAbilityLeaveStateSystem")
};

// Object: Class DFMAbility.DFMAbilityStormBall
// Size: 0xA38 (Inherited: 0x9E8)
struct ADFMAbilityStormBall : ADFMAbilityBuffDetector
{
	DEFINE_UE_CLASS_HELPERS(ADFMAbilityStormBall, "DFMAbilityStormBall")

	struct TSet<uint64_t> CharSet; // 0x9E8(0x50)

	// Object: Function DFMAbility.DFMAbilityStormBall.IsDestroy
	// Flags: [Native|Event|Public|BlueprintEvent]
	// Offset: 0xc428dd0
	// Params: [ Num(1) Size(0x1) ]
	uint8_t IsDestroy();
};

// Object: Class DFMAbility.DFMAbilitySubtitleManagerSystem
// Size: 0x90 (Inherited: 0x28)
struct UDFMAbilitySubtitleManagerSystem : UObject
{
	DEFINE_UE_CLASS_HELPERS(UDFMAbilitySubtitleManagerSystem, "DFMAbilitySubtitleManagerSystem")

	uint8_t Pad_0x28[0x68]; // 0x28(0x68)

	// Object: Function DFMAbility.DFMAbilitySubtitleManagerSystem.PreloadSubtitleResource
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0xc429338
	// Params: [ Num(1) Size(0x8) ]
	void PreloadSubtitleResource(const struct FName& SubtitleName);

	// Object: Function DFMAbility.DFMAbilitySubtitleManagerSystem.PlaySubtitle
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable]
	// Offset: 0xc429150
	// Params: [ Num(5) Size(0x31) ]
	uint8_t PlaySubtitle(const struct FName& SubtitleName, struct AActor* SpeakerActor, const struct FVector& AlertLocation, struct FString POIName);

	// Object: Function DFMAbility.DFMAbilitySubtitleManagerSystem.GetSubtitleConfig
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0xc428ee0
	// Params: [ Num(3) Size(0x81) ]
	uint8_t GetSubtitleConfig(const struct FName& SubtitleName, struct FDFMAbilitySubTitleConfig& SubtitleConfig);

	// Object: Function DFMAbility.DFMAbilitySubtitleManagerSystem.GetInstance
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0xc428e3c
	// Params: [ Num(2) Size(0x10) ]
	static struct UDFMAbilitySubtitleManagerSystem* GetInstance(struct UObject* WorldContextObject);
};

// Object: Class DFMAbility.DFMAbilitySuppressionMine
// Size: 0xC18 (Inherited: 0x9E8)
struct ADFMAbilitySuppressionMine : ADFMAbilityBuffDetector
{
	DEFINE_UE_CLASS_HELPERS(ADFMAbilitySuppressionMine, "DFMAbilitySuppressionMine")

	uint8_t Pad_0x9E8[0x24]; // 0x9E8(0x24)
	struct FName AvatarWorkAudioKey; // 0xA0C(0x8)
	struct FName AvatarStandbyAudioKey; // 0xA14(0x8)
	struct FName AvatarTriggerCountDownAudioKey; // 0xA1C(0x8)
	struct FName AvatarAlertAudioKey; // 0xA24(0x8)
	struct FName AvatarWaveImpactAudioKey; // 0xA2C(0x8)
	struct FName AvatarDeployAudioKey; // 0xA34(0x8)
	struct FName AvatarDeployExpandAudioKey; // 0xA3C(0x8)
	struct FName AvatarBounceAudioKey; // 0xA44(0x8)
	struct FName AvatarDestroyAudioKey; // 0xA4C(0x8)
	struct FAvatarAudioOperateHandle AvatarDeployAudioHandle; // 0xA54(0x18)
	struct FAvatarAudioOperateHandle AvatarWorkAudioHandle; // 0xA6C(0x18)
	struct FAvatarAudioOperateHandle AvatarStandbyAudioHandle; // 0xA84(0x18)
	int32_t ThreatId; // 0xA9C(0x4)
	struct FText RecycleText; // 0xAA0(0x18)
	struct FName OutLineEffectMeshTag; // 0xAB8(0x8)
	struct USkeletalMeshComponent* OutLineEffectMesh; // 0xAC0(0x8)
	struct TWeakObjectPtr<struct AActor> Grenade; // 0xAC8(0x8)
	struct FGPWeaponBulletThrowableProjectileInfo ProjectileInfo; // 0xAD0(0x78)
	struct FName PanelName; // 0xB48(0x8)
	ETacticalEquipmentMarkerType TacticalEquipmentMarker; // 0xB50(0x1)
	uint8_t Pad_0xB51[0x3]; // 0xB51(0x3)
	float TraceStartOffset; // 0xB54(0x4)
	float ActiveTime; // 0xB58(0x4)
	float DelayActiveTime; // 0xB5C(0x4)
	float PickUpDistance; // 0xB60(0x4)
	float ManualActivateDistance; // 0xB64(0x4)
	float PickUpDirectionDegree; // 0xB68(0x4)
	uint8_t bPickUpDisTrace : 1; // 0xB6C(0x1), Mask(0x1)
	uint8_t BitPad_0xB6C_1 : 7; // 0xB6C(0x1)
	uint8_t Pad_0xB6D[0x3]; // 0xB6D(0x3)
	float PickUpTraceTimeInterval; // 0xB70(0x4)
	ECollisionChannel PickUpTraceChannel; // 0xB74(0x1)
	uint8_t Pad_0xB75[0x3]; // 0xB75(0x3)
	float ActiveDistance; // 0xB78(0x4)
	float ActiveDirectionDegree; // 0xB7C(0x4)
	uint8_t bActiveDisTrace : 1; // 0xB80(0x1), Mask(0x1)
	uint8_t BitPad_0xB80_1 : 7; // 0xB80(0x1)
	uint8_t Pad_0xB81[0x3]; // 0xB81(0x3)
	float BloodDistance; // 0xB84(0x4)
	float NearDistanceHP; // 0xB88(0x4)
	float MaxDistanceToDestroy; // 0xB8C(0x4)
	float DestroyDistanceCheckDelayTime; // 0xB90(0x4)
	float DestroyDistanceCheckUIOffsetTime; // 0xB94(0x4)
	float ReadyToRecoverTime; // 0xB98(0x4)
	struct FName MapIconColor_Self; // 0xB9C(0x8)
	struct FName MapIconColor_TeamMate; // 0xBA4(0x8)
	struct FName MapIconColor_CampMate; // 0xBAC(0x8)
	EAbilityDetectorTriggerType TriggerState; // 0xBB4(0x1)
	uint8_t bHasActive : 1; // 0xBB5(0x1), Mask(0x1)
	uint8_t BitPad_0xBB5_1 : 7; // 0xBB5(0x1)
	uint8_t bDeployFinished : 1; // 0xBB6(0x1), Mask(0x1)
	uint8_t BitPad_0xBB6_1 : 7; // 0xBB6(0x1)
	uint8_t bClientHasActive : 1; // 0xBB7(0x1), Mask(0x1)
	uint8_t BitPad_0xBB7_1 : 7; // 0xBB7(0x1)
	uint8_t bClientPreActive : 1; // 0xBB8(0x1), Mask(0x1)
	uint8_t BitPad_0xBB8_1 : 7; // 0xBB8(0x1)
	ECharacterFSMEventDefine thisevent; // 0xBB9(0x1)
	uint8_t Pad_0xBBA[0x6]; // 0xBBA(0x6)
	struct FTimerHandle ReplayTimerHandle; // 0xBC0(0x8)
	struct FTimerHandle ActiveSuppressionMineTimerHandle; // 0xBC8(0x8)
	uint8_t Pad_0xBD0[0x8]; // 0xBD0(0x8)
	uint8_t bMaxDistaceToDestoyed : 1; // 0xBD8(0x1), Mask(0x1)
	uint8_t BitPad_0xBD8_1 : 7; // 0xBD8(0x1)
	uint8_t Pad_0xBD9[0x1]; // 0xBD9(0x1)
	uint8_t bIsFirstEnemyEnter : 1; // 0xBDA(0x1), Mask(0x1)
	uint8_t BitPad_0xBDA_1 : 7; // 0xBDA(0x1)
	uint8_t Pad_0xBDB[0x1]; // 0xBDB(0x1)
	uint8_t bIsPreDestroyed : 1; // 0xBDC(0x1), Mask(0x1)
	uint8_t BitPad_0xBDC_1 : 7; // 0xBDC(0x1)
	uint8_t Pad_0xBDD[0xB]; // 0xBDD(0xB)
	struct UShapeComponent* TriggerCache; // 0xBE8(0x8)
	uint8_t Pad_0xBF0[0x28]; // 0xBF0(0x28)

	// Object: Function DFMAbility.DFMAbilitySuppressionMine.SuppressionMineTriggerEvent
	// Flags: [Final|Native|Public]
	// Offset: 0xc42a4a0
	// Params: [ Num(3) Size(0x14) ]
	void SuppressionMineTriggerEvent(struct AActor* NewCharacterOwner, struct AActor* Bunker, int32_t TriggerType);

	// Object: Function DFMAbility.DFMAbilitySuppressionMine.StartAction
	// Flags: [Native|Public]
	// Offset: 0xc42a484
	// Params: [ Num(0) Size(0x0) ]
	void StartAction();

	// Object: Function DFMAbility.DFMAbilitySuppressionMine.SetDeployFinished
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xc42a3d8
	// Params: [ Num(1) Size(0x1) ]
	void SetDeployFinished(uint8_t NewDeployFinished);

	// Object: Function DFMAbility.DFMAbilitySuppressionMine.Recycle
	// Flags: [Native|Public]
	// Offset: 0xc42a3bc
	// Params: [ Num(0) Size(0x0) ]
	void Recycle();

	// Object: Function DFMAbility.DFMAbilitySuppressionMine.OnServerMatchEnd
	// Flags: [Native|Public]
	// Offset: 0xc42a2d4
	// Params: [ Num(2) Size(0x10) ]
	void OnServerMatchEnd(EMatchOverReason EndReason, int64_t Uin);

	// Object: Function DFMAbility.DFMAbilitySuppressionMine.OnRep_TriggerState
	// Flags: [Final|Native|Public]
	// Offset: 0xc42a2c0
	// Params: [ Num(0) Size(0x0) ]
	void OnRep_TriggerState();

	// Object: Function DFMAbility.DFMAbilitySuppressionMine.OnDSReplayTimerCallBack
	// Flags: [Final|Native|Protected]
	// Offset: 0xc42a2ac
	// Params: [ Num(0) Size(0x0) ]
	void OnDSReplayTimerCallBack();

	// Object: Function DFMAbility.DFMAbilitySuppressionMine.OnCharacterDead
	// Flags: [Native|Public]
	// Offset: 0xc42a18c
	// Params: [ Num(3) Size(0x18) ]
	void OnCharacterDead(struct AGPCharacterBase* CHARACTER, struct AController* Killer, struct UDamageType* DamageType);

	// Object: Function DFMAbility.DFMAbilitySuppressionMine.OnCharacterBeKnockedDown
	// Flags: [Final|Native|Public|HasOutParms]
	// Offset: 0xc42a0c8
	// Params: [ Num(1) Size(0x1A8) ]
	void OnCharacterBeKnockedDown(struct FKillInfo& KillInfo);

	// Object: Function DFMAbility.DFMAbilitySuppressionMine.OnCharacterArmedForceChanged
	// Flags: [Native|Public]
	// Offset: 0xc42a0ac
	// Params: [ Num(0) Size(0x0) ]
	void OnCharacterArmedForceChanged();

	// Object: Function DFMAbility.DFMAbilitySuppressionMine.OnActivatePlayDSReplay
	// Flags: [Final|Native|Protected]
	// Offset: 0xc42a098
	// Params: [ Num(0) Size(0x0) ]
	void OnActivatePlayDSReplay();

	// Object: Function DFMAbility.DFMAbilitySuppressionMine.NotifyDataFlowDead
	// Flags: [Final|Native|Public]
	// Offset: 0xc42a084
	// Params: [ Num(0) Size(0x0) ]
	void NotifyDataFlowDead();

	// Object: Function DFMAbility.DFMAbilitySuppressionMine.NotifyClientEnenyInside
	// Flags: [Net|NetReliableNative|Event|NetMulticast|Public]
	// Offset: 0xc429f98
	// Params: [ Num(2) Size(0x5) ]
	void NotifyClientEnenyInside(int32_t EnemyCount, uint8_t IsFirstEnemyEnter);

	// Object: Function DFMAbility.DFMAbilitySuppressionMine.IsPreDestroyed
	// Flags: [Final|Native|Public]
	// Offset: 0xc429f60
	// Params: [ Num(1) Size(0x1) ]
	uint8_t IsPreDestroyed();

	// Object: Function DFMAbility.DFMAbilitySuppressionMine.HasActive
	// Flags: [Final|Native|Public]
	// Offset: 0xc429f28
	// Params: [ Num(1) Size(0x1) ]
	uint8_t HasActive();

	// Object: Function DFMAbility.DFMAbilitySuppressionMine.GetRecycleTipsActionText
	// Flags: [Event|Public|BlueprintCallable|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(1) Size(0x18) ]
	struct FText GetRecycleTipsActionText();

	// Object: Function DFMAbility.DFMAbilitySuppressionMine.GetRecycleTipsActionName
	// Flags: [Event|Public|BlueprintCallable|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(1) Size(0x8) ]
	struct FName GetRecycleTipsActionName();

	// Object: Function DFMAbility.DFMAbilitySuppressionMine.GetCharacterOwner
	// Flags: [Native|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0xc429eec
	// Params: [ Num(1) Size(0x8) ]
	struct ACHARACTER* GetCharacterOwner();

	// Object: Function DFMAbility.DFMAbilitySuppressionMine.GetActiveTipsActionText
	// Flags: [Event|Public|BlueprintCallable|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(1) Size(0x18) ]
	struct FText GetActiveTipsActionText();

	// Object: Function DFMAbility.DFMAbilitySuppressionMine.GetActiveTipsActionName
	// Flags: [Event|Public|BlueprintCallable|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(1) Size(0x8) ]
	struct FName GetActiveTipsActionName();

	// Object: Function DFMAbility.DFMAbilitySuppressionMine.EMPClientRecover
	// Flags: [Net|NetReliableNative|Event|NetMulticast|Public]
	// Offset: 0xc429e38
	// Params: [ Num(1) Size(0x1) ]
	void EMPClientRecover(uint8_t IsReady);

	// Object: Function DFMAbility.DFMAbilitySuppressionMine.EMPClientDisable
	// Flags: [Net|NetReliableNative|Event|NetMulticast|Public]
	// Offset: 0xc429e1c
	// Params: [ Num(0) Size(0x0) ]
	void EMPClientDisable();

	// Object: Function DFMAbility.DFMAbilitySuppressionMine.DelayExit
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xc429e08
	// Params: [ Num(0) Size(0x0) ]
	void DelayExit();

	// Object: Function DFMAbility.DFMAbilitySuppressionMine.ClientRecycle
	// Flags: [Net|NetReliableNative|Event|NetMulticast|Public]
	// Offset: 0xc429dec
	// Params: [ Num(0) Size(0x0) ]
	void ClientRecycle();

	// Object: Function DFMAbility.DFMAbilitySuppressionMine.ClientPreDestoy
	// Flags: [Net|NetReliableNative|Event|NetMulticast|Public]
	// Offset: 0xc429dd0
	// Params: [ Num(0) Size(0x0) ]
	void ClientPreDestoy();

	// Object: Function DFMAbility.DFMAbilitySuppressionMine.ClientActiveSuppressionMine
	// Flags: [Net|NetReliableNative|Event|NetMulticast|Public]
	// Offset: 0xc429d1c
	// Params: [ Num(1) Size(0x1) ]
	void ClientActiveSuppressionMine(uint8_t IsOwnerActivate);

	// Object: Function DFMAbility.DFMAbilitySuppressionMine.ClientActivePlayWantVoice
	// Flags: [Final|Native|Protected]
	// Offset: 0xc429c70
	// Params: [ Num(1) Size(0x1) ]
	void ClientActivePlayWantVoice(uint8_t bOwnerActivate);

	// Object: Function DFMAbility.DFMAbilitySuppressionMine.ClearDSReplayTimerCallBack
	// Flags: [Final|Native|Protected]
	// Offset: 0xc429c5c
	// Params: [ Num(0) Size(0x0) ]
	void ClearDSReplayTimerCallBack();

	// Object: Function DFMAbility.DFMAbilitySuppressionMine.CheckAttachedParent
	// Flags: [Final|Native|Protected]
	// Offset: 0xc429c48
	// Params: [ Num(0) Size(0x0) ]
	void CheckAttachedParent();

	// Object: Function DFMAbility.DFMAbilitySuppressionMine.BP_Recycle
	// Flags: [Event|Public|BlueprintCallable|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(0) Size(0x0) ]
	void BP_Recycle();

	// Object: Function DFMAbility.DFMAbilitySuppressionMine.BP_PlayAudioOnPreDestroy
	// Flags: [Event|Public|BlueprintCallable|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(0) Size(0x0) ]
	void BP_PlayAudioOnPreDestroy();

	// Object: Function DFMAbility.DFMAbilitySuppressionMine.BP_PlayAudioOnFlyToGround
	// Flags: [Event|Public|BlueprintCallable|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(0) Size(0x0) ]
	void BP_PlayAudioOnFlyToGround();

	// Object: Function DFMAbility.DFMAbilitySuppressionMine.BP_PlayAudioOnEnemyLeave
	// Flags: [Event|Public|BlueprintCallable|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(0) Size(0x0) ]
	void BP_PlayAudioOnEnemyLeave();

	// Object: Function DFMAbility.DFMAbilitySuppressionMine.BP_PlayAudioOnEnemyEnter
	// Flags: [Event|Public|BlueprintCallable|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(1) Size(0x1) ]
	void BP_PlayAudioOnEnemyEnter(uint8_t IsFirstEnemyEnter);

	// Object: Function DFMAbility.DFMAbilitySuppressionMine.BP_PlayAudioOnActivate
	// Flags: [Event|Public|BlueprintCallable|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(1) Size(0x1) ]
	void BP_PlayAudioOnActivate(uint8_t IsOwnerActivate);

	// Object: Function DFMAbility.DFMAbilitySuppressionMine.BP_OnDeploy
	// Flags: [Event|Public|BlueprintCallable|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(0) Size(0x0) ]
	void BP_OnDeploy();

	// Object: Function DFMAbility.DFMAbilitySuppressionMine.BP_EMPClientRecover
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(1) Size(0x1) ]
	void BP_EMPClientRecover(uint8_t IsReady);

	// Object: Function DFMAbility.DFMAbilitySuppressionMine.BP_EMPClientDisable
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(0) Size(0x0) ]
	void BP_EMPClientDisable();

	// Object: Function DFMAbility.DFMAbilitySuppressionMine.BP_DelayExit
	// Flags: [Event|Public|BlueprintCallable|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(0) Size(0x0) ]
	void BP_DelayExit();

	// Object: Function DFMAbility.DFMAbilitySuppressionMine.BP_AcitveSuppressionMine
	// Flags: [Event|Public|BlueprintCallable|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(0) Size(0x0) ]
	void BP_AcitveSuppressionMine();

	// Object: Function DFMAbility.DFMAbilitySuppressionMine.ActiveSuppressionMine
	// Flags: [Final|Native|Public]
	// Offset: 0xc429c34
	// Params: [ Num(0) Size(0x0) ]
	void ActiveSuppressionMine();
};

// Object: Class DFMAbility.DFMAbilitySystemInstanceBase
// Size: 0x60 (Inherited: 0x50)
struct UDFMAbilitySystemInstanceBase : UDFMAbilitySystemBase
{
	DEFINE_UE_CLASS_HELPERS(UDFMAbilitySystemInstanceBase, "DFMAbilitySystemInstanceBase")

	struct FName LogicName; // 0x50(0x8)
	struct TWeakObjectPtr<struct UDFMAbilityInstance> AbilityInstance; // 0x58(0x8)
};

// Object: Class DFMAbility.DFMAbilityThreatActor
// Size: 0x380 (Inherited: 0x370)
struct ADFMAbilityThreatActor : AActor
{
	DEFINE_UE_CLASS_HELPERS(ADFMAbilityThreatActor, "DFMAbilityThreatActor")

	uint8_t Pad_0x370[0x8]; // 0x370(0x8)
	int32_t ThreatId; // 0x378(0x4)
	uint8_t Pad_0x37C[0x4]; // 0x37C(0x4)
};

// Object: Class DFMAbility.DFMAbilityThrowBlocking
// Size: 0x620 (Inherited: 0x418)
struct ADFMAbilityThrowBlocking : ADFMAbilityThrowBlockingBaseActor
{
	DEFINE_UE_CLASS_HELPERS(ADFMAbilityThrowBlocking, "DFMAbilityThrowBlocking")

	uint8_t Pad_0x418[0x38]; // 0x418(0x38)
	struct TArray<struct FAbilityThrowBlockingData> AllGameRoleData; // 0x450(0x10)
	uint8_t bIsFullyExpanded : 1; // 0x460(0x1), Mask(0x1)
	uint8_t BitPad_0x460_1 : 7; // 0x460(0x1)
	uint8_t Pad_0x461[0x3]; // 0x461(0x3)
	int32_t EdgeCheckMinPassNum; // 0x464(0x4)
	struct FVector CheckCenterOffset; // 0x468(0xC)
	struct FVector EdgeCheckSize; // 0x474(0xC)
	struct FVector EdgeCheckOffset; // 0x480(0xC)
	struct FName BurningFX; // 0x48C(0x8)
	float HPTickDelay; // 0x494(0x4)
	float MinDestroyDistance; // 0x498(0x4)
	float ParentDestroyedDelay; // 0x49C(0x4)
	float DestroyDelay; // 0x4A0(0x4)
	EHitEventType HitEventType; // 0x4A4(0x1)
	uint8_t Pad_0x4A5[0x3]; // 0x4A5(0x3)
	struct FName ThrowAttachableTag; // 0x4A8(0x8)
	struct FGameplayTag ThrowAttachableGamePlayTag; // 0x4B0(0x8)
	float CharacterFallingCheckDistance; // 0x4B8(0x4)
	float CharacterZiplineCheckDistance; // 0x4BC(0x4)
	float CharacterPassiveMoveCheckDistance; // 0x4C0(0x4)
	struct FName MtDamageParamName; // 0x4C4(0x8)
	float MtDamageParamMaxVal; // 0x4CC(0x4)
	struct FName MtBurnParamName; // 0x4D0(0x8)
	float MtBurnParamMaxValue; // 0x4D8(0x4)
	float MtBurnParamLerpTime; // 0x4DC(0x4)
	float MtSpawnLerpTime; // 0x4E0(0x4)
	uint8_t Pad_0x4E4[0x4]; // 0x4E4(0x4)
	struct TArray<struct FAbilityThrowBlockingSpawnMaterialParameter> SpawnMaterialParameter; // 0x4E8(0x10)
	int32_t HitFeedbackAudioId; // 0x4F8(0x4)
	float SpawnAudioTimeSeconds; // 0x4FC(0x4)
	struct UGPAudioEventAsset* StartSpawnEvent; // 0x500(0x8)
	struct UGPAudioEventAsset* EndSpawnEvent; // 0x508(0x8)
	struct UGPAudioEventAsset* StartBurningEvent; // 0x510(0x8)
	struct UGPAudioEventAsset* EndBurningEvent; // 0x518(0x8)
	struct UGPAudioEventAsset* PartDamagedEvent; // 0x520(0x8)
	struct USceneComponent* SceneComponent; // 0x528(0x8)
	struct UBoxComponent* TriggerBox; // 0x530(0x8)
	struct UBoxComponent* NavBox; // 0x538(0x8)
	uint8_t Pad_0x540[0x4]; // 0x540(0x4)
	int32_t CurrentDataIndex; // 0x544(0x4)
	struct FAbilityThrowBlockingData CurrentData; // 0x548(0x30)
	struct UThrowBlockingPartComponent* MainPartComponent; // 0x578(0x8)
	struct TArray<struct UThrowBlockingPartComponent*> AllPartsArray; // 0x580(0x10)
	struct TArray<struct TWeakObjectPtr<struct AGPCharacter>> AllCheckCharacters; // 0x590(0x10)
	struct TArray<struct ADFMAbilityThrowBlocking*> AllOverlapBlockings; // 0x5A0(0x10)
	struct FTimerHandle SpawnTimerHandle; // 0x5B0(0x8)
	struct FTimerHandle SpawnSoundTimerHandle; // 0x5B8(0x8)
	struct FTimerHandle TickTimerHandle; // 0x5C0(0x8)
	struct FTimerHandle DestroyTimerHandle; // 0x5C8(0x8)
	struct TWeakObjectPtr<struct AActor> SpawnHitTarget; // 0x5D0(0x8)
	struct TWeakObjectPtr<struct UPrimitiveComponent> SpawnHitComponent; // 0x5D8(0x8)
	struct TArray<uint16_t> BlockBatchIdArray; // 0x5E0(0x10)
	uint8_t bLastHitMainPart : 1; // 0x5F0(0x1), Mask(0x1)
	uint8_t BitPad_0x5F0_1 : 7; // 0x5F0(0x1)
	uint8_t bHasTakeDamage : 1; // 0x5F1(0x1), Mask(0x1)
	uint8_t BitPad_0x5F1_1 : 7; // 0x5F1(0x1)
	uint8_t bIsReachMaxHP : 1; // 0x5F2(0x1), Mask(0x1)
	uint8_t BitPad_0x5F2_1 : 7; // 0x5F2(0x1)
	uint8_t bEnableAttach : 1; // 0x5F3(0x1), Mask(0x1)
	uint8_t BitPad_0x5F3_1 : 7; // 0x5F3(0x1)
	uint8_t bIsSpawning : 1; // 0x5F4(0x1), Mask(0x1)
	uint8_t BitPad_0x5F4_1 : 7; // 0x5F4(0x1)
	uint8_t bIsBurning : 1; // 0x5F5(0x1), Mask(0x1)
	uint8_t BitPad_0x5F5_1 : 7; // 0x5F5(0x1)
	uint8_t bIsDestroyAll : 1; // 0x5F6(0x1), Mask(0x1)
	uint8_t BitPad_0x5F6_1 : 7; // 0x5F6(0x1)
	uint8_t Pad_0x5F7[0x1]; // 0x5F7(0x1)
	float BeginPlayTime; // 0x5F8(0x4)
	float LastHPRate; // 0x5FC(0x4)
	float LifeTimeSecond; // 0x600(0x4)
	float DestroyTimeSecond; // 0x604(0x4)
	struct FVector LastLocation; // 0x608(0xC)
	uint8_t Pad_0x614[0x8]; // 0x614(0x8)
	ETacticalEquipmentMarkerType ChildMarkerType; // 0x61C(0x1)
	uint8_t Pad_0x61D[0x3]; // 0x61D(0x3)

	// Object: Function DFMAbility.DFMAbilityThrowBlocking.TryAddBreakThroughScore
	// Flags: [Final|Native|Private|HasOutParms]
	// Offset: 0xc42f27c
	// Params: [ Num(1) Size(0x8A0) ]
	void TryAddBreakThroughScore(const struct FDamageResultInfo& DamageResult);

	// Object: Function DFMAbility.DFMAbilityThrowBlocking.TickNavBox
	// Flags: [Final|Native|Private|Const]
	// Offset: 0xc42f268
	// Params: [ Num(0) Size(0x0) ]
	void TickNavBox();

	// Object: Function DFMAbility.DFMAbilityThrowBlocking.TickHPCurve
	// Flags: [Final|Native|Private]
	// Offset: 0xc42f1c4
	// Params: [ Num(1) Size(0x4) ]
	void TickHPCurve(float CurrTime);

	// Object: Function DFMAbility.DFMAbilityThrowBlocking.TickCheckPartNumber
	// Flags: [Final|Native|Private]
	// Offset: 0xc42f1b0
	// Params: [ Num(0) Size(0x0) ]
	void TickCheckPartNumber();

	// Object: Function DFMAbility.DFMAbilityThrowBlocking.TickCheckLocation
	// Flags: [Final|Native|Private]
	// Offset: 0xc42f19c
	// Params: [ Num(0) Size(0x0) ]
	void TickCheckLocation();

	// Object: Function DFMAbility.DFMAbilityThrowBlocking.TickCheckCharacters
	// Flags: [Final|Native|Private]
	// Offset: 0xc42f188
	// Params: [ Num(0) Size(0x0) ]
	void TickCheckCharacters();

	// Object: Function DFMAbility.DFMAbilityThrowBlocking.TickBurning
	// Flags: [Final|Native|Private]
	// Offset: 0xc42f174
	// Params: [ Num(0) Size(0x0) ]
	void TickBurning();

	// Object: Function DFMAbility.DFMAbilityThrowBlocking.StopTickTimer
	// Flags: [Final|Native|Private]
	// Offset: 0xc42f160
	// Params: [ Num(0) Size(0x0) ]
	void StopTickTimer();

	// Object: Function DFMAbility.DFMAbilityThrowBlocking.StopSpawnTimer
	// Flags: [Final|Native|Private]
	// Offset: 0xc42f14c
	// Params: [ Num(0) Size(0x0) ]
	void StopSpawnTimer();

	// Object: Function DFMAbility.DFMAbilityThrowBlocking.StopSpawnAudio
	// Flags: [Final|Native|Private]
	// Offset: 0xc42f138
	// Params: [ Num(0) Size(0x0) ]
	void StopSpawnAudio();

	// Object: Function DFMAbility.DFMAbilityThrowBlocking.StopDestroyTimer
	// Flags: [Final|Native|Private]
	// Offset: 0xc42f124
	// Params: [ Num(0) Size(0x0) ]
	void StopDestroyTimer();

	// Object: Function DFMAbility.DFMAbilityThrowBlocking.StartTickTimer
	// Flags: [Final|Native|Private]
	// Offset: 0xc42f110
	// Params: [ Num(0) Size(0x0) ]
	void StartTickTimer();

	// Object: Function DFMAbility.DFMAbilityThrowBlocking.StartSpawnTimer
	// Flags: [Final|Native|Private]
	// Offset: 0xc42f0fc
	// Params: [ Num(0) Size(0x0) ]
	void StartSpawnTimer();

	// Object: Function DFMAbility.DFMAbilityThrowBlocking.StartDestroyTimer
	// Flags: [Final|Native|Private]
	// Offset: 0xc42f0e8
	// Params: [ Num(0) Size(0x0) ]
	void StartDestroyTimer();

	// Object: Function DFMAbility.DFMAbilityThrowBlocking.SetSpawnHitTarget
	// Flags: [Final|Native|Public|HasOutParms]
	// Offset: 0xc42f020
	// Params: [ Num(1) Size(0x88) ]
	void SetSpawnHitTarget(const struct FHitResult& HitResult);

	// Object: Function DFMAbility.DFMAbilityThrowBlocking.ServerCharacterTryBreakBlocking
	// Flags: [Final|Net|NetReliableNative|Event|Private|NetServer]
	// Offset: 0xc42ef3c
	// Params: [ Num(2) Size(0x10) ]
	void ServerCharacterTryBreakBlocking(struct AGPCharacter* CHARACTER, struct UThrowBlockingPartComponent* Part);

	// Object: Function DFMAbility.DFMAbilityThrowBlocking.OnOverlapEnd
	// Flags: [Final|Native|Private]
	// Offset: 0xfc4265c
	// Params: [ Num(4) Size(0x1C) ]
	void OnOverlapEnd(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex);

	// Object: Function DFMAbility.DFMAbilityThrowBlocking.OnOverlapBegin
	// Flags: [Final|Native|Private|HasOutParms]
	// Offset: 0xfe1a87c
	// Params: [ Num(6) Size(0xA8) ]
	void OnOverlapBegin(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, uint8_t bFromSweep, const struct FHitResult& SweepResult);

	// Object: Function DFMAbility.DFMAbilityThrowBlocking.OnArenaRoundStateChange
	// Flags: [Final|Native|Private]
	// Offset: 0xc42ef28
	// Params: [ Num(0) Size(0x0) ]
	void OnArenaRoundStateChange();

	// Object: Function DFMAbility.DFMAbilityThrowBlocking.MulticastPlaySpawnAudio
	// Flags: [Final|Net|NetReliableNative|Event|NetMulticast|Private]
	// Offset: 0xc42ef0c
	// Params: [ Num(0) Size(0x0) ]
	void MulticastPlaySpawnAudio();

	// Object: Function DFMAbility.DFMAbilityThrowBlocking.IsValidIndex
	// Flags: [Final|Native|Private|Const]
	// Offset: 0xc42ee5c
	// Params: [ Num(2) Size(0x5) ]
	uint8_t IsValidIndex(int32_t Index);

	// Object: Function DFMAbility.DFMAbilityThrowBlocking.InitTrigger
	// Flags: [Final|Native|Private]
	// Offset: 0xc42ee48
	// Params: [ Num(0) Size(0x0) ]
	void InitTrigger();

	// Object: Function DFMAbility.DFMAbilityThrowBlocking.InitNavBox
	// Flags: [Final|Native|Private]
	// Offset: 0xc42ee34
	// Params: [ Num(0) Size(0x0) ]
	void InitNavBox();

	// Object: Function DFMAbility.DFMAbilityThrowBlocking.InitMainAnimInstanceProxy
	// Flags: [Final|Native|Private]
	// Offset: 0xc42ee20
	// Params: [ Num(0) Size(0x0) ]
	void InitMainAnimInstanceProxy();

	// Object: Function DFMAbility.DFMAbilityThrowBlocking.InitHPCurve
	// Flags: [Final|Native|Private]
	// Offset: 0xc42ee0c
	// Params: [ Num(0) Size(0x0) ]
	void InitHPCurve();

	// Object: Function DFMAbility.DFMAbilityThrowBlocking.InitGameRoleData
	// Flags: [Final|Native|Private]
	// Offset: 0xc42edf8
	// Params: [ Num(0) Size(0x0) ]
	void InitGameRoleData();

	// Object: Function DFMAbility.DFMAbilityThrowBlocking.InitAllParts
	// Flags: [Final|Native|Private]
	// Offset: 0xc42ede4
	// Params: [ Num(0) Size(0x0) ]
	void InitAllParts();

	// Object: Function DFMAbility.DFMAbilityThrowBlocking.GetSpawnHitTarget
	// Flags: [Final|Native|Public|Const]
	// Offset: 0xc42edac
	// Params: [ Num(1) Size(0x8) ]
	struct AActor* GetSpawnHitTarget();

	// Object: Function DFMAbility.DFMAbilityThrowBlocking.GetSkillComponent
	// Flags: [Final|Native|Private|Const]
	// Offset: 0xc42ed78
	// Params: [ Num(1) Size(0x8) ]
	struct UGPSkillComponent* GetSkillComponent();

	// Object: Function DFMAbility.DFMAbilityThrowBlocking.GetIsInSpawnState
	// Flags: [Final|Native|Public|Const]
	// Offset: 0xc42ed40
	// Params: [ Num(1) Size(0x1) ]
	uint8_t GetIsInSpawnState();

	// Object: Function DFMAbility.DFMAbilityThrowBlocking.GetIsInDestroyedState
	// Flags: [Final|Native|Public|Const]
	// Offset: 0xc42ed08
	// Params: [ Num(1) Size(0x1) ]
	uint8_t GetIsInDestroyedState();

	// Object: Function DFMAbility.DFMAbilityThrowBlocking.GetHitComponentIndex
	// Flags: [Final|Native|Private]
	// Offset: 0xc42ec5c
	// Params: [ Num(2) Size(0xC) ]
	int32_t GetHitComponentIndex(struct UPrimitiveComponent* targetomponent);

	// Object: Function DFMAbility.DFMAbilityThrowBlocking.GetAllPartsArray
	// Flags: [Final|Native|Public|HasOutParms|Const]
	// Offset: 0xc42eba0
	// Params: [ Num(1) Size(0x10) ]
	void GetAllPartsArray(struct TArray<struct UThrowBlockingPartComponent*>& OutBlockingArray);

	// Object: Function DFMAbility.DFMAbilityThrowBlocking.GetAllDestroyedPartsArray
	// Flags: [Final|Native|Public|HasOutParms|Const]
	// Offset: 0xc42eae4
	// Params: [ Num(1) Size(0x10) ]
	void GetAllDestroyedPartsArray(struct TArray<struct UThrowBlockingPartComponent*>& OutDestroyedArray);

	// Object: Function DFMAbility.DFMAbilityThrowBlocking.FinTrigger
	// Flags: [Final|Native|Private]
	// Offset: 0xc42ead0
	// Params: [ Num(0) Size(0x0) ]
	void FinTrigger();

	// Object: Function DFMAbility.DFMAbilityThrowBlocking.FindGameRoleDataIndex
	// Flags: [Final|Native|Private|Const]
	// Offset: 0xc42ea9c
	// Params: [ Num(1) Size(0x4) ]
	int32_t FindGameRoleDataIndex();

	// Object: Function DFMAbility.DFMAbilityThrowBlocking.DoTimerTick
	// Flags: [Final|Native|Private]
	// Offset: 0xc42ea88
	// Params: [ Num(0) Size(0x0) ]
	void DoTimerTick();

	// Object: Function DFMAbility.DFMAbilityThrowBlocking.DoSpawnTimer
	// Flags: [Final|Native|Private]
	// Offset: 0xc42ea74
	// Params: [ Num(0) Size(0x0) ]
	void DoSpawnTimer();

	// Object: Function DFMAbility.DFMAbilityThrowBlocking.DoDestroyTimer
	// Flags: [Final|Native|Private]
	// Offset: 0xc42ea60
	// Params: [ Num(0) Size(0x0) ]
	void DoDestroyTimer();

	// Object: Function DFMAbility.DFMAbilityThrowBlocking.DoDestroyAll
	// Flags: [Final|Native|Private]
	// Offset: 0xc42ea4c
	// Params: [ Num(0) Size(0x0) ]
	void DoDestroyAll();

	// Object: Function DFMAbility.DFMAbilityThrowBlocking.DataFlowAddThrowNumber
	// Flags: [Final|Native|Private]
	// Offset: 0xc42ea38
	// Params: [ Num(0) Size(0x0) ]
	void DataFlowAddThrowNumber();

	// Object: Function DFMAbility.DFMAbilityThrowBlocking.DataFlowAddDestroyedInfo
	// Flags: [Final|Native|Private]
	// Offset: 0xc42ea24
	// Params: [ Num(0) Size(0x0) ]
	void DataFlowAddDestroyedInfo();

	// Object: Function DFMAbility.DFMAbilityThrowBlocking.DataFlowAddDamage
	// Flags: [Final|Native|Private]
	// Offset: 0xc42e860
	// Params: [ Num(5) Size(0x8) ]
	void DataFlowAddDamage(uint8_t bIsMainPart, uint8_t bIsRadial, uint8_t bIsPoint, uint8_t IsPartDestroyed, float Damage);

	// Object: Function DFMAbility.DFMAbilityThrowBlocking.DamageTakerModifyIndex
	// Flags: [Final|Native|Private|HasOutParms]
	// Offset: 0xc42e78c
	// Params: [ Num(2) Size(0x8A1) ]
	uint8_t DamageTakerModifyIndex(struct FDamageResultInfo& DamageResult);

	// Object: Function DFMAbility.DFMAbilityThrowBlocking.CloseStopSpawnAudioTimer
	// Flags: [Final|Native|Private]
	// Offset: 0xc42e778
	// Params: [ Num(0) Size(0x0) ]
	void CloseStopSpawnAudioTimer();

	// Object: Function DFMAbility.DFMAbilityThrowBlocking.CheckSpawnHitTarget
	// Flags: [Final|Native|Private|Const]
	// Offset: 0xc42e740
	// Params: [ Num(1) Size(0x1) ]
	uint8_t CheckSpawnHitTarget();

	// Object: Function DFMAbility.DFMAbilityThrowBlocking.CheckCharacterZipline
	// Flags: [Final|Native|Private]
	// Offset: 0xc42e69c
	// Params: [ Num(1) Size(0x8) ]
	void CheckCharacterZipline(struct AGPCharacter* CHARACTER);

	// Object: Function DFMAbility.DFMAbilityThrowBlocking.CheckCharacterPassiveMove
	// Flags: [Final|Native|Private]
	// Offset: 0xc42e5f8
	// Params: [ Num(1) Size(0x8) ]
	void CheckCharacterPassiveMove(struct AGPCharacter* CHARACTER);

	// Object: Function DFMAbility.DFMAbilityThrowBlocking.CheckCharacterFloorResult
	// Flags: [Final|Native|Private|HasOutParms]
	// Offset: 0xc42e4e8
	// Params: [ Num(2) Size(0x9C) ]
	void CheckCharacterFloorResult(struct AGPCharacter* CHARACTER, const struct FFindFloorResult& CurrentFloor);

	// Object: Function DFMAbility.DFMAbilityThrowBlocking.CheckCharacterFalling
	// Flags: [Final|Native|Private]
	// Offset: 0xc42e444
	// Params: [ Num(1) Size(0x8) ]
	void CheckCharacterFalling(struct AGPCharacter* CHARACTER);

	// Object: Function DFMAbility.DFMAbilityThrowBlocking.CharacterTryDirectionBreakBlocking
	// Flags: [Final|Native|Private|HasDefaults]
	// Offset: 0xc42e2b4
	// Params: [ Num(5) Size(0x20) ]
	void CharacterTryDirectionBreakBlocking(struct AGPCharacter* CHARACTER, struct FVector Direction, float radius, float offset, float Distance);

	// Object: Function DFMAbility.DFMAbilityThrowBlocking.CharacterTryBreakBlocking
	// Flags: [Final|Native|Private]
	// Offset: 0xc42e1d8
	// Params: [ Num(2) Size(0x10) ]
	void CharacterTryBreakBlocking(struct AGPCharacter* CHARACTER, struct UPrimitiveComponent* HitComponent);

	// Object: Function DFMAbility.DFMAbilityThrowBlocking.ChangeBlockingPartHPRate
	// Flags: [Final|Native|Private]
	// Offset: 0xc42e0f8
	// Params: [ Num(2) Size(0xC) ]
	void ChangeBlockingPartHPRate(struct UThrowBlockingPartComponent* Part, float DeltaHPRate);

	// Object: Function DFMAbility.DFMAbilityThrowBlocking.ChangeBlockingPartHP
	// Flags: [Final|Native|Private]
	// Offset: 0xc42e010
	// Params: [ Num(3) Size(0x10) ]
	float ChangeBlockingPartHP(struct UThrowBlockingPartComponent* Part, float DeltaHP);

	// Object: Function DFMAbility.DFMAbilityThrowBlocking.BroadcastSpawnEvent
	// Flags: [Final|Native|Public]
	// Offset: 0xc42dffc
	// Params: [ Num(0) Size(0x0) ]
	void BroadcastSpawnEvent();

	// Object: Function DFMAbility.DFMAbilityThrowBlocking.BroadcastDestroyedEvent
	// Flags: [Final|Native|Public]
	// Offset: 0xc42dfe8
	// Params: [ Num(0) Size(0x0) ]
	void BroadcastDestroyedEvent();

	// Object: Function DFMAbility.DFMAbilityThrowBlocking.BaseCheckCharacter
	// Flags: [Final|Native|Private]
	// Offset: 0xc42df38
	// Params: [ Num(2) Size(0x9) ]
	uint8_t BaseCheckCharacter(struct AGPCharacter* CHARACTER);
};

// Object: Class DFMAbility.DFMAbilityThrowBlockingGrenade
// Size: 0x1700 (Inherited: 0x16D0)
struct ADFMAbilityThrowBlockingGrenade : AWeaponThrowableBulletProjectile
{
	DEFINE_UE_CLASS_HELPERS(ADFMAbilityThrowBlockingGrenade, "DFMAbilityThrowBlockingGrenade")

	float DelayShowMeshTimeSeconds; // 0x16C4(0x4)
	struct ADFMAbilityThrowBlocking* FullyExpandedBlockingActorClass; // 0x16C8(0x8)
	struct ADFMAbilityThrowBlocking* OnGroundBlockingActorClass; // 0x16D0(0x8)
	struct ADFMAbilityThrowBlocking* OnWallBlockingActorClass; // 0x16D8(0x8)
	struct FRotator StartFireRotation; // 0x16E0(0xC)
	struct UWeaponFireModeParamsThrowBlocking* ThrowBlockingParams; // 0x16F0(0x8)
	struct FTimerHandle DelayShowMeshTimerHandle; // 0x16F8(0x8)

	// Object: Function DFMAbility.DFMAbilityThrowBlockingGrenade.TrySpawnBlockingActor
	// Flags: [Final|Native|Private|HasOutParms]
	// Offset: 0xc42f700
	// Params: [ Num(1) Size(0x88) ]
	void TrySpawnBlockingActor(const struct FHitResult& ImpactResult);

	// Object: Function DFMAbility.DFMAbilityThrowBlockingGrenade.SetMeshVisibility
	// Flags: [Final|Native|Private]
	// Offset: 0xc42f654
	// Params: [ Num(1) Size(0x1) ]
	void SetMeshVisibility(uint8_t bNewVisibility);

	// Object: Function DFMAbility.DFMAbilityThrowBlockingGrenade.IsValidActor
	// Flags: [Final|Native|Private|Const]
	// Offset: 0xc42f5a4
	// Params: [ Num(2) Size(0x9) ]
	uint8_t IsValidActor(struct AActor* Actor);

	// Object: Function DFMAbility.DFMAbilityThrowBlockingGrenade.DoDelayShowMeshTimer
	// Flags: [Final|Native|Private]
	// Offset: 0xc42f590
	// Params: [ Num(0) Size(0x0) ]
	void DoDelayShowMeshTimer();
};

// Object: Class DFMAbility.DFMAbilityTraceLine
// Size: 0x380 (Inherited: 0x370)
struct ADFMAbilityTraceLine : AActor
{
	DEFINE_UE_CLASS_HELPERS(ADFMAbilityTraceLine, "DFMAbilityTraceLine")

	uint8_t bDisableWhenSprint : 1; // 0x370(0x1), Mask(0x1)
	uint8_t BitPad_0x370_1 : 7; // 0x370(0x1)
	uint8_t Pad_0x371[0x3]; // 0x371(0x3)
	struct TWeakObjectPtr<struct AGPCharacter> OwnerChar; // 0x374(0x8)
	uint8_t Pad_0x37C[0x4]; // 0x37C(0x4)

	// Object: Function DFMAbility.DFMAbilityTraceLine.OnSprintStateChange
	// Flags: [Final|Native|Public]
	// Offset: 0xc431374
	// Params: [ Num(1) Size(0x1) ]
	void OnSprintStateChange(uint8_t bCurSprintState);

	// Object: Function DFMAbility.DFMAbilityTraceLine.FireProjectile
	// Flags: [Event|Public|BlueprintCallable|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(1) Size(0x8) ]
	void FireProjectile(struct UDFMAbilityInstance* Instance);
};

// Object: Class DFMAbility.DFMAbilityUASActiveComponent
// Size: 0x278 (Inherited: 0xF8)
struct UDFMAbilityUASActiveComponent : UActorComponent
{
	DEFINE_UE_CLASS_HELPERS(UDFMAbilityUASActiveComponent, "DFMAbilityUASActiveComponent")

	struct USkeletalMeshComponent* MeshTargetA; // 0xF8(0x8)
	struct USkeletalMeshComponent* MeshTargetB; // 0x100(0x8)
	struct USkeletalMeshComponent* MeshTargetC; // 0x108(0x8)
	uint8_t bEnableInIdling : 1; // 0x110(0x1), Mask(0x1)
	uint8_t BitPad_0x110_1 : 7; // 0x110(0x1)
	uint8_t Pad_0x111[0x3]; // 0x111(0x3)
	float MeshAngleARoll; // 0x114(0x4)
	float MeshAngleBRoll; // 0x118(0x4)
	float MeshAngleCRoll; // 0x11C(0x4)
	struct FVector MeshACurrentOffset; // 0x120(0xC)
	struct FVector MeshBCurrentOffset; // 0x12C(0xC)
	struct FVector MeshCCurrentOffset; // 0x138(0xC)
	uint8_t bIsInEquiping : 1; // 0x144(0x1), Mask(0x1)
	uint8_t BitPad_0x144_1 : 7; // 0x144(0x1)
	uint8_t Pad_0x145[0x3]; // 0x145(0x3)
	float EquipAccumulateTime; // 0x148(0x4)
	uint8_t Pad_0x14C[0x4]; // 0x14C(0x4)
	float EquipMeshPosZ; // 0x150(0x4)
	struct FVector MeshAWorldPosition; // 0x154(0xC)
	struct FVector MeshBWorldPosition; // 0x160(0xC)
	struct FVector MeshCWorldPosition; // 0x16C(0xC)
	uint8_t Pad_0x178[0x24]; // 0x178(0x24)
	float MeshSyncTime; // 0x19C(0x4)
	uint8_t bIdleEnable : 1; // 0x1A0(0x1), Mask(0x1)
	uint8_t BitPad_0x1A0_1 : 7; // 0x1A0(0x1)
	uint8_t bIsInit : 1; // 0x1A1(0x1), Mask(0x1)
	uint8_t BitPad_0x1A1_1 : 7; // 0x1A1(0x1)
	uint8_t Pad_0x1A2[0x2]; // 0x1A2(0x2)
	struct FVector TargetPosition; // 0x1A4(0xC)
	int32_t IdleState; // 0x1B0(0x4)
	float UndampedFrequency; // 0x1B4(0x4)
	float EquipTickTime; // 0x1B8(0x4)
	struct TWeakObjectPtr<struct ADFMCharacter> CharacterOwner; // 0x1BC(0x8)
	struct FVector MeshAOffset; // 0x1C4(0xC)
	struct FVector MeshBOffset; // 0x1D0(0xC)
	struct FVector MeshCOffset; // 0x1DC(0xC)
	float MeshARollSpeed; // 0x1E8(0x4)
	float MeshBRollSpeed; // 0x1EC(0x4)
	float MeshCRollSpeed; // 0x1F0(0x4)
	struct FName MeshATargetSocket; // 0x1F4(0x8)
	struct FName MeshBTargetSocket; // 0x1FC(0x8)
	struct FName MeshCTargetSocket; // 0x204(0x8)
	float SyncSocketMaxDistance; // 0x20C(0x4)
	float SyncSocketLerpTime; // 0x210(0x4)
	struct FName TargetSocketName; // 0x214(0x8)
	struct FVector SocketOffset; // 0x21C(0xC)
	float MaxEquipTime; // 0x228(0x4)
	float DampingRaio; // 0x22C(0x4)
	float SpringTime; // 0x230(0x4)
	struct FVector MaxOffset; // 0x234(0xC)
	struct FVector TargetVelocity; // 0x240(0xC)
	float MaxLegOffset; // 0x24C(0x4)
	float LegOffsetLerp; // 0x250(0x4)
	float DeltaOffset; // 0x254(0x4)
	uint64_t TargetWeaponID; // 0x258(0x8)
	float EquipBeinOffset; // 0x260(0x4)
	float EquipXYSpeed; // 0x264(0x4)
	float EquipInitZSpeed; // 0x268(0x4)
	float EquipGravity; // 0x26C(0x4)
	float EquipFallingGravity; // 0x270(0x4)
	uint8_t Pad_0x274[0x4]; // 0x274(0x4)

	// Object: Function DFMAbility.DFMAbilityUASActiveComponent.TickState
	// Flags: [Final|Native|Protected]
	// Offset: 0xc431690
	// Params: [ Num(1) Size(0x4) ]
	void TickState(float DeltaTime);

	// Object: Function DFMAbility.DFMAbilityUASActiveComponent.TickMeshRotation
	// Flags: [Final|Native|Protected]
	// Offset: 0xc4315ec
	// Params: [ Num(1) Size(0x4) ]
	void TickMeshRotation(float DeltaTime);

	// Object: Function DFMAbility.DFMAbilityUASActiveComponent.TickIdling
	// Flags: [Final|Native|Protected]
	// Offset: 0xc431548
	// Params: [ Num(1) Size(0x4) ]
	void TickIdling(float DeltaTime);

	// Object: Function DFMAbility.DFMAbilityUASActiveComponent.TickEquiping
	// Flags: [Final|Native|Protected]
	// Offset: 0xc4314a4
	// Params: [ Num(1) Size(0x4) ]
	void TickEquiping(float DeltaTime);

	// Object: Function DFMAbility.DFMAbilityUASActiveComponent.SyncPosWithWeapon
	// Flags: [Final|Native|Protected]
	// Offset: 0xc431490
	// Params: [ Num(0) Size(0x0) ]
	void SyncPosWithWeapon();

	// Object: Function DFMAbility.DFMAbilityUASActiveComponent.SyncPosToIdle
	// Flags: [Final|Native|Protected]
	// Offset: 0xc43147c
	// Params: [ Num(0) Size(0x0) ]
	void SyncPosToIdle();

	// Object: Function DFMAbility.DFMAbilityUASActiveComponent.SyncOwnerPos
	// Flags: [Final|Native|Protected]
	// Offset: 0xc431468
	// Params: [ Num(0) Size(0x0) ]
	void SyncOwnerPos();

	// Object: Function DFMAbility.DFMAbilityUASActiveComponent.PosIdleHideWeapon
	// Flags: [Final|Native|Protected]
	// Offset: 0xc431454
	// Params: [ Num(0) Size(0x0) ]
	void PosIdleHideWeapon();

	// Object: Function DFMAbility.DFMAbilityUASActiveComponent.BeginEquip
	// Flags: [Final|Native|Protected]
	// Offset: 0xc431440
	// Params: [ Num(0) Size(0x0) ]
	void BeginEquip();
};

// Object: Class DFMAbility.DFMAbilityUASMovementComponent
// Size: 0x340 (Inherited: 0x320)
struct UDFMAbilityUASMovementComponent : UGPUASMovementComponent
{
	DEFINE_UE_CLASS_HELPERS(UDFMAbilityUASMovementComponent, "DFMAbilityUASMovementComponent")

	struct UGPDeformableGameStateComponent* DeformableGameStateComponent; // 0x320(0x8)
	uint8_t EnableFollowDirection : 1; // 0x328(0x1), Mask(0x1)
	uint8_t BitPad_0x328_1 : 7; // 0x328(0x1)
	uint8_t EnableFollowDirectionDrawDebug : 1; // 0x329(0x1), Mask(0x1)
	uint8_t BitPad_0x329_1 : 7; // 0x329(0x1)
	uint8_t Pad_0x32A[0x2]; // 0x32A(0x2)
	float ForwardTargetDistanceFactor; // 0x32C(0x4)
	float ForwardTargetMinDistance; // 0x330(0x4)
	float ForwardTargetChaseLerp; // 0x334(0x4)
	struct TWeakObjectPtr<struct ADFMAbilityLevelActorManager> ABAManager; // 0x338(0x8)
};

// Object: Class DFMAbility.DFMAbilityUtil
// Size: 0x28 (Inherited: 0x28)
struct UDFMAbilityUtil : UBlueprintFunctionLibrary
{
	DEFINE_UE_CLASS_HELPERS(UDFMAbilityUtil, "DFMAbilityUtil")

	// Object: Function DFMAbility.DFMAbilityUtil.ReleaseUIByName
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0xc432024
	// Params: [ Num(2) Size(0x10) ]
	static void ReleaseUIByName(struct UObject* World, struct FName PanelConfigName);

	// Object: Function DFMAbility.DFMAbilityUtil.ReleaseUI
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0xc431f18
	// Params: [ Num(3) Size(0x14) ]
	static void ReleaseUI(struct UObject* World, int32_t skillEntityIndex, struct FName PanelConfigName);

	// Object: Function DFMAbility.DFMAbilityUtil.PreLoadUIByName
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0xc431e4c
	// Params: [ Num(2) Size(0x10) ]
	static void PreLoadUIByName(struct UObject* World, struct FName PanelConfigName);

	// Object: Function DFMAbility.DFMAbilityUtil.PreLoadUI
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0xc431d40
	// Params: [ Num(3) Size(0x14) ]
	static void PreLoadUI(struct UObject* World, int32_t skillEntityIndex, struct FName PanelConfigName);

	// Object: Function DFMAbility.DFMAbilityUtil.PlayImpactEffects
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults]
	// Offset: 0xc431b70
	// Params: [ Num(5) Size(0x9E) ]
	static void PlayImpactEffects(struct UObject* WorldContent, const struct FHitResult& Hit, const struct FVector& BulletStartLoc, uint8_t bOnlyRicochet, uint8_t HitInfoOptFlag);

	// Object: Function DFMAbility.DFMAbilityUtil.PlayDecalEffects
	// Flags: [Final|Native|Static|Public|HasOutParms]
	// Offset: 0xc431a28
	// Params: [ Num(3) Size(0x98) ]
	static void PlayDecalEffects(struct UObject* WorldContent, const struct FHitResult& Hit, struct FName& HitDecalId);

	// Object: Function DFMAbility.DFMAbilityUtil.IsInSOL
	// Flags: [Final|Native|Static|Public]
	// Offset: 0xc431980
	// Params: [ Num(2) Size(0x9) ]
	static uint8_t IsInSOL(struct UObject* WorldContent);

	// Object: Function DFMAbility.DFMAbilityUtil.IsInMP
	// Flags: [Final|Native|Static|Public]
	// Offset: 0xc4318d8
	// Params: [ Num(2) Size(0x9) ]
	static uint8_t IsInMP(struct UObject* WorldContent);

	// Object: Function DFMAbility.DFMAbilityUtil.GetGameRole
	// Flags: [Final|Native|Static|Public]
	// Offset: 0xc431834
	// Params: [ Num(2) Size(0x9) ]
	static EBuffGameRole GetGameRole(struct UObject* WorldContent);

	// Object: Function DFMAbility.DFMAbilityUtil.CastToBuffGameRole
	// Flags: [Final|Native|Static|Public]
	// Offset: 0xc431790
	// Params: [ Num(2) Size(0x2) ]
	static EBuffGameRole CastToBuffGameRole(EDFMGamePlayMode PlayMode);
};

// Object: Class DFMAbility.DFMAbilityWeaponProjectileActorSystem
// Size: 0x50 (Inherited: 0x50)
struct UDFMAbilityWeaponProjectileActorSystem : UDFMAbilitySystemBase
{
	DEFINE_UE_CLASS_HELPERS(UDFMAbilityWeaponProjectileActorSystem, "DFMAbilityWeaponProjectileActorSystem")
};

// Object: Class DFMAbility.DFMAbilityWeaponThrowableKnife
// Size: 0x1B60 (Inherited: 0x1890)
struct ADFMAbilityWeaponThrowableKnife : ADFMAbilityWeaponThrowableBullet
{
	DEFINE_UE_CLASS_HELPERS(ADFMAbilityWeaponThrowableKnife, "DFMAbilityWeaponThrowableKnife")

	uint8_t Pad_0x1890[0x8]; // 0x1890(0x8)
	struct TArray<struct FDFMAbilityC202KnifeData> KnifeData; // 0x1898(0x10)
	struct TArray<ECollisionChannel> AllTraceChannels; // 0x18A8(0x10)
	struct UGPAudioEventAsset* EMPStartAudio; // 0x18B8(0x8)
	struct UGPAudioEventAsset* HackAudio; // 0x18C0(0x8)
	struct UGPAudioEventAsset* LineStartAudio; // 0x18C8(0x8)
	struct UGPAudioEventAsset* LineEndAudio; // 0x18D0(0x8)
	struct UGPAudioEventAsset* EMPDestoryAudio; // 0x18D8(0x8)
	struct FName EMPStartAudioName; // 0x18E0(0x8)
	struct FName HackAudioName; // 0x18E8(0x8)
	struct TArray<struct FName> IgnoreTagArray; // 0x18F0(0x10)
	float Health; // 0x1900(0x4)
	uint8_t Pad_0x1904[0x4]; // 0x1904(0x4)
	struct TSoftClassPtr<struct UObject*> DefaultPathTracingLineActorClassPtr; // 0x1908(0x28)
	struct FName HitEnemyFXName; // 0x1930(0x8)
	struct FName HitEnemyFXName_3P; // 0x1938(0x8)
	int32_t HitMarkerBuffID; // 0x1940(0x4)
	int32_t MarkedBuffID; // 0x1944(0x4)
	float TracingLineZ; // 0x1948(0x4)
	float PathNodeSelectDelta; // 0x194C(0x4)
	struct TArray<uint32_t> ConflictBuffArray; // 0x1950(0x10)
	struct FVector TracingLineStartPosOffset; // 0x1960(0xC)
	struct FVector ServerTracingLineStartPosOffset; // 0x196C(0xC)
	uint8_t Pad_0x1978[0x10]; // 0x1978(0x10)
	struct UShapeComponent* EMPRangeComponent; // 0x1988(0x8)
	struct TArray<struct AActor*> EMPTargetList; // 0x1990(0x10)
	struct FTimerHandle EMPTimerHandle; // 0x19A0(0x8)
	struct TArray<int32_t> EMPItemUinList; // 0x19A8(0x10)
	struct FVector KnifeStartPos; // 0x19B8(0xC)
	uint8_t Pad_0x19C4[0x4]; // 0x19C4(0x4)
	struct AGPPreviewLineActor* PathLineMesh; // 0x19C8(0x8)
	struct TArray<struct FKnifeDrawPathData> KnifeDrawPathDataList; // 0x19D0(0x10)
	struct TArray<struct FAbilityClientDrawPathData> ClientDrawPaths; // 0x19E0(0x10)
	struct TArray<struct FAbilityTracingPathData> TracingPaths; // 0x19F0(0x10)
	uint8_t bClientPreprocessPath : 1; // 0x1A00(0x1), Mask(0x1)
	uint8_t BitPad_0x1A00_1 : 7; // 0x1A00(0x1)
	uint8_t Pad_0x1A01[0x7]; // 0x1A01(0x7)
	struct TArray<struct FAbilityTracingPathData> RealPaths; // 0x1A08(0x10)
	int32_t CurPathCnt; // 0x1A18(0x4)
	uint8_t Pad_0x1A1C[0x4]; // 0x1A1C(0x4)
	struct TSet<uint64_t> TracingCharSet; // 0x1A20(0x50)
	struct TArray<struct AGPPreviewLineActor*> PathLineMeshs; // 0x1A70(0x10)
	struct TArray<struct AActor*> Ignores; // 0x1A80(0x10)
	struct UFXResourceContainerComponent* ProjectileStopFXComp; // 0x1A90(0x8)
	uint8_t Pad_0x1A98[0x8]; // 0x1A98(0x8)
	struct TMap<int64_t, struct FVector> EnemyLocationMap; // 0x1AA0(0x50)
	uint64_t PathTracingLineAsyncLoadReqID; // 0x1AF0(0x8)
	struct TSoftClassPtr<struct AGPPreviewLineActor*> PathTracingLineClassPtr; // 0x1AF8(0x28)
	uint8_t bTracingLinePendingInit : 1; // 0x1B20(0x1), Mask(0x1)
	uint8_t BitPad_0x1B20_1 : 7; // 0x1B20(0x1)
	uint8_t bHasPlayEmp : 1; // 0x1B21(0x1), Mask(0x1)
	uint8_t BitPad_0x1B21_1 : 7; // 0x1B21(0x1)
	uint8_t Pad_0x1B22[0x6]; // 0x1B22(0x6)
	struct FDFMAbilityC202KnifeData CurModeData; // 0x1B28(0x30)
	uint8_t Pad_0x1B58[0x8]; // 0x1B58(0x8)

	// Object: Function DFMAbility.DFMAbilityWeaponThrowableKnife.TryInitPathMeshInstance
	// Flags: [Final|Native|Protected]
	// Offset: 0xc432e0c
	// Params: [ Num(0) Size(0x0) ]
	void TryInitPathMeshInstance();

	// Object: Function DFMAbility.DFMAbilityWeaponThrowableKnife.TryInitializePathTracingLine
	// Flags: [Final|Native|Public]
	// Offset: 0xc432df8
	// Params: [ Num(0) Size(0x0) ]
	void TryInitializePathTracingLine();

	// Object: Function DFMAbility.DFMAbilityWeaponThrowableKnife.SyncOutLineItemLocationsToTeamMates
	// Flags: [Final|Native|Public]
	// Offset: 0xc432de4
	// Params: [ Num(0) Size(0x0) ]
	void SyncOutLineItemLocationsToTeamMates();

	// Object: Function DFMAbility.DFMAbilityWeaponThrowableKnife.PrepareEMP
	// Flags: [Final|Native|Protected]
	// Offset: 0xc432dd0
	// Params: [ Num(0) Size(0x0) ]
	void PrepareEMP();

	// Object: Function DFMAbility.DFMAbilityWeaponThrowableKnife.OnPathTracingLineAssetLoaded
	// Flags: [Final|Native|Protected|HasOutParms|HasDefaults]
	// Offset: 0xc432d10
	// Params: [ Num(1) Size(0x18) ]
	void OnPathTracingLineAssetLoaded(const struct FSoftObjectPath& AssetPath);

	// Object: Function DFMAbility.DFMAbilityWeaponThrowableKnife.InitializePathTracingLineInternal
	// Flags: [Final|Native|Protected]
	// Offset: 0xc432cfc
	// Params: [ Num(0) Size(0x0) ]
	void InitializePathTracingLineInternal();

	// Object: Function DFMAbility.DFMAbilityWeaponThrowableKnife.GetTracingLineStartPos
	// Flags: [Final|Native|Public|HasDefaults]
	// Offset: 0xc432cc4
	// Params: [ Num(1) Size(0xC) ]
	struct FVector GetTracingLineStartPos();

	// Object: Function DFMAbility.DFMAbilityWeaponThrowableKnife.FindPathCallBack
	// Flags: [Final|Native|Protected|HasOutParms]
	// Offset: 0xc432b88
	// Params: [ Num(3) Size(0x18) ]
	void FindPathCallBack(uint8_t Success, int32_t Key, struct TArray<struct FAbilityTracingPathData>& Paths);

	// Object: Function DFMAbility.DFMAbilityWeaponThrowableKnife.FindNearestPointToEndPointOnPath
	// Flags: [Final|Native|Public|HasOutParms]
	// Offset: 0xc432a6c
	// Params: [ Num(3) Size(0x15) ]
	uint8_t FindNearestPointToEndPointOnPath(const struct TArray<struct FVector>& PathPoints, int32_t& NextIndex);

	// Object: Function DFMAbility.DFMAbilityWeaponThrowableKnife.FindNearestPointOnPath
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults]
	// Offset: 0xc4328ac
	// Params: [ Num(5) Size(0x40) ]
	struct FVector FindNearestPointOnPath(const struct FVector& PointA, const struct TArray<struct FVector>& PathPoints, const struct TArray<float>& PathLengths, int32_t& NextIndex);

	// Object: Function DFMAbility.DFMAbilityWeaponThrowableKnife.DrawPath
	// Flags: [Final|Native|Protected]
	// Offset: 0xc432898
	// Params: [ Num(0) Size(0x0) ]
	void DrawPath();

	// Object: Function DFMAbility.DFMAbilityWeaponThrowableKnife.ClientTryLoadPathTracingLineAsset
	// Flags: [Final|Native|Protected]
	// Offset: 0xc432884
	// Params: [ Num(0) Size(0x0) ]
	void ClientTryLoadPathTracingLineAsset();

	// Object: Function DFMAbility.DFMAbilityWeaponThrowableKnife.ClientShowPathTracingLine
	// Flags: [Final|Native|Public]
	// Offset: 0xc432870
	// Params: [ Num(0) Size(0x0) ]
	void ClientShowPathTracingLine();

	// Object: Function DFMAbility.DFMAbilityWeaponThrowableKnife.ClientPreprocessPaths
	// Flags: [Final|Native|Public|HasOutParms]
	// Offset: 0xc4327b4
	// Params: [ Num(1) Size(0x10) ]
	void ClientPreprocessPaths(struct TArray<struct FAbilityTracingPathData>& InRealPaths);

	// Object: Function DFMAbility.DFMAbilityWeaponThrowableKnife.ClientPreprocessPath
	// Flags: [Final|Native|Public|HasOutParms]
	// Offset: 0xc4326b0
	// Params: [ Num(2) Size(0x49) ]
	uint8_t ClientPreprocessPath(const struct FAbilityTracingPathData& Path);

	// Object: Function DFMAbility.DFMAbilityWeaponThrowableKnife.ClientPrepareEMP
	// Flags: [Net|NetReliableNative|Event|Public|NetClient]
	// Offset: 0xc4325fc
	// Params: [ Num(1) Size(0x10) ]
	void ClientPrepareEMP(struct TArray<struct AActor*> EMPTargetArray);

	// Object: Function DFMAbility.DFMAbilityWeaponThrowableKnife.ClientPlayHitEnemyEffect
	// Flags: [Final|Native|Protected]
	// Offset: 0xc4325e8
	// Params: [ Num(0) Size(0x0) ]
	void ClientPlayHitEnemyEffect();

	// Object: Function DFMAbility.DFMAbilityWeaponThrowableKnife.ClientHidePathTracingLine
	// Flags: [Final|Native|Public]
	// Offset: 0xc4325d4
	// Params: [ Num(0) Size(0x0) ]
	void ClientHidePathTracingLine();

	// Object: Function DFMAbility.DFMAbilityWeaponThrowableKnife.ClientDrawPathTracing
	// Flags: [Final|Native|Public]
	// Offset: 0xc4325c0
	// Params: [ Num(0) Size(0x0) ]
	void ClientDrawPathTracing();

	// Object: Function DFMAbility.DFMAbilityWeaponThrowableKnife.ClientDrawPath
	// Flags: [Net|NetReliableNative|Event|Public|NetClient]
	// Offset: 0xc43250c
	// Params: [ Num(1) Size(0x10) ]
	void ClientDrawPath(struct TArray<struct FAbilityTracingPathData> ServerTracingPaths);

	// Object: Function DFMAbility.DFMAbilityWeaponThrowableKnife.ClientCancelLoadPathTracingLineAsset
	// Flags: [Final|Native|Protected]
	// Offset: 0xc4324f8
	// Params: [ Num(0) Size(0x0) ]
	void ClientCancelLoadPathTracingLineAsset();

	// Object: Function DFMAbility.DFMAbilityWeaponThrowableKnife.ClientCalculatePath
	// Flags: [Final|Native|Public]
	// Offset: 0xc4324e4
	// Params: [ Num(0) Size(0x0) ]
	void ClientCalculatePath();

	// Object: Function DFMAbility.DFMAbilityWeaponThrowableKnife.ClientAttachToSurface
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults]
	// Offset: 0xc43239c
	// Params: [ Num(4) Size(0x1D) ]
	uint8_t ClientAttachToSurface(const struct FVector& pos, struct FVector& ResultPos, float UpZ);

	// Object: Function DFMAbility.DFMAbilityWeaponThrowableKnife.CanBeMarked
	// Flags: [Final|Native|Protected]
	// Offset: 0xc4322a8
	// Params: [ Num(3) Size(0xA) ]
	uint8_t CanBeMarked(struct ADFMCharacter* TargetChar, uint8_t IgnoreCheckTag);
};

// Object: Class DFMAbility.DFMAbilityWheeledVehicleMovementComponent
// Size: 0x180 (Inherited: 0x180)
struct UDFMAbilityWheeledVehicleMovementComponent : UPawnMovementComponent
{
	DEFINE_UE_CLASS_HELPERS(UDFMAbilityWheeledVehicleMovementComponent, "DFMAbilityWheeledVehicleMovementComponent")
};

// Object: Class DFMAbility.DFMAIADSDetector
// Size: 0x388 (Inherited: 0x370)
struct ADFMAIADSDetector : AActor
{
	DEFINE_UE_CLASS_HELPERS(ADFMAIADSDetector, "DFMAIADSDetector")

	uint8_t Pad_0x370[0x10]; // 0x370(0x10)
	struct USphereComponent* SphereComponent; // 0x380(0x8)
};

// Object: Class DFMAbility.DFMAIBoss07RCVCharacter
// Size: 0x3E70 (Inherited: 0x3C70)
struct ADFMAIBoss07RCVCharacter : ADFMAICharacter
{
	DEFINE_UE_CLASS_HELPERS(ADFMAIBoss07RCVCharacter, "DFMAIBoss07RCVCharacter")

	uint8_t Pad_0x3C70[0x8]; // 0x3C70(0x8)
	struct FMulticastInlineDelegate OnAIADSWeaponEvent; // 0x3C78(0x10)
	uint8_t Pad_0x3C88[0x50]; // 0x3C88(0x50)
	struct UGPSkeletalMeshComponent* SkeletalMeshComponent; // 0x3CD8(0x8)
	struct UDFMAIBoss07ADSComponent* Boss07ADSComponent; // 0x3CE0(0x8)
	struct USphereComponent* SphereComponent; // 0x3CE8(0x8)
	uint8_t Pad_0x3CF0[0x8]; // 0x3CF0(0x8)
	struct UAnimationAsset* AnimationToPlay; // 0x3CF8(0x8)
	struct UAnimationAsset* PlaceAnimation; // 0x3D00(0x8)
	struct TSoftObjectPtr<UGPAudioEventAsset> InterceptAudio; // 0x3D08(0x28)
	struct TSoftObjectPtr<UGPAudioEventAsset> BeIntercepted2DAudio; // 0x3D30(0x28)
	struct FName InterceptEffectId; // 0x3D58(0x8)
	struct FName FireEffectId; // 0x3D60(0x8)
	struct FName BeamEffectId; // 0x3D68(0x8)
	struct FAIADSWeaponEffectData BeanEffectData; // 0x3D70(0x20)
	EAIADSChargeType ADSChargeType; // 0x3D90(0x1)
	uint8_t Pad_0x3D91[0x3]; // 0x3D91(0x3)
	float ProtectedRange; // 0x3D94(0x4)
	float ProtectedCoolDown; // 0x3D98(0x4)
	float CoolDownPerAmmo; // 0x3D9C(0x4)
	float ProtectedRemainCount; // 0x3DA0(0x4)
	float IntervalFire; // 0x3DA4(0x4)
	uint8_t Pad_0x3DA8[0x4]; // 0x3DA8(0x4)
	float ProtectedSquadDis; // 0x3DAC(0x4)
	float DisProtectedSquadDis; // 0x3DB0(0x4)
	uint8_t Pad_0x3DB4[0x4]; // 0x3DB4(0x4)
	struct TArray<int32_t> IgnoreSkillIDList; // 0x3DB8(0x10)
	struct TMap<EAIADSState, struct FLinearColor> ADSStateMap; // 0x3DC8(0x50)
	float ProtectedRemainCounter; // 0x3E18(0x4)
	EAIADSState ADSState; // 0x3E1C(0x1)
	uint8_t Pad_0x3E1D[0x3]; // 0x3E1D(0x3)
	float TickInterval; // 0x3E20(0x4)
	uint8_t bBlockStinger : 1; // 0x3E24(0x1), Mask(0x1)
	uint8_t BitPad_0x3E24_1 : 7; // 0x3E24(0x1)
	uint8_t Pad_0x3E25[0x3]; // 0x3E25(0x3)
	struct FVector FirePointHeight; // 0x3E28(0xC)
	uint8_t Pad_0x3E34[0x4]; // 0x3E34(0x4)
	struct UGPAudioEventAsset* DeployAudio; // 0x3E38(0x8)
	struct UGPAudioEventAsset* DestroyAudio; // 0x3E40(0x8)
	struct FName DestroyEffectId; // 0x3E48(0x8)
	float OuterRadius; // 0x3E50(0x4)
	int32_t OuterAttackerValueID; // 0x3E54(0x4)
	struct TArray<struct FSubTrailFX> SubTrailFXList; // 0x3E58(0x10)
	uint8_t Pad_0x3E68[0x8]; // 0x3E68(0x8)

	// Object: Function DFMAbility.DFMAIBoss07RCVCharacter.TryDestroyThrowBlocking
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable]
	// Offset: 0xc4335d8
	// Params: [ Num(4) Size(0x3C) ]
	static void TryDestroyThrowBlocking(struct UObject* Context, const struct FVector& pos, const struct FQuat& Rot, const struct FVector& BoxHalfExtent);

	// Object: Function DFMAbility.DFMAIBoss07RCVCharacter.SetEnabledADS
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xc43352c
	// Params: [ Num(1) Size(0x1) ]
	void SetEnabledADS(uint8_t bEnable);

	// Object: Function DFMAbility.DFMAIBoss07RCVCharacter.OnRep_ProtectedRemainCounter
	// Flags: [Final|Native|Public]
	// Offset: 0xc433518
	// Params: [ Num(0) Size(0x0) ]
	void OnRep_ProtectedRemainCounter();

	// Object: Function DFMAbility.DFMAIBoss07RCVCharacter.OnProjectileIntercepted
	// Flags: [Net|NetReliableNative|Event|NetMulticast|Public|HasDefaults]
	// Offset: 0xc433430
	// Params: [ Num(2) Size(0x18) ]
	void OnProjectileIntercepted(struct FVector ProjectilePos, struct AActor* BulletCreator);

	// Object: DelegateFunction DFMAbility.DFMAIBoss07RCVCharacter.OnAIADSWeaponEvent__DelegateSignature
	// Flags: [MulticastDelegate|Public|Delegate]
	// Offset: 0x101d2e88
	// Params: [ Num(2) Size(0xC) ]
	void OnAIADSWeaponEvent__DelegateSignature(EAIADSWeaponEvent Event, struct FName SocketName);

	// Object: Function DFMAbility.DFMAIBoss07RCVCharacter.GetFireLocBySocket
	// Flags: [Event|Public|HasDefaults|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(2) Size(0x14) ]
	struct FVector GetFireLocBySocket(struct FName Socket);

	// Object: Function DFMAbility.DFMAIBoss07RCVCharacter.BP_RemoveADSDetector
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xc43338c
	// Params: [ Num(1) Size(0x8) ]
	void BP_RemoveADSDetector(struct FGPPlayerUIN uid);

	// Object: Function DFMAbility.DFMAIBoss07RCVCharacter.BP_AddADSDetector
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xc4332b0
	// Params: [ Num(2) Size(0x10) ]
	void BP_AddADSDetector(struct FGPPlayerUIN uid, struct ADFMAIADSDetector* ADSDetector);

	// Object: Function DFMAbility.DFMAIBoss07RCVCharacter.AIADSWeaponEvent_RPC
	// Flags: [Net|NetReliableNative|Event|NetMulticast|Public]
	// Offset: 0xc4331c8
	// Params: [ Num(2) Size(0xC) ]
	void AIADSWeaponEvent_RPC(EAIADSWeaponEvent Event, struct FName SocketName);
};

// Object: Class DFMAbility.AIMultiPatrolPointComponent
// Size: 0x270 (Inherited: 0x240)
struct UAIMultiPatrolPointComponent : UEditorMarkSceneComponent
{
	DEFINE_UE_CLASS_HELPERS(UAIMultiPatrolPointComponent, "AIMultiPatrolPointComponent")

	EAIPatrolPointType Type; // 0x240(0x1)
	uint8_t Pad_0x241[0x3]; // 0x241(0x3)
	int32_t uid; // 0x244(0x4)
	int32_t LocalIndex; // 0x248(0x4)
	float StayTime; // 0x24C(0x4)
	EGroupPatrolPose PatrolPose; // 0x250(0x1)
	EPatrolType PatrolType; // 0x251(0x1)
	uint8_t Pad_0x252[0x2]; // 0x252(0x2)
	struct FName PathName; // 0x254(0x8)
	int32_t SeatIndex; // 0x25C(0x4)
	struct FName SectionName; // 0x260(0x8)
	uint8_t Pad_0x268[0x8]; // 0x268(0x8)
};

// Object: Class DFMAbility.AIMultiPatrolPathComponent
// Size: 0x270 (Inherited: 0x270)
struct UAIMultiPatrolPathComponent : UAIMultiPatrolPointComponent
{
	DEFINE_UE_CLASS_HELPERS(UAIMultiPatrolPathComponent, "AIMultiPatrolPathComponent")
};

// Object: Class DFMAbility.AIMultiPatrolSectionComponent
// Size: 0x270 (Inherited: 0x270)
struct UAIMultiPatrolSectionComponent : UAIMultiPatrolPointComponent
{
	DEFINE_UE_CLASS_HELPERS(UAIMultiPatrolSectionComponent, "AIMultiPatrolSectionComponent")
};

// Object: Class DFMAbility.AIMultiPatrolSubPointComponent
// Size: 0x270 (Inherited: 0x270)
struct UAIMultiPatrolSubPointComponent : UAIMultiPatrolPointComponent
{
	DEFINE_UE_CLASS_HELPERS(UAIMultiPatrolSubPointComponent, "AIMultiPatrolSubPointComponent")
};

// Object: Class DFMAbility.AIPatrolManagerComponent
// Size: 0x2E8 (Inherited: 0xF8)
struct UAIPatrolManagerComponent : UActorComponent
{
	DEFINE_UE_CLASS_HELPERS(UAIPatrolManagerComponent, "AIPatrolManagerComponent")

	struct TArray<struct FAIMultiPatrolConfig> PatrolConfig; // 0xF8(0x10)
	uint8_t Pad_0x108[0x50]; // 0x108(0x50)
	struct TMap<int32_t, struct FAIMultiPatrolSection> SectionMap; // 0x158(0x50)
	struct TMap<int32_t, struct FAIMultiPatrolPath> PathMap; // 0x1A8(0x50)
	struct TMap<int32_t, struct FAIMultiPatrolPoint> PointMap; // 0x1F8(0x50)
	struct TMap<int32_t, struct FAIMultiPatrolSubPoint> SubPointMap; // 0x248(0x50)
	struct TMap<struct AController*, struct FAIMultiPatrolTransientData> SquadMap; // 0x298(0x50)

	// Object: Function DFMAbility.AIPatrolManagerComponent.SetCurrentPatrolPoint
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xc433e2c
	// Params: [ Num(2) Size(0xC) ]
	void SetCurrentPatrolPoint(struct AController* AIController, int32_t PointUid);

	// Object: Function DFMAbility.AIPatrolManagerComponent.InitPatrolPoint
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xc433d4c
	// Params: [ Num(2) Size(0xC) ]
	void InitPatrolPoint(struct AController* AIController, int32_t InSeatIndex);

	// Object: Function DFMAbility.AIPatrolManagerComponent.GetReturnPointToSection
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0xc433c5c
	// Params: [ Num(2) Size(0xC) ]
	void GetReturnPointToSection(struct AController* AIController, int32_t& PointUid);

	// Object: Function DFMAbility.AIPatrolManagerComponent.GetNextPatrolPoint
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0xc433b6c
	// Params: [ Num(2) Size(0xC) ]
	void GetNextPatrolPoint(struct AController* AIController, int32_t& PointUid);

	// Object: Function DFMAbility.AIPatrolManagerComponent.GetCurrentPatrolPoint
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0xc433a24
	// Params: [ Num(3) Size(0x34) ]
	void GetCurrentPatrolPoint(struct AController* AIController, int32_t& PointUid, struct FAIMultiPatrolDataBase& PointData);

	// Object: Function DFMAbility.AIPatrolManagerComponent.AllSquadReady
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0xc433934
	// Params: [ Num(2) Size(0x9) ]
	void AllSquadReady(struct AController* AIController, uint8_t& bAllReady);

	// Object: Function DFMAbility.AIPatrolManagerComponent.AddToSquad
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xc433854
	// Params: [ Num(2) Size(0xC) ]
	void AddToSquad(struct AController* AIController, int32_t SeatIndex);
};

// Object: Class DFMAbility.AbilityWeaponThrowableBullet_Boss07
// Size: 0x18D0 (Inherited: 0x1890)
struct AAbilityWeaponThrowableBullet_Boss07 : ADFMAbilityWeaponThrowableBullet
{
	DEFINE_UE_CLASS_HELPERS(AAbilityWeaponThrowableBullet_Boss07, "AbilityWeaponThrowableBullet_Boss07")

	struct AActor* SubBulletClass; // 0x1888(0x8)
	int32_t SubBulletNum; // 0x1890(0x4)
	float SubFireRange; // 0x1894(0x4)
	float Speed; // 0x1898(0x4)
	struct FName AirExplodeFX; // 0x189C(0x8)
	struct FName SubTrailFX; // 0x18A4(0x8)
	float CurrentDelay; // 0x18AC(0x4)
	int32_t OverrideSkillID; // 0x18B0(0x4)
	struct TArray<struct FSubTrailFX> SubTrailFXList; // 0x18B8(0x10)
	uint8_t Pad_0x18CC[0x4]; // 0x18CC(0x4)

	// Object: Function DFMAbility.AbilityWeaponThrowableBullet_Boss07.PlaySubTrialFX
	// Flags: [Net|NetReliableNative|Event|NetMulticast|Protected|HasDefaults]
	// Offset: 0xc4340f4
	// Params: [ Num(3) Size(0x1C) ]
	void PlaySubTrialFX(struct FVector Start, struct FVector End, float FSpeed);

	// Object: Function DFMAbility.AbilityWeaponThrowableBullet_Boss07.PlayAirExplodeFX
	// Flags: [Net|NetReliableNative|Event|NetMulticast|Protected|HasDefaults]
	// Offset: 0xc43400c
	// Params: [ Num(2) Size(0x18) ]
	void PlayAirExplodeFX(struct FVector pos, struct FVector Normal);
};

// Object: Class DFMAbility.DFMAIBoss07AbilityFireArrow
// Size: 0xBB8 (Inherited: 0xBB8)
struct ADFMAIBoss07AbilityFireArrow : ADFMAbilityFireArrow
{
	DEFINE_UE_CLASS_HELPERS(ADFMAIBoss07AbilityFireArrow, "DFMAIBoss07AbilityFireArrow")

	// Object: Function DFMAbility.DFMAIBoss07AbilityFireArrow.SetFireArrowDamage
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xc434220
	// Params: [ Num(1) Size(0x1) ]
	void SetFireArrowDamage(uint8_t StopDamage);
};

// Object: Class DFMAbility.DFMAICharacterCallDog
// Size: 0x3CD0 (Inherited: 0x3C70)
struct ADFMAICharacterCallDog : ADFMAICharacter
{
	DEFINE_UE_CLASS_HELPERS(ADFMAICharacterCallDog, "DFMAICharacterCallDog")

	uint8_t Pad_0x3C70[0x8]; // 0x3C70(0x8)
	uint8_t bHasInitAbilityInfo : 1; // 0x3C78(0x1), Mask(0x1)
	uint8_t BitPad_0x3C78_1 : 7; // 0x3C78(0x1)
	uint8_t Pad_0x3C79[0x7]; // 0x3C79(0x7)
	struct FGPAbilityInfo AbilityInfo; // 0x3C80(0x38)
	ECallDogState CallDogState; // 0x3CB8(0x1)
	uint8_t Pad_0x3CB9[0x3]; // 0x3CB9(0x3)
	int32_t CallDogDebugValue; // 0x3CBC(0x4)
	uint8_t bIsLeftTimeEnd : 1; // 0x3CC0(0x1), Mask(0x1)
	uint8_t BitPad_0x3CC0_1 : 7; // 0x3CC0(0x1)
	uint8_t Pad_0x3CC1[0x3]; // 0x3CC1(0x3)
	float MaxLeftTime; // 0x3CC4(0x4)
	float CurrLeftTime; // 0x3CC8(0x4)
	float DespawnShowTime; // 0x3CCC(0x4)

	// Object: Function DFMAbility.DFMAICharacterCallDog.TickLeftTime
	// Flags: [Final|Native|Private]
	// Offset: 0xc43a894
	// Params: [ Num(1) Size(0x4) ]
	void TickLeftTime(float DeltaSeconds);

	// Object: Function DFMAbility.DFMAICharacterCallDog.SetMaxLeftTime
	// Flags: [Final|Native|Public]
	// Offset: 0xc43a7b8
	// Params: [ Num(2) Size(0x8) ]
	void SetMaxLeftTime(float InMaxLeftTime, float InDespawnShowTime);

	// Object: Function DFMAbility.DFMAICharacterCallDog.SetCallDogState
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xc43a714
	// Params: [ Num(1) Size(0x1) ]
	void SetCallDogState(ECallDogState InCallDogState);

	// Object: Function DFMAbility.DFMAICharacterCallDog.ResumeCD
	// Flags: [Final|Native|Private]
	// Offset: 0xc43a700
	// Params: [ Num(0) Size(0x0) ]
	void ResumeCD();

	// Object: Function DFMAbility.DFMAICharacterCallDog.OnRep_AbilityInfo
	// Flags: [Native|Public]
	// Offset: 0xc43a6e4
	// Params: [ Num(0) Size(0x0) ]
	void OnRep_AbilityInfo();

	// Object: Function DFMAbility.DFMAICharacterCallDog.MartTarget
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xc43a604
	// Params: [ Num(2) Size(0xC) ]
	void MartTarget(struct AActor* InTarget, float InMapMarkTime);

	// Object: Function DFMAbility.DFMAICharacterCallDog.GetLeftTimePercent
	// Flags: [Final|Native|Public|Const]
	// Offset: 0xc43a5d0
	// Params: [ Num(1) Size(0x4) ]
	float GetLeftTimePercent();

	// Object: Function DFMAbility.DFMAICharacterCallDog.GetCallDogState
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xc43a5b0
	// Params: [ Num(1) Size(0x1) ]
	ECallDogState GetCallDogState();

	// Object: Function DFMAbility.DFMAICharacterCallDog.DoDespawn
	// Flags: [Final|Native|Private]
	// Offset: 0xc43a59c
	// Params: [ Num(0) Size(0x0) ]
	void DoDespawn();

	// Object: Function DFMAbility.DFMAICharacterCallDog.ClientSetOwnerDog
	// Flags: [Final|Native|Private]
	// Offset: 0xc43a588
	// Params: [ Num(0) Size(0x0) ]
	void ClientSetOwnerDog();

	// Object: Function DFMAbility.DFMAICharacterCallDog.AttackTarget
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xc43a42c
	// Params: [ Num(4) Size(0x18) ]
	void AttackTarget(uint8_t bIsBite, struct AActor* InTarget, int32_t InAttackValueId, int32_t InSkillId);
};

// Object: Class DFMAbility.DFMBoss05SmokeActor
// Size: 0x778 (Inherited: 0x770)
struct ADFMBoss05SmokeActor : ADFMAbilityDeformableSmokeActor
{
	DEFINE_UE_CLASS_HELPERS(ADFMBoss05SmokeActor, "DFMBoss05SmokeActor")

	uint8_t Pad_0x770[0x8]; // 0x770(0x8)
};

// Object: Class DFMAbility.DFMBulletDetectorSubSystem
// Size: 0x80 (Inherited: 0x30)
struct UDFMBulletDetectorSubSystem : UWorldSubsystem
{
	DEFINE_UE_CLASS_HELPERS(UDFMBulletDetectorSubSystem, "DFMBulletDetectorSubSystem")

	struct TMap<uint64_t, struct TWeakObjectPtr<struct ADFMAbilityCammyBulletDetector>> Detectors; // 0x30(0x50)

	// Object: Function DFMAbility.DFMBulletDetectorSubSystem.UnSpawnCammyBulletDetector
	// Flags: [Final|Native|Private|BlueprintCallable]
	// Offset: 0xc43abb0
	// Params: [ Num(1) Size(0x4) ]
	void UnSpawnCammyBulletDetector(int32_t skillEntityIndex);

	// Object: Function DFMAbility.DFMBulletDetectorSubSystem.SpawnCammyBulletDetector
	// Flags: [Final|Native|Private|BlueprintCallable]
	// Offset: 0xc43aad0
	// Params: [ Num(2) Size(0x10) ]
	void SpawnCammyBulletDetector(int32_t skillEntityIndex, struct UGPCammyBulletDetectorData* DetectorData);

	// Object: Function DFMAbility.DFMBulletDetectorSubSystem.Get
	// Flags: [Final|Native|Static|Public]
	// Offset: 0xc43aa2c
	// Params: [ Num(2) Size(0x10) ]
	static struct UDFMBulletDetectorSubSystem* Get(struct UObject* WorldContext);
};

// Object: Class DFMAbility.DFMCharacterBuffEntityC405Flash
// Size: 0x198 (Inherited: 0x190)
struct UDFMCharacterBuffEntityC405Flash : UDFMCharacterBuffEntityBase
{
	DEFINE_UE_CLASS_HELPERS(UDFMCharacterBuffEntityC405Flash, "DFMCharacterBuffEntityC405Flash")

	struct FName LeftArmAnimName; // 0x18C(0x8)
};

// Object: Class DFMAbility.DFMCharacterBuffEntitySkillForbbiden
// Size: 0x1D8 (Inherited: 0x190)
struct UDFMCharacterBuffEntitySkillForbbiden : UDFMCharacterBuffEntityBase
{
	DEFINE_UE_CLASS_HELPERS(UDFMCharacterBuffEntitySkillForbbiden, "DFMCharacterBuffEntitySkillForbbiden")

	struct FBuffForbiddenData ForbiddenData; // 0x190(0x38)
	uint8_t bNeedPlayLeftHandAnim : 1; // 0x1C8(0x1), Mask(0x1)
	uint8_t BitPad_0x1C8_1 : 7; // 0x1C8(0x1)
	uint8_t Pad_0x1C9[0x3]; // 0x1C9(0x3)
	struct FName LeftAnimName; // 0x1CC(0x8)
	uint8_t Pad_0x1D4[0x4]; // 0x1D4(0x4)
};

// Object: Class DFMAbility.DFMCharBuffEntityC204PassiveMP
// Size: 0x1F8 (Inherited: 0x190)
struct UDFMCharBuffEntityC204PassiveMP : UDFMCharacterBuffEntityBase
{
	DEFINE_UE_CLASS_HELPERS(UDFMCharBuffEntityC204PassiveMP, "DFMCharBuffEntityC204PassiveMP")

	uint8_t bInheritCoolDown : 1; // 0x18C(0x1), Mask(0x1)
	float DetectRange; // 0x190(0x4)
	float MarkTime; // 0x194(0x4)
	int32_t MaxMarkNum; // 0x198(0x4)
	float CoolDownTime; // 0x19C(0x4)
	float RefreshInterval; // 0x1A0(0x4)
	uint32_t CoolDownBuffID; // 0x1A4(0x4)
	struct FName AudioName; // 0x1A8(0x8)
	EScoreName ScoreName; // 0x1B0(0x4)
	uint8_t BitPad_0x1B4_1 : 7; // 0x1B4(0x1)
	uint8_t Pad_0x1B5[0x3]; // 0x1B5(0x3)
	struct TArray<ECollisionChannel> AllTraceChannels; // 0x1B8(0x10)
	uint8_t Pad_0x1C8[0x28]; // 0x1C8(0x28)
	struct ADFMCharacter* OwnerCharacter; // 0x1F0(0x8)

	// Object: Function DFMAbility.DFMCharBuffEntityC204PassiveMP.TryDetect
	// Flags: [Final|Native|Public]
	// Offset: 0xc43ad28
	// Params: [ Num(0) Size(0x0) ]
	void TryDetect();
};

// Object: Class DFMAbility.DFMCharBuffEntityC204PassiveSOLNew
// Size: 0x1F0 (Inherited: 0x190)
struct UDFMCharBuffEntityC204PassiveSOLNew : UDFMCharacterBuffEntityBase
{
	DEFINE_UE_CLASS_HELPERS(UDFMCharBuffEntityC204PassiveSOLNew, "DFMCharBuffEntityC204PassiveSOLNew")

	float DetectRange; // 0x18C(0x4)
	float MarkTime; // 0x190(0x4)
	float CoolDownTime; // 0x194(0x4)
	float RefreshInterval; // 0x198(0x4)
	struct FName AudioName; // 0x19C(0x8)
	struct FString VOName; // 0x1A8(0x10)
	struct TArray<ECollisionChannel> AllTraceChannels; // 0x1B8(0x10)
	struct TArray<struct FAudioListenerItemData> ListenAudioData; // 0x1C8(0x10)
	uint8_t Pad_0x1D8[0x10]; // 0x1D8(0x10)
	struct ADFMCharacter* OwnerCharacter; // 0x1E8(0x8)

	// Object: Function DFMAbility.DFMCharBuffEntityC204PassiveSOLNew.CheckDetect
	// Flags: [Final|Native|Public]
	// Offset: 0xc43ad50
	// Params: [ Num(0) Size(0x0) ]
	void CheckDetect();
};

// Object: Class DFMAbility.DFMCruiseMissileAnimInstance
// Size: 0xCA0 (Inherited: 0xC90)
struct UDFMCruiseMissileAnimInstance : UGPModularWeaponAnimInstance
{
	DEFINE_UE_CLASS_HELPERS(UDFMCruiseMissileAnimInstance, "DFMCruiseMissileAnimInstance")

	uint8_t HasFired : 1; // 0xC90(0x1), Mask(0x1)
	uint8_t BitPad_0xC90_1 : 7; // 0xC90(0x1)
	uint8_t Pad_0xC91[0xF]; // 0xC91(0xF)
};

// Object: Class DFMAbility.DFMCruiseMissileFuncComponent
// Size: 0x170 (Inherited: 0x168)
struct UDFMCruiseMissileFuncComponent : UGPWeaponFuncComponentBase
{
	DEFINE_UE_CLASS_HELPERS(UDFMCruiseMissileFuncComponent, "DFMCruiseMissileFuncComponent")

	struct FName ViewPanelName; // 0x164(0x8)

	// Object: Function DFMAbility.DFMCruiseMissileFuncComponent.SwitchWeaponNextFrame
	// Flags: [Final|Native|Public]
	// Offset: 0xc43adac
	// Params: [ Num(0) Size(0x0) ]
	void SwitchWeaponNextFrame();

	// Object: Function DFMAbility.DFMCruiseMissileFuncComponent.SwitchToLastUsedWeapon
	// Flags: [Final|Native|Protected]
	// Offset: 0xc43ad98
	// Params: [ Num(0) Size(0x0) ]
	void SwitchToLastUsedWeapon();

	// Object: Function DFMAbility.DFMCruiseMissileFuncComponent.PreShowView
	// Flags: [Final|Native|Protected]
	// Offset: 0xc43ad84
	// Params: [ Num(0) Size(0x0) ]
	void PreShowView();
};

// Object: Class DFMAbility.CruiseMissileConfig
// Size: 0xD0 (Inherited: 0x30)
struct UCruiseMissileConfig : UPrimaryDataAsset
{
	DEFINE_UE_CLASS_HELPERS(UCruiseMissileConfig, "CruiseMissileConfig")

	float MaxEnergy; // 0x30(0x4)
	float EnergyCostPerSec; // 0x34(0x4)
	float SecondaryEnergyCostPerSec; // 0x38(0x4)
	float DefaultHp; // 0x3C(0x4)
	float ViewTraceInterval; // 0x40(0x4)
	float ViewForwardTraceDistance; // 0x44(0x4)
	float ViewMarkDistance; // 0x48(0x4)
	float MarkAreaRatio; // 0x4C(0x4)
	float SubMissileSpawnAngle; // 0x50(0x4)
	float SubMissileSpawnSpeed; // 0x54(0x4)
	struct AAbilityWeaponThrowableBullet* SubMissileClass; // 0x58(0x8)
	float SecondaryAccelerateFovRatio; // 0x60(0x4)
	float FovLerpTime; // 0x64(0x4)
	float SecondaryAccelerateFovMax; // 0x68(0x4)
	float SecondaryAccelerateFovMin; // 0x6C(0x4)
	float HitCapsuleRadius; // 0x70(0x4)
	float HitCapsuleHalfHeight; // 0x74(0x4)
	struct UCurveFloat* VelocityCurve; // 0x78(0x8)
	struct UCurveFloat* HipFireVelocityCurve; // 0x80(0x8)
	float RotateInputRate; // 0x88(0x4)
	float TurnAtRate; // 0x8C(0x4)
	float LookUpRate; // 0x90(0x4)
	float TurnAtAngularAcc; // 0x94(0x4)
	float LookUpAngularAcc; // 0x98(0x4)
	float SecondaryTurnAtRate; // 0x9C(0x4)
	float SecondaryLookUpRate; // 0xA0(0x4)
	float SecondaryTurnAtAngularAcc; // 0xA4(0x4)
	float SecondaryLookUpAngularAcc; // 0xA8(0x4)
	struct FVector2D NoInputDec; // 0xAC(0x8)
	float SecondaryAcceleration; // 0xB4(0x4)
	float SecondaryMaxSpeed; // 0xB8(0x4)
	float RollBackRate; // 0xBC(0x4)
	float RollBackAccRate; // 0xC0(0x4)
	float AutoRollBackTime; // 0xC4(0x4)
	int32_t InputSize; // 0xC8(0x4)
	float NoInputTickTime; // 0xCC(0x4)
};

// Object: Class DFMAbility.DFMCruiseMissileMain
// Size: 0x10C0 (Inherited: 0xEB0)
struct ADFMCruiseMissileMain : AWeaponBulletPhysicsSimulate
{
	DEFINE_UE_CLASS_HELPERS(ADFMCruiseMissileMain, "DFMCruiseMissileMain")

	uint8_t Pad_0xEB0[0x90]; // 0xEB0(0x90)
	struct UGPCruiseMissileMovementComponent* CruiseMissileMovement; // 0xF40(0x8)
	struct UAbilityWaterEffectComponent* WaterEffectComponent; // 0xF48(0x8)
	int32_t ThreatId; // 0xF50(0x4)
	float MaxEnergy; // 0xF54(0x4)
	float EnergyCostPerSec; // 0xF58(0x4)
	float SecondaryEnergyCostPerSec; // 0xF5C(0x4)
	float DefaultHp; // 0xF60(0x4)
	struct FName ViewPanelName; // 0xF64(0x8)
	float ViewTraceInterval; // 0xF6C(0x4)
	float ViewForwardTraceDistance; // 0xF70(0x4)
	float ViewMarkDistance; // 0xF74(0x4)
	float MarkAreaRatio; // 0xF78(0x4)
	float SubMissileSpawnAngle; // 0xF7C(0x4)
	float SubMissileSpawnSpeed; // 0xF80(0x4)
	uint8_t Pad_0xF84[0x4]; // 0xF84(0x4)
	struct AAbilityWeaponThrowableBullet* SubMissileClass; // 0xF88(0x8)
	struct TArray<float> SubMissileExplosionTimeOffset; // 0xF90(0x10)
	float SecondaryAccelerateFovRatio; // 0xFA0(0x4)
	float FovLerpTime; // 0xFA4(0x4)
	float SecondaryAccelerateFovMax; // 0xFA8(0x4)
	float SecondaryAccelerateFovMin; // 0xFAC(0x4)
	struct FString HitVo; // 0xFB0(0x10)
	struct TMap<EDFMGamePlayMode, struct UCruiseMissileConfig*> HD_OverrideConfig; // 0xFC0(0x50)
	struct TMap<EDFMGamePlayMode, struct UCruiseMissileConfig*> Mobile_OverrideConfig; // 0x1010(0x50)
	struct UGPAudioEventAsset* IntoWaterAudio; // 0x1060(0x8)
	uint8_t Pad_0x1068[0x20]; // 0x1068(0x20)
	struct UDFMCruiseMissileView* CachedView; // 0x1088(0x8)
	uint8_t Pad_0x1090[0x10]; // 0x1090(0x10)
	struct TArray<struct AActor*> MarkTargets; // 0x10A0(0x10)
	uint8_t Pad_0x10B0[0x10]; // 0x10B0(0x10)

	// Object: Function DFMAbility.DFMCruiseMissileMain.UpdateViewData
	// Flags: [Final|Native|Protected]
	// Offset: 0xc43b2c4
	// Params: [ Num(0) Size(0x0) ]
	void UpdateViewData();

	// Object: Function DFMAbility.DFMCruiseMissileMain.UpdateMarkTargets
	// Flags: [Final|Native|Protected]
	// Offset: 0xc43b2b0
	// Params: [ Num(0) Size(0x0) ]
	void UpdateMarkTargets();

	// Object: Function DFMAbility.DFMCruiseMissileMain.UpdateEnergy
	// Flags: [Final|Native|Protected]
	// Offset: 0xc43b20c
	// Params: [ Num(1) Size(0x4) ]
	void UpdateEnergy(float DeltaTime);

	// Object: Function DFMAbility.DFMCruiseMissileMain.StopFovChange
	// Flags: [Final|Native|Protected]
	// Offset: 0xc43b1f8
	// Params: [ Num(0) Size(0x0) ]
	void StopFovChange();

	// Object: Function DFMAbility.DFMCruiseMissileMain.StartSecondaryAccelerate3P
	// Flags: [Net|NetReliableNative|Event|NetMulticast|Protected]
	// Offset: 0xc43b1dc
	// Params: [ Num(0) Size(0x0) ]
	void StartSecondaryAccelerate3P();

	// Object: Function DFMAbility.DFMCruiseMissileMain.StartFovChange
	// Flags: [Final|Native|Protected]
	// Offset: 0xc43b1c8
	// Params: [ Num(0) Size(0x0) ]
	void StartFovChange();

	// Object: Function DFMAbility.DFMCruiseMissileMain.SpawnSubMissile
	// Flags: [Final|Native|Protected]
	// Offset: 0xc43b1b4
	// Params: [ Num(0) Size(0x0) ]
	void SpawnSubMissile();

	// Object: Function DFMAbility.DFMCruiseMissileMain.ServerStopControl
	// Flags: [Net|NetReliableNative|Event|Public|NetServer]
	// Offset: 0xc43b198
	// Params: [ Num(0) Size(0x0) ]
	void ServerStopControl();

	// Object: Function DFMAbility.DFMCruiseMissileMain.ServerStartControl
	// Flags: [Net|NetReliableNative|Event|Public|NetServer]
	// Offset: 0xc43b0e4
	// Params: [ Num(1) Size(0x1) ]
	void ServerStartControl(uint8_t bControlled);

	// Object: Function DFMAbility.DFMCruiseMissileMain.OnOutOfEnergy
	// Flags: [Final|Native|Protected]
	// Offset: 0xc43b0d0
	// Params: [ Num(0) Size(0x0) ]
	void OnOutOfEnergy();

	// Object: Function DFMAbility.DFMCruiseMissileMain.MultiDoExplosion
	// Flags: [Net|NetReliableNative|Event|NetMulticast|Protected|HasDefaults]
	// Offset: 0x1074bae0
	// Params: [ Num(4) Size(0x1C) ]
	void MultiDoExplosion(EPhysicalSurface ProjectileHitSurface, uint8_t bHitLandScape, struct FVector ExplosionLoc, struct FVector ExplosionPlane);

	// Object: Function DFMAbility.DFMCruiseMissileMain.GetSpawnSubMissileLocation
	// Flags: [Native|Event|Protected|HasDefaults|BlueprintEvent]
	// Offset: 0xc43b090
	// Params: [ Num(1) Size(0xC) ]
	struct FVector GetSpawnSubMissileLocation();

	// Object: Function DFMAbility.DFMCruiseMissileMain.GetIsLocalEnemy
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x10a31ec4
	// Params: [ Num(1) Size(0x1) ]
	uint8_t GetIsLocalEnemy();

	// Object: Function DFMAbility.DFMCruiseMissileMain.GetCurrentEnergy
	// Flags: [Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xc43b054
	// Params: [ Num(1) Size(0x4) ]
	float GetCurrentEnergy();

	// Object: Function DFMAbility.DFMCruiseMissileMain.ClientStopControl3p
	// Flags: [Net|NetReliableNative|Event|NetMulticast|Protected]
	// Offset: 0xc43b038
	// Params: [ Num(0) Size(0x0) ]
	void ClientStopControl3p();

	// Object: Function DFMAbility.DFMCruiseMissileMain.ClientStopControl
	// Flags: [Final|Native|Protected]
	// Offset: 0xc43b024
	// Params: [ Num(0) Size(0x0) ]
	void ClientStopControl();

	// Object: Function DFMAbility.DFMCruiseMissileMain.ClientStartControl3p
	// Flags: [Net|NetReliableNative|Event|NetMulticast|Protected]
	// Offset: 0xc43b008
	// Params: [ Num(0) Size(0x0) ]
	void ClientStartControl3p();

	// Object: Function DFMAbility.DFMCruiseMissileMain.ClientStartControl
	// Flags: [Final|Native|Protected]
	// Offset: 0xc43aff4
	// Params: [ Num(0) Size(0x0) ]
	void ClientStartControl();

	// Object: Function DFMAbility.DFMCruiseMissileMain.BP_StartSecondaryAccelerate
	// Flags: [Event|Protected|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(0) Size(0x0) ]
	void BP_StartSecondaryAccelerate();

	// Object: Function DFMAbility.DFMCruiseMissileMain.BP_HideEffect
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(1) Size(0x1) ]
	void BP_HideEffect(uint8_t isHide);
};

// Object: Class DFMAbility.DFMDeformableMeshEmitComponent
// Size: 0x490 (Inherited: 0x470)
struct UDFMDeformableMeshEmitComponent : UGPDeformableMeshEmitComponent
{
	DEFINE_UE_CLASS_HELPERS(UDFMDeformableMeshEmitComponent, "DFMDeformableMeshEmitComponent")

	uint8_t Pad_0x470[0x10]; // 0x470(0x10)
	float FXSmokeExpandRadius; // 0x480(0x4)
	uint8_t Pad_0x484[0xC]; // 0x484(0xC)

	// Object: Function DFMAbility.DFMDeformableMeshEmitComponent.UnRegisterToFXDelegate
	// Flags: [Final|Native|Protected]
	// Offset: 0xc43b55c
	// Params: [ Num(0) Size(0x0) ]
	void UnRegisterToFXDelegate();

	// Object: Function DFMAbility.DFMDeformableMeshEmitComponent.RegisterToFXDelegate
	// Flags: [Final|Native|Protected]
	// Offset: 0xc43b548
	// Params: [ Num(0) Size(0x0) ]
	void RegisterToFXDelegate();

	// Object: Function DFMAbility.DFMDeformableMeshEmitComponent.OnDelgateFXRemove
	// Flags: [Final|Native|Protected|HasDefaults]
	// Offset: 0xc43b42c
	// Params: [ Num(3) Size(0x18) ]
	void OnDelgateFXRemove(struct UObject* Pointer, struct FVector ZeroBaseLoc, float radius);

	// Object: Function DFMAbility.DFMDeformableMeshEmitComponent.OnDelgateFXAdd
	// Flags: [Final|Native|Protected|HasDefaults]
	// Offset: 0xc43b310
	// Params: [ Num(3) Size(0x18) ]
	void OnDelgateFXAdd(struct UObject* Pointer, struct FVector ZeroBaseLoc, float radius);
};

// Object: Class DFMAbility.DFMDelayHomingStingerMissile
// Size: 0x1010 (Inherited: 0xFF0)
struct ADFMDelayHomingStingerMissile : AWeaponBulletStingerMissile
{
	DEFINE_UE_CLASS_HELPERS(ADFMDelayHomingStingerMissile, "DFMDelayHomingStingerMissile")

	struct AActor* DelayLockTarget; // 0xFE8(0x8)
	uint8_t bLockAllTheTime : 1; // 0xFF8(0x1), Mask(0x1)
	uint8_t BitPad_0xFF8_1 : 7; // 0xFF8(0x1)
	uint8_t Pad_0xFF9[0x3]; // 0xFF9(0x3)
	float DelayLockTime; // 0xFFC(0x4)
	uint8_t bEnableCloseDistance : 1; // 0x1000(0x1), Mask(0x1)
	uint8_t BitPad_0x1000_1 : 7; // 0x1000(0x1)
	uint8_t Pad_0x1001[0x3]; // 0x1001(0x3)
	float CloseDistance; // 0x1004(0x4)
	float CloseDistanceDelayLockTime; // 0x1008(0x4)
	uint8_t Pad_0x100C[0x4]; // 0x100C(0x4)
};

// Object: Class DFMAbility.DFMDelayHomingStingMissileMovementComponent
// Size: 0x7E0 (Inherited: 0x7C0)
struct UDFMDelayHomingStingMissileMovementComponent : UStingerMissileProjectileMovementComponent
{
	DEFINE_UE_CLASS_HELPERS(UDFMDelayHomingStingMissileMovementComponent, "DFMDelayHomingStingMissileMovementComponent")

	uint8_t Pad_0x7C0[0x4]; // 0x7C0(0x4)
	float MaxRotateUpAngle; // 0x7C4(0x4)
	float CloseDistanceMaxRotateUpAngle; // 0x7C8(0x4)
	uint8_t IsUpWithInitialVelocity : 1; // 0x7CC(0x1), Mask(0x1)
	uint8_t BitPad_0x7CC_1 : 7; // 0x7CC(0x1)
	uint8_t Pad_0x7CD[0x3]; // 0x7CD(0x3)
	float UpAcceleration; // 0x7D0(0x4)
	float MaxSpeedBeforeHoming; // 0x7D4(0x4)
	uint8_t Pad_0x7D8[0x8]; // 0x7D8(0x8)
};

// Object: Class DFMAbility.DFMFollowProjectileMovementComponent
// Size: 0x220 (Inherited: 0x210)
struct UDFMFollowProjectileMovementComponent : UProjectileMovementComponent
{
	DEFINE_UE_CLASS_HELPERS(UDFMFollowProjectileMovementComponent, "DFMFollowProjectileMovementComponent")

	struct TWeakObjectPtr<struct AActor> FollowTarget; // 0x20C(0x8)
	float StopDistance; // 0x214(0x4)
	uint8_t Pad_0x21C[0x4]; // 0x21C(0x4)
};

// Object: Class DFMAbility.DFMRemoteControlVehicleFireMode
// Size: 0x368 (Inherited: 0x340)
struct UDFMRemoteControlVehicleFireMode : UWeaponFireModePlacement
{
	DEFINE_UE_CLASS_HELPERS(UDFMRemoteControlVehicleFireMode, "DFMRemoteControlVehicleFireMode")

	struct TSoftObjectPtr<AGPVehicleBase> RemoteVehicle; // 0x340(0x28)
};

// Object: Class DFMAbility.DFMSkillForbiddenCueHandler
// Size: 0x168 (Inherited: 0x130)
struct UDFMSkillForbiddenCueHandler : UGPEffectCueHandler
{
	DEFINE_UE_CLASS_HELPERS(UDFMSkillForbiddenCueHandler, "DFMSkillForbiddenCueHandler")

	struct FBuffForbiddenData ForbiddenData; // 0x130(0x38)
};

// Object: Class DFMAbility.DFMSkillReplicateComponent
// Size: 0x198 (Inherited: 0xF8)
struct UDFMSkillReplicateComponent : UGPSkillReplicateComponent
{
	DEFINE_UE_CLASS_HELPERS(UDFMSkillReplicateComponent, "DFMSkillReplicateComponent")

	struct ADFMCharacter* DFMOwner; // 0xF8(0x8)
	int32_t SonarEnemyDetectCount; // 0x100(0x4)
	int32_t SonarScanState; // 0x104(0x4)
	float SonarScanStateStartTime; // 0x108(0x4)
	float SonarMarkTime; // 0x10C(0x4)
	struct ADFMAbilityActor* LastDetectActor; // 0x110(0x8)
	struct AGPCharacter* C204PassiveDetectChar; // 0x118(0x8)
	struct UConflictZoneMapIconViewController* ViewRangeController; // 0x120(0x8)
	struct FTimerHandle C204PassiveDetectTimerHandle; // 0x128(0x8)
	struct TMap<uint64_t, struct FTimerHandle> UinToTimerHandleMap; // 0x130(0x50)
	uint8_t Pad_0x180[0x18]; // 0x180(0x18)

	// Object: Function DFMAbility.DFMSkillReplicateComponent.ServerSetSonarScanStatus
	// Flags: [Final|Native|Public]
	// Offset: 0xc43c2bc
	// Params: [ Num(4) Size(0x14) ]
	void ServerSetSonarScanStatus(struct ADFMAbilityActor* MarkActor, int32_t SonarScanState, float SonarScanStateStartTime, float SonarMarkTime);

	// Object: Function DFMAbility.DFMSkillReplicateComponent.ServerSetSonarDetectEnemyCount
	// Flags: [Final|Native|Public]
	// Offset: 0xc43c218
	// Params: [ Num(1) Size(0x4) ]
	void ServerSetSonarDetectEnemyCount(int32_t EnemyCount);

	// Object: Function DFMAbility.DFMSkillReplicateComponent.ServerSetC204PassiveDetectChar
	// Flags: [Final|Native|Public]
	// Offset: 0xc43c138
	// Params: [ Num(2) Size(0xC) ]
	void ServerSetC204PassiveDetectChar(struct AGPCharacter* Char, float MarkTime);

	// Object: Function DFMAbility.DFMSkillReplicateComponent.OnRep_SonarScanState
	// Flags: [Final|Native|Public]
	// Offset: 0xc43c124
	// Params: [ Num(0) Size(0x0) ]
	void OnRep_SonarScanState();

	// Object: Function DFMAbility.DFMSkillReplicateComponent.OnRep_SonarEnemyDetectCount
	// Flags: [Final|Native|Public]
	// Offset: 0x1012db3c
	// Params: [ Num(0) Size(0x0) ]
	void OnRep_SonarEnemyDetectCount();

	// Object: Function DFMAbility.DFMSkillReplicateComponent.MulticastC204PassiveDetectChar
	// Flags: [Net|NetReliableNative|Event|NetMulticast|Public]
	// Offset: 0xc43c004
	// Params: [ Num(3) Size(0x14) ]
	void MulticastC204PassiveDetectChar(struct AGPCharacter* SourceChar, struct AGPCharacter* DetectChar, float MarkTime);

	// Object: Function DFMAbility.DFMSkillReplicateComponent.ClientSonarDetectVehicleMarkRemove
	// Flags: [Net|NetReliableNative|Event|Public|NetClient]
	// Offset: 0xc43bf58
	// Params: [ Num(1) Size(0x8) ]
	void ClientSonarDetectVehicleMarkRemove(struct AActor* Target);

	// Object: Function DFMAbility.DFMSkillReplicateComponent.ClientSonarDetectVehicle
	// Flags: [Net|NetReliableNative|Event|Public|NetClient]
	// Offset: 0xc43be70
	// Params: [ Num(2) Size(0xC) ]
	void ClientSonarDetectVehicle(struct AActor* Target, float DetectTime);

	// Object: Function DFMAbility.DFMSkillReplicateComponent.ClientSonarDetectEnemyMarkRemove
	// Flags: [Net|NetReliableNative|Event|Public|NetClient]
	// Offset: 0xc43bd80
	// Params: [ Num(2) Size(0x9) ]
	void ClientSonarDetectEnemyMarkRemove(struct AActor* Target, uint8_t bUseGeneralMarker);

	// Object: Function DFMAbility.DFMSkillReplicateComponent.ClientSonarDetectEnemy
	// Flags: [Net|NetReliableNative|Event|Public|NetClient]
	// Offset: 0xc43bc1c
	// Params: [ Num(4) Size(0x11) ]
	void ClientSonarDetectEnemy(struct AActor* Target, float DetectTime, float RefreshInterval, uint8_t bUseGeneralMarker);

	// Object: Function DFMAbility.DFMSkillReplicateComponent.ClientSonarDetectEnd
	// Flags: [Final|Native|Public]
	// Offset: 0xc43bc08
	// Params: [ Num(0) Size(0x0) ]
	void ClientSonarDetectEnd();

	// Object: Function DFMAbility.DFMSkillReplicateComponent.ClientSonarDetect
	// Flags: [Final|Native|Public]
	// Offset: 0xc43bb64
	// Params: [ Num(1) Size(0x4) ]
	void ClientSonarDetect(float EndTime);

	// Object: Function DFMAbility.DFMSkillReplicateComponent.ClientPreSonarDetect
	// Flags: [Final|Native|Public]
	// Offset: 0xc43bac0
	// Params: [ Num(1) Size(0x4) ]
	void ClientPreSonarDetect(float StartTime);

	// Object: Function DFMAbility.DFMSkillReplicateComponent.ClientPlayMarkSound
	// Flags: [Net|NetReliableNative|Event|Public|NetClient]
	// Offset: 0xc43ba14
	// Params: [ Num(1) Size(0x8) ]
	void ClientPlayMarkSound(struct FName AudioName);

	// Object: Function DFMAbility.DFMSkillReplicateComponent.ClientLeftSonarDetectRange
	// Flags: [Final|Native|Public]
	// Offset: 0xc43ba00
	// Params: [ Num(0) Size(0x0) ]
	void ClientLeftSonarDetectRange();

	// Object: Function DFMAbility.DFMSkillReplicateComponent.ClientEnterSonarDetectRange
	// Flags: [Final|Native|Public]
	// Offset: 0xc43b9ec
	// Params: [ Num(0) Size(0x0) ]
	void ClientEnterSonarDetectRange();

	// Object: Function DFMAbility.DFMSkillReplicateComponent.ClientBeginSonarDetect
	// Flags: [Final|Native|Public]
	// Offset: 0xc43b948
	// Params: [ Num(1) Size(0x4) ]
	void ClientBeginSonarDetect(float StartTime);

	// Object: Function DFMAbility.DFMSkillReplicateComponent.ClearC204PassiveDetectChar
	// Flags: [Final|Native|Public]
	// Offset: 0xc43b934
	// Params: [ Num(0) Size(0x0) ]
	void ClearC204PassiveDetectChar();
};

// Object: Class DFMAbility.SonarDevicePreviewActor
// Size: 0x4D0 (Inherited: 0x4C8)
struct ASonarDevicePreviewActor : APlacementPreviewActorBase
{
	DEFINE_UE_CLASS_HELPERS(ASonarDevicePreviewActor, "SonarDevicePreviewActor")

	float DetectAngleDegrees; // 0x4C8(0x4)
	float DetectRange; // 0x4CC(0x4)
};

// Object: Class DFMAbility.DFMSupportPackSubSystem
// Size: 0xB0 (Inherited: 0x30)
struct UDFMSupportPackSubSystem : UWorldSubsystem
{
	DEFINE_UE_CLASS_HELPERS(UDFMSupportPackSubSystem, "DFMSupportPackSubSystem")

	struct AGPCharacter* LockTarget; // 0x30(0x8)
	struct UGPSupportLockerData* DataComp; // 0x38(0x8)
	uint8_t bAmmoPackAddArmdedForceItem : 1; // 0x40(0x1), Mask(0x1)
	uint8_t BitPad_0x40_1 : 7; // 0x40(0x1)
	uint8_t bAsyncRayTracing : 1; // 0x41(0x1), Mask(0x1)
	uint8_t BitPad_0x41_1 : 7; // 0x41(0x1)
	uint8_t Pad_0x42[0x6]; // 0x42(0x6)
	struct AActor* LastRayHitActor; // 0x48(0x8)
	struct TArray<struct AActor*> RayHitActors; // 0x50(0x10)
	struct TArray<uint64_t> LastSerchUins; // 0x60(0x10)
	uint8_t Pad_0x70[0x20]; // 0x70(0x20)
	struct UGPSupportWeaponMarkerItem* ItemCache; // 0x90(0x8)
	struct AGPCharacter* CharacterOwner; // 0x98(0x8)
	struct FTimerHandle MoveTimerTickHandle; // 0xA0(0x8)
	int32_t TickCounter; // 0xA8(0x4)
	uint8_t Pad_0xAC[0x4]; // 0xAC(0x4)

	// Object: Function DFMAbility.DFMSupportPackSubSystem.SetSupportLockerData
	// Flags: [Final|Native|Private|BlueprintCallable]
	// Offset: 0x10ae3d78
	// Params: [ Num(2) Size(0x10) ]
	void SetSupportLockerData(int32_t skillEntityIndex, struct UGPSupportLockerData* LockerData);

	// Object: Function DFMAbility.DFMSupportPackSubSystem.ServerUseSupportPack
	// Flags: [Net|NetReliableNative|Event|Public|NetServer]
	// Offset: 0xc43f034
	// Params: [ Num(3) Size(0x11) ]
	void ServerUseSupportPack(struct AActor* Caster, struct AActor* Actor, ESupportType SupportType);

	// Object: Function DFMAbility.DFMSupportPackSubSystem.LockerTick
	// Flags: [Final|Native|Public]
	// Offset: 0xc43f020
	// Params: [ Num(0) Size(0x0) ]
	void LockerTick();

	// Object: Function DFMAbility.DFMSupportPackSubSystem.HasTarget
	// Flags: [Final|Native|Public]
	// Offset: 0xc43efe8
	// Params: [ Num(1) Size(0x1) ]
	uint8_t HasTarget();

	// Object: Function DFMAbility.DFMSupportPackSubSystem.Get
	// Flags: [Final|Native|Static|Public]
	// Offset: 0xc43ef44
	// Params: [ Num(2) Size(0x10) ]
	static struct UDFMSupportPackSubSystem* Get(struct UObject* WorldContext);

	// Object: Function DFMAbility.DFMSupportPackSubSystem.EnableAutoShowBubble
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xc43ee28
	// Params: [ Num(3) Size(0xA) ]
	void EnableAutoShowBubble(struct AActor* skillEntityIndex, ESupportType BubbleType, EAutoShowBubbleSourceType SourceType);

	// Object: Function DFMAbility.DFMSupportPackSubSystem.DisableAutoShowBubble
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xc43ed0c
	// Params: [ Num(3) Size(0xA) ]
	void DisableAutoShowBubble(struct AActor* skillEntityIndex, ESupportType BubbleType, EAutoShowBubbleSourceType SourceType);

	// Object: Function DFMAbility.DFMSupportPackSubSystem.ClientUseSupportPack
	// Flags: [Final|Native|Public]
	// Offset: 0xc43ebd0
	// Params: [ Num(2) Size(0x11) ]
	void ClientUseSupportPack(struct TArray<ECharingSlot> CharingSlotList, uint8_t bOnlySelf);

	// Object: Function DFMAbility.DFMSupportPackSubSystem.ClientSelfUseSupportPack
	// Flags: [Final|Native|Public]
	// Offset: 0xc43ebbc
	// Params: [ Num(0) Size(0x0) ]
	void ClientSelfUseSupportPack();

	// Object: Function DFMAbility.DFMSupportPackSubSystem.ClearSupportLockerData
	// Flags: [Final|Native|Private|BlueprintCallable]
	// Offset: 0x10a2d91c
	// Params: [ Num(1) Size(0x4) ]
	void ClearSupportLockerData(int32_t skillEntityIndex);

	// Object: Function DFMAbility.DFMSupportPackSubSystem.AsyncRayTrace
	// Flags: [Final|Native|Private]
	// Offset: 0xc43eba8
	// Params: [ Num(0) Size(0x0) ]
	void AsyncRayTrace();
};

// Object: Class DFMAbility.DFMThrowableBulletFreezeCannon
// Size: 0x1890 (Inherited: 0x1890)
struct ADFMThrowableBulletFreezeCannon : AAbilityWeaponThrowableBullet
{
	DEFINE_UE_CLASS_HELPERS(ADFMThrowableBulletFreezeCannon, "DFMThrowableBulletFreezeCannon")

	struct FName EnemyDragTailEffectId; // 0x1884(0x8)

	// Object: Function DFMAbility.DFMThrowableBulletFreezeCannon.BP_DoPlayExplosionEffect
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(1) Size(0x1) ]
	void BP_DoPlayExplosionEffect(uint8_t bMakeDamage);
};

// Object: Class DFMAbility.DFMThrowableBulletFreezeSpray
// Size: 0x18B0 (Inherited: 0x1890)
struct ADFMThrowableBulletFreezeSpray : AAbilityWeaponThrowableBullet
{
	DEFINE_UE_CLASS_HELPERS(ADFMThrowableBulletFreezeSpray, "DFMThrowableBulletFreezeSpray")

	struct FName FriendlySprayEffectId; // 0x1884(0x8)
	struct FName EnemySprayEffectId; // 0x188C(0x8)
	struct FName EnemyDragTailEffectId; // 0x1894(0x8)
	struct UFXResourceContainerComponent* SprayFXComp; // 0x18A0(0x8)

	// Object: Function DFMAbility.DFMThrowableBulletFreezeSpray.StopSprayEffect
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xc43f228
	// Params: [ Num(0) Size(0x0) ]
	void StopSprayEffect();

	// Object: Function DFMAbility.DFMThrowableBulletFreezeSpray.PlaySprayEffect
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xc43f214
	// Params: [ Num(0) Size(0x0) ]
	void PlaySprayEffect();
};

// Object: Class DFMAbility.DFMThrowWeaponDataAppearanceComp
// Size: 0xC70 (Inherited: 0xC10)
struct UDFMThrowWeaponDataAppearanceComp : UThrowWeaponDataAppearanceComp
{
	DEFINE_UE_CLASS_HELPERS(UDFMThrowWeaponDataAppearanceComp, "DFMThrowWeaponDataAppearanceComp")

	uint8_t bNeedAttachFX : 1; // 0xC10(0x1), Mask(0x1)
	uint8_t BitPad_0xC10_1 : 7; // 0xC10(0x1)
	EGPWeaponStateType StartAttachState; // 0xC11(0x1)
	EGPWeaponStateType EndAttachState; // 0xC12(0x1)
	uint8_t Pad_0xC13[0x1]; // 0xC13(0x1)
	struct FName PlayFXName; // 0xC14(0x8)
	uint8_t Pad_0xC1C[0x4]; // 0xC1C(0x4)
	struct FTransform PlayFXTransform; // 0xC20(0x30)
	struct FName PlayAttachSocketName; // 0xC50(0x8)
	uint8_t Pad_0xC58[0x18]; // 0xC58(0x18)

	// Object: Function DFMAbility.DFMThrowWeaponDataAppearanceComp.ClearAttachFX
	// Flags: [Final|Native|Protected]
	// Offset: 0xc43f244
	// Params: [ Num(0) Size(0x0) ]
	void ClearAttachFX();
};

// Object: Class DFMAbility.DFMTracingLineActor
// Size: 0x410 (Inherited: 0x410)
struct ADFMTracingLineActor : AGPPreviewLineActor
{
	DEFINE_UE_CLASS_HELPERS(ADFMTracingLineActor, "DFMTracingLineActor")
};

// Object: Class DFMAbility.DFMUASPilotMovementComponent
// Size: 0x360 (Inherited: 0x340)
struct UDFMUASPilotMovementComponent : UDFMAbilityUASMovementComponent
{
	DEFINE_UE_CLASS_HELPERS(UDFMUASPilotMovementComponent, "DFMUASPilotMovementComponent")

	uint8_t bEnablePilot : 1; // 0x340(0x1), Mask(0x1)
	uint8_t BitPad_0x340_1 : 7; // 0x340(0x1)
	uint8_t bIsInit : 1; // 0x341(0x1), Mask(0x1)
	uint8_t BitPad_0x341_1 : 7; // 0x341(0x1)
	uint8_t bUsingPilot : 1; // 0x342(0x1), Mask(0x1)
	uint8_t BitPad_0x342_1 : 7; // 0x342(0x1)
	uint8_t Pad_0x343[0x1]; // 0x343(0x1)
	int32_t PilotUnit; // 0x344(0x4)
	struct TArray<struct FVector> MoveList; // 0x348(0x10)
	int32_t CurrentMoveIndex; // 0x358(0x4)
	float MoveRate; // 0x35C(0x4)

	// Object: Function DFMAbility.DFMUASPilotMovementComponent.InitPilot
	// Flags: [Final|Native|Protected]
	// Offset: 0xc43f278
	// Params: [ Num(0) Size(0x0) ]
	void InitPilot();
};

// Object: Class DFMAbility.DFMVehicleSkillBoss04BulletRoot
// Size: 0x378 (Inherited: 0x370)
struct ADFMVehicleSkillBoss04BulletRoot : AActor
{
	DEFINE_UE_CLASS_HELPERS(ADFMVehicleSkillBoss04BulletRoot, "DFMVehicleSkillBoss04BulletRoot")

	struct USceneComponent* root; // 0x370(0x8)
};

// Object: Class DFMAbility.DFMVehicleSkillBoss04Component
// Size: 0x238 (Inherited: 0xF8)
struct UDFMVehicleSkillBoss04Component : UActorComponent
{
	DEFINE_UE_CLASS_HELPERS(UDFMVehicleSkillBoss04Component, "DFMVehicleSkillBoss04Component")

	uint8_t Pad_0xF8[0x8]; // 0xF8(0x8)
	struct TWeakObjectPtr<struct AActor> CurrDamageMaker; // 0x100(0x8)
	struct TWeakObjectPtr<struct ADFMCharacter> CurrDamageTaker; // 0x108(0x8)
	struct TWeakObjectPtr<struct ADFMAIController> CurrDamageController; // 0x110(0x8)
	struct TArray<struct FVehicleBoss04WeaponInfo> WeaponConfig; // 0x118(0x10)
	struct TArray<struct UDFMVehicleSkillBoss04WeaponInstance*> WeaponInstance; // 0x128(0x10)
	uint8_t bIsFiring : 1; // 0x138(0x1), Mask(0x1)
	uint8_t BitPad_0x138_1 : 7; // 0x138(0x1)
	uint8_t Pad_0x139[0x3]; // 0x139(0x3)
	struct FName BodyMeshCompName; // 0x13C(0x8)
	struct FVector CurDir; // 0x144(0xC)
	struct AActor* LockedTarget; // 0x150(0x8)
	uint8_t Pad_0x158[0x10]; // 0x158(0x10)
	uint8_t bShowDebug : 1; // 0x168(0x1), Mask(0x1)
	uint8_t BitPad_0x168_1 : 7; // 0x168(0x1)
	uint8_t bTrailDebug : 1; // 0x169(0x1), Mask(0x1)
	uint8_t BitPad_0x169_1 : 7; // 0x169(0x1)
	uint8_t bUseBossPartyV2Shoot : 1; // 0x16A(0x1), Mask(0x1)
	uint8_t BitPad_0x16A_1 : 7; // 0x16A(0x1)
	uint8_t Pad_0x16B[0x5]; // 0x16B(0x5)
	struct UMeshComponent* MeshComp; // 0x170(0x8)
	struct TMap<struct FName, struct UMeshComponent*> SocketMeshs; // 0x178(0x50)
	struct FVehicleBoss04SkillState CurrentSkillState; // 0x1C8(0x10)
	uint8_t Pad_0x1D8[0x54]; // 0x1D8(0x54)
	float GunVoiceCD; // 0x22C(0x4)
	uint8_t Pad_0x230[0x8]; // 0x230(0x8)

	// Object: Function DFMAbility.DFMVehicleSkillBoss04Component.ServerUpdateShootDir
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	// Offset: 0xc43fa50
	// Params: [ Num(2) Size(0x18) ]
	void ServerUpdateShootDir(struct FVector Dir, struct AActor* LockTarget);

	// Object: Function DFMAbility.DFMVehicleSkillBoss04Component.ServerSetIsFire
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xc43f968
	// Params: [ Num(2) Size(0x8) ]
	void ServerSetIsFire(uint8_t bFire, float InDuration);

	// Object: Function DFMAbility.DFMVehicleSkillBoss04Component.ServerSetFireInfo
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xc43f8b0
	// Params: [ Num(1) Size(0x10) ]
	void ServerSetFireInfo(struct FVehicleBoss04SkillState StateInfo);

	// Object: Function DFMAbility.DFMVehicleSkillBoss04Component.OnRep_SkillState
	// Flags: [Final|Native|Public]
	// Offset: 0xc43f89c
	// Params: [ Num(0) Size(0x0) ]
	void OnRep_SkillState();

	// Object: Function DFMAbility.DFMVehicleSkillBoss04Component.MultCastUpdateShootDir
	// Flags: [Net|NetReliableNative|Event|NetMulticast|Public|HasDefaults]
	// Offset: 0xc43f7b4
	// Params: [ Num(2) Size(0x18) ]
	void MultCastUpdateShootDir(struct FVector Dir, struct AActor* LockTarget);

	// Object: Function DFMAbility.DFMVehicleSkillBoss04Component.MultCastSetIsFire
	// Flags: [Net|NetReliableNative|Event|NetMulticast|Public]
	// Offset: 0xc43f6c4
	// Params: [ Num(2) Size(0x8) ]
	void MultCastSetIsFire(uint8_t bFire, float InDuration);

	// Object: Function DFMAbility.DFMVehicleSkillBoss04Component.MultCastFireToPoint
	// Flags: [Net|Native|Event|NetMulticast|Public|HasDefaults]
	// Offset: 0xc43f564
	// Params: [ Num(4) Size(0x18) ]
	void MultCastFireToPoint(int32_t Index, int32_t BulletIndex, struct FVector Point, float BloomTime);

	// Object: Function DFMAbility.DFMVehicleSkillBoss04Component.BP_SetAttackTargets
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xc43f488
	// Params: [ Num(2) Size(0x10) ]
	void BP_SetAttackTargets(struct AActor* DamageMaker, struct AActor* DamageTaker);
};

// Object: Class DFMAbility.DFMVehicleSkillBoss04WeaponBullet
// Size: 0x88 (Inherited: 0x28)
struct UDFMVehicleSkillBoss04WeaponBullet : UObject
{
	DEFINE_UE_CLASS_HELPERS(UDFMVehicleSkillBoss04WeaponBullet, "DFMVehicleSkillBoss04WeaponBullet")

	struct UStaticMeshComponent* MeshComponent; // 0x28(0x8)
	float Time; // 0x30(0x4)
	float Counter; // 0x34(0x4)
	struct FVector StartLoc; // 0x38(0xC)
	struct FVector TargetPoint; // 0x44(0xC)
	uint8_t bIsServer : 1; // 0x50(0x1), Mask(0x1)
	uint8_t BitPad_0x50_1 : 7; // 0x50(0x1)
	uint8_t bDestoryed : 1; // 0x51(0x1), Mask(0x1)
	uint8_t BitPad_0x51_1 : 7; // 0x51(0x1)
	uint8_t bExplosioned : 1; // 0x52(0x1), Mask(0x1)
	uint8_t BitPad_0x52_1 : 7; // 0x52(0x1)
	uint8_t Pad_0x53[0x5]; // 0x53(0x5)
	struct TArray<struct FGPAudioFuturePlayingID> AudioId; // 0x58(0x10)
	uint8_t Pad_0x68[0x10]; // 0x68(0x10)
	struct TArray<struct UFXResourceContainerComponent*> PSC; // 0x78(0x10)
};

// Object: Class DFMAbility.DFMVehicleSkillBoss04WeaponInstance
// Size: 0x2640 (Inherited: 0x28)
struct UDFMVehicleSkillBoss04WeaponInstance : UObject
{
	DEFINE_UE_CLASS_HELPERS(UDFMVehicleSkillBoss04WeaponInstance, "DFMVehicleSkillBoss04WeaponInstance")

	uint8_t Pad_0x28[0x8]; // 0x28(0x8)
	struct FSoftObjectLoader MeshLoader; // 0x30(0x18)
	struct TArray<struct FVehicleBoss04SoundRuntimeInfo> SoundRuntimeInfos; // 0x48(0x10)
	struct ADFMVehicleSkillBoss04BulletRoot* BulletRoot; // 0x58(0x8)
	float bImpactLightMinTime; // 0x60(0x4)
	uint8_t Pad_0x64[0xAC]; // 0x64(0xAC)
	struct AGPPlayerCameraManager* CachePlayerCameraManager; // 0x110(0x8)
	uint8_t Pad_0x118[0x24D0]; // 0x118(0x24D0)
	struct TArray<struct UDFMVehicleSkillBoss04WeaponBullet*> Bullets; // 0x25E8(0x10)
	struct TArray<float> MobileBulletsCount; // 0x25F8(0x10)
	struct TArray<struct UDFMVehicleSkillBoss04WeaponBullet*> BulletsPool; // 0x2608(0x10)
	struct TArray<struct FWeaponEffectRes> CreatedBulletTracerSPList; // 0x2618(0x10)
	uint8_t Pad_0x2628[0x4]; // 0x2628(0x4)
	struct FLinearColor LineColor; // 0x262C(0x10)
	uint8_t Pad_0x263C[0x4]; // 0x263C(0x4)
};

// Object: Class DFMAbility.DFMWeaponFuncComponentJavelin
// Size: 0x3A0 (Inherited: 0x3A0)
struct UDFMWeaponFuncComponentJavelin : UWeaponFuncComponentStingerMissile
{
	DEFINE_UE_CLASS_HELPERS(UDFMWeaponFuncComponentJavelin, "DFMWeaponFuncComponentJavelin")
};

// Object: Class DFMAbility.DFMWeaponThrowableStunGrenade
// Size: 0x1AE0 (Inherited: 0x1890)
struct ADFMWeaponThrowableStunGrenade : AAbilityWeaponThrowableBullet
{
	DEFINE_UE_CLASS_HELPERS(ADFMWeaponThrowableStunGrenade, "DFMWeaponThrowableStunGrenade")

	struct TArray<struct FStunGrenadeData> StunGrenadeData; // 0x1888(0x10)
	float PullBackToServerTolerance; // 0x1898(0x4)
	float PullBackToServerTolerance2; // 0x189C(0x4)
	uint8_t bFoundTarget : 1; // 0x18A0(0x1), Mask(0x1)
	uint8_t bProjectileDontNeedTrackingByMovement : 1; // 0x18A1(0x1), Mask(0x1)
	struct FVector LockedTargetLocation; // 0x18A4(0xC)
	uint8_t BitPad_0x18B4_2 : 6; // 0x18B4(0x1)
	uint8_t Pad_0x18B5[0xB]; // 0x18B5(0xB)
	struct TArray<struct FScannedCharacterInfo> ScannedCharacters; // 0x18C0(0x10)
	struct FStunGrenadeData CurrentStunGrenadeData; // 0x18D0(0x30)
	float StartTrackingTime; // 0x1900(0x4)
	float TrackingTimeInternal; // 0x1904(0x4)
	float ChangeVelocityDirDuration; // 0x1908(0x4)
	uint8_t Pad_0x190C[0x4]; // 0x190C(0x4)
	EStunGrenadeMovementState LocalMovementState; // 0x1910(0x1)
	uint8_t Pad_0x1911[0x3]; // 0x1911(0x3)
	struct FMovementStateRepData MovementStateRepData; // 0x1914(0x1C)
	uint8_t Pad_0x1930[0x8]; // 0x1930(0x8)
	uint8_t bChangeVelocityDirByTimeLerp : 1; // 0x1938(0x1), Mask(0x1)
	uint8_t BitPad_0x1938_1 : 7; // 0x1938(0x1)
	uint8_t Pad_0x1939[0x3]; // 0x1939(0x3)
	float ChangeVelocityDirSpeed; // 0x193C(0x4)
	struct TSet<int32_t> ClientMarkedCharacterGUIDs; // 0x1940(0x50)
	struct TMap<int32_t, uint8_t> ClientCharacterLockStates; // 0x1990(0x50)
	uint8_t Pad_0x19E0[0x28]; // 0x19E0(0x28)
	struct TArray<struct FName> LineTraceBoneNameArray; // 0x1A08(0x10)
	struct TMap<struct FName, struct TSoftObjectPtr<UAnimSequenceBase>> AnimMap; // 0x1A18(0x50)
	struct FName SmokeEffectID; // 0x1A68(0x8)
	struct TMap<struct FName, struct UAnimSequenceBase*> AnimObjMap; // 0x1A70(0x50)
	uint8_t Pad_0x1AC0[0x8]; // 0x1AC0(0x8)
	struct UFXResourceContainerComponent* SmokeEffectContainer; // 0x1AC8(0x8)
	uint8_t Pad_0x1AD0[0x10]; // 0x1AD0(0x10)

	// Object: Function DFMAbility.DFMWeaponThrowableStunGrenade.PlaySmokeEffect
	// Flags: [Final|Native|Protected]
	// Offset: 0xc43fea4
	// Params: [ Num(1) Size(0x1) ]
	void PlaySmokeEffect(uint8_t bActive);

	// Object: Function DFMAbility.DFMWeaponThrowableStunGrenade.OnRep_ScannedCharacters
	// Flags: [Final|Native|Protected]
	// Offset: 0xc43fe90
	// Params: [ Num(0) Size(0x0) ]
	void OnRep_ScannedCharacters();

	// Object: Function DFMAbility.DFMWeaponThrowableStunGrenade.OnRep_MovementStateRepData
	// Flags: [Final|Native|Protected]
	// Offset: 0xc43fe7c
	// Params: [ Num(0) Size(0x0) ]
	void OnRep_MovementStateRepData();

	// Object: Function DFMAbility.DFMWeaponThrowableStunGrenade.OnAnimLoadFinish
	// Flags: [Final|Native|Protected]
	// Offset: 0xc43fdac
	// Params: [ Num(1) Size(0x10) ]
	void OnAnimLoadFinish(struct TArray<struct FSoftObjectPath> AssetRef);
};

// Object: Class DFMAbility.EMPBuffCueHandler
// Size: 0x130 (Inherited: 0x130)
struct UEMPBuffCueHandler : UGPEffectCueHandler
{
	DEFINE_UE_CLASS_HELPERS(UEMPBuffCueHandler, "EMPBuffCueHandler")
};

// Object: Class DFMAbility.ExtinguishIncendiaryComponent
// Size: 0x130 (Inherited: 0xF8)
struct UExtinguishIncendiaryComponent : UActorComponent
{
	DEFINE_UE_CLASS_HELPERS(UExtinguishIncendiaryComponent, "ExtinguishIncendiaryComponent")

	struct FName CheckRangeTag; // 0xF8(0x8)
	EDiffuseAreaType ExtinguishAreaType; // 0x100(0x1)
	uint8_t Pad_0x101[0x7]; // 0x101(0x7)
	struct UShapeComponent* RangeCheckCache; // 0x108(0x8)
	uint8_t bIsAddExplosionEvent : 1; // 0x110(0x1), Mask(0x1)
	uint8_t BitPad_0x110_1 : 7; // 0x110(0x1)
	uint8_t Pad_0x111[0x7]; // 0x111(0x7)
	struct TArray<struct FBox> CustomBoxes; // 0x118(0x10)
	uint8_t bIsActivate : 1; // 0x128(0x1), Mask(0x1)
	uint8_t BitPad_0x128_1 : 7; // 0x128(0x1)
	uint8_t Pad_0x129[0x7]; // 0x129(0x7)

	// Object: Function DFMAbility.ExtinguishIncendiaryComponent.SetbActivate
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xc443628
	// Params: [ Num(1) Size(0x1) ]
	void SetbActivate(uint8_t bNewActivate);

	// Object: Function DFMAbility.ExtinguishIncendiaryComponent.RemoveCustomBoxes
	// Flags: [Final|Native|Public]
	// Offset: 0xc443614
	// Params: [ Num(0) Size(0x0) ]
	void RemoveCustomBoxes();

	// Object: Function DFMAbility.ExtinguishIncendiaryComponent.OnDoExplosion
	// Flags: [Final|Native|Private]
	// Offset: 0xf91c6b0
	// Params: [ Num(1) Size(0x8) ]
	void OnDoExplosion(struct AGPWeaponBulletThrowableProjectile* Grenade);

	// Object: Function DFMAbility.ExtinguishIncendiaryComponent.GetCustomBoxNum
	// Flags: [Final|Native|Public]
	// Offset: 0xc4435e0
	// Params: [ Num(1) Size(0x4) ]
	int32_t GetCustomBoxNum();

	// Object: Function DFMAbility.ExtinguishIncendiaryComponent.DoOneCustomExtinguish
	// Flags: [Final|Native|Public|HasDefaults|Const]
	// Offset: 0xc443530
	// Params: [ Num(1) Size(0x1C) ]
	void DoOneCustomExtinguish(struct FBox Box);

	// Object: Function DFMAbility.ExtinguishIncendiaryComponent.DoExtinguish
	// Flags: [Final|Native|Public|Const]
	// Offset: 0xc44351c
	// Params: [ Num(0) Size(0x0) ]
	void DoExtinguish();

	// Object: Function DFMAbility.ExtinguishIncendiaryComponent.DoCustomExtinguish
	// Flags: [Final|Native|Public|Const]
	// Offset: 0xc443508
	// Params: [ Num(0) Size(0x0) ]
	void DoCustomExtinguish();

	// Object: Function DFMAbility.ExtinguishIncendiaryComponent.DoCheckCell
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults|Const]
	// Offset: 0xc4433b4
	// Params: [ Num(4) Size(0x2D) ]
	uint8_t DoCheckCell(const struct FVector& CellPos, const struct FQuat& CellQuat, const struct FVector& CellHalfExtent);

	// Object: Function DFMAbility.ExtinguishIncendiaryComponent.DeactiveCustomBox
	// Flags: [Final|Native|Public]
	// Offset: 0xc443310
	// Params: [ Num(1) Size(0x4) ]
	void DeactiveCustomBox(int32_t BoxIndex);

	// Object: Function DFMAbility.ExtinguishIncendiaryComponent.CheckIsActivate
	// Flags: [Final|Native|Public]
	// Offset: 0xc4432f4
	// Params: [ Num(1) Size(0x1) ]
	uint8_t CheckIsActivate();

	// Object: Function DFMAbility.ExtinguishIncendiaryComponent.AddCustomBox
	// Flags: [Final|Native|Public|HasDefaults]
	// Offset: 0xc443244
	// Params: [ Num(1) Size(0x1C) ]
	void AddCustomBox(struct FBox Box);

	// Object: Function DFMAbility.ExtinguishIncendiaryComponent.ActiveCustomBox
	// Flags: [Final|Native|Public]
	// Offset: 0xc4431a0
	// Params: [ Num(1) Size(0x4) ]
	void ActiveCustomBox(int32_t BoxIndex);
};

// Object: Class DFMAbility.FiringBleedingCueHandler
// Size: 0x160 (Inherited: 0x130)
struct UFiringBleedingCueHandler : UGPEffectCueHandler
{
	DEFINE_UE_CLASS_HELPERS(UFiringBleedingCueHandler, "FiringBleedingCueHandler")

	EAnimFirefightingType Type; // 0x130(0x1)
	uint8_t bIsCancelWeaponOperate : 1; // 0x131(0x1), Mask(0x1)
	uint8_t BitPad_0x131_1 : 7; // 0x131(0x1)
	uint8_t bIsCheckCharacterCanFastFire : 1; // 0x132(0x1), Mask(0x1)
	uint8_t BitPad_0x132_1 : 7; // 0x132(0x1)
	uint8_t Pad_0x133[0x1]; // 0x133(0x1)
	struct FName ActionTipsName; // 0x134(0x8)
	uint8_t Pad_0x13C[0x4]; // 0x13C(0x4)
	struct FString ActionTipsLocKey; // 0x140(0x10)
	uint8_t Pad_0x150[0x5]; // 0x150(0x5)
	uint8_t bIsActionTipsShow : 1; // 0x155(0x1), Mask(0x1)
	uint8_t BitPad_0x155_1 : 7; // 0x155(0x1)
	uint8_t Pad_0x156[0x2]; // 0x156(0x2)
	struct FTimerHandle TickTimerHandle; // 0x158(0x8)

	// Object: Function DFMAbility.FiringBleedingCueHandler.TryCancelWeaponOperate
	// Flags: [Final|Native|Protected|Const]
	// Offset: 0xc443aa0
	// Params: [ Num(0) Size(0x0) ]
	void TryCancelWeaponOperate();

	// Object: Function DFMAbility.FiringBleedingCueHandler.StopTickTimer
	// Flags: [Final|Native|Protected]
	// Offset: 0xc443a8c
	// Params: [ Num(0) Size(0x0) ]
	void StopTickTimer();

	// Object: Function DFMAbility.FiringBleedingCueHandler.StartTickTimer
	// Flags: [Final|Native|Protected]
	// Offset: 0xc443a78
	// Params: [ Num(0) Size(0x0) ]
	void StartTickTimer();

	// Object: Function DFMAbility.FiringBleedingCueHandler.SetDFHDActionTipsState
	// Flags: [Final|Native|Protected]
	// Offset: 0xc4439cc
	// Params: [ Num(1) Size(0x1) ]
	void SetDFHDActionTipsState(uint8_t bIsShow);

	// Object: Function DFMAbility.FiringBleedingCueHandler.OnInputTypeChanged
	// Flags: [Final|Native|Protected]
	// Offset: 0xc443928
	// Params: [ Num(1) Size(0x1) ]
	void OnInputTypeChanged(EGPInputType InputType);

	// Object: Function DFMAbility.FiringBleedingCueHandler.IsCanSetActionTipsState
	// Flags: [Final|Native|Protected]
	// Offset: 0xc4438f0
	// Params: [ Num(1) Size(0x1) ]
	uint8_t IsCanSetActionTipsState();

	// Object: Function DFMAbility.FiringBleedingCueHandler.Is1P
	// Flags: [Final|Native|Private|Const]
	// Offset: 0xc4438b8
	// Params: [ Num(1) Size(0x1) ]
	uint8_t Is1P();

	// Object: Function DFMAbility.FiringBleedingCueHandler.ExitTryCloseTips
	// Flags: [Final|Native|Protected]
	// Offset: 0xc4438a4
	// Params: [ Num(0) Size(0x0) ]
	void ExitTryCloseTips();

	// Object: Function DFMAbility.FiringBleedingCueHandler.DoTimerTick
	// Flags: [Final|Native|Protected]
	// Offset: 0xc443890
	// Params: [ Num(0) Size(0x0) ]
	void DoTimerTick();

	// Object: Function DFMAbility.FiringBleedingCueHandler.DoShowZoyaSwarmsTips
	// Flags: [Final|Native|Protected]
	// Offset: 0xc44387c
	// Params: [ Num(0) Size(0x0) ]
	void DoShowZoyaSwarmsTips();

	// Object: Function DFMAbility.FiringBleedingCueHandler.DoShowTips
	// Flags: [Final|Native|Protected]
	// Offset: 0xc443868
	// Params: [ Num(0) Size(0x0) ]
	void DoShowTips();

	// Object: Function DFMAbility.FiringBleedingCueHandler.DoShowInterferenceTips
	// Flags: [Final|Native|Protected]
	// Offset: 0xc443854
	// Params: [ Num(0) Size(0x0) ]
	void DoShowInterferenceTips();

	// Object: Function DFMAbility.FiringBleedingCueHandler.DoShowFirefightingTips
	// Flags: [Final|Native|Protected]
	// Offset: 0xc443840
	// Params: [ Num(0) Size(0x0) ]
	void DoShowFirefightingTips();

	// Object: Function DFMAbility.FiringBleedingCueHandler.DoShowBionicSpyTips
	// Flags: [Final|Native|Protected]
	// Offset: 0xc44382c
	// Params: [ Num(0) Size(0x0) ]
	void DoShowBionicSpyTips();

	// Object: Function DFMAbility.FiringBleedingCueHandler.DoHideZoyaSwarmsTips
	// Flags: [Final|Native|Protected]
	// Offset: 0xc443818
	// Params: [ Num(0) Size(0x0) ]
	void DoHideZoyaSwarmsTips();

	// Object: Function DFMAbility.FiringBleedingCueHandler.DoHideTips
	// Flags: [Final|Native|Protected]
	// Offset: 0xc443804
	// Params: [ Num(0) Size(0x0) ]
	void DoHideTips();

	// Object: Function DFMAbility.FiringBleedingCueHandler.DoHideInterferenceTips
	// Flags: [Final|Native|Protected]
	// Offset: 0xc4437f0
	// Params: [ Num(0) Size(0x0) ]
	void DoHideInterferenceTips();

	// Object: Function DFMAbility.FiringBleedingCueHandler.DoHideFirefightingTips
	// Flags: [Final|Native|Protected]
	// Offset: 0xc4437dc
	// Params: [ Num(0) Size(0x0) ]
	void DoHideFirefightingTips();

	// Object: Function DFMAbility.FiringBleedingCueHandler.DoHideBionicSpyTips
	// Flags: [Final|Native|Protected]
	// Offset: 0xc4437c8
	// Params: [ Num(0) Size(0x0) ]
	void DoHideBionicSpyTips();
};

// Object: Class DFMAbility.FootprintTrackerActor
// Size: 0x4F0 (Inherited: 0x370)
struct AFootprintTrackerActor : AFootprintTrackerBaseActor
{
	DEFINE_UE_CLASS_HELPERS(AFootprintTrackerActor, "FootprintTrackerActor")

	struct FName NeedTickCheckTag; // 0x370(0x8)
	struct TArray<struct UObject*> NeedTickCheckClass; // 0x378(0x10)
	uint8_t OBHideFootprint : 1; // 0x388(0x1), Mask(0x1)
	uint8_t BitPad_0x388_1 : 7; // 0x388(0x1)
	uint8_t Pad_0x389[0x3]; // 0x389(0x3)
	float FootprintFadeInTime; // 0x38C(0x4)
	float FootprintCheckNextDelay; // 0x390(0x4)
	int32_t ISMInstanceDataTickCheckNum; // 0x394(0x4)
	ECollisionChannel FootprintZTraceChannel; // 0x398(0x1)
	uint8_t Pad_0x399[0x3]; // 0x399(0x3)
	float FootprintZCheckStartOffset; // 0x39C(0x4)
	float FootprintZCheckEndOffset; // 0x3A0(0x4)
	float FootprintZCheckMaxValidOffset; // 0x3A4(0x4)
	float FootprintZOffset; // 0x3A8(0x4)
	float FootprintOffset; // 0x3AC(0x4)
	struct FVector FootprintSize; // 0x3B0(0xC)
	uint8_t bIsUseCustomData : 1; // 0x3BC(0x1), Mask(0x1)
	uint8_t BitPad_0x3BC_1 : 7; // 0x3BC(0x1)
	uint8_t Pad_0x3BD[0x3]; // 0x3BD(0x3)
	float CustomValue; // 0x3C0(0x4)
	uint8_t Pad_0x3C4[0x4]; // 0x3C4(0x4)
	struct UStaticMesh* BaseMesh; // 0x3C8(0x8)
	struct UMaterialInterface* BaseMaterial; // 0x3D0(0x8)
	struct UMaterialInterface* SearchedMaterial; // 0x3D8(0x8)
	struct UInstancedStaticMeshComponent* ISMComponent; // 0x3E0(0x8)
	struct TArray<struct UInstancedStaticMeshComponent*> RecycledISMComponents; // 0x3E8(0x10)
	struct TMap<uint32_t, struct FFootprintTrackerPlayerData> AllPlayerDataMap; // 0x3F8(0x50)
	uint32_t CurrTickInsPlayerUid; // 0x448(0x4)
	uint32_t CurrTickInsPlayerFootprintNum; // 0x44C(0x4)
	uint8_t bIsInitTraceParm : 1; // 0x450(0x1), Mask(0x1)
	uint8_t BitPad_0x450_1 : 7; // 0x450(0x1)
	uint8_t Pad_0x451[0x97]; // 0x451(0x97)
	int32_t MainFootprintNum; // 0x4E8(0x4)
	uint8_t bIsNeedShowFootprint : 1; // 0x4EC(0x1), Mask(0x1)
	uint8_t BitPad_0x4EC_1 : 7; // 0x4EC(0x1)
	uint8_t Pad_0x4ED[0x3]; // 0x4ED(0x3)

	// Object: Function DFMAbility.FootprintTrackerActor.TryFindNexTickGroup
	// Flags: [Final|Native|Private|HasOutParms]
	// Offset: 0xc444684
	// Params: [ Num(1) Size(0x88) ]
	void TryFindNexTickGroup(struct FFootprintTrackerPlayerData& TargetData);

	// Object: Function DFMAbility.FootprintTrackerActor.TickShowState
	// Flags: [Final|Native|Private]
	// Offset: 0xc444670
	// Params: [ Num(0) Size(0x0) ]
	void TickShowState();

	// Object: Function DFMAbility.FootprintTrackerActor.TickPlayerData
	// Flags: [Final|Native|Private|HasOutParms]
	// Offset: 0xc44451c
	// Params: [ Num(2) Size(0x8C) ]
	void TickPlayerData(struct FFootprintTrackerPlayerData& TargetData, float DeltaTime);

	// Object: Function DFMAbility.FootprintTrackerActor.TickNextTickISMInstanceData
	// Flags: [Final|Native|Private]
	// Offset: 0xc444508
	// Params: [ Num(0) Size(0x0) ]
	void TickNextTickISMInstanceData();

	// Object: Function DFMAbility.FootprintTrackerActor.TickISMInstanceData
	// Flags: [Final|Native|Private]
	// Offset: 0xc4444f4
	// Params: [ Num(0) Size(0x0) ]
	void TickISMInstanceData();

	// Object: Function DFMAbility.FootprintTrackerActor.RemovePlayerData
	// Flags: [Final|Native|Private]
	// Offset: 0xc444450
	// Params: [ Num(1) Size(0x4) ]
	void RemovePlayerData(uint32_t TargetUID);

	// Object: Function DFMAbility.FootprintTrackerActor.RefreshISMShowState
	// Flags: [Final|Native|Private]
	// Offset: 0xc44443c
	// Params: [ Num(0) Size(0x0) ]
	void RefreshISMShowState();

	// Object: Function DFMAbility.FootprintTrackerActor.RefreshAllISMInstance
	// Flags: [Final|Native|Private|HasOutParms]
	// Offset: 0xc4442e0
	// Params: [ Num(2) Size(0x89) ]
	void RefreshAllISMInstance(struct FFootprintTrackerPlayerData& TargetData, uint8_t bIsMainOnly);

	// Object: Function DFMAbility.FootprintTrackerActor.RecycleISMComponent
	// Flags: [Final|Native|Private]
	// Offset: 0xc44423c
	// Params: [ Num(1) Size(0x8) ]
	void RecycleISMComponent(struct UInstancedStaticMeshComponent* TargetISM);

	// Object: Function DFMAbility.FootprintTrackerActor.IsNeedTickCheck
	// Flags: [Final|Native|Private]
	// Offset: 0xc444204
	// Params: [ Num(1) Size(0x1) ]
	uint8_t IsNeedTickCheck();

	// Object: Function DFMAbility.FootprintTrackerActor.InitTraceParms
	// Flags: [Final|Native|Private]
	// Offset: 0xc4441f0
	// Params: [ Num(0) Size(0x0) ]
	void InitTraceParms();

	// Object: Function DFMAbility.FootprintTrackerActor.InitISMComponent
	// Flags: [Final|Native|Private]
	// Offset: 0xc4441dc
	// Params: [ Num(0) Size(0x0) ]
	void InitISMComponent();

	// Object: Function DFMAbility.FootprintTrackerActor.GetOrCreateISMComponent
	// Flags: [Final|Native|Private]
	// Offset: 0xc444128
	// Params: [ Num(2) Size(0x10) ]
	struct UInstancedStaticMeshComponent* GetOrCreateISMComponent(uint8_t bIsSearched);

	// Object: Function DFMAbility.FootprintTrackerActor.GetOrAddPlayerData
	// Flags: [Final|Native|Private]
	// Offset: 0xc443fcc
	// Params: [ Num(2) Size(0x90) ]
	struct FFootprintTrackerPlayerData GetOrAddPlayerData(uint32_t TargetUID);

	// Object: Function DFMAbility.FootprintTrackerActor.DoTickISMInstanceData
	// Flags: [Final|Native|Private|HasOutParms]
	// Offset: 0xc443de4
	// Params: [ Num(4) Size(0xA4) ]
	void DoTickISMInstanceData(struct FFootprintTrackerPlayerData& PlayerData, struct UInstancedStaticMeshComponent* TargetISM, struct TArray<struct FFootprintIsmData>& TargetDataArray, int32_t InstanceIndex);

	// Object: Function DFMAbility.FootprintTrackerActor.CalcPrintShowData
	// Flags: [Final|Native|Private|HasOutParms]
	// Offset: 0xc443c58
	// Params: [ Num(3) Size(0x90) ]
	void CalcPrintShowData(struct FFootprintTrackerPlayerData& TargetData, uint32_t GroupID, int32_t FootprintIndex);

	// Object: Function DFMAbility.FootprintTrackerActor.AutoFitGround
	// Flags: [Final|Native|Private|HasOutParms|HasDefaults]
	// Offset: 0xc443b4c
	// Params: [ Num(3) Size(0x19) ]
	uint8_t AutoFitGround(struct FVector& FootprintLocation, struct FRotator& FootprintRotator);
};

// Object: Class DFMAbility.FootprintTrackerCueHandler
// Size: 0x130 (Inherited: 0x130)
struct UFootprintTrackerCueHandler : UGPEffectCueHandler
{
	DEFINE_UE_CLASS_HELPERS(UFootprintTrackerCueHandler, "FootprintTrackerCueHandler")
};

// Object: Class DFMAbility.FreezeZoneManagerComponent
// Size: 0x1F0 (Inherited: 0xF8)
struct UFreezeZoneManagerComponent : UGPFreezeZoneManagerComponent
{
	DEFINE_UE_CLASS_HELPERS(UFreezeZoneManagerComponent, "FreezeZoneManagerComponent")

	uint8_t Pad_0xF8[0x90]; // 0xF8(0x90)
	float ProxyFreezeCooldown; // 0x188(0x4)
	uint8_t Pad_0x18C[0x54]; // 0x18C(0x54)
	struct TArray<struct ADFMAbilityDoorDisabler*> DoorDisablerStrongRefs; // 0x1E0(0x10)
};

// Object: Class DFMAbility.GameplayTagComponent
// Size: 0x1A8 (Inherited: 0xF8)
struct UGameplayTagComponent : UActorComponent
{
	DEFINE_UE_CLASS_HELPERS(UGameplayTagComponent, "GameplayTagComponent")

	struct FGameplayTagContainer InitialGameplayTags; // 0xF8(0x20)
	struct FMulticastInlineDelegate OnGameplayTagAdded; // 0x118(0x10)
	struct FMulticastInlineDelegate OnGameplayTagRemoved; // 0x128(0x10)
	struct FGameplayTagContainer OwnedGameplayTags; // 0x138(0x20)
	struct TMap<struct FGameplayTag, int32_t> TagCountMap; // 0x158(0x50)

	// Object: Function DFMAbility.GameplayTagComponent.SetTagCount
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xc444fa0
	// Params: [ Num(3) Size(0x10) ]
	int32_t SetTagCount(struct FGameplayTag TagToSet, int32_t Count);

	// Object: Function DFMAbility.GameplayTagComponent.RemoveGameplayTags
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0xc444ed8
	// Params: [ Num(1) Size(0x20) ]
	void RemoveGameplayTags(const struct FGameplayTagContainer& TagsToRemove);

	// Object: Function DFMAbility.GameplayTagComponent.RemoveGameplayTag
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xc444e2c
	// Params: [ Num(2) Size(0xC) ]
	int32_t RemoveGameplayTag(struct FGameplayTag TagToRemove);

	// Object: Function DFMAbility.GameplayTagComponent.HasMatchingGameplayTag
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xc444d7c
	// Params: [ Num(2) Size(0x9) ]
	uint8_t HasMatchingGameplayTag(struct FGameplayTag TagToCheck);

	// Object: Function DFMAbility.GameplayTagComponent.HasAnyMatchingGameplayTags
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xc444ca0
	// Params: [ Num(2) Size(0x21) ]
	uint8_t HasAnyMatchingGameplayTags(const struct FGameplayTagContainer& TagContainer);

	// Object: Function DFMAbility.GameplayTagComponent.HasAllMatchingGameplayTags
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xc444bc4
	// Params: [ Num(2) Size(0x21) ]
	uint8_t HasAllMatchingGameplayTags(const struct FGameplayTagContainer& TagContainer);

	// Object: Function DFMAbility.GameplayTagComponent.GetTagCount
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xc444b18
	// Params: [ Num(2) Size(0xC) ]
	int32_t GetTagCount(struct FGameplayTag TagToCheck);

	// Object: Function DFMAbility.GameplayTagComponent.GetOwnedGameplayTags
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xc444a50
	// Params: [ Num(1) Size(0x20) ]
	void GetOwnedGameplayTags(struct FGameplayTagContainer& OutTagContainer);

	// Object: Function DFMAbility.GameplayTagComponent.ClearAllTags
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xc444a3c
	// Params: [ Num(0) Size(0x0) ]
	void ClearAllTags();

	// Object: Function DFMAbility.GameplayTagComponent.AddGameplayTags
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0xc444974
	// Params: [ Num(1) Size(0x20) ]
	void AddGameplayTags(const struct FGameplayTagContainer& TagsToAdd);

	// Object: Function DFMAbility.GameplayTagComponent.AddGameplayTag
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xc4448c8
	// Params: [ Num(2) Size(0xC) ]
	int32_t AddGameplayTag(struct FGameplayTag TagToAdd);
};

// Object: Class DFMAbility.GamePlayTagUtils
// Size: 0x28 (Inherited: 0x28)
struct UGamePlayTagUtils : UBlueprintFunctionLibrary
{
	DEFINE_UE_CLASS_HELPERS(UGamePlayTagUtils, "GamePlayTagUtils")

	// Object: Function DFMAbility.GamePlayTagUtils.UnbindOnGameplayTagRemoved
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0xc446580
	// Params: [ Num(3) Size(0x19) ]
	static uint8_t UnbindOnGameplayTagRemoved(struct AActor* Actor, const struct FDelegate& OnTagRemovedDelegate);

	// Object: Function DFMAbility.GamePlayTagUtils.UnbindOnGameplayTagAdded
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0xc44646c
	// Params: [ Num(3) Size(0x19) ]
	static uint8_t UnbindOnGameplayTagAdded(struct AActor* Actor, const struct FDelegate& OnTagAddedDelegate);

	// Object: Function DFMAbility.GamePlayTagUtils.UnbindAllGameplayTagEvents
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0xc4463c4
	// Params: [ Num(2) Size(0x9) ]
	static uint8_t UnbindAllGameplayTagEvents(struct AActor* Actor);

	// Object: Function DFMAbility.GamePlayTagUtils.SetActorTagCount
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0xc4462ac
	// Params: [ Num(4) Size(0x18) ]
	static int32_t SetActorTagCount(struct AActor* Actor, struct FGameplayTag TagToSet, int32_t Count);

	// Object: Function DFMAbility.GamePlayTagUtils.RemoveGameplayTagsFromActor
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0xc4461a4
	// Params: [ Num(3) Size(0x29) ]
	static uint8_t RemoveGameplayTagsFromActor(struct AActor* Actor, const struct FGameplayTagContainer& TagsToRemove);

	// Object: Function DFMAbility.GamePlayTagUtils.RemoveGameplayTagFromActor
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0xc4460c8
	// Params: [ Num(3) Size(0x14) ]
	static int32_t RemoveGameplayTagFromActor(struct AActor* Actor, struct FGameplayTag TagToRemove);

	// Object: Function DFMAbility.GamePlayTagUtils.GetOrCreateGameplayTagComponent
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0xc446024
	// Params: [ Num(2) Size(0x10) ]
	static struct UGameplayTagComponent* GetOrCreateGameplayTagComponent(struct AActor* Actor);

	// Object: Function DFMAbility.GamePlayTagUtils.GetGameplayTagComponent
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0xc445f80
	// Params: [ Num(2) Size(0x10) ]
	static struct UGameplayTagComponent* GetGameplayTagComponent(struct AActor* Actor);

	// Object: Function DFMAbility.GamePlayTagUtils.GetActorTagCount
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0xc445ea4
	// Params: [ Num(3) Size(0x14) ]
	static int32_t GetActorTagCount(struct AActor* Actor, struct FGameplayTag TagToCheck);

	// Object: Function DFMAbility.GamePlayTagUtils.GetActorGameplayTags
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0xc445d9c
	// Params: [ Num(3) Size(0x29) ]
	static uint8_t GetActorGameplayTags(struct AActor* Actor, struct FGameplayTagContainer& OutTagContainer);

	// Object: Function DFMAbility.GamePlayTagUtils.FindAllActorsWithTag
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0xc445c34
	// Params: [ Num(4) Size(0x28) ]
	static void FindAllActorsWithTag(struct UObject* WorldContextObject, struct FGameplayTag TagToFind, struct TArray<struct AActor*>& OutActors, struct AActor* ActorClass);

	// Object: Function DFMAbility.GamePlayTagUtils.FindAllActorsWithAnyTags
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0xc445aa0
	// Params: [ Num(4) Size(0x40) ]
	static void FindAllActorsWithAnyTags(struct UObject* WorldContextObject, const struct FGameplayTagContainer& AnyTags, struct TArray<struct AActor*>& OutActors, struct AActor* ActorClass);

	// Object: Function DFMAbility.GamePlayTagUtils.FindAllActorsWithAllTags
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0xc44590c
	// Params: [ Num(4) Size(0x40) ]
	static void FindAllActorsWithAllTags(struct UObject* WorldContextObject, const struct FGameplayTagContainer& RequiredTags, struct TArray<struct AActor*>& OutActors, struct AActor* ActorClass);

	// Object: Function DFMAbility.GamePlayTagUtils.ClearAllActorGameplayTags
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0xc445864
	// Params: [ Num(2) Size(0x9) ]
	static uint8_t ClearAllActorGameplayTags(struct AActor* Actor);

	// Object: Function DFMAbility.GamePlayTagUtils.BindOnGameplayTagRemoved
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0xc445750
	// Params: [ Num(3) Size(0x19) ]
	static uint8_t BindOnGameplayTagRemoved(struct AActor* Actor, const struct FDelegate& OnTagRemovedDelegate);

	// Object: Function DFMAbility.GamePlayTagUtils.BindOnGameplayTagAdded
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0xc44563c
	// Params: [ Num(3) Size(0x19) ]
	static uint8_t BindOnGameplayTagAdded(struct AActor* Actor, const struct FDelegate& OnTagAddedDelegate);

	// Object: Function DFMAbility.GamePlayTagUtils.AddGameplayTagToActor
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0xc445560
	// Params: [ Num(3) Size(0x14) ]
	static int32_t AddGameplayTagToActor(struct AActor* Actor, struct FGameplayTag TagToAdd);

	// Object: Function DFMAbility.GamePlayTagUtils.AddGameplayTagsToActor
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0xc445458
	// Params: [ Num(3) Size(0x29) ]
	static uint8_t AddGameplayTagsToActor(struct AActor* Actor, const struct FGameplayTagContainer& TagsToAdd);

	// Object: Function DFMAbility.GamePlayTagUtils.ActorHasGameplayTag
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0xc445378
	// Params: [ Num(3) Size(0x11) ]
	static uint8_t ActorHasGameplayTag(struct AActor* Actor, struct FGameplayTag TagToCheck);

	// Object: Function DFMAbility.GamePlayTagUtils.ActorHasAnyGameplayTags
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0xc445270
	// Params: [ Num(3) Size(0x29) ]
	static uint8_t ActorHasAnyGameplayTags(struct AActor* Actor, const struct FGameplayTagContainer& TagContainer);

	// Object: Function DFMAbility.GamePlayTagUtils.ActorHasAllGameplayTags
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0xc445168
	// Params: [ Num(3) Size(0x29) ]
	static uint8_t ActorHasAllGameplayTags(struct AActor* Actor, const struct FGameplayTagContainer& TagContainer);
};

// Object: Class DFMAbility.GPEffectAbilityC204MakeNoise
// Size: 0x148 (Inherited: 0x130)
struct UGPEffectAbilityC204MakeNoise : UGPEffectCueHandler
{
	DEFINE_UE_CLASS_HELPERS(UGPEffectAbilityC204MakeNoise, "GPEffectAbilityC204MakeNoise")

	struct UGPAudioEventAsset* AudioEvent; // 0x130(0x8)
	float AttenuationCoeff; // 0x138(0x4)
	struct FGPAudioFuturePlayingID PlayingId; // 0x13C(0x8)
	uint8_t Pad_0x144[0x4]; // 0x144(0x4)
};

// Object: Class DFMAbility.GPEffectAbilityC204PassiveMP
// Size: 0x148 (Inherited: 0x130)
struct UGPEffectAbilityC204PassiveMP : UGPEffectCueHandler
{
	DEFINE_UE_CLASS_HELPERS(UGPEffectAbilityC204PassiveMP, "GPEffectAbilityC204PassiveMP")

	float DetectRange; // 0x130(0x4)
	uint8_t Pad_0x134[0x4]; // 0x134(0x4)
	struct UGPAudioEventAsset* AudioEvent; // 0x138(0x8)
	struct FGPAudioFuturePlayingID PlayingId; // 0x140(0x8)
};

// Object: Class DFMAbility.GPEffectAbilityC204PassiveSOL
// Size: 0x150 (Inherited: 0x130)
struct UGPEffectAbilityC204PassiveSOL : UGPEffectCueHandler
{
	DEFINE_UE_CLASS_HELPERS(UGPEffectAbilityC204PassiveSOL, "GPEffectAbilityC204PassiveSOL")

	struct TArray<struct FListenRangePoint> ListenRangePoints; // 0x130(0x10)
	struct AGPCharacterBase* OwnerCharacter; // 0x140(0x8)
	float CachedListenRange; // 0x148(0x4)
	float CachedListenCoeff; // 0x14C(0x4)
};

// Object: Class DFMAbility.GPWeaponFireModeParamsAbilityDirectLauncher
// Size: 0x228 (Inherited: 0x200)
struct UGPWeaponFireModeParamsAbilityDirectLauncher : UGPWeaponFireModeParamsAbilityLauncher
{
	DEFINE_UE_CLASS_HELPERS(UGPWeaponFireModeParamsAbilityDirectLauncher, "GPWeaponFireModeParamsAbilityDirectLauncher")

	struct AAbilityWeaponThrowableBullet* LauncherBulletClass; // 0x200(0x8)
	struct FName SocketName; // 0x208(0x8)
	float IntersectionPointLength; // 0x210(0x4)
	struct FVector TargetOffset; // 0x214(0xC)
	float OwnerVelocityFactor; // 0x220(0x4)
	uint8_t Pad_0x224[0x4]; // 0x224(0x4)
};

// Object: Class DFMAbility.GPWeaponAbilityFireModeDirectLauncher
// Size: 0x480 (Inherited: 0x478)
struct UGPWeaponAbilityFireModeDirectLauncher : UGPWeaponAbilityFireModeLauncher
{
	DEFINE_UE_CLASS_HELPERS(UGPWeaponAbilityFireModeDirectLauncher, "GPWeaponAbilityFireModeDirectLauncher")

	struct UGPWeaponFireModeParamsAbilityDirectLauncher* DirectLauncherParams; // 0x478(0x8)

	// Object: Function DFMAbility.GPWeaponAbilityFireModeDirectLauncher.SpawnGrenade
	// Flags: [Final|Native|Private|HasOutParms|HasDefaults]
	// Offset: 0xc448660
	// Params: [ Num(4) Size(0x30) ]
	void SpawnGrenade(const struct FVector& StartLocation, const struct FVector& FireRotation, const struct FVector& AffectInitVelocity, const uint64_t& BulletGuid);

	// Object: Function DFMAbility.GPWeaponAbilityFireModeDirectLauncher.CheckIsClientOnlyThrowConfig
	// Flags: [Final|Native|Private|Const]
	// Offset: 0xc448628
	// Params: [ Num(1) Size(0x1) ]
	uint8_t CheckIsClientOnlyThrowConfig();
};

// Object: Class DFMAbility.LeftWeaponFireModeGrenadeLauncher
// Size: 0xF8 (Inherited: 0xE8)
struct ULeftWeaponFireModeGrenadeLauncher : ULeftWeaponFireMode
{
	DEFINE_UE_CLASS_HELPERS(ULeftWeaponFireModeGrenadeLauncher, "LeftWeaponFireModeGrenadeLauncher")

	struct ULeftWeaponFireModeGrenadeLauncherParams* GrenadeLauncherParams; // 0xE8(0x8)
	struct TWeakObjectPtr<struct AActor> LastSpawnProjectile; // 0xF0(0x8)

	// Object: Function DFMAbility.LeftWeaponFireModeGrenadeLauncher.ValidateFireInfo
	// Flags: [Final|Native|Protected|HasOutParms]
	// Offset: 0xc448e7c
	// Params: [ Num(2) Size(0xB1) ]
	uint8_t ValidateFireInfo(const struct FWeaponFireRepInfo& InFireRepInfo);

	// Object: Function DFMAbility.LeftWeaponFireModeGrenadeLauncher.SpawnThrowableProjectile
	// Flags: [Final|Native|Protected|HasOutParms|HasDefaults]
	// Offset: 0xc448cd8
	// Params: [ Num(5) Size(0x38) ]
	struct AGPWeaponBulletThrowableProjectile* SpawnThrowableProjectile(const struct FVector& StartLocation, const struct FVector& StartForward, const struct FVector& AffectInitVelocity, const uint64_t& BulletGuid);

	// Object: Function DFMAbility.LeftWeaponFireModeGrenadeLauncher.GetFireTraceLocation
	// Flags: [Native|Protected|HasOutParms|HasDefaults]
	// Offset: 0xc448bd8
	// Params: [ Num(2) Size(0x18) ]
	void GetFireTraceLocation(struct FVector& OutStartLocation, struct FRotator& OutFireRotation);

	// Object: Function DFMAbility.LeftWeaponFireModeGrenadeLauncher.DoFire
	// Flags: [Native|Protected]
	// Offset: 0xc448bbc
	// Params: [ Num(0) Size(0x0) ]
	void DoFire();

	// Object: Function DFMAbility.LeftWeaponFireModeGrenadeLauncher.DoFailedSwitchWeapon
	// Flags: [Final|Native|Protected]
	// Offset: 0xc448ba8
	// Params: [ Num(0) Size(0x0) ]
	void DoFailedSwitchWeapon();

	// Object: Function DFMAbility.LeftWeaponFireModeGrenadeLauncher.CheckIsClientOnlyThrowConfig
	// Flags: [Final|Native|Protected|Const]
	// Offset: 0xc448b70
	// Params: [ Num(1) Size(0x1) ]
	uint8_t CheckIsClientOnlyThrowConfig();
};

// Object: Class DFMAbility.GPWeaponFireModeChainHook
// Size: 0xF8 (Inherited: 0xF8)
struct UGPWeaponFireModeChainHook : ULeftWeaponFireModeGrenadeLauncher
{
	DEFINE_UE_CLASS_HELPERS(UGPWeaponFireModeChainHook, "GPWeaponFireModeChainHook")

	// Object: Function DFMAbility.GPWeaponFireModeChainHook.ClearPreviewData
	// Flags: [Final|Native|Protected]
	// Offset: 0xc448808
	// Params: [ Num(0) Size(0x0) ]
	void ClearPreviewData();
};

// Object: Class DFMAbility.HeavyAttackThrowableWeapon
// Size: 0x1440 (Inherited: 0x1440)
struct AHeavyAttackThrowableWeapon : ADFMWeapon
{
	DEFINE_UE_CLASS_HELPERS(AHeavyAttackThrowableWeapon, "HeavyAttackThrowableWeapon")

	struct FName HeavyAttackButtonName; // 0x1434(0x8)
};

// Object: Class DFMAbility.CallAIInfoPanelViewInterface
// Size: 0x28 (Inherited: 0x28)
struct ICallAIInfoPanelViewInterface : IInterface
{
	DEFINE_UE_CLASS_HELPERS(ICallAIInfoPanelViewInterface, "CallAIInfoPanelViewInterface")
};

// Object: Class DFMAbility.CallAIInfoPanelControllerInterface
// Size: 0x28 (Inherited: 0x28)
struct ICallAIInfoPanelControllerInterface : IInterface
{
	DEFINE_UE_CLASS_HELPERS(ICallAIInfoPanelControllerInterface, "CallAIInfoPanelControllerInterface")
};

// Object: Class DFMAbility.SkillDeploymentBase
// Size: 0xAB0 (Inherited: 0x9E8)
struct ASkillDeploymentBase : ADFMAbilityBuffDetector
{
	DEFINE_UE_CLASS_HELPERS(ASkillDeploymentBase, "SkillDeploymentBase")

	uint8_t Pad_0x9E8[0x20]; // 0x9E8(0x20)
	EAbilityDetectorTriggerType CurrTriggerState; // 0xA08(0x1)
	uint8_t Pad_0xA09[0x1C]; // 0xA09(0x1C)
	uint8_t bMaxDistanceToDestroyed : 1; // 0xA25(0x1), Mask(0x1)
	uint8_t BitPad_0xA25_1 : 7; // 0xA25(0x1)
	uint8_t Pad_0xA26[0x7]; // 0xA26(0x7)
	uint8_t bNeedAutoAttachToSurface : 1; // 0xA2D(0x1), Mask(0x1)
	uint8_t BitPad_0xA2D_1 : 7; // 0xA2D(0x1)
	uint8_t Pad_0xA2E[0x2]; // 0xA2E(0x2)
	float AttachToSurfaceDis; // 0xA30(0x4)
	struct FName MapIconColor_Self; // 0xA34(0x8)
	struct FName MapIconColor_TeamMate; // 0xA3C(0x8)
	struct FName MapIconColor_CampMate; // 0xA44(0x8)
	EDFMMapIconType MapIconType; // 0xA4C(0x1)
	uint8_t Pad_0xA4D[0x3]; // 0xA4D(0x3)
	float TraceOffset; // 0xA50(0x4)
	uint8_t bCheckImpendingDeathTargetSOL : 1; // 0xA54(0x1), Mask(0x1)
	uint8_t BitPad_0xA54_1 : 7; // 0xA54(0x1)
	uint8_t Pad_0xA55[0x3]; // 0xA55(0x3)
	struct FName EMPEffect; // 0xA58(0x8)
	uint8_t bAffectByEmp : 1; // 0xA60(0x1), Mask(0x1)
	uint8_t BitPad_0xA60_1 : 7; // 0xA60(0x1)
	uint8_t bEnableDeployInWater : 1; // 0xA61(0x1), Mask(0x1)
	uint8_t BitPad_0xA61_1 : 7; // 0xA61(0x1)
	uint8_t bEnableMobileUICheck : 1; // 0xA62(0x1), Mask(0x1)
	uint8_t BitPad_0xA62_1 : 7; // 0xA62(0x1)
	uint8_t bCanPickup : 1; // 0xA63(0x1), Mask(0x1)
	uint8_t BitPad_0xA63_1 : 7; // 0xA63(0x1)
	float PickUpDistance; // 0xA64(0x4)
	uint8_t bNeedPickUpTrace : 1; // 0xA68(0x1), Mask(0x1)
	uint8_t BitPad_0xA68_1 : 7; // 0xA68(0x1)
	uint8_t Pad_0xA69[0x7]; // 0xA69(0x7)
	struct FText RecycleText; // 0xA70(0x18)
	float PickUpDirectionDegree; // 0xA88(0x4)
	uint8_t bCanActivate : 1; // 0xA8C(0x1), Mask(0x1)
	uint8_t BitPad_0xA8C_1 : 7; // 0xA8C(0x1)
	uint8_t Pad_0xA8D[0x3]; // 0xA8D(0x3)
	float ActivateDistance; // 0xA90(0x4)
	float ActiveDirectionDegree; // 0xA94(0x4)
	float ValidateExtraDistance; // 0xA98(0x4)
	float MaxDistanceToDestroy; // 0xA9C(0x4)
	float DestroyDistanceCheckDelayTime; // 0xAA0(0x4)
	float DestroyDistanceCheckUIOffsetTime; // 0xAA4(0x4)
	ESkillRecycleType RecycleType; // 0xAA8(0x1)
	ETacticalEquipmentMarkerType TacticalEquipmentMarker; // 0xAA9(0x1)
	uint8_t Pad_0xAAA[0x2]; // 0xAAA(0x2)
	int32_t ThreatId; // 0xAAC(0x4)

	// Object: Function DFMAbility.SkillDeploymentBase.TryAutoAttachToSurface
	// Flags: [Final|Native|Protected]
	// Offset: 0xc45e894
	// Params: [ Num(0) Size(0x0) ]
	void TryAutoAttachToSurface();

	// Object: Function DFMAbility.SkillDeploymentBase.OnServerMatchEnd
	// Flags: [Native|Public]
	// Offset: 0xc45e7ac
	// Params: [ Num(2) Size(0x10) ]
	void OnServerMatchEnd(EMatchOverReason EndReason, int64_t Uin);

	// Object: Function DFMAbility.SkillDeploymentBase.OnRep_TriggerState
	// Flags: [Final|Native|Protected]
	// Offset: 0xfaeecf4
	// Params: [ Num(0) Size(0x0) ]
	void OnRep_TriggerState();

	// Object: Function DFMAbility.SkillDeploymentBase.OnCharacterDead
	// Flags: [Native|Public]
	// Offset: 0xc45e68c
	// Params: [ Num(3) Size(0x18) ]
	void OnCharacterDead(struct AGPCharacterBase* CHARACTER, struct AController* Killer, struct UDamageType* DamageType);

	// Object: Function DFMAbility.SkillDeploymentBase.OnCharacterBeKnockedDown
	// Flags: [Final|Native|Public|HasOutParms]
	// Offset: 0xc45e5c8
	// Params: [ Num(1) Size(0x1A8) ]
	void OnCharacterBeKnockedDown(struct FKillInfo& KillInfo);

	// Object: Function DFMAbility.SkillDeploymentBase.OnCharacterArmedForceChanged
	// Flags: [Native|Public]
	// Offset: 0xc45e5ac
	// Params: [ Num(0) Size(0x0) ]
	void OnCharacterArmedForceChanged();

	// Object: Function DFMAbility.SkillDeploymentBase.EMPRecover
	// Flags: [Net|NetReliableNative|Event|NetMulticast|Protected]
	// Offset: 0xc45e590
	// Params: [ Num(0) Size(0x0) ]
	void EMPRecover();

	// Object: Function DFMAbility.SkillDeploymentBase.EMPDisable
	// Flags: [Net|NetReliableNative|Event|NetMulticast|Protected]
	// Offset: 0xc45e4e4
	// Params: [ Num(1) Size(0x4) ]
	void EMPDisable(float EMPAffectTime);

	// Object: Function DFMAbility.SkillDeploymentBase.DelayExit
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0xc45e4c8
	// Params: [ Num(0) Size(0x0) ]
	void DelayExit();

	// Object: Function DFMAbility.SkillDeploymentBase.CheckAttachedParent
	// Flags: [Final|Native|Protected]
	// Offset: 0xc45e4b4
	// Params: [ Num(0) Size(0x0) ]
	void CheckAttachedParent();

	// Object: Function DFMAbility.SkillDeploymentBase.BP_SpawnByHeavyAttack
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0xc45e498
	// Params: [ Num(0) Size(0x0) ]
	void BP_SpawnByHeavyAttack();

	// Object: Function DFMAbility.SkillDeploymentBase.BP_ClientEmpAffect
	// Flags: [Event|Protected|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(1) Size(0x1) ]
	void BP_ClientEmpAffect(uint8_t bAffected);
};

// Object: Class DFMAbility.IntelligentSmoke
// Size: 0xAD0 (Inherited: 0xAB0)
struct AIntelligentSmoke : ASkillDeploymentBase
{
	DEFINE_UE_CLASS_HELPERS(AIntelligentSmoke, "IntelligentSmoke")

	struct ADFMSkillSmokeActor* SmokeActor; // 0xAB0(0x8)
	uint8_t Pad_0xAB8[0x8]; // 0xAB8(0x8)
	struct ADFMSkillSmokeActor* SmokeActorClass; // 0xAC0(0x8)
	int32_t SmokeId; // 0xAC8(0x4)
	float ActivateToDestroyTime; // 0xACC(0x4)

	// Object: Function DFMAbility.IntelligentSmoke.MulticastActivated
	// Flags: [Net|NetReliableNative|Event|NetMulticast|Protected]
	// Offset: 0xc448848
	// Params: [ Num(0) Size(0x0) ]
	void MulticastActivated();

	// Object: Function DFMAbility.IntelligentSmoke.BP_ClientActivated
	// Flags: [Event|Protected|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(0) Size(0x0) ]
	void BP_ClientActivated();
};

// Object: Class DFMAbility.LeftWeaponFireModeGrenadeLauncherParams
// Size: 0x198 (Inherited: 0x178)
struct ULeftWeaponFireModeGrenadeLauncherParams : UGPWeaponFireModeParamsBase
{
	DEFINE_UE_CLASS_HELPERS(ULeftWeaponFireModeGrenadeLauncherParams, "LeftWeaponFireModeGrenadeLauncherParams")

	struct AAbilityWeaponThrowableBullet* LauncherBulletClass; // 0x178(0x8)
	struct FName SocketName; // 0x180(0x8)
	float OwnerVelocityFactor; // 0x188(0x4)
	uint8_t DSValidateStartPos : 1; // 0x18C(0x1), Mask(0x1)
	uint8_t BitPad_0x18C_1 : 7; // 0x18C(0x1)
	uint8_t Pad_0x18D[0x3]; // 0x18D(0x3)
	float DSValidateDSDistance; // 0x190(0x4)
	float DSAllowFireTimeDelay; // 0x194(0x4)
};

// Object: Class DFMAbility.MarkOutlineBuffEntityBase
// Size: 0x1C0 (Inherited: 0x190)
struct UMarkOutlineBuffEntityBase : UDFMCharacterBuffEntityBase
{
	DEFINE_UE_CLASS_HELPERS(UMarkOutlineBuffEntityBase, "MarkOutlineBuffEntityBase")

	struct TArray<struct FName> ApplyOutLineBuffType; // 0x190(0x10)
	EOutLineEffectType OutLineType; // 0x1A0(0x4)
	float MapMarkEnemyIconTime; // 0x1A4(0x4)
	struct FName MarkUIAudioName; // 0x1A8(0x8)
	struct FName BeMarkedUIAudioName; // 0x1B0(0x8)
	uint8_t Pad_0x1B8[0x8]; // 0x1B8(0x8)
};

// Object: Class DFMAbility.NitrogenZoneActor
// Size: 0xB00 (Inherited: 0x9E8)
struct ANitrogenZoneActor : ADFMAbilityBuffDetector
{
	DEFINE_UE_CLASS_HELPERS(ANitrogenZoneActor, "NitrogenZoneActor")

	struct UAbilityVoxelizationComponent* AbilityVoxelizationComponent; // 0x9E8(0x8)
	struct TWeakObjectPtr<struct UFreezeZoneManagerComponent> FreezeManager; // 0x9F0(0x8)
	struct TSet<struct TWeakObjectPtr<struct AActor>> ActorsInZone; // 0x9F8(0x50)
	uint8_t bNitrogenZoneInitialized : 1; // 0xA48(0x1), Mask(0x1)
	uint8_t BitPad_0xA48_1 : 7; // 0xA48(0x1)
	uint8_t Pad_0xA49[0x7]; // 0xA49(0x7)
	struct FSoftObjectPath AppearanceBlueprintHD; // 0xA50(0x18)
	struct FSoftObjectPath AppearanceBlueprintMobile; // 0xA68(0x18)
	struct TSoftClassPtr<struct UObject*> AppearanceBlueprintHDClass; // 0xA80(0x28)
	struct TSoftClassPtr<struct UObject*> AppearanceBlueprintMobileClass; // 0xAA8(0x28)
	uint8_t Pad_0xAD0[0x8]; // 0xAD0(0x8)
	struct UObject* LoadedAppearanceClass; // 0xAD8(0x8)
	uint8_t Pad_0xAE0[0x20]; // 0xAE0(0x20)

	// Object: Function DFMAbility.NitrogenZoneActor.RefreshActorFreezeState
	// Flags: [Final|Native|Protected|BlueprintCallable]
	// Offset: 0xc4493a8
	// Params: [ Num(1) Size(0x8) ]
	void RefreshActorFreezeState(struct AActor* Actor);

	// Object: Function DFMAbility.NitrogenZoneActor.IsActorInZone
	// Flags: [Final|Native|Protected|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xc4492f8
	// Params: [ Num(2) Size(0x9) ]
	uint8_t IsActorInZone(struct AActor* Actor);

	// Object: Function DFMAbility.NitrogenZoneActor.InitializeNitrogenZone
	// Flags: [Final|Native|Protected|BlueprintCallable]
	// Offset: 0xc4492e4
	// Params: [ Num(0) Size(0x0) ]
	void InitializeNitrogenZone();

	// Object: Function DFMAbility.NitrogenZoneActor.GetVoxelizationComponent
	// Flags: [Final|Native|Protected|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xc4492c8
	// Params: [ Num(1) Size(0x8) ]
	struct UAbilityVoxelizationComponent* GetVoxelizationComponent();

	// Object: Function DFMAbility.NitrogenZoneActor.GetActorsInZoneCount
	// Flags: [Final|Native|Protected|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xc4492a4
	// Params: [ Num(1) Size(0x4) ]
	int32_t GetActorsInZoneCount();

	// Object: Function DFMAbility.NitrogenZoneActor.GetActorsInZone
	// Flags: [Final|Native|Protected|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xc44920c
	// Params: [ Num(1) Size(0x10) ]
	struct TArray<struct AActor*> GetActorsInZone();

	// Object: Function DFMAbility.NitrogenZoneActor.ClearAllFreezeStates
	// Flags: [Final|Native|Protected|BlueprintCallable]
	// Offset: 0xc4491f8
	// Params: [ Num(0) Size(0x0) ]
	void ClearAllFreezeStates();

	// Object: Function DFMAbility.NitrogenZoneActor.CheckLocationInVoxel
	// Flags: [Final|Native|Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xc44913c
	// Params: [ Num(2) Size(0xD) ]
	uint8_t CheckLocationInVoxel(const struct FVector& Location);

	// Object: Function DFMAbility.NitrogenZoneActor.BP_OnNitrogenZoneDestroyed
	// Flags: [Event|Protected|BlueprintCallable|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(0) Size(0x0) ]
	void BP_OnNitrogenZoneDestroyed();

	// Object: Function DFMAbility.NitrogenZoneActor.BP_OnActorLeaveNitrogenZone
	// Flags: [Event|Protected|BlueprintCallable|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(1) Size(0x8) ]
	void BP_OnActorLeaveNitrogenZone(struct AActor* Actor);

	// Object: Function DFMAbility.NitrogenZoneActor.BP_OnActorEnterNitrogenZone
	// Flags: [Event|Protected|BlueprintCallable|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(1) Size(0x8) ]
	void BP_OnActorEnterNitrogenZone(struct AActor* Actor);
};

// Object: Class DFMAbility.PreViewRebornFlag
// Size: 0x448 (Inherited: 0x448)
struct APreViewRebornFlag : AItemPreviewActor
{
	DEFINE_UE_CLASS_HELPERS(APreViewRebornFlag, "PreViewRebornFlag")
};

// Object: Class DFMAbility.QA_AbilityLogicTask
// Size: 0x228 (Inherited: 0x30)
struct UQA_AbilityLogicTask : UBlueprintAsyncActionBase
{
	DEFINE_UE_CLASS_HELPERS(UQA_AbilityLogicTask, "QA_AbilityLogicTask")

	struct FName LogicName; // 0x30(0x8)
	struct FName LogicThen; // 0x38(0x8)
	struct FName LogicTrigger; // 0x40(0x8)
	struct FName LogicUnTrigger; // 0x48(0x8)
	struct FName LogicEvent; // 0x50(0x8)
	int32_t LogicThenID; // 0x58(0x4)
	int32_t LogicTriggerID; // 0x5C(0x4)
	int32_t LogicUnTriggerID; // 0x60(0x4)
	int32_t LogicEventID; // 0x64(0x4)
	int32_t LogicID; // 0x68(0x4)
	uint8_t Pad_0x6C[0x4]; // 0x6C(0x4)
	struct FTimerHandle SpawnTimerHandle; // 0x70(0x8)
	EAbilityStateFlag Flag; // 0x78(0x1)
	uint8_t Pad_0x79[0x7]; // 0x79(0x7)
	struct TMap<int32_t, int32_t> LogicNotifyMap; // 0x80(0x50)
	struct TArray<EAbilityTriggerType> ExcutePaths; // 0xD0(0x10)
	struct UScriptStruct* DataType; // 0xE0(0x8)
	uint8_t bNoCheckTime : 1; // 0xE8(0x1), Mask(0x1)
	uint8_t BitPad_0xE8_1 : 7; // 0xE8(0x1)
	uint8_t Pad_0xE9[0x3]; // 0xE9(0x3)
	float Timeout; // 0xEC(0x4)
	uint8_t bUse1pResource : 1; // 0xF0(0x1), Mask(0x1)
	uint8_t BitPad_0xF0_1 : 7; // 0xF0(0x1)
	uint8_t Pad_0xF1[0x7]; // 0xF1(0x7)
	struct FMulticastInlineDelegate OnThen; // 0xF8(0x10)
	struct FMulticastInlineDelegate OnTrigger; // 0x108(0x10)
	struct FMulticastInlineDelegate OnUnTrigger; // 0x118(0x10)
	struct TWeakObjectPtr<struct ADFMAbilityLogicTemplate> AbilityLogicTemplate; // 0x128(0x8)
	struct TWeakObjectPtr<struct ASkillSubsystem> SkillSystem; // 0x130(0x8)
	uint8_t Pad_0x138[0x18]; // 0x138(0x18)
	struct TMap<uint64_t, struct FGPAbilityAvatarAssets> AvatarAssets; // 0x150(0x50)
	struct TMap<uint64_t, struct FGPAbilityAvatarAssets> AvatarAssets_Simulate; // 0x1A0(0x50)
	struct TArray<struct UObject*> TaskLoadedResourceMap; // 0x1F0(0x10)
	struct TArray<int32_t> LoadedResourceSkills; // 0x200(0x10)
	uint64_t TaskPreloadHandle; // 0x210(0x8)
	struct TArray<struct FSoftObjectPath> TaskPreAssetName; // 0x218(0x10)

	// Object: Function DFMAbility.QA_AbilityLogicTask.TickLogic
	// Flags: [Native|Public]
	// Offset: 0xc452c28
	// Params: [ Num(0) Size(0x0) ]
	void TickLogic();

	// Object: Function DFMAbility.QA_AbilityLogicTask.TaskPreload
	// Flags: [Final|Native|Public]
	// Offset: 0xc452b84
	// Params: [ Num(1) Size(0x4) ]
	void TaskPreload(int32_t skillEntityIndex);

	// Object: Function DFMAbility.QA_AbilityLogicTask.SetupDataType
	// Flags: [Native|Public]
	// Offset: 0xc452b68
	// Params: [ Num(0) Size(0x0) ]
	void SetupDataType();

	// Object: Function DFMAbility.QA_AbilityLogicTask.SetupDataShareData
	// Flags: [Final|Native|Public]
	// Offset: 0xc452b54
	// Params: [ Num(0) Size(0x0) ]
	void SetupDataShareData();

	// Object: Function DFMAbility.QA_AbilityLogicTask.Rollback
	// Flags: [Native|Public]
	// Offset: 0xc452aa8
	// Params: [ Num(1) Size(0x4) ]
	void Rollback(int32_t skillEntityIndex);

	// Object: Function DFMAbility.QA_AbilityLogicTask.RemoveTaskPreload
	// Flags: [Final|Native|Public]
	// Offset: 0xc452a94
	// Params: [ Num(0) Size(0x0) ]
	void RemoveTaskPreload();

	// Object: Function DFMAbility.QA_AbilityLogicTask.RemoveResouceWaitList
	// Flags: [Final|Native|Public]
	// Offset: 0xc4529f0
	// Params: [ Num(1) Size(0x4) ]
	void RemoveResouceWaitList(int32_t skillEntityIndex);

	// Object: Function DFMAbility.QA_AbilityLogicTask.RemoveFromCharacter
	// Flags: [Native|Public]
	// Offset: 0xc452944
	// Params: [ Num(1) Size(0x4) ]
	void RemoveFromCharacter(int32_t skillEntityIndex);

	// Object: Function DFMAbility.QA_AbilityLogicTask.ReleaseLogic
	// Flags: [Native|Public]
	// Offset: 0xc452928
	// Params: [ Num(0) Size(0x0) ]
	void ReleaseLogic();

	// Object: Function DFMAbility.QA_AbilityLogicTask.ReApplyLogic
	// Flags: [Native|Public]
	// Offset: 0xc452870
	// Params: [ Num(2) Size(0x5) ]
	uint8_t ReApplyLogic(int32_t skillEntityIndex);

	// Object: Function DFMAbility.QA_AbilityLogicTask.PreMatch
	// Flags: [Native|Public]
	// Offset: 0xc452854
	// Params: [ Num(0) Size(0x0) ]
	void PreMatch();

	// Object: Function DFMAbility.QA_AbilityLogicTask.PredictCheck
	// Flags: [Final|Native|Public]
	// Offset: 0xc4527b4
	// Params: [ Num(2) Size(0x5) ]
	uint8_t PredictCheck(int32_t skillEntityIndex);

	// Object: Function DFMAbility.QA_AbilityLogicTask.OnUnNormalEnd
	// Flags: [Native|Public]
	// Offset: 0xc452708
	// Params: [ Num(1) Size(0x4) ]
	void OnUnNormalEnd(int32_t skillEntityIndex);

	// Object: Function DFMAbility.QA_AbilityLogicTask.OnTaskLoadedPreload
	// Flags: [Final|Native|Public]
	// Offset: 0xc452638
	// Params: [ Num(1) Size(0x10) ]
	void OnTaskLoadedPreload(struct TArray<struct FSoftObjectPath> Path);

	// Object: Function DFMAbility.QA_AbilityLogicTask.OnNormalStart
	// Flags: [Native|Public]
	// Offset: 0xc45258c
	// Params: [ Num(1) Size(0x4) ]
	void OnNormalStart(int32_t skillEntityIndex);

	// Object: Function DFMAbility.QA_AbilityLogicTask.OnNormalBreak
	// Flags: [Native|Public]
	// Offset: 0xc4524e0
	// Params: [ Num(1) Size(0x4) ]
	void OnNormalBreak(int32_t skillEntityIndex);

	// Object: Function DFMAbility.QA_AbilityLogicTask.OnCharacterDie
	// Flags: [Native|Public]
	// Offset: 0xc452434
	// Params: [ Num(1) Size(0x4) ]
	void OnCharacterDie(int32_t skillEntityIndex);

	// Object: Function DFMAbility.QA_AbilityLogicTask.IsUsePreload
	// Flags: [Final|Native|Public]
	// Offset: 0xc4523fc
	// Params: [ Num(1) Size(0x1) ]
	uint8_t IsUsePreload();

	// Object: Function DFMAbility.QA_AbilityLogicTask.IsTaskResouceDone
	// Flags: [Final|Native|Public]
	// Offset: 0xc45234c
	// Params: [ Num(2) Size(0x5) ]
	uint8_t IsTaskResouceDone(int32_t skillEntityIndex);

	// Object: Function DFMAbility.QA_AbilityLogicTask.IsResouceNode
	// Flags: [Final|Native|Public]
	// Offset: 0xc45229c
	// Params: [ Num(2) Size(0x9) ]
	uint8_t IsResouceNode(struct FName Name);

	// Object: Function DFMAbility.QA_AbilityLogicTask.IsResouceDone
	// Flags: [Final|Native|Public]
	// Offset: 0xc4521ec
	// Params: [ Num(2) Size(0x5) ]
	uint8_t IsResouceDone(int32_t skillEntityIndex);

	// Object: Function DFMAbility.QA_AbilityLogicTask.IsAvatarResouceDone
	// Flags: [Final|Native|Public]
	// Offset: 0xc45213c
	// Params: [ Num(2) Size(0x5) ]
	uint8_t IsAvatarResouceDone(int32_t skillEntityIndex);

	// Object: Function DFMAbility.QA_AbilityLogicTask.InnerGetTaskPreloadResource
	// Flags: [Final|Native|Public]
	// Offset: 0xc452018
	// Params: [ Num(3) Size(0x11) ]
	void InnerGetTaskPreloadResource(int32_t skillEntityIndex, uint64_t AvatarID, uint8_t bExclude1P);

	// Object: Function DFMAbility.QA_AbilityLogicTask.InitLogic
	// Flags: [Native|Public]
	// Offset: 0xc451ffc
	// Params: [ Num(0) Size(0x0) ]
	void InitLogic();

	// Object: Function DFMAbility.QA_AbilityLogicTask.GetTemplateTaskPreloadResource
	// Flags: [Final|Native|Public]
	// Offset: 0xc451fe8
	// Params: [ Num(0) Size(0x0) ]
	void GetTemplateTaskPreloadResource();

	// Object: Function DFMAbility.QA_AbilityLogicTask.GetTaskPreloadResource
	// Flags: [Native|Public]
	// Offset: 0xc451f3c
	// Params: [ Num(1) Size(0x4) ]
	void GetTaskPreloadResource(int32_t skillEntityIndex);

	// Object: Function DFMAbility.QA_AbilityLogicTask.GetSkillSystem
	// Flags: [Final|Native|Public]
	// Offset: 0xc451f08
	// Params: [ Num(1) Size(0x8) ]
	struct ASkillSubsystem* GetSkillSystem();

	// Object: Function DFMAbility.QA_AbilityLogicTask.GetCharacterAvatarId
	// Flags: [Final|Native|Public]
	// Offset: 0xc451e5c
	// Params: [ Num(2) Size(0x10) ]
	uint64_t GetCharacterAvatarId(struct AGPCharacter* GPCharacter);

	// Object: Function DFMAbility.QA_AbilityLogicTask.GetAvatarPreloadResource
	// Flags: [Native|Public]
	// Offset: 0xc451d74
	// Params: [ Num(2) Size(0x10) ]
	void GetAvatarPreloadResource(int32_t skillEntityIndex, uint64_t AvatarID);

	// Object: Function DFMAbility.QA_AbilityLogicTask.ExitLogic
	// Flags: [Native|Public]
	// Offset: 0xc451cc8
	// Params: [ Num(1) Size(0x4) ]
	void ExitLogic(int32_t skillEntityIndex);

	// Object: Function DFMAbility.QA_AbilityLogicTask.EnterSystemLogic
	// Flags: [Native|Public]
	// Offset: 0xc451be0
	// Params: [ Num(2) Size(0x8) ]
	void EnterSystemLogic(int32_t skillEntityIndex, float EnterTime);

	// Object: Function DFMAbility.QA_AbilityLogicTask.EnterLogicCheckPreload
	// Flags: [Final|Native|Public]
	// Offset: 0xc451afc
	// Params: [ Num(2) Size(0x5) ]
	void EnterLogicCheckPreload(int32_t skillEntityIndex, uint8_t ReEnter);

	// Object: Function DFMAbility.QA_AbilityLogicTask.EnterLogic
	// Flags: [Final|Native|Public]
	// Offset: 0xc451a18
	// Params: [ Num(2) Size(0x5) ]
	void EnterLogic(int32_t skillEntityIndex, uint8_t ReEnter);

	// Object: Function DFMAbility.QA_AbilityLogicTask.CollectTaskPreAssetName
	// Flags: [Final|Native|Public]
	// Offset: 0xc4519e0
	// Params: [ Num(1) Size(0x1) ]
	uint8_t CollectTaskPreAssetName();

	// Object: Function DFMAbility.QA_AbilityLogicTask.CollectAvatarTaskPreAssetName
	// Flags: [Final|Native|Public]
	// Offset: 0xc4519a8
	// Params: [ Num(1) Size(0x1) ]
	uint8_t CollectAvatarTaskPreAssetName();

	// Object: Function DFMAbility.QA_AbilityLogicTask.ApplyLogic
	// Flags: [Native|Public]
	// Offset: 0xc4518fc
	// Params: [ Num(1) Size(0x4) ]
	void ApplyLogic(int32_t skillEntityIndex);

	// Object: Function DFMAbility.QA_AbilityLogicTask.AddResouceWaitList
	// Flags: [Final|Native|Public]
	// Offset: 0xc451858
	// Params: [ Num(1) Size(0x4) ]
	void AddResouceWaitList(int32_t skillEntityIndex);
};

// Object: Class DFMAbility.QA_AbilityAddHealth
// Size: 0x238 (Inherited: 0x228)
struct UQA_AbilityAddHealth : UQA_AbilityLogicTask
{
	DEFINE_UE_CLASS_HELPERS(UQA_AbilityAddHealth, "QA_AbilityAddHealth")

	int32_t InAddHealth; // 0x228(0x4)
	uint8_t Pad_0x22C[0xC]; // 0x22C(0xC)

	// Object: Function DFMAbility.QA_AbilityAddHealth.QA_AbilityAddHealth
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0xc449484
	// Params: [ Num(5) Size(0x28) ]
	static struct UQA_AbilityLogicTask* QA_AbilityAddHealth(struct ADFMAbilityLogicTemplate* LogicTemplate, struct FName InLogicName, struct AActor* TargetCharacter, int32_t AddHealth);
};

// Object: Class DFMAbility.QA_AbilityAddSheild
// Size: 0x230 (Inherited: 0x228)
struct UQA_AbilityAddSheild : UQA_AbilityLogicTask
{
	DEFINE_UE_CLASS_HELPERS(UQA_AbilityAddSheild, "QA_AbilityAddSheild")

	float InAddSheildValue; // 0x228(0x4)
	uint8_t Pad_0x22C[0x4]; // 0x22C(0x4)

	// Object: Function DFMAbility.QA_AbilityAddSheild.QA_AbilityAddSheild
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x10a39510
	// Params: [ Num(4) Size(0x20) ]
	static struct UQA_AbilityLogicTask* QA_AbilityAddSheild(struct ADFMAbilityLogicTemplate* LogicTemplate, struct FName InLogicName, float AddSheildValue);
};

// Object: Class DFMAbility.QA_AbilityAddSkillNum
// Size: 0x238 (Inherited: 0x228)
struct UQA_AbilityAddSkillNum : UQA_AbilityLogicTask
{
	DEFINE_UE_CLASS_HELPERS(UQA_AbilityAddSkillNum, "QA_AbilityAddSkillNum")

	uint8_t Pad_0x228[0x8]; // 0x228(0x8)
	int32_t InAddNum; // 0x230(0x4)
	uint8_t Pad_0x234[0x4]; // 0x234(0x4)

	// Object: Function DFMAbility.QA_AbilityAddSkillNum.QA_AbilityAddSkillNum
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0xfe199b8
	// Params: [ Num(4) Size(0x20) ]
	static struct UQA_AbilityLogicTask* QA_AbilityAddSkillNum(struct ADFMAbilityLogicTemplate* LogicTemplate, struct FName InLogicName, int32_t AddNum);
};

// Object: Class DFMAbility.QA_AbilityAttachMeshAnim
// Size: 0x4A0 (Inherited: 0x228)
struct UQA_AbilityAttachMeshAnim : UQA_AbilityLogicTask
{
	DEFINE_UE_CLASS_HELPERS(UQA_AbilityAttachMeshAnim, "QA_AbilityAttachMeshAnim")

	uint8_t Pad_0x228[0x10]; // 0x228(0x10)
	struct TMap<struct FName, struct UObject*> LoadedResourceMap; // 0x238(0x50)
	struct TMap<struct FName, struct FAbilityAttachMeshLoadHadnle> LoadedResourceHandle; // 0x288(0x50)
	struct TMap<struct FName, uint64_t> PreloadHandle; // 0x2D8(0x50)
	struct FMulticastInlineDelegate OnNotify; // 0x328(0x10)
	struct FAbilityAttachMeshAnimData RowData; // 0x338(0x160)
	uint8_t Pad_0x498[0x8]; // 0x498(0x8)

	// Object: Function DFMAbility.QA_AbilityAttachMeshAnim.SetAttachMesh
	// Flags: [Final|Native|Public|HasOutParms]
	// Offset: 0xc449fe0
	// Params: [ Num(6) Size(0xAA) ]
	void SetAttachMesh(struct FAbilityBlackBorad_AttachMesh& AttachMeshData, struct AGPCharacter* CHARACTER, struct FName MeshName, struct UGPSkeletalMeshComponent* ItemMesh, uint8_t IsBindMesh, uint8_t IsFPP);

	// Object: Function DFMAbility.QA_AbilityAttachMeshAnim.RemovePreload
	// Flags: [Final|Native|Public]
	// Offset: 0xc449f3c
	// Params: [ Num(1) Size(0x4) ]
	void RemovePreload(int32_t skillEntityIndex);

	// Object: Function DFMAbility.QA_AbilityAttachMeshAnim.QA_AbilityAttachMeshAnim
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0xf6e2cdc
	// Params: [ Num(4) Size(0x178) ]
	static struct UQA_AbilityAttachMeshAnim* QA_AbilityAttachMeshAnim(struct ADFMAbilityLogicTemplate* LogicTemplate, struct FName InLogicName, struct FAbilityAttachMeshAnimData Data);

	// Object: Function DFMAbility.QA_AbilityAttachMeshAnim.OnSeqAssetLoaded
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults]
	// Offset: 0xc449dfc
	// Params: [ Num(3) Size(0x24) ]
	void OnSeqAssetLoaded(const struct FSoftObjectPath& SoftObjectPath, int32_t skillEntityIndex, struct FName MeshName);

	// Object: Function DFMAbility.QA_AbilityAttachMeshAnim.OnMaterialAssetLoaded
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults]
	// Offset: 0xc449c80
	// Params: [ Num(4) Size(0x28) ]
	void OnMaterialAssetLoaded(const struct FSoftObjectPath& SoftObjectPath, int32_t skillEntityIndex, struct FName MeshName, int32_t Index);

	// Object: Function DFMAbility.QA_AbilityAttachMeshAnim.OnLoadedPreload
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults]
	// Offset: 0xc449bc0
	// Params: [ Num(1) Size(0x18) ]
	void OnLoadedPreload(const struct FSoftObjectPath& SoftObjectPath);

	// Object: Function DFMAbility.QA_AbilityAttachMeshAnim.OnAudioEventAssetLoaded
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults]
	// Offset: 0xc449a80
	// Params: [ Num(3) Size(0x24) ]
	void OnAudioEventAssetLoaded(const struct FSoftObjectPath& SoftObjectPath, int32_t skillEntityIndex, struct FName MeshName);

	// Object: Function DFMAbility.QA_AbilityAttachMeshAnim.OnAssetLoaded3POn1P
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults]
	// Offset: 0xc449940
	// Params: [ Num(3) Size(0x24) ]
	void OnAssetLoaded3POn1P(const struct FSoftObjectPath& SoftObjectPath, int32_t skillEntityIndex, struct FName MeshName);

	// Object: Function DFMAbility.QA_AbilityAttachMeshAnim.OnAssetLoaded
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults]
	// Offset: 0xc449800
	// Params: [ Num(3) Size(0x24) ]
	void OnAssetLoaded(const struct FSoftObjectPath& SoftObjectPath, int32_t skillEntityIndex, struct FName MeshName);

	// Object: Function DFMAbility.QA_AbilityAttachMeshAnim.OnAnimTimerOut
	// Flags: [Final|Native|Public]
	// Offset: 0xc449724
	// Params: [ Num(2) Size(0x8) ]
	void OnAnimTimerOut(int32_t skillEntityIndex, int32_t InLogicID);
};

// Object: Class DFMAbility.QA_AbilityDestroyMeshAnim
// Size: 0x230 (Inherited: 0x228)
struct UQA_AbilityDestroyMeshAnim : UQA_AbilityLogicTask
{
	DEFINE_UE_CLASS_HELPERS(UQA_AbilityDestroyMeshAnim, "QA_AbilityDestroyMeshAnim")

	uint8_t Pad_0x228[0x8]; // 0x228(0x8)

	// Object: Function DFMAbility.QA_AbilityDestroyMeshAnim.QA_AbilityDestroyMeshAnim
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0xf867f88
	// Params: [ Num(4) Size(0x20) ]
	static struct UQA_AbilityDestroyMeshAnim* QA_AbilityDestroyMeshAnim(struct ADFMAbilityLogicTemplate* LogicTemplate, struct FName InLogicName, struct FName _MeshName);
};

// Object: Class DFMAbility.QA_AbilityTagMeshAnim
// Size: 0x240 (Inherited: 0x228)
struct UQA_AbilityTagMeshAnim : UQA_AbilityLogicTask
{
	DEFINE_UE_CLASS_HELPERS(UQA_AbilityTagMeshAnim, "QA_AbilityTagMeshAnim")

	uint8_t Pad_0x228[0x18]; // 0x228(0x18)

	// Object: Function DFMAbility.QA_AbilityTagMeshAnim.QA_AbilityTagMeshAnim
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0xc44a258
	// Params: [ Num(7) Size(0x30) ]
	static struct UQA_AbilityTagMeshAnim* QA_AbilityTagMeshAnim(struct ADFMAbilityLogicTemplate* LogicTemplate, struct FName InLogicName, struct FName InMeshName, struct FName InTag, uint8_t InAdd, uint8_t InCheck);
};

// Object: Class DFMAbility.QA_AbilityAudio
// Size: 0x248 (Inherited: 0x228)
struct UQA_AbilityAudio : UQA_AbilityLogicTask
{
	DEFINE_UE_CLASS_HELPERS(UQA_AbilityAudio, "QA_AbilityAudio")

	struct FAbilityAudioData AudioData; // 0x228(0x20)

	// Object: Function DFMAbility.QA_AbilityAudio.QA_AbilityAudio
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0xf7f3994
	// Params: [ Num(10) Size(0x38) ]
	static struct UQA_AbilityLogicTask* QA_AbilityAudio(struct ADFMAbilityLogicTemplate* LogicTemplate, struct FName InLogicName, struct UGPAudioEventAsset* InAudioEventAsset, struct FName InAudioEventAudioName, EGPAudioBlueprintType EType, float Duration, uint8_t bNeedMakeNoise, uint8_t bPreCutted, EAudioRoleType RoleType);
};

// Object: Class DFMAbility.QA_AbilityResourceAudio
// Size: 0x230 (Inherited: 0x228)
struct UQA_AbilityResourceAudio : UQA_AbilityLogicTask
{
	DEFINE_UE_CLASS_HELPERS(UQA_AbilityResourceAudio, "QA_AbilityResourceAudio")

	struct FName ResouceID; // 0x228(0x8)

	// Object: Function DFMAbility.QA_AbilityResourceAudio.QA_AbilityResourceAudio
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0xc44caec
	// Params: [ Num(4) Size(0x20) ]
	static struct UQA_AbilityLogicTask* QA_AbilityResourceAudio(struct ADFMAbilityLogicTemplate* LogicTemplate, struct FName InLogicName, struct FName InResouceID);
};

// Object: Class DFMAbility.QA_AbilityLogicState
// Size: 0x230 (Inherited: 0x228)
struct UQA_AbilityLogicState : UQA_AbilityLogicTask
{
	DEFINE_UE_CLASS_HELPERS(UQA_AbilityLogicState, "QA_AbilityLogicState")

	struct FName StateName; // 0x228(0x8)

	// Object: Function DFMAbility.QA_AbilityLogicState.QA_BeginAbilityState
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0xc451484
	// Params: [ Num(3) Size(0x18) ]
	static struct UQA_AbilityLogicTask* QA_BeginAbilityState(struct ADFMAbilityLogicTemplate* LogicTemplate, struct FName InLogicName);
};

// Object: Class DFMAbility.QA_AbilityBehaviorCall
// Size: 0x238 (Inherited: 0x230)
struct UQA_AbilityBehaviorCall : UQA_AbilityLogicState
{
	DEFINE_UE_CLASS_HELPERS(UQA_AbilityBehaviorCall, "QA_AbilityBehaviorCall")

	ESkillBtnCall InCall; // 0x230(0x1)
	ESlotButton InSB; // 0x231(0x1)
	ESkillBehavior InSBE; // 0x232(0x1)
	uint8_t Pad_0x233[0x1]; // 0x233(0x1)
	int32_t Index; // 0x234(0x4)

	// Object: Function DFMAbility.QA_AbilityBehaviorCall.QA_AbilitySlotButton
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0xc44cf90
	// Params: [ Num(4) Size(0x20) ]
	static struct UQA_AbilityLogicTask* QA_AbilitySlotButton(struct ADFMAbilityLogicTemplate* LogicTemplate, struct FName FunctionName, ESlotButton sb);

	// Object: Function DFMAbility.QA_AbilityBehaviorCall.QA_AbilityListnerState
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0xf760e9c
	// Params: [ Num(4) Size(0x20) ]
	static struct UQA_AbilityLogicTask* QA_AbilityListnerState(struct ADFMAbilityLogicTemplate* LogicTemplate, struct FName FunctionName, ESkillBtnCall Call);

	// Object: Function DFMAbility.QA_AbilityBehaviorCall.QA_AbilityListnerBaseState
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0xc44ce78
	// Params: [ Num(4) Size(0x20) ]
	static struct UQA_AbilityLogicTask* QA_AbilityListnerBaseState(struct ADFMAbilityLogicTemplate* LogicTemplate, struct FName FunctionName, ESkillBtnCall Call);

	// Object: Function DFMAbility.QA_AbilityBehaviorCall.QA_AbilityFSMStatusListner
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0xc44cd60
	// Params: [ Num(4) Size(0x20) ]
	static struct UQA_AbilityLogicTask* QA_AbilityFSMStatusListner(struct ADFMAbilityLogicTemplate* LogicTemplate, struct FName FunctionName, EFSMGamePlayStatusDefine Status);

	// Object: Function DFMAbility.QA_AbilityBehaviorCall.QA_AbilityBehaviorListnerBase
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0xc44cc0c
	// Params: [ Num(5) Size(0x20) ]
	static struct UQA_AbilityLogicTask* QA_AbilityBehaviorListnerBase(struct ADFMAbilityLogicTemplate* LogicTemplate, struct FName FunctionName, ESkillBehavior Call, EAbilityStateFlag StateFlag);

	// Object: Function DFMAbility.QA_AbilityBehaviorCall.QA_AbilityBehaviorListner
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0xf7095cc
	// Params: [ Num(4) Size(0x20) ]
	static struct UQA_AbilityLogicTask* QA_AbilityBehaviorListner(struct ADFMAbilityLogicTemplate* LogicTemplate, struct FName FunctionName, ESkillBehavior Call);
};

// Object: Class DFMAbility.QA_AbilityChangeBehaviorCall
// Size: 0x238 (Inherited: 0x230)
struct UQA_AbilityChangeBehaviorCall : UQA_AbilityLogicState
{
	DEFINE_UE_CLASS_HELPERS(UQA_AbilityChangeBehaviorCall, "QA_AbilityChangeBehaviorCall")

	ESkillBtnCall InCall; // 0x230(0x1)
	ESlotButton InSB; // 0x231(0x1)
	ESkillBehavior InSBE; // 0x232(0x1)
	uint8_t Pad_0x233[0x5]; // 0x233(0x5)

	// Object: Function DFMAbility.QA_AbilityChangeBehaviorCall.QA_AbilityChangeSlotButton
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0xc44d358
	// Params: [ Num(5) Size(0x28) ]
	static struct UQA_AbilityLogicTask* QA_AbilityChangeSlotButton(struct ADFMAbilityLogicTemplate* LogicTemplate, struct FName InLogicName, struct FName FunctionName, ESlotButton sb);

	// Object: Function DFMAbility.QA_AbilityChangeBehaviorCall.QA_AbilityChangeListnerState
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0xc44d204
	// Params: [ Num(5) Size(0x28) ]
	static struct UQA_AbilityLogicTask* QA_AbilityChangeListnerState(struct ADFMAbilityLogicTemplate* LogicTemplate, struct FName InLogicName, struct FName FunctionName, ESkillBtnCall Call);

	// Object: Function DFMAbility.QA_AbilityChangeBehaviorCall.QA_AbilityChangeBehaviorListner
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0xc44d0b0
	// Params: [ Num(5) Size(0x28) ]
	static struct UQA_AbilityLogicTask* QA_AbilityChangeBehaviorListner(struct ADFMAbilityLogicTemplate* LogicTemplate, struct FName InLogicName, struct FName FunctionName, ESkillBehavior Call);
};

// Object: Class DFMAbility.QA_AbilityRevertBehaviorCall
// Size: 0x230 (Inherited: 0x228)
struct UQA_AbilityRevertBehaviorCall : UQA_AbilityLogicTask
{
	DEFINE_UE_CLASS_HELPERS(UQA_AbilityRevertBehaviorCall, "QA_AbilityRevertBehaviorCall")

	int32_t Index; // 0x228(0x4)
	uint8_t Pad_0x22C[0x4]; // 0x22C(0x4)

	// Object: Function DFMAbility.QA_AbilityRevertBehaviorCall.QA_AbilityRevertSlotButton
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0xc44d66c
	// Params: [ Num(3) Size(0x18) ]
	static struct UQA_AbilityLogicTask* QA_AbilityRevertSlotButton(struct ADFMAbilityLogicTemplate* LogicTemplate, struct FName InLogicName);

	// Object: Function DFMAbility.QA_AbilityRevertBehaviorCall.QA_AbilityRevertListnerState
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0xc44d590
	// Params: [ Num(3) Size(0x18) ]
	static struct UQA_AbilityLogicTask* QA_AbilityRevertListnerState(struct ADFMAbilityLogicTemplate* LogicTemplate, struct FName InLogicName);

	// Object: Function DFMAbility.QA_AbilityRevertBehaviorCall.QA_AbilityRevertBehaviorListner
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0xc44d4b4
	// Params: [ Num(3) Size(0x18) ]
	static struct UQA_AbilityLogicTask* QA_AbilityRevertBehaviorListner(struct ADFMAbilityLogicTemplate* LogicTemplate, struct FName InLogicName);
};

// Object: Class DFMAbility.QA_AbilityFSMStatusInstanceListner
// Size: 0x238 (Inherited: 0x230)
struct UQA_AbilityFSMStatusInstanceListner : UQA_AbilityLogicState
{
	DEFINE_UE_CLASS_HELPERS(UQA_AbilityFSMStatusInstanceListner, "QA_AbilityFSMStatusInstanceListner")

	uint8_t Pad_0x230[0x8]; // 0x230(0x8)

	// Object: Function DFMAbility.QA_AbilityFSMStatusInstanceListner.QA_AbilityFSMStatusInstanceListner
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0xc44d750
	// Params: [ Num(4) Size(0x20) ]
	static struct UQA_AbilityLogicTask* QA_AbilityFSMStatusInstanceListner(struct ADFMAbilityLogicTemplate* LogicTemplate, struct FName FunctionName, EFSMGamePlayStatusDefine Status);
};

// Object: Class DFMAbility.QA_AbilityListner
// Size: 0x248 (Inherited: 0x228)
struct UQA_AbilityListner : UQA_AbilityLogicTask
{
	DEFINE_UE_CLASS_HELPERS(UQA_AbilityListner, "QA_AbilityListner")

	ESkillBtnCall Call; // 0x228(0x1)
	uint8_t Pad_0x229[0x7]; // 0x229(0x7)
	struct TArray<int32_t> CurrentCharacters; // 0x230(0x10)
	uint8_t bLockRTT : 1; // 0x240(0x1), Mask(0x1)
	uint8_t BitPad_0x240_1 : 7; // 0x240(0x1)
	uint8_t Pad_0x241[0x7]; // 0x241(0x7)

	// Object: Function DFMAbility.QA_AbilityListner.QA_AbilityListner
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x109e29d0
	// Params: [ Num(5) Size(0x20) ]
	static struct UQA_AbilityLogicTask* QA_AbilityListner(struct ADFMAbilityLogicTemplate* LogicTemplate, struct FName InLogicName, ESkillBtnCall InCall, uint8_t InLockRTT);

	// Object: Function DFMAbility.QA_AbilityListner.OnSkillBtnCall
	// Flags: [Final|Native|Public]
	// Offset: 0x101c83a4
	// Params: [ Num(2) Size(0x5) ]
	void OnSkillBtnCall(int32_t skillEntityIndex, ESkillBtnCall BtnCall);
};

// Object: Class DFMAbility.QA_SkillBehaviorListner
// Size: 0x240 (Inherited: 0x228)
struct UQA_SkillBehaviorListner : UQA_AbilityLogicTask
{
	DEFINE_UE_CLASS_HELPERS(UQA_SkillBehaviorListner, "QA_SkillBehaviorListner")

	ESkillBehavior Behehavior; // 0x228(0x1)
	uint8_t bEnableMP : 1; // 0x229(0x1), Mask(0x1)
	uint8_t BitPad_0x229_1 : 7; // 0x229(0x1)
	uint8_t bEnableSOL : 1; // 0x22A(0x1), Mask(0x1)
	uint8_t BitPad_0x22A_1 : 7; // 0x22A(0x1)
	uint8_t Pad_0x22B[0x5]; // 0x22B(0x5)
	struct TArray<int32_t> CurrentCharacters; // 0x230(0x10)

	// Object: Function DFMAbility.QA_SkillBehaviorListner.QA_SkillBehaviorListner
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0xfe41674
	// Params: [ Num(6) Size(0x20) ]
	static struct UQA_AbilityLogicTask* QA_SkillBehaviorListner(struct ADFMAbilityLogicTemplate* LogicTemplate, struct FName InLogicName, ESkillBehavior InBehehavior, uint8_t InEnableMP, uint8_t InEnableSOL);

	// Object: Function DFMAbility.QA_SkillBehaviorListner.OnSkillBehehavior
	// Flags: [Final|Native|Public]
	// Offset: 0xf32c7a4
	// Params: [ Num(2) Size(0x5) ]
	void OnSkillBehehavior(int32_t skillEntityIndex, ESkillBehavior BehehaviorCall);
};

// Object: Class DFMAbility.QA_AbilityDisableListner
// Size: 0x230 (Inherited: 0x228)
struct UQA_AbilityDisableListner : UQA_AbilityLogicTask
{
	DEFINE_UE_CLASS_HELPERS(UQA_AbilityDisableListner, "QA_AbilityDisableListner")

	struct FName ListnerName; // 0x228(0x8)

	// Object: Function DFMAbility.QA_AbilityDisableListner.QA_AbilityDisableListner
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x105c7510
	// Params: [ Num(4) Size(0x20) ]
	static struct UQA_AbilityLogicTask* QA_AbilityDisableListner(struct ADFMAbilityLogicTemplate* LogicTemplate, struct FName InLogicName, struct FName Listner);
};

// Object: Class DFMAbility.QA_AbilityBuff
// Size: 0x448 (Inherited: 0x228)
struct UQA_AbilityBuff : UQA_AbilityLogicTask
{
	DEFINE_UE_CLASS_HELPERS(UQA_AbilityBuff, "QA_AbilityBuff")

	uint8_t Pad_0x228[0x10]; // 0x228(0x10)
	struct FMulticastInlineDelegate OnFailedNotify; // 0x238(0x10)
	struct FMulticastInlineDelegate OnKillPlayerNotify; // 0x248(0x10)
	struct FMulticastInlineDelegate OnKillAINotify; // 0x258(0x10)
	int32_t InBuffId; // 0x268(0x4)
	int32_t InBfBuffID; // 0x26C(0x4)
	int32_t InHDBuffID; // 0x270(0x4)
	int32_t InHDBfBuffID; // 0x274(0x4)
	uint8_t InUseBfBuff : 1; // 0x278(0x1), Mask(0x1)
	uint8_t BitPad_0x278_1 : 7; // 0x278(0x1)
	uint8_t InUseHDBuff : 1; // 0x279(0x1), Mask(0x1)
	uint8_t BitPad_0x279_1 : 7; // 0x279(0x1)
	uint8_t InbLeaveRemove : 1; // 0x27A(0x1), Mask(0x1)
	uint8_t BitPad_0x27A_1 : 7; // 0x27A(0x1)
	ECharacterPart InPart; // 0x27B(0x1)
	uint8_t Pad_0x27C[0x4]; // 0x27C(0x4)
	struct FAbilityBuffAwardConfig BF_AwardConfig; // 0x280(0xB8)
	struct FAbilityBuffAwardConfig SOL_AwardConfig; // 0x338(0xB8)
	uint8_t InAddOrRemove : 1; // 0x3F0(0x1), Mask(0x1)
	uint8_t BitPad_0x3F0_1 : 7; // 0x3F0(0x1)
	uint8_t InRemoveBuffOnAbilityAbort : 1; // 0x3F1(0x1), Mask(0x1)
	uint8_t BitPad_0x3F1_1 : 7; // 0x3F1(0x1)
	uint8_t Pad_0x3F2[0x6]; // 0x3F2(0x6)
	struct TMap<uint64_t, struct FInt32Range> CharacterBuffMap; // 0x3F8(0x50)

	// Object: Function DFMAbility.QA_AbilityBuff.QA_AbilityBuff
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0xf528a60
	// Params: [ Num(15) Size(0x1A8) ]
	static struct UQA_AbilityBuff* QA_AbilityBuff(struct ADFMAbilityLogicTemplate* LogicTemplate, struct FName InLogicName, int32_t BuffId, int32_t BFBuffID, int32_t HDBuffID, int32_t HDBFBuffID, ECharacterPart Part, struct FAbilityBuffAwardConfig BF_AwardConfigIn, struct FAbilityBuffAwardConfig SOL_AwardConfigIn, uint8_t AddOrRemove, uint8_t RemoveBuffOnAbilityAbort, uint8_t UseBFBuffWhenIsBF, uint8_t UseHDBuffWhenIsHD, uint8_t LeaveRemove);
};

// Object: Class DFMAbility.QA_C302PassiveBuff
// Size: 0x228 (Inherited: 0x228)
struct UQA_C302PassiveBuff : UQA_AbilityLogicTask
{
	DEFINE_UE_CLASS_HELPERS(UQA_C302PassiveBuff, "QA_C302PassiveBuff")

	// Object: Function DFMAbility.QA_C302PassiveBuff.QA_C302PassiveBuff
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0xc44da0c
	// Params: [ Num(4) Size(0x20) ]
	static struct UQA_AbilityLogicTask* QA_C302PassiveBuff(struct ADFMAbilityLogicTemplate* LogicTemplate, struct FName InLogicName, float CD);
};

// Object: Class DFMAbility.QA_AbilityC103RemoteRescure
// Size: 0x228 (Inherited: 0x228)
struct UQA_AbilityC103RemoteRescure : UQA_AbilityLogicTask
{
	DEFINE_UE_CLASS_HELPERS(UQA_AbilityC103RemoteRescure, "QA_AbilityC103RemoteRescure")

	// Object: Function DFMAbility.QA_AbilityC103RemoteRescure.QA_AbilityC103RemoteRescure
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x109d14d8
	// Params: [ Num(3) Size(0x18) ]
	static struct UQA_AbilityLogicTask* QA_AbilityC103RemoteRescure(struct ADFMAbilityLogicTemplate* LogicTemplate, struct FName InLogicName);
};

// Object: Class DFMAbility.QA_AbilityCameraModifier
// Size: 0x238 (Inherited: 0x228)
struct UQA_AbilityCameraModifier : UQA_AbilityLogicTask
{
	DEFINE_UE_CLASS_HELPERS(UQA_AbilityCameraModifier, "QA_AbilityCameraModifier")

	struct UCameraModifier* ModifierClass; // 0x228(0x8)
	uint8_t InAddOrRemove : 1; // 0x230(0x1), Mask(0x1)
	uint8_t BitPad_0x230_1 : 7; // 0x230(0x1)
	uint8_t Pad_0x231[0x7]; // 0x231(0x7)

	// Object: Function DFMAbility.QA_AbilityCameraModifier.QA_AbilityCameraModifier
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0xff8b674
	// Params: [ Num(5) Size(0x28) ]
	static struct UQA_AbilityLogicTask* QA_AbilityCameraModifier(struct ADFMAbilityLogicTemplate* LogicTemplate, struct FName InLogicName, struct UCameraModifier* NewModifierClass, uint8_t AddOrRemove);
};

// Object: Class DFMAbility.QA_AbilityCastWeaponAmmo
// Size: 0x238 (Inherited: 0x228)
struct UQA_AbilityCastWeaponAmmo : UQA_AbilityLogicTask
{
	DEFINE_UE_CLASS_HELPERS(UQA_AbilityCastWeaponAmmo, "QA_AbilityCastWeaponAmmo")

	int32_t AmmoCast; // 0x228(0x4)
	ECharingSlot WeaponSlot; // 0x22C(0x1)
	uint8_t Pad_0x22D[0x3]; // 0x22D(0x3)
	int32_t CastSID; // 0x230(0x4)
	uint8_t Pad_0x234[0x4]; // 0x234(0x4)

	// Object: Function DFMAbility.QA_AbilityCastWeaponAmmo.QA_AbilityCastWeaponAmmo
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x10197f78
	// Params: [ Num(5) Size(0x20) ]
	static struct UQA_AbilityLogicTask* QA_AbilityCastWeaponAmmo(struct ADFMAbilityLogicTemplate* LogicTemplate, struct FName InLogicName, ECharingSlot Slot, int32_t Cast);
};

// Object: Class DFMAbility.QA_AbilityCheckWeaponAmmo
// Size: 0x238 (Inherited: 0x228)
struct UQA_AbilityCheckWeaponAmmo : UQA_AbilityLogicTask
{
	DEFINE_UE_CLASS_HELPERS(UQA_AbilityCheckWeaponAmmo, "QA_AbilityCheckWeaponAmmo")

	ECharingSlot WeaponSlot; // 0x228(0x1)
	uint8_t Pad_0x229[0x3]; // 0x229(0x3)
	int32_t InAmmoNum; // 0x22C(0x4)
	struct FName InOP; // 0x230(0x8)

	// Object: Function DFMAbility.QA_AbilityCheckWeaponAmmo.QA_AbilityCheckWeaponAmmo
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x1015b0a4
	// Params: [ Num(6) Size(0x28) ]
	static struct UQA_AbilityLogicTask* QA_AbilityCheckWeaponAmmo(struct ADFMAbilityLogicTemplate* LogicTemplate, struct FName InLogicName, ECharingSlot Slot, struct FName Op, int32_t AmmoNum);
};

// Object: Class DFMAbility.QA_AbilityCD
// Size: 0x238 (Inherited: 0x228)
struct UQA_AbilityCD : UQA_AbilityLogicTask
{
	DEFINE_UE_CLASS_HELPERS(UQA_AbilityCD, "QA_AbilityCD")

	uint8_t Pad_0x228[0x8]; // 0x228(0x8)
	float InCd; // 0x230(0x4)
	uint8_t Pad_0x234[0x4]; // 0x234(0x4)

	// Object: Function DFMAbility.QA_AbilityCD.QA_AbilityCD
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0xf870220
	// Params: [ Num(4) Size(0x20) ]
	static struct UQA_AbilityLogicTask* QA_AbilityCD(struct ADFMAbilityLogicTemplate* LogicTemplate, struct FName InLogicName, float CD);
};

// Object: Class DFMAbility.QA_AbilityUseCD
// Size: 0x228 (Inherited: 0x228)
struct UQA_AbilityUseCD : UQA_AbilityLogicTask
{
	DEFINE_UE_CLASS_HELPERS(UQA_AbilityUseCD, "QA_AbilityUseCD")

	// Object: Function DFMAbility.QA_AbilityUseCD.QA_AbilityUseCD
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0xc44db6c
	// Params: [ Num(3) Size(0x18) ]
	static struct UQA_AbilityLogicTask* QA_AbilityUseCD(struct ADFMAbilityLogicTemplate* LogicTemplate, struct FName InLogicName);
};

// Object: Class DFMAbility.QA_AbilityAddCD
// Size: 0x230 (Inherited: 0x228)
struct UQA_AbilityAddCD : UQA_AbilityLogicTask
{
	DEFINE_UE_CLASS_HELPERS(UQA_AbilityAddCD, "QA_AbilityAddCD")

	float InValue; // 0x228(0x4)
	uint8_t InIsPercent : 1; // 0x22C(0x1), Mask(0x1)
	uint8_t BitPad_0x22C_1 : 7; // 0x22C(0x1)
	uint8_t Pad_0x22D[0x3]; // 0x22D(0x3)

	// Object: Function DFMAbility.QA_AbilityAddCD.QA_AbilityAddCD
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0xc44dc50
	// Params: [ Num(5) Size(0x20) ]
	static struct UQA_AbilityLogicTask* QA_AbilityAddCD(struct ADFMAbilityLogicTemplate* LogicTemplate, struct FName InLogicName, float Value, uint8_t isPercent);
};

// Object: Class DFMAbility.QA_AbilitySlotChargingAfterSkill
// Size: 0x228 (Inherited: 0x228)
struct UQA_AbilitySlotChargingAfterSkill : UQA_AbilityLogicTask
{
	DEFINE_UE_CLASS_HELPERS(UQA_AbilitySlotChargingAfterSkill, "QA_AbilitySlotChargingAfterSkill")

	// Object: Function DFMAbility.QA_AbilitySlotChargingAfterSkill.QA_AbilitySlotChargingAfterSkill
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x109d1780
	// Params: [ Num(3) Size(0x18) ]
	static struct UQA_AbilityLogicTask* QA_AbilitySlotChargingAfterSkill(struct ADFMAbilityLogicTemplate* LogicTemplate, struct FName InLogicName);
};

// Object: Class DFMAbility.QA_AddNewNodeExcuteEntry
// Size: 0x228 (Inherited: 0x228)
struct UQA_AddNewNodeExcuteEntry : UQA_AbilityLogicTask
{
	DEFINE_UE_CLASS_HELPERS(UQA_AddNewNodeExcuteEntry, "QA_AddNewNodeExcuteEntry")

	// Object: Function DFMAbility.QA_AddNewNodeExcuteEntry.QA_AddNewNodeExcuteEntry
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0xc44ddd4
	// Params: [ Num(3) Size(0x18) ]
	static struct UQA_AbilityLogicTask* QA_AddNewNodeExcuteEntry(struct ADFMAbilityLogicTemplate* LogicTemplate, struct FName InLogicName);
};

// Object: Class DFMAbility.QA_AbilityCDEx
// Size: 0x238 (Inherited: 0x228)
struct UQA_AbilityCDEx : UQA_AbilityLogicTask
{
	DEFINE_UE_CLASS_HELPERS(UQA_AbilityCDEx, "QA_AbilityCDEx")

	uint8_t Pad_0x228[0x8]; // 0x228(0x8)
	float InCd; // 0x230(0x4)
	uint8_t Pad_0x234[0x4]; // 0x234(0x4)

	// Object: Function DFMAbility.QA_AbilityCDEx.QA_AbilityCDEx
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0xfab5298
	// Params: [ Num(4) Size(0x20) ]
	static struct UQA_AbilityLogicTask* QA_AbilityCDEx(struct ADFMAbilityLogicTemplate* LogicTemplate, struct FName InLogicName, float CD);
};

// Object: Class DFMAbility.QA_AbilityChangeCharacterAnimation
// Size: 0x238 (Inherited: 0x228)
struct UQA_AbilityChangeCharacterAnimation : UQA_AbilityLogicTask
{
	DEFINE_UE_CLASS_HELPERS(UQA_AbilityChangeCharacterAnimation, "QA_AbilityChangeCharacterAnimation")

	struct UBlendSpaceBase* StandMoveBS; // 0x228(0x8)
	struct UAnimSequence* IdleAnimation; // 0x230(0x8)

	// Object: Function DFMAbility.QA_AbilityChangeCharacterAnimation.QA_AbilityChangeCharacterAnimation
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0xc44dec0
	// Params: [ Num(5) Size(0x28) ]
	static struct UQA_AbilityLogicTask* QA_AbilityChangeCharacterAnimation(struct ADFMAbilityLogicTemplate* LogicTemplate, struct FName InLogicName, struct UBlendSpaceBase* MoveBS, struct UAnimSequence* IdleAnim);
};

// Object: Class DFMAbility.QA_AbilityChangeWeaponAnimMap
// Size: 0x238 (Inherited: 0x228)
struct UQA_AbilityChangeWeaponAnimMap : UQA_AbilityLogicTask
{
	DEFINE_UE_CLASS_HELPERS(UQA_AbilityChangeWeaponAnimMap, "QA_AbilityChangeWeaponAnimMap")

	struct FName InItemID; // 0x228(0x8)
	uint8_t InisClearCurrentWeaponAnimMap : 1; // 0x230(0x1), Mask(0x1)
	uint8_t BitPad_0x230_1 : 7; // 0x230(0x1)
	uint8_t Pad_0x231[0x7]; // 0x231(0x7)

	// Object: Function DFMAbility.QA_AbilityChangeWeaponAnimMap.QA_AbilityChangeWeaponAnimMap
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0xc44fe60
	// Params: [ Num(5) Size(0x28) ]
	static struct UQA_AbilityLogicTask* QA_AbilityChangeWeaponAnimMap(struct ADFMAbilityLogicTemplate* LogicTemplate, struct FName InLogicName, uint8_t isClear, struct FName ItemID);
};

// Object: Class DFMAbility.QA_AbilityConsumeItem
// Size: 0x228 (Inherited: 0x228)
struct UQA_AbilityConsumeItem : UQA_AbilityLogicTask
{
	DEFINE_UE_CLASS_HELPERS(UQA_AbilityConsumeItem, "QA_AbilityConsumeItem")

	// Object: Function DFMAbility.QA_AbilityConsumeItem.QA_AbilityConsumeItem
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0xc450090
	// Params: [ Num(3) Size(0x18) ]
	static struct UQA_AbilityLogicTask* QA_AbilityConsumeItem(struct ADFMAbilityLogicTemplate* LogicTemplate, struct FName InLogicName);
};

// Object: Class DFMAbility.QA_AbilityRecycleSpawnActor
// Size: 0x278 (Inherited: 0x228)
struct UQA_AbilityRecycleSpawnActor : UQA_AbilityLogicTask
{
	DEFINE_UE_CLASS_HELPERS(UQA_AbilityRecycleSpawnActor, "QA_AbilityRecycleSpawnActor")

	struct FAbilityRecycleSpawnActorData RecycleData; // 0x228(0x50)

	// Object: Function DFMAbility.QA_AbilityRecycleSpawnActor.QA_AbilityRecycleSpawnActor
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0xfb9dbcc
	// Params: [ Num(4) Size(0x68) ]
	static struct UQA_AbilityRecycleSpawnActor* QA_AbilityRecycleSpawnActor(struct ADFMAbilityLogicTemplate* LogicTemplate, struct FName InLogicName, struct FAbilityRecycleSpawnActorData InRecycleData);
};

// Object: Class DFMAbility.QA_AbilityActiveSpawnActor
// Size: 0x230 (Inherited: 0x228)
struct UQA_AbilityActiveSpawnActor : UQA_AbilityLogicTask
{
	DEFINE_UE_CLASS_HELPERS(UQA_AbilityActiveSpawnActor, "QA_AbilityActiveSpawnActor")

	uint8_t Pad_0x228[0x8]; // 0x228(0x8)

	// Object: Function DFMAbility.QA_AbilityActiveSpawnActor.QA_AbilityActiveSpawnActor
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x107b5ba0
	// Params: [ Num(4) Size(0x20) ]
	static struct UQA_AbilityActiveSpawnActor* QA_AbilityActiveSpawnActor(struct ADFMAbilityLogicTemplate* LogicTemplate, struct FName InLogicName, ECharingSlot ItemPos);
};

// Object: Class DFMAbility.QA_AbilityCostScore
// Size: 0x230 (Inherited: 0x228)
struct UQA_AbilityCostScore : UQA_AbilityLogicTask
{
	DEFINE_UE_CLASS_HELPERS(UQA_AbilityCostScore, "QA_AbilityCostScore")

	uint8_t Pad_0x228[0x8]; // 0x228(0x8)

	// Object: Function DFMAbility.QA_AbilityCostScore.QA_AbilityCostScore
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0xfda5fa8
	// Params: [ Num(3) Size(0x18) ]
	static struct UQA_AbilityLogicTask* QA_AbilityCostScore(struct ADFMAbilityLogicTemplate* LogicTemplate, struct FName InLogicName);
};

// Object: Class DFMAbility.QA_AbilityCrosshairPercent
// Size: 0x240 (Inherited: 0x228)
struct UQA_AbilityCrosshairPercent : UQA_AbilityLogicTask
{
	DEFINE_UE_CLASS_HELPERS(UQA_AbilityCrosshairPercent, "QA_AbilityCrosshairPercent")

	uint8_t bIsInSpectatingLogic : 1; // 0x228(0x1), Mask(0x1)
	uint8_t BitPad_0x228_1 : 7; // 0x228(0x1)
	uint8_t Pad_0x229[0x17]; // 0x229(0x17)

	// Object: Function DFMAbility.QA_AbilityCrosshairPercent.QA_AbilityCrosshairPercent
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x1078c8d0
	// Params: [ Num(4) Size(0x20) ]
	static struct UQA_AbilityLogicTask* QA_AbilityCrosshairPercent(struct ADFMAbilityLogicTemplate* LogicTemplate, struct FName InLogicName, float InSequenceLength);

	// Object: Function DFMAbility.QA_AbilityCrosshairPercent.OnSupportSelfCureShow
	// Flags: [Final|Native|Public]
	// Offset: 0xc45018c
	// Params: [ Num(2) Size(0x18) ]
	void OnSupportSelfCureShow(struct FString FunctionName, struct UBaseUIView* View);
};

// Object: Class DFMAbility.QA_SetSupportAmmo
// Size: 0x230 (Inherited: 0x228)
struct UQA_SetSupportAmmo : UQA_AbilityLogicTask
{
	DEFINE_UE_CLASS_HELPERS(UQA_SetSupportAmmo, "QA_SetSupportAmmo")

	struct FName MeshName; // 0x228(0x8)

	// Object: Function DFMAbility.QA_SetSupportAmmo.QA_SetSupportAmmo
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x1078cc94
	// Params: [ Num(4) Size(0x20) ]
	static struct UQA_AbilityLogicTask* QA_SetSupportAmmo(struct ADFMAbilityLogicTemplate* LogicTemplate, struct FName InLogicName, struct FName InMeshName);
};

// Object: Class DFMAbility.QA_AbilityDelay
// Size: 0x230 (Inherited: 0x228)
struct UQA_AbilityDelay : UQA_AbilityLogicTask
{
	DEFINE_UE_CLASS_HELPERS(UQA_AbilityDelay, "QA_AbilityDelay")

	float Indelay; // 0x228(0x4)
	uint8_t DieClear : 1; // 0x22C(0x1), Mask(0x1)
	uint8_t BitPad_0x22C_1 : 7; // 0x22C(0x1)
	uint8_t Pad_0x22D[0x3]; // 0x22D(0x3)

	// Object: Function DFMAbility.QA_AbilityDelay.QA_AbilityDelay
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0xf8de8e4
	// Params: [ Num(5) Size(0x20) ]
	static struct UQA_AbilityLogicTask* QA_AbilityDelay(struct ADFMAbilityLogicTemplate* LogicTemplate, struct FName InLogicName, float Delay, uint8_t InDieClear);

	// Object: Function DFMAbility.QA_AbilityDelay.OnAnimTimerOut
	// Flags: [Final|Native|Public]
	// Offset: 0xc450290
	// Params: [ Num(1) Size(0x4) ]
	void OnAnimTimerOut(int32_t skillEntityIndex);
};

// Object: Class DFMAbility.QA_AbilityCustomDelay
// Size: 0x230 (Inherited: 0x228)
struct UQA_AbilityCustomDelay : UQA_AbilityLogicTask
{
	DEFINE_UE_CLASS_HELPERS(UQA_AbilityCustomDelay, "QA_AbilityCustomDelay")

	float InServerDelay; // 0x228(0x4)
	float InClientDelay; // 0x22C(0x4)

	// Object: Function DFMAbility.QA_AbilityCustomDelay.QA_AbilityCustomDelay
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0xc4503f8
	// Params: [ Num(5) Size(0x20) ]
	static struct UQA_AbilityLogicTask* QA_AbilityCustomDelay(struct ADFMAbilityLogicTemplate* LogicTemplate, struct FName InLogicName, float serverDelay, float clientDelay);

	// Object: Function DFMAbility.QA_AbilityCustomDelay.OnAnimTimerOut
	// Flags: [Final|Native|Public]
	// Offset: 0xc450354
	// Params: [ Num(1) Size(0x4) ]
	void OnAnimTimerOut(int32_t skillEntityIndex);
};

// Object: Class DFMAbility.QA_AbilityDriverFlyRebot
// Size: 0x280 (Inherited: 0x228)
struct UQA_AbilityDriverFlyRebot : UQA_AbilityLogicTask
{
	DEFINE_UE_CLASS_HELPERS(UQA_AbilityDriverFlyRebot, "QA_AbilityDriverFlyRebot")

	struct TMap<struct FName, struct FAbilityDriverFlyRebot> AbilityDriverVehicleData; // 0x228(0x50)
	uint8_t Pad_0x278[0x8]; // 0x278(0x8)

	// Object: Function DFMAbility.QA_AbilityDriverFlyRebot.QA_AbilityDriverFlyRebot
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0xc4505f4
	// Params: [ Num(4) Size(0x20) ]
	static struct UQA_AbilityLogicTask* QA_AbilityDriverFlyRebot(struct ADFMAbilityLogicTemplate* LogicTemplate, struct FName InLogicName, struct FName VehicleName);

	// Object: Function DFMAbility.QA_AbilityDriverFlyRebot.OnAbilityFlyRebotEvent
	// Flags: [Final|Native|Public]
	// Offset: 0xc450550
	// Params: [ Num(1) Size(0x4) ]
	void OnAbilityFlyRebotEvent(int32_t skillEntityIndex);
};

// Object: Class DFMAbility.QA_AbilityDriverVehicle
// Size: 0x280 (Inherited: 0x228)
struct UQA_AbilityDriverVehicle : UQA_AbilityLogicTask
{
	DEFINE_UE_CLASS_HELPERS(UQA_AbilityDriverVehicle, "QA_AbilityDriverVehicle")

	struct TMap<struct FName, struct FAbilityDriverVehicle> AbilityDriverVehicleData; // 0x228(0x50)
	uint8_t Pad_0x278[0x8]; // 0x278(0x8)

	// Object: Function DFMAbility.QA_AbilityDriverVehicle.QA_AbilityDriverVehicle
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0xc450714
	// Params: [ Num(4) Size(0x20) ]
	static struct UQA_AbilityLogicTask* QA_AbilityDriverVehicle(struct ADFMAbilityLogicTemplate* LogicTemplate, struct FName InLogicName, struct FName VehicleName);
};

// Object: Class DFMAbility.QA_AbilityEnableLongPress
// Size: 0x230 (Inherited: 0x228)
struct UQA_AbilityEnableLongPress : UQA_AbilityLogicTask
{
	DEFINE_UE_CLASS_HELPERS(UQA_AbilityEnableLongPress, "QA_AbilityEnableLongPress")

	uint8_t EnableLongPress : 1; // 0x228(0x1), Mask(0x1)
	uint8_t BitPad_0x228_1 : 7; // 0x228(0x1)
	uint8_t Pad_0x229[0x7]; // 0x229(0x7)

	// Object: Function DFMAbility.QA_AbilityEnableLongPress.QA_AbilityEnableLongPress
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x105cbdec
	// Params: [ Num(4) Size(0x20) ]
	static struct UQA_AbilityLogicTask* QA_AbilityEnableLongPress(struct ADFMAbilityLogicTemplate* LogicTemplate, struct FName InLogicName, uint8_t Enable);
};

// Object: Class DFMAbility.QA_AbilityEndLogic
// Size: 0x230 (Inherited: 0x228)
struct UQA_AbilityEndLogic : UQA_AbilityLogicTask
{
	DEFINE_UE_CLASS_HELPERS(UQA_AbilityEndLogic, "QA_AbilityEndLogic")

	uint8_t Pad_0x228[0x8]; // 0x228(0x8)

	// Object: Function DFMAbility.QA_AbilityEndLogic.QA_AbilityEndLogic
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0xc450854
	// Params: [ Num(3) Size(0x18) ]
	static struct UQA_AbilityLogicTask* QA_AbilityEndLogic(struct ADFMAbilityLogicTemplate* LogicTemplate, struct FName InLogicName);
};

// Object: Class DFMAbility.QA_AbilityEquipAnim
// Size: 0x248 (Inherited: 0x228)
struct UQA_AbilityEquipAnim : UQA_AbilityLogicTask
{
	DEFINE_UE_CLASS_HELPERS(UQA_AbilityEquipAnim, "QA_AbilityEquipAnim")

	uint8_t EquipAnim : 1; // 0x228(0x1), Mask(0x1)
	uint8_t BitPad_0x228_1 : 7; // 0x228(0x1)
	uint8_t Pad_0x229[0x3]; // 0x229(0x3)
	int32_t IngoreWhenEquipSlot; // 0x22C(0x4)
	int32_t InQuietEquipSlot; // 0x230(0x4)
	float InBlendIn; // 0x234(0x4)
	float InBlendOut; // 0x238(0x4)
	float InpreTrigger; // 0x23C(0x4)
	EInteractivePutWeaponType InteractivePutWeaponType; // 0x240(0x1)
	EInteractiveGetWeaponType InteractiveGetWeaponType; // 0x241(0x1)
	uint8_t Pad_0x242[0x6]; // 0x242(0x6)

	// Object: Function DFMAbility.QA_AbilityEquipAnim.QA_AbilityEquipAnim
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0xc450a14
	// Params: [ Num(11) Size(0x38) ]
	static struct UQA_AbilityLogicTask* QA_AbilityEquipAnim(struct ADFMAbilityLogicTemplate* LogicTemplate, struct FName InLogicName, uint8_t Equip, int32_t IngoreSlot, int32_t QuietEquipSlot, float BlendIn, float BlendOut, float preTrigger, EInteractivePutWeaponType PutWeaponType, EInteractiveGetWeaponType GetWeaponType);

	// Object: Function DFMAbility.QA_AbilityEquipAnim.OnAnimTimerOut
	// Flags: [Final|Native|Public]
	// Offset: 0xc450938
	// Params: [ Num(2) Size(0x8) ]
	void OnAnimTimerOut(int32_t skillEntityIndex, int32_t InLogicID);
};

// Object: Class DFMAbility.QA_AbilityEquipWeapon
// Size: 0x240 (Inherited: 0x228)
struct UQA_AbilityEquipWeapon : UQA_AbilityLogicTask
{
	DEFINE_UE_CLASS_HELPERS(UQA_AbilityEquipWeapon, "QA_AbilityEquipWeapon")

	uint8_t InEquip : 1; // 0x228(0x1), Mask(0x1)
	uint8_t BitPad_0x228_1 : 7; // 0x228(0x1)
	uint8_t Pad_0x229[0x7]; // 0x229(0x7)
	uint64_t WeaponItemId; // 0x230(0x8)
	int32_t InAttachPos; // 0x238(0x4)
	uint8_t isUniqueWeapon : 1; // 0x23C(0x1), Mask(0x1)
	uint8_t BitPad_0x23C_1 : 7; // 0x23C(0x1)
	uint8_t Pad_0x23D[0x3]; // 0x23D(0x3)

	// Object: Function DFMAbility.QA_AbilityEquipWeapon.QA_AbilityEquipWeapon
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0xc450cf0
	// Params: [ Num(7) Size(0x30) ]
	static struct UQA_AbilityLogicTask* QA_AbilityEquipWeapon(struct ADFMAbilityLogicTemplate* LogicTemplate, struct FName InLogicName, uint8_t Equip, struct FName WeaponID, int32_t AttachPos, uint8_t UniqueWeapon);
};

// Object: Class DFMAbility.QA_AbilityFirefighting
// Size: 0x228 (Inherited: 0x228)
struct UQA_AbilityFirefighting : UQA_AbilityLogicTask
{
	DEFINE_UE_CLASS_HELPERS(UQA_AbilityFirefighting, "QA_AbilityFirefighting")

	// Object: Function DFMAbility.QA_AbilityFirefighting.QA_AbilityFirefighting
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x109d1a28
	// Params: [ Num(3) Size(0x18) ]
	static struct UQA_AbilityLogicTask* QA_AbilityFirefighting(struct ADFMAbilityLogicTemplate* LogicTemplate, struct FName InLogicName);
};

// Object: Class DFMAbility.QA_AbilityFunction
// Size: 0x230 (Inherited: 0x228)
struct UQA_AbilityFunction : UQA_AbilityLogicTask
{
	DEFINE_UE_CLASS_HELPERS(UQA_AbilityFunction, "QA_AbilityFunction")

	struct FName FuncName; // 0x228(0x8)

	// Object: Function DFMAbility.QA_AbilityFunction.QA_AbilityFunction
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0xf7fb630
	// Params: [ Num(3) Size(0x18) ]
	static struct UQA_AbilityLogicTask* QA_AbilityFunction(struct ADFMAbilityLogicTemplate* LogicTemplate, struct FName FunctionName);
};

// Object: Class DFMAbility.QA_AbilityHandleRush
// Size: 0x228 (Inherited: 0x228)
struct UQA_AbilityHandleRush : UQA_AbilityLogicTask
{
	DEFINE_UE_CLASS_HELPERS(UQA_AbilityHandleRush, "QA_AbilityHandleRush")

	// Object: Function DFMAbility.QA_AbilityHandleRush.QA_AbilityHandleRush
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x1098cfd0
	// Params: [ Num(4) Size(0x20) ]
	static struct UQA_AbilityLogicTask* QA_AbilityHandleRush(struct ADFMAbilityLogicTemplate* LogicTemplate, struct FName InLogicName, ESkillActorEvent InEventName);
};

// Object: Class DFMAbility.QA_AbilityItemPreviewActor
// Size: 0x260 (Inherited: 0x228)
struct UQA_AbilityItemPreviewActor : UQA_AbilityLogicTask
{
	DEFINE_UE_CLASS_HELPERS(UQA_AbilityItemPreviewActor, "QA_AbilityItemPreviewActor")

	struct FAbilityItemPreviewData ItemPreviewData; // 0x228(0x38)

	// Object: Function DFMAbility.QA_AbilityItemPreviewActor.QA_AbilityItemPreviewActor
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0xc450f28
	// Params: [ Num(4) Size(0x50) ]
	static struct UQA_AbilityLogicTask* QA_AbilityItemPreviewActor(struct ADFMAbilityLogicTemplate* LogicTemplate, struct FName InLogicName, struct FAbilityItemPreviewData AbilityItemPreviewData);
};

// Object: Class DFMAbility.QA_AbilityRemoveItemPreviewActor
// Size: 0x228 (Inherited: 0x228)
struct UQA_AbilityRemoveItemPreviewActor : UQA_AbilityLogicTask
{
	DEFINE_UE_CLASS_HELPERS(UQA_AbilityRemoveItemPreviewActor, "QA_AbilityRemoveItemPreviewActor")

	// Object: Function DFMAbility.QA_AbilityRemoveItemPreviewActor.QA_AbilityRemoveItemPreviewActor
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0xc4510e0
	// Params: [ Num(3) Size(0x18) ]
	static struct UQA_AbilityLogicTask* QA_AbilityRemoveItemPreviewActor(struct ADFMAbilityLogicTemplate* LogicTemplate, struct FName InLogicName);
};

// Object: Class DFMAbility.QA_AbilityKickIce
// Size: 0x238 (Inherited: 0x228)
struct UQA_AbilityKickIce : UQA_AbilityLogicTask
{
	DEFINE_UE_CLASS_HELPERS(UQA_AbilityKickIce, "QA_AbilityKickIce")

	uint64_t AttackValueId; // 0x228(0x8)
	EDamageType DamageType; // 0x230(0x1)
	uint8_t Pad_0x231[0x7]; // 0x231(0x7)

	// Object: Function DFMAbility.QA_AbilityKickIce.QA_AbilityKickIce
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0xc4511c4
	// Params: [ Num(5) Size(0x28) ]
	static struct UQA_AbilityLogicTask* QA_AbilityKickIce(struct ADFMAbilityLogicTemplate* LogicTemplate, struct FName InLogicName, int64_t InAttackValueId, EDamageType InDamageType);
};

// Object: Class DFMAbility.QA_AbilityLineTrace
// Size: 0x238 (Inherited: 0x228)
struct UQA_AbilityLineTrace : UQA_AbilityLogicTask
{
	DEFINE_UE_CLASS_HELPERS(UQA_AbilityLineTrace, "QA_AbilityLineTrace")

	uint8_t Pad_0x228[0x10]; // 0x228(0x10)

	// Object: Function DFMAbility.QA_AbilityLineTrace.QA_AbilityLineTrace
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0xc451320
	// Params: [ Num(5) Size(0x20) ]
	static struct UQA_AbilityLogicTask* QA_AbilityLineTrace(struct ADFMAbilityLogicTemplate* LogicTemplate, struct FName InLogicName, ECollisionChannel _Channel, float _TraceLenth);
};

// Object: Class DFMAbility.QA_AbilityLineTraceCheck
// Size: 0x238 (Inherited: 0x228)
struct UQA_AbilityLineTraceCheck : UQA_AbilityLogicTask
{
	DEFINE_UE_CLASS_HELPERS(UQA_AbilityLineTraceCheck, "QA_AbilityLineTraceCheck")

	uint8_t Pad_0x228[0x8]; // 0x228(0x8)
	float TraceLenth; // 0x230(0x4)
	float ForwardTraceLenth; // 0x234(0x4)

	// Object: Function DFMAbility.QA_AbilityLineTraceCheck.QA_AbilityLineTraceCheck
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x106e6f8c
	// Params: [ Num(6) Size(0x28) ]
	static struct UQA_AbilityLogicTask* QA_AbilityLineTraceCheck(struct ADFMAbilityLogicTemplate* LogicTemplate, struct FName InLogicName, ECollisionChannel _Channel, float _TraceLenth, float InForwardTraceLenth);
};

// Object: Class DFMAbility.QA_AbilityLogicLeaveState
// Size: 0x238 (Inherited: 0x228)
struct UQA_AbilityLogicLeaveState : UQA_AbilityLogicTask
{
	DEFINE_UE_CLASS_HELPERS(UQA_AbilityLogicLeaveState, "QA_AbilityLogicLeaveState")

	struct FName StateName; // 0x228(0x8)
	EAbilityTriggerType InTrigger; // 0x230(0x1)
	uint8_t Pad_0x231[0x7]; // 0x231(0x7)

	// Object: Function DFMAbility.QA_AbilityLogicLeaveState.QA_EndAbilityState
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0xc451568
	// Params: [ Num(4) Size(0x20) ]
	static struct UQA_AbilityLogicTask* QA_EndAbilityState(struct ADFMAbilityLogicTemplate* LogicTemplate, struct FName InLogicName, EAbilityTriggerType Trigger);
};

// Object: Class DFMAbility.QA_AbilityEnd
// Size: 0x230 (Inherited: 0x228)
struct UQA_AbilityEnd : UQA_AbilityLogicTask
{
	DEFINE_UE_CLASS_HELPERS(UQA_AbilityEnd, "QA_AbilityEnd")

	struct FEndAbilityOption Option; // 0x228(0x3)
	uint8_t Pad_0x22B[0x5]; // 0x22B(0x5)

	// Object: Function DFMAbility.QA_AbilityEnd.QA_EndAbility
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0xf5fab2c
	// Params: [ Num(4) Size(0x20) ]
	static struct UQA_AbilityLogicTask* QA_EndAbility(struct ADFMAbilityLogicTemplate* LogicTemplate, struct FName InLogicName, struct FEndAbilityOption EndOption);
};

// Object: Class DFMAbility.QA_AbilityCheckNormalBreak
// Size: 0x228 (Inherited: 0x228)
struct UQA_AbilityCheckNormalBreak : UQA_AbilityLogicTask
{
	DEFINE_UE_CLASS_HELPERS(UQA_AbilityCheckNormalBreak, "QA_AbilityCheckNormalBreak")

	// Object: Function DFMAbility.QA_AbilityCheckNormalBreak.QA_AbilityCheckNormalBreak
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0xc451690
	// Params: [ Num(3) Size(0x18) ]
	static struct UQA_AbilityLogicTask* QA_AbilityCheckNormalBreak(struct ADFMAbilityLogicTemplate* LogicTemplate, struct FName InLogicName);
};

// Object: Class DFMAbility.QA_AbilityLeaveSkillState
// Size: 0x228 (Inherited: 0x228)
struct UQA_AbilityLeaveSkillState : UQA_AbilityLogicTask
{
	DEFINE_UE_CLASS_HELPERS(UQA_AbilityLeaveSkillState, "QA_AbilityLeaveSkillState")

	// Object: Function DFMAbility.QA_AbilityLeaveSkillState.QA_AbilityLeaveSkillState
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0xc451774
	// Params: [ Num(3) Size(0x18) ]
	static struct UQA_AbilityLogicTask* QA_AbilityLeaveSkillState(struct ADFMAbilityLogicTemplate* LogicTemplate, struct FName InLogicName);
};

// Object: Class DFMAbility.QA_AbilityLogicTemplate
// Size: 0x228 (Inherited: 0x228)
struct UQA_AbilityLogicTemplate : UQA_AbilityLogicTask
{
	DEFINE_UE_CLASS_HELPERS(UQA_AbilityLogicTemplate, "QA_AbilityLogicTemplate")
};

// Object: Class DFMAbility.QA_AbilityMeshMaterialEffect
// Size: 0x2F0 (Inherited: 0x228)
struct UQA_AbilityMeshMaterialEffect : UQA_AbilityLogicTask
{
	DEFINE_UE_CLASS_HELPERS(UQA_AbilityMeshMaterialEffect, "QA_AbilityMeshMaterialEffect")

	struct TMap<struct FName, struct FMeshMatEffectConfig> MeshMatConfigs; // 0x228(0x50)
	struct TMap<struct FName, struct FMeshMatUpdateCache> MeshMatUpdateCache; // 0x278(0x50)
	uint8_t Pad_0x2C8[0x8]; // 0x2C8(0x8)
	struct TArray<struct UCurveBase*> CurrCurves; // 0x2D0(0x10)
	struct TArray<int32_t> InstanceIDs; // 0x2E0(0x10)

	// Object: Function DFMAbility.QA_AbilityMeshMaterialEffect.QA_AbilityMeshMaterialEffect
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0xc455894
	// Params: [ Num(4) Size(0x68) ]
	static struct UQA_AbilityLogicTask* QA_AbilityMeshMaterialEffect(struct ADFMAbilityLogicTemplate* LogicTemplate, struct FName InLogicName, struct TMap<struct FName, struct FMeshMatEffectConfig> Configs);

	// Object: Function DFMAbility.QA_AbilityMeshMaterialEffect.OnMatEffectUpdate
	// Flags: [Final|Native|Public]
	// Offset: 0xc45573c
	// Params: [ Num(4) Size(0x18) ]
	void OnMatEffectUpdate(struct FName MeshName, int32_t MatIndex, struct FName CacheKeyName, int32_t skillEntityIndex);
};

// Object: Class DFMAbility.QA_AbilityNotify
// Size: 0x238 (Inherited: 0x228)
struct UQA_AbilityNotify : UQA_AbilityLogicTask
{
	DEFINE_UE_CLASS_HELPERS(UQA_AbilityNotify, "QA_AbilityNotify")

	uint8_t Pad_0x228[0x8]; // 0x228(0x8)
	ESkillActorEvent EventName; // 0x230(0x1)
	uint8_t Pad_0x231[0x7]; // 0x231(0x7)

	// Object: Function DFMAbility.QA_AbilityNotify.QA_AbilityNotify
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0xc455a38
	// Params: [ Num(4) Size(0x20) ]
	static struct UQA_AbilityLogicTask* QA_AbilityNotify(struct ADFMAbilityLogicTemplate* LogicTemplate, struct FName InLogicName, ESkillActorEvent InEventName);
};

// Object: Class DFMAbility.QA_AbilityNotifyDSReplay
// Size: 0x240 (Inherited: 0x228)
struct UQA_AbilityNotifyDSReplay : UQA_AbilityLogicTask
{
	DEFINE_UE_CLASS_HELPERS(UQA_AbilityNotifyDSReplay, "QA_AbilityNotifyDSReplay")

	struct FName ReplayDebugName; // 0x228(0x8)
	float Duration; // 0x230(0x4)
	float radius; // 0x234(0x4)
	struct FColor Color; // 0x238(0x4)
	uint8_t Pad_0x23C[0x4]; // 0x23C(0x4)

	// Object: Function DFMAbility.QA_AbilityNotifyDSReplay.QA_AbilityNotifyDSReplay
	// Flags: [Final|Native|Static|Public|HasDefaults|BlueprintCallable]
	// Offset: 0xc455b58
	// Params: [ Num(7) Size(0x30) ]
	static struct UQA_AbilityLogicTask* QA_AbilityNotifyDSReplay(struct ADFMAbilityLogicTemplate* LogicTemplate, struct FName InLogicName, struct FName InReplayDebugName, float InDuration, float InRadius, struct FColor InColor);
};

// Object: Class DFMAbility.QA_AbilityNotifyForwardScan
// Size: 0x230 (Inherited: 0x228)
struct UQA_AbilityNotifyForwardScan : UQA_AbilityLogicTask
{
	DEFINE_UE_CLASS_HELPERS(UQA_AbilityNotifyForwardScan, "QA_AbilityNotifyForwardScan")

	uint8_t bIsActive : 1; // 0x228(0x1), Mask(0x1)
	uint8_t BitPad_0x228_1 : 7; // 0x228(0x1)
	uint8_t Pad_0x229[0x7]; // 0x229(0x7)

	// Object: Function DFMAbility.QA_AbilityNotifyForwardScan.QA_AbilityNotifyForwardScan
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0xc455d24
	// Params: [ Num(4) Size(0x20) ]
	static struct UQA_AbilityLogicTask* QA_AbilityNotifyForwardScan(struct ADFMAbilityLogicTemplate* LogicTemplate, struct FName InLogicName, uint8_t IsActive);
};

// Object: Class DFMAbility.QA_AbilityNotifyRush
// Size: 0x228 (Inherited: 0x228)
struct UQA_AbilityNotifyRush : UQA_AbilityLogicTask
{
	DEFINE_UE_CLASS_HELPERS(UQA_AbilityNotifyRush, "QA_AbilityNotifyRush")

	// Object: Function DFMAbility.QA_AbilityNotifyRush.QA_AbilityNotifyRush
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x1098d2c0
	// Params: [ Num(4) Size(0x20) ]
	static struct UQA_AbilityLogicTask* QA_AbilityNotifyRush(struct ADFMAbilityLogicTemplate* LogicTemplate, struct FName InLogicName, ESkillActorEvent InEventName);
};

// Object: Class DFMAbility.QA_AbilityRushSetting
// Size: 0x228 (Inherited: 0x228)
struct UQA_AbilityRushSetting : UQA_AbilityLogicTask
{
	DEFINE_UE_CLASS_HELPERS(UQA_AbilityRushSetting, "QA_AbilityRushSetting")

	// Object: Function DFMAbility.QA_AbilityRushSetting.QA_AbilityRushSetting
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x1068bf18
	// Params: [ Num(4) Size(0x1C8) ]
	static struct UQA_AbilityLogicTask* QA_AbilityRushSetting(struct ADFMAbilityLogicTemplate* LogicTemplate, struct FName InLogicName, struct FAbilityRushSettingConfig Config);
};

// Object: Class DFMAbility.QA_AbilityOverrideAnimingCheck
// Size: 0x230 (Inherited: 0x228)
struct UQA_AbilityOverrideAnimingCheck : UQA_AbilityLogicTask
{
	DEFINE_UE_CLASS_HELPERS(UQA_AbilityOverrideAnimingCheck, "QA_AbilityOverrideAnimingCheck")

	uint8_t InbOverrideAimingCheck : 1; // 0x228(0x1), Mask(0x1)
	uint8_t BitPad_0x228_1 : 7; // 0x228(0x1)
	uint8_t Pad_0x229[0x7]; // 0x229(0x7)

	// Object: Function DFMAbility.QA_AbilityOverrideAnimingCheck.QA_AbilityOverrideAnimingCheck
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0xc455e74
	// Params: [ Num(4) Size(0x20) ]
	static struct UQA_AbilityLogicTask* QA_AbilityOverrideAnimingCheck(struct ADFMAbilityLogicTemplate* LogicTemplate, struct FName InLogicName, uint8_t bOverrideAimingCheck);
};

// Object: Class DFMAbility.QA_AbilityPlayMontage
// Size: 0x340 (Inherited: 0x228)
struct UQA_AbilityPlayMontage : UQA_AbilityLogicTask
{
	DEFINE_UE_CLASS_HELPERS(UQA_AbilityPlayMontage, "QA_AbilityPlayMontage")

	uint8_t Pad_0x228[0x10]; // 0x228(0x10)
	struct FMulticastInlineDelegate OnNotify; // 0x238(0x10)
	struct FMulticastInlineDelegate OnNotify2; // 0x248(0x10)
	struct FMulticastInlineDelegate OnNotify3; // 0x258(0x10)
	struct FMulticastInlineDelegate ExecByDSPlayerAi; // 0x268(0x10)
	struct FMulticastInlineDelegate PlayMontageAnimEndTrigger; // 0x278(0x10)
	struct FMulticastInlineDelegate PlayMontageAnimStartTrigger; // 0x288(0x10)
	struct FAbilityPlayMontageRowData MontageData; // 0x298(0xA4)
	uint8_t Pad_0x33C[0x4]; // 0x33C(0x4)

	// Object: Function DFMAbility.QA_AbilityPlayMontage.QA_AbilityPlayMontageWithAnimSet
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0xfb156ac
	// Params: [ Num(4) Size(0x1B0) ]
	static struct UQA_AbilityPlayMontage* QA_AbilityPlayMontageWithAnimSet(struct ADFMAbilityLogicTemplate* LogicTemplate, struct FName _LogicName, struct FAbilityPlayMontageDataP2 Data);

	// Object: Function DFMAbility.QA_AbilityPlayMontage.QA_AbilityPlayMontage
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0xf6d5910
	// Params: [ Num(4) Size(0xC0) ]
	static struct UQA_AbilityPlayMontage* QA_AbilityPlayMontage(struct ADFMAbilityLogicTemplate* LogicTemplate, struct FName _LogicName, struct FAbilityPlayMontageDataP1 Data);
};

// Object: Class DFMAbility.QA_AbilityStopMontage
// Size: 0x240 (Inherited: 0x228)
struct UQA_AbilityStopMontage : UQA_AbilityLogicTask
{
	DEFINE_UE_CLASS_HELPERS(UQA_AbilityStopMontage, "QA_AbilityStopMontage")

	uint8_t Pad_0x228[0x18]; // 0x228(0x18)

	// Object: Function DFMAbility.QA_AbilityStopMontage.QA_AbilityStopMontage
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x1011a434
	// Params: [ Num(5) Size(0x20) ]
	static struct UQA_AbilityStopMontage* QA_AbilityStopMontage(struct ADFMAbilityLogicTemplate* LogicTemplate, struct FName _LogicName, int32_t PlayIndex, EAnimationPlayType AnimationPlayType);
};

// Object: Class DFMAbility.QA_AbilityTakeDemageStopMontage
// Size: 0x238 (Inherited: 0x228)
struct UQA_AbilityTakeDemageStopMontage : UQA_AbilityLogicTask
{
	DEFINE_UE_CLASS_HELPERS(UQA_AbilityTakeDemageStopMontage, "QA_AbilityTakeDemageStopMontage")

	uint8_t Pad_0x228[0x10]; // 0x228(0x10)

	// Object: Function DFMAbility.QA_AbilityTakeDemageStopMontage.QA_AbilityTakeDemageStopMontage
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0xc456164
	// Params: [ Num(3) Size(0x18) ]
	static struct UQA_AbilityLogicTask* QA_AbilityTakeDemageStopMontage(struct ADFMAbilityLogicTemplate* LogicTemplate, struct FName _LogicName);
};

// Object: Class DFMAbility.QA_AbilityPlayUIAudio
// Size: 0x238 (Inherited: 0x228)
struct UQA_AbilityPlayUIAudio : UQA_AbilityLogicTask
{
	DEFINE_UE_CLASS_HELPERS(UQA_AbilityPlayUIAudio, "QA_AbilityPlayUIAudio")

	struct UGPAudioEventAsset* EventAsset; // 0x228(0x8)
	uint8_t include_3p : 1; // 0x230(0x1), Mask(0x1)
	uint8_t BitPad_0x230_1 : 7; // 0x230(0x1)
	uint8_t Pad_0x231[0x7]; // 0x231(0x7)

	// Object: Function DFMAbility.QA_AbilityPlayUIAudio.QA_AbilityPlayUIAudio
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0xc456248
	// Params: [ Num(5) Size(0x28) ]
	static struct UQA_AbilityLogicTask* QA_AbilityPlayUIAudio(struct ADFMAbilityLogicTemplate* LogicTemplate, struct FName InLogicName, struct UGPAudioEventAsset* AudioAsset, uint8_t Include3P);
};

// Object: Class DFMAbility.QA_AbilityPreviewActor
// Size: 0x318 (Inherited: 0x228)
struct UQA_AbilityPreviewActor : UQA_AbilityLogicTask
{
	DEFINE_UE_CLASS_HELPERS(UQA_AbilityPreviewActor, "QA_AbilityPreviewActor")

	struct FAbilityPreviewData RowData; // 0x228(0xF0)

	// Object: Function DFMAbility.QA_AbilityPreviewActor.QA_AbilityPreviewActor
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0xc4563f4
	// Params: [ Num(4) Size(0x108) ]
	static struct UQA_AbilityLogicTask* QA_AbilityPreviewActor(struct ADFMAbilityLogicTemplate* InLogicTemplate, struct FName InLogicName, struct FAbilityPreviewData PreviewData);
};

// Object: Class DFMAbility.QA_AbilityEnablePreviewLine
// Size: 0x230 (Inherited: 0x228)
struct UQA_AbilityEnablePreviewLine : UQA_AbilityLogicTask
{
	DEFINE_UE_CLASS_HELPERS(UQA_AbilityEnablePreviewLine, "QA_AbilityEnablePreviewLine")

	uint8_t bEnable : 1; // 0x228(0x1), Mask(0x1)
	uint8_t BitPad_0x228_1 : 7; // 0x228(0x1)
	uint8_t Pad_0x229[0x7]; // 0x229(0x7)

	// Object: Function DFMAbility.QA_AbilityEnablePreviewLine.QA_AbilityEnablePreviewLine
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0xc4565e4
	// Params: [ Num(4) Size(0x20) ]
	static struct UQA_AbilityLogicTask* QA_AbilityEnablePreviewLine(struct ADFMAbilityLogicTemplate* LogicTemplate, struct FName InLogicName, uint8_t Enable);
};

// Object: Class DFMAbility.QA_AbilityProcessBar
// Size: 0x238 (Inherited: 0x228)
struct UQA_AbilityProcessBar : UQA_AbilityLogicTask
{
	DEFINE_UE_CLASS_HELPERS(UQA_AbilityProcessBar, "QA_AbilityProcessBar")

	float ProcessBarTime; // 0x228(0x4)
	struct FName ProcessBarName; // 0x22C(0x8)
	int32_t ProcessBarType; // 0x234(0x4)

	// Object: Function DFMAbility.QA_AbilityProcessBar.QA_AbilityProcessBar
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x106f6564
	// Params: [ Num(6) Size(0x28) ]
	static struct UQA_AbilityLogicTask* QA_AbilityProcessBar(struct ADFMAbilityLogicTemplate* LogicTemplate, struct FName InLogicName, float Time, struct FName Name, int32_t BarType);
};

// Object: Class DFMAbility.QA_AbilityProjectileActor
// Size: 0x270 (Inherited: 0x228)
struct UQA_AbilityProjectileActor : UQA_AbilityLogicTask
{
	DEFINE_UE_CLASS_HELPERS(UQA_AbilityProjectileActor, "QA_AbilityProjectileActor")

	struct FAbilityProjectileActorData RowData; // 0x228(0x48)

	// Object: Function DFMAbility.QA_AbilityProjectileActor.QA_AbilityProjectileActor
	// Flags: [Final|Native|Static|Public|HasDefaults|BlueprintCallable]
	// Offset: 0xc45672c
	// Params: [ Num(7) Size(0x58) ]
	static struct UQA_AbilityLogicTask* QA_AbilityProjectileActor(struct ADFMAbilityLogicTemplate* LogicTemplate, struct FName InLogicName, struct UObject* ProjectileActorClass, struct FVector StartLocationOffset, float Speed, struct TSoftClassPtr<struct UObject*> projectileActorClassSoft);
};

// Object: Class DFMAbility.QA_AbilityPullOutFireArrow
// Size: 0x228 (Inherited: 0x228)
struct UQA_AbilityPullOutFireArrow : UQA_AbilityLogicTask
{
	DEFINE_UE_CLASS_HELPERS(UQA_AbilityPullOutFireArrow, "QA_AbilityPullOutFireArrow")

	// Object: Function DFMAbility.QA_AbilityPullOutFireArrow.QA_AbilityPullOutFireArrow
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x106755f8
	// Params: [ Num(5) Size(0x28) ]
	static struct UQA_AbilityLogicTask* QA_AbilityPullOutFireArrow(struct ADFMAbilityLogicTemplate* LogicTemplate, struct FName InLogicName, struct FName Text, float Time);
};

// Object: Class DFMAbility.QA_AbilityRankSkillNightVision
// Size: 0x228 (Inherited: 0x228)
struct UQA_AbilityRankSkillNightVision : UQA_AbilityLogicTask
{
	DEFINE_UE_CLASS_HELPERS(UQA_AbilityRankSkillNightVision, "QA_AbilityRankSkillNightVision")

	// Object: Function DFMAbility.QA_AbilityRankSkillNightVision.QA_AbilityRankSkillNightVision
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0xc459968
	// Params: [ Num(2) Size(0x10) ]
	static struct UQA_AbilityLogicTask* QA_AbilityRankSkillNightVision(struct ADFMAbilityLogicTemplate* LogicTemplate);

	// Object: Function DFMAbility.QA_AbilityRankSkillNightVision.OnRankSkillFinalCastCheck
	// Flags: [Final|Native|Public]
	// Offset: 0xc459880
	// Params: [ Num(2) Size(0x9) ]
	void OnRankSkillFinalCastCheck(struct UDFMAbilityInstance* Instance, uint8_t bSuccess);
};

// Object: Class DFMAbility.QA_AbilityRankSkillOperate
// Size: 0x228 (Inherited: 0x228)
struct UQA_AbilityRankSkillOperate : UQA_AbilityLogicTask
{
	DEFINE_UE_CLASS_HELPERS(UQA_AbilityRankSkillOperate, "QA_AbilityRankSkillOperate")

	// Object: Function DFMAbility.QA_AbilityRankSkillOperate.QA_AbilityRankSkillOperate
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x10921fe0
	// Params: [ Num(2) Size(0x10) ]
	static struct UQA_AbilityLogicTask* QA_AbilityRankSkillOperate(struct ADFMAbilityLogicTemplate* LogicTemplate);

	// Object: Function DFMAbility.QA_AbilityRankSkillOperate.OnRankSkillFinalCastCheck
	// Flags: [Final|Native|Public]
	// Offset: 0xc459a20
	// Params: [ Num(2) Size(0x9) ]
	void OnRankSkillFinalCastCheck(struct UDFMAbilityInstance* Instance, uint8_t bSuccess);
};

// Object: Class DFMAbility.QA_AbilityRemoveWeapon
// Size: 0x230 (Inherited: 0x228)
struct UQA_AbilityRemoveWeapon : UQA_AbilityLogicTask
{
	DEFINE_UE_CLASS_HELPERS(UQA_AbilityRemoveWeapon, "QA_AbilityRemoveWeapon")

	uint64_t WeaponItemId; // 0x228(0x8)

	// Object: Function DFMAbility.QA_AbilityRemoveWeapon.QA_AbilityRemoveWeapon
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0xc459b1c
	// Params: [ Num(5) Size(0x28) ]
	static struct UQA_AbilityLogicTask* QA_AbilityRemoveWeapon(struct ADFMAbilityLogicTemplate* LogicTemplate, struct FName InLogicName, struct FName WeaponID, int32_t AttachPos);
};

// Object: Class DFMAbility.QA_AbilityRollMove
// Size: 0x228 (Inherited: 0x228)
struct UQA_AbilityRollMove : UQA_AbilityLogicTask
{
	DEFINE_UE_CLASS_HELPERS(UQA_AbilityRollMove, "QA_AbilityRollMove")

	// Object: Function DFMAbility.QA_AbilityRollMove.QA_AbilityRollMove
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x101756d8
	// Params: [ Num(4) Size(0x1E8) ]
	static struct UQA_AbilityLogicTask* QA_AbilityRollMove(struct ADFMAbilityLogicTemplate* LogicTemplate, struct FName InLogicName, struct FGPRollSettingConfig InConfig);
};

// Object: Class DFMAbility.QA_AbilityBreakRollMove
// Size: 0x228 (Inherited: 0x228)
struct UQA_AbilityBreakRollMove : UQA_AbilityLogicTask
{
	DEFINE_UE_CLASS_HELPERS(UQA_AbilityBreakRollMove, "QA_AbilityBreakRollMove")

	// Object: Function DFMAbility.QA_AbilityBreakRollMove.QA_AbilityBreakRollMove
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x109d1cd0
	// Params: [ Num(3) Size(0x18) ]
	static struct UQA_AbilityLogicTask* QA_AbilityBreakRollMove(struct ADFMAbilityLogicTemplate* LogicTemplate, struct FName InLogicName);
};

// Object: Class DFMAbility.QA_AbilityRopeTrigger
// Size: 0x230 (Inherited: 0x228)
struct UQA_AbilityRopeTrigger : UQA_AbilityLogicTask
{
	DEFINE_UE_CLASS_HELPERS(UQA_AbilityRopeTrigger, "QA_AbilityRopeTrigger")

	ERopeTriggerType RopeTriggerType; // 0x228(0x1)
	uint8_t bRescueInMP : 1; // 0x229(0x1), Mask(0x1)
	uint8_t BitPad_0x229_1 : 7; // 0x229(0x1)
	uint8_t Pad_0x22A[0x6]; // 0x22A(0x6)

	// Object: Function DFMAbility.QA_AbilityRopeTrigger.QA_AbilityRopeTrigger
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0xfa3b534
	// Params: [ Num(5) Size(0x20) ]
	static struct UQA_AbilityLogicTask* QA_AbilityRopeTrigger(struct ADFMAbilityLogicTemplate* LogicTemplate, struct FName InLogicName, ERopeTriggerType InRopeTriggerType, uint8_t InRescueInMP);
};

// Object: Class DFMAbility.QA_AbilitySendSupportPackTarget
// Size: 0x248 (Inherited: 0x228)
struct UQA_AbilitySendSupportPackTarget : UQA_AbilityLogicTask
{
	DEFINE_UE_CLASS_HELPERS(UQA_AbilitySendSupportPackTarget, "QA_AbilitySendSupportPackTarget")

	uint8_t InbSelfUse : 1; // 0x228(0x1), Mask(0x1)
	uint8_t BitPad_0x228_1 : 7; // 0x228(0x1)
	uint8_t Pad_0x229[0x7]; // 0x229(0x7)
	struct TArray<ECharingSlot> CharingSlotList; // 0x230(0x10)
	uint8_t Pad_0x240[0x8]; // 0x240(0x8)

	// Object: Function DFMAbility.QA_AbilitySendSupportPackTarget.QA_AbilitySendSupportPackTarget
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0xf2a47fc
	// Params: [ Num(6) Size(0x30) ]
	static struct UQA_AbilityLogicTask* QA_AbilitySendSupportPackTarget(struct ADFMAbilityLogicTemplate* LogicTemplate, struct FName InLogicName, ESupportType SupportType, uint8_t bSelfUse, struct TArray<ECharingSlot> InCharingSlotList);
};

// Object: Class DFMAbility.QA_AbilitySetAppearanceShapeShift
// Size: 0x230 (Inherited: 0x228)
struct UQA_AbilitySetAppearanceShapeShift : UQA_AbilityLogicTask
{
	DEFINE_UE_CLASS_HELPERS(UQA_AbilitySetAppearanceShapeShift, "QA_AbilitySetAppearanceShapeShift")

	EHeroShapeShiftType ShapeShiftType; // 0x228(0x1)
	uint8_t Pad_0x229[0x7]; // 0x229(0x7)

	// Object: Function DFMAbility.QA_AbilitySetAppearanceShapeShift.QA_AbilitySetAppearanceShapeShift
	// Flags: [Final|Native|Static|Private|BlueprintCallable]
	// Offset: 0xfe19d7c
	// Params: [ Num(4) Size(0x20) ]
	static struct UQA_AbilityLogicTask* QA_AbilitySetAppearanceShapeShift(struct ADFMAbilityLogicTemplate* LogicTemplate, struct FName InLogicName, EHeroShapeShiftType ShapeType);
};

// Object: Class DFMAbility.QA_AbilitySetCanBeBreakByInput
// Size: 0x230 (Inherited: 0x228)
struct UQA_AbilitySetCanBeBreakByInput : UQA_AbilityLogicTask
{
	DEFINE_UE_CLASS_HELPERS(UQA_AbilitySetCanBeBreakByInput, "QA_AbilitySetCanBeBreakByInput")

	uint8_t bCanBeBreakByFire : 1; // 0x228(0x1), Mask(0x1)
	uint8_t BitPad_0x228_1 : 7; // 0x228(0x1)
	uint8_t bCanBeBreakBySkillButton : 1; // 0x229(0x1), Mask(0x1)
	uint8_t BitPad_0x229_1 : 7; // 0x229(0x1)
	uint8_t bCanBeBreakByKnockBack : 1; // 0x22A(0x1), Mask(0x1)
	uint8_t BitPad_0x22A_1 : 7; // 0x22A(0x1)
	uint8_t bCanBeBreakByBeingAssassinate : 1; // 0x22B(0x1), Mask(0x1)
	uint8_t BitPad_0x22B_1 : 7; // 0x22B(0x1)
	uint8_t bCanBeBreakByPassiveMove : 1; // 0x22C(0x1), Mask(0x1)
	uint8_t BitPad_0x22C_1 : 7; // 0x22C(0x1)
	uint8_t bCanBeBreakByCrowdControl : 1; // 0x22D(0x1), Mask(0x1)
	uint8_t BitPad_0x22D_1 : 7; // 0x22D(0x1)
	uint8_t Pad_0x22E[0x2]; // 0x22E(0x2)

	// Object: Function DFMAbility.QA_AbilitySetCanBeBreakByInput.QA_AbilitySetCanBeBreakByInput
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0xfddb028
	// Params: [ Num(9) Size(0x20) ]
	static struct UQA_AbilityLogicTask* QA_AbilitySetCanBeBreakByInput(struct ADFMAbilityLogicTemplate* LogicTemplate, struct FName InLogicName, uint8_t CanBeBreakByFire, uint8_t CanBeBreakBySkillButton, uint8_t CanBeBreakByKnockBack, uint8_t CanBeBreakByBeingAssassinate, uint8_t CanBeBreakByPassiveMove, uint8_t CanBeBreakByCrowdControl);
};

// Object: Class DFMAbility.QA_AbilitySetCharAbilityMask
// Size: 0x250 (Inherited: 0x228)
struct UQA_AbilitySetCharAbilityMask : UQA_AbilityLogicTask
{
	DEFINE_UE_CLASS_HELPERS(UQA_AbilitySetCharAbilityMask, "QA_AbilitySetCharAbilityMask")

	uint8_t bEnable : 1; // 0x228(0x1), Mask(0x1)
	uint8_t BitPad_0x228_1 : 7; // 0x228(0x1)
	uint8_t bLeaveRemove : 1; // 0x229(0x1), Mask(0x1)
	uint8_t BitPad_0x229_1 : 7; // 0x229(0x1)
	uint8_t Pad_0x22A[0x6]; // 0x22A(0x6)
	struct FSetCharAbilityMaskData SetCharAbilityMaskData; // 0x230(0x10)
	struct FSetCharAbilityMaskData MPSetCharAbilityMaskData; // 0x240(0x10)

	// Object: Function DFMAbility.QA_AbilitySetCharAbilityMask.QA_AbilitySetCharAbilityMask
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0xed2d5c0
	// Params: [ Num(7) Size(0x48) ]
	static struct UQA_AbilitySetCharAbilityMask* QA_AbilitySetCharAbilityMask(struct ADFMAbilityLogicTemplate* LogicTemplate, struct FName InLogicName, uint8_t bEnableAbility, struct FSetCharAbilityMaskData MaskData, struct FSetCharAbilityMaskData MPMaskData, uint8_t LeaveRemove);
};

// Object: Class DFMAbility.QA_AbilitySetCharCanProneFireMove
// Size: 0x230 (Inherited: 0x228)
struct UQA_AbilitySetCharCanProneFireMove : UQA_AbilityLogicTask
{
	DEFINE_UE_CLASS_HELPERS(UQA_AbilitySetCharCanProneFireMove, "QA_AbilitySetCharCanProneFireMove")

	uint8_t InCanProneFireMove : 1; // 0x228(0x1), Mask(0x1)
	uint8_t BitPad_0x228_1 : 7; // 0x228(0x1)
	uint8_t Pad_0x229[0x7]; // 0x229(0x7)

	// Object: Function DFMAbility.QA_AbilitySetCharCanProneFireMove.QA_AbilitySetCharCanProneFireMove
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0xc459e08
	// Params: [ Num(4) Size(0x20) ]
	static struct UQA_AbilityLogicTask* QA_AbilitySetCharCanProneFireMove(struct ADFMAbilityLogicTemplate* LogicTemplate, struct FName InLogicName, uint8_t CanProneFireMove);
};

// Object: Class DFMAbility.QA_AbilitySetUseC301Launcher
// Size: 0x238 (Inherited: 0x228)
struct UQA_AbilitySetUseC301Launcher : UQA_AbilityLogicTask
{
	DEFINE_UE_CLASS_HELPERS(UQA_AbilitySetUseC301Launcher, "QA_AbilitySetUseC301Launcher")

	uint8_t bC301LauncherFire : 1; // 0x228(0x1), Mask(0x1)
	uint8_t BitPad_0x228_1 : 7; // 0x228(0x1)
	uint8_t Pad_0x229[0x3]; // 0x229(0x3)
	int32_t InLastBulletCnt; // 0x22C(0x4)
	uint8_t bIsFire : 1; // 0x230(0x1), Mask(0x1)
	uint8_t BitPad_0x230_1 : 7; // 0x230(0x1)
	uint8_t Pad_0x231[0x7]; // 0x231(0x7)

	// Object: Function DFMAbility.QA_AbilitySetUseC301Launcher.QA_AbilitySetUseC301Launcher
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0xc459f48
	// Params: [ Num(6) Size(0x28) ]
	static struct UQA_AbilityLogicTask* QA_AbilitySetUseC301Launcher(struct ADFMAbilityLogicTemplate* LogicTemplate, struct FName InLogicName, uint8_t UseC301Launcher, int32_t LastBulletCnt, uint8_t IsFire);
};

// Object: Class DFMAbility.QA_AbilitySetVaultHeightTypeLimit
// Size: 0x230 (Inherited: 0x228)
struct UQA_AbilitySetVaultHeightTypeLimit : UQA_AbilityLogicTask
{
	DEFINE_UE_CLASS_HELPERS(UQA_AbilitySetVaultHeightTypeLimit, "QA_AbilitySetVaultHeightTypeLimit")

	EObstacleHeightType HeightType; // 0x228(0x1)
	uint8_t bReset : 1; // 0x229(0x1), Mask(0x1)
	uint8_t BitPad_0x229_1 : 7; // 0x229(0x1)
	uint8_t Pad_0x22A[0x6]; // 0x22A(0x6)

	// Object: Function DFMAbility.QA_AbilitySetVaultHeightTypeLimit.QA_AbilitySetVaultHeightTypeLimit
	// Flags: [Final|Native|Static|Private|BlueprintCallable]
	// Offset: 0xc45a120
	// Params: [ Num(5) Size(0x20) ]
	static struct UQA_AbilityLogicTask* QA_AbilitySetVaultHeightTypeLimit(struct ADFMAbilityLogicTemplate* LogicTemplate, struct FName InLogicName, EObstacleHeightType Type, uint8_t IsReset);
};

// Object: Class DFMAbility.QA_AbilityShowDetectorMap
// Size: 0x260 (Inherited: 0x228)
struct UQA_AbilityShowDetectorMap : UQA_AbilityLogicTask
{
	DEFINE_UE_CLASS_HELPERS(UQA_AbilityShowDetectorMap, "QA_AbilityShowDetectorMap")

	uint8_t Pad_0x228[0x38]; // 0x228(0x38)

	// Object: Function DFMAbility.QA_AbilityShowDetectorMap.QA_AbilityShowDetectorMap
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0xc45a348
	// Params: [ Num(7) Size(0x28) ]
	static struct UQA_AbilityLogicTask* QA_AbilityShowDetectorMap(struct ADFMAbilityLogicTemplate* LogicTemplate, struct UObject* ActorClass, float DetectorMapRadius, float _SlideSpeedDelay, float _DetectorRadius, float _DetectorRadiusScale);

	// Object: Function DFMAbility.QA_AbilityShowDetectorMap.OnBigMapClose
	// Flags: [Final|Native|Public]
	// Offset: 0xc45a29c
	// Params: [ Num(1) Size(0x1) ]
	void OnBigMapClose(uint8_t Cast);
};

// Object: Class DFMAbility.QA_AbilityShowDetectorMapEx
// Size: 0x270 (Inherited: 0x228)
struct UQA_AbilityShowDetectorMapEx : UQA_AbilityLogicTask
{
	DEFINE_UE_CLASS_HELPERS(UQA_AbilityShowDetectorMapEx, "QA_AbilityShowDetectorMapEx")

	uint8_t Pad_0x228[0x48]; // 0x228(0x48)

	// Object: Function DFMAbility.QA_AbilityShowDetectorMapEx.QA_AbilityShowDetectorMapEx
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x1002bef8
	// Params: [ Num(9) Size(0x30) ]
	static struct UQA_AbilityLogicTask* QA_AbilityShowDetectorMapEx(struct ADFMAbilityLogicTemplate* LogicTemplate, struct UObject* ActorClass, float DetectorMapRadius, float _SlideSpeedDelay, float _DetectorRadius, float _DetectorRadiusScale, float MarkerShowTime, uint8_t IsShowMarkerInMap);

	// Object: Function DFMAbility.QA_AbilityShowDetectorMapEx.OnRankSkillFinalCastCheck
	// Flags: [Final|Native|Public]
	// Offset: 0xc45a5d0
	// Params: [ Num(2) Size(0x9) ]
	void OnRankSkillFinalCastCheck(struct UDFMAbilityInstance* Instance, uint8_t bSuccess);

	// Object: Function DFMAbility.QA_AbilityShowDetectorMapEx.OnBigMapClose
	// Flags: [Final|Native|Public]
	// Offset: 0xc45a524
	// Params: [ Num(1) Size(0x1) ]
	void OnBigMapClose(uint8_t Cast);
};

// Object: Class DFMAbility.QA_AbilityShowPanel
// Size: 0x238 (Inherited: 0x228)
struct UQA_AbilityShowPanel : UQA_AbilityLogicTask
{
	DEFINE_UE_CLASS_HELPERS(UQA_AbilityShowPanel, "QA_AbilityShowPanel")

	uint8_t Pad_0x228[0x10]; // 0x228(0x10)

	// Object: Function DFMAbility.QA_AbilityShowPanel.QA_AbilityShowPanel
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x109b2a58
	// Params: [ Num(6) Size(0x28) ]
	static struct UQA_AbilityLogicTask* QA_AbilityShowPanel(struct ADFMAbilityLogicTemplate* LogicTemplate, struct FName InLogicName, struct FName PanelName, uint8_t Show, uint8_t _Include3p);
};

// Object: Class DFMAbility.QA_AbilityShowTips
// Size: 0x238 (Inherited: 0x228)
struct UQA_AbilityShowTips : UQA_AbilityLogicTask
{
	DEFINE_UE_CLASS_HELPERS(UQA_AbilityShowTips, "QA_AbilityShowTips")

	float TipsTime; // 0x228(0x4)
	struct FName TipsText; // 0x22C(0x8)
	uint8_t InbUseLuaShowTips : 1; // 0x234(0x1), Mask(0x1)
	uint8_t BitPad_0x234_1 : 7; // 0x234(0x1)
	uint8_t Pad_0x235[0x3]; // 0x235(0x3)

	// Object: Function DFMAbility.QA_AbilityShowTips.QA_AbilityShowTips
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0xfad2430
	// Params: [ Num(6) Size(0x28) ]
	static struct UQA_AbilityLogicTask* QA_AbilityShowTips(struct ADFMAbilityLogicTemplate* LogicTemplate, struct FName InLogicName, struct FName Text, float Time, uint8_t bUseLuaShowTips);
};

// Object: Class DFMAbility.QA_AbilityKeyTips
// Size: 0x238 (Inherited: 0x228)
struct UQA_AbilityKeyTips : UQA_AbilityLogicTask
{
	DEFINE_UE_CLASS_HELPERS(UQA_AbilityKeyTips, "QA_AbilityKeyTips")

	struct TArray<struct FRightKeyTipsSkillData> TipsData; // 0x228(0x10)

	// Object: Function DFMAbility.QA_AbilityKeyTips.QA_AbilityKeyTips
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0xc45a724
	// Params: [ Num(4) Size(0x28) ]
	static struct UQA_AbilityLogicTask* QA_AbilityKeyTips(struct ADFMAbilityLogicTemplate* LogicTemplate, struct FName InLogicName, struct TArray<struct FRightKeyTipsSkillData> InTipsData);
};

// Object: Class DFMAbility.QA_AbilitySkillConflictID
// Size: 0x230 (Inherited: 0x228)
struct UQA_AbilitySkillConflictID : UQA_AbilityLogicTask
{
	DEFINE_UE_CLASS_HELPERS(UQA_AbilitySkillConflictID, "QA_AbilitySkillConflictID")

	int32_t SkillConflictID; // 0x228(0x4)
	uint8_t Pad_0x22C[0x4]; // 0x22C(0x4)

	// Object: Function DFMAbility.QA_AbilitySkillConflictID.QA_AbilitySkillConflictID
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0xc45a878
	// Params: [ Num(4) Size(0x20) ]
	static struct UQA_AbilityLogicTask* QA_AbilitySkillConflictID(struct ADFMAbilityLogicTemplate* LogicTemplate, struct FName InLogicName, int32_t ConflictID);
};

// Object: Class DFMAbility.QA_AbilitySkillUIEvent
// Size: 0x230 (Inherited: 0x228)
struct UQA_AbilitySkillUIEvent : UQA_AbilityLogicTask
{
	DEFINE_UE_CLASS_HELPERS(UQA_AbilitySkillUIEvent, "QA_AbilitySkillUIEvent")

	struct FName EventKey; // 0x228(0x8)

	// Object: Function DFMAbility.QA_AbilitySkillUIEvent.QA_AbilitySkillUIEvent
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0xc45a998
	// Params: [ Num(4) Size(0x20) ]
	static struct UQA_AbilityLogicTask* QA_AbilitySkillUIEvent(struct ADFMAbilityLogicTemplate* LogicTemplate, struct FName InLogicName, struct FName Key);
};

// Object: Class DFMAbility.QA_AbilitySoundVisualizationNotify
// Size: 0x230 (Inherited: 0x228)
struct UQA_AbilitySoundVisualizationNotify : UQA_AbilityLogicTask
{
	DEFINE_UE_CLASS_HELPERS(UQA_AbilitySoundVisualizationNotify, "QA_AbilitySoundVisualizationNotify")

	ESoundVisualizationType InEventType; // 0x228(0x1)
	uint8_t Pad_0x229[0x7]; // 0x229(0x7)

	// Object: Function DFMAbility.QA_AbilitySoundVisualizationNotify.QA_AbilitySoundVisualizationNotify
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0xf8da1f0
	// Params: [ Num(4) Size(0x20) ]
	static struct UQA_AbilityLogicTask* QA_AbilitySoundVisualizationNotify(struct ADFMAbilityLogicTemplate* LogicTemplate, struct FName InLogicName, ESoundVisualizationType EventType);
};

// Object: Class DFMAbility.QA_AbilitySpawnActor
// Size: 0x2A0 (Inherited: 0x228)
struct UQA_AbilitySpawnActor : UQA_AbilityLogicTask
{
	DEFINE_UE_CLASS_HELPERS(UQA_AbilitySpawnActor, "QA_AbilitySpawnActor")

	struct FAASpawnActorData SpawnActorData; // 0x228(0x78)

	// Object: Function DFMAbility.QA_AbilitySpawnActor.QA_AbilitySpawnActor
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x101a7994
	// Params: [ Num(4) Size(0x90) ]
	static struct UQA_AbilityLogicTask* QA_AbilitySpawnActor(struct ADFMAbilityLogicTemplate* LogicTemplate, struct FName InLogicName, struct FAASpawnActorData InSpawnActorData);
};

// Object: Class DFMAbility.QA_AbilityNotifySpawnActor
// Size: 0x230 (Inherited: 0x228)
struct UQA_AbilityNotifySpawnActor : UQA_AbilityLogicTask
{
	DEFINE_UE_CLASS_HELPERS(UQA_AbilityNotifySpawnActor, "QA_AbilityNotifySpawnActor")

	uint8_t Pad_0x228[0x8]; // 0x228(0x8)

	// Object: Function DFMAbility.QA_AbilityNotifySpawnActor.QA_AbilityNotifySpawnActor
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0xc45ab28
	// Params: [ Num(4) Size(0x20) ]
	static struct UQA_AbilityLogicTask* QA_AbilityNotifySpawnActor(struct ADFMAbilityLogicTemplate* LogicTemplate, struct FName InLogicName, struct FName InNotifyName);
};

// Object: Class DFMAbility.QA_AbilityStaminaChange
// Size: 0x230 (Inherited: 0x228)
struct UQA_AbilityStaminaChange : UQA_AbilityLogicTask
{
	DEFINE_UE_CLASS_HELPERS(UQA_AbilityStaminaChange, "QA_AbilityStaminaChange")

	EStaminaIndependentChangeType StaminaChangeType; // 0x228(0x1)
	uint8_t Pad_0x229[0x3]; // 0x229(0x3)
	float DeltaSeconds; // 0x22C(0x4)

	// Object: Function DFMAbility.QA_AbilityStaminaChange.QA_AbilityStaminaChange
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x109de064
	// Params: [ Num(5) Size(0x20) ]
	static struct UQA_AbilityLogicTask* QA_AbilityStaminaChange(struct ADFMAbilityLogicTemplate* LogicTemplate, struct FName InLogicName, EStaminaIndependentChangeType InStaminaChangeType, float InDeltaSeconds);
};

// Object: Class DFMAbility.QA_AbilitySwithLeftWeapon
// Size: 0x240 (Inherited: 0x228)
struct UQA_AbilitySwithLeftWeapon : UQA_AbilityLogicTask
{
	DEFINE_UE_CLASS_HELPERS(UQA_AbilitySwithLeftWeapon, "QA_AbilitySwithLeftWeapon")

	int32_t AttachPos; // 0x228(0x4)
	uint8_t Pad_0x22C[0x4]; // 0x22C(0x4)
	uint64_t WeaponItemId; // 0x230(0x8)
	uint8_t bIsEquipWeapon : 1; // 0x238(0x1), Mask(0x1)
	uint8_t BitPad_0x238_1 : 7; // 0x238(0x1)
	uint8_t Pad_0x239[0x3]; // 0x239(0x3)
	int32_t WeaponManagerSlot; // 0x23C(0x4)

	// Object: Function DFMAbility.QA_AbilitySwithLeftWeapon.QA_AbilitySwithLeftWeapon
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0xc45ac50
	// Params: [ Num(7) Size(0x30) ]
	static struct UQA_AbilityLogicTask* QA_AbilitySwithLeftWeapon(struct ADFMAbilityLogicTemplate* LogicTemplate, struct FName InLogicName, struct FName InWeaponId, int32_t InAttachPos, int32_t InWeaponManagerSlot, uint8_t InIsEquipWeapon);
};

// Object: Class DFMAbility.QA_AbilitySwithWeapon
// Size: 0x238 (Inherited: 0x228)
struct UQA_AbilitySwithWeapon : UQA_AbilityLogicTask
{
	DEFINE_UE_CLASS_HELPERS(UQA_AbilitySwithWeapon, "QA_AbilitySwithWeapon")

	int32_t InAttachPos; // 0x228(0x4)
	uint8_t InIncludeSkillWeapon : 1; // 0x22C(0x1), Mask(0x1)
	uint8_t BitPad_0x22C_1 : 7; // 0x22C(0x1)
	uint8_t ForceSkillEnd : 1; // 0x22D(0x1), Mask(0x1)
	uint8_t BitPad_0x22D_1 : 7; // 0x22D(0x1)
	EAbilitySwithWeaponType SwitchWeaponType; // 0x22E(0x1)
	EWeaponSwitchType WeaponEquipSwitchType; // 0x22F(0x1)
	uint8_t InOnlySwitchPosWeapon : 1; // 0x230(0x1), Mask(0x1)
	uint8_t BitPad_0x230_1 : 7; // 0x230(0x1)
	uint8_t InCoverPendingSwitch : 1; // 0x231(0x1), Mask(0x1)
	uint8_t BitPad_0x231_1 : 7; // 0x231(0x1)
	uint8_t bSkipInSwim : 1; // 0x232(0x1), Mask(0x1)
	uint8_t BitPad_0x232_1 : 7; // 0x232(0x1)
	uint8_t Pad_0x233[0x5]; // 0x233(0x5)

	// Object: Function DFMAbility.QA_AbilitySwithWeapon.QA_AbilitySwithWeapon
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x1013a9ac
	// Params: [ Num(11) Size(0x28) ]
	static struct UQA_AbilityLogicTask* QA_AbilitySwithWeapon(struct ADFMAbilityLogicTemplate* LogicTemplate, struct FName InLogicName, EAbilitySwithWeaponType SwitchType, int32_t AttachPos, uint8_t OnlySwitchPosWeapon, uint8_t CoverPendingSwitch, EWeaponSwitchType InWeaponEquipSwitchType, uint8_t IncludeSkillWeapon, uint8_t InForceSkillEnd, uint8_t InSkipInSwim);
};

// Object: Class DFMAbility.QA_AbilityTrigger
// Size: 0x238 (Inherited: 0x228)
struct UQA_AbilityTrigger : UQA_AbilityLogicTask
{
	DEFINE_UE_CLASS_HELPERS(UQA_AbilityTrigger, "QA_AbilityTrigger")

	struct AActor* Trigger; // 0x228(0x8)
	uint8_t Pad_0x230[0x8]; // 0x230(0x8)

	// Object: Function DFMAbility.QA_AbilityTrigger.QA_AbilityTagTrigger
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0xc45cf38
	// Params: [ Num(5) Size(0x28) ]
	static struct UQA_AbilityLogicTask* QA_AbilityTagTrigger(struct ADFMAbilityLogicTemplate* LogicTemplate, struct FName InLogicName, EGPQuestActionTriggerType Type, struct FName QATag);
};

// Object: Class DFMAbility.QA_AbilityEnableUseTogether
// Size: 0x230 (Inherited: 0x228)
struct UQA_AbilityEnableUseTogether : UQA_AbilityLogicTask
{
	DEFINE_UE_CLASS_HELPERS(UQA_AbilityEnableUseTogether, "QA_AbilityEnableUseTogether")

	uint8_t bEnable : 1; // 0x228(0x1), Mask(0x1)
	uint8_t BitPad_0x228_1 : 7; // 0x228(0x1)
	uint8_t Pad_0x229[0x7]; // 0x229(0x7)

	// Object: Function DFMAbility.QA_AbilityEnableUseTogether.QA_AbilityEnableUseTogether
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0xc45d098
	// Params: [ Num(4) Size(0x20) ]
	static struct UQA_AbilityLogicTask* QA_AbilityEnableUseTogether(struct ADFMAbilityLogicTemplate* LogicTemplate, struct FName InLogicName, uint8_t Enable);
};

// Object: Class DFMAbility.QA_AbilityCastSkill
// Size: 0x2A0 (Inherited: 0x228)
struct UQA_AbilityCastSkill : UQA_AbilityLogicTask
{
	DEFINE_UE_CLASS_HELPERS(UQA_AbilityCastSkill, "QA_AbilityCastSkill")

	uint8_t Pad_0x228[0x10]; // 0x228(0x10)
	struct FMulticastInlineDelegate CastSkillDone; // 0x238(0x10)
	struct TMap<int32_t, struct FAbilityCastSkillData> PlayedSkills; // 0x248(0x50)
	int32_t CastSkillid; // 0x298(0x4)
	uint8_t Pad_0x29C[0x4]; // 0x29C(0x4)

	// Object: Function DFMAbility.QA_AbilityCastSkill.QA_AbilityCastSkill
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0xc45d334
	// Params: [ Num(4) Size(0x20) ]
	static struct UQA_AbilityCastSkill* QA_AbilityCastSkill(struct ADFMAbilityLogicTemplate* LogicTemplate, struct FName InLogicName, int32_t SkillId);

	// Object: Function DFMAbility.QA_AbilityCastSkill.OnGPPlayerAbilityCast
	// Flags: [Final|Native|Public]
	// Offset: 0xc45d1d8
	// Params: [ Num(4) Size(0x11) ]
	void OnGPPlayerAbilityCast(struct AGPCharacter* Player, ECharingSlot Slot, int32_t SkillId, uint8_t Start);
};

// Object: Class DFMAbility.QA_AbilityHookSkill
// Size: 0x280 (Inherited: 0x228)
struct UQA_AbilityHookSkill : UQA_AbilityLogicTask
{
	DEFINE_UE_CLASS_HELPERS(UQA_AbilityHookSkill, "QA_AbilityHookSkill")

	uint8_t Pad_0x228[0x10]; // 0x228(0x10)
	struct FMulticastInlineDelegate SkillPress; // 0x238(0x10)
	struct FMulticastInlineDelegate SkillClick; // 0x248(0x10)
	struct FMulticastInlineDelegate SkillLongPress; // 0x258(0x10)
	struct FMulticastInlineDelegate SkillRelease; // 0x268(0x10)
	int32_t CastSkillid; // 0x278(0x4)
	uint8_t Pad_0x27C[0x4]; // 0x27C(0x4)

	// Object: Function DFMAbility.QA_AbilityHookSkill.QA_AbilityHookSkill
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0xc45d460
	// Params: [ Num(4) Size(0x20) ]
	static struct UQA_AbilityHookSkill* QA_AbilityHookSkill(struct ADFMAbilityLogicTemplate* LogicTemplate, struct FName InLogicName, int32_t SkillId);
};

// Object: Class DFMAbility.QA_AbilityUseSupportPack
// Size: 0x2A0 (Inherited: 0x228)
struct UQA_AbilityUseSupportPack : UQA_AbilityLogicTask
{
	DEFINE_UE_CLASS_HELPERS(UQA_AbilityUseSupportPack, "QA_AbilityUseSupportPack")

	uint8_t Pad_0x228[0xC]; // 0x228(0xC)
	ESupportType InSupportType; // 0x234(0x1)
	uint8_t bIsCondCheck : 1; // 0x235(0x1), Mask(0x1)
	uint8_t BitPad_0x235_1 : 7; // 0x235(0x1)
	uint8_t Pad_0x236[0xA]; // 0x236(0xA)
	struct TMap<struct FName, struct FAbilityUseSupportPack> AbilityDelayData; // 0x240(0x50)
	struct FMulticastInlineDelegate OnCastFailed; // 0x290(0x10)

	// Object: Function DFMAbility.QA_AbilityUseSupportPack.QA_AbilityUseSupportPack
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0xfa826dc
	// Params: [ Num(5) Size(0x20) ]
	static struct UQA_AbilityUseSupportPack* QA_AbilityUseSupportPack(struct ADFMAbilityLogicTemplate* LogicTemplate, struct FName InLogicName, ESupportType SupportType, uint8_t bCondCheck);

	// Object: Function DFMAbility.QA_AbilityUseSupportPack.OnAnimTimerOut
	// Flags: [Final|Native|Public]
	// Offset: 0xc45d580
	// Params: [ Num(1) Size(0x4) ]
	void OnAnimTimerOut(int32_t skillEntityIndex);
};

// Object: Class DFMAbility.QA_AbilityWantCharacterSpeak
// Size: 0x238 (Inherited: 0x228)
struct UQA_AbilityWantCharacterSpeak : UQA_AbilityLogicTask
{
	DEFINE_UE_CLASS_HELPERS(UQA_AbilityWantCharacterSpeak, "QA_AbilityWantCharacterSpeak")

	ECharacterAudioType VoiceType; // 0x228(0x1)
	uint8_t Pad_0x229[0x3]; // 0x229(0x3)
	struct FName VoiceName; // 0x22C(0x8)
	uint8_t Pad_0x234[0x4]; // 0x234(0x4)

	// Object: Function DFMAbility.QA_AbilityWantCharacterSpeak.QA_AbilityWantCharacterSpeak
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0xfdb36d0
	// Params: [ Num(5) Size(0x28) ]
	static struct UQA_AbilityLogicTask* QA_AbilityWantCharacterSpeak(struct ADFMAbilityLogicTemplate* LogicTemplate, struct FName InLogicName, ECharacterAudioType InVoiceType, struct FName InVoiceName);
};

// Object: Class DFMAbility.QA_AbilityWeaponProjectileActor
// Size: 0x2A8 (Inherited: 0x228)
struct UQA_AbilityWeaponProjectileActor : UQA_AbilityLogicTask
{
	DEFINE_UE_CLASS_HELPERS(UQA_AbilityWeaponProjectileActor, "QA_AbilityWeaponProjectileActor")

	struct FAbilityWeaponProjectileData RowData; // 0x228(0x80)

	// Object: Function DFMAbility.QA_AbilityWeaponProjectileActor.QA_AbilityWeaponProjectileActor
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x109e0248
	// Params: [ Num(4) Size(0x98) ]
	static struct UQA_AbilityLogicTask* QA_AbilityWeaponProjectileActor(struct ADFMAbilityLogicTemplate* LogicTemplate, struct FName InLogicName, struct FAbilityWeaponProjectileData ProjectileData);
};

// Object: Class DFMAbility.RebornFlag
// Size: 0x650 (Inherited: 0x588)
struct ARebornFlag : ADFMAbilityLevelActor
{
	DEFINE_UE_CLASS_HELPERS(ARebornFlag, "RebornFlag")

	uint8_t Pad_0x588[0x30]; // 0x588(0x30)
	ERebornFlagType RebornFlagType; // 0x5B8(0x1)
	uint8_t bOnlyTeammate : 1; // 0x5B9(0x1), Mask(0x1)
	uint8_t BitPad_0x5B9_1 : 7; // 0x5B9(0x1)
	uint8_t Pad_0x5BA[0x6]; // 0x5BA(0x6)
	struct UGPAudioEventAsset* DeployAudio; // 0x5C0(0x8)
	struct UGPAudioEventAsset* DestroyAudio; // 0x5C8(0x8)
	struct UGPAudioEventAsset* LoopStartAudio; // 0x5D0(0x8)
	struct UGPAudioEventAsset* LoopStopAudio; // 0x5D8(0x8)
	struct FName FlashingEffectId; // 0x5E0(0x8)
	struct FName DestroyEffectId; // 0x5E8(0x8)
	float AutoDestroyTime; // 0x5F0(0x4)
	int32_t ConfigAvaliableCount; // 0x5F4(0x4)
	struct FName OutLineEffectMeshTag; // 0x5F8(0x8)
	float CreateTime; // 0x600(0x4)
	float RemainTimeProgress; // 0x604(0x4)
	uint8_t Pad_0x608[0x8]; // 0x608(0x8)
	struct UFXResourceContainerComponent* FlashingEffect; // 0x610(0x8)
	uint8_t Pad_0x618[0x4]; // 0x618(0x4)
	float RebornRange; // 0x61C(0x4)
	uint8_t Pad_0x620[0x8]; // 0x620(0x8)
	struct USkeletalMeshComponent* OutLineEffectMesh; // 0x628(0x8)
	ETacticalEquipmentMarkerType ChildMarkerType; // 0x630(0x1)
	uint8_t Pad_0x631[0x3]; // 0x631(0x3)
	struct FVector MarkerOffset; // 0x634(0xC)
	struct UAbilityRebornFlagMapIconViewController* IconCtrl; // 0x640(0x8)
	struct UGeneralSignificanceComponent* Significance; // 0x648(0x8)

	// Object: Function DFMAbility.RebornFlag.OnSectorTransEnd
	// Flags: [Final|Native|Public]
	// Offset: 0xc45da78
	// Params: [ Num(1) Size(0x4) ]
	void OnSectorTransEnd(int32_t ActiveID);

	// Object: Function DFMAbility.RebornFlag.OnLoadedAllControllerClass
	// Flags: [Final|Native|Public]
	// Offset: 0xc45da64
	// Params: [ Num(0) Size(0x0) ]
	void OnLoadedAllControllerClass();

	// Object: Function DFMAbility.RebornFlag.OnCheckAutoDestroy
	// Flags: [Final|Native|Protected]
	// Offset: 0xc45da50
	// Params: [ Num(0) Size(0x0) ]
	void OnCheckAutoDestroy();

	// Object: Function DFMAbility.RebornFlag.OnCharacterExpertIdChanged
	// Flags: [Final|Native|Public]
	// Offset: 0xc45d974
	// Params: [ Num(2) Size(0x8) ]
	void OnCharacterExpertIdChanged(int32_t OldExpertId, int32_t CurExpertId);

	// Object: Function DFMAbility.RebornFlag.OnActorHitCallback
	// Flags: [Final|Native|Protected|HasOutParms|HasDefaults]
	// Offset: 0xc45d7f8
	// Params: [ Num(4) Size(0xA4) ]
	void OnActorHitCallback(struct AActor* SelfActor, struct AActor* OtherActor, struct FVector NormalImpulse, const struct FHitResult& Hit);

	// Object: Function DFMAbility.RebornFlag.IsSameCamp
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xf8ccd50
	// Params: [ Num(2) Size(0x9) ]
	uint8_t IsSameCamp(struct APlayerController* OwnerPlayer);

	// Object: Function DFMAbility.RebornFlag.CheckIsInsideWalkableSplines
	// Flags: [Final|Native|Public]
	// Offset: 0xc45d7e4
	// Params: [ Num(0) Size(0x0) ]
	void CheckIsInsideWalkableSplines();

	// Object: Function DFMAbility.RebornFlag.CheckDiffTeamC303
	// Flags: [Final|Native|Protected]
	// Offset: 0xc45d734
	// Params: [ Num(2) Size(0x9) ]
	uint8_t CheckDiffTeamC303(struct AGPCharacter* RebornCharacter);
};

// Object: Class DFMAbility.RankSkillRebornFlag
// Size: 0x658 (Inherited: 0x650)
struct ARankSkillRebornFlag : ARebornFlag
{
	DEFINE_UE_CLASS_HELPERS(ARankSkillRebornFlag, "RankSkillRebornFlag")

	uint8_t Pad_0x650[0x8]; // 0x650(0x8)
};

// Object: Class DFMAbility.DFMRemoteControlledVehicle
// Size: 0x1F20 (Inherited: 0x1E40)
struct ADFMRemoteControlledVehicle : ADFMTank
{
	DEFINE_UE_CLASS_HELPERS(ADFMRemoteControlledVehicle, "DFMRemoteControlledVehicle")

	int32_t SkillId; // 0x1E3C(0x4)
	float MaxDistance; // 0x1E40(0x4)
	float OutOfRangeDestroyTime; // 0x1E44(0x4)
	float ControlTime; // 0x1E48(0x4)
	struct TArray<int32_t> DestroyOnControlBuffIds; // 0x1E50(0x10)
	struct TArray<int32_t> DestroyExitInXSecondsBuffIds; // 0x1E60(0x10)
	struct TArray<int32_t> DestroyOutOfRangeBuffIds; // 0x1E70(0x10)
	struct TArray<int32_t> DestroyUnderWaterOrDriveCrashBuffIds; // 0x1E80(0x10)
	float DestroyExitInXSeconds; // 0x1E90(0x4)
	float UnderWaterDestroyDistance; // 0x1E94(0x4)
	struct TArray<int32_t> VehicleDestroyBuffToOwnerIds; // 0x1E98(0x10)
	float OpenDoorTraceForward; // 0x1EA8(0x4)
	float OpenDoorTraceBackward; // 0x1EAC(0x4)
	struct FVector OpenDoorTraceBoxHalfExtend; // 0x1EB0(0xC)
	uint8_t Pad_0x1EBC[0x4]; // 0x1EBC(0x4)
	struct TSoftObjectPtr<ADFMCharacter> CharacterOwner; // 0x1EC0(0x28)
	uint8_t Pad_0x1EE8[0x38]; // 0x1EE8(0x38)
};

// Object: Class DFMAbility.RemoteVehicleMarkSelfBuffEntity
// Size: 0x1C0 (Inherited: 0x1C0)
struct URemoteVehicleMarkSelfBuffEntity : UMarkOutlineBuffEntityBase
{
	DEFINE_UE_CLASS_HELPERS(URemoteVehicleMarkSelfBuffEntity, "RemoteVehicleMarkSelfBuffEntity")
};

// Object: Class DFMAbility.RopeTest
// Size: 0x3D0 (Inherited: 0x370)
struct ARopeTest : AActor
{
	DEFINE_UE_CLASS_HELPERS(ARopeTest, "RopeTest")

	uint8_t Pad_0x370[0x8]; // 0x370(0x8)
	struct TArray<struct FVector> KeyPoint; // 0x378(0x10)
	struct TArray<struct FVector> ExtraKeyPoint; // 0x388(0x10)
	struct ACHARACTER* CurChar; // 0x398(0x8)
	struct FVector CurLoc; // 0x3A0(0xC)
	uint8_t bUseCapsuleRadius : 1; // 0x3AC(0x1), Mask(0x1)
	uint8_t BitPad_0x3AC_1 : 7; // 0x3AC(0x1)
	uint8_t Pad_0x3AD[0x3]; // 0x3AD(0x3)
	float Step; // 0x3B0(0x4)
	uint8_t bUseCapsuleTrace : 1; // 0x3B4(0x1), Mask(0x1)
	uint8_t BitPad_0x3B4_1 : 7; // 0x3B4(0x1)
	uint8_t Pad_0x3B5[0x3]; // 0x3B5(0x3)
	float CapsuleRadius; // 0x3B8(0x4)
	float CapsuleHeight; // 0x3BC(0x4)
	uint8_t bNeedExtraLine : 1; // 0x3C0(0x1), Mask(0x1)
	uint8_t BitPad_0x3C0_1 : 7; // 0x3C0(0x1)
	uint8_t Pad_0x3C1[0x7]; // 0x3C1(0x7)
	struct AActor* SpawnClass; // 0x3C8(0x8)

	// Object: Function DFMAbility.RopeTest.StartTest
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xc45dcfc
	// Params: [ Num(1) Size(0x8) ]
	void StartTest(struct ACHARACTER* TestChar);

	// Object: Function DFMAbility.RopeTest.EndTest
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xc45dce8
	// Params: [ Num(0) Size(0x0) ]
	void EndTest();
};

// Object: Class DFMAbility.SayyidCrossbowCrossHairHudController
// Size: 0x90 (Inherited: 0x80)
struct USayyidCrossbowCrossHairHudController : UGPBaseHudController
{
	DEFINE_UE_CLASS_HELPERS(USayyidCrossbowCrossHairHudController, "SayyidCrossbowCrossHairHudController")

	struct USayyidCrossbowCrossHairHudView* View; // 0x80(0x8)
	uint8_t Pad_0x88[0x8]; // 0x88(0x8)

	// Object: Function DFMAbility.SayyidCrossbowCrossHairHudController.OnArrowNeedReboundChanged
	// Flags: [Final|Native|Public]
	// Offset: 0xc45ddcc
	// Params: [ Num(1) Size(0x1) ]
	void OnArrowNeedReboundChanged(uint8_t bIsRebound);
};

// Object: Class DFMAbility.SayyidCrossbowCrossHairHudView
// Size: 0x400 (Inherited: 0x400)
struct USayyidCrossbowCrossHairHudView : UGPBaseHudView
{
	DEFINE_UE_CLASS_HELPERS(USayyidCrossbowCrossHairHudView, "SayyidCrossbowCrossHairHudView")

	// Object: Function DFMAbility.SayyidCrossbowCrossHairHudView.SetIconType
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xc45defc
	// Params: [ Num(1) Size(0x4) ]
	void SetIconType(int32_t InIconType);

	// Object: Function DFMAbility.SayyidCrossbowCrossHairHudView.BP_SetIconType
	// Flags: [Event|Protected|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(1) Size(0x4) ]
	void BP_SetIconType(int32_t IconType);
};

// Object: Class DFMAbility.SayyidCrossbowCrossHairUIController
// Size: 0xB8 (Inherited: 0xA8)
struct USayyidCrossbowCrossHairUIController : UBaseUIController
{
	DEFINE_UE_CLASS_HELPERS(USayyidCrossbowCrossHairUIController, "SayyidCrossbowCrossHairUIController")

	struct USayyidCrossbowCrossHairUIView* CrossbowView; // 0xA8(0x8)
	uint8_t Pad_0xB0[0x8]; // 0xB0(0x8)

	// Object: Function DFMAbility.SayyidCrossbowCrossHairUIController.OnArrowNeedReboundChanged
	// Flags: [Final|Native|Public]
	// Offset: 0xc45dfa8
	// Params: [ Num(1) Size(0x1) ]
	void OnArrowNeedReboundChanged(uint8_t bIsRebound);
};

// Object: Class DFMAbility.SayyidCrossbowCrossHairUIView
// Size: 0x468 (Inherited: 0x460)
struct USayyidCrossbowCrossHairUIView : UDFMBaseUIView
{
	DEFINE_UE_CLASS_HELPERS(USayyidCrossbowCrossHairUIView, "SayyidCrossbowCrossHairUIView")

	uint8_t Pad_0x460[0x8]; // 0x460(0x8)

	// Object: Function DFMAbility.SayyidCrossbowCrossHairUIView.SetIconType
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xc45e0d8
	// Params: [ Num(1) Size(0x4) ]
	void SetIconType(int32_t InIconType);

	// Object: Function DFMAbility.SayyidCrossbowCrossHairUIView.BP_SetIconType
	// Flags: [Event|Protected|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(1) Size(0x4) ]
	void BP_SetIconType(int32_t IconType);
};

// Object: Class DFMAbility.SayyidCrossbowDataComponentAnim
// Size: 0xC70 (Inherited: 0xC70)
struct USayyidCrossbowDataComponentAnim : UModularWeaponDataComponentAnim
{
	DEFINE_UE_CLASS_HELPERS(USayyidCrossbowDataComponentAnim, "SayyidCrossbowDataComponentAnim")

	// Object: Function DFMAbility.SayyidCrossbowDataComponentAnim.OnBowBounceStateChanged
	// Flags: [Final|Native|Private]
	// Offset: 0xc45e184
	// Params: [ Num(1) Size(0x1) ]
	void OnBowBounceStateChanged(uint8_t bBounceEnabled);
};

// Object: Class DFMAbility.SayyidCrossbowFuncComponent
// Size: 0x1E0 (Inherited: 0x168)
struct USayyidCrossbowFuncComponent : UGPWeaponFuncComponentBase
{
	DEFINE_UE_CLASS_HELPERS(USayyidCrossbowFuncComponent, "SayyidCrossbowFuncComponent")

	struct FName CrossHairUIName; // 0x164(0x8)
	struct FName BounceTipsUIName; // 0x16C(0x8)
	struct FName BowControlButtonName; // 0x174(0x8)
	struct FName ArrowEffectName; // 0x17C(0x8)
	struct FName AttachSocketName; // 0x184(0x8)
	struct FName LightEffectName; // 0x18C(0x8)
	struct FName LightEffectSocketName; // 0x194(0x8)
	struct FName BowEffectName; // 0x19C(0x8)
	struct FName BowEffectSocketName; // 0x1A4(0x8)
	struct FName SwitchArrowsFlameAudioName; // 0x1AC(0x8)
	struct FName TurnOnArrowBounceVoiceName; // 0x1B4(0x8)
	struct UFXResourceContainerComponent* ArrowEffectComponent; // 0x1C0(0x8)
	uint8_t Pad_0x1C8[0x8]; // 0x1C8(0x8)
	struct UFXResourceContainerComponent* LightEffectComponent; // 0x1D0(0x8)
	uint8_t Pad_0x1D8[0x8]; // 0x1D8(0x8)

	// Object: Function DFMAbility.SayyidCrossbowFuncComponent.OnBowBounceStateChanged
	// Flags: [Final|Native|Public]
	// Offset: 0xc45e244
	// Params: [ Num(1) Size(0x1) ]
	void OnBowBounceStateChanged(uint8_t bBounceEnabled);
};

// Object: Class DFMAbility.SayyidFireArrowProjectile
// Size: 0x18B0 (Inherited: 0x1890)
struct ASayyidFireArrowProjectile : AAbilityWeaponThrowableBullet
{
	DEFINE_UE_CLASS_HELPERS(ASayyidFireArrowProjectile, "SayyidFireArrowProjectile")

	struct ADFMAbilityIncendiaryArea* IncendiaryAreaClass; // 0x1888(0x8)
	struct FName FireProjectileEffectId; // 0x1890(0x8)
	struct UFXResourceContainerComponent* FireProjectileFXComp; // 0x18A0(0x8)
	uint8_t Pad_0x18A8[0x8]; // 0x18A8(0x8)

	// Object: Function DFMAbility.SayyidFireArrowProjectile.SpawnIncendiaryArea
	// Flags: [Final|Native|Protected|HasOutParms|HasDefaults]
	// Offset: 0xc45e304
	// Params: [ Num(1) Size(0xC) ]
	void SpawnIncendiaryArea(const struct FVector& Location);
};

// Object: Class DFMAbility.SpiderAnimInstance
// Size: 0x2A0 (Inherited: 0x280)
struct USpiderAnimInstance : UGPAnimInstanceBase
{
	DEFINE_UE_CLASS_HELPERS(USpiderAnimInstance, "SpiderAnimInstance")

	struct ASpiderBase* SpiderOwner; // 0x280(0x8)
	uint8_t bIsFalling : 1; // 0x288(0x1), Mask(0x1)
	uint8_t BitPad_0x288_1 : 7; // 0x288(0x1)
	uint8_t Pad_0x289[0x3]; // 0x289(0x3)
	float Speed; // 0x28C(0x4)
	ESpiderState SpiderState; // 0x290(0x1)
	uint8_t Pad_0x291[0xF]; // 0x291(0xF)
};

// Object: Class DFMAbility.SpiderBase
// Size: 0x728 (Inherited: 0x4F8)
struct ASpiderBase : ADFMAbilityActor
{
	DEFINE_UE_CLASS_HELPERS(ASpiderBase, "SpiderBase")

	uint8_t Pad_0x4F8[0x48]; // 0x4F8(0x48)
	struct UCapsuleComponent* CapsuleComponent; // 0x540(0x8)
	struct USpiderMovementComponent* SpiderMovementComponent; // 0x548(0x8)
	struct USkeletalMeshComponent* SkeletalMesh; // 0x550(0x8)
	struct USceneComponent* MeshRoot; // 0x558(0x8)
	float MaxHealth; // 0x560(0x4)
	float TraceRadius; // 0x564(0x4)
	uint8_t bAttackRobotAI : 1; // 0x568(0x1), Mask(0x1)
	uint8_t BitPad_0x568_1 : 7; // 0x568(0x1)
	uint8_t bAttackImpendingDeathSOL : 1; // 0x569(0x1), Mask(0x1)
	uint8_t BitPad_0x569_1 : 7; // 0x569(0x1)
	uint8_t Pad_0x56A[0x2]; // 0x56A(0x2)
	float DetectDist; // 0x56C(0x4)
	float DetectAngle; // 0x570(0x4)
	float DetectHeight; // 0x574(0x4)
	float CheckAttackDist; // 0x578(0x4)
	float CheckAttackAngle; // 0x57C(0x4)
	float CheckAttackHeight; // 0x580(0x4)
	float AttackReadyTime; // 0x584(0x4)
	float AttackTime; // 0x588(0x4)
	ESpiderAttackMode AttackMode; // 0x58C(0x1)
	uint8_t Pad_0x58D[0x3]; // 0x58D(0x3)
	float AttackDist; // 0x590(0x4)
	float AttackAngle; // 0x594(0x4)
	float AttackHeight; // 0x598(0x4)
	float MaxAttackNum; // 0x59C(0x4)
	struct ASpiderNetProjectile* NetProjectileClass; // 0x5A0(0x8)
	uint64_t HitFXId; // 0x5A8(0x8)
	int32_t ExplosionAttackerValueId; // 0x5B0(0x4)
	uint8_t Pad_0x5B4[0x4]; // 0x5B4(0x4)
	struct TArray<int32_t> ExplosionBuffAdd; // 0x5B8(0x10)
	struct FName StaggerName; // 0x5C8(0x8)
	float IgnoreLockedTargetTime; // 0x5D0(0x4)
	float DelayDestroyedTime; // 0x5D4(0x4)
	float MaxLifeTime; // 0x5D8(0x4)
	float AwakeTime; // 0x5DC(0x4)
	float UnderWaterDestroyDistance; // 0x5E0(0x4)
	float EMPAffectTime; // 0x5E4(0x4)
	struct FName EMPEffect; // 0x5E8(0x8)
	struct FName DestroyedEffect; // 0x5F0(0x8)
	struct FName MoveAudio; // 0x5F8(0x8)
	struct FName MoveRtpcName; // 0x600(0x8)
	float BounceMinInterval; // 0x608(0x4)
	float BounceIgnoreDis; // 0x60C(0x4)
	struct FName BounceAudio; // 0x610(0x8)
	struct FName HitVo; // 0x618(0x8)
	uint8_t bEnableAttachParentInitial : 1; // 0x620(0x1), Mask(0x1)
	uint8_t BitPad_0x620_1 : 7; // 0x620(0x1)
	uint8_t Pad_0x621[0xF]; // 0x621(0xF)
	struct TScriptInterface<IGPWeaponInterface> WeaponOwner; // 0x630(0x10)
	uint8_t Pad_0x640[0x60]; // 0x640(0x60)
	struct TMap<struct AActor*, float> IgnoreTargetMap; // 0x6A0(0x50)
	struct TArray<struct ASpiderBase*> BrotherSpiders; // 0x6F0(0x10)
	ESpiderState SpiderState; // 0x700(0x1)
	uint8_t Pad_0x701[0x1B]; // 0x701(0x1B)
	int32_t ThreatId; // 0x71C(0x4)
	EDFMMapIconType MapIconType; // 0x720(0x1)
	ETacticalEquipmentMarkerType TacticalEquipmentMarker; // 0x721(0x1)
	uint8_t Pad_0x722[0x6]; // 0x722(0x6)

	// Object: Function DFMAbility.SpiderBase.SpawnProjectileToTarget
	// Flags: [Final|Native|Protected|HasDefaults]
	// Offset: 0xc462058
	// Params: [ Num(2) Size(0x18) ]
	void SpawnProjectileToTarget(struct FVector TargetLocation, struct AActor* Target);

	// Object: Function DFMAbility.SpiderBase.ShowHitAbilityActorMarker
	// Flags: [Final|Native|Public|HasOutParms]
	// Offset: 0xc461f44
	// Params: [ Num(2) Size(0x8A8) ]
	void ShowHitAbilityActorMarker(const uint8_t& bIsServer, const struct FDamageResultInfo& DamageResult);

	// Object: Function DFMAbility.SpiderBase.SetFollowTarget
	// Flags: [Native|Public|HasDefaults]
	// Offset: 0xc461e18
	// Params: [ Num(3) Size(0x18) ]
	void SetFollowTarget(struct AActor* Target, uint8_t bFollowByNav, struct FVector HeadLoc);

	// Object: Function DFMAbility.SpiderBase.PlayDestroyEffect
	// Flags: [Final|Native|Protected|BlueprintCallable]
	// Offset: 0x10ac8fec
	// Params: [ Num(1) Size(0x8) ]
	void PlayDestroyEffect(struct FName DestroyEffect);

	// Object: Function DFMAbility.SpiderBase.OnSpiderMoveModeChange
	// Flags: [Native|Event|Protected|BlueprintEvent]
	// Offset: 0x1019838c
	// Params: [ Num(2) Size(0x2) ]
	void OnSpiderMoveModeChange(ESpiderMoveMode OldMoveMode, ESpiderMoveMode NewMoveMode);

	// Object: Function DFMAbility.SpiderBase.OnSpiderBounce
	// Flags: [Native|Event|Protected|HasDefaults|BlueprintEvent]
	// Offset: 0xc461d6c
	// Params: [ Num(1) Size(0xC) ]
	void OnSpiderBounce(struct FVector BounceLocation);

	// Object: Function DFMAbility.SpiderBase.OnRep_SpiderState
	// Flags: [Final|Native|Protected]
	// Offset: 0xfb826bc
	// Params: [ Num(0) Size(0x0) ]
	void OnRep_SpiderState();

	// Object: Function DFMAbility.SpiderBase.OnClientStateChange
	// Flags: [Native|Event|Protected|BlueprintEvent]
	// Offset: 0xc461d50
	// Params: [ Num(0) Size(0x0) ]
	void OnClientStateChange();

	// Object: Function DFMAbility.SpiderBase.MulticastFollowTrack
	// Flags: [Net|NetReliableNative|Event|NetMulticast|Protected]
	// Offset: 0xc461c60
	// Params: [ Num(2) Size(0x14) ]
	void MulticastFollowTrack(struct TArray<struct FVector> FollowTrack, int32_t FollowIndex);

	// Object: Function DFMAbility.SpiderBase.IsLocalEnemy
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0xff58ed0
	// Params: [ Num(1) Size(0x1) ]
	uint8_t IsLocalEnemy();

	// Object: Function DFMAbility.SpiderBase.InitBrotherSpiders
	// Flags: [Final|Native|Public]
	// Offset: 0xc461b68
	// Params: [ Num(1) Size(0x10) ]
	void InitBrotherSpiders(struct TArray<struct ASpiderBase*> Brothers);

	// Object: Function DFMAbility.SpiderBase.GetSpiderState
	// Flags: [Final|Native|Public|Const]
	// Offset: 0xc461b4c
	// Params: [ Num(1) Size(0x1) ]
	ESpiderState GetSpiderState();

	// Object: Function DFMAbility.SpiderBase.GetAttackLocation
	// Flags: [Native|Event|Public|HasDefaults|BlueprintEvent]
	// Offset: 0xc461b0c
	// Params: [ Num(1) Size(0xC) ]
	struct FVector GetAttackLocation();

	// Object: Function DFMAbility.SpiderBase.EMPRecover
	// Flags: [Net|NetReliableNative|Event|NetMulticast|Protected]
	// Offset: 0xc461af0
	// Params: [ Num(0) Size(0x0) ]
	void EMPRecover();

	// Object: Function DFMAbility.SpiderBase.EMPDisable
	// Flags: [Net|NetReliableNative|Event|NetMulticast|Protected]
	// Offset: 0xc461ad4
	// Params: [ Num(0) Size(0x0) ]
	void EMPDisable();

	// Object: Function DFMAbility.SpiderBase.DoDetect
	// Flags: [Final|Native|Protected]
	// Offset: 0xc461ac0
	// Params: [ Num(0) Size(0x0) ]
	void DoDetect();

	// Object: Function DFMAbility.SpiderBase.DoBlockTrace
	// Flags: [Final|Native|Protected|HasOutParms|HasDefaults|Const]
	// Offset: 0xc461978
	// Params: [ Num(4) Size(0x25) ]
	uint8_t DoBlockTrace(struct FVector TargetLoc, struct TArray<struct AActor*>& IgnoreActors, float radius);

	// Object: Function DFMAbility.SpiderBase.DoAttack
	// Flags: [Final|Native|Protected]
	// Offset: 0xc461964
	// Params: [ Num(0) Size(0x0) ]
	void DoAttack();

	// Object: Function DFMAbility.SpiderBase.ClientPlayExplosion
	// Flags: [Net|NetReliableNative|Event|NetMulticast|Protected|HasDefaults]
	// Offset: 0x109d80b8
	// Params: [ Num(1) Size(0xC) ]
	void ClientPlayExplosion(struct FVector ExplosionLocation);

	// Object: Function DFMAbility.SpiderBase.CheckValidTarget
	// Flags: [Final|Native|Protected|Const]
	// Offset: 0xc461804
	// Params: [ Num(5) Size(0x15) ]
	uint8_t CheckValidTarget(struct AActor* Target, float CheckDistSquared, float CheckCosAngle, float CheckHeight);

	// Object: Function DFMAbility.SpiderBase.CheckFollowTargetValid
	// Flags: [Final|Native|Public|Const]
	// Offset: 0xc461754
	// Params: [ Num(2) Size(0x9) ]
	uint8_t CheckFollowTargetValid(struct AActor* Target);

	// Object: Function DFMAbility.SpiderBase.CheckCanAttack
	// Flags: [Final|Native|Protected]
	// Offset: 0xc461740
	// Params: [ Num(0) Size(0x0) ]
	void CheckCanAttack();

	// Object: Function DFMAbility.SpiderBase.CheckAwake
	// Flags: [Final|Native|Protected]
	// Offset: 0xc46172c
	// Params: [ Num(0) Size(0x0) ]
	void CheckAwake();

	// Object: Function DFMAbility.SpiderBase.BP_CanShowMarker
	// Flags: [Native|Event|Public|BlueprintEvent]
	// Offset: 0xc4616ec
	// Params: [ Num(1) Size(0x1) ]
	uint8_t BP_CanShowMarker();

	// Object: Function DFMAbility.SpiderBase.AwakeAndFollowTarget
	// Flags: [Native|Public]
	// Offset: 0xc4615fc
	// Params: [ Num(2) Size(0x9) ]
	void AwakeAndFollowTarget(struct AActor* Target, uint8_t bFollowByNav);

	// Object: Function DFMAbility.SpiderBase.AwakeAndFollowDirection
	// Flags: [Native|Public|HasDefaults]
	// Offset: 0xc461550
	// Params: [ Num(1) Size(0xC) ]
	void AwakeAndFollowDirection(struct FVector Direction);

	// Object: Function DFMAbility.SpiderBase.AddIgnoreTarget
	// Flags: [Final|Native|Public]
	// Offset: 0xc4614ac
	// Params: [ Num(1) Size(0x8) ]
	void AddIgnoreTarget(struct AActor* Target);
};

// Object: Class DFMAbility.SpiderMovementComponent
// Size: 0x420 (Inherited: 0x178)
struct USpiderMovementComponent : UNavMovementComponent
{
	DEFINE_UE_CLASS_HELPERS(USpiderMovementComponent, "SpiderMovementComponent")

	float WalkingSpeed; // 0x178(0x4)
	uint8_t bMaintainHorizontalGroundVelocity : 1; // 0x17C(0x1), Mask(0x1)
	uint8_t BitPad_0x17C_1 : 7; // 0x17C(0x1)
	uint8_t Pad_0x17D[0x3]; // 0x17D(0x3)
	float GravityScale; // 0x180(0x4)
	float MaxStepHeight; // 0x184(0x4)
	float WalkableFloorAngle; // 0x188(0x4)
	float MaxClimbHeight; // 0x18C(0x4)
	float ClimbForwardCheckDist; // 0x190(0x4)
	float ClimbingSpeed; // 0x194(0x4)
	float ClimbWallAttraction; // 0x198(0x4)
	float ClimbBackCheckOffset; // 0x19C(0x4)
	float ClimbStepOnHeight; // 0x1A0(0x4)
	float Bounciness; // 0x1A4(0x4)
	float Friction; // 0x1A8(0x4)
	int32_t SlideForbiddenFrame; // 0x1AC(0x4)
	float SlideOffset; // 0x1B0(0x4)
	float SlideForwardCheck; // 0x1B4(0x4)
	float FollowWalkingSpeed; // 0x1B8(0x4)
	float FollowClimbingSpeed; // 0x1BC(0x4)
	float FollowCheckDis; // 0x1C0(0x4)
	float FindPathTime; // 0x1C4(0x4)
	float SwitchToNavFollowDis; // 0x1C8(0x4)
	float SwitchToNavFollowTime; // 0x1CC(0x4)
	int32_t MaxSimulationIterations; // 0x1D0(0x4)
	float MaxSimulationTimeStep; // 0x1D4(0x4)
	uint8_t bCanBreakGlass : 1; // 0x1D8(0x1), Mask(0x1)
	uint8_t BitPad_0x1D8_1 : 7; // 0x1D8(0x1)
	uint8_t Pad_0x1D9[0x3]; // 0x1D9(0x3)
	float InitSpeed; // 0x1DC(0x4)
	ECollisionChannel TraceChannel; // 0x1E0(0x1)
	uint8_t EnableTickAfterOwner : 1; // 0x1E1(0x1), Mask(0x1)
	uint8_t BitPad_0x1E1_1 : 7; // 0x1E1(0x1)
	uint8_t Pad_0x1E2[0x166]; // 0x1E2(0x166)
	struct TArray<struct FSpiderRepMovement> TargetMovementArray; // 0x348(0x10)
	struct TArray<struct FVector> FollowTrack; // 0x358(0x10)
	int32_t FollowIndex; // 0x368(0x4)
	uint8_t Pad_0x36C[0x2C]; // 0x36C(0x2C)
	struct UCapsuleComponent* CapsuleComponent; // 0x398(0x8)
	struct AActor* FollowTarget; // 0x3A0(0x8)
	uint8_t Pad_0x3A8[0x28]; // 0x3A8(0x28)
	struct FSpiderBasedMovementInfo BasedMovement; // 0x3D0(0x30)
	uint8_t Pad_0x400[0x1C]; // 0x400(0x1C)
	uint8_t bIgnoreBaseRotation : 1; // 0x41C(0x1), Mask(0x1)
	uint8_t bFastAttachedMove : 1; // 0x41C(0x1), Mask(0x2)
	uint8_t BitPad_0x41C_2 : 6; // 0x41C(0x1)
	uint8_t Pad_0x41D[0x3]; // 0x41D(0x3)

	// Object: Function DFMAbility.SpiderMovementComponent.UpdateTargetPath
	// Flags: [Final|Native|Public]
	// Offset: 0xc462c80
	// Params: [ Num(0) Size(0x0) ]
	void UpdateTargetPath();

	// Object: Function DFMAbility.SpiderMovementComponent.UpdateSetBase
	// Flags: [Native|Protected]
	// Offset: 0xc462c64
	// Params: [ Num(0) Size(0x0) ]
	void UpdateSetBase();

	// Object: Function DFMAbility.SpiderMovementComponent.UpdateBasedMovement
	// Flags: [Native|Protected]
	// Offset: 0xc462bb8
	// Params: [ Num(1) Size(0x4) ]
	void UpdateBasedMovement(float DeltaTime);

	// Object: Function DFMAbility.SpiderMovementComponent.TickSimulateMove
	// Flags: [Native|Public]
	// Offset: 0xc462b0c
	// Params: [ Num(1) Size(0x4) ]
	void TickSimulateMove(float DeltaTime);

	// Object: Function DFMAbility.SpiderMovementComponent.TickAuthorityMove
	// Flags: [Native|Public]
	// Offset: 0xc462a60
	// Params: [ Num(1) Size(0x4) ]
	void TickAuthorityMove(float DeltaTime);

	// Object: Function DFMAbility.SpiderMovementComponent.StopMove
	// Flags: [Native|Public]
	// Offset: 0xc462a44
	// Params: [ Num(0) Size(0x0) ]
	void StopMove();

	// Object: Function DFMAbility.SpiderMovementComponent.SetMovementMode
	// Flags: [Final|Native|Public]
	// Offset: 0xc4629a0
	// Params: [ Num(1) Size(0x1) ]
	void SetMovementMode(ESpiderMoveMode NewMode);

	// Object: Function DFMAbility.SpiderMovementComponent.SetFollowTarget
	// Flags: [Final|Native|Public|HasDefaults]
	// Offset: 0xc46287c
	// Params: [ Num(3) Size(0x18) ]
	void SetFollowTarget(struct AActor* Target, uint8_t FollowByNav, struct FVector HeadLoc);

	// Object: Function DFMAbility.SpiderMovementComponent.SetBase
	// Flags: [Native|Protected]
	// Offset: 0xc462798
	// Params: [ Num(2) Size(0x10) ]
	void SetBase(struct UPrimitiveComponent* NewBaseComponent, struct FName InBoneName);

	// Object: Function DFMAbility.SpiderMovementComponent.SaveBaseLocation
	// Flags: [Native|Protected]
	// Offset: 0xc46277c
	// Params: [ Num(0) Size(0x0) ]
	void SaveBaseLocation();

	// Object: Function DFMAbility.SpiderMovementComponent.OnAsyncPathFind
	// Flags: [Final|Native|Protected|HasOutParms]
	// Offset: 0xc462640
	// Params: [ Num(3) Size(0x18) ]
	void OnAsyncPathFind(uint8_t Result, int32_t Index, struct TArray<struct FAbilityTracingPathData>& PathDatas);

	// Object: Function DFMAbility.SpiderMovementComponent.MulticastMovement
	// Flags: [Net|Native|Event|NetMulticast|Protected]
	// Offset: 0xf64a5a4
	// Params: [ Num(1) Size(0x40) ]
	void MulticastMovement(struct FSpiderRepMovement LatestMovement);

	// Object: Function DFMAbility.SpiderMovementComponent.MaybeUpdateBasedMovement
	// Flags: [Native|Protected]
	// Offset: 0xc462594
	// Params: [ Num(1) Size(0x4) ]
	void MaybeUpdateBasedMovement(float DeltaSeconds);

	// Object: Function DFMAbility.SpiderMovementComponent.InitSetBaseMovement
	// Flags: [Native|Public]
	// Offset: 0xc462578
	// Params: [ Num(0) Size(0x0) ]
	void InitSetBaseMovement();

	// Object: Function DFMAbility.SpiderMovementComponent.InitMovement
	// Flags: [Native|Public|HasDefaults]
	// Offset: 0xc462490
	// Params: [ Num(2) Size(0x14) ]
	void InitMovement(struct USceneComponent* MoveRoot, struct FVector StartDir);

	// Object: Function DFMAbility.SpiderMovementComponent.GetFollowTrack
	// Flags: [Final|Native|Public]
	// Offset: 0xc4623c0
	// Params: [ Num(1) Size(0x10) ]
	struct TArray<struct FVector> GetFollowTrack();

	// Object: Function DFMAbility.SpiderMovementComponent.GetFollowIndex
	// Flags: [Final|Native|Public|Const]
	// Offset: 0xc4623a4
	// Params: [ Num(1) Size(0x4) ]
	int32_t GetFollowIndex();

	// Object: Function DFMAbility.SpiderMovementComponent.GetCurrentNormal
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	// Offset: 0xc46236c
	// Params: [ Num(1) Size(0xC) ]
	struct FVector GetCurrentNormal();

	// Object: Function DFMAbility.SpiderMovementComponent.FindPathByNav
	// Flags: [Final|Native|Public]
	// Offset: 0xc462358
	// Params: [ Num(0) Size(0x0) ]
	void FindPathByNav();

	// Object: Function DFMAbility.SpiderMovementComponent.CheckNeedSwitchFollowType
	// Flags: [Final|Native|Public]
	// Offset: 0xc462344
	// Params: [ Num(0) Size(0x0) ]
	void CheckNeedSwitchFollowType();
};

// Object: Class DFMAbility.SpiderNetCueHandle
// Size: 0x270 (Inherited: 0x168)
struct USpiderNetCueHandle : UDFMSkillForbiddenCueHandler
{
	DEFINE_UE_CLASS_HELPERS(USpiderNetCueHandle, "SpiderNetCueHandle")

	struct TSoftObjectPtr<USkeletalMesh> NetMesh; // 0x168(0x28)
	struct UDelayDestroySkeletalMesh* SkeletalMeshComponent; // 0x190(0x8)
	struct TSoftClassPtr<struct UAnimInstance*> NetAnimationBP; // 0x198(0x28)
	struct TSoftObjectPtr<USkeletalMesh> NetMesh1P; // 0x1C0(0x28)
	struct TSoftObjectPtr<UAnimMontage> NetMeshAnim1P; // 0x1E8(0x28)
	struct TSoftClassPtr<struct UAnimInstance*> NetAnimationBP1p; // 0x210(0x28)
	struct FName Net1pSocket; // 0x238(0x8)
	int32_t LowDeviceFPPForceLod; // 0x240(0x4)
	uint8_t Pad_0x244[0x24]; // 0x244(0x24)
	struct UAnimMontage* CachedNetMeshAnim1P; // 0x268(0x8)

	// Object: Function DFMAbility.SpiderNetCueHandle.FirefightingPlayAnim
	// Flags: [Final|Native|Protected]
	// Offset: 0x10714514
	// Params: [ Num(3) Size(0x8) ]
	void FirefightingPlayAnim(uint8_t bPlay, uint8_t AnimType, float StartTime);
};

// Object: Class DFMAbility.SpiderNetProjectile
// Size: 0x18E0 (Inherited: 0x1890)
struct ASpiderNetProjectile : AAbilityWeaponThrowableBullet
{
	DEFINE_UE_CLASS_HELPERS(ASpiderNetProjectile, "SpiderNetProjectile")

	struct TArray<int64_t> HitAddBuffIds; // 0x1888(0x10)
	int64_t HitWeaponAddBuffId; // 0x1898(0x8)
	struct FName StaggerName; // 0x18A0(0x8)
	float GrowTime; // 0x18A8(0x4)
	float GrowStartScale; // 0x18AC(0x4)
	float GrowTargetScale; // 0x18B0(0x4)
	struct UBoxComponent* HitCheckBox; // 0x18B8(0x8)
	struct AActor* CatchTarget; // 0x18C0(0x8)
	uint8_t Pad_0x18CC[0x14]; // 0x18CC(0x14)

	// Object: Function DFMAbility.SpiderNetProjectile.OnOverlapBegin
	// Flags: [Native|Protected]
	// Offset: 0xc462dc4
	// Params: [ Num(1) Size(0x8) ]
	void OnOverlapBegin(struct AActor* OtherActor);
};

// Object: Class DFMAbility.SpiderQueryFilter_WorldQuery
// Size: 0x48 (Inherited: 0x48)
struct USpiderQueryFilter_WorldQuery : URecastFilter_WorldQuery
{
	DEFINE_UE_CLASS_HELPERS(USpiderQueryFilter_WorldQuery, "SpiderQueryFilter_WorldQuery")
};

// Object: Class DFMAbility.SpiderSentryHive
// Size: 0xBB0 (Inherited: 0xAB0)
struct ASpiderSentryHive : ASkillDeploymentBase
{
	DEFINE_UE_CLASS_HELPERS(ASpiderSentryHive, "SpiderSentryHive")

	struct USkeletalMeshComponent* SkeletalMesh; // 0xAB0(0x8)
	struct USceneComponent* MeshRoot; // 0xAB8(0x8)
	struct ASpiderBase* ChildSpiderClass; // 0xAC0(0x8)
	struct TArray<struct FName> SpawnBones; // 0xAC8(0x10)
	float ReTriggerBySameCharTime; // 0xAD8(0x4)
	float ActivateTriggerTime; // 0xADC(0x4)
	float ActivateTimeGap; // 0xAE0(0x4)
	float HeavyAttackFirstActivateTimeGap; // 0xAE4(0x4)
	uint8_t EnableBrotherSpider : 1; // 0xAE8(0x1), Mask(0x1)
	uint8_t BitPad_0xAE8_1 : 7; // 0xAE8(0x1)
	uint8_t Pad_0xAE9[0x3]; // 0xAE9(0x3)
	float WarmupTime; // 0xAEC(0x4)
	float ActivateOverrideFollowWalkingSpeed; // 0xAF0(0x4)
	float ActivateOverrideFollowClimbingSpeed; // 0xAF4(0x4)
	float ActivateOverrideMaxLifeTime; // 0xAF8(0x4)
	struct FName ImpactAudio; // 0xAFC(0x8)
	struct FName AvatarImpactAudioKey; // 0xB04(0x8)
	struct FName AvatarIdleLoopAudioKey; // 0xB0C(0x8)
	struct FName AvatarBounceAudioKey; // 0xB14(0x8)
	uint8_t Pad_0xB1C[0x4]; // 0xB1C(0x4)
	struct TArray<struct ASpiderBase*> ChildSpiders; // 0xB20(0x10)
	uint8_t bManualActivated : 1; // 0xB30(0x1), Mask(0x1)
	uint8_t BitPad_0xB30_1 : 7; // 0xB30(0x1)
	uint8_t bInWarmUp : 1; // 0xB31(0x1), Mask(0x1)
	uint8_t BitPad_0xB31_1 : 7; // 0xB31(0x1)
	uint8_t Pad_0xB32[0x2]; // 0xB32(0x2)
	struct FVector ActivateDir; // 0xB34(0xC)
	struct AActor* LockTarget; // 0xB40(0x8)
	struct TMap<struct AActor*, float> HistoryTriggerActors; // 0xB48(0x50)
	uint8_t Pad_0xB98[0x18]; // 0xB98(0x18)

	// Object: Function DFMAbility.SpiderSentryHive.SpawnSpider
	// Flags: [Native|Protected]
	// Offset: 0xc462fd0
	// Params: [ Num(0) Size(0x0) ]
	void SpawnSpider();

	// Object: Function DFMAbility.SpiderSentryHive.MulticastSpiderActivate
	// Flags: [Net|NetReliableNative|Event|NetMulticast|Protected]
	// Offset: 0x1079d670
	// Params: [ Num(3) Size(0x18) ]
	void MulticastSpiderActivate(struct ASpiderBase* ActivatedSpider, uint8_t bOwnerActivate, struct AActor* TriggerActor);

	// Object: Function DFMAbility.SpiderSentryHive.HandleWarmUpFinished
	// Flags: [Final|Native|Protected]
	// Offset: 0xc462fbc
	// Params: [ Num(0) Size(0x0) ]
	void HandleWarmUpFinished();

	// Object: Function DFMAbility.SpiderSentryHive.ActivateNextSpider
	// Flags: [Final|Native|Public]
	// Offset: 0xc462fa8
	// Params: [ Num(0) Size(0x0) ]
	void ActivateNextSpider();
};

// Object: Class DFMAbility.SpiderMarkBuffEntity
// Size: 0x1C0 (Inherited: 0x1C0)
struct USpiderMarkBuffEntity : UMarkOutlineBuffEntityBase
{
	DEFINE_UE_CLASS_HELPERS(USpiderMarkBuffEntity, "SpiderMarkBuffEntity")

	uint8_t bMarkNetSpiderTarget : 1; // 0x1BC(0x1), Mask(0x1)
};

// Object: Class DFMAbility.SpyExposeActor
// Size: 0x380 (Inherited: 0x370)
struct ASpyExposeActor : AActor
{
	DEFINE_UE_CLASS_HELPERS(ASpyExposeActor, "SpyExposeActor")

	uint8_t Pad_0x370[0x8]; // 0x370(0x8)
	int32_t ThreatId; // 0x378(0x4)
	uint8_t Pad_0x37C[0x4]; // 0x37C(0x4)
};

// Object: Class DFMAbility.SpyExposeCueHandler
// Size: 0x150 (Inherited: 0x130)
struct USpyExposeCueHandler : UGPEffectCueHandler
{
	DEFINE_UE_CLASS_HELPERS(USpyExposeCueHandler, "SpyExposeCueHandler")

	float TrackTickRate; // 0x130(0x4)
	uint8_t Pad_0x134[0x4]; // 0x134(0x4)
	struct AActor* SpyExposeActorClass; // 0x138(0x8)
	struct FTimerHandle TickTimerHandle; // 0x140(0x8)
	uint8_t bIsShowActor : 1; // 0x148(0x1), Mask(0x1)
	uint8_t BitPad_0x148_1 : 7; // 0x148(0x1)
	uint8_t Pad_0x149[0x7]; // 0x149(0x7)

	// Object: Function DFMAbility.SpyExposeCueHandler.TrySpawnSpyExposeActor
	// Flags: [Final|Native|Private]
	// Offset: 0xc464e18
	// Params: [ Num(0) Size(0x0) ]
	void TrySpawnSpyExposeActor();

	// Object: Function DFMAbility.SpyExposeCueHandler.Is1P
	// Flags: [Final|Native|Private|Const]
	// Offset: 0xc464de0
	// Params: [ Num(1) Size(0x1) ]
	uint8_t Is1P();
};

// Object: Class DFMAbility.StunGrenadeMovementComponent
// Size: 0x730 (Inherited: 0x710)
struct UStunGrenadeMovementComponent : UGPWeaponProjectileMovementComponent
{
	DEFINE_UE_CLASS_HELPERS(UStunGrenadeMovementComponent, "StunGrenadeMovementComponent")

	uint8_t Pad_0x710[0x20]; // 0x710(0x20)
};

// Object: Class DFMAbility.TestChainHookTakerActor
// Size: 0x390 (Inherited: 0x370)
struct ATestChainHookTakerActor : AActor
{
	DEFINE_UE_CLASS_HELPERS(ATestChainHookTakerActor, "TestChainHookTakerActor")

	uint8_t Pad_0x370[0x8]; // 0x370(0x8)
	EChainHookTargetType TestType; // 0x378(0x4)
	float AimRadius; // 0x37C(0x4)
	float AimHalfHeight; // 0x380(0x4)
	uint8_t Pad_0x384[0x4]; // 0x384(0x4)
	struct UChainHookTakerComponent* ChainHookTakerComponent; // 0x388(0x8)

	// Object: Function DFMAbility.TestChainHookTakerActor.InitChainHookTakerComponent
	// Flags: [Final|Native|Private]
	// Offset: 0xc464e58
	// Params: [ Num(0) Size(0x0) ]
	void InitChainHookTakerComponent();
};

// Object: Class DFMAbility.ThreatDetectionCueHandler
// Size: 0x2A8 (Inherited: 0x130)
struct UThreatDetectionCueHandler : UGPEffectCueHandler
{
	DEFINE_UE_CLASS_HELPERS(UThreatDetectionCueHandler, "ThreatDetectionCueHandler")

	uint8_t bIsDebug : 1; // 0x130(0x1), Mask(0x1)
	uint8_t BitPad_0x130_1 : 7; // 0x130(0x1)
	uint8_t bIsShowLocalFocus : 1; // 0x131(0x1), Mask(0x1)
	uint8_t BitPad_0x131_1 : 7; // 0x131(0x1)
	uint8_t bIsShowOnlyInOB : 1; // 0x132(0x1), Mask(0x1)
	uint8_t BitPad_0x132_1 : 7; // 0x132(0x1)
	uint8_t bIsIgnoreRobotAI : 1; // 0x133(0x1), Mask(0x1)
	uint8_t BitPad_0x133_1 : 7; // 0x133(0x1)
	uint8_t Pad_0x134[0x4]; // 0x134(0x4)
	struct TArray<struct FThreatDetectionRoleParam> AllGameRoleParam; // 0x138(0x10)
	struct FName HudName; // 0x148(0x8)
	ECollisionChannel BlockCheckChannel; // 0x150(0x1)
	uint8_t Pad_0x151[0x7]; // 0x151(0x7)
	struct FTimerHandle TickTimerHandle; // 0x158(0x8)
	struct FThreatDetectionRoleParam CurrentRoleParam; // 0x160(0x40)
	EFThreatDetectionCheckResult TickCountMinResult; // 0x1A0(0x1)
	uint8_t bIsStartCheck : 1; // 0x1A1(0x1), Mask(0x1)
	uint8_t BitPad_0x1A1_1 : 7; // 0x1A1(0x1)
	uint8_t bIsShowHud : 1; // 0x1A2(0x1), Mask(0x1)
	uint8_t BitPad_0x1A2_1 : 7; // 0x1A2(0x1)
	uint8_t Pad_0x1A3[0x1]; // 0x1A3(0x1)
	int32_t CurrCheckTickNum; // 0x1A4(0x4)
	struct TMap<uint32_t, struct FThreatDetectionCheckInfo> CheckInfoMap; // 0x1A8(0x50)
	struct FVector OwnerLocation; // 0x1F8(0xC)
	struct FVector OwnerViewLocation; // 0x204(0xC)
	uint8_t bIsInitTraceParam : 1; // 0x210(0x1), Mask(0x1)
	uint8_t BitPad_0x210_1 : 7; // 0x210(0x1)
	uint8_t Pad_0x211[0x97]; // 0x211(0x97)

	// Object: Function DFMAbility.ThreatDetectionCueHandler.UpdateGameRoleParam
	// Flags: [Final|Native|Private]
	// Offset: 0xc4657b4
	// Params: [ Num(0) Size(0x0) ]
	void UpdateGameRoleParam();

	// Object: Function DFMAbility.ThreatDetectionCueHandler.StopTickTimer
	// Flags: [Final|Native|Private]
	// Offset: 0xc4657a0
	// Params: [ Num(0) Size(0x0) ]
	void StopTickTimer();

	// Object: Function DFMAbility.ThreatDetectionCueHandler.StopCheck
	// Flags: [Final|Native|Private]
	// Offset: 0xc46578c
	// Params: [ Num(0) Size(0x0) ]
	void StopCheck();

	// Object: Function DFMAbility.ThreatDetectionCueHandler.StartTickTimer
	// Flags: [Final|Native|Private]
	// Offset: 0xc465778
	// Params: [ Num(0) Size(0x0) ]
	void StartTickTimer();

	// Object: Function DFMAbility.ThreatDetectionCueHandler.StartCheck
	// Flags: [Final|Native|Private]
	// Offset: 0xc465764
	// Params: [ Num(0) Size(0x0) ]
	void StartCheck();

	// Object: Function DFMAbility.ThreatDetectionCueHandler.SetHUDState
	// Flags: [Final|Native|Private]
	// Offset: 0xc4656b8
	// Params: [ Num(1) Size(0x1) ]
	void SetHUDState(uint8_t bIsShow);

	// Object: Function DFMAbility.ThreatDetectionCueHandler.RealDoCheckThreat
	// Flags: [Final|Native|Private|HasOutParms|HasDefaults]
	// Offset: 0xc465524
	// Params: [ Num(5) Size(0x29) ]
	EFThreatDetectionCheckResult RealDoCheckThreat(const struct FVector& BaseLocation, const struct FVector& SocketLocation, const struct FVector& SocketForward, float CheckAngle);

	// Object: Function DFMAbility.ThreatDetectionCueHandler.OnPassCheckThreat
	// Flags: [Final|Native|Private]
	// Offset: 0xc465480
	// Params: [ Num(1) Size(0x8) ]
	void OnPassCheckThreat(struct AGPCharacter* InCharacter);

	// Object: Function DFMAbility.ThreatDetectionCueHandler.IsNeedCheckThreat
	// Flags: [Final|Native|Private|HasOutParms]
	// Offset: 0xc46537c
	// Params: [ Num(3) Size(0xD) ]
	uint8_t IsNeedCheckThreat(int32_t TickCheckNum, const struct FThreatDetectionCheckInfo& Info);

	// Object: Function DFMAbility.ThreatDetectionCueHandler.Is1P
	// Flags: [Final|Native|Private]
	// Offset: 0xc465344
	// Params: [ Num(1) Size(0x1) ]
	uint8_t Is1P();

	// Object: Function DFMAbility.ThreatDetectionCueHandler.InitTraceParms
	// Flags: [Final|Native|Private]
	// Offset: 0xc465330
	// Params: [ Num(0) Size(0x0) ]
	void InitTraceParms();

	// Object: Function DFMAbility.ThreatDetectionCueHandler.InitGameRoleParam
	// Flags: [Final|Native|Private]
	// Offset: 0xc46531c
	// Params: [ Num(0) Size(0x0) ]
	void InitGameRoleParam();

	// Object: Function DFMAbility.ThreatDetectionCueHandler.GetViewLocationAndDirection
	// Flags: [Final|Native|Private|HasOutParms|HasDefaults]
	// Offset: 0xc4651e8
	// Params: [ Num(3) Size(0x20) ]
	void GetViewLocationAndDirection(struct AGPCharacter* InCharacter, struct FVector& OutViewLocation, struct FVector& OutViewDirection);

	// Object: Function DFMAbility.ThreatDetectionCueHandler.GetShotLocationAndDirection
	// Flags: [Final|Native|Private|HasOutParms|HasDefaults]
	// Offset: 0xc4650b4
	// Params: [ Num(3) Size(0x20) ]
	void GetShotLocationAndDirection(struct AGPCharacter* InCharacter, struct FVector& OutShotLocation, struct FVector& OutShotDirection);

	// Object: Function DFMAbility.ThreatDetectionCueHandler.DoTimerTick
	// Flags: [Final|Native|Private]
	// Offset: 0xc4650a0
	// Params: [ Num(0) Size(0x0) ]
	void DoTimerTick();

	// Object: Function DFMAbility.ThreatDetectionCueHandler.DoCheckThreat
	// Flags: [Final|Native|Private]
	// Offset: 0xc464ff4
	// Params: [ Num(2) Size(0x9) ]
	EFThreatDetectionCheckResult DoCheckThreat(struct AGPCharacter* CHARACTER);

	// Object: Function DFMAbility.ThreatDetectionCueHandler.CheckThreat
	// Flags: [Final|Native|Private]
	// Offset: 0xc464fe0
	// Params: [ Num(0) Size(0x0) ]
	void CheckThreat();

	// Object: Function DFMAbility.ThreatDetectionCueHandler.CheckBlock
	// Flags: [Final|Native|Private|HasDefaults]
	// Offset: 0xc464ef4
	// Params: [ Num(3) Size(0x19) ]
	uint8_t CheckBlock(struct FVector Start, struct FVector End);
};

// Object: Class DFMAbility.ThrowBlockingAnimInstance
// Size: 0xA30 (Inherited: 0x270)
struct UThrowBlockingAnimInstance : UAnimInstance
{
	DEFINE_UE_CLASS_HELPERS(UThrowBlockingAnimInstance, "ThrowBlockingAnimInstance")

	float MaxPlayTimeSeconds; // 0x26C(0x4)
	struct FThrowBlockingAnimInstanceProxy LocalProxy; // 0x270(0x7B0)
	float PlayTimeSeconds; // 0xA20(0x4)
	uint8_t Pad_0xA28[0x8]; // 0xA28(0x8)

	// Object: Function DFMAbility.ThrowBlockingAnimInstance.CheckMaxPlayTimeSeconds
	// Flags: [Final|Native|Private]
	// Offset: 0xc4658f4
	// Params: [ Num(1) Size(0x4) ]
	void CheckMaxPlayTimeSeconds(float DeltaSeconds);
};

// Object: Class DFMAbility.ThrowBlockingPartComponent
// Size: 0x330 (Inherited: 0x240)
struct UThrowBlockingPartComponent : USceneComponent
{
	DEFINE_UE_CLASS_HELPERS(UThrowBlockingPartComponent, "ThrowBlockingPartComponent")

	uint8_t IsMain : 1; // 0x240(0x1), Mask(0x1)
	uint8_t BitPad_0x240_1 : 7; // 0x240(0x1)
	uint8_t IsBottom : 1; // 0x241(0x1), Mask(0x1)
	uint8_t BitPad_0x241_1 : 7; // 0x241(0x1)
	uint8_t Pad_0x242[0x2]; // 0x242(0x2)
	struct FName SpawnFX; // 0x244(0x8)
	struct FVector SpawnFXLocation; // 0x24C(0xC)
	struct FRotator SpawnFXRotator; // 0x258(0xC)
	struct FName SpawnRippleID; // 0x264(0x8)
	struct FName DestroyFX; // 0x26C(0x8)
	struct FName DestroyFX_UnderWater; // 0x274(0x8)
	struct FName DestroyRippleID; // 0x27C(0x8)
	struct FName DestroyFX_Spawn; // 0x284(0x8)
	struct FName AvatarMeshKey; // 0x28C(0x8)
	float CurrHealth; // 0x294(0x4)
	float TotalDamage; // 0x298(0x4)
	uint8_t bOpenClientDebug : 1; // 0x29C(0x1), Mask(0x1)
	uint8_t BitPad_0x29C_1 : 7; // 0x29C(0x1)
	uint8_t bIsBurning : 1; // 0x29D(0x1), Mask(0x1)
	uint8_t BitPad_0x29D_1 : 7; // 0x29D(0x1)
	uint8_t Pad_0x29E[0x2]; // 0x29E(0x2)
	float DamageRate; // 0x2A0(0x4)
	EThrowBlockingPartState CurrState; // 0x2A4(0x1)
	EThrowBlockingPartState LastState; // 0x2A5(0x1)
	uint8_t bClientDestroyed : 1; // 0x2A6(0x1), Mask(0x1)
	uint8_t BitPad_0x2A6_1 : 7; // 0x2A6(0x1)
	uint8_t Pad_0x2A7[0x1]; // 0x2A7(0x1)
	struct FTimerHandle ClientDestroyedTimerHandle; // 0x2A8(0x8)
	int32_t CheckGroupNumber; // 0x2B0(0x4)
	uint8_t bInitChild : 1; // 0x2B4(0x1), Mask(0x1)
	uint8_t BitPad_0x2B4_1 : 7; // 0x2B4(0x1)
	uint8_t bIsChildCollisionEnabled : 1; // 0x2B5(0x1), Mask(0x1)
	uint8_t BitPad_0x2B5_1 : 7; // 0x2B5(0x1)
	uint8_t Pad_0x2B6[0x2]; // 0x2B6(0x2)
	struct UMeshComponent* MeshComponent; // 0x2B8(0x8)
	struct UBoxComponent* TriggerBox; // 0x2C0(0x8)
	struct UBoxComponent* HitBox; // 0x2C8(0x8)
	struct UBoxComponent* PawnBox; // 0x2D0(0x8)
	struct UMaterialInstanceDynamic* MainMaterial; // 0x2D8(0x8)
	float SpawnStartTime; // 0x2E0(0x4)
	uint8_t Pad_0x2E4[0x4]; // 0x2E4(0x4)
	struct FTimerHandle SpawnTimerHandle; // 0x2E8(0x8)
	float BurningStartTime; // 0x2F0(0x4)
	uint8_t Pad_0x2F4[0x4]; // 0x2F4(0x4)
	struct FTimerHandle BurningTimerHandle; // 0x2F8(0x8)
	struct UFXResourceContainerComponent* SpawnEffect; // 0x300(0x8)
	int32_t SpawnEffectHandleIndex; // 0x308(0x4)
	uint8_t Pad_0x30C[0x4]; // 0x30C(0x4)
	struct UFXResourceContainerComponent* BurningEffect; // 0x310(0x8)
	int32_t BurningEffectHandleIndex; // 0x318(0x4)
	uint8_t Pad_0x31C[0x4]; // 0x31C(0x4)
	struct UFXResourceContainerComponent* DestroyEffect; // 0x320(0x8)
	int32_t DestroyEffectHandleIndex; // 0x328(0x4)
	uint8_t Pad_0x32C[0x4]; // 0x32C(0x4)

	// Object: Function DFMAbility.ThrowBlockingPartComponent.UpdateState
	// Flags: [Final|Native|Protected]
	// Offset: 0xc466650
	// Params: [ Num(0) Size(0x0) ]
	void UpdateState();

	// Object: Function DFMAbility.ThrowBlockingPartComponent.TrySpawnPartSpawnPS
	// Flags: [Final|Native|Protected]
	// Offset: 0xc46663c
	// Params: [ Num(0) Size(0x0) ]
	void TrySpawnPartSpawnPS();

	// Object: Function DFMAbility.ThrowBlockingPartComponent.TrySpawnPartPS
	// Flags: [Native|Protected]
	// Offset: 0xc466620
	// Params: [ Num(0) Size(0x0) ]
	void TrySpawnPartPS();

	// Object: Function DFMAbility.ThrowBlockingPartComponent.TrySpawnPartDestroyPS
	// Flags: [Final|Native|Protected]
	// Offset: 0xc466574
	// Params: [ Num(1) Size(0x1) ]
	void TrySpawnPartDestroyPS(uint8_t bIsInSpawn);

	// Object: Function DFMAbility.ThrowBlockingPartComponent.TrySpawnPartBurningPS
	// Flags: [Final|Native|Protected]
	// Offset: 0xc466560
	// Params: [ Num(0) Size(0x0) ]
	void TrySpawnPartBurningPS();

	// Object: Function DFMAbility.ThrowBlockingPartComponent.TrySpawnFX
	// Flags: [Final|Native|Protected|HasOutParms]
	// Offset: 0xc46640c
	// Params: [ Num(4) Size(0x18) ]
	struct UFXResourceContainerComponent* TrySpawnFX(const struct FName& FXName, int32_t& EffectHandle, uint8_t bSetParent);

	// Object: Function DFMAbility.ThrowBlockingPartComponent.TryInitializeMainMID
	// Flags: [Native|Protected]
	// Offset: 0xc4663f0
	// Params: [ Num(0) Size(0x0) ]
	void TryInitializeMainMID();

	// Object: Function DFMAbility.ThrowBlockingPartComponent.TryInitHide
	// Flags: [Final|Native|Public]
	// Offset: 0xc4663dc
	// Params: [ Num(0) Size(0x0) ]
	void TryInitHide();

	// Object: Function DFMAbility.ThrowBlockingPartComponent.TryInitChild
	// Flags: [Final|Native|Protected]
	// Offset: 0xc4663c8
	// Params: [ Num(0) Size(0x0) ]
	void TryInitChild();

	// Object: Function DFMAbility.ThrowBlockingPartComponent.TryDeactivateFX
	// Flags: [Final|Native|Protected]
	// Offset: 0xc4662e8
	// Params: [ Num(2) Size(0xC) ]
	void TryDeactivateFX(struct UFXResourceContainerComponent* FX, int32_t EffectHandle);

	// Object: Function DFMAbility.ThrowBlockingPartComponent.TryDeactivateAllPS
	// Flags: [Final|Native|Protected]
	// Offset: 0xc4662d4
	// Params: [ Num(0) Size(0x0) ]
	void TryDeactivateAllPS();

	// Object: Function DFMAbility.ThrowBlockingPartComponent.StopSpawnTimer
	// Flags: [Final|Native|Protected]
	// Offset: 0xc4662c0
	// Params: [ Num(0) Size(0x0) ]
	void StopSpawnTimer();

	// Object: Function DFMAbility.ThrowBlockingPartComponent.StopClientDestroyedTimer
	// Flags: [Final|Native|Public]
	// Offset: 0xc4662ac
	// Params: [ Num(0) Size(0x0) ]
	void StopClientDestroyedTimer();

	// Object: Function DFMAbility.ThrowBlockingPartComponent.StopBurningTimer
	// Flags: [Final|Native|Protected]
	// Offset: 0xc466298
	// Params: [ Num(0) Size(0x0) ]
	void StopBurningTimer();

	// Object: Function DFMAbility.ThrowBlockingPartComponent.StartSpawnTimer
	// Flags: [Final|Native|Protected]
	// Offset: 0xc466284
	// Params: [ Num(0) Size(0x0) ]
	void StartSpawnTimer();

	// Object: Function DFMAbility.ThrowBlockingPartComponent.StartBurningTimer
	// Flags: [Final|Native|Protected]
	// Offset: 0xc466270
	// Params: [ Num(0) Size(0x0) ]
	void StartBurningTimer();

	// Object: Function DFMAbility.ThrowBlockingPartComponent.SetPartState
	// Flags: [Final|Native|Public]
	// Offset: 0xc4661cc
	// Params: [ Num(1) Size(0x1) ]
	void SetPartState(EThrowBlockingPartState State);

	// Object: Function DFMAbility.ThrowBlockingPartComponent.SetMaterialParameterValue
	// Flags: [Final|Native|Public]
	// Offset: 0xc4660ec
	// Params: [ Num(2) Size(0xC) ]
	void SetMaterialParameterValue(struct FName ParameterName, float Value);

	// Object: Function DFMAbility.ThrowBlockingPartComponent.SetChildCollisionEnabled
	// Flags: [Native|Protected]
	// Offset: 0xc466038
	// Params: [ Num(1) Size(0x1) ]
	void SetChildCollisionEnabled(uint8_t bIsCollisionEnabled);

	// Object: Function DFMAbility.ThrowBlockingPartComponent.PlayDamagedSound
	// Flags: [Final|Native|Protected]
	// Offset: 0xc466024
	// Params: [ Num(0) Size(0x0) ]
	void PlayDamagedSound();

	// Object: Function DFMAbility.ThrowBlockingPartComponent.OnSpawnTimer
	// Flags: [Final|Native|Public]
	// Offset: 0xc466010
	// Params: [ Num(0) Size(0x0) ]
	void OnSpawnTimer();

	// Object: Function DFMAbility.ThrowBlockingPartComponent.OnRep_IsBurning
	// Flags: [Final|Native|Protected]
	// Offset: 0xc465ffc
	// Params: [ Num(0) Size(0x0) ]
	void OnRep_IsBurning();

	// Object: Function DFMAbility.ThrowBlockingPartComponent.OnRep_DamageRate
	// Flags: [Final|Native|Protected]
	// Offset: 0xf620cc4
	// Params: [ Num(0) Size(0x0) ]
	void OnRep_DamageRate();

	// Object: Function DFMAbility.ThrowBlockingPartComponent.OnRep_CurrState
	// Flags: [Final|Native|Protected]
	// Offset: 0xfae623c
	// Params: [ Num(0) Size(0x0) ]
	void OnRep_CurrState();

	// Object: Function DFMAbility.ThrowBlockingPartComponent.OnOverlapBegin
	// Flags: [Final|Native|Protected|HasOutParms]
	// Offset: 0xc465e04
	// Params: [ Num(6) Size(0xA8) ]
	void OnOverlapBegin(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, uint8_t bFromSweep, const struct FHitResult& SweepResult);

	// Object: Function DFMAbility.ThrowBlockingPartComponent.IsThisPart
	// Flags: [Final|Native|Public|Const]
	// Offset: 0xc465d54
	// Params: [ Num(2) Size(0x9) ]
	uint8_t IsThisPart(struct UPrimitiveComponent* HitComponent);

	// Object: Function DFMAbility.ThrowBlockingPartComponent.InitTrigger
	// Flags: [Final|Native|Public]
	// Offset: 0xc465d40
	// Params: [ Num(0) Size(0x0) ]
	void InitTrigger();

	// Object: Function DFMAbility.ThrowBlockingPartComponent.InitAppearance
	// Flags: [Final|Native|Protected]
	// Offset: 0xc465d2c
	// Params: [ Num(0) Size(0x0) ]
	void InitAppearance();

	// Object: Function DFMAbility.ThrowBlockingPartComponent.GetThrowBlockingOwner
	// Flags: [Final|Native|Protected|Const]
	// Offset: 0xc465cf8
	// Params: [ Num(1) Size(0x8) ]
	struct ADFMAbilityThrowBlocking* GetThrowBlockingOwner();

	// Object: Function DFMAbility.ThrowBlockingPartComponent.FinTrigger
	// Flags: [Final|Native|Protected]
	// Offset: 0xc465ce4
	// Params: [ Num(0) Size(0x0) ]
	void FinTrigger();

	// Object: Function DFMAbility.ThrowBlockingPartComponent.DoSpawnTimer
	// Flags: [Final|Native|Protected]
	// Offset: 0xc465cd0
	// Params: [ Num(0) Size(0x0) ]
	void DoSpawnTimer();

	// Object: Function DFMAbility.ThrowBlockingPartComponent.DoClientDestroyedTimer
	// Flags: [Final|Native|Public]
	// Offset: 0xc465cbc
	// Params: [ Num(0) Size(0x0) ]
	void DoClientDestroyedTimer();

	// Object: Function DFMAbility.ThrowBlockingPartComponent.DoClientDestroyed
	// Flags: [Final|Native|Public]
	// Offset: 0xc465ca8
	// Params: [ Num(0) Size(0x0) ]
	void DoClientDestroyed();

	// Object: Function DFMAbility.ThrowBlockingPartComponent.DoCheckCharacter
	// Flags: [Final|Native|Protected|HasDefaults|Const]
	// Offset: 0xc465bf8
	// Params: [ Num(2) Size(0xD) ]
	uint8_t DoCheckCharacter(struct FVector CheckCharacterAddExtent);

	// Object: Function DFMAbility.ThrowBlockingPartComponent.DoCheck
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults]
	// Offset: 0xc4659c8
	// Params: [ Num(7) Size(0x48) ]
	void DoCheck(int32_t MinPassNum, struct FVector BaseOffset, struct FVector CenterOffset, const struct FVector& CheckSize, const struct FVector& EdgeCheckOffset, struct FVector CheckCharacterAddExtent, struct AActor* Owner);

	// Object: Function DFMAbility.ThrowBlockingPartComponent.DoBurningTimer
	// Flags: [Final|Native|Protected]
	// Offset: 0xc4659b4
	// Params: [ Num(0) Size(0x0) ]
	void DoBurningTimer();

	// Object: Function DFMAbility.ThrowBlockingPartComponent.CleanAttachChildren
	// Flags: [Final|Native|Protected]
	// Offset: 0xc4659a0
	// Params: [ Num(0) Size(0x0) ]
	void CleanAttachChildren();
};

// Object: Class DFMAbility.ThrowBlockingPreviewPartComponent
// Size: 0x330 (Inherited: 0x330)
struct UThrowBlockingPreviewPartComponent : UThrowBlockingPartComponent
{
	DEFINE_UE_CLASS_HELPERS(UThrowBlockingPreviewPartComponent, "ThrowBlockingPreviewPartComponent")

	EThrowBlockingExpansionType ExpansionType; // 0x32C(0x1)

	// Object: Function DFMAbility.ThrowBlockingPreviewPartComponent.InitPreviewPart
	// Flags: [Final|Native|Public]
	// Offset: 0xc4667bc
	// Params: [ Num(2) Size(0x10) ]
	void InitPreviewPart(struct USceneComponent* BaseNode, struct UMeshComponent* Mesh);
};

// Object: Class DFMAbility.ThrowBlockingPreviewActor
// Size: 0x590 (Inherited: 0x4C8)
struct AThrowBlockingPreviewActor : APlacementPreviewActorBase
{
	DEFINE_UE_CLASS_HELPERS(AThrowBlockingPreviewActor, "ThrowBlockingPreviewActor")

	uint8_t bOpenClientDebug : 1; // 0x4C8(0x1), Mask(0x1)
	uint8_t BitPad_0x4C8_1 : 7; // 0x4C8(0x1)
	uint8_t Pad_0x4C9[0x3]; // 0x4C9(0x3)
	int32_t BaseCheckMinPassNum; // 0x4CC(0x4)
	struct FVector BaseCheckCenterOffset; // 0x4D0(0xC)
	struct FVector BaseCheckSize; // 0x4DC(0xC)
	struct FVector BaseCheckOffset; // 0x4E8(0xC)
	int32_t OnGroundMinPassNum; // 0x4F4(0x4)
	struct FVector OnGroundCheckCenterOffset; // 0x4F8(0xC)
	struct FVector OnGroundCheckSize; // 0x504(0xC)
	struct FVector OnGroundCheckOffset; // 0x510(0xC)
	struct FLinearColor CanUseColor1; // 0x51C(0x10)
	struct FLinearColor CanNotUseColor1; // 0x52C(0x10)
	struct FLinearColor CanUseColor2; // 0x53C(0x10)
	struct FLinearColor CanNotUseColor2; // 0x54C(0x10)
	uint8_t Pad_0x55C[0x4]; // 0x55C(0x4)
	struct USceneComponent* FullyExpanded; // 0x560(0x8)
	struct USceneComponent* OnGround; // 0x568(0x8)
	struct USceneComponent* OnWall; // 0x570(0x8)
	struct UMaterialInstanceDynamic* MainMaterial; // 0x578(0x8)
	struct TArray<struct UThrowBlockingPreviewPartComponent*> AllPartsArray; // 0x580(0x10)
};

// Object: Class DFMAbility.ThrowSpawnHelper
// Size: 0x16D0 (Inherited: 0x16D0)
struct AThrowSpawnHelper : AWeaponThrowableBulletProjectile
{
	DEFINE_UE_CLASS_HELPERS(AThrowSpawnHelper, "ThrowSpawnHelper")
};

// Object: Class DFMAbility.WeaponBindHUDFuncComponent
// Size: 0x170 (Inherited: 0x168)
struct UWeaponBindHUDFuncComponent : UGPWeaponFuncComponentBase
{
	DEFINE_UE_CLASS_HELPERS(UWeaponBindHUDFuncComponent, "WeaponBindHUDFuncComponent")

	struct FName HudName; // 0x164(0x8)
	uint8_t bHasLoadHUD : 1; // 0x16C(0x1), Mask(0x1)

	// Object: Function DFMAbility.WeaponBindHUDFuncComponent.TryRemoveHUD
	// Flags: [Final|Native|Private]
	// Offset: 0xc4669a8
	// Params: [ Num(0) Size(0x0) ]
	void TryRemoveHUD();

	// Object: Function DFMAbility.WeaponBindHUDFuncComponent.TryLoadHUD
	// Flags: [Final|Native|Private]
	// Offset: 0xc466994
	// Params: [ Num(0) Size(0x0) ]
	void TryLoadHUD();
};

// Object: Class DFMAbility.WeaponBulletBuff
// Size: 0xF60 (Inherited: 0xEB0)
struct AWeaponBulletBuff : AWeaponBulletPhysicsSimulate
{
	DEFINE_UE_CLASS_HELPERS(AWeaponBulletBuff, "WeaponBulletBuff")

	uint8_t Pad_0xEB0[0x8]; // 0xEB0(0x8)
	struct TArray<struct FAbilityDetectorBuffData> AddBuffIDs; // 0xEB8(0x10)
	struct TArray<struct FAbilityDetectorBuffData> AddBuffIDs_Zoom; // 0xEC8(0x10)
	struct TArray<struct FAbilityDetectorBuffData> HeadAddBuffIDs; // 0xED8(0x10)
	struct TArray<struct FAbilityDetectorBuffData> SelfAddBuffIDs; // 0xEE8(0x10)
	uint8_t UseZoom : 1; // 0xEF8(0x1), Mask(0x1)
	uint8_t BitPad_0xEF8_1 : 7; // 0xEF8(0x1)
	uint8_t Pad_0xEF9[0x7]; // 0xEF9(0x7)
	struct TArray<struct FName> IgnoreTags; // 0xF00(0x10)
	uint8_t Pad_0xF10[0x8]; // 0xF10(0x8)
	struct TSoftObjectPtr<UGPAudioEventAsset> FPPBeHited_2DAudio; // 0xF18(0x28)
	struct FName HitTeammateFXID; // 0xF40(0x8)
	struct FName HitTeammateHeadFXID; // 0xF48(0x8)
	struct FName MaxDistanceDestroyFXID; // 0xF50(0x8)
	uint8_t ApplyKnockBack : 1; // 0xF58(0x1), Mask(0x1)
	uint8_t BitPad_0xF58_1 : 7; // 0xF58(0x1)
	uint8_t Pad_0xF59[0x7]; // 0xF59(0x7)

	// Object: Function DFMAbility.WeaponBulletBuff.ServerAEffectBuff
	// Flags: [Net|NetReliableNative|Event|Public|NetServer]
	// Offset: 0xc468f48
	// Params: [ Num(3) Size(0x19) ]
	void ServerAEffectBuff(struct TArray<struct FAbilityDetectorBuffData> AddBuffs, struct ADFMCharacter* DFMCharacter, uint8_t Add);

	// Object: Function DFMAbility.WeaponBulletBuff.IsSelfBullet
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0xc468e98
	// Params: [ Num(2) Size(0x9) ]
	uint8_t IsSelfBullet(struct AGPWeaponBulletBase* Bullet);

	// Object: Function DFMAbility.WeaponBulletBuff.IsNightMap
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0xc468e58
	// Params: [ Num(1) Size(0x1) ]
	uint8_t IsNightMap();

	// Object: Function DFMAbility.WeaponBulletBuff.IsEnemyBullet
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0xc468da8
	// Params: [ Num(2) Size(0x9) ]
	uint8_t IsEnemyBullet(struct AGPWeaponBulletBase* Bullet);

	// Object: Function DFMAbility.WeaponBulletBuff.IsEnemy
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0xc468cc0
	// Params: [ Num(3) Size(0x11) ]
	uint8_t IsEnemy(struct AGPCharacterBase* CharecterA, struct AGPCharacterBase* CharecterB);

	// Object: Function DFMAbility.WeaponBulletBuff.BreakThrouthScore
	// Flags: [Final|Native|Public]
	// Offset: 0xc468c1c
	// Params: [ Num(1) Size(0x4) ]
	void BreakThrouthScore(EScoreName Score);

	// Object: Function DFMAbility.WeaponBulletBuff.BP_GetSkillLogicType
	// Flags: [Native|Event|Public|BlueprintCallable|BlueprintEvent]
	// Offset: 0xc468be0
	// Params: [ Num(1) Size(0x1) ]
	ESkillLogicType BP_GetSkillLogicType();
};

// Object: Class DFMAbility.WeaponBulletArrow
// Size: 0xFB0 (Inherited: 0xF60)
struct AWeaponBulletArrow : AWeaponBulletBuff
{
	DEFINE_UE_CLASS_HELPERS(AWeaponBulletArrow, "WeaponBulletArrow")

	uint8_t bShouldBounce : 1; // 0xF59(0x1), Mask(0x1)
	float Bounciness; // 0xF5C(0x4)
	float BounceVelocityStopLimited; // 0xF60(0x4)
	float Friction; // 0xF64(0x4)
	struct UGPAudioEventAsset* BulletBounceAudioEvent; // 0xF68(0x8)
	struct FName BulletBounceAudioName; // 0xF70(0x8)
	struct FName ArrowCollisionTag; // 0xF78(0x8)
	uint8_t bOnlyBounceOnce : 1; // 0xF80(0x1), Mask(0x1)
	struct TWeakObjectPtr<struct ADFMCharacter> OwnerChar; // 0xF84(0x8)
	uint8_t BitPad_0xF8C_2 : 6; // 0xF8C(0x1)
	uint8_t Pad_0xF8D[0x1B]; // 0xF8D(0x1B)
	struct UAbilityWaterEffectComponent* WaterEffectComponent; // 0xFA8(0x8)

	// Object: Function DFMAbility.WeaponBulletArrow.MulticastClientPlayBounceSound
	// Flags: [Net|NetReliableNative|Event|NetMulticast|Public|HasDefaults]
	// Offset: 0xc46898c
	// Params: [ Num(2) Size(0x10) ]
	void MulticastClientPlayBounceSound(int32_t BounceCnt, struct FVector pos);

	// Object: Function DFMAbility.WeaponBulletArrow.GetSkinId
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x10a4e4cc
	// Params: [ Num(1) Size(0x8) ]
	struct FName GetSkinId();

	// Object: Function DFMAbility.WeaponBulletArrow.GetFlyDistance
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xc468958
	// Params: [ Num(1) Size(0x4) ]
	float GetFlyDistance();

	// Object: Function DFMAbility.WeaponBulletArrow.CreateBulletBuff
	// Flags: [Native|Public|HasOutParms]
	// Offset: 0xc468888
	// Params: [ Num(1) Size(0x88) ]
	void CreateBulletBuff(const struct FHitResult& ImpactResult);

	// Object: Function DFMAbility.WeaponBulletArrow.BP_InitClientBullet
	// Flags: [Event|Public|BlueprintCallable|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(0) Size(0x0) ]
	void BP_InitClientBullet();

	// Object: Function DFMAbility.WeaponBulletArrow.BP_CreateBulletBuff
	// Flags: [Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(1) Size(0x88) ]
	void BP_CreateBulletBuff(const struct FHitResult& ImpactResult);

	// Object: Function DFMAbility.WeaponBulletArrow.BP_ClientStopSound
	// Flags: [Event|Public|BlueprintCallable|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(0) Size(0x0) ]
	void BP_ClientStopSound();
};

// Object: Class DFMAbility.WeaponBulletAbilityFireArrow
// Size: 0xFC0 (Inherited: 0xFB0)
struct AWeaponBulletAbilityFireArrow : AWeaponBulletArrow
{
	DEFINE_UE_CLASS_HELPERS(AWeaponBulletAbilityFireArrow, "WeaponBulletAbilityFireArrow")

	uint8_t Pad_0xFB0[0x10]; // 0xFB0(0x10)
};

// Object: Class DFMAbility.WeaponBulletAbilitySayyidFireArrow
// Size: 0x1000 (Inherited: 0xFB0)
struct AWeaponBulletAbilitySayyidFireArrow : AWeaponBulletArrow
{
	DEFINE_UE_CLASS_HELPERS(AWeaponBulletAbilitySayyidFireArrow, "WeaponBulletAbilitySayyidFireArrow")

	uint8_t Pad_0xFB0[0x8]; // 0xFB0(0x8)
	struct FName FireExplosionEffectId; // 0xFB8(0x8)
	struct FName FireExplosionAirEffectId; // 0xFC0(0x8)
	struct AAbilityWeaponThrowableBullet* FireProjectileClass; // 0xFC8(0x8)
	float FireProjectileSpeed; // 0xFD0(0x4)
	uint8_t Pad_0xFD4[0x4]; // 0xFD4(0x4)
	struct ADFMAbilityIncendiaryArea* IncendiaryAreaClass; // 0xFD8(0x8)
	float GroundCheckDistance; // 0xFE0(0x4)
	struct FName ArrowShootVoiceName; // 0xFE4(0x8)
	struct FName HitVoiceName; // 0xFEC(0x8)
	uint8_t Pad_0xFF4[0xC]; // 0xFF4(0xC)

	// Object: Function DFMAbility.WeaponBulletAbilitySayyidFireArrow.SpawnIncendiaryAreaDirectly
	// Flags: [Final|Native|Protected|HasOutParms|HasDefaults]
	// Offset: 0xc4686cc
	// Params: [ Num(1) Size(0xC) ]
	void SpawnIncendiaryAreaDirectly(const struct FVector& Location);

	// Object: Function DFMAbility.WeaponBulletAbilitySayyidFireArrow.SpawnFireProjectile
	// Flags: [Final|Native|Protected|HasOutParms|HasDefaults]
	// Offset: 0xc4685d4
	// Params: [ Num(2) Size(0x18) ]
	void SpawnFireProjectile(const struct FVector& Location, const struct FVector& Normal);

	// Object: Function DFMAbility.WeaponBulletAbilitySayyidFireArrow.PlayFireExplosionEffect
	// Flags: [Final|Native|Protected|HasOutParms|HasDefaults]
	// Offset: 0xc468490
	// Params: [ Num(3) Size(0x1C) ]
	void PlayFireExplosionEffect(uint8_t bIsNearGround, const struct FVector& Location, const struct FVector& Normal);

	// Object: Function DFMAbility.WeaponBulletAbilitySayyidFireArrow.MulticastClientPlayExplosionEffect
	// Flags: [Net|NetReliableNative|Event|NetMulticast|Public|HasDefaults]
	// Offset: 0xc46836c
	// Params: [ Num(3) Size(0x1C) ]
	void MulticastClientPlayExplosionEffect(uint8_t bIsNearGround, struct FVector Location, struct FVector Normal);
};

// Object: Class DFMAbility.WeaponBulletPenetratingSniper
// Size: 0xF70 (Inherited: 0xF60)
struct AWeaponBulletPenetratingSniper : AWeaponBulletBuff
{
	DEFINE_UE_CLASS_HELPERS(AWeaponBulletPenetratingSniper, "WeaponBulletPenetratingSniper")

	float BulletBuffRadius; // 0xF5C(0x4)
	float BulletBuffHalfHeight; // 0xF60(0x4)
	uint8_t Pad_0xF68[0x8]; // 0xF68(0x8)

	// Object: Function DFMAbility.WeaponBulletPenetratingSniper.BP_CreateBulletBuff
	// Flags: [Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(1) Size(0x88) ]
	void BP_CreateBulletBuff(const struct FHitResult& ImpactResult);
};

// Object: Class DFMAbility.WeaponBulletProxSensorArrow
// Size: 0x11B0 (Inherited: 0xFB0)
struct AWeaponBulletProxSensorArrow : AWeaponBulletArrow
{
	DEFINE_UE_CLASS_HELPERS(AWeaponBulletProxSensorArrow, "WeaponBulletProxSensorArrow")

	uint8_t Pad_0xFB0[0x8]; // 0xFB0(0x8)
	struct TArray<struct FName> IgnoreTagArray; // 0xFB8(0x10)
	struct FName TriggerTag; // 0xFC8(0x8)
	int32_t MarkBuffID; // 0xFD0(0x4)
	uint8_t Pad_0xFD4[0x4]; // 0xFD4(0x4)
	struct FString ClientPostProcessEffectName; // 0xFD8(0x10)
	struct FString NightClientPostProcessEffectName; // 0xFE8(0x10)
	struct FString PostProcessEffectParameterName; // 0xFF8(0x10)
	struct FString PostProcessEffectColorParameterName; // 0x1008(0x10)
	float PostProcessEffectFadeOutTime; // 0x1018(0x4)
	struct FVector PostProcessEffectEdgeColor; // 0x101C(0xC)
	struct FVector NightPostProcessEffectEdgeColor; // 0x1028(0xC)
	float ClientPostProcessEffectTickRate; // 0x1034(0x4)
	struct FName FindEnenmyVO; // 0x1038(0x8)
	struct FName FindHeavyArmorEnenmyVO; // 0x1040(0x8)
	float MarkEnemyTime; // 0x1048(0x4)
	float MarkVehicleTime; // 0x104C(0x4)
	float DetectorLifeTime; // 0x1050(0x4)
	float ScanInterval; // 0x1054(0x4)
	float MinScanRadius; // 0x1058(0x4)
	float MaxScanRadius; // 0x105C(0x4)
	float MaxScanRadiusHeight; // 0x1060(0x4)
	uint8_t bNeedBlockCheck : 1; // 0x1064(0x1), Mask(0x1)
	uint8_t BitPad_0x1064_1 : 7; // 0x1064(0x1)
	uint8_t bNeedMarkEnemyInMap : 1; // 0x1065(0x1), Mask(0x1)
	uint8_t BitPad_0x1065_1 : 7; // 0x1065(0x1)
	uint8_t Pad_0x1066[0x2]; // 0x1066(0x2)
	int32_t CheckBlockTime; // 0x1068(0x4)
	float DetectorEndTime; // 0x106C(0x4)
	struct TArray<struct FProxSensorArrowScanData> GameModeScanDataList; // 0x1070(0x10)
	uint8_t Pad_0x1080[0x30]; // 0x1080(0x30)
	struct UBoxComponent* ProxSensorBoxCache; // 0x10B0(0x8)
	struct TMap<int64_t, struct FVector> EnemyLocationMap; // 0x10B8(0x50)
	struct TSet<int32_t> ScanCharacterSet; // 0x1108(0x50)
	struct FVector RelativeHitPos; // 0x1158(0xC)
	struct FVector LastHitGroundPos; // 0x1164(0xC)
	struct FVector LastTickActorPos; // 0x1170(0xC)
	uint8_t Pad_0x117C[0x4]; // 0x117C(0x4)
	struct TArray<struct AActor*> Ignores; // 0x1180(0x10)
	struct FName RealClientPostProcessEffectName; // 0x1190(0x8)
	struct TArray<struct AActor*> LastCheckBlockedList; // 0x1198(0x10)
	uint8_t Pad_0x11A8[0x8]; // 0x11A8(0x8)

	// Object: Function DFMAbility.WeaponBulletProxSensorArrow.UpdateClientPostProcessEffect
	// Flags: [Final|Native|Public]
	// Offset: 0xc4698c4
	// Params: [ Num(0) Size(0x0) ]
	void UpdateClientPostProcessEffect();

	// Object: Function DFMAbility.WeaponBulletProxSensorArrow.TryScanEnemy
	// Flags: [Final|Native|Public]
	// Offset: 0xc4698b0
	// Params: [ Num(0) Size(0x0) ]
	void TryScanEnemy();

	// Object: Function DFMAbility.WeaponBulletProxSensorArrow.TryScanCharacter
	// Flags: [Final|Native|Protected|HasOutParms|HasDefaults]
	// Offset: 0xc469694
	// Params: [ Num(6) Size(0x29) ]
	void TryScanCharacter(struct ADFMCharacter* TargetChar, struct FVector& StartLocation, uint8_t IsPassenger, int64_t& EffectAICnt, int64_t& EffectPlayerCnt, uint8_t IsSecondCheck);

	// Object: Function DFMAbility.WeaponBulletProxSensorArrow.TimeOutDestory
	// Flags: [Final|Native|Public]
	// Offset: 0xc469680
	// Params: [ Num(0) Size(0x0) ]
	void TimeOutDestory();

	// Object: Function DFMAbility.WeaponBulletProxSensorArrow.SyncEnemyLocationsToTeamMates
	// Flags: [Final|Native|Public]
	// Offset: 0xc46966c
	// Params: [ Num(0) Size(0x0) ]
	void SyncEnemyLocationsToTeamMates();

	// Object: Function DFMAbility.WeaponBulletProxSensorArrow.SyncDetectorLocationsToTeamMates
	// Flags: [Final|Native|Public]
	// Offset: 0xc469658
	// Params: [ Num(0) Size(0x0) ]
	void SyncDetectorLocationsToTeamMates();

	// Object: Function DFMAbility.WeaponBulletProxSensorArrow.IsOnwerEnemyWithVehicle
	// Flags: [Final|Native|Public]
	// Offset: 0xc4695a8
	// Params: [ Num(2) Size(0x9) ]
	uint8_t IsOnwerEnemyWithVehicle(struct ADFMVehicleBase* Vehicle);

	// Object: Function DFMAbility.WeaponBulletProxSensorArrow.IsOnwerEnemyWithCharacter
	// Flags: [Final|Native|Public]
	// Offset: 0xc4694f8
	// Params: [ Num(2) Size(0x9) ]
	uint8_t IsOnwerEnemyWithCharacter(struct AGPCharacterBase* Charecter);

	// Object: Function DFMAbility.WeaponBulletProxSensorArrow.GetStartScanLocation
	// Flags: [Final|Native|Private|HasDefaults]
	// Offset: 0xc4694c0
	// Params: [ Num(1) Size(0xC) ]
	struct FVector GetStartScanLocation();

	// Object: Function DFMAbility.WeaponBulletProxSensorArrow.CheckDeformableBlock
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults]
	// Offset: 0xc469378
	// Params: [ Num(4) Size(0x21) ]
	uint8_t CheckDeformableBlock(const struct FVector& RayStart, const struct FVector& RayEnd, struct AActor* Target);

	// Object: Function DFMAbility.WeaponBulletProxSensorArrow.CheckBlock
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults]
	// Offset: 0xc469234
	// Params: [ Num(4) Size(0x1A) ]
	uint8_t CheckBlock(const struct FVector& StartLocation, struct AActor* Target, uint8_t GetHeadPos);

	// Object: Function DFMAbility.WeaponBulletProxSensorArrow.AddScoreInfo
	// Flags: [Final|Native|Public]
	// Offset: 0xc469220
	// Params: [ Num(0) Size(0x0) ]
	void AddScoreInfo();

	// Object: Function DFMAbility.WeaponBulletProxSensorArrow.ActiveClientPostProcessEffect
	// Flags: [Final|Native|Public]
	// Offset: 0xc469174
	// Params: [ Num(1) Size(0x1) ]
	void ActiveClientPostProcessEffect(uint8_t Active);
};

// Object: Class DFMAbility.WeaponBulletSupport
// Size: 0xF90 (Inherited: 0xF60)
struct AWeaponBulletSupport : AWeaponBulletBuff
{
	DEFINE_UE_CLASS_HELPERS(AWeaponBulletSupport, "WeaponBulletSupport")

	uint8_t DebugRadius : 1; // 0xF59(0x1), Mask(0x1)
	uint8_t DebugBulletRadius : 1; // 0xF5A(0x1), Mask(0x1)
	float TeamMateBulletRaidus; // 0xF5C(0x4)
	float MinHomingDistance; // 0xF60(0x4)
	float ProjectileFindHomingTargetDistance; // 0xF64(0x4)
	struct FVector HomingSpeed; // 0xF68(0xC)
	struct FName AimTag; // 0xF74(0x8)
	struct FName HomingSocketName; // 0xF7C(0x8)
	struct AActor* HomingTarget; // 0xF88(0x8)

	// Object: Function DFMAbility.WeaponBulletSupport.ServerOverlapByBullet
	// Flags: [Net|NetReliableNative|Event|Public|NetServer]
	// Offset: 0xc469960
	// Params: [ Num(1) Size(0x8) ]
	void ServerOverlapByBullet(struct AActor* Target);

	// Object: Function DFMAbility.WeaponBulletSupport.OnRep_HomingTarget
	// Flags: [Final|Native|Public]
	// Offset: 0x106acc20
	// Params: [ Num(0) Size(0x0) ]
	void OnRep_HomingTarget();
};

// Object: Class DFMAbility.WeaponFireModeBionicBirdParams
// Size: 0x340 (Inherited: 0x300)
struct UWeaponFireModeBionicBirdParams : UWeaponFireModeParamsThrowable
{
	DEFINE_UE_CLASS_HELPERS(UWeaponFireModeBionicBirdParams, "WeaponFireModeBionicBirdParams")

	struct TSoftClassPtr<struct ABionicBirdActor*> BionicBirdActorClassPath; // 0x300(0x28)
	struct TArray<struct FVector> BionicBirdOffsetArray; // 0x328(0x10)
	float BionicBirdCheckRadius; // 0x338(0x4)
	float SafeSwitchWeaponCheckTime; // 0x33C(0x4)
};

// Object: Class DFMAbility.WeaponFireModeBionicBird
// Size: 0x240 (Inherited: 0x230)
struct UWeaponFireModeBionicBird : UWeaponFireModeThrowable
{
	DEFINE_UE_CLASS_HELPERS(UWeaponFireModeBionicBird, "WeaponFireModeBionicBird")

	struct UWeaponFireModeBionicBirdParams* BionicBirdParams; // 0x230(0x8)
	struct FTimerHandle SafeSwitchWeaponCheckTimerHandle; // 0x238(0x8)

	// Object: Function DFMAbility.WeaponFireModeBionicBird.TrySpawnBionicBirdActor
	// Flags: [Final|Native|Private|HasDefaults]
	// Offset: 0xc469b74
	// Params: [ Num(2) Size(0x18) ]
	void TrySpawnBionicBirdActor(struct FVector StartLocation, struct FRotator FireRotation);

	// Object: Function DFMAbility.WeaponFireModeBionicBird.StopSafeSwitchWeaponCheckTimer
	// Flags: [Final|Native|Private]
	// Offset: 0xc469b60
	// Params: [ Num(0) Size(0x0) ]
	void StopSafeSwitchWeaponCheckTimer();

	// Object: Function DFMAbility.WeaponFireModeBionicBird.StartSafeSwitchWeaponCheckTimer
	// Flags: [Final|Native|Private]
	// Offset: 0xc469b4c
	// Params: [ Num(0) Size(0x0) ]
	void StartSafeSwitchWeaponCheckTimer();

	// Object: Function DFMAbility.WeaponFireModeBionicBird.DoSafeSwitchWeaponCheck
	// Flags: [Final|Native|Private]
	// Offset: 0xc469b38
	// Params: [ Num(0) Size(0x0) ]
	void DoSafeSwitchWeaponCheck();

	// Object: Function DFMAbility.WeaponFireModeBionicBird.DoFailedSwitchWeapon
	// Flags: [Final|Native|Private]
	// Offset: 0xc469b24
	// Params: [ Num(0) Size(0x0) ]
	void DoFailedSwitchWeapon();

	// Object: Function DFMAbility.WeaponFireModeBionicBird.CheckSpawnLocation
	// Flags: [Final|Native|Private|HasDefaults]
	// Offset: 0xc469a38
	// Params: [ Num(3) Size(0x24) ]
	struct FVector CheckSpawnLocation(struct FVector StartLocation, struct FRotator FireRotation);
};

// Object: Class DFMAbility.WeaponFireModeBionicSpyParams
// Size: 0x308 (Inherited: 0x300)
struct UWeaponFireModeBionicSpyParams : UWeaponFireModeParamsThrowable
{
	DEFINE_UE_CLASS_HELPERS(UWeaponFireModeBionicSpyParams, "WeaponFireModeBionicSpyParams")

	struct ABionicSpyActor* BionicSpyActorClass; // 0x300(0x8)
};

// Object: Class DFMAbility.WeaponFireModeBionicSpy
// Size: 0x238 (Inherited: 0x230)
struct UWeaponFireModeBionicSpy : UWeaponFireModeThrowable
{
	DEFINE_UE_CLASS_HELPERS(UWeaponFireModeBionicSpy, "WeaponFireModeBionicSpy")

	struct UWeaponFireModeBionicSpyParams* BionicSpyParams; // 0x230(0x8)

	// Object: Function DFMAbility.WeaponFireModeBionicSpy.TrySpawnSpyActor
	// Flags: [Final|Native|Private]
	// Offset: 0xc469c68
	// Params: [ Num(1) Size(0x4) ]
	void TrySpawnSpyActor(uint32_t PlayerUid);
};

// Object: Class DFMAbility.WeaponFireModeParamsPlacementDetector
// Size: 0x578 (Inherited: 0x538)
struct UWeaponFireModeParamsPlacementDetector : UWeaponFireModeParamsPlacement
{
	DEFINE_UE_CLASS_HELPERS(UWeaponFireModeParamsPlacementDetector, "WeaponFireModeParamsPlacementDetector")

	uint8_t bUseRangeDisplay : 1; // 0x534(0x1), Mask(0x1)
	float DisplayRange; // 0x538(0x4)
	uint8_t bUseRangeConflict : 1; // 0x53C(0x1), Mask(0x1)
	uint8_t BitPad_0x53C_2 : 6; // 0x53C(0x1)
	uint8_t Pad_0x53D[0x3]; // 0x53D(0x3)
	float MinConflictPlaceDistance; // 0x540(0x4)
	uint8_t Pad_0x544[0x4]; // 0x544(0x4)
	struct TArray<struct ADFMAbilityDetectorBase*> ConflictActorClass; // 0x548(0x10)
	struct FText ConflictText; // 0x558(0x18)
	float TipDuration; // 0x570(0x4)
	uint8_t Pad_0x574[0x4]; // 0x574(0x4)
};

// Object: Class DFMAbility.WeaponFireModePlacementDetector
// Size: 0x348 (Inherited: 0x340)
struct UWeaponFireModePlacementDetector : UWeaponFireModePlacement
{
	DEFINE_UE_CLASS_HELPERS(UWeaponFireModePlacementDetector, "WeaponFireModePlacementDetector")

	struct UWeaponFireModeParamsPlacementDetector* DetectorPlacementParam; // 0x340(0x8)
};

// Object: Class DFMAbility.WeaponFireModeSpiderParams
// Size: 0x388 (Inherited: 0x300)
struct UWeaponFireModeSpiderParams : UWeaponFireModeParamsThrowable
{
	DEFINE_UE_CLASS_HELPERS(UWeaponFireModeSpiderParams, "WeaponFireModeSpiderParams")

	struct TSoftClassPtr<struct ASpiderBase*> SpiderActorClassPath; // 0x300(0x28)
	struct TSoftClassPtr<struct ASpiderBase*> SpiderActorClassPath_MP; // 0x328(0x28)
	struct TSoftClassPtr<struct AActor*> SpiderPreviewActorClassPath; // 0x350(0x28)
	float PreviewActorOffsetLerpSpeed; // 0x378(0x4)
	float PreviewActorOffsetZ; // 0x37C(0x4)
	float PreviewActorOffsetZ_Crouch; // 0x380(0x4)
	float PreviewActorOffsetZ_Prone; // 0x384(0x4)
};

// Object: Class DFMAbility.WeaponFireModeSpider
// Size: 0x258 (Inherited: 0x230)
struct UWeaponFireModeSpider : UWeaponFireModeThrowable
{
	DEFINE_UE_CLASS_HELPERS(UWeaponFireModeSpider, "WeaponFireModeSpider")

	struct UWeaponFireModeSpiderParams* SpiderParams; // 0x230(0x8)
	struct AActor* SpiderPreviewActor; // 0x238(0x8)
	uint8_t bIsPreviewHidden : 1; // 0x240(0x1), Mask(0x1)
	uint8_t BitPad_0x240_1 : 7; // 0x240(0x1)
	uint8_t Pad_0x241[0x7]; // 0x241(0x7)
	uint64_t LoadPreviewActorHandler; // 0x248(0x8)
	uint8_t Pad_0x250[0x8]; // 0x250(0x8)

	// Object: Function DFMAbility.WeaponFireModeSpider.UpdatePreview
	// Flags: [Final|Native|Protected]
	// Offset: 0xc46a1bc
	// Params: [ Num(1) Size(0x4) ]
	void UpdatePreview(float DeltaTime);

	// Object: Function DFMAbility.WeaponFireModeSpider.TrySpawnSpiderActor
	// Flags: [Final|Native|Protected|HasOutParms|HasDefaults]
	// Offset: 0xc46a0c4
	// Params: [ Num(2) Size(0x18) ]
	void TrySpawnSpiderActor(const struct FVector& StartLocation, const struct FRotator& FireRotation);

	// Object: Function DFMAbility.WeaponFireModeSpider.SetPreviewHiddenInGame
	// Flags: [Final|Native|Protected]
	// Offset: 0xc46a018
	// Params: [ Num(1) Size(0x1) ]
	void SetPreviewHiddenInGame(uint8_t bHidden);

	// Object: Function DFMAbility.WeaponFireModeSpider.OnPreviewActorLoaded
	// Flags: [Final|Native|Protected|HasOutParms|HasDefaults]
	// Offset: 0xc469f58
	// Params: [ Num(1) Size(0x18) ]
	void OnPreviewActorLoaded(const struct FSoftObjectPath& Path);

	// Object: Function DFMAbility.WeaponFireModeSpider.LoadPreviewActor
	// Flags: [Final|Native|Protected]
	// Offset: 0xc469f44
	// Params: [ Num(0) Size(0x0) ]
	void LoadPreviewActor();

	// Object: Function DFMAbility.WeaponFireModeSpider.GetPreviewActorLocation
	// Flags: [Final|Native|Protected|HasOutParms|HasDefaults]
	// Offset: 0xc469e08
	// Params: [ Num(3) Size(0x1C) ]
	void GetPreviewActorLocation(struct FVector& OutStartLocation, struct FRotator& OutFireRotation, float DeltaTime);

	// Object: Function DFMAbility.WeaponFireModeSpider.GetPreviewActorClassPath
	// Flags: [Final|Native|Protected|HasDefaults]
	// Offset: 0xc469d64
	// Params: [ Num(1) Size(0x18) ]
	struct FSoftObjectPath GetPreviewActorClassPath();

	// Object: Function DFMAbility.WeaponFireModeSpider.ClearLoadPreviewActor
	// Flags: [Final|Native|Protected]
	// Offset: 0xc469d50
	// Params: [ Num(0) Size(0x0) ]
	void ClearLoadPreviewActor();
};

// Object: Class DFMAbility.WeaponFireModeSupport
// Size: 0x790 (Inherited: 0x788)
struct UWeaponFireModeSupport : UWeaponFireModePhysicSimulate
{
	DEFINE_UE_CLASS_HELPERS(UWeaponFireModeSupport, "WeaponFireModeSupport")

	uint8_t Pad_0x788[0x8]; // 0x788(0x8)
};

// Object: Class DFMAbility.WeaponFireModeSupportPack
// Size: 0x788 (Inherited: 0x788)
struct UWeaponFireModeSupportPack : UWeaponFireModePhysicSimulate
{
	DEFINE_UE_CLASS_HELPERS(UWeaponFireModeSupportPack, "WeaponFireModeSupportPack")
};

// Object: Class DFMAbility.WeaponFireModeParamsSuppressionMinePlacement
// Size: 0x558 (Inherited: 0x538)
struct UWeaponFireModeParamsSuppressionMinePlacement : UWeaponFireModeParamsPlacement
{
	DEFINE_UE_CLASS_HELPERS(UWeaponFireModeParamsSuppressionMinePlacement, "WeaponFireModeParamsSuppressionMinePlacement")

	float MinConflictPlaceDistance; // 0x534(0x4)
	struct FText ConflictText; // 0x538(0x18)
	float TipDuration; // 0x550(0x4)
};

// Object: Class DFMAbility.WeaponFireModeSuppressionMinePlacement
// Size: 0x348 (Inherited: 0x340)
struct UWeaponFireModeSuppressionMinePlacement : UWeaponFireModePlacement
{
	DEFINE_UE_CLASS_HELPERS(UWeaponFireModeSuppressionMinePlacement, "WeaponFireModeSuppressionMinePlacement")

	struct UWeaponFireModeParamsSuppressionMinePlacement* SuppressionMinePlacementParam; // 0x340(0x8)
};

// Object: Class DFMAbility.WeaponFireModeSwarmsParams
// Size: 0x3A0 (Inherited: 0x300)
struct UWeaponFireModeSwarmsParams : UWeaponFireModeParamsThrowable
{
	DEFINE_UE_CLASS_HELPERS(UWeaponFireModeSwarmsParams, "WeaponFireModeSwarmsParams")

	uint8_t bFireStopSprint_SOL : 1; // 0x2FC(0x1), Mask(0x1)
	uint8_t bFireStopMove_SOL : 1; // 0x2FD(0x1), Mask(0x1)
	uint8_t bFireStopSprint_BF : 1; // 0x2FE(0x1), Mask(0x1)
	uint8_t bFireStopMove_BF : 1; // 0x2FF(0x1), Mask(0x1)
	struct TSoftClassPtr<struct AZoyaSwarmsActor*> SwarmsActorClassPath; // 0x300(0x28)
	struct TSoftClassPtr<struct AZoyaSwarmsActor*> SwarmsActorClassPath_HD; // 0x328(0x28)
	float SwarmsActorOffsetLerpSpeed; // 0x350(0x4)
	float SwarmsActorOffsetZ; // 0x354(0x4)
	float SwarmsActorOffsetZ_Crouch; // 0x358(0x4)
	float SwarmsActorOffsetZ_Prone; // 0x35C(0x4)
	struct TSoftClassPtr<struct AZoyaSwarmsPreviewActor*> SwarmsPreviewActorClassPath; // 0x360(0x28)
	float SwarmsPreviewActorOffsetZ; // 0x388(0x4)
	struct FName SwarmsAimHud; // 0x38C(0x8)
	struct FName AimScreenEffectName; // 0x394(0x8)
	float AimScreenEffectCD; // 0x39C(0x4)
};

// Object: Class DFMAbility.WeaponFireModeSwarms
// Size: 0x268 (Inherited: 0x230)
struct UWeaponFireModeSwarms : UWeaponFireModeThrowable
{
	DEFINE_UE_CLASS_HELPERS(UWeaponFireModeSwarms, "WeaponFireModeSwarms")

	struct UWeaponFireModeSwarmsParams* SwarmsParams; // 0x230(0x8)
	struct AZoyaSwarmsPreviewActor* SwarmsPreviewActor; // 0x238(0x8)
	uint8_t bIsPreviewHidden : 1; // 0x240(0x1), Mask(0x1)
	uint8_t BitPad_0x240_1 : 7; // 0x240(0x1)
	uint8_t Pad_0x241[0x3]; // 0x241(0x3)
	float LastActorOffsetZ; // 0x244(0x4)
	float TargetActorOffsetZ; // 0x248(0x4)
	float NextShowScreenEffectTime; // 0x24C(0x4)
	uint8_t bFireStopSprint : 1; // 0x250(0x1), Mask(0x1)
	uint8_t BitPad_0x250_1 : 7; // 0x250(0x1)
	uint8_t bFireStopMove : 1; // 0x251(0x1), Mask(0x1)
	uint8_t BitPad_0x251_1 : 7; // 0x251(0x1)
	uint8_t bIsCanSwarmsFire : 1; // 0x252(0x1), Mask(0x1)
	uint8_t BitPad_0x252_1 : 7; // 0x252(0x1)
	uint8_t Pad_0x253[0xD]; // 0x253(0xD)
	uint8_t bForceDefaultPreviewActor : 1; // 0x260(0x1), Mask(0x1)
	uint8_t BitPad_0x260_1 : 7; // 0x260(0x1)
	uint8_t Pad_0x261[0x3]; // 0x261(0x3)
	float DataFlowEquipTime; // 0x264(0x4)

	// Object: Function DFMAbility.WeaponFireModeSwarms.UpdatePreview
	// Flags: [Final|Native|Private]
	// Offset: 0xc46cc38
	// Params: [ Num(1) Size(0x4) ]
	void UpdatePreview(float DeltaTime);

	// Object: Function DFMAbility.WeaponFireModeSwarms.TrySpawnSwarmsActor
	// Flags: [Final|Native|Private|HasOutParms|HasDefaults]
	// Offset: 0xc46cb40
	// Params: [ Num(2) Size(0x18) ]
	void TrySpawnSwarmsActor(const struct FVector& StartLocation, const struct FRotator& FireRotation);

	// Object: Function DFMAbility.WeaponFireModeSwarms.TryShowScreenEffect
	// Flags: [Final|Native|Private]
	// Offset: 0xc46cb2c
	// Params: [ Num(0) Size(0x0) ]
	void TryShowScreenEffect();

	// Object: Function DFMAbility.WeaponFireModeSwarms.TickActorOffsetZ
	// Flags: [Final|Native|Private]
	// Offset: 0xc46ca88
	// Params: [ Num(1) Size(0x4) ]
	void TickActorOffsetZ(float DeltaTime);

	// Object: Function DFMAbility.WeaponFireModeSwarms.SetPreviewHiddenInGame
	// Flags: [Final|Native|Private]
	// Offset: 0xc46c9dc
	// Params: [ Num(1) Size(0x1) ]
	void SetPreviewHiddenInGame(uint8_t bHidden);

	// Object: Function DFMAbility.WeaponFireModeSwarms.SetCanSprint
	// Flags: [Final|Native|Private]
	// Offset: 0xc46c930
	// Params: [ Num(1) Size(0x1) ]
	void SetCanSprint(uint8_t bCanSprint);

	// Object: Function DFMAbility.WeaponFireModeSwarms.SetCanFire
	// Flags: [Final|Native|Private]
	// Offset: 0xc46c884
	// Params: [ Num(1) Size(0x1) ]
	void SetCanFire(uint8_t CanFire);

	// Object: Function DFMAbility.WeaponFireModeSwarms.SetAimHUD
	// Flags: [Final|Native|Private]
	// Offset: 0xc46c7d8
	// Params: [ Num(1) Size(0x1) ]
	void SetAimHUD(uint8_t bIsShowHud);

	// Object: Function DFMAbility.WeaponFireModeSwarms.OnWeaponInteractive
	// Flags: [Final|Native|Private]
	// Offset: 0xc46c72c
	// Params: [ Num(1) Size(0x1) ]
	void OnWeaponInteractive(uint8_t bIsInteractive);

	// Object: Function DFMAbility.WeaponFireModeSwarms.OnPreviewActorLoaded
	// Flags: [Final|Native|Private|HasOutParms|HasDefaults]
	// Offset: 0xc46c664
	// Params: [ Num(1) Size(0x18) ]
	void OnPreviewActorLoaded(const struct FSoftObjectPath& Path);

	// Object: Function DFMAbility.WeaponFireModeSwarms.LoadPreviewActor
	// Flags: [Final|Native|Private]
	// Offset: 0xc46c648
	// Params: [ Num(0) Size(0x0) ]
	void LoadPreviewActor();

	// Object: Function DFMAbility.WeaponFireModeSwarms.IsUseHD
	// Flags: [Final|Native|Private|Const]
	// Offset: 0xc46c610
	// Params: [ Num(1) Size(0x1) ]
	uint8_t IsUseHD();

	// Object: Function DFMAbility.WeaponFireModeSwarms.IsInSOL
	// Flags: [Final|Native|Private|Const]
	// Offset: 0xc46c5d8
	// Params: [ Num(1) Size(0x1) ]
	uint8_t IsInSOL();

	// Object: Function DFMAbility.WeaponFireModeSwarms.GetPreviewActorLocation
	// Flags: [Final|Native|Private|HasOutParms|HasDefaults]
	// Offset: 0xc46c4e0
	// Params: [ Num(2) Size(0x18) ]
	void GetPreviewActorLocation(struct FVector& OutStartLocation, struct FRotator& OutFireRotation);

	// Object: Function DFMAbility.WeaponFireModeSwarms.GetPreviewActorClassPath
	// Flags: [Final|Native|Private|HasDefaults]
	// Offset: 0xc46c43c
	// Params: [ Num(1) Size(0x18) ]
	struct FSoftObjectPath GetPreviewActorClassPath();

	// Object: Function DFMAbility.WeaponFireModeSwarms.GetDFMOwnerCharacter
	// Flags: [Final|Native|Private|Const]
	// Offset: 0xc46c408
	// Params: [ Num(1) Size(0x8) ]
	struct ADFMCharacter* GetDFMOwnerCharacter();

	// Object: Function DFMAbility.WeaponFireModeSwarms.GetAvatarID
	// Flags: [Final|Native|Private|Const]
	// Offset: 0xc46c3d4
	// Params: [ Num(1) Size(0x8) ]
	uint64_t GetAvatarID();

	// Object: Function DFMAbility.WeaponFireModeSwarms.DataFlowGetSkillComponent
	// Flags: [Final|Native|Private|Const]
	// Offset: 0xc46c3a0
	// Params: [ Num(1) Size(0x8) ]
	struct UGPSkillComponent* DataFlowGetSkillComponent();

	// Object: Function DFMAbility.WeaponFireModeSwarms.DataFlowAddEquipCount
	// Flags: [Final|Native|Private]
	// Offset: 0xc46c38c
	// Params: [ Num(0) Size(0x0) ]
	void DataFlowAddEquipCount();

	// Object: Function DFMAbility.WeaponFireModeSwarms.DataFlowAddCastCount
	// Flags: [Final|Native|Private]
	// Offset: 0xc46c378
	// Params: [ Num(0) Size(0x0) ]
	void DataFlowAddCastCount();

	// Object: Function DFMAbility.WeaponFireModeSwarms.ClearLoadPreviewActor
	// Flags: [Final|Native|Private]
	// Offset: 0xc46c35c
	// Params: [ Num(0) Size(0x0) ]
	void ClearLoadPreviewActor();

	// Object: Function DFMAbility.WeaponFireModeSwarms.CheckIsCanSwarmsFire
	// Flags: [Final|Native|Public|Const]
	// Offset: 0xc46c324
	// Params: [ Num(1) Size(0x1) ]
	uint8_t CheckIsCanSwarmsFire();
};

// Object: Class DFMAbility.WeaponFireModeParamsThrowableSpawnSmokeUAS
// Size: 0x348 (Inherited: 0x300)
struct UWeaponFireModeParamsThrowableSpawnSmokeUAS : UWeaponFireModeParamsThrowable
{
	DEFINE_UE_CLASS_HELPERS(UWeaponFireModeParamsThrowableSpawnSmokeUAS, "WeaponFireModeParamsThrowableSpawnSmokeUAS")

	struct AActor* ActorClass; // 0x300(0x8)
	struct TSoftClassPtr<struct AActor*> ActorClassPtr; // 0x308(0x28)
	struct TArray<struct FGameModeSpawnSmokeUASConfig> GameModeActorClassArray; // 0x330(0x10)
	struct FName TargetSocketName; // 0x340(0x8)
};

// Object: Class DFMAbility.WeaponFireModeThrowableSpawnSmokeUAS
// Size: 0x258 (Inherited: 0x230)
struct UWeaponFireModeThrowableSpawnSmokeUAS : UWeaponFireModeThrowable
{
	DEFINE_UE_CLASS_HELPERS(UWeaponFireModeThrowableSpawnSmokeUAS, "WeaponFireModeThrowableSpawnSmokeUAS")

	struct UWeaponFireModeParamsThrowableSpawnSmokeUAS* LocalWeaponFireModeParams; // 0x230(0x8)
	uint64_t CurrentFireId; // 0x238(0x8)
	float StopedAccumulateTime; // 0x240(0x4)
	float FlyAccumulateTime; // 0x244(0x4)
	float MaxFlyTime; // 0x248(0x4)
	float MaxStopedTime; // 0x24C(0x4)
	uint8_t Pad_0x250[0x8]; // 0x250(0x8)

	// Object: Function DFMAbility.WeaponFireModeThrowableSpawnSmokeUAS.UnRegisterLocalUASActorInitiazliced
	// Flags: [Final|Native|Protected]
	// Offset: 0xc46ce80
	// Params: [ Num(0) Size(0x0) ]
	void UnRegisterLocalUASActorInitiazliced();

	// Object: Function DFMAbility.WeaponFireModeThrowableSpawnSmokeUAS.TickCheckUASMoveEnd
	// Flags: [Final|Native|Protected]
	// Offset: 0xc46cddc
	// Params: [ Num(1) Size(0x4) ]
	void TickCheckUASMoveEnd(float DeltaTime);

	// Object: Function DFMAbility.WeaponFireModeThrowableSpawnSmokeUAS.SpawnThrowableActor
	// Flags: [Final|Native|Protected]
	// Offset: 0xc46cdc8
	// Params: [ Num(0) Size(0x0) ]
	void SpawnThrowableActor();

	// Object: Function DFMAbility.WeaponFireModeThrowableSpawnSmokeUAS.RegisterLocalUASActorInitiazliced
	// Flags: [Final|Native|Protected]
	// Offset: 0xc46cdb4
	// Params: [ Num(0) Size(0x0) ]
	void RegisterLocalUASActorInitiazliced();

	// Object: Function DFMAbility.WeaponFireModeThrowableSpawnSmokeUAS.OnLocalGPUASActorInitiazliced
	// Flags: [Final|Native|Public]
	// Offset: 0x106ff55c
	// Params: [ Num(1) Size(0x8) ]
	void OnLocalGPUASActorInitiazliced(struct AGPUASActor* GPUASActor);

	// Object: Function DFMAbility.WeaponFireModeThrowableSpawnSmokeUAS.OnEndReleaseUAS
	// Flags: [Final|Native|Protected]
	// Offset: 0xc46cda0
	// Params: [ Num(0) Size(0x0) ]
	void OnEndReleaseUAS();

	// Object: Function DFMAbility.WeaponFireModeThrowableSpawnSmokeUAS.OnBeginReleaseUAS
	// Flags: [Final|Native|Protected]
	// Offset: 0xc46cd8c
	// Params: [ Num(0) Size(0x0) ]
	void OnBeginReleaseUAS();
};

// Object: Class DFMAbility.WeaponFireModeParamsThrowBlocking
// Size: 0x558 (Inherited: 0x538)
struct UWeaponFireModeParamsThrowBlocking : UWeaponFireModeParamsPlacement
{
	DEFINE_UE_CLASS_HELPERS(UWeaponFireModeParamsThrowBlocking, "WeaponFireModeParamsThrowBlocking")

	float WallSurfaceMinAngle; // 0x534(0x4)
	float HorizontalToWallSurfaceMinAngle; // 0x538(0x4)
	float FullyExpandedStepbackDistance; // 0x53C(0x4)
	struct FVector CheckCharacterAddExtent; // 0x540(0xC)
	struct FName SwitchButtonName; // 0x54C(0x8)
};

// Object: Class DFMAbility.WeaponFireModeThrowBlocking
// Size: 0x360 (Inherited: 0x340)
struct UWeaponFireModeThrowBlocking : UWeaponFireModePlacement
{
	DEFINE_UE_CLASS_HELPERS(UWeaponFireModeThrowBlocking, "WeaponFireModeThrowBlocking")

	EThrowBlockingExpansionType ExpansionType; // 0x340(0x1)
	uint8_t Pad_0x341[0x7]; // 0x341(0x7)
	struct UWeaponFireModeParamsThrowBlocking* ThrowBlockingPreviewParam; // 0x348(0x8)
	struct FVector LastHitResultNormal; // 0x350(0xC)
	uint8_t Pad_0x35C[0x4]; // 0x35C(0x4)

	// Object: Function DFMAbility.WeaponFireModeThrowBlocking.ShowSwitchButtonHUD
	// Flags: [Final|Native|Private]
	// Offset: 0xc46cf80
	// Params: [ Num(1) Size(0x1) ]
	void ShowSwitchButtonHUD(uint8_t bActive);

	// Object: Function DFMAbility.WeaponFireModeThrowBlocking.OnWeaponStopFire
	// Flags: [Final|Native|Private]
	// Offset: 0xc46cf6c
	// Params: [ Num(0) Size(0x0) ]
	void OnWeaponStopFire();

	// Object: Function DFMAbility.WeaponFireModeThrowBlocking.CheckThrowBlockingPreviewPart
	// Flags: [Final|Native|Private]
	// Offset: 0xc46cf58
	// Params: [ Num(0) Size(0x0) ]
	void CheckThrowBlockingPreviewPart();
};

// Object: Class DFMAbility.WeaponFuncComponentZoyaSwarmsItem
// Size: 0x170 (Inherited: 0x168)
struct UWeaponFuncComponentZoyaSwarmsItem : UGPWeaponFuncComponentBase
{
	DEFINE_UE_CLASS_HELPERS(UWeaponFuncComponentZoyaSwarmsItem, "WeaponFuncComponentZoyaSwarmsItem")

	struct FName SkillMeshName; // 0x164(0x8)

	// Object: Function DFMAbility.WeaponFuncComponentZoyaSwarmsItem.TrySpawnCastEffect_3P
	// Flags: [Final|Native|Private|Const]
	// Offset: 0xc46d374
	// Params: [ Num(2) Size(0xC) ]
	void TrySpawnCastEffect_3P(int32_t EffectNum, struct FName EffectName);

	// Object: Function DFMAbility.WeaponFuncComponentZoyaSwarmsItem.TrySpawnCastEffect_1P
	// Flags: [Final|Native|Private|Const]
	// Offset: 0xc46d294
	// Params: [ Num(2) Size(0xC) ]
	void TrySpawnCastEffect_1P(int32_t EffectNum, struct FName EffectName);

	// Object: Function DFMAbility.WeaponFuncComponentZoyaSwarmsItem.TrySpawnCastEffect
	// Flags: [Final|Native|Private|Const]
	// Offset: 0xc46d280
	// Params: [ Num(0) Size(0x0) ]
	void TrySpawnCastEffect();

	// Object: Function DFMAbility.WeaponFuncComponentZoyaSwarmsItem.TryShowScreenEffect
	// Flags: [Final|Native|Private|Const]
	// Offset: 0xc46d1dc
	// Params: [ Num(1) Size(0x8) ]
	void TryShowScreenEffect(struct FName EffectName);

	// Object: Function DFMAbility.WeaponFuncComponentZoyaSwarmsItem.SetCharacterItemIsBindToTarget
	// Flags: [Final|Native|Private|Const]
	// Offset: 0xc46d130
	// Params: [ Num(1) Size(0x1) ]
	void SetCharacterItemIsBindToTarget(uint8_t bIsBindToTarget);

	// Object: Function DFMAbility.WeaponFuncComponentZoyaSwarmsItem.DoSetCharacterItemIsBindToTarget
	// Flags: [Final|Native|Private|Const]
	// Offset: 0xc46d040
	// Params: [ Num(2) Size(0x2) ]
	void DoSetCharacterItemIsBindToTarget(uint8_t bIsBindToTarget, uint8_t bIs1P);
};

// Object: Class DFMAbility.WeaponThrowableDataComponentBubble
// Size: 0x410 (Inherited: 0x408)
struct UWeaponThrowableDataComponentBubble : UGPWeaponDataComponentBase
{
	DEFINE_UE_CLASS_HELPERS(UWeaponThrowableDataComponentBubble, "WeaponThrowableDataComponentBubble")

	ESupportType SupportType; // 0x408(0x1)
	uint8_t Pad_0x409[0x7]; // 0x409(0x7)
};

// Object: Class DFMAbility.WeaponThrowBunkerDataComponentAnim
// Size: 0xB98 (Inherited: 0xB80)
struct UWeaponThrowBunkerDataComponentAnim : UWeaponThrowableDataComponentAnim
{
	DEFINE_UE_CLASS_HELPERS(UWeaponThrowBunkerDataComponentAnim, "WeaponThrowBunkerDataComponentAnim")

	int32_t WeaponHeroID; // 0xB80(0x4)
	uint8_t Pad_0xB84[0x4]; // 0xB84(0x4)
	struct UGPAudioEventAsset* Sonic_Defense_Idle; // 0xB88(0x8)
	struct UGPAudioEventAsset* Sonic_Defense_Idle_Stop; // 0xB90(0x8)

	// Object: Function DFMAbility.WeaponThrowBunkerDataComponentAnim.PlayAudioStop
	// Flags: [Final|Native|Protected]
	// Offset: 0xc46d4b4
	// Params: [ Num(0) Size(0x0) ]
	void PlayAudioStop();

	// Object: Function DFMAbility.WeaponThrowBunkerDataComponentAnim.PlayAudioIdle
	// Flags: [Final|Native|Protected]
	// Offset: 0xc46d4a0
	// Params: [ Num(0) Size(0x0) ]
	void PlayAudioIdle();

	// Object: Function DFMAbility.WeaponThrowBunkerDataComponentAnim.DoReportBunkerFire
	// Flags: [Final|Native|Protected]
	// Offset: 0xc46d48c
	// Params: [ Num(0) Size(0x0) ]
	void DoReportBunkerFire();
};

// Object: Class DFMAbility.WeaponThrowMineDataComponentAnim
// Size: 0xB88 (Inherited: 0xB80)
struct UWeaponThrowMineDataComponentAnim : UWeaponThrowableDataComponentAnim
{
	DEFINE_UE_CLASS_HELPERS(UWeaponThrowMineDataComponentAnim, "WeaponThrowMineDataComponentAnim")

	int32_t WeaponHeroID; // 0xB80(0x4)
	uint8_t Pad_0xB84[0x4]; // 0xB84(0x4)
};

// Object: Class DFMAbility.ZoyaSwarmsActor
// Size: 0xB30 (Inherited: 0x9E8)
struct AZoyaSwarmsActor : ADFMAbilityBuffDetector
{
	DEFINE_UE_CLASS_HELPERS(AZoyaSwarmsActor, "ZoyaSwarmsActor")

	uint8_t Pad_0x9E8[0x10]; // 0x9E8(0x10)
	int32_t ThreatId; // 0x9F8(0x4)
	struct FVector ThreatOffset; // 0x9FC(0xC)
	float ExtraLODDistance; // 0xA08(0x4)
	uint8_t Pad_0xA0C[0x4]; // 0xA0C(0x4)
	struct FString HitTargetVoiceString; // 0xA10(0x10)
	EHitEventType HitEventType; // 0xA20(0x1)
	uint8_t Pad_0xA21[0x3]; // 0xA21(0x3)
	struct FName HitLeftArmAnimName; // 0xA24(0x8)
	uint8_t bHitCancelUseItem : 1; // 0xA2C(0x1), Mask(0x1)
	uint8_t BitPad_0xA2C_1 : 7; // 0xA2C(0x1)
	uint8_t bIsUseVoxelData : 1; // 0xA2D(0x1), Mask(0x1)
	uint8_t BitPad_0xA2D_1 : 7; // 0xA2D(0x1)
	uint8_t Pad_0xA2E[0x2]; // 0xA2E(0x2)
	struct USwarmsComponent* SwarmsComponent; // 0xA30(0x8)
	struct TArray<struct FZoyaSwarmsAvatarData> CharacterAvatarDataArray; // 0xA38(0x10)
	uint8_t SwarmsSoundCheckWater : 1; // 0xA48(0x1), Mask(0x1)
	uint8_t BitPad_0xA48_1 : 7; // 0xA48(0x1)
	uint8_t Pad_0xA49[0x3]; // 0xA49(0x3)
	struct FName SwarmsSoundRTPC_TeamType; // 0xA4C(0x8)
	struct FName SwarmsFlyEventName; // 0xA54(0x8)
	struct FName SwarmsEndFlyEventName; // 0xA5C(0x8)
	struct FName FindTargetSwarmsFlyEventName; // 0xA64(0x8)
	struct FName FindTargetSwarmsEndFlyEventName; // 0xA6C(0x8)
	struct FName HitTargetEventName; // 0xA74(0x8)
	struct FName LockTargetEventName; // 0xA7C(0x8)
	struct FName LockTargetEndEventName; // 0xA84(0x8)
	int32_t CurrSwarmsSpawnPointsType; // 0xA8C(0x4)
	struct TMap<uint32_t, float> HitTargets; // 0xA90(0x50)
	uint8_t bIsInitSwarmsSpawnRoot : 1; // 0xAE0(0x1), Mask(0x1)
	uint8_t BitPad_0xAE0_1 : 7; // 0xAE0(0x1)
	uint8_t Pad_0xAE1[0x7]; // 0xAE1(0x7)
	struct USceneComponent* SwarmsSpawnRoot; // 0xAE8(0x8)
	struct TArray<struct UTravelerGameAk*> AllCachedTravelerAk; // 0xAF0(0x10)
	struct UTravelerGameAk* CachedFindTargetTravelerAk; // 0xB00(0x8)
	int32_t LocalPawnFindTargetIndex; // 0xB08(0x4)
	float LocalPawnLockAudioEndTime; // 0xB0C(0x4)
	float LocalPawnLockAudioTimeScale; // 0xB10(0x4)
	struct FVector LocalPawnLockAudioStartLocation; // 0xB14(0xC)
	uint8_t Pad_0xB20[0x10]; // 0xB20(0x10)

	// Object: Function DFMAbility.ZoyaSwarmsActor.UpdateTravelerGameAk
	// Flags: [Final|Native|Private]
	// Offset: 0xc46e068
	// Params: [ Num(0) Size(0x0) ]
	void UpdateTravelerGameAk();

	// Object: Function DFMAbility.ZoyaSwarmsActor.TryTickLocalPawnLockAudio
	// Flags: [Final|Native|Private]
	// Offset: 0xc46dfc4
	// Params: [ Num(1) Size(0x4) ]
	void TryTickLocalPawnLockAudio(float DeltaSeconds);

	// Object: Function DFMAbility.ZoyaSwarmsActor.TrySpawnClientStartEffect
	// Flags: [Final|Native|Private]
	// Offset: 0xc46dfb0
	// Params: [ Num(0) Size(0x0) ]
	void TrySpawnClientStartEffect();

	// Object: Function DFMAbility.ZoyaSwarmsActor.TryPlayLeftAnim
	// Flags: [Final|Native|Private|Const]
	// Offset: 0xc46df0c
	// Params: [ Num(1) Size(0x8) ]
	void TryPlayLeftAnim(struct ADFMCharacter* TargetChar);

	// Object: Function DFMAbility.ZoyaSwarmsActor.TryLoadAvatarAsset
	// Flags: [Final|Native|Private]
	// Offset: 0xc46def8
	// Params: [ Num(0) Size(0x0) ]
	void TryLoadAvatarAsset();

	// Object: Function DFMAbility.ZoyaSwarmsActor.TryCancelUseItem
	// Flags: [Final|Native|Private|Const]
	// Offset: 0xc46de54
	// Params: [ Num(1) Size(0x8) ]
	void TryCancelUseItem(struct ADFMCharacter* TargetChar);

	// Object: Function DFMAbility.ZoyaSwarmsActor.StopFlyAudio
	// Flags: [Final|Native|Private]
	// Offset: 0xc46de40
	// Params: [ Num(0) Size(0x0) ]
	void StopFlyAudio();

	// Object: Function DFMAbility.ZoyaSwarmsActor.StopFindTargetFlyAudio
	// Flags: [Final|Native|Private]
	// Offset: 0xc46de2c
	// Params: [ Num(0) Size(0x0) ]
	void StopFindTargetFlyAudio();

	// Object: Function DFMAbility.ZoyaSwarmsActor.SetFindTargetFlyAudioLocation
	// Flags: [Final|Native|Private|HasDefaults|Const]
	// Offset: 0xc46dd88
	// Params: [ Num(1) Size(0xC) ]
	void SetFindTargetFlyAudioLocation(struct FVector Location);

	// Object: Function DFMAbility.ZoyaSwarmsActor.SendProjectileThreatExplosion
	// Flags: [Final|Native|Private]
	// Offset: 0xc46dd74
	// Params: [ Num(0) Size(0x0) ]
	void SendProjectileThreatExplosion();

	// Object: Function DFMAbility.ZoyaSwarmsActor.SendProjectileThreatCreate
	// Flags: [Final|Native|Private]
	// Offset: 0xc46dd60
	// Params: [ Num(0) Size(0x0) ]
	void SendProjectileThreatCreate();

	// Object: Function DFMAbility.ZoyaSwarmsActor.PreloadAudio
	// Flags: [Final|Native|Private]
	// Offset: 0xc46dd4c
	// Params: [ Num(0) Size(0x0) ]
	void PreloadAudio();

	// Object: Function DFMAbility.ZoyaSwarmsActor.PlayHitTargetSound
	// Flags: [Final|Native|Private]
	// Offset: 0xc46dca8
	// Params: [ Num(1) Size(0x8) ]
	void PlayHitTargetSound(struct ADFMCharacter* DFMCharacter);

	// Object: Function DFMAbility.ZoyaSwarmsActor.PlayGPAudioAttachByComponent
	// Flags: [Final|Native|Private|HasOutParms]
	// Offset: 0xc46db78
	// Params: [ Num(4) Size(0x20) ]
	struct FGPAudioFuturePlayingID PlayGPAudioAttachByComponent(struct FName EventName, struct UGameAkComponent* GameAk, const struct FName& AudioTypeName);

	// Object: Function DFMAbility.ZoyaSwarmsActor.PlayFlyAudio
	// Flags: [Final|Native|Private]
	// Offset: 0xc46db64
	// Params: [ Num(0) Size(0x0) ]
	void PlayFlyAudio();

	// Object: Function DFMAbility.ZoyaSwarmsActor.PlayFindTargetFlyAudio
	// Flags: [Final|Native|Private]
	// Offset: 0xc46db50
	// Params: [ Num(0) Size(0x0) ]
	void PlayFindTargetFlyAudio();

	// Object: Function DFMAbility.ZoyaSwarmsActor.OnLoadAvatarMeshAssetComplete
	// Flags: [Final|Native|Private|HasOutParms|HasDefaults]
	// Offset: 0xc46da90
	// Params: [ Num(1) Size(0x18) ]
	void OnLoadAvatarMeshAssetComplete(const struct FSoftObjectPath& Path);

	// Object: Function DFMAbility.ZoyaSwarmsActor.OnLoadAvatarMaterialAssetComplete
	// Flags: [Final|Native|Private|HasOutParms|HasDefaults]
	// Offset: 0xc46d9d0
	// Params: [ Num(1) Size(0x18) ]
	void OnLoadAvatarMaterialAssetComplete(const struct FSoftObjectPath& Path);

	// Object: Function DFMAbility.ZoyaSwarmsActor.MulticastHitEnemyVO
	// Flags: [Final|Net|NetReliableNative|Event|NetMulticast|Private]
	// Offset: 0xff5d77c
	// Params: [ Num(1) Size(0x8) ]
	void MulticastHitEnemyVO(struct ADFMCharacter* DFMCharacter);

	// Object: Function DFMAbility.ZoyaSwarmsActor.MulticastAddDamageTarget
	// Flags: [Final|Net|NetReliableNative|Event|NetMulticast|Private]
	// Offset: 0xfa3e90c
	// Params: [ Num(3) Size(0x10) ]
	void MulticastAddDamageTarget(struct AGPCharacter* Char, int32_t CellIndex, int32_t LayerNum);

	// Object: Function DFMAbility.ZoyaSwarmsActor.InitravelerGameAk
	// Flags: [Final|Native|Private]
	// Offset: 0xc46d9bc
	// Params: [ Num(0) Size(0x0) ]
	void InitravelerGameAk();

	// Object: Function DFMAbility.ZoyaSwarmsActor.InitOwner
	// Flags: [Final|Native|Private]
	// Offset: 0xc46d9a8
	// Params: [ Num(0) Size(0x0) ]
	void InitOwner();

	// Object: Function DFMAbility.ZoyaSwarmsActor.GetAvatarSoundEventName
	// Flags: [Final|Native|Private]
	// Offset: 0xc46d8fc
	// Params: [ Num(2) Size(0x10) ]
	struct FName GetAvatarSoundEventName(struct FName EventName);

	// Object: Function DFMAbility.ZoyaSwarmsActor.DoTryLoadAvatarMeshAsset
	// Flags: [Final|Native|Private|HasOutParms|HasDefaults]
	// Offset: 0xc46d83c
	// Params: [ Num(1) Size(0x18) ]
	void DoTryLoadAvatarMeshAsset(const struct FSoftObjectPath& Path);

	// Object: Function DFMAbility.ZoyaSwarmsActor.DoTryLoadAvatarMaterialAsset
	// Flags: [Final|Native|Private|HasOutParms|HasDefaults]
	// Offset: 0xc46d77c
	// Params: [ Num(1) Size(0x18) ]
	void DoTryLoadAvatarMaterialAsset(const struct FSoftObjectPath& Path);

	// Object: Function DFMAbility.ZoyaSwarmsActor.DoSwarmsSoundCheckWater
	// Flags: [Final|Native|Private|HasDefaults]
	// Offset: 0xc46d6cc
	// Params: [ Num(2) Size(0x18) ]
	struct FVector DoSwarmsSoundCheckWater(struct FVector Location);

	// Object: Function DFMAbility.ZoyaSwarmsActor.CleanLoadAvatarAsset
	// Flags: [Final|Native|Private]
	// Offset: 0xc46d6b8
	// Params: [ Num(0) Size(0x0) ]
	void CleanLoadAvatarAsset();

	// Object: Function DFMAbility.ZoyaSwarmsActor.CheckMinLeftTime
	// Flags: [Final|Native|Private]
	// Offset: 0xc46d6a4
	// Params: [ Num(0) Size(0x0) ]
	void CheckMinLeftTime();

	// Object: Function DFMAbility.ZoyaSwarmsActor.CheckExtraLODDistance
	// Flags: [Final|Native|Private|Const]
	// Offset: 0xc46d66c
	// Params: [ Num(1) Size(0x1) ]
	uint8_t CheckExtraLODDistance();

	// Object: Function DFMAbility.ZoyaSwarmsActor.CheckBuffDisableTagInWater
	// Flags: [Final|Native|Private|Const]
	// Offset: 0xc46d5bc
	// Params: [ Num(2) Size(0x9) ]
	uint8_t CheckBuffDisableTagInWater(struct AGPCharacter* TargetChar);
};

// Object: Class DFMAbility.ZoyaSwarmsItemAnimInstance
// Size: 0xA30 (Inherited: 0x280)
struct UZoyaSwarmsItemAnimInstance : UGPAbilityBaseAnimInstance
{
	DEFINE_UE_CLASS_HELPERS(UZoyaSwarmsItemAnimInstance, "ZoyaSwarmsItemAnimInstance")

	struct FZoyaSwarmsItemAnimInstanceProxy LocalProxy; // 0x280(0x7A0)
	struct USkeletalMeshComponent* MasterPoseMesh; // 0xA20(0x8)
	uint8_t bIsFPPMesh : 1; // 0xA28(0x1), Mask(0x1)
	uint8_t BitPad_0xA28_1 : 7; // 0xA28(0x1)
	uint8_t Pad_0xA29[0x7]; // 0xA29(0x7)

	// Object: Function DFMAbility.ZoyaSwarmsItemAnimInstance.SetIsBindToTarget
	// Flags: [Final|Native|Public]
	// Offset: 0xc46fdf4
	// Params: [ Num(1) Size(0x1) ]
	void SetIsBindToTarget(uint8_t bIsBindToTarget);

	// Object: Function DFMAbility.ZoyaSwarmsItemAnimInstance.CheckIsSwarmsWaepon
	// Flags: [Final|Native|Private|Const]
	// Offset: 0xc46fdbc
	// Params: [ Num(1) Size(0x1) ]
	uint8_t CheckIsSwarmsWaepon();

	// Object: Function DFMAbility.ZoyaSwarmsItemAnimInstance.CheckIsFppMesh
	// Flags: [Final|Native|Private|Const]
	// Offset: 0xc46fd84
	// Params: [ Num(1) Size(0x1) ]
	uint8_t CheckIsFppMesh();
};

// Object: Class DFMAbility.ZoyaSwarmsPreviewActor
// Size: 0x470 (Inherited: 0x370)
struct AZoyaSwarmsPreviewActor : AActor
{
	DEFINE_UE_CLASS_HELPERS(AZoyaSwarmsPreviewActor, "ZoyaSwarmsPreviewActor")

	uint8_t bIsDrawDebugBox : 1; // 0x370(0x1), Mask(0x1)
	uint8_t BitPad_0x370_1 : 7; // 0x370(0x1)
	uint8_t Pad_0x371[0x3]; // 0x371(0x3)
	int32_t SpawnPointsCheckCellNum; // 0x374(0x4)
	float CellSizeZ; // 0x378(0x4)
	uint8_t Pad_0x37C[0x4]; // 0x37C(0x4)
	struct TArray<struct FVector> SpawnPoints; // 0x380(0x10)
	struct TArray<struct FVector> SpawnPoints_Crouch; // 0x390(0x10)
	struct TArray<struct FVector> SpawnPoints_Prone; // 0x3A0(0x10)
	float ProneCheckCenterOffset; // 0x3B0(0x4)
	struct FVector CheckSize; // 0x3B4(0xC)
	float MoveTime; // 0x3C0(0x4)
	float MoveMinVal; // 0x3C4(0x4)
	float MoveMaxVal; // 0x3C8(0x4)
	struct FLinearColor BackColor; // 0x3CC(0x10)
	struct FLinearColor CanNotUseBackColor; // 0x3DC(0x10)
	struct FLinearColor LineColor1; // 0x3EC(0x10)
	struct FLinearColor CanNotUseLineColor1; // 0x3FC(0x10)
	struct FLinearColor LineColor2; // 0x40C(0x10)
	struct FLinearColor CanNotUseLineColor2; // 0x41C(0x10)
	uint8_t Pad_0x42C[0x4]; // 0x42C(0x4)
	struct TArray<struct UMeshComponent*> AllMeshes; // 0x430(0x10)
	struct UMaterialInstanceDynamic* MainMaterial1; // 0x440(0x8)
	struct UMaterialInstanceDynamic* MainMaterial2; // 0x448(0x8)
	struct TWeakObjectPtr<struct ADFMCharacter> OwnerCharacter; // 0x450(0x8)
	float CurrMoveTime; // 0x458(0x4)
	uint8_t bIsShowMesh : 1; // 0x45C(0x1), Mask(0x1)
	uint8_t BitPad_0x45C_1 : 7; // 0x45C(0x1)
	uint8_t Pad_0x45D[0x3]; // 0x45D(0x3)
	struct USceneComponent* CheckPointRoot; // 0x460(0x8)
	struct USceneComponent* PreviewMeshRoot; // 0x468(0x8)

	// Object: Function DFMAbility.ZoyaSwarmsPreviewActor.TickMove
	// Flags: [Final|Native|Private]
	// Offset: 0xc470634
	// Params: [ Num(1) Size(0x4) ]
	void TickMove(float DeltaTime);

	// Object: Function DFMAbility.ZoyaSwarmsPreviewActor.SetPreviewLocationAndRotation
	// Flags: [Final|Native|Public|HasDefaults]
	// Offset: 0xc470554
	// Params: [ Num(2) Size(0x18) ]
	void SetPreviewLocationAndRotation(struct FVector NewLocation, struct FRotator NewRotation);

	// Object: Function DFMAbility.ZoyaSwarmsPreviewActor.SetOwnerCharacter
	// Flags: [Final|Native|Public]
	// Offset: 0xc4704b0
	// Params: [ Num(1) Size(0x8) ]
	void SetOwnerCharacter(struct ADFMCharacter* CHARACTER);

	// Object: Function DFMAbility.ZoyaSwarmsPreviewActor.SetMove
	// Flags: [Final|Native|Private|Const]
	// Offset: 0xc4703c8
	// Params: [ Num(2) Size(0x8) ]
	void SetMove(uint8_t bIsMesh1, float MoveVal);

	// Object: Function DFMAbility.ZoyaSwarmsPreviewActor.SetColor
	// Flags: [Final|Native|Private|Const]
	// Offset: 0xc4702d8
	// Params: [ Num(2) Size(0x2) ]
	void SetColor(uint8_t bIsMesh1, uint8_t bIsCanUse);

	// Object: Function DFMAbility.ZoyaSwarmsPreviewActor.ResetMoveTime
	// Flags: [Final|Native|Public]
	// Offset: 0xc4702c4
	// Params: [ Num(0) Size(0x0) ]
	void ResetMoveTime();

	// Object: Function DFMAbility.ZoyaSwarmsPreviewActor.InitMaterial
	// Flags: [Final|Native|Private]
	// Offset: 0xc4701dc
	// Params: [ Num(2) Size(0x9) ]
	void InitMaterial(struct UMeshComponent* Mesh, uint8_t bIsMesh1);

	// Object: Function DFMAbility.ZoyaSwarmsPreviewActor.GetCurrSpawnPoints
	// Flags: [Final|Native|Private|HasOutParms|HasDefaults|Const]
	// Offset: 0xc4700e0
	// Params: [ Num(2) Size(0x20) ]
	struct TArray<struct FVector> GetCurrSpawnPoints(struct FVector& CheckOffset);

	// Object: Function DFMAbility.ZoyaSwarmsPreviewActor.DoCheckShowState
	// Flags: [Final|Native|Private]
	// Offset: 0xc4700a8
	// Params: [ Num(1) Size(0x1) ]
	uint8_t DoCheckShowState();

	// Object: Function DFMAbility.ZoyaSwarmsPreviewActor.DoCheck
	// Flags: [Final|Native|Private|Const]
	// Offset: 0xc470070
	// Params: [ Num(1) Size(0x1) ]
	uint8_t DoCheck();

	// Object: Function DFMAbility.ZoyaSwarmsPreviewActor.CheckWaterData
	// Flags: [Final|Native|Private|HasDefaults|Const]
	// Offset: 0xc46ffc0
	// Params: [ Num(2) Size(0xD) ]
	uint8_t CheckWaterData(struct FVector pos);

	// Object: Function DFMAbility.ZoyaSwarmsPreviewActor.CheckVolume
	// Flags: [Final|Native|Public]
	// Offset: 0xc46ff10
	// Params: [ Num(2) Size(0x5) ]
	uint8_t CheckVolume(float DeltaTime);

	// Object: Function DFMAbility.ZoyaSwarmsPreviewActor.CheckShowState
	// Flags: [Final|Native|Private]
	// Offset: 0xc46fed8
	// Params: [ Num(1) Size(0x1) ]
	uint8_t CheckShowState();
};

// Object: Class DFMAbility.ZoyaSwarmsWeapon
// Size: 0x1470 (Inherited: 0x1440)
struct AZoyaSwarmsWeapon : ADFMWeapon
{
	DEFINE_UE_CLASS_HELPERS(AZoyaSwarmsWeapon, "ZoyaSwarmsWeapon")

	float CheckFailedTipsCD; // 0x1434(0x4)
	int32_t CastEffectNum; // 0x1438(0x4)
	struct FName CastEffect3P; // 0x143C(0x8)
	struct FName CastEffect1P; // 0x1444(0x8)
	struct FName CastScreenEffect1P; // 0x144C(0x8)
	struct TArray<struct FZoyaSwarmsAvatarEffectData> AvatarEffectDataArray; // 0x1458(0x10)
	float NextCheckFailedTipsTime; // 0x1468(0x4)

	// Object: Function DFMAbility.ZoyaSwarmsWeapon.TryShowCheckFailedTips
	// Flags: [Final|Native|Private]
	// Offset: 0xc470954
	// Params: [ Num(0) Size(0x0) ]
	void TryShowCheckFailedTips();

	// Object: Function DFMAbility.ZoyaSwarmsWeapon.GetCastScreenEffect1P
	// Flags: [Final|Native|Public|Const]
	// Offset: 0xc470920
	// Params: [ Num(1) Size(0x8) ]
	struct FName GetCastScreenEffect1P();

	// Object: Function DFMAbility.ZoyaSwarmsWeapon.GetCastEffectNum
	// Flags: [Final|Native|Public|Const]
	// Offset: 0xc4708ec
	// Params: [ Num(1) Size(0x4) ]
	int32_t GetCastEffectNum();

	// Object: Function DFMAbility.ZoyaSwarmsWeapon.GetCastEffect3P
	// Flags: [Final|Native|Public|Const]
	// Offset: 0xc4708b8
	// Params: [ Num(1) Size(0x8) ]
	struct FName GetCastEffect3P();

	// Object: Function DFMAbility.ZoyaSwarmsWeapon.GetCastEffect1P
	// Flags: [Final|Native|Public|Const]
	// Offset: 0xc470884
	// Params: [ Num(1) Size(0x8) ]
	struct FName GetCastEffect1P();

	// Object: Function DFMAbility.ZoyaSwarmsWeapon.CheckSwarmsCanFire
	// Flags: [Final|Native|Private]
	// Offset: 0xc47084c
	// Params: [ Num(1) Size(0x1) ]
	uint8_t CheckSwarmsCanFire();

	// Object: Function DFMAbility.ZoyaSwarmsWeapon.AvatarEffectDataIndex
	// Flags: [Final|Native|Private|Const]
	// Offset: 0xc470818
	// Params: [ Num(1) Size(0x4) ]
	int32_t AvatarEffectDataIndex();
};

} // namespace SDK
