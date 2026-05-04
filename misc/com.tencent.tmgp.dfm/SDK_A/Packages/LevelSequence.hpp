#pragma once

#include "../CoreUObject_classes.hpp"
#include "Engine.hpp"
#include "MovieScene.hpp"
#include "UMG.hpp"

namespace SDK
{

// Package: LevelSequence
// Enums: 1
// Structs: 14
// Classes: 13

struct AActor;
enum class EAspectRatioAxisConstraint : uint8_t;
struct FMovieSceneObjectBindingID;
struct FMovieSceneSequencePlaybackSettings;
struct UCameraComponent;
struct UMaterialInterface;
struct UMovieScene;
struct UMovieSceneBindingOverrides;
struct UStaticMeshComponent;
struct FLevelSequenceCameraSettings;
struct FSubLevelSequence;
struct FSubLevelSequenceGroup;
struct FBoundActorProxy;
struct FLevelSequenceBindingReferenceArray;
struct FLevelSequenceBindingReferences;
struct FLevelSequenceBindingReference;
struct FLevelSequenceObjectReferenceMap;
struct FLevelSequenceLegacyObjectReference;
struct FLevelSequenceObject;
struct FLevelSequenceSnapshotSettings;
struct FLevelSequencePlayerSnapshot;
struct FVolumeSequence;
struct FSequenceInfo;
struct ALevelSequenceActor;
struct ULevelSequenceDirector;
struct UDefaultLevelSequenceInstanceData;
struct ILevelSequenceMetaData;
struct UInteriorFogComponent;
struct ULevelSequence;
struct ULevelSequenceBurnInInitSettings;
struct ULevelSequenceBurnInOptions;
struct ULevelSequenceBurnIn;
struct ULegacyLevelSequenceDirectorBlueprint;
struct ULevelSequencePlayer;
struct USubLevelSequenceVolumeManager;
struct USubLevelSequenceVolume;

// Object: Enum LevelSequence.ESubLevelSequenceType
enum class ESubLevelSequenceType : uint8_t
{
	Base = 0,
	Dynamic = 1,
	ESubLevelSequenceType_MAX = 2
};

// Object: ScriptStruct LevelSequence.LevelSequenceCameraSettings
// Size: 0x2 (Inherited: 0x0)
struct FLevelSequenceCameraSettings
{
	uint8_t bOverrideAspectRatioAxisConstraint : 1; // 0x0(0x1), Mask(0x1)
	uint8_t BitPad_0x0_1 : 7; // 0x0(0x1)
	EAspectRatioAxisConstraint AspectRatioAxisConstraint; // 0x1(0x1)
};

// Object: ScriptStruct LevelSequence.SubLevelSequence
// Size: 0x28 (Inherited: 0x0)
struct FSubLevelSequence
{
	struct FSoftObjectPath Sequence; // 0x0(0x18)
	int32_t Priority; // 0x18(0x4)
	float Weight; // 0x1C(0x4)
	uint8_t bEnable : 1; // 0x20(0x1), Mask(0x1)
	uint8_t BitPad_0x20_1 : 7; // 0x20(0x1)
	uint8_t Pad_0x21[0x7]; // 0x21(0x7)
};

// Object: ScriptStruct LevelSequence.SubLevelSequenceGroup
// Size: 0x58 (Inherited: 0x0)
struct FSubLevelSequenceGroup
{
	int32_t GroupPriority; // 0x0(0x4)
	uint8_t Pad_0x4[0x4]; // 0x4(0x4)
	struct TMap<struct FString, struct FSubLevelSequence> SubLevelSequences; // 0x8(0x50)
};

// Object: ScriptStruct LevelSequence.BoundActorProxy
// Size: 0x1 (Inherited: 0x0)
struct FBoundActorProxy
{
	uint8_t Pad_0x0[0x1]; // 0x0(0x1)
};

// Object: ScriptStruct LevelSequence.LevelSequenceBindingReferenceArray
// Size: 0x10 (Inherited: 0x0)
struct FLevelSequenceBindingReferenceArray
{
	struct TArray<struct FLevelSequenceBindingReference> References; // 0x0(0x10)
};

// Object: ScriptStruct LevelSequence.LevelSequenceBindingReferences
// Size: 0xA0 (Inherited: 0x0)
struct FLevelSequenceBindingReferences
{
	struct TMap<struct FGuid, struct FLevelSequenceBindingReferenceArray> BindingIdToReferences; // 0x0(0x50)
	struct TSet<struct FGuid> AnimSequenceInstances; // 0x50(0x50)
};

// Object: ScriptStruct LevelSequence.LevelSequenceBindingReference
// Size: 0x38 (Inherited: 0x0)
struct FLevelSequenceBindingReference
{
	struct FString PackageName; // 0x0(0x10)
	struct FSoftObjectPath ExternalObjectPath; // 0x10(0x18)
	struct FString ObjectPath; // 0x28(0x10)
};

// Object: ScriptStruct LevelSequence.LevelSequenceObjectReferenceMap
// Size: 0x50 (Inherited: 0x0)
struct FLevelSequenceObjectReferenceMap
{
	uint8_t Pad_0x0[0x50]; // 0x0(0x50)
};

// Object: ScriptStruct LevelSequence.LevelSequenceLegacyObjectReference
// Size: 0x20 (Inherited: 0x0)
struct FLevelSequenceLegacyObjectReference
{
	uint8_t Pad_0x0[0x20]; // 0x0(0x20)
};

// Object: ScriptStruct LevelSequence.LevelSequenceObject
// Size: 0x38 (Inherited: 0x0)
struct FLevelSequenceObject
{
	struct TLazyObjectPtr<struct UObject> ObjectOrOwner; // 0x0(0x1C)
	uint8_t Pad_0x1C[0x4]; // 0x1C(0x4)
	struct FString ComponentName; // 0x20(0x10)
	struct TWeakObjectPtr<struct UObject> CachedComponent; // 0x30(0x8)
};

// Object: ScriptStruct LevelSequence.LevelSequenceSnapshotSettings
// Size: 0xC (Inherited: 0x0)
struct FLevelSequenceSnapshotSettings
{
	uint8_t ZeroPadAmount; // 0x0(0x1)
	uint8_t Pad_0x1[0x3]; // 0x1(0x3)
	struct FFrameRate FrameRate; // 0x4(0x8)
};

// Object: ScriptStruct LevelSequence.LevelSequencePlayerSnapshot
// Size: 0xB8 (Inherited: 0x0)
struct FLevelSequencePlayerSnapshot
{
	struct FString MasterName; // 0x0(0x10)
	struct FQualifiedFrameTime MasterTime; // 0x10(0x10)
	struct FQualifiedFrameTime SourceTime; // 0x20(0x10)
	struct FString CurrentShotName; // 0x30(0x10)
	struct FQualifiedFrameTime CurrentShotLocalTime; // 0x40(0x10)
	struct FQualifiedFrameTime CurrentShotSourceTime; // 0x50(0x10)
	struct FString SourceTimecode; // 0x60(0x10)
	struct TSoftObjectPtr<UCameraComponent> CameraComponent; // 0x70(0x28)
	struct FLevelSequenceSnapshotSettings Settings; // 0x98(0xC)
	uint8_t Pad_0xA4[0x4]; // 0xA4(0x4)
	struct ULevelSequence* ActiveShot; // 0xA8(0x8)
	struct FMovieSceneSequenceID ShotID; // 0xB0(0x4)
	uint8_t Pad_0xB4[0x4]; // 0xB4(0x4)
};

// Object: ScriptStruct LevelSequence.VolumeSequence
// Size: 0x20 (Inherited: 0x0)
struct FVolumeSequence
{
	struct FSoftObjectPath Sequence; // 0x0(0x18)
	int32_t Priority; // 0x18(0x4)
	uint8_t Enable : 1; // 0x1C(0x1), Mask(0x1)
	uint8_t BitPad_0x1C_1 : 7; // 0x1C(0x1)
	uint8_t Pad_0x1D[0x3]; // 0x1D(0x3)
};

// Object: ScriptStruct LevelSequence.SequenceInfo
// Size: 0x20 (Inherited: 0x0)
struct FSequenceInfo
{
	uint8_t Pad_0x0[0x20]; // 0x0(0x20)
};

// Object: Class LevelSequence.LevelSequenceActor
// Size: 0x810 (Inherited: 0x370)
struct ALevelSequenceActor : AActor
{
	uint8_t Pad_0x370[0x10]; // 0x370(0x10)
	struct FMovieSceneSequencePlaybackSettings PlaybackSettings; // 0x380(0x14)
	uint8_t Pad_0x394[0x4]; // 0x394(0x4)
	struct ULevelSequencePlayer* SequencePlayer; // 0x398(0x8)
	struct FSoftObjectPath LevelSequence; // 0x3A0(0x18)
	float SubSequenceFadeTime; // 0x3B8(0x4)
	uint8_t Pad_0x3BC[0x4]; // 0x3BC(0x4)
	struct TMap<struct FString, struct FSubLevelSequenceGroup> SubLevelSequenceGroup; // 0x3C0(0x50)
	struct TMap<struct FString, struct FSubLevelSequenceGroup> DynamicSequenceGroup; // 0x410(0x50)
	int32_t DynamicGroupBasePriority; // 0x460(0x4)
	uint8_t Pad_0x464[0x54]; // 0x464(0x54)
	struct TArray<struct AActor*> AdditionalEventReceivers; // 0x4B8(0x10)
	struct FLevelSequenceCameraSettings CameraSettings; // 0x4C8(0x2)
	uint8_t Pad_0x4CA[0x6]; // 0x4CA(0x6)
	struct ULevelSequenceBurnInOptions* BurnInOptions; // 0x4D0(0x8)
	struct UMovieSceneBindingOverrides* BindingOverrides; // 0x4D8(0x8)
	uint8_t PlaybackPriority; // 0x4E0(0x1)
	uint8_t bAutoPlay : 1; // 0x4E1(0x1), Mask(0x1)
	uint8_t bOverrideInstanceData : 1; // 0x4E1(0x1), Mask(0x2)
	uint8_t bReplicatePlayback : 1; // 0x4E1(0x1), Mask(0x4)
	uint8_t BitPad_0x4E1_3 : 5; // 0x4E1(0x1)
	uint8_t Pad_0x4E2[0x6]; // 0x4E2(0x6)
	struct UObject* DefaultInstanceData; // 0x4E8(0x8)
	struct TMap<struct FString, struct FSoftObjectPath> MobileSequencesForSubLevelSequenceVolume; // 0x4F0(0x50)
	struct TMap<struct FString, struct FSoftObjectPath> PC_SequencesForSubLevelSequenceVolume; // 0x540(0x50)
	int32_t SequenceManagerPriority; // 0x590(0x4)
	uint8_t Pad_0x594[0x26C]; // 0x594(0x26C)
	struct ULevelSequenceBurnIn* BurnInInstance; // 0x800(0x8)
	uint8_t bShowBurnin : 1; // 0x808(0x1), Mask(0x1)
	uint8_t BitPad_0x808_1 : 7; // 0x808(0x1)
	uint8_t Pad_0x809[0x7]; // 0x809(0x7)


	// Object: Function LevelSequence.LevelSequenceActor.ShowBurnin
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x167b698c
	// Params: [ Num(0) Size(0x0) ]
	void ShowBurnin();

	// Object: Function LevelSequence.LevelSequenceActor.SetSubSequenceCombination
	// Flags: [Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x167b6854
	// Params: [ Num(2) Size(0x51) ]
	void SetSubSequenceCombination(const struct TSet<struct FString>& InState, uint8_t bImmediate);

	// Object: Function LevelSequence.LevelSequenceActor.SetSequence
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x167b67b0
	// Params: [ Num(1) Size(0x8) ]
	void SetSequence(struct ULevelSequence* InSequence);

	// Object: Function LevelSequence.LevelSequenceActor.SetReplicatePlayback
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x167b6704
	// Params: [ Num(1) Size(0x1) ]
	void SetReplicatePlayback(uint8_t ReplicatePlayback);

	// Object: Function LevelSequence.LevelSequenceActor.SetPriority
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x167b6660
	// Params: [ Num(1) Size(0x1) ]
	void SetPriority(uint8_t InPriority);

	// Object: Function LevelSequence.LevelSequenceActor.SetEventReceivers
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x167b6528
	// Params: [ Num(1) Size(0x10) ]
	void SetEventReceivers(struct TArray<struct AActor*> AdditionalReceivers);

	// Object: Function LevelSequence.LevelSequenceActor.SetBindingByTag
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x167b63ec
	// Params: [ Num(3) Size(0x19) ]
	void SetBindingByTag(struct FName BindingTag, const struct TArray<struct AActor*>& Actors, uint8_t bAllowBindingsFromAsset);

	// Object: Function LevelSequence.LevelSequenceActor.SetBinding
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x167b628c
	// Params: [ Num(3) Size(0x29) ]
	void SetBinding(struct FMovieSceneObjectBindingID Binding, const struct TArray<struct AActor*>& Actors, uint8_t bAllowBindingsFromAsset);

	// Object: Function LevelSequence.LevelSequenceActor.ResetBindings
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x167b6278
	// Params: [ Num(0) Size(0x0) ]
	void ResetBindings();

	// Object: Function LevelSequence.LevelSequenceActor.ResetBinding
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x167b61b0
	// Params: [ Num(1) Size(0x18) ]
	void ResetBinding(struct FMovieSceneObjectBindingID Binding);

	// Object: Function LevelSequence.LevelSequenceActor.RemoveBindingByTag
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x167b60d4
	// Params: [ Num(2) Size(0x10) ]
	void RemoveBindingByTag(struct FName Tag, struct AActor* Actor);

	// Object: Function LevelSequence.LevelSequenceActor.RemoveBinding
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x167b5fd0
	// Params: [ Num(2) Size(0x20) ]
	void RemoveBinding(struct FMovieSceneObjectBindingID Binding, struct AActor* Actor);

	// Object: DelegateFunction LevelSequence.LevelSequenceActor.OnLevelSequenceLoaded__DelegateSignature
	// Flags: [Public|Delegate]
	// Offset: 0x101d2e88
	// Params: [ Num(0) Size(0x0) ]
	void OnLevelSequenceLoaded__DelegateSignature();

	// Object: Function LevelSequence.LevelSequenceActor.LoadSequence
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x167b5f9c
	// Params: [ Num(1) Size(0x8) ]
	struct ULevelSequence* LoadSequence();

	// Object: Function LevelSequence.LevelSequenceActor.HideBurnin
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x167b5f88
	// Params: [ Num(0) Size(0x0) ]
	void HideBurnin();

	// Object: Function LevelSequence.LevelSequenceActor.GetSequencePlayer
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x167b5f54
	// Params: [ Num(1) Size(0x8) ]
	struct ULevelSequencePlayer* GetSequencePlayer();

	// Object: Function LevelSequence.LevelSequenceActor.GetSequence
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x167b5f20
	// Params: [ Num(1) Size(0x8) ]
	struct ULevelSequence* GetSequence();

	// Object: Function LevelSequence.LevelSequenceActor.GetPCSequencesUsedForSublevelSequenceVolume
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x167b5ee8
	// Params: [ Num(1) Size(0x50) ]
	struct TMap<struct FString, struct FSoftObjectPath> GetPCSequencesUsedForSublevelSequenceVolume();

	// Object: Function LevelSequence.LevelSequenceActor.GetMobileSequencesUsedForSublevelSequenceVolume
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x167b5eb0
	// Params: [ Num(1) Size(0x50) ]
	struct TMap<struct FString, struct FSoftObjectPath> GetMobileSequencesUsedForSublevelSequenceVolume();

	// Object: Function LevelSequence.LevelSequenceActor.FindNamedBindings
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x167b5dc0
	// Params: [ Num(2) Size(0x18) ]
	struct TArray<struct FMovieSceneObjectBindingID> FindNamedBindings(struct FName Tag);

	// Object: Function LevelSequence.LevelSequenceActor.FindNamedBinding
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x167b5cfc
	// Params: [ Num(2) Size(0x20) ]
	struct FMovieSceneObjectBindingID FindNamedBinding(struct FName Tag);

	// Object: Function LevelSequence.LevelSequenceActor.ApplySubSequenceCombination
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x167b5b80
	// Params: [ Num(3) Size(0x68) ]
	void ApplySubSequenceCombination(const struct TSet<struct FString>& InState, float InSeconds, const struct TArray<struct FString>& VolumeSequenceStates);

	// Object: Function LevelSequence.LevelSequenceActor.AddBindingByTag
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x167b5a60
	// Params: [ Num(3) Size(0x11) ]
	void AddBindingByTag(struct FName BindingTag, struct AActor* Actor, uint8_t bAllowBindingsFromAsset);

	// Object: Function LevelSequence.LevelSequenceActor.AddBinding
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x167b5918
	// Params: [ Num(3) Size(0x21) ]
	void AddBinding(struct FMovieSceneObjectBindingID Binding, struct AActor* Actor, uint8_t bAllowBindingsFromAsset);
	DEFINE_UE_CLASS_HELPERS(ALevelSequenceActor, "LevelSequenceActor")

};

// Object: Class LevelSequence.LevelSequenceDirector
// Size: 0x30 (Inherited: 0x28)
struct ULevelSequenceDirector : UObject
{
	struct ULevelSequencePlayer* Player; // 0x28(0x8)


	// Object: Function LevelSequence.LevelSequenceDirector.OnCreated
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(0) Size(0x0) ]
	void OnCreated();
	DEFINE_UE_CLASS_HELPERS(ULevelSequenceDirector, "LevelSequenceDirector")

};

// Object: Class LevelSequence.DefaultLevelSequenceInstanceData
// Size: 0x80 (Inherited: 0x28)
struct UDefaultLevelSequenceInstanceData : UObject
{
	uint8_t Pad_0x28[0x8]; // 0x28(0x8)
	struct AActor* TransformOriginActor; // 0x30(0x8)
	uint8_t Pad_0x38[0x8]; // 0x38(0x8)
	struct FTransform TransformOrigin; // 0x40(0x30)
	uint8_t bConsiderWorldOriginRebasing : 1; // 0x70(0x1), Mask(0x1)
	uint8_t BitPad_0x70_1 : 7; // 0x70(0x1)
	uint8_t Pad_0x71[0xF]; // 0x71(0xF)
	DEFINE_UE_CLASS_HELPERS(UDefaultLevelSequenceInstanceData, "DefaultLevelSequenceInstanceData")

};

// Object: Class LevelSequence.LevelSequenceMetaData
// Size: 0x28 (Inherited: 0x28)
struct ILevelSequenceMetaData : IInterface
{	DEFINE_UE_CLASS_HELPERS(ILevelSequenceMetaData, "LevelSequenceMetaData")

};

// Object: Class LevelSequence.InteriorFogComponent
// Size: 0x5F0 (Inherited: 0x5B0)
struct UInteriorFogComponent : UBoxComponent
{
	struct UMaterialInterface* InteriorFogMaterial; // 0x5A8(0x8)
	struct FLinearColor Albedo; // 0x5B0(0x10)
	float ExtinctionScale; // 0x5C0(0x4)
	float ExcludeRange; // 0x5C4(0x4)
	float ExcludeOpacity; // 0x5C8(0x4)
	uint8_t bUseOverrideSettings : 1; // 0x5CC(0x1), Mask(0x1)
	float ExtendVisibleDistance; // 0x5D0(0x4)
	uint8_t bUseOverrideVisibleDistance : 1; // 0x5D4(0x1), Mask(0x1)
	float InsideSwitch; // 0x5D8(0x4)
	uint8_t BitPad_0x5DC_2 : 6; // 0x5DC(0x1)
	uint8_t Pad_0x5DD[0x3]; // 0x5DD(0x3)
	struct UStaticMeshComponent* FogMesh; // 0x5E0(0x8)
	float CurExtendVisibleDistance; // 0x5E8(0x4)
	uint8_t Pad_0x5EC[0x4]; // 0x5EC(0x4)


	// Object: Function LevelSequence.InteriorFogComponent.SetExtinctionScale
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x167b5398
	// Params: [ Num(1) Size(0x4) ]
	void SetExtinctionScale(float NewExtinctionScale);

	// Object: Function LevelSequence.InteriorFogComponent.SetExtendVisibleDistance
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x167b52f4
	// Params: [ Num(1) Size(0x4) ]
	void SetExtendVisibleDistance(float NewFadeDistance);

	// Object: Function LevelSequence.InteriorFogComponent.SetExcludeRange
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x167b5250
	// Params: [ Num(1) Size(0x4) ]
	void SetExcludeRange(float NewExcludeRange);

	// Object: Function LevelSequence.InteriorFogComponent.SetExcludeOpacity
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x167b51ac
	// Params: [ Num(1) Size(0x4) ]
	void SetExcludeOpacity(float NewExcludeOpacity);

	// Object: Function LevelSequence.InteriorFogComponent.SetAlbedo
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x167b5108
	// Params: [ Num(1) Size(0x10) ]
	void SetAlbedo(struct FLinearColor NewAlbedo);
	DEFINE_UE_CLASS_HELPERS(UInteriorFogComponent, "InteriorFogComponent")

};

// Object: Class LevelSequence.LevelSequence
// Size: 0x518 (Inherited: 0x3C0)
struct ULevelSequence : UMovieSceneSequence
{
	struct UMovieScene* MovieScene; // 0x3C0(0x8)
	uint8_t bIgnoreReferenceObjectCache : 1; // 0x3C8(0x1), Mask(0x1)
	uint8_t BitPad_0x3C8_1 : 7; // 0x3C8(0x1)
	uint8_t Pad_0x3C9[0x7]; // 0x3C9(0x7)
	struct FLevelSequenceObjectReferenceMap ObjectReferences; // 0x3D0(0x50)
	struct FLevelSequenceBindingReferences BindingReferences; // 0x420(0xA0)
	struct TMap<struct FString, struct FLevelSequenceObject> PossessedObjects; // 0x4C0(0x50)
	struct UObject* DirectorClass; // 0x510(0x8)


	// Object: Function LevelSequence.LevelSequence.RemoveMetaDataByClass
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x167b5630
	// Params: [ Num(1) Size(0x8) ]
	void RemoveMetaDataByClass(struct UObject* InClass);

	// Object: Function LevelSequence.LevelSequence.FindOrAddMetaDataByClass
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x167b5594
	// Params: [ Num(2) Size(0x10) ]
	struct UObject* FindOrAddMetaDataByClass(struct UObject* InClass);

	// Object: Function LevelSequence.LevelSequence.FindMetaDataByClass
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x167b54f8
	// Params: [ Num(2) Size(0x10) ]
	struct UObject* FindMetaDataByClass(struct UObject* InClass);

	// Object: Function LevelSequence.LevelSequence.CopyMetaData
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x167b545c
	// Params: [ Num(2) Size(0x10) ]
	struct UObject* CopyMetaData(struct UObject* InMetadata);
	DEFINE_UE_CLASS_HELPERS(ULevelSequence, "LevelSequence")

};

// Object: Class LevelSequence.LevelSequenceBurnInInitSettings
// Size: 0x28 (Inherited: 0x28)
struct ULevelSequenceBurnInInitSettings : UObject
{	DEFINE_UE_CLASS_HELPERS(ULevelSequenceBurnInInitSettings, "LevelSequenceBurnInInitSettings")

};

// Object: Class LevelSequence.LevelSequenceBurnInOptions
// Size: 0x50 (Inherited: 0x28)
struct ULevelSequenceBurnInOptions : UObject
{
	uint8_t bUseBurnIn : 1; // 0x28(0x1), Mask(0x1)
	uint8_t BitPad_0x28_1 : 7; // 0x28(0x1)
	uint8_t Pad_0x29[0x7]; // 0x29(0x7)
	struct FSoftClassPath BurnInClass; // 0x30(0x18)
	struct ULevelSequenceBurnInInitSettings* Settings; // 0x48(0x8)


	// Object: Function LevelSequence.LevelSequenceBurnInOptions.SetBurnIn
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x167b5800
	// Params: [ Num(1) Size(0x18) ]
	void SetBurnIn(struct FSoftClassPath InBurnInClass);
	DEFINE_UE_CLASS_HELPERS(ULevelSequenceBurnInOptions, "LevelSequenceBurnInOptions")

};

// Object: Class LevelSequence.LevelSequenceBurnIn
// Size: 0x3B8 (Inherited: 0x2F8)
struct ULevelSequenceBurnIn : UUserWidget
{
	struct FLevelSequencePlayerSnapshot FrameInformation; // 0x2F8(0xB8)
	struct ALevelSequenceActor* LevelSequenceActor; // 0x3B0(0x8)


	// Object: Function LevelSequence.LevelSequenceBurnIn.SetSettings
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(1) Size(0x8) ]
	void SetSettings(struct UObject* InSettings);

	// Object: Function LevelSequence.LevelSequenceBurnIn.GetSettingsClass
	// Flags: [Native|Event|Public|BlueprintEvent|Const]
	// Offset: 0x167b6c70
	// Params: [ Num(1) Size(0x8) ]
	struct ULevelSequenceBurnInInitSettings* GetSettingsClass();
	DEFINE_UE_CLASS_HELPERS(ULevelSequenceBurnIn, "LevelSequenceBurnIn")

};

// Object: Class LevelSequence.LegacyLevelSequenceDirectorBlueprint
// Size: 0xA0 (Inherited: 0xA0)
struct ULegacyLevelSequenceDirectorBlueprint : UBlueprint
{	DEFINE_UE_CLASS_HELPERS(ULegacyLevelSequenceDirectorBlueprint, "LegacyLevelSequenceDirectorBlueprint")

};

// Object: Class LevelSequence.LevelSequencePlayer
// Size: 0xB58 (Inherited: 0xA38)
struct ULevelSequencePlayer : UMovieSceneSequencePlayer
{
	struct FMulticastInlineDelegate OnCameraCut; // 0xA38(0x10)
	uint8_t Pad_0xA48[0x110]; // 0xA48(0x110)


	// Object: Function LevelSequence.LevelSequencePlayer.GetActiveCameraComponent
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x167b6fc8
	// Params: [ Num(1) Size(0x8) ]
	struct UCameraComponent* GetActiveCameraComponent();

	// Object: Function LevelSequence.LevelSequencePlayer.CreateLevelSequencePlayer
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x167b6e40
	// Params: [ Num(5) Size(0x38) ]
	static struct ULevelSequencePlayer* CreateLevelSequencePlayer(struct UObject* WorldContextObject, struct ULevelSequence* LevelSequence, struct FMovieSceneSequencePlaybackSettings Settings, struct ALevelSequenceActor*& OutActor);
	DEFINE_UE_CLASS_HELPERS(ULevelSequencePlayer, "LevelSequencePlayer")

};

// Object: Class LevelSequence.SubLevelSequenceVolumeManager
// Size: 0x178 (Inherited: 0x30)
struct USubLevelSequenceVolumeManager : UWorldSubsystem
{
	uint8_t Pad_0x30[0x148]; // 0x30(0x148)
	DEFINE_UE_CLASS_HELPERS(USubLevelSequenceVolumeManager, "SubLevelSequenceVolumeManager")

};

// Object: Class LevelSequence.SubLevelSequenceVolume
// Size: 0x790 (Inherited: 0x5B0)
struct USubLevelSequenceVolume : UBoxComponent
{
	struct FString GroupName; // 0x5A8(0x10)
	uint8_t bUseOverrideSubSequences : 1; // 0x5B8(0x1), Mask(0x1)
	struct TMap<struct FString, struct FVolumeSequence> MobileSeq; // 0x5C0(0x50)
	struct TMap<struct FString, struct FVolumeSequence> PcSeq; // 0x610(0x50)
	struct TMap<struct FString, struct FVolumeSequence> GeneralSeq; // 0x660(0x50)
	uint8_t bUseTimeToFade : 1; // 0x6B0(0x1), Mask(0x1)
	uint8_t BitPad_0x6B0_2 : 6; // 0x6B0(0x1)
	uint8_t bUseDisToFade : 1; // 0x6B1(0x1), Mask(0x1)
	uint8_t BitPad_0x6B1_1 : 7; // 0x6B1(0x1)
	uint8_t bInsideVolumeFade : 1; // 0x6B2(0x1), Mask(0x1)
	uint8_t BitPad_0x6B2_1 : 7; // 0x6B2(0x1)
	uint8_t Pad_0x6B3[0x1]; // 0x6B3(0x1)
	float FadeDistance; // 0x6B4(0x4)
	uint8_t bUseVolumeSkyLight : 1; // 0x6B8(0x1), Mask(0x1)
	uint8_t BitPad_0x6B8_1 : 7; // 0x6B8(0x1)
	uint8_t bForbidFog : 1; // 0x6B9(0x1), Mask(0x1)
	uint8_t BitPad_0x6B9_1 : 7; // 0x6B9(0x1)
	uint8_t Pad_0x6BA[0x6]; // 0x6BA(0x6)
	struct UInteriorFogComponent* InteriorFog; // 0x6C0(0x8)
	uint8_t Pad_0x6C8[0xC8]; // 0x6C8(0xC8)


	// Object: Function LevelSequence.SubLevelSequenceVolume.SetVolumeSequence
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x167b7118
	// Params: [ Num(3) Size(0x2C) ]
	void SetVolumeSequence(struct FString SequenceNameInManager, struct FSoftObjectPath Path, int32_t Priority);

	// Object: Function LevelSequence.SubLevelSequenceVolume.SetGroupName
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x167b7020
	// Params: [ Num(1) Size(0x10) ]
	void SetGroupName(struct FString InGroupName);
	DEFINE_UE_CLASS_HELPERS(USubLevelSequenceVolume, "SubLevelSequenceVolume")

};

} // namespace SDK
