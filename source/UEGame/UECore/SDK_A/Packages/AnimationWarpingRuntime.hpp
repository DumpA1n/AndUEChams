#pragma once

#include "../CoreUObject_classes.hpp"
#include "AnimGraphRuntime.hpp"
#include "Engine.hpp"

namespace SDK
{

// Package: AnimationWarpingRuntime
// Enums: 1
// Structs: 10
// Classes: 0

struct FBoneReference;
struct FOrientationWarpingSettings;
struct FAnimNode_OrientationWarping;
struct FOrientationWarpingSpineBoneData;
struct FOrientationWarpingSpineBoneSettings;
struct FAnimNode_SlopeWarping;
struct FSlopeWarpingFootData;
struct FSlopeWarpingFootDefinition;
struct FAnimNode_StrideWarping;
struct FStrideWarpingFootData;
struct FStrideWarpingFootDefinition;

// Object: Enum AnimationWarpingRuntime.EStrideWarpingAxisMode
enum class EStrideWarpingAxisMode : uint8_t
{
	IKFootRootLocalX = 0,
	IKFootRootLocalY = 1,
	IKFootRootLocalZ = 2,
	WorldSpaceVectorInput = 3,
	ComponentSpaceVectorInput = 4,
	ActorSpaceVectorInput = 5,
	EStrideWarpingAxisMode_MAX = 6
};

// Object: ScriptStruct AnimationWarpingRuntime.OrientationWarpingSettings
// Size: 0x38 (Inherited: 0x0)
struct FOrientationWarpingSettings
{
	uint8_t YawRotationAxis; // 0x0(0x1)
	uint8_t Pad_0x1[0x3]; // 0x1(0x3)
	float BodyOrientationAlpha; // 0x4(0x4)
	struct TArray<struct FOrientationWarpingSpineBoneSettings> SpineBones; // 0x8(0x10)
	struct FBoneReference IkFootRootBone; // 0x18(0x10)
	struct TArray<struct FBoneReference> IKFootBones; // 0x28(0x10)
};

// Object: ScriptStruct AnimationWarpingRuntime.AnimNode_OrientationWarping
// Size: 0x168 (Inherited: 0xD0)
struct FAnimNode_OrientationWarping : FAnimNode_SkeletalControlBase
{
	float LocomotionAngle; // 0xCC(0x4)
	float ActualLocomotionAngle; // 0xD0(0x4)
	struct FInputScaleBiasClamp LocomotionAngleBiasClamp; // 0xD4(0x30)
	struct FOrientationWarpingSettings Settings; // 0x108(0x38)
	struct TArray<struct FOrientationWarpingSpineBoneData> SpineBoneDataArray; // 0x140(0x10)
	uint8_t Pad_0x150[0x14]; // 0x150(0x14)
	float CachedDeltaTime; // 0x164(0x4)
};

// Object: ScriptStruct AnimationWarpingRuntime.OrientationWarpingSpineBoneData
// Size: 0x8 (Inherited: 0x0)
struct FOrientationWarpingSpineBoneData
{
	uint8_t Pad_0x0[0x8]; // 0x0(0x8)
};

// Object: ScriptStruct AnimationWarpingRuntime.OrientationWarpingSpineBoneSettings
// Size: 0x10 (Inherited: 0x0)
struct FOrientationWarpingSpineBoneSettings
{
	struct FBoneReference Bone; // 0x0(0x10)
};

// Object: ScriptStruct AnimationWarpingRuntime.AnimNode_SlopeWarping
// Size: 0x230 (Inherited: 0xD0)
struct FAnimNode_SlopeWarping : FAnimNode_SkeletalControlBase
{
	uint8_t Pad_0xD0[0x18]; // 0xD0(0x18)
	struct FBoneReference IkFootRootBone; // 0xE8(0x10)
	struct FBoneReference PelvisBone; // 0xF8(0x10)
	struct TArray<struct FSlopeWarpingFootDefinition> FeetDefinitions; // 0x108(0x10)
	struct TArray<struct FSlopeWarpingFootData> FeetData; // 0x118(0x10)
	struct FVectorRK4SpringInterpolator PelvisOffsetInterpolator; // 0x128(0x8)
	uint8_t Pad_0x130[0x34]; // 0x130(0x34)
	struct FVector GravityDir; // 0x164(0xC)
	struct FVector CustomFloorOffset; // 0x170(0xC)
	float CachedDeltaTime; // 0x17C(0x4)
	struct FVector TargetFloorNormalWorldSpace; // 0x180(0xC)
	struct FVectorRK4SpringInterpolator FloorNormalInterpolator; // 0x18C(0x8)
	uint8_t Pad_0x194[0x34]; // 0x194(0x34)
	struct FVector TargetFloorOffsetLocalSpace; // 0x1C8(0xC)
	struct FVectorRK4SpringInterpolator FloorOffsetInterpolator; // 0x1D4(0x8)
	uint8_t Pad_0x1DC[0x34]; // 0x1DC(0x34)
	float MaxStepHeight; // 0x210(0x4)
	uint8_t bKeepMeshInsideOfCapsule : 1; // 0x214(0x1), Mask(0x1)
	uint8_t bPullPelvisDown : 1; // 0x214(0x1), Mask(0x2)
	uint8_t bUseCustomFloorOffset : 1; // 0x214(0x1), Mask(0x4)
	uint8_t bWasOnGround : 1; // 0x214(0x1), Mask(0x8)
	uint8_t bShowDebug : 1; // 0x214(0x1), Mask(0x10)
	uint8_t bFloorSmoothingInitialized : 1; // 0x214(0x1), Mask(0x20)
	uint8_t BitPad_0x214_6 : 2; // 0x214(0x1)
	uint8_t Pad_0x215[0x3]; // 0x215(0x3)
	struct FVector ActorLocation; // 0x218(0xC)
	struct FVector GravityDirCompSpace; // 0x224(0xC)
};

// Object: ScriptStruct AnimationWarpingRuntime.SlopeWarpingFootData
// Size: 0x60 (Inherited: 0x0)
struct FSlopeWarpingFootData
{
	uint8_t Pad_0x0[0x60]; // 0x0(0x60)
};

// Object: ScriptStruct AnimationWarpingRuntime.SlopeWarpingFootDefinition
// Size: 0x28 (Inherited: 0x0)
struct FSlopeWarpingFootDefinition
{
	struct FBoneReference IKFootBone; // 0x0(0x10)
	struct FBoneReference FKFootBone; // 0x10(0x10)
	int32_t NumBonesInLimb; // 0x20(0x4)
	float FootSize; // 0x24(0x4)
};

// Object: ScriptStruct AnimationWarpingRuntime.AnimNode_StrideWarping
// Size: 0x1C0 (Inherited: 0xD0)
struct FAnimNode_StrideWarping : FAnimNode_SkeletalControlBase
{
	uint8_t Pad_0xD0[0x8]; // 0xD0(0x8)
	struct FBoneReference IkFootRootBone; // 0xD8(0x10)
	struct TArray<struct FStrideWarpingFootDefinition> FeetDefinitions; // 0xE8(0x10)
	struct TArray<struct FStrideWarpingFootData> FeetData; // 0xF8(0x10)
	struct FBoneReference PelvisBone; // 0x108(0x10)
	EStrideWarpingAxisMode StrideWarpingAxisMode; // 0x118(0x1)
	EStrideWarpingAxisMode FloorNormalAxisMode; // 0x119(0x1)
	EStrideWarpingAxisMode GravityDirAxisMode; // 0x11A(0x1)
	uint8_t Pad_0x11B[0x1]; // 0x11B(0x1)
	float StrideScaling; // 0x11C(0x4)
	struct FInputScaleBiasClamp StrideScalingScaleBiasClamp; // 0x120(0x30)
	struct FVector ManualStrideWarpingDir; // 0x150(0xC)
	struct FVector ManualFloorNormalInput; // 0x15C(0xC)
	struct FVector ManualGravityDirInput; // 0x168(0xC)
	float PelvisPostAdjustmentAlpha; // 0x174(0x4)
	int32_t PelvisAdjustmentMaxIter; // 0x178(0x4)
	struct FVectorRK4SpringInterpolator PelvisAdjustmentInterp; // 0x17C(0x8)
	uint8_t Pad_0x184[0x34]; // 0x184(0x34)
	uint8_t bAdjustThighBonesRotation : 1; // 0x1B8(0x1), Mask(0x1)
	uint8_t bClampIKUsingFKLeg : 1; // 0x1B8(0x1), Mask(0x2)
	uint8_t bOrientStrideWarpingAxisBasedOnFloorNormal : 1; // 0x1B8(0x1), Mask(0x4)
	uint8_t BitPad_0x1B8_3 : 5; // 0x1B8(0x1)
	uint8_t Pad_0x1B9[0x3]; // 0x1B9(0x3)
	float CachedDeltaTime; // 0x1BC(0x4)
};

// Object: ScriptStruct AnimationWarpingRuntime.StrideWarpingFootData
// Size: 0x40 (Inherited: 0x0)
struct FStrideWarpingFootData
{
	uint8_t Pad_0x0[0x40]; // 0x0(0x40)
};

// Object: ScriptStruct AnimationWarpingRuntime.StrideWarpingFootDefinition
// Size: 0x24 (Inherited: 0x0)
struct FStrideWarpingFootDefinition
{
	struct FBoneReference IKFootBone; // 0x0(0x10)
	struct FBoneReference FKFootBone; // 0x10(0x10)
	int32_t NumBonesInLimb; // 0x20(0x4)
};

} // namespace SDK
