#pragma once

#include "../CoreUObject_classes.hpp"
#include "AnimGraphRuntime.hpp"
#include "AnimationCore.hpp"
#include "Engine.hpp"

namespace SDK
{

// Package: ZZAnimationLib
// Enums: 7
// Structs: 56
// Classes: 7

struct AActor;
enum class EAlphaBlendOption : uint8_t;
enum class EBoneControlSpace : uint8_t;
enum class EBoneModificationMode : uint8_t;
enum class ECollisionChannel : uint8_t;
enum class ECurveBlendOption : uint8_t;
struct FBoneReference;
struct FPerBoneBlendWeight;
struct UAnimInstance;
struct UAnimSequence;
struct UAnimSequenceBase;
struct UCharacterMovementComponent;
struct UCurveFloat;
struct USkinnedMeshComponent;
struct UWorld;
struct FAnimNode_CacheBlend;
struct FCacheBlendPose;
struct FZZBlueprintableLegDefinition;
struct FAnimNode_ConstraintedLegIK;
struct FZZAnimConstraintedLegIKDefinition;
struct FZZBoneAngleConstraints;
struct FZZAnimConstraintedLegIKData;
struct FZZConstraintedIKChain;
struct FZZConstraintedIKChainLink;
struct FFootIKRootBoneInfo;
struct FFootIKTraceInfo;
struct FAnimNode_FootIK;
struct FFootIKBoneInfo;
struct FAnimNode_LayeredBoneBlendSlotOpt;
struct FAnimNode_LinearSplineIK;
struct FLinearSplineIKCachedBoneData;
struct FAnimNode_ModifyBoneOffset;
struct FModifyMultBoneStructForPin;
struct FAnimNode_ModifyMultBone;
struct FAnimNode_NaNGuard;
struct FAxisSettings;
struct FAnimMode_OrientationWarping;
struct FBoneRef;
struct FPartAnimStructForPin;
struct FAnimNode_PartAnimPlayer;
struct FAnimNode_ResetNaN;
struct FAnimNode_ResetPose;
struct FAnimNode_SafeModifyBone;
struct FAnimNode_SlopeWarping;
struct FSlopeWarpingFootData;
struct FSlopeWarpingFootDefinition;
struct FPelvisAdjustmentInterp;
struct FAnimNode_SpeedWarping;
struct FIKBones;
struct FIKFootLocation;
struct FAnimInstanceAttributeDict;
struct FDynamicAttrAnimInstanceProxy;
struct FMSAISkeletalMeshComponentAppendedTickFunction;
struct FCustomizedOrientationWarpingAngleSetting;
struct FCustomizedOrientationWarpingAngleRange;
struct FJogStartAnimBPValues;
struct FAnimMovementData;
struct FAnimNode_CCDLookAt;
struct FCCDLookAtEyeBoneInfo;
struct FCCDLookAtBoneInfo;
struct FCCDEyeballBone;
struct FCCDLookAtBone;
struct FCCDLookAtFixBone;
struct FAnimNode_CSCopySingleBone;
struct FFootLockLimbDataDefine;
struct FAnimNode_FootModify;
struct FZZAnimNode_HoldGunIK;
struct FAnimNode_LayerBlend2;
struct FSingleBoneLayeredConfig;
struct FAnimNode_SpringArmSocket;
struct FAnimNode_VirtualParent;
struct UDynamicAttributtAnimInstance;
struct UJogStartingComponent;
struct UJogStopComponent;
struct UMSAISkeletalMeshComponent;
struct UZZAnimationLibBPLibrary;
struct IZZAnimAttrFetchInterface;
struct UZZAnimSettings;

// Object: Enum ZZAnimationLib.ECacheBlendBoneState
enum class ECacheBlendBoneState : uint8_t
{
	Invalid = 0,
	Valid = 1,
	Excluded = 2,
	ECacheBlendBoneState_MAX = 3
};

// Object: Enum ZZAnimationLib.EFootIKStatus
enum class EFootIKStatus : uint8_t
{
	On = 0,
	Closing = 1,
	EFootIKStatus_MAX = 2
};

// Object: Enum ZZAnimationLib.ELinearSplineBoneAxis
enum class ELinearSplineBoneAxis : uint8_t
{
	None = 0,
	X = 1,
	Y = 2,
	Z = 3,
	ELinearSplineBoneAxis_MAX = 4
};

// Object: Enum ZZAnimationLib.EIKFootRootLocalAxis
enum class EIKFootRootLocalAxis : uint8_t
{
	NONE = 0,
	X = 1,
	Y = 2,
	Z = 3,
	Velocity = 4,
	EIKFootRootLocalAxis_MAX = 5
};

// Object: Enum ZZAnimationLib.EFindTargetFrameResult
enum class EFindTargetFrameResult : uint8_t
{
	NORMAL = 0,
	CANNOTFIND = 1,
	DIVIDEBYZERO = 2,
	Count = 3,
	EFindTargetFrameResult_MAX = 4
};

// Object: Enum ZZAnimationLib.ECharacterLocalDirection
enum class ECharacterLocalDirection : uint8_t
{
	NORTH = 0,
	EAST = 1,
	SOUTH = 2,
	WEST = 3,
	Count = 4,
	ECharacterLocalDirection_MAX = 5
};

// Object: Enum ZZAnimationLib.CopySingleBoneMode
enum class ECopySingleBoneMode : uint8_t
{
	Accumulate = 0,
	Copy = 1,
	CopySingleBoneMode_MAX = 2
};

// Object: ScriptStruct ZZAnimationLib.AnimNode_CacheBlend
// Size: 0x2F0 (Inherited: 0x48)
struct FAnimNode_CacheBlend : FAnimNode_Base
{
	struct FPoseLink Source; // 0x48(0x18)
	float BlendTime; // 0x60(0x4)
	uint8_t ToggleFlag : 1; // 0x64(0x1), Mask(0x1)
	uint8_t BitPad_0x64_1 : 7; // 0x64(0x1)
	EAlphaBlendOption BlendType; // 0x65(0x1)
	uint8_t Pad_0x66[0x2]; // 0x66(0x2)
	struct UCurveFloat* CustomBlendCurve; // 0x68(0x8)
	int32_t LODThreshold; // 0x70(0x4)
	uint8_t Pad_0x74[0x4]; // 0x74(0x4)
	uint8_t bResetChildOnActivation : 1; // 0x78(0x1), Mask(0x1)
	uint8_t BitPad_0x78_1 : 7; // 0x78(0x1)
	uint8_t Pad_0x79[0x277]; // 0x79(0x277)
};

// Object: ScriptStruct ZZAnimationLib.CacheBlendPose
// Size: 0x20 (Inherited: 0x0)
struct FCacheBlendPose
{
	uint8_t Pad_0x0[0x20]; // 0x0(0x20)
};

// Object: ScriptStruct ZZAnimationLib.ZZBlueprintableLegDefinition
// Size: 0x10 (Inherited: 0x0)
struct FZZBlueprintableLegDefinition
{
	struct TArray<struct FZZAnimConstraintedLegIKDefinition> Legs; // 0x0(0x10)
};

// Object: ScriptStruct ZZAnimationLib.AnimNode_ConstraintedLegIK
// Size: 0x138 (Inherited: 0x108)
struct FAnimNode_ConstraintedLegIK : FAnimNode_SkeletalControlBase
{
	float ReachPrecision; // 0x108(0x4)
	int32_t MaxIterations; // 0x10C(0x4)
	struct FZZBlueprintableLegDefinition LegsDefinition; // 0x110(0x10)
	uint8_t Pad_0x120[0x18]; // 0x120(0x18)
};

// Object: ScriptStruct ZZAnimationLib.ZZAnimConstraintedLegIKDefinition
// Size: 0x40 (Inherited: 0x0)
struct FZZAnimConstraintedLegIKDefinition
{
	struct FBoneReference IKFootBone; // 0x0(0x10)
	struct FBoneReference FKFootBone; // 0x10(0x10)
	int32_t NumBonesInLimb; // 0x20(0x4)
	float MinRotationAngle; // 0x24(0x4)
	struct TArray<struct FZZBoneAngleConstraints> BoneConstraints; // 0x28(0x10)
	EAxis FootBoneForwardAxis; // 0x38(0x1)
	EAxis HingeRotationAxis; // 0x39(0x1)
	uint8_t bEnableRotationLimit : 1; // 0x3A(0x1), Mask(0x1)
	uint8_t BitPad_0x3A_1 : 7; // 0x3A(0x1)
	uint8_t bEnableKneeTwistCorrection : 1; // 0x3B(0x1), Mask(0x1)
	uint8_t BitPad_0x3B_1 : 7; // 0x3B(0x1)
	uint8_t Pad_0x3C[0x4]; // 0x3C(0x4)
};

// Object: ScriptStruct ZZAnimationLib.ZZBoneAngleConstraints
// Size: 0x1C (Inherited: 0x0)
struct FZZBoneAngleConstraints
{
	struct FBoneReference BoneName; // 0x0(0x10)
	float MinRotationAngleRadians; // 0x10(0x4)
	float AngleRange; // 0x14(0x4)
	EAxis ConstraintPlaneNormalAxis; // 0x18(0x1)
	uint8_t FlipAxis : 1; // 0x19(0x1), Mask(0x1)
	uint8_t BitPad_0x19_1 : 7; // 0x19(0x1)
	uint8_t EnableLimit : 1; // 0x1A(0x1), Mask(0x1)
	uint8_t BitPad_0x1A_1 : 7; // 0x1A(0x1)
	uint8_t Pad_0x1B[0x1]; // 0x1B(0x1)
};

// Object: ScriptStruct ZZAnimationLib.ZZAnimConstraintedLegIKData
// Size: 0xA0 (Inherited: 0x0)
struct FZZAnimConstraintedLegIKData
{
	uint8_t Pad_0x0[0xA0]; // 0x0(0xA0)
};

// Object: ScriptStruct ZZAnimationLib.ZZConstraintedIKChain
// Size: 0x40 (Inherited: 0x0)
struct FZZConstraintedIKChain
{
	uint8_t Pad_0x0[0x40]; // 0x0(0x40)
};

// Object: ScriptStruct ZZAnimationLib.ZZConstraintedIKChainLink
// Size: 0x3C (Inherited: 0x0)
struct FZZConstraintedIKChainLink
{
	uint8_t Pad_0x0[0x3C]; // 0x0(0x3C)
};

// Object: ScriptStruct ZZAnimationLib.FootIKRootBoneInfo
// Size: 0x60 (Inherited: 0x0)
struct FFootIKRootBoneInfo
{
	struct FBoneReference RootBone; // 0x0(0x10)
	float IdleLerpHalfLifeTime; // 0x10(0x4)
	uint8_t Pad_0x14[0x4C]; // 0x14(0x4C)
};

// Object: ScriptStruct ZZAnimationLib.FootIKTraceInfo
// Size: 0x10 (Inherited: 0x0)
struct FFootIKTraceInfo
{
	ECollisionChannel CollisionChannel; // 0x0(0x1)
	uint8_t TraceComplex : 1; // 0x1(0x1), Mask(0x1)
	uint8_t BitPad_0x1_1 : 7; // 0x1(0x1)
	uint8_t bUseSphereTrace : 1; // 0x2(0x1), Mask(0x1)
	uint8_t BitPad_0x2_1 : 7; // 0x2(0x1)
	uint8_t Pad_0x3[0x1]; // 0x3(0x1)
	float SphereTraceRadius; // 0x4(0x4)
	float RayCastUp; // 0x8(0x4)
	float RayCastDown; // 0xC(0x4)
};

// Object: ScriptStruct ZZAnimationLib.AnimNode_FootIK
// Size: 0x240 (Inherited: 0x108)
struct FAnimNode_FootIK : FAnimNode_SkeletalControlBase
{
	uint8_t bUseRaiseFootIK : 1; // 0x108(0x1), Mask(0x1)
	uint8_t BitPad_0x108_1 : 7; // 0x108(0x1)
	uint8_t Pad_0x109[0x3]; // 0x109(0x3)
	struct FBoneReference IKGunBone; // 0x10C(0x10)
	uint8_t Pad_0x11C[0x4]; // 0x11C(0x4)
	struct FFootIKRootBoneInfo HipsBone; // 0x120(0x60)
	struct TArray<struct FFootIKBoneInfo> Foot; // 0x180(0x10)
	float FootHeightFromGround; // 0x190(0x4)
	struct FFootIKTraceInfo TraceInfo; // 0x194(0x10)
	float MaxDeltaAngle; // 0x1A4(0x4)
	float MaxStretchLength; // 0x1A8(0x4)
	uint8_t EnablePredictPath : 1; // 0x1AC(0x1), Mask(0x1)
	uint8_t BitPad_0x1AC_1 : 7; // 0x1AC(0x1)
	uint8_t Pad_0x1AD[0x3]; // 0x1AD(0x3)
	struct FVector CharacterVelocity; // 0x1B0(0xC)
	float NormalizedSpeed; // 0x1BC(0x4)
	float BSPlayingRate; // 0x1C0(0x4)
	float CharacterMaxStepHeight; // 0x1C4(0x4)
	float CharacterMaxStepHeightForWalk; // 0x1C8(0x4)
	float FootOnGroundThreshold; // 0x1CC(0x4)
	uint8_t Pad_0x1D0[0x8]; // 0x1D0(0x8)
	struct UWorld* World; // 0x1D8(0x8)
	uint8_t Pad_0x1E0[0x60]; // 0x1E0(0x60)
};

// Object: ScriptStruct ZZAnimationLib.FootIKBoneInfo
// Size: 0x240 (Inherited: 0x0)
struct FFootIKBoneInfo
{
	uint8_t bIsLeft : 1; // 0x0(0x1), Mask(0x1)
	uint8_t BitPad_0x0_1 : 7; // 0x0(0x1)
	uint8_t Pad_0x1[0x3]; // 0x1(0x3)
	struct FBoneReference FootBone; // 0x4(0x10)
	struct FBoneReference FootIKBone; // 0x14(0x10)
	uint8_t Pad_0x24[0x8]; // 0x24(0x8)
	struct FVector JointTargetOffset; // 0x2C(0xC)
	uint8_t Pad_0x38[0x208]; // 0x38(0x208)
};

// Object: ScriptStruct ZZAnimationLib.AnimNode_LayeredBoneBlendSlotOpt
// Size: 0x120 (Inherited: 0x88)
struct FAnimNode_LayeredBoneBlendSlotOpt : FAnimNode_Slot
{
	struct FPoseLink BasePose; // 0x88(0x18)
	struct FInputBlendPose LayerSetup; // 0xA0(0x10)
	float BlendWeight; // 0xB0(0x4)
	uint8_t bMeshSpaceRotationBlend : 1; // 0xB4(0x1), Mask(0x1)
	uint8_t BitPad_0xB4_1 : 7; // 0xB4(0x1)
	uint8_t bMeshSpaceScaleBlend : 1; // 0xB5(0x1), Mask(0x1)
	uint8_t BitPad_0xB5_1 : 7; // 0xB5(0x1)
	ECurveBlendOption CurveBlendOption; // 0xB6(0x1)
	uint8_t bBlendRootMotionBasedOnRootBone : 1; // 0xB7(0x1), Mask(0x1)
	uint8_t BitPad_0xB7_1 : 7; // 0xB7(0x1)
	uint8_t Pad_0xB8[0x4]; // 0xB8(0x4)
	int32_t LODThreshold; // 0xBC(0x4)
	struct TArray<struct FPerBoneBlendWeight> PerBoneBlendWeights; // 0xC0(0x10)
	struct FGuid SkeletonGuid; // 0xD0(0x10)
	struct FGuid VirtualBoneGuid; // 0xE0(0x10)
	uint8_t Pad_0xF0[0x30]; // 0xF0(0x30)
};

// Object: ScriptStruct ZZAnimationLib.AnimNode_LinearSplineIK
// Size: 0x2A8 (Inherited: 0x108)
struct FAnimNode_LinearSplineIK : FAnimNode_SkeletalControlBase
{
	struct FBoneReference StartBone; // 0x108(0x10)
	struct FBoneReference EndBone; // 0x118(0x10)
	ELinearSplineBoneAxis BoneAxis; // 0x128(0x1)
	uint8_t bAutoCalculateSpline : 1; // 0x129(0x1), Mask(0x1)
	uint8_t BitPad_0x129_1 : 7; // 0x129(0x1)
	uint8_t Pad_0x12A[0x2]; // 0x12A(0x2)
	int32_t PointCount; // 0x12C(0x4)
	struct TArray<struct FTransform> ControlPoints; // 0x130(0x10)
	float Roll; // 0x140(0x4)
	float TwistStart; // 0x144(0x4)
	float TwistEnd; // 0x148(0x4)
	uint8_t Pad_0x14C[0x4]; // 0x14C(0x4)
	struct FAlphaBlend TwistBlend; // 0x150(0x30)
	float Stretch; // 0x180(0x4)
	float offset; // 0x184(0x4)
	EInterpCurveMode PositionInterpMode; // 0x188(0x1)
	EInterpCurveMode RotationInterpMode; // 0x189(0x1)
	EInterpCurveMode ScaleInterpMode; // 0x18A(0x1)
	uint8_t Pad_0x18B[0x11D]; // 0x18B(0x11D)
};

// Object: ScriptStruct ZZAnimationLib.LinearSplineIKCachedBoneData
// Size: 0x14 (Inherited: 0x0)
struct FLinearSplineIKCachedBoneData
{
	struct FBoneReference Bone; // 0x0(0x10)
	int32_t RefSkeletonIndex; // 0x10(0x4)
};

// Object: ScriptStruct ZZAnimationLib.AnimNode_ModifyBoneOffset
// Size: 0x150 (Inherited: 0x108)
struct FAnimNode_ModifyBoneOffset : FAnimNode_SkeletalControlBase
{
	struct FBoneReference BoneToModify; // 0x108(0x10)
	struct FVector translation; // 0x118(0xC)
	struct FRotator Rotation; // 0x124(0xC)
	EBoneModificationMode TranslationMode; // 0x130(0x1)
	EBoneModificationMode RotationMode; // 0x131(0x1)
	uint8_t Pad_0x132[0x2]; // 0x132(0x2)
	struct FName RootBoneSpace; // 0x134(0x8)
	struct FBoneReference RootBoneReference; // 0x13C(0x10)
	uint8_t Pad_0x14C[0x4]; // 0x14C(0x4)
};

// Object: ScriptStruct ZZAnimationLib.ModifyMultBoneStructForPin
// Size: 0x70 (Inherited: 0x0)
struct FModifyMultBoneStructForPin
{
	struct TArray<struct FBoneReference> BoneToModifys; // 0x0(0x10)
	struct TArray<struct FVector> Translations; // 0x10(0x10)
	struct TArray<EBoneModificationMode> TranslationModes; // 0x20(0x10)
	struct TArray<EBoneControlSpace> TranslationSpaces; // 0x30(0x10)
	struct TArray<struct FRotator> Rotations; // 0x40(0x10)
	struct TArray<EBoneModificationMode> RotationModes; // 0x50(0x10)
	struct TArray<EBoneControlSpace> RotationSpace; // 0x60(0x10)
};

// Object: ScriptStruct ZZAnimationLib.AnimNode_ModifyMultBone
// Size: 0x198 (Inherited: 0x108)
struct FAnimNode_ModifyMultBone : FAnimNode_SkeletalControlBase
{
	struct FModifyMultBoneStructForPin ModifyMultBoneStruct; // 0x108(0x70)
	struct TArray<struct FBoneReference> BoneToModifys; // 0x178(0x10)
	uint8_t bDefendNan : 1; // 0x188(0x1), Mask(0x1)
	uint8_t BitPad_0x188_1 : 7; // 0x188(0x1)
	uint8_t Pad_0x189[0x3]; // 0x189(0x3)
	int32_t LastBoneIndex; // 0x18C(0x4)
	uint8_t bPrintLog : 1; // 0x190(0x1), Mask(0x1)
	uint8_t BitPad_0x190_1 : 7; // 0x190(0x1)
	uint8_t Pad_0x191[0x7]; // 0x191(0x7)
};

// Object: ScriptStruct ZZAnimationLib.AnimNode_NaNGuard
// Size: 0x88 (Inherited: 0x48)
struct FAnimNode_NaNGuard : FAnimNode_Base
{
	struct FPoseLink Source; // 0x48(0x18)
	struct TArray<struct FBoneReference> MonitoredBones; // 0x60(0x10)
	uint8_t Pad_0x70[0x18]; // 0x70(0x18)
};

// Object: ScriptStruct ZZAnimationLib.AxisSettings
// Size: 0x8 (Inherited: 0x0)
struct FAxisSettings
{
	EAxis YawRotationAxis; // 0x0(0x1)
	uint8_t Pad_0x1[0x3]; // 0x1(0x3)
	float BodyOrientationAlpha; // 0x4(0x4)
};

// Object: ScriptStruct ZZAnimationLib.AnimMode_OrientationWarping
// Size: 0x98 (Inherited: 0x48)
struct FAnimMode_OrientationWarping : FAnimNode_Base
{
	struct FPoseLink BasePose; // 0x48(0x18)
	float LocomotionAngle; // 0x60(0x4)
	struct FAxisSettings Settings; // 0x64(0x8)
	uint8_t Pad_0x6C[0x4]; // 0x6C(0x4)
	struct TArray<struct FBoneRef> SpineBones; // 0x70(0x10)
	struct FBoneReference IKFootRootBone; // 0x80(0x10)
	uint8_t bEnableOrientationWarping : 1; // 0x90(0x1), Mask(0x1)
	uint8_t BitPad_0x90_1 : 7; // 0x90(0x1)
	uint8_t Pad_0x91[0x7]; // 0x91(0x7)
};

// Object: ScriptStruct ZZAnimationLib.BoneRef
// Size: 0x10 (Inherited: 0x0)
struct FBoneRef
{
	struct FBoneReference Bone; // 0x0(0x10)
};

// Object: ScriptStruct ZZAnimationLib.PartAnimStructForPin
// Size: 0x10 (Inherited: 0x0)
struct FPartAnimStructForPin
{
	struct TArray<struct UAnimSequenceBase*> PartAnims; // 0x0(0x10)
};

// Object: ScriptStruct ZZAnimationLib.AnimNode_PartAnimPlayer
// Size: 0x1E8 (Inherited: 0x108)
struct FAnimNode_PartAnimPlayer : FAnimNode_SequencePlayer
{
	struct FPartAnimStructForPin PartAnimStruct; // 0x108(0x10)
	uint8_t ResetAccumulatedTimeToggle : 1; // 0x118(0x1), Mask(0x1)
	uint8_t BitPad_0x118_1 : 7; // 0x118(0x1)
	uint8_t EvaluatePartAnimByName : 1; // 0x119(0x1), Mask(0x1)
	uint8_t BitPad_0x119_1 : 7; // 0x119(0x1)
	uint8_t Pad_0x11A[0xCE]; // 0x11A(0xCE)
};

// Object: ScriptStruct ZZAnimationLib.AnimNode_ResetNaN
// Size: 0x110 (Inherited: 0x108)
struct FAnimNode_ResetNaN : FAnimNode_SkeletalControlBase
{
	uint8_t bEnableCheck : 1; // 0x108(0x1), Mask(0x1)
	uint8_t BitPad_0x108_1 : 7; // 0x108(0x1)
	uint8_t Pad_0x109[0x7]; // 0x109(0x7)
};

// Object: ScriptStruct ZZAnimationLib.AnimNode_ResetPose
// Size: 0x78 (Inherited: 0x48)
struct FAnimNode_ResetPose : FAnimNode_Base
{
	struct FPoseLink Source; // 0x48(0x18)
	uint8_t ToggleFlag : 1; // 0x60(0x1), Mask(0x1)
	uint8_t BitPad_0x60_1 : 7; // 0x60(0x1)
	uint8_t bEnableRawPtr : 1; // 0x61(0x1), Mask(0x1)
	uint8_t BitPad_0x61_1 : 7; // 0x61(0x1)
	uint8_t Pad_0x62[0x16]; // 0x62(0x16)
};

// Object: ScriptStruct ZZAnimationLib.AnimNode_SafeModifyBone
// Size: 0x160 (Inherited: 0x160)
struct FAnimNode_SafeModifyBone : FAnimNode_ModifyBone
{
};

// Object: ScriptStruct ZZAnimationLib.AnimNode_SlopeWarping
// Size: 0x310 (Inherited: 0x108)
struct FAnimNode_SlopeWarping : FAnimNode_SkeletalControlBase
{
	uint8_t Pad_0x108[0x8]; // 0x108(0x8)
	struct FBoneReference IKFootRootBone; // 0x110(0x10)
	struct FBoneReference PelvisBone; // 0x120(0x10)
	struct TArray<struct FSlopeWarpingFootDefinition> FeetDefinitions; // 0x130(0x10)
	struct TArray<struct FSlopeWarpingFootData> FeetData; // 0x140(0x10)
	struct FVectorRK4SpringInterpolator PelvisOffsetInterpolator; // 0x150(0x8)
	uint8_t Pad_0x158[0x34]; // 0x158(0x34)
	struct FVector GravityDir; // 0x18C(0xC)
	struct FVector CustomFloorOffset; // 0x198(0xC)
	uint8_t bIsAI : 1; // 0x1A4(0x1), Mask(0x1)
	uint8_t BitPad_0x1A4_1 : 7; // 0x1A4(0x1)
	uint8_t Pad_0x1A5[0x3]; // 0x1A5(0x3)
	float CachedDeltaTime; // 0x1A8(0x4)
	struct FVector TargetFloorNormalWorldSpace; // 0x1AC(0xC)
	struct FVectorRK4SpringInterpolator FloorNormalInterpolator; // 0x1B8(0x8)
	uint8_t Pad_0x1C0[0x34]; // 0x1C0(0x34)
	struct FVector TargetFloorOffsetLocalSpace; // 0x1F4(0xC)
	struct FVectorRK4SpringInterpolator FloorOffsetInterpolator; // 0x200(0x8)
	uint8_t Pad_0x208[0x34]; // 0x208(0x34)
	float MaxStepHeight; // 0x23C(0x4)
	uint8_t bKeepMeshInsideOfCapsule : 1; // 0x240(0x1), Mask(0x1)
	uint8_t bPullPelvisDown : 1; // 0x240(0x1), Mask(0x2)
	uint8_t bPullPelvisDownBreakthrough : 1; // 0x240(0x1), Mask(0x4)
	uint8_t bForbidClampIKFeetToFKLeg : 1; // 0x240(0x1), Mask(0x8)
	uint8_t bUseCustomFloorOffset : 1; // 0x240(0x1), Mask(0x10)
	uint8_t bWasOnGround : 1; // 0x240(0x1), Mask(0x20)
	uint8_t bShowDebug : 1; // 0x240(0x1), Mask(0x40)
	uint8_t bFloorSmoothingInitialized : 1; // 0x240(0x1), Mask(0x80)
	uint8_t Pad_0x241[0x3]; // 0x241(0x3)
	struct FEncVector ActorLocation; // 0x244(0x10)
	uint8_t bUseFloorInfoFromProxy : 1; // 0x254(0x1), Mask(0x1)
	uint8_t bBlockHitFromProxy : 1; // 0x254(0x1), Mask(0x2)
	uint8_t BitPad_0x254_2 : 6; // 0x254(0x1)
	uint8_t Pad_0x255[0x3]; // 0x255(0x3)
	struct FVector FloorNormalFromProxy; // 0x258(0xC)
	struct FVector FloorOffsetFromProxy; // 0x264(0xC)
	uint8_t bInterpolatorPositionNotEqualToFloorNormal : 1; // 0x270(0x1), Mask(0x1)
	uint8_t BitPad_0x270_1 : 7; // 0x270(0x1)
	uint8_t bForceResetInterpolator : 1; // 0x271(0x1), Mask(0x1)
	uint8_t bIsBreakthroughMode : 1; // 0x271(0x1), Mask(0x2)
	uint8_t bOnlyEnableSlopeIKWhenStop : 1; // 0x271(0x1), Mask(0x4)
	uint8_t bPoseNeetToBeModifiedByIK : 1; // 0x271(0x1), Mask(0x8)
	uint8_t BitPad_0x271_4 : 4; // 0x271(0x1)
	uint8_t Pad_0x272[0x2]; // 0x272(0x2)
	float FootIKDeltaHeight[0x2]; // 0x274(0x8)
	float FootIKLerpDeltaTime; // 0x27C(0x4)
	uint8_t bStop : 1; // 0x280(0x1), Mask(0x1)
	uint8_t BitPad_0x280_1 : 7; // 0x280(0x1)
	uint8_t Pad_0x281[0x3]; // 0x281(0x3)
	struct FVector StopLeftFootIKDeltaHeight; // 0x284(0xC)
	struct FVector StopRightFootIKDeltaHeight; // 0x290(0xC)
	struct FVector StopLeftFootIKNormal; // 0x29C(0xC)
	struct FVector StopRightFootIKNormal; // 0x2A8(0xC)
	uint8_t bEnableRawPtr : 1; // 0x2B4(0x1), Mask(0x1)
	uint8_t BitPad_0x2B4_1 : 7; // 0x2B4(0x1)
	uint8_t Pad_0x2B5[0x37]; // 0x2B5(0x37)
	struct FVector GravityDirCompSpace; // 0x2EC(0xC)
	uint8_t MySkelMeshComponent[0x8]; // 0x2F8(0x8)
	uint8_t MyMovementComponent[0x8]; // 0x300(0x8)
	uint8_t Pad_0x308[0x8]; // 0x308(0x8)
};

// Object: ScriptStruct ZZAnimationLib.SlopeWarpingFootData
// Size: 0x60 (Inherited: 0x0)
struct FSlopeWarpingFootData
{
	uint8_t Pad_0x0[0x60]; // 0x0(0x60)
};

// Object: ScriptStruct ZZAnimationLib.SlopeWarpingFootDefinition
// Size: 0x28 (Inherited: 0x0)
struct FSlopeWarpingFootDefinition
{
	struct FBoneReference IKFootBone; // 0x0(0x10)
	struct FBoneReference FKFootBone; // 0x10(0x10)
	int32_t NumBonesInLimb; // 0x20(0x4)
	float FootSize; // 0x24(0x4)
};

// Object: ScriptStruct ZZAnimationLib.PelvisAdjustmentInterp
// Size: 0x8 (Inherited: 0x0)
struct FPelvisAdjustmentInterp
{
	float Stiffness; // 0x0(0x4)
	float Dampen; // 0x4(0x4)
};

// Object: ScriptStruct ZZAnimationLib.AnimNode_SpeedWarping
// Size: 0x1C0 (Inherited: 0x108)
struct FAnimNode_SpeedWarping : FAnimNode_SkeletalControlBase
{
	struct FBoneReference IKFootRootBone; // 0x108(0x10)
	struct TArray<struct FIKBones> FeetDefinitions; // 0x118(0x10)
	struct FBoneReference PelvisBone; // 0x128(0x10)
	EIKFootRootLocalAxis SpeedWarpingAxisMode; // 0x138(0x1)
	uint8_t Pad_0x139[0x3]; // 0x139(0x3)
	float SpeedScaling; // 0x13C(0x4)
	float PelvisAdjustmentAlpha; // 0x140(0x4)
	float MaxIter; // 0x144(0x4)
	struct FPelvisAdjustmentInterp PelvisAdjustmentInterp; // 0x148(0x8)
	uint8_t ClampIKUsingFKLeg : 1; // 0x150(0x1), Mask(0x1)
	uint8_t BitPad_0x150_1 : 7; // 0x150(0x1)
	uint8_t bClampResult : 1; // 0x151(0x1), Mask(0x1)
	uint8_t BitPad_0x151_1 : 7; // 0x151(0x1)
	uint8_t Pad_0x152[0x2]; // 0x152(0x2)
	float ClampMin; // 0x154(0x4)
	float ClampMax; // 0x158(0x4)
	uint8_t bInterpResult : 1; // 0x15C(0x1), Mask(0x1)
	uint8_t BitPad_0x15C_1 : 7; // 0x15C(0x1)
	uint8_t Pad_0x15D[0x3]; // 0x15D(0x3)
	float InterpSpeedIncreasing; // 0x160(0x4)
	float InterpSpeedDecreasing; // 0x164(0x4)
	float VelocityModeMinThreshold; // 0x168(0x4)
	uint8_t Pad_0x16C[0x54]; // 0x16C(0x54)
};

// Object: ScriptStruct ZZAnimationLib.IKBones
// Size: 0x20 (Inherited: 0x0)
struct FIKBones
{
	struct FBoneReference IKFootBone; // 0x0(0x10)
	struct FBoneReference FKFootBone; // 0x10(0x10)
};

// Object: ScriptStruct ZZAnimationLib.IKFootLocation
// Size: 0x30 (Inherited: 0x0)
struct FIKFootLocation
{
	struct FVector LimbRootLocation; // 0x0(0xC)
	struct FVector OriginLocation; // 0xC(0xC)
	struct FVector ActualLocation; // 0x18(0xC)
	struct FVector NewLocation; // 0x24(0xC)
};

// Object: ScriptStruct ZZAnimationLib.AnimInstanceAttributeDict
// Size: 0x1E0 (Inherited: 0x0)
struct FAnimInstanceAttributeDict
{
	struct TMap<struct FName, uint8_t> BoolAttrs; // 0x0(0x50)
	struct TMap<struct FName, float> FloatAttrs; // 0x50(0x50)
	struct TMap<struct FName, struct FVector> VectorAttrs; // 0xA0(0x50)
	struct TMap<struct FName, struct FRotator> RotatorAttrs; // 0xF0(0x50)
	struct TMap<struct FName, int32_t> IntegerAttrs; // 0x140(0x50)
	struct TMap<struct FName, struct UAnimSequence*> SequenceAttrs; // 0x190(0x50)
};

// Object: ScriptStruct ZZAnimationLib.DynamicAttrAnimInstanceProxy
// Size: 0x980 (Inherited: 0x7A0)
struct FDynamicAttrAnimInstanceProxy : FAnimInstanceProxy
{
	struct AActor* OwningActor; // 0x798(0x8)
	struct FAnimInstanceAttributeDict AttrDicts; // 0x7A0(0x1E0)
};

// Object: ScriptStruct ZZAnimationLib.MSAISkeletalMeshComponentAppendedTickFunction
// Size: 0x70 (Inherited: 0x60)
struct FMSAISkeletalMeshComponentAppendedTickFunction : FTickFunction
{
	struct UMSAISkeletalMeshComponent* Target; // 0x60(0x8)
	struct UAnimInstance* RelatedAnimInstance; // 0x68(0x8)
};

// Object: ScriptStruct ZZAnimationLib.CustomizedOrientationWarpingAngleSetting
// Size: 0x20 (Inherited: 0x0)
struct FCustomizedOrientationWarpingAngleSetting
{
	struct TArray<struct FCustomizedOrientationWarpingAngleRange> RangeSetting; // 0x0(0x10)
	struct TArray<float> DirectionAngleSetting; // 0x10(0x10)
};

// Object: ScriptStruct ZZAnimationLib.CustomizedOrientationWarpingAngleRange
// Size: 0xC (Inherited: 0x0)
struct FCustomizedOrientationWarpingAngleRange
{
	struct FVector2D AngleRange; // 0x0(0x8)
	int32_t DirectionIndex; // 0x8(0x4)
};

// Object: ScriptStruct ZZAnimationLib.JogStartAnimBPValues
// Size: 0x38 (Inherited: 0x0)
struct FJogStartAnimBPValues
{
	struct UAnimSequence* JogStartFirstStepAnimation1; // 0x0(0x8)
	struct UAnimSequence* JogStartFirstStepAnimation2; // 0x8(0x8)
	struct UAnimSequence* JogStartAnimation; // 0x10(0x8)
	float JogStartFirstStepAnimation1CurrentTime; // 0x18(0x4)
	float JogStartFirstStepAnimation2CurrentTime; // 0x1C(0x4)
	float JogStartAnimationCurrentTime; // 0x20(0x4)
	float JogStartFirstStepAlpha; // 0x24(0x4)
	float JogStartFirstStepAngleAlpha; // 0x28(0x4)
	float JogStartOrientationWarpingAngleAlpha; // 0x2C(0x4)
	uint8_t JogStartNormalToJogging : 1; // 0x30(0x1), Mask(0x1)
	uint8_t BitPad_0x30_1 : 7; // 0x30(0x1)
	uint8_t JogStartEarlyOutToJogging : 1; // 0x31(0x1), Mask(0x1)
	uint8_t BitPad_0x31_1 : 7; // 0x31(0x1)
	uint8_t IdleNormalToJogStarting : 1; // 0x32(0x1), Mask(0x1)
	uint8_t BitPad_0x32_1 : 7; // 0x32(0x1)
	uint8_t Pad_0x33[0x5]; // 0x33(0x5)
};

// Object: ScriptStruct ZZAnimationLib.AnimMovementData
// Size: 0x60 (Inherited: 0x0)
struct FAnimMovementData
{
	struct FVector MovementInputVector; // 0x0(0xC)
	struct FVector MovementLastInputVector; // 0xC(0xC)
	struct FVector Velocity; // 0x18(0xC)
	struct FVector HorizontalVelocity; // 0x24(0xC)
	struct FVector Acceleration; // 0x30(0xC)
	struct FRotator VelocityRotation; // 0x3C(0xC)
	struct FRotator AccelerationRotation; // 0x48(0xC)
	float VelocitySize; // 0x54(0x4)
	float VelocityHorizontalSize; // 0x58(0x4)
	uint8_t HasMovementInput : 1; // 0x5C(0x1), Mask(0x1)
	uint8_t BitPad_0x5C_1 : 7; // 0x5C(0x1)
	uint8_t HasAcceleration : 1; // 0x5D(0x1), Mask(0x1)
	uint8_t BitPad_0x5D_1 : 7; // 0x5D(0x1)
	uint8_t Pad_0x5E[0x2]; // 0x5E(0x2)
};

// Object: ScriptStruct ZZAnimationLib.AnimNode_CCDLookAt
// Size: 0x220 (Inherited: 0x108)
struct FAnimNode_CCDLookAt : FAnimNode_SkeletalControlBase
{
	struct TArray<struct FCCDLookAtBoneInfo> BonesToModify; // 0x108(0x10)
	struct TArray<struct FCCDLookAtEyeBoneInfo> EyeBonesToModify; // 0x118(0x10)
	float EyeTriggerBodyRotateAngleThreshold; // 0x128(0x4)
	struct FAxis LookAt_Axis; // 0x12C(0x10)
	struct FAxis LookUp_Axis; // 0x13C(0x10)
	uint8_t Pad_0x14C[0x4]; // 0x14C(0x4)
	struct FBoneSocketTarget LookAtTarget; // 0x150(0x60)
	struct FVector LookAtLocation; // 0x1B0(0xC)
	float LookAtSpeedStrength; // 0x1BC(0x4)
	uint8_t Pad_0x1C0[0x60]; // 0x1C0(0x60)
};

// Object: ScriptStruct ZZAnimationLib.CCDLookAtEyeBoneInfo
// Size: 0x34 (Inherited: 0x0)
struct FCCDLookAtEyeBoneInfo
{
	struct FBoneReference EyeBone; // 0x0(0x10)
	float RotateSpeed; // 0x10(0x4)
	struct FAxis LookAt_Axis; // 0x14(0x10)
	uint8_t bClampBasedOnRefPose : 1; // 0x24(0x1), Mask(0x1)
	uint8_t BitPad_0x24_1 : 7; // 0x24(0x1)
	uint8_t Pad_0x25[0x3]; // 0x25(0x3)
	struct FVector ClampDegree; // 0x28(0xC)
};

// Object: ScriptStruct ZZAnimationLib.CCDLookAtBoneInfo
// Size: 0x20 (Inherited: 0x0)
struct FCCDLookAtBoneInfo
{
	struct FBoneReference Bone; // 0x0(0x10)
	float RotateSpeed; // 0x10(0x4)
	float ClampDegree; // 0x14(0x4)
	uint8_t bClampBasedOnRefPose : 1; // 0x18(0x1), Mask(0x1)
	uint8_t BitPad_0x18_1 : 7; // 0x18(0x1)
	uint8_t Pad_0x19[0x3]; // 0x19(0x3)
	float UpAxisWeight; // 0x1C(0x4)
};

// Object: ScriptStruct ZZAnimationLib.CCDEyeballBone
// Size: 0x50 (Inherited: 0x0)
struct FCCDEyeballBone
{
	uint8_t Pad_0x0[0x50]; // 0x0(0x50)
};

// Object: ScriptStruct ZZAnimationLib.CCDLookAtBone
// Size: 0xE0 (Inherited: 0x0)
struct FCCDLookAtBone
{
	uint8_t Pad_0x0[0xE0]; // 0x0(0xE0)
};

// Object: ScriptStruct ZZAnimationLib.CCDLookAtFixBone
// Size: 0x40 (Inherited: 0x0)
struct FCCDLookAtFixBone
{
	uint8_t Pad_0x0[0x40]; // 0x0(0x40)
};

// Object: ScriptStruct ZZAnimationLib.AnimNode_CSCopySingleBone
// Size: 0x148 (Inherited: 0x108)
struct FAnimNode_CSCopySingleBone : FAnimNode_SkeletalControlBase
{
	struct FComponentSpacePoseLink SourcePose; // 0x108(0x18)
	struct FBoneReference CopyBone; // 0x120(0x10)
	uint8_t bCopyTranslation : 1; // 0x130(0x1), Mask(0x1)
	uint8_t BitPad_0x130_1 : 7; // 0x130(0x1)
	uint8_t bCopyRotation : 1; // 0x131(0x1), Mask(0x1)
	uint8_t BitPad_0x131_1 : 7; // 0x131(0x1)
	uint8_t bCopyScale : 1; // 0x132(0x1), Mask(0x1)
	uint8_t BitPad_0x132_1 : 7; // 0x132(0x1)
	uint8_t Pad_0x133[0x1]; // 0x133(0x1)
	float TranslationMultiplier; // 0x134(0x4)
	float RotationMultiplier; // 0x138(0x4)
	float ScaleMultiplier; // 0x13C(0x4)
	ECopySingleBoneMode CopyMode; // 0x140(0x1)
	uint8_t Pad_0x141[0x7]; // 0x141(0x7)
};

// Object: ScriptStruct ZZAnimationLib.FootLockLimbDataDefine
// Size: 0xA0 (Inherited: 0x0)
struct FFootLockLimbDataDefine
{
	struct FBoneReference FootBone; // 0x0(0x10)
	struct FBoneReference ToeBone; // 0x10(0x10)
	struct FBoneReference IkTarget; // 0x20(0x10)
	int32_t LimbBoneCount; // 0x30(0x4)
	uint8_t Pad_0x34[0x6C]; // 0x34(0x6C)
};

// Object: ScriptStruct ZZAnimationLib.AnimNode_FootModify
// Size: 0x3A0 (Inherited: 0x108)
struct FAnimNode_FootModify : FAnimNode_SkeletalControlBase
{
	uint8_t Pad_0x108[0x8]; // 0x108(0x8)
	struct FFootLockLimbDataDefine LeftFootDefinition; // 0x110(0xA0)
	struct FFootLockLimbDataDefine RightFootDefinition; // 0x1B0(0xA0)
	struct FBoneReference RootBoneToModify; // 0x250(0x10)
	struct FBoneReference HipsToModify; // 0x260(0x10)
	struct FBoneReference LegEndToModify; // 0x270(0x10)
	struct FVector LeftFootTranslation; // 0x280(0xC)
	struct FRotator LeftFootRotation; // 0x28C(0xC)
	struct FVector RightFootTranslation; // 0x298(0xC)
	struct FRotator RightFootRotation; // 0x2A4(0xC)
	uint8_t ModifyRoot : 1; // 0x2B0(0x1), Mask(0x1)
	uint8_t BitPad_0x2B0_1 : 7; // 0x2B0(0x1)
	uint8_t bRootOffsetIs2D : 1; // 0x2B1(0x1), Mask(0x1)
	uint8_t BitPad_0x2B1_1 : 7; // 0x2B1(0x1)
	uint8_t VerticalVelocityClamp : 1; // 0x2B2(0x1), Mask(0x1)
	uint8_t BitPad_0x2B2_1 : 7; // 0x2B2(0x1)
	uint8_t Pad_0x2B3[0x1]; // 0x2B3(0x1)
	struct FName LeftFootCurveName; // 0x2B4(0x8)
	struct FName RightFootCurveName; // 0x2BC(0x8)
	struct FName LeftFootToeCurveName; // 0x2C4(0x8)
	struct FName RightFootToeCurveName; // 0x2CC(0x8)
	float VelocitySize; // 0x2D4(0x4)
	float BaseVelocitySize; // 0x2D8(0x4)
	struct FVector ActorVelocity; // 0x2DC(0xC)
	float LockReleaseSmoothTime; // 0x2E8(0x4)
	uint8_t bInComponentSpace : 1; // 0x2EC(0x1), Mask(0x1)
	uint8_t BitPad_0x2EC_1 : 7; // 0x2EC(0x1)
	uint8_t Pad_0x2ED[0x6F]; // 0x2ED(0x6F)
	uint8_t bEnableRawPtr : 1; // 0x35C(0x1), Mask(0x1)
	uint8_t BitPad_0x35C_1 : 7; // 0x35C(0x1)
	uint8_t Pad_0x35D[0x43]; // 0x35D(0x43)
};

// Object: ScriptStruct ZZAnimationLib.ZZAnimNode_HoldGunIK
// Size: 0x290 (Inherited: 0x108)
struct FZZAnimNode_HoldGunIK : FAnimNode_SkeletalControlBase
{
	uint8_t Pad_0x108[0x8]; // 0x108(0x8)
	struct FBoneSocketTarget HoldingPoint; // 0x110(0x60)
	struct FBoneReference IKBone; // 0x170(0x10)
	float StartStretchRatio; // 0x180(0x4)
	float MaxStretchScale; // 0x184(0x4)
	struct FVector EffectorLocation; // 0x188(0xC)
	uint8_t Pad_0x194[0xC]; // 0x194(0xC)
	struct FBoneSocketTarget EffectorTarget; // 0x1A0(0x60)
	struct FVector JointTargetLocation; // 0x200(0xC)
	uint8_t Pad_0x20C[0x4]; // 0x20C(0x4)
	struct FBoneSocketTarget JointTarget; // 0x210(0x60)
	struct FAxis TwistAxis; // 0x270(0x10)
	EBoneControlSpace EffectorLocationSpace; // 0x280(0x1)
	EBoneControlSpace JointTargetLocationSpace; // 0x281(0x1)
	uint8_t bAllowStretching : 1; // 0x282(0x1), Mask(0x1)
	uint8_t bTakeRotationFromEffectorSpace : 1; // 0x282(0x1), Mask(0x2)
	uint8_t bMaintainEffectorRelRot : 1; // 0x282(0x1), Mask(0x4)
	uint8_t bAllowTwist : 1; // 0x282(0x1), Mask(0x8)
	uint8_t BitPad_0x282_4 : 4; // 0x282(0x1)
	uint8_t Pad_0x283[0xD]; // 0x283(0xD)
};

// Object: ScriptStruct ZZAnimationLib.AnimNode_LayerBlend2
// Size: 0x130 (Inherited: 0x128)
struct FAnimNode_LayerBlend2 : FAnimNode_LayeredBoneBlend
{
	float MeshSpaceRotBlendWeight; // 0x128(0x4)
	uint8_t Pad_0x12C[0x4]; // 0x12C(0x4)
};

// Object: ScriptStruct ZZAnimationLib.SingleBoneLayeredConfig
// Size: 0x14 (Inherited: 0x0)
struct FSingleBoneLayeredConfig
{
	struct FBoneReference Bone; // 0x0(0x10)
	float BoneBlendWeight; // 0x10(0x4)
};

// Object: ScriptStruct ZZAnimationLib.AnimNode_SpringArmSocket
// Size: 0x1E0 (Inherited: 0x108)
struct FAnimNode_SpringArmSocket : FAnimNode_SkeletalControlBase
{
	uint8_t Pad_0x108[0x8]; // 0x108(0x8)
	struct FBoneSocketTarget SpringArmEndSocket; // 0x110(0x60)
	struct FBoneReference SpringArmRootBone; // 0x170(0x10)
	float SpringStiffness; // 0x180(0x4)
	float Damp; // 0x184(0x4)
	float subStepTime; // 0x188(0x4)
	float springArmOffsetThreshold; // 0x18C(0x4)
	uint8_t flipSpringArm : 1; // 0x190(0x1), Mask(0x1)
	uint8_t BitPad_0x190_1 : 7; // 0x190(0x1)
	uint8_t simpleLagSpringArm : 1; // 0x191(0x1), Mask(0x1)
	uint8_t BitPad_0x191_1 : 7; // 0x191(0x1)
	uint8_t Pad_0x192[0x2]; // 0x192(0x2)
	float LagSpeed; // 0x194(0x4)
	float angleConstraint; // 0x198(0x4)
	int32_t MaxIterationCount; // 0x19C(0x4)
	uint8_t Pad_0x1A0[0x40]; // 0x1A0(0x40)
};

// Object: ScriptStruct ZZAnimationLib.AnimNode_VirtualParent
// Size: 0x1E0 (Inherited: 0x108)
struct FAnimNode_VirtualParent : FAnimNode_SkeletalControlBase
{
	uint8_t Pad_0x108[0x8]; // 0x108(0x8)
	struct FBoneSocketTarget VirtualParentSocket; // 0x110(0x60)
	struct TArray<struct FBoneReference> VirtualChildren; // 0x170(0x10)
	struct TArray<struct FBoneReference> VirtualChildrenFromParent; // 0x180(0x10)
	struct FVector AdditiveParentLocationOffset; // 0x190(0xC)
	struct FRotator AddRotationInBoneSpace; // 0x19C(0xC)
	uint8_t NeedToApplyRotationToParentAsWell : 1; // 0x1A8(0x1), Mask(0x1)
	uint8_t BitPad_0x1A8_1 : 7; // 0x1A8(0x1)
	uint8_t VirtualParentTransformLocOffset : 1; // 0x1A9(0x1), Mask(0x1)
	uint8_t BitPad_0x1A9_1 : 7; // 0x1A9(0x1)
	uint8_t bEnableRawPtr : 1; // 0x1AA(0x1), Mask(0x1)
	uint8_t BitPad_0x1AA_1 : 7; // 0x1AA(0x1)
	uint8_t Pad_0x1AB[0x35]; // 0x1AB(0x35)
};

// Object: Class ZZAnimationLib.DynamicAttributtAnimInstance
// Size: 0xBF0 (Inherited: 0x270)
struct UDynamicAttributtAnimInstance : UAnimInstance
{
	DEFINE_UE_CLASS_HELPERS(UDynamicAttributtAnimInstance, "DynamicAttributtAnimInstance")

	struct FDynamicAttrAnimInstanceProxy Proxy; // 0x270(0x980)
};

// Object: Class ZZAnimationLib.JogStartingComponent
// Size: 0x228 (Inherited: 0xF8)
struct UJogStartingComponent : UActorComponent
{
	DEFINE_UE_CLASS_HELPERS(UJogStartingComponent, "JogStartingComponent")

	uint8_t Pad_0xF8[0x8]; // 0xF8(0x8)
	struct FMulticastInlineDelegate OnJogStartDelegate; // 0x100(0x10)
	uint8_t OwnerCharacter[0x8]; // 0x110(0x8)
	uint8_t ObserveredCharacterMovementComponent[0x8]; // 0x118(0x8)
	uint8_t ObserveredSkeletalMeshComponent[0x8]; // 0x120(0x8)
	struct FVector JogStartingLocation; // 0x128(0xC)
	float DistanceNeededToNomalJog; // 0x134(0x4)
	float VelocityCanBeSeemsAsIdleThreshold; // 0x138(0x4)
	struct FName JogStartingLocationKey; // 0x13C(0x8)
	struct FName JogStartDistanceKey; // 0x144(0x8)
	struct FName JogStartToJoggingConditionKey; // 0x14C(0x8)
	struct FName IdleToJogStartConditionKey; // 0x154(0x8)
	struct FName MainJogStartAnimSeqKey; // 0x15C(0x8)
	struct FName SecondaryJogStartAnimSeqKey; // 0x164(0x8)
	struct FName JogStartFirstStepAngleAlphaKey; // 0x16C(0x8)
	struct FName JogStartFirstStepTransitionKey; // 0x174(0x8)
	struct FName MainJogStartAnimPositionKey; // 0x17C(0x8)
	struct FName SecondaryJogStartAnimPositionKey; // 0x184(0x8)
	uint8_t Pad_0x18C[0x4]; // 0x18C(0x4)
	struct UAnimSequence* JogStartForwardSequence; // 0x190(0x8)
	struct UAnimSequence* JogStartBackwardSequence; // 0x198(0x8)
	struct UAnimSequence* JogStartLeftSequence; // 0x1A0(0x8)
	struct UAnimSequence* JogStartRightSequence; // 0x1A8(0x8)
	uint8_t Pad_0x1B0[0x78]; // 0x1B0(0x78)
};

// Object: Class ZZAnimationLib.JogStopComponent
// Size: 0x170 (Inherited: 0xF8)
struct UJogStopComponent : UActorComponent
{
	DEFINE_UE_CLASS_HELPERS(UJogStopComponent, "JogStopComponent")

	uint8_t Pad_0xF8[0x8]; // 0xF8(0x8)
	struct FMulticastInlineDelegate OnJogStopDelegate; // 0x100(0x10)
	uint8_t OwnerCharacter[0x8]; // 0x110(0x8)
	uint8_t ObserveredCharacterMovementComponent[0x8]; // 0x118(0x8)
	uint8_t ObserveredSkeletalMeshComponent[0x8]; // 0x120(0x8)
	uint8_t Pad_0x128[0x48]; // 0x128(0x48)
};

// Object: Class ZZAnimationLib.MSAISkeletalMeshComponent
// Size: 0xF80 (Inherited: 0xF50)
struct UMSAISkeletalMeshComponent : USkeletalMeshComponent
{
	DEFINE_UE_CLASS_HELPERS(UMSAISkeletalMeshComponent, "MSAISkeletalMeshComponent")

	struct TArray<struct UAnimInstance*> AppendedAnimBlueprint; // 0xF48(0x10)
	uint8_t Pad_0xF60[0x8]; // 0xF60(0x8)
	struct TArray<struct UAnimInstance*> AppendAnimInstances; // 0xF68(0x10)
	uint8_t Pad_0xF78[0x8]; // 0xF78(0x8)
};

// Object: Class ZZAnimationLib.ZZAnimationLibBPLibrary
// Size: 0x28 (Inherited: 0x28)
struct UZZAnimationLibBPLibrary : UBlueprintFunctionLibrary
{
	DEFINE_UE_CLASS_HELPERS(UZZAnimationLibBPLibrary, "ZZAnimationLibBPLibrary")

	// Object: Function ZZAnimationLib.ZZAnimationLibBPLibrary.ZZPredictStopOffset
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure]
	// Offset: 0x8d991c0
	// Params: [ Num(4) Size(0x19) ]
	static void ZZPredictStopOffset(struct UCharacterMovementComponent* inCharacterMovementComp, uint8_t isPivot, struct FVector& outPredictOffset, uint8_t& Success);

	// Object: Function ZZAnimationLib.ZZAnimationLibBPLibrary.ZZMergeAttrDicts
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	// Offset: 0x8d990b0
	// Params: [ Num(2) Size(0x1F0) ]
	static struct FAnimInstanceAttributeDict ZZMergeAttrDicts(struct TArray<struct FAnimInstanceAttributeDict>& inDicts);

	// Object: Function ZZAnimationLib.ZZAnimationLibBPLibrary.ZZGetVectorAttrFromMap
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure]
	// Offset: 0x8d98edc
	// Params: [ Num(4) Size(0x1F8) ]
	static struct FVector ZZGetVectorAttrFromMap(const struct FAnimInstanceAttributeDict& inDict, struct FName KeyName, uint8_t& Success);

	// Object: Function ZZAnimationLib.ZZAnimationLibBPLibrary.ZZGetStrafeMovingDirectionWithCustomRange
	// Flags: [Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure]
	// Offset: 0x8d98ccc
	// Params: [ Num(5) Size(0x48) ]
	static float ZZGetStrafeMovingDirectionWithCustomRange(struct FCustomizedOrientationWarpingAngleSetting AngleSetting, struct FVector MovingDirectionInLocalSpace, struct FVector ForwardAxis, struct FVector UpAxis);

	// Object: Function ZZAnimationLib.ZZAnimationLibBPLibrary.ZZGetStrafeMovingDirectionWithBufferWithCustomRangeByReference
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	// Offset: 0x8d98ab8
	// Params: [ Num(6) Size(0x34) ]
	static void ZZGetStrafeMovingDirectionWithBufferWithCustomRangeByReference(struct FCustomizedOrientationWarpingAngleSetting& AngleSetting, float inStrafeMovingDirection, int32_t& DirectionA, float& directionAngle, int32_t PreviousDirection, float bufferValue);

	// Object: Function ZZAnimationLib.ZZAnimationLibBPLibrary.ZZGetStrafeMovingDirectionWithBufferWithCustomRange
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	// Offset: 0x8d9886c
	// Params: [ Num(5) Size(0x30) ]
	static void ZZGetStrafeMovingDirectionWithBufferWithCustomRange(struct FCustomizedOrientationWarpingAngleSetting AngleSetting, float inStrafeMovingDirection, int32_t& DirectionA, int32_t PreviousDirection, float bufferValue);

	// Object: Function ZZAnimationLib.ZZAnimationLibBPLibrary.ZZGetStrafeMovingDirectionWithBuffer
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	// Offset: 0x8d9870c
	// Params: [ Num(4) Size(0xC) ]
	static void ZZGetStrafeMovingDirectionWithBuffer(float inStrafeMovingDirection, ECharacterLocalDirection& DirectionA, ECharacterLocalDirection PreviousDirection, float bufferValue);

	// Object: Function ZZAnimationLib.ZZAnimationLibBPLibrary.ZZGetStrafeMovingDirectionsWithCustomRange
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	// Offset: 0x8d98498
	// Params: [ Num(5) Size(0x2C) ]
	static void ZZGetStrafeMovingDirectionsWithCustomRange(struct FCustomizedOrientationWarpingAngleSetting AngleSetting, float inStrafeMovingDirection, ECharacterLocalDirection& DirectionA, ECharacterLocalDirection& DirectionB, float& BlendAlpha);

	// Object: Function ZZAnimationLib.ZZAnimationLibBPLibrary.ZZGetStrafeMovingDirections
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	// Offset: 0x8d98318
	// Params: [ Num(4) Size(0xC) ]
	static void ZZGetStrafeMovingDirections(float inStrafeMovingDirection, ECharacterLocalDirection& DirectionA, ECharacterLocalDirection& DirectionB, float& BlendAlpha);

	// Object: Function ZZAnimationLib.ZZAnimationLibBPLibrary.ZZGetStrafeMovingDirection
	// Flags: [Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure]
	// Offset: 0x8d981f4
	// Params: [ Num(4) Size(0x28) ]
	static float ZZGetStrafeMovingDirection(struct FVector MovingDirectionInLocalSpace, struct FVector ForwardAxis, struct FVector UpAxis);

	// Object: Function ZZAnimationLib.ZZAnimationLibBPLibrary.ZZGetStrafeMainDirectionWithCustomRange
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x8d98064
	// Params: [ Num(3) Size(0x28) ]
	static int32_t ZZGetStrafeMainDirectionWithCustomRange(struct FCustomizedOrientationWarpingAngleSetting AngleSetting, float inMovingCardinalDirection);

	// Object: Function ZZAnimationLib.ZZAnimationLibBPLibrary.ZZGetStrafeMainDirection
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x8d97fc0
	// Params: [ Num(2) Size(0x5) ]
	static ECharacterLocalDirection ZZGetStrafeMainDirection(float inMovingCardinalDirection);

	// Object: Function ZZAnimationLib.ZZAnimationLibBPLibrary.ZZGetSpecificStateWeightByNames
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x8d97ea8
	// Params: [ Num(4) Size(0x1C) ]
	static float ZZGetSpecificStateWeightByNames(struct UAnimInstance* inAnimInstance, struct FName inMachineName, struct FName inStateName);

	// Object: Function ZZAnimationLib.ZZAnimationLibBPLibrary.ZZGetRotatorAttrFromMap
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure]
	// Offset: 0x8d97cd4
	// Params: [ Num(4) Size(0x1F8) ]
	static struct FRotator ZZGetRotatorAttrFromMap(const struct FAnimInstanceAttributeDict& inDict, struct FName KeyName, uint8_t& Success);

	// Object: Function ZZAnimationLib.ZZAnimationLibBPLibrary.ZZGetMovementRelatedInfo
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	// Offset: 0x8d97bf8
	// Params: [ Num(2) Size(0x68) ]
	static void ZZGetMovementRelatedInfo(struct UCharacterMovementComponent* inCharacterMovement, struct FAnimMovementData& outAnimMovementData);

	// Object: Function ZZAnimationLib.ZZAnimationLibBPLibrary.ZZGetIntegerAttrFromMap
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	// Offset: 0x8d97a28
	// Params: [ Num(4) Size(0x1F0) ]
	static int32_t ZZGetIntegerAttrFromMap(const struct FAnimInstanceAttributeDict& inDict, struct FName KeyName, uint8_t& Success);

	// Object: Function ZZAnimationLib.ZZAnimationLibBPLibrary.ZZGetFloatAttrFromMap
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	// Offset: 0x8d97858
	// Params: [ Num(4) Size(0x1F0) ]
	static float ZZGetFloatAttrFromMap(const struct FAnimInstanceAttributeDict& inDict, struct FName KeyName, uint8_t& Success);

	// Object: Function ZZAnimationLib.ZZAnimationLibBPLibrary.ZZGetCurrentStateWeightByName
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x8d9777c
	// Params: [ Num(3) Size(0x14) ]
	static float ZZGetCurrentStateWeightByName(struct UAnimInstance* inAnimInstance, struct FName inMachineName);

	// Object: Function ZZAnimationLib.ZZAnimationLibBPLibrary.ZZGetCurrentStateNameByMachineName
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0xe5ce6fc
	// Params: [ Num(3) Size(0x18) ]
	static struct FName ZZGetCurrentStateNameByMachineName(struct UAnimInstance* inAnimInstance, struct FName inMachineName);

	// Object: Function ZZAnimationLib.ZZAnimationLibBPLibrary.ZZGetBoolAttrFromMap
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	// Offset: 0x8d975a8
	// Params: [ Num(4) Size(0x1EA) ]
	static uint8_t ZZGetBoolAttrFromMap(const struct FAnimInstanceAttributeDict& inDict, struct FName KeyName, uint8_t& Success);

	// Object: Function ZZAnimationLib.ZZAnimationLibBPLibrary.ZZGetAnimSeqAttrFromMap
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	// Offset: 0x8d973d8
	// Params: [ Num(4) Size(0x1F8) ]
	static struct UAnimSequence* ZZGetAnimSeqAttrFromMap(const struct FAnimInstanceAttributeDict& inDict, struct FName KeyName, uint8_t& Success);

	// Object: Function ZZAnimationLib.ZZAnimationLibBPLibrary.ZZEvaluateCurveName
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	// Offset: 0x8d97270
	// Params: [ Num(5) Size(0x1C) ]
	static float ZZEvaluateCurveName(struct UAnimSequence* inAnimSeq, float InTime, uint8_t& Success, struct FName CurveName);

	// Object: Function ZZAnimationLib.ZZAnimationLibBPLibrary.ZZCollectAnimBPAttributeFromComponents
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x8d970f0
	// Params: [ Num(4) Size(0x1F8) ]
	static struct FAnimInstanceAttributeDict ZZCollectAnimBPAttributeFromComponents(struct AActor* TargetActor, uint8_t useCustomComponentTagName, struct FName customComponentTagName);

	// Object: Function ZZAnimationLib.ZZAnimationLibBPLibrary.ZZCalculatTargetFrame
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	// Offset: 0x8d96f44
	// Params: [ Num(6) Size(0x24) ]
	static float ZZCalculatTargetFrame(float InTargetValue, struct UAnimSequence* inAnimSequence, EFindTargetFrameResult& OutResult, struct FName CurveName, uint8_t curveIsInOrder);

	// Object: Function ZZAnimationLib.ZZAnimationLibBPLibrary.ZZCalculatOrientationWarpingAngle
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	// Offset: 0x8d96d70
	// Params: [ Num(5) Size(0x14) ]
	static void ZZCalculatOrientationWarpingAngle(float directionAngle, float& outLocomotionNorthAngle, float& outLocomotionWestAngle, float& outLocomotionSouthAngle, float& outLocomotionEastAngle);

	// Object: Function ZZAnimationLib.ZZAnimationLibBPLibrary.ZZAttrDictDebugStrs
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	// Offset: 0x8d96c20
	// Params: [ Num(2) Size(0x1F0) ]
	static struct TArray<struct FString> ZZAttrDictDebugStrs(const struct FAnimInstanceAttributeDict& inDict);

	// Object: Function ZZAnimationLib.ZZAnimationLibBPLibrary.ZZAnimationLibSampleFunction
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x8d96b7c
	// Params: [ Num(2) Size(0x8) ]
	static float ZZAnimationLibSampleFunction(float Param);

	// Object: Function ZZAnimationLib.ZZAnimationLibBPLibrary.SwitchToCPUSkinning
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x8d96aa4
	// Params: [ Num(2) Size(0x9) ]
	static void SwitchToCPUSkinning(struct USkinnedMeshComponent* InMesh, uint8_t inEnableCPUSkinning);

	// Object: Function ZZAnimationLib.ZZAnimationLibBPLibrary.SolveAimWithHardClamp
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure]
	// Offset: 0x8d96864
	// Params: [ Num(7) Size(0x70) ]
	static struct FQuat SolveAimWithHardClamp(const struct FTransform& CurrentTransform, const struct FVector& TargetPosition, const struct FVector& AimVector, float UpVectorWeight, const struct FVector& UpVector, float AimClampInDegree);

	// Object: Function ZZAnimationLib.ZZAnimationLibBPLibrary.GetValidSectionFromCustomizedOrientationWarpingAngleSetting
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x8d966d4
	// Params: [ Num(3) Size(0x28) ]
	static int32_t GetValidSectionFromCustomizedOrientationWarpingAngleSetting(struct FCustomizedOrientationWarpingAngleSetting OrientationWarpingAngleSetting, float directionAngle);

	// Object: Function ZZAnimationLib.ZZAnimationLibBPLibrary.GetLocomotionOfAllDirections
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x8d96510
	// Params: [ Num(3) Size(0x38) ]
	static struct TArray<float> GetLocomotionOfAllDirections(struct FCustomizedOrientationWarpingAngleSetting OrientationWarpingAngleSetting, float directionAngle);

	// Object: Function ZZAnimationLib.ZZAnimationLibBPLibrary.GetLocomotionOfACertainDirection
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x8d96344
	// Params: [ Num(4) Size(0x2C) ]
	static float GetLocomotionOfACertainDirection(struct FCustomizedOrientationWarpingAngleSetting OrientationWarpingAngleSetting, float directionAngle, int32_t DirectionIndex);

	// Object: Function ZZAnimationLib.ZZAnimationLibBPLibrary.GetLocalSpaceBoneTransformOfRefPose
	// Flags: [Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure]
	// Offset: 0x8d96258
	// Params: [ Num(3) Size(0x40) ]
	static struct FTransform GetLocalSpaceBoneTransformOfRefPose(struct UAnimSequence* inAnimSequence, struct FName InBoneName);

	// Object: Function ZZAnimationLib.ZZAnimationLibBPLibrary.GetLocalSpaceBoneTransformOfAnimSequence
	// Flags: [Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure]
	// Offset: 0x8d9612c
	// Params: [ Num(4) Size(0x50) ]
	static struct FTransform GetLocalSpaceBoneTransformOfAnimSequence(struct UAnimSequence* inAnimSequence, float InTime, struct FName InBoneName);

	// Object: Function ZZAnimationLib.ZZAnimationLibBPLibrary.GetComponentSpaceBoneTransformOfAnimSequenceNew
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure]
	// Offset: 0x8d95fe0
	// Params: [ Num(4) Size(0x50) ]
	static struct FTransform GetComponentSpaceBoneTransformOfAnimSequenceNew(struct UAnimSequence* inAnimSequence, const float& InTime, const struct FName& InBoneName);

	// Object: Function ZZAnimationLib.ZZAnimationLibBPLibrary.GetComponentSpaceBoneTransformOfAnimSequenceInEditor
	// Flags: [Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure]
	// Offset: 0x8d95eb4
	// Params: [ Num(4) Size(0x50) ]
	static struct FTransform GetComponentSpaceBoneTransformOfAnimSequenceInEditor(struct UAnimSequence* inAnimSequence, float InTime, struct FName InBoneName);

	// Object: Function ZZAnimationLib.ZZAnimationLibBPLibrary.ConvertStrengthToSpringParams
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x8d95ce4
	// Params: [ Num(5) Size(0x14) ]
	static void ConvertStrengthToSpringParams(float& OutSpring, float& OutDamping, float InStrength, float InDampingRatio, float InExtraDamping);

	// Object: Function ZZAnimationLib.ZZAnimationLibBPLibrary.ConvertSpringToStrengthParams
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x8d95ad8
	// Params: [ Num(5) Size(0x14) ]
	static void ConvertSpringToStrengthParams(float& OutStrength, float& OutDampingRatio, float& OutExtraDamping, float InSpring, float InDamping);

	// Object: Function ZZAnimationLib.ZZAnimationLibBPLibrary.CalcVectorSpringDamper
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable]
	// Offset: 0x8d958a0
	// Params: [ Num(7) Size(0x3C) ]
	static void CalcVectorSpringDamper(struct FVector& InOutValue, struct FVector& InOutValueRate, const struct FVector& InTargetValue, const struct FVector& InTargetValueRate, float InDeltaTime, float InUndampedFrequency, float InDampingRatio);

	// Object: Function ZZAnimationLib.ZZAnimationLibBPLibrary.CalcSpringDamper
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x8d95658
	// Params: [ Num(7) Size(0x1C) ]
	static void CalcSpringDamper(float& InOutValue, float& InOutValueRate, const float& InTargetValue, const float& InTargetValueRate, float InDeltaTime, float InUndampedFrequency, float InDampingRatio);
};

// Object: Class ZZAnimationLib.ZZAnimAttrFetchInterface
// Size: 0x28 (Inherited: 0x28)
struct IZZAnimAttrFetchInterface : IInterface
{
	DEFINE_UE_CLASS_HELPERS(IZZAnimAttrFetchInterface, "ZZAnimAttrFetchInterface")

	// Object: Function ZZAnimationLib.ZZAnimAttrFetchInterface.FetchAnimAttr
	// Flags: [Native|Event|Public|BlueprintCallable|BlueprintEvent]
	// Offset: 0x8d9aa20
	// Params: [ Num(1) Size(0x1E0) ]
	struct FAnimInstanceAttributeDict FetchAnimAttr();
};

// Object: Class ZZAnimationLib.ZZAnimSettings
// Size: 0x58 (Inherited: 0x38)
struct UZZAnimSettings : UDeveloperSettings
{
	DEFINE_UE_CLASS_HELPERS(UZZAnimSettings, "ZZAnimSettings")

	struct FName CollectAttributeFromComponentWithTagName; // 0x38(0x8)
	struct FName DistanceCurveName; // 0x40(0x8)
	struct FName DisableSpeedWarpingCurveName; // 0x48(0x8)
	struct FName TurningDistanceCurveName; // 0x50(0x8)
};

} // namespace SDK
