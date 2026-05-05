#pragma once

#include "../CoreUObject_classes.hpp"
#include "Engine.hpp"
#include "GameCore.hpp"

namespace SDK
{

// Package: LiteSequence
// Enums: 6
// Structs: 18
// Classes: 13

struct AActor;
struct ACHARACTER;
enum class ERichCurveExtrapolation : uint8_t;
enum class ERichCurveInterpMode : uint8_t;
enum class ERichCurveTangentMode : uint8_t;
enum class ERichCurveTangentWeightMode : uint8_t;
struct UActorComponent;
struct UAnimSequenceBase;
struct UGPAudioEventAsset;
struct ULevelSequence;
struct USceneComponent;
struct FLiteSequenceChannel;
struct FLiteSequenceBoolChannel;
struct FLiteSequenceParticleChannel;
struct FLiteSequenceFloatChannel;
struct FLiteSequenceTangentData;
struct FLiteSequenceFloatValue;
struct FLiteSequencePossessable;
struct FLiteSequenceSpawnable;
struct FLiteSequenceBinding;
struct FLiteSequenceComponentBinding;
struct FLiteSequenceSpawnRegister;
struct FLiteSequencePlaybackParams;
struct FLiteSequenceSpawnablePoolManger;
struct FLiteSequencePlaybackConfig;
struct FLiteSequenceDataRow;
struct FColorParameterCurves;
struct FScalarParameterCurves;
struct FPlaybackRange;
struct ULiteSequence;
struct ULiteSequenceConsoleCommand;
struct ALiteSequencePerformanceTest;
struct AInstanceContainer;
struct ULiteSequencePlayerComponent;
struct ULiteSequencePlayerManager;
struct ULiteSequenceResourceManager;
struct ULiteSequenceTrack;
struct ULiteSequence3DTransformTrack;
struct ULiteSequenceParticleTrack;
struct ULiteSequenceSpawnTrack;
struct ULiteSequenceComponentMaterialTrack;
struct ULiteSequenceSkeletalAnimationTrack;

// Object: Enum LiteSequence.EParticleKeyType
enum class EParticleKeyType : uint8_t
{
	Activate = 0,
	Deactivate = 1,
	Trigger = 2,
	EParticleKeyType_MAX = 3
};

// Object: Enum LiteSequence.ELiteSequencePlayerStatus
enum class ELiteSequencePlayerStatus : uint8_t
{
	Stopped = 0,
	Playing = 1,
	Paused = 2,
	MAX = 3
};

// Object: Enum LiteSequence.ELiteSequencePlayDirection
enum class ELiteSequencePlayDirection : uint8_t
{
	Forwards = 0,
	Backwards = 1,
	ELiteSequencePlayDirection_MAX = 2
};

// Object: Enum LiteSequence.ELiteSequenceEvaluationType
enum class ELiteSequenceEvaluationType : uint8_t
{
	FrameLocked = 0,
	WithSubFrames = 1,
	ELiteSequenceEvaluationType_MAX = 2
};

// Object: Enum LiteSequence.EUpdateCursorMethod
enum class EUpdateCursorMethod : uint8_t
{
	Play = 0,
	Jump = 1,
	Scrub = 2,
	EUpdateCursorMethod_MAX = 3
};

// Object: Enum LiteSequence.EAnimSequenceState
enum class EAnimSequenceState : uint8_t
{
	Start = 0,
	Pause = 1,
	Resume = 2,
	Stop = 3,
	EAnimSequenceState_MAX = 4
};

// Object: ScriptStruct LiteSequence.LiteSequenceChannel
// Size: 0x8 (Inherited: 0x0)
struct FLiteSequenceChannel
{
	uint8_t Pad_0x0[0x8]; // 0x0(0x8)
};

// Object: ScriptStruct LiteSequence.LiteSequenceBoolChannel
// Size: 0x30 (Inherited: 0x8)
struct FLiteSequenceBoolChannel : FLiteSequenceChannel
{
	struct TArray<struct FFrameNumber> Times; // 0x8(0x10)
	struct TArray<uint8_t> Values; // 0x18(0x10)
	uint8_t DefaultValue : 1; // 0x28(0x1), Mask(0x1)
	uint8_t BitPad_0x28_1 : 7; // 0x28(0x1)
	uint8_t bHasDefaultValue : 1; // 0x29(0x1), Mask(0x1)
	uint8_t BitPad_0x29_1 : 7; // 0x29(0x1)
	uint8_t Pad_0x2A[0x6]; // 0x2A(0x6)
};

// Object: ScriptStruct LiteSequence.LiteSequenceParticleChannel
// Size: 0x30 (Inherited: 0x8)
struct FLiteSequenceParticleChannel : FLiteSequenceChannel
{
	struct TArray<struct FFrameNumber> Times; // 0x8(0x10)
	struct TArray<EParticleKeyType> Values; // 0x18(0x10)
	EParticleKeyType DefaultValue; // 0x28(0x1)
	uint8_t bHasDefaultValue : 1; // 0x29(0x1), Mask(0x1)
	uint8_t BitPad_0x29_1 : 7; // 0x29(0x1)
	uint8_t Pad_0x2A[0x6]; // 0x2A(0x6)
};

// Object: ScriptStruct LiteSequence.LiteSequenceFloatChannel
// Size: 0x40 (Inherited: 0x8)
struct FLiteSequenceFloatChannel : FLiteSequenceChannel
{
	ERichCurveExtrapolation PreInfinityExtrap; // 0x8(0x1)
	ERichCurveExtrapolation PostInfinityExtrap; // 0x9(0x1)
	uint8_t Pad_0xA[0x6]; // 0xA(0x6)
	struct TArray<struct FFrameNumber> Times; // 0x10(0x10)
	struct TArray<struct FLiteSequenceFloatValue> Values; // 0x20(0x10)
	float DefaultValue; // 0x30(0x4)
	uint8_t bHasDefaultValue : 1; // 0x34(0x1), Mask(0x1)
	uint8_t BitPad_0x34_1 : 7; // 0x34(0x1)
	uint8_t Pad_0x35[0x3]; // 0x35(0x3)
	struct FFrameRate TickResolution; // 0x38(0x8)
};

// Object: ScriptStruct LiteSequence.LiteSequenceTangentData
// Size: 0x14 (Inherited: 0x0)
struct FLiteSequenceTangentData
{
	float ArriveTangent; // 0x0(0x4)
	float LeaveTangent; // 0x4(0x4)
	float ArriveTangentWeight; // 0x8(0x4)
	float LeaveTangentWeight; // 0xC(0x4)
	ERichCurveTangentWeightMode TangentWeightMode; // 0x10(0x1)
	uint8_t Pad_0x11[0x3]; // 0x11(0x3)
};

// Object: ScriptStruct LiteSequence.LiteSequenceFloatValue
// Size: 0x1C (Inherited: 0x0)
struct FLiteSequenceFloatValue
{
	float Value; // 0x0(0x4)
	ERichCurveInterpMode InterpMode; // 0x4(0x1)
	ERichCurveTangentMode TangentMode; // 0x5(0x1)
	uint8_t Pad_0x6[0x2]; // 0x6(0x2)
	struct FLiteSequenceTangentData Tangent; // 0x8(0x14)
};

// Object: ScriptStruct LiteSequence.LiteSequencePossessable
// Size: 0x30 (Inherited: 0x0)
struct FLiteSequencePossessable
{
	struct FGuid Guid; // 0x0(0x10)
	struct FString Name; // 0x10(0x10)
	struct FGuid ParentGuid; // 0x20(0x10)
};

// Object: ScriptStruct LiteSequence.LiteSequenceSpawnable
// Size: 0xB0 (Inherited: 0x0)
struct FLiteSequenceSpawnable
{
	struct FTransform SpawnTransform; // 0x0(0x30)
	uint8_t bContinuouslyRespawn : 1; // 0x30(0x1), Mask(0x1)
	uint8_t BitPad_0x30_1 : 7; // 0x30(0x1)
	uint8_t bExternal : 1; // 0x31(0x1), Mask(0x1)
	uint8_t BitPad_0x31_1 : 7; // 0x31(0x1)
	uint8_t Pad_0x32[0x2]; // 0x32(0x2)
	struct FGuid Guid; // 0x34(0x10)
	uint8_t Pad_0x44[0x4]; // 0x44(0x4)
	struct FString Name; // 0x48(0x10)
	struct UObject* ObjectTemplate; // 0x58(0x8)
	struct TMap<struct FGuid, struct FLiteSequencePossessable> PossessableBindings; // 0x60(0x50)
};

// Object: ScriptStruct LiteSequence.LiteSequenceBinding
// Size: 0x30 (Inherited: 0x0)
struct FLiteSequenceBinding
{
	struct FGuid ObjectGuid; // 0x0(0x10)
	struct FString BindingName; // 0x10(0x10)
	struct TArray<struct ULiteSequenceTrack*> Tracks; // 0x20(0x10)
};

// Object: ScriptStruct LiteSequence.LiteSequenceComponentBinding
// Size: 0x38 (Inherited: 0x0)
struct FLiteSequenceComponentBinding
{
	struct FGuid ObjectGuid; // 0x0(0x10)
	struct FString BindingName; // 0x10(0x10)
	struct UActorComponent* ComponentTemplate; // 0x20(0x8)
	struct TArray<struct ULiteSequenceTrack*> Tracks; // 0x28(0x10)
};

// Object: ScriptStruct LiteSequence.LiteSequenceSpawnRegister
// Size: 0x60 (Inherited: 0x0)
struct FLiteSequenceSpawnRegister
{
	uint8_t Pad_0x0[0x10]; // 0x0(0x10)
	struct TMap<struct FGuid, struct UActorComponent*> ComponentRegister; // 0x10(0x50)
};

// Object: ScriptStruct LiteSequence.LiteSequencePlaybackParams
// Size: 0x8 (Inherited: 0x0)
struct FLiteSequencePlaybackParams
{
	uint8_t bAutoPlay : 1; // 0x0(0x1), Mask(0x1)
	uint8_t BitPad_0x0_1 : 7; // 0x0(0x1)
	uint8_t Pad_0x1[0x3]; // 0x1(0x3)
	float PlayRate; // 0x4(0x4)
};

// Object: ScriptStruct LiteSequence.LiteSequenceSpawnablePoolManger
// Size: 0x50 (Inherited: 0x0)
struct FLiteSequenceSpawnablePoolManger
{
	uint8_t Pad_0x0[0x50]; // 0x0(0x50)
};

// Object: ScriptStruct LiteSequence.LiteSequencePlaybackConfig
// Size: 0x20 (Inherited: 0x0)
struct FLiteSequencePlaybackConfig
{
	struct FLiteSequencePlaybackParams PlaybackParams; // 0x0(0x8)
	uint8_t bUseRandomRotationOffset : 1; // 0x8(0x1), Mask(0x1)
	uint8_t BitPad_0x8_1 : 7; // 0x8(0x1)
	uint8_t Pad_0x9[0x3]; // 0x9(0x3)
	int32_t AngleRangeLowerBound; // 0xC(0x4)
	int32_t AngleRangeUpperBound; // 0x10(0x4)
	struct FVector SequenceScale; // 0x14(0xC)
};

// Object: ScriptStruct LiteSequence.LiteSequenceDataRow
// Size: 0xC0 (Inherited: 0x10)
struct FLiteSequenceDataRow : FDescRowBase
{
	struct FName ResourceID; // 0x10(0x8)
	struct TSoftObjectPtr<ULiteSequence> LiteSequencePath; // 0x18(0x28)
	struct TSoftObjectPtr<ULiteSequence> LiteSequencePath_LowQuality; // 0x40(0x28)
	struct TSoftObjectPtr<ULiteSequence> LiteSequencePath_HighQuality; // 0x68(0x28)
	struct FName AudioResourceId; // 0x90(0x8)
	uint8_t bLimitByMaxInstanceNum : 1; // 0x98(0x1), Mask(0x1)
	uint8_t BitPad_0x98_1 : 7; // 0x98(0x1)
	uint8_t Pad_0x99[0x3]; // 0x99(0x3)
	int32_t MaxInstanceNum; // 0x9C(0x4)
	struct FLiteSequencePlaybackConfig Config; // 0xA0(0x20)
};

// Object: ScriptStruct LiteSequence.ColorParameterCurves
// Size: 0x108 (Inherited: 0x0)
struct FColorParameterCurves
{
	struct FName ParameterName; // 0x0(0x8)
	struct FLiteSequenceFloatChannel RedCurve; // 0x8(0x40)
	struct FLiteSequenceFloatChannel GreenCurve; // 0x48(0x40)
	struct FLiteSequenceFloatChannel BlueCurve; // 0x88(0x40)
	struct FLiteSequenceFloatChannel AlphaCurve; // 0xC8(0x40)
};

// Object: ScriptStruct LiteSequence.ScalarParameterCurves
// Size: 0x48 (Inherited: 0x0)
struct FScalarParameterCurves
{
	struct FName ParameterName; // 0x0(0x8)
	struct FLiteSequenceFloatChannel ParameterCurve; // 0x8(0x40)
};

// Object: ScriptStruct LiteSequence.PlaybackRange
// Size: 0x8 (Inherited: 0x0)
struct FPlaybackRange
{
	struct FFrameNumber LowerFrameBound; // 0x0(0x4)
	struct FFrameNumber UpperFrameBound; // 0x4(0x4)
};

// Object: Class LiteSequence.LiteSequence
// Size: 0x90 (Inherited: 0x28)
struct ULiteSequence : UObject
{
	DEFINE_UE_CLASS_HELPERS(ULiteSequence, "LiteSequence")

	struct TMap<struct FGuid, struct FLiteSequenceComponentBinding> ComponentBindings; // 0x28(0x50)
	struct FPlaybackRange PlaybackRange; // 0x78(0x8)
	uint64_t TickResolution; // 0x80(0x8)
	uint64_t DisplayRate; // 0x88(0x8)
};

// Object: Class LiteSequence.LiteSequenceConsoleCommand
// Size: 0x28 (Inherited: 0x28)
struct ULiteSequenceConsoleCommand : UObject
{
	DEFINE_UE_CLASS_HELPERS(ULiteSequenceConsoleCommand, "LiteSequenceConsoleCommand")

	// Object: Function LiteSequence.LiteSequenceConsoleCommand.TestPlayLiteSequence
	// Flags: [Final|Exec|Native|Public|HasOutParms]
	// Offset: 0xb06160c
	// Params: [ Num(1) Size(0x8) ]
	void TestPlayLiteSequence(const struct FName& SequenceName);
};

// Object: Class LiteSequence.LiteSequencePerformanceTest
// Size: 0x3E0 (Inherited: 0x370)
struct ALiteSequencePerformanceTest : AActor
{
	DEFINE_UE_CLASS_HELPERS(ALiteSequencePerformanceTest, "LiteSequencePerformanceTest")

	struct FSoftObjectPath LiteSequencePath; // 0x370(0x18)
	struct FSoftObjectPath LevelSequencePath; // 0x388(0x18)
	uint8_t Pad_0x3A0[0x18]; // 0x3A0(0x18)
	double CollectingTime; // 0x3B8(0x8)
	uint8_t Pad_0x3C0[0x10]; // 0x3C0(0x10)
	struct ULiteSequence* LiteSequence; // 0x3D0(0x8)
	struct ULevelSequence* LevelSequence; // 0x3D8(0x8)

	// Object: Function LiteSequence.LiteSequencePerformanceTest.PerformanceTestStart
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xb062e2c
	// Params: [ Num(2) Size(0x8) ]
	void PerformanceTestStart(uint8_t bTestLevelSequence, float InRate);

	// Object: Function LiteSequence.LiteSequencePerformanceTest.PerformanceTestEnd
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xb062e18
	// Params: [ Num(0) Size(0x0) ]
	void PerformanceTestEnd();
};

// Object: Class LiteSequence.InstanceContainer
// Size: 0x370 (Inherited: 0x370)
struct AInstanceContainer : AActor
{
	DEFINE_UE_CLASS_HELPERS(AInstanceContainer, "InstanceContainer")
};

// Object: Class LiteSequence.LiteSequencePlayerComponent
// Size: 0x520 (Inherited: 0xF8)
struct ULiteSequencePlayerComponent : UActorComponent
{
	DEFINE_UE_CLASS_HELPERS(ULiteSequencePlayerComponent, "LiteSequencePlayerComponent")

	uint8_t Pad_0xF8[0x10]; // 0xF8(0x10)
	struct FSoftObjectPath LiteSequencePath; // 0x108(0x18)
	struct FLiteSequencePlaybackParams Params; // 0x120(0x8)
	uint8_t bUseOriginSequenceAsset : 1; // 0x128(0x1), Mask(0x1)
	uint8_t BitPad_0x128_1 : 7; // 0x128(0x1)
	uint8_t Pad_0x129[0x7]; // 0x129(0x7)
	struct FSoftObjectPath OriginSequencePath; // 0x130(0x18)
	float RTPCValue_Character; // 0x148(0x4)
	uint8_t Pad_0x14C[0x4]; // 0x14C(0x4)
	struct FLiteSequenceSpawnRegister SpawnRegister; // 0x150(0x60)
	uint8_t Pad_0x1B0[0xE0]; // 0x1B0(0xE0)
	struct ULiteSequence* Sequence; // 0x290(0x8)
	struct TWeakObjectPtr<struct AActor> AttachOwner; // 0x298(0x8)
	struct AActor* InstanceContainer; // 0x2A0(0x8)
	struct USceneComponent* InstanceSocket; // 0x2A8(0x8)
	struct FFrameNumber StartTime; // 0x2B0(0x4)
	int32_t DurationFrames; // 0x2B4(0x4)
	int32_t CurrentNumLoops; // 0x2B8(0x4)
	int32_t LoopCount; // 0x2BC(0x4)
	uint8_t Pad_0x2C0[0x18]; // 0x2C0(0x18)
	struct USceneComponent* AttachSocket; // 0x2D8(0x8)
	struct FName AttachSocketName; // 0x2E0(0x8)
	struct UGPAudioEventAsset* AudioEventAsset; // 0x2E8(0x8)
	uint8_t Pad_0x2F0[0x230]; // 0x2F0(0x230)

	// Object: Function LiteSequence.LiteSequencePlayerComponent.TryLoadAudioInternal
	// Flags: [Final|Native|Private|HasOutParms|HasDefaults]
	// Offset: 0xb065328
	// Params: [ Num(1) Size(0x18) ]
	void TryLoadAudioInternal(const struct FSoftObjectPath& AudioPath);

	// Object: Function LiteSequence.LiteSequencePlayerComponent.TryLoadAudio
	// Flags: [Final|Native|Private|HasOutParms]
	// Offset: 0xb065274
	// Params: [ Num(1) Size(0x8) ]
	void TryLoadAudio(const struct FName& InAudioID);

	// Object: Function LiteSequence.LiteSequencePlayerComponent.TryLoadAssetInternal
	// Flags: [Final|Native|Private]
	// Offset: 0xb06523c
	// Params: [ Num(1) Size(0x1) ]
	uint8_t TryLoadAssetInternal();

	// Object: Function LiteSequence.LiteSequencePlayerComponent.TryLoadAssetFromDataTable
	// Flags: [Final|Native|Private|HasOutParms]
	// Offset: 0xb06517c
	// Params: [ Num(2) Size(0x9) ]
	uint8_t TryLoadAssetFromDataTable(const struct FName& InResourceID);

	// Object: Function LiteSequence.LiteSequencePlayerComponent.Stop
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xb065168
	// Params: [ Num(0) Size(0x0) ]
	void Stop();

	// Object: Function LiteSequence.LiteSequencePlayerComponent.SetTimeRange
	// Flags: [Final|Native|Public]
	// Offset: 0xb06508c
	// Params: [ Num(2) Size(0x8) ]
	void SetTimeRange(float StartTimeSeconds, float DurationSeconds);

	// Object: Function LiteSequence.LiteSequencePlayerComponent.SetPlaybackTransform
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults]
	// Offset: 0xb064fb0
	// Params: [ Num(1) Size(0x30) ]
	void SetPlaybackTransform(const struct FTransform& TransformOverride);

	// Object: Function LiteSequence.LiteSequencePlayerComponent.SetPlaybackScale
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults]
	// Offset: 0xb064f00
	// Params: [ Num(1) Size(0xC) ]
	void SetPlaybackScale(const struct FVector& InScale);

	// Object: Function LiteSequence.LiteSequencePlayerComponent.SetPlaybackRotation
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults]
	// Offset: 0xb064e50
	// Params: [ Num(1) Size(0xC) ]
	void SetPlaybackRotation(const struct FRotator& InRotation);

	// Object: Function LiteSequence.LiteSequencePlayerComponent.SetPlaybackPosition
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults]
	// Offset: 0xb064da0
	// Params: [ Num(1) Size(0xC) ]
	void SetPlaybackPosition(const struct FVector& InWorldPosition);

	// Object: Function LiteSequence.LiteSequencePlayerComponent.SetPlaybackParams
	// Flags: [Final|Native|Public]
	// Offset: 0xb064cf4
	// Params: [ Num(1) Size(0x8) ]
	void SetPlaybackParams(struct FLiteSequencePlaybackParams InParams);

	// Object: Function LiteSequence.LiteSequencePlayerComponent.SetLooping
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xb064c50
	// Params: [ Num(1) Size(0x4) ]
	void SetLooping(int32_t NumLoops);

	// Object: Function LiteSequence.LiteSequencePlayerComponent.SetFrameRate
	// Flags: [Final|Native|Public]
	// Offset: 0xb064ba4
	// Params: [ Num(1) Size(0x8) ]
	void SetFrameRate(struct FFrameRate FrameRate);

	// Object: Function LiteSequence.LiteSequencePlayerComponent.SetFrameRange
	// Flags: [Final|Native|Public]
	// Offset: 0xb064ac8
	// Params: [ Num(2) Size(0x8) ]
	void SetFrameRange(int32_t StartFrame, int32_t Duration);

	// Object: Function LiteSequence.LiteSequencePlayerComponent.RecycleToPool
	// Flags: [Final|Native|Static|Private]
	// Offset: 0xb064a20
	// Params: [ Num(2) Size(0x9) ]
	static uint8_t RecycleToPool(struct ULiteSequencePlayerComponent* Component);

	// Object: Function LiteSequence.LiteSequencePlayerComponent.RecycleLiteSequencePlayer
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0xb06498c
	// Params: [ Num(1) Size(0x8) ]
	static void RecycleLiteSequencePlayer(struct ULiteSequencePlayerComponent* Component);

	// Object: Function LiteSequence.LiteSequencePlayerComponent.PlayAttachAudio
	// Flags: [Final|Native|Private]
	// Offset: 0xb064978
	// Params: [ Num(0) Size(0x0) ]
	void PlayAttachAudio();

	// Object: Function LiteSequence.LiteSequencePlayerComponent.Play
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xb064964
	// Params: [ Num(0) Size(0x0) ]
	void Play();

	// Object: Function LiteSequence.LiteSequencePlayerComponent.Pause
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xb064950
	// Params: [ Num(0) Size(0x0) ]
	void Pause();

	// Object: Function LiteSequence.LiteSequencePlayerComponent.OnAudioLoaded
	// Flags: [Final|Native|Private|HasOutParms|HasDefaults]
	// Offset: 0xb064890
	// Params: [ Num(1) Size(0x18) ]
	void OnAudioLoaded(const struct FSoftObjectPath& ResourcePaths);

	// Object: Function LiteSequence.LiteSequencePlayerComponent.OnAssetLoaded
	// Flags: [Final|Native|Private|HasOutParms|HasDefaults]
	// Offset: 0xb0647d0
	// Params: [ Num(1) Size(0x18) ]
	void OnAssetLoaded(const struct FSoftObjectPath& ResourcePaths);

	// Object: Function LiteSequence.LiteSequencePlayerComponent.IsStopped
	// Flags: [Final|Native|Public|Const]
	// Offset: 0xb064798
	// Params: [ Num(1) Size(0x1) ]
	uint8_t IsStopped();

	// Object: Function LiteSequence.LiteSequencePlayerComponent.IsPlaying
	// Flags: [Final|Native|Public|Const]
	// Offset: 0xb064760
	// Params: [ Num(1) Size(0x1) ]
	uint8_t IsPlaying();

	// Object: Function LiteSequence.LiteSequencePlayerComponent.IsPaused
	// Flags: [Final|Native|Public|Const]
	// Offset: 0xb064728
	// Params: [ Num(1) Size(0x1) ]
	uint8_t IsPaused();

	// Object: Function LiteSequence.LiteSequencePlayerComponent.IsInObjectPool
	// Flags: [Final|Native|Public|Const]
	// Offset: 0xb06470c
	// Params: [ Num(1) Size(0x1) ]
	uint8_t IsInObjectPool();

	// Object: Function LiteSequence.LiteSequencePlayerComponent.IsBlamedCharacter1P
	// Flags: [Final|Native|Private]
	// Offset: 0xb0646d4
	// Params: [ Num(1) Size(0x1) ]
	uint8_t IsBlamedCharacter1P();

	// Object: Function LiteSequence.LiteSequencePlayerComponent.GetStartTime
	// Flags: [Final|Native|Public|Const]
	// Offset: 0xb0646b4
	// Params: [ Num(1) Size(0x10) ]
	struct FQualifiedFrameTime GetStartTime();

	// Object: Function LiteSequence.LiteSequencePlayerComponent.GetPlaybackTransform
	// Flags: [Final|Native|Public|HasDefaults|Const]
	// Offset: 0xb064648
	// Params: [ Num(1) Size(0x30) ]
	struct FTransform GetPlaybackTransform();

	// Object: Function LiteSequence.LiteSequencePlayerComponent.GetFrameRate
	// Flags: [Final|Native|Public|Const]
	// Offset: 0xb06462c
	// Params: [ Num(1) Size(0x8) ]
	struct FFrameRate GetFrameRate();

	// Object: Function LiteSequence.LiteSequencePlayerComponent.GetFrameDuration
	// Flags: [Final|Native|Public|Const]
	// Offset: 0xb064610
	// Params: [ Num(1) Size(0x4) ]
	int32_t GetFrameDuration();

	// Object: Function LiteSequence.LiteSequencePlayerComponent.GetEndTime
	// Flags: [Final|Native|Public|Const]
	// Offset: 0xb0645e8
	// Params: [ Num(1) Size(0x10) ]
	struct FQualifiedFrameTime GetEndTime();

	// Object: Function LiteSequence.LiteSequencePlayerComponent.GetDuration
	// Flags: [Final|Native|Public|Const]
	// Offset: 0xb0645b4
	// Params: [ Num(1) Size(0x10) ]
	struct FQualifiedFrameTime GetDuration();

	// Object: Function LiteSequence.LiteSequencePlayerComponent.GetCurrentTime
	// Flags: [Final|Native|Public|Const]
	// Offset: 0xb064580
	// Params: [ Num(1) Size(0x10) ]
	struct FQualifiedFrameTime GetCurrentTime();

	// Object: Function LiteSequence.LiteSequencePlayerComponent.CreateLiteSequenceFromOriginResolve
	// Flags: [Final|Native|Public|Const]
	// Offset: 0xb06454c
	// Params: [ Num(1) Size(0x8) ]
	struct ULiteSequence* CreateLiteSequenceFromOriginResolve();

	// Object: Function LiteSequence.LiteSequencePlayerComponent.CreateLiteSequenceFromOriginLoad
	// Flags: [Final|Native|Public|Const]
	// Offset: 0xb064518
	// Params: [ Num(1) Size(0x8) ]
	struct ULiteSequence* CreateLiteSequenceFromOriginLoad();

	// Object: Function LiteSequence.LiteSequencePlayerComponent.CancelLoadAsset
	// Flags: [Final|Native|Private]
	// Offset: 0xb064504
	// Params: [ Num(0) Size(0x0) ]
	void CancelLoadAsset();

	// Object: Function LiteSequence.LiteSequencePlayerComponent.AcquireLiteSequencePlayerInternal
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable]
	// Offset: 0xb0642e0
	// Params: [ Num(7) Size(0x50) ]
	static struct ULiteSequencePlayerComponent* AcquireLiteSequencePlayerInternal(struct UObject* Outer, struct ULiteSequence* LiteSequence, const struct FTransform& PlayTransform, uint8_t bUseObjectPool, uint8_t bUseSubObjectPool, uint8_t bAutoRecycle);

	// Object: Function LiteSequence.LiteSequencePlayerComponent.AcquireLiteSequencePlayer
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable]
	// Offset: 0xb063f84
	// Params: [ Num(12) Size(0x80) ]
	static struct ULiteSequencePlayerComponent* AcquireLiteSequencePlayer(struct UObject* Outer, struct FName InResourceID, const struct FTransform& PlayTransform, struct AActor* CreatorOwner, uint8_t bUseObjectPool, uint8_t bUseSubObjectPool, struct USceneComponent* Socket, struct FName InSocketName, uint8_t bAutoRecycle, struct ACHARACTER* InCharacterToBlame, float RTPCValue);

	// Object: Function LiteSequence.LiteSequencePlayerComponent.AcquireFromPool
	// Flags: [Final|Native|Static|Private]
	// Offset: 0xb063ea4
	// Params: [ Num(3) Size(0x18) ]
	static struct ULiteSequencePlayerComponent* AcquireFromPool(struct UObject* WorldContext, int32_t SubTypeHash);
};

// Object: Class LiteSequence.LiteSequencePlayerManager
// Size: 0xD8 (Inherited: 0x30)
struct ULiteSequencePlayerManager : UGameInstanceSubsystem
{
	DEFINE_UE_CLASS_HELPERS(ULiteSequencePlayerManager, "LiteSequencePlayerManager")

	uint8_t Pad_0x30[0xA8]; // 0x30(0xA8)
};

// Object: Class LiteSequence.LiteSequenceResourceManager
// Size: 0x40 (Inherited: 0x30)
struct ULiteSequenceResourceManager : UDataTableSystemManagerBase
{
	DEFINE_UE_CLASS_HELPERS(ULiteSequenceResourceManager, "LiteSequenceResourceManager")

	uint8_t Pad_0x30[0x10]; // 0x30(0x10)
};

// Object: Class LiteSequence.LiteSequenceTrack
// Size: 0x48 (Inherited: 0x28)
struct ULiteSequenceTrack : UObject
{
	DEFINE_UE_CLASS_HELPERS(ULiteSequenceTrack, "LiteSequenceTrack")

	uint8_t bIsEvalDisabled : 1; // 0x28(0x1), Mask(0x1)
	uint8_t BitPad_0x28_1 : 7; // 0x28(0x1)
	uint8_t Pad_0x29[0x3]; // 0x29(0x3)
	struct FGuid BindingGuid; // 0x2C(0x10)
	struct FPlaybackRange SectionRange; // 0x3C(0x8)
	uint8_t Pad_0x44[0x4]; // 0x44(0x4)
};

// Object: Class LiteSequence.LiteSequence3DTransformTrack
// Size: 0x2D0 (Inherited: 0x48)
struct ULiteSequence3DTransformTrack : ULiteSequenceTrack
{
	DEFINE_UE_CLASS_HELPERS(ULiteSequence3DTransformTrack, "LiteSequence3DTransformTrack")

	struct FLiteSequenceFloatChannel translation[0x3]; // 0x48(0xC0)
	struct FLiteSequenceFloatChannel Rotation[0x3]; // 0x108(0xC0)
	struct FLiteSequenceFloatChannel Scale[0x3]; // 0x1C8(0xC0)
	struct FLiteSequenceFloatChannel ManualWeight; // 0x288(0x40)
	uint8_t bUseQuaternionInterpolation : 1; // 0x2C8(0x1), Mask(0x1)
	uint8_t BitPad_0x2C8_1 : 7; // 0x2C8(0x1)
	uint8_t Pad_0x2C9[0x7]; // 0x2C9(0x7)
};

// Object: Class LiteSequence.LiteSequenceParticleTrack
// Size: 0x78 (Inherited: 0x48)
struct ULiteSequenceParticleTrack : ULiteSequenceTrack
{
	DEFINE_UE_CLASS_HELPERS(ULiteSequenceParticleTrack, "LiteSequenceParticleTrack")

	struct FLiteSequenceParticleChannel ParticleKeys; // 0x48(0x30)
};

// Object: Class LiteSequence.LiteSequenceSpawnTrack
// Size: 0x78 (Inherited: 0x48)
struct ULiteSequenceSpawnTrack : ULiteSequenceTrack
{
	DEFINE_UE_CLASS_HELPERS(ULiteSequenceSpawnTrack, "LiteSequenceSpawnTrack")

	struct FLiteSequenceBoolChannel BoolCurve; // 0x48(0x30)
};

// Object: Class LiteSequence.LiteSequenceComponentMaterialTrack
// Size: 0x68 (Inherited: 0x48)
struct ULiteSequenceComponentMaterialTrack : ULiteSequenceTrack
{
	DEFINE_UE_CLASS_HELPERS(ULiteSequenceComponentMaterialTrack, "LiteSequenceComponentMaterialTrack")

	int32_t MaterialIndex; // 0x44(0x4)
	struct TArray<struct FScalarParameterCurves> Scalars; // 0x48(0x10)
	struct TArray<struct FColorParameterCurves> Colors; // 0x58(0x10)
};

// Object: Class LiteSequence.LiteSequenceSkeletalAnimationTrack
// Size: 0x60 (Inherited: 0x48)
struct ULiteSequenceSkeletalAnimationTrack : ULiteSequenceTrack
{
	DEFINE_UE_CLASS_HELPERS(ULiteSequenceSkeletalAnimationTrack, "LiteSequenceSkeletalAnimationTrack")

	struct UAnimSequenceBase* Animation; // 0x48(0x8)
	struct FFrameNumber FirstLoopStartFrameOffset; // 0x50(0x4)
	struct FFrameNumber StartFrameOffset; // 0x54(0x4)
	struct FFrameNumber EndFrameOffset; // 0x58(0x4)
	float PlayRate; // 0x5C(0x4)
};

} // namespace SDK
