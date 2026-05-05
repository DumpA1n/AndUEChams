#pragma once

#include "../CoreUObject_classes.hpp"
#include "CinematicCamera.hpp"
#include "Engine.hpp"
#include "GPGlobalDefines.hpp"
#include "MovieScene.hpp"

namespace SDK
{

// Package: GPCutScene
// Enums: 14
// Structs: 7
// Classes: 25

struct AActor;
struct ALevelSequenceActor;
struct APlayerStart;
struct ATriggerBase;
struct ATriggerSphere;
enum class ENetRole : uint8_t;
struct FViewTargetTransitionParams;
struct UAnimationAsset;
struct UCameraComponent;
struct ULevelSequence;
struct ULevelSequencePlayer;
struct ULevelStreaming;
struct UMovieSceneSequence;
struct USceneComponent;
struct UShapeComponent;
struct FGPSequenceBoundActorInfo;
struct FGPSequenceBindingActorInfo;
struct FGPSequenceBindingInitParam;
struct FGPSequenceBindingInfo;
struct FSeqStreamSection;
struct FGPSequencePrepareCondition;
struct FLevelSequenceAssetAnalyzeRow;
struct AGPSequenceMaster;
struct AGPSequenceActor;
struct AGPSequenceActorStream;
struct UGPSequenceBaker;
struct UGPSequenceBindingComponent;
struct UGPSequenceBindingTags;
struct AGPSequenceCameraActor;
struct UGPSequenceCameraComponent;
struct AGPSequenceDebugActor;
struct UGPSequenceDebugComponent;
struct AGPSequenceDefaultProxy;
struct UGPSequenceGlobalConfig;
struct AGPSequencePerformance;
struct AGPSequenceKeepStateActor;
struct AGPSequenceMannequin;
struct UGPSequenceMannequinAssemblyComponent;
struct AGPSequenceMultiStageActor;
struct AGPSequenceMultiStageExample;
struct UGPSequencePrepareComponent;
struct UGPSequencePreSpawnComponent;
struct UGPSequencePrespawnObjectState;
struct AGPSequenceProxy;
struct UGPSequenceSystem;
struct UGPSequenceUtils;
struct AGPSubLevelPreloader;

// Object: Enum GPCutScene.EGPSequenceCustomEvent
enum class EGPSequenceCustomEvent : uint8_t
{
	GeneralEvent = 0,
	KillVehicle = 1,
	EGPSequenceCustomEvent_MAX = 2
};

// Object: Enum GPCutScene.EGPSequencePerspectiveMode
enum class EGPSequencePerspectiveMode : uint8_t
{
	Unknown = 0,
	FPP = 1,
	TPP = 2,
	TPPWithFacialAnimation = 3,
	EGPSequencePerspectiveMode_MAX = 4
};

// Object: Enum GPCutScene.EGPSequenceStatus
enum class EGPSequenceStatus : uint8_t
{
	Stopped = 0,
	Loading = 1,
	Playing = 2,
	Paused = 3,
	EGPSequenceStatus_MAX = 4
};

// Object: Enum GPCutScene.EGPSequencePhysicsMode
enum class EGPSequencePhysicsMode : uint8_t
{
	Unkown = 0,
	Disable = 1,
	Enable = 2,
	EGPSequencePhysicsMode_MAX = 3
};

// Object: Enum GPCutScene.FGPSequenceBindingActorPolicy
enum class EFGPSequenceBindingActorPolicy : uint16_t
{
	Unkown = 0,
	TriggerActor = 1,
	TriggerActorAttached = 2,
	SpecialActor = 3,
	SpecialActorAttached = 4,
	TaggedActor = 5,
	TaggedActorAttached = 6,
	PlayerActorAttached = 7,
	PlayerActorClientTeamMate = 253,
	PlayerActorClient = 254,
	PlayerActor = 255,
	FGPSequenceBindingActorPolicy_MAX = 256
};

// Object: Enum GPCutScene.EGPSequenceTriggerAuth
enum class EGPSequenceTriggerAuth : uint8_t
{
	Unkown = 0,
	ClientOnly = 1,
	Authority = 2,
	EGPSequenceTriggerAuth_MAX = 3
};

// Object: Enum GPCutScene.EGPSequencePreloadActorType
enum class EGPSequencePreloadActorType : uint16_t
{
	AnyAny = 0,
	Player1 = 1,
	Player2 = 2,
	Player3 = 3,
	Player4 = 4,
	PlayerAny = 5,
	VehiclePlayer = 6,
	VehicleAny = 7,
	AIAny = 8,
	SpecialActor = 9,
	None = 255,
	EGPSequencePreloadActorType_MAX = 256
};

// Object: Enum GPCutScene.EGPSequenceTriggerMode
enum class EGPSequenceTriggerMode : uint16_t
{
	AnyAny = 0,
	Player1 = 1,
	Player2 = 2,
	Player3 = 3,
	Player4 = 4,
	PlayerAny = 5,
	VehiclePlayer = 6,
	VehicleAny = 7,
	AIAny = 8,
	SpecialActor = 9,
	Custom = 255,
	EGPSequenceTriggerMode_MAX = 256
};

// Object: Enum GPCutScene.EGPSequenceStage
enum class EGPSequenceStage : uint8_t
{
	None = 0,
	Start = 1,
	Loop = 2,
	End = 3,
	Stopped = 4,
	EGPSequenceStage_MAX = 5
};

// Object: Enum GPCutScene.ESequenceCameraType
enum class ESequenceCameraType : uint8_t
{
	Cinematic = 0,
	CopyFromFPP = 1,
	CopyFromTPP = 2,
	ESequenceCameraType_MAX = 3
};

// Object: Enum GPCutScene.EGPSequenceEvent
enum class EGPSequenceEvent : uint8_t
{
	Unkown = 0,
	EGPSequenceEvent_MAX = 1
};

// Object: Enum GPCutScene.EGPSequenceBindingActorType
enum class EGPSequenceBindingActorType : uint8_t
{
	Unkown = 0,
	Player = 1,
	Vehicle = 2,
	AI = 3,
	EGPSequenceBindingActorType_MAX = 4
};

// Object: Enum GPCutScene.EGPSequencePrepareStatus
enum class EGPSequencePrepareStatus : uint8_t
{
	Initial = 0,
	Preloading = 1,
	Preloaded = 2,
	PrepareAllReady = 3,
	Unloading = 4,
	Unloaded = 5,
	EGPSequencePrepareStatus_MAX = 6
};

// Object: Enum GPCutScene.EGPSubLevelPreloaderStatus
enum class EGPSubLevelPreloaderStatus : uint8_t
{
	Initial = 0,
	Preloading = 1,
	Preloaded = 2,
	AllReady = 5,
	EGPSubLevelPreloaderStatus_MAX = 6
};

// Object: ScriptStruct GPCutScene.GPSequenceBoundActorInfo
// Size: 0x18 (Inherited: 0x0)
struct FGPSequenceBoundActorInfo
{
	struct FName BindingTag; // 0x0(0x8)
	struct AActor* BoundActor; // 0x8(0x8)
	uint8_t bBindOriginActor : 1; // 0x10(0x1), Mask(0x1)
	uint8_t BitPad_0x10_1 : 7; // 0x10(0x1)
	uint8_t Pad_0x11[0x7]; // 0x11(0x7)
};

// Object: ScriptStruct GPCutScene.GPSequenceBindingActorInfo
// Size: 0x50 (Inherited: 0x0)
struct FGPSequenceBindingActorInfo
{
	EFGPSequenceBindingActorPolicy ActorPolicy; // 0x0(0x1)
	uint8_t Pad_0x1[0x3]; // 0x1(0x3)
	struct FName SocketName; // 0x4(0x8)
	uint8_t Pad_0xC[0x4]; // 0xC(0x4)
	struct TSoftObjectPtr<AActor> SpecialActor; // 0x10(0x28)
	struct FName SpecialActorTag; // 0x38(0x8)
	struct AActor* ClassOfActorTag; // 0x40(0x8)
	int32_t PlayerIndex; // 0x48(0x4)
	uint8_t Pad_0x4C[0x4]; // 0x4C(0x4)
};

// Object: ScriptStruct GPCutScene.GPSequenceBindingInitParam
// Size: 0x2 (Inherited: 0x0)
struct FGPSequenceBindingInitParam
{
	EGPSequencePhysicsMode PhysicsMode; // 0x0(0x1)
	EGPSequencePerspectiveMode PerspectiveMode; // 0x1(0x1)
};

// Object: ScriptStruct GPCutScene.GPSequenceBindingInfo
// Size: 0x60 (Inherited: 0x0)
struct FGPSequenceBindingInfo
{
	struct FName BindingTag; // 0x0(0x8)
	struct FGPSequenceBindingActorInfo ActorInfo; // 0x8(0x50)
	struct FGPSequenceBindingInitParam InitParam; // 0x58(0x2)
	uint8_t bBindOriginalActor : 1; // 0x5A(0x1), Mask(0x1)
	uint8_t BitPad_0x5A_1 : 7; // 0x5A(0x1)
	uint8_t Pad_0x5B[0x5]; // 0x5B(0x5)
};

// Object: ScriptStruct GPCutScene.SeqStreamSection
// Size: 0x20 (Inherited: 0x0)
struct FSeqStreamSection
{
	struct FName Key; // 0x0(0x8)
	struct AGPSequenceActor* SequenceActor; // 0x8(0x8)
	uint8_t bPreloadNetSection : 1; // 0x10(0x1), Mask(0x1)
	uint8_t BitPad_0x10_1 : 7; // 0x10(0x1)
	uint8_t Pad_0x11[0x3]; // 0x11(0x3)
	int32_t PreloadStep; // 0x14(0x4)
	uint8_t bPreloaded : 1; // 0x18(0x1), Mask(0x1)
	uint8_t BitPad_0x18_1 : 7; // 0x18(0x1)
	uint8_t Pad_0x19[0x7]; // 0x19(0x7)
};

// Object: ScriptStruct GPCutScene.GPSequencePrepareCondition
// Size: 0x40 (Inherited: 0x0)
struct FGPSequencePrepareCondition
{
	struct FTransform StartTransform; // 0x0(0x30)
	struct FVector StartSpeed; // 0x30(0xC)
	uint8_t Pad_0x3C[0x4]; // 0x3C(0x4)
};

// Object: ScriptStruct GPCutScene.LevelSequenceAssetAnalyzeRow
// Size: 0x68 (Inherited: 0x8)
struct FLevelSequenceAssetAnalyzeRow : FTableRowBase
{
	struct FString ShotName; // 0x8(0x10)
	int32_t ObjectCount; // 0x18(0x4)
	int32_t SpawnableCount; // 0x1C(0x4)
	int32_t PossessableCount; // 0x20(0x4)
	int32_t TransformTrack; // 0x24(0x4)
	int32_t SpawnedTrack; // 0x28(0x4)
	int32_t AttachTrack; // 0x2C(0x4)
	int32_t AnimationTrack; // 0x30(0x4)
	int32_t SkeletalMeshTrack; // 0x34(0x4)
	int32_t ParticleTrack; // 0x38(0x4)
	int32_t EventTrack; // 0x3C(0x4)
	int32_t FocalLengthTrack; // 0x40(0x4)
	int32_t CameraShakeTrack; // 0x44(0x4)
	int32_t ManualFocusTrack; // 0x48(0x4)
	int32_t ApertureTrack; // 0x4C(0x4)
	int32_t VisibilityTrack; // 0x50(0x4)
	int32_t VelocityScaleTrack; // 0x54(0x4)
	int32_t ConstrainAspectRatioTrack; // 0x58(0x4)
	int32_t VignetteSettingTrack; // 0x5C(0x4)
	int32_t MobilityTrack; // 0x60(0x4)
	int32_t OtherTrack; // 0x64(0x4)
};

// Object: Class GPCutScene.GPSequenceMaster
// Size: 0x370 (Inherited: 0x370)
struct AGPSequenceMaster : AActor
{
	DEFINE_UE_CLASS_HELPERS(AGPSequenceMaster, "GPSequenceMaster")

	// Object: Function GPCutScene.GPSequenceMaster.OnSetPerspectiveMode
	// Flags: [Event|Public|BlueprintCallable|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(1) Size(0x1) ]
	void OnSetPerspectiveMode(EGPSequencePerspectiveMode Mode);

	// Object: Function GPCutScene.GPSequenceMaster.OnSetEnableMovementInput
	// Flags: [Event|Public|BlueprintCallable|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(1) Size(0x1) ]
	void OnSetEnableMovementInput(uint8_t bEnable);

	// Object: Function GPCutScene.GPSequenceMaster.OnSetEnableLootAtInput
	// Flags: [Event|Public|BlueprintCallable|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(1) Size(0x1) ]
	void OnSetEnableLootAtInput(uint8_t bEnable);
};

// Object: Class GPCutScene.GPSequenceActor
// Size: 0x6B0 (Inherited: 0x370)
struct AGPSequenceActor : AGPSequenceMaster
{
	DEFINE_UE_CLASS_HELPERS(AGPSequenceActor, "GPSequenceActor")

	struct FMulticastInlineDelegate OnBeginSequence; // 0x370(0x10)
	struct FMulticastInlineDelegate OnEndSequence; // 0x380(0x10)
	struct FMulticastInlineDelegate OnPreEndSequence; // 0x390(0x10)
	struct FMulticastInlineDelegate OnSequenceEvent; // 0x3A0(0x10)
	struct FMulticastInlineDelegate OnSkipSequence; // 0x3B0(0x10)
	struct FMulticastInlineDelegate OnCameraLeave; // 0x3C0(0x10)
	struct FMulticastInlineDelegate OnCameraEnter; // 0x3D0(0x10)
	struct FMulticastInlineDelegate OnCameraCut; // 0x3E0(0x10)
	ENetRole LocalNetRole; // 0x3F0(0x1)
	ENetRole RemoteNetRole; // 0x3F1(0x1)
	uint8_t Pad_0x3F2[0x6]; // 0x3F2(0x6)
	struct FString Title; // 0x3F8(0x10)
	struct FSoftObjectPath LevelSequence; // 0x408(0x18)
	float BakedLevelSequenceLength; // 0x420(0x4)
	uint8_t Pad_0x424[0x4]; // 0x424(0x4)
	struct ALevelSequenceActor* LevelSequenceActor; // 0x428(0x8)
	struct FMovieSceneSequencePlaybackSettings PlaybackSettings; // 0x430(0x14)
	uint8_t bSetTransformOrigin : 1; // 0x444(0x1), Mask(0x1)
	uint8_t BitPad_0x444_1 : 7; // 0x444(0x1)
	uint8_t PlaybackPriority; // 0x445(0x1)
	uint8_t bCanBreak : 1; // 0x446(0x1), Mask(0x1)
	uint8_t BitPad_0x446_1 : 7; // 0x446(0x1)
	uint8_t bNotifySequenceStatus : 1; // 0x447(0x1), Mask(0x1)
	uint8_t BitPad_0x447_1 : 7; // 0x447(0x1)
	EGPSequenceTriggerMode TriggerMode; // 0x448(0x1)
	EGPSequencePreloadActorType TriggerPreloadActorType; // 0x449(0x1)
	uint8_t Pad_0x44A[0x6]; // 0x44A(0x6)
	struct TSoftObjectPtr<AActor> TriggerSpecial; // 0x450(0x28)
	EGPSequenceTriggerAuth TriggerAuth; // 0x478(0x1)
	uint8_t bTriggerMute : 1; // 0x479(0x1), Mask(0x1)
	uint8_t BitPad_0x479_1 : 7; // 0x479(0x1)
	uint8_t bPlayOnlyOnce : 1; // 0x47A(0x1), Mask(0x1)
	uint8_t BitPad_0x47A_1 : 7; // 0x47A(0x1)
	uint8_t Pad_0x47B[0x1]; // 0x47B(0x1)
	float SyncTimeTolerance; // 0x47C(0x4)
	float PreEndRestTime; // 0x480(0x4)
	uint8_t bPreEndStartFade : 1; // 0x484(0x1), Mask(0x1)
	uint8_t BitPad_0x484_1 : 7; // 0x484(0x1)
	uint8_t Pad_0x485[0x1]; // 0x485(0x1)
	uint8_t bEnableDistortion : 1; // 0x486(0x1), Mask(0x1)
	uint8_t BitPad_0x486_1 : 7; // 0x486(0x1)
	uint8_t LockFrameRate : 1; // 0x487(0x1), Mask(0x1)
	uint8_t BitPad_0x487_1 : 7; // 0x487(0x1)
	uint8_t bPauseActorsWhenPlayCS : 1; // 0x488(0x1), Mask(0x1)
	uint8_t BitPad_0x488_1 : 7; // 0x488(0x1)
	uint8_t Pad_0x489[0x7]; // 0x489(0x7)
	struct TArray<struct AActor*> ActorClassesNeedPause; // 0x490(0x10)
	uint8_t bCutSceneMode : 1; // 0x4A0(0x1), Mask(0x1)
	uint8_t BitPad_0x4A0_1 : 7; // 0x4A0(0x1)
	uint8_t bMuteStreamingInCutScene : 1; // 0x4A1(0x1), Mask(0x1)
	uint8_t BitPad_0x4A1_1 : 7; // 0x4A1(0x1)
	uint8_t Pad_0x4A2[0x2]; // 0x4A2(0x2)
	struct FViewTargetTransitionParams CutSceneCameraEnterBlendParam; // 0x4A4(0x10)
	struct FViewTargetTransitionParams CutSceneCameraLeaveBlendParam; // 0x4B4(0x10)
	uint8_t Pad_0x4C4[0x4]; // 0x4C4(0x4)
	struct APlayerStart* CutSceneLeaveSpot; // 0x4C8(0x8)
	float CutSceneLeaveSpeed; // 0x4D0(0x4)
	uint8_t bSeamlessPlay : 1; // 0x4D4(0x1), Mask(0x1)
	uint8_t BitPad_0x4D4_1 : 7; // 0x4D4(0x1)
	uint8_t Pad_0x4D5[0x3]; // 0x4D5(0x3)
	struct APlayerStart* SeamlessEnterSpot; // 0x4D8(0x8)
	float SeamlessEnterSpeed; // 0x4E0(0x4)
	uint8_t Pad_0x4E4[0x4]; // 0x4E4(0x4)
	struct TArray<struct FGPSequenceBindingInfo> BindingConfig; // 0x4E8(0x10)
	uint8_t bDefaultDestroySequenceWhenEnd : 1; // 0x4F8(0x1), Mask(0x1)
	uint8_t BitPad_0x4F8_1 : 7; // 0x4F8(0x1)
	uint8_t bForceDestroyWhenEnd : 1; // 0x4F9(0x1), Mask(0x1)
	uint8_t BitPad_0x4F9_1 : 7; // 0x4F9(0x1)
	uint8_t bDefaultSyncStatusWhenAuthority : 1; // 0x4FA(0x1), Mask(0x1)
	uint8_t BitPad_0x4FA_1 : 7; // 0x4FA(0x1)
	uint8_t bCrossLevel : 1; // 0x4FB(0x1), Mask(0x1)
	uint8_t BitPad_0x4FB_1 : 7; // 0x4FB(0x1)
	uint8_t Pad_0x4FC[0x1]; // 0x4FC(0x1)
	uint8_t bDebugDraw : 1; // 0x4FD(0x1), Mask(0x1)
	uint8_t BitPad_0x4FD_1 : 7; // 0x4FD(0x1)
	uint8_t Pad_0x4FE[0x5A]; // 0x4FE(0x5A)
	uint8_t bWaitSeamless : 1; // 0x558(0x1), Mask(0x1)
	uint8_t BitPad_0x558_1 : 7; // 0x558(0x1)
	uint8_t Pad_0x559[0x57]; // 0x559(0x57)
	uint8_t bWaitPreparing : 1; // 0x5B0(0x1), Mask(0x1)
	uint8_t BitPad_0x5B0_1 : 7; // 0x5B0(0x1)
	uint8_t bWaitLoading : 1; // 0x5B1(0x1), Mask(0x1)
	uint8_t BitPad_0x5B1_1 : 7; // 0x5B1(0x1)
	uint8_t bWaitCaching : 1; // 0x5B2(0x1), Mask(0x1)
	uint8_t BitPad_0x5B2_1 : 7; // 0x5B2(0x1)
	uint8_t bWaitPrespawn : 1; // 0x5B3(0x1), Mask(0x1)
	uint8_t BitPad_0x5B3_1 : 7; // 0x5B3(0x1)
	uint8_t bLevelSequenceActorLazyLoad : 1; // 0x5B4(0x1), Mask(0x1)
	uint8_t BitPad_0x5B4_1 : 7; // 0x5B4(0x1)
	EGPSequenceStatus Status; // 0x5B5(0x1)
	uint8_t Pad_0x5B6[0x2]; // 0x5B6(0x2)
	int32_t PlayCount; // 0x5B8(0x4)
	float PlayTime; // 0x5BC(0x4)
	float StopTime; // 0x5C0(0x4)
	uint8_t Pad_0x5C4[0x4]; // 0x5C4(0x4)
	struct TMap<struct FName, struct AGPSequenceDefaultProxy*> CachedDefaultProxyActors; // 0x5C8(0x50)
	struct FViewTargetTransitionParams CurrentCameraEnterBlendParam; // 0x618(0x10)
	struct FViewTargetTransitionParams CurrentCameraLeaveBlendParam; // 0x628(0x10)
	uint8_t bWaitingEnterCameraCut : 1; // 0x638(0x1), Mask(0x1)
	uint8_t BitPad_0x638_1 : 7; // 0x638(0x1)
	uint8_t bWaitingLeaveCameraCut : 1; // 0x639(0x1), Mask(0x1)
	uint8_t BitPad_0x639_1 : 7; // 0x639(0x1)
	uint8_t bHasLeftCameraCut : 1; // 0x63A(0x1), Mask(0x1)
	uint8_t BitPad_0x63A_1 : 7; // 0x63A(0x1)
	uint8_t bBreaked : 1; // 0x63B(0x1), Mask(0x1)
	uint8_t BitPad_0x63B_1 : 7; // 0x63B(0x1)
	struct TWeakObjectPtr<struct AActor> OldViewTarget; // 0x63C(0x8)
	uint8_t Pad_0x644[0xC]; // 0x644(0xC)
	struct AActor* LastTriggerActor; // 0x650(0x8)
	struct TArray<struct FGPSequenceBoundActorInfo> CachedBoundActors; // 0x658(0x10)
	EGPSequenceStatus ReplicatedServerStatus; // 0x668(0x1)
	uint8_t Pad_0x669[0x3]; // 0x669(0x3)
	float ReplicatedServerPlayTime; // 0x66C(0x4)
	float ReplicatedServerStopTime; // 0x670(0x4)
	uint8_t ReplicatedServerBreaked : 1; // 0x674(0x1), Mask(0x1)
	uint8_t BitPad_0x674_1 : 7; // 0x674(0x1)
	uint8_t bSequenceSyncing : 1; // 0x675(0x1), Mask(0x1)
	uint8_t BitPad_0x675_1 : 7; // 0x675(0x1)
	uint8_t Pad_0x676[0x2]; // 0x676(0x2)
	float SequenceSyncRate; // 0x678(0x4)
	uint8_t Pad_0x67C[0x4]; // 0x67C(0x4)
	struct UShapeComponent* CollisionComponent; // 0x680(0x8)
	struct UGPSequencePrepareComponent* PrepareComponent; // 0x688(0x8)
	struct UGPSequenceDebugComponent* DebugComponent; // 0x690(0x8)
	struct UGPSequencePreSpawnComponent* PrespawnComponent; // 0x698(0x8)
	uint8_t Pad_0x6A0[0x10]; // 0x6A0(0x10)

	// Object: Function GPCutScene.GPSequenceActor.UnloadLevels
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x8fc9d30
	// Params: [ Num(0) Size(0x0) ]
	void UnloadLevels();

	// Object: Function GPCutScene.GPSequenceActor.TestReset
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x8fc9d1c
	// Params: [ Num(0) Size(0x0) ]
	void TestReset();

	// Object: Function GPCutScene.GPSequenceActor.TestRawPlay
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x8fc9d08
	// Params: [ Num(0) Size(0x0) ]
	void TestRawPlay();

	// Object: Function GPCutScene.GPSequenceActor.TestPrespawn
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x8fc9cf4
	// Params: [ Num(0) Size(0x0) ]
	void TestPrespawn();

	// Object: Function GPCutScene.GPSequenceActor.TestPlay
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x8fc9ce0
	// Params: [ Num(0) Size(0x0) ]
	void TestPlay();

	// Object: Function GPCutScene.GPSequenceActor.TestDespawn
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x8fc9ccc
	// Params: [ Num(0) Size(0x0) ]
	void TestDespawn();

	// Object: Function GPCutScene.GPSequenceActor.TestClearDirtyData
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x8fc9cb8
	// Params: [ Num(0) Size(0x0) ]
	void TestClearDirtyData();

	// Object: Function GPCutScene.GPSequenceActor.TeleportToExec
	// Flags: [Event|Public|HasDefaults|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(1) Size(0xC) ]
	void TeleportToExec(struct FVector Location);

	// Object: Function GPCutScene.GPSequenceActor.Stop
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x10ac215c
	// Params: [ Num(0) Size(0x0) ]
	void Stop();

	// Object: Function GPCutScene.GPSequenceActor.SpawnBindingActors
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(0) Size(0x0) ]
	void SpawnBindingActors();

	// Object: Function GPCutScene.GPSequenceActor.RPC_OnServerStoped
	// Flags: [Net|NetReliableNative|Event|NetMulticast|Protected]
	// Offset: 0x8fc9c9c
	// Params: [ Num(0) Size(0x0) ]
	void RPC_OnServerStoped();

	// Object: Function GPCutScene.GPSequenceActor.RPC_OnServerReseted
	// Flags: [Net|NetReliableNative|Event|NetMulticast|Protected]
	// Offset: 0x8fc9c80
	// Params: [ Num(0) Size(0x0) ]
	void RPC_OnServerReseted();

	// Object: Function GPCutScene.GPSequenceActor.RPC_OnServerBreaked
	// Flags: [Net|NetReliableNative|Event|NetMulticast|Protected]
	// Offset: 0x8fc9c64
	// Params: [ Num(0) Size(0x0) ]
	void RPC_OnServerBreaked();

	// Object: Function GPCutScene.GPSequenceActor.Resume
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x8fc9c50
	// Params: [ Num(0) Size(0x0) ]
	void Resume();

	// Object: Function GPCutScene.GPSequenceActor.Reset
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x8fc9c34
	// Params: [ Num(0) Size(0x0) ]
	void Reset();

	// Object: Function GPCutScene.GPSequenceActor.RemoveAllBindings
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x8fc9c20
	// Params: [ Num(0) Size(0x0) ]
	void RemoveAllBindings();

	// Object: Function GPCutScene.GPSequenceActor.PreloadLevels
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x8fc9c0c
	// Params: [ Num(0) Size(0x0) ]
	void PreloadLevels();

	// Object: Function GPCutScene.GPSequenceActor.PreEndSequence
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(0) Size(0x0) ]
	void PreEndSequence();

	// Object: Function GPCutScene.GPSequenceActor.Play
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x10b86b14
	// Params: [ Num(0) Size(0x0) ]
	void Play();

	// Object: Function GPCutScene.GPSequenceActor.PauseActorsTick
	// Flags: [Final|Exec|Native|Protected]
	// Offset: 0x8fc9b60
	// Params: [ Num(1) Size(0x1) ]
	void PauseActorsTick(uint8_t bPause);

	// Object: Function GPCutScene.GPSequenceActor.Pause
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x8fc9b4c
	// Params: [ Num(0) Size(0x0) ]
	void Pause();

	// Object: Function GPCutScene.GPSequenceActor.OnTriggerOverlapInternal
	// Flags: [Final|Native|Protected]
	// Offset: 0xfb15c9c
	// Params: [ Num(2) Size(0x10) ]
	void OnTriggerOverlapInternal(struct AActor* OverlappedActor, struct AActor* OtherActor);

	// Object: Function GPCutScene.GPSequenceActor.OnSequenceStop
	// Flags: [Final|Native|Protected]
	// Offset: 0x10b13e34
	// Params: [ Num(0) Size(0x0) ]
	void OnSequenceStop();

	// Object: Function GPCutScene.GPSequenceActor.OnSequencePause
	// Flags: [Final|Native|Protected]
	// Offset: 0x8fc9b38
	// Params: [ Num(0) Size(0x0) ]
	void OnSequencePause();

	// Object: Function GPCutScene.GPSequenceActor.OnSequenceCustomEvent
	// Flags: [Native|Event|Public|BlueprintEvent]
	// Offset: 0x8fc9a00
	// Params: [ Num(4) Size(0x21) ]
	uint8_t OnSequenceCustomEvent(EGPSequenceCustomEvent EventName, struct FName EventSubName, struct FString EventArgs);

	// Object: Function GPCutScene.GPSequenceActor.OnSequenceBindingBreak
	// Flags: [Final|Native|Protected]
	// Offset: 0x8fc995c
	// Params: [ Num(1) Size(0x8) ]
	void OnSequenceBindingBreak(struct UGPSequenceBindingComponent* SequenceBinding);

	// Object: Function GPCutScene.GPSequenceActor.OnSequenceAssetLoadComplete
	// Flags: [Final|Native|Protected|HasOutParms|HasDefaults]
	// Offset: 0x8fc989c
	// Params: [ Num(1) Size(0x18) ]
	void OnSequenceAssetLoadComplete(const struct FSoftObjectPath& ResourcePaths);

	// Object: Function GPCutScene.GPSequenceActor.OnRep_ReplicatedServerStopTime
	// Flags: [Native|Protected]
	// Offset: 0x8fc9880
	// Params: [ Num(0) Size(0x0) ]
	void OnRep_ReplicatedServerStopTime();

	// Object: Function GPCutScene.GPSequenceActor.OnRep_ReplicatedServerStatus
	// Flags: [Native|Protected]
	// Offset: 0x8fc9864
	// Params: [ Num(0) Size(0x0) ]
	void OnRep_ReplicatedServerStatus();

	// Object: Function GPCutScene.GPSequenceActor.OnRep_ReplicatedServerPlayTime
	// Flags: [Final|Native|Protected]
	// Offset: 0x8fc9850
	// Params: [ Num(0) Size(0x0) ]
	void OnRep_ReplicatedServerPlayTime();

	// Object: Function GPCutScene.GPSequenceActor.OnRep_ReplicatedServerBreaked
	// Flags: [Final|Native|Protected]
	// Offset: 0x8fc983c
	// Params: [ Num(0) Size(0x0) ]
	void OnRep_ReplicatedServerBreaked();

	// Object: Function GPCutScene.GPSequenceActor.OnRep_CachedBoundActors
	// Flags: [Final|Native|Protected]
	// Offset: 0x8fc9828
	// Params: [ Num(0) Size(0x0) ]
	void OnRep_CachedBoundActors();

	// Object: Function GPCutScene.GPSequenceActor.OnPlayInner
	// Flags: [Native|Protected]
	// Offset: 0x8fc980c
	// Params: [ Num(0) Size(0x0) ]
	void OnPlayInner();

	// Object: Function GPCutScene.GPSequenceActor.OnMovieSceneSpawnObject
	// Flags: [Final|Native|Protected]
	// Offset: 0x8fc9730
	// Params: [ Num(2) Size(0x10) ]
	void OnMovieSceneSpawnObject(struct UMovieSceneSequence* InMovieScene, struct UObject* InSpawnObject);

	// Object: Function GPCutScene.GPSequenceActor.OnCameraStartCallback
	// Flags: [Final|Native|Public]
	// Offset: 0x10aacbf4
	// Params: [ Num(1) Size(0x8) ]
	void OnCameraStartCallback(struct UCameraComponent* InCamComponent);

	// Object: Function GPCutScene.GPSequenceActor.OnCameraCutCallback
	// Flags: [Final|Native|Public]
	// Offset: 0x107dd834
	// Params: [ Num(1) Size(0x8) ]
	void OnCameraCutCallback(struct UCameraComponent* InCamComponent);

	// Object: Function GPCutScene.GPSequenceActor.NtfServerChangeStatus
	// Flags: [Net|NetReliableNative|Event|Public|NetServer|BlueprintCallable]
	// Offset: 0x8fc9684
	// Params: [ Num(1) Size(0x1) ]
	void NtfServerChangeStatus(EGPSequenceStatus NewStatus);

	// Object: Function GPCutScene.GPSequenceActor.LeaveCutSceneStreaming
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(0) Size(0x0) ]
	void LeaveCutSceneStreaming();

	// Object: Function GPCutScene.GPSequenceActor.LeaveCutSceneHud
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(0) Size(0x0) ]
	void LeaveCutSceneHud();

	// Object: Function GPCutScene.GPSequenceActor.LeaveCutSceneCamera
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x8fc95cc
	// Params: [ Num(1) Size(0x10) ]
	void LeaveCutSceneCamera(struct FViewTargetTransitionParams TransitionParams);

	// Object: Function GPCutScene.GPSequenceActor.LeaveCameraCut
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x8fc95b8
	// Params: [ Num(0) Size(0x0) ]
	void LeaveCameraCut();

	// Object: Function GPCutScene.GPSequenceActor.GetLength
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x8fc9584
	// Params: [ Num(1) Size(0x4) ]
	float GetLength();

	// Object: Function GPCutScene.GPSequenceActor.FireCustomEvent
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x8fc9460
	// Params: [ Num(3) Size(0x20) ]
	void FireCustomEvent(EGPSequenceCustomEvent EventName, struct FName EventSubName, struct FString EventArgs);

	// Object: Function GPCutScene.GPSequenceActor.EnterCutSceneStreaming
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(0) Size(0x0) ]
	void EnterCutSceneStreaming();

	// Object: Function GPCutScene.GPSequenceActor.EnterCutSceneHud
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(0) Size(0x0) ]
	void EnterCutSceneHud();

	// Object: Function GPCutScene.GPSequenceActor.EnterCutSceneCamera
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x8fc93a8
	// Params: [ Num(1) Size(0x10) ]
	void EnterCutSceneCamera(struct FViewTargetTransitionParams TransitionParams);

	// Object: Function GPCutScene.GPSequenceActor.EndSequence
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(0) Size(0x0) ]
	void EndSequence();

	// Object: Function GPCutScene.GPSequenceActor.CheckTriggerMode
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x8fc92f8
	// Params: [ Num(2) Size(0x9) ]
	uint8_t CheckTriggerMode(struct AActor* OtherActor);

	// Object: Function GPCutScene.GPSequenceActor.CheckTriggerAuth
	// Flags: [Final|Native|Protected|BlueprintCallable|BlueprintPure]
	// Offset: 0x8fc92c0
	// Params: [ Num(1) Size(0x1) ]
	uint8_t CheckTriggerAuth();

	// Object: Function GPCutScene.GPSequenceActor.CheckSpawnBindingActorsReady
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(1) Size(0x1) ]
	uint8_t CheckSpawnBindingActorsReady();

	// Object: Function GPCutScene.GPSequenceActor.Break
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x8fc92ac
	// Params: [ Num(0) Size(0x0) ]
	void Break();

	// Object: Function GPCutScene.GPSequenceActor.BeginSequence
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(0) Size(0x0) ]
	void BeginSequence();

	// Object: Function GPCutScene.GPSequenceActor.AddDefaultBinding
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x8fc9208
	// Params: [ Num(1) Size(0x8) ]
	void AddDefaultBinding(struct AActor* BindingActor);

	// Object: Function GPCutScene.GPSequenceActor.AddBinding
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x8fc90e8
	// Params: [ Num(3) Size(0x11) ]
	void AddBinding(struct FName BindingTag, struct AActor* BindingActor, uint8_t bBindDefaultActor);
};

// Object: Class GPCutScene.GPSequenceActorStream
// Size: 0x440 (Inherited: 0x370)
struct AGPSequenceActorStream : AActor
{
	DEFINE_UE_CLASS_HELPERS(AGPSequenceActorStream, "GPSequenceActorStream")

	struct FSeqStreamSection CurSection; // 0x370(0x20)
	struct FSeqStreamSection LastSection; // 0x390(0x20)
	uint8_t Pad_0x3B0[0x30]; // 0x3B0(0x30)
	struct TArray<struct FSeqStreamSection> SequenceStream; // 0x3E0(0x10)
	uint8_t Pad_0x3F0[0x50]; // 0x3F0(0x50)

	// Object: Function GPCutScene.GPSequenceActorStream.StopSequenceStream
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x8fca508
	// Params: [ Num(0) Size(0x0) ]
	void StopSequenceStream();

	// Object: Function GPCutScene.GPSequenceActorStream.StartSequenceStream
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x8fca4f4
	// Params: [ Num(0) Size(0x0) ]
	void StartSequenceStream();

	// Object: Function GPCutScene.GPSequenceActorStream.SetNextSection
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x8fca450
	// Params: [ Num(1) Size(0x8) ]
	void SetNextSection(struct FName Key);

	// Object: Function GPCutScene.GPSequenceActorStream.PreloadSequenceStream
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x8fca3ac
	// Params: [ Num(1) Size(0x4) ]
	void PreloadSequenceStream(int32_t SectionNum);

	// Object: Function GPCutScene.GPSequenceActorStream.PlayerNextSection
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x8fca398
	// Params: [ Num(0) Size(0x0) ]
	void PlayerNextSection();

	// Object: Function GPCutScene.GPSequenceActorStream.OnSequenceSectionEnd
	// Flags: [Final|Native|Protected]
	// Offset: 0x8fca2f4
	// Params: [ Num(1) Size(0x8) ]
	void OnSequenceSectionEnd(struct AGPSequenceActor* InSequenceActor);

	// Object: Function GPCutScene.GPSequenceActorStream.OnSequenceSectionBegin
	// Flags: [Final|Native|Protected]
	// Offset: 0x8fca250
	// Params: [ Num(1) Size(0x8) ]
	void OnSequenceSectionBegin(struct AGPSequenceActor* InSequenceActor);

	// Object: Function GPCutScene.GPSequenceActorStream.GotoSectionByKey
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x8fca1ac
	// Params: [ Num(1) Size(0x8) ]
	void GotoSectionByKey(struct FName Key);

	// Object: Function GPCutScene.GPSequenceActorStream.GotoSection
	// Flags: [Final|Native|Public]
	// Offset: 0x8fca108
	// Params: [ Num(1) Size(0x8) ]
	void GotoSection(struct AGPSequenceActor* InSequenceActor);

	// Object: Function GPCutScene.GPSequenceActorStream.AddSection
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x8fca02c
	// Params: [ Num(2) Size(0x10) ]
	void AddSection(struct FName Key, struct AGPSequenceActor* SequenceActor);
};

// Object: Class GPCutScene.GPSequenceBaker
// Size: 0x68 (Inherited: 0x28)
struct UGPSequenceBaker : UObject
{
	DEFINE_UE_CLASS_HELPERS(UGPSequenceBaker, "GPSequenceBaker")

	uint8_t bBaking : 1; // 0x28(0x1), Mask(0x1)
	uint8_t BitPad_0x28_1 : 7; // 0x28(0x1)
	uint8_t Pad_0x29[0x3]; // 0x29(0x3)
	int32_t BakeFrame; // 0x2C(0x4)
	float BakeTime; // 0x30(0x4)
	uint8_t Pad_0x34[0x4]; // 0x34(0x4)
	struct ULevelSequencePlayer* LevelSequencePlayer; // 0x38(0x8)
	uint8_t Pad_0x40[0x28]; // 0x40(0x28)
};

// Object: Class GPCutScene.GPSequenceBindingComponent
// Size: 0x180 (Inherited: 0xF8)
struct UGPSequenceBindingComponent : UActorComponent
{
	DEFINE_UE_CLASS_HELPERS(UGPSequenceBindingComponent, "GPSequenceBindingComponent")

	uint8_t Pad_0xF8[0x10]; // 0xF8(0x10)
	uint8_t bIsBinding : 1; // 0x108(0x1), Mask(0x1)
	uint8_t BitPad_0x108_1 : 7; // 0x108(0x1)
	EGPSequenceBindingActorType BindingActorType; // 0x109(0x1)
	uint8_t Pad_0x10A[0x2]; // 0x10A(0x2)
	int32_t RelevantPlayerIndex; // 0x10C(0x4)
	struct TWeakObjectPtr<struct ALevelSequenceActor> SequenceActor; // 0x110(0x8)
	uint8_t bServerDebugDraw : 1; // 0x118(0x1), Mask(0x1)
	uint8_t BitPad_0x118_1 : 7; // 0x118(0x1)
	uint8_t Pad_0x119[0x13]; // 0x119(0x13)
	uint8_t bCanBreak : 1; // 0x12C(0x1), Mask(0x1)
	uint8_t BitPad_0x12C_1 : 7; // 0x12C(0x1)
	uint8_t Pad_0x12D[0x3]; // 0x12D(0x3)
	struct FTransform ServerDebugBox; // 0x130(0x30)
	uint8_t Pad_0x160[0x1]; // 0x160(0x1)
	uint8_t bDisablePhysics : 1; // 0x161(0x1), Mask(0x1)
	uint8_t BitPad_0x161_1 : 7; // 0x161(0x1)
	uint8_t bDisableCollision : 1; // 0x162(0x1), Mask(0x1)
	uint8_t BitPad_0x162_1 : 7; // 0x162(0x1)
	uint8_t bDisableMovement : 1; // 0x163(0x1), Mask(0x1)
	uint8_t BitPad_0x163_1 : 7; // 0x163(0x1)
	uint8_t bDisabledAI : 1; // 0x164(0x1), Mask(0x1)
	uint8_t BitPad_0x164_1 : 7; // 0x164(0x1)
	uint8_t bCutSceneMode : 1; // 0x165(0x1), Mask(0x1)
	uint8_t BitPad_0x165_1 : 7; // 0x165(0x1)
	uint8_t Pad_0x166[0x2]; // 0x166(0x2)
	struct TWeakObjectPtr<struct AGPSequenceMannequin> BoundMannequin; // 0x168(0x8)
	float ActingSpeed; // 0x170(0x4)
	EGPSequencePerspectiveMode PerspectiveMode; // 0x174(0x1)
	uint8_t bEnableMovementInput : 1; // 0x175(0x1), Mask(0x1)
	uint8_t BitPad_0x175_1 : 7; // 0x175(0x1)
	uint8_t bEnableLootAtInput : 1; // 0x176(0x1), Mask(0x1)
	uint8_t BitPad_0x176_1 : 7; // 0x176(0x1)
	uint8_t Pad_0x177[0x9]; // 0x177(0x9)

	// Object: Function GPCutScene.GPSequenceBindingComponent.TestSetTPPMode
	// Flags: [Final|Native|Public]
	// Offset: 0x8fcaa44
	// Params: [ Num(0) Size(0x0) ]
	void TestSetTPPMode();

	// Object: Function GPCutScene.GPSequenceBindingComponent.TestSetFPPMode
	// Flags: [Final|Native|Public]
	// Offset: 0x8fcaa28
	// Params: [ Num(0) Size(0x0) ]
	void TestSetFPPMode();

	// Object: Function GPCutScene.GPSequenceBindingComponent.SetTPPMode
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0x8fcaa0c
	// Params: [ Num(0) Size(0x0) ]
	void SetTPPMode();

	// Object: Function GPCutScene.GPSequenceBindingComponent.SetPerspectiveMode
	// Flags: [Native|Public]
	// Offset: 0x8fca960
	// Params: [ Num(1) Size(0x1) ]
	void SetPerspectiveMode(EGPSequencePerspectiveMode Mode);

	// Object: Function GPCutScene.GPSequenceBindingComponent.SetFPPMode
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0x8fca944
	// Params: [ Num(0) Size(0x0) ]
	void SetFPPMode();

	// Object: Function GPCutScene.GPSequenceBindingComponent.SetEnableMovementInput
	// Flags: [Native|Public]
	// Offset: 0x8fca890
	// Params: [ Num(1) Size(0x1) ]
	void SetEnableMovementInput(uint8_t bEnable);

	// Object: Function GPCutScene.GPSequenceBindingComponent.SetEnableLootAtInput
	// Flags: [Native|Public]
	// Offset: 0x8fca7dc
	// Params: [ Num(1) Size(0x1) ]
	void SetEnableLootAtInput(uint8_t bEnable);

	// Object: Function GPCutScene.GPSequenceBindingComponent.SetActingSpeed
	// Flags: [Native|Public]
	// Offset: 0x8fca730
	// Params: [ Num(1) Size(0x4) ]
	void SetActingSpeed(float Speed);

	// Object: Function GPCutScene.GPSequenceBindingComponent.RestorePerspectiveMode
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0x8fca714
	// Params: [ Num(0) Size(0x0) ]
	void RestorePerspectiveMode();

	// Object: Function GPCutScene.GPSequenceBindingComponent.OnRep_IsBinding
	// Flags: [Final|Native|Public]
	// Offset: 0x8fca700
	// Params: [ Num(0) Size(0x0) ]
	void OnRep_IsBinding();

	// Object: Function GPCutScene.GPSequenceBindingComponent.OnRep_DisablePhysics
	// Flags: [Final|Native|Protected]
	// Offset: 0x8fca6ec
	// Params: [ Num(0) Size(0x0) ]
	void OnRep_DisablePhysics();

	// Object: Function GPCutScene.GPSequenceBindingComponent.OnRep_DisableMovement
	// Flags: [Final|Native|Protected]
	// Offset: 0x8fca6d8
	// Params: [ Num(0) Size(0x0) ]
	void OnRep_DisableMovement();

	// Object: Function GPCutScene.GPSequenceBindingComponent.OnRep_DisabledAI
	// Flags: [Final|Native|Protected]
	// Offset: 0x8fca6c4
	// Params: [ Num(0) Size(0x0) ]
	void OnRep_DisabledAI();

	// Object: Function GPCutScene.GPSequenceBindingComponent.OnRep_DisableCollision
	// Flags: [Final|Native|Protected]
	// Offset: 0x8fca6b0
	// Params: [ Num(0) Size(0x0) ]
	void OnRep_DisableCollision();

	// Object: Function GPCutScene.GPSequenceBindingComponent.ForceClientEndBinding
	// Flags: [Net|NetReliableNative|Event|Public|NetClient]
	// Offset: 0x8fca694
	// Params: [ Num(0) Size(0x0) ]
	void ForceClientEndBinding();

	// Object: Function GPCutScene.GPSequenceBindingComponent.EndBinding
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x8fca680
	// Params: [ Num(0) Size(0x0) ]
	void EndBinding();

	// Object: Function GPCutScene.GPSequenceBindingComponent.EnablePhysics
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0x8fca664
	// Params: [ Num(0) Size(0x0) ]
	void EnablePhysics();

	// Object: Function GPCutScene.GPSequenceBindingComponent.EnableMovement
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0x8fca648
	// Params: [ Num(0) Size(0x0) ]
	void EnableMovement();

	// Object: Function GPCutScene.GPSequenceBindingComponent.EnableCollision
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0x8fca62c
	// Params: [ Num(0) Size(0x0) ]
	void EnableCollision();

	// Object: Function GPCutScene.GPSequenceBindingComponent.EnableAI
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0x8fca610
	// Params: [ Num(0) Size(0x0) ]
	void EnableAI();

	// Object: Function GPCutScene.GPSequenceBindingComponent.DisablePhysics
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0x8fca5f4
	// Params: [ Num(0) Size(0x0) ]
	void DisablePhysics();

	// Object: Function GPCutScene.GPSequenceBindingComponent.DisableMovement
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0x8fca5d8
	// Params: [ Num(0) Size(0x0) ]
	void DisableMovement();

	// Object: Function GPCutScene.GPSequenceBindingComponent.DisableCollision
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0x8fca5bc
	// Params: [ Num(0) Size(0x0) ]
	void DisableCollision();

	// Object: Function GPCutScene.GPSequenceBindingComponent.DisableAI
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0x8fca5a0
	// Params: [ Num(0) Size(0x0) ]
	void DisableAI();

	// Object: Function GPCutScene.GPSequenceBindingComponent.BreakBinding
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x8fca58c
	// Params: [ Num(0) Size(0x0) ]
	void BreakBinding();

	// Object: Function GPCutScene.GPSequenceBindingComponent.BeginBinding
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x8fca578
	// Params: [ Num(0) Size(0x0) ]
	void BeginBinding();
};

// Object: Class GPCutScene.GPSequenceBindingTags
// Size: 0x28 (Inherited: 0x28)
struct UGPSequenceBindingTags : UObject
{
	DEFINE_UE_CLASS_HELPERS(UGPSequenceBindingTags, "GPSequenceBindingTags")

	// Object: Function GPCutScene.GPSequenceBindingTags.GetVehicleTag
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x8fcb950
	// Params: [ Num(2) Size(0xC) ]
	static struct FName GetVehicleTag(int32_t Index);

	// Object: Function GPCutScene.GPSequenceBindingTags.GetPlayerTag
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x8fcb8ac
	// Params: [ Num(2) Size(0xC) ]
	static struct FName GetPlayerTag(int32_t Index);
};

// Object: Class GPCutScene.GPSequenceCameraActor
// Size: 0xD40 (Inherited: 0xD30)
struct AGPSequenceCameraActor : ACineCameraActor
{
	DEFINE_UE_CLASS_HELPERS(AGPSequenceCameraActor, "GPSequenceCameraActor")

	ESequenceCameraType CameraType; // 0xD30(0x1)
	uint8_t Pad_0xD31[0x7]; // 0xD31(0x7)
	struct UGPSequenceCameraComponent* SequenceCameraComponent; // 0xD38(0x8)
};

// Object: Class GPCutScene.GPSequenceCameraComponent
// Size: 0xD00 (Inherited: 0xCF0)
struct UGPSequenceCameraComponent : UCineCameraComponent
{
	DEFINE_UE_CLASS_HELPERS(UGPSequenceCameraComponent, "GPSequenceCameraComponent")

	ESequenceCameraType CameraType; // 0xCF0(0x1)
	uint8_t Pad_0xCF1[0xF]; // 0xCF1(0xF)
};

// Object: Class GPCutScene.GPSequenceDebugActor
// Size: 0x380 (Inherited: 0x370)
struct AGPSequenceDebugActor : AActor
{
	DEFINE_UE_CLASS_HELPERS(AGPSequenceDebugActor, "GPSequenceDebugActor")

	struct TArray<struct FSoftObjectPath> LevelsToLoad; // 0x370(0x10)

	// Object: Function GPCutScene.GPSequenceDebugActor.LoadLevel
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x8fcba7c
	// Params: [ Num(0) Size(0x0) ]
	void LoadLevel();
};

// Object: Class GPCutScene.GPSequenceDebugComponent
// Size: 0xF8 (Inherited: 0xF8)
struct UGPSequenceDebugComponent : UActorComponent
{
	DEFINE_UE_CLASS_HELPERS(UGPSequenceDebugComponent, "GPSequenceDebugComponent")
};

// Object: Class GPCutScene.GPSequenceDefaultProxy
// Size: 0x410 (Inherited: 0x3F8)
struct AGPSequenceDefaultProxy : ASkeletalMeshActor
{
	DEFINE_UE_CLASS_HELPERS(AGPSequenceDefaultProxy, "GPSequenceDefaultProxy")

	uint8_t Pad_0x3F8[0x18]; // 0x3F8(0x18)
};

// Object: Class GPCutScene.GPSequenceGlobalConfig
// Size: 0x50 (Inherited: 0x38)
struct UGPSequenceGlobalConfig : UDeveloperSettings
{
	DEFINE_UE_CLASS_HELPERS(UGPSequenceGlobalConfig, "GPSequenceGlobalConfig")

	uint8_t bDrawGizmos : 1; // 0x38(0x1), Mask(0x1)
	uint8_t BitPad_0x38_1 : 7; // 0x38(0x1)
	uint8_t bDrawTitle : 1; // 0x39(0x1), Mask(0x1)
	uint8_t BitPad_0x39_1 : 7; // 0x39(0x1)
	uint8_t bDrawPreloadTrigger : 1; // 0x3A(0x1), Mask(0x1)
	uint8_t BitPad_0x3A_1 : 7; // 0x3A(0x1)
	uint8_t bDrawBindingSpawner : 1; // 0x3B(0x1), Mask(0x1)
	uint8_t BitPad_0x3B_1 : 7; // 0x3B(0x1)
	uint8_t Pad_0x3C[0x4]; // 0x3C(0x4)
	struct AActor* DefaultVehicleClass; // 0x40(0x8)
	struct AActor* DefaultCharacterClass; // 0x48(0x8)
};

// Object: Class GPCutScene.GPSequencePerformance
// Size: 0x710 (Inherited: 0x6B0)
struct AGPSequencePerformance : AGPSequenceActor
{
	DEFINE_UE_CLASS_HELPERS(AGPSequencePerformance, "GPSequencePerformance")

	uint8_t bEnbale_Performance : 1; // 0x6B0(0x1), Mask(0x1)
	uint8_t BitPad_0x6B0_1 : 7; // 0x6B0(0x1)
	uint8_t Pad_0x6B1[0x7]; // 0x6B1(0x7)
	struct FSoftObjectPath LevelSequencePath_HD; // 0x6B8(0x18)
	struct FSoftObjectPath LevelSequencePath_Mobile; // 0x6D0(0x18)
	int32_t Mobile_LowLevel; // 0x6E8(0x4)
	uint8_t Pad_0x6EC[0x4]; // 0x6EC(0x4)
	struct FSoftObjectPath LevelSequencePath_Mobile_Low; // 0x6F0(0x18)
	uint8_t Pad_0x708[0x8]; // 0x708(0x8)

	// Object: Function GPCutScene.GPSequencePerformance.SetPerformaceSequencePath
	// Flags: [Final|Native|Protected]
	// Offset: 0x8fccd3c
	// Params: [ Num(0) Size(0x0) ]
	void SetPerformaceSequencePath();

	// Object: Function GPCutScene.GPSequencePerformance.IsClient
	// Flags: [Final|Native|Protected]
	// Offset: 0x8fccc84
	// Params: [ Num(2) Size(0x2) ]
	uint8_t IsClient(uint8_t bIncludeStandalone);

	// Object: Function GPCutScene.GPSequencePerformance.GetCurrentSequencePath
	// Flags: [Final|Native|Protected|HasDefaults]
	// Offset: 0x8fccbe0
	// Params: [ Num(1) Size(0x18) ]
	struct FSoftObjectPath GetCurrentSequencePath();

	// Object: Function GPCutScene.GPSequencePerformance.GetCurrentDeviceLevel
	// Flags: [Final|Native|Protected]
	// Offset: 0x8fccbac
	// Params: [ Num(1) Size(0x4) ]
	int32_t GetCurrentDeviceLevel();
};

// Object: Class GPCutScene.GPSequenceKeepStateActor
// Size: 0x720 (Inherited: 0x710)
struct AGPSequenceKeepStateActor : AGPSequencePerformance
{
	DEFINE_UE_CLASS_HELPERS(AGPSequenceKeepStateActor, "GPSequenceKeepStateActor")

	float JumpSecondOffsetTime; // 0x70C(0x4)
	uint8_t Pad_0x714[0xC]; // 0x714(0xC)

	// Object: Function GPCutScene.GPSequenceKeepStateActor.PlayReconnectLevelSequenceInner
	// Flags: [Final|Native|Protected]
	// Offset: 0x8fcc008
	// Params: [ Num(1) Size(0x8) ]
	void PlayReconnectLevelSequenceInner(struct ULevelSequence* LevelSequenceAsset);

	// Object: Function GPCutScene.GPSequenceKeepStateActor.OnReconnectSequenceAssetLoadComplete
	// Flags: [Final|Native|Protected|HasOutParms|HasDefaults]
	// Offset: 0x8fcbf48
	// Params: [ Num(1) Size(0x18) ]
	void OnReconnectSequenceAssetLoadComplete(const struct FSoftObjectPath& ResourcePaths);
};

// Object: Class GPCutScene.GPSequenceMannequin
// Size: 0x388 (Inherited: 0x370)
struct AGPSequenceMannequin : AActor
{
	DEFINE_UE_CLASS_HELPERS(AGPSequenceMannequin, "GPSequenceMannequin")

	uint8_t Pad_0x370[0x18]; // 0x370(0x18)

	// Object: Function GPCutScene.GPSequenceMannequin.OnSequenceEnd
	// Flags: [Final|Native|Public]
	// Offset: 0x8fcc158
	// Params: [ Num(1) Size(0x8) ]
	void OnSequenceEnd(struct AGPSequenceActor* InOwnerSequence);

	// Object: Function GPCutScene.GPSequenceMannequin.OnSequenceBegin
	// Flags: [Final|Native|Public]
	// Offset: 0x8fcc0b4
	// Params: [ Num(1) Size(0x8) ]
	void OnSequenceBegin(struct AGPSequenceActor* InOwnerSequence);
};

// Object: Class GPCutScene.GPSequenceMannequinAssemblyComponent
// Size: 0x128 (Inherited: 0xF8)
struct UGPSequenceMannequinAssemblyComponent : UActorComponent
{
	DEFINE_UE_CLASS_HELPERS(UGPSequenceMannequinAssemblyComponent, "GPSequenceMannequinAssemblyComponent")

	struct TArray<struct USceneComponent*> TypeOfComponentsToDuplicates; // 0xF8(0x10)
	struct TArray<struct FName> IncludedComponents; // 0x108(0x10)
	struct TArray<struct FName> ExcludedComponents; // 0x118(0x10)
};

// Object: Class GPCutScene.GPSequenceMultiStageActor
// Size: 0x880 (Inherited: 0x6B0)
struct AGPSequenceMultiStageActor : AGPSequenceActor
{
	DEFINE_UE_CLASS_HELPERS(AGPSequenceMultiStageActor, "GPSequenceMultiStageActor")

	struct FSoftObjectPath StartStageSequence; // 0x6B0(0x18)
	struct FSoftObjectPath LoopStageSequence; // 0x6C8(0x18)
	struct FSoftObjectPath EndStageSequence; // 0x6E0(0x18)
	uint8_t bAutoTransitionToLoop : 1; // 0x6F8(0x1), Mask(0x1)
	uint8_t BitPad_0x6F8_1 : 7; // 0x6F8(0x1)
	uint8_t bLoopInfinitely : 1; // 0x6F9(0x1), Mask(0x1)
	uint8_t BitPad_0x6F9_1 : 7; // 0x6F9(0x1)
	uint8_t Pad_0x6FA[0x2]; // 0x6FA(0x2)
	int32_t LoopCount; // 0x6FC(0x4)
	EGPSequenceStage CurrentStage; // 0x700(0x1)
	uint8_t Pad_0x701[0x3]; // 0x701(0x3)
	int32_t CurrentLoopCount; // 0x704(0x4)
	uint8_t bIsSwitchingStage : 1; // 0x708(0x1), Mask(0x1)
	uint8_t BitPad_0x708_1 : 7; // 0x708(0x1)
	uint8_t Pad_0x709[0x7]; // 0x709(0x7)
	struct TMap<EGPSequenceStage, uint8_t> StagePrewarmStatus; // 0x710(0x50)
	struct TMap<EGPSequenceStage, struct ALevelSequenceActor*> PrewarmedSequenceActors; // 0x760(0x50)
	uint8_t Pad_0x7B0[0x50]; // 0x7B0(0x50)
	uint8_t bClientPendingEndTransition : 1; // 0x800(0x1), Mask(0x1)
	uint8_t BitPad_0x800_1 : 7; // 0x800(0x1)
	uint8_t bClientPendingLoopTransition : 1; // 0x801(0x1), Mask(0x1)
	uint8_t BitPad_0x801_1 : 7; // 0x801(0x1)
	uint8_t Pad_0x802[0x6]; // 0x802(0x6)
	struct FMulticastInlineDelegate OnStageChanged; // 0x808(0x10)
	struct FMulticastInlineDelegate OnStartStageBegin; // 0x818(0x10)
	struct FMulticastInlineDelegate OnLoopStageBegin; // 0x828(0x10)
	struct FMulticastInlineDelegate OnEndStageBegin; // 0x838(0x10)
	struct FMulticastInlineDelegate OnAllStagesComplete; // 0x848(0x10)
	struct FMulticastInlineDelegate OnStagePrewarmed; // 0x858(0x10)
	struct FMulticastInlineDelegate OnAllStagesPrewarmed; // 0x868(0x10)
	uint8_t Pad_0x878[0x8]; // 0x878(0x8)

	// Object: Function GPCutScene.GPSequenceMultiStageActor.StopAllStages
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x8fcc63c
	// Params: [ Num(0) Size(0x0) ]
	void StopAllStages();

	// Object: Function GPCutScene.GPSequenceMultiStageActor.ResetMultiStage
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x8fcc628
	// Params: [ Num(0) Size(0x0) ]
	void ResetMultiStage();

	// Object: Function GPCutScene.GPSequenceMultiStageActor.PrewarmStage
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x8fcc584
	// Params: [ Num(1) Size(0x1) ]
	void PrewarmStage(EGPSequenceStage Stage);

	// Object: Function GPCutScene.GPSequenceMultiStageActor.PrewarmAllStages
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x8fcc570
	// Params: [ Num(0) Size(0x0) ]
	void PrewarmAllStages();

	// Object: Function GPCutScene.GPSequenceMultiStageActor.PlayStart
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x8fcc55c
	// Params: [ Num(0) Size(0x0) ]
	void PlayStart();

	// Object: Function GPCutScene.GPSequenceMultiStageActor.PlayLoop
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x8fcc548
	// Params: [ Num(0) Size(0x0) ]
	void PlayLoop();

	// Object: Function GPCutScene.GPSequenceMultiStageActor.PlayEnd
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x8fcc534
	// Params: [ Num(0) Size(0x0) ]
	void PlayEnd();

	// Object: Function GPCutScene.GPSequenceMultiStageActor.OnStageSequenceEnd
	// Flags: [Final|Native|Protected]
	// Offset: 0x8fcc490
	// Params: [ Num(1) Size(0x8) ]
	void OnStageSequenceEnd(struct AGPSequenceActor* InSequenceActor);

	// Object: Function GPCutScene.GPSequenceMultiStageActor.OnStageSequenceBegin
	// Flags: [Final|Native|Protected]
	// Offset: 0x8fcc3ec
	// Params: [ Num(1) Size(0x8) ]
	void OnStageSequenceBegin(struct AGPSequenceActor* InSequenceActor);

	// Object: DelegateFunction GPCutScene.GPSequenceMultiStageActor.OnStagePrewarmed__DelegateSignature
	// Flags: [MulticastDelegate|Public|Delegate]
	// Offset: 0x101d2e88
	// Params: [ Num(2) Size(0x9) ]
	void OnStagePrewarmed__DelegateSignature(struct AGPSequenceMultiStageActor* MultiStageActor, EGPSequenceStage Stage);

	// Object: DelegateFunction GPCutScene.GPSequenceMultiStageActor.OnStageChanged__DelegateSignature
	// Flags: [MulticastDelegate|Public|Delegate]
	// Offset: 0x101d2e88
	// Params: [ Num(2) Size(0x9) ]
	void OnStageChanged__DelegateSignature(struct AGPSequenceMultiStageActor* MultiStageActor, EGPSequenceStage NewStage);

	// Object: Function GPCutScene.GPSequenceMultiStageActor.OnRep_CurrentStage
	// Flags: [Final|Native|Protected]
	// Offset: 0x8fcc3d8
	// Params: [ Num(0) Size(0x0) ]
	void OnRep_CurrentStage();

	// Object: Function GPCutScene.GPSequenceMultiStageActor.IsStagePrewarmed
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x8fcc328
	// Params: [ Num(2) Size(0x2) ]
	uint8_t IsStagePrewarmed(EGPSequenceStage Stage);

	// Object: Function GPCutScene.GPSequenceMultiStageActor.IsAnyStageePlaying
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x8fcc2f0
	// Params: [ Num(1) Size(0x1) ]
	uint8_t IsAnyStageePlaying();

	// Object: Function GPCutScene.GPSequenceMultiStageActor.GetCurrentStage
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x8fcc2d4
	// Params: [ Num(1) Size(0x1) ]
	EGPSequenceStage GetCurrentStage();

	// Object: Function GPCutScene.GPSequenceMultiStageActor.AreAllStagesPrewarmed
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x8fcc29c
	// Params: [ Num(1) Size(0x1) ]
	uint8_t AreAllStagesPrewarmed();
};

// Object: Class GPCutScene.GPSequenceMultiStageExample
// Size: 0x390 (Inherited: 0x370)
struct AGPSequenceMultiStageExample : AActor
{
	DEFINE_UE_CLASS_HELPERS(AGPSequenceMultiStageExample, "GPSequenceMultiStageExample")

	struct AGPSequenceMultiStageActor* SkillSequenceActor; // 0x370(0x8)
	struct AGPSequenceMultiStageActor* MechanismSequenceActor; // 0x378(0x8)
	struct AGPSequenceMultiStageActor* BossSequenceActor; // 0x380(0x8)
	uint8_t Pad_0x388[0x8]; // 0x388(0x8)

	// Object: Function GPCutScene.GPSequenceMultiStageExample.StartSkillCast
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x8fccb90
	// Params: [ Num(0) Size(0x0) ]
	void StartSkillCast();

	// Object: Function GPCutScene.GPSequenceMultiStageExample.OnStartStageBegin
	// Flags: [Final|Native|Public]
	// Offset: 0x8fccab0
	// Params: [ Num(2) Size(0x9) ]
	void OnStartStageBegin(struct AGPSequenceMultiStageActor* Actor, EGPSequenceStage Stage);

	// Object: Function GPCutScene.GPSequenceMultiStageExample.OnStageChanged
	// Flags: [Final|Native|Public]
	// Offset: 0x8fcc9d0
	// Params: [ Num(2) Size(0x9) ]
	void OnStageChanged(struct AGPSequenceMultiStageActor* Actor, EGPSequenceStage NewStage);

	// Object: Function GPCutScene.GPSequenceMultiStageExample.OnLoopStageBegin
	// Flags: [Final|Native|Public]
	// Offset: 0x8fcc8f0
	// Params: [ Num(2) Size(0x9) ]
	void OnLoopStageBegin(struct AGPSequenceMultiStageActor* Actor, EGPSequenceStage Stage);

	// Object: Function GPCutScene.GPSequenceMultiStageExample.OnEndStageBegin
	// Flags: [Final|Native|Public]
	// Offset: 0x8fcc810
	// Params: [ Num(2) Size(0x9) ]
	void OnEndStageBegin(struct AGPSequenceMultiStageActor* Actor, EGPSequenceStage Stage);

	// Object: Function GPCutScene.GPSequenceMultiStageExample.OnAllStagesComplete
	// Flags: [Final|Native|Public]
	// Offset: 0x8fcc730
	// Params: [ Num(2) Size(0x9) ]
	void OnAllStagesComplete(struct AGPSequenceMultiStageActor* Actor, EGPSequenceStage Stage);

	// Object: Function GPCutScene.GPSequenceMultiStageExample.InterruptSkill
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x8fcc71c
	// Params: [ Num(0) Size(0x0) ]
	void InterruptSkill();

	// Object: Function GPCutScene.GPSequenceMultiStageExample.EndSkillCast
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x8fcc708
	// Params: [ Num(0) Size(0x0) ]
	void EndSkillCast();

	// Object: Function GPCutScene.GPSequenceMultiStageExample.DeactivateMechanism
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x8fcc6f4
	// Params: [ Num(0) Size(0x0) ]
	void DeactivateMechanism();

	// Object: Function GPCutScene.GPSequenceMultiStageExample.BossEnter
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x8fcc6e0
	// Params: [ Num(0) Size(0x0) ]
	void BossEnter();

	// Object: Function GPCutScene.GPSequenceMultiStageExample.BossDefeated
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x8fcc6cc
	// Params: [ Num(0) Size(0x0) ]
	void BossDefeated();

	// Object: Function GPCutScene.GPSequenceMultiStageExample.ActivateMechanism
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x8fcc6b8
	// Params: [ Num(0) Size(0x0) ]
	void ActivateMechanism();
};

// Object: Class GPCutScene.GPSequencePrepareComponent
// Size: 0x148 (Inherited: 0xF8)
struct UGPSequencePrepareComponent : UActorComponent
{
	DEFINE_UE_CLASS_HELPERS(UGPSequencePrepareComponent, "GPSequencePrepareComponent")

	uint8_t bEnablePreload : 1; // 0xF8(0x1), Mask(0x1)
	uint8_t BitPad_0xF8_1 : 7; // 0xF8(0x1)
	uint8_t Pad_0xF9[0x7]; // 0xF9(0x7)
	struct TArray<struct FSoftObjectPath> PreloadSubLevels; // 0x100(0x10)
	float PreloadRadius; // 0x110(0x4)
	uint8_t Pad_0x114[0x4]; // 0x114(0x4)
	struct TArray<struct FVector> StreamInLocation; // 0x118(0x10)
	struct TArray<struct ULevelStreaming*> PreloadSubLevelPtrs; // 0x128(0x10)
	struct ATriggerBase* PreloadTrigger; // 0x138(0x8)
	uint8_t Pad_0x140[0x8]; // 0x140(0x8)

	// Object: Function GPCutScene.GPSequencePrepareComponent.TestPreload
	// Flags: [Final|Native|Protected|BlueprintCallable]
	// Offset: 0x8fcced4
	// Params: [ Num(0) Size(0x0) ]
	void TestPreload();

	// Object: Function GPCutScene.GPSequencePrepareComponent.TestCheckPreloadReady
	// Flags: [Final|Native|Protected|BlueprintCallable]
	// Offset: 0x8fccec0
	// Params: [ Num(0) Size(0x0) ]
	void TestCheckPreloadReady();

	// Object: Function GPCutScene.GPSequencePrepareComponent.OnPreloadTriggerOverlapInternal
	// Flags: [Final|Native|Protected]
	// Offset: 0xfaa13d4
	// Params: [ Num(2) Size(0x10) ]
	void OnPreloadTriggerOverlapInternal(struct AActor* OverlappedActor, struct AActor* OtherActor);

	// Object: Function GPCutScene.GPSequencePrepareComponent.OnPreloadTriggerEndOverlapInternal
	// Flags: [Final|Native|Protected]
	// Offset: 0x8fccde4
	// Params: [ Num(2) Size(0x10) ]
	void OnPreloadTriggerEndOverlapInternal(struct AActor* OverlappedActor, struct AActor* OtherActor);
};

// Object: Class GPCutScene.GPSequencePreSpawnComponent
// Size: 0x208 (Inherited: 0xF8)
struct UGPSequencePreSpawnComponent : UActorComponent
{
	DEFINE_UE_CLASS_HELPERS(UGPSequencePreSpawnComponent, "GPSequencePreSpawnComponent")

	uint8_t bEnablePrespawn : 1; // 0xF8(0x1), Mask(0x1)
	uint8_t BitPad_0xF8_1 : 7; // 0xF8(0x1)
	uint8_t Pad_0xF9[0x3]; // 0xF9(0x3)
	float PrespawnFrameTimeOccupancy; // 0xFC(0x4)
	float PrespawnRange; // 0x100(0x4)
	float TimeToPrespawnInAdvance; // 0x104(0x4)
	uint8_t Pad_0x108[0x48]; // 0x108(0x48)
	struct AGPSequenceActor* Owner; // 0x150(0x8)
	uint8_t Pad_0x158[0x8]; // 0x158(0x8)
	struct ULevelSequencePlayer* Player; // 0x160(0x8)
	uint8_t Pad_0x168[0x20]; // 0x168(0x20)
	struct TSet<struct UGPSequencePrespawnObjectState*> PrespawnObjectStateCache; // 0x188(0x50)
	struct ATriggerSphere* PrespawnTrigger; // 0x1D8(0x8)
	uint8_t Pad_0x1E0[0x18]; // 0x1E0(0x18)
	struct TArray<struct AActor*> CurrentPrespawnedActors; // 0x1F8(0x10)

	// Object: Function GPCutScene.GPSequencePreSpawnComponent.OnTriggerPrespawn
	// Flags: [Final|Native|Protected]
	// Offset: 0x8fccfd8
	// Params: [ Num(2) Size(0x10) ]
	void OnTriggerPrespawn(struct AActor* OverlappedActor, struct AActor* OtherActor);

	// Object: Function GPCutScene.GPSequencePreSpawnComponent.OnTriggerDespawn
	// Flags: [Final|Native|Protected]
	// Offset: 0x8fccefc
	// Params: [ Num(2) Size(0x10) ]
	void OnTriggerDespawn(struct AActor* OverlappedActor, struct AActor* OtherActor);
};

// Object: Class GPCutScene.GPSequencePrespawnObjectState
// Size: 0x80 (Inherited: 0x30)
struct UGPSequencePrespawnObjectState : UMovieScenePrespawnObjectState
{
	DEFINE_UE_CLASS_HELPERS(UGPSequencePrespawnObjectState, "GPSequencePrespawnObjectState")

	uint8_t Pad_0x30[0x50]; // 0x30(0x50)
};

// Object: Class GPCutScene.GPSequenceProxy
// Size: 0x408 (Inherited: 0x3F8)
struct AGPSequenceProxy : ASkeletalMeshActor
{
	DEFINE_UE_CLASS_HELPERS(AGPSequenceProxy, "GPSequenceProxy")

	struct AActor* BindingActor; // 0x3F8(0x8)
	struct UAnimationAsset* LastAnimAsset; // 0x400(0x8)
};

// Object: Class GPCutScene.GPSequenceSystem
// Size: 0xAA0 (Inherited: 0x30)
struct UGPSequenceSystem : UWorldSubsystem
{
	DEFINE_UE_CLASS_HELPERS(UGPSequenceSystem, "GPSequenceSystem")

	struct FMulticastInlineDelegate OnBeginCutScene; // 0x30(0x10)
	struct FMulticastInlineDelegate OnEndCutScene; // 0x40(0x10)
	struct TMap<struct FName, struct TWeakObjectPtr<struct AGPSequenceActor>> CachedSequenceActors; // 0x50(0x50)
	uint8_t Pad_0xA0[0x10]; // 0xA0(0x10)
	struct AGPSequenceActor* CurrentCutSceneSequence; // 0xB0(0x8)
	uint8_t Pad_0xB8[0x9E8]; // 0xB8(0x9E8)

	// Object: Function GPCutScene.GPSequenceSystem.ResumeCurrentPlayingSequence
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x8fcf548
	// Params: [ Num(0) Size(0x0) ]
	void ResumeCurrentPlayingSequence();

	// Object: Function GPCutScene.GPSequenceSystem.RemoveCurrentPlayingSequence
	// Flags: [Final|Native|Public]
	// Offset: 0x8fcf4a4
	// Params: [ Num(1) Size(0x8) ]
	void RemoveCurrentPlayingSequence(struct AGPSequenceActor* SequenceActor);

	// Object: Function GPCutScene.GPSequenceSystem.PauseCurrentPlayingSequence
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x8fcf490
	// Params: [ Num(0) Size(0x0) ]
	void PauseCurrentPlayingSequence();

	// Object: Function GPCutScene.GPSequenceSystem.LeaveCutSceneCamera
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x8fcf3d8
	// Params: [ Num(1) Size(0x10) ]
	void LeaveCutSceneCamera(struct FViewTargetTransitionParams TransitionParams);

	// Object: Function GPCutScene.GPSequenceSystem.IsSequenceExist
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x8fcf328
	// Params: [ Num(2) Size(0x9) ]
	uint8_t IsSequenceExist(struct FName SequenceTag);

	// Object: Function GPCutScene.GPSequenceSystem.GetSequenceLength
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x8fcf27c
	// Params: [ Num(2) Size(0xC) ]
	float GetSequenceLength(struct FName SequenceTag);

	// Object: Function GPCutScene.GPSequenceSystem.GetSequence
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x8fcf1d0
	// Params: [ Num(2) Size(0x10) ]
	struct AGPSequenceActor* GetSequence(struct FName SequenceTag);

	// Object: Function GPCutScene.GPSequenceSystem.GetInstance
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x8fcf12c
	// Params: [ Num(2) Size(0x10) ]
	static struct UGPSequenceSystem* GetInstance(struct UObject* WorldContextObject);

	// Object: Function GPCutScene.GPSequenceSystem.GetCurrentPlayingSequences
	// Flags: [Final|Native|Public]
	// Offset: 0x8fcf0a8
	// Params: [ Num(1) Size(0x10) ]
	struct TArray<struct TWeakObjectPtr<struct AGPSequenceActor>> GetCurrentPlayingSequences();

	// Object: Function GPCutScene.GPSequenceSystem.GetCurrentCutSceneSequence
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x8fcf074
	// Params: [ Num(1) Size(0x8) ]
	struct AGPSequenceActor* GetCurrentCutSceneSequence();

	// Object: Function GPCutScene.GPSequenceSystem.Get
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x8fcefd0
	// Params: [ Num(2) Size(0x10) ]
	static struct UGPSequenceSystem* Get(struct UObject* WorldContextObject);

	// Object: Function GPCutScene.GPSequenceSystem.EnterCutSceneCamera
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x8fcef18
	// Params: [ Num(1) Size(0x10) ]
	void EnterCutSceneCamera(struct FViewTargetTransitionParams TransitionParams);

	// Object: Function GPCutScene.GPSequenceSystem.EndSubtitlesOnCutScene
	// Flags: [Final|Native|Public]
	// Offset: 0x8fcee74
	// Params: [ Num(1) Size(0x8) ]
	void EndSubtitlesOnCutScene(struct FName SubtitlesID);

	// Object: Function GPCutScene.GPSequenceSystem.BeginSubtitlesOnCutScene
	// Flags: [Final|Native|Public]
	// Offset: 0x8fcedd0
	// Params: [ Num(1) Size(0x8) ]
	void BeginSubtitlesOnCutScene(struct FName SubtitlesID);

	// Object: Function GPCutScene.GPSequenceSystem.AddCurrentPlayingSequence
	// Flags: [Final|Native|Public]
	// Offset: 0x8fced2c
	// Params: [ Num(1) Size(0x8) ]
	void AddCurrentPlayingSequence(struct AGPSequenceActor* SequenceActor);
};

// Object: Class GPCutScene.GPSequenceUtils
// Size: 0x28 (Inherited: 0x28)
struct UGPSequenceUtils : UBlueprintFunctionLibrary
{
	DEFINE_UE_CLASS_HELPERS(UGPSequenceUtils, "GPSequenceUtils")
};

// Object: Class GPCutScene.GPSubLevelPreloader
// Size: 0x3E0 (Inherited: 0x3B8)
struct AGPSubLevelPreloader : AGPTriggerBase
{
	DEFINE_UE_CLASS_HELPERS(AGPSubLevelPreloader, "GPSubLevelPreloader")

	struct TArray<struct FSoftObjectPath> PreloadSubLevels; // 0x3B8(0x10)
	struct TArray<struct ULevelStreaming*> PreloadSubLevelPtrs; // 0x3C8(0x10)
	EGPSubLevelPreloaderStatus Status; // 0x3D8(0x1)
	uint8_t Pad_0x3D9[0x7]; // 0x3D9(0x7)

	// Object: Function GPCutScene.GPSubLevelPreloader.TestPreload
	// Flags: [Final|Native|Protected|BlueprintCallable]
	// Offset: 0x8fcf6cc
	// Params: [ Num(0) Size(0x0) ]
	void TestPreload();

	// Object: Function GPCutScene.GPSubLevelPreloader.IsAllReady
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x8fcf694
	// Params: [ Num(1) Size(0x1) ]
	uint8_t IsAllReady();
};

} // namespace SDK
