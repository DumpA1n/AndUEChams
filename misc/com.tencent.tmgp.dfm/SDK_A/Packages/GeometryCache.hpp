#pragma once

#include "../CoreUObject_classes.hpp"
#include "Engine.hpp"

namespace SDK
{

// Package: GeometryCache
// Enums: 0
// Structs: 4
// Classes: 11

struct UMaterialInterface;
struct FTrackRenderData;
struct FGeometryCacheMeshData;
struct FGeometryCacheVertexInfo;
struct FGeometryCacheMeshBatchInfo;
struct UGeometryCache;
struct AGeometryCacheActor;
struct UGeometryCacheCodecBase;
struct UGeometryCacheCodecRaw;
struct UGeometryCacheCodecV1;
struct UGeometryCacheComponent;
struct UGeometryCacheTrack;
struct UGeometryCacheTrack_FlipbookAnimation;
struct UGeometryCacheTrackStreamable;
struct UGeometryCacheTrack_TransformAnimation;
struct UGeometryCacheTrack_TransformGroupAnimation;

// Object: ScriptStruct GeometryCache.TrackRenderData
// Size: 0x70 (Inherited: 0x0)
struct FTrackRenderData
{
	uint8_t Pad_0x0[0x70]; // 0x0(0x70)
};

// Object: ScriptStruct GeometryCache.GeometryCacheMeshData
// Size: 0xA8 (Inherited: 0x0)
struct FGeometryCacheMeshData
{
	uint8_t Pad_0x0[0xA8]; // 0x0(0xA8)
};

// Object: ScriptStruct GeometryCache.GeometryCacheVertexInfo
// Size: 0x8 (Inherited: 0x0)
struct FGeometryCacheVertexInfo
{
	uint8_t Pad_0x0[0x8]; // 0x0(0x8)
};

// Object: ScriptStruct GeometryCache.GeometryCacheMeshBatchInfo
// Size: 0xC (Inherited: 0x0)
struct FGeometryCacheMeshBatchInfo
{
	uint8_t Pad_0x0[0xC]; // 0x0(0xC)
};

// Object: Class GeometryCache.GeometryCache
// Size: 0x68 (Inherited: 0x28)
struct UGeometryCache : UObject
{
	uint8_t Pad_0x28[0x8]; // 0x28(0x8)
	struct TArray<struct UMaterialInterface*> Materials; // 0x30(0x10)
	struct TArray<struct UGeometryCacheTrack*> Tracks; // 0x40(0x10)
	uint8_t Pad_0x50[0x10]; // 0x50(0x10)
	int32_t StartFrame; // 0x60(0x4)
	int32_t EndFrame; // 0x64(0x4)
	DEFINE_UE_CLASS_HELPERS(UGeometryCache, "GeometryCache")

};

// Object: Class GeometryCache.GeometryCacheActor
// Size: 0x378 (Inherited: 0x370)
struct AGeometryCacheActor : AActor
{
	struct UGeometryCacheComponent* GeometryCacheComponent; // 0x370(0x8)


	// Object: Function GeometryCache.GeometryCacheActor.GetGeometryCacheComponent
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x8e2a968
	// Params: [ Num(1) Size(0x8) ]
	struct UGeometryCacheComponent* GetGeometryCacheComponent();
	DEFINE_UE_CLASS_HELPERS(AGeometryCacheActor, "GeometryCacheActor")

};

// Object: Class GeometryCache.GeometryCacheCodecBase
// Size: 0x38 (Inherited: 0x28)
struct UGeometryCacheCodecBase : UObject
{
	struct TArray<int32_t> TopologyRanges; // 0x28(0x10)
	DEFINE_UE_CLASS_HELPERS(UGeometryCacheCodecBase, "GeometryCacheCodecBase")

};

// Object: Class GeometryCache.GeometryCacheCodecRaw
// Size: 0x40 (Inherited: 0x38)
struct UGeometryCacheCodecRaw : UGeometryCacheCodecBase
{
	int32_t DummyProperty; // 0x38(0x4)
	uint8_t Pad_0x3C[0x4]; // 0x3C(0x4)
	DEFINE_UE_CLASS_HELPERS(UGeometryCacheCodecRaw, "GeometryCacheCodecRaw")

};

// Object: Class GeometryCache.GeometryCacheCodecV1
// Size: 0x40 (Inherited: 0x38)
struct UGeometryCacheCodecV1 : UGeometryCacheCodecBase
{
	uint8_t Pad_0x38[0x8]; // 0x38(0x8)
	DEFINE_UE_CLASS_HELPERS(UGeometryCacheCodecV1, "GeometryCacheCodecV1")

};

// Object: Class GeometryCache.GeometryCacheComponent
// Size: 0x740 (Inherited: 0x6F0)
struct UGeometryCacheComponent : UMeshComponent
{
	struct UGeometryCache* GeometryCache; // 0x6E8(0x8)
	uint8_t bRunning : 1; // 0x6F0(0x1), Mask(0x1)
	uint8_t bLooping : 1; // 0x6F1(0x1), Mask(0x1)
	float StartTimeOffset; // 0x6F4(0x4)
	float PlaybackSpeed; // 0x6F8(0x4)
	int32_t NumTracks; // 0x6FC(0x4)
	float ElapsedTime; // 0x700(0x4)
	uint8_t BitPad_0x708_2 : 6; // 0x708(0x1)
	uint8_t Pad_0x709[0x2B]; // 0x709(0x2B)
	float Duration; // 0x734(0x4)
	uint8_t bManualTick : 1; // 0x738(0x1), Mask(0x1)
	uint8_t BitPad_0x738_1 : 7; // 0x738(0x1)
	uint8_t Pad_0x739[0x7]; // 0x739(0x7)


	// Object: Function GeometryCache.GeometryCacheComponent.TickAtThisTime
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x8e2af78
	// Params: [ Num(4) Size(0x7) ]
	void TickAtThisTime(float Time, uint8_t bInIsRunning, uint8_t bInBackwards, uint8_t bInIsLooping);

	// Object: Function GeometryCache.GeometryCacheComponent.Stop
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x8e2af64
	// Params: [ Num(0) Size(0x0) ]
	void Stop();

	// Object: Function GeometryCache.GeometryCacheComponent.SetStartTimeOffset
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x8e2aec0
	// Params: [ Num(1) Size(0x4) ]
	void SetStartTimeOffset(float NewStartTimeOffset);

	// Object: Function GeometryCache.GeometryCacheComponent.SetPlaybackSpeed
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x8e2ae1c
	// Params: [ Num(1) Size(0x4) ]
	void SetPlaybackSpeed(float NewPlaybackSpeed);

	// Object: Function GeometryCache.GeometryCacheComponent.SetLooping
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x8e2ad70
	// Params: [ Num(1) Size(0x1) ]
	void SetLooping(uint8_t bNewLooping);

	// Object: Function GeometryCache.GeometryCacheComponent.SetGeometryCache
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x8e2acc0
	// Params: [ Num(2) Size(0x9) ]
	uint8_t SetGeometryCache(struct UGeometryCache* NewGeomCache);

	// Object: Function GeometryCache.GeometryCacheComponent.PlayReversedFromEnd
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x8e2acac
	// Params: [ Num(0) Size(0x0) ]
	void PlayReversedFromEnd();

	// Object: Function GeometryCache.GeometryCacheComponent.PlayReversed
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x8e2ac98
	// Params: [ Num(0) Size(0x0) ]
	void PlayReversed();

	// Object: Function GeometryCache.GeometryCacheComponent.PlayFromStart
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x8e2ac84
	// Params: [ Num(0) Size(0x0) ]
	void PlayFromStart();

	// Object: Function GeometryCache.GeometryCacheComponent.Play
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x8e2ac70
	// Params: [ Num(0) Size(0x0) ]
	void Play();

	// Object: Function GeometryCache.GeometryCacheComponent.Pause
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x8e2ac5c
	// Params: [ Num(0) Size(0x0) ]
	void Pause();

	// Object: Function GeometryCache.GeometryCacheComponent.IsPlayingReversed
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x8e2ac24
	// Params: [ Num(1) Size(0x1) ]
	uint8_t IsPlayingReversed();

	// Object: Function GeometryCache.GeometryCacheComponent.IsPlaying
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x8e2abec
	// Params: [ Num(1) Size(0x1) ]
	uint8_t IsPlaying();

	// Object: Function GeometryCache.GeometryCacheComponent.IsLooping
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x8e2abb4
	// Params: [ Num(1) Size(0x1) ]
	uint8_t IsLooping();

	// Object: Function GeometryCache.GeometryCacheComponent.GetStartTimeOffset
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x8e2ab80
	// Params: [ Num(1) Size(0x4) ]
	float GetStartTimeOffset();

	// Object: Function GeometryCache.GeometryCacheComponent.GetPlaybackSpeed
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x8e2ab4c
	// Params: [ Num(1) Size(0x4) ]
	float GetPlaybackSpeed();

	// Object: Function GeometryCache.GeometryCacheComponent.GetPlaybackDirection
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x8e2ab18
	// Params: [ Num(1) Size(0x4) ]
	float GetPlaybackDirection();

	// Object: Function GeometryCache.GeometryCacheComponent.GetNumberOfFrames
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x8e2aae4
	// Params: [ Num(1) Size(0x4) ]
	int32_t GetNumberOfFrames();

	// Object: Function GeometryCache.GeometryCacheComponent.GetDuration
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x8e2aab0
	// Params: [ Num(1) Size(0x4) ]
	float GetDuration();

	// Object: Function GeometryCache.GeometryCacheComponent.GetAnimationTime
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x8e2aa7c
	// Params: [ Num(1) Size(0x4) ]
	float GetAnimationTime();
	DEFINE_UE_CLASS_HELPERS(UGeometryCacheComponent, "GeometryCacheComponent")

};

// Object: Class GeometryCache.GeometryCacheTrack
// Size: 0x58 (Inherited: 0x28)
struct UGeometryCacheTrack : UObject
{
	float Duration; // 0x28(0x4)
	uint8_t Pad_0x2C[0x2C]; // 0x2C(0x2C)
	DEFINE_UE_CLASS_HELPERS(UGeometryCacheTrack, "GeometryCacheTrack")

};

// Object: Class GeometryCache.GeometryCacheTrack_FlipbookAnimation
// Size: 0x78 (Inherited: 0x58)
struct UGeometryCacheTrack_FlipbookAnimation : UGeometryCacheTrack
{
	uint32_t NumMeshSamples; // 0x54(0x4)
	uint8_t Pad_0x5C[0x1C]; // 0x5C(0x1C)


	// Object: Function GeometryCache.GeometryCacheTrack_FlipbookAnimation.AddMeshSample
	// Flags: [Final|Native|Public|HasOutParms]
	// Offset: 0x8e2b194
	// Params: [ Num(2) Size(0xAC) ]
	void AddMeshSample(const struct FGeometryCacheMeshData& MeshData, float SampleTime);
	DEFINE_UE_CLASS_HELPERS(UGeometryCacheTrack_FlipbookAnimation, "GeometryCacheTrack_FlipbookAnimation")

};

// Object: Class GeometryCache.GeometryCacheTrackStreamable
// Size: 0x178 (Inherited: 0x58)
struct UGeometryCacheTrackStreamable : UGeometryCacheTrack
{
	struct UGeometryCacheCodecBase* Codec; // 0x58(0x8)
	uint8_t Pad_0x60[0x110]; // 0x60(0x110)
	float StartSampleTime; // 0x170(0x4)
	uint8_t Pad_0x174[0x4]; // 0x174(0x4)
	DEFINE_UE_CLASS_HELPERS(UGeometryCacheTrackStreamable, "GeometryCacheTrackStreamable")

};

// Object: Class GeometryCache.GeometryCacheTrack_TransformAnimation
// Size: 0x100 (Inherited: 0x58)
struct UGeometryCacheTrack_TransformAnimation : UGeometryCacheTrack
{
	uint8_t Pad_0x58[0xA8]; // 0x58(0xA8)


	// Object: Function GeometryCache.GeometryCacheTrack_TransformAnimation.SetMesh
	// Flags: [Final|Native|Public|HasOutParms]
	// Offset: 0x8e2b2c8
	// Params: [ Num(1) Size(0xA8) ]
	void SetMesh(const struct FGeometryCacheMeshData& NewMeshData);
	DEFINE_UE_CLASS_HELPERS(UGeometryCacheTrack_TransformAnimation, "GeometryCacheTrack_TransformAnimation")

};

// Object: Class GeometryCache.GeometryCacheTrack_TransformGroupAnimation
// Size: 0x100 (Inherited: 0x58)
struct UGeometryCacheTrack_TransformGroupAnimation : UGeometryCacheTrack
{
	uint8_t Pad_0x58[0xA8]; // 0x58(0xA8)


	// Object: Function GeometryCache.GeometryCacheTrack_TransformGroupAnimation.SetMesh
	// Flags: [Final|Native|Public|HasOutParms]
	// Offset: 0x8e2b3a4
	// Params: [ Num(1) Size(0xA8) ]
	void SetMesh(const struct FGeometryCacheMeshData& NewMeshData);
	DEFINE_UE_CLASS_HELPERS(UGeometryCacheTrack_TransformGroupAnimation, "GeometryCacheTrack_TransformGroupAnimation")

};

} // namespace SDK
