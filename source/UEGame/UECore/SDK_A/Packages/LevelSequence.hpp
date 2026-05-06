#pragma once

#include "../CoreUObject_classes.hpp"
#include "Engine.hpp"
#include "MovieScene.hpp"
#include "UMG.hpp"

namespace SDK
{

// Package: LevelSequence
// Enums: 0
// Structs: 11
// Classes: 13

struct AActor;
struct FMovieSceneObjectBindingID;
struct FMovieSceneSequencePlaybackSettings;
struct UAssetUserData;
struct UCameraComponent;
struct UMediaComponent;
struct UMovieScene;
struct UMovieSceneBindingOverrides;
struct FLevelSequenceCameraSettings;
struct FBoundActorProxy;
struct FLevelSequenceAnimSequenceLinkItem;
struct FLevelSequenceBindingReferenceArray;
struct FLevelSequenceBindingReferences;
struct FLevelSequenceBindingReference;
struct FLevelSequenceObjectReferenceMap;
struct FLevelSequenceLegacyObjectReference;
struct FLevelSequenceObject;
struct FLevelSequenceSnapshotSettings;
struct FLevelSequencePlayerSnapshot;
struct ULevelSequence;
struct ALevelSequenceActor;
struct UAnimSequenceLevelSequenceLink;
struct UDefaultLevelSequenceInstanceData;
struct ILevelSequenceMetaData;
struct ULevelSequenceBurnInInitSettings;
struct ULevelSequenceBurnInOptions;
struct ULevelSequenceAnimSequenceLink;
struct ULevelSequenceBurnIn;
struct ULevelSequenceDirector;
struct ULegacyLevelSequenceDirectorBlueprint;
struct ULevelSequencePlayer;
struct ALevelSequenceMediaController;

// Object: ScriptStruct LevelSequence.LevelSequenceCameraSettings
// Size: 0x2 (Inherited: 0x0)
struct FLevelSequenceCameraSettings
{
	bool bOverrideAspectRatioAxisConstraint; // 0x0(0x1)
	uint8_t AspectRatioAxisConstraint; // 0x1(0x1)
};

// Object: ScriptStruct LevelSequence.BoundActorProxy
// Size: 0x1 (Inherited: 0x0)
struct FBoundActorProxy
{
	uint8_t Pad_0x0[0x1]; // 0x0(0x1)
};

// Object: ScriptStruct LevelSequence.LevelSequenceAnimSequenceLinkItem
// Size: 0x30 (Inherited: 0x0)
struct FLevelSequenceAnimSequenceLinkItem
{
	struct FGuid SkelTrackGuid; // 0x0(0x10)
	struct FSoftObjectPath PathToAnimSequence; // 0x10(0x18)
	bool bExportTransforms; // 0x28(0x1)
	bool bExportCurves; // 0x29(0x1)
	bool bRecordInWorldSpace; // 0x2A(0x1)
	uint8_t Pad_0x2B[0x5]; // 0x2B(0x5)
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

// Object: Class LevelSequence.LevelSequence
// Size: 0x1C8 (Inherited: 0x60)
struct ULevelSequence : UMovieSceneSequence
{
	DEFINE_UE_CLASS_HELPERS(ULevelSequence, "LevelSequence")

	uint8_t Pad_0x60[0x8]; // 0x60(0x8)
	struct UMovieScene* MovieScene; // 0x68(0x8)
	struct FLevelSequenceObjectReferenceMap ObjectReferences; // 0x70(0x50)
	struct FLevelSequenceBindingReferences BindingReferences; // 0xC0(0xA0)
	struct TMap<struct FString, struct FLevelSequenceObject> PossessedObjects; // 0x160(0x50)
	struct UObject* DirectorClass; // 0x1B0(0x8)
	struct TArray<struct UAssetUserData*> AssetUserData; // 0x1B8(0x10)

	// Object: Function LevelSequence.LevelSequence.RemoveMetaDataByClass
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xb271154
	// Params: [ Num(1) Size(0x8) ]
	void RemoveMetaDataByClass(struct UObject* InClass);

	// Object: Function LevelSequence.LevelSequence.FindOrAddMetaDataByClass
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xb271284
	// Params: [ Num(2) Size(0x10) ]
	struct UObject* FindOrAddMetaDataByClass(struct UObject* InClass);

	// Object: Function LevelSequence.LevelSequence.FindMetaDataByClass
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xb271324
	// Params: [ Num(2) Size(0x10) ]
	struct UObject* FindMetaDataByClass(struct UObject* InClass);

	// Object: Function LevelSequence.LevelSequence.CopyMetaData
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xb2711e4
	// Params: [ Num(2) Size(0x10) ]
	struct UObject* CopyMetaData(struct UObject* InMetaData);
};

// Object: Class LevelSequence.LevelSequenceActor
// Size: 0x380 (Inherited: 0x300)
struct ALevelSequenceActor : AActor
{
	DEFINE_UE_CLASS_HELPERS(ALevelSequenceActor, "LevelSequenceActor")

	uint8_t Pad_0x300[0x10]; // 0x300(0x10)
	struct FMovieSceneSequencePlaybackSettings PlaybackSettings; // 0x310(0x14)
	uint8_t Pad_0x324[0x4]; // 0x324(0x4)
	struct ULevelSequencePlayer* SequencePlayer; // 0x328(0x8)
	struct FSoftObjectPath LevelSequence; // 0x330(0x18)
	struct FLevelSequenceCameraSettings CameraSettings; // 0x348(0x2)
	uint8_t Pad_0x34A[0x6]; // 0x34A(0x6)
	struct ULevelSequenceBurnInOptions* BurnInOptions; // 0x350(0x8)
	struct UMovieSceneBindingOverrides* BindingOverrides; // 0x358(0x8)
	uint8_t bAutoPlay : 1; // 0x360(0x1), Mask(0x1)
	uint8_t bOverrideInstanceData : 1; // 0x360(0x1), Mask(0x2)
	uint8_t bReplicatePlayback : 1; // 0x360(0x1), Mask(0x4)
	uint8_t BitPad_0x360_3 : 5; // 0x360(0x1)
	uint8_t Pad_0x361[0x7]; // 0x361(0x7)
	struct UObject* DefaultInstanceData; // 0x368(0x8)
	struct ULevelSequenceBurnIn* BurnInInstance; // 0x370(0x8)
	bool bShowBurnin; // 0x378(0x1)
	uint8_t Pad_0x379[0x7]; // 0x379(0x7)

	// Object: Function LevelSequence.LevelSequenceActor.ShowBurnin
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xb271f74
	// Params: [ Num(0) Size(0x0) ]
	void ShowBurnin();

	// Object: Function LevelSequence.LevelSequenceActor.SetSequence
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xb27204c
	// Params: [ Num(1) Size(0x8) ]
	void SetSequence(struct ULevelSequence* InSequence);

	// Object: Function LevelSequence.LevelSequenceActor.SetReplicatePlayback
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xb271f9c
	// Params: [ Num(1) Size(0x1) ]
	void SetReplicatePlayback(bool ReplicatePlayback);

	// Object: Function LevelSequence.LevelSequenceActor.SetBindingByTag
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0xb271cb8
	// Params: [ Num(3) Size(0x19) ]
	void SetBindingByTag(struct FName BindingTag, const struct TArray<struct AActor*>& Actors, bool bAllowBindingsFromAsset);

	// Object: Function LevelSequence.LevelSequenceActor.SetBinding
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0xb271e04
	// Params: [ Num(3) Size(0x29) ]
	void SetBinding(struct FMovieSceneObjectBindingID Binding, const struct TArray<struct AActor*>& Actors, bool bAllowBindingsFromAsset);

	// Object: Function LevelSequence.LevelSequenceActor.ResetBindings
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xb271768
	// Params: [ Num(0) Size(0x0) ]
	void ResetBindings();

	// Object: Function LevelSequence.LevelSequenceActor.ResetBinding
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xb27177c
	// Params: [ Num(1) Size(0x18) ]
	void ResetBinding(struct FMovieSceneObjectBindingID Binding);

	// Object: Function LevelSequence.LevelSequenceActor.RemoveBindingByTag
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xb271848
	// Params: [ Num(2) Size(0x10) ]
	void RemoveBindingByTag(struct FName Tag, struct AActor* Actor);

	// Object: Function LevelSequence.LevelSequenceActor.RemoveBinding
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xb27192c
	// Params: [ Num(2) Size(0x20) ]
	void RemoveBinding(struct FMovieSceneObjectBindingID Binding, struct AActor* Actor);

	// Object: DelegateFunction LevelSequence.LevelSequenceActor.OnLevelSequenceLoaded__DelegateSignature
	// Flags: [Public|Delegate]
	// Offset: 0x5d8cbc8
	// Params: [ Num(0) Size(0x0) ]
	void OnLevelSequenceLoaded__DelegateSignature();

	// Object: Function LevelSequence.LevelSequenceActor.LoadSequence
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xb2720f4
	// Params: [ Num(1) Size(0x8) ]
	struct ULevelSequence* LoadSequence();

	// Object: Function LevelSequence.LevelSequenceActor.HideBurnin
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xb271f88
	// Params: [ Num(0) Size(0x0) ]
	void HideBurnin();

	// Object: Function LevelSequence.LevelSequenceActor.GetSequencePlayer
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x82f0514
	// Params: [ Num(1) Size(0x8) ]
	struct ULevelSequencePlayer* GetSequencePlayer();

	// Object: Function LevelSequence.LevelSequenceActor.GetSequence
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xb272128
	// Params: [ Num(1) Size(0x8) ]
	struct ULevelSequence* GetSequence();

	// Object: Function LevelSequence.LevelSequenceActor.FindNamedBindings
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xb2715ac
	// Params: [ Num(2) Size(0x18) ]
	struct TArray<struct FMovieSceneObjectBindingID> FindNamedBindings(struct FName Tag);

	// Object: Function LevelSequence.LevelSequenceActor.FindNamedBinding
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xb2716a0
	// Params: [ Num(2) Size(0x20) ]
	struct FMovieSceneObjectBindingID FindNamedBinding(struct FName Tag);

	// Object: Function LevelSequence.LevelSequenceActor.AddBindingByTag
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xb271a38
	// Params: [ Num(3) Size(0x11) ]
	void AddBindingByTag(struct FName BindingTag, struct AActor* Actor, bool bAllowBindingsFromAsset);

	// Object: Function LevelSequence.LevelSequenceActor.AddBinding
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xb271b64
	// Params: [ Num(3) Size(0x21) ]
	void AddBinding(struct FMovieSceneObjectBindingID Binding, struct AActor* Actor, bool bAllowBindingsFromAsset);
};

// Object: Class LevelSequence.AnimSequenceLevelSequenceLink
// Size: 0x50 (Inherited: 0x28)
struct UAnimSequenceLevelSequenceLink : UAssetUserData
{
	DEFINE_UE_CLASS_HELPERS(UAnimSequenceLevelSequenceLink, "AnimSequenceLevelSequenceLink")

	struct FGuid SkelTrackGuid; // 0x28(0x10)
	struct FSoftObjectPath PathToLevelSequence; // 0x38(0x18)
};

// Object: Class LevelSequence.DefaultLevelSequenceInstanceData
// Size: 0x70 (Inherited: 0x28)
struct UDefaultLevelSequenceInstanceData : UObject
{
	DEFINE_UE_CLASS_HELPERS(UDefaultLevelSequenceInstanceData, "DefaultLevelSequenceInstanceData")

	uint8_t Pad_0x28[0x8]; // 0x28(0x8)
	struct AActor* TransformOriginActor; // 0x30(0x8)
	uint8_t Pad_0x38[0x8]; // 0x38(0x8)
	struct FTransform TransformOrigin; // 0x40(0x30)
};

// Object: Class LevelSequence.LevelSequenceMetaData
// Size: 0x28 (Inherited: 0x28)
struct ILevelSequenceMetaData : IInterface
{
	DEFINE_UE_CLASS_HELPERS(ILevelSequenceMetaData, "LevelSequenceMetaData")
};

// Object: Class LevelSequence.LevelSequenceBurnInInitSettings
// Size: 0x28 (Inherited: 0x28)
struct ULevelSequenceBurnInInitSettings : UObject
{
	DEFINE_UE_CLASS_HELPERS(ULevelSequenceBurnInInitSettings, "LevelSequenceBurnInInitSettings")
};

// Object: Class LevelSequence.LevelSequenceBurnInOptions
// Size: 0x50 (Inherited: 0x28)
struct ULevelSequenceBurnInOptions : UObject
{
	DEFINE_UE_CLASS_HELPERS(ULevelSequenceBurnInOptions, "LevelSequenceBurnInOptions")

	bool bUseBurnIn; // 0x28(0x1)
	uint8_t Pad_0x29[0x7]; // 0x29(0x7)
	struct FSoftClassPath BurnInClass; // 0x30(0x18)
	struct ULevelSequenceBurnInInitSettings* Settings; // 0x48(0x8)

	// Object: Function LevelSequence.LevelSequenceBurnInOptions.SetBurnIn
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	// Offset: 0xb27148c
	// Params: [ Num(1) Size(0x18) ]
	void SetBurnIn(struct FSoftClassPath InBurnInClass);
};

// Object: Class LevelSequence.LevelSequenceAnimSequenceLink
// Size: 0x38 (Inherited: 0x28)
struct ULevelSequenceAnimSequenceLink : UAssetUserData
{
	DEFINE_UE_CLASS_HELPERS(ULevelSequenceAnimSequenceLink, "LevelSequenceAnimSequenceLink")

	struct TArray<struct FLevelSequenceAnimSequenceLinkItem> AnimSequenceLinks; // 0x28(0x10)
};

// Object: Class LevelSequence.LevelSequenceBurnIn
// Size: 0x350 (Inherited: 0x290)
struct ULevelSequenceBurnIn : UUserWidget
{
	DEFINE_UE_CLASS_HELPERS(ULevelSequenceBurnIn, "LevelSequenceBurnIn")

	struct FLevelSequencePlayerSnapshot FrameInformation; // 0x290(0xB8)
	struct ALevelSequenceActor* LevelSequenceActor; // 0x348(0x8)

	// Object: Function LevelSequence.LevelSequenceBurnIn.SetSettings
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x5d8cbc8
	// Params: [ Num(1) Size(0x8) ]
	void SetSettings(struct UObject* InSettings);

	// Object: Function LevelSequence.LevelSequenceBurnIn.GetSettingsClass
	// Flags: [Native|Event|Public|BlueprintEvent|Const]
	// Offset: 0xb27229c
	// Params: [ Num(1) Size(0x8) ]
	struct ULevelSequenceBurnInInitSettings* GetSettingsClass();
};

// Object: Class LevelSequence.LevelSequenceDirector
// Size: 0x30 (Inherited: 0x28)
struct ULevelSequenceDirector : UObject
{
	DEFINE_UE_CLASS_HELPERS(ULevelSequenceDirector, "LevelSequenceDirector")

	struct ULevelSequencePlayer* Player; // 0x28(0x8)

	// Object: Function LevelSequence.LevelSequenceDirector.OnCreated
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x5d8cbc8
	// Params: [ Num(0) Size(0x0) ]
	void OnCreated();
};

// Object: Class LevelSequence.LegacyLevelSequenceDirectorBlueprint
// Size: 0xA0 (Inherited: 0xA0)
struct ULegacyLevelSequenceDirectorBlueprint : UBlueprint
{
	DEFINE_UE_CLASS_HELPERS(ULegacyLevelSequenceDirectorBlueprint, "LegacyLevelSequenceDirectorBlueprint")
};

// Object: Class LevelSequence.LevelSequencePlayer
// Size: 0x798 (Inherited: 0x680)
struct ULevelSequencePlayer : UMovieSceneSequencePlayer
{
	DEFINE_UE_CLASS_HELPERS(ULevelSequencePlayer, "LevelSequencePlayer")

	struct FMulticastInlineDelegate OnCameraCut; // 0x680(0x10)
	uint8_t Pad_0x690[0x108]; // 0x690(0x108)

	// Object: Function LevelSequence.LevelSequencePlayer.GetActiveCameraComponent
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xb2723e4
	// Params: [ Num(1) Size(0x8) ]
	struct UCameraComponent* GetActiveCameraComponent();

	// Object: Function LevelSequence.LevelSequencePlayer.CreateLevelSequencePlayer
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0xb27241c
	// Params: [ Num(5) Size(0x38) ]
	static struct ULevelSequencePlayer* CreateLevelSequencePlayer(struct UObject* WorldContextObject, struct ULevelSequence* LevelSequence, struct FMovieSceneSequencePlaybackSettings Settings, struct ALevelSequenceActor*& OutActor);
};

// Object: Class LevelSequence.LevelSequenceMediaController
// Size: 0x328 (Inherited: 0x300)
struct ALevelSequenceMediaController : AActor
{
	DEFINE_UE_CLASS_HELPERS(ALevelSequenceMediaController, "LevelSequenceMediaController")

	uint8_t Pad_0x300[0x8]; // 0x300(0x8)
	struct ALevelSequenceActor* Sequence; // 0x308(0x8)
	struct UMediaComponent* MediaComponent; // 0x310(0x8)
	float ServerStartTimeSeconds; // 0x318(0x4)
	uint8_t Pad_0x31C[0xC]; // 0x31C(0xC)

	// Object: Function LevelSequence.LevelSequenceMediaController.SynchronizeToServer
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xb2725cc
	// Params: [ Num(1) Size(0x4) ]
	void SynchronizeToServer(float DesyncThresholdSeconds);

	// Object: Function LevelSequence.LevelSequenceMediaController.Play
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xb2726ac
	// Params: [ Num(0) Size(0x0) ]
	void Play();

	// Object: Function LevelSequence.LevelSequenceMediaController.OnRep_ServerStartTimeSeconds
	// Flags: [Final|Native|Private]
	// Offset: 0xb2725b8
	// Params: [ Num(0) Size(0x0) ]
	void OnRep_ServerStartTimeSeconds();

	// Object: Function LevelSequence.LevelSequenceMediaController.GetSequence
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xb272674
	// Params: [ Num(1) Size(0x8) ]
	struct ALevelSequenceActor* GetSequence();

	// Object: Function LevelSequence.LevelSequenceMediaController.GetMediaComponent
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xb272690
	// Params: [ Num(1) Size(0x8) ]
	struct UMediaComponent* GetMediaComponent();
};

} // namespace SDK
