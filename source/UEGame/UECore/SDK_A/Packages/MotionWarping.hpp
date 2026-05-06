#pragma once

#include "../CoreUObject_classes.hpp"
#include "Engine.hpp"

namespace SDK
{

// Package: MotionWarping
// Enums: 3
// Structs: 4
// Classes: 12

struct ACharacter;
struct UAnimMontage;
struct UAnimSequenceBase;
struct FMotionWarpingWindowData;
struct FMotionWarpingSyncPoint;
struct FMotionDeltaTrackContainer;
struct FMotionDeltaTrack;
struct UAnimNotify_WarpingTarget;
struct UAnimNotifyState_MotionWarping;
struct UMotionWarpingUtilities;
struct UMotionWarpingComponent;
struct URootMotionModifier;
struct URootMotionModifier_Warp;
struct URootMotionModifier_Scale;
struct URootMotionModifier_CharacterPhysics;
struct URootMotionModifier_WarpWithoutRootMotion;
struct URootMotionModifier_OnlyWarpControlRotation;
struct URootMotionModifier_AdjustmentBlendWarp;
struct URootMotionModifier_SkewWarp;

// Object: Enum MotionWarping.EWarpPointAnimProvider
enum class EWarpPointAnimProvider : uint8_t
{
	None = 0,
	Static = 1,
	Bone = 2,
	EWarpPointAnimProvider_MAX = 3
};

// Object: Enum MotionWarping.EMotionWarpRotationType
enum class EMotionWarpRotationType : uint8_t
{
	Default = 0,
	Facing = 1,
	EMotionWarpRotationType_MAX = 2
};

// Object: Enum MotionWarping.ERootMotionModifierState
enum class ERootMotionModifierState : uint8_t
{
	Waiting = 0,
	Active = 1,
	MarkedForRemoval = 2,
	Disabled = 3,
	ERootMotionModifierState_MAX = 4
};

// Object: ScriptStruct MotionWarping.MotionWarpingWindowData
// Size: 0x10 (Inherited: 0x0)
struct FMotionWarpingWindowData
{
	struct UAnimNotifyState_MotionWarping* AnimNotify; // 0x0(0x8)
	float startTime; // 0x8(0x4)
	float endTime; // 0xC(0x4)
};

// Object: ScriptStruct MotionWarping.MotionWarpingSyncPoint
// Size: 0x20 (Inherited: 0x0)
struct FMotionWarpingSyncPoint
{
	struct FVector Location; // 0x0(0xC)
	uint8_t Pad_0xC[0x4]; // 0xC(0x4)
	struct FQuat Rotation; // 0x10(0x10)
};

// Object: ScriptStruct MotionWarping.MotionDeltaTrackContainer
// Size: 0x10 (Inherited: 0x0)
struct FMotionDeltaTrackContainer
{
	struct TArray<struct FMotionDeltaTrack> Tracks; // 0x0(0x10)
};

// Object: ScriptStruct MotionWarping.MotionDeltaTrack
// Size: 0x48 (Inherited: 0x0)
struct FMotionDeltaTrack
{
	struct TArray<struct FTransform> BoneTransformTrack; // 0x0(0x10)
	struct TArray<struct FVector> DeltaTranslationTrack; // 0x10(0x10)
	struct TArray<struct FRotator> DeltaRotationTrack; // 0x20(0x10)
	struct FVector TotalTranslation; // 0x30(0xC)
	struct FRotator TotalRotation; // 0x3C(0xC)
};

// Object: Class MotionWarping.AnimNotify_WarpingTarget
// Size: 0x40 (Inherited: 0x38)
struct UAnimNotify_WarpingTarget : UAnimNotify
{
	DEFINE_UE_CLASS_HELPERS(UAnimNotify_WarpingTarget, "AnimNotify_WarpingTarget")

	struct FName TargetName; // 0x38(0x8)
};

// Object: Class MotionWarping.AnimNotifyState_MotionWarping
// Size: 0x38 (Inherited: 0x30)
struct UAnimNotifyState_MotionWarping : UAnimNotifyState
{
	DEFINE_UE_CLASS_HELPERS(UAnimNotifyState_MotionWarping, "AnimNotifyState_MotionWarping")

	struct URootMotionModifier* RootMotionModifier; // 0x30(0x8)

	// Object: Function MotionWarping.AnimNotifyState_MotionWarping.OnWarpUpdate
	// Flags: [Event|Public|BlueprintEvent|Const]
	// Offset: 0x5d8cbc8
	// Params: [ Num(2) Size(0x10) ]
	void OnWarpUpdate(struct UMotionWarpingComponent* MotionWarpingComp, struct URootMotionModifier* Modifier);

	// Object: Function MotionWarping.AnimNotifyState_MotionWarping.OnWarpEnd
	// Flags: [Event|Public|BlueprintEvent|Const]
	// Offset: 0x5d8cbc8
	// Params: [ Num(2) Size(0x10) ]
	void OnWarpEnd(struct UMotionWarpingComponent* MotionWarpingComp, struct URootMotionModifier* Modifier);

	// Object: Function MotionWarping.AnimNotifyState_MotionWarping.OnWarpBegin
	// Flags: [Event|Public|BlueprintEvent|Const]
	// Offset: 0x5d8cbc8
	// Params: [ Num(2) Size(0x10) ]
	void OnWarpBegin(struct UMotionWarpingComponent* MotionWarpingComp, struct URootMotionModifier* Modifier);

	// Object: Function MotionWarping.AnimNotifyState_MotionWarping.OnRootMotionModifierUpdate
	// Flags: [Final|Native|Public|Const]
	// Offset: 0x8221d48
	// Params: [ Num(2) Size(0x10) ]
	void OnRootMotionModifierUpdate(struct UMotionWarpingComponent* MotionWarpingComp, struct URootMotionModifier* Modifier);

	// Object: Function MotionWarping.AnimNotifyState_MotionWarping.OnRootMotionModifierDeactivate
	// Flags: [Final|Native|Public|Const]
	// Offset: 0x8b87d24
	// Params: [ Num(2) Size(0x10) ]
	void OnRootMotionModifierDeactivate(struct UMotionWarpingComponent* MotionWarpingComp, struct URootMotionModifier* Modifier);

	// Object: Function MotionWarping.AnimNotifyState_MotionWarping.OnRootMotionModifierActivate
	// Flags: [Final|Native|Public|Const]
	// Offset: 0x89efa7c
	// Params: [ Num(2) Size(0x10) ]
	void OnRootMotionModifierActivate(struct UMotionWarpingComponent* MotionWarpingComp, struct URootMotionModifier* Modifier);

	// Object: Function MotionWarping.AnimNotifyState_MotionWarping.AddRootMotionModifier
	// Flags: [Native|Event|Public|BlueprintEvent|Const]
	// Offset: 0x9901320
	// Params: [ Num(5) Size(0x20) ]
	struct URootMotionModifier* AddRootMotionModifier(struct UMotionWarpingComponent* MotionWarpingComp, struct UAnimSequenceBase* Animation, float startTime, float endTime);
};

// Object: Class MotionWarping.MotionWarpingUtilities
// Size: 0x28 (Inherited: 0x28)
struct UMotionWarpingUtilities : UBlueprintFunctionLibrary
{
	DEFINE_UE_CLASS_HELPERS(UMotionWarpingUtilities, "MotionWarpingUtilities")

	// Object: Function MotionWarping.MotionWarpingUtilities.MakeMotionWarpingSyncPoint
	// Flags: [Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure]
	// Offset: 0x394813c
	// Params: [ Num(3) Size(0x40) ]
	static struct FMotionWarpingSyncPoint MakeMotionWarpingSyncPoint(struct FVector Location, struct FRotator Rotation);

	// Object: Function MotionWarping.MotionWarpingUtilities.GetMotionWarpingWindowsFromAnimation
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x3947f18
	// Params: [ Num(2) Size(0x18) ]
	static void GetMotionWarpingWindowsFromAnimation(struct UAnimSequenceBase* Animation, struct TArray<struct FMotionWarpingWindowData>& OutWindows);

	// Object: Function MotionWarping.MotionWarpingUtilities.GetMotionWarpingWindowsForSyncPointFromAnimation
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x3947de8
	// Params: [ Num(3) Size(0x20) ]
	static void GetMotionWarpingWindowsForSyncPointFromAnimation(struct UAnimSequenceBase* Animation, struct FName WarpTargetName, struct TArray<struct FMotionWarpingWindowData>& OutWindows);

	// Object: Function MotionWarping.MotionWarpingUtilities.ExtractRootMotionFromAnimation
	// Flags: [Final|Native|Static|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x3948008
	// Params: [ Num(4) Size(0x40) ]
	static struct FTransform ExtractRootMotionFromAnimation(struct UAnimSequenceBase* Animation, float startTime, float endTime);

	// Object: Function MotionWarping.MotionWarpingUtilities.BreakMotionWarpingSyncPoint
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure]
	// Offset: 0x394822c
	// Params: [ Num(3) Size(0x38) ]
	static void BreakMotionWarpingSyncPoint(const struct FMotionWarpingSyncPoint& SyncPoint, struct FVector& Location, struct FRotator& Rotation);
};

// Object: Class MotionWarping.MotionWarpingComponent
// Size: 0x1E0 (Inherited: 0xE0)
struct UMotionWarpingComponent : UActorComponent
{
	DEFINE_UE_CLASS_HELPERS(UMotionWarpingComponent, "MotionWarpingComponent")

	bool bSearchForWindowsInAnimsWithinMontages; // 0xE0(0x1)
	uint8_t Pad_0xE1[0x7]; // 0xE1(0x7)
	struct FMulticastInlineDelegate OnPreUpdate; // 0xE8(0x10)
	bool bPendingAutoResetVelocity; // 0xF8(0x1)
	uint8_t Pad_0xF9[0x3]; // 0xF9(0x3)
	struct TWeakObjectPtr<struct ACharacter> CharacterOwner; // 0xFC(0x8)
	uint8_t Pad_0x104[0x4]; // 0x104(0x4)
	struct TArray<struct URootMotionModifier*> Modifiers; // 0x108(0x10)
	struct TMap<struct FName, struct FMotionWarpingSyncPoint> SyncPoints; // 0x118(0x50)
	struct TMap<struct FName, float> SyncTargetToTime; // 0x168(0x50)
	uint8_t Pad_0x1B8[0x10]; // 0x1B8(0x10)
	struct URootMotionModifier_CharacterPhysics* CachedCharacterPhysicsModifier; // 0x1C8(0x8)
	struct TArray<uint8_t> CachedCollisionResponse; // 0x1D0(0x10)

	// Object: Function MotionWarping.MotionWarpingComponent.RemoveSyncPoint
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3948394
	// Params: [ Num(2) Size(0xC) ]
	int32_t RemoveSyncPoint(struct FName Name);

	// Object: Function MotionWarping.MotionWarpingComponent.OnCharacterPhysicsMontageEnded
	// Flags: [Final|Native|Protected]
	// Offset: 0x86e5868
	// Params: [ Num(2) Size(0x9) ]
	void OnCharacterPhysicsMontageEnded(struct UAnimMontage* Montage, bool bInterrupted);

	// Object: Function MotionWarping.MotionWarpingComponent.AddOrUpdateSyncPoint
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x3948444
	// Params: [ Num(2) Size(0x30) ]
	void AddOrUpdateSyncPoint(struct FName Name, const struct FMotionWarpingSyncPoint& SyncPoint);
};

// Object: Class MotionWarping.RootMotionModifier
// Size: 0x80 (Inherited: 0x28)
struct URootMotionModifier : UObject
{
	DEFINE_UE_CLASS_HELPERS(URootMotionModifier, "RootMotionModifier")

	struct TWeakObjectPtr<struct UAnimSequenceBase> Animation; // 0x28(0x8)
	float startTime; // 0x30(0x4)
	float endTime; // 0x34(0x4)
	float PreviousPosition; // 0x38(0x4)
	float CurrentPosition; // 0x3C(0x4)
	float Weight; // 0x40(0x4)
	bool bInLocalSpace; // 0x44(0x1)
	uint8_t Pad_0x45[0x3]; // 0x45(0x3)
	struct FDelegate OnActivateDelegate; // 0x48(0x10)
	struct FDelegate OnUpdateDelegate; // 0x58(0x10)
	struct FDelegate OnDeactivateDelegate; // 0x68(0x10)
	ERootMotionModifierState State; // 0x78(0x1)
	uint8_t Pad_0x79[0x7]; // 0x79(0x7)
};

// Object: Class MotionWarping.RootMotionModifier_Warp
// Size: 0x160 (Inherited: 0x80)
struct URootMotionModifier_Warp : URootMotionModifier
{
	DEFINE_UE_CLASS_HELPERS(URootMotionModifier_Warp, "RootMotionModifier_Warp")

	struct FName WarpTargetName; // 0x7C(0x8)
	EWarpPointAnimProvider WarpPointAnimProvider; // 0x84(0x1)
	uint8_t Pad_0x89[0x7]; // 0x89(0x7)
	struct FTransform WarpPointAnimTransform; // 0x90(0x30)
	struct FName WarpPointAnimBoneName; // 0xC0(0x8)
	bool bWarpTranslation; // 0xC8(0x1)
	bool bIgnoreZAxis; // 0xC9(0x1)
	bool bWarpRotation; // 0xCA(0x1)
	EMotionWarpRotationType RotationType; // 0xCB(0x1)
	bool bAdjustPlayRate; // 0xCC(0x1)
	uint8_t Pad_0xCD[0x3]; // 0xCD(0x3)
	float MaxWarpScale; // 0xD0(0x4)
	float WarpPlayRateAlpha; // 0xD4(0x4)
	float CachedTargetTime; // 0xD8(0x4)
	bool bEnableInterruptByInput; // 0xDC(0x1)
	bool bWarpControlRotation; // 0xDD(0x1)
	bool bWarpControlRotationIgnorePitch; // 0xDE(0x1)
	bool bAutoResetVelocity; // 0xDF(0x1)
	float WarpRotationTimeMultiplier; // 0xE0(0x4)
	uint8_t Pad_0xE4[0xC]; // 0xE4(0xC)
	struct FTransform CachedTargetTransform; // 0xF0(0x30)
	uint8_t Pad_0x120[0x40]; // 0x120(0x40)

	// Object: Function MotionWarping.RootMotionModifier_Warp.AddRootMotionModifierSimpleWarp
	// Flags: [Final|Native|Static|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x39486cc
	// Params: [ Num(14) Size(0x78) ]
	static struct URootMotionModifier_Warp* AddRootMotionModifierSimpleWarp(struct UMotionWarpingComponent* InMotionWarpingComp, struct UAnimSequenceBase* InAnimation, float InStartTime, float InEndTime, struct FName InWarpTargetName, EWarpPointAnimProvider InWarpPointAnimProvider, struct FTransform InWarpPointAnimTransform, struct FName InWarpPointAnimBoneName, bool bInWarpTranslation, bool bInIgnoreZAxis, bool bInWarpRotation, EMotionWarpRotationType InRotationType, float InWarpRotationTimeMultiplier);
};

// Object: Class MotionWarping.RootMotionModifier_Scale
// Size: 0x88 (Inherited: 0x80)
struct URootMotionModifier_Scale : URootMotionModifier
{
	DEFINE_UE_CLASS_HELPERS(URootMotionModifier_Scale, "RootMotionModifier_Scale")

	struct FVector Scale; // 0x7C(0xC)
};

// Object: Class MotionWarping.RootMotionModifier_CharacterPhysics
// Size: 0x90 (Inherited: 0x80)
struct URootMotionModifier_CharacterPhysics : URootMotionModifier
{
	DEFINE_UE_CLASS_HELPERS(URootMotionModifier_CharacterPhysics, "RootMotionModifier_CharacterPhysics")

	bool bIgnoreCollision; // 0x79(0x1)
	bool bIgnoreGravity; // 0x7A(0x1)
	bool bRevertWalkMovementMode; // 0x7B(0x1)
	bool bRevertCharacterPhysicsEffect; // 0x7C(0x1)
	uint8_t MovementMode; // 0x7D(0x1)
	struct TArray<uint8_t> ProcessedCollisionChannels; // 0x80(0x10)
};

// Object: Class MotionWarping.RootMotionModifier_WarpWithoutRootMotion
// Size: 0x1F0 (Inherited: 0x160)
struct URootMotionModifier_WarpWithoutRootMotion : URootMotionModifier_Warp
{
	DEFINE_UE_CLASS_HELPERS(URootMotionModifier_WarpWithoutRootMotion, "RootMotionModifier_WarpWithoutRootMotion")

	uint8_t Pad_0x160[0x90]; // 0x160(0x90)
};

// Object: Class MotionWarping.RootMotionModifier_OnlyWarpControlRotation
// Size: 0x80 (Inherited: 0x80)
struct URootMotionModifier_OnlyWarpControlRotation : URootMotionModifier
{
	DEFINE_UE_CLASS_HELPERS(URootMotionModifier_OnlyWarpControlRotation, "RootMotionModifier_OnlyWarpControlRotation")

	float LerpPitchAlpha; // 0x7C(0x4)
};

// Object: Class MotionWarping.RootMotionModifier_AdjustmentBlendWarp
// Size: 0x240 (Inherited: 0x160)
struct URootMotionModifier_AdjustmentBlendWarp : URootMotionModifier_Warp
{
	DEFINE_UE_CLASS_HELPERS(URootMotionModifier_AdjustmentBlendWarp, "RootMotionModifier_AdjustmentBlendWarp")

	bool bWarpIKBones; // 0x160(0x1)
	uint8_t Pad_0x161[0x7]; // 0x161(0x7)
	struct TArray<struct FName> IKBones; // 0x168(0x10)
	uint8_t Pad_0x178[0x8]; // 0x178(0x8)
	struct FTransform CachedMeshTransform; // 0x180(0x30)
	struct FTransform CachedMeshRelativeTransform; // 0x1B0(0x30)
	struct FTransform CachedRootMotion; // 0x1E0(0x30)
	struct FAnimSequenceTrackContainer Result; // 0x210(0x20)
	float ActualStartTime; // 0x230(0x4)
	uint8_t Pad_0x234[0xC]; // 0x234(0xC)

	// Object: Function MotionWarping.RootMotionModifier_AdjustmentBlendWarp.GetAdjustmentBlendIKBoneTransformAndAlpha
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure]
	// Offset: 0x3948c74
	// Params: [ Num(4) Size(0x44) ]
	static void GetAdjustmentBlendIKBoneTransformAndAlpha(struct ACharacter* Character, struct FName BoneName, struct FTransform& OutTransform, float& OutAlpha);

	// Object: Function MotionWarping.RootMotionModifier_AdjustmentBlendWarp.AddRootMotionModifierAdjustmentBlendWarp
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable]
	// Offset: 0x3948e10
	// Params: [ Num(14) Size(0x88) ]
	static struct URootMotionModifier_AdjustmentBlendWarp* AddRootMotionModifierAdjustmentBlendWarp(struct UMotionWarpingComponent* InMotionWarpingComp, struct UAnimSequenceBase* InAnimation, float InStartTime, float InEndTime, struct FName InWarpTargetName, EWarpPointAnimProvider InWarpPointAnimProvider, struct FTransform InWarpPointAnimTransform, struct FName InWarpPointAnimBoneName, bool bInWarpTranslation, bool bInIgnoreZAxis, bool bInWarpRotation, bool bInWarpIKBones, const struct TArray<struct FName>& InIKBones);
};

// Object: Class MotionWarping.RootMotionModifier_SkewWarp
// Size: 0x160 (Inherited: 0x160)
struct URootMotionModifier_SkewWarp : URootMotionModifier_Warp
{
	DEFINE_UE_CLASS_HELPERS(URootMotionModifier_SkewWarp, "RootMotionModifier_SkewWarp")

	// Object: Function MotionWarping.RootMotionModifier_SkewWarp.AddRootMotionModifierSkewWarp
	// Flags: [Final|Native|Static|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x3949284
	// Params: [ Num(14) Size(0x78) ]
	static struct URootMotionModifier_SkewWarp* AddRootMotionModifierSkewWarp(struct UMotionWarpingComponent* InMotionWarpingComp, struct UAnimSequenceBase* InAnimation, float InStartTime, float InEndTime, struct FName InWarpTargetName, EWarpPointAnimProvider InWarpPointAnimProvider, struct FTransform InWarpPointAnimTransform, struct FName InWarpPointAnimBoneName, bool bInWarpTranslation, bool bInIgnoreZAxis, bool bInWarpRotation, EMotionWarpRotationType InRotationType, float InWarpRotationTimeMultiplier);
};

} // namespace SDK
