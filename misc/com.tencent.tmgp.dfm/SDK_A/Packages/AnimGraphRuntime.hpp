#pragma once

#include "../CoreUObject_classes.hpp"
#include "AnimationCore.hpp"
#include "Engine.hpp"

namespace SDK
{

// Package: AnimGraphRuntime
// Enums: 26
// Structs: 81
// Classes: 6

enum class EAlphaBlendOption : uint8_t;
enum class EAnimAlphaInputType : uint8_t;
enum class EAnimPhysCollisionType : uint8_t;
enum class EAnimPhysTwistAxis : uint8_t;
enum class EBoneAxis : uint8_t;
enum class EBoneControlSpace : uint8_t;
enum class EBoneRotationSource : uint8_t;
enum class ECollisionChannel : uint8_t;
enum class EComponentType : uint8_t;
enum class ECurveBlendOption : uint8_t;
enum class ERelativeTransformSpace : uint8_t;
enum class ETransformConstraintType : uint8_t;
struct FBoneReference;
struct FBranchingPointNotifyPayload;
struct FInputBlendPose;
struct FPerBoneBlendWeight;
struct FPoseLink;
struct FRuntimeFloatCurve;
struct ICurveSourceInterface;
struct UAnimMontage;
struct UAnimSequence;
struct UAnimSequenceBase;
struct UBlendProfile;
struct UBlendSpaceBase;
struct UCurveFloat;
struct UPhysicsAsset;
struct UPoseAsset;
struct USkeletalMeshComponent;
struct FAnimNode_SkeletalControlBase;
struct FAnimNode_Slot;
struct FAnimNode_ModifyBone;
struct FSocketReference;
struct FBoneSocketTarget;
struct FAnimNode_LayeredBoneBlend;
struct FAnimNode_BlendSpacePlayer;
struct FAnimNode_ApplyAdditive;
struct FAnimNode_AimOffsetLookAt;
struct FAnimPhysConstraintSetup;
struct FRotationRetargetingInfo;
struct FAnimNode_AnimDynamics;
struct FAnimPhysPlanarLimit;
struct FAnimPhysSphericalLimit;
struct FAnimNode_ApplyLimits;
struct FAngularRangeLimit;
struct FAnimNode_BlendBoneByChannel;
struct FBlendBoneByChannelEntry;
struct FAnimNode_BlendListBase;
struct FAnimNode_BlendListByBool;
struct FAnimNode_BlendListByEnum;
struct FAnimNode_BlendListByInt;
struct FAnimNode_BlendSpaceEvaluator;
struct FAnimNode_BoneDrivenController;
struct FAnimNode_CCDIK;
struct FAnimNode_ChainLookAt;
struct FLookAtEyeBoneInfo;
struct FLookAtBoneInfo;
struct FLookAtLink;
struct FAnimNode_Constraint;
struct FConstraint;
struct FAnimNode_CopyBone;
struct FAnimNode_CopyBoneDelta;
struct FAnimNode_CopyPoseFromMesh;
struct FAnimNode_CurveSource;
struct FAnimNode_Fabrik;
struct FAnimNode_HandIKRetargeting;
struct FAnimNode_LegIK;
struct FAnimLegIKDefinition;
struct FAnimLegIKData;
struct FIKChain;
struct FIKChainLink;
struct FAnimNode_LookAt;
struct FAnimNode_MakeDynamicAdditive;
struct FAnimNode_ModifyCurve;
struct FAnimNode_MultiWayBlend;
struct FAnimNode_ObserveBone;
struct FAnimNode_PoseHandler;
struct FAnimNode_PoseBlendNode;
struct FAnimNode_PoseByName;
struct FRBFParams;
struct FAnimNode_PoseDriver;
struct FPoseDriverTarget;
struct FPoseDriverTransform;
struct FAnimNode_PoseSnapshot;
struct FAnimNode_RandomPlayer;
struct FRandomPlayerSequenceEntry;
struct FAnimNode_MeshSpaceRefPose;
struct FAnimNode_RefPose;
struct FAnimNode_ResetRoot;
struct FAnimNode_RigidBody;
struct FAnimNode_RigidBody_Chaos;
struct FAnimNode_RotateRootBone;
struct FAnimNode_RotationMultiplier;
struct FAnimNode_RotationOffsetBlendSpace;
struct FAnimNode_ScaleChainLength;
struct FAnimNode_SequenceEvaluator;
struct FAnimNode_SplineIK;
struct FSplineIKCachedBoneData;
struct FAnimNode_SpringBone;
struct FAnimNode_StateResult;
struct FAnimNode_Trail;
struct FRotationLimit;
struct FReferenceBoneFrame;
struct FAnimNode_TwistCorrectiveNode;
struct FAnimNode_TwoBoneIK;
struct FAnimNode_TwoWayBlend;
struct FAnimSequencerInstanceProxy;
struct FPositionHistory;
struct FRBFEntry;
struct FRBFTarget;
struct UAnimCustomInstance;
struct UAnimNotify_PlayMontageNotify;
struct UAnimNotify_PlayMontageNotifyWindow;
struct UAnimSequencerInstance;
struct UKismetAnimationLibrary;
struct UPlayMontageCallbackProxy;

// Object: Enum AnimGraphRuntime.ESphericalLimitType
enum class ESphericalLimitType : uint8_t
{
	Inner = 0,
	Outer = 1,
	ESphericalLimitType_MAX = 2
};

// Object: Enum AnimGraphRuntime.AnimPhysSimSpaceType
enum class EAnimPhysSimSpaceType : uint8_t
{
	Component = 0,
	Actor = 1,
	World = 2,
	RootRelative = 3,
	BoneRelative = 4,
	AnimPhysSimSpaceType_MAX = 5
};

// Object: Enum AnimGraphRuntime.AnimPhysLinearConstraintType
enum class EAnimPhysLinearConstraintType : uint8_t
{
	Free = 0,
	Limited = 1,
	AnimPhysLinearConstraintType_MAX = 2
};

// Object: Enum AnimGraphRuntime.AnimPhysAngularConstraintType
enum class EAnimPhysAngularConstraintType : uint8_t
{
	Angular = 0,
	Cone = 1,
	AnimPhysAngularConstraintType_MAX = 2
};

// Object: Enum AnimGraphRuntime.EBlendListTransitionType
enum class EBlendListTransitionType : uint8_t
{
	StandardBlend = 0,
	Inertialization = 1,
	EBlendListTransitionType_MAX = 2
};

// Object: Enum AnimGraphRuntime.EDrivenDestinationMode
enum class EDrivenDestinationMode : uint8_t
{
	Bone = 0,
	MorphTarget = 1,
	MaterialParameter = 2,
	EDrivenDestinationMode_MAX = 3
};

// Object: Enum AnimGraphRuntime.EDrivenBoneModificationMode
enum class EDrivenBoneModificationMode : uint8_t
{
	AddToInput = 0,
	ReplaceComponent = 1,
	AddToRefPose = 2,
	EDrivenBoneModificationMode_MAX = 3
};

// Object: Enum AnimGraphRuntime.EConstraintOffsetOption
enum class EConstraintOffsetOption : uint8_t
{
	None = 0,
	Offset_RefPose = 1,
	EConstraintOffsetOption_MAX = 2
};

// Object: Enum AnimGraphRuntime.CopyBoneDeltaMode
enum class ECopyBoneDeltaMode : uint8_t
{
	Accumulate = 0,
	Copy = 1,
	CopyBoneDeltaMode_MAX = 2
};

// Object: Enum AnimGraphRuntime.EInterpolationBlend
enum class EInterpolationBlend : uint8_t
{
	Linear = 0,
	Cubic = 1,
	Sinusoidal = 2,
	EaseInOutExponent2 = 3,
	EaseInOutExponent3 = 4,
	EaseInOutExponent4 = 5,
	EaseInOutExponent5 = 6,
	MAX = 7
};

// Object: Enum AnimGraphRuntime.EBoneModificationMode
enum class EBoneModificationMode : uint8_t
{
	BMM_Ignore = 0,
	BMM_Replace = 1,
	BMM_Additive = 2,
	BMM_MAX = 3
};

// Object: Enum AnimGraphRuntime.EModifyCurveApplyMode
enum class EModifyCurveApplyMode : uint8_t
{
	Add = 0,
	Scale = 1,
	Blend = 2,
	WeightedMovingAverage = 3,
	RemapCurve = 4,
	EModifyCurveApplyMode_MAX = 5
};

// Object: Enum AnimGraphRuntime.EPoseDriverOutput
enum class EPoseDriverOutput : uint8_t
{
	DrivePoses = 0,
	DriveCurves = 1,
	EPoseDriverOutput_MAX = 2
};

// Object: Enum AnimGraphRuntime.EPoseDriverSource
enum class EPoseDriverSource : uint8_t
{
	Rotation = 0,
	Translation = 1,
	EPoseDriverSource_MAX = 2
};

// Object: Enum AnimGraphRuntime.EPoseDriverType
enum class EPoseDriverType : uint8_t
{
	SwingAndTwist = 0,
	SwingOnly = 1,
	Translation = 2,
	EPoseDriverType_MAX = 3
};

// Object: Enum AnimGraphRuntime.ESnapshotSourceMode
enum class ESnapshotSourceMode : uint8_t
{
	NamedSnapshot = 0,
	SnapshotPin = 1,
	ESnapshotSourceMode_MAX = 2
};

// Object: Enum AnimGraphRuntime.ERefPoseType
enum class ERefPoseType : uint8_t
{
	EIT_LocalSpace = 0,
	EIT_Additive = 1,
	EIT_MAX = 2
};

// Object: Enum AnimGraphRuntime.ESimulationSpace
enum class ESimulationSpace : uint8_t
{
	ComponentSpace = 0,
	WorldSpace = 1,
	BaseBoneSpace = 2,
	ESimulationSpace_MAX = 3
};

// Object: Enum AnimGraphRuntime.EScaleChainInitialLength
enum class EScaleChainInitialLength : uint8_t
{
	FixedDefaultLengthValue = 0,
	Distance = 1,
	ChainLength = 2,
	EScaleChainInitialLength_MAX = 3
};

// Object: Enum AnimGraphRuntime.ESequenceEvalReinit
enum class ESequenceEvalReinit : uint8_t
{
	NoReset = 0,
	StartPosition = 1,
	ExplicitTime = 2,
	ESequenceEvalReinit_MAX = 3
};

// Object: Enum AnimGraphRuntime.ESplineBoneAxis
enum class ESplineBoneAxis : uint8_t
{
	None = 0,
	X = 1,
	Y = 2,
	Z = 3,
	ESplineBoneAxis_MAX = 4
};

// Object: Enum AnimGraphRuntime.ERotationComponent
enum class ERotationComponent : uint8_t
{
	EulerX = 0,
	EulerY = 1,
	EulerZ = 2,
	QuaternionAngle = 3,
	SwingAngle = 4,
	TwistAngle = 5,
	ERotationComponent_MAX = 6
};

// Object: Enum AnimGraphRuntime.EEasingFuncType
enum class EEasingFuncType : uint8_t
{
	Linear = 0,
	Sinusoidal = 1,
	Cubic = 2,
	QuadraticInOut = 3,
	CubicInOut = 4,
	HermiteCubic = 5,
	QuarticInOut = 6,
	QuinticInOut = 7,
	CircularIn = 8,
	CircularOut = 9,
	CircularInOut = 10,
	ExpIn = 11,
	ExpOut = 12,
	ExpInOut = 13,
	CustomCurve = 14,
	EEasingFuncType_MAX = 15
};

// Object: Enum AnimGraphRuntime.ERBFNormalizeMethod
enum class ERBFNormalizeMethod : uint8_t
{
	OnlyNormalizeAboveOne = 0,
	AlwaysNormalize = 1,
	NormalizeWithinMedian = 2,
	ERBFNormalizeMethod_MAX = 3
};

// Object: Enum AnimGraphRuntime.ERBFDistanceMethod
enum class ERBFDistanceMethod : uint8_t
{
	Euclidean = 0,
	Quaternion = 1,
	SwingAngle = 2,
	DefaultMethod = 3,
	ERBFDistanceMethod_MAX = 4
};

// Object: Enum AnimGraphRuntime.ERBFFunctionType
enum class ERBFFunctionType : uint8_t
{
	Gaussian = 0,
	Exponential = 1,
	Linear = 2,
	Cubic = 3,
	Quintic = 4,
	DefaultFunction = 5,
	ERBFFunctionType_MAX = 6
};

// Object: ScriptStruct AnimGraphRuntime.AnimNode_SkeletalControlBase
// Size: 0x108 (Inherited: 0x48)
struct FAnimNode_SkeletalControlBase : FAnimNode_Base
{
	struct FComponentSpacePoseLink ComponentPose; // 0x48(0x18)
	int32_t LODThreshold; // 0x60(0x4)
	float ActualAlpha; // 0x64(0x4)
	EAnimAlphaInputType AlphaInputType; // 0x68(0x1)
	uint8_t bAlphaBoolEnabled : 1; // 0x69(0x1), Mask(0x1)
	uint8_t BitPad_0x69_1 : 7; // 0x69(0x1)
	uint8_t Pad_0x6A[0x2]; // 0x6A(0x2)
	float Alpha; // 0x6C(0x4)
	struct FInputScaleBias AlphaScaleBias; // 0x70(0x8)
	struct FInputAlphaBoolBlend AlphaBoolBlend; // 0x78(0x48)
	struct FName AlphaCurveName; // 0xC0(0x8)
	struct FInputScaleBiasClamp AlphaScaleBiasClamp; // 0xC8(0x30)
	uint8_t Pad_0xF8[0x10]; // 0xF8(0x10)
};

// Object: ScriptStruct AnimGraphRuntime.AnimNode_Slot
// Size: 0x88 (Inherited: 0x48)
struct FAnimNode_Slot : FAnimNode_Base
{
	struct FPoseLink Source; // 0x48(0x18)
	struct FName SlotName; // 0x60(0x8)
	uint8_t bAlwaysUpdateSourcePose : 1; // 0x68(0x1), Mask(0x1)
	uint8_t BitPad_0x68_1 : 7; // 0x68(0x1)
	uint8_t Pad_0x69[0x1F]; // 0x69(0x1F)
};

// Object: ScriptStruct AnimGraphRuntime.AnimNode_ModifyBone
// Size: 0x160 (Inherited: 0x108)
struct FAnimNode_ModifyBone : FAnimNode_SkeletalControlBase
{
	struct FBoneReference BoneToModify; // 0x108(0x10)
	struct FVector translation; // 0x118(0xC)
	struct FRotator Rotation; // 0x124(0xC)
	struct FVector Scale; // 0x130(0xC)
	EBoneModificationMode TranslationMode; // 0x13C(0x1)
	EBoneModificationMode RotationMode; // 0x13D(0x1)
	EBoneModificationMode ScaleMode; // 0x13E(0x1)
	EBoneControlSpace TranslationSpace; // 0x13F(0x1)
	EBoneControlSpace RotationSpace; // 0x140(0x1)
	EBoneControlSpace ScaleSpace; // 0x141(0x1)
	uint8_t bDefendNan : 1; // 0x142(0x1), Mask(0x1)
	uint8_t BitPad_0x142_1 : 7; // 0x142(0x1)
	uint8_t bEnableRawPtr : 1; // 0x143(0x1), Mask(0x1)
	uint8_t BitPad_0x143_1 : 7; // 0x143(0x1)
	uint8_t Pad_0x144[0x1C]; // 0x144(0x1C)
};

// Object: ScriptStruct AnimGraphRuntime.SocketReference
// Size: 0x40 (Inherited: 0x0)
struct FSocketReference
{
	uint8_t Pad_0x0[0x30]; // 0x0(0x30)
	struct FName SocketName; // 0x30(0x8)
	uint8_t Pad_0x38[0x8]; // 0x38(0x8)
};

// Object: ScriptStruct AnimGraphRuntime.BoneSocketTarget
// Size: 0x60 (Inherited: 0x0)
struct FBoneSocketTarget
{
	uint8_t bUseSocket : 1; // 0x0(0x1), Mask(0x1)
	uint8_t BitPad_0x0_1 : 7; // 0x0(0x1)
	uint8_t Pad_0x1[0x3]; // 0x1(0x3)
	struct FBoneReference BoneReference; // 0x4(0x10)
	uint8_t Pad_0x14[0xC]; // 0x14(0xC)
	struct FSocketReference SocketReference; // 0x20(0x40)
};

// Object: ScriptStruct AnimGraphRuntime.AnimNode_LayeredBoneBlend
// Size: 0x128 (Inherited: 0x48)
struct FAnimNode_LayeredBoneBlend : FAnimNode_Base
{
	uint8_t bEnableRawPtr : 1; // 0x48(0x1), Mask(0x1)
	uint8_t BitPad_0x48_1 : 7; // 0x48(0x1)
	uint8_t Pad_0x49[0x17]; // 0x49(0x17)
	struct FPoseLink BasePose; // 0x60(0x18)
	struct TArray<struct FPoseLink> BlendPoses; // 0x78(0x10)
	struct TArray<struct FInputBlendPose> LayerSetup; // 0x88(0x10)
	struct TArray<float> BlendWeights; // 0x98(0x10)
	uint8_t bMeshSpaceRotationBlend : 1; // 0xA8(0x1), Mask(0x1)
	uint8_t BitPad_0xA8_1 : 7; // 0xA8(0x1)
	uint8_t bMeshSpaceScaleBlend : 1; // 0xA9(0x1), Mask(0x1)
	uint8_t BitPad_0xA9_1 : 7; // 0xA9(0x1)
	ECurveBlendOption CurveBlendOption; // 0xAA(0x1)
	uint8_t bBlendRootMotionBasedOnRootBone : 1; // 0xAB(0x1), Mask(0x1)
	uint8_t BitPad_0xAB_1 : 7; // 0xAB(0x1)
	uint8_t Pad_0xAC[0x4]; // 0xAC(0x4)
	int32_t LODThreshold; // 0xB0(0x4)
	uint8_t bEnableBlendWeightsCache : 1; // 0xB4(0x1), Mask(0x1)
	uint8_t BitPad_0xB4_1 : 7; // 0xB4(0x1)
	uint8_t bEnableSameCachedPoseLinkSkip : 1; // 0xB5(0x1), Mask(0x1)
	uint8_t BitPad_0xB5_1 : 7; // 0xB5(0x1)
	uint8_t Pad_0xB6[0x2]; // 0xB6(0x2)
	struct TArray<struct FPerBoneBlendWeight> PerBoneBlendWeights; // 0xB8(0x10)
	struct FGuid SkeletonGuid; // 0xC8(0x10)
	struct FGuid VirtualBoneGuid; // 0xD8(0x10)
	uint8_t Pad_0xE8[0x40]; // 0xE8(0x40)
};

// Object: ScriptStruct AnimGraphRuntime.AnimNode_BlendSpacePlayer
// Size: 0x300 (Inherited: 0x68)
struct FAnimNode_BlendSpacePlayer : FAnimNode_AssetPlayerBase
{
	float X; // 0x68(0x4)
	float Y; // 0x6C(0x4)
	float Z; // 0x70(0x4)
	float PlayRate; // 0x74(0x4)
	uint8_t bLoop : 1; // 0x78(0x1), Mask(0x1)
	uint8_t BitPad_0x78_1 : 7; // 0x78(0x1)
	uint8_t bResetPlayTimeWhenBlendSpaceChanges : 1; // 0x79(0x1), Mask(0x1)
	uint8_t BitPad_0x79_1 : 7; // 0x79(0x1)
	uint8_t bUseCachePose : 1; // 0x7A(0x1), Mask(0x1)
	uint8_t BitPad_0x7A_1 : 7; // 0x7A(0x1)
	uint8_t Pad_0x7B[0x1]; // 0x7B(0x1)
	float StartPosition; // 0x7C(0x4)
	struct UBlendSpaceBase* BlendSpace; // 0x80(0x8)
	uint8_t Pad_0x88[0x88]; // 0x88(0x88)
	struct UBlendSpaceBase* PreviousBlendSpace; // 0x110(0x8)
	uint8_t Pad_0x118[0x1E8]; // 0x118(0x1E8)
};

// Object: ScriptStruct AnimGraphRuntime.AnimNode_ApplyAdditive
// Size: 0x128 (Inherited: 0x48)
struct FAnimNode_ApplyAdditive : FAnimNode_Base
{
	struct FPoseLink Base; // 0x48(0x18)
	struct FPoseLink Additive; // 0x60(0x18)
	float Alpha; // 0x78(0x4)
	struct FInputScaleBias AlphaScaleBias; // 0x7C(0x8)
	int32_t LODThreshold; // 0x84(0x4)
	struct FInputAlphaBoolBlend AlphaBoolBlend; // 0x88(0x48)
	struct FName AlphaCurveName; // 0xD0(0x8)
	struct FInputScaleBiasClamp AlphaScaleBiasClamp; // 0xD8(0x30)
	uint8_t Pad_0x108[0x4]; // 0x108(0x4)
	EAnimAlphaInputType AlphaInputType; // 0x10C(0x1)
	uint8_t bAlphaBoolEnabled : 1; // 0x10D(0x1), Mask(0x1)
	uint8_t BitPad_0x10D_1 : 7; // 0x10D(0x1)
	uint8_t Pad_0x10E[0x13]; // 0x10E(0x13)
	uint8_t bEnableRawPtr : 1; // 0x121(0x1), Mask(0x1)
	uint8_t BitPad_0x121_1 : 7; // 0x121(0x1)
	uint8_t bEnableNodeJump : 1; // 0x122(0x1), Mask(0x1)
	uint8_t BitPad_0x122_1 : 7; // 0x122(0x1)
	uint8_t Pad_0x123[0x5]; // 0x123(0x5)
};

// Object: ScriptStruct AnimGraphRuntime.AnimNode_AimOffsetLookAt
// Size: 0x3D0 (Inherited: 0x300)
struct FAnimNode_AimOffsetLookAt : FAnimNode_BlendSpacePlayer
{
	uint8_t Pad_0x300[0x60]; // 0x300(0x60)
	struct FPoseLink BasePose; // 0x360(0x18)
	int32_t LODThreshold; // 0x378(0x4)
	struct FName SourceSocketName; // 0x37C(0x8)
	struct FName PivotSocketName; // 0x384(0x8)
	struct FVector LookAtLocation; // 0x38C(0xC)
	struct FVector SocketAxis; // 0x398(0xC)
	float Alpha; // 0x3A4(0x4)
	uint8_t Pad_0x3A8[0x28]; // 0x3A8(0x28)
};

// Object: ScriptStruct AnimGraphRuntime.AnimPhysConstraintSetup
// Size: 0x48 (Inherited: 0x0)
struct FAnimPhysConstraintSetup
{
	EAnimPhysLinearConstraintType LinearXLimitType; // 0x0(0x1)
	EAnimPhysLinearConstraintType LinearYLimitType; // 0x1(0x1)
	EAnimPhysLinearConstraintType LinearZLimitType; // 0x2(0x1)
	uint8_t Pad_0x3[0x1]; // 0x3(0x1)
	struct FVector LinearAxesMin; // 0x4(0xC)
	struct FVector LinearAxesMax; // 0x10(0xC)
	EAnimPhysAngularConstraintType AngularConstraintType; // 0x1C(0x1)
	EAnimPhysTwistAxis TwistAxis; // 0x1D(0x1)
	EAnimPhysTwistAxis AngularTargetAxis; // 0x1E(0x1)
	uint8_t Pad_0x1F[0x1]; // 0x1F(0x1)
	float ConeAngle; // 0x20(0x4)
	struct FVector AngularLimitsMin; // 0x24(0xC)
	struct FVector AngularLimitsMax; // 0x30(0xC)
	struct FVector AngularTarget; // 0x3C(0xC)
};

// Object: ScriptStruct AnimGraphRuntime.RotationRetargetingInfo
// Size: 0x150 (Inherited: 0x0)
struct FRotationRetargetingInfo
{
	uint8_t bEnabled : 1; // 0x0(0x1), Mask(0x1)
	uint8_t BitPad_0x0_1 : 7; // 0x0(0x1)
	uint8_t Pad_0x1[0xF]; // 0x1(0xF)
	struct FTransform Source; // 0x10(0x30)
	struct FTransform Target; // 0x40(0x30)
	ERotationComponent RotationComponent; // 0x70(0x1)
	uint8_t Pad_0x71[0x3]; // 0x71(0x3)
	struct FVector TwistAxis; // 0x74(0xC)
	uint8_t bUseAbsoluteAngle : 1; // 0x80(0x1), Mask(0x1)
	uint8_t BitPad_0x80_1 : 7; // 0x80(0x1)
	uint8_t Pad_0x81[0x3]; // 0x81(0x3)
	float SourceMinimum; // 0x84(0x4)
	float SourceMaximum; // 0x88(0x4)
	float TargetMinimum; // 0x8C(0x4)
	float TargetMaximum; // 0x90(0x4)
	EEasingFuncType EasingType; // 0x94(0x1)
	uint8_t Pad_0x95[0x3]; // 0x95(0x3)
	struct FRuntimeFloatCurve CustomCurve; // 0x98(0xA0)
	uint8_t bFlipEasing : 1; // 0x138(0x1), Mask(0x1)
	uint8_t BitPad_0x138_1 : 7; // 0x138(0x1)
	uint8_t Pad_0x139[0x3]; // 0x139(0x3)
	float EasingWeight; // 0x13C(0x4)
	uint8_t bClamp : 1; // 0x140(0x1), Mask(0x1)
	uint8_t BitPad_0x140_1 : 7; // 0x140(0x1)
	uint8_t Pad_0x141[0xF]; // 0x141(0xF)
};

// Object: ScriptStruct AnimGraphRuntime.AnimNode_AnimDynamics
// Size: 0x4A0 (Inherited: 0x108)
struct FAnimNode_AnimDynamics : FAnimNode_SkeletalControlBase
{
	float LinearDampingOverride; // 0x108(0x4)
	float AngularDampingOverride; // 0x10C(0x4)
	uint8_t Pad_0x110[0x60]; // 0x110(0x60)
	struct FBoneReference RelativeSpaceBone; // 0x170(0x10)
	struct FBoneReference BoundBone; // 0x180(0x10)
	struct FBoneReference ChainEnd; // 0x190(0x10)
	struct FVector BoxExtents; // 0x1A0(0xC)
	struct FVector LocalJointOffset; // 0x1AC(0xC)
	float GravityScale; // 0x1B8(0x4)
	struct FVector GravityOverride; // 0x1BC(0xC)
	float LinearSpringConstant; // 0x1C8(0x4)
	float AngularSpringConstant; // 0x1CC(0x4)
	float WindScale; // 0x1D0(0x4)
	struct FVector ComponentLinearAccScale; // 0x1D4(0xC)
	struct FVector ComponentLinearVelScale; // 0x1E0(0xC)
	struct FVector ComponentAppliedLinearAccClamp; // 0x1EC(0xC)
	float AngularBiasOverride; // 0x1F8(0x4)
	int32_t NumSolverIterationsPreUpdate; // 0x1FC(0x4)
	int32_t NumSolverIterationsPostUpdate; // 0x200(0x4)
	struct FAnimPhysConstraintSetup ConstraintSetup; // 0x204(0x48)
	uint8_t Pad_0x24C[0x4]; // 0x24C(0x4)
	struct TArray<struct FAnimPhysSphericalLimit> SphericalLimits; // 0x250(0x10)
	float SphereCollisionRadius; // 0x260(0x4)
	struct FVector ExternalForce; // 0x264(0xC)
	struct TArray<struct FAnimPhysPlanarLimit> PlanarLimits; // 0x270(0x10)
	EAnimPhysCollisionType CollisionType; // 0x280(0x1)
	EAnimPhysSimSpaceType SimulationSpace; // 0x281(0x1)
	uint8_t Pad_0x282[0x2]; // 0x282(0x2)
	uint8_t bUseSphericalLimits : 1; // 0x284(0x1), Mask(0x1)
	uint8_t bUsePlanarLimit : 1; // 0x284(0x1), Mask(0x2)
	uint8_t bDoUpdate : 1; // 0x284(0x1), Mask(0x4)
	uint8_t bDoEval : 1; // 0x284(0x1), Mask(0x8)
	uint8_t bOverrideLinearDamping : 1; // 0x284(0x1), Mask(0x10)
	uint8_t bOverrideAngularBias : 1; // 0x284(0x1), Mask(0x20)
	uint8_t bOverrideAngularDamping : 1; // 0x284(0x1), Mask(0x40)
	uint8_t bEnableWind : 1; // 0x284(0x1), Mask(0x80)
	uint8_t BitPad_0x285_0 : 1; // 0x285(0x1)
	uint8_t bUseGravityOverride : 1; // 0x285(0x1), Mask(0x2)
	uint8_t bLinearSpring : 1; // 0x285(0x1), Mask(0x4)
	uint8_t bAngularSpring : 1; // 0x285(0x1), Mask(0x8)
	uint8_t bChain : 1; // 0x285(0x1), Mask(0x10)
	uint8_t BitPad_0x285_5 : 3; // 0x285(0x1)
	uint8_t Pad_0x286[0xA]; // 0x286(0xA)
	struct FRotationRetargetingInfo RetargetingSettings; // 0x290(0x150)
	uint8_t Pad_0x3E0[0xC0]; // 0x3E0(0xC0)
};

// Object: ScriptStruct AnimGraphRuntime.AnimPhysPlanarLimit
// Size: 0x40 (Inherited: 0x0)
struct FAnimPhysPlanarLimit
{
	struct FBoneReference DrivingBone; // 0x0(0x10)
	struct FTransform PlaneTransform; // 0x10(0x30)
};

// Object: ScriptStruct AnimGraphRuntime.AnimPhysSphericalLimit
// Size: 0x24 (Inherited: 0x0)
struct FAnimPhysSphericalLimit
{
	struct FBoneReference DrivingBone; // 0x0(0x10)
	struct FVector SphereLocalOffset; // 0x10(0xC)
	float LimitRadius; // 0x1C(0x4)
	ESphericalLimitType LimitType; // 0x20(0x1)
	uint8_t Pad_0x21[0x3]; // 0x21(0x3)
};

// Object: ScriptStruct AnimGraphRuntime.AnimNode_ApplyLimits
// Size: 0x128 (Inherited: 0x108)
struct FAnimNode_ApplyLimits : FAnimNode_SkeletalControlBase
{
	struct TArray<struct FAngularRangeLimit> AngularRangeLimits; // 0x108(0x10)
	struct TArray<struct FVector> AngularOffsets; // 0x118(0x10)
};

// Object: ScriptStruct AnimGraphRuntime.AngularRangeLimit
// Size: 0x28 (Inherited: 0x0)
struct FAngularRangeLimit
{
	struct FVector LimitMin; // 0x0(0xC)
	struct FVector LimitMax; // 0xC(0xC)
	struct FBoneReference Bone; // 0x18(0x10)
};

// Object: ScriptStruct AnimGraphRuntime.AnimNode_BlendBoneByChannel
// Size: 0xC0 (Inherited: 0x48)
struct FAnimNode_BlendBoneByChannel : FAnimNode_Base
{
	uint8_t bEnableRawPtr : 1; // 0x48(0x1), Mask(0x1)
	uint8_t BitPad_0x48_1 : 7; // 0x48(0x1)
	uint8_t Pad_0x49[0xF]; // 0x49(0xF)
	struct FPoseLink A; // 0x58(0x18)
	struct FPoseLink B; // 0x70(0x18)
	struct TArray<struct FBlendBoneByChannelEntry> BoneDefinitions; // 0x88(0x10)
	uint8_t Pad_0x98[0x10]; // 0x98(0x10)
	float Alpha; // 0xA8(0x4)
	uint8_t Pad_0xAC[0x4]; // 0xAC(0x4)
	struct FInputScaleBias AlphaScaleBias; // 0xB0(0x8)
	EBoneControlSpace TransformsSpace; // 0xB8(0x1)
	uint8_t Pad_0xB9[0x7]; // 0xB9(0x7)
};

// Object: ScriptStruct AnimGraphRuntime.BlendBoneByChannelEntry
// Size: 0x24 (Inherited: 0x0)
struct FBlendBoneByChannelEntry
{
	struct FBoneReference SourceBone; // 0x0(0x10)
	struct FBoneReference TargetBone; // 0x10(0x10)
	uint8_t bBlendTranslation : 1; // 0x20(0x1), Mask(0x1)
	uint8_t BitPad_0x20_1 : 7; // 0x20(0x1)
	uint8_t bBlendRotation : 1; // 0x21(0x1), Mask(0x1)
	uint8_t BitPad_0x21_1 : 7; // 0x21(0x1)
	uint8_t bBlendScale : 1; // 0x22(0x1), Mask(0x1)
	uint8_t BitPad_0x22_1 : 7; // 0x22(0x1)
	uint8_t Pad_0x23[0x1]; // 0x23(0x1)
};

// Object: ScriptStruct AnimGraphRuntime.AnimNode_BlendListBase
// Size: 0xE8 (Inherited: 0x48)
struct FAnimNode_BlendListBase : FAnimNode_Base
{
	struct TArray<struct FPoseLink> BlendPose; // 0x48(0x10)
	uint8_t bAllPosesUseSameBlendTime : 1; // 0x58(0x1), Mask(0x1)
	uint8_t BitPad_0x58_1 : 7; // 0x58(0x1)
	uint8_t Pad_0x59[0x3]; // 0x59(0x3)
	float AllPosesSameBlendTime; // 0x5C(0x4)
	struct TArray<float> BlendTime; // 0x60(0x10)
	EBlendListTransitionType TransitionType; // 0x70(0x1)
	EAlphaBlendOption BlendType; // 0x71(0x1)
	uint8_t bResetChildOnActivation : 1; // 0x72(0x1), Mask(0x1)
	uint8_t BitPad_0x72_1 : 7; // 0x72(0x1)
	uint8_t Pad_0x73[0x5]; // 0x73(0x5)
	struct UCurveFloat* CustomBlendCurve; // 0x78(0x8)
	struct UBlendProfile* BlendProfile; // 0x80(0x8)
	int32_t BlendProfileLODThreshold; // 0x88(0x4)
	uint8_t Pad_0x8C[0x5C]; // 0x8C(0x5C)
};

// Object: ScriptStruct AnimGraphRuntime.AnimNode_BlendListByBool
// Size: 0x108 (Inherited: 0xE8)
struct FAnimNode_BlendListByBool : FAnimNode_BlendListBase
{
	uint8_t bActiveValue : 1; // 0xE2(0x1), Mask(0x1)
	uint8_t bEnableRawPtr : 1; // 0xE3(0x1), Mask(0x1)
	uint8_t BitPad_0xE8_2 : 6; // 0xE8(0x1)
	uint8_t Pad_0xE9[0x8]; // 0xE9(0x8)
	uint8_t bEnableBlendTimeRawPtr : 1; // 0xF1(0x1), Mask(0x1)
	uint8_t BitPad_0xF1_1 : 7; // 0xF1(0x1)
	uint8_t Pad_0xF2[0x16]; // 0xF2(0x16)
};

// Object: ScriptStruct AnimGraphRuntime.AnimNode_BlendListByEnum
// Size: 0x108 (Inherited: 0xE8)
struct FAnimNode_BlendListByEnum : FAnimNode_BlendListBase
{
	uint8_t bEnableRawPtr : 1; // 0xE2(0x1), Mask(0x1)
	uint8_t BitPad_0xE8_1 : 7; // 0xE8(0x1)
	uint8_t Pad_0xE9[0x7]; // 0xE9(0x7)
	struct TArray<int32_t> EnumToPoseIndex; // 0xF0(0x10)
	uint8_t ActiveEnumValue; // 0x100(0x1)
	uint8_t Pad_0x101[0x7]; // 0x101(0x7)
};

// Object: ScriptStruct AnimGraphRuntime.AnimNode_BlendListByInt
// Size: 0xF8 (Inherited: 0xE8)
struct FAnimNode_BlendListByInt : FAnimNode_BlendListBase
{
	uint8_t bEnableRawPtr : 1; // 0xE2(0x1), Mask(0x1)
	uint8_t BitPad_0xE8_1 : 7; // 0xE8(0x1)
	uint8_t Pad_0xE9[0x7]; // 0xE9(0x7)
	int32_t ActiveChildIndex; // 0xF0(0x4)
	uint8_t Pad_0xF4[0x4]; // 0xF4(0x4)
};

// Object: ScriptStruct AnimGraphRuntime.AnimNode_BlendSpaceEvaluator
// Size: 0x308 (Inherited: 0x300)
struct FAnimNode_BlendSpaceEvaluator : FAnimNode_BlendSpacePlayer
{
	float NormalizedTime; // 0x300(0x4)
	uint8_t Pad_0x304[0x4]; // 0x304(0x4)
};

// Object: ScriptStruct AnimGraphRuntime.AnimNode_BoneDrivenController
// Size: 0x158 (Inherited: 0x108)
struct FAnimNode_BoneDrivenController : FAnimNode_SkeletalControlBase
{
	struct FBoneReference SourceBone; // 0x108(0x10)
	struct UCurveFloat* DrivingCurve; // 0x118(0x8)
	float Multiplier; // 0x120(0x4)
	float RangeMin; // 0x124(0x4)
	float RangeMax; // 0x128(0x4)
	float RemappedMin; // 0x12C(0x4)
	float RemappedMax; // 0x130(0x4)
	struct FName ParameterName; // 0x134(0x8)
	struct FBoneReference TargetBone; // 0x13C(0x10)
	EDrivenDestinationMode DestinationMode; // 0x14C(0x1)
	EDrivenBoneModificationMode ModificationMode; // 0x14D(0x1)
	EComponentType SourceComponent; // 0x14E(0x1)
	uint8_t bUseRange : 1; // 0x14F(0x1), Mask(0x1)
	uint8_t bAffectTargetTranslationX : 1; // 0x14F(0x1), Mask(0x2)
	uint8_t bAffectTargetTranslationY : 1; // 0x14F(0x1), Mask(0x4)
	uint8_t bAffectTargetTranslationZ : 1; // 0x14F(0x1), Mask(0x8)
	uint8_t bAffectTargetRotationX : 1; // 0x14F(0x1), Mask(0x10)
	uint8_t bAffectTargetRotationY : 1; // 0x14F(0x1), Mask(0x20)
	uint8_t bAffectTargetRotationZ : 1; // 0x14F(0x1), Mask(0x40)
	uint8_t bAffectTargetScaleX : 1; // 0x14F(0x1), Mask(0x80)
	uint8_t bAffectTargetScaleY : 1; // 0x150(0x1), Mask(0x1)
	uint8_t bAffectTargetScaleZ : 1; // 0x150(0x1), Mask(0x2)
	uint8_t BitPad_0x150_2 : 6; // 0x150(0x1)
	uint8_t Pad_0x151[0x7]; // 0x151(0x7)
};

// Object: ScriptStruct AnimGraphRuntime.AnimNode_CCDIK
// Size: 0x1C0 (Inherited: 0x108)
struct FAnimNode_CCDIK : FAnimNode_SkeletalControlBase
{
	struct FVector EffectorLocation; // 0x108(0xC)
	EBoneControlSpace EffectorLocationSpace; // 0x114(0x1)
	uint8_t Pad_0x115[0xB]; // 0x115(0xB)
	struct FBoneSocketTarget EffectorTarget; // 0x120(0x60)
	struct FBoneReference TipBone; // 0x180(0x10)
	struct FBoneReference RootBone; // 0x190(0x10)
	float Precision; // 0x1A0(0x4)
	int32_t MaxIterations; // 0x1A4(0x4)
	uint8_t bStartFromTail : 1; // 0x1A8(0x1), Mask(0x1)
	uint8_t BitPad_0x1A8_1 : 7; // 0x1A8(0x1)
	uint8_t bEnableRotationLimit : 1; // 0x1A9(0x1), Mask(0x1)
	uint8_t BitPad_0x1A9_1 : 7; // 0x1A9(0x1)
	uint8_t Pad_0x1AA[0x6]; // 0x1AA(0x6)
	struct TArray<float> RotationLimitPerJoints; // 0x1B0(0x10)
};

// Object: ScriptStruct AnimGraphRuntime.AnimNode_ChainLookAt
// Size: 0x1F0 (Inherited: 0x108)
struct FAnimNode_ChainLookAt : FAnimNode_SkeletalControlBase
{
	struct FAxis LookAt_Axis; // 0x108(0x10)
	uint8_t bUseLookUpAxis : 1; // 0x118(0x1), Mask(0x1)
	uint8_t BitPad_0x118_1 : 7; // 0x118(0x1)
	uint8_t Pad_0x119[0x3]; // 0x119(0x3)
	struct FAxis LookUp_Axis; // 0x11C(0x10)
	uint8_t Pad_0x12C[0x4]; // 0x12C(0x4)
	struct TArray<struct FLookAtBoneInfo> BonesToModify; // 0x130(0x10)
	struct TArray<struct FLookAtEyeBoneInfo> EyeBonesToModify; // 0x140(0x10)
	struct FBoneSocketTarget LookAtTarget; // 0x150(0x60)
	struct FVector LookAtLocation; // 0x1B0(0xC)
	float LookAtSpeedStrength; // 0x1BC(0x4)
	uint8_t Pad_0x1C0[0x30]; // 0x1C0(0x30)
};

// Object: ScriptStruct AnimGraphRuntime.LookAtEyeBoneInfo
// Size: 0x30 (Inherited: 0x0)
struct FLookAtEyeBoneInfo
{
	struct FBoneReference EyeBone; // 0x0(0x10)
	float RotateSpeed; // 0x10(0x4)
	struct FAxis LookAt_Axis; // 0x14(0x10)
	struct FVector ClampDegree; // 0x24(0xC)
};

// Object: ScriptStruct AnimGraphRuntime.LookAtBoneInfo
// Size: 0x18 (Inherited: 0x0)
struct FLookAtBoneInfo
{
	struct FBoneReference Bone; // 0x0(0x10)
	float RotateSpeed; // 0x10(0x4)
	float ClampDegree; // 0x14(0x4)
};

// Object: ScriptStruct AnimGraphRuntime.LookAtLink
// Size: 0x80 (Inherited: 0x0)
struct FLookAtLink
{
	uint8_t Pad_0x0[0x80]; // 0x0(0x80)
};

// Object: ScriptStruct AnimGraphRuntime.AnimNode_Constraint
// Size: 0x148 (Inherited: 0x108)
struct FAnimNode_Constraint : FAnimNode_SkeletalControlBase
{
	struct FBoneReference BoneToModify; // 0x108(0x10)
	struct TArray<struct FConstraint> ConstraintSetup; // 0x118(0x10)
	struct TArray<float> ConstraintWeights; // 0x128(0x10)
	uint8_t Pad_0x138[0x10]; // 0x138(0x10)
};

// Object: ScriptStruct AnimGraphRuntime.Constraint
// Size: 0x1C (Inherited: 0x0)
struct FConstraint
{
	struct FBoneReference TargetBone; // 0x0(0x10)
	EConstraintOffsetOption OffsetOption; // 0x10(0x1)
	ETransformConstraintType TransformType; // 0x11(0x1)
	struct FFilterOptionPerAxis PerAxis; // 0x12(0x3)
	uint8_t Pad_0x15[0x7]; // 0x15(0x7)
};

// Object: ScriptStruct AnimGraphRuntime.AnimNode_CopyBone
// Size: 0x130 (Inherited: 0x108)
struct FAnimNode_CopyBone : FAnimNode_SkeletalControlBase
{
	struct FBoneReference SourceBone; // 0x108(0x10)
	struct FBoneReference TargetBone; // 0x118(0x10)
	uint8_t bCopyTranslation : 1; // 0x128(0x1), Mask(0x1)
	uint8_t BitPad_0x128_1 : 7; // 0x128(0x1)
	uint8_t bCopyRotation : 1; // 0x129(0x1), Mask(0x1)
	uint8_t BitPad_0x129_1 : 7; // 0x129(0x1)
	uint8_t bCopyScale : 1; // 0x12A(0x1), Mask(0x1)
	uint8_t BitPad_0x12A_1 : 7; // 0x12A(0x1)
	EBoneControlSpace ControlSpace; // 0x12B(0x1)
	uint8_t bEnableFastPath : 1; // 0x12C(0x1), Mask(0x1)
	uint8_t BitPad_0x12C_1 : 7; // 0x12C(0x1)
	uint8_t Pad_0x12D[0x3]; // 0x12D(0x3)
};

// Object: ScriptStruct AnimGraphRuntime.AnimNode_CopyBoneDelta
// Size: 0x138 (Inherited: 0x108)
struct FAnimNode_CopyBoneDelta : FAnimNode_SkeletalControlBase
{
	struct FBoneReference SourceBone; // 0x108(0x10)
	struct FBoneReference TargetBone; // 0x118(0x10)
	uint8_t bCopyTranslation : 1; // 0x128(0x1), Mask(0x1)
	uint8_t BitPad_0x128_1 : 7; // 0x128(0x1)
	uint8_t bCopyRotation : 1; // 0x129(0x1), Mask(0x1)
	uint8_t BitPad_0x129_1 : 7; // 0x129(0x1)
	uint8_t bCopyScale : 1; // 0x12A(0x1), Mask(0x1)
	uint8_t BitPad_0x12A_1 : 7; // 0x12A(0x1)
	ECopyBoneDeltaMode CopyMode; // 0x12B(0x1)
	float TranslationMultiplier; // 0x12C(0x4)
	float RotationMultiplier; // 0x130(0x4)
	float ScaleMultiplier; // 0x134(0x4)
};

// Object: ScriptStruct AnimGraphRuntime.AnimNode_CopyPoseFromMesh
// Size: 0x178 (Inherited: 0x48)
struct FAnimNode_CopyPoseFromMesh : FAnimNode_Base
{
	struct TWeakObjectPtr<struct USkeletalMeshComponent> SourceMeshComponent; // 0x48(0x8)
	uint8_t bUseAttachedParent : 1; // 0x50(0x1), Mask(0x1)
	uint8_t BitPad_0x50_1 : 7; // 0x50(0x1)
	uint8_t bCopyCurves : 1; // 0x51(0x1), Mask(0x1)
	uint8_t BitPad_0x51_1 : 7; // 0x51(0x1)
	uint8_t Pad_0x52[0x126]; // 0x52(0x126)
};

// Object: ScriptStruct AnimGraphRuntime.AnimNode_CurveSource
// Size: 0x80 (Inherited: 0x48)
struct FAnimNode_CurveSource : FAnimNode_Base
{
	struct FPoseLink SourcePose; // 0x48(0x18)
	struct FName SourceBinding; // 0x60(0x8)
	float Alpha; // 0x68(0x4)
	uint8_t Pad_0x6C[0x4]; // 0x6C(0x4)
	struct TScriptInterface<ICurveSourceInterface> CurveSource; // 0x70(0x10)
};

// Object: ScriptStruct AnimGraphRuntime.AnimNode_Fabrik
// Size: 0x1F0 (Inherited: 0x108)
struct FAnimNode_Fabrik : FAnimNode_SkeletalControlBase
{
	uint8_t Pad_0x108[0x8]; // 0x108(0x8)
	struct FTransform EffectorTransform; // 0x110(0x30)
	struct FBoneSocketTarget EffectorTarget; // 0x140(0x60)
	struct FBoneReference TipBone; // 0x1A0(0x10)
	struct FBoneReference RootBone; // 0x1B0(0x10)
	float Precision; // 0x1C0(0x4)
	int32_t MaxIterations; // 0x1C4(0x4)
	EBoneControlSpace EffectorTransformSpace; // 0x1C8(0x1)
	EBoneRotationSource EffectorRotationSource; // 0x1C9(0x1)
	uint8_t Pad_0x1CA[0x1F]; // 0x1CA(0x1F)
	uint8_t bEnableRawPtr : 1; // 0x1E9(0x1), Mask(0x1)
	uint8_t BitPad_0x1E9_1 : 7; // 0x1E9(0x1)
	uint8_t Pad_0x1EA[0x6]; // 0x1EA(0x6)
};

// Object: ScriptStruct AnimGraphRuntime.AnimNode_HandIKRetargeting
// Size: 0x160 (Inherited: 0x108)
struct FAnimNode_HandIKRetargeting : FAnimNode_SkeletalControlBase
{
	struct FBoneReference RightHandFK; // 0x108(0x10)
	struct FBoneReference LeftHandFK; // 0x118(0x10)
	struct FBoneReference RightHandIK; // 0x128(0x10)
	struct FBoneReference LeftHandIK; // 0x138(0x10)
	struct TArray<struct FBoneReference> IKBonesToMove; // 0x148(0x10)
	float HandFKWeight; // 0x158(0x4)
	uint8_t Pad_0x15C[0x4]; // 0x15C(0x4)
};

// Object: ScriptStruct AnimGraphRuntime.AnimNode_LegIK
// Size: 0x138 (Inherited: 0x108)
struct FAnimNode_LegIK : FAnimNode_SkeletalControlBase
{
	float ReachPrecision; // 0x108(0x4)
	int32_t MaxIterations; // 0x10C(0x4)
	struct TArray<struct FAnimLegIKDefinition> LegsDefinition; // 0x110(0x10)
	uint8_t Pad_0x120[0x18]; // 0x120(0x18)
};

// Object: ScriptStruct AnimGraphRuntime.AnimLegIKDefinition
// Size: 0x2C (Inherited: 0x0)
struct FAnimLegIKDefinition
{
	struct FBoneReference IKFootBone; // 0x0(0x10)
	struct FBoneReference FKFootBone; // 0x10(0x10)
	int32_t NumBonesInLimb; // 0x20(0x4)
	float MinRotationAngle; // 0x24(0x4)
	EAxis FootBoneForwardAxis; // 0x28(0x1)
	EAxis HingeRotationAxis; // 0x29(0x1)
	uint8_t bEnableRotationLimit : 1; // 0x2A(0x1), Mask(0x1)
	uint8_t BitPad_0x2A_1 : 7; // 0x2A(0x1)
	uint8_t bEnableKneeTwistCorrection : 1; // 0x2B(0x1), Mask(0x1)
	uint8_t BitPad_0x2B_1 : 7; // 0x2B(0x1)
};

// Object: ScriptStruct AnimGraphRuntime.AnimLegIKData
// Size: 0xA0 (Inherited: 0x0)
struct FAnimLegIKData
{
	uint8_t Pad_0x0[0xA0]; // 0x0(0xA0)
};

// Object: ScriptStruct AnimGraphRuntime.IKChain
// Size: 0x38 (Inherited: 0x0)
struct FIKChain
{
	uint8_t Pad_0x0[0x38]; // 0x0(0x38)
};

// Object: ScriptStruct AnimGraphRuntime.IKChainLink
// Size: 0x3C (Inherited: 0x0)
struct FIKChainLink
{
	uint8_t Pad_0x0[0x3C]; // 0x0(0x3C)
};

// Object: ScriptStruct AnimGraphRuntime.AnimNode_LookAt
// Size: 0x1F0 (Inherited: 0x108)
struct FAnimNode_LookAt : FAnimNode_SkeletalControlBase
{
	struct FBoneReference BoneToModify; // 0x108(0x10)
	uint8_t Pad_0x118[0x8]; // 0x118(0x8)
	struct FBoneSocketTarget LookAtTarget; // 0x120(0x60)
	struct FVector LookAtLocation; // 0x180(0xC)
	struct FAxis LookAt_Axis; // 0x18C(0x10)
	uint8_t bUseLookUpAxis : 1; // 0x19C(0x1), Mask(0x1)
	uint8_t BitPad_0x19C_1 : 7; // 0x19C(0x1)
	EInterpolationBlend InterpolationType; // 0x19D(0x1)
	uint8_t Pad_0x19E[0x2]; // 0x19E(0x2)
	struct FAxis LookUp_Axis; // 0x1A0(0x10)
	float LookAtClamp; // 0x1B0(0x4)
	float InterpolationTime; // 0x1B4(0x4)
	float InterpolationTriggerThreashold; // 0x1B8(0x4)
	uint8_t Pad_0x1BC[0x34]; // 0x1BC(0x34)
};

// Object: ScriptStruct AnimGraphRuntime.AnimNode_MakeDynamicAdditive
// Size: 0x80 (Inherited: 0x48)
struct FAnimNode_MakeDynamicAdditive : FAnimNode_Base
{
	struct FPoseLink Base; // 0x48(0x18)
	struct FPoseLink Additive; // 0x60(0x18)
	uint8_t bMeshSpaceAdditive : 1; // 0x78(0x1), Mask(0x1)
	uint8_t BitPad_0x78_1 : 7; // 0x78(0x1)
	uint8_t Pad_0x79[0x7]; // 0x79(0x7)
};

// Object: ScriptStruct AnimGraphRuntime.AnimNode_ModifyCurve
// Size: 0x98 (Inherited: 0x48)
struct FAnimNode_ModifyCurve : FAnimNode_Base
{
	struct FPoseLink SourcePose; // 0x48(0x18)
	struct TArray<float> CurveValues; // 0x60(0x10)
	struct TArray<struct FName> CurveNames; // 0x70(0x10)
	uint8_t Pad_0x80[0x10]; // 0x80(0x10)
	float Alpha; // 0x90(0x4)
	EModifyCurveApplyMode ApplyMode; // 0x94(0x1)
	uint8_t Pad_0x95[0x3]; // 0x95(0x3)
};

// Object: ScriptStruct AnimGraphRuntime.AnimNode_MultiWayBlend
// Size: 0x88 (Inherited: 0x48)
struct FAnimNode_MultiWayBlend : FAnimNode_Base
{
	struct TArray<struct FPoseLink> Poses; // 0x48(0x10)
	struct TArray<float> DesiredAlphas; // 0x58(0x10)
	uint8_t Pad_0x68[0x10]; // 0x68(0x10)
	struct FInputScaleBias AlphaScaleBias; // 0x78(0x8)
	uint8_t bAdditiveNode : 1; // 0x80(0x1), Mask(0x1)
	uint8_t BitPad_0x80_1 : 7; // 0x80(0x1)
	uint8_t bNormalizeAlpha : 1; // 0x81(0x1), Mask(0x1)
	uint8_t BitPad_0x81_1 : 7; // 0x81(0x1)
	uint8_t Pad_0x82[0x6]; // 0x82(0x6)
};

// Object: ScriptStruct AnimGraphRuntime.AnimNode_ObserveBone
// Size: 0x140 (Inherited: 0x108)
struct FAnimNode_ObserveBone : FAnimNode_SkeletalControlBase
{
	struct FBoneReference BoneToObserve; // 0x108(0x10)
	EBoneControlSpace DisplaySpace; // 0x118(0x1)
	uint8_t bRelativeToRefPose : 1; // 0x119(0x1), Mask(0x1)
	uint8_t BitPad_0x119_1 : 7; // 0x119(0x1)
	uint8_t Pad_0x11A[0x2]; // 0x11A(0x2)
	struct FVector translation; // 0x11C(0xC)
	struct FRotator Rotation; // 0x128(0xC)
	struct FVector Scale; // 0x134(0xC)
};

// Object: ScriptStruct AnimGraphRuntime.AnimNode_PoseHandler
// Size: 0xB0 (Inherited: 0x68)
struct FAnimNode_PoseHandler : FAnimNode_AssetPlayerBase
{
	struct UPoseAsset* PoseAsset; // 0x68(0x8)
	uint8_t Pad_0x70[0x40]; // 0x70(0x40)
};

// Object: ScriptStruct AnimGraphRuntime.AnimNode_PoseBlendNode
// Size: 0xD8 (Inherited: 0xB0)
struct FAnimNode_PoseBlendNode : FAnimNode_PoseHandler
{
	struct FPoseLink SourcePose; // 0xB0(0x18)
	EAlphaBlendOption BlendOption; // 0xC8(0x1)
	uint8_t Pad_0xC9[0x7]; // 0xC9(0x7)
	struct UCurveFloat* CustomCurve; // 0xD0(0x8)
};

// Object: ScriptStruct AnimGraphRuntime.AnimNode_PoseByName
// Size: 0xC8 (Inherited: 0xB0)
struct FAnimNode_PoseByName : FAnimNode_PoseHandler
{
	struct FName PoseName; // 0xB0(0x8)
	float PoseWeight; // 0xB8(0x4)
	uint8_t Pad_0xBC[0xC]; // 0xBC(0xC)
};

// Object: ScriptStruct AnimGraphRuntime.RBFParams
// Size: 0x28 (Inherited: 0x0)
struct FRBFParams
{
	int32_t TargetDimensions; // 0x0(0x4)
	float radius; // 0x4(0x4)
	ERBFFunctionType Function; // 0x8(0x1)
	ERBFDistanceMethod DistanceMethod; // 0x9(0x1)
	EBoneAxis TwistAxis; // 0xA(0x1)
	uint8_t Pad_0xB[0x1]; // 0xB(0x1)
	float WeightThreshold; // 0xC(0x4)
	ERBFNormalizeMethod NormalizeMethod; // 0x10(0x1)
	uint8_t Pad_0x11[0x3]; // 0x11(0x3)
	struct FVector MedianReference; // 0x14(0xC)
	float MedianMin; // 0x20(0x4)
	float MedianMax; // 0x24(0x4)
};

// Object: ScriptStruct AnimGraphRuntime.AnimNode_PoseDriver
// Size: 0x168 (Inherited: 0xB0)
struct FAnimNode_PoseDriver : FAnimNode_PoseHandler
{
	struct FPoseLink SourcePose; // 0xB0(0x18)
	struct TArray<struct FBoneReference> SourceBones; // 0xC8(0x10)
	struct TArray<struct FBoneReference> OnlyDriveBones; // 0xD8(0x10)
	struct TArray<struct FPoseDriverTarget> PoseTargets; // 0xE8(0x10)
	uint8_t Pad_0xF8[0x30]; // 0xF8(0x30)
	struct FBoneReference EvalSpaceBone; // 0x128(0x10)
	struct FRBFParams RBFParams; // 0x138(0x28)
	EPoseDriverSource DriveSource; // 0x160(0x1)
	EPoseDriverOutput DriveOutput; // 0x161(0x1)
	uint8_t bOnlyDriveSelectedBones : 1; // 0x162(0x1), Mask(0x1)
	uint8_t BitPad_0x162_1 : 7; // 0x162(0x1)
	uint8_t Pad_0x163[0x5]; // 0x163(0x5)
};

// Object: ScriptStruct AnimGraphRuntime.PoseDriverTarget
// Size: 0xD8 (Inherited: 0x0)
struct FPoseDriverTarget
{
	struct TArray<struct FPoseDriverTransform> BoneTransforms; // 0x0(0x10)
	struct FRotator TargetRotation; // 0x10(0xC)
	float TargetScale; // 0x1C(0x4)
	ERBFDistanceMethod DistanceMethod; // 0x20(0x1)
	ERBFFunctionType FunctionType; // 0x21(0x1)
	uint8_t bApplyCustomCurve : 1; // 0x22(0x1), Mask(0x1)
	uint8_t BitPad_0x22_1 : 7; // 0x22(0x1)
	uint8_t Pad_0x23[0x5]; // 0x23(0x5)
	struct FRichCurve CustomCurve; // 0x28(0x98)
	struct FName DrivenName; // 0xC0(0x8)
	uint8_t Pad_0xC8[0x8]; // 0xC8(0x8)
	uint8_t bIsHidden : 1; // 0xD0(0x1), Mask(0x1)
	uint8_t BitPad_0xD0_1 : 7; // 0xD0(0x1)
	uint8_t Pad_0xD1[0x7]; // 0xD1(0x7)
};

// Object: ScriptStruct AnimGraphRuntime.PoseDriverTransform
// Size: 0x18 (Inherited: 0x0)
struct FPoseDriverTransform
{
	struct FVector TargetTranslation; // 0x0(0xC)
	struct FRotator TargetRotation; // 0xC(0xC)
};

// Object: ScriptStruct AnimGraphRuntime.AnimNode_PoseSnapshot
// Size: 0xC8 (Inherited: 0x48)
struct FAnimNode_PoseSnapshot : FAnimNode_Base
{
	struct FName SnapshotName; // 0x48(0x8)
	struct FPoseSnapshot Snapshot; // 0x50(0x38)
	ESnapshotSourceMode Mode; // 0x88(0x1)
	uint8_t Pad_0x89[0x3F]; // 0x89(0x3F)
};

// Object: ScriptStruct AnimGraphRuntime.AnimNode_RandomPlayer
// Size: 0xA0 (Inherited: 0x48)
struct FAnimNode_RandomPlayer : FAnimNode_Base
{
	struct TArray<struct FRandomPlayerSequenceEntry> Entries; // 0x48(0x10)
	uint8_t Pad_0x58[0x44]; // 0x58(0x44)
	uint8_t bShuffleMode : 1; // 0x9C(0x1), Mask(0x1)
	uint8_t BitPad_0x9C_1 : 7; // 0x9C(0x1)
	uint8_t Pad_0x9D[0x3]; // 0x9D(0x3)
};

// Object: ScriptStruct AnimGraphRuntime.RandomPlayerSequenceEntry
// Size: 0x50 (Inherited: 0x0)
struct FRandomPlayerSequenceEntry
{
	struct UAnimSequence* Sequence; // 0x0(0x8)
	float ChanceToPlay; // 0x8(0x4)
	int32_t MinLoopCount; // 0xC(0x4)
	int32_t MaxLoopCount; // 0x10(0x4)
	float MinPlayRate; // 0x14(0x4)
	float MaxPlayRate; // 0x18(0x4)
	uint8_t Pad_0x1C[0x4]; // 0x1C(0x4)
	struct FAlphaBlend BlendIn; // 0x20(0x30)
};

// Object: ScriptStruct AnimGraphRuntime.AnimNode_MeshSpaceRefPose
// Size: 0x48 (Inherited: 0x48)
struct FAnimNode_MeshSpaceRefPose : FAnimNode_Base
{
};

// Object: ScriptStruct AnimGraphRuntime.AnimNode_RefPose
// Size: 0x50 (Inherited: 0x48)
struct FAnimNode_RefPose : FAnimNode_Base
{
	ERefPoseType RefPoseType; // 0x48(0x1)
	uint8_t Pad_0x49[0x7]; // 0x49(0x7)
};

// Object: ScriptStruct AnimGraphRuntime.AnimNode_ResetRoot
// Size: 0x118 (Inherited: 0x108)
struct FAnimNode_ResetRoot : FAnimNode_SkeletalControlBase
{
	uint8_t Pad_0x108[0x10]; // 0x108(0x10)
};

// Object: ScriptStruct AnimGraphRuntime.AnimNode_RigidBody
// Size: 0x5B0 (Inherited: 0x108)
struct FAnimNode_RigidBody : FAnimNode_SkeletalControlBase
{
	struct UPhysicsAsset* OverridePhysicsAsset; // 0x108(0x8)
	uint8_t Pad_0x110[0x98]; // 0x110(0x98)
	struct FVector OverrideWorldGravity; // 0x1A8(0xC)
	struct FVector RadialForceOrigin; // 0x1B4(0xC)
	float RadialForceStrength; // 0x1C0(0x4)
	float RadialForceRadius; // 0x1C4(0x4)
	struct FVector ExternalForce; // 0x1C8(0xC)
	struct FVector ComponentLinearAccScale; // 0x1D4(0xC)
	struct FVector ComponentLinearVelScale; // 0x1E0(0xC)
	struct FVector ComponentAppliedLinearAccClamp; // 0x1EC(0xC)
	float CachedBoundsScale; // 0x1F8(0x4)
	struct FBoneReference BaseBoneRef; // 0x1FC(0x10)
	ECollisionChannel OverlapChannel; // 0x20C(0x1)
	ESimulationSpace SimulationSpace; // 0x20D(0x1)
	uint8_t bForceDisableCollisionBetweenConstraintBodies : 1; // 0x20E(0x1), Mask(0x1)
	uint8_t BitPad_0x20E_1 : 7; // 0x20E(0x1)
	uint8_t Pad_0x20F[0x1]; // 0x20F(0x1)
	uint8_t bEnableWorldGeometry : 1; // 0x210(0x1), Mask(0x1)
	uint8_t bOverrideWorldGravity : 1; // 0x210(0x1), Mask(0x2)
	uint8_t bTransferBoneVelocities : 1; // 0x210(0x1), Mask(0x4)
	uint8_t bFreezeIncomingPoseOnStart : 1; // 0x210(0x1), Mask(0x8)
	uint8_t bClampLinearTranslationLimitToRefPose : 1; // 0x210(0x1), Mask(0x10)
	uint8_t BitPad_0x210_5 : 3; // 0x210(0x1)
	uint8_t Pad_0x211[0x39F]; // 0x211(0x39F)
};

// Object: ScriptStruct AnimGraphRuntime.AnimNode_RigidBody_Chaos
// Size: 0x5A0 (Inherited: 0x108)
struct FAnimNode_RigidBody_Chaos : FAnimNode_SkeletalControlBase
{
	struct UPhysicsAsset* OverridePhysicsAsset; // 0x108(0x8)
	struct FVector OverrideWorldGravity; // 0x110(0xC)
	struct FVector ExternalForce; // 0x11C(0xC)
	struct FVector ComponentLinearAccScale; // 0x128(0xC)
	struct FVector ComponentLinearVelScale; // 0x134(0xC)
	struct FVector ComponentAppliedLinearAccClamp; // 0x140(0xC)
	float CachedBoundsScale; // 0x14C(0x4)
	struct FBoneReference BaseBoneRef; // 0x150(0x10)
	ECollisionChannel OverlapChannel; // 0x160(0x1)
	ESimulationSpace SimulationSpace; // 0x161(0x1)
	uint8_t bForceDisableCollisionBetweenConstraintBodies : 1; // 0x162(0x1), Mask(0x1)
	uint8_t BitPad_0x162_1 : 7; // 0x162(0x1)
	uint8_t bEnableWorldGeometry : 1; // 0x163(0x1), Mask(0x1)
	uint8_t bOverrideWorldGravity : 1; // 0x163(0x1), Mask(0x2)
	uint8_t bTransferBoneVelocities : 1; // 0x163(0x1), Mask(0x4)
	uint8_t bFreezeIncomingPoseOnStart : 1; // 0x163(0x1), Mask(0x8)
	uint8_t bClampLinearTranslationLimitToRefPose : 1; // 0x163(0x1), Mask(0x10)
	uint8_t BitPad_0x163_5 : 3; // 0x163(0x1)
	uint8_t Pad_0x164[0x43C]; // 0x164(0x43C)
};

// Object: ScriptStruct AnimGraphRuntime.AnimNode_RotateRootBone
// Size: 0xE0 (Inherited: 0x48)
struct FAnimNode_RotateRootBone : FAnimNode_Base
{
	struct FPoseLink BasePose; // 0x48(0x18)
	float Pitch; // 0x60(0x4)
	float Yaw; // 0x64(0x4)
	struct FInputScaleBiasClamp PitchScaleBiasClamp; // 0x68(0x30)
	struct FInputScaleBiasClamp YawScaleBiasClamp; // 0x98(0x30)
	struct FRotator MeshToComponent; // 0xC8(0xC)
	uint8_t Pad_0xD4[0xC]; // 0xD4(0xC)
};

// Object: ScriptStruct AnimGraphRuntime.AnimNode_RotationMultiplier
// Size: 0x150 (Inherited: 0x108)
struct FAnimNode_RotationMultiplier : FAnimNode_SkeletalControlBase
{
	struct FBoneReference TargetBone; // 0x108(0x10)
	struct FBoneReference SourceBone; // 0x118(0x10)
	float Multiplier; // 0x128(0x4)
	EBoneAxis RotationAxisToRefer; // 0x12C(0x1)
	uint8_t bIsAdditive : 1; // 0x12D(0x1), Mask(0x1)
	uint8_t BitPad_0x12D_1 : 7; // 0x12D(0x1)
	uint8_t Pad_0x12E[0x1B]; // 0x12E(0x1B)
	uint8_t bEnableRawPtr : 1; // 0x149(0x1), Mask(0x1)
	uint8_t BitPad_0x149_1 : 7; // 0x149(0x1)
	uint8_t Pad_0x14A[0x6]; // 0x14A(0x6)
};

// Object: ScriptStruct AnimGraphRuntime.AnimNode_RotationOffsetBlendSpace
// Size: 0x3B0 (Inherited: 0x300)
struct FAnimNode_RotationOffsetBlendSpace : FAnimNode_BlendSpacePlayer
{
	struct FPoseLink BasePose; // 0x300(0x18)
	int32_t LODThreshold; // 0x318(0x4)
	float Alpha; // 0x31C(0x4)
	struct FInputScaleBias AlphaScaleBias; // 0x320(0x8)
	struct FInputAlphaBoolBlend AlphaBoolBlend; // 0x328(0x48)
	struct FName AlphaCurveName; // 0x370(0x8)
	struct FInputScaleBiasClamp AlphaScaleBiasClamp; // 0x378(0x30)
	uint8_t Pad_0x3A8[0x4]; // 0x3A8(0x4)
	EAnimAlphaInputType AlphaInputType; // 0x3AC(0x1)
	uint8_t bAlphaBoolEnabled : 1; // 0x3AD(0x1), Mask(0x1)
	uint8_t BitPad_0x3AD_1 : 7; // 0x3AD(0x1)
	uint8_t Pad_0x3AE[0x2]; // 0x3AE(0x2)
};

// Object: ScriptStruct AnimGraphRuntime.AnimNode_ScaleChainLength
// Size: 0xB8 (Inherited: 0x48)
struct FAnimNode_ScaleChainLength : FAnimNode_Base
{
	struct FPoseLink InputPose; // 0x48(0x18)
	float DefaultChainLength; // 0x60(0x4)
	struct FBoneReference ChainStartBone; // 0x64(0x10)
	struct FBoneReference ChainEndBone; // 0x74(0x10)
	struct FVector TargetLocation; // 0x84(0xC)
	float Alpha; // 0x90(0x4)
	uint8_t Pad_0x94[0x4]; // 0x94(0x4)
	struct FInputScaleBias AlphaScaleBias; // 0x98(0x8)
	EScaleChainInitialLength ChainInitialLength; // 0xA0(0x1)
	uint8_t Pad_0xA1[0x17]; // 0xA1(0x17)
};

// Object: ScriptStruct AnimGraphRuntime.AnimNode_SequenceEvaluator
// Size: 0xE0 (Inherited: 0x68)
struct FAnimNode_SequenceEvaluator : FAnimNode_AssetPlayerBase
{
	struct UAnimSequenceBase* Sequence; // 0x68(0x8)
	float ExplicitTime; // 0x70(0x4)
	uint8_t bShouldLoop : 1; // 0x74(0x1), Mask(0x1)
	uint8_t BitPad_0x74_1 : 7; // 0x74(0x1)
	uint8_t bUseCachePose : 1; // 0x75(0x1), Mask(0x1)
	uint8_t BitPad_0x75_1 : 7; // 0x75(0x1)
	uint8_t bSequenceChangedResetTime : 1; // 0x76(0x1), Mask(0x1)
	uint8_t BitPad_0x76_1 : 7; // 0x76(0x1)
	uint8_t bTeleportToExplicitTime : 1; // 0x77(0x1), Mask(0x1)
	uint8_t BitPad_0x77_1 : 7; // 0x77(0x1)
	ESequenceEvalReinit ReinitializationBehavior; // 0x78(0x1)
	uint8_t Pad_0x79[0x3]; // 0x79(0x3)
	float StartPosition; // 0x7C(0x4)
	uint8_t Pad_0x80[0x10]; // 0x80(0x10)
	uint8_t bEnableRawPtr : 1; // 0x90(0x1), Mask(0x1)
	uint8_t BitPad_0x90_1 : 7; // 0x90(0x1)
	uint8_t Pad_0x91[0x7]; // 0x91(0x7)
	struct UAnimSequenceBase* PreviousSequence; // 0x98(0x8)
	uint8_t Pad_0xA0[0x40]; // 0xA0(0x40)
};

// Object: ScriptStruct AnimGraphRuntime.AnimNode_SplineIK
// Size: 0x2A8 (Inherited: 0x108)
struct FAnimNode_SplineIK : FAnimNode_SkeletalControlBase
{
	struct FBoneReference StartBone; // 0x108(0x10)
	struct FBoneReference EndBone; // 0x118(0x10)
	ESplineBoneAxis BoneAxis; // 0x128(0x1)
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

// Object: ScriptStruct AnimGraphRuntime.SplineIKCachedBoneData
// Size: 0x14 (Inherited: 0x0)
struct FSplineIKCachedBoneData
{
	struct FBoneReference Bone; // 0x0(0x10)
	int32_t RefSkeletonIndex; // 0x10(0x4)
};

// Object: ScriptStruct AnimGraphRuntime.AnimNode_SpringBone
// Size: 0x168 (Inherited: 0x108)
struct FAnimNode_SpringBone : FAnimNode_SkeletalControlBase
{
	struct FBoneReference SpringBone; // 0x108(0x10)
	float MaxDisplacement; // 0x118(0x4)
	float SpringStiffness; // 0x11C(0x4)
	float SpringDamping; // 0x120(0x4)
	float ErrorResetThresh; // 0x124(0x4)
	uint8_t Pad_0x128[0x3C]; // 0x128(0x3C)
	uint8_t bLimitDisplacement : 1; // 0x164(0x1), Mask(0x1)
	uint8_t bTranslateX : 1; // 0x164(0x1), Mask(0x2)
	uint8_t bTranslateY : 1; // 0x164(0x1), Mask(0x4)
	uint8_t bTranslateZ : 1; // 0x164(0x1), Mask(0x8)
	uint8_t bRotateX : 1; // 0x164(0x1), Mask(0x10)
	uint8_t bRotateY : 1; // 0x164(0x1), Mask(0x20)
	uint8_t bRotateZ : 1; // 0x164(0x1), Mask(0x40)
	uint8_t BitPad_0x164_7 : 1; // 0x164(0x1)
	uint8_t Pad_0x165[0x3]; // 0x165(0x3)
};

// Object: ScriptStruct AnimGraphRuntime.AnimNode_StateResult
// Size: 0x70 (Inherited: 0x70)
struct FAnimNode_StateResult : FAnimNode_Root
{
};

// Object: ScriptStruct AnimGraphRuntime.AnimNode_Trail
// Size: 0x2C0 (Inherited: 0x108)
struct FAnimNode_Trail : FAnimNode_SkeletalControlBase
{
	uint8_t Pad_0x108[0x38]; // 0x108(0x38)
	struct FBoneReference TrailBone; // 0x140(0x10)
	int32_t ChainLength; // 0x150(0x4)
	EAxis ChainBoneAxis; // 0x154(0x1)
	uint8_t bInvertChainBoneAxis : 1; // 0x155(0x1), Mask(0x1)
	uint8_t bLimitStretch : 1; // 0x155(0x1), Mask(0x2)
	uint8_t bLimitRotation : 1; // 0x155(0x1), Mask(0x4)
	uint8_t bUsePlanarLimit : 1; // 0x155(0x1), Mask(0x8)
	uint8_t bActorSpaceFakeVel : 1; // 0x155(0x1), Mask(0x10)
	uint8_t bReorientParentToChild : 1; // 0x155(0x1), Mask(0x20)
	uint8_t BitPad_0x155_6 : 2; // 0x155(0x1)
	uint8_t Pad_0x156[0x2]; // 0x156(0x2)
	float MaxDeltaTime; // 0x158(0x4)
	float RelaxationSpeedScale; // 0x15C(0x4)
	struct FRuntimeFloatCurve TrailRelaxationSpeed; // 0x160(0xA0)
	struct FInputScaleBiasClamp RelaxationSpeedScaleInputProcessor; // 0x200(0x30)
	struct TArray<struct FRotationLimit> RotationLimits; // 0x230(0x10)
	struct TArray<struct FVector> RotationOffsets; // 0x240(0x10)
	struct TArray<struct FAnimPhysPlanarLimit> PlanarLimits; // 0x250(0x10)
	float StretchLimit; // 0x260(0x4)
	struct FVector FakeVelocity; // 0x264(0xC)
	struct FBoneReference BaseJoint; // 0x270(0x10)
	float LastBoneRotationAnimAlphaBlend; // 0x280(0x4)
	uint8_t Pad_0x284[0x3C]; // 0x284(0x3C)
};

// Object: ScriptStruct AnimGraphRuntime.RotationLimit
// Size: 0x18 (Inherited: 0x0)
struct FRotationLimit
{
	struct FVector LimitMin; // 0x0(0xC)
	struct FVector LimitMax; // 0xC(0xC)
};

// Object: ScriptStruct AnimGraphRuntime.ReferenceBoneFrame
// Size: 0x20 (Inherited: 0x0)
struct FReferenceBoneFrame
{
	struct FBoneReference Bone; // 0x0(0x10)
	struct FAxis Axis; // 0x10(0x10)
};

// Object: ScriptStruct AnimGraphRuntime.AnimNode_TwistCorrectiveNode
// Size: 0x178 (Inherited: 0x108)
struct FAnimNode_TwistCorrectiveNode : FAnimNode_SkeletalControlBase
{
	struct FReferenceBoneFrame BaseFrame; // 0x108(0x20)
	struct FReferenceBoneFrame TwistFrame; // 0x128(0x20)
	struct FAxis TwistPlaneNormalAxis; // 0x148(0x10)
	float RangeMax; // 0x158(0x4)
	float RemappedMin; // 0x15C(0x4)
	float RemappedMax; // 0x160(0x4)
	struct FAnimCurveParam Curve; // 0x164(0xC)
	uint8_t Pad_0x170[0x8]; // 0x170(0x8)
};

// Object: ScriptStruct AnimGraphRuntime.AnimNode_TwoBoneIK
// Size: 0x220 (Inherited: 0x108)
struct FAnimNode_TwoBoneIK : FAnimNode_SkeletalControlBase
{
	struct FBoneReference IKBone; // 0x108(0x10)
	float StartStretchRatio; // 0x118(0x4)
	float MaxStretchScale; // 0x11C(0x4)
	struct FVector EffectorLocation; // 0x120(0xC)
	uint8_t Pad_0x12C[0x4]; // 0x12C(0x4)
	struct FBoneSocketTarget EffectorTarget; // 0x130(0x60)
	struct FVector JointTargetLocation; // 0x190(0xC)
	uint8_t Pad_0x19C[0x4]; // 0x19C(0x4)
	struct FBoneSocketTarget JointTarget; // 0x1A0(0x60)
	struct FAxis TwistAxis; // 0x200(0x10)
	EBoneControlSpace EffectorLocationSpace; // 0x210(0x1)
	EBoneControlSpace JointTargetLocationSpace; // 0x211(0x1)
	uint8_t bAllowStretching : 1; // 0x212(0x1), Mask(0x1)
	uint8_t bTakeRotationFromEffectorSpace : 1; // 0x212(0x1), Mask(0x2)
	uint8_t bMaintainEffectorRelRot : 1; // 0x212(0x1), Mask(0x4)
	uint8_t bAllowTwist : 1; // 0x212(0x1), Mask(0x8)
	uint8_t BitPad_0x212_4 : 4; // 0x212(0x1)
	uint8_t Pad_0x213[0xD]; // 0x213(0xD)
};

// Object: ScriptStruct AnimGraphRuntime.AnimNode_TwoWayBlend
// Size: 0x120 (Inherited: 0x48)
struct FAnimNode_TwoWayBlend : FAnimNode_Base
{
	struct FPoseLink A; // 0x48(0x18)
	struct FPoseLink B; // 0x60(0x18)
	EAnimAlphaInputType AlphaInputType; // 0x78(0x1)
	uint8_t bAlphaBoolEnabled : 1; // 0x79(0x1), Mask(0x1)
	uint8_t BitPad_0x79_1 : 2; // 0x79(0x1)
	uint8_t bResetChildOnActivation : 1; // 0x79(0x1), Mask(0x8)
	uint8_t BitPad_0x79_4 : 4; // 0x79(0x1)
	uint8_t Pad_0x7A[0x2]; // 0x7A(0x2)
	float Alpha; // 0x7C(0x4)
	struct FInputScaleBias AlphaScaleBias; // 0x80(0x8)
	struct FInputAlphaBoolBlend AlphaBoolBlend; // 0x88(0x48)
	struct FName AlphaCurveName; // 0xD0(0x8)
	struct FInputScaleBiasClamp AlphaScaleBiasClamp; // 0xD8(0x30)
	uint8_t Pad_0x108[0x11]; // 0x108(0x11)
	uint8_t bEnableRawPtr : 1; // 0x119(0x1), Mask(0x1)
	uint8_t BitPad_0x119_1 : 7; // 0x119(0x1)
	uint8_t Pad_0x11A[0x6]; // 0x11A(0x6)
};

// Object: ScriptStruct AnimGraphRuntime.AnimSequencerInstanceProxy
// Size: 0xAF0 (Inherited: 0x7A0)
struct FAnimSequencerInstanceProxy : FAnimInstanceProxy
{
	uint8_t Pad_0x7A0[0x350]; // 0x7A0(0x350)
};

// Object: ScriptStruct AnimGraphRuntime.PositionHistory
// Size: 0x30 (Inherited: 0x0)
struct FPositionHistory
{
	struct TArray<struct FVector> Positions; // 0x0(0x10)
	float Range; // 0x10(0x4)
	uint8_t Pad_0x14[0x1C]; // 0x14(0x1C)
};

// Object: ScriptStruct AnimGraphRuntime.RBFEntry
// Size: 0x10 (Inherited: 0x0)
struct FRBFEntry
{
	struct TArray<float> Values; // 0x0(0x10)
};

// Object: ScriptStruct AnimGraphRuntime.RBFTarget
// Size: 0xB8 (Inherited: 0x10)
struct FRBFTarget : FRBFEntry
{
	float ScaleFactor; // 0x10(0x4)
	uint8_t bApplyCustomCurve : 1; // 0x14(0x1), Mask(0x1)
	uint8_t BitPad_0x14_1 : 7; // 0x14(0x1)
	uint8_t Pad_0x15[0x3]; // 0x15(0x3)
	struct FRichCurve CustomCurve; // 0x18(0x98)
	ERBFDistanceMethod DistanceMethod; // 0xB0(0x1)
	ERBFFunctionType FunctionType; // 0xB1(0x1)
	uint8_t Pad_0xB2[0x6]; // 0xB2(0x6)
};

// Object: Class AnimGraphRuntime.AnimCustomInstance
// Size: 0x270 (Inherited: 0x270)
struct UAnimCustomInstance : UAnimInstance
{	DEFINE_UE_CLASS_HELPERS(UAnimCustomInstance, "AnimCustomInstance")

};

// Object: Class AnimGraphRuntime.AnimNotify_PlayMontageNotify
// Size: 0x40 (Inherited: 0x38)
struct UAnimNotify_PlayMontageNotify : UAnimNotify
{
	struct FName NotifyName; // 0x38(0x8)
	DEFINE_UE_CLASS_HELPERS(UAnimNotify_PlayMontageNotify, "AnimNotify_PlayMontageNotify")

};

// Object: Class AnimGraphRuntime.AnimNotify_PlayMontageNotifyWindow
// Size: 0x38 (Inherited: 0x30)
struct UAnimNotify_PlayMontageNotifyWindow : UAnimNotifyState
{
	struct FName NotifyName; // 0x2C(0x8)
	DEFINE_UE_CLASS_HELPERS(UAnimNotify_PlayMontageNotifyWindow, "AnimNotify_PlayMontageNotifyWindow")

};

// Object: Class AnimGraphRuntime.AnimSequencerInstance
// Size: 0x270 (Inherited: 0x270)
struct UAnimSequencerInstance : UAnimCustomInstance
{	DEFINE_UE_CLASS_HELPERS(UAnimSequencerInstance, "AnimSequencerInstance")

};

// Object: Class AnimGraphRuntime.KismetAnimationLibrary
// Size: 0x28 (Inherited: 0x28)
struct UKismetAnimationLibrary : UBlueprintFunctionLibrary
{

	// Object: Function AnimGraphRuntime.KismetAnimationLibrary.K2_TwoBoneIK
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure]
	// Offset: 0x164cd610
	// Params: [ Num(10) Size(0x60) ]
	static void K2_TwoBoneIK(const struct FVector& RootPos, const struct FVector& JointPos, const struct FVector& EndPos, const struct FVector& JointTarget, const struct FVector& Effector, struct FVector& OutJointPos, struct FVector& OutEndPos, uint8_t bAllowStretching, float StartStretchRatio, float MaxStretchScale);

	// Object: Function AnimGraphRuntime.KismetAnimationLibrary.K2_StartProfilingTimer
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x164cd5fc
	// Params: [ Num(0) Size(0x0) ]
	static void K2_StartProfilingTimer();

	// Object: Function AnimGraphRuntime.KismetAnimationLibrary.K2_MakePerlinNoiseVectorAndRemap
	// Flags: [Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure]
	// Offset: 0x164cd380
	// Params: [ Num(10) Size(0x30) ]
	static struct FVector K2_MakePerlinNoiseVectorAndRemap(float X, float Y, float Z, float RangeOutMinX, float RangeOutMaxX, float RangeOutMinY, float RangeOutMaxY, float RangeOutMinZ, float RangeOutMaxZ);

	// Object: Function AnimGraphRuntime.KismetAnimationLibrary.K2_MakePerlinNoiseAndRemap
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x164cd268
	// Params: [ Num(4) Size(0x10) ]
	static float K2_MakePerlinNoiseAndRemap(float Value, float RangeOutMin, float RangeOutMax);

	// Object: Function AnimGraphRuntime.KismetAnimationLibrary.K2_LookAt
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure]
	// Offset: 0x164cd034
	// Params: [ Num(7) Size(0x90) ]
	static struct FTransform K2_LookAt(const struct FTransform& CurrentTransform, const struct FVector& TargetPosition, struct FVector LookAtVector, uint8_t bUseUpVector, struct FVector UpVector, float ClampConeInDegree);

	// Object: Function AnimGraphRuntime.KismetAnimationLibrary.K2_EndProfilingTimer
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x164ccf44
	// Params: [ Num(3) Size(0x1C) ]
	static float K2_EndProfilingTimer(uint8_t bLog, struct FString LogPrefix);

	// Object: Function AnimGraphRuntime.KismetAnimationLibrary.K2_DistanceBetweenTwoSocketsAndMapRange
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0xf5632ec
	// Params: [ Num(11) Size(0x34) ]
	static float K2_DistanceBetweenTwoSocketsAndMapRange(struct USkeletalMeshComponent* Component, struct FName SocketOrBoneNameA, ERelativeTransformSpace SocketSpaceA, struct FName SocketOrBoneNameB, ERelativeTransformSpace SocketSpaceB, uint8_t bRemapRange, float InRangeMin, float InRangeMax, float OutRangeMin, float OutRangeMax);

	// Object: Function AnimGraphRuntime.KismetAnimationLibrary.K2_DirectionBetweenSockets
	// Flags: [Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure]
	// Offset: 0x164cce28
	// Params: [ Num(4) Size(0x24) ]
	static struct FVector K2_DirectionBetweenSockets(struct USkeletalMeshComponent* Component, struct FName SocketOrBoneNameFrom, struct FName SocketOrBoneNameTo);

	// Object: Function AnimGraphRuntime.KismetAnimationLibrary.K2_CalculateVelocityFromSockets
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable]
	// Offset: 0x164cca80
	// Params: [ Num(13) Size(0x114) ]
	static float K2_CalculateVelocityFromSockets(float DeltaSeconds, struct USkeletalMeshComponent* Component, struct FName SocketOrBoneName, struct FName ReferenceSocketOrBone, ERelativeTransformSpace SocketSpace, struct FVector OffsetInBoneSpace, struct FPositionHistory& History, int32_t NumberOfSamples, float VelocityMin, float VelocityMax, EEasingFuncType EasingType, const struct FRuntimeFloatCurve& CustomCurve);

	// Object: Function AnimGraphRuntime.KismetAnimationLibrary.K2_CalculateVelocityFromPositionHistory
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable]
	// Offset: 0x164cc880
	// Params: [ Num(7) Size(0x50) ]
	static float K2_CalculateVelocityFromPositionHistory(float DeltaSeconds, struct FVector Position, struct FPositionHistory& History, int32_t NumberOfSamples, float VelocityMin, float VelocityMax);
	DEFINE_UE_CLASS_HELPERS(UKismetAnimationLibrary, "KismetAnimationLibrary")

};

// Object: Class AnimGraphRuntime.PlayMontageCallbackProxy
// Size: 0xA8 (Inherited: 0x28)
struct UPlayMontageCallbackProxy : UObject
{
	struct FMulticastInlineDelegate OnCompleted; // 0x28(0x10)
	struct FMulticastInlineDelegate OnBlendOut; // 0x38(0x10)
	struct FMulticastInlineDelegate OnInterrupted; // 0x48(0x10)
	struct FMulticastInlineDelegate OnNotifyBegin; // 0x58(0x10)
	struct FMulticastInlineDelegate OnNotifyEnd; // 0x68(0x10)
	uint8_t Pad_0x78[0x30]; // 0x78(0x30)


	// Object: Function AnimGraphRuntime.PlayMontageCallbackProxy.OnNotifyEndReceived
	// Flags: [Final|Native|Protected|HasOutParms]
	// Offset: 0x164cdc3c
	// Params: [ Num(2) Size(0x28) ]
	void OnNotifyEndReceived(struct FName NotifyName, const struct FBranchingPointNotifyPayload& BranchingPointNotifyPayload);

	// Object: Function AnimGraphRuntime.PlayMontageCallbackProxy.OnNotifyBeginReceived
	// Flags: [Final|Native|Protected|HasOutParms]
	// Offset: 0x164cdb40
	// Params: [ Num(2) Size(0x28) ]
	void OnNotifyBeginReceived(struct FName NotifyName, const struct FBranchingPointNotifyPayload& BranchingPointNotifyPayload);

	// Object: Function AnimGraphRuntime.PlayMontageCallbackProxy.OnMontageEnded
	// Flags: [Final|Native|Protected]
	// Offset: 0x164cda58
	// Params: [ Num(2) Size(0x9) ]
	void OnMontageEnded(struct UAnimMontage* Montage, uint8_t bInterrupted);

	// Object: Function AnimGraphRuntime.PlayMontageCallbackProxy.OnMontageBlendingOut
	// Flags: [Final|Native|Protected]
	// Offset: 0x164cd970
	// Params: [ Num(2) Size(0x9) ]
	void OnMontageBlendingOut(struct UAnimMontage* Montage, uint8_t bInterrupted);

	// Object: Function AnimGraphRuntime.PlayMontageCallbackProxy.CreateProxyObjectForPlayMontage
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x1007c764
	// Params: [ Num(6) Size(0x28) ]
	static struct UPlayMontageCallbackProxy* CreateProxyObjectForPlayMontage(struct USkeletalMeshComponent* InSkeletalMeshComponent, struct UAnimMontage* montageToPlay, float PlayRate, float StartingPosition, struct FName StartingSection);
	DEFINE_UE_CLASS_HELPERS(UPlayMontageCallbackProxy, "PlayMontageCallbackProxy")

};

} // namespace SDK
