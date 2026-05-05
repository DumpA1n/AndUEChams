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
// Size: 0x58 (Inherited: 0x28)
struct USpineAtlasAsset : UObject
{
	DEFINE_UE_CLASS_HELPERS(USpineAtlasAsset, "SpineAtlasAsset")

	struct TArray<struct UTexture2D*> atlasPages; // 0x28(0x10)
	uint8_t Pad_0x38[0x8]; // 0x38(0x8)
	struct FString RawData; // 0x40(0x10)
	struct FName atlasFileName; // 0x50(0x8)
};

// Object: Class SpinePlugin.SpineBoneDriverComponent
// Size: 0x270 (Inherited: 0x240)
struct USpineBoneDriverComponent : USceneComponent
{
	DEFINE_UE_CLASS_HELPERS(USpineBoneDriverComponent, "SpineBoneDriverComponent")

	struct AActor* Target; // 0x240(0x8)
	struct FString BoneName; // 0x248(0x10)
	uint8_t UseComponentTransform : 1; // 0x258(0x1), Mask(0x1)
	uint8_t BitPad_0x258_1 : 7; // 0x258(0x1)
	uint8_t UsePosition : 1; // 0x259(0x1), Mask(0x1)
	uint8_t BitPad_0x259_1 : 7; // 0x259(0x1)
	uint8_t UseRotation : 1; // 0x25A(0x1), Mask(0x1)
	uint8_t BitPad_0x25A_1 : 7; // 0x25A(0x1)
	uint8_t UseScale : 1; // 0x25B(0x1), Mask(0x1)
	uint8_t BitPad_0x25B_1 : 7; // 0x25B(0x1)
	uint8_t Pad_0x25C[0x4]; // 0x25C(0x4)
	struct USpineSkeletonComponent* lastBoundComponent; // 0x260(0x8)
	uint8_t Pad_0x268[0x8]; // 0x268(0x8)

	// Object: Function SpinePlugin.SpineBoneDriverComponent.BeforeUpdateWorldTransform
	// Flags: [Final|Native|Protected]
	// Offset: 0x7a293cc
	// Params: [ Num(1) Size(0x8) ]
	void BeforeUpdateWorldTransform(struct USpineSkeletonComponent* Skeleton);
};

// Object: Class SpinePlugin.SpineBoneFollowerComponent
// Size: 0x260 (Inherited: 0x240)
struct USpineBoneFollowerComponent : USceneComponent
{
	DEFINE_UE_CLASS_HELPERS(USpineBoneFollowerComponent, "SpineBoneFollowerComponent")

	struct AActor* Target; // 0x240(0x8)
	struct FString BoneName; // 0x248(0x10)
	uint8_t UseComponentTransform : 1; // 0x258(0x1), Mask(0x1)
	uint8_t BitPad_0x258_1 : 7; // 0x258(0x1)
	uint8_t UsePosition : 1; // 0x259(0x1), Mask(0x1)
	uint8_t BitPad_0x259_1 : 7; // 0x259(0x1)
	uint8_t UseRotation : 1; // 0x25A(0x1), Mask(0x1)
	uint8_t BitPad_0x25A_1 : 7; // 0x25A(0x1)
	uint8_t UseScale : 1; // 0x25B(0x1), Mask(0x1)
	uint8_t BitPad_0x25B_1 : 7; // 0x25B(0x1)
	uint8_t Pad_0x25C[0x4]; // 0x25C(0x4)
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
	// Offset: 0x7a2a268
	// Params: [ Num(1) Size(0x4) ]
	void SetTrackTime(float TrackTime);

	// Object: Function SpinePlugin.TrackEntry.SetTrackEnd
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x7a2a1c0
	// Params: [ Num(1) Size(0x4) ]
	void SetTrackEnd(float trackEnd);

	// Object: Function SpinePlugin.TrackEntry.SetTimeScale
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x7a2a118
	// Params: [ Num(1) Size(0x4) ]
	void SetTimeScale(float TimeScale);

	// Object: Function SpinePlugin.TrackEntry.SetMixTime
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x7a2a070
	// Params: [ Num(1) Size(0x4) ]
	void SetMixTime(float mixTime);

	// Object: Function SpinePlugin.TrackEntry.SetMixDuration
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x7a29fc8
	// Params: [ Num(1) Size(0x4) ]
	void SetMixDuration(float mixDuration);

	// Object: Function SpinePlugin.TrackEntry.SetLoop
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x7a29f18
	// Params: [ Num(1) Size(0x1) ]
	void SetLoop(uint8_t Loop);

	// Object: Function SpinePlugin.TrackEntry.SetEventThreshold
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x7a29e70
	// Params: [ Num(1) Size(0x4) ]
	void SetEventThreshold(float eventThreshold);

	// Object: Function SpinePlugin.TrackEntry.SetDrawOrderThreshold
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x7a29dc8
	// Params: [ Num(1) Size(0x4) ]
	void SetDrawOrderThreshold(float drawOrderThreshold);

	// Object: Function SpinePlugin.TrackEntry.SetDelay
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x7a29d20
	// Params: [ Num(1) Size(0x4) ]
	void SetDelay(float Delay);

	// Object: Function SpinePlugin.TrackEntry.SetAttachmentThreshold
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x7a29c78
	// Params: [ Num(1) Size(0x4) ]
	void SetAttachmentThreshold(float attachmentThreshold);

	// Object: Function SpinePlugin.TrackEntry.SetAnimationStart
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x7a29bd0
	// Params: [ Num(1) Size(0x4) ]
	void SetAnimationStart(float animationStart);

	// Object: Function SpinePlugin.TrackEntry.SetAnimationLast
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x7a29b28
	// Params: [ Num(1) Size(0x4) ]
	void SetAnimationLast(float animationLast);

	// Object: Function SpinePlugin.TrackEntry.SetAnimationEnd
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x7a29a80
	// Params: [ Num(1) Size(0x4) ]
	void SetAnimationEnd(float animationEnd);

	// Object: Function SpinePlugin.TrackEntry.SetAlpha
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x7a299d8
	// Params: [ Num(1) Size(0x4) ]
	void SetAlpha(float Alpha);

	// Object: Function SpinePlugin.TrackEntry.isValidAnimation
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x7a299b4
	// Params: [ Num(1) Size(0x1) ]
	uint8_t isValidAnimation();

	// Object: Function SpinePlugin.TrackEntry.GetTrackTime
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x7a29970
	// Params: [ Num(1) Size(0x4) ]
	float GetTrackTime();

	// Object: Function SpinePlugin.TrackEntry.GetTrackIndex
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x7a29934
	// Params: [ Num(1) Size(0x4) ]
	int32_t GetTrackIndex();

	// Object: Function SpinePlugin.TrackEntry.GetTrackEnd
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x7a298f0
	// Params: [ Num(1) Size(0x4) ]
	float GetTrackEnd();

	// Object: Function SpinePlugin.TrackEntry.GetTimeScale
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x7a298ac
	// Params: [ Num(1) Size(0x4) ]
	float GetTimeScale();

	// Object: Function SpinePlugin.TrackEntry.GetMixTime
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x7a29868
	// Params: [ Num(1) Size(0x4) ]
	float GetMixTime();

	// Object: Function SpinePlugin.TrackEntry.GetMixDuration
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x7a29824
	// Params: [ Num(1) Size(0x4) ]
	float GetMixDuration();

	// Object: Function SpinePlugin.TrackEntry.GetLoop
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x7a297e4
	// Params: [ Num(1) Size(0x1) ]
	uint8_t GetLoop();

	// Object: Function SpinePlugin.TrackEntry.GetEventThreshold
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x7a297a0
	// Params: [ Num(1) Size(0x4) ]
	float GetEventThreshold();

	// Object: Function SpinePlugin.TrackEntry.GetDrawOrderThreshold
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x7a2975c
	// Params: [ Num(1) Size(0x4) ]
	float GetDrawOrderThreshold();

	// Object: Function SpinePlugin.TrackEntry.GetDelay
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x7a29718
	// Params: [ Num(1) Size(0x4) ]
	float GetDelay();

	// Object: Function SpinePlugin.TrackEntry.GetAttachmentThreshold
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x7a296d4
	// Params: [ Num(1) Size(0x4) ]
	float GetAttachmentThreshold();

	// Object: Function SpinePlugin.TrackEntry.GetAnimationStart
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x7a29690
	// Params: [ Num(1) Size(0x4) ]
	float GetAnimationStart();

	// Object: Function SpinePlugin.TrackEntry.getAnimationName
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x7a295f8
	// Params: [ Num(1) Size(0x10) ]
	struct FString getAnimationName();

	// Object: Function SpinePlugin.TrackEntry.GetAnimationLast
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x7a295b4
	// Params: [ Num(1) Size(0x4) ]
	float GetAnimationLast();

	// Object: Function SpinePlugin.TrackEntry.GetAnimationEnd
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x7a29570
	// Params: [ Num(1) Size(0x4) ]
	float GetAnimationEnd();

	// Object: Function SpinePlugin.TrackEntry.getAnimationDuration
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x7a29528
	// Params: [ Num(1) Size(0x4) ]
	float getAnimationDuration();

	// Object: Function SpinePlugin.TrackEntry.GetAlpha
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x7a294e4
	// Params: [ Num(1) Size(0x4) ]
	float GetAlpha();
};

// Object: Class SpinePlugin.SpineSkeletonComponent
// Size: 0x150 (Inherited: 0xF8)
struct USpineSkeletonComponent : UActorComponent
{
	DEFINE_UE_CLASS_HELPERS(USpineSkeletonComponent, "SpineSkeletonComponent")

	struct USpineAtlasAsset* Atlas; // 0xF8(0x8)
	struct USpineSkeletonDataAsset* SkeletonData; // 0x100(0x8)
	struct FMulticastInlineDelegate BeforeUpdateWorldTransform; // 0x108(0x10)
	struct FMulticastInlineDelegate AfterUpdateWorldTransform; // 0x118(0x10)
	uint8_t Pad_0x128[0x8]; // 0x128(0x8)
	struct USpineAtlasAsset* lastAtlas; // 0x130(0x8)
	uint8_t Pad_0x138[0x8]; // 0x138(0x8)
	struct USpineSkeletonDataAsset* lastData; // 0x140(0x8)
	uint8_t Pad_0x148[0x8]; // 0x148(0x8)

	// Object: Function SpinePlugin.SpineSkeletonComponent.UpdateWorldTransform
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x7a2bd8c
	// Params: [ Num(0) Size(0x0) ]
	void UpdateWorldTransform();

	// Object: Function SpinePlugin.SpineSkeletonComponent.SetToSetupPose
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x7a2bd78
	// Params: [ Num(0) Size(0x0) ]
	void SetToSetupPose();

	// Object: Function SpinePlugin.SpineSkeletonComponent.SetSlotsToSetupPose
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x7a2bd64
	// Params: [ Num(0) Size(0x0) ]
	void SetSlotsToSetupPose();

	// Object: Function SpinePlugin.SpineSkeletonComponent.SetSlotColor
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x7a2bc34
	// Params: [ Num(2) Size(0x14) ]
	void SetSlotColor(struct FString SlotName, struct FColor Color);

	// Object: Function SpinePlugin.SpineSkeletonComponent.SetSkins
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x7a2bb6c
	// Params: [ Num(2) Size(0x11) ]
	uint8_t SetSkins(struct TArray<struct FString>& SkinNames);

	// Object: Function SpinePlugin.SpineSkeletonComponent.SetSkin
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x7a2ba68
	// Params: [ Num(2) Size(0x11) ]
	uint8_t SetSkin(struct FString SkinName);

	// Object: Function SpinePlugin.SpineSkeletonComponent.SetScaleY
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x7a2b9c4
	// Params: [ Num(1) Size(0x4) ]
	void SetScaleY(float ScaleY);

	// Object: Function SpinePlugin.SpineSkeletonComponent.SetScaleX
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x7a2b920
	// Params: [ Num(1) Size(0x4) ]
	void SetScaleX(float ScaleX);

	// Object: Function SpinePlugin.SpineSkeletonComponent.SetBoneWorldPosition
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable]
	// Offset: 0x7a2b82c
	// Params: [ Num(2) Size(0x1C) ]
	void SetBoneWorldPosition(struct FString BoneName, const struct FVector& Position);

	// Object: Function SpinePlugin.SpineSkeletonComponent.SetBonesToSetupPose
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x7a2b818
	// Params: [ Num(0) Size(0x0) ]
	void SetBonesToSetupPose();

	// Object: Function SpinePlugin.SpineSkeletonComponent.SetAttachment
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x7a2b68c
	// Params: [ Num(3) Size(0x21) ]
	uint8_t SetAttachment(struct FString SlotName, struct FString attachmentName);

	// Object: Function SpinePlugin.SpineSkeletonComponent.HasSlot
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x7a2b588
	// Params: [ Num(2) Size(0x11) ]
	uint8_t HasSlot(struct FString SlotName);

	// Object: Function SpinePlugin.SpineSkeletonComponent.HasSkin
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x7a2b484
	// Params: [ Num(2) Size(0x11) ]
	uint8_t HasSkin(struct FString SkinName);

	// Object: Function SpinePlugin.SpineSkeletonComponent.HasBone
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x7a2b380
	// Params: [ Num(2) Size(0x11) ]
	uint8_t HasBone(struct FString BoneName);

	// Object: Function SpinePlugin.SpineSkeletonComponent.HasAnimation
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x7a2b27c
	// Params: [ Num(2) Size(0x11) ]
	uint8_t HasAnimation(struct FString AnimationName);

	// Object: Function SpinePlugin.SpineSkeletonComponent.GetSlots
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	// Offset: 0x7a2b1c0
	// Params: [ Num(1) Size(0x10) ]
	void GetSlots(struct TArray<struct FString>& Slots);

	// Object: Function SpinePlugin.SpineSkeletonComponent.GetSkins
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	// Offset: 0x7a2b104
	// Params: [ Num(1) Size(0x10) ]
	void GetSkins(struct TArray<struct FString>& Skins);

	// Object: Function SpinePlugin.SpineSkeletonComponent.GetScaleY
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x7a2b0d0
	// Params: [ Num(1) Size(0x4) ]
	float GetScaleY();

	// Object: Function SpinePlugin.SpineSkeletonComponent.GetScaleX
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x7a2b09c
	// Params: [ Num(1) Size(0x4) ]
	float GetScaleX();

	// Object: Function SpinePlugin.SpineSkeletonComponent.GetBoneWorldTransform
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x7a2afd8
	// Params: [ Num(2) Size(0x40) ]
	struct FTransform GetBoneWorldTransform(struct FString BoneName);

	// Object: Function SpinePlugin.SpineSkeletonComponent.GetBones
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	// Offset: 0x7a2af1c
	// Params: [ Num(1) Size(0x10) ]
	void GetBones(struct TArray<struct FString>& Bones);

	// Object: Function SpinePlugin.SpineSkeletonComponent.GetAnimations
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	// Offset: 0x7a2ae60
	// Params: [ Num(1) Size(0x10) ]
	void GetAnimations(struct TArray<struct FString>& Animations);

	// Object: Function SpinePlugin.SpineSkeletonComponent.getAnimationDuration
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x7a2ad60
	// Params: [ Num(2) Size(0x14) ]
	float getAnimationDuration(struct FString AnimationName);
};

// Object: Class SpinePlugin.SpineSkeletonAnimationComponent
// Size: 0x250 (Inherited: 0x150)
struct USpineSkeletonAnimationComponent : USpineSkeletonComponent
{
	DEFINE_UE_CLASS_HELPERS(USpineSkeletonAnimationComponent, "SpineSkeletonAnimationComponent")

	struct FMulticastInlineDelegate animationStart; // 0x150(0x10)
	struct FMulticastInlineDelegate AnimationInterrupt; // 0x160(0x10)
	struct FMulticastInlineDelegate AnimationEvent; // 0x170(0x10)
	struct FMulticastInlineDelegate AnimationComplete; // 0x180(0x10)
	struct FMulticastInlineDelegate animationEnd; // 0x190(0x10)
	struct FMulticastInlineDelegate AnimationDispose; // 0x1A0(0x10)
	struct FString PreviewAnimation; // 0x1B0(0x10)
	struct FString PreviewSkin; // 0x1C0(0x10)
	uint8_t Pad_0x1D0[0x8]; // 0x1D0(0x8)
	struct TSet<struct UTrackEntry*> trackEntries; // 0x1D8(0x50)
	uint8_t bAutoPlaying : 1; // 0x228(0x1), Mask(0x1)
	uint8_t BitPad_0x228_1 : 7; // 0x228(0x1)
	uint8_t Pad_0x229[0x27]; // 0x229(0x27)

	// Object: Function SpinePlugin.SpineSkeletonAnimationComponent.SetTimeScale
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x7a2abc4
	// Params: [ Num(1) Size(0x4) ]
	void SetTimeScale(float TimeScale);

	// Object: Function SpinePlugin.SpineSkeletonAnimationComponent.SetPlaybackTime
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x7a2aadc
	// Params: [ Num(2) Size(0x5) ]
	void SetPlaybackTime(float InPlaybackTime, uint8_t bCallDelegates);

	// Object: Function SpinePlugin.SpineSkeletonAnimationComponent.SetEmptyAnimation
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x7a2a9f4
	// Params: [ Num(3) Size(0x10) ]
	struct UTrackEntry* SetEmptyAnimation(int32_t TrackIndex, float mixDuration);

	// Object: Function SpinePlugin.SpineSkeletonAnimationComponent.SetAutoPlay
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x7a2a948
	// Params: [ Num(1) Size(0x1) ]
	void SetAutoPlay(uint8_t bInAutoPlays);

	// Object: Function SpinePlugin.SpineSkeletonAnimationComponent.SetAnimation
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x7a2a7bc
	// Params: [ Num(4) Size(0x28) ]
	struct UTrackEntry* SetAnimation(int32_t TrackIndex, struct FString AnimationName, uint8_t Loop);

	// Object: Function SpinePlugin.SpineSkeletonAnimationComponent.GetTimeScale
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x7a2a788
	// Params: [ Num(1) Size(0x4) ]
	float GetTimeScale();

	// Object: Function SpinePlugin.SpineSkeletonAnimationComponent.GetCurrent
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x7a2a6dc
	// Params: [ Num(2) Size(0x10) ]
	struct UTrackEntry* GetCurrent(int32_t TrackIndex);

	// Object: Function SpinePlugin.SpineSkeletonAnimationComponent.ClearTracks
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x7a2a6c8
	// Params: [ Num(0) Size(0x0) ]
	void ClearTracks();

	// Object: Function SpinePlugin.SpineSkeletonAnimationComponent.ClearTrack
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x7a2a624
	// Params: [ Num(1) Size(0x4) ]
	void ClearTrack(int32_t TrackIndex);

	// Object: Function SpinePlugin.SpineSkeletonAnimationComponent.AddEmptyAnimation
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x7a2a504
	// Params: [ Num(4) Size(0x18) ]
	struct UTrackEntry* AddEmptyAnimation(int32_t TrackIndex, float mixDuration, float Delay);

	// Object: Function SpinePlugin.SpineSkeletonAnimationComponent.AddAnimation
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x7a2a33c
	// Params: [ Num(5) Size(0x28) ]
	struct UTrackEntry* AddAnimation(int32_t TrackIndex, struct FString AnimationName, uint8_t Loop, float Delay);
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
	struct TArray<uint8_t> RawData; // 0x90(0x10)
	struct FName skeletonDataFileName; // 0xA0(0x8)
	uint8_t Pad_0xA8[0x50]; // 0xA8(0x50)
};

// Object: Class SpinePlugin.SpineSkeletonRendererComponent
// Size: 0xB00 (Inherited: 0x750)
struct USpineSkeletonRendererComponent : UProceduralMeshComponent
{
	DEFINE_UE_CLASS_HELPERS(USpineSkeletonRendererComponent, "SpineSkeletonRendererComponent")

	struct UMaterialInterface* NormalBlendMaterial; // 0x750(0x8)
	struct UMaterialInterface* AdditiveBlendMaterial; // 0x758(0x8)
	struct UMaterialInterface* MultiplyBlendMaterial; // 0x760(0x8)
	struct UMaterialInterface* ScreenBlendMaterial; // 0x768(0x8)
	struct TArray<struct UMaterialInstanceDynamic*> atlasNormalBlendMaterials; // 0x770(0x10)
	uint8_t Pad_0x780[0x50]; // 0x780(0x50)
	struct TArray<struct UMaterialInstanceDynamic*> atlasAdditiveBlendMaterials; // 0x7D0(0x10)
	uint8_t Pad_0x7E0[0x50]; // 0x7E0(0x50)
	struct TArray<struct UMaterialInstanceDynamic*> atlasMultiplyBlendMaterials; // 0x830(0x10)
	uint8_t Pad_0x840[0x50]; // 0x840(0x50)
	struct TArray<struct UMaterialInstanceDynamic*> atlasScreenBlendMaterials; // 0x890(0x10)
	uint8_t Pad_0x8A0[0x50]; // 0x8A0(0x50)
	float DepthOffset; // 0x8F0(0x4)
	struct FName TextureParameterName; // 0x8F4(0x8)
	struct FLinearColor Color; // 0x8FC(0x10)
	uint8_t bCreateCollision : 1; // 0x90C(0x1), Mask(0x1)
	uint8_t BitPad_0x90C_1 : 7; // 0x90C(0x1)
	uint8_t Pad_0x90D[0x1F3]; // 0x90D(0x1F3)

	// Object: Function SpinePlugin.SpineSkeletonRendererComponent.UpdateRenderer
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x7a2be1c
	// Params: [ Num(1) Size(0x8) ]
	void UpdateRenderer(struct USpineSkeletonComponent* Skeleton);

	// Object: Function SpinePlugin.SpineSkeletonRendererComponent.Clear
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x7a2be08
	// Params: [ Num(0) Size(0x0) ]
	void Clear();
};

// Object: Class SpinePlugin.SpineWidget
// Size: 0x6E0 (Inherited: 0x158)
struct USpineWidget : UWidget
{
	DEFINE_UE_CLASS_HELPERS(USpineWidget, "SpineWidget")

	struct FString InitialSkin; // 0x158(0x10)
	struct USpineAtlasAsset* Atlas; // 0x168(0x8)
	struct USpineSkeletonDataAsset* SkeletonData; // 0x170(0x8)
	struct UMaterialInterface* NormalBlendMaterial; // 0x178(0x8)
	struct UMaterialInterface* AdditiveBlendMaterial; // 0x180(0x8)
	struct UMaterialInterface* MultiplyBlendMaterial; // 0x188(0x8)
	struct UMaterialInterface* ScreenBlendMaterial; // 0x190(0x8)
	struct FName TextureParameterName; // 0x198(0x8)
	float DepthOffset; // 0x1A0(0x4)
	struct FLinearColor Color; // 0x1A4(0x10)
	uint8_t Pad_0x1B4[0x4]; // 0x1B4(0x4)
	struct FSlateBrush Brush; // 0x1B8(0x90)
	struct FMulticastInlineDelegate BeforeUpdateWorldTransform; // 0x248(0x10)
	struct FMulticastInlineDelegate AfterUpdateWorldTransform; // 0x258(0x10)
	struct FMulticastInlineDelegate animationStart; // 0x268(0x10)
	struct FMulticastInlineDelegate AnimationInterrupt; // 0x278(0x10)
	struct FMulticastInlineDelegate AnimationEvent; // 0x288(0x10)
	struct FMulticastInlineDelegate AnimationComplete; // 0x298(0x10)
	struct FMulticastInlineDelegate animationEnd; // 0x2A8(0x10)
	struct FMulticastInlineDelegate AnimationDispose; // 0x2B8(0x10)
	uint8_t Pad_0x2C8[0x30]; // 0x2C8(0x30)
	struct USpineAtlasAsset* lastAtlas; // 0x2F8(0x8)
	uint8_t Pad_0x300[0x8]; // 0x300(0x8)
	struct USpineSkeletonDataAsset* lastData; // 0x308(0x8)
	uint8_t Pad_0x310[0x8]; // 0x310(0x8)
	struct TArray<struct UMaterialInstanceDynamic*> atlasNormalBlendMaterials; // 0x318(0x10)
	uint8_t Pad_0x328[0x50]; // 0x328(0x50)
	struct TArray<struct UMaterialInstanceDynamic*> atlasAdditiveBlendMaterials; // 0x378(0x10)
	uint8_t Pad_0x388[0x50]; // 0x388(0x50)
	struct TArray<struct UMaterialInstanceDynamic*> atlasMultiplyBlendMaterials; // 0x3D8(0x10)
	uint8_t Pad_0x3E8[0x50]; // 0x3E8(0x50)
	struct TArray<struct UMaterialInstanceDynamic*> atlasScreenBlendMaterials; // 0x438(0x10)
	uint8_t Pad_0x448[0x240]; // 0x448(0x240)
	struct TSet<struct UTrackEntry*> trackEntries; // 0x688(0x50)
	uint8_t Pad_0x6D8[0x1]; // 0x6D8(0x1)
	uint8_t bAutoPlaying : 1; // 0x6D9(0x1), Mask(0x1)
	uint8_t BitPad_0x6D9_1 : 7; // 0x6D9(0x1)
	uint8_t Pad_0x6DA[0x6]; // 0x6DA(0x6)

	// Object: Function SpinePlugin.SpineWidget.UpdateWorldTransform
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x7a2d78c
	// Params: [ Num(0) Size(0x0) ]
	void UpdateWorldTransform();

	// Object: Function SpinePlugin.SpineWidget.Tick
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x7a2d6a4
	// Params: [ Num(2) Size(0x5) ]
	void Tick(float DeltaTime, uint8_t CallDelegates);

	// Object: Function SpinePlugin.SpineWidget.SetToSetupPose
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x7a2d690
	// Params: [ Num(0) Size(0x0) ]
	void SetToSetupPose();

	// Object: Function SpinePlugin.SpineWidget.SetTimeScale
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x7a2d5ec
	// Params: [ Num(1) Size(0x4) ]
	void SetTimeScale(float TimeScale);

	// Object: Function SpinePlugin.SpineWidget.SetSlotsToSetupPose
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x7a2d5d8
	// Params: [ Num(0) Size(0x0) ]
	void SetSlotsToSetupPose();

	// Object: Function SpinePlugin.SpineWidget.SetSkins
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x7a2d510
	// Params: [ Num(2) Size(0x11) ]
	uint8_t SetSkins(struct TArray<struct FString>& SkinNames);

	// Object: Function SpinePlugin.SpineWidget.SetSkin
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x7a2d40c
	// Params: [ Num(2) Size(0x11) ]
	uint8_t SetSkin(struct FString SkinName);

	// Object: Function SpinePlugin.SpineWidget.SetScaleY
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x7a2d368
	// Params: [ Num(1) Size(0x4) ]
	void SetScaleY(float ScaleY);

	// Object: Function SpinePlugin.SpineWidget.SetScaleX
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x7a2d2c4
	// Params: [ Num(1) Size(0x4) ]
	void SetScaleX(float ScaleX);

	// Object: Function SpinePlugin.SpineWidget.SetPlaybackTime
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x7a2d1dc
	// Params: [ Num(2) Size(0x5) ]
	void SetPlaybackTime(float InPlaybackTime, uint8_t bCallDelegates);

	// Object: Function SpinePlugin.SpineWidget.SetEmptyAnimation
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x7a2d0f4
	// Params: [ Num(3) Size(0x10) ]
	struct UTrackEntry* SetEmptyAnimation(int32_t TrackIndex, float mixDuration);

	// Object: Function SpinePlugin.SpineWidget.SetBonesToSetupPose
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x7a2d0e0
	// Params: [ Num(0) Size(0x0) ]
	void SetBonesToSetupPose();

	// Object: Function SpinePlugin.SpineWidget.SetAutoPlay
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x7a2d034
	// Params: [ Num(1) Size(0x1) ]
	void SetAutoPlay(uint8_t bInAutoPlays);

	// Object: Function SpinePlugin.SpineWidget.SetAttachment
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x7a2cea8
	// Params: [ Num(3) Size(0x21) ]
	uint8_t SetAttachment(struct FString SlotName, struct FString attachmentName);

	// Object: Function SpinePlugin.SpineWidget.SetAsyncLoad
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x7a2cdfc
	// Params: [ Num(1) Size(0x1) ]
	void SetAsyncLoad(uint8_t Async);

	// Object: Function SpinePlugin.SpineWidget.SetAnimation
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x7a2cc70
	// Params: [ Num(4) Size(0x28) ]
	struct UTrackEntry* SetAnimation(int32_t TrackIndex, struct FString AnimationName, uint8_t Loop);

	// Object: Function SpinePlugin.SpineWidget.HasSlot
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x7a2cb6c
	// Params: [ Num(2) Size(0x11) ]
	uint8_t HasSlot(struct FString SlotName);

	// Object: Function SpinePlugin.SpineWidget.HasSkin
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x7a2ca68
	// Params: [ Num(2) Size(0x11) ]
	uint8_t HasSkin(struct FString SkinName);

	// Object: Function SpinePlugin.SpineWidget.HasBone
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x7a2c964
	// Params: [ Num(2) Size(0x11) ]
	uint8_t HasBone(struct FString BoneName);

	// Object: Function SpinePlugin.SpineWidget.HasAnimation
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x7a2c860
	// Params: [ Num(2) Size(0x11) ]
	uint8_t HasAnimation(struct FString AnimationName);

	// Object: Function SpinePlugin.SpineWidget.GetTimeScale
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x7a2c82c
	// Params: [ Num(1) Size(0x4) ]
	float GetTimeScale();

	// Object: Function SpinePlugin.SpineWidget.GetSlots
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	// Offset: 0x7a2c770
	// Params: [ Num(1) Size(0x10) ]
	void GetSlots(struct TArray<struct FString>& Slots);

	// Object: Function SpinePlugin.SpineWidget.GetSkins
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	// Offset: 0x7a2c6b4
	// Params: [ Num(1) Size(0x10) ]
	void GetSkins(struct TArray<struct FString>& Skins);

	// Object: Function SpinePlugin.SpineWidget.GetScaleY
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x7a2c680
	// Params: [ Num(1) Size(0x4) ]
	float GetScaleY();

	// Object: Function SpinePlugin.SpineWidget.GetScaleX
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x7a2c64c
	// Params: [ Num(1) Size(0x4) ]
	float GetScaleX();

	// Object: Function SpinePlugin.SpineWidget.GetCurrent
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x7a2c5a0
	// Params: [ Num(2) Size(0x10) ]
	struct UTrackEntry* GetCurrent(int32_t TrackIndex);

	// Object: Function SpinePlugin.SpineWidget.GetBones
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	// Offset: 0x7a2c4e4
	// Params: [ Num(1) Size(0x10) ]
	void GetBones(struct TArray<struct FString>& Bones);

	// Object: Function SpinePlugin.SpineWidget.GetAnimations
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	// Offset: 0x7a2c428
	// Params: [ Num(1) Size(0x10) ]
	void GetAnimations(struct TArray<struct FString>& Animations);

	// Object: Function SpinePlugin.SpineWidget.getAnimationDuration
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x7a2c328
	// Params: [ Num(2) Size(0x14) ]
	float getAnimationDuration(struct FString AnimationName);

	// Object: Function SpinePlugin.SpineWidget.ClearTracks
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x7a2c314
	// Params: [ Num(0) Size(0x0) ]
	void ClearTracks();

	// Object: Function SpinePlugin.SpineWidget.ClearTrack
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x7a2c270
	// Params: [ Num(1) Size(0x4) ]
	void ClearTrack(int32_t TrackIndex);

	// Object: Function SpinePlugin.SpineWidget.AddEmptyAnimation
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x7a2c150
	// Params: [ Num(4) Size(0x18) ]
	struct UTrackEntry* AddEmptyAnimation(int32_t TrackIndex, float mixDuration, float Delay);

	// Object: Function SpinePlugin.SpineWidget.AddAnimation
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x7a2bf88
	// Params: [ Num(5) Size(0x28) ]
	struct UTrackEntry* AddAnimation(int32_t TrackIndex, struct FString AnimationName, uint8_t Loop, float Delay);
};

} // namespace SDK
