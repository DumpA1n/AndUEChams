#pragma once

#include "../CoreUObject_classes.hpp"
#include "AkAudio.hpp"
#include "Engine.hpp"
#include "GameCore.hpp"
#include "MovieScene.hpp"

namespace SDK
{

// Package: GPAudioRuntime
// Enums: 49
// Structs: 109
// Classes: 86

struct AActor;
struct ACHARACTER;
enum class EAkAcousticPortalState : uint8_t;
enum class EAkMultiPositionType : uint8_t;
enum class EPerfGearQualityLevel : uint8_t;
enum class EPhysicalSurface : uint8_t;
struct FHitResult;
struct UAkAcousticTexture;
struct UAkAudioEvent;
struct UAkAuxBus;
struct UAkRoomComponent;
struct UAkStateValue;
struct UAkSurfaceReflectorSetComponent;
struct UAkSwitchValue;
struct UAnimNotify;
struct UAnimSequenceBase;
struct UArrowComponent;
struct UCurveFloat;
struct UDataTable;
struct UModel;
struct UMovieSceneSection;
struct UPhysicalMaterial;
struct UProceduralMeshComponent;
struct USceneComponent;
struct USkeletalMeshComponent;
struct USplineComponent;
struct UStaticMesh;
struct UTextRenderComponent;
struct UWorld;
struct FAudioPriorityWeaponDebugSingleInfo;
struct FGPAudioFuturePlayingID;
struct FDebugCylinderHolder;
struct FFootStepAudioSequenceDataRow;
struct FGameAkDebugInfo;
struct FGameAkPlayingItem;
struct FGameAkInfo;
struct FPresetIdAndArea;
struct FSpatialAudioOctree;
struct FAudioOctreeNode;
struct FGameAudioVolumeBounding;
struct FGameAudioGeometry_Cylinder;
struct FGameAudioGeometry_OBB;
struct FGameAudioGeometry;
struct FLoudnessBenchmarkConfig;
struct FAudioMiscConfigRow;
struct FHearingAttenuationBuffRow;
struct FEchoEllipseDataRow;
struct FMapEchoConfigRow;
struct FSpatialVolumeDisableRow;
struct FFootStepCompanionRow;
struct FGPAAttachEmitterInfo;
struct FAudioAkCompManagerTickFunction;
struct FGPAkCompPool;
struct FGPAkCompPoolElement;
struct FGPAudioColliderNodeInfo;
struct FOrientedBoxInfo;
struct FGPAudioAnimNotifyFootStepTypeConfig;
struct FGPAudioMIDIEventAsset;
struct FGPAudio3PFireEvent;
struct FGPAudioMIDIEvent;
struct FGPNameKeyAudio;
struct FGPAudioLoopEvent;
struct FGPAudioEventSequenceBodyTypeList;
struct FGPAudioEventSequenceList;
struct FGPAudioTypeEventSequence;
struct FGPAudioEventTimeDelayConfig;
struct FGPAudioEventBodyTypeList;
struct FGPAudioEventList;
struct FGPAudioTypeEvent;
struct FAkEventContainer;
struct FGPAudioLinkEvent;
struct FGPLongAudioPlayingRecord;
struct FGPDecodedCacheEvent;
struct FGPAudioEventLimitRow;
struct FGPAudioEventModeLimit;
struct FGPAudioEventTypeLimit;
struct FGPAudioPriorityParam;
struct FPlayingAudioTargetParam;
struct FGPAudioFirePriorityItem;
struct FGPAudioFootStepProxyRow;
struct FAudio3PFireLoopPriorityManagerConfig;
struct FGPFootStepTraceIntervalCfg;
struct FGPAttenuationShadowAkSets;
struct FGPGameplayAudioHDRConfig;
struct FGPGameplayAudioFeatures;
struct FGPAudioHeadSetRow;
struct FOverlapAudioEventSet;
struct FFoliageAudioInstanceConfig;
struct FGPComponentSignificanceConfig;
struct FGPALODFeatures;
struct FMusicPlayerDataRow;
struct FPlaylistConfig;
struct FGPAudioRadioChannelRow;
struct FGPAudioReverbSceneConfig;
struct FGPAudioReverbConfig;
struct FGPABakeSubZone;
struct FGPADoorWinZone;
struct FGPAOBBBakeZone;
struct FGPACylinderBakeZone;
struct FGPIndex24V8;
struct FGPAOpenEarlyReflectionConfig;
struct FGPAudioRTPCPair;
struct FGPAudioConditionRTPC;
struct FGPAudioShadowGameAkKey;
struct FGPAudioServerNotifierSpeedInfo;
struct FGPAColliderConfig;
struct FGPADynamicReverbConfig;
struct FGPAMeteringCallbackConfig;
struct FGPAFrameControlConfig;
struct FGPANameWithDescribe;
struct FGPAttenuationScale;
struct FGPAudioEventAdditionalFunction;
struct FGPAudioActorDebugItem;
struct FGPAudioSysDeviceInfo;
struct FGPAudioTypeConfig;
struct FGPScatteredAudioRow;
struct FGPAudioReverbPreset;
struct FGPAudioGunTailPreset;
struct FGPAttenuationScaleConfig;
struct FGPAudioHDRConfigRow;
struct FGPClippedWeaponFakeEventRecord;
struct FPVSAudioActorInfo;
struct FGPClippedWeaponFakeEventNeededInfo;
struct FGPClippedWeaponFakeDistInfo;
struct FGPAudioPOIArea;
struct FAudioGraphPortal;
struct FAudioGraphVolume;
struct FGPAudioCompositeParam;
struct FGPAudioCompositeConfig;
struct FGPLoopEventList;
struct FGPEndSubNamePair;
struct FGPLoopEndPair;
struct FGPAudioEventTrackKey;
struct FMovieSceneGPAudioEventTemplate;
struct FFloorVibrationAudioRow;
struct FPhysicalMaterialAudioDataRow;
struct FCharacterPreLoadItem;
struct FCharacterPreLoadListInEditor;
struct UAnimNotify_GPAudioBase;
struct UAnimNotifyState_AudioEventBase;
struct UAnimNotifyState_GPAudioEvent;
struct UAudioCylinderBuilder;
struct AAudioCylinderDebugActor;
struct UAudioCylinderDebugBuilder;
struct UEmissiveCubeComponent;
struct AGameAudioVolume;
struct AGameAcousticPortal;
struct UGameAkComponent;
struct AGameAreaAudioVolume;
struct AGameAudioColliderVolume;
struct UAudioGraphFunctions;
struct AGameAudioDiffractionVolume;
struct AGameAudioDetailVolumeForEditor;
struct UGameAudioOpenEarlyReflection;
struct UGameAudioOpenEarlyReflection3p;
struct UGameAudioPointEmitter;
struct UGameAudioPolygonEmitter;
struct UGameAudioRiverEmitter;
struct AGameAudioVolumeEmitter;
struct AGameAudioSlapbackEmitter;
struct AGameReverbVolume;
struct UGameSpatialAudioManager;
struct AGameSpatialAudioVolume;
struct AGameSpatialAudioVolumeRoot;
struct UGameStaticAkComponent;
struct UGPALateReverbComponent;
struct UGPAMultiEmitterComponent;
struct UGameAkComponentPool;
struct UGPAudioAnimationNotifyPlayer;
struct UGPAudioBPInstanceProxy;
struct UGPAudioColliderDataAsset;
struct UGPAudioDataAssetManager;
struct UGPAudioDebugSettings;
struct UGPAudioType;
struct UGPAudioEventAKLink;
struct UGPAudioEventAsset;
struct UGPAudioAuxBus;
struct UGPAudioEventCache;
struct UGPAudioPriorityMethod;
struct UGPAudioPriorityMethod_FootStep;
struct UGPAudioPriorityMethod_Event;
struct UGPAudioPriorityMethod_Test;
struct UGPAudioEventLimitAsset;
struct UGPAudioEventPriorityAsset;
struct UGPAudioEventLimitGroupAsset;
struct UGPAudioGameplaySettings;
struct UFoliageOverlapAudioDataAsset;
struct UFoliageTypeSetDataAsset;
struct UGPAudioLODSettings;
struct AGPAudioPointEmitter;
struct AGPAudioMultiPointEmitter;
struct UGPAudioMusicPlayer;
struct UGPAudioMusicPlaylist;
struct UGPAudioOverDisBroadcaster;
struct IGPAudioProxyInterface;
struct UGPAudioRadio;
struct UGPAudioReverbSceneDataAsset;
struct UGPAudioReverbSettings;
struct UGPAudioRoomBakeDataAsset;
struct UGPAudioServerNotifier;
struct UGPAudioSettings;
struct UGPAudioSpatialAudioSettings;
struct UGPAudioStatics;
struct UGPClippedActorFakeEventAsset;
struct UGPAudioPresetConfigsDataAsset;
struct UGPConvolutionReverbConfigDataAsset;
struct UGPAudioUserSettings;
struct UGPAudioVehicleCollisionDataAsset;
struct UGPIOSAudioStatics;
struct UGPLoopEndPairAsset;
struct IGameAk;
struct IAkEmitterInterface;
struct UInterpTrackGPAudioEvent;
struct UInterpTrackInstGPAudioEvent;
struct UMovieSceneGPAudioEventSection;
struct UMovieSceneGPAudioTrack;
struct UMovieSceneGPAudioEventTrack;
struct UPhysicalMaterialAudioDataAsset;
struct UPhysicalMaterialAudioSequenceDataAsset;
struct UPhysicalMaterialTireNoiseAsset;
struct UPlay2DAudioBy3DFuncAsset;
struct UPluginAudioSubsystem;
struct UPreloadAudioCfg;
struct UTravelerGameAk;

// Object: Enum GPAudioRuntime.EGPEventCallbackType
enum class EGPEventCallbackType : uint8_t
{
	BeginPlay = 0,
	EndPlay = 1,
	StopWhenLoading = 2,
	PlayFailed = 3,
	AsyncPlayFailed = 4,
	EGPEventCallbackType_MAX = 5
};

// Object: Enum GPAudioRuntime.EGPAnimNotifyType
enum class EGPAnimNotifyType : uint8_t
{
	None = 0,
	GAudio = 1,
	Foot = 2,
	EGPAnimNotifyType_MAX = 3
};

// Object: Enum GPAudioRuntime.EGPGameAudioGeometryType
enum class EGPGameAudioGeometryType : uint8_t
{
	OBB = 0,
	Cylinder = 1,
	EGPGameAudioGeometryType_MAX = 2
};

// Object: Enum GPAudioRuntime.EGameAudioVolumeOutOfPlanType
enum class EGameAudioVolumeOutOfPlanType : uint8_t
{
	PROJECT_ANY = 0,
	PROJECT_NORMAL_PLAN_SEG = 1,
	PROJECT_NORMAL_PLAN_Z = 2,
	SECTOR_XY = 3,
	EGameAudioVolumeOutOfPlanType_MAX = 4
};

// Object: Enum GPAudioRuntime.ESpatialVolumeDisableCondition
enum class ESpatialVolumeDisableCondition : uint8_t
{
	CONDITION_CRACKED_BIG_EVENT = 0,
	CONDITION_CRACKED_BIG_MAX = 1
};

// Object: Enum GPAudioRuntime.EAudioFootStepCompanionPlayCondition
enum class EAudioFootStepCompanionPlayCondition : uint8_t
{
	CONDITION_DEFAULT = 0,
	CONDITION_ABILITY_OVERLOAD = 1,
	CONDITION_ABILITY_BlastShield = 2,
	CONDITION_ABILITY_HeavyRain = 3,
	CONDITION_MAX = 4
};

// Object: Enum GPAudioRuntime.EFaceOperateMode
enum class EFaceOperateMode : uint8_t
{
	Expand = 0,
	Shrink = 1,
	Expand_CollisionCheck = 2,
	Shrink_CollisionCheck = 3,
	EFaceOperateMode_MAX = 4
};

// Object: Enum GPAudioRuntime.EGPAkCompPoolMethod
enum class EGPAkCompPoolMethod : uint8_t
{
	None = 0,
	AutoRelease = 1,
	ManualRelease = 2,
	ManualRelease_OnComplete = 3,
	FreeInPool = 4,
	EGPAkCompPoolMethod_MAX = 5
};

// Object: Enum GPAudioRuntime.EGPAudioDebugPlayFlag
enum class EGPAudioDebugPlayFlag : uint8_t
{
	PLAY_ALL = 0,
	PLAY_ONLY_1P = 1,
	PLAY_ONLY_3P = 2,
	PLAY_ONLY_Live = 3,
	PLAY_MAX = 4
};

// Object: Enum GPAudioRuntime.EGPAudioEventLimitFireType
enum class EGPAudioEventLimitFireType : uint8_t
{
	WP_NORMAL_FIRE = 0,
	WP_SUP_FIRE = 1,
	WP_BULLET_FLY = 2,
	WP_BULLET_CRACK = 3,
	WP_MAX = 4
};

// Object: Enum GPAudioRuntime.EGPAudioEventLimitFootStepType
enum class EGPAudioEventLimitFootStepType : uint8_t
{
	E_FOOT_STEP = 0,
	E_FOOT_STEP_SPRINT = 1,
	E_FOOT_STEP_RUN = 2,
	E_FOOT_STEP_PRONE = 3,
	E_FOOT_STEP_MED = 4,
	E_FOOT_STEP_SLIDETACKLE = 5,
	E_FOOT_MAX = 6
};

// Object: Enum GPAudioRuntime.EGPAudioEventLimitCharGroup
enum class EGPAudioEventLimitCharGroup : uint8_t
{
	Never = 0,
	Player = 1,
	Ally = 2,
	Enemy = 3,
	EGPAudioEventLimitCharGroup_MAX = 4
};

// Object: Enum GPAudioRuntime.EGPAudioEventLimitType
enum class EGPAudioEventLimitType : uint8_t
{
	Never = 0,
	GameObject = 1,
	Event = 2,
	EGPAudioEventLimitType_MAX = 3
};

// Object: Enum GPAudioRuntime.EQuadrantDirection
enum class EQuadrantDirection : uint8_t
{
	EQD_F = 0,
	EQD_L = 1,
	EQD_R = 2,
	EQD_B = 3,
	EQD_MAX = 4
};

// Object: Enum GPAudioRuntime.EBusStateEnum
enum class EBusStateEnum : uint8_t
{
	Inactive = 0,
	WaitingActiveConfirm = 1,
	Active = 2,
	WaitingInactiveConfirm = 3,
	Release = 4,
	EBusStateEnum_MAX = 5
};

// Object: Enum GPAudioRuntime.EMusicLoopType
enum class EMusicLoopType : uint8_t
{
	ELOOP_ONE = 0,
	ELOOP_RANDOM = 1,
	ELOOP_MAX = 2
};

// Object: Enum GPAudioRuntime.EGPAudioAniNotifyType
enum class EGPAudioAniNotifyType : uint8_t
{
	EANI_CHANGLE_CLIP = 0,
	EANI_CHANGLE_1 = 1,
	EANI_CHANGLE_2 = 2,
	EANI_CHANGLE_3 = 3,
	EANI_CHANGLE_4 = 4,
	EANI_CHANGLE_5 = 5,
	EANI_CHANGLE_6 = 6,
	EANI_CHANGLE_7 = 7,
	EANI_CHANGLE_8 = 8,
	EANI_CHANGLE_9 = 9,
	EANI_CHANGLE_10 = 10,
	EANI_CHANGLE_11 = 11,
	EANI_CHANGLE_12 = 12,
	EANI_CHANGLE_13 = 13,
	EANI_CHANGLE_14 = 14,
	EANI_CHANGLE_15 = 15,
	EANI_CHANGLE_16 = 16,
	EANI_CHANGLE_17 = 17,
	EANI_CHANGLE_18 = 18,
	EANI_CHANGLE_19 = 19,
	EANI_CHANGLE_20 = 20,
	EANI_CHANGLE_21 = 21,
	EANI_CHANGLE_22 = 22,
	EANI_CHANGLE_23 = 23,
	EANI_CHANGLE_24 = 24,
	EANI_CHANGLE_25 = 25,
	EANI_CHANGLE_26 = 26,
	EANI_CHANGLE_27 = 27,
	EANI_CHANGLE_28 = 28,
	EANI_CHANGLE_29 = 29,
	EANI_CHANGLE_30 = 30,
	EANI_CHANGLE_31 = 31,
	EANI_CHANGLE_40 = 32,
	EANI_CHANGLE_41 = 33,
	EANI_CHANGLE_42 = 34,
	EANI_CHANGLE_43 = 35,
	EANI_CHANGLE_44 = 36,
	EANI_CHANGLE_45 = 37,
	EANI_CHANGLE_46 = 38,
	EANI_CHANGLE_47 = 39,
	EANI_CHANGLE_48 = 40,
	EANI_CHANGLE_49 = 41,
	EANI_CHANGLE_50 = 42,
	EANI_CHANGLE_51 = 43,
	EANI_CHANGLE_52 = 44,
	EANI_CHANGLE_53 = 45,
	EANI_CHANGLE_54 = 46,
	EANI_CHANGLE_55 = 47,
	EANI_CHANGLE_56 = 48,
	EANI_CHANGLE_57 = 49,
	EANI_CHANGLE_58 = 50,
	EANI_CHANGLE_59 = 51,
	EANI_CHANGLE_60 = 52,
	EANI_CHANGLE_61 = 53,
	EANI_CHANGLE_MAX = 54
};

// Object: Enum GPAudioRuntime.EGPAudioBlueprintType
enum class EGPAudioBlueprintType : uint8_t
{
	None = 0,
	Default = 1,
	Music_OutGame = 2,
	Music_Ingame = 3,
	Character_Voice = 11,
	Character_Breath = 12,
	Character_Action = 13,
	Character_Footstep = 14,
	Character_Skill = 15,
	Character_Prop = 16,
	Character_Rescue = 17,
	Voice_NPC = 31,
	Voice_System = 32,
	Ambience = 41,
	Object_Static = 42,
	Object_Scale = 43,
	Weapon_Action = 61,
	Weapon_Reload = 62,
	Weapon_Fire = 63,
	Weapon_Fire_Sup = 64,
	Weapon_Bullet = 65,
	Explosion = 81,
	Vehicle = 82,
	Drone = 83,
	EGPAudioBlueprintType_MAX = 84
};

// Object: Enum GPAudioRuntime.EGPAudioFootSoundType
enum class EGPAudioFootSoundType : uint8_t
{
	EACTION_DEFAULT = 0,
	EACTION_FOOTSTEP_RUN = 1,
	EACTION_FOOTSTEP_WALK = 2,
	EACTION_FOOTSTEP_AI_WALK = 3,
	EACTION_FOOTSTEP_SPRINT = 4,
	EACTION_FOOTSTEP_PRONE = 5,
	EACTION_FOOTSTEP_Crouch_Run = 6,
	EACTION_FOOTSTEP_Crouch_Walk = 7,
	EACTION_FOOTSTEP_AI_Crouch_Walk = 8,
	EACTION_FOOTSTEP_JUMP = 9,
	EACTION_FOOTSTEP_BodyFall = 10,
	EACTION_FOOTSTEP_LandHigh = 11,
	EACTION_FOOTSTEP_LandMedium = 12,
	EACTION_FOOTSTEP_LandLow = 13,
	EACTION_FOOTSTEP_LandDie = 14,
	EACTION_FOOTSTEP_Shuffle = 15,
	EACTION_FOOTSTEP_SPRINT_STOP = 16,
	EACTION_FOOTSTEP_FRACTURE_WALK = 17,
	EACTION_FOOTSTEP_FRACTURE_RUN = 18,
	EACTION_FOOTSTEP_HandTouch_High = 19,
	EACTION_FOOTSTEP_HandTouch_Low = 20,
	EACTION_FOOTSTEP_SLIDETACKLE = 21,
	EACTION_FOOTSTEP_SLIDETACKLE_END = 22,
	EACTION_FOOTSTEP_DiveStart = 23,
	EACTION_FOOTSTEP_DiveEnd = 24,
	EACTION_FOOTSTEP_SwimmingStart = 25,
	EACTION_FOOTSTEP_Swimming = 26,
	EACTION_FOOTSTEP_SwimmingFast = 27,
	EACTION_FOOTSTEP_SwimmingBack = 28,
	EACTION_FOOTSTEP_SwimmingTreading = 29,
	EACTION_FOOTSTEP_SwimmingEnd = 30,
	EACTION_FOOTSTEP_SwimmingTreadingInsweep = 31,
	EACTION_FOOTSTEP_SwimmingTurn = 32,
	EACTION_FOOTSTEP_SupinedOrFrogLegs = 33,
	EACTION_MAX = 34
};

// Object: Enum GPAudioRuntime.EGPAudioFootSoundBodyType
enum class EGPAudioFootSoundBodyType : uint8_t
{
	Default = 0,
	Male = 1,
	Female = 2,
	FatGuy = 3,
	Crocodile = 4,
	EGPAudioFootSoundBodyType_MAX = 5
};

// Object: Enum GPAudioRuntime.ERadioCuttingType
enum class ERadioCuttingType : uint8_t
{
	ERANGE_PLAY = 0,
	EALWAYS_PLAY = 1,
	ERadioCuttingType_MAX = 2
};

// Object: Enum GPAudioRuntime.ERadioChannelLoopType
enum class ERadioChannelLoopType : uint8_t
{
	ELOOP_RANDOM = 0,
	ELOOP_SEQUENCE = 1,
	ELOOP_ONE = 2,
	EONE_SEQUENCE = 3,
	ELOOP_PRESET = 4,
	ERadioChannelLoopType_MAX = 5
};

// Object: Enum GPAudioRuntime.EGPAudioReverbType
enum class EGPAudioReverbType : uint8_t
{
	Default = 0,
	Room = 1,
	Pipe = 2,
	HalfOpen = 3,
	Alley = 4,
	OpenField = 5,
	EGPAudioReverbType_MAX = 6
};

// Object: Enum GPAudioRuntime.EGPABakeSubZoneType
enum class EGPABakeSubZoneType : uint8_t
{
	AABB = 0,
	OBB = 1,
	CYLINDER = 2,
	EGPABakeSubZoneType_MAX = 3
};

// Object: Enum GPAudioRuntime.EGPAudioRoomBakeDataType
enum class EGPAudioRoomBakeDataType : uint8_t
{
	S_ARRAY_DS_MAP = 0,
	RUN_LENGTH_COMPRESS = 1,
	CELL_INDEX_INONE = 2,
	CELL_INDEX_INONE_SET = 3,
	CELL_INDEX_MAP = 4,
	EGPAudioRoomBakeDataType_MAX = 5
};

// Object: Enum GPAudioRuntime.EGPARoomBakeInterpolationType
enum class EGPARoomBakeInterpolationType : uint8_t
{
	NONE = 0,
	RANGE_DIS_WEIGHT = 1,
	AVG_RANGE = 2,
	EGPARoomBakeInterpolationType_MAX = 3
};

// Object: Enum GPAudioRuntime.EAttenuationScaleType
enum class EAttenuationScaleType : uint8_t
{
	ESCALE_GLOBAL = 0,
	ESCALE_NON_SCALE = 1,
	ESCALE_TYPE_CONFIG = 2,
	ESCALE_SPECIFIC = 3,
	ESCALE_MAX = 4
};

// Object: Enum GPAudioRuntime.EGPAudioEnvEmitterState
enum class EGPAudioEnvEmitterState : uint8_t
{
	EEmitterPlay3D = 0,
	EEmitterPlay2D = 1,
	EEmitterStopPlay = 2,
	EGPAudioEnvEmitterState_MAX = 3
};

// Object: Enum GPAudioRuntime.EGPAudioTag
enum class EGPAudioTag : uint8_t
{
	ETAG_FEMALE = 0,
	ETAG_1P = 1,
	ETAG_3P = 2,
	ETAG_SUP = 3,
	ETAG_RAID = 4,
	ETAG_WT = 5,
	ETAG_MAX = 6
};

// Object: Enum GPAudioRuntime.EAudioCharacterGroup
enum class EAudioCharacterGroup : uint8_t
{
	EGROUP_ALL = 0,
	EGROUP_LOCALLY = 1,
	EGROUP_NON_LOCALLY = 2,
	EGROUP_TEAM_ALL = 3,
	EGROUP_TEAMATE = 4,
	EGROUP_SAMECAMP_ALL = 5,
	EGROUP_SAMECAMP = 6,
	EGROUP_ENEMY = 7,
	EGROUP_MAX = 8
};

// Object: Enum GPAudioRuntime.EAudioCharacterViewState
enum class EAudioCharacterViewState : uint8_t
{
	ESTATE_NONE = 0,
	ESTATE_IP = 1,
	ESTATE_LOCALLY_3P = 2,
	ESTATE_REMOTE_3P = 3,
	ESTATE_AI_3P = 4,
	ESTATE_MAX = 5
};

// Object: Enum GPAudioRuntime.EGPAOpenReflectionGeometryType
enum class EGPAOpenReflectionGeometryType : uint8_t
{
	BOX = 0,
	OPENTANGENT = 1,
	EGPAOpenReflectionGeometryType_MAX = 2
};

// Object: Enum GPAudioRuntime.EGPATickFrameGroupType
enum class EGPATickFrameGroupType : uint8_t
{
	G_Default = 0,
	G_OcclusionObstruction = 1,
	G_3PGameAKUpdateSpatial = 2,
	G_3PUpdateReverb = 3,
	G_UpdateFoliage = 4,
	G_MAX = 5
};

// Object: Enum GPAudioRuntime.EGPAudioActorEndPlayStopType
enum class EGPAudioActorEndPlayStopType : uint8_t
{
	STOP_LOOP = 0,
	STOP_ALL = 1,
	DO_NOTHING = 2,
	EGPAudioActorEndPlayStopType_MAX = 3
};

// Object: Enum GPAudioRuntime.EStopAllSoundType
enum class EStopAllSoundType : uint8_t
{
	ESCALE_ALL = 0,
	ESCALE_MAX = 1
};

// Object: Enum GPAudioRuntime.EGPAudioActionOnEventType
enum class EGPAudioActionOnEventType : uint8_t
{
	Stop = 0,
	Pause = 1,
	Resume = 2,
	Break = 3,
	ReleaseEnvelope = 4,
	EGPAudioActionOnEventType_MAX = 5
};

// Object: Enum GPAudioRuntime.EGPAudioWaterPreset
enum class EGPAudioWaterPreset : uint8_t
{
	NotSet = 0,
	OutsideWater = 1,
	InsideWater = 2,
	EGPAudioWaterPreset_MAX = 3
};

// Object: Enum GPAudioRuntime.EWeapon3PFirePoolLevel
enum class EWeapon3PFirePoolLevel : uint8_t
{
	Normal = 0,
	Warning = 1,
	Danger = 2,
	EWeapon3PFirePoolLevel_MAX = 3
};

// Object: Enum GPAudioRuntime.EGPFootSoundAttenuationScaleType
enum class EGPFootSoundAttenuationScaleType : uint8_t
{
	EGPFSAST_None = 0,
	EGPFSAST_CatGirl = 1,
	EGPFSAST_MAX = 2
};

// Object: Enum GPAudioRuntime.EGPAttenuationScaleReason
enum class EGPAttenuationScaleReason : uint8_t
{
	None = 0,
	Headset = 1,
	CatGirl_CrouchMove = 2,
	Buff = 3,
	Shadow_Skill = 4,
	C204_Skill = 5,
	C204_PassiveSOL = 6,
	EGPAttenuationScaleReason_MAX = 7
};

// Object: Enum GPAudioRuntime.EGameAkHighFreqUpdatePosReason
enum class EGameAkHighFreqUpdatePosReason : uint8_t
{
	DrivenVehicle = 0,
	ControlCruiseMissile = 1,
	Elevator = 2,
	StepOnVehicle = 3,
	EGameAkHighFreqUpdatePosReason_MAX = 4
};

// Object: Enum GPAudioRuntime.EObserveredAudioState
enum class EObserveredAudioState : uint8_t
{
	NotSet = 0,
	Observered = 1,
	NotObservered = 2,
	EObserveredAudioState_MAX = 3
};

// Object: Enum GPAudioRuntime.EAudioPortalType
enum class EAudioPortalType : uint8_t
{
	None = 0,
	Normal = 1,
	Roomy = 2,
	Transparent = 3,
	EAudioPortalType_MAX = 4
};

// Object: Enum GPAudioRuntime.EAudioVolumeType
enum class EAudioVolumeType : uint8_t
{
	Default = 0,
	GameArea = 1,
	SpatialRoom = 2,
	Portal = 3,
	POIArea = 4,
	EAudioVolumeType_MAX = 5
};

// Object: Enum GPAudioRuntime.ELoudnessDistanceType
enum class ELoudnessDistanceType : uint8_t
{
	None = 0,
	RealDistance = 1,
	HalfAttenuationRadius = 2,
	FullAttenuationRadius = 3,
	ELoudnessDistanceType_MAX = 4
};

// Object: Enum GPAudioRuntime.EGPAudioComponent
enum class EGPAudioComponent : uint8_t
{
	ECP_NONE = 0,
	ECP_BARREL = 1,
	ECP_STOCK = 2,
	ECP_MAGAZINE = 3,
	ECP_MAX = 4
};

// Object: Enum GPAudioRuntime.EAudioWeatherType
enum class EAudioWeatherType : uint16_t
{
	None = 0,
	Sunnyday = 8008,
	Cloudy = 9002,
	HeavyRain = 9003,
	Foggy = 9004,
	Sunnyday_20001 = 20001,
	EAudioWeatherType_MAX = 20002
};

// Object: Enum GPAudioRuntime.EGameAkType
enum class EGameAkType : uint8_t
{
	EGAMEAK_DEFAULT = 0,
	EGAMEAK_STATIC = 1,
	EGAMEAK_TRAVELER = 2,
	EGAMEAK_MAX = 3
};

// Object: Enum GPAudioRuntime.EGPAudioFloorType
enum class EGPAudioFloorType : uint8_t
{
	GP_AUDIO_FLOOR_TYPE_DEFAULT = 0,
	GP_AUDIO_FLOOR_TYPE_UPSTAIRS_2 = 1,
	GP_AUDIO_FLOOR_TYPE_UPSTAIRS_1 = 2,
	GP_AUDIO_FLOOR_TYPE_Downstairs_1 = 3,
	GP_AUDIO_FLOOR_TYPE_Downstairs_2 = 4,
	GP_AUDIO_FLOOR_TYPE_SPLITLEVEL = 5,
	GP_AUDIO_FLOOR_TYPE_OUTDOOR_UPSTAIRS = 6,
	GP_AUDIO_FLOOR_TYPE_MAX = 7
};

// Object: ScriptStruct GPAudioRuntime.AudioPriorityWeaponDebugSingleInfo
// Size: 0x48 (Inherited: 0x0)
struct FAudioPriorityWeaponDebugSingleInfo
{
	float Priority; // 0x0(0x4)
	float LocationPriority; // 0x4(0x4)
	float FireDirPriority; // 0x8(0x4)
	float DistancePriority; // 0xC(0x4)
	uint8_t bShouldPlay : 1; // 0x10(0x1), Mask(0x1)
	uint8_t BitPad_0x10_1 : 7; // 0x10(0x1)
	uint8_t Pad_0x11[0x7]; // 0x11(0x7)
	struct FString ReasonForNotPlay; // 0x18(0x10)
	struct FString AudioName; // 0x28(0x10)
	uint8_t LimitArea; // 0x38(0x1)
	uint8_t Pad_0x39[0x3]; // 0x39(0x3)
	struct TWeakObjectPtr<struct AActor> SourceActor; // 0x3C(0x8)
	float UpdateTime; // 0x44(0x4)
};

// Object: ScriptStruct GPAudioRuntime.GPAudioFuturePlayingID
// Size: 0x8 (Inherited: 0x0)
struct FGPAudioFuturePlayingID
{
	uint8_t Pad_0x0[0x4]; // 0x0(0x4)
	int32_t ErrorCode; // 0x4(0x4)
};

// Object: ScriptStruct GPAudioRuntime.DebugCylinderHolder
// Size: 0x1C (Inherited: 0x0)
struct FDebugCylinderHolder
{
	float ZHeight; // 0x0(0x4)
	float OuterRadius; // 0x4(0x4)
	float InnerRadius; // 0x8(0x4)
	float ZRotation; // 0xC(0x4)
	struct FVector CenterPosition; // 0x10(0xC)
};

// Object: ScriptStruct GPAudioRuntime.FootStepAudioSequenceDataRow
// Size: 0x40 (Inherited: 0x10)
struct FFootStepAudioSequenceDataRow : FDescRowBase
{
	int32_t AudioStyleId; // 0x10(0x4)
	uint8_t Pad_0x14[0x4]; // 0x14(0x4)
	struct TSoftObjectPtr<UPhysicalMaterialAudioSequenceDataAsset> PhysicalConfig; // 0x18(0x28)
};

// Object: ScriptStruct GPAudioRuntime.GameAkDebugInfo
// Size: 0x30 (Inherited: 0x0)
struct FGameAkDebugInfo
{
	int32_t PlayFlag; // 0x0(0x4)
	float DisFromListener; // 0x4(0x4)
	float OccSetValue; // 0x8(0x4)
	float ObsSetValue; // 0xC(0x4)
	float UpdatePositionInterval; // 0x10(0x4)
	float NextUpdatePositionTimeLeft; // 0x14(0x4)
	int32_t CurRoomBakeReflectEnergy; // 0x18(0x4)
	int32_t CurRoomBakeTransmissionValue; // 0x1C(0x4)
	struct TArray<struct FGameAkPlayingItem> PlayingItems; // 0x20(0x10)
};

// Object: ScriptStruct GPAudioRuntime.GameAkPlayingItem
// Size: 0x40 (Inherited: 0x0)
struct FGameAkPlayingItem
{
	struct FName AudioTypeName; // 0x0(0x8)
	int32_t EventId; // 0x8(0x4)
	struct FGPAudioFuturePlayingID PlayingId; // 0xC(0x8)
	float Duration; // 0x14(0x4)
	float Range; // 0x18(0x4)
	float MakeNoiseRange; // 0x1C(0x4)
	float LocalListenRange; // 0x20(0x4)
	float StartGameTime; // 0x24(0x4)
	uint8_t IsFree : 1; // 0x28(0x1), Mask(0x1)
	uint8_t BitPad_0x28_1 : 7; // 0x28(0x1)
	uint8_t Pad_0x29[0x7]; // 0x29(0x7)
	struct FString AudioEventName; // 0x30(0x10)
};

// Object: ScriptStruct GPAudioRuntime.GameAkInfo
// Size: 0x8 (Inherited: 0x0)
struct FGameAkInfo
{
	EAudioCharacterGroup CharterGroup; // 0x0(0x1)
	EAudioCharacterViewState ViewState; // 0x1(0x1)
	uint8_t Pad_0x2[0x2]; // 0x2(0x2)
	int32_t PlayFlag; // 0x4(0x4)
};

// Object: ScriptStruct GPAudioRuntime.PresetIdAndArea
// Size: 0x18 (Inherited: 0x0)
struct FPresetIdAndArea
{
	struct FString Name; // 0x0(0x10)
	int32_t SurfaceArea; // 0x10(0x4)
	uint8_t Pad_0x14[0x4]; // 0x14(0x4)
};

// Object: ScriptStruct GPAudioRuntime.SpatialAudioOctree
// Size: 0x58 (Inherited: 0x0)
struct FSpatialAudioOctree
{
	uint8_t Pad_0x0[0x58]; // 0x0(0x58)
};

// Object: ScriptStruct GPAudioRuntime.AudioOctreeNode
// Size: 0x50 (Inherited: 0x0)
struct FAudioOctreeNode
{
	uint8_t Pad_0x0[0x50]; // 0x0(0x50)
};

// Object: ScriptStruct GPAudioRuntime.GameAudioVolumeBounding
// Size: 0x90 (Inherited: 0x0)
struct FGameAudioVolumeBounding
{
	EGPGameAudioGeometryType GeometryType; // 0x0(0x1)
	uint8_t Pad_0x1[0x3]; // 0x1(0x3)
	struct FVector AxisX; // 0x4(0xC)
	struct FVector AxisY; // 0x10(0xC)
	struct FVector AxisZ; // 0x1C(0xC)
	struct FVector Center; // 0x28(0xC)
	uint8_t Pad_0x34[0xC]; // 0x34(0xC)
	struct FQuat Rotation; // 0x40(0x10)
	struct FTransform RelativeTransform; // 0x50(0x30)
	struct FVector BoxExtent; // 0x80(0xC)
	float XYCircleRadius; // 0x8C(0x4)
};

// Object: ScriptStruct GPAudioRuntime.GameAudioGeometry_Cylinder
// Size: 0x60 (Inherited: 0x0)
struct FGameAudioGeometry_Cylinder
{
	struct FTransform Transform; // 0x0(0x30)
	struct FVector Origin; // 0x30(0xC)
	struct FVector Scale; // 0x3C(0xC)
	float XYRadius; // 0x48(0x4)
	float ExtentZ; // 0x4C(0x4)
	int32_t SideNum; // 0x50(0x4)
	uint8_t Pad_0x54[0xC]; // 0x54(0xC)
};

// Object: ScriptStruct GPAudioRuntime.GameAudioGeometry_OBB
// Size: 0x60 (Inherited: 0x0)
struct FGameAudioGeometry_OBB
{
	struct FTransform Transform; // 0x0(0x30)
	struct FVector Origin; // 0x30(0xC)
	struct FRotator Rotation; // 0x3C(0xC)
	struct FVector Extent; // 0x48(0xC)
	uint8_t Pad_0x54[0xC]; // 0x54(0xC)
};

// Object: ScriptStruct GPAudioRuntime.GameAudioGeometry
// Size: 0xD0 (Inherited: 0x0)
struct FGameAudioGeometry
{
	EGPGameAudioGeometryType GeometryType; // 0x0(0x1)
	uint8_t Pad_0x1[0xF]; // 0x1(0xF)
	struct FGameAudioGeometry_OBB Box; // 0x10(0x60)
	struct FGameAudioGeometry_Cylinder Cylinder; // 0x70(0x60)
};

// Object: ScriptStruct GPAudioRuntime.LoudnessBenchmarkConfig
// Size: 0x10 (Inherited: 0x0)
struct FLoudnessBenchmarkConfig
{
	struct TArray<struct FString> LoudnessConfig; // 0x0(0x10)
};

// Object: ScriptStruct GPAudioRuntime.AudioMiscConfigRow
// Size: 0xB8 (Inherited: 0x10)
struct FAudioMiscConfigRow : FDescRowBase
{
	uint8_t IsValid : 1; // 0x10(0x1), Mask(0x1)
	uint8_t BitPad_0x10_1 : 7; // 0x10(0x1)
	uint8_t Pad_0x11[0x3]; // 0x11(0x3)
	float ThreePWeaponFireCloseDistance_WT; // 0x14(0x4)
	float ThreePWeaponFireMedDistance_WT; // 0x18(0x4)
	float ThreePWeaponFireFarDistance_WT; // 0x1C(0x4)
	float ThreePWeaponFireCloseDistance_Silencer_WT; // 0x20(0x4)
	float ThreePWeaponFireMedDistance_Silencer_WT; // 0x24(0x4)
	float ThreePWeaponFireFarDistance_Silencer_WT; // 0x28(0x4)
	float AmbientSoundParam_A; // 0x2C(0x4)
	float AmbientSoundParam_B; // 0x30(0x4)
	float NormalPortalSize; // 0x34(0x4)
	float RoomyPortalSize; // 0x38(0x4)
	float TransparentPortalSize; // 0x3C(0x4)
	float AmbientSoundCheckDistMax; // 0x40(0x4)
	uint8_t Pad_0x44[0x4]; // 0x44(0x4)
	struct TArray<struct FString> Report2DSoundBlackList; // 0x48(0x10)
	struct TMap<struct FString, struct FLoudnessBenchmarkConfig> LoudnessBenchmarkOfCategory; // 0x58(0x50)
	struct TArray<struct FString> LoudnessBenchmarkIgnoreDir; // 0xA8(0x10)
};

// Object: ScriptStruct GPAudioRuntime.HearingAttenuationBuffRow
// Size: 0x20 (Inherited: 0x10)
struct FHearingAttenuationBuffRow : FDescRowBase
{
	float MinScale; // 0x10(0x4)
	float MaxScale; // 0x14(0x4)
	uint32_t BuffId; // 0x18(0x4)
	uint8_t Pad_0x1C[0x4]; // 0x1C(0x4)
};

// Object: ScriptStruct GPAudioRuntime.EchoEllipseDataRow
// Size: 0x30 (Inherited: 0x10)
struct FEchoEllipseDataRow : FDescRowBase
{
	float X; // 0x10(0x4)
	float Y; // 0x14(0x4)
	float Z; // 0x18(0x4)
	float OuterRadius; // 0x1C(0x4)
	float InnerRadius; // 0x20(0x4)
	float ZRotation; // 0x24(0x4)
	float ZHeight; // 0x28(0x4)
	uint8_t Pad_0x2C[0x4]; // 0x2C(0x4)
};

// Object: ScriptStruct GPAudioRuntime.MapEchoConfigRow
// Size: 0x40 (Inherited: 0x10)
struct FMapEchoConfigRow : FDescRowBase
{
	struct FString MapKey; // 0x10(0x10)
	int32_t MapID; // 0x20(0x4)
	uint8_t Pad_0x24[0x4]; // 0x24(0x4)
	struct FSoftObjectPath EchoEllipseDataTablePath; // 0x28(0x18)
};

// Object: ScriptStruct GPAudioRuntime.SpatialVolumeDisableRow
// Size: 0x28 (Inherited: 0x10)
struct FSpatialVolumeDisableRow : FDescRowBase
{
	ESpatialVolumeDisableCondition Condition; // 0x10(0x1)
	uint8_t Pad_0x11[0x7]; // 0x11(0x7)
	struct TArray<struct FString> AudioVolumeIDStrings; // 0x18(0x10)
};

// Object: ScriptStruct GPAudioRuntime.FootStepCompanionRow
// Size: 0x58 (Inherited: 0x10)
struct FFootStepCompanionRow : FDescRowBase
{
	int64_t SkinId; // 0x10(0x8)
	EGPAudioFootSoundType FootSoundType; // 0x18(0x1)
	uint8_t Pad_0x19[0x7]; // 0x19(0x7)
	struct TArray<EAudioFootStepCompanionPlayCondition> PlayConditions; // 0x20(0x10)
	struct TSoftObjectPtr<UGPAudioEventAsset> AudioAsset; // 0x30(0x28)
};

// Object: ScriptStruct GPAudioRuntime.GPAAttachEmitterInfo
// Size: 0x28 (Inherited: 0x0)
struct FGPAAttachEmitterInfo
{
	struct FName AttachName; // 0x0(0x8)
	struct TWeakObjectPtr<struct USceneComponent> AttachTo; // 0x8(0x8)
	struct UGPAudioEventAsset* PlayEvent; // 0x10(0x8)
	struct UGPAudioEventAsset* StopEvent; // 0x18(0x8)
	EGPAudioBlueprintType PlayType; // 0x20(0x1)
	uint8_t Pad_0x21[0x7]; // 0x21(0x7)
};

// Object: ScriptStruct GPAudioRuntime.AudioAkCompManagerTickFunction
// Size: 0x68 (Inherited: 0x60)
struct FAudioAkCompManagerTickFunction : FTickFunction
{
	uint8_t Pad_0x60[0x8]; // 0x60(0x8)
};

// Object: ScriptStruct GPAudioRuntime.GPAkCompPool
// Size: 0x38 (Inherited: 0x0)
struct FGPAkCompPool
{
	struct TArray<struct FGPAkCompPoolElement> FreeElements; // 0x0(0x10)
	struct TArray<struct UGameAkComponent*> InUseComponents_Auto; // 0x10(0x10)
	struct TArray<struct UGameAkComponent*> InUseComponents_Manual; // 0x20(0x10)
	uint8_t Pad_0x30[0x8]; // 0x30(0x8)
};

// Object: ScriptStruct GPAudioRuntime.GPAkCompPoolElement
// Size: 0x10 (Inherited: 0x0)
struct FGPAkCompPoolElement
{
	uint8_t Component[0x8]; // 0x0(0x8)
	uint8_t Pad_0x8[0x8]; // 0x8(0x8)
};

// Object: ScriptStruct GPAudioRuntime.GPAudioColliderNodeInfo
// Size: 0x30 (Inherited: 0x0)
struct FGPAudioColliderNodeInfo
{
	struct FBox Bound; // 0x0(0x1C)
	int32_t BoxOffset; // 0x1C(0x4)
	int32_t BoxNum; // 0x20(0x4)
	int32_t LeftChildOffset; // 0x24(0x4)
	int32_t RightChildOffset; // 0x28(0x4)
	int32_t Axis; // 0x2C(0x4)
};

// Object: ScriptStruct GPAudioRuntime.OrientedBoxInfo
// Size: 0x44 (Inherited: 0x0)
struct FOrientedBoxInfo
{
	struct FOrientedBox OrientedBox; // 0x0(0x3C)
	int32_t MaterialIndex; // 0x3C(0x4)
	uint8_t bHasSplit : 1; // 0x40(0x1), Mask(0x1)
	uint8_t BitPad_0x40_1 : 7; // 0x40(0x1)
	uint8_t bIndoor : 1; // 0x41(0x1), Mask(0x1)
	uint8_t BitPad_0x41_1 : 7; // 0x41(0x1)
	uint8_t bHollow : 1; // 0x42(0x1), Mask(0x1)
	uint8_t BitPad_0x42_1 : 7; // 0x42(0x1)
	uint8_t bPipe : 1; // 0x43(0x1), Mask(0x1)
	uint8_t BitPad_0x43_1 : 7; // 0x43(0x1)
};

// Object: ScriptStruct GPAudioRuntime.GPAudioAnimNotifyFootStepTypeConfig
// Size: 0x28 (Inherited: 0x0)
struct FGPAudioAnimNotifyFootStepTypeConfig
{
	EGPAudioFootSoundType FootSoundType; // 0x0(0x1)
	uint8_t Pad_0x1[0x7]; // 0x1(0x7)
	struct UPhysicalMaterialAudioDataAsset* BindPhysicalConfig; // 0x8(0x8)
	uint8_t Pad_0x10[0x18]; // 0x10(0x18)
};

// Object: ScriptStruct GPAudioRuntime.GPAudioMIDIEventAsset
// Size: 0x40 (Inherited: 0x0)
struct FGPAudioMIDIEventAsset
{
	struct UGPAudioEventAsset* FireAudioEvent; // 0x0(0x8)
	uint8_t bPreload1PFireAudio : 1; // 0x8(0x1), Mask(0x1)
	uint8_t BitPad_0x8_1 : 7; // 0x8(0x1)
	uint8_t Pad_0x9[0x7]; // 0x9(0x7)
	struct UGPAudioEventAsset* StartEvent; // 0x10(0x8)
	struct UGPAudioEventAsset* EndEvent; // 0x18(0x8)
	struct UGPAudioEventAsset* LoopStartEvent; // 0x20(0x8)
	struct UGPAudioEventAsset* LoopEndEvent; // 0x28(0x8)
	struct UGPAudioEventAsset* EFAtomEvent; // 0x30(0x8)
	float StartAudioEventLeadTime; // 0x38(0x4)
	float MIDIDelayTime; // 0x3C(0x4)
};

// Object: ScriptStruct GPAudioRuntime.GPAudio3PFireEvent
// Size: 0xC8 (Inherited: 0x0)
struct FGPAudio3PFireEvent
{
	struct TSoftObjectPtr<UGPAudioEventAsset> FireAudioEvent; // 0x0(0x28)
	struct TSoftObjectPtr<UGPAudioEventAsset> StartEvent; // 0x28(0x28)
	struct TSoftObjectPtr<UGPAudioEventAsset> EndEvent; // 0x50(0x28)
	struct TSoftObjectPtr<UGPAudioEventAsset> LoopStartEvent; // 0x78(0x28)
	struct TSoftObjectPtr<UGPAudioEventAsset> LoopEndEvent; // 0xA0(0x28)
};

// Object: ScriptStruct GPAudioRuntime.GPAudioMIDIEvent
// Size: 0xB0 (Inherited: 0x0)
struct FGPAudioMIDIEvent
{
	struct TSoftObjectPtr<UGPAudioEventAsset> FireAudioEvent; // 0x0(0x28)
	uint8_t bPreloadFireAudio : 1; // 0x28(0x1), Mask(0x1)
	uint8_t BitPad_0x28_1 : 7; // 0x28(0x1)
	uint8_t Pad_0x29[0x7]; // 0x29(0x7)
	struct TSoftObjectPtr<UGPAudioEventAsset> StartEvent; // 0x30(0x28)
	struct TSoftObjectPtr<UGPAudioEventAsset> EndEvent; // 0x58(0x28)
	float StartAudioEventLeadTime; // 0x80(0x4)
	float MIDIDelayTime; // 0x84(0x4)
	struct TSoftObjectPtr<UGPAudioEventAsset> EFAtomEvent; // 0x88(0x28)
};

// Object: ScriptStruct GPAudioRuntime.GPNameKeyAudio
// Size: 0x10 (Inherited: 0x0)
struct FGPNameKeyAudio
{
	struct FName Key; // 0x0(0x8)
	struct UGPAudioEventAsset* AudioAsset; // 0x8(0x8)
};

// Object: ScriptStruct GPAudioRuntime.GPAudioLoopEvent
// Size: 0x10 (Inherited: 0x0)
struct FGPAudioLoopEvent
{
	struct UGPAudioEventAsset* LoopAudioEventStart; // 0x0(0x8)
	struct UGPAudioEventAsset* LoopAudioEventEnd; // 0x8(0x8)
};

// Object: ScriptStruct GPAudioRuntime.GPAudioEventSequenceBodyTypeList
// Size: 0x10 (Inherited: 0x0)
struct FGPAudioEventSequenceBodyTypeList
{
	struct TArray<struct FGPAudioTypeEventSequence> AudioEventSequences; // 0x0(0x10)
};

// Object: ScriptStruct GPAudioRuntime.GPAudioEventSequenceList
// Size: 0x50 (Inherited: 0x0)
struct FGPAudioEventSequenceList
{
	struct TMap<EGPAudioFootSoundBodyType, struct FGPAudioEventSequenceBodyTypeList> AudioEventBodyTypeMap; // 0x0(0x50)
};

// Object: ScriptStruct GPAudioRuntime.GPAudioTypeEventSequence
// Size: 0x18 (Inherited: 0x0)
struct FGPAudioTypeEventSequence
{
	EGPAudioFootSoundType AudioType; // 0x0(0x1)
	uint8_t Pad_0x1[0x7]; // 0x1(0x7)
	struct TArray<struct FGPAudioEventTimeDelayConfig> GPAudioEventTimeDelayConfigs; // 0x8(0x10)
};

// Object: ScriptStruct GPAudioRuntime.GPAudioEventTimeDelayConfig
// Size: 0x10 (Inherited: 0x0)
struct FGPAudioEventTimeDelayConfig
{
	float DelayPlayTime; // 0x0(0x4)
	uint8_t Pad_0x4[0x4]; // 0x4(0x4)
	struct UGPAudioEventAsset* GPAudioEvent; // 0x8(0x8)
};

// Object: ScriptStruct GPAudioRuntime.GPAudioEventBodyTypeList
// Size: 0x10 (Inherited: 0x0)
struct FGPAudioEventBodyTypeList
{
	struct TArray<struct FGPAudioTypeEvent> AudioEvents; // 0x0(0x10)
};

// Object: ScriptStruct GPAudioRuntime.GPAudioEventList
// Size: 0x50 (Inherited: 0x0)
struct FGPAudioEventList
{
	struct TMap<EGPAudioFootSoundBodyType, struct FGPAudioEventBodyTypeList> AudioEventBodyTypeMap; // 0x0(0x50)
};

// Object: ScriptStruct GPAudioRuntime.GPAudioTypeEvent
// Size: 0x10 (Inherited: 0x0)
struct FGPAudioTypeEvent
{
	EGPAudioFootSoundType AudioType; // 0x0(0x1)
	uint8_t Pad_0x1[0x7]; // 0x1(0x7)
	struct UGPAudioEventAsset* GPAudioEvent; // 0x8(0x8)
};

// Object: ScriptStruct GPAudioRuntime.AkEventContainer
// Size: 0xA0 (Inherited: 0x0)
struct FAkEventContainer
{
	uint32_t ShortID; // 0x0(0x4)
	int32_t AudioFlag; // 0x4(0x4)
	float MaxAttenuationRadius; // 0x8(0x4)
	uint8_t CanNotPlayBy3DFunc : 1; // 0xC(0x1), Mask(0x1)
	uint8_t BitPad_0xC_1 : 7; // 0xC(0x1)
	uint8_t IsInfinite : 1; // 0xD(0x1), Mask(0x1)
	uint8_t BitPad_0xD_1 : 7; // 0xD(0x1)
	uint8_t Pad_0xE[0x2]; // 0xE(0x2)
	float MaximumDuration; // 0x10(0x4)
	uint8_t bIsMIDIEvent : 1; // 0x14(0x1), Mask(0x1)
	uint8_t BitPad_0x14_1 : 7; // 0x14(0x1)
	uint8_t Pad_0x15[0x3]; // 0x15(0x3)
	struct FString EventName; // 0x18(0x10)
	struct TMap<struct FString, float> MaximumDurationLocalized; // 0x28(0x50)
	struct TSoftObjectPtr<UObject> ResourceObject; // 0x78(0x28)
};

// Object: ScriptStruct GPAudioRuntime.GPAudioLinkEvent
// Size: 0x8 (Inherited: 0x0)
struct FGPAudioLinkEvent
{
	struct UGPAudioEventAKLink* GPAudioEventLink; // 0x0(0x8)
};

// Object: ScriptStruct GPAudioRuntime.GPLongAudioPlayingRecord
// Size: 0x8 (Inherited: 0x0)
struct FGPLongAudioPlayingRecord
{
	uint8_t Pad_0x0[0x8]; // 0x0(0x8)
};

// Object: ScriptStruct GPAudioRuntime.GPDecodedCacheEvent
// Size: 0x20 (Inherited: 0x0)
struct FGPDecodedCacheEvent
{
	struct UAkAudioEvent* CacheEvent; // 0x0(0x8)
	uint8_t Pad_0x8[0x18]; // 0x8(0x18)
};

// Object: ScriptStruct GPAudioRuntime.GPAudioEventLimitRow
// Size: 0x38 (Inherited: 0x8)
struct FGPAudioEventLimitRow : FTableRowBase
{
	struct FName LimitName; // 0x8(0x8)
	struct FName LimitDesc; // 0x10(0x8)
	EGPAudioEventLimitType LimitType; // 0x18(0x1)
	uint8_t bAllowOverLimitPost : 1; // 0x19(0x1), Mask(0x1)
	uint8_t BitPad_0x19_1 : 7; // 0x19(0x1)
	uint8_t Pad_0x1A[0x6]; // 0x1A(0x6)
	struct UGPAudioEventPriorityAsset* PriorityMethod_HighLOD; // 0x20(0x8)
	struct UGPAudioEventPriorityAsset* PriorityMethod_MidLOD; // 0x28(0x8)
	struct UGPAudioEventPriorityAsset* PriorityMethod_LowLOD; // 0x30(0x8)
};

// Object: ScriptStruct GPAudioRuntime.GPAudioEventModeLimit
// Size: 0x10 (Inherited: 0x0)
struct FGPAudioEventModeLimit
{
	struct TArray<struct FGPAudioEventTypeLimit> AllTypeLimits; // 0x0(0x10)
};

// Object: ScriptStruct GPAudioRuntime.GPAudioEventTypeLimit
// Size: 0x10 (Inherited: 0x0)
struct FGPAudioEventTypeLimit
{
	EGPAudioEventLimitType EventLimitType; // 0x0(0x1)
	uint8_t bAllowOverLimitPost : 1; // 0x1(0x1), Mask(0x1)
	uint8_t BitPad_0x1_1 : 7; // 0x1(0x1)
	uint8_t Pad_0x2[0x6]; // 0x2(0x6)
	struct UGPAudioPriorityMethod* PriorityMethod; // 0x8(0x8)
};

// Object: ScriptStruct GPAudioRuntime.GPAudioPriorityParam
// Size: 0x98 (Inherited: 0x0)
struct FGPAudioPriorityParam
{
	struct FName AudioTypeName; // 0x0(0x8)
	EAudioCharacterGroup CharGroup; // 0x8(0x1)
	uint8_t Pad_0x9[0x3]; // 0x9(0x3)
	struct FVector Location; // 0xC(0xC)
	struct FRotator Rotation; // 0x18(0xC)
	uint8_t Pad_0x24[0x4]; // 0x24(0x4)
	struct TArray<struct FPlayingAudioTargetParam> CurrentPlayingTargetParams; // 0x28(0x10)
	struct TWeakObjectPtr<struct UGameAkComponent> AkComponent; // 0x38(0x8)
	struct TWeakObjectPtr<struct AActor> SourceActor; // 0x40(0x8)
	uint8_t Pad_0x48[0x50]; // 0x48(0x50)
};

// Object: ScriptStruct GPAudioRuntime.PlayingAudioTargetParam
// Size: 0xC (Inherited: 0x0)
struct FPlayingAudioTargetParam
{
	float Priority; // 0x0(0x4)
	uint8_t Pad_0x4[0x8]; // 0x4(0x8)
};

// Object: ScriptStruct GPAudioRuntime.GPAudioFirePriorityItem
// Size: 0x48 (Inherited: 0x0)
struct FGPAudioFirePriorityItem
{
	struct UGameAkComponent* GameAkComponent; // 0x0(0x8)
	uint8_t Pad_0x8[0x40]; // 0x8(0x40)
};

// Object: ScriptStruct GPAudioRuntime.GPAudioFootStepProxyRow
// Size: 0x50 (Inherited: 0x8)
struct FGPAudioFootStepProxyRow : FTableRowBase
{
	struct FName AnimName; // 0x8(0x8)
	EGPAudioFootSoundType FootSoundType; // 0x10(0x1)
	uint8_t Pad_0x11[0x7]; // 0x11(0x7)
	struct TSoftObjectPtr<UPhysicalMaterialAudioDataAsset> BindPhysicalConfigSO; // 0x18(0x28)
	struct TArray<float> NotifyTimes; // 0x40(0x10)
};

// Object: ScriptStruct GPAudioRuntime.Audio3PFireLoopPriorityManagerConfig
// Size: 0xC0 (Inherited: 0x0)
struct FAudio3PFireLoopPriorityManagerConfig
{
	struct TArray<int32_t> LoopFirePriorityNum; // 0x0(0x10)
	uint8_t InCrackCircleP0Num_Max; // 0x10(0x1)
	uint8_t HoldQuadrantNum_Min; // 0x11(0x1)
	uint8_t Pad_0x12[0x2]; // 0x12(0x2)
	float FrontQuadAngle; // 0x14(0x4)
	float CircleThreshold1_Meter; // 0x18(0x4)
	float CircleThreshold2_Meter; // 0x1C(0x4)
	struct TMap<int32_t, int32_t> DirectionBeHold_Max; // 0x20(0x50)
	struct TMap<uint8_t, int32_t> CircleCandidateBeHold_Max; // 0x70(0x50)
};

// Object: ScriptStruct GPAudioRuntime.GPFootStepTraceIntervalCfg
// Size: 0x14 (Inherited: 0x0)
struct FGPFootStepTraceIntervalCfg
{
	struct FFloatRange DistanceRange; // 0x0(0x10)
	float Interval; // 0x10(0x4)
};

// Object: ScriptStruct GPAudioRuntime.GPAttenuationShadowAkSets
// Size: 0x10 (Inherited: 0x0)
struct FGPAttenuationShadowAkSets
{
	struct TArray<struct FName> ShadowAkNames; // 0x0(0x10)
};

// Object: ScriptStruct GPAudioRuntime.GPGameplayAudioHDRConfig
// Size: 0x38 (Inherited: 0x0)
struct FGPGameplayAudioHDRConfig
{
	uint8_t bEnableHDR : 1; // 0x0(0x1), Mask(0x1)
	uint8_t BitPad_0x0_1 : 7; // 0x0(0x1)
	uint8_t Pad_0x1[0x7]; // 0x1(0x7)
	struct FSoftObjectPath HDRDataTablePath; // 0x8(0x18)
	struct FSoftObjectPath HDRDataTablePath_NonWarTape; // 0x20(0x18)
};

// Object: ScriptStruct GPAudioRuntime.GPGameplayAudioFeatures
// Size: 0x18 (Inherited: 0x0)
struct FGPGameplayAudioFeatures
{
	struct FString GameplayModeName; // 0x0(0x10)
	uint8_t bEnableDynamicReverb3P : 1; // 0x10(0x1), Mask(0x1)
	uint8_t BitPad_0x10_1 : 7; // 0x10(0x1)
	uint8_t bEnableDynamicReverb1P : 1; // 0x11(0x1), Mask(0x1)
	uint8_t BitPad_0x11_1 : 7; // 0x11(0x1)
	uint8_t Pad_0x12[0x6]; // 0x12(0x6)
};

// Object: ScriptStruct GPAudioRuntime.GPAudioHeadSetRow
// Size: 0x28 (Inherited: 0x8)
struct FGPAudioHeadSetRow : FTableRowBase
{
	uint64_t ExtendItemID; // 0x8(0x8)
	float GlobalAttenuationScalingFactor; // 0x10(0x4)
	uint8_t Pad_0x14[0x4]; // 0x14(0x4)
	struct UGPAudioEventAsset* PutOnEvent; // 0x18(0x8)
	struct UGPAudioEventAsset* TakeDownEvent; // 0x20(0x8)
};

// Object: ScriptStruct GPAudioRuntime.OverlapAudioEventSet
// Size: 0x18 (Inherited: 0x0)
struct FOverlapAudioEventSet
{
	struct UGPAudioEventAsset* EnterEvent; // 0x0(0x8)
	struct UGPAudioEventAsset* StirEvent; // 0x8(0x8)
	struct UGPAudioEventAsset* ExitEvent; // 0x10(0x8)
};

// Object: ScriptStruct GPAudioRuntime.FoliageAudioInstanceConfig
// Size: 0x40 (Inherited: 0x0)
struct FFoliageAudioInstanceConfig
{
	struct TSoftObjectPtr<UStaticMesh> FoliageType; // 0x0(0x28)
	struct FOverlapAudioEventSet OverlapEvent; // 0x28(0x18)
};

// Object: ScriptStruct GPAudioRuntime.GPComponentSignificanceConfig
// Size: 0x24 (Inherited: 0x0)
struct FGPComponentSignificanceConfig
{
	int32_t QualityLevel; // 0x0(0x4)
	struct FFloatRange DistanceRange; // 0x4(0x10)
	float UpdateAkPostionInterval; // 0x14(0x4)
	float UpdateOccObsInterval; // 0x18(0x4)
	float FoliageCheckInterval; // 0x1C(0x4)
	uint8_t bEnabledOccObs : 1; // 0x20(0x1), Mask(0x1)
	uint8_t BitPad_0x20_1 : 7; // 0x20(0x1)
	uint8_t bEnabledEarlyReflection : 1; // 0x21(0x1), Mask(0x1)
	uint8_t BitPad_0x21_1 : 7; // 0x21(0x1)
	uint8_t bEnabledSpatialRoomInfo : 1; // 0x22(0x1), Mask(0x1)
	uint8_t BitPad_0x22_1 : 7; // 0x22(0x1)
	uint8_t bEnabledFootstep : 1; // 0x23(0x1), Mask(0x1)
	uint8_t BitPad_0x23_1 : 7; // 0x23(0x1)
};

// Object: ScriptStruct GPAudioRuntime.GPALODFeatures
// Size: 0x38 (Inherited: 0x0)
struct FGPALODFeatures
{
	struct FString Quality; // 0x0(0x10)
	int32_t WwiseQuality; // 0x10(0x4)
	uint8_t bEnable3PDynamicReverb : 1; // 0x14(0x1), Mask(0x1)
	uint8_t BitPad_0x14_1 : 7; // 0x14(0x1)
	uint8_t bEnable1PEarlyReflectionAndDynamicReverb : 1; // 0x15(0x1), Mask(0x1)
	uint8_t BitPad_0x15_1 : 7; // 0x15(0x1)
	uint8_t bEnableFoliageOverlap : 1; // 0x16(0x1), Mask(0x1)
	uint8_t BitPad_0x16_1 : 7; // 0x16(0x1)
	uint8_t bEnable3PRoomQuery : 1; // 0x17(0x1), Mask(0x1)
	uint8_t BitPad_0x17_1 : 7; // 0x17(0x1)
	float RoomQueryDistance; // 0x18(0x4)
	float EarlyReflectionDistance; // 0x1C(0x4)
	float DynamicReverbDistance; // 0x20(0x4)
	uint8_t bEnableSlapback : 1; // 0x24(0x1), Mask(0x1)
	uint8_t BitPad_0x24_1 : 7; // 0x24(0x1)
	uint8_t bEnableFootStepFloorCheck : 1; // 0x25(0x1), Mask(0x1)
	uint8_t BitPad_0x25_1 : 7; // 0x25(0x1)
	uint8_t Pad_0x26[0x2]; // 0x26(0x2)
	float PositionCurveScale; // 0x28(0x4)
	float MinSoundEngineUpdateTransformCMSquared; // 0x2C(0x4)
	uint32_t MaxLRUCacheMediaSize; // 0x30(0x4)
	uint8_t Pad_0x34[0x4]; // 0x34(0x4)
};

// Object: ScriptStruct GPAudioRuntime.MusicPlayerDataRow
// Size: 0x30 (Inherited: 0x10)
struct FMusicPlayerDataRow : FDescRowBase
{
	uint64_t MusicPlayerId; // 0x10(0x8)
	struct FName MusicPlayerName; // 0x18(0x8)
	struct TArray<struct FPlaylistConfig> PlaylistArr; // 0x20(0x10)
};

// Object: ScriptStruct GPAudioRuntime.PlaylistConfig
// Size: 0x28 (Inherited: 0x0)
struct FPlaylistConfig
{
	uint64_t PlaylistId; // 0x0(0x8)
	struct FName PlaylistName; // 0x8(0x8)
	struct TArray<struct TSoftObjectPtr<UGPAudioEventAsset>> MusicEventArr; // 0x10(0x10)
	EMusicLoopType LoopType; // 0x20(0x1)
	uint8_t bStopWhenMusicOver : 1; // 0x21(0x1), Mask(0x1)
	uint8_t BitPad_0x21_1 : 7; // 0x21(0x1)
	uint8_t Pad_0x22[0x6]; // 0x22(0x6)
};

// Object: ScriptStruct GPAudioRuntime.GPAudioRadioChannelRow
// Size: 0x30 (Inherited: 0x8)
struct FGPAudioRadioChannelRow : FTableRowBase
{
	struct FName channelID; // 0x8(0x8)
	float Fm; // 0x10(0x4)
	uint8_t Pad_0x14[0x4]; // 0x14(0x4)
	struct TArray<struct TSoftObjectPtr<UGPAudioEventAsset>> RecordEvents; // 0x18(0x10)
	ERadioChannelLoopType LoopType; // 0x28(0x1)
	uint8_t bIsHiding : 1; // 0x29(0x1), Mask(0x1)
	uint8_t BitPad_0x29_1 : 7; // 0x29(0x1)
	uint8_t Pad_0x2A[0x6]; // 0x2A(0x6)
};

// Object: ScriptStruct GPAudioRuntime.GPAudioReverbSceneConfig
// Size: 0x50 (Inherited: 0x0)
struct FGPAudioReverbSceneConfig
{
	int32_t SpaceType; // 0x0(0x4)
	uint8_t Pad_0x4[0x4]; // 0x4(0x4)
	struct FString RTPCName; // 0x8(0x10)
	float WidthMin; // 0x18(0x4)
	float WidthMax; // 0x1C(0x4)
	float AreaMin; // 0x20(0x4)
	float AreaMax; // 0x24(0x4)
	float HeightMin; // 0x28(0x4)
	float HeightMax; // 0x2C(0x4)
	float SmallHeightRatioMin; // 0x30(0x4)
	float SmallHeightRatioMax; // 0x34(0x4)
	float XYRatioMin; // 0x38(0x4)
	float XYRatioMax; // 0x3C(0x4)
	uint8_t bNeedSpaceFront : 1; // 0x40(0x1), Mask(0x1)
	uint8_t BitPad_0x40_1 : 7; // 0x40(0x1)
	uint8_t Pad_0x41[0x7]; // 0x41(0x7)
	struct UAkAuxBus* ReverbAuxBus; // 0x48(0x8)
};

// Object: ScriptStruct GPAudioRuntime.GPAudioReverbConfig
// Size: 0x58 (Inherited: 0x0)
struct FGPAudioReverbConfig
{
	struct FString RTPCName; // 0x0(0x10)
	int32_t RTPCValue; // 0x10(0x4)
	float WidthMin; // 0x14(0x4)
	float WidthMax; // 0x18(0x4)
	float AreaMin; // 0x1C(0x4)
	float AreaMax; // 0x20(0x4)
	float HeightMin; // 0x24(0x4)
	float HeightMax; // 0x28(0x4)
	float SmallHeightRatioMin; // 0x2C(0x4)
	float SmallHeightRatioMax; // 0x30(0x4)
	float XYRatioMin; // 0x34(0x4)
	float XYRatioMax; // 0x38(0x4)
	uint8_t bNeedSpaceFront : 1; // 0x3C(0x1), Mask(0x1)
	uint8_t BitPad_0x3C_1 : 7; // 0x3C(0x1)
	uint8_t bNeedSpecificMaterial : 1; // 0x3D(0x1), Mask(0x1)
	uint8_t BitPad_0x3D_1 : 7; // 0x3D(0x1)
	uint8_t Pad_0x3E[0x2]; // 0x3E(0x2)
	struct TArray<struct TSoftObjectPtr<UPhysicalMaterial>> SurfaceMaterials; // 0x40(0x10)
	int32_t FallBackType; // 0x50(0x4)
	uint8_t Pad_0x54[0x4]; // 0x54(0x4)
};

// Object: ScriptStruct GPAudioRuntime.GPABakeSubZone
// Size: 0x80 (Inherited: 0x0)
struct FGPABakeSubZone
{
	uint8_t Pad_0x0[0x8]; // 0x0(0x8)
	struct FVector SourcePoint; // 0x8(0xC)
	struct FVector RelativeCenter; // 0x14(0xC)
	struct FVector BakeCellSize; // 0x20(0xC)
	uint8_t Pad_0x2C[0x4]; // 0x2C(0x4)
	struct TArray<uint8_t> BakeDataArray; // 0x30(0x10)
	struct TArray<uint16_t> CellIndexArray; // 0x40(0x10)
	struct FVector BakeBoxExtent; // 0x50(0xC)
	int32_t iOpenScale; // 0x5C(0x4)
	uint8_t Pad_0x60[0x20]; // 0x60(0x20)
};

// Object: ScriptStruct GPAudioRuntime.GPADoorWinZone
// Size: 0xB8 (Inherited: 0x80)
struct FGPADoorWinZone : FGPABakeSubZone
{
	EGPABakeSubZoneType ZoneType; // 0x7C(0x1)
	struct FVector OBBExtent; // 0x80(0xC)
	struct FVector AxisX; // 0x8C(0xC)
	struct FVector AxisY; // 0x98(0xC)
	struct FVector AxisZ; // 0xA4(0xC)
	int32_t XYRadiusSquared; // 0xB0(0x4)
	int32_t ZExtent; // 0xB4(0x4)
};

// Object: ScriptStruct GPAudioRuntime.GPAOBBBakeZone
// Size: 0xB0 (Inherited: 0x80)
struct FGPAOBBBakeZone : FGPABakeSubZone
{
	struct FVector OBBExtent; // 0x7C(0xC)
	struct FVector AxisX; // 0x88(0xC)
	struct FVector AxisY; // 0x94(0xC)
	struct FVector AxisZ; // 0xA0(0xC)
};

// Object: ScriptStruct GPAudioRuntime.GPACylinderBakeZone
// Size: 0x88 (Inherited: 0x80)
struct FGPACylinderBakeZone : FGPABakeSubZone
{
	int32_t XYRadiusSquared; // 0x7C(0x4)
	int32_t ZExtent; // 0x80(0x4)
};

// Object: ScriptStruct GPAudioRuntime.GPIndex24V8
// Size: 0x4 (Inherited: 0x0)
struct FGPIndex24V8
{
	int32_t Value; // 0x0(0x4)
};

// Object: ScriptStruct GPAudioRuntime.GPAOpenEarlyReflectionConfig
// Size: 0x28 (Inherited: 0x0)
struct FGPAOpenEarlyReflectionConfig
{
	uint8_t bTraceComplex : 1; // 0x0(0x1), Mask(0x1)
	uint8_t BitPad_0x0_1 : 7; // 0x0(0x1)
	uint8_t bReturnPhysicalMaterial : 1; // 0x1(0x1), Mask(0x1)
	uint8_t BitPad_0x1_1 : 7; // 0x1(0x1)
	uint8_t Pad_0x2[0x2]; // 0x2(0x2)
	float MaxTraceDistance; // 0x4(0x4)
	float ReflectionBoxExtentZ; // 0x8(0x4)
	float ReflectionBoxOffsetZ; // 0xC(0x4)
	float UpdateDistance; // 0x10(0x4)
	int32_t SmoothBuffNum; // 0x14(0x4)
	uint8_t bNeedForwardTrace : 1; // 0x18(0x1), Mask(0x1)
	uint8_t BitPad_0x18_1 : 7; // 0x18(0x1)
	uint8_t Pad_0x19[0x3]; // 0x19(0x3)
	int32_t OpenTangentMaxLen; // 0x1C(0x4)
	float ComplementTraceStepTime; // 0x20(0x4)
	uint8_t bNeedGuardUpdateWhenMoveEnd : 1; // 0x24(0x1), Mask(0x1)
	uint8_t BitPad_0x24_1 : 7; // 0x24(0x1)
	uint8_t bUseLittleAngleTraceHollow : 1; // 0x25(0x1), Mask(0x1)
	uint8_t BitPad_0x25_1 : 7; // 0x25(0x1)
	uint8_t bCombineSameTargetPlan : 1; // 0x26(0x1), Mask(0x1)
	uint8_t BitPad_0x26_1 : 7; // 0x26(0x1)
	uint8_t bUpdatePlanBoundByNewSameTargetHit : 1; // 0x27(0x1), Mask(0x1)
	uint8_t BitPad_0x27_1 : 7; // 0x27(0x1)
};

// Object: ScriptStruct GPAudioRuntime.GPAudioRTPCPair
// Size: 0xC (Inherited: 0x0)
struct FGPAudioRTPCPair
{
	struct FName RTPCName; // 0x0(0x8)
	float RTPCValue; // 0x8(0x4)
};

// Object: ScriptStruct GPAudioRuntime.GPAudioConditionRTPC
// Size: 0x20 (Inherited: 0x0)
struct FGPAudioConditionRTPC
{
	struct FString StrKey; // 0x0(0x10)
	float Value; // 0x10(0x4)
	uint8_t bNeedClear : 1; // 0x14(0x1), Mask(0x1)
	uint8_t BitPad_0x14_1 : 7; // 0x14(0x1)
	uint8_t Pad_0x15[0x3]; // 0x15(0x3)
	float ClearValue; // 0x18(0x4)
	EAudioCharacterViewState AvailableViewState; // 0x1C(0x1)
	EAudioCharacterGroup AvailableCharaterGroup; // 0x1D(0x1)
	uint8_t Pad_0x1E[0x2]; // 0x1E(0x2)
};

// Object: ScriptStruct GPAudioRuntime.GPAudioShadowGameAkKey
// Size: 0xC (Inherited: 0x0)
struct FGPAudioShadowGameAkKey
{
	struct FName StrKey; // 0x0(0x8)
	uint8_t bRelativeScaleAttenuation : 1; // 0x8(0x1), Mask(0x1)
	uint8_t BitPad_0x8_1 : 7; // 0x8(0x1)
	uint8_t Pad_0x9[0x3]; // 0x9(0x3)
};

// Object: ScriptStruct GPAudioRuntime.GPAudioServerNotifierSpeedInfo
// Size: 0x10 (Inherited: 0x0)
struct FGPAudioServerNotifierSpeedInfo
{
	struct UAnimNotify* NotifierClass; // 0x0(0x8)
	float FootStepInterval; // 0x8(0x4)
	float Speed; // 0xC(0x4)
};

// Object: ScriptStruct GPAudioRuntime.GPAColliderConfig
// Size: 0x18 (Inherited: 0x0)
struct FGPAColliderConfig
{
	struct FString DefaultSceneRtpcName; // 0x0(0x10)
	int32_t DefaultSpaceType; // 0x10(0x4)
	uint8_t Pad_0x14[0x4]; // 0x14(0x4)
};

// Object: ScriptStruct GPAudioRuntime.GPADynamicReverbConfig
// Size: 0x90 (Inherited: 0x0)
struct FGPADynamicReverbConfig
{
	uint8_t Enable : 1; // 0x0(0x1), Mask(0x1)
	uint8_t BitPad_0x0_1 : 7; // 0x0(0x1)
	uint8_t DebugLog : 1; // 0x1(0x1), Mask(0x1)
	uint8_t BitPad_0x1_1 : 7; // 0x1(0x1)
	uint8_t Pad_0x2[0x2]; // 0x2(0x2)
	float RtpcClearValue; // 0x4(0x4)
	int32_t MaxArea; // 0x8(0x4)
	int32_t MinArea; // 0xC(0x4)
	struct FString AreaRtpcName; // 0x10(0x10)
	struct FString XYRatioRtpcName; // 0x20(0x10)
	float MaxXYRatio; // 0x30(0x4)
	uint8_t Pad_0x34[0x4]; // 0x34(0x4)
	struct FString HeightRtpcName; // 0x38(0x10)
	float MinHeight; // 0x48(0x4)
	float MaxHeight; // 0x4C(0x4)
	struct FString WidthRtpcName; // 0x50(0x10)
	float MinWidth; // 0x60(0x4)
	float MaxWidth; // 0x64(0x4)
	struct FString SpaceTypeRtpcName; // 0x68(0x10)
	struct FString DefaultSceneRtpcName; // 0x78(0x10)
	int32_t DefaultSpaceType; // 0x88(0x4)
	uint8_t Pad_0x8C[0x4]; // 0x8C(0x4)
};

// Object: ScriptStruct GPAudioRuntime.GPAMeteringCallbackConfig
// Size: 0xC (Inherited: 0x0)
struct FGPAMeteringCallbackConfig
{
	uint8_t EnableGlobalMeteringCallback : 1; // 0x0(0x1), Mask(0x1)
	uint8_t BitPad_0x0_1 : 7; // 0x0(0x1)
	uint8_t Pad_0x1[0x3]; // 0x1(0x3)
	int32_t PeakBuffLength; // 0x4(0x4)
	uint8_t EnableTruePeak : 1; // 0x8(0x1), Mask(0x1)
	uint8_t BitPad_0x8_1 : 7; // 0x8(0x1)
	uint8_t EnableKWeight : 1; // 0x9(0x1), Mask(0x1)
	uint8_t BitPad_0x9_1 : 7; // 0x9(0x1)
	uint8_t Pad_0xA[0x2]; // 0xA(0x2)
};

// Object: ScriptStruct GPAudioRuntime.GPAFrameControlConfig
// Size: 0xC (Inherited: 0x0)
struct FGPAFrameControlConfig
{
	EGPATickFrameGroupType Group; // 0x0(0x1)
	uint8_t Pad_0x1[0x3]; // 0x1(0x3)
	int32_t ExcuteTimesPerFrame; // 0x4(0x4)
	float FrameTimeSeconds; // 0x8(0x4)
};

// Object: ScriptStruct GPAudioRuntime.GPANameWithDescribe
// Size: 0x20 (Inherited: 0x0)
struct FGPANameWithDescribe
{
	struct FName Key; // 0x0(0x8)
	struct FText Describe; // 0x8(0x18)
};

// Object: ScriptStruct GPAudioRuntime.GPAttenuationScale
// Size: 0x8 (Inherited: 0x0)
struct FGPAttenuationScale
{
	EGPAudioBlueprintType AudioConstType; // 0x0(0x1)
	uint8_t Pad_0x1[0x3]; // 0x1(0x3)
	float Scale; // 0x4(0x4)
};

// Object: ScriptStruct GPAudioRuntime.GPAudioEventAdditionalFunction
// Size: 0x10 (Inherited: 0x0)
struct FGPAudioEventAdditionalFunction
{
	uint8_t bMagazineDropAudioEnable : 1; // 0x0(0x1), Mask(0x1)
	uint8_t BitPad_0x0_1 : 7; // 0x0(0x1)
	uint8_t Pad_0x1[0x3]; // 0x1(0x3)
	int32_t MagazineDropAudioPlayTimes; // 0x4(0x4)
	uint8_t bShellDropAudioEnable : 1; // 0x8(0x1), Mask(0x1)
	uint8_t BitPad_0x8_1 : 7; // 0x8(0x1)
	uint8_t Pad_0x9[0x3]; // 0x9(0x3)
	int32_t ShellDropAudioPlayTimes; // 0xC(0x4)
};

// Object: ScriptStruct GPAudioRuntime.GPAudioActorDebugItem
// Size: 0x8 (Inherited: 0x0)
struct FGPAudioActorDebugItem
{
	uint8_t Pad_0x0[0x8]; // 0x0(0x8)
};

// Object: ScriptStruct GPAudioRuntime.GPAudioSysDeviceInfo
// Size: 0x18 (Inherited: 0x0)
struct FGPAudioSysDeviceInfo
{
	uint8_t bDefaultDevice : 1; // 0x0(0x1), Mask(0x1)
	uint8_t BitPad_0x0_1 : 7; // 0x0(0x1)
	uint8_t Pad_0x1[0x3]; // 0x1(0x3)
	uint32_t DeviceID; // 0x4(0x4)
	struct FString DeviceName; // 0x8(0x10)
};

// Object: ScriptStruct GPAudioRuntime.GPAudioTypeConfig
// Size: 0x18 (Inherited: 0x0)
struct FGPAudioTypeConfig
{
	struct FName ShadowAkName; // 0x0(0x8)
	struct TArray<EGPAttenuationScaleReason> AffectedReasonArray; // 0x8(0x10)
};

// Object: ScriptStruct GPAudioRuntime.GPScatteredAudioRow
// Size: 0x38 (Inherited: 0x8)
struct FGPScatteredAudioRow : FTableRowBase
{
	struct FString EventIDString; // 0x8(0x10)
	struct FSoftObjectPath EventPath; // 0x18(0x18)
	uint8_t bPreLoadWhenLoadTable : 1; // 0x30(0x1), Mask(0x1)
	uint8_t BitPad_0x30_1 : 7; // 0x30(0x1)
	uint8_t Pad_0x31[0x7]; // 0x31(0x7)
};

// Object: ScriptStruct GPAudioRuntime.GPAudioReverbPreset
// Size: 0x30 (Inherited: 0x0)
struct FGPAudioReverbPreset
{
	struct FString ReverbPresetName; // 0x0(0x10)
	struct UGPAudioAuxBus* GPAuxBus; // 0x10(0x8)
	struct FString AuxBusName; // 0x18(0x10)
	float SendLevel; // 0x28(0x4)
	uint8_t Pad_0x2C[0x4]; // 0x2C(0x4)
};

// Object: ScriptStruct GPAudioRuntime.GPAudioGunTailPreset
// Size: 0x28 (Inherited: 0x0)
struct FGPAudioGunTailPreset
{
	struct FString GunTailPresetName; // 0x0(0x10)
	struct FString GunTailRTPCName; // 0x10(0x10)
	float GunTailRTPCValue; // 0x20(0x4)
	uint8_t Pad_0x24[0x4]; // 0x24(0x4)
};

// Object: ScriptStruct GPAudioRuntime.GPAttenuationScaleConfig
// Size: 0xB0 (Inherited: 0x0)
struct FGPAttenuationScaleConfig
{
	uint8_t Pad_0x0[0xB0]; // 0x0(0xB0)
};

// Object: ScriptStruct GPAudioRuntime.GPAudioHDRConfigRow
// Size: 0x78 (Inherited: 0x8)
struct FGPAudioHDRConfigRow : FTableRowBase
{
	struct FString BusName; // 0x8(0x10)
	uint8_t bEnableBusHDR : 1; // 0x18(0x1), Mask(0x1)
	uint8_t BitPad_0x18_1 : 7; // 0x18(0x1)
	uint8_t Pad_0x19[0x7]; // 0x19(0x7)
	struct FString BusRTPCName; // 0x20(0x10)
	struct FString BusRTPCName2; // 0x30(0x10)
	float BusActiveThreshold; // 0x40(0x4)
	float StateConfirmTime; // 0x44(0x4)
	float InBusTime; // 0x48(0x4)
	float OutBusTime; // 0x4C(0x4)
	float DefaultBusPriority; // 0x50(0x4)
	float LogicVolume; // 0x54(0x4)
	float ReleaseTime; // 0x58(0x4)
	uint8_t Pad_0x5C[0x4]; // 0x5C(0x4)
	struct UCurveFloat* EnvelopeCurve; // 0x60(0x8)
	float StateOutConfirmTime; // 0x68(0x4)
	float BusActiveThresholdOut; // 0x6C(0x4)
	float BaseLineInDb; // 0x70(0x4)
	float ActiveThreshold; // 0x74(0x4)
};

// Object: ScriptStruct GPAudioRuntime.GPClippedWeaponFakeEventRecord
// Size: 0x4 (Inherited: 0x0)
struct FGPClippedWeaponFakeEventRecord
{
	uint32_t LastEventServerCount; // 0x0(0x4)
};

// Object: ScriptStruct GPAudioRuntime.PVSAudioActorInfo
// Size: 0x1C (Inherited: 0x0)
struct FPVSAudioActorInfo
{
	uint8_t bIsVisible : 1; // 0x0(0x1), Mask(0x1)
	uint8_t BitPad_0x0_1 : 7; // 0x0(0x1)
	uint8_t Pad_0x1[0x3]; // 0x1(0x3)
	struct FVector Location; // 0x4(0xC)
	float Speed; // 0x10(0x4)
	float LastUpdateTime; // 0x14(0x4)
	uint16_t StateParams; // 0x18(0x2)
	uint8_t Pad_0x1A[0x2]; // 0x1A(0x2)
};

// Object: ScriptStruct GPAudioRuntime.GPClippedWeaponFakeEventNeededInfo
// Size: 0x48 (Inherited: 0x0)
struct FGPClippedWeaponFakeEventNeededInfo
{
	int32_t WeaponEventType; // 0x0(0x4)
	uint32_t EventServerCount; // 0x4(0x4)
	uint64_t WeaponID; // 0x8(0x8)
	uint64_t SilencerFunId; // 0x10(0x8)
	uint8_t bIsAutoFire : 1; // 0x18(0x1), Mask(0x1)
	uint8_t BitPad_0x18_1 : 7; // 0x18(0x1)
	uint8_t Pad_0x19[0x7]; // 0x19(0x7)
	uint64_t WeaponOwnerUin; // 0x20(0x8)
	struct FVector EventTriggerLocation; // 0x28(0xC)
	struct FVector PredictedBulletHitLocation; // 0x34(0xC)
	struct FName SoundFXId; // 0x40(0x8)
};

// Object: ScriptStruct GPAudioRuntime.GPClippedWeaponFakeDistInfo
// Size: 0x18 (Inherited: 0x0)
struct FGPClippedWeaponFakeDistInfo
{
	struct TArray<uint64_t> WeaponIds; // 0x0(0x10)
	float MaxFakeDistance; // 0x10(0x4)
	uint8_t Pad_0x14[0x4]; // 0x14(0x4)
};

// Object: ScriptStruct GPAudioRuntime.GPAudioPOIArea
// Size: 0xD0 (Inherited: 0x0)
struct FGPAudioPOIArea
{
	uint8_t Pad_0x0[0xD0]; // 0x0(0xD0)
};

// Object: ScriptStruct GPAudioRuntime.AudioGraphPortal
// Size: 0x20 (Inherited: 0x0)
struct FAudioGraphPortal
{
	uint8_t Pad_0x0[0x20]; // 0x0(0x20)
};

// Object: ScriptStruct GPAudioRuntime.AudioGraphVolume
// Size: 0x20 (Inherited: 0x0)
struct FAudioGraphVolume
{
	uint8_t Pad_0x0[0x20]; // 0x0(0x20)
};

// Object: ScriptStruct GPAudioRuntime.GPAudioCompositeParam
// Size: 0x58 (Inherited: 0x0)
struct FGPAudioCompositeParam
{
	uint8_t Pad_0x0[0x8]; // 0x0(0x8)
	struct TArray<EGPAudioTag> ToAddAudioTags; // 0x8(0x10)
	struct TArray<EGPAudioTag> ToCleanAudioTags; // 0x18(0x10)
	struct TArray<struct FGPAudioRTPCPair> RTPCs; // 0x28(0x10)
	struct TArray<struct UGPAudioEventAsset*> AdditionEvents; // 0x38(0x10)
	struct TArray<struct FGPAudioLoopEvent> AdditionLoopEvents; // 0x48(0x10)
};

// Object: ScriptStruct GPAudioRuntime.GPAudioCompositeConfig
// Size: 0x28 (Inherited: 0x8)
struct FGPAudioCompositeConfig : FTableRowBase
{
	uint32_t RuleKey; // 0x8(0x4)
	uint8_t Pad_0xC[0x4]; // 0xC(0x4)
	uint64_t AudioFunctionId; // 0x10(0x8)
	EGPAudioComponent ComponentType; // 0x18(0x1)
	EGPAudioTag AudioTag; // 0x19(0x1)
	uint8_t Pad_0x1A[0x2]; // 0x1A(0x2)
	struct FGPAudioRTPCPair RTPCPair; // 0x1C(0xC)
};

// Object: ScriptStruct GPAudioRuntime.GPLoopEventList
// Size: 0x10 (Inherited: 0x0)
struct FGPLoopEventList
{
	struct TArray<uint32_t> LoopList; // 0x0(0x10)
};

// Object: ScriptStruct GPAudioRuntime.GPEndSubNamePair
// Size: 0x28 (Inherited: 0x0)
struct FGPEndSubNamePair
{
	struct FSoftObjectPath EndEvent; // 0x0(0x18)
	struct FString SubName; // 0x18(0x10)
};

// Object: ScriptStruct GPAudioRuntime.GPLoopEndPair
// Size: 0x28 (Inherited: 0x0)
struct FGPLoopEndPair
{
	struct FSoftObjectPath EndEvent; // 0x0(0x18)
	struct TArray<struct FSoftObjectPath> LoopEvents; // 0x18(0x10)
};

// Object: ScriptStruct GPAudioRuntime.GPAudioEventTrackKey
// Size: 0x30 (Inherited: 0x0)
struct FGPAudioEventTrackKey
{
	float Time; // 0x0(0x4)
	uint8_t Pad_0x4[0x4]; // 0x4(0x4)
	struct UGPAudioEventAKLink* GPAudioEvent; // 0x8(0x8)
	struct FString EventName; // 0x10(0x10)
	struct UGPAudioEventAsset* GPAudioEventGroup; // 0x20(0x8)
	int32_t GPAudioEventPlayFlag; // 0x28(0x4)
	uint8_t Pad_0x2C[0x4]; // 0x2C(0x4)
};

// Object: ScriptStruct GPAudioRuntime.MovieSceneGPAudioEventTemplate
// Size: 0x20 (Inherited: 0x18)
struct FMovieSceneGPAudioEventTemplate : FMovieSceneEvalTemplate
{
	struct UMovieSceneGPAudioEventSection* Section; // 0x18(0x8)
};

// Object: ScriptStruct GPAudioRuntime.FloorVibrationAudioRow
// Size: 0xC0 (Inherited: 0x10)
struct FFloorVibrationAudioRow : FDescRowBase
{
	EGPAudioFloorType FloorType; // 0x10(0x1)
	EGPAudioFootSoundType AudioType; // 0x11(0x1)
	uint8_t Pad_0x12[0x6]; // 0x12(0x6)
	struct FSoftObjectPath DefaultAudioEvent; // 0x18(0x18)
	struct FSoftObjectPath OptimizedAudioEvent; // 0x30(0x18)
	struct TMap<EPhysicalSurface, struct FSoftObjectPath> PhysicalMatMap; // 0x48(0x50)
	struct TArray<EPhysicalSurface> ReduceEffectPhysicalMaterials; // 0x98(0x10)
	struct FSoftObjectPath PathwayAudioEvent; // 0xA8(0x18)
};

// Object: ScriptStruct GPAudioRuntime.PhysicalMaterialAudioDataRow
// Size: 0x80 (Inherited: 0x10)
struct FPhysicalMaterialAudioDataRow : FDescRowBase
{
	EGPAudioFootSoundBodyType BodyType; // 0x10(0x1)
	EGPAudioFootSoundType AudioType; // 0x11(0x1)
	uint8_t bUnloadWithObject : 1; // 0x12(0x1), Mask(0x1)
	uint8_t BitPad_0x12_1 : 7; // 0x12(0x1)
	uint8_t Pad_0x13[0x5]; // 0x13(0x5)
	struct FSoftObjectPath DefaultAudioEvent; // 0x18(0x18)
	struct TMap<EPhysicalSurface, struct FSoftObjectPath> PhysicalMatMap; // 0x30(0x50)
};

// Object: ScriptStruct GPAudioRuntime.CharacterPreLoadItem
// Size: 0x50 (Inherited: 0x0)
struct FCharacterPreLoadItem
{
	struct TMap<uint32_t, struct FSoftObjectPath> EventIDToPathMap; // 0x0(0x50)
};

// Object: ScriptStruct GPAudioRuntime.CharacterPreLoadListInEditor
// Size: 0x18 (Inherited: 0x0)
struct FCharacterPreLoadListInEditor
{
	uint64_t ExpertId; // 0x0(0x8)
	struct TArray<struct FSoftObjectPath> AudioList; // 0x8(0x10)
};

// Object: Class GPAudioRuntime.AnimNotify_GPAudioBase
// Size: 0x40 (Inherited: 0x38)
struct UAnimNotify_GPAudioBase : UAnimNotify
{
	EGPAnimNotifyType AnimNotifyType; // 0x38(0x1)
	uint8_t bOnlyAsMark : 1; // 0x39(0x1), Mask(0x1)
	uint8_t BitPad_0x39_1 : 7; // 0x39(0x1)
	uint8_t LogicAudio1P : 1; // 0x3A(0x1), Mask(0x1)
	uint8_t BitPad_0x3A_1 : 7; // 0x3A(0x1)
	EGPAudioBlueprintType AudioTypeOverride; // 0x3B(0x1)
	uint8_t Pad_0x3C[0x4]; // 0x3C(0x4)


	// Object: Function GPAudioRuntime.AnimNotify_GPAudioBase.CheckNeedPlay
	// Flags: [Native|Public|BlueprintCallable|Const]
	// Offset: 0x82486f0
	// Params: [ Num(2) Size(0x9) ]
	uint8_t CheckNeedPlay(struct AActor* Owner);
	DEFINE_UE_CLASS_HELPERS(UAnimNotify_GPAudioBase, "AnimNotify_GPAudioBase")

};

// Object: Class GPAudioRuntime.AnimNotifyState_AudioEventBase
// Size: 0x30 (Inherited: 0x30)
struct UAnimNotifyState_AudioEventBase : UAnimNotifyState
{
	uint8_t bOnlyAsMark : 1; // 0x29(0x1), Mask(0x1)
	uint8_t LogicAudio1P : 1; // 0x2A(0x1), Mask(0x1)


	// Object: Function GPAudioRuntime.AnimNotifyState_AudioEventBase.CheckNeedPlay
	// Flags: [Native|Public|BlueprintCallable|Const]
	// Offset: 0x8248884
	// Params: [ Num(2) Size(0x9) ]
	uint8_t CheckNeedPlay(struct AActor* Owner);
	DEFINE_UE_CLASS_HELPERS(UAnimNotifyState_AudioEventBase, "AnimNotifyState_AudioEventBase")

};

// Object: Class GPAudioRuntime.AnimNotifyState_GPAudioEvent
// Size: 0x58 (Inherited: 0x30)
struct UAnimNotifyState_GPAudioEvent : UAnimNotifyState_AudioEventBase
{
	struct UGPAudioEventAsset* BeginAudioEvent; // 0x30(0x8)
	EGPAudioBlueprintType BeginAudioType; // 0x38(0x1)
	uint8_t Pad_0x39[0x7]; // 0x39(0x7)
	uint8_t bStopAudioOnSeqExit : 1; // 0x40(0x1), Mask(0x1)
	uint8_t BitPad_0x40_1 : 7; // 0x40(0x1)
	uint8_t Pad_0x41[0x7]; // 0x41(0x7)
	struct UGPAudioEventAsset* EndAudioEvent; // 0x48(0x8)
	EGPAudioBlueprintType EndAudioType; // 0x50(0x1)
	uint8_t bOnlyFPP : 1; // 0x51(0x1), Mask(0x1)
	uint8_t BitPad_0x51_1 : 7; // 0x51(0x1)
	uint8_t bOnlyTPP : 1; // 0x52(0x1), Mask(0x1)
	uint8_t BitPad_0x52_1 : 7; // 0x52(0x1)
	uint8_t Pad_0x53[0x5]; // 0x53(0x5)


	// Object: Function GPAudioRuntime.AnimNotifyState_GPAudioEvent.ReceivedNotifyEnd
	// Flags: [Final|Native|Public|BlueprintCallable|Const]
	// Offset: 0xf43346c
	// Params: [ Num(4) Size(0x15) ]
	void ReceivedNotifyEnd(struct USkeletalMeshComponent* MeshComp, struct UAnimSequenceBase* Animation, float TotalDuration, uint8_t bIsFPP);

	// Object: Function GPAudioRuntime.AnimNotifyState_GPAudioEvent.ReceivedNotifyBegin
	// Flags: [Final|Native|Public|BlueprintCallable|Const]
	// Offset: 0xf481b64
	// Params: [ Num(4) Size(0x15) ]
	void ReceivedNotifyBegin(struct USkeletalMeshComponent* MeshComp, struct UAnimSequenceBase* Animation, float TotalDuration, uint8_t bIsFPP);
	DEFINE_UE_CLASS_HELPERS(UAnimNotifyState_GPAudioEvent, "AnimNotifyState_GPAudioEvent")

};

// Object: Class GPAudioRuntime.AudioCylinderBuilder
// Size: 0x80 (Inherited: 0x80)
struct UAudioCylinderBuilder : UBrushBuilder
{	DEFINE_UE_CLASS_HELPERS(UAudioCylinderBuilder, "AudioCylinderBuilder")

};

// Object: Class GPAudioRuntime.AudioCylinderDebugActor
// Size: 0x440 (Inherited: 0x3A8)
struct AAudioCylinderDebugActor : AVolume
{
	struct FDebugCylinderHolder CylinderData; // 0x3A8(0x1C)
	int32_t CylinderIndex; // 0x3C4(0x4)
	float Height; // 0x3C8(0x4)
	float YRadius; // 0x3CC(0x4)
	float XRadius; // 0x3D0(0x4)
	struct FVector CylinderLocation; // 0x3D4(0xC)
	float Sides; // 0x3E0(0x4)
	float ZRotation; // 0x3E4(0x4)
	int32_t Segments; // 0x3E8(0x4)
	uint8_t Pad_0x3EC[0x44]; // 0x3EC(0x44)
	struct UAudioCylinderDebugBuilder* CylinderBuilder; // 0x430(0x8)
	struct UProceduralMeshComponent* ProcMesh; // 0x438(0x8)
	DEFINE_UE_CLASS_HELPERS(AAudioCylinderDebugActor, "AudioCylinderDebugActor")

};

// Object: Class GPAudioRuntime.AudioCylinderDebugBuilder
// Size: 0x98 (Inherited: 0x80)
struct UAudioCylinderDebugBuilder : UAudioCylinderBuilder
{
	float CylinderHeight; // 0x7C(0x4)
	float YRadius; // 0x80(0x4)
	float XRadius; // 0x84(0x4)
	int32_t Sides; // 0x88(0x4)
	struct FName GroupName; // 0x8C(0x8)
	uint8_t AlignToSide : 1; // 0x94(0x1), Mask(0x1)
	DEFINE_UE_CLASS_HELPERS(UAudioCylinderDebugBuilder, "AudioCylinderDebugBuilder")

};

// Object: Class GPAudioRuntime.EmissiveCubeComponent
// Size: 0x590 (Inherited: 0x580)
struct UEmissiveCubeComponent : UPrimitiveComponent
{
	struct UModel* Brush; // 0x578(0x8)
	struct FColor BoundaryColor; // 0x580(0x4)
	uint8_t bLighting : 1; // 0x584(0x1), Mask(0x1)
	uint8_t bLightingWhenContainsCamera : 1; // 0x585(0x1), Mask(0x1)
	uint8_t BitPad_0x58C_2 : 6; // 0x58C(0x1)
	uint8_t Pad_0x58D[0x3]; // 0x58D(0x3)
	DEFINE_UE_CLASS_HELPERS(UEmissiveCubeComponent, "EmissiveCubeComponent")

};

// Object: Class GPAudioRuntime.GameAudioVolume
// Size: 0x7B8 (Inherited: 0x3A8)
struct AGameAudioVolume : AVolume
{
	uint8_t bOrientedBoxCheckPoint : 1; // 0x3A8(0x1), Mask(0x1)
	uint8_t BitPad_0x3A8_1 : 7; // 0x3A8(0x1)
	uint8_t Pad_0x3A9[0x3]; // 0x3A9(0x3)
	float RadiusBorderSquared; // 0x3AC(0x4)
	uint8_t bStictVolumeHigh : 1; // 0x3B0(0x1), Mask(0x1)
	uint8_t BitPad_0x3B0_1 : 7; // 0x3B0(0x1)
	uint8_t Pad_0x3B1[0x3]; // 0x3B1(0x3)
	struct FVector VomueMeshObjectLocation; // 0x3B4(0xC)
	struct AActor* WorldPivotActor; // 0x3C0(0x8)
	struct TSoftObjectPtr<UGPAudioRoomBakeDataAsset> RoomBakeDataSoftObj; // 0x3C8(0x28)
	float VolumeOcclusion; // 0x3F0(0x4)
	uint8_t Pad_0x3F4[0x4]; // 0x3F4(0x4)
	struct TMap<EAudioCharacterGroup, struct UGPAudioEventAsset*> CharaterEnterEvents; // 0x3F8(0x50)
	struct TMap<EAudioCharacterGroup, struct UGPAudioEventAsset*> CharaterExitEvents; // 0x448(0x50)
	EGPARoomBakeInterpolationType RoomBakeInterpolationType; // 0x498(0x1)
	uint8_t bPlayEventAtLocation : 1; // 0x499(0x1), Mask(0x1)
	uint8_t BitPad_0x499_1 : 7; // 0x499(0x1)
	uint8_t Pad_0x49A[0x6]; // 0x49A(0x6)
	struct TArray<struct AGameAudioVolume*> ConnectedVolumes; // 0x4A0(0x10)
	EAudioVolumeType AudioVolumeType; // 0x4B0(0x1)
	uint8_t Pad_0x4B1[0x3]; // 0x4B1(0x3)
	int32_t SpaceType; // 0x4B4(0x4)
	struct FString AudioVolumeIDString; // 0x4B8(0x10)
	struct AGameAudioVolume* OwnedDiffractionAreaVolume; // 0x4C8(0x8)
	uint8_t bEnablePriority : 1; // 0x4D0(0x1), Mask(0x1)
	uint8_t BitPad_0x4D0_1 : 7; // 0x4D0(0x1)
	uint8_t Pad_0x4D1[0x3]; // 0x4D1(0x3)
	float Priority; // 0x4D4(0x4)
	struct FString ReverbPresetName_1P; // 0x4D8(0x10)
	struct FString ReverbPresetName_3P; // 0x4E8(0x10)
	struct FString GunTailPresetName; // 0x4F8(0x10)
	struct UGPAudioEventAsset* EnterEvent; // 0x508(0x8)
	struct UGPAudioEventAsset* ExitEvent; // 0x510(0x8)
	struct UGPAudioEventAsset* EnterEventDueToPriority; // 0x518(0x8)
	struct UGPAudioEventAsset* ExitEventDueToPriority; // 0x520(0x8)
	struct TMap<EAudioWeatherType, struct UGPAudioEventAsset*> EnterEventsForWeather; // 0x528(0x50)
	struct TMap<EAudioWeatherType, struct UGPAudioEventAsset*> ExitEventsForWeather; // 0x578(0x50)
	struct FString EnterMusicEventName; // 0x5C8(0x10)
	struct FString ExitMusicEventName; // 0x5D8(0x10)
	struct TArray<struct FGPAudioConditionRTPC> CharacterRTPCs; // 0x5E8(0x10)
	struct TArray<struct FGameAudioVolumeBounding> DetailGeos; // 0x5F8(0x10)
	struct TArray<struct FGameAudioVolumeBounding> ExcludeGeos; // 0x608(0x10)
	struct TArray<struct AActor*> RelatedBreakableItems; // 0x618(0x10)
	float FullBrokenPercent; // 0x628(0x4)
	uint8_t Pad_0x62C[0x74]; // 0x62C(0x74)
	struct UGPAudioRoomBakeDataAsset* m_RoomBakeData; // 0x6A0(0x8)
	uint8_t Pad_0x6A8[0x110]; // 0x6A8(0x110)


	// Object: Function GPAudioRuntime.GameAudioVolume.OnAudioWeatherTypeChanged
	// Flags: [Final|Native|Public]
	// Offset: 0x824c7f4
	// Params: [ Num(1) Size(0x8) ]
	void OnAudioWeatherTypeChanged(EAudioWeatherType WeatherType);
	DEFINE_UE_CLASS_HELPERS(AGameAudioVolume, "GameAudioVolume")

};

// Object: Class GPAudioRuntime.GameAcousticPortal
// Size: 0x850 (Inherited: 0x7B8)
struct AGameAcousticPortal : AGameAudioVolume
{
	EAkAcousticPortalState InitialState; // 0x7B8(0x1)
	EAudioPortalType PortalSizeType; // 0x7B9(0x1)
	uint8_t Pad_0x7BA[0x6]; // 0x7BA(0x6)
	struct AGameAudioVolume* FrontRoomVolume; // 0x7C0(0x8)
	struct AGameAudioVolume* BackRoomVolume; // 0x7C8(0x8)
	uint8_t bEnableDebugDisplay : 1; // 0x7D0(0x1), Mask(0x1)
	uint8_t BitPad_0x7D0_1 : 7; // 0x7D0(0x1)
	uint8_t Pad_0x7D1[0x3]; // 0x7D1(0x3)
	float CustomOpenTransmissionBlock; // 0x7D4(0x4)
	float CustomClosedTransmissionBlock; // 0x7D8(0x4)
	float CustomDiffractionScalar; // 0x7DC(0x4)
	struct UArrowComponent* ArrowComponent; // 0x7E0(0x8)
	uint8_t Pad_0x7E8[0x68]; // 0x7E8(0x68)


	// Object: Function GPAudioRuntime.GameAcousticPortal.GetCurrentState
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x8248b5c
	// Params: [ Num(1) Size(0x1) ]
	EAkAcousticPortalState GetCurrentState();

	// Object: Function GPAudioRuntime.GameAcousticPortal.EnablePortal
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x8248ab0
	// Params: [ Num(1) Size(0x10) ]
	void EnablePortal(struct FString InReason);

	// Object: Function GPAudioRuntime.GameAcousticPortal.DisablePortal
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x8248a04
	// Params: [ Num(1) Size(0x10) ]
	void DisablePortal(struct FString InReason);
	DEFINE_UE_CLASS_HELPERS(AGameAcousticPortal, "GameAcousticPortal")

};

// Object: Class GPAudioRuntime.GameAkComponent
// Size: 0x14E0 (Inherited: 0x6D0)
struct UGameAkComponent : UAkComponent
{
	uint8_t Pad_0x6D0[0x1AC]; // 0x6D0(0x1AC)
	uint8_t bNeedInitCharacterAtBeginPlay : 1; // 0x87C(0x1), Mask(0x1)
	uint8_t BitPad_0x87C_1 : 7; // 0x87C(0x1)
	uint8_t bNeedUpdateSpatialPosition : 1; // 0x87D(0x1), Mask(0x1)
	uint8_t BitPad_0x87D_1 : 7; // 0x87D(0x1)
	uint8_t bUseRoomBakeData : 1; // 0x87E(0x1), Mask(0x1)
	uint8_t BitPad_0x87E_1 : 7; // 0x87E(0x1)
	uint8_t bUseSpatialVolumeRoomReverb : 1; // 0x87F(0x1), Mask(0x1)
	uint8_t BitPad_0x87F_1 : 7; // 0x87F(0x1)
	EAudioCharacterGroup CharterGroup; // 0x880(0x1)
	EAudioCharacterViewState ViewState; // 0x881(0x1)
	uint8_t Pad_0x882[0x2]; // 0x882(0x2)
	struct TWeakObjectPtr<struct AGameAudioVolume> ParentVolume; // 0x884(0x8)
	struct TWeakObjectPtr<struct AGameAudioVolume> ReverbVolume; // 0x88C(0x8)
	struct TWeakObjectPtr<struct AGameAudioVolume> GunTailVolume; // 0x894(0x8)
	struct TWeakObjectPtr<struct AGameAudioVolume> SpatialVolumePtr; // 0x89C(0x8)
	struct TWeakObjectPtr<struct AGameAudioVolume> PortalVolume; // 0x8A4(0x8)
	uint8_t Pad_0x8AC[0x4]; // 0x8AC(0x4)
	struct UGPAudioReverbSceneDataAsset* ReverbSceneDataAsset; // 0x8B0(0x8)
	struct UGameAudioOpenEarlyReflection* OpenEarlyReflection; // 0x8B8(0x8)
	uint8_t bNeedManagerTickInfo : 1; // 0x8C0(0x1), Mask(0x1)
	uint8_t BitPad_0x8C0_1 : 7; // 0x8C0(0x1)
	uint8_t bNeedDiffraction : 1; // 0x8C1(0x1), Mask(0x1)
	uint8_t BitPad_0x8C1_1 : 7; // 0x8C1(0x1)
	uint8_t bNeedCheckIndoorArea : 1; // 0x8C2(0x1), Mask(0x1)
	uint8_t BitPad_0x8C2_1 : 7; // 0x8C2(0x1)
	uint8_t bNeedUseParentGameAk : 1; // 0x8C3(0x1), Mask(0x1)
	uint8_t BitPad_0x8C3_1 : 7; // 0x8C3(0x1)
	uint8_t bNeedOutdoorObstruction : 1; // 0x8C4(0x1), Mask(0x1)
	uint8_t BitPad_0x8C4_1 : 7; // 0x8C4(0x1)
	uint8_t bNeedUpdateLimitSpatialInfo : 1; // 0x8C5(0x1), Mask(0x1)
	uint8_t BitPad_0x8C5_1 : 7; // 0x8C5(0x1)
	uint8_t Pad_0x8C6[0x2]; // 0x8C6(0x2)
	float LimitSpatialInfoUpdateRadius; // 0x8C8(0x4)
	float LimitSpatialInfoUpdateInterval; // 0x8CC(0x4)
	uint8_t Pad_0x8D0[0x10]; // 0x8D0(0x10)
	struct AGameAudioDiffractionVolume* CurrentDiffractionVolume; // 0x8E0(0x8)
	uint8_t Pad_0x8E8[0x20]; // 0x8E8(0x20)
	struct TArray<struct TWeakObjectPtr<struct AGameAudioVolume>> ContainedVolumes; // 0x908(0x10)
	uint8_t Pad_0x918[0x106]; // 0x918(0x106)
	uint8_t bCheckFloorNonCharacter : 1; // 0xA1E(0x1), Mask(0x1)
	uint8_t BitPad_0xA1E_1 : 7; // 0xA1E(0x1)
	uint8_t Pad_0xA1F[0x69]; // 0xA1F(0x69)
	struct TArray<struct ACHARACTER*> AllowObserveredCharacters; // 0xA88(0x10)
	uint8_t Pad_0xA98[0x911]; // 0xA98(0x911)
	uint8_t bInBlastShield : 1; // 0x13A9(0x1), Mask(0x1)
	uint8_t BitPad_0x13A9_1 : 7; // 0x13A9(0x1)
	uint8_t Pad_0x13AA[0x136]; // 0x13AA(0x136)


	// Object: Function GPAudioRuntime.GameAkComponent.TickWaterState
	// Flags: [Final|Native|Public]
	// Offset: 0x8249654
	// Params: [ Num(1) Size(0x8) ]
	void TickWaterState(struct UGameAkComponent* InListener);

	// Object: Function GPAudioRuntime.GameAkComponent.StopGameAk
	// Flags: [BlueprintCosmetic|Native|Public|BlueprintCallable]
	// Offset: 0x8249638
	// Params: [ Num(0) Size(0x0) ]
	void StopGameAk();

	// Object: Function GPAudioRuntime.GameAkComponent.StopDoppler
	// Flags: [Final|BlueprintCosmetic|Native|Public|BlueprintCallable]
	// Offset: 0x8249624
	// Params: [ Num(0) Size(0x0) ]
	void StopDoppler();

	// Object: Function GPAudioRuntime.GameAkComponent.StartDoppler
	// Flags: [Final|BlueprintCosmetic|Native|Public|BlueprintCallable]
	// Offset: 0x8249548
	// Params: [ Num(2) Size(0x8) ]
	void StartDoppler(float ScalingFactor, float TimeStep);

	// Object: Function GPAudioRuntime.GameAkComponent.SetWaterStateRTPC
	// Flags: [Final|Native|Public]
	// Offset: 0x82494a4
	// Params: [ Num(1) Size(0x4) ]
	void SetWaterStateRTPC(float TargetWaterStateRTPCValue);

	// Object: Function GPAudioRuntime.GameAkComponent.SetWaterStateCheckService
	// Flags: [Final|Native|Public]
	// Offset: 0x82493f8
	// Params: [ Num(1) Size(0x1) ]
	void SetWaterStateCheckService(uint8_t bEnable);

	// Object: Function GPAudioRuntime.GameAkComponent.SetWaterPreset
	// Flags: [Final|Native|Public]
	// Offset: 0x8249354
	// Params: [ Num(1) Size(0x1) ]
	void SetWaterPreset(EGPAudioWaterPreset InState);

	// Object: Function GPAudioRuntime.GameAkComponent.PostGPAudio
	// Flags: [Final|BlueprintCosmetic|Native|Public|BlueprintCallable]
	// Offset: 0x82491dc
	// Params: [ Num(5) Size(0x14) ]
	struct FGPAudioFuturePlayingID PostGPAudio(struct UGPAudioEventAsset* AudioAsset, uint8_t bMakeNoise, EGPAudioBlueprintType AudioType, uint8_t bPreCutted);

	// Object: Function GPAudioRuntime.GameAkComponent.PlayPathwayAudio
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x82490fc
	// Params: [ Num(2) Size(0x2) ]
	void PlayPathwayAudio(EGPAudioFootSoundType InAudioFootType, EGPAudioFloorType InFloorType);

	// Object: Function GPAudioRuntime.GameAkComponent.PlayFoliageOverlapStirAudio
	// Flags: [Final|BlueprintCosmetic|Native|Public|BlueprintCallable]
	// Offset: 0x82490e8
	// Params: [ Num(0) Size(0x0) ]
	void PlayFoliageOverlapStirAudio();

	// Object: Function GPAudioRuntime.GameAkComponent.PlayFoliageOverlapAudio
	// Flags: [Final|BlueprintCosmetic|Native|Public|BlueprintCallable]
	// Offset: 0x8249044
	// Params: [ Num(1) Size(0x8) ]
	void PlayFoliageOverlapAudio(struct UGPAudioEventAsset* AudioEvent);

	// Object: Function GPAudioRuntime.GameAkComponent.OnAudioFinishCallbackDelay
	// Flags: [Final|Native|Public]
	// Offset: 0x8248f64
	// Params: [ Num(2) Size(0x8) ]
	void OnAudioFinishCallbackDelay(EGPEventCallbackType CallbackType, int32_t PlayingId);

	// Object: Function GPAudioRuntime.GameAkComponent.OnAudioFinishCallback
	// Flags: [Final|Native|Public]
	// Offset: 0x8248e84
	// Params: [ Num(2) Size(0x8) ]
	void OnAudioFinishCallback(EGPEventCallbackType CallbackType, int32_t PlayingId);

	// Object: Function GPAudioRuntime.GameAkComponent.OnAttenuationScaleUpdated
	// Flags: [Final|Native|Public]
	// Offset: 0x106bfe9c
	// Params: [ Num(0) Size(0x0) ]
	void OnAttenuationScaleUpdated();

	// Object: Function GPAudioRuntime.GameAkComponent.NeedCheckWaterBeforePlay
	// Flags: [Final|Native|Public]
	// Offset: 0x8248e4c
	// Params: [ Num(1) Size(0x1) ]
	uint8_t NeedCheckWaterBeforePlay();

	// Object: Function GPAudioRuntime.GameAkComponent.IsGameAkUnderWater
	// Flags: [Final|Native|Public|Const]
	// Offset: 0x8248e14
	// Params: [ Num(1) Size(0x1) ]
	uint8_t IsGameAkUnderWater();

	// Object: Function GPAudioRuntime.GameAkComponent.GetFootLocation
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults|Const]
	// Offset: 0x8248d58
	// Params: [ Num(2) Size(0xD) ]
	uint8_t GetFootLocation(struct FVector& FootLocation);

	// Object: Function GPAudioRuntime.GameAkComponent.CheckWaterFrameLimit
	// Flags: [Final|Native|Public]
	// Offset: 0x8248d20
	// Params: [ Num(1) Size(0x1) ]
	uint8_t CheckWaterFrameLimit();

	// Object: Function GPAudioRuntime.GameAkComponent.CheckGameAkWaterState
	// Flags: [Final|Native|Public]
	// Offset: 0x8248d0c
	// Params: [ Num(0) Size(0x0) ]
	void CheckGameAkWaterState();
	DEFINE_UE_CLASS_HELPERS(UGameAkComponent, "GameAkComponent")

};

// Object: Class GPAudioRuntime.GameAreaAudioVolume
// Size: 0x7B8 (Inherited: 0x7B8)
struct AGameAreaAudioVolume : AGameAudioVolume
{	DEFINE_UE_CLASS_HELPERS(AGameAreaAudioVolume, "GameAreaAudioVolume")

};

// Object: Class GPAudioRuntime.GameAudioColliderVolume
// Size: 0x3E0 (Inherited: 0x3A8)
struct AGameAudioColliderVolume : AVolume
{
	struct TSoftObjectPtr<UGPAudioColliderDataAsset> ColliderDataSoftObj; // 0x3A8(0x28)
	uint8_t Pad_0x3D0[0x10]; // 0x3D0(0x10)
	DEFINE_UE_CLASS_HELPERS(AGameAudioColliderVolume, "GameAudioColliderVolume")

};

// Object: Class GPAudioRuntime.AudioGraphFunctions
// Size: 0x28 (Inherited: 0x28)
struct UAudioGraphFunctions : UBlueprintFunctionLibrary
{	DEFINE_UE_CLASS_HELPERS(UAudioGraphFunctions, "AudioGraphFunctions")

};

// Object: Class GPAudioRuntime.GameAudioDiffractionVolume
// Size: 0x860 (Inherited: 0x7B8)
struct AGameAudioDiffractionVolume : AGameAudioVolume
{
	struct TArray<struct FPresetIdAndArea> ReverbPresetNameAndArea; // 0x7B8(0x10)
	struct TArray<struct FPresetIdAndArea> GunTailPresetIdAndArea; // 0x7C8(0x10)
	struct TArray<struct AGameAudioVolume*> SpatialVolumes; // 0x7D8(0x10)
	struct TArray<struct AGameAcousticPortal*> Portals; // 0x7E8(0x10)
	struct TArray<struct AGameAcousticPortal*> ConnectedPortals; // 0x7F8(0x10)
	struct FSpatialAudioOctree VolumeOctree; // 0x808(0x58)
	DEFINE_UE_CLASS_HELPERS(AGameAudioDiffractionVolume, "GameAudioDiffractionVolume")

};

// Object: Class GPAudioRuntime.GameAudioDetailVolumeForEditor
// Size: 0x490 (Inherited: 0x3A8)
struct AGameAudioDetailVolumeForEditor : AVolume
{
	uint8_t Pad_0x3A8[0x8]; // 0x3A8(0x8)
	struct FGameAudioVolumeBounding VolumeBounding; // 0x3B0(0x90)
	struct TWeakObjectPtr<struct AGameAudioVolume> ParentVolume; // 0x440(0x8)
	uint8_t Pad_0x448[0x48]; // 0x448(0x48)
	DEFINE_UE_CLASS_HELPERS(AGameAudioDetailVolumeForEditor, "GameAudioDetailVolumeForEditor")

};

// Object: Class GPAudioRuntime.GameAudioOpenEarlyReflection
// Size: 0xCF0 (Inherited: 0x240)
struct UGameAudioOpenEarlyReflection : USceneComponent
{
	struct FGPAOpenEarlyReflectionConfig Config; // 0x240(0x28)
	uint8_t bEnableReflection : 1; // 0x268(0x1), Mask(0x1)
	uint8_t BitPad_0x268_1 : 7; // 0x268(0x1)
	EGPAOpenReflectionGeometryType GeometryType; // 0x269(0x1)
	uint8_t bEnableWeedOutLog : 1; // 0x26A(0x1), Mask(0x1)
	uint8_t BitPad_0x26A_1 : 7; // 0x26A(0x1)
	uint8_t bEnableAudioCollider : 1; // 0x26B(0x1), Mask(0x1)
	uint8_t BitPad_0x26B_1 : 7; // 0x26B(0x1)
	uint8_t bEnableUpdateGeometry : 1; // 0x26C(0x1), Mask(0x1)
	uint8_t BitPad_0x26C_1 : 7; // 0x26C(0x1)
	uint8_t Pad_0x26D[0x3]; // 0x26D(0x3)
	struct TArray<struct UAkAcousticTexture*> AkAcousticTextures; // 0x270(0x10)
	struct UGPAudioColliderDataAsset* ColliderData; // 0x280(0x8)
	struct TWeakObjectPtr<struct AGameAudioColliderVolume> CurrentVolume; // 0x288(0x8)
	uint8_t Pad_0x290[0xA60]; // 0x290(0xA60)
	DEFINE_UE_CLASS_HELPERS(UGameAudioOpenEarlyReflection, "GameAudioOpenEarlyReflection")

};

// Object: Class GPAudioRuntime.GameAudioOpenEarlyReflection3p
// Size: 0xCF0 (Inherited: 0xCF0)
struct UGameAudioOpenEarlyReflection3p : UGameAudioOpenEarlyReflection
{	DEFINE_UE_CLASS_HELPERS(UGameAudioOpenEarlyReflection3p, "GameAudioOpenEarlyReflection3p")

};

// Object: Class GPAudioRuntime.GameAudioPointEmitter
// Size: 0x138 (Inherited: 0xF8)
struct UGameAudioPointEmitter : UActorComponent
{
	uint8_t bNeedObstructionOcclusion : 1; // 0xF8(0x1), Mask(0x1)
	uint8_t BitPad_0xF8_1 : 7; // 0xF8(0x1)
	uint8_t Pad_0xF9[0x7]; // 0xF9(0x7)
	struct UGPAudioEventAsset* LoopEvent; // 0x100(0x8)
	struct UGameAkComponent* AkEmitter; // 0x108(0x8)
	uint8_t bForceUseMaxDistance : 1; // 0x110(0x1), Mask(0x1)
	uint8_t BitPad_0x110_1 : 7; // 0x110(0x1)
	uint8_t Pad_0x111[0x3]; // 0x111(0x3)
	float MaxDistance; // 0x114(0x4)
	float DistanceToListener; // 0x118(0x4)
	float StopTransitionMS; // 0x11C(0x4)
	uint8_t Pad_0x120[0x18]; // 0x120(0x18)
	DEFINE_UE_CLASS_HELPERS(UGameAudioPointEmitter, "GameAudioPointEmitter")

};

// Object: Class GPAudioRuntime.GameAudioPolygonEmitter
// Size: 0x160 (Inherited: 0xF8)
struct UGameAudioPolygonEmitter : UActorComponent
{
	uint8_t bNeedObstructionOcclusion : 1; // 0xF8(0x1), Mask(0x1)
	uint8_t BitPad_0xF8_1 : 7; // 0xF8(0x1)
	uint8_t Pad_0xF9[0x7]; // 0xF9(0x7)
	struct UGPAudioEventAsset* LoopEvent; // 0x100(0x8)
	struct UGameAkComponent* AkEmitter; // 0x108(0x8)
	float Distance3D; // 0x110(0x4)
	float DistanceToListener; // 0x114(0x4)
	uint8_t bStopOutOfRange : 1; // 0x118(0x1), Mask(0x1)
	uint8_t BitPad_0x118_1 : 7; // 0x118(0x1)
	uint8_t Pad_0x119[0x3]; // 0x119(0x3)
	struct FVector CurrentClosestPoint; // 0x11C(0xC)
	struct FInterpCurveVector SplineCurve; // 0x128(0x18)
	EGPAudioEnvEmitterState EmitterState; // 0x140(0x1)
	uint8_t Pad_0x141[0x3]; // 0x141(0x3)
	float StopTransitionMS; // 0x144(0x4)
	uint8_t Pad_0x148[0x18]; // 0x148(0x18)


	// Object: Function GPAudioRuntime.GameAudioPolygonEmitter.Play3DAudio
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0x824c2e8
	// Params: [ Num(2) Size(0x9) ]
	uint8_t Play3DAudio(struct UGPAudioEventAsset* Event);
	DEFINE_UE_CLASS_HELPERS(UGameAudioPolygonEmitter, "GameAudioPolygonEmitter")

};

// Object: Class GPAudioRuntime.GameAudioRiverEmitter
// Size: 0x168 (Inherited: 0xF8)
struct UGameAudioRiverEmitter : UActorComponent
{
	uint8_t bNeedObstructionOcclusion : 1; // 0xF8(0x1), Mask(0x1)
	uint8_t BitPad_0xF8_1 : 7; // 0xF8(0x1)
	uint8_t Pad_0xF9[0x7]; // 0xF9(0x7)
	struct UGPAudioEventAsset* LoopEvent; // 0x100(0x8)
	struct FInterpCurveVector SplineCurve; // 0x108(0x18)
	struct UGameAkComponent* AkEmitter; // 0x120(0x8)
	float Distance2D; // 0x128(0x4)
	float Distance3D; // 0x12C(0x4)
	float DistanceToListener; // 0x130(0x4)
	uint8_t bStopOutOfRange : 1; // 0x134(0x1), Mask(0x1)
	uint8_t BitPad_0x134_1 : 7; // 0x134(0x1)
	EGPAudioEnvEmitterState EmitterState; // 0x135(0x1)
	uint8_t Pad_0x136[0x2]; // 0x136(0x2)
	struct FVector CurrentClosestPoint; // 0x138(0xC)
	float StopTransitionMS; // 0x144(0x4)
	uint8_t Pad_0x148[0x20]; // 0x148(0x20)


	// Object: Function GPAudioRuntime.GameAudioRiverEmitter.Play3DAudio
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0x824c54c
	// Params: [ Num(2) Size(0x9) ]
	uint8_t Play3DAudio(struct UGPAudioEventAsset* Event);

	// Object: Function GPAudioRuntime.GameAudioRiverEmitter.CopySplineCurvePoints
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x824c4a8
	// Params: [ Num(1) Size(0x8) ]
	void CopySplineCurvePoints(struct USplineComponent* CopyFrom);

	// Object: Function GPAudioRuntime.GameAudioRiverEmitter.CopySplineCurve
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x824c3cc
	// Params: [ Num(2) Size(0x10) ]
	void CopySplineCurve(struct USplineComponent* CopyTo, struct USplineComponent* CopyFrom);
	DEFINE_UE_CLASS_HELPERS(UGameAudioRiverEmitter, "GameAudioRiverEmitter")

};

// Object: Class GPAudioRuntime.GameAudioVolumeEmitter
// Size: 0x808 (Inherited: 0x7B8)
struct AGameAudioVolumeEmitter : AGameAudioVolume
{
	uint8_t bNeedObstructionOcclusion : 1; // 0x7B8(0x1), Mask(0x1)
	uint8_t BitPad_0x7B8_1 : 7; // 0x7B8(0x1)
	uint8_t Pad_0x7B9[0x7]; // 0x7B9(0x7)
	struct UGPAudioEventAsset* LoopEvent; // 0x7C0(0x8)
	uint8_t bCheckVolume : 1; // 0x7C8(0x1), Mask(0x1)
	uint8_t BitPad_0x7C8_1 : 7; // 0x7C8(0x1)
	uint8_t Pad_0x7C9[0x7]; // 0x7C9(0x7)
	struct UGameAkComponent* AkEmitter; // 0x7D0(0x8)
	uint8_t bForceUseMaxDistance : 1; // 0x7D8(0x1), Mask(0x1)
	uint8_t BitPad_0x7D8_1 : 7; // 0x7D8(0x1)
	uint8_t Pad_0x7D9[0x3]; // 0x7D9(0x3)
	float MaxDistance; // 0x7DC(0x4)
	float StopTransitionMS; // 0x7E0(0x4)
	uint8_t bCheckParticleQuality : 1; // 0x7E4(0x1), Mask(0x1)
	uint8_t BitPad_0x7E4_1 : 7; // 0x7E4(0x1)
	EPerfGearQualityLevel MinimalPlayQuality; // 0x7E5(0x1)
	EPerfGearQualityLevel MinimalPlayQuality_Mobile; // 0x7E6(0x1)
	uint8_t Pad_0x7E7[0x21]; // 0x7E7(0x21)
	DEFINE_UE_CLASS_HELPERS(AGameAudioVolumeEmitter, "GameAudioVolumeEmitter")

};

// Object: Class GPAudioRuntime.GameAudioSlapbackEmitter
// Size: 0x870 (Inherited: 0x808)
struct AGameAudioSlapbackEmitter : AGameAudioVolumeEmitter
{
	uint8_t bAnyDirSlapback : 1; // 0x808(0x1), Mask(0x1)
	uint8_t BitPad_0x808_1 : 7; // 0x808(0x1)
	EGameAudioVolumeOutOfPlanType OutOfPlanType; // 0x809(0x1)
	uint8_t Pad_0x80A[0x2]; // 0x80A(0x2)
	float MinSlapbackDisM; // 0x80C(0x4)
	float MaxSlapbackDisM; // 0x810(0x4)
	float AcousticsCoeff; // 0x814(0x4)
	float SetRTPCDeltaM; // 0x818(0x4)
	int32_t SectorAngle; // 0x81C(0x4)
	int32_t ForwardSlapbakAngle; // 0x820(0x4)
	uint8_t Pad_0x824[0x4C]; // 0x824(0x4C)
	DEFINE_UE_CLASS_HELPERS(AGameAudioSlapbackEmitter, "GameAudioSlapbackEmitter")

};

// Object: Class GPAudioRuntime.GameReverbVolume
// Size: 0x7D0 (Inherited: 0x7B8)
struct AGameReverbVolume : AGameAudioVolume
{
	struct UGPALateReverbComponent* LateReverb1P; // 0x7B8(0x8)
	struct UGPALateReverbComponent* LateReverb3P; // 0x7C0(0x8)
	uint8_t bUseAudioEvent : 1; // 0x7C8(0x1), Mask(0x1)
	uint8_t BitPad_0x7C8_1 : 7; // 0x7C8(0x1)
	uint8_t Pad_0x7C9[0x7]; // 0x7C9(0x7)
	DEFINE_UE_CLASS_HELPERS(AGameReverbVolume, "GameReverbVolume")

};

// Object: Class GPAudioRuntime.GameSpatialAudioManager
// Size: 0x2A8 (Inherited: 0x28)
struct UGameSpatialAudioManager : UObject
{
	uint8_t Pad_0x28[0x68]; // 0x28(0x68)
	struct TArray<struct AGameAudioVolume*> DiffractionVolumes; // 0x90(0x10)
	struct TArray<struct AGameAudioVolume*> GameAreaVolumes; // 0xA0(0x10)
	struct AGameSpatialAudioVolume* OutdoorVolume; // 0xB0(0x8)
	uint8_t Pad_0xB8[0x1F0]; // 0xB8(0x1F0)
	DEFINE_UE_CLASS_HELPERS(UGameSpatialAudioManager, "GameSpatialAudioManager")

};

// Object: Class GPAudioRuntime.GameSpatialAudioVolume
// Size: 0x828 (Inherited: 0x7B8)
struct AGameSpatialAudioVolume : AGameAudioVolume
{
	struct UAkSurfaceReflectorSetComponent* SurfaceReflectorSet; // 0x7B8(0x8)
	struct UGPALateReverbComponent* LateReverb1P; // 0x7C0(0x8)
	struct UGPALateReverbComponent* LateReverb3P; // 0x7C8(0x8)
	struct UAkRoomComponent* Room; // 0x7D0(0x8)
	float TransmissionRate; // 0x7D8(0x4)
	int32_t FloorNum; // 0x7DC(0x4)
	uint8_t bIsOutdoorSpatialVolume : 1; // 0x7E0(0x1), Mask(0x1)
	uint8_t BitPad_0x7E0_1 : 7; // 0x7E0(0x1)
	uint8_t Pad_0x7E1[0x7]; // 0x7E1(0x7)
	struct TArray<struct AGameAcousticPortal*> Portals; // 0x7E8(0x10)
	struct FString ConVReverbPresetName_1P; // 0x7F8(0x10)
	struct FString ConVReverbPresetName_3P; // 0x808(0x10)
	uint8_t ManualSpecifyConvPreset : 1; // 0x818(0x1), Mask(0x1)
	uint8_t BitPad_0x818_1 : 7; // 0x818(0x1)
	uint8_t Pad_0x819[0x7]; // 0x819(0x7)
	struct UTextRenderComponent* PreviewConvolutionInfoComponent; // 0x820(0x8)
	DEFINE_UE_CLASS_HELPERS(AGameSpatialAudioVolume, "GameSpatialAudioVolume")

};

// Object: Class GPAudioRuntime.GameSpatialAudioVolumeRoot
// Size: 0x370 (Inherited: 0x370)
struct AGameSpatialAudioVolumeRoot : AActor
{	DEFINE_UE_CLASS_HELPERS(AGameSpatialAudioVolumeRoot, "GameSpatialAudioVolumeRoot")

};

// Object: Class GPAudioRuntime.GameStaticAkComponent
// Size: 0x14E0 (Inherited: 0x14E0)
struct UGameStaticAkComponent : UGameAkComponent
{	DEFINE_UE_CLASS_HELPERS(UGameStaticAkComponent, "GameStaticAkComponent")

};

// Object: Class GPAudioRuntime.GPALateReverbComponent
// Size: 0x290 (Inherited: 0x280)
struct UGPALateReverbComponent : UAkLateReverbComponent
{
	EAudioCharacterGroup SendOnCroup; // 0x280(0x1)
	uint8_t Pad_0x281[0xF]; // 0x281(0xF)
	DEFINE_UE_CLASS_HELPERS(UGPALateReverbComponent, "GPALateReverbComponent")

};

// Object: Class GPAudioRuntime.GPAMultiEmitterComponent
// Size: 0x168 (Inherited: 0xF8)
struct UGPAMultiEmitterComponent : UActorComponent
{
	uint8_t bNeedObstructionOcclusion : 1; // 0xF8(0x1), Mask(0x1)
	uint8_t BitPad_0xF8_1 : 7; // 0xF8(0x1)
	uint8_t Pad_0xF9[0x7]; // 0xF9(0x7)
	struct TArray<struct UTravelerGameAk*> Emitters; // 0x100(0x10)
	struct TMap<struct FName, struct UTravelerGameAk*> EmitterMap; // 0x110(0x50)
	uint8_t Pad_0x160[0x8]; // 0x160(0x8)


	// Object: Function GPAudioRuntime.GPAMultiEmitterComponent.StopEmitterAudio
	// Flags: [Final|BlueprintCosmetic|Native|Public|BlueprintCallable]
	// Offset: 0x824f998
	// Params: [ Num(1) Size(0x28) ]
	void StopEmitterAudio(struct FGPAAttachEmitterInfo EmitterInfo);

	// Object: Function GPAudioRuntime.GPAMultiEmitterComponent.StopAudioByIndex
	// Flags: [Final|BlueprintCosmetic|Native|Public|BlueprintCallable]
	// Offset: 0x824f8b8
	// Params: [ Num(2) Size(0x10) ]
	void StopAudioByIndex(int32_t Index, struct UGPAudioEventAsset* PlayEvent);

	// Object: Function GPAudioRuntime.GPAMultiEmitterComponent.StopAudioByActor
	// Flags: [Final|BlueprintCosmetic|Native|Public|BlueprintCallable]
	// Offset: 0x824f814
	// Params: [ Num(1) Size(0x8) ]
	void StopAudioByActor(struct AActor* EmitterOwner);

	// Object: Function GPAudioRuntime.GPAMultiEmitterComponent.StopAllEmittersAudio
	// Flags: [Final|BlueprintCosmetic|Native|Public|BlueprintCallable]
	// Offset: 0x824f800
	// Params: [ Num(0) Size(0x0) ]
	void StopAllEmittersAudio();

	// Object: Function GPAudioRuntime.GPAMultiEmitterComponent.SetWorldLocationByIndex
	// Flags: [Final|BlueprintCosmetic|Native|Public|HasOutParms|HasDefaults|BlueprintCallable]
	// Offset: 0x824f714
	// Params: [ Num(2) Size(0x10) ]
	void SetWorldLocationByIndex(const struct FVector& Location, int32_t Index);

	// Object: Function GPAudioRuntime.GPAMultiEmitterComponent.PlayEmitterAudio
	// Flags: [Final|BlueprintCosmetic|Native|Public|BlueprintCallable]
	// Offset: 0x824f650
	// Params: [ Num(2) Size(0x30) ]
	struct FGPAudioFuturePlayingID PlayEmitterAudio(struct FGPAAttachEmitterInfo EmitterInfo);

	// Object: Function GPAudioRuntime.GPAMultiEmitterComponent.PlayAudioByIndex
	// Flags: [Final|BlueprintCosmetic|Native|Public|BlueprintCallable]
	// Offset: 0x824f52c
	// Params: [ Num(4) Size(0x18) ]
	struct FGPAudioFuturePlayingID PlayAudioByIndex(struct UGPAudioEventAsset* PlayEvent, int32_t Index, EGPAudioBlueprintType PlayType);

	// Object: Function GPAudioRuntime.GPAMultiEmitterComponent.PlayActorEmitterAudio
	// Flags: [Final|BlueprintCosmetic|Native|Public|BlueprintCallable]
	// Offset: 0x824f40c
	// Params: [ Num(4) Size(0x1C) ]
	struct FGPAudioFuturePlayingID PlayActorEmitterAudio(struct AActor* EmitterOwner, struct UGPAudioEventAsset* PlayEvent, EGPAudioBlueprintType PlayType);

	// Object: Function GPAudioRuntime.GPAMultiEmitterComponent.InitNultiAttachComEmitters
	// Flags: [Final|BlueprintCosmetic|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x824f30c
	// Params: [ Num(2) Size(0x11) ]
	void InitNultiAttachComEmitters(const struct TArray<struct FGPAAttachEmitterInfo>& AttachEmitterInfos, uint8_t bPlayEvent);

	// Object: Function GPAudioRuntime.GPAMultiEmitterComponent.InitEmittersByActors
	// Flags: [Final|BlueprintCosmetic|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x824f250
	// Params: [ Num(1) Size(0x10) ]
	void InitEmittersByActors(const struct TArray<struct AActor*>& AttachActors);

	// Object: Function GPAudioRuntime.GPAMultiEmitterComponent.InitEmitters
	// Flags: [Final|BlueprintCosmetic|Native|Public|BlueprintCallable]
	// Offset: 0x824f118
	// Params: [ Num(2) Size(0x18) ]
	void InitEmitters(struct USkeletalMeshComponent* SkeletalMC, struct TArray<struct FName> AttachNodeNames);

	// Object: Function GPAudioRuntime.GPAMultiEmitterComponent.CreateEmitters
	// Flags: [Final|BlueprintCosmetic|Native|Public|BlueprintCallable]
	// Offset: 0x824f074
	// Params: [ Num(1) Size(0x4) ]
	void CreateEmitters(int32_t EmitterNum);
	DEFINE_UE_CLASS_HELPERS(UGPAMultiEmitterComponent, "GPAMultiEmitterComponent")

};

// Object: Class GPAudioRuntime.GameAkComponentPool
// Size: 0x80 (Inherited: 0x28)
struct UGameAkComponentPool : UObject
{
	struct TMap<EGameAkType, struct FGPAkCompPool> WorldGPAkCompPools; // 0x28(0x50)
	uint8_t Pad_0x78[0x8]; // 0x78(0x8)
	DEFINE_UE_CLASS_HELPERS(UGameAkComponentPool, "GameAkComponentPool")

};

// Object: Class GPAudioRuntime.GPAudioAnimationNotifyPlayer
// Size: 0x170 (Inherited: 0xF8)
struct UGPAudioAnimationNotifyPlayer : UActorComponent
{
	struct TMap<struct FName, struct UGPAudioEventAsset*> AnimationAudioMap; // 0xF8(0x50)
	uint8_t Pad_0x148[0x18]; // 0x148(0x18)
	struct TArray<struct FGPAudioFuturePlayingID> WeaponReloadAudioIDs; // 0x160(0x10)
	DEFINE_UE_CLASS_HELPERS(UGPAudioAnimationNotifyPlayer, "GPAudioAnimationNotifyPlayer")

};

// Object: Class GPAudioRuntime.GPAudioBPInstanceProxy
// Size: 0x120 (Inherited: 0xF8)
struct UGPAudioBPInstanceProxy : UActorComponent
{
	struct TSoftObjectPtr<UGPAudioRoomBakeDataAsset> RoomBakeDataSoftObj; // 0xF8(0x28)
	DEFINE_UE_CLASS_HELPERS(UGPAudioBPInstanceProxy, "GPAudioBPInstanceProxy")

};

// Object: Class GPAudioRuntime.GPAudioColliderDataAsset
// Size: 0x68 (Inherited: 0x30)
struct UGPAudioColliderDataAsset : UDataAsset
{
	struct TArray<struct UPhysicalMaterial*> PhysicalMaterials; // 0x30(0x10)
	struct TArray<struct FOrientedBoxInfo> OrderedOrientedBoxes; // 0x40(0x10)
	struct TArray<struct FGPAudioColliderNodeInfo> ColliderNodeInfo; // 0x50(0x10)
	int32_t RootIndex; // 0x60(0x4)
	uint8_t Pad_0x64[0x4]; // 0x64(0x4)
	DEFINE_UE_CLASS_HELPERS(UGPAudioColliderDataAsset, "GPAudioColliderDataAsset")

};

// Object: Class GPAudioRuntime.GPAudioDataAssetManager
// Size: 0x2C0 (Inherited: 0x30)
struct UGPAudioDataAssetManager : UDataAsset
{
	struct TMap<struct FName, struct UFoliageTypeSetDataAsset*> FoliageType2MeshSet; // 0x30(0x50)
	struct UFoliageOverlapAudioDataAsset* FoliageOverlapAudioConfig; // 0x80(0x8)
	struct TMap<struct FName, struct FGPAudioAnimNotifyFootStepTypeConfig> FootStepProxyConfigMap; // 0x88(0x50)
	struct UGPAudioEventLimitGroupAsset* AudioEventLimitGroup; // 0xD8(0x8)
	struct UGPLoopEndPairAsset* LoopEndPairs; // 0xE0(0x8)
	struct UPreloadAudioCfg* PreloadAudioCfg; // 0xE8(0x8)
	struct UPlay2DAudioBy3DFuncAsset* Play2DAudioBy3DFuncAsset; // 0xF0(0x8)
	uint8_t Pad_0xF8[0x60]; // 0xF8(0x60)
	struct UGPClippedActorFakeEventAsset* ClippedActorFakeEventConfig; // 0x158(0x8)
	struct TMap<struct FString, struct UGPAudioEventAsset*> ScatteredAudioMap; // 0x160(0x50)
	struct TMap<struct FString, struct FSoftObjectPath> ScatteredAudioPathMap; // 0x1B0(0x50)
	struct UGPAudioPresetConfigsDataAsset* AudioPresetConfigs; // 0x200(0x8)
	struct FGPAudioReverbPreset DefaultConvPreset; // 0x208(0x30)
	struct UGPConvolutionReverbConfigDataAsset* ConvolutionReverbPresetConfig; // 0x238(0x8)
	struct TArray<struct UGPAudioEventAsset*> FootstepAudioAssetCache; // 0x240(0x10)
	struct TArray<struct UGPAudioEventAsset*> FootStepCompanionAssets; // 0x250(0x10)
	struct TArray<struct UGPAudioEventAsset*> VibrationAudioAssetCache; // 0x260(0x10)
	uint8_t Pad_0x270[0x8]; // 0x270(0x8)
	struct UDataTable* AudioHDRConfigsTable; // 0x278(0x8)
	struct UDataTable* ScatteredAudioTable; // 0x280(0x8)
	struct UCurveFloat* DiffractionAngleFactorCurve; // 0x288(0x8)
	struct UCurveFloat* DiffractionDistanceFactorCurve; // 0x290(0x8)
	struct UCurveFloat* DiffractionPortalAttenFactorCurve; // 0x298(0x8)
	struct UCurveFloat* TransmissionDistanceSubtractionCurve; // 0x2A0(0x8)
	struct UCurveFloat* OccFloorResultMappingCurve; // 0x2A8(0x8)
	struct TArray<struct UGPAudioEventAsset*> LifeLongHoldEvents; // 0x2B0(0x10)


	// Object: Function GPAudioRuntime.GPAudioDataAssetManager.OnCompanionAssetsLoadedComplete
	// Flags: [Final|Native|Public]
	// Offset: 0x824feec
	// Params: [ Num(1) Size(0x10) ]
	void OnCompanionAssetsLoadedComplete(struct TArray<struct FSoftObjectPath> Paths);

	// Object: Function GPAudioRuntime.GPAudioDataAssetManager.OnAsyncLoadSpatialAudioConfigsFinished
	// Flags: [Final|Native|Public]
	// Offset: 0x824fe1c
	// Params: [ Num(1) Size(0x10) ]
	void OnAsyncLoadSpatialAudioConfigsFinished(struct TArray<struct FSoftObjectPath> ObjectPaths);

	// Object: Function GPAudioRuntime.GPAudioDataAssetManager.OnAsyncLoadScatteredAudioEventsFinished
	// Flags: [Final|Native|Public]
	// Offset: 0x824fd4c
	// Params: [ Num(1) Size(0x10) ]
	void OnAsyncLoadScatteredAudioEventsFinished(struct TArray<struct FSoftObjectPath> ObjectPaths);

	// Object: Function GPAudioRuntime.GPAudioDataAssetManager.OnAsyncLoadAssetsWhenStartModuleFinished
	// Flags: [Final|Native|Public]
	// Offset: 0x824fc7c
	// Params: [ Num(1) Size(0x10) ]
	void OnAsyncLoadAssetsWhenStartModuleFinished(struct TArray<struct FSoftObjectPath> ObjectPaths);

	// Object: Function GPAudioRuntime.GPAudioDataAssetManager.GetTransmissionDistanceSubtractionCurve
	// Flags: [Final|Native|Public]
	// Offset: 0x824fc60
	// Params: [ Num(1) Size(0x8) ]
	struct UCurveFloat* GetTransmissionDistanceSubtractionCurve();

	// Object: Function GPAudioRuntime.GPAudioDataAssetManager.GetOccFloorResultMappingCurve
	// Flags: [Final|Native|Public]
	// Offset: 0x824fc44
	// Params: [ Num(1) Size(0x8) ]
	struct UCurveFloat* GetOccFloorResultMappingCurve();

	// Object: Function GPAudioRuntime.GPAudioDataAssetManager.GetDiffractionPortalAttenFactorCurve
	// Flags: [Final|Native|Public]
	// Offset: 0x824fc28
	// Params: [ Num(1) Size(0x8) ]
	struct UCurveFloat* GetDiffractionPortalAttenFactorCurve();

	// Object: Function GPAudioRuntime.GPAudioDataAssetManager.GetDiffractionDistanceFactorCurve
	// Flags: [Final|Native|Public]
	// Offset: 0x824fc0c
	// Params: [ Num(1) Size(0x8) ]
	struct UCurveFloat* GetDiffractionDistanceFactorCurve();

	// Object: Function GPAudioRuntime.GPAudioDataAssetManager.GetDiffractionAngleFactorCurve
	// Flags: [Final|Native|Public]
	// Offset: 0x824fbf0
	// Params: [ Num(1) Size(0x8) ]
	struct UCurveFloat* GetDiffractionAngleFactorCurve();
	DEFINE_UE_CLASS_HELPERS(UGPAudioDataAssetManager, "GPAudioDataAssetManager")

};

// Object: Class GPAudioRuntime.GPAudioDebugSettings
// Size: 0x70 (Inherited: 0x28)
struct UGPAudioDebugSettings : UObject
{
	uint8_t bDisableAkAssetsScanning : 1; // 0x28(0x1), Mask(0x1)
	uint8_t BitPad_0x28_1 : 7; // 0x28(0x1)
	uint8_t bEnableAudio : 1; // 0x29(0x1), Mask(0x1)
	uint8_t BitPad_0x29_1 : 7; // 0x29(0x1)
	uint8_t bStopAkTickerWhenDisableAudio : 1; // 0x2A(0x1), Mask(0x1)
	uint8_t BitPad_0x2A_1 : 7; // 0x2A(0x1)
	uint8_t bDebugDrawDynamicReverb : 1; // 0x2B(0x1), Mask(0x1)
	uint8_t BitPad_0x2B_1 : 7; // 0x2B(0x1)
	uint8_t bDebugDrawReverbMetric : 1; // 0x2C(0x1), Mask(0x1)
	uint8_t BitPad_0x2C_1 : 7; // 0x2C(0x1)
	uint8_t bDebugDrawReverbMetricScreen : 1; // 0x2D(0x1), Mask(0x1)
	uint8_t BitPad_0x2D_1 : 7; // 0x2D(0x1)
	uint8_t bDebugDrawEarlyReflect : 1; // 0x2E(0x1), Mask(0x1)
	uint8_t BitPad_0x2E_1 : 7; // 0x2E(0x1)
	uint8_t bDebugDrawQuadTraceLine : 1; // 0x2F(0x1), Mask(0x1)
	uint8_t BitPad_0x2F_1 : 7; // 0x2F(0x1)
	uint8_t bDebugDrawPreQuadTraceLine : 1; // 0x30(0x1), Mask(0x1)
	uint8_t BitPad_0x30_1 : 7; // 0x30(0x1)
	uint8_t Pad_0x31[0x3]; // 0x31(0x3)
	float fDebugDrawStayTime; // 0x34(0x4)
	float fMinTimeOfPlanDebugDraw; // 0x38(0x4)
	uint8_t bDrawRPAsSoilPlan : 1; // 0x3C(0x1), Mask(0x1)
	uint8_t BitPad_0x3C_1 : 7; // 0x3C(0x1)
	EGPAudioDebugPlayFlag DebugPlayFlag; // 0x3D(0x1)
	uint8_t bEnableWeedOutLog : 1; // 0x3E(0x1), Mask(0x1)
	uint8_t BitPad_0x3E_1 : 7; // 0x3E(0x1)
	uint8_t bEnableEventResLog : 1; // 0x3F(0x1), Mask(0x1)
	uint8_t BitPad_0x3F_1 : 7; // 0x3F(0x1)
	uint8_t bDrawRPClosetPointAndHitPoint : 1; // 0x40(0x1), Mask(0x1)
	uint8_t BitPad_0x40_1 : 7; // 0x40(0x1)
	uint8_t bDrawRPNormal : 1; // 0x41(0x1), Mask(0x1)
	uint8_t BitPad_0x41_1 : 7; // 0x41(0x1)
	uint8_t bDrawWeedOutPlanNormal : 1; // 0x42(0x1), Mask(0x1)
	uint8_t BitPad_0x42_1 : 7; // 0x42(0x1)
	uint8_t bDrawWeedOutTraceLine : 1; // 0x43(0x1), Mask(0x1)
	uint8_t BitPad_0x43_1 : 7; // 0x43(0x1)
	uint8_t bDrawWeetOutPlan : 1; // 0x44(0x1), Mask(0x1)
	uint8_t BitPad_0x44_1 : 7; // 0x44(0x1)
	uint8_t Pad_0x45[0x3]; // 0x45(0x3)
	int32_t DrawWeedOutPlanNum; // 0x48(0x4)
	int32_t DrawPlanOffsetOfNormal; // 0x4C(0x4)
	struct FColor RPPlanColor; // 0x50(0x4)
	struct FColor WeedOutPlanColor; // 0x54(0x4)
	struct FColor GuardWeedOutPlanColor; // 0x58(0x4)
	struct FColor HitPointColor; // 0x5C(0x4)
	struct FColor ClosetPointColor; // 0x60(0x4)
	struct FColor WeetOutLineColor; // 0x64(0x4)
	uint8_t bTickUpdateOpenRPConfig : 1; // 0x68(0x1), Mask(0x1)
	uint8_t BitPad_0x68_1 : 7; // 0x68(0x1)
	uint8_t bDrawBulletSoundActor : 1; // 0x69(0x1), Mask(0x1)
	uint8_t BitPad_0x69_1 : 7; // 0x69(0x1)
	uint8_t Pad_0x6A[0x6]; // 0x6A(0x6)
	DEFINE_UE_CLASS_HELPERS(UGPAudioDebugSettings, "GPAudioDebugSettings")

};

// Object: Class GPAudioRuntime.GPAudioType
// Size: 0x30 (Inherited: 0x28)
struct UGPAudioType : UObject
{
	uint32_t ShortID; // 0x28(0x4)
	uint8_t Pad_0x2C[0x4]; // 0x2C(0x4)
	DEFINE_UE_CLASS_HELPERS(UGPAudioType, "GPAudioType")

};

// Object: Class GPAudioRuntime.GPAudioEventAKLink
// Size: 0xB8 (Inherited: 0x30)
struct UGPAudioEventAKLink : UGPAudioType
{
	int32_t AudioFlag; // 0x2C(0x4)
	float MaxAttenuationRadius; // 0x30(0x4)
	uint8_t IsInfinite : 1; // 0x34(0x1), Mask(0x1)
	float MaximumDuration; // 0x38(0x4)
	uint8_t bIsMIDIEvent : 1; // 0x3C(0x1), Mask(0x1)
	uint8_t BitPad_0x3C_2 : 6; // 0x3C(0x1)
	uint8_t Pad_0x3D[0x3]; // 0x3D(0x3)
	struct TMap<struct FString, float> MaximumDurationLocalized; // 0x40(0x50)
	struct TSoftObjectPtr<UObject> ResourceObject; // 0x90(0x28)
	DEFINE_UE_CLASS_HELPERS(UGPAudioEventAKLink, "GPAudioEventAKLink")

};

// Object: Class GPAudioRuntime.GPAudioEventAsset
// Size: 0x98 (Inherited: 0x30)
struct UGPAudioEventAsset : UGPAudioType
{
	struct UGPAudioEventAKLink* DefaultEventLink; // 0x30(0x8)
	struct TArray<struct FGPAudioLinkEvent> FlagOverrideEvents; // 0x38(0x10)
	struct TMap<int32_t, struct FAkEventContainer> FlagAkEventContainerMap; // 0x48(0x50)
	DEFINE_UE_CLASS_HELPERS(UGPAudioEventAsset, "GPAudioEventAsset")

};

// Object: Class GPAudioRuntime.GPAudioAuxBus
// Size: 0x58 (Inherited: 0x30)
struct UGPAudioAuxBus : UGPAudioType
{
	struct TSoftObjectPtr<UObject> ResourceObject; // 0x30(0x28)
	DEFINE_UE_CLASS_HELPERS(UGPAudioAuxBus, "GPAudioAuxBus")

};

// Object: Class GPAudioRuntime.GPAudioEventCache
// Size: 0x218 (Inherited: 0x28)
struct UGPAudioEventCache : UObject
{
	struct TMap<uint32_t, struct FGPDecodedCacheEvent> PriorityCacheEvents; // 0x28(0x50)
	struct TMap<uint32_t, struct UAkAudioEvent*> LatenCacheEvents; // 0x78(0x50)
	struct TMap<uint32_t, struct UAkAudioEvent*> PreserveEventsCache; // 0xC8(0x50)
	uint8_t Pad_0x118[0x100]; // 0x118(0x100)
	DEFINE_UE_CLASS_HELPERS(UGPAudioEventCache, "GPAudioEventCache")

};

// Object: Class GPAudioRuntime.GPAudioPriorityMethod
// Size: 0xA0 (Inherited: 0x28)
struct UGPAudioPriorityMethod : UObject
{
	struct TArray<int32_t> MaxAllowNumLOD; // 0x28(0x10)
	float PriorityDelta; // 0x38(0x4)
	uint8_t Pad_0x3C[0x4]; // 0x3C(0x4)
	struct TArray<struct FName> LimitAudioTypeNames; // 0x40(0x10)
	struct TMap<uint32_t, float> AudioDistance; // 0x50(0x50)


	// Object: Function GPAudioRuntime.GPAudioPriorityMethod.ShouldEventPlayUnderLimit
	// Flags: [Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x8254608
	// Params: [ Num(4) Size(0xA5) ]
	uint8_t ShouldEventPlayUnderLimit(struct UGameAkComponent* Listener, const struct FGPAudioPriorityParam& InParam, float& OutPriority);

	// Object: Function GPAudioRuntime.GPAudioPriorityMethod.CheckEventUnderLimit
	// Flags: [Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x825449c
	// Params: [ Num(3) Size(0xA1) ]
	uint8_t CheckEventUnderLimit(struct UGameAkComponent* Listener, const struct FGPAudioPriorityParam& InParam);
	DEFINE_UE_CLASS_HELPERS(UGPAudioPriorityMethod, "GPAudioPriorityMethod")

};

// Object: Class GPAudioRuntime.GPAudioPriorityMethod_FootStep
// Size: 0xB0 (Inherited: 0xA0)
struct UGPAudioPriorityMethod_FootStep : UGPAudioPriorityMethod
{
	int32_t LimitTypes; // 0xA0(0x4)
	float MaxAttentionDistance; // 0xA4(0x4)
	EGPAudioEventLimitCharGroup LimitCharGroup; // 0xA8(0x1)
	uint8_t Pad_0xA9[0x7]; // 0xA9(0x7)
	DEFINE_UE_CLASS_HELPERS(UGPAudioPriorityMethod_FootStep, "GPAudioPriorityMethod_FootStep")

};

// Object: Class GPAudioRuntime.GPAudioPriorityMethod_Event
// Size: 0xA8 (Inherited: 0xA0)
struct UGPAudioPriorityMethod_Event : UGPAudioPriorityMethod
{
	float MaxAttentionDistance; // 0xA0(0x4)
	uint8_t Pad_0xA4[0x4]; // 0xA4(0x4)
	DEFINE_UE_CLASS_HELPERS(UGPAudioPriorityMethod_Event, "GPAudioPriorityMethod_Event")

};

// Object: Class GPAudioRuntime.GPAudioPriorityMethod_Test
// Size: 0xB8 (Inherited: 0xA0)
struct UGPAudioPriorityMethod_Test : UGPAudioPriorityMethod
{
	struct TArray<struct FName> CustomAudioTypeNames; // 0xA0(0x10)
	float MaxAttentionDistance; // 0xB0(0x4)
	uint8_t Pad_0xB4[0x4]; // 0xB4(0x4)
	DEFINE_UE_CLASS_HELPERS(UGPAudioPriorityMethod_Test, "GPAudioPriorityMethod_Test")

};

// Object: Class GPAudioRuntime.GPAudioEventLimitAsset
// Size: 0x40 (Inherited: 0x30)
struct UGPAudioEventLimitAsset : UDataAsset
{
	struct FGPAudioEventModeLimit LimitConfig; // 0x30(0x10)
	DEFINE_UE_CLASS_HELPERS(UGPAudioEventLimitAsset, "GPAudioEventLimitAsset")

};

// Object: Class GPAudioRuntime.GPAudioEventPriorityAsset
// Size: 0x48 (Inherited: 0x30)
struct UGPAudioEventPriorityAsset : UDataAsset
{
	int32_t TotalLimitNum; // 0x30(0x4)
	uint8_t Pad_0x34[0x4]; // 0x34(0x4)
	struct TArray<struct UGPAudioPriorityMethod*> PriorityMethods; // 0x38(0x10)
	DEFINE_UE_CLASS_HELPERS(UGPAudioEventPriorityAsset, "GPAudioEventPriorityAsset")

};

// Object: Class GPAudioRuntime.GPAudioEventLimitGroupAsset
// Size: 0xD0 (Inherited: 0x30)
struct UGPAudioEventLimitGroupAsset : UDataAsset
{
	struct TMap<struct FString, struct TSoftObjectPtr<UDataTable>> AllModeLimitTable; // 0x30(0x50)
	struct TMap<struct FString, struct TSoftObjectPtr<UGPAudioEventLimitAsset>> AllModeLimits; // 0x80(0x50)
	DEFINE_UE_CLASS_HELPERS(UGPAudioEventLimitGroupAsset, "GPAudioEventLimitGroupAsset")

};

// Object: Class GPAudioRuntime.GPAudioGameplaySettings
// Size: 0x708 (Inherited: 0x28)
struct UGPAudioGameplaySettings : UObject
{
	struct TArray<struct FSoftObjectPath> LifeLongHoldEvents; // 0x28(0x10)
	struct TArray<struct FSoftObjectPath> CharacterVoiceTypePresetsTables; // 0x38(0x10)
	struct TArray<struct FGPGameplayAudioFeatures> GameplayAudioFeatures; // 0x48(0x10)
	struct FAudio3PFireLoopPriorityManagerConfig Audio3PFireLoopPriorityManagerConfig_High; // 0x58(0xC0)
	struct FAudio3PFireLoopPriorityManagerConfig Audio3PFireLoopPriorityManagerConfig_Mid; // 0x118(0xC0)
	struct FAudio3PFireLoopPriorityManagerConfig Audio3PFireLoopPriorityManagerConfig_Low; // 0x1D8(0xC0)
	EPhysicalSurface WetFloorSurfaceType; // 0x298(0x1)
	uint8_t Pad_0x299[0x7]; // 0x299(0x7)
	struct TArray<EPhysicalSurface> WetFloorExcludedSurfaceTypeArray; // 0x2A0(0x10)
	float WetnessThreshold; // 0x2B0(0x4)
	uint8_t Pad_0x2B4[0x4]; // 0x2B4(0x4)
	struct TArray<struct FName> FootstepOverlapComponentTags; // 0x2B8(0x10)
	struct TMap<struct FString, struct FGPGameplayAudioHDRConfig> GameplayModeAudioHDRDataTablePath; // 0x2C8(0x50)
	struct TMap<EGPAudioBlueprintType, struct FGPAudioTypeConfig> AudioTypeConfigMaps; // 0x318(0x50)
	struct TSet<struct FName> NotUsePoolShadowNameList; // 0x368(0x50)
	float AttenuationScalarMax; // 0x3B8(0x4)
	float AttenuationScalarMin; // 0x3BC(0x4)
	struct TMap<EGPAudioBlueprintType, float> AttenuationScalarMaxMap; // 0x3C0(0x50)
	struct TSet<struct FString> AffectedVOTypeStringSet; // 0x410(0x50)
	struct TSet<EGPAudioBlueprintType> AttenuationSpecifyCharacterTypeWhiteList; // 0x460(0x50)
	float AttenuationSpecifyCharacterScaleLimit; // 0x4B0(0x4)
	uint8_t Pad_0x4B4[0x4]; // 0x4B4(0x4)
	struct TSet<EGPAudioFootSoundType> AttenuationSpecifyFootTypeWhiteList; // 0x4B8(0x50)
	float AttenuationSpecifyFootStepScaleLimit; // 0x508(0x4)
	float AttenuationInvalidateTimeLimit; // 0x50C(0x4)
	struct TSet<struct FString> SoundVisualTypeStringSet; // 0x510(0x50)
	struct TArray<float> DistanceArray_M; // 0x560(0x10)
	struct TArray<float> CheckIntervalArray; // 0x570(0x10)
	struct TArray<float> CheckDistanceArray_M; // 0x580(0x10)
	struct FSoftObjectPath ScatteredAudioPath; // 0x590(0x18)
	struct FSoftObjectPath ExpertVOPath; // 0x5A8(0x18)
	struct FSoftObjectPath AudioEchoConfigPath; // 0x5C0(0x18)
	struct TSet<struct FName> MpLowMemNeedReuseVoName; // 0x5D8(0x50)
	int32_t EnemyNumMaxValue; // 0x628(0x4)
	int32_t AllPlayerNumMaxValue; // 0x62C(0x4)
	float PlayerNumCheckDistance; // 0x630(0x4)
	float FireLoopNumCheckDistance; // 0x634(0x4)
	int32_t FireLoopNumMaxValue; // 0x638(0x4)
	uint8_t Pad_0x63C[0x4]; // 0x63C(0x4)
	struct TSet<uint32_t> LoopEventClearListWhenObservered; // 0x640(0x50)
	struct TSet<struct FString> OpenConvReverbMapNameSet; // 0x690(0x50)
	struct TArray<struct FGPFootStepTraceIntervalCfg> FSTraceIntervalCfg; // 0x6E0(0x10)
	struct FMulticastInlineDelegate OpenWarTapeModeDelegate; // 0x6F0(0x10)
	uint8_t Pad_0x700[0x8]; // 0x700(0x8)
	DEFINE_UE_CLASS_HELPERS(UGPAudioGameplaySettings, "GPAudioGameplaySettings")

};

// Object: Class GPAudioRuntime.FoliageOverlapAudioDataAsset
// Size: 0x70 (Inherited: 0x30)
struct UFoliageOverlapAudioDataAsset : UDataAsset
{
	struct FOverlapAudioEventSet BushDefaultOverlapEvent; // 0x30(0x18)
	struct FOverlapAudioEventSet BushCrocodileOverlapEvent; // 0x48(0x18)
	struct TArray<struct FFoliageAudioInstanceConfig> FoliageInstanceConfigs; // 0x60(0x10)
	DEFINE_UE_CLASS_HELPERS(UFoliageOverlapAudioDataAsset, "FoliageOverlapAudioDataAsset")

};

// Object: Class GPAudioRuntime.FoliageTypeSetDataAsset
// Size: 0x48 (Inherited: 0x30)
struct UFoliageTypeSetDataAsset : UDataAsset
{
	struct FName FoliageTypeName; // 0x30(0x8)
	struct TArray<struct TSoftObjectPtr<UStaticMesh>> FoliageInstanceMeshs; // 0x38(0x10)
	DEFINE_UE_CLASS_HELPERS(UFoliageTypeSetDataAsset, "FoliageTypeSetDataAsset")

};

// Object: Class GPAudioRuntime.GPAudioLODSettings
// Size: 0x48 (Inherited: 0x28)
struct UGPAudioLODSettings : UObject
{
	struct TArray<struct FGPALODFeatures> LODFeatures; // 0x28(0x10)
	struct TArray<struct FGPComponentSignificanceConfig> ComponentSignificanceConfigs; // 0x38(0x10)
	DEFINE_UE_CLASS_HELPERS(UGPAudioLODSettings, "GPAudioLODSettings")

};

// Object: Class GPAudioRuntime.GPAudioPointEmitter
// Size: 0x3B0 (Inherited: 0x370)
struct AGPAudioPointEmitter : AActor
{
	uint8_t EmitterCom[0x8]; // 0x370(0x8)
	struct UGPAudioEventAsset* AudioEvent; // 0x378(0x8)
	uint8_t bNeedObstructionOcclusion : 1; // 0x380(0x1), Mask(0x1)
	uint8_t BitPad_0x380_1 : 7; // 0x380(0x1)
	uint8_t bPlayOnBeginPlay : 1; // 0x381(0x1), Mask(0x1)
	uint8_t BitPad_0x381_1 : 7; // 0x381(0x1)
	uint8_t bStopWhenDestroy : 1; // 0x382(0x1), Mask(0x1)
	uint8_t BitPad_0x382_1 : 7; // 0x382(0x1)
	uint8_t bDebugDrawOcc : 1; // 0x383(0x1), Mask(0x1)
	uint8_t BitPad_0x383_1 : 7; // 0x383(0x1)
	uint8_t bDebugDrawEmitter : 1; // 0x384(0x1), Mask(0x1)
	uint8_t BitPad_0x384_1 : 7; // 0x384(0x1)
	uint8_t Pad_0x385[0x3]; // 0x385(0x3)
	float MaxDistance; // 0x388(0x4)
	float DistanceToListener; // 0x38C(0x4)
	float StopTransitionMS; // 0x390(0x4)
	float MinStopDistance; // 0x394(0x4)
	uint8_t Pad_0x398[0x18]; // 0x398(0x18)


	// Object: Function GPAudioRuntime.GPAudioPointEmitter.StopAudio
	// Flags: [Final|BlueprintCosmetic|Native|Public|BlueprintCallable]
	// Offset: 0x8259614
	// Params: [ Num(0) Size(0x0) ]
	void StopAudio();

	// Object: Function GPAudioRuntime.GPAudioPointEmitter.PlayAudio
	// Flags: [Final|BlueprintCosmetic|Native|Public|BlueprintCallable]
	// Offset: 0x82595dc
	// Params: [ Num(1) Size(0x1) ]
	uint8_t PlayAudio();

	// Object: Function GPAudioRuntime.GPAudioPointEmitter.GetRoomBakeData
	// Flags: [Final|BlueprintCosmetic|Native|Public|BlueprintCallable]
	// Offset: 0x82595a8
	// Params: [ Num(1) Size(0x8) ]
	struct UGPAudioRoomBakeDataAsset* GetRoomBakeData();

	// Object: Function GPAudioRuntime.GPAudioPointEmitter.DebugDrawCurrentRoomBakeValues
	// Flags: [Final|BlueprintCosmetic|Native|Public|BlueprintCallable]
	// Offset: 0x8259594
	// Params: [ Num(0) Size(0x0) ]
	void DebugDrawCurrentRoomBakeValues();

	// Object: Function GPAudioRuntime.GPAudioPointEmitter.DebugDrawCurrentRoomBakeNeighbors
	// Flags: [Final|BlueprintCosmetic|Native|Public|BlueprintCallable]
	// Offset: 0x8259580
	// Params: [ Num(0) Size(0x0) ]
	void DebugDrawCurrentRoomBakeNeighbors();
	DEFINE_UE_CLASS_HELPERS(AGPAudioPointEmitter, "GPAudioPointEmitter")

};

// Object: Class GPAudioRuntime.GPAudioMultiPointEmitter
// Size: 0x3C8 (Inherited: 0x3B0)
struct AGPAudioMultiPointEmitter : AGPAudioPointEmitter
{
	EAkMultiPositionType MultiPositionType; // 0x3B0(0x1)
	uint8_t Pad_0x3B1[0x7]; // 0x3B1(0x7)
	struct TArray<struct FTransform> MultiEmitterRelativeTransforms; // 0x3B8(0x10)


	// Object: Function GPAudioRuntime.GPAudioMultiPointEmitter.DebugDrawMultiEmitters
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x8258e84
	// Params: [ Num(1) Size(0x4) ]
	void DebugDrawMultiEmitters(float DrawTime);

	// Object: Function GPAudioRuntime.GPAudioMultiPointEmitter.CopySplinePointsToRelativeTransforms
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x8258de0
	// Params: [ Num(1) Size(0x8) ]
	void CopySplinePointsToRelativeTransforms(struct USplineComponent* TargetSpline);
	DEFINE_UE_CLASS_HELPERS(AGPAudioMultiPointEmitter, "GPAudioMultiPointEmitter")

};

// Object: Class GPAudioRuntime.GPAudioMusicPlayer
// Size: 0x2D0 (Inherited: 0x240)
struct UGPAudioMusicPlayer : USceneComponent
{
	int32_t LoopASTimeMS; // 0x240(0x4)
	uint8_t Pad_0x244[0x24]; // 0x244(0x24)
	struct UGPAudioMusicPlaylist* MusicPlaylistComp; // 0x268(0x8)
	struct FPlaylistConfig CurrentPlaylistConfig; // 0x270(0x28)
	uint8_t bInited : 1; // 0x298(0x1), Mask(0x1)
	uint8_t BitPad_0x298_1 : 7; // 0x298(0x1)
	uint8_t bIsPlay : 1; // 0x299(0x1), Mask(0x1)
	uint8_t BitPad_0x299_1 : 7; // 0x299(0x1)
	uint8_t Pad_0x29A[0x6]; // 0x29A(0x6)
	struct TArray<struct UGPAudioEventAsset*> AllMusicEvents; // 0x2A0(0x10)
	uint8_t GameAk[0x8]; // 0x2B0(0x8)
	uint8_t Pad_0x2B8[0x18]; // 0x2B8(0x18)


	// Object: Function GPAudioRuntime.GPAudioMusicPlayer.PlayMusic
	// Flags: [Final|BlueprintCosmetic|Native|Public|BlueprintCallable]
	// Offset: 0x82591cc
	// Params: [ Num(1) Size(0x1) ]
	uint8_t PlayMusic();

	// Object: Function GPAudioRuntime.GPAudioMusicPlayer.PauseMusic
	// Flags: [Final|BlueprintCosmetic|Native|Public|BlueprintCallable]
	// Offset: 0x8259194
	// Params: [ Num(1) Size(0x1) ]
	uint8_t PauseMusic();

	// Object: Function GPAudioRuntime.GPAudioMusicPlayer.InitPlaylistConfig
	// Flags: [Final|BlueprintCosmetic|Native|Public|BlueprintCallable]
	// Offset: 0x825908c
	// Params: [ Num(2) Size(0x29) ]
	uint8_t InitPlaylistConfig(struct FPlaylistConfig InPlaylistConfig);

	// Object: Function GPAudioRuntime.GPAudioMusicPlayer.EndMusic
	// Flags: [Final|BlueprintCosmetic|Native|Public|BlueprintCallable]
	// Offset: 0x8259078
	// Params: [ Num(0) Size(0x0) ]
	void EndMusic();

	// Object: Function GPAudioRuntime.GPAudioMusicPlayer.ActivePlaylist
	// Flags: [Final|BlueprintCosmetic|Native|Public|BlueprintCallable]
	// Offset: 0x8258f30
	// Params: [ Num(3) Size(0x31) ]
	uint8_t ActivePlaylist(struct UGPAudioMusicPlaylist* InMusicPlaylistComp, struct FPlaylistConfig InPlaylistConfig);
	DEFINE_UE_CLASS_HELPERS(UGPAudioMusicPlayer, "GPAudioMusicPlayer")

};

// Object: Class GPAudioRuntime.GPAudioMusicPlaylist
// Size: 0x300 (Inherited: 0x240)
struct UGPAudioMusicPlaylist : USceneComponent
{
	uint64_t PlaylistId; // 0x240(0x8)
	struct FName PlaylistName; // 0x248(0x8)
	EMusicLoopType LoopType; // 0x250(0x1)
	uint8_t Pad_0x251[0x7]; // 0x251(0x7)
	struct TArray<struct UGPAudioEventAsset*> MusicEventArr; // 0x258(0x10)
	struct TArray<int32_t> RandomIndexs; // 0x268(0x10)
	struct FGPAudioFuturePlayingID PlayingId; // 0x278(0x8)
	uint32_t CurrentMusicId; // 0x280(0x4)
	int32_t CurrentMusicIndex; // 0x284(0x4)
	int32_t CurrentMusicDurationMS; // 0x288(0x4)
	int32_t CurrentMusicPassedTimeMS; // 0x28C(0x4)
	int32_t CurrentMusicRemainTimeMS; // 0x290(0x4)
	int32_t SuccPlayCount; // 0x294(0x4)
	int32_t FailPlayCount; // 0x298(0x4)
	uint8_t bStopWhenMusicOver : 1; // 0x29C(0x1), Mask(0x1)
	uint8_t BitPad_0x29C_1 : 7; // 0x29C(0x1)
	uint8_t Pad_0x29D[0x27]; // 0x29D(0x27)
	float TimerUpdateInterval; // 0x2C4(0x4)
	float TimerDelayBegin; // 0x2C8(0x4)
	float TimerDelayEnd; // 0x2CC(0x4)
	uint8_t bIsPlay : 1; // 0x2D0(0x1), Mask(0x1)
	uint8_t BitPad_0x2D0_1 : 7; // 0x2D0(0x1)
	uint8_t bLastEnd : 1; // 0x2D1(0x1), Mask(0x1)
	uint8_t BitPad_0x2D1_1 : 7; // 0x2D1(0x1)
	uint8_t Pad_0x2D2[0x2E]; // 0x2D2(0x2E)


	// Object: Function GPAudioRuntime.GPAudioMusicPlaylist.OnRepCurrentMusicPassedTimeMS
	// Flags: [Final|Native|Protected]
	// Offset: 0x8259534
	// Params: [ Num(0) Size(0x0) ]
	void OnRepCurrentMusicPassedTimeMS();

	// Object: Function GPAudioRuntime.GPAudioMusicPlaylist.GetPlayIndexByPlayCount
	// Flags: [Final|Native|Protected]
	// Offset: 0x8259488
	// Params: [ Num(2) Size(0x8) ]
	int32_t GetPlayIndexByPlayCount(int32_t PlayCount);

	// Object: Function GPAudioRuntime.GPAudioMusicPlaylist.ClientEndMusic
	// Flags: [Net|NetReliableNative|Event|Protected|NetClient]
	// Offset: 0x825946c
	// Params: [ Num(0) Size(0x0) ]
	void ClientEndMusic();
	DEFINE_UE_CLASS_HELPERS(UGPAudioMusicPlaylist, "GPAudioMusicPlaylist")

};

// Object: Class GPAudioRuntime.GPAudioOverDisBroadcaster
// Size: 0x250 (Inherited: 0x240)
struct UGPAudioOverDisBroadcaster : USceneComponent
{
	int32_t CacheAudioEventNum; // 0x240(0x4)
	uint8_t Pad_0x244[0xC]; // 0x244(0xC)
	DEFINE_UE_CLASS_HELPERS(UGPAudioOverDisBroadcaster, "GPAudioOverDisBroadcaster")

};

// Object: Class GPAudioRuntime.GPAudioProxyInterface
// Size: 0x28 (Inherited: 0x28)
struct IGPAudioProxyInterface : IInterface
{

	// Object: Function GPAudioRuntime.GPAudioProxyInterface.GetCharacterStateParamsFromAudioProxy
	// Flags: [Native|Public]
	// Offset: 0x8259ab4
	// Params: [ Num(2) Size(0xA) ]
	uint16_t GetCharacterStateParamsFromAudioProxy(struct ACHARACTER* InCharacter);

	// Object: Function GPAudioRuntime.GPAudioProxyInterface.GetCharacterLocationFromAudioProxy
	// Flags: [Native|Public|HasDefaults]
	// Offset: 0x82599fc
	// Params: [ Num(2) Size(0x14) ]
	struct FVector GetCharacterLocationFromAudioProxy(struct ACHARACTER* InCharacter);

	// Object: Function GPAudioRuntime.GPAudioProxyInterface.GetCharacterAudioProxyInfo
	// Flags: [Native|Public|HasOutParms]
	// Offset: 0x82598f0
	// Params: [ Num(3) Size(0x25) ]
	uint8_t GetCharacterAudioProxyInfo(struct ACHARACTER* InCharacter, struct FPVSAudioActorInfo& OutInfo);
	DEFINE_UE_CLASS_HELPERS(IGPAudioProxyInterface, "GPAudioProxyInterface")

};

// Object: Class GPAudioRuntime.GPAudioRadio
// Size: 0x2F0 (Inherited: 0x240)
struct UGPAudioRadio : USceneComponent
{
	ERadioCuttingType CuttingType; // 0x240(0x1)
	uint8_t Pad_0x241[0x3]; // 0x241(0x3)
	float BroadcastRange; // 0x244(0x4)
	int32_t LoopASTimeMS; // 0x248(0x4)
	uint8_t Pad_0x24C[0x4]; // 0x24C(0x4)
	struct UGPAudioEventAsset* RadioNoise; // 0x250(0x8)
	uint8_t bUseNoiseBetweenChannel : 1; // 0x258(0x1), Mask(0x1)
	uint8_t BitPad_0x258_1 : 7; // 0x258(0x1)
	uint8_t Pad_0x259[0x3]; // 0x259(0x3)
	float FMCollisionRange; // 0x25C(0x4)
	int32_t RadioNoiseDurationWhenTurn; // 0x260(0x4)
	uint8_t Pad_0x264[0x6C]; // 0x264(0x6C)
	struct TArray<struct UGPAudioEventAsset*> AllRecordEvents; // 0x2D0(0x10)
	uint8_t GameAk[0x8]; // 0x2E0(0x8)
	uint8_t Pad_0x2E8[0x8]; // 0x2E8(0x8)


	// Object: Function GPAudioRuntime.GPAudioRadio.TurnUP
	// Flags: [Final|BlueprintCosmetic|Native|Public|BlueprintCallable]
	// Offset: 0x8259f6c
	// Params: [ Num(1) Size(0x1) ]
	uint8_t TurnUP();

	// Object: Function GPAudioRuntime.GPAudioRadio.TurnON
	// Flags: [Final|BlueprintCosmetic|Native|Public|BlueprintCallable]
	// Offset: 0x8259eb4
	// Params: [ Num(2) Size(0x2) ]
	uint8_t TurnON(uint8_t bResetFm);

	// Object: Function GPAudioRuntime.GPAudioRadio.TurnOFF
	// Flags: [Final|BlueprintCosmetic|Native|Public|BlueprintCallable]
	// Offset: 0x8259ea0
	// Params: [ Num(0) Size(0x0) ]
	void TurnOFF();

	// Object: Function GPAudioRuntime.GPAudioRadio.TurnFm
	// Flags: [Final|BlueprintCosmetic|Native|Public|BlueprintCallable]
	// Offset: 0x8259df4
	// Params: [ Num(2) Size(0x8) ]
	float TurnFm(float Delta);

	// Object: Function GPAudioRuntime.GPAudioRadio.TurnDown
	// Flags: [Final|BlueprintCosmetic|Native|Public|BlueprintCallable]
	// Offset: 0x8259dbc
	// Params: [ Num(1) Size(0x1) ]
	uint8_t TurnDown();

	// Object: Function GPAudioRuntime.GPAudioRadio.TurnChannel
	// Flags: [Final|BlueprintCosmetic|Native|Public|BlueprintCallable]
	// Offset: 0x8259cc8
	// Params: [ Num(3) Size(0xA) ]
	uint8_t TurnChannel(struct FName InChannelID, uint8_t bNeedNoise);

	// Object: Function GPAudioRuntime.GPAudioRadio.RadioStart
	// Flags: [Final|BlueprintCosmetic|Native|Public|BlueprintCallable]
	// Offset: 0x8259cb4
	// Params: [ Num(0) Size(0x0) ]
	void RadioStart();

	// Object: Function GPAudioRuntime.GPAudioRadio.InitRCConfigs
	// Flags: [Final|BlueprintCosmetic|Native|Public|BlueprintCallable]
	// Offset: 0x8259be4
	// Params: [ Num(1) Size(0x10) ]
	void InitRCConfigs(struct TArray<struct FGPAudioRadioChannelRow> ConfigRows);
	DEFINE_UE_CLASS_HELPERS(UGPAudioRadio, "GPAudioRadio")

};

// Object: Class GPAudioRuntime.GPAudioReverbSceneDataAsset
// Size: 0x40 (Inherited: 0x30)
struct UGPAudioReverbSceneDataAsset : UDataAsset
{
	struct TArray<struct FGPAudioReverbSceneConfig> ReverbSceneConfigs; // 0x30(0x10)
	DEFINE_UE_CLASS_HELPERS(UGPAudioReverbSceneDataAsset, "GPAudioReverbSceneDataAsset")

};

// Object: Class GPAudioRuntime.GPAudioReverbSettings
// Size: 0xA8 (Inherited: 0x28)
struct UGPAudioReverbSettings : UObject
{
	uint8_t Enable : 1; // 0x28(0x1), Mask(0x1)
	uint8_t BitPad_0x28_1 : 7; // 0x28(0x1)
	uint8_t Pad_0x29[0x7]; // 0x29(0x7)
	struct TMap<EGPAudioReverbType, struct FGPAudioReverbConfig> ReverbTypeConfig; // 0x30(0x50)
	uint8_t bEnablePipeMaterial : 1; // 0x80(0x1), Mask(0x1)
	uint8_t BitPad_0x80_1 : 7; // 0x80(0x1)
	uint8_t Pad_0x81[0x7]; // 0x81(0x7)
	struct TArray<struct TSoftObjectPtr<UPhysicalMaterial>> PipeSurfaces; // 0x88(0x10)
	struct FString CustomEarlyReflectionBusName; // 0x98(0x10)
	DEFINE_UE_CLASS_HELPERS(UGPAudioReverbSettings, "GPAudioReverbSettings")

};

// Object: Class GPAudioRuntime.GPAudioRoomBakeDataAsset
// Size: 0x230 (Inherited: 0x30)
struct UGPAudioRoomBakeDataAsset : UDataAsset
{
	EGPAudioRoomBakeDataType DataType; // 0x30(0x1)
	uint8_t Pad_0x31[0x7]; // 0x31(0x7)
	struct FString RoomBPName; // 0x38(0x10)
	struct FVector CellSize; // 0x48(0xC)
	struct FVector BoxExtend; // 0x54(0xC)
	struct FVector BoxPosOffset; // 0x60(0xC)
	uint8_t Pad_0x6C[0x4]; // 0x6C(0x4)
	struct FQuat BoxQuat; // 0x70(0x10)
	int32_t CelllIndexMax; // 0x80(0x4)
	uint8_t Pad_0x84[0x4]; // 0x84(0x4)
	struct TArray<int8_t> BakeDataArray; // 0x88(0x10)
	struct TArray<uint32_t> CellIndex2BakeDataArray; // 0x98(0x10)
	struct TSet<int32_t> CellIndex2BakeDataSet; // 0xA8(0x50)
	struct TMap<int32_t, int8_t> CellIndex2BakeDataMap; // 0xF8(0x50)
	struct TArray<uint16_t> AllCellIndexArr; // 0x148(0x10)
	struct TArray<struct FGPADoorWinZone> DoorWinZones; // 0x158(0x10)
	uint8_t bBakeByBP : 1; // 0x168(0x1), Mask(0x1)
	uint8_t BitPad_0x168_1 : 7; // 0x168(0x1)
	uint8_t Pad_0x169[0xC7]; // 0x169(0xC7)
	DEFINE_UE_CLASS_HELPERS(UGPAudioRoomBakeDataAsset, "GPAudioRoomBakeDataAsset")

};

// Object: Class GPAudioRuntime.GPAudioServerNotifier
// Size: 0x60 (Inherited: 0x28)
struct UGPAudioServerNotifier : UObject
{
	struct FGPAudioServerNotifierSpeedInfo Notifiers[0x3]; // 0x28(0x30)
	uint8_t Pad_0x58[0x8]; // 0x58(0x8)
	DEFINE_UE_CLASS_HELPERS(UGPAudioServerNotifier, "GPAudioServerNotifier")

};

// Object: Class GPAudioRuntime.GPAudioSettings
// Size: 0x598 (Inherited: 0x28)
struct UGPAudioSettings : UObject
{
	uint8_t EnableAutoGenGPAudioAssets : 1; // 0x28(0x1), Mask(0x1)
	uint8_t BitPad_0x28_1 : 7; // 0x28(0x1)
	uint8_t bUseLocalizedDuration : 1; // 0x29(0x1), Mask(0x1)
	uint8_t BitPad_0x29_1 : 7; // 0x29(0x1)
	uint8_t Pad_0x2A[0x6]; // 0x2A(0x6)
	struct TSoftObjectPtr<UCurveFloat> GPAudioLODTickIntervalCurve; // 0x30(0x28)
	int32_t GPAudioLRUSize; // 0x58(0x4)
	float EventMaxCacheTime; // 0x5C(0x4)
	uint8_t bEnableOverNetCullDisBroadcast : 1; // 0x60(0x1), Mask(0x1)
	uint8_t BitPad_0x60_1 : 7; // 0x60(0x1)
	uint8_t Pad_0x61[0x3]; // 0x61(0x3)
	int32_t UseCustomConfigNetCullDisSquared; // 0x64(0x4)
	float RoomFloorHeigh; // 0x68(0x4)
	float RoomFloorHeightBidirectional; // 0x6C(0x4)
	float RoomFloorHeight_OutDoor; // 0x70(0x4)
	float RoomFloorHeigh_2; // 0x74(0x4)
	float RoomFloorHeightBidirectional_2; // 0x78(0x4)
	float RoomFloorRTPCLerpSpeed; // 0x7C(0x4)
	float PreCutCheckSpeed; // 0x80(0x4)
	uint8_t Pad_0x84[0x4]; // 0x84(0x4)
	struct TMap<struct FString, uint8_t> GameplayModeAudioPriority; // 0x88(0x50)
	EGPAudioActorEndPlayStopType EmitterEndPlayStopType; // 0xD8(0x1)
	uint8_t Pad_0xD9[0x3]; // 0xD9(0x3)
	float MakeNoiseRatio; // 0xDC(0x4)
	struct TMap<EGPAudioBlueprintType, float> ConstTypeAttenuationScales; // 0xE0(0x50)
	uint8_t EnableFootStepDataTableProxy : 1; // 0x130(0x1), Mask(0x1)
	uint8_t BitPad_0x130_1 : 7; // 0x130(0x1)
	uint8_t Pad_0x131[0x7]; // 0x131(0x7)
	struct TMap<struct FName, struct FString> AnimationNotifyKeys; // 0x138(0x50)
	int32_t RoomBakeDataFramingLength; // 0x188(0x4)
	uint8_t Pad_0x18C[0x4]; // 0x18C(0x4)
	struct TArray<EGPAudioTag> WeaponCompositeTags; // 0x190(0x10)
	struct TSoftObjectPtr<UPhysicalMaterialAudioDataAsset> PhysicalMaterialFoostepMapAsset; // 0x1A0(0x28)
	struct TSoftObjectPtr<UFoliageOverlapAudioDataAsset> FoliageOverlapAudioAsset; // 0x1C8(0x28)
	struct TMap<struct FName, struct TSoftObjectPtr<UFoliageTypeSetDataAsset>> FoliageType2Meshs; // 0x1F0(0x50)
	struct TSoftObjectPtr<UGPAudioEventLimitGroupAsset> AudioEventLimitGroupAsset; // 0x240(0x28)
	struct TSoftObjectPtr<UGPClippedActorFakeEventAsset> FakeWeaponEventConfigAsset; // 0x268(0x28)
	struct TSoftObjectPtr<UGPLoopEndPairAsset> LoopEndPairAsset; // 0x290(0x28)
	struct TSoftObjectPtr<UPreloadAudioCfg> PreloadAudioCfg; // 0x2B8(0x28)
	struct TSoftObjectPtr<UPlay2DAudioBy3DFuncAsset> Play2DAudioBy3DFuncAsset; // 0x2E0(0x28)
	uint8_t bUseCustomMIDIBlankTime : 1; // 0x308(0x1), Mask(0x1)
	uint8_t BitPad_0x308_1 : 7; // 0x308(0x1)
	uint8_t Pad_0x309[0x3]; // 0x309(0x3)
	float CustomMIDIBlankTimeMs; // 0x30C(0x4)
	uint8_t EnableMIDIDebugTime : 1; // 0x310(0x1), Mask(0x1)
	uint8_t BitPad_0x310_1 : 7; // 0x310(0x1)
	uint8_t EnableBlankTime2Delay : 1; // 0x311(0x1), Mask(0x1)
	uint8_t BitPad_0x311_1 : 7; // 0x311(0x1)
	uint8_t Pad_0x312[0x2]; // 0x312(0x2)
	int32_t MinForceStopNoteCount; // 0x314(0x4)
	uint8_t EnableMIDILog : 1; // 0x318(0x1), Mask(0x1)
	uint8_t BitPad_0x318_1 : 7; // 0x318(0x1)
	uint8_t Pad_0x319[0x3]; // 0x319(0x3)
	float SlapbackOvercomeUpAngle; // 0x31C(0x4)
	float ColliderIgnoreR; // 0x320(0x4)
	uint8_t EnableOcclusionObstruction : 1; // 0x324(0x1), Mask(0x1)
	uint8_t BitPad_0x324_1 : 7; // 0x324(0x1)
	uint8_t Pad_0x325[0x3]; // 0x325(0x3)
	float OcclusionObstructionBaseIntervalSeconds; // 0x328(0x4)
	float OccMinDefaultListenerMoveDistance; // 0x32C(0x4)
	float OccMinEmitterMoveDistance; // 0x330(0x4)
	uint8_t Pad_0x334[0x4]; // 0x334(0x4)
	struct TSoftObjectPtr<UCurveFloat> OcclusionLodTickIntervalRatioCurve; // 0x338(0x28)
	uint8_t bEnableOccRTPC : 1; // 0x360(0x1), Mask(0x1)
	uint8_t BitPad_0x360_1 : 7; // 0x360(0x1)
	uint8_t Pad_0x361[0x3]; // 0x361(0x3)
	struct FName OccRTPCName; // 0x364(0x8)
	struct FName ObsRTPCName; // 0x36C(0x8)
	struct FName RoomFloorRTPCName; // 0x374(0x8)
	uint8_t Pad_0x37C[0x4]; // 0x37C(0x4)
	struct TArray<struct FGPAFrameControlConfig> FrameControls; // 0x380(0x10)
	EGPARoomBakeInterpolationType RoomBakeInterpolationType; // 0x390(0x1)
	uint8_t bDefaultOpenAllDoorWin : 1; // 0x391(0x1), Mask(0x1)
	uint8_t BitPad_0x391_1 : 7; // 0x391(0x1)
	uint8_t bAsynParserRoomBakeData : 1; // 0x392(0x1), Mask(0x1)
	uint8_t BitPad_0x392_1 : 7; // 0x392(0x1)
	uint8_t bEnableOpenEarlyReflection : 1; // 0x393(0x1), Mask(0x1)
	uint8_t BitPad_0x393_1 : 7; // 0x393(0x1)
	EGPAOpenReflectionGeometryType DefaultGeometryType; // 0x394(0x1)
	uint8_t Pad_0x395[0x3]; // 0x395(0x3)
	int32_t TraceDistanceSmoothBuffNum; // 0x398(0x4)
	float OverPitchDegree; // 0x39C(0x4)
	struct TMap<EGPAOpenReflectionGeometryType, struct FGPAOpenEarlyReflectionConfig> OpenEarlyReflectionConfigs; // 0x3A0(0x50)
	float DynamicReverbUpdateCD; // 0x3F0(0x4)
	float DynamicReverb3pUpdateCD; // 0x3F4(0x4)
	float UpdateDistance3p; // 0x3F8(0x4)
	int32_t InRoomSpaceTypeRtpc; // 0x3FC(0x4)
	struct TSoftObjectPtr<UGPAudioReverbSceneDataAsset> SpaceTypeDataAsset; // 0x400(0x28)
	uint8_t bEnableAudioCollider : 1; // 0x428(0x1), Mask(0x1)
	uint8_t BitPad_0x428_1 : 7; // 0x428(0x1)
	uint8_t Pad_0x429[0x7]; // 0x429(0x7)
	struct FGPADynamicReverbConfig OutRoomDynamicReverbConfig; // 0x430(0x90)
	struct FGPADynamicReverbConfig InRoomDynamicReverbConfig; // 0x4C0(0x90)
	float MaxDistanceToListener; // 0x550(0x4)
	uint8_t Pad_0x554[0x4]; // 0x554(0x4)
	struct FString SpaceType3pRtpcName; // 0x558(0x10)
	struct FString OutdoorReverb3pRtpcName; // 0x568(0x10)
	struct FName DoorWinTransitionRTPCName; // 0x578(0x8)
	float DoorWinTweenTime; // 0x580(0x4)
	float DoorWinUpdateCD; // 0x584(0x4)
	struct FGPAMeteringCallbackConfig MeteringCallbackConfig; // 0x588(0xC)
	uint8_t bEnable2DMusicSyncCallback : 1; // 0x594(0x1), Mask(0x1)
	uint8_t BitPad_0x594_1 : 7; // 0x594(0x1)
	uint8_t Pad_0x595[0x3]; // 0x595(0x3)
	DEFINE_UE_CLASS_HELPERS(UGPAudioSettings, "GPAudioSettings")

};

// Object: Class GPAudioRuntime.GPAudioSpatialAudioSettings
// Size: 0x1E8 (Inherited: 0x28)
struct UGPAudioSpatialAudioSettings : UObject
{
	struct FSoftObjectPath DiffractionAngleFactorCurvePath; // 0x28(0x18)
	struct FSoftObjectPath DiffractionDistanceFactorCurvePath; // 0x40(0x18)
	struct FSoftObjectPath DiffractionPortalAttenFactorCurvePath; // 0x58(0x18)
	struct FSoftObjectPath TransmissionDistanceSubtractionCurvePath; // 0x70(0x18)
	float ClosePortalTransmissionBlock; // 0x88(0x4)
	float OpenPortalTransmissionBlock; // 0x8C(0x4)
	float OpenedPortalBlockMaxValue; // 0x90(0x4)
	float DiffractionPercent; // 0x94(0x4)
	float TransmissionMinValue; // 0x98(0x4)
	int32_t MaxDiffractionSteps; // 0x9C(0x4)
	int32_t MaxDiffractionPaths; // 0xA0(0x4)
	int32_t MaxDiffractionCalcNum; // 0xA4(0x4)
	struct TArray<float> DistanceArray_M; // 0xA8(0x10)
	struct TArray<float> CheckIntervalArray; // 0xB8(0x10)
	int32_t MaxDiffractionSteps_Mobile; // 0xC8(0x4)
	int32_t MaxDiffractionPaths_Mobile; // 0xCC(0x4)
	int32_t MaxDiffractionCalcNum_Mobile; // 0xD0(0x4)
	uint8_t Pad_0xD4[0x4]; // 0xD4(0x4)
	struct TArray<float> DistanceArray_M_Mobile; // 0xD8(0x10)
	struct TArray<float> CheckIntervalArray_Mobile; // 0xE8(0x10)
	struct FSoftObjectPath AudioPresetTablePath; // 0xF8(0x18)
	struct FSoftObjectPath ConvolutionReverbPresetTablePath; // 0x110(0x18)
	float SpatialAudioManagerTickInterval; // 0x128(0x4)
	struct FName ObstructionRTPCName; // 0x12C(0x8)
	float DistScalarStartDist; // 0x134(0x4)
	float DistScalarEndDist; // 0x138(0x4)
	uint8_t Pad_0x13C[0x4]; // 0x13C(0x4)
	struct TArray<float> ObsDistanceArray_M; // 0x140(0x10)
	struct TArray<float> ObsCheckIntervalArrayFrontInView; // 0x150(0x10)
	struct TArray<float> ObsCheckIntervalArrayFrontOutOfView; // 0x160(0x10)
	struct TArray<float> ObsCheckIntervalArrayBack; // 0x170(0x10)
	struct TMap<EGPAudioBlueprintType, float> ObsCheckLastTime; // 0x180(0x50)
	struct FSoftObjectPath OccFloorResultMappingCurvePath; // 0x1D0(0x18)
	DEFINE_UE_CLASS_HELPERS(UGPAudioSpatialAudioSettings, "GPAudioSpatialAudioSettings")

};

// Object: Class GPAudioRuntime.GPAudioStatics
// Size: 0x28 (Inherited: 0x28)
struct UGPAudioStatics : UBlueprintFunctionLibrary
{

	// Object: Function GPAudioRuntime.GPAudioStatics.UpdateSlapbackActivated
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x8265c60
	// Params: [ Num(0) Size(0x0) ]
	static void UpdateSlapbackActivated();

	// Object: Function GPAudioRuntime.GPAudioStatics.UpdateBreakableItemStatus
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x8265b34
	// Params: [ Num(3) Size(0x20) ]
	static void UpdateBreakableItemStatus(struct FString& VolumeIDString, float BrokenPercent, struct AActor* BreakableItemActor);

	// Object: Function GPAudioRuntime.GPAudioStatics.UpdateAudioPortalStatus
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x8265978
	// Params: [ Num(3) Size(0x28) ]
	static void UpdateAudioPortalStatus(struct FString PortalIDString, uint8_t bOpen, struct FString InReason);

	// Object: Function GPAudioRuntime.GPAudioStatics.UnregisterVolumeWithListener
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x8265940
	// Params: [ Num(1) Size(0x1) ]
	static uint8_t UnregisterVolumeWithListener();

	// Object: Function GPAudioRuntime.GPAudioStatics.UnregisterAttenuationForListener
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x82658ac
	// Params: [ Num(1) Size(0x1) ]
	static void UnregisterAttenuationForListener(EGPAttenuationScaleReason InReason);

	// Object: Function GPAudioRuntime.GPAudioStatics.UnloadAllNonPlayingAudioEvents
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x1070a6bc
	// Params: [ Num(0) Size(0x0) ]
	static void UnloadAllNonPlayingAudioEvents();

	// Object: Function GPAudioRuntime.GPAudioStatics.StopSlapback
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x8265804
	// Params: [ Num(2) Size(0x9) ]
	static uint8_t StopSlapback(struct UGameAkComponent* Emitter);

	// Object: Function GPAudioRuntime.GPAudioStatics.StopPlayingByPlayingId
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x8265738
	// Params: [ Num(2) Size(0x8) ]
	static void StopPlayingByPlayingId(int32_t PlayingId, int32_t TransitionMS);

	// Object: Function GPAudioRuntime.GPAudioStatics.StopPlaying
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0xf400098
	// Params: [ Num(2) Size(0xC) ]
	static void StopPlaying(struct FGPAudioFuturePlayingID PlayingId, int32_t TransitionMS);

	// Object: Function GPAudioRuntime.GPAudioStatics.StopMonitorRecord
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x8265724
	// Params: [ Num(0) Size(0x0) ]
	static void StopMonitorRecord();

	// Object: Function GPAudioRuntime.GPAudioStatics.StopLastPlayingEvent
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x826561c
	// Params: [ Num(3) Size(0x14) ]
	static void StopLastPlayingEvent(struct UGPAudioEventAsset* InEvent, struct AActor* InPlayer, int32_t StopNum);

	// Object: Function GPAudioRuntime.GPAudioStatics.StopIngameSound
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x8265534
	// Params: [ Num(1) Size(0x10) ]
	static void StopIngameSound(struct FString Reason);

	// Object: Function GPAudioRuntime.GPAudioStatics.StopGlobalWeaponMIDI
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x826543c
	// Params: [ Num(2) Size(0x44) ]
	static void StopGlobalWeaponMIDI(const struct FGPAudioMIDIEventAsset& GPAudioMIDIEvent, int32_t FireCount);

	// Object: Function GPAudioRuntime.GPAudioStatics.StopAttachAudioByEvent
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x826532c
	// Params: [ Num(3) Size(0x11) ]
	static void StopAttachAudioByEvent(struct UGPAudioEventAsset* InEvent, struct AActor* InPlayer, uint8_t bStopAllFlag);

	// Object: Function GPAudioRuntime.GPAudioStatics.StopAllSounds
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x8265298
	// Params: [ Num(1) Size(0x1) ]
	static void StopAllSounds(EStopAllSoundType StopType);

	// Object: Function GPAudioRuntime.GPAudioStatics.StopActorSound
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x8265204
	// Params: [ Num(1) Size(0x8) ]
	static void StopActorSound(struct AActor* InPlayer);

	// Object: Function GPAudioRuntime.GPAudioStatics.Stop2DLoopEvent
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x10a78ba0
	// Params: [ Num(0) Size(0x0) ]
	static void Stop2DLoopEvent();

	// Object: Function GPAudioRuntime.GPAudioStatics.StartSlapback
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x8265128
	// Params: [ Num(3) Size(0x14) ]
	static int32_t StartSlapback(struct UGameAkComponent* Emitter, struct UGPAudioEventAsset* Event);

	// Object: Function GPAudioRuntime.GPAudioStatics.StartReplay
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x8265114
	// Params: [ Num(0) Size(0x0) ]
	static void StartReplay();

	// Object: Function GPAudioRuntime.GPAudioStatics.StartMonitorRecord
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x8265100
	// Params: [ Num(0) Size(0x0) ]
	static void StartMonitorRecord();

	// Object: Function GPAudioRuntime.GPAudioStatics.SetWindowOpen
	// Flags: [Final|Native|Static|Public|HasDefaults|BlueprintCallable]
	// Offset: 0xef0dfd8
	// Params: [ Num(2) Size(0x10) ]
	static void SetWindowOpen(struct FVector WinPostion, int32_t OpenScal_0_100);

	// Object: Function GPAudioRuntime.GPAudioStatics.SetWeatherAudioID
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x826506c
	// Params: [ Num(1) Size(0x8) ]
	static void SetWeatherAudioID(int64_t WeatherAudioID);

	// Object: Function GPAudioRuntime.GPAudioStatics.SetSwitch
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x8264e78
	// Params: [ Num(4) Size(0x30) ]
	static void SetSwitch(struct AActor* Actor, struct UAkSwitchValue* SwitchValue, struct FString SwitchGroup, struct FString SwitchState);

	// Object: Function GPAudioRuntime.GPAudioStatics.SetSlapbackIsActivated
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x8264ddc
	// Params: [ Num(1) Size(0x1) ]
	static void SetSlapbackIsActivated(uint8_t bIsActivated);

	// Object: Function GPAudioRuntime.GPAudioStatics.SetRTPCByStr
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x8264c8c
	// Params: [ Num(4) Size(0x24) ]
	static void SetRTPCByStr(struct FString RTPCName, float RTPCValue, struct AActor* Actor, int32_t InterpolationTimeMs);

	// Object: Function GPAudioRuntime.GPAudioStatics.SetRTPCByName
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x10ae522c
	// Params: [ Num(5) Size(0x1D) ]
	static void SetRTPCByName(struct FName RTPCName, float RTPCValue, struct AActor* Actor, int32_t InterpolationTimeMs, uint8_t bCreateGameAkIfNotExist);

	// Object: Function GPAudioRuntime.GPAudioStatics.SetRTPC
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x8264aa0
	// Params: [ Num(4) Size(0x3C) ]
	static void SetRTPC(struct TSoftObjectPtr<UObject> RTPCKey, float RTPCValue, struct AActor* Actor, int32_t InterpolationTimeMs);

	// Object: Function GPAudioRuntime.GPAudioStatics.SetResonanceEnable
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x10add37c
	// Params: [ Num(1) Size(0x1) ]
	static void SetResonanceEnable(uint8_t bEnable);

	// Object: Function GPAudioRuntime.GPAudioStatics.SetObserveredGameAk
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x8264948
	// Params: [ Num(4) Size(0xB) ]
	static void SetObserveredGameAk(struct UGameAkComponent* InGameAk, uint8_t bObserverd, EObserveredAudioState InObserveredAudioState, EAudioCharacterGroup InCharacterGroup);

	// Object: Function GPAudioRuntime.GPAudioStatics.SetObserveredActor
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x82647f0
	// Params: [ Num(4) Size(0xB) ]
	static void SetObserveredActor(struct AActor* InActor, uint8_t bObserverd, EObserveredAudioState InObserveredAudioState, EAudioCharacterGroup InCharacterGroup);

	// Object: Function GPAudioRuntime.GPAudioStatics.SetLocallyListenRangeFactor
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x826475c
	// Params: [ Num(1) Size(0x4) ]
	static void SetLocallyListenRangeFactor(float InRangefator);

	// Object: Function GPAudioRuntime.GPAudioStatics.SetHRTFs
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x82646c8
	// Params: [ Num(1) Size(0x4) ]
	static void SetHRTFs(int32_t HRTFIndex);

	// Object: Function GPAudioRuntime.GPAudioStatics.SetHRTFPluginMode
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x8264634
	// Params: [ Num(1) Size(0x4) ]
	static void SetHRTFPluginMode(int32_t ModeNum);

	// Object: Function GPAudioRuntime.GPAudioStatics.SetHRTFPluginEnable
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x8264598
	// Params: [ Num(1) Size(0x1) ]
	static void SetHRTFPluginEnable(uint8_t bEnable);

	// Object: Function GPAudioRuntime.GPAudioStatics.SetHeadSetArg
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x8264494
	// Params: [ Num(3) Size(0x2A) ]
	static uint8_t SetHeadSetArg(const struct FGPAudioHeadSetRow& HeadSetRowConfig, uint8_t PutOn);

	// Object: Function GPAudioRuntime.GPAudioStatics.SetGPAudioWeaponCompositeArgs
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x8264364
	// Params: [ Num(2) Size(0x60) ]
	static void SetGPAudioWeaponCompositeArgs(const struct FGPAudioCompositeParam& CompositeParam, struct AActor* InPlayer);

	// Object: Function GPAudioRuntime.GPAudioStatics.SetGlobalRTPCByStr
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x8264250
	// Params: [ Num(3) Size(0x18) ]
	static void SetGlobalRTPCByStr(struct FString RTPCName, float RTPCValue, int32_t InterpolationTimeMs);

	// Object: Function GPAudioRuntime.GPAudioStatics.SetGlobalRTPCByName
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0xfbc4ec8
	// Params: [ Num(3) Size(0x10) ]
	static void SetGlobalRTPCByName(struct FName RTPCName, float RTPCValue, int32_t InterpolationTimeMs);

	// Object: Function GPAudioRuntime.GPAudioStatics.SetGlobalRTPC
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x82640a0
	// Params: [ Num(3) Size(0x30) ]
	static void SetGlobalRTPC(struct TSoftObjectPtr<UObject> RTPCKey, float RTPCValue, int32_t InterpolationTimeMs);

	// Object: Function GPAudioRuntime.GPAudioStatics.SetGameAkViewStateAndGroup
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x8263f6c
	// Params: [ Num(3) Size(0xA) ]
	static void SetGameAkViewStateAndGroup(struct AActor* InPlayer, const EAudioCharacterViewState& InViewState, const EAudioCharacterGroup& InCharacterGroup);

	// Object: Function GPAudioRuntime.GPAudioStatics.SetGameAkMute
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x8263e80
	// Params: [ Num(3) Size(0xA) ]
	static uint8_t SetGameAkMute(struct AActor* InPlayer, uint8_t in_Mute);

	// Object: Function GPAudioRuntime.GPAudioStatics.SetGameAkHardMute
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x8263d94
	// Params: [ Num(3) Size(0xA) ]
	static uint8_t SetGameAkHardMute(struct AActor* InActor, uint8_t in_Mute);

	// Object: Function GPAudioRuntime.GPAudioStatics.SetGameAkComponentManagerTick
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x8263c2c
	// Params: [ Num(4) Size(0xB) ]
	static void SetGameAkComponentManagerTick(struct AActor* InPlayer, uint8_t ManagerTick, uint8_t bCreateIfNotExist, uint8_t bEnableDiffraction);

	// Object: Function GPAudioRuntime.GPAudioStatics.SetForceUseWindowsApiLevelWithRestart
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x8263b98
	// Params: [ Num(1) Size(0x4) ]
	static void SetForceUseWindowsApiLevelWithRestart(uint32_t ApiLevel);

	// Object: Function GPAudioRuntime.GPAudioStatics.SetForceUseWindowsApiLevel
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x8263b04
	// Params: [ Num(1) Size(0x4) ]
	static void SetForceUseWindowsApiLevel(uint32_t ApiLevel);

	// Object: Function GPAudioRuntime.GPAudioStatics.SetEnableImmersePersonalized
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x8263a68
	// Params: [ Num(1) Size(0x1) ]
	static void SetEnableImmersePersonalized(uint8_t bEnable);

	// Object: Function GPAudioRuntime.GPAudioStatics.SetEnableGPAudioDebugger
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x82639cc
	// Params: [ Num(1) Size(0x1) ]
	static void SetEnableGPAudioDebugger(uint8_t bEnable);

	// Object: Function GPAudioRuntime.GPAudioStatics.SetEmoteSoundOn
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x82639b8
	// Params: [ Num(0) Size(0x0) ]
	static void SetEmoteSoundOn();

	// Object: Function GPAudioRuntime.GPAudioStatics.SetEmoteSoundOff
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x82639a4
	// Params: [ Num(0) Size(0x0) ]
	static void SetEmoteSoundOff();

	// Object: Function GPAudioRuntime.GPAudioStatics.SetDolbyPluginEnable
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0xfabaef0
	// Params: [ Num(1) Size(0x1) ]
	static void SetDolbyPluginEnable(uint8_t bEnable);

	// Object: Function GPAudioRuntime.GPAudioStatics.SetDolbyNotDownMix
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x105d3ac0
	// Params: [ Num(1) Size(0x1) ]
	static void SetDolbyNotDownMix(uint8_t bEnable);

	// Object: Function GPAudioRuntime.GPAudioStatics.SetCurrentAudioCulture
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x8263908
	// Params: [ Num(1) Size(0x10) ]
	static void SetCurrentAudioCulture(struct FString AudioCulture);

	// Object: Function GPAudioRuntime.GPAudioStatics.SetCharacterListenRangeFactor
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x8263838
	// Params: [ Num(2) Size(0xC) ]
	static void SetCharacterListenRangeFactor(struct ACHARACTER* TargetCacharacter, float AttenuationFactor);

	// Object: Function GPAudioRuntime.GPAudioStatics.SetCharacterDieStatus
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x8263760
	// Params: [ Num(2) Size(0x9) ]
	static void SetCharacterDieStatus(struct ACHARACTER* InCharacter, uint8_t bDie);

	// Object: Function GPAudioRuntime.GPAudioStatics.SetBusEffect
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x826359c
	// Params: [ Num(4) Size(0x29) ]
	static uint8_t SetBusEffect(struct FString BusName, int32_t uFXIndex, struct FString ShareSetName);

	// Object: Function GPAudioRuntime.GPAudioStatics.SetAutoSlapbackActive
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x8263500
	// Params: [ Num(1) Size(0x1) ]
	static void SetAutoSlapbackActive(uint8_t bAutoUpdate);

	// Object: Function GPAudioRuntime.GPAudioStatics.SetAKStateValue
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x826346c
	// Params: [ Num(1) Size(0x8) ]
	static void SetAKStateValue(struct UAkStateValue* in_stateValue);

	// Object: Function GPAudioRuntime.GPAudioStatics.SetAKStateByNameSkipTransitionTime
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x82632fc
	// Params: [ Num(2) Size(0x20) ]
	static void SetAKStateByNameSkipTransitionTime(struct FString StateGroup, struct FString State);

	// Object: Function GPAudioRuntime.GPAudioStatics.SetAKStateByName
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x826318c
	// Params: [ Num(2) Size(0x20) ]
	static void SetAKStateByName(struct FString StateGroup, struct FString State);

	// Object: Function GPAudioRuntime.GPAudioStatics.SetAkComponentWaterState
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x82630bc
	// Params: [ Num(2) Size(0x9) ]
	static void SetAkComponentWaterState(struct UGameAkComponent* AkComp, EGPAudioWaterPreset WaterPresetState);

	// Object: Function GPAudioRuntime.GPAudioStatics.SetActorOutputBusVolume
	// Flags: [Final|BlueprintCosmetic|Native|Public|BlueprintCallable]
	// Offset: 0x8262fdc
	// Params: [ Num(2) Size(0xC) ]
	void SetActorOutputBusVolume(struct AActor* InPlayer, float BusVolume);

	// Object: Function GPAudioRuntime.GPAudioStatics.SetActorAttenuationScalingFactor
	// Flags: [Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable]
	// Offset: 0x8262f0c
	// Params: [ Num(2) Size(0xC) ]
	static void SetActorAttenuationScalingFactor(struct AActor* InPlayer, float Value);

	// Object: Function GPAudioRuntime.GPAudioStatics.Set714OutPut
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x8262e70
	// Params: [ Num(1) Size(0x1) ]
	static void Set714OutPut(uint8_t bEnable);

	// Object: Function GPAudioRuntime.GPAudioStatics.SeekOnGlobalEvent
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x8262d64
	// Params: [ Num(3) Size(0x14) ]
	static void SeekOnGlobalEvent(struct UGPAudioEventAsset* InEvent, float Percent, struct FGPAudioFuturePlayingID PlayingId);

	// Object: Function GPAudioRuntime.GPAudioStatics.SeekOnEvent
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x8262be0
	// Params: [ Num(5) Size(0x1D) ]
	static void SeekOnEvent(struct UGPAudioEventAsset* InEvent, struct AActor* in_pActor, float Percent, struct FGPAudioFuturePlayingID PlayingId, EGPAudioBlueprintType AudioType);

	// Object: Function GPAudioRuntime.GPAudioStatics.ResetOutputDevice
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x8262bcc
	// Params: [ Num(0) Size(0x0) ]
	static void ResetOutputDevice();

	// Object: Function GPAudioRuntime.GPAudioStatics.ResetMeteringPeakArray
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x8262bb8
	// Params: [ Num(0) Size(0x0) ]
	static void ResetMeteringPeakArray();

	// Object: Function GPAudioRuntime.GPAudioStatics.ResetBusMeteringPeakArray
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x8262ad0
	// Params: [ Num(1) Size(0x10) ]
	static void ResetBusMeteringPeakArray(struct FString BusName);

	// Object: Function GPAudioRuntime.GPAudioStatics.ReplaceOutputDevice
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x8262a28
	// Params: [ Num(2) Size(0x5) ]
	static uint8_t ReplaceOutputDevice(uint32_t DeviceID);

	// Object: Function GPAudioRuntime.GPAudioStatics.Remove714Output
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x8262a14
	// Params: [ Num(0) Size(0x0) ]
	static void Remove714Output();

	// Object: Function GPAudioRuntime.GPAudioStatics.RegisterHighFreqUpdatePos
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x8262944
	// Params: [ Num(2) Size(0x9) ]
	static void RegisterHighFreqUpdatePos(struct AActor* InActor, EGameAkHighFreqUpdatePosReason InReason);

	// Object: Function GPAudioRuntime.GPAudioStatics.RegisterBreakableItemToVolume
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x826285c
	// Params: [ Num(2) Size(0x18) ]
	static void RegisterBreakableItemToVolume(struct AActor* BreakableItemActor, struct FString& VolumeIDString);

	// Object: Function GPAudioRuntime.GPAudioStatics.RegisterAttenuationForListener
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x8262754
	// Params: [ Num(3) Size(0xC) ]
	static void RegisterAttenuationForListener(EGPAttenuationScaleReason InReason, float Scalar, float Duration);

	// Object: Function GPAudioRuntime.GPAudioStatics.ReceiveAnimationNotifyWithEnumType
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x826257c
	// Params: [ Num(6) Size(0x2A) ]
	static uint8_t ReceiveAnimationNotifyWithEnumType(const struct FName& Notify, EGPAudioBlueprintType EType, struct AActor* PlayActor, const struct FGPAudioEventAdditionalFunction& AddFunc, uint8_t isLogicTrigger);

	// Object: Function GPAudioRuntime.GPAudioStatics.PreGetRangeAndDuration
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x8262404
	// Params: [ Num(5) Size(0x19) ]
	static uint8_t PreGetRangeAndDuration(struct UGPAudioEventAsset* InAudioAsset, struct AActor* InPlayer, float& Range, float& Duration);

	// Object: Function GPAudioRuntime.GPAudioStatics.PostponeLongAudioExpireCheckTimeBP
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0xf557d2c
	// Params: [ Num(1) Size(0x8) ]
	static void PostponeLongAudioExpireCheckTimeBP(struct FGPAudioFuturePlayingID InFuturePlayingId);

	// Object: Function GPAudioRuntime.GPAudioStatics.PostponeLongAudioExpireCheckTime
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x8262370
	// Params: [ Num(1) Size(0x4) ]
	static void PostponeLongAudioExpireCheckTime(uint32_t InPlayingID);

	// Object: Function GPAudioRuntime.GPAudioStatics.PlayStopGPAudioEventAtLocationOpt
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0xf6dab88
	// Params: [ Num(3) Size(0x18) ]
	static void PlayStopGPAudioEventAtLocationOpt(struct UGPAudioEventAsset* InEvent, struct FGPAudioFuturePlayingID PlayingId, struct UObject* WorldContext);

	// Object: Function GPAudioRuntime.GPAudioStatics.PlayPhysicalFootStep
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x82621d4
	// Params: [ Num(6) Size(0x28) ]
	static struct UGPAudioEventAsset* PlayPhysicalFootStep(struct AActor* Actor, EGPAudioFootSoundType AudioType, struct UPhysicalMaterialAudioDataAsset* PhyFSConfig, uint8_t bIsLeft, float Scale);

	// Object: Function GPAudioRuntime.GPAudioStatics.PlayGPAudioEventAtLocationOpt
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable]
	// Offset: 0x8261dd4
	// Params: [ Num(15) Size(0x5C) ]
	static struct FGPAudioFuturePlayingID PlayGPAudioEventAtLocationOpt(struct UGPAudioEventAsset* InEvent, struct FVector Location, struct FRotator Rotator, const struct FName& AudioTypeName, struct UObject* WorldContext, uint8_t bActiveStopRequired, EGameAkType InGameAkType, uint8_t bPreCutted, float AttenuationScalar, uint8_t bCalcSimplifiedTranDiff, struct FVector LocationOffset, uint8_t bCalcCompletedTranDiff, float RTPCValue, EGPAudioWaterPreset WaterPresetState);

	// Object: Function GPAudioRuntime.GPAudioStatics.PlayGPAudioEventAtLocationEnumTypeOpt
	// Flags: [Final|Native|Static|Public|HasDefaults|BlueprintCallable]
	// Offset: 0xf5fcc5c
	// Params: [ Num(15) Size(0x5C) ]
	static struct FGPAudioFuturePlayingID PlayGPAudioEventAtLocationEnumTypeOpt(struct UGPAudioEventAsset* InEvent, struct FVector Location, struct FRotator Rotator, EGPAudioBlueprintType EType, struct UObject* WorldContext, uint8_t bActiveStopRequired, EGameAkType InGameAkType, uint8_t bPreCutted, float AttenuationScalar, uint8_t bCalcSimplifiedTranDiff, struct FVector LocationOffset, uint8_t bCalcCompletedTranDiff, float RTPCValue, EGPAudioWaterPreset WaterPresetState);

	// Object: Function GPAudioRuntime.GPAudioStatics.PlayGPAudioEventAtLocationEnumType
	// Flags: [Final|Native|Static|Public|HasDefaults|BlueprintCallable]
	// Offset: 0xf368c14
	// Params: [ Num(9) Size(0x3C) ]
	static struct FGPAudioFuturePlayingID PlayGPAudioEventAtLocationEnumType(struct UGPAudioEventAsset* InEvent, struct FVector Location, struct FRotator Rotator, EGPAudioBlueprintType EType, struct AActor* SourceActor, uint8_t bAutoUnRegisterGameObjID, EAttenuationScaleType AttenuationType, uint8_t bPreCutted);

	// Object: Function GPAudioRuntime.GPAudioStatics.PlayGPAudioCharacterVoice
	// Flags: [Final|Native|Static|Public|HasOutParms]
	// Offset: 0x8261b98
	// Params: [ Num(8) Size(0x2C) ]
	static struct FGPAudioFuturePlayingID PlayGPAudioCharacterVoice(struct UGPAudioEventAsset* InEvent, struct UGameAkComponent* GameAk, const struct FName& AudioTypeName, uint8_t is2DAudio, float Duration, uint8_t bNeedMakeNoise, uint8_t bPreCutted);

	// Object: Function GPAudioRuntime.GPAudioStatics.PlayGPAudioAttachWithType
	// Flags: [Final|Native|Static|Public|HasOutParms]
	// Offset: 0x82619ec
	// Params: [ Num(6) Size(0x28) ]
	static struct FGPAudioFuturePlayingID PlayGPAudioAttachWithType(struct UGPAudioEventAsset* InEvent, struct AActor* InPlayer, const struct FName& AudioTypeName, float Duration, uint8_t bNeedGetPosion);

	// Object: Function GPAudioRuntime.GPAudioStatics.PlayGPAudioAttachWithEnumType
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0xf173c68
	// Params: [ Num(9) Size(0x2C) ]
	static struct FGPAudioFuturePlayingID PlayGPAudioAttachWithEnumType(struct UGPAudioEventAsset* InEvent, struct AActor* InPlayer, EGPAudioBlueprintType EType, float Duration, uint8_t bNeedMakeNoise, uint8_t bPreCutted, float AttenuationScalar, uint8_t bNeedGetPosion);

	// Object: Function GPAudioRuntime.GPAudioStatics.PlayGPAudioAttachWithEndCallback
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x826179c
	// Params: [ Num(8) Size(0x34) ]
	static struct FGPAudioFuturePlayingID PlayGPAudioAttachWithEndCallback(struct UGPAudioEventAsset* InEvent, struct AActor* InPlayer, EGPAudioBlueprintType EType, const struct FDelegate& EndPlayCallback, float Duration, uint8_t bNeedMakeNoise, uint8_t bPreCutted);

	// Object: Function GPAudioRuntime.GPAudioStatics.PlayGPAudioAttachWithBeginCallback
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x82614c8
	// Params: [ Num(10) Size(0x3C) ]
	static struct FGPAudioFuturePlayingID PlayGPAudioAttachWithBeginCallback(struct UGPAudioEventAsset* InEvent, struct AActor* InPlayer, EGPAudioBlueprintType EType, const struct FDelegate& BeginPlayCallback, float Duration, uint8_t bNeedMakeNoise, uint8_t bPreCutted, float AttenuationScalar, uint8_t bNeedGetPosion);

	// Object: Function GPAudioRuntime.GPAudioStatics.PlayGPAudioAttachStaticComponentWithEndCallback
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x82612b4
	// Params: [ Num(7) Size(0x30) ]
	static struct FGPAudioFuturePlayingID PlayGPAudioAttachStaticComponentWithEndCallback(struct UGPAudioEventAsset* InEvent, struct UGameStaticAkComponent* GameAk, EGPAudioBlueprintType EType, const struct FDelegate& EndPlayCallback, uint8_t bNeedMakeNoise, uint8_t bPreCutted);

	// Object: Function GPAudioRuntime.GPAudioStatics.PlayGPAudioAttachStaticComponent
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x10806db8
	// Params: [ Num(6) Size(0x1C) ]
	static struct FGPAudioFuturePlayingID PlayGPAudioAttachStaticComponent(struct UGPAudioEventAsset* InEvent, struct UGameStaticAkComponent* GameAk, EGPAudioBlueprintType EType, uint8_t bNeedMakeNoise, uint8_t bPreCutted);

	// Object: Function GPAudioRuntime.GPAudioStatics.PlayGPAudioAttachByComponent
	// Flags: [Final|Native|Static|Public|HasOutParms]
	// Offset: 0x82610bc
	// Params: [ Num(7) Size(0x28) ]
	static struct FGPAudioFuturePlayingID PlayGPAudioAttachByComponent(struct UGPAudioEventAsset* InEvent, struct UGameAkComponent* GameAk, const struct FName& AudioTypeName, float Duration, uint8_t bNeedMakeNoise, uint8_t bPreCutted);

	// Object: Function GPAudioRuntime.GPAudioStatics.PlayGlobalWeaponMIDIAk
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x8260e74
	// Params: [ Num(9) Size(0x39) ]
	static uint8_t PlayGlobalWeaponMIDIAk(struct AActor* Actor, float FirstCoolDownMs, float NoteDuration, uint8_t IsStopByNoteOff, struct UGPAudioEventAsset* FireAudioEvent, struct UGPAudioEventAsset* StartEvent, struct UGPAudioEventAsset* EndEvent, struct UGPAudioEventAsset* EFAtomEvent);

	// Object: Function GPAudioRuntime.GPAudioStatics.PlayFootStepByAnimName
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x8260ce4
	// Params: [ Num(4) Size(0x21) ]
	static uint8_t PlayFootStepByAnimName(struct AActor* Actor, struct FString AnimName, struct UGPAudioEventAsset*& OutEventAsset);

	// Object: Function GPAudioRuntime.GPAudioStatics.PlayBindPhysicalFootStep
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x8260b8c
	// Params: [ Num(5) Size(0x28) ]
	static struct UGPAudioEventAsset* PlayBindPhysicalFootStep(struct AActor* Actor, struct UPhysicalMaterial* PhysMat, EGPAudioFootSoundType AudioType, struct UPhysicalMaterialAudioDataAsset* BindCofig);

	// Object: Function GPAudioRuntime.GPAudioStatics.Play3PGlobalWeaponMIDIAk
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x826097c
	// Params: [ Num(8) Size(0x31) ]
	static uint8_t Play3PGlobalWeaponMIDIAk(struct AActor* Actor, float FirstCoolDownMs, float NoteDuration, uint8_t IsStopByNoteOff, struct UGPAudioEventAsset* FireAudioEvent, struct UGPAudioEventAsset* StartEvent, struct UGPAudioEventAsset* EndEvent);

	// Object: Function GPAudioRuntime.GPAudioStatics.Play2DGlobalAudioWithEndCallback
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x826086c
	// Params: [ Num(3) Size(0x20) ]
	static struct FGPAudioFuturePlayingID Play2DGlobalAudioWithEndCallback(struct UGPAudioEventAsset* InAudioAsset, const struct FDelegate& EndPlayCallback);

	// Object: Function GPAudioRuntime.GPAudioStatics.Play2DGlobalAudioWithBeginEndCallback
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x82606f0
	// Params: [ Num(4) Size(0x30) ]
	static struct FGPAudioFuturePlayingID Play2DGlobalAudioWithBeginEndCallback(struct UGPAudioEventAsset* InAudioAsset, const struct FDelegate& BeginPlayCallback, const struct FDelegate& EndPlayCallback);

	// Object: Function GPAudioRuntime.GPAudioStatics.Play2DGlobalAudioWithBeginCallback
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x82605e0
	// Params: [ Num(3) Size(0x20) ]
	static struct FGPAudioFuturePlayingID Play2DGlobalAudioWithBeginCallback(struct UGPAudioEventAsset* InAudioAsset, const struct FDelegate& BeginPlayCallback);

	// Object: Function GPAudioRuntime.GPAudioStatics.Play2DGlobalAudio
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0xf851dfc
	// Params: [ Num(3) Size(0x14) ]
	static struct FGPAudioFuturePlayingID Play2DGlobalAudio(struct UGPAudioEventAsset* InAudioAsset, uint8_t bNeedGetPosion);

	// Object: Function GPAudioRuntime.GPAudioStatics.OpenWarTapeMode
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x8260544
	// Params: [ Num(1) Size(0x1) ]
	static void OpenWarTapeMode(uint8_t bOpen);

	// Object: Function GPAudioRuntime.GPAudioStatics.MuteIngameSound
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x826045c
	// Params: [ Num(1) Size(0x10) ]
	static void MuteIngameSound(struct FString Reason);

	// Object: Function GPAudioRuntime.GPAudioStatics.MakeNoise
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x82602f4
	// Params: [ Num(5) Size(0x20) ]
	static float MakeNoise(struct UGPAudioEventAsset* InEvent, struct UGameAkComponent* GameAk, const struct FName& AudioType, float MakeNoiseRatio);

	// Object: Function GPAudioRuntime.GPAudioStatics.LogSplitLine
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x826020c
	// Params: [ Num(1) Size(0x10) ]
	static void LogSplitLine(struct FString HeadStr);

	// Object: Function GPAudioRuntime.GPAudioStatics.LogPerformanceReport
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x82601f8
	// Params: [ Num(0) Size(0x0) ]
	static void LogPerformanceReport();

	// Object: Function GPAudioRuntime.GPAudioStatics.LogAudioError
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x8260110
	// Params: [ Num(1) Size(0x10) ]
	static void LogAudioError(struct FString LogStr);

	// Object: Function GPAudioRuntime.GPAudioStatics.LogAudio
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x8260028
	// Params: [ Num(1) Size(0x10) ]
	static void LogAudio(struct FString LogStr);

	// Object: Function GPAudioRuntime.GPAudioStatics.LoadPhysicalMaterialConfig
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable]
	// Offset: 0x825ff34
	// Params: [ Num(2) Size(0x20) ]
	static void LoadPhysicalMaterialConfig(struct AActor* InPlayer, const struct FSoftObjectPath& SoPath);

	// Object: Function GPAudioRuntime.GPAudioStatics.IsWarTapeModeOpen
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x825fefc
	// Params: [ Num(1) Size(0x1) ]
	static uint8_t IsWarTapeModeOpen();

	// Object: Function GPAudioRuntime.GPAudioStatics.IsUserMono
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x825fec4
	// Params: [ Num(1) Size(0x1) ]
	static uint8_t IsUserMono();

	// Object: Function GPAudioRuntime.GPAudioStatics.IsPlayingByPlayingID
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x825fe1c
	// Params: [ Num(2) Size(0x5) ]
	static uint8_t IsPlayingByPlayingID(int32_t InPlayingID);

	// Object: Function GPAudioRuntime.GPAudioStatics.IsPlaying
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x825fd64
	// Params: [ Num(2) Size(0x9) ]
	static uint8_t IsPlaying(struct FGPAudioFuturePlayingID& PlayingId);

	// Object: Function GPAudioRuntime.GPAudioStatics.IsMuteAudio_ForIOS
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x825fd2c
	// Params: [ Num(1) Size(0x1) ]
	static uint8_t IsMuteAudio_ForIOS();

	// Object: Function GPAudioRuntime.GPAudioStatics.IsMonoAudioEnabled_Mobile
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x825fcf4
	// Params: [ Num(1) Size(0x1) ]
	static uint8_t IsMonoAudioEnabled_Mobile();

	// Object: Function GPAudioRuntime.GPAudioStatics.IsLocalPlayerControlledPawn
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x825fc4c
	// Params: [ Num(2) Size(0x9) ]
	static uint8_t IsLocalPlayerControlledPawn(struct AActor* InActor);

	// Object: Function GPAudioRuntime.GPAudioStatics.IsInMpAudioLowMemoryMode
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x825fc14
	// Params: [ Num(1) Size(0x1) ]
	static uint8_t IsInMpAudioLowMemoryMode();

	// Object: Function GPAudioRuntime.GPAudioStatics.IsInAudioLowMemoryMode
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x825fbdc
	// Params: [ Num(1) Size(0x1) ]
	static uint8_t IsInAudioLowMemoryMode();

	// Object: Function GPAudioRuntime.GPAudioStatics.IsInAudio4GBDeviceMode
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x825fba4
	// Params: [ Num(1) Size(0x1) ]
	static uint8_t IsInAudio4GBDeviceMode();

	// Object: Function GPAudioRuntime.GPAudioStatics.IsGlobalWeaponMIDIPlaying
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x825fafc
	// Params: [ Num(2) Size(0x9) ]
	static uint8_t IsGlobalWeaponMIDIPlaying(struct AActor* SourceActor);

	// Object: Function GPAudioRuntime.GPAudioStatics.IsDolbyAtmosSupported
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0xfcf36b0
	// Params: [ Num(1) Size(0x1) ]
	static uint8_t IsDolbyAtmosSupported();

	// Object: Function GPAudioRuntime.GPAudioStatics.IsCurrentIdPlaying
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x825fa54
	// Params: [ Num(2) Size(0x9) ]
	static uint8_t IsCurrentIdPlaying(struct FGPAudioFuturePlayingID PlayingId);

	// Object: Function GPAudioRuntime.GPAudioStatics.IsCurrentDeviceMultiChannel
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x825fa1c
	// Params: [ Num(1) Size(0x1) ]
	static uint8_t IsCurrentDeviceMultiChannel();

	// Object: Function GPAudioRuntime.GPAudioStatics.IsConvolutionReverbOpen
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x825f9e4
	// Params: [ Num(1) Size(0x1) ]
	static uint8_t IsConvolutionReverbOpen();

	// Object: Function GPAudioRuntime.GPAudioStatics.IsAudioMuted
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x825f9ac
	// Params: [ Num(1) Size(0x1) ]
	static uint8_t IsAudioMuted();

	// Object: Function GPAudioRuntime.GPAudioStatics.IsAnimPreviewActor
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x825f904
	// Params: [ Num(2) Size(0x9) ]
	static uint8_t IsAnimPreviewActor(struct AActor* Actor);

	// Object: Function GPAudioRuntime.GPAudioStatics.HasReplacedOutputDevice
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x825f8cc
	// Params: [ Num(1) Size(0x1) ]
	static uint8_t HasReplacedOutputDevice();

	// Object: Function GPAudioRuntime.GPAudioStatics.GetWeaponFireShadowAkName
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x825f898
	// Params: [ Num(1) Size(0x8) ]
	static struct FName GetWeaponFireShadowAkName();

	// Object: Function GPAudioRuntime.GPAudioStatics.GetSystemDeviceList
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x825f828
	// Params: [ Num(1) Size(0x10) ]
	static struct TArray<struct FGPAudioSysDeviceInfo> GetSystemDeviceList();

	// Object: Function GPAudioRuntime.GPAudioStatics.GetSourcePlayPosition
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x825f740
	// Params: [ Num(3) Size(0x10) ]
	static int32_t GetSourcePlayPosition(struct FGPAudioFuturePlayingID PlayingId, uint8_t bExtrapolate);

	// Object: Function GPAudioRuntime.GPAudioStatics.GetScatteredAudioEventPathByName
	// Flags: [Final|Native|Static|Public|HasDefaults]
	// Offset: 0x825f60c
	// Params: [ Num(2) Size(0x28) ]
	static struct FSoftObjectPath GetScatteredAudioEventPathByName(struct FString InEventIDString);

	// Object: Function GPAudioRuntime.GPAudioStatics.GetRTPCValue
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x825f4e0
	// Params: [ Num(4) Size(0x15) ]
	static uint8_t GetRTPCValue(struct AActor* Actor, struct FName RTPC, float& Value);

	// Object: Function GPAudioRuntime.GPAudioStatics.GetPlayingCount
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x825f43c
	// Params: [ Num(2) Size(0xC) ]
	static int32_t GetPlayingCount(struct AActor* InPlayer);

	// Object: Function GPAudioRuntime.GPAudioStatics.GetMeteringPeakArray
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x825f2c8
	// Params: [ Num(5) Size(0x20) ]
	static int32_t GetMeteringPeakArray(struct TArray<float>& OutMeteringPeakArray, int32_t OutSamples, int32_t StartIndex, uint8_t MultiChannel);

	// Object: Function GPAudioRuntime.GPAudioStatics.GetIDFromString
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x825f1d0
	// Params: [ Num(2) Size(0x14) ]
	static uint32_t GetIDFromString(struct FString DeviceID);

	// Object: Function GPAudioRuntime.GPAudioStatics.GetHRTFPluginEnable
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x825f198
	// Params: [ Num(1) Size(0x1) ]
	static uint8_t GetHRTFPluginEnable();

	// Object: Function GPAudioRuntime.GPAudioStatics.GetGlobalRTPCValue
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x825f0a4
	// Params: [ Num(3) Size(0xD) ]
	static uint8_t GetGlobalRTPCValue(struct FName RTPC, float& Value);

	// Object: Function GPAudioRuntime.GPAudioStatics.GetGlobalAttenuationValueFromListener
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x825efbc
	// Params: [ Num(2) Size(0x54) ]
	static float GetGlobalAttenuationValueFromListener(const struct TSet<EGPAttenuationScaleReason>& InReasons);

	// Object: Function GPAudioRuntime.GPAudioStatics.GetGameAkInfo
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x825eec4
	// Params: [ Num(3) Size(0x11) ]
	static uint8_t GetGameAkInfo(struct AActor* InPlayer, struct FGameAkInfo& OutGameAkInfo);

	// Object: Function GPAudioRuntime.GPAudioStatics.GetGameAkFloorPhysMat
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x825ee20
	// Params: [ Num(2) Size(0x10) ]
	static struct UPhysicalMaterial* GetGameAkFloorPhysMat(struct AActor* InPlayer);

	// Object: Function GPAudioRuntime.GPAudioStatics.GetGameAkComponent
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x825ed38
	// Params: [ Num(3) Size(0x18) ]
	static struct UGameAkComponent* GetGameAkComponent(struct AActor* InPlayer, uint8_t bCreateIfNotExist);

	// Object: Function GPAudioRuntime.GPAudioStatics.GetGameAKAttenuationForListener
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x825ec20
	// Params: [ Num(4) Size(0x1C) ]
	static float GetGameAKAttenuationForListener(struct FName ShadowGameAKName, struct UWorld* World, struct AActor* EmitterActor);

	// Object: Function GPAudioRuntime.GPAudioStatics.GetEnableGPAudioDolby
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x825ebe8
	// Params: [ Num(1) Size(0x1) ]
	static uint8_t GetEnableGPAudioDolby();

	// Object: Function GPAudioRuntime.GPAudioStatics.GetDolbyNotDownMix
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x825ebb0
	// Params: [ Num(1) Size(0x1) ]
	static uint8_t GetDolbyNotDownMix();

	// Object: Function GPAudioRuntime.GPAudioStatics.GetDeviceSpatialAudioSupport
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x825eb08
	// Params: [ Num(2) Size(0x5) ]
	static uint8_t GetDeviceSpatialAudioSupport(uint32_t DeviceID);

	// Object: Function GPAudioRuntime.GPAudioStatics.GetDefaultListener
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x825ea64
	// Params: [ Num(2) Size(0x10) ]
	static struct UGameAkComponent* GetDefaultListener(struct UWorld* InWorld);

	// Object: Function GPAudioRuntime.GPAudioStatics.GetCurUsingSystemDeviceID
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x825e9b8
	// Params: [ Num(2) Size(0x8) ]
	static uint32_t GetCurUsingSystemDeviceID(uint8_t ForceUseOldWay);

	// Object: Function GPAudioRuntime.GPAudioStatics.GetCurrentAudioCulture
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x825e920
	// Params: [ Num(1) Size(0x10) ]
	static struct FString GetCurrentAudioCulture();

	// Object: Function GPAudioRuntime.GPAudioStatics.GetCrouchFootstepShadowAkName
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x825e8ec
	// Params: [ Num(1) Size(0x8) ]
	static struct FName GetCrouchFootstepShadowAkName();

	// Object: Function GPAudioRuntime.GPAudioStatics.GetBusMeteringPeakArray
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x825e6e0
	// Params: [ Num(6) Size(0x30) ]
	static int32_t GetBusMeteringPeakArray(struct FString BusName, struct TArray<float>& OutMeteringPeakArray, int32_t OutSamples, int32_t StartIndex, uint8_t MultiChannel);

	// Object: Function GPAudioRuntime.GPAudioStatics.GetAttenuationScaleForListener
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x825e600
	// Params: [ Num(3) Size(0x8) ]
	static float GetAttenuationScaleForListener(EGPAudioBlueprintType InAudioType, EGPAttenuationScaleReason InScaleType);

	// Object: Function GPAudioRuntime.GPAudioStatics.GetAsyncTraceResults
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x825e4f8
	// Params: [ Num(3) Size(0x91) ]
	static uint8_t GetAsyncTraceResults(struct AActor* Actor, struct FHitResult& Out_HitResult);

	// Object: Function GPAudioRuntime.GPAudioStatics.GetAllPlayingCount
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x825e4c4
	// Params: [ Num(1) Size(0x4) ]
	static int32_t GetAllPlayingCount();

	// Object: Function GPAudioRuntime.GPAudioStatics.GetActorPlayingRangeAndDurationByTypeName
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x825e34c
	// Params: [ Num(5) Size(0x19) ]
	static uint8_t GetActorPlayingRangeAndDurationByTypeName(struct AActor* InPlayer, struct FName AudioTypeName, float& Range, float& Duration);

	// Object: Function GPAudioRuntime.GPAudioStatics.GetActorPlayingRangeAndDuration
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x825e1b8
	// Params: [ Num(5) Size(0x19) ]
	static uint8_t GetActorPlayingRangeAndDuration(struct AActor* InPlayer, struct FGPAudioFuturePlayingID& PlayingId, float& Range, float& Duration);

	// Object: Function GPAudioRuntime.GPAudioStatics.GetActorPlayingItemByTypeName
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x825e070
	// Params: [ Num(4) Size(0x51) ]
	static uint8_t GetActorPlayingItemByTypeName(struct AActor* InPlayer, struct FName AudioTypeName, struct FGameAkPlayingItem& OutItem);

	// Object: Function GPAudioRuntime.GPAudioStatics.GetActorPlayingItem
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x825df0c
	// Params: [ Num(4) Size(0x51) ]
	static uint8_t GetActorPlayingItem(struct AActor* InPlayer, struct FGPAudioFuturePlayingID& PlayingId, struct FGameAkPlayingItem& OutItem);

	// Object: Function GPAudioRuntime.GPAudioStatics.GetActorMaxMakeNoiseRange
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x825de68
	// Params: [ Num(2) Size(0xC) ]
	static float GetActorMaxMakeNoiseRange(struct AActor* InPlayer);

	// Object: Function GPAudioRuntime.GPAudioStatics.GetActorMaxLocalListenRange
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x825ddc4
	// Params: [ Num(2) Size(0xC) ]
	static float GetActorMaxLocalListenRange(struct AActor* InPlayer);

	// Object: Function GPAudioRuntime.GPAudioStatics.GameAkInDoorArea
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x825dd1c
	// Params: [ Num(2) Size(0x9) ]
	static uint8_t GameAkInDoorArea(struct AActor* InPlayer);

	// Object: Function GPAudioRuntime.GPAudioStatics.ForceStopGlobalWeaponMIDI
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x825dc88
	// Params: [ Num(1) Size(0x4) ]
	static void ForceStopGlobalWeaponMIDI(int32_t FireCount);

	// Object: Function GPAudioRuntime.GPAudioStatics.FindMatchDeviceIDByDirectSoundGUID
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x825db90
	// Params: [ Num(2) Size(0x14) ]
	static uint32_t FindMatchDeviceIDByDirectSoundGUID(struct FString InGUID);

	// Object: Function GPAudioRuntime.GPAudioStatics.ExecActionOnPlayingID
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x825dac0
	// Params: [ Num(2) Size(0x9) ]
	static void ExecActionOnPlayingID(struct FGPAudioFuturePlayingID PlayingId, EGPAudioActionOnEventType ActionType);

	// Object: Function GPAudioRuntime.GPAudioStatics.EndReplay
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x825daac
	// Params: [ Num(0) Size(0x0) ]
	static void EndReplay();

	// Object: Function GPAudioRuntime.GPAudioStatics.EnableSingleAudio
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x825da74
	// Params: [ Num(1) Size(0x1) ]
	static uint8_t EnableSingleAudio();

	// Object: Function GPAudioRuntime.GPAudioStatics.EnableOculus
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x825d9d8
	// Params: [ Num(1) Size(0x1) ]
	static void EnableOculus(uint8_t bEnable);

	// Object: Function GPAudioRuntime.GPAudioStatics.EnableLogAudio
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x825d9a0
	// Params: [ Num(1) Size(0x1) ]
	static uint8_t EnableLogAudio();

	// Object: Function GPAudioRuntime.GPAudioStatics.EnableIngameSound
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x825d8b8
	// Params: [ Num(1) Size(0x10) ]
	static void EnableIngameSound(struct FString Reason);

	// Object: Function GPAudioRuntime.GPAudioStatics.EnableGPAudioDebugger
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x825d880
	// Params: [ Num(1) Size(0x1) ]
	static uint8_t EnableGPAudioDebugger();

	// Object: Function GPAudioRuntime.GPAudioStatics.EnableBusMetering
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x825d740
	// Params: [ Num(3) Size(0x12) ]
	static uint8_t EnableBusMetering(struct FString BusName, uint8_t bEnable);

	// Object: Function GPAudioRuntime.GPAudioStatics.DeregisterHighFreqUpdatePos
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x825d670
	// Params: [ Num(2) Size(0x9) ]
	static void DeregisterHighFreqUpdatePos(struct AActor* InActor, EGameAkHighFreqUpdatePosReason InReason);

	// Object: Function GPAudioRuntime.GPAudioStatics.CreateGameAkComponent
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x825d57c
	// Params: [ Num(3) Size(0x11) ]
	static uint8_t CreateGameAkComponent(struct AActor* InPlayer, struct UGameAkComponent*& OutGameAk);

	// Object: Function GPAudioRuntime.GPAudioStatics.CollectLoop2DEvent
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x10179b48
	// Params: [ Num(1) Size(0x1) ]
	static void CollectLoop2DEvent(uint8_t bCollect);

	// Object: Function GPAudioRuntime.GPAudioStatics.CloseGVoiceInit
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x825d568
	// Params: [ Num(0) Size(0x0) ]
	static void CloseGVoiceInit();

	// Object: Function GPAudioRuntime.GPAudioStatics.ClearWindowOpen
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x825d554
	// Params: [ Num(0) Size(0x0) ]
	static void ClearWindowOpen();

	// Object: Function GPAudioRuntime.GPAudioStatics.ClearCutsceneAudio
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x825d4b8
	// Params: [ Num(1) Size(0x1) ]
	static void ClearCutsceneAudio(uint8_t bDelayStop);

	// Object: Function GPAudioRuntime.GPAudioStatics.CheckAnimationNotifyKeys
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x825d3c4
	// Params: [ Num(3) Size(0x11) ]
	static uint8_t CheckAnimationNotifyKeys(const struct FName& AniNotifyKey, struct AActor* EditorActor);

	// Object: Function GPAudioRuntime.GPAudioStatics.bGVoiceInit
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x10905de0
	// Params: [ Num(1) Size(0x1) ]
	static uint8_t bGVoiceInit();

	// Object: Function GPAudioRuntime.GPAudioStatics.AsyncTraceToGround
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x825d31c
	// Params: [ Num(2) Size(0x9) ]
	static uint8_t AsyncTraceToGround(struct AActor* Actor);

	// Object: Function GPAudioRuntime.GPAudioStatics.AddOutput
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x825d1e4
	// Params: [ Num(3) Size(0x15) ]
	static uint8_t AddOutput(struct FString DeviceShareSetName, int32_t IdDevice);

	// Object: Function GPAudioRuntime.GPAudioStatics.Add714Output
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x825d1d0
	// Params: [ Num(0) Size(0x0) ]
	static void Add714Output();
	DEFINE_UE_CLASS_HELPERS(UGPAudioStatics, "GPAudioStatics")

};

// Object: Class GPAudioRuntime.GPClippedActorFakeEventAsset
// Size: 0x40 (Inherited: 0x30)
struct UGPClippedActorFakeEventAsset : UDataAsset
{
	struct TArray<struct FGPClippedWeaponFakeDistInfo> ClippedWeaponFakeInfos; // 0x30(0x10)
	DEFINE_UE_CLASS_HELPERS(UGPClippedActorFakeEventAsset, "GPClippedActorFakeEventAsset")

};

// Object: Class GPAudioRuntime.GPAudioPresetConfigsDataAsset
// Size: 0x60 (Inherited: 0x30)
struct UGPAudioPresetConfigsDataAsset : UDataAsset
{
	struct TArray<struct FGPAudioReverbPreset> ReverbPresets; // 0x30(0x10)
	struct TArray<struct FGPAudioGunTailPreset> GunTailPresets; // 0x40(0x10)
	struct UGPAudioEventAsset* IndoorEvent; // 0x50(0x8)
	struct UGPAudioEventAsset* OutDoorEvent; // 0x58(0x8)
	DEFINE_UE_CLASS_HELPERS(UGPAudioPresetConfigsDataAsset, "GPAudioPresetConfigsDataAsset")

};

// Object: Class GPAudioRuntime.GPConvolutionReverbConfigDataAsset
// Size: 0xF8 (Inherited: 0x30)
struct UGPConvolutionReverbConfigDataAsset : UDataAsset
{
	struct TArray<struct FGPAudioReverbPreset> ReverbPresets; // 0x30(0x10)
	struct TMap<EPhysicalSurface, struct FString> MatToSuffixMap; // 0x40(0x50)
	struct TMap<int32_t, struct FString> RoomTypeToPrefixMap; // 0x90(0x50)
	EPhysicalSurface DefaultSurfaceType; // 0xE0(0x1)
	uint8_t Pad_0xE1[0x7]; // 0xE1(0x7)
	struct FString DefaultPresetName; // 0xE8(0x10)
	DEFINE_UE_CLASS_HELPERS(UGPConvolutionReverbConfigDataAsset, "GPConvolutionReverbConfigDataAsset")

};

// Object: Class GPAudioRuntime.GPAudioUserSettings
// Size: 0xE8 (Inherited: 0x28)
struct UGPAudioUserSettings : UObject
{
	struct FString Dolby_Atmos_Bus_Name; // 0x28(0x10)
	struct FString Stereo_Bus_Name; // 0x38(0x10)
	struct FString Dolby_Atmos_StateName; // 0x48(0x10)
	struct FString Dolby_DownMix_StateName; // 0x58(0x10)
	struct FString Head_Pluggedin_RTPCName; // 0x68(0x10)
	struct FString Emitter_Height_3P_RTPCName; // 0x78(0x10)
	struct FString Slapback_Dis_RTPCName; // 0x88(0x10)
	struct FString Static_Acoustic_Coeff_RTPCName; // 0x98(0x10)
	struct FString Space_Front_RTPCName; // 0xA8(0x10)
	float OverWidthRatio; // 0xB8(0x4)
	float DefaultDopplerTimeStep; // 0xBC(0x4)
	struct FString Doppler_RTPCName; // 0xC0(0x10)
	float Doppler_Rtpc_Value_Max; // 0xD0(0x4)
	uint8_t bEnableListenerVelocity : 1; // 0xD4(0x1), Mask(0x1)
	uint8_t BitPad_0xD4_1 : 7; // 0xD4(0x1)
	uint8_t Pad_0xD5[0x3]; // 0xD5(0x3)
	struct TArray<struct FString> DolbyAndroidBlackListConfig; // 0xD8(0x10)
	DEFINE_UE_CLASS_HELPERS(UGPAudioUserSettings, "GPAudioUserSettings")

};

// Object: Class GPAudioRuntime.GPAudioVehicleCollisionDataAsset
// Size: 0xA8 (Inherited: 0x30)
struct UGPAudioVehicleCollisionDataAsset : UDataAsset
{
	struct FString CollisionRTPC; // 0x30(0x10)
	float MinVelocity; // 0x40(0x4)
	float MaxVelocity; // 0x44(0x4)
	float CoolDown; // 0x48(0x4)
	uint8_t Pad_0x4C[0x4]; // 0x4C(0x4)
	struct UGPAudioEventAsset* DefaultVehicleCollisionAudio; // 0x50(0x8)
	struct TMap<struct UPhysicalMaterial*, struct UGPAudioEventAsset*> VehicleCollisionAudioMap; // 0x58(0x50)
	DEFINE_UE_CLASS_HELPERS(UGPAudioVehicleCollisionDataAsset, "GPAudioVehicleCollisionDataAsset")

};

// Object: Class GPAudioRuntime.GPIOSAudioStatics
// Size: 0x28 (Inherited: 0x28)
struct UGPIOSAudioStatics : UBlueprintFunctionLibrary
{

	// Object: Function GPAudioRuntime.GPIOSAudioStatics.ReleaseMuteDetector
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x8269044
	// Params: [ Num(0) Size(0x0) ]
	static void ReleaseMuteDetector();

	// Object: Function GPAudioRuntime.GPIOSAudioStatics.IsMono
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x826900c
	// Params: [ Num(1) Size(0x1) ]
	static uint8_t IsMono();

	// Object: Function GPAudioRuntime.GPIOSAudioStatics.GetMuteState
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x8268fec
	// Params: [ Num(1) Size(0x1) ]
	static uint8_t GetMuteState();

	// Object: Function GPAudioRuntime.GPIOSAudioStatics.DetectMuteStatus
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x8268fd8
	// Params: [ Num(0) Size(0x0) ]
	static void DetectMuteStatus();
	DEFINE_UE_CLASS_HELPERS(UGPIOSAudioStatics, "GPIOSAudioStatics")

};

// Object: Class GPAudioRuntime.GPLoopEndPairAsset
// Size: 0x120 (Inherited: 0x30)
struct UGPLoopEndPairAsset : UDataAsset
{
	struct TMap<uint32_t, struct FGPLoopEventList> LoopEndPairIDMap_AutoGenerate; // 0x30(0x50)
	struct TMap<uint32_t, struct FGPLoopEventList> LoopEndPairIDMap; // 0x80(0x50)
	struct TMap<uint32_t, struct FString> LoopEndPairIDToSubNameMap; // 0xD0(0x50)
	DEFINE_UE_CLASS_HELPERS(UGPLoopEndPairAsset, "GPLoopEndPairAsset")

};

// Object: Class GPAudioRuntime.GameAk
// Size: 0x28 (Inherited: 0x28)
struct IGameAk : IInterface
{	DEFINE_UE_CLASS_HELPERS(IGameAk, "GameAk")

};

// Object: Class GPAudioRuntime.AkEmitterInterface
// Size: 0x28 (Inherited: 0x28)
struct IAkEmitterInterface : IInterface
{	DEFINE_UE_CLASS_HELPERS(IAkEmitterInterface, "AkEmitterInterface")

};

// Object: Class GPAudioRuntime.InterpTrackGPAudioEvent
// Size: 0xA8 (Inherited: 0x90)
struct UInterpTrackGPAudioEvent : UInterpTrackVectorBase
{
	struct TArray<struct FGPAudioEventTrackKey> Events; // 0x90(0x10)
	uint8_t bContinueEventOnMatineeEnd : 1; // 0xA0(0x1), Mask(0x1)
	uint8_t BitPad_0xA0_1 : 7; // 0xA0(0x1)
	uint8_t Pad_0xA1[0x7]; // 0xA1(0x7)
	DEFINE_UE_CLASS_HELPERS(UInterpTrackGPAudioEvent, "InterpTrackGPAudioEvent")

};

// Object: Class GPAudioRuntime.InterpTrackInstGPAudioEvent
// Size: 0x30 (Inherited: 0x28)
struct UInterpTrackInstGPAudioEvent : UInterpTrackInst
{
	float LastUpdatePosition; // 0x28(0x4)
	uint8_t Pad_0x2C[0x4]; // 0x2C(0x4)
	DEFINE_UE_CLASS_HELPERS(UInterpTrackInstGPAudioEvent, "InterpTrackInstGPAudioEvent")

};

// Object: Class GPAudioRuntime.MovieSceneGPAudioEventSection
// Size: 0x228 (Inherited: 0xE8)
struct UMovieSceneGPAudioEventSection : UMovieSceneSection
{
	uint8_t Pad_0xE8[0x40]; // 0xE8(0x40)
	struct UGPAudioEventAKLink* Event; // 0x128(0x8)
	struct FName DataTableEvent; // 0x130(0x8)
	struct FAkEventContainer CachedDataTableEvent; // 0x138(0xA0)
	struct UGPAudioEventAsset* GPAudioEvent; // 0x1D8(0x8)
	int32_t GPAudioEventPlayFlag; // 0x1E0(0x4)
	uint8_t RetriggerEvent : 1; // 0x1E4(0x1), Mask(0x1)
	uint8_t BitPad_0x1E4_1 : 7; // 0x1E4(0x1)
	uint8_t Pad_0x1E5[0x3]; // 0x1E5(0x3)
	int32_t ScrubTailLengthMs; // 0x1E8(0x4)
	uint8_t StopAtSectionEnd : 1; // 0x1EC(0x1), Mask(0x1)
	uint8_t BitPad_0x1EC_1 : 7; // 0x1EC(0x1)
	uint8_t Pad_0x1ED[0x3]; // 0x1ED(0x3)
	struct FString EventName; // 0x1F0(0x10)
	uint8_t Pad_0x200[0x28]; // 0x200(0x28)
	DEFINE_UE_CLASS_HELPERS(UMovieSceneGPAudioEventSection, "MovieSceneGPAudioEventSection")

};

// Object: Class GPAudioRuntime.MovieSceneGPAudioTrack
// Size: 0x70 (Inherited: 0x58)
struct UMovieSceneGPAudioTrack : UMovieSceneTrack
{
	struct TArray<struct UMovieSceneSection*> Sections; // 0x58(0x10)
	uint8_t bIsAMasterTrack : 1; // 0x68(0x1), Mask(0x1)
	uint8_t BitPad_0x68_1 : 7; // 0x68(0x1)
	uint8_t Pad_0x69[0x7]; // 0x69(0x7)
	DEFINE_UE_CLASS_HELPERS(UMovieSceneGPAudioTrack, "MovieSceneGPAudioTrack")

};

// Object: Class GPAudioRuntime.MovieSceneGPAudioEventTrack
// Size: 0x70 (Inherited: 0x70)
struct UMovieSceneGPAudioEventTrack : UMovieSceneGPAudioTrack
{	DEFINE_UE_CLASS_HELPERS(UMovieSceneGPAudioEventTrack, "MovieSceneGPAudioEventTrack")

};

// Object: Class GPAudioRuntime.PhysicalMaterialAudioDataAsset
// Size: 0xD0 (Inherited: 0x30)
struct UPhysicalMaterialAudioDataAsset : UDataAsset
{
	struct TMap<struct UPhysicalMaterial*, struct FGPAudioEventList> PhysicalMatMap; // 0x30(0x50)
	struct FGPAudioEventList DefaultAudioList; // 0x80(0x50)
	DEFINE_UE_CLASS_HELPERS(UPhysicalMaterialAudioDataAsset, "PhysicalMaterialAudioDataAsset")

};

// Object: Class GPAudioRuntime.PhysicalMaterialAudioSequenceDataAsset
// Size: 0xD0 (Inherited: 0x30)
struct UPhysicalMaterialAudioSequenceDataAsset : UDataAsset
{
	struct TMap<struct UPhysicalMaterial*, struct FGPAudioEventSequenceList> PhyMatAudSeqMap; // 0x30(0x50)
	struct FGPAudioEventSequenceList DefaultAudioList; // 0x80(0x50)
	DEFINE_UE_CLASS_HELPERS(UPhysicalMaterialAudioSequenceDataAsset, "PhysicalMaterialAudioSequenceDataAsset")

};

// Object: Class GPAudioRuntime.PhysicalMaterialTireNoiseAsset
// Size: 0x90 (Inherited: 0x30)
struct UPhysicalMaterialTireNoiseAsset : UDataAsset
{
	struct FGPAudioLoopEvent DefaultTirNoise; // 0x30(0x10)
	struct TMap<struct UPhysicalMaterial*, struct FGPAudioLoopEvent> PhysicalMatAudioMap; // 0x40(0x50)
	DEFINE_UE_CLASS_HELPERS(UPhysicalMaterialTireNoiseAsset, "PhysicalMaterialTireNoiseAsset")

};

// Object: Class GPAudioRuntime.Play2DAudioBy3DFuncAsset
// Size: 0x80 (Inherited: 0x30)
struct UPlay2DAudioBy3DFuncAsset : UDataAsset
{
	struct TSet<struct FSoftObjectPath> AkAudioEventSet; // 0x30(0x50)
	DEFINE_UE_CLASS_HELPERS(UPlay2DAudioBy3DFuncAsset, "Play2DAudioBy3DFuncAsset")

};

// Object: Class GPAudioRuntime.PluginAudioSubsystem
// Size: 0x30 (Inherited: 0x30)
struct UPluginAudioSubsystem : UEngineSubsystem
{

	// Object: Function GPAudioRuntime.PluginAudioSubsystem.UpdateListeningBuffIcon
	// Flags: [Native|Public]
	// Offset: 0x826eaa4
	// Params: [ Num(2) Size(0xC) ]
	void UpdateListeningBuffIcon(struct UWorld* World, float Scalar);

	// Object: Function GPAudioRuntime.PluginAudioSubsystem.IsWolfOverload
	// Flags: [Native|Public]
	// Offset: 0x826e9ec
	// Params: [ Num(2) Size(0x9) ]
	uint8_t IsWolfOverload(struct ACHARACTER* CHARACTER);

	// Object: Function GPAudioRuntime.PluginAudioSubsystem.IsMatchOverNotInSpectating
	// Flags: [Native|Public]
	// Offset: 0x826e934
	// Params: [ Num(2) Size(0x9) ]
	uint8_t IsMatchOverNotInSpectating(struct AActor* InActor);

	// Object: Function GPAudioRuntime.PluginAudioSubsystem.IsCharacterEscape
	// Flags: [Native|Public]
	// Offset: 0x826e87c
	// Params: [ Num(2) Size(0x9) ]
	uint8_t IsCharacterEscape(struct ACHARACTER* CHARACTER);

	// Object: Function GPAudioRuntime.PluginAudioSubsystem.IsAlexieInBlastShield
	// Flags: [Native|Public]
	// Offset: 0x826e7c4
	// Params: [ Num(2) Size(0x9) ]
	uint8_t IsAlexieInBlastShield(struct ACHARACTER* CHARACTER);

	// Object: Function GPAudioRuntime.PluginAudioSubsystem.GetVehicleByCharacter
	// Flags: [Native|Public]
	// Offset: 0x826e710
	// Params: [ Num(2) Size(0x10) ]
	struct AActor* GetVehicleByCharacter(struct ACHARACTER* CHARACTER);

	// Object: Function GPAudioRuntime.PluginAudioSubsystem.GetLocalFocusAttributeListenRange
	// Flags: [Native|Public]
	// Offset: 0x826e65c
	// Params: [ Num(2) Size(0xC) ]
	float GetLocalFocusAttributeListenRange(struct UWorld* InWorld);

	// Object: Function GPAudioRuntime.PluginAudioSubsystem.GetHRTFTypeHD
	// Flags: [Native|Public]
	// Offset: 0x826e5a8
	// Params: [ Num(2) Size(0xC) ]
	int32_t GetHRTFTypeHD(struct UWorld* InWorld);

	// Object: Function GPAudioRuntime.PluginAudioSubsystem.GetCurrentClientCharacterAvatarID
	// Flags: [Native|Public]
	// Offset: 0x826e4f4
	// Params: [ Num(2) Size(0x10) ]
	uint64_t GetCurrentClientCharacterAvatarID(struct ACHARACTER* CHARACTER);

	// Object: Function GPAudioRuntime.PluginAudioSubsystem.GetCarryBodyCharacter
	// Flags: [Native|Public]
	// Offset: 0x826e440
	// Params: [ Num(2) Size(0x10) ]
	struct ACHARACTER* GetCarryBodyCharacter(struct ACHARACTER* CHARACTER);

	// Object: Function GPAudioRuntime.PluginAudioSubsystem.Get
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x826e39c
	// Params: [ Num(2) Size(0x10) ]
	static struct UPluginAudioSubsystem* Get(struct UWorld* World);
	DEFINE_UE_CLASS_HELPERS(UPluginAudioSubsystem, "PluginAudioSubsystem")

};

// Object: Class GPAudioRuntime.PreloadAudioCfg
// Size: 0x80 (Inherited: 0x30)
struct UPreloadAudioCfg : UDataAsset
{
	struct TMap<uint64_t, struct FCharacterPreLoadItem> CharacterAbilityAudioCfg; // 0x30(0x50)
	DEFINE_UE_CLASS_HELPERS(UPreloadAudioCfg, "PreloadAudioCfg")

};

// Object: Class GPAudioRuntime.TravelerGameAk
// Size: 0x14E0 (Inherited: 0x14E0)
struct UTravelerGameAk : UGameAkComponent
{	DEFINE_UE_CLASS_HELPERS(UTravelerGameAk, "TravelerGameAk")

};

} // namespace SDK
