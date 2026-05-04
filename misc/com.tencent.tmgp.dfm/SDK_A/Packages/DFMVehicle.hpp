#pragma once

#include "../CoreUObject_classes.hpp"
#include "AIModule.hpp"
#include "AnimGraphRuntime.hpp"
#include "DFMGameplay.hpp"
#include "Engine.hpp"
#include "GPAIBase.hpp"
#include "GPCutScene.hpp"
#include "GPGameplay.hpp"
#include "GPGlobalDefines.hpp"
#include "GPWeaponRuntime.hpp"
#include "GameCore.hpp"
#include "GameplayTags.hpp"
#include "PhysXVehicles.hpp"
#include "PropertyReplication.hpp"

namespace SDK
{

// Package: DFMVehicle
// Enums: 44
// Structs: 254
// Classes: 252

struct AAIHelicopterDramaArea;
struct AAIPatrolPath;
struct AActor;
struct ABreakablePawn;
struct ACHARACTER;
struct AController;
struct ADFMAIController;
struct ADFMCharacter;
struct ADFMGameMode;
struct ADFMSkillSmokeActor;
struct ADFScenceWeaponPawn;
struct ADramaArea;
struct AGPCharacter;
struct AGPCharacterBase;
struct AGPControllableActor;
struct AGPDeformableSmokeEmitActor;
struct AGPPreviewLineRendererActor;
struct AGPSplinePath;
struct AGPTODToPerformManager;
struct AGPVehicleBase;
struct AOpenWorldUnifiedDecalActor;
struct APawn;
struct APickupBase;
struct AWaterDataAssetsStreamer;
struct AWeaponBase;
enum class EAnimVehicleType : uint16_t;
enum class EAnimationPlayType : uint8_t;
enum class ECharacterFSMEventDefine : uint8_t;
enum class EDFMGamePlaySubMode : uint8_t;
enum class EDFMMapIconType : uint8_t;
enum class EDFMVehicleClassType : uint8_t;
enum class EDamageSystemDamageType : uint8_t;
enum class EExplosionType : uint8_t;
enum class EGPVehicleArmorType : uint8_t;
enum class EInteractorMarkerType : uint8_t;
enum class ELockerSubType : uint8_t;
enum class EMarkingItemType : uint8_t;
enum class EMatchOverReason : uint8_t;
enum class EOutLineEffectType : uint32_t;
enum class EPhysicalSurface : uint8_t;
enum class ERelativeTransformSpace : uint8_t;
enum class ESkillUISlot : uint8_t;
enum class EStingerMissileLockingState : uint8_t;
enum class ETacticalEquipmentMarkerType : uint8_t;
enum class EVehicleAbilityType : uint8_t;
enum class EVehicleAssistAimConfigGroup : uint8_t;
enum class EVehicleMarkerType : uint8_t;
enum class EVehicleResetType : uint8_t;
enum class EVehicleSeatType : uint8_t;
struct FAIRequestID;
struct FBattleFieldSpawnerDataRow;
struct FBreakthroughVehicleSpawnerDataRow;
struct FConquestVehicleSpawnerDataRow;
struct FCrashPointData;
struct FDamageResultInfo;
struct FDamageSourceInfo;
struct FHitResult;
struct FRigidBodyState;
struct FTimerHandle;
struct FVehicleAngleDamageInfo;
struct FWeaponSeatInfo;
struct FWheelSetup;
struct UAIHelicopterSteeringComponent;
struct UActorComponent;
struct UAimOffsetBlendSpace;
struct UAnimInstance;
struct UAnimMontage;
struct UAnimSequence;
struct UAnimationAsset;
struct UBehaviorTree;
struct UBlueprint;
struct UBoxComponent;
struct UCameraComponent;
struct UCameraShake;
struct UClientGameSettingHD;
struct UClientSensitivitySettingHD;
struct UClientVehicleSetting;
struct UClientVehicleSettingHD;
struct UCurveFloat;
struct UDFMAbilityLockerComponent;
struct UDFMInteractiveWaterComponent;
struct UDamageType;
struct UFXResourceContainerComponent;
struct UGPAIBehaviorTreeComponent;
struct UGPAnimProxyComponent;
struct UGPAudioEventAsset;
struct UGPAudioVehicleCollisionDataAsset;
struct UGPBuoyancyComponent;
struct UGPOutLineEffectComponent;
struct UGPPathFollowComponent;
struct UGPSharedRepairComponent;
struct UGPStaticMeshComponent;
struct UGPTeamComponent;
struct UGameAkComponent;
struct UGameplayEffect;
struct UInstancedStaticMeshComponent;
struct UInteractorOperatorProcessComponent;
struct UInventoryMovementComponent;
struct UMaterial;
struct UMaterialInstance;
struct UMaterialInstanceDynamic;
struct UMaterialInterface;
struct UMeshComponent;
struct UOpenWorldWaterSubsystem;
struct UPaperSprite;
struct UParticleSystem;
struct UParticleSystemComponent;
struct UParticleSystemGroup;
struct UPhysicalMaterial;
struct UPhysicalMaterialTireNoiseAsset;
struct UPrimitiveComponent;
struct URangeScopeLensProxy;
struct USOLEventMapIconViewController;
struct USceneComponent;
struct UScreenEffectManager;
struct UShapeComponent;
struct USkeletalMesh;
struct USkeletalMeshComponent;
struct USphereComponent;
struct USplineComponent;
struct UStaticMesh;
struct UStaticMeshComponent;
struct UTextRenderComponent;
struct UTexture2D;
struct UTravelerGameAk;
struct UVehicleSignificanceComponent;
struct UVehicleWheel;
struct UWheeledVehicleMovementComponent;
struct UWorld;
struct FDFTransformAnimationData;
struct FDFTransformAnimationPlaybackSetting;
struct FTrainHitCharacterTimeInfo;
struct FDFMTrainUpdateMoveData;
struct FDFMTrainRailData;
struct FVehicleFrontendLoadResult;
struct FVehicleFrontendLoadContext;
struct FAnimNode_DFMVehicleSyncHandler;
struct FAnimNode_DFMWheelHandler;
struct FBoatAutoBalanceConfig;
struct FHelicopterWayPointData;
struct FPatrolConfig_Helicopter;
struct FAITransportHelicopterStateParam;
struct FAIHelicopterStateParam;
struct FHelicopterFX;
struct FAIHelicopterAlertPath;
struct FAIHelicopterSpaceData;
struct FAIHelicopterSectionPoolItem;
struct FAIHelicopterTimeKey;
struct FTankMeshData;
struct FDFMAmphibiousVehicleAnimInstanceProxy;
struct FBoatStrandedSetting;
struct FBoatSteeringSetting;
struct FBoatEngineSetting;
struct FDFMBoatBumpConfig;
struct FDFMBoatDriveAnimConfig;
struct FDFMBrokenVehicleDirectionInfo;
struct FBrokenVehiclePhysicsAdjustedTarget;
struct FBrokenVehiclePhysicsReplicatedData;
struct FBrokenVehiclePhysicsReplicatedConfig;
struct FDFMBrokenVehiclePhysicsRepInfo;
struct FDFMJetAnimInstanceProxy;
struct FDFMJetOspreyAnimInstanceProxy;
struct FMotorCycleDamping;
struct FSphereDataInfo;
struct FCapsuleDataInfo;
struct FBoxDataInfo;
struct FTankControllInfo;
struct FDFMTrainAnimInstanceProxy;
struct FDFMVehicle3PAnimInstanceOptProxy;
struct FWheelAsyncTraceData;
struct FPathFollowStickToGroundConfig;
struct FPIDData;
struct FDFMWheelAnimInstanceProxy;
struct FDFMValkyrieVehicleAnimInstanceProxyExtendedParams;
struct FDFMVehicleAnimInstanceProxy;
struct FDFMVehicleAnimInstanceOptProxy;
struct FVehicleHitPartInfo;
struct FDFMVehicleEmissionConfig;
struct FDFMVehicleEmissionInfo;
struct FVehicleFakeRPMConfig;
struct FVehicleFakeRPMGearParamConfig;
struct FVehicleWeaponAudioInfo;
struct FDFMVehicleReplicationItem;
struct FVehicleOutLineEffectData;
struct FGetOffInheritVehicleVelocityConfig;
struct FVehicleGetOffPointConfigGroup;
struct FVehicleGetOffLocationDesc;
struct FVehicleLockedAttribute;
struct FVehicleLockStateInfo;
struct FPostPhysicsTickFunction;
struct FVehicleBodyPartBrokenEffect;
struct FDFMVehicleCollisionBox;
struct FDFMVehicleCollisionInfo;
struct FDirectionControllInfo;
struct FVehiclePushWaterRippleEffectInfo;
struct FVehicleMovingEffectInfo;
struct FEffectArray;
struct FVehicleParticleSystemHolder;
struct FVehicleParticleHolder;
struct FVehicleBlockGunSwayInfo;
struct FVehicleBeHitCameraShakeInfo;
struct FVehicleLaunchSkillProjectileInfo;
struct FVehicleDifferentialNWData;
struct FDrivenWheelNWData;
struct FCutsensePrepareData;
struct FDFMVehicleMusicManagerTickFunction;
struct FDFMVhiclePathFollowMoveRequestParam;
struct FDFMVehiclePathFollowWayPointData;
struct FVehicleMovePoint;
struct FDFMVehicleOvershootCheckData;
struct FDFMVehicleObstacleCheckedResult;
struct FDFMVehicleCollisionCheckedBox;
struct FDFMVehicleRigidBodyStateCheckedData;
struct FDFMVehicleAccumulatedThreshold;
struct FDFMVehicleVelocityCheckedData;
struct FDFMVehicleTimeStampCheckedData;
struct FDFMVehicleAutonomousFrameData;
struct FDFMVehiclePhysicsAdjustedTarget;
struct FVehiclePlacementPreviewActorInitParameter;
struct FVehicleRebornBeaconParameter;
struct FDFMVehicleResourceDelegateInfo;
struct FDFMVehicleLoadedResourceInfo;
struct FVehicleBoneSyncInfo;
struct FDFMVehicleSkillProjectileMovementParam;
struct FVehicleCameraVelocityOffsetConfig;
struct FVehicleCameraSpringArmLengthConfig;
struct FFixVehicleCameraRotationConfig;
struct FTiltedVehicleCameraFollowConfig;
struct FVehicleCameraSpring;
struct FVehicleCameraSpringParameter;
struct FVehicleSupplyInfoUI;
struct FVehicleSupplyInfo;
struct FVehicleWeaponResourceHandle;
struct FVehicleTypeMap;
struct FAmphibiousVehicleSetting;
struct FSuspensionConfig;
struct FWheelBodyRelativeVelocityInfo;
struct FDFTransformAnimationEvaluteResult;
struct FLowSpeedAngularDampingConfig;
struct FAvoidWheelVehicleFlyConfig;
struct FAssistParkingConfig;
struct FIncreaseGravityConfig;
struct FDynamicTireFrictionConfig;
struct FStickToGroundConfig;
struct FVirtualTireForceConfig;
struct FContactFrictionConfig;
struct FForceDebugInfo;
struct FContactRestitutionConfig;
struct FFallingBalanceConfig;
struct FVehicleDynamicMeshCheckCollisionSetting;
struct FVehicleDynamicMeshCheckedBox;
struct FRaidVehicleDramaInfo;
struct FRaidVehiclePathWeight;
struct FVehicleLaserPointerLockersInfo;
struct FVehicleLockInfo;
struct FVehicleLockInfoWithSubType;
struct FVehiclePointerInfo;
struct FDFMTrainDoorConfig;
struct FVehicleyDramaDifficultInfo;
struct FVehiclePathInfo;
struct FDFMVehicleWeaponHitPosPredictConfigRow;
struct FDFMVehiclePosPredictConfigContainer;
struct FDFMVehiclePosPredictConfigRow;
struct FDFMVehicleAssistAimConfigContainer;
struct FDFMVehicleAssistAimConfigRow;
struct FVehicleAssistAimSystemPrePhysicsTickFunction;
struct FVehicleAssistAimSystemPostUpdateWorkTickFunction;
struct FVehicleAsyncResourceInfo;
struct FVehicleBeHitImpluseConfigRow;
struct FDFMVehicleConsoleVariableQualityData;
struct FDFMVehicleConsoleVariablePlatformData;
struct FDFMVehicleConsoleVariableDataTableRow;
struct FDFMVehicleConsoleVariableQualityDataItem;
struct FVehicleModelSkinAppearanceDesc;
struct FVehicleSkinAppearanceRow;
struct FVehicleSkinMaterialDesc;
struct FVehicleSkinPendantDesc;
struct FVehicleSkinAdditionAttachModelDesc;
struct FVehicleWeaponSkinInfo;
struct FVehicleSkinSocketInfo;
struct FVehicleUISkinItemDesc;
struct FVehiclePhysicalEffectInfo;
struct FDFMVehiclePhysicalEffectDataRow;
struct FDFMVehiclePhysicsReplicationDataTableRow;
struct FDFMVehicleInteractorDataTableRow;
struct FDFMVehicleWaterInteractionDataTableRow;
struct FWheeledVehicleDataTableRow;
struct FWheeledTankDataTableRow;
struct FWheeledVehicleNWDataTableRow;
struct FWheeledVehicle4WDataTableRow;
struct FJetVehicleSpringArmParam;
struct FVehicleSpringArmParamVectorCurve;
struct FVehicleCameraDataTableRow;
struct FVehicleSpringArmParamCurve;
struct FVehicleSeatKeyTipsInfo;
struct FVehicleSeatTipsInfo;
struct FVehicleKeyTipsDataTableRow;
struct FVehicleSkillKeyTipsInfo;
struct FVehicleKeyTipsInfo;
struct FVehiclePhysicsDataTableRow;
struct FVehicleInputRedirectionDataTableRow;
struct FDFMVehicleSkillEffectDescContainer;
struct FDFMVehicleADSConfig;
struct FDFMVehicleCounterFireRadarConfig;
struct FDFMVehicleCreateControllableActorConfig;
struct FDFMVehicleHeatConfig;
struct FDFMVehicleLaunchProjectileConfig;
struct FDFMVehicleMarkDetectionConfig;
struct FDFMVehicleProjectileLauncherConfig;
struct FDFMVehiclePreviewPlacementConfig;
struct FDFMVehicleRebornBeaconConfig;
struct FDFMVehicleRepairConfig;
struct FDFMVehicleScanDetectionConfig;
struct FDFMVehicleSmokeConfig;
struct FDFMVehicleThermalImagingConfig;
struct FDFMVehicleThermalSmokeConfig;
struct FVehicleSkillDataTableRow;
struct FDFMVehicleSkillEffectDesc;
struct FVehicleSeatSkillConfig;
struct FVehicleSkillConfigDataTableRow;
struct FVehicleBrokenPartActor;
struct FVehicleHealthRecoverInfoDesc;
struct FVehicleHealthRecoverInfoContainer;
struct FVehicleHealthRecoverInfo;
struct FVehicleHealthDataTableRow;
struct FEffectInfo;
struct FBoatEffectInfo;
struct FJetEffectInfo;
struct FVehicleEffectDataTableRow;
struct FDFMVehicleEffectParamsEvaluator;
struct FBrokenEffect;
struct FDFMVehicleHitDamageConfig;
struct FDFMVehicleDataConfigDataTableRow;
struct FDFMVehicleSeatSkillItemConfig;
struct FDFMVehicleHitDamageInfo;
struct FDFMVehicleCharacterAnimationConfig;
struct FDFMVehicleSeatAnimationConfig;
struct FDFMVehicleAnimationDataTableRow;
struct FDFMVehicleWeaponDataTableRow;
struct FDFMGroundVehicleAudioConfig;
struct FDFMSkyVehicleAudioConfig;
struct FDFMTankVehicleAudioConfig;
struct FDFMWaterVehicleAudioConfig;
struct FDFMVehicleAudioDataTableRow;
struct FDFMVehicleAudio1P3PConfig;
struct FDFMVehicleSeatHUDConfig;
struct FDFMVehicleHUDDataTableRow;
struct FDFMVehicleHUDAssetDataTableRow;
struct FVehicleFrontendBuildNode;
struct FVehicleFrontendBuildTree;
struct FVehicleFrontendCacher;
struct FVehicleFrontendContextNode;
struct FVehicleFrontendRuleTemplate;
struct FVehicleFrontendContextUpdateResult;
struct FVehicleFrontendResourcesPaker;
struct FVehicleFrontendResourcesPak;
struct FVehicleMixedGroupDataRow;
struct FVehicleMixedGroupCampConfig;
struct FVehicleMixedGroupSectorConfig;
struct FVehicleMixedGroupHubConfig;
struct FVehicleMixedGroupConfig;
struct FVehicleMixedGroupDefineRow;
struct FVehicleMixedGroupVehicleEntry;
struct FJetInputStateMobile;
struct FJetInputStatePC;
struct FHelicopterInputStatePC;
struct FHelicopterInputState;
struct FTankInputState;
struct FReplicatedVehicleNWState;
struct FBoatInputState;
struct FVehicleInputState;
struct FVehicleInputInterpRate;
struct FVehicleMusicConfigRow;
struct FVehiclePendantManagerTickFunction;
struct FVehicleSeatSpecifyCVarConfigContainer;
struct FVehicleSeatSpecifyCVarConfigRow;
struct FVehicleSkinBrokenPartsConfigRow;
struct FVehicleSpawnerConfig;
struct FBreakthroughVehicleSpawnerInfoRow;
struct FVehicleSpawnerInfo;
struct FVehicleSpawnedWeakList;
struct FVehicleSpawnerWeakList;
struct FVehicleUtilWorldSubsystemTickFunction;
struct ADFMVehicleThermalSmoke;
struct ADFMVehicleBase;
struct ADFMWheeledVehicle;
struct ADFMTank;
struct IAIHelicopterWeaponInterface;
struct UAITankAimTargetComponent;
struct UAITankPhaseComponent;
struct UBreakthroughVehicleSpawnerDataTableManager;
struct UBTTask_FollowSpline;
struct UBTTask_MoveStraight;
struct UBTTask_VehicleMoveTo;
struct UConquestVehicleSpawnerDataTableManager;
struct UDFTransformAnimationController;
struct UDFAmphibiousVehicleAnimationController;
struct UDFVehicleAdvancedPhysicsComponentBase;
struct UDFBoatAdvancedPhysicsComponent;
struct UDFInteractableComponent_Vehicle;
struct UDFInteractableCompProxy_Vehicle;
struct UDFJetAdvancedPhysicsComponent;
struct UBOSS04AIHelicopterConfig;
struct ADFMHelicopter;
struct ADFMAIHelicopter;
struct AHelicopterWayPoint;
struct UDFMVehicleAudioComponent;
struct UDFMHelicopterAudioComponent;
struct UDFMAIHelicopterAudioComponent;
struct UDFMVehicleHealthComponent;
struct UDFMAIHelicopterHealthComponent;
struct UDFMAIHelicopterPilotComponent;
struct UAnimNotifyState_AIHelicopterMotionWarping;
struct UAnimNotify_AIHelicopterStepMarker;
struct ADFMAITank;
struct UDFMAITask_HelicopterShoot;
struct UDFMAmphibiousVehicleAnimInstance;
struct UDFMAngularReplicationTestComponent;
struct UDFMPhysxMultiBaseShapeComponent;
struct UDFMAsyncPhysMultiShapeComponent;
struct UDFMVehicleAssembleExtensionBase;
struct UDFMBoatRadarExtension;
struct UDFMBoatMovementComponent;
struct UDFMVehiclePhysicsReplicationComponent;
struct UDFMBoatPhysicsReplicationComponent;
struct ADFMBoatVehicle;
struct UDFMBoatVehicleAudioComponent;
struct UDFMVehicleEffectComponent;
struct UDFMBoatVehicleEffectComponent;
struct ADFMBrokenVehiclePart;
struct ADFMBrokenAIHelicopterPart;
struct ADFMBrokenHelicopterPart;
struct UDFMBrokenVehiclePhysicsComponent;
struct UDFMFSM_AutoDriveVehicleAction;
struct UDFMFSM_AutoDriveVehicleCheckAction;
struct UDFMFSM_CharacterVehicleControlAction;
struct UDFMFSM_CharacterVehicleInputControlAction;
struct UDFMFSM_VehicleCheckAction;
struct UDFMFSM_VehicleDriveMoveAndRotateAction;
struct UDFMVehicleDashBoardExtension;
struct UDFMHelicopterDashBoardExtension;
struct UDFMHelicopterMovementComponent;
struct UDFMVehicleSocketAniComponent;
struct UDFMHelicopterSocketAniComponent;
struct UDFMVehicleSprintComponent;
struct UDFMHelicopterSpringComponent;
struct ADFMJet;
struct UDFMJetAnimInstance;
struct UDFMJetAnimInstance_Jet;
struct UDFMJetAnimInstance_Osprey;
struct UDFMJetAudioComponent;
struct UDFMJetMovementComponent;
struct ADFMJetNormal;
struct ADFMJetOsprey;
struct UDFMJetSpringComponent;
struct UDFMJetVehicleEffectComponent;
struct ADFMMotorCycle;
struct UDFMMotorCycleBalancer;
struct UDFMVehicleMoveComp;
struct UDFMMotorCycleMovementComponent;
struct ADFMRailwayActor;
struct UDFMWheeledVehicleAudioComponent;
struct UDFMTankAudioComponent;
struct UDFMTankMovementComponent;
struct UDFMTankSpringComponent;
struct ADFMTrain;
struct ADFMTrainAudioProxy;
struct ADFMTrainSpawner;
struct UDFMTrainAnimInstance;
struct UDFMTrainDoorComponent;
struct UDFMTrainStateBase;
struct UDFMTrainState_Move;
struct UDFMTrainState_Stop;
struct UDFMTrainState_Destruct;
struct UDFMTrainStateComponent;
struct UDFMVehicle3PAnimInstanceOpt;
struct UDFMVehicleActingComponent;
struct ADFMVehicleADS;
struct UDFMVehicleSkillExecutor;
struct UDFMVehicleADSSkillExecutor;
struct ADFMVehicleAIController;
struct UDFMVehicleAnimInstance;
struct UDFMVehicleAnimInstanceOpt;
struct UDFMVehicleAnimInteractorComponent;
struct UDFMVehicleAntiExplodeRepairEffectComponent;
struct UDFMVehicleBodyPartInstance;
struct UDFMVehicleAntiExplosionArmorPartInstance;
struct UDFMVehicleBodyPartExecutor;
struct UDFMVehicleAntiExplosionArmorPartExecutor;
struct UDFMVehicleAssembledComponent;
struct UDFMVehicleAssembledPartComponent;
struct UDFMVehicleAssembledPartComponent_NetExtend;
struct UDFMVehicleAssembleSteeringWheelExtension;
struct UDFMVehicleAssembleEmissionExtension;
struct UDFMVehicleAssembleDoorExtension;
struct UDFMVehicleTireTrackExtension;
struct UDFMHelicopterGlassExtension;
struct UDFMBrokenItemExtension;
struct UDFMVehicleBattlefieldEffectComponent;
struct UDFMVehicleCollisionComponent;
struct UDFMVehiclePassiveSkillExecutor;
struct UDFMVehicleCounterFireRadarPassiveSkillExecutor;
struct UDFMVehicleDataCollectionSubsystemConfig;
struct UDFMVehicleDataCollectionSubsystem;
struct UDFMVehicleDestroyDestructibleComponent;
struct UDFMVehicleDirectionSplineComponent;
struct UDFMVehicleEnginePartInstance;
struct UDFMVehicleEnginePartExecutor;
struct UDFMVehicleGetOffSkillExecutor;
struct UDFMVehicleGlobalUtils;
struct UDFMVehicleGPSkeletalMeshComponent;
struct UDFMVehicleHitEffectComponent;
struct UDFMVehicleLaunchProjectileSkillExecutor;
struct UDFMVehicleMarkSkillExecutor;
struct UDFMVehicleMovementComponentNW;
struct UDFMVehicleMovementImplement;
struct IDFMVehicleMovementInterface;
struct ADFMVehicleMultiInteractor;
struct UDFMVehicleMusicComponent;
struct UDFMVehicleMusicManager;
struct UDFMVehiclePathFollowComponent;
struct UDFMVehiclePathFollowingComponent;
struct AVehicleWaypoint;
struct AAITankWaypoint;
struct UVehicleNavmeshBlockerComponent;
struct ADFMVehiclePathFollowPath;
struct ADFMVehiclePathFollowWayPoint;
struct UDFMVehiclePhysicsReplicationTestMesh;
struct ADFMVehiclePreviewPlacementActor;
struct ADFMVehicleProjectilePreviewActor;
struct UDFMVehicleRebornBeaconSkillExecutor;
struct UDFMVehicleResourceManager;
struct UDFMVehicleScanSkillExecutor;
struct UDFMVehicleSequenceBindingComponent;
struct UDFMVehicleSkeletalMeshComponent;
struct UDFMVehicleSkillComponent;
struct UDFMVehicleSmokeSkillExecutor;
struct UDFMVehicleRepairSkillExecutor;
struct UDFMVehicleHeatLightSkillExecutor;
struct UDFMVehicleSkillInstance;
struct UDFMVehicleSkillProjectileView;
struct ADFMVehicleSkillProjectile;
struct ADFMVehicleSkillProjectileShrapnelGrenade;
struct ADFMVehicleSkillProjectileSmokeGrenade;
struct UDFMVehicleSkinImplement;
struct UDFMVehicleSpawnControllableActorSkillExecutor;
struct UDFMVehicleStateControllComponent;
struct ADFMVehicleSupplyStation;
struct UDFMVehicleDataTableManager;
struct UDFMVehicleHUDAssetDataTableManager;
struct UDFMVehicleHUDDataTableManager;
struct UDFMVehicleAudioDataTableManager;
struct UDFMVehicleAnimationDataTableManager;
struct UDFMVehicleDataConfigDataTableManager;
struct UDFMVehicleEffectDataTableManager;
struct UDFMVehicleSkillConfigDataTableManager;
struct UDFMVehicleSkillDataTableManager;
struct UDFMVehicleInputRedirectionDataTableManager;
struct UDFMVehiclePhysicsDataTableManager;
struct UDFMVehicleKeyTipsDataTableManager;
struct UDFMVehicleCameraDataTableManager;
struct UDFMVehicleWeaponDataTableManager;
struct UDFMWheeledVehicle4WDataTableManager;
struct UDFMWheeledVehicleNWDataTableManager;
struct UDFMTankDataTableManager;
struct UDFMVehicleWaterInteractionDataTableManager;
struct UDFMVehicleInteractorDataTableManager;
struct UDFMVehiclePhysicsReplicationDataTableManager;
struct UDFMVehiclePhysicalEffectDataTableManager;
struct UDFMVehicleSkinDataConfigTableManager;
struct UDFMVehicleSkinAppearanceDataTableManager;
struct UDFMVehicleExpDataTableManager;
struct UDFMVehicleHealthDataTableManager;
struct UDFMVehicleConsoleVariableDataTableManager;
struct UVehicleMixedGroupDefineTableManager;
struct UDFMVehicleTankTrackPartInstance;
struct UDFMVehicleTankTrackPartExecutor;
struct UDFMVehicleThermalImagingPassiveSkillExecutor;
struct UDFMVehicleThermalSmokeSkillExecutor;
struct UDFMVehicleTrackSplineComponent;
struct UDFMVehicleWaterMaskComponent;
struct UDFMVehicleWeaponImplement;
struct UDFMVehicleWeaponPartInstance;
struct UUDFMVehicleWeaponPartExecutor;
struct UDFMWheeledInstancedStaticMeshComponent;
struct UDFMWheeledVehicleMovementImplement;
struct ADFMWheeledVehicleNW;
struct UDFMWheeledVehicleSpringArmComponent;
struct IDFTransformAnimatedTarget;
struct UDFTransformAnimationPlayer;
struct UDFVehicleAdvancedPhysicsComponent;
struct UDFVehicleDynamicMeshComponent;
struct ADramaAreaVehicle;
struct UInteractorVehicleExecutor;
struct ULaserPointerLogic;
struct URaidBoatCollisionComponent;
struct USOLTrainComponent;
struct ATrailsMeshActor;
struct UTrailsMeshComponent;
struct AVehicleAreaDrama;
struct UDFMVehicleAssistAimTableManager;
struct UDFMVehiclePosPredictTableManager;
struct UDFMWeaponHitPosPredictTableManager;
struct UDFMVehicleAssistAimSystemConfig;
struct UVehicleAssistAimSystem;
struct UVehicleAssistAimSystemUtils;
struct UVehicleBeHitImpluseConfigDataTableManager;
struct AVehicleFrontendActor;
struct UVehicleFrontendContext;
struct UVehicleFrontendContextHelper;
struct UVehicleFrontendLoadProcessor;
struct UVehicleFrontendLoadMaterialProcessor;
struct UVehicleFrontendLoadMeshProcessor;
struct UVehicleFrontendLoadResourcesProcessor;
struct UVehicleFrontendLoadServices;
struct UVehicleFrontendSubsystem;
struct UVehicleMixedGroupDataTableManager;
struct UVehicleMusicConfigDataTableManager;
struct UVehiclePendantComponent;
struct UVehiclePendantManager;
struct UVehicleProjectileLauncherController;
struct UVehicleSeatSpecifyCVarConfigManager;
struct UVehicleSkinBrokenPartsConfigDataTableManager;
struct UVehicleSpawnerDataTableManager;
struct UVehicleSpawnManager;
struct AVehicleSpawner;
struct AVehicleAutoSpawner;
struct UVehicleUtilWorldSubsystem;
struct UVehicleWindFieldEffectManager;
struct AWeaponBulletContinuousLockingStingerMissile;
struct AWeaponBulletDynamicallyTrackingTarget;
struct AWeaponBulletIntelligentStingerMissile;
struct AWeaponBulletStrikeVehicle;
struct AWeaponBulletWireGuided;
struct UWheelTrailsComponent;

// Object: Enum DFMVehicle.EAIHelicopterMoveState
enum class EAIHelicopterMoveState : uint8_t
{
	Default = 0,
	Moving = 1,
	Arrived = 2,
	CrashMoving = 3,
	CrashFinished = 4,
	EAIHelicopterMoveState_MAX = 5
};

// Object: Enum DFMVehicle.EAIHelicopterFightState
enum class EAIHelicopterFightState : uint8_t
{
	Leisure = 0,
	Alert = 1,
	Fighting = 2,
	EAIHelicopterFightState_MAX = 3
};

// Object: Enum DFMVehicle.EAITransportHeliMoveState
enum class EAITransportHeliMoveState : uint8_t
{
	Default = 0,
	PreLand = 1,
	Land = 2,
	Hover = 3,
	PreTakeOff = 4,
	TakeOff = 5,
	AfterTakeOff = 6,
	EAITransportHeliMoveState_MAX = 7
};

// Object: Enum DFMVehicle.EDFTransformAnimationStatus
enum class EDFTransformAnimationStatus : uint8_t
{
	Stopped = 0,
	Playing = 1,
	Paused = 2,
	EDFTransformAnimationStatus_MAX = 3
};

// Object: Enum DFMVehicle.EAnimVehicleDoorState
enum class EAnimVehicleDoorState : uint8_t
{
	Idle = 0,
	Opened = 1,
	Closed = 2,
	OpenedWithNoAnim = 3,
	ClosedWithNoAnim = 4,
	EAnimVehicleDoorState_MAX = 5
};

// Object: Enum DFMVehicle.EDFMTrainState
enum class EDFMTrainState : uint8_t
{
	Invalid = 0,
	Move = 1,
	Stop = 2,
	Destruct = 3,
	EDFMTrainState_MAX = 4
};

// Object: Enum DFMVehicle.EAITankPhase
enum class EAITankPhase : uint8_t
{
	ENone = 0,
	EFirstPhase = 1,
	ESecondPhase = 2,
	EThirdPhase = 3,
	EDead = 4,
	EAITankPhase_MAX = 5
};

// Object: Enum DFMVehicle.EAIHelicopterWayPointType
enum class EAIHelicopterWayPointType : uint8_t
{
	NONE = 0,
	PATROL = 1,
	FIGHT = 2,
	EAIHelicopterWayPointType_MAX = 3
};

// Object: Enum DFMVehicle.EAIHelicopterStepEvent
enum class EAIHelicopterStepEvent : uint8_t
{
	Default = 0,
	Step1 = 1,
	Step2 = 2,
	Step3 = 3,
	Step4 = 4,
	Step5 = 5,
	EAIHelicopterStepEvent_MAX = 6
};

// Object: Enum DFMVehicle.EAIHelicopterDriveState
enum class EAIHelicopterDriveState : uint8_t
{
	Default = 0,
	On = 1,
	Off = 2,
	EAIHelicopterDriveState_MAX = 3
};

// Object: Enum DFMVehicle.EAIHelicopterCrashType
enum class EAIHelicopterCrashType : uint8_t
{
	Default = 0,
	Body_Crash = 1,
	PilotDied_Crash = 2,
	EAIHelicopterCrashType_MAX = 3
};

// Object: Enum DFMVehicle.EAIHelicopterSpaceType
enum class EAIHelicopterSpaceType : uint8_t
{
	Default = 0,
	High = 1,
	Low = 2,
	EAIHelicopterSpaceType_MAX = 3
};

// Object: Enum DFMVehicle.EJetDriveModeState
enum class EJetDriveModeState : uint8_t
{
	Normal = 0,
	ChangingToSuspension = 1,
	Suspension = 2,
	ChangingToNormal = 3,
	EJetDriveModeState_MAX = 4
};

// Object: Enum DFMVehicle.EJetCockpitState
enum class EJetCockpitState : uint8_t
{
	Closed = 0,
	Opening = 1,
	Opened = 2,
	Closing = 3,
	EJetCockpitState_MAX = 4
};

// Object: Enum DFMVehicle.EJetDriveMode
enum class EJetDriveMode : uint8_t
{
	Normal = 0,
	Suspension = 1,
	EJetDriveMode_MAX = 2
};

// Object: Enum DFMVehicle.EJetInputMode
enum class EJetInputMode : uint8_t
{
	ControlCam = 0,
	ControlJetAxis = 1,
	ControlMove = 2,
	EJetInputMode_MAX = 3
};

// Object: Enum DFMVehicle.EJetSpeedupStatus
enum class EJetSpeedupStatus : uint8_t
{
	NoSpeedUp = 0,
	SpeedingUp = 1,
	EmptyRecovering = 2,
	EJetSpeedupStatus_MAX = 3
};

// Object: Enum DFMVehicle.EJetLandingGearState
enum class EJetLandingGearState : uint8_t
{
	Retracted = 0,
	Retracting = 1,
	Dropping = 2,
	Down = 3,
	EJetLandingGearState_MAX = 4
};

// Object: Enum DFMVehicle.EJetEffectProcessType
enum class EJetEffectProcessType : uint8_t
{
	None = 0,
	FadeIn = 1,
	FadeOut = 2,
	Permanent = 3,
	EJetEffectProcessType_MAX = 4
};

// Object: Enum DFMVehicle.EMotorCycleState
enum class EMotorCycleState : uint8_t
{
	ES_NORMAL = 0,
	ES_LIE_DOWN = 1,
	ES_STANDING_UP = 2,
	ES_MAX = 3
};

// Object: Enum DFMVehicle.EDFMVehicleEmissionType
enum class EDFMVehicleEmissionType : uint8_t
{
	Sustainmen = 0,
	VehicleStart = 1,
	VehicleStop = 2,
	StartBraking = 3,
	StopBraking = 4,
	EDFMVehicleEmissionType_MAX = 5
};

// Object: Enum DFMVehicle.EDFMVehiclePartState
enum class EDFMVehiclePartState : uint8_t
{
	EVPS_FullHealth = 0,
	EVPS_BeDamage = 1,
	EVPS_BeRecover = 2,
	EVPS_Broken = 3,
	EVPS_MAX = 4
};

// Object: Enum DFMVehicle.EVehicleFXCreateFlags
enum class EVehicleFXCreateFlags : uint8_t
{
	RelativeOffset = 1,
	AutoDestroy = 2,
	AutoPooling = 4,
	ForceRecreate = 8,
	EVehicleFXCreateFlags_MAX = 9
};

// Object: Enum DFMVehicle.EDFMVehicleDebugDumpStackType
enum class EDFMVehicleDebugDumpStackType : uint8_t
{
	EVDST_None = 0,
	EVDST_EnterVehicle = 1,
	EVDST_ExitVehicle = 2,
	EVDST_MAX = 3
};

// Object: Enum DFMVehicle.EDFMVehicleLaunchSkillProjectileType
enum class EDFMVehicleLaunchSkillProjectileType : uint8_t
{
	EDFMVLSPT_None = 0,
	EDFMVLSPT_Horizontal = 1,
	EDFMVLSPT_Vertical = 2,
	EDFMVLSPT_MAX = 3
};

// Object: Enum DFMVehicle.EVehicleMusicState
enum class EVehicleMusicState : uint8_t
{
	Stopped = 0,
	Playing = 1,
	EVehicleMusicState_MAX = 2
};

// Object: Enum DFMVehicle.EDFMVehiclePathFollowStatus
enum class EDFMVehiclePathFollowStatus : uint8_t
{
	Idle = 0,
	Paused = 1,
	Moving = 2,
	EDFMVehiclePathFollowStatus_MAX = 3
};

// Object: Enum DFMVehicle.EDFMVehicleSkillStatus
enum class EDFMVehicleSkillStatus : uint8_t
{
	Invalid = 0,
	Init = 1,
	Active = 2,
	Execute = 3,
	End = 4,
	EDFMVehicleSkillStatus_MAX = 5
};

// Object: Enum DFMVehicle.EDFTransformAnimationAction
enum class EDFTransformAnimationAction : uint8_t
{
	Keep = 0,
	Stop = 1,
	Play = 2,
	Pause = 3,
	EDFTransformAnimationAction_MAX = 4
};

// Object: Enum DFMVehicle.EDFMTrainDoorIndex
enum class EDFMTrainDoorIndex : uint8_t
{
	Door1 = 0,
	Door2 = 1,
	Door3 = 2,
	Door4 = 3,
	Door5 = 4,
	Door6 = 5,
	Door7 = 6,
	Door8 = 7,
	EDFMTrainDoorIndex_MAX = 8
};

// Object: Enum DFMVehicle.EDFMTrainDoorState
enum class EDFMTrainDoorState : uint8_t
{
	Normal = 0,
	AlwaysOpen = 1,
	AlwaysClose = 2,
	EDFMTrainDoorState_MAX = 3
};

// Object: Enum DFMVehicle.EAssistAimMode
enum class EAssistAimMode : uint8_t
{
	None = 0,
	Vehicle = 1,
	Character = 2,
	EAssistAimMode_MAX = 3
};

// Object: Enum DFMVehicle.EDFMVehicleAssistAimType
enum class EDFMVehicleAssistAimType : uint8_t
{
	EVAAT_None = 0,
	EVAAT_VehicleFPP = 1,
	EVAAT_VehicleTPP = 2,
	EVAAT_HelicopterFPP = 3,
	EVAAT_JetFPP = 4,
	EVAAT_Character = 5,
	EVAAT_MAX = 6
};

// Object: Enum DFMVehicle.EDFMVehicleSkillType
enum class EDFMVehicleSkillType : uint8_t
{
	VehicleType_Repair = 0,
	VehicleType_Smoke = 1,
	VehicleType_Heat = 2,
	VehicleType_ADS = 3,
	VehicleType_Mark = 4,
	VehicleType_Scan = 5,
	VehicleType_RebornBeacon = 6,
	VehicleType_ThermalSmoke = 7,
	VehicleType_ThermalImaging = 8,
	VehicleType_LaunchProjectile = 9,
	VehicleType_CreateControllaleActor = 10,
	VehicleType_CounterFireRadar = 11,
	VehicleType_Max = 12
};

// Object: Enum DFMVehicle.EVehicleHealthRecoverScaleFactorType
enum class EVehicleHealthRecoverScaleFactorType : uint8_t
{
	EVehicleHealthRecoverScaleFactorType_None = 0,
	EVehicleHealthRecoverScaleFactorType_Health = 1,
	EVehicleHealthRecoverScaleFactorType_HealthPercent = 2,
	EVehicleHealthRecoverScaleFactorType_Custom = 3,
	EVehicleHealthRecoverScaleFactorType_MAX = 4
};

// Object: Enum DFMVehicle.EVehicleHealthRecoverType
enum class EVehicleHealthRecoverType : uint8_t
{
	EVehicleHealthRecoverType_None = 0,
	EVehicleHealthRecoverType_SelfRecover = 1,
	EVehicleHealthRecoverType_SupplyStation = 2,
	EVehicleHealthRecoverType_RepairSkill = 3,
	EVehicleHealthRecoverType_Engineer = 4,
	EVehicleHealthRecoverType_MAX = 5
};

// Object: Enum DFMVehicle.EDFMVehicleArmorType
enum class EDFMVehicleArmorType : uint8_t
{
	None = 0,
	Light = 1,
	Middle = 2,
	Heavy = 3,
	Num = 4,
	EDFMVehicleArmorType_MAX = 5
};

// Object: Enum DFMVehicle.EDFMVehicleEffectParamsXValue
enum class EDFMVehicleEffectParamsXValue : uint8_t
{
	EEPX_None = 0,
	EEPX_VehicleKMPHAbs = 1,
	EEPX_VehicleSideSpeedKMPHAbs = 2,
	EEPX_VehicleSideSpeedKMPH = 3,
	EEPX_MAX = 4
};

// Object: Enum DFMVehicle.ESeatStateType
enum class ESeatStateType : uint8_t
{
	SeatStateType_RideEmpty = 0,
	SeatStateType_SelfRide = 1,
	SeatStateType_TeammateRide = 2,
	SeatStateType_SameCampRide = 3,
	SeatStateType_Destroy = 4,
	SeatStateType_MAX = 5
};

// Object: Enum DFMVehicle.EDFMVehicleType
enum class EDFMVehicleType : uint8_t
{
	VehicleType_Common = 0,
	VehicleType_Ground = 1,
	VehicleType_Tank = 2,
	VehicleType_Water = 3,
	VehicleType_Sky = 4,
	VehicleType_MAX = 5
};

// Object: Enum DFMVehicle.EUVehicleFrontendBuildNodeState
enum class EUVehicleFrontendBuildNodeState : uint8_t
{
	EState_Default = 0,
	EState_Dirty = 1,
	EState_Loading = 2,
	EState_LoadFailed = 4,
	EState_LoadSuccess = 8,
	EState_MAX = 9
};

// Object: Enum DFMVehicle.EVehicleFrontendLoadResultCode
enum class EVehicleFrontendLoadResultCode : uint8_t
{
	EState_Default = 0,
	EState_ConfigError = 1,
	EState_ResourcesError = 2,
	EState_MAX = 3
};

// Object: Enum DFMVehicle.EVehicleSpawnerType
enum class EVehicleSpawnerType : uint8_t
{
	EAutoSpawn = 0,
	EAirDrop = 1,
	EDeploy = 2,
	EVehicleSpawnerType_MAX = 3
};

// Object: Enum DFMVehicle.EVehicleSpawnerDirtyReason
enum class EVehicleSpawnerDirtyReason : uint8_t
{
	EReason_None = 0,
	EReason_SpawnedAlive = 1,
	EReason_CDProgress = 2,
	EReason_MAX = 3
};

// Object: ScriptStruct DFMVehicle.DFTransformAnimationData
// Size: 0x50 (Inherited: 0x0)
struct FDFTransformAnimationData
{
	struct UCurveFloat* LocationXCurve; // 0x0(0x8)
	struct UCurveFloat* LocationYCurve; // 0x8(0x8)
	struct UCurveFloat* LocationZCurve; // 0x10(0x8)
	struct UCurveFloat* PitchCurve; // 0x18(0x8)
	struct UCurveFloat* YawCurve; // 0x20(0x8)
	struct UCurveFloat* RollCurve; // 0x28(0x8)
	struct UCurveFloat* ScaleXCurve; // 0x30(0x8)
	struct UCurveFloat* ScaleYCurve; // 0x38(0x8)
	struct UCurveFloat* ScaleZCurve; // 0x40(0x8)
	float Duration; // 0x48(0x4)
	uint8_t Pad_0x4C[0x4]; // 0x4C(0x4)
};

// Object: ScriptStruct DFMVehicle.DFTransformAnimationPlaybackSetting
// Size: 0xC (Inherited: 0x0)
struct FDFTransformAnimationPlaybackSetting
{
	uint8_t bAutoPlay : 1; // 0x0(0x1), Mask(0x1)
	uint8_t BitPad_0x0_1 : 7; // 0x0(0x1)
	uint8_t bIsReversed : 1; // 0x1(0x1), Mask(0x1)
	uint8_t BitPad_0x1_1 : 7; // 0x1(0x1)
	uint8_t Pad_0x2[0x2]; // 0x2(0x2)
	float PlayRate; // 0x4(0x4)
	uint8_t bIsLooping : 1; // 0x8(0x1), Mask(0x1)
	uint8_t BitPad_0x8_1 : 7; // 0x8(0x1)
	uint8_t bRestoreState : 1; // 0x9(0x1), Mask(0x1)
	uint8_t BitPad_0x9_1 : 7; // 0x9(0x1)
	uint8_t Pad_0xA[0x2]; // 0xA(0x2)
};

// Object: ScriptStruct DFMVehicle.TrainHitCharacterTimeInfo
// Size: 0x18 (Inherited: 0x0)
struct FTrainHitCharacterTimeInfo
{
	struct ACHARACTER* HitCharacter; // 0x0(0x8)
	struct FVector CharacterRealDiedLoc; // 0x8(0xC)
	float HitServerTime; // 0x14(0x4)
};

// Object: ScriptStruct DFMVehicle.DFMTrainUpdateMoveData
// Size: 0x14 (Inherited: 0x0)
struct FDFMTrainUpdateMoveData
{
	float fStart; // 0x0(0x4)
	float fEnd; // 0x4(0x4)
	float fCurSpeed; // 0x8(0x4)
	float fAcc; // 0xC(0x4)
	float fMaxSpeed; // 0x10(0x4)
};

// Object: ScriptStruct DFMVehicle.DFMTrainRailData
// Size: 0x10 (Inherited: 0x0)
struct FDFMTrainRailData
{
	struct USplineComponent* RailSpline; // 0x0(0x8)
	uint8_t bLoopRail : 1; // 0x8(0x1), Mask(0x1)
	uint8_t BitPad_0x8_1 : 7; // 0x8(0x1)
	uint8_t Pad_0x9[0x7]; // 0x9(0x7)
};

// Object: ScriptStruct DFMVehicle.VehicleFrontendLoadResult
// Size: 0x1 (Inherited: 0x0)
struct FVehicleFrontendLoadResult
{
	uint8_t Pad_0x0[0x1]; // 0x0(0x1)
};

// Object: ScriptStruct DFMVehicle.VehicleFrontendLoadContext
// Size: 0x30 (Inherited: 0x0)
struct FVehicleFrontendLoadContext
{
	uint64_t TaskID; // 0x0(0x8)
	struct AActor* Owner; // 0x8(0x8)
	struct UVehicleFrontendContext* Context; // 0x10(0x8)
	uint8_t Pad_0x18[0x10]; // 0x18(0x10)
	struct FVehicleFrontendLoadResult Result; // 0x28(0x1)
	uint8_t Pad_0x29[0x7]; // 0x29(0x7)
};

// Object: ScriptStruct DFMVehicle.AnimNode_DFMVehicleSyncHandler
// Size: 0x120 (Inherited: 0x108)
struct FAnimNode_DFMVehicleSyncHandler : FAnimNode_SkeletalControlBase
{
	uint8_t Pad_0x108[0x18]; // 0x108(0x18)
};

// Object: ScriptStruct DFMVehicle.AnimNode_DFMWheelHandler
// Size: 0x130 (Inherited: 0x108)
struct FAnimNode_DFMWheelHandler : FAnimNode_SkeletalControlBase
{
	uint8_t Pad_0x108[0x28]; // 0x108(0x28)
};

// Object: ScriptStruct DFMVehicle.BoatAutoBalanceConfig
// Size: 0xC (Inherited: 0x0)
struct FBoatAutoBalanceConfig
{
	uint8_t bEnableAutoBalance : 1; // 0x0(0x1), Mask(0x1)
	uint8_t BitPad_0x0_1 : 7; // 0x0(0x1)
	uint8_t Pad_0x1[0x3]; // 0x1(0x3)
	float MaxBalancedRollAngle; // 0x4(0x4)
	float BalancedStrength; // 0x8(0x4)
};

// Object: ScriptStruct DFMVehicle.HelicopterWayPointData
// Size: 0x28 (Inherited: 0x0)
struct FHelicopterWayPointData
{
	struct FName GroupName; // 0x0(0x8)
	struct TArray<struct FVector> Path; // 0x8(0x10)
	struct TArray<struct FVector> FirePoints; // 0x18(0x10)
};

// Object: ScriptStruct DFMVehicle.PatrolConfig_Helicopter
// Size: 0x10 (Inherited: 0x0)
struct FPatrolConfig_Helicopter
{
	struct UBOSS04AIHelicopterConfig* PatrolConfigClass; // 0x0(0x8)
	int32_t Wight; // 0x8(0x4)
	uint8_t Pad_0xC[0x4]; // 0xC(0x4)
};

// Object: ScriptStruct DFMVehicle.AITransportHelicopterStateParam
// Size: 0x80 (Inherited: 0x0)
struct FAITransportHelicopterStateParam
{
	EAITransportHeliMoveState MoveState; // 0x0(0x1)
	uint8_t Pad_0x1[0xF]; // 0x1(0xF)
	struct FTransform TargetTF; // 0x10(0x30)
	float PlayingTime; // 0x40(0x4)
	uint8_t Pad_0x44[0xC]; // 0x44(0xC)
	struct FTransform CurrentTF; // 0x50(0x30)
};

// Object: ScriptStruct DFMVehicle.AIHelicopterStateParam
// Size: 0x6 (Inherited: 0x0)
struct FAIHelicopterStateParam
{
	EAIHelicopterMoveState MoveState; // 0x0(0x1)
	EAIHelicopterCrashType CrashType; // 0x1(0x1)
	EAIHelicopterSpaceType SpaceType; // 0x2(0x1)
	EAIHelicopterFightState FightState; // 0x3(0x1)
	EAIHelicopterFightState LastFightState; // 0x4(0x1)
	EAIHelicopterDriveState DriveState; // 0x5(0x1)
};

// Object: ScriptStruct DFMVehicle.HelicopterFX
// Size: 0x10 (Inherited: 0x0)
struct FHelicopterFX
{
	struct UFXResourceContainerComponent* FX; // 0x0(0x8)
	int32_t ID; // 0x8(0x4)
	uint8_t Pad_0xC[0x4]; // 0xC(0x4)
};

// Object: ScriptStruct DFMVehicle.AIHelicopterAlertPath
// Size: 0x10 (Inherited: 0x0)
struct FAIHelicopterAlertPath
{
	struct TArray<struct FVector> AlertWayPoints; // 0x0(0x10)
};

// Object: ScriptStruct DFMVehicle.AIHelicopterSpaceData
// Size: 0x120 (Inherited: 0x0)
struct FAIHelicopterSpaceData
{
	EAIHelicopterSpaceType SpaceType; // 0x0(0x1)
	uint8_t Pad_0x1[0x3]; // 0x1(0x3)
	int32_t SectionID; // 0x4(0x4)
	struct FVector CenterLoc; // 0x8(0xC)
	uint8_t Pad_0x14[0x4]; // 0x14(0x4)
	struct TArray<struct FAIHelicopterSectionPoolItem> SectionIDPool; // 0x18(0x10)
	struct TArray<struct FCrashPointData> CrashPoints; // 0x28(0x10)
	uint8_t Pad_0x38[0x8]; // 0x38(0x8)
	struct FCrashPointData CurrentCrashPoint; // 0x40(0xC0)
	struct TArray<struct FVector> CurrentCrashPath; // 0x100(0x10)
	float CrashPointPredictTime; // 0x110(0x4)
	int32_t CrashPointType; // 0x114(0x4)
	uint32_t Timestamp; // 0x118(0x4)
	uint8_t bDirty : 1; // 0x11C(0x1), Mask(0x1)
	uint8_t BitPad_0x11C_1 : 7; // 0x11C(0x1)
	uint8_t Pad_0x11D[0x3]; // 0x11D(0x3)
};

// Object: ScriptStruct DFMVehicle.AIHelicopterSectionPoolItem
// Size: 0x28 (Inherited: 0x0)
struct FAIHelicopterSectionPoolItem
{
	int32_t SectionID; // 0x0(0x4)
	int32_t Weight; // 0x4(0x4)
	struct TArray<struct FVector> Path; // 0x8(0x10)
	uint8_t HasPlayer : 1; // 0x18(0x1), Mask(0x1)
	uint8_t BitPad_0x18_1 : 7; // 0x18(0x1)
	uint8_t Pad_0x19[0x3]; // 0x19(0x3)
	int32_t PlayerNum; // 0x1C(0x4)
	int32_t TimeSec; // 0x20(0x4)
	uint8_t Pad_0x24[0x4]; // 0x24(0x4)
};

// Object: ScriptStruct DFMVehicle.AIHelicopterTimeKey
// Size: 0x8 (Inherited: 0x0)
struct FAIHelicopterTimeKey
{
	uint32_t TimeMinute; // 0x0(0x4)
	uint32_t TimeSecond; // 0x4(0x4)
};

// Object: ScriptStruct DFMVehicle.TankMeshData
// Size: 0x28 (Inherited: 0x0)
struct FTankMeshData
{
	EAITankPhase AITankPhase; // 0x0(0x1)
	uint8_t Pad_0x1[0x7]; // 0x1(0x7)
	struct TArray<struct FName> SkeletalMeshComponentTags; // 0x8(0x10)
	struct TArray<struct USkeletalMesh*> SkeletalMeshs; // 0x18(0x10)
};

// Object: ScriptStruct DFMVehicle.DFMAmphibiousVehicleAnimInstanceProxy
// Size: 0x7B0 (Inherited: 0x7A0)
struct FDFMAmphibiousVehicleAnimInstanceProxy : FAnimInstanceProxy
{
	uint8_t bIsInWater : 1; // 0x798(0x1), Mask(0x1)
	uint8_t BitPad_0x7A0_1 : 7; // 0x7A0(0x1)
	uint8_t Pad_0x7A1[0x7]; // 0x7A1(0x7)
	struct ADFMWheeledVehicle* OwnerVehicle; // 0x7A8(0x8)
};

// Object: ScriptStruct DFMVehicle.BoatStrandedSetting
// Size: 0xC (Inherited: 0x0)
struct FBoatStrandedSetting
{
	float MaxVelocitySizeWhenStranded; // 0x0(0x4)
	float MinDurationToCheckStrandedVelocity; // 0x4(0x4)
	float MinThrustForceScaleToMove; // 0x8(0x4)
};

// Object: ScriptStruct DFMVehicle.BoatSteeringSetting
// Size: 0xB8 (Inherited: 0x0)
struct FBoatSteeringSetting
{
	float MaxSteeringAngle; // 0x0(0x4)
	float SwingSpeed; // 0x4(0x4)
	uint8_t bIgnoreRollTorqueWhenConsiderWave : 1; // 0x8(0x1), Mask(0x1)
	uint8_t BitPad_0x8_1 : 7; // 0x8(0x1)
	uint8_t Pad_0x9[0x3]; // 0x9(0x3)
	float ForceOffsetInZ; // 0xC(0x4)
	uint8_t bApplySteeringThrust : 1; // 0x10(0x1), Mask(0x1)
	uint8_t BitPad_0x10_1 : 7; // 0x10(0x1)
	uint8_t Pad_0x11[0x7]; // 0x11(0x7)
	struct FRuntimeFloatCurve YawAccelerationCurve; // 0x18(0xA0)
};

// Object: ScriptStruct DFMVehicle.BoatEngineSetting
// Size: 0x380 (Inherited: 0x0)
struct FBoatEngineSetting
{
	struct FTransform RelativeTransform; // 0x0(0x30)
	float EngineRadius; // 0x30(0x4)
	uint8_t bDrawEngine : 1; // 0x34(0x1), Mask(0x1)
	uint8_t BitPad_0x34_1 : 7; // 0x34(0x1)
	uint8_t bDisableThrustWhenCapsized : 1; // 0x35(0x1), Mask(0x1)
	uint8_t BitPad_0x35_1 : 7; // 0x35(0x1)
	uint8_t Pad_0x36[0x2]; // 0x36(0x2)
	float CapsizedRollAngleThreshold; // 0x38(0x4)
	float SpinSpeed; // 0x3C(0x4)
	float MinRpm; // 0x40(0x4)
	float MaxForwardRpm; // 0x44(0x4)
	float MaxBackwardRpm; // 0x48(0x4)
	float MaxSteeringInPlaceRpm; // 0x4C(0x4)
	struct FRuntimeFloatCurve EngineSubmergedThrustForceScaleCurve; // 0x50(0xA0)
	struct FRuntimeFloatCurve BuoyancyThrustForceScaleCurve; // 0xF0(0xA0)
	struct FRuntimeFloatCurve ThrustCurve; // 0x190(0xA0)
	uint8_t bProjectThrust : 1; // 0x230(0x1), Mask(0x1)
	uint8_t BitPad_0x230_1 : 7; // 0x230(0x1)
	uint8_t bIgnorePitchTorqueWhenConsiderWave : 1; // 0x231(0x1), Mask(0x1)
	uint8_t BitPad_0x231_1 : 7; // 0x231(0x1)
	uint8_t Pad_0x232[0x2]; // 0x232(0x2)
	float ForceOffsetInZ; // 0x234(0x4)
	struct FRuntimeFloatCurve LinearVelocityDampingCurveInX; // 0x238(0xA0)
	struct FRuntimeFloatCurve LinearVelocityDampingCurveInY; // 0x2D8(0xA0)
	uint8_t Pad_0x378[0x8]; // 0x378(0x8)
};

// Object: ScriptStruct DFMVehicle.DFMBoatBumpConfig
// Size: 0x230 (Inherited: 0x0)
struct FDFMBoatBumpConfig
{
	uint8_t bVehicleHasBumpAnim : 1; // 0x0(0x1), Mask(0x1)
	uint8_t BitPad_0x0_1 : 7; // 0x0(0x1)
	uint8_t Pad_0x1[0x7]; // 0x1(0x7)
	struct FRuntimeFloatCurve BumpCurve; // 0x8(0xA0)
	float BumpOffsetInterpSpeed; // 0xA8(0x4)
	uint8_t Pad_0xAC[0x4]; // 0xAC(0x4)
	struct FRuntimeFloatCurve LinearZBumpCurve; // 0xB0(0xA0)
	float LinearZBumpOffsetInterpSpeed; // 0x150(0x4)
	uint8_t Pad_0x154[0x4]; // 0x154(0x4)
	struct FRuntimeFloatCurve DriveYCurve; // 0x158(0xA0)
	float DriveYInterpSpeed; // 0x1F8(0x4)
	uint8_t Pad_0x1FC[0x34]; // 0x1FC(0x34)
};

// Object: ScriptStruct DFMVehicle.DFMBoatDriveAnimConfig
// Size: 0xA8 (Inherited: 0x0)
struct FDFMBoatDriveAnimConfig
{
	struct FRuntimeFloatCurve BoatDriveCurve; // 0x0(0xA0)
	float LerpSpeed; // 0xA0(0x4)
	uint8_t Pad_0xA4[0x4]; // 0xA4(0x4)
};

// Object: ScriptStruct DFMVehicle.DFMBrokenVehicleDirectionInfo
// Size: 0x10 (Inherited: 0x0)
struct FDFMBrokenVehicleDirectionInfo
{
	struct FVector Direction; // 0x0(0xC)
	float ratio; // 0xC(0x4)
};

// Object: ScriptStruct DFMVehicle.BrokenVehiclePhysicsAdjustedTarget
// Size: 0x70 (Inherited: 0x0)
struct FBrokenVehiclePhysicsAdjustedTarget
{
	float ArrivedTimeSeconds; // 0x0(0x4)
	uint8_t Pad_0x4[0xC]; // 0x4(0xC)
	struct FRigidBodyState RigidBodyState; // 0x10(0x40)
	uint8_t Pad_0x50[0x20]; // 0x50(0x20)
};

// Object: ScriptStruct DFMVehicle.BrokenVehiclePhysicsReplicatedData
// Size: 0x40 (Inherited: 0x0)
struct FBrokenVehiclePhysicsReplicatedData
{
	struct FRigidBodyState RigidBodyState; // 0x0(0x40)
};

// Object: ScriptStruct DFMVehicle.BrokenVehiclePhysicsReplicatedConfig
// Size: 0x44 (Inherited: 0x0)
struct FBrokenVehiclePhysicsReplicatedConfig
{
	float MaxServerBroadcastInterval; // 0x0(0x4)
	float RigidBodyStateComparedTolerance; // 0x4(0x4)
	float MinPositionErrorValue; // 0x8(0x4)
	float MinZErrorValue; // 0xC(0x4)
	float MinZErrorValueWhenDisableSimulating; // 0x10(0x4)
	float MinRotationErrorValue; // 0x14(0x4)
	float MinRotationWhenDisableSimulating; // 0x18(0x4)
	float MaxSimulatedVehicleExtrapolatedTimeSeconds; // 0x1C(0x4)
	float MaxSimulatedHardSnapLinearError; // 0x20(0x4)
	float MaxSimulatedHardSnapAngularError; // 0x24(0x4)
	float LinearVelocityCoefficientInSimulated; // 0x28(0x4)
	float AngularVelocityCoefficientInSimulated; // 0x2C(0x4)
	float PositionLerpSpeedInSimulated; // 0x30(0x4)
	float AngleLerpSpeedInSimulated; // 0x34(0x4)
	float LinearDiffAdjustedCoefficient; // 0x38(0x4)
	float AngularDiffAdjustedCoefficient; // 0x3C(0x4)
	float MaxAngularDiffToAdjustWithAngularVelocity; // 0x40(0x4)
};

// Object: ScriptStruct DFMVehicle.DFMBrokenVehiclePhysicsRepInfo
// Size: 0x30 (Inherited: 0x0)
struct FDFMBrokenVehiclePhysicsRepInfo
{
	struct FVector LinearVelocity; // 0x0(0xC)
	struct FVector AngularVelocity; // 0xC(0xC)
	struct FVector Position; // 0x18(0xC)
	struct FRotator Rotation; // 0x24(0xC)
};

// Object: ScriptStruct DFMVehicle.DFMJetAnimInstanceProxy
// Size: 0x800 (Inherited: 0x7A0)
struct FDFMJetAnimInstanceProxy : FAnimInstanceProxy
{
	float PitchFlap; // 0x798(0x4)
	float YawFlap; // 0x79C(0x4)
	float RollFlap; // 0x7A0(0x4)
	float PitchInput; // 0x7A4(0x4)
	float YawInput; // 0x7A8(0x4)
	float RollInput; // 0x7AC(0x4)
	uint8_t bLandingGearUseCachedPose : 1; // 0x7B0(0x1), Mask(0x1)
	float LandingGearUpProgress; // 0x7B4(0x4)
	uint8_t bDriveModeUseCachedPose : 1; // 0x7B8(0x1), Mask(0x1)
	float DriveModeChangeProgress; // 0x7BC(0x4)
	uint8_t bNozzleUseCachedPose : 1; // 0x7C0(0x1), Mask(0x1)
	uint8_t BitPad_0x7C0_3 : 5; // 0x7C0(0x1)
	uint8_t Pad_0x7C1[0x3]; // 0x7C1(0x3)
	float NozzleSpeedUpProcess; // 0x7C4(0x4)
	uint8_t bCockpitUseCachedPose : 1; // 0x7C8(0x1), Mask(0x1)
	uint8_t BitPad_0x7C8_1 : 7; // 0x7C8(0x1)
	uint8_t Pad_0x7C9[0x3]; // 0x7C9(0x3)
	float CockpitProcess; // 0x7CC(0x4)
	struct FVector FrontWheelSuspOffsetVec; // 0x7D0(0xC)
	struct FVector BackLeftWheelSuspOffsetVec; // 0x7DC(0xC)
	struct FVector BackRightWheelSuspOffsetVec; // 0x7E8(0xC)
	uint8_t Pad_0x7F4[0xC]; // 0x7F4(0xC)
};

// Object: ScriptStruct DFMVehicle.DFMJetOspreyAnimInstanceProxy
// Size: 0x800 (Inherited: 0x800)
struct FDFMJetOspreyAnimInstanceProxy : FDFMJetAnimInstanceProxy
{
	float YawRudder; // 0x7F4(0x4)
	float SuspYawInput; // 0x7F8(0x4)
};

// Object: ScriptStruct DFMVehicle.MotorCycleDamping
// Size: 0x8 (Inherited: 0x0)
struct FMotorCycleDamping
{
	float Stiffness; // 0x0(0x4)
	float damping; // 0x4(0x4)
};

// Object: ScriptStruct DFMVehicle.SphereDataInfo
// Size: 0x50 (Inherited: 0x0)
struct FSphereDataInfo
{
	float SphereRadius; // 0x0(0x4)
	uint8_t Pad_0x4[0xC]; // 0x4(0xC)
	struct FTransform LocalBodyTransform; // 0x10(0x30)
	uint8_t IsDisplayEditor : 1; // 0x40(0x1), Mask(0x1)
	uint8_t BitPad_0x40_1 : 7; // 0x40(0x1)
	uint8_t Pad_0x41[0xF]; // 0x41(0xF)
};

// Object: ScriptStruct DFMVehicle.CapsuleDataInfo
// Size: 0x50 (Inherited: 0x0)
struct FCapsuleDataInfo
{
	float CapsuleHalfHeight; // 0x0(0x4)
	float CapsuleRadius; // 0x4(0x4)
	uint8_t Pad_0x8[0x8]; // 0x8(0x8)
	struct FTransform LocalBodyTransform; // 0x10(0x30)
	uint8_t IsDisplayEditor : 1; // 0x40(0x1), Mask(0x1)
	uint8_t BitPad_0x40_1 : 7; // 0x40(0x1)
	uint8_t Pad_0x41[0xF]; // 0x41(0xF)
};

// Object: ScriptStruct DFMVehicle.BoxDataInfo
// Size: 0x50 (Inherited: 0x0)
struct FBoxDataInfo
{
	struct FVector BoxExtent; // 0x0(0xC)
	uint8_t Pad_0xC[0x4]; // 0xC(0x4)
	struct FTransform LocalBodyTransform; // 0x10(0x30)
	uint8_t IsDisplayEditor : 1; // 0x40(0x1), Mask(0x1)
	uint8_t BitPad_0x40_1 : 7; // 0x40(0x1)
	uint8_t Pad_0x41[0xF]; // 0x41(0xF)
};

// Object: ScriptStruct DFMVehicle.TankControllInfo
// Size: 0x40 (Inherited: 0x0)
struct FTankControllInfo
{
	struct UCurveFloat* GearCurve; // 0x0(0x8)
	uint8_t IsAutoGear : 1; // 0x8(0x1), Mask(0x1)
	uint8_t BitPad_0x8_1 : 7; // 0x8(0x1)
	uint8_t IsDriveModeSpecial : 1; // 0x9(0x1), Mask(0x1)
	uint8_t BitPad_0x9_1 : 7; // 0x9(0x1)
	uint8_t Pad_0xA[0x6]; // 0xA(0x6)
	struct UCurveFloat* MaxLeftWheelSpeedCurve; // 0x10(0x8)
	struct UCurveFloat* MaxRightWheelSpeedCurve; // 0x18(0x8)
	struct UCurveFloat* LeftThrustRatio; // 0x20(0x8)
	struct UCurveFloat* LeftBrakeCurve; // 0x28(0x8)
	struct UCurveFloat* RightBrakeCurve; // 0x30(0x8)
	struct UCurveFloat* ThrustRatioCurve; // 0x38(0x8)
};

// Object: ScriptStruct DFMVehicle.DFMTrainAnimInstanceProxy
// Size: 0x10 (Inherited: 0x0)
struct FDFMTrainAnimInstanceProxy
{
	struct TArray<float> DoorStateAlpha; // 0x0(0x10)
};

// Object: ScriptStruct DFMVehicle.DFMVehicle3PAnimInstanceOptProxy
// Size: 0x7E0 (Inherited: 0x7A0)
struct FDFMVehicle3PAnimInstanceOptProxy : FGPAnimInstanceProxyBase
{
	struct UAnimSequence* VehicleIdle3P; // 0x798(0x8)
	uint8_t bDriver : 1; // 0x7A0(0x1), Mask(0x1)
	uint8_t bUseDoubleHandIK : 1; // 0x7A1(0x1), Mask(0x1)
	float DriveTurnX; // 0x7A4(0x4)
	float DriveTurnY; // 0x7A8(0x4)
	struct UAimOffsetBlendSpace* VehicleDriveTurnBlend3P; // 0x7B0(0x8)
	float SoaringTime; // 0x7B8(0x4)
	uint8_t BitPad_0x7BC_2 : 6; // 0x7BC(0x1)
	uint8_t Pad_0x7BD[0x3]; // 0x7BD(0x3)
	struct UAimOffsetBlendSpace* VehicleSoaringBlend3P; // 0x7C0(0x8)
	EAnimationPlayType CurrentAnimationPlayType; // 0x7C8(0x1)
	uint8_t Pad_0x7C9[0x7]; // 0x7C9(0x7)
	struct UDFMVehicle3PAnimInstanceOpt* ParentAnimInst; // 0x7D0(0x8)
	uint8_t Pad_0x7D8[0x8]; // 0x7D8(0x8)
};

// Object: ScriptStruct DFMVehicle.WheelAsyncTraceData
// Size: 0x60 (Inherited: 0x0)
struct FWheelAsyncTraceData
{
	struct USceneComponent* Component; // 0x0(0x8)
	uint8_t Pad_0x8[0x58]; // 0x8(0x58)
};

// Object: ScriptStruct DFMVehicle.PathFollowStickToGroundConfig
// Size: 0x4 (Inherited: 0x0)
struct FPathFollowStickToGroundConfig
{
	float radius; // 0x0(0x4)
};

// Object: ScriptStruct DFMVehicle.PIDData
// Size: 0x1C (Inherited: 0x0)
struct FPIDData
{
	float P; // 0x0(0x4)
	float I; // 0x4(0x4)
	float D; // 0x8(0x4)
	float UpperLimit; // 0xC(0x4)
	float LowerLimit; // 0x10(0x4)
	uint8_t Pad_0x14[0x8]; // 0x14(0x8)
};

// Object: ScriptStruct DFMVehicle.DFMWheelAnimInstanceProxy
// Size: 0x7C0 (Inherited: 0x7B0)
struct FDFMWheelAnimInstanceProxy : FVehicleAnimInstanceProxy
{
	uint8_t Pad_0x7B0[0x10]; // 0x7B0(0x10)
};

// Object: ScriptStruct DFMVehicle.DFMValkyrieVehicleAnimInstanceProxyExtendedParams
// Size: 0x18 (Inherited: 0x0)
struct FDFMValkyrieVehicleAnimInstanceProxyExtendedParams
{
	struct FRotator CurrentFrontWindowRotator; // 0x0(0xC)
	struct FRotator CurrentBackWindowRotator; // 0xC(0xC)
};

// Object: ScriptStruct DFMVehicle.DFMVehicleAnimInstanceProxy
// Size: 0xA8 (Inherited: 0x0)
struct FDFMVehicleAnimInstanceProxy
{
	int32_t SeatStateFL; // 0x0(0x4)
	int32_t SeatStateFR; // 0x4(0x4)
	int32_t SeatStateBL; // 0x8(0x4)
	int32_t SeatStateBR; // 0xC(0x4)
	float DriveTurnX; // 0x10(0x4)
	float DriveTurnY; // 0x14(0x4)
	struct FRotator SteeringWheelRot; // 0x18(0xC)
	uint8_t bVehicleShake : 1; // 0x24(0x1), Mask(0x1)
	uint8_t BitPad_0x24_1 : 7; // 0x24(0x1)
	uint8_t Pad_0x25[0x3]; // 0x25(0x3)
	float FPPDriveTurnAnimTime; // 0x28(0x4)
	uint8_t bFPPDrive : 1; // 0x2C(0x1), Mask(0x1)
	uint8_t BitPad_0x2C_1 : 7; // 0x2C(0x1)
	uint8_t bCloseWindow : 1; // 0x2D(0x1), Mask(0x1)
	uint8_t BitPad_0x2D_1 : 7; // 0x2D(0x1)
	uint8_t Pad_0x2E[0x2]; // 0x2E(0x2)
	struct FRotator CarBarRot; // 0x30(0xC)
	uint8_t Pad_0x3C[0x4]; // 0x3C(0x4)
	struct TMap<struct FName, struct FRotator> CurrentBoneRelRotatorMap; // 0x40(0x50)
	struct FDFMValkyrieVehicleAnimInstanceProxyExtendedParams ValkyrieExtendedParams; // 0x90(0x18)
};

// Object: ScriptStruct DFMVehicle.DFMVehicleAnimInstanceOptProxy
// Size: 0x800 (Inherited: 0x7A0)
struct FDFMVehicleAnimInstanceOptProxy : FGPAnimInstanceProxyBase
{
	struct UAnimSequence* VehicleIdle; // 0x798(0x8)
	struct UAnimSequence* LastVehicleIdle; // 0x7A0(0x8)
	struct UAnimSequence* LocomotionIdle; // 0x7A8(0x8)
	struct UAnimSequence* LastLocomotionIdle; // 0x7B0(0x8)
	float DriveTurnX; // 0x7B8(0x4)
	float DriveTurnY; // 0x7BC(0x4)
	struct UAimOffsetBlendSpace* VehicleDriveTurnBlend; // 0x7C0(0x8)
	struct UAimOffsetBlendSpace* LastVehicleDriveTurnBlend; // 0x7C8(0x8)
	struct FRotator SpineBoneRotator; // 0x7D0(0xC)
	struct FVector SpineLocationOffset; // 0x7DC(0xC)
	uint8_t bDriverNotWeapon : 1; // 0x7E8(0x1), Mask(0x1)
	uint8_t bWaitingForWeaponChanged : 1; // 0x7E9(0x1), Mask(0x1)
	uint8_t BitPad_0x7F0_2 : 6; // 0x7F0(0x1)
	uint8_t Pad_0x7F1[0xF]; // 0x7F1(0xF)
};

// Object: ScriptStruct DFMVehicle.VehicleHitPartInfo
// Size: 0xC0 (Inherited: 0x0)
struct FVehicleHitPartInfo
{
	struct FName PartName; // 0x0(0x8)
	int32_t BodyPartInstanceId; // 0x8(0x4)
	float DamageScaling; // 0xC(0x4)
	float RadiusDamageScaling; // 0x10(0x4)
	uint8_t Pad_0x14[0x4]; // 0x14(0x4)
	struct TArray<struct FVehicleAngleDamageInfo> AngleDamageInfos; // 0x18(0x10)
	struct TMap<uint64_t, struct FAntiVehicleWeaponDamagePartInfoContainer> AntiVehicleWeaponConfigs; // 0x28(0x50)
	float PenetrateConst; // 0x78(0x4)
	struct FVector BoxExtent; // 0x7C(0xC)
	uint8_t Pad_0x88[0x8]; // 0x88(0x8)
	struct FTransform BoxRelativeTransform; // 0x90(0x30)
};

// Object: ScriptStruct DFMVehicle.DFMVehicleEmissionConfig
// Size: 0x18 (Inherited: 0x0)
struct FDFMVehicleEmissionConfig
{
	struct FName ParamterName; // 0x0(0x8)
	struct TArray<struct FDFMVehicleEmissionInfo> EmissionInfos; // 0x8(0x10)
};

// Object: ScriptStruct DFMVehicle.DFMVehicleEmissionInfo
// Size: 0x8 (Inherited: 0x0)
struct FDFMVehicleEmissionInfo
{
	EDFMVehicleEmissionType EmissionType; // 0x0(0x1)
	uint8_t Pad_0x1[0x3]; // 0x1(0x3)
	int32_t Value; // 0x4(0x4)
};

// Object: ScriptStruct DFMVehicle.VehicleFakeRPMConfig
// Size: 0xD8 (Inherited: 0x0)
struct FVehicleFakeRPMConfig
{
	uint8_t bIsEnableFakeRPM : 1; // 0x0(0x1), Mask(0x1)
	uint8_t BitPad_0x0_1 : 7; // 0x0(0x1)
	uint8_t Pad_0x1[0x7]; // 0x1(0x7)
	struct TArray<struct FVehicleFakeRPMGearParamConfig> FakeRpmGearParamConfigs; // 0x8(0x10)
	uint8_t bIsEnableFakeRPM_Velocity : 1; // 0x18(0x1), Mask(0x1)
	uint8_t BitPad_0x18_1 : 7; // 0x18(0x1)
	uint8_t Pad_0x19[0x3]; // 0x19(0x3)
	float FakeRPM_VelocityLerpSpeed; // 0x1C(0x4)
	struct FRuntimeFloatCurve FakeRPM_VelocityCurve; // 0x20(0xA0)
	uint8_t Pad_0xC0[0x18]; // 0xC0(0x18)
};

// Object: ScriptStruct DFMVehicle.VehicleFakeRPMGearParamConfig
// Size: 0x14 (Inherited: 0x0)
struct FVehicleFakeRPMGearParamConfig
{
	float TargetRPM; // 0x0(0x4)
	float RPMRiseSpeed; // 0x4(0x4)
	float FakeRPMGearShiftUpTimeThresholds; // 0x8(0x4)
	float FakeRPMFallDuration; // 0xC(0x4)
	float FakeGearShiftRPMFallSpeed; // 0x10(0x4)
};

// Object: ScriptStruct DFMVehicle.VehicleWeaponAudioInfo
// Size: 0x408 (Inherited: 0x0)
struct FVehicleWeaponAudioInfo
{
	uint8_t Pad_0x0[0x408]; // 0x0(0x408)
};

// Object: ScriptStruct DFMVehicle.DFMVehicleReplicationItem
// Size: 0x40 (Inherited: 0x8)
struct FDFMVehicleReplicationItem : FPropertyReplicationItem
{
	struct FRepMovement ReplicatedMovement; // 0x8(0x38)
};

// Object: ScriptStruct DFMVehicle.VehicleOutLineEffectData
// Size: 0x8 (Inherited: 0x0)
struct FVehicleOutLineEffectData
{
	int32_t OutLineEffectBitArry; // 0x0(0x4)
	int32_t ProxSensorMarkKey; // 0x4(0x4)
};

// Object: ScriptStruct DFMVehicle.GetOffInheritVehicleVelocityConfig
// Size: 0x1F0 (Inherited: 0x0)
struct FGetOffInheritVehicleVelocityConfig
{
	uint8_t bGetOffsetInheritVehicleVelocity : 1; // 0x0(0x1), Mask(0x1)
	uint8_t BitPad_0x0_1 : 7; // 0x0(0x1)
	uint8_t Pad_0x1[0x7]; // 0x1(0x7)
	struct FRuntimeFloatCurve ScaleValueCurve; // 0x8(0xA0)
	struct FRuntimeFloatCurve ZValueCurve; // 0xA8(0xA0)
	uint8_t bApplyZValueScalar : 1; // 0x148(0x1), Mask(0x1)
	uint8_t BitPad_0x148_1 : 7; // 0x148(0x1)
	uint8_t Pad_0x149[0x7]; // 0x149(0x7)
	struct FRuntimeFloatCurve ZValueScalarCurve; // 0x150(0xA0)
};

// Object: ScriptStruct DFMVehicle.VehicleGetOffPointConfigGroup
// Size: 0x20 (Inherited: 0x0)
struct FVehicleGetOffPointConfigGroup
{
	int32_t Priority; // 0x0(0x4)
	uint8_t Pad_0x4[0x4]; // 0x4(0x4)
	struct TArray<struct FVector> Locs; // 0x8(0x10)
	uint8_t bEnablePointExtent : 1; // 0x18(0x1), Mask(0x1)
	uint8_t BitPad_0x18_1 : 7; // 0x18(0x1)
	uint8_t Pad_0x19[0x7]; // 0x19(0x7)
};

// Object: ScriptStruct DFMVehicle.VehicleGetOffLocationDesc
// Size: 0x10 (Inherited: 0x0)
struct FVehicleGetOffLocationDesc
{
	struct FVector Location; // 0x0(0xC)
	int32_t Priority; // 0xC(0x4)
};

// Object: ScriptStruct DFMVehicle.VehicleLockedAttribute
// Size: 0x8 (Inherited: 0x0)
struct FVehicleLockedAttribute
{
	float LockDistanceOffset; // 0x0(0x4)
	float LockDurationOffset; // 0x4(0x4)
};

// Object: ScriptStruct DFMVehicle.VehicleLockStateInfo
// Size: 0x30 (Inherited: 0x0)
struct FVehicleLockStateInfo
{
	uint8_t bBulletLockInfo : 1; // 0x0(0x1), Mask(0x1)
	uint8_t BitPad_0x0_1 : 7; // 0x0(0x1)
	EStingerMissileLockingState LockState; // 0x1(0x1)
	EStingerMissileLockingState BulletLockState; // 0x2(0x1)
	uint8_t Pad_0x3[0x5]; // 0x3(0x5)
	struct AGPCharacter* LockedWeaponOwner; // 0x8(0x8)
	struct AActor* LockedMissile; // 0x10(0x8)
	uint64_t WeaponID; // 0x18(0x8)
	float LockingTime; // 0x20(0x4)
	float LockingProgress; // 0x24(0x4)
	float LockingIncreaseValue; // 0x28(0x4)
	uint8_t bNeedShowBulletDir : 1; // 0x2C(0x1), Mask(0x1)
	uint8_t BitPad_0x2C_1 : 7; // 0x2C(0x1)
	uint8_t Pad_0x2D[0x3]; // 0x2D(0x3)
};

// Object: ScriptStruct DFMVehicle.PostPhysicsTickFunction
// Size: 0x68 (Inherited: 0x60)
struct FPostPhysicsTickFunction : FTickFunction
{
	uint8_t Pad_0x60[0x8]; // 0x60(0x8)
};

// Object: ScriptStruct DFMVehicle.VehicleBodyPartBrokenEffect
// Size: 0x40 (Inherited: 0x0)
struct FVehicleBodyPartBrokenEffect
{
	struct FName EffectId; // 0x0(0x8)
	struct FName AssociatedComponent; // 0x8(0x8)
	struct FTransform RelativeTransform; // 0x10(0x30)
};

// Object: ScriptStruct DFMVehicle.DFMVehicleCollisionBox
// Size: 0x50 (Inherited: 0x0)
struct FDFMVehicleCollisionBox
{
	struct FTransform Transform; // 0x0(0x30)
	struct FVector Extent; // 0x30(0xC)
	uint8_t bIsDraw : 1; // 0x3C(0x1), Mask(0x1)
	uint8_t BitPad_0x3C_1 : 7; // 0x3C(0x1)
	uint8_t Pad_0x3D[0x3]; // 0x3D(0x3)
	struct FColor DrawColor; // 0x40(0x4)
	uint8_t Pad_0x44[0xC]; // 0x44(0xC)
};

// Object: ScriptStruct DFMVehicle.DFMVehicleCollisionInfo
// Size: 0x18 (Inherited: 0x0)
struct FDFMVehicleCollisionInfo
{
	struct AGPCharacterBase* HitCharacter; // 0x0(0x8)
	struct FVector HitOffset; // 0x8(0xC)
	uint8_t bStopCollision : 1; // 0x14(0x1), Mask(0x1)
	uint8_t BitPad_0x14_1 : 7; // 0x14(0x1)
	uint8_t Pad_0x15[0x3]; // 0x15(0x3)
};

// Object: ScriptStruct DFMVehicle.DirectionControllInfo
// Size: 0x10 (Inherited: 0x0)
struct FDirectionControllInfo
{
	struct TArray<struct FVector> Positions; // 0x0(0x10)
};

// Object: ScriptStruct DFMVehicle.VehiclePushWaterRippleEffectInfo
// Size: 0xC0 (Inherited: 0x0)
struct FVehiclePushWaterRippleEffectInfo
{
	struct FName RippleEffectName; // 0x0(0x8)
	struct FName ParameterName; // 0x8(0x8)
	struct FRuntimeFloatCurve ParameterValueCurve; // 0x10(0xA0)
	struct UDFMInteractiveWaterComponent* RippleEffect; // 0xB0(0x8)
	uint8_t Pad_0xB8[0x8]; // 0xB8(0x8)
};

// Object: ScriptStruct DFMVehicle.VehicleMovingEffectInfo
// Size: 0x80 (Inherited: 0x0)
struct FVehicleMovingEffectInfo
{
	struct UFXResourceContainerComponent* EffectComp; // 0x0(0x8)
	uint8_t Pad_0x8[0x78]; // 0x8(0x78)
};

// Object: ScriptStruct DFMVehicle.EffectArray
// Size: 0x20 (Inherited: 0x0)
struct FEffectArray
{
	uint8_t Pad_0x0[0x20]; // 0x0(0x20)
};

// Object: ScriptStruct DFMVehicle.VehicleParticleSystemHolder
// Size: 0x8 (Inherited: 0x0)
struct FVehicleParticleSystemHolder
{
	struct UParticleSystemComponent* Proxy; // 0x0(0x8)
};

// Object: ScriptStruct DFMVehicle.VehicleParticleHolder
// Size: 0x8 (Inherited: 0x0)
struct FVehicleParticleHolder
{
	struct UParticleSystem* Proxy; // 0x0(0x8)
};

// Object: ScriptStruct DFMVehicle.VehicleBlockGunSwayInfo
// Size: 0x14 (Inherited: 0x0)
struct FVehicleBlockGunSwayInfo
{
	float AngleThreshold; // 0x0(0x4)
	float VelocityThreshold; // 0x4(0x4)
	float NormalImpluseThreshold; // 0x8(0x4)
	float BlockGunSwayCDTime; // 0xC(0x4)
	uint8_t Pad_0x10[0x4]; // 0x10(0x4)
};

// Object: ScriptStruct DFMVehicle.VehicleBeHitCameraShakeInfo
// Size: 0x58 (Inherited: 0x0)
struct FVehicleBeHitCameraShakeInfo
{
	float DamageRatio; // 0x0(0x4)
	uint8_t Pad_0x4[0x4]; // 0x4(0x4)
	struct TSoftClassPtr<struct UCameraShake*> TPPBeHitCameraShake; // 0x8(0x28)
	struct TSoftClassPtr<struct UCameraShake*> FPPBeHitCameraShake; // 0x30(0x28)
};

// Object: ScriptStruct DFMVehicle.VehicleLaunchSkillProjectileInfo
// Size: 0x28 (Inherited: 0x0)
struct FVehicleLaunchSkillProjectileInfo
{
	uint64_t ProjectileGuid; // 0x0(0x8)
	struct FVector LaunchedLocation; // 0x8(0xC)
	struct FRotator LaunchedRotation; // 0x14(0xC)
	int32_t Type; // 0x20(0x4)
	uint8_t Pad_0x24[0x4]; // 0x24(0x4)
};

// Object: ScriptStruct DFMVehicle.VehicleDifferentialNWData
// Size: 0x10 (Inherited: 0x0)
struct FVehicleDifferentialNWData
{
	struct TArray<struct FDrivenWheelNWData> DrivenWheelData; // 0x0(0x10)
};

// Object: ScriptStruct DFMVehicle.DrivenWheelNWData
// Size: 0x8 (Inherited: 0x0)
struct FDrivenWheelNWData
{
	int32_t WheelIndex; // 0x0(0x4)
	uint8_t IsDrivenWheel : 1; // 0x4(0x1), Mask(0x1)
	uint8_t BitPad_0x4_1 : 7; // 0x4(0x1)
	uint8_t Pad_0x5[0x3]; // 0x5(0x3)
};

// Object: ScriptStruct DFMVehicle.CutsensePrepareData
// Size: 0x48 (Inherited: 0x0)
struct FCutsensePrepareData
{
	struct FVector StartLoc; // 0x0(0xC)
	struct FVector StartVel; // 0xC(0xC)
	struct FRotator StartRot; // 0x18(0xC)
	struct FVector EndLoc; // 0x24(0xC)
	struct FVector EndVel; // 0x30(0xC)
	struct FRotator EndRot; // 0x3C(0xC)
};

// Object: ScriptStruct DFMVehicle.DFMVehicleMusicManagerTickFunction
// Size: 0x68 (Inherited: 0x60)
struct FDFMVehicleMusicManagerTickFunction : FTickFunction
{
	uint8_t Pad_0x60[0x8]; // 0x60(0x8)
};

// Object: ScriptStruct DFMVehicle.DFMVhiclePathFollowMoveRequestParam
// Size: 0x10 (Inherited: 0x0)
struct FDFMVhiclePathFollowMoveRequestParam
{
	struct ADFMVehiclePathFollowPath* SplinePath; // 0x0(0x8)
	uint8_t bPlaceVehicleToStartPoint : 1; // 0x8(0x1), Mask(0x1)
	uint8_t BitPad_0x8_1 : 7; // 0x8(0x1)
	uint8_t bMoveInLoop : 1; // 0x9(0x1), Mask(0x1)
	uint8_t BitPad_0x9_1 : 7; // 0x9(0x1)
	uint8_t Pad_0xA[0x6]; // 0xA(0x6)
};

// Object: ScriptStruct DFMVehicle.DFMVehiclePathFollowWayPointData
// Size: 0x2C (Inherited: 0x0)
struct FDFMVehiclePathFollowWayPointData
{
	float DistanceAtPath; // 0x0(0x4)
	uint8_t bWhetherToPause : 1; // 0x4(0x1), Mask(0x1)
	uint8_t BitPad_0x4_1 : 7; // 0x4(0x1)
	uint8_t bAutoResumeWhenPause : 1; // 0x5(0x1), Mask(0x1)
	uint8_t BitPad_0x5_1 : 7; // 0x5(0x1)
	uint8_t Pad_0x6[0x2]; // 0x6(0x2)
	float WaitingDurationToResume; // 0x8(0x4)
	uint8_t bWhetherToLimitSpeed : 1; // 0xC(0x1), Mask(0x1)
	uint8_t BitPad_0xC_1 : 7; // 0xC(0x1)
	uint8_t Pad_0xD[0x3]; // 0xD(0x3)
	float MaxSpeed; // 0x10(0x4)
	float ArrivalDetectionRadius; // 0x14(0x4)
	uint8_t Pad_0x18[0x14]; // 0x18(0x14)
};

// Object: ScriptStruct DFMVehicle.VehicleMovePoint
// Size: 0x1C (Inherited: 0x0)
struct FVehicleMovePoint
{
	struct FVector Location; // 0x0(0xC)
	float Velocity; // 0xC(0x4)
	float AngleVelLerpOverride; // 0x10(0x4)
	float LinearVelLerpOverride; // 0x14(0x4)
	uint8_t ReverseThrottle : 1; // 0x18(0x1), Mask(0x1)
	uint8_t BitPad_0x18_1 : 7; // 0x18(0x1)
	uint8_t Pad_0x19[0x3]; // 0x19(0x3)
};

// Object: ScriptStruct DFMVehicle.DFMVehicleOvershootCheckData
// Size: 0x60 (Inherited: 0x0)
struct FDFMVehicleOvershootCheckData
{
	uint8_t bIsAuthoritativeInServer : 1; // 0x0(0x1), Mask(0x1)
	uint8_t BitPad_0x0_1 : 7; // 0x0(0x1)
	uint8_t Pad_0x1[0xF]; // 0x1(0xF)
	struct FRigidBodyState LastAuthoritativeStateInServer; // 0x10(0x40)
	uint8_t bIsOvershootChecked : 1; // 0x50(0x1), Mask(0x1)
	uint8_t BitPad_0x50_1 : 7; // 0x50(0x1)
	uint8_t Pad_0x51[0xF]; // 0x51(0xF)
};

// Object: ScriptStruct DFMVehicle.DFMVehicleObstacleCheckedResult
// Size: 0x94 (Inherited: 0x0)
struct FDFMVehicleObstacleCheckedResult
{
	struct FHitResult HitResult; // 0x0(0x88)
	uint8_t bIsOverlapMainCheckedBox : 1; // 0x88(0x1), Mask(0x1)
	uint8_t BitPad_0x88_1 : 7; // 0x88(0x1)
	uint8_t Pad_0x89[0x3]; // 0x89(0x3)
	int32_t OverlapCheckedBoxIndex; // 0x8C(0x4)
	uint8_t bIsOverlapTest : 1; // 0x90(0x1), Mask(0x1)
	uint8_t BitPad_0x90_1 : 7; // 0x90(0x1)
	uint8_t Pad_0x91[0x3]; // 0x91(0x3)
};

// Object: ScriptStruct DFMVehicle.DFMVehicleCollisionCheckedBox
// Size: 0x50 (Inherited: 0x0)
struct FDFMVehicleCollisionCheckedBox
{
	struct FTransform LocalTransform; // 0x0(0x30)
	struct FVector Extent; // 0x30(0xC)
	uint8_t bIsDraw : 1; // 0x3C(0x1), Mask(0x1)
	uint8_t BitPad_0x3C_1 : 7; // 0x3C(0x1)
	uint8_t Pad_0x3D[0x3]; // 0x3D(0x3)
	struct FColor DrawColor; // 0x40(0x4)
	uint8_t Pad_0x44[0xC]; // 0x44(0xC)
};

// Object: ScriptStruct DFMVehicle.DFMVehicleRigidBodyStateCheckedData
// Size: 0x10 (Inherited: 0x0)
struct FDFMVehicleRigidBodyStateCheckedData
{
	struct TArray<struct FDFMVehicleAccumulatedThreshold> AccumulatedThresholds; // 0x0(0x10)
};

// Object: ScriptStruct DFMVehicle.DFMVehicleAccumulatedThreshold
// Size: 0x8 (Inherited: 0x0)
struct FDFMVehicleAccumulatedThreshold
{
	float LinearThreshold; // 0x0(0x4)
	float AngularThreshold; // 0x4(0x4)
};

// Object: ScriptStruct DFMVehicle.DFMVehicleVelocityCheckedData
// Size: 0x14 (Inherited: 0x0)
struct FDFMVehicleVelocityCheckedData
{
	float AccumulatedAbnormalDistance; // 0x0(0x4)
	uint8_t bVelocityAbnormal : 1; // 0x4(0x1), Mask(0x1)
	uint8_t BitPad_0x4_1 : 7; // 0x4(0x1)
	uint8_t Pad_0x5[0x3]; // 0x5(0x3)
	struct FVector LastCheckedLinearVelocity; // 0x8(0xC)
};

// Object: ScriptStruct DFMVehicle.DFMVehicleTimeStampCheckedData
// Size: 0x30 (Inherited: 0x0)
struct FDFMVehicleTimeStampCheckedData
{
	uint8_t bIsControlled : 1; // 0x0(0x1), Mask(0x1)
	uint8_t BitPad_0x0_1 : 7; // 0x0(0x1)
	uint8_t Pad_0x1[0x3]; // 0x1(0x3)
	float CurrentClientTimeStamp; // 0x4(0x4)
	float PredictedClientTimeStamp; // 0x8(0x4)
	float ServerTimeStamp; // 0xC(0x4)
	float LastRecordedClientTimeStamp; // 0x10(0x4)
	float TimeDiscrepancy; // 0x14(0x4)
	uint8_t bResolvingTimeDiscrepancy : 1; // 0x18(0x1), Mask(0x1)
	uint8_t BitPad_0x18_1 : 7; // 0x18(0x1)
	uint8_t Pad_0x19[0x17]; // 0x19(0x17)
};

// Object: ScriptStruct DFMVehicle.DFMVehicleAutonomousFrameData
// Size: 0x60 (Inherited: 0x0)
struct FDFMVehicleAutonomousFrameData
{
	int32_t FrameID; // 0x0(0x4)
	float SampledDeltaSeconds; // 0x4(0x4)
	uint8_t Pad_0x8[0x8]; // 0x8(0x8)
	struct FRigidBodyState RigidBodyState; // 0x10(0x40)
	uint8_t CustomData; // 0x50(0x1)
	uint8_t Pad_0x51[0x3]; // 0x51(0x3)
	float Timestamp; // 0x54(0x4)
	uint8_t Pad_0x58[0x8]; // 0x58(0x8)
};

// Object: ScriptStruct DFMVehicle.DFMVehiclePhysicsAdjustedTarget
// Size: 0x70 (Inherited: 0x0)
struct FDFMVehiclePhysicsAdjustedTarget
{
	float ArrivedTimeSeconds; // 0x0(0x4)
	uint8_t Pad_0x4[0xC]; // 0x4(0xC)
	struct FRigidBodyState RigidBodyState; // 0x10(0x40)
	uint8_t Pad_0x50[0x20]; // 0x50(0x20)
};

// Object: ScriptStruct DFMVehicle.VehiclePlacementPreviewActorInitParameter
// Size: 0x48 (Inherited: 0x0)
struct FVehiclePlacementPreviewActorInitParameter
{
	struct ADFMVehicleBase* OwnerVehicle; // 0x0(0x8)
	struct AGPCharacter* UserCharacter; // 0x8(0x8)
	uint8_t Pad_0x10[0x38]; // 0x10(0x38)
};

// Object: ScriptStruct DFMVehicle.VehicleRebornBeaconParameter
// Size: 0x20 (Inherited: 0x0)
struct FVehicleRebornBeaconParameter
{
	struct FVector PreviewLocation; // 0x0(0xC)
	struct FRotator PreviewRotator; // 0xC(0xC)
	uint8_t bIsInValidPosition : 1; // 0x18(0x1), Mask(0x1)
	uint8_t BitPad_0x18_1 : 7; // 0x18(0x1)
	uint8_t Pad_0x19[0x3]; // 0x19(0x3)
	uint32_t PlaceTargetGUID; // 0x1C(0x4)
};

// Object: ScriptStruct DFMVehicle.DFMVehicleResourceDelegateInfo
// Size: 0x28 (Inherited: 0x0)
struct FDFMVehicleResourceDelegateInfo
{
	struct FSoftObjectPath ResourcePath; // 0x0(0x18)
	uint8_t Pad_0x18[0x10]; // 0x18(0x10)
};

// Object: ScriptStruct DFMVehicle.DFMVehicleLoadedResourceInfo
// Size: 0x30 (Inherited: 0x0)
struct FDFMVehicleLoadedResourceInfo
{
	struct FSoftObjectPath ResourcePath; // 0x0(0x18)
	struct UObject* ResourceObject; // 0x18(0x8)
	int32_t ReferenceCount; // 0x20(0x4)
	uint8_t Pad_0x24[0xC]; // 0x24(0xC)
};

// Object: ScriptStruct DFMVehicle.VehicleBoneSyncInfo
// Size: 0x18 (Inherited: 0x0)
struct FVehicleBoneSyncInfo
{
	struct FName ComponentName; // 0x0(0x8)
	struct FName BoneName; // 0x8(0x8)
	uint8_t Pad_0x10[0x8]; // 0x10(0x8)
};

// Object: ScriptStruct DFMVehicle.DFMVehicleSkillProjectileMovementParam
// Size: 0xC (Inherited: 0x0)
struct FDFMVehicleSkillProjectileMovementParam
{
	float MaxMovingDistance; // 0x0(0x4)
	float InitSpeed; // 0x4(0x4)
	float Gravity; // 0x8(0x4)
};

// Object: ScriptStruct DFMVehicle.VehicleCameraVelocityOffsetConfig
// Size: 0xA0 (Inherited: 0x0)
struct FVehicleCameraVelocityOffsetConfig
{
	struct FRuntimeFloatCurve OffsetCurve; // 0x0(0xA0)
};

// Object: ScriptStruct DFMVehicle.VehicleCameraSpringArmLengthConfig
// Size: 0x140 (Inherited: 0x0)
struct FVehicleCameraSpringArmLengthConfig
{
	struct FRuntimeFloatCurve OffsetCurve; // 0x0(0xA0)
	struct FRuntimeFloatCurve ScaleCurve; // 0xA0(0xA0)
};

// Object: ScriptStruct DFMVehicle.FixVehicleCameraRotationConfig
// Size: 0x64 (Inherited: 0x0)
struct FFixVehicleCameraRotationConfig
{
	uint8_t bShouldFixCameraRotation : 1; // 0x0(0x1), Mask(0x1)
	uint8_t BitPad_0x0_1 : 7; // 0x0(0x1)
	uint8_t Pad_0x1[0x3]; // 0x1(0x3)
	float FixedCameraRotationInterpSpeed; // 0x4(0x4)
	float InAirDuration; // 0x8(0x4)
	float LandingDuration; // 0xC(0x4)
	uint8_t bShouldFixCameraOffset : 1; // 0x10(0x1), Mask(0x1)
	uint8_t BitPad_0x10_1 : 7; // 0x10(0x1)
	uint8_t Pad_0x11[0x3]; // 0x11(0x3)
	struct FVector CameraRawOffset; // 0x14(0xC)
	float RawZRate; // 0x20(0x4)
	int32_t FixMode; // 0x24(0x4)
	uint8_t bShouldFixCameraRawOffsetXY : 1; // 0x28(0x1), Mask(0x1)
	uint8_t BitPad_0x28_1 : 7; // 0x28(0x1)
	uint8_t Pad_0x29[0x3B]; // 0x29(0x3B)
};

// Object: ScriptStruct DFMVehicle.TiltedVehicleCameraFollowConfig
// Size: 0x28 (Inherited: 0x0)
struct FTiltedVehicleCameraFollowConfig
{
	uint8_t bShouldCameraFollowTiltedVehicle : 1; // 0x0(0x1), Mask(0x1)
	uint8_t BitPad_0x0_1 : 7; // 0x0(0x1)
	uint8_t Pad_0x1[0x3]; // 0x1(0x3)
	float FollowSpeedWithInput; // 0x4(0x4)
	float InputDuration; // 0x8(0x4)
	float FollowSpeedWithoutInput; // 0xC(0x4)
	float FollowScaleInPitch; // 0x10(0x4)
	struct FVector2D TiltedPitchRange; // 0x14(0x8)
	float FollowScaleInRoll; // 0x1C(0x4)
	struct FVector2D TiltedRollRange; // 0x20(0x8)
};

// Object: ScriptStruct DFMVehicle.VehicleCameraSpring
// Size: 0x28 (Inherited: 0x0)
struct FVehicleCameraSpring
{
	uint8_t Pad_0x0[0x8]; // 0x0(0x8)
	float Radio; // 0x8(0x4)
	float SmoothTime; // 0xC(0x4)
	float DampingRadio; // 0x10(0x4)
	float RadioTarget; // 0x14(0x4)
	uint8_t Pad_0x18[0x10]; // 0x18(0x10)
};

// Object: ScriptStruct DFMVehicle.VehicleCameraSpringParameter
// Size: 0x8 (Inherited: 0x0)
struct FVehicleCameraSpringParameter
{
	float SmoothTime; // 0x0(0x4)
	float DampingRatio; // 0x4(0x4)
};

// Object: ScriptStruct DFMVehicle.VehicleSupplyInfoUI
// Size: 0x10 (Inherited: 0x0)
struct FVehicleSupplyInfoUI
{
	float SupplyEndTime; // 0x0(0x4)
	uint8_t Pad_0x4[0x4]; // 0x4(0x4)
	struct ADFMVehicleBase* Vehicle; // 0x8(0x8)
};

// Object: ScriptStruct DFMVehicle.VehicleSupplyInfo
// Size: 0xC (Inherited: 0x0)
struct FVehicleSupplyInfo
{
	uint8_t Pad_0x0[0xC]; // 0x0(0xC)
};

// Object: ScriptStruct DFMVehicle.VehicleWeaponResourceHandle
// Size: 0x20 (Inherited: 0x0)
struct FVehicleWeaponResourceHandle
{
	uint64_t Handle; // 0x0(0x8)
	struct FSoftObjectPath AssetPath; // 0x8(0x18)
};

// Object: ScriptStruct DFMVehicle.VehicleTypeMap
// Size: 0x30 (Inherited: 0x10)
struct FVehicleTypeMap : FDescRowBase
{
	struct ADFMWheeledVehicle* VehicleTemplateBP; // 0x10(0x8)
	struct FName VehicleName; // 0x18(0x8)
	struct FString VehicleDescription; // 0x20(0x10)
};

// Object: ScriptStruct DFMVehicle.AmphibiousVehicleSetting
// Size: 0xC (Inherited: 0x0)
struct FAmphibiousVehicleSetting
{
	uint8_t bChangeAngularDampingInWater : 1; // 0x0(0x1), Mask(0x1)
	uint8_t BitPad_0x0_1 : 7; // 0x0(0x1)
	uint8_t Pad_0x1[0x3]; // 0x1(0x3)
	float AngularDampingInWater; // 0x4(0x4)
	uint8_t Pad_0x8[0x4]; // 0x8(0x4)
};

// Object: ScriptStruct DFMVehicle.SuspensionConfig
// Size: 0x278 (Inherited: 0x0)
struct FSuspensionConfig
{
	int32_t SuspensionMode; // 0x0(0x4)
	float TireMaxCompression; // 0x4(0x4)
	float TireMaxElongated; // 0x8(0x4)
	float TireMass; // 0xC(0x4)
	float TireSpringStrength; // 0x10(0x4)
	float TireDampingRate; // 0x14(0x4)
	uint8_t bUseCSkySusp : 1; // 0x18(0x1), Mask(0x1)
	uint8_t BitPad_0x18_1 : 7; // 0x18(0x1)
	uint8_t Pad_0x19[0x3]; // 0x19(0x3)
	float CSkyMin; // 0x1C(0x4)
	float CSkyMax; // 0x20(0x4)
	float CSkyAlpha; // 0x24(0x4)
	uint8_t SuspensionDampCoilver : 1; // 0x28(0x1), Mask(0x1)
	uint8_t BitPad_0x28_1 : 7; // 0x28(0x1)
	uint8_t Pad_0x29[0x3]; // 0x29(0x3)
	float SuspensionDamp; // 0x2C(0x4)
	float SuspensionDampReBound; // 0x30(0x4)
	float SuspensionDampFast; // 0x34(0x4)
	float SuspensionDampReboundFast; // 0x38(0x4)
	float SuspensionDampVelocityFast; // 0x3C(0x4)
	float SuspensionDampScale; // 0x40(0x4)
	uint8_t SuspensionDampCoilverSpring : 1; // 0x44(0x1), Mask(0x1)
	uint8_t BitPad_0x44_1 : 7; // 0x44(0x1)
	uint8_t Pad_0x45[0x3]; // 0x45(0x3)
	float CompressL1Rate; // 0x48(0x4)
	float CompressL1Frequency; // 0x4C(0x4)
	float CompressL2Frequency; // 0x50(0x4)
	float ExpandL1Rate; // 0x54(0x4)
	float ExpandL1Frequency; // 0x58(0x4)
	float ExpandL2Frequency; // 0x5C(0x4)
	uint8_t SuspensionDampLimit : 1; // 0x60(0x1), Mask(0x1)
	uint8_t BitPad_0x60_1 : 7; // 0x60(0x1)
	uint8_t Pad_0x61[0x3]; // 0x61(0x3)
	float ShortBound; // 0x64(0x4)
	float LongBound; // 0x68(0x4)
	float SpringLimit; // 0x6C(0x4)
	float DampLimit; // 0x70(0x4)
	float AntiRollBarStiff; // 0x74(0x4)
	uint8_t AntiRollBarStiffSuite : 1; // 0x78(0x1), Mask(0x1)
	uint8_t BitPad_0x78_1 : 7; // 0x78(0x1)
	uint8_t Pad_0x79[0x7]; // 0x79(0x7)
	struct FRuntimeFloatCurve AntiRollBarLinearVStiff; // 0x80(0xA0)
	uint8_t AngleVInlocal : 1; // 0x120(0x1), Mask(0x1)
	uint8_t BitPad_0x120_1 : 7; // 0x120(0x1)
	uint8_t Pad_0x121[0x7]; // 0x121(0x7)
	struct FRuntimeFloatCurve AntiRollBarAngleVStiff; // 0x128(0xA0)
	uint8_t Pad_0x1C8[0x4]; // 0x1C8(0x4)
	float SuspLerpSpeedScale; // 0x1CC(0x4)
	uint8_t bSuspLerpCurveScale : 1; // 0x1D0(0x1), Mask(0x1)
	uint8_t BitPad_0x1D0_1 : 7; // 0x1D0(0x1)
	uint8_t Pad_0x1D1[0x7]; // 0x1D1(0x7)
	struct FRuntimeFloatCurve SuspLerpCurve; // 0x1D8(0xA0)
};

// Object: ScriptStruct DFMVehicle.WheelBodyRelativeVelocityInfo
// Size: 0x18 (Inherited: 0x0)
struct FWheelBodyRelativeVelocityInfo
{
	uint8_t Pad_0x0[0x18]; // 0x0(0x18)
};

// Object: ScriptStruct DFMVehicle.DFTransformAnimationEvaluteResult
// Size: 0x3 (Inherited: 0x0)
struct FDFTransformAnimationEvaluteResult
{
	EDFTransformAnimationAction Action; // 0x0(0x1)
	uint8_t bForceToSwitch : 1; // 0x1(0x1), Mask(0x1)
	uint8_t BitPad_0x1_1 : 7; // 0x1(0x1)
	uint8_t bPlayReverse : 1; // 0x2(0x1), Mask(0x1)
	uint8_t BitPad_0x2_1 : 7; // 0x2(0x1)
};

// Object: ScriptStruct DFMVehicle.LowSpeedAngularDampingConfig
// Size: 0x14 (Inherited: 0x0)
struct FLowSpeedAngularDampingConfig
{
	uint8_t bEnableLowSpeedAngularDamping : 1; // 0x0(0x1), Mask(0x1)
	uint8_t BitPad_0x0_1 : 7; // 0x0(0x1)
	uint8_t Pad_0x1[0x3]; // 0x1(0x3)
	float MaxVelocityThresholdKMPH; // 0x4(0x4)
	float AngularDampingValue; // 0x8(0x4)
	uint8_t Pad_0xC[0x8]; // 0xC(0x8)
};

// Object: ScriptStruct DFMVehicle.AvoidWheelVehicleFlyConfig
// Size: 0x30 (Inherited: 0x0)
struct FAvoidWheelVehicleFlyConfig
{
	uint8_t bEnableAvoidWheelVehicleFly : 1; // 0x0(0x1), Mask(0x1)
	uint8_t BitPad_0x0_1 : 7; // 0x0(0x1)
	uint8_t Pad_0x1[0x3]; // 0x1(0x3)
	float ZAccelerationThreshold; // 0x4(0x4)
	float ZVelocityThreshold; // 0x8(0x4)
	float ExitZVelocityThreshold; // 0xC(0x4)
	float SeparationThreshold; // 0x10(0x4)
	float LinearDamping; // 0x14(0x4)
	float TimeThresholdAfterCollison; // 0x18(0x4)
	uint8_t Pad_0x1C[0x14]; // 0x1C(0x14)
};

// Object: ScriptStruct DFMVehicle.AssistParkingConfig
// Size: 0x20 (Inherited: 0x0)
struct FAssistParkingConfig
{
	uint8_t bEnableAssistParking : 1; // 0x0(0x1), Mask(0x1)
	uint8_t BitPad_0x0_1 : 7; // 0x0(0x1)
	uint8_t Pad_0x1[0x3]; // 0x1(0x3)
	float AssistParkingThresholdKMPH; // 0x4(0x4)
	float AssistParkingRollAngleThreshold; // 0x8(0x4)
	float LinearDamping; // 0xC(0x4)
	float AssistParkingTimerThreshold; // 0x10(0x4)
	uint8_t Pad_0x14[0xC]; // 0x14(0xC)
};

// Object: ScriptStruct DFMVehicle.IncreaseGravityConfig
// Size: 0x30 (Inherited: 0x0)
struct FIncreaseGravityConfig
{
	uint8_t bIncreaseGravity : 1; // 0x0(0x1), Mask(0x1)
	uint8_t BitPad_0x0_1 : 7; // 0x0(0x1)
	uint8_t Pad_0x1[0x3]; // 0x1(0x3)
	float IncreasedGravityScale; // 0x4(0x4)
	float DownIncreasedGravityScale; // 0x8(0x4)
	uint8_t Pad_0xC[0x24]; // 0xC(0x24)
};

// Object: ScriptStruct DFMVehicle.DynamicTireFrictionConfig
// Size: 0x150 (Inherited: 0x0)
struct FDynamicTireFrictionConfig
{
	uint8_t bDynamicTireFriction : 1; // 0x0(0x1), Mask(0x1)
	uint8_t BitPad_0x0_1 : 7; // 0x0(0x1)
	uint8_t Pad_0x1[0x7]; // 0x1(0x7)
	struct FRuntimeFloatCurve TireForceFrictionScaleInPitchCurve; // 0x8(0xA0)
	struct FRuntimeFloatCurve TireForceFrictionScaleInRollCurve; // 0xA8(0xA0)
	uint8_t bOnlyRestrictGoingUp : 1; // 0x148(0x1), Mask(0x1)
	uint8_t BitPad_0x148_1 : 7; // 0x148(0x1)
	uint8_t Pad_0x149[0x7]; // 0x149(0x7)
};

// Object: ScriptStruct DFMVehicle.StickToGroundConfig
// Size: 0x48 (Inherited: 0x0)
struct FStickToGroundConfig
{
	uint8_t bEnableStickToGround : 1; // 0x0(0x1), Mask(0x1)
	uint8_t BitPad_0x0_1 : 7; // 0x0(0x1)
	uint8_t Pad_0x1[0x3]; // 0x1(0x3)
	float StickToGroundRiseStrength; // 0x4(0x4)
	float StickToGroundFallStrength; // 0x8(0x4)
	float StickToGroundHigh; // 0xC(0x4)
	float StickToGroundHighScale; // 0x10(0x4)
	float MaxVelocityToStickToGroundWhenRollover; // 0x14(0x4)
	float StickToGroundRolloverTorqueCoef; // 0x18(0x4)
	float ScaleTorqueOverTimeStartUpTime; // 0x1C(0x4)
	float ScaleTorqueOverTimeCoef; // 0x20(0x4)
	float ScaleTorqueOverOffsetTimeLimit; // 0x24(0x4)
	uint8_t Pad_0x28[0x20]; // 0x28(0x20)
};

// Object: ScriptStruct DFMVehicle.VirtualTireForceConfig
// Size: 0x120 (Inherited: 0x0)
struct FVirtualTireForceConfig
{
	uint8_t bShouldApplyVirtualTireForce : 1; // 0x0(0x1), Mask(0x1)
	uint8_t BitPad_0x0_1 : 7; // 0x0(0x1)
	uint8_t Pad_0x1[0x3]; // 0x1(0x3)
	float MaxRollToApplyVirtualTireForce; // 0x4(0x4)
	float MaxPitchToApplyVirtualTireForce; // 0x8(0x4)
	float MaxVelocityThresholdToApplyVirtualTireForce; // 0xC(0x4)
	float StuckVelocitySize; // 0x10(0x4)
	float StuckDuration; // 0x14(0x4)
	struct FRuntimeFloatCurve VirtualTireForceScaleCurve; // 0x18(0xA0)
	struct TSet<int32_t> WheelsIndexBlackList; // 0xB8(0x50)
	uint8_t Pad_0x108[0x18]; // 0x108(0x18)
};

// Object: ScriptStruct DFMVehicle.ContactFrictionConfig
// Size: 0x150 (Inherited: 0x0)
struct FContactFrictionConfig
{
	uint8_t bShouldModifyContactFriction : 1; // 0x0(0x1), Mask(0x1)
	uint8_t BitPad_0x0_1 : 7; // 0x0(0x1)
	uint8_t Pad_0x1[0x7]; // 0x1(0x7)
	struct FRuntimeFloatCurve StaticFrictionCurveWhenRollover; // 0x8(0xA0)
	struct FRuntimeFloatCurve DynamicFrictionCurveWhenRollover; // 0xA8(0xA0)
	float StaticFrictionWithoutRollover; // 0x148(0x4)
	float DynamicFrictionWithoutRollover; // 0x14C(0x4)
};

// Object: ScriptStruct DFMVehicle.ForceDebugInfo
// Size: 0x20 (Inherited: 0x0)
struct FForceDebugInfo
{
	struct FVector RebasedStart; // 0x0(0xC)
	struct FVector RebasedEnd; // 0xC(0xC)
	float size; // 0x18(0x4)
	struct FColor DrawedColor; // 0x1C(0x4)
};

// Object: ScriptStruct DFMVehicle.ContactRestitutionConfig
// Size: 0x8 (Inherited: 0x0)
struct FContactRestitutionConfig
{
	uint8_t bShouldModifyContactRestitution : 1; // 0x0(0x1), Mask(0x1)
	uint8_t BitPad_0x0_1 : 7; // 0x0(0x1)
	uint8_t Pad_0x1[0x3]; // 0x1(0x3)
	float ContactRestitution; // 0x4(0x4)
};

// Object: ScriptStruct DFMVehicle.FallingBalanceConfig
// Size: 0x28 (Inherited: 0x0)
struct FFallingBalanceConfig
{
	uint8_t bShouldEnableFaliingBalance : 1; // 0x0(0x1), Mask(0x1)
	uint8_t BitPad_0x0_1 : 7; // 0x0(0x1)
	uint8_t Pad_0x1[0x3]; // 0x1(0x3)
	float MinFallingLinearVelocity; // 0x4(0x4)
	float FallingBalanceAngularDamping; // 0x8(0x4)
	float AngluarDampingIncreasedSpeed; // 0xC(0x4)
	uint8_t bShouldEnableMaxAngluarSpeed : 1; // 0x10(0x1), Mask(0x1)
	uint8_t BitPad_0x10_1 : 7; // 0x10(0x1)
	uint8_t Pad_0x11[0x3]; // 0x11(0x3)
	float FallingMaxAngluarSpeed; // 0x14(0x4)
	float MaxAngluarSpeed; // 0x18(0x4)
	uint8_t Pad_0x1C[0xC]; // 0x1C(0xC)
};

// Object: ScriptStruct DFMVehicle.VehicleDynamicMeshCheckCollisionSetting
// Size: 0xC (Inherited: 0x0)
struct FVehicleDynamicMeshCheckCollisionSetting
{
	float RotatedAngleInterval; // 0x0(0x4)
	int32_t MinCheckedCount; // 0x4(0x4)
	int32_t MaxCheckedCount; // 0x8(0x4)
};

// Object: ScriptStruct DFMVehicle.VehicleDynamicMeshCheckedBox
// Size: 0x50 (Inherited: 0x0)
struct FVehicleDynamicMeshCheckedBox
{
	struct FTransform LocalTransform; // 0x0(0x30)
	struct FVector Extent; // 0x30(0xC)
	uint8_t bIsDraw : 1; // 0x3C(0x1), Mask(0x1)
	uint8_t BitPad_0x3C_1 : 7; // 0x3C(0x1)
	uint8_t Pad_0x3D[0x3]; // 0x3D(0x3)
	struct FColor DrawColor; // 0x40(0x4)
	uint8_t Pad_0x44[0xC]; // 0x44(0xC)
};

// Object: ScriptStruct DFMVehicle.RaidVehicleDramaInfo
// Size: 0x70 (Inherited: 0x0)
struct FRaidVehicleDramaInfo
{
	uint8_t bEnable : 1; // 0x0(0x1), Mask(0x1)
	uint8_t BitPad_0x0_1 : 7; // 0x0(0x1)
	uint8_t Pad_0x1[0x3]; // 0x1(0x3)
	float VehicleMaxHealth; // 0x4(0x4)
	float OverrideExplodeDamage; // 0x8(0x4)
	uint8_t Pad_0xC[0x4]; // 0xC(0x4)
	struct TMap<struct FName, struct FName> OverridePassengerMap; // 0x10(0x50)
	struct TArray<struct FRaidVehiclePathWeight> VehiclePaths; // 0x60(0x10)
};

// Object: ScriptStruct DFMVehicle.RaidVehiclePathWeight
// Size: 0x10 (Inherited: 0x0)
struct FRaidVehiclePathWeight
{
	struct AAIPatrolPath* Path; // 0x0(0x8)
	float Weight; // 0x8(0x4)
	uint8_t Pad_0xC[0x4]; // 0xC(0x4)
};

// Object: ScriptStruct DFMVehicle.VehicleLaserPointerLockersInfo
// Size: 0xC (Inherited: 0x0)
struct FVehicleLaserPointerLockersInfo
{
	struct TWeakObjectPtr<struct AGPCharacter> LockerPtr; // 0x0(0x8)
	ELockerSubType SubType; // 0x8(0x1)
	uint8_t Pad_0x9[0x3]; // 0x9(0x3)
};

// Object: ScriptStruct DFMVehicle.VehicleLockInfo
// Size: 0x38 (Inherited: 0x0)
struct FVehicleLockInfo
{
	int32_t CampId; // 0x0(0x4)
	int32_t ArrayIndex; // 0x4(0x4)
	EStingerMissileLockingState LaserPointerLockingState; // 0x8(0x1)
	uint8_t LaserPointerLockingStateInt; // 0x9(0x1)
	uint8_t Pad_0xA[0x2]; // 0xA(0x2)
	float LockValueIncreaseSpeed; // 0xC(0x4)
	float LockValueDecreaseSpeed; // 0x10(0x4)
	float LockValuePersistentTime; // 0x14(0x4)
	float PersistentTimeCounter; // 0x18(0x4)
	float LockingValue; // 0x1C(0x4)
	ELockerSubType LockerSubType; // 0x20(0x1)
	uint8_t Pad_0x21[0x3]; // 0x21(0x3)
	struct TWeakObjectPtr<struct AActor> LastLocker; // 0x24(0x8)
	uint8_t Pad_0x2C[0x4]; // 0x2C(0x4)
	float DebugStartLockTime; // 0x30(0x4)
	uint8_t Pad_0x34[0x4]; // 0x34(0x4)
};

// Object: ScriptStruct DFMVehicle.VehicleLockInfoWithSubType
// Size: 0x40 (Inherited: 0x0)
struct FVehicleLockInfoWithSubType
{
	int32_t CampId; // 0x0(0x4)
	ELockerSubType SubType; // 0x4(0x1)
	uint8_t Pad_0x5[0x3]; // 0x5(0x3)
	struct FVehicleLockInfo VehicleLockInfoWithSubType; // 0x8(0x38)
};

// Object: ScriptStruct DFMVehicle.VehiclePointerInfo
// Size: 0x14 (Inherited: 0x0)
struct FVehiclePointerInfo
{
	float IncreaseSpeed; // 0x0(0x4)
	float DecreaseSpeed; // 0x4(0x4)
	float PersistentTime; // 0x8(0x4)
	float DisconnectTimeCounter; // 0xC(0x4)
	ELockerSubType LockerSubType; // 0x10(0x1)
	uint8_t Pad_0x11[0x3]; // 0x11(0x3)
};

// Object: ScriptStruct DFMVehicle.DFMTrainDoorConfig
// Size: 0x8 (Inherited: 0x0)
struct FDFMTrainDoorConfig
{
	EDFMTrainDoorIndex DoorIndex; // 0x0(0x1)
	EDFMTrainDoorState DoorState; // 0x1(0x1)
	uint8_t UpdateWhenArrive : 1; // 0x2(0x1), Mask(0x1)
	uint8_t BitPad_0x2_1 : 7; // 0x2(0x1)
	uint8_t Pad_0x3[0x1]; // 0x3(0x1)
	float DoorLocAlpha; // 0x4(0x4)
};

// Object: ScriptStruct DFMVehicle.VehicleyDramaDifficultInfo
// Size: 0x70 (Inherited: 0x0)
struct FVehicleyDramaDifficultInfo
{
	uint8_t bEnable : 1; // 0x0(0x1), Mask(0x1)
	uint8_t BitPad_0x0_1 : 7; // 0x0(0x1)
	uint8_t Pad_0x1[0x3]; // 0x1(0x3)
	float VehicleMaxHealth; // 0x4(0x4)
	float OverrideExplodeDamage; // 0x8(0x4)
	uint8_t Pad_0xC[0x4]; // 0xC(0x4)
	struct TMap<struct FName, struct FName> OverridePassengerMap; // 0x10(0x50)
	struct TArray<struct FVehiclePathInfo> VehiclePaths; // 0x60(0x10)
};

// Object: ScriptStruct DFMVehicle.VehiclePathInfo
// Size: 0x10 (Inherited: 0x0)
struct FVehiclePathInfo
{
	struct AGPSplinePath* Path; // 0x0(0x8)
	float Weight; // 0x8(0x4)
	uint8_t Pad_0xC[0x4]; // 0xC(0x4)
};

// Object: ScriptStruct DFMVehicle.DFMVehicleWeaponHitPosPredictConfigRow
// Size: 0x20 (Inherited: 0x10)
struct FDFMVehicleWeaponHitPosPredictConfigRow : FDescRowBase
{
	uint64_t ConfigId; // 0x10(0x8)
	float SimFrequency; // 0x18(0x4)
	float MaxPredictTime; // 0x1C(0x4)
};

// Object: ScriptStruct DFMVehicle.DFMVehiclePosPredictConfigContainer
// Size: 0x8 (Inherited: 0x0)
struct FDFMVehiclePosPredictConfigContainer
{
	float TargetVelThreshold; // 0x0(0x4)
	float TargetDistanceThreshold; // 0x4(0x4)
};

// Object: ScriptStruct DFMVehicle.DFMVehiclePosPredictConfigRow
// Size: 0x70 (Inherited: 0x10)
struct FDFMVehiclePosPredictConfigRow : FDescRowBase
{
	uint64_t ConfigId; // 0x10(0x8)
	float TargetVelThreshold; // 0x18(0x4)
	uint8_t Pad_0x1C[0x4]; // 0x1C(0x4)
	struct TMap<EVehicleAssistAimConfigGroup, struct FDFMVehiclePosPredictConfigContainer> ConfigContainer; // 0x20(0x50)
};

// Object: ScriptStruct DFMVehicle.DFMVehicleAssistAimConfigContainer
// Size: 0x490 (Inherited: 0x0)
struct FDFMVehicleAssistAimConfigContainer
{
	struct FRuntimeFloatCurve DistanceScreenRatioScaleCurve_MovingAway; // 0x0(0xA0)
	struct FRuntimeFloatCurve DistanceScreenRatioScaleCurve_MovingClose; // 0xA0(0xA0)
	float ValidDistance; // 0x140(0x4)
	float AntiAssistAimRate; // 0x144(0x4)
	struct FRuntimeFloatCurve AnitAssistAimScreenRatioCurve; // 0x148(0xA0)
	int32_t TargetPointMode; // 0x1E8(0x4)
	uint8_t Pad_0x1EC[0x4]; // 0x1EC(0x4)
	struct FRuntimeFloatCurve HelicopterAssistAimScaleCurve; // 0x1F0(0xA0)
	float FPPAssistAimAngularVelocityCheckDuration; // 0x290(0x4)
	float FPPAssistAimAngularVelocityThreshold; // 0x294(0x4)
	float FPPAssistAimBlendOutDuration; // 0x298(0x4)
	uint8_t Pad_0x29C[0x4]; // 0x29C(0x4)
	struct FRuntimeFloatCurve AssistAimScaleCurve; // 0x2A0(0xA0)
	struct FRuntimeFloatCurve AssistAimScaleCurveForSuspension; // 0x340(0xA0)
	struct FRuntimeFloatCurve AssistAimScaleCurveForControlJetAxis; // 0x3E0(0xA0)
	float JetFPPAssistAimBlendOutDuration; // 0x480(0x4)
	float JetFPPAssistAimAngularVelocityCheckDuration; // 0x484(0x4)
	float JetFPPAssistAimAngularVelocityThreshold; // 0x488(0x4)
	uint8_t Pad_0x48C[0x4]; // 0x48C(0x4)
};

// Object: ScriptStruct DFMVehicle.DFMVehicleAssistAimConfigRow
// Size: 0x68 (Inherited: 0x10)
struct FDFMVehicleAssistAimConfigRow : FDescRowBase
{
	uint64_t ConfigId; // 0x10(0x8)
	struct TMap<EVehicleAssistAimConfigGroup, struct FDFMVehicleAssistAimConfigContainer> ConfigContainer; // 0x18(0x50)
};

// Object: ScriptStruct DFMVehicle.VehicleAssistAimSystemPrePhysicsTickFunction
// Size: 0x68 (Inherited: 0x60)
struct FVehicleAssistAimSystemPrePhysicsTickFunction : FTickFunction
{
	uint8_t Pad_0x60[0x8]; // 0x60(0x8)
};

// Object: ScriptStruct DFMVehicle.VehicleAssistAimSystemPostUpdateWorkTickFunction
// Size: 0x68 (Inherited: 0x60)
struct FVehicleAssistAimSystemPostUpdateWorkTickFunction : FTickFunction
{
	uint8_t Pad_0x60[0x8]; // 0x60(0x8)
};

// Object: ScriptStruct DFMVehicle.VehicleAsyncResourceInfo
// Size: 0x48 (Inherited: 0x0)
struct FVehicleAsyncResourceInfo
{
	struct FName SocketName; // 0x0(0x8)
	struct FSoftObjectPath AssetPath; // 0x8(0x18)
	struct TSoftClassPtr<struct UObject*> AssetClassPath; // 0x20(0x28)
};

// Object: ScriptStruct DFMVehicle.VehicleBeHitImpluseConfigRow
// Size: 0x70 (Inherited: 0x10)
struct FVehicleBeHitImpluseConfigRow : FDescRowBase
{
	uint64_t WeaponID; // 0x10(0x8)
	float CommonImpluseItensity; // 0x18(0x4)
	uint8_t Pad_0x1C[0x4]; // 0x1C(0x4)
	struct TMap<int32_t, float> ImpluseItensitySpecifyVehicleMap; // 0x20(0x50)
};

// Object: ScriptStruct DFMVehicle.DFMVehicleConsoleVariableQualityData
// Size: 0x30 (Inherited: 0x0)
struct FDFMVehicleConsoleVariableQualityData
{
	struct TArray<struct FDFMVehicleConsoleVariableQualityDataItem> QualityDataItems; // 0x0(0x10)
	struct TArray<struct FString> QualityCommandsGetOn; // 0x10(0x10)
	struct TArray<struct FString> QualityCommandsGetOff; // 0x20(0x10)
};

// Object: ScriptStruct DFMVehicle.DFMVehicleConsoleVariablePlatformData
// Size: 0xD0 (Inherited: 0x0)
struct FDFMVehicleConsoleVariablePlatformData
{
	struct TMap<int32_t, struct FDFMVehicleConsoleVariableQualityData> QualityData; // 0x0(0x50)
	struct FDFMVehicleConsoleVariableQualityData NonQualityData; // 0x50(0x30)
	struct TMap<struct FString, struct FDFMVehicleConsoleVariableQualityData> DataForMap; // 0x80(0x50)
};

// Object: ScriptStruct DFMVehicle.DFMVehicleConsoleVariableDataTableRow
// Size: 0x1B8 (Inherited: 0x10)
struct FDFMVehicleConsoleVariableDataTableRow : FDescRowBase
{
	EDFMVehicleClassType VehicleType; // 0x10(0x1)
	uint8_t Pad_0x11[0x7]; // 0x11(0x7)
	struct FDFMVehicleConsoleVariablePlatformData PCData; // 0x18(0xD0)
	struct FDFMVehicleConsoleVariablePlatformData MobileData; // 0xE8(0xD0)
};

// Object: ScriptStruct DFMVehicle.DFMVehicleConsoleVariableQualityDataItem
// Size: 0x18 (Inherited: 0x0)
struct FDFMVehicleConsoleVariableQualityDataItem
{
	struct FString ConsoleVariableName; // 0x0(0x10)
	float ConsoleVariableValue; // 0x10(0x4)
	uint8_t Pad_0x14[0x4]; // 0x14(0x4)
};

// Object: ScriptStruct DFMVehicle.VehicleModelSkinAppearanceDesc
// Size: 0x60 (Inherited: 0x0)
struct FVehicleModelSkinAppearanceDesc
{
	struct TArray<struct FVehicleSkinMaterialDesc> SkinMaterialsConfig; // 0x0(0x10)
	struct FSoftObjectPath ReplaceModelPath; // 0x10(0x18)
	struct TArray<struct FVehicleSkinAdditionAttachModelDesc> AdditionalAttachModels; // 0x28(0x10)
	struct TArray<struct FVehicleSkinPendantDesc> PendantConfig; // 0x38(0x10)
	uint8_t bHideMesh : 1; // 0x48(0x1), Mask(0x1)
	uint8_t BitPad_0x48_1 : 7; // 0x48(0x1)
	uint8_t Pad_0x49[0x7]; // 0x49(0x7)
	struct TArray<struct FVehicleSkinMaterialDesc> EffectMeshSkinMaterialsConfig; // 0x50(0x10)
};

// Object: ScriptStruct DFMVehicle.VehicleSkinAppearanceRow
// Size: 0x130 (Inherited: 0x10)
struct FVehicleSkinAppearanceRow : FDescRowBase
{
	int64_t ID; // 0x10(0x8)
	uint8_t IsReplaceAllTextures : 1; // 0x18(0x1), Mask(0x1)
	uint8_t BitPad_0x18_1 : 7; // 0x18(0x1)
	uint8_t Pad_0x19[0x7]; // 0x19(0x7)
	struct TArray<struct FVehicleSkinSocketInfo> WheelSkinSocketInfos; // 0x20(0x10)
	struct TArray<struct FVehicleWeaponSkinInfo> WeaponSkinIds; // 0x30(0x10)
	struct TMap<struct FSoftObjectPath, struct FVehicleModelSkinAppearanceDesc> ModelSkinAppearanceConfig; // 0x40(0x50)
	struct TMap<struct FSoftObjectPath, struct FVehicleModelSkinAppearanceDesc> ModelSkinAppearanceConfig_OutGame; // 0x90(0x50)
	struct TMap<struct FSoftObjectPath, struct FSoftObjectPath> BrokenModelConfig; // 0xE0(0x50)
};

// Object: ScriptStruct DFMVehicle.VehicleSkinMaterialDesc
// Size: 0x30 (Inherited: 0x0)
struct FVehicleSkinMaterialDesc
{
	int32_t MaterialIndex; // 0x0(0x4)
	uint8_t Pad_0x4[0x4]; // 0x4(0x4)
	struct TSoftObjectPtr<UMaterialInterface> SkinMaterial; // 0x8(0x28)
};

// Object: ScriptStruct DFMVehicle.VehicleSkinPendantDesc
// Size: 0xA0 (Inherited: 0x0)
struct FVehicleSkinPendantDesc
{
	struct TSoftObjectPtr<USkeletalMesh> Mesh; // 0x0(0x28)
	struct TSoftClassPtr<struct UAnimInstance*> AnimInstance; // 0x28(0x28)
	struct FName SocketName; // 0x50(0x8)
	uint8_t Pad_0x58[0x8]; // 0x58(0x8)
	struct FTransform TransformOffset; // 0x60(0x30)
	float CullDistance; // 0x90(0x4)
	uint8_t Pad_0x94[0xC]; // 0x94(0xC)
};

// Object: ScriptStruct DFMVehicle.VehicleSkinAdditionAttachModelDesc
// Size: 0x60 (Inherited: 0x0)
struct FVehicleSkinAdditionAttachModelDesc
{
	struct TSoftObjectPtr<UStaticMesh> Model; // 0x0(0x28)
	uint8_t Pad_0x28[0x8]; // 0x28(0x8)
	struct FTransform TransformOffset; // 0x30(0x30)
};

// Object: ScriptStruct DFMVehicle.VehicleWeaponSkinInfo
// Size: 0x10 (Inherited: 0x0)
struct FVehicleWeaponSkinInfo
{
	uint64_t WeaponID; // 0x0(0x8)
	uint64_t SkinId; // 0x8(0x8)
};

// Object: ScriptStruct DFMVehicle.VehicleSkinSocketInfo
// Size: 0x40 (Inherited: 0x0)
struct FVehicleSkinSocketInfo
{
	struct FName SocketName; // 0x0(0x8)
	struct FName SocketNameMobile; // 0x8(0x8)
	int32_t MaterialIndex; // 0x10(0x4)
	uint8_t Pad_0x14[0x4]; // 0x14(0x4)
	struct TSoftObjectPtr<UMaterialInterface> SkinMaterial; // 0x18(0x28)
};

// Object: ScriptStruct DFMVehicle.VehicleUISkinItemDesc
// Size: 0x38 (Inherited: 0x0)
struct FVehicleUISkinItemDesc
{
	uint64_t VehiclePartItemID; // 0x0(0x8)
	int32_t MaterialIndex; // 0x8(0x4)
	uint8_t Pad_0xC[0x4]; // 0xC(0x4)
	struct TSoftObjectPtr<UMaterialInterface> SkinMaterial; // 0x10(0x28)
};

// Object: ScriptStruct DFMVehicle.VehiclePhysicalEffectInfo
// Size: 0x8 (Inherited: 0x0)
struct FVehiclePhysicalEffectInfo
{
	struct FName EffectId; // 0x0(0x8)
};

// Object: ScriptStruct DFMVehicle.DFMVehiclePhysicalEffectDataRow
// Size: 0x68 (Inherited: 0x10)
struct FDFMVehiclePhysicalEffectDataRow : FDescRowBase
{
	struct FName EffectId; // 0x10(0x8)
	struct TMap<EPhysicalSurface, struct FVehiclePhysicalEffectInfo> PhysicalEffectMap; // 0x18(0x50)
};

// Object: ScriptStruct DFMVehicle.DFMVehiclePhysicsReplicationDataTableRow
// Size: 0x38 (Inherited: 0x10)
struct FDFMVehiclePhysicsReplicationDataTableRow : FDescRowBase
{
	int32_t VehicleId; // 0x10(0x4)
	float MaxValidVelocitySize; // 0x14(0x4)
	float MaxProjectedVelocitySize; // 0x18(0x4)
	float MaxAbnormalDistance; // 0x1C(0x4)
	float AbnormalDistanceEliminatedScale; // 0x20(0x4)
	float VelocityPenaltyScale; // 0x24(0x4)
	float MaxAccelerationInKmh; // 0x28(0x4)
	uint8_t bCanFly : 1; // 0x2C(0x1), Mask(0x1)
	uint8_t BitPad_0x2C_1 : 7; // 0x2C(0x1)
	uint8_t Pad_0x2D[0x3]; // 0x2D(0x3)
	float MaxSimulatedHardSnapLinearError; // 0x30(0x4)
	float MaxSimulatedHardSnapAngularError; // 0x34(0x4)
};

// Object: ScriptStruct DFMVehicle.DFMVehicleInteractorDataTableRow
// Size: 0x18 (Inherited: 0x10)
struct FDFMVehicleInteractorDataTableRow : FDescRowBase
{
	int32_t VehicleId; // 0x10(0x4)
	uint8_t bKickAllPassengersAfterEnteringWater : 1; // 0x14(0x1), Mask(0x1)
	uint8_t BitPad_0x14_1 : 7; // 0x14(0x1)
	uint8_t bDisableInteractorAfterEnteringWater : 1; // 0x15(0x1), Mask(0x1)
	uint8_t BitPad_0x15_1 : 7; // 0x15(0x1)
	uint8_t Pad_0x16[0x2]; // 0x16(0x2)
};

// Object: ScriptStruct DFMVehicle.DFMVehicleWaterInteractionDataTableRow
// Size: 0xC0 (Inherited: 0x10)
struct FDFMVehicleWaterInteractionDataTableRow : FDescRowBase
{
	int32_t VehicleId; // 0x10(0x4)
	struct FName RippleEffectID; // 0x14(0x8)
	uint8_t Pad_0x1C[0x4]; // 0x1C(0x4)
	struct FTransform RippleRelativeTransform; // 0x20(0x30)
	struct TSoftClassPtr<struct AActor*> MaskClass; // 0x50(0x28)
	uint8_t Pad_0x78[0x8]; // 0x78(0x8)
	struct FTransform MaskRelativeTransform; // 0x80(0x30)
	struct FVector RippleLocalPosition; // 0xB0(0xC)
	uint8_t Pad_0xBC[0x4]; // 0xBC(0x4)
};

// Object: ScriptStruct DFMVehicle.WheeledVehicleDataTableRow
// Size: 0xB8 (Inherited: 0x10)
struct FWheeledVehicleDataTableRow : FDescRowBase
{
	int32_t VehicleId; // 0x10(0x4)
	uint8_t bReverseAsBrake : 1; // 0x14(0x1), Mask(0x1)
	uint8_t bUseRVOAvoidance : 1; // 0x14(0x1), Mask(0x2)
	uint8_t BitPad_0x14_2 : 6; // 0x14(0x1)
	uint8_t Pad_0x15[0x3]; // 0x15(0x3)
	float Mass; // 0x18(0x4)
	uint8_t Pad_0x1C[0x4]; // 0x1C(0x4)
	struct TArray<struct FWheelSetup> WheelSetups; // 0x20(0x10)
	float DragCoefficient; // 0x30(0x4)
	float ChassisWidth; // 0x34(0x4)
	float ChassisHeight; // 0x38(0x4)
	struct FVector InertiaTensorScale; // 0x3C(0xC)
	float MinNormalizedTireLoad; // 0x48(0x4)
	float MinNormalizedTireLoadFiltered; // 0x4C(0x4)
	float MaxNormalizedTireLoad; // 0x50(0x4)
	float MaxNormalizedTireLoadFiltered; // 0x54(0x4)
	float ThresholdLongitudinalSpeed; // 0x58(0x4)
	int32_t LowForwardSpeedSubStepCount; // 0x5C(0x4)
	int32_t HighForwardSpeedSubStepCount; // 0x60(0x4)
	float RVOAvoidanceRadius; // 0x64(0x4)
	float RVOAvoidanceHeight; // 0x68(0x4)
	float AvoidanceConsiderationRadius; // 0x6C(0x4)
	float RVOSteeringStep; // 0x70(0x4)
	float RVOThrottleStep; // 0x74(0x4)
	int32_t AvoidanceUID; // 0x78(0x4)
	struct FNavAvoidanceMask AvoidanceGroup; // 0x7C(0x4)
	struct FNavAvoidanceMask GroupsToAvoid; // 0x80(0x4)
	struct FNavAvoidanceMask GroupsToIgnore; // 0x84(0x4)
	float AvoidanceWeight; // 0x88(0x4)
	float IdleBrakeInput; // 0x8C(0x4)
	float StopThreshold; // 0x90(0x4)
	float WrongDirectionThreshold; // 0x94(0x4)
	struct FVehicleInputRate ThrottleInputRate; // 0x98(0x8)
	struct FVehicleInputRate BrakeInputRate; // 0xA0(0x8)
	struct FVehicleInputRate HandbrakeInputRate; // 0xA8(0x8)
	struct FVehicleInputRate SteeringInputRate; // 0xB0(0x8)
};

// Object: ScriptStruct DFMVehicle.WheeledTankDataTableRow
// Size: 0x1B8 (Inherited: 0xB8)
struct FWheeledTankDataTableRow : FWheeledVehicleDataTableRow
{
	struct FVehicleEngineData EngineSetup; // 0xB8(0xB8)
	struct FVehicleTransmissionData TransmissionSetup; // 0x170(0x38)
	struct TArray<struct FTankControllInfo> ControllInfos; // 0x1A8(0x10)
};

// Object: ScriptStruct DFMVehicle.WheeledVehicleNWDataTableRow
// Size: 0x258 (Inherited: 0xB8)
struct FWheeledVehicleNWDataTableRow : FWheeledVehicleDataTableRow
{
	struct FVehicleEngineData EngineSetup; // 0xB8(0xB8)
	struct FVehicleDifferentialNWData DifferentialSetup; // 0x170(0x10)
	struct FVehicleTransmissionData TransmissionSetup; // 0x180(0x38)
	struct FRuntimeFloatCurve SteeringCurve; // 0x1B8(0xA0)
};

// Object: ScriptStruct DFMVehicle.WheeledVehicle4WDataTableRow
// Size: 0x268 (Inherited: 0xB8)
struct FWheeledVehicle4WDataTableRow : FWheeledVehicleDataTableRow
{
	struct FVehicleEngineData EngineSetup; // 0xB8(0xB8)
	struct FVehicleDifferential4WData DifferentialSetup; // 0x170(0x1C)
	float AckermannAccuracy; // 0x18C(0x4)
	struct FVehicleTransmissionData TransmissionSetup; // 0x190(0x38)
	struct FRuntimeFloatCurve SteeringCurve; // 0x1C8(0xA0)
};

// Object: ScriptStruct DFMVehicle.JetVehicleSpringArmParam
// Size: 0x4 (Inherited: 0x0)
struct FJetVehicleSpringArmParam
{
	float JetBackViewArmLengthLerpSpeed; // 0x0(0x4)
};

// Object: ScriptStruct DFMVehicle.VehicleSpringArmParamVectorCurve
// Size: 0x290 (Inherited: 0x0)
struct FVehicleSpringArmParamVectorCurve
{
	struct FRuntimeVectorCurve RuntimeVectorCurve; // 0x0(0x1D0)
	float InterpolateSpeed; // 0x1D0(0x4)
	uint8_t Pad_0x1D4[0x4]; // 0x1D4(0x4)
	struct FRuntimeFloatCurve InterpolateSpeedCurve; // 0x1D8(0xA0)
	uint8_t IsUseAcceleration : 1; // 0x278(0x1), Mask(0x1)
	uint8_t BitPad_0x278_1 : 7; // 0x278(0x1)
	uint8_t IsPreArmOriginOffset : 1; // 0x279(0x1), Mask(0x1)
	uint8_t BitPad_0x279_1 : 7; // 0x279(0x1)
	uint8_t IsRotOffset : 1; // 0x27A(0x1), Mask(0x1)
	uint8_t BitPad_0x27A_1 : 7; // 0x27A(0x1)
	uint8_t IsVelocityAbs : 1; // 0x27B(0x1), Mask(0x1)
	uint8_t BitPad_0x27B_1 : 7; // 0x27B(0x1)
	uint8_t IsAccelerationAbs : 1; // 0x27C(0x1), Mask(0x1)
	uint8_t BitPad_0x27C_1 : 7; // 0x27C(0x1)
	uint8_t IsWorldOffset : 1; // 0x27D(0x1), Mask(0x1)
	uint8_t BitPad_0x27D_1 : 7; // 0x27D(0x1)
	uint8_t IsCameraOffset : 1; // 0x27E(0x1), Mask(0x1)
	uint8_t BitPad_0x27E_1 : 7; // 0x27E(0x1)
	uint8_t Pad_0x27F[0x11]; // 0x27F(0x11)
};

// Object: ScriptStruct DFMVehicle.VehicleCameraDataTableRow
// Size: 0x32D8 (Inherited: 0x10)
struct FVehicleCameraDataTableRow : FDescRowBase
{
	int32_t VehicleId; // 0x10(0x4)
	EDFMVehicleType VehicleType; // 0x14(0x1)
	uint8_t Pad_0x15[0x3]; // 0x15(0x3)
	struct TArray<struct FVehicleSpringArmParamVectorCurve> ForwardTargetOffsetCurves; // 0x18(0x10)
	struct TArray<struct FVehicleSpringArmParamVectorCurve> RightTargetOffsetCurves; // 0x28(0x10)
	struct TArray<struct FVehicleSpringArmParamVectorCurve> RightTargetOffsetCurveWithAngularVelocities; // 0x38(0x10)
	struct TArray<struct FVehicleSpringArmParamVectorCurve> UpTargetOffsetCurves; // 0x48(0x10)
	struct TArray<struct FVehicleSpringArmParamVectorCurve> PitchTargetOffsetCurves; // 0x58(0x10)
	struct FVehicleSpringArmParamVectorCurve FPPUpTargetOffset; // 0x68(0x290)
	struct TArray<struct FVehicleSpringArmParamVectorCurve> FPPUpTargetRotatorOffset; // 0x2F8(0x10)
	struct FVehicleSpringArmParamVectorCurve FPPRightTargetOffsetWithAngularVelocity; // 0x308(0x290)
	struct FVehicleSpringArmParamVectorCurve FPPRightTargetOffsetWithAngularAcceleration; // 0x598(0x290)
	struct TArray<struct FVehicleSpringArmParamVectorCurve> FPPRightTargetRotationOffsetWithAngularVelocity; // 0x828(0x10)
	struct FVehicleSpringArmParamVectorCurve FPPPitchTargetOffset; // 0x838(0x290)
	struct FVehicleSpringArmParamVectorCurve FPPPitchTargetRotationOffset; // 0xAC8(0x290)
	struct FVehicleSpringArmParamVectorCurve FPPRollTargetRotationOffset; // 0xD58(0x290)
	struct FVehicleSpringArmParamVectorCurve FPPRollTargetRotationScalarOffsetWithPitch; // 0xFE8(0x290)
	struct FVehicleSpringArmParamVectorCurve FPPPitchTargetOffsetWithAngularAcceleration; // 0x1278(0x290)
	struct TArray<struct FVehicleSpringArmParamVectorCurve> FPPPitchVelocityTargetRotationOffset; // 0x1508(0x10)
	struct TArray<struct FVehicleSpringArmParamVectorCurve> WorldUpAngleTargetOffset; // 0x1518(0x10)
	struct TArray<struct FVehicleSpringArmParamVectorCurve> UpAngleTargetOffset; // 0x1528(0x10)
	struct TArray<struct FVehicleSpringArmParamVectorCurve> UpAngleTargetOffsetWithSide; // 0x1538(0x10)
	float JetYawRotationOffsetLerpSpeed; // 0x1548(0x4)
	uint8_t Pad_0x154C[0x4]; // 0x154C(0x4)
	struct FRuntimeFloatCurve JetYawRotationOffsetFromYaw; // 0x1550(0xA0)
	struct FRuntimeFloatCurve JetYawRotationOffsetFromRoll; // 0x15F0(0xA0)
	struct FRuntimeFloatCurve JetYawReverseRotationOffsetFromRoll; // 0x1690(0xA0)
	struct FRuntimeFloatCurve JetYawReverseRotationOffsetFromRoll_PitchScalar; // 0x1730(0xA0)
	struct FRuntimeFloatCurve JetYawRotationOffsetFromUpRightCos; // 0x17D0(0xA0)
	float JetRollRotationOffsetLerpSpeed; // 0x1870(0x4)
	uint8_t Pad_0x1874[0x4]; // 0x1874(0x4)
	struct FRuntimeFloatCurve JetRollRotationOffsetFromRoll; // 0x1878(0xA0)
	float JetPitchRotationOffsetLerpSpeed; // 0x1918(0x4)
	float JetPitchDefaultOffset; // 0x191C(0x4)
	struct FRuntimeFloatCurve JetPitchRotationOffsetFromPitch; // 0x1920(0xA0)
	struct FRuntimeFloatCurve JetPitchRotationOffsetFromUpUpCos; // 0x19C0(0xA0)
	struct FRuntimeFloatCurve JetPitchRotationOffsetFromPitch_RollScalar; // 0x1A60(0xA0)
	float JetSpringOriginYOffsetLerpSpeed; // 0x1B00(0x4)
	uint8_t Pad_0x1B04[0x4]; // 0x1B04(0x4)
	struct FRuntimeFloatCurve JetSpringOriginYOffsetFromRollVel; // 0x1B08(0xA0)
	struct FRuntimeFloatCurve JetSpringOriginYOffsetFromUpRightCos; // 0x1BA8(0xA0)
	struct FRuntimeFloatCurve JetSpringOriginYOffsetFromYawVel; // 0x1C48(0xA0)
	float JetSpringOriginZOffsetLerpSpeed; // 0x1CE8(0x4)
	uint8_t Pad_0x1CEC[0x4]; // 0x1CEC(0x4)
	struct FRuntimeFloatCurve JetSpringOriginZOffsetFromUpCos; // 0x1CF0(0xA0)
	float JetFPPCamPitchRotOffsetLerpSpeed; // 0x1D90(0x4)
	uint8_t Pad_0x1D94[0x4]; // 0x1D94(0x4)
	struct FRuntimeFloatCurve JetFPPCamPitchRotOffsetFromPitchAngle; // 0x1D98(0xA0)
	struct FRuntimeFloatCurve JetFPPCamPitchRotOffsetFromPitchVel; // 0x1E38(0xA0)
	float JetFPPCamYawRotOffsetLerpSpeed; // 0x1ED8(0x4)
	uint8_t Pad_0x1EDC[0x4]; // 0x1EDC(0x4)
	struct FRuntimeFloatCurve JetFPPCamYawRotOffsetFromYawVel; // 0x1EE0(0xA0)
	float JetFPPCamRollRotOffsetLerpSpeed; // 0x1F80(0x4)
	uint8_t Pad_0x1F84[0x4]; // 0x1F84(0x4)
	struct FRuntimeFloatCurve JetFPPCamRollRotOffsetFromRollAngle; // 0x1F88(0xA0)
	struct FRuntimeFloatCurve JetFPPCamRollRotOffsetScalarFromPitchAngle; // 0x2028(0xA0)
	struct FRuntimeFloatCurve JetFPPCamRollRotOffsetFromRollVel; // 0x20C8(0xA0)
	struct FRuntimeFloatCurve ExtraSpringArmLengthCurve; // 0x2168(0xA0)
	struct FRuntimeFloatCurve HelicopterRollPitchCurve; // 0x2208(0xA0)
	float HelicopterRollPitchLerpValue; // 0x22A8(0x4)
	uint8_t Pad_0x22AC[0x4]; // 0x22AC(0x4)
	struct FVehicleSpringArmParamVectorCurve HelicopterLiftRpmTargetOffsetCurve; // 0x22B0(0x290)
	uint8_t bUseBumpOptimization : 1; // 0x2540(0x1), Mask(0x1)
	uint8_t BitPad_0x2540_1 : 7; // 0x2540(0x1)
	uint8_t Pad_0x2541[0x3]; // 0x2541(0x3)
	float BumpOptimizationInterpolateSpeed; // 0x2544(0x4)
	float BumpOptimizationScale; // 0x2548(0x4)
	uint8_t bEnableToLockCamera : 1; // 0x254C(0x1), Mask(0x1)
	uint8_t BitPad_0x254C_1 : 7; // 0x254C(0x1)
	uint8_t bEnableFPPFreeCamera : 1; // 0x254D(0x1), Mask(0x1)
	uint8_t BitPad_0x254D_1 : 7; // 0x254D(0x1)
	uint8_t bEnableOverShoulderCamera : 1; // 0x254E(0x1), Mask(0x1)
	uint8_t BitPad_0x254E_1 : 7; // 0x254E(0x1)
	uint8_t Pad_0x254F[0x1]; // 0x254F(0x1)
	float OverShoulderCameraZoomRate; // 0x2550(0x4)
	struct FRotator OverShoulderCameraRotOffset; // 0x2554(0xC)
	float JetOverShoulderPitchRotationOffsetLerpSpeed; // 0x2560(0x4)
	uint8_t Pad_0x2564[0x4]; // 0x2564(0x4)
	struct FRuntimeFloatCurve JetOverShoulderPitchRotOffsetFromPitchVel; // 0x2568(0xA0)
	struct FRuntimeFloatCurve JetOverShoulderPitchRotOffsetScalarFromForwardUpCos; // 0x2608(0xA0)
	float JetOverShoulderRollRotationOffsetLerpSpeed; // 0x26A8(0x4)
	uint8_t Pad_0x26AC[0x4]; // 0x26AC(0x4)
	struct FRuntimeFloatCurve JetOverShoulderRollRotOffsetFromRollVel; // 0x26B0(0xA0)
	struct FRuntimeFloatCurve JetOverShoulderRollRotOffsetScalarFromRightUpCos; // 0x2750(0xA0)
	float JetOverShoulderYawRotationOffsetLerpSpeed; // 0x27F0(0x4)
	uint8_t Pad_0x27F4[0x4]; // 0x27F4(0x4)
	struct FRuntimeFloatCurve JetOverShoulderYawRotOffsetFromYawVel; // 0x27F8(0xA0)
	float JetAutoFlySpringArmLengthLerpSpeed; // 0x2898(0x4)
	uint8_t Pad_0x289C[0x4]; // 0x289C(0x4)
	struct FRuntimeFloatCurve JetAutoFlySpringArmLengthOffset; // 0x28A0(0xA0)
	float JetAutoFlyArmOriginOffsetLerpSpeed; // 0x2940(0x4)
	uint8_t Pad_0x2944[0x4]; // 0x2944(0x4)
	struct FRuntimeFloatCurve JetAutoFlyYOffsetFromYawVel; // 0x2948(0xA0)
	struct FRuntimeFloatCurve JetAutoFlyYOffsetFromRightUpCos; // 0x29E8(0xA0)
	float JetSuspYawRotationOffsetLerpSpeed; // 0x2A88(0x4)
	uint8_t Pad_0x2A8C[0x4]; // 0x2A8C(0x4)
	struct FRuntimeFloatCurve JetSuspYawRotationOffsetFromYaw; // 0x2A90(0xA0)
	struct FRuntimeFloatCurve JetSuspYawRotationOffsetFromRoll; // 0x2B30(0xA0)
	struct FRuntimeFloatCurve JetSuspYawReverseRotationOffsetFromRoll; // 0x2BD0(0xA0)
	struct FRuntimeFloatCurve JetSuspYawReverseRotationOffsetFromRoll_PitchScalar; // 0x2C70(0xA0)
	struct FRuntimeFloatCurve JetSuspYawRotationOffsetFromUpRightCos; // 0x2D10(0xA0)
	float JetSuspRollRotationOffsetLerpSpeed; // 0x2DB0(0x4)
	uint8_t Pad_0x2DB4[0x4]; // 0x2DB4(0x4)
	struct FRuntimeFloatCurve JetSuspRollRotationOffsetFromRoll; // 0x2DB8(0xA0)
	float JetSuspPitchRotationOffsetLerpSpeed; // 0x2E58(0x4)
	float JetSuspPitchDefaultOffset; // 0x2E5C(0x4)
	struct FRuntimeFloatCurve JetSuspPitchRotationOffsetFromPitch; // 0x2E60(0xA0)
	struct FRuntimeFloatCurve JetSuspPitchRotationOffsetFromUpUpCos; // 0x2F00(0xA0)
	struct FRuntimeFloatCurve JetSuspPitchRotationOffsetFromPitch_RollScalar; // 0x2FA0(0xA0)
	float JetSuspSpringOriginYOffsetLerpSpeed; // 0x3040(0x4)
	uint8_t Pad_0x3044[0x4]; // 0x3044(0x4)
	struct FRuntimeFloatCurve JetSuspSpringOriginYOffsetFromRollVel; // 0x3048(0xA0)
	struct FRuntimeFloatCurve JetSuspSpringOriginYOffsetFromUpRightCos; // 0x30E8(0xA0)
	struct FRuntimeFloatCurve JetSuspSpringOriginYOffsetFromYawVel; // 0x3188(0xA0)
	float JetSuspSpringOriginZOffsetLerpSpeed; // 0x3228(0x4)
	uint8_t Pad_0x322C[0x4]; // 0x322C(0x4)
	struct FRuntimeFloatCurve JetSuspSpringOriginZOffsetFromUpCos; // 0x3230(0xA0)
	struct FJetVehicleSpringArmParam JetCamParams; // 0x32D0(0x4)
	uint8_t Pad_0x32D4[0x4]; // 0x32D4(0x4)
};

// Object: ScriptStruct DFMVehicle.VehicleSpringArmParamCurve
// Size: 0xB0 (Inherited: 0x0)
struct FVehicleSpringArmParamCurve
{
	struct FRuntimeFloatCurve ParamValueCurve; // 0x0(0xA0)
	float InterpolateSpeed; // 0xA0(0x4)
	uint8_t IsPreArmOriginOffset : 1; // 0xA4(0x1), Mask(0x1)
	uint8_t BitPad_0xA4_1 : 7; // 0xA4(0x1)
	uint8_t Pad_0xA5[0xB]; // 0xA5(0xB)
};

// Object: ScriptStruct DFMVehicle.VehicleSeatKeyTipsInfo
// Size: 0x10 (Inherited: 0x0)
struct FVehicleSeatKeyTipsInfo
{
	struct TArray<struct FVehicleKeyTipsInfo> KeyTipsInfos; // 0x0(0x10)
};

// Object: ScriptStruct DFMVehicle.VehicleSeatTipsInfo
// Size: 0x20 (Inherited: 0x0)
struct FVehicleSeatTipsInfo
{
	struct FText SeatText; // 0x0(0x18)
	int32_t SeatType; // 0x18(0x4)
	uint8_t Pad_0x1C[0x4]; // 0x1C(0x4)
};

// Object: ScriptStruct DFMVehicle.VehicleKeyTipsDataTableRow
// Size: 0xD8 (Inherited: 0x10)
struct FVehicleKeyTipsDataTableRow : FDescRowBase
{
	int32_t VehicleId; // 0x10(0x4)
	uint8_t Pad_0x14[0x4]; // 0x14(0x4)
	struct TArray<struct FVehicleKeyTipsInfo> CommonKeyTipsInfos; // 0x18(0x10)
	struct TMap<struct FName, struct FVehicleSeatKeyTipsInfo> SeatKeyTips; // 0x28(0x50)
	struct TArray<struct FVehicleSkillKeyTipsInfo> SkillKeyTips; // 0x78(0x10)
	struct TMap<struct FName, struct FVehicleSeatTipsInfo> SeatTips; // 0x88(0x50)
};

// Object: ScriptStruct DFMVehicle.VehicleSkillKeyTipsInfo
// Size: 0x38 (Inherited: 0x0)
struct FVehicleSkillKeyTipsInfo
{
	struct FText KeyText; // 0x0(0x18)
	struct FName KeyName; // 0x18(0x8)
	uint8_t bOnlyShowInSkillAdjustStage : 1; // 0x20(0x1), Mask(0x1)
	uint8_t BitPad_0x20_1 : 7; // 0x20(0x1)
	uint8_t bHideInSkillAdjustStage : 1; // 0x21(0x1), Mask(0x1)
	uint8_t BitPad_0x21_1 : 7; // 0x21(0x1)
	uint8_t Pad_0x22[0x6]; // 0x22(0x6)
	struct TArray<int32_t> SkillIdWhiteList; // 0x28(0x10)
};

// Object: ScriptStruct DFMVehicle.VehicleKeyTipsInfo
// Size: 0x20 (Inherited: 0x0)
struct FVehicleKeyTipsInfo
{
	struct FText KeyText; // 0x0(0x18)
	struct FName KeyName; // 0x18(0x8)
};

// Object: ScriptStruct DFMVehicle.VehiclePhysicsDataTableRow
// Size: 0x60 (Inherited: 0x10)
struct FVehiclePhysicsDataTableRow : FDescRowBase
{
	int32_t VehicleId; // 0x10(0x4)
	uint8_t bEnableModifyCollisionContact : 1; // 0x14(0x1), Mask(0x1)
	uint8_t BitPad_0x14_1 : 7; // 0x14(0x1)
	uint8_t Pad_0x15[0x3]; // 0x15(0x3)
	float MinContactModificationVelocity; // 0x18(0x4)
	float MaxContactModificationVelocityScale; // 0x1C(0x4)
	float MinContactModificationVelocityScale; // 0x20(0x4)
	float ContactNormalModifyScale; // 0x24(0x4)
	float ContactModificationCoolingTime; // 0x28(0x4)
	uint8_t bEnableAutoBalance : 1; // 0x2C(0x1), Mask(0x1)
	uint8_t BitPad_0x2C_1 : 7; // 0x2C(0x1)
	uint8_t Pad_0x2D[0x3]; // 0x2D(0x3)
	float BalanceStrengthRoll; // 0x30(0x4)
	float BalanceStrengthPitch; // 0x34(0x4)
	float BalanceAngluarDamping; // 0x38(0x4)
	uint8_t bEnableAutoBalanceWhenFalling : 1; // 0x3C(0x1), Mask(0x1)
	uint8_t BitPad_0x3C_1 : 7; // 0x3C(0x1)
	uint8_t Pad_0x3D[0x3]; // 0x3D(0x3)
	float MinFallingLinearVelocity; // 0x40(0x4)
	uint8_t bEnableAutoBalanceWhenStationary : 1; // 0x44(0x1), Mask(0x1)
	uint8_t BitPad_0x44_1 : 7; // 0x44(0x1)
	uint8_t Pad_0x45[0x3]; // 0x45(0x3)
	float MaxStationaryLinearVelocity; // 0x48(0x4)
	float MaxStationaryAngularVelocity; // 0x4C(0x4)
	uint8_t bEnableStickToGround : 1; // 0x50(0x1), Mask(0x1)
	uint8_t BitPad_0x50_1 : 7; // 0x50(0x1)
	uint8_t Pad_0x51[0x3]; // 0x51(0x3)
	float StickToGroundRiseStrength; // 0x54(0x4)
	float StickToGroundFallStrength; // 0x58(0x4)
	uint8_t Pad_0x5C[0x4]; // 0x5C(0x4)
};

// Object: ScriptStruct DFMVehicle.VehicleInputRedirectionDataTableRow
// Size: 0x158 (Inherited: 0x10)
struct FVehicleInputRedirectionDataTableRow : FDescRowBase
{
	int32_t VehicleId; // 0x10(0x4)
	float MaxJoystickBackwardAngle; // 0x14(0x4)
	struct FRuntimeFloatCurve ThrottleCurve; // 0x18(0xA0)
	struct FRuntimeFloatCurve SteeringCurve; // 0xB8(0xA0)
};

// Object: ScriptStruct DFMVehicle.DFMVehicleSkillEffectDescContainer
// Size: 0x10 (Inherited: 0x0)
struct FDFMVehicleSkillEffectDescContainer
{
	struct TArray<struct FDFMVehicleSkillEffectDesc> Container; // 0x0(0x10)
};

// Object: ScriptStruct DFMVehicle.DFMVehicleADSConfig
// Size: 0x100 (Inherited: 0x0)
struct FDFMVehicleADSConfig
{
	struct TSoftClassPtr<struct AActor*> ActorClass; // 0x0(0x28)
	float InterceptRadius; // 0x28(0x4)
	struct FVector InterceptFirePosition; // 0x2C(0xC)
	struct FName CoolDownEffect; // 0x38(0x8)
	struct FName PersistenceEffect; // 0x40(0x8)
	struct FVector EffectPosition; // 0x48(0xC)
	struct FName EffectSocket; // 0x54(0x8)
	uint8_t Pad_0x5C[0x4]; // 0x5C(0x4)
	struct TMap<int32_t, struct FDFMVehicleSkillEffectDescContainer> SpecifyVehiclePersistentEffects; // 0x60(0x50)
	struct TMap<int32_t, struct FDFMVehicleSkillEffectDescContainer> SpecifyVehicleCooldownEffects; // 0xB0(0x50)
};

// Object: ScriptStruct DFMVehicle.DFMVehicleCounterFireRadarConfig
// Size: 0xC (Inherited: 0x0)
struct FDFMVehicleCounterFireRadarConfig
{
	float MinRevealDamage; // 0x0(0x4)
	float MaxRevealDistance; // 0x4(0x4)
	float OutlineDuration; // 0x8(0x4)
};

// Object: ScriptStruct DFMVehicle.DFMVehicleCreateControllableActorConfig
// Size: 0x70 (Inherited: 0x0)
struct FDFMVehicleCreateControllableActorConfig
{
	struct TSoftClassPtr<struct AActor*> ControllableActorClass; // 0x0(0x28)
	uint8_t Pad_0x28[0x8]; // 0x28(0x8)
	struct FTransform RelativeTranform; // 0x30(0x30)
	struct FName HudName; // 0x60(0x8)
	uint8_t Pad_0x68[0x8]; // 0x68(0x8)
};

// Object: ScriptStruct DFMVehicle.DFMVehicleHeatConfig
// Size: 0x38 (Inherited: 0x0)
struct FDFMVehicleHeatConfig
{
	struct TArray<struct FName> EffectIds; // 0x0(0x10)
	struct TArray<struct FTransform> EffectTransforms; // 0x10(0x10)
	struct TArray<float> EffectTimes; // 0x20(0x10)
	uint8_t IsEffectAttached : 1; // 0x30(0x1), Mask(0x1)
	uint8_t BitPad_0x30_1 : 7; // 0x30(0x1)
	uint8_t Pad_0x31[0x7]; // 0x31(0x7)
};

// Object: ScriptStruct DFMVehicle.DFMVehicleLaunchProjectileConfig
// Size: 0x120 (Inherited: 0x0)
struct FDFMVehicleLaunchProjectileConfig
{
	struct TSoftClassPtr<struct AActor*> ProjectileClass; // 0x0(0x28)
	struct TSoftClassPtr<struct AActor*> VerticalTypeProjectileClass; // 0x28(0x28)
	struct TSoftClassPtr<struct AActor*> ProjectilePreviewClass; // 0x50(0x28)
	struct FName LaunchedEffectId; // 0x78(0x8)
	struct TSoftObjectPtr<UPaperSprite> HorizontalTypeSkillIcon; // 0x80(0x28)
	struct TSoftObjectPtr<UPaperSprite> VerticalTypeSkillIcon; // 0xA8(0x28)
	struct TSoftObjectPtr<UPaperSprite> HorizontalTypeSkillIcon_Mobile; // 0xD0(0x28)
	struct TSoftObjectPtr<UPaperSprite> VerticalTypeSkillIcon_Mobile; // 0xF8(0x28)
};

// Object: ScriptStruct DFMVehicle.DFMVehicleMarkDetectionConfig
// Size: 0x30 (Inherited: 0x0)
struct FDFMVehicleMarkDetectionConfig
{
	float DetectionLength; // 0x0(0x4)
	float DetectionScopeInScreen; // 0x4(0x4)
	struct TSoftObjectPtr<UGPAudioEventAsset> MarkAudio; // 0x8(0x28)
};

// Object: ScriptStruct DFMVehicle.DFMVehicleProjectileLauncherConfig
// Size: 0x2 (Inherited: 0x0)
struct FDFMVehicleProjectileLauncherConfig
{
	uint8_t bEnableAdjust_Horizontal : 1; // 0x0(0x1), Mask(0x1)
	uint8_t BitPad_0x0_1 : 7; // 0x0(0x1)
	uint8_t bEnableAdjust_Vertical : 1; // 0x1(0x1), Mask(0x1)
	uint8_t BitPad_0x1_1 : 7; // 0x1(0x1)
};

// Object: ScriptStruct DFMVehicle.DFMVehiclePreviewPlacementConfig
// Size: 0x38 (Inherited: 0x0)
struct FDFMVehiclePreviewPlacementConfig
{
	struct TSoftClassPtr<struct AActor*> PreviewActorClass; // 0x0(0x28)
	float SweepHeightOffset; // 0x28(0x4)
	float LongestDistanceToVehicle; // 0x2C(0x4)
	float ShortestDistanceToVehicle; // 0x30(0x4)
	float MaxDeltaHeight; // 0x34(0x4)
};

// Object: ScriptStruct DFMVehicle.DFMVehicleRebornBeaconConfig
// Size: 0x60 (Inherited: 0x0)
struct FDFMVehicleRebornBeaconConfig
{
	struct FDFMVehiclePreviewPlacementConfig PreviewPlacementConfig; // 0x0(0x38)
	struct TSoftClassPtr<struct AActor*> RebornBeaconClass; // 0x38(0x28)
};

// Object: ScriptStruct DFMVehicle.DFMVehicleRepairConfig
// Size: 0x60 (Inherited: 0x0)
struct FDFMVehicleRepairConfig
{
	float AddHPCDTime; // 0x0(0x4)
	uint8_t bCheckStopRepairMinDmgValue : 1; // 0x4(0x1), Mask(0x1)
	uint8_t BitPad_0x4_1 : 7; // 0x4(0x1)
	uint8_t Pad_0x5[0x3]; // 0x5(0x3)
	float StopRepairMinDmgValue; // 0x8(0x4)
	uint8_t Pad_0xC[0x4]; // 0xC(0x4)
	struct TMap<uint64_t, float> NoStopRepairWeaponWhiteList; // 0x10(0x50)
};

// Object: ScriptStruct DFMVehicle.DFMVehicleScanDetectionConfig
// Size: 0x80 (Inherited: 0x0)
struct FDFMVehicleScanDetectionConfig
{
	float DetectionLength; // 0x0(0x4)
	float DetectionInterval; // 0x4(0x4)
	struct TSoftObjectPtr<UGPAudioEventAsset> ScanStartAudio; // 0x8(0x28)
	struct TSoftObjectPtr<UGPAudioEventAsset> ScanAudio; // 0x30(0x28)
	struct TSoftObjectPtr<UGPAudioEventAsset> ScanEndAudio; // 0x58(0x28)
};

// Object: ScriptStruct DFMVehicle.DFMVehicleSmokeConfig
// Size: 0x48 (Inherited: 0x0)
struct FDFMVehicleSmokeConfig
{
	struct FBox SmokeBox; // 0x0(0x1C)
	int32_t SmokeId; // 0x1C(0x4)
	struct TSoftClassPtr<struct AActor*> ActorClass; // 0x20(0x28)
};

// Object: ScriptStruct DFMVehicle.DFMVehicleThermalImagingConfig
// Size: 0x8 (Inherited: 0x0)
struct FDFMVehicleThermalImagingConfig
{
	float LockDistanceOffset; // 0x0(0x4)
	float LockDurationOffset; // 0x4(0x4)
};

// Object: ScriptStruct DFMVehicle.DFMVehicleThermalSmokeConfig
// Size: 0x30 (Inherited: 0x0)
struct FDFMVehicleThermalSmokeConfig
{
	struct TSoftClassPtr<struct AActor*> ActorClass; // 0x0(0x28)
	int32_t SmokeId; // 0x28(0x4)
	float ShieldRadius; // 0x2C(0x4)
};

// Object: ScriptStruct DFMVehicle.VehicleSkillDataTableRow
// Size: 0x680 (Inherited: 0x10)
struct FVehicleSkillDataTableRow : FDescRowBase
{
	int32_t SkillId; // 0x10(0x4)
	EDFMVehicleSkillType SkillType; // 0x14(0x1)
	uint8_t Pad_0x15[0x3]; // 0x15(0x3)
	struct TSoftClassPtr<struct UDFMVehicleSkillExecutor*> SkillExecutorClass; // 0x18(0x28)
	struct FText SkillName; // 0x40(0x18)
	struct TSoftObjectPtr<UPaperSprite> SkillIcon; // 0x58(0x28)
	struct TSoftObjectPtr<UPaperSprite> MobileSkillIcon; // 0x80(0x28)
	struct FName SkillHUD; // 0xA8(0x8)
	uint8_t bIsPassiveSkill : 1; // 0xB0(0x1), Mask(0x1)
	uint8_t BitPad_0xB0_1 : 7; // 0xB0(0x1)
	uint8_t bIsDisableInElevator : 1; // 0xB1(0x1), Mask(0x1)
	uint8_t BitPad_0xB1_1 : 7; // 0xB1(0x1)
	uint8_t bLongPressToExecute : 1; // 0xB2(0x1), Mask(0x1)
	uint8_t BitPad_0xB2_1 : 7; // 0xB2(0x1)
	uint8_t bEnableLongPressToAdjustSkill : 1; // 0xB3(0x1), Mask(0x1)
	uint8_t BitPad_0xB3_1 : 7; // 0xB3(0x1)
	uint8_t Pad_0xB4[0xC]; // 0xB4(0xC)
	struct FVehicleSkillAdjustStageCameraConfig AdjustStageCameraConfig; // 0xC0(0x50)
	float LongPressToAdjustSkillTime; // 0x110(0x4)
	uint8_t Pad_0x114[0x4]; // 0x114(0x4)
	struct TSoftObjectPtr<UGPAudioEventAsset> ExecuteAudio; // 0x118(0x28)
	struct TSoftObjectPtr<UGPAudioEventAsset> EndAudio; // 0x140(0x28)
	struct FName EffectId; // 0x168(0x8)
	struct FTransform EffectTransform; // 0x170(0x30)
	float CdTime; // 0x1A0(0x4)
	float SkillLengthTime; // 0x1A4(0x4)
	int32_t SkillNum; // 0x1A8(0x4)
	uint8_t Pad_0x1AC[0x4]; // 0x1AC(0x4)
	struct FDFMVehicleSmokeConfig SmokeInfoConfig; // 0x1B0(0x48)
	struct FDFMVehicleRepairConfig RepairInfoConfig; // 0x1F8(0x60)
	struct FDFMVehicleADSConfig ADSConfig; // 0x258(0x100)
	struct FDFMVehicleScanDetectionConfig ScanConfig; // 0x358(0x80)
	struct FDFMVehicleMarkDetectionConfig MarkConfig; // 0x3D8(0x30)
	struct FDFMVehicleRebornBeaconConfig RebornBeaconConfig; // 0x408(0x60)
	struct FDFMVehicleThermalSmokeConfig ThermalSmokeConfig; // 0x468(0x30)
	struct FDFMVehicleHeatConfig HeatConfig; // 0x498(0x38)
	struct FDFMVehicleThermalImagingConfig ThermalImagingConfig; // 0x4D0(0x8)
	struct FDFMVehicleCounterFireRadarConfig CounterFireRadarConfig; // 0x4D8(0xC)
	uint8_t Pad_0x4E4[0x4]; // 0x4E4(0x4)
	struct FDFMVehicleLaunchProjectileConfig LaunchProjectileConfig; // 0x4E8(0x120)
	struct FDFMVehicleProjectileLauncherConfig ProjectileLauncherConfig; // 0x608(0x2)
	uint8_t Pad_0x60A[0x6]; // 0x60A(0x6)
	struct FDFMVehicleCreateControllableActorConfig CreateControllableActorConfig; // 0x610(0x70)
};

// Object: ScriptStruct DFMVehicle.DFMVehicleSkillEffectDesc
// Size: 0x1C (Inherited: 0x0)
struct FDFMVehicleSkillEffectDesc
{
	struct FName EffectName; // 0x0(0x8)
	struct FVector EffectPosition; // 0x8(0xC)
	struct FName EffectSocket; // 0x14(0x8)
};

// Object: ScriptStruct DFMVehicle.VehicleSeatSkillConfig
// Size: 0x50 (Inherited: 0x0)
struct FVehicleSeatSkillConfig
{
	struct TMap<int32_t, int32_t> SkillConfigs; // 0x0(0x50)
};

// Object: ScriptStruct DFMVehicle.VehicleSkillConfigDataTableRow
// Size: 0x68 (Inherited: 0x10)
struct FVehicleSkillConfigDataTableRow : FDescRowBase
{
	int32_t VehicleId; // 0x10(0x4)
	uint8_t Pad_0x14[0x4]; // 0x14(0x4)
	struct TMap<struct FName, struct FVehicleSeatSkillConfig> SeatSkillConfigs; // 0x18(0x50)
};

// Object: ScriptStruct DFMVehicle.VehicleBrokenPartActor
// Size: 0x20 (Inherited: 0x0)
struct FVehicleBrokenPartActor
{
	struct TArray<struct TSoftClassPtr<struct APawn*>> BrokenPartClasses; // 0x0(0x10)
	struct TArray<struct FTransform> BrokenPartTransforms; // 0x10(0x10)
};

// Object: ScriptStruct DFMVehicle.VehicleHealthRecoverInfoDesc
// Size: 0xB0 (Inherited: 0x0)
struct FVehicleHealthRecoverInfoDesc
{
	float RecoverIntensity; // 0x0(0x4)
	uint8_t bEnableDynamicPartRecover : 1; // 0x4(0x1), Mask(0x1)
	uint8_t BitPad_0x4_1 : 7; // 0x4(0x1)
	uint8_t bNeedSpecifyTargetBodyPart : 1; // 0x5(0x1), Mask(0x1)
	uint8_t BitPad_0x5_1 : 7; // 0x5(0x1)
	uint8_t Pad_0x6[0x2]; // 0x6(0x2)
	struct FRuntimeFloatCurve ScalarCurve; // 0x8(0xA0)
	EVehicleHealthRecoverScaleFactorType ScaleFactorType; // 0xA8(0x1)
	uint8_t Pad_0xA9[0x7]; // 0xA9(0x7)
};

// Object: ScriptStruct DFMVehicle.VehicleHealthRecoverInfoContainer
// Size: 0x58 (Inherited: 0x0)
struct FVehicleHealthRecoverInfoContainer
{
	struct TMap<EVehicleHealthRecoverType, struct FVehicleHealthRecoverInfoDesc> RecoverConfig; // 0x0(0x50)
	int32_t RepairedPriority; // 0x50(0x4)
	uint8_t Pad_0x54[0x4]; // 0x54(0x4)
};

// Object: ScriptStruct DFMVehicle.VehicleHealthRecoverInfo
// Size: 0xB8 (Inherited: 0x0)
struct FVehicleHealthRecoverInfo
{
	uint8_t Pad_0x0[0x4]; // 0x0(0x4)
	float StartRecoverTime; // 0x4(0x4)
	struct FVehicleHealthRecoverInfoContainer VehicleRecoverInfo; // 0x8(0x58)
	struct TMap<int32_t, struct FVehicleHealthRecoverInfoContainer> PartRecoverInfoMap; // 0x60(0x50)
	uint8_t Pad_0xB0[0x8]; // 0xB0(0x8)
};

// Object: ScriptStruct DFMVehicle.VehicleHealthDataTableRow
// Size: 0xF8 (Inherited: 0x10)
struct FVehicleHealthDataTableRow : FDescRowBase
{
	int32_t VehicleId; // 0x10(0x4)
	uint8_t Pad_0x14[0x4]; // 0x14(0x4)
	struct FVehicleHealthRecoverInfo RecoverInfo; // 0x18(0xB8)
	float OverrideExplodeDamage; // 0xD0(0x4)
	float ExplodeDamageRate; // 0xD4(0x4)
	struct FVehicleBrokenPartActor VehicleBrokenPartInfo; // 0xD8(0x20)
};

// Object: ScriptStruct DFMVehicle.EffectInfo
// Size: 0x70 (Inherited: 0x0)
struct FEffectInfo
{
	struct FName EffectId; // 0x0(0x8)
	uint8_t b13PUseSeparateId : 1; // 0x8(0x1), Mask(0x1)
	uint8_t BitPad_0x8_1 : 7; // 0x8(0x1)
	uint8_t Pad_0x9[0x3]; // 0x9(0x3)
	struct FName EffectId3P; // 0xC(0x8)
	uint8_t Pad_0x14[0xC]; // 0x14(0xC)
	struct FTransform EffectTransform; // 0x20(0x30)
	struct FName SocketName; // 0x50(0x8)
	struct TArray<struct FDFMVehicleEffectParamsEvaluator> EffectsParamEvaluators; // 0x58(0x10)
	uint8_t Pad_0x68[0x8]; // 0x68(0x8)
};

// Object: ScriptStruct DFMVehicle.BoatEffectInfo
// Size: 0x520 (Inherited: 0x0)
struct FBoatEffectInfo
{
	struct FEffectInfo LeftWaterEffect; // 0x0(0x70)
	struct FEffectInfo RightWaterEffect; // 0x70(0x70)
	struct FEffectInfo BackWaterEffect; // 0xE0(0x70)
	struct FName SlammingWaterEffect; // 0x150(0x8)
	float SlammingWaterCoolDownTime; // 0x158(0x4)
	uint8_t Pad_0x15C[0x4]; // 0x15C(0x4)
	struct FRuntimeFloatCurve SideWaterLatSpeedCurve; // 0x160(0xA0)
	struct FRuntimeFloatCurve SideWaterZSpeedCurve; // 0x200(0xA0)
	struct FRuntimeFloatCurve WaterEffectRateSpeedCurve; // 0x2A0(0xA0)
	struct FRuntimeFloatCurve SplashWaterEffectCurve; // 0x340(0xA0)
	struct FRuntimeFloatCurve SideWaterEffectParamMappingCurve; // 0x3E0(0xA0)
	struct FRuntimeFloatCurve SideWaterEffectParamVelocityScaleCurve; // 0x480(0xA0)
};

// Object: ScriptStruct DFMVehicle.JetEffectInfo
// Size: 0x570 (Inherited: 0x0)
struct FJetEffectInfo
{
	struct FEffectInfo LeftTrailEffect; // 0x0(0x70)
	struct FEffectInfo RightTrailEffect; // 0x70(0x70)
	struct FEffectInfo SmallWingTurbulenceEffect; // 0xE0(0x70)
	struct FEffectInfo BigWingTurbulenceEffect; // 0x150(0x70)
	struct FEffectInfo NormalFlameEffect; // 0x1C0(0x70)
	struct FEffectInfo SpeedupFlameEffect; // 0x230(0x70)
	float ForwardTimeScalar; // 0x2A0(0x4)
	float ReverseTimeScalar; // 0x2A4(0x4)
	uint8_t Pad_0x2A8[0x8]; // 0x2A8(0x8)
	struct FEffectInfo SpeedupStartEffect; // 0x2B0(0x70)
	struct FEffectInfo GroundDirtSmokeEffect; // 0x320(0x70)
	struct FEffectInfo GroundDirtSmokeEffectSusp; // 0x390(0x70)
	struct FEffectInfo FlyThroughRiverEffect; // 0x400(0x70)
	struct FName SpeedLineScreenEffectName; // 0x470(0x8)
	struct FName BackViewSpeedLineScreenEffectName; // 0x478(0x8)
	struct FEffectInfo RainLineEffect; // 0x480(0x70)
	struct FName RainLineScreenEffectName; // 0x4F0(0x8)
	uint8_t Pad_0x4F8[0x8]; // 0x4F8(0x8)
	struct FEffectInfo SoundBarrierEffect; // 0x500(0x70)
};

// Object: ScriptStruct DFMVehicle.VehicleEffectDataTableRow
// Size: 0xD20 (Inherited: 0x10)
struct FVehicleEffectDataTableRow : FDescRowBase
{
	int32_t EffectId; // 0x10(0x4)
	float EffectMinVelocity; // 0x14(0x4)
	float EffectMaxVelocity; // 0x18(0x4)
	float WaterdropMinVelocity; // 0x1C(0x4)
	struct TArray<struct FEffectInfo> MovingEffects; // 0x20(0x10)
	struct TArray<struct FEffectInfo> DriverGetOnEffects; // 0x30(0x10)
	struct TMap<struct FName, struct FEffectInfo> BeginFireEffects; // 0x40(0x50)
	struct TArray<struct FBrokenEffect> BrokenEffects; // 0x90(0x10)
	struct FEffectInfo BrokenFireEffectInfo; // 0xA0(0x70)
	struct FEffectInfo ExplosionEffectInfo; // 0x110(0x70)
	EExplosionType ExplosionType; // 0x180(0x1)
	uint8_t Pad_0x181[0xF]; // 0x181(0xF)
	struct FEffectInfo DestroyEffectInfo; // 0x190(0x70)
	struct FName WeaponModifyEffectId; // 0x200(0x8)
	EDFMVehicleType EffectType; // 0x208(0x1)
	uint8_t bIsAmphibiousVehicle : 1; // 0x209(0x1), Mask(0x1)
	uint8_t BitPad_0x209_1 : 7; // 0x209(0x1)
	uint8_t Pad_0x20A[0x6]; // 0x20A(0x6)
	struct FBoatEffectInfo BoatEffectInfo; // 0x210(0x520)
	struct FName HelicopterGroundSmokeEffectId; // 0x730(0x8)
	uint8_t Pad_0x738[0x8]; // 0x738(0x8)
	struct FEffectInfo HelicopterPropellerEffectInfo; // 0x740(0x70)
	struct FJetEffectInfo JetEffectInfo; // 0x7B0(0x570)
};

// Object: ScriptStruct DFMVehicle.DFMVehicleEffectParamsEvaluator
// Size: 0x280 (Inherited: 0x0)
struct FDFMVehicleEffectParamsEvaluator
{
	struct FName ParamName; // 0x0(0x8)
	EDFMVehicleEffectParamsXValue XValue; // 0x8(0x1)
	uint8_t bIsFloatParams : 1; // 0x9(0x1), Mask(0x1)
	uint8_t BitPad_0x9_1 : 7; // 0x9(0x1)
	uint8_t Pad_0xA[0x6]; // 0xA(0x6)
	struct FRuntimeFloatCurve Curve; // 0x10(0xA0)
	struct FRuntimeVectorCurve VectorCurve; // 0xB0(0x1D0)
};

// Object: ScriptStruct DFMVehicle.BrokenEffect
// Size: 0x90 (Inherited: 0x0)
struct FBrokenEffect
{
	float MaxHP; // 0x0(0x4)
	uint8_t Pad_0x4[0xC]; // 0x4(0xC)
	struct FEffectInfo EffectInfo; // 0x10(0x70)
	float FadeInTime; // 0x80(0x4)
	float FadeOutTime; // 0x84(0x4)
	float DealyTimeToStop; // 0x88(0x4)
	uint8_t Pad_0x8C[0x4]; // 0x8C(0x4)
};

// Object: ScriptStruct DFMVehicle.DFMVehicleHitDamageConfig
// Size: 0x10 (Inherited: 0x0)
struct FDFMVehicleHitDamageConfig
{
	struct TArray<struct FDFMVehicleHitDamageInfo> Infos; // 0x0(0x10)
};

// Object: ScriptStruct DFMVehicle.DFMVehicleDataConfigDataTableRow
// Size: 0x158 (Inherited: 0x10)
struct FDFMVehicleDataConfigDataTableRow : FDescRowBase
{
	int32_t VehicleId; // 0x10(0x4)
	int32_t MaxHP; // 0x14(0x4)
	EGPVehicleArmorType ArmorType; // 0x18(0x1)
	uint8_t Pad_0x19[0x3]; // 0x19(0x3)
	int32_t MaxLevelToIgnoreCollisionOfDestructible; // 0x1C(0x4)
	int64_t ExplodeAttackerValueId; // 0x20(0x8)
	float PointDamageTakenRate; // 0x28(0x4)
	float ExplosionDamageTakenRate; // 0x2C(0x4)
	int32_t VehicleArmorDamageId; // 0x30(0x4)
	uint8_t Pad_0x34[0x4]; // 0x34(0x4)
	int64_t HitAttackerValueId; // 0x38(0x8)
	struct FDFMVehicleHitDamageConfig HitCharacterDamageConfig; // 0x40(0x10)
	uint8_t bHitAiBotDamageOverride : 1; // 0x50(0x1), Mask(0x1)
	uint8_t BitPad_0x50_1 : 7; // 0x50(0x1)
	uint8_t Pad_0x51[0x7]; // 0x51(0x7)
	struct FDFMVehicleHitDamageConfig HitAiBotDamageConfig; // 0x58(0x10)
	float AngleVehicleUpWithUp; // 0x68(0x4)
	float BacksideCollisionAngle; // 0x6C(0x4)
	float BacksideCollisionDamageScalar; // 0x70(0x4)
	uint8_t Pad_0x74[0x4]; // 0x74(0x4)
	struct FDFMVehicleHitDamageConfig HitWallDamageConfig; // 0x78(0x10)
	struct FRuntimeFloatCurve HitWallDamageVelocityScaleCurve; // 0x88(0xA0)
	float ForceExecuteHitWallDamageThreshold; // 0x128(0x4)
	uint8_t Pad_0x12C[0x4]; // 0x12C(0x4)
	struct FDFMVehicleHitDamageConfig HitVehicleDamageConfig; // 0x130(0x10)
	uint8_t bUseVelocityOffset : 1; // 0x140(0x1), Mask(0x1)
	uint8_t BitPad_0x140_1 : 7; // 0x140(0x1)
	uint8_t bVelocityOffsetDelay : 1; // 0x141(0x1), Mask(0x1)
	uint8_t BitPad_0x141_1 : 7; // 0x141(0x1)
	uint8_t Pad_0x142[0x6]; // 0x142(0x6)
	struct TArray<struct FDFMVehicleSeatSkillItemConfig> SeatSkillsArray; // 0x148(0x10)
};

// Object: ScriptStruct DFMVehicle.DFMVehicleSeatSkillItemConfig
// Size: 0x18 (Inherited: 0x0)
struct FDFMVehicleSeatSkillItemConfig
{
	struct FName SeatName; // 0x0(0x8)
	struct TArray<EVehicleAbilityType> AbilityTypeArray; // 0x8(0x10)
};

// Object: ScriptStruct DFMVehicle.DFMVehicleHitDamageInfo
// Size: 0xC (Inherited: 0x0)
struct FDFMVehicleHitDamageInfo
{
	float MinVelocitySize; // 0x0(0x4)
	float MaxVelocitySize; // 0x4(0x4)
	float DamageValue; // 0x8(0x4)
};

// Object: ScriptStruct DFMVehicle.DFMVehicleCharacterAnimationConfig
// Size: 0x1B8 (Inherited: 0x0)
struct FDFMVehicleCharacterAnimationConfig
{
	struct TSoftObjectPtr<UAnimationAsset> CharacterGetOnAnimation; // 0x0(0x28)
	struct TSoftObjectPtr<UAnimationAsset> CharacterGetOffAnimation; // 0x28(0x28)
	struct TSoftObjectPtr<UAnimationAsset> CharacterIdleAnimation; // 0x50(0x28)
	struct TSoftObjectPtr<UAnimationAsset> SkillIdelAnim; // 0x78(0x28)
	struct TSoftObjectPtr<UAnimationAsset> CharacterTurnAnimation; // 0xA0(0x28)
	struct TSoftObjectPtr<UAnimationAsset> CharacterSoaringAnimation; // 0xC8(0x28)
	struct TSoftObjectPtr<UAnimationAsset> CharacterLeanAnimation; // 0xF0(0x28)
	struct TSoftObjectPtr<UAnimationAsset> CharacterHitAnimation; // 0x118(0x28)
	struct TSoftObjectPtr<UAnimationAsset> CharacterHurtAnimation; // 0x140(0x28)
	struct TSoftObjectPtr<UAnimationAsset> CharacterLandingAnimation; // 0x168(0x28)
	struct TSoftObjectPtr<UAnimationAsset> CharacterCutSceneIdleAnimation; // 0x190(0x28)
};

// Object: ScriptStruct DFMVehicle.DFMVehicleSeatAnimationConfig
// Size: 0x3C8 (Inherited: 0x0)
struct FDFMVehicleSeatAnimationConfig
{
	struct TSoftObjectPtr<UAnimSequence> VehicleGetOnAnimation; // 0x0(0x28)
	struct TSoftObjectPtr<UAnimSequence> VehicleGetOffAnimation; // 0x28(0x28)
	struct FDFMVehicleCharacterAnimationConfig FPPAnimationConfig; // 0x50(0x1B8)
	struct FDFMVehicleCharacterAnimationConfig TPPAnimationConfig; // 0x208(0x1B8)
	uint8_t bEnableDoubleHandIK : 1; // 0x3C0(0x1), Mask(0x1)
	uint8_t BitPad_0x3C0_1 : 7; // 0x3C0(0x1)
	uint8_t Pad_0x3C1[0x7]; // 0x3C1(0x7)
};

// Object: ScriptStruct DFMVehicle.DFMVehicleAnimationDataTableRow
// Size: 0x90 (Inherited: 0x10)
struct FDFMVehicleAnimationDataTableRow : FDescRowBase
{
	int32_t VehicleId; // 0x10(0x4)
	uint8_t Pad_0x14[0x4]; // 0x14(0x4)
	struct TSoftObjectPtr<UAimOffsetBlendSpace> SteeringWheelAnimation; // 0x18(0x28)
	struct TMap<struct FName, struct FDFMVehicleSeatAnimationConfig> SeatAnimationConfigs; // 0x40(0x50)
};

// Object: ScriptStruct DFMVehicle.DFMVehicleWeaponDataTableRow
// Size: 0x540 (Inherited: 0x10)
struct FDFMVehicleWeaponDataTableRow : FDescRowBase
{
	uint64_t WeaponID; // 0x10(0x8)
	struct FText WeaponDisplayName; // 0x18(0x18)
	uint8_t IsWeaponUseVehicleMesh : 1; // 0x30(0x1), Mask(0x1)
	uint8_t BitPad_0x30_1 : 7; // 0x30(0x1)
	uint8_t IsWeaponShouldPlayAnimInFPPView : 1; // 0x31(0x1), Mask(0x1)
	uint8_t BitPad_0x31_1 : 7; // 0x31(0x1)
	uint8_t Pad_0x32[0x6]; // 0x32(0x6)
	struct TMap<int32_t, uint8_t> IsWeaponUseVehicleMeshWithVehicle; // 0x38(0x50)
	struct TMap<int32_t, uint8_t> IsWeaponShouldPlayAnimInFPPViewWithVehicle; // 0x88(0x50)
	uint8_t IsFixed : 1; // 0xD8(0x1), Mask(0x1)
	uint8_t BitPad_0xD8_1 : 7; // 0xD8(0x1)
	uint8_t Pad_0xD9[0x3]; // 0xD9(0x3)
	float FixedRotationLerpValue; // 0xDC(0x4)
	float MaxDistance; // 0xE0(0x4)
	uint8_t bOverrideWeaponTraceDistance : 1; // 0xE4(0x1), Mask(0x1)
	uint8_t BitPad_0xE4_1 : 7; // 0xE4(0x1)
	uint8_t Pad_0xE5[0x3]; // 0xE5(0x3)
	float OverridedWeaponTraceDistance; // 0xE8(0x4)
	struct FVector FixedFireStartPos; // 0xEC(0xC)
	int32_t RotAudioId; // 0xF8(0x4)
	float RotLerpValue; // 0xFC(0x4)
	float RotLerpThreshold; // 0x100(0x4)
	float WeaponRotYawSpeed; // 0x104(0x4)
	float WeaponRotPitchSpeed; // 0x108(0x4)
	uint8_t Pad_0x10C[0x4]; // 0x10C(0x4)
	struct FRuntimeFloatCurve WeaponMaxPitch; // 0x110(0xA0)
	struct FRuntimeFloatCurve WeaponMinPitch; // 0x1B0(0xA0)
	struct FVector WeaponPitchRange; // 0x250(0xC)
	uint8_t Pad_0x25C[0x4]; // 0x25C(0x4)
	struct FVehicleWindEffectInfo FireWindEffectInfo; // 0x260(0x38)
	uint8_t IsNeedFireEffect : 1; // 0x298(0x1), Mask(0x1)
	uint8_t BitPad_0x298_1 : 7; // 0x298(0x1)
	uint8_t Pad_0x299[0x3]; // 0x299(0x3)
	float FireEffectRaycastDistance; // 0x29C(0x4)
	struct FVector FireForcePos; // 0x2A0(0xC)
	float FireVelocityValue; // 0x2AC(0x4)
	float FireAngularVelocityValue; // 0x2B0(0x4)
	struct FName FiredDustEffect; // 0x2B4(0x8)
	float FiredDustRaycastDistance; // 0x2BC(0x4)
	struct FSoftObjectPath FPPUpAdditiveAnim; // 0x2C0(0x18)
	struct FSoftObjectPath FPPDownAdditiveAnim; // 0x2D8(0x18)
	struct TArray<struct FName> HideSockets; // 0x2F0(0x10)
	struct FName CrossHairName; // 0x300(0x8)
	struct FSoftObjectPath WeaponUIIcon; // 0x308(0x18)
	struct FSoftObjectPath WeaponTypeIcon; // 0x320(0x18)
	struct FSoftObjectPath WeaponGunMesh; // 0x338(0x18)
	struct FTransform WeaponGunLocalTransform; // 0x350(0x30)
	struct FEffectInfo WeaponGunModificationEffect; // 0x380(0x70)
	struct FSoftObjectPath AnotherWeaponGunMesh; // 0x3F0(0x18)
	uint8_t Pad_0x408[0x8]; // 0x408(0x8)
	struct FTransform AnotherWeaponGunLocalTransform; // 0x410(0x30)
	struct FEffectInfo AnotherWeaponGunModificationEffect; // 0x440(0x70)
	struct FSoftObjectPath WeaponRootMesh; // 0x4B0(0x18)
	uint8_t Pad_0x4C8[0x8]; // 0x4C8(0x8)
	struct FEffectInfo WeaponRootModificationEffect; // 0x4D0(0x70)
};

// Object: ScriptStruct DFMVehicle.DFMGroundVehicleAudioConfig
// Size: 0x1A8 (Inherited: 0x0)
struct FDFMGroundVehicleAudioConfig
{
	float MaxRPM; // 0x0(0x4)
	uint8_t Pad_0x4[0x4]; // 0x4(0x4)
	struct TSoftObjectPtr<UPhysicalMaterialTireNoiseAsset> PhysicalMaterialTireNoiseAsset; // 0x8(0x28)
	float TireNoiseStopDelay; // 0x30(0x4)
	uint8_t bAllowPlayingGearAudio : 1; // 0x34(0x1), Mask(0x1)
	uint8_t BitPad_0x34_1 : 7; // 0x34(0x1)
	uint8_t Pad_0x35[0x3]; // 0x35(0x3)
	struct TSoftObjectPtr<UGPAudioEventAsset> LateralSlipStartEvent; // 0x38(0x28)
	struct TSoftObjectPtr<UGPAudioEventAsset> LateralSlipStopEvent; // 0x60(0x28)
	float LateralSlipStartValue; // 0x88(0x4)
	float LateralSlipStopValue; // 0x8C(0x4)
	struct TSoftObjectPtr<UGPAudioEventAsset> LongSlipStartEvent; // 0x90(0x28)
	struct TSoftObjectPtr<UGPAudioEventAsset> LongSlipStopEvent; // 0xB8(0x28)
	float LongSlipStartValue; // 0xE0(0x4)
	uint8_t Pad_0xE4[0x4]; // 0xE4(0x4)
	struct TSoftObjectPtr<UGPAudioEventAsset> BrakeStartEvent; // 0xE8(0x28)
	struct TSoftObjectPtr<UGPAudioEventAsset> BrakeStopEvent; // 0x110(0x28)
	float BrakeCoolDown; // 0x138(0x4)
	float BrakeLimit; // 0x13C(0x4)
	struct TSoftObjectPtr<UGPAudioEventAsset> SuspensionAudio; // 0x140(0x28)
	float SuspensionCoolDown; // 0x168(0x4)
	float SuspensionTick; // 0x16C(0x4)
	float SuspensionLimit; // 0x170(0x4)
	uint8_t Pad_0x174[0x4]; // 0x174(0x4)
	struct TSoftObjectPtr<UGPAudioEventAsset> LandingAudio; // 0x178(0x28)
	float MinNormalizedLandingVelocity; // 0x1A0(0x4)
	uint8_t Pad_0x1A4[0x4]; // 0x1A4(0x4)
};

// Object: ScriptStruct DFMVehicle.DFMSkyVehicleAudioConfig
// Size: 0x438 (Inherited: 0x0)
struct FDFMSkyVehicleAudioConfig
{
	struct FString LiftStateRTPC; // 0x0(0x10)
	struct TSoftObjectPtr<UGPAudioEventAsset> SpeedupAudioStartEvent; // 0x10(0x28)
	struct TSoftObjectPtr<UGPAudioEventAsset> SpeedupAudioStopEvent; // 0x38(0x28)
	struct TSoftObjectPtr<UGPAudioEventAsset> LandingGearExtendStartEvent; // 0x60(0x28)
	struct TSoftObjectPtr<UGPAudioEventAsset> LandingGearExtendStopEvent; // 0x88(0x28)
	struct TSoftObjectPtr<UGPAudioEventAsset> LandingGearRetractStartEvent; // 0xB0(0x28)
	struct TSoftObjectPtr<UGPAudioEventAsset> LandingGearRetractStopEvent; // 0xD8(0x28)
	struct TSoftObjectPtr<UGPAudioEventAsset> LandingCockpitOpenStartEvent; // 0x100(0x28)
	struct TSoftObjectPtr<UGPAudioEventAsset> LandingCockpitOpenStopEvent; // 0x128(0x28)
	struct TSoftObjectPtr<UGPAudioEventAsset> LandingCockpitCloseStartEvent; // 0x150(0x28)
	struct TSoftObjectPtr<UGPAudioEventAsset> LandingCockpitCloseStopEvent; // 0x178(0x28)
	struct TSoftObjectPtr<UGPAudioEventAsset> DriveModeSuspensionStartEvent; // 0x1A0(0x28)
	struct TSoftObjectPtr<UGPAudioEventAsset> DriveModeSuspensionStopEvent; // 0x1C8(0x28)
	struct TSoftObjectPtr<UGPAudioEventAsset> DriveModeNormalStartEvent; // 0x1F0(0x28)
	struct TSoftObjectPtr<UGPAudioEventAsset> DriveModeNormalStopEvent; // 0x218(0x28)
	struct TSoftObjectPtr<UGPAudioEventAsset> PlayerPassbyFarStartEvent; // 0x240(0x28)
	struct TSoftObjectPtr<UGPAudioEventAsset> PlayerPassbyFarStopEvent; // 0x268(0x28)
	struct TSoftObjectPtr<UGPAudioEventAsset> PlayerPassbyMidStartEvent; // 0x290(0x28)
	struct TSoftObjectPtr<UGPAudioEventAsset> PlayerPassbyMidStopEvent; // 0x2B8(0x28)
	struct TSoftObjectPtr<UGPAudioEventAsset> PlayerPassbyClsStartEvent; // 0x2E0(0x28)
	struct TSoftObjectPtr<UGPAudioEventAsset> PlayerPassbyClsStopEvent; // 0x308(0x28)
	struct TSoftObjectPtr<UGPAudioEventAsset> AirVehiclePassbyStartEvent; // 0x330(0x28)
	struct TSoftObjectPtr<UGPAudioEventAsset> AirVehiclePassbyStopEvent; // 0x358(0x28)
	struct FString Jet_Hover_State; // 0x380(0x10)
	struct FString Jet_Speedup_State; // 0x390(0x10)
	struct FString Jet_GForce_Overload; // 0x3A0(0x10)
	struct FString Jet_Height_FromGround; // 0x3B0(0x10)
	struct FString Jet_Height_FromSeaLevel; // 0x3C0(0x10)
	struct FString Jet_Roll_Speed; // 0x3D0(0x10)
	struct FString Jet_Pitch_Speed; // 0x3E0(0x10)
	struct FString Jet_Remaining_Power; // 0x3F0(0x10)
	float JetMaxRollSpeed; // 0x400(0x4)
	float JetMaxPitchSpeed; // 0x404(0x4)
	float PlayerPassbyFarDistance; // 0x408(0x4)
	float PlayerPassbyMidDistance; // 0x40C(0x4)
	float PlayerPassbyClsDistance; // 0x410(0x4)
	float AirVehiclePassbyDistance; // 0x414(0x4)
	float PlayerPassbyFarSpeed; // 0x418(0x4)
	float PlayerPassbyMidSpeed; // 0x41C(0x4)
	float PlayerPassbyClsSpeed; // 0x420(0x4)
	float AirVehiclePassbySpeed; // 0x424(0x4)
	float PlayerPassbyFarCD; // 0x428(0x4)
	float PlayerPassbyMidCD; // 0x42C(0x4)
	float PlayerPassbyClsCD; // 0x430(0x4)
	float AirVehiclePassbyCD; // 0x434(0x4)
};

// Object: ScriptStruct DFMVehicle.DFMTankVehicleAudioConfig
// Size: 0xA0 (Inherited: 0x0)
struct FDFMTankVehicleAudioConfig
{
	struct TSoftObjectPtr<UGPAudioEventAsset> NormalTrackStartEvent; // 0x0(0x28)
	struct TSoftObjectPtr<UGPAudioEventAsset> NormalTrackStopEvent; // 0x28(0x28)
	struct TSoftObjectPtr<UGPAudioEventAsset> BrokenTrackStartEvent; // 0x50(0x28)
	struct TSoftObjectPtr<UGPAudioEventAsset> BrokenTrackStopEvent; // 0x78(0x28)
};

// Object: ScriptStruct DFMVehicle.DFMWaterVehicleAudioConfig
// Size: 0xA0 (Inherited: 0x0)
struct FDFMWaterVehicleAudioConfig
{
	struct TSoftObjectPtr<UGPAudioEventAsset> WaterAudioStartEvent; // 0x0(0x28)
	struct TSoftObjectPtr<UGPAudioEventAsset> WaterAudioStopEvent; // 0x28(0x28)
	struct TSoftObjectPtr<UGPAudioEventAsset> SplashWaterAudioEvent; // 0x50(0x28)
	float SlammingWaterCoolDownTime; // 0x78(0x4)
	uint8_t Pad_0x7C[0x4]; // 0x7C(0x4)
	struct FString BuoyancyRatioRTPC; // 0x80(0x10)
	struct FString SideSpeedRTPC; // 0x90(0x10)
};

// Object: ScriptStruct DFMVehicle.DFMVehicleAudioDataTableRow
// Size: 0xBF8 (Inherited: 0x10)
struct FDFMVehicleAudioDataTableRow : FDescRowBase
{
	struct FName AudioKey; // 0x10(0x8)
	struct TSoftObjectPtr<UGPAudioEventAsset> EngineAudioStartEvent; // 0x18(0x28)
	struct TSoftObjectPtr<UGPAudioEventAsset> EngineStartEvent; // 0x40(0x28)
	struct TSoftObjectPtr<UGPAudioEventAsset> EngineAudioStopEvent; // 0x68(0x28)
	struct TSoftObjectPtr<UGPAudioEventAsset> EngineStopEvent; // 0x90(0x28)
	struct TSoftObjectPtr<UGPAudioEventAsset> WindNoiseStartEvent; // 0xB8(0x28)
	struct TSoftObjectPtr<UGPAudioEventAsset> WindNoiseStopEvent; // 0xE0(0x28)
	struct TSoftObjectPtr<UGPAudioEventAsset> PassByStartEvent; // 0x108(0x28)
	struct TSoftObjectPtr<UGPAudioEventAsset> PassByStopEvent; // 0x130(0x28)
	float PassByMaxDistance; // 0x158(0x4)
	float PassByMinVelocity; // 0x15C(0x4)
	uint8_t IsNeedPlayHorn : 1; // 0x160(0x1), Mask(0x1)
	uint8_t BitPad_0x160_1 : 7; // 0x160(0x1)
	uint8_t Pad_0x161[0x7]; // 0x161(0x7)
	struct TSoftObjectPtr<UGPAudioEventAsset> HornStartEvent; // 0x168(0x28)
	struct TSoftObjectPtr<UGPAudioEventAsset> HornStopEvent; // 0x190(0x28)
	struct TArray<float> AlarmEventHPRatios; // 0x1B8(0x10)
	struct FString AlarmRTPC; // 0x1C8(0x10)
	struct TSoftObjectPtr<UGPAudioEventAsset> AlarmStartEvent; // 0x1D8(0x28)
	struct TSoftObjectPtr<UGPAudioEventAsset> AlarmStopEvent; // 0x200(0x28)
	struct TSoftObjectPtr<UGPAudioVehicleCollisionDataAsset> VehicleCollisionAsset; // 0x228(0x28)
	struct FString PerspectiveRTPC; // 0x250(0x10)
	struct FString IsInAirRTPC; // 0x260(0x10)
	struct FString IsDriverRTPC; // 0x270(0x10)
	struct FString IsLocalPassengerRTPC; // 0x280(0x10)
	struct FString RotatingSpeedRTPC; // 0x290(0x10)
	struct FString EngineRotationWithVelocityRTPC; // 0x2A0(0x10)
	struct FRuntimeFloatCurve RPMNoiseCurve; // 0x2B0(0xA0)
	struct FString ThrottleRTPC; // 0x350(0x10)
	struct FString VelocityRTPC; // 0x360(0x10)
	struct TArray<int32_t> AdjustRpmGears; // 0x370(0x10)
	struct FRuntimeFloatCurve AdjustRpmByGearCurve; // 0x380(0xA0)
	struct FString GearRTPC; // 0x420(0x10)
	struct FString SuspensionRTPC; // 0x430(0x10)
	struct FString LandingDestructedWheelNumRTPC; // 0x440(0x10)
	struct FString LongSlipRTPC; // 0x450(0x10)
	struct FString LateralSlipRTPC; // 0x460(0x10)
	struct FString VehicleInfluenceRTPC; // 0x470(0x10)
	struct FString InWaterRatioRTPC; // 0x480(0x10)
	struct FString IsInWaterRTPC; // 0x490(0x10)
	struct FString RTPC_Roll; // 0x4A0(0x10)
	struct FString RTPC_Pitch; // 0x4B0(0x10)
	struct FString RTPC_Yaw; // 0x4C0(0x10)
	EDFMVehicleType AudioType; // 0x4D0(0x1)
	uint8_t Pad_0x4D1[0x7]; // 0x4D1(0x7)
	struct FDFMGroundVehicleAudioConfig GroundVehicleAudioConfig; // 0x4D8(0x1A8)
	struct FDFMTankVehicleAudioConfig TankVehicleAudioConfig; // 0x680(0xA0)
	struct FDFMWaterVehicleAudioConfig WaterVehicleAudioConfig; // 0x720(0xA0)
	struct FDFMSkyVehicleAudioConfig SkyVehicleAudioConfig; // 0x7C0(0x438)
};

// Object: ScriptStruct DFMVehicle.DFMVehicleAudio1P3PConfig
// Size: 0x50 (Inherited: 0x0)
struct FDFMVehicleAudio1P3PConfig
{
	struct TSoftObjectPtr<UGPAudioEventAsset> Event1P; // 0x0(0x28)
	struct TSoftObjectPtr<UGPAudioEventAsset> Event3P; // 0x28(0x28)
};

// Object: ScriptStruct DFMVehicle.DFMVehicleSeatHUDConfig
// Size: 0x10 (Inherited: 0x0)
struct FDFMVehicleSeatHUDConfig
{
	struct TArray<struct FName> SeatHUDNames; // 0x0(0x10)
};

// Object: ScriptStruct DFMVehicle.DFMVehicleHUDDataTableRow
// Size: 0xA8 (Inherited: 0x10)
struct FDFMVehicleHUDDataTableRow : FDescRowBase
{
	int32_t VehicleId; // 0x10(0x4)
	uint8_t Pad_0x14[0x4]; // 0x14(0x4)
	struct TSoftObjectPtr<UTexture2D> VehicleIcon; // 0x18(0x28)
	struct TArray<struct FName> CommonHUDNames; // 0x40(0x10)
	int32_t SeatLayoutType; // 0x50(0x4)
	uint8_t Pad_0x54[0x4]; // 0x54(0x4)
	struct TMap<struct FName, struct FDFMVehicleSeatHUDConfig> SeatHUDConfigs; // 0x58(0x50)
};

// Object: ScriptStruct DFMVehicle.DFMVehicleHUDAssetDataTableRow
// Size: 0x50 (Inherited: 0x10)
struct FDFMVehicleHUDAssetDataTableRow : FDescRowBase
{
	struct FName HudName; // 0x10(0x8)
	struct FSoftClassPath HUDClass; // 0x18(0x18)
	struct FSoftClassPath HUDClass2; // 0x30(0x18)
	int32_t ZOrder; // 0x48(0x4)
	uint8_t Pad_0x4C[0x4]; // 0x4C(0x4)
};

// Object: ScriptStruct DFMVehicle.VehicleFrontendBuildNode
// Size: 0x28 (Inherited: 0x0)
struct FVehicleFrontendBuildNode
{
	uint8_t bIdle : 1; // 0x0(0x1), Mask(0x1)
	uint8_t BitPad_0x0_1 : 7; // 0x0(0x1)
	uint8_t Pad_0x1[0x7]; // 0x1(0x7)
	uint64_t ItemID; // 0x8(0x8)
	uint64_t ItemGUID; // 0x10(0x8)
	uint64_t SocketGUID; // 0x18(0x8)
	struct USkeletalMeshComponent* MeshComponent; // 0x20(0x8)
};

// Object: ScriptStruct DFMVehicle.VehicleFrontendBuildTree
// Size: 0x28 (Inherited: 0x0)
struct FVehicleFrontendBuildTree
{
	struct FName AdditionalModelTag; // 0x0(0x8)
	struct FName PendantModelTag; // 0x8(0x8)
	struct USceneComponent* RootComponent; // 0x10(0x8)
	struct TArray<struct FVehicleFrontendBuildNode> Nodes; // 0x18(0x10)
};

// Object: ScriptStruct DFMVehicle.VehicleFrontendCacher
// Size: 0x1 (Inherited: 0x0)
struct FVehicleFrontendCacher
{
	uint8_t Pad_0x0[0x1]; // 0x0(0x1)
};

// Object: ScriptStruct DFMVehicle.VehicleFrontendContextNode
// Size: 0x18 (Inherited: 0x0)
struct FVehicleFrontendContextNode
{
	uint64_t ItemID; // 0x0(0x8)
	uint64_t ItemGUID; // 0x8(0x8)
	uint64_t SocketGUID; // 0x10(0x8)
};

// Object: ScriptStruct DFMVehicle.VehicleFrontendRuleTemplate
// Size: 0x50 (Inherited: 0x0)
struct FVehicleFrontendRuleTemplate
{
	uint8_t Pad_0x0[0x50]; // 0x0(0x50)
};

// Object: ScriptStruct DFMVehicle.VehicleFrontendContextUpdateResult
// Size: 0x1 (Inherited: 0x0)
struct FVehicleFrontendContextUpdateResult
{
	uint8_t Success : 1; // 0x0(0x1), Mask(0x1)
	uint8_t BitPad_0x0_1 : 7; // 0x0(0x1)
};

// Object: ScriptStruct DFMVehicle.VehicleFrontendResourcesPaker
// Size: 0x1 (Inherited: 0x0)
struct FVehicleFrontendResourcesPaker
{
	uint8_t Pad_0x0[0x1]; // 0x0(0x1)
};

// Object: ScriptStruct DFMVehicle.VehicleFrontendResourcesPak
// Size: 0x18 (Inherited: 0x0)
struct FVehicleFrontendResourcesPak
{
	struct TArray<struct FSoftObjectPath> Paths; // 0x0(0x10)
	int64_t MaterialIndex; // 0x10(0x8)
};

// Object: ScriptStruct DFMVehicle.VehicleMixedGroupDataRow
// Size: 0x30 (Inherited: 0x10)
struct FVehicleMixedGroupDataRow : FDescRowBase
{
	int32_t MapID; // 0x10(0x4)
	int32_t DynamicLayoutId; // 0x14(0x4)
	uint8_t bEnableMixedGroup : 1; // 0x18(0x1), Mask(0x1)
	uint8_t BitPad_0x18_1 : 7; // 0x18(0x1)
	uint8_t Pad_0x19[0x3]; // 0x19(0x3)
	int32_t MaxGroupCount; // 0x1C(0x4)
	struct TArray<struct FVehicleMixedGroupSectorConfig> SectorConfigs; // 0x20(0x10)
};

// Object: ScriptStruct DFMVehicle.VehicleMixedGroupCampConfig
// Size: 0x10 (Inherited: 0x0)
struct FVehicleMixedGroupCampConfig
{
	struct TArray<struct FVehicleMixedGroupHubConfig> HubConfigs; // 0x0(0x10)
};

// Object: ScriptStruct DFMVehicle.VehicleMixedGroupSectorConfig
// Size: 0x28 (Inherited: 0x0)
struct FVehicleMixedGroupSectorConfig
{
	int32_t SectorID; // 0x0(0x4)
	uint8_t Pad_0x4[0x4]; // 0x4(0x4)
	struct FVehicleMixedGroupCampConfig Camp0Config; // 0x8(0x10)
	struct FVehicleMixedGroupCampConfig Camp1Config; // 0x18(0x10)
};

// Object: ScriptStruct DFMVehicle.VehicleMixedGroupHubConfig
// Size: 0x18 (Inherited: 0x0)
struct FVehicleMixedGroupHubConfig
{
	int32_t HubIndex; // 0x0(0x4)
	uint8_t Pad_0x4[0x4]; // 0x4(0x4)
	struct TArray<struct FVehicleMixedGroupConfig> MixedGroups; // 0x8(0x10)
};

// Object: ScriptStruct DFMVehicle.VehicleMixedGroupConfig
// Size: 0x10 (Inherited: 0x0)
struct FVehicleMixedGroupConfig
{
	int32_t GroupID; // 0x0(0x4)
	int32_t GroupVehicleLimit; // 0x4(0x4)
	float GroupCD; // 0x8(0x4)
	int32_t SortPriority; // 0xC(0x4)
};

// Object: ScriptStruct DFMVehicle.VehicleMixedGroupDefineRow
// Size: 0x40 (Inherited: 0x10)
struct FVehicleMixedGroupDefineRow : FDescRowBase
{
	int32_t GroupID; // 0x10(0x4)
	uint8_t Pad_0x14[0x4]; // 0x14(0x4)
	struct FText GroupName; // 0x18(0x18)
	struct TArray<struct FVehicleMixedGroupVehicleEntry> VehicleEntries; // 0x30(0x10)
};

// Object: ScriptStruct DFMVehicle.VehicleMixedGroupVehicleEntry
// Size: 0x8 (Inherited: 0x0)
struct FVehicleMixedGroupVehicleEntry
{
	int32_t VehicleId; // 0x0(0x4)
	int32_t ExtraScoreCost; // 0x4(0x4)
};

// Object: ScriptStruct DFMVehicle.JetInputStateMobile
// Size: 0x20 (Inherited: 0x0)
struct FJetInputStateMobile
{
	float SteeringInput; // 0x0(0x4)
	float ThrottleInput; // 0x4(0x4)
	float UpInput; // 0x8(0x4)
	float PitchInput; // 0xC(0x4)
	float YawInput; // 0x10(0x4)
	float RollInput; // 0x14(0x4)
	float ExtraAccInput; // 0x18(0x4)
	uint8_t bSpeedUpRequest : 1; // 0x1C(0x1), Mask(0x1)
	uint8_t BitPad_0x1C_1 : 7; // 0x1C(0x1)
	uint8_t Pad_0x1D[0x3]; // 0x1D(0x3)
};

// Object: ScriptStruct DFMVehicle.JetInputStatePC
// Size: 0x18 (Inherited: 0x0)
struct FJetInputStatePC
{
	float SteeringInput; // 0x0(0x4)
	float ThrottleInput; // 0x4(0x4)
	float PitchInput; // 0x8(0x4)
	float RollInput; // 0xC(0x4)
	float ExtraAccInput; // 0x10(0x4)
	uint8_t bSpeedUpRequest : 1; // 0x14(0x1), Mask(0x1)
	uint8_t BitPad_0x14_1 : 7; // 0x14(0x1)
	uint8_t Pad_0x15[0x3]; // 0x15(0x3)
};

// Object: ScriptStruct DFMVehicle.HelicopterInputStatePC
// Size: 0x10 (Inherited: 0x0)
struct FHelicopterInputStatePC
{
	float SteeringInput; // 0x0(0x4)
	float ThrottleInput; // 0x4(0x4)
	float PitchInput; // 0x8(0x4)
	float RollInput; // 0xC(0x4)
};

// Object: ScriptStruct DFMVehicle.HelicopterInputState
// Size: 0x14 (Inherited: 0x0)
struct FHelicopterInputState
{
	float SteeringInput; // 0x0(0x4)
	float ThrottleInput; // 0x4(0x4)
	float UpInput; // 0x8(0x4)
	float YawInput; // 0xC(0x4)
	float PitchInput; // 0x10(0x4)
};

// Object: ScriptStruct DFMVehicle.TankInputState
// Size: 0x28 (Inherited: 0x0)
struct FTankInputState
{
	float SteeringInput; // 0x0(0x4)
	float ThrottleInput; // 0x4(0x4)
	float BrakeInput; // 0x8(0x4)
	float HandbrakeInput; // 0xC(0x4)
	int32_t CurrentGear; // 0x10(0x4)
	float MaxLeftWheelSpeed; // 0x14(0x4)
	float MaxRightWheelSpeed; // 0x18(0x4)
	int32_t ControllIndex; // 0x1C(0x4)
	float LeftThrustRatio; // 0x20(0x4)
	float RightThrustRatio; // 0x24(0x4)
};

// Object: ScriptStruct DFMVehicle.ReplicatedVehicleNWState
// Size: 0x20 (Inherited: 0x0)
struct FReplicatedVehicleNWState
{
	float SteeringInput; // 0x0(0x4)
	float ThrottleInput; // 0x4(0x4)
	float BrakeInput; // 0x8(0x4)
	float HandbrakeInput; // 0xC(0x4)
	int32_t CurrentGear; // 0x10(0x4)
	uint8_t bIsNeedSpecialSteer : 1; // 0x14(0x1), Mask(0x1)
	uint8_t BitPad_0x14_1 : 7; // 0x14(0x1)
	uint8_t Pad_0x15[0x3]; // 0x15(0x3)
	float MaxLeftWheelSpeed; // 0x18(0x4)
	float MaxRightWheelSpeed; // 0x1C(0x4)
};

// Object: ScriptStruct DFMVehicle.BoatInputState
// Size: 0x8 (Inherited: 0x0)
struct FBoatInputState
{
	float SteeringInput; // 0x0(0x4)
	float ThrottleInput; // 0x4(0x4)
};

// Object: ScriptStruct DFMVehicle.VehicleInputState
// Size: 0x28 (Inherited: 0x0)
struct FVehicleInputState
{
	uint8_t ButtonInput; // 0x0(0x1)
	uint8_t Pad_0x1[0x7]; // 0x1(0x7)
	struct TArray<uint8_t> MainInputState; // 0x8(0x10)
	struct TArray<uint8_t> SecondInputState; // 0x18(0x10)
};

// Object: ScriptStruct DFMVehicle.VehicleInputInterpRate
// Size: 0x8 (Inherited: 0x0)
struct FVehicleInputInterpRate
{
	float RiseRate; // 0x0(0x4)
	float FallRate; // 0x4(0x4)
};

// Object: ScriptStruct DFMVehicle.VehicleMusicConfigRow
// Size: 0x28 (Inherited: 0x10)
struct FVehicleMusicConfigRow : FDescRowBase
{
	int64_t VehicleId; // 0x10(0x8)
	struct TArray<struct TSoftObjectPtr<UGPAudioEventAsset>> MusicPlaylist; // 0x18(0x10)
};

// Object: ScriptStruct DFMVehicle.VehiclePendantManagerTickFunction
// Size: 0x68 (Inherited: 0x60)
struct FVehiclePendantManagerTickFunction : FTickFunction
{
	uint8_t Pad_0x60[0x8]; // 0x60(0x8)
};

// Object: ScriptStruct DFMVehicle.VehicleSeatSpecifyCVarConfigContainer
// Size: 0x10 (Inherited: 0x0)
struct FVehicleSeatSpecifyCVarConfigContainer
{
	struct TArray<struct FString> Commands; // 0x0(0x10)
};

// Object: ScriptStruct DFMVehicle.VehicleSeatSpecifyCVarConfigRow
// Size: 0xD8 (Inherited: 0x10)
struct FVehicleSeatSpecifyCVarConfigRow : FDescRowBase
{
	int32_t VehicleId; // 0x10(0x4)
	uint8_t Pad_0x14[0x4]; // 0x14(0x4)
	struct TMap<struct FName, struct FVehicleSeatSpecifyCVarConfigContainer> SeatCVarConfig_Mobile; // 0x18(0x50)
	struct TArray<struct FString> GetOffCommands_Mobile; // 0x68(0x10)
	struct TMap<struct FName, struct FVehicleSeatSpecifyCVarConfigContainer> SeatCVarConfig_HD; // 0x78(0x50)
	struct TArray<struct FString> GetOffCommands_HD; // 0xC8(0x10)
};

// Object: ScriptStruct DFMVehicle.VehicleSkinBrokenPartsConfigRow
// Size: 0x68 (Inherited: 0x10)
struct FVehicleSkinBrokenPartsConfigRow : FDescRowBase
{
	uint64_t SkinId; // 0x10(0x8)
	struct TMap<struct TSoftClassPtr<struct APawn*>, struct TSoftClassPtr<struct APawn*>> BrokenVehiclePartsConfig; // 0x18(0x50)
};

// Object: ScriptStruct DFMVehicle.VehicleSpawnerConfig
// Size: 0x18 (Inherited: 0x0)
struct FVehicleSpawnerConfig
{
	struct TArray<struct FName> Tags; // 0x0(0x10)
	struct ADFMVehicleBase* VehicleTemplate; // 0x10(0x8)
};

// Object: ScriptStruct DFMVehicle.BreakthroughVehicleSpawnerInfoRow
// Size: 0x20 (Inherited: 0x10)
struct FBreakthroughVehicleSpawnerInfoRow : FDescRowBase
{
	struct FName SpawnerID; // 0x10(0x8)
	float VehicleRefreshCD; // 0x18(0x4)
	uint8_t Pad_0x1C[0x4]; // 0x1C(0x4)
};

// Object: ScriptStruct DFMVehicle.VehicleSpawnerInfo
// Size: 0x1C (Inherited: 0x0)
struct FVehicleSpawnerInfo
{
	struct FName SpawnerID; // 0x0(0x8)
	float ConfigVehicleSpawnCD; // 0x8(0x4)
	float CDProgress; // 0xC(0x4)
	uint8_t IsSpawnedAlive : 1; // 0x10(0x1), Mask(0x1)
	uint8_t BitPad_0x10_1 : 7; // 0x10(0x1)
	uint8_t Pad_0x11[0x3]; // 0x11(0x3)
	uint32_t DirtyReason; // 0x14(0x4)
	uint8_t bLocked : 1; // 0x18(0x1), Mask(0x1)
	uint8_t BitPad_0x18_1 : 7; // 0x18(0x1)
	uint8_t Pad_0x19[0x3]; // 0x19(0x3)
};

// Object: ScriptStruct DFMVehicle.VehicleSpawnedWeakList
// Size: 0x10 (Inherited: 0x0)
struct FVehicleSpawnedWeakList
{
	struct TArray<struct TWeakObjectPtr<struct ADFMVehicleBase>> List; // 0x0(0x10)
};

// Object: ScriptStruct DFMVehicle.VehicleSpawnerWeakList
// Size: 0x10 (Inherited: 0x0)
struct FVehicleSpawnerWeakList
{
	struct TArray<struct TWeakObjectPtr<struct AVehicleSpawner>> List; // 0x0(0x10)
};

// Object: ScriptStruct DFMVehicle.VehicleUtilWorldSubsystemTickFunction
// Size: 0x68 (Inherited: 0x60)
struct FVehicleUtilWorldSubsystemTickFunction : FTickFunction
{
	uint8_t Pad_0x60[0x8]; // 0x60(0x8)
};

// Object: Class DFMVehicle.DFMVehicleThermalSmoke
// Size: 0x788 (Inherited: 0x768)
struct ADFMVehicleThermalSmoke : ADFMSkillSmokeActor
{
	float ShieldRadius; // 0x764(0x4)
	struct USphereComponent* Trigger; // 0x768(0x8)
	float CurrentShieldRadius; // 0x770(0x4)
	uint8_t Pad_0x778[0x10]; // 0x778(0x10)


	// Object: Function DFMVehicle.DFMVehicleThermalSmoke.OnTriggerEndOverlapped
	// Flags: [Final|Native|Protected]
	// Offset: 0x140b3c44
	// Params: [ Num(4) Size(0x1C) ]
	void OnTriggerEndOverlapped(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex);

	// Object: Function DFMVehicle.DFMVehicleThermalSmoke.OnTriggerBeginOverlapped
	// Flags: [Final|Native|Protected|HasOutParms]
	// Offset: 0x140b3a4c
	// Params: [ Num(6) Size(0xA8) ]
	void OnTriggerBeginOverlapped(struct UPrimitiveComponent* OverlappedComp, struct AActor* Other, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, uint8_t bFromSweep, const struct FHitResult& SweepResult);

	// Object: Function DFMVehicle.DFMVehicleThermalSmoke.OnRep_CurrentShieldRadius
	// Flags: [Final|Native|Protected]
	// Offset: 0x140b3a38
	// Params: [ Num(0) Size(0x0) ]
	void OnRep_CurrentShieldRadius();
	DEFINE_UE_CLASS_HELPERS(ADFMVehicleThermalSmoke, "DFMVehicleThermalSmoke")

};

// Object: Class DFMVehicle.DFMVehicleBase
// Size: 0x1940 (Inherited: 0x10B0)
struct ADFMVehicleBase : AGPVehicleBase
{
	uint8_t Pad_0x10B0[0xC8]; // 0x10B0(0xC8)
	struct UDFMVehicleHealthComponent* HealthComp; // 0x1178(0x8)
	struct UDFMVehicleCollisionComponent* CollisionComp; // 0x1180(0x8)
	struct UDFMVehicleAssembledComponent* AssembledComp; // 0x1188(0x8)
	struct UDFMVehicleBattlefieldEffectComponent* BattlefieldEffectComponent; // 0x1190(0x8)
	struct UDFMVehicleAnimInteractorComponent* AnimInteractorComp; // 0x1198(0x8)
	struct UDFMVehicleEffectComponent* EffectComp; // 0x11A0(0x8)
	struct UDFMVehicleActingComponent* ActingComponent; // 0x11A8(0x8)
	struct UGPPathFollowComponent* PathFollowComponent; // 0x11B0(0x8)
	struct UDFMVehicleSequenceBindingComponent* SequenceBinding; // 0x11B8(0x8)
	struct UVehicleSignificanceComponent* VehicleSignificance; // 0x11C0(0x8)
	struct UDFMVehicleAudioComponent* AudioComp; // 0x11C8(0x8)
	struct UDFMVehicleMusicComponent* MusicComp; // 0x11D0(0x8)
	struct UDFMVehicleStateControllComponent* StateComp; // 0x11D8(0x8)
	struct UDFMVehiclePhysicsReplicationComponent* PhysicsReplicationComp; // 0x11E0(0x8)
	struct UDFMVehicleWaterMaskComponent* WaterMaskComp; // 0x11E8(0x8)
	struct UGPSharedRepairComponent* SharedRepairComponent; // 0x11F0(0x8)
	struct UDFMVehicleHitEffectComponent* VehicleHitEffectComponent; // 0x11F8(0x8)
	struct UGPOutLineEffectComponent* OutLineEffectComponent; // 0x1200(0x8)
	uint8_t Pad_0x1208[0x18]; // 0x1208(0x18)
	struct UDFMVehicleSkinImplement* SkinImpl; // 0x1220(0x8)
	uint8_t Pad_0x1228[0x10]; // 0x1228(0x10)
	struct TArray<struct FWeaponSeatInfo> WeaponSeatInfos; // 0x1238(0x10)
	struct FVehicleLockedAttribute LockedAttribute; // 0x1248(0x8)
	uint8_t AutoKickWhenRollover : 1; // 0x1250(0x1), Mask(0x1)
	uint8_t BitPad_0x1250_1 : 7; // 0x1250(0x1)
	uint8_t Pad_0x1251[0x7]; // 0x1251(0x7)
	struct UStaticMesh* WheelStaticMesh; // 0x1258(0x8)
	struct UStaticMesh* BrokenWheelStaticMesh; // 0x1260(0x8)
	struct TArray<struct FVehicleAsyncResourceInfo> BeginVehicleAsyncResourceInfos; // 0x1268(0x10)
	struct TArray<struct FVehicleAsyncResourceInfo> GetOnVehicleAsyncResourceInfos; // 0x1278(0x10)
	struct TArray<struct FVehicleAsyncResourceInfo> LocalPlayerGetOnVehicleAsyncResourceInfos; // 0x1288(0x10)
	struct TArray<struct FVehicleAsyncResourceInfo> DamageAsyncResourceInfos; // 0x1298(0x10)
	struct TArray<struct FName> DamageAsyncEffectIds; // 0x12A8(0x10)
	int32_t DefaultCamp; // 0x12B8(0x4)
	float LowHealthPrecent; // 0x12BC(0x4)
	struct TArray<struct FName> CloseSkeletalMeshWithLowCPUNames; // 0x12C0(0x10)
	uint8_t Pad_0x12D0[0x48]; // 0x12D0(0x48)
	float PassengerNoiseMakingInterval; // 0x1318(0x4)
	float PassengerNoiseRadius; // 0x131C(0x4)
	float AutoDriveDuration; // 0x1320(0x4)
	uint8_t Pad_0x1324[0x1]; // 0x1324(0x1)
	uint8_t isLocalFocus : 1; // 0x1325(0x1), Mask(0x1)
	uint8_t BitPad_0x1325_1 : 7; // 0x1325(0x1)
	uint8_t bIsAutoDriving : 1; // 0x1326(0x1), Mask(0x1)
	uint8_t BitPad_0x1326_1 : 7; // 0x1326(0x1)
	uint8_t Pad_0x1327[0x1D]; // 0x1327(0x1D)
	uint8_t bReplicatedHornTooting : 1; // 0x1344(0x1), Mask(0x1)
	uint8_t BitPad_0x1344_1 : 7; // 0x1344(0x1)
	uint8_t Pad_0x1345[0x6B]; // 0x1345(0x6B)
	struct FMulticastInlineDelegate OnVehicleTakeDamageExternalSignature; // 0x13B0(0x10)
	struct AActor* DriverOnVehicle; // 0x13C0(0x8)
	uint8_t bDrawDebugStingerMissleDetectPoint : 1; // 0x13C8(0x1), Mask(0x1)
	uint8_t BitPad_0x13C8_1 : 7; // 0x13C8(0x1)
	uint8_t Pad_0x13C9[0x3]; // 0x13C9(0x3)
	struct FVector DetectRelativeLocation; // 0x13CC(0xC)
	struct TArray<struct FVector> OcclusionDetectPoints; // 0x13D8(0x10)
	struct FVector MarkerRelativeLocation; // 0x13E8(0xC)
	uint8_t bUnderCloaking : 1; // 0x13F4(0x1), Mask(0x1)
	uint8_t BitPad_0x13F4_1 : 7; // 0x13F4(0x1)
	uint8_t Pad_0x13F5[0xB]; // 0x13F5(0xB)
	struct TArray<struct FVehicleLockStateInfo> LockedStateInfos; // 0x1400(0x10)
	struct TArray<struct FVehicleLockInfo> LaserLockStateInfos; // 0x1410(0x10)
	struct TArray<struct FVehicleLockInfoWithSubType> LaserLockStateInfosWithSubType; // 0x1420(0x10)
	struct FMulticastInlineDelegate OnLockStateChanged; // 0x1430(0x10)
	uint8_t Pad_0x1440[0x30]; // 0x1440(0x30)
	EMarkingItemType MarkingItemType; // 0x1470(0x1)
	uint8_t bCanBeMarkedByPlayerSOL : 1; // 0x1471(0x1), Mask(0x1)
	uint8_t BitPad_0x1471_1 : 7; // 0x1471(0x1)
	uint8_t bCanBeMarkedByPlayerMP : 1; // 0x1472(0x1), Mask(0x1)
	uint8_t BitPad_0x1472_1 : 7; // 0x1472(0x1)
	EVehicleMarkerType PlayerMarkingType; // 0x1473(0x1)
	struct FMarkerCampTeamId MarkerCampTeamId; // 0x1474(0x8)
	struct FVector WorldLocationOffset; // 0x147C(0xC)
	float OutLineEffectEndTime; // 0x1488(0x4)
	uint8_t bForceCleanEffect : 1; // 0x148C(0x1), Mask(0x1)
	uint8_t BitPad_0x148C_1 : 7; // 0x148C(0x1)
	uint8_t Pad_0x148D[0x3]; // 0x148D(0x3)
	struct FTimerHandle OutLineEffectTimeHandle; // 0x1490(0x8)
	struct FVehicleOutLineEffectData VehicleOutLineEffectData; // 0x1498(0x8)
	uint8_t Pad_0x14A0[0x54]; // 0x14A0(0x54)
	float RemainTimeOfEMP; // 0x14F4(0x4)
	uint8_t bCachedHasDriver : 1; // 0x14F8(0x1), Mask(0x1)
	uint8_t BitPad_0x14F8_1 : 7; // 0x14F8(0x1)
	uint8_t CanBeDrive : 1; // 0x14F9(0x1), Mask(0x1)
	uint8_t BitPad_0x14F9_1 : 7; // 0x14F9(0x1)
	uint8_t Pad_0x14FA[0x6]; // 0x14FA(0x6)
	struct TArray<struct FVehicleGetOffPointConfigGroup> GetOffPointGroupConfig; // 0x1500(0x10)
	struct TArray<struct FVehicleGetOffPointConfigGroup> GetOffPointConfigGroups_InAir; // 0x1510(0x10)
	float UseAirGetOffPointHeightThreshold; // 0x1520(0x4)
	float GetOffHeightThreshold; // 0x1524(0x4)
	float EnableGetOffHeightThreshold; // 0x1528(0x4)
	uint8_t IsSupplying : 1; // 0x152C(0x1), Mask(0x1)
	uint8_t BitPad_0x152C_1 : 7; // 0x152C(0x1)
	uint8_t Pad_0x152D[0x3]; // 0x152D(0x3)
	float SupplyMaxTime; // 0x1530(0x4)
	float CurrentSupplyTime; // 0x1534(0x4)
	uint8_t Pad_0x1538[0x60]; // 0x1538(0x60)
	float SupplyCDEndTime; // 0x1598(0x4)
	int32_t DSNetVehicleID; // 0x159C(0x4)
	uint8_t bCanBeLockByStingerMissile : 1; // 0x15A0(0x1), Mask(0x1)
	uint8_t BitPad_0x15A0_1 : 7; // 0x15A0(0x1)
	uint8_t Pad_0x15A1[0x7]; // 0x15A1(0x7)
	struct FTimerHandle FireLockingTimer; // 0x15A8(0x8)
	float StingMissleFireLockingTime; // 0x15B0(0x4)
	uint8_t Pad_0x15B4[0x4]; // 0x15B4(0x4)
	struct FPropertyReplicationHandler PropertyReplicationHandler; // 0x15B8(0x10)
	uint8_t Pad_0x15C8[0x8]; // 0x15C8(0x8)
	struct ULaserPointerLogic* LaserPointerLogicComp; // 0x15D0(0x8)
	int32_t threatValue; // 0x15D8(0x4)
	uint8_t Pad_0x15DC[0x4]; // 0x15DC(0x4)
	struct FDateTime SpawnDateTime; // 0x15E0(0x8)
	struct TArray<struct FDateTime> BecomeHighThreatVehicleTimeArray; // 0x15E8(0x10)
	struct TArray<struct FDateTime> HighThreatValueClearTimeArray; // 0x15F8(0x10)
	uint8_t Pad_0x1608[0x10]; // 0x1608(0x10)
	struct UDFMPhysxMultiBaseShapeComponent* SceneCollisionComponent; // 0x1618(0x8)
	uint8_t Pad_0x1620[0x70]; // 0x1620(0x70)
	uint8_t bEnableTeleport : 1; // 0x1690(0x1), Mask(0x1)
	uint8_t BitPad_0x1690_1 : 7; // 0x1690(0x1)
	uint8_t Pad_0x1691[0x3]; // 0x1691(0x3)
	float TeleportLockTime; // 0x1694(0x4)
	float TeleportCDTime; // 0x1698(0x4)
	float TeleportMaxDist; // 0x169C(0x4)
	float TeleportMinDist; // 0x16A0(0x4)
	float TeleportPreLocationMaxCDTime; // 0x16A4(0x4)
	float TeleportPreLocationMinVelocity; // 0x16A8(0x4)
	float TeleportPreLocationMinCDTime; // 0x16AC(0x4)
	float TeleportMaxRotPitch; // 0x16B0(0x4)
	float TeleportMaxRotRoll; // 0x16B4(0x4)
	int32_t TeleportPreTransformArraySize; // 0x16B8(0x4)
	uint8_t Pad_0x16BC[0x5A]; // 0x16BC(0x5A)
	uint8_t bEnableSMCTickAfterInitializeMeshTickStatus : 1; // 0x1716(0x1), Mask(0x1)
	uint8_t BitPad_0x1716_1 : 7; // 0x1716(0x1)
	uint8_t Pad_0x1717[0x1]; // 0x1717(0x1)
	float AssistAimSphereRadius; // 0x1718(0x4)
	uint8_t Pad_0x171C[0x4]; // 0x171C(0x4)
	struct UDFMAsyncPhysMultiShapeComponent* AsyncMultiShapeComponent; // 0x1720(0x8)
	uint8_t Pad_0x1728[0x10]; // 0x1728(0x10)
	struct FGetOffInheritVehicleVelocityConfig GetOffInheritVehicleVelocityConfig; // 0x1738(0x1F0)
	struct UCameraComponent* CameraComponent; // 0x1928(0x8)
	uint8_t Pad_0x1930[0x10]; // 0x1930(0x10)


	// Object: Function DFMVehicle.DFMVehicleBase.VehicleReset
	// Flags: [Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable]
	// Offset: 0x140a13e8
	// Params: [ Num(1) Size(0x1) ]
	void VehicleReset(EVehicleResetType Flag);

	// Object: Function DFMVehicle.DFMVehicleBase.UpdateVehicleOutLineEffect
	// Flags: [Final|Native|Public]
	// Offset: 0x140a13d4
	// Params: [ Num(0) Size(0x0) ]
	void UpdateVehicleOutLineEffect();

	// Object: Function DFMVehicle.DFMVehicleBase.TryDetachVehicle
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0x140a13b8
	// Params: [ Num(0) Size(0x0) ]
	void TryDetachVehicle();

	// Object: Function DFMVehicle.DFMVehicleBase.TryControlVehicle
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0x140a130c
	// Params: [ Num(1) Size(0x8) ]
	void TryControlVehicle(struct AActor* NewOwner);

	// Object: Function DFMVehicle.DFMVehicleBase.TeleportToLegalTransformFail
	// Flags: [Net|Native|Event|Public|NetClient]
	// Offset: 0x140a1260
	// Params: [ Num(1) Size(0x4) ]
	void TeleportToLegalTransformFail(int32_t FailReason);

	// Object: Function DFMVehicle.DFMVehicleBase.TeleportToLegalTransform
	// Flags: [Net|Native|Event|Public|NetServer]
	// Offset: 0x140a1244
	// Params: [ Num(0) Size(0x0) ]
	void TeleportToLegalTransform();

	// Object: Function DFMVehicle.DFMVehicleBase.StopSupply
	// Flags: [Final|Native|Public]
	// Offset: 0x140a1164
	// Params: [ Num(2) Size(0x10) ]
	void StopSupply(float CoolDownTime, struct AActor* AmmoSupplyStation);

	// Object: Function DFMVehicle.DFMVehicleBase.SetVehicleOutLineEffect
	// Flags: [Final|Native|Public]
	// Offset: 0x140a1030
	// Params: [ Num(4) Size(0xD) ]
	uint8_t SetVehicleOutLineEffect(uint8_t Active, EOutLineEffectType OutLineEffectType, int32_t OutLineValue);

	// Object: Function DFMVehicle.DFMVehicleBase.SetVehicleHiddenAll
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0x140a0f38
	// Params: [ Num(2) Size(0x2) ]
	void SetVehicleHiddenAll(uint8_t bHide, uint8_t bPropagateToPassenger);

	// Object: Function DFMVehicle.DFMVehicleBase.SetRunningState
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x140a0e8c
	// Params: [ Num(1) Size(0x1) ]
	void SetRunningState(uint8_t IsRunning);

	// Object: Function DFMVehicle.DFMVehicleBase.SetLaserLockingState
	// Flags: [Final|Native|Public|HasOutParms]
	// Offset: 0x140a0d44
	// Params: [ Num(3) Size(0x3D) ]
	void SetLaserLockingState(int32_t CampId, struct FVehicleLockInfo& LockInfo, ELockerSubType InSubType);

	// Object: Function DFMVehicle.DFMVehicleBase.ServerBroadcastVehicleDied
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x140a0d30
	// Params: [ Num(0) Size(0x0) ]
	void ServerBroadcastVehicleDied();

	// Object: Function DFMVehicle.DFMVehicleBase.SendLegalTransform
	// Flags: [Net|Native|Event|Public|NetServer|HasDefaults]
	// Offset: 0x140a0c0c
	// Params: [ Num(3) Size(0x1C) ]
	void SendLegalTransform(struct FVector Position, struct FRotator Rotation, float LinearVelocity);

	// Object: Function DFMVehicle.DFMVehicleBase.SendInitLegalTransform
	// Flags: [Net|Native|Event|Public|NetServer|HasDefaults]
	// Offset: 0x140a0b24
	// Params: [ Num(2) Size(0x18) ]
	void SendInitLegalTransform(struct FVector Position, struct FRotator Rotation);

	// Object: Function DFMVehicle.DFMVehicleBase.RecordThreatValue
	// Flags: [Final|Native|Public]
	// Offset: 0x140a0a80
	// Params: [ Num(1) Size(0x4) ]
	void RecordThreatValue(int32_t InThreatValue);

	// Object: Function DFMVehicle.DFMVehicleBase.RecordSpawnDateTime
	// Flags: [Final|Native|Public]
	// Offset: 0x140a0a6c
	// Params: [ Num(0) Size(0x0) ]
	void RecordSpawnDateTime();

	// Object: Function DFMVehicle.DFMVehicleBase.RecordClearHighThreatValueDateTime
	// Flags: [Final|Native|Public]
	// Offset: 0x140a0a58
	// Params: [ Num(0) Size(0x0) ]
	void RecordClearHighThreatValueDateTime();

	// Object: Function DFMVehicle.DFMVehicleBase.RecordBecomeHighThreatVehicleDateTime
	// Flags: [Final|Native|Public]
	// Offset: 0x140a0a44
	// Params: [ Num(0) Size(0x0) ]
	void RecordBecomeHighThreatVehicleDateTime();

	// Object: Function DFMVehicle.DFMVehicleBase.OnVehicleRollover
	// Flags: [Final|Native|Public]
	// Offset: 0x140a0a30
	// Params: [ Num(0) Size(0x0) ]
	void OnVehicleRollover();

	// Object: Function DFMVehicle.DFMVehicleBase.OnVehicleResetBlueprint
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(1) Size(0x1) ]
	void OnVehicleResetBlueprint(EVehicleResetType Flag);

	// Object: Function DFMVehicle.DFMVehicleBase.OnVehicleReset
	// Flags: [Net|NetReliableNative|Event|NetMulticast|Public]
	// Offset: 0x140a0984
	// Params: [ Num(1) Size(0x1) ]
	void OnVehicleReset(EVehicleResetType Flag);

	// Object: Function DFMVehicle.DFMVehicleBase.OnVehicleHit
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults]
	// Offset: 0xf4c7b9c
	// Params: [ Num(4) Size(0xA4) ]
	void OnVehicleHit(struct AActor* SelfActor, struct AActor* OtherActor, struct FVector NormalImpulse, const struct FHitResult& Hit);

	// Object: Function DFMVehicle.DFMVehicleBase.OnVehicleDestruction
	// Flags: [Final|Native|Public]
	// Offset: 0x140a08a4
	// Params: [ Num(2) Size(0xC) ]
	void OnVehicleDestruction(struct FName BrokenPartName, int32_t BodyFunc);

	// Object: Function DFMVehicle.DFMVehicleBase.OnVehicleDead
	// Flags: [Native|Public]
	// Offset: 0x140a0888
	// Params: [ Num(0) Size(0x0) ]
	void OnVehicleDead();

	// Object: Function DFMVehicle.DFMVehicleBase.OnRep_SupplyCDEndTime
	// Flags: [Final|Native|Public]
	// Offset: 0x140a0874
	// Params: [ Num(0) Size(0x0) ]
	void OnRep_SupplyCDEndTime();

	// Object: Function DFMVehicle.DFMVehicleBase.OnRep_MarkerCampTeamId
	// Flags: [Final|Native|Public]
	// Offset: 0xf91d0c8
	// Params: [ Num(0) Size(0x0) ]
	void OnRep_MarkerCampTeamId();

	// Object: Function DFMVehicle.DFMVehicleBase.OnRep_LockedStateInfos
	// Flags: [Final|Native|Public]
	// Offset: 0x140a0860
	// Params: [ Num(0) Size(0x0) ]
	void OnRep_LockedStateInfos();

	// Object: Function DFMVehicle.DFMVehicleBase.OnRep_LaserLockStateInfosWithSubType
	// Flags: [Final|Native|Public]
	// Offset: 0x140a084c
	// Params: [ Num(0) Size(0x0) ]
	void OnRep_LaserLockStateInfosWithSubType();

	// Object: Function DFMVehicle.DFMVehicleBase.OnRep_LaserLockedStateInfo
	// Flags: [Final|Native|Public]
	// Offset: 0x140a0838
	// Params: [ Num(0) Size(0x0) ]
	void OnRep_LaserLockedStateInfo();

	// Object: Function DFMVehicle.DFMVehicleBase.OnRep_IsSupplying
	// Flags: [Final|Native|Public]
	// Offset: 0xf8b7c70
	// Params: [ Num(0) Size(0x0) ]
	void OnRep_IsSupplying();

	// Object: Function DFMVehicle.DFMVehicleBase.OnCharacterImpactCallback
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0xf9c1894
	// Params: [ Num(6) Size(0xA8) ]
	void OnCharacterImpactCallback(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, uint8_t bFromSweep, const struct FHitResult& SweepResult);

	// Object: Function DFMVehicle.DFMVehicleBase.OnBreakableItemBaseBreakPostUpdate
	// Flags: [Final|Native|Public]
	// Offset: 0x140a0794
	// Params: [ Num(1) Size(0x8) ]
	void OnBreakableItemBaseBreakPostUpdate(struct AActor* InBreakableItem);

	// Object: Function DFMVehicle.DFMVehicleBase.MulticastSetOutLineEffectData
	// Flags: [Net|NetReliableNative|Event|NetMulticast|Public]
	// Offset: 0x140a066c
	// Params: [ Num(3) Size(0x9) ]
	void MulticastSetOutLineEffectData(int32_t OutLineBitArry, int32_t ProxSensorMark, uint8_t bForceClean);

	// Object: Function DFMVehicle.DFMVehicleBase.KillVehicle
	// Flags: [Final|Native|Public]
	// Offset: 0x140a0658
	// Params: [ Num(0) Size(0x0) ]
	void KillVehicle();

	// Object: Function DFMVehicle.DFMVehicleBase.IsVehicleInited
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x140a0620
	// Params: [ Num(1) Size(0x1) ]
	uint8_t IsVehicleInited();

	// Object: Function DFMVehicle.DFMVehicleBase.IsRunningState
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x140a05e8
	// Params: [ Num(1) Size(0x1) ]
	uint8_t IsRunningState();

	// Object: Function DFMVehicle.DFMVehicleBase.IsPlayerVehicle
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x140a05a4
	// Params: [ Num(1) Size(0x1) ]
	uint8_t IsPlayerVehicle();

	// Object: Function DFMVehicle.DFMVehicleBase.IsPawnTeammate
	// Flags: [Native|Event|Public|BlueprintEvent]
	// Offset: 0x140a04ec
	// Params: [ Num(2) Size(0x9) ]
	uint8_t IsPawnTeammate(struct APawn* CHARACTER);

	// Object: Function DFMVehicle.DFMVehicleBase.GMResetVehicle
	// Flags: [Net|Native|Event|Public|NetServer|BlueprintCallable]
	// Offset: 0x140a04d0
	// Params: [ Num(0) Size(0x0) ]
	void GMResetVehicle();

	// Object: Function DFMVehicle.DFMVehicleBase.GMAddDamageToComponent
	// Flags: [Net|Native|Event|Public|NetServer|BlueprintCallable]
	// Offset: 0x140a03e8
	// Params: [ Num(2) Size(0xC) ]
	void GMAddDamageToComponent(struct FName ComponentName, float Damage);

	// Object: Function DFMVehicle.DFMVehicleBase.GetVehicleGun
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x140a03b4
	// Params: [ Num(1) Size(0x8) ]
	struct AWeaponBase* GetVehicleGun();

	// Object: Function DFMVehicle.DFMVehicleBase.GetSpawnDateTimeString
	// Flags: [Final|Native|Public]
	// Offset: 0x140a031c
	// Params: [ Num(1) Size(0x10) ]
	struct FString GetSpawnDateTimeString();

	// Object: Function DFMVehicle.DFMVehicleBase.GetOffWhenDeath
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x140a026c
	// Params: [ Num(2) Size(0x9) ]
	uint8_t GetOffWhenDeath(struct AActor* Actor);

	// Object: Function DFMVehicle.DFMVehicleBase.GetLastVelocity
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x140a0234
	// Params: [ Num(1) Size(0xC) ]
	struct FVector GetLastVelocity();

	// Object: Function DFMVehicle.DFMVehicleBase.GetDropDownPointTest
	// Flags: [Native|Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent]
	// Offset: 0x140a01fc
	// Params: [ Num(1) Size(0xC) ]
	struct FVector GetDropDownPointTest();

	// Object: Function DFMVehicle.DFMVehicleBase.GetDFScenceWeaponPawn
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x140a01c8
	// Params: [ Num(1) Size(0x8) ]
	struct ADFScenceWeaponPawn* GetDFScenceWeaponPawn();

	// Object: Function DFMVehicle.DFMVehicleBase.GetClearHighThreatValueDateTimeString
	// Flags: [Final|Native|Public]
	// Offset: 0x140a0130
	// Params: [ Num(1) Size(0x10) ]
	struct FString GetClearHighThreatValueDateTimeString();

	// Object: Function DFMVehicle.DFMVehicleBase.GetBecomeHighThreatVehicleDateTimeString
	// Flags: [Final|Native|Public]
	// Offset: 0x140a0098
	// Params: [ Num(1) Size(0x10) ]
	struct FString GetBecomeHighThreatVehicleDateTimeString();

	// Object: Function DFMVehicle.DFMVehicleBase.EndVehicleOutLineEffect
	// Flags: [Final|Native|Public]
	// Offset: 0x1409fff4
	// Params: [ Num(1) Size(0x4) ]
	void EndVehicleOutLineEffect(EOutLineEffectType OutLineEffectType);

	// Object: Function DFMVehicle.DFMVehicleBase.DynamicBindCollisionComponent
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x1409ff14
	// Params: [ Num(3) Size(0x18) ]
	static struct USphereComponent* DynamicBindCollisionComponent(struct ADFMVehicleBase* Vehicle, float CollisionRadius);

	// Object: Function DFMVehicle.DFMVehicleBase.CreateEffect
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x1409fd7c
	// Params: [ Num(5) Size(0x21) ]
	void CreateEffect(struct FName SocketName, struct UParticleSystem* Effect, struct UParticleSystemGroup* EffectGroup, struct UGPAudioEventAsset* Sound, uint8_t Active);

	// Object: Function DFMVehicle.DFMVehicleBase.ClientShowSupplyTip
	// Flags: [Net|NetReliableNative|Event|Public|NetClient]
	// Offset: 0x1409fcd0
	// Params: [ Num(1) Size(0x4) ]
	void ClientShowSupplyTip(float SupplyTime);

	// Object: Function DFMVehicle.DFMVehicleBase.ClientReportPositionContainsNan
	// Flags: [Net|NetReliableNative|Event|Public|NetClient]
	// Offset: 0x1409fcb4
	// Params: [ Num(0) Size(0x0) ]
	void ClientReportPositionContainsNan();

	// Object: Function DFMVehicle.DFMVehicleBase.ClientApplyHitImpluse
	// Flags: [Net|NetReliableNative|Event|Public|HasDefaults|NetClient]
	// Offset: 0x1409fb90
	// Params: [ Num(3) Size(0x1C) ]
	void ClientApplyHitImpluse(struct FVector LocalPos, struct FVector LocalDir, float size);

	// Object: Function DFMVehicle.DFMVehicleBase.ClearVehicleOutLineEffect
	// Flags: [Final|Native|Public]
	// Offset: 0x1409fb7c
	// Params: [ Num(0) Size(0x0) ]
	void ClearVehicleOutLineEffect();

	// Object: Function DFMVehicle.DFMVehicleBase.ClearAllInput
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x1409fb68
	// Params: [ Num(0) Size(0x0) ]
	void ClearAllInput();

	// Object: Function DFMVehicle.DFMVehicleBase.CheckVehicleCollision
	// Flags: [Final|Native|Public]
	// Offset: 0x1409fb54
	// Params: [ Num(0) Size(0x0) ]
	void CheckVehicleCollision();

	// Object: Function DFMVehicle.DFMVehicleBase.CheckSeatTypeExist
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x1409faa4
	// Params: [ Num(2) Size(0x2) ]
	uint8_t CheckSeatTypeExist(EVehicleSeatType SeatType);

	// Object: Function DFMVehicle.DFMVehicleBase.ChangeDamagedMesh
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x1409fa00
	// Params: [ Num(1) Size(0x8) ]
	void ChangeDamagedMesh(struct USkeletalMesh* NewMesh);
	DEFINE_UE_CLASS_HELPERS(ADFMVehicleBase, "DFMVehicleBase")

};

// Object: Class DFMVehicle.DFMWheeledVehicle
// Size: 0x1D40 (Inherited: 0x1940)
struct ADFMWheeledVehicle : ADFMVehicleBase
{
	struct USkeletalMeshComponent* Mesh; // 0x1938(0x8)
	struct UWheeledVehicleMovementComponent* VehicleMovement; // 0x1940(0x8)
	struct UDFMBoatMovementComponent* BoatMovement; // 0x1948(0x8)
	struct TSoftObjectPtr<UStaticMesh> WeldedWheeledMesh; // 0x1950(0x28)
	struct UStaticMeshComponent* WeldedWheeledMeshComponent; // 0x1978(0x8)
	struct UDFMWheeledInstancedStaticMeshComponent* WheeledInstancedStaticMeshComponent; // 0x1980(0x8)
	struct FAmphibiousVehicleSetting AmphibiousSetting; // 0x1988(0xC)
	struct FSuspensionConfig DefaultSuspensionConfig; // 0x1998(0x278)
	struct TArray<struct FSuspensionConfig> SuspensionConfigs; // 0x1C10(0x10)
	struct TArray<int32_t> SuspensionConfigIndex; // 0x1C20(0x10)
	uint8_t Pad_0x1C34[0xC]; // 0x1C34(0xC)
	struct TArray<float> TireSteerAngleScalars; // 0x1C40(0x10)
	uint8_t bChangeLatStiffWhenStatic : 1; // 0x1C50(0x1), Mask(0x1)
	uint8_t BitPad_0x1C50_1 : 7; // 0x1C50(0x1)
	uint8_t Pad_0x1C51[0x3]; // 0x1C51(0x3)
	float StaticLatStiff; // 0x1C54(0x4)
	struct TArray<float> NonStaticLatStiffArray; // 0x1C58(0x10)
	uint8_t bEnableSuspDirLerp : 1; // 0x1C68(0x1), Mask(0x1)
	uint8_t BitPad_0x1C68_1 : 7; // 0x1C68(0x1)
	uint8_t Pad_0x1C69[0x3]; // 0x1C69(0x3)
	float SuspLerpConstSpeed; // 0x1C6C(0x4)
	struct FRuntimeFloatCurve SuspensionDampingCurve; // 0x1C70(0xA0)
	struct TArray<struct UStaticMeshComponent*> WheelMeshComponents; // 0x1D10(0x10)
	uint8_t Pad_0x1D20[0x4]; // 0x1D20(0x4)
	float FakeWheelHeightThreshold; // 0x1D24(0x4)
	uint8_t Pad_0x1D28[0x4]; // 0x1D28(0x4)
	uint8_t bShoudPrintTireInvalidFrictionError : 1; // 0x1D2C(0x1), Mask(0x1)
	uint8_t BitPad_0x1D2C_1 : 7; // 0x1D2C(0x1)
	uint8_t Pad_0x1D2D[0x13]; // 0x1D2D(0x13)
	DEFINE_UE_CLASS_HELPERS(ADFMWheeledVehicle, "DFMWheeledVehicle")

};

// Object: Class DFMVehicle.DFMTank
// Size: 0x1E40 (Inherited: 0x1D40)
struct ADFMTank : ADFMWheeledVehicle
{
	struct FQuat CannonDesiredOrientation; // 0x1D40(0x10)
	struct FQuat GunDesiredOrientation; // 0x1D50(0x10)
	float TowerTurnSpeed; // 0x1D60(0x4)
	float CannonTurnSpeed; // 0x1D64(0x4)
	float GunTurnSpeed; // 0x1D68(0x4)
	uint8_t bShowWheelsInViewPort : 1; // 0x1D6C(0x1), Mask(0x1)
	uint8_t BitPad_0x1D6C_1 : 7; // 0x1D6C(0x1)
	uint8_t Pad_0x1D6D[0x3]; // 0x1D6D(0x3)
	struct TArray<struct UStaticMeshComponent*> ShowWheels; // 0x1D70(0x10)
	struct UInstancedStaticMeshComponent* TrackMesh; // 0x1D80(0x8)
	struct UDFMVehicleTrackSplineComponent* RightTrackSpline; // 0x1D88(0x8)
	struct UDFMVehicleTrackSplineComponent* LeftTrackSpline; // 0x1D90(0x8)
	struct UDFMVehicleDirectionSplineComponent* LeftDirectionSpline; // 0x1D98(0x8)
	struct UDFMVehicleDirectionSplineComponent* RightDirectionSpline; // 0x1DA0(0x8)
	struct TMap<struct FName, struct FRotator> CurrentBoneRelRotatorMap; // 0x1DA8(0x50)
	struct FVector CannonForcePos; // 0x1DF8(0xC)
	float CannonVelocityValue; // 0x1E04(0x4)
	float CannonAngularVelocityValue; // 0x1E08(0x4)
	uint8_t Pad_0x1E0C[0x4]; // 0x1E0C(0x4)
	struct TArray<struct UActorComponent*> MeshComponents; // 0x1E10(0x10)
	uint8_t Pad_0x1E20[0x20]; // 0x1E20(0x20)


	// Object: Function DFMVehicle.DFMTank.SetBoneRelRotatorMap
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x14094a0c
	// Params: [ Num(2) Size(0x14) ]
	void SetBoneRelRotatorMap(struct FName BoneName, struct FRotator BoneRotator);

	// Object: Function DFMVehicle.DFMTank.GetSocketPointTrans
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable]
	// Offset: 0x140948a4
	// Params: [ Num(4) Size(0x42) ]
	uint8_t GetSocketPointTrans(struct FName FireSocketName, struct FTransform& FirePointTrans, ERelativeTransformSpace RelativeTransformSpace);
	DEFINE_UE_CLASS_HELPERS(ADFMTank, "DFMTank")

};

// Object: Class DFMVehicle.AIHelicopterWeaponInterface
// Size: 0x28 (Inherited: 0x28)
struct IAIHelicopterWeaponInterface : IInterface
{

	// Object: Function DFMVehicle.AIHelicopterWeaponInterface.UpdateDir
	// Flags: [Native|Public|HasDefaults]
	// Offset: 0x1407f69c
	// Params: [ Num(2) Size(0x18) ]
	void UpdateDir(struct FVector Dir, struct AActor* LockTarget);

	// Object: Function DFMVehicle.AIHelicopterWeaponInterface.SetFire
	// Flags: [Native|Public]
	// Offset: 0x1407f5ac
	// Params: [ Num(2) Size(0x8) ]
	void SetFire(uint8_t bFire, float Duration);

	// Object: Function DFMVehicle.AIHelicopterWeaponInterface.SetAttackTargets
	// Flags: [Native|Public]
	// Offset: 0x1407f4c8
	// Params: [ Num(2) Size(0x10) ]
	void SetAttackTargets(struct AActor* DamageMaker, struct AActor* DamageTaker);
	DEFINE_UE_CLASS_HELPERS(IAIHelicopterWeaponInterface, "AIHelicopterWeaponInterface")

};

// Object: Class DFMVehicle.AITankAimTargetComponent
// Size: 0x130 (Inherited: 0xF8)
struct UAITankAimTargetComponent : UActorComponent
{
	struct ADFMCharacter* CurrentGunAimTarget; // 0xF8(0x8)
	struct ADFMCharacter* CurrentCanonAimTarget; // 0x100(0x8)
	uint8_t EnableFindAimTarget : 1; // 0x108(0x1), Mask(0x1)
	uint8_t BitPad_0x108_1 : 7; // 0x108(0x1)
	uint8_t Pad_0x109[0x3]; // 0x109(0x3)
	float CanonMinHitDistance; // 0x10C(0x4)
	float ChangeAimTargetStep; // 0x110(0x4)
	uint8_t Pad_0x114[0x4]; // 0x114(0x4)
	struct ADFMAITank* DFMAITank; // 0x118(0x8)
	uint8_t Pad_0x120[0x8]; // 0x120(0x8)
	struct ADFMAIController* DFMAIController; // 0x128(0x8)


	// Object: Function DFMVehicle.AITankAimTargetComponent.ResetCannonDesireRotation
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x1407f84c
	// Params: [ Num(0) Size(0x0) ]
	void ResetCannonDesireRotation();
	DEFINE_UE_CLASS_HELPERS(UAITankAimTargetComponent, "AITankAimTargetComponent")

};

// Object: Class DFMVehicle.AITankPhaseComponent
// Size: 0x158 (Inherited: 0xF8)
struct UAITankPhaseComponent : UActorComponent
{
	EAITankPhase AITankPhase; // 0xF8(0x1)
	uint8_t Pad_0xF9[0x7]; // 0xF9(0x7)
	struct TMap<EAITankPhase, float> AITankPhaseTotalTakeHitCountMap; // 0x100(0x50)
	float AITankTotalHP; // 0x150(0x4)
	float HPPercent; // 0x154(0x4)


	// Object: Function DFMVehicle.AITankPhaseComponent.OnTakeDamage
	// Flags: [Final|Native|Public|HasOutParms]
	// Offset: 0x1407fa80
	// Params: [ Num(1) Size(0x8A0) ]
	void OnTakeDamage(const struct FDamageResultInfo& DamageResult);

	// Object: Function DFMVehicle.AITankPhaseComponent.OnRep_HPPercentChanged
	// Flags: [Final|Native|Public]
	// Offset: 0x1407fa6c
	// Params: [ Num(0) Size(0x0) ]
	void OnRep_HPPercentChanged();

	// Object: Function DFMVehicle.AITankPhaseComponent.OnRep_AITankPhase
	// Flags: [Final|Native|Public]
	// Offset: 0x1407fa58
	// Params: [ Num(0) Size(0x0) ]
	void OnRep_AITankPhase();

	// Object: Function DFMVehicle.AITankPhaseComponent.GetHPPercent
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x1407fa3c
	// Params: [ Num(1) Size(0x4) ]
	float GetHPPercent();

	// Object: Function DFMVehicle.AITankPhaseComponent.DamageTakerModifyDamage
	// Flags: [Final|Native|Public|HasOutParms]
	// Offset: 0x1407f8dc
	// Params: [ Num(2) Size(0xC80) ]
	void DamageTakerModifyDamage(const struct FDamageSourceInfo& SourceInfo, struct FDamageResultInfo& DamageResult);
	DEFINE_UE_CLASS_HELPERS(UAITankPhaseComponent, "AITankPhaseComponent")

};

// Object: Class DFMVehicle.BreakthroughVehicleSpawnerDataTableManager
// Size: 0x40 (Inherited: 0x30)
struct UBreakthroughVehicleSpawnerDataTableManager : UDataTableSystemManagerBase
{
	uint8_t Pad_0x30[0x10]; // 0x30(0x10)


	// Object: Function DFMVehicle.BreakthroughVehicleSpawnerDataTableManager.GetBreakthroughVehicleSpawnerDataRow
	// Flags: [Final|Native|Public|HasOutParms]
	// Offset: 0x1407fb48
	// Params: [ Num(3) Size(0x68) ]
	void GetBreakthroughVehicleSpawnerDataRow(int32_t InMapID, int32_t InLayoutId, struct FBreakthroughVehicleSpawnerDataRow& OutBreakthroughVehicleSpawnerDataRow);
	DEFINE_UE_CLASS_HELPERS(UBreakthroughVehicleSpawnerDataTableManager, "BreakthroughVehicleSpawnerDataTableManager")

};

// Object: Class DFMVehicle.BTTask_FollowSpline
// Size: 0xA8 (Inherited: 0x78)
struct UBTTask_FollowSpline : UGPBTTaskBase
{
	struct FBlackboardKeySelector SplineBBKey; // 0x78(0x28)
	float CustomAcceptableRadius; // 0xA0(0x4)
	uint8_t EndlessLoopingPath : 1; // 0xA4(0x1), Mask(0x1)
	uint8_t BitPad_0xA4_1 : 7; // 0xA4(0x1)
	uint8_t NoComebackInOpenedSpline : 1; // 0xA5(0x1), Mask(0x1)
	uint8_t BitPad_0xA5_1 : 7; // 0xA5(0x1)
	uint8_t FoundNearestWaypoint : 1; // 0xA6(0x1), Mask(0x1)
	uint8_t BitPad_0xA6_1 : 7; // 0xA6(0x1)
	uint8_t AutoReverse : 1; // 0xA7(0x1), Mask(0x1)
	uint8_t BitPad_0xA7_1 : 7; // 0xA7(0x1)
	DEFINE_UE_CLASS_HELPERS(UBTTask_FollowSpline, "BTTask_FollowSpline")

};

// Object: Class DFMVehicle.BTTask_MoveStraight
// Size: 0xA8 (Inherited: 0x78)
struct UBTTask_MoveStraight : UGPBTTaskBase
{
	struct FBlackboardKeySelector GoalKey; // 0x78(0x28)
	float CustomAcceptableRadius; // 0xA0(0x4)
	uint8_t Pad_0xA4[0x4]; // 0xA4(0x4)
	DEFINE_UE_CLASS_HELPERS(UBTTask_MoveStraight, "BTTask_MoveStraight")

};

// Object: Class DFMVehicle.BTTask_VehicleMoveTo
// Size: 0xE8 (Inherited: 0x78)
struct UBTTask_VehicleMoveTo : UGPBTTaskBase
{
	struct FBlackboardKeySelector DramaAreaBBKey; // 0x78(0x28)
	struct FBlackboardKeySelector TeamIDBBKey; // 0xA0(0x28)
	float AverageSpeed; // 0xC8(0x4)
	float SpeedMinScale; // 0xCC(0x4)
	float SpeedMaxScale; // 0xD0(0x4)
	float CustomAcceptableRadius; // 0xD4(0x4)
	float EnemyInterruptRadius; // 0xD8(0x4)
	uint8_t Pad_0xDC[0xC]; // 0xDC(0xC)
	DEFINE_UE_CLASS_HELPERS(UBTTask_VehicleMoveTo, "BTTask_VehicleMoveTo")

};

// Object: Class DFMVehicle.ConquestVehicleSpawnerDataTableManager
// Size: 0x158 (Inherited: 0x30)
struct UConquestVehicleSpawnerDataTableManager : UDataTableSystemManagerBase
{
	uint8_t Pad_0x30[0x128]; // 0x30(0x128)


	// Object: Function DFMVehicle.ConquestVehicleSpawnerDataTableManager.GetConquestVehicleSpawnerDataRow
	// Flags: [Final|Native|Public|HasOutParms]
	// Offset: 0x1407fd20
	// Params: [ Num(2) Size(0x120) ]
	void GetConquestVehicleSpawnerDataRow(int32_t InMapID, struct FConquestVehicleSpawnerDataRow& OutConquestVehicleSpawnerDataRow);
	DEFINE_UE_CLASS_HELPERS(UConquestVehicleSpawnerDataTableManager, "ConquestVehicleSpawnerDataTableManager")

};

// Object: Class DFMVehicle.DFTransformAnimationController
// Size: 0x30 (Inherited: 0x28)
struct UDFTransformAnimationController : UObject
{
	struct UDFTransformAnimationPlayer* AnimationPlayer; // 0x28(0x8)
	DEFINE_UE_CLASS_HELPERS(UDFTransformAnimationController, "DFTransformAnimationController")

};

// Object: Class DFMVehicle.DFAmphibiousVehicleAnimationController
// Size: 0x48 (Inherited: 0x30)
struct UDFAmphibiousVehicleAnimationController : UDFTransformAnimationController
{
	float InWaterStateChangeInterval; // 0x30(0x4)
	float InWaterBuoyancyRatioThreshold; // 0x34(0x4)
	struct ADFMWheeledVehicle* OwnerVehicle; // 0x38(0x8)
	uint8_t Pad_0x40[0x8]; // 0x40(0x8)
	DEFINE_UE_CLASS_HELPERS(UDFAmphibiousVehicleAnimationController, "DFAmphibiousVehicleAnimationController")

};

// Object: Class DFMVehicle.DFVehicleAdvancedPhysicsComponentBase
// Size: 0x138 (Inherited: 0xF8)
struct UDFVehicleAdvancedPhysicsComponentBase : UActorComponent
{
	struct FFallingBalanceConfig FallingBalanceConfig; // 0xF8(0x28)
	struct FContactRestitutionConfig ContactRestitutionConfig; // 0x120(0x8)
	uint8_t Pad_0x128[0x10]; // 0x128(0x10)
	DEFINE_UE_CLASS_HELPERS(UDFVehicleAdvancedPhysicsComponentBase, "DFVehicleAdvancedPhysicsComponentBase")

};

// Object: Class DFMVehicle.DFBoatAdvancedPhysicsComponent
// Size: 0x288 (Inherited: 0x138)
struct UDFBoatAdvancedPhysicsComponent : UDFVehicleAdvancedPhysicsComponentBase
{
	struct FRuntimeFloatCurve StaticFrictionCurve; // 0x138(0xA0)
	struct FRuntimeFloatCurve DynamicFrictionCurve; // 0x1D8(0xA0)
	struct FBoatAutoBalanceConfig AutoBalanceConfig; // 0x278(0xC)
	uint8_t Pad_0x284[0x4]; // 0x284(0x4)
	DEFINE_UE_CLASS_HELPERS(UDFBoatAdvancedPhysicsComponent, "DFBoatAdvancedPhysicsComponent")

};

// Object: Class DFMVehicle.DFInteractableComponent_Vehicle
// Size: 0x6A0 (Inherited: 0x6A0)
struct UDFInteractableComponent_Vehicle : UDFInteractableComponentBase
{	DEFINE_UE_CLASS_HELPERS(UDFInteractableComponent_Vehicle, "DFInteractableComponent_Vehicle")

};

// Object: Class DFMVehicle.DFInteractableCompProxy_Vehicle
// Size: 0x168 (Inherited: 0x138)
struct UDFInteractableCompProxy_Vehicle : UDFInteractableCompProxy
{
	struct FGameplayTag DriveTag; // 0x138(0x8)
	struct FGameplayTag SitInTag; // 0x140(0x8)
	struct FGameplayTag RepairTag; // 0x148(0x8)
	struct FName CachedRepairProcessCompName; // 0x150(0x8)
	struct UInteractorOperatorProcessComponent* CachedRepairProcessComp; // 0x158(0x8)
	uint64_t RepairWeaponID; // 0x160(0x8)


	// Object: Function DFMVehicle.DFInteractableCompProxy_Vehicle.IsLocalPlayerOnVehicle
	// Flags: [Final|Native|Protected|BlueprintCallable]
	// Offset: 0x14080084
	// Params: [ Num(2) Size(0x9) ]
	uint8_t IsLocalPlayerOnVehicle(struct ADFMVehicleBase* InVehicle);
	DEFINE_UE_CLASS_HELPERS(UDFInteractableCompProxy_Vehicle, "DFInteractableCompProxy_Vehicle")

};

// Object: Class DFMVehicle.DFJetAdvancedPhysicsComponent
// Size: 0x280 (Inherited: 0x138)
struct UDFJetAdvancedPhysicsComponent : UDFVehicleAdvancedPhysicsComponentBase
{
	uint8_t bShouldModifyContactFriction : 1; // 0x138(0x1), Mask(0x1)
	uint8_t BitPad_0x138_1 : 7; // 0x138(0x1)
	uint8_t Pad_0x139[0x7]; // 0x139(0x7)
	struct FRuntimeFloatCurve StaticFrictionCurveWithJetUpWorldUpAngle; // 0x140(0xA0)
	struct FRuntimeFloatCurve DynamicFrictionCurveWWithJetUpWorldUpAngle; // 0x1E0(0xA0)
	DEFINE_UE_CLASS_HELPERS(UDFJetAdvancedPhysicsComponent, "DFJetAdvancedPhysicsComponent")

};

// Object: Class DFMVehicle.BOSS04AIHelicopterConfig
// Size: 0x1C0 (Inherited: 0x28)
struct UBOSS04AIHelicopterConfig : UObject
{
	float DeterrenceRange; // 0x28(0x4)
	uint8_t Pad_0x2C[0x4]; // 0x2C(0x4)
	struct TMap<struct FAIHelicopterTimeKey, struct FAIHelicopterSpaceData> PatrolTimeConfig; // 0x30(0x50)
	struct FAIHelicopterSpaceData DefaultSpaceData; // 0x80(0x120)
	uint8_t Pad_0x1A0[0x10]; // 0x1A0(0x10)
	struct TArray<struct FAIHelicopterAlertPath> AlertPathConfig; // 0x1B0(0x10)
	DEFINE_UE_CLASS_HELPERS(UBOSS04AIHelicopterConfig, "BOSS04AIHelicopterConfig")

};

// Object: Class DFMVehicle.DFMHelicopter
// Size: 0x1970 (Inherited: 0x1940)
struct ADFMHelicopter : ADFMVehicleBase
{
	struct UDFMHelicopterMovementComponent* MovementComp; // 0x1938(0x8)
	struct UDFMHelicopterSocketAniComponent* HelicopterSocketAniComponent; // 0x1940(0x8)
	uint8_t Pad_0x1950[0x8]; // 0x1950(0x8)
	float HelicopterContractFriction; // 0x1958(0x4)
	float HelicopterContractRestitution; // 0x195C(0x4)
	uint8_t Pad_0x1960[0x10]; // 0x1960(0x10)


	// Object: Function DFMVehicle.DFMHelicopter.NetMulticastOnRopeDescent
	// Flags: [Net|NetReliableNative|Event|NetMulticast|Public|BlueprintCallable]
	// Offset: 0x1408e4d8
	// Params: [ Num(3) Size(0x10) ]
	void NetMulticastOnRopeDescent(int32_t OpCode, struct FName AIDescentVO, float ShowAIDecentVOCooldownTime);

	// Object: Function DFMVehicle.DFMHelicopter.BP_OnAIDescent
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x1408e3ac
	// Params: [ Num(3) Size(0x10) ]
	void BP_OnAIDescent(int32_t OpCode, const struct FName& AIDescentVO, float ShowAIDecentVOCooldownTime);
	DEFINE_UE_CLASS_HELPERS(ADFMHelicopter, "DFMHelicopter")

};

// Object: Class DFMVehicle.DFMAIHelicopter
// Size: 0x1E60 (Inherited: 0x1970)
struct ADFMAIHelicopter : ADFMHelicopter
{
	struct UDFMAIHelicopterPilotComponent* HelicopterPilotComp; // 0x1968(0x8)
	struct UAIHelicopterSteeringComponent* AIHelicopterSteeringComponent; // 0x1970(0x8)
	struct TArray<struct FPatrolConfig_Helicopter> PatrolConfig_Helicopter; // 0x1978(0x10)
	struct APickupBase* PickupBoxClass; // 0x1988(0x8)
	float CrashMoveHPThreshold; // 0x1990(0x4)
	float LiftSpeedAcceleration; // 0x1994(0x4)
	float FrontLiftSpeed; // 0x1998(0x4)
	float BackLiftSpeed; // 0x199C(0x4)
	float SmokeGroundHeight; // 0x19A0(0x4)
	float SmokeScaleHeight; // 0x19A4(0x4)
	struct FName CrashMoveFXExplode; // 0x19A8(0x8)
	struct FName CrashMoveFXSmoke; // 0x19B0(0x8)
	struct FName CrashMoveFXFlame; // 0x19B8(0x8)
	struct TMap<struct FName, struct FHelicopterFX> FXMap; // 0x19C0(0x50)
	struct FName BodyMeshCompName; // 0x1A10(0x8)
	struct FName DefaultMainSeat; // 0x1A18(0x8)
	struct USceneComponent* BodyMesh; // 0x1A20(0x8)
	struct FName Boss04_Helicopter_State_Battle; // 0x1A28(0x8)
	struct FName Boss04_Helicopter_State_Battle_Alert; // 0x1A30(0x8)
	struct FName Boss04_Helicopter_State_Patrol; // 0x1A38(0x8)
	struct FName Boss04_Helicopter_State_Patrol_Alert; // 0x1A40(0x8)
	struct FName Boss04_Helicopter_Fall_Rotate_Start; // 0x1A48(0x8)
	struct FName Boss04_Helicopter_Fall_Vertical_Start; // 0x1A50(0x8)
	struct FName Vehicle_Boss04_Helicopter_GlassBroken; // 0x1A58(0x8)
	struct FName Vehicle_Boss04_Helicopter_MachineGun; // 0x1A60(0x8)
	struct FName Vehicle_Boss04_Helicopter_ImpactGlass; // 0x1A68(0x8)
	struct TMap<int32_t, float> DynamicDifficultyHPMap; // 0x1A70(0x50)
	uint8_t bIsTransportHelicopter : 1; // 0x1AC0(0x1), Mask(0x1)
	uint8_t BitPad_0x1AC8_1 : 7; // 0x1AC8(0x1)
	uint8_t Pad_0x1AC9[0x7]; // 0x1AC9(0x7)
	struct FAITransportHelicopterStateParam AITransportHelicopterState; // 0x1AD0(0x80)
	float SpawnTimeStamp; // 0x1B50(0x4)
	uint8_t bRaidHelicopter : 1; // 0x1B54(0x1), Mask(0x1)
	uint8_t BitPad_0x1B54_1 : 7; // 0x1B54(0x1)
	uint8_t Pad_0x1B55[0x3]; // 0x1B55(0x3)
	struct USkeletalMeshComponent* VehicleSKMesh; // 0x1B58(0x8)
	struct UBOSS04AIHelicopterConfig* PatrolConfig; // 0x1B60(0x8)
	uint8_t Pad_0x1B68[0x8]; // 0x1B68(0x8)
	struct FAIHelicopterSpaceData CurrentHelicopterSpaceData; // 0x1B70(0x120)
	struct TScriptInterface<IAIHelicopterWeaponInterface> WeaponInterface; // 0x1C90(0x10)
	uint8_t Pad_0x1CA0[0x5A]; // 0x1CA0(0x5A)
	uint8_t bCrash : 1; // 0x1CFA(0x1), Mask(0x1)
	uint8_t BitPad_0x1CFA_1 : 7; // 0x1CFA(0x1)
	uint8_t Pad_0x1CFB[0x5]; // 0x1CFB(0x5)
	struct FMulticastInlineDelegate AIHelicopterMoveEvent; // 0x1D00(0x10)
	struct FMulticastInlineDelegate AITransportHeliMoveStateEvent; // 0x1D10(0x10)
	struct FMulticastInlineDelegate AIHelicopterFightStateEvent; // 0x1D20(0x10)
	EAIHelicopterMoveState CurrentMoveState; // 0x1D30(0x1)
	struct FAIHelicopterStateParam CurrentAIHelicopterStateParam; // 0x1D31(0x6)
	uint8_t Pad_0x1D37[0x109]; // 0x1D37(0x109)
	struct ADramaArea* LinkedDrama; // 0x1E40(0x8)
	uint8_t Pad_0x1E48[0x18]; // 0x1E48(0x18)


	// Object: Function DFMVehicle.DFMAIHelicopter.UpdateHelicopterFightState
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x14081dd0
	// Params: [ Num(1) Size(0x1) ]
	void UpdateHelicopterFightState(EAIHelicopterFightState State);

	// Object: Function DFMVehicle.DFMAIHelicopter.StopMove
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x14081d98
	// Params: [ Num(1) Size(0x1) ]
	uint8_t StopMove();

	// Object: Function DFMVehicle.DFMAIHelicopter.StopHelicopterAudio
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x14081cf4
	// Params: [ Num(1) Size(0x8) ]
	void StopHelicopterAudio(struct FName AudioConfigName);

	// Object: Function DFMVehicle.DFMAIHelicopter.SetMesh
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(1) Size(0x8) ]
	struct USkeletalMeshComponent* SetMesh();

	// Object: Function DFMVehicle.DFMAIHelicopter.SetLinkedDrama
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(1) Size(0x8) ]
	void SetLinkedDrama(struct AAIHelicopterDramaArea* drama);

	// Object: Function DFMVehicle.DFMAIHelicopter.ServerSetAITransportState
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x14081bf8
	// Params: [ Num(1) Size(0x80) ]
	void ServerSetAITransportState(struct FAITransportHelicopterStateParam Param);

	// Object: Function DFMVehicle.DFMAIHelicopter.ServerSetAITransportMoveState
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x14081b54
	// Params: [ Num(1) Size(0x1) ]
	void ServerSetAITransportMoveState(EAITransportHeliMoveState State);

	// Object: Function DFMVehicle.DFMAIHelicopter.ServerDebugAIHelicopter
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x14081aa8
	// Params: [ Num(1) Size(0x1) ]
	void ServerDebugAIHelicopter(uint8_t OpenDebug);

	// Object: Function DFMVehicle.DFMAIHelicopter.ServerChangePatrolSection
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x14081a04
	// Params: [ Num(1) Size(0x4) ]
	void ServerChangePatrolSection(int32_t SectionID);

	// Object: Function DFMVehicle.DFMAIHelicopter.RequestSimpleCrash
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x14081958
	// Params: [ Num(2) Size(0x10) ]
	struct FAIRequestID RequestSimpleCrash(struct FVector CrashPoint);

	// Object: Function DFMVehicle.DFMAIHelicopter.RequestPathFollow_Alert
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x14081858
	// Params: [ Num(3) Size(0xD) ]
	uint8_t RequestPathFollow_Alert(struct ACHARACTER* CHARACTER, struct FAIRequestID& requestId);

	// Object: Function DFMVehicle.DFMAIHelicopter.RequestPathFollow
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x14081708
	// Params: [ Num(3) Size(0x18) ]
	struct FAIRequestID RequestPathFollow(struct TArray<struct FVector> Points, uint8_t bStopAtGoal);

	// Object: Function DFMVehicle.DFMAIHelicopter.RequestCrashV2
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x1408153c
	// Params: [ Num(3) Size(0xD4) ]
	struct FAIRequestID RequestCrashV2(struct TArray<struct FVector> CrashPathPoints, struct FCrashPointData CrashData);

	// Object: Function DFMVehicle.DFMAIHelicopter.RequestCrash
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x140813c4
	// Params: [ Num(3) Size(0x44) ]
	struct FAIRequestID RequestCrash(struct TArray<struct FVector> CrashPathPoints, struct FTransform CrashFT);

	// Object: Function DFMVehicle.DFMAIHelicopter.PlayPath
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x14081298
	// Params: [ Num(3) Size(0xA) ]
	void PlayPath(struct AActor* InPath, uint8_t ResetStartPos, uint8_t bStopAtGoal);

	// Object: Function DFMVehicle.DFMAIHelicopter.PlayHelicopterAudioBySoftObj
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x140811c8
	// Params: [ Num(1) Size(0x28) ]
	void PlayHelicopterAudioBySoftObj(const struct TSoftObjectPtr<UGPAudioEventAsset>& SoftObjectPtr);

	// Object: Function DFMVehicle.DFMAIHelicopter.PlayHelicopterAudio
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x14081124
	// Params: [ Num(1) Size(0x8) ]
	void PlayHelicopterAudio(struct FName AudioConfigName);

	// Object: Function DFMVehicle.DFMAIHelicopter.OverridePatrolConfig
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x14081080
	// Params: [ Num(1) Size(0x8) ]
	void OverridePatrolConfig(struct UBOSS04AIHelicopterConfig* NewPatrolConfigClass);

	// Object: Function DFMVehicle.DFMAIHelicopter.OnVehicleDamaged
	// Flags: [Final|Native|Protected]
	// Offset: 0x14080fa0
	// Params: [ Num(2) Size(0xC) ]
	void OnVehicleDamaged(struct UDFMVehicleHealthComponent* TargetComponent, float NormalizedHpPercent);

	// Object: Function DFMVehicle.DFMAIHelicopter.OnStepChange
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(1) Size(0x1) ]
	void OnStepChange(EAIHelicopterStepEvent Step);

	// Object: Function DFMVehicle.DFMAIHelicopter.OnPilotDead
	// Flags: [Final|Native|Protected]
	// Offset: 0x14080e88
	// Params: [ Num(3) Size(0x18) ]
	void OnPilotDead(struct AGPCharacterBase* CHARACTER, struct AController* Killer, struct UDamageType* DamageType);

	// Object: Function DFMVehicle.DFMAIHelicopter.OnMoveFinished
	// Flags: [Final|Native|Private]
	// Offset: 0x14080da0
	// Params: [ Num(2) Size(0x5) ]
	void OnMoveFinished(struct FAIRequestID requestId, uint8_t Result);

	// Object: Function DFMVehicle.DFMAIHelicopter.OnCrashed
	// Flags: [Final|Native|Private]
	// Offset: 0x14080d8c
	// Params: [ Num(0) Size(0x0) ]
	void OnCrashed();

	// Object: Function DFMVehicle.DFMAIHelicopter.MoveTo
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x14080c9c
	// Params: [ Num(3) Size(0x14) ]
	struct FAIRequestID MoveTo(struct FVector pos, uint8_t bStopAtGoal);

	// Object: Function DFMVehicle.DFMAIHelicopter.IsDriver
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x14080bec
	// Params: [ Num(2) Size(0x9) ]
	uint8_t IsDriver(struct AActor* Pilot);

	// Object: Function DFMVehicle.DFMAIHelicopter.GetVehicleAudioData
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x14080b74
	// Params: [ Num(1) Size(0xBF8) ]
	struct FDFMVehicleAudioDataTableRow GetVehicleAudioData();

	// Object: Function DFMVehicle.DFMAIHelicopter.GetMainDriver
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x14080b40
	// Params: [ Num(1) Size(0x8) ]
	struct AActor* GetMainDriver();

	// Object: Function DFMVehicle.DFMAIHelicopter.GetHelicopterVelocity
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x14080b08
	// Params: [ Num(1) Size(0xC) ]
	struct FVector GetHelicopterVelocity();

	// Object: Function DFMVehicle.DFMAIHelicopter.GetAllPilot
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x14080a70
	// Params: [ Num(1) Size(0x10) ]
	struct TArray<struct AActor*> GetAllPilot();

	// Object: Function DFMVehicle.DFMAIHelicopter.ForceSetHighRegion
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x14080a5c
	// Params: [ Num(0) Size(0x0) ]
	void ForceSetHighRegion();

	// Object: Function DFMVehicle.DFMAIHelicopter.DrawDebugSpaceData
	// Flags: [Final|Net|Native|Event|NetMulticast|Private]
	// Offset: 0x140807f4
	// Params: [ Num(1) Size(0x120) ]
	void DrawDebugSpaceData(struct FAIHelicopterSpaceData Data);

	// Object: Function DFMVehicle.DFMAIHelicopter.CanCrash
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x140807bc
	// Params: [ Num(1) Size(0x1) ]
	uint8_t CanCrash();
	DEFINE_UE_CLASS_HELPERS(ADFMAIHelicopter, "DFMAIHelicopter")

};

// Object: Class DFMVehicle.HelicopterWayPoint
// Size: 0x388 (Inherited: 0x370)
struct AHelicopterWayPoint : AActor
{
	struct AHelicopterWayPoint* NextPoint; // 0x370(0x8)
	int32_t Type; // 0x378(0x4)
	int32_t WaypointID; // 0x37C(0x4)
	struct FName WayPointGroup; // 0x380(0x8)


	// Object: Function DFMVehicle.HelicopterWayPoint.SetSpriteTexture
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x140824a4
	// Params: [ Num(1) Size(0x8) ]
	void SetSpriteTexture(struct UTexture2D* Texture);

	// Object: Function DFMVehicle.HelicopterWayPoint.OnLevelSelectionChanged
	// Flags: [Final|Native|Public]
	// Offset: 0x14082400
	// Params: [ Num(1) Size(0x8) ]
	void OnLevelSelectionChanged(struct UObject* NewSelection);

	// Object: Function DFMVehicle.HelicopterWayPoint.GetHelicopterWayPointNumeric
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x14082300
	// Params: [ Num(2) Size(0xC) ]
	void GetHelicopterWayPointNumeric(struct FName& Name, int32_t& ID);

	// Object: Function DFMVehicle.HelicopterWayPoint.GetHelicopterWayPointDataMap
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x14082238
	// Params: [ Num(2) Size(0x58) ]
	static struct TMap<struct FName, struct FHelicopterWayPointData> GetHelicopterWayPointDataMap(struct UObject* Context);

	// Object: Function DFMVehicle.HelicopterWayPoint.FindSuitableAttackPath
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x14082050
	// Params: [ Num(5) Size(0x6C) ]
	static struct FName FindSuitableAttackPath(struct TMap<struct FName, struct FHelicopterWayPointData> HelicopterWayPointDataMap, struct ADFMAIController* DFAIController, struct ACHARACTER* Other, uint8_t bCheckFoliage);

	// Object: Function DFMVehicle.HelicopterWayPoint.DrawSelectionFlush
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x14081f24
	// Params: [ Num(3) Size(0xA) ]
	void DrawSelectionFlush(struct UObject* NewSelection, uint8_t DoAdjPath, uint8_t DoPathFind);
	DEFINE_UE_CLASS_HELPERS(AHelicopterWayPoint, "HelicopterWayPoint")

};

// Object: Class DFMVehicle.DFMVehicleAudioComponent
// Size: 0xFB8 (Inherited: 0xF8)
struct UDFMVehicleAudioComponent : UActorComponent
{
	uint8_t Pad_0xF8[0x4]; // 0xF8(0x4)
	struct FName VehicleAudioName; // 0xFC(0x8)
	struct FName OverrideAudioTypeName; // 0x104(0x8)
	uint8_t Pad_0x10C[0x4]; // 0x10C(0x4)
	struct FVehicleFakeRPMConfig FakeRPMConfig; // 0x110(0xD8)
	struct ADFMVehicleBase* OwnerVehicle; // 0x1E8(0x8)
	struct AGPCharacter* LocalCharacter; // 0x1F0(0x8)
	struct UGPBuoyancyComponent* BuoyancyComponent; // 0x1F8(0x8)
	uint8_t Pad_0x200[0xC18]; // 0x200(0xC18)
	struct UGPAudioVehicleCollisionDataAsset* CollisionAudioAsset; // 0xE18(0x8)
	struct FRuntimeFloatCurve FakeEngineRotationSpeedWithVelocity; // 0xE20(0xA0)
	uint8_t Pad_0xEC0[0xE0]; // 0xEC0(0xE0)
	float SetRotRTPCThreshold; // 0xFA0(0x4)
	uint8_t Pad_0xFA4[0x14]; // 0xFA4(0x14)


	// Object: Function DFMVehicle.DFMVehicleAudioComponent.OnVehicleHitCallback
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults]
	// Offset: 0xf586b70
	// Params: [ Num(4) Size(0xA4) ]
	void OnVehicleHitCallback(struct AActor* SelfActor, struct AActor* OtherActor, struct FVector NormalImpulse, const struct FHitResult& Hit);

	// Object: Function DFMVehicle.DFMVehicleAudioComponent.OnCharacterSwitchSeat
	// Flags: [Final|Native|Public]
	// Offset: 0xf659c2c
	// Params: [ Num(3) Size(0x18) ]
	void OnCharacterSwitchSeat(struct AActor* CHARACTER, struct FName OldSeatName, struct FName NewSeatName);

	// Object: Function DFMVehicle.DFMVehicleAudioComponent.OnCharacterGetOn
	// Flags: [Final|Native|Public]
	// Offset: 0xfa90d58
	// Params: [ Num(2) Size(0x10) ]
	void OnCharacterGetOn(struct AActor* CHARACTER, struct FName SeatName);

	// Object: Function DFMVehicle.DFMVehicleAudioComponent.OnCharacterGetOff
	// Flags: [Final|Native|Public]
	// Offset: 0xf7d1858
	// Params: [ Num(1) Size(0x8) ]
	void OnCharacterGetOff(struct AActor* CHARACTER);
	DEFINE_UE_CLASS_HELPERS(UDFMVehicleAudioComponent, "DFMVehicleAudioComponent")

};

// Object: Class DFMVehicle.DFMHelicopterAudioComponent
// Size: 0xFB8 (Inherited: 0xFB8)
struct UDFMHelicopterAudioComponent : UDFMVehicleAudioComponent
{	DEFINE_UE_CLASS_HELPERS(UDFMHelicopterAudioComponent, "DFMHelicopterAudioComponent")

};

// Object: Class DFMVehicle.DFMAIHelicopterAudioComponent
// Size: 0xFB8 (Inherited: 0xFB8)
struct UDFMAIHelicopterAudioComponent : UDFMHelicopterAudioComponent
{	DEFINE_UE_CLASS_HELPERS(UDFMAIHelicopterAudioComponent, "DFMAIHelicopterAudioComponent")

};

// Object: Class DFMVehicle.DFMVehicleHealthComponent
// Size: 0x3A0 (Inherited: 0xF8)
struct UDFMVehicleHealthComponent : UActorComponent
{
	uint8_t Pad_0xF8[0x20]; // 0xF8(0x20)
	float MaxHealthPoint; // 0x118(0x4)
	float CurrentLostHealthPoint; // 0x11C(0x4)
	uint8_t DrivingStatus : 1; // 0x120(0x1), Mask(0x1)
	uint8_t BitPad_0x120_1 : 7; // 0x120(0x1)
	uint8_t Pad_0x121[0x1F]; // 0x121(0x1F)
	struct TMap<struct AActor*, float> HitDamageCooldown; // 0x140(0x50)
	struct FVehicleHealthRecoverInfo RecoverInfo; // 0x190(0xB8)
	float UILowHPRatio; // 0x248(0x4)
	uint8_t EnableTeammateDamage : 1; // 0x24C(0x1), Mask(0x1)
	uint8_t BitPad_0x24C_1 : 7; // 0x24C(0x1)
	uint8_t EnableTeammateDamageExplode : 1; // 0x24D(0x1), Mask(0x1)
	uint8_t BitPad_0x24D_1 : 7; // 0x24D(0x1)
	uint8_t HPLockMode : 1; // 0x24E(0x1), Mask(0x1)
	uint8_t BitPad_0x24E_1 : 7; // 0x24E(0x1)
	uint8_t Pad_0x24F[0x1]; // 0x24F(0x1)
	float OverrideExplodeDamage; // 0x250(0x4)
	float ExplodeDamageRate; // 0x254(0x4)
	int64_t ExplodeAttackerValueId; // 0x258(0x8)
	struct FVehicleBrokenPartActor VehicleBrokenPartInfo; // 0x260(0x20)
	uint8_t Pad_0x280[0x8]; // 0x280(0x8)
	struct TArray<struct UDFMVehicleBodyPartInstance*> VehicleBodyPartInstances; // 0x288(0x10)
	struct TArray<struct UDFMVehicleBodyPartExecutor*> ReplicatedVehicleBodyPartExecutors; // 0x298(0x10)
	float AlarmVoiceRatio; // 0x2A8(0x4)
	float AlarmVoiceCDTime; // 0x2AC(0x4)
	uint8_t Pad_0x2B0[0x8]; // 0x2B0(0x8)
	float VehicleGlassBrokenHP; // 0x2B8(0x4)
	uint8_t Pad_0x2BC[0x4]; // 0x2BC(0x4)
	struct FMulticastInlineDelegate OnDead; // 0x2C0(0x10)
	struct FMulticastInlineDelegate OnDamaged; // 0x2D0(0x10)
	struct FMulticastInlineDelegate OnBroken; // 0x2E0(0x10)
	struct FMulticastInlineDelegate OnRecover; // 0x2F0(0x10)
	struct FMulticastInlineDelegate OnDeathPerform; // 0x300(0x10)
	struct FMulticastInlineDelegate OnTakeDamage; // 0x310(0x10)
	struct FMulticastInlineDelegate OnGetDamage; // 0x320(0x10)
	uint8_t Pad_0x330[0x70]; // 0x330(0x70)


	// Object: Function DFMVehicle.DFMVehicleHealthComponent.SetVehicleCamp
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x140a6c24
	// Params: [ Num(1) Size(0x4) ]
	void SetVehicleCamp(int32_t Camp);

	// Object: Function DFMVehicle.DFMVehicleHealthComponent.SetMaxHP
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x140a6b80
	// Params: [ Num(1) Size(0x4) ]
	void SetMaxHP(float MaxHP);

	// Object: Function DFMVehicle.DFMVehicleHealthComponent.SetHP
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0x140a6ad4
	// Params: [ Num(1) Size(0x4) ]
	void SetHP(float HP);

	// Object: Function DFMVehicle.DFMVehicleHealthComponent.SetAutoDamage
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x140a69f8
	// Params: [ Num(2) Size(0x8) ]
	void SetAutoDamage(float DamageAmount, float Interval);

	// Object: Function DFMVehicle.DFMVehicleHealthComponent.OnRep_ReplicatedVehicleBodyPartExecutors
	// Flags: [Final|Native|Protected]
	// Offset: 0x10134bac
	// Params: [ Num(0) Size(0x0) ]
	void OnRep_ReplicatedVehicleBodyPartExecutors();

	// Object: Function DFMVehicle.DFMVehicleHealthComponent.OnRep_OnHealthPointChange
	// Flags: [Native|Protected]
	// Offset: 0x140a69dc
	// Params: [ Num(0) Size(0x0) ]
	void OnRep_OnHealthPointChange();

	// Object: Function DFMVehicle.DFMVehicleHealthComponent.IsDead
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x140a69a4
	// Params: [ Num(1) Size(0x1) ]
	uint8_t IsDead();

	// Object: Function DFMVehicle.DFMVehicleHealthComponent.GetMaxHP
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x140a6988
	// Params: [ Num(1) Size(0x4) ]
	float GetMaxHP();

	// Object: Function DFMVehicle.DFMVehicleHealthComponent.GetHPPercent
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x140a6938
	// Params: [ Num(1) Size(0x4) ]
	float GetHPPercent();

	// Object: Function DFMVehicle.DFMVehicleHealthComponent.GetHP
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x140a6904
	// Params: [ Num(1) Size(0x4) ]
	float GetHP();

	// Object: Function DFMVehicle.DFMVehicleHealthComponent.DebugQueryDestructedParties
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x140a6824
	// Params: [ Num(2) Size(0x18) ]
	struct TArray<struct FName> DebugQueryDestructedParties(int32_t FunctionFlag);

	// Object: Function DFMVehicle.DFMVehicleHealthComponent.DebugQueryBrokenParties
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x140a6744
	// Params: [ Num(2) Size(0x18) ]
	struct TArray<struct FName> DebugQueryBrokenParties(int32_t TypeFlag);

	// Object: Function DFMVehicle.DFMVehicleHealthComponent.AddDamageToComponent
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0x140a6618
	// Params: [ Num(4) Size(0x1C) ]
	int32_t AddDamageToComponent(struct FName ComponentName, float DamageAmount, int64_t WeaponID);
	DEFINE_UE_CLASS_HELPERS(UDFMVehicleHealthComponent, "DFMVehicleHealthComponent")

};

// Object: Class DFMVehicle.DFMAIHelicopterHealthComponent
// Size: 0x3A8 (Inherited: 0x3A0)
struct UDFMAIHelicopterHealthComponent : UDFMVehicleHealthComponent
{
	uint8_t bIsGod : 1; // 0x3A0(0x1), Mask(0x1)
	uint8_t BitPad_0x3A0_1 : 7; // 0x3A0(0x1)
	uint8_t Pad_0x3A1[0x7]; // 0x3A1(0x7)


	// Object: Function DFMVehicle.DFMAIHelicopterHealthComponent.Crash
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x1408818c
	// Params: [ Num(0) Size(0x0) ]
	void Crash();
	DEFINE_UE_CLASS_HELPERS(UDFMAIHelicopterHealthComponent, "DFMAIHelicopterHealthComponent")

};

// Object: Class DFMVehicle.DFMAIHelicopterPilotComponent
// Size: 0x320 (Inherited: 0xF8)
struct UDFMAIHelicopterPilotComponent : UActorComponent
{
	uint8_t Pad_0xF8[0x60]; // 0xF8(0x60)
	struct ADFMAIHelicopter* VehicleOwner; // 0x158(0x8)
	struct FAIHelicopterStateParam AIHelicopterStateParam; // 0x160(0x6)
	uint8_t Pad_0x166[0xA]; // 0x166(0xA)
	struct FAITransportHelicopterStateParam AITransportHelicopterStateParam; // 0x170(0x80)
	uint8_t Pad_0x1F0[0x80]; // 0x1F0(0x80)
	struct TArray<struct AActor*> Pilots; // 0x270(0x10)
	struct TMap<EAITransportHeliMoveState, struct UAnimMontage*> AnimMap; // 0x280(0x50)
	struct TMap<EAITransportHeliMoveState, float> AnimRootMotionScale; // 0x2D0(0x50)


	// Object: Function DFMVehicle.DFMAIHelicopterPilotComponent.On_RepAITransportHelicopterStateParam
	// Flags: [Final|Native|Public]
	// Offset: 0x140881c8
	// Params: [ Num(0) Size(0x0) ]
	void On_RepAITransportHelicopterStateParam();

	// Object: Function DFMVehicle.DFMAIHelicopterPilotComponent.On_RepAIHelicopterStateParam
	// Flags: [Final|Native|Public]
	// Offset: 0x140881b4
	// Params: [ Num(0) Size(0x0) ]
	void On_RepAIHelicopterStateParam();
	DEFINE_UE_CLASS_HELPERS(UDFMAIHelicopterPilotComponent, "DFMAIHelicopterPilotComponent")

};

// Object: Class DFMVehicle.AnimNotifyState_AIHelicopterMotionWarping
// Size: 0x30 (Inherited: 0x30)
struct UAnimNotifyState_AIHelicopterMotionWarping : UAnimNotifyState
{	DEFINE_UE_CLASS_HELPERS(UAnimNotifyState_AIHelicopterMotionWarping, "AnimNotifyState_AIHelicopterMotionWarping")

};

// Object: Class DFMVehicle.AnimNotify_AIHelicopterStepMarker
// Size: 0x40 (Inherited: 0x38)
struct UAnimNotify_AIHelicopterStepMarker : UAnimNotify
{
	EAIHelicopterStepEvent Step; // 0x38(0x1)
	uint8_t Pad_0x39[0x7]; // 0x39(0x7)
	DEFINE_UE_CLASS_HELPERS(UAnimNotify_AIHelicopterStepMarker, "AnimNotify_AIHelicopterStepMarker")

};

// Object: Class DFMVehicle.DFMAITank
// Size: 0x1F00 (Inherited: 0x1E40)
struct ADFMAITank : ADFMTank
{
	uint8_t bIsFiring : 1; // 0x1E3C(0x1), Mask(0x1)
	uint8_t KeepPosition : 1; // 0x1E3D(0x1), Mask(0x1)
	uint8_t KeepAimRotation : 1; // 0x1E3E(0x1), Mask(0x1)
	uint8_t IsTankGod : 1; // 0x1E3F(0x1), Mask(0x1)
	uint8_t PlayTurnLeft : 1; // 0x1E40(0x1), Mask(0x1)
	uint8_t BitPad_0x1E40_5 : 3; // 0x1E40(0x1)
	uint8_t PlayTurnRight : 1; // 0x1E41(0x1), Mask(0x1)
	uint8_t BitPad_0x1E41_1 : 7; // 0x1E41(0x1)
	uint8_t bIsUnderAttack : 1; // 0x1E42(0x1), Mask(0x1)
	uint8_t BitPad_0x1E42_1 : 7; // 0x1E42(0x1)
	uint8_t bIsProjectileAttack : 1; // 0x1E43(0x1), Mask(0x1)
	uint8_t BitPad_0x1E43_1 : 7; // 0x1E43(0x1)
	uint8_t Pad_0x1E44[0x4]; // 0x1E44(0x4)
	struct AGPCharacter* VirtualAICharacter; // 0x1E48(0x8)
	struct UAITankPhaseComponent* AITankPhaseComponent; // 0x1E50(0x8)
	struct UParticleSystemComponent* TankAccelerateEffectComponent; // 0x1E58(0x8)
	struct FMulticastInlineDelegate TriggerAITankWayPointSignature; // 0x1E60(0x10)
	struct TArray<struct FTankMeshData> TankMeshArray; // 0x1E70(0x10)
	struct TMap<EAITankPhase, float> WayPointPauseTimeMap; // 0x1E80(0x50)
	struct UCurveFloat* PitchCurve; // 0x1ED0(0x8)
	struct AWeaponBase* MachineGun; // 0x1ED8(0x8)
	struct UFXResourceContainerComponent* CreatedMachineGunFireWarningPSC; // 0x1EE0(0x8)
	struct UParticleSystemComponent* TankBodyEffectComponent; // 0x1EE8(0x8)
	struct UParticleSystemComponent* TankEngineEffectComponent; // 0x1EF0(0x8)
	uint8_t Pad_0x1EF8[0x8]; // 0x1EF8(0x8)


	// Object: Function DFMVehicle.DFMAITank.SetTankPhaseHP
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x140888dc
	// Params: [ Num(1) Size(0x50) ]
	void SetTankPhaseHP(struct TMap<EAITankPhase, float> AITankPhaseHPMap);

	// Object: Function DFMVehicle.DFMAITank.SetTankPhase
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x14088838
	// Params: [ Num(1) Size(0x1) ]
	void SetTankPhase(EAITankPhase NewAITankPhase);

	// Object: Function DFMVehicle.DFMAITank.ResetCannonDesireRotation
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x14088824
	// Params: [ Num(0) Size(0x0) ]
	void ResetCannonDesireRotation();

	// Object: Function DFMVehicle.DFMAITank.PlayMachineGunFireWarningEffect
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x1408870c
	// Params: [ Num(3) Size(0x14) ]
	void PlayMachineGunFireWarningEffect(struct FName FireSocketName, struct FName FireDirectionSocketName, float FireRange);

	// Object: Function DFMVehicle.DFMAITank.OnRep_VirtualAICharacter
	// Flags: [Final|Native|Public]
	// Offset: 0x140886bc
	// Params: [ Num(0) Size(0x0) ]
	void OnRep_VirtualAICharacter();

	// Object: Function DFMVehicle.DFMAITank.NotifyTouchAITankWayPoint
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x14088618
	// Params: [ Num(1) Size(0x8) ]
	void NotifyTouchAITankWayPoint(struct AAITankWaypoint* AITankWaypoint);

	// Object: Function DFMVehicle.DFMAITank.NotifyEndAccelerate
	// Flags: [Final|Native|Public]
	// Offset: 0x14088574
	// Params: [ Num(1) Size(0x8) ]
	void NotifyEndAccelerate(struct AActor* Follower);

	// Object: Function DFMVehicle.DFMAITank.NotifyBeginAccelerate
	// Flags: [Final|Native|Public]
	// Offset: 0x140884d0
	// Params: [ Num(1) Size(0x8) ]
	void NotifyBeginAccelerate(struct AActor* Follower);

	// Object: Function DFMVehicle.DFMAITank.GetTankPhase
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x1408849c
	// Params: [ Num(1) Size(0x1) ]
	EAITankPhase GetTankPhase();

	// Object: Function DFMVehicle.DFMAITank.ForceUpdateCannonDesireRotation
	// Flags: [Net|NetReliableNative|Event|NetMulticast|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x140883f4
	// Params: [ Num(1) Size(0x10) ]
	void ForceUpdateCannonDesireRotation(struct FQuat ServerCannonDesiredOrientation);

	// Object: Function DFMVehicle.DFMAITank.CreateWeapon
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x140882dc
	// Params: [ Num(3) Size(0x18) ]
	void CreateWeapon(struct AGPCharacter* GPCharacter, int64_t WeaponID, int64_t Guid);

	// Object: Function DFMVehicle.DFMAITank.BP_ServerNotifyTankPhaseChanged
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(1) Size(0x1) ]
	void BP_ServerNotifyTankPhaseChanged(EAITankPhase NewTankPhase);

	// Object: Function DFMVehicle.DFMAITank.BP_OnRep_VirtualAICharacter
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(0) Size(0x0) ]
	void BP_OnRep_VirtualAICharacter();

	// Object: Function DFMVehicle.DFMAITank.BP_MachineGunCreated
	// Flags: [Event|Protected|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(0) Size(0x0) ]
	void BP_MachineGunCreated();

	// Object: Function DFMVehicle.DFMAITank.BP_ClientNotifyTankPhaseChanged
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(1) Size(0x1) ]
	void BP_ClientNotifyTankPhaseChanged(EAITankPhase NewTankPhase);
	DEFINE_UE_CLASS_HELPERS(ADFMAITank, "DFMAITank")

};

// Object: Class DFMVehicle.DFMAITask_HelicopterShoot
// Size: 0x110 (Inherited: 0x70)
struct UDFMAITask_HelicopterShoot : UBTTaskNode
{
	float ShootingTime; // 0x6C(0x4)
	struct FBlackboardKeySelector MainTargetKey; // 0x70(0x28)
	struct FBlackboardKeySelector AttackerKey; // 0x98(0x28)
	float OffsetAngle; // 0xC0(0x4)
	uint8_t FireLockTarget : 1; // 0xC4(0x1), Mask(0x1)
	float TaskTimeLimit; // 0xC8(0x4)
	float VelocityPreTime; // 0xCC(0x4)
	struct UCurveFloat* ZCurve; // 0xD0(0x8)
	float SafeHeight; // 0xD8(0x4)
	float InXYDis; // 0xDC(0x4)
	float InZDis; // 0xE0(0x4)
	float OutXYDis; // 0xE4(0x4)
	float OutZDis; // 0xE8(0x4)
	uint8_t bFinishBeforeStop : 1; // 0xEC(0x1), Mask(0x1)
	uint8_t BitPad_0xEC_2 : 6; // 0xEC(0x1)
	uint8_t bSelectLongestTracePath : 1; // 0xED(0x1), Mask(0x1)
	uint8_t BitPad_0xED_1 : 7; // 0xED(0x1)
	uint8_t Pad_0xEE[0x2]; // 0xEE(0x2)
	float TraceStep; // 0xF0(0x4)
	uint8_t bAvoidObstacle : 1; // 0xF4(0x1), Mask(0x1)
	uint8_t BitPad_0xF4_1 : 7; // 0xF4(0x1)
	uint8_t Pad_0xF5[0x3]; // 0xF5(0x3)
	float AvoidTraceStep; // 0xF8(0x4)
	float AvoidTracePostDist; // 0xFC(0x4)
	float AvoidSuccessZDist; // 0x100(0x4)
	float ClearFocusProgress; // 0x104(0x4)
	uint8_t bDebug : 1; // 0x108(0x1), Mask(0x1)
	uint8_t BitPad_0x108_1 : 7; // 0x108(0x1)
	uint8_t Pad_0x109[0x7]; // 0x109(0x7)
	DEFINE_UE_CLASS_HELPERS(UDFMAITask_HelicopterShoot, "DFMAITask_HelicopterShoot")

};

// Object: Class DFMVehicle.DFMAmphibiousVehicleAnimInstance
// Size: 0xA30 (Inherited: 0x270)
struct UDFMAmphibiousVehicleAnimInstance : UAnimInstance
{
	float InWaterStateChangeInterval; // 0x26C(0x4)
	float InWaterBuoyancyRatioThreshold; // 0x270(0x4)
	uint8_t Pad_0x278[0x8]; // 0x278(0x8)
	struct FDFMAmphibiousVehicleAnimInstanceProxy LocalProxy; // 0x280(0x7B0)
	DEFINE_UE_CLASS_HELPERS(UDFMAmphibiousVehicleAnimInstance, "DFMAmphibiousVehicleAnimInstance")

};

// Object: Class DFMVehicle.DFMAngularReplicationTestComponent
// Size: 0x110 (Inherited: 0xF8)
struct UDFMAngularReplicationTestComponent : UActorComponent
{
	struct FName TargetTag; // 0xF8(0x8)
	struct AActor* TargetActor; // 0x100(0x8)
	struct UPrimitiveComponent* UpdatedPrimitive; // 0x108(0x8)
	DEFINE_UE_CLASS_HELPERS(UDFMAngularReplicationTestComponent, "DFMAngularReplicationTestComponent")

};

// Object: Class DFMVehicle.DFMPhysxMultiBaseShapeComponent
// Size: 0x5E0 (Inherited: 0x590)
struct UDFMPhysxMultiBaseShapeComponent : UShapeComponent
{
	struct TArray<struct FBoxDataInfo> BoxDataInfos; // 0x590(0x10)
	struct TArray<struct FBoxDataInfo> AsyncBoxDataInfos; // 0x5A0(0x10)
	struct TArray<struct FCapsuleDataInfo> CapsuleDataInfos; // 0x5B0(0x10)
	struct TArray<struct FSphereDataInfo> SphereDataInfos; // 0x5C0(0x10)
	float LineThickness; // 0x5D0(0x4)
	uint8_t bAutoDynamicObstacle : 1; // 0x5D4(0x1), Mask(0x1)
	uint8_t BitPad_0x5D4_1 : 7; // 0x5D4(0x1)
	uint8_t bBuildContour : 1; // 0x5D5(0x1), Mask(0x1)
	uint8_t BitPad_0x5D5_1 : 7; // 0x5D5(0x1)
	uint8_t Pad_0x5D6[0xA]; // 0x5D6(0xA)
	DEFINE_UE_CLASS_HELPERS(UDFMPhysxMultiBaseShapeComponent, "DFMPhysxMultiBaseShapeComponent")

};

// Object: Class DFMVehicle.DFMAsyncPhysMultiShapeComponent
// Size: 0x5E0 (Inherited: 0x5E0)
struct UDFMAsyncPhysMultiShapeComponent : UDFMPhysxMultiBaseShapeComponent
{	DEFINE_UE_CLASS_HELPERS(UDFMAsyncPhysMultiShapeComponent, "DFMAsyncPhysMultiShapeComponent")

};

// Object: Class DFMVehicle.DFMVehicleAssembleExtensionBase
// Size: 0x50 (Inherited: 0x28)
struct UDFMVehicleAssembleExtensionBase : UObject
{
	uint8_t Pad_0x28[0x8]; // 0x28(0x8)
	struct UPrimitiveComponent* OwnerComponent; // 0x30(0x8)
	struct ADFMVehicleBase* OwnerVehicle; // 0x38(0x8)
	struct AGPCharacter* LocalCharacter; // 0x40(0x8)
	uint8_t Pad_0x48[0x8]; // 0x48(0x8)
	DEFINE_UE_CLASS_HELPERS(UDFMVehicleAssembleExtensionBase, "DFMVehicleAssembleExtensionBase")

};

// Object: Class DFMVehicle.DFMBoatRadarExtension
// Size: 0x60 (Inherited: 0x50)
struct UDFMBoatRadarExtension : UDFMVehicleAssembleExtensionBase
{
	float RotateSpeed; // 0x4C(0x4)
	struct FVector RotateAxis; // 0x50(0xC)


	// Object: Function DFMVehicle.DFMBoatRadarExtension.OnCharacterSwitchSeat
	// Flags: [Final|Native|Protected]
	// Offset: 0x14088c78
	// Params: [ Num(3) Size(0x18) ]
	void OnCharacterSwitchSeat(struct AActor* CHARACTER, struct FName OldSeatName, struct FName NewSeatName);

	// Object: Function DFMVehicle.DFMBoatRadarExtension.OnCharacterGetOn
	// Flags: [Final|Native|Protected]
	// Offset: 0x14088b9c
	// Params: [ Num(2) Size(0x10) ]
	void OnCharacterGetOn(struct AActor* CHARACTER, struct FName SeatName);

	// Object: Function DFMVehicle.DFMBoatRadarExtension.OnCharacterGetOff
	// Flags: [Final|Native|Protected]
	// Offset: 0x14088af8
	// Params: [ Num(1) Size(0x8) ]
	void OnCharacterGetOff(struct AActor* CHARACTER);
	DEFINE_UE_CLASS_HELPERS(UDFMBoatRadarExtension, "DFMBoatRadarExtension")

};

// Object: Class DFMVehicle.DFMBoatMovementComponent
// Size: 0x990 (Inherited: 0x180)
struct UDFMBoatMovementComponent : UPawnMovementComponent
{
	uint8_t Pad_0x180[0x50]; // 0x180(0x50)
	uint8_t bDrawDebug : 1; // 0x1D0(0x1), Mask(0x1)
	uint8_t BitPad_0x1D0_1 : 7; // 0x1D0(0x1)
	uint8_t Pad_0x1D1[0xF]; // 0x1D1(0xF)
	struct FBoatEngineSetting EngineSetting; // 0x1E0(0x380)
	struct FBoatSteeringSetting SteeringSetting; // 0x560(0xB8)
	struct FBoatStrandedSetting StrandedSetting; // 0x618(0xC)
	uint8_t Pad_0x624[0x4]; // 0x624(0x4)
	struct FRuntimeFloatCurve BuoyancyDampingForceScaleCurve; // 0x628(0xA0)
	uint8_t bShouldModifyAngularDamping : 1; // 0x6C8(0x1), Mask(0x1)
	uint8_t BitPad_0x6C8_1 : 7; // 0x6C8(0x1)
	uint8_t Pad_0x6C9[0x7]; // 0x6C9(0x7)
	struct FRuntimeFloatCurve PitchVelocityDampingCurve; // 0x6D0(0xA0)
	struct FRuntimeFloatCurve YawVelocityDampingCurve; // 0x770(0xA0)
	struct FRuntimeFloatCurve RollVelocityDampingCurve; // 0x810(0xA0)
	struct FVehicleInputInterpRate ThrottleInputRate; // 0x8B0(0x8)
	struct FVehicleInputInterpRate SteeringInputRate; // 0x8B8(0x8)
	struct FVehicleInputInterpRate BrakeInputRate; // 0x8C0(0x8)
	float WrongDirectionThreshold; // 0x8C8(0x4)
	uint8_t Pad_0x8CC[0x4]; // 0x8CC(0x4)
	struct AController* OverrideController; // 0x8D0(0x8)
	struct FBoatInputState ReplicatedState; // 0x8D8(0x8)
	struct FBoatInputState LocalState; // 0x8E0(0x8)
	uint32_t ServerReplicationPacketNo; // 0x8E8(0x4)
	float RawSteeringInput; // 0x8EC(0x4)
	float RawThrottleInput; // 0x8F0(0x4)
	uint8_t Pad_0x8F4[0x6C]; // 0x8F4(0x6C)
	struct AWaterDataAssetsStreamer* WaterDataAssetsStreamer; // 0x960(0x8)
	struct UOpenWorldWaterSubsystem* WaterSubsystem; // 0x968(0x8)
	struct UGPBuoyancyComponent* BuoyancyComponent; // 0x970(0x8)
	uint8_t Pad_0x978[0x18]; // 0x978(0x18)


	// Object: Function DFMVehicle.DFMBoatMovementComponent.SetThrottleInput
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x14089088
	// Params: [ Num(1) Size(0x4) ]
	void SetThrottleInput(float Throttle);

	// Object: Function DFMVehicle.DFMBoatMovementComponent.SetSteeringInput
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x14088fe4
	// Params: [ Num(1) Size(0x4) ]
	void SetSteeringInput(float Steering);

	// Object: Function DFMVehicle.DFMBoatMovementComponent.OnActorHitCallback
	// Flags: [Final|Native|Protected|HasOutParms|HasDefaults]
	// Offset: 0xfb008e4
	// Params: [ Num(4) Size(0xA4) ]
	void OnActorHitCallback(struct AActor* SelfActor, struct AActor* OtherActor, struct FVector NormalImpulse, const struct FHitResult& Hit);

	// Object: Function DFMVehicle.DFMBoatMovementComponent.AISetThrottleInput
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x14088f40
	// Params: [ Num(1) Size(0x4) ]
	void AISetThrottleInput(float Throttle);

	// Object: Function DFMVehicle.DFMBoatMovementComponent.AISetSteeringInput
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x14088e9c
	// Params: [ Num(1) Size(0x4) ]
	void AISetSteeringInput(float Steering);

	// Object: Function DFMVehicle.DFMBoatMovementComponent.AISetBrakeInput
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x14088df8
	// Params: [ Num(1) Size(0x4) ]
	void AISetBrakeInput(float Brake);
	DEFINE_UE_CLASS_HELPERS(UDFMBoatMovementComponent, "DFMBoatMovementComponent")

};

// Object: Class DFMVehicle.DFMVehiclePhysicsReplicationComponent
// Size: 0x680 (Inherited: 0x1B0)
struct UDFMVehiclePhysicsReplicationComponent : UGPVehiclePhysicsReplicationComponent
{
	struct FDFMVehicleCollisionCheckedBox MainCheckedBox; // 0x1B0(0x50)
	uint8_t bIsMainCheckedBoxValid : 1; // 0x200(0x1), Mask(0x1)
	uint8_t BitPad_0x200_1 : 7; // 0x200(0x1)
	uint8_t Pad_0x201[0x7]; // 0x201(0x7)
	struct TArray<struct FDFMVehicleCollisionCheckedBox> ExtraCheckedBoxArray; // 0x208(0x10)
	struct FVector CollisionBoxCenter; // 0x218(0xC)
	struct FVector CollisionBoxExtent; // 0x224(0xC)
	int32_t CurrentFrameIdAcceptedInServer; // 0x230(0x4)
	uint8_t Pad_0x234[0x4]; // 0x234(0x4)
	int32_t CorrectedId; // 0x238(0x4)
	uint8_t Pad_0x23C[0x64]; // 0x23C(0x64)
	struct ADFMVehicleBase* OwnerVehicle; // 0x2A0(0x8)
	struct UGPBuoyancyComponent* BuoyancyComponent; // 0x2A8(0x8)
	struct UPrimitiveComponent* UpdatedPrimitive; // 0x2B0(0x8)
	uint8_t Pad_0x2B8[0x3C8]; // 0x2B8(0x3C8)


	// Object: Function DFMVehicle.DFMVehiclePhysicsReplicationComponent.SendAutonomousFrameDataToServer
	// Flags: [Net|Native|Event|Protected|NetServer]
	// Offset: 0x140ae5a8
	// Params: [ Num(3) Size(0x40) ]
	void SendAutonomousFrameDataToServer(int32_t ClientCorrectId, struct TArray<struct FDFMVehicleAutonomousFrameData> FrameDataArray, struct FVehicleInputState InputState);

	// Object: Function DFMVehicle.DFMVehiclePhysicsReplicationComponent.OvershootWasChecked
	// Flags: [Net|NetReliableNative|Event|Protected|NetClient]
	// Offset: 0x140ae434
	// Params: [ Num(3) Size(0xC0) ]
	void OvershootWasChecked(struct FRigidBodyState StartState, struct FRigidBodyState EndState, struct FRigidBodyState ResetState);

	// Object: Function DFMVehicle.DFMVehiclePhysicsReplicationComponent.OnVehicleHitCallback
	// Flags: [Final|Native|Protected|HasOutParms|HasDefaults]
	// Offset: 0xf68f42c
	// Params: [ Num(4) Size(0xA4) ]
	void OnVehicleHitCallback(struct AActor* SelfActor, struct AActor* OtherActor, struct FVector NormalImpulse, const struct FHitResult& Hit);

	// Object: Function DFMVehicle.DFMVehiclePhysicsReplicationComponent.OnRep_CurrentFrameIdAcceptedInServer
	// Flags: [Final|Native|Protected]
	// Offset: 0xeeb7424
	// Params: [ Num(0) Size(0x0) ]
	void OnRep_CurrentFrameIdAcceptedInServer();

	// Object: Function DFMVehicle.DFMVehiclePhysicsReplicationComponent.ObstacleWasChecked
	// Flags: [Net|NetReliableNative|Event|Protected|NetClient]
	// Offset: 0x140ae238
	// Params: [ Num(5) Size(0x110) ]
	void ObstacleWasChecked(struct FRigidBodyState SafeState, struct FRigidBodyState CheckedState, struct FHitResult HitResult, uint8_t bIsOverlapMainCheckedBox, int32_t OverlapCheckedBoxIndex);

	// Object: Function DFMVehicle.DFMVehiclePhysicsReplicationComponent.CorrectClientRigidBodyState
	// Flags: [Net|NetReliableNative|Event|Protected|NetClient]
	// Offset: 0xfe1b794
	// Params: [ Num(3) Size(0x90) ]
	void CorrectClientRigidBodyState(int32_t InCorrectedId, struct FRigidBodyState CorrectedState, struct FRigidBodyState InValidState);

	// Object: Function DFMVehicle.DFMVehiclePhysicsReplicationComponent.ClientReportVehicleFallUnderground
	// Flags: [Net|NetReliableNative|Event|Protected|NetClient]
	// Offset: 0x140ae0f0
	// Params: [ Num(3) Size(0x50) ]
	void ClientReportVehicleFallUnderground(struct FRigidBodyState ServerState, uint8_t bIsServerSimulatingPhysics, struct AActor* Driver);
	DEFINE_UE_CLASS_HELPERS(UDFMVehiclePhysicsReplicationComponent, "DFMVehiclePhysicsReplicationComponent")

};

// Object: Class DFMVehicle.DFMBoatPhysicsReplicationComponent
// Size: 0x680 (Inherited: 0x680)
struct UDFMBoatPhysicsReplicationComponent : UDFMVehiclePhysicsReplicationComponent
{	DEFINE_UE_CLASS_HELPERS(UDFMBoatPhysicsReplicationComponent, "DFMBoatPhysicsReplicationComponent")

};

// Object: Class DFMVehicle.DFMBoatVehicle
// Size: 0x1CA0 (Inherited: 0x1940)
struct ADFMBoatVehicle : ADFMVehicleBase
{
	uint8_t bAutoDestroy : 1; // 0x1935(0x1), Mask(0x1)
	float CheckedDuration; // 0x1938(0x4)
	float AutoDestroyDuration; // 0x193C(0x4)
	float AutoDestroyDurationWhenStranded; // 0x1940(0x4)
	uint8_t bDisableInteractorWhenStranded : 1; // 0x1944(0x1), Mask(0x1)
	struct TSoftObjectPtr<UBlueprint> StrandedBoat; // 0x1948(0x28)
	struct UDFMBoatMovementComponent* MovementComponent; // 0x1970(0x8)
	struct UGPBuoyancyComponent* BuoyancyComponent; // 0x1978(0x8)
	uint8_t BitPad_0x1984_2 : 6; // 0x1984(0x1)
	uint8_t Pad_0x1985[0xB]; // 0x1985(0xB)
	struct FDFMBoatBumpConfig BumpConfig; // 0x1990(0x230)
	struct FDFMBoatDriveAnimConfig DriveAnimConfig; // 0x1BC0(0xA8)
	uint8_t Pad_0x1C68[0x38]; // 0x1C68(0x38)


	// Object: Function DFMVehicle.DFMBoatVehicle.TryDestroy
	// Flags: [Final|Native|Protected]
	// Offset: 0x14089250
	// Params: [ Num(0) Size(0x0) ]
	void TryDestroy();

	// Object: Function DFMVehicle.DFMBoatVehicle.BP_IsInWater
	// Flags: [Final|Native|Protected|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x14089218
	// Params: [ Num(1) Size(0x1) ]
	uint8_t BP_IsInWater();
	DEFINE_UE_CLASS_HELPERS(ADFMBoatVehicle, "DFMBoatVehicle")

};

// Object: Class DFMVehicle.DFMBoatVehicleAudioComponent
// Size: 0xFC8 (Inherited: 0xFB8)
struct UDFMBoatVehicleAudioComponent : UDFMVehicleAudioComponent
{
	uint8_t Pad_0xFB8[0x10]; // 0xFB8(0x10)
	DEFINE_UE_CLASS_HELPERS(UDFMBoatVehicleAudioComponent, "DFMBoatVehicleAudioComponent")

};

// Object: Class DFMVehicle.DFMVehicleEffectComponent
// Size: 0x10D0 (Inherited: 0xF8)
struct UDFMVehicleEffectComponent : UActorComponent
{
	struct FVehiclePushWaterRippleEffectInfo PushWaterRippleEffectInfo; // 0xF8(0xC0)
	struct TMap<struct FName, struct FVehicleParticleSystemHolder> DynamicBrokenEffect; // 0x1B8(0x50)
	struct TMap<struct FName, struct FEffectArray> BrokenEffectContainers; // 0x208(0x50)
	struct TMap<struct FName, struct FEffectArray> DriverGetOnEffectContainers; // 0x258(0x50)
	struct TMap<struct FName, struct FEffectArray> AllEffectContainers; // 0x2A8(0x50)
	struct TArray<struct FVehicleMovingEffectInfo> MovingEffectArray; // 0x2F8(0x10)
	uint8_t Pad_0x308[0x78]; // 0x308(0x78)
	struct UGPBuoyancyComponent* BuoyancyComponent; // 0x380(0x8)
	struct UFXResourceContainerComponent* LeftWaterEffectComp; // 0x388(0x8)
	struct UFXResourceContainerComponent* RightWaterEffectComp; // 0x390(0x8)
	struct UFXResourceContainerComponent* BackWaterEffectComp; // 0x398(0x8)
	uint8_t Pad_0x3A0[0xD30]; // 0x3A0(0xD30)


	// Object: Function DFMVehicle.DFMVehicleEffectComponent.TickMovingEffect
	// Flags: [Final|Native|Protected]
	// Offset: 0x140a5b10
	// Params: [ Num(0) Size(0x0) ]
	void TickMovingEffect();

	// Object: Function DFMVehicle.DFMVehicleEffectComponent.TickFadingEffect
	// Flags: [Final|Native|Protected]
	// Offset: 0x140a5afc
	// Params: [ Num(0) Size(0x0) ]
	void TickFadingEffect();

	// Object: Function DFMVehicle.DFMVehicleEffectComponent.OnVehicleDamaged
	// Flags: [Final|Native|Protected]
	// Offset: 0xf9ac220
	// Params: [ Num(2) Size(0xC) ]
	void OnVehicleDamaged(struct UDFMVehicleHealthComponent* TargetComponent, float NormalizedHpPercent);
	DEFINE_UE_CLASS_HELPERS(UDFMVehicleEffectComponent, "DFMVehicleEffectComponent")

};

// Object: Class DFMVehicle.DFMBoatVehicleEffectComponent
// Size: 0x10D0 (Inherited: 0x10D0)
struct UDFMBoatVehicleEffectComponent : UDFMVehicleEffectComponent
{	DEFINE_UE_CLASS_HELPERS(UDFMBoatVehicleEffectComponent, "DFMBoatVehicleEffectComponent")

};

// Object: Class DFMVehicle.DFMBrokenVehiclePart
// Size: 0x1170 (Inherited: 0x3D0)
struct ADFMBrokenVehiclePart : APawn
{
	uint8_t Pad_0x3D0[0x8]; // 0x3D0(0x8)
	uint8_t bExplodeWhenHitVehicle : 1; // 0x3D8(0x1), Mask(0x1)
	uint8_t BitPad_0x3D8_1 : 7; // 0x3D8(0x1)
	uint8_t bInheritVehiclePhysicsState : 1; // 0x3D9(0x1), Mask(0x1)
	uint8_t BitPad_0x3D9_1 : 7; // 0x3D9(0x1)
	uint8_t Pad_0x3DA[0x2]; // 0x3DA(0x2)
	int32_t VehicleId; // 0x3DC(0x4)
	float MaxSpeed; // 0x3E0(0x4)
	uint8_t Pad_0x3E4[0x4]; // 0x3E4(0x4)
	struct TArray<struct FDFMBrokenVehicleDirectionInfo> DirectionInfos; // 0x3E8(0x10)
	struct FVector SpeedRatio; // 0x3F8(0xC)
	float MaxAngleSpeed; // 0x404(0x4)
	struct TArray<struct FDFMBrokenVehicleDirectionInfo> AngleDirInfos; // 0x408(0x10)
	struct FVector AngleRatio; // 0x418(0xC)
	uint8_t IsNeedPlayBrokenEffect : 1; // 0x424(0x1), Mask(0x1)
	uint8_t BitPad_0x424_1 : 7; // 0x424(0x1)
	uint8_t IsNeedPlayExplosionEffect : 1; // 0x425(0x1), Mask(0x1)
	uint8_t BitPad_0x425_1 : 7; // 0x425(0x1)
	uint8_t IsNeedPlayDestroyEffect : 1; // 0x426(0x1), Mask(0x1)
	uint8_t BitPad_0x426_1 : 7; // 0x426(0x1)
	uint8_t Pad_0x427[0x1]; // 0x427(0x1)
	float DelayDestroyTime; // 0x428(0x4)
	float DelayDestroyFxTime; // 0x42C(0x4)
	struct UDFMBrokenVehiclePhysicsComponent* PhysicsStateComp; // 0x430(0x8)
	uint8_t Pad_0x438[0xD38]; // 0x438(0xD38)


	// Object: Function DFMVehicle.DFMBrokenVehiclePart.OnActorHitCallback
	// Flags: [Final|Native|Protected|HasOutParms|HasDefaults]
	// Offset: 0x1408c584
	// Params: [ Num(4) Size(0xA4) ]
	void OnActorHitCallback(struct AActor* SelfActor, struct AActor* OtherActor, struct FVector NormalImpulse, const struct FHitResult& Hit);
	DEFINE_UE_CLASS_HELPERS(ADFMBrokenVehiclePart, "DFMBrokenVehiclePart")

};

// Object: Class DFMVehicle.DFMBrokenAIHelicopterPart
// Size: 0x1170 (Inherited: 0x1170)
struct ADFMBrokenAIHelicopterPart : ADFMBrokenVehiclePart
{	DEFINE_UE_CLASS_HELPERS(ADFMBrokenAIHelicopterPart, "DFMBrokenAIHelicopterPart")

};

// Object: Class DFMVehicle.DFMBrokenHelicopterPart
// Size: 0x1170 (Inherited: 0x1170)
struct ADFMBrokenHelicopterPart : ADFMBrokenVehiclePart
{

	// Object: Function DFMVehicle.DFMBrokenHelicopterPart.OnHitCallback
	// Flags: [Final|Native|Protected|HasOutParms|HasDefaults]
	// Offset: 0x14089424
	// Params: [ Num(4) Size(0xA4) ]
	void OnHitCallback(struct AActor* SelfActor, struct AActor* OtherActor, struct FVector NormalImpulse, const struct FHitResult& Hit);
	DEFINE_UE_CLASS_HELPERS(ADFMBrokenHelicopterPart, "DFMBrokenHelicopterPart")

};

// Object: Class DFMVehicle.DFMBrokenVehiclePhysicsComponent
// Size: 0x250 (Inherited: 0xF8)
struct UDFMBrokenVehiclePhysicsComponent : UActorComponent
{
	struct FBrokenVehiclePhysicsReplicatedConfig ReplicatedConfig; // 0xF8(0x44)
	uint8_t Pad_0x13C[0x4]; // 0x13C(0x4)
	struct UPrimitiveComponent* UpdatedPrimitive; // 0x140(0x8)
	uint8_t Pad_0x148[0x108]; // 0x148(0x108)


	// Object: Function DFMVehicle.DFMBrokenVehiclePhysicsComponent.BroadcastPhysicsReplicatedDataToClient
	// Flags: [Final|Net|Native|Event|NetMulticast|Private]
	// Offset: 0xe7a4888
	// Params: [ Num(2) Size(0x50) ]
	void BroadcastPhysicsReplicatedDataToClient(uint32_t BroadcastId, struct FBrokenVehiclePhysicsReplicatedData ReplicatedData);
	DEFINE_UE_CLASS_HELPERS(UDFMBrokenVehiclePhysicsComponent, "DFMBrokenVehiclePhysicsComponent")

};

// Object: Class DFMVehicle.DFMFSM_AutoDriveVehicleAction
// Size: 0x110 (Inherited: 0x108)
struct UDFMFSM_AutoDriveVehicleAction : UDFMFSMAction
{
	uint8_t Pad_0x108[0x8]; // 0x108(0x8)
	DEFINE_UE_CLASS_HELPERS(UDFMFSM_AutoDriveVehicleAction, "DFMFSM_AutoDriveVehicleAction")

};

// Object: Class DFMVehicle.DFMFSM_AutoDriveVehicleCheckAction
// Size: 0x118 (Inherited: 0x108)
struct UDFMFSM_AutoDriveVehicleCheckAction : UDFMFSMAction
{
	uint8_t CheckBegin : 1; // 0x108(0x1), Mask(0x1)
	uint8_t BitPad_0x108_1 : 7; // 0x108(0x1)
	uint8_t CheckCancel : 1; // 0x109(0x1), Mask(0x1)
	uint8_t BitPad_0x109_1 : 7; // 0x109(0x1)
	uint8_t Pad_0x10A[0xE]; // 0x10A(0xE)


	// Object: Function DFMVehicle.DFMFSM_AutoDriveVehicleCheckAction.OnTryStartAutoDraiveVehicleEvent
	// Flags: [Final|Native|Protected]
	// Offset: 0x1408c878
	// Params: [ Num(3) Size(0x10) ]
	void OnTryStartAutoDraiveVehicleEvent(ECharacterFSMEventDefine FSMEvent, float Value, struct UObject* EventObject);

	// Object: Function DFMVehicle.DFMFSM_AutoDriveVehicleCheckAction.OnAnyInputEvent
	// Flags: [Final|Native|Protected]
	// Offset: 0x1408c7d4
	// Params: [ Num(1) Size(0x4) ]
	void OnAnyInputEvent(float Value);
	DEFINE_UE_CLASS_HELPERS(UDFMFSM_AutoDriveVehicleCheckAction, "DFMFSM_AutoDriveVehicleCheckAction")

};

// Object: Class DFMVehicle.DFMFSM_CharacterVehicleControlAction
// Size: 0x1F8 (Inherited: 0x108)
struct UDFMFSM_CharacterVehicleControlAction : UDFMFSMAction
{
	struct FGameplayTag EventTag; // 0x108(0x8)
	struct FName SeatName; // 0x110(0x8)
	struct FGPGameModeLogicConfig GameModeLogicConfig; // 0x118(0x50)
	float ProbeAimCooldownTime; // 0x168(0x4)
	uint8_t Pad_0x16C[0x4C]; // 0x16C(0x4C)
	struct UObject* InitTPPAnimClass; // 0x1B8(0x8)
	struct UObject* InitFPPAnimClass; // 0x1C0(0x8)
	uint8_t Pad_0x1C8[0x30]; // 0x1C8(0x30)


	// Object: Function DFMVehicle.DFMFSM_CharacterVehicleControlAction.SwithCameraModeBtnClicked
	// Flags: [Native|Public]
	// Offset: 0x1408d024
	// Params: [ Num(0) Size(0x0) ]
	void SwithCameraModeBtnClicked();

	// Object: Function DFMVehicle.DFMFSM_CharacterVehicleControlAction.ServerTrySwitchSeat
	// Flags: [Native|Public]
	// Offset: 0x1408cf00
	// Params: [ Num(3) Size(0x10) ]
	void ServerTrySwitchSeat(ECharacterFSMEventDefine FSMEvent, float Value, struct UObject* EventObject);

	// Object: Function DFMVehicle.DFMFSM_CharacterVehicleControlAction.ServerStartDriveCar
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(0) Size(0x0) ]
	void ServerStartDriveCar();

	// Object: Function DFMVehicle.DFMFSM_CharacterVehicleControlAction.ServerExitDriveCar
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(0) Size(0x0) ]
	void ServerExitDriveCar();

	// Object: Function DFMVehicle.DFMFSM_CharacterVehicleControlAction.ResetPassengerPosition
	// Flags: [Native|Public]
	// Offset: 0x1408cddc
	// Params: [ Num(3) Size(0x10) ]
	void ResetPassengerPosition(ECharacterFSMEventDefine FSMEvent, float Value, struct UObject* EventObject);

	// Object: Function DFMVehicle.DFMFSM_CharacterVehicleControlAction.RemoveVehicleHUDState
	// Flags: [Final|Native|Private]
	// Offset: 0x1408cd30
	// Params: [ Num(1) Size(0x1) ]
	void RemoveVehicleHUDState(uint8_t bForceFresh);

	// Object: Function DFMVehicle.DFMFSM_CharacterVehicleControlAction.PreFireButtonPressed
	// Flags: [Final|Native|Public]
	// Offset: 0xf4008ec
	// Params: [ Num(3) Size(0x10) ]
	void PreFireButtonPressed(ECharacterFSMEventDefine FSMEvent, float Value, struct UObject* EventObject);

	// Object: Function DFMVehicle.DFMFSM_CharacterVehicleControlAction.OnXPPChange
	// Flags: [Native|Public]
	// Offset: 0xfa04a04
	// Params: [ Num(1) Size(0x1) ]
	void OnXPPChange(uint8_t bNewFPP);

	// Object: Function DFMVehicle.DFMFSM_CharacterVehicleControlAction.OnUseSkill
	// Flags: [Final|Native|Public]
	// Offset: 0x1408cc50
	// Params: [ Num(2) Size(0x8) ]
	void OnUseSkill(ESkillUISlot UISlot, int32_t SkillId);

	// Object: Function DFMVehicle.DFMFSM_CharacterVehicleControlAction.OnStartLocalFocus
	// Flags: [Final|Native|Private]
	// Offset: 0x1408cbac
	// Params: [ Num(1) Size(0x8) ]
	void OnStartLocalFocus(struct AActor* TargetActor);

	// Object: Function DFMVehicle.DFMFSM_CharacterVehicleControlAction.OnHUDViewsAsyncLoadComplete
	// Flags: [Final|Native|Public]
	// Offset: 0x1408cb98
	// Params: [ Num(0) Size(0x0) ]
	void OnHUDViewsAsyncLoadComplete();

	// Object: Function DFMVehicle.DFMFSM_CharacterVehicleControlAction.OnClientCarInfoArrived
	// Flags: [Native|Public]
	// Offset: 0xf44791c
	// Params: [ Num(3) Size(0x10) ]
	void OnClientCarInfoArrived(ECharacterFSMEventDefine FSMEvent, float Value, struct UObject* EventObject);

	// Object: Function DFMVehicle.DFMFSM_CharacterVehicleControlAction.OnCheckDataTickDelegate
	// Flags: [Final|Native|Public]
	// Offset: 0x1408cb84
	// Params: [ Num(0) Size(0x0) ]
	void OnCheckDataTickDelegate();

	// Object: Function DFMVehicle.DFMFSM_CharacterVehicleControlAction.OnAfterRedeploy
	// Flags: [Final|Native|Private]
	// Offset: 0x1011567c
	// Params: [ Num(0) Size(0x0) ]
	void OnAfterRedeploy();

	// Object: Function DFMVehicle.DFMFSM_CharacterVehicleControlAction.JumpButtonPressed
	// Flags: [Final|Native|Public]
	// Offset: 0x1408ca68
	// Params: [ Num(3) Size(0x10) ]
	void JumpButtonPressed(ECharacterFSMEventDefine FSMEvent, float Value, struct UObject* EventObject);

	// Object: Function DFMVehicle.DFMFSM_CharacterVehicleControlAction.ClientOwnerXPPChange
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(1) Size(0x1) ]
	void ClientOwnerXPPChange(uint8_t IsUnderFPP);

	// Object: Function DFMVehicle.DFMFSM_CharacterVehicleControlAction.ClientOwnerStartDriveCar
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(0) Size(0x0) ]
	void ClientOwnerStartDriveCar();

	// Object: Function DFMVehicle.DFMFSM_CharacterVehicleControlAction.ClientOwnerExitDriveCar
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(0) Size(0x0) ]
	void ClientOwnerExitDriveCar();

	// Object: Function DFMVehicle.DFMFSM_CharacterVehicleControlAction.ClientOtherStartDriveCar
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(0) Size(0x0) ]
	void ClientOtherStartDriveCar();

	// Object: Function DFMVehicle.DFMFSM_CharacterVehicleControlAction.ClientOtherExitDriveCar
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(0) Size(0x0) ]
	void ClientOtherExitDriveCar();
	DEFINE_UE_CLASS_HELPERS(UDFMFSM_CharacterVehicleControlAction, "DFMFSM_CharacterVehicleControlAction")

};

// Object: Class DFMVehicle.DFMFSM_CharacterVehicleInputControlAction
// Size: 0x118 (Inherited: 0x108)
struct UDFMFSM_CharacterVehicleInputControlAction : UDFMFSMAction
{
	struct FGameplayTag EventTag; // 0x108(0x8)
	uint8_t bCarryBodyCheck : 1; // 0x110(0x1), Mask(0x1)
	uint8_t BitPad_0x110_1 : 7; // 0x110(0x1)
	uint8_t Pad_0x111[0x7]; // 0x111(0x7)


	// Object: Function DFMVehicle.DFMFSM_CharacterVehicleInputControlAction.TryTexiOffCar
	// Flags: [Native|Public]
	// Offset: 0x1408d190
	// Params: [ Num(3) Size(0x10) ]
	void TryTexiOffCar(ECharacterFSMEventDefine FSMEvent, float Value, struct UObject* EventObject);

	// Object: Function DFMVehicle.DFMFSM_CharacterVehicleInputControlAction.TryStopDrivingCar
	// Flags: [Native|Public]
	// Offset: 0x1408d06c
	// Params: [ Num(3) Size(0x10) ]
	void TryStopDrivingCar(ECharacterFSMEventDefine FSMEvent, float Value, struct UObject* EventObject);

	// Object: Function DFMVehicle.DFMFSM_CharacterVehicleInputControlAction.ClientTrySwitchSeat
	// Flags: [Native|Public]
	// Offset: 0xf7d3d00
	// Params: [ Num(3) Size(0x10) ]
	void ClientTrySwitchSeat(ECharacterFSMEventDefine FSMEvent, float Value, struct UObject* EventObject);
	DEFINE_UE_CLASS_HELPERS(UDFMFSM_CharacterVehicleInputControlAction, "DFMFSM_CharacterVehicleInputControlAction")

};

// Object: Class DFMVehicle.DFMFSM_VehicleCheckAction
// Size: 0x110 (Inherited: 0x108)
struct UDFMFSM_VehicleCheckAction : UDFMFSMAction
{
	struct FGameplayTag EventTag; // 0x108(0x8)


	// Object: Function DFMVehicle.DFMFSM_VehicleCheckAction.TryTexiCar
	// Flags: [Final|Native|Public]
	// Offset: 0x1408d500
	// Params: [ Num(3) Size(0x10) ]
	void TryTexiCar(ECharacterFSMEventDefine FSMEvent, float Value, struct UObject* EventObject);

	// Object: Function DFMVehicle.DFMFSM_VehicleCheckAction.TryGetOnCarWithSpecificSeat
	// Flags: [Final|Native|Public]
	// Offset: 0x1408d3e4
	// Params: [ Num(3) Size(0x10) ]
	void TryGetOnCarWithSpecificSeat(ECharacterFSMEventDefine FSMEvent, float Value, struct UObject* EventObject);

	// Object: Function DFMVehicle.DFMFSM_VehicleCheckAction.TryDriveCar
	// Flags: [Final|Native|Public]
	// Offset: 0x1408d2c8
	// Params: [ Num(3) Size(0x10) ]
	void TryDriveCar(ECharacterFSMEventDefine FSMEvent, float Value, struct UObject* EventObject);
	DEFINE_UE_CLASS_HELPERS(UDFMFSM_VehicleCheckAction, "DFMFSM_VehicleCheckAction")

};

// Object: Class DFMVehicle.DFMFSM_VehicleDriveMoveAndRotateAction
// Size: 0x108 (Inherited: 0x108)
struct UDFMFSM_VehicleDriveMoveAndRotateAction : UDFMFSMAction
{

	// Object: Function DFMVehicle.DFMFSM_VehicleDriveMoveAndRotateAction.WheelieUp
	// Flags: [Native|Public]
	// Offset: 0x1408e208
	// Params: [ Num(3) Size(0x10) ]
	void WheelieUp(ECharacterFSMEventDefine FSMEvent, float Val, struct UObject* EventObject);

	// Object: Function DFMVehicle.DFMFSM_VehicleDriveMoveAndRotateAction.WheelieDown
	// Flags: [Native|Public]
	// Offset: 0x1408e0e4
	// Params: [ Num(3) Size(0x10) ]
	void WheelieDown(ECharacterFSMEventDefine FSMEvent, float Val, struct UObject* EventObject);

	// Object: Function DFMVehicle.DFMFSM_VehicleDriveMoveAndRotateAction.VehicleTrumpetUp
	// Flags: [Native|Public]
	// Offset: 0xfab83ac
	// Params: [ Num(3) Size(0x10) ]
	void VehicleTrumpetUp(ECharacterFSMEventDefine FSMEvent, float Val, struct UObject* EventObject);

	// Object: Function DFMVehicle.DFMFSM_VehicleDriveMoveAndRotateAction.VehicleTrumpetDown
	// Flags: [Native|Public]
	// Offset: 0xfab8288
	// Params: [ Num(3) Size(0x10) ]
	void VehicleTrumpetDown(ECharacterFSMEventDefine FSMEvent, float Val, struct UObject* EventObject);

	// Object: Function DFMVehicle.DFMFSM_VehicleDriveMoveAndRotateAction.VehicleHandBreakUp
	// Flags: [Native|Public]
	// Offset: 0x1408dfc0
	// Params: [ Num(3) Size(0x10) ]
	void VehicleHandBreakUp(ECharacterFSMEventDefine FSMEvent, float Val, struct UObject* EventObject);

	// Object: Function DFMVehicle.DFMFSM_VehicleDriveMoveAndRotateAction.VehicleHandBreakDown
	// Flags: [Native|Public]
	// Offset: 0x1408de9c
	// Params: [ Num(3) Size(0x10) ]
	void VehicleHandBreakDown(ECharacterFSMEventDefine FSMEvent, float Val, struct UObject* EventObject);

	// Object: Function DFMVehicle.DFMFSM_VehicleDriveMoveAndRotateAction.TurnAtRate
	// Flags: [Native|Public]
	// Offset: 0x1408ddf0
	// Params: [ Num(1) Size(0x4) ]
	void TurnAtRate(float Rate);

	// Object: Function DFMVehicle.DFMFSM_VehicleDriveMoveAndRotateAction.Turn
	// Flags: [Native|Public]
	// Offset: 0x1408dccc
	// Params: [ Num(3) Size(0x10) ]
	void Turn(ECharacterFSMEventDefine FSMEvent, float Val, struct UObject* EventObject);

	// Object: Function DFMVehicle.DFMFSM_VehicleDriveMoveAndRotateAction.StoppieUp
	// Flags: [Native|Public]
	// Offset: 0x1408dba8
	// Params: [ Num(3) Size(0x10) ]
	void StoppieUp(ECharacterFSMEventDefine FSMEvent, float Val, struct UObject* EventObject);

	// Object: Function DFMVehicle.DFMFSM_VehicleDriveMoveAndRotateAction.StoppieDown
	// Flags: [Native|Public]
	// Offset: 0x1408da84
	// Params: [ Num(3) Size(0x10) ]
	void StoppieDown(ECharacterFSMEventDefine FSMEvent, float Val, struct UObject* EventObject);

	// Object: Function DFMVehicle.DFMFSM_VehicleDriveMoveAndRotateAction.MoveUp
	// Flags: [Final|Native|Public]
	// Offset: 0x1408d9e0
	// Params: [ Num(1) Size(0x4) ]
	void MoveUp(float Value);

	// Object: Function DFMVehicle.DFMFSM_VehicleDriveMoveAndRotateAction.MoveRoll
	// Flags: [Final|Native|Public]
	// Offset: 0x1408d93c
	// Params: [ Num(1) Size(0x4) ]
	void MoveRoll(float Value);

	// Object: Function DFMVehicle.DFMFSM_VehicleDriveMoveAndRotateAction.MoveRight
	// Flags: [Final|Native|Public]
	// Offset: 0x1408d898
	// Params: [ Num(1) Size(0x4) ]
	void MoveRight(float Value);

	// Object: Function DFMVehicle.DFMFSM_VehicleDriveMoveAndRotateAction.MoveForward
	// Flags: [Final|Native|Public]
	// Offset: 0x1408d7f4
	// Params: [ Num(1) Size(0x4) ]
	void MoveForward(float Value);

	// Object: Function DFMVehicle.DFMFSM_VehicleDriveMoveAndRotateAction.LookUpAtRate
	// Flags: [Native|Public]
	// Offset: 0x1408d748
	// Params: [ Num(1) Size(0x4) ]
	void LookUpAtRate(float Rate);

	// Object: Function DFMVehicle.DFMFSM_VehicleDriveMoveAndRotateAction.LookUp
	// Flags: [Native|Public]
	// Offset: 0x1408d624
	// Params: [ Num(3) Size(0x10) ]
	void LookUp(ECharacterFSMEventDefine FSMEvent, float Val, struct UObject* EventObject);
	DEFINE_UE_CLASS_HELPERS(UDFMFSM_VehicleDriveMoveAndRotateAction, "DFMFSM_VehicleDriveMoveAndRotateAction")

};

// Object: Class DFMVehicle.DFMVehicleDashBoardExtension
// Size: 0x68 (Inherited: 0x50)
struct UDFMVehicleDashBoardExtension : UDFMVehicleAssembleExtensionBase
{
	int32_t VelocityMaterialIndex; // 0x4C(0x4)
	struct FName VelocityParamterName; // 0x50(0x8)
	struct UMaterialInstanceDynamic* VelocityMaterial; // 0x58(0x8)
	uint8_t Pad_0x64[0x4]; // 0x64(0x4)


	// Object: Function DFMVehicle.DFMVehicleDashBoardExtension.OnXPPChange
	// Flags: [Final|Native|Protected]
	// Offset: 0xf5b67fc
	// Params: [ Num(1) Size(0x1) ]
	void OnXPPChange(uint8_t bIsFPP);
	DEFINE_UE_CLASS_HELPERS(UDFMVehicleDashBoardExtension, "DFMVehicleDashBoardExtension")

};

// Object: Class DFMVehicle.DFMHelicopterDashBoardExtension
// Size: 0x80 (Inherited: 0x68)
struct UDFMHelicopterDashBoardExtension : UDFMVehicleDashBoardExtension
{
	struct UMaterialInstanceDynamic* HeightMaterial; // 0x68(0x8)
	int32_t HeightMaterialIndex; // 0x70(0x4)
	uint8_t Pad_0x74[0x4]; // 0x74(0x4)
	struct FName HeightParamterName; // 0x78(0x8)
	DEFINE_UE_CLASS_HELPERS(UDFMHelicopterDashBoardExtension, "DFMHelicopterDashBoardExtension")

};

// Object: Class DFMVehicle.DFMHelicopterMovementComponent
// Size: 0x1340 (Inherited: 0x2D8)
struct UDFMHelicopterMovementComponent : UWheeledVehicleMovementComponent
{
	uint8_t Pad_0x2D8[0xC]; // 0x2D8(0xC)
	struct FHelicopterInputState ReplicatedInputState; // 0x2E4(0x14)
	struct FHelicopterInputStatePC ReplicatedInputStatePC; // 0x2F8(0x10)
	float ReplicatedLiftRpm; // 0x308(0x4)
	struct FHelicopterInputState LocalInputState; // 0x30C(0x14)
	struct FHelicopterInputStatePC LocalInputStatePC; // 0x320(0x10)
	uint32_t ServerReplicationPacketNo; // 0x330(0x4)
	float RawRollInput; // 0x334(0x4)
	float RawUpInput; // 0x338(0x4)
	struct FVehicleInputInterpRate RollInputRate; // 0x33C(0x8)
	struct FVehicleInputInterpRate UpInputRate; // 0x344(0x8)
	uint8_t Pad_0x34C[0xC]; // 0x34C(0xC)
	float IgnoreLockHeight; // 0x358(0x4)
	float HitDamageCDTime; // 0x35C(0x4)
	float HitDamagePercent; // 0x360(0x4)
	float LinearDampWithoutDriver; // 0x364(0x4)
	float AngularDampWithoutDriver; // 0x368(0x4)
	float LinearDampMobile; // 0x36C(0x4)
	float AngularDampMobile; // 0x370(0x4)
	float MinFlyHeight; // 0x374(0x4)
	float MaxLiftRpm; // 0x378(0x4)
	float MinLiftRpm; // 0x37C(0x4)
	float MaxLiftAcceleration; // 0x380(0x4)
	float MaxForwardAcceleration; // 0x384(0x4)
	float MinForwardAccelerationWithThrottle; // 0x388(0x4)
	float MinForwardAcceleration; // 0x38C(0x4)
	float MaxRightAcceleration; // 0x390(0x4)
	float FallRatio; // 0x394(0x4)
	float MinDecreaseForceHeight; // 0x398(0x4)
	float MaxLiftHeight; // 0x39C(0x4)
	float LiftChangeSpeed; // 0x3A0(0x4)
	float LiftChangeSpeedWithoutDriver; // 0x3A4(0x4)
	float MaxRollVelocity; // 0x3A8(0x4)
	uint8_t Pad_0x3AC[0x4]; // 0x3AC(0x4)
	struct UCurveFloat* RollForceCurve; // 0x3B0(0x8)
	struct UCurveFloat* DampingRollForceCurve; // 0x3B8(0x8)
	float MaxPitchVelocity; // 0x3C0(0x4)
	uint8_t Pad_0x3C4[0x4]; // 0x3C4(0x4)
	struct UCurveFloat* PitchForceCurve; // 0x3C8(0x8)
	struct UCurveFloat* DampingPitchForceCurve; // 0x3D0(0x8)
	float MaxYawVelocity; // 0x3D8(0x4)
	uint8_t Pad_0x3DC[0x4]; // 0x3DC(0x4)
	struct UCurveFloat* YawForceCurve; // 0x3E0(0x8)
	struct UCurveFloat* DampingYawForceCurve; // 0x3E8(0x8)
	struct UCurveFloat* MobileAngularVelocityCurve; // 0x3F0(0x8)
	float StopStrength; // 0x3F8(0x4)
	struct FVector2D AimPitchRange; // 0x3FC(0x8)
	struct FVector2D FPPMoveInputRatio; // 0x404(0x8)
	float LinearDampPC; // 0x40C(0x4)
	float AngularDampPC; // 0x410(0x4)
	float UpLiftChangeSpeedPC; // 0x414(0x4)
	float DownLiftChangeSpeedPC; // 0x418(0x4)
	float MinFlyHeightPC; // 0x41C(0x4)
	float MaxLiftRpmPC; // 0x420(0x4)
	float MinLiftRpmPC; // 0x424(0x4)
	float MaxLiftHeightPC; // 0x428(0x4)
	uint8_t Pad_0x42C[0x4]; // 0x42C(0x4)
	struct UCurveFloat* ForwardAccelerationRatioCurvePC; // 0x430(0x8)
	struct UCurveFloat* RightAccelerationRatioCurvePC; // 0x438(0x8)
	struct UCurveFloat* UpAccelerationRatioCurvePC; // 0x440(0x8)
	struct UCurveFloat* LiftAccelerationCurvePC; // 0x448(0x8)
	float MinDecreaseForceHeightPC; // 0x450(0x4)
	uint8_t Pad_0x454[0x4]; // 0x454(0x4)
	struct FRuntimeFloatCurve LinearVelocityWithInputCurvePCW; // 0x458(0xA0)
	struct FRuntimeFloatCurve LinearVelocityRatioWithInputCurvePCW; // 0x4F8(0xA0)
	struct FRuntimeFloatCurve LinearVelocityWithInputCurvePCS; // 0x598(0xA0)
	struct FRuntimeFloatCurve LinearVelocityAccelerationDebuffCurvePC; // 0x638(0xA0)
	struct FRuntimeFloatCurve NormalLinearVelocityDampingCurveXPC; // 0x6D8(0xA0)
	struct FRuntimeFloatCurve NormalLinearVelocityDampingCurveYPC; // 0x778(0xA0)
	struct FRuntimeFloatCurve NormalLinearVelocityDampingCurveZPC; // 0x818(0xA0)
	struct FVector PitchAccelerationPosOffsetPC; // 0x8B8(0xC)
	uint8_t Pad_0x8C4[0x4]; // 0x8C4(0x4)
	struct FRuntimeFloatCurve PitchAccelerationCurvePC; // 0x8C8(0xA0)
	struct UCurveFloat* NormalPitchVelocityDampingCurvePC; // 0x968(0x8)
	struct FVector RollAccelerationPosOffsetPC; // 0x970(0xC)
	uint8_t Pad_0x97C[0x4]; // 0x97C(0x4)
	struct FRuntimeFloatCurve RollAccelerationCurvePC; // 0x980(0xA0)
	struct UCurveFloat* NormalRollVelocityDampingCurvePC; // 0xA20(0x8)
	struct FVector YawAccelerationPosOffsetPC; // 0xA28(0xC)
	uint8_t Pad_0xA34[0x4]; // 0xA34(0x4)
	struct FRuntimeFloatCurve YawAccelerationCurvePC; // 0xA38(0xA0)
	struct UCurveFloat* NormalYawVelocityDampingCurvePC; // 0xAD8(0x8)
	struct FRuntimeFloatCurve FPPMouseInputPitchRatioPC; // 0xAE0(0xA0)
	struct FRuntimeFloatCurve FPPMouseInputRollRatioPC; // 0xB80(0xA0)
	struct FRuntimeFloatCurve FPPMouseInputYawRatioPC; // 0xC20(0xA0)
	struct FRuntimeFloatCurve TPPMouseInputPitchRatioPC; // 0xCC0(0xA0)
	struct FRuntimeFloatCurve TPPMouseInputRollRatioPC; // 0xD60(0xA0)
	struct FRuntimeFloatCurve TPPMouseInputYawRatioPC; // 0xE00(0xA0)
	struct FRuntimeFloatCurve PitchBalanceAccelerationPC; // 0xEA0(0xA0)
	float RollBalanceThresholdPC; // 0xF40(0x4)
	uint8_t Pad_0xF44[0x4]; // 0xF44(0x4)
	struct FRuntimeFloatCurve RollBalanceAccelerationPC; // 0xF48(0xA0)
	float PitchBalanceThresholdPC; // 0xFE8(0x4)
	uint8_t IsNeedBalanceWithoutInputPC : 1; // 0xFEC(0x1), Mask(0x1)
	uint8_t BitPad_0xFEC_1 : 7; // 0xFEC(0x1)
	uint8_t Pad_0xFED[0x3]; // 0xFED(0x3)
	struct FRuntimeFloatCurve LandRollBalanceAccelerationPC; // 0xFF0(0xA0)
	struct FRuntimeFloatCurve LandPitchBalanceAccelerationPC; // 0x1090(0xA0)
	struct FVector2D LandBalanceStartAnglePC; // 0x1130(0x8)
	float LandBalanceHitNormalRatio; // 0x1138(0x4)
	float LandBalanceHitFriction; // 0x113C(0x4)
	float ContactWallLiftDebuffRatio; // 0x1140(0x4)
	float ContactWallLiftDebuffTime; // 0x1144(0x4)
	struct FRuntimeFloatCurve SideCollisionKeepBalanceCurve; // 0x1148(0xA0)
	struct UCurveFloat* InverseLiftAccelerationCurvePC; // 0x11E8(0x8)
	uint8_t Pad_0x11F0[0x150]; // 0x11F0(0x150)


	// Object: Function DFMVehicle.DFMHelicopterMovementComponent.SetUpInput
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x1408e9a4
	// Params: [ Num(1) Size(0x4) ]
	void SetUpInput(float Steering);

	// Object: Function DFMVehicle.DFMHelicopterMovementComponent.SetRollInput
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x1408e900
	// Params: [ Num(1) Size(0x4) ]
	void SetRollInput(float Steering);

	// Object: Function DFMVehicle.DFMHelicopterMovementComponent.OnVehicleHitCallback
	// Flags: [Final|Native|Protected|HasOutParms|HasDefaults]
	// Offset: 0x1408e784
	// Params: [ Num(4) Size(0xA4) ]
	void OnVehicleHitCallback(struct AActor* SelfActor, struct AActor* OtherActor, struct FVector NormalImpulse, const struct FHitResult& Hit);
	DEFINE_UE_CLASS_HELPERS(UDFMHelicopterMovementComponent, "DFMHelicopterMovementComponent")

};

// Object: Class DFMVehicle.DFMVehicleSocketAniComponent
// Size: 0x130 (Inherited: 0xF8)
struct UDFMVehicleSocketAniComponent : UActorComponent
{
	struct UWheeledVehicleMovementComponent* WheeledVehicleMovement; // 0xF8(0x8)
	struct TArray<struct USceneComponent*> WheelSockets; // 0x100(0x10)
	uint8_t Pad_0x110[0x20]; // 0x110(0x20)
	DEFINE_UE_CLASS_HELPERS(UDFMVehicleSocketAniComponent, "DFMVehicleSocketAniComponent")

};

// Object: Class DFMVehicle.DFMHelicopterSocketAniComponent
// Size: 0x200 (Inherited: 0x130)
struct UDFMHelicopterSocketAniComponent : UDFMVehicleSocketAniComponent
{
	struct FName FrontPropellerRootSocketName; // 0x130(0x8)
	struct FName FrontPropellerSocketName; // 0x138(0x8)
	struct FName FrontPropellerEffectName; // 0x140(0x8)
	struct FName BackPropellerSocketName; // 0x148(0x8)
	float FrontPropellerRotSpeed; // 0x150(0x4)
	float BackPropellerRotSpeed; // 0x154(0x4)
	uint8_t bAlwayRotate : 1; // 0x158(0x1), Mask(0x1)
	uint8_t BitPad_0x158_1 : 7; // 0x158(0x1)
	uint8_t Pad_0x159[0x7]; // 0x159(0x7)
	struct UDFMHelicopterMovementComponent* HelicopterMovement; // 0x160(0x8)
	uint8_t Pad_0x168[0x98]; // 0x168(0x98)
	DEFINE_UE_CLASS_HELPERS(UDFMHelicopterSocketAniComponent, "DFMHelicopterSocketAniComponent")

};

// Object: Class DFMVehicle.DFMVehicleSprintComponent
// Size: 0x3B70 (Inherited: 0x2D0)
struct UDFMVehicleSprintComponent : UGPVehicleSpringArmComponent
{
	struct FVector DefaultSocketOffset; // 0x2D0(0xC)
	struct FVector DefaultTargetOffset; // 0x2DC(0xC)
	uint8_t IsLocalRotationOffset : 1; // 0x2E8(0x1), Mask(0x1)
	uint8_t BitPad_0x2E8_1 : 7; // 0x2E8(0x1)
	uint8_t Pad_0x2E9[0x3]; // 0x2E9(0x3)
	struct FRotator DefaultRotationOffset; // 0x2EC(0xC)
	uint8_t IsLocalPostRotationOffset : 1; // 0x2F8(0x1), Mask(0x1)
	uint8_t BitPad_0x2F8_1 : 7; // 0x2F8(0x1)
	uint8_t Pad_0x2F9[0x3]; // 0x2F9(0x3)
	struct FRotator PostRotationOffset; // 0x2FC(0xC)
	float DefaultSpringArmLength; // 0x308(0x4)
	struct FVector2D DefineCameraLagVelocityRange; // 0x30C(0x8)
	uint8_t NeedDriverFollowVehicleRotation : 1; // 0x314(0x1), Mask(0x1)
	uint8_t BitPad_0x314_1 : 7; // 0x314(0x1)
	uint8_t bModifyCameraCollisionCheckedPoint : 1; // 0x315(0x1), Mask(0x1)
	uint8_t BitPad_0x315_1 : 7; // 0x315(0x1)
	uint8_t Pad_0x316[0x2]; // 0x316(0x2)
	struct FVector2D ResetVehicleRotation_InRangeYaw; // 0x318(0x8)
	struct FVector2D ResetVehicleRotation_InRangePitch; // 0x320(0x8)
	uint8_t IsCloseFPPOffset : 1; // 0x328(0x1), Mask(0x1)
	uint8_t BitPad_0x328_1 : 7; // 0x328(0x1)
	uint8_t Pad_0x329[0x3]; // 0x329(0x3)
	float FollowVehicleLerpSpeed_TPP; // 0x32C(0x4)
	float FollowVehicleLerpSpeed_FPP; // 0x330(0x4)
	float ResetFollowVehicleLerpSpeed; // 0x334(0x4)
	uint8_t bEnableArmOriginTraceCheck : 1; // 0x338(0x1), Mask(0x1)
	uint8_t BitPad_0x338_1 : 7; // 0x338(0x1)
	uint8_t Pad_0x339[0x3]; // 0x339(0x3)
	struct FVector ArmOriginCheckStartOffset; // 0x33C(0xC)
	uint8_t bEnableArmOriginTraceLerp : 1; // 0x348(0x1), Mask(0x1)
	uint8_t BitPad_0x348_1 : 7; // 0x348(0x1)
	uint8_t Pad_0x349[0x3]; // 0x349(0x3)
	float ArmOriginTraceLerpSpeed; // 0x34C(0x4)
	struct FVehicleCameraSpringArmLengthConfig SpringArmLengthConfig; // 0x350(0x140)
	struct FTiltedVehicleCameraFollowConfig TiltedVehicleCameraFollowConfig; // 0x490(0x28)
	struct FFixVehicleCameraRotationConfig FixVehicleCameraRotationConfig; // 0x4B8(0x64)
	struct FVehicleCameraSpringParameter TargetOffsetSpringParameterInX; // 0x51C(0x8)
	float VelocityOffsetScaleInX; // 0x524(0x4)
	struct FVehicleCameraSpringParameter TargetOffsetSpringParameterInY; // 0x528(0x8)
	float VelocityOffsetScaleInY; // 0x530(0x4)
	uint8_t Pad_0x534[0x4]; // 0x534(0x4)
	struct FVehicleCameraVelocityOffsetConfig VelocityOffsetScaleConfigInY; // 0x538(0xA0)
	struct FVehicleCameraSpringParameter TargetOffsetSpringParameterInZ; // 0x5D8(0x8)
	float VelocityOffsetScaleInZ; // 0x5E0(0x4)
	float VelocityOffsetDownScaleInZ; // 0x5E4(0x4)
	float BumpOffsetScaleInZ; // 0x5E8(0x4)
	float AngularVelocityOffsetScaleInZ; // 0x5EC(0x4)
	float AngularVelocityOffsetDownScaleInZ; // 0x5F0(0x4)
	float OffsetZMin; // 0x5F4(0x4)
	float OffsetZMax; // 0x5F8(0x4)
	float CameraYawFollowAngleOffset; // 0x5FC(0x4)
	struct FVehicleCameraSpringParameter CameraYawFollowSpringParameter; // 0x600(0x8)
	uint8_t bSmoothCameraLocationAfterCollision : 1; // 0x608(0x1), Mask(0x1)
	uint8_t BitPad_0x608_1 : 7; // 0x608(0x1)
	uint8_t Pad_0x609[0x3]; // 0x609(0x3)
	float StretchDelayTimeAfterCollision; // 0x60C(0x4)
	float SmoothSpeedOfCameraLocationAfterCollision; // 0x610(0x4)
	uint8_t Pad_0x614[0x4]; // 0x614(0x4)
	struct ADFMVehicleBase* CurrentVehicle; // 0x618(0x8)
	uint8_t Pad_0x620[0x3550]; // 0x620(0x3550)


	// Object: Function DFMVehicle.DFMVehicleSprintComponent.OnCharacterSwitchSeat
	// Flags: [Final|Native|Protected]
	// Offset: 0xf68c2b4
	// Params: [ Num(3) Size(0x18) ]
	void OnCharacterSwitchSeat(struct AActor* CHARACTER, struct FName OldSeatName, struct FName NewSeatName);
	DEFINE_UE_CLASS_HELPERS(UDFMVehicleSprintComponent, "DFMVehicleSprintComponent")

};

// Object: Class DFMVehicle.DFMHelicopterSpringComponent
// Size: 0x3B80 (Inherited: 0x3B70)
struct UDFMHelicopterSpringComponent : UDFMVehicleSprintComponent
{
	float FollowHelicopterLerpSpeedYaw_TPP; // 0x3B6C(0x4)
	float FollowHelicopterLerpSpeedPitch_TPP; // 0x3B70(0x4)
	uint8_t Pad_0x3B78[0x8]; // 0x3B78(0x8)
	DEFINE_UE_CLASS_HELPERS(UDFMHelicopterSpringComponent, "DFMHelicopterSpringComponent")

};

// Object: Class DFMVehicle.DFMJet
// Size: 0x1A80 (Inherited: 0x1940)
struct ADFMJet : ADFMVehicleBase
{
	uint8_t Pad_0x1940[0x10]; // 0x1940(0x10)
	struct UDFMJetMovementComponent* MovementComp; // 0x1950(0x8)
	struct UDFMVehicleGPSkeletalMeshComponent* AnimSkeletalMeshComp; // 0x1958(0x8)
	struct UStaticMeshComponent* BodyMeshComp; // 0x1960(0x8)
	struct UMeshComponent* CockpitMeshComp1P; // 0x1968(0x8)
	struct UGPStaticMeshComponent* FrontWheelStaticMeshComp; // 0x1970(0x8)
	struct UGPStaticMeshComponent* LeftBackWheelStaticMeshComp; // 0x1978(0x8)
	struct UGPStaticMeshComponent* RightBackWheelStaticMeshComp; // 0x1980(0x8)
	struct UDFMJetAudioComponent* JetAudioComp; // 0x1988(0x8)
	struct UDFMJetSpringComponent* JetSpringComp; // 0x1990(0x8)
	struct UDFMJetVehicleEffectComponent* JetEffectComp; // 0x1998(0x8)
	struct TArray<struct UActorComponent*> MagicBulletOverlapComps; // 0x19A0(0x10)
	struct UClientVehicleSettingHD* ClientVehicleSettingHD; // 0x19B0(0x8)
	struct UClientSensitivitySettingHD* ClientSensitivitySettingHD; // 0x19B8(0x8)
	struct UClientVehicleSetting* ClientVehicleSetting; // 0x19C0(0x8)
	float LandingGearRetractHeight; // 0x19C8(0x4)
	float LandingGearDropHeight; // 0x19CC(0x4)
	float SuspLandingGearRetractHeight; // 0x19D0(0x4)
	float SuspLandingGearDropHeight; // 0x19D4(0x4)
	float LandingGearTime; // 0x19D8(0x4)
	float LandingGearChangeInterval; // 0x19DC(0x4)
	float FrontWheelRadius; // 0x19E0(0x4)
	float BackWheelRadius; // 0x19E4(0x4)
	float InAirWheelLinearVelAcc; // 0x19E8(0x4)
	float MaxUpdateWheelDistPC; // 0x19EC(0x4)
	float MaxUpdateWheelDistMobile; // 0x19F0(0x4)
	uint8_t Pad_0x19F4[0x4]; // 0x19F4(0x4)
	struct TArray<uint64_t> RealBulletMeshWeaponIds; // 0x19F8(0x10)
	struct TArray<struct FVector2D> CompTickIntervalConfig; // 0x1A08(0x10)
	uint8_t bEnableMagicBullet : 1; // 0x1A18(0x1), Mask(0x1)
	uint8_t BitPad_0x1A18_1 : 7; // 0x1A18(0x1)
	uint8_t Pad_0x1A19[0x7]; // 0x1A19(0x7)
	struct TArray<uint64_t> MagicWeaponIds; // 0x1A20(0x10)
	float MagicBulletEffectDistance; // 0x1A30(0x4)
	struct FName MagicBulletCompTag; // 0x1A34(0x8)
	uint8_t Pad_0x1A3C[0x4]; // 0x1A3C(0x4)
	struct TArray<int32_t> VehicleWeaponFireCount; // 0x1A40(0x10)
	struct TArray<int32_t> VehicleWeaponAmmoCount; // 0x1A50(0x10)
	uint8_t bHasDriverRep : 1; // 0x1A60(0x1), Mask(0x1)
	uint8_t BitPad_0x1A60_1 : 7; // 0x1A60(0x1)
	uint8_t Pad_0x1A61[0x1F]; // 0x1A61(0x1F)


	// Object: Function DFMVehicle.DFMJet.OnRep_VehicleWeaponAmmoCountChanged
	// Flags: [Final|Native|Protected]
	// Offset: 0x14091554
	// Params: [ Num(0) Size(0x0) ]
	void OnRep_VehicleWeaponAmmoCountChanged();

	// Object: Function DFMVehicle.DFMJet.OnGamePlaySubModeChanged
	// Flags: [Final|Native|Public]
	// Offset: 0x140914b0
	// Params: [ Num(1) Size(0x1) ]
	void OnGamePlaySubModeChanged(EDFMGamePlaySubMode NewGamePlaySubMode);

	// Object: Function DFMVehicle.DFMJet.GMSetVehicleGravity
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x14091404
	// Params: [ Num(1) Size(0x1) ]
	void GMSetVehicleGravity(uint8_t bEnable);

	// Object: Function DFMVehicle.DFMJet.GetJetSpringComp
	// Flags: [Final|Native|Public]
	// Offset: 0x140913d0
	// Params: [ Num(1) Size(0x8) ]
	struct UDFMJetSpringComponent* GetJetSpringComp();

	// Object: Function DFMVehicle.DFMJet.GetJetMovementComp
	// Flags: [Final|Native|Public]
	// Offset: 0x140913b4
	// Params: [ Num(1) Size(0x8) ]
	struct UDFMJetMovementComponent* GetJetMovementComp();

	// Object: Function DFMVehicle.DFMJet.GetJetEffectComp
	// Flags: [Final|Native|Public]
	// Offset: 0x14091380
	// Params: [ Num(1) Size(0x8) ]
	struct UDFMJetVehicleEffectComponent* GetJetEffectComp();

	// Object: Function DFMVehicle.DFMJet.GetJetAudioComp
	// Flags: [Final|Native|Public]
	// Offset: 0x1409134c
	// Params: [ Num(1) Size(0x8) ]
	struct UDFMJetAudioComponent* GetJetAudioComp();

	// Object: Function DFMVehicle.DFMJet.GetCockpitMeshComp1P
	// Flags: [Final|Native|Public]
	// Offset: 0x14091330
	// Params: [ Num(1) Size(0x8) ]
	struct UMeshComponent* GetCockpitMeshComp1P();

	// Object: Function DFMVehicle.DFMJet.GetAnimSkeletalMeshComponent
	// Flags: [Final|Native|Public]
	// Offset: 0x14091314
	// Params: [ Num(1) Size(0x8) ]
	struct USkeletalMeshComponent* GetAnimSkeletalMeshComponent();
	DEFINE_UE_CLASS_HELPERS(ADFMJet, "DFMJet")

};

// Object: Class DFMVehicle.DFMJetAnimInstance
// Size: 0xB00 (Inherited: 0x270)
struct UDFMJetAnimInstance : UAnimInstance
{
	float NozzleConstInterpSpeed; // 0x26C(0x4)
	float CockpitOpenTime; // 0x270(0x4)
	float PitchFlapLerpSpeed; // 0x274(0x4)
	float YawFlapLerpSpeed; // 0x278(0x4)
	float RollFlapLerpSpeed; // 0x27C(0x4)
	float SuspLerpSpeed; // 0x280(0x4)
	struct FName FrontWheelBoneName; // 0x284(0x8)
	struct FName BackLeftWheelBoneName; // 0x28C(0x8)
	struct FName BackRightWheelBoneName; // 0x294(0x8)
	float FlapScalar; // 0x29C(0x4)
	float SuspOffset; // 0x2A0(0x4)
	struct FVector2D LandingGearMinMaxProgress; // 0x2A4(0x8)
	struct FVector2D DriveModeMinMaxProgress; // 0x2AC(0x8)
	struct FVector2D CockpitMinMaxProgress; // 0x2B4(0x8)
	struct FVector2D NozzleMinMaxProgress; // 0x2BC(0x8)
	uint8_t Pad_0x2C8[0x8]; // 0x2C8(0x8)
	struct FDFMJetAnimInstanceProxy LocalProxy; // 0x2D0(0x800)
	struct UDFMVehicleAnimInteractorComponent* JetAnimComp; // 0xAD0(0x8)
	struct UDFMJetMovementComponent* JetMoveComp; // 0xAD8(0x8)
	struct ADFMJet* JetVehicle; // 0xAE0(0x8)
	struct USkeletalMeshComponent* JetAnimSkeletalMeshComp; // 0xAE8(0x8)
	uint8_t Pad_0xAF0[0x10]; // 0xAF0(0x10)
	DEFINE_UE_CLASS_HELPERS(UDFMJetAnimInstance, "DFMJetAnimInstance")

};

// Object: Class DFMVehicle.DFMJetAnimInstance_Jet
// Size: 0xB00 (Inherited: 0xB00)
struct UDFMJetAnimInstance_Jet : UDFMJetAnimInstance
{	DEFINE_UE_CLASS_HELPERS(UDFMJetAnimInstance_Jet, "DFMJetAnimInstance_Jet")

};

// Object: Class DFMVehicle.DFMJetAnimInstance_Osprey
// Size: 0x1300 (Inherited: 0xB00)
struct UDFMJetAnimInstance_Osprey : UDFMJetAnimInstance
{
	float RudderLerpSpeed; // 0xAF4(0x4)
	float RudderScalar; // 0xAF8(0x4)
	struct FDFMJetOspreyAnimInstanceProxy OspreyProxy; // 0xB00(0x800)
	DEFINE_UE_CLASS_HELPERS(UDFMJetAnimInstance_Osprey, "DFMJetAnimInstance_Osprey")

};

// Object: Class DFMVehicle.DFMJetAudioComponent
// Size: 0x1058 (Inherited: 0xFB8)
struct UDFMJetAudioComponent : UDFMVehicleAudioComponent
{
	struct FString JetOverloadVOString; // 0xFB8(0x10)
	uint8_t Pad_0xFC8[0x48]; // 0xFC8(0x48)
	struct ADFMJet* Jet; // 0x1010(0x8)
	struct UDFMJetMovementComponent* JetMoveComp; // 0x1018(0x8)
	EJetCockpitState CockpitAudioState; // 0x1020(0x1)
	EJetDriveModeState DriveModeAudioState; // 0x1021(0x1)
	uint8_t Pad_0x1022[0x36]; // 0x1022(0x36)
	DEFINE_UE_CLASS_HELPERS(UDFMJetAudioComponent, "DFMJetAudioComponent")

};

// Object: Class DFMVehicle.DFMJetMovementComponent
// Size: 0x4AA0 (Inherited: 0x2D8)
struct UDFMJetMovementComponent : UWheeledVehicleMovementComponent
{
	uint8_t Pad_0x2D8[0xC]; // 0x2D8(0xC)
	struct FJetInputStateMobile ReplicatedInputState; // 0x2E4(0x20)
	struct FJetInputStatePC ReplicatedInputStatePC; // 0x304(0x18)
	struct FJetInputStateMobile LocalInputState; // 0x31C(0x20)
	struct FJetInputStateMobile LocalRawInputState; // 0x33C(0x20)
	struct FJetInputStatePC LocalInputStatePC; // 0x35C(0x18)
	struct FJetInputStatePC LocalRawInputStatePC; // 0x374(0x18)
	float RawRollInput; // 0x38C(0x4)
	float RawUpInput; // 0x390(0x4)
	float ReplicatedJetSpeedUpEnergy; // 0x394(0x4)
	uint8_t ReplicatedSpeedUpStatus; // 0x398(0x1)
	EJetDriveMode RepJetDriveMode; // 0x399(0x1)
	uint8_t bIsJetInHoldState : 1; // 0x39A(0x1), Mask(0x1)
	uint8_t BitPad_0x39A_1 : 7; // 0x39A(0x1)
	EJetInputMode RepJetInputMode; // 0x39B(0x1)
	float ReplicatedLiftRpm; // 0x39C(0x4)
	float ReplicatedSuspRpm; // 0x3A0(0x4)
	struct FVector RepSeaLevelZeroLocation; // 0x3A4(0xC)
	float IgnoreLockHeight; // 0x3B0(0x4)
	float MaxLiftHeightPC; // 0x3B4(0x4)
	uint8_t Pad_0x3B8[0x4]; // 0x3B8(0x4)
	float MaxLiftHeight; // 0x3BC(0x4)
	float MaxLiftDownTorqueAcc; // 0x3C0(0x4)
	float LinearDampWithoutDriver; // 0x3C4(0x4)
	float AngularDampWithoutDriver; // 0x3C8(0x4)
	float LinearDampMobile; // 0x3CC(0x4)
	float AngularDampMobile; // 0x3D0(0x4)
	uint8_t bEnableOnGroundExtraDamping : 1; // 0x3D4(0x1), Mask(0x1)
	uint8_t BitPad_0x3D4_1 : 7; // 0x3D4(0x1)
	uint8_t Pad_0x3D5[0x3]; // 0x3D5(0x3)
	struct FRuntimeFloatCurve OnGroundExtraDampingCurve; // 0x3D8(0xA0)
	struct FRuntimeFloatCurve OnGroundRollForceScalarCurve; // 0x478(0xA0)
	struct FRuntimeFloatCurve OnGroundPitchForceScalarCurve; // 0x518(0xA0)
	struct FRuntimeFloatCurve OnGroundYawForceScalarCurve; // 0x5B8(0xA0)
	float LinearDampPC; // 0x658(0x4)
	float AngularDampPC; // 0x65C(0x4)
	float MaxRpmPC; // 0x660(0x4)
	float MinRpmPC; // 0x664(0x4)
	float IdleRpmPC; // 0x668(0x4)
	float AccMaxRpmPC; // 0x66C(0x4)
	float UpRpmChangeSpeedPC; // 0x670(0x4)
	float DownRpmChangeSpeedPC; // 0x674(0x4)
	float RpmChangeSpeedWithoutDriver; // 0x678(0x4)
	float SpeedupEngineExtraForce; // 0x67C(0x4)
	float ApplyStopInputDampingInputThreshold; // 0x680(0x4)
	uint8_t Pad_0x684[0x4]; // 0x684(0x4)
	struct FRuntimeFloatCurve RpmAccelerationCurvePC; // 0x688(0xA0)
	struct FRuntimeFloatCurve EngineAccRatioWithVelocityCurvePC; // 0x728(0xA0)
	struct FRuntimeFloatCurve EngineAccRatioWithZAngleCurvePC; // 0x7C8(0xA0)
	struct FRuntimeFloatCurve LiftAccelerationCurvePC; // 0x868(0xA0)
	struct FRuntimeFloatCurve LiftAccRatioWithVelocityCurvePC; // 0x908(0xA0)
	struct FRuntimeFloatCurve LiftAccRatioWithUpVectorCurvePC; // 0x9A8(0xA0)
	struct FRuntimeFloatCurve LiftAccRatioWithForwardVectorCurvePC; // 0xA48(0xA0)
	struct FRuntimeFloatCurve NormalLinearVelocityDampingCurveXPC; // 0xAE8(0xA0)
	struct FRuntimeFloatCurve PitchVelForXLinearVelDampingScalarCurvePC; // 0xB88(0xA0)
	struct FRuntimeFloatCurve NormalLinearVelocityDampingCurveYPC; // 0xC28(0xA0)
	struct FRuntimeFloatCurve NormalLinearVelocityDampingCurveZPC; // 0xCC8(0xA0)
	struct FRuntimeFloatCurve PitchAccelerationCurvePC; // 0xD68(0xA0)
	struct FRuntimeFloatCurve PitchSpeedupExtraAccelerationCurvePC; // 0xE08(0xA0)
	struct FRuntimeFloatCurve PitchAccRatioWithAngularVelocityCurvePC; // 0xEA8(0xA0)
	struct FRuntimeFloatCurve NormalPitchVelocityDampingCurvePC; // 0xF48(0xA0)
	struct FRuntimeFloatCurve PitchVelocityDampingWithInputCurvePC; // 0xFE8(0xA0)
	struct FRuntimeFloatCurve PitchVelocityDampingWithForwardSpeedCurvePC; // 0x1088(0xA0)
	struct FRuntimeFloatCurve RollAccelerationCurvePC; // 0x1128(0xA0)
	struct FRuntimeFloatCurve RollAccRatioWithAngularVelocityCurvePC; // 0x11C8(0xA0)
	struct FRuntimeFloatCurve NormalRollVelocityDampingCurvePC; // 0x1268(0xA0)
	struct FRuntimeFloatCurve RollVelocityDampingWithInputCurvePC; // 0x1308(0xA0)
	struct FRuntimeFloatCurve RollVelocityDampingWithForwardSpeedCurvePC; // 0x13A8(0xA0)
	struct FRuntimeFloatCurve YawAccelerationCurvePC; // 0x1448(0xA0)
	struct FRuntimeFloatCurve YawAccRatioWithAngularVelocityCurvePC; // 0x14E8(0xA0)
	struct FRuntimeFloatCurve NormalYawVelocityDampingCurvePC; // 0x1588(0xA0)
	struct FRuntimeFloatCurve YawVelocityDampingWithInputCurvePC; // 0x1628(0xA0)
	struct FRuntimeFloatCurve YawVelocityDampingWithForwardSpeedCurvePC; // 0x16C8(0xA0)
	struct FRuntimeFloatCurve PitchDampingWithReversePitchAngularVelCurvePC; // 0x1768(0xA0)
	struct FRuntimeFloatCurve PitchDampingWithReversePitchAngularVelScalarCurvePC; // 0x1808(0xA0)
	struct FRuntimeFloatCurve YawDampingWithReverseYawAngularVelCurvePC; // 0x18A8(0xA0)
	struct FRuntimeFloatCurve YawDampingWithReverseYawAngularVelScalarCurvePC; // 0x1948(0xA0)
	struct FRuntimeFloatCurve RollDampingWithReverseRollAngularVelCurvePC; // 0x19E8(0xA0)
	struct FRuntimeFloatCurve RollDampingWithReverseRollAngularVelScalarCurvePC; // 0x1A88(0xA0)
	struct FRuntimeFloatCurve PitchDampingWhenStopPitchInputCurvePC; // 0x1B28(0xA0)
	struct FRuntimeFloatCurve YawDampingWhenStopYawInputCurvePC; // 0x1BC8(0xA0)
	struct FRuntimeFloatCurve RollDampingWhenStopRollInputCurvePC; // 0x1C68(0xA0)
	struct FRuntimeFloatCurve MouseInputCorrectionCurvePC; // 0x1D08(0xA0)
	struct FRuntimeFloatCurve FPPMouseInputPitchRatioPC; // 0x1DA8(0xA0)
	struct FRuntimeFloatCurve FPPMouseInputRollRatioPC; // 0x1E48(0xA0)
	struct FRuntimeFloatCurve FPPMouseInputYawRatioPC; // 0x1EE8(0xA0)
	struct FRuntimeFloatCurve TPPMouseInputPitchRatioPC; // 0x1F88(0xA0)
	struct FRuntimeFloatCurve TPPMouseInputRollRatioPC; // 0x2028(0xA0)
	struct FRuntimeFloatCurve TPPMouseInputYawRatioPC; // 0x20C8(0xA0)
	struct FRuntimeFloatCurve OverShoulderCamMouseInputPitchRatioPC; // 0x2168(0xA0)
	struct FRuntimeFloatCurve OverShoulderCamMouseInputRollRatioPC; // 0x2208(0xA0)
	struct FRuntimeFloatCurve OverShoulderCamMouseInputYawRatioPC; // 0x22A8(0xA0)
	struct FRuntimeFloatCurve FPPInputPitchRatioMobile; // 0x2348(0xA0)
	struct FRuntimeFloatCurve FPPInputRollRatioMobile; // 0x23E8(0xA0)
	struct FRuntimeFloatCurve FPPInputYawRatioMobile; // 0x2488(0xA0)
	struct FRuntimeFloatCurve TPPInputPitchRatioMobile; // 0x2528(0xA0)
	struct FRuntimeFloatCurve TPPInputRollRatioMobile; // 0x25C8(0xA0)
	struct FRuntimeFloatCurve TPPInputYawRatioMobile; // 0x2668(0xA0)
	struct FRuntimeFloatCurve ControlCamFPPInputPitchRatioMobile; // 0x2708(0xA0)
	struct FRuntimeFloatCurve ControlCamFPPInputYawRatioMobile; // 0x27A8(0xA0)
	struct FRuntimeFloatCurve ControlMove_LiftAccelerationCurve; // 0x2848(0xA0)
	struct FRuntimeFloatCurve ControlMove_LiftAccRatioWithVelocityCurve; // 0x28E8(0xA0)
	struct FRuntimeFloatCurve ControlMove_LiftAccRatioWithForwardVectorCurve; // 0x2988(0xA0)
	struct FRuntimeFloatCurve ControlMove_PitchAccelerationCurvePC; // 0x2A28(0xA0)
	struct FRuntimeFloatCurve ControlMove_PitchAccRatioWithAngularVelocityCurve; // 0x2AC8(0xA0)
	struct FRuntimeFloatCurve ControlMove_PitchDpWithRvsPitchAngularVelCurve; // 0x2B68(0xA0)
	struct FRuntimeFloatCurve ControlMove_PitchDpWithRvsPitchAngularVelScalarCurve; // 0x2C08(0xA0)
	struct FRuntimeFloatCurve ControlMove_NormalPitchVelocityDampingCurve; // 0x2CA8(0xA0)
	struct FRuntimeFloatCurve ControlMove_PitchVelocityDampingWithInputCurve; // 0x2D48(0xA0)
	struct FRuntimeFloatCurve ControlMove_PitchVelocityDampingWithForwardSpeedCurve; // 0x2DE8(0xA0)
	struct FRuntimeFloatCurve ControlMove_PitchDampingWhenStopPitchInputCurve; // 0x2E88(0xA0)
	struct FRuntimeFloatCurve ControlMove_NormalYawVelocityDampingCurve; // 0x2F28(0xA0)
	struct FRuntimeFloatCurve ControlMove_YawVelocityDampingWithInputCurve; // 0x2FC8(0xA0)
	struct FRuntimeFloatCurve ControlMove_YawVelocityDampingWithForwardSpeedCurve; // 0x3068(0xA0)
	struct FRuntimeFloatCurve ControlMove_YawDampingWhenStopYawInputCurve; // 0x3108(0xA0)
	struct FRuntimeFloatCurve ControlMove_YawAccelerationCurvePC; // 0x31A8(0xA0)
	struct FRuntimeFloatCurve ControlMove_YawAccRatioWithAngularVelocityCurve; // 0x3248(0xA0)
	struct FRuntimeFloatCurve ControlMove_YawDpWithRvsYawAngularVelCurve; // 0x32E8(0xA0)
	struct FRuntimeFloatCurve ControlMove_YawDpWithRvsYawAngularVelScalarCurve; // 0x3388(0xA0)
	struct FRuntimeFloatCurve ControlMove_NormalLinearVelocityDampingCurveX; // 0x3428(0xA0)
	struct FRuntimeFloatCurve ControlMove_NormalLinearVelocityDampingCurveY; // 0x34C8(0xA0)
	struct FRuntimeFloatCurve ControlMove_NormalLinearVelocityDampingCurveZ; // 0x3568(0xA0)
	struct FRuntimeFloatCurve PitchAccelerationCurveMobileEasyControl; // 0x3608(0xA0)
	struct FRuntimeFloatCurve YawAccelerationCurveMobileEasyControl; // 0x36A8(0xA0)
	struct FVehicleInputRate ExtraAccInputRate; // 0x3748(0x8)
	struct FVehicleInputInterpRate RollInputRate; // 0x3750(0x8)
	struct FVehicleInputInterpRate UpInputRate; // 0x3758(0x8)
	uint8_t bAllowJetSpeedUp : 1; // 0x3760(0x1), Mask(0x1)
	uint8_t BitPad_0x3760_1 : 7; // 0x3760(0x1)
	uint8_t Pad_0x3761[0x3]; // 0x3761(0x3)
	float JetSpeedupMaxEnergy; // 0x3764(0x4)
	float JetSpeedupConsumePerSec; // 0x3768(0x4)
	float JetSpeedupRecoverPerSec; // 0x376C(0x4)
	float JetSpeedUpEnergyRecoverCDNoEmpty; // 0x3770(0x4)
	float JetSpeedUpEnergyRecoverCDEmpty; // 0x3774(0x4)
	float JetSpeedUpMinEnergyAfterEmpty; // 0x3778(0x4)
	uint8_t Pad_0x377C[0x4]; // 0x377C(0x4)
	struct FRuntimeFloatCurve ControlCamPitchInputDeltaAngleCurve; // 0x3780(0xA0)
	struct FRuntimeFloatCurve ControlCamRollInputDeltaAngleCurve; // 0x3820(0xA0)
	struct FRuntimeFloatCurve ControlCamYawInputDeltaAngleCurve; // 0x38C0(0xA0)
	float JetOverloadMinLinearVelocity; // 0x3960(0x4)
	float JetOverloadMinAngularVelocity; // 0x3964(0x4)
	float JetEnterOverloadMinTime; // 0x3968(0x4)
	float AddToVehicleManagerHeight; // 0x396C(0x4)
	float DeployVelocity; // 0x3970(0x4)
	float DeployRPM; // 0x3974(0x4)
	float CockpitOpenTime; // 0x3978(0x4)
	float LoseControlDownForceAcc; // 0x397C(0x4)
	float OnGroundBrakeValue; // 0x3980(0x4)
	float JetDriveModeChangeTimeScalar; // 0x3984(0x4)
	float JetDriveModeChangeTime; // 0x3988(0x4)
	float SuspMaxLiftRpmPC; // 0x398C(0x4)
	float SuspMinLiftRpmPC; // 0x3990(0x4)
	float SuspUpLiftChangeSpeedPC; // 0x3994(0x4)
	float SuspDownLiftChangeSpeedPC; // 0x3998(0x4)
	float SuspLiftChangeSpeedWithoutDriver; // 0x399C(0x4)
	float SuspMinDecreaseForceHeightPC; // 0x39A0(0x4)
	struct FVector SuspPitchAccelerationPosOffsetPC; // 0x39A4(0xC)
	struct FVector SuspRollAccelerationPosOffsetPC; // 0x39B0(0xC)
	struct FVector SuspYawAccelerationPosOffsetPC; // 0x39BC(0xC)
	struct FRuntimeFloatCurve SuspNormalPitchVelocityDampingCurvePC; // 0x39C8(0xA0)
	struct FRuntimeFloatCurve SuspNormalRollVelocityDampingCurvePC; // 0x3A68(0xA0)
	struct FRuntimeFloatCurve SuspNormalYawVelocityDampingCurvePC; // 0x3B08(0xA0)
	struct FRuntimeFloatCurve SuspForwardAccelerationRatioCurvePC; // 0x3BA8(0xA0)
	struct FRuntimeFloatCurve SuspRightAccelerationRatioCurvePC; // 0x3C48(0xA0)
	struct FRuntimeFloatCurve SuspUpAccelerationRatioCurvePC; // 0x3CE8(0xA0)
	struct FRuntimeFloatCurve SuspPitchAccelerationCurvePC; // 0x3D88(0xA0)
	struct FRuntimeFloatCurve SuspRollAccelerationCurvePC; // 0x3E28(0xA0)
	struct FRuntimeFloatCurve SuspYawAccelerationCurvePC; // 0x3EC8(0xA0)
	struct FRuntimeFloatCurve SuspPitchAccelerationScalarCurvePC; // 0x3F68(0xA0)
	struct FRuntimeFloatCurve SuspRollAccelerationScalarCurvePC; // 0x4008(0xA0)
	struct FRuntimeFloatCurve SuspYawAccelerationScalarCurvePC; // 0x40A8(0xA0)
	struct FRuntimeFloatCurve SuspLinearVelocityWithInputCurvePCW; // 0x4148(0xA0)
	struct FRuntimeFloatCurve SuspLinearVelocityRatioWithInputCurvePCW; // 0x41E8(0xA0)
	struct FRuntimeFloatCurve SuspLinearVelocityWithInputCurvePCS; // 0x4288(0xA0)
	struct FRuntimeFloatCurve SuspLiftAccelerationCurvePC; // 0x4328(0xA0)
	struct FRuntimeFloatCurve SuspNormalLinearVelocityDampingCurveXPC; // 0x43C8(0xA0)
	struct FRuntimeFloatCurve SuspNormalLinearVelocityDampingCurveYPC; // 0x4468(0xA0)
	struct FRuntimeFloatCurve SuspNormalLinearVelocityDampingCurveZPC; // 0x4508(0xA0)
	struct FRuntimeFloatCurve SuspLinearVelocityAccelerationDebuffCurvePC; // 0x45A8(0xA0)
	float StopStrength; // 0x4648(0x4)
	float MaxForwardAcceleration; // 0x464C(0x4)
	float MinForwardAccelerationWithThrottle; // 0x4650(0x4)
	float MinForwardAcceleration; // 0x4654(0x4)
	float MaxRightAcceleration; // 0x4658(0x4)
	float MaxLiftAcceleration; // 0x465C(0x4)
	float MinDecreaseForceHeight; // 0x4660(0x4)
	float SuspMaxLiftRpmMobile; // 0x4664(0x4)
	float SuspMinLiftRpmMobile; // 0x4668(0x4)
	float LiftChangeSpeed; // 0x466C(0x4)
	float LiftChangeSpeedWithoutDriver; // 0x4670(0x4)
	float FallRatio; // 0x4674(0x4)
	float MinFlyHeight; // 0x4678(0x4)
	struct FVector2D AimPitchRange; // 0x467C(0x8)
	uint8_t Pad_0x4684[0x4]; // 0x4684(0x4)
	struct FRuntimeFloatCurve SuspForwardForceDampingCurve; // 0x4688(0xA0)
	struct FRuntimeFloatCurve SuspRightForceDampingCurve; // 0x4728(0xA0)
	struct FRuntimeFloatCurve SuspUpForceDampingCurve; // 0x47C8(0xA0)
	float MaxRollVelocity; // 0x4868(0x4)
	uint8_t Pad_0x486C[0x4]; // 0x486C(0x4)
	struct UCurveFloat* SuspRollForceCurve; // 0x4870(0x8)
	struct UCurveFloat* SuspDampingRollForceCurve; // 0x4878(0x8)
	float MaxPitchVelocity; // 0x4880(0x4)
	uint8_t Pad_0x4884[0x4]; // 0x4884(0x4)
	struct UCurveFloat* SuspPitchForceCurve; // 0x4888(0x8)
	struct UCurveFloat* SuspDampingPitchForceCurve; // 0x4890(0x8)
	float MaxYawVelocity; // 0x4898(0x4)
	uint8_t Pad_0x489C[0x4]; // 0x489C(0x4)
	struct UCurveFloat* SuspYawForceCurve; // 0x48A0(0x8)
	struct UCurveFloat* SuspDampingYawForceCurve; // 0x48A8(0x8)
	uint8_t Pad_0x48B0[0x10]; // 0x48B0(0x10)
	struct UCurveFloat* SuspInverseLiftAccelerationCurvePC; // 0x48C0(0x8)
	struct UClientVehicleSetting* ClientVehicleSetting; // 0x48C8(0x8)
	struct UVehicleUtilWorldSubsystem* VehicleUtil; // 0x48D0(0x8)
	float RawExtraAccInput; // 0x48D8(0x4)
	uint8_t Pad_0x48DC[0x1C4]; // 0x48DC(0x1C4)


	// Object: Function DFMVehicle.DFMJetMovementComponent.SetUpInput
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x14091f5c
	// Params: [ Num(1) Size(0x4) ]
	void SetUpInput(float Steering);

	// Object: Function DFMVehicle.DFMJetMovementComponent.SetRollInput
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x14091eb8
	// Params: [ Num(1) Size(0x4) ]
	void SetRollInput(float Steering);

	// Object: Function DFMVehicle.DFMJetMovementComponent.ServerSwitchInputMode
	// Flags: [Net|NetReliableNative|Event|Public|NetServer]
	// Offset: 0x14091e0c
	// Params: [ Num(1) Size(0x1) ]
	void ServerSwitchInputMode(EJetInputMode InInputMode);

	// Object: Function DFMVehicle.DFMJetMovementComponent.ServerSwitchChangeMode
	// Flags: [Net|NetReliableNative|Event|Public|NetServer]
	// Offset: 0x14091d60
	// Params: [ Num(1) Size(0x1) ]
	void ServerSwitchChangeMode(EJetDriveMode InDriveMode);

	// Object: Function DFMVehicle.DFMJetMovementComponent.RequestJetSpeedup
	// Flags: [Final|Native|Public]
	// Offset: 0x14091cb4
	// Params: [ Num(1) Size(0x1) ]
	void RequestJetSpeedup(uint8_t bInSpeedUp);

	// Object: Function DFMVehicle.DFMJetMovementComponent.OnRep_JetSpeedUpStatusChanged
	// Flags: [Final|Native|Public]
	// Offset: 0x14091ca0
	// Params: [ Num(0) Size(0x0) ]
	void OnRep_JetSpeedUpStatusChanged();

	// Object: Function DFMVehicle.DFMJetMovementComponent.OnRep_JetSpeedUpEnergyChanged
	// Flags: [Final|Native|Public]
	// Offset: 0x14091c8c
	// Params: [ Num(0) Size(0x0) ]
	void OnRep_JetSpeedUpEnergyChanged();

	// Object: Function DFMVehicle.DFMJetMovementComponent.OnRep_JetInputModeChanged
	// Flags: [Final|Native|Public]
	// Offset: 0x14091c78
	// Params: [ Num(0) Size(0x0) ]
	void OnRep_JetInputModeChanged();

	// Object: Function DFMVehicle.DFMJetMovementComponent.OnRep_JetDriveMode
	// Flags: [Final|Native|Public]
	// Offset: 0x14091c64
	// Params: [ Num(0) Size(0x0) ]
	void OnRep_JetDriveMode();

	// Object: Function DFMVehicle.DFMJetMovementComponent.OnRep_bIsJetInHoldState
	// Flags: [Final|Native|Public]
	// Offset: 0x14091c50
	// Params: [ Num(0) Size(0x0) ]
	void OnRep_bIsJetInHoldState();

	// Object: Function DFMVehicle.DFMJetMovementComponent.GetJetRawInputStatePC
	// Flags: [Final|Native|Public]
	// Offset: 0x14091c28
	// Params: [ Num(1) Size(0x18) ]
	struct FJetInputStatePC GetJetRawInputStatePC();

	// Object: Function DFMVehicle.DFMJetMovementComponent.GetJetRawInputState
	// Flags: [Final|Native|Public]
	// Offset: 0x14091c08
	// Params: [ Num(1) Size(0x20) ]
	struct FJetInputStateMobile GetJetRawInputState();

	// Object: Function DFMVehicle.DFMJetMovementComponent.GetJetInputStatePC
	// Flags: [Final|Native|Public]
	// Offset: 0x14091be0
	// Params: [ Num(1) Size(0x18) ]
	struct FJetInputStatePC GetJetInputStatePC();

	// Object: Function DFMVehicle.DFMJetMovementComponent.GetJetInputState
	// Flags: [Final|Native|Public]
	// Offset: 0x14091bc0
	// Params: [ Num(1) Size(0x20) ]
	struct FJetInputStateMobile GetJetInputState();

	// Object: Function DFMVehicle.DFMJetMovementComponent.ClientSetJetFinishDeployStatus
	// Flags: [Net|NetReliableNative|Event|NetMulticast|Public]
	// Offset: 0x14091ba4
	// Params: [ Num(0) Size(0x0) ]
	void ClientSetJetFinishDeployStatus();
	DEFINE_UE_CLASS_HELPERS(UDFMJetMovementComponent, "DFMJetMovementComponent")

};

// Object: Class DFMVehicle.DFMJetNormal
// Size: 0x1A90 (Inherited: 0x1A80)
struct ADFMJetNormal : ADFMJet
{
	struct UGPStaticMeshComponent* NozzleStaticMeshComp; // 0x1A80(0x8)
	struct UDFMVehicleGPSkeletalMeshComponent* NozzleSkeletalMeshComp; // 0x1A88(0x8)
	DEFINE_UE_CLASS_HELPERS(ADFMJetNormal, "DFMJetNormal")

};

// Object: Class DFMVehicle.DFMJetOsprey
// Size: 0x1B50 (Inherited: 0x1A80)
struct ADFMJetOsprey : ADFMJet
{
	struct UGPStaticMeshComponent* LeftPropellerStaticMeshComp; // 0x1A80(0x8)
	struct UGPStaticMeshComponent* RightPropellerStaticMeshComp; // 0x1A88(0x8)
	float PropellerMaxRotSpeed; // 0x1A90(0x4)
	float PropellerRotAcc; // 0x1A94(0x4)
	float PropellerRotDeAcc; // 0x1A98(0x4)
	uint8_t Pad_0x1A9C[0x4]; // 0x1A9C(0x4)
	struct FRuntimeFloatCurve PropellerRotMaxSpeedWithRPMCurve; // 0x1AA0(0xA0)
	uint8_t Pad_0x1B40[0x10]; // 0x1B40(0x10)
	DEFINE_UE_CLASS_HELPERS(ADFMJetOsprey, "DFMJetOsprey")

};

// Object: Class DFMVehicle.DFMJetSpringComponent
// Size: 0x3F40 (Inherited: 0x3B70)
struct UDFMJetSpringComponent : UDFMVehicleSprintComponent
{
	float FollowJetLerpSpeedRoll_TPP; // 0x3B6C(0x4)
	float JetFPPFreeCamResetLerpSpeed; // 0x3B70(0x4)
	float JetFPPFreeCamInputScalar; // 0x3B74(0x4)
	float JetFPPFreeCamInputScalarForGamePad; // 0x3B78(0x4)
	float JetBackCamPitchOffset; // 0x3B7C(0x4)
	struct FVector FreeCamPitchLimit; // 0x3B80(0xC)
	struct FVector FreeCamYawLimit; // 0x3B8C(0xC)
	struct FVector2D ControlCamPitchLimit; // 0x3B98(0x8)
	float SpeedUpExtraFOV; // 0x3BA0(0x4)
	float SpeedUpExtraFOVLerpTime; // 0x3BA4(0x4)
	float SpeedUpExtraFOVLerpSpeed; // 0x3BA8(0x4)
	float SpeedUpExtraFOVCurveChangeTime; // 0x3BAC(0x4)
	struct FRuntimeFloatCurve SpeedUpExtraFOVChangeCurve; // 0x3BB0(0xA0)
	uint8_t bEnableSpeedUpCameraShake : 1; // 0x3C50(0x1), Mask(0x1)
	float SpeedUpCameraShakeTime; // 0x3C54(0x4)
	float SpeedUpCameraShakeTimeCD; // 0x3C58(0x4)
	float SpeedUpCameraShakeInterpSpeed; // 0x3C5C(0x4)
	struct FRuntimeFloatCurve SpeedUpCameraShakeXOffsetCurve; // 0x3C60(0xA0)
	struct FRuntimeFloatCurve SpeedUpCameraShakeYOffsetCurve; // 0x3D00(0xA0)
	struct FRuntimeFloatCurve SpeedUpCameraShakeZOffsetCurve; // 0x3DA0(0xA0)
	float OverShoulderCamFOVLerpSpeed; // 0x3E40(0x4)
	float OverShoulderCamArmOriginLerpSpeed; // 0x3E44(0x4)
	struct FVector ControlCamArmOriginOffset; // 0x3E48(0xC)
	uint8_t BitPad_0x3E54_1 : 7; // 0x3E54(0x1)
	uint8_t Pad_0x3E55[0x3]; // 0x3E55(0x3)
	struct UClientSensitivitySettingHD* ClientSensitivitySettingHD; // 0x3E58(0x8)
	struct UClientGameSettingHD* ClientGameSettingHD; // 0x3E60(0x8)
	uint8_t Pad_0x3E68[0xD8]; // 0x3E68(0xD8)


	// Object: Function DFMVehicle.DFMJetSpringComponent.GetClientSensitivitySettingHD
	// Flags: [Final|Native|Public]
	// Offset: 0x14094014
	// Params: [ Num(1) Size(0x8) ]
	struct UClientSensitivitySettingHD* GetClientSensitivitySettingHD();

	// Object: Function DFMVehicle.DFMJetSpringComponent.GetClientGameSettingHD
	// Flags: [Final|Native|Public]
	// Offset: 0x14093fe0
	// Params: [ Num(1) Size(0x8) ]
	struct UClientGameSettingHD* GetClientGameSettingHD();
	DEFINE_UE_CLASS_HELPERS(UDFMJetSpringComponent, "DFMJetSpringComponent")

};

// Object: Class DFMVehicle.DFMJetVehicleEffectComponent
// Size: 0x14B0 (Inherited: 0x10D0)
struct UDFMJetVehicleEffectComponent : UDFMVehicleEffectComponent
{
	float TrailEffectMinSpeed; // 0x10D0(0x4)
	float TrailEffectMinPitchAngularSpeed; // 0x10D4(0x4)
	float TrailEffectMinRollAngularSpeed; // 0x10D8(0x4)
	uint8_t HideSmallWingTurbulenceWhenOverShoulderCam : 1; // 0x10DC(0x1), Mask(0x1)
	uint8_t BitPad_0x10DC_1 : 7; // 0x10DC(0x1)
	uint8_t HideBigWingTurbulenceWhenOverShoulderCam : 1; // 0x10DD(0x1), Mask(0x1)
	uint8_t BitPad_0x10DD_1 : 7; // 0x10DD(0x1)
	uint8_t Pad_0x10DE[0x2]; // 0x10DE(0x2)
	float SmallWingTurbulenceEffectMinSpeed; // 0x10E0(0x4)
	float SmallWingTurbulenceEffectMinPitchAngularSpeed; // 0x10E4(0x4)
	float BigWingTurbulenceEffectMinSpeed; // 0x10E8(0x4)
	float BigWingTurbulenceEffectMinPitchAngularSpeed; // 0x10EC(0x4)
	float WingTurbulenceEffectFadeInTime; // 0x10F0(0x4)
	float WingTurbulenceEffectFadeOutTime; // 0x10F4(0x4)
	struct FName WingTurbulenceEffectFadeOutParam; // 0x10F8(0x8)
	float NormalFlameFadeInTime; // 0x1100(0x4)
	struct FName NormalFlameProgressParam; // 0x1104(0x8)
	float SpeedupFlameFadeInTime; // 0x110C(0x4)
	float SpeedupFlameFadeOutTime; // 0x1110(0x4)
	struct FName SpeedupFlameProgressParam; // 0x1114(0x8)
	uint8_t Pad_0x111C[0x4]; // 0x111C(0x4)
	struct UCameraShake* SpeedUpCameraShakeType; // 0x1120(0x8)
	struct FVector GroundSmokeTraceStartLocalOffset; // 0x1128(0xC)
	float GroundSmokeTraceAngle; // 0x1134(0x4)
	float GroundSmokeTraceMaxDis; // 0x1138(0x4)
	float GroundSmokeMaxHeight; // 0x113C(0x4)
	int32_t ScreenBackgroundMaterialSlotIndex; // 0x1140(0x4)
	uint8_t Pad_0x1144[0x4]; // 0x1144(0x4)
	struct UMaterialInstance* ScreenNormalStateMaterial; // 0x1148(0x8)
	struct UMaterialInstance* ScreenLowHPStateMaterial; // 0x1150(0x8)
	int32_t ScreenDashBoardMaterialSlotIndex; // 0x1158(0x4)
	uint8_t Pad_0x115C[0x4]; // 0x115C(0x4)
	struct UMaterialInstance* DashBoardNormalStateMaterial; // 0x1160(0x8)
	struct UMaterialInstance* DashBoardLowHPStateMaterial; // 0x1168(0x8)
	int32_t DirectionImageMaterialSlotIndex; // 0x1170(0x4)
	struct FName DirectionImageMaterialParamName; // 0x1174(0x8)
	struct FLinearColor DirectionImageMaterialParamDefaultValue; // 0x117C(0x10)
	float DefaultOffsetValue; // 0x118C(0x4)
	int32_t SpeedNumMaterialSlotIndex; // 0x1190(0x4)
	struct FName SpeedNumMaterialParamName; // 0x1194(0x8)
	uint8_t Pad_0x119C[0x4]; // 0x119C(0x4)
	struct UMaterialInstance* SpeedNumNormalStateMaterial; // 0x11A0(0x8)
	struct UMaterialInstance* SpeedNumLowHPStateMaterial; // 0x11A8(0x8)
	int32_t HeightNumMaterialSlotIndex; // 0x11B0(0x4)
	struct FName HeightNumMaterialParamName; // 0x11B4(0x8)
	uint8_t Pad_0x11BC[0x4]; // 0x11BC(0x4)
	struct UMaterialInstance* HeightNumNormalStateMaterial; // 0x11C0(0x8)
	struct UMaterialInstance* HeightNumLowHPStateMaterial; // 0x11C8(0x8)
	int32_t DriveModeMaterialSlotIndex; // 0x11D0(0x4)
	struct FName DriveModeMaterialParamName; // 0x11D4(0x8)
	float DriveModeChangeTime; // 0x11DC(0x4)
	struct FVector2D DriveModeChangeParamMinMax; // 0x11E0(0x8)
	int32_t WarningHintMaterialSlotIndex; // 0x11E8(0x4)
	struct FName WarningHintMaterialParamName; // 0x11EC(0x8)
	uint8_t Pad_0x11F4[0x4]; // 0x11F4(0x4)
	struct UMaterialInstance* WarningFadeInMaterial; // 0x11F8(0x8)
	struct UMaterialInstance* WarningNormalMaterial; // 0x1200(0x8)
	struct UMaterialInstance* WarningNoneMaterial; // 0x1208(0x8)
	float WarningFadeInTime; // 0x1210(0x4)
	struct FVector2D WarningParamMinMax; // 0x1214(0x8)
	float WaterCheckMaxHeight; // 0x121C(0x4)
	float WaterCheckMinVel; // 0x1220(0x4)
	float WaterCheckIntervalLocal; // 0x1224(0x4)
	float WaterCheckIntervalNonLocal; // 0x1228(0x4)
	float WaterCheckMaxAngleValue; // 0x122C(0x4)
	float WaterCheckMaxCheckHeight; // 0x1230(0x4)
	uint8_t bEnableDetailWaterCheck : 1; // 0x1234(0x1), Mask(0x1)
	uint8_t BitPad_0x1234_1 : 7; // 0x1234(0x1)
	uint8_t Pad_0x1235[0x3]; // 0x1235(0x3)
	struct TArray<struct FVector> WaterCheckWorldOffset; // 0x1238(0x10)
	struct FSoftClassPath WindFieldActorClassSoftPath; // 0x1248(0x18)
	float WindFieldStrengthLerpTime; // 0x1260(0x4)
	uint8_t Pad_0x1264[0x4]; // 0x1264(0x4)
	struct UCameraShake* FPPOverloadCamShakeType; // 0x1268(0x8)
	float FPPOverloadCamShakeMinVel; // 0x1270(0x4)
	float FPPOverloadCamShakeMinPitchVel; // 0x1274(0x4)
	float SpeedLineMinVelocityKMH; // 0x1278(0x4)
	uint8_t Pad_0x127C[0x4]; // 0x127C(0x4)
	struct TArray<int32_t> RainWeatherIds; // 0x1280(0x10)
	float SoundBarrierMinInterval; // 0x1290(0x4)
	float SoundBarrierMinVelocityKMH; // 0x1294(0x4)
	float SoundBarrierEffectFadeInTime; // 0x1298(0x4)
	float SoundBarrierEffectFadeOutTime; // 0x129C(0x4)
	struct FName SoundBarrierEffectFadeOutParam; // 0x12A0(0x8)
	struct AWaterDataAssetsStreamer* WaterDataAssetsStreamer; // 0x12A8(0x8)
	struct UVehicleWindFieldEffectManager* VehicleWindFieldEffectManager; // 0x12B0(0x8)
	struct UScreenEffectManager* ScreenEffectManager; // 0x12B8(0x8)
	struct AGPTODToPerformManager* TODToPerformManager; // 0x12C0(0x8)
	struct UFXResourceContainerComponent* LeftTrailEffectComp; // 0x12C8(0x8)
	struct UFXResourceContainerComponent* RightTrailEffectComp; // 0x12D0(0x8)
	struct UFXResourceContainerComponent* SmallWingTurbulenceEffectComp; // 0x12D8(0x8)
	struct UFXResourceContainerComponent* BigWingTurbulenceEffectComp; // 0x12E0(0x8)
	struct UFXResourceContainerComponent* SpeedUpFlameEffectComp; // 0x12E8(0x8)
	struct UFXResourceContainerComponent* SpeedUpStartEffectComp; // 0x12F0(0x8)
	struct UFXResourceContainerComponent* NormalFlameEffectComp; // 0x12F8(0x8)
	struct UFXResourceContainerComponent* GroundSmokeEffectComp; // 0x1300(0x8)
	struct UFXResourceContainerComponent* FlyThroughRiverEffectComp; // 0x1308(0x8)
	struct UFXResourceContainerComponent* RainLineEffectComp; // 0x1310(0x8)
	struct UFXResourceContainerComponent* SoundBarrierEffectComp; // 0x1318(0x8)
	struct UMaterialInstanceDynamic* DirectionImageMID; // 0x1320(0x8)
	struct UMaterialInstanceDynamic* SpeedNumMID; // 0x1328(0x8)
	struct UMaterialInstanceDynamic* HeightNumMID; // 0x1330(0x8)
	struct UMaterialInstanceDynamic* DriveModeMID; // 0x1338(0x8)
	struct UMaterialInstanceDynamic* WarningHintMID; // 0x1340(0x8)
	struct UObject* WindActorClass; // 0x1348(0x8)
	struct UCameraShake* OverloadCameraShakeInst; // 0x1350(0x8)
	uint8_t Pad_0x1358[0x158]; // 0x1358(0x158)
	DEFINE_UE_CLASS_HELPERS(UDFMJetVehicleEffectComponent, "DFMJetVehicleEffectComponent")

};

// Object: Class DFMVehicle.DFMMotorCycle
// Size: 0x1D40 (Inherited: 0x1D40)
struct ADFMMotorCycle : ADFMWheeledVehicle
{	DEFINE_UE_CLASS_HELPERS(ADFMMotorCycle, "DFMMotorCycle")

};

// Object: Class DFMVehicle.DFMMotorCycleBalancer
// Size: 0x58 (Inherited: 0x28)
struct UDFMMotorCycleBalancer : UObject
{
	float RollP; // 0x28(0x4)
	float RollD; // 0x2C(0x4)
	float PitchP; // 0x30(0x4)
	float MaxPitchAngle; // 0x34(0x4)
	uint8_t Pad_0x38[0x8]; // 0x38(0x8)
	struct UDFMMotorCycleMovementComponent* MovementComponet; // 0x40(0x8)
	struct UVehicleWheel* FrontWheel; // 0x48(0x8)
	struct ADFMWheeledVehicle* Vehicle; // 0x50(0x8)
	DEFINE_UE_CLASS_HELPERS(UDFMMotorCycleBalancer, "DFMMotorCycleBalancer")

};

// Object: Class DFMVehicle.DFMVehicleMoveComp
// Size: 0x600 (Inherited: 0x488)
struct UDFMVehicleMoveComp : UWheeledVehicleMovementComponent4W
{
	uint8_t Pad_0x488[0x10]; // 0x488(0x10)
	struct UDFMWheeledVehicleMovementImplement* MovementImpl; // 0x498(0x8)
	float MaxVelocity; // 0x4A0(0x4)
	uint8_t EnableDynamicCCD : 1; // 0x4A4(0x1), Mask(0x1)
	uint8_t BitPad_0x4A4_1 : 7; // 0x4A4(0x1)
	uint8_t Pad_0x4A5[0x3]; // 0x4A5(0x3)
	float MaxRotationSpeed; // 0x4A8(0x4)
	float MaxDepenetrationSpeed; // 0x4AC(0x4)
	float MaxContactImpulse; // 0x4B0(0x4)
	uint8_t Pad_0x4B4[0x4]; // 0x4B4(0x4)
	struct TArray<float> GearSwitchTimes; // 0x4B8(0x10)
	float LongStiffRotationThreshold; // 0x4C8(0x4)
	float MinLongStiffValue; // 0x4CC(0x4)
	uint8_t bChangeGearByVelocity : 1; // 0x4D0(0x1), Mask(0x1)
	uint8_t BitPad_0x4D0_1 : 7; // 0x4D0(0x1)
	uint8_t Pad_0x4D1[0x3]; // 0x4D1(0x3)
	int32_t GearNum; // 0x4D4(0x4)
	struct TArray<struct FVector2D> DownUpGearSpeed; // 0x4D8(0x10)
	float NeutralToFirstGearRPMRatio; // 0x4E8(0x4)
	uint8_t bApplyGFilter : 1; // 0x4EC(0x1), Mask(0x1)
	uint8_t BitPad_0x4EC_1 : 7; // 0x4EC(0x1)
	uint8_t Pad_0x4ED[0x3]; // 0x4ED(0x3)
	float AllowedLeftGSize; // 0x4F0(0x4)
	float StartApplyUpVelThreshold; // 0x4F4(0x4)
	uint8_t AuthorityOverrideSubStepCount : 1; // 0x4F8(0x1), Mask(0x1)
	uint8_t BitPad_0x4F8_1 : 7; // 0x4F8(0x1)
	uint8_t Pad_0x4F9[0x3]; // 0x4F9(0x3)
	int32_t AuthoritySubStepCount; // 0x4FC(0x4)
	float UpperLimitVelocity; // 0x500(0x4)
	float LowerLimitVelocity; // 0x504(0x4)
	float UpperVelocityDepenetrationVel; // 0x508(0x4)
	float LowerVelocityDepenetrationVelocity; // 0x50C(0x4)
	uint8_t Pad_0x510[0x90]; // 0x510(0x90)
	struct FCutsensePrepareData CutsenseData; // 0x5A0(0x48)
	uint32_t ServerReplicationPacketNo; // 0x5E8(0x4)
	uint8_t Pad_0x5EC[0x14]; // 0x5EC(0x14)


	// Object: Function DFMVehicle.DFMVehicleMoveComp.SetWheelActingSpeed
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x140aa338
	// Params: [ Num(1) Size(0x4) ]
	void SetWheelActingSpeed(float Speed);

	// Object: Function DFMVehicle.DFMVehicleMoveComp.OnCutsensePrepare
	// Flags: [Final|Net|NetReliableNative|Event|NetMulticast|Private]
	// Offset: 0x140aa290
	// Params: [ Num(1) Size(0x48) ]
	void OnCutsensePrepare(struct FCutsensePrepareData Data);
	DEFINE_UE_CLASS_HELPERS(UDFMVehicleMoveComp, "DFMVehicleMoveComp")

};

// Object: Class DFMVehicle.DFMMotorCycleMovementComponent
// Size: 0x710 (Inherited: 0x600)
struct UDFMMotorCycleMovementComponent : UDFMVehicleMoveComp
{
	float WheelieMaxAngle; // 0x600(0x4)
	float StoppieMaxAngle; // 0x604(0x4)
	struct FMotorCycleDamping SteerDamping; // 0x608(0x8)
	struct FMotorCycleDamping WheelieDamping; // 0x610(0x8)
	struct FVector CenterOfMass; // 0x618(0xC)
	struct FVector WheelieCenterOfMass; // 0x624(0xC)
	struct FRuntimeFloatCurve WheeliePeakTorqueRatio; // 0x630(0xA0)
	struct FVector StoppieCenterOfMass; // 0x6D0(0xC)
	float MinWheelieSpeed; // 0x6DC(0x4)
	float MinStoppieSpeed; // 0x6E0(0x4)
	float InAirSteerRotateSpeed; // 0x6E4(0x4)
	float InAirWheelieRotateSpeed; // 0x6E8(0x4)
	struct FVector LieDownCenterOfMass; // 0x6EC(0xC)
	float StandUpSpeed; // 0x6F8(0x4)
	uint8_t bWheelie : 1; // 0x6FC(0x1), Mask(0x1)
	uint8_t BitPad_0x6FC_1 : 7; // 0x6FC(0x1)
	uint8_t bStoppie : 1; // 0x6FD(0x1), Mask(0x1)
	uint8_t BitPad_0x6FD_1 : 7; // 0x6FD(0x1)
	EMotorCycleState State; // 0x6FE(0x1)
	uint8_t Pad_0x6FF[0x11]; // 0x6FF(0x11)


	// Object: Function DFMVehicle.DFMMotorCycleMovementComponent.StartWheelie
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x140947f8
	// Params: [ Num(0) Size(0x0) ]
	void StartWheelie();

	// Object: Function DFMVehicle.DFMMotorCycleMovementComponent.StartStoppie
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x140947e4
	// Params: [ Num(0) Size(0x0) ]
	void StartStoppie();

	// Object: Function DFMVehicle.DFMMotorCycleMovementComponent.StartStandUp
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x140947d0
	// Params: [ Num(0) Size(0x0) ]
	void StartStandUp();

	// Object: Function DFMVehicle.DFMMotorCycleMovementComponent.SendWheelie
	// Flags: [Net|NetReliableNative|Event|Public|NetServer]
	// Offset: 0x1409471c
	// Params: [ Num(1) Size(0x1) ]
	void SendWheelie(uint8_t bInWheelie);

	// Object: Function DFMVehicle.DFMMotorCycleMovementComponent.SendStoppie
	// Flags: [Net|NetReliableNative|Event|Public|NetServer]
	// Offset: 0x14094668
	// Params: [ Num(1) Size(0x1) ]
	void SendStoppie(uint8_t bInStoppie);

	// Object: Function DFMVehicle.DFMMotorCycleMovementComponent.SendStartStandUp
	// Flags: [Net|NetReliableNative|Event|Public|NetServer]
	// Offset: 0x1409464c
	// Params: [ Num(0) Size(0x0) ]
	void SendStartStandUp();

	// Object: Function DFMVehicle.DFMMotorCycleMovementComponent.OnVehicleBeginHit
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults]
	// Offset: 0x14094494
	// Params: [ Num(5) Size(0xAC) ]
	void OnVehicleBeginHit(struct UPrimitiveComponent* HitComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, struct FVector NormalImpulse, const struct FHitResult& Hit);

	// Object: Function DFMVehicle.DFMMotorCycleMovementComponent.OnRep_Wheelie
	// Flags: [Final|Native|Public]
	// Offset: 0x14094480
	// Params: [ Num(0) Size(0x0) ]
	void OnRep_Wheelie();

	// Object: Function DFMVehicle.DFMMotorCycleMovementComponent.OnRep_Stoppie
	// Flags: [Final|Native|Public]
	// Offset: 0x1409446c
	// Params: [ Num(0) Size(0x0) ]
	void OnRep_Stoppie();

	// Object: Function DFMVehicle.DFMMotorCycleMovementComponent.OnRep_State
	// Flags: [Final|Native|Public]
	// Offset: 0x14094458
	// Params: [ Num(0) Size(0x0) ]
	void OnRep_State();

	// Object: Function DFMVehicle.DFMMotorCycleMovementComponent.IsStoppie
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x1409443c
	// Params: [ Num(1) Size(0x1) ]
	uint8_t IsStoppie();

	// Object: Function DFMVehicle.DFMMotorCycleMovementComponent.FinishWheelie
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x14094428
	// Params: [ Num(0) Size(0x0) ]
	void FinishWheelie();

	// Object: Function DFMVehicle.DFMMotorCycleMovementComponent.FinishStoppie
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x14094414
	// Params: [ Num(0) Size(0x0) ]
	void FinishStoppie();
	DEFINE_UE_CLASS_HELPERS(UDFMMotorCycleMovementComponent, "DFMMotorCycleMovementComponent")

};

// Object: Class DFMVehicle.DFMRailwayActor
// Size: 0x378 (Inherited: 0x370)
struct ADFMRailwayActor : AActor
{
	struct USplineComponent* GameSplineRef; // 0x370(0x8)
	DEFINE_UE_CLASS_HELPERS(ADFMRailwayActor, "DFMRailwayActor")

};

// Object: Class DFMVehicle.DFMWheeledVehicleAudioComponent
// Size: 0x1028 (Inherited: 0xFB8)
struct UDFMWheeledVehicleAudioComponent : UDFMVehicleAudioComponent
{
	float TireNoiseCheckInterval; // 0xFB4(0x4)
	float MaxLongSlip; // 0xFB8(0x4)
	float MaxLateralSlip; // 0xFBC(0x4)
	float FakeRpmVelocityRatio; // 0xFC0(0x4)
	struct ADFMWheeledVehicle* OwnerWheeledVehicle; // 0xFC8(0x8)
	struct UPhysicalMaterialTireNoiseAsset* TireNoiseAsset; // 0xFD0(0x8)
	uint8_t Pad_0xFD8[0x30]; // 0xFD8(0x30)
	struct UPhysicalMaterial* LastContactSurfaceMat; // 0x1008(0x8)
	uint8_t Pad_0x1010[0x18]; // 0x1010(0x18)
	DEFINE_UE_CLASS_HELPERS(UDFMWheeledVehicleAudioComponent, "DFMWheeledVehicleAudioComponent")

};

// Object: Class DFMVehicle.DFMTankAudioComponent
// Size: 0x1038 (Inherited: 0x1028)
struct UDFMTankAudioComponent : UDFMWheeledVehicleAudioComponent
{
	struct ADFMTank* OwnerTank; // 0x1028(0x8)
	uint8_t Pad_0x1030[0x8]; // 0x1030(0x8)
	DEFINE_UE_CLASS_HELPERS(UDFMTankAudioComponent, "DFMTankAudioComponent")

};

// Object: Class DFMVehicle.DFMTankMovementComponent
// Size: 0x540 (Inherited: 0x2D8)
struct UDFMTankMovementComponent : UWheeledVehicleMovementComponent
{
	uint8_t Pad_0x2D8[0x10]; // 0x2D8(0x10)
	struct UDFMWheeledVehicleMovementImplement* MovementImpl; // 0x2E8(0x8)
	struct FVehicleEngineData EngineSetup; // 0x2F0(0xB8)
	struct FVehicleTransmissionData TransmissionSetup; // 0x3A8(0x38)
	float MaxVelocity; // 0x3E0(0x4)
	struct FVector2D ForwardControlRange; // 0x3E4(0x8)
	struct FVector2D ForwardFollowRange; // 0x3EC(0x8)
	struct FVector2D BackwardFollowRange; // 0x3F4(0x8)
	uint8_t Pad_0x3FC[0x4]; // 0x3FC(0x4)
	struct TArray<float> GearSwitchTimes; // 0x400(0x10)
	float BrakeWithoutInput; // 0x410(0x4)
	float ForwardWheelDampingRatio; // 0x414(0x4)
	float SteerWheelDampingRatio; // 0x418(0x4)
	float LongStiffRotationThreshold; // 0x41C(0x4)
	float MinLongStiffValue; // 0x420(0x4)
	uint8_t bChangeGearByVelocity : 1; // 0x424(0x1), Mask(0x1)
	uint8_t BitPad_0x424_1 : 7; // 0x424(0x1)
	uint8_t Pad_0x425[0x3]; // 0x425(0x3)
	int32_t GearNum; // 0x428(0x4)
	uint8_t Pad_0x42C[0x4]; // 0x42C(0x4)
	struct TArray<struct FVector2D> DownUpGearSpeed; // 0x430(0x10)
	float NeutralToFirstGearRPMRatio; // 0x440(0x4)
	float UpperLimitVelocity; // 0x444(0x4)
	float LowerLimitVelocity; // 0x448(0x4)
	float UpperVelocityDepenetrationVel; // 0x44C(0x4)
	float LowerVelocityDepenetrationVelocity; // 0x450(0x4)
	uint8_t bApplyGFilter : 1; // 0x454(0x1), Mask(0x1)
	uint8_t BitPad_0x454_1 : 7; // 0x454(0x1)
	uint8_t Pad_0x455[0x3]; // 0x455(0x3)
	float AllowedLeftGSize; // 0x458(0x4)
	float StartApplyUpVelThreshold; // 0x45C(0x4)
	uint8_t Pad_0x460[0x8]; // 0x460(0x8)
	struct TArray<struct FTankControllInfo> ControllInfos; // 0x468(0x10)
	uint8_t Pad_0x478[0x38]; // 0x478(0x38)
	uint32_t ServerReplicationPacketNo; // 0x4B0(0x4)
	uint8_t Pad_0x4B4[0x18]; // 0x4B4(0x18)
	int32_t ReplicatedCurrentControllIndex; // 0x4CC(0x4)
	uint8_t Pad_0x4D0[0x70]; // 0x4D0(0x70)
	DEFINE_UE_CLASS_HELPERS(UDFMTankMovementComponent, "DFMTankMovementComponent")

};

// Object: Class DFMVehicle.DFMTankSpringComponent
// Size: 0x3B80 (Inherited: 0x3B70)
struct UDFMTankSpringComponent : UDFMVehicleSprintComponent
{
	uint8_t Pad_0x3B70[0x10]; // 0x3B70(0x10)
	DEFINE_UE_CLASS_HELPERS(UDFMTankSpringComponent, "DFMTankSpringComponent")

};

// Object: Class DFMVehicle.DFMTrain
// Size: 0x790 (Inherited: 0x3D0)
struct ADFMTrain : APawn
{
	uint8_t Pad_0x3D0[0x68]; // 0x3D0(0x68)
	struct TArray<struct UPrimitiveComponent*> PhysicsWaitList; // 0x438(0x10)
	struct TMap<struct UPrimitiveComponent*, struct FName> BeforeHitCollisionInfoMap; // 0x448(0x50)
	uint8_t bIsLocomotive : 1; // 0x498(0x1), Mask(0x1)
	uint8_t BitPad_0x498_1 : 7; // 0x498(0x1)
	uint8_t Pad_0x499[0x7]; // 0x499(0x7)
	struct UDFMTrainStateComponent* TrainStateComponent; // 0x4A0(0x8)
	struct USceneComponent* SceneRoot; // 0x4A8(0x8)
	struct USceneComponent* BogieFrontRoot; // 0x4B0(0x8)
	struct USceneComponent* BogieBackRoot; // 0x4B8(0x8)
	struct TArray<struct ABreakablePawn*> BreakablePawns; // 0x4C0(0x10)
	struct UGPTeamComponent* TeamComp; // 0x4D0(0x8)
	uint8_t Pad_0x4D8[0x8]; // 0x4D8(0x8)
	float EnableCollisionAfterBeginTime; // 0x4E0(0x4)
	struct FName AppearanceComponentTag; // 0x4E4(0x8)
	struct FName LocomotiveComponentTag; // 0x4EC(0x8)
	struct FName BlockWallComponentTag; // 0x4F4(0x8)
	struct FName OnMoveCollisionComponentTag; // 0x4FC(0x8)
	struct FName OnStopCollisionComponentTag; // 0x504(0x8)
	uint8_t bUpdateSkeletonMeshCollision : 1; // 0x50C(0x1), Mask(0x1)
	uint8_t BitPad_0x50C_1 : 7; // 0x50C(0x1)
	uint8_t bTrainOnStop : 1; // 0x50D(0x1), Mask(0x1)
	uint8_t BitPad_0x50D_1 : 7; // 0x50D(0x1)
	uint8_t Pad_0x50E[0x2]; // 0x50E(0x2)
	struct FTransform ServerStopTransform; // 0x510(0x30)
	uint8_t bTrainOnMove : 1; // 0x540(0x1), Mask(0x1)
	uint8_t BitPad_0x540_1 : 7; // 0x540(0x1)
	uint8_t bIsShowingHighValueBoxProxy : 1; // 0x541(0x1), Mask(0x1)
	uint8_t BitPad_0x541_1 : 7; // 0x541(0x1)
	uint8_t Pad_0x542[0x56]; // 0x542(0x56)
	struct FMulticastInlineDelegate OnJointDestructDelegate; // 0x598(0x10)
	struct FMulticastInlineDelegate OnBreakDestructDelegate; // 0x5A8(0x10)
	struct FMulticastInlineDelegate OnEndPointStopDelegate; // 0x5B8(0x10)
	struct FMulticastInlineDelegate OnBoardDownDelegate; // 0x5C8(0x10)
	struct FMulticastInlineDelegate OnStopDelegate; // 0x5D8(0x10)
	struct FMulticastInlineDelegate OnTrainBreakingDelegate; // 0x5E8(0x10)
	struct FMulticastInlineDelegate OnClientTrainStateChangeDelegate; // 0x5F8(0x10)
	struct FMulticastInlineDelegate OnServerTrainStateChangeDelegate; // 0x608(0x10)
	struct FVector RepLocation; // 0x618(0xC)
	struct FRotator RepRotation; // 0x624(0xC)
	float fStopAtDistance; // 0x630(0x4)
	float fDistanceAlongRail; // 0x634(0x4)
	uint8_t Pad_0x638[0x20]; // 0x638(0x20)
	struct ADFMTrain* DockedBack; // 0x658(0x8)
	struct ADFMTrain* DockedFront; // 0x660(0x8)
	float TrainLength; // 0x668(0x4)
	float MaxSpeed; // 0x66C(0x4)
	float Acc; // 0x670(0x4)
	float BreakAcc; // 0x674(0x4)
	float DestructAcc; // 0x678(0x4)
	float RotationScale; // 0x67C(0x4)
	float BackDistance; // 0x680(0x4)
	float ZOffset; // 0x684(0x4)
	float BogieDistance; // 0x688(0x4)
	uint8_t Pad_0x68C[0x4]; // 0x68C(0x4)
	struct FDFMTrainRailData TrainRailData; // 0x690(0x10)
	struct FDFMTrainUpdateMoveData TrainUpdateMoveData; // 0x6A0(0x14)
	float CurrentSpeed; // 0x6B4(0x4)
	float CurrentAcc; // 0x6B8(0x4)
	float fMoveDuring; // 0x6BC(0x4)
	uint8_t Pad_0x6C0[0x4]; // 0x6C0(0x4)
	uint8_t bToTargetAndStop : 1; // 0x6C4(0x1), Mask(0x1)
	uint8_t BitPad_0x6C4_1 : 7; // 0x6C4(0x1)
	uint8_t Pad_0x6C5[0x3]; // 0x6C5(0x3)
	float fRepInterval; // 0x6C8(0x4)
	float fCorrection; // 0x6CC(0x4)
	uint8_t Pad_0x6D0[0x8]; // 0x6D0(0x8)
	struct TMap<struct TWeakObjectPtr<struct AActor>, float> HitDamageCooldown; // 0x6D8(0x50)
	float TrainHitRailwayOffset; // 0x728(0x4)
	float CharacterHitDiedOffset; // 0x72C(0x4)
	float CollisionCooldown; // 0x730(0x4)
	uint8_t Pad_0x734[0x4]; // 0x734(0x4)
	int64_t HitAttackerValueId; // 0x738(0x8)
	float TriggerDamageAfterHitTime; // 0x740(0x4)
	float CollisionImpulseXYAngle; // 0x744(0x4)
	float CollisionImpulseZAngle; // 0x748(0x4)
	float CollisionImpulseParam; // 0x74C(0x4)
	float SetCollisionWhenAfterHitTime; // 0x750(0x4)
	uint8_t Pad_0x754[0x4]; // 0x754(0x4)
	struct TArray<struct UGameplayEffect*> DamageEffectHit; // 0x758(0x10)
	float MaxContactImpulse; // 0x768(0x4)
	float MaxRotationSpeed; // 0x76C(0x4)
	float MaxDepenetrationSpeed; // 0x770(0x4)
	uint8_t Pad_0x774[0x4]; // 0x774(0x4)
	struct TArray<struct FTrainHitCharacterTimeInfo> HitCharacterTimeInfoArray; // 0x778(0x10)
	struct UInventoryMovementComponent* InventoryMovementComponent; // 0x788(0x8)


	// Object: Function DFMVehicle.DFMTrain.UpdateSkeletalMeshCompTickStatus
	// Flags: [Final|Native|Public]
	// Offset: 0x14098944
	// Params: [ Num(1) Size(0x1) ]
	void UpdateSkeletalMeshCompTickStatus(uint8_t bIsCanTick);

	// Object: Function DFMVehicle.DFMTrain.UpdateHitCharacterLoc
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults|Const]
	// Offset: 0x14098858
	// Params: [ Num(2) Size(0x14) ]
	void UpdateHitCharacterLoc(struct ACHARACTER* HitCharacter, struct FVector& CharacterRealDiedLoc);

	// Object: Function DFMVehicle.DFMTrain.TriggerDamageAfterHit
	// Flags: [Final|Native|Public]
	// Offset: 0x14098844
	// Params: [ Num(0) Size(0x0) ]
	void TriggerDamageAfterHit();

	// Object: Function DFMVehicle.DFMTrain.ToggleLocomotiveSound
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(1) Size(0x1) ]
	void ToggleLocomotiveSound(uint8_t bToggle);

	// Object: Function DFMVehicle.DFMTrain.StopAtEndOfRail
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x14098830
	// Params: [ Num(0) Size(0x0) ]
	void StopAtEndOfRail();

	// Object: Function DFMVehicle.DFMTrain.SmoothToStopTransform
	// Flags: [Final|Native|Protected]
	// Offset: 0x1409878c
	// Params: [ Num(1) Size(0x4) ]
	void SmoothToStopTransform(float DeltaSeconds);

	// Object: Function DFMVehicle.DFMTrain.ShowLootingContainers
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x140986e0
	// Params: [ Num(1) Size(0x1) ]
	void ShowLootingContainers(uint8_t bShow);

	// Object: Function DFMVehicle.DFMTrain.SetTriggerDamageAfterHitTimer
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults]
	// Offset: 0x140985f4
	// Params: [ Num(2) Size(0x14) ]
	void SetTriggerDamageAfterHitTimer(struct ACHARACTER* HitCharacter, const struct FVector& CharacterRealDiedLoc);

	// Object: Function DFMVehicle.DFMTrain.SetRailway
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x1409850c
	// Params: [ Num(2) Size(0x9) ]
	void SetRailway(struct USplineComponent* InRailSpline, uint8_t InLoopRail);

	// Object: Function DFMVehicle.DFMTrain.SetEnableUpdateShadowCacheOnStop
	// Flags: [Final|Native|Public|Const]
	// Offset: 0x14098460
	// Params: [ Num(1) Size(0x1) ]
	void SetEnableUpdateShadowCacheOnStop(uint8_t bEnable);

	// Object: Function DFMVehicle.DFMTrain.SetDockedBack
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x140983bc
	// Params: [ Num(1) Size(0x8) ]
	void SetDockedBack(struct ADFMTrain* InTrain);

	// Object: Function DFMVehicle.DFMTrain.SetCollisionWhenHitLocalCharacter
	// Flags: [Final|Native|Public]
	// Offset: 0x14098318
	// Params: [ Num(1) Size(0x8) ]
	void SetCollisionWhenHitLocalCharacter(struct ACHARACTER* LocalCharacter);

	// Object: Function DFMVehicle.DFMTrain.SetCollisionWhenAfterHitLocalCharacter
	// Flags: [Final|Native|Public]
	// Offset: 0x14098304
	// Params: [ Num(0) Size(0x0) ]
	void SetCollisionWhenAfterHitLocalCharacter();

	// Object: Function DFMVehicle.DFMTrain.ServerBroadcastVehicleDied
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x140982f0
	// Params: [ Num(0) Size(0x0) ]
	void ServerBroadcastVehicleDied();

	// Object: Function DFMVehicle.DFMTrain.RegisterLocomotiveOverlap
	// Flags: [Final|Native|Protected]
	// Offset: 0x14098244
	// Params: [ Num(1) Size(0x1) ]
	void RegisterLocomotiveOverlap(uint8_t bRegister);

	// Object: Function DFMVehicle.DFMTrain.ProcessTrainComponentOnStop
	// Flags: [Final|Native|Public|Const]
	// Offset: 0x14098230
	// Params: [ Num(0) Size(0x0) ]
	void ProcessTrainComponentOnStop();

	// Object: DelegateFunction DFMVehicle.DFMTrain.OnTrainStateChangeDelegate__DelegateSignature
	// Flags: [MulticastDelegate|Public|Delegate]
	// Offset: 0x101d2e88
	// Params: [ Num(1) Size(0x1) ]
	void OnTrainStateChangeDelegate__DelegateSignature(EDFMTrainState TrainState);

	// Object: DelegateFunction DFMVehicle.DFMTrain.OnTrainBreakingDelegate__DelegateSignature
	// Flags: [MulticastDelegate|Public|Delegate]
	// Offset: 0x101d2e88
	// Params: [ Num(1) Size(0x8) ]
	void OnTrainBreakingDelegate__DelegateSignature(struct ADFMTrain* Train);

	// Object: DelegateFunction DFMVehicle.DFMTrain.OnStopDelegate__DelegateSignature
	// Flags: [MulticastDelegate|Public|Delegate]
	// Offset: 0x101d2e88
	// Params: [ Num(1) Size(0x8) ]
	void OnStopDelegate__DelegateSignature(struct ADFMTrain* Train);

	// Object: Function DFMVehicle.DFMTrain.OnStop
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x1409821c
	// Params: [ Num(0) Size(0x0) ]
	void OnStop();

	// Object: Function DFMVehicle.DFMTrain.OnSOLEventTrainStartLeaveSignature
	// Flags: [Final|Native|Public]
	// Offset: 0x14098178
	// Params: [ Num(1) Size(0x8) ]
	void OnSOLEventTrainStartLeaveSignature(struct ACHARACTER* CHARACTER);

	// Object: Function DFMVehicle.DFMTrain.OnRep_TrainUpdateMoveData
	// Flags: [Final|Native|Public]
	// Offset: 0x14098164
	// Params: [ Num(0) Size(0x0) ]
	void OnRep_TrainUpdateMoveData();

	// Object: Function DFMVehicle.DFMTrain.OnRep_TrainOnStop
	// Flags: [Final|Native|Protected]
	// Offset: 0x14098150
	// Params: [ Num(0) Size(0x0) ]
	void OnRep_TrainOnStop();

	// Object: Function DFMVehicle.DFMTrain.OnRep_TrainOnMove
	// Flags: [Final|Native|Protected]
	// Offset: 0x1409813c
	// Params: [ Num(0) Size(0x0) ]
	void OnRep_TrainOnMove();

	// Object: Function DFMVehicle.DFMTrain.OnRep_StopAtDistance
	// Flags: [Final|Native|Public]
	// Offset: 0x14098128
	// Params: [ Num(0) Size(0x0) ]
	void OnRep_StopAtDistance();

	// Object: Function DFMVehicle.DFMTrain.OnRep_ServerStopTransform
	// Flags: [Final|Native|Protected]
	// Offset: 0x14098114
	// Params: [ Num(0) Size(0x0) ]
	void OnRep_ServerStopTransform();

	// Object: Function DFMVehicle.DFMTrain.OnRep_IsShowingHighValueBoxProxy
	// Flags: [Final|Native|Protected]
	// Offset: 0x14098100
	// Params: [ Num(0) Size(0x0) ]
	void OnRep_IsShowingHighValueBoxProxy();

	// Object: Function DFMVehicle.DFMTrain.OnRep_DockedBack
	// Flags: [Final|Native|Public]
	// Offset: 0x140980ec
	// Params: [ Num(0) Size(0x0) ]
	void OnRep_DockedBack();

	// Object: DelegateFunction DFMVehicle.DFMTrain.OnJointDestructDelegate__DelegateSignature
	// Flags: [MulticastDelegate|Public|Delegate]
	// Offset: 0x101d2e88
	// Params: [ Num(0) Size(0x0) ]
	void OnJointDestructDelegate__DelegateSignature();

	// Object: Function DFMVehicle.DFMTrain.OnEvacuationEventFinish
	// Flags: [Final|Native|Public]
	// Offset: 0x140980d8
	// Params: [ Num(0) Size(0x0) ]
	void OnEvacuationEventFinish();

	// Object: DelegateFunction DFMVehicle.DFMTrain.OnEndPointStopDelegate__DelegateSignature
	// Flags: [MulticastDelegate|Public|Delegate]
	// Offset: 0x101d2e88
	// Params: [ Num(0) Size(0x0) ]
	void OnEndPointStopDelegate__DelegateSignature();

	// Object: Function DFMVehicle.DFMTrain.OnComponentBeginOverlap
	// Flags: [Final|Native|Protected|HasOutParms]
	// Offset: 0x14097ee0
	// Params: [ Num(6) Size(0xA8) ]
	void OnComponentBeginOverlap(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, uint8_t bFromSweep, const struct FHitResult& SweepResult);

	// Object: Function DFMVehicle.DFMTrain.OnCharacterImpactCallback
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x14097e3c
	// Params: [ Num(1) Size(0x8) ]
	void OnCharacterImpactCallback(struct AActor* OtherActor);

	// Object: Function DFMVehicle.DFMTrain.OnCalcHitCharacterDamage
	// Flags: [Event|Public|HasOutParms|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(3) Size(0xC) ]
	void OnCalcHitCharacterDamage(float Velocity, float SelfParam, float& Result);

	// Object: DelegateFunction DFMVehicle.DFMTrain.OnBreakDestructDelegate__DelegateSignature
	// Flags: [MulticastDelegate|Public|Delegate]
	// Offset: 0x101d2e88
	// Params: [ Num(2) Size(0x8) ]
	void OnBreakDestructDelegate__DelegateSignature(int32_t nDestruct, int32_t nTotal);

	// Object: DelegateFunction DFMVehicle.DFMTrain.OnBoardDownDelegate__DelegateSignature
	// Flags: [MulticastDelegate|Public|Delegate]
	// Offset: 0x101d2e88
	// Params: [ Num(1) Size(0x8) ]
	void OnBoardDownDelegate__DelegateSignature(struct ADFMTrain* Train);

	// Object: Function DFMVehicle.DFMTrain.NewMoveStep
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x14097d98
	// Params: [ Num(1) Size(0x4) ]
	void NewMoveStep(float NewDistance);

	// Object: Function DFMVehicle.DFMTrain.IsStop
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x14097d60
	// Params: [ Num(1) Size(0x1) ]
	uint8_t IsStop();

	// Object: Function DFMVehicle.DFMTrain.IsMove
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x14097d28
	// Params: [ Num(1) Size(0x1) ]
	uint8_t IsMove();

	// Object: Function DFMVehicle.DFMTrain.IsDestruct
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x14097cf0
	// Params: [ Num(1) Size(0x1) ]
	uint8_t IsDestruct();

	// Object: Function DFMVehicle.DFMTrain.GetSkeletalMeshComponent
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(1) Size(0x8) ]
	struct USkeletalMeshComponent* GetSkeletalMeshComponent();

	// Object: Function DFMVehicle.DFMTrain.GetClosestPointOnAxis
	// Flags: [Final|Native|Public|HasDefaults]
	// Offset: 0x14097c40
	// Params: [ Num(2) Size(0x10) ]
	struct FVector GetClosestPointOnAxis(float AccurateThreshold);

	// Object: Function DFMVehicle.DFMTrain.EnableCollisionsOnStopUseTag
	// Flags: [Final|Native|Public]
	// Offset: 0x14097c2c
	// Params: [ Num(0) Size(0x0) ]
	void EnableCollisionsOnStopUseTag();

	// Object: Function DFMVehicle.DFMTrain.EnableCollisionsOnStop
	// Flags: [Final|Native|Public]
	// Offset: 0x14097c18
	// Params: [ Num(0) Size(0x0) ]
	void EnableCollisionsOnStop();

	// Object: Function DFMVehicle.DFMTrain.EnableCollisionsOnMoveUseTag
	// Flags: [Final|Native|Public]
	// Offset: 0x14097c04
	// Params: [ Num(0) Size(0x0) ]
	void EnableCollisionsOnMoveUseTag();

	// Object: Function DFMVehicle.DFMTrain.EnableCollisionsOnMove
	// Flags: [Final|Native|Public]
	// Offset: 0x14097bf0
	// Params: [ Num(0) Size(0x0) ]
	void EnableCollisionsOnMove();

	// Object: Function DFMVehicle.DFMTrain.DelayEnableCollisionsOnMove
	// Flags: [Final|Native|Public]
	// Offset: 0x14097bdc
	// Params: [ Num(0) Size(0x0) ]
	void DelayEnableCollisionsOnMove();

	// Object: Function DFMVehicle.DFMTrain.DamageSystemMakeDamage
	// Flags: [Final|Native|Public]
	// Offset: 0x14097a90
	// Params: [ Num(3) Size(0x98) ]
	void DamageSystemMakeDamage(EDamageSystemDamageType DamageType, struct FHitResult HitResult, int64_t InHitAttackerValueId);

	// Object: Function DFMVehicle.DFMTrain.ClientUpdateMoveTo
	// Flags: [Net|NetReliableNative|Event|NetMulticast|Public]
	// Offset: 0x140978fc
	// Params: [ Num(5) Size(0x14) ]
	void ClientUpdateMoveTo(float fStart, float fEnd, float fCurSpeed, float fAcc, float fMaxSpeed);

	// Object: Function DFMVehicle.DFMTrain.ClientDoBoardDown
	// Flags: [Net|NetReliableNative|Event|NetMulticast|Public|BlueprintCallable]
	// Offset: 0x140978e0
	// Params: [ Num(0) Size(0x0) ]
	void ClientDoBoardDown();

	// Object: Function DFMVehicle.DFMTrain.CalHitCharacterDiedLoc
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults|Const]
	// Offset: 0x14097790
	// Params: [ Num(4) Size(0x28) ]
	struct FVector CalHitCharacterDiedLoc(uint8_t bIsLeftOrRight, const struct FVector& CharacterLoc, const struct FVector& NormalDirection);

	// Object: Function DFMVehicle.DFMTrain.BroadcastOnStop
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x1409777c
	// Params: [ Num(0) Size(0x0) ]
	void BroadcastOnStop();

	// Object: Function DFMVehicle.DFMTrain.BroadcastOnSpawned
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x14097768
	// Params: [ Num(0) Size(0x0) ]
	void BroadcastOnSpawned();

	// Object: Function DFMVehicle.DFMTrain.BroadcastOnJoinDestruct
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x14097754
	// Params: [ Num(0) Size(0x0) ]
	void BroadcastOnJoinDestruct();

	// Object: Function DFMVehicle.DFMTrain.BroadcastOnEndPointStop
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x14097740
	// Params: [ Num(0) Size(0x0) ]
	void BroadcastOnEndPointStop();

	// Object: Function DFMVehicle.DFMTrain.BroadcastOnBreakDestruct
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x14097664
	// Params: [ Num(2) Size(0x8) ]
	void BroadcastOnBreakDestruct(int32_t nDestruct, int32_t nTotal);

	// Object: Function DFMVehicle.DFMTrain.BroadcastOnBoardDown
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x140975c0
	// Params: [ Num(1) Size(0x8) ]
	void BroadcastOnBoardDown(struct ADFMTrain* Train);

	// Object: Function DFMVehicle.DFMTrain.BreakTrain
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x14097514
	// Params: [ Num(1) Size(0x1) ]
	void BreakTrain(uint8_t ServerUpdateMove);

	// Object: Function DFMVehicle.DFMTrain.BP_OnFirstApproach
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(0) Size(0x0) ]
	void BP_OnFirstApproach();

	// Object: Function DFMVehicle.DFMTrain.BP_GetLocomotiveOverlapComp
	// Flags: [Event|Public|BlueprintEvent|Const]
	// Offset: 0x101d2e88
	// Params: [ Num(1) Size(0x8) ]
	struct UShapeComponent* BP_GetLocomotiveOverlapComp();

	// Object: Function DFMVehicle.DFMTrain.BP_DoBoardDown
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(0) Size(0x0) ]
	void BP_DoBoardDown();

	// Object: Function DFMVehicle.DFMTrain.BoostTrain
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x14097500
	// Params: [ Num(0) Size(0x0) ]
	void BoostTrain();

	// Object: Function DFMVehicle.DFMTrain.AccTrain
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x140974ec
	// Params: [ Num(0) Size(0x0) ]
	void AccTrain();
	DEFINE_UE_CLASS_HELPERS(ADFMTrain, "DFMTrain")

};

// Object: Class DFMVehicle.DFMTrainAudioProxy
// Size: 0x378 (Inherited: 0x370)
struct ADFMTrainAudioProxy : AActor
{
	struct UTravelerGameAk* TravelerGameAk; // 0x370(0x8)
	DEFINE_UE_CLASS_HELPERS(ADFMTrainAudioProxy, "DFMTrainAudioProxy")

};

// Object: Class DFMVehicle.DFMTrainSpawner
// Size: 0x388 (Inherited: 0x370)
struct ADFMTrainSpawner : AActor
{
	struct ADFMTrainSpawner* BPTrainSpawnerClass; // 0x370(0x8)
	struct ADFMRailwayActor* BPRailClass; // 0x378(0x8)
	float SpawnerPositionAlongSpline; // 0x380(0x4)
	uint8_t Pad_0x384[0x4]; // 0x384(0x4)
	DEFINE_UE_CLASS_HELPERS(ADFMTrainSpawner, "DFMTrainSpawner")

};

// Object: Class DFMVehicle.DFMTrainAnimInstance
// Size: 0x280 (Inherited: 0x270)
struct UDFMTrainAnimInstance : UAnimInstance
{
	struct FDFMTrainAnimInstanceProxy LocalProxy; // 0x270(0x10)
	DEFINE_UE_CLASS_HELPERS(UDFMTrainAnimInstance, "DFMTrainAnimInstance")

};

// Object: Class DFMVehicle.DFMTrainDoorComponent
// Size: 0x840 (Inherited: 0x830)
struct UDFMTrainDoorComponent : UStaticMeshComponent
{
	struct FVector2D CloseOpenLoc; // 0x830(0x8)
	uint8_t AxisX : 1; // 0x838(0x1), Mask(0x1)
	uint8_t BitPad_0x838_1 : 7; // 0x838(0x1)
	uint8_t UpdateWhenArrive : 1; // 0x839(0x1), Mask(0x1)
	uint8_t BitPad_0x839_1 : 7; // 0x839(0x1)
	uint8_t Pad_0x83A[0x6]; // 0x83A(0x6)


	// Object: Function DFMVehicle.DFMTrainDoorComponent.UpdateDoorLoc
	// Flags: [Final|Native|Public]
	// Offset: 0x14098bb4
	// Params: [ Num(2) Size(0x8) ]
	void UpdateDoorLoc(uint8_t Open, float InterpValue);

	// Object: Function DFMVehicle.DFMTrainDoorComponent.InitDoorLoc
	// Flags: [Final|Native|Public]
	// Offset: 0x14098ba0
	// Params: [ Num(0) Size(0x0) ]
	void InitDoorLoc();

	// Object: Function DFMVehicle.DFMTrainDoorComponent.ForceSetDoorLoc
	// Flags: [Final|Native|Public]
	// Offset: 0x14098af4
	// Params: [ Num(1) Size(0x1) ]
	void ForceSetDoorLoc(uint8_t Open);
	DEFINE_UE_CLASS_HELPERS(UDFMTrainDoorComponent, "DFMTrainDoorComponent")

};

// Object: Class DFMVehicle.DFMTrainStateBase
// Size: 0x28 (Inherited: 0x28)
struct UDFMTrainStateBase : UObject
{

	// Object: Function DFMVehicle.DFMTrainStateBase.OnUpdate
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0x1409903c
	// Params: [ Num(2) Size(0xC) ]
	void OnUpdate(struct ADFMTrain* Train, float DeltaTime);

	// Object: Function DFMVehicle.DFMTrainStateBase.OnLeave
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0x14098f48
	// Params: [ Num(3) Size(0xA) ]
	uint8_t OnLeave(struct UDFMTrainStateComponent* TrainStateComponent, EDFMTrainState NewState);

	// Object: Function DFMVehicle.DFMTrainStateBase.OnEnter
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0x14098e9c
	// Params: [ Num(1) Size(0x8) ]
	void OnEnter(struct UDFMTrainStateComponent* TrainStateComponent);

	// Object: Function DFMVehicle.DFMTrainStateBase.CanLeave
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0x14098da8
	// Params: [ Num(3) Size(0xA) ]
	uint8_t CanLeave(struct UDFMTrainStateComponent* TrainStateComponent, EDFMTrainState NewState);

	// Object: Function DFMVehicle.DFMTrainStateBase.BP_OnUpdate
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(2) Size(0xC) ]
	void BP_OnUpdate(struct ADFMTrain* Train, float DeltaTime);
	DEFINE_UE_CLASS_HELPERS(UDFMTrainStateBase, "DFMTrainStateBase")

};

// Object: Class DFMVehicle.DFMTrainState_Move
// Size: 0x28 (Inherited: 0x28)
struct UDFMTrainState_Move : UDFMTrainStateBase
{	DEFINE_UE_CLASS_HELPERS(UDFMTrainState_Move, "DFMTrainState_Move")

};

// Object: Class DFMVehicle.DFMTrainState_Stop
// Size: 0x30 (Inherited: 0x28)
struct UDFMTrainState_Stop : UDFMTrainStateBase
{
	uint8_t Pad_0x28[0x8]; // 0x28(0x8)
	DEFINE_UE_CLASS_HELPERS(UDFMTrainState_Stop, "DFMTrainState_Stop")

};

// Object: Class DFMVehicle.DFMTrainState_Destruct
// Size: 0x28 (Inherited: 0x28)
struct UDFMTrainState_Destruct : UDFMTrainStateBase
{	DEFINE_UE_CLASS_HELPERS(UDFMTrainState_Destruct, "DFMTrainState_Destruct")

};

// Object: Class DFMVehicle.DFMTrainStateComponent
// Size: 0x168 (Inherited: 0xF8)
struct UDFMTrainStateComponent : UActorComponent
{
	struct UDFMTrainStateBase* CurrentState; // 0xF8(0x8)
	EDFMTrainState CurrentStateEnum; // 0x100(0x1)
	uint8_t Pad_0x101[0x7]; // 0x101(0x7)
	struct TMap<EDFMTrainState, struct UDFMTrainStateBase*> StateMap; // 0x108(0x50)
	uint8_t Pad_0x158[0x8]; // 0x158(0x8)
	struct ADFMTrain* Train; // 0x160(0x8)


	// Object: Function DFMVehicle.DFMTrainStateComponent.OnRep_CurrentStateEnum
	// Flags: [Final|Native|Protected]
	// Offset: 0x14099398
	// Params: [ Num(0) Size(0x0) ]
	void OnRep_CurrentStateEnum();

	// Object: Function DFMVehicle.DFMTrainStateComponent.GetCurrentStateEnum
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x14099364
	// Params: [ Num(1) Size(0x1) ]
	EDFMTrainState GetCurrentStateEnum();

	// Object: Function DFMVehicle.DFMTrainStateComponent.ChangeStateEnum
	// Flags: [Final|Native|Public]
	// Offset: 0x140992c0
	// Params: [ Num(1) Size(0x1) ]
	void ChangeStateEnum(EDFMTrainState InTrainState);

	// Object: Function DFMVehicle.DFMTrainStateComponent.ChangeState
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x14099210
	// Params: [ Num(2) Size(0x2) ]
	uint8_t ChangeState(EDFMTrainState InTrainState);
	DEFINE_UE_CLASS_HELPERS(UDFMTrainStateComponent, "DFMTrainStateComponent")

};

// Object: Class DFMVehicle.DFMVehicle3PAnimInstanceOpt
// Size: 0xA70 (Inherited: 0x280)
struct UDFMVehicle3PAnimInstanceOpt : UGPAnimInstanceBase
{
	struct FDFMVehicle3PAnimInstanceOptProxy LocalProxy; // 0x280(0x7E0)
	struct UAnimSequence* DefaultVehicleIdleTPPAnim; // 0xA60(0x8)
	uint8_t Pad_0xA68[0x8]; // 0xA68(0x8)
	DEFINE_UE_CLASS_HELPERS(UDFMVehicle3PAnimInstanceOpt, "DFMVehicle3PAnimInstanceOpt")

};

// Object: Class DFMVehicle.DFMVehicleActingComponent
// Size: 0x220 (Inherited: 0xF8)
struct UDFMVehicleActingComponent : UGPPathActingCompoentBase
{
	uint8_t bPlayDustEffect : 1; // 0xF8(0x1), Mask(0x1)
	uint8_t BitPad_0xF8_1 : 7; // 0xF8(0x1)
	uint8_t Pad_0xF9[0x3]; // 0xF9(0x3)
	struct FName DustEffectId; // 0xFC(0x8)
	float MaxHeightToPlayDustEffect; // 0x104(0x4)
	uint8_t bUsingActingSound : 1; // 0x108(0x1), Mask(0x1)
	uint8_t BitPad_0x108_1 : 7; // 0x108(0x1)
	uint8_t bUsingActingSpeed : 1; // 0x109(0x1), Mask(0x1)
	uint8_t BitPad_0x109_1 : 7; // 0x109(0x1)
	uint8_t Pad_0x10A[0x2]; // 0x10A(0x2)
	float ActingSpeed; // 0x10C(0x4)
	int32_t ActingSpeedDirection; // 0x110(0x4)
	uint8_t bUsingActingWheelAnim : 1; // 0x114(0x1), Mask(0x1)
	uint8_t BitPad_0x114_1 : 7; // 0x114(0x1)
	uint8_t bAnimateComponent : 1; // 0x115(0x1), Mask(0x1)
	uint8_t BitPad_0x115_1 : 7; // 0x115(0x1)
	uint8_t Pad_0x116[0x2]; // 0x116(0x2)
	struct TArray<struct FName> WheelComponentNames; // 0x118(0x10)
	struct TMap<struct FName, struct FPathFollowStickToGroundConfig> WheelComponentConfigs; // 0x128(0x50)
	uint8_t Pad_0x178[0x10]; // 0x178(0x10)
	float ActingWheelRaduis; // 0x188(0x4)
	float ActingVehicleLength; // 0x18C(0x4)
	float ActingVehicleWidth; // 0x190(0x4)
	float DeltaDegreeScale; // 0x194(0x4)
	uint8_t bUsingActingWheelRotation : 1; // 0x198(0x1), Mask(0x1)
	uint8_t BitPad_0x198_1 : 7; // 0x198(0x1)
	uint8_t Pad_0x199[0x3]; // 0x199(0x3)
	float ActingWheelRotationAngleLeft; // 0x19C(0x4)
	float ActingWheelRotationAngleRight; // 0x1A0(0x4)
	uint8_t Pad_0x1A4[0x4]; // 0x1A4(0x4)
	struct ADFMVehicleBase* OwnerVehicle; // 0x1A8(0x8)
	struct TArray<struct FWheelAsyncTraceData> WheelAsyncTraceData; // 0x1B0(0x10)
	uint8_t Pad_0x1C0[0x50]; // 0x1C0(0x50)
	struct UFXResourceContainerComponent* DustEffect; // 0x210(0x8)
	uint8_t Pad_0x218[0x8]; // 0x218(0x8)


	// Object: Function DFMVehicle.DFMVehicleActingComponent.TickDustEffect
	// Flags: [Final|Native|Protected]
	// Offset: 0x1409bdfc
	// Params: [ Num(0) Size(0x0) ]
	void TickDustEffect();

	// Object: Function DFMVehicle.DFMVehicleActingComponent.SetUsingActingWheelRotation
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x1409bd48
	// Params: [ Num(1) Size(0x1) ]
	void SetUsingActingWheelRotation(uint8_t bValue);

	// Object: Function DFMVehicle.DFMVehicleActingComponent.SetUsingActingWheelAnim
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x1409bc94
	// Params: [ Num(1) Size(0x1) ]
	void SetUsingActingWheelAnim(uint8_t bValue);

	// Object: Function DFMVehicle.DFMVehicleActingComponent.SetUsingActingSpeed
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x1409bbe0
	// Params: [ Num(1) Size(0x1) ]
	void SetUsingActingSpeed(uint8_t bValue);

	// Object: Function DFMVehicle.DFMVehicleActingComponent.SetupActingWheelAnimInstances
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x1409bbcc
	// Params: [ Num(0) Size(0x0) ]
	void SetupActingWheelAnimInstances();

	// Object: Function DFMVehicle.DFMVehicleActingComponent.SetActingWheelRotationAngle
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x1409baf0
	// Params: [ Num(2) Size(0x8) ]
	void SetActingWheelRotationAngle(float LeftAngle, float RightAngle);

	// Object: Function DFMVehicle.DFMVehicleActingComponent.SetActingWheelAnimYaw
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x1409ba10
	// Params: [ Num(2) Size(0x8) ]
	void SetActingWheelAnimYaw(int32_t Index, float Angle);

	// Object: Function DFMVehicle.DFMVehicleActingComponent.SetActingWheelAnimData
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x1409b8f4
	// Params: [ Num(3) Size(0x1C) ]
	void SetActingWheelAnimData(int32_t Index, struct FRotator RotOffset, struct FVector LocOffset);

	// Object: Function DFMVehicle.DFMVehicleActingComponent.SetActingSpeed
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x1409b850
	// Params: [ Num(1) Size(0x4) ]
	void SetActingSpeed(float Speed);

	// Object: Function DFMVehicle.DFMVehicleActingComponent.IsUsingActingWheelRotation
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x1409b818
	// Params: [ Num(1) Size(0x1) ]
	uint8_t IsUsingActingWheelRotation();

	// Object: Function DFMVehicle.DFMVehicleActingComponent.IsUsingActingWheelAnim
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x1409b7e0
	// Params: [ Num(1) Size(0x1) ]
	uint8_t IsUsingActingWheelAnim();

	// Object: Function DFMVehicle.DFMVehicleActingComponent.IsUsingActingSpeed
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x1409b7a8
	// Params: [ Num(1) Size(0x1) ]
	uint8_t IsUsingActingSpeed();

	// Object: Function DFMVehicle.DFMVehicleActingComponent.GetActingWheelRotationAngleRight
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x1409b774
	// Params: [ Num(1) Size(0x4) ]
	float GetActingWheelRotationAngleRight();

	// Object: Function DFMVehicle.DFMVehicleActingComponent.GetActingWheelRotationAngleLeft
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x1409b740
	// Params: [ Num(1) Size(0x4) ]
	float GetActingWheelRotationAngleLeft();

	// Object: Function DFMVehicle.DFMVehicleActingComponent.GetActingWheelAnimRotOffset
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x1409b690
	// Params: [ Num(2) Size(0x10) ]
	struct FRotator GetActingWheelAnimRotOffset(int32_t Index);

	// Object: Function DFMVehicle.DFMVehicleActingComponent.GetActingWheelAnimLocOffset
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x1409b5e0
	// Params: [ Num(2) Size(0x10) ]
	struct FVector GetActingWheelAnimLocOffset(int32_t Index);

	// Object: Function DFMVehicle.DFMVehicleActingComponent.AddActingWheelAnimPitch
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x1409b500
	// Params: [ Num(2) Size(0x8) ]
	void AddActingWheelAnimPitch(int32_t Index, float Angle);
	DEFINE_UE_CLASS_HELPERS(UDFMVehicleActingComponent, "DFMVehicleActingComponent")

};

// Object: Class DFMVehicle.DFMVehicleADS
// Size: 0x3D0 (Inherited: 0x370)
struct ADFMVehicleADS : AActor
{
	uint8_t Pad_0x370[0x8]; // 0x370(0x8)
	float InterceptRadius; // 0x378(0x4)
	struct FVector InterceptFirePos; // 0x37C(0xC)
	struct FName InterceptEffectId; // 0x388(0x8)
	struct FName FireEffectId; // 0x390(0x8)
	struct USphereComponent* Trigger; // 0x398(0x8)
	uint8_t bIsDisable : 1; // 0x3A0(0x1), Mask(0x1)
	uint8_t BitPad_0x3A0_1 : 7; // 0x3A0(0x1)
	uint8_t Pad_0x3A1[0x7]; // 0x3A1(0x7)
	struct TSoftObjectPtr<UGPAudioEventAsset> BeIntercepted2DAudio; // 0x3A8(0x28)


	// Object: Function DFMVehicle.DFMVehicleADS.SetInterceptDataInternal
	// Flags: [Net|NetReliableNative|Event|NetMulticast|Protected|HasDefaults]
	// Offset: 0x1409c138
	// Params: [ Num(2) Size(0x10) ]
	void SetInterceptDataInternal(float NewInterceptRadius, struct FVector NewInterceptFirePos);

	// Object: Function DFMVehicle.DFMVehicleADS.OnProjectileIntercepted
	// Flags: [Net|Native|Event|NetMulticast|Protected|HasDefaults]
	// Offset: 0x1409c050
	// Params: [ Num(2) Size(0x18) ]
	void OnProjectileIntercepted(struct FVector ProjectilePos, struct AActor* InBulletCreator);
	DEFINE_UE_CLASS_HELPERS(ADFMVehicleADS, "DFMVehicleADS")

};

// Object: Class DFMVehicle.DFMVehicleSkillExecutor
// Size: 0x90 (Inherited: 0x28)
struct UDFMVehicleSkillExecutor : UObject
{
	struct UDFMVehicleSkillInstance* OwnSkillInstance; // 0x28(0x8)
	uint8_t Pad_0x30[0x60]; // 0x30(0x60)


	// Object: Function DFMVehicle.DFMVehicleSkillExecutor.NeedPlayEffect
	// Flags: [Native|Public]
	// Offset: 0x140af178
	// Params: [ Num(1) Size(0x1) ]
	uint8_t NeedPlayEffect();
	DEFINE_UE_CLASS_HELPERS(UDFMVehicleSkillExecutor, "DFMVehicleSkillExecutor")

};

// Object: Class DFMVehicle.DFMVehicleADSSkillExecutor
// Size: 0x240 (Inherited: 0x90)
struct UDFMVehicleADSSkillExecutor : UDFMVehicleSkillExecutor
{
	uint8_t Pad_0x90[0xF8]; // 0x90(0xF8)
	struct ADFMVehicleADS* CreatedActor; // 0x188(0x8)
	struct TMap<struct UFXResourceContainerComponent*, int32_t> PersistenceEffectInstances; // 0x190(0x50)
	struct TMap<struct UFXResourceContainerComponent*, int32_t> CoolDownEffectInstances; // 0x1E0(0x50)
	uint8_t Pad_0x230[0x10]; // 0x230(0x10)


	// Object: Function DFMVehicle.DFMVehicleADSSkillExecutor.OnCooldown
	// Flags: [Final|Native|Protected]
	// Offset: 0x1409c230
	// Params: [ Num(0) Size(0x0) ]
	void OnCooldown();
	DEFINE_UE_CLASS_HELPERS(UDFMVehicleADSSkillExecutor, "DFMVehicleADSSkillExecutor")

};

// Object: Class DFMVehicle.DFMVehicleAIController
// Size: 0x4B0 (Inherited: 0x478)
struct ADFMVehicleAIController : AAIController
{
	uint8_t Pad_0x478[0x8]; // 0x478(0x8)
	struct UGPAIBehaviorTreeComponent* GPAIBehaviorTreeComponent; // 0x480(0x8)
	struct ADramaArea* RelatedDramaArea; // 0x488(0x8)
	struct UBehaviorTree* StandaloneDramaBTAsset; // 0x490(0x8)
	uint8_t bDramaBehaviorNeedRestart : 1; // 0x498(0x1), Mask(0x1)
	uint8_t BitPad_0x498_1 : 7; // 0x498(0x1)
	uint8_t Pad_0x499[0x17]; // 0x499(0x17)


	// Object: Function DFMVehicle.DFMVehicleAIController.UnBindDrama
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x1409c2f4
	// Params: [ Num(0) Size(0x0) ]
	void UnBindDrama();
	DEFINE_UE_CLASS_HELPERS(ADFMVehicleAIController, "DFMVehicleAIController")

};

// Object: Class DFMVehicle.DFMVehicleAnimInstance
// Size: 0x1360 (Inherited: 0xA40)
struct UDFMVehicleAnimInstance : UVehicleAnimInstance
{
	struct FDFMVehicleAnimInstanceProxy LocalProxy; // 0xA38(0xA8)
	struct TMap<struct FName, struct UAnimSequence*> GetOnSeatAnimationMap; // 0xAE0(0x50)
	struct TMap<struct FName, struct UAnimSequence*> GetOffSeatAnimationMap; // 0xB30(0x50)
	struct UAimOffsetBlendSpace* SteeringWheelAnimation; // 0xB80(0x8)
	float SteeringWheelRotLerpSpeed; // 0xB88(0x4)
	uint8_t AnimLodBigger0 : 1; // 0xB8C(0x1), Mask(0x1)
	uint8_t AnimLodBigger1 : 1; // 0xB8D(0x1), Mask(0x1)
	struct UDFMVehicleAnimInteractorComponent* VehicleAnimInteractorComp; // 0xB90(0x8)
	uint8_t BitPad_0xB9C_2 : 6; // 0xB9C(0x1)
	uint8_t Pad_0xB9D[0x7C3]; // 0xB9D(0x7C3)
	DEFINE_UE_CLASS_HELPERS(UDFMVehicleAnimInstance, "DFMVehicleAnimInstance")

};

// Object: Class DFMVehicle.DFMVehicleAnimInstanceOpt
// Size: 0xA80 (Inherited: 0x280)
struct UDFMVehicleAnimInstanceOpt : UGPAnimInstanceBase
{
	struct FDFMVehicleAnimInstanceOptProxy LocalProxy; // 0x280(0x800)
	DEFINE_UE_CLASS_HELPERS(UDFMVehicleAnimInstanceOpt, "DFMVehicleAnimInstanceOpt")

};

// Object: Class DFMVehicle.DFMVehicleAnimInteractorComponent
// Size: 0x2B8 (Inherited: 0x138)
struct UDFMVehicleAnimInteractorComponent : UGPVehicleAnimDataComponent
{
	EAnimVehicleDoorState VehicleDoor_FLState; // 0x136(0x1)
	EAnimVehicleDoorState VehicleDoor_FRState; // 0x137(0x1)
	uint8_t VehicleWindowClosed : 1; // 0x138(0x1), Mask(0x1)
	EAnimVehicleDoorState VehicleDoor_BLState; // 0x139(0x1)
	EAnimVehicleDoorState VehicleDoor_BRState; // 0x13A(0x1)
	uint8_t BitPad_0x13C_1 : 7; // 0x13C(0x1)
	uint8_t Pad_0x13D[0x3]; // 0x13D(0x3)
	struct FMulticastInlineDelegate OnFLWindow_OnRollDown; // 0x140(0x10)
	struct FMulticastInlineDelegate OnFRWindow_OnRollDown; // 0x150(0x10)
	uint8_t DisableGetOnAnimation : 1; // 0x160(0x1), Mask(0x1)
	uint8_t BitPad_0x160_1 : 7; // 0x160(0x1)
	uint8_t Pad_0x161[0xA7]; // 0x161(0xA7)
	struct TMap<struct FName, struct UAnimSequence*> GetOnSeatAnimationMap; // 0x208(0x50)
	struct TMap<struct FName, struct UAnimSequence*> GetOffSeatAnimationMap; // 0x258(0x50)
	uint8_t Pad_0x2A8[0x10]; // 0x2A8(0x10)


	// Object: Function DFMVehicle.DFMVehicleAnimInteractorComponent.OnRep_DoorStateChange
	// Flags: [Final|Native|Public]
	// Offset: 0xfaa0c14
	// Params: [ Num(0) Size(0x0) ]
	void OnRep_DoorStateChange();
	DEFINE_UE_CLASS_HELPERS(UDFMVehicleAnimInteractorComponent, "DFMVehicleAnimInteractorComponent")

};

// Object: Class DFMVehicle.DFMVehicleAntiExplodeRepairEffectComponent
// Size: 0x1C0 (Inherited: 0xF8)
struct UDFMVehicleAntiExplodeRepairEffectComponent : UActorComponent
{
	struct TSet<uint64_t> RepairWeaponIds; // 0xF8(0x50)
	struct TSet<struct FName> ParamsName; // 0x148(0x50)
	float InitTickInterval; // 0x198(0x4)
	uint8_t Pad_0x19C[0x8]; // 0x19C(0x8)
	float DistanceThreshold; // 0x1A4(0x4)
	float TimeThreshold; // 0x1A8(0x4)
	float FadeOutSpeed; // 0x1AC(0x4)
	float FadeInSpeed; // 0x1B0(0x4)
	uint8_t Pad_0x1B4[0xC]; // 0x1B4(0xC)
	DEFINE_UE_CLASS_HELPERS(UDFMVehicleAntiExplodeRepairEffectComponent, "DFMVehicleAntiExplodeRepairEffectComponent")

};

// Object: Class DFMVehicle.DFMVehicleBodyPartInstance
// Size: 0x50 (Inherited: 0x28)
struct UDFMVehicleBodyPartInstance : UObject
{
	int32_t BodyPartId; // 0x28(0x4)
	float MaxHP; // 0x2C(0x4)
	struct TArray<struct FVehicleBodyPartBrokenEffect> BrokenEffects; // 0x30(0x10)
	struct TArray<struct FVehicleBodyPartBrokenEffect> RecoverEffects; // 0x40(0x10)
	DEFINE_UE_CLASS_HELPERS(UDFMVehicleBodyPartInstance, "DFMVehicleBodyPartInstance")

};

// Object: Class DFMVehicle.DFMVehicleAntiExplosionArmorPartInstance
// Size: 0x58 (Inherited: 0x50)
struct UDFMVehicleAntiExplosionArmorPartInstance : UDFMVehicleBodyPartInstance
{
	struct FName ArmorComponentName; // 0x50(0x8)
	DEFINE_UE_CLASS_HELPERS(UDFMVehicleAntiExplosionArmorPartInstance, "DFMVehicleAntiExplosionArmorPartInstance")

};

// Object: Class DFMVehicle.DFMVehicleBodyPartExecutor
// Size: 0xB8 (Inherited: 0x28)
struct UDFMVehicleBodyPartExecutor : UObject
{
	uint8_t Pad_0x28[0x58]; // 0x28(0x58)
	int32_t BodyPartId; // 0x80(0x4)
	uint8_t Pad_0x84[0x8]; // 0x84(0x8)
	float ReceivedDamage; // 0x8C(0x4)
	struct ADFMVehicleBase* OwnerVehicle; // 0x90(0x8)
	uint8_t Pad_0x98[0x8]; // 0x98(0x8)
	struct UDFMVehicleBodyPartInstance* Instance; // 0xA0(0x8)
	struct TArray<struct UFXResourceContainerComponent*> BrokenEffectInstances; // 0xA8(0x10)


	// Object: Function DFMVehicle.DFMVehicleBodyPartExecutor.OnRep_ReceivedDamage
	// Flags: [Final|Native|Public]
	// Offset: 0x140a4c94
	// Params: [ Num(1) Size(0x4) ]
	void OnRep_ReceivedDamage(float OldDamage);
	DEFINE_UE_CLASS_HELPERS(UDFMVehicleBodyPartExecutor, "DFMVehicleBodyPartExecutor")

};

// Object: Class DFMVehicle.DFMVehicleAntiExplosionArmorPartExecutor
// Size: 0xD8 (Inherited: 0xB8)
struct UDFMVehicleAntiExplosionArmorPartExecutor : UDFMVehicleBodyPartExecutor
{
	uint8_t Pad_0xB8[0x20]; // 0xB8(0x20)
	DEFINE_UE_CLASS_HELPERS(UDFMVehicleAntiExplosionArmorPartExecutor, "DFMVehicleAntiExplosionArmorPartExecutor")

};

// Object: Class DFMVehicle.DFMVehicleAssembledComponent
// Size: 0x6E0 (Inherited: 0x5E0)
struct UDFMVehicleAssembledComponent : UDFMPhysxMultiBaseShapeComponent
{
	struct TArray<struct FVehicleHitPartInfo> VehicleHitPartInfos; // 0x5D8(0x10)
	uint8_t IsUsingCustomBound : 1; // 0x5E8(0x1), Mask(0x1)
	struct FTransform RenderBoundTransform; // 0x5F0(0x30)
	struct FBox CustomBoundBox; // 0x620(0x1C)
	uint8_t BitPad_0x63C_1 : 7; // 0x63C(0x1)
	uint8_t Pad_0x63D[0x3]; // 0x63D(0x3)
	struct TMap<struct FName, struct FVehicleHitPartInfo> ComponentNameToHitPartInfos; // 0x640(0x50)
	struct ADFMVehicleBase* OwnerVehicle; // 0x690(0x8)
	uint8_t Pad_0x698[0x20]; // 0x698(0x20)
	struct FTimerHandle AutoGetOffVehicleTimer; // 0x6B8(0x8)
	struct FTimerHandle CheckServerDeployStateTimer; // 0x6C0(0x8)
	float CheckServerDeployStateInterval; // 0x6C8(0x4)
	uint8_t Pad_0x6CC[0x14]; // 0x6CC(0x14)


	// Object: Function DFMVehicle.DFMVehicleAssembledComponent.WakeupVehicle
	// Flags: [Final|Native|Protected]
	// Offset: 0x1409c710
	// Params: [ Num(0) Size(0x0) ]
	void WakeupVehicle();

	// Object: Function DFMVehicle.DFMVehicleAssembledComponent.UploadVehicleRaycastResult
	// Flags: [Final|Native|Protected]
	// Offset: 0x1409c6fc
	// Params: [ Num(0) Size(0x0) ]
	void UploadVehicleRaycastResult();

	// Object: Function DFMVehicle.DFMVehicleAssembledComponent.OnCheckServerDeployStateTimer
	// Flags: [Final|Native|Protected]
	// Offset: 0x1409c6e8
	// Params: [ Num(0) Size(0x0) ]
	void OnCheckServerDeployStateTimer();

	// Object: Function DFMVehicle.DFMVehicleAssembledComponent.OnAutoGetOffVehicleTimer
	// Flags: [Final|Native|Protected]
	// Offset: 0x1409c6d4
	// Params: [ Num(0) Size(0x0) ]
	void OnAutoGetOffVehicleTimer();

	// Object: Function DFMVehicle.DFMVehicleAssembledComponent.IsLocalPlayerDriver
	// Flags: [Final|Native|Protected]
	// Offset: 0x1409c69c
	// Params: [ Num(1) Size(0x1) ]
	uint8_t IsLocalPlayerDriver();

	// Object: Function DFMVehicle.DFMVehicleAssembledComponent.IsEnableLevelStreamingCheck
	// Flags: [Final|Native|Protected]
	// Offset: 0x1409c664
	// Params: [ Num(1) Size(0x1) ]
	uint8_t IsEnableLevelStreamingCheck();

	// Object: Function DFMVehicle.DFMVehicleAssembledComponent.EndCheckLevelStreaming
	// Flags: [Final|Native|Protected]
	// Offset: 0x1409c650
	// Params: [ Num(0) Size(0x0) ]
	void EndCheckLevelStreaming();

	// Object: Function DFMVehicle.DFMVehicleAssembledComponent.DebugCheckVehiclePhysicsLoaded
	// Flags: [Final|Native|Protected]
	// Offset: 0x1409c63c
	// Params: [ Num(0) Size(0x0) ]
	void DebugCheckVehiclePhysicsLoaded();

	// Object: Function DFMVehicle.DFMVehicleAssembledComponent.CreateCheckServerDeployStateTimer
	// Flags: [Final|Native|Protected]
	// Offset: 0x1409c628
	// Params: [ Num(0) Size(0x0) ]
	void CreateCheckServerDeployStateTimer();

	// Object: Function DFMVehicle.DFMVehicleAssembledComponent.CreateAutoGetOffVehicleTimer
	// Flags: [Final|Native|Protected]
	// Offset: 0x1409c614
	// Params: [ Num(0) Size(0x0) ]
	void CreateAutoGetOffVehicleTimer();

	// Object: Function DFMVehicle.DFMVehicleAssembledComponent.ClientOnLoadingPercentage
	// Flags: [Final|Native|Protected]
	// Offset: 0x1409c570
	// Params: [ Num(1) Size(0x4) ]
	void ClientOnLoadingPercentage(int32_t Percent);

	// Object: Function DFMVehicle.DFMVehicleAssembledComponent.CheckLevelStreamingProgress
	// Flags: [Final|Native|Protected]
	// Offset: 0x1409c55c
	// Params: [ Num(0) Size(0x0) ]
	void CheckLevelStreamingProgress();

	// Object: Function DFMVehicle.DFMVehicleAssembledComponent.CheckLevelStreaming
	// Flags: [Final|Native|Protected]
	// Offset: 0x1409c548
	// Params: [ Num(0) Size(0x0) ]
	void CheckLevelStreaming();

	// Object: Function DFMVehicle.DFMVehicleAssembledComponent.CheckFootTerrainLoaded
	// Flags: [Final|Native|Protected]
	// Offset: 0x1409c534
	// Params: [ Num(0) Size(0x0) ]
	void CheckFootTerrainLoaded();

	// Object: Function DFMVehicle.DFMVehicleAssembledComponent.CancelLevelStreamingProgress
	// Flags: [Final|Native|Protected]
	// Offset: 0x1409c520
	// Params: [ Num(0) Size(0x0) ]
	void CancelLevelStreamingProgress();

	// Object: Function DFMVehicle.DFMVehicleAssembledComponent.CancelCheckServerDeployStateTimer
	// Flags: [Final|Native|Protected]
	// Offset: 0x1409c50c
	// Params: [ Num(0) Size(0x0) ]
	void CancelCheckServerDeployStateTimer();

	// Object: Function DFMVehicle.DFMVehicleAssembledComponent.CancelAutoGetOffVehicleTimer
	// Flags: [Final|Native|Protected]
	// Offset: 0x1409c4f8
	// Params: [ Num(0) Size(0x0) ]
	void CancelAutoGetOffVehicleTimer();

	// Object: Function DFMVehicle.DFMVehicleAssembledComponent.CancelAllTimer
	// Flags: [Final|Native|Protected]
	// Offset: 0x1409c4e4
	// Params: [ Num(0) Size(0x0) ]
	void CancelAllTimer();
	DEFINE_UE_CLASS_HELPERS(UDFMVehicleAssembledComponent, "DFMVehicleAssembledComponent")

};

// Object: Class DFMVehicle.DFMVehicleAssembledPartComponent
// Size: 0x940 (Inherited: 0x830)
struct UDFMVehicleAssembledPartComponent : UStaticMeshComponent
{
	struct FName BoneName; // 0x830(0x8)
	struct TSoftObjectPtr<UStaticMesh> BrokenMesh; // 0x838(0x28)
	struct TSoftObjectPtr<UStaticMesh> DestructedMesh; // 0x860(0x28)
	uint8_t Pad_0x888[0x8]; // 0x888(0x8)
	struct FTransform OffsetTransform; // 0x890(0x30)
	struct TArray<struct UDFMVehicleAssembleExtensionBase*> AssembleExtensionArray; // 0x8C0(0x10)
	uint8_t Pad_0x8D0[0x30]; // 0x8D0(0x30)
	struct UStaticMesh* NormalMeshAsset; // 0x900(0x8)
	struct UStaticMesh* BrokenMeshAsset; // 0x908(0x8)
	struct UStaticMesh* DestructedAsset; // 0x910(0x8)
	struct TArray<uint64_t> LoadHandlerArray; // 0x918(0x10)
	uint8_t Pad_0x928[0x8]; // 0x928(0x8)
	struct ADFMVehicleBase* OwnerVehicle; // 0x930(0x8)
	uint8_t Pad_0x938[0x8]; // 0x938(0x8)
	DEFINE_UE_CLASS_HELPERS(UDFMVehicleAssembledPartComponent, "DFMVehicleAssembledPartComponent")

};

// Object: Class DFMVehicle.DFMVehicleAssembledPartComponent_NetExtend
// Size: 0x960 (Inherited: 0x940)
struct UDFMVehicleAssembledPartComponent_NetExtend : UDFMVehicleAssembledPartComponent
{
	float GlassCrackStep; // 0x940(0x4)
	uint8_t bIsBroken : 1; // 0x944(0x1), Mask(0x1)
	uint8_t BitPad_0x944_1 : 7; // 0x944(0x1)
	uint8_t Pad_0x945[0x3]; // 0x945(0x3)
	struct FMulticastInlineDelegate OnBrokenDelegate; // 0x948(0x10)
	uint8_t Pad_0x958[0x8]; // 0x958(0x8)


	// Object: Function DFMVehicle.DFMVehicleAssembledPartComponent_NetExtend.OnRep_GlassCrackStep
	// Flags: [Final|Native|Public]
	// Offset: 0x1409f394
	// Params: [ Num(0) Size(0x0) ]
	void OnRep_GlassCrackStep();

	// Object: Function DFMVehicle.DFMVehicleAssembledPartComponent_NetExtend.OnRep_bIsBroken
	// Flags: [Final|Native|Public]
	// Offset: 0x1409f380
	// Params: [ Num(0) Size(0x0) ]
	void OnRep_bIsBroken();

	// Object: Function DFMVehicle.DFMVehicleAssembledPartComponent_NetExtend.ClientPlayBrokenAudio
	// Flags: [Net|Native|Event|NetMulticast|Public]
	// Offset: 0x1409f2d4
	// Params: [ Num(1) Size(0x8) ]
	void ClientPlayBrokenAudio(struct FName Auidio);

	// Object: Function DFMVehicle.DFMVehicleAssembledPartComponent_NetExtend.BoardCastBrokenEvent
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x1409f2c0
	// Params: [ Num(0) Size(0x0) ]
	void BoardCastBrokenEvent();
	DEFINE_UE_CLASS_HELPERS(UDFMVehicleAssembledPartComponent_NetExtend, "DFMVehicleAssembledPartComponent_NetExtend")

};

// Object: Class DFMVehicle.DFMVehicleAssembleSteeringWheelExtension
// Size: 0xA0 (Inherited: 0x50)
struct UDFMVehicleAssembleSteeringWheelExtension : UDFMVehicleAssembleExtensionBase
{
	struct FName LeftHandIK; // 0x4C(0x8)
	struct FName RightHandIK; // 0x54(0x8)
	float CullingDistance; // 0x5C(0x4)
	struct UGPAnimProxyComponent* AnimProxyComponent; // 0x60(0x8)
	uint8_t Pad_0x6C[0x34]; // 0x6C(0x34)


	// Object: Function DFMVehicle.DFMVehicleAssembleSteeringWheelExtension.OnCharacterSwitchSeat
	// Flags: [Final|Native|Private]
	// Offset: 0x1409f430
	// Params: [ Num(3) Size(0x18) ]
	void OnCharacterSwitchSeat(struct AActor* CHARACTER, struct FName OldSeatName, struct FName NewSeatName);

	// Object: Function DFMVehicle.DFMVehicleAssembleSteeringWheelExtension.OnCharacterGetOn
	// Flags: [Final|Native|Private]
	// Offset: 0x109f6efc
	// Params: [ Num(2) Size(0x10) ]
	void OnCharacterGetOn(struct AActor* CHARACTER, struct FName SeatName);

	// Object: Function DFMVehicle.DFMVehicleAssembleSteeringWheelExtension.OnCharacterGetOff
	// Flags: [Final|Native|Private]
	// Offset: 0x106775f4
	// Params: [ Num(1) Size(0x8) ]
	void OnCharacterGetOff(struct AActor* CHARACTER);
	DEFINE_UE_CLASS_HELPERS(UDFMVehicleAssembleSteeringWheelExtension, "DFMVehicleAssembleSteeringWheelExtension")

};

// Object: Class DFMVehicle.DFMVehicleAssembleEmissionExtension
// Size: 0x68 (Inherited: 0x50)
struct UDFMVehicleAssembleEmissionExtension : UDFMVehicleAssembleExtensionBase
{
	struct TArray<struct FDFMVehicleEmissionConfig> EmissionConfigs; // 0x50(0x10)
	uint8_t Pad_0x60[0x8]; // 0x60(0x8)


	// Object: Function DFMVehicle.DFMVehicleAssembleEmissionExtension.OnCharacterSwitchSeat
	// Flags: [Final|Native|Protected]
	// Offset: 0xf5fbc44
	// Params: [ Num(3) Size(0x18) ]
	void OnCharacterSwitchSeat(struct AActor* CHARACTER, struct FName OldSeatName, struct FName NewSeatName);

	// Object: Function DFMVehicle.DFMVehicleAssembleEmissionExtension.OnCharacterGetOn
	// Flags: [Final|Native|Protected]
	// Offset: 0xf9fbcdc
	// Params: [ Num(2) Size(0x10) ]
	void OnCharacterGetOn(struct AActor* CHARACTER, struct FName SeatName);

	// Object: Function DFMVehicle.DFMVehicleAssembleEmissionExtension.OnCharacterGetOff
	// Flags: [Final|Native|Protected]
	// Offset: 0xf720dbc
	// Params: [ Num(1) Size(0x8) ]
	void OnCharacterGetOff(struct AActor* CHARACTER);
	DEFINE_UE_CLASS_HELPERS(UDFMVehicleAssembleEmissionExtension, "DFMVehicleAssembleEmissionExtension")

};

// Object: Class DFMVehicle.DFMVehicleAssembleDoorExtension
// Size: 0x80 (Inherited: 0x50)
struct UDFMVehicleAssembleDoorExtension : UDFMVehicleAssembleExtensionBase
{
	struct FName AssociatedSeatName; // 0x4C(0x8)
	struct FRotator TargetRotatr; // 0x54(0xC)
	float RotateSpeed; // 0x60(0x4)
	uint8_t Pad_0x68[0x18]; // 0x68(0x18)


	// Object: Function DFMVehicle.DFMVehicleAssembleDoorExtension.OnCharacterSwitchSeat
	// Flags: [Final|Native|Protected]
	// Offset: 0xfabf928
	// Params: [ Num(3) Size(0x18) ]
	void OnCharacterSwitchSeat(struct AActor* CHARACTER, struct FName OldSeatName, struct FName NewSeatName);

	// Object: Function DFMVehicle.DFMVehicleAssembleDoorExtension.OnCharacterGetOn
	// Flags: [Final|Native|Protected]
	// Offset: 0xfb2f1c8
	// Params: [ Num(2) Size(0x10) ]
	void OnCharacterGetOn(struct AActor* CHARACTER, struct FName SeatName);

	// Object: Function DFMVehicle.DFMVehicleAssembleDoorExtension.OnCharacterGetOff
	// Flags: [Final|Native|Protected]
	// Offset: 0xf88b770
	// Params: [ Num(1) Size(0x8) ]
	void OnCharacterGetOff(struct AActor* CHARACTER);
	DEFINE_UE_CLASS_HELPERS(UDFMVehicleAssembleDoorExtension, "DFMVehicleAssembleDoorExtension")

};

// Object: Class DFMVehicle.DFMVehicleTireTrackExtension
// Size: 0x78 (Inherited: 0x50)
struct UDFMVehicleTireTrackExtension : UDFMVehicleAssembleExtensionBase
{
	int32_t WheelIndex; // 0x4C(0x4)
	float frequency; // 0x50(0x4)
	float WheelWidth; // 0x54(0x4)
	struct UTexture2D* BrushTexture; // 0x58(0x8)
	float BrushScale; // 0x60(0x4)
	uint8_t Pad_0x68[0x10]; // 0x68(0x10)
	DEFINE_UE_CLASS_HELPERS(UDFMVehicleTireTrackExtension, "DFMVehicleTireTrackExtension")

};

// Object: Class DFMVehicle.DFMHelicopterGlassExtension
// Size: 0x80 (Inherited: 0x50)
struct UDFMHelicopterGlassExtension : UDFMVehicleAssembleExtensionBase
{
	int32_t MaxDegreeOfCrush; // 0x4C(0x4)
	int32_t NeedAmmoNum_HD; // 0x50(0x4)
	int32_t NeedAmmoNum_Mobile; // 0x54(0x4)
	struct UMaterialInstanceDynamic* DynamicMaterialInstance; // 0x58(0x8)
	struct FName BrokenAuidio; // 0x60(0x8)
	struct FName ImpactAuidio; // 0x68(0x8)
	uint8_t Pad_0x74[0xC]; // 0x74(0xC)
	DEFINE_UE_CLASS_HELPERS(UDFMHelicopterGlassExtension, "DFMHelicopterGlassExtension")

};

// Object: Class DFMVehicle.DFMBrokenItemExtension
// Size: 0x68 (Inherited: 0x50)
struct UDFMBrokenItemExtension : UDFMVehicleAssembleExtensionBase
{
	int32_t NeedAmmoNum; // 0x4C(0x4)
	int32_t NeedAmmoNum_HD; // 0x50(0x4)
	int32_t NeedAmmoNum_Mobile; // 0x54(0x4)
	struct AActor* OwnerActor; // 0x58(0x8)
	uint8_t Pad_0x64[0x4]; // 0x64(0x4)
	DEFINE_UE_CLASS_HELPERS(UDFMBrokenItemExtension, "DFMBrokenItemExtension")

};

// Object: Class DFMVehicle.DFMVehicleBattlefieldEffectComponent
// Size: 0x238 (Inherited: 0x228)
struct UDFMVehicleBattlefieldEffectComponent : UGPBattlefieldEffectComponent
{
	uint8_t Pad_0x228[0x10]; // 0x228(0x10)


	// Object: Function DFMVehicle.DFMVehicleBattlefieldEffectComponent.OnVehicleWeaponChanged
	// Flags: [Final|Native|Protected]
	// Offset: 0x140a4b5c
	// Params: [ Num(0) Size(0x0) ]
	void OnVehicleWeaponChanged();

	// Object: Function DFMVehicle.DFMVehicleBattlefieldEffectComponent.OnVehicleSkinChanged
	// Flags: [Final|Native|Protected]
	// Offset: 0x140a4ab8
	// Params: [ Num(1) Size(0x4) ]
	void OnVehicleSkinChanged(int32_t SkinId);
	DEFINE_UE_CLASS_HELPERS(UDFMVehicleBattlefieldEffectComponent, "DFMVehicleBattlefieldEffectComponent")

};

// Object: Class DFMVehicle.DFMVehicleCollisionComponent
// Size: 0x950 (Inherited: 0x5B0)
struct UDFMVehicleCollisionComponent : UBoxComponent
{
	uint8_t bStopCheckingWhenDisableSimulatingPhysics : 1; // 0x5A2(0x1), Mask(0x1)
	struct TArray<struct FDFMVehicleCollisionBox> CollisionBoxArray; // 0x5A8(0x10)
	float CollisionDecelerateDelay; // 0x5B8(0x4)
	float CollisionParam; // 0x5BC(0x4)
	float CollisionAngle; // 0x5C0(0x4)
	float CollisionCooldownMesh; // 0x5C4(0x4)
	float CollisionBreakableVelocity; // 0x5C8(0x4)
	float CollisionCooldownVehicle; // 0x5CC(0x4)
	float CollisionHurtRatio; // 0x5D0(0x4)
	float HitCharacterCoolDownTime; // 0x5D4(0x4)
	float MinVelocityToHitCharacter; // 0x5D8(0x4)
	float HitCharacterImpulseAngle; // 0x5DC(0x4)
	float HitCharacterImpulseFactor; // 0x5E0(0x4)
	struct ADFMVehicleBase* OwnerVehicle; // 0x5E8(0x8)
	struct TMap<struct AActor*, float> HitDamageCooldown; // 0x5F0(0x50)
	uint8_t BitPad_0x644_1 : 7; // 0x644(0x1)
	uint8_t Pad_0x645[0x9B]; // 0x645(0x9B)
	struct TArray<struct AGPCharacterBase*> LockedCharacters; // 0x6E0(0x10)
	uint8_t Pad_0x6F0[0x40]; // 0x6F0(0x40)
	struct TMap<struct ADFMCharacter*, float> HitCharacterMap; // 0x730(0x50)
	uint8_t Pad_0x780[0x158]; // 0x780(0x158)
	struct TArray<struct UDFVehicleDynamicMeshComponent*> DynamicMeshComponents; // 0x8D8(0x10)
	uint8_t Pad_0x8E8[0x50]; // 0x8E8(0x50)
	struct TArray<struct FTimerHandle> DelayMakeDamageTimerHandles; // 0x938(0x10)
	uint8_t Pad_0x948[0x8]; // 0x948(0x8)


	// Object: Function DFMVehicle.DFMVehicleCollisionComponent.ServerMakeDamageToActor
	// Flags: [Net|NetReliableNative|Event|Public|NetServer]
	// Offset: 0x140a4fdc
	// Params: [ Num(7) Size(0x1D) ]
	void ServerMakeDamageToActor(struct AActor* TargetActor, float VelocitySize, float VelocityOffset, float VelocityBeforeCollision, float HitAngleWithVehicleUp, float AngleVehicleUpWithUp, uint8_t bOnlyConsideHitWall);

	// Object: Function DFMVehicle.DFMVehicleCollisionComponent.ServerDelayMakeDamageToActor
	// Flags: [Final|Native|Public|HasDefaults]
	// Offset: 0x140a4e88
	// Params: [ Num(4) Size(0x1C) ]
	void ServerDelayMakeDamageToActor(struct AActor* TargetActor, struct FVector VelocityBeforeCollision, float HitAngleWithVehicleUp, float AngleVehicleUpWithUp);

	// Object: Function DFMVehicle.DFMVehicleCollisionComponent.OnVehicleOverShot
	// Flags: [Final|Native|Protected]
	// Offset: 0x140a4d58
	// Params: [ Num(2) Size(0xC8) ]
	void OnVehicleOverShot(struct FRigidBodyState CurrentRigidBodyState, struct FHitResult HitResult);

	// Object: Function DFMVehicle.DFMVehicleCollisionComponent.OnVehicleHitCallback
	// Flags: [Final|Native|Protected|HasOutParms|HasDefaults]
	// Offset: 0xfa3b950
	// Params: [ Num(4) Size(0xA4) ]
	void OnVehicleHitCallback(struct AActor* SelfActor, struct AActor* OtherActor, struct FVector NormalImpulse, const struct FHitResult& Hit);
	DEFINE_UE_CLASS_HELPERS(UDFMVehicleCollisionComponent, "DFMVehicleCollisionComponent")

};

// Object: Class DFMVehicle.DFMVehiclePassiveSkillExecutor
// Size: 0x90 (Inherited: 0x90)
struct UDFMVehiclePassiveSkillExecutor : UDFMVehicleSkillExecutor
{	DEFINE_UE_CLASS_HELPERS(UDFMVehiclePassiveSkillExecutor, "DFMVehiclePassiveSkillExecutor")

};

// Object: Class DFMVehicle.DFMVehicleCounterFireRadarPassiveSkillExecutor
// Size: 0x140 (Inherited: 0x90)
struct UDFMVehicleCounterFireRadarPassiveSkillExecutor : UDFMVehiclePassiveSkillExecutor
{
	uint8_t Pad_0x90[0xB0]; // 0x90(0xB0)


	// Object: Function DFMVehicle.DFMVehicleCounterFireRadarPassiveSkillExecutor.RefreshRevealedActorsStatus
	// Flags: [Final|Native|Public]
	// Offset: 0x140a52d0
	// Params: [ Num(0) Size(0x0) ]
	void RefreshRevealedActorsStatus();

	// Object: Function DFMVehicle.DFMVehicleCounterFireRadarPassiveSkillExecutor.OnVehicleTakeDamage
	// Flags: [Final|Native|Public|HasOutParms]
	// Offset: 0x140a5210
	// Params: [ Num(1) Size(0x8A0) ]
	void OnVehicleTakeDamage(const struct FDamageResultInfo& DamageResultInfo);
	DEFINE_UE_CLASS_HELPERS(UDFMVehicleCounterFireRadarPassiveSkillExecutor, "DFMVehicleCounterFireRadarPassiveSkillExecutor")

};

// Object: Class DFMVehicle.DFMVehicleDataCollectionSubsystemConfig
// Size: 0x80 (Inherited: 0x28)
struct UDFMVehicleDataCollectionSubsystemConfig : UObject
{
	struct TSet<struct TSoftClassPtr<struct ADFMGameMode*>> GameModeWhiteList; // 0x28(0x50)
	float VehicleDataSampleInterval; // 0x78(0x4)
	float VehicleFightStateTimeThreshold; // 0x7C(0x4)
	DEFINE_UE_CLASS_HELPERS(UDFMVehicleDataCollectionSubsystemConfig, "DFMVehicleDataCollectionSubsystemConfig")

};

// Object: Class DFMVehicle.DFMVehicleDataCollectionSubsystem
// Size: 0xF8 (Inherited: 0x30)
struct UDFMVehicleDataCollectionSubsystem : UWorldSubsystem
{
	uint8_t Pad_0x30[0xC8]; // 0x30(0xC8)


	// Object: Function DFMVehicle.DFMVehicleDataCollectionSubsystem.OnServerMatchEnded
	// Flags: [Final|Native|Protected]
	// Offset: 0x140a56d4
	// Params: [ Num(2) Size(0x10) ]
	void OnServerMatchEnded(EMatchOverReason MatchOverReason, int64_t PlayerUin);

	// Object: Function DFMVehicle.DFMVehicleDataCollectionSubsystem.OnPostMakeDamageNtf
	// Flags: [Final|Native|Protected|HasOutParms]
	// Offset: 0x140a5614
	// Params: [ Num(1) Size(0x8A0) ]
	void OnPostMakeDamageNtf(const struct FDamageResultInfo& DamageResult);

	// Object: Function DFMVehicle.DFMVehicleDataCollectionSubsystem.OnBehaviorScoreUpdateNtf
	// Flags: [Final|Native|Protected]
	// Offset: 0x140a54bc
	// Params: [ Num(4) Size(0x18) ]
	void OnBehaviorScoreUpdateNtf(struct AGPCharacter* CHARACTER, int32_t ScoreName, struct FName ScoreNameExt, int32_t Score);
	DEFINE_UE_CLASS_HELPERS(UDFMVehicleDataCollectionSubsystem, "DFMVehicleDataCollectionSubsystem")

};

// Object: Class DFMVehicle.DFMVehicleDestroyDestructibleComponent
// Size: 0x5B0 (Inherited: 0x5B0)
struct UDFMVehicleDestroyDestructibleComponent : UBoxComponent
{

	// Object: Function DFMVehicle.DFMVehicleDestroyDestructibleComponent.OnComponentBeginOverlapTriggered
	// Flags: [Final|Native|Protected|HasOutParms]
	// Offset: 0x140a57bc
	// Params: [ Num(6) Size(0xA8) ]
	void OnComponentBeginOverlapTriggered(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, uint8_t bFromSweep, const struct FHitResult& SweepResult);
	DEFINE_UE_CLASS_HELPERS(UDFMVehicleDestroyDestructibleComponent, "DFMVehicleDestroyDestructibleComponent")

};

// Object: Class DFMVehicle.DFMVehicleDirectionSplineComponent
// Size: 0x6C0 (Inherited: 0x670)
struct UDFMVehicleDirectionSplineComponent : USplineComponent
{
	int32_t DebugDriveIndex; // 0x664(0x4)
	struct FName InstancedMeshName; // 0x668(0x8)
	struct FName SkeletalMeshName; // 0x670(0x8)
	uint8_t IsLeftDirection : 1; // 0x678(0x1), Mask(0x1)
	int32_t MeshNum; // 0x67C(0x4)
	struct FVector MeshScale; // 0x680(0xC)
	struct TArray<struct FDirectionControllInfo> ControllInfos; // 0x690(0x10)
	uint8_t BitPad_0x6A4_1 : 7; // 0x6A4(0x1)
	uint8_t Pad_0x6A5[0x1B]; // 0x6A5(0x1B)
	DEFINE_UE_CLASS_HELPERS(UDFMVehicleDirectionSplineComponent, "DFMVehicleDirectionSplineComponent")

};

// Object: Class DFMVehicle.DFMVehicleEnginePartInstance
// Size: 0x58 (Inherited: 0x50)
struct UDFMVehicleEnginePartInstance : UDFMVehicleBodyPartInstance
{
	float EngineDebuffRatio; // 0x50(0x4)
	float EngineSpeedDebuffRatio; // 0x54(0x4)
	DEFINE_UE_CLASS_HELPERS(UDFMVehicleEnginePartInstance, "DFMVehicleEnginePartInstance")

};

// Object: Class DFMVehicle.DFMVehicleEnginePartExecutor
// Size: 0xB8 (Inherited: 0xB8)
struct UDFMVehicleEnginePartExecutor : UDFMVehicleBodyPartExecutor
{	DEFINE_UE_CLASS_HELPERS(UDFMVehicleEnginePartExecutor, "DFMVehicleEnginePartExecutor")

};

// Object: Class DFMVehicle.DFMVehicleGetOffSkillExecutor
// Size: 0xA0 (Inherited: 0x90)
struct UDFMVehicleGetOffSkillExecutor : UDFMVehicleSkillExecutor
{
	uint8_t Pad_0x90[0x10]; // 0x90(0x10)


	// Object: Function DFMVehicle.DFMVehicleGetOffSkillExecutor.PerformGetOff
	// Flags: [Final|Native|Private]
	// Offset: 0x140a5ee8
	// Params: [ Num(0) Size(0x0) ]
	void PerformGetOff();
	DEFINE_UE_CLASS_HELPERS(UDFMVehicleGetOffSkillExecutor, "DFMVehicleGetOffSkillExecutor")

};

// Object: Class DFMVehicle.DFMVehicleGlobalUtils
// Size: 0x28 (Inherited: 0x28)
struct UDFMVehicleGlobalUtils : UObject
{

	// Object: Function DFMVehicle.DFMVehicleGlobalUtils.GetSkillWidgetNames
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x140a6440
	// Params: [ Num(3) Size(0x60) ]
	static struct TMap<struct FName, struct FString> GetSkillWidgetNames(struct ADFMVehicleBase* Vehicle, struct AActor* CHARACTER);

	// Object: Function DFMVehicle.DFMVehicleGlobalUtils.GetSkillWidgetConfig
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x140a6340
	// Params: [ Num(3) Size(0x60) ]
	static struct TMap<struct FString, struct FName> GetSkillWidgetConfig(struct ADFMVehicleBase* Vehicle, struct AActor* CHARACTER);

	// Object: Function DFMVehicle.DFMVehicleGlobalUtils.GetPreloadedSubWidgetNames
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x140a62a8
	// Params: [ Num(1) Size(0x10) ]
	static struct TArray<struct FName> GetPreloadedSubWidgetNames();

	// Object: Function DFMVehicle.DFMVehicleGlobalUtils.GetAllSubWidgetNames
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x140a6194
	// Params: [ Num(3) Size(0x20) ]
	static struct TArray<struct FName> GetAllSubWidgetNames(struct ADFMVehicleBase* Vehicle, struct AActor* CHARACTER);

	// Object: Function DFMVehicle.DFMVehicleGlobalUtils.GetAllSubParentWidgetNames
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x140a6080
	// Params: [ Num(3) Size(0x20) ]
	static struct TArray<struct FName> GetAllSubParentWidgetNames(struct ADFMVehicleBase* Vehicle, struct AActor* CHARACTER);

	// Object: Function DFMVehicle.DFMVehicleGlobalUtils.GetAllSubChildrenWidgetNames
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x140a5f6c
	// Params: [ Num(3) Size(0x20) ]
	static struct TArray<struct FName> GetAllSubChildrenWidgetNames(struct ADFMVehicleBase* Vehicle, struct AActor* CHARACTER);
	DEFINE_UE_CLASS_HELPERS(UDFMVehicleGlobalUtils, "DFMVehicleGlobalUtils")

};

// Object: Class DFMVehicle.DFMVehicleGPSkeletalMeshComponent
// Size: 0x13A0 (Inherited: 0x1380)
struct UDFMVehicleGPSkeletalMeshComponent : UGPSkeletalMeshComponent
{
	uint8_t bVehicleUseCustomBounds : 1; // 0x1380(0x1), Mask(0x1)
	uint8_t BitPad_0x1380_1 : 7; // 0x1380(0x1)
	uint8_t Pad_0x1381[0x3]; // 0x1381(0x3)
	struct FBoxSphereBounds VehicleCustomBounds; // 0x1384(0x1C)
	DEFINE_UE_CLASS_HELPERS(UDFMVehicleGPSkeletalMeshComponent, "DFMVehicleGPSkeletalMeshComponent")

};

// Object: Class DFMVehicle.DFMVehicleHitEffectComponent
// Size: 0x780 (Inherited: 0x740)
struct UDFMVehicleHitEffectComponent : UDFMHitEffectComponent
{
	struct TArray<struct FVehicleBeHitCameraShakeInfo> CameraShakeInfos; // 0x740(0x10)
	float HeavyDamageRatio; // 0x750(0x4)
	struct FVehicleBlockGunSwayInfo BlockGunSwayInfo; // 0x754(0x14)
	struct FMulticastInlineDelegate OnVehicleHeavyDamage; // 0x768(0x10)
	uint8_t Pad_0x778[0x8]; // 0x778(0x8)
	DEFINE_UE_CLASS_HELPERS(UDFMVehicleHitEffectComponent, "DFMVehicleHitEffectComponent")

};

// Object: Class DFMVehicle.DFMVehicleLaunchProjectileSkillExecutor
// Size: 0x1E0 (Inherited: 0x90)
struct UDFMVehicleLaunchProjectileSkillExecutor : UDFMVehicleSkillExecutor
{
	struct TArray<struct FVehicleLaunchSkillProjectileInfo> ProjectileInfos; // 0x88(0x10)
	uint8_t Pad_0xA0[0x8]; // 0xA0(0x8)
	struct FDFMVehicleLaunchProjectileConfig LaunchProjectileConfig; // 0xA8(0x120)
	uint8_t Pad_0x1C8[0x18]; // 0x1C8(0x18)
	DEFINE_UE_CLASS_HELPERS(UDFMVehicleLaunchProjectileSkillExecutor, "DFMVehicleLaunchProjectileSkillExecutor")

};

// Object: Class DFMVehicle.DFMVehicleMarkSkillExecutor
// Size: 0xC0 (Inherited: 0x90)
struct UDFMVehicleMarkSkillExecutor : UDFMVehicleSkillExecutor
{
	uint8_t Pad_0x90[0x30]; // 0x90(0x30)
	DEFINE_UE_CLASS_HELPERS(UDFMVehicleMarkSkillExecutor, "DFMVehicleMarkSkillExecutor")

};

// Object: Class DFMVehicle.DFMVehicleMovementComponentNW
// Size: 0x590 (Inherited: 0x2D8)
struct UDFMVehicleMovementComponentNW : UWheeledVehicleMovementComponent
{
	uint8_t Pad_0x2D8[0x10]; // 0x2D8(0x10)
	struct UDFMWheeledVehicleMovementImplement* MovementImpl; // 0x2E8(0x8)
	float MaxVelocity; // 0x2F0(0x4)
	uint8_t IsSpecialSteerMode : 1; // 0x2F4(0x1), Mask(0x1)
	uint8_t BitPad_0x2F4_1 : 7; // 0x2F4(0x1)
	uint8_t Pad_0x2F5[0x3]; // 0x2F5(0x3)
	float SpecialSteerModeSwitchTime; // 0x2F8(0x4)
	uint8_t IsSpecialSteerMannualGear : 1; // 0x2FC(0x1), Mask(0x1)
	uint8_t BitPad_0x2FC_1 : 7; // 0x2FC(0x1)
	uint8_t Pad_0x2FD[0x3]; // 0x2FD(0x3)
	int32_t SpecialSteerGearNum; // 0x300(0x4)
	uint8_t Pad_0x304[0x4]; // 0x304(0x4)
	struct TArray<int32_t> ReverseSteerWheels; // 0x308(0x10)
	struct FVehicleEngineData EngineSetup; // 0x318(0xB8)
	struct FVehicleDifferentialNWData DifferentialSetup; // 0x3D0(0x10)
	struct FVehicleTransmissionData TransmissionSetup; // 0x3E0(0x38)
	struct FRuntimeFloatCurve SteeringCurve; // 0x418(0xA0)
	struct TArray<float> GearSwitchTimes; // 0x4B8(0x10)
	float LongStiffRotationThreshold; // 0x4C8(0x4)
	float MinLongStiffValue; // 0x4CC(0x4)
	uint8_t bChangeGearByVelocity : 1; // 0x4D0(0x1), Mask(0x1)
	uint8_t BitPad_0x4D0_1 : 7; // 0x4D0(0x1)
	uint8_t Pad_0x4D1[0x3]; // 0x4D1(0x3)
	int32_t GearNum; // 0x4D4(0x4)
	struct TArray<struct FVector2D> DownUpGearSpeed; // 0x4D8(0x10)
	float NeutralToFirstGearRPMRatio; // 0x4E8(0x4)
	uint8_t AuthorityOverrideSubStepCount : 1; // 0x4EC(0x1), Mask(0x1)
	uint8_t BitPad_0x4EC_1 : 7; // 0x4EC(0x1)
	uint8_t Pad_0x4ED[0x3]; // 0x4ED(0x3)
	int32_t AuthoritySubStepCount; // 0x4F0(0x4)
	float UpperLimitVelocity; // 0x4F4(0x4)
	float LowerLimitVelocity; // 0x4F8(0x4)
	float UpperVelocityDepenetrationVel; // 0x4FC(0x4)
	float LowerVelocityDepenetrationVelocity; // 0x500(0x4)
	uint8_t bApplyGFilter : 1; // 0x504(0x1), Mask(0x1)
	uint8_t BitPad_0x504_1 : 7; // 0x504(0x1)
	uint8_t Pad_0x505[0x3]; // 0x505(0x3)
	float AllowedLeftGSize; // 0x508(0x4)
	float StartApplyUpVelThreshold; // 0x50C(0x4)
	uint8_t Pad_0x510[0x1C]; // 0x510(0x1C)
	struct FReplicatedVehicleNWState ReplicatedNWState; // 0x52C(0x20)
	uint8_t Pad_0x54C[0x44]; // 0x54C(0x44)
	DEFINE_UE_CLASS_HELPERS(UDFMVehicleMovementComponentNW, "DFMVehicleMovementComponentNW")

};

// Object: Class DFMVehicle.DFMVehicleMovementImplement
// Size: 0x28 (Inherited: 0x28)
struct UDFMVehicleMovementImplement : UObject
{	DEFINE_UE_CLASS_HELPERS(UDFMVehicleMovementImplement, "DFMVehicleMovementImplement")

};

// Object: Class DFMVehicle.DFMVehicleMovementInterface
// Size: 0x28 (Inherited: 0x28)
struct IDFMVehicleMovementInterface : IInterface
{

	// Object: Function DFMVehicle.DFMVehicleMovementInterface.IsRollover
	// Flags: [Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x140aa6e0
	// Params: [ Num(1) Size(0x1) ]
	uint8_t IsRollover();

	// Object: Function DFMVehicle.DFMVehicleMovementInterface.IsBraking
	// Flags: [Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x140aa6a0
	// Params: [ Num(1) Size(0x1) ]
	uint8_t IsBraking();

	// Object: Function DFMVehicle.DFMVehicleMovementInterface.GetRawThrottleInput
	// Flags: [Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x140aa5e4
	// Params: [ Num(2) Size(0x8) ]
	float GetRawThrottleInput(uint8_t LocalVal);

	// Object: Function DFMVehicle.DFMVehicleMovementInterface.GetRawSteeringInput
	// Flags: [Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x140aa528
	// Params: [ Num(2) Size(0x8) ]
	float GetRawSteeringInput(uint8_t LocalVal);

	// Object: Function DFMVehicle.DFMVehicleMovementInterface.GetOnVehicleMoveBase
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0xf9afee8
	// Params: [ Num(1) Size(0x8) ]
	void GetOnVehicleMoveBase(struct AActor* Actor);

	// Object: Function DFMVehicle.DFMVehicleMovementInterface.GetOffVehicleMoveBase
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0xf9afe3c
	// Params: [ Num(1) Size(0x8) ]
	void GetOffVehicleMoveBase(struct AActor* Actor);
	DEFINE_UE_CLASS_HELPERS(IDFMVehicleMovementInterface, "DFMVehicleMovementInterface")

};

// Object: Class DFMVehicle.DFMVehicleMultiInteractor
// Size: 0x860 (Inherited: 0x810)
struct ADFMVehicleMultiInteractor : AMultiInteractorBase
{
	uint8_t Pad_0x810[0x50]; // 0x810(0x50)


	// Object: Function DFMVehicle.DFMVehicleMultiInteractor.RefreshInteractPanel
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(0) Size(0x0) ]
	void RefreshInteractPanel();

	// Object: Function DFMVehicle.DFMVehicleMultiInteractor.OnInteractorHUDClicked
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x140aa758
	// Params: [ Num(1) Size(0x4) ]
	void OnInteractorHUDClicked(int32_t InteractorIndex);
	DEFINE_UE_CLASS_HELPERS(ADFMVehicleMultiInteractor, "DFMVehicleMultiInteractor")

};

// Object: Class DFMVehicle.DFMVehicleMusicComponent
// Size: 0x180 (Inherited: 0xF8)
struct UDFMVehicleMusicComponent : UActorComponent
{
	int32_t LoopASTimeMS; // 0xF8(0x4)
	EVehicleMusicState MusicState; // 0xFC(0x1)
	uint8_t Pad_0xFD[0x3]; // 0xFD(0x3)
	float MusicStartServerTime; // 0x100(0x4)
	int32_t CurrentMusicIndex; // 0x104(0x4)
	int32_t CurrentMusicDurationMS; // 0x108(0x4)
	uint8_t Pad_0x10C[0x4C]; // 0x10C(0x4C)
	struct TArray<struct UGPAudioEventAsset*> LoadedMusicAssets; // 0x158(0x10)
	uint8_t Pad_0x168[0x8]; // 0x168(0x8)
	struct ADFMVehicleBase* CachedOwnerVehicle; // 0x170(0x8)
	struct UGameAkComponent* GameAk; // 0x178(0x8)


	// Object: Function DFMVehicle.DFMVehicleMusicComponent.ServerStopMusic
	// Flags: [Net|NetReliableNative|Event|Protected|NetServer]
	// Offset: 0x140aab7c
	// Params: [ Num(0) Size(0x0) ]
	void ServerStopMusic();

	// Object: Function DFMVehicle.DFMVehicleMusicComponent.ServerPlayMusic
	// Flags: [Net|NetReliableNative|Event|Protected|NetServer]
	// Offset: 0x140aab60
	// Params: [ Num(0) Size(0x0) ]
	void ServerPlayMusic();

	// Object: Function DFMVehicle.DFMVehicleMusicComponent.RequestStopMusic
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x140aab4c
	// Params: [ Num(0) Size(0x0) ]
	void RequestStopMusic();

	// Object: Function DFMVehicle.DFMVehicleMusicComponent.RequestPlayMusic
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x140aab38
	// Params: [ Num(0) Size(0x0) ]
	void RequestPlayMusic();

	// Object: Function DFMVehicle.DFMVehicleMusicComponent.OnVehicleDead
	// Flags: [Final|Native|Protected]
	// Offset: 0xfbdd424
	// Params: [ Num(1) Size(0x8) ]
	void OnVehicleDead(struct AActor* DFMVehicle);

	// Object: Function DFMVehicle.DFMVehicleMusicComponent.OnRep_MusicState
	// Flags: [Final|Native|Protected]
	// Offset: 0xf4a1690
	// Params: [ Num(0) Size(0x0) ]
	void OnRep_MusicState();

	// Object: Function DFMVehicle.DFMVehicleMusicComponent.OnCharacterSwitchSeat
	// Flags: [Final|Native|Protected]
	// Offset: 0x140aaa20
	// Params: [ Num(3) Size(0x18) ]
	void OnCharacterSwitchSeat(struct AActor* CHARACTER, struct FName OldSeatName, struct FName NewSeatName);

	// Object: Function DFMVehicle.DFMVehicleMusicComponent.OnCharacterGetOn
	// Flags: [Final|Native|Protected]
	// Offset: 0x140aa944
	// Params: [ Num(2) Size(0x10) ]
	void OnCharacterGetOn(struct AActor* CHARACTER, struct FName SeatName);

	// Object: Function DFMVehicle.DFMVehicleMusicComponent.OnCharacterGetOff
	// Flags: [Final|Native|Protected]
	// Offset: 0x140aa8a0
	// Params: [ Num(1) Size(0x8) ]
	void OnCharacterGetOff(struct AActor* CHARACTER);

	// Object: Function DFMVehicle.DFMVehicleMusicComponent.GetMusicState
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x140aa86c
	// Params: [ Num(1) Size(0x1) ]
	EVehicleMusicState GetMusicState();
	DEFINE_UE_CLASS_HELPERS(UDFMVehicleMusicComponent, "DFMVehicleMusicComponent")

};

// Object: Class DFMVehicle.DFMVehicleMusicManager
// Size: 0xE8 (Inherited: 0x30)
struct UDFMVehicleMusicManager : UWorldSubsystem
{
	uint8_t Pad_0x30[0xB8]; // 0x30(0xB8)
	DEFINE_UE_CLASS_HELPERS(UDFMVehicleMusicManager, "DFMVehicleMusicManager")

};

// Object: Class DFMVehicle.DFMVehiclePathFollowComponent
// Size: 0x1F0 (Inherited: 0xF8)
struct UDFMVehiclePathFollowComponent : UActorComponent
{
	struct FMulticastInlineDelegate OnMoveFollow; // 0xF8(0x10)
	struct FMulticastInlineDelegate OnStopFollow; // 0x108(0x10)
	struct FMulticastInlineDelegate OnPauseFollow; // 0x118(0x10)
	struct FMulticastInlineDelegate OnResumeFollow; // 0x128(0x10)
	struct FMulticastInlineDelegate OnBlockedFollow; // 0x138(0x10)
	uint8_t bAutoMoveWhenBegin : 1; // 0x148(0x1), Mask(0x1)
	uint8_t BitPad_0x148_1 : 7; // 0x148(0x1)
	uint8_t Pad_0x149[0x3]; // 0x149(0x3)
	struct FName DefaultSplineTag; // 0x14C(0x8)
	uint8_t bMoveLoopAlongDefaultSpline : 1; // 0x154(0x1), Mask(0x1)
	uint8_t BitPad_0x154_1 : 7; // 0x154(0x1)
	uint8_t bAutoResetWhenBlocked : 1; // 0x155(0x1), Mask(0x1)
	uint8_t BitPad_0x155_1 : 7; // 0x155(0x1)
	uint8_t Pad_0x156[0x2]; // 0x156(0x2)
	float BlockedDetectionDuration; // 0x158(0x4)
	float HeightToPlaceVehicle; // 0x15C(0x4)
	float SteeringInputInterpSpeed; // 0x160(0x4)
	float ThrottleInputInterpSpeed; // 0x164(0x4)
	uint8_t bLimitMaxSpeedWhenMoving : 1; // 0x168(0x1), Mask(0x1)
	uint8_t BitPad_0x168_1 : 7; // 0x168(0x1)
	uint8_t Pad_0x169[0x3]; // 0x169(0x3)
	float MaxSpeedWhenMoving; // 0x16C(0x4)
	uint8_t bInterpolateMovingSpeed : 1; // 0x170(0x1), Mask(0x1)
	uint8_t BitPad_0x170_1 : 7; // 0x170(0x1)
	uint8_t Pad_0x171[0x3]; // 0x171(0x3)
	float InterpolatedSpeedOfMovingSpeed; // 0x174(0x4)
	uint8_t bLimitMaxSpeedWhenTurning : 1; // 0x178(0x1), Mask(0x1)
	uint8_t BitPad_0x178_1 : 7; // 0x178(0x1)
	uint8_t Pad_0x179[0x3]; // 0x179(0x3)
	float MaxSpeedWhenTurning; // 0x17C(0x4)
	float MinSpeedWhenTurning; // 0x180(0x4)
	uint8_t Pad_0x184[0x4]; // 0x184(0x4)
	struct ADFMVehicleBase* OwnerVehicle; // 0x188(0x8)
	struct FDFMVhiclePathFollowMoveRequestParam CurrentMoveParam; // 0x190(0x10)
	struct TArray<struct FDFMVehiclePathFollowWayPointData> CollectedWayPointDataArray; // 0x1A0(0x10)
	uint8_t Pad_0x1B0[0x40]; // 0x1B0(0x40)


	// Object: Function DFMVehicle.DFMVehiclePathFollowComponent.RequestToStop
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x140aad70
	// Params: [ Num(1) Size(0x1) ]
	uint8_t RequestToStop();

	// Object: Function DFMVehicle.DFMVehiclePathFollowComponent.RequestToResume
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x140aad38
	// Params: [ Num(1) Size(0x1) ]
	uint8_t RequestToResume();

	// Object: Function DFMVehicle.DFMVehiclePathFollowComponent.RequestToPause
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x140aad00
	// Params: [ Num(1) Size(0x1) ]
	uint8_t RequestToPause();

	// Object: Function DFMVehicle.DFMVehiclePathFollowComponent.RequestToMove
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x140aac38
	// Params: [ Num(2) Size(0x11) ]
	uint8_t RequestToMove(const struct FDFMVhiclePathFollowMoveRequestParam& InParam);
	DEFINE_UE_CLASS_HELPERS(UDFMVehiclePathFollowComponent, "DFMVehiclePathFollowComponent")

};

// Object: Class DFMVehicle.DFMVehiclePathFollowingComponent
// Size: 0x328 (Inherited: 0x2A0)
struct UDFMVehiclePathFollowingComponent : UPathFollowingComponent
{
	struct FPIDData VelocityController; // 0x2A0(0x1C)
	struct FPIDData HeadingController; // 0x2BC(0x1C)
	float MaxAISpeed; // 0x2D8(0x4)
	float MaxTurningRadius; // 0x2DC(0x4)
	float TurningAroundLimit; // 0x2E0(0x4)
	uint8_t DebugOutputPID : 1; // 0x2E4(0x1), Mask(0x1)
	uint8_t BitPad_0x2E4_1 : 7; // 0x2E4(0x1)
	uint8_t Pad_0x2E5[0x3]; // 0x2E5(0x3)
	float LinearVelocityLerp; // 0x2E8(0x4)
	float AngleVelocityLerp; // 0x2EC(0x4)
	uint8_t Pad_0x2F0[0x38]; // 0x2F0(0x38)


	// Object: Function DFMVehicle.DFMVehiclePathFollowingComponent.SetPathFollowingVelocity
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x140aae58
	// Params: [ Num(1) Size(0x4) ]
	void SetPathFollowingVelocity(float Velocity);
	DEFINE_UE_CLASS_HELPERS(UDFMVehiclePathFollowingComponent, "DFMVehiclePathFollowingComponent")

};

// Object: Class DFMVehicle.VehicleWaypoint
// Size: 0x3A0 (Inherited: 0x370)
struct AVehicleWaypoint : AActor
{
	uint8_t Pad_0x370[0xC]; // 0x370(0xC)
	float ExpectVelocity; // 0x37C(0x4)
	uint8_t ReverseThrottle : 1; // 0x380(0x1), Mask(0x1)
	uint8_t BitPad_0x380_1 : 7; // 0x380(0x1)
	uint8_t Pad_0x381[0x3]; // 0x381(0x3)
	float AngleVelLerpOverride; // 0x384(0x4)
	float LinearVelLerpOverride; // 0x388(0x4)
	float DistanceAtPath; // 0x38C(0x4)
	float SplineInputKey; // 0x390(0x4)
	uint8_t bMuteRayTrace : 1; // 0x394(0x1), Mask(0x1)
	uint8_t BitPad_0x394_1 : 7; // 0x394(0x1)
	uint8_t bActivated : 1; // 0x395(0x1), Mask(0x1)
	uint8_t BitPad_0x395_1 : 7; // 0x395(0x1)
	uint8_t bPause : 1; // 0x396(0x1), Mask(0x1)
	uint8_t BitPad_0x396_1 : 7; // 0x396(0x1)
	uint8_t bShouldDispatchEvent : 1; // 0x397(0x1), Mask(0x1)
	uint8_t BitPad_0x397_1 : 7; // 0x397(0x1)
	struct FName EventName; // 0x398(0x8)
	DEFINE_UE_CLASS_HELPERS(AVehicleWaypoint, "VehicleWaypoint")

};

// Object: Class DFMVehicle.AITankWaypoint
// Size: 0x3C0 (Inherited: 0x3A0)
struct AAITankWaypoint : AVehicleWaypoint
{
	int32_t WayPointIndex; // 0x3A0(0x4)
	float StayTime; // 0x3A4(0x4)
	struct TArray<EAITankPhase> NeedStayPhaseArray; // 0x3A8(0x10)
	struct UBoxComponent* BoxCollision; // 0x3B8(0x8)
	DEFINE_UE_CLASS_HELPERS(AAITankWaypoint, "AITankWaypoint")

};

// Object: Class DFMVehicle.VehicleNavmeshBlockerComponent
// Size: 0x5D0 (Inherited: 0x5B0)
struct UVehicleNavmeshBlockerComponent : UBoxComponent
{
	uint8_t Pad_0x5B0[0x20]; // 0x5B0(0x20)


	// Object: Function DFMVehicle.VehicleNavmeshBlockerComponent.SetCanAffectNavigation
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x140aaf64
	// Params: [ Num(1) Size(0x1) ]
	void SetCanAffectNavigation(uint8_t Value);
	DEFINE_UE_CLASS_HELPERS(UVehicleNavmeshBlockerComponent, "VehicleNavmeshBlockerComponent")

};

// Object: Class DFMVehicle.DFMVehiclePathFollowPath
// Size: 0x3A8 (Inherited: 0x370)
struct ADFMVehiclePathFollowPath : AActor
{
	struct USplineComponent* Spline; // 0x370(0x8)
	struct UTextRenderComponent* PathText; // 0x378(0x8)
	struct TArray<struct ADFMVehiclePathFollowWayPoint*> WayPoints; // 0x380(0x10)
	struct FInterpCurveFloat GroundHeightTable; // 0x390(0x18)


	// Object: Function DFMVehicle.DFMVehiclePathFollowPath.GetWayPointActor
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x140add2c
	// Params: [ Num(2) Size(0x10) ]
	struct ADFMVehiclePathFollowWayPoint* GetWayPointActor(int32_t Index);

	// Object: Function DFMVehicle.DFMVehiclePathFollowPath.GetSpline
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x140adcf8
	// Params: [ Num(1) Size(0x8) ]
	struct USplineComponent* GetSpline();

	// Object: Function DFMVehicle.DFMVehiclePathFollowPath.GetNumberOfWayPointActor
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x140adcc4
	// Params: [ Num(1) Size(0x4) ]
	int32_t GetNumberOfWayPointActor();

	// Object: Function DFMVehicle.DFMVehiclePathFollowPath.GetAllWayPointActors
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x140adc2c
	// Params: [ Num(1) Size(0x10) ]
	struct TArray<struct ADFMVehiclePathFollowWayPoint*> GetAllWayPointActors();

	// Object: Function DFMVehicle.DFMVehiclePathFollowPath.FindDistanceAlongSplineClosestToLocation
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable]
	// Offset: 0x140adb74
	// Params: [ Num(2) Size(0x10) ]
	float FindDistanceAlongSplineClosestToLocation(const struct FVector& Location);

	// Object: Function DFMVehicle.DFMVehiclePathFollowPath.CreateWaypointAtScreenCenter
	// Flags: [Final|Native|Protected|BlueprintCallable]
	// Offset: 0x140adb60
	// Params: [ Num(0) Size(0x0) ]
	void CreateWaypointAtScreenCenter();

	// Object: Function DFMVehicle.DFMVehiclePathFollowPath.CreateWaypoint
	// Flags: [Final|Native|Protected|BlueprintCallable]
	// Offset: 0x140adb4c
	// Params: [ Num(0) Size(0x0) ]
	void CreateWaypoint();

	// Object: Function DFMVehicle.DFMVehiclePathFollowPath.AttachWayPointsToSpline
	// Flags: [Final|Native|Protected|BlueprintCallable]
	// Offset: 0x140adb38
	// Params: [ Num(0) Size(0x0) ]
	void AttachWayPointsToSpline();
	DEFINE_UE_CLASS_HELPERS(ADFMVehiclePathFollowPath, "DFMVehiclePathFollowPath")

};

// Object: Class DFMVehicle.DFMVehiclePathFollowWayPoint
// Size: 0x3A0 (Inherited: 0x370)
struct ADFMVehiclePathFollowWayPoint : AActor
{
	struct FDFMVehiclePathFollowWayPointData WayPointData; // 0x370(0x2C)
	uint8_t Pad_0x39C[0x4]; // 0x39C(0x4)
	DEFINE_UE_CLASS_HELPERS(ADFMVehiclePathFollowWayPoint, "DFMVehiclePathFollowWayPoint")

};

// Object: Class DFMVehicle.DFMVehiclePhysicsReplicationTestMesh
// Size: 0x840 (Inherited: 0x830)
struct UDFMVehiclePhysicsReplicationTestMesh : UStaticMeshComponent
{
	uint8_t bCreatePhysicsInClient : 1; // 0x830(0x1), Mask(0x1)
	uint8_t BitPad_0x830_1 : 7; // 0x830(0x1)
	uint8_t bCreatePhysicsInServer : 1; // 0x831(0x1), Mask(0x1)
	uint8_t BitPad_0x831_1 : 7; // 0x831(0x1)
	uint8_t Pad_0x832[0x6]; // 0x832(0x6)
	struct AWaterDataAssetsStreamer* WaterDataAssetsStreamer; // 0x838(0x8)
	DEFINE_UE_CLASS_HELPERS(UDFMVehiclePhysicsReplicationTestMesh, "DFMVehiclePhysicsReplicationTestMesh")

};

// Object: Class DFMVehicle.DFMVehiclePreviewPlacementActor
// Size: 0x4A8 (Inherited: 0x370)
struct ADFMVehiclePreviewPlacementActor : AActor
{
	struct FLinearColor ValidColor; // 0x370(0x10)
	struct FLinearColor InValidColor; // 0x380(0x10)
	struct UMaterial* PreviewMaterial; // 0x390(0x8)
	uint8_t bCheckPlacedAngle : 1; // 0x398(0x1), Mask(0x1)
	uint8_t BitPad_0x398_1 : 7; // 0x398(0x1)
	uint8_t Pad_0x399[0x3]; // 0x399(0x3)
	float MaxValidAngle; // 0x39C(0x4)
	uint8_t bHideWhenFlipping : 1; // 0x3A0(0x1), Mask(0x1)
	uint8_t BitPad_0x3A0_1 : 7; // 0x3A0(0x1)
	uint8_t Pad_0x3A1[0x7]; // 0x3A1(0x7)
	struct TArray<struct AActor*> ClassesForbidToPlace; // 0x3A8(0x10)
	struct UPrimitiveComponent* PrimitiveComp; // 0x3B8(0x8)
	uint8_t Pad_0x3C0[0x20]; // 0x3C0(0x20)
	struct FVehiclePlacementPreviewActorInitParameter InitParameter; // 0x3E0(0x48)
	uint8_t Pad_0x428[0x78]; // 0x428(0x78)
	struct AActor* PlaceTarget; // 0x4A0(0x8)


	// Object: Function DFMVehicle.DFMVehiclePreviewPlacementActor.IsInValidPosition
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x140ae788
	// Params: [ Num(1) Size(0x1) ]
	uint8_t IsInValidPosition();
	DEFINE_UE_CLASS_HELPERS(ADFMVehiclePreviewPlacementActor, "DFMVehiclePreviewPlacementActor")

};

// Object: Class DFMVehicle.DFMVehicleProjectilePreviewActor
// Size: 0x570 (Inherited: 0x370)
struct ADFMVehicleProjectilePreviewActor : AActor
{
	uint8_t Pad_0x370[0x20]; // 0x370(0x20)
	struct TMap<int32_t, struct AGPPreviewLineRendererActor*> HorizontalLineRendererMap; // 0x390(0x50)
	struct TMap<int32_t, struct AGPPreviewLineRendererActor*> VerticalLineRendererMap; // 0x3E0(0x50)
	struct UObject* HorizontalProjectileActorClass; // 0x430(0x8)
	struct UObject* VerticalProjectileActorClass; // 0x438(0x8)
	struct AGPPreviewLineRendererActor* LineRendererActorClass; // 0x440(0x8)
	struct AOpenWorldUnifiedDecalActor* HorizontalDecalActorClass; // 0x448(0x8)
	float TargetHorizontalDecalRatio; // 0x450(0x4)
	uint8_t Pad_0x454[0x4]; // 0x454(0x4)
	struct AActor* MobileHorizontalDecalActorClass; // 0x458(0x8)
	float MobileDecalActorLength; // 0x460(0x4)
	float HorizontalDecalOffset; // 0x464(0x4)
	struct AActor* HorizontalDecalActor; // 0x468(0x8)
	struct AOpenWorldUnifiedDecalActor* VerticalDecalActorClass; // 0x470(0x8)
	struct FVector VerticalDecalScale; // 0x478(0xC)
	float VerticalDecalOffset; // 0x484(0x4)
	struct AActor* MobileVerticalDecalActorClass; // 0x488(0x8)
	struct FVector MobileVerticalDecalScale; // 0x490(0xC)
	float MobileVerticalDecalOffset; // 0x49C(0x4)
	struct TMap<struct FName, struct AActor*> VerticalDecalActorMap; // 0x4A0(0x50)
	float ProjectileRadius; // 0x4F0(0x4)
	float ProjectileHalfHeight; // 0x4F4(0x4)
	float MaxSimTime; // 0x4F8(0x4)
	float SimFrequency; // 0x4FC(0x4)
	uint8_t Pad_0x500[0x70]; // 0x500(0x70)
	DEFINE_UE_CLASS_HELPERS(ADFMVehicleProjectilePreviewActor, "DFMVehicleProjectilePreviewActor")

};

// Object: Class DFMVehicle.DFMVehicleRebornBeaconSkillExecutor
// Size: 0x100 (Inherited: 0x90)
struct UDFMVehicleRebornBeaconSkillExecutor : UDFMVehicleSkillExecutor
{
	uint8_t Pad_0x90[0x58]; // 0x90(0x58)
	struct ADFMVehiclePreviewPlacementActor* PreviewPlacementActor; // 0xE8(0x8)
	uint8_t Pad_0xF0[0x10]; // 0xF0(0x10)


	// Object: Function DFMVehicle.DFMVehicleRebornBeaconSkillExecutor.OnPreviewPlacementLoaded
	// Flags: [Final|Native|Protected|HasOutParms|HasDefaults]
	// Offset: 0x140ae7e8
	// Params: [ Num(1) Size(0x18) ]
	void OnPreviewPlacementLoaded(const struct FSoftObjectPath& ResourcePath);
	DEFINE_UE_CLASS_HELPERS(UDFMVehicleRebornBeaconSkillExecutor, "DFMVehicleRebornBeaconSkillExecutor")

};

// Object: Class DFMVehicle.DFMVehicleResourceManager
// Size: 0x100 (Inherited: 0x30)
struct UDFMVehicleResourceManager : UWorldSubsystem
{
	struct TMap<struct FSoftObjectPath, struct FDFMVehicleLoadedResourceInfo> LoadedResourceMap; // 0x30(0x50)
	struct TMap<struct FSoftObjectPath, struct FDFMVehicleResourceDelegateInfo> ResourceDelegateMap; // 0x80(0x50)
	struct TArray<uint64_t> LoadHandlerArray; // 0xD0(0x10)
	uint8_t Pad_0xE0[0x20]; // 0xE0(0x20)


	// Object: Function DFMVehicle.DFMVehicleResourceManager.OnResourceLoadComplete
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults]
	// Offset: 0x140aeb34
	// Params: [ Num(1) Size(0x18) ]
	void OnResourceLoadComplete(const struct FSoftObjectPath& ResourcePath);

	// Object: Function DFMVehicle.DFMVehicleResourceManager.OnResourceArrayLoadComplete
	// Flags: [Final|Native|Public]
	// Offset: 0x140aea64
	// Params: [ Num(1) Size(0x10) ]
	void OnResourceArrayLoadComplete(struct TArray<struct FSoftObjectPath> ResourcePaths);
	DEFINE_UE_CLASS_HELPERS(UDFMVehicleResourceManager, "DFMVehicleResourceManager")

};

// Object: Class DFMVehicle.DFMVehicleScanSkillExecutor
// Size: 0x110 (Inherited: 0x90)
struct UDFMVehicleScanSkillExecutor : UDFMVehicleSkillExecutor
{
	uint8_t Pad_0x90[0x80]; // 0x90(0x80)


	// Object: Function DFMVehicle.DFMVehicleScanSkillExecutor.OnScan
	// Flags: [Final|Native|Protected]
	// Offset: 0x140aebfc
	// Params: [ Num(0) Size(0x0) ]
	void OnScan();
	DEFINE_UE_CLASS_HELPERS(UDFMVehicleScanSkillExecutor, "DFMVehicleScanSkillExecutor")

};

// Object: Class DFMVehicle.DFMVehicleSequenceBindingComponent
// Size: 0x1A0 (Inherited: 0x180)
struct UDFMVehicleSequenceBindingComponent : UGPSequenceBindingComponent
{
	struct UDFMVehicleActingComponent* ActingComponent; // 0x178(0x8)
	uint8_t Pad_0x188[0x18]; // 0x188(0x18)


	// Object: Function DFMVehicle.DFMVehicleSequenceBindingComponent.StartAutoDrive
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0x140aee44
	// Params: [ Num(2) Size(0x8) ]
	void StartAutoDrive(float ExpectVelocity, float ExpectDuration);

	// Object: Function DFMVehicle.DFMVehicleSequenceBindingComponent.KillVehicle
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0x140aee28
	// Params: [ Num(0) Size(0x0) ]
	void KillVehicle();

	// Object: Function DFMVehicle.DFMVehicleSequenceBindingComponent.KillAllPassengers
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0x140aee0c
	// Params: [ Num(0) Size(0x0) ]
	void KillAllPassengers();

	// Object: Function DFMVehicle.DFMVehicleSequenceBindingComponent.IsAIDisabled
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x140aedd4
	// Params: [ Num(1) Size(0x1) ]
	uint8_t IsAIDisabled();
	DEFINE_UE_CLASS_HELPERS(UDFMVehicleSequenceBindingComponent, "DFMVehicleSequenceBindingComponent")

};

// Object: Class DFMVehicle.DFMVehicleSkeletalMeshComponent
// Size: 0xF90 (Inherited: 0xF50)
struct UDFMVehicleSkeletalMeshComponent : USkeletalMeshComponent
{
	struct TArray<struct FVehicleBoneSyncInfo> BoneSyncInfos; // 0xF48(0x10)
	struct TArray<struct UDFMVehicleAssembleExtensionBase*> AssembleExtensionArray; // 0xF58(0x10)
	uint8_t bSkipOverlapChecksInClient : 1; // 0xF68(0x1), Mask(0x1)
	uint8_t bUseSimpleBoxOverlap : 1; // 0xF69(0x1), Mask(0x1)
	uint8_t BitPad_0xF70_2 : 6; // 0xF70(0x1)
	uint8_t Pad_0xF71[0x1F]; // 0xF71(0x1F)
	DEFINE_UE_CLASS_HELPERS(UDFMVehicleSkeletalMeshComponent, "DFMVehicleSkeletalMeshComponent")

};

// Object: Class DFMVehicle.DFMVehicleSkillComponent
// Size: 0x210 (Inherited: 0xF8)
struct UDFMVehicleSkillComponent : UActorComponent
{
	uint8_t Pad_0xF8[0x68]; // 0xF8(0x68)
	struct TArray<struct UDFMVehicleSkillInstance*> SKillInstances; // 0x160(0x10)
	struct TMap<struct FString, struct UDFMVehicleSkillInstance*> LocalSkillInstance; // 0x170(0x50)
	uint8_t Pad_0x1C0[0x50]; // 0x1C0(0x50)


	// Object: Function DFMVehicle.DFMVehicleSkillComponent.ServerInterruptVehicleSkills
	// Flags: [Net|NetReliableNative|Event|NetMulticast|Protected]
	// Offset: 0x140af0b0
	// Params: [ Num(1) Size(0x10) ]
	void ServerInterruptVehicleSkills(struct TArray<struct FString> KeyArray);

	// Object: Function DFMVehicle.DFMVehicleSkillComponent.ServerExecuteResult
	// Flags: [Net|NetReliableNative|Event|Protected|NetClient]
	// Offset: 0xfc112c0
	// Params: [ Num(2) Size(0x11) ]
	void ServerExecuteResult(struct FString Key, uint8_t bSuccess);

	// Object: Function DFMVehicle.DFMVehicleSkillComponent.OnRep_SKillInstances
	// Flags: [Final|Native|Protected]
	// Offset: 0x109b4e98
	// Params: [ Num(0) Size(0x0) ]
	void OnRep_SKillInstances();

	// Object: Function DFMVehicle.DFMVehicleSkillComponent.OnCharacterSwitchSeat
	// Flags: [Final|Native|Protected]
	// Offset: 0xf65fdb0
	// Params: [ Num(3) Size(0x18) ]
	void OnCharacterSwitchSeat(struct AActor* CHARACTER, struct FName OldSeatName, struct FName NewSeatName);

	// Object: Function DFMVehicle.DFMVehicleSkillComponent.OnCharacterGetOff
	// Flags: [Final|Native|Protected]
	// Offset: 0xf8117a8
	// Params: [ Num(1) Size(0x8) ]
	void OnCharacterGetOff(struct AActor* CHARACTER);
	DEFINE_UE_CLASS_HELPERS(UDFMVehicleSkillComponent, "DFMVehicleSkillComponent")

};

// Object: Class DFMVehicle.DFMVehicleSmokeSkillExecutor
// Size: 0xE0 (Inherited: 0x90)
struct UDFMVehicleSmokeSkillExecutor : UDFMVehicleSkillExecutor
{
	uint8_t Pad_0x90[0x18]; // 0x90(0x18)
	int32_t SmokeId; // 0xA8(0x4)
	uint8_t Pad_0xAC[0x4]; // 0xAC(0x4)
	struct TSoftClassPtr<struct AActor*> SmokeActorClass; // 0xB0(0x28)
	struct ADFMSkillSmokeActor* SmokeActor; // 0xD8(0x8)
	DEFINE_UE_CLASS_HELPERS(UDFMVehicleSmokeSkillExecutor, "DFMVehicleSmokeSkillExecutor")

};

// Object: Class DFMVehicle.DFMVehicleRepairSkillExecutor
// Size: 0x100 (Inherited: 0x90)
struct UDFMVehicleRepairSkillExecutor : UDFMVehicleSkillExecutor
{
	uint8_t Pad_0x90[0x70]; // 0x90(0x70)


	// Object: Function DFMVehicle.DFMVehicleRepairSkillExecutor.OnVehicleTakeDamage
	// Flags: [Final|Native|Public|HasOutParms]
	// Offset: 0x140af41c
	// Params: [ Num(1) Size(0x8A0) ]
	void OnVehicleTakeDamage(const struct FDamageResultInfo& DamageResultInfo);
	DEFINE_UE_CLASS_HELPERS(UDFMVehicleRepairSkillExecutor, "DFMVehicleRepairSkillExecutor")

};

// Object: Class DFMVehicle.DFMVehicleHeatLightSkillExecutor
// Size: 0xE0 (Inherited: 0x90)
struct UDFMVehicleHeatLightSkillExecutor : UDFMVehicleSkillExecutor
{
	uint8_t Pad_0x90[0x50]; // 0x90(0x50)
	DEFINE_UE_CLASS_HELPERS(UDFMVehicleHeatLightSkillExecutor, "DFMVehicleHeatLightSkillExecutor")

};

// Object: Class DFMVehicle.DFMVehicleSkillInstance
// Size: 0x68 (Inherited: 0x28)
struct UDFMVehicleSkillInstance : UObject
{
	int32_t SkillId; // 0x28(0x4)
	uint8_t bIsPassiveSkill : 1; // 0x2C(0x1), Mask(0x1)
	uint8_t BitPad_0x2C_1 : 7; // 0x2C(0x1)
	uint8_t Pad_0x2D[0x3]; // 0x2D(0x3)
	struct FName SeatName; // 0x30(0x8)
	EDFMVehicleSkillStatus SKillStatus; // 0x38(0x1)
	uint8_t Pad_0x39[0x3]; // 0x39(0x3)
	float RemainSkillDuration; // 0x3C(0x4)
	float RemainCoolDownTime; // 0x40(0x4)
	int32_t RemainSkillNum; // 0x44(0x4)
	uint8_t bIsDisable : 1; // 0x48(0x1), Mask(0x1)
	uint8_t BitPad_0x48_1 : 7; // 0x48(0x1)
	uint8_t Pad_0x49[0x7]; // 0x49(0x7)
	struct ADFMVehicleBase* OwnVehicle; // 0x50(0x8)
	struct AGPCharacter* LastSkillUser; // 0x58(0x8)
	struct UDFMVehicleSkillExecutor* SkillExecutor; // 0x60(0x8)


	// Object: Function DFMVehicle.DFMVehicleSkillInstance.OnRep_SkillStatus
	// Flags: [Final|Native|Protected]
	// Offset: 0xf8705e4
	// Params: [ Num(1) Size(0x1) ]
	void OnRep_SkillStatus(EDFMVehicleSkillStatus OldSkillStatus);

	// Object: Function DFMVehicle.DFMVehicleSkillInstance.OnRep_bIsDisable
	// Flags: [Final|Native|Protected]
	// Offset: 0x140b2e50
	// Params: [ Num(0) Size(0x0) ]
	void OnRep_bIsDisable();
	DEFINE_UE_CLASS_HELPERS(UDFMVehicleSkillInstance, "DFMVehicleSkillInstance")

};

// Object: Class DFMVehicle.DFMVehicleSkillProjectileView
// Size: 0x260 (Inherited: 0x240)
struct UDFMVehicleSkillProjectileView : USceneComponent
{
	struct FName TrailEffectId; // 0x240(0x8)
	float TrailSmokeProbability; // 0x248(0x4)
	uint8_t Pad_0x24C[0x4]; // 0x24C(0x4)
	struct UFXResourceContainerComponent* TrailEffect; // 0x250(0x8)
	uint8_t Pad_0x258[0x8]; // 0x258(0x8)
	DEFINE_UE_CLASS_HELPERS(UDFMVehicleSkillProjectileView, "DFMVehicleSkillProjectileView")

};

// Object: Class DFMVehicle.DFMVehicleSkillProjectile
// Size: 0x9B8 (Inherited: 0x970)
struct ADFMVehicleSkillProjectile : AGPWeaponBulletProjectile
{
	uint8_t Pad_0x970[0x18]; // 0x970(0x18)
	struct FDFMVehicleSkillProjectileMovementParam MovementParam; // 0x988(0xC)
	uint8_t Pad_0x994[0x4]; // 0x994(0x4)
	struct TArray<struct AActor*> IgnoredActors; // 0x998(0x10)
	struct TArray<struct UPrimitiveComponent*> IgnoredComponents; // 0x9A8(0x10)
	DEFINE_UE_CLASS_HELPERS(ADFMVehicleSkillProjectile, "DFMVehicleSkillProjectile")

};

// Object: Class DFMVehicle.DFMVehicleSkillProjectileShrapnelGrenade
// Size: 0x9C8 (Inherited: 0x9B8)
struct ADFMVehicleSkillProjectileShrapnelGrenade : ADFMVehicleSkillProjectile
{
	struct FName ExplosionEffectId; // 0x9B8(0x8)
	int64_t ExplodeAttackerValueId; // 0x9C0(0x8)
	DEFINE_UE_CLASS_HELPERS(ADFMVehicleSkillProjectileShrapnelGrenade, "DFMVehicleSkillProjectileShrapnelGrenade")

};

// Object: Class DFMVehicle.DFMVehicleSkillProjectileSmokeGrenade
// Size: 0x9D0 (Inherited: 0x9B8)
struct ADFMVehicleSkillProjectileSmokeGrenade : ADFMVehicleSkillProjectile
{
	struct FName SmokeEffectID; // 0x9B8(0x8)
	uint8_t bGenerateSmokeActor : 1; // 0x9C0(0x1), Mask(0x1)
	uint8_t BitPad_0x9C0_1 : 7; // 0x9C0(0x1)
	uint8_t Pad_0x9C1[0x3]; // 0x9C1(0x3)
	int32_t SmokeId; // 0x9C4(0x4)
	struct AGPDeformableSmokeEmitActor* SmokeActorBP; // 0x9C8(0x8)
	DEFINE_UE_CLASS_HELPERS(ADFMVehicleSkillProjectileSmokeGrenade, "DFMVehicleSkillProjectileSmokeGrenade")

};

// Object: Class DFMVehicle.DFMVehicleSkinImplement
// Size: 0x120 (Inherited: 0x28)
struct UDFMVehicleSkinImplement : UObject
{
	uint8_t Pad_0x28[0xA8]; // 0x28(0xA8)
	struct TMap<struct FSoftObjectPath, struct UStaticMesh*> BrokenModelCacheMap; // 0xD0(0x50)
	DEFINE_UE_CLASS_HELPERS(UDFMVehicleSkinImplement, "DFMVehicleSkinImplement")

};

// Object: Class DFMVehicle.DFMVehicleSpawnControllableActorSkillExecutor
// Size: 0x110 (Inherited: 0x90)
struct UDFMVehicleSpawnControllableActorSkillExecutor : UDFMVehicleSkillExecutor
{
	uint8_t Pad_0x90[0x70]; // 0x90(0x70)
	struct AGPControllableActor* CreatedActor; // 0x100(0x8)
	uint8_t Pad_0x108[0x8]; // 0x108(0x8)
	DEFINE_UE_CLASS_HELPERS(UDFMVehicleSpawnControllableActorSkillExecutor, "DFMVehicleSpawnControllableActorSkillExecutor")

};

// Object: Class DFMVehicle.DFMVehicleStateControllComponent
// Size: 0x168 (Inherited: 0xF8)
struct UDFMVehicleStateControllComponent : UActorComponent
{
	uint8_t Pad_0xF8[0x8]; // 0xF8(0x8)
	struct TArray<struct UPrimitiveComponent*> AllCollisions; // 0x100(0x10)
	uint8_t Pad_0x110[0x10]; // 0x110(0x10)
	struct TArray<struct UMeshComponent*> AllMeshes; // 0x120(0x10)
	struct TArray<struct UActorComponent*> AllComponents; // 0x130(0x10)
	uint8_t Pad_0x140[0x28]; // 0x140(0x28)
	DEFINE_UE_CLASS_HELPERS(UDFMVehicleStateControllComponent, "DFMVehicleStateControllComponent")

};

// Object: Class DFMVehicle.DFMVehicleSupplyStation
// Size: 0x498 (Inherited: 0x3D0)
struct ADFMVehicleSupplyStation : APawn
{
	uint8_t Pad_0x3D0[0x20]; // 0x3D0(0x20)
	float CdTime; // 0x3F0(0x4)
	float MaxSupplyTime; // 0x3F4(0x4)
	uint8_t Pad_0x3F8[0x20]; // 0x3F8(0x20)
	struct UStaticMeshComponent* MeshRoot; // 0x418(0x8)
	struct TArray<struct FVehicleSupplyInfoUI> SupplyInfosUI; // 0x420(0x10)
	struct TMap<struct ADFMVehicleBase*, float> VehicleSupplyTimeMap; // 0x430(0x50)
	uint8_t Pad_0x480[0x8]; // 0x480(0x8)
	EInteractorMarkerType ChildMarkerType; // 0x488(0x1)
	uint8_t Pad_0x489[0x3]; // 0x489(0x3)
	struct FVector WorldLocationOffset; // 0x48C(0xC)


	// Object: Function DFMVehicle.DFMVehicleSupplyStation.OnVehicleAmmoSupplyEnd
	// Flags: [Final|Native|Public]
	// Offset: 0x140b34fc
	// Params: [ Num(2) Size(0x10) ]
	void OnVehicleAmmoSupplyEnd(struct AGPVehicleBase* SupplyVehicle, struct AActor* AmmoSupplyStation);

	// Object: Function DFMVehicle.DFMVehicleSupplyStation.OnRep_SupplyInfosUI
	// Flags: [Final|Native|Public]
	// Offset: 0x10abec74
	// Params: [ Num(0) Size(0x0) ]
	void OnRep_SupplyInfosUI();

	// Object: Function DFMVehicle.DFMVehicleSupplyStation.OnEndOverlap
	// Flags: [Final|Native|Public]
	// Offset: 0x140b3420
	// Params: [ Num(2) Size(0x10) ]
	void OnEndOverlap(struct AActor* OverlappedActor, struct AActor* OtherActor);

	// Object: Function DFMVehicle.DFMVehicleSupplyStation.OnBeginOverlap
	// Flags: [Final|Native|Public]
	// Offset: 0x140b3344
	// Params: [ Num(2) Size(0x10) ]
	void OnBeginOverlap(struct AActor* OverlappedActor, struct AActor* OtherActor);
	DEFINE_UE_CLASS_HELPERS(ADFMVehicleSupplyStation, "DFMVehicleSupplyStation")

};

// Object: Class DFMVehicle.DFMVehicleDataTableManager
// Size: 0x40 (Inherited: 0x30)
struct UDFMVehicleDataTableManager : UDataTableSystemManagerBase
{
	uint8_t Pad_0x30[0x10]; // 0x30(0x10)
	DEFINE_UE_CLASS_HELPERS(UDFMVehicleDataTableManager, "DFMVehicleDataTableManager")

};

// Object: Class DFMVehicle.DFMVehicleHUDAssetDataTableManager
// Size: 0x40 (Inherited: 0x30)
struct UDFMVehicleHUDAssetDataTableManager : UDataTableSystemManagerBase
{
	uint8_t Pad_0x30[0x10]; // 0x30(0x10)
	DEFINE_UE_CLASS_HELPERS(UDFMVehicleHUDAssetDataTableManager, "DFMVehicleHUDAssetDataTableManager")

};

// Object: Class DFMVehicle.DFMVehicleHUDDataTableManager
// Size: 0x40 (Inherited: 0x30)
struct UDFMVehicleHUDDataTableManager : UDataTableSystemManagerBase
{
	uint8_t Pad_0x30[0x10]; // 0x30(0x10)
	DEFINE_UE_CLASS_HELPERS(UDFMVehicleHUDDataTableManager, "DFMVehicleHUDDataTableManager")

};

// Object: Class DFMVehicle.DFMVehicleAudioDataTableManager
// Size: 0x40 (Inherited: 0x30)
struct UDFMVehicleAudioDataTableManager : UDataTableSystemManagerBase
{
	uint8_t Pad_0x30[0x10]; // 0x30(0x10)
	DEFINE_UE_CLASS_HELPERS(UDFMVehicleAudioDataTableManager, "DFMVehicleAudioDataTableManager")

};

// Object: Class DFMVehicle.DFMVehicleAnimationDataTableManager
// Size: 0x40 (Inherited: 0x30)
struct UDFMVehicleAnimationDataTableManager : UDataTableSystemManagerBase
{
	uint8_t Pad_0x30[0x10]; // 0x30(0x10)
	DEFINE_UE_CLASS_HELPERS(UDFMVehicleAnimationDataTableManager, "DFMVehicleAnimationDataTableManager")

};

// Object: Class DFMVehicle.DFMVehicleDataConfigDataTableManager
// Size: 0x40 (Inherited: 0x30)
struct UDFMVehicleDataConfigDataTableManager : UDataTableSystemManagerBase
{
	uint8_t Pad_0x30[0x10]; // 0x30(0x10)
	DEFINE_UE_CLASS_HELPERS(UDFMVehicleDataConfigDataTableManager, "DFMVehicleDataConfigDataTableManager")

};

// Object: Class DFMVehicle.DFMVehicleEffectDataTableManager
// Size: 0x40 (Inherited: 0x30)
struct UDFMVehicleEffectDataTableManager : UDataTableSystemManagerBase
{
	uint8_t Pad_0x30[0x10]; // 0x30(0x10)
	DEFINE_UE_CLASS_HELPERS(UDFMVehicleEffectDataTableManager, "DFMVehicleEffectDataTableManager")

};

// Object: Class DFMVehicle.DFMVehicleSkillConfigDataTableManager
// Size: 0x40 (Inherited: 0x30)
struct UDFMVehicleSkillConfigDataTableManager : UDataTableSystemManagerBase
{
	uint8_t Pad_0x30[0x10]; // 0x30(0x10)
	DEFINE_UE_CLASS_HELPERS(UDFMVehicleSkillConfigDataTableManager, "DFMVehicleSkillConfigDataTableManager")

};

// Object: Class DFMVehicle.DFMVehicleSkillDataTableManager
// Size: 0x90 (Inherited: 0x30)
struct UDFMVehicleSkillDataTableManager : UDataTableSystemManagerBase
{
	uint8_t Pad_0x30[0x10]; // 0x30(0x10)
	struct TMap<int32_t, struct FVehicleSkillDataTableRow> ModifiedVehicleSkillDataTableRowMap; // 0x40(0x50)
	DEFINE_UE_CLASS_HELPERS(UDFMVehicleSkillDataTableManager, "DFMVehicleSkillDataTableManager")

};

// Object: Class DFMVehicle.DFMVehicleInputRedirectionDataTableManager
// Size: 0x40 (Inherited: 0x30)
struct UDFMVehicleInputRedirectionDataTableManager : UDataTableSystemManagerBase
{
	uint8_t Pad_0x30[0x10]; // 0x30(0x10)
	DEFINE_UE_CLASS_HELPERS(UDFMVehicleInputRedirectionDataTableManager, "DFMVehicleInputRedirectionDataTableManager")

};

// Object: Class DFMVehicle.DFMVehiclePhysicsDataTableManager
// Size: 0x40 (Inherited: 0x30)
struct UDFMVehiclePhysicsDataTableManager : UDataTableSystemManagerBase
{
	uint8_t Pad_0x30[0x10]; // 0x30(0x10)
	DEFINE_UE_CLASS_HELPERS(UDFMVehiclePhysicsDataTableManager, "DFMVehiclePhysicsDataTableManager")

};

// Object: Class DFMVehicle.DFMVehicleKeyTipsDataTableManager
// Size: 0x40 (Inherited: 0x30)
struct UDFMVehicleKeyTipsDataTableManager : UDataTableSystemManagerBase
{
	uint8_t Pad_0x30[0x10]; // 0x30(0x10)
	DEFINE_UE_CLASS_HELPERS(UDFMVehicleKeyTipsDataTableManager, "DFMVehicleKeyTipsDataTableManager")

};

// Object: Class DFMVehicle.DFMVehicleCameraDataTableManager
// Size: 0x40 (Inherited: 0x30)
struct UDFMVehicleCameraDataTableManager : UDataTableSystemManagerBase
{
	uint8_t Pad_0x30[0x10]; // 0x30(0x10)
	DEFINE_UE_CLASS_HELPERS(UDFMVehicleCameraDataTableManager, "DFMVehicleCameraDataTableManager")

};

// Object: Class DFMVehicle.DFMVehicleWeaponDataTableManager
// Size: 0x40 (Inherited: 0x30)
struct UDFMVehicleWeaponDataTableManager : UDataTableSystemManagerBase
{
	uint8_t Pad_0x30[0x10]; // 0x30(0x10)
	DEFINE_UE_CLASS_HELPERS(UDFMVehicleWeaponDataTableManager, "DFMVehicleWeaponDataTableManager")

};

// Object: Class DFMVehicle.DFMWheeledVehicle4WDataTableManager
// Size: 0x40 (Inherited: 0x30)
struct UDFMWheeledVehicle4WDataTableManager : UDataTableSystemManagerBase
{
	uint8_t Pad_0x30[0x10]; // 0x30(0x10)
	DEFINE_UE_CLASS_HELPERS(UDFMWheeledVehicle4WDataTableManager, "DFMWheeledVehicle4WDataTableManager")

};

// Object: Class DFMVehicle.DFMWheeledVehicleNWDataTableManager
// Size: 0x40 (Inherited: 0x30)
struct UDFMWheeledVehicleNWDataTableManager : UDataTableSystemManagerBase
{
	uint8_t Pad_0x30[0x10]; // 0x30(0x10)
	DEFINE_UE_CLASS_HELPERS(UDFMWheeledVehicleNWDataTableManager, "DFMWheeledVehicleNWDataTableManager")

};

// Object: Class DFMVehicle.DFMTankDataTableManager
// Size: 0x40 (Inherited: 0x30)
struct UDFMTankDataTableManager : UDataTableSystemManagerBase
{
	uint8_t Pad_0x30[0x10]; // 0x30(0x10)
	DEFINE_UE_CLASS_HELPERS(UDFMTankDataTableManager, "DFMTankDataTableManager")

};

// Object: Class DFMVehicle.DFMVehicleWaterInteractionDataTableManager
// Size: 0x40 (Inherited: 0x30)
struct UDFMVehicleWaterInteractionDataTableManager : UDataTableSystemManagerBase
{
	uint8_t Pad_0x30[0x10]; // 0x30(0x10)
	DEFINE_UE_CLASS_HELPERS(UDFMVehicleWaterInteractionDataTableManager, "DFMVehicleWaterInteractionDataTableManager")

};

// Object: Class DFMVehicle.DFMVehicleInteractorDataTableManager
// Size: 0x40 (Inherited: 0x30)
struct UDFMVehicleInteractorDataTableManager : UDataTableSystemManagerBase
{
	uint8_t Pad_0x30[0x10]; // 0x30(0x10)
	DEFINE_UE_CLASS_HELPERS(UDFMVehicleInteractorDataTableManager, "DFMVehicleInteractorDataTableManager")

};

// Object: Class DFMVehicle.DFMVehiclePhysicsReplicationDataTableManager
// Size: 0x40 (Inherited: 0x30)
struct UDFMVehiclePhysicsReplicationDataTableManager : UDataTableSystemManagerBase
{
	uint8_t Pad_0x30[0x10]; // 0x30(0x10)
	DEFINE_UE_CLASS_HELPERS(UDFMVehiclePhysicsReplicationDataTableManager, "DFMVehiclePhysicsReplicationDataTableManager")

};

// Object: Class DFMVehicle.DFMVehiclePhysicalEffectDataTableManager
// Size: 0x40 (Inherited: 0x30)
struct UDFMVehiclePhysicalEffectDataTableManager : UDataTableSystemManagerBase
{
	uint8_t Pad_0x30[0x10]; // 0x30(0x10)
	DEFINE_UE_CLASS_HELPERS(UDFMVehiclePhysicalEffectDataTableManager, "DFMVehiclePhysicalEffectDataTableManager")

};

// Object: Class DFMVehicle.DFMVehicleSkinDataConfigTableManager
// Size: 0x40 (Inherited: 0x30)
struct UDFMVehicleSkinDataConfigTableManager : UDataTableSystemManagerBase
{
	uint8_t Pad_0x30[0x10]; // 0x30(0x10)
	DEFINE_UE_CLASS_HELPERS(UDFMVehicleSkinDataConfigTableManager, "DFMVehicleSkinDataConfigTableManager")

};

// Object: Class DFMVehicle.DFMVehicleSkinAppearanceDataTableManager
// Size: 0x40 (Inherited: 0x30)
struct UDFMVehicleSkinAppearanceDataTableManager : UDataTableSystemManagerBase
{
	uint8_t Pad_0x30[0x10]; // 0x30(0x10)
	DEFINE_UE_CLASS_HELPERS(UDFMVehicleSkinAppearanceDataTableManager, "DFMVehicleSkinAppearanceDataTableManager")

};

// Object: Class DFMVehicle.DFMVehicleExpDataTableManager
// Size: 0x40 (Inherited: 0x30)
struct UDFMVehicleExpDataTableManager : UDataTableSystemManagerBase
{
	uint8_t Pad_0x30[0x10]; // 0x30(0x10)
	DEFINE_UE_CLASS_HELPERS(UDFMVehicleExpDataTableManager, "DFMVehicleExpDataTableManager")

};

// Object: Class DFMVehicle.DFMVehicleHealthDataTableManager
// Size: 0x40 (Inherited: 0x30)
struct UDFMVehicleHealthDataTableManager : UDataTableSystemManagerBase
{
	uint8_t Pad_0x30[0x10]; // 0x30(0x10)
	DEFINE_UE_CLASS_HELPERS(UDFMVehicleHealthDataTableManager, "DFMVehicleHealthDataTableManager")

};

// Object: Class DFMVehicle.DFMVehicleConsoleVariableDataTableManager
// Size: 0x40 (Inherited: 0x30)
struct UDFMVehicleConsoleVariableDataTableManager : UDataTableSystemManagerBase
{
	uint8_t Pad_0x30[0x10]; // 0x30(0x10)
	DEFINE_UE_CLASS_HELPERS(UDFMVehicleConsoleVariableDataTableManager, "DFMVehicleConsoleVariableDataTableManager")

};

// Object: Class DFMVehicle.VehicleMixedGroupDefineTableManager
// Size: 0x40 (Inherited: 0x30)
struct UVehicleMixedGroupDefineTableManager : UDataTableSystemManagerBase
{
	uint8_t Pad_0x30[0x10]; // 0x30(0x10)
	DEFINE_UE_CLASS_HELPERS(UVehicleMixedGroupDefineTableManager, "VehicleMixedGroupDefineTableManager")

};

// Object: Class DFMVehicle.DFMVehicleTankTrackPartInstance
// Size: 0x58 (Inherited: 0x50)
struct UDFMVehicleTankTrackPartInstance : UDFMVehicleBodyPartInstance
{
	int32_t TrackIndex; // 0x50(0x4)
	float TrackDebuffRatio; // 0x54(0x4)
	DEFINE_UE_CLASS_HELPERS(UDFMVehicleTankTrackPartInstance, "DFMVehicleTankTrackPartInstance")

};

// Object: Class DFMVehicle.DFMVehicleTankTrackPartExecutor
// Size: 0xB8 (Inherited: 0xB8)
struct UDFMVehicleTankTrackPartExecutor : UDFMVehicleBodyPartExecutor
{	DEFINE_UE_CLASS_HELPERS(UDFMVehicleTankTrackPartExecutor, "DFMVehicleTankTrackPartExecutor")

};

// Object: Class DFMVehicle.DFMVehicleThermalImagingPassiveSkillExecutor
// Size: 0x90 (Inherited: 0x90)
struct UDFMVehicleThermalImagingPassiveSkillExecutor : UDFMVehiclePassiveSkillExecutor
{	DEFINE_UE_CLASS_HELPERS(UDFMVehicleThermalImagingPassiveSkillExecutor, "DFMVehicleThermalImagingPassiveSkillExecutor")

};

// Object: Class DFMVehicle.DFMVehicleThermalSmokeSkillExecutor
// Size: 0xC0 (Inherited: 0x90)
struct UDFMVehicleThermalSmokeSkillExecutor : UDFMVehicleSkillExecutor
{
	uint8_t Pad_0x90[0x28]; // 0x90(0x28)
	struct ADFMVehicleThermalSmoke* ThermalSmoke; // 0xB8(0x8)
	DEFINE_UE_CLASS_HELPERS(UDFMVehicleThermalSmokeSkillExecutor, "DFMVehicleThermalSmokeSkillExecutor")

};

// Object: Class DFMVehicle.DFMVehicleTrackSplineComponent
// Size: 0x740 (Inherited: 0x670)
struct UDFMVehicleTrackSplineComponent : USplineComponent
{
	uint8_t bIsUsedForPathFollow : 1; // 0x664(0x1), Mask(0x1)
	uint8_t IsDebugMode : 1; // 0x665(0x1), Mask(0x1)
	struct FName InstancedMeshName; // 0x668(0x8)
	struct FName PreSplineTrackName; // 0x670(0x8)
	int32_t StartSyncIndex; // 0x678(0x4)
	float WheelRadius; // 0x67C(0x4)
	struct TArray<struct FName> SocketNames; // 0x680(0x10)
	struct TArray<int32_t> SocketIndexs; // 0x690(0x10)
	float TrackSize; // 0x6A0(0x4)
	struct TArray<struct FVector> TrackOffsetVectors; // 0x6A8(0x10)
	uint8_t IsLastTrackSpline : 1; // 0x6B8(0x1), Mask(0x1)
	uint8_t IsFollowBone : 1; // 0x6B9(0x1), Mask(0x1)
	struct FName SkeletalMeshName; // 0x6BC(0x8)
	uint8_t BitPad_0x6C4_4 : 4; // 0x6C4(0x1)
	uint8_t Pad_0x6C5[0x7B]; // 0x6C5(0x7B)
	DEFINE_UE_CLASS_HELPERS(UDFMVehicleTrackSplineComponent, "DFMVehicleTrackSplineComponent")

};

// Object: Class DFMVehicle.DFMVehicleWaterMaskComponent
// Size: 0x5C0 (Inherited: 0x580)
struct UDFMVehicleWaterMaskComponent : UPrimitiveComponent
{
	struct FVector MaskExtent; // 0x578(0xC)
	uint8_t Pad_0x58C[0x14]; // 0x58C(0x14)
	struct ADFMVehicleBase* OwnerVehicle; // 0x5A0(0x8)
	uint8_t Pad_0x5A8[0x18]; // 0x5A8(0x18)
	DEFINE_UE_CLASS_HELPERS(UDFMVehicleWaterMaskComponent, "DFMVehicleWaterMaskComponent")

};

// Object: Class DFMVehicle.DFMVehicleWeaponImplement
// Size: 0x90 (Inherited: 0x30)
struct UDFMVehicleWeaponImplement : UGPVehicleWeaponImplement
{
	uint8_t Pad_0x30[0x60]; // 0x30(0x60)
	DEFINE_UE_CLASS_HELPERS(UDFMVehicleWeaponImplement, "DFMVehicleWeaponImplement")

};

// Object: Class DFMVehicle.DFMVehicleWeaponPartInstance
// Size: 0x60 (Inherited: 0x50)
struct UDFMVehicleWeaponPartInstance : UDFMVehicleBodyPartInstance
{
	struct FName WeaponSeatName; // 0x50(0x8)
	float WeaponRoateDebuffRatio; // 0x58(0x4)
	uint8_t Pad_0x5C[0x4]; // 0x5C(0x4)
	DEFINE_UE_CLASS_HELPERS(UDFMVehicleWeaponPartInstance, "DFMVehicleWeaponPartInstance")

};

// Object: Class DFMVehicle.UDFMVehicleWeaponPartExecutor
// Size: 0xB8 (Inherited: 0xB8)
struct UUDFMVehicleWeaponPartExecutor : UDFMVehicleBodyPartExecutor
{	DEFINE_UE_CLASS_HELPERS(UUDFMVehicleWeaponPartExecutor, "UDFMVehicleWeaponPartExecutor")

};

// Object: Class DFMVehicle.DFMWheeledInstancedStaticMeshComponent
// Size: 0xAB0 (Inherited: 0xA30)
struct UDFMWheeledInstancedStaticMeshComponent : UInstancedStaticMeshComponent
{
	struct ADFMWheeledVehicle* OwnerVehicle; // 0xA28(0x8)
	uint8_t Pad_0xA38[0x40]; // 0xA38(0x40)
	uint8_t IsNeedTickWithoutPhysics : 1; // 0xA78(0x1), Mask(0x1)
	uint8_t BitPad_0xA78_1 : 7; // 0xA78(0x1)
	uint8_t Pad_0xA79[0x7]; // 0xA79(0x7)
	struct TArray<struct FTransform> InitWheelTransforms; // 0xA80(0x10)
	uint8_t Pad_0xA90[0x20]; // 0xA90(0x20)
	DEFINE_UE_CLASS_HELPERS(UDFMWheeledInstancedStaticMeshComponent, "DFMWheeledInstancedStaticMeshComponent")

};

// Object: Class DFMVehicle.DFMWheeledVehicleMovementImplement
// Size: 0x48 (Inherited: 0x28)
struct UDFMWheeledVehicleMovementImplement : UDFMVehicleMovementImplement
{
	uint8_t Pad_0x28[0x20]; // 0x28(0x20)
	DEFINE_UE_CLASS_HELPERS(UDFMWheeledVehicleMovementImplement, "DFMWheeledVehicleMovementImplement")

};

// Object: Class DFMVehicle.DFMWheeledVehicleNW
// Size: 0x1D40 (Inherited: 0x1D40)
struct ADFMWheeledVehicleNW : ADFMWheeledVehicle
{	DEFINE_UE_CLASS_HELPERS(ADFMWheeledVehicleNW, "DFMWheeledVehicleNW")

};

// Object: Class DFMVehicle.DFMWheeledVehicleSpringArmComponent
// Size: 0x2D0 (Inherited: 0x2D0)
struct UDFMWheeledVehicleSpringArmComponent : UGPVehicleSpringArmComponent
{	DEFINE_UE_CLASS_HELPERS(UDFMWheeledVehicleSpringArmComponent, "DFMWheeledVehicleSpringArmComponent")

};

// Object: Class DFMVehicle.DFTransformAnimatedTarget
// Size: 0x28 (Inherited: 0x28)
struct IDFTransformAnimatedTarget : IInterface
{	DEFINE_UE_CLASS_HELPERS(IDFTransformAnimatedTarget, "DFTransformAnimatedTarget")

};

// Object: Class DFMVehicle.DFTransformAnimationPlayer
// Size: 0x150 (Inherited: 0x28)
struct UDFTransformAnimationPlayer : UObject
{
	struct FMulticastInlineDelegate OnAnimationStarted; // 0x28(0x10)
	struct FMulticastInlineDelegate OnAnimationStopped; // 0x38(0x10)
	struct FMulticastInlineDelegate OnAnimationPaused; // 0x48(0x10)
	struct FMulticastInlineDelegate OnAnimationFinished; // 0x58(0x10)
	struct FMulticastInlineDelegate OnAnimationLooped; // 0x68(0x10)
	struct FDFTransformAnimationData AnimationData; // 0x78(0x50)
	struct UDFTransformAnimationController* AnimationController; // 0xC8(0x8)
	struct FDFTransformAnimationPlaybackSetting DefaultPlaybackSetting; // 0xD0(0xC)
	struct FDFTransformAnimationPlaybackSetting ActivePlaybackSetting; // 0xDC(0xC)
	float PlayStartTime; // 0xE8(0x4)
	float PlayEndTime; // 0xEC(0x4)
	EDFTransformAnimationStatus PlaybackStatus; // 0xF0(0x1)
	uint8_t Pad_0xF1[0x3]; // 0xF1(0x3)
	float CurrentTime; // 0xF4(0x4)
	float AnimationDuration; // 0xF8(0x4)
	float PlaybackTimer; // 0xFC(0x4)
	int32_t LoopCount; // 0x100(0x4)
	uint8_t Pad_0x104[0xC]; // 0x104(0xC)
	struct FTransform OriginalTransform; // 0x110(0x30)
	struct USceneComponent* AnimatedComponent; // 0x140(0x8)
	uint8_t Pad_0x148[0x8]; // 0x148(0x8)


	// Object: Function DFMVehicle.DFTransformAnimationPlayer.StopAnimation
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x140b8850
	// Params: [ Num(0) Size(0x0) ]
	void StopAnimation();

	// Object: Function DFMVehicle.DFTransformAnimationPlayer.SetPlayRate
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x140b87ac
	// Params: [ Num(1) Size(0x4) ]
	void SetPlayRate(float Rate);

	// Object: Function DFMVehicle.DFTransformAnimationPlayer.SetPlaybackDirection
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x140b8700
	// Params: [ Num(1) Size(0x1) ]
	void SetPlaybackDirection(uint8_t bInReverse);

	// Object: Function DFMVehicle.DFTransformAnimationPlayer.SetLooping
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x140b8654
	// Params: [ Num(1) Size(0x1) ]
	void SetLooping(uint8_t bLoop);

	// Object: Function DFMVehicle.DFTransformAnimationPlayer.ResumeAnimation
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x140b8640
	// Params: [ Num(0) Size(0x0) ]
	void ResumeAnimation();

	// Object: Function DFMVehicle.DFTransformAnimationPlayer.PlayAnimationReverse
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x140b862c
	// Params: [ Num(0) Size(0x0) ]
	void PlayAnimationReverse();

	// Object: Function DFMVehicle.DFTransformAnimationPlayer.PlayAnimation
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x140b8618
	// Params: [ Num(0) Size(0x0) ]
	void PlayAnimation();

	// Object: Function DFMVehicle.DFTransformAnimationPlayer.PauseAnimation
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x140b8604
	// Params: [ Num(0) Size(0x0) ]
	void PauseAnimation();

	// Object: DelegateFunction DFMVehicle.DFTransformAnimationPlayer.OnTransformAnimationStopped__DelegateSignature
	// Flags: [MulticastDelegate|Public|Delegate]
	// Offset: 0x101d2e88
	// Params: [ Num(0) Size(0x0) ]
	void OnTransformAnimationStopped__DelegateSignature();

	// Object: DelegateFunction DFMVehicle.DFTransformAnimationPlayer.OnTransformAnimationStarted__DelegateSignature
	// Flags: [MulticastDelegate|Public|Delegate]
	// Offset: 0x101d2e88
	// Params: [ Num(0) Size(0x0) ]
	void OnTransformAnimationStarted__DelegateSignature();

	// Object: DelegateFunction DFMVehicle.DFTransformAnimationPlayer.OnTransformAnimationPaused__DelegateSignature
	// Flags: [MulticastDelegate|Public|Delegate]
	// Offset: 0x101d2e88
	// Params: [ Num(0) Size(0x0) ]
	void OnTransformAnimationPaused__DelegateSignature();

	// Object: DelegateFunction DFMVehicle.DFTransformAnimationPlayer.OnTransformAnimationLooped__DelegateSignature
	// Flags: [MulticastDelegate|Public|Delegate]
	// Offset: 0x101d2e88
	// Params: [ Num(0) Size(0x0) ]
	void OnTransformAnimationLooped__DelegateSignature();

	// Object: DelegateFunction DFMVehicle.DFTransformAnimationPlayer.OnTransformAnimationFinished__DelegateSignature
	// Flags: [MulticastDelegate|Public|Delegate]
	// Offset: 0x101d2e88
	// Params: [ Num(0) Size(0x0) ]
	void OnTransformAnimationFinished__DelegateSignature();

	// Object: Function DFMVehicle.DFTransformAnimationPlayer.JumpToTime
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x140b8560
	// Params: [ Num(1) Size(0x4) ]
	void JumpToTime(float Time);

	// Object: Function DFMVehicle.DFTransformAnimationPlayer.IsStopped
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x140b853c
	// Params: [ Num(1) Size(0x1) ]
	uint8_t IsStopped();

	// Object: Function DFMVehicle.DFTransformAnimationPlayer.IsReversed
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x140b8520
	// Params: [ Num(1) Size(0x1) ]
	uint8_t IsReversed();

	// Object: Function DFMVehicle.DFTransformAnimationPlayer.IsPlaying
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x140b84fc
	// Params: [ Num(1) Size(0x1) ]
	uint8_t IsPlaying();

	// Object: Function DFMVehicle.DFTransformAnimationPlayer.IsPaused
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x140b84d8
	// Params: [ Num(1) Size(0x1) ]
	uint8_t IsPaused();

	// Object: Function DFMVehicle.DFTransformAnimationPlayer.IsLooping
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x140b84bc
	// Params: [ Num(1) Size(0x1) ]
	uint8_t IsLooping();

	// Object: Function DFMVehicle.DFTransformAnimationPlayer.GetPlayRate
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x140b84a0
	// Params: [ Num(1) Size(0x4) ]
	float GetPlayRate();

	// Object: Function DFMVehicle.DFTransformAnimationPlayer.GetPlaybackStatus
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x140b8484
	// Params: [ Num(1) Size(0x1) ]
	EDFTransformAnimationStatus GetPlaybackStatus();

	// Object: Function DFMVehicle.DFTransformAnimationPlayer.GetDuration
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x140b8468
	// Params: [ Num(1) Size(0x4) ]
	float GetDuration();

	// Object: Function DFMVehicle.DFTransformAnimationPlayer.GetCurrentTime
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x140b844c
	// Params: [ Num(1) Size(0x4) ]
	float GetCurrentTime();

	// Object: Function DFMVehicle.DFTransformAnimationPlayer.GetAnimationData
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x140b8428
	// Params: [ Num(1) Size(0x50) ]
	struct FDFTransformAnimationData GetAnimationData();

	// Object: Function DFMVehicle.DFTransformAnimationPlayer.GetAnimatedComponent
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x140b840c
	// Params: [ Num(1) Size(0x8) ]
	struct USceneComponent* GetAnimatedComponent();

	// Object: Function DFMVehicle.DFTransformAnimationPlayer.ChangePlaybackDirection
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x140b83f8
	// Params: [ Num(0) Size(0x0) ]
	void ChangePlaybackDirection();
	DEFINE_UE_CLASS_HELPERS(UDFTransformAnimationPlayer, "DFTransformAnimationPlayer")

};

// Object: Class DFMVehicle.DFVehicleAdvancedPhysicsComponent
// Size: 0x600 (Inherited: 0x138)
struct UDFVehicleAdvancedPhysicsComponent : UDFVehicleAdvancedPhysicsComponentBase
{
	float MinRollWhenRollover; // 0x138(0x4)
	float MinPitchWhenRollover; // 0x13C(0x4)
	struct FContactFrictionConfig ContactFrictionConfig; // 0x140(0x150)
	struct FVirtualTireForceConfig VirtualTireForceConfig; // 0x290(0x120)
	struct FStickToGroundConfig StickToGroundConfig; // 0x3B0(0x48)
	struct FDynamicTireFrictionConfig DynamicTireFrictionConfig; // 0x3F8(0x150)
	struct FIncreaseGravityConfig IncreaseGravityConfig; // 0x548(0x30)
	struct FAssistParkingConfig AssistParkingConfig; // 0x578(0x20)
	struct FAvoidWheelVehicleFlyConfig AvoidWheelVehicleFlyConfig; // 0x598(0x30)
	struct FLowSpeedAngularDampingConfig LowSpeedAngularDampingConfig; // 0x5C8(0x14)
	uint8_t Pad_0x5DC[0x24]; // 0x5DC(0x24)
	DEFINE_UE_CLASS_HELPERS(UDFVehicleAdvancedPhysicsComponent, "DFVehicleAdvancedPhysicsComponent")

};

// Object: Class DFMVehicle.DFVehicleDynamicMeshComponent
// Size: 0x8E0 (Inherited: 0x830)
struct UDFVehicleDynamicMeshComponent : UStaticMeshComponent
{
	uint8_t Pad_0x830[0x10]; // 0x830(0x10)
	struct FVehicleDynamicMeshCheckedBox CheckedBox; // 0x840(0x50)
	uint8_t bCanPushCharacter : 1; // 0x890(0x1), Mask(0x1)
	uint8_t BitPad_0x890_1 : 7; // 0x890(0x1)
	uint8_t Pad_0x891[0x3]; // 0x891(0x3)
	struct FVehicleDynamicMeshCheckCollisionSetting CheckCollisionSetting; // 0x894(0xC)
	struct UDFTransformAnimationPlayer* TransformAnimationPlayer; // 0x8A0(0x8)
	struct ADFMVehicleBase* OwnerVehicle; // 0x8A8(0x8)
	struct USkeletalMeshComponent* SkeletalMeshComponent; // 0x8B0(0x8)
	uint8_t Pad_0x8B8[0x28]; // 0x8B8(0x28)
	DEFINE_UE_CLASS_HELPERS(UDFVehicleDynamicMeshComponent, "DFVehicleDynamicMeshComponent")

};

// Object: Class DFMVehicle.DramaAreaVehicle
// Size: 0x500 (Inherited: 0x4F0)
struct ADramaAreaVehicle : ADramaArea
{
	struct TArray<struct FRaidVehicleDramaInfo> VehicleDifficulties; // 0x4F0(0x10)


	// Object: Function DFMVehicle.DramaAreaVehicle.SpawnVehicleAI
	// Flags: [Native|Event|Public|BlueprintCallable|BlueprintEvent]
	// Offset: 0x140bcac4
	// Params: [ Num(0) Size(0x0) ]
	void SpawnVehicleAI();

	// Object: Function DFMVehicle.DramaAreaVehicle.ShouldSpawnVehicleOnCurrentDifficulty
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x140bca8c
	// Params: [ Num(1) Size(0x1) ]
	uint8_t ShouldSpawnVehicleOnCurrentDifficulty();

	// Object: Function DFMVehicle.DramaAreaVehicle.GetOverridePassengers
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x140bca0c
	// Params: [ Num(1) Size(0x50) ]
	struct TMap<struct FName, struct FName> GetOverridePassengers();

	// Object: Function DFMVehicle.DramaAreaVehicle.GetExpectedVehiclePath
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x140bc9d8
	// Params: [ Num(1) Size(0x8) ]
	struct AAIPatrolPath* GetExpectedVehiclePath();

	// Object: Function DFMVehicle.DramaAreaVehicle.GetExpectedVehicleHealth
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x140bc9a4
	// Params: [ Num(1) Size(0x4) ]
	float GetExpectedVehicleHealth();

	// Object: Function DFMVehicle.DramaAreaVehicle.GetExpectedOverrideExplodeDamage
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x140bc970
	// Params: [ Num(1) Size(0x4) ]
	float GetExpectedOverrideExplodeDamage();
	DEFINE_UE_CLASS_HELPERS(ADramaAreaVehicle, "DramaAreaVehicle")

};

// Object: Class DFMVehicle.InteractorVehicleExecutor
// Size: 0xF0 (Inherited: 0xE0)
struct UInteractorVehicleExecutor : UInteractExecutor
{
	struct FGameplayTag DriveCarTag; // 0xE0(0x8)
	struct FGameplayTag SitInCarTag; // 0xE8(0x8)


	// Object: Function DFMVehicle.InteractorVehicleExecutor.IsSeatFull
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x140bcba4
	// Params: [ Num(3) Size(0xD) ]
	uint8_t IsSeatFull(struct AActor* Interactor, int32_t Index);

	// Object: Function DFMVehicle.InteractorVehicleExecutor.IsLocalPlayerOnVehicle
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x140bcaf4
	// Params: [ Num(2) Size(0x9) ]
	uint8_t IsLocalPlayerOnVehicle(struct AActor* Interactor);
	DEFINE_UE_CLASS_HELPERS(UInteractorVehicleExecutor, "InteractorVehicleExecutor")

};

// Object: Class DFMVehicle.LaserPointerLogic
// Size: 0x1E8 (Inherited: 0xF8)
struct ULaserPointerLogic : UActorComponent
{
	EStingerMissileLockingState LaserPointerPerformState; // 0xF8(0x1)
	EStingerMissileLockingState ClientLaserPointerLockingState; // 0xF9(0x1)
	uint8_t Pad_0xFA[0x6]; // 0xFA(0x6)
	struct TArray<struct TWeakObjectPtr<struct AGPCharacter>> LaserPointerLockers; // 0x100(0x10)
	struct TArray<struct FVehicleLaserPointerLockersInfo> LaserPointerLockersInfo; // 0x110(0x10)
	struct TWeakObjectPtr<struct ADFMVehicleBase> VehicleOwner; // 0x120(0x8)
	struct TArray<struct FVehicleLockInfo> LockInfos; // 0x128(0x10)
	struct TArray<struct FVehicleLockInfoWithSubType> LockInfosWithSubType; // 0x138(0x10)
	struct TMap<struct UObject*, struct FVehiclePointerInfo> PointerDatas; // 0x148(0x50)
	struct TMap<struct UObject*, struct FVehiclePointerInfo> PointerDatasWithSubType; // 0x198(0x50)


	// Object: Function DFMVehicle.LaserPointerLogic.RefreshLockingState
	// Flags: [Final|Native|Public]
	// Offset: 0x140bd7b0
	// Params: [ Num(0) Size(0x0) ]
	void RefreshLockingState();

	// Object: Function DFMVehicle.LaserPointerLogic.RefreshLockingParams
	// Flags: [Final|Native|Public]
	// Offset: 0x140bd79c
	// Params: [ Num(0) Size(0x0) ]
	void RefreshLockingParams();

	// Object: Function DFMVehicle.LaserPointerLogic.OnVehicleDead
	// Flags: [Final|Native|Public]
	// Offset: 0x140bd788
	// Params: [ Num(0) Size(0x0) ]
	void OnVehicleDead();

	// Object: Function DFMVehicle.LaserPointerLogic.OnRep_LaserPointerLockersInfo
	// Flags: [Final|Native|Public]
	// Offset: 0x140bd774
	// Params: [ Num(0) Size(0x0) ]
	void OnRep_LaserPointerLockersInfo();

	// Object: Function DFMVehicle.LaserPointerLogic.OnRep_LaserPointerLockers
	// Flags: [Final|Native|Public]
	// Offset: 0x140bd760
	// Params: [ Num(0) Size(0x0) ]
	void OnRep_LaserPointerLockers();

	// Object: Function DFMVehicle.LaserPointerLogic.NotifyStopLaserPointerLocking
	// Flags: [Final|Native|Public]
	// Offset: 0x140bd680
	// Params: [ Num(2) Size(0x9) ]
	void NotifyStopLaserPointerLocking(struct UObject* CasterCharacter, ELockerSubType LockerSubType);

	// Object: Function DFMVehicle.LaserPointerLogic.NotifyStartLaserPointerLocking
	// Flags: [Final|Native|Public]
	// Offset: 0x140bd4f0
	// Params: [ Num(5) Size(0x15) ]
	void NotifyStartLaserPointerLocking(struct UObject* CasterCharacter, float IncreaseSpeed, float DecreaseSpeed, float PersistentTime, ELockerSubType LockerSubType);

	// Object: Function DFMVehicle.LaserPointerLogic.NotifyLock
	// Flags: [Final|Native|Public]
	// Offset: 0x140bd44c
	// Params: [ Num(1) Size(0x8) ]
	void NotifyLock(struct UObject* CasterCharacter);

	// Object: Function DFMVehicle.LaserPointerLogic.MulticastTargetLockingStateInfo
	// Flags: [Net|NetReliableNative|Event|NetMulticast|Public]
	// Offset: 0x140bd364
	// Params: [ Num(2) Size(0x5) ]
	void MulticastTargetLockingStateInfo(int32_t CampId, EStingerMissileLockingState ServerLockingState);

	// Object: Function DFMVehicle.LaserPointerLogic.MulticastTargetLockingParamInfo
	// Flags: [Net|NetReliableNative|Event|NetMulticast|Public]
	// Offset: 0x140bd208
	// Params: [ Num(4) Size(0x10) ]
	void MulticastTargetLockingParamInfo(int32_t CampId, float IncreaseSpeed, float DecreaseSpeed, float PersistentTime);

	// Object: Function DFMVehicle.LaserPointerLogic.LockingTick
	// Flags: [Final|Native|Public]
	// Offset: 0x140bd164
	// Params: [ Num(1) Size(0x4) ]
	void LockingTick(float DeltaSeconds);

	// Object: Function DFMVehicle.LaserPointerLogic.GetStateForUINotice
	// Flags: [Final|Native|Public]
	// Offset: 0x140bd130
	// Params: [ Num(1) Size(0x1) ]
	EStingerMissileLockingState GetStateForUINotice();

	// Object: Function DFMVehicle.LaserPointerLogic.GetLockInfWithSubTypeByCaster
	// Flags: [Final|Native|Public]
	// Offset: 0x140bd034
	// Params: [ Num(3) Size(0x44) ]
	struct FVehicleLockInfo GetLockInfWithSubTypeByCaster(struct APawn* Caster, ELockerSubType InSubType);

	// Object: Function DFMVehicle.LaserPointerLogic.GetLockInfoWithSubType
	// Flags: [Final|Native|Public]
	// Offset: 0x140bcf38
	// Params: [ Num(3) Size(0x40) ]
	struct FVehicleLockInfo GetLockInfoWithSubType(int32_t CampId, ELockerSubType InSubType);

	// Object: Function DFMVehicle.LaserPointerLogic.GetLockInfoByCasterIncludeSubType
	// Flags: [Final|Native|Public]
	// Offset: 0x140bce78
	// Params: [ Num(2) Size(0x40) ]
	struct FVehicleLockInfo GetLockInfoByCasterIncludeSubType(struct APawn* Caster);

	// Object: Function DFMVehicle.LaserPointerLogic.GetLockInfoByCaster
	// Flags: [Final|Native|Public]
	// Offset: 0x140bcdb8
	// Params: [ Num(2) Size(0x40) ]
	struct FVehicleLockInfo GetLockInfoByCaster(struct APawn* Caster);

	// Object: Function DFMVehicle.LaserPointerLogic.GetLockInfo
	// Flags: [Final|Native|Public]
	// Offset: 0x140bccf8
	// Params: [ Num(2) Size(0x3C) ]
	struct FVehicleLockInfo GetLockInfo(int32_t CampId);

	// Object: Function DFMVehicle.LaserPointerLogic.GetAbilityLockerSystem
	// Flags: [Final|Native|Public]
	// Offset: 0x140bccc4
	// Params: [ Num(1) Size(0x8) ]
	struct UDFMAbilityLockerComponent* GetAbilityLockerSystem();

	// Object: Function DFMVehicle.LaserPointerLogic.Clear
	// Flags: [Final|Native|Public]
	// Offset: 0x140bccb0
	// Params: [ Num(0) Size(0x0) ]
	void Clear();
	DEFINE_UE_CLASS_HELPERS(ULaserPointerLogic, "LaserPointerLogic")

};

// Object: Class DFMVehicle.RaidBoatCollisionComponent
// Size: 0x650 (Inherited: 0x5B0)
struct URaidBoatCollisionComponent : UBoxComponent
{
	float HitCharacterCoolDownTime; // 0x5A4(0x4)
	float MinVelocityToHitCharacter; // 0x5A8(0x4)
	float VehicleVelocity; // 0x5AC(0x4)
	struct TArray<struct AGPCharacterBase*> LockedCharacters; // 0x5B0(0x10)
	uint8_t Pad_0x5CC[0x2C]; // 0x5CC(0x2C)
	struct TMap<struct ADFMCharacter*, float> HitCharacterMap; // 0x5F8(0x50)
	uint8_t Pad_0x648[0x8]; // 0x648(0x8)
	DEFINE_UE_CLASS_HELPERS(URaidBoatCollisionComponent, "RaidBoatCollisionComponent")

};

// Object: Class DFMVehicle.SOLTrainComponent
// Size: 0x1D0 (Inherited: 0xF8)
struct USOLTrainComponent : UActorComponent
{
	EDFMMapIconType TrainIconType; // 0xF8(0x1)
	uint8_t Pad_0xF9[0x3]; // 0xF9(0x3)
	float IconRangeSize; // 0xFC(0x4)
	float CheckBroadcastStopTickMaxTime; // 0x100(0x4)
	float CheckStopBroadcastFrequencyTime; // 0x104(0x4)
	struct ADFMTrain* DFMTrain; // 0x108(0x8)
	uint8_t bAlreadyBeginPlay : 1; // 0x110(0x1), Mask(0x1)
	uint8_t BitPad_0x110_1 : 7; // 0x110(0x1)
	uint8_t bNeedBroadcastStopStateWhenBeginPlay : 1; // 0x111(0x1), Mask(0x1)
	uint8_t BitPad_0x111_1 : 7; // 0x111(0x1)
	uint8_t Pad_0x112[0x2]; // 0x112(0x2)
	float StartCheckBroadcastTime; // 0x114(0x4)
	struct USOLEventMapIconViewController* IconController; // 0x118(0x8)
	uint8_t Pad_0x120[0x8]; // 0x120(0x8)
	uint8_t bUseCloseTickAfterLogic : 1; // 0x128(0x1), Mask(0x1)
	uint8_t BitPad_0x128_1 : 7; // 0x128(0x1)
	uint8_t Pad_0x129[0x3]; // 0x129(0x3)
	float CloseTickAfterTime; // 0x12C(0x4)
	struct USkeletalMeshComponent* TrainCarriage; // 0x130(0x8)
	struct UDFMTrainAnimInstance* TrainAnimInstance; // 0x138(0x8)
	struct TArray<struct FDFMTrainDoorConfig> TrainDoorConfigs; // 0x140(0x10)
	struct TMap<struct FString, struct UBoxComponent*> DoorCollisions; // 0x150(0x50)
	float DoorMoveTime; // 0x1A0(0x4)
	uint8_t DoorOpen : 1; // 0x1A4(0x1), Mask(0x1)
	uint8_t BitPad_0x1A4_1 : 7; // 0x1A4(0x1)
	uint8_t Pad_0x1A5[0x7]; // 0x1A5(0x7)
	float ApproachTime; // 0x1AC(0x4)
	struct UGPAudioEventAsset* ApproachAudio; // 0x1B0(0x8)
	uint8_t bEnableRunningAudioFollow : 1; // 0x1B8(0x1), Mask(0x1)
	uint8_t BitPad_0x1B8_1 : 7; // 0x1B8(0x1)
	uint8_t Pad_0x1B9[0x7]; // 0x1B9(0x7)
	struct ADFMTrainAudioProxy* RunningAudioProxy; // 0x1C0(0x8)
	uint8_t Pad_0x1C8[0x8]; // 0x1C8(0x8)


	// Object: Function DFMVehicle.SOLTrainComponent.ToggleLocomotiveSound
	// Flags: [Final|Native|Protected]
	// Offset: 0x140bde80
	// Params: [ Num(1) Size(0x1) ]
	void ToggleLocomotiveSound(uint8_t bToggle);

	// Object: Function DFMVehicle.SOLTrainComponent.SetBroadcastStopStateWhenBeginPlay
	// Flags: [Final|Native|Public]
	// Offset: 0x140bddd4
	// Params: [ Num(1) Size(0x1) ]
	void SetBroadcastStopStateWhenBeginPlay(uint8_t bSet);

	// Object: Function DFMVehicle.SOLTrainComponent.ServerToggleDoorOpen
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x140bdd28
	// Params: [ Num(1) Size(0x1) ]
	void ServerToggleDoorOpen(uint8_t InDoorOpen);

	// Object: Function DFMVehicle.SOLTrainComponent.RefreshSkeletonMeshCollision
	// Flags: [Final|Native|Protected]
	// Offset: 0x140bdd14
	// Params: [ Num(0) Size(0x0) ]
	void RefreshSkeletonMeshCollision();

	// Object: Function DFMVehicle.SOLTrainComponent.PlayDoorAudio
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(1) Size(0x1) ]
	void PlayDoorAudio(uint8_t Open);

	// Object: Function DFMVehicle.SOLTrainComponent.OpenSkeletonMeshTick
	// Flags: [Final|Native|Protected]
	// Offset: 0x140bdc68
	// Params: [ Num(1) Size(0x1) ]
	void OpenSkeletonMeshTick(uint8_t bEnable);

	// Object: Function DFMVehicle.SOLTrainComponent.OnTrainStop
	// Flags: [Final|Native|Public]
	// Offset: 0x140bdbc4
	// Params: [ Num(1) Size(0x8) ]
	void OnTrainStop(struct ADFMTrain* InTrain);

	// Object: Function DFMVehicle.SOLTrainComponent.OnTrainStateChange
	// Flags: [Final|Native|Protected]
	// Offset: 0x140bdb20
	// Params: [ Num(1) Size(0x1) ]
	void OnTrainStateChange(EDFMTrainState TrainState);

	// Object: Function DFMVehicle.SOLTrainComponent.OnTrainMove
	// Flags: [Final|Native|Public]
	// Offset: 0x140bda7c
	// Params: [ Num(1) Size(0x8) ]
	void OnTrainMove(struct ADFMTrain* InTrain);

	// Object: Function DFMVehicle.SOLTrainComponent.OnServerTrainStateChange
	// Flags: [Final|Native|Protected]
	// Offset: 0x140bd9d8
	// Params: [ Num(1) Size(0x1) ]
	void OnServerTrainStateChange(EDFMTrainState TrainState);

	// Object: Function DFMVehicle.SOLTrainComponent.OnRep_DoorOpen
	// Flags: [Final|Native|Public]
	// Offset: 0x140bd9c4
	// Params: [ Num(0) Size(0x0) ]
	void OnRep_DoorOpen();

	// Object: Function DFMVehicle.SOLTrainComponent.OnLoadedAllControllerClass
	// Flags: [Final|Native|Protected]
	// Offset: 0x140bd9b0
	// Params: [ Num(0) Size(0x0) ]
	void OnLoadedAllControllerClass();

	// Object: Function DFMVehicle.SOLTrainComponent.InitAllDoors
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x140bd99c
	// Params: [ Num(0) Size(0x0) ]
	void InitAllDoors();

	// Object: Function DFMVehicle.SOLTrainComponent.EnableCollisionsOnStopUseTag
	// Flags: [Final|Native|Protected|Const]
	// Offset: 0x140bd988
	// Params: [ Num(0) Size(0x0) ]
	void EnableCollisionsOnStopUseTag();

	// Object: Function DFMVehicle.SOLTrainComponent.DeleteRunningAudioProxy
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x140bd974
	// Params: [ Num(0) Size(0x0) ]
	void DeleteRunningAudioProxy();

	// Object: Function DFMVehicle.SOLTrainComponent.CreateRunningAudioProxy
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x140bd960
	// Params: [ Num(0) Size(0x0) ]
	void CreateRunningAudioProxy();

	// Object: Function DFMVehicle.SOLTrainComponent.CloseSkeletonMeshTickAfter
	// Flags: [Final|Native|Protected]
	// Offset: 0x140bd94c
	// Params: [ Num(0) Size(0x0) ]
	void CloseSkeletonMeshTickAfter();

	// Object: Function DFMVehicle.SOLTrainComponent.CloseSkeletonMeshTick
	// Flags: [Final|Native|Protected]
	// Offset: 0x140bd938
	// Params: [ Num(0) Size(0x0) ]
	void CloseSkeletonMeshTick();

	// Object: Function DFMVehicle.SOLTrainComponent.BroadcastStopStateWhenBeginPlay
	// Flags: [Final|Native|Public]
	// Offset: 0x140bd924
	// Params: [ Num(0) Size(0x0) ]
	void BroadcastStopStateWhenBeginPlay();
	DEFINE_UE_CLASS_HELPERS(USOLTrainComponent, "SOLTrainComponent")

};

// Object: Class DFMVehicle.TrailsMeshActor
// Size: 0x378 (Inherited: 0x370)
struct ATrailsMeshActor : AActor
{
	struct UTrailsMeshComponent* TrailsMeshComponent; // 0x370(0x8)
	DEFINE_UE_CLASS_HELPERS(ATrailsMeshActor, "TrailsMeshActor")

};

// Object: Class DFMVehicle.TrailsMeshComponent
// Size: 0x2B0 (Inherited: 0x240)
struct UTrailsMeshComponent : USceneComponent
{
	struct UMaterialInterface* TrailMaterial; // 0x240(0x8)
	uint8_t Pad_0x248[0x68]; // 0x248(0x68)
	DEFINE_UE_CLASS_HELPERS(UTrailsMeshComponent, "TrailsMeshComponent")

};

// Object: Class DFMVehicle.VehicleAreaDrama
// Size: 0x500 (Inherited: 0x4F0)
struct AVehicleAreaDrama : ADramaArea
{
	struct TArray<struct FVehicleyDramaDifficultInfo> DifficultyInfos; // 0x4F0(0x10)


	// Object: Function DFMVehicle.VehicleAreaDrama.SpawnVehicleAI
	// Flags: [Native|Event|Public|BlueprintCallable|BlueprintEvent]
	// Offset: 0x140be124
	// Params: [ Num(0) Size(0x0) ]
	void SpawnVehicleAI();

	// Object: Function DFMVehicle.VehicleAreaDrama.ShouldSpawnVehicleOnCurrentDifficulty
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x140be0ec
	// Params: [ Num(1) Size(0x1) ]
	uint8_t ShouldSpawnVehicleOnCurrentDifficulty();

	// Object: Function DFMVehicle.VehicleAreaDrama.GetOverridePassengers
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x140be06c
	// Params: [ Num(1) Size(0x50) ]
	struct TMap<struct FName, struct FName> GetOverridePassengers();

	// Object: Function DFMVehicle.VehicleAreaDrama.GetExpectedVehiclePath
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x140be038
	// Params: [ Num(1) Size(0x8) ]
	struct AGPSplinePath* GetExpectedVehiclePath();

	// Object: Function DFMVehicle.VehicleAreaDrama.GetExpectedVehicleHealth
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x140be004
	// Params: [ Num(1) Size(0x4) ]
	float GetExpectedVehicleHealth();

	// Object: Function DFMVehicle.VehicleAreaDrama.GetExpectedOverrideExplodeDamage
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x140bdfd0
	// Params: [ Num(1) Size(0x4) ]
	float GetExpectedOverrideExplodeDamage();
	DEFINE_UE_CLASS_HELPERS(AVehicleAreaDrama, "VehicleAreaDrama")

};

// Object: Class DFMVehicle.DFMVehicleAssistAimTableManager
// Size: 0x40 (Inherited: 0x30)
struct UDFMVehicleAssistAimTableManager : UDataTableSystemManagerBase
{
	uint8_t Pad_0x30[0x10]; // 0x30(0x10)
	DEFINE_UE_CLASS_HELPERS(UDFMVehicleAssistAimTableManager, "DFMVehicleAssistAimTableManager")

};

// Object: Class DFMVehicle.DFMVehiclePosPredictTableManager
// Size: 0x40 (Inherited: 0x30)
struct UDFMVehiclePosPredictTableManager : UDataTableSystemManagerBase
{
	uint8_t Pad_0x30[0x10]; // 0x30(0x10)
	DEFINE_UE_CLASS_HELPERS(UDFMVehiclePosPredictTableManager, "DFMVehiclePosPredictTableManager")

};

// Object: Class DFMVehicle.DFMWeaponHitPosPredictTableManager
// Size: 0x40 (Inherited: 0x30)
struct UDFMWeaponHitPosPredictTableManager : UDataTableSystemManagerBase
{
	uint8_t Pad_0x30[0x10]; // 0x30(0x10)
	DEFINE_UE_CLASS_HELPERS(UDFMWeaponHitPosPredictTableManager, "DFMWeaponHitPosPredictTableManager")

};

// Object: Class DFMVehicle.DFMVehicleAssistAimSystemConfig
// Size: 0x150 (Inherited: 0x28)
struct UDFMVehicleAssistAimSystemConfig : UObject
{
	struct TSet<struct TSoftClassPtr<struct ADFMGameMode*>> GameModeWhiteList; // 0x28(0x50)
	float CameraTowardAngleThreshold; // 0x78(0x4)
	float DistanceThreshold; // 0x7C(0x4)
	struct FRuntimeFloatCurve TargetSphereDistanceScaleCurve; // 0x80(0xA0)
	float MovingAwayCloseJudgeThreshold; // 0x120(0x4)
	float VelocityThreshold; // 0x124(0x4)
	float EscapeInputThreshold; // 0x128(0x4)
	float TargetChangeInputThreshold; // 0x12C(0x4)
	float TargetChangeInputDistanceRatioThreshold; // 0x130(0x4)
	float RecordInvalidTime; // 0x134(0x4)
	float ObstructJudgeAngleThreshold; // 0x138(0x4)
	float TargetVelThreshold; // 0x13C(0x4)
	float TargetPredictLerpSpeed; // 0x140(0x4)
	float ForbiddenHitPosPredictInterval; // 0x144(0x4)
	float HitPointDistanceThreshold; // 0x148(0x4)
	uint8_t Pad_0x14C[0x4]; // 0x14C(0x4)
	DEFINE_UE_CLASS_HELPERS(UDFMVehicleAssistAimSystemConfig, "DFMVehicleAssistAimSystemConfig")

};

// Object: Class DFMVehicle.VehicleAssistAimSystem
// Size: 0x298 (Inherited: 0x30)
struct UVehicleAssistAimSystem : UWorldSubsystem
{
	uint8_t Pad_0x30[0x268]; // 0x30(0x268)


	// Object: Function DFMVehicle.VehicleAssistAimSystem.OnLocalPawnChanged
	// Flags: [Final|Native|Protected]
	// Offset: 0x10ac503c
	// Params: [ Num(2) Size(0x10) ]
	void OnLocalPawnChanged(struct AActor* OldCharacter, struct AActor* NewCharacter);
	DEFINE_UE_CLASS_HELPERS(UVehicleAssistAimSystem, "VehicleAssistAimSystem")

};

// Object: Class DFMVehicle.VehicleAssistAimSystemUtils
// Size: 0x28 (Inherited: 0x28)
struct UVehicleAssistAimSystemUtils : UObject
{	DEFINE_UE_CLASS_HELPERS(UVehicleAssistAimSystemUtils, "VehicleAssistAimSystemUtils")

};

// Object: Class DFMVehicle.VehicleBeHitImpluseConfigDataTableManager
// Size: 0x40 (Inherited: 0x30)
struct UVehicleBeHitImpluseConfigDataTableManager : UDataTableSystemManagerBase
{
	uint8_t Pad_0x30[0x10]; // 0x30(0x10)
	DEFINE_UE_CLASS_HELPERS(UVehicleBeHitImpluseConfigDataTableManager, "VehicleBeHitImpluseConfigDataTableManager")

};

// Object: Class DFMVehicle.VehicleFrontendActor
// Size: 0x3C0 (Inherited: 0x370)
struct AVehicleFrontendActor : AActor
{
	uint8_t Pad_0x370[0x8]; // 0x370(0x8)
	struct UVehicleFrontendContext* Context; // 0x378(0x8)
	struct UVehicleFrontendLoadServices* LoadServices; // 0x380(0x8)
	struct FVehicleFrontendBuildTree BuildTree; // 0x388(0x28)
	struct FDelegate callback; // 0x3B0(0x10)


	// Object: Function DFMVehicle.VehicleFrontendActor.Setup
	// Flags: [Final|Native|Public]
	// Offset: 0x140d0014
	// Params: [ Num(2) Size(0x18) ]
	void Setup(uint64_t InID, struct FDelegate InCallback);

	// Object: Function DFMVehicle.VehicleFrontendActor.SetSkeletalMeshComponentsRenderCustomDepth
	// Flags: [Final|Native|Public]
	// Offset: 0x140cff68
	// Params: [ Num(1) Size(0x1) ]
	void SetSkeletalMeshComponentsRenderCustomDepth(uint8_t bRenderCustomDepth);

	// Object: Function DFMVehicle.VehicleFrontendActor.OnLoadServicesFinishCallback
	// Flags: [Final|Native|Private]
	// Offset: 0x140cfe80
	// Params: [ Num(2) Size(0x9) ]
	void OnLoadServicesFinishCallback(uint64_t TaskID, uint8_t bSuccess);

	// Object: Function DFMVehicle.VehicleFrontendActor.GetVehicleRootID
	// Flags: [Final|Native|Public]
	// Offset: 0x140cfe4c
	// Params: [ Num(1) Size(0x8) ]
	uint64_t GetVehicleRootID();

	// Object: Function DFMVehicle.VehicleFrontendActor.GetVehicleActorID
	// Flags: [Final|Native|Public]
	// Offset: 0x140cfe18
	// Params: [ Num(1) Size(0x8) ]
	uint64_t GetVehicleActorID();

	// Object: Function DFMVehicle.VehicleFrontendActor.GetSkeletalMeshComponents
	// Flags: [Final|Native|Public]
	// Offset: 0x140cfd80
	// Params: [ Num(1) Size(0x10) ]
	struct TArray<struct USkeletalMeshComponent*> GetSkeletalMeshComponents();

	// Object: Function DFMVehicle.VehicleFrontendActor.GetSkeletalMeshComponentBySocketName
	// Flags: [Final|Native|Public]
	// Offset: 0x140cfcd4
	// Params: [ Num(2) Size(0x10) ]
	struct USkeletalMeshComponent* GetSkeletalMeshComponentBySocketName(struct FName FoundSocketName);

	// Object: Function DFMVehicle.VehicleFrontendActor.GetSkeletalMeshComponentBySocketGUID
	// Flags: [Final|Native|Public]
	// Offset: 0x140cfc28
	// Params: [ Num(2) Size(0x10) ]
	struct USkeletalMeshComponent* GetSkeletalMeshComponentBySocketGUID(uint64_t FoundSocketGUID);

	// Object: Function DFMVehicle.VehicleFrontendActor.GetRootSkeletalMeshComponent
	// Flags: [Final|Native|Public]
	// Offset: 0x140cfbf4
	// Params: [ Num(1) Size(0x8) ]
	struct USkeletalMeshComponent* GetRootSkeletalMeshComponent();

	// Object: Function DFMVehicle.VehicleFrontendActor.Clear
	// Flags: [Final|Native|Public]
	// Offset: 0x140cfbe0
	// Params: [ Num(0) Size(0x0) ]
	void Clear();
	DEFINE_UE_CLASS_HELPERS(AVehicleFrontendActor, "VehicleFrontendActor")

};

// Object: Class DFMVehicle.VehicleFrontendContext
// Size: 0x50 (Inherited: 0x28)
struct UVehicleFrontendContext : UObject
{
	uint64_t SkinId; // 0x28(0x8)
	uint64_t SkinAppearanceId; // 0x30(0x8)
	uint8_t Pad_0x38[0x8]; // 0x38(0x8)
	struct TArray<struct FVehicleFrontendContextNode> Nodes; // 0x40(0x10)


	// Object: Function DFMVehicle.VehicleFrontendContext.SetSkin
	// Flags: [Final|Native|Public]
	// Offset: 0x140d079c
	// Params: [ Num(1) Size(0x8) ]
	void SetSkin(uint64_t InSkinId);

	// Object: Function DFMVehicle.VehicleFrontendContext.RemoveNode
	// Flags: [Final|Native|Public]
	// Offset: 0x140d06ec
	// Params: [ Num(2) Size(0x9) ]
	uint8_t RemoveNode(uint64_t SocketGUID);

	// Object: Function DFMVehicle.VehicleFrontendContext.IsEmptyNode
	// Flags: [Final|Native|Public|HasOutParms]
	// Offset: 0x140d0628
	// Params: [ Num(2) Size(0x19) ]
	uint8_t IsEmptyNode(const struct FVehicleFrontendContextNode& Node);

	// Object: Function DFMVehicle.VehicleFrontendContext.IsContainedNode
	// Flags: [Final|Native|Public]
	// Offset: 0x140d0578
	// Params: [ Num(2) Size(0x9) ]
	uint8_t IsContainedNode(uint64_t SocketGUID);

	// Object: Function DFMVehicle.VehicleFrontendContext.GetSkinId
	// Flags: [Final|Native|Public]
	// Offset: 0x140d0544
	// Params: [ Num(1) Size(0x8) ]
	uint64_t GetSkinId();

	// Object: Function DFMVehicle.VehicleFrontendContext.GetSkinAppearanceIDByDownload
	// Flags: [Final|Native|Public]
	// Offset: 0x140d0510
	// Params: [ Num(1) Size(0x8) ]
	uint64_t GetSkinAppearanceIDByDownload();

	// Object: Function DFMVehicle.VehicleFrontendContext.GetSkinAppearanceID
	// Flags: [Final|Native|Public]
	// Offset: 0x140d04dc
	// Params: [ Num(1) Size(0x8) ]
	uint64_t GetSkinAppearanceID();

	// Object: Function DFMVehicle.VehicleFrontendContext.GetRootSocketID
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x140d04a8
	// Params: [ Num(1) Size(0x8) ]
	static uint64_t GetRootSocketID();

	// Object: Function DFMVehicle.VehicleFrontendContext.GetRootNode
	// Flags: [Final|Native|Public|Const]
	// Offset: 0x140d0468
	// Params: [ Num(1) Size(0x18) ]
	struct FVehicleFrontendContextNode GetRootNode();

	// Object: Function DFMVehicle.VehicleFrontendContext.GetRootItemID
	// Flags: [Final|Native|Public]
	// Offset: 0x140d0434
	// Params: [ Num(1) Size(0x8) ]
	uint64_t GetRootItemID();

	// Object: Function DFMVehicle.VehicleFrontendContext.GetRootItemGUID
	// Flags: [Final|Native|Public]
	// Offset: 0x140d0400
	// Params: [ Num(1) Size(0x8) ]
	uint64_t GetRootItemGUID();

	// Object: Function DFMVehicle.VehicleFrontendContext.GetNodes
	// Flags: [Final|Native|Public|Const]
	// Offset: 0x140d0378
	// Params: [ Num(1) Size(0x10) ]
	struct TArray<struct FVehicleFrontendContextNode> GetNodes();

	// Object: Function DFMVehicle.VehicleFrontendContext.GetNode
	// Flags: [Final|Native|Public|Const]
	// Offset: 0x140d02c0
	// Params: [ Num(2) Size(0x20) ]
	struct FVehicleFrontendContextNode GetNode(uint64_t InSocketGUID);

	// Object: Function DFMVehicle.VehicleFrontendContext.AddNode
	// Flags: [Final|Native|Public]
	// Offset: 0x140d019c
	// Params: [ Num(4) Size(0x19) ]
	uint8_t AddNode(uint64_t ItemID, uint64_t ItemGUID, uint64_t SocketGUID);
	DEFINE_UE_CLASS_HELPERS(UVehicleFrontendContext, "VehicleFrontendContext")

};

// Object: Class DFMVehicle.VehicleFrontendContextHelper
// Size: 0x28 (Inherited: 0x28)
struct UVehicleFrontendContextHelper : UObject
{

	// Object: Function DFMVehicle.VehicleFrontendContextHelper.Remove
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x140d0ee0
	// Params: [ Num(3) Size(0x11) ]
	static struct FVehicleFrontendContextUpdateResult Remove(struct UVehicleFrontendContext* InContext, uint64_t SocketGUID);

	// Object: Function DFMVehicle.VehicleFrontendContextHelper.ReadTemplate
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x140d0e14
	// Params: [ Num(2) Size(0x10) ]
	static void ReadTemplate(struct UVehicleFrontendContext* InContext, int64_t ID);

	// Object: Function DFMVehicle.VehicleFrontendContextHelper.GeVehicleSkinModuleName
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x140d0d70
	// Params: [ Num(2) Size(0x10) ]
	static struct FName GeVehicleSkinModuleName(struct UVehicleFrontendContext* InContext);

	// Object: Function DFMVehicle.VehicleFrontendContextHelper.GeVehicleModuleName
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x140d0ccc
	// Params: [ Num(2) Size(0x10) ]
	static struct FName GeVehicleModuleName(struct UVehicleFrontendContext* InContext);

	// Object: Function DFMVehicle.VehicleFrontendContextHelper.GetVehicleSkinModuleState
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x140d0c28
	// Params: [ Num(2) Size(0xC) ]
	static int32_t GetVehicleSkinModuleState(struct UVehicleFrontendContext* InContext);

	// Object: Function DFMVehicle.VehicleFrontendContextHelper.GetVehicleModuleState
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x140d0b84
	// Params: [ Num(2) Size(0xC) ]
	static int32_t GetVehicleModuleState(struct UVehicleFrontendContext* InContext);

	// Object: Function DFMVehicle.VehicleFrontendContextHelper.CheckContext
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x140d0af0
	// Params: [ Num(1) Size(0x8) ]
	static void CheckContext(struct UVehicleFrontendContext* InContext);

	// Object: Function DFMVehicle.VehicleFrontendContextHelper.AutoAdd
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x140d09d8
	// Params: [ Num(4) Size(0x19) ]
	static struct FVehicleFrontendContextUpdateResult AutoAdd(struct UVehicleFrontendContext* InContext, int64_t ItemID, int64_t ItemGUID);

	// Object: Function DFMVehicle.VehicleFrontendContextHelper.Add
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x140d0884
	// Params: [ Num(5) Size(0x21) ]
	static struct FVehicleFrontendContextUpdateResult Add(struct UVehicleFrontendContext* InContext, int64_t ItemID, int64_t ItemGUID, uint64_t SocketGUID);
	DEFINE_UE_CLASS_HELPERS(UVehicleFrontendContextHelper, "VehicleFrontendContextHelper")

};

// Object: Class DFMVehicle.VehicleFrontendLoadProcessor
// Size: 0x40 (Inherited: 0x28)
struct UVehicleFrontendLoadProcessor : UObject
{
	uint64_t ID; // 0x28(0x8)
	struct FMulticastInlineDelegate callback; // 0x30(0x10)


	// Object: Function DFMVehicle.VehicleFrontendLoadProcessor.Setup
	// Flags: [Final|Native|Public]
	// Offset: 0x140d12c4
	// Params: [ Num(1) Size(0x8) ]
	void Setup(uint64_t InID);

	// Object: Function DFMVehicle.VehicleFrontendLoadProcessor.Process
	// Flags: [Native|Public|HasOutParms]
	// Offset: 0x140d1200
	// Params: [ Num(1) Size(0x30) ]
	void Process(struct FVehicleFrontendLoadContext& Context);

	// Object: Function DFMVehicle.VehicleFrontendLoadProcessor.PreProcess
	// Flags: [Native|Public|HasOutParms]
	// Offset: 0x140d113c
	// Params: [ Num(1) Size(0x30) ]
	void PreProcess(struct FVehicleFrontendLoadContext& Context);

	// Object: Function DFMVehicle.VehicleFrontendLoadProcessor.Clean
	// Flags: [Native|Public]
	// Offset: 0x140d1120
	// Params: [ Num(0) Size(0x0) ]
	void Clean();

	// Object: Function DFMVehicle.VehicleFrontendLoadProcessor.Cancel
	// Flags: [Final|Native|Public]
	// Offset: 0x140d110c
	// Params: [ Num(0) Size(0x0) ]
	void Cancel();
	DEFINE_UE_CLASS_HELPERS(UVehicleFrontendLoadProcessor, "VehicleFrontendLoadProcessor")

};

// Object: Class DFMVehicle.VehicleFrontendLoadMaterialProcessor
// Size: 0x40 (Inherited: 0x40)
struct UVehicleFrontendLoadMaterialProcessor : UVehicleFrontendLoadProcessor
{

	// Object: Function DFMVehicle.VehicleFrontendLoadMaterialProcessor.SetMaterialBaseParam
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x140d0fc4
	// Params: [ Num(2) Size(0x10) ]
	static void SetMaterialBaseParam(struct UMaterialInterface* OriginMaterial, struct UMaterialInstanceDynamic* DynamicMaterial);
	DEFINE_UE_CLASS_HELPERS(UVehicleFrontendLoadMaterialProcessor, "VehicleFrontendLoadMaterialProcessor")

};

// Object: Class DFMVehicle.VehicleFrontendLoadMeshProcessor
// Size: 0x70 (Inherited: 0x40)
struct UVehicleFrontendLoadMeshProcessor : UVehicleFrontendLoadProcessor
{
	uint8_t Pad_0x40[0x30]; // 0x40(0x30)
	DEFINE_UE_CLASS_HELPERS(UVehicleFrontendLoadMeshProcessor, "VehicleFrontendLoadMeshProcessor")

};

// Object: Class DFMVehicle.VehicleFrontendLoadResourcesProcessor
// Size: 0x50 (Inherited: 0x40)
struct UVehicleFrontendLoadResourcesProcessor : UVehicleFrontendLoadProcessor
{
	uint8_t Pad_0x40[0x10]; // 0x40(0x10)


	// Object: Function DFMVehicle.VehicleFrontendLoadResourcesProcessor.OnLoadCallback
	// Flags: [Final|Native|Public]
	// Offset: 0x140d1370
	// Params: [ Num(2) Size(0x48) ]
	void OnLoadCallback(struct FVehicleFrontendLoadContext Context, struct FVehicleFrontendResourcesPak Pak);
	DEFINE_UE_CLASS_HELPERS(UVehicleFrontendLoadResourcesProcessor, "VehicleFrontendLoadResourcesProcessor")

};

// Object: Class DFMVehicle.VehicleFrontendLoadServices
// Size: 0x50 (Inherited: 0x28)
struct UVehicleFrontendLoadServices : UObject
{
	uint64_t TaskID; // 0x28(0x8)
	struct TArray<struct UVehicleFrontendLoadProcessor*> Processors; // 0x30(0x10)
	struct FDelegate FinishCallback; // 0x40(0x10)


	// Object: Function DFMVehicle.VehicleFrontendLoadServices.Setup
	// Flags: [Final|Native|Public]
	// Offset: 0x140d15c4
	// Params: [ Num(0) Size(0x0) ]
	void Setup();

	// Object: Function DFMVehicle.VehicleFrontendLoadServices.OnProcessorCallback
	// Flags: [Final|Native|Private|HasOutParms]
	// Offset: 0x140d14cc
	// Params: [ Num(2) Size(0x38) ]
	void OnProcessorCallback(uint64_t InID, struct FVehicleFrontendLoadContext& Context);

	// Object: Function DFMVehicle.VehicleFrontendLoadServices.Clean
	// Flags: [Final|Native|Public]
	// Offset: 0x140d14b8
	// Params: [ Num(0) Size(0x0) ]
	void Clean();
	DEFINE_UE_CLASS_HELPERS(UVehicleFrontendLoadServices, "VehicleFrontendLoadServices")

};

// Object: Class DFMVehicle.VehicleFrontendSubsystem
// Size: 0xB0 (Inherited: 0x30)
struct UVehicleFrontendSubsystem : UGameInstanceSubsystem
{
	uint8_t Pad_0x30[0x8]; // 0x30(0x8)
	struct TMap<uint64_t, struct AVehicleFrontendActor*> ID2ActorsMap; // 0x38(0x50)
	struct FMulticastInlineDelegate OnLoadVehicleCallback; // 0x88(0x10)
	struct AActor* VehicleRoot; // 0x98(0x8)
	uint8_t Pad_0xA0[0x10]; // 0xA0(0x10)


	// Object: Function DFMVehicle.VehicleFrontendSubsystem.SetSpwanRootState
	// Flags: [Final|Native|Public]
	// Offset: 0x140d242c
	// Params: [ Num(1) Size(0x1) ]
	void SetSpwanRootState(uint8_t State);

	// Object: Function DFMVehicle.VehicleFrontendSubsystem.SetParentRootByActorId
	// Flags: [Final|Native|Public]
	// Offset: 0x140d2388
	// Params: [ Num(1) Size(0x8) ]
	void SetParentRootByActorId(uint64_t ID);

	// Object: Function DFMVehicle.VehicleFrontendSubsystem.SetParentRoot
	// Flags: [Final|Native|Public]
	// Offset: 0x140d22e4
	// Params: [ Num(1) Size(0x8) ]
	void SetParentRoot(struct AActor* root);

	// Object: Function DFMVehicle.VehicleFrontendSubsystem.ProcessPrepare
	// Flags: [Final|Native|Public]
	// Offset: 0x140d22ac
	// Params: [ Num(1) Size(0x1) ]
	uint8_t ProcessPrepare();

	// Object: Function DFMVehicle.VehicleFrontendSubsystem.ProcessDisposeByActorID
	// Flags: [Final|Native|Public]
	// Offset: 0x140d2208
	// Params: [ Num(1) Size(0x8) ]
	void ProcessDisposeByActorID(uint64_t ActorID);

	// Object: Function DFMVehicle.VehicleFrontendSubsystem.ProcessDispose
	// Flags: [Final|Native|Public]
	// Offset: 0x10a3c0a4
	// Params: [ Num(0) Size(0x0) ]
	void ProcessDispose();

	// Object: Function DFMVehicle.VehicleFrontendSubsystem.PrepareLoadVehicle
	// Flags: [Final|Native|Protected]
	// Offset: 0x140d2124
	// Params: [ Num(3) Size(0x18) ]
	struct AVehicleFrontendActor* PrepareLoadVehicle(uint64_t ID, uint64_t VehicleItemID);

	// Object: Function DFMVehicle.VehicleFrontendSubsystem.OnProcessLoadVehicleCallback
	// Flags: [Final|Native|Protected]
	// Offset: 0x140d203c
	// Params: [ Num(2) Size(0x9) ]
	void OnProcessLoadVehicleCallback(uint64_t ID, uint8_t bSuccess);

	// Object: Function DFMVehicle.VehicleFrontendSubsystem.OnProcessActorSetRenderCustomDepth
	// Flags: [Final|Native|Static|Public|HasOutParms]
	// Offset: 0x140d1f4c
	// Params: [ Num(2) Size(0x18) ]
	static void OnProcessActorSetRenderCustomDepth(const struct TArray<struct FString>& Args, struct UWorld* World);

	// Object: Function DFMVehicle.VehicleFrontendSubsystem.LoadVehicleFromSkinID
	// Flags: [Final|Native|Public]
	// Offset: 0x140d1e64
	// Params: [ Num(3) Size(0x11) ]
	uint8_t LoadVehicleFromSkinID(uint64_t SkinId, uint64_t ActorID);

	// Object: Function DFMVehicle.VehicleFrontendSubsystem.LoadVehicle
	// Flags: [Final|Native|Public]
	// Offset: 0x140d1d7c
	// Params: [ Num(3) Size(0x11) ]
	uint8_t LoadVehicle(struct UVehicleFrontendContext* InContext, uint64_t ActorID);

	// Object: Function DFMVehicle.VehicleFrontendSubsystem.LoadStandardVehicle
	// Flags: [Final|Native|Public]
	// Offset: 0x140d1c94
	// Params: [ Num(3) Size(0x11) ]
	uint8_t LoadStandardVehicle(uint64_t VehicleItemID, uint64_t ActorID);

	// Object: Function DFMVehicle.VehicleFrontendSubsystem.GetVehicleTransform
	// Flags: [Final|Native|Protected|HasOutParms|HasDefaults]
	// Offset: 0x140d1b38
	// Params: [ Num(4) Size(0x41) ]
	uint8_t GetVehicleTransform(uint64_t ID, uint64_t VehicleItemID, struct FTransform& Transform);

	// Object: Function DFMVehicle.VehicleFrontendSubsystem.GetOnLoadVehicleCallback
	// Flags: [Final|Native|Public]
	// Offset: 0x140d1ab4
	// Params: [ Num(1) Size(0x10) ]
	struct FMulticastInlineDelegate GetOnLoadVehicleCallback();

	// Object: Function DFMVehicle.VehicleFrontendSubsystem.GetActor
	// Flags: [Final|Native|Public]
	// Offset: 0x140d1a08
	// Params: [ Num(2) Size(0x10) ]
	struct AVehicleFrontendActor* GetActor(uint64_t ID);

	// Object: Function DFMVehicle.VehicleFrontendSubsystem.Get
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x109470ac
	// Params: [ Num(2) Size(0x10) ]
	static struct UVehicleFrontendSubsystem* Get(struct UObject* WorldContextObject);

	// Object: Function DFMVehicle.VehicleFrontendSubsystem.FixupVehicleTransform
	// Flags: [Final|Native|Protected]
	// Offset: 0x140d18e4
	// Params: [ Num(4) Size(0x19) ]
	uint8_t FixupVehicleTransform(struct AVehicleFrontendActor* VehicleFrontendActor, uint64_t ID, uint64_t VehicleItemID);

	// Object: Function DFMVehicle.VehicleFrontendSubsystem.DisposeFrontendActor
	// Flags: [Final|Native|Public]
	// Offset: 0x140d18d0
	// Params: [ Num(0) Size(0x0) ]
	void DisposeFrontendActor();

	// Object: Function DFMVehicle.VehicleFrontendSubsystem.DebugUpdate
	// Flags: [Final|Native|Static|Public|HasOutParms]
	// Offset: 0x140d17e0
	// Params: [ Num(2) Size(0x18) ]
	static void DebugUpdate(const struct TArray<struct FString>& Args, struct UWorld* World);

	// Object: Function DFMVehicle.VehicleFrontendSubsystem.DebugUnload
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x140d17cc
	// Params: [ Num(0) Size(0x0) ]
	static void DebugUnload();

	// Object: Function DFMVehicle.VehicleFrontendSubsystem.DebugLoadTemplateFromSkinID
	// Flags: [Final|Native|Static|Public|HasOutParms]
	// Offset: 0x140d16dc
	// Params: [ Num(2) Size(0x18) ]
	static void DebugLoadTemplateFromSkinID(const struct TArray<struct FString>& Args, struct UWorld* World);

	// Object: Function DFMVehicle.VehicleFrontendSubsystem.DebugLoadTemplate
	// Flags: [Final|Native|Static|Public|HasOutParms]
	// Offset: 0x140d15ec
	// Params: [ Num(2) Size(0x18) ]
	static void DebugLoadTemplate(const struct TArray<struct FString>& Args, struct UWorld* World);
	DEFINE_UE_CLASS_HELPERS(UVehicleFrontendSubsystem, "VehicleFrontendSubsystem")

};

// Object: Class DFMVehicle.VehicleMixedGroupDataTableManager
// Size: 0x40 (Inherited: 0x30)
struct UVehicleMixedGroupDataTableManager : UDataTableSystemManagerBase
{
	uint8_t Pad_0x30[0x10]; // 0x30(0x10)


	// Object: Function DFMVehicle.VehicleMixedGroupDataTableManager.IsMixedGroupEnabled
	// Flags: [Final|Native|Public]
	// Offset: 0x140d2cf0
	// Params: [ Num(3) Size(0x9) ]
	uint8_t IsMixedGroupEnabled(int32_t InMapID, int32_t InLayoutId);

	// Object: Function DFMVehicle.VehicleMixedGroupDataTableManager.GetVehicleGroupID
	// Flags: [Final|Native|Public]
	// Offset: 0x140d2b20
	// Params: [ Num(7) Size(0x1C) ]
	int32_t GetVehicleGroupID(int32_t InMapID, int32_t InLayoutId, int32_t InSectorID, int32_t InCampId, int32_t InHubIndex, int32_t InVehicleID);

	// Object: Function DFMVehicle.VehicleMixedGroupDataTableManager.GetVehicleExtraScoreCost
	// Flags: [Final|Native|Public]
	// Offset: 0x140d2950
	// Params: [ Num(7) Size(0x1C) ]
	int32_t GetVehicleExtraScoreCost(int32_t InMapID, int32_t InLayoutId, int32_t InSectorID, int32_t InCampId, int32_t InHubIndex, int32_t InVehicleID);

	// Object: Function DFMVehicle.VehicleMixedGroupDataTableManager.GetMixedGroupConfig
	// Flags: [Final|Native|Public|HasOutParms]
	// Offset: 0x140d2710
	// Params: [ Num(8) Size(0x2D) ]
	uint8_t GetMixedGroupConfig(int32_t InMapID, int32_t InLayoutId, int32_t InSectorID, int32_t InCampId, int32_t InHubIndex, struct TArray<struct FVehicleMixedGroupConfig>& OutGroups, int32_t& OutMaxGroupCount);

	// Object: Function DFMVehicle.VehicleMixedGroupDataTableManager.GetGroupVehicleLimit
	// Flags: [Final|Native|Public]
	// Offset: 0x140d2540
	// Params: [ Num(7) Size(0x1C) ]
	int32_t GetGroupVehicleLimit(int32_t InMapID, int32_t InLayoutId, int32_t InSectorID, int32_t InCampId, int32_t InHubIndex, int32_t InGroupID);
	DEFINE_UE_CLASS_HELPERS(UVehicleMixedGroupDataTableManager, "VehicleMixedGroupDataTableManager")

};

// Object: Class DFMVehicle.VehicleMusicConfigDataTableManager
// Size: 0x40 (Inherited: 0x30)
struct UVehicleMusicConfigDataTableManager : UDataTableSystemManagerBase
{
	uint8_t Pad_0x30[0x10]; // 0x30(0x10)
	DEFINE_UE_CLASS_HELPERS(UVehicleMusicConfigDataTableManager, "VehicleMusicConfigDataTableManager")

};

// Object: Class DFMVehicle.VehiclePendantComponent
// Size: 0xF50 (Inherited: 0xF50)
struct UVehiclePendantComponent : USkeletalMeshComponent
{	DEFINE_UE_CLASS_HELPERS(UVehiclePendantComponent, "VehiclePendantComponent")

};

// Object: Class DFMVehicle.VehiclePendantManager
// Size: 0x190 (Inherited: 0x30)
struct UVehiclePendantManager : UWorldSubsystem
{
	uint8_t Pad_0x30[0x158]; // 0x30(0x158)
	float TickInterval; // 0x188(0x4)
	uint8_t Pad_0x18C[0x4]; // 0x18C(0x4)
	DEFINE_UE_CLASS_HELPERS(UVehiclePendantManager, "VehiclePendantManager")

};

// Object: Class DFMVehicle.VehicleProjectileLauncherController
// Size: 0x150 (Inherited: 0xF8)
struct UVehicleProjectileLauncherController : UActorComponent
{
	struct FVector2D LauncherYawRange; // 0xF8(0x8)
	struct FVector2D LauncherPitchRange; // 0x100(0x8)
	struct FName LeftLauncherName; // 0x108(0x8)
	struct FName RightLauncherName; // 0x110(0x8)
	float PitchSensitivity; // 0x118(0x4)
	float YawSensitivity; // 0x11C(0x4)
	float LauncherResetYawSpeed; // 0x120(0x4)
	float LauncherResetPitchSpeed; // 0x124(0x4)
	uint8_t Pad_0x128[0x28]; // 0x128(0x28)
	DEFINE_UE_CLASS_HELPERS(UVehicleProjectileLauncherController, "VehicleProjectileLauncherController")

};

// Object: Class DFMVehicle.VehicleSeatSpecifyCVarConfigManager
// Size: 0x40 (Inherited: 0x30)
struct UVehicleSeatSpecifyCVarConfigManager : UDataTableSystemManagerBase
{
	uint8_t Pad_0x30[0x10]; // 0x30(0x10)
	DEFINE_UE_CLASS_HELPERS(UVehicleSeatSpecifyCVarConfigManager, "VehicleSeatSpecifyCVarConfigManager")

};

// Object: Class DFMVehicle.VehicleSkinBrokenPartsConfigDataTableManager
// Size: 0x40 (Inherited: 0x30)
struct UVehicleSkinBrokenPartsConfigDataTableManager : UDataTableSystemManagerBase
{
	uint8_t Pad_0x30[0x10]; // 0x30(0x10)
	DEFINE_UE_CLASS_HELPERS(UVehicleSkinBrokenPartsConfigDataTableManager, "VehicleSkinBrokenPartsConfigDataTableManager")

};

// Object: Class DFMVehicle.VehicleSpawnerDataTableManager
// Size: 0xA8 (Inherited: 0x30)
struct UVehicleSpawnerDataTableManager : UDataTableSystemManagerBase
{
	uint8_t Pad_0x30[0x78]; // 0x30(0x78)


	// Object: Function DFMVehicle.VehicleSpawnerDataTableManager.GetBattleFieldSpawnerDataRow
	// Flags: [Final|Native|Public|HasOutParms]
	// Offset: 0x140d58b0
	// Params: [ Num(2) Size(0x70) ]
	void GetBattleFieldSpawnerDataRow(int32_t InMapID, struct FBattleFieldSpawnerDataRow& OutBattleFieldSpawnerDataRow);
	DEFINE_UE_CLASS_HELPERS(UVehicleSpawnerDataTableManager, "VehicleSpawnerDataTableManager")

};

// Object: Class DFMVehicle.VehicleSpawnManager
// Size: 0x140 (Inherited: 0x30)
struct UVehicleSpawnManager : UWorldSubsystem
{
	struct TMap<struct FName, struct FVehicleSpawnerInfo> VehicleSpawnerInfoMap; // 0x30(0x50)
	struct TMap<struct FName, struct FVehicleSpawnerWeakList> SpawnerList; // 0x80(0x50)
	struct TMap<struct FName, struct FVehicleSpawnedWeakList> SpawnedVehicleList; // 0xD0(0x50)
	struct FVehicleSpawnerWeakList UniqueSpawnerList; // 0x120(0x10)
	struct FVehicleSpawnedWeakList UniqueSpawnedList; // 0x130(0x10)


	// Object: Function DFMVehicle.VehicleSpawnManager.ResetSpawned
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x140d5d4c
	// Params: [ Num(0) Size(0x0) ]
	void ResetSpawned();

	// Object: Function DFMVehicle.VehicleSpawnManager.GetVehicleSpawners
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x140d5c6c
	// Params: [ Num(2) Size(0x18) ]
	struct TArray<struct AVehicleSpawner*> GetVehicleSpawners(struct FName Tag);

	// Object: Function DFMVehicle.VehicleSpawnManager.GetSpawnedVehicles
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x140d5b8c
	// Params: [ Num(2) Size(0x18) ]
	struct TArray<struct ADFMVehicleBase*> GetSpawnedVehicles(struct FName Tag);

	// Object: Function DFMVehicle.VehicleSpawnManager.Get
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x140d5ae8
	// Params: [ Num(2) Size(0x10) ]
	static struct UVehicleSpawnManager* Get(struct UObject* WorldContextObject);
	DEFINE_UE_CLASS_HELPERS(UVehicleSpawnManager, "VehicleSpawnManager")

};

// Object: Class DFMVehicle.VehicleSpawner
// Size: 0x3D0 (Inherited: 0x370)
struct AVehicleSpawner : AGPSpawnerBase
{
	EAnimVehicleType VehicleType; // 0x370(0x1)
	uint8_t Pad_0x371[0x3]; // 0x371(0x3)
	int32_t VehicleId; // 0x374(0x4)
	struct ADFMVehicleBase* VehicleTemplateBP; // 0x378(0x8)
	int32_t OwnerCamp; // 0x380(0x4)
	EVehicleSpawnerType VehicleSpawnType; // 0x384(0x4)
	uint8_t SpawnWhenBeginPlay : 1; // 0x388(0x1), Mask(0x1)
	uint8_t BitPad_0x388_1 : 7; // 0x388(0x1)
	uint8_t Pad_0x389[0x37]; // 0x389(0x37)
	struct AGPCharacter* OwnerCharacter; // 0x3C0(0x8)
	uint8_t Pad_0x3C8[0x8]; // 0x3C8(0x8)


	// Object: Function DFMVehicle.VehicleSpawner.SpawnAndRegister
	// Flags: [Native|Public|HasOutParms|HasDefaults|BlueprintCallable]
	// Offset: 0x140d5f24
	// Params: [ Num(2) Size(0x38) ]
	struct ADFMVehicleBase* SpawnAndRegister(const struct FTransform& Transform);

	// Object: Function DFMVehicle.VehicleSpawner.PreviewVehicleMesh
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x140d5f10
	// Params: [ Num(0) Size(0x0) ]
	void PreviewVehicleMesh();

	// Object: Function DFMVehicle.VehicleSpawner.OnVehicleDead
	// Flags: [Native|Public]
	// Offset: 0x140d5e64
	// Params: [ Num(1) Size(0x8) ]
	void OnVehicleDead(struct AActor* CurVehicle);

	// Object: Function DFMVehicle.VehicleSpawner.OnSpawn
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(0) Size(0x0) ]
	void OnSpawn();

	// Object: Function DFMVehicle.VehicleSpawner.LoadConfig
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x140d5da4
	// Params: [ Num(1) Size(0x18) ]
	void LoadConfig(const struct FVehicleSpawnerConfig& Config);
	DEFINE_UE_CLASS_HELPERS(AVehicleSpawner, "VehicleSpawner")

};

// Object: Class DFMVehicle.VehicleAutoSpawner
// Size: 0x3B0 (Inherited: 0x370)
struct AVehicleAutoSpawner : AGPSpawnerBase
{
	struct APawn* VehicleTemplate; // 0x370(0x8)
	EAnimVehicleType VehicleType; // 0x378(0x1)
	uint8_t Pad_0x379[0x3]; // 0x379(0x3)
	int32_t VehicleId; // 0x37C(0x4)
	uint8_t Pad_0x380[0x18]; // 0x380(0x18)
	int32_t DefaultCamp; // 0x398(0x4)
	uint8_t Pad_0x39C[0x4]; // 0x39C(0x4)
	struct ADFMVehicleBase* DefualtVehicle; // 0x3A0(0x8)
	float RefreshCD; // 0x3A8(0x4)
	uint8_t IsActive : 1; // 0x3AC(0x1), Mask(0x1)
	uint8_t BitPad_0x3AC_1 : 7; // 0x3AC(0x1)
	uint8_t bPassActorTagToVehicle : 1; // 0x3AD(0x1), Mask(0x1)
	uint8_t BitPad_0x3AD_1 : 7; // 0x3AD(0x1)
	uint8_t Pad_0x3AE[0x2]; // 0x3AE(0x2)


	// Object: Function DFMVehicle.VehicleAutoSpawner.SpawnAndRegister
	// Flags: [Native|Public|HasOutParms|HasDefaults|BlueprintCallable]
	// Offset: 0x140d61ec
	// Params: [ Num(2) Size(0x38) ]
	struct ADFMVehicleBase* SpawnAndRegister(const struct FTransform& Transform);

	// Object: Function DFMVehicle.VehicleAutoSpawner.PreviewVehicleMesh
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x140d61d8
	// Params: [ Num(0) Size(0x0) ]
	void PreviewVehicleMesh();

	// Object: Function DFMVehicle.VehicleAutoSpawner.OnVehicleDead
	// Flags: [Final|Native|Public]
	// Offset: 0x140d6134
	// Params: [ Num(1) Size(0x8) ]
	void OnVehicleDead(struct AActor* CurVehicle);

	// Object: Function DFMVehicle.VehicleAutoSpawner.OnSpawnerActive
	// Flags: [Final|Native|Public]
	// Offset: 0x140d6120
	// Params: [ Num(0) Size(0x0) ]
	void OnSpawnerActive();

	// Object: Function DFMVehicle.VehicleAutoSpawner.OnSpawn
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(0) Size(0x0) ]
	void OnSpawn();

	// Object: Function DFMVehicle.VehicleAutoSpawner.LoadConfig
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x140d6060
	// Params: [ Num(1) Size(0x18) ]
	void LoadConfig(const struct FVehicleSpawnerConfig& Config);
	DEFINE_UE_CLASS_HELPERS(AVehicleAutoSpawner, "VehicleAutoSpawner")

};

// Object: Class DFMVehicle.VehicleUtilWorldSubsystem
// Size: 0xA8 (Inherited: 0x30)
struct UVehicleUtilWorldSubsystem : UWorldSubsystem
{
	uint8_t Pad_0x30[0x68]; // 0x30(0x68)
	struct AActor* SeaLevelActor; // 0x98(0x8)
	uint8_t Pad_0xA0[0x8]; // 0xA0(0x8)


	// Object: Function DFMVehicle.VehicleUtilWorldSubsystem.RegisterSeaLevelActor
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x140daec8
	// Params: [ Num(1) Size(0x8) ]
	void RegisterSeaLevelActor(struct AActor* InSeaLevelActor);

	// Object: Function DFMVehicle.VehicleUtilWorldSubsystem.Get
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x140dae24
	// Params: [ Num(2) Size(0x10) ]
	static struct UVehicleUtilWorldSubsystem* Get(struct UObject* WorldContext);
	DEFINE_UE_CLASS_HELPERS(UVehicleUtilWorldSubsystem, "VehicleUtilWorldSubsystem")

};

// Object: Class DFMVehicle.VehicleWindFieldEffectManager
// Size: 0x58 (Inherited: 0x30)
struct UVehicleWindFieldEffectManager : UWorldSubsystem
{
	uint8_t Pad_0x30[0x8]; // 0x30(0x8)
	struct AActor* WindFieldEffectActor; // 0x38(0x8)
	struct TArray<struct AGPVehicleBase*> VehicleNeedWindFiled; // 0x40(0x10)
	uint8_t Pad_0x50[0x8]; // 0x50(0x8)


	// Object: Function DFMVehicle.VehicleWindFieldEffectManager.UnregisterWindField
	// Flags: [Final|Native|Public]
	// Offset: 0x140db1a4
	// Params: [ Num(1) Size(0x8) ]
	void UnregisterWindField(struct AGPVehicleBase* InVehicle);

	// Object: Function DFMVehicle.VehicleWindFieldEffectManager.RegisterWindField
	// Flags: [Final|Native|Public]
	// Offset: 0x140db0c8
	// Params: [ Num(2) Size(0x10) ]
	void RegisterWindField(struct AGPVehicleBase* InVehicle, struct UObject* InClass);

	// Object: Function DFMVehicle.VehicleWindFieldEffectManager.Get
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x140db024
	// Params: [ Num(2) Size(0x10) ]
	static struct UVehicleWindFieldEffectManager* Get(struct UObject* WorldContext);
	DEFINE_UE_CLASS_HELPERS(UVehicleWindFieldEffectManager, "VehicleWindFieldEffectManager")

};

// Object: Class DFMVehicle.WeaponBulletContinuousLockingStingerMissile
// Size: 0xFF0 (Inherited: 0xFF0)
struct AWeaponBulletContinuousLockingStingerMissile : AWeaponBulletStingerMissile
{	DEFINE_UE_CLASS_HELPERS(AWeaponBulletContinuousLockingStingerMissile, "WeaponBulletContinuousLockingStingerMissile")

};

// Object: Class DFMVehicle.WeaponBulletDynamicallyTrackingTarget
// Size: 0x1020 (Inherited: 0xFF0)
struct AWeaponBulletDynamicallyTrackingTarget : AWeaponBulletStingerMissile
{
	float MaxCheckedDistance; // 0xFE8(0x4)
	float Checkedinterval; // 0xFEC(0x4)
	float MaxControllableDistance; // 0xFF0(0x4)
	float MaxControllableTime; // 0xFF4(0x4)
	uint8_t bNeedZoomWhenControl : 1; // 0xFF8(0x1), Mask(0x1)
	uint8_t bIgnoreTeammate : 1; // 0xFF9(0x1), Mask(0x1)
	float MaxClientServerFiredLocationDelta; // 0xFFC(0x4)
	struct FVector TrackingTargetLocation; // 0x1000(0xC)
	uint8_t BitPad_0x1010_2 : 6; // 0x1010(0x1)
	uint8_t Pad_0x1011[0xF]; // 0x1011(0xF)


	// Object: Function DFMVehicle.WeaponBulletDynamicallyTrackingTarget.SetTrackingTargetLocation
	// Flags: [Net|NetReliableNative|Event|Protected|NetServer|HasDefaults]
	// Offset: 0x140db3a8
	// Params: [ Num(3) Size(0x24) ]
	void SetTrackingTargetLocation(struct FVector InTrackingTargetLocation, struct AActor* HitTargetActor, struct FVector InClientFiredLocation);

	// Object: Function DFMVehicle.WeaponBulletDynamicallyTrackingTarget.OnRep_TrackingTargetLocation
	// Flags: [Final|Native|Protected]
	// Offset: 0x140db394
	// Params: [ Num(0) Size(0x0) ]
	void OnRep_TrackingTargetLocation();
	DEFINE_UE_CLASS_HELPERS(AWeaponBulletDynamicallyTrackingTarget, "WeaponBulletDynamicallyTrackingTarget")

};

// Object: Class DFMVehicle.WeaponBulletIntelligentStingerMissile
// Size: 0x1020 (Inherited: 0xFF0)
struct AWeaponBulletIntelligentStingerMissile : AWeaponBulletStingerMissile
{
	struct TArray<struct ADFMVehicleBase*> LockedVehicleClassArray; // 0xFE8(0x10)
	float DelayToLockTarget; // 0xFF8(0x4)
	float MaxLockDistance; // 0xFFC(0x4)
	float MaxLockAngle; // 0x1000(0x4)
	uint8_t bEnhanceLockedTargetTracing : 1; // 0x1004(0x1), Mask(0x1)
	float MaxLockDistanceForLockedTarget; // 0x1008(0x4)
	float MaxLockAngleForLockedTarget; // 0x100C(0x4)
	uint8_t BitPad_0x1014_1 : 7; // 0x1014(0x1)
	uint8_t Pad_0x1015[0xB]; // 0x1015(0xB)
	DEFINE_UE_CLASS_HELPERS(AWeaponBulletIntelligentStingerMissile, "WeaponBulletIntelligentStingerMissile")

};

// Object: Class DFMVehicle.WeaponBulletStrikeVehicle
// Size: 0xF30 (Inherited: 0xF10)
struct AWeaponBulletStrikeVehicle : AWeaponBulletExplosion
{
	struct TArray<struct ADFMVehicleBase*> StrikedVehicleClassArray; // 0xF08(0x10)
	float StrikedDistance; // 0xF18(0x4)
	float MaxDistance; // 0xF1C(0x4)
	uint8_t Pad_0xF28[0x8]; // 0xF28(0x8)
	DEFINE_UE_CLASS_HELPERS(AWeaponBulletStrikeVehicle, "WeaponBulletStrikeVehicle")

};

// Object: Class DFMVehicle.WeaponBulletWireGuided
// Size: 0x1090 (Inherited: 0x1020)
struct AWeaponBulletWireGuided : AWeaponBulletDynamicallyTrackingTarget
{
	uint8_t Pad_0x1020[0x1C]; // 0x1020(0x1C)
	struct FName ViewPanelName; // 0x103C(0x8)
	float ViewTraceInterval; // 0x1044(0x4)
	float ViewForwardTraceDistance; // 0x1048(0x4)
	float ViewMarkDistance; // 0x104C(0x4)
	float MarkAreaRatio; // 0x1050(0x4)
	float DefaultHp; // 0x1054(0x4)
	struct FName HitVoiceName; // 0x1058(0x8)
	float ThinkMin; // 0x1060(0x4)
	float ThinkScale; // 0x1064(0x4)
	uint8_t Pad_0x1068[0x18]; // 0x1068(0x18)
	ETacticalEquipmentMarkerType TacticalEquipmentMarker; // 0x1080(0x1)
	uint8_t Pad_0x1081[0xF]; // 0x1081(0xF)


	// Object: Function DFMVehicle.WeaponBulletWireGuided.OnScopeHUDUpdate
	// Flags: [Final|Native|Public]
	// Offset: 0x140db50c
	// Params: [ Num(1) Size(0x8) ]
	void OnScopeHUDUpdate(struct URangeScopeLensProxy* MaterialProxy);
	DEFINE_UE_CLASS_HELPERS(AWeaponBulletWireGuided, "WeaponBulletWireGuided")

};

// Object: Class DFMVehicle.WheelTrailsComponent
// Size: 0x300 (Inherited: 0x240)
struct UWheelTrailsComponent : USceneComponent
{
	uint8_t bEnableTrails : 1; // 0x240(0x1), Mask(0x1)
	uint8_t BitPad_0x240_1 : 7; // 0x240(0x1)
	uint8_t Pad_0x241[0x7]; // 0x241(0x7)
	struct TSoftClassPtr<struct ATrailsMeshActor*> TrailClass; // 0x248(0x28)
	float TrailWidth; // 0x270(0x4)
	float InertiaTime; // 0x274(0x4)
	float LinearAccelSize; // 0x278(0x4)
	float TurningAccelSize; // 0x27C(0x4)
	float TurningAngularAccelSize; // 0x280(0x4)
	float SampleDist; // 0x284(0x4)
	uint8_t Pad_0x288[0x60]; // 0x288(0x60)
	struct TArray<struct USceneComponent*> ChildComponents; // 0x2E8(0x10)
	uint8_t Pad_0x2F8[0x8]; // 0x2F8(0x8)
	DEFINE_UE_CLASS_HELPERS(UWheelTrailsComponent, "WheelTrailsComponent")

};

} // namespace SDK
