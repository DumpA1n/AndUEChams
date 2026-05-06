#pragma once

#include "../CoreUObject_classes.hpp"
#include "Engine.hpp"
#include "ProceduralMeshComponent.hpp"
#include "SlateCore.hpp"
#include "UMG.hpp"

namespace SDK
{

// Package: SpinePlugin
// Enums: 0
// Structs: 2
// Classes: 9

struct AActor;
struct UMaterialInstanceDynamic;
struct UMaterialInterface;
struct UTexture2D;
struct FSpineEvent;
struct FSpineAnimationStateMixData;
struct USpineAtlasAsset;
struct USpineBoneDriverComponent;
struct USpineBoneFollowerComponent;
struct UTrackEntry;
struct USpineSkeletonComponent;
struct USpineSkeletonAnimationComponent;
struct USpineSkeletonDataAsset;
struct USpineSkeletonRendererComponent;
struct USpineWidget;

// Object: ScriptStruct SpinePlugin.SpineEvent
// Size: 0x30 (Inherited: 0x0)
struct FSpineEvent
{
	struct FString Name; // 0x0(0x10)
	struct FString StringValue; // 0x10(0x10)
	int32_t IntValue; // 0x20(0x4)
	float FloatValue; // 0x24(0x4)
	float Time; // 0x28(0x4)
	uint8_t Pad_0x2C[0x4]; // 0x2C(0x4)
};

// Object: ScriptStruct SpinePlugin.SpineAnimationStateMixData
// Size: 0x28 (Inherited: 0x0)
struct FSpineAnimationStateMixData
{
	struct FString From; // 0x0(0x10)
	struct FString To; // 0x10(0x10)
	float Mix; // 0x20(0x4)
	uint8_t Pad_0x24[0x4]; // 0x24(0x4)
};

// Object: Class SpinePlugin.SpineAtlasAsset
// Size: 0x60 (Inherited: 0x30)
struct USpineAtlasAsset : UPrimaryDataAsset
{
	DEFINE_UE_CLASS_HELPERS(USpineAtlasAsset, "SpineAtlasAsset")

	struct TArray<struct UTexture2D*> atlasPages; // 0x30(0x10)
	uint8_t Pad_0x40[0x8]; // 0x40(0x8)
	struct FString rawData; // 0x48(0x10)
	struct FName atlasFileName; // 0x58(0x8)
};

// Object: Class SpinePlugin.SpineBoneDriverComponent
// Size: 0x250 (Inherited: 0x230)
struct USpineBoneDriverComponent : USceneComponent
{
	DEFINE_UE_CLASS_HELPERS(USpineBoneDriverComponent, "SpineBoneDriverComponent")

	struct AActor* Target; // 0x228(0x8)
	struct FString BoneName; // 0x230(0x10)
	bool UseComponentTransform; // 0x240(0x1)
	bool UsePosition; // 0x241(0x1)
	bool UseRotation; // 0x242(0x1)
	bool UseScale; // 0x243(0x1)
	struct USpineSkeletonComponent* lastBoundComponent; // 0x248(0x8)

	// Object: Function SpinePlugin.SpineBoneDriverComponent.BeforeUpdateWorldTransform
	// Flags: [Final|Native|Protected]
	// Offset: 0x503b0b0
	// Params: [ Num(1) Size(0x8) ]
	void BeforeUpdateWorldTransform(struct USpineSkeletonComponent* Skeleton);
};

// Object: Class SpinePlugin.SpineBoneFollowerComponent
// Size: 0x250 (Inherited: 0x230)
struct USpineBoneFollowerComponent : USceneComponent
{
	DEFINE_UE_CLASS_HELPERS(USpineBoneFollowerComponent, "SpineBoneFollowerComponent")

	struct AActor* Target; // 0x228(0x8)
	struct FString BoneName; // 0x230(0x10)
	bool UseComponentTransform; // 0x240(0x1)
	bool UsePosition; // 0x241(0x1)
	bool UseRotation; // 0x242(0x1)
	bool UseScale; // 0x243(0x1)
	uint8_t Pad_0x24C[0x4]; // 0x24C(0x4)
};

// Object: Class SpinePlugin.TrackEntry
// Size: 0x90 (Inherited: 0x28)
struct UTrackEntry : UObject
{
	DEFINE_UE_CLASS_HELPERS(UTrackEntry, "TrackEntry")

	struct FMulticastInlineDelegate animationStart; // 0x28(0x10)
	struct FMulticastInlineDelegate AnimationInterrupt; // 0x38(0x10)
	struct FMulticastInlineDelegate AnimationEvent; // 0x48(0x10)
	struct FMulticastInlineDelegate AnimationComplete; // 0x58(0x10)
	struct FMulticastInlineDelegate animationEnd; // 0x68(0x10)
	struct FMulticastInlineDelegate AnimationDispose; // 0x78(0x10)
	uint8_t Pad_0x88[0x8]; // 0x88(0x8)

	// Object: Function SpinePlugin.TrackEntry.SetTrackTime
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x503b838
	// Params: [ Num(1) Size(0x4) ]
	void SetTrackTime(float trackTime);

	// Object: Function SpinePlugin.TrackEntry.SetTrackEnd
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x503b748
	// Params: [ Num(1) Size(0x4) ]
	void SetTrackEnd(float trackEnd);

	// Object: Function SpinePlugin.TrackEntry.SetTimeScale
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x503b658
	// Params: [ Num(1) Size(0x4) ]
	void SetTimeScale(float TimeScale);

	// Object: Function SpinePlugin.TrackEntry.SetMixTime
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x503b478
	// Params: [ Num(1) Size(0x4) ]
	void SetMixTime(float mixTime);

	// Object: Function SpinePlugin.TrackEntry.SetMixDuration
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x503b388
	// Params: [ Num(1) Size(0x4) ]
	void SetMixDuration(float mixDuration);

	// Object: Function SpinePlugin.TrackEntry.SetLoop
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x503bfb8
	// Params: [ Num(1) Size(0x1) ]
	void SetLoop(bool Loop);

	// Object: Function SpinePlugin.TrackEntry.SetEventThreshold
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x503bec8
	// Params: [ Num(1) Size(0x4) ]
	void SetEventThreshold(float eventThreshold);

	// Object: Function SpinePlugin.TrackEntry.SetDrawOrderThreshold
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x503bce8
	// Params: [ Num(1) Size(0x4) ]
	void SetDrawOrderThreshold(float drawOrderThreshold);

	// Object: Function SpinePlugin.TrackEntry.SetDelay
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x503b928
	// Params: [ Num(1) Size(0x4) ]
	void SetDelay(float Delay);

	// Object: Function SpinePlugin.TrackEntry.SetAttachmentThreshold
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x503bdd8
	// Params: [ Num(1) Size(0x4) ]
	void SetAttachmentThreshold(float attachmentThreshold);

	// Object: Function SpinePlugin.TrackEntry.SetAnimationStart
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x503bbf8
	// Params: [ Num(1) Size(0x4) ]
	void SetAnimationStart(float animationStart);

	// Object: Function SpinePlugin.TrackEntry.SetAnimationLast
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x503ba18
	// Params: [ Num(1) Size(0x4) ]
	void SetAnimationLast(float animationLast);

	// Object: Function SpinePlugin.TrackEntry.SetAnimationEnd
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x503bb08
	// Params: [ Num(1) Size(0x4) ]
	void SetAnimationEnd(float animationEnd);

	// Object: Function SpinePlugin.TrackEntry.SetAlpha
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x503b568
	// Params: [ Num(1) Size(0x4) ]
	void SetAlpha(float Alpha);

	// Object: Function SpinePlugin.TrackEntry.isValidAnimation
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x503b1cc
	// Params: [ Num(1) Size(0x1) ]
	bool isValidAnimation();

	// Object: Function SpinePlugin.TrackEntry.GetTrackTime
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x503b8e4
	// Params: [ Num(1) Size(0x4) ]
	float GetTrackTime();

	// Object: Function SpinePlugin.TrackEntry.GetTrackIndex
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x503c0ac
	// Params: [ Num(1) Size(0x4) ]
	int32_t GetTrackIndex();

	// Object: Function SpinePlugin.TrackEntry.GetTrackEnd
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x503b7f4
	// Params: [ Num(1) Size(0x4) ]
	float GetTrackEnd();

	// Object: Function SpinePlugin.TrackEntry.GetTimeScale
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x503b704
	// Params: [ Num(1) Size(0x4) ]
	float GetTimeScale();

	// Object: Function SpinePlugin.TrackEntry.GetMixTime
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x503b524
	// Params: [ Num(1) Size(0x4) ]
	float GetMixTime();

	// Object: Function SpinePlugin.TrackEntry.GetMixDuration
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x503b434
	// Params: [ Num(1) Size(0x4) ]
	float GetMixDuration();

	// Object: Function SpinePlugin.TrackEntry.GetLoop
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x503c06c
	// Params: [ Num(1) Size(0x1) ]
	bool GetLoop();

	// Object: Function SpinePlugin.TrackEntry.GetEventThreshold
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x503bf74
	// Params: [ Num(1) Size(0x4) ]
	float GetEventThreshold();

	// Object: Function SpinePlugin.TrackEntry.GetDrawOrderThreshold
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x503bd94
	// Params: [ Num(1) Size(0x4) ]
	float GetDrawOrderThreshold();

	// Object: Function SpinePlugin.TrackEntry.GetDelay
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x503b9d4
	// Params: [ Num(1) Size(0x4) ]
	float GetDelay();

	// Object: Function SpinePlugin.TrackEntry.GetAttachmentThreshold
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x503be84
	// Params: [ Num(1) Size(0x4) ]
	float GetAttachmentThreshold();

	// Object: Function SpinePlugin.TrackEntry.GetAnimationStart
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x503bca4
	// Params: [ Num(1) Size(0x4) ]
	float GetAnimationStart();

	// Object: Function SpinePlugin.TrackEntry.getAnimationName
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x503b238
	// Params: [ Num(1) Size(0x10) ]
	struct FString getAnimationName();

	// Object: Function SpinePlugin.TrackEntry.GetAnimationLast
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x503bac4
	// Params: [ Num(1) Size(0x4) ]
	float GetAnimationLast();

	// Object: Function SpinePlugin.TrackEntry.GetAnimationEnd
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x503bbb4
	// Params: [ Num(1) Size(0x4) ]
	float GetAnimationEnd();

	// Object: Function SpinePlugin.TrackEntry.getAnimationDuration
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x503b1f0
	// Params: [ Num(1) Size(0x4) ]
	float getAnimationDuration();

	// Object: Function SpinePlugin.TrackEntry.GetAlpha
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x503b614
	// Params: [ Num(1) Size(0x4) ]
	float GetAlpha();
};

// Object: Class SpinePlugin.SpineSkeletonComponent
// Size: 0x138 (Inherited: 0xE0)
struct USpineSkeletonComponent : UActorComponent
{
	DEFINE_UE_CLASS_HELPERS(USpineSkeletonComponent, "SpineSkeletonComponent")

	struct USpineAtlasAsset* Atlas; // 0xE0(0x8)
	struct USpineSkeletonDataAsset* SkeletonData; // 0xE8(0x8)
	struct FMulticastInlineDelegate BeforeUpdateWorldTransform; // 0xF0(0x10)
	struct FMulticastInlineDelegate AfterUpdateWorldTransform; // 0x100(0x10)
	uint8_t Pad_0x110[0x8]; // 0x110(0x8)
	struct USpineAtlasAsset* lastAtlas; // 0x118(0x8)
	uint8_t Pad_0x120[0x8]; // 0x120(0x8)
	struct USpineSkeletonDataAsset* lastData; // 0x128(0x8)
	uint8_t Pad_0x130[0x8]; // 0x130(0x8)

	// Object: Function SpinePlugin.SpineSkeletonComponent.UpdateWorldTransform
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x503d494
	// Params: [ Num(0) Size(0x0) ]
	void UpdateWorldTransform();

	// Object: Function SpinePlugin.SpineSkeletonComponent.SetToSetupPose
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x503d480
	// Params: [ Num(0) Size(0x0) ]
	void SetToSetupPose();

	// Object: Function SpinePlugin.SpineSkeletonComponent.SetSlotsToSetupPose
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x503d458
	// Params: [ Num(0) Size(0x0) ]
	void SetSlotsToSetupPose();

	// Object: Function SpinePlugin.SpineSkeletonComponent.SetSlotColor
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x503cdc0
	// Params: [ Num(2) Size(0x14) ]
	void SetSlotColor(struct FString SlotName, struct FColor Color);

	// Object: Function SpinePlugin.SpineSkeletonComponent.SetSkins
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x503da40
	// Params: [ Num(2) Size(0x11) ]
	bool SetSkins(struct TArray<struct FString>& SkinNames);

	// Object: Function SpinePlugin.SpineSkeletonComponent.SetSkin
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x503d92c
	// Params: [ Num(2) Size(0x11) ]
	bool SetSkin(struct FString SkinName);

	// Object: Function SpinePlugin.SpineSkeletonComponent.SetScaleY
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x503d2d4
	// Params: [ Num(1) Size(0x4) ]
	void SetScaleY(float ScaleY);

	// Object: Function SpinePlugin.SpineSkeletonComponent.SetScaleX
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x503d3b0
	// Params: [ Num(1) Size(0x4) ]
	void SetScaleX(float ScaleX);

	// Object: Function SpinePlugin.SpineSkeletonComponent.SetBoneWorldPosition
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable]
	// Offset: 0x503d4a8
	// Params: [ Num(2) Size(0x1C) ]
	void SetBoneWorldPosition(struct FString BoneName, const struct FVector& position);

	// Object: Function SpinePlugin.SpineSkeletonComponent.SetBonesToSetupPose
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x503d46c
	// Params: [ Num(0) Size(0x0) ]
	void SetBonesToSetupPose();

	// Object: Function SpinePlugin.SpineSkeletonComponent.SetAttachment
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x503d670
	// Params: [ Num(3) Size(0x21) ]
	bool SetAttachment(struct FString SlotName, struct FString AttachmentName);

	// Object: Function SpinePlugin.SpineSkeletonComponent.HasSlot
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x503cf00
	// Params: [ Num(2) Size(0x11) ]
	bool HasSlot(struct FString SlotName);

	// Object: Function SpinePlugin.SpineSkeletonComponent.HasSkin
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x503d818
	// Params: [ Num(2) Size(0x11) ]
	bool HasSkin(struct FString SkinName);

	// Object: Function SpinePlugin.SpineSkeletonComponent.HasBone
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x503d0d0
	// Params: [ Num(2) Size(0x11) ]
	bool HasBone(struct FString BoneName);

	// Object: Function SpinePlugin.SpineSkeletonComponent.HasAnimation
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x503cbf0
	// Params: [ Num(2) Size(0x11) ]
	bool HasAnimation(struct FString AnimationName);

	// Object: Function SpinePlugin.SpineSkeletonComponent.GetSlots
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	// Offset: 0x503d014
	// Params: [ Num(1) Size(0x10) ]
	void GetSlots(struct TArray<struct FString>& Slots);

	// Object: Function SpinePlugin.SpineSkeletonComponent.GetSkins
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	// Offset: 0x503db08
	// Params: [ Num(1) Size(0x10) ]
	void GetSkins(struct TArray<struct FString>& Skins);

	// Object: Function SpinePlugin.SpineSkeletonComponent.GetScaleY
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x503d2a0
	// Params: [ Num(1) Size(0x4) ]
	float GetScaleY();

	// Object: Function SpinePlugin.SpineSkeletonComponent.GetScaleX
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x503d37c
	// Params: [ Num(1) Size(0x4) ]
	float GetScaleX();

	// Object: Function SpinePlugin.SpineSkeletonComponent.GetBoneWorldTransform
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x503d5a4
	// Params: [ Num(2) Size(0x40) ]
	struct FTransform GetBoneWorldTransform(struct FString BoneName);

	// Object: Function SpinePlugin.SpineSkeletonComponent.GetBones
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	// Offset: 0x503d1e4
	// Params: [ Num(1) Size(0x10) ]
	void GetBones(struct TArray<struct FString>& Bones);

	// Object: Function SpinePlugin.SpineSkeletonComponent.GetAnimations
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	// Offset: 0x503cd04
	// Params: [ Num(1) Size(0x10) ]
	void GetAnimations(struct TArray<struct FString>& Animations);

	// Object: Function SpinePlugin.SpineSkeletonComponent.getAnimationDuration
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x503cae4
	// Params: [ Num(2) Size(0x14) ]
	float getAnimationDuration(struct FString AnimationName);
};

// Object: Class SpinePlugin.SpineSkeletonAnimationComponent
// Size: 0x238 (Inherited: 0x138)
struct USpineSkeletonAnimationComponent : USpineSkeletonComponent
{
	DEFINE_UE_CLASS_HELPERS(USpineSkeletonAnimationComponent, "SpineSkeletonAnimationComponent")

	struct FMulticastInlineDelegate animationStart; // 0x138(0x10)
	struct FMulticastInlineDelegate AnimationInterrupt; // 0x148(0x10)
	struct FMulticastInlineDelegate AnimationEvent; // 0x158(0x10)
	struct FMulticastInlineDelegate AnimationComplete; // 0x168(0x10)
	struct FMulticastInlineDelegate animationEnd; // 0x178(0x10)
	struct FMulticastInlineDelegate AnimationDispose; // 0x188(0x10)
	struct FString PreviewAnimation; // 0x198(0x10)
	struct FString PreviewSkin; // 0x1A8(0x10)
	uint8_t Pad_0x1B8[0x8]; // 0x1B8(0x8)
	struct TSet<struct UTrackEntry*> trackEntries; // 0x1C0(0x50)
	bool bAutoPlaying; // 0x210(0x1)
	uint8_t Pad_0x211[0x27]; // 0x211(0x27)

	// Object: Function SpinePlugin.SpineSkeletonAnimationComponent.SetTimeScale
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x503c858
	// Params: [ Num(1) Size(0x4) ]
	void SetTimeScale(float TimeScale);

	// Object: Function SpinePlugin.SpineSkeletonAnimationComponent.SetPlaybackTime
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x503c900
	// Params: [ Num(2) Size(0x5) ]
	void SetPlaybackTime(float InPlaybackTime, bool bCallDelegates);

	// Object: Function SpinePlugin.SpineSkeletonAnimationComponent.SetEmptyAnimation
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x503c3ac
	// Params: [ Num(3) Size(0x10) ]
	struct UTrackEntry* SetEmptyAnimation(int32_t TrackIndex, float mixDuration);

	// Object: Function SpinePlugin.SpineSkeletonAnimationComponent.SetAutoPlay
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x503c9f0
	// Params: [ Num(1) Size(0x1) ]
	void SetAutoPlay(bool bInAutoPlays);

	// Object: Function SpinePlugin.SpineSkeletonAnimationComponent.SetAnimation
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x503c680
	// Params: [ Num(4) Size(0x28) ]
	struct UTrackEntry* SetAnimation(int32_t TrackIndex, struct FString AnimationName, bool Loop);

	// Object: Function SpinePlugin.SpineSkeletonAnimationComponent.GetTimeScale
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x503c824
	// Params: [ Num(1) Size(0x4) ]
	float GetTimeScale();

	// Object: Function SpinePlugin.SpineSkeletonAnimationComponent.GetCurrent
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x503c1d0
	// Params: [ Num(2) Size(0x10) ]
	struct UTrackEntry* GetCurrent(int32_t TrackIndex);

	// Object: Function SpinePlugin.SpineSkeletonAnimationComponent.ClearTracks
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x503c1bc
	// Params: [ Num(0) Size(0x0) ]
	void ClearTracks();

	// Object: Function SpinePlugin.SpineSkeletonAnimationComponent.ClearTrack
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x503c114
	// Params: [ Num(1) Size(0x4) ]
	void ClearTrack(int32_t TrackIndex);

	// Object: Function SpinePlugin.SpineSkeletonAnimationComponent.AddEmptyAnimation
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x503c280
	// Params: [ Num(4) Size(0x18) ]
	struct UTrackEntry* AddEmptyAnimation(int32_t TrackIndex, float mixDuration, float Delay);

	// Object: Function SpinePlugin.SpineSkeletonAnimationComponent.AddAnimation
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x503c49c
	// Params: [ Num(5) Size(0x28) ]
	struct UTrackEntry* AddAnimation(int32_t TrackIndex, struct FString AnimationName, bool Loop, float Delay);
};

// Object: Class SpinePlugin.SpineSkeletonDataAsset
// Size: 0xF8 (Inherited: 0x28)
struct USpineSkeletonDataAsset : UObject
{
	DEFINE_UE_CLASS_HELPERS(USpineSkeletonDataAsset, "SpineSkeletonDataAsset")

	float DefaultMix; // 0x28(0x4)
	uint8_t Pad_0x2C[0x4]; // 0x2C(0x4)
	struct TArray<struct FSpineAnimationStateMixData> MixData; // 0x30(0x10)
	struct TArray<struct FString> Bones; // 0x40(0x10)
	struct TArray<struct FString> Slots; // 0x50(0x10)
	struct TArray<struct FString> Skins; // 0x60(0x10)
	struct TArray<struct FString> Animations; // 0x70(0x10)
	struct TArray<struct FString> Events; // 0x80(0x10)
	struct TArray<uint8_t> rawData; // 0x90(0x10)
	struct FName skeletonDataFileName; // 0xA0(0x8)
	uint8_t Pad_0xA8[0x50]; // 0xA8(0x50)
};

// Object: Class SpinePlugin.SpineSkeletonRendererComponent
// Size: 0x9F0 (Inherited: 0x730)
struct USpineSkeletonRendererComponent : UProceduralMeshComponent
{
	DEFINE_UE_CLASS_HELPERS(USpineSkeletonRendererComponent, "SpineSkeletonRendererComponent")

	struct UMaterialInterface* NormalBlendMaterial; // 0x730(0x8)
	struct UMaterialInterface* AdditiveBlendMaterial; // 0x738(0x8)
	struct UMaterialInterface* MultiplyBlendMaterial; // 0x740(0x8)
	struct UMaterialInterface* ScreenBlendMaterial; // 0x748(0x8)
	struct TArray<struct UMaterialInstanceDynamic*> atlasNormalBlendMaterials; // 0x750(0x10)
	struct TArray<struct UMaterialInstanceDynamic*> atlasAdditiveBlendMaterials; // 0x760(0x10)
	struct TArray<struct UMaterialInstanceDynamic*> atlasMultiplyBlendMaterials; // 0x770(0x10)
	struct TArray<struct UMaterialInstanceDynamic*> atlasScreenBlendMaterials; // 0x780(0x10)
	float DepthOffset; // 0x790(0x4)
	struct FName TextureParameterName; // 0x794(0x8)
	struct FLinearColor Color; // 0x79C(0x10)
	bool bCreateCollision; // 0x7AC(0x1)
	uint8_t Pad_0x7AD[0x1F3]; // 0x7AD(0x1F3)
	struct TArray<struct FVector> Vertices; // 0x9A0(0x10)
	struct TArray<int32_t> Indices; // 0x9B0(0x10)
	struct TArray<struct FVector> Normals; // 0x9C0(0x10)
	struct TArray<struct FVector2D> UVs; // 0x9D0(0x10)
	struct TArray<struct FColor> Colors; // 0x9E0(0x10)
};

// Object: Class SpinePlugin.SpineWidget
// Size: 0x6A8 (Inherited: 0x130)
struct USpineWidget : UWidget
{
	DEFINE_UE_CLASS_HELPERS(USpineWidget, "SpineWidget")

	struct FString InitialSkin; // 0x130(0x10)
	struct USpineAtlasAsset* Atlas; // 0x140(0x8)
	struct USpineSkeletonDataAsset* SkeletonData; // 0x148(0x8)
	struct UMaterialInterface* NormalBlendMaterial; // 0x150(0x8)
	struct UMaterialInterface* AdditiveBlendMaterial; // 0x158(0x8)
	struct UMaterialInterface* MultiplyBlendMaterial; // 0x160(0x8)
	struct UMaterialInterface* ScreenBlendMaterial; // 0x168(0x8)
	struct FName TextureParameterName; // 0x170(0x8)
	float DepthOffset; // 0x178(0x4)
	struct FLinearColor Color; // 0x17C(0x10)
	uint8_t Pad_0x18C[0x4]; // 0x18C(0x4)
	struct FSlateBrush Brush; // 0x190(0x90)
	struct FMulticastInlineDelegate BeforeUpdateWorldTransform; // 0x220(0x10)
	struct FMulticastInlineDelegate AfterUpdateWorldTransform; // 0x230(0x10)
	struct FMulticastInlineDelegate animationStart; // 0x240(0x10)
	struct FMulticastInlineDelegate AnimationInterrupt; // 0x250(0x10)
	struct FMulticastInlineDelegate AnimationEvent; // 0x260(0x10)
	struct FMulticastInlineDelegate AnimationComplete; // 0x270(0x10)
	struct FMulticastInlineDelegate animationEnd; // 0x280(0x10)
	struct FMulticastInlineDelegate AnimationDispose; // 0x290(0x10)
	uint8_t Pad_0x2A0[0x20]; // 0x2A0(0x20)
	struct USpineAtlasAsset* lastAtlas; // 0x2C0(0x8)
	uint8_t Pad_0x2C8[0x8]; // 0x2C8(0x8)
	struct USpineSkeletonDataAsset* lastData; // 0x2D0(0x8)
	uint8_t Pad_0x2D8[0x8]; // 0x2D8(0x8)
	struct TArray<struct UMaterialInstanceDynamic*> atlasNormalBlendMaterials; // 0x2E0(0x10)
	uint8_t Pad_0x2F0[0x50]; // 0x2F0(0x50)
	struct TArray<struct UMaterialInstanceDynamic*> atlasAdditiveBlendMaterials; // 0x340(0x10)
	uint8_t Pad_0x350[0x50]; // 0x350(0x50)
	struct TArray<struct UMaterialInstanceDynamic*> atlasMultiplyBlendMaterials; // 0x3A0(0x10)
	uint8_t Pad_0x3B0[0x50]; // 0x3B0(0x50)
	struct TArray<struct UMaterialInstanceDynamic*> atlasScreenBlendMaterials; // 0x400(0x10)
	uint8_t Pad_0x410[0x240]; // 0x410(0x240)
	struct TSet<struct UTrackEntry*> trackEntries; // 0x650(0x50)
	bool bAutoPlaying; // 0x6A0(0x1)
	uint8_t Pad_0x6A1[0x7]; // 0x6A1(0x7)

	// Object: Function SpinePlugin.SpineWidget.UpdateWorldTransform
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x503effc
	// Params: [ Num(0) Size(0x0) ]
	void UpdateWorldTransform();

	// Object: Function SpinePlugin.SpineWidget.Tick
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x503dc44
	// Params: [ Num(2) Size(0x5) ]
	void Tick(float DeltaTime, bool CallDelegates);

	// Object: Function SpinePlugin.SpineWidget.SetToSetupPose
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x503efe8
	// Params: [ Num(0) Size(0x0) ]
	void SetToSetupPose();

	// Object: Function SpinePlugin.SpineWidget.SetTimeScale
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x503e478
	// Params: [ Num(1) Size(0x4) ]
	void SetTimeScale(float TimeScale);

	// Object: Function SpinePlugin.SpineWidget.SetSlotsToSetupPose
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x503efc0
	// Params: [ Num(0) Size(0x0) ]
	void SetSlotsToSetupPose();

	// Object: Function SpinePlugin.SpineWidget.SetSkins
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x503f2cc
	// Params: [ Num(2) Size(0x11) ]
	bool SetSkins(struct TArray<struct FString>& SkinNames);

	// Object: Function SpinePlugin.SpineWidget.SetSkin
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x503f394
	// Params: [ Num(2) Size(0x11) ]
	bool SetSkin(struct FString SkinName);

	// Object: Function SpinePlugin.SpineWidget.SetScaleY
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x503ee3c
	// Params: [ Num(1) Size(0x4) ]
	void SetScaleY(float ScaleY);

	// Object: Function SpinePlugin.SpineWidget.SetScaleX
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x503ef18
	// Params: [ Num(1) Size(0x4) ]
	void SetScaleX(float ScaleX);

	// Object: Function SpinePlugin.SpineWidget.SetPlaybackTime
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x503e520
	// Params: [ Num(2) Size(0x5) ]
	void SetPlaybackTime(float InPlaybackTime, bool bCallDelegates);

	// Object: Function SpinePlugin.SpineWidget.SetEmptyAnimation
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x503dfcc
	// Params: [ Num(3) Size(0x10) ]
	struct UTrackEntry* SetEmptyAnimation(int32_t TrackIndex, float mixDuration);

	// Object: Function SpinePlugin.SpineWidget.SetBonesToSetupPose
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x503efd4
	// Params: [ Num(0) Size(0x0) ]
	void SetBonesToSetupPose();

	// Object: Function SpinePlugin.SpineWidget.SetAutoPlay
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x503e610
	// Params: [ Num(1) Size(0x1) ]
	void SetAutoPlay(bool bInAutoPlays);

	// Object: Function SpinePlugin.SpineWidget.SetAttachment
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x503f010
	// Params: [ Num(3) Size(0x21) ]
	bool SetAttachment(struct FString SlotName, struct FString AttachmentName);

	// Object: Function SpinePlugin.SpineWidget.SetAnimation
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x503e2a0
	// Params: [ Num(4) Size(0x28) ]
	struct UTrackEntry* SetAnimation(int32_t TrackIndex, struct FString AnimationName, bool Loop);

	// Object: Function SpinePlugin.SpineWidget.HasSlot
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x503e99c
	// Params: [ Num(2) Size(0x11) ]
	bool HasSlot(struct FString SlotName);

	// Object: Function SpinePlugin.SpineWidget.HasSkin
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x503f1b8
	// Params: [ Num(2) Size(0x11) ]
	bool HasSkin(struct FString SkinName);

	// Object: Function SpinePlugin.SpineWidget.HasBone
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x503ec38
	// Params: [ Num(2) Size(0x11) ]
	bool HasBone(struct FString BoneName);

	// Object: Function SpinePlugin.SpineWidget.HasAnimation
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x503e7cc
	// Params: [ Num(2) Size(0x11) ]
	bool HasAnimation(struct FString AnimationName);

	// Object: Function SpinePlugin.SpineWidget.GetTimeScale
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x503e444
	// Params: [ Num(1) Size(0x4) ]
	float GetTimeScale();

	// Object: Function SpinePlugin.SpineWidget.GetSlots
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	// Offset: 0x503eab0
	// Params: [ Num(1) Size(0x10) ]
	void GetSlots(struct TArray<struct FString>& Slots);

	// Object: Function SpinePlugin.SpineWidget.GetSkins
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	// Offset: 0x503f4a8
	// Params: [ Num(1) Size(0x10) ]
	void GetSkins(struct TArray<struct FString>& Skins);

	// Object: Function SpinePlugin.SpineWidget.GetScaleY
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x503ee08
	// Params: [ Num(1) Size(0x4) ]
	float GetScaleY();

	// Object: Function SpinePlugin.SpineWidget.GetScaleX
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x503eee4
	// Params: [ Num(1) Size(0x4) ]
	float GetScaleX();

	// Object: Function SpinePlugin.SpineWidget.GetCurrent
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x503ddf0
	// Params: [ Num(2) Size(0x10) ]
	struct UTrackEntry* GetCurrent(int32_t TrackIndex);

	// Object: Function SpinePlugin.SpineWidget.GetBoneTransform
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x503eb6c
	// Params: [ Num(2) Size(0x40) ]
	struct FTransform GetBoneTransform(struct FString BoneName);

	// Object: Function SpinePlugin.SpineWidget.GetBones
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	// Offset: 0x503ed4c
	// Params: [ Num(1) Size(0x10) ]
	void GetBones(struct TArray<struct FString>& Bones);

	// Object: Function SpinePlugin.SpineWidget.GetAnimations
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	// Offset: 0x503e8e0
	// Params: [ Num(1) Size(0x10) ]
	void GetAnimations(struct TArray<struct FString>& Animations);

	// Object: Function SpinePlugin.SpineWidget.getAnimationDuration
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x503e6c0
	// Params: [ Num(2) Size(0x14) ]
	float getAnimationDuration(struct FString AnimationName);

	// Object: Function SpinePlugin.SpineWidget.ClearTracks
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x503dddc
	// Params: [ Num(0) Size(0x0) ]
	void ClearTracks();

	// Object: Function SpinePlugin.SpineWidget.ClearTrack
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x503dd34
	// Params: [ Num(1) Size(0x4) ]
	void ClearTrack(int32_t TrackIndex);

	// Object: Function SpinePlugin.SpineWidget.AddEmptyAnimation
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x503dea0
	// Params: [ Num(4) Size(0x18) ]
	struct UTrackEntry* AddEmptyAnimation(int32_t TrackIndex, float mixDuration, float Delay);

	// Object: Function SpinePlugin.SpineWidget.AddAnimation
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x503e0bc
	// Params: [ Num(5) Size(0x28) ]
	struct UTrackEntry* AddAnimation(int32_t TrackIndex, struct FString AnimationName, bool Loop, float Delay);
};

} // namespace SDK
