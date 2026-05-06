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
	DEFINE_UE_CLASS_HELPERS(UGeometryCache, "GeometryCache")

	uint8_t Pad_0x28[0x8]; // 0x28(0x8)
	struct TArray<struct UMaterialInterface*> Materials; // 0x30(0x10)
	struct TArray<struct UGeometryCacheTrack*> Tracks; // 0x40(0x10)
	uint8_t Pad_0x50[0x10]; // 0x50(0x10)
	int32_t StartFrame; // 0x60(0x4)
	int32_t EndFrame; // 0x64(0x4)
};

// Object: Class GeometryCache.GeometryCacheActor
// Size: 0x308 (Inherited: 0x300)
struct AGeometryCacheActor : AActor
{
	DEFINE_UE_CLASS_HELPERS(AGeometryCacheActor, "GeometryCacheActor")

	struct UGeometryCacheComponent* GeometryCacheComponent; // 0x300(0x8)

	// Object: Function GeometryCache.GeometryCacheActor.GetGeometryCacheComponent
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3f92a88
	// Params: [ Num(1) Size(0x8) ]
	struct UGeometryCacheComponent* GetGeometryCacheComponent();
};

// Object: Class GeometryCache.GeometryCacheCodecBase
// Size: 0x38 (Inherited: 0x28)
struct UGeometryCacheCodecBase : UObject
{
	DEFINE_UE_CLASS_HELPERS(UGeometryCacheCodecBase, "GeometryCacheCodecBase")

	struct TArray<int32_t> TopologyRanges; // 0x28(0x10)
};

// Object: Class GeometryCache.GeometryCacheCodecRaw
// Size: 0x40 (Inherited: 0x38)
struct UGeometryCacheCodecRaw : UGeometryCacheCodecBase
{
	DEFINE_UE_CLASS_HELPERS(UGeometryCacheCodecRaw, "GeometryCacheCodecRaw")

	int32_t DummyProperty; // 0x38(0x4)
	uint8_t Pad_0x3C[0x4]; // 0x3C(0x4)
};

// Object: Class GeometryCache.GeometryCacheCodecV1
// Size: 0x40 (Inherited: 0x38)
struct UGeometryCacheCodecV1 : UGeometryCacheCodecBase
{
	DEFINE_UE_CLASS_HELPERS(UGeometryCacheCodecV1, "GeometryCacheCodecV1")

	uint8_t Pad_0x38[0x8]; // 0x38(0x8)
};

// Object: Class GeometryCache.GeometryCacheComponent
// Size: 0x720 (Inherited: 0x6D0)
struct UGeometryCacheComponent : UMeshComponent
{
	DEFINE_UE_CLASS_HELPERS(UGeometryCacheComponent, "GeometryCacheComponent")

	struct UGeometryCache* GeometryCache; // 0x6C8(0x8)
	bool bRunning; // 0x6D0(0x1)
	bool bLooping; // 0x6D1(0x1)
	float StartTimeOffset; // 0x6D4(0x4)
	float PlaybackSpeed; // 0x6D8(0x4)
	int32_t NumTracks; // 0x6DC(0x4)
	float ElapsedTime; // 0x6E0(0x4)
	uint8_t Pad_0x6EA[0x2A]; // 0x6EA(0x2A)
	float Duration; // 0x714(0x4)
	bool bManualTick; // 0x718(0x1)
	uint8_t Pad_0x719[0x7]; // 0x719(0x7)

	// Object: Function GeometryCache.GeometryCacheComponent.TickAtThisTime
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3f92ae8
	// Params: [ Num(4) Size(0x7) ]
	void TickAtThisTime(float Time, bool bInIsRunning, bool bInBackwards, bool bInIsLooping);

	// Object: Function GeometryCache.GeometryCacheComponent.Stop
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3f93104
	// Params: [ Num(0) Size(0x0) ]
	void Stop();

	// Object: Function GeometryCache.GeometryCacheComponent.SetStartTimeOffset
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3f92d40
	// Params: [ Num(1) Size(0x4) ]
	void SetStartTimeOffset(float NewStartTimeOffset);

	// Object: Function GeometryCache.GeometryCacheComponent.SetPlaybackSpeed
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3f92ed0
	// Params: [ Num(1) Size(0x4) ]
	void SetPlaybackSpeed(float NewPlaybackSpeed);

	// Object: Function GeometryCache.GeometryCacheComponent.SetLooping
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3f92fac
	// Params: [ Num(1) Size(0x1) ]
	void SetLooping(bool bNewLooping);

	// Object: Function GeometryCache.GeometryCacheComponent.SetGeometryCache
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3f92e1c
	// Params: [ Num(2) Size(0x9) ]
	bool SetGeometryCache(struct UGeometryCache* NewGeomCache);

	// Object: Function GeometryCache.GeometryCacheComponent.PlayReversedFromEnd
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3f9312c
	// Params: [ Num(0) Size(0x0) ]
	void PlayReversedFromEnd();

	// Object: Function GeometryCache.GeometryCacheComponent.PlayReversed
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3f93140
	// Params: [ Num(0) Size(0x0) ]
	void PlayReversed();

	// Object: Function GeometryCache.GeometryCacheComponent.PlayFromStart
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3f93154
	// Params: [ Num(0) Size(0x0) ]
	void PlayFromStart();

	// Object: Function GeometryCache.GeometryCacheComponent.Play
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3f93168
	// Params: [ Num(0) Size(0x0) ]
	void Play();

	// Object: Function GeometryCache.GeometryCacheComponent.Pause
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3f93118
	// Params: [ Num(0) Size(0x0) ]
	void Pause();

	// Object: Function GeometryCache.GeometryCacheComponent.IsPlayingReversed
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3f93094
	// Params: [ Num(1) Size(0x1) ]
	bool IsPlayingReversed();

	// Object: Function GeometryCache.GeometryCacheComponent.IsPlaying
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3f930cc
	// Params: [ Num(1) Size(0x1) ]
	bool IsPlaying();

	// Object: Function GeometryCache.GeometryCacheComponent.IsLooping
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3f9305c
	// Params: [ Num(1) Size(0x1) ]
	bool IsLooping();

	// Object: Function GeometryCache.GeometryCacheComponent.GetStartTimeOffset
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3f92de8
	// Params: [ Num(1) Size(0x4) ]
	float GetStartTimeOffset();

	// Object: Function GeometryCache.GeometryCacheComponent.GetPlaybackSpeed
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3f92f78
	// Params: [ Num(1) Size(0x4) ]
	float GetPlaybackSpeed();

	// Object: Function GeometryCache.GeometryCacheComponent.GetPlaybackDirection
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3f92cd8
	// Params: [ Num(1) Size(0x4) ]
	float GetPlaybackDirection();

	// Object: Function GeometryCache.GeometryCacheComponent.GetNumberOfFrames
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3f92c70
	// Params: [ Num(1) Size(0x4) ]
	int32_t GetNumberOfFrames();

	// Object: Function GeometryCache.GeometryCacheComponent.GetDuration
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3f92ca4
	// Params: [ Num(1) Size(0x4) ]
	float GetDuration();

	// Object: Function GeometryCache.GeometryCacheComponent.GetAnimationTime
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3f92d0c
	// Params: [ Num(1) Size(0x4) ]
	float GetAnimationTime();
};

// Object: Class GeometryCache.GeometryCacheTrack
// Size: 0x58 (Inherited: 0x28)
struct UGeometryCacheTrack : UObject
{
	DEFINE_UE_CLASS_HELPERS(UGeometryCacheTrack, "GeometryCacheTrack")

	float Duration; // 0x28(0x4)
	uint8_t Pad_0x2C[0x2C]; // 0x2C(0x2C)
};

// Object: Class GeometryCache.GeometryCacheTrack_FlipbookAnimation
// Size: 0x78 (Inherited: 0x58)
struct UGeometryCacheTrack_FlipbookAnimation : UGeometryCacheTrack
{
	DEFINE_UE_CLASS_HELPERS(UGeometryCacheTrack_FlipbookAnimation, "GeometryCacheTrack_FlipbookAnimation")

	uint32_t NumMeshSamples; // 0x54(0x4)
	uint8_t Pad_0x5C[0x1C]; // 0x5C(0x1C)

	// Object: Function GeometryCache.GeometryCacheTrack_FlipbookAnimation.AddMeshSample
	// Flags: [Final|Native|Public|HasOutParms]
	// Offset: 0x3f93220
	// Params: [ Num(2) Size(0xAC) ]
	void AddMeshSample(const struct FGeometryCacheMeshData& MeshData, float SampleTime);
};

// Object: Class GeometryCache.GeometryCacheTrackStreamable
// Size: 0xD0 (Inherited: 0x58)
struct UGeometryCacheTrackStreamable : UGeometryCacheTrack
{
	DEFINE_UE_CLASS_HELPERS(UGeometryCacheTrackStreamable, "GeometryCacheTrackStreamable")

	struct UGeometryCacheCodecBase* Codec; // 0x58(0x8)
	uint8_t Pad_0x60[0x68]; // 0x60(0x68)
	float StartSampleTime; // 0xC8(0x4)
	uint8_t Pad_0xCC[0x4]; // 0xCC(0x4)
};

// Object: Class GeometryCache.GeometryCacheTrack_TransformAnimation
// Size: 0x100 (Inherited: 0x58)
struct UGeometryCacheTrack_TransformAnimation : UGeometryCacheTrack
{
	DEFINE_UE_CLASS_HELPERS(UGeometryCacheTrack_TransformAnimation, "GeometryCacheTrack_TransformAnimation")

	uint8_t Pad_0x58[0xA8]; // 0x58(0xA8)

	// Object: Function GeometryCache.GeometryCacheTrack_TransformAnimation.SetMesh
	// Flags: [Final|Native|Public|HasOutParms]
	// Offset: 0x3f93358
	// Params: [ Num(1) Size(0xA8) ]
	void SetMesh(const struct FGeometryCacheMeshData& NewMeshData);
};

// Object: Class GeometryCache.GeometryCacheTrack_TransformGroupAnimation
// Size: 0x100 (Inherited: 0x58)
struct UGeometryCacheTrack_TransformGroupAnimation : UGeometryCacheTrack
{
	DEFINE_UE_CLASS_HELPERS(UGeometryCacheTrack_TransformGroupAnimation, "GeometryCacheTrack_TransformGroupAnimation")

	uint8_t Pad_0x58[0xA8]; // 0x58(0xA8)

	// Object: Function GeometryCache.GeometryCacheTrack_TransformGroupAnimation.SetMesh
	// Flags: [Final|Native|Public|HasOutParms]
	// Offset: 0x3f93434
	// Params: [ Num(1) Size(0xA8) ]
	void SetMesh(const struct FGeometryCacheMeshData& NewMeshData);
};

} // namespace SDK
