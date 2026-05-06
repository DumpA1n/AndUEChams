#pragma once

#include "../CoreUObject_classes.hpp"
#include "AIActionPointGeneratorRuntime.hpp"
#include "AIModule.hpp"
#include "DeveloperSettings.hpp"
#include "Engine.hpp"
#include "NavigationSystem.hpp"

namespace SDK
{

// Package: MFNPCAI
// Enums: 75
// Structs: 169
// Classes: 305

struct AAIController;
struct AActor;
struct ACharacter;
struct AController;
struct ACoverSystemActor;
struct AGameState;
struct AMFVoxelEnvAreaClusterActor;
struct ANavMeshBoundsVolume;
struct ANavigationData;
struct APawn;
struct ARecastNavMesh;
struct ATacticSystemActor;
struct AVolume;
enum class ENPCPoseType : uint8_t;
enum class ETacticPointType : uint8_t;
struct FAINoiseEvent;
struct FAIRequestID;
struct FAIStimulus;
struct FActionPointRadianSafe;
struct FCoverPointOctreeData;
struct FCoverPointOctreeElement;
struct FCoverPoseData;
struct FDamageEvent;
struct FHitResult;
struct FKeyRoutePointData;
struct FTacticPointData;
struct UAISenseConfig_Damage;
struct UAISenseConfig_Hearing;
struct UAISenseConfig_Sight;
struct UAISenseConfig_Touch;
struct UActorComponent;
struct UAkAudioEvent;
struct UBTNode;
struct UBTService;
struct UBoxComponent;
struct UCapsuleComponent;
struct UCoverSystem;
struct UCurveFloat;
struct UCurveVector;
struct UDataTable;
struct UEnvQuery;
struct UEnvQueryContext;
struct UEnvQueryContext_BlueprintBase;
struct UEnvQueryInstanceBlueprintWrapper;
struct UNavArea;
struct UNavLinkComponent;
struct UNavLinkCustomComponent;
struct UNavigationQueryFilter;
struct UNavigationSystemV1;
struct UPrimitiveComponent;
struct USceneComponent;
struct USphereComponent;
struct UStaticMesh;
struct UStaticMeshComponent;
struct UWorld;
struct FNavSkeletonGraphFindResult;
struct FNavSkeletonGraphResultNode;
struct FNPCAIQueryRoundEnvironmentResult;
struct FNPCAIFindAmbushAgainstPointResult;
struct FNPCAIFindPathByKeyRouteResult;
struct FNPCAIPeekPointResult;
struct FReinforceAllyAISpawn;
struct FAIRuntimeMonitorStatInfo;
struct FAISGDoorUsed;
struct FNPCAIActivityAIIDModifierTableRow;
struct FNPCAIAsyncTask;
struct FAIDataProviderFVectorValue;
struct FAIDoorSingleSafetyPoint;
struct FAISafetyOpenDoorResp;
struct FNPCAIProfileCover;
struct FNPCAIProfileCoverTag;
struct FAIProtectTreasureBox;
struct FAIEnemyInfo;
struct FAIAnalysisReport;
struct FAIGlobalCacheActors;
struct FMFGraphAStarPolicy;
struct FHNavSearchInfo;
struct FMetisOptions;
struct FHNavSettings;
struct FHNavGraph;
struct FIntraPath;
struct FPortalEdge;
struct FNPCAIIDModifierTableRow;
struct FAIRoundPathFindingNodes;
struct FNavPlatformGraphFindResult;
struct FNavPlatformGraphAStarFilter;
struct FNavPlatformGraphWrapper;
struct FNPCAINavSkeletonBuildStage;
struct FNPCAINavSkeletonAddRegionConnectionStage;
struct FNPCAINavSkeletonBuilder;
struct FNPCAINavSkeletonCalculateCoverageStage;
struct FNPCAINavSkeletonCalculateDivergenceStage;
struct FNPCAINavSkeletonCalculateGradientStage;
struct FNPCAINavSkeletonCalculateSymmetricAttributeStage;
struct FNPCAINavSkeletonCalculateMovingStage;
struct FNPCAINavSkeletonCalculateOutdoorsStage;
struct FNPCAINavSkeletonCalculateProtectionStage;
struct FNPCAINavSkeletonCalculateThrowingStage;
struct FNPCAINavSkeletonCalculateVisibilityStage;
struct FNPCAINavSkeletonCalculateWallDistanceStage;
struct FNPCAINavSkeletonCheckEdgeOnNavMeshStage;
struct FNPCAINavSkeletonCollectConnectionInfoStage;
struct FNPCAINavSkeletonCollectNeighbourInfoStage;
struct FNPCAINavSkeletonFindPathForUnstableSegmentStage;
struct FNPCAINavSkeletonFindWallsInNeighbourhoodStage;
struct FNPCAINavSkeletonGeneratePolylineStage;
struct FNPCAINavSkeletonGenerateRawPointStage;
struct FNavSkeletonPathFindingRequest;
struct FNavSkeletonPathFindingQueue;
struct FNavSkeletonGraphAStarFilter;
struct FNavSkeletonGraphCostType;
struct FNPCAINavSkeletonInitializePointExtraAttributeStage;
struct FNPCAINavSkeletonLabelNavMeshStage;
struct FNPCAINavSkeletonPrunePointStage;
struct FNPCAINavSkeletonRemoveIsolatedPointStage;
struct FNPCAINavSkeletonRemoveTriangleConnectionStage;
struct FNPCAINavSkeletonSavePointStage;
struct FNPCAINavSkeletonSetupPointBattleIntensityExpectation;
struct FNPCAINavSkeletonSetupPointBattleVolumeStage;
struct FNPCAINavSkeletonSetupPointKindStage;
struct FNPCAINavSkeletonSimplifyPolylineStage;
struct FNavSkeletonMoveSettings;
struct FNavSkeletonPatchedPath;
struct FNavSkeletonData;
struct FNavSkeletonPathPoint;
struct FNavSkeletonPoint;
struct FNavSkeletonPolyline;
struct FNavSkeletonBuildSettings;
struct FNavSkeletonSamplePoint;
struct FNavSkeletonSamplePolyline;
struct FNavLinkAcceptanceRadiusEntry;
struct FNPCAINavPlatformNavMeshBoundsVolumeData;
struct FNPCAINavPlatformBuildData;
struct FNPCAINavPlatformRegion;
struct FNPCAINavPlatformPathInfo;
struct FNPCAINavPlatformLinkLine;
struct FNPCAINavPlatformBuildConfig;
struct FNPCAINavPlatformBuildTemplate;
struct FNavCostModifierSharedPointer;
struct FNavCostModifier;
struct FNavCostDescriptor;
struct FNPCAINavPathForBP;
struct FNPCAIMoveRequestCustomDataImpl;
struct FMFNavMeshRegionMap;
struct FMFNavMeshRegion;
struct FNavPolyRefArray;
struct FNavConnectivityInfo;
struct FSoAStorage;
struct FPortalEdgeStorage;
struct FUInt64Storage;
struct FInt32Storage;
struct FNavLinkInfo;
struct FCoverPointPathLengthResult;
struct FAICandidateStandPosition;
struct FAIGrassOctreeElement;
struct FAIGrassOctreeData;
struct FAINearGrassBounds;
struct FAIGrassClusterInfo;
struct FAIGrassGrayBMP;
struct FAILandscapeGrassBlock;
struct FAIGrassBlock;
struct FAIGrassCylinder;
struct FAIGrassBox;
struct FAIGrassEditorBlock;
struct FAIFoliageGrassBlock;
struct FAIGrassMapInfo;
struct FAISenseFlashBlock;
struct FAIBlockArea;
struct FNPCAIPortraitToIDTableRow;
struct FAIBodyPartHPDamageLimit;
struct FAIPerkInfos;
struct FAIMindGoalEnemyAngleMultiple;
struct FAIPropertyNavProfile_Clamp;
struct FNPCAISceneEventInfo;
struct FNPCAISceneEventTableRow;
struct FNPCAIComingExplosionEvent;
struct FNPCAIDamageEvent;
struct FNPCAINoiseEvent;
struct FNPCAISteepZoneDeleteStage;
struct FNPCAISteepZoneCalculatePointNormalStage;
struct FNPCAISteepZoneCalculatePointSteepDensityStage;
struct FNPCAISteepZoneCalculatePolyNormalStage;
struct FNPCAISteepZoneCollectNavMeshPolyStage;
struct FNPCAISteepZoneDeleter;
struct FNPCAISteepZoneGenerateSamplePointStage;
struct FNPCAISteepZoneModifyTileCacheStage;
struct FNPCAISteepZoneRebuildNavMeshStage;
struct FSteepZoneSamplePoint;
struct FSteepZoneNavMeshPoly;
struct FSteepZoneDetailTriangle;
struct FSteepZoneDeleteSettings;
struct FAIGroupAllyDeathInfo;
struct FAITrackLOGTemplateForDataTable;
struct FAITrackLOG;
struct FAIActorArray;
struct FAICaredVehicleInfo;
struct FAILocationMonitor;
struct FAILocationRecord;
struct FAIPathDebugInfo;
struct FAIDebugLineStruct;
struct FAIDebugDrawSphereInfo;
struct FAIDebugDrawLineInfo;
struct FAIShotCountStat;
struct FPMCAISpawnInfo_ForSearchPath;
struct FCheckCoverPointFinder;
struct FAIBackUpCoverPointFinder;
struct FAICoverPointInfo;
struct FAICharacterConfig;
struct FAIIDSegInfoData;
struct FAIIDSegInfo;
struct FAIStackGunRecord;
struct FNPCAIRollDecisionStruct;
struct FNPCAIFireSetting;
struct FNPCAIFireOrder;
struct FAIBodyPartVisibilityInfo;
struct FAIBodyPartHitInfo;
struct FAIBodyBulkAimingChoice;
struct FAIBodyPartAimingChoice;
struct FAINoiseMakerInfo;
struct FAIVisibleResult;
struct FAISenseDrone;
struct FAISenseSightNormal;
struct FNPCAIWeaponConfigTableRow;
struct FAIAreaWeightQueryInfo;
struct UAIRuntimeMonitor;
struct UAISceneEventMessage;
struct UAISceneEvent_SpawnAI;
struct UAISceneEventsTriggerManager;
struct UAISGDoorManager;
struct UBehaviorTreeTooler;
struct ANavLinkProxyGenerator;
struct UNPCAIActorComponent;
struct INPCAIAimingInterface;
struct INPCAIAllyControllerCompoentInterface;
struct UNPCAIAntiCamperComponent;
struct INPCAIAreaVolumeInterface;
struct UNPCAIAsyncTaskBase;
struct USGBaseAISubsystem;
struct UNPCAIAsyncTaskSystem;
struct UNPCAIAttentionPoint;
struct INPCAIBattleVolumeInterface;
struct INPCAIBehaviorLODInterface;
struct INPCAICharacterInterface;
struct INPCAIControllerInterface;
struct UNPCAICoverEnvQueryData;
struct UNPCAICoverEnvQueryGenerator;
struct UNPCAICoverEnvQueryTest_CanAttackTo;
struct UNPCAICoverEnvQueryTest_CanContain;
struct UNPCAICoverEnvQueryTest_CloserRatio;
struct UNPCAICoverEnvQueryTest_CoverDist;
struct UNPCAICoverEnvQueryTest_DefenceAngle;
struct UNPCAICoverEnvQueryTest_DefenceRatio;
struct UNPCAICoverEnvQueryTest_DistanceToAllyCover;
struct UNPCAICoverEnvQueryTest_DistanceToHotPoint;
struct UNPCAICoverEnvQueryTest_IsFree;
struct UNPCAICoverEnvQueryTest_IsInCone;
struct UNPCAICoverEnvQueryTest_IsNear;
struct UNPCAICoverEnvQueryTest_IsSafe;
struct UNPCAICoverEnvQueryTest_IsSameSideToTarget;
struct UNPCAICoverEnvQueryTest_PathLength;
struct UNPCAICoverEnvQueryTest_Protection;
struct UNPCAICoverEnvQueryTest_ShootDistance;
struct UNPCAICoverSystemStatics;
struct UNPCAIDamageData;
struct INPCAIDoorInterface;
struct INPCAIDoorOpenInterface;
struct UNPCAIDynamicGroupInfo;
struct UNPCAITargetInfoBase;
struct UNPCAIEnemyGroupSingleInfo;
struct UNPCAIEnvQueryGenerator_BlueprintBase;
struct UNPCAIEnvQueryGenerator_OnPolyCenter;
struct UNPCAIEnvQueryInstanceBlueprintWrapper;
struct UNPCAIEnvQueryItemType_CoverPoint;
struct UNPCAIEnvQueryManager;
struct UNPCAIEnvQueryTest_BlueprintBase;
struct UNPCAIEnvQueryTest_PathfindingFromQuerier;
struct UNPCAIEnvQueryTest_PointBase;
struct UNPCAIEQSSystemStatics;
struct UNPCAISubsystemBase;
struct UNPCAIEventSubsystem;
struct UNPCAIFactionComponent;
struct UNPCAIFactionPluginBase;
struct UNPCAIFactionPlugin;
struct UNPCAIFindAmbushAgainstPointAsyncTask;
struct UNPCAIFindPathByKeyRouteAsyncTask;
struct INPCAIGameStateDebugInterface;
struct INPCAIGlobalManagerInterface;
struct UNPCAIGlobalSettings;
struct UNPCAIGlobalSharedInfo;
struct UNPCAIGoalTarget;
struct UNPCAIGroupBaseRequest;
struct UNPCAIGroupCustomRequest;
struct UNPCAISubSystemComponent;
struct UNPCAIGroupRequestComponent;
struct UNPCAIGroupRequestController;
struct ANPCAIHNavActor;
struct ANPCAILaunchPad;
struct UNPCAITestingRenderingComponent;
struct UNPCAILocalNavigationRenderingComponent;
struct UNPCAINavSubsystemBase;
struct UNPCAILocalNavigationSubsystem;
struct ANPCAITestingActor;
struct ANPCAILocalNavigationTestingActor;
struct UNPCAIMemorySystemComponent;
struct UNPCAIPropertyProfileBase;
struct UNPCAIModifierProfile;
struct UAIModifierAIDataProfile;
struct UNPCAIProfileBaseComponent;
struct UNPCAIModifierComponent;
struct UNPCAIModifierComponent_AIData;
struct UAIModifierAITypeProfile;
struct UNPCAIModifierComponent_AIType;
struct UAIModifierArmorProfile;
struct UNPCAIModifierComponent_Armor;
struct UAIModifierDamageProfile;
struct UNPCAIModifierComponent_Damage;
struct UNPCAIMoverSystemComponent;
struct UNPCAIMultiTargetSystemComponent;
struct UNPCAIMultiTargetSelectorComponent;
struct UNPCAINavConnectivitySystem;
struct UNPCAINavCostSubsystem;
struct UNPCAINavDebugSystem;
struct UNPCAINavExperimentSystem;
struct UNPCAINavigationStatics;
struct UNPCAINavigationSystem;
struct UNPCAINavigationSystemConfig;
struct ANPCAINavigationTestingActor;
struct INPCAINavLinkProxyInterface;
struct ANPCAINavLinkProxy;
struct ANPCAINavMeshManager;
struct UNPCAINavMeshRenderingComponent;
struct ANPCAINavMeshTestingActor;
struct ANPCAINavModifierVolume;
struct UNPCAINavPlatformComponent;
struct UNPCAINavMovablePlatformComponent;
struct UNPCAINavPlatformSystem;
struct UNPCAINavRuntimeSystem;
struct ANPCAINavSkeletonForcePoint;
struct UNPCAINavSkeletonSystem;
struct UNPCAINavSteepZoneSystem;
struct UNavArea_Burning;
struct UNavArea_TearGas;
struct UNavArea_TripMine;
struct UNavArea_Claymore;
struct UNavArea_Paradrop;
struct UNavArea_Vehicle;
struct UNavArea_UnderPlatform;
struct UNavArea_Avoid;
struct UNavArea_Color0;
struct UNavArea_Color1;
struct UNavArea_Color2;
struct UNavArea_Color3;
struct UNavArea_Color4;
struct UNavArea_Color5;
struct UNavArea_Color6;
struct UFloodSeedCollection;
struct ANavPathPointActor;
struct UNavigationQueryFilter_DontVault;
struct UNavigationQueryFilter_Diversity;
struct UAINavGenerationSettings;
struct UNPCAINavUtilitySystem;
struct UNPCAIPathFollowingComponent;
struct UNPCAIPeekPointAsyncTask;
struct ANPCAIPerceptionAssistActor;
struct UNPCAIPerceptionComponent;
struct ANPCAIPerceptionDynamicActor;
struct UNPCAIPerceptionSystem;
struct UNPCAIProfile;
struct UNPCAIPropertyProfile;
struct UNPCAIPropertyComponent;
struct UAIPropertyAimingProfile;
struct UNPCAIPropertyComponent_Aiming;
struct UAIPropertyAITypeProfile;
struct UNPCAIPropertyComponent_AIType;
struct UAIPropertyBlockProfile;
struct UNPCAIPropertyComponent_Block;
struct UAIPropertyBossProfile;
struct UNPCAIPropertyComponent_Boss;
struct UAIPropertyCoreProfile;
struct UNPCAIPropertyComponent_Core;
struct UAIPropertyCurveProfile;
struct UNPCAIPropertyComponent_Curve;
struct UAIPropertyDamageProfile;
struct UNPCAIPropertyComponent_Damage;
struct UAIPropertyGlobalProfile;
struct UNPCAIPropertyComponent_Global;
struct UAIPropertyGrenadeProfile;
struct UNPCAIPropertyComponent_Grenade;
struct UAIPropertyHealthProfile;
struct UNPCAIPropertyComponent_Health;
struct UAIPropertyHearingProfile;
struct UNPCAIPropertyComponent_Hearing;
struct UAIPropertyLayProfile;
struct UNPCAIPropertyComponent_Lay;
struct UAIPropertyLookProfile;
struct UNPCAIPropertyComponent_Look;
struct UAIPropertyMindProfile;
struct UNPCAIPropertyComponent_Mind;
struct UAIPropertyMoveProfile;
struct UNPCAIPropertyComponent_Move;
struct UAIPropertyNavProfile;
struct UNPCAIPropertyComponent_Nav;
struct UAIPropertyPlayerActionReactionProfile;
struct UNPCAIPropertyComponent_PlayerActionReaction;
struct UAIPropertyRequestRunProfile;
struct UNPCAIPropertyComponent_RequestRun;
struct UAIPropertyShootProfile;
struct UNPCAIPropertyComponent_Shoot;
struct UAIPropertySmartProfile;
struct UNPCAIPropertyComponent_Smart;
struct UAIPropertySoundProfile;
struct UNPCAIPropertyComponent_Sound;
struct UAIPropertyStrategyProfile;
struct UNPCAIPropertyComponent_Strategy;
struct UAIPropertyTacticProfile;
struct UNPCAIPropertyComponent_Tactic;
struct UAIPropertyWeaponProfile;
struct UNPCAIPropertyComponent_Weapon;
struct UNPCAIQueryRoundEnvironmentAsyncTask;
struct ANPCAIRecastNavMesh;
struct INPCAIRecoilInterface;
struct INPCAIRLAgentComponentInterface;
struct UNPCAIRoleComponent;
struct UNPCAIRoleModifierComponent;
struct UNPCAISense_ComingExplosion;
struct UNPCAISense_Damage;
struct UNPCAISense_Hearing;
struct UNPCAISense_Sight;
struct UNPCAISenseConfig_ComingExplosion;
struct UNPCAISenseConfig_Damage;
struct UNPCAISenseConfig_Hearing;
struct UNPCAISenseConfig_Sight;
struct UNPCAISenseEvent_ComingExplosion;
struct UNPCAISenseEvent_Damage;
struct INPCAISenseSourceInterface;
struct UNPCAISettingsComponent;
struct ANPCAISpawnPoint;
struct UNPCAIStatics;
struct INPCAIStaticsInterface;
struct UNPCAISteepZoneRenderingComponent;
struct ANPCAISteepZoneTestingActor;
struct INPCAISteeringInterface;
struct UNPCAISubSystemStatics;
struct UNPCAISystem;
struct UNPCAITacticSystemComponent;
struct UNPCAITargetInfo;
struct UNPCAITeam;
struct INPCAITeamInterface;
struct UNPCAIThrowSystem;
struct UAITrackLOGUnit;
struct UNPCAITrackLogger;
struct UAIPortraitBase;
struct UAIPortraitDefault;
struct INPCAIUALootSubAreaVolumeInterface;
struct INPCAIVehicleInterface;
struct INPCAIVolumeInterface;
struct UNPCAIZoneGroupInfo;
struct UNPCBTDecorator;
struct UNPCBTDecorator_AIPropertyComparison;
struct UNPCBTDecorator_BBConditionBase;
struct UNPCBTDecorator_BBConditionBool;
struct UNPCBTDecorator_BBConditionFloat;
struct UNPCBTDecorator_BBConditionInt;
struct UNPCBTDecorator_BBConditionObject;
struct UNPCBTDecorator_BBConditionString;
struct UNPCBTDecorator_BlueprintBase;
struct UNPCBTDecorator_CheckComponent;
struct UNPCBTDecorator_HasSuspectPoints;
struct UNPCBTDecorator_IsCloseEnough;
struct UNPCBTDecorator_ShouldWaitAtPathNode;
struct UNPCBTDecorator_SingletonBlueprintBase;
struct UNPCBTDecorator_TickIntervalBase;
struct UNPCBTDecorator_Wait;
struct UNPCBTService;
struct UNPCBTService_BlueprintBase;
struct UNPCBTService_FindRandomPosition;
struct UNPCBTService_SetSenseRangeScale;
struct UNPCBTService_SetVisionHalfAngle;
struct UNPCBTService_SingletonBlueprintBase;
struct UNPCBTTask_BlueprintBase;
struct UNPCBTTask_LatenTaskBase;
struct UNPCBTTask_AimAndFireEnemy;
struct UNPCBTTaskNode;
struct UNPCBTTask_AttackEnemy;
struct UNPCBTTask_CalcNextAttackPosition;
struct UNPCBTTask_CalcNextWanderPathNode;
struct UNPCBTTask_ClearFocalPoint;
struct UNPCBTTask_DBNORescue;
struct UNPCBTTask_FireEnemy;
struct UNPCBTTask_FireEnemyEx;
struct UNPCBTTask_FollowPathNode;
struct UNPCBTTask_MeleeAttackEnemy;
struct UNPCBTTask_MoveToEx;
struct UNPCBTTask_PlayAkSound;
struct UNPCBTTask_ResetTargetLocation;
struct UNPCBTTask_SetAIPose;
struct UNPCBTTask_SetBlackboardValue;
struct UNPCBTTask_SetFocalPoint;
struct UNPCBTTask_SetMovementSpeed;
struct UNPCBTTask_SetSenseRangeScale;
struct UNPCBTTask_SetTargetHatred;
struct UNPCBTTask_SetVisionHalfAngle;
struct UNPCBTTask_StartShoulderAimingTarget;
struct UNPCBTTask_StopShoulderAimingTarget;
struct INPCCharacterAIDBNOInterface;
struct INPCCharacterAIDeathInterface;
struct INPCCharacterAIDebugInterface;
struct INPCCharacterAIExplodeInterface;
struct INPCCharacterAIFireInterface;
struct INPCCharacterAIIKInterface;
struct INPCCharacterAIInventoryInterface;
struct INPCCharacterAIMoveInterface;
struct INPCCharacterAIPathNodeInterface;
struct INPCCharacterAIPerceptionInterface;
struct INPCCharacterAIPickUpInterface;
struct INPCCharacterAIPoseCacheInterface;
struct INPCCharacterAIPoseInterface;
struct INPCCharacterAISenseAbilityInterface;
struct INPCCharacterAISoundInterface;
struct INPCCharacterAITakeCoverInterface;
struct INPCCharacterAITeamRescueInterface;
struct INPCCharacterAITurnInterface;
struct INPCCharacterHealthInterface;
struct INPCCharacterTakeDamageInterface;
struct INPCDroneCharacterInterface;
struct ANPCGrassIdentificationVolume;
struct ISGActorFactionCompInterface;
struct ISGFactionInterface;
struct ISGTeamInterface;

// Object: Enum MFNPCAI.EMFGraphAStarResult
enum class EMFGraphAStarResult : uint8_t
{
	WaitToSearch = 0,
	SearchFail = 1,
	SearchInProgress = 2,
	SearchAborted = 3,
	SearchDone = 4,
	SearchSuccess = 5,
	GoalUnreachable = 6,
	InfiniteLoop = 7,
	NotFound = 8,
	RequestNotFound = 9,
	EMFGraphAStarResult_MAX = 10
};

// Object: Enum MFNPCAI.ENPCAIGoDirectlyResult
enum class ENPCAIGoDirectlyResult : uint8_t
{
	Success = 0,
	ReachBoundary = 1,
	AIPawnNotFound = 2,
	ENPCAIGoDirectlyResult_MAX = 3
};

// Object: Enum MFNPCAI.ENPCAICellGridValue
enum class ENPCAICellGridValue : uint8_t
{
	None = 0,
	NoNavMesh = 1,
	Vehicle = 2,
	BreakableObj = 4,
	Paradrop = 8,
	ENPCAICellGridValue_MAX = 9
};

// Object: Enum MFNPCAI.EAISpawnSceneEvtType
enum class EAISpawnSceneEvtType : uint8_t
{
	None = 0,
	TriggerEvent = 1,
	SpawnVector = 2,
	AutoFillVectorAI = 3,
	SpawnAllyAI = 4,
	EAISpawnSceneEvtType_MAX = 5
};

// Object: Enum MFNPCAI.EAISceneEventState
enum class EAISceneEventState : uint8_t
{
	Trigger = 0,
	Completed = 1,
	Expired = 2,
	Removed = 3,
	EAISceneEventState_MAX = 4
};

// Object: Enum MFNPCAI.EAIAimingType
enum class EAIAimingType : uint8_t
{
	Normal = 0,
	Regular = 1,
	EAIAimingType_MAX = 2
};

// Object: Enum MFNPCAI.EAIAimStatus
enum class EAIAimStatus : uint8_t
{
	Aiming = 0,
	NoTarget = 1,
	AimComplete = 2,
	EAIAimStatus_MAX = 3
};

// Object: Enum MFNPCAI.ENPCAIAsyncTaskType
enum class ENPCAIAsyncTaskType : uint8_t
{
	None = 0,
	FindAmbushAgainstPoint = 1,
	PeekPoint = 2,
	FindPathByKeyRoute = 3,
	QueryRoundEnvironment = 4,
	ENPCAIAsyncTaskType_MAX = 5
};

// Object: Enum MFNPCAI.ENPCPlaceForCheckType
enum class ENPCPlaceForCheckType : uint8_t
{
	Simple = 0,
	Danger = 1,
	Suspicious = 2,
	Fatal = 3,
	GrenadeHit_Near = 4,
	GrenadeHit_Far = 5,
	GrenadeComeing = 6,
	FarFootStep = 7,
	CloseFootStep = 8,
	FarGunFire = 9,
	CloseGunFire = 10,
	GrenadeHolding = 11,
	Fuzzy = 12,
	CloseVehicleNoise = 13,
	FarVehicleNoise = 14,
	VehicleRushMe = 15,
	CloseVehicleHorn = 16,
	FarVehicleHorn = 17,
	Drone = 18,
	ENPCPlaceForCheckType_MAX = 19
};

// Object: Enum MFNPCAI.EAIProfileEditState
enum class EAIProfileEditState : uint8_t
{
	None = 0,
	ChoosingProperty = 1,
	EditingProperty = 2,
	Comparing = 3,
	EAIProfileEditState_MAX = 4
};

// Object: Enum MFNPCAI.EAIProfileCoverType
enum class EAIProfileCoverType : uint8_t
{
	CoverType_None = 0,
	CoverType_int32 = 1,
	CoverType_int64 = 2,
	CoverType_float = 3,
	CoverType_bool = 4,
	CoverType_Byte = 5,
	CoverType_Enum = 6,
	CoverType_Set = 7,
	CoverType_Array = 8,
	CoverType_Map = 9,
	CoverType_Vector = 10,
	CoverType_AIMindGoalEnemyAngleMultiple = 11,
	CoverType_AIBodyBulkAimingChoice = 12,
	CoverType_AISenseSightNormal = 13,
	CoverType_String = 14,
	CoverType_Object = 15,
	CoverType_SoftClassPtr = 16,
	CoverType_MAX = 17
};

// Object: Enum MFNPCAI.ENPCAIMovementKind
enum class ENPCAIMovementKind : uint8_t
{
	GotoPoint = 0,
	GoDirectly = 1,
	GoAccordingToWayPoints = 2,
	ENPCAIMovementKind_MAX = 3
};

// Object: Enum MFNPCAI.ENPCAIMoveResult
enum class ENPCAIMoveResult : uint8_t
{
	None = 0,
	WaitPerform = 1,
	Succeeded = 2,
	Failed = 3,
	Aborted = 4,
	InProgress = 5,
	ENPCAIMoveResult_MAX = 6
};

// Object: Enum MFNPCAI.EGetLinkUsageCountStatus
enum class EGetLinkUsageCountStatus : uint8_t
{
	Success = 0,
	GetNavMeshManagerFailed = 1,
	GetSourceRegionIndexFailed = 2,
	GetTargetRegionIndexFailed = 3,
	RegionIndexNotValidNodeIndex = 4,
	RegionIndexNotValidAdjacencyIndex = 5,
	Unreachable = 6,
	EGetLinkUsageCountStatus_MAX = 7
};

// Object: Enum MFNPCAI.ENavLinkType
enum class ENavLinkType : uint8_t
{
	None = 0,
	Door = 1,
	Cabinet = 2,
	JumpDown = 3,
	JumpForward = 4,
	Climb = 5,
	Vault = 6,
	HighClimb = 7,
	HighVault = 8,
	ENavLinkType_MAX = 9
};

// Object: Enum MFNPCAI.ENavSkeletonPointGetterFlag
enum class ENavSkeletonPointGetterFlag : uint16_t
{
	None = 0,
	LinkId = 1,
	NeighbourIndices = 2,
	VisibleIndices = 3,
	All = 255,
	ENavSkeletonPointGetterFlag_MAX = 256
};

// Object: Enum MFNPCAI.ENavSkeletonDivergenceMethod
enum class ENavSkeletonDivergenceMethod : uint8_t
{
	Laplacian = 0,
	GradientFlux = 1,
	Neighbour = 2,
	ENavSkeletonDivergenceMethod_MAX = 3
};

// Object: Enum MFNPCAI.ENavSkeletonSamplePointKind
enum class ENavSkeletonSamplePointKind : uint8_t
{
	None = 0,
	Isolate = 1,
	Endpoint = 2,
	Normal = 3,
	KeptNormal = 4,
	DoorLink = 5,
	Junction = 6,
	ENavSkeletonSamplePointKind_MAX = 7
};

// Object: Enum MFNPCAI.ENavSkeletonSamplePointDropReason
enum class ENavSkeletonSamplePointDropReason : uint8_t
{
	None = 0,
	CannotBeSkeletonPoint = 1,
	FindDistanceToWallFailed = 2,
	TooCloseToWall = 3,
	InvalidWallHitNormal = 4,
	MismatchedNeighbours = 5,
	InvalidGradientSize = 6,
	InvalidDivergence = 7,
	TooLessWallCount = 8,
	Isolated = 9,
	NotMainPoint = 10,
	CloseToAnotherMainPoint = 11,
	CannotFindProperPointToConnect = 12,
	InvalidPointKind = 13,
	BeSimplified = 14,
	InPrunedEndBranch = 15,
	Count = 16,
	ENavSkeletonSamplePointDropReason_MAX = 17
};

// Object: Enum MFNPCAI.EPathExistenceTestMode
enum class EPathExistenceTestMode : uint8_t
{
	Regular = 0,
	Hierarchical = 1,
	EPathExistenceTestMode_MAX = 2
};

// Object: Enum MFNPCAI.ENavAreaKind
enum class ENavAreaKind : uint8_t
{
	Burning = 0,
	TearGas = 1,
	TripMine = 2,
	Claymore = 3,
	Paradrop = 4,
	ENavAreaKind_MAX = 5
};

// Object: Enum MFNPCAI.ENavMeshTileLabel
enum class ENavMeshTileLabel : uint16_t
{
	AllPolysReachable = 0,
	PartialPolysReachable = 1,
	InvalidBeginIndex = 2,
	ConsiderUnreachablePolys = 252,
	AllPolysUnreachable = 253,
	InvalidHeader = 254,
	Unknown = 255,
	ENavMeshTileLabel_MAX = 256
};

// Object: Enum MFNPCAI.EMETIS_OBJTYPE
enum class EMETIS_OBJTYPE : uint8_t
{
	METIS_OBJTYPE_CUT = 0,
	METIS_OBJTYPE_VOL = 1,
	METIS_OBJTYPE_NODE = 2,
	METIS_OBJTYPE_MAX = 3
};

// Object: Enum MFNPCAI.EMETIS_RTYPE
enum class EMETIS_RTYPE : uint8_t
{
	METIS_RTYPE_FM = 0,
	METIS_RTYPE_GREEDY = 1,
	METIS_RTYPE_SEP2SIDED = 2,
	METIS_RTYPE_SEP1SIDED = 3,
	METIS_RTYPE_MAX = 4
};

// Object: Enum MFNPCAI.EMETIS_IPTYPE
enum class EMETIS_IPTYPE : uint8_t
{
	METIS_IPTYPE_GROW = 0,
	METIS_IPTYPE_RANDOM = 1,
	METIS_IPTYPE_EDGE = 2,
	METIS_IPTYPE_NODE = 3,
	METIS_IPTYPE_METISRB = 4,
	METIS_IPTYPE_MAX = 5
};

// Object: Enum MFNPCAI.EMETIS_CTYPE
enum class EMETIS_CTYPE : uint8_t
{
	METIS_CTYPE_RM = 0,
	METIS_CTYPE_SHEM = 1,
	METIS_CTYPE_MAX = 2
};

// Object: Enum MFNPCAI.EMETIS_PTYPE
enum class EMETIS_PTYPE : uint8_t
{
	METIS_PTYPE_RB = 0,
	METIS_PTYPE_KWAY = 1,
	METIS_PTYPE_MAX = 2
};

// Object: Enum MFNPCAI.ENPCAIDisableFocusReason
enum class ENPCAIDisableFocusReason : uint8_t
{
	None = 0,
	Debugging = 1,
	ENPCAIDisableFocusReason_MAX = 2
};

// Object: Enum MFNPCAI.ENPCAIPausePathFollowReason
enum class ENPCAIPausePathFollowReason : uint8_t
{
	None = 0,
	Debugging = 1,
	Attacking = 2,
	Falling = 3,
	PuppetPause = 4,
	Die = 5,
	Land = 6,
	ENPCAIPausePathFollowReason_MAX = 7
};

// Object: Enum MFNPCAI.EnumAIGrassType
enum class EnumAIGrassType : uint8_t
{
	E_Foliage = 0,
	E_Landscape = 1,
	E_MAX = 2
};

// Object: Enum MFNPCAI.EnumAIGrassDebugBox
enum class EnumAIGrassDebugBox : uint8_t
{
	E_NONE = 0,
	E_Foliage = 1,
	E_Landscape = 2,
	E_FoliageCylinders = 3,
	E_ALL = 4,
	E_MAX = 5
};

// Object: Enum MFNPCAI.EAILODActionPlan
enum class EAILODActionPlan : uint8_t
{
	NoLOD = 0,
	Normal = 1,
	Elite = 2,
	Boss = 3,
	Puppet = 4,
	EAILODActionPlan_MAX = 5
};

// Object: Enum MFNPCAI.EAimingType
enum class EAimingType : uint8_t
{
	Normal = 0,
	Regular = 1,
	EAimingType_MAX = 2
};

// Object: Enum MFNPCAI.ENPCAISceneEventID
enum class ENPCAISceneEventID : uint8_t
{
	None = 0,
	Armory_Alarm_EscapeG1 = 1,
	Armory_Alarm_EscapeWater = 2,
	Valley_Alarm_BossHouse = 3,
	Valley_Alarm_BossFactory = 4,
	CallHelp = 5,
	ArmoryAlarmEscapeMine = 6,
	TVStation_Escape_Elevator = 7,
	ArmoryAlarmEscapeBunker = 8,
	Call_Defender_TVStation = 9,
	ENPCAISceneEventID_MAX = 10
};

// Object: Enum MFNPCAI.ESteepZoneSamplePointDropReason
enum class ESteepZoneSamplePointDropReason : uint8_t
{
	None = 0,
	InvalidTrace = 1,
	StartPenetrating = 2,
	WalkableFloor = 3,
	NotEnoughNeighbours = 4,
	Count = 5,
	ESteepZoneSamplePointDropReason_MAX = 6
};

// Object: Enum MFNPCAI.ESteepZoneNavMeshPolyDropReason
enum class ESteepZoneNavMeshPolyDropReason : uint8_t
{
	None = 0,
	GetTileAndPolyByRefFailed = 1,
	NotPoly = 2,
	InvalidNormal = 3,
	ValidIncludedAngle = 4,
	AllTrianglesDropped = 5,
	Count = 6,
	ESteepZoneNavMeshPolyDropReason_MAX = 7
};

// Object: Enum MFNPCAI.EAIKeyRouteQueryType
enum class EAIKeyRouteQueryType : uint8_t
{
	Safe = 0,
	Short = 1,
	EAIKeyRouteQueryType_MAX = 2
};

// Object: Enum MFNPCAI.ENPCSetPartType
enum class ENPCSetPartType : uint8_t
{
	None = 0,
	Close = 1,
	Middle = 2,
	Far = 3,
	ENPCSetPartType_MAX = 4
};

// Object: Enum MFNPCAI.EAITrackLOGType
enum class EAITrackLOGType : uint8_t
{
	Move = 0,
	AimingBodyPart = 1,
	AimingTime = 2,
	AimingPredestined = 3,
	Shoot = 4,
	BeHit = 5,
	Decision = 6,
	EAITrackLOGType_MAX = 7
};

// Object: Enum MFNPCAI.ENPCAITactic
enum class ENPCAITactic : uint8_t
{
	None = 0,
	CloseFight = 1,
	MidFight = 2,
	LongFight = 3,
	RushFace = 4,
	FlankAttack = 5,
	BackAround = 6,
	Hide = 7,
	RunAway = 8,
	ENPCAITactic_MAX = 9
};

// Object: Enum MFNPCAI.EAIMainType
enum class EAIMainType : uint8_t
{
	EAIMainType_Scav = 0,
	EAIMainType_Boss = 1,
	EAIMainType_Follower = 2,
	EAIMainType_PMCAI = 3,
	EAIMainType_TeachingAI = 4,
	EAIMainType_TestAI = 5,
	EAIMainType_Elit = 6,
	EAIMainType_Elit_PlayerScavAI = 7,
	EAIMainType_AllyAI = 8,
	EAIMainType_EventScav = 9,
	EAIMainType_Zombie_Normal = 10,
	EAIMainType_Zombie_Elit = 11,
	EAIMainType_Zombie_Boss = 12,
	EAIMainType_MAX = 13
};

// Object: Enum MFNPCAI.EAIEnemyVisibilityType
enum class EAIEnemyVisibilityType : uint8_t
{
	NotVisible = 0,
	VisibleBySense = 1,
	Visible = 2,
	EAIEnemyVisibilityType_MAX = 3
};

// Object: Enum MFNPCAI.EAIEnemyPriority
enum class EAIEnemyPriority : uint8_t
{
	EAIEnemyPriority_High = 0,
	EAIEnemyPriority_Medium = 1,
	EAIEnemyPriority_Low = 2,
	EAIEnemyPriority_MAX = 3
};

// Object: Enum MFNPCAI.EAIAimingBodyPartTrend
enum class EAIAimingBodyPartTrend : uint8_t
{
	None = 0,
	Armor = 1,
	NoArmor = 2,
	Fatal = 3,
	MinDamage = 4,
	EAIAimingBodyPartTrend_MAX = 5
};

// Object: Enum MFNPCAI.EAIBodyBulkType
enum class EAIBodyBulkType : uint8_t
{
	HeadGroup = 0,
	BodyGroup = 1,
	LegsGroup = 2,
	EAIBodyBulkType_MAX = 3
};

// Object: Enum MFNPCAI.EAIBodyPartType
enum class EAIBodyPartType : uint8_t
{
	EAIBodyPartType_Head = 0,
	EAIBodyPartType_Chest = 1,
	EAIBodyPartType_LefyArm = 2,
	EAIBodyPartType_RightArm = 3,
	EAIBodyPartType_LeftLeg = 4,
	EAIBodyPartType_RightLeg = 5,
	EAIBodyPartType_Stomach = 6,
	EAIBodyPartType_Max = 7
};

// Object: Enum MFNPCAI.ECrossShot_ToStance
enum class ECrossShot_ToStance : uint8_t
{
	Stand = 0,
	Crouch = 1,
	ECrossShot_MAX = 2
};

// Object: Enum MFNPCAI.EAISenseBehaviorType
enum class EAISenseBehaviorType : uint8_t
{
	None = 0,
	Loot = 1,
	EAISenseBehaviorType_MAX = 2
};

// Object: Enum MFNPCAI.EAISoundType
enum class EAISoundType : uint8_t
{
	EAISoundType_ConfirmTargetScream = 0,
	EAISoundType_MAX = 1
};

// Object: Enum MFNPCAI.ENPCAIPerceptibleTile
enum class ENPCAIPerceptibleTile : uint8_t
{
	None = 0,
	Bomb = 1,
	Stun = 2,
	Smoke = 3,
	Molotov = 4,
	C4 = 5,
	Flash = 6,
	FootSounder = 7,
	TearGas = 8,
	OffensiveGrenade = 9,
	TripMine = 10,
	ClaymoreMine = 11,
	SignalDetonator = 12,
	AlwaysOn = 13,
	RPG = 14,
	Monitor = 15,
	CustomIndex = 16,
	DefaultArea = 17,
	AvoidanceArea = 18,
	ObstacleArea = 19,
	ParadropArea = 20,
	VehicleArea = 21,
	UnderPlatform = 22,
	Unknown = 23,
	Max = 24
};

// Object: Enum MFNPCAI.EAIWorkResult
enum class EAIWorkResult : uint8_t
{
	Success = 0,
	Failed = 1,
	Wait = 2,
	EAIWorkResult_MAX = 3
};

// Object: Enum MFNPCAI.EAISenseSightConf
enum class EAISenseSightConf : uint8_t
{
	Normal = 0,
	Night = 1,
	Light = 2,
	EAISenseSightConf_MAX = 3
};

// Object: Enum MFNPCAI.ENPCAISenseChannel
enum class ENPCAISenseChannel : uint8_t
{
	NONE = 0,
	Weapon_Channel = 15,
	AISight_Channel = 25,
	ENPCAISenseChannel_MAX = 26
};

// Object: Enum MFNPCAI.EAISenseType
enum class EAISenseType : uint8_t
{
	ALL = 0,
	Sight = 1,
	Hearing = 2,
	Damage = 3,
	ComingExplosion = 4,
	EAISenseType_MAX = 5
};

// Object: Enum MFNPCAI.ENPCAISenseBarrier
enum class ENPCAISenseBarrier : uint8_t
{
	None = 0,
	Normal = 1,
	Grass = 2,
	ALLY = 3,
	OtherEnemy = 4,
	Smoke = 5,
	ENPCAISenseBarrier_MAX = 6
};

// Object: Enum MFNPCAI.ENPCAIPriority
enum class ENPCAIPriority : uint8_t
{
	Low = 0,
	Middle = 1,
	High = 2,
	Max = 3
};

// Object: Enum MFNPCAI.EAIGroupRequestPriority
enum class EAIGroupRequestPriority : uint8_t
{
	Low = 0,
	Normal = 1,
	Top = 2,
	Fatal = 3,
	EAIGroupRequestPriority_MAX = 4
};

// Object: Enum MFNPCAI.EAIProfileType
enum class EAIProfileType : uint8_t
{
	Aiming = 0,
	AIType = 1,
	Boss = 2,
	Core = 3,
	Curve = 4,
	Global = 5,
	Grenade = 6,
	Hearing = 7,
	Lay = 8,
	Look = 9,
	Mind = 10,
	Move = 11,
	Shoot = 12,
	Sound = 13,
	Weapon = 14,
	Damage = 15,
	Health = 16,
	PlayerActionReaction = 17,
	BTBlock = 18,
	Strategy = 19,
	Smart = 20,
	Tactic = 21,
	RequestRun = 22,
	Nav = 23,
	MAX = 24
};

// Object: Enum MFNPCAI.ENPCAIDecision
enum class ENPCAIDecision : uint8_t
{
	None = 0,
	RushFaceWhenDisable = 1,
	ShootFromCover = 2,
	ShootFromGround = 3,
	ShootPrecisely = 4,
	RushFaceWithAlly = 5,
	FindCoverToHide = 6,
	ChangeCoverAfterNotSafe = 7,
	MoveFurther = 8,
	MoveCloser = 9,
	MoveToFlank = 10,
	MoveToAttackPoint = 11,
	ChangeCover = 12,
	SearchEnemy = 13,
	HoldPosition = 14,
	BackToCover = 15,
	DogFight = 16,
	CautionInPlace = 17,
	CautionInCover = 18,
	CheckSuspiciousPoint = 19,
	SuspiciousPointClear = 20,
	GoToNextPathNode = 21,
	FollowTargetBoss = 22,
	StandAndLookAround = 23,
	PacingInPlace = 24,
	TakeMedicine = 25,
	CallHelp = 26,
	RushStrike = 27,
	RushFace = 28,
	LootNearby = 29,
	DodgeGrenade = 30,
	ThrowGrenade = 31,
	WaitInEscapeVolume = 32,
	ShootFootstepCreator = 33,
	KillDBNOEnemy = 34,
	SneakApproaching = 35,
	ReloadInGround = 36,
	ReloadInCover = 37,
	Overwatch = 38,
	ActiveAlarmDevice = 39,
	Escape = 40,
	DodgeFire = 41,
	ThrowSmoke = 42,
	ProneShoot = 43,
	FindPronePoint = 44,
	CrouchShoot = 45,
	ProneSuppress = 46,
	CrouchSuppress = 47,
	StandSuppress = 48,
	DualCharge = 49,
	DualGuard = 50,
	Retreat = 51,
	ChangeCoverAfterNotAdvantage = 52,
	QuickToHide = 53,
	ChangeCoverToCrouch = 54,
	CrouchAimingInCover = 55,
	CallForHelp = 56,
	RidiculeVoice = 57,
	StayInPlace = 58,
	PositionAdjustment = 59,
	DodgeAttackMove = 60,
	MoveToLocNeedArrive = 61,
	SmokeToAssistHide = 62,
	TacticAction_RushFace = 63,
	GrenadeToPeek = 64,
	DodgeGrenadeHold = 65,
	TeamMove = 66,
	ThrowStepCreator = 67,
	SuppressionChangeClose = 68,
	SuppressionInPlace = 69,
	SuppressionControlDistance = 70,
	SuppressionDoor = 71,
	OutBattleVolume = 72,
	SlientDefenseDoor = 73,
	SlientDefenseChangeFar = 74,
	SlientDefenseControlDistance = 75,
	HoldAreaWithWall = 76,
	HoldRoomWithWall = 77,
	FootStepCreatorMoveClose = 78,
	FootStepCreatorMoveFar = 79,
	OpenDoorRush = 80,
	OpenDoorSlient = 81,
	MoveToDoorSafePoint = 82,
	EscapeRush = 83,
	EscapeSlient = 84,
	DodgeFlashProjectile = 85,
	RandomRangeShoot = 86,
	GrassMove = 87,
	ProtectSafeBox = 88,
	PeekFromPeekMark = 89,
	PlaceTrapDevice = 90,
	CallHelpOnHit = 91,
	AroundFindEnemy = 92,
	AlwaysReload = 93,
	MeleeAttackOnReload = 94,
	TakeMedicineOnHit = 95,
	FoolShootOnHit = 96,
	BattleShow = 97,
	OutOfBattleAct = 98,
	OutOfAllyRange = 99,
	WildlyShootInCover = 100,
	AntiCamper = 101,
	TeamOrder_StayInLoc = 102,
	TeamOrder_AttackAndBack = 103,
	ENPCAIDecision_MAX = 104
};

// Object: Enum MFNPCAI.EAIPerformance
enum class EAIPerformance : uint8_t
{
	None = 0,
	Camp1 = 1,
	Camp2 = 2,
	Camp3 = 3,
	Camp4 = 4,
	Camp5 = 5,
	Camp6 = 6,
	Camp7 = 7,
	Camp8 = 8,
	Camp9 = 9,
	Camp10 = 10,
	Camp11 = 11,
	Camp12 = 12,
	Camp13 = 13,
	Camp14 = 14,
	Boss1 = 15,
	Boss2 = 16,
	Boss3 = 17,
	Boss4 = 18,
	Boss5_1 = 19,
	Boss5_2 = 20,
	Boss5_3 = 21,
	Boss_6 = 22,
	Boss_7 = 23,
	EventBoss1 = 24,
	EventBoss2 = 25,
	EventBoss3 = 26,
	EventFollower1 = 27,
	EventFollower2 = 28,
	Follower1 = 29,
	Follower2 = 30,
	Follower3 = 31,
	Follower4 = 32,
	Follower5 = 33,
	Follower5_3 = 34,
	Follower_6_1 = 35,
	Follower_6_2 = 36,
	Follower_6_3 = 37,
	Follower_6_4 = 38,
	Follower_6_5 = 39,
	Follower_6_6 = 40,
	Follower7 = 41,
	PMC1 = 42,
	PlayerScav1 = 43,
	EventScav1_1 = 44,
	EventScav1_2 = 45,
	EventScav2 = 46,
	EventScav3 = 47,
	EventBossDoss1 = 48,
	EventFollowerDoss1 = 49,
	EventFollowerDoss2 = 50,
	EventGnesk = 51,
	Event_260_Camp3 = 52,
	Event_260_Camp6 = 53,
	Event_260_Camp14 = 54,
	Camp15 = 55,
	Boss_8 = 56,
	Boss_9_1 = 57,
	Boss_9_2 = 58,
	Boss_9_3 = 59,
	Boss_9_4 = 60,
	EAIPerformance_MAX = 61
};

// Object: Enum MFNPCAI.EAISenseSourceType
enum class EAISenseSourceType : uint8_t
{
	EAISenseSourceType_Grenade = 0,
	EAISenseSourceType_MAX = 1
};

// Object: Enum MFNPCAI.EBlackboardEntryCondition
enum class EBlackboardEntryCondition : uint8_t
{
	BlackboardEntryCondition_Equal = 0,
	BlackboardEntryCondition_Greater = 1,
	BlackboardEntryCondition_Less = 2,
	BlackboardEntryCondition_MAX = 3
};

// Object: Enum MFNPCAI.ENPCKnowWeather
enum class ENPCKnowWeather : uint8_t
{
	Normal = 0,
	Fog = 1,
	ENPCKnowWeather_MAX = 2
};

// Object: Enum MFNPCAI.ENPCWeakenDebuffType
enum class ENPCWeakenDebuffType : uint8_t
{
	LoseSight = 0,
	Tinnitus = 1,
	Slowdown = 2,
	ENPCWeakenDebuffType_MAX = 3
};

// Object: Enum MFNPCAI.EUANPCAllyOrder
enum class EUANPCAllyOrder : uint8_t
{
	None = 0,
	Stop = 1,
	ChangeDetil = 2,
	Protect = 3,
	Move = 4,
	Reconnoiter = 5,
	ThrowGrenade = 6,
	Attack = 7,
	Follow = 8,
	SearchEnemy = 9,
	EUANPCAllyOrder_MAX = 10
};

// Object: Enum MFNPCAI.ENPCAIJobType
enum class ENPCAIJobType : uint8_t
{
	None = 0,
	AIPuppet = 1,
	AIFakeman = 2,
	AIHidingmain = 3,
	ENPCAIJobType_MAX = 4
};

// Object: Enum MFNPCAI.ENPCAICharacterType
enum class ENPCAICharacterType : uint8_t
{
	None = 0,
	AI = 1,
	Zombie = 2,
	ENPCAICharacterType_MAX = 3
};

// Object: Enum MFNPCAI.ENPCPanicType
enum class ENPCPanicType : uint8_t
{
	None = 0,
	Run = 1,
	Crouch = 2,
	Prone = 3,
	ENPCPanicType_MAX = 4
};

// Object: Enum MFNPCAI.EAILiveState
enum class EAILiveState : uint8_t
{
	None = 0,
	Spawned = 1,
	Actived = 2,
	Dead = 3,
	EAILiveState_MAX = 4
};

// Object: Enum MFNPCAI.EAIMoveType
enum class EAIMoveType : uint8_t
{
	AIMoveType_Walk = 0,
	AIMoveType_Run = 1,
	AIMoveType_Sprint = 2,
	AIMoveType_MAX = 3
};

// Object: Enum MFNPCAI.EAILeanType
enum class EAILeanType : uint8_t
{
	AILeanType_Center = 0,
	AILeanType_Left = 1,
	AILeanType_Right = 2,
	AILeanType_MAX = 3
};

// Object: Enum MFNPCAI.EAIPerceptionTargetType
enum class EAIPerceptionTargetType : uint8_t
{
	None = 0,
	Player = 1,
	OtherAI = 2,
	DroneActor = 3,
	EAIPerceptionTargetType_MAX = 4
};

// Object: Enum MFNPCAI.EAIPose
enum class EAIPose : uint8_t
{
	AIPose_Stand = 0,
	AIPose_Crouch = 1,
	AIPose_Prone = 2,
	AIPose_Slide = 3,
	AIPose_Move = 4,
	AIPose_Vehicle = 5,
	AIPose_MAX = 6
};

// Object: Enum MFNPCAI.EAISpecialFireType
enum class EAISpecialFireType : uint8_t
{
	EAISpecialFireType_Miss = 0,
	EAISpecialFireType_MAX = 1
};

// Object: Enum MFNPCAI.EAILookPointMode
enum class EAILookPointMode : uint8_t
{
	ToMovingDirection = 0,
	ToCustomPoint = 1,
	NoSteering = 2,
	EAILookPointMode_MAX = 3
};

// Object: ScriptStruct MFNPCAI.NavSkeletonGraphFindResult
// Size: 0x38 (Inherited: 0x0)
struct FNavSkeletonGraphFindResult
{
	EMFGraphAStarResult Status; // 0x0(0x1)
	uint8_t Pad_0x1[0x7]; // 0x1(0x7)
	struct TArray<struct FNavSkeletonGraphResultNode> Nodes; // 0x8(0x10)
	struct TArray<int32_t> DesiredNodeIndices; // 0x18(0x10)
	struct TArray<int32_t> DesiredPointIDs; // 0x28(0x10)
};

// Object: ScriptStruct MFNPCAI.NavSkeletonGraphResultNode
// Size: 0x10 (Inherited: 0x0)
struct FNavSkeletonGraphResultNode
{
	int32_t PointID; // 0x0(0x4)
	int32_t ParentID; // 0x4(0x4)
	float PathLength; // 0x8(0x4)
	float UnreachablePathLength; // 0xC(0x4)
};

// Object: ScriptStruct MFNPCAI.NPCAIQueryRoundEnvironmentResult
// Size: 0x5C (Inherited: 0x0)
struct FNPCAIQueryRoundEnvironmentResult
{
	struct FVector AILocation; // 0x0(0xC)
	struct FVector EnemyLocation; // 0xC(0xC)
	bool LCanMove; // 0x18(0x1)
	uint8_t Pad_0x19[0x3]; // 0x19(0x3)
	struct FVector LMovePoint; // 0x1C(0xC)
	bool RCanMove; // 0x28(0x1)
	uint8_t Pad_0x29[0x3]; // 0x29(0x3)
	struct FVector RMovePoint; // 0x2C(0xC)
	bool FCanMove; // 0x38(0x1)
	uint8_t Pad_0x39[0x3]; // 0x39(0x3)
	struct FVector FMovePoint; // 0x3C(0xC)
	bool BCanMove; // 0x48(0x1)
	uint8_t Pad_0x49[0x3]; // 0x49(0x3)
	struct FVector BMovePoint; // 0x4C(0xC)
	bool LCanDefense; // 0x58(0x1)
	bool RCanDefense; // 0x59(0x1)
	bool LCanAttack; // 0x5A(0x1)
	bool RCanAttack; // 0x5B(0x1)
};

// Object: ScriptStruct MFNPCAI.NPCAIFindAmbushAgainstPointResult
// Size: 0x10 (Inherited: 0x0)
struct FNPCAIFindAmbushAgainstPointResult
{
	struct FVector AgainstPoint; // 0x0(0xC)
	bool bCanFind; // 0xC(0x1)
	uint8_t Pad_0xD[0x3]; // 0xD(0x3)
};

// Object: ScriptStruct MFNPCAI.NPCAIFindPathByKeyRouteResult
// Size: 0x10 (Inherited: 0x0)
struct FNPCAIFindPathByKeyRouteResult
{
	struct TArray<struct FKeyRoutePointData> Path; // 0x0(0x10)
};

// Object: ScriptStruct MFNPCAI.NPCAIPeekPointResult
// Size: 0x10 (Inherited: 0x0)
struct FNPCAIPeekPointResult
{
	struct FVector PeekPoint; // 0x0(0xC)
	bool bWillExpose; // 0xC(0x1)
	uint8_t Pad_0xD[0x3]; // 0xD(0x3)
};

// Object: ScriptStruct MFNPCAI.ReinforceAllyAISpawn
// Size: 0x10 (Inherited: 0x0)
struct FReinforceAllyAISpawn
{
	int32_t AIID; // 0x0(0x4)
	int32_t EquipId; // 0x4(0x4)
	int32_t CampID; // 0x8(0x4)
	int32_t HeadBarType; // 0xC(0x4)
};

// Object: ScriptStruct MFNPCAI.AIRuntimeMonitorStatInfo
// Size: 0x2C (Inherited: 0x0)
struct FAIRuntimeMonitorStatInfo
{
	float HistoryIncAvg; // 0x0(0x4)
	float HistoryIncMax; // 0x4(0x4)
	int32_t HistoryMaxCallCount; // 0x8(0x4)
	float HistoryAvgCallCount; // 0xC(0x4)
	int32_t TotalIncCount; // 0x10(0x4)
	float TotalIncExeTime; // 0x14(0x4)
	int32_t TotalSavedNum; // 0x18(0x4)
	uint32_t NowFrame32; // 0x1C(0x4)
	int32_t NowFrameCallCount; // 0x20(0x4)
	float NowFrameExeUseTime; // 0x24(0x4)
	float WarningTopCost; // 0x28(0x4)
};

// Object: ScriptStruct MFNPCAI.AISGDoorUsed
// Size: 0x18 (Inherited: 0x0)
struct FAISGDoorUsed
{
	struct AActor* SGDoor; // 0x0(0x8)
	struct ACharacter* AIPawn; // 0x8(0x8)
	float UsedTime; // 0x10(0x4)
	uint8_t WaitPersons; // 0x14(0x1)
	uint8_t Pad_0x15[0x3]; // 0x15(0x3)
};

// Object: ScriptStruct MFNPCAI.NPCAIActivityAIIDModifierTableRow
// Size: 0x40 (Inherited: 0x8)
struct FNPCAIActivityAIIDModifierTableRow : FTableRowBase
{
	uint8_t Pad_0x8[0x8]; // 0x8(0x8)
	int64_t ActivityID; // 0x10(0x8)
	int32_t Priority; // 0x18(0x4)
	int32_t SourceCategory; // 0x1C(0x4)
	int32_t SourceCareer; // 0x20(0x4)
	int32_t SourceTendency; // 0x24(0x4)
	int32_t SourceDifficulty; // 0x28(0x4)
	int32_t TargetCategory; // 0x2C(0x4)
	int32_t TargetCareer; // 0x30(0x4)
	int32_t TargetTendency; // 0x34(0x4)
	int32_t TargetDifficulty; // 0x38(0x4)
	int32_t TargetEquipPoolID; // 0x3C(0x4)
};

// Object: ScriptStruct MFNPCAI.NPCAIAsyncTask
// Size: 0x18 (Inherited: 0x0)
struct FNPCAIAsyncTask
{
	struct AActor* AIPawn; // 0x0(0x8)
	ENPCAIAsyncTaskType Type; // 0x8(0x1)
	uint8_t Pad_0x9[0x7]; // 0x9(0x7)
	struct UNPCAIAsyncTaskBase* AsyncTask; // 0x10(0x8)
};

// Object: ScriptStruct MFNPCAI.AIDataProviderFVectorValue
// Size: 0x40 (Inherited: 0x30)
struct FAIDataProviderFVectorValue : FAIDataProviderTypedValue
{
	struct FVector DefaultValue; // 0x30(0xC)
	uint8_t Pad_0x3C[0x4]; // 0x3C(0x4)
};

// Object: ScriptStruct MFNPCAI.AIDoorSingleSafetyPoint
// Size: 0x10 (Inherited: 0x0)
struct FAIDoorSingleSafetyPoint
{
	struct FVector Location; // 0x0(0xC)
	float DangerValue; // 0xC(0x4)
};

// Object: ScriptStruct MFNPCAI.AISafetyOpenDoorResp
// Size: 0x20 (Inherited: 0x0)
struct FAISafetyOpenDoorResp
{
	struct AActor* SGDoor; // 0x0(0x8)
	struct FVector NavLinkPoint; // 0x8(0xC)
	struct FVector SafetyWaitPoint; // 0x14(0xC)
};

// Object: ScriptStruct MFNPCAI.NPCAIProfileCover
// Size: 0x28 (Inherited: 0x0)
struct FNPCAIProfileCover
{
	struct TArray<uint8_t> Ars; // 0x0(0x10)
	uint8_t Pad_0x10[0x8]; // 0x10(0x8)
	struct FString CoverName; // 0x18(0x10)
};

// Object: ScriptStruct MFNPCAI.NPCAIProfileCoverTag
// Size: 0x18 (Inherited: 0x0)
struct FNPCAIProfileCoverTag
{
	struct UNPCAIPropertyProfile* ProfileClass; // 0x0(0x8)
	EAIProfileType ProfileType; // 0x8(0x1)
	uint8_t Pad_0x9[0x3]; // 0x9(0x3)
	struct FName VarName; // 0xC(0x8)
	uint8_t Pad_0x14[0x4]; // 0x14(0x4)
};

// Object: ScriptStruct MFNPCAI.AIProtectTreasureBox
// Size: 0x60 (Inherited: 0x0)
struct FAIProtectTreasureBox
{
	struct AActor* BoxInstance; // 0x0(0x8)
	uint8_t Pad_0x8[0x58]; // 0x8(0x58)
};

// Object: ScriptStruct MFNPCAI.AIEnemyInfo
// Size: 0x48 (Inherited: 0x0)
struct FAIEnemyInfo
{
	uint8_t Pad_0x0[0x8]; // 0x0(0x8)
	int64_t UniqueID; // 0x8(0x8)
	float FireTime; // 0x10(0x4)
	float FireTimeInterval; // 0x14(0x4)
	struct FVector FireLocation; // 0x18(0xC)
	struct FVector FireDirection; // 0x24(0xC)
	float LastUpdateTime; // 0x30(0x4)
	struct FVector LastUpdateLocation; // 0x34(0xC)
	int32_t PathPointID; // 0x40(0x4)
	uint8_t Pad_0x44[0x4]; // 0x44(0x4)
};

// Object: ScriptStruct MFNPCAI.AIAnalysisReport
// Size: 0x4 (Inherited: 0x0)
struct FAIAnalysisReport
{
	uint8_t Pad_0x0[0x4]; // 0x0(0x4)
};

// Object: ScriptStruct MFNPCAI.AIGlobalCacheActors
// Size: 0x18 (Inherited: 0x0)
struct FAIGlobalCacheActors
{
	float LastTimeSeconds; // 0x0(0x4)
	uint8_t Pad_0x4[0x4]; // 0x4(0x4)
	struct TArray<struct TWeakObjectPtr<struct AActor>> CacheActors; // 0x8(0x10)
};

// Object: ScriptStruct MFNPCAI.MFGraphAStarPolicy
// Size: 0x10 (Inherited: 0x0)
struct FMFGraphAStarPolicy
{
	int32_t NodePoolSize; // 0x0(0x4)
	int32_t OpenSetSize; // 0x4(0x4)
	int32_t MaxPathNodeCount; // 0x8(0x4)
	bool bReuseNodePoolInSubsequentSearches; // 0xC(0x1)
	uint8_t Pad_0xD[0x3]; // 0xD(0x3)
};

// Object: ScriptStruct MFNPCAI.HNavSearchInfo
// Size: 0x60 (Inherited: 0x0)
struct FHNavSearchInfo
{
	uint8_t Pad_0x0[0x60]; // 0x0(0x60)
};

// Object: ScriptStruct MFNPCAI.MetisOptions
// Size: 0x20 (Inherited: 0x0)
struct FMetisOptions
{
	bool bUseDefault; // 0x0(0x1)
	uint8_t Pad_0x1[0x3]; // 0x1(0x3)
	EMETIS_OBJTYPE ObjectiveType; // 0x4(0x4)
	EMETIS_CTYPE CoarsenType; // 0x8(0x4)
	EMETIS_IPTYPE InitialPartitioningType; // 0xC(0x4)
	EMETIS_RTYPE RifinementType; // 0x10(0x4)
	int32_t NCuts; // 0x14(0x4)
	int32_t IterateTimes; // 0x18(0x4)
	bool bMinimizeMaximumConnectivity; // 0x1C(0x1)
	bool bNo2Hop; // 0x1D(0x1)
	bool bForcesContiguousPartitions; // 0x1E(0x1)
	uint8_t Pad_0x1F[0x1]; // 0x1F(0x1)
};

// Object: ScriptStruct MFNPCAI.HNavSettings
// Size: 0x3C (Inherited: 0x0)
struct FHNavSettings
{
	bool bAutoBuildAfterNavigationGenerationFinished; // 0x0(0x1)
	bool bBuildIntermediateGraph; // 0x1(0x1)
	bool bRemoveIntermediateGraph; // 0x2(0x1)
	bool bIntraPathOnlyInSelfNode; // 0x3(0x1)
	bool bCombineMultiEdges; // 0x4(0x1)
	bool bEnableEdgeWeight; // 0x5(0x1)
	bool bBreakNavLinkConnection; // 0x6(0x1)
	uint8_t Pad_0x7[0x1]; // 0x7(0x1)
	int32_t MaxGraphLevel; // 0x8(0x4)
	int32_t PartitionSize; // 0xC(0x4)
	int32_t ForceBuildForTopK; // 0x10(0x4)
	int32_t MinNodeCountToBuild; // 0x14(0x4)
	int32_t MaxSearchNode; // 0x18(0x4)
	struct FMetisOptions MetisOptions; // 0x1C(0x20)
};

// Object: ScriptStruct MFNPCAI.HNavGraph
// Size: 0x150 (Inherited: 0x0)
struct FHNavGraph
{
	int32_t Level; // 0x0(0x4)
	int32_t NodeCount; // 0x4(0x4)
	bool bIntermediate; // 0x8(0x1)
	uint8_t Pad_0x9[0x7]; // 0x9(0x7)
	struct TArray<int32_t> ParentIndices; // 0x10(0x10)
	uint8_t Pad_0x20[0x20]; // 0x20(0x20)
	struct TArray<int32_t> ChildIndexOffsets; // 0x40(0x10)
	struct TArray<int32_t> ChildIndices; // 0x50(0x10)
	struct TArray<int32_t> PortalEdgeOffsets; // 0x60(0x10)
	struct TArray<struct FPortalEdge> PortalEdges; // 0x70(0x10)
	struct TArray<int32_t> IntraPathOffsets; // 0x80(0x10)
	struct TArray<struct FIntraPath> IntraPaths; // 0x90(0x10)
	struct TArray<int32_t> IntraPathSourceIndexOffsets; // 0xA0(0x10)
	struct TArray<int32_t> IntraPathSourceIndices; // 0xB0(0x10)
	struct TArray<int32_t> IntraPathTargetIndexOffsets; // 0xC0(0x10)
	uint8_t Pad_0xD0[0x10]; // 0xD0(0x10)
	struct TArray<uint64_t> IntraPathCounts; // 0xE0(0x10)
	struct TArray<int32_t> IntraPathPolyRefOffsets; // 0xF0(0x10)
	struct TArray<uint64_t> IntraPathPolyRefs; // 0x100(0x10)
	struct TArray<float> IntraPathCosts; // 0x110(0x10)
	struct TArray<float> IntraPathLengths; // 0x120(0x10)
	uint8_t Pad_0x130[0x20]; // 0x130(0x20)
};

// Object: ScriptStruct MFNPCAI.IntraPath
// Size: 0x20 (Inherited: 0x0)
struct FIntraPath
{
	uint64_t PackedData; // 0x0(0x8)
	struct TArray<uint64_t> Nodes; // 0x8(0x10)
	float Length; // 0x18(0x4)
	float Cost; // 0x1C(0x4)
};

// Object: ScriptStruct MFNPCAI.PortalEdge
// Size: 0x8 (Inherited: 0x0)
struct FPortalEdge
{
	uint64_t PackedData; // 0x0(0x8)
};

// Object: ScriptStruct MFNPCAI.NPCAIIDModifierTableRow
// Size: 0x10 (Inherited: 0x8)
struct FNPCAIIDModifierTableRow : FTableRowBase
{
	int64_t TargetAIID; // 0x8(0x8)
};

// Object: ScriptStruct MFNPCAI.AIRoundPathFindingNodes
// Size: 0x80 (Inherited: 0x0)
struct FAIRoundPathFindingNodes
{
	float LastTimeCheckUpdate; // 0x0(0x4)
	int32_t CheckUpdateCount; // 0x4(0x4)
	float RoundPathLength; // 0x8(0x4)
	float RadiusReCalcRoundPathNodes; // 0xC(0x4)
	int64_t CurrentPolyId; // 0x10(0x8)
	struct FVector LastLocationCalcRoundPathNodes; // 0x18(0xC)
	uint8_t Pad_0x24[0x5C]; // 0x24(0x5C)
};

// Object: ScriptStruct MFNPCAI.NavPlatformGraphFindResult
// Size: 0x18 (Inherited: 0x0)
struct FNavPlatformGraphFindResult
{
	EMFGraphAStarResult Status; // 0x0(0x1)
	uint8_t Pad_0x1[0x17]; // 0x1(0x17)
};

// Object: ScriptStruct MFNPCAI.NavPlatformGraphAStarFilter
// Size: 0xD8 (Inherited: 0x0)
struct FNavPlatformGraphAStarFilter
{
	struct UNPCAINavPlatformSystem* PlatformSystem; // 0x0(0x8)
	uint8_t Pad_0x8[0xD0]; // 0x8(0xD0)
};

// Object: ScriptStruct MFNPCAI.NavPlatformGraphWrapper
// Size: 0xE0 (Inherited: 0x0)
struct FNavPlatformGraphWrapper
{
	struct FNavPlatformGraphAStarFilter Filter; // 0x0(0xD8)
	struct UNPCAINavPlatformSystem* PlatformSystem; // 0xD8(0x8)
};

// Object: ScriptStruct MFNPCAI.NPCAINavSkeletonBuildStage
// Size: 0x20 (Inherited: 0x0)
struct FNPCAINavSkeletonBuildStage
{
	uint8_t Pad_0x0[0x20]; // 0x0(0x20)
};

// Object: ScriptStruct MFNPCAI.NPCAINavSkeletonAddRegionConnectionStage
// Size: 0x20 (Inherited: 0x20)
struct FNPCAINavSkeletonAddRegionConnectionStage : FNPCAINavSkeletonBuildStage
{
};

// Object: ScriptStruct MFNPCAI.NPCAINavSkeletonBuilder
// Size: 0x4E0 (Inherited: 0x0)
struct FNPCAINavSkeletonBuilder
{
	struct UObject* WorldContextObject; // 0x0(0x8)
	uint8_t Pad_0x8[0xB0]; // 0x8(0xB0)
	struct UWorld* World; // 0xB8(0x8)
	uint8_t Pad_0xC0[0x8]; // 0xC0(0x8)
	struct ARecastNavMesh* MainNavData; // 0xC8(0x8)
	struct ANPCAINavMeshManager* NavMeshManager; // 0xD0(0x8)
	uint8_t Pad_0xD8[0x8]; // 0xD8(0x8)
	struct TArray<struct ANPCAINavLinkProxy*> LinkProxies; // 0xE0(0x10)
	uint8_t Pad_0xF0[0x3F0]; // 0xF0(0x3F0)
};

// Object: ScriptStruct MFNPCAI.NPCAINavSkeletonCalculateCoverageStage
// Size: 0x20 (Inherited: 0x20)
struct FNPCAINavSkeletonCalculateCoverageStage : FNPCAINavSkeletonBuildStage
{
};

// Object: ScriptStruct MFNPCAI.NPCAINavSkeletonCalculateDivergenceStage
// Size: 0x20 (Inherited: 0x20)
struct FNPCAINavSkeletonCalculateDivergenceStage : FNPCAINavSkeletonBuildStage
{
};

// Object: ScriptStruct MFNPCAI.NPCAINavSkeletonCalculateGradientStage
// Size: 0x20 (Inherited: 0x20)
struct FNPCAINavSkeletonCalculateGradientStage : FNPCAINavSkeletonBuildStage
{
};

// Object: ScriptStruct MFNPCAI.NPCAINavSkeletonCalculateSymmetricAttributeStage
// Size: 0x28 (Inherited: 0x20)
struct FNPCAINavSkeletonCalculateSymmetricAttributeStage : FNPCAINavSkeletonBuildStage
{
	uint8_t Pad_0x20[0x8]; // 0x20(0x8)
};

// Object: ScriptStruct MFNPCAI.NPCAINavSkeletonCalculateMovingStage
// Size: 0x28 (Inherited: 0x28)
struct FNPCAINavSkeletonCalculateMovingStage : FNPCAINavSkeletonCalculateSymmetricAttributeStage
{
};

// Object: ScriptStruct MFNPCAI.NPCAINavSkeletonCalculateOutdoorsStage
// Size: 0x20 (Inherited: 0x20)
struct FNPCAINavSkeletonCalculateOutdoorsStage : FNPCAINavSkeletonBuildStage
{
};

// Object: ScriptStruct MFNPCAI.NPCAINavSkeletonCalculateProtectionStage
// Size: 0x20 (Inherited: 0x20)
struct FNPCAINavSkeletonCalculateProtectionStage : FNPCAINavSkeletonBuildStage
{
};

// Object: ScriptStruct MFNPCAI.NPCAINavSkeletonCalculateThrowingStage
// Size: 0x28 (Inherited: 0x28)
struct FNPCAINavSkeletonCalculateThrowingStage : FNPCAINavSkeletonCalculateSymmetricAttributeStage
{
};

// Object: ScriptStruct MFNPCAI.NPCAINavSkeletonCalculateVisibilityStage
// Size: 0xA8 (Inherited: 0x28)
struct FNPCAINavSkeletonCalculateVisibilityStage : FNPCAINavSkeletonCalculateSymmetricAttributeStage
{
	uint8_t Pad_0x28[0x80]; // 0x28(0x80)
};

// Object: ScriptStruct MFNPCAI.NPCAINavSkeletonCalculateWallDistanceStage
// Size: 0x20 (Inherited: 0x20)
struct FNPCAINavSkeletonCalculateWallDistanceStage : FNPCAINavSkeletonBuildStage
{
};

// Object: ScriptStruct MFNPCAI.NPCAINavSkeletonCheckEdgeOnNavMeshStage
// Size: 0x28 (Inherited: 0x20)
struct FNPCAINavSkeletonCheckEdgeOnNavMeshStage : FNPCAINavSkeletonBuildStage
{
	uint8_t Pad_0x20[0x8]; // 0x20(0x8)
};

// Object: ScriptStruct MFNPCAI.NPCAINavSkeletonCollectConnectionInfoStage
// Size: 0x20 (Inherited: 0x20)
struct FNPCAINavSkeletonCollectConnectionInfoStage : FNPCAINavSkeletonBuildStage
{
};

// Object: ScriptStruct MFNPCAI.NPCAINavSkeletonCollectNeighbourInfoStage
// Size: 0x28 (Inherited: 0x20)
struct FNPCAINavSkeletonCollectNeighbourInfoStage : FNPCAINavSkeletonBuildStage
{
	uint8_t Pad_0x20[0x8]; // 0x20(0x8)
};

// Object: ScriptStruct MFNPCAI.NPCAINavSkeletonFindPathForUnstableSegmentStage
// Size: 0x20 (Inherited: 0x20)
struct FNPCAINavSkeletonFindPathForUnstableSegmentStage : FNPCAINavSkeletonBuildStage
{
};

// Object: ScriptStruct MFNPCAI.NPCAINavSkeletonFindWallsInNeighbourhoodStage
// Size: 0x20 (Inherited: 0x20)
struct FNPCAINavSkeletonFindWallsInNeighbourhoodStage : FNPCAINavSkeletonBuildStage
{
};

// Object: ScriptStruct MFNPCAI.NPCAINavSkeletonGeneratePolylineStage
// Size: 0x20 (Inherited: 0x20)
struct FNPCAINavSkeletonGeneratePolylineStage : FNPCAINavSkeletonBuildStage
{
};

// Object: ScriptStruct MFNPCAI.NPCAINavSkeletonGenerateRawPointStage
// Size: 0x20 (Inherited: 0x20)
struct FNPCAINavSkeletonGenerateRawPointStage : FNPCAINavSkeletonBuildStage
{
};

// Object: ScriptStruct MFNPCAI.NavSkeletonPathFindingRequest
// Size: 0x1B8 (Inherited: 0x0)
struct FNavSkeletonPathFindingRequest
{
	uint8_t Pad_0x0[0x1B8]; // 0x0(0x1B8)
};

// Object: ScriptStruct MFNPCAI.NavSkeletonPathFindingQueue
// Size: 0x88 (Inherited: 0x0)
struct FNavSkeletonPathFindingQueue
{
	uint8_t Pad_0x0[0x18]; // 0x0(0x18)
	struct TMap<struct TWeakObjectPtr<struct UObject>, struct FNavSkeletonPathFindingRequest> QuerierToRequest; // 0x18(0x50)
	uint8_t Pad_0x68[0x20]; // 0x68(0x20)
};

// Object: ScriptStruct MFNPCAI.NavSkeletonGraphAStarFilter
// Size: 0xC8 (Inherited: 0x0)
struct FNavSkeletonGraphAStarFilter
{
	struct TWeakObjectPtr<struct UObject> WeakOwner; // 0x0(0x8)
	int32_t MaxSearchNodes; // 0x8(0x4)
	float CostLimit; // 0xC(0x4)
	float MaxUnreachablePathCostLimit; // 0x10(0x4)
	float TimeLimit; // 0x14(0x4)
	float RadiusLimit; // 0x18(0x4)
	bool bShouldIncludeStartNodeInPath; // 0x1C(0x1)
	uint8_t Pad_0x1D[0x3]; // 0x1D(0x3)
	struct TSet<int32_t> UnreachablePointIDs; // 0x20(0x50)
	bool bOnTryBestToIncludePointIDs; // 0x70(0x1)
	uint8_t Pad_0x71[0x7]; // 0x71(0x7)
	struct TSet<int32_t> TryBestToIncludePointIDs; // 0x78(0x50)
};

// Object: ScriptStruct MFNPCAI.NavSkeletonGraphCostType
// Size: 0x8 (Inherited: 0x0)
struct FNavSkeletonGraphCostType
{
	float PathCost; // 0x0(0x4)
	float UnreachablePathCost; // 0x4(0x4)
};

// Object: ScriptStruct MFNPCAI.NPCAINavSkeletonInitializePointExtraAttributeStage
// Size: 0x20 (Inherited: 0x20)
struct FNPCAINavSkeletonInitializePointExtraAttributeStage : FNPCAINavSkeletonBuildStage
{
};

// Object: ScriptStruct MFNPCAI.NPCAINavSkeletonLabelNavMeshStage
// Size: 0x20 (Inherited: 0x20)
struct FNPCAINavSkeletonLabelNavMeshStage : FNPCAINavSkeletonBuildStage
{
};

// Object: ScriptStruct MFNPCAI.NPCAINavSkeletonPrunePointStage
// Size: 0x20 (Inherited: 0x20)
struct FNPCAINavSkeletonPrunePointStage : FNPCAINavSkeletonBuildStage
{
};

// Object: ScriptStruct MFNPCAI.NPCAINavSkeletonRemoveIsolatedPointStage
// Size: 0x20 (Inherited: 0x20)
struct FNPCAINavSkeletonRemoveIsolatedPointStage : FNPCAINavSkeletonBuildStage
{
};

// Object: ScriptStruct MFNPCAI.NPCAINavSkeletonRemoveTriangleConnectionStage
// Size: 0x20 (Inherited: 0x20)
struct FNPCAINavSkeletonRemoveTriangleConnectionStage : FNPCAINavSkeletonBuildStage
{
};

// Object: ScriptStruct MFNPCAI.NPCAINavSkeletonSavePointStage
// Size: 0x20 (Inherited: 0x20)
struct FNPCAINavSkeletonSavePointStage : FNPCAINavSkeletonBuildStage
{
};

// Object: ScriptStruct MFNPCAI.NPCAINavSkeletonSetupPointBattleIntensityExpectation
// Size: 0x20 (Inherited: 0x20)
struct FNPCAINavSkeletonSetupPointBattleIntensityExpectation : FNPCAINavSkeletonBuildStage
{
};

// Object: ScriptStruct MFNPCAI.NPCAINavSkeletonSetupPointBattleVolumeStage
// Size: 0x20 (Inherited: 0x20)
struct FNPCAINavSkeletonSetupPointBattleVolumeStage : FNPCAINavSkeletonBuildStage
{
};

// Object: ScriptStruct MFNPCAI.NPCAINavSkeletonSetupPointKindStage
// Size: 0x20 (Inherited: 0x20)
struct FNPCAINavSkeletonSetupPointKindStage : FNPCAINavSkeletonBuildStage
{
};

// Object: ScriptStruct MFNPCAI.NPCAINavSkeletonSimplifyPolylineStage
// Size: 0x20 (Inherited: 0x20)
struct FNPCAINavSkeletonSimplifyPolylineStage : FNPCAINavSkeletonBuildStage
{
};

// Object: ScriptStruct MFNPCAI.NavSkeletonMoveSettings
// Size: 0x1 (Inherited: 0x0)
struct FNavSkeletonMoveSettings
{
	bool bWantPathOptimization; // 0x0(0x1)
};

// Object: ScriptStruct MFNPCAI.NavSkeletonPatchedPath
// Size: 0x10 (Inherited: 0x0)
struct FNavSkeletonPatchedPath
{
	struct TArray<struct FNavSkeletonPathPoint> PathPoints; // 0x0(0x10)
};

// Object: ScriptStruct MFNPCAI.NavSkeletonData
// Size: 0x60 (Inherited: 0x0)
struct FNavSkeletonData
{
	struct TArray<struct FNavSkeletonPoint> Points; // 0x0(0x10)
	struct TMap<uint64_t, struct FNavSkeletonPatchedPath> UnstableSegmentPatchPaths; // 0x10(0x50)
};

// Object: ScriptStruct MFNPCAI.NavSkeletonPathPoint
// Size: 0x28 (Inherited: 0x0)
struct FNavSkeletonPathPoint
{
	struct FVector Location; // 0x0(0xC)
	uint8_t Pad_0xC[0x4]; // 0xC(0x4)
	uint64_t NodeRef; // 0x10(0x8)
	uint32_t Flags; // 0x18(0x4)
	uint32_t CustomLinkId; // 0x1C(0x4)
	uint8_t Pad_0x20[0x8]; // 0x20(0x8)
};

// Object: ScriptStruct MFNPCAI.NavSkeletonPoint
// Size: 0xA0 (Inherited: 0x10)
struct FNavSkeletonPoint : FActionPointData
{
	bool Outdoors; // 0x10(0x1)
	uint8_t Pad_0x11[0x3]; // 0x11(0x3)
	float Radius; // 0x14(0x4)
	float EffectiveRange; // 0x18(0x4)
	int32_t LinkId; // 0x1C(0x4)
	uint64_t AtPolyRef; // 0x20(0x8)
	struct FVector ProtectionDirection; // 0x28(0xC)
	float ProtectionHalfAngle; // 0x34(0x4)
	int32_t BattleIntensityExpectation; // 0x38(0x4)
	uint8_t Pad_0x3C[0x4]; // 0x3C(0x4)
	struct TArray<int32_t> NeighbourIndices; // 0x40(0x10)
	struct TArray<float> NeighbourDistances; // 0x50(0x10)
	struct TArray<int32_t> VisibleIndices; // 0x60(0x10)
	struct TArray<int32_t> ThrowableIndices; // 0x70(0x10)
	struct TArray<int32_t> MovableIndices; // 0x80(0x10)
	struct TArray<int32_t> FriendIndices; // 0x90(0x10)
};

// Object: ScriptStruct MFNPCAI.NavSkeletonPolyline
// Size: 0x18 (Inherited: 0x0)
struct FNavSkeletonPolyline
{
	struct TArray<int32_t> PointIDs; // 0x0(0x10)
	float PolylineLength; // 0x10(0x4)
	uint8_t Pad_0x14[0x4]; // 0x14(0x4)
};

// Object: ScriptStruct MFNPCAI.NavSkeletonBuildSettings
// Size: 0x8C (Inherited: 0x0)
struct FNavSkeletonBuildSettings
{
	struct FVector NavQueryExtent; // 0x0(0xC)
	float SampleSpacing; // 0xC(0x4)
	float DeltaLength; // 0x10(0x4)
	int32_t GradientNeighbourRadius; // 0x14(0x4)
	float DivergenceFilterThreshold; // 0x18(0x4)
	float DivergenceNeighbourRadius; // 0x1C(0x4)
	float CoarseCoverageNeighbourRadius; // 0x20(0x4)
	float RefinedCoverageNeighbourRadius; // 0x24(0x4)
	float PolylineSimplificationDistanceThreshold; // 0x28(0x4)
	uint8_t Pad_0x2C[0x4]; // 0x2C(0x4)
	bool bUseNewBuilder; // 0x30(0x1)
	bool bCheckEdgeOnNavMesh; // 0x31(0x1)
	bool bRemoveUnreachablePoints; // 0x32(0x1)
	bool bHintProjection2D; // 0x33(0x1)
	bool bAddRegionConnection; // 0x34(0x1)
	bool bEnableCollapseShortPolylines; // 0x35(0x1)
	bool bEnableParallelFindWallsInNeighbourhood; // 0x36(0x1)
	bool bEnableParallelCalculateWallDistance; // 0x37(0x1)
	bool bEnableParallelGenerateRawPoints; // 0x38(0x1)
	bool bEnableParallelCalculateGradient; // 0x39(0x1)
	bool bEnableParallelCalculateDivergence; // 0x3A(0x1)
	bool bEnableParallelCalculateOutdoors; // 0x3B(0x1)
	bool bEnableParallelPruneSamplePoints; // 0x3C(0x1)
	bool bEnableParallelCalculateProtection; // 0x3D(0x1)
	bool bEnableParallelCalculateVisibility; // 0x3E(0x1)
	bool bEnableParallelCalculateThrowing; // 0x3F(0x1)
	bool bEnableParallelCalculateMoving; // 0x40(0x1)
	bool bEnablePruneSamplePoints; // 0x41(0x1)
	bool bEnableRemoveTooCloseMainPointAtCoverageStage; // 0x42(0x1)
	bool bEnableRefineCoverage; // 0x43(0x1)
	bool bEnablePruneEndBranch; // 0x44(0x1)
	bool bEnableCalculateVisibilityStage; // 0x45(0x1)
	bool bEnableCalculateThrowingStage; // 0x46(0x1)
	ENavSkeletonDivergenceMethod DivergenceMethod; // 0x47(0x1)
	float FindWallInRadius; // 0x48(0x4)
	int32_t MaxWallCount; // 0x4C(0x4)
	float PolylineLengthLowerBound; // 0x50(0x4)
	float RegionConnectionDistanceTolerance; // 0x54(0x4)
	float VisiblityQueryZExtent; // 0x58(0x4)
	float VisiblityTraceZOffset; // 0x5C(0x4)
	float VisiblityMaxRange; // 0x60(0x4)
	float ProtectionTraceAngleStep; // 0x64(0x4)
	float ProtectionTraceZOffset; // 0x68(0x4)
	float ProtectionTraceMaxRange; // 0x6C(0x4)
	float EndpointProtectionLowerBound; // 0x70(0x4)
	float ThrowingInitialSpeed; // 0x74(0x4)
	float ThrowingMaxRange; // 0x78(0x4)
	float MovingMaxRange; // 0x7C(0x4)
	uint8_t Pad_0x80[0x4]; // 0x80(0x4)
	float CheckOutdoorsRadius; // 0x84(0x4)
	float CheckOutdoorsHeight; // 0x88(0x4)
};

// Object: ScriptStruct MFNPCAI.NavSkeletonSamplePoint
// Size: 0x58 (Inherited: 0x0)
struct FNavSkeletonSamplePoint
{
	uint8_t Pad_0x0[0x58]; // 0x0(0x58)
};

// Object: ScriptStruct MFNPCAI.NavSkeletonSamplePolyline
// Size: 0x40 (Inherited: 0x0)
struct FNavSkeletonSamplePolyline
{
	uint8_t Pad_0x0[0x40]; // 0x0(0x40)
};

// Object: ScriptStruct MFNPCAI.NavLinkAcceptanceRadiusEntry
// Size: 0xC (Inherited: 0x0)
struct FNavLinkAcceptanceRadiusEntry
{
	ENavLinkType LinkType; // 0x0(0x1)
	uint8_t Pad_0x1[0x3]; // 0x1(0x3)
	float AdditionAcceptanceRadius; // 0x4(0x4)
	float AdditionAcceptanceRadiusEnd; // 0x8(0x4)
};

// Object: ScriptStruct MFNPCAI.NPCAINavPlatformNavMeshBoundsVolumeData
// Size: 0x30 (Inherited: 0x0)
struct FNPCAINavPlatformNavMeshBoundsVolumeData
{
	struct ANavMeshBoundsVolume* NavMeshBoundsVolume; // 0x0(0x8)
	struct FVector Location; // 0x8(0xC)
	struct FVector Extent; // 0x14(0xC)
	struct FVector NewPlatformLoc; // 0x20(0xC)
	uint8_t Pad_0x2C[0x4]; // 0x2C(0x4)
};

// Object: ScriptStruct MFNPCAI.NPCAINavPlatformBuildData
// Size: 0x48 (Inherited: 0x0)
struct FNPCAINavPlatformBuildData
{
	struct FNPCAINavPlatformNavMeshBoundsVolumeData NavMeshBoundsVolumeData; // 0x0(0x30)
	struct TArray<struct FNPCAINavPlatformRegion> PlatformRegions; // 0x30(0x10)
	float MaxLinkLineLength; // 0x40(0x4)
	uint8_t Pad_0x44[0x4]; // 0x44(0x4)
};

// Object: ScriptStruct MFNPCAI.NPCAINavPlatformRegion
// Size: 0xA8 (Inherited: 0x0)
struct FNPCAINavPlatformRegion
{
	struct TMap<int32_t, int64_t> LinkLineIDs; // 0x0(0x50)
	struct TSet<int64_t> PolyRefs; // 0x50(0x50)
	int32_t LinkLinesNum; // 0xA0(0x4)
	uint8_t Pad_0xA4[0x4]; // 0xA4(0x4)
};

// Object: ScriptStruct MFNPCAI.NPCAINavPlatformPathInfo
// Size: 0x48 (Inherited: 0x0)
struct FNPCAINavPlatformPathInfo
{
	struct TArray<struct FVector> PathPoints; // 0x0(0x10)
	struct TArray<uint64_t> PathPointPolyRefs; // 0x10(0x10)
	float PathCost; // 0x20(0x4)
	uint8_t Pad_0x24[0x4]; // 0x24(0x4)
	struct TArray<uint64_t> PathCorridor; // 0x28(0x10)
	struct TArray<float> PathCorridorCost; // 0x38(0x10)
};

// Object: ScriptStruct MFNPCAI.NPCAINavPlatformLinkLine
// Size: 0x78 (Inherited: 0x0)
struct FNPCAINavPlatformLinkLine
{
	struct FVector LinkLineStart; // 0x0(0xC)
	struct FVector LinkLineEnd; // 0xC(0xC)
	struct FVector LinkLineDir; // 0x18(0xC)
	float ProjectHeight; // 0x24(0x4)
	struct TMap<int32_t, struct FNPCAINavPlatformPathInfo> PathInfos; // 0x28(0x50)
};

// Object: ScriptStruct MFNPCAI.NPCAINavPlatformBuildConfig
// Size: 0x48 (Inherited: 0x0)
struct FNPCAINavPlatformBuildConfig
{
	struct FVector FirstOffset; // 0x0(0xC)
	struct FVector AdjustOffset; // 0xC(0xC)
	struct FVector WrapBoxExtent; // 0x18(0xC)
	float CeilingHeight; // 0x24(0x4)
	bool AutoBuildLinkLine; // 0x28(0x1)
	uint8_t Pad_0x29[0x3]; // 0x29(0x3)
	float LinkLineLengthDefault; // 0x2C(0x4)
	float LinkPointMinIntervalDefault; // 0x30(0x4)
	float LinkLineProjectHeightDefault; // 0x34(0x4)
	struct TArray<struct AActor*> LinkLineHitIgnoreClassList; // 0x38(0x10)
};

// Object: ScriptStruct MFNPCAI.NPCAINavPlatformBuildTemplate
// Size: 0x10 (Inherited: 0x0)
struct FNPCAINavPlatformBuildTemplate
{
	struct AActor* Platform; // 0x0(0x8)
	int32_t ConfigID; // 0x8(0x4)
	uint8_t Pad_0xC[0x4]; // 0xC(0x4)
};

// Object: ScriptStruct MFNPCAI.NavCostModifierSharedPointer
// Size: 0x10 (Inherited: 0x0)
struct FNavCostModifierSharedPointer
{
	uint8_t Pad_0x0[0x10]; // 0x0(0x10)
};

// Object: ScriptStruct MFNPCAI.NavCostModifier
// Size: 0x58 (Inherited: 0x0)
struct FNavCostModifier
{
	ENPCAIPerceptibleTile Kind; // 0x0(0x1)
	uint8_t Pad_0x1[0x3]; // 0x1(0x3)
	struct TWeakObjectPtr<struct UObject> Instigator; // 0x4(0x8)
	float BeginTime; // 0xC(0x4)
	float endTime; // 0x10(0x4)
	struct FVector Location; // 0x14(0xC)
	struct FBox Boundary; // 0x20(0x1C)
	uint8_t Pad_0x3C[0x4]; // 0x3C(0x4)
	struct TArray<uint64_t> AffectedPolyRefs; // 0x40(0x10)
	int32_t LocalNavigationGridId; // 0x50(0x4)
	bool bMoving; // 0x54(0x1)
	uint8_t Pad_0x55[0x3]; // 0x55(0x3)
};

// Object: ScriptStruct MFNPCAI.NavCostDescriptor
// Size: 0x10 (Inherited: 0x0)
struct FNavCostDescriptor
{
	uint8_t Pad_0x0[0x10]; // 0x0(0x10)
};

// Object: ScriptStruct MFNPCAI.NPCAINavPathForBP
// Size: 0x18 (Inherited: 0x0)
struct FNPCAINavPathForBP
{
	uint8_t Pad_0x0[0x18]; // 0x0(0x18)
};

// Object: ScriptStruct MFNPCAI.NPCAIMoveRequestCustomDataImpl
// Size: 0x18 (Inherited: 0x0)
struct FNPCAIMoveRequestCustomDataImpl
{
	struct UNavigationQueryFilter* NavFilterClass; // 0x0(0x8)
	float PathExtendLength; // 0x8(0x4)
	float MaxTurnAngleDeg; // 0xC(0x4)
	bool bSafetyDoor; // 0x10(0x1)
	bool bSwing; // 0x11(0x1)
	uint8_t Pad_0x12[0x6]; // 0x12(0x6)
};

// Object: ScriptStruct MFNPCAI.MFNavMeshRegionMap
// Size: 0xA0 (Inherited: 0x0)
struct FMFNavMeshRegionMap
{
	uint8_t Pad_0x0[0xA0]; // 0x0(0xA0)
};

// Object: ScriptStruct MFNPCAI.MFNavMeshRegion
// Size: 0x58 (Inherited: 0x0)
struct FMFNavMeshRegion
{
	uint8_t Pad_0x0[0x58]; // 0x0(0x58)
};

// Object: ScriptStruct MFNPCAI.NavPolyRefArray
// Size: 0x10 (Inherited: 0x0)
struct FNavPolyRefArray
{
	uint8_t Pad_0x0[0x10]; // 0x0(0x10)
};

// Object: ScriptStruct MFNPCAI.NavConnectivityInfo
// Size: 0x58 (Inherited: 0x0)
struct FNavConnectivityInfo
{
	uint8_t Pad_0x0[0x58]; // 0x0(0x58)
};

// Object: ScriptStruct MFNPCAI.SoAStorage
// Size: 0x10 (Inherited: 0x0)
struct FSoAStorage
{
	struct TArray<int32_t> Offsets; // 0x0(0x10)
};

// Object: ScriptStruct MFNPCAI.PortalEdgeStorage
// Size: 0x20 (Inherited: 0x10)
struct FPortalEdgeStorage : FSoAStorage
{
	struct TArray<struct FPortalEdge> Items; // 0x10(0x10)
};

// Object: ScriptStruct MFNPCAI.UInt64Storage
// Size: 0x20 (Inherited: 0x10)
struct FUInt64Storage : FSoAStorage
{
	struct TArray<uint64_t> Items; // 0x10(0x10)
};

// Object: ScriptStruct MFNPCAI.Int32Storage
// Size: 0x20 (Inherited: 0x10)
struct FInt32Storage : FSoAStorage
{
	struct TArray<int32_t> Items; // 0x10(0x10)
};

// Object: ScriptStruct MFNPCAI.NavLinkInfo
// Size: 0x1C (Inherited: 0x0)
struct FNavLinkInfo
{
	bool bValid; // 0x0(0x1)
	bool bEnabled; // 0x1(0x1)
	uint8_t Direction; // 0x2(0x1)
	ENavLinkType LinkType; // 0x3(0x1)
	uint32_t LinkId; // 0x4(0x4)
	int32_t LinkIndex; // 0x8(0x4)
	int32_t LeftIndex; // 0xC(0x4)
	int32_t RightIndex; // 0x10(0x4)
	int32_t LeftRegionIndex; // 0x14(0x4)
	int32_t RightRegionIndex; // 0x18(0x4)
};

// Object: ScriptStruct MFNPCAI.CoverPointPathLengthResult
// Size: 0x8 (Inherited: 0x0)
struct FCoverPointPathLengthResult
{
	int32_t PointID; // 0x0(0x4)
	float PathLength; // 0x4(0x4)
};

// Object: ScriptStruct MFNPCAI.AICandidateStandPosition
// Size: 0x10 (Inherited: 0x0)
struct FAICandidateStandPosition
{
	float PathLength; // 0x0(0x4)
	struct FVector Location; // 0x4(0xC)
};

// Object: ScriptStruct MFNPCAI.AIGrassOctreeElement
// Size: 0x30 (Inherited: 0x0)
struct FAIGrassOctreeElement
{
	uint8_t Pad_0x0[0x30]; // 0x0(0x30)
};

// Object: ScriptStruct MFNPCAI.AIGrassOctreeData
// Size: 0x10 (Inherited: 0x0)
struct FAIGrassOctreeData
{
	int32_t GrassBlockIndex; // 0x0(0x4)
	struct FVector Location; // 0x4(0xC)
};

// Object: ScriptStruct MFNPCAI.AINearGrassBounds
// Size: 0x20 (Inherited: 0x0)
struct FAINearGrassBounds
{
	struct FVector Center; // 0x0(0xC)
	float Radius; // 0xC(0x4)
	struct TArray<int32_t> GrassIndexs; // 0x10(0x10)
};

// Object: ScriptStruct MFNPCAI.AIGrassClusterInfo
// Size: 0x30 (Inherited: 0x0)
struct FAIGrassClusterInfo
{
	struct FBox Bounds; // 0x0(0x1C)
	uint8_t Pad_0x1C[0x4]; // 0x1C(0x4)
	struct TArray<struct FBox> BoxList; // 0x20(0x10)
};

// Object: ScriptStruct MFNPCAI.AIGrassGrayBMP
// Size: 0x50 (Inherited: 0x0)
struct FAIGrassGrayBMP
{
	int32_t BMPWidth; // 0x0(0x4)
	int32_t BMPHeight; // 0x4(0x4)
	struct TArray<struct FColor> Colors; // 0x8(0x10)
	struct FVector2D ZeroPoint; // 0x18(0x8)
	float ScaleValue; // 0x20(0x4)
	int32_t MinLine; // 0x24(0x4)
	int32_t MaxLine; // 0x28(0x4)
	int32_t MinRow; // 0x2C(0x4)
	int32_t MaxRow; // 0x30(0x4)
	struct FBox OriginBoundBox; // 0x34(0x1C)
};

// Object: ScriptStruct MFNPCAI.AILandscapeGrassBlock
// Size: 0x28 (Inherited: 0x0)
struct FAILandscapeGrassBlock
{
	struct FBox Bounds; // 0x0(0x1C)
	struct FVector Location; // 0x1C(0xC)
};

// Object: ScriptStruct MFNPCAI.AIGrassBlock
// Size: 0x58 (Inherited: 0x28)
struct FAIGrassBlock : FAILandscapeGrassBlock
{
	struct FName AIGrassName; // 0x28(0x8)
	uint8_t Density; // 0x30(0x1)
	uint8_t Pad_0x31[0x7]; // 0x31(0x7)
	struct TArray<struct FAIGrassBox> GrassBoxList; // 0x38(0x10)
	struct TArray<struct FAIGrassCylinder> GrassCylinderList; // 0x48(0x10)
};

// Object: ScriptStruct MFNPCAI.AIGrassCylinder
// Size: 0x20 (Inherited: 0x0)
struct FAIGrassCylinder
{
	float ZCenter; // 0x0(0x4)
	float HalfHeight; // 0x4(0x4)
	float Radius; // 0x8(0x4)
	uint8_t Pad_0xC[0x4]; // 0xC(0x4)
	struct TArray<uint8_t> PartsDensities; // 0x10(0x10)
};

// Object: ScriptStruct MFNPCAI.AIGrassBox
// Size: 0x1C (Inherited: 0x0)
struct FAIGrassBox
{
	struct FVector Center; // 0x0(0xC)
	struct FVector Extent; // 0xC(0xC)
	float Density; // 0x18(0x4)
};

// Object: ScriptStruct MFNPCAI.AIGrassEditorBlock
// Size: 0x60 (Inherited: 0x58)
struct FAIGrassEditorBlock : FAIGrassBlock
{
	struct UStaticMesh* StaticMesh; // 0x58(0x8)
};

// Object: ScriptStruct MFNPCAI.AIFoliageGrassBlock
// Size: 0x38 (Inherited: 0x0)
struct FAIFoliageGrassBlock
{
	int32_t Index; // 0x0(0x4)
	struct FBox Bounds; // 0x4(0x1C)
	struct FVector Location; // 0x20(0xC)
	float RotatonYaw; // 0x2C(0x4)
	uint8_t Density; // 0x30(0x1)
	uint8_t Pad_0x31[0x3]; // 0x31(0x3)
	float ScaleValue; // 0x34(0x4)
};

// Object: ScriptStruct MFNPCAI.AIGrassMapInfo
// Size: 0x80 (Inherited: 0x0)
struct FAIGrassMapInfo
{
	struct FString MapName; // 0x0(0x10)
	float MapTopX; // 0x10(0x4)
	float MapTopY; // 0x14(0x4)
	float MapSizeX; // 0x18(0x4)
	float MapSizeY; // 0x1C(0x4)
	int32_t MapLandscapeGrassCellCountX; // 0x20(0x4)
	int32_t MapLandscapeGrassCellCountY; // 0x24(0x4)
	float LandscapeGrassCellSize; // 0x28(0x4)
	int32_t MinLandscapeGrassCountInCell; // 0x2C(0x4)
	float MinCellCoverPercent; // 0x30(0x4)
	float MinLandscapeGrassHeight; // 0x34(0x4)
	float LandscapeGrassZGapLimit; // 0x38(0x4)
	float MinGrassHeight; // 0x3C(0x4)
	float AverageDensityLimit; // 0x40(0x4)
	uint8_t Pad_0x44[0x4]; // 0x44(0x4)
	struct FString IgnoreFoliageTags; // 0x48(0x10)
	bool bIsGenerateMeshGrass; // 0x58(0x1)
	uint8_t Pad_0x59[0x7]; // 0x59(0x7)
	struct FString MeshGrassTags; // 0x60(0x10)
	struct FString SaveLevelName; // 0x70(0x10)
};

// Object: ScriptStruct MFNPCAI.AISenseFlashBlock
// Size: 0x44 (Inherited: 0x0)
struct FAISenseFlashBlock
{
	uint8_t Pad_0x0[0x8]; // 0x0(0x8)
	struct FVector StartPos; // 0x8(0xC)
	struct FVector Dir; // 0x14(0xC)
	float FarDim; // 0x20(0x4)
	float NearDim; // 0x24(0x4)
	float ZoneAngle; // 0x28(0x4)
	float FaceAngle; // 0x2C(0x4)
	float SevereDebuffDistance; // 0x30(0x4)
	float ModerateDebuffDistance; // 0x34(0x4)
	float MildDebuffDistance; // 0x38(0x4)
	float Height; // 0x3C(0x4)
	float MaxHeight; // 0x40(0x4)
};

// Object: ScriptStruct MFNPCAI.AIBlockArea
// Size: 0x64 (Inherited: 0x0)
struct FAIBlockArea
{
	int32_t UniqueID; // 0x0(0x4)
	ENPCAIPerceptibleTile TileType; // 0x4(0x1)
	uint8_t Pad_0x5[0x3]; // 0x5(0x3)
	struct FBox BlockBox; // 0x8(0x1C)
	struct FBox EffectiveBox; // 0x24(0x1C)
	struct FVector Center; // 0x40(0xC)
	float Radius; // 0x4C(0x4)
	float Heigh; // 0x50(0x4)
	float startTime; // 0x54(0x4)
	float endTime; // 0x58(0x4)
	float BlockStartTime; // 0x5C(0x4)
	float BlockEndTime; // 0x60(0x4)
};

// Object: ScriptStruct MFNPCAI.NPCAIPortraitToIDTableRow
// Size: 0x38 (Inherited: 0x8)
struct FNPCAIPortraitToIDTableRow : FTableRowBase
{
	struct TSoftClassPtr<struct UAIPortraitBase*> PortraitClass; // 0x8(0x28)
	int64_t AIID; // 0x30(0x8)
};

// Object: ScriptStruct MFNPCAI.AIBodyPartHPDamageLimit
// Size: 0x8 (Inherited: 0x0)
struct FAIBodyPartHPDamageLimit
{
	EAIBodyPartType BodyPart; // 0x0(0x1)
	uint8_t Pad_0x1[0x3]; // 0x1(0x3)
	float LimitValue; // 0x4(0x4)
};

// Object: ScriptStruct MFNPCAI.AIPerkInfos
// Size: 0x10 (Inherited: 0x0)
struct FAIPerkInfos
{
	struct TArray<int32_t> PerkIDs; // 0x0(0x10)
};

// Object: ScriptStruct MFNPCAI.AIMindGoalEnemyAngleMultiple
// Size: 0xC (Inherited: 0x0)
struct FAIMindGoalEnemyAngleMultiple
{
	float Angle; // 0x0(0x4)
	float ScoreMultiple; // 0x4(0x4)
	float AngleCos; // 0x8(0x4)
};

// Object: ScriptStruct MFNPCAI.AIPropertyNavProfile_Clamp
// Size: 0xC (Inherited: 0x0)
struct FAIPropertyNavProfile_Clamp
{
	float Min; // 0x0(0x4)
	float Max; // 0x4(0x4)
	uint8_t Pad_0x8[0x4]; // 0x8(0x4)
};

// Object: ScriptStruct MFNPCAI.NPCAISceneEventInfo
// Size: 0x40 (Inherited: 0x0)
struct FNPCAISceneEventInfo
{
	int32_t UniqueID; // 0x0(0x4)
	ENPCAISceneEventID EventId; // 0x4(0x1)
	uint8_t Pad_0x5[0x3]; // 0x5(0x3)
	float startTime; // 0x8(0x4)
	float endTime; // 0xC(0x4)
	float ValidScope; // 0x10(0x4)
	struct FVector TriggerLocation; // 0x14(0xC)
	struct TArray<int64_t> AIIDs; // 0x20(0x10)
	struct TArray<int64_t> AIPathGroupIDs; // 0x30(0x10)
};

// Object: ScriptStruct MFNPCAI.NPCAISceneEventTableRow
// Size: 0x48 (Inherited: 0x8)
struct FNPCAISceneEventTableRow : FTableRowBase
{
	ENPCAISceneEventID EventId; // 0x8(0x1)
	uint8_t Pad_0x9[0x3]; // 0x9(0x3)
	float ValidTime; // 0xC(0x4)
	float ValidScope; // 0x10(0x4)
	uint8_t Pad_0x14[0x4]; // 0x14(0x4)
	struct TArray<int64_t> AIIDs; // 0x18(0x10)
	struct TArray<int64_t> PathGroupIDs; // 0x28(0x10)
	struct FString Comments; // 0x38(0x10)
};

// Object: ScriptStruct MFNPCAI.NPCAIComingExplosionEvent
// Size: 0x30 (Inherited: 0x0)
struct FNPCAIComingExplosionEvent
{
	uint8_t Pad_0x0[0x4]; // 0x0(0x4)
	struct FVector ExplosionLocation; // 0x4(0xC)
	float Damage; // 0x10(0x4)
	float MaxRange; // 0x14(0x4)
	struct AActor* Instigator; // 0x18(0x8)
	struct FName Tag; // 0x20(0x8)
	uint8_t Pad_0x28[0x8]; // 0x28(0x8)
};

// Object: ScriptStruct MFNPCAI.NPCAIDamageEvent
// Size: 0x38 (Inherited: 0x30)
struct FNPCAIDamageEvent : FAIDamageEvent
{
	struct FName Tag; // 0x30(0x8)
};

// Object: ScriptStruct MFNPCAI.NPCAINoiseEvent
// Size: 0x38 (Inherited: 0x38)
struct FNPCAINoiseEvent : FAINoiseEvent
{
};

// Object: ScriptStruct MFNPCAI.NPCAISteepZoneDeleteStage
// Size: 0x10 (Inherited: 0x0)
struct FNPCAISteepZoneDeleteStage
{
	uint8_t Pad_0x0[0x10]; // 0x0(0x10)
};

// Object: ScriptStruct MFNPCAI.NPCAISteepZoneCalculatePointNormalStage
// Size: 0x10 (Inherited: 0x10)
struct FNPCAISteepZoneCalculatePointNormalStage : FNPCAISteepZoneDeleteStage
{
};

// Object: ScriptStruct MFNPCAI.NPCAISteepZoneCalculatePointSteepDensityStage
// Size: 0x10 (Inherited: 0x10)
struct FNPCAISteepZoneCalculatePointSteepDensityStage : FNPCAISteepZoneDeleteStage
{
};

// Object: ScriptStruct MFNPCAI.NPCAISteepZoneCalculatePolyNormalStage
// Size: 0x10 (Inherited: 0x10)
struct FNPCAISteepZoneCalculatePolyNormalStage : FNPCAISteepZoneDeleteStage
{
};

// Object: ScriptStruct MFNPCAI.NPCAISteepZoneCollectNavMeshPolyStage
// Size: 0x10 (Inherited: 0x10)
struct FNPCAISteepZoneCollectNavMeshPolyStage : FNPCAISteepZoneDeleteStage
{
};

// Object: ScriptStruct MFNPCAI.NPCAISteepZoneDeleter
// Size: 0x1D0 (Inherited: 0x0)
struct FNPCAISteepZoneDeleter
{
	struct UObject* WorldContextObject; // 0x0(0x8)
	uint8_t Pad_0x8[0x18]; // 0x8(0x18)
	struct UWorld* World; // 0x20(0x8)
	uint8_t Pad_0x28[0x8]; // 0x28(0x8)
	struct ARecastNavMesh* MainNavData; // 0x30(0x8)
	struct ANPCAINavMeshManager* NavMeshManager; // 0x38(0x8)
	uint8_t Pad_0x40[0x190]; // 0x40(0x190)
};

// Object: ScriptStruct MFNPCAI.NPCAISteepZoneGenerateSamplePointStage
// Size: 0x10 (Inherited: 0x10)
struct FNPCAISteepZoneGenerateSamplePointStage : FNPCAISteepZoneDeleteStage
{
};

// Object: ScriptStruct MFNPCAI.NPCAISteepZoneModifyTileCacheStage
// Size: 0x10 (Inherited: 0x10)
struct FNPCAISteepZoneModifyTileCacheStage : FNPCAISteepZoneDeleteStage
{
};

// Object: ScriptStruct MFNPCAI.NPCAISteepZoneRebuildNavMeshStage
// Size: 0x10 (Inherited: 0x10)
struct FNPCAISteepZoneRebuildNavMeshStage : FNPCAISteepZoneDeleteStage
{
};

// Object: ScriptStruct MFNPCAI.SteepZoneSamplePoint
// Size: 0x50 (Inherited: 0x0)
struct FSteepZoneSamplePoint
{
	uint8_t Pad_0x0[0x50]; // 0x0(0x50)
};

// Object: ScriptStruct MFNPCAI.SteepZoneNavMeshPoly
// Size: 0x48 (Inherited: 0x0)
struct FSteepZoneNavMeshPoly
{
	uint8_t Pad_0x0[0x48]; // 0x0(0x48)
};

// Object: ScriptStruct MFNPCAI.SteepZoneDetailTriangle
// Size: 0x70 (Inherited: 0x0)
struct FSteepZoneDetailTriangle
{
	uint8_t Pad_0x0[0x70]; // 0x0(0x70)
};

// Object: ScriptStruct MFNPCAI.SteepZoneDeleteSettings
// Size: 0x34 (Inherited: 0x0)
struct FSteepZoneDeleteSettings
{
	struct FVector NavQueryExtent; // 0x0(0xC)
	bool bHintProjection2D; // 0xC(0x1)
	uint8_t Pad_0xD[0x3]; // 0xD(0x3)
	float SampleSpacing; // 0x10(0x4)
	float TraceRadius; // 0x14(0x4)
	float IncludedAngleTolerance; // 0x18(0x4)
	float WalkableFloorAngle; // 0x1C(0x4)
	float DensityQuerySize; // 0x20(0x4)
	uint8_t Pad_0x24[0x8]; // 0x24(0x8)
	uint8_t TraceChannel; // 0x2C(0x1)
	bool bTraceComplex; // 0x2D(0x1)
	bool bParallelCollectNavMeshPoly; // 0x2E(0x1)
	bool bParallelCalculatePolyNormal; // 0x2F(0x1)
	bool bParallelGenerateSamplePoint; // 0x30(0x1)
	bool bParallelCalculatePointNormal; // 0x31(0x1)
	bool bParallelCalculateSteepDensity; // 0x32(0x1)
	bool bParallelModifyTileCache; // 0x33(0x1)
};

// Object: ScriptStruct MFNPCAI.AIGroupAllyDeathInfo
// Size: 0x1C (Inherited: 0x0)
struct FAIGroupAllyDeathInfo
{
	float DeathTime; // 0x0(0x4)
	struct FVector DeathLocation; // 0x4(0xC)
	struct FVector KillerLocation; // 0x10(0xC)
};

// Object: ScriptStruct MFNPCAI.AITrackLOGTemplateForDataTable
// Size: 0x20 (Inherited: 0x8)
struct FAITrackLOGTemplateForDataTable : FTableRowBase
{
	EAITrackLOGType LogType; // 0x8(0x1)
	uint8_t Pad_0x9[0x7]; // 0x9(0x7)
	struct FString Template; // 0x10(0x10)
};

// Object: ScriptStruct MFNPCAI.AITrackLOG
// Size: 0x18 (Inherited: 0x0)
struct FAITrackLOG
{
	EAITrackLOGType LogType; // 0x0(0x1)
	uint8_t Pad_0x1[0x7]; // 0x1(0x7)
	int64_t LOGTime; // 0x8(0x8)
	struct FName LOGKValues; // 0x10(0x8)
};

// Object: ScriptStruct MFNPCAI.AIActorArray
// Size: 0x10 (Inherited: 0x0)
struct FAIActorArray
{
	struct TArray<struct AActor*> ActorArray; // 0x0(0x10)
};

// Object: ScriptStruct MFNPCAI.AICaredVehicleInfo
// Size: 0x20 (Inherited: 0x0)
struct FAICaredVehicleInfo
{
	struct AActor* Vehicle; // 0x0(0x8)
	float LoseControlTime; // 0x8(0x4)
	float ResumeTime; // 0xC(0x4)
	float LastCalcTime; // 0x10(0x4)
	float NoDriverStartTime; // 0x14(0x4)
	float DeltaTime; // 0x18(0x4)
	uint8_t Pad_0x1C[0x4]; // 0x1C(0x4)
};

// Object: ScriptStruct MFNPCAI.AILocationMonitor
// Size: 0x30 (Inherited: 0x0)
struct FAILocationMonitor
{
	struct TWeakObjectPtr<struct APawn> Target; // 0x0(0x8)
	float MonitoringInterval; // 0x8(0x4)
	float MaxTimeAllowOutOfNavmesh; // 0xC(0x4)
	uint8_t Pad_0x10[0x20]; // 0x10(0x20)
};

// Object: ScriptStruct MFNPCAI.AILocationRecord
// Size: 0x14 (Inherited: 0x0)
struct FAILocationRecord
{
	uint8_t Pad_0x0[0x14]; // 0x0(0x14)
};

// Object: ScriptStruct MFNPCAI.AIPathDebugInfo
// Size: 0x18 (Inherited: 0x0)
struct FAIPathDebugInfo
{
	struct TArray<struct FVector> PathPoints; // 0x0(0x10)
	int32_t SegmentStartIndex; // 0x10(0x4)
	uint8_t Pad_0x14[0x4]; // 0x14(0x4)
};

// Object: ScriptStruct MFNPCAI.AIDebugLineStruct
// Size: 0x28 (Inherited: 0x0)
struct FAIDebugLineStruct
{
	int32_t ID; // 0x0(0x4)
	struct FVector StartLocation; // 0x4(0xC)
	struct FVector EndLocation; // 0x10(0xC)
	struct FColor Color; // 0x1C(0x4)
	float DurationTime; // 0x20(0x4)
	float endTime; // 0x24(0x4)
};

// Object: ScriptStruct MFNPCAI.AIDebugDrawSphereInfo
// Size: 0x24 (Inherited: 0x0)
struct FAIDebugDrawSphereInfo
{
	struct FVector Loc; // 0x0(0xC)
	float Radius; // 0xC(0x4)
	struct FLinearColor LineColor; // 0x10(0x10)
	float Duration; // 0x20(0x4)
};

// Object: ScriptStruct MFNPCAI.AIDebugDrawLineInfo
// Size: 0x30 (Inherited: 0x0)
struct FAIDebugDrawLineInfo
{
	struct FVector StartLoc; // 0x0(0xC)
	struct FVector EndLoc; // 0xC(0xC)
	struct FLinearColor LineColor; // 0x18(0x10)
	float Duration; // 0x28(0x4)
	float Thickness; // 0x2C(0x4)
};

// Object: ScriptStruct MFNPCAI.AIShotCountStat
// Size: 0x10 (Inherited: 0x0)
struct FAIShotCountStat
{
	int32_t Count; // 0x0(0x4)
	float LastTime; // 0x4(0x4)
	float FirstTime; // 0x8(0x4)
	float IntervalToClear; // 0xC(0x4)
};

// Object: ScriptStruct MFNPCAI.PMCAISpawnInfo_ForSearchPath
// Size: 0x10 (Inherited: 0x0)
struct FPMCAISpawnInfo_ForSearchPath
{
	struct AActor* SourcePoint; // 0x0(0x8)
	float TotalCost; // 0x8(0x4)
	bool Checked; // 0xC(0x1)
	uint8_t Pad_0xD[0x3]; // 0xD(0x3)
};

// Object: ScriptStruct MFNPCAI.CheckCoverPointFinder
// Size: 0x28 (Inherited: 0x0)
struct FCheckCoverPointFinder
{
	struct AActor* AIPawn; // 0x0(0x8)
	float CheckPathLength; // 0x8(0x4)
	int32_t IndexFind; // 0xC(0x4)
	float LastTimestamp; // 0x10(0x4)
	uint8_t Pad_0x14[0x4]; // 0x14(0x4)
	struct TArray<struct FCoverPointOctreeElement> Elements; // 0x18(0x10)
};

// Object: ScriptStruct MFNPCAI.AIBackUpCoverPointFinder
// Size: 0x1C (Inherited: 0x0)
struct FAIBackUpCoverPointFinder
{
	struct FVector AIPosistion; // 0x0(0xC)
	struct FVector EnemyPosition; // 0xC(0xC)
	float LastTime; // 0x18(0x4)
};

// Object: ScriptStruct MFNPCAI.AICoverPointInfo
// Size: 0x48 (Inherited: 0x0)
struct FAICoverPointInfo
{
	int32_t ID; // 0x0(0x4)
	bool IsFree; // 0x4(0x1)
	uint8_t Pad_0x5[0x3]; // 0x5(0x3)
	struct AActor* OwnerActor; // 0x8(0x8)
	struct FVector Location; // 0x10(0xC)
	struct FVector ToWallVector; // 0x1C(0xC)
	EAIPose ProtectedStance; // 0x28(0x1)
	bool IsSafe; // 0x29(0x1)
	uint8_t Pad_0x2A[0x2]; // 0x2A(0x2)
	float LastSpottedTime; // 0x2C(0x4)
	struct FVector FirePosition; // 0x30(0xC)
	EAIPose FireStance; // 0x3C(0x1)
	EAILeanType TiltType; // 0x3D(0x1)
	uint8_t Pad_0x3E[0x2]; // 0x3E(0x2)
	float BaseWeight; // 0x40(0x4)
	uint8_t Pad_0x44[0x4]; // 0x44(0x4)
};

// Object: ScriptStruct MFNPCAI.AICharacterConfig
// Size: 0x8 (Inherited: 0x0)
struct FAICharacterConfig
{
	float FireInterval; // 0x0(0x4)
	float PerBurstReduce; // 0x4(0x4)
};

// Object: ScriptStruct MFNPCAI.AIIDSegInfoData
// Size: 0x10 (Inherited: 0x0)
struct FAIIDSegInfoData
{
	int64_t Div; // 0x0(0x8)
	int64_t Mod; // 0x8(0x8)
};

// Object: ScriptStruct MFNPCAI.AIIDSegInfo
// Size: 0x40 (Inherited: 0x0)
struct FAIIDSegInfo
{
	struct FAIIDSegInfoData MainCategory; // 0x0(0x10)
	struct FAIIDSegInfoData Career; // 0x10(0x10)
	struct FAIIDSegInfoData Tendency; // 0x20(0x10)
	struct FAIIDSegInfoData Difficulty; // 0x30(0x10)
};

// Object: ScriptStruct MFNPCAI.AIStackGunRecord
// Size: 0x44 (Inherited: 0x0)
struct FAIStackGunRecord
{
	bool CanStackGun; // 0x0(0x1)
	uint8_t Pad_0x1[0x3]; // 0x1(0x3)
	struct FVector MyPosition; // 0x4(0xC)
	struct FVector EnemyPosition; // 0x10(0xC)
	EAILeanType AILean; // 0x1C(0x1)
	EAIPose AIPose; // 0x1D(0x1)
	uint8_t Pad_0x1E[0x2]; // 0x1E(0x2)
	struct FVector GunPoint; // 0x20(0xC)
	struct FVector EeyPoint; // 0x2C(0xC)
	struct FVector ShootPoint; // 0x38(0xC)
};

// Object: ScriptStruct MFNPCAI.NPCAIRollDecisionStruct
// Size: 0x18 (Inherited: 0x8)
struct FNPCAIRollDecisionStruct : FTableRowBase
{
	ENPCAIDecision Decision; // 0x8(0x1)
	uint8_t Pad_0x9[0x3]; // 0x9(0x3)
	float BaseTendency; // 0xC(0x4)
	float BasePerceive; // 0x10(0x4)
	uint8_t Pad_0x14[0x4]; // 0x14(0x4)
};

// Object: ScriptStruct MFNPCAI.NPCAIFireSetting
// Size: 0x40 (Inherited: 0x0)
struct FNPCAIFireSetting
{
	struct FVector Location; // 0x0(0xC)
	uint8_t Pad_0xC[0x4]; // 0xC(0x4)
	struct AActor* EnemyTarget; // 0x10(0x8)
	bool bCalcSight; // 0x18(0x1)
	bool bCalcShoot; // 0x19(0x1)
	uint8_t Pad_0x1A[0x2]; // 0x1A(0x2)
	float FireInterval; // 0x1C(0x4)
	bool bIgnoreAimingTime; // 0x20(0x1)
	bool bEnabledHitRateControl; // 0x21(0x1)
	bool bEnabledRecoilControl; // 0x22(0x1)
	EAIBodyPartType ShootPartID; // 0x23(0x1)
	EAIBodyPartType LastShootPartID; // 0x24(0x1)
	EAIBodyPartType RealHitPartID; // 0x25(0x1)
	bool bPressureAim; // 0x26(0x1)
	uint8_t Pad_0x27[0x1]; // 0x27(0x1)
	float WaitEndtime; // 0x28(0x4)
	struct FVector LastFireLocation; // 0x2C(0xC)
	struct UNPCAITargetInfo* EnemyInfo; // 0x38(0x8)
};

// Object: ScriptStruct MFNPCAI.NPCAIFireOrder
// Size: 0x18 (Inherited: 0x0)
struct FNPCAIFireOrder
{
	bool bValidOrder; // 0x0(0x1)
	uint8_t Pad_0x1[0x3]; // 0x1(0x3)
	struct FVector FirePoint; // 0x4(0xC)
	EAIBodyPartType HitPart; // 0x10(0x1)
	bool IsUsingPredestined; // 0x11(0x1)
	bool IsHit; // 0x12(0x1)
	bool bShotLimited; // 0x13(0x1)
	bool bFakeShot; // 0x14(0x1)
	uint8_t Pad_0x15[0x3]; // 0x15(0x3)
};

// Object: ScriptStruct MFNPCAI.AIBodyPartVisibilityInfo
// Size: 0x14 (Inherited: 0x0)
struct FAIBodyPartVisibilityInfo
{
	EAIBodyPartType BodyPartType; // 0x0(0x1)
	bool bIsVisible; // 0x1(0x1)
	bool bCanShoot; // 0x2(0x1)
	uint8_t Pad_0x3[0x1]; // 0x3(0x1)
	float LastCanSeeTime; // 0x4(0x4)
	int32_t GrassWeight; // 0x8(0x4)
	int32_t ShootCalculateCount; // 0xC(0x4)
	ENPCAISenseBarrier Barrier; // 0x10(0x1)
	uint8_t Pad_0x11[0x3]; // 0x11(0x3)
};

// Object: ScriptStruct MFNPCAI.AIBodyPartHitInfo
// Size: 0x14 (Inherited: 0x0)
struct FAIBodyPartHitInfo
{
	EAIBodyPartType BodyPartType; // 0x0(0x1)
	uint8_t Pad_0x1[0x3]; // 0x1(0x3)
	float HitDurationStartTime; // 0x4(0x4)
	float HitDurationValues; // 0x8(0x4)
	float FirstHitTime; // 0xC(0x4)
	float LastHitTime; // 0x10(0x4)
};

// Object: ScriptStruct MFNPCAI.AIBodyBulkAimingChoice
// Size: 0x18 (Inherited: 0x0)
struct FAIBodyBulkAimingChoice
{
	EAIBodyBulkType BodyBulk; // 0x0(0x1)
	uint8_t Pad_0x1[0x3]; // 0x1(0x3)
	float Weight; // 0x4(0x4)
	struct TArray<struct FAIBodyPartAimingChoice> BodyParts; // 0x8(0x10)
};

// Object: ScriptStruct MFNPCAI.AIBodyPartAimingChoice
// Size: 0x8 (Inherited: 0x0)
struct FAIBodyPartAimingChoice
{
	EAIBodyPartType BodyPart; // 0x0(0x1)
	uint8_t Pad_0x1[0x3]; // 0x1(0x3)
	float Weight; // 0x4(0x4)
};

// Object: ScriptStruct MFNPCAI.AINoiseMakerInfo
// Size: 0x10 (Inherited: 0x0)
struct FAINoiseMakerInfo
{
	float lasttime_footstep; // 0x0(0x4)
	float lasttime_gunfire; // 0x4(0x4)
	float lasttime_bulletfire; // 0x8(0x4)
	float lasttime_bullethit; // 0xC(0x4)
};

// Object: ScriptStruct MFNPCAI.AIVisibleResult
// Size: 0xC (Inherited: 0x0)
struct FAIVisibleResult
{
	bool IsVisible; // 0x0(0x1)
	uint8_t Pad_0x1[0x3]; // 0x1(0x3)
	int32_t BlockWeight; // 0x4(0x4)
	ENPCAISenseBarrier Barrier; // 0x8(0x1)
	uint8_t Pad_0x9[0x3]; // 0x9(0x3)
};

// Object: ScriptStruct MFNPCAI.AISenseDrone
// Size: 0x20 (Inherited: 0x0)
struct FAISenseDrone
{
	int64_t DroneItemID; // 0x0(0x8)
	float VisionRadius180; // 0x8(0x4)
	float Angle; // 0xC(0x4)
	float VisionRadius; // 0x10(0x4)
	float HearRadius; // 0x14(0x4)
	bool CanHearNoMove; // 0x18(0x1)
	uint8_t Pad_0x19[0x3]; // 0x19(0x3)
	float AngleCos; // 0x1C(0x4)
};

// Object: ScriptStruct MFNPCAI.AISenseSightNormal
// Size: 0x18 (Inherited: 0x0)
struct FAISenseSightNormal
{
	float Angle; // 0x0(0x4)
	float VisionRadius; // 0x4(0x4)
	float LostVisionRadius; // 0x8(0x4)
	float AngleCos; // 0xC(0x4)
	float VisionRadiusSqr; // 0x10(0x4)
	float LostVisionRadiusSqr; // 0x14(0x4)
};

// Object: ScriptStruct MFNPCAI.NPCAIWeaponConfigTableRow
// Size: 0x8 (Inherited: 0x8)
struct FNPCAIWeaponConfigTableRow : FTableRowBase
{
};

// Object: ScriptStruct MFNPCAI.AIAreaWeightQueryInfo
// Size: 0x14 (Inherited: 0x0)
struct FAIAreaWeightQueryInfo
{
	struct FVector Loc; // 0x0(0xC)
	float Weight; // 0xC(0x4)
	bool bIsValid; // 0x10(0x1)
	uint8_t Pad_0x11[0x3]; // 0x11(0x3)
};

// Object: Class MFNPCAI.AIRuntimeMonitor
// Size: 0x88 (Inherited: 0x28)
struct UAIRuntimeMonitor : UObject
{
	DEFINE_UE_CLASS_HELPERS(UAIRuntimeMonitor, "AIRuntimeMonitor")

	struct TMap<struct FString, struct FAIRuntimeMonitorStatInfo> StatMap; // 0x28(0x50)
	uint8_t Pad_0x78[0x10]; // 0x78(0x10)
};

// Object: Class MFNPCAI.AISceneEventMessage
// Size: 0x68 (Inherited: 0x28)
struct UAISceneEventMessage : UObject
{
	DEFINE_UE_CLASS_HELPERS(UAISceneEventMessage, "AISceneEventMessage")

	float ValidTime; // 0x28(0x4)
	float ValidScope; // 0x2C(0x4)
	struct TArray<struct FString> Tags; // 0x30(0x10)
	struct TArray<struct UObject*> ObjectParams; // 0x40(0x10)
	int32_t EvtUniqueId; // 0x50(0x4)
	float startTime; // 0x54(0x4)
	float endTime; // 0x58(0x4)
	struct FVector TriggerLocation; // 0x5C(0xC)

	// Object: Function MFNPCAI.AISceneEventMessage.IsExpired
	// Flags: [Final|Native|Public]
	// Offset: 0x3c4ca68
	// Params: [ Num(2) Size(0x5) ]
	bool IsExpired(float CurrentTimeSec);
};

// Object: Class MFNPCAI.AISceneEvent_SpawnAI
// Size: 0x70 (Inherited: 0x68)
struct UAISceneEvent_SpawnAI : UAISceneEventMessage
{
	DEFINE_UE_CLASS_HELPERS(UAISceneEvent_SpawnAI, "AISceneEvent_SpawnAI")

	EAISpawnSceneEvtType SpawnSceneEvtType; // 0x68(0x1)
	uint8_t Pad_0x69[0x7]; // 0x69(0x7)
};

// Object: Class MFNPCAI.AISceneEventsTriggerManager
// Size: 0x38 (Inherited: 0x28)
struct UAISceneEventsTriggerManager : UObject
{
	DEFINE_UE_CLASS_HELPERS(UAISceneEventsTriggerManager, "AISceneEventsTriggerManager")

	struct TArray<struct UAISceneEventMessage*> SceneEventsList; // 0x28(0x10)

	// Object: Function MFNPCAI.AISceneEventsTriggerManager.TriggerSceneEvent
	// Flags: [Native|Public|HasOutParms|HasDefaults|BlueprintCallable]
	// Offset: 0x3c4cfb4
	// Params: [ Num(4) Size(0x1C) ]
	int32_t TriggerSceneEvent(struct UAISceneEventMessage* SceneEvtMessage, const struct FVector& TriggerLocation, float CoverInRange);

	// Object: Function MFNPCAI.AISceneEventsTriggerManager.RemoveSceneEventByUniqueId
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0x3c4cd9c
	// Params: [ Num(1) Size(0x4) ]
	void RemoveSceneEventByUniqueId(int32_t EvtUniqueId);

	// Object: Function MFNPCAI.AISceneEventsTriggerManager.RemoveSceneEvent
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0x3c4ce4c
	// Params: [ Num(1) Size(0x8) ]
	void RemoveSceneEvent(struct UAISceneEventMessage* SceneEvtMessage);

	// Object: Function MFNPCAI.AISceneEventsTriggerManager.OnDSTick
	// Flags: [Native|Public]
	// Offset: 0x3c4d0fc
	// Params: [ Num(0) Size(0x0) ]
	void OnDSTick();

	// Object: Function MFNPCAI.AISceneEventsTriggerManager.GetSceneEventByUniqueId
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0x3c4cefc
	// Params: [ Num(2) Size(0x10) ]
	struct UAISceneEventMessage* GetSceneEventByUniqueId(int32_t EvtUniqueId);

	// Object: Function MFNPCAI.AISceneEventsTriggerManager.FindNearSceneEvents
	// Flags: [Native|Public|HasOutParms|HasDefaults|BlueprintCallable]
	// Offset: 0x3c4cbec
	// Params: [ Num(4) Size(0x21) ]
	bool FindNearSceneEvents(struct TArray<struct UAISceneEventMessage*> ActivedEvents, const struct FVector& CenterPos, float Radius);

	// Object: Function MFNPCAI.AISceneEventsTriggerManager.FilterExpiredSceneEvents
	// Flags: [Final|Native|Public]
	// Offset: 0x3c4cbd8
	// Params: [ Num(0) Size(0x0) ]
	void FilterExpiredSceneEvents();

	// Object: Function MFNPCAI.AISceneEventsTriggerManager.ClearExpiredSceneEventOnAI
	// Flags: [Final|Native|Public]
	// Offset: 0x3c4cb30
	// Params: [ Num(1) Size(0x4) ]
	void ClearExpiredSceneEventOnAI(int32_t EvtUniqueId);
};

// Object: Class MFNPCAI.AISGDoorManager
// Size: 0x50 (Inherited: 0x28)
struct UAISGDoorManager : UObject
{
	DEFINE_UE_CLASS_HELPERS(UAISGDoorManager, "AISGDoorManager")

	struct TArray<struct FAISGDoorUsed> AISGDoorUsedList; // 0x28(0x10)
	struct TArray<struct TWeakObjectPtr<struct AActor>> DoorsInWorld; // 0x38(0x10)
	float TimeFindDoorsInWorld; // 0x48(0x4)
	uint8_t Pad_0x4C[0x4]; // 0x4C(0x4)

	// Object: Function MFNPCAI.AISGDoorManager.WantToWaitUsed
	// Flags: [Final|Native|Public]
	// Offset: 0x3c4d2e0
	// Params: [ Num(2) Size(0x10) ]
	void WantToWaitUsed(struct ACharacter* AIPawn, struct AActor* SGDoor);

	// Object: Function MFNPCAI.AISGDoorManager.WantToUsedDoor
	// Flags: [Final|Native|Public]
	// Offset: 0x3c4d46c
	// Params: [ Num(3) Size(0x11) ]
	bool WantToUsedDoor(struct ACharacter* AIPawn, struct AActor* SGDoor);

	// Object: Function MFNPCAI.AISGDoorManager.ReleaseUsedDoor
	// Flags: [Final|Native|Public]
	// Offset: 0x3c4d3c4
	// Params: [ Num(1) Size(0x8) ]
	void ReleaseUsedDoor(struct ACharacter* AIPawn);

	// Object: Function MFNPCAI.AISGDoorManager.InitDoorsInWorld
	// Flags: [Final|Native|Private]
	// Offset: 0x3c4d12c
	// Params: [ Num(1) Size(0x8) ]
	void InitDoorsInWorld(struct UObject* WorldContext);

	// Object: Function MFNPCAI.AISGDoorManager.GetPawnUsedDoor
	// Flags: [Final|Native|Public]
	// Offset: 0x3c4d55c
	// Params: [ Num(2) Size(0x10) ]
	struct AActor* GetPawnUsedDoor(struct AActor* SGDoor);

	// Object: Function MFNPCAI.AISGDoorManager.GetDoor
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults]
	// Offset: 0x3c4d1d4
	// Params: [ Num(3) Size(0x20) ]
	struct AActor* GetDoor(struct UObject* WorldContext, const struct FVector& DoorPoint);

	// Object: Function MFNPCAI.AISGDoorManager.DoorIsBusy
	// Flags: [Final|Native|Public]
	// Offset: 0x3c4d60c
	// Params: [ Num(3) Size(0x11) ]
	bool DoorIsBusy(struct AActor* SGDoor, struct ACharacter* AIPawn);

	// Object: Function MFNPCAI.AISGDoorManager.AutoRemoveInValidUsed
	// Flags: [Final|Native|Public]
	// Offset: 0x3c4d2cc
	// Params: [ Num(0) Size(0x0) ]
	void AutoRemoveInValidUsed();
};

// Object: Class MFNPCAI.BehaviorTreeTooler
// Size: 0x28 (Inherited: 0x28)
struct UBehaviorTreeTooler : UBlueprintFunctionLibrary
{
	DEFINE_UE_CLASS_HELPERS(UBehaviorTreeTooler, "BehaviorTreeTooler")

	// Object: Function MFNPCAI.BehaviorTreeTooler.GetGameState
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3c4d71c
	// Params: [ Num(2) Size(0x10) ]
	static struct AGameState* GetGameState(struct UObject* World);

	// Object: Function MFNPCAI.BehaviorTreeTooler.GetClientWorld
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3c4d7c4
	// Params: [ Num(2) Size(0x10) ]
	static struct UWorld* GetClientWorld(struct UObject* WorldContext);
};

// Object: Class MFNPCAI.NavLinkProxyGenerator
// Size: 0x360 (Inherited: 0x300)
struct ANavLinkProxyGenerator : AInfo
{
	DEFINE_UE_CLASS_HELPERS(ANavLinkProxyGenerator, "NavLinkProxyGenerator")

	struct TSet<int32_t> EnabledMapIDs; // 0x300(0x50)
	struct UNavigationSystemV1* CachedNavSys; // 0x350(0x8)
	struct ARecastNavMesh* CachedNavMeshData; // 0x358(0x8)
};

// Object: Class MFNPCAI.NPCAIActorComponent
// Size: 0xF0 (Inherited: 0xE0)
struct UNPCAIActorComponent : UActorComponent
{
	DEFINE_UE_CLASS_HELPERS(UNPCAIActorComponent, "NPCAIActorComponent")

	struct TArray<struct UNPCAIProfileBaseComponent*> PropertyComponents; // 0xE0(0x10)

	// Object: Function MFNPCAI.NPCAIActorComponent.GetAIPropertyByClass
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3c4d880
	// Params: [ Num(2) Size(0x10) ]
	struct UNPCAIProfileBaseComponent* GetAIPropertyByClass(struct UNPCAIProfileBaseComponent* InPropertyClass);
};

// Object: Class MFNPCAI.NPCAIAimingInterface
// Size: 0x28 (Inherited: 0x28)
struct INPCAIAimingInterface : IInterface
{
	DEFINE_UE_CLASS_HELPERS(INPCAIAimingInterface, "NPCAIAimingInterface")

	// Object: Function MFNPCAI.NPCAIAimingInterface.UpdatePredestinedHit
	// Flags: [Native|Public]
	// Offset: 0x3c4dfcc
	// Params: [ Num(0) Size(0x0) ]
	void UpdatePredestinedHit();

	// Object: Function MFNPCAI.NPCAIAimingInterface.TriggerPressedDone
	// Flags: [Native|Public]
	// Offset: 0x3c4e004
	// Params: [ Num(1) Size(0x4) ]
	void TriggerPressedDone(float WeaponRecoilParam);

	// Object: Function MFNPCAI.NPCAIAimingInterface.SetTargetEnemy
	// Flags: [Native|Public]
	// Offset: 0x3c4e2d4
	// Params: [ Num(1) Size(0x8) ]
	void SetTargetEnemy(struct AActor* InEnemyPawn);

	// Object: Function MFNPCAI.NPCAIAimingInterface.SetShootPartID
	// Flags: [Native|Public]
	// Offset: 0x3c4dbc4
	// Params: [ Num(1) Size(0x1) ]
	void SetShootPartID(uint8_t InShootPartID);

	// Object: Function MFNPCAI.NPCAIAimingInterface.SetNextAimingDelay
	// Flags: [Native|Public]
	// Offset: 0x3c4e130
	// Params: [ Num(1) Size(0x4) ]
	void SetNextAimingDelay(float DelayTime);

	// Object: Function MFNPCAI.NPCAIAimingInterface.SetAimingPoint
	// Flags: [Native|Public|HasOutParms|HasDefaults]
	// Offset: 0x3c4e1e0
	// Params: [ Num(1) Size(0xC) ]
	void SetAimingPoint(const struct FVector& InAimingPoint);

	// Object: Function MFNPCAI.NPCAIAimingInterface.NodeUpdate
	// Flags: [Native|Public]
	// Offset: 0x3c4dfe8
	// Params: [ Num(0) Size(0x0) ]
	void NodeUpdate();

	// Object: Function MFNPCAI.NPCAIAimingInterface.NextShotMiss
	// Flags: [Native|Public]
	// Offset: 0x3c4dec0
	// Params: [ Num(0) Size(0x0) ]
	void NextShotMiss();

	// Object: Function MFNPCAI.NPCAIAimingInterface.NextShotHit
	// Flags: [Native|Public]
	// Offset: 0x3c4de48
	// Params: [ Num(0) Size(0x0) ]
	void NextShotHit();

	// Object: Function MFNPCAI.NPCAIAimingInterface.LoseTarget
	// Flags: [Native|Public]
	// Offset: 0x3c4e384
	// Params: [ Num(0) Size(0x0) ]
	void LoseTarget();

	// Object: Function MFNPCAI.NPCAIAimingInterface.IsWaitingStartAiming
	// Flags: [Native|Public]
	// Offset: 0x3c4e0b4
	// Params: [ Num(1) Size(0x1) ]
	bool IsWaitingStartAiming();

	// Object: Function MFNPCAI.NPCAIAimingInterface.IsUsingPredestined
	// Flags: [Native|Public|Const]
	// Offset: 0x3c4ddd0
	// Params: [ Num(1) Size(0x1) ]
	bool IsUsingPredestined();

	// Object: Function MFNPCAI.NPCAIAimingInterface.IsReady
	// Flags: [Native|Public]
	// Offset: 0x3c4e598
	// Params: [ Num(1) Size(0x1) ]
	bool IsReady();

	// Object: Function MFNPCAI.NPCAIAimingInterface.IsNextShotMiss
	// Flags: [Native|Public|Const]
	// Offset: 0x3c4dedc
	// Params: [ Num(1) Size(0x1) ]
	bool IsNextShotMiss();

	// Object: Function MFNPCAI.NPCAIAimingInterface.IsNextShotHit
	// Flags: [Native|Public|Const]
	// Offset: 0x3c4de64
	// Params: [ Num(1) Size(0x1) ]
	bool IsNextShotHit();

	// Object: Function MFNPCAI.NPCAIAimingInterface.IsInPullBolt
	// Flags: [Native|Public]
	// Offset: 0x3c4dcb4
	// Params: [ Num(1) Size(0x1) ]
	bool IsInPullBolt();

	// Object: Function MFNPCAI.NPCAIAimingInterface.IsFacingTargetPoint
	// Flags: [Native|Public|HasOutParms|HasDefaults]
	// Offset: 0x3c4da04
	// Params: [ Num(3) Size(0x11) ]
	bool IsFacingTargetPoint(const struct FVector& TargetPoint, float AngleLimit);

	// Object: Function MFNPCAI.NPCAIAimingInterface.HasAmmo
	// Flags: [Native|Public]
	// Offset: 0x3c4dc74
	// Params: [ Num(1) Size(0x1) ]
	bool HasAmmo();

	// Object: Function MFNPCAI.NPCAIAimingInterface.GetTargetEnemy
	// Flags: [Native|Public]
	// Offset: 0x3c4e298
	// Params: [ Num(1) Size(0x8) ]
	struct AActor* GetTargetEnemy();

	// Object: Function MFNPCAI.NPCAIAimingInterface.GetShootPartID
	// Flags: [Native|Public]
	// Offset: 0x3c4db88
	// Params: [ Num(1) Size(0x1) ]
	uint8_t GetShootPartID();

	// Object: Function MFNPCAI.NPCAIAimingInterface.GetMaxShotCount
	// Flags: [Native|Public|Const]
	// Offset: 0x3c4db10
	// Params: [ Num(1) Size(0x4) ]
	int32_t GetMaxShotCount();

	// Object: Function MFNPCAI.NPCAIAimingInterface.GetLastDist2Target
	// Flags: [Native|Public]
	// Offset: 0x3c4e3a0
	// Params: [ Num(1) Size(0x4) ]
	float GetLastDist2Target();

	// Object: Function MFNPCAI.NPCAIAimingInterface.GetHit
	// Flags: [Native|Public]
	// Offset: 0x3c4df1c
	// Params: [ Num(1) Size(0x4) ]
	void GetHit(int32_t DamageInfo);

	// Object: Function MFNPCAI.NPCAIAimingInterface.GetDimAimingPoint
	// Flags: [Native|Public|HasDefaults]
	// Offset: 0x3c4e3dc
	// Params: [ Num(2) Size(0x10) ]
	struct FVector GetDimAimingPoint(float Scaler);

	// Object: Function MFNPCAI.NPCAIAimingInterface.GetCurrentShotCount
	// Flags: [Native|Public|Const]
	// Offset: 0x3c4db4c
	// Params: [ Num(1) Size(0x4) ]
	int32_t GetCurrentShotCount();

	// Object: Function MFNPCAI.NPCAIAimingInterface.GetAimingPoint
	// Flags: [Native|Public|HasDefaults]
	// Offset: 0x3c4e554
	// Params: [ Num(1) Size(0xC) ]
	struct FVector GetAimingPoint();

	// Object: Function MFNPCAI.NPCAIAimingInterface.GetAimingOffset
	// Flags: [Native|Public|HasDefaults]
	// Offset: 0x3c4e498
	// Params: [ Num(2) Size(0x10) ]
	struct FVector GetAimingOffset(float WeakenTime);

	// Object: Function MFNPCAI.NPCAIAimingInterface.GetAimingLeftTime
	// Flags: [Native|Public]
	// Offset: 0x3c4e0f4
	// Params: [ Num(1) Size(0x4) ]
	float GetAimingLeftTime();

	// Object: Function MFNPCAI.NPCAIAimingInterface.ForceCompleteAim
	// Flags: [Native|Public]
	// Offset: 0x3c4dcf4
	// Params: [ Num(0) Size(0x0) ]
	void ForceCompleteAim();

	// Object: Function MFNPCAI.NPCAIAimingInterface.ClearNextShotMiss
	// Flags: [Native|Public]
	// Offset: 0x3c4dea4
	// Params: [ Num(0) Size(0x0) ]
	void ClearNextShotMiss();

	// Object: Function MFNPCAI.NPCAIAimingInterface.ClearNextShotHit
	// Flags: [Native|Public]
	// Offset: 0x3c4de2c
	// Params: [ Num(0) Size(0x0) ]
	void ClearNextShotHit();

	// Object: Function MFNPCAI.NPCAIAimingInterface.ClearNextShotFlags
	// Flags: [Native|Public]
	// Offset: 0x3c4de10
	// Params: [ Num(0) Size(0x0) ]
	void ClearNextShotFlags();

	// Object: Function MFNPCAI.NPCAIAimingInterface.CalculateRequiredAimingTime
	// Flags: [Native|Public|HasOutParms|HasDefaults]
	// Offset: 0x3c4dd10
	// Params: [ Num(2) Size(0x10) ]
	float CalculateRequiredAimingTime(const struct FVector& AimingPos);
};

// Object: Class MFNPCAI.NPCAIAllyControllerCompoentInterface
// Size: 0x28 (Inherited: 0x28)
struct INPCAIAllyControllerCompoentInterface : IInterface
{
	DEFINE_UE_CLASS_HELPERS(INPCAIAllyControllerCompoentInterface, "NPCAIAllyControllerCompoentInterface")
};

// Object: Class MFNPCAI.NPCAIAntiCamperComponent
// Size: 0xE0 (Inherited: 0xE0)
struct UNPCAIAntiCamperComponent : UActorComponent
{
	DEFINE_UE_CLASS_HELPERS(UNPCAIAntiCamperComponent, "NPCAIAntiCamperComponent")
};

// Object: Class MFNPCAI.NPCAIAreaVolumeInterface
// Size: 0x28 (Inherited: 0x28)
struct INPCAIAreaVolumeInterface : IInterface
{
	DEFINE_UE_CLASS_HELPERS(INPCAIAreaVolumeInterface, "NPCAIAreaVolumeInterface")
};

// Object: Class MFNPCAI.NPCAIAsyncTaskBase
// Size: 0x40 (Inherited: 0x30)
struct UNPCAIAsyncTaskBase : UBlueprintAsyncActionBase
{
	DEFINE_UE_CLASS_HELPERS(UNPCAIAsyncTaskBase, "NPCAIAsyncTaskBase")

	bool bSimpleTodo; // 0x30(0x1)
	uint8_t Pad_0x31[0x7]; // 0x31(0x7)
	struct AActor* AIPawn; // 0x38(0x8)
};

// Object: Class MFNPCAI.SGBaseAISubsystem
// Size: 0x30 (Inherited: 0x30)
struct USGBaseAISubsystem : UWorldSubsystem
{
	DEFINE_UE_CLASS_HELPERS(USGBaseAISubsystem, "SGBaseAISubsystem")
};

// Object: Class MFNPCAI.NPCAIAsyncTaskSystem
// Size: 0x40 (Inherited: 0x30)
struct UNPCAIAsyncTaskSystem : USGBaseAISubsystem
{
	DEFINE_UE_CLASS_HELPERS(UNPCAIAsyncTaskSystem, "NPCAIAsyncTaskSystem")

	struct TArray<struct FNPCAIAsyncTask> AsyncTasks; // 0x30(0x10)

	// Object: Function MFNPCAI.NPCAIAsyncTaskSystem.OnDSTick
	// Flags: [Final|Native|Public]
	// Offset: 0x3c4e8dc
	// Params: [ Num(0) Size(0x0) ]
	void OnDSTick();

	// Object: Function MFNPCAI.NPCAIAsyncTaskSystem.HasTask
	// Flags: [Final|Native|Public|HasOutParms]
	// Offset: 0x3c4e7dc
	// Params: [ Num(3) Size(0xA) ]
	bool HasTask(struct AActor* AIPawn, const ENPCAIAsyncTaskType& InType);

	// Object: Function MFNPCAI.NPCAIAsyncTaskSystem.GetTask
	// Flags: [Final|Native|Public|HasOutParms]
	// Offset: 0x3c4e6e0
	// Params: [ Num(3) Size(0x18) ]
	struct UNPCAIAsyncTaskBase* GetTask(struct AActor* AIPawn, const ENPCAIAsyncTaskType& InType);
};

// Object: Class MFNPCAI.NPCAIAttentionPoint
// Size: 0xA0 (Inherited: 0x28)
struct UNPCAIAttentionPoint : UObject
{
	DEFINE_UE_CLASS_HELPERS(UNPCAIAttentionPoint, "NPCAIAttentionPoint")

	bool bIsCome; // 0x28(0x1)
	uint8_t Pad_0x29[0x7]; // 0x29(0x7)
	struct AActor* Creator; // 0x30(0x8)
	uint8_t Pad_0x38[0x1]; // 0x38(0x1)
	bool IsFootSounder; // 0x39(0x1)
	uint8_t Pad_0x3A[0x6]; // 0x3A(0x6)
	struct AActor* FootSounderSpawnCharacter; // 0x40(0x8)
	struct AAIController* CheckingPlayer; // 0x48(0x8)
	bool bReachable; // 0x50(0x1)
	ENPCPlaceForCheckType PointType; // 0x51(0x1)
	uint8_t Pad_0x52[0x2]; // 0x52(0x2)
	float CreatedTime; // 0x54(0x4)
	float DiedTime; // 0x58(0x4)
	uint8_t Pad_0x5C[0x44]; // 0x5C(0x44)

	// Object: Function MFNPCAI.NPCAIAttentionPoint.UpdatePointData
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x3c4e96c
	// Params: [ Num(2) Size(0x10) ]
	void UpdatePointData(float InNewCreateTime, struct FVector InNewPosition);

	// Object: Function MFNPCAI.NPCAIAttentionPoint.SetIsCome
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3c4ec24
	// Params: [ Num(1) Size(0x1) ]
	void SetIsCome(bool InIsCome);

	// Object: Function MFNPCAI.NPCAIAttentionPoint.SetCreator
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3c4eb7c
	// Params: [ Num(1) Size(0x8) ]
	void SetCreator(struct AActor* InCreator);

	// Object: Function MFNPCAI.NPCAIAttentionPoint.IsVehicleFatal
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3c4ecd4
	// Params: [ Num(1) Size(0x1) ]
	bool IsVehicleFatal();

	// Object: Function MFNPCAI.NPCAIAttentionPoint.IsThisPointClose
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x3c4ea54
	// Params: [ Num(2) Size(0xD) ]
	bool IsThisPointClose(struct FVector InCheckLoc);

	// Object: Function MFNPCAI.NPCAIAttentionPoint.IsOld
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3c4eb44
	// Params: [ Num(1) Size(0x1) ]
	bool IsOld();

	// Object: Function MFNPCAI.NPCAIAttentionPoint.IsGrenadeHolding
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3c4ed0c
	// Params: [ Num(1) Size(0x1) ]
	bool IsGrenadeHolding();

	// Object: Function MFNPCAI.NPCAIAttentionPoint.IsGrenadeHit
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3c4ed7c
	// Params: [ Num(1) Size(0x1) ]
	bool IsGrenadeHit();

	// Object: Function MFNPCAI.NPCAIAttentionPoint.IsGrenadeComing
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3c4ed44
	// Params: [ Num(1) Size(0x1) ]
	bool IsGrenadeComing();

	// Object: Function MFNPCAI.NPCAIAttentionPoint.IsFatal
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3c4edb4
	// Params: [ Num(1) Size(0x1) ]
	bool IsFatal();

	// Object: Function MFNPCAI.NPCAIAttentionPoint.IsDanger
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3c4edec
	// Params: [ Num(1) Size(0x1) ]
	bool IsDanger();

	// Object: Function MFNPCAI.NPCAIAttentionPoint.GetPosition
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x3c4eb08
	// Params: [ Num(1) Size(0xC) ]
	struct FVector GetPosition();

	// Object: Function MFNPCAI.NPCAIAttentionPoint.CreateNewAttentionPointWithCoverPointID
	// Flags: [Final|Native|Static|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x3c4ee24
	// Params: [ Num(6) Size(0x30) ]
	static struct UNPCAIAttentionPoint* CreateNewAttentionPointWithCoverPointID(struct UObject* InHolder, int32_t InCoverPointID, struct FVector InBaseLoc, ENPCPlaceForCheckType InType, struct AActor* InCreator);

	// Object: Function MFNPCAI.NPCAIAttentionPoint.CreateNewAttentionPoint
	// Flags: [Final|Native|Static|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x3c4efcc
	// Params: [ Num(5) Size(0x28) ]
	static struct UNPCAIAttentionPoint* CreateNewAttentionPoint(struct UObject* InHolder, struct FVector InLoc, ENPCPlaceForCheckType InType, struct AActor* InCreator);
};

// Object: Class MFNPCAI.NPCAIBattleVolumeInterface
// Size: 0x28 (Inherited: 0x28)
struct INPCAIBattleVolumeInterface : IInterface
{
	DEFINE_UE_CLASS_HELPERS(INPCAIBattleVolumeInterface, "NPCAIBattleVolumeInterface")
};

// Object: Class MFNPCAI.NPCAIBehaviorLODInterface
// Size: 0x28 (Inherited: 0x28)
struct INPCAIBehaviorLODInterface : IInterface
{
	DEFINE_UE_CLASS_HELPERS(INPCAIBehaviorLODInterface, "NPCAIBehaviorLODInterface")
};

// Object: Class MFNPCAI.NPCAICharacterInterface
// Size: 0x28 (Inherited: 0x28)
struct INPCAICharacterInterface : IInterface
{
	DEFINE_UE_CLASS_HELPERS(INPCAICharacterInterface, "NPCAICharacterInterface")
};

// Object: Class MFNPCAI.NPCAIControllerInterface
// Size: 0x28 (Inherited: 0x28)
struct INPCAIControllerInterface : IInterface
{
	DEFINE_UE_CLASS_HELPERS(INPCAIControllerInterface, "NPCAIControllerInterface")
};

// Object: Class MFNPCAI.NPCAICoverEnvQueryData
// Size: 0x1D0 (Inherited: 0x28)
struct UNPCAICoverEnvQueryData : UObject
{
	DEFINE_UE_CLASS_HELPERS(UNPCAICoverEnvQueryData, "NPCAICoverEnvQueryData")

	uint8_t Pad_0x28[0xA8]; // 0x28(0xA8)
	struct FVector Generator_Location; // 0xD0(0xC)
	float Generator_Radius; // 0xDC(0x4)
	struct AVolume* Generator_BotZoneVolume; // 0xE0(0x8)
	float IsFree_TreatAsFreeAfterSeconds; // 0xE8(0x4)
	float IsSafe_TreatAsSafeAfterSeconds; // 0xEC(0x4)
	struct FVector IsNear_Location; // 0xF0(0xC)
	float IsNear_Distance; // 0xFC(0x4)
	bool IsNear_Reversed; // 0x100(0x1)
	uint8_t Pad_0x101[0x3]; // 0x101(0x3)
	struct FVector CloserRatio_Location; // 0x104(0xC)
	float CloserRatio_Ratio; // 0x110(0x4)
	struct FVector CanContain_TargetLocation; // 0x114(0xC)
	float CanContain_HorizontalAngle; // 0x120(0x4)
	float CanContain_TopAngle; // 0x124(0x4)
	float CanContain_BottomAngle; // 0x128(0x4)
	struct FVector CanAttackTo_TargetLocation; // 0x12C(0xC)
	struct TArray<struct AActor*> CanAttackTo_IgnoredActors; // 0x138(0x10)
	struct FVector PathLength_StartLocation; // 0x148(0xC)
	float PathLength_MaxPathLength; // 0x154(0x4)
	float PathLength_MaxRatio; // 0x158(0x4)
	float PathLength_CheckPoint; // 0x15C(0x4)
	float DefenceRatio_MinRatio; // 0x160(0x4)
	float DefenceAngle_MinAngle; // 0x164(0x4)
	struct TArray<struct FVector> DistanceToHotPoint_Locations; // 0x168(0x10)
	struct FVector DistanceToAllyCover_Location; // 0x178(0xC)
	float DistanceToAllyCover_MinDistance; // 0x184(0x4)
	struct FVector IsSameSideToTarget_TargetLocation; // 0x188(0xC)
	struct FVector IsSameSideToTarget_TargetDirection; // 0x194(0xC)
	struct FVector IsInCone_Location; // 0x1A0(0xC)
	struct FVector IsInCone_Direction; // 0x1AC(0xC)
	float IsInCone_Radius; // 0x1B8(0x4)
	float IsInCone_Angle; // 0x1BC(0x4)
	struct FVector CoverDist_Location; // 0x1C0(0xC)
	float CoverDist_MaxDistance; // 0x1CC(0x4)

	// Object: Function MFNPCAI.NPCAICoverEnvQueryData.SetupPathLength
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable]
	// Offset: 0x3c52ae8
	// Params: [ Num(4) Size(0x18) ]
	void SetupPathLength(const struct FVector& Location, float MaxPathLength, float MaxRatio, float CheckPointPathLength);

	// Object: Function MFNPCAI.NPCAICoverEnvQueryData.SetupIsSameSideToTarget
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable]
	// Offset: 0x3c526f0
	// Params: [ Num(2) Size(0x18) ]
	void SetupIsSameSideToTarget(const struct FVector& Location, const struct FVector& Direction);

	// Object: Function MFNPCAI.NPCAICoverEnvQueryData.SetupIsSafe
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3c530f4
	// Params: [ Num(1) Size(0x4) ]
	void SetupIsSafe(float TreatAsSafeAfterSeconds);

	// Object: Function MFNPCAI.NPCAICoverEnvQueryData.SetupIsIsNear
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable]
	// Offset: 0x3c52fbc
	// Params: [ Num(3) Size(0x11) ]
	void SetupIsIsNear(const struct FVector& Location, float Distance, bool bReversed);

	// Object: Function MFNPCAI.NPCAICoverEnvQueryData.SetupIsInCone
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable]
	// Offset: 0x3c52574
	// Params: [ Num(4) Size(0x20) ]
	void SetupIsInCone(const struct FVector& Location, const struct FVector& Direction, float Radius, float Angle);

	// Object: Function MFNPCAI.NPCAICoverEnvQueryData.SetupIsFree
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3c5319c
	// Params: [ Num(1) Size(0x4) ]
	void SetupIsFree(float TreatAsFreeAfterSeconds);

	// Object: Function MFNPCAI.NPCAICoverEnvQueryData.SetupIsCloserRatio
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable]
	// Offset: 0x3c52ecc
	// Params: [ Num(2) Size(0x10) ]
	void SetupIsCloserRatio(const struct FVector& Location, float Ratio);

	// Object: Function MFNPCAI.NPCAICoverEnvQueryData.SetupGenerator
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable]
	// Offset: 0x3c53244
	// Params: [ Num(3) Size(0x18) ]
	void SetupGenerator(const struct FVector& Location, float Radius, struct AVolume* BotZoneVolume);

	// Object: Function MFNPCAI.NPCAICoverEnvQueryData.SetupDistanceToHotPoint
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x3c528d8
	// Params: [ Num(1) Size(0x10) ]
	void SetupDistanceToHotPoint(const struct TArray<struct FVector>& Locations);

	// Object: Function MFNPCAI.NPCAICoverEnvQueryData.SetupDistanceToAllyCover
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable]
	// Offset: 0x3c527e8
	// Params: [ Num(2) Size(0x10) ]
	void SetupDistanceToAllyCover(const struct FVector& Location, float MinDistance);

	// Object: Function MFNPCAI.NPCAICoverEnvQueryData.SetupDefenceRatio
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3c52a40
	// Params: [ Num(1) Size(0x4) ]
	void SetupDefenceRatio(float MinRatio);

	// Object: Function MFNPCAI.NPCAICoverEnvQueryData.SetupDefenceAngle
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3c52998
	// Params: [ Num(1) Size(0x4) ]
	void SetupDefenceAngle(float MinAngle);

	// Object: Function MFNPCAI.NPCAICoverEnvQueryData.SetupCoverDist
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable]
	// Offset: 0x3c52484
	// Params: [ Num(2) Size(0x10) ]
	void SetupCoverDist(const struct FVector& Location, float MaxDistance);

	// Object: Function MFNPCAI.NPCAICoverEnvQueryData.SetupCanContain
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable]
	// Offset: 0x3c52d60
	// Params: [ Num(4) Size(0x18) ]
	void SetupCanContain(const struct FVector& Location, float HorizontalAngle, float TopAngle, float BottomAngle);

	// Object: Function MFNPCAI.NPCAICoverEnvQueryData.SetupCanAttackTo
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable]
	// Offset: 0x3c52c54
	// Params: [ Num(2) Size(0x20) ]
	void SetupCanAttackTo(const struct FVector& Location, const struct TArray<struct AActor*>& IgnoredActors);
};

// Object: Class MFNPCAI.NPCAICoverEnvQueryGenerator
// Size: 0x218 (Inherited: 0x210)
struct UNPCAICoverEnvQueryGenerator : UEnvQueryGenerator_OnCircle
{
	DEFINE_UE_CLASS_HELPERS(UNPCAICoverEnvQueryGenerator, "NPCAICoverEnvQueryGenerator")

	struct UCoverSystem* CacheCoverSystem; // 0x210(0x8)
};

// Object: Class MFNPCAI.NPCAICoverEnvQueryTest_CanAttackTo
// Size: 0x1F8 (Inherited: 0x1F8)
struct UNPCAICoverEnvQueryTest_CanAttackTo : UEnvQueryTest
{
	DEFINE_UE_CLASS_HELPERS(UNPCAICoverEnvQueryTest_CanAttackTo, "NPCAICoverEnvQueryTest_CanAttackTo")
};

// Object: Class MFNPCAI.NPCAICoverEnvQueryTest_CanContain
// Size: 0x1F8 (Inherited: 0x1F8)
struct UNPCAICoverEnvQueryTest_CanContain : UEnvQueryTest
{
	DEFINE_UE_CLASS_HELPERS(UNPCAICoverEnvQueryTest_CanContain, "NPCAICoverEnvQueryTest_CanContain")
};

// Object: Class MFNPCAI.NPCAICoverEnvQueryTest_CloserRatio
// Size: 0x1F8 (Inherited: 0x1F8)
struct UNPCAICoverEnvQueryTest_CloserRatio : UEnvQueryTest
{
	DEFINE_UE_CLASS_HELPERS(UNPCAICoverEnvQueryTest_CloserRatio, "NPCAICoverEnvQueryTest_CloserRatio")
};

// Object: Class MFNPCAI.NPCAICoverEnvQueryTest_CoverDist
// Size: 0x1F8 (Inherited: 0x1F8)
struct UNPCAICoverEnvQueryTest_CoverDist : UEnvQueryTest
{
	DEFINE_UE_CLASS_HELPERS(UNPCAICoverEnvQueryTest_CoverDist, "NPCAICoverEnvQueryTest_CoverDist")
};

// Object: Class MFNPCAI.NPCAICoverEnvQueryTest_DefenceAngle
// Size: 0x1F8 (Inherited: 0x1F8)
struct UNPCAICoverEnvQueryTest_DefenceAngle : UEnvQueryTest
{
	DEFINE_UE_CLASS_HELPERS(UNPCAICoverEnvQueryTest_DefenceAngle, "NPCAICoverEnvQueryTest_DefenceAngle")
};

// Object: Class MFNPCAI.NPCAICoverEnvQueryTest_DefenceRatio
// Size: 0x1F8 (Inherited: 0x1F8)
struct UNPCAICoverEnvQueryTest_DefenceRatio : UEnvQueryTest
{
	DEFINE_UE_CLASS_HELPERS(UNPCAICoverEnvQueryTest_DefenceRatio, "NPCAICoverEnvQueryTest_DefenceRatio")
};

// Object: Class MFNPCAI.NPCAICoverEnvQueryTest_DistanceToAllyCover
// Size: 0x1F8 (Inherited: 0x1F8)
struct UNPCAICoverEnvQueryTest_DistanceToAllyCover : UEnvQueryTest
{
	DEFINE_UE_CLASS_HELPERS(UNPCAICoverEnvQueryTest_DistanceToAllyCover, "NPCAICoverEnvQueryTest_DistanceToAllyCover")
};

// Object: Class MFNPCAI.NPCAICoverEnvQueryTest_DistanceToHotPoint
// Size: 0x1F8 (Inherited: 0x1F8)
struct UNPCAICoverEnvQueryTest_DistanceToHotPoint : UEnvQueryTest
{
	DEFINE_UE_CLASS_HELPERS(UNPCAICoverEnvQueryTest_DistanceToHotPoint, "NPCAICoverEnvQueryTest_DistanceToHotPoint")
};

// Object: Class MFNPCAI.NPCAICoverEnvQueryTest_IsFree
// Size: 0x1F8 (Inherited: 0x1F8)
struct UNPCAICoverEnvQueryTest_IsFree : UEnvQueryTest
{
	DEFINE_UE_CLASS_HELPERS(UNPCAICoverEnvQueryTest_IsFree, "NPCAICoverEnvQueryTest_IsFree")
};

// Object: Class MFNPCAI.NPCAICoverEnvQueryTest_IsInCone
// Size: 0x1F8 (Inherited: 0x1F8)
struct UNPCAICoverEnvQueryTest_IsInCone : UEnvQueryTest
{
	DEFINE_UE_CLASS_HELPERS(UNPCAICoverEnvQueryTest_IsInCone, "NPCAICoverEnvQueryTest_IsInCone")
};

// Object: Class MFNPCAI.NPCAICoverEnvQueryTest_IsNear
// Size: 0x1F8 (Inherited: 0x1F8)
struct UNPCAICoverEnvQueryTest_IsNear : UEnvQueryTest
{
	DEFINE_UE_CLASS_HELPERS(UNPCAICoverEnvQueryTest_IsNear, "NPCAICoverEnvQueryTest_IsNear")
};

// Object: Class MFNPCAI.NPCAICoverEnvQueryTest_IsSafe
// Size: 0x1F8 (Inherited: 0x1F8)
struct UNPCAICoverEnvQueryTest_IsSafe : UEnvQueryTest
{
	DEFINE_UE_CLASS_HELPERS(UNPCAICoverEnvQueryTest_IsSafe, "NPCAICoverEnvQueryTest_IsSafe")
};

// Object: Class MFNPCAI.NPCAICoverEnvQueryTest_IsSameSideToTarget
// Size: 0x1F8 (Inherited: 0x1F8)
struct UNPCAICoverEnvQueryTest_IsSameSideToTarget : UEnvQueryTest
{
	DEFINE_UE_CLASS_HELPERS(UNPCAICoverEnvQueryTest_IsSameSideToTarget, "NPCAICoverEnvQueryTest_IsSameSideToTarget")
};

// Object: Class MFNPCAI.NPCAICoverEnvQueryTest_PathLength
// Size: 0x1F8 (Inherited: 0x1F8)
struct UNPCAICoverEnvQueryTest_PathLength : UEnvQueryTest
{
	DEFINE_UE_CLASS_HELPERS(UNPCAICoverEnvQueryTest_PathLength, "NPCAICoverEnvQueryTest_PathLength")

	bool bEnabledDebug; // 0x1F1(0x1)
};

// Object: Class MFNPCAI.NPCAICoverEnvQueryTest_Protection
// Size: 0x200 (Inherited: 0x1F8)
struct UNPCAICoverEnvQueryTest_Protection : UEnvQueryTest
{
	DEFINE_UE_CLASS_HELPERS(UNPCAICoverEnvQueryTest_Protection, "NPCAICoverEnvQueryTest_Protection")

	struct UEnvQueryContext* ProtectionFrom; // 0x1F8(0x8)
};

// Object: Class MFNPCAI.NPCAICoverEnvQueryTest_ShootDistance
// Size: 0x200 (Inherited: 0x1F8)
struct UNPCAICoverEnvQueryTest_ShootDistance : UEnvQueryTest
{
	DEFINE_UE_CLASS_HELPERS(UNPCAICoverEnvQueryTest_ShootDistance, "NPCAICoverEnvQueryTest_ShootDistance")

	struct UEnvQueryContext* ShootDistanceTo; // 0x1F8(0x8)
};

// Object: Class MFNPCAI.NPCAICoverSystemStatics
// Size: 0x28 (Inherited: 0x28)
struct UNPCAICoverSystemStatics : UBlueprintFunctionLibrary
{
	DEFINE_UE_CLASS_HELPERS(UNPCAICoverSystemStatics, "NPCAICoverSystemStatics")

	// Object: Function MFNPCAI.NPCAICoverSystemStatics.TestCoverPoints_IsSafe
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x3c54640
	// Params: [ Num(5) Size(0x31) ]
	static bool TestCoverPoints_IsSafe(const struct TArray<int32_t>& InPoints, float SecondsAfterLastSpotted, struct TArray<int32_t>& PassPoints, struct UObject* WorldContextObject);

	// Object: Function MFNPCAI.NPCAICoverSystemStatics.TestCoverPoints_IsNear
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable]
	// Offset: 0x3c540a4
	// Params: [ Num(7) Size(0x41) ]
	static bool TestCoverPoints_IsNear(const struct TArray<int32_t>& InPoints, const struct FVector& Location, float Distance, bool bReversed, struct TArray<int32_t>& PassPoints, struct UObject* WorldContextObject);

	// Object: Function MFNPCAI.NPCAICoverSystemStatics.TestCoverPoints_IsFree
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x3c547f0
	// Params: [ Num(6) Size(0x39) ]
	static bool TestCoverPoints_IsFree(const struct TArray<int32_t>& InPoints, struct AActor* InActor, float TreatAsFreeAfterSeconds, struct TArray<int32_t>& PassPoints, struct UObject* WorldContextObject);

	// Object: Function MFNPCAI.NPCAICoverSystemStatics.TestCoverPoints_HasNavPath
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable]
	// Offset: 0x3c53c30
	// Params: [ Num(6) Size(0x39) ]
	static bool TestCoverPoints_HasNavPath(const struct TArray<int32_t>& InPoints, const struct FVector& StartLocation, float MaxPathLenght, struct TArray<int32_t>& PassPoints, struct UObject* WorldContextObject);

	// Object: Function MFNPCAI.NPCAICoverSystemStatics.TestCoverPoints_CanProtectPose
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x3c53a80
	// Params: [ Num(5) Size(0x31) ]
	static bool TestCoverPoints_CanProtectPose(const struct TArray<int32_t>& InPoints, ENPCPoseType PoseType, struct TArray<int32_t>& PassPoints, struct UObject* WorldContextObject);

	// Object: Function MFNPCAI.NPCAICoverSystemStatics.TestCoverPoints_CanContain
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable]
	// Offset: 0x3c53e2c
	// Params: [ Num(8) Size(0x41) ]
	static bool TestCoverPoints_CanContain(const struct TArray<int32_t>& InPoints, const struct FVector& Location, float HorizontalAngle, float TopAngle, float BottomAngle, struct TArray<int32_t>& PassPoints, struct UObject* WorldContextObject);

	// Object: Function MFNPCAI.NPCAICoverSystemStatics.TestCoverPoints_CanAttackTo
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable]
	// Offset: 0x3c542f0
	// Params: [ Num(6) Size(0x49) ]
	static bool TestCoverPoints_CanAttackTo(const struct TArray<int32_t>& InPoints, const struct FVector& Location, const struct TArray<struct AActor*>& IgnoredActors, struct TArray<int32_t>& PassPoints, struct UObject* WorldContextObject);

	// Object: Function MFNPCAI.NPCAICoverSystemStatics.TestCoverPoint_IsSafe
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3c54514
	// Params: [ Num(4) Size(0x11) ]
	static bool TestCoverPoint_IsSafe(int32_t InPointID, float SecondsAfterLastSpotted, struct UObject* WorldContextObject);

	// Object: Function MFNPCAI.NPCAICoverSystemStatics.SetCoverPointSpotted
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3c549e0
	// Params: [ Num(3) Size(0x11) ]
	static bool SetCoverPointSpotted(int32_t PointID, struct UObject* WorldContextObject);

	// Object: Function MFNPCAI.NPCAICoverSystemStatics.SetCoverPointOwner
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3c54b64
	// Params: [ Num(5) Size(0x21) ]
	static bool SetCoverPointOwner(int32_t PointID, struct AActor* Actor, float Radius, struct UObject* WorldContextObject);

	// Object: Function MFNPCAI.NPCAICoverSystemStatics.RunEQSQuery_FindBackUpCoverPointNearBy
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable]
	// Offset: 0x3c5346c
	// Params: [ Num(8) Size(0x40) ]
	static struct UEnvQueryInstanceBlueprintWrapper* RunEQSQuery_FindBackUpCoverPointNearBy(struct UObject* WorldContextObject, struct UEnvQuery* QueryTemplate, struct AActor* Querier, const struct FVector& InEnemyPos, float InRadiusNoCheck, uint8_t RunMode, struct UEnvQueryInstanceBlueprintWrapper* WrapperClass);

	// Object: Function MFNPCAI.NPCAICoverSystemStatics.RemoveCoverPointBeTaked
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3c54acc
	// Params: [ Num(1) Size(0x8) ]
	static void RemoveCoverPointBeTaked(struct AActor* InAIPawn);

	// Object: Function MFNPCAI.NPCAICoverSystemStatics.GetQueryResultsAsCoverIDs
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x3c53698
	// Params: [ Num(3) Size(0x19) ]
	static bool GetQueryResultsAsCoverIDs(struct UEnvQueryInstanceBlueprintWrapper* QueryInstanceBPWrapper, struct TArray<int32_t>& PassPoints);

	// Object: Function MFNPCAI.NPCAICoverSystemStatics.GetCoverSystem
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x3c552c8
	// Params: [ Num(2) Size(0x10) ]
	static struct UCoverSystem* GetCoverSystem(struct UObject* WorldContextObject);

	// Object: Function MFNPCAI.NPCAICoverSystemStatics.GetCoverPointPoseDataArray
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable]
	// Offset: 0x3c54cd0
	// Params: [ Num(5) Size(0x31) ]
	static bool GetCoverPointPoseDataArray(int32_t PointID, struct TArray<struct FCoverPoseData>& PoseDataArray, struct FVector& RightDirection, struct UObject* WorldContextObject);

	// Object: Function MFNPCAI.NPCAICoverSystemStatics.GetCoverPointLocationAndDirection
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable]
	// Offset: 0x3c54e70
	// Params: [ Num(5) Size(0x29) ]
	static bool GetCoverPointLocationAndDirection(int32_t PointID, struct FVector& Location, struct FVector& Direction, struct UObject* WorldContextObject);

	// Object: Function MFNPCAI.NPCAICoverSystemStatics.GetCoverPointData
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x3c537a0
	// Params: [ Num(4) Size(0x61) ]
	static bool GetCoverPointData(int32_t PointID, struct FCoverPointOctreeData& Data, struct UObject* WorldContextObject);

	// Object: Function MFNPCAI.NPCAICoverSystemStatics.FindNearestCoverPoint
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable]
	// Offset: 0x3c538fc
	// Params: [ Num(5) Size(0x29) ]
	static bool FindNearestCoverPoint(const struct FVector& Location, float EdgeSize, struct FVector& CoverLocation, struct UObject* WorldContextObject);

	// Object: Function MFNPCAI.NPCAICoverSystemStatics.FindCoverPointsInSphere
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable]
	// Offset: 0x3c5513c
	// Params: [ Num(5) Size(0x29) ]
	static bool FindCoverPointsInSphere(struct FVector Location, float Radius, struct TArray<int32_t>& Points, struct UObject* WorldContextObject);

	// Object: Function MFNPCAI.NPCAICoverSystemStatics.FindCoverPointsInPathLength
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x3c54ff4
	// Params: [ Num(4) Size(0x21) ]
	static bool FindCoverPointsInPathLength(struct AActor* AIPawn, float PathLength, struct TArray<struct FVector>& PointsPos);
};

// Object: Class MFNPCAI.NPCAIDamageData
// Size: 0x40 (Inherited: 0x28)
struct UNPCAIDamageData : UObject
{
	DEFINE_UE_CLASS_HELPERS(UNPCAIDamageData, "NPCAIDamageData")

	float TimeDamage; // 0x28(0x4)
	struct FVector position; // 0x2C(0xC)
	float CachedMaxActiveTime; // 0x38(0x4)
	uint8_t Pad_0x3C[0x4]; // 0x3C(0x4)

	// Object: Function MFNPCAI.NPCAIDamageData.IsActive
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3c55450
	// Params: [ Num(1) Size(0x1) ]
	bool IsActive();
};

// Object: Class MFNPCAI.NPCAIDoorInterface
// Size: 0x28 (Inherited: 0x28)
struct INPCAIDoorInterface : ITacticDoorInterface
{
	DEFINE_UE_CLASS_HELPERS(INPCAIDoorInterface, "NPCAIDoorInterface")

	// Object: Function MFNPCAI.NPCAIDoorInterface.IsDoorLocked
	// Flags: [Native|Public]
	// Offset: 0x3c5549c
	// Params: [ Num(1) Size(0x1) ]
	bool IsDoorLocked();

	// Object: Function MFNPCAI.NPCAIDoorInterface.IsDoorClosed
	// Flags: [Native|Public]
	// Offset: 0x3c554dc
	// Params: [ Num(1) Size(0x1) ]
	bool IsDoorClosed();
};

// Object: Class MFNPCAI.NPCAIDoorOpenInterface
// Size: 0x28 (Inherited: 0x28)
struct INPCAIDoorOpenInterface : IInterface
{
	DEFINE_UE_CLASS_HELPERS(INPCAIDoorOpenInterface, "NPCAIDoorOpenInterface")

	// Object: Function MFNPCAI.NPCAIDoorOpenInterface.IsDoorOpened
	// Flags: [Native|Public]
	// Offset: 0x3c57fcc
	// Params: [ Num(2) Size(0x9) ]
	bool IsDoorOpened(struct AActor* InDoor);
};

// Object: Class MFNPCAI.NPCAIDynamicGroupInfo
// Size: 0x58 (Inherited: 0x28)
struct UNPCAIDynamicGroupInfo : UObject
{
	DEFINE_UE_CLASS_HELPERS(UNPCAIDynamicGroupInfo, "NPCAIDynamicGroupInfo")

	uint8_t Pad_0x28[0x8]; // 0x28(0x8)
	int32_t DyGroupId; // 0x30(0x4)
	float CreateTime; // 0x34(0x4)
	bool CanAutoRelease; // 0x38(0x1)
	uint8_t Pad_0x39[0x7]; // 0x39(0x7)
	struct TArray<struct AActor*> AllyList; // 0x40(0x10)
	struct UWorld* WorldPrivate; // 0x50(0x8)

	// Object: Function MFNPCAI.NPCAIDynamicGroupInfo.GetTimeSeconds
	// Flags: [Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3c580dc
	// Params: [ Num(1) Size(0x4) ]
	float GetTimeSeconds();

	// Object: Function MFNPCAI.NPCAIDynamicGroupInfo.GetAllyList
	// Flags: [Native|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x3c5809c
	// Params: [ Num(1) Size(0x10) ]
	struct TArray<struct AActor*> GetAllyList();
};

// Object: Class MFNPCAI.NPCAITargetInfoBase
// Size: 0x60 (Inherited: 0x28)
struct UNPCAITargetInfoBase : UObject
{
	DEFINE_UE_CLASS_HELPERS(UNPCAITargetInfoBase, "NPCAITargetInfoBase")

	float FirstTimeSeen; // 0x28(0x4)
	float TimeToForgorAboutEnemySec; // 0x2C(0x4)
	struct FAIShotCountStat BeFireCount; // 0x30(0x10)
	struct FAIShotCountStat BeHitCount; // 0x40(0x10)
	float EnemyStartSeenTime; // 0x50(0x4)
	float EnemyLastSeenTime; // 0x54(0x4)
	float EnemyLastKnowTime; // 0x58(0x4)
	uint8_t Pad_0x5C[0x4]; // 0x5C(0x4)

	// Object: Function MFNPCAI.NPCAITargetInfoBase.SetTimeToForgorAboutEnemySec
	// Flags: [Native|Public]
	// Offset: 0x3ccbf38
	// Params: [ Num(1) Size(0x4) ]
	void SetTimeToForgorAboutEnemySec(float Value);

	// Object: Function MFNPCAI.NPCAITargetInfoBase.SetTimeLastSeen
	// Flags: [Native|Public]
	// Offset: 0x3ccc110
	// Params: [ Num(1) Size(0x4) ]
	void SetTimeLastSeen(float InNowTime);

	// Object: Function MFNPCAI.NPCAITargetInfoBase.SetTimeLastKnow
	// Flags: [Native|Public]
	// Offset: 0x3ccc060
	// Params: [ Num(1) Size(0x4) ]
	void SetTimeLastKnow(float InNowTime);

	// Object: Function MFNPCAI.NPCAITargetInfoBase.SetFirstTimeSeen
	// Flags: [Native|Public]
	// Offset: 0x3ccc1fc
	// Params: [ Num(1) Size(0x4) ]
	void SetFirstTimeSeen(float InNowTime);

	// Object: Function MFNPCAI.NPCAITargetInfoBase.SetBeHitTime
	// Flags: [Native|Public]
	// Offset: 0x3ccbc34
	// Params: [ Num(1) Size(0x4) ]
	void SetBeHitTime(float InNowTime);

	// Object: Function MFNPCAI.NPCAITargetInfoBase.SetBeFireTime
	// Flags: [Native|Public]
	// Offset: 0x3ccbce4
	// Params: [ Num(1) Size(0x4) ]
	void SetBeFireTime(float InNowTime);

	// Object: Function MFNPCAI.NPCAITargetInfoBase.GetTimeToForgorAboutEnemySec
	// Flags: [Native|Public]
	// Offset: 0x3ccbefc
	// Params: [ Num(1) Size(0x4) ]
	float GetTimeToForgorAboutEnemySec();

	// Object: Function MFNPCAI.NPCAITargetInfoBase.GetTimeLastSeen
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0x3ccc024
	// Params: [ Num(1) Size(0x4) ]
	float GetTimeLastSeen();

	// Object: Function MFNPCAI.NPCAITargetInfoBase.GetTimeLastKnow
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0x3ccbfe8
	// Params: [ Num(1) Size(0x4) ]
	float GetTimeLastKnow();

	// Object: Function MFNPCAI.NPCAITargetInfoBase.GetLastBeHitTime
	// Flags: [Native|Public]
	// Offset: 0x3ccbe48
	// Params: [ Num(1) Size(0x4) ]
	float GetLastBeHitTime();

	// Object: Function MFNPCAI.NPCAITargetInfoBase.GetLastBeFireTime
	// Flags: [Native|Public]
	// Offset: 0x3ccbec0
	// Params: [ Num(1) Size(0x4) ]
	float GetLastBeFireTime();

	// Object: Function MFNPCAI.NPCAITargetInfoBase.GetFirstTimeSeen
	// Flags: [Native|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x3ccc1c0
	// Params: [ Num(1) Size(0x4) ]
	float GetFirstTimeSeen();

	// Object: Function MFNPCAI.NPCAITargetInfoBase.GetFirstBeHitTime
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0x3ccbe0c
	// Params: [ Num(1) Size(0x4) ]
	float GetFirstBeHitTime();

	// Object: Function MFNPCAI.NPCAITargetInfoBase.GetFirstBeFireTime
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0x3ccbe84
	// Params: [ Num(1) Size(0x4) ]
	float GetFirstBeFireTime();

	// Object: Function MFNPCAI.NPCAITargetInfoBase.GetBeHitCount
	// Flags: [Native|Public]
	// Offset: 0x3ccbd94
	// Params: [ Num(1) Size(0x4) ]
	int32_t GetBeHitCount();

	// Object: Function MFNPCAI.NPCAITargetInfoBase.GetBeFireCount
	// Flags: [Native|Public]
	// Offset: 0x3ccbdd0
	// Params: [ Num(1) Size(0x4) ]
	int32_t GetBeFireCount();
};

// Object: Class MFNPCAI.NPCAIEnemyGroupSingleInfo
// Size: 0xB0 (Inherited: 0x60)
struct UNPCAIEnemyGroupSingleInfo : UNPCAITargetInfoBase
{
	DEFINE_UE_CLASS_HELPERS(UNPCAIEnemyGroupSingleInfo, "NPCAIEnemyGroupSingleInfo")

	bool IsTemporaryEnemy; // 0x5C(0x1)
	bool IsTemporaryEnemyFromAlly; // 0x5D(0x1)
	float EndTimeOfTemporaryEnemy; // 0x60(0x4)
	struct FVector EnemyLastSeenPosition; // 0x64(0xC)
	float EndTimeOfSupressed; // 0x70(0x4)
	float LastTimeCreateSuspectedPoint; // 0x74(0x4)
	float PersonInValidTime; // 0x78(0x4)
	uint8_t Pad_0x7E[0x2]; // 0x7E(0x2)
	struct AActor* Person; // 0x80(0x8)
	int32_t HatredValue; // 0x88(0x4)
	float HatredEndtime; // 0x8C(0x4)
	float LastShootGroupAllyTime; // 0x90(0x4)
	int32_t SuspectedPointCreatedNum; // 0x94(0x4)
	float LastIncreaseTimeSuspectedPoint; // 0x98(0x4)
	struct FVector EnemyLastEstimatePosition; // 0x9C(0xC)
	bool bIsRemoved; // 0xA8(0x1)
	uint8_t Pad_0xA9[0x7]; // 0xA9(0x7)

	// Object: Function MFNPCAI.NPCAIEnemyGroupSingleInfo.SetTemporaryEnemyInfo
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3c587c4
	// Params: [ Num(3) Size(0x9) ]
	void SetTemporaryEnemyInfo(bool InIsTemporaryEnemy, float InExpiredTime, bool InIsFromAlly);

	// Object: Function MFNPCAI.NPCAIEnemyGroupSingleInfo.SetSuppressEndTime
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3c58668
	// Params: [ Num(1) Size(0x4) ]
	void SetSuppressEndTime(float InEndTime);

	// Object: Function MFNPCAI.NPCAIEnemyGroupSingleInfo.SetLastShootGroupAllyTime
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3c58428
	// Params: [ Num(1) Size(0x4) ]
	void SetLastShootGroupAllyTime(float InTime);

	// Object: Function MFNPCAI.NPCAIEnemyGroupSingleInfo.SetIsRemoved
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3c58148
	// Params: [ Num(1) Size(0x1) ]
	void SetIsRemoved(bool InValue);

	// Object: Function MFNPCAI.NPCAIEnemyGroupSingleInfo.SetHatredValue
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3c58580
	// Params: [ Num(2) Size(0x8) ]
	void SetHatredValue(int32_t InHatredValue, float InEndTime);

	// Object: Function MFNPCAI.NPCAIEnemyGroupSingleInfo.SetEnemyLastVisibleInfo
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x3c58a20
	// Params: [ Num(2) Size(0x10) ]
	void SetEnemyLastVisibleInfo(struct FVector InLastSeenPosition, float InLastSeenTime);

	// Object: Function MFNPCAI.NPCAIEnemyGroupSingleInfo.SetEnemyLastEstimatePosition
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x3c58938
	// Params: [ Num(2) Size(0x14) ]
	void SetEnemyLastEstimatePosition(struct AActor* InEnemy, struct FVector InPosition);

	// Object: Function MFNPCAI.NPCAIEnemyGroupSingleInfo.IsRealValidEnemy
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3c58710
	// Params: [ Num(2) Size(0x5) ]
	bool IsRealValidEnemy(float InNowTime);

	// Object: Function MFNPCAI.NPCAIEnemyGroupSingleInfo.GetSuspectedPointCreatedNum
	// Flags: [Final|Native|Public]
	// Offset: 0x3c58344
	// Params: [ Num(2) Size(0xC) ]
	int32_t GetSuspectedPointCreatedNum(struct AActor* InAIPawn);

	// Object: Function MFNPCAI.NPCAIEnemyGroupSingleInfo.GetPerson
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3c58b08
	// Params: [ Num(1) Size(0x8) ]
	struct AActor* GetPerson();

	// Object: Function MFNPCAI.NPCAIEnemyGroupSingleInfo.GetLastShootGroupAllyTime
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x3c583f4
	// Params: [ Num(1) Size(0x4) ]
	float GetLastShootGroupAllyTime();

	// Object: Function MFNPCAI.NPCAIEnemyGroupSingleInfo.GetIsRemoved
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x3c5812c
	// Params: [ Num(1) Size(0x1) ]
	bool GetIsRemoved();

	// Object: Function MFNPCAI.NPCAIEnemyGroupSingleInfo.GetHatredValue
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x3c584d0
	// Params: [ Num(2) Size(0x8) ]
	int32_t GetHatredValue(float InNowTime);

	// Object: Function MFNPCAI.NPCAIEnemyGroupSingleInfo.GetEnemyLastEstimatePosition
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x3c588fc
	// Params: [ Num(1) Size(0xC) ]
	struct FVector GetEnemyLastEstimatePosition();

	// Object: Function MFNPCAI.NPCAIEnemyGroupSingleInfo.CalculateSuspectedPointCreatedNum
	// Flags: [Final|Native|Public]
	// Offset: 0x3c5829c
	// Params: [ Num(1) Size(0x8) ]
	void CalculateSuspectedPointCreatedNum(struct AActor* InAIPawn);

	// Object: Function MFNPCAI.NPCAIEnemyGroupSingleInfo.AddSuspectedPointCreatedNum
	// Flags: [Final|Native|Public]
	// Offset: 0x3c581f4
	// Params: [ Num(1) Size(0x8) ]
	void AddSuspectedPointCreatedNum(struct AActor* InAIPawn);
};

// Object: Class MFNPCAI.NPCAIEnvQueryGenerator_BlueprintBase
// Size: 0xC0 (Inherited: 0x80)
struct UNPCAIEnvQueryGenerator_BlueprintBase : UEnvQueryGenerator_BlueprintBase
{
	DEFINE_UE_CLASS_HELPERS(UNPCAIEnvQueryGenerator_BlueprintBase, "NPCAIEnvQueryGenerator_BlueprintBase")

	struct FAIDataProviderIntValue IntParam; // 0x80(0x38)
	uint8_t Pad_0xB8[0x8]; // 0xB8(0x8)

	// Object: Function MFNPCAI.NPCAIEnvQueryGenerator_BlueprintBase.GetQueryIntParam
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3c58b8c
	// Params: [ Num(2) Size(0xC) ]
	int32_t GetQueryIntParam(const struct FName& ParamName);
};

// Object: Class MFNPCAI.NPCAIEnvQueryGenerator_OnPolyCenter
// Size: 0x2F8 (Inherited: 0x210)
struct UNPCAIEnvQueryGenerator_OnPolyCenter : UEnvQueryGenerator_OnCircle
{
	DEFINE_UE_CLASS_HELPERS(UNPCAIEnvQueryGenerator_OnPolyCenter, "NPCAIEnvQueryGenerator_OnPolyCenter")

	struct FAIDataProviderBoolValue OnlyCurrentRegion; // 0x210(0x38)
	struct FAIDataProviderBoolValue IncludeNavMeshPolyCenters; // 0x248(0x38)
	struct FAIDataProviderBoolValue IncludeNavMeshInternalEdges; // 0x280(0x38)
	struct FAIDataProviderBoolValue IncludeNavMeshBoundaryEdges; // 0x2B8(0x38)
	float PointZOffset; // 0x2F0(0x4)
	uint8_t Pad_0x2F4[0x4]; // 0x2F4(0x4)
};

// Object: Class MFNPCAI.NPCAIEnvQueryInstanceBlueprintWrapper
// Size: 0x80 (Inherited: 0x78)
struct UNPCAIEnvQueryInstanceBlueprintWrapper : UEnvQueryInstanceBlueprintWrapper
{
	DEFINE_UE_CLASS_HELPERS(UNPCAIEnvQueryInstanceBlueprintWrapper, "NPCAIEnvQueryInstanceBlueprintWrapper")

	float QueryTime; // 0x78(0x4)
	uint8_t Pad_0x7C[0x4]; // 0x7C(0x4)
};

// Object: Class MFNPCAI.NPCAIEnvQueryItemType_CoverPoint
// Size: 0x30 (Inherited: 0x30)
struct UNPCAIEnvQueryItemType_CoverPoint : UEnvQueryItemType_VectorBase
{
	DEFINE_UE_CLASS_HELPERS(UNPCAIEnvQueryItemType_CoverPoint, "NPCAIEnvQueryItemType_CoverPoint")
};

// Object: Class MFNPCAI.NPCAIEnvQueryManager
// Size: 0x140 (Inherited: 0x140)
struct UNPCAIEnvQueryManager : UEnvQueryManager
{
	DEFINE_UE_CLASS_HELPERS(UNPCAIEnvQueryManager, "NPCAIEnvQueryManager")
};

// Object: Class MFNPCAI.NPCAIEnvQueryTest_BlueprintBase
// Size: 0x218 (Inherited: 0x1F8)
struct UNPCAIEnvQueryTest_BlueprintBase : UEnvQueryTest
{
	DEFINE_UE_CLASS_HELPERS(UNPCAIEnvQueryTest_BlueprintBase, "NPCAIEnvQueryTest_BlueprintBase")

	struct UEnvQueryContext* Context; // 0x1F8(0x8)
	struct FText TestDescription; // 0x200(0x18)

	// Object: Function MFNPCAI.NPCAIEnvQueryTest_BlueprintBase.CalcScore
	// Flags: [Event|Public|HasOutParms|BlueprintEvent|Const]
	// Offset: 0x5d8cbc8
	// Params: [ Num(3) Size(0x1C) ]
	float CalcScore(struct AActor* ItemActor, const struct TArray<struct AActor*>& ContextActors);
};

// Object: Class MFNPCAI.NPCAIEnvQueryTest_PathfindingFromQuerier
// Size: 0x230 (Inherited: 0x1F8)
struct UNPCAIEnvQueryTest_PathfindingFromQuerier : UEnvQueryTest
{
	DEFINE_UE_CLASS_HELPERS(UNPCAIEnvQueryTest_PathfindingFromQuerier, "NPCAIEnvQueryTest_PathfindingFromQuerier")

	uint8_t TestMode; // 0x1F1(0x1)
	struct FAIDataProviderBoolValue SkipUnreachable; // 0x1F8(0x38)
};

// Object: Class MFNPCAI.NPCAIEnvQueryTest_PointBase
// Size: 0x218 (Inherited: 0x1F8)
struct UNPCAIEnvQueryTest_PointBase : UEnvQueryTest
{
	DEFINE_UE_CLASS_HELPERS(UNPCAIEnvQueryTest_PointBase, "NPCAIEnvQueryTest_PointBase")

	struct UEnvQueryContext_BlueprintBase* Context; // 0x1F8(0x8)
	struct FText TestDescription; // 0x200(0x18)

	// Object: Function MFNPCAI.NPCAIEnvQueryTest_PointBase.CalcScore
	// Flags: [Event|Public|HasOutParms|HasDefaults|BlueprintEvent|Const]
	// Offset: 0x5d8cbc8
	// Params: [ Num(4) Size(0x2C) ]
	float CalcScore(const struct FVector& ItemLocation, const struct TArray<struct AActor*>& ContextActors, struct UObject* QueryOwner);
};

// Object: Class MFNPCAI.NPCAIEQSSystemStatics
// Size: 0x28 (Inherited: 0x28)
struct UNPCAIEQSSystemStatics : UBlueprintFunctionLibrary
{
	DEFINE_UE_CLASS_HELPERS(UNPCAIEQSSystemStatics, "NPCAIEQSSystemStatics")

	// Object: Function MFNPCAI.NPCAIEQSSystemStatics.UARunEQSQuery
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3c58e40
	// Params: [ Num(7) Size(0x38) ]
	static struct UEnvQueryInstanceBlueprintWrapper* UARunEQSQuery(struct UObject* WorldContextObject, struct UEnvQuery* QueryTemplate, struct AActor* Querier, uint8_t RunMode, struct UEnvQueryInstanceBlueprintWrapper* WrapperClass, uint8_t QueryPriority);
};

// Object: Class MFNPCAI.NPCAISubsystemBase
// Size: 0x30 (Inherited: 0x30)
struct UNPCAISubsystemBase : USGBaseAISubsystem
{
	DEFINE_UE_CLASS_HELPERS(UNPCAISubsystemBase, "NPCAISubsystemBase")

	// Object: Function MFNPCAI.NPCAISubsystemBase.OnPostBeginGameInit
	// Flags: [Native|Protected]
	// Offset: 0x3cb70c0
	// Params: [ Num(0) Size(0x0) ]
	void OnPostBeginGameInit();
};

// Object: Class MFNPCAI.NPCAIEventSubsystem
// Size: 0x40 (Inherited: 0x30)
struct UNPCAIEventSubsystem : UNPCAISubsystemBase
{
	DEFINE_UE_CLASS_HELPERS(UNPCAIEventSubsystem, "NPCAIEventSubsystem")

	uint8_t Pad_0x30[0x10]; // 0x30(0x10)
};

// Object: Class MFNPCAI.NPCAIFactionComponent
// Size: 0x108 (Inherited: 0xF0)
struct UNPCAIFactionComponent : UNPCAIActorComponent
{
	DEFINE_UE_CLASS_HELPERS(UNPCAIFactionComponent, "NPCAIFactionComponent")

	uint8_t Pad_0xF0[0x8]; // 0xF0(0x8)
	struct TArray<struct UNPCAIPropertyProfile*> PropertyProfiles; // 0xF8(0x10)
};

// Object: Class MFNPCAI.NPCAIFactionPluginBase
// Size: 0x38 (Inherited: 0x28)
struct UNPCAIFactionPluginBase : UObject
{
	DEFINE_UE_CLASS_HELPERS(UNPCAIFactionPluginBase, "NPCAIFactionPluginBase")

	struct TArray<struct TSoftObjectPtr<UObject>> ObjectRefs; // 0x28(0x10)
};

// Object: Class MFNPCAI.NPCAIFactionPlugin
// Size: 0xB0 (Inherited: 0x38)
struct UNPCAIFactionPlugin : UNPCAIFactionPluginBase
{
	DEFINE_UE_CLASS_HELPERS(UNPCAIFactionPlugin, "NPCAIFactionPlugin")

	struct TMap<EAIProfileType, struct UNPCAIPropertyProfile*> ProfileTypeMap; // 0x38(0x50)
	struct FNPCAIProfileCover ProfileCover; // 0x88(0x28)

	// Object: Function MFNPCAI.NPCAIFactionPlugin.CoverFaction
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3c590d8
	// Params: [ Num(1) Size(0x8) ]
	void CoverFaction(struct AAIController* AIController);
};

// Object: Class MFNPCAI.NPCAIFindAmbushAgainstPointAsyncTask
// Size: 0x78 (Inherited: 0x40)
struct UNPCAIFindAmbushAgainstPointAsyncTask : UNPCAIAsyncTaskBase
{
	DEFINE_UE_CLASS_HELPERS(UNPCAIFindAmbushAgainstPointAsyncTask, "NPCAIFindAmbushAgainstPointAsyncTask")

	struct FMulticastInlineDelegate OnSuccess; // 0x40(0x10)
	struct FMulticastInlineDelegate OnFail; // 0x50(0x10)
	struct FVector PointStart; // 0x60(0xC)
	struct FVector PointToGo; // 0x6C(0xC)

	// Object: Function MFNPCAI.NPCAIFindAmbushAgainstPointAsyncTask.ExecuteTask
	// Flags: [Native|Public]
	// Offset: 0x3c59194
	// Params: [ Num(0) Size(0x0) ]
	void ExecuteTask();

	// Object: Function MFNPCAI.NPCAIFindAmbushAgainstPointAsyncTask.AIFindAmbushAgainstPoint
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable]
	// Offset: 0x3c591b0
	// Params: [ Num(4) Size(0x28) ]
	static struct UNPCAIFindAmbushAgainstPointAsyncTask* AIFindAmbushAgainstPoint(struct AActor* Pawn, const struct FVector& PointStart, const struct FVector& PointToGo);
};

// Object: Class MFNPCAI.NPCAIFindPathByKeyRouteAsyncTask
// Size: 0x128 (Inherited: 0x40)
struct UNPCAIFindPathByKeyRouteAsyncTask : UNPCAIAsyncTaskBase
{
	DEFINE_UE_CLASS_HELPERS(UNPCAIFindPathByKeyRouteAsyncTask, "NPCAIFindPathByKeyRouteAsyncTask")

	struct FMulticastInlineDelegate OnSuccess; // 0x40(0x10)
	struct FMulticastInlineDelegate OnFail; // 0x50(0x10)
	struct FKeyRoutePointData FromPoint; // 0x60(0x60)
	struct FKeyRoutePointData ToPoint; // 0xC0(0x60)
	EAIKeyRouteQueryType QueryType; // 0x120(0x1)
	uint8_t Pad_0x121[0x7]; // 0x121(0x7)

	// Object: Function MFNPCAI.NPCAIFindPathByKeyRouteAsyncTask.ExecuteTask
	// Flags: [Native|Public]
	// Offset: 0x3c592f0
	// Params: [ Num(0) Size(0x0) ]
	void ExecuteTask();

	// Object: Function MFNPCAI.NPCAIFindPathByKeyRouteAsyncTask.AIFindPathByKeyRoute
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x3c5930c
	// Params: [ Num(5) Size(0xD8) ]
	static struct UNPCAIFindPathByKeyRouteAsyncTask* AIFindPathByKeyRoute(struct AActor* Pawn, const struct FKeyRoutePointData& FromPoint, const struct FKeyRoutePointData& ToPoint, EAIKeyRouteQueryType QueryType);
};

// Object: Class MFNPCAI.NPCAIGameStateDebugInterface
// Size: 0x28 (Inherited: 0x28)
struct INPCAIGameStateDebugInterface : IInterface
{
	DEFINE_UE_CLASS_HELPERS(INPCAIGameStateDebugInterface, "NPCAIGameStateDebugInterface")
};

// Object: Class MFNPCAI.NPCAIGlobalManagerInterface
// Size: 0x28 (Inherited: 0x28)
struct INPCAIGlobalManagerInterface : IInterface
{
	DEFINE_UE_CLASS_HELPERS(INPCAIGlobalManagerInterface, "NPCAIGlobalManagerInterface")

	// Object: Function MFNPCAI.NPCAIGlobalManagerInterface.NotifySceneEvent
	// Flags: [Native|Public|HasOutParms]
	// Offset: 0x3c59778
	// Params: [ Num(3) Size(0x18) ]
	void NotifySceneEvent(struct UAISceneEventMessage* SceneEvent, const EAISceneEventState& EventState, struct AActor* AIPawn);

	// Object: Function MFNPCAI.NPCAIGlobalManagerInterface.GetTacticSystemActor
	// Flags: [Native|Public]
	// Offset: 0x3c59a58
	// Params: [ Num(1) Size(0x8) ]
	struct ATacticSystemActor* GetTacticSystemActor();

	// Object: Function MFNPCAI.NPCAIGlobalManagerInterface.GetSightExeLimitTime
	// Flags: [Native|Public]
	// Offset: 0x3c595fc
	// Params: [ Num(1) Size(0x4) ]
	float GetSightExeLimitTime();

	// Object: Function MFNPCAI.NPCAIGlobalManagerInterface.GetSightExeLimitMinCount
	// Flags: [Native|Public]
	// Offset: 0x3c595c0
	// Params: [ Num(1) Size(0x4) ]
	int32_t GetSightExeLimitMinCount();

	// Object: Function MFNPCAI.NPCAIGlobalManagerInterface.GetPerceptionDynamicActor
	// Flags: [Native|Public]
	// Offset: 0x3c599e0
	// Params: [ Num(1) Size(0x8) ]
	struct ANPCAIPerceptionDynamicActor* GetPerceptionDynamicActor();

	// Object: Function MFNPCAI.NPCAIGlobalManagerInterface.GetPerceptionAssistActor
	// Flags: [Native|Public]
	// Offset: 0x3c59a1c
	// Params: [ Num(1) Size(0x8) ]
	struct ANPCAIPerceptionAssistActor* GetPerceptionAssistActor();

	// Object: Function MFNPCAI.NPCAIGlobalManagerInterface.GetHearExeLimitTime
	// Flags: [Native|Public]
	// Offset: 0x3c59584
	// Params: [ Num(1) Size(0x4) ]
	float GetHearExeLimitTime();

	// Object: Function MFNPCAI.NPCAIGlobalManagerInterface.GetHearExeLimitDivide
	// Flags: [Native|Public]
	// Offset: 0x3c59548
	// Params: [ Num(1) Size(0x4) ]
	int32_t GetHearExeLimitDivide();

	// Object: Function MFNPCAI.NPCAIGlobalManagerInterface.GetGrenadeMinLifeTime
	// Flags: [Native|Public|Const]
	// Offset: 0x3c59638
	// Params: [ Num(1) Size(0x4) ]
	float GetGrenadeMinLifeTime();

	// Object: Function MFNPCAI.NPCAIGlobalManagerInterface.GetCurrentFogDensity
	// Flags: [Native|Public]
	// Offset: 0x3c59674
	// Params: [ Num(1) Size(0x4) ]
	float GetCurrentFogDensity();

	// Object: Function MFNPCAI.NPCAIGlobalManagerInterface.GetCoverSystemActor
	// Flags: [Native|Public]
	// Offset: 0x3c59a94
	// Params: [ Num(1) Size(0x8) ]
	struct ACoverSystemActor* GetCoverSystemActor();

	// Object: Function MFNPCAI.NPCAIGlobalManagerInterface.GetAISGDoorManager
	// Flags: [Native|Public]
	// Offset: 0x3c59968
	// Params: [ Num(1) Size(0x8) ]
	struct UAISGDoorManager* GetAISGDoorManager();

	// Object: Function MFNPCAI.NPCAIGlobalManagerInterface.GetAISceneEventsTriggerManager
	// Flags: [Native|Public]
	// Offset: 0x3c599a4
	// Params: [ Num(1) Size(0x8) ]
	struct UAISceneEventsTriggerManager* GetAISceneEventsTriggerManager();

	// Object: Function MFNPCAI.NPCAIGlobalManagerInterface.GetAISceneEventDataTable
	// Flags: [Native|Public]
	// Offset: 0x3c598f0
	// Params: [ Num(1) Size(0x8) ]
	struct UDataTable* GetAISceneEventDataTable();

	// Object: Function MFNPCAI.NPCAIGlobalManagerInterface.GetAIRuntimeMonitor
	// Flags: [Native|Public]
	// Offset: 0x3c5992c
	// Params: [ Num(1) Size(0x8) ]
	struct UAIRuntimeMonitor* GetAIRuntimeMonitor();

	// Object: Function MFNPCAI.NPCAIGlobalManagerInterface.GetAIGlobalShareInfo
	// Flags: [Native|Public]
	// Offset: 0x3c598b4
	// Params: [ Num(1) Size(0x8) ]
	struct UNPCAIGlobalSharedInfo* GetAIGlobalShareInfo();

	// Object: Function MFNPCAI.NPCAIGlobalManagerInterface.FindAllSGDoorsInWorld
	// Flags: [Native|Public|HasOutParms]
	// Offset: 0x3c596b0
	// Params: [ Num(1) Size(0x10) ]
	void FindAllSGDoorsInWorld(struct TArray<struct TWeakObjectPtr<struct AActor>>& DoorsInWorld);
};

// Object: Class MFNPCAI.NPCAIGlobalSettings
// Size: 0x40 (Inherited: 0x30)
struct UNPCAIGlobalSettings : UDataAsset
{
	DEFINE_UE_CLASS_HELPERS(UNPCAIGlobalSettings, "NPCAIGlobalSettings")

	float MoveCommandInvokeFrequencyLimit; // 0x30(0x4)
	float MoveCommandDestinationOffsetTolerance; // 0x34(0x4)
	float MoveCommandDestinationOffsetToleranceSq; // 0x38(0x4)
	uint8_t Pad_0x3C[0x4]; // 0x3C(0x4)

	// Object: Function MFNPCAI.NPCAIGlobalSettings.Get
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x3c59ad8
	// Params: [ Num(1) Size(0x8) ]
	static struct UNPCAIGlobalSettings* Get();
};

// Object: Class MFNPCAI.NPCAIGlobalSharedInfo
// Size: 0x270 (Inherited: 0x28)
struct UNPCAIGlobalSharedInfo : UObject
{
	DEFINE_UE_CLASS_HELPERS(UNPCAIGlobalSharedInfo, "NPCAIGlobalSharedInfo")

	float TimeOfRunEQS_FindBackUpCoverPoint; // 0x28(0x4)
	uint8_t Pad_0x2C[0x4]; // 0x2C(0x4)
	struct TMap<struct AActor*, struct FAIGlobalCacheActors> CacheActorsInWorld; // 0x30(0x50)
	struct TArray<struct FAIEnemyInfo> AIEnemyInfoList; // 0x80(0x10)
	bool bEnableAIPerceptionLines; // 0x90(0x1)
	uint8_t Pad_0x91[0x3]; // 0x91(0x3)
	float AITrackLOGLastAutoReleaseTime; // 0x94(0x4)
	struct TMap<struct FString, struct UAITrackLOGUnit*> AITrackLOGData; // 0x98(0x50)
	bool bAITrackEnabled; // 0xE8(0x1)
	uint8_t Pad_0xE9[0x7]; // 0xE9(0x7)
	struct TMap<EAITrackLOGType, struct FString> AITrackLOGTemplate; // 0xF0(0x50)
	uint8_t Pad_0x140[0x8]; // 0x140(0x8)
	struct TArray<struct AActor*> DSPoseUpdateWaitList; // 0x148(0x10)
	struct TArray<struct AActor*> DSLeanPoseUpdateWaitList; // 0x158(0x10)
	struct AActor* DSPoseUpdateCharacter; // 0x168(0x8)
	struct TArray<struct AActor*> DSIKUpdateWaitList; // 0x170(0x10)
	struct AActor* DSIKUpdateCharacter; // 0x180(0x8)
	struct TArray<struct FAIProtectTreasureBox> TreasureBoxInfos; // 0x188(0x10)
	struct TMap<struct UObject*, EAIProfileType> AIPropClassTypes; // 0x198(0x50)
	struct TMap<uint64_t, bool> CachedInvIDLimitedAIPickUp; // 0x1E8(0x50)
	struct AActor* LastBetrayPlayer; // 0x238(0x8)
	uint8_t Pad_0x240[0x14]; // 0x240(0x14)
	float EnemyUpdateInterval; // 0x254(0x4)
	float EnemyUpdatePosSize; // 0x258(0x4)
	float EnemyPathQuerySize; // 0x25C(0x4)
	uint8_t Pad_0x260[0x10]; // 0x260(0x10)
};

// Object: Class MFNPCAI.NPCAIGoalTarget
// Size: 0x40 (Inherited: 0x28)
struct UNPCAIGoalTarget : UObject
{
	DEFINE_UE_CLASS_HELPERS(UNPCAIGoalTarget, "NPCAIGoalTarget")

	struct UNPCAIAttentionPoint* AttentionPoint; // 0x28(0x8)
	struct AAIController* AIOwner; // 0x30(0x8)
	uint8_t Pad_0x38[0x8]; // 0x38(0x8)

	// Object: Function MFNPCAI.NPCAIGoalTarget.SetZeroGoal
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3c5c770
	// Params: [ Num(0) Size(0x0) ]
	void SetZeroGoal();

	// Object: Function MFNPCAI.NPCAIGoalTarget.SetGoalTargetPoint
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3c5c9c0
	// Params: [ Num(1) Size(0x8) ]
	void SetGoalTargetPoint(struct UNPCAIAttentionPoint* InPoint);

	// Object: Function MFNPCAI.NPCAIGoalTarget.SetAIOwner
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3c5ca9c
	// Params: [ Num(1) Size(0x8) ]
	void SetAIOwner(struct AAIController* InOwner);

	// Object: Function MFNPCAI.NPCAIGoalTarget.PointLookComplete
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3c5c8cc
	// Params: [ Num(1) Size(0x4) ]
	void PointLookComplete(int32_t InLookingIndex);

	// Object: Function MFNPCAI.NPCAIGoalTarget.IsDanger
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3c5c828
	// Params: [ Num(1) Size(0x1) ]
	bool IsDanger();

	// Object: Function MFNPCAI.NPCAIGoalTarget.HaveZeroTarget
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3c5c784
	// Params: [ Num(1) Size(0x1) ]
	bool HaveZeroTarget();

	// Object: Function MFNPCAI.NPCAIGoalTarget.HavePlaceTarget
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3c5c7bc
	// Params: [ Num(1) Size(0x1) ]
	bool HavePlaceTarget();

	// Object: Function MFNPCAI.NPCAIGoalTarget.HaveMainTarget
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3c5c894
	// Params: [ Num(1) Size(0x1) ]
	bool HaveMainTarget();

	// Object: Function MFNPCAI.NPCAIGoalTarget.GetPointType
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3c5c7f4
	// Params: [ Num(1) Size(0x1) ]
	ENPCPlaceForCheckType GetPointType();

	// Object: Function MFNPCAI.NPCAIGoalTarget.GetGoalTargetPoint
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3c5ca68
	// Params: [ Num(1) Size(0x8) ]
	struct UNPCAIAttentionPoint* GetGoalTargetPoint();

	// Object: Function MFNPCAI.NPCAIGoalTarget.GetCreatedTime
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3c5c860
	// Params: [ Num(1) Size(0x4) ]
	float GetCreatedTime();

	// Object: Function MFNPCAI.NPCAIGoalTarget.ClearGoalTarget
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3c5c9ac
	// Params: [ Num(0) Size(0x0) ]
	void ClearGoalTarget();

	// Object: Function MFNPCAI.NPCAIGoalTarget.CanCheckBody
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3c5c974
	// Params: [ Num(1) Size(0x1) ]
	bool CanCheckBody();
};

// Object: Class MFNPCAI.NPCAIGroupBaseRequest
// Size: 0xA8 (Inherited: 0x28)
struct UNPCAIGroupBaseRequest : UObject
{
	DEFINE_UE_CLASS_HELPERS(UNPCAIGroupBaseRequest, "NPCAIGroupBaseRequest")

	int32_t RequestType; // 0x28(0x4)
	int32_t DynamicGroupId; // 0x2C(0x4)
	bool bOnlyInDynamicGroup; // 0x30(0x1)
	EAIGroupRequestPriority RequestPriority; // 0x31(0x1)
	bool bCanExecuteByMyself; // 0x32(0x1)
	uint8_t Pad_0x33[0x1]; // 0x33(0x1)
	int32_t MaxTakenCount; // 0x34(0x4)
	bool IsNeedAllCompleted; // 0x38(0x1)
	uint8_t Pad_0x39[0x3]; // 0x39(0x3)
	int32_t CurrentTakenCount; // 0x3C(0x4)
	int32_t CurrentCompleteCount; // 0x40(0x4)
	int32_t MaxRequestCount; // 0x44(0x4)
	int32_t RequestTypeNeedCompletedInPast; // 0x48(0x4)
	float StartTimeOfTake; // 0x4C(0x4)
	float EndTimeOfTake; // 0x50(0x4)
	float EndTimeOfExecute; // 0x54(0x4)
	uint8_t Pad_0x58[0x8]; // 0x58(0x8)
	struct AActor* Requester; // 0x60(0x8)
	struct UObject* WorldContext; // 0x68(0x8)
	struct TArray<struct AActor*> ExecuterList; // 0x70(0x10)
	struct TArray<struct AActor*> HistoryExecuterList; // 0x80(0x10)
	struct TArray<struct AActor*> PossibleExecuterList; // 0x90(0x10)
	uint8_t Pad_0xA0[0x8]; // 0xA0(0x8)

	// Object: Function MFNPCAI.NPCAIGroupBaseRequest.Take
	// Flags: [Native|Event|Public|BlueprintEvent]
	// Offset: 0x3c5d880
	// Params: [ Num(1) Size(0x8) ]
	void Take(struct AActor* InExecuter);

	// Object: Function MFNPCAI.NPCAIGroupBaseRequest.SetRequestTypeNeedCompletedInPast
	// Flags: [Native|Event|Public|BlueprintEvent]
	// Offset: 0x3c5d930
	// Params: [ Num(1) Size(0x1) ]
	bool SetRequestTypeNeedCompletedInPast();

	// Object: Function MFNPCAI.NPCAIGroupBaseRequest.SetPossibleExecuterList
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x3c5cf3c
	// Params: [ Num(1) Size(0x10) ]
	void SetPossibleExecuterList(const struct TArray<struct AActor*>& InExecuterList);

	// Object: Function MFNPCAI.NPCAIGroupBaseRequest.SetEndTimeOnTake
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3c5d26c
	// Params: [ Num(1) Size(0x4) ]
	void SetEndTimeOnTake(float InEndTime);

	// Object: Function MFNPCAI.NPCAIGroupBaseRequest.SetEndTimeOnExecute
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3c5d1c4
	// Params: [ Num(1) Size(0x4) ]
	void SetEndTimeOnExecute(float InEndTime);

	// Object: Function MFNPCAI.NPCAIGroupBaseRequest.RemoveFromExecuterList
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3c5ccc0
	// Params: [ Num(1) Size(0x8) ]
	void RemoveFromExecuterList(struct AActor* InExecuter);

	// Object: Function MFNPCAI.NPCAIGroupBaseRequest.IsPossibleExecuter
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3c5d000
	// Params: [ Num(2) Size(0x9) ]
	bool IsPossibleExecuter(struct AActor* InExecuter);

	// Object: Function MFNPCAI.NPCAIGroupBaseRequest.IsInHistoryExecuter
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3c5cdd4
	// Params: [ Num(2) Size(0x9) ]
	bool IsInHistoryExecuter(struct AActor* InExecuter);

	// Object: Function MFNPCAI.NPCAIGroupBaseRequest.IsInExecuter
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3c5ce88
	// Params: [ Num(2) Size(0x9) ]
	bool IsInExecuter(struct AActor* InExecuter);

	// Object: Function MFNPCAI.NPCAIGroupBaseRequest.IsGroupAsRequester
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3c5cbd8
	// Params: [ Num(1) Size(0x1) ]
	bool IsGroupAsRequester();

	// Object: Function MFNPCAI.NPCAIGroupBaseRequest.InitRequestType
	// Flags: [Native|Event|Public|BlueprintEvent]
	// Offset: 0x3c5d840
	// Params: [ Num(1) Size(0x1) ]
	bool InitRequestType();

	// Object: Function MFNPCAI.NPCAIGroupBaseRequest.InitRequestInfo
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3c5d47c
	// Params: [ Num(4) Size(0x18) ]
	void InitRequestInfo(struct AActor* InRequester, int32_t InMaxTakenCount, float InEndOfTakeTime, struct UObject* InWorldContext);

	// Object: Function MFNPCAI.NPCAIGroupBaseRequest.InitRequestByBluePrint
	// Flags: [Native|Event|Public|BlueprintEvent]
	// Offset: 0x3c5d800
	// Params: [ Num(1) Size(0x1) ]
	bool InitRequestByBluePrint();

	// Object: Function MFNPCAI.NPCAIGroupBaseRequest.GetStartTimeOfTake
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3c5d190
	// Params: [ Num(1) Size(0x4) ]
	float GetStartTimeOfTake();

	// Object: Function MFNPCAI.NPCAIGroupBaseRequest.GetRequestName
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3c5cc10
	// Params: [ Num(1) Size(0x10) ]
	struct FString GetRequestName();

	// Object: Function MFNPCAI.NPCAIGroupBaseRequest.GetRequester
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3c5cda0
	// Params: [ Num(1) Size(0x8) ]
	struct AActor* GetRequester();

	// Object: Function MFNPCAI.NPCAIGroupBaseRequest.GetExecuterList
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3c5cd68
	// Params: [ Num(1) Size(0x10) ]
	struct TArray<struct AActor*> GetExecuterList();

	// Object: Function MFNPCAI.NPCAIGroupBaseRequest.GetEndTimeOfTake
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3c5d15c
	// Params: [ Num(1) Size(0x4) ]
	float GetEndTimeOfTake();

	// Object: Function MFNPCAI.NPCAIGroupBaseRequest.Dispose
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3c5ccac
	// Params: [ Num(0) Size(0x0) ]
	void Dispose();

	// Object: Function MFNPCAI.NPCAIGroupBaseRequest.CheckIsEndOfTake
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3c5d314
	// Params: [ Num(2) Size(0x5) ]
	bool CheckIsEndOfTake(float InCurrentRuntime);

	// Object: Function MFNPCAI.NPCAIGroupBaseRequest.CheckIsEndOfExecute
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3c5d3c8
	// Params: [ Num(2) Size(0x5) ]
	bool CheckIsEndOfExecute(float InCurrentRuntime);

	// Object: Function MFNPCAI.NPCAIGroupBaseRequest.CheckCanTakeRequestForLastRequestLimit
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3c5d5e4
	// Params: [ Num(2) Size(0x9) ]
	bool CheckCanTakeRequestForLastRequestLimit(struct AActor* InExecuter);

	// Object: Function MFNPCAI.NPCAIGroupBaseRequest.CheckCanTakeRequestForGroupLimit
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3c5d698
	// Params: [ Num(2) Size(0x9) ]
	bool CheckCanTakeRequestForGroupLimit(struct AActor* InExecuter);

	// Object: Function MFNPCAI.NPCAIGroupBaseRequest.CheckCanTakeRequestAllLimit
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3c5d74c
	// Params: [ Num(2) Size(0x9) ]
	bool CheckCanTakeRequestAllLimit(struct AActor* InExecuter);

	// Object: Function MFNPCAI.NPCAIGroupBaseRequest.CheckCanTakeRequest
	// Flags: [Native|Event|Public|BlueprintEvent]
	// Offset: 0x3c5da2c
	// Params: [ Num(2) Size(0x9) ]
	bool CheckCanTakeRequest(struct AActor* InExecuter);

	// Object: Function MFNPCAI.NPCAIGroupBaseRequest.CanRequest
	// Flags: [Native|Event|Public|BlueprintEvent]
	// Offset: 0x3c5dae8
	// Params: [ Num(1) Size(0x1) ]
	bool CanRequest();

	// Object: Function MFNPCAI.NPCAIGroupBaseRequest.CanProceed
	// Flags: [Native|Event|Public|BlueprintEvent]
	// Offset: 0x3c5d970
	// Params: [ Num(2) Size(0x9) ]
	bool CanProceed(struct AActor* InExecuter);

	// Object: Function MFNPCAI.NPCAIGroupBaseRequest.AddPossibleExecuter
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3c5d0b4
	// Params: [ Num(1) Size(0x8) ]
	void AddPossibleExecuter(struct AActor* InExecuter);
};

// Object: Class MFNPCAI.NPCAIGroupCustomRequest
// Size: 0xA8 (Inherited: 0xA8)
struct UNPCAIGroupCustomRequest : UNPCAIGroupBaseRequest
{
	DEFINE_UE_CLASS_HELPERS(UNPCAIGroupCustomRequest, "NPCAIGroupCustomRequest")
};

// Object: Class MFNPCAI.NPCAISubSystemComponent
// Size: 0xF0 (Inherited: 0xE0)
struct UNPCAISubSystemComponent : UActorComponent
{
	DEFINE_UE_CLASS_HELPERS(UNPCAISubSystemComponent, "NPCAISubSystemComponent")

	struct ACharacter* OwnerPawn; // 0xE0(0x8)
	struct AAIController* OwnerController; // 0xE8(0x8)
};

// Object: Class MFNPCAI.NPCAIGroupRequestComponent
// Size: 0x140 (Inherited: 0xF0)
struct UNPCAIGroupRequestComponent : UNPCAISubSystemComponent
{
	DEFINE_UE_CLASS_HELPERS(UNPCAIGroupRequestComponent, "NPCAIGroupRequestComponent")

	bool bIsLogEnabled; // 0xF0(0x1)
	uint8_t Pad_0xF1[0x3]; // 0xF1(0x3)
	int32_t LastCompletedRequestType; // 0xF4(0x4)
	struct FMulticastInlineDelegate OnRequestCompleted; // 0xF8(0x10)
	struct FMulticastInlineDelegate OnRequestGiveUp; // 0x108(0x10)
	float NextSearchRequestTime; // 0x118(0x4)
	uint8_t Pad_0x11C[0x4]; // 0x11C(0x4)
	struct UNPCAIGroupBaseRequest* CurrentRequest; // 0x120(0x8)
	struct TArray<int32_t> CompletedRequestTypeList; // 0x128(0x10)
	struct UNPCAIGroupRequestController* GpRequestController; // 0x138(0x8)

	// Object: Function MFNPCAI.NPCAIGroupRequestComponent.Update
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3c5e088
	// Params: [ Num(0) Size(0x0) ]
	void Update();

	// Object: Function MFNPCAI.NPCAIGroupRequestComponent.TryToFindRequest
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3c5e09c
	// Params: [ Num(1) Size(0x1) ]
	bool TryToFindRequest();

	// Object: Function MFNPCAI.NPCAIGroupRequestComponent.TryGiveUpCurrentRequest
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3c5e060
	// Params: [ Num(0) Size(0x0) ]
	void TryGiveUpCurrentRequest();

	// Object: Function MFNPCAI.NPCAIGroupRequestComponent.TickCheckCurrentRequestIsValid
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3c5e04c
	// Params: [ Num(0) Size(0x0) ]
	void TickCheckCurrentRequestIsValid();

	// Object: Function MFNPCAI.NPCAIGroupRequestComponent.SetCurrentRequestCompleted
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3c5e074
	// Params: [ Num(0) Size(0x0) ]
	void SetCurrentRequestCompleted();

	// Object: Function MFNPCAI.NPCAIGroupRequestComponent.SetCurrentRequest
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3c5e23c
	// Params: [ Num(1) Size(0x8) ]
	void SetCurrentRequest(struct UNPCAIGroupBaseRequest* InRequest);

	// Object: Function MFNPCAI.NPCAIGroupRequestComponent.HasCompletedRequestInPast
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3c5df64
	// Params: [ Num(2) Size(0x5) ]
	bool HasCompletedRequestInPast(int32_t InRequestType);

	// Object: Function MFNPCAI.NPCAIGroupRequestComponent.GetGroupRequestController
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3c5e018
	// Params: [ Num(1) Size(0x8) ]
	struct UNPCAIGroupRequestController* GetGroupRequestController();

	// Object: Function MFNPCAI.NPCAIGroupRequestComponent.CheckCanReplaceHighPriorityRequest
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3c5e0d4
	// Params: [ Num(2) Size(0x9) ]
	bool CheckCanReplaceHighPriorityRequest(struct UNPCAIGroupBaseRequest* InNewRequest);

	// Object: Function MFNPCAI.NPCAIGroupRequestComponent.AcceptRequest
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3c5e188
	// Params: [ Num(2) Size(0x9) ]
	bool AcceptRequest(struct UNPCAIGroupBaseRequest* InRequest);
};

// Object: Class MFNPCAI.NPCAIGroupRequestController
// Size: 0x40 (Inherited: 0x28)
struct UNPCAIGroupRequestController : UObject
{
	DEFINE_UE_CLASS_HELPERS(UNPCAIGroupRequestController, "NPCAIGroupRequestController")

	struct TArray<struct UNPCAIGroupBaseRequest*> GroupRequestsList; // 0x28(0x10)
	float LastTimeAutoFiltRequests; // 0x38(0x4)
	uint8_t Pad_0x3C[0x4]; // 0x3C(0x4)

	// Object: Function MFNPCAI.NPCAIGroupRequestController.TryAddRequest
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3c5ee54
	// Params: [ Num(2) Size(0x9) ]
	bool TryAddRequest(struct UNPCAIGroupBaseRequest* InRequest);

	// Object: Function MFNPCAI.NPCAIGroupRequestController.TryActivateRequestByGroup
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x3c5e534
	// Params: [ Num(8) Size(0x30) ]
	struct UNPCAIGroupBaseRequest* TryActivateRequestByGroup(struct UObject* InWorldContextObject, struct UNPCAIGroupBaseRequest* InRequestClass, int32_t InMaxExecuterCount, bool InIsNeedAllCompleted, bool InOnlyInDynamicGroup, bool InCanExecuteByMyself, const struct TArray<struct AActor*>& InPossibleExecuterList);

	// Object: Function MFNPCAI.NPCAIGroupRequestController.TryActivateRequestByClass
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x3c5e7a4
	// Params: [ Num(7) Size(0x30) ]
	struct UNPCAIGroupBaseRequest* TryActivateRequestByClass(struct AActor* InRequester, struct UNPCAIGroupBaseRequest* InRequestClass, int32_t InMaxExecuterCount, bool InIsNeedAllCompleted, bool InCanExecuteByMyself, const struct TArray<struct AActor*>& InPossibleExecuterList);

	// Object: Function MFNPCAI.NPCAIGroupRequestController.TryActivateRequest
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x3c5e9c4
	// Params: [ Num(7) Size(0x30) ]
	struct UNPCAIGroupBaseRequest* TryActivateRequest(struct AActor* InRequester, struct UNPCAIGroupBaseRequest* InRequestInstance, int32_t InMaxExecuterCount, bool InIsNeedAllCompleted, bool InCanExecuteByMyself, const struct TArray<struct AActor*>& InPossibleExecuterList);

	// Object: Function MFNPCAI.NPCAIGroupRequestController.TryActivateCustomRequest
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3c5e328
	// Params: [ Num(7) Size(0x28) ]
	struct UNPCAIGroupBaseRequest* TryActivateCustomRequest(struct AActor* InRequester, struct UNPCAIGroupCustomRequest* InRequest, struct AActor* PossibleExecuter, bool bResetSearchTime, bool InIsNeedAllCompleted, bool bCleanPendingRequest);

	// Object: Function MFNPCAI.NPCAIGroupRequestController.RequestGiveUpToDo
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3c5ec8c
	// Params: [ Num(2) Size(0x10) ]
	void RequestGiveUpToDo(struct UNPCAIGroupBaseRequest* InRequest, struct AActor* InExecuter);

	// Object: Function MFNPCAI.NPCAIGroupRequestController.RequestCompletedToDo
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3c5ed70
	// Params: [ Num(2) Size(0x10) ]
	void RequestCompletedToDo(struct UNPCAIGroupBaseRequest* InRequest, struct AActor* InExecuter);

	// Object: Function MFNPCAI.NPCAIGroupRequestController.RemoveRequestInList
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3c5efb0
	// Params: [ Num(1) Size(0x8) ]
	void RemoveRequestInList(struct UNPCAIGroupBaseRequest* InRequest);

	// Object: Function MFNPCAI.NPCAIGroupRequestController.RemoveAllByRequester
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3c5ef08
	// Params: [ Num(1) Size(0x8) ]
	void RemoveAllByRequester(struct AActor* InRequester);

	// Object: Function MFNPCAI.NPCAIGroupRequestController.GetGroupRequestsList
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3c5f108
	// Params: [ Num(1) Size(0x10) ]
	struct TArray<struct UNPCAIGroupBaseRequest*> GetGroupRequestsList();

	// Object: Function MFNPCAI.NPCAIGroupRequestController.GetGroupRequestListByType
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x3c5f18c
	// Params: [ Num(3) Size(0x1C) ]
	int32_t GetGroupRequestListByType(int32_t InRequestType, struct TArray<struct UNPCAIGroupBaseRequest*>& OutRequestsList);

	// Object: Function MFNPCAI.NPCAIGroupRequestController.GetGroupRequestCountByType
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3c5f348
	// Params: [ Num(2) Size(0x8) ]
	int32_t GetGroupRequestCountByType(int32_t InRequestType);

	// Object: Function MFNPCAI.NPCAIGroupRequestController.GetGroupRequestCount
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3c5f3f8
	// Params: [ Num(1) Size(0x4) ]
	int32_t GetGroupRequestCount();

	// Object: Function MFNPCAI.NPCAIGroupRequestController.GetGroupRequestByType
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3c5f298
	// Params: [ Num(2) Size(0x10) ]
	struct UNPCAIGroupBaseRequest* GetGroupRequestByType(int32_t InRequestType);

	// Object: Function MFNPCAI.NPCAIGroupRequestController.FindForMe
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3c5f058
	// Params: [ Num(2) Size(0x10) ]
	struct UNPCAIGroupBaseRequest* FindForMe(struct AActor* InExecuter);

	// Object: Function MFNPCAI.NPCAIGroupRequestController.FilterInValidRequest
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3c5ebe4
	// Params: [ Num(1) Size(0x8) ]
	void FilterInValidRequest(struct UObject* WorldContext);
};

// Object: Class MFNPCAI.NPCAIHNavActor
// Size: 0x490 (Inherited: 0x300)
struct ANPCAIHNavActor : AActor
{
	DEFINE_UE_CLASS_HELPERS(ANPCAIHNavActor, "NPCAIHNavActor")

	struct FHNavSettings Settings; // 0x300(0x3C)
	uint8_t Pad_0x33C[0x4]; // 0x33C(0x4)
	struct TArray<struct FHNavGraph> Graphs; // 0x340(0x10)
	int32_t MinimumPartitionCount; // 0x350(0x4)
	uint8_t Pad_0x354[0x4]; // 0x354(0x4)
	struct TArray<uint8_t> PortalNodeFlags; // 0x358(0x10)
	uint8_t Pad_0x368[0xC0]; // 0x368(0xC0)
	struct FHNavSearchInfo SearchedInfo; // 0x428(0x60)
	uint8_t Pad_0x488[0x4]; // 0x488(0x4)
	bool bUseDefaultPathfinding; // 0x48C(0x1)
	bool bNewMaxPortalAdjacency; // 0x48D(0x1)
	uint8_t Pad_0x48E[0x2]; // 0x48E(0x2)
};

// Object: Class MFNPCAI.NPCAILaunchPad
// Size: 0x338 (Inherited: 0x300)
struct ANPCAILaunchPad : AActor
{
	DEFINE_UE_CLASS_HELPERS(ANPCAILaunchPad, "NPCAILaunchPad")

	struct USceneComponent* Root; // 0x300(0x8)
	struct UStaticMeshComponent* Launchpad; // 0x308(0x8)
	struct USphereComponent* TriggerVolume; // 0x310(0x8)
	struct UNavLinkComponent* NavLink; // 0x318(0x8)
	struct FVector Target; // 0x320(0xC)
	uint8_t Pad_0x32C[0x4]; // 0x32C(0x4)
	struct ACharacter* LaunchedCharacter; // 0x330(0x8)

	// Object: Function MFNPCAI.NPCAILaunchPad.OnTriggerBeginOverlap
	// Flags: [Final|Native|Public|HasOutParms]
	// Offset: 0x3c61ef0
	// Params: [ Num(6) Size(0xB8) ]
	void OnTriggerBeginOverlap(struct UPrimitiveComponent* OverlappedComp, struct AActor* Other, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);

	// Object: Function MFNPCAI.NPCAILaunchPad.CanTriggerLaunch
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x5d8cbc8
	// Params: [ Num(2) Size(0x9) ]
	bool CanTriggerLaunch(struct ACharacter* Other);

	// Object: Function MFNPCAI.NPCAILaunchPad.CalculateLaunchVelocity
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure]
	// Offset: 0x3c620fc
	// Params: [ Num(2) Size(0x14) ]
	struct FVector CalculateLaunchVelocity(struct AActor* LaunchedActor);

	// Object: Function MFNPCAI.NPCAILaunchPad.BP_LaunchCharacter
	// Flags: [Event|Protected|BlueprintEvent]
	// Offset: 0x5d8cbc8
	// Params: [ Num(1) Size(0x8) ]
	void BP_LaunchCharacter(struct ACharacter* Character);
};

// Object: Class MFNPCAI.NPCAITestingRenderingComponent
// Size: 0x680 (Inherited: 0x680)
struct UNPCAITestingRenderingComponent : UPrimitiveComponent
{
	DEFINE_UE_CLASS_HELPERS(UNPCAITestingRenderingComponent, "NPCAITestingRenderingComponent")
};

// Object: Class MFNPCAI.NPCAILocalNavigationRenderingComponent
// Size: 0x680 (Inherited: 0x680)
struct UNPCAILocalNavigationRenderingComponent : UNPCAITestingRenderingComponent
{
	DEFINE_UE_CLASS_HELPERS(UNPCAILocalNavigationRenderingComponent, "NPCAILocalNavigationRenderingComponent")
};

// Object: Class MFNPCAI.NPCAINavSubsystemBase
// Size: 0x30 (Inherited: 0x30)
struct UNPCAINavSubsystemBase : UNPCAISubsystemBase
{
	DEFINE_UE_CLASS_HELPERS(UNPCAINavSubsystemBase, "NPCAINavSubsystemBase")

	// Object: Function MFNPCAI.NPCAINavSubsystemBase.IsNavTileDataPrepared
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3c859e4
	// Params: [ Num(2) Size(0x9) ]
	static bool IsNavTileDataPrepared(struct UObject* WorldContextObject);

	// Object: Function MFNPCAI.NPCAINavSubsystemBase.GetNavLinkById
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3c85a90
	// Params: [ Num(3) Size(0x18) ]
	static struct ANPCAINavLinkProxy* GetNavLinkById(struct UObject* WorldContextObject, int32_t LinkId);
};

// Object: Class MFNPCAI.NPCAILocalNavigationSubsystem
// Size: 0xC8 (Inherited: 0x30)
struct UNPCAILocalNavigationSubsystem : UNPCAINavSubsystemBase
{
	DEFINE_UE_CLASS_HELPERS(UNPCAILocalNavigationSubsystem, "NPCAILocalNavigationSubsystem")

	float GridCellSize; // 0x30(0x4)
	uint8_t Pad_0x34[0x34]; // 0x34(0x34)
	struct TMap<struct TWeakObjectPtr<struct UObject>, int32_t> CauserToGridId; // 0x68(0x50)
	struct FMulticastInlineDelegate OnNavigationGridUpdated; // 0xB8(0x10)

	// Object: Function MFNPCAI.NPCAILocalNavigationSubsystem.SetCellSize
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3c62bf4
	// Params: [ Num(2) Size(0x5) ]
	bool SetCellSize(float CellSize);

	// Object: Function MFNPCAI.NPCAILocalNavigationSubsystem.RemoveGridById
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3c623d8
	// Params: [ Num(3) Size(0xC) ]
	int32_t RemoveGridById(int32_t GridId, bool bUpdate);

	// Object: Function MFNPCAI.NPCAILocalNavigationSubsystem.RemoveGridByCauser
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3c622e0
	// Params: [ Num(3) Size(0x10) ]
	int32_t RemoveGridByCauser(struct UObject* Causer, bool bUpdate);

	// Object: Function MFNPCAI.NPCAILocalNavigationSubsystem.RemoveAllGrids
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3c622cc
	// Params: [ Num(0) Size(0x0) ]
	void RemoveAllGrids();

	// Object: DelegateFunction MFNPCAI.NPCAILocalNavigationSubsystem.OnNavigationGridUpdated__DelegateSignature
	// Flags: [MulticastDelegate|Public|Delegate]
	// Offset: 0x5d8cbc8
	// Params: [ Num(0) Size(0x0) ]
	void OnNavigationGridUpdated__DelegateSignature();

	// Object: Function MFNPCAI.NPCAILocalNavigationSubsystem.CreateGridForPoints
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x3c629d8
	// Params: [ Num(7) Size(0x30) ]
	int32_t CreateGridForPoints(struct UObject* Causer, ENPCAICellGridValue CellGridValue, const struct TArray<struct FVector>& Locations, float Padding2D, float Height, bool bRebuildGrids);

	// Object: Function MFNPCAI.NPCAILocalNavigationSubsystem.CreateGridForCapsule
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable]
	// Offset: 0x3c624cc
	// Params: [ Num(9) Size(0x30) ]
	int32_t CreateGridForCapsule(struct UObject* Causer, ENPCAICellGridValue CellGridValue, const struct FVector& Location, float CapsuleRadius, float CapsuleHalfHeight, float Padding2D, float Height, bool bRebuildGrids);

	// Object: Function MFNPCAI.NPCAILocalNavigationSubsystem.CreateGridForBox
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable]
	// Offset: 0x3c6274c
	// Params: [ Num(9) Size(0x40) ]
	int32_t CreateGridForBox(struct UObject* Causer, ENPCAICellGridValue CellGridValue, const struct FVector& Location, const struct FVector& Extent, struct FRotator Rotation, float Padding2D, float Height, bool bRebuildGrids);
};

// Object: Class MFNPCAI.NPCAITestingActor
// Size: 0x340 (Inherited: 0x300)
struct ANPCAITestingActor : AActor
{
	DEFINE_UE_CLASS_HELPERS(ANPCAITestingActor, "NPCAITestingActor")

	struct UCapsuleComponent* CapsuleComponent; // 0x300(0x8)
	struct FNavAgentProperties NavAgentProps; // 0x308(0x30)
	bool bEnableDrawing; // 0x338(0x1)
	uint8_t Pad_0x339[0x3]; // 0x339(0x3)
	float DrawDistanceLimit; // 0x33C(0x4)
};

// Object: Class MFNPCAI.NPCAILocalNavigationTestingActor
// Size: 0x3A0 (Inherited: 0x340)
struct ANPCAILocalNavigationTestingActor : ANPCAITestingActor
{
	DEFINE_UE_CLASS_HELPERS(ANPCAILocalNavigationTestingActor, "NPCAILocalNavigationTestingActor")

	struct FColor EmptyCellColor; // 0x340(0x4)
	struct FColor BlockedCellColor; // 0x344(0x4)
	struct FVector CellTextOffset; // 0x348(0xC)
	bool bDrawNavGrids; // 0x354(0x1)
	bool bDrawCellId; // 0x355(0x1)
	bool bDrawCellCoords; // 0x356(0x1)
	bool bDrawCellZ; // 0x357(0x1)
	struct AActor* Destination; // 0x358(0x8)
	struct TArray<struct FVector> PathPoints; // 0x360(0x10)
	int32_t SelfCombinedGridId; // 0x370(0x4)
	uint8_t Pad_0x374[0x4]; // 0x374(0x4)
	struct TArray<int32_t> SelfSourceGridIds; // 0x378(0x10)
	struct FIntVector SelfGridSize; // 0x388(0xC)
	struct FIntVector SelfCoords; // 0x394(0xC)

	// Object: Function MFNPCAI.NPCAILocalNavigationTestingActor.OnNavigationGridUpdated
	// Flags: [Final|Native|Protected]
	// Offset: 0x3c62cf8
	// Params: [ Num(0) Size(0x0) ]
	void OnNavigationGridUpdated();
};

// Object: Class MFNPCAI.NPCAIMemorySystemComponent
// Size: 0x318 (Inherited: 0xF0)
struct UNPCAIMemorySystemComponent : UNPCAISubSystemComponent
{
	DEFINE_UE_CLASS_HELPERS(UNPCAIMemorySystemComponent, "NPCAIMemorySystemComponent")

	struct AAIController* AIOwner; // 0xF0(0x8)
	bool IsLockingGoalEnemy; // 0xF8(0x1)
	uint8_t Pad_0xF9[0x7]; // 0xF9(0x7)
	struct FMulticastInlineDelegate GoalEnemyChangedEvent; // 0x100(0x10)
	struct FMulticastInlineDelegate GoalProtectedPersonChangedEvent; // 0x110(0x10)
	struct UNPCAITargetInfo* GoalEnemy; // 0x120(0x8)
	struct UNPCAITargetInfo* LastEnemy; // 0x128(0x8)
	struct TWeakObjectPtr<struct ACharacter> GoalProtectedPerson; // 0x130(0x8)
	struct TWeakObjectPtr<struct ACharacter> LastGoalProtectedPerson; // 0x138(0x8)
	bool bAttentBeSeenByPlayer; // 0x140(0x1)
	bool bIsBeSeenByPlayer; // 0x141(0x1)
	uint8_t Pad_0x142[0x2]; // 0x142(0x2)
	float LastBeSeenTimeByPlayer; // 0x144(0x4)
	struct UNPCAIGoalTarget* GoalTarget; // 0x148(0x8)
	struct FVector CheckCoverPointPosition; // 0x150(0xC)
	int32_t CurrentCoverPointID; // 0x15C(0x4)
	struct FAIBackUpCoverPointFinder BackUpCoverPointFinder; // 0x160(0x1C)
	int32_t PeekCount; // 0x17C(0x4)
	uint8_t CallUpReason; // 0x180(0x1)
	uint8_t CallUpResult; // 0x181(0x1)
	uint8_t Pad_0x182[0x2]; // 0x182(0x2)
	int32_t ThrowSmokeNum; // 0x184(0x4)
	int32_t InSection; // 0x188(0x4)
	float LastMolotovHurttime; // 0x18C(0x4)
	float SightWeakenEndTime; // 0x190(0x4)
	bool bIsInTryLeanShoot; // 0x194(0x1)
	uint8_t Pad_0x195[0x3]; // 0x195(0x3)
	float PauseBehaviorEndTime; // 0x198(0x4)
	struct FAIStackGunRecord StackGunRecord; // 0x19C(0x44)
	struct TArray<int32_t> AcceptedSceneEvtUniqueIds; // 0x1E0(0x10)
	struct FAIRoundPathFindingNodes RoundPathNodes; // 0x1F0(0x80)
	struct AActor* TreasureBoxWantProtect; // 0x270(0x8)
	struct FVector Cache_AmbushAgainstStartPoint; // 0x278(0xC)
	struct FVector Cache_AmbushAgainstEndPoint; // 0x284(0xC)
	struct FVector Cache_AmbushAgainstResultPoint; // 0x290(0xC)
	struct FNPCAIQueryRoundEnvironmentResult Cache_QREResult; // 0x29C(0x5C)
	struct UActorComponent* AIStaticComponent; // 0x2F8(0x8)
	struct UAISceneEventsTriggerManager* AISceneEventsTriggerManager; // 0x300(0x8)
	struct UNPCAIPerceptionComponent* CachedPerceptionComponent; // 0x308(0x8)
	struct UNPCAIMoverSystemComponent* MoverSystemComponent; // 0x310(0x8)

	// Object: Function MFNPCAI.NPCAIMemorySystemComponent.UpdateRoundPathNodes
	// Flags: [Final|Native|Public]
	// Offset: 0x3c63148
	// Params: [ Num(0) Size(0x0) ]
	void UpdateRoundPathNodes();

	// Object: Function MFNPCAI.NPCAIMemorySystemComponent.SetStackGunRecord
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults]
	// Offset: 0x3c632b8
	// Params: [ Num(4) Size(0x1A) ]
	void SetStackGunRecord(const struct FVector& InMyPos, const struct FVector& InEnemyPos, const EAIPose& InPose, const EAILeanType& InLean);

	// Object: Function MFNPCAI.NPCAIMemorySystemComponent.SetSightWeakenTime
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3c63680
	// Params: [ Num(1) Size(0x4) ]
	void SetSightWeakenTime(float WeakenTime);

	// Object: Function MFNPCAI.NPCAIMemorySystemComponent.SetPauseBehaviorTime
	// Flags: [Final|Native|Public]
	// Offset: 0x3c63484
	// Params: [ Num(1) Size(0x4) ]
	void SetPauseBehaviorTime(float Time);

	// Object: Function MFNPCAI.NPCAIMemorySystemComponent.SetLastCalculateBackUpCoverPointNearBy
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults]
	// Offset: 0x3c63914
	// Params: [ Num(1) Size(0xC) ]
	void SetLastCalculateBackUpCoverPointNearBy(const struct FVector& InEnemyPos);

	// Object: Function MFNPCAI.NPCAIMemorySystemComponent.SetIsMolotovHurted
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3c63728
	// Params: [ Num(1) Size(0x1) ]
	void SetIsMolotovHurted(bool bInHurted);

	// Object: Function MFNPCAI.NPCAIMemorySystemComponent.SetIsInTryLeanShoot
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3c63564
	// Params: [ Num(1) Size(0x1) ]
	void SetIsInTryLeanShoot(bool bTryLean);

	// Object: Function MFNPCAI.NPCAIMemorySystemComponent.SetIsAttentBeSeenByPlayer
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3c63cf0
	// Params: [ Num(1) Size(0x1) ]
	void SetIsAttentBeSeenByPlayer(bool bValue);

	// Object: Function MFNPCAI.NPCAIMemorySystemComponent.SetGoalTarget
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3c63e44
	// Params: [ Num(2) Size(0x10) ]
	static void SetGoalTarget(struct AActor* InOwner, struct UNPCAIAttentionPoint* InPoint);

	// Object: Function MFNPCAI.NPCAIMemorySystemComponent.SetGoalEnemy
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3c640ac
	// Params: [ Num(2) Size(0x10) ]
	static void SetGoalEnemy(struct AActor* InOwner, struct UNPCAITargetInfo* InEnemy);

	// Object: Function MFNPCAI.NPCAIMemorySystemComponent.SetCurrentCoverPoint
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3c63adc
	// Params: [ Num(2) Size(0xC) ]
	static void SetCurrentCoverPoint(struct AActor* InOwner, int32_t InCoverPointID);

	// Object: Function MFNPCAI.NPCAIMemorySystemComponent.SetBeSeenByPlayer
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3c63c24
	// Params: [ Num(1) Size(0x1) ]
	void SetBeSeenByPlayer(bool bValue);

	// Object: Function MFNPCAI.NPCAIMemorySystemComponent.RemoveSceneEvent
	// Flags: [Final|Native|Public]
	// Offset: 0x3c6315c
	// Params: [ Num(1) Size(0x4) ]
	void RemoveSceneEvent(int32_t EventUniqueId);

	// Object: Function MFNPCAI.NPCAIMemorySystemComponent.QueryPathLengthToPoint
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults]
	// Offset: 0x3c62ff4
	// Params: [ Num(4) Size(0x20) ]
	float QueryPathLengthToPoint(const struct FVector& ToPoint, const int64_t& PointPolyRef, bool bTryUpdatePathNodes);

	// Object: Function MFNPCAI.NPCAIMemorySystemComponent.QueryNavPathPoints
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults]
	// Offset: 0x3c62d78
	// Params: [ Num(3) Size(0x21) ]
	bool QueryNavPathPoints(const struct FVector& ToPoint, struct TArray<struct FVector>& Paths);

	// Object: Function MFNPCAI.NPCAIMemorySystemComponent.PointIsAroundAI
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults]
	// Offset: 0x3c62e9c
	// Params: [ Num(4) Size(0x1A) ]
	bool PointIsAroundAI(const struct FVector& ToPoint, const int64_t& PointPolyRef, bool bTryUpdatePathNodes);

	// Object: Function MFNPCAI.NPCAIMemorySystemComponent.IsSightWeaken
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3c63614
	// Params: [ Num(1) Size(0x1) ]
	bool IsSightWeaken();

	// Object: Function MFNPCAI.NPCAIMemorySystemComponent.IsInCover
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3c63bb4
	// Params: [ Num(1) Size(0x1) ]
	bool IsInCover();

	// Object: Function MFNPCAI.NPCAIMemorySystemComponent.IsGoalEnemyThreaten
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x3c63f18
	// Params: [ Num(2) Size(0x5) ]
	bool IsGoalEnemyThreaten(float ThreatenDistance);

	// Object: Function MFNPCAI.NPCAIMemorySystemComponent.IsBeSeenByPlayer
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3c63bec
	// Params: [ Num(1) Size(0x1) ]
	bool IsBeSeenByPlayer();

	// Object: Function MFNPCAI.NPCAIMemorySystemComponent.IsAttentBeSeenByPlayer
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3c63cd4
	// Params: [ Num(1) Size(0x1) ]
	bool IsAttentBeSeenByPlayer();

	// Object: Function MFNPCAI.NPCAIMemorySystemComponent.HasGoldEnemyOrTarget
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3c63fcc
	// Params: [ Num(1) Size(0x1) ]
	bool HasGoldEnemyOrTarget();

	// Object: Function MFNPCAI.NPCAIMemorySystemComponent.GetSightWeakenEndTime
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3c6364c
	// Params: [ Num(1) Size(0x4) ]
	float GetSightWeakenEndTime();

	// Object: Function MFNPCAI.NPCAIMemorySystemComponent.GetPauseBehaviorEndTime
	// Flags: [Final|Native|Public]
	// Offset: 0x3c63450
	// Params: [ Num(1) Size(0x4) ]
	float GetPauseBehaviorEndTime();

	// Object: Function MFNPCAI.NPCAIMemorySystemComponent.GetLastBeSeenTimeByPlayer
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3c63c08
	// Params: [ Num(1) Size(0x4) ]
	float GetLastBeSeenTimeByPlayer();

	// Object: Function MFNPCAI.NPCAIMemorySystemComponent.GetIsMolotovHurted
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3c637d8
	// Params: [ Num(1) Size(0x1) ]
	bool GetIsMolotovHurted();

	// Object: Function MFNPCAI.NPCAIMemorySystemComponent.GetIsInTryLeanShoot
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3c6352c
	// Params: [ Num(1) Size(0x1) ]
	bool GetIsInTryLeanShoot();

	// Object: Function MFNPCAI.NPCAIMemorySystemComponent.GetGoalTarget
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3c63d9c
	// Params: [ Num(2) Size(0x10) ]
	static struct UNPCAIGoalTarget* GetGoalTarget(struct AActor* InOwner);

	// Object: Function MFNPCAI.NPCAIMemorySystemComponent.GetGoalEnemy
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3c64004
	// Params: [ Num(2) Size(0x10) ]
	static struct UNPCAITargetInfo* GetGoalEnemy(struct AActor* InOwner);

	// Object: Function MFNPCAI.NPCAIMemorySystemComponent.GetCurrentCoverPoint
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x3c639c4
	// Params: [ Num(3) Size(0x59) ]
	static bool GetCurrentCoverPoint(struct AActor* InOwner, struct FCoverPointOctreeData& Out_CoverPoint);

	// Object: Function MFNPCAI.NPCAIMemorySystemComponent.GetCachedPerceptionComponent
	// Flags: [Final|Native|Protected]
	// Offset: 0x3c62d44
	// Params: [ Num(1) Size(0x8) ]
	struct UNPCAIPerceptionComponent* GetCachedPerceptionComponent();

	// Object: Function MFNPCAI.NPCAIMemorySystemComponent.CanCalculateBackUpCoverPointNearBy
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults]
	// Offset: 0x3c63810
	// Params: [ Num(3) Size(0x11) ]
	bool CanCalculateBackUpCoverPointNearBy(const struct FVector& InEnemyPos, float InRadiusNoCheck);

	// Object: Function MFNPCAI.NPCAIMemorySystemComponent.AcceptSceneEvent
	// Flags: [Final|Native|Public]
	// Offset: 0x3c63204
	// Params: [ Num(2) Size(0x5) ]
	bool AcceptSceneEvent(int32_t EventUniqueId);
};

// Object: Class MFNPCAI.NPCAIPropertyProfileBase
// Size: 0x38 (Inherited: 0x28)
struct UNPCAIPropertyProfileBase : UObject
{
	DEFINE_UE_CLASS_HELPERS(UNPCAIPropertyProfileBase, "NPCAIPropertyProfileBase")

	struct UNPCAIProfileBaseComponent* PropertyComponentClass; // 0x28(0x8)
	EAIProfileType AIProfileType; // 0x30(0x1)
	uint8_t Pad_0x31[0x7]; // 0x31(0x7)
};

// Object: Class MFNPCAI.NPCAIModifierProfile
// Size: 0x38 (Inherited: 0x38)
struct UNPCAIModifierProfile : UNPCAIPropertyProfileBase
{
	DEFINE_UE_CLASS_HELPERS(UNPCAIModifierProfile, "NPCAIModifierProfile")
};

// Object: Class MFNPCAI.AIModifierAIDataProfile
// Size: 0x38 (Inherited: 0x38)
struct UAIModifierAIDataProfile : UNPCAIModifierProfile
{
	DEFINE_UE_CLASS_HELPERS(UAIModifierAIDataProfile, "AIModifierAIDataProfile")

	float DamageScale; // 0x34(0x4)
};

// Object: Class MFNPCAI.NPCAIProfileBaseComponent
// Size: 0x38 (Inherited: 0x28)
struct UNPCAIProfileBaseComponent : UObject
{
	DEFINE_UE_CLASS_HELPERS(UNPCAIProfileBaseComponent, "NPCAIProfileBaseComponent")

	struct UNPCAIPropertyProfileBase* PropertyProfile; // 0x28(0x8)
	struct AActor* Owner; // 0x30(0x8)

	// Object: Function MFNPCAI.NPCAIProfileBaseComponent.SetProfile
	// Flags: [Native|Public]
	// Offset: 0x3c8e000
	// Params: [ Num(1) Size(0x8) ]
	void SetProfile(struct UNPCAIPropertyProfileBase* InPropertyProfile);

	// Object: Function MFNPCAI.NPCAIProfileBaseComponent.GetTimeSeconds
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x3c8e0b0
	// Params: [ Num(1) Size(0x4) ]
	float GetTimeSeconds();

	// Object: Function MFNPCAI.NPCAIProfileBaseComponent.GetOwner
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3c8e0e4
	// Params: [ Num(1) Size(0x8) ]
	struct AActor* GetOwner();
};

// Object: Class MFNPCAI.NPCAIModifierComponent
// Size: 0x38 (Inherited: 0x38)
struct UNPCAIModifierComponent : UNPCAIProfileBaseComponent
{
	DEFINE_UE_CLASS_HELPERS(UNPCAIModifierComponent, "NPCAIModifierComponent")
};

// Object: Class MFNPCAI.NPCAIModifierComponent_AIData
// Size: 0x38 (Inherited: 0x38)
struct UNPCAIModifierComponent_AIData : UNPCAIModifierComponent
{
	DEFINE_UE_CLASS_HELPERS(UNPCAIModifierComponent_AIData, "NPCAIModifierComponent_AIData")

	// Object: Function MFNPCAI.NPCAIModifierComponent_AIData.SetDamageScale
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3c67620
	// Params: [ Num(1) Size(0x4) ]
	void SetDamageScale(float InDamageScale);

	// Object: Function MFNPCAI.NPCAIModifierComponent_AIData.GetDamageScale
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3c675ec
	// Params: [ Num(1) Size(0x4) ]
	float GetDamageScale();
};

// Object: Class MFNPCAI.AIModifierAITypeProfile
// Size: 0x38 (Inherited: 0x38)
struct UAIModifierAITypeProfile : UNPCAIModifierProfile
{
	DEFINE_UE_CLASS_HELPERS(UAIModifierAITypeProfile, "AIModifierAITypeProfile")

	EAIMainType AIMainType; // 0x31(0x1)
};

// Object: Class MFNPCAI.NPCAIModifierComponent_AIType
// Size: 0x38 (Inherited: 0x38)
struct UNPCAIModifierComponent_AIType : UNPCAIModifierComponent
{
	DEFINE_UE_CLASS_HELPERS(UNPCAIModifierComponent_AIType, "NPCAIModifierComponent_AIType")
};

// Object: Class MFNPCAI.AIModifierArmorProfile
// Size: 0x38 (Inherited: 0x38)
struct UAIModifierArmorProfile : UNPCAIModifierProfile
{
	DEFINE_UE_CLASS_HELPERS(UAIModifierArmorProfile, "AIModifierArmorProfile")
};

// Object: Class MFNPCAI.NPCAIModifierComponent_Armor
// Size: 0x38 (Inherited: 0x38)
struct UNPCAIModifierComponent_Armor : UNPCAIModifierComponent
{
	DEFINE_UE_CLASS_HELPERS(UNPCAIModifierComponent_Armor, "NPCAIModifierComponent_Armor")
};

// Object: Class MFNPCAI.AIModifierDamageProfile
// Size: 0x38 (Inherited: 0x38)
struct UAIModifierDamageProfile : UNPCAIModifierProfile
{
	DEFINE_UE_CLASS_HELPERS(UAIModifierDamageProfile, "AIModifierDamageProfile")
};

// Object: Class MFNPCAI.NPCAIModifierComponent_Damage
// Size: 0x38 (Inherited: 0x38)
struct UNPCAIModifierComponent_Damage : UNPCAIModifierComponent
{
	DEFINE_UE_CLASS_HELPERS(UNPCAIModifierComponent_Damage, "NPCAIModifierComponent_Damage")
};

// Object: Class MFNPCAI.NPCAIMoverSystemComponent
// Size: 0x310 (Inherited: 0xF0)
struct UNPCAIMoverSystemComponent : UNPCAISubSystemComponent
{
	DEFINE_UE_CLASS_HELPERS(UNPCAIMoverSystemComponent, "NPCAIMoverSystemComponent")

	bool bAllowStrafe; // 0xF0(0x1)
	bool bAllowPartialPath; // 0xF1(0x1)
	uint8_t Pad_0xF2[0x2]; // 0xF2(0x2)
	float AcceptableRadius; // 0xF4(0x4)
	float OffsetFromCornersDistance; // 0xF8(0x4)
	float DisposableOffsetFromCornersDistance; // 0xFC(0x4)
	uint8_t Pad_0x100[0x4]; // 0x100(0x4)
	bool bReachTestIncludesAgentRadius; // 0x104(0x1)
	bool bReachTestIncludesGoalRadius; // 0x105(0x1)
	bool bProjectGoalLocation; // 0x106(0x1)
	uint8_t Pad_0x107[0x1]; // 0x107(0x1)
	bool bHandleLandedDelegate; // 0x108(0x1)
	bool bEnableMoverSystem; // 0x109(0x1)
	ENPCAIMovementKind MovementKind; // 0x10A(0x1)
	bool bCanGotoCloseOtherAI; // 0x10B(0x1)
	bool bMarkImportantIfPassDoor; // 0x10C(0x1)
	uint8_t Pad_0x10D[0x13]; // 0x10D(0x13)
	struct TArray<struct AVolume*> AvoidVolumes; // 0x120(0x10)
	uint8_t Pad_0x130[0x44]; // 0x130(0x44)
	struct FVector DirCurPoint; // 0x174(0xC)
	ENPCAIMoveResult LastMoveResult; // 0x180(0x1)
	uint8_t Pad_0x181[0x2B]; // 0x181(0x2B)
	float CurrentSprintEngery; // 0x1AC(0x4)
	struct UNPCAIPropertyComponent_Move* MoveProperty; // 0x1B0(0x8)
	struct UNPCAIGlobalSharedInfo* SharedInfo; // 0x1B8(0x8)
	struct FAILocationMonitor LocationMonitor; // 0x1C0(0x30)
	uint8_t Pad_0x1F0[0x24]; // 0x1F0(0x24)
	struct TWeakObjectPtr<struct AActor> CaredActorWhenMoving; // 0x214(0x8)
	float CaredActorEffectRadius; // 0x21C(0x4)
	struct FVector BlendingVelocity; // 0x220(0xC)
	int32_t CheckPointCountOnPath; // 0x22C(0x4)
	struct FMulticastInlineDelegate OnAIPathChecked; // 0x230(0x10)
	struct FMulticastInlineDelegate OnAIGoDirectlyFinished; // 0x240(0x10)
	struct FMulticastInlineDelegate OnOutOfNavmesh; // 0x250(0x10)
	uint8_t Pad_0x260[0x10]; // 0x260(0x10)
	bool bUseFlanking; // 0x270(0x1)
	uint8_t Pad_0x271[0x3]; // 0x271(0x3)
	struct FVector DangerPoint; // 0x274(0xC)
	struct FVector DangerPointDirection; // 0x280(0xC)
	float DangerPointEffectRadius; // 0x28C(0x4)
	uint8_t Pad_0x290[0x4]; // 0x290(0x4)
	float MaxTurnDistance; // 0x294(0x4)
	float MinTurnDistance; // 0x298(0x4)
	float DistanceCheck; // 0x29C(0x4)
	float SwayWidthCheck; // 0x2A0(0x4)
	float SwayWidth; // 0x2A4(0x4)
	float RandSwayWidthRate; // 0x2A8(0x4)
	float PathOffset; // 0x2AC(0x4)
	int32_t SampleTimes; // 0x2B0(0x4)
	int32_t RegionWhereNavLinksNeedDisable; // 0x2B4(0x4)
	struct UActorComponent* AIDoorOpenerComponent; // 0x2B8(0x8)
	struct UActorComponent* AIPoseComponent; // 0x2C0(0x8)
	int32_t Blending_Count; // 0x2C8(0x4)
	float Blending_Time; // 0x2CC(0x4)
	uint8_t Pad_0x2D0[0x40]; // 0x2D0(0x40)

	// Object: Function MFNPCAI.NPCAIMoverSystemComponent.SetupRegionWhereNavLinksNeedDisable
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3c67a68
	// Params: [ Num(1) Size(0x4) ]
	void SetupRegionWhereNavLinksNeedDisable(int32_t RegionIndex);

	// Object: Function MFNPCAI.NPCAIMoverSystemComponent.SetupFlanking
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable]
	// Offset: 0x3c67b10
	// Params: [ Num(3) Size(0x1C) ]
	void SetupFlanking(const struct FVector& InDangerPoint, const struct FVector& InDangerPointDirection, float InDangerPointEffectRadius);

	// Object: Function MFNPCAI.NPCAIMoverSystemComponent.SetIgnoreGotoPoint
	// Flags: [Final|Native|Public]
	// Offset: 0x3c68240
	// Params: [ Num(1) Size(0x4) ]
	void SetIgnoreGotoPoint(float IgnoreTime);

	// Object: Function MFNPCAI.NPCAIMoverSystemComponent.SetDisposableOffsetFromCornersDistance
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3c67c50
	// Params: [ Num(1) Size(0x4) ]
	void SetDisposableOffsetFromCornersDistance(float OffsetDistance);

	// Object: Function MFNPCAI.NPCAIMoverSystemComponent.SetDestination
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x3c686b8
	// Params: [ Num(1) Size(0xC) ]
	void SetDestination(struct FVector InPosition);

	// Object: Function MFNPCAI.NPCAIMoverSystemComponent.SetCurrentMoveType
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3c687d0
	// Params: [ Num(1) Size(0x1) ]
	void SetCurrentMoveType(EAIMoveType InMoveType);

	// Object: Function MFNPCAI.NPCAIMoverSystemComponent.SetAvoidVolumes
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3c6846c
	// Params: [ Num(1) Size(0x10) ]
	void SetAvoidVolumes(struct TArray<struct AVolume*> Volumes);

	// Object: Function MFNPCAI.NPCAIMoverSystemComponent.PauseMovement
	// Flags: [Final|Native|Public]
	// Offset: 0x3c68320
	// Params: [ Num(1) Size(0x4) ]
	void PauseMovement(float PauseTime);

	// Object: Function MFNPCAI.NPCAIMoverSystemComponent.OnMovementModeChanged
	// Flags: [Final|Native|Protected]
	// Offset: 0x3c67fe8
	// Params: [ Num(3) Size(0xA) ]
	void OnMovementModeChanged(struct ACharacter* MovedCharacter, uint8_t PrevMovementMode, uint8_t PreviousCustomMode);

	// Object: Function MFNPCAI.NPCAIMoverSystemComponent.OnMoveCompleted
	// Flags: [Final|Native|Protected]
	// Offset: 0x3c67efc
	// Params: [ Num(2) Size(0x5) ]
	void OnMoveCompleted(struct FAIRequestID RequestID, uint8_t MovementResult);

	// Object: Function MFNPCAI.NPCAIMoverSystemComponent.OnLanded
	// Flags: [Final|Native|Protected|HasOutParms]
	// Offset: 0x3c67e34
	// Params: [ Num(1) Size(0x98) ]
	void OnLanded(const struct FHitResult& Hit);

	// Object: Function MFNPCAI.NPCAIMoverSystemComponent.IsSprintEnergyEnough
	// Flags: [Final|Native|Protected|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3c67d40
	// Params: [ Num(2) Size(0x2) ]
	bool IsSprintEnergyEnough(bool bSprinting);

	// Object: Function MFNPCAI.NPCAIMoverSystemComponent.IsPauseMovement
	// Flags: [Final|Native|Public]
	// Offset: 0x3c682e8
	// Params: [ Num(1) Size(0x1) ]
	bool IsPauseMovement();

	// Object: Function MFNPCAI.NPCAIMoverSystemComponent.IsMovingMayBlocking
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3c683c8
	// Params: [ Num(1) Size(0x1) ]
	bool IsMovingMayBlocking();

	// Object: Function MFNPCAI.NPCAIMoverSystemComponent.IsLastPathPassDoor
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3c68208
	// Params: [ Num(1) Size(0x1) ]
	bool IsLastPathPassDoor();

	// Object: Function MFNPCAI.NPCAIMoverSystemComponent.IsLastMoveSuccess
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3c68400
	// Params: [ Num(1) Size(0x1) ]
	bool IsLastMoveSuccess();

	// Object: Function MFNPCAI.NPCAIMoverSystemComponent.IsInIgnoreGotoPoint
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x3c68110
	// Params: [ Num(1) Size(0x1) ]
	bool IsInIgnoreGotoPoint();

	// Object: Function MFNPCAI.NPCAIMoverSystemComponent.IsGoalPositionReached
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3c68934
	// Params: [ Num(1) Size(0x1) ]
	bool IsGoalPositionReached();

	// Object: Function MFNPCAI.NPCAIMoverSystemComponent.IsComeTo
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3c68878
	// Params: [ Num(2) Size(0x2) ]
	bool IsComeTo(bool OnCover);

	// Object: Function MFNPCAI.NPCAIMoverSystemComponent.IsCloseToDestination
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3c68604
	// Params: [ Num(2) Size(0x5) ]
	bool IsCloseToDestination(float InRadius);

	// Object: Function MFNPCAI.NPCAIMoverSystemComponent.IsAnyLegBroken
	// Flags: [Final|Native|Protected|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3c67dfc
	// Params: [ Num(1) Size(0x1) ]
	bool IsAnyLegBroken();

	// Object: Function MFNPCAI.NPCAIMoverSystemComponent.GoDirectly
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable]
	// Offset: 0x3c67930
	// Params: [ Num(3) Size(0x1C) ]
	void GoDirectly(const struct FVector& Direction, float Seconds, const struct FVector& InBlendingVelocity);

	// Object: Function MFNPCAI.NPCAIMoverSystemComponent.GoAccordingToWayPoints
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x3c677f0
	// Params: [ Num(2) Size(0x39) ]
	void GoAccordingToWayPoints(const struct FNavSkeletonGraphFindResult& PathResult, const struct FNavSkeletonMoveSettings& Settings);

	// Object: Function MFNPCAI.NPCAIMoverSystemComponent.GetNearestDoorState
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3c681bc
	// Params: [ Num(1) Size(0x4) ]
	int32_t GetNearestDoorState();

	// Object: Function MFNPCAI.NPCAIMoverSystemComponent.GetNearestDoorLocation
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3c6817c
	// Params: [ Num(1) Size(0xC) ]
	struct FVector GetNearestDoorLocation();

	// Object: Function MFNPCAI.NPCAIMoverSystemComponent.GetMoveType
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3c6879c
	// Params: [ Num(1) Size(0x1) ]
	EAIMoveType GetMoveType();

	// Object: Function MFNPCAI.NPCAIMoverSystemComponent.GetMoveProperty
	// Flags: [Final|Native|Protected|Const]
	// Offset: 0x3c67cf8
	// Params: [ Num(1) Size(0x8) ]
	struct UNPCAIPropertyComponent_Move* GetMoveProperty();

	// Object: Function MFNPCAI.NPCAIMoverSystemComponent.GetMovementKind
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3c68148
	// Params: [ Num(1) Size(0x1) ]
	ENPCAIMovementKind GetMovementKind();

	// Object: Function MFNPCAI.NPCAIMoverSystemComponent.GetLastMoveResult
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3c68438
	// Params: [ Num(1) Size(0x1) ]
	ENPCAIMoveResult GetLastMoveResult();

	// Object: Function MFNPCAI.NPCAIMoverSystemComponent.GetFromPosition
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure]
	// Offset: 0x3c685c8
	// Params: [ Num(1) Size(0xC) ]
	struct FVector GetFromPosition();

	// Object: Function MFNPCAI.NPCAIMoverSystemComponent.GetDirCurPoint
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x3c68570
	// Params: [ Num(1) Size(0xC) ]
	struct FVector GetDirCurPoint();

	// Object: Function MFNPCAI.NPCAIMoverSystemComponent.GetDestinationUpdateTime
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x3c685ac
	// Params: [ Num(1) Size(0x4) ]
	float GetDestinationUpdateTime();

	// Object: Function MFNPCAI.NPCAIMoverSystemComponent.GetDestination
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3c68760
	// Params: [ Num(1) Size(0xC) ]
	struct FVector GetDestination();

	// Object: Function MFNPCAI.NPCAIMoverSystemComponent.ClearMovement
	// Flags: [Final|Native|Protected|BlueprintCallable]
	// Offset: 0x3c67d2c
	// Params: [ Num(0) Size(0x0) ]
	void ClearMovement();

	// Object: Function MFNPCAI.NPCAIMoverSystemComponent.ClearLastPathPassDoorFlag
	// Flags: [Final|Native|Public]
	// Offset: 0x3c681f0
	// Params: [ Num(0) Size(0x0) ]
	void ClearLastPathPassDoorFlag();
};

// Object: Class MFNPCAI.NPCAIMultiTargetSystemComponent
// Size: 0x1B0 (Inherited: 0xF0)
struct UNPCAIMultiTargetSystemComponent : UNPCAISubSystemComponent
{
	DEFINE_UE_CLASS_HELPERS(UNPCAIMultiTargetSystemComponent, "NPCAIMultiTargetSystemComponent")

	bool bDebugSuspectedPoint; // 0xF0(0x1)
	bool bDebugShootOffsetScope; // 0xF1(0x1)
	uint8_t Pad_0xF2[0x2]; // 0xF2(0x2)
	float TimeOfShootOffsetScopeDraw; // 0xF4(0x4)
	bool bDebugShootScopeTestPoints; // 0xF8(0x1)
	bool bWantCalculateGoalTargetPoint; // 0xF9(0x1)
	bool bWantCalculateGoalEnemy; // 0xFA(0x1)
	uint8_t Pad_0xFB[0x5]; // 0xFB(0x5)
	struct UNPCAIZoneGroupInfo* ZoneGroupInfo; // 0x100(0x8)
	int32_t DynamicGroupId; // 0x108(0x4)
	uint8_t Pad_0x10C[0x4]; // 0x10C(0x4)
	struct TArray<struct UNPCAITargetInfo*> AllTargetInfoList; // 0x110(0x10)
	float LastChangeEnemyTime; // 0x120(0x4)
	float LastWantCalcEnemyTime; // 0x124(0x4)
	struct TWeakObjectPtr<struct ACharacter> WarningScavPlayerPtr; // 0x128(0x8)
	struct TArray<struct FAICaredVehicleInfo> AICaredVehicles; // 0x130(0x10)
	uint8_t Pad_0x140[0x10]; // 0x140(0x10)
	struct UNPCAIMemorySystemComponent* MemoryComponent; // 0x150(0x8)
	struct UNPCAIPerceptionComponent* PerceptionComponent; // 0x158(0x8)
	struct UActorComponent* AIStaticComponent; // 0x160(0x8)
	struct UNPCAIGlobalSharedInfo* SharedInfo; // 0x168(0x8)
	struct UNPCAIPropertyComponent_Mind* MindProps; // 0x170(0x8)
	struct UNPCAIPropertyComponent_Hearing* HearProps; // 0x178(0x8)
	struct UNPCAIPropertyComponent_Aiming* AimingProps; // 0x180(0x8)
	struct UNPCAIPropertyComponent_Health* HealthProps; // 0x188(0x8)
	struct UNPCAIPropertyComponent_Grenade* GrenadeProps; // 0x190(0x8)
	struct UNPCAIPropertyComponent_Damage* DamageProps; // 0x198(0x8)
	float CD_CHANGE_GOALENEMY_IF_BOTH_NOT_SEE; // 0x1A0(0x4)
	float CD_CHECK_CARED_VEHICLE; // 0x1A4(0x4)
	float TeamEnemyAsGoalEnemyRange; // 0x1A8(0x4)
	uint8_t Pad_0x1AC[0x4]; // 0x1AC(0x4)

	// Object: Function MFNPCAI.NPCAIMultiTargetSystemComponent.WantToCalculateGoalEnemy
	// Flags: [Final|Native|Public]
	// Offset: 0x3c6a714
	// Params: [ Num(0) Size(0x0) ]
	void WantToCalculateGoalEnemy();

	// Object: Function MFNPCAI.NPCAIMultiTargetSystemComponent.UpdateGroupEnemyVisibleInfo
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x3c6af94
	// Params: [ Num(3) Size(0x18) ]
	void UpdateGroupEnemyVisibleInfo(struct AActor* InEnemy, struct FVector InLastSeenPosition, float SeenTime);

	// Object: Function MFNPCAI.NPCAIMultiTargetSystemComponent.SwitchToTemporaryEnemy
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3c6a8c8
	// Params: [ Num(3) Size(0xD) ]
	bool SwitchToTemporaryEnemy(struct AActor* InNeutral, float InEndTime);

	// Object: Function MFNPCAI.NPCAIMultiTargetSystemComponent.SwitchEnemyToNeutral
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3c6aa70
	// Params: [ Num(2) Size(0x9) ]
	bool SwitchEnemyToNeutral(struct AActor* InEnemy);

	// Object: Function MFNPCAI.NPCAIMultiTargetSystemComponent.SwitchEnemyToAlly
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3c6a9bc
	// Params: [ Num(2) Size(0x9) ]
	bool SwitchEnemyToAlly(struct AActor* InEnemy);

	// Object: Function MFNPCAI.NPCAIMultiTargetSystemComponent.SetZoneGroupInfo
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3c6b460
	// Params: [ Num(1) Size(0x8) ]
	void SetZoneGroupInfo(struct UNPCAIZoneGroupInfo* InGroupInfo);

	// Object: Function MFNPCAI.NPCAIMultiTargetSystemComponent.SetScavPlayerTeamAsGroupEnemy
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0x3c6a728
	// Params: [ Num(1) Size(0x8) ]
	void SetScavPlayerTeamAsGroupEnemy(struct AActor* InScavPlayer);

	// Object: Function MFNPCAI.NPCAIMultiTargetSystemComponent.SetKnowEnemySeenTimeAndPosition
	// Flags: [Final|Native|Public]
	// Offset: 0x3c6a7d8
	// Params: [ Num(2) Size(0x9) ]
	void SetKnowEnemySeenTimeAndPosition(struct AActor* InTargetPawn, bool bCanSeenSoon);

	// Object: Function MFNPCAI.NPCAIMultiTargetSystemComponent.SearchDangerPoint
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3c6a33c
	// Params: [ Num(1) Size(0x8) ]
	struct UNPCAIAttentionPoint* SearchDangerPoint();

	// Object: Function MFNPCAI.NPCAIMultiTargetSystemComponent.SearchDangerEnemy
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3c6a370
	// Params: [ Num(1) Size(0x8) ]
	struct UNPCAITargetInfo* SearchDangerEnemy();

	// Object: Function MFNPCAI.NPCAIMultiTargetSystemComponent.RemoveSuspectedPointByType
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3c69e64
	// Params: [ Num(2) Size(0x10) ]
	void RemoveSuspectedPointByType(ENPCPlaceForCheckType InPlaceType, struct AActor* InCreator);

	// Object: Function MFNPCAI.NPCAIMultiTargetSystemComponent.RemoveSuspectedPoint
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3c69f4c
	// Params: [ Num(2) Size(0x9) ]
	void RemoveSuspectedPoint(struct UNPCAIAttentionPoint* InAttentionPoint, bool bRemoveNearCanSee);

	// Object: Function MFNPCAI.NPCAIMultiTargetSystemComponent.RemoveNeutral
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3c6ac0c
	// Params: [ Num(1) Size(0x8) ]
	void RemoveNeutral(struct AActor* InNeutral);

	// Object: Function MFNPCAI.NPCAIMultiTargetSystemComponent.RemoveEnemy
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3c6b254
	// Params: [ Num(1) Size(0x8) ]
	void RemoveEnemy(struct AActor* InEnemy);

	// Object: Function MFNPCAI.NPCAIMultiTargetSystemComponent.RemoveAlly
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3c6ae44
	// Params: [ Num(1) Size(0x8) ]
	void RemoveAlly(struct AActor* InAlly);

	// Object: Function MFNPCAI.NPCAIMultiTargetSystemComponent.QuitToDynamicGroup
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3c6a414
	// Params: [ Num(0) Size(0x0) ]
	void QuitToDynamicGroup();

	// Object: Function MFNPCAI.NPCAIMultiTargetSystemComponent.JoinToDynamicGroup
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3c6a428
	// Params: [ Num(2) Size(0x5) ]
	bool JoinToDynamicGroup(int32_t DyGroupId);

	// Object: Function MFNPCAI.NPCAIMultiTargetSystemComponent.IsPointInVShootScope
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable]
	// Offset: 0x3c696f4
	// Params: [ Num(7) Size(0x31) ]
	bool IsPointInVShootScope(const struct FVector& GunPoint, const struct FVector& ShootPoint, float HRadin, float VTopRadin, float VLowRadin, const struct FVector& InPoint);

	// Object: Function MFNPCAI.NPCAIMultiTargetSystemComponent.IsPointInHShootScope
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable]
	// Offset: 0x3c69904
	// Params: [ Num(7) Size(0x31) ]
	bool IsPointInHShootScope(const struct FVector& GunPoint, const struct FVector& ShootPoint, float HRadin, float VTopRadin, float VLowRadin, const struct FVector& InPoint);

	// Object: Function MFNPCAI.NPCAIMultiTargetSystemComponent.IsNeutral
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3c6ab58
	// Params: [ Num(2) Size(0x9) ]
	bool IsNeutral(struct AActor* InNeutral);

	// Object: Function MFNPCAI.NPCAIMultiTargetSystemComponent.IsInSameZoneGroup
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3c6b3ac
	// Params: [ Num(2) Size(0x9) ]
	bool IsInSameZoneGroup(struct AActor* InTarget);

	// Object: Function MFNPCAI.NPCAIMultiTargetSystemComponent.IsGroupEnemy
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3c6b1a0
	// Params: [ Num(2) Size(0x9) ]
	bool IsGroupEnemy(struct AActor* InEnemy);

	// Object: Function MFNPCAI.NPCAIMultiTargetSystemComponent.IsAlly
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3c6ad90
	// Params: [ Num(2) Size(0x9) ]
	bool IsAlly(struct AActor* InAlly);

	// Object: Function MFNPCAI.NPCAIMultiTargetSystemComponent.HasOthersAllyInShootScope
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3c696bc
	// Params: [ Num(1) Size(0x1) ]
	bool HasOthersAllyInShootScope();

	// Object: Function MFNPCAI.NPCAIMultiTargetSystemComponent.GetZoneGroupInfo
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x3c6b508
	// Params: [ Num(1) Size(0x8) ]
	struct UNPCAIZoneGroupInfo* GetZoneGroupInfo();

	// Object: Function MFNPCAI.NPCAIMultiTargetSystemComponent.GetYoungestSuspectedPoint
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3c6a204
	// Params: [ Num(4) Size(0x18) ]
	struct UNPCAIAttentionPoint* GetYoungestSuspectedPoint(struct AActor* InCharacter, float InRadius, bool InPriorityDanger);

	// Object: Function MFNPCAI.NPCAIMultiTargetSystemComponent.GetWarningScavPlayer
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3c6966c
	// Params: [ Num(1) Size(0x8) ]
	struct ACharacter* GetWarningScavPlayer();

	// Object: Function MFNPCAI.NPCAIMultiTargetSystemComponent.GetNeutralsNum
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3c6ab24
	// Params: [ Num(1) Size(0x4) ]
	int32_t GetNeutralsNum();

	// Object: Function MFNPCAI.NPCAIMultiTargetSystemComponent.GetEnemyNum
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3c6b16c
	// Params: [ Num(1) Size(0x4) ]
	int32_t GetEnemyNum();

	// Object: Function MFNPCAI.NPCAIMultiTargetSystemComponent.GetEnemyGroupInfo
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3c6b0bc
	// Params: [ Num(2) Size(0x10) ]
	struct UNPCAIEnemyGroupSingleInfo* GetEnemyGroupInfo(struct AActor* InTarget);

	// Object: Function MFNPCAI.NPCAIMultiTargetSystemComponent.GetDynamicGroupId
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x3c6a3e0
	// Params: [ Num(1) Size(0x4) ]
	int32_t GetDynamicGroupId();

	// Object: Function MFNPCAI.NPCAIMultiTargetSystemComponent.GetBulletFireDangerPower
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x3c6b53c
	// Params: [ Num(5) Size(0x24) ]
	int32_t GetBulletFireDangerPower(bool IsHitNoise, struct FVector InNoisePosition, float InNoiseDistance, struct FVector InBulletVelocity);

	// Object: Function MFNPCAI.NPCAIMultiTargetSystemComponent.GetAllyNum
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3c6ad5c
	// Params: [ Num(1) Size(0x4) ]
	int32_t GetAllyNum();

	// Object: Function MFNPCAI.NPCAIMultiTargetSystemComponent.GetAllTargetInfoList
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3c6b7e8
	// Params: [ Num(1) Size(0x10) ]
	struct TArray<struct UNPCAITargetInfo*> GetAllTargetInfoList();

	// Object: Function MFNPCAI.NPCAIMultiTargetSystemComponent.GetAllInSightEnemys
	// Flags: [Final|Native|Public|HasOutParms]
	// Offset: 0x3c6a58c
	// Params: [ Num(1) Size(0x10) ]
	void GetAllInSightEnemys(struct TArray<struct AActor*>& OutEnemys);

	// Object: Function MFNPCAI.NPCAIMultiTargetSystemComponent.GetAllHadSeenEnemys
	// Flags: [Final|Native|Public|HasOutParms]
	// Offset: 0x3c6a650
	// Params: [ Num(1) Size(0x10) ]
	void GetAllHadSeenEnemys(struct TArray<struct AActor*>& OutEnemys);

	// Object: Function MFNPCAI.NPCAIMultiTargetSystemComponent.FilterNotValidEnemyOrPoints
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3c69e50
	// Params: [ Num(0) Size(0x0) ]
	void FilterNotValidEnemyOrPoints();

	// Object: Function MFNPCAI.NPCAIMultiTargetSystemComponent.CheckNearScavPlayerBehavior
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3c69e3c
	// Params: [ Num(0) Size(0x0) ]
	void CheckNearScavPlayerBehavior();

	// Object: Function MFNPCAI.NPCAIMultiTargetSystemComponent.CanHeardNoise
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x3c6b6b8
	// Params: [ Num(4) Size(0xD) ]
	bool CanHeardNoise(float InNoiseDistance, float InNoisePower, float InNoiseAttractScale);

	// Object: Function MFNPCAI.NPCAIMultiTargetSystemComponent.CalculateShootScope
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable]
	// Offset: 0x3c69b14
	// Params: [ Num(10) Size(0x55) ]
	bool CalculateShootScope(struct FVector& GunPoint, struct FVector& ShootPoint, float& HRadian, float& VTopRadian, float& VLowRadian, struct FVector& HMaxPoint1, struct FVector& HMaxPoint2, struct FVector& VTopPoint, struct FVector& VLowPoint);

	// Object: Function MFNPCAI.NPCAIMultiTargetSystemComponent.CalculateGoalPointForBot
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3c6a3a4
	// Params: [ Num(0) Size(0x0) ]
	void CalculateGoalPointForBot();

	// Object: Function MFNPCAI.NPCAIMultiTargetSystemComponent.CalculateGoalForBot
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3c6a3cc
	// Params: [ Num(0) Size(0x0) ]
	void CalculateGoalForBot();

	// Object: Function MFNPCAI.NPCAIMultiTargetSystemComponent.CalculateGoalEnemyForBot
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3c6a3b8
	// Params: [ Num(0) Size(0x0) ]
	void CalculateGoalEnemyForBot();

	// Object: Function MFNPCAI.NPCAIMultiTargetSystemComponent.AddSuspectedPointToSearch
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x3c6a03c
	// Params: [ Num(6) Size(0x28) ]
	struct UNPCAIAttentionPoint* AddSuspectedPointToSearch(struct FVector InPoint, ENPCPlaceForCheckType InPlaceType, struct AActor* InCreator, bool bIsAutoReCalculate, bool bIsAddSuspectedNum);

	// Object: Function MFNPCAI.NPCAIMultiTargetSystemComponent.AddNeutral
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3c6acb4
	// Params: [ Num(1) Size(0x8) ]
	void AddNeutral(struct AActor* InNeutral);

	// Object: Function MFNPCAI.NPCAIMultiTargetSystemComponent.AddEnemy
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3c6b2fc
	// Params: [ Num(2) Size(0x10) ]
	struct UNPCAIEnemyGroupSingleInfo* AddEnemy(struct AActor* InEnemy);

	// Object: Function MFNPCAI.NPCAIMultiTargetSystemComponent.AddAllyGoalEnemyIfNotTarget
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3c6a4dc
	// Params: [ Num(2) Size(0x10) ]
	struct UNPCAITargetInfo* AddAllyGoalEnemyIfNotTarget(float InRange);

	// Object: Function MFNPCAI.NPCAIMultiTargetSystemComponent.AddAlly
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3c6aeec
	// Params: [ Num(1) Size(0x8) ]
	void AddAlly(struct AActor* InAlly);
};

// Object: Class MFNPCAI.NPCAIMultiTargetSelectorComponent
// Size: 0x350 (Inherited: 0x1B0)
struct UNPCAIMultiTargetSelectorComponent : UNPCAIMultiTargetSystemComponent
{
	DEFINE_UE_CLASS_HELPERS(UNPCAIMultiTargetSelectorComponent, "NPCAIMultiTargetSelectorComponent")

	struct FString PerceptionTag1; // 0x1B0(0x10)
	struct FString PerceptionTag2; // 0x1C0(0x10)
	struct FString PerceptionTag3; // 0x1D0(0x10)
	float DistanceToPercActor; // 0x1E0(0x4)
	float DistanceToPercLoc; // 0x1E4(0x4)
	struct AActor* PerceptionActor; // 0x1E8(0x8)
	struct FAIStimulus PerceptionStimulus; // 0x1F0(0x3C)
	bool bIsTeamEnemy; // 0x22C(0x1)
	bool bIsTeamFriendly; // 0x22D(0x1)
	bool bIsGroupEnemy; // 0x22E(0x1)
	bool bIsGroupAlly; // 0x22F(0x1)
	bool bIsSounder; // 0x230(0x1)
	uint8_t Pad_0x231[0x7]; // 0x231(0x7)
	struct AActor* SounderThrower; // 0x238(0x8)
	bool bIsCheatGhost; // 0x240(0x1)
	uint8_t Pad_0x241[0x3]; // 0x241(0x3)
	float LastCalculateWarnPlayerTime; // 0x244(0x4)
	float LastCalculateGoalEnemyTime; // 0x248(0x4)
	float LastCalculateGoalPointTime; // 0x24C(0x4)
	float NextLeanAutoRelaxTime; // 0x250(0x4)
	float LastTodoHearingTime; // 0x254(0x4)
	struct TMap<uint32_t, float> NoiseAttractMap; // 0x258(0x50)
	uint8_t Pad_0x2A8[0x8]; // 0x2A8(0x8)
	struct AActor* LastFireToMePerson; // 0x2B0(0x8)
	float LastFireToMeTime; // 0x2B8(0x4)
	uint8_t Pad_0x2BC[0x4]; // 0x2BC(0x4)
	struct AActor* LastShootMePerson; // 0x2C0(0x8)
	struct FVector LastShootMePersonLocation; // 0x2C8(0xC)
	struct FVector LastShootMeSelfLocation; // 0x2D4(0xC)
	float LastShootMeDamageValue; // 0x2E0(0x4)
	float LastBeenShootTime; // 0x2E4(0x4)
	struct FAIShotCountStat BeHitCount; // 0x2E8(0x10)
	float TEMPORARY_ENEMY_DURATION_TIME; // 0x2F8(0x4)
	uint8_t Pad_0x2FC[0x54]; // 0x2FC(0x54)

	// Object: Function MFNPCAI.NPCAIMultiTargetSelectorComponent.SetBeHitDetail
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3c68c44
	// Params: [ Num(3) Size(0x10) ]
	void SetBeHitDetail(struct AActor* DamageCauser, float DamageValue, float InTimeSec);

	// Object: Function MFNPCAI.NPCAIMultiTargetSelectorComponent.SeparateMultiTags
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3c6921c
	// Params: [ Num(1) Size(0x8) ]
	void SeparateMultiTags(struct FName InTotalTag);

	// Object: Function MFNPCAI.NPCAIMultiTargetSelectorComponent.OnSmokeExplosionToDo
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3c6942c
	// Params: [ Num(0) Size(0x0) ]
	void OnSmokeExplosionToDo();

	// Object: Function MFNPCAI.NPCAIMultiTargetSelectorComponent.OnSightToDo
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3c69468
	// Params: [ Num(0) Size(0x0) ]
	void OnSightToDo();

	// Object: Function MFNPCAI.NPCAIMultiTargetSelectorComponent.OnPerceptionUpdated
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3c6947c
	// Params: [ Num(2) Size(0x44) ]
	void OnPerceptionUpdated(struct AActor* InTarget, struct FAIStimulus InAIStimulus);

	// Object: Function MFNPCAI.NPCAIMultiTargetSelectorComponent.OnHearingToDo
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3c69454
	// Params: [ Num(0) Size(0x0) ]
	void OnHearingToDo();

	// Object: Function MFNPCAI.NPCAIMultiTargetSelectorComponent.OnDamageToDo
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3c69440
	// Params: [ Num(0) Size(0x0) ]
	void OnDamageToDo();

	// Object: Function MFNPCAI.NPCAIMultiTargetSelectorComponent.OnBulletFireToDo
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x3c692c4
	// Params: [ Num(4) Size(0x28) ]
	void OnBulletFireToDo(struct AActor* InInstigator, struct FVector InBulletLocation, struct FVector InBulletVelocity, struct FName InNoiseType);

	// Object: Function MFNPCAI.NPCAIMultiTargetSelectorComponent.MakeEnemyKnowImpl
	// Flags: [Final|Native|Public]
	// Offset: 0x3c68a7c
	// Params: [ Num(5) Size(0x13) ]
	void MakeEnemyKnowImpl(struct ACharacter* AIPawn, struct ACharacter* EnemyPawn, bool IsGroupEnemy, bool IsTeamFriendly, bool bAsRealSee);

	// Object: Function MFNPCAI.NPCAIMultiTargetSelectorComponent.IsGunNoise
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3c69108
	// Params: [ Num(2) Size(0x11) ]
	bool IsGunNoise(struct FString InTag);

	// Object: Function MFNPCAI.NPCAIMultiTargetSelectorComponent.IsBeingFireHited
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x3c68e04
	// Params: [ Num(3) Size(0x11) ]
	bool IsBeingFireHited(float InTime, struct AActor*& OutWhoFire);

	// Object: Function MFNPCAI.NPCAIMultiTargetSelectorComponent.GetLastBeHitTime
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x3c68d9c
	// Params: [ Num(1) Size(0x4) ]
	float GetLastBeHitTime();

	// Object: Function MFNPCAI.NPCAIMultiTargetSelectorComponent.GetFuzzyPointCoef
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3c68f04
	// Params: [ Num(2) Size(0x14) ]
	float GetFuzzyPointCoef(struct FString InHearTag);

	// Object: Function MFNPCAI.NPCAIMultiTargetSelectorComponent.GetFirstBeHitTime
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x3c68dd0
	// Params: [ Num(1) Size(0x4) ]
	float GetFirstBeHitTime();

	// Object: Function MFNPCAI.NPCAIMultiTargetSelectorComponent.GetBeHitCount
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x3c68d68
	// Params: [ Num(1) Size(0x4) ]
	int32_t GetBeHitCount();

	// Object: Function MFNPCAI.NPCAIMultiTargetSelectorComponent.CreateFuzzyPoint
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x3c69010
	// Params: [ Num(3) Size(0x1C) ]
	struct FVector CreateFuzzyPoint(struct FVector InCenterPoint, float InFuzzyRadius);
};

// Object: Class MFNPCAI.NPCAINavConnectivitySystem
// Size: 0x30 (Inherited: 0x30)
struct UNPCAINavConnectivitySystem : UNPCAINavSubsystemBase
{
	DEFINE_UE_CLASS_HELPERS(UNPCAINavConnectivitySystem, "NPCAINavConnectivitySystem")

	// Object: Function MFNPCAI.NPCAINavConnectivitySystem.GetNavLinkCylinderLocation
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3c6ddf0
	// Params: [ Num(4) Size(0x19) ]
	bool GetNavLinkCylinderLocation(struct ANPCAINavLinkProxy* NavLink, int32_t RegionIndex, struct FVector& OutLocation);

	// Object: Function MFNPCAI.NPCAINavConnectivitySystem.GetLinkUsageCount
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3c6e13c
	// Params: [ Num(8) Size(0x30) ]
	int32_t GetLinkUsageCount(const struct FVector& SourceLocation, const struct FVector& TargetLocation, int32_t& OutSourceRegionIndex, int32_t& OutTargetRegionIndex, int32_t& OutSourceRegionSize, int32_t& OutTargetRegionSize, EGetLinkUsageCountStatus& OutStatus);

	// Object: Function MFNPCAI.NPCAINavConnectivitySystem.GetDoorNavLinksInRegion
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3c6e054
	// Params: [ Num(2) Size(0x18) ]
	struct TArray<struct ANPCAINavLinkProxy*> GetDoorNavLinksInRegion(int32_t RegionIndex);

	// Object: Function MFNPCAI.NPCAINavConnectivitySystem.GetDoorNavLinksBetweenAdjacentRegions
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3c6df2c
	// Params: [ Num(3) Size(0x18) ]
	struct TArray<struct ANPCAINavLinkProxy*> GetDoorNavLinksBetweenAdjacentRegions(int32_t SourceRegionIndex, int32_t TargetRegionIndex);
};

// Object: Class MFNPCAI.NPCAINavCostSubsystem
// Size: 0x30 (Inherited: 0x30)
struct UNPCAINavCostSubsystem : UNPCAINavSubsystemBase
{
	DEFINE_UE_CLASS_HELPERS(UNPCAINavCostSubsystem, "NPCAINavCostSubsystem")

	// Object: Function MFNPCAI.NPCAINavCostSubsystem.GetInstance
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3c6e3e4
	// Params: [ Num(2) Size(0x10) ]
	static struct UNPCAINavCostSubsystem* GetInstance(struct UObject* WorldContextObject);
};

// Object: Class MFNPCAI.NPCAINavDebugSystem
// Size: 0x30 (Inherited: 0x30)
struct UNPCAINavDebugSystem : UNPCAINavSubsystemBase
{
	DEFINE_UE_CLASS_HELPERS(UNPCAINavDebugSystem, "NPCAINavDebugSystem")

	// Object: Function MFNPCAI.NPCAINavDebugSystem.TestDoorPath
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3c6e660
	// Params: [ Num(3) Size(0x11) ]
	static bool TestDoorPath(struct UObject* WorldContextObject, struct ANPCAINavLinkProxy* NavLinkProxy);

	// Object: Function MFNPCAI.NPCAINavDebugSystem.ProjectPointToNavMesh
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable]
	// Offset: 0x3c6e748
	// Params: [ Num(6) Size(0x31) ]
	static bool ProjectPointToNavMesh(struct UObject* WorldContextObject, const struct FVector& Location, const struct FVector& QueryExtent, int32_t& OutPolyIndex, struct FVector& OutProjectedLocation);

	// Object: Function MFNPCAI.NPCAINavDebugSystem.PrintNavMeshPolygonSlope
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable]
	// Offset: 0x3c6ebfc
	// Params: [ Num(2) Size(0x14) ]
	static void PrintNavMeshPolygonSlope(struct UObject* WorldContextObject, const struct FVector& Location);

	// Object: Function MFNPCAI.NPCAINavDebugSystem.PlaceActorsOnNodes
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x3c6e9b8
	// Params: [ Num(4) Size(0x30) ]
	static void PlaceActorsOnNodes(struct UObject* WorldContextObject, struct FString NodeIndicesString, bool bUseNodeIndexAsPolyRef, struct TArray<struct AActor*>& OutActors);

	// Object: Function MFNPCAI.NPCAINavDebugSystem.IsLocationOnNavLinkDebug
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable]
	// Offset: 0x3c6ecdc
	// Params: [ Num(2) Size(0x14) ]
	static void IsLocationOnNavLinkDebug(struct UObject* WorldContextObject, const struct FVector& Location);

	// Object: Function MFNPCAI.NPCAINavDebugSystem.GetLinkUsageCountDebug
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable]
	// Offset: 0x3c6edbc
	// Params: [ Num(3) Size(0x20) ]
	static void GetLinkUsageCountDebug(struct UObject* WorldContextObject, const struct FVector& SourceLocation, const struct FVector& TargetLocation);

	// Object: Function MFNPCAI.NPCAINavDebugSystem.GetDoorNavLinksInRegionDebug
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable]
	// Offset: 0x3c6eeec
	// Params: [ Num(2) Size(0x14) ]
	static void GetDoorNavLinksInRegionDebug(struct UObject* WorldContextObject, const struct FVector& SourceLocation);

	// Object: Function MFNPCAI.NPCAINavDebugSystem.DrawPathPoints
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x3c6e494
	// Params: [ Num(5) Size(0x1E) ]
	static void DrawPathPoints(struct UObject* WorldContextObject, const struct TArray<struct FVector>& PathPoints, int32_t StartIndex, bool bFlushBeforeDrawing, bool bColorfulDrawing);

	// Object: Function MFNPCAI.NPCAINavDebugSystem.DestroyPlacedActors
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x3c6eb48
	// Params: [ Num(1) Size(0x10) ]
	static void DestroyPlacedActors(struct TArray<struct AActor*>& OutActors);

	// Object: Function MFNPCAI.NPCAINavDebugSystem.CalculateBoundaryEdgeLength
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3c6e920
	// Params: [ Num(1) Size(0x8) ]
	static void CalculateBoundaryEdgeLength(struct UObject* WorldContextObject);
};

// Object: Class MFNPCAI.NPCAINavExperimentSystem
// Size: 0x30 (Inherited: 0x30)
struct UNPCAINavExperimentSystem : UNPCAINavSubsystemBase
{
	DEFINE_UE_CLASS_HELPERS(UNPCAINavExperimentSystem, "NPCAINavExperimentSystem")

	// Object: Function MFNPCAI.NPCAINavExperimentSystem.TestRaycastToNavSkeletonPoints
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable]
	// Offset: 0x3c6f17c
	// Params: [ Num(4) Size(0x38) ]
	static struct TArray<bool> TestRaycastToNavSkeletonPoints(struct UObject* WorldContextObject, const struct FVector& StartLocation, const struct TArray<int32_t>& PointIDs);

	// Object: Function MFNPCAI.NPCAINavExperimentSystem.TestNavSkeletonFloodFrom
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable]
	// Offset: 0x3c6f010
	// Params: [ Num(4) Size(0x28) ]
	static struct TArray<bool> TestNavSkeletonFloodFrom(struct UObject* WorldContextObject, const struct FVector& StartLocation, float MaxPathLength);

	// Object: Function MFNPCAI.NPCAINavExperimentSystem.TestNavRaycast
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3c6f430
	// Params: [ Num(1) Size(0x8) ]
	static void TestNavRaycast(struct UObject* WorldContextObject);

	// Object: Function MFNPCAI.NPCAINavExperimentSystem.TestMoveDirectly
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3c6f560
	// Params: [ Num(1) Size(0x8) ]
	static void TestMoveDirectly(struct UObject* WorldContextObject);

	// Object: Function MFNPCAI.NPCAINavExperimentSystem.TestMoveAlongSurface
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3c6f5f8
	// Params: [ Num(1) Size(0x8) ]
	static void TestMoveAlongSurface(struct UObject* WorldContextObject);

	// Object: Function MFNPCAI.NPCAINavExperimentSystem.TestLimitMoveInRegion
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3c6f300
	// Params: [ Num(1) Size(0x8) ]
	static void TestLimitMoveInRegion(struct UObject* WorldContextObject);

	// Object: Function MFNPCAI.NPCAINavExperimentSystem.TestArrangeStandPositions
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3c6f398
	// Params: [ Num(1) Size(0x8) ]
	static void TestArrangeStandPositions(struct UObject* WorldContextObject);

	// Object: Function MFNPCAI.NPCAINavExperimentSystem.TestAIMoveDirectly
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3c6f4c8
	// Params: [ Num(1) Size(0x8) ]
	static void TestAIMoveDirectly(struct UObject* WorldContextObject);
};

// Object: Class MFNPCAI.NPCAINavigationStatics
// Size: 0x28 (Inherited: 0x28)
struct UNPCAINavigationStatics : UBlueprintFunctionLibrary
{
	DEFINE_UE_CLASS_HELPERS(UNPCAINavigationStatics, "NPCAINavigationStatics")

	// Object: Function MFNPCAI.NPCAINavigationStatics.PointIsInNavigation
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable]
	// Offset: 0x3c6fd04
	// Params: [ Num(4) Size(0x21) ]
	static bool PointIsInNavigation(struct UObject* WorldContext, const struct FVector& InCheckPoint, const struct FVector& InExtent);

	// Object: Function MFNPCAI.NPCAINavigationStatics.PathNodesToNeighborPathNodes
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x3c70400
	// Params: [ Num(4) Size(0x30) ]
	static void PathNodesToNeighborPathNodes(struct UObject* WorldContext, const struct TArray<int32_t>& TargetPathNodes, int32_t Step, struct TArray<int32_t>& Result);

	// Object: Function MFNPCAI.NPCAINavigationStatics.PathNodesToDistAndNeighborPathNodes
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x3c701b8
	// Params: [ Num(6) Size(0x41) ]
	static void PathNodesToDistAndNeighborPathNodes(struct UObject* WorldContext, const struct TArray<int32_t>& TargetPathNodes, float PathLength, struct TArray<int32_t>& NodesInPathLength, struct TArray<int32_t>& NodesNeighbor, bool& IsTimeOut);

	// Object: Function MFNPCAI.NPCAINavigationStatics.IsNavigationPlanarFloor
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable]
	// Offset: 0x3c6fe40
	// Params: [ Num(5) Size(0x25) ]
	static bool IsNavigationPlanarFloor(struct UObject* WorldContext, const struct FVector& StartPoint, const struct FVector& Direction, float Distance);

	// Object: Function MFNPCAI.NPCAINavigationStatics.GetRandomReachablePoint
	// Flags: [Final|Native|Static|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x3c6faa0
	// Params: [ Num(4) Size(0x24) ]
	static struct FVector GetRandomReachablePoint(struct UObject* WorldContext, struct FVector InCenter, float InRadius);

	// Object: Function MFNPCAI.NPCAINavigationStatics.GetRandomNavigationPoint
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable]
	// Offset: 0x3c6fbd0
	// Params: [ Num(4) Size(0x24) ]
	static struct FVector GetRandomNavigationPoint(struct UObject* WorldContext, const struct FVector& InCenter, float InRadius);

	// Object: Function MFNPCAI.NPCAINavigationStatics.GetRandomNavigationAndNearPoint
	// Flags: [Final|Native|Static|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x3c6f834
	// Params: [ Num(4) Size(0x24) ]
	static struct FVector GetRandomNavigationAndNearPoint(struct UObject* WorldContext, struct FVector InCenter, float InRadius);

	// Object: Function MFNPCAI.NPCAINavigationStatics.GetPointToNavigationLocation
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable]
	// Offset: 0x3c6f964
	// Params: [ Num(4) Size(0x2C) ]
	static struct FVector GetPointToNavigationLocation(struct UObject* WorldContext, const struct FVector& InCenter, const struct FVector& InExtent);

	// Object: Function MFNPCAI.NPCAINavigationStatics.FindPointIsAboveGround
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable]
	// Offset: 0x3c6f698
	// Params: [ Num(5) Size(0x38) ]
	static struct FVector FindPointIsAboveGround(struct UObject* WorldContext, const struct FVector& InPosition, const struct TArray<struct AActor*>& InIgnoreActors, float TraceLength);

	// Object: Function MFNPCAI.NPCAINavigationStatics.FindCloserToMePoints
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable]
	// Offset: 0x3c6ffc4
	// Params: [ Num(5) Size(0x40) ]
	static void FindCloserToMePoints(struct UObject* WorldContext, const struct TArray<int32_t>& PathNodeIds, const struct FVector& MyLocation, const struct FVector& EnemyLocation, struct TArray<int32_t>& Result);
};

// Object: Class MFNPCAI.NPCAINavigationSystem
// Size: 0x18A0 (Inherited: 0x15F8)
struct UNPCAINavigationSystem : UNavigationSystemV1
{
	DEFINE_UE_CLASS_HELPERS(UNPCAINavigationSystem, "NPCAINavigationSystem")

	uint8_t Pad_0x15F8[0x2A8]; // 0x15F8(0x2A8)

	// Object: Function MFNPCAI.NPCAINavigationSystem.GetNPCAINavigationSystem
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x3c705c0
	// Params: [ Num(2) Size(0x10) ]
	static struct UNPCAINavigationSystem* GetNPCAINavigationSystem(struct UObject* WorldContextObject);
};

// Object: Class MFNPCAI.NPCAINavigationSystemConfig
// Size: 0x68 (Inherited: 0x50)
struct UNPCAINavigationSystemConfig : UNavigationSystemModuleConfig
{
	DEFINE_UE_CLASS_HELPERS(UNPCAINavigationSystemConfig, "NPCAINavigationSystemConfig")

	struct FSoftClassPath NavigationSystemClassName; // 0x50(0x18)
};

// Object: Class MFNPCAI.NPCAINavigationTestingActor
// Size: 0x400 (Inherited: 0x3F0)
struct ANPCAINavigationTestingActor : ANavigationTestingActor
{
	DEFINE_UE_CLASS_HELPERS(ANPCAINavigationTestingActor, "NPCAINavigationTestingActor")

	bool bShowDiversity; // 0x3F0(0x1)
	uint8_t Pad_0x3F1[0x3]; // 0x3F1(0x3)
	float PreferTanProduct; // 0x3F4(0x4)
	int32_t SampleNumPerAxis; // 0x3F8(0x4)
	bool bPreferClockwise; // 0x3FC(0x1)
	uint8_t Pad_0x3FD[0x3]; // 0x3FD(0x3)
};

// Object: Class MFNPCAI.NPCAINavLinkProxyInterface
// Size: 0x28 (Inherited: 0x28)
struct INPCAINavLinkProxyInterface : IInterface
{
	DEFINE_UE_CLASS_HELPERS(INPCAINavLinkProxyInterface, "NPCAINavLinkProxyInterface")
};

// Object: Class MFNPCAI.NPCAINavLinkProxy
// Size: 0x368 (Inherited: 0x350)
struct ANPCAINavLinkProxy : ANavLinkProxy
{
	DEFINE_UE_CLASS_HELPERS(ANPCAINavLinkProxy, "NPCAINavLinkProxy")

	ENavLinkType LinkType; // 0x350(0x1)
	uint8_t Pad_0x351[0x7]; // 0x351(0x7)
	uint64_t PolyRef; // 0x358(0x8)
	int32_t NodeIndex; // 0x360(0x4)
	uint8_t Pad_0x364[0x4]; // 0x364(0x4)

	// Object: Function MFNPCAI.NPCAINavLinkProxy.OnSmartLinkReachedEvent
	// Flags: [Native|Event|Protected|HasOutParms|HasDefaults|BlueprintEvent]
	// Offset: 0x3c706f0
	// Params: [ Num(2) Size(0x14) ]
	void OnSmartLinkReachedEvent(struct AActor* Agent, const struct FVector& Destination);

	// Object: Function MFNPCAI.NPCAINavLinkProxy.GetSmartLinkRightLocation
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3c707e8
	// Params: [ Num(1) Size(0xC) ]
	struct FVector GetSmartLinkRightLocation();

	// Object: Function MFNPCAI.NPCAINavLinkProxy.GetSmartLinkLeftLocation
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3c70824
	// Params: [ Num(1) Size(0xC) ]
	struct FVector GetSmartLinkLeftLocation();

	// Object: Function MFNPCAI.NPCAINavLinkProxy.GetSmartLinkComponent
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3c70860
	// Params: [ Num(1) Size(0x8) ]
	struct UNavLinkCustomComponent* GetSmartLinkComponent();
};

// Object: Class MFNPCAI.NPCAINavMeshManager
// Size: 0x720 (Inherited: 0x300)
struct ANPCAINavMeshManager : AActor
{
	DEFINE_UE_CLASS_HELPERS(ANPCAINavMeshManager, "NPCAINavMeshManager")

	uint8_t Pad_0x300[0x198]; // 0x300(0x198)
	struct FNavSkeletonBuildSettings SkeletonBuildSettings; // 0x498(0x8C)
	uint8_t Pad_0x524[0x4]; // 0x524(0x4)
	struct TArray<struct FNavSkeletonPoint> NavSkeletonPoints; // 0x528(0x10)
	struct FNavSkeletonData NavSkeletonData; // 0x538(0x60)
	uint8_t Pad_0x598[0x8]; // 0x598(0x8)
	struct TArray<struct ANPCAINavLinkProxy*> CachedNavLinkProxies; // 0x5A0(0x10)
	struct TSet<struct FVector> SkeletonForcePoints; // 0x5B0(0x50)
	bool bEnableFixNavOctree; // 0x600(0x1)
	uint8_t Pad_0x601[0x3]; // 0x601(0x3)
	float FixNavOctree_TolerateExtent; // 0x604(0x4)
	struct TMap<int32_t, struct FNPCAINavPlatformBuildTemplate> PlatformBuildTemplates; // 0x608(0x50)
	struct TMap<int32_t, struct FNPCAINavPlatformBuildData> PlatformBuildDatas; // 0x658(0x50)
	struct TMap<int32_t, struct FNPCAINavPlatformLinkLine> LinkLines; // 0x6A8(0x50)
	struct FVector PlatformOctreeOrigin; // 0x6F8(0xC)
	float PlatformOctreeExtent; // 0x704(0x4)
	float PlatformMinimumUpdateInterval; // 0x708(0x4)
	uint8_t Pad_0x70C[0x4]; // 0x70C(0x4)
	struct TArray<struct TSoftClassPtr<struct ANavLinkProxyGenerator*>> NavLinkProxyGeneratorClassesForEditor; // 0x710(0x10)

	// Object: Function MFNPCAI.NPCAINavMeshManager.SetupNavSkeleton
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3c7097c
	// Params: [ Num(0) Size(0x0) ]
	void SetupNavSkeleton();

	// Object: Function MFNPCAI.NPCAINavMeshManager.PrintSkeletonPointRadiusStat
	// Flags: [Final|Native|Public]
	// Offset: 0x3c70918
	// Params: [ Num(0) Size(0x0) ]
	void PrintSkeletonPointRadiusStat();

	// Object: Function MFNPCAI.NPCAINavMeshManager.PrintSkeletonPointDegreeStat
	// Flags: [Final|Native|Public]
	// Offset: 0x3c7092c
	// Params: [ Num(0) Size(0x0) ]
	void PrintSkeletonPointDegreeStat();

	// Object: Function MFNPCAI.NPCAINavMeshManager.PrintSkeletonMemoryUsage
	// Flags: [Final|Native|Public]
	// Offset: 0x3c70954
	// Params: [ Num(0) Size(0x0) ]
	void PrintSkeletonMemoryUsage();

	// Object: Function MFNPCAI.NPCAINavMeshManager.PrintSkeletonInfo
	// Flags: [Final|Native|Public]
	// Offset: 0x3c70968
	// Params: [ Num(0) Size(0x0) ]
	void PrintSkeletonInfo();

	// Object: Function MFNPCAI.NPCAINavMeshManager.PrintSkeletonEdgeLengthStat
	// Flags: [Final|Native|Public]
	// Offset: 0x3c70940
	// Params: [ Num(0) Size(0x0) ]
	void PrintSkeletonEdgeLengthStat();

	// Object: Function MFNPCAI.NPCAINavMeshManager.OnPostBeginGameInit
	// Flags: [Final|Native|Protected]
	// Offset: 0x3c70990
	// Params: [ Num(0) Size(0x0) ]
	void OnPostBeginGameInit();
};

// Object: Class MFNPCAI.NPCAINavMeshRenderingComponent
// Size: 0x680 (Inherited: 0x680)
struct UNPCAINavMeshRenderingComponent : UNPCAITestingRenderingComponent
{
	DEFINE_UE_CLASS_HELPERS(UNPCAINavMeshRenderingComponent, "NPCAINavMeshRenderingComponent")
};

// Object: Class MFNPCAI.NPCAINavMeshTestingActor
// Size: 0x760 (Inherited: 0x340)
struct ANPCAINavMeshTestingActor : ANPCAITestingActor
{
	DEFINE_UE_CLASS_HELPERS(ANPCAINavMeshTestingActor, "NPCAINavMeshTestingActor")

	float ToWallCylinderHeight; // 0x340(0x4)
	float RadiusMultiplier; // 0x344(0x4)
	float DistanceHeightMultiplier; // 0x348(0x4)
	float DistanceLineThickness; // 0x34C(0x4)
	float ShowGradientThreshold; // 0x350(0x4)
	float GradientZOffset; // 0x354(0x4)
	float UpdateGradientFlowAnimInterval; // 0x358(0x4)
	uint8_t Pad_0x35C[0x4]; // 0x35C(0x4)
	float ShowDivergenceThreshold; // 0x360(0x4)
	float DivergenceHeightMultiplier; // 0x364(0x4)
	float DivergenceLineThickness; // 0x368(0x4)
	float ConnectionLineThickness; // 0x36C(0x4)
	float SimlifiedConnectionZOffset; // 0x370(0x4)
	int32_t ShowCoverageLevel; // 0x374(0x4)
	int32_t ShowWallLevel; // 0x378(0x4)
	uint8_t bEnableRefreshData : 1; // 0x37C(0x1), Mask(0x1)
	uint8_t bDrawSamplePoints : 1; // 0x37C(0x1), Mask(0x2)
	uint8_t bDrawWallCountMap : 1; // 0x37C(0x1), Mask(0x4)
	uint8_t bDrawDistanceMap : 1; // 0x37C(0x1), Mask(0x8)
	uint8_t bDrawGradient : 1; // 0x37C(0x1), Mask(0x10)
	uint8_t bShowAllGradient : 1; // 0x37C(0x1), Mask(0x20)
	uint8_t bDrawGradientFlowAnim : 1; // 0x37C(0x1), Mask(0x40)
	uint8_t bDrawCoverage : 1; // 0x37C(0x1), Mask(0x80)
	uint8_t bAlwaysShowMainCoverage : 1; // 0x37D(0x1), Mask(0x1)
	uint8_t bDrawOriginalConnection : 1; // 0x37D(0x1), Mask(0x2)
	uint8_t bDrawSimplifiedConnection : 1; // 0x37D(0x1), Mask(0x4)
	uint8_t bOnlyDrawMainSimplifiedConnection : 1; // 0x37D(0x1), Mask(0x8)
	uint8_t BitPad_0x37D_4 : 4; // 0x37D(0x1)
	uint8_t Pad_0x37E[0x2]; // 0x37E(0x2)
	int32_t NearestMainCoverageSampleIndex; // 0x380(0x4)
	int32_t PolyMeshCount; // 0x384(0x4)
	int32_t PolylineCount; // 0x388(0x4)
	int32_t CurrentTileIndex; // 0x38C(0x4)
	struct FVector ClosestPointOnWall; // 0x390(0xC)
	uint8_t Pad_0x39C[0x14]; // 0x39C(0x14)
	int32_t NeighbourWallEdgeCount; // 0x3B0(0x4)
	float DistanceToWall; // 0x3B4(0x4)
	uint8_t Pad_0x3B8[0x8]; // 0x3B8(0x8)
	struct FVector4 SamplePointCountStat; // 0x3C0(0x10)
	struct FVector4 WallStat; // 0x3D0(0x10)
	struct FVector4 DistanceStat; // 0x3E0(0x10)
	struct FVector4 DivergenceStat; // 0x3F0(0x10)
	struct FVector4 FilteredDistanceStat; // 0x400(0x10)
	struct FVector4 FilteredDivergenceStat; // 0x410(0x10)
	int32_t CoverageStats[0x5]; // 0x420(0x14)
	int32_t ConnectionStats[0xD]; // 0x434(0x34)
	float MaxPathLength; // 0x468(0x4)
	struct FNavSkeletonBuildSettings BuildSettings; // 0x46C(0x8C)
	uint8_t bDrawPersistent : 1; // 0x4F8(0x1), Mask(0x1)
	uint8_t bDrawForcePoint : 1; // 0x4F8(0x1), Mask(0x2)
	uint8_t bDrawTextInfo : 1; // 0x4F8(0x1), Mask(0x4)
	uint8_t bDrawProtection : 1; // 0x4F8(0x1), Mask(0x8)
	uint8_t bDrawNearestPoint : 1; // 0x4F8(0x1), Mask(0x10)
	uint8_t bDrawPointNeighbours : 1; // 0x4F8(0x1), Mask(0x20)
	uint8_t bDrawFindResultPoints : 1; // 0x4F8(0x1), Mask(0x40)
	uint8_t bDrawOutDoorsPoints : 1; // 0x4F8(0x1), Mask(0x80)
	uint8_t Pad_0x4F9[0x7]; // 0x4F9(0x7)
	struct FNavSkeletonPoint NavSkeletonPoint; // 0x500(0xA0)
	struct FNavSkeletonPoint TargetNavSkeletonPoint; // 0x5A0(0xA0)
	struct TArray<int32_t> FoundPointIDs; // 0x640(0x10)
	float CostLimit; // 0x650(0x4)
	float HalfAngleOfView; // 0x654(0x4)
	struct AActor* TargetDebugActor; // 0x658(0x8)
	uint8_t Pad_0x660[0x100]; // 0x660(0x100)

	// Object: Function MFNPCAI.NPCAINavMeshTestingActor.UpdateDrawing
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3c709d0
	// Params: [ Num(0) Size(0x0) ]
	void UpdateDrawing();
};

// Object: Class MFNPCAI.NPCAINavModifierVolume
// Size: 0x370 (Inherited: 0x350)
struct ANPCAINavModifierVolume : ANavModifierVolume
{
	DEFINE_UE_CLASS_HELPERS(ANPCAINavModifierVolume, "NPCAINavModifierVolume")

	struct TArray<int64_t> AffectedPolygons; // 0x350(0x10)
	struct TArray<struct ANPCAINavLinkProxy*> AffectedNavLinks; // 0x360(0x10)

	// Object: Function MFNPCAI.NPCAINavModifierVolume.SetupNavNodesAreaID
	// Flags: [Final|Native|Protected]
	// Offset: 0x3c73aa4
	// Params: [ Num(0) Size(0x0) ]
	void SetupNavNodesAreaID();

	// Object: Function MFNPCAI.NPCAINavModifierVolume.OnNavDataRegisteredCallback
	// Flags: [Final|Native|Protected]
	// Offset: 0x3c739fc
	// Params: [ Num(1) Size(0x8) ]
	void OnNavDataRegisteredCallback(struct ANavigationData* NavData);

	// Object: Function MFNPCAI.NPCAINavModifierVolume.CollectAffectedNavNodes
	// Flags: [Native|Protected]
	// Offset: 0x3c739e0
	// Params: [ Num(0) Size(0x0) ]
	void CollectAffectedNavNodes();
};

// Object: Class MFNPCAI.NPCAINavPlatformComponent
// Size: 0x110 (Inherited: 0xE0)
struct UNPCAINavPlatformComponent : UActorComponent
{
	DEFINE_UE_CLASS_HELPERS(UNPCAINavPlatformComponent, "NPCAINavPlatformComponent")

	int64_t PID; // 0xE0(0x8)
	int32_t TemplateID; // 0xE8(0x4)
	float AffectedBottomHeight; // 0xEC(0x4)
	struct FVector OriginLoc; // 0xF0(0xC)
	struct FRotator OriginRot; // 0xFC(0xC)
	bool bDebugDraw; // 0x108(0x1)
	bool bDebugDrawBaseInfo; // 0x109(0x1)
	bool bDebugDrawLinkLines; // 0x10A(0x1)
	bool bDebugDrawPlatformArea; // 0x10B(0x1)
	bool bDebugDrawPolys; // 0x10C(0x1)
	uint8_t Pad_0x10D[0x3]; // 0x10D(0x3)

	// Object: Function MFNPCAI.NPCAINavPlatformComponent.WorldLocToRelativeLoc
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3c741a0
	// Params: [ Num(2) Size(0x18) ]
	struct FVector WorldLocToRelativeLoc(const struct FVector& WorldLoc);

	// Object: Function MFNPCAI.NPCAINavPlatformComponent.WorldLocToNavLoc
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3c73e98
	// Params: [ Num(2) Size(0x18) ]
	struct FVector WorldLocToNavLoc(const struct FVector& WorldLoc);

	// Object: Function MFNPCAI.NPCAINavPlatformComponent.RelativeLocToWorldLoc
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3c740e4
	// Params: [ Num(2) Size(0x18) ]
	struct FVector RelativeLocToWorldLoc(const struct FVector& RelativeLoc);

	// Object: Function MFNPCAI.NPCAINavPlatformComponent.RelativeLocToNavLoc
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3c74028
	// Params: [ Num(2) Size(0x18) ]
	struct FVector RelativeLocToNavLoc(const struct FVector& RelativeLoc);

	// Object: Function MFNPCAI.NPCAINavPlatformComponent.ProjectWorldLocOnPlatform
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3c73acc
	// Params: [ Num(4) Size(0x25) ]
	bool ProjectWorldLocOnPlatform(const struct FVector& WorldLoc, int64_t& PolyRef, const struct FVector& Extent);

	// Object: Function MFNPCAI.NPCAINavPlatformComponent.OnMapOpened
	// Flags: [Final|Native|Private]
	// Offset: 0x3c74390
	// Params: [ Num(2) Size(0x11) ]
	void OnMapOpened(struct FString Filename, bool bAsTemplate);

	// Object: Function MFNPCAI.NPCAINavPlatformComponent.NavLocToWorldLoc
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3c73dc4
	// Params: [ Num(2) Size(0x18) ]
	struct FVector NavLocToWorldLoc(const struct FVector& NavLoc);

	// Object: Function MFNPCAI.NPCAINavPlatformComponent.NavLocToRelativeLoc
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3c73f6c
	// Params: [ Num(2) Size(0x18) ]
	struct FVector NavLocToRelativeLoc(const struct FVector& NavLoc);

	// Object: Function MFNPCAI.NPCAINavPlatformComponent.IsWorldLocOnPlatform
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3c73c24
	// Params: [ Num(2) Size(0xD) ]
	bool IsWorldLocOnPlatform(const struct FVector& WorldLoc);

	// Object: Function MFNPCAI.NPCAINavPlatformComponent.IsNavLocOnPlatform
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3c73d08
	// Params: [ Num(2) Size(0xD) ]
	bool IsNavLocOnPlatform(const struct FVector& NavLoc);

	// Object: Function MFNPCAI.NPCAINavPlatformComponent.GetOwnerWorldLoc
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3c7425c
	// Params: [ Num(1) Size(0xC) ]
	struct FVector GetOwnerWorldLoc();

	// Object: Function MFNPCAI.NPCAINavPlatformComponent.GetBuildData
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3c74338
	// Params: [ Num(1) Size(0x48) ]
	struct FNPCAINavPlatformBuildData GetBuildData();

	// Object: Function MFNPCAI.NPCAINavPlatformComponent.GetBuildConfig
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3c74298
	// Params: [ Num(1) Size(0x48) ]
	struct FNPCAINavPlatformBuildConfig GetBuildConfig();
};

// Object: Class MFNPCAI.NPCAINavMovablePlatformComponent
// Size: 0x118 (Inherited: 0x110)
struct UNPCAINavMovablePlatformComponent : UNPCAINavPlatformComponent
{
	DEFINE_UE_CLASS_HELPERS(UNPCAINavMovablePlatformComponent, "NPCAINavMovablePlatformComponent")

	float MinUpdateDist; // 0x110(0x4)
	uint8_t Pad_0x114[0x4]; // 0x114(0x4)
};

// Object: Class MFNPCAI.NPCAINavPlatformSystem
// Size: 0x470 (Inherited: 0x30)
struct UNPCAINavPlatformSystem : UNPCAINavSubsystemBase
{
	DEFINE_UE_CLASS_HELPERS(UNPCAINavPlatformSystem, "NPCAINavPlatformSystem")

	uint8_t Pad_0x30[0x8]; // 0x30(0x8)
	struct FNavPlatformGraphWrapper AStarGraphWrapper; // 0x38(0xE0)
	uint8_t Pad_0x118[0x178]; // 0x118(0x178)
	struct TMap<struct AActor*, int64_t> Platforms; // 0x290(0x50)
	uint8_t Pad_0x2E0[0xD0]; // 0x2E0(0xD0)
	struct TMap<struct UNPCAINavPlatformComponent*, int64_t> PlatformComponents; // 0x3B0(0x50)
	struct TMap<int64_t, struct UNPCAINavPlatformComponent*> PlatformComponentInfos; // 0x400(0x50)
	uint8_t Pad_0x450[0x20]; // 0x450(0x20)

	// Object: Function MFNPCAI.NPCAINavPlatformSystem.OnNavigationGenerationFinished
	// Flags: [Final|Native|Private]
	// Offset: 0x3c74500
	// Params: [ Num(1) Size(0x8) ]
	void OnNavigationGenerationFinished(struct ANavigationData* NavData);

	// Object: Function MFNPCAI.NPCAINavPlatformSystem.OnNavigationGenerationBegin
	// Flags: [Final|Native|Private]
	// Offset: 0x3c745a8
	// Params: [ Num(0) Size(0x0) ]
	void OnNavigationGenerationBegin();

	// Object: Function MFNPCAI.NPCAINavPlatformSystem.OnNavDataRegistered
	// Flags: [Final|Native|Private]
	// Offset: 0x3c7497c
	// Params: [ Num(1) Size(0x8) ]
	void OnNavDataRegistered(struct ANavigationData* NavData);

	// Object: Function MFNPCAI.NPCAINavPlatformSystem.GetNavPlatformSystem
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x3c74a24
	// Params: [ Num(2) Size(0x10) ]
	static struct UNPCAINavPlatformSystem* GetNavPlatformSystem(struct UObject* WorldContextObject);

	// Object: Function MFNPCAI.NPCAINavPlatformSystem.GetBuildDatas
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3c7471c
	// Params: [ Num(1) Size(0x50) ]
	struct TMap<int32_t, struct FNPCAINavPlatformBuildData> GetBuildDatas();

	// Object: Function MFNPCAI.NPCAINavPlatformSystem.GetBuildDataByTemplateID
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3c748a8
	// Params: [ Num(2) Size(0x50) ]
	struct FNPCAINavPlatformBuildData GetBuildDataByTemplateID(int32_t TemplateID);

	// Object: Function MFNPCAI.NPCAINavPlatformSystem.GetBuildConfigByTemplateID
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3c7479c
	// Params: [ Num(2) Size(0x50) ]
	struct FNPCAINavPlatformBuildConfig GetBuildConfigByTemplateID(int32_t TemplateID);

	// Object: Function MFNPCAI.NPCAINavPlatformSystem.FindPlatformComponent
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x3c7466c
	// Params: [ Num(2) Size(0x10) ]
	struct UNPCAINavPlatformComponent* FindPlatformComponent(int64_t PID);

	// Object: Function MFNPCAI.NPCAINavPlatformSystem.FindPID
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x3c745bc
	// Params: [ Num(2) Size(0x10) ]
	int64_t FindPID(struct UNPCAINavPlatformComponent* PlatformComponent);
};

// Object: Class MFNPCAI.NPCAINavRuntimeSystem
// Size: 0x3B8 (Inherited: 0x30)
struct UNPCAINavRuntimeSystem : UNPCAINavSubsystemBase
{
	DEFINE_UE_CLASS_HELPERS(UNPCAINavRuntimeSystem, "NPCAINavRuntimeSystem")

	uint8_t Pad_0x30[0x48]; // 0x30(0x48)
	struct TMap<int32_t, ENPCAIPerceptibleTile> AreaIDToPerceptibleTile; // 0x78(0x50)
	struct TMap<ENPCAIPerceptibleTile, struct FNavCostDescriptor> PerceptibleTileToNavCostDescriptor; // 0xC8(0x50)
	struct TMap<struct UObject*, struct FNavPolyRefArray> BurningPolyRefs; // 0x118(0x50)
	struct TMap<struct UObject*, struct FNavPolyRefArray> TearGasPolyRefs; // 0x168(0x50)
	struct TMap<struct UObject*, struct FNavPolyRefArray> TripMinePolyRefs; // 0x1B8(0x50)
	struct TMap<struct UObject*, struct FNavPolyRefArray> ClaymorePolyRefs; // 0x208(0x50)
	struct TMap<struct UObject*, struct FNavPolyRefArray> ParadropPolyRefs; // 0x258(0x50)
	struct TMap<struct UObject*, struct ANPCAINavModifierVolume*> ObjectToNavModifierVolume; // 0x2A8(0x50)
	struct TMap<struct TWeakObjectPtr<struct UObject>, struct FNavCostModifierSharedPointer> ObjectToNavCostModifier; // 0x2F8(0x50)
	struct TArray<struct TWeakObjectPtr<struct UObject>> InvalidNavCostModifiers; // 0x348(0x10)
	struct TMap<struct AVolume*, struct FNavPolyRefArray> AvoidPolyRefs; // 0x358(0x50)
	struct UCoverSystem* CachedCoverSystem; // 0x3A8(0x8)
	struct ANPCAINavMeshManager* CachedNavMeshManager; // 0x3B0(0x8)

	// Object: Function MFNPCAI.NPCAINavRuntimeSystem.SetupTripMineAreas
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable]
	// Offset: 0x3c75004
	// Params: [ Num(4) Size(0x21) ]
	void SetupTripMineAreas(struct UObject* Object, const struct FVector& StartPoint, const struct FVector& EndPoint, bool bEnabled);

	// Object: Function MFNPCAI.NPCAINavRuntimeSystem.SetupTearGasAreas
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable]
	// Offset: 0x3c7518c
	// Params: [ Num(4) Size(0x21) ]
	void SetupTearGasAreas(struct UObject* TearGasObject, const struct FVector& CenterPos, const struct FVector& EffectExtent, bool bActiving);

	// Object: Function MFNPCAI.NPCAINavRuntimeSystem.SetupRegionWhereNavLinksNeedDisable
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3c74ad4
	// Params: [ Num(3) Size(0xD) ]
	static bool SetupRegionWhereNavLinksNeedDisable(struct AActor* AIPawnOrController, int32_t RegionIndex);

	// Object: Function MFNPCAI.NPCAINavRuntimeSystem.SetupBurningAreas
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x3c75314
	// Params: [ Num(4) Size(0x1D) ]
	void SetupBurningAreas(struct UObject* Object, const struct TArray<struct FVector>& Centers, float Radius, bool bEnable);

	// Object: Function MFNPCAI.NPCAINavRuntimeSystem.SetupAvoidAreas
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x3c74eb8
	// Params: [ Num(3) Size(0x19) ]
	void SetupAvoidAreas(struct AAIController* AIController, const struct TArray<struct AVolume*>& Volumes, bool bAvoid);

	// Object: Function MFNPCAI.NPCAINavRuntimeSystem.MapAreaIDToPerceptibleTile
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3c754a0
	// Params: [ Num(2) Size(0x5) ]
	ENPCAIPerceptibleTile MapAreaIDToPerceptibleTile(int32_t AreaID);

	// Object: Function MFNPCAI.NPCAINavRuntimeSystem.IsAreaBombing
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable]
	// Offset: 0x3c74d68
	// Params: [ Num(4) Size(0x14) ]
	int32_t IsAreaBombing(const struct FVector& Location, bool bCheckMolotov, bool bCheckTearGas);

	// Object: Function MFNPCAI.NPCAINavRuntimeSystem.ArrangeStandPositions
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable]
	// Offset: 0x3c74bc0
	// Params: [ Num(5) Size(0x30) ]
	static struct TArray<struct FAICandidateStandPosition> ArrangeStandPositions(struct UObject* WorldContextObject, const struct FVector& Location, float MaxRange, float MinGap);
};

// Object: Class MFNPCAI.NPCAINavSkeletonForcePoint
// Size: 0x308 (Inherited: 0x300)
struct ANPCAINavSkeletonForcePoint : AActor
{
	DEFINE_UE_CLASS_HELPERS(ANPCAINavSkeletonForcePoint, "NPCAINavSkeletonForcePoint")

	struct USceneComponent* SceneComponent; // 0x300(0x8)
};

// Object: Class MFNPCAI.NPCAINavSkeletonSystem
// Size: 0x200 (Inherited: 0x30)
struct UNPCAINavSkeletonSystem : UNPCAINavSubsystemBase
{
	DEFINE_UE_CLASS_HELPERS(UNPCAINavSkeletonSystem, "NPCAINavSkeletonSystem")

	uint8_t Pad_0x30[0x1D0]; // 0x30(0x1D0)

	// Object: Function MFNPCAI.NPCAINavSkeletonSystem.SetupTryBestToIncludePointIDs
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x3c7f790
	// Params: [ Num(3) Size(0x1A0) ]
	struct FNavSkeletonGraphAStarFilter SetupTryBestToIncludePointIDs(struct FNavSkeletonGraphAStarFilter& Filter, const struct TArray<int32_t>& PointIDs);

	// Object: Function MFNPCAI.NPCAINavSkeletonSystem.QueryVisiblePointIDsFromMultiTargets
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3c7e6bc
	// Params: [ Num(5) Size(0x38) ]
	void QueryVisiblePointIDsFromMultiTargets(struct TArray<struct AActor*> Targets, struct TArray<float> HalfAngles, struct TArray<int32_t>& Result, float MaxDistance, float AroundRadius);

	// Object: Function MFNPCAI.NPCAINavSkeletonSystem.QueryVisiblePointIDs
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3c7e91c
	// Params: [ Num(5) Size(0x30) ]
	struct TArray<int32_t> QueryVisiblePointIDs(const struct FVector& Location, const struct FVector& Direction, float HalfAngle, float MaxDistance);

	// Object: Function MFNPCAI.NPCAINavSkeletonSystem.QueryThrowablePointIDs
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3c7e5d4
	// Params: [ Num(2) Size(0x18) ]
	struct TArray<int32_t> QueryThrowablePointIDs(int32_t TargetPointID);

	// Object: Function MFNPCAI.NPCAINavSkeletonSystem.QueryProtectablePointIDs
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3c7ee20
	// Params: [ Num(4) Size(0x28) ]
	struct TArray<int32_t> QueryProtectablePointIDs(const struct FVector& Location, float MaxPathLength, int32_t KeepTopK);

	// Object: Function MFNPCAI.NPCAINavSkeletonSystem.QueryPointIDsInSphericalCone
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3c7eae0
	// Params: [ Num(5) Size(0x30) ]
	struct TArray<int32_t> QueryPointIDsInSphericalCone(const struct FVector& Location, const struct FVector& Direction, float HalfAngle, float MaxDistance);

	// Object: Function MFNPCAI.NPCAINavSkeletonSystem.QueryPointIDs
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3c7f568
	// Params: [ Num(3) Size(0x20) ]
	struct TArray<int32_t> QueryPointIDs(const struct FVector& Location, float QueryLength);

	// Object: Function MFNPCAI.NPCAINavSkeletonSystem.QueryOutdoorsPointIDs
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3c7f424
	// Params: [ Num(3) Size(0x28) ]
	struct TArray<int32_t> QueryOutdoorsPointIDs(const struct FVector& Location, const struct FVector& Extent);

	// Object: Function MFNPCAI.NPCAINavSkeletonSystem.QueryNearestPointIDsSorted
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3c7ef9c
	// Params: [ Num(3) Size(0x28) ]
	struct TArray<int32_t> QueryNearestPointIDsSorted(const struct TArray<struct FVector>& Locations, float MaxPathLength);

	// Object: Function MFNPCAI.NPCAINavSkeletonSystem.QueryNearestPointIDs
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3c7f0e8
	// Params: [ Num(3) Size(0x20) ]
	struct TArray<int32_t> QueryNearestPointIDs(const struct FVector& Location, float MaxPathLength);

	// Object: Function MFNPCAI.NPCAINavSkeletonSystem.QueryNearestPointID
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3c7f324
	// Params: [ Num(3) Size(0x14) ]
	int32_t QueryNearestPointID(const struct FVector& Location, float MaxPathLength);

	// Object: Function MFNPCAI.NPCAINavSkeletonSystem.QueryNearestDoorPointID
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3c7f224
	// Params: [ Num(3) Size(0x14) ]
	int32_t QueryNearestDoorPointID(const struct FVector& Location, float MaxPathLength);

	// Object: Function MFNPCAI.NPCAINavSkeletonSystem.QueryBranchyPointIDs
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3c7eca4
	// Params: [ Num(4) Size(0x28) ]
	struct TArray<int32_t> QueryBranchyPointIDs(const struct FVector& Location, float MaxPathLength, int32_t KeepTopK);

	// Object: Function MFNPCAI.NPCAINavSkeletonSystem.OptimizePathResult
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x3c7d638
	// Params: [ Num(2) Size(0x70) ]
	struct FNavSkeletonGraphFindResult OptimizePathResult(const struct FNavSkeletonGraphFindResult& PathResult);

	// Object: Function MFNPCAI.NPCAINavSkeletonSystem.IsPointInMaxConnectivitySubGraph
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3c7fd48
	// Params: [ Num(2) Size(0x5) ]
	bool IsPointInMaxConnectivitySubGraph(int32_t PointID);

	// Object: Function MFNPCAI.NPCAINavSkeletonSystem.GetTotalPointCount
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3c7f75c
	// Params: [ Num(1) Size(0x4) ]
	int32_t GetTotalPointCount();

	// Object: Function MFNPCAI.NPCAINavSkeletonSystem.GetPointData
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3c7f6a4
	// Params: [ Num(2) Size(0xA8) ]
	struct FNavSkeletonPoint GetPointData(int32_t PointID);

	// Object: Function MFNPCAI.NPCAINavSkeletonSystem.GetNavSkeletonSystem
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x3c7ff00
	// Params: [ Num(2) Size(0x10) ]
	static struct UNPCAINavSkeletonSystem* GetNavSkeletonSystem(struct UObject* WorldContextObject);

	// Object: Function MFNPCAI.NPCAINavSkeletonSystem.GetFindPathStatus
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3c7d75c
	// Params: [ Num(2) Size(0x9) ]
	EMFGraphAStarResult GetFindPathStatus(struct UObject* Querier);

	// Object: Function MFNPCAI.NPCAINavSkeletonSystem.FloodFromPointIDs
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable|Const]
	// Offset: 0x3c7db38
	// Params: [ Num(4) Size(0xF0) ]
	struct TArray<int32_t> FloodFromPointIDs(struct TArray<int32_t> PointIDs, const struct FNavSkeletonGraphAStarFilter& Filter, bool bCanEndInUnreachablePoint);

	// Object: Function MFNPCAI.NPCAINavSkeletonSystem.FloodFromPointID
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable|Const]
	// Offset: 0x3c7dd60
	// Params: [ Num(4) Size(0xE8) ]
	struct TArray<int32_t> FloodFromPointID(int32_t PointID, const struct FNavSkeletonGraphAStarFilter& Filter, bool bCanEndInUnreachablePoint);

	// Object: Function MFNPCAI.NPCAINavSkeletonSystem.FindStepBackPointIDs
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x3c7df1c
	// Params: [ Num(4) Size(0x118) ]
	struct FNavSkeletonGraphFindResult FindStepBackPointIDs(int32_t PointID, const struct TArray<int32_t>& CandidatePointIDs, struct FNavSkeletonGraphAStarFilter& Filter);

	// Object: Function MFNPCAI.NPCAINavSkeletonSystem.FindPathAsync
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x3c7d8c0
	// Params: [ Num(7) Size(0xF9) ]
	bool FindPathAsync(int32_t StartPointID, int32_t EndPointID, const struct FNavSkeletonGraphAStarFilter& Filter, const struct FMFGraphAStarPolicy& Policy, struct FDelegate Callback, struct UObject* Caller);

	// Object: Function MFNPCAI.NPCAINavSkeletonSystem.FindPath
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3c7e0e4
	// Params: [ Num(5) Size(0x110) ]
	struct FNavSkeletonGraphFindResult FindPath(int32_t StartPointID, int32_t EndPointID, const struct FNavSkeletonGraphAStarFilter& Filter, struct UObject* Caller);

	// Object: Function MFNPCAI.NPCAINavSkeletonSystem.FindOutsidePointIDs
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3c7e2d0
	// Params: [ Num(3) Size(0x108) ]
	struct FNavSkeletonGraphFindResult FindOutsidePointIDs(int32_t PointID, const struct FNavSkeletonGraphAStarFilter& Filter);

	// Object: Function MFNPCAI.NPCAINavSkeletonSystem.ClearUnreachablePointIDs
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x3c7fc1c
	// Params: [ Num(2) Size(0x190) ]
	struct FNavSkeletonGraphAStarFilter ClearUnreachablePointIDs(struct FNavSkeletonGraphAStarFilter& Filter);

	// Object: Function MFNPCAI.NPCAINavSkeletonSystem.CalculatePathLengthToEachPoint
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3c7e43c
	// Params: [ Num(4) Size(0x30) ]
	struct TArray<struct FNavSkeletonGraphResultNode> CalculatePathLengthToEachPoint(const struct TArray<int32_t>& PointIDs, const struct FVector& Location, float MaxPathLength);

	// Object: Function MFNPCAI.NPCAINavSkeletonSystem.BuildSkeleton
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3c7fe68
	// Params: [ Num(1) Size(0x8) ]
	static void BuildSkeleton(struct UObject* WorldContextObject);

	// Object: Function MFNPCAI.NPCAINavSkeletonSystem.AddUnreachablePointIDs
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x3c7f918
	// Params: [ Num(3) Size(0x1A0) ]
	struct FNavSkeletonGraphAStarFilter AddUnreachablePointIDs(struct FNavSkeletonGraphAStarFilter& Filter, const struct TArray<int32_t>& PointIDs);

	// Object: Function MFNPCAI.NPCAINavSkeletonSystem.AddUnreachablePointID
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x3c7faa0
	// Params: [ Num(3) Size(0x198) ]
	struct FNavSkeletonGraphAStarFilter AddUnreachablePointID(struct FNavSkeletonGraphAStarFilter& Filter, int32_t PointID);

	// Object: Function MFNPCAI.NPCAINavSkeletonSystem.AbortFindPathRequest
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3c7d80c
	// Params: [ Num(2) Size(0x9) ]
	bool AbortFindPathRequest(struct UObject* Querier);
};

// Object: Class MFNPCAI.NPCAINavSteepZoneSystem
// Size: 0x30 (Inherited: 0x30)
struct UNPCAINavSteepZoneSystem : UNPCAINavSubsystemBase
{
	DEFINE_UE_CLASS_HELPERS(UNPCAINavSteepZoneSystem, "NPCAINavSteepZoneSystem")

	// Object: Function MFNPCAI.NPCAINavSteepZoneSystem.RunDeleter
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x3c85924
	// Params: [ Num(1) Size(0x34) ]
	void RunDeleter(const struct FSteepZoneDeleteSettings& Settings);
};

// Object: Class MFNPCAI.NavArea_Burning
// Size: 0x48 (Inherited: 0x48)
struct UNavArea_Burning : UNavArea
{
	DEFINE_UE_CLASS_HELPERS(UNavArea_Burning, "NavArea_Burning")
};

// Object: Class MFNPCAI.NavArea_TearGas
// Size: 0x48 (Inherited: 0x48)
struct UNavArea_TearGas : UNavArea
{
	DEFINE_UE_CLASS_HELPERS(UNavArea_TearGas, "NavArea_TearGas")
};

// Object: Class MFNPCAI.NavArea_TripMine
// Size: 0x48 (Inherited: 0x48)
struct UNavArea_TripMine : UNavArea
{
	DEFINE_UE_CLASS_HELPERS(UNavArea_TripMine, "NavArea_TripMine")
};

// Object: Class MFNPCAI.NavArea_Claymore
// Size: 0x48 (Inherited: 0x48)
struct UNavArea_Claymore : UNavArea
{
	DEFINE_UE_CLASS_HELPERS(UNavArea_Claymore, "NavArea_Claymore")
};

// Object: Class MFNPCAI.NavArea_Paradrop
// Size: 0x48 (Inherited: 0x48)
struct UNavArea_Paradrop : UNavArea
{
	DEFINE_UE_CLASS_HELPERS(UNavArea_Paradrop, "NavArea_Paradrop")
};

// Object: Class MFNPCAI.NavArea_Vehicle
// Size: 0x48 (Inherited: 0x48)
struct UNavArea_Vehicle : UNavArea
{
	DEFINE_UE_CLASS_HELPERS(UNavArea_Vehicle, "NavArea_Vehicle")
};

// Object: Class MFNPCAI.NavArea_UnderPlatform
// Size: 0x48 (Inherited: 0x48)
struct UNavArea_UnderPlatform : UNavArea
{
	DEFINE_UE_CLASS_HELPERS(UNavArea_UnderPlatform, "NavArea_UnderPlatform")
};

// Object: Class MFNPCAI.NavArea_Avoid
// Size: 0x48 (Inherited: 0x48)
struct UNavArea_Avoid : UNavArea
{
	DEFINE_UE_CLASS_HELPERS(UNavArea_Avoid, "NavArea_Avoid")
};

// Object: Class MFNPCAI.NavArea_Color0
// Size: 0x48 (Inherited: 0x48)
struct UNavArea_Color0 : UNavArea
{
	DEFINE_UE_CLASS_HELPERS(UNavArea_Color0, "NavArea_Color0")
};

// Object: Class MFNPCAI.NavArea_Color1
// Size: 0x48 (Inherited: 0x48)
struct UNavArea_Color1 : UNavArea
{
	DEFINE_UE_CLASS_HELPERS(UNavArea_Color1, "NavArea_Color1")
};

// Object: Class MFNPCAI.NavArea_Color2
// Size: 0x48 (Inherited: 0x48)
struct UNavArea_Color2 : UNavArea
{
	DEFINE_UE_CLASS_HELPERS(UNavArea_Color2, "NavArea_Color2")
};

// Object: Class MFNPCAI.NavArea_Color3
// Size: 0x48 (Inherited: 0x48)
struct UNavArea_Color3 : UNavArea
{
	DEFINE_UE_CLASS_HELPERS(UNavArea_Color3, "NavArea_Color3")
};

// Object: Class MFNPCAI.NavArea_Color4
// Size: 0x48 (Inherited: 0x48)
struct UNavArea_Color4 : UNavArea
{
	DEFINE_UE_CLASS_HELPERS(UNavArea_Color4, "NavArea_Color4")
};

// Object: Class MFNPCAI.NavArea_Color5
// Size: 0x48 (Inherited: 0x48)
struct UNavArea_Color5 : UNavArea
{
	DEFINE_UE_CLASS_HELPERS(UNavArea_Color5, "NavArea_Color5")
};

// Object: Class MFNPCAI.NavArea_Color6
// Size: 0x48 (Inherited: 0x48)
struct UNavArea_Color6 : UNavArea
{
	DEFINE_UE_CLASS_HELPERS(UNavArea_Color6, "NavArea_Color6")
};

// Object: Class MFNPCAI.FloodSeedCollection
// Size: 0xA8 (Inherited: 0x28)
struct UFloodSeedCollection : UObject
{
	DEFINE_UE_CLASS_HELPERS(UFloodSeedCollection, "FloodSeedCollection")

	struct TArray<struct AActor*> PlayerStarts; // 0x28(0x10)
	struct TArray<struct AActor*> AISpawnPoints; // 0x38(0x10)
	struct TArray<struct AActor*> DoorNavLinks; // 0x48(0x10)
	struct TSet<int64_t> PlatformPolys; // 0x58(0x50)
};

// Object: Class MFNPCAI.NavPathPointActor
// Size: 0x330 (Inherited: 0x300)
struct ANavPathPointActor : ANote
{
	DEFINE_UE_CLASS_HELPERS(ANavPathPointActor, "NavPathPointActor")

	int32_t NodeIndex; // 0x300(0x4)
	uint8_t Pad_0x304[0x4]; // 0x304(0x4)
	uint64_t NodeRef; // 0x308(0x8)
	struct FVector NodeLocation; // 0x310(0xC)
	uint8_t Pad_0x31C[0x4]; // 0x31C(0x4)
	struct TArray<struct ANavPathPointActor*> NextPathPointArray; // 0x320(0x10)
};

// Object: Class MFNPCAI.NavigationQueryFilter_DontVault
// Size: 0x98 (Inherited: 0x48)
struct UNavigationQueryFilter_DontVault : UNavigationQueryFilter
{
	DEFINE_UE_CLASS_HELPERS(UNavigationQueryFilter_DontVault, "NavigationQueryFilter_DontVault")

	struct TSet<ENavLinkType> IgnoredLinkTypes; // 0x48(0x50)
};

// Object: Class MFNPCAI.NavigationQueryFilter_Diversity
// Size: 0x50 (Inherited: 0x48)
struct UNavigationQueryFilter_Diversity : UNavigationQueryFilter
{
	DEFINE_UE_CLASS_HELPERS(UNavigationQueryFilter_Diversity, "NavigationQueryFilter_Diversity")

	float threshold; // 0x44(0x4)
	float LowValue; // 0x48(0x4)
	float HighValue; // 0x4C(0x4)
};

// Object: Class MFNPCAI.AINavGenerationSettings
// Size: 0x1D8 (Inherited: 0x38)
struct UAINavGenerationSettings : UDeveloperSettings
{
	DEFINE_UE_CLASS_HELPERS(UAINavGenerationSettings, "AINavGenerationSettings")

	struct TArray<struct TSoftClassPtr<struct ANavLinkProxyGenerator*>> NavLinkProxyGeneratorClasses; // 0x38(0x10)
	struct FNPCAINavPlatformBuildConfig DefaultPlatformBuildConfig; // 0x48(0x48)
	struct TMap<int32_t, struct FNPCAINavPlatformBuildConfig> PlatformBuildConfigs; // 0x90(0x50)
	struct FNPCAINavPlatformBuildData DefaultPlatformBuildData; // 0xE0(0x48)
	struct TArray<struct FNavLinkAcceptanceRadiusEntry> NavLinkAdditionAcceptanceRadius; // 0x128(0x10)
	struct TSet<struct UNavArea*> StopPathExtendAreas; // 0x138(0x50)
	struct TSet<ENavLinkType> StopPathTurningLinkTypes; // 0x188(0x50)
};

// Object: Class MFNPCAI.NPCAINavUtilitySystem
// Size: 0x30 (Inherited: 0x30)
struct UNPCAINavUtilitySystem : UNPCAINavSubsystemBase
{
	DEFINE_UE_CLASS_HELPERS(UNPCAINavUtilitySystem, "NPCAINavUtilitySystem")

	// Object: Function MFNPCAI.NPCAINavUtilitySystem.ValidateTacticPointLocations
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3c86350
	// Params: [ Num(1) Size(0x8) ]
	static void ValidateTacticPointLocations(struct UObject* WorldContextObject);

	// Object: Function MFNPCAI.NPCAINavUtilitySystem.RemoveUnreachableNavMeshes
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3c865b8
	// Params: [ Num(1) Size(0x8) ]
	static void RemoveUnreachableNavMeshes(struct UObject* WorldContextObject);

	// Object: Function MFNPCAI.NPCAINavUtilitySystem.NavigationRaycast
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable]
	// Offset: 0x3c86814
	// Params: [ Num(7) Size(0x3A) ]
	static bool NavigationRaycast(struct UObject* WorldContextObject, const struct FVector& RayStart, const struct FVector& RayEnd, struct FVector& HitLocation, struct FVector& OriginalHitLocation, bool& bIsRaycastEndInCorridor);

	// Object: Function MFNPCAI.NPCAINavUtilitySystem.IsDefaultNavArea
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable]
	// Offset: 0x3c86a3c
	// Params: [ Num(5) Size(0x17) ]
	static bool IsDefaultNavArea(struct UObject* WorldContextObject, struct FVector Location, bool& bOnNavMesh, ENPCAIPerceptibleTile& NavMeshType);

	// Object: Function MFNPCAI.NPCAINavUtilitySystem.GetNavPolyCentersInVolume
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3c8611c
	// Params: [ Num(7) Size(0x30) ]
	static struct TArray<struct FVector> GetNavPolyCentersInVolume(struct UObject* WorldContextObject, struct AVolume* Volume, bool bIncludeHighCost, bool bShuffleCandidates, float KeepAwayDistance, int32_t MaxCount);

	// Object: Function MFNPCAI.NPCAINavUtilitySystem.FindDistanceToWall
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable]
	// Offset: 0x3c863e8
	// Params: [ Num(6) Size(0x29) ]
	static bool FindDistanceToWall(struct UObject* WorldContextObject, const struct FVector& Location, float SearchRadius, struct FVector& OutClosestPointOnWall, float& OutDistanceToWall);

	// Object: Function MFNPCAI.NPCAINavUtilitySystem.EstimateLocationAfterSeconds
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable]
	// Offset: 0x3c85f9c
	// Params: [ Num(5) Size(0x1D) ]
	static bool EstimateLocationAfterSeconds(struct AActor* PawnOrController, float ExpectedSeconds, struct FVector& OutLocation, float& OutActualSeconds);

	// Object: Function MFNPCAI.NPCAINavUtilitySystem.DoesPathExist
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable]
	// Offset: 0x3c86650
	// Params: [ Num(6) Size(0x26) ]
	static bool DoesPathExist(struct UObject* WorldContextObject, const struct FVector& Start, const struct FVector& End, float CostLimit, EPathExistenceTestMode TestMode);

	// Object: Function MFNPCAI.NPCAINavUtilitySystem.CalculatePathLengthToEachCoverPoint
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable]
	// Offset: 0x3c86bc0
	// Params: [ Num(4) Size(0x28) ]
	static struct TArray<struct FCoverPointPathLengthResult> CalculatePathLengthToEachCoverPoint(struct UObject* WorldContextObject, const struct FVector& Location, float MaxPathLength);
};

// Object: Class MFNPCAI.NPCAIPathFollowingComponent
// Size: 0x380 (Inherited: 0x280)
struct UNPCAIPathFollowingComponent : UPathFollowingComponent
{
	DEFINE_UE_CLASS_HELPERS(UNPCAIPathFollowingComponent, "NPCAIPathFollowingComponent")

	bool bEnableMoveSmooth; // 0x280(0x1)
	uint8_t Pad_0x281[0x3]; // 0x281(0x3)
	float AdjustAngleMaxDist; // 0x284(0x4)
	uint8_t Pad_0x288[0xF8]; // 0x288(0xF8)

	// Object: Function MFNPCAI.NPCAIPathFollowingComponent.ResumePathFollowing
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3c8d620
	// Params: [ Num(2) Size(0x9) ]
	static void ResumePathFollowing(struct AActor* Actor, ENPCAIPausePathFollowReason reason);

	// Object: Function MFNPCAI.NPCAIPathFollowingComponent.PausePathFollowing
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3c8d6f8
	// Params: [ Num(2) Size(0x9) ]
	static void PausePathFollowing(struct AActor* Actor, ENPCAIPausePathFollowReason reason);

	// Object: Function MFNPCAI.NPCAIPathFollowingComponent.EnableFocus
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3c8d470
	// Params: [ Num(2) Size(0x9) ]
	static void EnableFocus(struct AActor* Actor, ENPCAIDisableFocusReason reason);

	// Object: Function MFNPCAI.NPCAIPathFollowingComponent.EnableCheckPathSafety
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3c8d390
	// Params: [ Num(2) Size(0x9) ]
	static void EnableCheckPathSafety(struct AActor* Actor, bool bEnable);

	// Object: Function MFNPCAI.NPCAIPathFollowingComponent.DisableFocus
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3c8d548
	// Params: [ Num(2) Size(0x9) ]
	static void DisableFocus(struct AActor* Actor, ENPCAIDisableFocusReason reason);
};

// Object: Class MFNPCAI.NPCAIPeekPointAsyncTask
// Size: 0x90 (Inherited: 0x40)
struct UNPCAIPeekPointAsyncTask : UNPCAIAsyncTaskBase
{
	DEFINE_UE_CLASS_HELPERS(UNPCAIPeekPointAsyncTask, "NPCAIPeekPointAsyncTask")

	struct FMulticastInlineDelegate OnSuccess; // 0x40(0x10)
	struct FMulticastInlineDelegate OnFail; // 0x50(0x10)
	struct FVector TargetPoint; // 0x60(0xC)
	struct FVector DangerPoint; // 0x6C(0xC)
	float PeekLength; // 0x78(0x4)
	struct FVector PeekPoint; // 0x7C(0xC)
	bool bWillExpose; // 0x88(0x1)
	uint8_t Pad_0x89[0x7]; // 0x89(0x7)

	// Object: Function MFNPCAI.NPCAIPeekPointAsyncTask.GetNavPath
	// Flags: [Final|Native|Public|HasOutParms]
	// Offset: 0x3c8d7fc
	// Params: [ Num(2) Size(0x14) ]
	void GetNavPath(struct TArray<struct FVector>& OutPath, int32_t& StartIndex);

	// Object: Function MFNPCAI.NPCAIPeekPointAsyncTask.ExecuteTask
	// Flags: [Native|Public]
	// Offset: 0x3c8d90c
	// Params: [ Num(0) Size(0x0) ]
	void ExecuteTask();

	// Object: Function MFNPCAI.NPCAIPeekPointAsyncTask.AIPeekPoint
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable]
	// Offset: 0x3c8d928
	// Params: [ Num(5) Size(0x30) ]
	static struct UNPCAIPeekPointAsyncTask* AIPeekPoint(struct AActor* Pawn, const struct FVector& TargetPoint, const struct FVector& DangerPoint, float PeekLength);
};

// Object: Class MFNPCAI.NPCAIPerceptionAssistActor
// Size: 0x3C8 (Inherited: 0x300)
struct ANPCAIPerceptionAssistActor : AActor
{
	DEFINE_UE_CLASS_HELPERS(ANPCAIPerceptionAssistActor, "NPCAIPerceptionAssistActor")

	struct FAIGrassMapInfo MapInfo; // 0x300(0x80)
	struct TArray<struct FAIFoliageGrassBlock> FoliageGrassBlockList; // 0x380(0x10)
	struct TArray<struct FAILandscapeGrassBlock> LandscapeGrassBlockList; // 0x390(0x10)
	struct TArray<struct FAIGrassBlock> GrassBlockAssets; // 0x3A0(0x10)
	bool bIsDebugAIGrass; // 0x3B0(0x1)
	EnumAIGrassDebugBox DebugAIGrassBox; // 0x3B1(0x1)
	uint8_t Pad_0x3B2[0x16]; // 0x3B2(0x16)

	// Object: Function MFNPCAI.NPCAIPerceptionAssistActor.DebugShowAIGrassCluster
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3c8dabc
	// Params: [ Num(1) Size(0x1) ]
	void DebugShowAIGrassCluster(EnumAIGrassDebugBox Type);
};

// Object: Class MFNPCAI.NPCAIPerceptionComponent
// Size: 0x2C0 (Inherited: 0x1C0)
struct UNPCAIPerceptionComponent : UAIPerceptionComponent
{
	DEFINE_UE_CLASS_HELPERS(UNPCAIPerceptionComponent, "NPCAIPerceptionComponent")

	bool EnabledRecedeSightWhileRotate; // 0x1C0(0x1)
	bool bEnableEnvironmentForSight; // 0x1C1(0x1)
	uint8_t Pad_0x1C2[0x2]; // 0x1C2(0x2)
	float RateDrawLine; // 0x1C4(0x4)
	bool bIsDebugSightRadius; // 0x1C8(0x1)
	bool bIsLogShootPart; // 0x1C9(0x1)
	bool bIsDebugFogRange; // 0x1CA(0x1)
	bool bEnabledDebugCanSeePoint; // 0x1CB(0x1)
	uint8_t Pad_0x1CC[0x4]; // 0x1CC(0x4)
	float LastTimeCheckFlashBlocks; // 0x1D0(0x4)
	struct FVector FlashLightPos; // 0x1D4(0xC)
	float CheckAutoLeanInterval; // 0x1E0(0x4)
	float SightAngleScaleValue; // 0x1E4(0x4)
	float SightRadiusScaleValue; // 0x1E8(0x4)
	float HearRadiusScaleValue; // 0x1EC(0x4)
	float HearSenseRangeSq; // 0x1F0(0x4)
	uint8_t Pad_0x1F4[0x8]; // 0x1F4(0x8)
	bool IsDelayRegisterAtBeginPlay; // 0x1FC(0x1)
	bool bCheckSmokeEnabled; // 0x1FD(0x1)
	bool bCheckFoliageEnabled; // 0x1FE(0x1)
	uint8_t Pad_0x1FF[0x1]; // 0x1FF(0x1)
	struct ACharacter* AIOwnerPawn; // 0x200(0x8)
	ENPCAISenseChannel WeaponChannel; // 0x208(0x1)
	ENPCAISenseChannel AISightChannel; // 0x209(0x1)
	uint8_t Pad_0x20A[0x6]; // 0x20A(0x6)
	struct ANPCAIPerceptionAssistActor* PerceptionAssistActor; // 0x210(0x8)
	struct ANPCAIPerceptionDynamicActor* PerceptionDynamicActor; // 0x218(0x8)
	struct UNPCAIMoverSystemComponent* OwnerMoverComponent; // 0x220(0x8)
	struct UNPCAIMemorySystemComponent* OwnerMemoryComponent; // 0x228(0x8)
	struct UNPCAIMultiTargetSystemComponent* OwnerMultiTargetComponent; // 0x230(0x8)
	struct UNPCAIPropertyComponent_Shoot* ShootProps; // 0x238(0x8)
	struct UNPCAIPropertyComponent_Look* LookProps; // 0x240(0x8)
	struct UActorComponent* AIFireComponent; // 0x248(0x8)
	struct UActorComponent* AIStaticsComponent; // 0x250(0x8)
	struct UActorComponent* AIPoseComponent; // 0x258(0x8)
	struct UActorComponent* IKComponent; // 0x260(0x8)
	struct UActorComponent* AISenseAbilityComponent; // 0x268(0x8)
	struct UNPCAIGlobalSharedInfo* AISharedInfo; // 0x270(0x8)
	struct UActorComponent* AITurnComponent; // 0x278(0x8)
	float NextCheckLeanCanShootTime; // 0x280(0x4)
	float SelfIKFootOffsets; // 0x284(0x4)
	float TargetIKFootOffsets; // 0x288(0x4)
	float TurnSightWeakenScale; // 0x28C(0x4)
	float LastTimeRecoverSight; // 0x290(0x4)
	bool IsAIHasEnableMovableArmors; // 0x294(0x1)
	EAILeanType AutoLeanType; // 0x295(0x1)
	EAIPose AIPoseType; // 0x296(0x1)
	EAIPose TargetPoseType; // 0x297(0x1)
	EAILeanType AILeanType; // 0x298(0x1)
	bool bInitAIGrassElements; // 0x299(0x1)
	uint8_t Pad_0x29A[0x6]; // 0x29A(0x6)
	struct TArray<struct FAIGrassOctreeElement> AIGrassElements; // 0x2A0(0x10)
	uint8_t Pad_0x2B0[0x10]; // 0x2B0(0x10)
};

// Object: Class MFNPCAI.NPCAIPerceptionDynamicActor
// Size: 0x328 (Inherited: 0x300)
struct ANPCAIPerceptionDynamicActor : AActor
{
	DEFINE_UE_CLASS_HELPERS(ANPCAIPerceptionDynamicActor, "NPCAIPerceptionDynamicActor")

	struct TArray<struct FAIBlockArea> DynamicAreaList; // 0x300(0x10)
	struct TArray<struct FAISenseFlashBlock> SenseFlashBlockList; // 0x310(0x10)
	int32_t IndexOfUpdateFlashBlock; // 0x320(0x4)
	int32_t IndexOfCheckEnemyFlashBlock; // 0x324(0x4)
};

// Object: Class MFNPCAI.NPCAIPerceptionSystem
// Size: 0x148 (Inherited: 0x130)
struct UNPCAIPerceptionSystem : UAIPerceptionSystem
{
	DEFINE_UE_CLASS_HELPERS(UNPCAIPerceptionSystem, "NPCAIPerceptionSystem")

	uint8_t Pad_0x130[0x4]; // 0x130(0x4)
	bool bNoiseSpreadEnabled; // 0x134(0x1)
	uint8_t Pad_0x135[0x3]; // 0x135(0x3)
	struct FMulticastInlineDelegate AISenseNoiseSpreadEvt; // 0x138(0x10)

	// Object: Function MFNPCAI.NPCAIPerceptionSystem.SetNoiseSpreadEnabled
	// Flags: [Final|Native|Public]
	// Offset: 0x3c8dd78
	// Params: [ Num(1) Size(0x1) ]
	void SetNoiseSpreadEnabled(bool InValue);

	// Object: Function MFNPCAI.NPCAIPerceptionSystem.OnSourceActorEndPlay
	// Flags: [Native|Public]
	// Offset: 0x993495c
	// Params: [ Num(2) Size(0x9) ]
	void OnSourceActorEndPlay(struct AActor* InActor, uint8_t InEndPlayReason);

	// Object: Function MFNPCAI.NPCAIPerceptionSystem.ModifySenseRangeInRuntime
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3c8de28
	// Params: [ Num(5) Size(0x12) ]
	bool ModifySenseRangeInRuntime(struct AActor* InAIController, float InCatchRadiusScale, float InLossRadiusScale, EAISenseType InSenseType);

	// Object: Function MFNPCAI.NPCAIPerceptionSystem.IsNoiseSpreadEnabled
	// Flags: [Final|Native|Public]
	// Offset: 0x3c8dd5c
	// Params: [ Num(1) Size(0x1) ]
	bool IsNoiseSpreadEnabled();
};

// Object: Class MFNPCAI.NPCAIProfile
// Size: 0x38 (Inherited: 0x28)
struct UNPCAIProfile : UObject
{
	DEFINE_UE_CLASS_HELPERS(UNPCAIProfile, "NPCAIProfile")

	struct UNPCAIActorComponent* FactionClass; // 0x28(0x8)
	struct UNPCAIActorComponent* RoleClass; // 0x30(0x8)
};

// Object: Class MFNPCAI.NPCAIPropertyProfile
// Size: 0x38 (Inherited: 0x38)
struct UNPCAIPropertyProfile : UNPCAIPropertyProfileBase
{
	DEFINE_UE_CLASS_HELPERS(UNPCAIPropertyProfile, "NPCAIPropertyProfile")
};

// Object: Class MFNPCAI.NPCAIPropertyComponent
// Size: 0x38 (Inherited: 0x38)
struct UNPCAIPropertyComponent : UNPCAIProfileBaseComponent
{
	DEFINE_UE_CLASS_HELPERS(UNPCAIPropertyComponent, "NPCAIPropertyComponent")
};

// Object: Class MFNPCAI.AIPropertyAimingProfile
// Size: 0x148 (Inherited: 0x38)
struct UAIPropertyAimingProfile : UNPCAIPropertyProfile
{
	DEFINE_UE_CLASS_HELPERS(UAIPropertyAimingProfile, "AIPropertyAimingProfile")

	float AimTimeDelayByDamageProb; // 0x34(0x4)
	float AimTimeDelayByDamageMin; // 0x38(0x4)
	float AimTimeDelayByDamageMax; // 0x3C(0x4)
	float AimTimeDelayByFirstShoot; // 0x40(0x4)
	float AimTimeDelayByFirstShootProb; // 0x44(0x4)
	float AimTimeDelayByMove; // 0x48(0x4)
	float UA_QUICK_AIM_OFFSET_DIS_RATE; // 0x4C(0x4)
	float UA_QUICK_AIM_UNDER_SEEN_TIME; // 0x50(0x4)
	float UA_QUICK_AIM_TIME_CALC_COEF; // 0x54(0x4)
	struct UCurveFloat* UA_AIM_TIME_TO_DIST_MULTIPLIER_CURVE; // 0x58(0x8)
	struct UCurveFloat* UA_SCATTERING_DIST_CURVE; // 0x60(0x8)
	struct UCurveFloat* UA_FAKE_RANDOM_HIT_RATE_CURVE; // 0x68(0x8)
	struct TArray<float> UA_SHOOT_HIT_RATES; // 0x70(0x10)
	struct TArray<float> UA_SHOOT_HIT_RATES_AI; // 0x80(0x10)
	struct UCurveFloat* UA_SHOOT_HIT_RATE_DISTANCE_TO_PLAYER_CURVE; // 0x90(0x8)
	struct UCurveFloat* UA_SHOOT_HIT_RATE_DISTANCE_TO_AI_CURVE; // 0x98(0x8)
	struct UCurveFloat* UA_SHOOT_HIT_RATE_DISTANCE_NOT_ADS; // 0xA0(0x8)
	float UA_ADD_AIMING_TICK_WHEN_ANGLE_SMALLER_THAN; // 0xA8(0x4)
	float UA_ADD_AIMING_TICK_WHEN_ANGLE_SMALLER_THAN_COS; // 0xAC(0x4)
	bool IS_USE_PREDESTINED_FAKE_RANDOM; // 0xB0(0x1)
	float UA_SHOOT_HIT_RATE_IF_AIMOVE; // 0xB4(0x4)
	float UA_SHOOT_HIT_RATE_IF_ENEMY_MOVE_SPEED; // 0xB8(0x4)
	float UA_SHOOT_HIT_RATE_IF_ENEMY_MOVE; // 0xBC(0x4)
	float UA_SHOOT_HIT_RATE_IF_ARM_BROKEN; // 0xC0(0x4)
	float UA_SHOOT_HIT_RATE_IF_INCOVER_SAFE; // 0xC4(0x4)
	float UA_SHOOT_HIT_RATE_IF_BE_HITED; // 0xC8(0x4)
	uint8_t Pad_0xCD[0x3]; // 0xCD(0x3)
	struct UCurveFloat* UA_SHOOT_HIT_RATE_IF_BATTLE_DURATION_CURVE; // 0xD0(0x8)
	struct UCurveFloat* UA_SHOOT_HIT_RATE_IF_WEAPON_ADSMOA_BIAS_CURVE; // 0xD8(0x8)
	float UA_SHOOT_HIT_RATE_IF_SHOOT_HEAD; // 0xE0(0x4)
	float UA_SHOOT_HIT_RATE_IF_UNDER_FLASH_LIGHT; // 0xE4(0x4)
	struct UCurveFloat* UA_SHOOT_HIT_RATE_IF_VEHICLE_SPEEDKPH_CURVE; // 0xE8(0x8)
	float UA_SHOOT_HEAD_FACE_RATE_IF_USE_PREDESTINED; // 0xF0(0x4)
	float UA_SHOOT_HIT_LIMITED_TIME; // 0xF4(0x4)
	float MinAimDuration; // 0xF8(0x4)
	float MaxAimDuration; // 0xFC(0x4)
	float ShootPartRandInterval; // 0x100(0x4)
	float ShootSpecifiedPartTime; // 0x104(0x4)
	struct TArray<struct FAIBodyBulkAimingChoice> AIMING_BULK_FOR_PLAYER; // 0x108(0x10)
	struct TArray<struct FAIBodyBulkAimingChoice> AIMING_BULK_FOR_AI; // 0x118(0x10)
	bool IS_FILTER_NOT_SEEN_PART_TO_AIMING; // 0x128(0x1)
	EAIAimingBodyPartTrend AIMING_BODYPART_TREND; // 0x129(0x1)
	uint8_t Pad_0x12A[0x2]; // 0x12A(0x2)
	int32_t FireCountMin; // 0x12C(0x4)
	int32_t FireCountMax; // 0x130(0x4)
	EAimingType AimingType; // 0x134(0x1)
	uint8_t Pad_0x135[0x3]; // 0x135(0x3)
	float ReAimThreshold_Z; // 0x138(0x4)
	float ReAimThreshold_XY; // 0x13C(0x4)
	float ReAimThreshold_XY_Sqr; // 0x140(0x4)
	uint8_t Pad_0x144[0x4]; // 0x144(0x4)
};

// Object: Class MFNPCAI.NPCAIPropertyComponent_Aiming
// Size: 0x50 (Inherited: 0x38)
struct UNPCAIPropertyComponent_Aiming : UNPCAIPropertyComponent
{
	DEFINE_UE_CLASS_HELPERS(UNPCAIPropertyComponent_Aiming, "NPCAIPropertyComponent_Aiming")

	uint8_t Pad_0x38[0x10]; // 0x38(0x10)
	float MaxAimDurationModifier; // 0x48(0x4)
	EAIAimingBodyPartTrend AimingBodyPartTrendModifier; // 0x4C(0x1)
	bool AimingBodyPartTrendModifierIsChanged; // 0x4D(0x1)
	uint8_t Pad_0x4E[0x2]; // 0x4E(0x2)

	// Object: Function MFNPCAI.NPCAIPropertyComponent_Aiming.SetMaxAimTime
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3c925c0
	// Params: [ Num(2) Size(0x8) ]
	float SetMaxAimTime(float Value);

	// Object: Function MFNPCAI.NPCAIPropertyComponent_Aiming.SetAimingBodyPartWeightInRuntime
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3c92a64
	// Params: [ Num(3) Size(0x9) ]
	void SetAimingBodyPartWeightInRuntime(EAIBodyPartType InBodyPart, float InWeight, bool bIsForPlayer);

	// Object: Function MFNPCAI.NPCAIPropertyComponent_Aiming.SetAimingBodyPartTrend
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3c92948
	// Params: [ Num(2) Size(0x2) ]
	EAIAimingBodyPartTrend SetAimingBodyPartTrend(EAIAimingBodyPartTrend AimingTrend);

	// Object: Function MFNPCAI.NPCAIPropertyComponent_Aiming.RemoveAimingTypeInRuntime
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3c92c8c
	// Params: [ Num(2) Size(0x2) ]
	void RemoveAimingTypeInRuntime(EAIBodyBulkType InBulkType, bool bIsForPlayer);

	// Object: Function MFNPCAI.NPCAIPropertyComponent_Aiming.IsUsePerdestinedFakeRandom
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3c9324c
	// Params: [ Num(1) Size(0x1) ]
	bool IsUsePerdestinedFakeRandom();

	// Object: Function MFNPCAI.NPCAIPropertyComponent_Aiming.IsAimingChoicesContains
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3c92eac
	// Params: [ Num(3) Size(0x3) ]
	bool IsAimingChoicesContains(EAIBodyPartType InBodyPartType, bool bIsForPlayer);

	// Object: Function MFNPCAI.NPCAIPropertyComponent_Aiming.GetUaSpreadOffsetXYClamp
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3c93148
	// Params: [ Num(1) Size(0x4) ]
	float GetUaSpreadOffsetXYClamp();

	// Object: Function MFNPCAI.NPCAIPropertyComponent_Aiming.GetUaSpreadOffsetMinZClamp
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3c93114
	// Params: [ Num(1) Size(0x4) ]
	float GetUaSpreadOffsetMinZClamp();

	// Object: Function MFNPCAI.NPCAIPropertyComponent_Aiming.GetUaSpreadOffsetMaxZClamp
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3c930e0
	// Params: [ Num(1) Size(0x4) ]
	float GetUaSpreadOffsetMaxZClamp();

	// Object: Function MFNPCAI.NPCAIPropertyComponent_Aiming.GetUaShootHitRatesAI
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3c93844
	// Params: [ Num(1) Size(0x10) ]
	struct TArray<float> GetUaShootHitRatesAI();

	// Object: Function MFNPCAI.NPCAIPropertyComponent_Aiming.GetUaShootHitRates
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3c938c8
	// Params: [ Num(1) Size(0x10) ]
	struct TArray<float> GetUaShootHitRates();

	// Object: Function MFNPCAI.NPCAIPropertyComponent_Aiming.GetUAShootHitRateIfWeaponAdsMoaBias
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3c9339c
	// Params: [ Num(2) Size(0x8) ]
	float GetUAShootHitRateIfWeaponAdsMoaBias(float AdsMoaBias);

	// Object: Function MFNPCAI.NPCAIPropertyComponent_Aiming.GetUAShootHitRateIfVehicleSpeedKPH
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3c93284
	// Params: [ Num(2) Size(0x8) ]
	float GetUAShootHitRateIfVehicleSpeedKPH(float VehicleSpeedKPH);

	// Object: Function MFNPCAI.NPCAIPropertyComponent_Aiming.GetUAShootHitRateIfUnderFlashLight
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3c93334
	// Params: [ Num(1) Size(0x4) ]
	float GetUAShootHitRateIfUnderFlashLight();

	// Object: Function MFNPCAI.NPCAIPropertyComponent_Aiming.GetUAShootHitRateIfShootHead
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3c93368
	// Params: [ Num(1) Size(0x4) ]
	float GetUAShootHitRateIfShootHead();

	// Object: Function MFNPCAI.NPCAIPropertyComponent_Aiming.GetUAShootHitRateIfInCoverSafe
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3c93530
	// Params: [ Num(1) Size(0x4) ]
	float GetUAShootHitRateIfInCoverSafe();

	// Object: Function MFNPCAI.NPCAIPropertyComponent_Aiming.GetUAShootHitRateIfEnemyMoveSpeed
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3c935cc
	// Params: [ Num(1) Size(0x4) ]
	float GetUAShootHitRateIfEnemyMoveSpeed();

	// Object: Function MFNPCAI.NPCAIPropertyComponent_Aiming.GetUAShootHitRateIfEnemyMove
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3c93598
	// Params: [ Num(1) Size(0x4) ]
	float GetUAShootHitRateIfEnemyMove();

	// Object: Function MFNPCAI.NPCAIPropertyComponent_Aiming.GetUAShootHitRateIfBeHited
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3c934fc
	// Params: [ Num(1) Size(0x4) ]
	float GetUAShootHitRateIfBeHited();

	// Object: Function MFNPCAI.NPCAIPropertyComponent_Aiming.GetUAShootHitRateIfBattleDuration
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3c9344c
	// Params: [ Num(2) Size(0x8) ]
	float GetUAShootHitRateIfBattleDuration(float BattleDurationTime);

	// Object: Function MFNPCAI.NPCAIPropertyComponent_Aiming.GetUAShootHitRateIfArmBroken
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3c93564
	// Params: [ Num(1) Size(0x4) ]
	float GetUAShootHitRateIfArmBroken();

	// Object: Function MFNPCAI.NPCAIPropertyComponent_Aiming.GetUAShootHitRateIfAIMove
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3c93600
	// Params: [ Num(1) Size(0x4) ]
	float GetUAShootHitRateIfAIMove();

	// Object: Function MFNPCAI.NPCAIPropertyComponent_Aiming.GetUAShootHitRateForDistanceToPlayer
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3c93794
	// Params: [ Num(2) Size(0x8) ]
	float GetUAShootHitRateForDistanceToPlayer(float InDistance);

	// Object: Function MFNPCAI.NPCAIPropertyComponent_Aiming.GetUAShootHitRateForDistanceToAI
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3c936e4
	// Params: [ Num(2) Size(0x8) ]
	float GetUAShootHitRateForDistanceToAI(float InDistance);

	// Object: Function MFNPCAI.NPCAIPropertyComponent_Aiming.GetUAShootHitRateForDistanceIfNotADS
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3c93634
	// Params: [ Num(2) Size(0x8) ]
	float GetUAShootHitRateForDistanceIfNotADS(float InDistance);

	// Object: Function MFNPCAI.NPCAIPropertyComponent_Aiming.GetUAShootHitLimitedTime
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3c931b0
	// Params: [ Num(1) Size(0x4) ]
	float GetUAShootHitLimitedTime();

	// Object: Function MFNPCAI.NPCAIPropertyComponent_Aiming.GetUAShootHeadFaceRateIfUsedPredstined
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3c93218
	// Params: [ Num(1) Size(0x4) ]
	float GetUAShootHeadFaceRateIfUsedPredstined();

	// Object: Function MFNPCAI.NPCAIPropertyComponent_Aiming.GetUaScatteringByDist
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3c93a98
	// Params: [ Num(2) Size(0x8) ]
	float GetUaScatteringByDist(float Distance);

	// Object: Function MFNPCAI.NPCAIPropertyComponent_Aiming.GetUaQuickAimUnderSeenTime
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3c93980
	// Params: [ Num(1) Size(0x4) ]
	float GetUaQuickAimUnderSeenTime();

	// Object: Function MFNPCAI.NPCAIPropertyComponent_Aiming.GetUaQuickAimTimeCalcCoef
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3c9394c
	// Params: [ Num(1) Size(0x4) ]
	float GetUaQuickAimTimeCalcCoef();

	// Object: Function MFNPCAI.NPCAIPropertyComponent_Aiming.GetUaQuickAimOffsetDisRate
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3c939b4
	// Params: [ Num(1) Size(0x4) ]
	float GetUaQuickAimOffsetDisRate();

	// Object: Function MFNPCAI.NPCAIPropertyComponent_Aiming.GetUaMinAimTime
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3c9317c
	// Params: [ Num(1) Size(0x4) ]
	float GetUaMinAimTime();

	// Object: Function MFNPCAI.NPCAIPropertyComponent_Aiming.GetUaFakeRandomHitRate
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3c939e8
	// Params: [ Num(2) Size(0x8) ]
	float GetUaFakeRandomHitRate(float HitRate);

	// Object: Function MFNPCAI.NPCAIPropertyComponent_Aiming.GetUaAimTime2DistMultiplierCurve
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3c93b48
	// Params: [ Num(1) Size(0x8) ]
	struct UCurveFloat* GetUaAimTime2DistMultiplierCurve();

	// Object: Function MFNPCAI.NPCAIPropertyComponent_Aiming.GetUaAddAimingTickWhenAngleSmallerThan_Cos
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3c931e4
	// Params: [ Num(1) Size(0x4) ]
	float GetUaAddAimingTickWhenAngleSmallerThan_Cos();

	// Object: Function MFNPCAI.NPCAIPropertyComponent_Aiming.GetShootSpecifiedPartTime
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3c928e0
	// Params: [ Num(1) Size(0x4) ]
	float GetShootSpecifiedPartTime();

	// Object: Function MFNPCAI.NPCAIPropertyComponent_Aiming.GetShootPartRandInterval
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3c92914
	// Params: [ Num(1) Size(0x4) ]
	float GetShootPartRandInterval();

	// Object: Function MFNPCAI.NPCAIPropertyComponent_Aiming.GetReAimThreshold_Z
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3c928ac
	// Params: [ Num(1) Size(0x4) ]
	float GetReAimThreshold_Z();

	// Object: Function MFNPCAI.NPCAIPropertyComponent_Aiming.GetReAimThreshold_XY_Sqr
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3c92844
	// Params: [ Num(1) Size(0x4) ]
	float GetReAimThreshold_XY_Sqr();

	// Object: Function MFNPCAI.NPCAIPropertyComponent_Aiming.GetReAimThreshold_XY
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3c92878
	// Params: [ Num(1) Size(0x4) ]
	float GetReAimThreshold_XY();

	// Object: Function MFNPCAI.NPCAIPropertyComponent_Aiming.GetMaxAimTime
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3c92670
	// Params: [ Num(1) Size(0x4) ]
	float GetMaxAimTime();

	// Object: Function MFNPCAI.NPCAIPropertyComponent_Aiming.GetIsFilterNotSeenPartToAiming
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3c92a2c
	// Params: [ Num(1) Size(0x1) ]
	bool GetIsFilterNotSeenPartToAiming();

	// Object: Function MFNPCAI.NPCAIPropertyComponent_Aiming.GetFireCountMin
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3c92810
	// Params: [ Num(1) Size(0x4) ]
	int32_t GetFireCountMin();

	// Object: Function MFNPCAI.NPCAIPropertyComponent_Aiming.GetFireCountMax
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3c927dc
	// Params: [ Num(1) Size(0x4) ]
	int32_t GetFireCountMax();

	// Object: Function MFNPCAI.NPCAIPropertyComponent_Aiming.GetAIProfileType
	// Flags: [Native|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x3c93b7c
	// Params: [ Num(1) Size(0x1) ]
	EAIProfileType GetAIProfileType();

	// Object: Function MFNPCAI.NPCAIPropertyComponent_Aiming.GetAimTimeDelayByMove
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3c926a4
	// Params: [ Num(1) Size(0x4) ]
	float GetAimTimeDelayByMove();

	// Object: Function MFNPCAI.NPCAIPropertyComponent_Aiming.GetAimTimeDelayByFirstShootProb
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3c926d8
	// Params: [ Num(1) Size(0x4) ]
	float GetAimTimeDelayByFirstShootProb();

	// Object: Function MFNPCAI.NPCAIPropertyComponent_Aiming.GetAimTimeDelayByFirstShoot
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3c9270c
	// Params: [ Num(1) Size(0x4) ]
	float GetAimTimeDelayByFirstShoot();

	// Object: Function MFNPCAI.NPCAIPropertyComponent_Aiming.GetAimTimeDelayByDamageProb
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3c927a8
	// Params: [ Num(1) Size(0x4) ]
	float GetAimTimeDelayByDamageProb();

	// Object: Function MFNPCAI.NPCAIPropertyComponent_Aiming.GetAimTimeDelayByDamageMin
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3c92774
	// Params: [ Num(1) Size(0x4) ]
	float GetAimTimeDelayByDamageMin();

	// Object: Function MFNPCAI.NPCAIPropertyComponent_Aiming.GetAimTimeDelayByDamageMax
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3c92740
	// Params: [ Num(1) Size(0x4) ]
	float GetAimTimeDelayByDamageMax();

	// Object: Function MFNPCAI.NPCAIPropertyComponent_Aiming.GetAimingTypeWeightInRuntime
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3c92b94
	// Params: [ Num(3) Size(0x8) ]
	float GetAimingTypeWeightInRuntime(EAIBodyBulkType InBulkType, bool bIsForPlayer);

	// Object: Function MFNPCAI.NPCAIPropertyComponent_Aiming.GetAimingType
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3c9258c
	// Params: [ Num(1) Size(0x1) ]
	EAimingType GetAimingType();

	// Object: Function MFNPCAI.NPCAIPropertyComponent_Aiming.GetAimingBulks
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3c92fa8
	// Params: [ Num(2) Size(0x18) ]
	struct TArray<struct FAIBodyBulkAimingChoice> GetAimingBulks(bool bIsForPlayer);

	// Object: Function MFNPCAI.NPCAIPropertyComponent_Aiming.GetAimingBodyPartTrend
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3c929f8
	// Params: [ Num(1) Size(0x1) ]
	EAIAimingBodyPartTrend GetAimingBodyPartTrend();

	// Object: Function MFNPCAI.NPCAIPropertyComponent_Aiming.AddAimingTypeInRuntime
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3c92d7c
	// Params: [ Num(3) Size(0x9) ]
	void AddAimingTypeInRuntime(EAIBodyBulkType InBulkType, float InWeight, bool bIsForPlayer);
};

// Object: Class MFNPCAI.AIPropertyAITypeProfile
// Size: 0x38 (Inherited: 0x38)
struct UAIPropertyAITypeProfile : UNPCAIPropertyProfile
{
	DEFINE_UE_CLASS_HELPERS(UAIPropertyAITypeProfile, "AIPropertyAITypeProfile")

	ENPCAIJobType AIJobType; // 0x31(0x1)
};

// Object: Class MFNPCAI.NPCAIPropertyComponent_AIType
// Size: 0x40 (Inherited: 0x38)
struct UNPCAIPropertyComponent_AIType : UNPCAIPropertyComponent
{
	DEFINE_UE_CLASS_HELPERS(UNPCAIPropertyComponent_AIType, "NPCAIPropertyComponent_AIType")

	struct UNPCAIModifierComponent_AIType* Modifier_AIType; // 0x38(0x8)

	// Object: Function MFNPCAI.NPCAIPropertyComponent_AIType.InitModifierComponents
	// Flags: [Final|Native|Public]
	// Offset: 0x3c93cac
	// Params: [ Num(1) Size(0x1) ]
	bool InitModifierComponents();

	// Object: Function MFNPCAI.NPCAIPropertyComponent_AIType.GetAIProfileType
	// Flags: [Native|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x3c93ce4
	// Params: [ Num(1) Size(0x1) ]
	EAIProfileType GetAIProfileType();

	// Object: Function MFNPCAI.NPCAIPropertyComponent_AIType.GetAIMainType
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x3c93c78
	// Params: [ Num(1) Size(0x1) ]
	EAIMainType GetAIMainType();

	// Object: Function MFNPCAI.NPCAIPropertyComponent_AIType.GetAIJobType
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3c93c44
	// Params: [ Num(1) Size(0x1) ]
	ENPCAIJobType GetAIJobType();
};

// Object: Class MFNPCAI.AIPropertyBlockProfile
// Size: 0x38 (Inherited: 0x38)
struct UAIPropertyBlockProfile : UNPCAIPropertyProfile
{
	DEFINE_UE_CLASS_HELPERS(UAIPropertyBlockProfile, "AIPropertyBlockProfile")
};

// Object: Class MFNPCAI.NPCAIPropertyComponent_Block
// Size: 0x38 (Inherited: 0x38)
struct UNPCAIPropertyComponent_Block : UNPCAIPropertyComponent
{
	DEFINE_UE_CLASS_HELPERS(UNPCAIPropertyComponent_Block, "NPCAIPropertyComponent_Block")

	// Object: Function MFNPCAI.NPCAIPropertyComponent_Block.GetAIProfileType
	// Flags: [Native|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x3c93d40
	// Params: [ Num(1) Size(0x1) ]
	EAIProfileType GetAIProfileType();

	// Object: Function MFNPCAI.NPCAIPropertyComponent_Block.GetAimTimeAfterTurn
	// Flags: [Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure]
	// Offset: 0x5d8cbc8
	// Params: [ Num(2) Size(0x8) ]
	float GetAimTimeAfterTurn(float Angle);
};

// Object: Class MFNPCAI.AIPropertyBossProfile
// Size: 0x48 (Inherited: 0x38)
struct UAIPropertyBossProfile : UNPCAIPropertyProfile
{
	DEFINE_UE_CLASS_HELPERS(UAIPropertyBossProfile, "AIPropertyBossProfile")

	bool ThreatenShootEnable; // 0x31(0x1)
	float ThreatenShootCloseDist; // 0x34(0x4)
	float ThreatenShootEndDist; // 0x38(0x4)
	float ThreatenShootDist; // 0x3C(0x4)
	float ThreatenShootTime; // 0x40(0x4)
};

// Object: Class MFNPCAI.NPCAIPropertyComponent_Boss
// Size: 0x38 (Inherited: 0x38)
struct UNPCAIPropertyComponent_Boss : UNPCAIPropertyComponent
{
	DEFINE_UE_CLASS_HELPERS(UNPCAIPropertyComponent_Boss, "NPCAIPropertyComponent_Boss")

	// Object: Function MFNPCAI.NPCAIPropertyComponent_Boss.IsThreatenShootEnable
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3c93ee0
	// Params: [ Num(1) Size(0x1) ]
	bool IsThreatenShootEnable();

	// Object: Function MFNPCAI.NPCAIPropertyComponent_Boss.GetThreatenShootTime
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3c93e78
	// Params: [ Num(1) Size(0x4) ]
	float GetThreatenShootTime();

	// Object: Function MFNPCAI.NPCAIPropertyComponent_Boss.GetThreatenShootEndDist
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3c93e10
	// Params: [ Num(1) Size(0x4) ]
	float GetThreatenShootEndDist();

	// Object: Function MFNPCAI.NPCAIPropertyComponent_Boss.GetThreatenShootDist
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3c93eac
	// Params: [ Num(1) Size(0x4) ]
	float GetThreatenShootDist();

	// Object: Function MFNPCAI.NPCAIPropertyComponent_Boss.GetThreatenShootCloseDist
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3c93e44
	// Params: [ Num(1) Size(0x4) ]
	float GetThreatenShootCloseDist();

	// Object: Function MFNPCAI.NPCAIPropertyComponent_Boss.GetAIProfileType
	// Flags: [Native|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x3c93f18
	// Params: [ Num(1) Size(0x1) ]
	EAIProfileType GetAIProfileType();
};

// Object: Class MFNPCAI.AIPropertyCoreProfile
// Size: 0x40 (Inherited: 0x38)
struct UAIPropertyCoreProfile : UNPCAIPropertyProfile
{
	DEFINE_UE_CLASS_HELPERS(UAIPropertyCoreProfile, "AIPropertyCoreProfile")

	EAimingType AimingType; // 0x31(0x1)
	float AccuratySpeed; // 0x34(0x4)
	EAILODActionPlan LODPlan; // 0x38(0x1)
	uint8_t Pad_0x3E[0x2]; // 0x3E(0x2)
};

// Object: Class MFNPCAI.NPCAIPropertyComponent_Core
// Size: 0x38 (Inherited: 0x38)
struct UNPCAIPropertyComponent_Core : UNPCAIPropertyComponent
{
	DEFINE_UE_CLASS_HELPERS(UNPCAIPropertyComponent_Core, "NPCAIPropertyComponent_Core")

	// Object: Function MFNPCAI.NPCAIPropertyComponent_Core.GetUseLODPlan
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3c96434
	// Params: [ Num(1) Size(0x1) ]
	EAILODActionPlan GetUseLODPlan();

	// Object: Function MFNPCAI.NPCAIPropertyComponent_Core.GetAIProfileType
	// Flags: [Native|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x3c964d0
	// Params: [ Num(1) Size(0x1) ]
	EAIProfileType GetAIProfileType();

	// Object: Function MFNPCAI.NPCAIPropertyComponent_Core.GetAimingType
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3c9649c
	// Params: [ Num(1) Size(0x1) ]
	EAimingType GetAimingType();

	// Object: Function MFNPCAI.NPCAIPropertyComponent_Core.GetAccuratySpeed
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3c96468
	// Params: [ Num(1) Size(0x4) ]
	float GetAccuratySpeed();
};

// Object: Class MFNPCAI.AIPropertyCurveProfile
// Size: 0x48 (Inherited: 0x38)
struct UAIPropertyCurveProfile : UNPCAIPropertyProfile
{
	DEFINE_UE_CLASS_HELPERS(UAIPropertyCurveProfile, "AIPropertyCurveProfile")

	struct UCurveFloat* SightCurveDaytime; // 0x38(0x8)
	struct UCurveFloat* SightCureOutLight; // 0x40(0x8)
};

// Object: Class MFNPCAI.NPCAIPropertyComponent_Curve
// Size: 0x38 (Inherited: 0x38)
struct UNPCAIPropertyComponent_Curve : UNPCAIPropertyComponent
{
	DEFINE_UE_CLASS_HELPERS(UNPCAIPropertyComponent_Curve, "NPCAIPropertyComponent_Curve")

	// Object: Function MFNPCAI.NPCAIPropertyComponent_Curve.GetSightCurveDaytime
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3c96554
	// Params: [ Num(1) Size(0x8) ]
	struct UCurveFloat* GetSightCurveDaytime();

	// Object: Function MFNPCAI.NPCAIPropertyComponent_Curve.GetSightCureOutLight
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3c96520
	// Params: [ Num(1) Size(0x8) ]
	struct UCurveFloat* GetSightCureOutLight();

	// Object: Function MFNPCAI.NPCAIPropertyComponent_Curve.GetAIProfileType
	// Flags: [Native|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x3c96588
	// Params: [ Num(1) Size(0x1) ]
	EAIProfileType GetAIProfileType();
};

// Object: Class MFNPCAI.AIPropertyDamageProfile
// Size: 0x78 (Inherited: 0x38)
struct UAIPropertyDamageProfile : UNPCAIPropertyProfile
{
	DEFINE_UE_CLASS_HELPERS(UAIPropertyDamageProfile, "AIPropertyDamageProfile")

	float DamageScale; // 0x34(0x4)
	float ArmorDamageScale; // 0x38(0x4)
	float BulletArmorPenetrationNotHurt; // 0x3C(0x4)
	bool EnabledTeamGrenadeHarm; // 0x40(0x1)
	bool EnabledFactionGrenadeHarm; // 0x41(0x1)
	bool bDamageLimitEnabledForAI; // 0x42(0x1)
	int32_t DamageLimit; // 0x44(0x4)
	float DamageLimitTime; // 0x48(0x4)
	float DamageLimitPercentage; // 0x4C(0x4)
	float DamageNoZeroHPValue; // 0x50(0x4)
	uint8_t Pad_0x57[0x1]; // 0x57(0x1)
	struct TArray<EAIBodyPartType> DamageNoZeroHPParts; // 0x58(0x10)
	float DamageBleedExtraProbability; // 0x68(0x4)
	float BulletsResist; // 0x6C(0x4)
	float ProjectilesResist; // 0x70(0x4)
	float DotResist; // 0x74(0x4)
};

// Object: Class MFNPCAI.NPCAIPropertyComponent_Damage
// Size: 0x78 (Inherited: 0x38)
struct UNPCAIPropertyComponent_Damage : UNPCAIPropertyComponent
{
	DEFINE_UE_CLASS_HELPERS(UNPCAIPropertyComponent_Damage, "NPCAIPropertyComponent_Damage")

	bool DamageLimitEnabledForAIModifier; // 0x38(0x1)
	bool DamageLimitEnabledForAIModifierFlag; // 0x39(0x1)
	uint8_t Pad_0x3A[0x2]; // 0x3A(0x2)
	float DamageScaleModifier; // 0x3C(0x4)
	float DamageLimitModifier; // 0x40(0x4)
	float DamageLimitTimeModifier; // 0x44(0x4)
	float DamageLimitPercentageModifier; // 0x48(0x4)
	float DamageNoZeroHPValueModifier; // 0x4C(0x4)
	bool DamageNoZeroHPPartsModifierIsChanged; // 0x50(0x1)
	uint8_t Pad_0x51[0x7]; // 0x51(0x7)
	struct TArray<EAIBodyPartType> DamageNoZeroHPPartsModifier; // 0x58(0x10)
	float LocalModifiedBulletsResist; // 0x68(0x4)
	float LocalModifiedProjectilesResist; // 0x6C(0x4)
	float LocalModifiedDotResist; // 0x70(0x4)
	float BulletArmorPenetrationNotHurtModifier; // 0x74(0x4)

	// Object: Function MFNPCAI.NPCAIPropertyComponent_Damage.SetProjectilesResist
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3c96ad0
	// Params: [ Num(1) Size(0x4) ]
	void SetProjectilesResist(float InResist);

	// Object: Function MFNPCAI.NPCAIPropertyComponent_Damage.SetDotResist
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3c969f4
	// Params: [ Num(1) Size(0x4) ]
	void SetDotResist(float InResist);

	// Object: Function MFNPCAI.NPCAIPropertyComponent_Damage.SetDamageScale
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3c970c4
	// Params: [ Num(1) Size(0x4) ]
	void SetDamageScale(float Value);

	// Object: Function MFNPCAI.NPCAIPropertyComponent_Damage.SetDamageNoZeroHPValue
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3c96d48
	// Params: [ Num(1) Size(0x4) ]
	void SetDamageNoZeroHPValue(float Value);

	// Object: Function MFNPCAI.NPCAIPropertyComponent_Damage.SetDamageNoZeroHPParts
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x3c96c88
	// Params: [ Num(1) Size(0x10) ]
	void SetDamageNoZeroHPParts(const struct TArray<EAIBodyPartType>& Parts);

	// Object: Function MFNPCAI.NPCAIPropertyComponent_Damage.SetDamageLimitTime
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3c96e98
	// Params: [ Num(1) Size(0x4) ]
	void SetDamageLimitTime(float Value);

	// Object: Function MFNPCAI.NPCAIPropertyComponent_Damage.SetDamageLimitPercentage
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3c96df0
	// Params: [ Num(1) Size(0x4) ]
	void SetDamageLimitPercentage(float Value);

	// Object: Function MFNPCAI.NPCAIPropertyComponent_Damage.SetDamageLimitEnabledForAI
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3c967f8
	// Params: [ Num(1) Size(0x1) ]
	void SetDamageLimitEnabledForAI(bool InValue);

	// Object: Function MFNPCAI.NPCAIPropertyComponent_Damage.SetDamageLimit
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3c96f40
	// Params: [ Num(1) Size(0x4) ]
	void SetDamageLimit(float Value);

	// Object: Function MFNPCAI.NPCAIPropertyComponent_Damage.SetBulletsResist
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3c96bac
	// Params: [ Num(1) Size(0x4) ]
	void SetBulletsResist(float InResist);

	// Object: Function MFNPCAI.NPCAIPropertyComponent_Damage.SetBulletArmorPenetrationNotHurt
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3c96918
	// Params: [ Num(1) Size(0x4) ]
	void SetBulletArmorPenetrationNotHurt(float Value);

	// Object: Function MFNPCAI.NPCAIPropertyComponent_Damage.SetArmorDamageScale
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3c96fe8
	// Params: [ Num(1) Size(0x4) ]
	void SetArmorDamageScale(float Value);

	// Object: Function MFNPCAI.NPCAIPropertyComponent_Damage.IsInDamageNoZeroHPPart
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x3c96630
	// Params: [ Num(2) Size(0x2) ]
	bool IsInDamageNoZeroHPPart(const EAIBodyPartType& BodyPart);

	// Object: Function MFNPCAI.NPCAIPropertyComponent_Damage.IsDamageLimitEnabledForAI
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3c967c0
	// Params: [ Num(1) Size(0x1) ]
	bool IsDamageLimitEnabledForAI();

	// Object: Function MFNPCAI.NPCAIPropertyComponent_Damage.GetTeamGrenadeHarmEnable
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3c968e0
	// Params: [ Num(1) Size(0x1) ]
	bool GetTeamGrenadeHarmEnable();

	// Object: Function MFNPCAI.NPCAIPropertyComponent_Damage.GetProjectilesResist
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3c96b78
	// Params: [ Num(1) Size(0x4) ]
	float GetProjectilesResist();

	// Object: Function MFNPCAI.NPCAIPropertyComponent_Damage.GetFactionGrenadeHarmEnable
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3c968a8
	// Params: [ Num(1) Size(0x1) ]
	bool GetFactionGrenadeHarmEnable();

	// Object: Function MFNPCAI.NPCAIPropertyComponent_Damage.GetDotResist
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3c96a9c
	// Params: [ Num(1) Size(0x4) ]
	float GetDotResist();

	// Object: Function MFNPCAI.NPCAIPropertyComponent_Damage.GetDamageScale
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3c9716c
	// Params: [ Num(1) Size(0x4) ]
	float GetDamageScale();

	// Object: Function MFNPCAI.NPCAIPropertyComponent_Damage.GetDamageNoZeroHPValue
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3c966f0
	// Params: [ Num(1) Size(0x4) ]
	float GetDamageNoZeroHPValue();

	// Object: Function MFNPCAI.NPCAIPropertyComponent_Damage.GetDamageLimitTime
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3c96758
	// Params: [ Num(1) Size(0x4) ]
	float GetDamageLimitTime();

	// Object: Function MFNPCAI.NPCAIPropertyComponent_Damage.GetDamageLimitPercentage
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3c96724
	// Params: [ Num(1) Size(0x4) ]
	float GetDamageLimitPercentage();

	// Object: Function MFNPCAI.NPCAIPropertyComponent_Damage.GetDamageLimit
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3c9678c
	// Params: [ Num(1) Size(0x4) ]
	int32_t GetDamageLimit();

	// Object: Function MFNPCAI.NPCAIPropertyComponent_Damage.GetDamageBleedExtraProbability
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3c965fc
	// Params: [ Num(1) Size(0x4) ]
	float GetDamageBleedExtraProbability();

	// Object: Function MFNPCAI.NPCAIPropertyComponent_Damage.GetBulletsResist
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3c96c54
	// Params: [ Num(1) Size(0x4) ]
	float GetBulletsResist();

	// Object: Function MFNPCAI.NPCAIPropertyComponent_Damage.GetBulletArmorPenetrationNotHurt
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3c969c0
	// Params: [ Num(1) Size(0x4) ]
	float GetBulletArmorPenetrationNotHurt();

	// Object: Function MFNPCAI.NPCAIPropertyComponent_Damage.GetArmorDamageScale
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3c97090
	// Params: [ Num(1) Size(0x4) ]
	float GetArmorDamageScale();

	// Object: Function MFNPCAI.NPCAIPropertyComponent_Damage.GetAIProfileType
	// Flags: [Native|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x3c971a0
	// Params: [ Num(1) Size(0x1) ]
	EAIProfileType GetAIProfileType();
};

// Object: Class MFNPCAI.AIPropertyGlobalProfile
// Size: 0x38 (Inherited: 0x38)
struct UAIPropertyGlobalProfile : UNPCAIPropertyProfile
{
	DEFINE_UE_CLASS_HELPERS(UAIPropertyGlobalProfile, "AIPropertyGlobalProfile")
};

// Object: Class MFNPCAI.NPCAIPropertyComponent_Global
// Size: 0x38 (Inherited: 0x38)
struct UNPCAIPropertyComponent_Global : UNPCAIPropertyComponent
{
	DEFINE_UE_CLASS_HELPERS(UNPCAIPropertyComponent_Global, "NPCAIPropertyComponent_Global")

	// Object: Function MFNPCAI.NPCAIPropertyComponent_Global.GetAIProfileType
	// Flags: [Native|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x3c97250
	// Params: [ Num(1) Size(0x1) ]
	EAIProfileType GetAIProfileType();
};

// Object: Class MFNPCAI.AIPropertyGrenadeProfile
// Size: 0xA0 (Inherited: 0x38)
struct UAIPropertyGrenadeProfile : UNPCAIPropertyProfile
{
	DEFINE_UE_CLASS_HELPERS(UAIPropertyGrenadeProfile, "AIPropertyGrenadeProfile")

	struct FVector UA_THROW_POSITION_OFFSET_STAND; // 0x34(0xC)
	struct FVector UA_THROW_POSITION_OFFSET_STAND_LLEAN; // 0x40(0xC)
	struct FVector UA_THROW_POSITION_OFFSET_STAND_RLEAN; // 0x4C(0xC)
	struct FVector UA_THROW_POSITION_OFFSET_CROUCH; // 0x58(0xC)
	struct FVector UA_THROW_POSITION_OFFSET_CROUCH_LLEAN; // 0x64(0xC)
	struct FVector UA_THROW_POSITION_OFFSET_CROUCH_RLEAN; // 0x70(0xC)
	struct FVector UA_THROW_POSITION_OFFSET_PRONE; // 0x7C(0xC)
	float EXTRA_PROJECTILE_PLAY_EFFECT_TIME; // 0x88(0x4)
	float CLOSE_GRENADE_HIT_DISTANCE; // 0x8C(0x4)
	float COMING_GRENADE_BE_KONW_IF_FALL_IN_DISTANCE; // 0x90(0x4)
	float HOLDING_GRENADE_BE_KONW_IF_IN_DISTANCE; // 0x94(0x4)
	float SELF_HOLDING_GRENADE_PROBABILITY; // 0x98(0x4)
};

// Object: Class MFNPCAI.NPCAIPropertyComponent_Grenade
// Size: 0x38 (Inherited: 0x38)
struct UNPCAIPropertyComponent_Grenade : UNPCAIPropertyComponent
{
	DEFINE_UE_CLASS_HELPERS(UNPCAIPropertyComponent_Grenade, "NPCAIPropertyComponent_Grenade")

	// Object: Function MFNPCAI.NPCAIPropertyComponent_Grenade.GetUaThrowPositionOffsetByPosture
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3c973a4
	// Params: [ Num(4) Size(0x1C) ]
	struct FVector GetUaThrowPositionOffsetByPosture(EAIPose PoseType, EAILeanType LeanType, const struct FRotator& Rotator);

	// Object: Function MFNPCAI.NPCAIPropertyComponent_Grenade.GetUaThrowPositionOffset
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3c974e0
	// Params: [ Num(2) Size(0x18) ]
	struct FVector GetUaThrowPositionOffset(const struct FRotator& Rotator);

	// Object: Function MFNPCAI.NPCAIPropertyComponent_Grenade.GetSelfHoldingGrenadeProbability
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3c972d4
	// Params: [ Num(1) Size(0x4) ]
	float GetSelfHoldingGrenadeProbability();

	// Object: Function MFNPCAI.NPCAIPropertyComponent_Grenade.GetHoldingGrenadeBeKonwIfInDistance
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3c97308
	// Params: [ Num(1) Size(0x4) ]
	float GetHoldingGrenadeBeKonwIfInDistance();

	// Object: Function MFNPCAI.NPCAIPropertyComponent_Grenade.GetExtraProjectilePlayEffectTime
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3c972a0
	// Params: [ Num(1) Size(0x4) ]
	float GetExtraProjectilePlayEffectTime();

	// Object: Function MFNPCAI.NPCAIPropertyComponent_Grenade.GetComingGrenadeBeKonwIfFallInDistance
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3c9733c
	// Params: [ Num(1) Size(0x4) ]
	float GetComingGrenadeBeKonwIfFallInDistance();

	// Object: Function MFNPCAI.NPCAIPropertyComponent_Grenade.GetCloseGrenadeHitDistance
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3c97370
	// Params: [ Num(1) Size(0x4) ]
	float GetCloseGrenadeHitDistance();

	// Object: Function MFNPCAI.NPCAIPropertyComponent_Grenade.GetAIProfileType
	// Flags: [Native|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x3c9759c
	// Params: [ Num(1) Size(0x1) ]
	EAIProfileType GetAIProfileType();
};

// Object: Class MFNPCAI.AIPropertyHealthProfile
// Size: 0x70 (Inherited: 0x38)
struct UAIPropertyHealthProfile : UNPCAIPropertyProfile
{
	DEFINE_UE_CLASS_HELPERS(UAIPropertyHealthProfile, "AIPropertyHealthProfile")

	float HeadEnduranceMax; // 0x34(0x4)
	float ChestEnduranceMax; // 0x38(0x4)
	float StomachEnduranceMax; // 0x3C(0x4)
	float LeftArmEnduranceMax; // 0x40(0x4)
	float RightArmEnduranceMax; // 0x44(0x4)
	float LeftLegEnduranceMax; // 0x48(0x4)
	float RightLegEnduranceMax; // 0x4C(0x4)
	float MaxHealthAdjustment; // 0x50(0x4)
	bool bEnableDBNO; // 0x54(0x1)
	float DangerCoefOfDBNO; // 0x58(0x4)
	uint8_t Pad_0x5D[0x3]; // 0x5D(0x3)
	struct TArray<struct FAIPerkInfos> Perks; // 0x60(0x10)
};

// Object: Class MFNPCAI.NPCAIPropertyComponent_Health
// Size: 0x50 (Inherited: 0x38)
struct UNPCAIPropertyComponent_Health : UNPCAIPropertyComponent
{
	DEFINE_UE_CLASS_HELPERS(UNPCAIPropertyComponent_Health, "NPCAIPropertyComponent_Health")

	struct TArray<int32_t> DefaultPerks; // 0x38(0x10)
	int32_t RandomPerkIndex; // 0x48(0x4)
	uint8_t Pad_0x4C[0x4]; // 0x4C(0x4)

	// Object: Function MFNPCAI.NPCAIPropertyComponent_Health.SetEnableDBNO
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3c976c8
	// Params: [ Num(1) Size(0x1) ]
	void SetEnableDBNO(bool InEnabled);

	// Object: Function MFNPCAI.NPCAIPropertyComponent_Health.GetStomachEnduranceMax
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3c978b4
	// Params: [ Num(1) Size(0x4) ]
	float GetStomachEnduranceMax();

	// Object: Function MFNPCAI.NPCAIPropertyComponent_Health.GetRightLegEnduranceMax
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3c977e4
	// Params: [ Num(1) Size(0x4) ]
	float GetRightLegEnduranceMax();

	// Object: Function MFNPCAI.NPCAIPropertyComponent_Health.GetRightArmEnduranceMax
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3c9784c
	// Params: [ Num(1) Size(0x4) ]
	float GetRightArmEnduranceMax();

	// Object: Function MFNPCAI.NPCAIPropertyComponent_Health.GetRandomPerks
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3c975f8
	// Params: [ Num(1) Size(0x10) ]
	struct TArray<int32_t> GetRandomPerks();

	// Object: Function MFNPCAI.NPCAIPropertyComponent_Health.GetMaxHealthAdjustment
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3c977b0
	// Params: [ Num(1) Size(0x4) ]
	float GetMaxHealthAdjustment();

	// Object: Function MFNPCAI.NPCAIPropertyComponent_Health.GetLeftLegEnduranceMax
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3c97818
	// Params: [ Num(1) Size(0x4) ]
	float GetLeftLegEnduranceMax();

	// Object: Function MFNPCAI.NPCAIPropertyComponent_Health.GetLeftArmEnduranceMax
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3c97880
	// Params: [ Num(1) Size(0x4) ]
	float GetLeftArmEnduranceMax();

	// Object: Function MFNPCAI.NPCAIPropertyComponent_Health.GetHeadEnduranceMax
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3c9791c
	// Params: [ Num(1) Size(0x4) ]
	float GetHeadEnduranceMax();

	// Object: Function MFNPCAI.NPCAIPropertyComponent_Health.GetEnableDBNO
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3c97778
	// Params: [ Num(1) Size(0x1) ]
	bool GetEnableDBNO();

	// Object: Function MFNPCAI.NPCAIPropertyComponent_Health.GetDangerCoefOfDBNO
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3c97694
	// Params: [ Num(1) Size(0x4) ]
	float GetDangerCoefOfDBNO();

	// Object: Function MFNPCAI.NPCAIPropertyComponent_Health.GetChestEnduranceMax
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3c978e8
	// Params: [ Num(1) Size(0x4) ]
	float GetChestEnduranceMax();

	// Object: Function MFNPCAI.NPCAIPropertyComponent_Health.GetAIProfileType
	// Flags: [Native|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x3c97950
	// Params: [ Num(1) Size(0x1) ]
	EAIProfileType GetAIProfileType();
};

// Object: Class MFNPCAI.AIPropertyHearingProfile
// Size: 0xE0 (Inherited: 0x38)
struct UAIPropertyHearingProfile : UNPCAIPropertyProfile
{
	DEFINE_UE_CLASS_HELPERS(UAIPropertyHearingProfile, "AIPropertyHearingProfile")

	float HearingSenseRange; // 0x34(0x4)
	bool AUTO_BE_ENEMY_IF_CREATE_DANAGE_NOISE; // 0x38(0x1)
	bool bShouldHearOtherAINoise; // 0x39(0x1)
	float NOISE_POWER_SPRINT; // 0x3C(0x4)
	float NOISE_POWER_PRONE; // 0x40(0x4)
	float NOISE_POWER_CROUCH; // 0x44(0x4)
	float NOISE_POWER_WALK; // 0x48(0x4)
	float NOISE_POWER_SLIENT_WALK; // 0x4C(0x4)
	float NOISE_POWER_SLIENT_CROUCH; // 0x50(0x4)
	float NOISE_POWER_GUN_FIRE; // 0x54(0x4)
	float NOISE_POWER_SILENCED_FIRE; // 0x58(0x4)
	float NOISE_POWER_DOOR_OPEN; // 0x5C(0x4)
	float NOISE_POWER_DOOR_WRECK; // 0x60(0x4)
	float NOISE_POWER_GRENADE_EXPLOSIVE; // 0x64(0x4)
	float NOISE_POWER_FOOT_STEP_SOUNDER; // 0x68(0x4)
	float NOISE_POWER_VEHICLE_HORN; // 0x6C(0x4)
	float POWER_DANGER; // 0x70(0x4)
	float HEARING_POWER_COEF; // 0x74(0x4)
	float FOOT_STEP_FAR_DIST; // 0x78(0x4)
	float GUN_FAR_DIST; // 0x7C(0x4)
	float GUN_HIT_CLOSE_DIST; // 0x80(0x4)
	float GUN_BULLET_TRACK_FROM_ME_RADIUS; // 0x84(0x4)
	float GUN_BULLET_TRACK_CHECK_IN_FIRE_DISTANCE; // 0x88(0x4)
	float VEHICLE_DIST_THRESHOLD; // 0x8C(0x4)
	struct UCurveFloat* VEHICLE_NOISE_POWER_CURVE; // 0x90(0x8)
	float VEHICLE_MOVE_SPEEDKPH_FATAL_POINT_THRESHOLD; // 0x98(0x4)
	float VEHICLE_MOVE_RUSH_ME_RADIUS; // 0x9C(0x4)
	float VEHICLE_CHECK_RUSH_ME_TIME_INTERVAL; // 0xA0(0x4)
	float VEHICLE_DISTANCE_FATAL_POINT_THRESHOLD; // 0xA4(0x4)
	float COEF_FOOTSTEP_SUSPECTED_POINT_OFFSET; // 0xA8(0x4)
	float COEF_GUN_SUSPECTED_POINT_OFFSET; // 0xAC(0x4)
	float COEF_SILENT_GUN_SUSPECTED_POINT_OFFSET; // 0xB0(0x4)
	float SUSPECTED_POINT_ACCURACY_INCREASE_GAP_TIME; // 0xB4(0x4)
	float SUSPECTED_POINT_ACCURACY_DAMPING_GAP_TIME; // 0xB8(0x4)
	int32_t SUSPECTED_POINT_ACCURACY_MAX_NUM; // 0xBC(0x4)
	float SUSPECTED_POINT_POS_UPDATE_INTERVAL; // 0xC0(0x4)
	float BetrayRadiusDirectForShooter; // 0xC4(0x4)
	float BetrayRadiusDirectForTaker; // 0xC8(0x4)
	float BetrayRadiusDirectZ; // 0xCC(0x4)
	float BetrayRadiusSightForShooter; // 0xD0(0x4)
	float BetrayRadiusSightForTaker; // 0xD4(0x4)
	float BetrayTeammatePerceptionRadius; // 0xD8(0x4)
	float BetrayAITeammatePerceptionRadius; // 0xDC(0x4)
};

// Object: Class MFNPCAI.NPCAIPropertyComponent_Hearing
// Size: 0x40 (Inherited: 0x38)
struct UNPCAIPropertyComponent_Hearing : UNPCAIPropertyComponent
{
	DEFINE_UE_CLASS_HELPERS(UNPCAIPropertyComponent_Hearing, "NPCAIPropertyComponent_Hearing")

	bool bAutobeEnemyIfCreateDanageNoiseModifier; // 0x38(0x1)
	bool bAutobeEnemyIfCreateDanageNoiseModifier_IsChanged; // 0x39(0x1)
	uint8_t Pad_0x3A[0x6]; // 0x3A(0x6)

	// Object: Function MFNPCAI.NPCAIPropertyComponent_Hearing.SetAutoBeEnemyIfCreateDanageNoise
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3c9826c
	// Params: [ Num(1) Size(0x1) ]
	void SetAutoBeEnemyIfCreateDanageNoise(bool bCanAutoBeEnemy);

	// Object: Function MFNPCAI.NPCAIPropertyComponent_Hearing.GetVehicleMoveSpeedKPHFatalPointThreshold
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3c97d44
	// Params: [ Num(1) Size(0x4) ]
	float GetVehicleMoveSpeedKPHFatalPointThreshold();

	// Object: Function MFNPCAI.NPCAIPropertyComponent_Hearing.GetVehicleMoveRushMeRadius
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3c97d10
	// Params: [ Num(1) Size(0x4) ]
	float GetVehicleMoveRushMeRadius();

	// Object: Function MFNPCAI.NPCAIPropertyComponent_Hearing.GetVehicleMoveRushMeCheckTimeInterval
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3c97cdc
	// Params: [ Num(1) Size(0x4) ]
	float GetVehicleMoveRushMeCheckTimeInterval();

	// Object: Function MFNPCAI.NPCAIPropertyComponent_Hearing.GetVehicleDistThreshold
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3c97d78
	// Params: [ Num(1) Size(0x4) ]
	float GetVehicleDistThreshold();

	// Object: Function MFNPCAI.NPCAIPropertyComponent_Hearing.GetVehicleDistanceFatalPointThreshold
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3c97ca8
	// Params: [ Num(1) Size(0x4) ]
	float GetVehicleDistanceFatalPointThreshold();

	// Object: Function MFNPCAI.NPCAIPropertyComponent_Hearing.GetSuspectedPointPosUpdateInterval
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3c97b3c
	// Params: [ Num(1) Size(0x4) ]
	float GetSuspectedPointPosUpdateInterval();

	// Object: Function MFNPCAI.NPCAIPropertyComponent_Hearing.GetSuspectedPointAccuracyMaxNum
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3c97b70
	// Params: [ Num(1) Size(0x4) ]
	int32_t GetSuspectedPointAccuracyMaxNum();

	// Object: Function MFNPCAI.NPCAIPropertyComponent_Hearing.GetSuspectedPointAccuracyIncreaseGapTime
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3c97bd8
	// Params: [ Num(1) Size(0x4) ]
	float GetSuspectedPointAccuracyIncreaseGapTime();

	// Object: Function MFNPCAI.NPCAIPropertyComponent_Hearing.GetSuspectedPointAccuracyDampingGapTime
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3c97ba4
	// Params: [ Num(1) Size(0x4) ]
	float GetSuspectedPointAccuracyDampingGapTime();

	// Object: Function MFNPCAI.NPCAIPropertyComponent_Hearing.GetPowerDanger
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3c97ee4
	// Params: [ Num(1) Size(0x4) ]
	float GetPowerDanger();

	// Object: Function MFNPCAI.NPCAIPropertyComponent_Hearing.GetNoisePowerWalk
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3c9819c
	// Params: [ Num(1) Size(0x4) ]
	float GetNoisePowerWalk();

	// Object: Function MFNPCAI.NPCAIPropertyComponent_Hearing.GetNoisePowerVehicleHorn
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3c97f18
	// Params: [ Num(1) Size(0x4) ]
	float GetNoisePowerVehicleHorn();

	// Object: Function MFNPCAI.NPCAIPropertyComponent_Hearing.GetNoisePowerVehicle
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3c97f4c
	// Params: [ Num(2) Size(0x8) ]
	float GetNoisePowerVehicle(float SpeedKPH);

	// Object: Function MFNPCAI.NPCAIPropertyComponent_Hearing.GetNoisePowerSprint
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3c98238
	// Params: [ Num(1) Size(0x4) ]
	float GetNoisePowerSprint();

	// Object: Function MFNPCAI.NPCAIPropertyComponent_Hearing.GetNoisePowerSlientWalk
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3c98168
	// Params: [ Num(1) Size(0x4) ]
	float GetNoisePowerSlientWalk();

	// Object: Function MFNPCAI.NPCAIPropertyComponent_Hearing.GetNoisePowerSlientCrouch
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3c98134
	// Params: [ Num(1) Size(0x4) ]
	float GetNoisePowerSlientCrouch();

	// Object: Function MFNPCAI.NPCAIPropertyComponent_Hearing.GetNoisePowerSilencedFire
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3c980cc
	// Params: [ Num(1) Size(0x4) ]
	float GetNoisePowerSilencedFire();

	// Object: Function MFNPCAI.NPCAIPropertyComponent_Hearing.GetNoisePowerProne
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3c98204
	// Params: [ Num(1) Size(0x4) ]
	float GetNoisePowerProne();

	// Object: Function MFNPCAI.NPCAIPropertyComponent_Hearing.GetNoisePowerGunFire
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3c98100
	// Params: [ Num(1) Size(0x4) ]
	float GetNoisePowerGunFire();

	// Object: Function MFNPCAI.NPCAIPropertyComponent_Hearing.GetNoisePowerGrenadeExplosive
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3c98030
	// Params: [ Num(1) Size(0x4) ]
	float GetNoisePowerGrenadeExplosive();

	// Object: Function MFNPCAI.NPCAIPropertyComponent_Hearing.GetNoisePowerFootStepSounder
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3c97ffc
	// Params: [ Num(1) Size(0x4) ]
	float GetNoisePowerFootStepSounder();

	// Object: Function MFNPCAI.NPCAIPropertyComponent_Hearing.GetNoisePowerDoorWreck
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3c98064
	// Params: [ Num(1) Size(0x4) ]
	float GetNoisePowerDoorWreck();

	// Object: Function MFNPCAI.NPCAIPropertyComponent_Hearing.GetNoisePowerDoorOpen
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3c98098
	// Params: [ Num(1) Size(0x4) ]
	float GetNoisePowerDoorOpen();

	// Object: Function MFNPCAI.NPCAIPropertyComponent_Hearing.GetNoisePowerCrouch
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3c981d0
	// Params: [ Num(1) Size(0x4) ]
	float GetNoisePowerCrouch();

	// Object: Function MFNPCAI.NPCAIPropertyComponent_Hearing.GetIsShouldHearOtherAINoise
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3c98354
	// Params: [ Num(1) Size(0x1) ]
	bool GetIsShouldHearOtherAINoise();

	// Object: Function MFNPCAI.NPCAIPropertyComponent_Hearing.GetHearingSenseRange
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3c9838c
	// Params: [ Num(1) Size(0x4) ]
	float GetHearingSenseRange();

	// Object: Function MFNPCAI.NPCAIPropertyComponent_Hearing.GetHearingPowerCoef
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3c97eb0
	// Params: [ Num(1) Size(0x4) ]
	float GetHearingPowerCoef();

	// Object: Function MFNPCAI.NPCAIPropertyComponent_Hearing.GetGunHitCloseDist
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3c97e14
	// Params: [ Num(1) Size(0x4) ]
	float GetGunHitCloseDist();

	// Object: Function MFNPCAI.NPCAIPropertyComponent_Hearing.GetGunFarDist
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3c97e48
	// Params: [ Num(1) Size(0x4) ]
	float GetGunFarDist();

	// Object: Function MFNPCAI.NPCAIPropertyComponent_Hearing.GetGunBulletTrackFromMeRadius
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3c97de0
	// Params: [ Num(1) Size(0x4) ]
	float GetGunBulletTrackFromMeRadius();

	// Object: Function MFNPCAI.NPCAIPropertyComponent_Hearing.GetGunBulletTrackCheckInFireDistance
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3c97dac
	// Params: [ Num(1) Size(0x4) ]
	float GetGunBulletTrackCheckInFireDistance();

	// Object: Function MFNPCAI.NPCAIPropertyComponent_Hearing.GetFootStepFarDist
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3c97e7c
	// Params: [ Num(1) Size(0x4) ]
	float GetFootStepFarDist();

	// Object: Function MFNPCAI.NPCAIPropertyComponent_Hearing.GetCoefSilentGunSuspectedPointOffset
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3c97c0c
	// Params: [ Num(1) Size(0x4) ]
	float GetCoefSilentGunSuspectedPointOffset();

	// Object: Function MFNPCAI.NPCAIPropertyComponent_Hearing.GetCoefGunSuspectedPointOffset
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3c97c40
	// Params: [ Num(1) Size(0x4) ]
	float GetCoefGunSuspectedPointOffset();

	// Object: Function MFNPCAI.NPCAIPropertyComponent_Hearing.GetCoefFootStepSuspectedPointOffset
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3c97c74
	// Params: [ Num(1) Size(0x4) ]
	float GetCoefFootStepSuspectedPointOffset();

	// Object: Function MFNPCAI.NPCAIPropertyComponent_Hearing.GetBetrayTeammatePerceptionRadius
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3c97a04
	// Params: [ Num(1) Size(0x4) ]
	float GetBetrayTeammatePerceptionRadius();

	// Object: Function MFNPCAI.NPCAIPropertyComponent_Hearing.GetBetrayRadiusSightForTaker
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3c97a38
	// Params: [ Num(1) Size(0x4) ]
	float GetBetrayRadiusSightForTaker();

	// Object: Function MFNPCAI.NPCAIPropertyComponent_Hearing.GetBetrayRadiusSightForShooter
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3c97a6c
	// Params: [ Num(1) Size(0x4) ]
	float GetBetrayRadiusSightForShooter();

	// Object: Function MFNPCAI.NPCAIPropertyComponent_Hearing.GetBetrayRadiusDirectZ
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3c97aa0
	// Params: [ Num(1) Size(0x4) ]
	float GetBetrayRadiusDirectZ();

	// Object: Function MFNPCAI.NPCAIPropertyComponent_Hearing.GetBetrayRadiusDirectForTaker
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3c97ad4
	// Params: [ Num(1) Size(0x4) ]
	float GetBetrayRadiusDirectForTaker();

	// Object: Function MFNPCAI.NPCAIPropertyComponent_Hearing.GetBetrayRadiusDirectForShooter
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3c97b08
	// Params: [ Num(1) Size(0x4) ]
	float GetBetrayRadiusDirectForShooter();

	// Object: Function MFNPCAI.NPCAIPropertyComponent_Hearing.GetBetrayAITeammatePerceptionRadius
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3c979d0
	// Params: [ Num(1) Size(0x4) ]
	float GetBetrayAITeammatePerceptionRadius();

	// Object: Function MFNPCAI.NPCAIPropertyComponent_Hearing.GetAutoBeEnemyIfCreateDanageNoise
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3c9831c
	// Params: [ Num(1) Size(0x1) ]
	bool GetAutoBeEnemyIfCreateDanageNoise();

	// Object: Function MFNPCAI.NPCAIPropertyComponent_Hearing.GetAIProfileType
	// Flags: [Native|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x3c983c0
	// Params: [ Num(1) Size(0x1) ]
	EAIProfileType GetAIProfileType();
};

// Object: Class MFNPCAI.AIPropertyLayProfile
// Size: 0x40 (Inherited: 0x38)
struct UAIPropertyLayProfile : UNPCAIPropertyProfile
{
	DEFINE_UE_CLASS_HELPERS(UAIPropertyLayProfile, "AIPropertyLayProfile")

	float ProneCooldown; // 0x34(0x4)
	float EndProneCooldown; // 0x38(0x4)
	float StandUpCooldown; // 0x3C(0x4)
};

// Object: Class MFNPCAI.NPCAIPropertyComponent_Lay
// Size: 0x38 (Inherited: 0x38)
struct UNPCAIPropertyComponent_Lay : UNPCAIPropertyComponent
{
	DEFINE_UE_CLASS_HELPERS(UNPCAIPropertyComponent_Lay, "NPCAIPropertyComponent_Lay")

	// Object: Function MFNPCAI.NPCAIPropertyComponent_Lay.GetStandUpCooldown
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3c9a754
	// Params: [ Num(1) Size(0x4) ]
	float GetStandUpCooldown();

	// Object: Function MFNPCAI.NPCAIPropertyComponent_Lay.GetProneCooldown
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3c9a7bc
	// Params: [ Num(1) Size(0x4) ]
	float GetProneCooldown();

	// Object: Function MFNPCAI.NPCAIPropertyComponent_Lay.GetEndProneCooldown
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3c9a788
	// Params: [ Num(1) Size(0x4) ]
	float GetEndProneCooldown();

	// Object: Function MFNPCAI.NPCAIPropertyComponent_Lay.GetAIProfileType
	// Flags: [Native|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x3c9a7f0
	// Params: [ Num(1) Size(0x1) ]
	EAIProfileType GetAIProfileType();
};

// Object: Class MFNPCAI.AIPropertyLookProfile
// Size: 0x168 (Inherited: 0x38)
struct UAIPropertyLookProfile : UNPCAIPropertyProfile
{
	DEFINE_UE_CLASS_HELPERS(UAIPropertyLookProfile, "AIPropertyLookProfile")

	ENPCAIPriority SIGHT_PRIORITY; // 0x31(0x1)
	struct TArray<struct FAISenseSightNormal> VISION_NORMAL; // 0x38(0x10)
	struct TArray<struct FAISenseDrone> DroneSenses; // 0x48(0x10)
	EAIBodyPartType SingleBodyPartForAICheckSight; // 0x58(0x1)
	EAIBodyPartType SingleBodyPartForPlayerCheckSight; // 0x59(0x1)
	uint8_t Pad_0x5B[0x1]; // 0x5B(0x1)
	float VISIBLE_ANG_NORMAL; // 0x5C(0x4)
	float NORMAL_VISION_RADIUS; // 0x60(0x4)
	float NORMAL_VISION_RADIUS_LOST; // 0x64(0x4)
	float SightCheckIntervalToPlayer; // 0x68(0x4)
	float SightCheckIntervalToOtherAI; // 0x6C(0x4)
	float SightCheckIntervalToDrone; // 0x70(0x4)
	float SightCheckIntervalIfTargetVisible; // 0x74(0x4)
	float FOG_DENSITY_AFFECT_LIMIT; // 0x78(0x4)
	uint8_t Pad_0x7C[0x4]; // 0x7C(0x4)
	struct UCurveVector* FOG_VISION_CURVE; // 0x80(0x8)
	float FOG_DELAY_SEE_TIME_MAX; // 0x88(0x4)
	float FOG_SHOT_IN_TIME_CAN_IGNORE_FOGVISION; // 0x8C(0x4)
	float SMOKE_SIGHT_IGNORE_DISTANCE; // 0x90(0x4)
	float GRASS_SIGHT_IGNORE_DISTANCE; // 0x94(0x4)
	float LANDSCAPE_GRASS_SIGHT_IGNORE_ANGLE; // 0x98(0x4)
	float GRASS_SIGHT_BLOCK_POWER; // 0x9C(0x4)
	float GRASS_SIGHT_BLOCK_DENSITY100; // 0xA0(0x4)
	float RAINY_SIGHT_RADIUS_MIN; // 0xA4(0x4)
	float RAINY_SIGHT_RADIUS_MAX; // 0xA8(0x4)
	float INGORE_NOLIGHT_RADIUS; // 0xAC(0x4)
	float DIST_NORMAL_SUSPECTED_POINT_INTERVAL; // 0xB0(0x4)
	float DIST_DANGER_SUSPECTED_POINT_INTERVAL; // 0xB4(0x4)
	float FAR_DISTANCE; // 0xB8(0x4)
	float MIDDLE_DIST; // 0xBC(0x4)
	float CLOSE_DIST; // 0xC0(0x4)
	float InvisibleDelayTime; // 0xC4(0x4)
	float GOAL_NEED_TO_CALCULATE_FIRST_APPEAR_DISTANCE; // 0xC8(0x4)
	float GOAL_FIRST_APPEAR_CALCULATE_COEF; // 0xCC(0x4)
	float GOAL_FIRST_APPEAR_ANGLE_CALCULATE_COEF; // 0xD0(0x4)
	float GOAL_FIRST_APPEAR_MIN_TIME; // 0xD4(0x4)
	float GOAL_FIRST_APPEAR_MAX_TIME; // 0xD8(0x4)
	float TIME_CAN_SEE_ENEMY_IF_BEEN_SHOOT; // 0xDC(0x4)
	float TIME_CAN_SEE_ENEMY_IF_FLASH_LIGHT; // 0xE0(0x4)
	uint8_t Pad_0xE4[0x4]; // 0xE4(0x4)
	struct UCurveFloat* FLASH_LIGHT_BURN_LOSS_SIGHT_CURVE; // 0xE8(0x8)
	float WEAKEN_VISION_RADIUS_SCALE_WHILE_ROTATE; // 0xF0(0x4)
	float WEAKEN_VISION_RADIUS_SCALE_MAX_WHILE_ROTATE; // 0xF4(0x4)
	float RECOVER_VISION_RADIUS_SPEED_AFTER_WEAKEN; // 0xF8(0x4)
	float DISTANCE_CHECK_IF_OUTSIDE_SIGHT_PIE; // 0xFC(0x4)
	float TIME_CREATE_SUSPECTED_POINT_CHECK_IF_OUTSIDE_SIGHT_PIE; // 0x100(0x4)
	float INTERVAL_CHECK_IF_OUTSIDE_SIGHT_PIE; // 0x104(0x4)
	struct FVector LOOK_POSITION_OFFSET_STAND; // 0x108(0xC)
	struct FVector LOOK_POSITION_OFFSET_STAND_LLEAN; // 0x114(0xC)
	struct FVector LOOK_POSITION_OFFSET_STAND_RLEAN; // 0x120(0xC)
	struct FVector LOOK_POSITION_OFFSET_CROUCH; // 0x12C(0xC)
	struct FVector LOOK_POSITION_OFFSET_CROUCH_LLEAN; // 0x138(0xC)
	struct FVector LOOK_POSITION_OFFSET_CROUCH_RLEAN; // 0x144(0xC)
	struct FVector LOOK_POSITION_OFFSET_PRONE; // 0x150(0xC)
	struct FVector LEAN_CHECK_BLOCK_WALL_OFFSET; // 0x15C(0xC)
};

// Object: Class MFNPCAI.NPCAIPropertyComponent_Look
// Size: 0x40 (Inherited: 0x38)
struct UNPCAIPropertyComponent_Look : UNPCAIPropertyComponent
{
	DEFINE_UE_CLASS_HELPERS(UNPCAIPropertyComponent_Look, "NPCAIPropertyComponent_Look")

	float SightCheckIntervalToOtherAI_Modifier; // 0x38(0x4)
	uint8_t Pad_0x3C[0x4]; // 0x3C(0x4)

	// Object: Function MFNPCAI.NPCAIPropertyComponent_Look.SetSightCheckIntervalToOtherAI
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3c9b60c
	// Params: [ Num(1) Size(0x4) ]
	void SetSightCheckIntervalToOtherAI(float InValue);

	// Object: Function MFNPCAI.NPCAIPropertyComponent_Look.GetWeakenVisionRadiusScaleWhileRotate
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3c9aed4
	// Params: [ Num(1) Size(0x4) ]
	float GetWeakenVisionRadiusScaleWhileRotate();

	// Object: Function MFNPCAI.NPCAIPropertyComponent_Look.GetWeakenVisionRadiusScaleMaxWhileRotate
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3c9aea0
	// Params: [ Num(1) Size(0x4) ]
	float GetWeakenVisionRadiusScaleMaxWhileRotate();

	// Object: Function MFNPCAI.NPCAIPropertyComponent_Look.GetVisibleAngNormal
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3c9b7b8
	// Params: [ Num(1) Size(0x4) ]
	float GetVisibleAngNormal();

	// Object: Function MFNPCAI.NPCAIPropertyComponent_Look.GetVisibleAngCosNormal
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3c9b7ec
	// Params: [ Num(3) Size(0xC) ]
	float GetVisibleAngCosNormal(float DistanceSqr, bool bLastInSight);

	// Object: Function MFNPCAI.NPCAIPropertyComponent_Look.GetTimeCreateSuspectedPointCheckIfOutSideSightPIE
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3c9ae04
	// Params: [ Num(1) Size(0x4) ]
	float GetTimeCreateSuspectedPointCheckIfOutSideSightPIE();

	// Object: Function MFNPCAI.NPCAIPropertyComponent_Look.GetTimeCanSeeEnemyIfFlashLight
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3c9afb8
	// Params: [ Num(1) Size(0x4) ]
	float GetTimeCanSeeEnemyIfFlashLight();

	// Object: Function MFNPCAI.NPCAIPropertyComponent_Look.GetTimeCanSeeEnemyIfBeenShoot
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3c9afec
	// Params: [ Num(1) Size(0x4) ]
	float GetTimeCanSeeEnemyIfBeenShoot();

	// Object: Function MFNPCAI.NPCAIPropertyComponent_Look.GetSmokeSightIgnoreDistance
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3c9b3c8
	// Params: [ Num(1) Size(0x4) ]
	float GetSmokeSightIgnoreDistance();

	// Object: Function MFNPCAI.NPCAIPropertyComponent_Look.GetSingleBodyPartForPlayerCheckSight
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3c9b8e4
	// Params: [ Num(1) Size(0x1) ]
	EAIBodyPartType GetSingleBodyPartForPlayerCheckSight();

	// Object: Function MFNPCAI.NPCAIPropertyComponent_Look.GetSingleBodyPartForAICheckSight
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3c9b918
	// Params: [ Num(1) Size(0x1) ]
	EAIBodyPartType GetSingleBodyPartForAICheckSight();

	// Object: Function MFNPCAI.NPCAIPropertyComponent_Look.GetSightPriority
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3c9b94c
	// Params: [ Num(1) Size(0x1) ]
	ENPCAIPriority GetSightPriority();

	// Object: Function MFNPCAI.NPCAIPropertyComponent_Look.GetSightCheckIntervalToPlayer
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3c9b71c
	// Params: [ Num(1) Size(0x4) ]
	float GetSightCheckIntervalToPlayer();

	// Object: Function MFNPCAI.NPCAIPropertyComponent_Look.GetSightCheckIntervalToOtherAI
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3c9b6e8
	// Params: [ Num(1) Size(0x4) ]
	float GetSightCheckIntervalToOtherAI();

	// Object: Function MFNPCAI.NPCAIPropertyComponent_Look.GetSightCheckIntervalToDrone
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3c9b6b4
	// Params: [ Num(1) Size(0x4) ]
	float GetSightCheckIntervalToDrone();

	// Object: Function MFNPCAI.NPCAIPropertyComponent_Look.GetSightCheckIntervalIfTargetVisible
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3c9b5d8
	// Params: [ Num(1) Size(0x4) ]
	float GetSightCheckIntervalIfTargetVisible();

	// Object: Function MFNPCAI.NPCAIPropertyComponent_Look.GetRecoverVisionRadiusSpeedAfterWeaken
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3c9ae6c
	// Params: [ Num(1) Size(0x4) ]
	float GetRecoverVisionRadiusSpeedAfterWeaken();

	// Object: Function MFNPCAI.NPCAIPropertyComponent_Look.GetRainySightRadiusMin
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3c9b2c4
	// Params: [ Num(1) Size(0x4) ]
	float GetRainySightRadiusMin();

	// Object: Function MFNPCAI.NPCAIPropertyComponent_Look.GetRainySightRadiusMax
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3c9b290
	// Params: [ Num(1) Size(0x4) ]
	float GetRainySightRadiusMax();

	// Object: Function MFNPCAI.NPCAIPropertyComponent_Look.GetNormalVisionRadiusLost
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3c9b750
	// Params: [ Num(1) Size(0x4) ]
	float GetNormalVisionRadiusLost();

	// Object: Function MFNPCAI.NPCAIPropertyComponent_Look.GetNormalVisionRadius
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3c9b784
	// Params: [ Num(1) Size(0x4) ]
	float GetNormalVisionRadius();

	// Object: Function MFNPCAI.NPCAIPropertyComponent_Look.GetMiddleDistance
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3c9b18c
	// Params: [ Num(1) Size(0x4) ]
	float GetMiddleDistance();

	// Object: Function MFNPCAI.NPCAIPropertyComponent_Look.GetLostSightRatioByFlashLightBurn
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3c9af08
	// Params: [ Num(2) Size(0x8) ]
	float GetLostSightRatioByFlashLightBurn(float FlashBurnValue);

	// Object: Function MFNPCAI.NPCAIPropertyComponent_Look.GetLookPositionOffsetByPosture
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3c9aca0
	// Params: [ Num(3) Size(0x10) ]
	struct FVector GetLookPositionOffsetByPosture(EAIPose PoseType, EAILeanType LeanType);

	// Object: Function MFNPCAI.NPCAIPropertyComponent_Look.GetLookPositionOffset
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3c9ad94
	// Params: [ Num(1) Size(0xC) ]
	struct FVector GetLookPositionOffset();

	// Object: Function MFNPCAI.NPCAIPropertyComponent_Look.GetLeanCheckBlockWallOffset
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3c9ac64
	// Params: [ Num(1) Size(0xC) ]
	struct FVector GetLeanCheckBlockWallOffset();

	// Object: Function MFNPCAI.NPCAIPropertyComponent_Look.GetLandscapeGrassSightIgnoreAngle
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3c9b360
	// Params: [ Num(1) Size(0x4) ]
	float GetLandscapeGrassSightIgnoreAngle();

	// Object: Function MFNPCAI.NPCAIPropertyComponent_Look.GetInvisibleDelayTime
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3c9b124
	// Params: [ Num(1) Size(0x4) ]
	float GetInvisibleDelayTime();

	// Object: Function MFNPCAI.NPCAIPropertyComponent_Look.GetIntervalCheckIfOutSideSightPIE
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3c9add0
	// Params: [ Num(1) Size(0x4) ]
	float GetIntervalCheckIfOutSideSightPIE();

	// Object: Function MFNPCAI.NPCAIPropertyComponent_Look.GetIngoreNolightRadius
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3c9b25c
	// Params: [ Num(1) Size(0x4) ]
	float GetIngoreNolightRadius();

	// Object: Function MFNPCAI.NPCAIPropertyComponent_Look.GetGrassSightIgnoreDistance
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3c9b394
	// Params: [ Num(1) Size(0x4) ]
	float GetGrassSightIgnoreDistance();

	// Object: Function MFNPCAI.NPCAIPropertyComponent_Look.GetGrassSightBlockPowner
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3c9b32c
	// Params: [ Num(1) Size(0x4) ]
	float GetGrassSightBlockPowner();

	// Object: Function MFNPCAI.NPCAIPropertyComponent_Look.GetGrassSightBlockDensity100
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3c9b2f8
	// Params: [ Num(1) Size(0x4) ]
	float GetGrassSightBlockDensity100();

	// Object: Function MFNPCAI.NPCAIPropertyComponent_Look.GetGoalNeedToCalculateFirstAppearDistance
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3c9b0f0
	// Params: [ Num(1) Size(0x4) ]
	float GetGoalNeedToCalculateFirstAppearDistance();

	// Object: Function MFNPCAI.NPCAIPropertyComponent_Look.GetGoalFirstAppearMinTime
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3c9b054
	// Params: [ Num(1) Size(0x4) ]
	float GetGoalFirstAppearMinTime();

	// Object: Function MFNPCAI.NPCAIPropertyComponent_Look.GetGoalFirstAppearMaxTime
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3c9b020
	// Params: [ Num(1) Size(0x4) ]
	float GetGoalFirstAppearMaxTime();

	// Object: Function MFNPCAI.NPCAIPropertyComponent_Look.GetGoalFirstAppearCalculateCoef
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3c9b0bc
	// Params: [ Num(1) Size(0x4) ]
	float GetGoalFirstAppearCalculateCoef();

	// Object: Function MFNPCAI.NPCAIPropertyComponent_Look.GetGoalFirstAppearAngleCalculateCoef
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3c9b088
	// Params: [ Num(1) Size(0x4) ]
	float GetGoalFirstAppearAngleCalculateCoef();

	// Object: Function MFNPCAI.NPCAIPropertyComponent_Look.GetFogVisionInfo
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x3c9b464
	// Params: [ Num(3) Size(0xC) ]
	void GetFogVisionInfo(float FogDensity, float& OutFogMin, float& OutFogMax);

	// Object: Function MFNPCAI.NPCAIPropertyComponent_Look.GetFogShotInTimeCanIgnoreFogVision
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3c9b3fc
	// Params: [ Num(1) Size(0x4) ]
	float GetFogShotInTimeCanIgnoreFogVision();

	// Object: Function MFNPCAI.NPCAIPropertyComponent_Look.GetFogDensityAffectLimit
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3c9b5a4
	// Params: [ Num(1) Size(0x4) ]
	float GetFogDensityAffectLimit();

	// Object: Function MFNPCAI.NPCAIPropertyComponent_Look.GetFogDelayTimeToSeeMax
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3c9b430
	// Params: [ Num(1) Size(0x4) ]
	float GetFogDelayTimeToSeeMax();

	// Object: Function MFNPCAI.NPCAIPropertyComponent_Look.GetFarDistance
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3c9b1c0
	// Params: [ Num(1) Size(0x4) ]
	float GetFarDistance();

	// Object: Function MFNPCAI.NPCAIPropertyComponent_Look.GetDroneVisionRadius
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3c9a9a4
	// Params: [ Num(2) Size(0xC) ]
	float GetDroneVisionRadius(int64_t DroneInvItemId);

	// Object: Function MFNPCAI.NPCAIPropertyComponent_Look.GetDroneVisibleRadius180
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3c9abb4
	// Params: [ Num(2) Size(0xC) ]
	float GetDroneVisibleRadius180(int64_t DroneInvItemId);

	// Object: Function MFNPCAI.NPCAIPropertyComponent_Look.GetDroneVisibleAngNormal
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3c9ab04
	// Params: [ Num(2) Size(0xC) ]
	float GetDroneVisibleAngNormal(int64_t DroneInvItemId);

	// Object: Function MFNPCAI.NPCAIPropertyComponent_Look.GetDroneVisibleAngCosNormal
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3c9aa54
	// Params: [ Num(2) Size(0xC) ]
	float GetDroneVisibleAngCosNormal(int64_t DroneInvItemId);

	// Object: Function MFNPCAI.NPCAIPropertyComponent_Look.GetDroneHearRadius
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3c9a8f4
	// Params: [ Num(2) Size(0xC) ]
	float GetDroneHearRadius(int64_t DroneInvItemId);

	// Object: Function MFNPCAI.NPCAIPropertyComponent_Look.GetDistNormalSuspectedPointInterval
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3c9b228
	// Params: [ Num(1) Size(0x4) ]
	float GetDistNormalSuspectedPointInterval();

	// Object: Function MFNPCAI.NPCAIPropertyComponent_Look.GetDistDangerSuspectedPointInterval
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3c9b1f4
	// Params: [ Num(1) Size(0x4) ]
	float GetDistDangerSuspectedPointInterval();

	// Object: Function MFNPCAI.NPCAIPropertyComponent_Look.GetDistanceCheckIfOutSideSightPIE
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3c9ae38
	// Params: [ Num(1) Size(0x4) ]
	float GetDistanceCheckIfOutSideSightPIE();

	// Object: Function MFNPCAI.NPCAIPropertyComponent_Look.GetCloseDistance
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3c9b158
	// Params: [ Num(1) Size(0x4) ]
	float GetCloseDistance();

	// Object: Function MFNPCAI.NPCAIPropertyComponent_Look.GetCanHearDroneNoMove
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3c9a840
	// Params: [ Num(2) Size(0x9) ]
	bool GetCanHearDroneNoMove(int64_t DroneInvItemId);

	// Object: Function MFNPCAI.NPCAIPropertyComponent_Look.GetAIProfileType
	// Flags: [Native|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x3c9b980
	// Params: [ Num(1) Size(0x1) ]
	EAIProfileType GetAIProfileType();
};

// Object: Class MFNPCAI.AIPropertyMindProfile
// Size: 0x80 (Inherited: 0x38)
struct UAIPropertyMindProfile : UNPCAIPropertyProfile
{
	DEFINE_UE_CLASS_HELPERS(UAIPropertyMindProfile, "AIPropertyMindProfile")

	ENPCAIPriority CALCULATE_GOAL_ENEMY_PRIORITY_INTERVAL; // 0x31(0x1)
	float HATRED_VALUE_TO_DIST; // 0x34(0x4)
	float SCORE_TO_DISTANCE_FOR_GOAL_ENEMY; // 0x38(0x4)
	float TIME_OF_HIT_FOR_GOAL_ENEMY; // 0x3C(0x4)
	float SCORE_CUT_OF_HIT_ME_FOR_GOAL_ENEMY; // 0x40(0x4)
	float SCORE_CUT_OF_HIT_ALLY_FOR_GOAL_ENEMY; // 0x44(0x4)
	float SCORE_CUT_OF_ZOOM_WEAPON_FOR_GOAL_ENEMY; // 0x48(0x4)
	float CARE_TARGET_HAS_ZOOM_WEAPON_DSITANCE; // 0x4C(0x4)
	struct TArray<struct FAIMindGoalEnemyAngleMultiple> SCORE_MULTIPLE_FACE_ANGLE_FOR_GOAL_ENEMY; // 0x50(0x10)
	float TIME_NOT_SEE_FOR_GOAL_ENEMY; // 0x60(0x4)
	float TIME_TO_FORGOR_ABOUT_ENEMY_SEC; // 0x64(0x4)
	float TIME_ENEMY_DEAD_PASS_CAN_CONFIRM; // 0x68(0x4)
	float TIME_ENEMY_DEAD_PASS_CAN_DELETE; // 0x6C(0x4)
	int32_t ITEM_CHEAP_PRICE_CAN_DESTORY_WHEN_PICKUP; // 0x70(0x4)
	int32_t ITEM_CHEAP_PRICE_CAN_IGNORE_PICKUP; // 0x74(0x4)
	float NO_REPEAT_QRE_MYSELF_AT_DISTANCE; // 0x78(0x4)
	float NO_REPEAT_QRE_ENEMY_AT_DISTANCE; // 0x7C(0x4)
};

// Object: Class MFNPCAI.NPCAIPropertyComponent_Mind
// Size: 0x38 (Inherited: 0x38)
struct UNPCAIPropertyComponent_Mind : UNPCAIPropertyComponent
{
	DEFINE_UE_CLASS_HELPERS(UNPCAIPropertyComponent_Mind, "NPCAIPropertyComponent_Mind")

	// Object: Function MFNPCAI.NPCAIPropertyComponent_Mind.GetTimeToForgorAboutEnemySec
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3c9bb20
	// Params: [ Num(1) Size(0x4) ]
	float GetTimeToForgorAboutEnemySec();

	// Object: Function MFNPCAI.NPCAIPropertyComponent_Mind.GetTimeOfHitForGoalEnemy
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3c9bd08
	// Params: [ Num(1) Size(0x4) ]
	float GetTimeOfHitForGoalEnemy();

	// Object: Function MFNPCAI.NPCAIPropertyComponent_Mind.GetTimeNotSeeForGoalEnemy
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3c9bb54
	// Params: [ Num(1) Size(0x4) ]
	float GetTimeNotSeeForGoalEnemy();

	// Object: Function MFNPCAI.NPCAIPropertyComponent_Mind.GetTimeEnemyDeadPassCanDelete
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3c9bab8
	// Params: [ Num(1) Size(0x4) ]
	float GetTimeEnemyDeadPassCanDelete();

	// Object: Function MFNPCAI.NPCAIPropertyComponent_Mind.GetTimeEnemyDeadPassCanConfirm
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3c9baec
	// Params: [ Num(1) Size(0x4) ]
	float GetTimeEnemyDeadPassCanConfirm();

	// Object: Function MFNPCAI.NPCAIPropertyComponent_Mind.GetScoreToDistanceForGoalEnemy
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3c9bd3c
	// Params: [ Num(1) Size(0x4) ]
	float GetScoreToDistanceForGoalEnemy();

	// Object: Function MFNPCAI.NPCAIPropertyComponent_Mind.GetScoreMultipleFaceAngleForGoalEnemyByCos
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3c9bb88
	// Params: [ Num(2) Size(0x8) ]
	float GetScoreMultipleFaceAngleForGoalEnemyByCos(float AngleCos);

	// Object: Function MFNPCAI.NPCAIPropertyComponent_Mind.GetScoreCutOfZoomWeaponForGoalEnemy
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3c9bc6c
	// Params: [ Num(1) Size(0x4) ]
	float GetScoreCutOfZoomWeaponForGoalEnemy();

	// Object: Function MFNPCAI.NPCAIPropertyComponent_Mind.GetScoreCutOfHitMeForGoalEnemy
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3c9bcd4
	// Params: [ Num(1) Size(0x4) ]
	float GetScoreCutOfHitMeForGoalEnemy();

	// Object: Function MFNPCAI.NPCAIPropertyComponent_Mind.GetScoreCutOfHitAllyForGoalEnemy
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3c9bca0
	// Params: [ Num(1) Size(0x4) ]
	float GetScoreCutOfHitAllyForGoalEnemy();

	// Object: Function MFNPCAI.NPCAIPropertyComponent_Mind.GetNoRepeatQREMyselfAtDistance
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3c9ba1c
	// Params: [ Num(1) Size(0x4) ]
	float GetNoRepeatQREMyselfAtDistance();

	// Object: Function MFNPCAI.NPCAIPropertyComponent_Mind.GetNoRepeatQREEnemyAtDistance
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3c9b9e8
	// Params: [ Num(1) Size(0x4) ]
	float GetNoRepeatQREEnemyAtDistance();

	// Object: Function MFNPCAI.NPCAIPropertyComponent_Mind.GetItemCheapPriceCanIgnorePickUp
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3c9ba50
	// Params: [ Num(1) Size(0x4) ]
	int32_t GetItemCheapPriceCanIgnorePickUp();

	// Object: Function MFNPCAI.NPCAIPropertyComponent_Mind.GetItemCheapPriceCanDestoryWhenPickUp
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3c9ba84
	// Params: [ Num(1) Size(0x4) ]
	int32_t GetItemCheapPriceCanDestoryWhenPickUp();

	// Object: Function MFNPCAI.NPCAIPropertyComponent_Mind.GetHatredValueToDist
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3c9bd70
	// Params: [ Num(1) Size(0x4) ]
	float GetHatredValueToDist();

	// Object: Function MFNPCAI.NPCAIPropertyComponent_Mind.GetCareTargetHasZoomWeaponDistance
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3c9bc38
	// Params: [ Num(1) Size(0x4) ]
	float GetCareTargetHasZoomWeaponDistance();

	// Object: Function MFNPCAI.NPCAIPropertyComponent_Mind.GetCalculateGoalEnemyPriporityInterval
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3c9bda4
	// Params: [ Num(1) Size(0x4) ]
	float GetCalculateGoalEnemyPriporityInterval();

	// Object: Function MFNPCAI.NPCAIPropertyComponent_Mind.GetAIProfileType
	// Flags: [Native|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x3c9bdd8
	// Params: [ Num(1) Size(0x1) ]
	EAIProfileType GetAIProfileType();
};

// Object: Class MFNPCAI.AIPropertyMoveProfile
// Size: 0x78 (Inherited: 0x38)
struct UAIPropertyMoveProfile : UNPCAIPropertyProfile
{
	DEFINE_UE_CLASS_HELPERS(UAIPropertyMoveProfile, "AIPropertyMoveProfile")

	float AcceptanceRadius; // 0x34(0x4)
	float AcceptanceRadiusZ; // 0x38(0x4)
	float MAX_SPRINT_DURATION; // 0x3C(0x4)
	float MIN_REQUIRED_TIME_TO_SPRINT; // 0x40(0x4)
	float MAX_REQUIRED_TIME_TO_RECOVER; // 0x44(0x4)
	float RECOVER_POINT_PER_SECOND; // 0x48(0x4)
	float MIN_ROTATE_SPEED; // 0x4C(0x4)
	bool ENABLED_USE_ROTATE_ANGLE_LIMIT; // 0x50(0x1)
	float MAX_ROTATE_ANGLE; // 0x54(0x4)
	float ROTATE_ANGLE_INTERVAL; // 0x58(0x4)
	float ROTATE_ANGLE_MIN_DEVIATION; // 0x5C(0x4)
	float ROTATE_ANGLE_MAX_DEVIATION; // 0x60(0x4)
	bool ENABLED_QUICKLY_TURN_IN_PLACE; // 0x64(0x1)
	bool bEnableImmediatelyTurn; // 0x65(0x1)
	uint8_t Pad_0x67[0x1]; // 0x67(0x1)
	float CAN_MOVE_TEST_DISTANCE; // 0x68(0x4)
	float SOUND_DIFFUSION_LEVEL_FACTOR; // 0x6C(0x4)
	float SOUND_DIFFUSION_MAX_DISTANCE_FACTOR; // 0x70(0x4)
	float WEAPON_SHOOTING_MOVING_SCALE; // 0x74(0x4)
};

// Object: Class MFNPCAI.NPCAIPropertyComponent_Move
// Size: 0x38 (Inherited: 0x38)
struct UNPCAIPropertyComponent_Move : UNPCAIPropertyComponent
{
	DEFINE_UE_CLASS_HELPERS(UNPCAIPropertyComponent_Move, "NPCAIPropertyComponent_Move")

	// Object: Function MFNPCAI.NPCAIPropertyComponent_Move.IsEnableImmediatelyTurn
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3c9e17c
	// Params: [ Num(1) Size(0x1) ]
	bool IsEnableImmediatelyTurn();

	// Object: Function MFNPCAI.NPCAIPropertyComponent_Move.IsEnabledQuicklyTurnInPlace
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3c9e1b4
	// Params: [ Num(1) Size(0x1) ]
	bool IsEnabledQuicklyTurnInPlace();

	// Object: Function MFNPCAI.NPCAIPropertyComponent_Move.GetWeaponShootingMovingScale
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3c9e0ac
	// Params: [ Num(1) Size(0x4) ]
	float GetWeaponShootingMovingScale();

	// Object: Function MFNPCAI.NPCAIPropertyComponent_Move.GetSoundDiffusionMaxDistanceFactor
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3c9e114
	// Params: [ Num(1) Size(0x4) ]
	float GetSoundDiffusionMaxDistanceFactor();

	// Object: Function MFNPCAI.NPCAIPropertyComponent_Move.GetSoundDiffusionLevelFactor
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3c9e0e0
	// Params: [ Num(1) Size(0x4) ]
	float GetSoundDiffusionLevelFactor();

	// Object: Function MFNPCAI.NPCAIPropertyComponent_Move.GetRotateAngleMinDeviation
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3c9e220
	// Params: [ Num(1) Size(0x4) ]
	float GetRotateAngleMinDeviation();

	// Object: Function MFNPCAI.NPCAIPropertyComponent_Move.GetRotateAngleMaxDeviation
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3c9e1ec
	// Params: [ Num(1) Size(0x4) ]
	float GetRotateAngleMaxDeviation();

	// Object: Function MFNPCAI.NPCAIPropertyComponent_Move.GetRotateAngleInterval
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3c9e254
	// Params: [ Num(1) Size(0x4) ]
	float GetRotateAngleInterval();

	// Object: Function MFNPCAI.NPCAIPropertyComponent_Move.GetRecoverPointPerSecond
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3c9e328
	// Params: [ Num(1) Size(0x4) ]
	float GetRecoverPointPerSecond();

	// Object: Function MFNPCAI.NPCAIPropertyComponent_Move.GetMinRotateSpeed
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3c9e2f4
	// Params: [ Num(1) Size(0x4) ]
	float GetMinRotateSpeed();

	// Object: Function MFNPCAI.NPCAIPropertyComponent_Move.GetMinRequiredTimeToSrpint
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3c9e390
	// Params: [ Num(1) Size(0x4) ]
	float GetMinRequiredTimeToSrpint();

	// Object: Function MFNPCAI.NPCAIPropertyComponent_Move.GetMaxSprintDuration
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3c9e3c4
	// Params: [ Num(1) Size(0x4) ]
	float GetMaxSprintDuration();

	// Object: Function MFNPCAI.NPCAIPropertyComponent_Move.GetMaxRotateAngle
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3c9e288
	// Params: [ Num(1) Size(0x4) ]
	float GetMaxRotateAngle();

	// Object: Function MFNPCAI.NPCAIPropertyComponent_Move.GetMaxRequiredTimeToRecover
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3c9e35c
	// Params: [ Num(1) Size(0x4) ]
	float GetMaxRequiredTimeToRecover();

	// Object: Function MFNPCAI.NPCAIPropertyComponent_Move.GetEnabledUseRotateAngleLimit
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3c9e2bc
	// Params: [ Num(1) Size(0x1) ]
	bool GetEnabledUseRotateAngleLimit();

	// Object: Function MFNPCAI.NPCAIPropertyComponent_Move.GetCanMoveTestDistance
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3c9e148
	// Params: [ Num(1) Size(0x4) ]
	float GetCanMoveTestDistance();

	// Object: Function MFNPCAI.NPCAIPropertyComponent_Move.GetAIProfileType
	// Flags: [Native|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x3c9e460
	// Params: [ Num(1) Size(0x1) ]
	EAIProfileType GetAIProfileType();

	// Object: Function MFNPCAI.NPCAIPropertyComponent_Move.GetAcceptanceRadiusZ
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3c9e3f8
	// Params: [ Num(1) Size(0x4) ]
	float GetAcceptanceRadiusZ();

	// Object: Function MFNPCAI.NPCAIPropertyComponent_Move.GetAcceptanceRadius
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3c9e42c
	// Params: [ Num(1) Size(0x4) ]
	float GetAcceptanceRadius();
};

// Object: Class MFNPCAI.AIPropertyNavProfile
// Size: 0x168 (Inherited: 0x38)
struct UAIPropertyNavProfile : UNPCAIPropertyProfile
{
	DEFINE_UE_CLASS_HELPERS(UAIPropertyNavProfile, "AIPropertyNavProfile")

	bool bEnableDiversity; // 0x31(0x1)
	struct UNavigationQueryFilter* DiversityNavQueryFilterClass; // 0x38(0x8)
	bool bEnableNavLinkDiversity; // 0x40(0x1)
	uint8_t Pad_0x42[0x6]; // 0x42(0x6)
	struct TSet<ENavLinkType> EnabledNavLinkTypes; // 0x48(0x50)
	struct TMap<ENavLinkType, struct FAIPropertyNavProfile_Clamp> NavLinkTypeCostScales; // 0x98(0x50)
	uint8_t Pad_0xE8[0x50]; // 0xE8(0x50)
	bool bEnableDirectionDiversity; // 0x138(0x1)
	uint8_t Pad_0x139[0x3]; // 0x139(0x3)
	struct FAIPropertyNavProfile_Clamp MaxValidRelAngle; // 0x13C(0xC)
	uint8_t Pad_0x148[0x4]; // 0x148(0x4)
	struct FAIPropertyNavProfile_Clamp PathSimilarAngle; // 0x14C(0xC)
	uint8_t Pad_0x158[0x4]; // 0x158(0x4)
	struct FVector PathSimilarDist; // 0x15C(0xC)
};

// Object: Class MFNPCAI.NPCAIPropertyComponent_Nav
// Size: 0x38 (Inherited: 0x38)
struct UNPCAIPropertyComponent_Nav : UNPCAIPropertyComponent
{
	DEFINE_UE_CLASS_HELPERS(UNPCAIPropertyComponent_Nav, "NPCAIPropertyComponent_Nav")

	// Object: Function MFNPCAI.NPCAIPropertyComponent_Nav.GetAIProfileType
	// Flags: [Native|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x3c9e4f8
	// Params: [ Num(1) Size(0x1) ]
	EAIProfileType GetAIProfileType();
};

// Object: Class MFNPCAI.AIPropertyPlayerActionReactionProfile
// Size: 0x38 (Inherited: 0x38)
struct UAIPropertyPlayerActionReactionProfile : UNPCAIPropertyProfile
{
	DEFINE_UE_CLASS_HELPERS(UAIPropertyPlayerActionReactionProfile, "AIPropertyPlayerActionReactionProfile")
};

// Object: Class MFNPCAI.NPCAIPropertyComponent_PlayerActionReaction
// Size: 0x38 (Inherited: 0x38)
struct UNPCAIPropertyComponent_PlayerActionReaction : UNPCAIPropertyComponent
{
	DEFINE_UE_CLASS_HELPERS(UNPCAIPropertyComponent_PlayerActionReaction, "NPCAIPropertyComponent_PlayerActionReaction")

	// Object: Function MFNPCAI.NPCAIPropertyComponent_PlayerActionReaction.GetAIProfileType
	// Flags: [Native|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x3c9e548
	// Params: [ Num(1) Size(0x1) ]
	EAIProfileType GetAIProfileType();
};

// Object: Class MFNPCAI.AIPropertyRequestRunProfile
// Size: 0x38 (Inherited: 0x38)
struct UAIPropertyRequestRunProfile : UNPCAIPropertyProfile
{
	DEFINE_UE_CLASS_HELPERS(UAIPropertyRequestRunProfile, "AIPropertyRequestRunProfile")
};

// Object: Class MFNPCAI.NPCAIPropertyComponent_RequestRun
// Size: 0x38 (Inherited: 0x38)
struct UNPCAIPropertyComponent_RequestRun : UNPCAIPropertyComponent
{
	DEFINE_UE_CLASS_HELPERS(UNPCAIPropertyComponent_RequestRun, "NPCAIPropertyComponent_RequestRun")

	// Object: Function MFNPCAI.NPCAIPropertyComponent_RequestRun.GetAIProfileType
	// Flags: [Native|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x3c9e598
	// Params: [ Num(1) Size(0x1) ]
	EAIProfileType GetAIProfileType();
};

// Object: Class MFNPCAI.AIPropertyShootProfile
// Size: 0xF8 (Inherited: 0x38)
struct UAIPropertyShootProfile : UNPCAIPropertyProfile
{
	DEFINE_UE_CLASS_HELPERS(UAIPropertyShootProfile, "AIPropertyShootProfile")

	struct UCurveFloat* UA_Curve_ShootAccuracyByRecoil; // 0x38(0x8)
	float RecoilRecoverTimeMax; // 0x40(0x4)
	float RecoilRecoverTime; // 0x44(0x4)
	float VerticalRecoilScaleMax; // 0x48(0x4)
	float VerticalRecoilScale; // 0x4C(0x4)
	float UA_SHOOT_POSITION_ZOFFSET; // 0x50(0x4)
	struct FVector UA_SHOOT_POSITION_OFFSET_STAND; // 0x54(0xC)
	struct FVector UA_SHOOT_POSITION_OFFSET_STAND_LLEAN; // 0x60(0xC)
	struct FVector UA_SHOOT_POSITION_OFFSET_STAND_RLEAN; // 0x6C(0xC)
	struct FVector UA_SHOOT_POSITION_OFFSET_CROUCH; // 0x78(0xC)
	struct FVector UA_SHOOT_POSITION_OFFSET_CROUCH_LLEAN; // 0x84(0xC)
	struct FVector UA_SHOOT_POSITION_OFFSET_CROUCH_RLEAN; // 0x90(0xC)
	struct FVector UA_SHOOT_POSITION_OFFSET_PRONE; // 0x9C(0xC)
	float HorizontalRecoilScale; // 0xA8(0x4)
	int32_t HORIZONT_RECOIL_STEP_SZIE_NUM; // 0xAC(0x4)
	float SHOOT_LOC_IF_HIT_STILL_SHAKE_OFFSET; // 0xB0(0x4)
	bool ENABLED_TRANSFTER_HIT_BETTER_PART; // 0xB4(0x1)
	uint8_t Pad_0xB5[0x3]; // 0xB5(0x3)
	int32_t COUNT_IF_HIT_HEAD_TRANSFER_TO_OTHER; // 0xB8(0x4)
	int32_t COUNT_IF_HIT_CHEST_TRANSFER_TO_OTHER; // 0xBC(0x4)
	bool IF_HIT_HEAD_TRANSFER_TO_OTHER_WHEN_SHOOTLOC; // 0xC0(0x1)
	bool IF_HIT_CHEST_TRANSFER_TO_OTHER_WHEN_SHOOTLOC; // 0xC1(0x1)
	bool bTransferDangerHitToOtherPart; // 0xC2(0x1)
	uint8_t Pad_0xC3[0x1]; // 0xC3(0x1)
	float HitZeroBodyPartTransferToOtherMinHealthPercent; // 0xC4(0x4)
	float HitZeroBodyPartTransferToOtherMaxHealthPercent; // 0xC8(0x4)
	float INSTANT_BULLET_VAILD_DISTANCE; // 0xCC(0x4)
	float TRY_LEAN_RAY_CHECK_DISTANCE; // 0xD0(0x4)
	float TRY_LEAN_RAY_CHECK_DISTANCE_SQR; // 0xD4(0x4)
	float STAND_SHOOT_Z_LOCATION; // 0xD8(0x4)
	float CROUCH_HEAD_TOP_Z_LOCATION; // 0xDC(0x4)
	float FACE_TO_TARGET_ANGLE_LIMIT_CAN_FIRE; // 0xE0(0x4)
	float HIT_INTERVAL_RATE; // 0xE4(0x4)
	int32_t HIT_INTERVAL_INCREASE_BY_SHOOT; // 0xE8(0x4)
	int32_t HIT_INTERVAL_COUNT_BASE; // 0xEC(0x4)
	bool ENABLED_HIT_INTERVAL_BY_GROUP; // 0xF0(0x1)
	bool ENABLED_IGNORE_BLOCK_DIRECT_HIT; // 0xF1(0x1)
	uint8_t Pad_0xF2[0x6]; // 0xF2(0x6)
};

// Object: Class MFNPCAI.NPCAIPropertyComponent_Shoot
// Size: 0x58 (Inherited: 0x38)
struct UNPCAIPropertyComponent_Shoot : UNPCAIPropertyComponent
{
	DEFINE_UE_CLASS_HELPERS(UNPCAIPropertyComponent_Shoot, "NPCAIPropertyComponent_Shoot")

	float HitIntervalRateModifier; // 0x38(0x4)
	bool bEnabledIgnoreBlockDirectHitModifier; // 0x3C(0x1)
	bool bEnabledIgnoreBlockDirectHitModifierIsChanged; // 0x3D(0x1)
	bool bEnabledTransferHitBetterPartModifier; // 0x3E(0x1)
	bool bEnabledTransferHitBetterPartModifierIsChanged; // 0x3F(0x1)
	int32_t CountIfHitHeadTransferToOtherModifier; // 0x40(0x4)
	int32_t CountIfHitChestTransferToOtherModifier; // 0x44(0x4)
	bool bTransferDangerHitToOtherPartModifier; // 0x48(0x1)
	bool bTransferDangerHitToOtherPartModifierIsChanged; // 0x49(0x1)
	uint8_t Pad_0x4A[0x2]; // 0x4A(0x2)
	float HitZeroBodyPartTransferToOtherMinHealthPercentModifier; // 0x4C(0x4)
	float HitZeroBodyPartTransferToOtherMaxHealthPercentModifier; // 0x50(0x4)
	uint8_t Pad_0x54[0x4]; // 0x54(0x4)

	// Object: Function MFNPCAI.NPCAIPropertyComponent_Shoot.SetIsCanTransferDangerHitToOtherPart
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3c9ed1c
	// Params: [ Num(1) Size(0x1) ]
	void SetIsCanTransferDangerHitToOtherPart(bool Value);

	// Object: Function MFNPCAI.NPCAIPropertyComponent_Shoot.SetHitZeroBodyPartTransferToOtherMinHealthPercent
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3c9ec74
	// Params: [ Num(1) Size(0x4) ]
	void SetHitZeroBodyPartTransferToOtherMinHealthPercent(float Value);

	// Object: Function MFNPCAI.NPCAIPropertyComponent_Shoot.SetHitZeroBodyPartTransferToOtherMaxHealthPercent
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3c9ebcc
	// Params: [ Num(1) Size(0x4) ]
	void SetHitZeroBodyPartTransferToOtherMaxHealthPercent(float Value);

	// Object: Function MFNPCAI.NPCAIPropertyComponent_Shoot.SetHitIntervalRate
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3c9ea88
	// Params: [ Num(1) Size(0x4) ]
	void SetHitIntervalRate(float Value);

	// Object: Function MFNPCAI.NPCAIPropertyComponent_Shoot.SetEnabledTransferHitBetterPart
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3c9e780
	// Params: [ Num(1) Size(0x1) ]
	void SetEnabledTransferHitBetterPart(bool Value);

	// Object: Function MFNPCAI.NPCAIPropertyComponent_Shoot.SetEnabledIgnoreBlockDirectHit
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3c9e830
	// Params: [ Num(1) Size(0x1) ]
	void SetEnabledIgnoreBlockDirectHit(bool Value);

	// Object: Function MFNPCAI.NPCAIPropertyComponent_Shoot.SetCountIfHitHeadTransferToOther
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3c9e6d8
	// Params: [ Num(1) Size(0x4) ]
	void SetCountIfHitHeadTransferToOther(int32_t Value);

	// Object: Function MFNPCAI.NPCAIPropertyComponent_Shoot.SetCountIfHitChestTransferToOther
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3c9e630
	// Params: [ Num(1) Size(0x4) ]
	void SetCountIfHitChestTransferToOther(int32_t Value);

	// Object: Function MFNPCAI.NPCAIPropertyComponent_Shoot.IsIfHitHeadTransferToOtherWhenShootLoc
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3c9eed8
	// Params: [ Num(1) Size(0x1) ]
	bool IsIfHitHeadTransferToOtherWhenShootLoc();

	// Object: Function MFNPCAI.NPCAIPropertyComponent_Shoot.IsIfHitChestTransferToOtherWhenShootLoc
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3c9eea0
	// Params: [ Num(1) Size(0x1) ]
	bool IsIfHitChestTransferToOtherWhenShootLoc();

	// Object: Function MFNPCAI.NPCAIPropertyComponent_Shoot.IsEnabledIgnoreBlockDirectHit
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3c9e8e0
	// Params: [ Num(1) Size(0x1) ]
	bool IsEnabledIgnoreBlockDirectHit();

	// Object: Function MFNPCAI.NPCAIPropertyComponent_Shoot.IsEnabledHitIntervalByGroup
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3c9e9e8
	// Params: [ Num(1) Size(0x1) ]
	bool IsEnabledHitIntervalByGroup();

	// Object: Function MFNPCAI.NPCAIPropertyComponent_Shoot.IsCanTransferDangerHitToOtherPart
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3c9ee34
	// Params: [ Num(1) Size(0x1) ]
	bool IsCanTransferDangerHitToOtherPart();

	// Object: Function MFNPCAI.NPCAIPropertyComponent_Shoot.GetVerticalRecoilScaleMax
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3c9f018
	// Params: [ Num(1) Size(0x4) ]
	float GetVerticalRecoilScaleMax();

	// Object: Function MFNPCAI.NPCAIPropertyComponent_Shoot.GetVerticalRecoilScale
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3c9f04c
	// Params: [ Num(1) Size(0x4) ]
	float GetVerticalRecoilScale();

	// Object: Function MFNPCAI.NPCAIPropertyComponent_Shoot.GetUaShootPositionZOffset
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3c9f1e4
	// Params: [ Num(1) Size(0x4) ]
	float GetUaShootPositionZOffset();

	// Object: Function MFNPCAI.NPCAIPropertyComponent_Shoot.GetUaShootPositionOffsetByPosture
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3c9f0b4
	// Params: [ Num(3) Size(0x10) ]
	struct FVector GetUaShootPositionOffsetByPosture(EAIPose PoseType, EAILeanType LeanType);

	// Object: Function MFNPCAI.NPCAIPropertyComponent_Shoot.GetUaShootPositionOffset
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3c9f1a8
	// Params: [ Num(1) Size(0xC) ]
	struct FVector GetUaShootPositionOffset();

	// Object: Function MFNPCAI.NPCAIPropertyComponent_Shoot.GetUaCurveShootAccuracyByRecoil
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3c9f24c
	// Params: [ Num(1) Size(0x8) ]
	struct UCurveFloat* GetUaCurveShootAccuracyByRecoil();

	// Object: Function MFNPCAI.NPCAIPropertyComponent_Shoot.GetTryLeanRayCheckDistanceSqr
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3c9e980
	// Params: [ Num(1) Size(0x4) ]
	float GetTryLeanRayCheckDistanceSqr();

	// Object: Function MFNPCAI.NPCAIPropertyComponent_Shoot.GetTryLeanRayCheckDistance
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3c9e9b4
	// Params: [ Num(1) Size(0x4) ]
	float GetTryLeanRayCheckDistance();

	// Object: Function MFNPCAI.NPCAIPropertyComponent_Shoot.GetStandShootZLocation
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3c9e94c
	// Params: [ Num(1) Size(0x4) ]
	float GetStandShootZLocation();

	// Object: Function MFNPCAI.NPCAIPropertyComponent_Shoot.GetShootLocIfHitStillShakeOffset
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3c9ef7c
	// Params: [ Num(1) Size(0x4) ]
	float GetShootLocIfHitStillShakeOffset();

	// Object: Function MFNPCAI.NPCAIPropertyComponent_Shoot.GetRecoilRecoverTimeMax
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3c9f218
	// Params: [ Num(1) Size(0x4) ]
	float GetRecoilRecoverTimeMax();

	// Object: Function MFNPCAI.NPCAIPropertyComponent_Shoot.GetRecoilRecoverTime
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3c9f080
	// Params: [ Num(1) Size(0x4) ]
	float GetRecoilRecoverTime();

	// Object: Function MFNPCAI.NPCAIPropertyComponent_Shoot.GetInstantBulletVaildDistance
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3c9eb98
	// Params: [ Num(1) Size(0x4) ]
	float GetInstantBulletVaildDistance();

	// Object: Function MFNPCAI.NPCAIPropertyComponent_Shoot.GetHorizontRecoilStepSizeNum
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3c9efb0
	// Params: [ Num(1) Size(0x4) ]
	int32_t GetHorizontRecoilStepSizeNum();

	// Object: Function MFNPCAI.NPCAIPropertyComponent_Shoot.GetHorizontalRecoilScale
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3c9efe4
	// Params: [ Num(1) Size(0x4) ]
	float GetHorizontalRecoilScale();

	// Object: Function MFNPCAI.NPCAIPropertyComponent_Shoot.GetHitZeroBodyPartTransferToOtherMinHealthPercent
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3c9ee00
	// Params: [ Num(1) Size(0x4) ]
	float GetHitZeroBodyPartTransferToOtherMinHealthPercent();

	// Object: Function MFNPCAI.NPCAIPropertyComponent_Shoot.GetHitZeroBodyPartTransferToOtherMaxHealthPercent
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3c9edcc
	// Params: [ Num(1) Size(0x4) ]
	float GetHitZeroBodyPartTransferToOtherMaxHealthPercent();

	// Object: Function MFNPCAI.NPCAIPropertyComponent_Shoot.GetHitIntervalRate
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3c9eb30
	// Params: [ Num(1) Size(0x4) ]
	float GetHitIntervalRate();

	// Object: Function MFNPCAI.NPCAIPropertyComponent_Shoot.GetHitIntervalIncreaseByShoot
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3c9ea54
	// Params: [ Num(1) Size(0x4) ]
	int32_t GetHitIntervalIncreaseByShoot();

	// Object: Function MFNPCAI.NPCAIPropertyComponent_Shoot.GetHitIntervalCountBase
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3c9ea20
	// Params: [ Num(1) Size(0x4) ]
	int32_t GetHitIntervalCountBase();

	// Object: Function MFNPCAI.NPCAIPropertyComponent_Shoot.GetFaceToTargetAngleLimitCanFire
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3c9eb64
	// Params: [ Num(1) Size(0x4) ]
	float GetFaceToTargetAngleLimitCanFire();

	// Object: Function MFNPCAI.NPCAIPropertyComponent_Shoot.GetEnabledTransfterHitBetterPart
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3c9ef44
	// Params: [ Num(1) Size(0x1) ]
	bool GetEnabledTransfterHitBetterPart();

	// Object: Function MFNPCAI.NPCAIPropertyComponent_Shoot.GetCrouchHeadTopZLocation
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3c9e918
	// Params: [ Num(1) Size(0x4) ]
	float GetCrouchHeadTopZLocation();

	// Object: Function MFNPCAI.NPCAIPropertyComponent_Shoot.GetCountIfHitHeadTransferToOther
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3c9ef10
	// Params: [ Num(1) Size(0x4) ]
	int32_t GetCountIfHitHeadTransferToOther();

	// Object: Function MFNPCAI.NPCAIPropertyComponent_Shoot.GetCountIfHitChestTransferToOther
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3c9ee6c
	// Params: [ Num(1) Size(0x4) ]
	int32_t GetCountIfHitChestTransferToOther();

	// Object: Function MFNPCAI.NPCAIPropertyComponent_Shoot.GetAIProfileType
	// Flags: [Native|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x3c9f280
	// Params: [ Num(1) Size(0x1) ]
	EAIProfileType GetAIProfileType();
};

// Object: Class MFNPCAI.AIPropertySmartProfile
// Size: 0x38 (Inherited: 0x38)
struct UAIPropertySmartProfile : UNPCAIPropertyProfile
{
	DEFINE_UE_CLASS_HELPERS(UAIPropertySmartProfile, "AIPropertySmartProfile")
};

// Object: Class MFNPCAI.NPCAIPropertyComponent_Smart
// Size: 0x38 (Inherited: 0x38)
struct UNPCAIPropertyComponent_Smart : UNPCAIPropertyComponent
{
	DEFINE_UE_CLASS_HELPERS(UNPCAIPropertyComponent_Smart, "NPCAIPropertyComponent_Smart")

	// Object: Function MFNPCAI.NPCAIPropertyComponent_Smart.GetAIProfileType
	// Flags: [Native|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x3ca1b58
	// Params: [ Num(1) Size(0x1) ]
	EAIProfileType GetAIProfileType();
};

// Object: Class MFNPCAI.AIPropertySoundProfile
// Size: 0x50 (Inherited: 0x38)
struct UAIPropertySoundProfile : UNPCAIPropertyProfile
{
	DEFINE_UE_CLASS_HELPERS(UAIPropertySoundProfile, "AIPropertySoundProfile")

	struct UDataTable* DataTableOfAI; // 0x38(0x8)
	float SelfYellCD; // 0x40(0x4)
	float AreaYellCD; // 0x44(0x4)
	float AIVoiceRadius; // 0x48(0x4)
	uint8_t Pad_0x4C[0x4]; // 0x4C(0x4)
};

// Object: Class MFNPCAI.NPCAIPropertyComponent_Sound
// Size: 0x38 (Inherited: 0x38)
struct UNPCAIPropertyComponent_Sound : UNPCAIPropertyComponent
{
	DEFINE_UE_CLASS_HELPERS(UNPCAIPropertyComponent_Sound, "NPCAIPropertyComponent_Sound")

	// Object: Function MFNPCAI.NPCAIPropertyComponent_Sound.GetSelfYellCD
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3ca1c10
	// Params: [ Num(1) Size(0x4) ]
	float GetSelfYellCD();

	// Object: Function MFNPCAI.NPCAIPropertyComponent_Sound.GetDataTableOfAI
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3ca1c44
	// Params: [ Num(1) Size(0x8) ]
	struct UDataTable* GetDataTableOfAI();

	// Object: Function MFNPCAI.NPCAIPropertyComponent_Sound.GetAreaYellCD
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3ca1bdc
	// Params: [ Num(1) Size(0x4) ]
	float GetAreaYellCD();

	// Object: Function MFNPCAI.NPCAIPropertyComponent_Sound.GetAIVoiceRadius
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3ca1ba8
	// Params: [ Num(1) Size(0x4) ]
	float GetAIVoiceRadius();

	// Object: Function MFNPCAI.NPCAIPropertyComponent_Sound.GetAIProfileType
	// Flags: [Native|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x3ca1c78
	// Params: [ Num(1) Size(0x1) ]
	EAIProfileType GetAIProfileType();
};

// Object: Class MFNPCAI.AIPropertyStrategyProfile
// Size: 0x38 (Inherited: 0x38)
struct UAIPropertyStrategyProfile : UNPCAIPropertyProfile
{
	DEFINE_UE_CLASS_HELPERS(UAIPropertyStrategyProfile, "AIPropertyStrategyProfile")
};

// Object: Class MFNPCAI.NPCAIPropertyComponent_Strategy
// Size: 0x38 (Inherited: 0x38)
struct UNPCAIPropertyComponent_Strategy : UNPCAIPropertyComponent
{
	DEFINE_UE_CLASS_HELPERS(UNPCAIPropertyComponent_Strategy, "NPCAIPropertyComponent_Strategy")

	// Object: Function MFNPCAI.NPCAIPropertyComponent_Strategy.GetAIProfileType
	// Flags: [Native|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x3ca1cc8
	// Params: [ Num(1) Size(0x1) ]
	EAIProfileType GetAIProfileType();
};

// Object: Class MFNPCAI.AIPropertyTacticProfile
// Size: 0x38 (Inherited: 0x38)
struct UAIPropertyTacticProfile : UNPCAIPropertyProfile
{
	DEFINE_UE_CLASS_HELPERS(UAIPropertyTacticProfile, "AIPropertyTacticProfile")
};

// Object: Class MFNPCAI.NPCAIPropertyComponent_Tactic
// Size: 0x38 (Inherited: 0x38)
struct UNPCAIPropertyComponent_Tactic : UNPCAIPropertyComponent
{
	DEFINE_UE_CLASS_HELPERS(UNPCAIPropertyComponent_Tactic, "NPCAIPropertyComponent_Tactic")

	// Object: Function MFNPCAI.NPCAIPropertyComponent_Tactic.GetAIProfileType
	// Flags: [Native|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x3ca1d18
	// Params: [ Num(1) Size(0x1) ]
	EAIProfileType GetAIProfileType();
};

// Object: Class MFNPCAI.AIPropertyWeaponProfile
// Size: 0xE8 (Inherited: 0x38)
struct UAIPropertyWeaponProfile : UNPCAIPropertyProfile
{
	DEFINE_UE_CLASS_HELPERS(UAIPropertyWeaponProfile, "AIPropertyWeaponProfile")

	float WeaponBaseSpread; // 0x34(0x4)
	float WeaponBaseRecoil; // 0x38(0x4)
	float ReloadMinPercentage; // 0x3C(0x4)
	float ReloadMaxPercentage; // 0x40(0x4)
	float MinFillBulletTime; // 0x44(0x4)
	int64_t MeleeWeaponID; // 0x48(0x8)
	int64_t LocalEquipID; // 0x50(0x8)
	struct FName WeaponTorrBodyBoneName; // 0x58(0x8)
	struct FVector GunShieldPositionOffset_Stand; // 0x60(0xC)
	struct FVector GunShieldPositionOffset_Crouch; // 0x6C(0xC)
	struct FVector GunShieldPositionOffset_Prone; // 0x78(0xC)
	struct FVector GunShieldPositionOffset_LeftLean; // 0x84(0xC)
	struct FVector GunShieldPositionOffset_RightLean; // 0x90(0xC)
	float GunShieldSphereRadius; // 0x9C(0x4)
	float GunShieldDistFromBody; // 0xA0(0x4)
	bool bShouldCheckTacticalPistolStatus; // 0xA4(0x1)
	bool bCanUseTacticalPistol; // 0xA5(0x1)
	bool bShouldImmediatelyGiveEquipItem; // 0xA6(0x1)
	struct TArray<float> HipShotSpreads_Stand; // 0xA8(0x10)
	struct TArray<float> HipShotSpreads_Move; // 0xB8(0x10)
	struct TArray<float> HipShotSpreads_Sprint; // 0xC8(0x10)
	struct TArray<float> HipShotSpreads_Jump; // 0xD8(0x10)
};

// Object: Class MFNPCAI.NPCAIPropertyComponent_Weapon
// Size: 0x38 (Inherited: 0x38)
struct UNPCAIPropertyComponent_Weapon : UNPCAIPropertyComponent
{
	DEFINE_UE_CLASS_HELPERS(UNPCAIPropertyComponent_Weapon, "NPCAIPropertyComponent_Weapon")

	// Object: Function MFNPCAI.NPCAIPropertyComponent_Weapon.IsShouldImmediatelyGiveEquipItem
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3ca1f1c
	// Params: [ Num(1) Size(0x1) ]
	bool IsShouldImmediatelyGiveEquipItem();

	// Object: Function MFNPCAI.NPCAIPropertyComponent_Weapon.IsCanUseTacticalPistol
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3ca1f54
	// Params: [ Num(1) Size(0x1) ]
	bool IsCanUseTacticalPistol();

	// Object: Function MFNPCAI.NPCAIPropertyComponent_Weapon.GetWeaponTorrBodyBoneName
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3ca2160
	// Params: [ Num(1) Size(0x8) ]
	struct FName GetWeaponTorrBodyBoneName();

	// Object: Function MFNPCAI.NPCAIPropertyComponent_Weapon.GetWeaponBaseSpread
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3ca22cc
	// Params: [ Num(1) Size(0x4) ]
	float GetWeaponBaseSpread();

	// Object: Function MFNPCAI.NPCAIPropertyComponent_Weapon.GetWeaponBaseRecoil
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3ca2298
	// Params: [ Num(1) Size(0x4) ]
	float GetWeaponBaseRecoil();

	// Object: Function MFNPCAI.NPCAIPropertyComponent_Weapon.GetShouldCheckTacticalPistolStatus
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3ca1f8c
	// Params: [ Num(1) Size(0x1) ]
	bool GetShouldCheckTacticalPistolStatus();

	// Object: Function MFNPCAI.NPCAIPropertyComponent_Weapon.GetReloadMinPercentage
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3ca2264
	// Params: [ Num(1) Size(0x4) ]
	float GetReloadMinPercentage();

	// Object: Function MFNPCAI.NPCAIPropertyComponent_Weapon.GetReloadMaxPercentage
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3ca2230
	// Params: [ Num(1) Size(0x4) ]
	float GetReloadMaxPercentage();

	// Object: Function MFNPCAI.NPCAIPropertyComponent_Weapon.GetMinFillBulletTime
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3ca21fc
	// Params: [ Num(1) Size(0x4) ]
	float GetMinFillBulletTime();

	// Object: Function MFNPCAI.NPCAIPropertyComponent_Weapon.GetMeleeWeaponID
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3ca21c8
	// Params: [ Num(1) Size(0x8) ]
	int64_t GetMeleeWeaponID();

	// Object: Function MFNPCAI.NPCAIPropertyComponent_Weapon.GetLocalEquipID
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3ca2194
	// Params: [ Num(1) Size(0x8) ]
	int64_t GetLocalEquipID();

	// Object: Function MFNPCAI.NPCAIPropertyComponent_Weapon.GetHipShootSpread
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3ca1d8c
	// Params: [ Num(5) Size(0xC) ]
	float GetHipShootSpread(int32_t ShootCount, bool bMoving, bool bSprinting, bool bJumping);

	// Object: Function MFNPCAI.NPCAIPropertyComponent_Weapon.GetGunShieldSphereRadius
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3ca1ff8
	// Params: [ Num(1) Size(0x4) ]
	float GetGunShieldSphereRadius();

	// Object: Function MFNPCAI.NPCAIPropertyComponent_Weapon.GetGunShieldPositionOffset
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3ca202c
	// Params: [ Num(4) Size(0x18) ]
	struct FVector GetGunShieldPositionOffset(struct ACharacter* Character, EAIPose AIPose, EAILeanType AILeanType);

	// Object: Function MFNPCAI.NPCAIPropertyComponent_Weapon.GetGunShieldDistFromBody
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3ca1fc4
	// Params: [ Num(1) Size(0x4) ]
	float GetGunShieldDistFromBody();

	// Object: Function MFNPCAI.NPCAIPropertyComponent_Weapon.GetAIProfileType
	// Flags: [Native|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x3ca2300
	// Params: [ Num(1) Size(0x1) ]
	EAIProfileType GetAIProfileType();
};

// Object: Class MFNPCAI.NPCAIQueryRoundEnvironmentAsyncTask
// Size: 0x78 (Inherited: 0x40)
struct UNPCAIQueryRoundEnvironmentAsyncTask : UNPCAIAsyncTaskBase
{
	DEFINE_UE_CLASS_HELPERS(UNPCAIQueryRoundEnvironmentAsyncTask, "NPCAIQueryRoundEnvironmentAsyncTask")

	struct FMulticastInlineDelegate OnSuccess; // 0x40(0x10)
	struct FMulticastInlineDelegate OnFail; // 0x50(0x10)
	struct FVector EnemyLocation; // 0x60(0xC)
	float LRDistance; // 0x6C(0x4)
	float FBDistance; // 0x70(0x4)
	bool bCheckLRDefense; // 0x74(0x1)
	bool bCheckLRAttack; // 0x75(0x1)
	uint8_t Pad_0x76[0x2]; // 0x76(0x2)

	// Object: Function MFNPCAI.NPCAIQueryRoundEnvironmentAsyncTask.ExecuteTask
	// Flags: [Native|Public]
	// Offset: 0x3ca2584
	// Params: [ Num(0) Size(0x0) ]
	void ExecuteTask();

	// Object: Function MFNPCAI.NPCAIQueryRoundEnvironmentAsyncTask.CheckCanUseMemoryData
	// Flags: [Native|Public|HasOutParms|HasDefaults]
	// Offset: 0x3ca2430
	// Params: [ Num(4) Size(0x71) ]
	bool CheckCanUseMemoryData(struct AActor* Pawn, const struct FVector& EnemyLocation, struct FNPCAIQueryRoundEnvironmentResult& OutResult);

	// Object: Function MFNPCAI.NPCAIQueryRoundEnvironmentAsyncTask.AIQueryRoundEnvironment
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3ca25a0
	// Params: [ Num(7) Size(0x28) ]
	static struct UNPCAIQueryRoundEnvironmentAsyncTask* AIQueryRoundEnvironment(struct AActor* Pawn, struct AActor* EnemyPawn, float LRDistance, float FBDistance, bool bCheckLRDefense, bool bCheckLRAttack);
};

// Object: Class MFNPCAI.NPCAIRecastNavMesh
// Size: 0x5D0 (Inherited: 0x5B8)
struct ANPCAIRecastNavMesh : ARecastNavMesh
{
	DEFINE_UE_CLASS_HELPERS(ANPCAIRecastNavMesh, "NPCAIRecastNavMesh")

	struct ANPCAIHNavActor* HNavActor; // 0x5B8(0x8)
	struct UNPCAINavPlatformSystem* CachedPlatformSystem; // 0x5C0(0x8)
	uint8_t Pad_0x5C8[0x8]; // 0x5C8(0x8)
};

// Object: Class MFNPCAI.NPCAIRecoilInterface
// Size: 0x28 (Inherited: 0x28)
struct INPCAIRecoilInterface : IInterface
{
	DEFINE_UE_CLASS_HELPERS(INPCAIRecoilInterface, "NPCAIRecoilInterface")

	// Object: Function MFNPCAI.NPCAIRecoilInterface.UpdatePressureWeaponPower
	// Flags: [Native|Public]
	// Offset: 0x3ca2a8c
	// Params: [ Num(2) Size(0x5) ]
	void UpdatePressureWeaponPower(float HitRate, bool bNextHit);

	// Object: Function MFNPCAI.NPCAIRecoilInterface.SetExactAimingPoint
	// Flags: [Native|Public|HasOutParms|HasDefaults]
	// Offset: 0x3ca2b84
	// Params: [ Num(2) Size(0x10) ]
	void SetExactAimingPoint(const struct FVector& AimingPoint, float TurnTime);

	// Object: Function MFNPCAI.NPCAIRecoilInterface.SetEnabledAIRecoilControl
	// Flags: [Native|Public]
	// Offset: 0x3ca289c
	// Params: [ Num(1) Size(0x1) ]
	void SetEnabledAIRecoilControl(bool Enabled);

	// Object: Function MFNPCAI.NPCAIRecoilInterface.SetDimAimingPoint
	// Flags: [Native|Public|HasOutParms|HasDefaults]
	// Offset: 0x3ca2994
	// Params: [ Num(2) Size(0x10) ]
	void SetDimAimingPoint(const struct FVector& DimAimingPoint, float TurnTime);

	// Object: Function MFNPCAI.NPCAIRecoilInterface.SetAIRLModifyViewRotation
	// Flags: [Native|Public|HasOutParms|HasDefaults]
	// Offset: 0x3ca27e4
	// Params: [ Num(1) Size(0xC) ]
	void SetAIRLModifyViewRotation(const struct FRotator& ModifyRotator);

	// Object: Function MFNPCAI.NPCAIRecoilInterface.Recoil
	// Flags: [Native|Public]
	// Offset: 0x3ca2d2c
	// Params: [ Num(2) Size(0x8) ]
	float Recoil(int32_t CurrentShotCount);

	// Object: Function MFNPCAI.NPCAIRecoilInterface.LosingRecoil
	// Flags: [Native|Public]
	// Offset: 0x3ca2c7c
	// Params: [ Num(1) Size(0x4) ]
	void LosingRecoil(float DeltaTime);

	// Object: Function MFNPCAI.NPCAIRecoilInterface.IsInPressureWeapon
	// Flags: [Native|Public]
	// Offset: 0x3ca2954
	// Params: [ Num(1) Size(0x1) ]
	bool IsInPressureWeapon();

	// Object: Function MFNPCAI.NPCAIRecoilInterface.GetRecoilOffset
	// Flags: [Native|Public|HasDefaults|Const]
	// Offset: 0x3ca2de4
	// Params: [ Num(1) Size(0xC) ]
	struct FVector GetRecoilOffset();
};

// Object: Class MFNPCAI.NPCAIRLAgentComponentInterface
// Size: 0x28 (Inherited: 0x28)
struct INPCAIRLAgentComponentInterface : IInterface
{
	DEFINE_UE_CLASS_HELPERS(INPCAIRLAgentComponentInterface, "NPCAIRLAgentComponentInterface")

	// Object: Function MFNPCAI.NPCAIRLAgentComponentInterface.TestChangeRLMode
	// Flags: [Native|Public]
	// Offset: 0x3ca2ed4
	// Params: [ Num(1) Size(0x1) ]
	void TestChangeRLMode(uint8_t TragetRLMode);

	// Object: Function MFNPCAI.NPCAIRLAgentComponentInterface.IsAIRLFire
	// Flags: [Native|Public]
	// Offset: 0x3ca2e54
	// Params: [ Num(1) Size(0x1) ]
	bool IsAIRLFire();

	// Object: Function MFNPCAI.NPCAIRLAgentComponentInterface.IsAIRLActionReload
	// Flags: [Native|Public]
	// Offset: 0x3ca2e94
	// Params: [ Num(1) Size(0x1) ]
	bool IsAIRLActionReload();
};

// Object: Class MFNPCAI.NPCAIRoleComponent
// Size: 0x100 (Inherited: 0xF0)
struct UNPCAIRoleComponent : UNPCAIActorComponent
{
	DEFINE_UE_CLASS_HELPERS(UNPCAIRoleComponent, "NPCAIRoleComponent")

	struct TArray<struct UNPCAIModifierProfile*> PropertyProfiles; // 0xF0(0x10)
};

// Object: Class MFNPCAI.NPCAIRoleModifierComponent
// Size: 0x28 (Inherited: 0x28)
struct UNPCAIRoleModifierComponent : UObject
{
	DEFINE_UE_CLASS_HELPERS(UNPCAIRoleModifierComponent, "NPCAIRoleModifierComponent")
};

// Object: Class MFNPCAI.NPCAISense_ComingExplosion
// Size: 0xE0 (Inherited: 0x78)
struct UNPCAISense_ComingExplosion : UAISense
{
	DEFINE_UE_CLASS_HELPERS(UNPCAISense_ComingExplosion, "NPCAISense_ComingExplosion")

	struct TArray<struct FNPCAIComingExplosionEvent> ExplosionEvents; // 0x78(0x10)
	uint8_t Pad_0x88[0x58]; // 0x88(0x58)

	// Object: Function MFNPCAI.NPCAISense_ComingExplosion.ReportComingExplosionEvent
	// Flags: [Final|Native|Static|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x3ca3000
	// Params: [ Num(6) Size(0x2C) ]
	static void ReportComingExplosionEvent(struct UObject* WorldContextObject, struct FVector NoiseLocation, float Damage, struct AActor* Instigator, float MaxRange, struct FName Tag);
};

// Object: Class MFNPCAI.NPCAISense_Damage
// Size: 0x88 (Inherited: 0x78)
struct UNPCAISense_Damage : UAISense
{
	DEFINE_UE_CLASS_HELPERS(UNPCAISense_Damage, "NPCAISense_Damage")

	struct TArray<struct FNPCAIDamageEvent> RegisteredEvents; // 0x78(0x10)

	// Object: Function MFNPCAI.NPCAISense_Damage.ReportDamageEvent
	// Flags: [Final|Native|Static|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x3ca32e8
	// Params: [ Num(7) Size(0x3C) ]
	static void ReportDamageEvent(struct UObject* WorldContextObject, struct AActor* DamagedActor, struct AActor* Instigator, float DamageAmount, struct FVector EventLocation, struct FVector HitLocation, struct FName Tag);

	// Object: Function MFNPCAI.NPCAISense_Damage.IsDamageStimulus
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x3ca31e0
	// Params: [ Num(2) Size(0x3D) ]
	static bool IsDamageStimulus(const struct FAIStimulus& Stimulus);
};

// Object: Class MFNPCAI.NPCAISense_Hearing
// Size: 0x178 (Inherited: 0xE0)
struct UNPCAISense_Hearing : UAISense_Hearing
{
	DEFINE_UE_CLASS_HELPERS(UNPCAISense_Hearing, "NPCAISense_Hearing")

	uint8_t Pad_0xE0[0x28]; // 0xE0(0x28)
	struct TArray<struct FAINoiseEvent> AINoiseEvents; // 0x108(0x10)
	struct TMap<struct AActor*, struct FAINoiseMakerInfo> NoiseMakerMap; // 0x118(0x50)
	struct TArray<struct AActor*> PlayerAIList; // 0x168(0x10)
};

// Object: Class MFNPCAI.NPCAISense_Sight
// Size: 0x1A0 (Inherited: 0x168)
struct UNPCAISense_Sight : UAISense_Sight
{
	DEFINE_UE_CLASS_HELPERS(UNPCAISense_Sight, "NPCAISense_Sight")

	uint8_t Pad_0x168[0x38]; // 0x168(0x38)
};

// Object: Class MFNPCAI.NPCAISenseConfig_ComingExplosion
// Size: 0x58 (Inherited: 0x48)
struct UNPCAISenseConfig_ComingExplosion : UAISenseConfig
{
	DEFINE_UE_CLASS_HELPERS(UNPCAISenseConfig_ComingExplosion, "NPCAISenseConfig_ComingExplosion")

	struct UNPCAISense_ComingExplosion* Implementation; // 0x48(0x8)
	float AwareRange; // 0x50(0x4)
	struct FAISenseAffiliationFilter DetectionByAffiliation; // 0x54(0x4)
};

// Object: Class MFNPCAI.NPCAISenseConfig_Damage
// Size: 0x50 (Inherited: 0x48)
struct UNPCAISenseConfig_Damage : UAISenseConfig
{
	DEFINE_UE_CLASS_HELPERS(UNPCAISenseConfig_Damage, "NPCAISenseConfig_Damage")

	struct UNPCAISense_Damage* Implementation; // 0x48(0x8)
};

// Object: Class MFNPCAI.NPCAISenseConfig_Hearing
// Size: 0x68 (Inherited: 0x60)
struct UNPCAISenseConfig_Hearing : UAISenseConfig_Hearing
{
	DEFINE_UE_CLASS_HELPERS(UNPCAISenseConfig_Hearing, "NPCAISenseConfig_Hearing")

	bool IsDebugHearingScope; // 0x60(0x1)
	uint8_t Pad_0x61[0x7]; // 0x61(0x7)
};

// Object: Class MFNPCAI.NPCAISenseConfig_Sight
// Size: 0x70 (Inherited: 0x70)
struct UNPCAISenseConfig_Sight : UAISenseConfig_Sight
{
	DEFINE_UE_CLASS_HELPERS(UNPCAISenseConfig_Sight, "NPCAISenseConfig_Sight")

	ENPCAISenseChannel AISightUseChannel; // 0x6C(0x1)
	ENPCAISenseChannel WeaponUseChannel; // 0x6D(0x1)
};

// Object: Class MFNPCAI.NPCAISenseEvent_ComingExplosion
// Size: 0x58 (Inherited: 0x28)
struct UNPCAISenseEvent_ComingExplosion : UAISenseEvent
{
	DEFINE_UE_CLASS_HELPERS(UNPCAISenseEvent_ComingExplosion, "NPCAISenseEvent_ComingExplosion")

	struct FNPCAIComingExplosionEvent Event; // 0x28(0x30)
};

// Object: Class MFNPCAI.NPCAISenseEvent_Damage
// Size: 0x60 (Inherited: 0x28)
struct UNPCAISenseEvent_Damage : UAISenseEvent
{
	DEFINE_UE_CLASS_HELPERS(UNPCAISenseEvent_Damage, "NPCAISenseEvent_Damage")

	struct FNPCAIDamageEvent Event; // 0x28(0x38)
};

// Object: Class MFNPCAI.NPCAISenseSourceInterface
// Size: 0x28 (Inherited: 0x28)
struct INPCAISenseSourceInterface : IInterface
{
	DEFINE_UE_CLASS_HELPERS(INPCAISenseSourceInterface, "NPCAISenseSourceInterface")

	// Object: Function MFNPCAI.NPCAISenseSourceInterface.GetAISenseSourceType
	// Flags: [Native|Public]
	// Offset: 0x3ca63b0
	// Params: [ Num(1) Size(0x1) ]
	EAISenseSourceType GetAISenseSourceType();
};

// Object: Class MFNPCAI.NPCAISettingsComponent
// Size: 0xE0 (Inherited: 0xE0)
struct UNPCAISettingsComponent : UActorComponent
{
	DEFINE_UE_CLASS_HELPERS(UNPCAISettingsComponent, "NPCAISettingsComponent")
};

// Object: Class MFNPCAI.NPCAISpawnPoint
// Size: 0x328 (Inherited: 0x328)
struct ANPCAISpawnPoint : ANavigationObjectBase
{
	DEFINE_UE_CLASS_HELPERS(ANPCAISpawnPoint, "NPCAISpawnPoint")

	bool bCanBePlacedOnIsolateRegion; // 0x321(0x1)
};

// Object: Class MFNPCAI.NPCAIStatics
// Size: 0x28 (Inherited: 0x28)
struct UNPCAIStatics : UBlueprintFunctionLibrary
{
	DEFINE_UE_CLASS_HELPERS(UNPCAIStatics, "NPCAIStatics")

	// Object: Function MFNPCAI.NPCAIStatics.VectorsIsClosed
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable]
	// Offset: 0x3ca96b8
	// Params: [ Num(5) Size(0x21) ]
	static bool VectorsIsClosed(const struct FVector& A, const struct FVector& B, float XYRange, float ZRange);

	// Object: Function MFNPCAI.NPCAIStatics.VectorClockwiseAngleR
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure]
	// Offset: 0x3ca9934
	// Params: [ Num(3) Size(0x1C) ]
	static float VectorClockwiseAngleR(const struct FVector& A, const struct FVector& B);

	// Object: Function MFNPCAI.NPCAIStatics.VectorAngleR
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure]
	// Offset: 0x3ca9b74
	// Params: [ Num(4) Size(0x20) ]
	static float VectorAngleR(const struct FVector& A, const struct FVector& B, bool bDoNomalize);

	// Object: Function MFNPCAI.NPCAIStatics.VectorAngleIsClockwise
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure]
	// Offset: 0x3ca9838
	// Params: [ Num(3) Size(0x19) ]
	static bool VectorAngleIsClockwise(const struct FVector& A, const struct FVector& B);

	// Object: Function MFNPCAI.NPCAIStatics.VectorAngleD
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure]
	// Offset: 0x3ca9a2c
	// Params: [ Num(4) Size(0x20) ]
	static float VectorAngleD(const struct FVector& A, const struct FVector& B, bool bDoNomalize);

	// Object: Function MFNPCAI.NPCAIStatics.UnProne
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3cab244
	// Params: [ Num(1) Size(0x8) ]
	static void UnProne(struct ACharacter* AICharacter);

	// Object: Function MFNPCAI.NPCAIStatics.UnCrouch
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3cab374
	// Params: [ Num(1) Size(0x8) ]
	static void UnCrouch(struct ACharacter* AICharacter);

	// Object: Function MFNPCAI.NPCAIStatics.TakeDamage
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x3cab718
	// Params: [ Num(6) Size(0x34) ]
	static float TakeDamage(struct AActor* Actor, float Damage, const struct FDamageEvent& DamageEvent, struct AController* EventInstigator, struct AActor* DamageCauser);

	// Object: Function MFNPCAI.NPCAIStatics.StopToTakeCover
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3cab550
	// Params: [ Num(1) Size(0x8) ]
	static void StopToTakeCover(struct ACharacter* AICharacter);

	// Object: Function MFNPCAI.NPCAIStatics.StopActiveMovement
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3cab1ac
	// Params: [ Num(1) Size(0x8) ]
	static void StopActiveMovement(struct ACharacter* AICharacter);

	// Object: Function MFNPCAI.NPCAIStatics.SpawnAnyActorInEditor
	// Flags: [Final|Native|Static|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x3ca6418
	// Params: [ Num(4) Size(0x48) ]
	static struct AActor* SpawnAnyActorInEditor(struct UObject* WorldContext, struct AActor* ActorClass, struct FTransform InTransform);

	// Object: Function MFNPCAI.NPCAIStatics.SortIntArraySelf
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x3caa400
	// Params: [ Num(2) Size(0x11) ]
	static void SortIntArraySelf(struct TArray<int32_t>& InVal, bool bUpped);

	// Object: Function MFNPCAI.NPCAIStatics.SortIntArrayCopy
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x3caa2a0
	// Params: [ Num(3) Size(0x21) ]
	static void SortIntArrayCopy(const struct TArray<int32_t>& InVal, struct TArray<int32_t>& out_ref, bool bUpped);

	// Object: Function MFNPCAI.NPCAIStatics.SortFloatArraySelf
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x3caa19c
	// Params: [ Num(2) Size(0x11) ]
	static void SortFloatArraySelf(struct TArray<float>& InVal, bool bUpped);

	// Object: Function MFNPCAI.NPCAIStatics.SortFloatArrayCopy
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x3caa03c
	// Params: [ Num(3) Size(0x21) ]
	static void SortFloatArrayCopy(const struct TArray<float>& InVal, struct TArray<float>& out_ref, bool bUpped);

	// Object: Function MFNPCAI.NPCAIStatics.SetShootCountRnage
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3cab084
	// Params: [ Num(4) Size(0x11) ]
	static bool SetShootCountRnage(struct ACharacter* AICharacter, int32_t MinRecalcCount, int32_t MaxRecalcCount);

	// Object: Function MFNPCAI.NPCAIStatics.SetCollisionByFBox
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable]
	// Offset: 0x3ca6574
	// Params: [ Num(2) Size(0x24) ]
	static void SetCollisionByFBox(struct UBoxComponent* BoxCollision, const struct FBox& Box);

	// Object: Function MFNPCAI.NPCAIStatics.SetAIProjectileRatio
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3cabe34
	// Params: [ Num(2) Size(0xC) ]
	static void SetAIProjectileRatio(struct AActor* InAICharacter, float InResist);

	// Object: Function MFNPCAI.NPCAIStatics.SetAIDotRatio
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3cabd5c
	// Params: [ Num(2) Size(0xC) ]
	static void SetAIDotRatio(struct AActor* InAICharacter, float InResist);

	// Object: Function MFNPCAI.NPCAIStatics.SetAIBulletRatio
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3cabf0c
	// Params: [ Num(2) Size(0xC) ]
	static void SetAIBulletRatio(struct AActor* InAICharacter, float InResist);

	// Object: Function MFNPCAI.NPCAIStatics.RotateOnAngleUp
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure]
	// Offset: 0x3ca9cbc
	// Params: [ Num(3) Size(0x1C) ]
	static struct FVector RotateOnAngleUp(const struct FVector& InVector, float InAngleDegree);

	// Object: Function MFNPCAI.NPCAIStatics.RInterpTo
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults]
	// Offset: 0x3ca7810
	// Params: [ Num(6) Size(0x30) ]
	static struct FRotator RInterpTo(const struct FRotator& Current, const struct FRotator& Target, float DeltaTime, float InterpSpeedPitch, float InterpSpeedYaw);

	// Object: Function MFNPCAI.NPCAIStatics.RInterpConstantTo
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults]
	// Offset: 0x3ca79d0
	// Params: [ Num(6) Size(0x30) ]
	static struct FRotator RInterpConstantTo(const struct FRotator& Current, const struct FRotator& Target, float DeltaTime, float InterpSpeedPitch, float InterpSpeedYaw);

	// Object: Function MFNPCAI.NPCAIStatics.RemoveItemsFromVectors
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable]
	// Offset: 0x3ca908c
	// Params: [ Num(4) Size(0x24) ]
	static void RemoveItemsFromVectors(const struct TArray<struct FVector>& inArray, const struct FVector& Location, float XYRange, float ZRange);

	// Object: Function MFNPCAI.NPCAIStatics.RegisterPawnToSenseSource
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3caab98
	// Params: [ Num(1) Size(0x8) ]
	static void RegisterPawnToSenseSource(struct AActor* InAIPawn);

	// Object: Function MFNPCAI.NPCAIStatics.RandomNormal
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3caa504
	// Params: [ Num(3) Size(0xC) ]
	static float RandomNormal(float Min, float Max);

	// Object: Function MFNPCAI.NPCAIStatics.Prone
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3cab2dc
	// Params: [ Num(1) Size(0x8) ]
	static void Prone(struct ACharacter* AICharacter);

	// Object: Function MFNPCAI.NPCAIStatics.PrintBTNodeExecuteMessageWithEventName
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3caa6cc
	// Params: [ Num(6) Size(0x48) ]
	static void PrintBTNodeExecuteMessageWithEventName(struct AActor* InActor, struct UBTNode* InNode, struct FString Tag, struct FString Message, bool bLogTime, struct FString FnName);

	// Object: Function MFNPCAI.NPCAIStatics.PrintBTNodeExecuteMessage
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3caa8d4
	// Params: [ Num(5) Size(0x31) ]
	static void PrintBTNodeExecuteMessage(struct AActor* InActor, struct UBTNode* InNode, struct FString Tag, struct FString Message, bool bLogTime);

	// Object: Function MFNPCAI.NPCAIStatics.PrintBPLog
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3caafa0
	// Params: [ Num(2) Size(0x14) ]
	static void PrintBPLog(struct FString Content, int32_t Verbosity);

	// Object: Function MFNPCAI.NPCAIStatics.PlayAISoundByType
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3caaa88
	// Params: [ Num(2) Size(0x9) ]
	static void PlayAISoundByType(struct ACharacter* AICharacter, EAISoundType CurrType);

	// Object: Function MFNPCAI.NPCAIStatics.LogBPEnumDefaultNames
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3ca6654
	// Params: [ Num(1) Size(0x8) ]
	static void LogBPEnumDefaultNames(struct UObject* BPEnum);

	// Object: Function MFNPCAI.NPCAIStatics.LineTraceIsHitWithResult
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable]
	// Offset: 0x3ca7f4c
	// Params: [ Num(9) Size(0xD9) ]
	static bool LineTraceIsHitWithResult(struct UObject* WorldContext, const struct FVector& StartPos, const struct FVector& EndPos, uint8_t TraceChannel, bool bTraceComplex, const struct TArray<struct AActor*>& ActorsToIgnore, bool bIgnoreSelf, struct FHitResult& HitResult);

	// Object: Function MFNPCAI.NPCAIStatics.LineTraceIsHitFoliageOrSmoke
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable]
	// Offset: 0x3ca822c
	// Params: [ Num(4) Size(0x21) ]
	static bool LineTraceIsHitFoliageOrSmoke(struct AActor* AIPawn, const struct FVector& StartPos, const struct FVector& EndPos);

	// Object: Function MFNPCAI.NPCAIStatics.LineTraceIsHit
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable]
	// Offset: 0x3ca8368
	// Params: [ Num(7) Size(0x39) ]
	static bool LineTraceIsHit(struct UObject* WorldContext, const struct FVector& StartPos, const struct FVector& EndPos, uint8_t TraceChannel, bool bTraceComplex, const struct TArray<struct AActor*>& ActorsToIgnore);

	// Object: Function MFNPCAI.NPCAIStatics.LineCylinderIntersection
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults]
	// Offset: 0x3ca9418
	// Params: [ Num(6) Size(0x2D) ]
	static bool LineCylinderIntersection(const struct FVector& LineStartPoint, const struct FVector& LineEndPoint, const struct FVector& CylinderCenter, const float& CylinderZExtent, const float& CylinderRadius);

	// Object: Function MFNPCAI.NPCAIStatics.IsZombieAICharacter
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3cad0d0
	// Params: [ Num(2) Size(0x9) ]
	static bool IsZombieAICharacter(struct AActor* InAIPawn);

	// Object: Function MFNPCAI.NPCAIStatics.IsVolumeEncompassesPoint
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable]
	// Offset: 0x3ca7b90
	// Params: [ Num(5) Size(0x1D) ]
	static bool IsVolumeEncompassesPoint(struct AVolume* Volume, const struct FVector& Point, float SphereRadius, float& OutDistance);

	// Object: Function MFNPCAI.NPCAIStatics.IsVehicleActor
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x3caca20
	// Params: [ Num(2) Size(0x9) ]
	static bool IsVehicleActor(struct AActor* InActor);

	// Object: Function MFNPCAI.NPCAIStatics.IsValidLocation
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults]
	// Offset: 0x3ca775c
	// Params: [ Num(2) Size(0xD) ]
	static bool IsValidLocation(const struct FVector& Location);

	// Object: Function MFNPCAI.NPCAIStatics.IsTeamFriendly
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3ca8b34
	// Params: [ Num(3) Size(0x11) ]
	static bool IsTeamFriendly(struct AActor* AIPawn, struct AActor* InTarget);

	// Object: Function MFNPCAI.NPCAIStatics.IsTeamEnemy
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3ca8d04
	// Params: [ Num(3) Size(0x11) ]
	static bool IsTeamEnemy(struct AActor* AIPawn, struct AActor* InTarget);

	// Object: Function MFNPCAI.NPCAIStatics.IsTeamAlly
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3ca8c1c
	// Params: [ Num(3) Size(0x11) ]
	static bool IsTeamAlly(struct AActor* AIPawn, struct AActor* InTarget);

	// Object: Function MFNPCAI.NPCAIStatics.IsTeachingAI
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3cacc1c
	// Params: [ Num(2) Size(0x9) ]
	static bool IsTeachingAI(struct AActor* InPawnOrCtrl);

	// Object: Function MFNPCAI.NPCAIStatics.IsTargetDead
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3cabbc8
	// Params: [ Num(3) Size(0x11) ]
	static bool IsTargetDead(struct AActor* AIPawn, struct AActor* TargetPawn);

	// Object: Function MFNPCAI.NPCAIStatics.IsTakingCover
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3cab4a4
	// Params: [ Num(2) Size(0x9) ]
	static bool IsTakingCover(struct ACharacter* AICharacter);

	// Object: Function MFNPCAI.NPCAIStatics.IsStandaloneTutorialGame
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3ca6a04
	// Params: [ Num(2) Size(0x9) ]
	static bool IsStandaloneTutorialGame(struct UObject* WorldContext);

	// Object: Function MFNPCAI.NPCAIStatics.IsSameFrame
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x3ca6874
	// Params: [ Num(3) Size(0x9) ]
	static bool IsSameFrame(float T1, float T2);

	// Object: Function MFNPCAI.NPCAIStatics.IsPMCAI
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3caccc8
	// Params: [ Num(2) Size(0x9) ]
	static bool IsPMCAI(struct AActor* InPawnOrCtrl);

	// Object: Function MFNPCAI.NPCAIStatics.IsPlayingAnimation
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3cac3e4
	// Params: [ Num(2) Size(0x9) ]
	static bool IsPlayingAnimation(struct ACharacter* InAI);

	// Object: Function MFNPCAI.NPCAIStatics.IsPlayerTeammateAI
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3cac81c
	// Params: [ Num(2) Size(0x9) ]
	static bool IsPlayerTeammateAI(struct AActor* AIPawn);

	// Object: Function MFNPCAI.NPCAIStatics.IsNPCBoss
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3cad024
	// Params: [ Num(2) Size(0x9) ]
	static bool IsNPCBoss(struct AActor* InAIPawn);

	// Object: Function MFNPCAI.NPCAIStatics.IsNPCAIMakeNoiseEnabled
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x3caab60
	// Params: [ Num(1) Size(0x1) ]
	static bool IsNPCAIMakeNoiseEnabled();

	// Object: Function MFNPCAI.NPCAIStatics.IsNPCAICharacter
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3cad17c
	// Params: [ Num(2) Size(0x9) ]
	static bool IsNPCAICharacter(struct AActor* InAIPawn);

	// Object: Function MFNPCAI.NPCAIStatics.IsNormalScav
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3cacf78
	// Params: [ Num(2) Size(0x9) ]
	static bool IsNormalScav(struct AActor* InAIPawn);

	// Object: Function MFNPCAI.NPCAIStatics.IsMoving
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3cac28c
	// Params: [ Num(2) Size(0x9) ]
	static bool IsMoving(struct ACharacter* Character);

	// Object: Function MFNPCAI.NPCAIStatics.IsLastMoveSuccess
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3cac338
	// Params: [ Num(2) Size(0x9) ]
	static bool IsLastMoveSuccess(struct ACharacter* InAI);

	// Object: Function MFNPCAI.NPCAIStatics.IsInGrass
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3ca88bc
	// Params: [ Num(3) Size(0x11) ]
	static bool IsInGrass(struct ACharacter* InCharacter, struct ANPCAIPerceptionAssistActor* PerceptionAssist);

	// Object: Function MFNPCAI.NPCAIStatics.IsInAbilityState
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x3caaea8
	// Params: [ Num(3) Size(0x11) ]
	static bool IsInAbilityState(struct ACharacter* AIPawn, const struct FName& GameplayTagName);

	// Object: Function MFNPCAI.NPCAIStatics.IsFacingTargetPoint
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable]
	// Offset: 0x3ca9db0
	// Params: [ Num(5) Size(0x1A) ]
	static bool IsFacingTargetPoint(struct AActor* AIPawn, const struct FVector& ToPoint, float AngleDLimit, uint8_t UseCtrlROrActorR);

	// Object: Function MFNPCAI.NPCAIStatics.IsEnemy
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3ca8dec
	// Params: [ Num(3) Size(0x11) ]
	static bool IsEnemy(struct AActor* AIPawn, struct AActor* InTarget);

	// Object: Function MFNPCAI.NPCAIStatics.IsEnabledBTNodeShared
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3ca6ab0
	// Params: [ Num(1) Size(0x1) ]
	static bool IsEnabledBTNodeShared();

	// Object: Function MFNPCAI.NPCAIStatics.IsEnabledBTNodeOptimize
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3ca6ae8
	// Params: [ Num(1) Size(0x1) ]
	static bool IsEnabledBTNodeOptimize();

	// Object: Function MFNPCAI.NPCAIStatics.IsEliteScav
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3cacecc
	// Params: [ Num(2) Size(0x9) ]
	static bool IsEliteScav(struct AActor* InAIPawn);

	// Object: Function MFNPCAI.NPCAIStatics.IsDroneBroken
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3cac8c8
	// Params: [ Num(2) Size(0x9) ]
	static bool IsDroneBroken(struct AActor* InPawn);

	// Object: Function MFNPCAI.NPCAIStatics.IsDroneActor
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3cac974
	// Params: [ Num(2) Size(0x9) ]
	static bool IsDroneActor(struct AActor* InActor);

	// Object: Function MFNPCAI.NPCAIStatics.IsDead
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3cabcb0
	// Params: [ Num(2) Size(0x9) ]
	static bool IsDead(struct AActor* Actor);

	// Object: Function MFNPCAI.NPCAIStatics.IsBossFollower
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3cacd74
	// Params: [ Num(2) Size(0x9) ]
	static bool IsBossFollower(struct AActor* InAIPawn);

	// Object: Function MFNPCAI.NPCAIStatics.IsAllyAI
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3cace20
	// Params: [ Num(2) Size(0x9) ]
	static bool IsAllyAI(struct AActor* InAIPawn);

	// Object: Function MFNPCAI.NPCAIStatics.IsAIReady
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3cabfe4
	// Params: [ Num(2) Size(0x9) ]
	static bool IsAIReady(struct AActor* Actor);

	// Object: Function MFNPCAI.NPCAIStatics.IsAIInfluenceByWeather
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x3ca66ec
	// Params: [ Num(1) Size(0x1) ]
	static bool IsAIInfluenceByWeather();

	// Object: Function MFNPCAI.NPCAIStatics.IsAIActive
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3cac090
	// Params: [ Num(2) Size(0x9) ]
	static bool IsAIActive(struct AActor* Actor);

	// Object: Function MFNPCAI.NPCAIStatics.HasAnyPlayerAround
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3ca7ea0
	// Params: [ Num(2) Size(0x9) ]
	static bool HasAnyPlayerAround(struct AActor* Actor);

	// Object: Function MFNPCAI.NPCAIStatics.GetWeaponUseTraceChannel
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3caad58
	// Params: [ Num(2) Size(0x9) ]
	static uint8_t GetWeaponUseTraceChannel(struct ACharacter* AICharacter);

	// Object: Function MFNPCAI.NPCAIStatics.GetTimeSeconds
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x3ca695c
	// Params: [ Num(2) Size(0xC) ]
	static float GetTimeSeconds(struct UObject* WorldContext);

	// Object: Function MFNPCAI.NPCAIStatics.GetTargetViewRotation
	// Flags: [Final|Native|Static|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x3cabae0
	// Params: [ Num(3) Size(0x1C) ]
	static struct FRotator GetTargetViewRotation(struct AActor* AIPawn, struct AActor* TargetPawn);

	// Object: Function MFNPCAI.NPCAIStatics.GetTargetCharacter
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3cac624
	// Params: [ Num(2) Size(0x10) ]
	static struct ACharacter* GetTargetCharacter(struct AActor* InActor);

	// Object: Function MFNPCAI.NPCAIStatics.GetTacticSystemActor
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3ca7338
	// Params: [ Num(2) Size(0x10) ]
	static struct ATacticSystemActor* GetTacticSystemActor(struct UObject* WorldContext);

	// Object: Function MFNPCAI.NPCAIStatics.GetSingleBodyPartLocation
	// Flags: [Final|Native|Static|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x3caac30
	// Params: [ Num(4) Size(0x20) ]
	static struct FVector GetSingleBodyPartLocation(struct ACharacter* InAICharacter, struct ACharacter* InCheckTarget, EAIBodyPartType InBodyPartType);

	// Object: Function MFNPCAI.NPCAIStatics.GetRandomFoliageTree
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable]
	// Offset: 0x3ca8674
	// Params: [ Num(8) Size(0x39) ]
	static bool GetRandomFoliageTree(struct UObject* WorldContext, const struct FVector& InCenter, struct FVector& OutLocation, struct FVector& OutExtent, float InRadiusScope, float TreeMinHeight, float TreeMaxHeight);

	// Object: Function MFNPCAI.NPCAIStatics.GetPerceptionAssistInWorld
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3ca73e0
	// Params: [ Num(2) Size(0x10) ]
	static struct ANPCAIPerceptionAssistActor* GetPerceptionAssistInWorld(struct UObject* WorldContext);

	// Object: Function MFNPCAI.NPCAIStatics.GetPerceptionAssistActor
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3ca75d8
	// Params: [ Num(2) Size(0x10) ]
	static struct ANPCAIPerceptionAssistActor* GetPerceptionAssistActor(struct UObject* WorldContext);

	// Object: Function MFNPCAI.NPCAIStatics.GetOrCreateGroupRequestController
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3ca6b20
	// Params: [ Num(2) Size(0x10) ]
	static struct UNPCAIGroupRequestController* GetOrCreateGroupRequestController(struct ACharacter* InAICharacter);

	// Object: Function MFNPCAI.NPCAIStatics.GetLookSightUseTraceChannel
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3caae00
	// Params: [ Num(2) Size(0x9) ]
	static uint8_t GetLookSightUseTraceChannel(struct ACharacter* AICharacter);

	// Object: Function MFNPCAI.NPCAIStatics.GetLocation
	// Flags: [Final|Native|Static|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x3cac490
	// Params: [ Num(2) Size(0x14) ]
	static struct FVector GetLocation(struct AActor* InAI);

	// Object: Function MFNPCAI.NPCAIStatics.GetHierarchicalNavigation
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3ca89a4
	// Params: [ Num(2) Size(0x10) ]
	static struct ANPCAIHNavActor* GetHierarchicalNavigation(struct UObject* WorldContextObject);

	// Object: Function MFNPCAI.NPCAIStatics.GetHealthMax
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3cac13c
	// Params: [ Num(2) Size(0xC) ]
	static float GetHealthMax(struct AActor* Actor);

	// Object: Function MFNPCAI.NPCAIStatics.GetHealth
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3cac1e4
	// Params: [ Num(2) Size(0xC) ]
	static float GetHealth(struct AActor* Actor);

	// Object: Function MFNPCAI.NPCAIStatics.GetGroupRequestController
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3ca6bc8
	// Params: [ Num(2) Size(0x10) ]
	static struct UNPCAIGroupRequestController* GetGroupRequestController(struct ACharacter* InAICharacter);

	// Object: Function MFNPCAI.NPCAIStatics.GetFBoxVertexs2D
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults]
	// Offset: 0x3ca9210
	// Params: [ Num(2) Size(0x30) ]
	static void GetFBoxVertexs2D(const struct FBox& Box, struct TArray<struct FVector2D>& Vertexs);

	// Object: Function MFNPCAI.NPCAIStatics.GetFBoxVertexs
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults]
	// Offset: 0x3ca9314
	// Params: [ Num(2) Size(0x30) ]
	static void GetFBoxVertexs(const struct FBox& Box, struct TArray<struct FVector>& Vertexs);

	// Object: Function MFNPCAI.NPCAIStatics.GetEQSData
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3ca8a4c
	// Params: [ Num(3) Size(0x18) ]
	static struct UNPCAICoverEnvQueryData* GetEQSData(struct AActor* AIPawn, int32_t QueryID);

	// Object: Function MFNPCAI.NPCAIStatics.GetDroneCharacterOwner
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3cac774
	// Params: [ Num(2) Size(0x10) ]
	static struct ACharacter* GetDroneCharacterOwner(struct AActor* InActor);

	// Object: Function MFNPCAI.NPCAIStatics.GetDroneCharacterItemId
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3cac6cc
	// Params: [ Num(2) Size(0x10) ]
	static int64_t GetDroneCharacterItemId(struct AActor* InDronePawn);

	// Object: Function MFNPCAI.NPCAIStatics.GetCurrentWeatherAIKnown
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x3ca6724
	// Params: [ Num(2) Size(0xC) ]
	static float GetCurrentWeatherAIKnown(struct AActor* AIPawn);

	// Object: Function MFNPCAI.NPCAIStatics.GetCurrentFogDensity
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3ca67cc
	// Params: [ Num(2) Size(0xC) ]
	static float GetCurrentFogDensity(struct UObject* WorldContext);

	// Object: Function MFNPCAI.NPCAIStatics.GetCoverSystemActor
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3ca7290
	// Params: [ Num(2) Size(0x10) ]
	static struct ACoverSystemActor* GetCoverSystemActor(struct UObject* WorldContext);

	// Object: Function MFNPCAI.NPCAIStatics.GetBodyPartEndurace
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3cab9bc
	// Params: [ Num(4) Size(0x18) ]
	static float GetBodyPartEndurace(struct AActor* InAIPawn, struct AActor* InTargetPawn, EAIBodyPartType InBodyPart);

	// Object: Function MFNPCAI.NPCAIStatics.GetAngOfNormazedVectors
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable]
	// Offset: 0x3ca7d10
	// Params: [ Num(5) Size(0x20) ]
	static float GetAngOfNormazedVectors(const struct FVector& v1, const struct FVector& v2, bool ToAngle, bool ToAbs);

	// Object: Function MFNPCAI.NPCAIStatics.GetAISGDoorManager
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3ca7488
	// Params: [ Num(2) Size(0x10) ]
	static struct UAISGDoorManager* GetAISGDoorManager(struct UObject* WorldContext);

	// Object: Function MFNPCAI.NPCAIStatics.GetAISceneEventsTriggerManager
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3ca7530
	// Params: [ Num(2) Size(0x10) ]
	static struct UAISceneEventsTriggerManager* GetAISceneEventsTriggerManager(struct UObject* WorldContext);

	// Object: Function MFNPCAI.NPCAIStatics.GetAIPropertyComponentByClass
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3ca6c70
	// Params: [ Num(3) Size(0x18) ]
	static struct UNPCAIPropertyComponent* GetAIPropertyComponentByClass(struct AAIController* InAIController, struct UNPCAIPropertyComponent* InPropertyClass);

	// Object: Function MFNPCAI.NPCAIStatics.GetAIPerceptionDynamicActor
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3ca7680
	// Params: [ Num(2) Size(0x10) ]
	static struct ANPCAIPerceptionDynamicActor* GetAIPerceptionDynamicActor(struct UObject* WorldContext);

	// Object: Function MFNPCAI.NPCAIStatics.GetAIMainType
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x3cacb74
	// Params: [ Num(2) Size(0x9) ]
	static EAIMainType GetAIMainType(struct AActor* InPawnOrCtrl);

	// Object: Function MFNPCAI.NPCAIStatics.GetAIJobType
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x3cacacc
	// Params: [ Num(2) Size(0x9) ]
	static ENPCAIJobType GetAIJobType(struct AActor* InPawn);

	// Object: Function MFNPCAI.NPCAIStatics.GetAIController
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3cad228
	// Params: [ Num(2) Size(0x10) ]
	static struct AAIController* GetAIController(struct AActor* InAI);

	// Object: Function MFNPCAI.NPCAIStatics.GetAICharacter
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3cad2d0
	// Params: [ Num(2) Size(0x10) ]
	static struct ACharacter* GetAICharacter(struct AActor* InAI);

	// Object: Function MFNPCAI.NPCAIStatics.GetAIBodyPartTypeByHitGroupType
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3cac53c
	// Params: [ Num(3) Size(0xA) ]
	static EAIBodyPartType GetAIBodyPartTypeByHitGroupType(struct AActor* InAIPawn, uint8_t HitGroupType);

	// Object: Function MFNPCAI.NPCAIStatics.FindNearestFromVectors
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable]
	// Offset: 0x3ca8ed4
	// Params: [ Num(5) Size(0x2D) ]
	static bool FindNearestFromVectors(const struct TArray<struct FVector>& inArray, const struct FVector& Location, struct FVector& OutPoint, float& OutMinDistance);

	// Object: Function MFNPCAI.NPCAIStatics.Crouch
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3cab40c
	// Params: [ Num(1) Size(0x8) ]
	static void Crouch(struct ACharacter* AICharacter);

	// Object: Function MFNPCAI.NPCAIStatics.CreateSimpleUniqueID
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x3ca7728
	// Params: [ Num(1) Size(0x4) ]
	static int32_t CreateSimpleUniqueID();

	// Object: Function MFNPCAI.NPCAIStatics.CreateRandom
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3caa5e8
	// Params: [ Num(3) Size(0xC) ]
	static float CreateRandom(float Value, float Fraction);

	// Object: Function MFNPCAI.NPCAIStatics.CanbeRevived
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3cab8d4
	// Params: [ Num(3) Size(0x11) ]
	static bool CanbeRevived(struct AActor* InAIPawn, struct ACharacter* TargetChar);

	// Object: Function MFNPCAI.NPCAIStatics.CalculateCharacterInLightValue
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3ca8590
	// Params: [ Num(3) Size(0x14) ]
	static int32_t CalculateCharacterInLightValue(struct ACharacter* InAICharacter, struct ACharacter* InTarget);

	// Object: Function MFNPCAI.NPCAIStatics.BoxMullerNormal
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x3ca9f24
	// Params: [ Num(1) Size(0x8) ]
	static double BoxMullerNormal();

	// Object: Function MFNPCAI.NPCAIStatics.BoxMuller
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x3ca9f58
	// Params: [ Num(3) Size(0x18) ]
	static double BoxMuller(double Mean, double StdDev);

	// Object: Function MFNPCAI.NPCAIStatics.BoardcastDrawDebugLine
	// Flags: [Final|Native|Static|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x3ca7080
	// Params: [ Num(7) Size(0x30) ]
	static void BoardcastDrawDebugLine(struct AAIController* InAIController, int32_t InDrawID, struct FVector InStart, struct FVector InEnd, struct FColor InColor, float InTime, float InThickness);

	// Object: Function MFNPCAI.NPCAIStatics.BeginToTakeCoverCrouch
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3cab5e8
	// Params: [ Num(1) Size(0x8) ]
	static void BeginToTakeCoverCrouch(struct ACharacter* AICharacter);

	// Object: Function MFNPCAI.NPCAIStatics.BeginToTakeCover
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3cab680
	// Params: [ Num(1) Size(0x8) ]
	static void BeginToTakeCover(struct ACharacter* AICharacter);

	// Object: Function MFNPCAI.NPCAIStatics.AngleNormalized360
	// Flags: [Final|Native|Static|Public|HasOutParms]
	// Offset: 0x3ca9604
	// Params: [ Num(2) Size(0x8) ]
	static float AngleNormalized360(const float& Value);

	// Object: Function MFNPCAI.NPCAIStatics.AIDebugPrintSingleMessage
	// Flags: [Final|Native|Static|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x8aee2c8
	// Params: [ Num(10) Size(0x49) ]
	static void AIDebugPrintSingleMessage(struct UObject* WorldContext, struct FString Tag, struct FString Content, bool ToScreen, bool ToLog, bool ToShippingLog, struct FLinearColor LinearColor, float Duration, struct AActor* AIActor, bool bIsErrorLog);

	// Object: Function MFNPCAI.NPCAIStatics.AIDebugPrintMultiMessage
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable]
	// Offset: 0x3ca6d54
	// Params: [ Num(10) Size(0x49) ]
	static void AIDebugPrintMultiMessage(struct UObject* WorldContext, struct FString Tag, const struct TArray<struct FString>& Content, bool ToScreen, bool ToLog, bool ToShippingLog, struct FLinearColor LinearColor, float Duration, struct AActor* AIActor, bool bIsErrorLog);
};

// Object: Class MFNPCAI.NPCAIStaticsInterface
// Size: 0x28 (Inherited: 0x28)
struct INPCAIStaticsInterface : IInterface
{
	DEFINE_UE_CLASS_HELPERS(INPCAIStaticsInterface, "NPCAIStaticsInterface")

	// Object: Function MFNPCAI.NPCAIStaticsInterface.SetCharacterSignificanceImportant
	// Flags: [Native|Public]
	// Offset: 0x3cafa5c
	// Params: [ Num(2) Size(0x9) ]
	void SetCharacterSignificanceImportant(struct ACharacter* TargetCharacter, bool IsImportant);

	// Object: Function MFNPCAI.NPCAIStaticsInterface.SetAIProjectileRatio
	// Flags: [Native|Public]
	// Offset: 0x3cb1204
	// Params: [ Num(1) Size(0x4) ]
	void SetAIProjectileRatio(float InRatio);

	// Object: Function MFNPCAI.NPCAIStaticsInterface.SetAIDotRatio
	// Flags: [Native|Public]
	// Offset: 0x3cb1154
	// Params: [ Num(1) Size(0x4) ]
	void SetAIDotRatio(float InRatio);

	// Object: Function MFNPCAI.NPCAIStaticsInterface.SetAIBulletRatio
	// Flags: [Native|Public]
	// Offset: 0x3cb12b4
	// Params: [ Num(1) Size(0x4) ]
	void SetAIBulletRatio(float InRatio);

	// Object: Function MFNPCAI.NPCAIStaticsInterface.ModifyCurrentEndurance
	// Flags: [Native|Public]
	// Offset: 0x3cb146c
	// Params: [ Num(2) Size(0x5) ]
	bool ModifyCurrentEndurance(float MaxRatio);

	// Object: Function MFNPCAI.NPCAIStaticsInterface.IsVehicleRushMe
	// Flags: [Native|Public]
	// Offset: 0x3cb0050
	// Params: [ Num(3) Size(0xD) ]
	bool IsVehicleRushMe(struct AActor* InVehicle, float Radius);

	// Object: Function MFNPCAI.NPCAIStaticsInterface.IsTeamFriendly
	// Flags: [Native|Public]
	// Offset: 0x3cb20a0
	// Params: [ Num(2) Size(0x9) ]
	bool IsTeamFriendly(struct AActor* InTarget);

	// Object: Function MFNPCAI.NPCAIStaticsInterface.IsTeamEnemy
	// Flags: [Native|Public]
	// Offset: 0x3cb2218
	// Params: [ Num(2) Size(0x9) ]
	bool IsTeamEnemy(struct AActor* InTarget);

	// Object: Function MFNPCAI.NPCAIStaticsInterface.IsTeamAlly
	// Flags: [Native|Public]
	// Offset: 0x3cb215c
	// Params: [ Num(2) Size(0x9) ]
	bool IsTeamAlly(struct AActor* InTarget);

	// Object: Function MFNPCAI.NPCAIStaticsInterface.IsTargetInGhost
	// Flags: [Native|Public]
	// Offset: 0x3cb24cc
	// Params: [ Num(2) Size(0x9) ]
	bool IsTargetInGhost(struct AActor* TargetPawn);

	// Object: Function MFNPCAI.NPCAIStaticsInterface.IsTacticalPistolStatus
	// Flags: [Native|Public]
	// Offset: 0x3cb0748
	// Params: [ Num(1) Size(0x1) ]
	bool IsTacticalPistolStatus();

	// Object: Function MFNPCAI.NPCAIStaticsInterface.IsScavPlayer
	// Flags: [Native|Public]
	// Offset: 0x3cb1d2c
	// Params: [ Num(2) Size(0x9) ]
	bool IsScavPlayer(struct ACharacter* InPawn);

	// Object: Function MFNPCAI.NPCAIStaticsInterface.IsInTransitionAnim
	// Flags: [Native|Public]
	// Offset: 0x3cb27b8
	// Params: [ Num(2) Size(0x9) ]
	bool IsInTransitionAnim(struct ACharacter* Character);

	// Object: Function MFNPCAI.NPCAIStaticsInterface.IsInGhost
	// Flags: [Native|Public]
	// Offset: 0x3cb2588
	// Params: [ Num(1) Size(0x1) ]
	bool IsInGhost();

	// Object: Function MFNPCAI.NPCAIStaticsInterface.IsInAbilityState
	// Flags: [Native|Public|HasOutParms|Const]
	// Offset: 0x3cb292c
	// Params: [ Num(3) Size(0x11) ]
	bool IsInAbilityState(struct ACharacter* InPawn, const struct FName& GameplayTagName);

	// Object: Function MFNPCAI.NPCAIStaticsInterface.IsFriendlyFactionType
	// Flags: [Native|Public]
	// Offset: 0x3cb1eb4
	// Params: [ Num(2) Size(0x2) ]
	bool IsFriendlyFactionType(uint8_t RelationType);

	// Object: Function MFNPCAI.NPCAIStaticsInterface.IsEnemyMoveableArmorActor
	// Flags: [Native|Public]
	// Offset: 0x3cafdb4
	// Params: [ Num(3) Size(0x11) ]
	bool IsEnemyMoveableArmorActor(struct ACharacter* TargetCharacter, struct AActor* InActor);

	// Object: Function MFNPCAI.NPCAIStaticsInterface.IsEnemyCanProtected
	// Flags: [Native|Public]
	// Offset: 0x3cb0e48
	// Params: [ Num(3) Size(0xA) ]
	bool IsEnemyCanProtected(struct AActor* InTarget, EAIBodyPartType InBodyPart);

	// Object: Function MFNPCAI.NPCAIStaticsInterface.IsEnemyArmorCanProtected
	// Flags: [Native|Public]
	// Offset: 0x3cb0f44
	// Params: [ Num(2) Size(0x9) ]
	bool IsEnemyArmorCanProtected(struct AActor* InTarget);

	// Object: Function MFNPCAI.NPCAIStaticsInterface.IsCharacterInVehicle
	// Flags: [Native|Public]
	// Offset: 0x3cb0204
	// Params: [ Num(3) Size(0x11) ]
	bool IsCharacterInVehicle(struct ACharacter* TargetCharacter, struct AActor* InVehicle);

	// Object: Function MFNPCAI.NPCAIStaticsInterface.IsCanSeeOtherByUniqueIDUsedPathPoint
	// Flags: [Native|Public]
	// Offset: 0x3cb22d4
	// Params: [ Num(2) Size(0x5) ]
	bool IsCanSeeOtherByUniqueIDUsedPathPoint(int32_t OtherUniqueID);

	// Object: Function MFNPCAI.NPCAIStaticsInterface.IsBulletPenetrationActor
	// Flags: [Native|Public]
	// Offset: 0x3caf9a0
	// Params: [ Num(2) Size(0x9) ]
	bool IsBulletPenetrationActor(struct AActor* InCheckActor);

	// Object: Function MFNPCAI.NPCAIStaticsInterface.IsAIReady
	// Flags: [Native|Public]
	// Offset: 0x3cb2684
	// Params: [ Num(2) Size(0x9) ]
	bool IsAIReady(struct AActor* TargetPawn);

	// Object: Function MFNPCAI.NPCAIStaticsInterface.IsAIActive
	// Flags: [Native|Public]
	// Offset: 0x3cb25c8
	// Params: [ Num(2) Size(0x9) ]
	bool IsAIActive(struct AActor* TargetPawn);

	// Object: Function MFNPCAI.NPCAIStaticsInterface.InitAITrackLOGTemplateStr
	// Flags: [Native|Public|HasOutParms]
	// Offset: 0x3cb047c
	// Params: [ Num(2) Size(0x18) ]
	void InitAITrackLOGTemplateStr(EAITrackLOGType LogType, struct FString& TemplateStr);

	// Object: Function MFNPCAI.NPCAIStaticsInterface.HasEnabledMovableArmorActors
	// Flags: [Native|Public]
	// Offset: 0x3cb0708
	// Params: [ Num(1) Size(0x1) ]
	bool HasEnabledMovableArmorActors();

	// Object: Function MFNPCAI.NPCAIStaticsInterface.GetViewRotation
	// Flags: [Native|Public|HasDefaults]
	// Offset: 0x3cb0338
	// Params: [ Num(2) Size(0x14) ]
	struct FRotator GetViewRotation(struct AActor* InCharacter);

	// Object: Function MFNPCAI.NPCAIStaticsInterface.GetVehicleDriver
	// Flags: [Native|Public]
	// Offset: 0x3caff98
	// Params: [ Num(2) Size(0x10) ]
	struct ACharacter* GetVehicleDriver(struct AActor* InVehicle);

	// Object: Function MFNPCAI.NPCAIStaticsInterface.GetVehicleByDriverOrPassenger
	// Flags: [Native|Public]
	// Offset: 0x3cb014c
	// Params: [ Num(2) Size(0x10) ]
	struct AActor* GetVehicleByDriverOrPassenger(struct ACharacter* CharacterInVehicle);

	// Object: Function MFNPCAI.NPCAIStaticsInterface.GetTargetBodyPartEnduranceRatios
	// Flags: [Native|Public|HasOutParms]
	// Offset: 0x3cb1364
	// Params: [ Num(2) Size(0x18) ]
	void GetTargetBodyPartEnduranceRatios(struct AActor* InTarget, struct TArray<float>& OutEnduranceRatios);

	// Object: Function MFNPCAI.NPCAIStaticsInterface.GetSightScaleToTarget
	// Flags: [Native|Public]
	// Offset: 0x3cafcfc
	// Params: [ Num(2) Size(0xC) ]
	float GetSightScaleToTarget(struct ACharacter* InTarget);

	// Object: Function MFNPCAI.NPCAIStaticsInterface.GetProtectedArmor
	// Flags: [Native|Public]
	// Offset: 0x3cb0d50
	// Params: [ Num(3) Size(0x18) ]
	struct AActor* GetProtectedArmor(struct AActor* InTargetPawn, EAIBodyPartType InBodyPart);

	// Object: Function MFNPCAI.NPCAIStaticsInterface.GetPawnViewLocationIfStand
	// Flags: [Native|Public|HasDefaults]
	// Offset: 0x3cb0438
	// Params: [ Num(1) Size(0xC) ]
	struct FVector GetPawnViewLocationIfStand();

	// Object: Function MFNPCAI.NPCAIStaticsInterface.GetPawnViewLocationIfCrouch
	// Flags: [Native|Public|HasDefaults]
	// Offset: 0x3cb03f4
	// Params: [ Num(1) Size(0xC) ]
	struct FVector GetPawnViewLocationIfCrouch();

	// Object: Function MFNPCAI.NPCAIStaticsInterface.GetNearestPlayerList
	// Flags: [Native|Public|HasOutParms]
	// Offset: 0x3cb16dc
	// Params: [ Num(5) Size(0x1A) ]
	void GetNearestPlayerList(float InRadius, bool InSight, struct TArray<struct AActor*>& PlayerList, uint8_t TeamType, EAISenseBehaviorType Action);

	// Object: Function MFNPCAI.NPCAIStaticsInterface.GetNearestPlayer
	// Flags: [Native|Public]
	// Offset: 0x3cb18b8
	// Params: [ Num(5) Size(0x10) ]
	struct AActor* GetNearestPlayer(float InRadius, bool InSight, uint8_t TeamType, EAISenseBehaviorType Action);

	// Object: Function MFNPCAI.NPCAIStaticsInterface.GetHearingScaleToTarget
	// Flags: [Native|Public]
	// Offset: 0x3cafc44
	// Params: [ Num(2) Size(0xC) ]
	float GetHearingScaleToTarget(struct ACharacter* InTarget);

	// Object: Function MFNPCAI.NPCAIStaticsInterface.GetFootSounderThrower
	// Flags: [Native|Public|HasOutParms]
	// Offset: 0x3cb0840
	// Params: [ Num(3) Size(0x18) ]
	struct AActor* GetFootSounderThrower(struct AActor* Projectile, bool& OutbAttractAI);

	// Object: Function MFNPCAI.NPCAIStaticsInterface.GetFactionRelationTypeWithTarget
	// Flags: [Native|Public]
	// Offset: 0x3cb1f70
	// Params: [ Num(2) Size(0x9) ]
	uint8_t GetFactionRelationTypeWithTarget(struct ACharacter* TargetPawn);

	// Object: Function MFNPCAI.NPCAIStaticsInterface.GetEQSData
	// Flags: [Native|Public]
	// Offset: 0x3cb0584
	// Params: [ Num(2) Size(0x10) ]
	struct UNPCAICoverEnvQueryData* GetEQSData(int32_t QueryID);

	// Object: Function MFNPCAI.NPCAIStaticsInterface.GetEnabledMovableArmorActors
	// Flags: [Native|Public|HasOutParms]
	// Offset: 0x3cb063c
	// Params: [ Num(1) Size(0x10) ]
	void GetEnabledMovableArmorActors(struct TArray<struct AActor*>& OutMovableArmorActors);

	// Object: Function MFNPCAI.NPCAIStaticsInterface.GetCurrentWeather
	// Flags: [Native|Public]
	// Offset: 0x3cb02fc
	// Params: [ Num(1) Size(0x4) ]
	float GetCurrentWeather();

	// Object: Function MFNPCAI.NPCAIStaticsInterface.GetCurrentWeaponZoomInTimes
	// Flags: [Native|Public]
	// Offset: 0x3cb0788
	// Params: [ Num(2) Size(0xC) ]
	float GetCurrentWeaponZoomInTimes(struct AActor* TargetPawn);

	// Object: Function MFNPCAI.NPCAIStaticsInterface.GetCurrentWeaponPenetrationLevel
	// Flags: [Native|Public]
	// Offset: 0x3cb1118
	// Params: [ Num(1) Size(0x4) ]
	int32_t GetCurrentWeaponPenetrationLevel();

	// Object: Function MFNPCAI.NPCAIStaticsInterface.GetBulletEstimateDamageValue
	// Flags: [Native|Public]
	// Offset: 0x3cb0bd4
	// Params: [ Num(4) Size(0x10) ]
	float GetBulletEstimateDamageValue(struct AActor* InEnemyPawn, EAIBodyPartType InBodyPart, bool bOutArmorProected);

	// Object: Function MFNPCAI.NPCAIStaticsInterface.GetBulletDamageValue
	// Flags: [Native|Public]
	// Offset: 0x3cb0d14
	// Params: [ Num(1) Size(0x4) ]
	float GetBulletDamageValue();

	// Object: Function MFNPCAI.NPCAIStaticsInterface.GetBodyPartInArmorProtected
	// Flags: [Native|Public|HasOutParms]
	// Offset: 0x3cb1000
	// Params: [ Num(3) Size(0x19) ]
	bool GetBodyPartInArmorProtected(struct AActor* InTarget, struct TArray<EAIBodyPartType>& OutBodyParts);

	// Object: Function MFNPCAI.NPCAIStaticsInterface.GetBodyPartEndurace
	// Flags: [Native|Public]
	// Offset: 0x3cb15e4
	// Params: [ Num(3) Size(0x10) ]
	float GetBodyPartEndurace(struct AActor* InTarget, EAIBodyPartType InBodyPart);

	// Object: Function MFNPCAI.NPCAIStaticsInterface.GetAllPlayers
	// Flags: [Native|Public|HasOutParms]
	// Offset: 0x3cb1a40
	// Params: [ Num(5) Size(0x14) ]
	void GetAllPlayers(struct TArray<struct AActor*>& PlayerList, bool bContainsRemoteActor, bool InSight, uint8_t TeamType, EAISenseBehaviorType Action);

	// Object: Function MFNPCAI.NPCAIStaticsInterface.GetAllAICharactersInWorld
	// Flags: [Native|Public|HasOutParms]
	// Offset: 0x3cb1de8
	// Params: [ Num(1) Size(0x10) ]
	void GetAllAICharactersInWorld(struct TArray<struct AActor*>& OutActors);

	// Object: Function MFNPCAI.NPCAIStaticsInterface.GetAliveTeamMembers
	// Flags: [Native|Public|HasOutParms]
	// Offset: 0x3cb1c24
	// Params: [ Num(2) Size(0x18) ]
	void GetAliveTeamMembers(struct ACharacter* Player, struct TArray<struct ACharacter*>& OutTeamMembers);

	// Object: Function MFNPCAI.NPCAIStaticsInterface.GetAIPathGroupID
	// Flags: [Native|Public]
	// Offset: 0x3cb2740
	// Params: [ Num(1) Size(0x8) ]
	int64_t GetAIPathGroupID();

	// Object: Function MFNPCAI.NPCAIStaticsInterface.GetAIMainType
	// Flags: [Native|Public]
	// Offset: 0x3cb2064
	// Params: [ Num(1) Size(0x1) ]
	EAIMainType GetAIMainType();

	// Object: Function MFNPCAI.NPCAIStaticsInterface.GetAIJobType
	// Flags: [Native|Public]
	// Offset: 0x3cb2028
	// Params: [ Num(1) Size(0x1) ]
	ENPCAIJobType GetAIJobType();

	// Object: Function MFNPCAI.NPCAIStaticsInterface.GetAIID
	// Flags: [Native|Public]
	// Offset: 0x3cb277c
	// Params: [ Num(1) Size(0x8) ]
	int64_t GetAIID();

	// Object: Function MFNPCAI.NPCAIStaticsInterface.GetAIBodyPartTypeByHitGroupType
	// Flags: [Native|Public]
	// Offset: 0x3cb2874
	// Params: [ Num(2) Size(0x2) ]
	EAIBodyPartType GetAIBodyPartTypeByHitGroupType(uint8_t HitGroupType);

	// Object: Function MFNPCAI.NPCAIStaticsInterface.CheckIsVisibilityRelevancyWithOther
	// Flags: [Native|Public]
	// Offset: 0x3caf8a8
	// Params: [ Num(3) Size(0x11) ]
	bool CheckIsVisibilityRelevancyWithOther(struct APawn* InPlayer1, struct APawn* InPlayer2);

	// Object: Function MFNPCAI.NPCAIStaticsInterface.ChangeAIProfileFaction
	// Flags: [Native|Public]
	// Offset: 0x3cb2390
	// Params: [ Num(2) Size(0x29) ]
	bool ChangeAIProfileFaction(struct TSoftClassPtr<struct UNPCAIFactionComponent*> FactionClass);

	// Object: Function MFNPCAI.NPCAIStaticsInterface.CanbeRevived
	// Flags: [Native|Public]
	// Offset: 0x3cb1528
	// Params: [ Num(2) Size(0x9) ]
	bool CanbeRevived(struct ACharacter* InTarget);

	// Object: Function MFNPCAI.NPCAIStaticsInterface.CalculateTransfterHealthyBodyPartByZeroPartHit
	// Flags: [Native|Public|HasOutParms]
	// Offset: 0x3cb0a8c
	// Params: [ Num(4) Size(0xB) ]
	bool CalculateTransfterHealthyBodyPartByZeroPartHit(struct ACharacter* InEnemyPawn, EAIBodyPartType InHitBodyPart, EAIBodyPartType& OutTransferBodyPart);

	// Object: Function MFNPCAI.NPCAIStaticsInterface.CalculateTransfterHealthyBodyPartByDangerHit
	// Flags: [Native|Public|HasOutParms]
	// Offset: 0x3cb0944
	// Params: [ Num(4) Size(0xB) ]
	bool CalculateTransfterHealthyBodyPartByDangerHit(struct ACharacter* InEnemyPawn, EAIBodyPartType InHitBodyPart, EAIBodyPartType& OutTransferBodyPart);

	// Object: Function MFNPCAI.NPCAIStaticsInterface.BroadcastReceiveTaunt
	// Flags: [Native|Public]
	// Offset: 0x3cafb54
	// Params: [ Num(2) Size(0xC) ]
	void BroadcastReceiveTaunt(struct ACharacter* TauntCharacter, float TauntLeftTime);

	// Object: Function MFNPCAI.NPCAIStaticsInterface.BroadcastAICaredVehicleControlChangedEvent
	// Flags: [Native|Public]
	// Offset: 0x3cafeac
	// Params: [ Num(2) Size(0x10) ]
	void BroadcastAICaredVehicleControlChangedEvent(struct AActor* InVehicle, struct ACharacter* AIPawn);

	// Object: Function MFNPCAI.NPCAIStaticsInterface.BroadcastAIBeSeenByPlayerUpdateEvent
	// Flags: [Native|Public]
	// Offset: 0x3caf7f0
	// Params: [ Num(1) Size(0x1) ]
	void BroadcastAIBeSeenByPlayerUpdateEvent(bool bIsBeingSeen);
};

// Object: Class MFNPCAI.NPCAISteepZoneRenderingComponent
// Size: 0x680 (Inherited: 0x680)
struct UNPCAISteepZoneRenderingComponent : UNPCAITestingRenderingComponent
{
	DEFINE_UE_CLASS_HELPERS(UNPCAISteepZoneRenderingComponent, "NPCAISteepZoneRenderingComponent")
};

// Object: Class MFNPCAI.NPCAISteepZoneTestingActor
// Size: 0x570 (Inherited: 0x340)
struct ANPCAISteepZoneTestingActor : ANPCAITestingActor
{
	DEFINE_UE_CLASS_HELPERS(ANPCAISteepZoneTestingActor, "NPCAISteepZoneTestingActor")

	struct FSteepZoneDeleteSettings Settings; // 0x340(0x34)
	uint8_t Pad_0x374[0xC]; // 0x374(0xC)
	struct FNPCAISteepZoneDeleter Deleter; // 0x380(0x1D0)
	float PolyZOffset; // 0x550(0x4)
	float NormalScaling; // 0x554(0x4)
	float NormalThickness; // 0x558(0x4)
	float PolyNormalIncludedAngleTolerance; // 0x55C(0x4)
	float PointNormalIncludedAngleTolerance; // 0x560(0x4)
	float DisplayableSteepDensity; // 0x564(0x4)
	bool bDrawNavMeshPoly; // 0x568(0x1)
	bool bDrawDetailTriangle; // 0x569(0x1)
	bool bDrawDetailTriangleNormal; // 0x56A(0x1)
	bool bDrawSamplePoint; // 0x56B(0x1)
	bool bDrawSamplePointNormal; // 0x56C(0x1)
	bool bDrawSteepZone; // 0x56D(0x1)
	uint8_t Pad_0x56E[0x2]; // 0x56E(0x2)
};

// Object: Class MFNPCAI.NPCAISteeringInterface
// Size: 0x28 (Inherited: 0x28)
struct INPCAISteeringInterface : IInterface
{
	DEFINE_UE_CLASS_HELPERS(INPCAISteeringInterface, "NPCAISteeringInterface")
};

// Object: Class MFNPCAI.NPCAISubSystemStatics
// Size: 0x28 (Inherited: 0x28)
struct UNPCAISubSystemStatics : UBlueprintFunctionLibrary
{
	DEFINE_UE_CLASS_HELPERS(UNPCAISubSystemStatics, "NPCAISubSystemStatics")

	// Object: Function MFNPCAI.NPCAISubSystemStatics.WantToReCalcGoalEnemy
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3cbe328
	// Params: [ Num(1) Size(0x8) ]
	static void WantToReCalcGoalEnemy(struct AActor* AIPawn);

	// Object: Function MFNPCAI.NPCAISubSystemStatics.UpdateTargetInfoOnTakeDamage
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x3cbced0
	// Params: [ Num(3) Size(0x14) ]
	static void UpdateTargetInfoOnTakeDamage(struct AActor* Casuer, struct AActor* Taker, float DamageValue);

	// Object: Function MFNPCAI.NPCAISubSystemStatics.UpdateTargetInfoOnCauseDamage
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x3cbcdbc
	// Params: [ Num(3) Size(0x14) ]
	static void UpdateTargetInfoOnCauseDamage(struct AActor* Casuer, struct AActor* Taker, float DamageValue);

	// Object: Function MFNPCAI.NPCAISubSystemStatics.UpdatePersistentFireSetting
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable]
	// Offset: 0x3cc0058
	// Params: [ Num(7) Size(0x29) ]
	static void UpdatePersistentFireSetting(struct AActor* AIPawn, bool CalcShoot, bool CalcSight, struct AActor* EnemyTarget, const struct FVector& FireLocation, float FireInterval, bool bIgnoreAimingTime);

	// Object: Function MFNPCAI.NPCAISubSystemStatics.UpdateNaturalFireSetting
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable]
	// Offset: 0x3cbf638
	// Params: [ Num(5) Size(0x17) ]
	static void UpdateNaturalFireSetting(struct AActor* AIPawn, const struct FVector& FireLocation, bool bEnabledRecoilControl, bool bEnabledHitRateControl, bool bIgnoreAimingTime);

	// Object: Function MFNPCAI.NPCAISubSystemStatics.UpdateAIWalkSpeed
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3cc4bac
	// Params: [ Num(2) Size(0xC) ]
	static void UpdateAIWalkSpeed(struct ACharacter* AIPawn, float NewWalkSpeed);

	// Object: Function MFNPCAI.NPCAISubSystemStatics.UpdateAIPeekCount
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3cb886c
	// Params: [ Num(2) Size(0xC) ]
	static void UpdateAIPeekCount(struct AActor* AIPawn, int32_t PeekCount);

	// Object: Function MFNPCAI.NPCAISubSystemStatics.UnregisterSceneEvent
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3cbad5c
	// Params: [ Num(2) Size(0x10) ]
	static void UnregisterSceneEvent(struct UObject* WorldContext, struct UAISceneEventMessage* SceneEvent);

	// Object: Function MFNPCAI.NPCAISubSystemStatics.UnLockGoalEnemy
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3cbe5a0
	// Params: [ Num(1) Size(0x8) ]
	static void UnLockGoalEnemy(struct AActor* AIPawn);

	// Object: Function MFNPCAI.NPCAISubSystemStatics.TryProne
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3cc5b70
	// Params: [ Num(2) Size(0x9) ]
	static bool TryProne(struct AActor* AIOwner);

	// Object: Function MFNPCAI.NPCAISubSystemStatics.TryLean
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3cc592c
	// Params: [ Num(3) Size(0xA) ]
	static bool TryLean(struct AActor* AIOwner, EAILeanType LeanType);

	// Object: Function MFNPCAI.NPCAISubSystemStatics.TryJump
	// Flags: [Final|Native|Static|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x3cc519c
	// Params: [ Num(5) Size(0x1A) ]
	static bool TryJump(struct AActor* AIPawn, struct FVector JumpDirection, float JumpSpeed, bool bUseNowVelocity);

	// Object: Function MFNPCAI.NPCAISubSystemStatics.TryCrouchSliding
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3cc53bc
	// Params: [ Num(2) Size(0x9) ]
	static bool TryCrouchSliding(struct AActor* AIOwner);

	// Object: Function MFNPCAI.NPCAISubSystemStatics.TryCrouch
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3cc5a18
	// Params: [ Num(2) Size(0x9) ]
	static bool TryCrouch(struct AActor* AIOwner);

	// Object: Function MFNPCAI.NPCAISubSystemStatics.TryCoverShootFiring
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3cc5468
	// Params: [ Num(3) Size(0xA) ]
	static bool TryCoverShootFiring(struct AActor* AIOwner, bool bCoverShootFiring);

	// Object: Function MFNPCAI.NPCAISubSystemStatics.TryCoverShoot
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3cc555c
	// Params: [ Num(5) Size(0xC) ]
	static bool TryCoverShoot(struct AActor* AIOwner, bool bCoverShoot, bool bCrouch, bool bLeft);

	// Object: Function MFNPCAI.NPCAISubSystemStatics.TryCasualStandingPose
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3cc56e8
	// Params: [ Num(3) Size(0xA) ]
	static bool TryCasualStandingPose(struct AActor* AIOwner, bool bCasual);

	// Object: Function MFNPCAI.NPCAISubSystemStatics.TriggerSceneEventDIY
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable]
	// Offset: 0x3cba3dc
	// Params: [ Num(9) Size(0x48) ]
	static int32_t TriggerSceneEventDIY(struct UObject* WorldContext, ENPCAISceneEventID EventId, const struct FVector& Location, float ValidScope, float ValidTime, const struct TArray<int64_t>& AIIDs, const struct TArray<int64_t>& AIPathGroupIDs, float CoverRange);

	// Object: Function MFNPCAI.NPCAISubSystemStatics.TriggerSceneEvent
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable]
	// Offset: 0x3cba694
	// Params: [ Num(5) Size(0x20) ]
	static int32_t TriggerSceneEvent(struct UObject* WorldContext, ENPCAISceneEventID EventId, const struct FVector& Location, float CoverRange);

	// Object: Function MFNPCAI.NPCAISubSystemStatics.TestDir
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable]
	// Offset: 0x3cb73a0
	// Params: [ Num(6) Size(0x31) ]
	static bool TestDir(struct UObject* WorldContextObject, const struct FVector& HeadPosition, const struct FVector& Direction, float Distance, struct FVector& OutPosition);

	// Object: Function MFNPCAI.NPCAISubSystemStatics.StopRescueOtherDBNOTeammate
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3cc20dc
	// Params: [ Num(1) Size(0x8) ]
	static void StopRescueOtherDBNOTeammate(struct AActor* InAIPawn);

	// Object: Function MFNPCAI.NPCAISubSystemStatics.StopPickUpBoxContainer
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3cc291c
	// Params: [ Num(1) Size(0x8) ]
	static void StopPickUpBoxContainer(struct AActor* InAIPawn);

	// Object: Function MFNPCAI.NPCAISubSystemStatics.StopPersistentFire
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3cbffc0
	// Params: [ Num(1) Size(0x8) ]
	static void StopPersistentFire(struct AActor* AIPawn);

	// Object: Function MFNPCAI.NPCAISubSystemStatics.StartPersistentFire
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3cc02a0
	// Params: [ Num(2) Size(0xC) ]
	static void StartPersistentFire(struct AActor* AIPawn, float DurationTime);

	// Object: Function MFNPCAI.NPCAISubSystemStatics.ShouldTriggerMine
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3cc2608
	// Params: [ Num(2) Size(0x9) ]
	static bool ShouldTriggerMine(struct AActor* AIPawnOrController);

	// Object: Function MFNPCAI.NPCAISubSystemStatics.ShortQueryPathToPoint
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable]
	// Offset: 0x3cb9970
	// Params: [ Num(3) Size(0x28) ]
	static void ShortQueryPathToPoint(struct AActor* AIPawn, const struct FVector& InPointToGo, struct TArray<struct FVector>& PathPoints);

	// Object: Function MFNPCAI.NPCAISubSystemStatics.SetupTearGasAreas
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable]
	// Offset: 0x3cb8fe0
	// Params: [ Num(4) Size(0x21) ]
	static void SetupTearGasAreas(struct UObject* WorldContextObject, const struct FVector& Center, const struct FVector& EffectExtent, bool bActiving);

	// Object: Function MFNPCAI.NPCAISubSystemStatics.SetupFlanking
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable]
	// Offset: 0x3cc60c0
	// Params: [ Num(4) Size(0x24) ]
	static void SetupFlanking(struct AActor* InOwner, const struct FVector& InDangerPoint, const struct FVector& InDangerPointDirection, float InDangerPointEffectRange);

	// Object: Function MFNPCAI.NPCAISubSystemStatics.SetSightWeakenTime
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3cc153c
	// Params: [ Num(2) Size(0xC) ]
	static void SetSightWeakenTime(struct AActor* AIPawn, float WeakenTime);

	// Object: Function MFNPCAI.NPCAISubSystemStatics.SetOpenWeaponADS
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3cbf944
	// Params: [ Num(2) Size(0x9) ]
	static void SetOpenWeaponADS(struct AActor* AIPawn, bool bOpenOrClose);

	// Object: Function MFNPCAI.NPCAISubSystemStatics.SetMovingAIMaxNumInRendered
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3cbec0c
	// Params: [ Num(2) Size(0xC) ]
	static void SetMovingAIMaxNumInRendered(struct UObject* WorldContext, int32_t InMaxNum);

	// Object: Function MFNPCAI.NPCAISubSystemStatics.SetIsInTryLeanShoot
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3cc4a84
	// Params: [ Num(3) Size(0x10) ]
	static void SetIsInTryLeanShoot(struct AActor* InAIPawn, bool bTryLean, float CheckInterval);

	// Object: Function MFNPCAI.NPCAISubSystemStatics.SetGroupEnemyHatredValue
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3cbc304
	// Params: [ Num(5) Size(0x19) ]
	static void SetGroupEnemyHatredValue(struct AActor* InAIOwner, struct AActor* InEnemy, int32_t InHatredValue, float IndateTime, bool InbCalucateGoalEnemy);

	// Object: Function MFNPCAI.NPCAISubSystemStatics.SetGoalProtectedPerson
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3cbdb18
	// Params: [ Num(2) Size(0x10) ]
	static void SetGoalProtectedPerson(struct AActor* AIPawn, struct AActor* PersonPawn);

	// Object: Function MFNPCAI.NPCAISubSystemStatics.SetGoalEnemyInfo
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3cbe71c
	// Params: [ Num(2) Size(0x10) ]
	static void SetGoalEnemyInfo(struct AActor* InAIPawn, struct UNPCAITargetInfo* InGoalEnemyInfo);

	// Object: Function MFNPCAI.NPCAISubSystemStatics.SetFiringAIMaxNum
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3cbece4
	// Params: [ Num(2) Size(0xC) ]
	static void SetFiringAIMaxNum(struct UObject* WorldContext, int32_t InMaxNum);

	// Object: Function MFNPCAI.NPCAISubSystemStatics.SetEnemyThreatenDistCannotOpenDoor
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3cc3b1c
	// Params: [ Num(2) Size(0xC) ]
	static void SetEnemyThreatenDistCannotOpenDoor(struct AActor* AIPawn, float InDistance);

	// Object: Function MFNPCAI.NPCAISubSystemStatics.SetEnemyHatredValue
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3cbc030
	// Params: [ Num(6) Size(0x1A) ]
	static void SetEnemyHatredValue(struct AActor* InAIPawn, struct AActor* InEnemy, int32_t InHatredValue, float IndateTime, bool bEffectGroup, bool InbCalucateGoalEnemy);

	// Object: Function MFNPCAI.NPCAISubSystemStatics.SetDamageLimitEnabledForAI
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3cb764c
	// Params: [ Num(2) Size(0x9) ]
	static void SetDamageLimitEnabledForAI(struct AActor* AIPawn, bool bIsEnabledForAI);

	// Object: Function MFNPCAI.NPCAISubSystemStatics.SetCurrentMoveType
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3cc5da4
	// Params: [ Num(2) Size(0x9) ]
	static void SetCurrentMoveType(struct AActor* AIOwner, EAIMoveType InMoveType);

	// Object: Function MFNPCAI.NPCAISubSystemStatics.SetAvoidNavAreas
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x3cb8e9c
	// Params: [ Num(3) Size(0x19) ]
	static void SetAvoidNavAreas(struct UObject* WorldContext, const struct TArray<int64_t>& AvoidPolyRefs, bool bAvoid);

	// Object: Function MFNPCAI.NPCAISubSystemStatics.SetAISprint
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3cc5010
	// Params: [ Num(2) Size(0x9) ]
	static void SetAISprint(struct AActor* AIPawn, bool bSprint);

	// Object: Function MFNPCAI.NPCAISubSystemStatics.SetAIRLModifyViewRotation
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable]
	// Offset: 0x3cbfad0
	// Params: [ Num(2) Size(0x14) ]
	static void SetAIRLModifyViewRotation(struct AActor* AIPawn, const struct FRotator& ModifyRotation);

	// Object: Function MFNPCAI.NPCAISubSystemStatics.SetAIProtectTreasureBox
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3cb8a3c
	// Params: [ Num(2) Size(0x10) ]
	static void SetAIProtectTreasureBox(struct AActor* AIPawn, struct AActor* TreasureBox);

	// Object: Function MFNPCAI.NPCAISubSystemStatics.SetAimingPoint
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable]
	// Offset: 0x3cbfbb0
	// Params: [ Num(2) Size(0x14) ]
	static void SetAimingPoint(struct AActor* AIPawn, const struct FVector& AimingPoint);

	// Object: Function MFNPCAI.NPCAISubSystemStatics.SetAimingBodyPartWeightInRuntime
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3cb7804
	// Params: [ Num(4) Size(0x11) ]
	static void SetAimingBodyPartWeightInRuntime(struct AActor* InAIPawn, EAIBodyPartType InBodyPart, float InWeight, bool bIsForPlayer);

	// Object: Function MFNPCAI.NPCAISubSystemStatics.SetAimingBodyPartTrend
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3cb772c
	// Params: [ Num(2) Size(0x9) ]
	static void SetAimingBodyPartTrend(struct AActor* AIPawn, EAIAimingBodyPartTrend AimingTrend);

	// Object: Function MFNPCAI.NPCAISubSystemStatics.SetAIKnowEnemy
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3cbe254
	// Params: [ Num(2) Size(0x10) ]
	static void SetAIKnowEnemy(struct AActor* AIPawn, struct AActor* EnemyPawn);

	// Object: Function MFNPCAI.NPCAISubSystemStatics.SetAIInSection
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3cb85e4
	// Params: [ Num(2) Size(0xC) ]
	static void SetAIInSection(struct AActor* AIPawn, int32_t InSection);

	// Object: Function MFNPCAI.NPCAISubSystemStatics.SetAICallUpResult
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3cb86bc
	// Params: [ Num(2) Size(0x9) ]
	static void SetAICallUpResult(struct AActor* AIPawn, uint8_t Result);

	// Object: Function MFNPCAI.NPCAISubSystemStatics.SetAICallUpReason
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3cb8794
	// Params: [ Num(2) Size(0x9) ]
	static void SetAICallUpReason(struct AActor* AIPawn, uint8_t reason);

	// Object: Function MFNPCAI.NPCAISubSystemStatics.SetAIBeSeeByPlayer
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3cc48f8
	// Params: [ Num(2) Size(0x9) ]
	static void SetAIBeSeeByPlayer(struct ACharacter* AIPawn, bool bSeen);

	// Object: Function MFNPCAI.NPCAISubSystemStatics.SearchBehaviorService
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3cb7dc0
	// Params: [ Num(3) Size(0x20) ]
	static struct UBTService* SearchBehaviorService(struct AAIController* InAIController, struct FString InNodeName);

	// Object: Function MFNPCAI.NPCAISubSystemStatics.ResumeAIBehaviorLogic
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3cb7f0c
	// Params: [ Num(2) Size(0x18) ]
	static void ResumeAIBehaviorLogic(struct AActor* AIPawn, struct FString reason);

	// Object: Function MFNPCAI.NPCAISubSystemStatics.RescueDBNOAITeammate
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3cc2174
	// Params: [ Num(3) Size(0x11) ]
	static bool RescueDBNOAITeammate(struct AActor* InAIPawn, struct AActor* InTarget);

	// Object: Function MFNPCAI.NPCAISubSystemStatics.RemoveSuspectedPoint
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3cbc4a4
	// Params: [ Num(3) Size(0x11) ]
	static void RemoveSuspectedPoint(struct AActor* AIPawn, struct UNPCAIAttentionPoint* InAttentionPoint, bool bRemoveNearCanSee);

	// Object: Function MFNPCAI.NPCAISubSystemStatics.RemoveEnemyInAllGroup
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3cbb790
	// Params: [ Num(1) Size(0x8) ]
	static void RemoveEnemyInAllGroup(struct AActor* InEnemy);

	// Object: Function MFNPCAI.NPCAISubSystemStatics.RemoveAimingTypeInRuntime
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3cb7a94
	// Params: [ Num(3) Size(0xA) ]
	static void RemoveAimingTypeInRuntime(struct AActor* InAIPawn, EAIBodyBulkType InBodyBulk, bool bIsForPlayer);

	// Object: Function MFNPCAI.NPCAISubSystemStatics.RegisterSceneEvent
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable]
	// Offset: 0x3cbae30
	// Params: [ Num(5) Size(0x24) ]
	static int32_t RegisterSceneEvent(struct UObject* WorldContext, struct UAISceneEventMessage* SceneEvent, const struct FVector& Location, float CoverRange);

	// Object: Function MFNPCAI.NPCAISubSystemStatics.RefreshNavigationMainData
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3cb8b10
	// Params: [ Num(1) Size(0x8) ]
	static void RefreshNavigationMainData(struct UObject* WorldContext);

	// Object: Function MFNPCAI.NPCAISubSystemStatics.QuitToDynamicGroup
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3cbb434
	// Params: [ Num(1) Size(0x8) ]
	static void QuitToDynamicGroup(struct AActor* InAIPawn);

	// Object: Function MFNPCAI.NPCAISubSystemStatics.QueryPathLengthFromAIToPoint
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable]
	// Offset: 0x3cb9840
	// Params: [ Num(4) Size(0x24) ]
	static float QueryPathLengthFromAIToPoint(struct AActor* AIPawn, const struct FVector& PointToGo, int64_t PointPolyRef);

	// Object: Function MFNPCAI.NPCAISubSystemStatics.PointIsInSmoke
	// Flags: [Final|Native|Static|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x3cc092c
	// Params: [ Num(3) Size(0x15) ]
	static bool PointIsInSmoke(struct UObject* WorldContext, struct FVector InPoint);

	// Object: Function MFNPCAI.NPCAISubSystemStatics.PointIsInMolotov
	// Flags: [Final|Native|Static|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x3cc0b44
	// Params: [ Num(3) Size(0x15) ]
	static bool PointIsInMolotov(struct AActor* InAIPawn, struct FVector InPoint);

	// Object: Function MFNPCAI.NPCAISubSystemStatics.PointIsInBombRange
	// Flags: [Final|Native|Static|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x3cc0a18
	// Params: [ Num(4) Size(0x16) ]
	static bool PointIsInBombRange(struct UObject* WorldContext, struct FVector InPoint, ENPCAIPerceptibleTile InTile);

	// Object: Function MFNPCAI.NPCAISubSystemStatics.PointIsAroundAI
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable]
	// Offset: 0x3cb970c
	// Params: [ Num(4) Size(0x21) ]
	static bool PointIsAroundAI(struct AActor* AIPawn, const struct FVector& PointToGo, int64_t PointPolyRef);

	// Object: Function MFNPCAI.NPCAISubSystemStatics.PickUpInventory
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3cc2bf0
	// Params: [ Num(5) Size(0x19) ]
	static bool PickUpInventory(struct AActor* InAIPawn, struct AActor* Inventory, bool bCheckIsCanAdd, float WaitSeconds);

	// Object: Function MFNPCAI.NPCAISubSystemStatics.PickUpBoxContainer
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3cc29b4
	// Params: [ Num(5) Size(0x1C) ]
	static void PickUpBoxContainer(struct AActor* InAIPawn, struct AActor* BoxContainer, bool bCheckIsCanAdd, float InDelayStarttime, float InPickUpInterval);

	// Object: Function MFNPCAI.NPCAISubSystemStatics.PauseAIBehaviorLogic
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3cb7ff0
	// Params: [ Num(3) Size(0x1C) ]
	static void PauseAIBehaviorLogic(struct AActor* AIPawn, struct FString reason, float PauseTime);

	// Object: Function MFNPCAI.NPCAISubSystemStatics.OpenDoor
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3cc3d74
	// Params: [ Num(2) Size(0x10) ]
	static void OpenDoor(struct AActor* InAIPawn, struct AActor* InDoor);

	// Object: Function MFNPCAI.NPCAISubSystemStatics.MultiJoinToDynamicGroup
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x3cbb4cc
	// Params: [ Num(2) Size(0x18) ]
	static void MultiJoinToDynamicGroup(int32_t DyGroupId, const struct TArray<struct AActor*>& InAIPawns);

	// Object: Function MFNPCAI.NPCAISubSystemStatics.ModifyAICurrentEndurance
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3cc1f58
	// Params: [ Num(3) Size(0xD) ]
	static bool ModifyAICurrentEndurance(struct AActor* AIPawn, float MaxRatio);

	// Object: Function MFNPCAI.NPCAISubSystemStatics.MarkAIAttentBeSeen
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3cb756c
	// Params: [ Num(2) Size(0x9) ]
	static void MarkAIAttentBeSeen(struct ACharacter* AIPawn, bool bShouldMark);

	// Object: Function MFNPCAI.NPCAISubSystemStatics.LookToPoint
	// Flags: [Final|Native|Static|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x3cc42ec
	// Params: [ Num(5) Size(0x1D) ]
	static void LookToPoint(struct AActor* AIOwner, struct FVector InPoint, float InRotateSpeedInDegree, float AcceleratedSpeedInDegree, bool bQuickly);

	// Object: Function MFNPCAI.NPCAISubSystemStatics.LookToMovingDirection
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3cc41d8
	// Params: [ Num(3) Size(0x10) ]
	static void LookToMovingDirection(struct AActor* AIOwner, float RotateSpeedInDegree, float AcceleratedSpeedInDegree);

	// Object: Function MFNPCAI.NPCAISubSystemStatics.LockLookToPoint
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x3cc4100
	// Params: [ Num(2) Size(0xC) ]
	static void LockLookToPoint(struct AActor* AIOwner, float LockTime);

	// Object: Function MFNPCAI.NPCAISubSystemStatics.LockGoalEnemy
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3cbe638
	// Params: [ Num(3) Size(0x18) ]
	static struct UNPCAITargetInfo* LockGoalEnemy(struct AActor* AIPawn, struct AActor* EnemyPawn);

	// Object: Function MFNPCAI.NPCAISubSystemStatics.JoinToGroupTogetherForTest
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x3cbd37c
	// Params: [ Num(1) Size(0x10) ]
	static void JoinToGroupTogetherForTest(const struct TArray<struct AActor*>& AIPawns);

	// Object: Function MFNPCAI.NPCAISubSystemStatics.JoinToDynamicGroup
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3cbb5c0
	// Params: [ Num(3) Size(0x11) ]
	static bool JoinToDynamicGroup(int32_t DyGroupId, struct AActor* InAIPawn);

	// Object: Function MFNPCAI.NPCAISubSystemStatics.IsWaitingStartAiming
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3cbea70
	// Params: [ Num(2) Size(0x9) ]
	static bool IsWaitingStartAiming(struct AActor* AIPawn);

	// Object: Function MFNPCAI.NPCAISubSystemStatics.IsSightWeakenByFlashProjectile
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x3cc1404
	// Params: [ Num(3) Size(0x10) ]
	static void IsSightWeakenByFlashProjectile(struct AActor* AIPawn, bool& IsWeaken, float& RemainTime);

	// Object: Function MFNPCAI.NPCAISubSystemStatics.IsSightWeakenByFlashLight
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable]
	// Offset: 0x3cc1614
	// Params: [ Num(5) Size(0x21) ]
	static bool IsSightWeakenByFlashLight(struct AActor* AIPawn, float& SightWeaknScaleValue, struct FVector& LightLocation, struct ACharacter*& LightOwnerCharacter);

	// Object: Function MFNPCAI.NPCAISubSystemStatics.IsRecentlyFire
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x3cbfe28
	// Params: [ Num(3) Size(0xD) ]
	static bool IsRecentlyFire(struct AActor* AIPawn, float InSeconds);

	// Object: Function MFNPCAI.NPCAISubSystemStatics.IsReachMovingNumInRenderedLimit
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3cbefb4
	// Params: [ Num(2) Size(0x9) ]
	static bool IsReachMovingNumInRenderedLimit(struct UObject* WorldContext);

	// Object: Function MFNPCAI.NPCAISubSystemStatics.IsReachFiringNumLimit
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3cbf060
	// Params: [ Num(2) Size(0x9) ]
	static bool IsReachFiringNumLimit(struct UObject* WorldContext);

	// Object: Function MFNPCAI.NPCAISubSystemStatics.IsPersistentFiring
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x3cbff14
	// Params: [ Num(2) Size(0x9) ]
	static bool IsPersistentFiring(struct AActor* AIPawn);

	// Object: Function MFNPCAI.NPCAISubSystemStatics.IsOpeningDoor
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x3cc3bf4
	// Params: [ Num(2) Size(0x9) ]
	static bool IsOpeningDoor(struct AActor* AIPawn);

	// Object: Function MFNPCAI.NPCAISubSystemStatics.IsNavPathFounded
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	// Offset: 0x3cc66b0
	// Params: [ Num(2) Size(0x19) ]
	static bool IsNavPathFounded(const struct FNPCAINavPathForBP& NavPath);

	// Object: Function MFNPCAI.NPCAISubSystemStatics.IsMovingToDestination
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3cc5f68
	// Params: [ Num(2) Size(0x9) ]
	static bool IsMovingToDestination(struct AActor* InOwner);

	// Object: Function MFNPCAI.NPCAISubSystemStatics.IsLODStatus
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x3cb72f4
	// Params: [ Num(2) Size(0x9) ]
	static bool IsLODStatus(struct AActor* AIPawn);

	// Object: Function MFNPCAI.NPCAISubSystemStatics.IsLockingGoalEnemy
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x3cbe4ac
	// Params: [ Num(3) Size(0x18) ]
	static struct UNPCAITargetInfo* IsLockingGoalEnemy(struct AActor* AIPawn, bool& IsLocking);

	// Object: Function MFNPCAI.NPCAISubSystemStatics.IsLockDoor
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3cc3f30
	// Params: [ Num(3) Size(0x11) ]
	static bool IsLockDoor(struct AActor* InAIPawn, struct AActor* InDoor);

	// Object: Function MFNPCAI.NPCAISubSystemStatics.IsJumping
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3cc50f0
	// Params: [ Num(2) Size(0x9) ]
	static bool IsJumping(struct AActor* AIPawn);

	// Object: Function MFNPCAI.NPCAISubSystemStatics.IsInPullBolt
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3cbfa24
	// Params: [ Num(2) Size(0x9) ]
	static bool IsInPullBolt(struct AActor* AIPawn);

	// Object: Function MFNPCAI.NPCAISubSystemStatics.IsInOpenDoorStatus
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x3cc3470
	// Params: [ Num(2) Size(0x9) ]
	static bool IsInOpenDoorStatus(struct AActor* InAIPawn);

	// Object: Function MFNPCAI.NPCAISubSystemStatics.IsInMolotovHurted
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3cc4e10
	// Params: [ Num(2) Size(0x9) ]
	static bool IsInMolotovHurted(struct AActor* InAIPawn);

	// Object: Function MFNPCAI.NPCAISubSystemStatics.IsInDynamicGroup
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3cbd6b4
	// Params: [ Num(2) Size(0x9) ]
	static bool IsInDynamicGroup(struct AActor* InAIPawn);

	// Object: Function MFNPCAI.NPCAISubSystemStatics.IsInCrossFireState
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x3cb7d14
	// Params: [ Num(2) Size(0x9) ]
	static bool IsInCrossFireState(struct AActor* AIPawn);

	// Object: Function MFNPCAI.NPCAISubSystemStatics.IsImmuneTearGas
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x3cc07d4
	// Params: [ Num(2) Size(0x9) ]
	static bool IsImmuneTearGas(struct AActor* AIPawn);

	// Object: Function MFNPCAI.NPCAISubSystemStatics.IsGroupEnemy
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3cbd848
	// Params: [ Num(3) Size(0x11) ]
	static bool IsGroupEnemy(struct AActor* InAIOwner, struct AActor* InTarget);

	// Object: Function MFNPCAI.NPCAISubSystemStatics.IsGroupAlly
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3cbd760
	// Params: [ Num(3) Size(0x11) ]
	static bool IsGroupAlly(struct AActor* InAIOwner, struct AActor* InTarget);

	// Object: Function MFNPCAI.NPCAISubSystemStatics.IsGoalPositionReached
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3cc6014
	// Params: [ Num(2) Size(0x9) ]
	static bool IsGoalPositionReached(struct AActor* InOwner);

	// Object: Function MFNPCAI.NPCAISubSystemStatics.IsGoalEnemyThreaten
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x3cbe3c0
	// Params: [ Num(3) Size(0xD) ]
	static bool IsGoalEnemyThreaten(struct AActor* InAIPawn, float ThreatenDistance);

	// Object: Function MFNPCAI.NPCAISubSystemStatics.IsFaceToPoint
	// Flags: [Final|Native|Static|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x3cc0c30
	// Params: [ Num(3) Size(0x15) ]
	static bool IsFaceToPoint(struct AActor* InAIPawn, struct FVector InPoint);

	// Object: Function MFNPCAI.NPCAISubSystemStatics.IsEnoughAllyKillInRange
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable]
	// Offset: 0x3cbc798
	// Params: [ Num(6) Size(0x21) ]
	static bool IsEnoughAllyKillInRange(struct AActor* InAIPawn, const struct FVector& InSearchCenter, float InSearchRange, float InSearchTime, int32_t InSearchCount);

	// Object: Function MFNPCAI.NPCAISubSystemStatics.IsEnoughAllyDeathInRange
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable]
	// Offset: 0x3cbc948
	// Params: [ Num(6) Size(0x21) ]
	static bool IsEnoughAllyDeathInRange(struct AActor* InAIPawn, const struct FVector& InSearchCenter, float InSearchRange, float InSearchTime, int32_t InSearchCount);

	// Object: Function MFNPCAI.NPCAISubSystemStatics.IsEnabledAimingBodyPartLOGDebug
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x3cb70f0
	// Params: [ Num(2) Size(0x9) ]
	static bool IsEnabledAimingBodyPartLOGDebug(struct AActor* AIPawn);

	// Object: Function MFNPCAI.NPCAISubSystemStatics.IsDynamicGroupExist
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3cbafa0
	// Params: [ Num(3) Size(0xD) ]
	static bool IsDynamicGroupExist(struct AActor* InAIPawn, int32_t DyGroupId);

	// Object: Function MFNPCAI.NPCAISubSystemStatics.IsDoorOpened
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3cc4018
	// Params: [ Num(3) Size(0x11) ]
	static bool IsDoorOpened(struct AActor* InAIPawn, struct AActor* InDoor);

	// Object: Function MFNPCAI.NPCAISubSystemStatics.IsDoorInDirectionOfMe
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable]
	// Offset: 0x3cc364c
	// Params: [ Num(4) Size(0x20) ]
	static struct AActor* IsDoorInDirectionOfMe(struct AActor* InAIPawn, const struct FVector& InDirection, float InRange);

	// Object: Function MFNPCAI.NPCAISubSystemStatics.IsDBNO
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3cc2344
	// Params: [ Num(3) Size(0x11) ]
	static bool IsDBNO(struct AActor* InAIPawn, struct AActor* InTargetPawn);

	// Object: Function MFNPCAI.NPCAISubSystemStatics.IsCrouchSliding
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x3cc5310
	// Params: [ Num(2) Size(0x9) ]
	static bool IsCrouchSliding(struct AActor* AIOwner);

	// Object: Function MFNPCAI.NPCAISubSystemStatics.IsCompletedPickUpBoxContainer
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3cc2870
	// Params: [ Num(2) Size(0x9) ]
	static bool IsCompletedPickUpBoxContainer(struct AActor* InAIPawn);

	// Object: Function MFNPCAI.NPCAISubSystemStatics.IsCloseToDestination
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3cc5e7c
	// Params: [ Num(3) Size(0xD) ]
	static bool IsCloseToDestination(struct AActor* InOwner, float InCloseRadius);

	// Object: Function MFNPCAI.NPCAISubSystemStatics.IsBeingFireHited
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x3cc04c8
	// Params: [ Num(4) Size(0x19) ]
	static bool IsBeingFireHited(struct AActor* InAIPawn, float InTime, struct AActor*& OutFirePawn);

	// Object: Function MFNPCAI.NPCAISubSystemStatics.IsAlert
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x3cc4c84
	// Params: [ Num(2) Size(0x9) ]
	static bool IsAlert(struct AActor* AIPawn);

	// Object: Function MFNPCAI.NPCAISubSystemStatics.IsAISprinting
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3cc4f64
	// Params: [ Num(2) Size(0x9) ]
	static bool IsAISprinting(struct AActor* AIPawn);

	// Object: Function MFNPCAI.NPCAISubSystemStatics.IsAIRLFire
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3cb719c
	// Params: [ Num(2) Size(0x9) ]
	static bool IsAIRLFire(struct AAIController* AIController);

	// Object: Function MFNPCAI.NPCAISubSystemStatics.IsAIRLAgentActionReload
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3cb7248
	// Params: [ Num(2) Size(0x9) ]
	static bool IsAIRLAgentActionReload(struct AAIController* AIController);

	// Object: Function MFNPCAI.NPCAISubSystemStatics.IsAIProtectingTreasureBox
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x3cb8944
	// Params: [ Num(3) Size(0x11) ]
	static bool IsAIProtectingTreasureBox(struct AActor* AIPawn, struct AActor*& TreaureBox);

	// Object: Function MFNPCAI.NPCAISubSystemStatics.IsAIPawnCanSeeOtherUsedPathPoint
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3cc06ec
	// Params: [ Num(3) Size(0x11) ]
	static bool IsAIPawnCanSeeOtherUsedPathPoint(struct ACharacter* AIPawn, struct ACharacter* OtherPawn);

	// Object: Function MFNPCAI.NPCAISubSystemStatics.IsAIPawnCanSeeOtherByUniqueIDUsedPathPoint
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3cc0600
	// Params: [ Num(3) Size(0xD) ]
	static bool IsAIPawnCanSeeOtherByUniqueIDUsedPathPoint(struct ACharacter* AIPawn, int32_t InOtherUniqueID);

	// Object: Function MFNPCAI.NPCAISubSystemStatics.IsAIInBombRange
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3cc0880
	// Params: [ Num(2) Size(0x9) ]
	static bool IsAIInBombRange(struct AActor* AIPawn);

	// Object: Function MFNPCAI.NPCAISubSystemStatics.IsAIDBNO
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3cc242c
	// Params: [ Num(2) Size(0x9) ]
	static bool IsAIDBNO(struct AActor* InAIPawn);

	// Object: Function MFNPCAI.NPCAISubSystemStatics.IsAIBeSeenByPlayer
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x3cc484c
	// Params: [ Num(2) Size(0x9) ]
	static bool IsAIBeSeenByPlayer(struct ACharacter* AIPawn);

	// Object: Function MFNPCAI.NPCAISubSystemStatics.HasPlacePickUpInventory
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3cc26b4
	// Params: [ Num(3) Size(0x11) ]
	static bool HasPlacePickUpInventory(struct AActor* InAIPawn, struct AActor* Inventory);

	// Object: Function MFNPCAI.NPCAISubSystemStatics.HasOthersAllyInShootScope
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3cbe01c
	// Params: [ Num(2) Size(0x9) ]
	static bool HasOthersAllyInShootScope(struct AActor* InAIPawn);

	// Object: Function MFNPCAI.NPCAISubSystemStatics.HasNoDBNOAllyInGroup
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3cbbea0
	// Params: [ Num(2) Size(0x9) ]
	static bool HasNoDBNOAllyInGroup(struct AActor* InAIOwner);

	// Object: Function MFNPCAI.NPCAISubSystemStatics.GroupAllyDeathToDo
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults]
	// Offset: 0x3cbccdc
	// Params: [ Num(2) Size(0x14) ]
	static void GroupAllyDeathToDo(struct AActor* InAIPawn, const struct FVector& InKillerLocation);

	// Object: Function MFNPCAI.NPCAISubSystemStatics.GoToPoint
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable]
	// Offset: 0x3cc69a0
	// Params: [ Num(12) Size(0x61) ]
	static void GoToPoint(struct AActor* InOwner, struct FVector InPosition, const struct FNPCAIMoveRequestCustomDataImpl& MoveRequestCustomData, const struct TArray<struct AVolume*>& AvoidVolumes, bool bSlowAtTheEnd, float InReachDist, bool bShoudGetUp, bool bGetUpWithCheck, struct AActor* CaredActor, float CaredActorEffectRadius, int32_t GoDecision, bool bUsePathfinding);

	// Object: Function MFNPCAI.NPCAISubSystemStatics.GoDirectly
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable]
	// Offset: 0x3cc643c
	// Params: [ Num(4) Size(0x24) ]
	static void GoDirectly(struct AActor* InOwner, const struct FVector& Direction, float Seconds, struct FVector InBlendingVelocity);

	// Object: Function MFNPCAI.NPCAISubSystemStatics.GoAccordingToWayPoints
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x3cc62c8
	// Params: [ Num(3) Size(0x41) ]
	static void GoAccordingToWayPoints(struct AActor* InOwner, const struct FNavSkeletonGraphFindResult& PathResult, const struct FNavSkeletonMoveSettings& Settings);

	// Object: Function MFNPCAI.NPCAISubSystemStatics.GiveInventoryToAI
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3cc330c
	// Params: [ Num(5) Size(0x19) ]
	static bool GiveInventoryToAI(struct AActor* AIPawn, int64_t itemID, int32_t ItemNum, int32_t SkinID);

	// Object: Function MFNPCAI.NPCAISubSystemStatics.GetZoneGroupInfo
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3cbd9c8
	// Params: [ Num(2) Size(0x10) ]
	static struct UNPCAIZoneGroupInfo* GetZoneGroupInfo(struct AActor* InAIOwner);

	// Object: Function MFNPCAI.NPCAISubSystemStatics.GetZoneGroupAllyTotalDeathNum
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x3cbc6f0
	// Params: [ Num(2) Size(0xC) ]
	static int32_t GetZoneGroupAllyTotalDeathNum(struct AActor* AIPawn);

	// Object: Function MFNPCAI.NPCAISubSystemStatics.GetYoungestSuspectedPoint
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3cbc5c0
	// Params: [ Num(4) Size(0x18) ]
	static struct UNPCAIAttentionPoint* GetYoungestSuspectedPoint(struct AActor* InCharacter, float InRadius, bool InPriorityDanger);

	// Object: Function MFNPCAI.NPCAISubSystemStatics.GetVehicleCanPickUpInVolume
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x3cc2d60
	// Params: [ Num(5) Size(0x21) ]
	static bool GetVehicleCanPickUpInVolume(struct AActor* AIPawn, struct AVolume* Volume, struct AActor*& VehicleKey, struct AActor*& Vehicle);

	// Object: Function MFNPCAI.NPCAISubSystemStatics.GetUp
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3cc5c1c
	// Params: [ Num(2) Size(0x9) ]
	static void GetUp(struct AActor* AIOwner, bool bWithCheck);

	// Object: Function MFNPCAI.NPCAISubSystemStatics.GetTargetInSightBodyPartsLocation
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x3cbdbec
	// Params: [ Num(4) Size(0x24) ]
	static float GetTargetInSightBodyPartsLocation(struct AActor* AIPawn, struct AActor* TargetPawn, struct TArray<struct FVector>& BodyPartsLocation);

	// Object: Function MFNPCAI.NPCAISubSystemStatics.GetTargetBodyPartEnduranceRatios
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x3cc1e28
	// Params: [ Num(3) Size(0x20) ]
	static void GetTargetBodyPartEnduranceRatios(struct AActor* AIPawn, struct AActor* InTarget, struct TArray<float>& OutEnduranceRatios);

	// Object: Function MFNPCAI.NPCAISubSystemStatics.GetSightScaleToTarget
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3cc1320
	// Params: [ Num(3) Size(0x14) ]
	static float GetSightScaleToTarget(struct ACharacter* AIPawn, struct ACharacter* TargetPawn);

	// Object: Function MFNPCAI.NPCAISubSystemStatics.GetSightLookStartPointByPose
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable]
	// Offset: 0x3cc1194
	// Params: [ Num(5) Size(0x24) ]
	static struct FVector GetSightLookStartPointByPose(struct AActor* InAIPawn, const EAIPose& AIPose, const EAILeanType& AILean, struct UNPCAIPropertyComponent_Look* InLookProps);

	// Object: Function MFNPCAI.NPCAISubSystemStatics.GetSceneEventInfo
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x3cba27c
	// Params: [ Num(4) Size(0x51) ]
	static bool GetSceneEventInfo(struct UObject* WorldContext, int32_t EvtUniqueId, struct FNPCAISceneEventInfo& OutEvent);

	// Object: Function MFNPCAI.NPCAISubSystemStatics.GetSceneEvent
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3cbab84
	// Params: [ Num(3) Size(0x18) ]
	static struct UAISceneEventMessage* GetSceneEvent(struct UObject* WorldContext, int32_t EvtUniqueId);

	// Object: Function MFNPCAI.NPCAISubSystemStatics.GetRandomReachablePointUseFilter
	// Flags: [Final|Native|Static|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x3cb8d2c
	// Params: [ Num(5) Size(0x2C) ]
	static struct FVector GetRandomReachablePointUseFilter(struct UObject* WorldContext, struct FVector InPoint, float InRadius, struct UNavigationQueryFilter* FilterClass);

	// Object: Function MFNPCAI.NPCAISubSystemStatics.GetProjectPointToNavigation
	// Flags: [Final|Native|Static|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x3cb9f1c
	// Params: [ Num(4) Size(0x24) ]
	static struct FVector GetProjectPointToNavigation(struct UObject* WorldContext, struct FVector InCenter, bool bNotFoundReturnSelf);

	// Object: Function MFNPCAI.NPCAISubSystemStatics.GetPoseType
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3cc57dc
	// Params: [ Num(2) Size(0x9) ]
	static EAIPose GetPoseType(struct ACharacter* Character);

	// Object: Function MFNPCAI.NPCAISubSystemStatics.GetPathAcrossLastDoorInfo
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x3cc3a28
	// Params: [ Num(3) Size(0x29) ]
	static bool GetPathAcrossLastDoorInfo(struct AActor* AIPawn, struct FAISafetyOpenDoorResp& AcrossDoorInfo);

	// Object: Function MFNPCAI.NPCAISubSystemStatics.GetOpenDoorSuitableLocation
	// Flags: [Final|Native|Static|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x3cc377c
	// Params: [ Num(3) Size(0x1C) ]
	static struct FVector GetOpenDoorSuitableLocation(struct AActor* InAIPawn, struct AActor* InDoor);

	// Object: Function MFNPCAI.NPCAISubSystemStatics.GetOpenDoorSafetyPoints
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable]
	// Offset: 0x3cc3864
	// Params: [ Num(5) Size(0x34) ]
	static void GetOpenDoorSafetyPoints(struct AActor* AIPawn, struct AActor* InDoor, struct FVector NavLinkPoint, struct TArray<struct FAIDoorSingleSafetyPoint>& SafetyPoints, int32_t& PointsNum);

	// Object: Function MFNPCAI.NPCAISubSystemStatics.GetNearReachablePointEscapeBombArea
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable]
	// Offset: 0x3cb8ba8
	// Params: [ Num(5) Size(0x34) ]
	static struct FVector GetNearReachablePointEscapeBombArea(struct UObject* WorldContext, struct FVector InPoint, float InRadius, const struct TArray<ENPCAIPerceptibleTile>& EscapeTiles);

	// Object: Function MFNPCAI.NPCAISubSystemStatics.GetNearestScavPlayerList
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x3cbb9fc
	// Params: [ Num(5) Size(0x1E) ]
	static void GetNearestScavPlayerList(struct AActor* InAIPawn, struct TArray<struct AActor*>& ScavPlayerList, float InRadius, bool InSight, EAISenseBehaviorType Action);

	// Object: Function MFNPCAI.NPCAISubSystemStatics.GetNearestScavPlayer
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3cbbbc0
	// Params: [ Num(5) Size(0x18) ]
	static struct AActor* GetNearestScavPlayer(struct AActor* InAIPawn, float InRadius, bool InSight, EAISenseBehaviorType Action);

	// Object: Function MFNPCAI.NPCAISubSystemStatics.GetNearestPMCPlayer
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3cbbd30
	// Params: [ Num(5) Size(0x18) ]
	static struct AActor* GetNearestPMCPlayer(struct AActor* InAIPawn, float InRadius, bool InSight, EAISenseBehaviorType Action);

	// Object: Function MFNPCAI.NPCAISubSystemStatics.GetNearestInventoryCanPickUp
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3cc2ee4
	// Params: [ Num(5) Size(0x20) ]
	static struct AActor* GetNearestInventoryCanPickUp(struct AActor* InAIPawn, float InRange, bool bIgnoreChecked, float PathLength);

	// Object: Function MFNPCAI.NPCAISubSystemStatics.GetNearestDBNOAITeammate
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3cc225c
	// Params: [ Num(3) Size(0x18) ]
	static struct AActor* GetNearestDBNOAITeammate(struct AActor* InAIPawn, float InRange);

	// Object: Function MFNPCAI.NPCAISubSystemStatics.GetNearbyDoor
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3cc351c
	// Params: [ Num(4) Size(0x18) ]
	static struct AActor* GetNearbyDoor(struct AActor* InAIPawn, float InRadius, bool bWantNearest);

	// Object: Function MFNPCAI.NPCAISubSystemStatics.GetNavPathEndLoc
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure]
	// Offset: 0x3cc65a0
	// Params: [ Num(2) Size(0x24) ]
	static struct FVector GetNavPathEndLoc(const struct FNPCAINavPathForBP& NavPath);

	// Object: Function MFNPCAI.NPCAISubSystemStatics.GetMovingAINumInRendered
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3cbedbc
	// Params: [ Num(2) Size(0xC) ]
	static int32_t GetMovingAINumInRendered(struct UObject* WorldContext);

	// Object: Function MFNPCAI.NPCAISubSystemStatics.GetMovingAINum
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3cbee64
	// Params: [ Num(2) Size(0xC) ]
	static int32_t GetMovingAINum(struct UObject* WorldContext);

	// Object: Function MFNPCAI.NPCAISubSystemStatics.GetLeanType
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3cc5884
	// Params: [ Num(2) Size(0x9) ]
	static EAILeanType GetLeanType(struct AActor* AIOwner);

	// Object: Function MFNPCAI.NPCAISubSystemStatics.GetLatestAllyDeathInfo
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x3cbcbe8
	// Params: [ Num(3) Size(0x25) ]
	static bool GetLatestAllyDeathInfo(struct AActor* InAIPawn, struct FAIGroupAllyDeathInfo& OutDeathInfo);

	// Object: Function MFNPCAI.NPCAISubSystemStatics.GetLastMoveResult
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3cc4ebc
	// Params: [ Num(2) Size(0x9) ]
	static ENPCAIMoveResult GetLastMoveResult(struct AActor* AIOwner);

	// Object: Function MFNPCAI.NPCAISubSystemStatics.GetLastBeHitedTime
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3cc0420
	// Params: [ Num(2) Size(0xC) ]
	static float GetLastBeHitedTime(struct AActor* InAIPawn);

	// Object: Function MFNPCAI.NPCAISubSystemStatics.GetIsInTryLeanShoot
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3cc49d8
	// Params: [ Num(2) Size(0x9) ]
	static bool GetIsInTryLeanShoot(struct AActor* InAIPawn);

	// Object: Function MFNPCAI.NPCAISubSystemStatics.GetInventorysCanPickUp
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x3cc3054
	// Params: [ Num(6) Size(0x29) ]
	static bool GetInventorysCanPickUp(struct AActor* InAIPawn, float InRange, float PathLength, bool bIgnoreChecked, struct TArray<struct AActor*>& OutInventorys);

	// Object: Function MFNPCAI.NPCAISubSystemStatics.GetIfOverlapOther
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3cb825c
	// Params: [ Num(3) Size(0x18) ]
	static struct APawn* GetIfOverlapOther(struct AActor* InAIPawn, float InRadius);

	// Object: Function MFNPCAI.NPCAISubSystemStatics.GetGunShootStartPointByPose
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable]
	// Offset: 0x3cc0f5c
	// Params: [ Num(5) Size(0x24) ]
	static struct FVector GetGunShootStartPointByPose(struct AActor* InAIPawn, const EAIPose& AIPose, const EAILeanType& AILean, struct UNPCAIPropertyComponent_Shoot* InShootProps);

	// Object: Function MFNPCAI.NPCAISubSystemStatics.GetGunShootStartPointAtLocation
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable]
	// Offset: 0x3cc0dc8
	// Params: [ Num(5) Size(0x24) ]
	static struct FVector GetGunShootStartPointAtLocation(struct AActor* InAIPawn, const struct FVector& InActorLocation, const EAIPose& AIPose, const EAILeanType& AILean);

	// Object: Function MFNPCAI.NPCAISubSystemStatics.GetGunShootStartPoint
	// Flags: [Final|Native|Static|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x3cc10e8
	// Params: [ Num(2) Size(0x14) ]
	static struct FVector GetGunShootStartPoint(struct AActor* AIPawn);

	// Object: Function MFNPCAI.NPCAISubSystemStatics.GetGroupSharedEnemySingleInfoByTarget
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3cbd1b4
	// Params: [ Num(3) Size(0x18) ]
	static struct UNPCAIEnemyGroupSingleInfo* GetGroupSharedEnemySingleInfoByTarget(struct AActor* InAIPawn, struct AActor* InTargetPawn);

	// Object: Function MFNPCAI.NPCAISubSystemStatics.GetGroupSharedEnemySingleInfo
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3cbd298
	// Params: [ Num(3) Size(0x18) ]
	static struct UNPCAIEnemyGroupSingleInfo* GetGroupSharedEnemySingleInfo(struct AActor* InAIOwner, struct UNPCAITargetInfo* InEnemyInfo);

	// Object: Function MFNPCAI.NPCAISubSystemStatics.GetGroupEnemyHartedValue
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3cbc220
	// Params: [ Num(3) Size(0x14) ]
	static int32_t GetGroupEnemyHartedValue(struct AActor* InAIOwner, struct AActor* InEnemy);

	// Object: Function MFNPCAI.NPCAISubSystemStatics.GetGoalProtectedPerson
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3cbda70
	// Params: [ Num(2) Size(0x10) ]
	static struct ACharacter* GetGoalProtectedPerson(struct AActor* AIPawn);

	// Object: Function MFNPCAI.NPCAISubSystemStatics.GetGoalEnemyPerson
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3cbe898
	// Params: [ Num(2) Size(0x10) ]
	static struct ACharacter* GetGoalEnemyPerson(struct AActor* InAIPawn);

	// Object: Function MFNPCAI.NPCAISubSystemStatics.GetGoalEnemyInfo
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3cbe7f0
	// Params: [ Num(2) Size(0x10) ]
	static struct UNPCAITargetInfo* GetGoalEnemyInfo(struct AActor* InAIPawn);

	// Object: Function MFNPCAI.NPCAISubSystemStatics.GetFootSounderThrower
	// Flags: [Final|Native|Static|Public|HasOutParms]
	// Offset: 0x3cc24d8
	// Params: [ Num(4) Size(0x20) ]
	static struct AActor* GetFootSounderThrower(struct AActor* AIPawn, struct AActor* FootSounder, bool& OutbAttractAI);

	// Object: Function MFNPCAI.NPCAISubSystemStatics.GetFiringAINum
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3cbef0c
	// Params: [ Num(2) Size(0xC) ]
	static int32_t GetFiringAINum(struct UObject* WorldContext);

	// Object: Function MFNPCAI.NPCAISubSystemStatics.GetFireHitEnemyLastTimeUsePredestined
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3cc47a4
	// Params: [ Num(2) Size(0xC) ]
	static float GetFireHitEnemyLastTimeUsePredestined(struct AActor* InAIPawn);

	// Object: Function MFNPCAI.NPCAISubSystemStatics.GetEnemyHartedValue
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3cbbf4c
	// Params: [ Num(3) Size(0x14) ]
	static int32_t GetEnemyHartedValue(struct AActor* InAIPawn, struct AActor* InEnemy);

	// Object: Function MFNPCAI.NPCAISubSystemStatics.GetDynamicGroupRequestController
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3cbb1dc
	// Params: [ Num(3) Size(0x18) ]
	static struct UNPCAIGroupRequestController* GetDynamicGroupRequestController(int32_t DyGroupId, struct UObject* InWorldContext);

	// Object: Function MFNPCAI.NPCAISubSystemStatics.GetDynamicGroupInfo
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3cbb08c
	// Params: [ Num(2) Size(0x10) ]
	static struct UNPCAIDynamicGroupInfo* GetDynamicGroupInfo(struct AActor* InAIPawn);

	// Object: Function MFNPCAI.NPCAISubSystemStatics.GetDSGetMuzzleFlashSocketLocation
	// Flags: [Final|Native|Static|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x3cc0d1c
	// Params: [ Num(2) Size(0x14) ]
	static struct FVector GetDSGetMuzzleFlashSocketLocation(struct ACharacter* Character);

	// Object: Function MFNPCAI.NPCAISubSystemStatics.GetDestination
	// Flags: [Final|Native|Static|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x3cc6d70
	// Params: [ Num(2) Size(0x14) ]
	static struct FVector GetDestination(struct AActor* InOwner);

	// Object: Function MFNPCAI.NPCAISubSystemStatics.GetCurrentMoveType
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3cc5cfc
	// Params: [ Num(2) Size(0x9) ]
	static EAIMoveType GetCurrentMoveType(struct AActor* AIOwner);

	// Object: Function MFNPCAI.NPCAISubSystemStatics.GetCurrentDynamicGroupId
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3cbb134
	// Params: [ Num(2) Size(0xC) ]
	static int32_t GetCurrentDynamicGroupId(struct AActor* InAIPawn);

	// Object: Function MFNPCAI.NPCAISubSystemStatics.GetCharactersIfOverlapOther
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x3cb8114
	// Params: [ Num(4) Size(0x21) ]
	static bool GetCharactersIfOverlapOther(struct AActor* InAIPawn, float InRadius, struct TArray<struct AActor*>& OverlapCharacters);

	// Object: Function MFNPCAI.NPCAISubSystemStatics.GetCanWarningScavPlayer
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3cbe1ac
	// Params: [ Num(2) Size(0x10) ]
	static struct ACharacter* GetCanWarningScavPlayer(struct AActor* AIPawn);

	// Object: Function MFNPCAI.NPCAISubSystemStatics.GetAllSceneEvents
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x3cbac6c
	// Params: [ Num(2) Size(0x18) ]
	static void GetAllSceneEvents(struct UObject* WorldContext, struct TArray<struct UAISceneEventMessage*>& SceneEvents);

	// Object: Function MFNPCAI.NPCAISubSystemStatics.GetAllSceneEventInfoListWithAI
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable]
	// Offset: 0x3cba054
	// Params: [ Num(5) Size(0x38) ]
	static void GetAllSceneEventInfoListWithAI(struct UObject* WorldContext, int64_t AIID, int64_t AIPathGroupID, const struct FVector& AILocation, struct TArray<struct FNPCAISceneEventInfo>& OutEventInfos);

	// Object: Function MFNPCAI.NPCAISubSystemStatics.GetAllScavPlayerList
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x3cbb828
	// Params: [ Num(5) Size(0x1B) ]
	static void GetAllScavPlayerList(struct AActor* InAIPawn, struct TArray<struct AActor*>& ScavPlayerList, bool bContainsRemoteActor, bool InSight, EAISenseBehaviorType Action);

	// Object: Function MFNPCAI.NPCAISubSystemStatics.GetAllInSightEnemysBySelf
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3cbdea4
	// Params: [ Num(2) Size(0x18) ]
	static struct TArray<struct AActor*> GetAllInSightEnemysBySelf(struct AActor* InAIPawn);

	// Object: Function MFNPCAI.NPCAISubSystemStatics.GetAllInSightEnemysByGroup
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3cbdd2c
	// Params: [ Num(2) Size(0x18) ]
	static struct TArray<struct AActor*> GetAllInSightEnemysByGroup(struct AActor* InAIPawn);

	// Object: Function MFNPCAI.NPCAISubSystemStatics.GetAllHadSeenEnemysBySelf
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3cbdf60
	// Params: [ Num(2) Size(0x18) ]
	static struct TArray<struct AActor*> GetAllHadSeenEnemysBySelf(struct AActor* InAIPawn);

	// Object: Function MFNPCAI.NPCAISubSystemStatics.GetAllHadSeenEnemysByGroup
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3cbdde8
	// Params: [ Num(2) Size(0x18) ]
	static struct TArray<struct AActor*> GetAllHadSeenEnemysByGroup(struct AActor* InAIPawn);

	// Object: Function MFNPCAI.NPCAISubSystemStatics.GetAllAllyDeathInfo
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x3cbcaf8
	// Params: [ Num(2) Size(0x18) ]
	static void GetAllAllyDeathInfo(struct AActor* InAIPawn, struct TArray<struct FAIGroupAllyDeathInfo>& OutDeathInfoList);

	// Object: Function MFNPCAI.NPCAISubSystemStatics.GetAliveTeamMembers
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x3cbe940
	// Params: [ Num(3) Size(0x20) ]
	static void GetAliveTeamMembers(struct AActor* AIPawn, struct AActor* Player, struct TArray<struct ACharacter*>& OutTeamMembers);

	// Object: Function MFNPCAI.NPCAISubSystemStatics.GetAIPeekCount
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x3cb853c
	// Params: [ Num(2) Size(0xC) ]
	static int32_t GetAIPeekCount(struct AActor* AIPawn);

	// Object: Function MFNPCAI.NPCAISubSystemStatics.GetAimingTypeWeightInRuntime
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3cb7964
	// Params: [ Num(4) Size(0x10) ]
	static float GetAimingTypeWeightInRuntime(struct AActor* InAIPawn, EAIBodyBulkType InBodyBulk, bool bIsForPlayer);

	// Object: Function MFNPCAI.NPCAISubSystemStatics.GetAimingPoint
	// Flags: [Final|Native|Static|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x3cbfd7c
	// Params: [ Num(2) Size(0x14) ]
	static struct FVector GetAimingPoint(struct AActor* AIPawn);

	// Object: Function MFNPCAI.NPCAISubSystemStatics.GetAimingOffset
	// Flags: [Final|Native|Static|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x3cbfc90
	// Params: [ Num(3) Size(0x18) ]
	static struct FVector GetAimingOffset(struct AActor* AIPawn, float WeakenTime);

	// Object: Function MFNPCAI.NPCAISubSystemStatics.GetAIInSection
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x3cb8344
	// Params: [ Num(2) Size(0xC) ]
	static int32_t GetAIInSection(struct AActor* AIPawn);

	// Object: Function MFNPCAI.NPCAISubSystemStatics.GetAICallUpResult
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x3cb83ec
	// Params: [ Num(2) Size(0x9) ]
	static uint8_t GetAICallUpResult(struct AActor* AIPawn);

	// Object: Function MFNPCAI.NPCAISubSystemStatics.GetAICallUpReason
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x3cb8494
	// Params: [ Num(2) Size(0x9) ]
	static uint8_t GetAICallUpReason(struct AActor* AIPawn);

	// Object: Function MFNPCAI.NPCAISubSystemStatics.GetAIBeTakeDamageDetail
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable]
	// Offset: 0x3cbcfe4
	// Params: [ Num(5) Size(0x2C) ]
	static void GetAIBeTakeDamageDetail(struct AActor* AIPawn, struct ACharacter*& DamageCauser, struct FVector& CauserLocation, struct FVector& TakerLocation, float& DamageValue);

	// Object: Function MFNPCAI.NPCAISubSystemStatics.GetAIBeenHitCount
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x3cc0378
	// Params: [ Num(2) Size(0xC) ]
	static int32_t GetAIBeenHitCount(struct AActor* AIPawn);

	// Object: Function MFNPCAI.NPCAISubSystemStatics.GetAIAcceptedSceneEventsInProgress
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x3cba804
	// Params: [ Num(2) Size(0x18) ]
	static void GetAIAcceptedSceneEventsInProgress(struct AActor* AIPawn, struct TArray<struct UAISceneEventMessage*>& SceneEvents);

	// Object: Function MFNPCAI.NPCAISubSystemStatics.FindTargetInfo
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3cbe0c8
	// Params: [ Num(3) Size(0x18) ]
	static struct UNPCAITargetInfo* FindTargetInfo(struct AActor* InAIPawn, struct AActor* InTargetPawn);

	// Object: Function MFNPCAI.NPCAISubSystemStatics.FindRushDangerCanStopPoint
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable]
	// Offset: 0x3cb9158
	// Params: [ Num(5) Size(0x25) ]
	static bool FindRushDangerCanStopPoint(struct AActor* InAIPawn, const struct FVector& InCheckPoint, struct FVector& StopPoint, float InBackDist);

	// Object: Function MFNPCAI.NPCAISubSystemStatics.FindPathToPointAndLength
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable]
	// Offset: 0x3cb9ab4
	// Params: [ Num(9) Size(0x48) ]
	static struct TArray<struct FVector> FindPathToPointAndLength(struct UObject* WorldContext, struct ACharacter* AIPawn, float& OutPathLength, float& OutPathCost, bool& bFind, const struct FVector& InPointStart, const struct FVector& InPointToGo, EPathExistenceTestMode TestMode);

	// Object: Function MFNPCAI.NPCAISubSystemStatics.FindPathToPoint
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable]
	// Offset: 0x3cb9da8
	// Params: [ Num(4) Size(0x30) ]
	static struct TArray<struct FVector> FindPathToPoint(struct AActor* InAIPawn, const struct FVector& InPointStart, const struct FVector& InPointToGo);

	// Object: Function MFNPCAI.NPCAISubSystemStatics.FindAmbushAgainstPoint
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable]
	// Offset: 0x3cb92dc
	// Params: [ Num(5) Size(0x2D) ]
	static bool FindAmbushAgainstPoint(struct AActor* InAIPawn, struct FVector InPointStart, struct FVector InPointToGo, struct FVector& OutPoint);

	// Object: Function MFNPCAI.NPCAISubSystemStatics.DismissDynamicGroupById
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3cbb2c4
	// Params: [ Num(2) Size(0x10) ]
	static void DismissDynamicGroupById(int32_t DyGroupId, struct UObject* InWorldContext);

	// Object: Function MFNPCAI.NPCAISubSystemStatics.DismissDynamicGroup
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3cbb39c
	// Params: [ Num(1) Size(0x8) ]
	static void DismissDynamicGroup(struct AActor* InAIPawn);

	// Object: Function MFNPCAI.NPCAISubSystemStatics.DisableFlanking
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3cc6230
	// Params: [ Num(1) Size(0x8) ]
	static void DisableFlanking(struct AActor* InOwner);

	// Object: Function MFNPCAI.NPCAISubSystemStatics.CreateDynamicGroup
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3cbb6ac
	// Params: [ Num(3) Size(0x18) ]
	static struct UNPCAIDynamicGroupInfo* CreateDynamicGroup(struct AActor* InAIPawn, struct UNPCAIDynamicGroupInfo* DynamicGroupClass);

	// Object: Function MFNPCAI.NPCAISubSystemStatics.CloseDoor
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3cc3ca0
	// Params: [ Num(2) Size(0x10) ]
	static void CloseDoor(struct AActor* InAIPawn, struct AActor* InDoor);

	// Object: Function MFNPCAI.NPCAISubSystemStatics.CheckFireCanHitPenetration
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x3cc4698
	// Params: [ Num(3) Size(0xA1) ]
	static bool CheckFireCanHitPenetration(struct AActor* InAIPawn, const struct FHitResult& InHitResult);

	// Object: Function MFNPCAI.NPCAISubSystemStatics.CheckCanStackGun
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable]
	// Offset: 0x3cc4488
	// Params: [ Num(7) Size(0x25) ]
	static bool CheckCanStackGun(struct AActor* InAIPawn, struct AActor* InTargetPawn, EAIPose& OutAIPose, EAILeanType& OutAILean, struct FVector& OutShotPoint, float InCheckTargetRadius);

	// Object: Function MFNPCAI.NPCAISubSystemStatics.CheckCanGotoPoint
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable]
	// Offset: 0x3cb9450
	// Params: [ Num(5) Size(0x25) ]
	static bool CheckCanGotoPoint(struct UObject* WorldContext, const struct FVector& InPointStart, const struct FVector& InPointToGo, float LimitLenght);

	// Object: Function MFNPCAI.NPCAISubSystemStatics.CheckAIGroupDBNOWipeOut
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3cc2044
	// Params: [ Num(1) Size(0x8) ]
	static void CheckAIGroupDBNOWipeOut(struct AActor* InAIPawn);

	// Object: Function MFNPCAI.NPCAISubSystemStatics.ChangeAlert
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3cc4d30
	// Params: [ Num(2) Size(0x9) ]
	static void ChangeAlert(struct AActor* AIPawn, bool bAlert);

	// Object: Function MFNPCAI.NPCAISubSystemStatics.CanTryProne
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3cc5ac4
	// Params: [ Num(2) Size(0x9) ]
	static bool CanTryProne(struct AActor* AIPawn);

	// Object: Function MFNPCAI.NPCAISubSystemStatics.CanShootPointIfOnStandPoint
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable]
	// Offset: 0x3cc17a8
	// Params: [ Num(6) Size(0x2A) ]
	static bool CanShootPointIfOnStandPoint(struct AActor* AIPawn, const struct FVector& StandPoint, const struct FVector& TargetPoint, struct AActor* IgnoreActor, bool bIgnoreCharacters);

	// Object: Function MFNPCAI.NPCAISubSystemStatics.CanShootPoint
	// Flags: [Final|Native|Static|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x3cc1cb4
	// Params: [ Num(5) Size(0x22) ]
	static bool CanShootPoint(struct AActor* InAIPawn, struct FVector InShootPoint, struct AActor* IgnoreActor, bool bIgnoreCharacters);

	// Object: Function MFNPCAI.NPCAISubSystemStatics.CanSeePointIfOnStandPoint
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable]
	// Offset: 0x3cc1974
	// Params: [ Num(6) Size(0x2A) ]
	static bool CanSeePointIfOnStandPoint(struct AActor* AIPawn, const struct FVector& StandPoint, const struct FVector& TargetPoint, struct AActor* IgnoreActor, bool bIgnoreCharacters);

	// Object: Function MFNPCAI.NPCAISubSystemStatics.CanSeePoint
	// Flags: [Final|Native|Static|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x3cc1b40
	// Params: [ Num(5) Size(0x22) ]
	static bool CanSeePoint(struct AActor* InAIPawn, struct FVector InPoint, struct AActor* IgnoreActor, bool bIgnoreCharacters);

	// Object: Function MFNPCAI.NPCAISubSystemStatics.CanOpenDoor
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3cc3e48
	// Params: [ Num(3) Size(0x11) ]
	static bool CanOpenDoor(struct AActor* InAIPawn, struct AActor* InDoor);

	// Object: Function MFNPCAI.NPCAISubSystemStatics.CancelPickUpInventory
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3cc2b58
	// Params: [ Num(1) Size(0x8) ]
	static void CancelPickUpInventory(struct AActor* InAIPawn);

	// Object: Function MFNPCAI.NPCAISubSystemStatics.CalculateRequiredAimingTime
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable]
	// Offset: 0x3cbeb1c
	// Params: [ Num(3) Size(0x18) ]
	static float CalculateRequiredAimingTime(struct AActor* AIPawn, const struct FVector& AimingPoint);

	// Object: Function MFNPCAI.NPCAISubSystemStatics.CalculatePathLengthToPoint
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable]
	// Offset: 0x3cb95d4
	// Params: [ Num(4) Size(0x24) ]
	static float CalculatePathLengthToPoint(struct UObject* WorldContext, const struct FVector& InPointStart, const struct FVector& InPointToGo);

	// Object: Function MFNPCAI.NPCAISubSystemStatics.CalculateGroupMembersGoalEnemy
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3cbd930
	// Params: [ Num(1) Size(0x8) ]
	static void CalculateGroupMembersGoalEnemy(struct AActor* InAIOwner);

	// Object: Function MFNPCAI.NPCAISubSystemStatics.CalcPathToPoint
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable]
	// Offset: 0x3cc67bc
	// Params: [ Num(4) Size(0x48) ]
	static void CalcPathToPoint(struct AActor* InOwner, struct FVector InPosition, const struct FNPCAIMoveRequestCustomDataImpl& MoveRequestCustomData, struct FNPCAINavPathForBP& OutNavPath);

	// Object: Function MFNPCAI.NPCAISubSystemStatics.AIUseInventoryByClass
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3cc3224
	// Params: [ Num(3) Size(0x11) ]
	static bool AIUseInventoryByClass(struct AActor* InAIPawn, struct UObject* InventoryClass);

	// Object: Function MFNPCAI.NPCAISubSystemStatics.AIStopFire
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3cbf800
	// Params: [ Num(1) Size(0x8) ]
	static void AIStopFire(struct AActor* AIPawn);

	// Object: Function MFNPCAI.NPCAISubSystemStatics.AIStartFire
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3cbf898
	// Params: [ Num(2) Size(0x9) ]
	static bool AIStartFire(struct AActor* AIPawn);

	// Object: Function MFNPCAI.NPCAISubSystemStatics.AIRLUpdateFireSetting
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3cbf3a8
	// Params: [ Num(8) Size(0x1F) ]
	static void AIRLUpdateFireSetting(struct AActor* AIPawn, bool CalcShoot, bool CalcSight, struct AActor* EnemyTarget, float FireInterval, bool bIgnoreAimingTime, bool bEnabledRecoilControl, bool bEnabledHitRateControl);

	// Object: Function MFNPCAI.NPCAISubSystemStatics.AIRLThrowProjectile
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3cbf23c
	// Params: [ Num(1) Size(0x8) ]
	static void AIRLThrowProjectile(struct AActor* AIPawn);

	// Object: Function MFNPCAI.NPCAISubSystemStatics.AIRLSwitchToProjectile
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3cbf2d4
	// Params: [ Num(2) Size(0x10) ]
	static void AIRLSwitchToProjectile(struct AActor* AIPawn, int64_t ProjectileID);

	// Object: Function MFNPCAI.NPCAISubSystemStatics.AIRLSwitchToBestWeapon
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3cbf1a4
	// Params: [ Num(1) Size(0x8) ]
	static void AIRLSwitchToBestWeapon(struct AActor* AIPawn);

	// Object: Function MFNPCAI.NPCAISubSystemStatics.AIRLHoldProjectile
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3cbf10c
	// Params: [ Num(1) Size(0x8) ]
	static void AIRLHoldProjectile(struct AActor* AIPawn);

	// Object: Function MFNPCAI.NPCAISubSystemStatics.AIGiveUpSceneEvent
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3cba8f4
	// Params: [ Num(2) Size(0x10) ]
	static void AIGiveUpSceneEvent(struct AActor* AIPawn, struct UAISceneEventMessage* SceneEvent);

	// Object: Function MFNPCAI.NPCAISubSystemStatics.AICompleteSceneEvent
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3cba9c8
	// Params: [ Num(2) Size(0x10) ]
	static void AICompleteSceneEvent(struct AActor* AIPawn, struct UAISceneEventMessage* SceneEvent);

	// Object: Function MFNPCAI.NPCAISubSystemStatics.AIAcceptSceneEvent
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3cbaa9c
	// Params: [ Num(3) Size(0x11) ]
	static bool AIAcceptSceneEvent(struct AActor* AIPawn, struct UAISceneEventMessage* SceneEvent);

	// Object: Function MFNPCAI.NPCAISubSystemStatics.AddToGroupEnemy
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3cbd504
	// Params: [ Num(5) Size(0x19) ]
	static void AddToGroupEnemy(struct AActor* InAIPawn, struct AActor* InEnemy, bool IsTemporary, float TemporaryTime, bool IsLetOthersAllyKnow);

	// Object: Function MFNPCAI.NPCAISubSystemStatics.AddToGroupAlly
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3cbd430
	// Params: [ Num(2) Size(0x10) ]
	static void AddToGroupAlly(struct AActor* InAIPawn, struct AActor* InTargetPawn);

	// Object: Function MFNPCAI.NPCAISubSystemStatics.AddInventoryToIgnorePickUp
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3cc279c
	// Params: [ Num(2) Size(0x10) ]
	static void AddInventoryToIgnorePickUp(struct AActor* InAIPawn, struct AActor* Inventory);

	// Object: Function MFNPCAI.NPCAISubSystemStatics.AddAimingTypeInRuntime
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3cb7bb4
	// Params: [ Num(4) Size(0x11) ]
	static void AddAimingTypeInRuntime(struct AActor* InAIPawn, EAIBodyBulkType InBodyBulk, float InWeight, bool bIsForPlayer);
};

// Object: Class MFNPCAI.NPCAISystem
// Size: 0x150 (Inherited: 0x148)
struct UNPCAISystem : UAISystem
{
	DEFINE_UE_CLASS_HELPERS(UNPCAISystem, "NPCAISystem")

	uint8_t Pad_0x148[0x8]; // 0x148(0x8)
};

// Object: Class MFNPCAI.NPCAITacticSystemComponent
// Size: 0x108 (Inherited: 0xF0)
struct UNPCAITacticSystemComponent : UNPCAISubSystemComponent
{
	DEFINE_UE_CLASS_HELPERS(UNPCAITacticSystemComponent, "NPCAITacticSystemComponent")

	int32_t OccupyPointID; // 0xF0(0x4)
	float TimeGetEnemyList; // 0xF4(0x4)
	struct UCoverSystem* CoverSystem; // 0xF8(0x8)
	struct ATacticSystemActor* TacticSystemActor; // 0x100(0x8)

	// Object: Function MFNPCAI.NPCAITacticSystemComponent.UnOccupyTacticPoint
	// Flags: [Native|Event|Public|BlueprintCallable|BlueprintEvent]
	// Offset: 0x3ccb4b0
	// Params: [ Num(2) Size(0x5) ]
	bool UnOccupyTacticPoint(int32_t PointID);

	// Object: Function MFNPCAI.NPCAITacticSystemComponent.SetCurrentTacticPointID
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3cca710
	// Params: [ Num(1) Size(0x4) ]
	void SetCurrentTacticPointID(int32_t PointID);

	// Object: Function MFNPCAI.NPCAITacticSystemComponent.PointIsOccupy
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3ccb080
	// Params: [ Num(2) Size(0x5) ]
	bool PointIsOccupy(int32_t PointID);

	// Object: Function MFNPCAI.NPCAITacticSystemComponent.OccupyTacticPoint
	// Flags: [Native|Event|Public|BlueprintCallable|BlueprintEvent]
	// Offset: 0x3ccb56c
	// Params: [ Num(2) Size(0x5) ]
	bool OccupyTacticPoint(int32_t PointID);

	// Object: Function MFNPCAI.NPCAITacticSystemComponent.IsSafeForOneEnemy
	// Flags: [Final|Native|Protected|HasOutParms|HasDefaults]
	// Offset: 0x3cc94dc
	// Params: [ Num(4) Size(0x2D) ]
	bool IsSafeForOneEnemy(const struct FVector& InPointLocation, const struct TArray<struct FActionPointRadianSafe>& InOrientRadianSafetys, const struct FVector& InEnemyPos);

	// Object: Function MFNPCAI.NPCAITacticSystemComponent.IsSafeForAllEnemy
	// Flags: [Final|Native|Protected|HasOutParms|HasDefaults]
	// Offset: 0x3cc964c
	// Params: [ Num(3) Size(0x21) ]
	bool IsSafeForAllEnemy(const struct FVector& InPointLocation, const struct TArray<struct FActionPointRadianSafe>& InOrientRadianSafetys);

	// Object: Function MFNPCAI.NPCAITacticSystemComponent.GetTotalTacticPointNum
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3ccaf9c
	// Params: [ Num(1) Size(0x4) ]
	int32_t GetTotalTacticPointNum();

	// Object: Function MFNPCAI.NPCAITacticSystemComponent.GetTacticPointData
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	// Offset: 0x3cca594
	// Params: [ Num(3) Size(0x79) ]
	bool GetTacticPointData(int32_t PointID, struct FTacticPointData& PointData);

	// Object: Function MFNPCAI.NPCAITacticSystemComponent.GetPointOccupiedTaker
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3ccafd0
	// Params: [ Num(2) Size(0x10) ]
	struct AActor* GetPointOccupiedTaker(int32_t PointID);

	// Object: Function MFNPCAI.NPCAITacticSystemComponent.GetKeyRoutePointDataByUniqueIndex
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x3cc9770
	// Params: [ Num(3) Size(0x69) ]
	bool GetKeyRoutePointDataByUniqueIndex(int32_t PointUniqueIndex, struct FKeyRoutePointData& PointData);

	// Object: Function MFNPCAI.NPCAITacticSystemComponent.GetKeyRoutePointData
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x3cc98b8
	// Params: [ Num(3) Size(0x69) ]
	bool GetKeyRoutePointData(int32_t PointID, struct FKeyRoutePointData& PointData);

	// Object: Function MFNPCAI.NPCAITacticSystemComponent.GetFarthestTacticPointInList
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable]
	// Offset: 0x3cca7b8
	// Params: [ Num(4) Size(0x91) ]
	bool GetFarthestTacticPointInList(struct FVector InCenter, const struct TArray<struct FTacticPointData>& InPointsList, struct FTacticPointData& OutPoint);

	// Object: Function MFNPCAI.NPCAITacticSystemComponent.GetCurrentTacticPointID
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x3cca6dc
	// Params: [ Num(1) Size(0x4) ]
	int32_t GetCurrentTacticPointID();

	// Object: Function MFNPCAI.NPCAITacticSystemComponent.GetCurrentTacticPointData
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	// Offset: 0x3cca48c
	// Params: [ Num(2) Size(0x71) ]
	bool GetCurrentTacticPointData(struct FTacticPointData& PointData);

	// Object: Function MFNPCAI.NPCAITacticSystemComponent.GetClosestTacticPointInList
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable]
	// Offset: 0x3cca9d0
	// Params: [ Num(4) Size(0x91) ]
	bool GetClosestTacticPointInList(struct FVector InCenter, const struct TArray<struct FTacticPointData>& InPointsList, struct FTacticPointData& OutPoint);

	// Object: Function MFNPCAI.NPCAITacticSystemComponent.FindTacticPointsInRadius
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable]
	// Offset: 0x3ccab78
	// Params: [ Num(6) Size(0x35) ]
	bool FindTacticPointsInRadius(struct FVector InCenter, float InRadius, struct TArray<struct FTacticPointData>& OutPoints, const struct TArray<ETacticPointType>& InFindType, float ZLimit);

	// Object: Function MFNPCAI.NPCAITacticSystemComponent.FindSafeToPointByKeyRoute
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable]
	// Offset: 0x3cc9f58
	// Params: [ Num(5) Size(0x25) ]
	bool FindSafeToPointByKeyRoute(const struct FVector& ToPoint, float InRadius, struct TArray<struct FKeyRoutePointData>& OutPaths, int32_t InDepth);

	// Object: Function MFNPCAI.NPCAITacticSystemComponent.FindPathByKeyRoute
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x3cc9d0c
	// Params: [ Num(5) Size(0xD9) ]
	bool FindPathByKeyRoute(const struct FKeyRoutePointData& FromPoint, const struct FKeyRoutePointData& ToPoint, EAIKeyRouteQueryType QueryType, struct TArray<struct FKeyRoutePointData>& OutPaths);

	// Object: Function MFNPCAI.NPCAITacticSystemComponent.FindNearestSingleTacticPoint
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable]
	// Offset: 0x3ccad6c
	// Params: [ Num(6) Size(0x95) ]
	bool FindNearestSingleTacticPoint(struct FVector InCenter, float InRadius, struct FTacticPointData& OutPoint, const struct TArray<ETacticPointType>& InFindType, float ZLimit);

	// Object: Function MFNPCAI.NPCAITacticSystemComponent.FindBestKeyRoutePoint
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable]
	// Offset: 0x3cca0f0
	// Params: [ Num(5) Size(0x72) ]
	bool FindBestKeyRoutePoint(const struct FVector& InCenter, float InRadius, struct FKeyRoutePointData& OutPointData, EAIKeyRouteQueryType QueryType);

	// Object: Function MFNPCAI.NPCAITacticSystemComponent.CheckPointIsAvailable
	// Flags: [Native|Event|Public|BlueprintCallable|BlueprintEvent]
	// Offset: 0x3ccb628
	// Params: [ Num(2) Size(0x5) ]
	bool CheckPointIsAvailable(int32_t PointID);

	// Object: Function MFNPCAI.NPCAITacticSystemComponent.CheckPointIsActivationForAim
	// Flags: [Native|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent]
	// Offset: 0x3ccb6e4
	// Params: [ Num(5) Size(0x29) ]
	bool CheckPointIsActivationForAim(int32_t PointID, struct AActor* ThreatTarget, struct FVector ThreatTargetLoc, struct FRotator& AimRot);

	// Object: Function MFNPCAI.NPCAITacticSystemComponent.CheckActivation
	// Flags: [Native|Event|Public|BlueprintCallable|BlueprintEvent]
	// Offset: 0x3ccb868
	// Params: [ Num(2) Size(0x5) ]
	bool CheckActivation(int32_t PointID);

	// Object: Function MFNPCAI.NPCAITacticSystemComponent.CanShootToTarget
	// Flags: [Native|Event|Public|BlueprintCallable|BlueprintEvent]
	// Offset: 0x3ccb134
	// Params: [ Num(3) Size(0x11) ]
	bool CanShootToTarget(int32_t PointID, struct AActor* InEnemy);

	// Object: Function MFNPCAI.NPCAITacticSystemComponent.CanOverWatch
	// Flags: [Native|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent]
	// Offset: 0x3ccb230
	// Params: [ Num(5) Size(0x29) ]
	bool CanOverWatch(int32_t PointID, struct AActor* ThreatTarget, struct FVector InThreatTargetLocation, struct FRotator& OutAimRot);

	// Object: Function MFNPCAI.NPCAITacticSystemComponent.CanEscape
	// Flags: [Native|Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent]
	// Offset: 0x3ccb3b4
	// Params: [ Num(3) Size(0x11) ]
	bool CanEscape(int32_t PointID, struct FVector InPosition);

	// Object: Function MFNPCAI.NPCAITacticSystemComponent.CalculateTacticPointIsSafeById
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3cca3d8
	// Params: [ Num(2) Size(0x5) ]
	bool CalculateTacticPointIsSafeById(int32_t PointID);

	// Object: Function MFNPCAI.NPCAITacticSystemComponent.CalculateTacticPointIsSafe
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x3cca2d0
	// Params: [ Num(2) Size(0x71) ]
	bool CalculateTacticPointIsSafe(const struct FTacticPointData& PointData);

	// Object: Function MFNPCAI.NPCAITacticSystemComponent.CalculateKeyRouteSaftyInDepth
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x3cc9a00
	// Params: [ Num(5) Size(0x76) ]
	bool CalculateKeyRouteSaftyInDepth(const struct FKeyRoutePointData& InKeyRoutePointData, struct TArray<int32_t>& OutPointsIndexs, int32_t InDepth, bool bSort);

	// Object: Function MFNPCAI.NPCAITacticSystemComponent.CalculateKeyRoutePointIsSafe
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x3cc9bfc
	// Params: [ Num(2) Size(0x61) ]
	bool CalculateKeyRoutePointIsSafe(const struct FKeyRoutePointData& InKeyRoutePointData);
};

// Object: Class MFNPCAI.NPCAITargetInfo
// Size: 0x540 (Inherited: 0x60)
struct UNPCAITargetInfo : UNPCAITargetInfoBase
{
	DEFINE_UE_CLASS_HELPERS(UNPCAITargetInfo, "NPCAITargetInfo")

	struct TArray<EAIBodyPartType> BodyPartsInArmor; // 0x60(0x10)
	float LastCalculateBodyPartsInArmorTime; // 0x70(0x4)
	uint8_t Pad_0x74[0x45C]; // 0x74(0x45C)
	struct AActor* Person; // 0x4D0(0x8)
	struct AActor* AIPawn; // 0x4D8(0x8)
	struct UNPCAIEnemyGroupSingleInfo* EnemyGroupSingleInfo; // 0x4E0(0x8)
	struct UNPCAIPropertyComponent_Look* LookProps; // 0x4E8(0x8)
	struct UNPCAIPropertyComponent_Aiming* AimingProps; // 0x4F0(0x8)
	EAIEnemyVisibilityType VisibileOnlyBySense; // 0x4F8(0x1)
	uint8_t Pad_0x4F9[0x47]; // 0x4F9(0x47)

	// Object: Function MFNPCAI.NPCAITargetInfo.ShallSeenEnemy
	// Flags: [Final|Native|Public]
	// Offset: 0x3ccce14
	// Params: [ Num(1) Size(0x1) ]
	bool ShallSeenEnemy();

	// Object: Function MFNPCAI.NPCAITargetInfo.ShallKnowEnemy
	// Flags: [Final|Native|Public]
	// Offset: 0x3ccce4c
	// Params: [ Num(1) Size(0x1) ]
	bool ShallKnowEnemy();

	// Object: Function MFNPCAI.NPCAITargetInfo.SetVisibleFlashLight
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3ccd0e8
	// Params: [ Num(1) Size(0x1) ]
	void SetVisibleFlashLight(bool InVisible);

	// Object: Function MFNPCAI.NPCAITargetInfo.SetVisible
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3ccd198
	// Params: [ Num(1) Size(0x1) ]
	void SetVisible(bool InVisible);

	// Object: Function MFNPCAI.NPCAITargetInfo.SetEnemyGroupSingleInfo
	// Flags: [Final|Native|Public]
	// Offset: 0x3cccc24
	// Params: [ Num(1) Size(0x8) ]
	void SetEnemyGroupSingleInfo(struct UNPCAIEnemyGroupSingleInfo* Info);

	// Object: Function MFNPCAI.NPCAITargetInfo.SetCanShoot
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3ccd248
	// Params: [ Num(1) Size(0x1) ]
	void SetCanShoot(bool Value);

	// Object: Function MFNPCAI.NPCAITargetInfo.ResetCalculatePartInterval
	// Flags: [Final|Native|Public]
	// Offset: 0x3ccc3c4
	// Params: [ Num(0) Size(0x0) ]
	void ResetCalculatePartInterval();

	// Object: Function MFNPCAI.NPCAITargetInfo.RandomUpperPartToShoot
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3ccc778
	// Params: [ Num(0) Size(0x0) ]
	void RandomUpperPartToShoot();

	// Object: Function MFNPCAI.NPCAITargetInfo.RandomArmToShoot
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3ccc78c
	// Params: [ Num(0) Size(0x0) ]
	void RandomArmToShoot();

	// Object: Function MFNPCAI.NPCAITargetInfo.IsWantShootArmorPart
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x3ccc684
	// Params: [ Num(1) Size(0x1) ]
	bool IsWantShootArmorPart();

	// Object: Function MFNPCAI.NPCAITargetInfo.IsVisibleFlashLight
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x3ccd330
	// Params: [ Num(2) Size(0x5) ]
	bool IsVisibleFlashLight(float FlashLightSeeDuration);

	// Object: Function MFNPCAI.NPCAITargetInfo.IsVisible
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3ccd3e4
	// Params: [ Num(1) Size(0x1) ]
	bool IsVisible();

	// Object: Function MFNPCAI.NPCAITargetInfo.IsRealVisible
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3ccd2f8
	// Params: [ Num(1) Size(0x1) ]
	bool IsRealVisible();

	// Object: Function MFNPCAI.NPCAITargetInfo.IsPersonValid
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3cccbec
	// Params: [ Num(1) Size(0x1) ]
	bool IsPersonValid();

	// Object: Function MFNPCAI.NPCAITargetInfo.IsInShotProtectedTime
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3cccb7c
	// Params: [ Num(1) Size(0x1) ]
	bool IsInShotProtectedTime();

	// Object: Function MFNPCAI.NPCAITargetInfo.IsHideInGrassOrSmoke
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x3ccca6c
	// Params: [ Num(1) Size(0x1) ]
	bool IsHideInGrassOrSmoke();

	// Object: Function MFNPCAI.NPCAITargetInfo.IsDBNO
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3cccbb4
	// Params: [ Num(1) Size(0x1) ]
	bool IsDBNO();

	// Object: Function MFNPCAI.NPCAITargetInfo.IsArmorCanProtected
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3ccc2b4
	// Params: [ Num(3) Size(0x3) ]
	bool IsArmorCanProtected(EAIBodyPartType PartType, bool bReCalculate);

	// Object: Function MFNPCAI.NPCAITargetInfo.HaveSeenPerson
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3ccca34
	// Params: [ Num(1) Size(0x1) ]
	bool HaveSeenPerson();

	// Object: Function MFNPCAI.NPCAITargetInfo.GetVisibleOnlyBySense
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3cccb48
	// Params: [ Num(1) Size(0x1) ]
	EAIEnemyVisibilityType GetVisibleOnlyBySense();

	// Object: Function MFNPCAI.NPCAITargetInfo.GetPersonDeadTime
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x3ccc9c4
	// Params: [ Num(1) Size(0x4) ]
	float GetPersonDeadTime();

	// Object: Function MFNPCAI.NPCAITargetInfo.GetPersonActorLocation
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x3cccd00
	// Params: [ Num(1) Size(0xC) ]
	struct FVector GetPersonActorLocation();

	// Object: Function MFNPCAI.NPCAITargetInfo.GetPerson
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3cccd70
	// Params: [ Num(1) Size(0x8) ]
	struct AActor* GetPerson();

	// Object: Function MFNPCAI.NPCAITargetInfo.GetPartTypeToShoot
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3ccc708
	// Params: [ Num(1) Size(0x1) ]
	EAIBodyPartType GetPartTypeToShoot();

	// Object: Function MFNPCAI.NPCAITargetInfo.GetPartToShootOfGrassRatio
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3ccc6a0
	// Params: [ Num(1) Size(0x4) ]
	float GetPartToShootOfGrassRatio();

	// Object: Function MFNPCAI.NPCAITargetInfo.GetPartToShootOfBarrier
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3ccc6d4
	// Params: [ Num(1) Size(0x1) ]
	ENPCAISenseBarrier GetPartToShootOfBarrier();

	// Object: Function MFNPCAI.NPCAITargetInfo.GetPartToShoot
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x3ccc73c
	// Params: [ Num(1) Size(0xC) ]
	struct FVector GetPartToShoot();

	// Object: Function MFNPCAI.NPCAITargetInfo.GetLastFireTime
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3cccae0
	// Params: [ Num(1) Size(0x4) ]
	float GetLastFireTime();

	// Object: Function MFNPCAI.NPCAITargetInfo.GetLastFireMeTime
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3cccb14
	// Params: [ Num(1) Size(0x4) ]
	float GetLastFireMeTime();

	// Object: Function MFNPCAI.NPCAITargetInfo.GetInSightBodyPartsLocation
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x3ccc8fc
	// Params: [ Num(2) Size(0x14) ]
	float GetInSightBodyPartsLocation(struct TArray<struct FVector>& BodyPartsLocation);

	// Object: Function MFNPCAI.NPCAITargetInfo.GetGroupSharedTimeLastSeen
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3ccc8c8
	// Params: [ Num(1) Size(0x4) ]
	float GetGroupSharedTimeLastSeen();

	// Object: Function MFNPCAI.NPCAITargetInfo.GetGroupSharedPositionLastSeen
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x3ccc88c
	// Params: [ Num(1) Size(0xC) ]
	struct FVector GetGroupSharedPositionLastSeen();

	// Object: Function MFNPCAI.NPCAITargetInfo.GetGroupSharedPositionEstimate
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x3ccc850
	// Params: [ Num(1) Size(0xC) ]
	struct FVector GetGroupSharedPositionEstimate();

	// Object: Function MFNPCAI.NPCAITargetInfo.GetEnemyLastPosition
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x3cccdd8
	// Params: [ Num(1) Size(0xC) ]
	struct FVector GetEnemyLastPosition();

	// Object: Function MFNPCAI.NPCAITargetInfo.GetEnemyGroupSingleInfo
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x3cccccc
	// Params: [ Num(1) Size(0x8) ]
	struct UNPCAIEnemyGroupSingleInfo* GetEnemyGroupSingleInfo();

	// Object: Function MFNPCAI.NPCAITargetInfo.GetEnemyEstimatePosition
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x3cccaa4
	// Params: [ Num(1) Size(0xC) ]
	struct FVector GetEnemyEstimatePosition();

	// Object: Function MFNPCAI.NPCAITargetInfo.GetDistance
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3cccda4
	// Params: [ Num(1) Size(0x4) ]
	float GetDistance();

	// Object: Function MFNPCAI.NPCAITargetInfo.GetCurrentPositon
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x3ccc9f8
	// Params: [ Num(1) Size(0xC) ]
	struct FVector GetCurrentPositon();

	// Object: Function MFNPCAI.NPCAITargetInfo.GetCanSeeBodyPartsNum
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3ccc650
	// Params: [ Num(1) Size(0x4) ]
	int32_t GetCanSeeBodyPartsNum();

	// Object: Function MFNPCAI.NPCAITargetInfo.GetBodyPartVisibleInfo
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x3cccfe0
	// Params: [ Num(3) Size(0x19) ]
	bool GetBodyPartVisibleInfo(EAIBodyPartType InBodyPart, struct FAIBodyPartVisibilityInfo& OutInfo);

	// Object: Function MFNPCAI.NPCAITargetInfo.GetBodyPartCanShoot
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x3cccf20
	// Params: [ Num(2) Size(0x2) ]
	bool GetBodyPartCanShoot(const EAIBodyPartType& InBodyPart);

	// Object: Function MFNPCAI.NPCAITargetInfo.GetAllBodyPartVisibleInfo
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3ccce84
	// Params: [ Num(1) Size(0x10) ]
	struct TArray<struct FAIBodyPartVisibilityInfo> GetAllBodyPartVisibleInfo();

	// Object: Function MFNPCAI.NPCAITargetInfo.GetAlivePerson
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3cccd3c
	// Params: [ Num(1) Size(0x8) ]
	struct AActor* GetAlivePerson();

	// Object: Function MFNPCAI.NPCAITargetInfo.CanShoot
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3ccd41c
	// Params: [ Num(1) Size(0x1) ]
	bool CanShoot();

	// Object: Function MFNPCAI.NPCAITargetInfo.CalculatePartToShoot
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3ccc7a0
	// Params: [ Num(1) Size(0x1) ]
	void CalculatePartToShoot(bool bIgnoreInterval);

	// Object: Function MFNPCAI.NPCAITargetInfo.CalculateBodyPartForShoot
	// Flags: [Final|Native|Public]
	// Offset: 0x3ccc3d8
	// Params: [ Num(7) Size(0x7) ]
	void CalculateBodyPartForShoot(bool InCanHead, bool InCanChest, bool InStomach, bool InCanLArm, bool InCanRArm, bool InCanLLeg, bool InCanRLeg);

	// Object: Function MFNPCAI.NPCAITargetInfo.CalculateBodyPartByEnemyArmor
	// Flags: [Final|Native|Public]
	// Offset: 0x3ccc3b0
	// Params: [ Num(0) Size(0x0) ]
	void CalculateBodyPartByEnemyArmor();
};

// Object: Class MFNPCAI.NPCAITeam
// Size: 0xC0 (Inherited: 0x28)
struct UNPCAITeam : UObject
{
	DEFINE_UE_CLASS_HELPERS(UNPCAITeam, "NPCAITeam")

	uint8_t Pad_0x28[0x10]; // 0x28(0x10)
	struct FAIShotCountStat AllyBeHitCount; // 0x38(0x10)
	struct TArray<struct AActor*> AllyList; // 0x48(0x10)
	struct TArray<struct AActor*> PlayerAllyList; // 0x58(0x10)
	struct TArray<struct UNPCAIEnemyGroupSingleInfo*> EnemyInfoList; // 0x68(0x10)
	struct TArray<struct AActor*> NeutralList; // 0x78(0x10)
	struct TArray<struct UNPCAIAttentionPoint*> SuspectedPoints; // 0x88(0x10)
	struct TArray<struct FAIGroupAllyDeathInfo> AllyDeathList; // 0x98(0x10)
	struct UNPCAIGroupRequestController* GroupRequestController; // 0xA8(0x8)
	struct UActorComponent* FactionComponent; // 0xB0(0x8)
	uint8_t Pad_0xB8[0x8]; // 0xB8(0x8)

	// Object: Function MFNPCAI.NPCAITeam.UpdateTemporaryEnemyEndTime
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3cd123c
	// Params: [ Num(2) Size(0xC) ]
	void UpdateTemporaryEnemyEndTime(struct AActor* InEnemy, float InEndTime);

	// Object: Function MFNPCAI.NPCAITeam.UpdateGroupEnemyEstimatePosition
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x3cd149c
	// Params: [ Num(2) Size(0x14) ]
	void UpdateGroupEnemyEstimatePosition(struct AActor* InEnemy, struct FVector InPosition);

	// Object: Function MFNPCAI.NPCAITeam.UpdateEnemyVisibleInfo
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x3cd1584
	// Params: [ Num(3) Size(0x18) ]
	void UpdateEnemyVisibleInfo(struct AActor* InEnemy, struct FVector InLastSeenPosition, float InLastSeenTime);

	// Object: Function MFNPCAI.NPCAITeam.SwitchToEnemy
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3cd0904
	// Params: [ Num(2) Size(0x9) ]
	bool SwitchToEnemy(struct AActor* InMember);

	// Object: Function MFNPCAI.NPCAITeam.SwitchEnemyToNeutral
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3cd0a6c
	// Params: [ Num(2) Size(0x9) ]
	bool SwitchEnemyToNeutral(struct AActor* InEnemy);

	// Object: Function MFNPCAI.NPCAITeam.SwitchEnemyToAlly
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3cd09b8
	// Params: [ Num(2) Size(0x9) ]
	bool SwitchEnemyToAlly(struct AActor* InEnemy);

	// Object: Function MFNPCAI.NPCAITeam.SetTemporaryEnemyInfo
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3cd1324
	// Params: [ Num(4) Size(0x11) ]
	void SetTemporaryEnemyInfo(struct AActor* InEnemy, bool InIsTemporaryEnemy, float InEndTime, bool InIsFromAlly);

	// Object: Function MFNPCAI.NPCAITeam.SetEnemyHartedValue
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3cd0e8c
	// Params: [ Num(3) Size(0x10) ]
	void SetEnemyHartedValue(struct AActor* InEnemy, int32_t InHartedValue, float IndateTime);

	// Object: Function MFNPCAI.NPCAITeam.RemoveSuspectedPointByType
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3cd01f8
	// Params: [ Num(2) Size(0x10) ]
	void RemoveSuspectedPointByType(ENPCPlaceForCheckType InPlaceType, struct AActor* InCreator);

	// Object: Function MFNPCAI.NPCAITeam.RemoveSuspectedPoint
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3cd02e0
	// Params: [ Num(3) Size(0x11) ]
	void RemoveSuspectedPoint(struct ACharacter* AIPawn, struct UNPCAIAttentionPoint* InAttentionPoint, bool bRemoveNearCanSee);

	// Object: Function MFNPCAI.NPCAITeam.RemoveNeutral
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3cd0c08
	// Params: [ Num(1) Size(0x8) ]
	void RemoveNeutral(struct AActor* InNeutral);

	// Object: Function MFNPCAI.NPCAITeam.RemoveNearSuspectedPoint
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable]
	// Offset: 0x3cd004c
	// Params: [ Num(5) Size(0x20) ]
	void RemoveNearSuspectedPoint(struct UObject* WorldContext, const struct FVector& InLocation, float XYRange, float ZRange, float PointExistTime);

	// Object: Function MFNPCAI.NPCAITeam.RemoveFromTeam
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0x3cd1db4
	// Params: [ Num(2) Size(0x9) ]
	bool RemoveFromTeam(struct AActor* C);

	// Object: Function MFNPCAI.NPCAITeam.RemoveEnemyInfo
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0x3cd1934
	// Params: [ Num(2) Size(0x10) ]
	struct UNPCAIEnemyGroupSingleInfo* RemoveEnemyInfo(struct UNPCAIEnemyGroupSingleInfo* SingleInfo);

	// Object: Function MFNPCAI.NPCAITeam.RemoveEnemy
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0x3cd19ec
	// Params: [ Num(2) Size(0x10) ]
	struct UNPCAIEnemyGroupSingleInfo* RemoveEnemy(struct AActor* InEnemy);

	// Object: Function MFNPCAI.NPCAITeam.RemoveAlly
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0x3cd1c18
	// Params: [ Num(1) Size(0x8) ]
	void RemoveAlly(struct AActor* InAlly);

	// Object: Function MFNPCAI.NPCAITeam.IsNeutral
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3cd0b54
	// Params: [ Num(2) Size(0x9) ]
	bool IsNeutral(struct AActor* InNeutral);

	// Object: Function MFNPCAI.NPCAITeam.IsGroupEnemy
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3cd1880
	// Params: [ Num(2) Size(0x9) ]
	bool IsGroupEnemy(struct AActor* InEnemy);

	// Object: Function MFNPCAI.NPCAITeam.IsEnoughAllyKillInRange
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults]
	// Offset: 0x3ccf5fc
	// Params: [ Num(6) Size(0x21) ]
	bool IsEnoughAllyKillInRange(struct UObject* WorldContext, const struct FVector& InSearchCenter, const float& InSearchRange, const float& InSearchTime, const int32_t& InSearchCount);

	// Object: Function MFNPCAI.NPCAITeam.IsEnoughAllyDeathInRange
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults]
	// Offset: 0x3ccf7ec
	// Params: [ Num(6) Size(0x21) ]
	bool IsEnoughAllyDeathInRange(struct UObject* WorldContext, const struct FVector& InSearchCenter, const float& InSearchRange, const float& InSearchTime, const int32_t& InSearchCount);

	// Object: Function MFNPCAI.NPCAITeam.IsAlly
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0x3cd1b5c
	// Params: [ Num(2) Size(0x9) ]
	bool IsAlly(struct AActor* InAlly);

	// Object: Function MFNPCAI.NPCAITeam.GetYoungestSuspectedPoint
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3cd06c8
	// Params: [ Num(4) Size(0x18) ]
	struct UNPCAIAttentionPoint* GetYoungestSuspectedPoint(struct AActor* InPawn, float InRadius, bool InPriorityDanger);

	// Object: Function MFNPCAI.NPCAITeam.GetValidPointsCount
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3cd0800
	// Params: [ Num(1) Size(0x4) ]
	int32_t GetValidPointsCount();

	// Object: Function MFNPCAI.NPCAITeam.GetTeamMembers
	// Flags: [Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3cd1f2c
	// Params: [ Num(1) Size(0x10) ]
	struct TArray<struct AActor*> GetTeamMembers();

	// Object: Function MFNPCAI.NPCAITeam.GetSuspectedPointsNum
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3cd0834
	// Params: [ Num(1) Size(0x4) ]
	int32_t GetSuspectedPointsNum();

	// Object: Function MFNPCAI.NPCAITeam.GetSuspectedPoints
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3cd0868
	// Params: [ Num(1) Size(0x10) ]
	struct TArray<struct UNPCAIAttentionPoint*> GetSuspectedPoints();

	// Object: Function MFNPCAI.NPCAITeam.GetPlayerAllyList
	// Flags: [Native|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x3cd1f6c
	// Params: [ Num(1) Size(0x10) ]
	struct TArray<struct AActor*> GetPlayerAllyList();

	// Object: Function MFNPCAI.NPCAITeam.GetNeutralsNum
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3cd0b20
	// Params: [ Num(1) Size(0x4) ]
	int32_t GetNeutralsNum();

	// Object: Function MFNPCAI.NPCAITeam.GetNearestSuspectedPoint
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable]
	// Offset: 0x3cd057c
	// Params: [ Num(4) Size(0x20) ]
	struct UNPCAIAttentionPoint* GetNearestSuspectedPoint(const struct FVector& InLocation, float Range, float& OutMinDist);

	// Object: Function MFNPCAI.NPCAITeam.GetNearEnemyNum
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x3cd175c
	// Params: [ Num(3) Size(0x14) ]
	int32_t GetNearEnemyNum(struct FVector InCenter, float InRadius);

	// Object: Function MFNPCAI.NPCAITeam.GetLatestAllyDeathInfo
	// Flags: [Final|Native|Public|HasOutParms]
	// Offset: 0x3ccfa9c
	// Params: [ Num(2) Size(0x1D) ]
	bool GetLatestAllyDeathInfo(struct FAIGroupAllyDeathInfo& OutDeathInfo);

	// Object: Function MFNPCAI.NPCAITeam.GetGroupRequestController
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3ccfea0
	// Params: [ Num(1) Size(0x8) ]
	struct UNPCAIGroupRequestController* GetGroupRequestController();

	// Object: Function MFNPCAI.NPCAITeam.GetGroupKnowEnemys
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x3cd0fb4
	// Params: [ Num(5) Size(0x25) ]
	void GetGroupKnowEnemys(struct AActor* AIPawn, float InRange, struct TArray<struct AActor*>& Enemys, int32_t& EnemysNum, bool bIncludeEnemys);

	// Object: Function MFNPCAI.NPCAITeam.GetFactionComp
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0x3cd1d78
	// Params: [ Num(1) Size(0x8) ]
	struct UActorComponent* GetFactionComp();

	// Object: Function MFNPCAI.NPCAITeam.GetEnemyNum
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3cd184c
	// Params: [ Num(1) Size(0x4) ]
	int32_t GetEnemyNum();

	// Object: Function MFNPCAI.NPCAITeam.GetEnemyInfoList
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3cd0d58
	// Params: [ Num(1) Size(0x10) ]
	struct TArray<struct UNPCAIEnemyGroupSingleInfo*> GetEnemyInfoList();

	// Object: Function MFNPCAI.NPCAITeam.GetEnemyInfo
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3cd16ac
	// Params: [ Num(2) Size(0x10) ]
	struct UNPCAIEnemyGroupSingleInfo* GetEnemyInfo(struct AActor* InTarget);

	// Object: Function MFNPCAI.NPCAITeam.GetEnemyHartedValue
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3cd0ddc
	// Params: [ Num(2) Size(0xC) ]
	int32_t GetEnemyHartedValue(struct AActor* InEnemy);

	// Object: Function MFNPCAI.NPCAITeam.GetAllyTotalDeathNum
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x3ccf5c8
	// Params: [ Num(1) Size(0x4) ]
	int32_t GetAllyTotalDeathNum();

	// Object: Function MFNPCAI.NPCAITeam.GetAllyList
	// Flags: [Native|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x3cd1fac
	// Params: [ Num(1) Size(0x10) ]
	struct TArray<struct AActor*> GetAllyList();

	// Object: Function MFNPCAI.NPCAITeam.GetAllInSightEnemys
	// Flags: [Final|Native|Public|HasOutParms]
	// Offset: 0x3ccfc98
	// Params: [ Num(2) Size(0x18) ]
	void GetAllInSightEnemys(float InWorldTimeSeconds, struct TArray<struct AActor*>& InEnemys);

	// Object: Function MFNPCAI.NPCAITeam.GetAllHadSeenEnemys
	// Flags: [Final|Native|Public|HasOutParms]
	// Offset: 0x3ccfd9c
	// Params: [ Num(2) Size(0x18) ]
	void GetAllHadSeenEnemys(float InWorldTimeSeconds, struct TArray<struct AActor*>& InEnemys);

	// Object: Function MFNPCAI.NPCAITeam.GetAllAllyDeathInfo
	// Flags: [Final|Native|Public|HasOutParms]
	// Offset: 0x3ccf9dc
	// Params: [ Num(1) Size(0x10) ]
	void GetAllAllyDeathInfo(struct TArray<struct FAIGroupAllyDeathInfo>& OutDeathInfoList);

	// Object: Function MFNPCAI.NPCAITeam.FilterInValidTemporaryEnemys
	// Flags: [Final|Native|Public]
	// Offset: 0x3ccff90
	// Params: [ Num(1) Size(0x4) ]
	void FilterInValidTemporaryEnemys(float InTimeSeconds);

	// Object: Function MFNPCAI.NPCAITeam.FilterInValidSuspectedPoints
	// Flags: [Final|Native|Public]
	// Offset: 0x3cd0038
	// Params: [ Num(0) Size(0x0) ]
	void FilterInValidSuspectedPoints();

	// Object: Function MFNPCAI.NPCAITeam.FilterInValidEnemys
	// Flags: [Final|Native|Public]
	// Offset: 0x3ccfed4
	// Params: [ Num(1) Size(0x4) ]
	void FilterInValidEnemys(float DeleteInterval);

	// Object: Function MFNPCAI.NPCAITeam.FilterInValidAllyAndNeutrals
	// Flags: [Final|Native|Public]
	// Offset: 0x3ccff7c
	// Params: [ Num(0) Size(0x0) ]
	void FilterInValidAllyAndNeutrals();

	// Object: Function MFNPCAI.NPCAITeam.AddToTeam
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0x3cd1e70
	// Params: [ Num(2) Size(0x9) ]
	bool AddToTeam(struct AActor* C);

	// Object: Function MFNPCAI.NPCAITeam.AddPointToSearch
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x3cd040c
	// Params: [ Num(5) Size(0x28) ]
	struct UNPCAIAttentionPoint* AddPointToSearch(struct AActor* InActor, struct FVector InPosition, ENPCPlaceForCheckType InPlaceType, struct AActor* InCreator);

	// Object: Function MFNPCAI.NPCAITeam.AddNeutral
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3cd0cb0
	// Params: [ Num(1) Size(0x8) ]
	void AddNeutral(struct AActor* InNeutral);

	// Object: Function MFNPCAI.NPCAITeam.AddEnemyForAllyKnow
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3cd1194
	// Params: [ Num(1) Size(0x8) ]
	void AddEnemyForAllyKnow(struct AActor* InEnemy);

	// Object: Function MFNPCAI.NPCAITeam.AddEnemy
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0x3cd1aa4
	// Params: [ Num(2) Size(0x10) ]
	struct UNPCAIEnemyGroupSingleInfo* AddEnemy(struct AActor* InEnemy);

	// Object: Function MFNPCAI.NPCAITeam.AddAllyDeathInfo
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults]
	// Offset: 0x3ccfb58
	// Params: [ Num(3) Size(0x1C) ]
	void AddAllyDeathInfo(const struct FVector& InDeathLocation, const struct FVector& InKillerLocation, float InNowTime);

	// Object: Function MFNPCAI.NPCAITeam.AddAlly
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0x3cd1cc8
	// Params: [ Num(1) Size(0x8) ]
	void AddAlly(struct AActor* InAlly);
};

// Object: Class MFNPCAI.NPCAITeamInterface
// Size: 0x28 (Inherited: 0x28)
struct INPCAITeamInterface : IInterface
{
	DEFINE_UE_CLASS_HELPERS(INPCAITeamInterface, "NPCAITeamInterface")

	// Object: Function MFNPCAI.NPCAITeamInterface.RemoveAlly
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0x3cd28f8
	// Params: [ Num(1) Size(0x8) ]
	void RemoveAlly(struct AActor* InAlly);

	// Object: Function MFNPCAI.NPCAITeamInterface.IsAlly
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0x3cd278c
	// Params: [ Num(2) Size(0x9) ]
	bool IsAlly(struct AActor* InAlly);

	// Object: Function MFNPCAI.NPCAITeamInterface.HasNoDBNOAlly
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0x3cd2694
	// Params: [ Num(2) Size(0x9) ]
	bool HasNoDBNOAlly(struct AActor* InSelf);

	// Object: Function MFNPCAI.NPCAITeamInterface.GetNearestAlly
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0x3cd2290
	// Params: [ Num(3) Size(0x18) ]
	struct AActor* GetNearestAlly(struct AActor* AIPawn, float MaxRange);

	// Object: Function MFNPCAI.NPCAITeamInterface.GetHealthyAllyNum
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0x3cd2388
	// Params: [ Num(2) Size(0xC) ]
	int32_t GetHealthyAllyNum(struct AActor* IgnorePawn);

	// Object: Function MFNPCAI.NPCAITeamInterface.GetAllyNum
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0x3cd2750
	// Params: [ Num(1) Size(0x4) ]
	int32_t GetAllyNum();

	// Object: Function MFNPCAI.NPCAITeamInterface.GetAllyList
	// Flags: [Native|Public]
	// Offset: 0x3cd2a58
	// Params: [ Num(1) Size(0x10) ]
	struct TArray<struct AActor*> GetAllyList();

	// Object: Function MFNPCAI.NPCAITeamInterface.GetAllyGoalEnemys
	// Flags: [Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x3cd20d0
	// Params: [ Num(1) Size(0x10) ]
	void GetAllyGoalEnemys(struct TArray<struct UNPCAITargetInfo*>& GoalEnemysList);

	// Object: Function MFNPCAI.NPCAITeamInterface.GetAllyGoalEnemyNearest
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0x3cd2198
	// Params: [ Num(3) Size(0x18) ]
	struct UNPCAITargetInfo* GetAllyGoalEnemyNearest(struct AActor* AIPawn, float InRange);

	// Object: Function MFNPCAI.NPCAITeamInterface.GetAliveAllysNum
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0x3cd2440
	// Params: [ Num(3) Size(0x10) ]
	int32_t GetAliveAllysNum(struct AActor* IgnorePawn, bool bContainDBNO);

	// Object: Function MFNPCAI.NPCAITeamInterface.GetAliveAllys
	// Flags: [Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x3cd2540
	// Params: [ Num(3) Size(0x20) ]
	void GetAliveAllys(struct AActor* IgnorePawn, bool bContainDBNO, struct TArray<struct AActor*>& AliveAllys);

	// Object: Function MFNPCAI.NPCAITeamInterface.FilterInValidAllys
	// Flags: [Native|Public]
	// Offset: 0x3cd20b4
	// Params: [ Num(0) Size(0x0) ]
	void FilterInValidAllys();

	// Object: Function MFNPCAI.NPCAITeamInterface.AllyPostDied
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0x3cd2848
	// Params: [ Num(1) Size(0x8) ]
	void AllyPostDied(struct AActor* InAlly);

	// Object: Function MFNPCAI.NPCAITeamInterface.AddAlly
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0x3cd29a8
	// Params: [ Num(1) Size(0x8) ]
	void AddAlly(struct AActor* InAlly);
};

// Object: Class MFNPCAI.NPCAIThrowSystem
// Size: 0x38 (Inherited: 0x30)
struct UNPCAIThrowSystem : USGBaseAISubsystem
{
	DEFINE_UE_CLASS_HELPERS(UNPCAIThrowSystem, "NPCAIThrowSystem")

	float INVALID_THROW_ANGLE_BP; // 0x30(0x4)
	uint8_t Pad_0x34[0x4]; // 0x34(0x4)

	// Object: Function MFNPCAI.NPCAIThrowSystem.PretestGrenadeTrajectory
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable]
	// Offset: 0x3cd30d8
	// Params: [ Num(8) Size(0xD0) ]
	static struct FHitResult PretestGrenadeTrajectory(struct UObject* WorldContextObject, struct AActor* AttackerActor, const struct FVector& ThrowLocation, const struct FVector& TargetLocation, float InitSpeed, float ThrowAngle, float& FlyingTime);

	// Object: Function MFNPCAI.NPCAIThrowSystem.GetThrowRotator
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable]
	// Offset: 0x3cd2af4
	// Params: [ Num(4) Size(0x28) ]
	static struct FRotator GetThrowRotator(const struct FVector& ActorLocation, const struct FVector& TargetLocation, float ThrowAngle);

	// Object: Function MFNPCAI.NPCAIThrowSystem.GetFlyingTime
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable]
	// Offset: 0x3cd2c38
	// Params: [ Num(5) Size(0x24) ]
	static float GetFlyingTime(const struct FVector& ThrowLocation, const struct FVector& TargetLocation, float InitSpeed, float ThrowAngle);

	// Object: Function MFNPCAI.NPCAIThrowSystem.GetFesiableGrenadeThrowAngle
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable]
	// Offset: 0x3cd2db4
	// Params: [ Num(11) Size(0x38) ]
	static float GetFesiableGrenadeThrowAngle(struct UObject* WorldContextObject, struct AActor* AttackerActor, const struct FVector& ActorLocation, const struct FVector& TargetLocation, float InitSpeed, EAIPose PoseType, EAILeanType LeanType, bool bMustThrow, bool bHigherFirst, float& FlyingTime);

	// Object: Function MFNPCAI.NPCAIThrowSystem.GetCandidateGrenadeThrowAngles
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable]
	// Offset: 0x3cd332c
	// Params: [ Num(5) Size(0x38) ]
	static struct TArray<float> GetCandidateGrenadeThrowAngles(struct UObject* WorldContextObject, const struct FVector& ThrowLocation, const struct FVector& TargetLocation, float InitSpeed);
};

// Object: Class MFNPCAI.AITrackLOGUnit
// Size: 0x50 (Inherited: 0x28)
struct UAITrackLOGUnit : UObject
{
	DEFINE_UE_CLASS_HELPERS(UAITrackLOGUnit, "AITrackLOGUnit")

	struct AActor* AIPawn; // 0x28(0x8)
	struct FString AIName; // 0x30(0x10)
	struct TArray<struct FAITrackLOG> TrackLOGList; // 0x40(0x10)
};

// Object: Class MFNPCAI.NPCAITrackLogger
// Size: 0x28 (Inherited: 0x28)
struct UNPCAITrackLogger : UBlueprintFunctionLibrary
{
	DEFINE_UE_CLASS_HELPERS(UNPCAITrackLogger, "NPCAITrackLogger")

	// Object: Function MFNPCAI.NPCAITrackLogger.TrackLOG_Shoot
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults]
	// Offset: 0x3cd4318
	// Params: [ Num(7) Size(0x38) ]
	static void TrackLOG_Shoot(struct AActor* AIPawn, struct FString EnemyName, bool bUsePredestined, uint8_t PartWantToShoot, const struct FVector& PositionWantToShoot, uint8_t PartActualShoot, const struct FVector& PositionActualShoot);

	// Object: Function MFNPCAI.NPCAITrackLogger.TrackLOG_AimingTime
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x3cd3d94
	// Params: [ Num(9) Size(0x34) ]
	static void TrackLOG_AimingTime(struct AActor* AIPawn, struct FString EnemyName, float OffsetRatio, float ElapsedAimingTime, float RequiredAimingTime, float AimingProgress, float RawRatio, float MaxAimPrecicing, float CurrPrecicingSpd);

	// Object: Function MFNPCAI.NPCAITrackLogger.TrackLOG_AimingPredestined
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x3cd38a4
	// Params: [ Num(18) Size(0x58) ]
	static void TrackLOG_AimingPredestined(struct AActor* AIPawn, struct FString EnemyName, bool IsHit, float FinalRate, float RandomValue, float PredestinedRate, int32_t RepeatIndex, float ShotHeadRate, float AIMoveRate, float EnemyMoveRate, float ArmBrokenRate, int32_t ArmBrokenCount, float BattleDurationRate, float InCoverSafeRate, float BeHitedRate, float WeaponAdsMoaBiasRate, float GrassRate, float FlashLightRate);

	// Object: Function MFNPCAI.NPCAITrackLogger.TrackLOG_AimingBodyPart
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x3cd402c
	// Params: [ Num(10) Size(0x20) ]
	static void TrackLOG_AimingBodyPart(struct AActor* AIPawn, struct FString EnemyName, uint8_t PartAiming, int8_t bHeadCanSee, int8_t bChestCanSee, int8_t bStomachCanSee, int8_t bLArmCanSee, int8_t bRArmCanSee, int8_t bLLegCanSee, int8_t bRLegCanSee);

	// Object: Function MFNPCAI.NPCAITrackLogger.TrackLOG
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x3cd45f8
	// Params: [ Num(3) Size(0x20) ]
	static void TrackLOG(struct AActor* AIPawn, const EAITrackLOGType& LogType, const struct TArray<struct FString>& KValues);

	// Object: Function MFNPCAI.NPCAITrackLogger.ToTrackLOGString
	// Flags: [Final|Native|Static|Public|HasOutParms]
	// Offset: 0x3cd3720
	// Params: [ Num(4) Size(0x40) ]
	static struct FString ToTrackLOGString(const struct FAITrackLOG& LOGData, struct FString TemplateStr, bool bIncludeTime);

	// Object: Function MFNPCAI.NPCAITrackLogger.PrintTrackLOG
	// Flags: [Final|Native|Static|Public|HasOutParms]
	// Offset: 0x3cd35a0
	// Params: [ Num(4) Size(0x28) ]
	static void PrintTrackLOG(struct AActor* AIPawn, struct UNPCAIGlobalSharedInfo* SharedVariables, const EAITrackLOGType& LogType, const struct TArray<struct FString>& KValues);

	// Object: Function MFNPCAI.NPCAITrackLogger.AutoReleaseTrackLOG
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x3cd4560
	// Params: [ Num(1) Size(0x8) ]
	static void AutoReleaseTrackLOG(struct UObject* WorldContext);
};

// Object: Class MFNPCAI.AIPortraitBase
// Size: 0x28 (Inherited: 0x28)
struct UAIPortraitBase : UObject
{
	DEFINE_UE_CLASS_HELPERS(UAIPortraitBase, "AIPortraitBase")
};

// Object: Class MFNPCAI.AIPortraitDefault
// Size: 0x28 (Inherited: 0x28)
struct UAIPortraitDefault : UAIPortraitBase
{
	DEFINE_UE_CLASS_HELPERS(UAIPortraitDefault, "AIPortraitDefault")
};

// Object: Class MFNPCAI.NPCAIUALootSubAreaVolumeInterface
// Size: 0x28 (Inherited: 0x28)
struct INPCAIUALootSubAreaVolumeInterface : IInterface
{
	DEFINE_UE_CLASS_HELPERS(INPCAIUALootSubAreaVolumeInterface, "NPCAIUALootSubAreaVolumeInterface")

	// Object: Function MFNPCAI.NPCAIUALootSubAreaVolumeInterface.GetBattleIntensityExpectation
	// Flags: [Native|Public|Const]
	// Offset: 0x3cdd6a4
	// Params: [ Num(1) Size(0x4) ]
	int32_t GetBattleIntensityExpectation();
};

// Object: Class MFNPCAI.NPCAIVehicleInterface
// Size: 0x28 (Inherited: 0x28)
struct INPCAIVehicleInterface : IInterface
{
	DEFINE_UE_CLASS_HELPERS(INPCAIVehicleInterface, "NPCAIVehicleInterface")
};

// Object: Class MFNPCAI.NPCAIVolumeInterface
// Size: 0x28 (Inherited: 0x28)
struct INPCAIVolumeInterface : IInterface
{
	DEFINE_UE_CLASS_HELPERS(INPCAIVolumeInterface, "NPCAIVolumeInterface")
};

// Object: Class MFNPCAI.NPCAIZoneGroupInfo
// Size: 0x1A0 (Inherited: 0xC0)
struct UNPCAIZoneGroupInfo : UNPCAITeam
{
	DEFINE_UE_CLASS_HELPERS(UNPCAIZoneGroupInfo, "NPCAIZoneGroupInfo")

	int32_t FactionType; // 0xBC(0x4)
	int32_t GroupType; // 0xC0(0x4)
	int32_t SquadID; // 0xC4(0x4)
	int32_t AITeamIndex; // 0xC8(0x4)
	int32_t NumInBattle; // 0xCC(0x4)
	struct TArray<struct TWeakObjectPtr<struct AActor>> FriendlyTeamCharacters; // 0xD0(0x10)
	struct TArray<struct UNPCAIDynamicGroupInfo*> DynamicGroupList; // 0xE0(0x10)
	struct UWorld* WorldPrivate; // 0xF0(0x8)
	uint8_t Pad_0xFC[0x9C]; // 0xFC(0x9C)
	struct AMFVoxelEnvAreaClusterActor* CachedVoxelEnvAreaCluster; // 0x198(0x8)

	// Object: Function MFNPCAI.NPCAIZoneGroupInfo.UpdateAreaClusterWeight
	// Flags: [Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x3cdd86c
	// Params: [ Num(1) Size(0x4) ]
	void UpdateAreaClusterWeight(const float& InPathWeightFactor);

	// Object: Function MFNPCAI.NPCAIZoneGroupInfo.QueryAreaWeightByLocationList
	// Flags: [Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3cdd70c
	// Params: [ Num(3) Size(0x28) ]
	struct TArray<struct FAIAreaWeightQueryInfo> QueryAreaWeightByLocationList(const struct TArray<struct FVector>& InQueryLocList, const float& InPathWeightFactor);

	// Object: Function MFNPCAI.NPCAIZoneGroupInfo.GetDynamicGroupInfo
	// Flags: [Final|Native|Public]
	// Offset: 0x3cdd928
	// Params: [ Num(2) Size(0x10) ]
	struct UNPCAIDynamicGroupInfo* GetDynamicGroupInfo(int32_t GroupID);

	// Object: Function MFNPCAI.NPCAIZoneGroupInfo.CreateDynamicGroup
	// Flags: [Final|Native|Public]
	// Offset: 0x3cdd9ec
	// Params: [ Num(3) Size(0x18) ]
	struct UNPCAIDynamicGroupInfo* CreateDynamicGroup(struct AActor* InCreator, struct UNPCAIDynamicGroupInfo* DynamicGroupClass);

	// Object: Function MFNPCAI.NPCAIZoneGroupInfo.BP_OnInitGroupMessage
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x5d8cbc8
	// Params: [ Num(1) Size(0x4) ]
	void BP_OnInitGroupMessage(int32_t InGroupType);

	// Object: Function MFNPCAI.NPCAIZoneGroupInfo.BP_OnAllyRemoved
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x5d8cbc8
	// Params: [ Num(1) Size(0x8) ]
	void BP_OnAllyRemoved(struct AActor* InAlly);

	// Object: Function MFNPCAI.NPCAIZoneGroupInfo.BP_OnAllyDied
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x5d8cbc8
	// Params: [ Num(1) Size(0x8) ]
	void BP_OnAllyDied(struct AActor* InAlly);

	// Object: Function MFNPCAI.NPCAIZoneGroupInfo.BP_OnAllyAdded
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x5d8cbc8
	// Params: [ Num(1) Size(0x8) ]
	void BP_OnAllyAdded(struct AActor* InAlly);

	// Object: Function MFNPCAI.NPCAIZoneGroupInfo.AutoReleaseDynamicGroup
	// Flags: [Final|Native|Public]
	// Offset: 0x3cdd9d8
	// Params: [ Num(0) Size(0x0) ]
	void AutoReleaseDynamicGroup();
};

// Object: Class MFNPCAI.NPCBTDecorator
// Size: 0x80 (Inherited: 0x60)
struct UNPCBTDecorator : UBTDecorator
{
	DEFINE_UE_CLASS_HELPERS(UNPCBTDecorator, "NPCBTDecorator")

	uint8_t bWithTime : 1; // 0x5A(0x1), Mask(0x1)
	struct FString TagText; // 0x60(0x10)
	struct FString Message; // 0x70(0x10)
};

// Object: Class MFNPCAI.NPCBTDecorator_AIPropertyComparison
// Size: 0xC0 (Inherited: 0x88)
struct UNPCBTDecorator_AIPropertyComparison : UBTDecorator_BlackboardBase
{
	DEFINE_UE_CLASS_HELPERS(UNPCBTDecorator_AIPropertyComparison, "NPCBTDecorator_AIPropertyComparison")

	struct UNPCAIPropertyComponent* AIPropertyComponent; // 0x88(0x8)
	struct FString ComponentFunctionName; // 0x90(0x10)
	uint8_t BoolOperation; // 0xA0(0x1)
	uint8_t ArithmeticOperation; // 0xA1(0x1)
	uint8_t Pad_0xA2[0x2]; // 0xA2(0x2)
	float FloatValue; // 0xA4(0x4)
	int32_t IntValue; // 0xA8(0x4)
	bool bUseBlackboardValue; // 0xAC(0x1)
	uint8_t Pad_0xAD[0x3]; // 0xAD(0x3)
	struct FString CachedDescription; // 0xB0(0x10)
};

// Object: Class MFNPCAI.NPCBTDecorator_BBConditionBase
// Size: 0xD8 (Inherited: 0x80)
struct UNPCBTDecorator_BBConditionBase : UNPCBTDecorator
{
	DEFINE_UE_CLASS_HELPERS(UNPCBTDecorator_BBConditionBase, "NPCBTDecorator_BBConditionBase")

	bool bUseTargetValue; // 0x80(0x1)
	uint8_t Pad_0x81[0x7]; // 0x81(0x7)
	struct FBlackboardKeySelector SourceBlackboardKey; // 0x88(0x28)
	struct FBlackboardKeySelector TargetBlackboardKey; // 0xB0(0x28)
};

// Object: Class MFNPCAI.NPCBTDecorator_BBConditionBool
// Size: 0xB0 (Inherited: 0x80)
struct UNPCBTDecorator_BBConditionBool : UNPCBTDecorator
{
	DEFINE_UE_CLASS_HELPERS(UNPCBTDecorator_BBConditionBool, "NPCBTDecorator_BBConditionBool")

	struct FBlackboardKeySelector BlackboardKey; // 0x80(0x28)
	uint8_t ConditionType; // 0xA8(0x1)
	bool TargetValue; // 0xA9(0x1)
	uint8_t Pad_0xAA[0x6]; // 0xAA(0x6)
};

// Object: Class MFNPCAI.NPCBTDecorator_BBConditionFloat
// Size: 0xD8 (Inherited: 0x80)
struct UNPCBTDecorator_BBConditionFloat : UNPCBTDecorator
{
	DEFINE_UE_CLASS_HELPERS(UNPCBTDecorator_BBConditionFloat, "NPCBTDecorator_BBConditionFloat")

	struct FBlackboardKeySelector SourceBlackboardKey; // 0x80(0x28)
	struct FBlackboardKeySelector TargetBlackboardKey; // 0xA8(0x28)
	float TargetValue; // 0xD0(0x4)
	bool bUseBBTargetValue; // 0xD4(0x1)
	uint8_t ConditionType; // 0xD5(0x1)
	uint8_t Pad_0xD6[0x2]; // 0xD6(0x2)
};

// Object: Class MFNPCAI.NPCBTDecorator_BBConditionInt
// Size: 0xE0 (Inherited: 0xD8)
struct UNPCBTDecorator_BBConditionInt : UNPCBTDecorator_BBConditionBase
{
	DEFINE_UE_CLASS_HELPERS(UNPCBTDecorator_BBConditionInt, "NPCBTDecorator_BBConditionInt")

	uint8_t OperationType; // 0xD8(0x1)
	uint8_t Pad_0xD9[0x3]; // 0xD9(0x3)
	int32_t TargetValue; // 0xDC(0x4)
};

// Object: Class MFNPCAI.NPCBTDecorator_BBConditionObject
// Size: 0xB0 (Inherited: 0xB0)
struct UNPCBTDecorator_BBConditionObject : UBTDecorator_CompareBBEntries
{
	DEFINE_UE_CLASS_HELPERS(UNPCBTDecorator_BBConditionObject, "NPCBTDecorator_BBConditionObject")
};

// Object: Class MFNPCAI.NPCBTDecorator_BBConditionString
// Size: 0xF0 (Inherited: 0xD8)
struct UNPCBTDecorator_BBConditionString : UNPCBTDecorator_BBConditionBase
{
	DEFINE_UE_CLASS_HELPERS(UNPCBTDecorator_BBConditionString, "NPCBTDecorator_BBConditionString")

	uint8_t OperationType; // 0xD8(0x1)
	uint8_t Pad_0xD9[0x7]; // 0xD9(0x7)
	struct FString TargetValue; // 0xE0(0x10)
};

// Object: Class MFNPCAI.NPCBTDecorator_BlueprintBase
// Size: 0x90 (Inherited: 0x60)
struct UNPCBTDecorator_BlueprintBase : UBTDecorator
{
	DEFINE_UE_CLASS_HELPERS(UNPCBTDecorator_BlueprintBase, "NPCBTDecorator_BlueprintBase")

	bool bAsSharedInstance; // 0x5A(0x1)
	struct AAIController* AIOwner; // 0x60(0x8)
	struct TArray<struct FName> ObservedKeyNames; // 0x68(0x10)
	uint8_t Pad_0x79[0x11]; // 0x79(0x11)
	uint8_t bShowPropertyDetails : 1; // 0x8A(0x1), Mask(0x1)
	uint8_t bCheckConditionOnlyBlackBoardChanges : 1; // 0x8A(0x1), Mask(0x2)
	uint8_t bIsObservingBB : 1; // 0x8A(0x1), Mask(0x4)
	uint8_t BitPad_0x8A_3 : 5; // 0x8A(0x1)
	uint8_t Pad_0x8B[0x5]; // 0x8B(0x5)

	// Object: Function MFNPCAI.NPCBTDecorator_BlueprintBase.ReceiveTickAI
	// Flags: [Event|Protected|BlueprintEvent]
	// Offset: 0x5d8cbc8
	// Params: [ Num(3) Size(0x14) ]
	void ReceiveTickAI(struct AAIController* OwnerController, struct APawn* ControlledPawn, float DeltaSeconds);

	// Object: Function MFNPCAI.NPCBTDecorator_BlueprintBase.ReceiveTick
	// Flags: [Event|Protected|BlueprintEvent]
	// Offset: 0x5d8cbc8
	// Params: [ Num(2) Size(0xC) ]
	void ReceiveTick(struct AActor* OwnerActor, float DeltaSeconds);

	// Object: Function MFNPCAI.NPCBTDecorator_BlueprintBase.ReceiveObserverDeactivatedAI
	// Flags: [Event|Protected|BlueprintEvent]
	// Offset: 0x5d8cbc8
	// Params: [ Num(2) Size(0x10) ]
	void ReceiveObserverDeactivatedAI(struct AAIController* OwnerController, struct APawn* ControlledPawn);

	// Object: Function MFNPCAI.NPCBTDecorator_BlueprintBase.ReceiveObserverDeactivated
	// Flags: [Event|Protected|BlueprintEvent]
	// Offset: 0x5d8cbc8
	// Params: [ Num(1) Size(0x8) ]
	void ReceiveObserverDeactivated(struct AActor* OwnerActor);

	// Object: Function MFNPCAI.NPCBTDecorator_BlueprintBase.ReceiveObserverActivatedAI
	// Flags: [Event|Protected|BlueprintEvent]
	// Offset: 0x5d8cbc8
	// Params: [ Num(2) Size(0x10) ]
	void ReceiveObserverActivatedAI(struct AAIController* OwnerController, struct APawn* ControlledPawn);

	// Object: Function MFNPCAI.NPCBTDecorator_BlueprintBase.ReceiveObserverActivated
	// Flags: [Event|Protected|BlueprintEvent]
	// Offset: 0x5d8cbc8
	// Params: [ Num(1) Size(0x8) ]
	void ReceiveObserverActivated(struct AActor* OwnerActor);

	// Object: Function MFNPCAI.NPCBTDecorator_BlueprintBase.ReceiveExecutionStartAI
	// Flags: [Event|Protected|BlueprintEvent]
	// Offset: 0x5d8cbc8
	// Params: [ Num(2) Size(0x10) ]
	void ReceiveExecutionStartAI(struct AAIController* OwnerController, struct APawn* ControlledPawn);

	// Object: Function MFNPCAI.NPCBTDecorator_BlueprintBase.ReceiveExecutionStart
	// Flags: [Event|Protected|BlueprintEvent]
	// Offset: 0x5d8cbc8
	// Params: [ Num(1) Size(0x8) ]
	void ReceiveExecutionStart(struct AActor* OwnerActor);

	// Object: Function MFNPCAI.NPCBTDecorator_BlueprintBase.ReceiveExecutionFinishAI
	// Flags: [Event|Protected|BlueprintEvent]
	// Offset: 0x5d8cbc8
	// Params: [ Num(3) Size(0x11) ]
	void ReceiveExecutionFinishAI(struct AAIController* OwnerController, struct APawn* ControlledPawn, uint8_t NodeResult);

	// Object: Function MFNPCAI.NPCBTDecorator_BlueprintBase.ReceiveExecutionFinish
	// Flags: [Event|Protected|BlueprintEvent]
	// Offset: 0x5d8cbc8
	// Params: [ Num(2) Size(0x9) ]
	void ReceiveExecutionFinish(struct AActor* OwnerActor, uint8_t NodeResult);

	// Object: Function MFNPCAI.NPCBTDecorator_BlueprintBase.PerformConditionCheckAI
	// Flags: [Event|Protected|BlueprintEvent]
	// Offset: 0x5d8cbc8
	// Params: [ Num(3) Size(0x11) ]
	bool PerformConditionCheckAI(struct AAIController* OwnerController, struct APawn* ControlledPawn);

	// Object: Function MFNPCAI.NPCBTDecorator_BlueprintBase.PerformConditionCheck
	// Flags: [Event|Protected|BlueprintEvent]
	// Offset: 0x5d8cbc8
	// Params: [ Num(2) Size(0x9) ]
	bool PerformConditionCheck(struct AActor* OwnerActor);

	// Object: Function MFNPCAI.NPCBTDecorator_BlueprintBase.IsDecoratorObserverActive
	// Flags: [Final|Native|Protected|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3cddd40
	// Params: [ Num(1) Size(0x1) ]
	bool IsDecoratorObserverActive();

	// Object: Function MFNPCAI.NPCBTDecorator_BlueprintBase.IsDecoratorExecutionActive
	// Flags: [Final|Native|Protected|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3cddd78
	// Params: [ Num(1) Size(0x1) ]
	bool IsDecoratorExecutionActive();

	// Object: Function MFNPCAI.NPCBTDecorator_BlueprintBase.GetOwnerPawn
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x3cddde4
	// Params: [ Num(1) Size(0x8) ]
	struct APawn* GetOwnerPawn();

	// Object: Function MFNPCAI.NPCBTDecorator_BlueprintBase.GetOwnerController
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x3cdddb0
	// Params: [ Num(1) Size(0x8) ]
	struct AAIController* GetOwnerController();
};

// Object: Class MFNPCAI.NPCBTDecorator_CheckComponent
// Size: 0xA8 (Inherited: 0x80)
struct UNPCBTDecorator_CheckComponent : UNPCBTDecorator
{
	DEFINE_UE_CLASS_HELPERS(UNPCBTDecorator_CheckComponent, "NPCBTDecorator_CheckComponent")

	struct TSoftClassPtr<struct UActorComponent*> ComponentClass; // 0x80(0x28)
};

// Object: Class MFNPCAI.NPCBTDecorator_HasSuspectPoints
// Size: 0x98 (Inherited: 0x80)
struct UNPCBTDecorator_HasSuspectPoints : UNPCBTDecorator
{
	DEFINE_UE_CLASS_HELPERS(UNPCBTDecorator_HasSuspectPoints, "NPCBTDecorator_HasSuspectPoints")

	float Radius; // 0x80(0x4)
	float HalfHeight; // 0x84(0x4)
	float HalfAngle; // 0x88(0x4)
	struct FVector Offset; // 0x8C(0xC)
};

// Object: Class MFNPCAI.NPCBTDecorator_IsCloseEnough
// Size: 0x88 (Inherited: 0x80)
struct UNPCBTDecorator_IsCloseEnough : UNPCBTDecorator
{
	DEFINE_UE_CLASS_HELPERS(UNPCBTDecorator_IsCloseEnough, "NPCBTDecorator_IsCloseEnough")

	float CloseEnoughDistance; // 0x80(0x4)
	uint8_t Pad_0x84[0x4]; // 0x84(0x4)
};

// Object: Class MFNPCAI.NPCBTDecorator_ShouldWaitAtPathNode
// Size: 0x80 (Inherited: 0x80)
struct UNPCBTDecorator_ShouldWaitAtPathNode : UNPCBTDecorator
{
	DEFINE_UE_CLASS_HELPERS(UNPCBTDecorator_ShouldWaitAtPathNode, "NPCBTDecorator_ShouldWaitAtPathNode")
};

// Object: Class MFNPCAI.NPCBTDecorator_SingletonBlueprintBase
// Size: 0x90 (Inherited: 0x60)
struct UNPCBTDecorator_SingletonBlueprintBase : UBTDecorator
{
	DEFINE_UE_CLASS_HELPERS(UNPCBTDecorator_SingletonBlueprintBase, "NPCBTDecorator_SingletonBlueprintBase")

	struct AAIController* AIOwner; // 0x60(0x8)
	struct TArray<struct FName> ObservedKeyNames; // 0x68(0x10)
	uint8_t Pad_0x78[0x10]; // 0x78(0x10)
	uint8_t bShowPropertyDetails : 1; // 0x88(0x1), Mask(0x1)
	uint8_t bCheckConditionOnlyBlackBoardChanges : 1; // 0x88(0x1), Mask(0x2)
	uint8_t bIsObservingBB : 1; // 0x88(0x1), Mask(0x4)
	uint8_t BitPad_0x88_3 : 5; // 0x88(0x1)
	uint8_t Pad_0x89[0x7]; // 0x89(0x7)

	// Object: Function MFNPCAI.NPCBTDecorator_SingletonBlueprintBase.ReceiveTickAI
	// Flags: [Event|Protected|BlueprintEvent]
	// Offset: 0x5d8cbc8
	// Params: [ Num(3) Size(0x14) ]
	void ReceiveTickAI(struct AAIController* OwnerController, struct APawn* ControlledPawn, float DeltaSeconds);

	// Object: Function MFNPCAI.NPCBTDecorator_SingletonBlueprintBase.ReceiveTick
	// Flags: [Event|Protected|BlueprintEvent]
	// Offset: 0x5d8cbc8
	// Params: [ Num(2) Size(0xC) ]
	void ReceiveTick(struct AActor* OwnerActor, float DeltaSeconds);

	// Object: Function MFNPCAI.NPCBTDecorator_SingletonBlueprintBase.ReceiveObserverDeactivatedAI
	// Flags: [Event|Protected|BlueprintEvent]
	// Offset: 0x5d8cbc8
	// Params: [ Num(2) Size(0x10) ]
	void ReceiveObserverDeactivatedAI(struct AAIController* OwnerController, struct APawn* ControlledPawn);

	// Object: Function MFNPCAI.NPCBTDecorator_SingletonBlueprintBase.ReceiveObserverDeactivated
	// Flags: [Event|Protected|BlueprintEvent]
	// Offset: 0x5d8cbc8
	// Params: [ Num(1) Size(0x8) ]
	void ReceiveObserverDeactivated(struct AActor* OwnerActor);

	// Object: Function MFNPCAI.NPCBTDecorator_SingletonBlueprintBase.ReceiveObserverActivatedAI
	// Flags: [Event|Protected|BlueprintEvent]
	// Offset: 0x5d8cbc8
	// Params: [ Num(2) Size(0x10) ]
	void ReceiveObserverActivatedAI(struct AAIController* OwnerController, struct APawn* ControlledPawn);

	// Object: Function MFNPCAI.NPCBTDecorator_SingletonBlueprintBase.ReceiveObserverActivated
	// Flags: [Event|Protected|BlueprintEvent]
	// Offset: 0x5d8cbc8
	// Params: [ Num(1) Size(0x8) ]
	void ReceiveObserverActivated(struct AActor* OwnerActor);

	// Object: Function MFNPCAI.NPCBTDecorator_SingletonBlueprintBase.ReceiveExecutionStartAI
	// Flags: [Event|Protected|BlueprintEvent]
	// Offset: 0x5d8cbc8
	// Params: [ Num(2) Size(0x10) ]
	void ReceiveExecutionStartAI(struct AAIController* OwnerController, struct APawn* ControlledPawn);

	// Object: Function MFNPCAI.NPCBTDecorator_SingletonBlueprintBase.ReceiveExecutionStart
	// Flags: [Event|Protected|BlueprintEvent]
	// Offset: 0x5d8cbc8
	// Params: [ Num(1) Size(0x8) ]
	void ReceiveExecutionStart(struct AActor* OwnerActor);

	// Object: Function MFNPCAI.NPCBTDecorator_SingletonBlueprintBase.ReceiveExecutionFinishAI
	// Flags: [Event|Protected|BlueprintEvent]
	// Offset: 0x5d8cbc8
	// Params: [ Num(3) Size(0x11) ]
	void ReceiveExecutionFinishAI(struct AAIController* OwnerController, struct APawn* ControlledPawn, uint8_t NodeResult);

	// Object: Function MFNPCAI.NPCBTDecorator_SingletonBlueprintBase.ReceiveExecutionFinish
	// Flags: [Event|Protected|BlueprintEvent]
	// Offset: 0x5d8cbc8
	// Params: [ Num(2) Size(0x9) ]
	void ReceiveExecutionFinish(struct AActor* OwnerActor, uint8_t NodeResult);

	// Object: Function MFNPCAI.NPCBTDecorator_SingletonBlueprintBase.PerformConditionCheckAI
	// Flags: [Event|Protected|BlueprintEvent]
	// Offset: 0x5d8cbc8
	// Params: [ Num(3) Size(0x11) ]
	bool PerformConditionCheckAI(struct AAIController* OwnerController, struct APawn* ControlledPawn);

	// Object: Function MFNPCAI.NPCBTDecorator_SingletonBlueprintBase.PerformConditionCheck
	// Flags: [Event|Protected|BlueprintEvent]
	// Offset: 0x5d8cbc8
	// Params: [ Num(2) Size(0x9) ]
	bool PerformConditionCheck(struct AActor* OwnerActor);

	// Object: Function MFNPCAI.NPCBTDecorator_SingletonBlueprintBase.IsDecoratorObserverActive
	// Flags: [Final|Native|Protected|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3cde42c
	// Params: [ Num(1) Size(0x1) ]
	bool IsDecoratorObserverActive();

	// Object: Function MFNPCAI.NPCBTDecorator_SingletonBlueprintBase.IsDecoratorExecutionActive
	// Flags: [Final|Native|Protected|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3cde464
	// Params: [ Num(1) Size(0x1) ]
	bool IsDecoratorExecutionActive();
};

// Object: Class MFNPCAI.NPCBTDecorator_TickIntervalBase
// Size: 0x98 (Inherited: 0x90)
struct UNPCBTDecorator_TickIntervalBase : UNPCBTDecorator_BlueprintBase
{
	DEFINE_UE_CLASS_HELPERS(UNPCBTDecorator_TickIntervalBase, "NPCBTDecorator_TickIntervalBase")

	float Interval; // 0x8C(0x4)
	float RandomDeviation; // 0x90(0x4)
};

// Object: Class MFNPCAI.NPCBTDecorator_Wait
// Size: 0x68 (Inherited: 0x60)
struct UNPCBTDecorator_Wait : UBTDecorator_Cooldown
{
	DEFINE_UE_CLASS_HELPERS(UNPCBTDecorator_Wait, "NPCBTDecorator_Wait")

	bool bWaitFirstTime; // 0x60(0x1)
	uint8_t Pad_0x61[0x7]; // 0x61(0x7)
};

// Object: Class MFNPCAI.NPCBTService
// Size: 0x88 (Inherited: 0x68)
struct UNPCBTService : UBTService
{
	DEFINE_UE_CLASS_HELPERS(UNPCBTService, "NPCBTService")

	uint8_t bWithTime : 1; // 0x61(0x1), Mask(0x1)
	uint8_t bOnActivation : 1; // 0x61(0x1), Mask(0x2)
	uint8_t bOnDeactivation : 1; // 0x61(0x1), Mask(0x4)
	uint8_t bOnTick : 1; // 0x61(0x1), Mask(0x8)
	uint8_t bOnSearchStart : 1; // 0x61(0x1), Mask(0x10)
	struct FString TagText; // 0x68(0x10)
	struct FString Message; // 0x78(0x10)
};

// Object: Class MFNPCAI.NPCBTService_BlueprintBase
// Size: 0x88 (Inherited: 0x68)
struct UNPCBTService_BlueprintBase : UBTService
{
	DEFINE_UE_CLASS_HELPERS(UNPCBTService_BlueprintBase, "NPCBTService_BlueprintBase")

	bool bAsSharedInstance; // 0x61(0x1)
	struct AAIController* AIOwner; // 0x68(0x8)
	uint8_t Pad_0x71[0x11]; // 0x71(0x11)
	uint8_t bShowPropertyDetails : 1; // 0x82(0x1), Mask(0x1)
	uint8_t bShowEventDetails : 1; // 0x82(0x1), Mask(0x2)
	uint8_t BitPad_0x82_2 : 6; // 0x82(0x1)
	uint8_t Pad_0x83[0x5]; // 0x83(0x5)

	// Object: Function MFNPCAI.NPCBTService_BlueprintBase.ReceiveTickAI
	// Flags: [Event|Protected|BlueprintEvent]
	// Offset: 0x5d8cbc8
	// Params: [ Num(3) Size(0x14) ]
	void ReceiveTickAI(struct AAIController* OwnerController, struct APawn* ControlledPawn, float DeltaSeconds);

	// Object: Function MFNPCAI.NPCBTService_BlueprintBase.ReceiveTick
	// Flags: [Event|Protected|BlueprintEvent]
	// Offset: 0x5d8cbc8
	// Params: [ Num(2) Size(0xC) ]
	void ReceiveTick(struct AActor* OwnerActor, float DeltaSeconds);

	// Object: Function MFNPCAI.NPCBTService_BlueprintBase.ReceiveSearchStartAI
	// Flags: [Event|Protected|BlueprintEvent]
	// Offset: 0x5d8cbc8
	// Params: [ Num(2) Size(0x10) ]
	void ReceiveSearchStartAI(struct AAIController* OwnerController, struct APawn* ControlledPawn);

	// Object: Function MFNPCAI.NPCBTService_BlueprintBase.ReceiveSearchStart
	// Flags: [Event|Protected|BlueprintEvent]
	// Offset: 0x5d8cbc8
	// Params: [ Num(1) Size(0x8) ]
	void ReceiveSearchStart(struct AActor* OwnerActor);

	// Object: Function MFNPCAI.NPCBTService_BlueprintBase.ReceiveDeactivationAI
	// Flags: [Event|Protected|BlueprintEvent]
	// Offset: 0x5d8cbc8
	// Params: [ Num(2) Size(0x10) ]
	void ReceiveDeactivationAI(struct AAIController* OwnerController, struct APawn* ControlledPawn);

	// Object: Function MFNPCAI.NPCBTService_BlueprintBase.ReceiveDeactivation
	// Flags: [Event|Protected|BlueprintEvent]
	// Offset: 0x5d8cbc8
	// Params: [ Num(1) Size(0x8) ]
	void ReceiveDeactivation(struct AActor* OwnerActor);

	// Object: Function MFNPCAI.NPCBTService_BlueprintBase.ReceiveActivationAI
	// Flags: [Event|Protected|BlueprintEvent]
	// Offset: 0x5d8cbc8
	// Params: [ Num(2) Size(0x10) ]
	void ReceiveActivationAI(struct AAIController* OwnerController, struct APawn* ControlledPawn);

	// Object: Function MFNPCAI.NPCBTService_BlueprintBase.ReceiveActivation
	// Flags: [Event|Protected|BlueprintEvent]
	// Offset: 0x5d8cbc8
	// Params: [ Num(1) Size(0x8) ]
	void ReceiveActivation(struct AActor* OwnerActor);

	// Object: Function MFNPCAI.NPCBTService_BlueprintBase.IsServiceActive
	// Flags: [Final|Native|Protected|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3cde934
	// Params: [ Num(1) Size(0x1) ]
	bool IsServiceActive();

	// Object: Function MFNPCAI.NPCBTService_BlueprintBase.GetOwnerPawn
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x3cde9a0
	// Params: [ Num(1) Size(0x8) ]
	struct APawn* GetOwnerPawn();

	// Object: Function MFNPCAI.NPCBTService_BlueprintBase.GetOwnerController
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x3cde96c
	// Params: [ Num(1) Size(0x8) ]
	struct AAIController* GetOwnerController();
};

// Object: Class MFNPCAI.NPCBTService_FindRandomPosition
// Size: 0xE0 (Inherited: 0x88)
struct UNPCBTService_FindRandomPosition : UNPCBTService
{
	DEFINE_UE_CLASS_HELPERS(UNPCBTService_FindRandomPosition, "NPCBTService_FindRandomPosition")

	struct FBlackboardKeySelector CenterTarget; // 0x88(0x28)
	struct FBlackboardKeySelector RandomLocation; // 0xB0(0x28)
	float MinRange; // 0xD8(0x4)
	float MaxRange; // 0xDC(0x4)
};

// Object: Class MFNPCAI.NPCBTService_SetSenseRangeScale
// Size: 0x98 (Inherited: 0x88)
struct UNPCBTService_SetSenseRangeScale : UNPCBTService
{
	DEFINE_UE_CLASS_HELPERS(UNPCBTService_SetSenseRangeScale, "NPCBTService_SetSenseRangeScale")

	float CatchSenseScale; // 0x88(0x4)
	float LossSenseScale; // 0x8C(0x4)
	EAISenseType AISenseType; // 0x90(0x1)
	uint8_t Pad_0x91[0x7]; // 0x91(0x7)
};

// Object: Class MFNPCAI.NPCBTService_SetVisionHalfAngle
// Size: 0x90 (Inherited: 0x88)
struct UNPCBTService_SetVisionHalfAngle : UNPCBTService
{
	DEFINE_UE_CLASS_HELPERS(UNPCBTService_SetVisionHalfAngle, "NPCBTService_SetVisionHalfAngle")

	float LookAngleScale; // 0x88(0x4)
	uint8_t Pad_0x8C[0x4]; // 0x8C(0x4)
};

// Object: Class MFNPCAI.NPCBTService_SingletonBlueprintBase
// Size: 0x88 (Inherited: 0x68)
struct UNPCBTService_SingletonBlueprintBase : UBTService
{
	DEFINE_UE_CLASS_HELPERS(UNPCBTService_SingletonBlueprintBase, "NPCBTService_SingletonBlueprintBase")

	struct AAIController* AIOwner; // 0x68(0x8)
	uint8_t Pad_0x70[0x10]; // 0x70(0x10)
	uint8_t bShowPropertyDetails : 1; // 0x80(0x1), Mask(0x1)
	uint8_t bShowEventDetails : 1; // 0x80(0x1), Mask(0x2)
	uint8_t BitPad_0x80_2 : 6; // 0x80(0x1)
	uint8_t Pad_0x81[0x7]; // 0x81(0x7)

	// Object: Function MFNPCAI.NPCBTService_SingletonBlueprintBase.ReceiveTickAI
	// Flags: [Event|Protected|BlueprintEvent]
	// Offset: 0x5d8cbc8
	// Params: [ Num(3) Size(0x14) ]
	void ReceiveTickAI(struct AAIController* OwnerController, struct APawn* ControlledPawn, float DeltaSeconds);

	// Object: Function MFNPCAI.NPCBTService_SingletonBlueprintBase.ReceiveTick
	// Flags: [Event|Protected|BlueprintEvent]
	// Offset: 0x5d8cbc8
	// Params: [ Num(2) Size(0xC) ]
	void ReceiveTick(struct AActor* OwnerActor, float DeltaSeconds);

	// Object: Function MFNPCAI.NPCBTService_SingletonBlueprintBase.ReceiveSearchStartAI
	// Flags: [Event|Protected|BlueprintEvent]
	// Offset: 0x5d8cbc8
	// Params: [ Num(2) Size(0x10) ]
	void ReceiveSearchStartAI(struct AAIController* OwnerController, struct APawn* ControlledPawn);

	// Object: Function MFNPCAI.NPCBTService_SingletonBlueprintBase.ReceiveSearchStart
	// Flags: [Event|Protected|BlueprintEvent]
	// Offset: 0x5d8cbc8
	// Params: [ Num(1) Size(0x8) ]
	void ReceiveSearchStart(struct AActor* OwnerActor);

	// Object: Function MFNPCAI.NPCBTService_SingletonBlueprintBase.ReceiveDeactivationAI
	// Flags: [Event|Protected|BlueprintEvent]
	// Offset: 0x5d8cbc8
	// Params: [ Num(2) Size(0x10) ]
	void ReceiveDeactivationAI(struct AAIController* OwnerController, struct APawn* ControlledPawn);

	// Object: Function MFNPCAI.NPCBTService_SingletonBlueprintBase.ReceiveDeactivation
	// Flags: [Event|Protected|BlueprintEvent]
	// Offset: 0x5d8cbc8
	// Params: [ Num(1) Size(0x8) ]
	void ReceiveDeactivation(struct AActor* OwnerActor);

	// Object: Function MFNPCAI.NPCBTService_SingletonBlueprintBase.ReceiveActivationAI
	// Flags: [Event|Protected|BlueprintEvent]
	// Offset: 0x5d8cbc8
	// Params: [ Num(2) Size(0x10) ]
	void ReceiveActivationAI(struct AAIController* OwnerController, struct APawn* ControlledPawn);

	// Object: Function MFNPCAI.NPCBTService_SingletonBlueprintBase.ReceiveActivation
	// Flags: [Event|Protected|BlueprintEvent]
	// Offset: 0x5d8cbc8
	// Params: [ Num(1) Size(0x8) ]
	void ReceiveActivation(struct AActor* OwnerActor);
};

// Object: Class MFNPCAI.NPCBTTask_BlueprintBase
// Size: 0xA0 (Inherited: 0x70)
struct UNPCBTTask_BlueprintBase : UBTTaskNode
{
	DEFINE_UE_CLASS_HELPERS(UNPCBTTask_BlueprintBase, "NPCBTTask_BlueprintBase")

	bool bAsSharedInstance; // 0x69(0x1)
	struct AAIController* AIOwner; // 0x70(0x8)
	uint8_t Pad_0x79[0x3]; // 0x79(0x3)
	struct FIntervalCountdown TickInterval; // 0x7C(0x8)
	uint8_t Pad_0x84[0x16]; // 0x84(0x16)
	uint8_t bShowPropertyDetails : 1; // 0x9A(0x1), Mask(0x1)
	uint8_t BitPad_0x9A_1 : 7; // 0x9A(0x1)
	uint8_t Pad_0x9B[0x5]; // 0x9B(0x5)

	// Object: Function MFNPCAI.NPCBTTask_BlueprintBase.SetFinishOnMessageWithId
	// Flags: [Final|Native|Protected|BlueprintCallable]
	// Offset: 0x3ce22cc
	// Params: [ Num(2) Size(0xC) ]
	void SetFinishOnMessageWithId(struct FName MessageName, int32_t RequestID);

	// Object: Function MFNPCAI.NPCBTTask_BlueprintBase.SetFinishOnMessage
	// Flags: [Final|Native|Protected|BlueprintCallable]
	// Offset: 0x3ce23b4
	// Params: [ Num(1) Size(0x8) ]
	void SetFinishOnMessage(struct FName MessageName);

	// Object: Function MFNPCAI.NPCBTTask_BlueprintBase.ReceiveTickAI
	// Flags: [Event|Protected|BlueprintEvent]
	// Offset: 0x5d8cbc8
	// Params: [ Num(3) Size(0x14) ]
	void ReceiveTickAI(struct AAIController* OwnerController, struct APawn* ControlledPawn, float DeltaSeconds);

	// Object: Function MFNPCAI.NPCBTTask_BlueprintBase.ReceiveTick
	// Flags: [Event|Protected|BlueprintEvent]
	// Offset: 0x5d8cbc8
	// Params: [ Num(2) Size(0xC) ]
	void ReceiveTick(struct AActor* OwnerActor, float DeltaSeconds);

	// Object: Function MFNPCAI.NPCBTTask_BlueprintBase.ReceiveExecuteAI
	// Flags: [Event|Protected|BlueprintEvent]
	// Offset: 0x5d8cbc8
	// Params: [ Num(2) Size(0x10) ]
	void ReceiveExecuteAI(struct AAIController* OwnerController, struct APawn* ControlledPawn);

	// Object: Function MFNPCAI.NPCBTTask_BlueprintBase.ReceiveExecute
	// Flags: [Event|Protected|BlueprintEvent]
	// Offset: 0x5d8cbc8
	// Params: [ Num(1) Size(0x8) ]
	void ReceiveExecute(struct AActor* OwnerActor);

	// Object: Function MFNPCAI.NPCBTTask_BlueprintBase.ReceiveAbortAI
	// Flags: [Event|Protected|BlueprintEvent]
	// Offset: 0x5d8cbc8
	// Params: [ Num(2) Size(0x10) ]
	void ReceiveAbortAI(struct AAIController* OwnerController, struct APawn* ControlledPawn);

	// Object: Function MFNPCAI.NPCBTTask_BlueprintBase.ReceiveAbort
	// Flags: [Event|Protected|BlueprintEvent]
	// Offset: 0x5d8cbc8
	// Params: [ Num(1) Size(0x8) ]
	void ReceiveAbort(struct AActor* OwnerActor);

	// Object: Function MFNPCAI.NPCBTTask_BlueprintBase.IsTaskExecuting
	// Flags: [Final|Native|Protected|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3ce2294
	// Params: [ Num(1) Size(0x1) ]
	bool IsTaskExecuting();

	// Object: Function MFNPCAI.NPCBTTask_BlueprintBase.IsTaskAborting
	// Flags: [Final|Native|Protected|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3ce225c
	// Params: [ Num(1) Size(0x1) ]
	bool IsTaskAborting();

	// Object: Function MFNPCAI.NPCBTTask_BlueprintBase.GetOwnerPawn
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x3ce2554
	// Params: [ Num(1) Size(0x8) ]
	struct APawn* GetOwnerPawn();

	// Object: Function MFNPCAI.NPCBTTask_BlueprintBase.GetOwnerController
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x3ce2520
	// Params: [ Num(1) Size(0x8) ]
	struct AAIController* GetOwnerController();

	// Object: Function MFNPCAI.NPCBTTask_BlueprintBase.FinishExecute
	// Flags: [Final|Native|Protected|BlueprintCallable]
	// Offset: 0x3ce2470
	// Params: [ Num(1) Size(0x1) ]
	void FinishExecute(bool bSuccess);

	// Object: Function MFNPCAI.NPCBTTask_BlueprintBase.FinishAbort
	// Flags: [Final|Native|Protected|BlueprintCallable]
	// Offset: 0x3ce245c
	// Params: [ Num(0) Size(0x0) ]
	void FinishAbort();
};

// Object: Class MFNPCAI.NPCBTTask_LatenTaskBase
// Size: 0xA8 (Inherited: 0xA0)
struct UNPCBTTask_LatenTaskBase : UNPCBTTask_BlueprintBase
{
	DEFINE_UE_CLASS_HELPERS(UNPCBTTask_LatenTaskBase, "NPCBTTask_LatenTaskBase")

	float TaskDuration; // 0x9C(0x4)
	float startTime; // 0xA0(0x4)
};

// Object: Class MFNPCAI.NPCBTTask_AimAndFireEnemy
// Size: 0x150 (Inherited: 0xA8)
struct UNPCBTTask_AimAndFireEnemy : UNPCBTTask_LatenTaskBase
{
	DEFINE_UE_CLASS_HELPERS(UNPCBTTask_AimAndFireEnemy, "NPCBTTask_AimAndFireEnemy")

	struct FBlackboardKeySelector FireTarget; // 0xA8(0x28)
	struct FBlackboardKeySelector ShootOneRound; // 0xD0(0x28)
	struct FBlackboardKeySelector SkipFirstRoundAim; // 0xF8(0x28)
	bool IsShotEnemy; // 0x120(0x1)
	uint8_t Pad_0x121[0x7]; // 0x121(0x7)
	struct ACharacter* FireTargetPawn; // 0x128(0x8)
	struct FVector FireTargetLoc; // 0x130(0xC)
	bool bIsFiring; // 0x13C(0x1)
	bool bPressureAim; // 0x13D(0x1)
	bool bSkipFirstRoundAim; // 0x13E(0x1)
	EAIBodyPartType ShootPartID; // 0x13F(0x1)
	uint8_t LastCheckedShotCount; // 0x140(0x1)
	uint8_t Pad_0x141[0x3]; // 0x141(0x3)
	int32_t ShootRound; // 0x144(0x4)
	uint8_t Pad_0x148[0x8]; // 0x148(0x8)
};

// Object: Class MFNPCAI.NPCBTTaskNode
// Size: 0x90 (Inherited: 0x70)
struct UNPCBTTaskNode : UBTTaskNode
{
	DEFINE_UE_CLASS_HELPERS(UNPCBTTaskNode, "NPCBTTaskNode")

	uint8_t bWithTime : 1; // 0x69(0x1), Mask(0x1)
	struct FString TagText; // 0x70(0x10)
	struct FString Message; // 0x80(0x10)
};

// Object: Class MFNPCAI.NPCBTTask_AttackEnemy
// Size: 0x90 (Inherited: 0x90)
struct UNPCBTTask_AttackEnemy : UNPCBTTaskNode
{
	DEFINE_UE_CLASS_HELPERS(UNPCBTTask_AttackEnemy, "NPCBTTask_AttackEnemy")
};

// Object: Class MFNPCAI.NPCBTTask_CalcNextAttackPosition
// Size: 0xB0 (Inherited: 0x90)
struct UNPCBTTask_CalcNextAttackPosition : UNPCBTTaskNode
{
	DEFINE_UE_CLASS_HELPERS(UNPCBTTask_CalcNextAttackPosition, "NPCBTTask_CalcNextAttackPosition")

	bool bDebugMoveTrace; // 0x90(0x1)
	uint8_t Pad_0x91[0x3]; // 0x91(0x3)
	int32_t MaxTryTimes; // 0x94(0x4)
	float MinMoveDistance; // 0x98(0x4)
	float MaxMoveDistance; // 0x9C(0x4)
	float MoveDistanceThreshold; // 0xA0(0x4)
	float MinDistanceToPlayer; // 0xA4(0x4)
	struct UNavigationQueryFilter* FilterClass; // 0xA8(0x8)
};

// Object: Class MFNPCAI.NPCBTTask_CalcNextWanderPathNode
// Size: 0x90 (Inherited: 0x90)
struct UNPCBTTask_CalcNextWanderPathNode : UNPCBTTaskNode
{
	DEFINE_UE_CLASS_HELPERS(UNPCBTTask_CalcNextWanderPathNode, "NPCBTTask_CalcNextWanderPathNode")
};

// Object: Class MFNPCAI.NPCBTTask_ClearFocalPoint
// Size: 0x90 (Inherited: 0x90)
struct UNPCBTTask_ClearFocalPoint : UNPCBTTaskNode
{
	DEFINE_UE_CLASS_HELPERS(UNPCBTTask_ClearFocalPoint, "NPCBTTask_ClearFocalPoint")
};

// Object: Class MFNPCAI.NPCBTTask_DBNORescue
// Size: 0xC8 (Inherited: 0xA0)
struct UNPCBTTask_DBNORescue : UNPCBTTask_BlueprintBase
{
	DEFINE_UE_CLASS_HELPERS(UNPCBTTask_DBNORescue, "NPCBTTask_DBNORescue")

	struct FBlackboardKeySelector Tgt_DBNOTarget; // 0xA0(0x28)
};

// Object: Class MFNPCAI.NPCBTTask_FireEnemy
// Size: 0x170 (Inherited: 0xA8)
struct UNPCBTTask_FireEnemy : UNPCBTTask_LatenTaskBase
{
	DEFINE_UE_CLASS_HELPERS(UNPCBTTask_FireEnemy, "NPCBTTask_FireEnemy")

	struct FBlackboardKeySelector FireTarget; // 0xA8(0x28)
	struct FBlackboardKeySelector MovementMultiplier; // 0xD0(0x28)
	struct FBlackboardKeySelector AimingMultiplier; // 0xF8(0x28)
	struct FBlackboardKeySelector BurstMultiplier; // 0x120(0x28)
	struct FBlackboardKeySelector TargetStateMultiplier; // 0x148(0x28)
};

// Object: Class MFNPCAI.NPCBTTask_FireEnemyEx
// Size: 0xE0 (Inherited: 0xA8)
struct UNPCBTTask_FireEnemyEx : UNPCBTTask_LatenTaskBase
{
	DEFINE_UE_CLASS_HELPERS(UNPCBTTask_FireEnemyEx, "NPCBTTask_FireEnemyEx")

	struct FBlackboardKeySelector FireTarget; // 0xA8(0x28)
	EAISpecialFireType FireType; // 0xD0(0x1)
	uint8_t Pad_0xD1[0x3]; // 0xD1(0x3)
	float MissRadiusMin; // 0xD4(0x4)
	float MissRadiusMax; // 0xD8(0x4)
	float SpeedThreshold; // 0xDC(0x4)
};

// Object: Class MFNPCAI.NPCBTTask_FollowPathNode
// Size: 0xE0 (Inherited: 0x90)
struct UNPCBTTask_FollowPathNode : UNPCBTTaskNode
{
	DEFINE_UE_CLASS_HELPERS(UNPCBTTask_FollowPathNode, "NPCBTTask_FollowPathNode")

	struct FBlackboardKeySelector WanderLocationKey; // 0x90(0x28)
	struct FBlackboardKeySelector WaitTimeKey; // 0xB8(0x28)
};

// Object: Class MFNPCAI.NPCBTTask_MeleeAttackEnemy
// Size: 0xF0 (Inherited: 0xA8)
struct UNPCBTTask_MeleeAttackEnemy : UNPCBTTask_LatenTaskBase
{
	DEFINE_UE_CLASS_HELPERS(UNPCBTTask_MeleeAttackEnemy, "NPCBTTask_MeleeAttackEnemy")

	struct FBlackboardKeySelector FireTarget; // 0xA8(0x28)
	struct ACharacter* FireTargetPawn; // 0xD0(0x8)
	struct FVector FireTargetLoc; // 0xD8(0xC)
	bool IsShotEnemy; // 0xE4(0x1)
	bool bIsFiring; // 0xE5(0x1)
	uint8_t Pad_0xE6[0x2]; // 0xE6(0x2)
	float StartFireTimestamp; // 0xE8(0x4)
	uint8_t Pad_0xEC[0x4]; // 0xEC(0x4)
};

// Object: Class MFNPCAI.NPCBTTask_MoveToEx
// Size: 0xD8 (Inherited: 0xB0)
struct UNPCBTTask_MoveToEx : UBTTask_MoveTo
{
	DEFINE_UE_CLASS_HELPERS(UNPCBTTask_MoveToEx, "NPCBTTask_MoveToEx")

	EAIMoveType MoveType; // 0xAE(0x1)
	float RandomReachableRadius; // 0xB0(0x4)
	uint8_t bWithTime : 1; // 0xB4(0x1), Mask(0x1)
	uint8_t BitPad_0xB5_1 : 7; // 0xB5(0x1)
	uint8_t Pad_0xB6[0x2]; // 0xB6(0x2)
	struct FString TagText; // 0xB8(0x10)
	struct FString Message; // 0xC8(0x10)
};

// Object: Class MFNPCAI.NPCBTTask_PlayAkSound
// Size: 0xA0 (Inherited: 0x90)
struct UNPCBTTask_PlayAkSound : UNPCBTTaskNode
{
	DEFINE_UE_CLASS_HELPERS(UNPCBTTask_PlayAkSound, "NPCBTTask_PlayAkSound")

	struct UAkAudioEvent* SoundToPlay; // 0x90(0x8)
	bool bSoundAttached; // 0x98(0x1)
	uint8_t Pad_0x99[0x7]; // 0x99(0x7)
};

// Object: Class MFNPCAI.NPCBTTask_ResetTargetLocation
// Size: 0x90 (Inherited: 0x90)
struct UNPCBTTask_ResetTargetLocation : UNPCBTTaskNode
{
	DEFINE_UE_CLASS_HELPERS(UNPCBTTask_ResetTargetLocation, "NPCBTTask_ResetTargetLocation")
};

// Object: Class MFNPCAI.NPCBTTask_SetAIPose
// Size: 0x98 (Inherited: 0x90)
struct UNPCBTTask_SetAIPose : UNPCBTTaskNode
{
	DEFINE_UE_CLASS_HELPERS(UNPCBTTask_SetAIPose, "NPCBTTask_SetAIPose")

	EAIPose TargetAIPose; // 0x90(0x1)
	uint8_t Pad_0x91[0x7]; // 0x91(0x7)
};

// Object: Class MFNPCAI.NPCBTTask_SetBlackboardValue
// Size: 0xE0 (Inherited: 0x90)
struct UNPCBTTask_SetBlackboardValue : UNPCBTTaskNode
{
	DEFINE_UE_CLASS_HELPERS(UNPCBTTask_SetBlackboardValue, "NPCBTTask_SetBlackboardValue")

	struct FBlackboardKeySelector SourceValue; // 0x90(0x28)
	struct FBlackboardKeySelector TargetValue; // 0xB8(0x28)
};

// Object: Class MFNPCAI.NPCBTTask_SetFocalPoint
// Size: 0xC0 (Inherited: 0x98)
struct UNPCBTTask_SetFocalPoint : UBTTask_BlackboardBase
{
	DEFINE_UE_CLASS_HELPERS(UNPCBTTask_SetFocalPoint, "NPCBTTask_SetFocalPoint")

	uint8_t bWithTime : 1; // 0x98(0x1), Mask(0x1)
	uint8_t BitPad_0x98_1 : 7; // 0x98(0x1)
	uint8_t Pad_0x99[0x7]; // 0x99(0x7)
	struct FString TagText; // 0xA0(0x10)
	struct FString Message; // 0xB0(0x10)
};

// Object: Class MFNPCAI.NPCBTTask_SetMovementSpeed
// Size: 0xA0 (Inherited: 0x90)
struct UNPCBTTask_SetMovementSpeed : UNPCBTTaskNode
{
	DEFINE_UE_CLASS_HELPERS(UNPCBTTask_SetMovementSpeed, "NPCBTTask_SetMovementSpeed")

	float BasicStandSpeed; // 0x90(0x4)
	float BasicCrouchSpeed; // 0x94(0x4)
	float BasicProneSpeed; // 0x98(0x4)
	uint8_t Pad_0x9C[0x4]; // 0x9C(0x4)
};

// Object: Class MFNPCAI.NPCBTTask_SetSenseRangeScale
// Size: 0xA0 (Inherited: 0x90)
struct UNPCBTTask_SetSenseRangeScale : UNPCBTTaskNode
{
	DEFINE_UE_CLASS_HELPERS(UNPCBTTask_SetSenseRangeScale, "NPCBTTask_SetSenseRangeScale")

	float CatchSenseScale; // 0x90(0x4)
	float LossSenseScale; // 0x94(0x4)
	EAISenseType AISenseType; // 0x98(0x1)
	uint8_t Pad_0x99[0x7]; // 0x99(0x7)
};

// Object: Class MFNPCAI.NPCBTTask_SetTargetHatred
// Size: 0xD8 (Inherited: 0xA0)
struct UNPCBTTask_SetTargetHatred : UNPCBTTask_BlueprintBase
{
	DEFINE_UE_CLASS_HELPERS(UNPCBTTask_SetTargetHatred, "NPCBTTask_SetTargetHatred")

	struct FBlackboardKeySelector EnemyTargetKey; // 0xA0(0x28)
	int32_t HatredValue; // 0xC8(0x4)
	float Hatred_IndateTime; // 0xCC(0x4)
	bool NeedToCalucateGoalEnemy; // 0xD0(0x1)
	uint8_t Pad_0xD1[0x7]; // 0xD1(0x7)
};

// Object: Class MFNPCAI.NPCBTTask_SetVisionHalfAngle
// Size: 0x98 (Inherited: 0x90)
struct UNPCBTTask_SetVisionHalfAngle : UNPCBTTaskNode
{
	DEFINE_UE_CLASS_HELPERS(UNPCBTTask_SetVisionHalfAngle, "NPCBTTask_SetVisionHalfAngle")

	float VisionHalfAngle; // 0x90(0x4)
	uint8_t Pad_0x94[0x4]; // 0x94(0x4)
};

// Object: Class MFNPCAI.NPCBTTask_StartShoulderAimingTarget
// Size: 0xA8 (Inherited: 0xA8)
struct UNPCBTTask_StartShoulderAimingTarget : UNPCBTTask_LatenTaskBase
{
	DEFINE_UE_CLASS_HELPERS(UNPCBTTask_StartShoulderAimingTarget, "NPCBTTask_StartShoulderAimingTarget")
};

// Object: Class MFNPCAI.NPCBTTask_StopShoulderAimingTarget
// Size: 0xA8 (Inherited: 0xA8)
struct UNPCBTTask_StopShoulderAimingTarget : UNPCBTTask_LatenTaskBase
{
	DEFINE_UE_CLASS_HELPERS(UNPCBTTask_StopShoulderAimingTarget, "NPCBTTask_StopShoulderAimingTarget")
};

// Object: Class MFNPCAI.NPCCharacterAIDBNOInterface
// Size: 0x28 (Inherited: 0x28)
struct INPCCharacterAIDBNOInterface : IInterface
{
	DEFINE_UE_CLASS_HELPERS(INPCCharacterAIDBNOInterface, "NPCCharacterAIDBNOInterface")

	// Object: Function MFNPCAI.NPCCharacterAIDBNOInterface.IsTargetDBNO
	// Flags: [Native|Public]
	// Offset: 0x3ce2a4c
	// Params: [ Num(2) Size(0x9) ]
	bool IsTargetDBNO(struct AActor* TargetPawn);

	// Object: Function MFNPCAI.NPCCharacterAIDBNOInterface.IsSelfDBNO
	// Flags: [Native|Public]
	// Offset: 0x3ce2b08
	// Params: [ Num(1) Size(0x1) ]
	bool IsSelfDBNO();

	// Object: Function MFNPCAI.NPCCharacterAIDBNOInterface.CheckAIGroupDBNOWipeOut
	// Flags: [Native|Public]
	// Offset: 0x3ce2a30
	// Params: [ Num(0) Size(0x0) ]
	void CheckAIGroupDBNOWipeOut();
};

// Object: Class MFNPCAI.NPCCharacterAIDeathInterface
// Size: 0x28 (Inherited: 0x28)
struct INPCCharacterAIDeathInterface : IInterface
{
	DEFINE_UE_CLASS_HELPERS(INPCCharacterAIDeathInterface, "NPCCharacterAIDeathInterface")

	// Object: Function MFNPCAI.NPCCharacterAIDeathInterface.IsDead
	// Flags: [Native|Public|Const]
	// Offset: 0x3ce2b68
	// Params: [ Num(1) Size(0x1) ]
	bool IsDead();
};

// Object: Class MFNPCAI.NPCCharacterAIDebugInterface
// Size: 0x28 (Inherited: 0x28)
struct INPCCharacterAIDebugInterface : IInterface
{
	DEFINE_UE_CLASS_HELPERS(INPCCharacterAIDebugInterface, "NPCCharacterAIDebugInterface")

	// Object: Function MFNPCAI.NPCCharacterAIDebugInterface.BoardcastDrawDebugLine
	// Flags: [Native|Public|HasDefaults]
	// Offset: 0x3ce2bbc
	// Params: [ Num(6) Size(0x28) ]
	void BoardcastDrawDebugLine(int32_t InDrawID, struct FVector InStart, struct FVector InEnd, struct FColor Color, float InTime, float InThickness);
};

// Object: Class MFNPCAI.NPCCharacterAIExplodeInterface
// Size: 0x28 (Inherited: 0x28)
struct INPCCharacterAIExplodeInterface : IInterface
{
	DEFINE_UE_CLASS_HELPERS(INPCCharacterAIExplodeInterface, "NPCCharacterAIExplodeInterface")

	// Object: Function MFNPCAI.NPCCharacterAIExplodeInterface.SetExplodeParams
	// Flags: [Native|Public]
	// Offset: 0x3ce2dac
	// Params: [ Num(4) Size(0xD) ]
	void SetExplodeParams(float InMinDamage, float InMaxDamage, float InDamageRange, bool bInExplodeAtDeath);

	// Object: Function MFNPCAI.NPCCharacterAIExplodeInterface.NetMulticastExplode
	// Flags: [Native|Public]
	// Offset: 0x3ce2f20
	// Params: [ Num(0) Size(0x0) ]
	void NetMulticastExplode();
};

// Object: Class MFNPCAI.NPCCharacterAIFireInterface
// Size: 0x28 (Inherited: 0x28)
struct INPCCharacterAIFireInterface : IInterface
{
	DEFINE_UE_CLASS_HELPERS(INPCCharacterAIFireInterface, "NPCCharacterAIFireInterface")

	// Object: Function MFNPCAI.NPCCharacterAIFireInterface.UpdatePersistentFireSetting
	// Flags: [Native|Public|HasOutParms|HasDefaults]
	// Offset: 0x3ce38c8
	// Params: [ Num(6) Size(0x21) ]
	void UpdatePersistentFireSetting(bool CalcShoot, bool CalcSight, struct AActor* EnemyTarget, const struct FVector& FireLocation, float FireInterval, bool bIgnoreAimingTime);

	// Object: Function MFNPCAI.NPCCharacterAIFireInterface.UpdateNaturalFireSetting
	// Flags: [Native|Public|HasOutParms|HasDefaults]
	// Offset: 0x3ce34c8
	// Params: [ Num(4) Size(0xF) ]
	void UpdateNaturalFireSetting(const struct FVector& FireLocation, bool bEnabledRecoilControl, bool bEnabledHitRateControl, bool bIgnoreAimingTime);

	// Object: Function MFNPCAI.NPCCharacterAIFireInterface.StopPersistentFire
	// Flags: [Native|Public]
	// Offset: 0x3ce346c
	// Params: [ Num(0) Size(0x0) ]
	void StopPersistentFire();

	// Object: Function MFNPCAI.NPCCharacterAIFireInterface.StopFireDirectly
	// Flags: [Native|Public]
	// Offset: 0x3ce3d98
	// Params: [ Num(0) Size(0x0) ]
	void StopFireDirectly();

	// Object: Function MFNPCAI.NPCCharacterAIFireInterface.StopFire
	// Flags: [Native|Public]
	// Offset: 0x3ce3e10
	// Params: [ Num(1) Size(0x4) ]
	void StopFire(int32_t FireMode);

	// Object: Function MFNPCAI.NPCCharacterAIFireInterface.StartPersistentFire
	// Flags: [Native|Public]
	// Offset: 0x3ce3bd8
	// Params: [ Num(2) Size(0x5) ]
	bool StartPersistentFire(float Duration);

	// Object: Function MFNPCAI.NPCCharacterAIFireInterface.StartFireNextTick
	// Flags: [Native|Public]
	// Offset: 0x3ce3df4
	// Params: [ Num(0) Size(0x0) ]
	void StartFireNextTick();

	// Object: Function MFNPCAI.NPCCharacterAIFireInterface.StartFireDirectly
	// Flags: [Native|Public]
	// Offset: 0x3ce3db4
	// Params: [ Num(1) Size(0x1) ]
	bool StartFireDirectly();

	// Object: Function MFNPCAI.NPCCharacterAIFireInterface.StartFire
	// Flags: [Native|Public]
	// Offset: 0x3ce3ec0
	// Params: [ Num(1) Size(0x4) ]
	void StartFire(int32_t FireMode);

	// Object: Function MFNPCAI.NPCCharacterAIFireInterface.SetFireAimingPoint
	// Flags: [Native|Public|HasOutParms|HasDefaults]
	// Offset: 0x3ce3ae0
	// Params: [ Num(1) Size(0xC) ]
	void SetFireAimingPoint(const struct FVector& AimingPoint);

	// Object: Function MFNPCAI.NPCCharacterAIFireInterface.PrepareToFire
	// Flags: [Native|Public|HasOutParms]
	// Offset: 0x3ce3394
	// Params: [ Num(2) Size(0x41) ]
	EAIWorkResult PrepareToFire(struct FNPCAIFireSetting& FireSetting);

	// Object: Function MFNPCAI.NPCCharacterAIFireInterface.IsRecentlyFire
	// Flags: [Native|Public]
	// Offset: 0x3ce32d8
	// Params: [ Num(2) Size(0x5) ]
	bool IsRecentlyFire(float InSeconds);

	// Object: Function MFNPCAI.NPCCharacterAIFireInterface.IsPersistentFiring
	// Flags: [Native|Public]
	// Offset: 0x3ce3488
	// Params: [ Num(1) Size(0x1) ]
	bool IsPersistentFiring();

	// Object: Function MFNPCAI.NPCCharacterAIFireInterface.IsInFiringState
	// Flags: [Native|Public]
	// Offset: 0x3ce3220
	// Params: [ Num(1) Size(0x1) ]
	bool IsInFiringState();

	// Object: Function MFNPCAI.NPCCharacterAIFireInterface.GetWeaponUseTraceChannel
	// Flags: [Native|Public]
	// Offset: 0x3ce31a8
	// Params: [ Num(1) Size(0x1) ]
	uint8_t GetWeaponUseTraceChannel();

	// Object: Function MFNPCAI.NPCCharacterAIFireInterface.GetSingleBodyPartLocation
	// Flags: [Native|Public|HasDefaults]
	// Offset: 0x3ce3068
	// Params: [ Num(3) Size(0x18) ]
	struct FVector GetSingleBodyPartLocation(struct ACharacter* InCharacter, EAIBodyPartType InBodyPartType);

	// Object: Function MFNPCAI.NPCCharacterAIFireInterface.GetMuzzleFlashSocketLocation
	// Flags: [Native|Public|HasDefaults]
	// Offset: 0x3ce3164
	// Params: [ Num(1) Size(0xC) ]
	struct FVector GetMuzzleFlashSocketLocation();

	// Object: Function MFNPCAI.NPCCharacterAIFireInterface.GetLookSightUseTraceChannel
	// Flags: [Native|Public]
	// Offset: 0x3ce31e4
	// Params: [ Num(1) Size(0x1) ]
	uint8_t GetLookSightUseTraceChannel();

	// Object: Function MFNPCAI.NPCCharacterAIFireInterface.GetLastStopFireTime
	// Flags: [Native|Public]
	// Offset: 0x3ce3260
	// Params: [ Num(1) Size(0x4) ]
	float GetLastStopFireTime();

	// Object: Function MFNPCAI.NPCCharacterAIFireInterface.GetLastFireTime
	// Flags: [Native|Public]
	// Offset: 0x3ce329c
	// Params: [ Num(1) Size(0x4) ]
	float GetLastFireTime();

	// Object: Function MFNPCAI.NPCCharacterAIFireInterface.GetFireHitEnemyLastTimeUsePredestined
	// Flags: [Native|Public]
	// Offset: 0x3ce302c
	// Params: [ Num(1) Size(0x4) ]
	float GetFireHitEnemyLastTimeUsePredestined();

	// Object: Function MFNPCAI.NPCCharacterAIFireInterface.ForcePullBoltReady
	// Flags: [Native|Public]
	// Offset: 0x3ce3f70
	// Params: [ Num(0) Size(0x0) ]
	void ForcePullBoltReady();

	// Object: Function MFNPCAI.NPCCharacterAIFireInterface.CheckFireCanHitPenetration
	// Flags: [Native|Public|HasOutParms]
	// Offset: 0x3ce2f50
	// Params: [ Num(2) Size(0x99) ]
	bool CheckFireCanHitPenetration(const struct FHitResult& InHitResult);

	// Object: Function MFNPCAI.NPCCharacterAIFireInterface.CanStartPersistentFire
	// Flags: [Native|Public]
	// Offset: 0x3ce3b98
	// Params: [ Num(1) Size(0x1) ]
	bool CanStartPersistentFire();

	// Object: Function MFNPCAI.NPCCharacterAIFireInterface.CanMeleeFire
	// Flags: [Native|Public]
	// Offset: 0x3ce3f8c
	// Params: [ Num(1) Size(0x1) ]
	bool CanMeleeFire();

	// Object: Function MFNPCAI.NPCCharacterAIFireInterface.CanFire
	// Flags: [Native|Public]
	// Offset: 0x3ce3fcc
	// Params: [ Num(1) Size(0x1) ]
	bool CanFire();

	// Object: Function MFNPCAI.NPCCharacterAIFireInterface.AIRLUpdateFireSetting
	// Flags: [Native|Public]
	// Offset: 0x3ce3660
	// Params: [ Num(7) Size(0x17) ]
	void AIRLUpdateFireSetting(bool CalcShoot, bool CalcSight, struct AActor* EnemyTarget, float FireInterval, bool bIgnoreAimingTime, bool bEnabledRecoilControl, bool bEnabledHitRateControl);

	// Object: Function MFNPCAI.NPCCharacterAIFireInterface.AIRLThrowProjectile
	// Flags: [Native|Public]
	// Offset: 0x3ce3ccc
	// Params: [ Num(0) Size(0x0) ]
	void AIRLThrowProjectile();

	// Object: Function MFNPCAI.NPCCharacterAIFireInterface.AIRLSwitchToProjectile
	// Flags: [Native|Public]
	// Offset: 0x3ce3ce8
	// Params: [ Num(1) Size(0x8) ]
	void AIRLSwitchToProjectile(int64_t ProjectileID);

	// Object: Function MFNPCAI.NPCCharacterAIFireInterface.AIRLSwitchToBestWeapon
	// Flags: [Native|Public]
	// Offset: 0x3ce3cb0
	// Params: [ Num(0) Size(0x0) ]
	void AIRLSwitchToBestWeapon();

	// Object: Function MFNPCAI.NPCCharacterAIFireInterface.AIRLHoldProjectile
	// Flags: [Native|Public]
	// Offset: 0x3ce3c94
	// Params: [ Num(0) Size(0x0) ]
	void AIRLHoldProjectile();
};

// Object: Class MFNPCAI.NPCCharacterAIIKInterface
// Size: 0x28 (Inherited: 0x28)
struct INPCCharacterAIIKInterface : IInterface
{
	DEFINE_UE_CLASS_HELPERS(INPCCharacterAIIKInterface, "NPCCharacterAIIKInterface")

	// Object: Function MFNPCAI.NPCCharacterAIIKInterface.UpdateDSIKFootHighDiff
	// Flags: [Native|Public]
	// Offset: 0x3ce65e4
	// Params: [ Num(0) Size(0x0) ]
	void UpdateDSIKFootHighDiff();

	// Object: Function MFNPCAI.NPCCharacterAIIKInterface.ShouldDSEnableFootIK
	// Flags: [Native|Public]
	// Offset: 0x3ce6568
	// Params: [ Num(1) Size(0x1) ]
	bool ShouldDSEnableFootIK();

	// Object: Function MFNPCAI.NPCCharacterAIIKInterface.GetIKFootHighDiffValue
	// Flags: [Native|Public]
	// Offset: 0x3ce65a8
	// Params: [ Num(1) Size(0x4) ]
	float GetIKFootHighDiffValue();
};

// Object: Class MFNPCAI.NPCCharacterAIInventoryInterface
// Size: 0x28 (Inherited: 0x28)
struct INPCCharacterAIInventoryInterface : IInterface
{
	DEFINE_UE_CLASS_HELPERS(INPCCharacterAIInventoryInterface, "NPCCharacterAIInventoryInterface")

	// Object: Function MFNPCAI.NPCCharacterAIInventoryInterface.SetReTryTimes
	// Flags: [Native|Public]
	// Offset: 0x3ce68b4
	// Params: [ Num(1) Size(0x4) ]
	void SetReTryTimes(int32_t ReTryTimes);

	// Object: Function MFNPCAI.NPCCharacterAIInventoryInterface.SetReTryInterval
	// Flags: [Native|Public]
	// Offset: 0x3ce6804
	// Params: [ Num(1) Size(0x4) ]
	void SetReTryInterval(float ReTryInterval);

	// Object: Function MFNPCAI.NPCCharacterAIInventoryInterface.HasPendingSlicedSuitToGive
	// Flags: [Native|Public]
	// Offset: 0x3ce6614
	// Params: [ Num(1) Size(0x1) ]
	bool HasPendingSlicedSuitToGive();

	// Object: Function MFNPCAI.NPCCharacterAIInventoryInterface.HasPendingRandSuitToGive
	// Flags: [Native|Public]
	// Offset: 0x3ce6654
	// Params: [ Num(1) Size(0x1) ]
	bool HasPendingRandSuitToGive();

	// Object: Function MFNPCAI.NPCCharacterAIInventoryInterface.GiveInventoryToAI
	// Flags: [Native|Public]
	// Offset: 0x3ce66cc
	// Params: [ Num(4) Size(0x11) ]
	bool GiveInventoryToAI(uint64_t itemID, int32_t ItemNum, int32_t SkinID);

	// Object: Function MFNPCAI.NPCCharacterAIInventoryInterface.DoGiveSlicedSuit
	// Flags: [Native|Public]
	// Offset: 0x3ce6694
	// Params: [ Num(0) Size(0x0) ]
	void DoGiveSlicedSuit();

	// Object: Function MFNPCAI.NPCCharacterAIInventoryInterface.DoGiveRandSuit
	// Flags: [Native|Public]
	// Offset: 0x3ce66b0
	// Params: [ Num(0) Size(0x0) ]
	void DoGiveRandSuit();

	// Object: Function MFNPCAI.NPCCharacterAIInventoryInterface.AIUseInventoryByClass
	// Flags: [Native|Public]
	// Offset: 0x3ce6964
	// Params: [ Num(2) Size(0x9) ]
	bool AIUseInventoryByClass(struct UObject* InventoryClass);
};

// Object: Class MFNPCAI.NPCCharacterAIMoveInterface
// Size: 0x28 (Inherited: 0x28)
struct INPCCharacterAIMoveInterface : IInterface
{
	DEFINE_UE_CLASS_HELPERS(INPCCharacterAIMoveInterface, "NPCCharacterAIMoveInterface")

	// Object: Function MFNPCAI.NPCCharacterAIMoveInterface.StopActiveMovement
	// Flags: [Native|Public]
	// Offset: 0x3ce6cb8
	// Params: [ Num(0) Size(0x0) ]
	void StopActiveMovement();

	// Object: Function MFNPCAI.NPCCharacterAIMoveInterface.SetSprint
	// Flags: [Native|Public]
	// Offset: 0x3ce6dcc
	// Params: [ Num(1) Size(0x1) ]
	void SetSprint(bool bInSprint);

	// Object: Function MFNPCAI.NPCCharacterAIMoveInterface.SetSilentWalk
	// Flags: [Native|Public]
	// Offset: 0x3ce6d14
	// Params: [ Num(1) Size(0x1) ]
	void SetSilentWalk(bool bInSilentWalk);

	// Object: Function MFNPCAI.NPCCharacterAIMoveInterface.SetMovementSpeed
	// Flags: [Native|Public]
	// Offset: 0x3ce6b8c
	// Params: [ Num(3) Size(0xC) ]
	void SetMovementSpeed(float BasicStandSpeed, float BasicCrouchSpeed, float BasicProneSpeed);

	// Object: Function MFNPCAI.NPCCharacterAIMoveInterface.SetEnabledSliding
	// Flags: [Native|Public]
	// Offset: 0x3ce6ec4
	// Params: [ Num(1) Size(0x1) ]
	void SetEnabledSliding(bool bEnabled);

	// Object: Function MFNPCAI.NPCCharacterAIMoveInterface.OnNavMoveCompleted
	// Flags: [Native|Public]
	// Offset: 0x3ce6a98
	// Params: [ Num(2) Size(0x5) ]
	void OnNavMoveCompleted(struct FAIRequestID RequestID, uint8_t MovementResult);

	// Object: Function MFNPCAI.NPCCharacterAIMoveInterface.IsSprinting
	// Flags: [Native|Public|Const]
	// Offset: 0x3ce6e84
	// Params: [ Num(1) Size(0x1) ]
	bool IsSprinting();

	// Object: Function MFNPCAI.NPCCharacterAIMoveInterface.IsInNavWalking
	// Flags: [Native|Public|Const]
	// Offset: 0x3ce6a58
	// Params: [ Num(1) Size(0x1) ]
	bool IsInNavWalking();

	// Object: Function MFNPCAI.NPCCharacterAIMoveInterface.IsBraking
	// Flags: [Native|Public|Const]
	// Offset: 0x3ce6ff8
	// Params: [ Num(1) Size(0x1) ]
	bool IsBraking();

	// Object: Function MFNPCAI.NPCCharacterAIMoveInterface.IsAnyLegBroken
	// Flags: [Native|Public]
	// Offset: 0x3ce6fb8
	// Params: [ Num(1) Size(0x1) ]
	bool IsAnyLegBroken();

	// Object: Function MFNPCAI.NPCCharacterAIMoveInterface.GetSlidingDistance
	// Flags: [Native|Public]
	// Offset: 0x3ce6f7c
	// Params: [ Num(1) Size(0x4) ]
	float GetSlidingDistance();

	// Object: Function MFNPCAI.NPCCharacterAIMoveInterface.CanMove
	// Flags: [Native|Public]
	// Offset: 0x3ce6cd4
	// Params: [ Num(1) Size(0x1) ]
	bool CanMove();
};

// Object: Class MFNPCAI.NPCCharacterAIPathNodeInterface
// Size: 0x28 (Inherited: 0x28)
struct INPCCharacterAIPathNodeInterface : IInterface
{
	DEFINE_UE_CLASS_HELPERS(INPCCharacterAIPathNodeInterface, "NPCCharacterAIPathNodeInterface")

	// Object: Function MFNPCAI.NPCCharacterAIPathNodeInterface.ShouldWaitAtNode
	// Flags: [Native|Public]
	// Offset: 0x3ce7120
	// Params: [ Num(1) Size(0x1) ]
	bool ShouldWaitAtNode();

	// Object: Function MFNPCAI.NPCCharacterAIPathNodeInterface.GetWaitTimeAtNode
	// Flags: [Native|Public]
	// Offset: 0x3ce70e4
	// Params: [ Num(1) Size(0x4) ]
	float GetWaitTimeAtNode();

	// Object: Function MFNPCAI.NPCCharacterAIPathNodeInterface.GetTargetWanderPathLocation
	// Flags: [Native|Public|HasDefaults]
	// Offset: 0x3ce70a0
	// Params: [ Num(1) Size(0xC) ]
	struct FVector GetTargetWanderPathLocation();

	// Object: Function MFNPCAI.NPCCharacterAIPathNodeInterface.CalcNextPathNode
	// Flags: [Native|Public]
	// Offset: 0x3ce7160
	// Params: [ Num(1) Size(0x1) ]
	bool CalcNextPathNode();
};

// Object: Class MFNPCAI.NPCCharacterAIPerceptionInterface
// Size: 0x28 (Inherited: 0x28)
struct INPCCharacterAIPerceptionInterface : IInterface
{
	DEFINE_UE_CLASS_HELPERS(INPCCharacterAIPerceptionInterface, "NPCCharacterAIPerceptionInterface")

	// Object: Function MFNPCAI.NPCCharacterAIPerceptionInterface.GetTouchConfig
	// Flags: [Native|Public]
	// Offset: 0x3ce7238
	// Params: [ Num(1) Size(0x8) ]
	struct UAISenseConfig_Touch* GetTouchConfig();

	// Object: Function MFNPCAI.NPCCharacterAIPerceptionInterface.GetSightConfig
	// Flags: [Native|Public]
	// Offset: 0x3ce7274
	// Params: [ Num(1) Size(0x8) ]
	struct UAISenseConfig_Sight* GetSightConfig();

	// Object: Function MFNPCAI.NPCCharacterAIPerceptionInterface.GetHearingConfig
	// Flags: [Native|Public]
	// Offset: 0x3ce71c0
	// Params: [ Num(1) Size(0x8) ]
	struct UAISenseConfig_Hearing* GetHearingConfig();

	// Object: Function MFNPCAI.NPCCharacterAIPerceptionInterface.GetDamageConfig
	// Flags: [Native|Public]
	// Offset: 0x3ce71fc
	// Params: [ Num(1) Size(0x8) ]
	struct UAISenseConfig_Damage* GetDamageConfig();
};

// Object: Class MFNPCAI.NPCCharacterAIPickUpInterface
// Size: 0x28 (Inherited: 0x28)
struct INPCCharacterAIPickUpInterface : IInterface
{
	DEFINE_UE_CLASS_HELPERS(INPCCharacterAIPickUpInterface, "NPCCharacterAIPickUpInterface")

	// Object: Function MFNPCAI.NPCCharacterAIPickUpInterface.StopPickUpBoxContainer
	// Flags: [Native|Public]
	// Offset: 0x3ce74a4
	// Params: [ Num(0) Size(0x0) ]
	void StopPickUpBoxContainer();

	// Object: Function MFNPCAI.NPCCharacterAIPickUpInterface.SetInventoryHasChecked
	// Flags: [Native|Public]
	// Offset: 0x3ce73b4
	// Params: [ Num(1) Size(0x8) ]
	void SetInventoryHasChecked(struct AActor* Inventory);

	// Object: Function MFNPCAI.NPCCharacterAIPickUpInterface.PickUpInventory
	// Flags: [Native|Public]
	// Offset: 0x3ce76d8
	// Params: [ Num(6) Size(0x13) ]
	bool PickUpInventory(struct AActor* Inventory, bool bCheckIsCanAdd, float WaitSeconds, bool bFromBoxContainer, bool bIgnoreDistance);

	// Object: Function MFNPCAI.NPCCharacterAIPickUpInterface.PickUpBoxContainer
	// Flags: [Native|Public]
	// Offset: 0x3ce74c0
	// Params: [ Num(6) Size(0x16) ]
	void PickUpBoxContainer(struct AActor* BoxContainer, bool bCheckIsCanAdd, float InDelayStarttime, float InPickUpInterval, uint8_t ItemIdType, bool IsDiscardIfHas);

	// Object: Function MFNPCAI.NPCCharacterAIPickUpInterface.IsCompletedPickUpBoxContainer
	// Flags: [Native|Public]
	// Offset: 0x3ce7464
	// Params: [ Num(1) Size(0x1) ]
	bool IsCompletedPickUpBoxContainer();

	// Object: Function MFNPCAI.NPCCharacterAIPickUpInterface.IsCanAddUnitInventory
	// Flags: [Native|Public]
	// Offset: 0x3ce72b8
	// Params: [ Num(1) Size(0x1) ]
	bool IsCanAddUnitInventory();

	// Object: Function MFNPCAI.NPCCharacterAIPickUpInterface.HasPlacePickUpInventoryIml
	// Flags: [Native|Public]
	// Offset: 0x3ce72f8
	// Params: [ Num(2) Size(0x9) ]
	bool HasPlacePickUpInventoryIml(struct AActor* Inventory);

	// Object: Function MFNPCAI.NPCCharacterAIPickUpInterface.GetVehicleCanPickUpInVolume
	// Flags: [Native|Public|HasOutParms]
	// Offset: 0x3ce78b4
	// Params: [ Num(4) Size(0x19) ]
	bool GetVehicleCanPickUpInVolume(struct AVolume* Volume, struct AActor*& VehicleKey, struct AActor*& Vehicle);

	// Object: Function MFNPCAI.NPCCharacterAIPickUpInterface.GetNearestInventoryCanPickUp
	// Flags: [Native|Public]
	// Offset: 0x3ce7bb4
	// Params: [ Num(4) Size(0x18) ]
	struct AActor* GetNearestInventoryCanPickUp(float InRange, float PathLength, bool bIgnoreChecked);

	// Object: Function MFNPCAI.NPCCharacterAIPickUpInterface.GetInventorysCanPickUp
	// Flags: [Native|Public|HasOutParms]
	// Offset: 0x3ce7a10
	// Params: [ Num(5) Size(0x21) ]
	bool GetInventorysCanPickUp(float InRange, float PathLength, bool bIgnoreChecked, struct TArray<struct AActor*>& OutInventorys);

	// Object: Function MFNPCAI.NPCCharacterAIPickUpInterface.CancelPickUpInventory
	// Flags: [Native|Public]
	// Offset: 0x3ce76bc
	// Params: [ Num(0) Size(0x0) ]
	void CancelPickUpInventory();
};

// Object: Class MFNPCAI.NPCCharacterAIPoseCacheInterface
// Size: 0x28 (Inherited: 0x28)
struct INPCCharacterAIPoseCacheInterface : IInterface
{
	DEFINE_UE_CLASS_HELPERS(INPCCharacterAIPoseCacheInterface, "NPCCharacterAIPoseCacheInterface")

	// Object: Function MFNPCAI.NPCCharacterAIPoseCacheInterface.GetPoseAIType
	// Flags: [Native|Public]
	// Offset: 0x3ce7dd4
	// Params: [ Num(1) Size(0x1) ]
	EAIPose GetPoseAIType();

	// Object: Function MFNPCAI.NPCCharacterAIPoseCacheInterface.GetLeanAIType
	// Flags: [Native|Public]
	// Offset: 0x3ce7d98
	// Params: [ Num(1) Size(0x1) ]
	EAILeanType GetLeanAIType();
};

// Object: Class MFNPCAI.NPCCharacterAIPoseInterface
// Size: 0x28 (Inherited: 0x28)
struct INPCCharacterAIPoseInterface : IInterface
{
	DEFINE_UE_CLASS_HELPERS(INPCCharacterAIPoseInterface, "NPCCharacterAIPoseInterface")

	// Object: Function MFNPCAI.NPCCharacterAIPoseInterface.UpdateDSPose
	// Flags: [Native|Public]
	// Offset: 0x3ce8b68
	// Params: [ Num(1) Size(0x1) ]
	bool UpdateDSPose();

	// Object: Function MFNPCAI.NPCCharacterAIPoseInterface.UpdateDSLeanPose
	// Flags: [Native|Public]
	// Offset: 0x3ce8b28
	// Params: [ Num(1) Size(0x1) ]
	bool UpdateDSLeanPose();

	// Object: Function MFNPCAI.NPCCharacterAIPoseInterface.TryProne
	// Flags: [Native|Public]
	// Offset: 0x3ce851c
	// Params: [ Num(1) Size(0x1) ]
	bool TryProne();

	// Object: Function MFNPCAI.NPCCharacterAIPoseInterface.TryLean
	// Flags: [Native|Public]
	// Offset: 0x3ce7ef0
	// Params: [ Num(3) Size(0x3) ]
	bool TryLean(EAILeanType NewLeanType, bool bCheckBlockByWall);

	// Object: Function MFNPCAI.NPCCharacterAIPoseInterface.TryJump
	// Flags: [Native|Public|HasOutParms|HasDefaults]
	// Offset: 0x3ce8198
	// Params: [ Num(4) Size(0x12) ]
	bool TryJump(const struct FVector& InJumpDirection, float InJumpSpeed, bool bUseNowVelocity);

	// Object: Function MFNPCAI.NPCCharacterAIPoseInterface.TryCrouchSliding
	// Flags: [Native|Public]
	// Offset: 0x3ce832c
	// Params: [ Num(1) Size(0x1) ]
	bool TryCrouchSliding();

	// Object: Function MFNPCAI.NPCCharacterAIPoseInterface.TryCrouch
	// Flags: [Native|Public]
	// Offset: 0x3ce8424
	// Params: [ Num(1) Size(0x1) ]
	bool TryCrouch();

	// Object: Function MFNPCAI.NPCCharacterAIPoseInterface.TryCoverShootFiring
	// Flags: [Native|Public]
	// Offset: 0x3ce8614
	// Params: [ Num(2) Size(0x2) ]
	bool TryCoverShootFiring(bool bFiring);

	// Object: Function MFNPCAI.NPCCharacterAIPoseInterface.TryCoverShoot
	// Flags: [Native|Public]
	// Offset: 0x3ce87d0
	// Params: [ Num(4) Size(0x4) ]
	bool TryCoverShoot(bool bCoverShoot, bool bCrouch, bool bLeft);

	// Object: Function MFNPCAI.NPCCharacterAIPoseInterface.TryCasualStandingPose
	// Flags: [Native|Public]
	// Offset: 0x3ce896c
	// Params: [ Num(2) Size(0x2) ]
	bool TryCasualStandingPose(bool bCasual);

	// Object: Function MFNPCAI.NPCCharacterAIPoseInterface.StopCrouchSliding
	// Flags: [Native|Public]
	// Offset: 0x3ce8030
	// Params: [ Num(0) Size(0x0) ]
	void StopCrouchSliding();

	// Object: Function MFNPCAI.NPCCharacterAIPoseInterface.SetPoseToProne
	// Flags: [Native|Public]
	// Offset: 0x3ce8464
	// Params: [ Num(1) Size(0x1) ]
	void SetPoseToProne(bool bNewProne);

	// Object: Function MFNPCAI.NPCCharacterAIPoseInterface.SetPoseToCrouch
	// Flags: [Native|Public]
	// Offset: 0x3ce836c
	// Params: [ Num(1) Size(0x1) ]
	void SetPoseToCrouch(bool bNewCrouch);

	// Object: Function MFNPCAI.NPCCharacterAIPoseInterface.SetIsCoverShootFiring
	// Flags: [Native|Public]
	// Offset: 0x3ce8718
	// Params: [ Num(1) Size(0x1) ]
	void SetIsCoverShootFiring(bool bCoverShoot);

	// Object: Function MFNPCAI.NPCCharacterAIPoseInterface.SetIsCasual
	// Flags: [Native|Public]
	// Offset: 0x3ce8a70
	// Params: [ Num(1) Size(0x1) ]
	void SetIsCasual(bool bCasual);

	// Object: Function MFNPCAI.NPCCharacterAIPoseInterface.SetAIPose
	// Flags: [Native|Public]
	// Offset: 0x3ce8be4
	// Params: [ Num(1) Size(0x1) ]
	void SetAIPose(EAIPose InAIPose);

	// Object: Function MFNPCAI.NPCCharacterAIPoseInterface.IsJumping
	// Flags: [Native|Public]
	// Offset: 0x3ce8158
	// Params: [ Num(1) Size(0x1) ]
	bool IsJumping();

	// Object: Function MFNPCAI.NPCCharacterAIPoseInterface.IsInTransitionAnimation
	// Flags: [Native|Public|Const]
	// Offset: 0x3ce7e18
	// Params: [ Num(1) Size(0x1) ]
	bool IsInTransitionAnimation();

	// Object: Function MFNPCAI.NPCCharacterAIPoseInterface.IsCrouchSliding
	// Flags: [Native|Public]
	// Offset: 0x3ce82ec
	// Params: [ Num(1) Size(0x1) ]
	bool IsCrouchSliding();

	// Object: Function MFNPCAI.NPCCharacterAIPoseInterface.GetUp
	// Flags: [Native|Public]
	// Offset: 0x3ce855c
	// Params: [ Num(1) Size(0x1) ]
	void GetUp(bool bWithCheck);

	// Object: Function MFNPCAI.NPCCharacterAIPoseInterface.GetLeanType
	// Flags: [Native|Public]
	// Offset: 0x3ce7eb4
	// Params: [ Num(1) Size(0x1) ]
	EAILeanType GetLeanType();

	// Object: Function MFNPCAI.NPCCharacterAIPoseInterface.GetIsCoverShootFiring
	// Flags: [Native|Public|Const]
	// Offset: 0x3ce86d8
	// Params: [ Num(1) Size(0x1) ]
	bool GetIsCoverShootFiring();

	// Object: Function MFNPCAI.NPCCharacterAIPoseInterface.GetIsCoverShoot
	// Flags: [Native|Public|Const]
	// Offset: 0x3ce892c
	// Params: [ Num(1) Size(0x1) ]
	bool GetIsCoverShoot();

	// Object: Function MFNPCAI.NPCCharacterAIPoseInterface.GetIsCasual
	// Flags: [Native|Public|Const]
	// Offset: 0x3ce8a30
	// Params: [ Num(1) Size(0x1) ]
	bool GetIsCasual();

	// Object: Function MFNPCAI.NPCCharacterAIPoseInterface.GetCrouchSlidingStartTime
	// Flags: [Native|Public]
	// Offset: 0x3ce7ff4
	// Params: [ Num(1) Size(0x4) ]
	float GetCrouchSlidingStartTime();

	// Object: Function MFNPCAI.NPCCharacterAIPoseInterface.GetAIPose
	// Flags: [Native|Public|Const]
	// Offset: 0x3ce8ba8
	// Params: [ Num(1) Size(0x1) ]
	EAIPose GetAIPose();

	// Object: Function MFNPCAI.NPCCharacterAIPoseInterface.CheckLeanIfBlock
	// Flags: [Native|Public]
	// Offset: 0x3ce7e98
	// Params: [ Num(0) Size(0x0) ]
	void CheckLeanIfBlock();

	// Object: Function MFNPCAI.NPCCharacterAIPoseInterface.CanProneInCurrentEnvironment
	// Flags: [Native|Public]
	// Offset: 0x3ce7e58
	// Params: [ Num(1) Size(0x1) ]
	bool CanProneInCurrentEnvironment();

	// Object: Function MFNPCAI.NPCCharacterAIPoseInterface.CanJump
	// Flags: [Native|Public|HasOutParms|HasDefaults]
	// Offset: 0x3ce804c
	// Params: [ Num(3) Size(0x11) ]
	bool CanJump(const struct FVector& InJumpDirection, float InJumpSpeed);
};

// Object: Class MFNPCAI.NPCCharacterAISenseAbilityInterface
// Size: 0x28 (Inherited: 0x28)
struct INPCCharacterAISenseAbilityInterface : IInterface
{
	DEFINE_UE_CLASS_HELPERS(INPCCharacterAISenseAbilityInterface, "NPCCharacterAISenseAbilityInterface")

	// Object: Function MFNPCAI.NPCCharacterAISenseAbilityInterface.IsInGasArea
	// Flags: [Native|Public]
	// Offset: 0x3ce9100
	// Params: [ Num(1) Size(0x1) ]
	bool IsInGasArea();

	// Object: Function MFNPCAI.NPCCharacterAISenseAbilityInterface.IsImmuneTearGas
	// Flags: [Native|Public]
	// Offset: 0x3ce90c0
	// Params: [ Num(1) Size(0x1) ]
	bool IsImmuneTearGas();

	// Object: Function MFNPCAI.NPCCharacterAISenseAbilityInterface.AIProcessOnFlashStrobe
	// Flags: [Native|Public]
	// Offset: 0x3ce8e04
	// Params: [ Num(1) Size(0x4) ]
	void AIProcessOnFlashStrobe(float Level);

	// Object: Function MFNPCAI.NPCCharacterAISenseAbilityInterface.AIProcessOnEnterInventoryFlash
	// Flags: [Native|Public|HasDefaults]
	// Offset: 0x3ce8eb4
	// Params: [ Num(5) Size(0x14) ]
	void AIProcessOnEnterInventoryFlash(bool bInSevere, bool bInModerate, bool bInMild, float CharFaceAngleDegree, struct FVector SocketLoc);

	// Object: Function MFNPCAI.NPCCharacterAISenseAbilityInterface.AIGetFlashBurnValue
	// Flags: [Native|Public]
	// Offset: 0x3ce9084
	// Params: [ Num(1) Size(0x4) ]
	float AIGetFlashBurnValue();
};

// Object: Class MFNPCAI.NPCCharacterAISoundInterface
// Size: 0x28 (Inherited: 0x28)
struct INPCCharacterAISoundInterface : IInterface
{
	DEFINE_UE_CLASS_HELPERS(INPCCharacterAISoundInterface, "NPCCharacterAISoundInterface")

	// Object: Function MFNPCAI.NPCCharacterAISoundInterface.PlaySoundAtLocation
	// Flags: [Native|Public|HasDefaults]
	// Offset: 0x3ce9234
	// Params: [ Num(4) Size(0x28) ]
	void PlaySoundAtLocation(struct UObject* WorldContextObject, struct UAkAudioEvent* AudioEvent, struct FVector Location, struct FRotator Rotation);

	// Object: Function MFNPCAI.NPCCharacterAISoundInterface.PlayAISoundByType
	// Flags: [Native|Public]
	// Offset: 0x3ce9184
	// Params: [ Num(1) Size(0x1) ]
	void PlayAISoundByType(EAISoundType CurrType);
};

// Object: Class MFNPCAI.NPCCharacterAITakeCoverInterface
// Size: 0x28 (Inherited: 0x28)
struct INPCCharacterAITakeCoverInterface : IInterface
{
	DEFINE_UE_CLASS_HELPERS(INPCCharacterAITakeCoverInterface, "NPCCharacterAITakeCoverInterface")

	// Object: Function MFNPCAI.NPCCharacterAITakeCoverInterface.StopToTakeCover
	// Flags: [Native|Public]
	// Offset: 0x3ce93e8
	// Params: [ Num(0) Size(0x0) ]
	void StopToTakeCover();

	// Object: Function MFNPCAI.NPCCharacterAITakeCoverInterface.IsTakingCover
	// Flags: [Native|Public]
	// Offset: 0x3ce93a8
	// Params: [ Num(1) Size(0x1) ]
	bool IsTakingCover();

	// Object: Function MFNPCAI.NPCCharacterAITakeCoverInterface.BeginToTakeCoverCrouch
	// Flags: [Native|Public]
	// Offset: 0x3ce9404
	// Params: [ Num(0) Size(0x0) ]
	void BeginToTakeCoverCrouch();

	// Object: Function MFNPCAI.NPCCharacterAITakeCoverInterface.BeginToTakeCover
	// Flags: [Native|Public]
	// Offset: 0x3ce9420
	// Params: [ Num(0) Size(0x0) ]
	void BeginToTakeCover();
};

// Object: Class MFNPCAI.NPCCharacterAITeamRescueInterface
// Size: 0x28 (Inherited: 0x28)
struct INPCCharacterAITeamRescueInterface : IInterface
{
	DEFINE_UE_CLASS_HELPERS(INPCCharacterAITeamRescueInterface, "NPCCharacterAITeamRescueInterface")

	// Object: Function MFNPCAI.NPCCharacterAITeamRescueInterface.StopRescueTeammate
	// Flags: [Native|Public]
	// Offset: 0x3ce9450
	// Params: [ Num(0) Size(0x0) ]
	void StopRescueTeammate();

	// Object: Function MFNPCAI.NPCCharacterAITeamRescueInterface.RescueDBNOTeammate
	// Flags: [Native|Public]
	// Offset: 0x3ce94ac
	// Params: [ Num(2) Size(0x9) ]
	bool RescueDBNOTeammate(struct AActor* InTarget);

	// Object: Function MFNPCAI.NPCCharacterAITeamRescueInterface.GetNearestDBNOTeammate
	// Flags: [Native|Public]
	// Offset: 0x3ce9568
	// Params: [ Num(2) Size(0x10) ]
	struct AActor* GetNearestDBNOTeammate(float InRange);

	// Object: Function MFNPCAI.NPCCharacterAITeamRescueInterface.GetIsRescuingTeammate
	// Flags: [Native|Public]
	// Offset: 0x3ce946c
	// Params: [ Num(1) Size(0x1) ]
	bool GetIsRescuingTeammate();
};

// Object: Class MFNPCAI.NPCCharacterAITurnInterface
// Size: 0x28 (Inherited: 0x28)
struct INPCCharacterAITurnInterface : IInterface
{
	DEFINE_UE_CLASS_HELPERS(INPCCharacterAITurnInterface, "NPCCharacterAITurnInterface")

	// Object: Function MFNPCAI.NPCCharacterAITurnInterface.LookToPoint
	// Flags: [Native|Public|HasOutParms|HasDefaults]
	// Offset: 0x3ce9820
	// Params: [ Num(4) Size(0x15) ]
	void LookToPoint(const struct FVector& Point, float RotateSpeedInDegree, float AcceleratedSpeedInDegree, bool bQuickly);

	// Object: Function MFNPCAI.NPCCharacterAITurnInterface.LookToMovingDirection
	// Flags: [Native|Public]
	// Offset: 0x3ce9734
	// Params: [ Num(2) Size(0x8) ]
	void LookToMovingDirection(float RotateSpeedInDegree, float AcceleratedSpeedInDegree);

	// Object: Function MFNPCAI.NPCCharacterAITurnInterface.LockLookToPoint
	// Flags: [Native|Public]
	// Offset: 0x3ce9684
	// Params: [ Num(1) Size(0x4) ]
	void LockLookToPoint(float LockTime);

	// Object: Function MFNPCAI.NPCCharacterAITurnInterface.IsTurning
	// Flags: [Native|Public]
	// Offset: 0x3ce99d8
	// Params: [ Num(1) Size(0x1) ]
	bool IsTurning();

	// Object: Function MFNPCAI.NPCCharacterAITurnInterface.GetActualActorTurnSpeed
	// Flags: [Native|Public]
	// Offset: 0x3ce999c
	// Params: [ Num(1) Size(0x4) ]
	float GetActualActorTurnSpeed();
};

// Object: Class MFNPCAI.NPCCharacterHealthInterface
// Size: 0x28 (Inherited: 0x28)
struct INPCCharacterHealthInterface : IInterface
{
	DEFINE_UE_CLASS_HELPERS(INPCCharacterHealthInterface, "NPCCharacterHealthInterface")

	// Object: Function MFNPCAI.NPCCharacterHealthInterface.SetHealthMax
	// Flags: [Native|Public]
	// Offset: 0x3cebc3c
	// Params: [ Num(2) Size(0x10) ]
	void SetHealthMax(float Value, struct AActor* Instigator);

	// Object: Function MFNPCAI.NPCCharacterHealthInterface.SetHealth
	// Flags: [Native|Public]
	// Offset: 0x3cebd68
	// Params: [ Num(2) Size(0x10) ]
	void SetHealth(float Value, struct AActor* Instigator);

	// Object: Function MFNPCAI.NPCCharacterHealthInterface.GetHealthMax
	// Flags: [Native|Public]
	// Offset: 0x3cebc00
	// Params: [ Num(1) Size(0x4) ]
	float GetHealthMax();

	// Object: Function MFNPCAI.NPCCharacterHealthInterface.GetHealth
	// Flags: [Native|Public]
	// Offset: 0x3cebd2c
	// Params: [ Num(1) Size(0x4) ]
	float GetHealth();
};

// Object: Class MFNPCAI.NPCCharacterTakeDamageInterface
// Size: 0x28 (Inherited: 0x28)
struct INPCCharacterTakeDamageInterface : IInterface
{
	DEFINE_UE_CLASS_HELPERS(INPCCharacterTakeDamageInterface, "NPCCharacterTakeDamageInterface")

	// Object: Function MFNPCAI.NPCCharacterTakeDamageInterface.TakeDamage
	// Flags: [Native|Public|HasOutParms]
	// Offset: 0x3cebe60
	// Params: [ Num(5) Size(0x2C) ]
	float TakeDamage(float DamageAmount, const struct FDamageEvent& DamageEvent, struct AController* EventInstigator, struct AActor* DamageCauser);
};

// Object: Class MFNPCAI.NPCDroneCharacterInterface
// Size: 0x28 (Inherited: 0x28)
struct INPCDroneCharacterInterface : IInterface
{
	DEFINE_UE_CLASS_HELPERS(INPCDroneCharacterInterface, "NPCDroneCharacterInterface")

	// Object: Function MFNPCAI.NPCDroneCharacterInterface.IsBroken
	// Flags: [Native|Public]
	// Offset: 0x3cebffc
	// Params: [ Num(1) Size(0x1) ]
	bool IsBroken();

	// Object: Function MFNPCAI.NPCDroneCharacterInterface.GetCharacterOwner
	// Flags: [Native|Public]
	// Offset: 0x3cec078
	// Params: [ Num(1) Size(0x8) ]
	struct ACharacter* GetCharacterOwner();

	// Object: Function MFNPCAI.NPCDroneCharacterInterface.GetBindInventoryItemID
	// Flags: [Native|Public]
	// Offset: 0x3cec03c
	// Params: [ Num(1) Size(0x8) ]
	uint64_t GetBindInventoryItemID();
};

// Object: Class MFNPCAI.NPCGrassIdentificationVolume
// Size: 0x338 (Inherited: 0x338)
struct ANPCGrassIdentificationVolume : ATriggerVolume
{
	DEFINE_UE_CLASS_HELPERS(ANPCGrassIdentificationVolume, "NPCGrassIdentificationVolume")
};

// Object: Class MFNPCAI.SGActorFactionCompInterface
// Size: 0x28 (Inherited: 0x28)
struct ISGActorFactionCompInterface : IInterface
{
	DEFINE_UE_CLASS_HELPERS(ISGActorFactionCompInterface, "SGActorFactionCompInterface")
};

// Object: Class MFNPCAI.SGFactionInterface
// Size: 0x28 (Inherited: 0x28)
struct ISGFactionInterface : IInterface
{
	DEFINE_UE_CLASS_HELPERS(ISGFactionInterface, "SGFactionInterface")
};

// Object: Class MFNPCAI.SGTeamInterface
// Size: 0x28 (Inherited: 0x28)
struct ISGTeamInterface : IInterface
{
	DEFINE_UE_CLASS_HELPERS(ISGTeamInterface, "SGTeamInterface")

	// Object: Function MFNPCAI.SGTeamInterface.RemoveToFriendlyTeam
	// Flags: [Native|Public]
	// Offset: 0x3cec35c
	// Params: [ Num(1) Size(0x4) ]
	void RemoveToFriendlyTeam(int32_t InTeamIndex);

	// Object: Function MFNPCAI.SGTeamInterface.RemoveFromTeam
	// Flags: [Native|Public]
	// Offset: 0x3cec4bc
	// Params: [ Num(2) Size(0x9) ]
	bool RemoveFromTeam(struct AActor* C);

	// Object: Function MFNPCAI.SGTeamInterface.IsFriendlyTeam
	// Flags: [Native|Public]
	// Offset: 0x3cec2a0
	// Params: [ Num(2) Size(0x5) ]
	bool IsFriendlyTeam(int32_t InTeamIndex);

	// Object: Function MFNPCAI.SGTeamInterface.GetTeamMembers
	// Flags: [Native|Public|Const]
	// Offset: 0x3cec634
	// Params: [ Num(1) Size(0x10) ]
	struct TArray<struct AActor*> GetTeamMembers();

	// Object: Function MFNPCAI.SGTeamInterface.GetFriendlyTeamIndexs
	// Flags: [Native|Public|HasOutParms]
	// Offset: 0x3cec0ec
	// Params: [ Num(1) Size(0x10) ]
	void GetFriendlyTeamIndexs(struct TArray<int32_t>& OutFriendTeamIndexs);

	// Object: Function MFNPCAI.SGTeamInterface.GetFactionComp
	// Flags: [Native|Public]
	// Offset: 0x3cec264
	// Params: [ Num(1) Size(0x8) ]
	struct UActorComponent* GetFactionComp();

	// Object: Function MFNPCAI.SGTeamInterface.FactionChanged
	// Flags: [Native|Public]
	// Offset: 0x3cec1b4
	// Params: [ Num(1) Size(0x1) ]
	void FactionChanged(uint8_t NewFactionType);

	// Object: Function MFNPCAI.SGTeamInterface.AddToTeam
	// Flags: [Native|Public]
	// Offset: 0x3cec578
	// Params: [ Num(2) Size(0x9) ]
	bool AddToTeam(struct AActor* C);

	// Object: Function MFNPCAI.SGTeamInterface.AddToFriendlyTeam
	// Flags: [Native|Public]
	// Offset: 0x3cec40c
	// Params: [ Num(1) Size(0x4) ]
	void AddToFriendlyTeam(int32_t InTeamIndex);
};

} // namespace SDK
